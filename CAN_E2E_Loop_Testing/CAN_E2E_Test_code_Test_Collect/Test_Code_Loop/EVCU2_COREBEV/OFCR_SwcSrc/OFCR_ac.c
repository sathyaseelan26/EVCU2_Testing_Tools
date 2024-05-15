/*
 * File: OFCR_ac.c
 *
 * Code generated for Simulink model 'OFCR_ac'.
 *
 * Model version                  : 9.95
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:34:54 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "OFCR_ac.h"

/* Named constants for Chart: '<S19>/Stateflow Chart' */
#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Ind1_Blink          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Ind2_Blink          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Ind3_Blink          ((uint8)3U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Ind4_Blink          ((uint8)4U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Ind5_Blink          ((uint8)5U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Off                 ((uint8)6U)
#endif

/* Named constants for Chart: '<S75>/BulbCheck' */
#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Blue                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Green               ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Off_j               ((uint8)3U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Red                 ((uint8)4U)
#endif

/* Named constants for Chart: '<S214>/BulbTrigSeq' */
#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_Init                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_State1              ((uint8)2U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_State2              ((uint8)3U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_State3              ((uint8)4U)
#endif

#if Rte_SysCon_Variant_OFCR_FUNC
#define OFCR_ac_IN_State4              ((uint8)5U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_OFCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) HeOFCR_b_Actvt5LED = 1;/* Referenced by: '<S13>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) HeOFCR_b_EnblLIN1_BusOff = 1;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) HeOFCR_b_EnblLIN2_BusOff = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) HeOFCR_b_EnblLIN3_BusOff = 0;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) HeOFCR_b_Ignore_SOC_Max_Lev = 1;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) HeOFCR_t_ExecRate = 0.1F;/* Referenced by:
                                                                      * '<S159>/Calib'
                                                                      * '<S163>/Calib'
                                                                      * '<S84>/Calib'
                                                                      * '<S88>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KaOFCR_k_CPIMTestColor[243] =
{
    0.0F, 1.0F, 2.0F, 10.0F, 11.0F, 12.0F, 20.0F, 21.0F, 22.0F, 100.0F, 101.0F,
    102.0F, 110.0F, 111.0F, 112.0F, 120.0F, 121.0F, 122.0F, 200.0F, 201.0F,
    202.0F, 210.0F, 211.0F, 212.0F, 220.0F, 221.0F, 222.0F, 1000.0F, 1001.0F,
    1002.0F, 1010.0F, 1011.0F, 1012.0F, 1020.0F, 1021.0F, 1022.0F, 1100.0F,
    1101.0F, 1102.0F, 1110.0F, 1111.0F, 1112.0F, 1120.0F, 1121.0F, 1122.0F,
    1200.0F, 1201.0F, 1202.0F, 1210.0F, 1211.0F, 1212.0F, 1220.0F, 1221.0F,
    1222.0F, 2000.0F, 2001.0F, 2002.0F, 2010.0F, 2011.0F, 2012.0F, 2020.0F,
    2021.0F, 2022.0F, 2100.0F, 2101.0F, 2102.0F, 2110.0F, 2111.0F, 2112.0F,
    2120.0F, 2121.0F, 2122.0F, 2200.0F, 2201.0F, 2202.0F, 2210.0F, 2211.0F,
    2212.0F, 2220.0F, 2221.0F, 2222.0F, 10000.0F, 10001.0F, 10002.0F, 10010.0F,
    10011.0F, 10012.0F, 10020.0F, 10021.0F, 10022.0F, 10100.0F, 10101.0F,
    10102.0F, 10110.0F, 10111.0F, 10112.0F, 10120.0F, 10121.0F, 10122.0F,
    10200.0F, 10201.0F, 10202.0F, 10210.0F, 10211.0F, 10212.0F, 10220.0F,
    10221.0F, 10222.0F, 11000.0F, 11001.0F, 11002.0F, 11010.0F, 11011.0F,
    11012.0F, 11020.0F, 11021.0F, 11022.0F, 11100.0F, 11101.0F, 11102.0F,
    11110.0F, 11111.0F, 11112.0F, 11120.0F, 11121.0F, 11122.0F, 11200.0F,
    11201.0F, 11202.0F, 11210.0F, 11211.0F, 11212.0F, 11220.0F, 11221.0F,
    11222.0F, 12000.0F, 12001.0F, 12002.0F, 12010.0F, 12011.0F, 12012.0F,
    12020.0F, 12021.0F, 12022.0F, 12100.0F, 12101.0F, 12102.0F, 12110.0F,
    12111.0F, 12112.0F, 12120.0F, 12121.0F, 12122.0F, 12200.0F, 12201.0F,
    12202.0F, 12210.0F, 12211.0F, 12212.0F, 12220.0F, 12221.0F, 12222.0F,
    20000.0F, 20001.0F, 20002.0F, 20010.0F, 20011.0F, 20012.0F, 20020.0F,
    20021.0F, 20022.0F, 20100.0F, 20101.0F, 20102.0F, 20110.0F, 20111.0F,
    20112.0F, 20120.0F, 20121.0F, 20122.0F, 20200.0F, 20201.0F, 20202.0F,
    20210.0F, 20211.0F, 20212.0F, 20220.0F, 20221.0F, 20222.0F, 21000.0F,
    21001.0F, 21002.0F, 21010.0F, 21011.0F, 21012.0F, 21020.0F, 21021.0F,
    21022.0F, 21100.0F, 21101.0F, 21102.0F, 21110.0F, 21111.0F, 21112.0F,
    21120.0F, 21121.0F, 21122.0F, 21200.0F, 21201.0F, 21202.0F, 21210.0F,
    21211.0F, 21212.0F, 21220.0F, 21221.0F, 21222.0F, 22000.0F, 22001.0F,
    22002.0F, 22010.0F, 22011.0F, 22012.0F, 22020.0F, 22021.0F, 22022.0F,
    22100.0F, 22101.0F, 22102.0F, 22110.0F, 22111.0F, 22112.0F, 22120.0F,
    22121.0F, 22122.0F, 22200.0F, 22201.0F, 22202.0F, 22210.0F, 22211.0F,
    22212.0F, 22220.0F, 22221.0F, 22222.0F
} ;                                    /* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(uint16, OFCR_VAR_INIT) KeOFCR_Cnt_ColorTimer = 19U;/* Referenced by: '<S196>/Calib' */

#endif

#if !Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_I_ChrgPortOTCrnt = 0.0F;/* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_I_DCInletOT = 1000.0F;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_I_InletOT = 6.0F;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_I_NoDerate = 1000.0F;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_Pct_HVBatSOC_HCP_Val = 0.0F;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Abs_LSPDerate = 105.0F;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Abs_LSPDerate2Normal =
    105.0F;                            /* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Abs_LSPStop = 105.0F;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Abs_RSPDerate = 115.0F;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Abs_RSPDerate2Normal =
    115.0F;                            /* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Abs_RSPStop = 115.0F;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Chrg_Inlet_Temp_Val =
    0.0F;                              /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_DCNegTempOvrdVal = 0.0F;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_DCPosTempOvrdVal = 0.0F;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_LSPDerate2Normal =
    30.0F;                             /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_LSPDerate_DCNeg =
    50.0F;                             /* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_LSPDerate_DCPos =
    50.0F;                             /* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_LSPStop_DCNeg = 55.0F;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_LSPStop_DCPos = 55.0F;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_RSPDerate2Normal =
    45.0F;                             /* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_RSPDerate_DCNeg =
    45.0F;                             /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_RSPDerate_DCPos =
    45.0F;                             /* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_RSPStop_DCNeg = 53.0F;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_Del_RSPStop_DCPos = 53.0F;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_EstAmbAirTemp_Val = 0.0F;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_LSPAbsOTThrshldFlt =
    133.0F;                            /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_LSPDeltaOTThrshldFlt =
    48.0F;                             /* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_RSPAbsOTThrshldFlt =
    135.0F;                            /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_T_RSPDeltaOTThrshldFlt =
    50.0F;                             /* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ACTempSensAvail = 0;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_AllowStopDC = 0;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_AlwBCIMKnigtRdrInUnlock =
    0;                                 /* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_AlwCPIMBluFlshInUnlock =
    0;                                 /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_AlwCPIMKnitRdrInUnlock =
    0;                                 /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BCIM_BlinkRate_Cmd_Ovrd =
    0;                                 /* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BCIM_Ind1_Cmd_Ovrd = 0;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BCIM_Ind2_Cmd_Ovrd = 0;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BCIM_Ind3_Cmd_Ovrd = 0;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BCIM_Ind4_Cmd_Ovrd = 0;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BCIM_Ind5_Cmd_Ovrd = 0;/* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BCIM_IndColor_Cmd_Ovrd =
    0;                                 /* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BlinkRate_Cmd_Ovrd = 0;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_BrkPedalDscrtInptOvrd = 0;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIMIconMismatch_Ovrd = 0;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIMIconMismatch_Val = 0;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon1_CmdOutOvrd = 0;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon1_Cmd_Ovrd = 0;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon1_FailStsOvrd =
    0;                                 /* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon1_FailStsVal = 0;/* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon2_CmdOutOvrd = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon2_Cmd_Ovrd = 0;/* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon2_FailStsOvrd =
    0;                                 /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_CPIM_Icon2_FailStsVal = 0;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ChargeType_Ovrd = 0;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ChrgPortOT_DerateRq_Ovrd =
    0;                                 /* Referenced by: '<S348>/Calib' */

#endif

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ChrgPortOT_DerateRq_Val =
    0;                                 /* Referenced by:
                                        * '<S349>/Calib'
                                        * '<S392>/Calib'
                                        */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ChrgPortOT_StopChrg_Ovrd =
    0;                                 /* Referenced by: '<S350>/Calib' */

#endif

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ChrgPortOT_StopChrg_Val =
    0;                                 /* Referenced by:
                                        * '<S351>/Calib'
                                        * '<S393>/Calib'
                                        */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ChrgSysFault_ReasonOvrd =
    0;                                 /* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Chrg_Inlet_Temp_Ovrd = 0;/* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DCNegTempFAOvrd = 0;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DCNegTempFAVal = 0;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DCNegTempOvrd = 0;/* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DCPosTempFAOvrd = 0;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DCPosTempFAVal = 0;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DCPosTempOvrd = 0;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DCTempSensAvail = 0;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Derate_InletFA = 0;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DriveReady_Ovrd = 0;/* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DriveReady_Val = 0;/* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_DschrgSysSts_Ovrd = 0;/* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_EnableDischarge_Ovrd = 0;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_EnableDischarge_Val = 0;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_EstAmbAirTempFA_Ovrd = 0;/* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_EstAmbAirTempFA_Val = 0;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_EstAmbAirTemp_Ovrd = 0;/* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_HVBatSOC_HCP_Ovrd = 0;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Ind1_Cmd_Ovrd = 0;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Ind2_Cmd_Ovrd = 0;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Ind3_Cmd_Ovrd = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Ind4_Cmd_Ovrd = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Ind5_Cmd_Ovrd = 0;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_IndColor_Cmd_Ovrd = 0;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_InletTempRatFail_Ovrd = 0;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_InletTempRatFail_Val = 0;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_InternalLightSts_Ovrd = 0;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_InternalLightSts_Val = 0;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_LINOffLOCCPIM_ACStop = 0;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_LINOffLOCCPIM_DCStop = 0;/* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_NoSchEnbl_Ovrd = 0;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_NoSchEnbl_Val = 0;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdEnblChrgPrtLck_BCI =
    0;                                 /* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdEnblChrgSysFault = 0;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdEnblChrgSysSts = 0;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdEnblKeySts = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdEnblPluggedIn = 0;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdEnblSmartEVSEDtctd =
    0;                                 /* Referenced by: '<S317>/Calib' */

#endif

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValBlue = 0;/* Referenced by:
                                                                      * '<S358>/Calib'
                                                                      * '<S394>/Calib'
                                                                      */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValChrgPrtLck_BCI = 0;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValChrgSysFault = 0;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValEnblBlue = 0;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValEnblGreen = 0;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValEnblRed = 0;/* Referenced by: '<S361>/Calib' */

#endif

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValGreen = 0;/* Referenced by:
                                                                      * '<S362>/Calib'
                                                                      * '<S395>/Calib'
                                                                      */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValPluggedIn = 0;/* Referenced by: '<S320>/Calib' */

#endif

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValRed = 0;/* Referenced by:
                                                                      * '<S363>/Calib'
                                                                      * '<S396>/Calib'
                                                                      */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_OvrdValSmartEVSEDtctd = 0;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_PassThru_IntLghtSts = 0;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Rdy4ShtDwn_Ovrd = 0;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Rdy4ShtDwn_Val = 0;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_SCPRChargeReq_Ovrd = 0;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_SCPRChargeReq_Val = 0;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_SecureConnV2L_Ovrd = 0;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_SecureConnV2L_Val = 0;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_ShifterPOSOvrd = 0;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_SnsronLINBus = 0;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_Stop_InletFA = 1;/* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(boolean, OFCR_VAR_INIT) KeOFCR_b_TriggerBulbs = 0;/* Referenced by: '<S215>/Calib' */

#endif

static volatile CONST(TeCITR_e_BCIM_BlinkRate, OFCR_VAR_INIT)
    KeOFCR_e_BCIM_BlinkRate_Cmd_Val = CeCITR_e_BCIM_NoBlink;/* Referenced by:
                                                             * '<S364>/Calib'
                                                             * '<S397>/Calib'
                                                             */
static volatile CONST(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_BCIM_Ind1_Cmd_Val = CeCITR_e_BCIM_Ind_Off;/* Referenced by:
                                                        * '<S365>/Calib'
                                                        * '<S398>/Calib'
                                                        */
static volatile CONST(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_BCIM_Ind2_Cmd_Val = CeCITR_e_BCIM_Ind_Off;/* Referenced by:
                                                        * '<S366>/Calib'
                                                        * '<S399>/Calib'
                                                        */
static volatile CONST(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_BCIM_Ind3_Cmd_Val = CeCITR_e_BCIM_Ind_Off;/* Referenced by:
                                                        * '<S367>/Calib'
                                                        * '<S400>/Calib'
                                                        */
static volatile CONST(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_BCIM_Ind4_Cmd_Val = CeCITR_e_BCIM_Ind_Off;/* Referenced by:
                                                        * '<S368>/Calib'
                                                        * '<S401>/Calib'
                                                        */
static volatile CONST(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_BCIM_Ind5_Cmd_Val = CeCITR_e_BCIM_Ind_Off;/* Referenced by:
                                                        * '<S369>/Calib'
                                                        * '<S402>/Calib'
                                                        */
static volatile CONST(TeCITR_e_BCIM_Color, OFCR_VAR_INIT)
    KeOFCR_e_BCIM_IndColor_Cmd_Val = CeCITR_e_BCIM_NoColor;/* Referenced by:
                                                            * '<S370>/Calib'
                                                            * '<S403>/Calib'
                                                            */
static volatile CONST(TeCITR_e_CPIM_BlinkRate, OFCR_VAR_INIT)
    KeOFCR_e_BlinkRate_Cmd_Val = CeCITR_e_CPIM_NoBlink;/* Referenced by:
                                                        * '<S371>/Calib'
                                                        * '<S404>/Calib'
                                                        */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TeBRKR_e_BrkPdl_Stat, OFCR_VAR_INIT)
    KeOFCR_e_BrkPedalDscrtInpt = CeBRKR_e_BrkNotApplied;/* Referenced by: '<S329>/Calib' */

#endif

static volatile CONST(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT)
    KeOFCR_e_CPIM_Icon1_CmdOutVal = CeCITR_e_CPIM_Icon_OFF;/* Referenced by:
                                                            * '<S372>/Calib'
                                                            * '<S405>/Calib'
                                                            */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT)
    KeOFCR_e_CPIM_Icon1_Cmd_Val = CeCITR_e_CPIM_Icon_OFF;/* Referenced by: '<S330>/Calib' */

#endif

static volatile CONST(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT)
    KeOFCR_e_CPIM_Icon2_CmdOutVal = CeCITR_e_CPIM_Icon_OFF;/* Referenced by:
                                                            * '<S373>/Calib'
                                                            * '<S406>/Calib'
                                                            */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT)
    KeOFCR_e_CPIM_Icon2_Cmd_Val = CeCITR_e_CPIM_Icon_OFF;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TeOBCR_e_ChargeType, OFCR_VAR_INIT)
    KeOFCR_e_ChargeType_OvrdVal = CeOBCR_e_AC;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TeVTLR_e_DschrgSysSts, OFCR_VAR_INIT)
    KeOFCR_e_DschrgSysSts_Val = CeVTLR_e_DschrgInactv;/* Referenced by: '<S333>/Calib' */

#endif

static volatile CONST(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_Ind1_Cmd_Val = CeCITR_e_CPIM_Ind_Off;/* Referenced by:
                                                   * '<S374>/Calib'
                                                   * '<S407>/Calib'
                                                   */
static volatile CONST(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_Ind2_Cmd_Val = CeCITR_e_CPIM_Ind_Off;/* Referenced by:
                                                   * '<S375>/Calib'
                                                   * '<S408>/Calib'
                                                   */
static volatile CONST(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_Ind3_Cmd_Val = CeCITR_e_CPIM_Ind_Off;/* Referenced by:
                                                   * '<S376>/Calib'
                                                   * '<S409>/Calib'
                                                   */
static volatile CONST(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_Ind4_Cmd_Val = CeCITR_e_CPIM_Ind_Off;/* Referenced by:
                                                   * '<S377>/Calib'
                                                   * '<S410>/Calib'
                                                   */
static volatile CONST(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT)
    KeOFCR_e_Ind5_Cmd_Val = CeCITR_e_CPIM_Ind_Off;/* Referenced by:
                                                   * '<S378>/Calib'
                                                   * '<S411>/Calib'
                                                   */
static volatile CONST(TeCITR_e_CPIM_Color, OFCR_VAR_INIT)
    KeOFCR_e_IndColor_Cmd_Val = CeCITR_e_CPIM_NoColor;/* Referenced by:
                                                       * '<S379>/Calib'
                                                       * '<S412>/Calib'
                                                       */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TePMDR_e_PowerMode, OFCR_VAR_INIT) KeOFCR_e_OvrdKeyStsVal =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TeOBCR_e_ChargingSystemSts, OFCR_VAR_INIT)
    KeOFCR_e_OvrdValChrgSysSts = CeOBCR_e_NotCharging;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(TeHMIR_e_VldtdTransRngSt_ShifterPOS, OFCR_VAR_INIT)
    KeOFCR_e_ShifterPOS = CeHMIR_e_ShifterPosPark;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(sint16, OFCR_VAR_INIT) KeOFCR_k_ChrgSysFault_Reason = 0;/* Referenced by: '<S337>/Calib' */

#endif

static volatile CONST(sint16, OFCR_VAR_INIT) KeOFCR_k_OvrdValChrgReqRsn = 0;/* Referenced by:
                                                                      * '<S380>/Calib'
                                                                      * '<S413>/Calib'
                                                                      */

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_t_BulbCheckSt = 0.5F;/* Referenced by: '<S75>/BulbCheck' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_t_FiveLED_KnghtRdr = 1.0F;/* Referenced by:
                                                                      * '<S19>/Stateflow Chart'
                                                                      * '<S97>/Stateflow Chart'
                                                                      */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_t_OFFTime = 0.5F;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_t_ONTime = 0.5F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_t_ResetThreshold = 6.2F;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static volatile CONST(float32, OFCR_VAR_INIT) KeOFCR_t_SqWaveTimePeriod = 1.0F;/* Referenced by:
                                                                      * '<S85>/Calib'
                                                                      * '<S89>/Calib'
                                                                      */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_OFCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_I_ChrgPortOTCrntReq;/* '<S270>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_Pct_HVBatSOC_HCP;/* '<S5>/Switch32' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_T_ChrgPortTempTest1;/* '<S228>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_T_ChrgPortTempTest2;/* '<S224>/Logical2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_DCNegLtch;/* '<S269>/Gain' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_DCNegRise;/* '<S225>/Sum2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_DCNegTemp;/* '<S5>/Switch68' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_DCPosLtch;/* '<S268>/Gain' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_DCPosRise;/* '<S225>/Sum1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_DCPosTemp;/* '<S5>/Switch66' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_MaxInletTemp_DC;/* '<S225>/MinMax1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_SCP_AmbientTemp;/* '<S5>/Switch49' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_T_SCP_InletTemp;/* '<S5>/Switch53' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_BCIM_Flt;/* '<S156>/Logical1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_CPIM_ChrgSts;/* '<S157>/Logical10' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_CPIM_Flt;/* '<S156>/Logical2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT) VeOFCR_b_CPIM_Icon1_Cmd_In;/* '<S5>/Switch17' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_CPIM_Icon1_FailSts;/* '<S5>/Switch21' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT) VeOFCR_b_CPIM_Icon2_Cmd_In;/* '<S5>/Switch20' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_CPIM_Icon2_FailSts;/* '<S5>/Switch22' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_CPIM_Icon_Mismatch;/* '<S5>/Switch4' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChargeReq;/* '<S5>/Switch16' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgLtch;/* '<S225>/Comparison1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgPortDerate;/* '<S226>/Logical2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgPortLock_BCI;/* '<S5>/Switch15' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgPortStop;/* '<S226>/Logical1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgPortTempTest3;/* '<S224>/Logical4' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgPortTempTest4;/* '<S224>/Logical3' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgPortTempTest5;/* '<S231>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgPortTempTest6;/* '<S224>/Logical7' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ChrgSysFault;/* '<S5>/Switch13' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_DCNegTemp_FA;/* '<S5>/Switch69' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_DCPosTemp_FA;/* '<S5>/Switch67' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_DerateChrg_AC;/* '<S224>/Switch' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_DerateChrg_DC;/* '<S225>/Switch' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Derate_Abs;/* '<S247>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Derate_DCNegRise;/* '<S248>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Derate_DCPosRise;/* '<S246>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Derate_DC_OT;/* '<S225>/Logical3' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_DriveReady;/* '<S5>/Switch24' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_EnableDischarge;/* '<S5>/Switch3' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_FirstPlugIn;/* '<S197>/OR1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_InternalLightStsIn;/* '<S5>/Switch51' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_NoSchEnbl;/* '<S5>/Switch65' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_PluggedIn;/* '<S5>/Switch11' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Rdy4ShtDwn;/* '<S5>/Switch5' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_S1Condition;/* '<S175>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_S2Condition;/* '<S171>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_S3Condition;/* '<S176>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_S4Condition;/* '<S173>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_S5Condition;/* '<S174>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_SCP_AmbientTemp_FA;/* '<S5>/Switch52' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_SCP_InletTemp_FA;/* '<S5>/Switch50' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_SecureConnV2L;/* '<S5>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_SmartEVSE_Dtctd;/* '<S5>/Switch19' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_StopChrg_AC;/* '<S224>/Logical8' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_StopChrg_DC;/* '<S225>/Logical5' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Stop_Abs;/* '<S250>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Stop_DCNegRise;/* '<S251>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Stop_DCPosRise;/* '<S249>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_Stop_DC_OT;/* '<S225>/Logical16' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_TestBlue;/* '<S155>/Merge2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_TestGreen;/* '<S155>/Merge1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_TestRed;/* '<S155>/Merge' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_ThmrSnsrFlt;/* '<S156>/Logical4' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(boolean, OFCR_VAR_INIT) VeOFCR_b_WaitingToChrg;/* '<S71>/Logical8' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_BlinkRate, OFCR_VAR_INIT) VeOFCR_e_BCIM_BlinkRate_Cmd;/* '<S7>/Merge3' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_BlinkRate, OFCR_VAR_INIT)
    VeOFCR_e_BCIM_BlinkRate_CmdInt;    /* '<S11>/Switch1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Color, OFCR_VAR_INIT) VeOFCR_e_BCIM_Color_Cmd;/* '<S7>/Merge6' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Color, OFCR_VAR_INIT) VeOFCR_e_BCIM_Color_CmdInt;/* '<S11>/Switch5' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind1_Cmd;/* '<S7>/Merge' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind1_CmdInt;/* '<S11>/Switch7' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind2_Cmd;/* '<S7>/Merge2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind2_CmdInt;/* '<S11>/Switch3' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind3_Cmd;/* '<S7>/Merge4' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind3_CmdInt;/* '<S11>/Switch9' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind4_Cmd;/* '<S7>/Merge5' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind4_CmdInt;/* '<S11>/Switch15' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind5_Cmd;/* '<S7>/Merge1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_BCIM_Indication, OFCR_VAR_INIT) VeOFCR_e_BCIM_Ind5_CmdInt;/* '<S11>/Switch16' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_BlinkRate, OFCR_VAR_INIT) VeOFCR_e_BlinkRate_Cmd;/* '<S72>/Merge3' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeBRKR_e_BrkPdl_Stat, OFCR_VAR_INIT) VeOFCR_e_BrkPedalDscrtInpt;/* '<S5>/Switch25' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_BlinkRate, OFCR_VAR_INIT)
    VeOFCR_e_CPIM_BlinkRate_CmdInt;    /* '<S11>/Switch10' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Color, OFCR_VAR_INIT) VeOFCR_e_CPIM_Color_CmdInt;/* '<S11>/Switch12' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT) VeOFCR_e_CPIM_Icon1_Cmd_Test1;/* '<S73>/Merge' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT) VeOFCR_e_CPIM_Icon2_Cmd_Test1;/* '<S73>/Merge1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_CPIM_Ind1_CmdInt;/* '<S11>/Switch2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_CPIM_Ind2_CmdInt;/* '<S11>/Switch11' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_CPIM_Ind3_CmdInt;/* '<S11>/Switch4' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_CPIM_Ind4_CmdInt;/* '<S11>/Switch6' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_CPIM_Ind5_CmdInt;/* '<S11>/Switch8' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeOBCR_e_ChargeType, OFCR_VAR_INIT) VeOFCR_e_ChargeType;/* '<S5>/Switch28' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeOBCR_e_ChargingSystemSts, OFCR_VAR_INIT) VeOFCR_e_ChargingSysSts;/* '<S5>/Switch12' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Color, OFCR_VAR_INIT) VeOFCR_e_ColorInd_Cmd;/* '<S72>/Merge6' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeVTLR_e_DschrgSysSts, OFCR_VAR_INIT) VeOFCR_e_DschrgSysSts;/* '<S5>/Switch2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT) VeOFCR_e_Icon1_CmdInt;/* '<S11>/Switch14' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Icon_Ind, OFCR_VAR_INIT) VeOFCR_e_Icon2_CmdInt;/* '<S11>/Switch13' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_Ind1_Cmd;/* '<S72>/Merge' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_Ind2_Cmd;/* '<S72>/Merge2' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_Ind3_Cmd;/* '<S72>/Merge4' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_Ind4_Cmd;/* '<S72>/Merge5' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeCITR_e_CPIM_Indication, OFCR_VAR_INIT) VeOFCR_e_Ind5_Cmd;/* '<S72>/Merge1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TePMDR_e_PowerMode, OFCR_VAR_INIT) VeOFCR_e_PMM_PowerMode;/* '<S5>/Switch18' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(TeHMIR_e_VldtdTransRngSt_ShifterPOS, OFCR_VAR_INIT)
    VeOFCR_e_ShifterPOS;               /* '<S5>/Switch14' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(sint16, OFCR_VAR_INIT) VeOFCR_k_ChrgSysFault_Reason;/* '<S5>/Switch26' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_k_NumS1;/* '<S207>/Rounding1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_k_NumS2;/* '<S203>/Rounding1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_k_NumS3;/* '<S204>/Rounding1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_k_NumS4;/* '<S205>/Rounding1' */

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static VAR(float32, OFCR_VAR_INIT) VeOFCR_k_NumS5;/* '<S206>/Rounding1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_OFCR
#include "MemMap.h"

CONST(ConstB_OFCR_ac_T, OFCR_VAR_INIT) OFCR_ac_ConstB =
{

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S212>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S211>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S210>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S209>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S208>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S202>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S201>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1,                                 /* '<S200>/Not Equal1' */

#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    1                                  /* '<S199>/Not Equal1' */
#define CONSTB_OFCR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_OFCR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_OFCR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_OFCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

VAR(B_OFCR_ac_T, OFCR_VAR_INIT) OFCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"

VAR(DW_OFCR_ac_T, OFCR_VAR_INIT) OFCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OFCR
#include "MemMap.h"
#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem(P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind1, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind2, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind3, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind4, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind5, P2VAR
    (TeCITR_e_BCIM_BlinkRate, AUTOMATIC, OFCR_VAR_INIT) rty_BlinkRate, P2VAR
    (TeCITR_e_BCIM_Color, AUTOMATIC, OFCR_VAR_INIT) rty_Color);

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem_o(P2VAR(boolean,
    AUTOMATIC, OFCR_VAR_INIT) rty_Red, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT)
    rty_Green, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT) rty_Blue);

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem4(P2VAR(boolean,
    AUTOMATIC, OFCR_VAR_INIT) rty_Red, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT)
    rty_Green, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT) rty_Blue);

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem_d(P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind1, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind2, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind3, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind4, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind5, P2VAR
    (TeCITR_e_CPIM_BlinkRate, AUTOMATIC, OFCR_VAR_INIT) rty_BlinkRate, P2VAR
    (TeCITR_e_CPIM_Color, AUTOMATIC, OFCR_VAR_INIT) rty_ColorInd);

#endif

/*
 * Output and update for action system:
 *    '<S7>/If Action Subsystem'
 *    '<S7>/If Action Subsystem9'
 */
#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem(P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind1, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind2, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind3, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind4, P2VAR
    (TeCITR_e_BCIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind5, P2VAR
    (TeCITR_e_BCIM_BlinkRate, AUTOMATIC, OFCR_VAR_INIT) rty_BlinkRate, P2VAR
    (TeCITR_e_BCIM_Color, AUTOMATIC, OFCR_VAR_INIT) rty_Color)
{
    /* SignalConversion generated from: '<S14>/Ind1' incorporates:
     *  Constant: '<S22>/Constant'
     */
    *rty_Ind1 = CeCITR_e_BCIM_Ind_Off;

    /* SignalConversion generated from: '<S14>/Ind2' incorporates:
     *  Constant: '<S23>/Constant'
     */
    *rty_Ind2 = CeCITR_e_BCIM_Ind_Off;

    /* SignalConversion generated from: '<S14>/Ind3' incorporates:
     *  Constant: '<S24>/Constant'
     */
    *rty_Ind3 = CeCITR_e_BCIM_Ind_Off;

    /* SignalConversion generated from: '<S14>/Ind4' incorporates:
     *  Constant: '<S25>/Constant'
     */
    *rty_Ind4 = CeCITR_e_BCIM_Ind_Off;

    /* SignalConversion generated from: '<S14>/Ind5' incorporates:
     *  Constant: '<S26>/Constant'
     */
    *rty_Ind5 = CeCITR_e_BCIM_Ind_Off;

    /* SignalConversion generated from: '<S14>/BlinkRate' incorporates:
     *  Constant: '<S27>/Constant'
     */
    *rty_BlinkRate = CeCITR_e_BCIM_NoBlink;

    /* SignalConversion generated from: '<S14>/Color' incorporates:
     *  Constant: '<S28>/Constant'
     */
    *rty_Color = CeCITR_e_BCIM_NoColor;
}

#endif

/*
 * Output and update for action system:
 *    '<S71>/If Action Subsystem'
 *    '<S155>/If Action Subsystem'
 */
#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem_o(P2VAR(boolean,
    AUTOMATIC, OFCR_VAR_INIT) rty_Red, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT)
    rty_Green, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT) rty_Blue)
{
    /* SignalConversion generated from: '<S74>/Red' incorporates:
     *  Constant: '<S74>/FALSE Constant'
     */
    *rty_Red = false;

    /* SignalConversion generated from: '<S74>/Green' incorporates:
     *  Constant: '<S74>/FALSE Constant1'
     */
    *rty_Green = false;

    /* SignalConversion generated from: '<S74>/Blue' incorporates:
     *  Constant: '<S74>/FALSE Constant2'
     */
    *rty_Blue = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S71>/If Action Subsystem4'
 *    '<S155>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem4(P2VAR(boolean,
    AUTOMATIC, OFCR_VAR_INIT) rty_Red, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT)
    rty_Green, P2VAR(boolean, AUTOMATIC, OFCR_VAR_INIT) rty_Blue)
{
    /* SignalConversion generated from: '<S78>/Red' incorporates:
     *  Constant: '<S78>/FALSE Constant1'
     */
    *rty_Red = false;

    /* SignalConversion generated from: '<S78>/Green' incorporates:
     *  Constant: '<S78>/TRUE Constant'
     */
    *rty_Green = true;

    /* SignalConversion generated from: '<S78>/Blue' incorporates:
     *  Constant: '<S78>/FALSE Constant2'
     */
    *rty_Blue = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S72>/If Action Subsystem'
 *    '<S72>/If Action Subsystem9'
 */
#if Rte_SysCon_Variant_OFCR_FUNC

static FUNC(void, OFCR_CODE_LOCAL) OFCR_ac_IfActionSubsystem_d(P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind1, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind2, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind3, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind4, P2VAR
    (TeCITR_e_CPIM_Indication, AUTOMATIC, OFCR_VAR_INIT) rty_Ind5, P2VAR
    (TeCITR_e_CPIM_BlinkRate, AUTOMATIC, OFCR_VAR_INIT) rty_BlinkRate, P2VAR
    (TeCITR_e_CPIM_Color, AUTOMATIC, OFCR_VAR_INIT) rty_ColorInd)
{
    /* SignalConversion generated from: '<S91>/Ind1' incorporates:
     *  Constant: '<S101>/Constant'
     */
    *rty_Ind1 = CeCITR_e_CPIM_Ind_Off;

    /* SignalConversion generated from: '<S91>/Ind2' incorporates:
     *  Constant: '<S102>/Constant'
     */
    *rty_Ind2 = CeCITR_e_CPIM_Ind_Off;

    /* SignalConversion generated from: '<S91>/Ind3' incorporates:
     *  Constant: '<S103>/Constant'
     */
    *rty_Ind3 = CeCITR_e_CPIM_Ind_Off;

    /* SignalConversion generated from: '<S91>/Ind4' incorporates:
     *  Constant: '<S104>/Constant'
     */
    *rty_Ind4 = CeCITR_e_CPIM_Ind_Off;

    /* SignalConversion generated from: '<S91>/Ind5' incorporates:
     *  Constant: '<S105>/Constant'
     */
    *rty_Ind5 = CeCITR_e_CPIM_Ind_Off;

    /* SignalConversion generated from: '<S91>/BlinkRate' incorporates:
     *  Constant: '<S106>/Constant'
     */
    *rty_BlinkRate = CeCITR_e_CPIM_NoBlink;

    /* SignalConversion generated from: '<S91>/ColorInd' incorporates:
     *  Constant: '<S107>/Constant'
     */
    *rty_ColorInd = CeCITR_e_CPIM_NoColor;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_OFCR_FUNC

FUNC(void, OFCR_CODE) OFCR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeODCR_e_IO_CntrlSt tmpRead_1;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeODCR_e_IO_CntrlSt tmpRead_2;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean tmpRead_3;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_ChrgrFlapSts tmpRead_7;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_Logical1_i;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_Comparison6;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_UnitDelay_ie;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_Comparison1;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_Logical2_e;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_Comparison4_n;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 rtb_Switch1_l;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_Logical5_nz;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_AND_hm;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_Comparison4;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 rtb_Switch1_e;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 rtb_Switch1_j;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 rtb_Switch1_k;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    float32 rtb_Sum11;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean rtb_AND_l;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_BlinkRate tmp;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_Color tmp_0;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_BCIM_Indication tmp_1;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_BlinkRate tmp_2;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Color tmp_3;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Icon_Ind tmp_4;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    TeCITR_e_CPIM_Indication tmp_5;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean VeOFCR_b_CPIM_ChrgSts_tmp;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean VeOFCR_b_CPIM_ChrgSts_tmp_0;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_OFCR_FUNC

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Outputs for Function Call SubSystem: '<Root>/OFCR_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Module_Failure_CPIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Module_Failure_CPIM_Value
        (&OFCR_ac_DW.StatusByte_Module_Failure_CPIM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&OFCR_ac_DW.StatusByte_LostCommBCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCPIM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCPIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCPIM_Value
        (&OFCR_ac_DW.StatusByte_LostCommCPIM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCIM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCIM_Value
        (&OFCR_ac_DW.StatusByte_LostCommBCIM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&OFCR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&OFCR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&OFCR_ac_DW.StatusByte_LIN1_BusOff);

    /* End of Outputs for SubSystem: '<Root>/OFCR_MedTEH' */

    /* Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn' */
    (void)Rte_Read_VeVTLR_b_Rdy4ShtDwn_Value((&(VeOFCR_b_Rdy4ShtDwn)));

    /* Inport: '<Root>/VeVTLR_b_EnableDischarge' */
    (void)Rte_Read_VeVTLR_b_EnableDischarge_Value((&(VeOFCR_b_EnableDischarge)));

    /* Inport: '<Root>/VeVTLR_e_DschrgSysSts' */
    (void)Rte_Read_VeVTLR_e_DschrgSysSts_Value((&(VeOFCR_e_DschrgSysSts)));

    /* Inport: '<Root>/VeOBCR_b_SecureConnV2L' */
    (void)Rte_Read_VeOBCR_b_SecureConnV2L_Value((&(VeOFCR_b_SecureConnV2L)));

    /* Inport: '<Root>/VeCDMR_b_CPIM_Icon_Mismtch' */
    (void)Rte_Read_VeCDMR_b_CPIM_Icon_Mismtch_Value(&rtb_Logical1_i);

    /* Inport: '<Root>/VeAATR_b_SCP_DCNegtvTemp_FA' */
    (void)Rte_Read_VeAATR_b_SCP_DCNegtvTemp_FA_Value((&(VeOFCR_b_DCNegTemp_FA)));

    /* Inport: '<Root>/VeAATR_T_SCP_DCNegtvTemp' */
    (void)Rte_Read_VeAATR_T_SCP_DCNegtvTemp_Value((&(VeOFCR_T_DCNegTemp)));

    /* Inport: '<Root>/VeAATR_b_SCP_DCPstvTemp_FA' */
    (void)Rte_Read_VeAATR_b_SCP_DCPstvTemp_FA_Value((&(VeOFCR_b_DCPosTemp_FA)));

    /* Inport: '<Root>/VeAATR_T_SCP_DCPstvTemp' */
    (void)Rte_Read_VeAATR_T_SCP_DCPstvTemp_Value((&(VeOFCR_T_DCPosTemp)));

    /* Inport: '<Root>/VeSCPR_b_NoChrgSchEnbl' */
    (void)Rte_Read_VeSCPR_b_NoChrgSchEnbl_Value((&(VeOFCR_b_NoSchEnbl)));

    /* Inport: '<Root>/VePLTR_b_InternalLightSts' */
    (void)Rte_Read_VePLTR_b_InternalLightSts_Value
        ((&(VeOFCR_b_InternalLightStsIn)));

    /* Inport: '<Root>/VeOBCR_e_ChargeType' */
    (void)Rte_Read_VeOBCR_e_ChargeType_Value((&(VeOFCR_e_ChargeType)));

    /* Inport: '<Root>/VeCITR_b_CPIM_Icon2_FailSts' */
    (void)Rte_Read_VeCITR_b_CPIM_Icon2_FailSts_Value
        ((&(VeOFCR_b_CPIM_Icon2_FailSts)));

    /* Inport: '<Root>/VeCITR_b_CPIM_Icon1_FailSts' */
    (void)Rte_Read_VeCITR_b_CPIM_Icon1_FailSts_Value
        ((&(VeOFCR_b_CPIM_Icon1_FailSts)));

    /* Inport: '<Root>/VeSCPR_e_CPIM_Icon2_Cmd' */
    (void)Rte_Read_VeSCPR_e_CPIM_Icon2_Cmd_Value((&(VeOFCR_b_CPIM_Icon2_Cmd_In)));

    /* Inport: '<Root>/VeSCPR_e_CPIM_Icon1_Cmd' */
    (void)Rte_Read_VeSCPR_e_CPIM_Icon1_Cmd_Value((&(VeOFCR_b_CPIM_Icon1_Cmd_In)));

    /* Inport: '<Root>/VeSCPR_b_ChargeReq' */
    (void)Rte_Read_VeSCPR_b_ChargeReq_Value((&(VeOFCR_b_ChargeReq)));

    /* Inport: '<Root>/VeAATR_T_SCP_InletTemp' */
    (void)Rte_Read_VeAATR_T_SCP_InletTemp_Value((&(VeOFCR_T_SCP_InletTemp)));

    /* Inport: '<Root>/VeAATR_b_EstAmbAirTempFA' */
    (void)Rte_Read_VeAATR_b_EstAmbAirTempFA_Value((&(VeOFCR_b_SCP_AmbientTemp_FA)));

    /* Inport: '<Root>/VeAATR_b_SCP_InletTemp_FA' */
    (void)Rte_Read_VeAATR_b_SCP_InletTemp_FA_Value((&(VeOFCR_b_SCP_InletTemp_FA)));

    /* Inport: '<Root>/VeAATR_T_EstAmbAirTemp' */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value((&(VeOFCR_T_SCP_AmbientTemp)));

    /* Inport: '<Root>/VeHMIR_b_DriveReady' */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value((&(VeOFCR_b_DriveReady)));

    /* Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value((&(VeOFCR_Pct_HVBatSOC_HCP)));

    /* Inport: '<Root>/VeOBCR_k_ChrgSysFault_Reason' */
    (void)Rte_Read_VeOBCR_k_ChrgSysFault_Reason_Value
        ((&(VeOFCR_k_ChrgSysFault_Reason)));

    /* Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        ((&(VeOFCR_e_BrkPedalDscrtInpt)));

    /* Inport: '<Root>/VeHMIR_e_ShifterPOS' */
    (void)Rte_Read_VeHMIR_e_ShifterPOS_Value((&(VeOFCR_e_ShifterPOS)));

    /* Inport: '<Root>/VeOBCR_b_SmartEvse_Dtctd' */
    (void)Rte_Read_VeOBCR_b_SmartEvse_Dtctd_Value((&(VeOFCR_b_SmartEVSE_Dtctd)));

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeOFCR_e_PMM_PowerMode)));

    /* Inport: '<Root>/VeOBCR_b_RelockTimerActive' */
    (void)Rte_Read_VeOBCR_b_RelockTimerActive_Value((&(VeOFCR_b_ChrgPortLock_BCI)));

    /* Inport: '<Root>/VeOBCR_b_ChrgSysFault' */
    (void)Rte_Read_VeOBCR_b_ChrgSysFault_Value((&(VeOFCR_b_ChrgSysFault)));

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value((&(VeOFCR_e_ChargingSysSts)));

    /* Inport: '<Root>/VeOBCR_b_PluggedIn' */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value((&(VeOFCR_b_PluggedIn)));

    /* Outputs for Function Call SubSystem: '<Root>/OFCR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCI'
     */
    /* Switch: '<S5>/Switch11' incorporates:
     *  Constant: '<S316>/Calib'
     */
    if (KeOFCR_b_OvrdEnblPluggedIn)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S320>/Calib'
         *  Inport: '<Root>/VeOBCR_b_PluggedIn'
         */
        VeOFCR_b_PluggedIn = KeOFCR_b_OvrdValPluggedIn;
    }

    /* End of Switch: '<S5>/Switch11' */

    /* Switch: '<S5>/Switch12' incorporates:
     *  Constant: '<S314>/Calib'
     */
    if (KeOFCR_b_OvrdEnblChrgSysSts)
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Constant: '<S335>/Calib'
         *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
         */
        VeOFCR_e_ChargingSysSts = KeOFCR_e_OvrdValChrgSysSts;
    }

    /* End of Switch: '<S5>/Switch12' */

    /* Switch: '<S5>/Switch13' incorporates:
     *  Constant: '<S313>/Calib'
     */
    if (KeOFCR_b_OvrdEnblChrgSysFault)
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Constant: '<S319>/Calib'
         *  Inport: '<Root>/VeOBCR_b_ChrgSysFault'
         */
        VeOFCR_b_ChrgSysFault = KeOFCR_b_OvrdValChrgSysFault;
    }

    /* End of Switch: '<S5>/Switch13' */

    /* Switch: '<S5>/Switch15' incorporates:
     *  Constant: '<S312>/Calib'
     */
    if (KeOFCR_b_OvrdEnblChrgPrtLck_BCI)
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Constant: '<S318>/Calib'
         *  Inport: '<Root>/VeOBCR_b_RelockTimerActive'
         */
        VeOFCR_b_ChrgPortLock_BCI = KeOFCR_b_OvrdValChrgPrtLck_BCI;
    }

    /* End of Switch: '<S5>/Switch15' */

    /* Switch: '<S5>/Switch18' incorporates:
     *  Constant: '<S315>/Calib'
     */
    if (KeOFCR_b_OvrdEnblKeySts)
    {
        /* Switch: '<S5>/Switch18' incorporates:
         *  Constant: '<S334>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeOFCR_e_PMM_PowerMode = KeOFCR_e_OvrdKeyStsVal;
    }

    /* End of Switch: '<S5>/Switch18' */

    /* Switch: '<S5>/Switch19' incorporates:
     *  Constant: '<S317>/Calib'
     */
    if (KeOFCR_b_OvrdEnblSmartEVSEDtctd)
    {
        /* Switch: '<S5>/Switch19' incorporates:
         *  Constant: '<S321>/Calib'
         *  Inport: '<Root>/VeOBCR_b_SmartEvse_Dtctd'
         */
        VeOFCR_b_SmartEVSE_Dtctd = KeOFCR_b_OvrdValSmartEVSEDtctd;
    }

    /* End of Switch: '<S5>/Switch19' */

    /* Switch: '<S5>/Switch14' incorporates:
     *  Constant: '<S328>/Calib'
     */
    if (KeOFCR_b_ShifterPOSOvrd)
    {
        /* Switch: '<S5>/Switch14' incorporates:
         *  Constant: '<S336>/Calib'
         *  Inport: '<Root>/VeHMIR_e_ShifterPOS'
         */
        VeOFCR_e_ShifterPOS = KeOFCR_e_ShifterPOS;
    }

    /* End of Switch: '<S5>/Switch14' */

    /* Switch: '<S5>/Switch25' incorporates:
     *  Constant: '<S279>/Calib'
     */
    if (KeOFCR_b_BrkPedalDscrtInptOvrd)
    {
        /* Switch: '<S5>/Switch25' incorporates:
         *  Constant: '<S329>/Calib'
         *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
         */
        VeOFCR_e_BrkPedalDscrtInpt = KeOFCR_e_BrkPedalDscrtInpt;
    }

    /* End of Switch: '<S5>/Switch25' */

    /* Switch: '<S5>/Switch26' incorporates:
     *  Constant: '<S289>/Calib'
     */
    if (KeOFCR_b_ChrgSysFault_ReasonOvrd)
    {
        /* Switch: '<S5>/Switch26' incorporates:
         *  Constant: '<S337>/Calib'
         *  Inport: '<Root>/VeOBCR_k_ChrgSysFault_Reason'
         */
        VeOFCR_k_ChrgSysFault_Reason = KeOFCR_k_ChrgSysFault_Reason;
    }

    /* End of Switch: '<S5>/Switch26' */

    /* Switch: '<S5>/Switch32' incorporates:
     *  Constant: '<S305>/Calib'
     */
    if (KeOFCR_b_HVBatSOC_HCP_Ovrd)
    {
        /* Switch: '<S5>/Switch32' incorporates:
         *  Constant: '<S274>/Calib'
         *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
         */
        VeOFCR_Pct_HVBatSOC_HCP = KeOFCR_Pct_HVBatSOC_HCP_Val;
    }

    /* End of Switch: '<S5>/Switch32' */

    /* Switch: '<S5>/Switch24' incorporates:
     *  Constant: '<S297>/Calib'
     */
    if (KeOFCR_b_DriveReady_Ovrd)
    {
        /* Switch: '<S5>/Switch24' incorporates:
         *  Constant: '<S298>/Calib'
         *  Inport: '<Root>/VeHMIR_b_DriveReady'
         */
        VeOFCR_b_DriveReady = KeOFCR_b_DriveReady_Val;
    }

    /* End of Switch: '<S5>/Switch24' */

    /* Switch: '<S5>/Switch49' incorporates:
     *  Constant: '<S304>/Calib'
     */
    if (KeOFCR_b_EstAmbAirTemp_Ovrd)
    {
        /* Switch: '<S5>/Switch49' incorporates:
         *  Constant: '<S278>/Calib'
         *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
         */
        VeOFCR_T_SCP_AmbientTemp = KeOFCR_T_EstAmbAirTemp_Val;
    }

    /* End of Switch: '<S5>/Switch49' */

    /* Switch: '<S5>/Switch50' incorporates:
     *  Constant: '<S306>/Calib'
     */
    if (KeOFCR_b_InletTempRatFail_Ovrd)
    {
        /* Switch: '<S5>/Switch50' incorporates:
         *  Constant: '<S307>/Calib'
         *  Inport: '<Root>/VeAATR_b_SCP_InletTemp_FA'
         */
        VeOFCR_b_SCP_InletTemp_FA = KeOFCR_b_InletTempRatFail_Val;
    }

    /* End of Switch: '<S5>/Switch50' */

    /* Switch: '<S5>/Switch52' incorporates:
     *  Constant: '<S302>/Calib'
     */
    if (KeOFCR_b_EstAmbAirTempFA_Ovrd)
    {
        /* Switch: '<S5>/Switch52' incorporates:
         *  Constant: '<S303>/Calib'
         *  Inport: '<Root>/VeAATR_b_EstAmbAirTempFA'
         */
        VeOFCR_b_SCP_AmbientTemp_FA = KeOFCR_b_EstAmbAirTempFA_Val;
    }

    /* End of Switch: '<S5>/Switch52' */

    /* Switch: '<S5>/Switch53' incorporates:
     *  Constant: '<S290>/Calib'
     */
    if (KeOFCR_b_Chrg_Inlet_Temp_Ovrd)
    {
        /* Switch: '<S5>/Switch53' incorporates:
         *  Constant: '<S275>/Calib'
         *  Inport: '<Root>/VeAATR_T_SCP_InletTemp'
         */
        VeOFCR_T_SCP_InletTemp = KeOFCR_T_Chrg_Inlet_Temp_Val;
    }

    /* End of Switch: '<S5>/Switch53' */

    /* Switch: '<S5>/Switch16' incorporates:
     *  Constant: '<S324>/Calib'
     */
    if (KeOFCR_b_SCPRChargeReq_Ovrd)
    {
        /* Switch: '<S5>/Switch16' incorporates:
         *  Constant: '<S325>/Calib'
         *  Inport: '<Root>/VeSCPR_b_ChargeReq'
         */
        VeOFCR_b_ChargeReq = KeOFCR_b_SCPRChargeReq_Val;
    }

    /* End of Switch: '<S5>/Switch16' */

    /* Switch: '<S5>/Switch17' incorporates:
     *  Constant: '<S282>/Calib'
     */
    if (KeOFCR_b_CPIM_Icon1_Cmd_Ovrd)
    {
        /* Switch: '<S5>/Switch17' incorporates:
         *  Constant: '<S330>/Calib'
         *  Inport: '<Root>/VeSCPR_e_CPIM_Icon1_Cmd'
         */
        VeOFCR_b_CPIM_Icon1_Cmd_In = KeOFCR_e_CPIM_Icon1_Cmd_Val;
    }

    /* End of Switch: '<S5>/Switch17' */

    /* Switch: '<S5>/Switch20' incorporates:
     *  Constant: '<S285>/Calib'
     */
    if (KeOFCR_b_CPIM_Icon2_Cmd_Ovrd)
    {
        /* Switch: '<S5>/Switch20' incorporates:
         *  Constant: '<S331>/Calib'
         *  Inport: '<Root>/VeSCPR_e_CPIM_Icon2_Cmd'
         */
        VeOFCR_b_CPIM_Icon2_Cmd_In = KeOFCR_e_CPIM_Icon2_Cmd_Val;
    }

    /* End of Switch: '<S5>/Switch20' */

    /* Switch: '<S5>/Switch21' incorporates:
     *  Constant: '<S283>/Calib'
     */
    if (KeOFCR_b_CPIM_Icon1_FailStsOvrd)
    {
        /* Switch: '<S5>/Switch21' incorporates:
         *  Constant: '<S284>/Calib'
         *  Inport: '<Root>/VeCITR_b_CPIM_Icon1_FailSts'
         */
        VeOFCR_b_CPIM_Icon1_FailSts = KeOFCR_b_CPIM_Icon1_FailStsVal;
    }

    /* End of Switch: '<S5>/Switch21' */

    /* Switch: '<S5>/Switch22' incorporates:
     *  Constant: '<S286>/Calib'
     */
    if (KeOFCR_b_CPIM_Icon2_FailStsOvrd)
    {
        /* Switch: '<S5>/Switch22' incorporates:
         *  Constant: '<S287>/Calib'
         *  Inport: '<Root>/VeCITR_b_CPIM_Icon2_FailSts'
         */
        VeOFCR_b_CPIM_Icon2_FailSts = KeOFCR_b_CPIM_Icon2_FailStsVal;
    }

    /* End of Switch: '<S5>/Switch22' */

    /* Switch: '<S5>/Switch28' incorporates:
     *  Constant: '<S288>/Calib'
     */
    if (KeOFCR_b_ChargeType_Ovrd)
    {
        /* Switch: '<S5>/Switch28' incorporates:
         *  Constant: '<S332>/Calib'
         *  Inport: '<Root>/VeOBCR_e_ChargeType'
         */
        VeOFCR_e_ChargeType = KeOFCR_e_ChargeType_OvrdVal;
    }

    /* End of Switch: '<S5>/Switch28' */

    /* Switch: '<S5>/Switch51' incorporates:
     *  Constant: '<S308>/Calib'
     */
    if (KeOFCR_b_InternalLightSts_Ovrd)
    {
        /* Switch: '<S5>/Switch51' incorporates:
         *  Constant: '<S309>/Calib'
         *  Inport: '<Root>/VePLTR_b_InternalLightSts'
         */
        VeOFCR_b_InternalLightStsIn = KeOFCR_b_InternalLightSts_Val;
    }

    /* End of Switch: '<S5>/Switch51' */

    /* Switch: '<S5>/Switch65' incorporates:
     *  Constant: '<S310>/Calib'
     */
    if (KeOFCR_b_NoSchEnbl_Ovrd)
    {
        /* Switch: '<S5>/Switch65' incorporates:
         *  Constant: '<S311>/Calib'
         *  Inport: '<Root>/VeSCPR_b_NoChrgSchEnbl'
         */
        VeOFCR_b_NoSchEnbl = KeOFCR_b_NoSchEnbl_Val;
    }

    /* End of Switch: '<S5>/Switch65' */

    /* Switch: '<S5>/Switch66' incorporates:
     *  Constant: '<S296>/Calib'
     */
    if (KeOFCR_b_DCPosTempOvrd)
    {
        /* Switch: '<S5>/Switch66' incorporates:
         *  Constant: '<S277>/Calib'
         *  Inport: '<Root>/VeAATR_T_SCP_DCPstvTemp'
         */
        VeOFCR_T_DCPosTemp = KeOFCR_T_DCPosTempOvrdVal;
    }

    /* End of Switch: '<S5>/Switch66' */

    /* Switch: '<S5>/Switch67' incorporates:
     *  Constant: '<S294>/Calib'
     */
    if (KeOFCR_b_DCPosTempFAOvrd)
    {
        /* Switch: '<S5>/Switch67' incorporates:
         *  Constant: '<S295>/Calib'
         *  Inport: '<Root>/VeAATR_b_SCP_DCPstvTemp_FA'
         */
        VeOFCR_b_DCPosTemp_FA = KeOFCR_b_DCPosTempFAVal;
    }

    /* End of Switch: '<S5>/Switch67' */

    /* Switch: '<S5>/Switch68' incorporates:
     *  Constant: '<S293>/Calib'
     */
    if (KeOFCR_b_DCNegTempOvrd)
    {
        /* Switch: '<S5>/Switch68' incorporates:
         *  Constant: '<S276>/Calib'
         *  Inport: '<Root>/VeAATR_T_SCP_DCNegtvTemp'
         */
        VeOFCR_T_DCNegTemp = KeOFCR_T_DCNegTempOvrdVal;
    }

    /* End of Switch: '<S5>/Switch68' */

    /* Switch: '<S5>/Switch69' incorporates:
     *  Constant: '<S291>/Calib'
     */
    if (KeOFCR_b_DCNegTempFAOvrd)
    {
        /* Switch: '<S5>/Switch69' incorporates:
         *  Constant: '<S292>/Calib'
         *  Inport: '<Root>/VeAATR_b_SCP_DCNegtvTemp_FA'
         */
        VeOFCR_b_DCNegTemp_FA = KeOFCR_b_DCNegTempFAVal;
    }

    /* End of Switch: '<S5>/Switch69' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S280>/Calib'
     */
    if (KeOFCR_b_CPIMIconMismatch_Ovrd)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S281>/Calib'
         */
        VeOFCR_b_CPIM_Icon_Mismatch = KeOFCR_b_CPIMIconMismatch_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch4' */
        VeOFCR_b_CPIM_Icon_Mismatch = rtb_Logical1_i;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S326>/Calib'
     */
    if (KeOFCR_b_SecureConnV2L_Ovrd)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S327>/Calib'
         *  Inport: '<Root>/VeOBCR_b_SecureConnV2L'
         */
        VeOFCR_b_SecureConnV2L = KeOFCR_b_SecureConnV2L_Val;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S299>/Calib'
     */
    if (KeOFCR_b_DschrgSysSts_Ovrd)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S333>/Calib'
         *  Inport: '<Root>/VeVTLR_e_DschrgSysSts'
         */
        VeOFCR_e_DschrgSysSts = KeOFCR_e_DschrgSysSts_Val;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S300>/Calib'
     */
    if (KeOFCR_b_EnableDischarge_Ovrd)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S301>/Calib'
         *  Inport: '<Root>/VeVTLR_b_EnableDischarge'
         */
        VeOFCR_b_EnableDischarge = KeOFCR_b_EnableDischarge_Val;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S322>/Calib'
     */
    if (KeOFCR_b_Rdy4ShtDwn_Ovrd)
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Constant: '<S323>/Calib'
         *  Inport: '<Root>/VeVTLR_b_Rdy4ShtDwn'
         */
        VeOFCR_b_Rdy4ShtDwn = KeOFCR_b_Rdy4ShtDwn_Val;
    }

    /* End of Switch: '<S5>/Switch5' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCC'
     */
    /* Logic: '<S160>/Logical1' */
    rtb_Logical1_i = ((VeOFCR_b_SecureConnV2L) || (VeOFCR_b_PluggedIn));

    /* Outputs for Atomic SubSystem: '<S160>/EdgeRising2' */
    /* Logic: '<S195>/AND' incorporates:
     *  Logic: '<S195>/OR1'
     *  UnitDelay: '<S195>/Unit Delay'
     */
    rtb_AND_hm = (rtb_Logical1_i && (!OFCR_ac_DW.UnitDelay_DSTATE_dj));

    /* Update for UnitDelay: '<S195>/Unit Delay' */
    OFCR_ac_DW.UnitDelay_DSTATE_dj = rtb_Logical1_i;

    /* End of Outputs for SubSystem: '<S160>/EdgeRising2' */

    /* RelationalOperator: '<S158>/Comparison6' incorporates:
     *  Constant: '<S192>/Constant'
     */
    rtb_Comparison6 = (VeOFCR_e_ChargingSysSts == CeOBCR_e_ChargingSts_Charging);

    /* UnitDelay: '<S242>/Unit Delay' incorporates:
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S158>/Comparison5'
     */
    rtb_UnitDelay_ie = (VeOFCR_e_ChargingSysSts == CeOBCR_e_ChargingSts_Complete);

    /* RelationalOperator: '<S158>/Comparison1' incorporates:
     *  Constant: '<S190>/Constant'
     *  Switch: '<S5>/Switch2'
     */
    rtb_Comparison1 = (VeOFCR_e_DschrgSysSts == CeVTLR_e_DschrgActv);

    /* Logic: '<S157>/Logical2' incorporates:
     *  Logic: '<S71>/Logical11'
     *  Logic: '<S71>/Logical2'
     *  Logic: '<S7>/Logical6'
     */
    VeOFCR_b_CPIM_ChrgSts_tmp = !VeOFCR_b_SecureConnV2L;

    /* Logic: '<S157>/Logical1' incorporates:
     *  Logic: '<S7>/Logical7'
     */
    rtb_AND_l = !VeOFCR_b_EnableDischarge;

    /* Logic: '<S157>/Logical9' incorporates:
     *  Logic: '<S71>/Logical9'
     *  Logic: '<S72>/Logical4'
     *  Logic: '<S72>/Logical9'
     *  Logic: '<S7>/Logical2'
     */
    VeOFCR_b_CPIM_ChrgSts_tmp_0 = !VeOFCR_b_ChargeReq;

    /* Logic: '<S157>/Logical10' incorporates:
     *  Logic: '<S157>/Logical1'
     *  Logic: '<S157>/Logical2'
     *  Logic: '<S157>/Logical3'
     *  Logic: '<S157>/Logical9'
     */
    VeOFCR_b_CPIM_ChrgSts = (((((((((VeOFCR_b_ChrgSysFault) || rtb_Comparison6) ||
        rtb_UnitDelay_ie) || (VeOFCR_b_CPIM_ChrgSts_tmp_0 &&
        VeOFCR_b_CPIM_ChrgSts_tmp)) || (VeOFCR_b_ChrgPortLock_BCI)) ||
        (VeOFCR_b_SmartEVSE_Dtctd)) || rtb_Comparison1) || rtb_AND_l) ||
        (VeOFCR_b_Rdy4ShtDwn));

    /* Logic: '<S160>/Logical2' incorporates:
     *  UnitDelay: '<S160>/Unit Delay'
     */
    rtb_Logical2_e = ((VeOFCR_b_CPIM_ChrgSts) && (OFCR_ac_DW.UnitDelay_DSTATE_g));

    /* Outputs for Atomic SubSystem: '<S160>/Signal Latch On With Reset' */
    /* Logic: '<S197>/OR1' incorporates:
     *  Logic: '<S197>/NOT'
     *  Logic: '<S197>/OR'
     *  UnitDelay: '<S197>/Unit Delay'
     */
    VeOFCR_b_FirstPlugIn = (rtb_AND_hm || ((!rtb_Logical2_e) &&
        (VeOFCR_b_FirstPlugIn)));

    /* End of Outputs for SubSystem: '<S160>/Signal Latch On With Reset' */

    /* RelationalOperator: '<S225>/Comparison4' incorporates:
     *  Constant: '<S21>/Calib'
     *  Logic: '<S7>/Logical'
     */
    rtb_Comparison4_n = ((VeOFCR_b_ChrgPortLock_BCI) &&
                         (KeOFCR_b_AlwBCIMKnigtRdrInUnlock));

    /* Logic: '<S7>/Logical6' incorporates:
     *  Logic: '<S71>/Logical11'
     *  Logic: '<S72>/Logical1'
     *  Logic: '<S73>/Logical1'
     */
    rtb_Logical1_i = !VeOFCR_b_PluggedIn;

    /* If: '<S7>/If' incorporates:
     *  Chart: '<S17>/Stateflow Chart'
     *  Logic: '<S7>/Logical1'
     *  Logic: '<S7>/Logical10'
     *  Logic: '<S7>/Logical11'
     *  Logic: '<S7>/Logical12'
     *  Logic: '<S7>/Logical13'
     *  Logic: '<S7>/Logical4'
     *  Logic: '<S7>/Logical5'
     *  Logic: '<S7>/Logical6'
     *  Logic: '<S7>/Logical8'
     *  Logic: '<S7>/Logical9'
     */
    if (((rtb_Logical1_i && VeOFCR_b_CPIM_ChrgSts_tmp) || (VeOFCR_b_BCIM_Flt)) ||
        (VeOFCR_b_DriveReady))
    {
        /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
         *  ActionPort: '<S14>/Action Port'
         */
        OFCR_ac_IfActionSubsystem((&(VeOFCR_e_BCIM_Ind1_Cmd)),
            (&(VeOFCR_e_BCIM_Ind2_Cmd)), (&(VeOFCR_e_BCIM_Ind3_Cmd)),
            (&(VeOFCR_e_BCIM_Ind4_Cmd)), (&(VeOFCR_e_BCIM_Ind5_Cmd)),
            (&(VeOFCR_e_BCIM_BlinkRate_Cmd)), (&(VeOFCR_e_BCIM_Color_Cmd)));

        /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
    }
    else if (VeOFCR_b_FirstPlugIn)
    {
        /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S15>/Action Port'
         */
        /* Merge: '<S7>/Merge' incorporates:
         *  Constant: '<S29>/Constant'
         *  SignalConversion generated from: '<S15>/Ind1'
         */
        VeOFCR_e_BCIM_Ind1_Cmd = CeCITR_e_BCIM_Ind_Blink;

        /* Merge: '<S7>/Merge2' incorporates:
         *  Constant: '<S30>/Constant'
         *  SignalConversion generated from: '<S15>/Ind2'
         */
        VeOFCR_e_BCIM_Ind2_Cmd = CeCITR_e_BCIM_Ind_Blink;

        /* Merge: '<S7>/Merge4' incorporates:
         *  Constant: '<S31>/Constant'
         *  SignalConversion generated from: '<S15>/Ind3'
         */
        VeOFCR_e_BCIM_Ind3_Cmd = CeCITR_e_BCIM_Ind_Blink;

        /* Merge: '<S7>/Merge5' incorporates:
         *  Constant: '<S32>/Constant'
         *  SignalConversion generated from: '<S15>/Ind4'
         */
        VeOFCR_e_BCIM_Ind4_Cmd = CeCITR_e_BCIM_Ind_Blink;

        /* Switch: '<S15>/Switch' incorporates:
         *  Constant: '<S13>/Calib'
         *  Switch: '<S15>/Switch1'
         */
        if (HeOFCR_b_Actvt5LED)
        {
            /* Merge: '<S7>/Merge1' incorporates:
             *  Constant: '<S33>/Constant'
             */
            VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_Blink;

            /* Merge: '<S7>/Merge6' incorporates:
             *  Constant: '<S36>/Constant'
             */
            VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_NoColor;
        }
        else
        {
            /* Merge: '<S7>/Merge1' incorporates:
             *  Constant: '<S35>/Constant'
             */
            VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge6' incorporates:
             *  Constant: '<S37>/Constant'
             */
            VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_Green;
        }

        /* End of Switch: '<S15>/Switch' */

        /* Merge: '<S7>/Merge3' incorporates:
         *  Constant: '<S34>/Constant'
         *  SignalConversion generated from: '<S15>/BlinkRate'
         */
        VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate3;

        /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
    }
    else if ((VeOFCR_b_ChrgSysFault) || (rtb_AND_l && (VeOFCR_b_SecureConnV2L)))
    {
        /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S18>/Action Port'
         */
        /* Merge: '<S7>/Merge' incorporates:
         *  Constant: '<S50>/Constant'
         *  SignalConversion generated from: '<S18>/Ind1'
         */
        VeOFCR_e_BCIM_Ind1_Cmd = CeCITR_e_BCIM_Ind_Blink;

        /* Merge: '<S7>/Merge2' incorporates:
         *  Constant: '<S51>/Constant'
         *  SignalConversion generated from: '<S18>/Ind2'
         */
        VeOFCR_e_BCIM_Ind2_Cmd = CeCITR_e_BCIM_Ind_Off;

        /* Merge: '<S7>/Merge4' incorporates:
         *  Constant: '<S52>/Constant'
         *  SignalConversion generated from: '<S18>/Ind3'
         */
        VeOFCR_e_BCIM_Ind3_Cmd = CeCITR_e_BCIM_Ind_Off;

        /* Switch: '<S18>/Switch' incorporates:
         *  Constant: '<S13>/Calib'
         *  Switch: '<S18>/Switch1'
         *  Switch: '<S18>/Switch2'
         */
        if (HeOFCR_b_Actvt5LED)
        {
            /* Merge: '<S7>/Merge5' incorporates:
             *  Constant: '<S56>/Constant'
             */
            VeOFCR_e_BCIM_Ind4_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge1' incorporates:
             *  Constant: '<S58>/Constant'
             */
            VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_Blink;

            /* Merge: '<S7>/Merge6' incorporates:
             *  Constant: '<S53>/Constant'
             */
            VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_NoColor;
        }
        else
        {
            /* Merge: '<S7>/Merge5' incorporates:
             *  Constant: '<S57>/Constant'
             */
            VeOFCR_e_BCIM_Ind4_Cmd = CeCITR_e_BCIM_Ind_Blink;

            /* Merge: '<S7>/Merge1' incorporates:
             *  Constant: '<S59>/Constant'
             */
            VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge6' incorporates:
             *  Constant: '<S54>/Constant'
             */
            VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_Red;
        }

        /* End of Switch: '<S18>/Switch' */

        /* Merge: '<S7>/Merge3' incorporates:
         *  Constant: '<S55>/Constant'
         *  SignalConversion generated from: '<S18>/BlinkRate'
         */
        VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate1;

        /* End of Outputs for SubSystem: '<S7>/If Action Subsystem7' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S17>/Action Port'
         */
        if (rtb_Comparison6 || rtb_Comparison1)
        {
            /* Merge: '<S7>/Merge' incorporates:
             *  Chart: '<S17>/Stateflow Chart'
             */
            /* Gateway: OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action
               Subsystem3/Stateflow
               Chart */
            /* During: OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action
               Subsystem3/Stateflow
               Chart */
            /* Entry Internal: OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action
               Subsystem3/Stateflow
               Chart */
            /* Transition: '<S49>:1' */
            /* Transition: '<S49>:4' */
            VeOFCR_e_BCIM_Ind1_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge2' incorporates:
             *  Chart: '<S17>/Stateflow Chart'
             */
            VeOFCR_e_BCIM_Ind2_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge4' incorporates:
             *  Chart: '<S17>/Stateflow Chart'
             */
            VeOFCR_e_BCIM_Ind3_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge5' incorporates:
             *  Chart: '<S17>/Stateflow Chart'
             */
            VeOFCR_e_BCIM_Ind4_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge1' incorporates:
             *  Chart: '<S17>/Stateflow Chart'
             */
            VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_Off;

            /* Merge: '<S7>/Merge3' incorporates:
             *  Chart: '<S17>/Stateflow Chart'
             */
            VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_NoBlink;

            /* Chart: '<S17>/Stateflow Chart' incorporates:
             *  Constant: '<S13>/Calib'
             */
            if (VeOFCR_Pct_HVBatSOC_HCP >= 0.0F)
            {
                /* Merge: '<S7>/Merge' */
                /* Transition: '<S49>:6' */
                /* Transition: '<S49>:15' */
                VeOFCR_e_BCIM_Ind1_Cmd = CeCITR_e_BCIM_Ind_Blink;

                /* Merge: '<S7>/Merge3' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate3;

                /* Transition: '<S49>:66' */
            }
            else
            {
                /* Transition: '<S49>:9' */
            }

            if (((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 10.0F)) ||
                    (VeOFCR_Pct_HVBatSOC_HCP >= ((float32)12.5)))
            {
                /* Merge: '<S7>/Merge3' */
                /* Transition: '<S49>:11' */
                /* Transition: '<S49>:13' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate1;

                /* Transition: '<S49>:68' */
            }
            else
            {
                /* Transition: '<S49>:14' */
            }

            if (((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 20.0F)) ||
                    (VeOFCR_Pct_HVBatSOC_HCP >= 25.0F))
            {
                /* Merge: '<S7>/Merge' */
                /* Transition: '<S49>:17' */
                /* Transition: '<S49>:19' */
                VeOFCR_e_BCIM_Ind1_Cmd = CeCITR_e_BCIM_Ind_On;

                /* Merge: '<S7>/Merge2' */
                VeOFCR_e_BCIM_Ind2_Cmd = CeCITR_e_BCIM_Ind_Blink;

                /* Merge: '<S7>/Merge3' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate3;

                /* Transition: '<S49>:70' */
            }
            else
            {
                /* Transition: '<S49>:20' */
            }

            if (((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 30.0F)) ||
                    (VeOFCR_Pct_HVBatSOC_HCP >= ((float32)37.5)))
            {
                /* Merge: '<S7>/Merge3' */
                /* Transition: '<S49>:22' */
                /* Transition: '<S49>:24' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate1;

                /* Transition: '<S49>:72' */
            }
            else
            {
                /* Transition: '<S49>:25' */
            }

            if (((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 40.0F)) ||
                    (VeOFCR_Pct_HVBatSOC_HCP >= 50.0F))
            {
                /* Merge: '<S7>/Merge2' */
                /* Transition: '<S49>:27' */
                /* Transition: '<S49>:29' */
                VeOFCR_e_BCIM_Ind2_Cmd = CeCITR_e_BCIM_Ind_On;

                /* Merge: '<S7>/Merge4' */
                VeOFCR_e_BCIM_Ind3_Cmd = CeCITR_e_BCIM_Ind_Blink;

                /* Merge: '<S7>/Merge3' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate3;

                /* Transition: '<S49>:74' */
            }
            else
            {
                /* Transition: '<S49>:30' */
            }

            if (((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 50.0F)) ||
                    (VeOFCR_Pct_HVBatSOC_HCP >= ((float32)62.5)))
            {
                /* Merge: '<S7>/Merge3' */
                /* Transition: '<S49>:33' */
                /* Transition: '<S49>:34' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate1;

                /* Transition: '<S49>:76' */
            }
            else
            {
                /* Transition: '<S49>:35' */
            }

            if (((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 60.0F)) ||
                    (VeOFCR_Pct_HVBatSOC_HCP >= 75.0F))
            {
                /* Merge: '<S7>/Merge4' */
                /* Transition: '<S49>:37' */
                /* Transition: '<S49>:39' */
                VeOFCR_e_BCIM_Ind3_Cmd = CeCITR_e_BCIM_Ind_On;

                /* Merge: '<S7>/Merge5' */
                VeOFCR_e_BCIM_Ind4_Cmd = CeCITR_e_BCIM_Ind_Blink;

                /* Merge: '<S7>/Merge3' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate3;

                /* Transition: '<S49>:78' */
            }
            else
            {
                /* Transition: '<S49>:40' */
            }

            if (((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 70.0F)) ||
                    ((VeOFCR_Pct_HVBatSOC_HCP >= ((float32)87.5)) &&
                     (VeOFCR_Pct_HVBatSOC_HCP < 100.0F)))
            {
                /* Merge: '<S7>/Merge3' */
                /* Transition: '<S49>:43' */
                /* Transition: '<S49>:44' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate1;

                /* Transition: '<S49>:80' */
            }
            else
            {
                /* Transition: '<S49>:45' */
            }

            if ((HeOFCR_b_Actvt5LED) && (VeOFCR_Pct_HVBatSOC_HCP >= 80.0F))
            {
                /* Merge: '<S7>/Merge5' */
                /* Transition: '<S49>:47' */
                /* Transition: '<S49>:49' */
                VeOFCR_e_BCIM_Ind4_Cmd = CeCITR_e_BCIM_Ind_On;

                /* Merge: '<S7>/Merge1' */
                VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_Blink;

                /* Merge: '<S7>/Merge3' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate3;

                /* Transition: '<S49>:82' */
            }
            else
            {
                /* Transition: '<S49>:50' */
            }

            if ((HeOFCR_b_Actvt5LED) && ((VeOFCR_Pct_HVBatSOC_HCP >= 90.0F) &&
                    (VeOFCR_Pct_HVBatSOC_HCP < 100.0F)))
            {
                /* Merge: '<S7>/Merge3' */
                /* Transition: '<S49>:52' */
                /* Transition: '<S49>:84' */
                VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_BlinkRate1;

                /* Transition: '<S49>:85' */
            }
            else
            {
                /* Transition: '<S49>:55' */
            }

            /* Switch: '<S17>/Switch2' incorporates:
             *  Constant: '<S13>/Calib'
             */
            if (HeOFCR_b_Actvt5LED)
            {
                /* Merge: '<S7>/Merge6' incorporates:
                 *  Constant: '<S47>/Constant'
                 */
                VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_NoColor;
            }
            else
            {
                /* Merge: '<S7>/Merge6' incorporates:
                 *  Constant: '<S48>/Constant'
                 */
                VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_Green;
            }

            /* End of Switch: '<S17>/Switch2' */
        }
        else if (rtb_UnitDelay_ie)
        {
            /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S16>/Action Port'
             */
            /* Merge: '<S7>/Merge' incorporates:
             *  Constant: '<S38>/Constant'
             *  SignalConversion generated from: '<S16>/Ind1'
             */
            VeOFCR_e_BCIM_Ind1_Cmd = CeCITR_e_BCIM_Ind_On;

            /* Merge: '<S7>/Merge2' incorporates:
             *  Constant: '<S40>/Constant'
             *  SignalConversion generated from: '<S16>/Ind2'
             */
            VeOFCR_e_BCIM_Ind2_Cmd = CeCITR_e_BCIM_Ind_On;

            /* Merge: '<S7>/Merge4' incorporates:
             *  Constant: '<S39>/Constant'
             *  SignalConversion generated from: '<S16>/Ind3'
             */
            VeOFCR_e_BCIM_Ind3_Cmd = CeCITR_e_BCIM_Ind_On;

            /* Merge: '<S7>/Merge5' incorporates:
             *  Constant: '<S41>/Constant'
             *  SignalConversion generated from: '<S16>/Ind4'
             */
            VeOFCR_e_BCIM_Ind4_Cmd = CeCITR_e_BCIM_Ind_On;

            /* Switch: '<S16>/Switch1' incorporates:
             *  Constant: '<S13>/Calib'
             *  Switch: '<S16>/Switch2'
             */
            if (HeOFCR_b_Actvt5LED)
            {
                /* Merge: '<S7>/Merge1' incorporates:
                 *  Constant: '<S45>/Constant'
                 */
                VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_On;

                /* Merge: '<S7>/Merge6' incorporates:
                 *  Constant: '<S42>/Constant'
                 */
                VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_NoColor;
            }
            else
            {
                /* Merge: '<S7>/Merge1' incorporates:
                 *  Constant: '<S46>/Constant'
                 */
                VeOFCR_e_BCIM_Ind5_Cmd = CeCITR_e_BCIM_Ind_Off;

                /* Merge: '<S7>/Merge6' incorporates:
                 *  Constant: '<S44>/Constant'
                 */
                VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_Green;
            }

            /* End of Switch: '<S16>/Switch1' */

            /* Merge: '<S7>/Merge3' incorporates:
             *  Constant: '<S43>/Constant'
             *  SignalConversion generated from: '<S16>/BlinkRate'
             */
            VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_NoBlink;

            /* End of Outputs for SubSystem: '<S7>/If Action Subsystem2' */
        }
        else if ((((!VeOFCR_b_SecureConnV2L) && (!VeOFCR_b_ChargeReq)) ||
                  rtb_Comparison4_n) || (VeOFCR_b_SmartEVSE_Dtctd))
        {
            /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem8' incorporates:
             *  ActionPort: '<S19>/Action Port'
             */
            /* Chart: '<S19>/Stateflow Chart' incorporates:
             *  Constant: '<S159>/Calib'
             *  Logic: '<S7>/Logical3'
             */
            /* Gateway: OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action
               Subsystem8/Stateflow
               Chart */
            /* During: OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action
               Subsystem8/Stateflow
               Chart */
            if (((uint32)OFCR_ac_DW.is_active_c6_OFCR_ac) == 0U)
            {
                /* Entry: OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action
                   Subsystem8/Stateflow
                   Chart */
                OFCR_ac_DW.is_active_c6_OFCR_ac = 1U;

                /* Entry Internal: OFCR_MedTEH/OFCC/BCIM_LINInterface/If Action
                   Subsystem8/Stateflow
                   Chart */
                /* Transition: '<S63>:71' */
                OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Off;

                /* Entry 'Off': '<S63>:70' */
                OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
            }
            else
            {
                guard1 = false;
                switch (OFCR_ac_DW.is_c6_OFCR_ac)
                {
                  case OFCR_ac_IN_Ind1_Blink:
                    /* During 'Ind1_Blink': '<S63>:72' */
                    if (rtb_AND_hm)
                    {
                        /* Transition: '<S63>:86' */
                        /* Transition: '<S63>:93' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Off;

                        /* Entry 'Off': '<S63>:70' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else if (OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer >=
                             (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                    {
                        /* Transition: '<S63>:75' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Ind2_Blink;

                        /* Entry 'Ind2_Blink': '<S63>:74' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_On;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else
                    {
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer +=
                            HeOFCR_t_ExecRate;
                    }
                    break;

                  case OFCR_ac_IN_Ind2_Blink:
                    /* During 'Ind2_Blink': '<S63>:74' */
                    if (rtb_AND_hm)
                    {
                        /* Transition: '<S63>:87' */
                        /* Transition: '<S63>:91' */
                        /* Transition: '<S63>:93' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Off;

                        /* Entry 'Off': '<S63>:70' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else if (OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer >=
                             (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                    {
                        /* Transition: '<S63>:77' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Ind3_Blink;

                        /* Entry 'Ind3_Blink': '<S63>:76' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_On;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else
                    {
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer +=
                            HeOFCR_t_ExecRate;
                    }
                    break;

                  case OFCR_ac_IN_Ind3_Blink:
                    /* During 'Ind3_Blink': '<S63>:76' */
                    if (rtb_AND_hm)
                    {
                        /* Transition: '<S63>:88' */
                        /* Transition: '<S63>:91' */
                        /* Transition: '<S63>:93' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Off;

                        /* Entry 'Off': '<S63>:70' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else if (OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer >=
                             (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                    {
                        /* Transition: '<S63>:79' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Ind4_Blink;

                        /* Entry 'Ind4_Blink': '<S63>:78' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_On;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else
                    {
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer +=
                            HeOFCR_t_ExecRate;
                    }
                    break;

                  case OFCR_ac_IN_Ind4_Blink:
                    /* During 'Ind4_Blink': '<S63>:78' */
                    if (rtb_AND_hm)
                    {
                        /* Transition: '<S63>:89' */
                        /* Transition: '<S63>:91' */
                        /* Transition: '<S63>:93' */
                        guard1 = true;
                    }
                    else
                    {
                        rtb_Switch1_l = KeOFCR_t_FiveLED_KnghtRdr -
                            HeOFCR_t_ExecRate;
                        if ((HeOFCR_b_Actvt5LED) &&
                                (OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer >=
                                 rtb_Switch1_l))
                        {
                            /* Transition: '<S63>:81' */
                            OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Ind5_Blink;

                            /* Entry 'Ind5_Blink': '<S63>:80' */
                            OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_On;
                            OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                        }
                        else if (OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer >=
                                 rtb_Switch1_l)
                        {
                            /* Transition: '<S63>:96' */
                            guard1 = true;
                        }
                        else
                        {
                            OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer +=
                                HeOFCR_t_ExecRate;
                        }
                    }
                    break;

                  case OFCR_ac_IN_Ind5_Blink:
                    /* During 'Ind5_Blink': '<S63>:80' */
                    if (rtb_AND_hm || (OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer >=
                                       (KeOFCR_t_FiveLED_KnghtRdr -
                                        HeOFCR_t_ExecRate)))
                    {
                        /* Transition: '<S63>:82' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Off;

                        /* Entry 'Off': '<S63>:70' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else
                    {
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer +=
                            HeOFCR_t_ExecRate;
                    }
                    break;

                  default:
                    /* During 'Off': '<S63>:70' */
                    if (rtb_AND_hm)
                    {
                        /* Transition: '<S63>:94' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Off;

                        /* Entry 'Off': '<S63>:70' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else if ((VeOFCR_b_CPIM_ChrgSts_tmp_0 || rtb_Comparison4_n) &&
                             (OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer >=
                              (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate)))
                    {
                        /* Transition: '<S63>:73' */
                        OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Ind1_Blink;

                        /* Entry 'Ind1_Blink': '<S63>:72' */
                        OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_On;
                        OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                    }
                    else
                    {
                        OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer +=
                            HeOFCR_t_ExecRate;
                    }
                    break;
                }

                if (guard1)
                {
                    OFCR_ac_DW.is_c6_OFCR_ac = OFCR_ac_IN_Off;

                    /* Entry 'Off': '<S63>:70' */
                    OFCR_ac_B.Ind1_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                    OFCR_ac_B.Ind2_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                    OFCR_ac_B.Ind3_Cmd_n = CeCITR_e_BCIM_Ind_Off;
                    OFCR_ac_B.Ind4_Cmd_k = CeCITR_e_BCIM_Ind_Off;
                    OFCR_ac_B.Ind5_Cmd_g = CeCITR_e_BCIM_Ind_Off;
                    OFCR_ac_B.VeOFCR_t_BCIM_StateColorTimer = 0.0F;
                }
            }

            /* End of Chart: '<S19>/Stateflow Chart' */

            /* Merge: '<S7>/Merge' incorporates:
             *  SignalConversion generated from: '<S19>/Ind1'
             */
            VeOFCR_e_BCIM_Ind1_Cmd = OFCR_ac_B.Ind1_Cmd_k;

            /* Merge: '<S7>/Merge2' incorporates:
             *  SignalConversion generated from: '<S19>/Ind2'
             */
            VeOFCR_e_BCIM_Ind2_Cmd = OFCR_ac_B.Ind2_Cmd_g;

            /* Merge: '<S7>/Merge4' incorporates:
             *  SignalConversion generated from: '<S19>/Ind3'
             */
            VeOFCR_e_BCIM_Ind3_Cmd = OFCR_ac_B.Ind3_Cmd_n;

            /* Merge: '<S7>/Merge5' incorporates:
             *  SignalConversion generated from: '<S19>/Ind4'
             */
            VeOFCR_e_BCIM_Ind4_Cmd = OFCR_ac_B.Ind4_Cmd_k;

            /* Merge: '<S7>/Merge1' incorporates:
             *  SignalConversion generated from: '<S19>/Ind5'
             */
            VeOFCR_e_BCIM_Ind5_Cmd = OFCR_ac_B.Ind5_Cmd_g;

            /* Switch: '<S19>/Switch2' incorporates:
             *  Constant: '<S13>/Calib'
             */
            if (HeOFCR_b_Actvt5LED)
            {
                /* Merge: '<S7>/Merge6' incorporates:
                 *  Constant: '<S60>/Constant'
                 */
                VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_NoColor;
            }
            else
            {
                /* Merge: '<S7>/Merge6' incorporates:
                 *  Constant: '<S62>/Constant'
                 */
                VeOFCR_e_BCIM_Color_Cmd = CeCITR_e_BCIM_Blue;
            }

            /* End of Switch: '<S19>/Switch2' */

            /* Merge: '<S7>/Merge3' incorporates:
             *  Constant: '<S61>/Constant'
             *  SignalConversion generated from: '<S19>/BlinkRate'
             */
            VeOFCR_e_BCIM_BlinkRate_Cmd = CeCITR_e_BCIM_NoBlink;

            /* End of Outputs for SubSystem: '<S7>/If Action Subsystem8' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem9' incorporates:
             *  ActionPort: '<S20>/Action Port'
             */
            OFCR_ac_IfActionSubsystem((&(VeOFCR_e_BCIM_Ind1_Cmd)),
                (&(VeOFCR_e_BCIM_Ind2_Cmd)), (&(VeOFCR_e_BCIM_Ind3_Cmd)),
                (&(VeOFCR_e_BCIM_Ind4_Cmd)), (&(VeOFCR_e_BCIM_Ind5_Cmd)),
                (&(VeOFCR_e_BCIM_BlinkRate_Cmd)), (&(VeOFCR_e_BCIM_Color_Cmd)));

            /* End of Outputs for SubSystem: '<S7>/If Action Subsystem9' */
        }

        /* End of Outputs for SubSystem: '<S7>/If Action Subsystem3' */
    }

    /* End of If: '<S7>/If' */

    /* RelationalOperator: '<S225>/Comparison4' incorporates:
     *  Constant: '<S81>/Calib'
     *  Logic: '<S71>/Logical'
     */
    rtb_Comparison4_n = ((VeOFCR_b_ChrgPortLock_BCI) &&
                         (KeOFCR_b_AlwCPIMBluFlshInUnlock));

    /* Logic: '<S71>/Logical8' incorporates:
     *  Logic: '<S71>/Logical4'
     */
    VeOFCR_b_WaitingToChrg = (((VeOFCR_b_CPIM_ChrgSts_tmp &&
        VeOFCR_b_CPIM_ChrgSts_tmp_0) || rtb_Comparison4_n) ||
        (VeOFCR_b_SmartEVSE_Dtctd));

    /* Logic: '<S71>/Logical3' */
    rtb_Comparison4_n = ((VeOFCR_b_ChargeReq) || rtb_Comparison4_n);

    /* If: '<S162>/If1' incorporates:
     *  Constant: '<S213>/Constant'
     *  Constant: '<S215>/Calib'
     *  Logic: '<S162>/Logical6'
     *  RelationalOperator: '<S162>/Comparison8'
     *  Switch: '<S5>/Switch14'
     */
    if ((VeOFCR_e_ShifterPOS == CeHMIR_e_ShifterPosPark) &&
            (KeOFCR_b_TriggerBulbs))
    {
        /* Outputs for IfAction SubSystem: '<S162>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S214>/Action Port'
         */
        /* RelationalOperator: '<S214>/Comparison4' incorporates:
         *  Constant: '<S218>/Constant'
         *  Switch: '<S5>/Switch25'
         */
        rtb_Comparison4 = (VeOFCR_e_BrkPedalDscrtInpt == CeBRKR_e_BrkApplied);

        /* Outputs for Atomic SubSystem: '<S214>/EdgeRising' */
        /* Logic: '<S217>/AND' incorporates:
         *  Logic: '<S217>/OR1'
         *  UnitDelay: '<S217>/Unit Delay'
         */
        rtb_AND_l = (rtb_Comparison4 && (!OFCR_ac_DW.UnitDelay_DSTATE_hk));

        /* Update for UnitDelay: '<S217>/Unit Delay' */
        OFCR_ac_DW.UnitDelay_DSTATE_hk = rtb_Comparison4;

        /* End of Outputs for SubSystem: '<S214>/EdgeRising' */

        /* Chart: '<S214>/BulbTrigSeq' incorporates:
         *  Constant: '<S159>/Calib'
         *  Switch: '<S5>/Switch18'
         */
        /* Gateway: OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1/BulbTrigSeq */
        /* During: OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1/BulbTrigSeq */
        if (((uint32)OFCR_ac_DW.is_active_c4_OFCR_ac) == 0U)
        {
            /* Entry: OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1/BulbTrigSeq */
            OFCR_ac_DW.is_active_c4_OFCR_ac = 1U;

            /* Entry Internal: OFCR_MedTEH/OFCC/InputProc/TriggerBulbs/IfActionSubsystem1/BulbTrigSeq */
            /* Transition: '<S216>:1' */
            OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_Init;

            /* Entry 'Init': '<S216>:41' */
            OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;
            OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
        }
        else
        {
            switch (OFCR_ac_DW.is_c4_OFCR_ac)
            {
              case OFCR_ac_IN_Init:
                OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;

                /* During 'Init': '<S216>:41' */
                if ((OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer < 10.0F) && rtb_AND_l)
                {
                    /* Transition: '<S216>:43' */
                    OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_State1;

                    /* Entry 'State1': '<S216>:8' */
                    OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer += HeOFCR_t_ExecRate;
                }
                break;

              case OFCR_ac_IN_State1:
                OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;

                /* During 'State1': '<S216>:8' */
                if ((OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer < 10.0F) && (((uint32)
                        VeOFCR_e_PMM_PowerMode) == CePMDR_e_PowerMode_Off))
                {
                    /* Transition: '<S216>:19' */
                    OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_State2;

                    /* Entry 'State2': '<S216>:18' */
                    OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
                }
                else if (OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer > 10.0F)
                {
                    /* Transition: '<S216>:46' */
                    /* Transition: '<S216>:52' */
                    OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_Init;

                    /* Entry 'Init': '<S216>:41' */
                    OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer += HeOFCR_t_ExecRate;
                }
                break;

              case OFCR_ac_IN_State2:
                OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;

                /* During 'State2': '<S216>:18' */
                if ((OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer < 10.0F) && (((uint32)
                        VeOFCR_e_PMM_PowerMode) == CePMDR_e_PowerMode_Run))
                {
                    /* Transition: '<S216>:24' */
                    OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_State3;

                    /* Entry 'State3': '<S216>:20' */
                    OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
                }
                else if (OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer > 10.0F)
                {
                    /* Transition: '<S216>:48' */
                    /* Transition: '<S216>:49' */
                    /* Transition: '<S216>:52' */
                    OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_Init;

                    /* Entry 'Init': '<S216>:41' */
                    OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer += HeOFCR_t_ExecRate;
                }
                break;

              case OFCR_ac_IN_State3:
                OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;

                /* During 'State3': '<S216>:20' */
                if ((OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer < 10.0F) && rtb_AND_l)
                {
                    /* Transition: '<S216>:64' */
                    OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_State4;

                    /* Entry 'State4': '<S216>:60' */
                    OFCR_ac_B.VeOFCR_b_TriggerBulbs = true;
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
                }
                else if (OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer > 10.0F)
                {
                    /* Transition: '<S216>:59' */
                    /* Transition: '<S216>:56' */
                    /* Transition: '<S216>:49' */
                    /* Transition: '<S216>:52' */
                    OFCR_ac_DW.is_c4_OFCR_ac = OFCR_ac_IN_Init;

                    /* Entry 'Init': '<S216>:41' */
                    OFCR_ac_B.VeOFCR_b_TriggerBulbs = false;
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer = 0.0F;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer += HeOFCR_t_ExecRate;
                }
                break;

              default:
                OFCR_ac_B.VeOFCR_b_TriggerBulbs = true;

                /* During 'State4': '<S216>:60' */
                OFCR_ac_B.VeOFCR_t_TriggerBulbsTimer += HeOFCR_t_ExecRate;
                break;
            }
        }

        /* End of Chart: '<S214>/BulbTrigSeq' */
        /* End of Outputs for SubSystem: '<S162>/IfActionSubsystem1' */
    }

    /* End of If: '<S162>/If1' */

    /* Selector: '<S161>/Selector' incorporates:
     *  Constant: '<S198>/Calib'
     */
    rtb_Switch1_l = KaOFCR_k_CPIMTestColor[(VeOFCR_k_ChrgSysFault_Reason)];

    /* Outputs for Atomic SubSystem: '<S161>/Protected Division' */
    /* Switch: '<S199>/Switch1' incorporates:
     *  Constant: '<S198>/Calib'
     *  Constant: '<S199>/Constant Value'
     *  Constant: '<S199>/Constant Value2'
     *  Constant: '<S199>/Constant Value3'
     *  Logic: '<S199>/AND'
     *  RelationalOperator: '<S199>/Greater Than or Equal '
     *  RelationalOperator: '<S199>/Greater Than or Equal 1'
     *  RelationalOperator: '<S199>/Not Equal'
     *  Selector: '<S161>/Selector'
     *  Switch: '<S199>/Switch2'
     *  Switch: '<S199>/Switch3'
     */
    if ((rtb_Switch1_l != 0.0F) && (OFCR_ac_ConstB.NotEqual1_dn))
    {
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value16'
         *  Product: '<S199>/Division'
         */
        rtb_Switch1_e = rtb_Switch1_l / 10000.0F;
    }
    else if (rtb_Switch1_l > 0.0F)
    {
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S199>/MAXFLOAT'
         *  Switch: '<S199>/Switch2'
         */
        rtb_Switch1_e = 3.402823466E+38F;
    }
    else if (rtb_Switch1_l < 0.0F)
    {
        /* Switch: '<S199>/Switch3' incorporates:
         *  Constant: '<S199>/MINFLOAT'
         *  Switch: '<S199>/Switch1'
         *  Switch: '<S199>/Switch2'
         */
        rtb_Switch1_e = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S199>/Constant Value4'
         *  Switch: '<S199>/Switch2'
         *  Switch: '<S199>/Switch3'
         */
        rtb_Switch1_e = 0.0F;
    }

    /* End of Switch: '<S199>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S207>/Protected Division' */
    /* Switch: '<S212>/Switch1' incorporates:
     *  Constant: '<S212>/Constant Value'
     *  Constant: '<S212>/Constant Value2'
     *  Constant: '<S212>/Constant Value3'
     *  Logic: '<S212>/AND'
     *  RelationalOperator: '<S212>/Greater Than or Equal '
     *  RelationalOperator: '<S212>/Greater Than or Equal 1'
     *  RelationalOperator: '<S212>/Not Equal'
     *  Switch: '<S212>/Switch2'
     *  Switch: '<S212>/Switch3'
     */
    if ((rtb_Switch1_e != 0.0F) && (OFCR_ac_ConstB.NotEqual1))
    {
        /* Switch: '<S212>/Switch1' incorporates:
         *  Constant: '<S207>/Constant Value'
         *  Product: '<S212>/Division'
         */
        rtb_Switch1_e /= 10.0F;
    }
    else if (rtb_Switch1_e > 0.0F)
    {
        /* Switch: '<S212>/Switch2' incorporates:
         *  Constant: '<S212>/MAXFLOAT'
         *  Switch: '<S212>/Switch1'
         */
        rtb_Switch1_e = 3.402823466E+38F;
    }
    else if (rtb_Switch1_e < 0.0F)
    {
        /* Switch: '<S212>/Switch3' incorporates:
         *  Constant: '<S212>/MINFLOAT'
         *  Switch: '<S212>/Switch1'
         *  Switch: '<S212>/Switch2'
         */
        rtb_Switch1_e = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S212>/Switch1' incorporates:
         *  Constant: '<S212>/Constant Value4'
         *  Switch: '<S212>/Switch2'
         *  Switch: '<S212>/Switch3'
         */
        rtb_Switch1_e = 0.0F;
    }

    /* End of Switch: '<S212>/Switch1' */
    /* End of Outputs for SubSystem: '<S207>/Protected Division' */

    /* Rounding: '<S207>/Rounding1' incorporates:
     *  Constant: '<S207>/Constant Value1'
     *  Product: '<S207>/Product'
     *  Rounding: '<S207>/Rounding'
     *  Sum: '<S207>/Sum1'
     */
    VeOFCR_k_NumS1 = roundf((rtb_Switch1_e - floorf(rtb_Switch1_e)) * 10.0F);

    /* Outputs for Atomic SubSystem: '<S178>/Stop Watch Reset Enabled' */
    /* Switch: '<S180>/Switch1' incorporates:
     *  Constant: '<S178>/TRUE Constant'
     *  Constant: '<S180>/Constant Value2'
     *  Switch: '<S180>/Switch2'
     *  UnitDelay: '<S178>/Unit Delay1'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    if (OFCR_ac_DW.UnitDelay1_DSTATE)
    {
        OFCR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        if (true)
        {
            /* UnitDelay: '<S180>/Unit Delay' incorporates:
             *  Constant: '<S163>/Calib'
             *  Sum: '<S180>/Subtraction'
             *  Switch: '<S180>/Switch2'
             */
            OFCR_ac_DW.UnitDelay_DSTATE += HeOFCR_t_ExecRate;
        }
    }

    /* End of Switch: '<S180>/Switch1' */

    /* Sum: '<S180>/Sum1' incorporates:
     *  Constant: '<S163>/Calib'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    rtb_Switch1_e = OFCR_ac_DW.UnitDelay_DSTATE - HeOFCR_t_ExecRate;

    /* End of Outputs for SubSystem: '<S178>/Stop Watch Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S155>/RightOpenInterval' */
    /* Logic: '<S175>/Logical Operator' incorporates:
     *  Constant: '<S155>/Constant Value5'
     *  Constant: '<S170>/Calib'
     *  RelationalOperator: '<S175>/Relatonal Operator'
     *  RelationalOperator: '<S175>/Relatonal Operator1'
     */
    VeOFCR_b_S1Condition = ((rtb_Switch1_e >= 0.0F) && (rtb_Switch1_e <
        KeOFCR_t_ONTime));

    /* End of Outputs for SubSystem: '<S155>/RightOpenInterval' */

    /* Outputs for Atomic SubSystem: '<S161>/Protected Division1' */
    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S200>/Constant Value'
     *  Constant: '<S200>/Constant Value2'
     *  Constant: '<S200>/Constant Value3'
     *  Logic: '<S200>/AND'
     *  RelationalOperator: '<S200>/Greater Than or Equal '
     *  RelationalOperator: '<S200>/Greater Than or Equal 1'
     *  RelationalOperator: '<S200>/Not Equal'
     *  Switch: '<S200>/Switch2'
     *  Switch: '<S200>/Switch3'
     */
    if ((rtb_Switch1_l != 0.0F) && (OFCR_ac_ConstB.NotEqual1_j))
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value14'
         *  Product: '<S200>/Division'
         */
        rtb_Switch1_j = rtb_Switch1_l / 1000.0F;
    }
    else if (rtb_Switch1_l > 0.0F)
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S200>/MAXFLOAT'
         *  Switch: '<S200>/Switch2'
         */
        rtb_Switch1_j = 3.402823466E+38F;
    }
    else if (rtb_Switch1_l < 0.0F)
    {
        /* Switch: '<S200>/Switch3' incorporates:
         *  Constant: '<S200>/MINFLOAT'
         *  Switch: '<S200>/Switch1'
         *  Switch: '<S200>/Switch2'
         */
        rtb_Switch1_j = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S200>/Constant Value4'
         *  Switch: '<S200>/Switch2'
         *  Switch: '<S200>/Switch3'
         */
        rtb_Switch1_j = 0.0F;
    }

    /* End of Switch: '<S200>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S203>/Protected Division' */
    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S208>/Constant Value'
     *  Constant: '<S208>/Constant Value2'
     *  Constant: '<S208>/Constant Value3'
     *  Logic: '<S208>/AND'
     *  RelationalOperator: '<S208>/Greater Than or Equal '
     *  RelationalOperator: '<S208>/Greater Than or Equal 1'
     *  RelationalOperator: '<S208>/Not Equal'
     *  Switch: '<S208>/Switch2'
     *  Switch: '<S208>/Switch3'
     */
    if ((rtb_Switch1_j != 0.0F) && (OFCR_ac_ConstB.NotEqual1_e))
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S203>/Constant Value'
         *  Product: '<S208>/Division'
         */
        rtb_Switch1_j /= 10.0F;
    }
    else if (rtb_Switch1_j > 0.0F)
    {
        /* Switch: '<S208>/Switch2' incorporates:
         *  Constant: '<S208>/MAXFLOAT'
         *  Switch: '<S208>/Switch1'
         */
        rtb_Switch1_j = 3.402823466E+38F;
    }
    else if (rtb_Switch1_j < 0.0F)
    {
        /* Switch: '<S208>/Switch3' incorporates:
         *  Constant: '<S208>/MINFLOAT'
         *  Switch: '<S208>/Switch1'
         *  Switch: '<S208>/Switch2'
         */
        rtb_Switch1_j = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S208>/Constant Value4'
         *  Switch: '<S208>/Switch2'
         *  Switch: '<S208>/Switch3'
         */
        rtb_Switch1_j = 0.0F;
    }

    /* End of Switch: '<S208>/Switch1' */
    /* End of Outputs for SubSystem: '<S203>/Protected Division' */

    /* Rounding: '<S203>/Rounding1' incorporates:
     *  Constant: '<S203>/Constant Value1'
     *  Product: '<S203>/Product'
     *  Rounding: '<S203>/Rounding'
     *  Sum: '<S203>/Sum1'
     */
    VeOFCR_k_NumS2 = roundf((rtb_Switch1_j - floorf(rtb_Switch1_j)) * 10.0F);

    /* Product: '<S177>/Product5' incorporates:
     *  Constant: '<S170>/Calib'
     *  Constant: '<S177>/Constant Value1'
     *  Product: '<S177>/Product1'
     */
    rtb_Switch1_j = 2.0F * KeOFCR_t_ONTime;

    /* Outputs for Atomic SubSystem: '<S155>/LeftOpenInterval' */
    /* Logic: '<S171>/Logical Operator' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S170>/Calib'
     *  RelationalOperator: '<S171>/Relatonal Operator'
     *  RelationalOperator: '<S171>/Relatonal Operator1'
     *  Sum: '<S172>/Sum10'
     *  Sum: '<S172>/Sum9'
     */
    VeOFCR_b_S2Condition = ((rtb_Switch1_e > (KeOFCR_t_ONTime + KeOFCR_t_OFFTime))
                            && (rtb_Switch1_e <= (rtb_Switch1_j +
        KeOFCR_t_OFFTime)));

    /* End of Outputs for SubSystem: '<S155>/LeftOpenInterval' */

    /* Outputs for Atomic SubSystem: '<S161>/Protected Division2' */
    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S201>/Constant Value'
     *  Constant: '<S201>/Constant Value2'
     *  Constant: '<S201>/Constant Value3'
     *  Logic: '<S201>/AND'
     *  RelationalOperator: '<S201>/Greater Than or Equal '
     *  RelationalOperator: '<S201>/Greater Than or Equal 1'
     *  RelationalOperator: '<S201>/Not Equal'
     *  Switch: '<S201>/Switch2'
     *  Switch: '<S201>/Switch3'
     */
    if ((rtb_Switch1_l != 0.0F) && (OFCR_ac_ConstB.NotEqual1_n))
    {
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value12'
         *  Product: '<S201>/Division'
         */
        rtb_Switch1_k = rtb_Switch1_l / 100.0F;
    }
    else if (rtb_Switch1_l > 0.0F)
    {
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S201>/MAXFLOAT'
         *  Switch: '<S201>/Switch2'
         */
        rtb_Switch1_k = 3.402823466E+38F;
    }
    else if (rtb_Switch1_l < 0.0F)
    {
        /* Switch: '<S201>/Switch3' incorporates:
         *  Constant: '<S201>/MINFLOAT'
         *  Switch: '<S201>/Switch1'
         *  Switch: '<S201>/Switch2'
         */
        rtb_Switch1_k = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S201>/Constant Value4'
         *  Switch: '<S201>/Switch2'
         *  Switch: '<S201>/Switch3'
         */
        rtb_Switch1_k = 0.0F;
    }

    /* End of Switch: '<S201>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S204>/Protected Division' */
    /* Switch: '<S209>/Switch1' incorporates:
     *  Constant: '<S209>/Constant Value'
     *  Constant: '<S209>/Constant Value2'
     *  Constant: '<S209>/Constant Value3'
     *  Logic: '<S209>/AND'
     *  RelationalOperator: '<S209>/Greater Than or Equal '
     *  RelationalOperator: '<S209>/Greater Than or Equal 1'
     *  RelationalOperator: '<S209>/Not Equal'
     *  Switch: '<S209>/Switch2'
     *  Switch: '<S209>/Switch3'
     */
    if ((rtb_Switch1_k != 0.0F) && (OFCR_ac_ConstB.NotEqual1_d))
    {
        /* Switch: '<S209>/Switch1' incorporates:
         *  Constant: '<S204>/Constant Value'
         *  Product: '<S209>/Division'
         */
        rtb_Switch1_k /= 10.0F;
    }
    else if (rtb_Switch1_k > 0.0F)
    {
        /* Switch: '<S209>/Switch2' incorporates:
         *  Constant: '<S209>/MAXFLOAT'
         *  Switch: '<S209>/Switch1'
         */
        rtb_Switch1_k = 3.402823466E+38F;
    }
    else if (rtb_Switch1_k < 0.0F)
    {
        /* Switch: '<S209>/Switch3' incorporates:
         *  Constant: '<S209>/MINFLOAT'
         *  Switch: '<S209>/Switch1'
         *  Switch: '<S209>/Switch2'
         */
        rtb_Switch1_k = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S209>/Switch1' incorporates:
         *  Constant: '<S209>/Constant Value4'
         *  Switch: '<S209>/Switch2'
         *  Switch: '<S209>/Switch3'
         */
        rtb_Switch1_k = 0.0F;
    }

    /* End of Switch: '<S209>/Switch1' */
    /* End of Outputs for SubSystem: '<S204>/Protected Division' */

    /* Rounding: '<S204>/Rounding1' incorporates:
     *  Constant: '<S204>/Constant Value1'
     *  Product: '<S204>/Product'
     *  Rounding: '<S204>/Rounding'
     *  Sum: '<S204>/Sum1'
     */
    VeOFCR_k_NumS3 = roundf((rtb_Switch1_k - floorf(rtb_Switch1_k)) * 10.0F);

    /* Switch: '<S225>/Switch2' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S177>/Constant Value1'
     *  Product: '<S177>/Product'
     */
    rtb_Switch1_k = KeOFCR_t_OFFTime * 2.0F;

    /* Sum: '<S172>/Sum11' */
    rtb_Sum11 = rtb_Switch1_j + rtb_Switch1_k;

    /* Product: '<S177>/Product5' incorporates:
     *  Constant: '<S170>/Calib'
     *  Constant: '<S177>/Constant Value3'
     *  Product: '<S177>/Product3'
     */
    rtb_Switch1_j = 3.0F * KeOFCR_t_ONTime;

    /* Outputs for Atomic SubSystem: '<S155>/RightOpenInterval2' */
    /* Logic: '<S176>/Logical Operator' incorporates:
     *  Constant: '<S163>/Calib'
     *  RelationalOperator: '<S176>/Relatonal Operator'
     *  RelationalOperator: '<S176>/Relatonal Operator1'
     *  Sum: '<S172>/Sum3'
     */
    VeOFCR_b_S3Condition = ((rtb_Switch1_e >= rtb_Sum11) && (rtb_Switch1_e <
        ((rtb_Switch1_j + rtb_Switch1_k) - HeOFCR_t_ExecRate)));

    /* End of Outputs for SubSystem: '<S155>/RightOpenInterval2' */

    /* Outputs for Atomic SubSystem: '<S161>/Protected Division3' */
    /* Switch: '<S202>/Switch1' incorporates:
     *  Constant: '<S202>/Constant Value'
     *  Constant: '<S202>/Constant Value2'
     *  Constant: '<S202>/Constant Value3'
     *  Logic: '<S202>/AND'
     *  RelationalOperator: '<S202>/Greater Than or Equal '
     *  RelationalOperator: '<S202>/Greater Than or Equal 1'
     *  RelationalOperator: '<S202>/Not Equal'
     *  Switch: '<S202>/Switch2'
     *  Switch: '<S202>/Switch3'
     */
    if ((rtb_Switch1_l != 0.0F) && (OFCR_ac_ConstB.NotEqual1_h))
    {
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value10'
         *  Product: '<S202>/Division'
         */
        rtb_Switch1_k = rtb_Switch1_l / 10.0F;
    }
    else if (rtb_Switch1_l > 0.0F)
    {
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S202>/MAXFLOAT'
         *  Switch: '<S202>/Switch2'
         */
        rtb_Switch1_k = 3.402823466E+38F;
    }
    else if (rtb_Switch1_l < 0.0F)
    {
        /* Switch: '<S202>/Switch3' incorporates:
         *  Constant: '<S202>/MINFLOAT'
         *  Switch: '<S202>/Switch1'
         *  Switch: '<S202>/Switch2'
         */
        rtb_Switch1_k = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S202>/Constant Value4'
         *  Switch: '<S202>/Switch2'
         *  Switch: '<S202>/Switch3'
         */
        rtb_Switch1_k = 0.0F;
    }

    /* End of Switch: '<S202>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Protected Division3' */

    /* Outputs for Atomic SubSystem: '<S205>/Protected Division' */
    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S210>/Constant Value'
     *  Constant: '<S210>/Constant Value2'
     *  Constant: '<S210>/Constant Value3'
     *  Logic: '<S210>/AND'
     *  RelationalOperator: '<S210>/Greater Than or Equal '
     *  RelationalOperator: '<S210>/Greater Than or Equal 1'
     *  RelationalOperator: '<S210>/Not Equal'
     *  Switch: '<S210>/Switch2'
     *  Switch: '<S210>/Switch3'
     */
    if ((rtb_Switch1_k != 0.0F) && (OFCR_ac_ConstB.NotEqual1_l))
    {
        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S205>/Constant Value'
         *  Product: '<S210>/Division'
         */
        rtb_Switch1_k /= 10.0F;
    }
    else if (rtb_Switch1_k > 0.0F)
    {
        /* Switch: '<S210>/Switch2' incorporates:
         *  Constant: '<S210>/MAXFLOAT'
         *  Switch: '<S210>/Switch1'
         */
        rtb_Switch1_k = 3.402823466E+38F;
    }
    else if (rtb_Switch1_k < 0.0F)
    {
        /* Switch: '<S210>/Switch3' incorporates:
         *  Constant: '<S210>/MINFLOAT'
         *  Switch: '<S210>/Switch1'
         *  Switch: '<S210>/Switch2'
         */
        rtb_Switch1_k = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S210>/Constant Value4'
         *  Switch: '<S210>/Switch2'
         *  Switch: '<S210>/Switch3'
         */
        rtb_Switch1_k = 0.0F;
    }

    /* End of Switch: '<S210>/Switch1' */
    /* End of Outputs for SubSystem: '<S205>/Protected Division' */

    /* Rounding: '<S205>/Rounding1' incorporates:
     *  Constant: '<S205>/Constant Value1'
     *  Product: '<S205>/Product'
     *  Rounding: '<S205>/Rounding'
     *  Sum: '<S205>/Sum1'
     */
    VeOFCR_k_NumS4 = roundf((rtb_Switch1_k - floorf(rtb_Switch1_k)) * 10.0F);

    /* Switch: '<S225>/Switch2' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S177>/Constant Value3'
     *  Product: '<S177>/Product2'
     */
    rtb_Switch1_k = KeOFCR_t_OFFTime * 3.0F;

    /* Sum: '<S172>/Sum13' incorporates:
     *  Constant: '<S163>/Calib'
     */
    rtb_Sum11 = (rtb_Switch1_j + rtb_Switch1_k) - HeOFCR_t_ExecRate;

    /* Product: '<S177>/Product5' incorporates:
     *  Constant: '<S170>/Calib'
     *  Constant: '<S177>/Constant Value2'
     */
    rtb_Switch1_j = 4.0F * KeOFCR_t_ONTime;

    /* Outputs for Atomic SubSystem: '<S155>/OpenInterval1' */
    /* Logic: '<S173>/Logical Operator' incorporates:
     *  Constant: '<S163>/Calib'
     *  RelationalOperator: '<S173>/Relatonal Operator'
     *  RelationalOperator: '<S173>/Relatonal Operator1'
     *  Sum: '<S172>/Sum14'
     */
    VeOFCR_b_S4Condition = ((rtb_Switch1_e > rtb_Sum11) && (rtb_Switch1_e <
        ((rtb_Switch1_j - HeOFCR_t_ExecRate) + rtb_Switch1_k)));

    /* End of Outputs for SubSystem: '<S155>/OpenInterval1' */

    /* Outputs for Atomic SubSystem: '<S206>/Protected Division' */
    /* Switch: '<S211>/Switch1' incorporates:
     *  Constant: '<S211>/Constant Value'
     *  Constant: '<S211>/Constant Value2'
     *  Constant: '<S211>/Constant Value3'
     *  Logic: '<S211>/AND'
     *  RelationalOperator: '<S211>/Greater Than or Equal '
     *  RelationalOperator: '<S211>/Greater Than or Equal 1'
     *  RelationalOperator: '<S211>/Not Equal'
     *  Switch: '<S211>/Switch2'
     *  Switch: '<S211>/Switch3'
     */
    if ((rtb_Switch1_l != 0.0F) && (OFCR_ac_ConstB.NotEqual1_g))
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S198>/Calib'
         *  Constant: '<S206>/Constant Value'
         *  Product: '<S211>/Division'
         *  Selector: '<S161>/Selector'
         */
        rtb_Switch1_l = KaOFCR_k_CPIMTestColor[(VeOFCR_k_ChrgSysFault_Reason)] /
            10.0F;
    }
    else if (rtb_Switch1_l > 0.0F)
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/MAXFLOAT'
         *  Switch: '<S211>/Switch2'
         */
        rtb_Switch1_l = 3.402823466E+38F;
    }
    else if (rtb_Switch1_l < 0.0F)
    {
        /* Switch: '<S211>/Switch3' incorporates:
         *  Constant: '<S211>/MINFLOAT'
         *  Switch: '<S211>/Switch1'
         *  Switch: '<S211>/Switch2'
         */
        rtb_Switch1_l = (-3.402823466E+38F);
    }
    else
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value4'
         *  Switch: '<S211>/Switch2'
         *  Switch: '<S211>/Switch3'
         */
        rtb_Switch1_l = 0.0F;
    }

    /* End of Switch: '<S211>/Switch1' */
    /* End of Outputs for SubSystem: '<S206>/Protected Division' */

    /* Rounding: '<S206>/Rounding1' incorporates:
     *  Constant: '<S206>/Constant Value1'
     *  Product: '<S206>/Product'
     *  Rounding: '<S206>/Rounding'
     *  Sum: '<S206>/Sum1'
     */
    VeOFCR_k_NumS5 = roundf((rtb_Switch1_l - floorf(rtb_Switch1_l)) * 10.0F);

    /* Switch: '<S225>/Switch2' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S177>/Constant Value2'
     *  Product: '<S177>/Product4'
     */
    rtb_Switch1_k = KeOFCR_t_OFFTime * 4.0F;

    /* Outputs for Atomic SubSystem: '<S155>/OpenInterval2' */
    /* Logic: '<S174>/Logical Operator' incorporates:
     *  Constant: '<S163>/Calib'
     *  Constant: '<S170>/Calib'
     *  Constant: '<S177>/Constant Value4'
     *  Product: '<S177>/Product7'
     *  RelationalOperator: '<S174>/Relatonal Operator'
     *  RelationalOperator: '<S174>/Relatonal Operator1'
     *  Sum: '<S172>/Sum15'
     *  Sum: '<S172>/Sum16'
     */
    VeOFCR_b_S5Condition = ((rtb_Switch1_e > ((rtb_Switch1_j + rtb_Switch1_k) -
        HeOFCR_t_ExecRate)) && (rtb_Switch1_e < (((5.0F * KeOFCR_t_ONTime) -
        HeOFCR_t_ExecRate) + rtb_Switch1_k)));

    /* End of Outputs for SubSystem: '<S155>/OpenInterval2' */

    /* Switch: '<S168>/Switch1' incorporates:
     *  Switch: '<S168>/Switch2'
     *  Switch: '<S168>/Switch3'
     *  Switch: '<S168>/Switch4'
     *  Switch: '<S168>/Switch5'
     */
    if (VeOFCR_b_S1Condition)
    {
        /* Switch: '<S225>/Switch2' */
        rtb_Switch1_k = VeOFCR_k_NumS1;
    }
    else if (VeOFCR_b_S2Condition)
    {
        /* Switch: '<S168>/Switch2' incorporates:
         *  Switch: '<S225>/Switch2'
         */
        rtb_Switch1_k = VeOFCR_k_NumS2;
    }
    else if (VeOFCR_b_S3Condition)
    {
        /* Switch: '<S168>/Switch3' incorporates:
         *  Switch: '<S168>/Switch2'
         *  Switch: '<S225>/Switch2'
         */
        rtb_Switch1_k = VeOFCR_k_NumS3;
    }
    else if (VeOFCR_b_S4Condition)
    {
        /* Switch: '<S168>/Switch4' incorporates:
         *  Switch: '<S168>/Switch2'
         *  Switch: '<S168>/Switch3'
         *  Switch: '<S225>/Switch2'
         */
        rtb_Switch1_k = VeOFCR_k_NumS4;
    }
    else if (VeOFCR_b_S5Condition)
    {
        /* Switch: '<S168>/Switch5' incorporates:
         *  Switch: '<S168>/Switch2'
         *  Switch: '<S168>/Switch3'
         *  Switch: '<S168>/Switch4'
         *  Switch: '<S225>/Switch2'
         */
        rtb_Switch1_k = VeOFCR_k_NumS5;
    }
    else
    {
        /* Switch: '<S225>/Switch2' incorporates:
         *  Constant: '<S155>/Constant Value6'
         *  Switch: '<S168>/Switch2'
         *  Switch: '<S168>/Switch3'
         *  Switch: '<S168>/Switch4'
         *  Switch: '<S168>/Switch5'
         */
        rtb_Switch1_k = 3.0F;
    }

    /* End of Switch: '<S168>/Switch1' */

    /* If: '<S155>/If' */
    if (rtb_Switch1_k == 2.0F)
    {
        /* Outputs for IfAction SubSystem: '<S155>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S166>/Action Port'
         */
        /* Merge: '<S155>/Merge' incorporates:
         *  Constant: '<S166>/TRUE Constant'
         *  SignalConversion generated from: '<S166>/Red'
         */
        VeOFCR_b_TestRed = true;

        /* Merge: '<S155>/Merge1' incorporates:
         *  Constant: '<S166>/FALSE Constant1'
         *  SignalConversion generated from: '<S166>/Green'
         */
        VeOFCR_b_TestGreen = false;

        /* Merge: '<S155>/Merge2' incorporates:
         *  Constant: '<S166>/FALSE Constant2'
         *  SignalConversion generated from: '<S166>/Blue'
         */
        VeOFCR_b_TestBlue = false;

        /* End of Outputs for SubSystem: '<S155>/If Action Subsystem2' */
    }
    else if (rtb_Switch1_k == 1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S155>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S165>/Action Port'
         */
        OFCR_ac_IfActionSubsystem4((&(VeOFCR_b_TestRed)), (&(VeOFCR_b_TestGreen)),
            (&(VeOFCR_b_TestBlue)));

        /* End of Outputs for SubSystem: '<S155>/If Action Subsystem1' */
    }
    else if (rtb_Switch1_k == 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S155>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S167>/Action Port'
         */
        /* Merge: '<S155>/Merge' incorporates:
         *  Constant: '<S167>/FALSE Constant1'
         *  SignalConversion generated from: '<S167>/Red'
         */
        VeOFCR_b_TestRed = false;

        /* Merge: '<S155>/Merge1' incorporates:
         *  Constant: '<S167>/FALSE Constant2'
         *  SignalConversion generated from: '<S167>/Green'
         */
        VeOFCR_b_TestGreen = false;

        /* Merge: '<S155>/Merge2' incorporates:
         *  Constant: '<S167>/TRUE Constant'
         *  SignalConversion generated from: '<S167>/Blue'
         */
        VeOFCR_b_TestBlue = true;

        /* End of Outputs for SubSystem: '<S155>/If Action Subsystem3' */
    }
    else
    {
        if (rtb_Switch1_k == 3.0F)
        {
            /* Outputs for IfAction SubSystem: '<S155>/If Action Subsystem' incorporates:
             *  ActionPort: '<S164>/Action Port'
             */
            OFCR_ac_IfActionSubsystem_o((&(VeOFCR_b_TestRed)),
                (&(VeOFCR_b_TestGreen)), (&(VeOFCR_b_TestBlue)));

            /* End of Outputs for SubSystem: '<S155>/If Action Subsystem' */
        }
    }

    /* End of If: '<S155>/If' */

    /* If: '<S71>/If' incorporates:
     *  Logic: '<S71>/Logical1'
     *  Logic: '<S71>/Logical10'
     *  Logic: '<S71>/Logical11'
     *  Logic: '<S71>/Logical12'
     *  Logic: '<S71>/Logical5'
     *  Logic: '<S71>/Logical6'
     *  Logic: '<S71>/Logical7'
     */
    if (((VeOFCR_b_CPIM_ChrgSts_tmp && rtb_Logical1_i) || (VeOFCR_b_CPIM_Flt)) ||
        (VeOFCR_b_DriveReady))
    {
        /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem' incorporates:
         *  ActionPort: '<S74>/Action Port'
         */
        OFCR_ac_IfActionSubsystem_o(&OFCR_ac_B.Merge, &OFCR_ac_B.Merge1,
            &OFCR_ac_B.Merge3);

        /* End of Outputs for SubSystem: '<S71>/If Action Subsystem' */
    }
    else if (VeOFCR_b_FirstPlugIn)
    {
        /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S75>/Action Port'
         */
        /* Chart: '<S75>/BulbCheck' incorporates:
         *  Constant: '<S159>/Calib'
         */
        /* Gateway: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action
           Subsystem1/BulbCheck */
        /* During: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action
           Subsystem1/BulbCheck */
        if (((uint32)OFCR_ac_DW.is_active_c1_OFCR_ac) == 0U)
        {
            /* Entry: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action
               Subsystem1/BulbCheck */
            OFCR_ac_DW.is_active_c1_OFCR_ac = 1U;

            /* Entry Internal: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_1LED_Logic/If Action
               Subsystem1/BulbCheck */
            /* Transition: '<S82>:33' */
            OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Off_j;

            /* Entry 'Off': '<S82>:48' */
            OFCR_ac_B.VeOFCR_b_SetColorRed = false;
            OFCR_ac_B.VeOFCR_b_SetColorGreen = false;
            OFCR_ac_B.VeOFCR_b_SetColorBlue = false;
            OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
        }
        else
        {
            guard1 = false;
            switch (OFCR_ac_DW.is_c1_OFCR_ac)
            {
              case OFCR_ac_IN_Blue:
                /* During 'Blue': '<S82>:77' */
                if (rtb_AND_hm)
                {
                    /* Transition: '<S82>:143' */
                    /* Transition: '<S82>:145' */
                    guard1 = true;
                }
                else if (OFCR_ac_B.VeOFCR_t_StateColorTimer >=
                         (KeOFCR_t_BulbCheckSt - HeOFCR_t_ExecRate))
                {
                    /* Transition: '<S82>:111' */
                    guard1 = true;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_StateColorTimer += HeOFCR_t_ExecRate;
                }
                break;

              case OFCR_ac_IN_Green:
                /* During 'Green': '<S82>:75' */
                if (rtb_AND_hm)
                {
                    /* Transition: '<S82>:144' */
                    /* Transition: '<S82>:145' */
                    OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Off_j;

                    /* Entry 'Off': '<S82>:48' */
                    OFCR_ac_B.VeOFCR_b_SetColorRed = false;
                    OFCR_ac_B.VeOFCR_b_SetColorGreen = false;
                    OFCR_ac_B.VeOFCR_b_SetColorBlue = false;
                    OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
                }
                else if (OFCR_ac_B.VeOFCR_t_StateColorTimer >=
                         (KeOFCR_t_BulbCheckSt - HeOFCR_t_ExecRate))
                {
                    /* Transition: '<S82>:109' */
                    OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Blue;

                    /* Entry 'Blue': '<S82>:77' */
                    OFCR_ac_B.VeOFCR_b_SetColorRed = false;
                    OFCR_ac_B.VeOFCR_b_SetColorGreen = false;
                    OFCR_ac_B.VeOFCR_b_SetColorBlue = true;
                    OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_StateColorTimer += HeOFCR_t_ExecRate;
                }
                break;

              case OFCR_ac_IN_Off_j:
                /* During 'Off': '<S82>:48' */
                if (rtb_AND_hm)
                {
                    /* Transition: '<S82>:146' */
                    OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Off_j;

                    /* Entry 'Off': '<S82>:48' */
                    OFCR_ac_B.VeOFCR_b_SetColorRed = false;
                    OFCR_ac_B.VeOFCR_b_SetColorGreen = false;
                    OFCR_ac_B.VeOFCR_b_SetColorBlue = false;
                    OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
                }
                else if ((VeOFCR_b_FirstPlugIn) &&
                         (OFCR_ac_B.VeOFCR_t_StateColorTimer >=
                          (KeOFCR_t_BulbCheckSt - HeOFCR_t_ExecRate)))
                {
                    /* Transition: '<S82>:110' */
                    OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Red;

                    /* Entry 'Red': '<S82>:1' */
                    OFCR_ac_B.VeOFCR_b_SetColorRed = true;
                    OFCR_ac_B.VeOFCR_b_SetColorGreen = false;
                    OFCR_ac_B.VeOFCR_b_SetColorBlue = false;
                    OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_StateColorTimer += HeOFCR_t_ExecRate;
                }
                break;

              default:
                /* During 'Red': '<S82>:1' */
                if (rtb_AND_hm)
                {
                    /* Transition: '<S82>:142' */
                    /* Transition: '<S82>:145' */
                    OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Off_j;

                    /* Entry 'Off': '<S82>:48' */
                    OFCR_ac_B.VeOFCR_b_SetColorRed = false;
                    OFCR_ac_B.VeOFCR_b_SetColorGreen = false;
                    OFCR_ac_B.VeOFCR_b_SetColorBlue = false;
                    OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
                }
                else if (OFCR_ac_B.VeOFCR_t_StateColorTimer >=
                         (KeOFCR_t_BulbCheckSt - HeOFCR_t_ExecRate))
                {
                    /* Transition: '<S82>:108' */
                    OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Green;

                    /* Entry 'Green': '<S82>:75' */
                    OFCR_ac_B.VeOFCR_b_SetColorRed = false;
                    OFCR_ac_B.VeOFCR_b_SetColorGreen = true;
                    OFCR_ac_B.VeOFCR_b_SetColorBlue = false;
                    OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
                }
                else
                {
                    OFCR_ac_B.VeOFCR_t_StateColorTimer += HeOFCR_t_ExecRate;
                }
                break;
            }

            if (guard1)
            {
                OFCR_ac_DW.is_c1_OFCR_ac = OFCR_ac_IN_Off_j;

                /* Entry 'Off': '<S82>:48' */
                OFCR_ac_B.VeOFCR_b_SetColorRed = false;
                OFCR_ac_B.VeOFCR_b_SetColorGreen = false;
                OFCR_ac_B.VeOFCR_b_SetColorBlue = false;
                OFCR_ac_B.VeOFCR_t_StateColorTimer = 0.0F;
            }
        }

        /* End of Chart: '<S75>/BulbCheck' */

        /* Merge: '<S71>/Merge3' incorporates:
         *  SignalConversion generated from: '<S75>/Blue'
         */
        OFCR_ac_B.Merge3 = OFCR_ac_B.VeOFCR_b_SetColorBlue;

        /* Merge: '<S71>/Merge1' incorporates:
         *  SignalConversion generated from: '<S75>/Green'
         */
        OFCR_ac_B.Merge1 = OFCR_ac_B.VeOFCR_b_SetColorGreen;

        /* Merge: '<S71>/Merge' incorporates:
         *  SignalConversion generated from: '<S75>/Red'
         */
        OFCR_ac_B.Merge = OFCR_ac_B.VeOFCR_b_SetColorRed;

        /* End of Outputs for SubSystem: '<S71>/If Action Subsystem1' */
    }
    else if ((VeOFCR_b_ChrgSysFault) || ((!VeOFCR_b_EnableDischarge) &&
              (VeOFCR_b_SecureConnV2L)))
    {
        /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        /* Switch: '<S76>/Switch' incorporates:
         *  Switch: '<S76>/Switch1'
         *  Switch: '<S76>/Switch2'
         */
        if (OFCR_ac_B.VeOFCR_b_TriggerBulbs)
        {
            /* Merge: '<S71>/Merge' */
            OFCR_ac_B.Merge = VeOFCR_b_TestRed;

            /* Merge: '<S71>/Merge1' */
            OFCR_ac_B.Merge1 = VeOFCR_b_TestGreen;

            /* Merge: '<S71>/Merge3' */
            OFCR_ac_B.Merge3 = VeOFCR_b_TestBlue;
        }
        else
        {
            /* Merge: '<S71>/Merge' incorporates:
             *  Constant: '<S76>/TRUE Constant'
             */
            OFCR_ac_B.Merge = true;

            /* Merge: '<S71>/Merge1' incorporates:
             *  Constant: '<S76>/FALSE Constant1'
             */
            OFCR_ac_B.Merge1 = false;

            /* Merge: '<S71>/Merge3' incorporates:
             *  Constant: '<S76>/FALSE Constant2'
             */
            OFCR_ac_B.Merge3 = false;
        }

        /* End of Switch: '<S76>/Switch' */
        /* End of Outputs for SubSystem: '<S71>/If Action Subsystem2' */
    }
    else if (rtb_Comparison6 || rtb_Comparison1)
    {
        /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S77>/Action Port'
         */
        /* Merge: '<S71>/Merge' incorporates:
         *  Constant: '<S77>/FALSE Constant'
         *  SignalConversion generated from: '<S77>/Red'
         */
        OFCR_ac_B.Merge = false;

        /* Logic: '<S77>/Logical6' */
        rtb_Comparison4_n = (rtb_Comparison6 || rtb_Comparison1);

        /* Outputs for Atomic SubSystem: '<S77>/EdgeRising' */
        /* Logic: '<S83>/AND' incorporates:
         *  Logic: '<S83>/OR1'
         *  UnitDelay: '<S83>/Unit Delay'
         */
        rtb_Comparison1 = (rtb_Comparison4_n && (!OFCR_ac_DW.UnitDelay_DSTATE_b));

        /* Update for UnitDelay: '<S83>/Unit Delay' */
        OFCR_ac_DW.UnitDelay_DSTATE_b = rtb_Comparison4_n;

        /* End of Outputs for SubSystem: '<S77>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S77>/PositiveSquarewave' */
        /* Switch: '<S86>/Switch1' incorporates:
         *  Constant: '<S84>/Calib'
         *  Logic: '<S86>/Logical1'
         *  Sum: '<S86>/Subtraction'
         *  UnitDelay: '<S86>/Unit Delay'
         *  UnitDelay: '<S86>/Unit Delay1'
         */
        if (rtb_Comparison1 || (OFCR_ac_DW.UnitDelay1_DSTATE_e))
        {
            OFCR_ac_DW.UnitDelay_DSTATE_p = HeOFCR_t_ExecRate;
        }
        else
        {
            OFCR_ac_DW.UnitDelay_DSTATE_p += HeOFCR_t_ExecRate;
        }

        /* End of Switch: '<S86>/Switch1' */

        /* Merge: '<S71>/Merge1' incorporates:
         *  Constant: '<S85>/Calib'
         *  Constant: '<S86>/Constant Value'
         *  Product: '<S86>/Product'
         *  RelationalOperator: '<S86>/Comparison6'
         *  UnitDelay: '<S86>/Unit Delay'
         */
        OFCR_ac_B.Merge1 = (OFCR_ac_DW.UnitDelay_DSTATE_p <=
                            (KeOFCR_t_SqWaveTimePeriod * 0.5F));

        /* Update for UnitDelay: '<S86>/Unit Delay1' incorporates:
         *  Constant: '<S84>/Calib'
         *  Constant: '<S85>/Calib'
         *  RelationalOperator: '<S86>/Comparison5'
         *  Sum: '<S86>/Sum1'
         *  UnitDelay: '<S86>/Unit Delay'
         */
        OFCR_ac_DW.UnitDelay1_DSTATE_e = (OFCR_ac_DW.UnitDelay_DSTATE_p >=
            (KeOFCR_t_SqWaveTimePeriod - HeOFCR_t_ExecRate));

        /* End of Outputs for SubSystem: '<S77>/PositiveSquarewave' */

        /* Merge: '<S71>/Merge3' incorporates:
         *  Constant: '<S77>/FALSE Constant1'
         *  SignalConversion generated from: '<S77>/Blue'
         */
        OFCR_ac_B.Merge3 = false;

        /* End of Outputs for SubSystem: '<S71>/If Action Subsystem3' */
    }
    else if (rtb_UnitDelay_ie)
    {
        /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        OFCR_ac_IfActionSubsystem4(&OFCR_ac_B.Merge, &OFCR_ac_B.Merge1,
            &OFCR_ac_B.Merge3);

        /* End of Outputs for SubSystem: '<S71>/If Action Subsystem4' */
    }
    else if (VeOFCR_b_WaitingToChrg)
    {
        /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S79>/Action Port'
         */
        /* Merge: '<S71>/Merge' incorporates:
         *  Constant: '<S79>/FALSE Constant1'
         *  SignalConversion generated from: '<S79>/Red'
         */
        OFCR_ac_B.Merge = false;

        /* Merge: '<S71>/Merge1' incorporates:
         *  Constant: '<S79>/FALSE Constant2'
         *  SignalConversion generated from: '<S79>/Green'
         */
        OFCR_ac_B.Merge1 = false;

        /* Outputs for Atomic SubSystem: '<S79>/EdgeRising' */
        /* Logic: '<S87>/AND' incorporates:
         *  Logic: '<S87>/OR1'
         *  UnitDelay: '<S87>/Unit Delay'
         */
        rtb_Comparison1 = (rtb_Comparison4_n && (!OFCR_ac_DW.UnitDelay_DSTATE_go));

        /* Update for UnitDelay: '<S87>/Unit Delay' */
        OFCR_ac_DW.UnitDelay_DSTATE_go = rtb_Comparison4_n;

        /* End of Outputs for SubSystem: '<S79>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S79>/PositiveSquarewave' */
        /* Switch: '<S90>/Switch1' incorporates:
         *  Constant: '<S88>/Calib'
         *  Logic: '<S90>/Logical1'
         *  Sum: '<S90>/Subtraction'
         *  UnitDelay: '<S90>/Unit Delay'
         *  UnitDelay: '<S90>/Unit Delay1'
         */
        if (rtb_Comparison1 || (OFCR_ac_DW.UnitDelay1_DSTATE_fb))
        {
            OFCR_ac_DW.UnitDelay_DSTATE_h = HeOFCR_t_ExecRate;
        }
        else
        {
            OFCR_ac_DW.UnitDelay_DSTATE_h += HeOFCR_t_ExecRate;
        }

        /* End of Switch: '<S90>/Switch1' */

        /* Merge: '<S71>/Merge3' incorporates:
         *  Constant: '<S89>/Calib'
         *  Constant: '<S90>/Constant Value'
         *  Product: '<S90>/Product'
         *  RelationalOperator: '<S90>/Comparison6'
         *  UnitDelay: '<S90>/Unit Delay'
         */
        OFCR_ac_B.Merge3 = (OFCR_ac_DW.UnitDelay_DSTATE_h <=
                            (KeOFCR_t_SqWaveTimePeriod * 0.5F));

        /* Update for UnitDelay: '<S90>/Unit Delay1' incorporates:
         *  Constant: '<S88>/Calib'
         *  Constant: '<S89>/Calib'
         *  RelationalOperator: '<S90>/Comparison5'
         *  Sum: '<S90>/Sum1'
         *  UnitDelay: '<S90>/Unit Delay'
         */
        OFCR_ac_DW.UnitDelay1_DSTATE_fb = (OFCR_ac_DW.UnitDelay_DSTATE_h >=
            (KeOFCR_t_SqWaveTimePeriod - HeOFCR_t_ExecRate));

        /* End of Outputs for SubSystem: '<S79>/PositiveSquarewave' */
        /* End of Outputs for SubSystem: '<S71>/If Action Subsystem5' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S80>/Action Port'
         */
        /* Merge: '<S71>/Merge' incorporates:
         *  Constant: '<S80>/FALSE Constant3'
         *  SignalConversion generated from: '<S80>/Red'
         */
        OFCR_ac_B.Merge = false;

        /* Merge: '<S71>/Merge1' incorporates:
         *  Constant: '<S80>/FALSE Constant1'
         *  SignalConversion generated from: '<S80>/Green'
         */
        OFCR_ac_B.Merge1 = false;

        /* Merge: '<S71>/Merge3' incorporates:
         *  Constant: '<S80>/FALSE Constant2'
         *  SignalConversion generated from: '<S80>/Blue'
         */
        OFCR_ac_B.Merge3 = false;

        /* End of Outputs for SubSystem: '<S71>/If Action Subsystem6' */
    }

    /* End of If: '<S71>/If' */

    /* If: '<S72>/If' incorporates:
     *  Chart: '<S94>/Stateflow Chart'
     *  Constant: '<S191>/Constant'
     *  Constant: '<S99>/Calib'
     *  Inport: '<Root>/VeCITR_b_SOC_Max_Lev'
     *  Logic: '<S72>/Logical5'
     *  Logic: '<S72>/Logical6'
     *  Logic: '<S72>/Logical7'
     *  Logic: '<S72>/Logical8'
     *  RelationalOperator: '<S158>/Comparison2'
     *  Switch: '<S5>/Switch28'
     *  UnitDelay: '<S72>/Unit Delay2'
     */
    if ((rtb_Logical1_i || (OFCR_ac_DW.UnitDelay2_DSTATE_k)) ||
            (VeOFCR_b_DriveReady))
    {
        /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        OFCR_ac_IfActionSubsystem_d((&(VeOFCR_e_Ind1_Cmd)), (&(VeOFCR_e_Ind2_Cmd)),
            (&(VeOFCR_e_Ind3_Cmd)), (&(VeOFCR_e_Ind4_Cmd)), (&(VeOFCR_e_Ind5_Cmd)),
            (&(VeOFCR_e_BlinkRate_Cmd)), (&(VeOFCR_e_ColorInd_Cmd)));

        /* End of Outputs for SubSystem: '<S72>/If Action Subsystem' */
    }
    else if (VeOFCR_b_FirstPlugIn)
    {
        /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* Merge: '<S72>/Merge' incorporates:
         *  Constant: '<S108>/Constant'
         *  SignalConversion generated from: '<S92>/Ind1'
         */
        VeOFCR_e_Ind1_Cmd = CeCITR_e_CPIM_Ind_Blink;

        /* Merge: '<S72>/Merge2' incorporates:
         *  Constant: '<S109>/Constant'
         *  SignalConversion generated from: '<S92>/Ind2'
         */
        VeOFCR_e_Ind2_Cmd = CeCITR_e_CPIM_Ind_Blink;

        /* Merge: '<S72>/Merge4' incorporates:
         *  Constant: '<S110>/Constant'
         *  SignalConversion generated from: '<S92>/Ind3'
         */
        VeOFCR_e_Ind3_Cmd = CeCITR_e_CPIM_Ind_Blink;

        /* Merge: '<S72>/Merge5' incorporates:
         *  Constant: '<S111>/Constant'
         *  SignalConversion generated from: '<S92>/Ind4'
         */
        VeOFCR_e_Ind4_Cmd = CeCITR_e_CPIM_Ind_Blink;

        /* Merge: '<S72>/Merge1' incorporates:
         *  Constant: '<S112>/Constant'
         *  SignalConversion generated from: '<S92>/Ind5'
         */
        VeOFCR_e_Ind5_Cmd = CeCITR_e_CPIM_Ind_Blink;

        /* Merge: '<S72>/Merge3' incorporates:
         *  Constant: '<S113>/Constant'
         *  SignalConversion generated from: '<S92>/BlinkRate'
         */
        VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate3;

        /* Merge: '<S72>/Merge6' incorporates:
         *  Constant: '<S114>/Constant'
         *  SignalConversion generated from: '<S92>/ColorInd'
         */
        VeOFCR_e_ColorInd_Cmd = CeCITR_e_CPIM_Green;

        /* End of Outputs for SubSystem: '<S72>/If Action Subsystem1' */
    }
    else if (VeOFCR_b_ChrgSysFault)
    {
        /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S96>/Action Port'
         */
        /* Merge: '<S72>/Merge' incorporates:
         *  Constant: '<S129>/Constant'
         *  SignalConversion generated from: '<S96>/Ind1'
         */
        VeOFCR_e_Ind1_Cmd = CeCITR_e_CPIM_Ind_Blink;

        /* Merge: '<S72>/Merge2' incorporates:
         *  Constant: '<S130>/Constant'
         *  SignalConversion generated from: '<S96>/Ind2'
         */
        VeOFCR_e_Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;

        /* Merge: '<S72>/Merge4' incorporates:
         *  Constant: '<S131>/Constant'
         *  SignalConversion generated from: '<S96>/Ind3'
         */
        VeOFCR_e_Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;

        /* Merge: '<S72>/Merge5' incorporates:
         *  Constant: '<S132>/Constant'
         *  SignalConversion generated from: '<S96>/Ind4'
         */
        VeOFCR_e_Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;

        /* Merge: '<S72>/Merge1' incorporates:
         *  Constant: '<S133>/Constant'
         *  SignalConversion generated from: '<S96>/Ind5'
         */
        VeOFCR_e_Ind5_Cmd = CeCITR_e_CPIM_Ind_Blink;

        /* Merge: '<S72>/Merge3' incorporates:
         *  Constant: '<S134>/Constant'
         *  SignalConversion generated from: '<S96>/BlinkRate'
         */
        VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate3;

        /* Merge: '<S72>/Merge6' incorporates:
         *  Constant: '<S135>/Constant'
         *  SignalConversion generated from: '<S96>/ColorInd'
         */
        VeOFCR_e_ColorInd_Cmd = CeCITR_e_CPIM_Red;

        /* End of Outputs for SubSystem: '<S72>/If Action Subsystem7' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S94>/Action Port'
         */
        if (rtb_Comparison6)
        {
            /* Merge: '<S72>/Merge' incorporates:
             *  Chart: '<S94>/Stateflow Chart'
             */
            /* Gateway: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
               Subsystem3/Stateflow
               Chart */
            /* During: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
               Subsystem3/Stateflow
               Chart */
            /* Entry Internal: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
               Subsystem3/Stateflow
               Chart */
            /* Transition: '<S125>:1' */
            /* Transition: '<S125>:4' */
            VeOFCR_e_Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;

            /* Merge: '<S72>/Merge2' incorporates:
             *  Chart: '<S94>/Stateflow Chart'
             */
            VeOFCR_e_Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;

            /* Merge: '<S72>/Merge4' incorporates:
             *  Chart: '<S94>/Stateflow Chart'
             */
            VeOFCR_e_Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;

            /* Merge: '<S72>/Merge5' incorporates:
             *  Chart: '<S94>/Stateflow Chart'
             */
            VeOFCR_e_Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;

            /* Merge: '<S72>/Merge1' incorporates:
             *  Chart: '<S94>/Stateflow Chart'
             */
            VeOFCR_e_Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;

            /* Merge: '<S72>/Merge3' incorporates:
             *  Chart: '<S94>/Stateflow Chart'
             */
            VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_NoBlink;

            /* Chart: '<S94>/Stateflow Chart' */
            if (VeOFCR_Pct_HVBatSOC_HCP >= 0.0F)
            {
                /* Merge: '<S72>/Merge' */
                /* Transition: '<S125>:6' */
                /* Transition: '<S125>:15' */
                VeOFCR_e_Ind1_Cmd = CeCITR_e_CPIM_Ind_Blink;

                /* Merge: '<S72>/Merge3' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate3;

                /* Transition: '<S125>:66' */
            }
            else
            {
                /* Transition: '<S125>:9' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 10.0F)
            {
                /* Merge: '<S72>/Merge3' */
                /* Transition: '<S125>:11' */
                /* Transition: '<S125>:13' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate1;

                /* Transition: '<S125>:68' */
            }
            else
            {
                /* Transition: '<S125>:14' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 20.0F)
            {
                /* Merge: '<S72>/Merge' */
                /* Transition: '<S125>:17' */
                /* Transition: '<S125>:19' */
                VeOFCR_e_Ind1_Cmd = CeCITR_e_CPIM_Ind_On;

                /* Merge: '<S72>/Merge2' */
                VeOFCR_e_Ind2_Cmd = CeCITR_e_CPIM_Ind_Blink;

                /* Merge: '<S72>/Merge3' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate3;

                /* Transition: '<S125>:70' */
            }
            else
            {
                /* Transition: '<S125>:20' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 30.0F)
            {
                /* Merge: '<S72>/Merge3' */
                /* Transition: '<S125>:22' */
                /* Transition: '<S125>:24' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate1;

                /* Transition: '<S125>:72' */
            }
            else
            {
                /* Transition: '<S125>:25' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 40.0F)
            {
                /* Merge: '<S72>/Merge2' */
                /* Transition: '<S125>:27' */
                /* Transition: '<S125>:29' */
                VeOFCR_e_Ind2_Cmd = CeCITR_e_CPIM_Ind_On;

                /* Merge: '<S72>/Merge4' */
                VeOFCR_e_Ind3_Cmd = CeCITR_e_CPIM_Ind_Blink;

                /* Merge: '<S72>/Merge3' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate3;

                /* Transition: '<S125>:74' */
            }
            else
            {
                /* Transition: '<S125>:30' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 50.0F)
            {
                /* Merge: '<S72>/Merge3' */
                /* Transition: '<S125>:33' */
                /* Transition: '<S125>:34' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate1;

                /* Transition: '<S125>:76' */
            }
            else
            {
                /* Transition: '<S125>:35' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 60.0F)
            {
                /* Merge: '<S72>/Merge4' */
                /* Transition: '<S125>:37' */
                /* Transition: '<S125>:39' */
                VeOFCR_e_Ind3_Cmd = CeCITR_e_CPIM_Ind_On;

                /* Merge: '<S72>/Merge5' */
                VeOFCR_e_Ind4_Cmd = CeCITR_e_CPIM_Ind_Blink;

                /* Merge: '<S72>/Merge3' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate3;

                /* Transition: '<S125>:78' */
            }
            else
            {
                /* Transition: '<S125>:40' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 70.0F)
            {
                /* Merge: '<S72>/Merge3' */
                /* Transition: '<S125>:43' */
                /* Transition: '<S125>:44' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate1;

                /* Transition: '<S125>:80' */
            }
            else
            {
                /* Transition: '<S125>:45' */
            }

            if (VeOFCR_Pct_HVBatSOC_HCP >= 80.0F)
            {
                /* Merge: '<S72>/Merge5' */
                /* Transition: '<S125>:47' */
                /* Transition: '<S125>:49' */
                VeOFCR_e_Ind4_Cmd = CeCITR_e_CPIM_Ind_On;

                /* Merge: '<S72>/Merge1' */
                VeOFCR_e_Ind5_Cmd = CeCITR_e_CPIM_Ind_Blink;

                /* Merge: '<S72>/Merge3' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate3;

                /* Transition: '<S125>:82' */
            }
            else
            {
                /* Transition: '<S125>:50' */
            }

            if ((VeOFCR_Pct_HVBatSOC_HCP >= 90.0F) && (VeOFCR_Pct_HVBatSOC_HCP <
                 100.0F))
            {
                /* Merge: '<S72>/Merge3' */
                /* Transition: '<S125>:52' */
                /* Transition: '<S125>:84' */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_BlinkRate1;

                /* Transition: '<S125>:85' */
            }
            else
            {
                /* Transition: '<S125>:55' */
            }

            /* Merge: '<S72>/Merge6' incorporates:
             *  Constant: '<S124>/Constant'
             *  SignalConversion generated from: '<S94>/ColorInd'
             */
            VeOFCR_e_ColorInd_Cmd = CeCITR_e_CPIM_Green;
        }
        else if ((VeOFCR_b_CPIM_ChrgSts_tmp_0 && (KeOFCR_b_AllowStopDC)) &&
                 ((VeOFCR_b_NoSchEnbl) || (VeOFCR_e_ChargeType == CeOBCR_e_DC)))
        {
            /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S95>/Action Port'
             */
            /* Chart: '<S95>/Stateflow Chart' */
            /* Gateway: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
               Subsystem4/Stateflow
               Chart */
            /* During: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
               Subsystem4/Stateflow
               Chart */
            /* Entry Internal: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
               Subsystem4/Stateflow
               Chart */
            /* Transition: '<S128>:1' */
            /* Transition: '<S128>:4' */
            OFCR_ac_B.Ind1_Cmd_a = CeCITR_e_CPIM_Ind_Off;
            OFCR_ac_B.Ind2_Cmd_h = CeCITR_e_CPIM_Ind_Off;
            OFCR_ac_B.Ind3_Cmd_o = CeCITR_e_CPIM_Ind_Off;
            OFCR_ac_B.Ind4_Cmd_f = CeCITR_e_CPIM_Ind_Off;
            OFCR_ac_B.Ind5_Cmd_o = CeCITR_e_CPIM_Ind_Off;
            if (VeOFCR_Pct_HVBatSOC_HCP >= 20.0F)
            {
                /* Transition: '<S128>:6' */
                /* Transition: '<S128>:15' */
                OFCR_ac_B.Ind1_Cmd_a = CeCITR_e_CPIM_Ind_On;

                /* Transition: '<S128>:66' */
            }
            else
            {
                /* Transition: '<S128>:9' */
            }

            /* Transition: '<S128>:14' */
            if (VeOFCR_Pct_HVBatSOC_HCP >= 40.0F)
            {
                /* Transition: '<S128>:17' */
                /* Transition: '<S128>:19' */
                OFCR_ac_B.Ind2_Cmd_h = CeCITR_e_CPIM_Ind_On;

                /* Transition: '<S128>:70' */
            }
            else
            {
                /* Transition: '<S128>:20' */
            }

            /* Transition: '<S128>:25' */
            if (VeOFCR_Pct_HVBatSOC_HCP >= 60.0F)
            {
                /* Transition: '<S128>:27' */
                /* Transition: '<S128>:29' */
                OFCR_ac_B.Ind3_Cmd_o = CeCITR_e_CPIM_Ind_On;

                /* Transition: '<S128>:74' */
            }
            else
            {
                /* Transition: '<S128>:30' */
            }

            /* Transition: '<S128>:35' */
            if (VeOFCR_Pct_HVBatSOC_HCP >= 80.0F)
            {
                /* Transition: '<S128>:37' */
                /* Transition: '<S128>:39' */
                OFCR_ac_B.Ind4_Cmd_f = CeCITR_e_CPIM_Ind_On;

                /* Transition: '<S128>:78' */
            }
            else
            {
                /* Transition: '<S128>:40' */
            }

            /* Transition: '<S128>:45' */
            if (VeOFCR_Pct_HVBatSOC_HCP == 100.0F)
            {
                /* Transition: '<S128>:47' */
                /* Transition: '<S128>:49' */
                OFCR_ac_B.Ind5_Cmd_o = CeCITR_e_CPIM_Ind_On;

                /* Transition: '<S128>:82' */
            }
            else
            {
                /* Transition: '<S128>:50' */
            }

            /* End of Chart: '<S95>/Stateflow Chart' */

            /* Merge: '<S72>/Merge' incorporates:
             *  SignalConversion generated from: '<S95>/Ind1'
             */
            VeOFCR_e_Ind1_Cmd = OFCR_ac_B.Ind1_Cmd_a;

            /* Merge: '<S72>/Merge2' incorporates:
             *  SignalConversion generated from: '<S95>/Ind2'
             */
            VeOFCR_e_Ind2_Cmd = OFCR_ac_B.Ind2_Cmd_h;

            /* Merge: '<S72>/Merge4' incorporates:
             *  SignalConversion generated from: '<S95>/Ind3'
             */
            VeOFCR_e_Ind3_Cmd = OFCR_ac_B.Ind3_Cmd_o;

            /* Merge: '<S72>/Merge5' incorporates:
             *  SignalConversion generated from: '<S95>/Ind4'
             */
            VeOFCR_e_Ind4_Cmd = OFCR_ac_B.Ind4_Cmd_f;

            /* Merge: '<S72>/Merge1' incorporates:
             *  SignalConversion generated from: '<S95>/Ind5'
             */
            VeOFCR_e_Ind5_Cmd = OFCR_ac_B.Ind5_Cmd_o;

            /* Merge: '<S72>/Merge3' incorporates:
             *  Constant: '<S126>/Constant'
             *  SignalConversion generated from: '<S95>/BlinkRate'
             */
            VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_NoBlink;

            /* Merge: '<S72>/Merge6' incorporates:
             *  Constant: '<S127>/Constant'
             *  SignalConversion generated from: '<S95>/ColorInd'
             */
            VeOFCR_e_ColorInd_Cmd = CeCITR_e_CPIM_Green;

            /* End of Outputs for SubSystem: '<S72>/If Action Subsystem4' */
        }
        else if (rtb_UnitDelay_ie)
        {
            (void)Rte_Read_VeCITR_b_SOC_Max_Lev_Value(&tmpRead_6);

            /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S93>/Action Port'
             */
            /* Merge: '<S72>/Merge' incorporates:
             *  Constant: '<S115>/Constant'
             *  Inport: '<Root>/VeCITR_b_SOC_Max_Lev'
             *  SignalConversion generated from: '<S93>/Ind1'
             */
            VeOFCR_e_Ind1_Cmd = CeCITR_e_CPIM_Ind_On;

            /* Merge: '<S72>/Merge2' incorporates:
             *  Constant: '<S116>/Constant'
             *  SignalConversion generated from: '<S93>/Ind2'
             */
            VeOFCR_e_Ind2_Cmd = CeCITR_e_CPIM_Ind_On;

            /* Merge: '<S72>/Merge4' incorporates:
             *  Constant: '<S117>/Constant'
             *  SignalConversion generated from: '<S93>/Ind3'
             */
            VeOFCR_e_Ind3_Cmd = CeCITR_e_CPIM_Ind_On;

            /* Merge: '<S72>/Merge5' incorporates:
             *  Constant: '<S118>/Constant'
             *  SignalConversion generated from: '<S93>/Ind4'
             */
            VeOFCR_e_Ind4_Cmd = CeCITR_e_CPIM_Ind_On;

            /* Switch: '<S93>/Switch10' incorporates:
             *  Constant: '<S123>/Calib'
             *  Logic: '<S93>/Logical1'
             */
            if (tmpRead_6 || (HeOFCR_b_Ignore_SOC_Max_Lev))
            {
                /* Merge: '<S72>/Merge1' incorporates:
                 *  Constant: '<S121>/Constant'
                 */
                VeOFCR_e_Ind5_Cmd = CeCITR_e_CPIM_Ind_On;
            }
            else
            {
                /* Merge: '<S72>/Merge1' incorporates:
                 *  Constant: '<S122>/Constant'
                 */
                VeOFCR_e_Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
            }

            /* End of Switch: '<S93>/Switch10' */

            /* Merge: '<S72>/Merge3' incorporates:
             *  Constant: '<S119>/Constant'
             *  SignalConversion generated from: '<S93>/BlinkRate'
             */
            VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_NoBlink;

            /* Merge: '<S72>/Merge6' incorporates:
             *  Constant: '<S120>/Constant'
             *  SignalConversion generated from: '<S93>/ColorInd'
             */
            VeOFCR_e_ColorInd_Cmd = CeCITR_e_CPIM_Green;

            /* End of Outputs for SubSystem: '<S72>/If Action Subsystem2' */
        }
        else
        {
            /* Logic: '<S72>/Logical8' incorporates:
             *  Constant: '<S100>/Calib'
             *  Logic: '<S72>/Logical'
             *  Logic: '<S72>/Logical3'
             */
            rtb_Comparison4_n = (VeOFCR_b_CPIM_ChrgSts_tmp_0 ||
                                 ((VeOFCR_b_ChrgPortLock_BCI) &&
                                  (KeOFCR_b_AlwCPIMKnitRdrInUnlock)));
            if (rtb_Comparison4_n || (VeOFCR_b_SmartEVSE_Dtctd))
            {
                /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem8' incorporates:
                 *  ActionPort: '<S97>/Action Port'
                 */
                /* Chart: '<S97>/Stateflow Chart' incorporates:
                 *  Constant: '<S159>/Calib'
                 */
                /* Gateway: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
                   Subsystem8/Stateflow
                   Chart */
                /* During: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
                   Subsystem8/Stateflow
                   Chart */
                if (((uint32)OFCR_ac_DW.is_active_c2_OFCR_ac) == 0U)
                {
                    /* Entry: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
                       Subsystem8/Stateflow
                       Chart */
                    OFCR_ac_DW.is_active_c2_OFCR_ac = 1U;

                    /* Entry Internal: OFCR_MedTEH/OFCC/CPIM_LINInterface/CPIM_5LED_Logic/If Action
                       Subsystem8/Stateflow
                       Chart */
                    /* Transition: '<S138>:71' */
                    OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Off;

                    /* Entry 'Off': '<S138>:70' */
                    OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                    OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                    OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                    OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                    OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                    OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                }
                else
                {
                    guard1 = false;
                    switch (OFCR_ac_DW.is_c2_OFCR_ac)
                    {
                      case OFCR_ac_IN_Ind1_Blink:
                        /* During 'Ind1_Blink': '<S138>:72' */
                        if (rtb_AND_hm)
                        {
                            /* Transition: '<S138>:87' */
                            /* Transition: '<S138>:93' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Off;

                            /* Entry 'Off': '<S138>:70' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else if (OFCR_ac_B.VeOFCR_t_StateColorTimer1 >=
                                 (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                        {
                            /* Transition: '<S138>:75' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Ind2_Blink;

                            /* Entry 'Ind2_Blink': '<S138>:74' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_On;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else
                        {
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 +=
                                HeOFCR_t_ExecRate;
                        }
                        break;

                      case OFCR_ac_IN_Ind2_Blink:
                        /* During 'Ind2_Blink': '<S138>:74' */
                        if (rtb_AND_hm)
                        {
                            /* Transition: '<S138>:86' */
                            /* Transition: '<S138>:91' */
                            /* Transition: '<S138>:93' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Off;

                            /* Entry 'Off': '<S138>:70' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else if (OFCR_ac_B.VeOFCR_t_StateColorTimer1 >=
                                 (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                        {
                            /* Transition: '<S138>:77' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Ind3_Blink;

                            /* Entry 'Ind3_Blink': '<S138>:76' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_On;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else
                        {
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 +=
                                HeOFCR_t_ExecRate;
                        }
                        break;

                      case OFCR_ac_IN_Ind3_Blink:
                        /* During 'Ind3_Blink': '<S138>:76' */
                        if (rtb_AND_hm)
                        {
                            /* Transition: '<S138>:88' */
                            /* Transition: '<S138>:91' */
                            /* Transition: '<S138>:93' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Off;

                            /* Entry 'Off': '<S138>:70' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else if (OFCR_ac_B.VeOFCR_t_StateColorTimer1 >=
                                 (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                        {
                            /* Transition: '<S138>:79' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Ind4_Blink;

                            /* Entry 'Ind4_Blink': '<S138>:78' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_On;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else
                        {
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 +=
                                HeOFCR_t_ExecRate;
                        }
                        break;

                      case OFCR_ac_IN_Ind4_Blink:
                        /* During 'Ind4_Blink': '<S138>:78' */
                        if (rtb_AND_hm)
                        {
                            /* Transition: '<S138>:89' */
                            /* Transition: '<S138>:91' */
                            /* Transition: '<S138>:93' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Off;

                            /* Entry 'Off': '<S138>:70' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else if (OFCR_ac_B.VeOFCR_t_StateColorTimer1 >=
                                 (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                        {
                            /* Transition: '<S138>:81' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Ind5_Blink;

                            /* Entry 'Ind5_Blink': '<S138>:80' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_On;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else
                        {
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 +=
                                HeOFCR_t_ExecRate;
                        }
                        break;

                      case OFCR_ac_IN_Ind5_Blink:
                        /* During 'Ind5_Blink': '<S138>:80' */
                        if (rtb_AND_hm)
                        {
                            /* Transition: '<S138>:90' */
                            /* Transition: '<S138>:93' */
                            guard1 = true;
                        }
                        else if (OFCR_ac_B.VeOFCR_t_StateColorTimer1 >=
                                 (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate))
                        {
                            /* Transition: '<S138>:82' */
                            guard1 = true;
                        }
                        else
                        {
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 +=
                                HeOFCR_t_ExecRate;
                        }
                        break;

                      default:
                        /* During 'Off': '<S138>:70' */
                        if (rtb_AND_hm)
                        {
                            /* Transition: '<S138>:94' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Off;

                            /* Entry 'Off': '<S138>:70' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else if (rtb_Comparison4_n &&
                                 (OFCR_ac_B.VeOFCR_t_StateColorTimer1 >=
                                  (KeOFCR_t_FiveLED_KnghtRdr - HeOFCR_t_ExecRate)))
                        {
                            /* Transition: '<S138>:73' */
                            OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Ind1_Blink;

                            /* Entry 'Ind1_Blink': '<S138>:72' */
                            OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_On;
                            OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                        }
                        else
                        {
                            OFCR_ac_B.VeOFCR_t_StateColorTimer1 +=
                                HeOFCR_t_ExecRate;
                        }
                        break;
                    }

                    if (guard1)
                    {
                        OFCR_ac_DW.is_c2_OFCR_ac = OFCR_ac_IN_Off;

                        /* Entry 'Off': '<S138>:70' */
                        OFCR_ac_B.Ind1_Cmd = CeCITR_e_CPIM_Ind_Off;
                        OFCR_ac_B.Ind2_Cmd = CeCITR_e_CPIM_Ind_Off;
                        OFCR_ac_B.Ind3_Cmd = CeCITR_e_CPIM_Ind_Off;
                        OFCR_ac_B.Ind4_Cmd = CeCITR_e_CPIM_Ind_Off;
                        OFCR_ac_B.Ind5_Cmd = CeCITR_e_CPIM_Ind_Off;
                        OFCR_ac_B.VeOFCR_t_StateColorTimer1 = 0.0F;
                    }
                }

                /* End of Chart: '<S97>/Stateflow Chart' */

                /* Merge: '<S72>/Merge' incorporates:
                 *  SignalConversion generated from: '<S97>/Ind1'
                 */
                VeOFCR_e_Ind1_Cmd = OFCR_ac_B.Ind1_Cmd;

                /* Merge: '<S72>/Merge2' incorporates:
                 *  SignalConversion generated from: '<S97>/Ind2'
                 */
                VeOFCR_e_Ind2_Cmd = OFCR_ac_B.Ind2_Cmd;

                /* Merge: '<S72>/Merge4' incorporates:
                 *  SignalConversion generated from: '<S97>/Ind3'
                 */
                VeOFCR_e_Ind3_Cmd = OFCR_ac_B.Ind3_Cmd;

                /* Merge: '<S72>/Merge5' incorporates:
                 *  SignalConversion generated from: '<S97>/Ind4'
                 */
                VeOFCR_e_Ind4_Cmd = OFCR_ac_B.Ind4_Cmd;

                /* Merge: '<S72>/Merge1' incorporates:
                 *  SignalConversion generated from: '<S97>/Ind5'
                 */
                VeOFCR_e_Ind5_Cmd = OFCR_ac_B.Ind5_Cmd;

                /* Merge: '<S72>/Merge3' incorporates:
                 *  Constant: '<S136>/Constant'
                 *  SignalConversion generated from: '<S97>/BlinkRate'
                 */
                VeOFCR_e_BlinkRate_Cmd = CeCITR_e_CPIM_NoBlink;

                /* Merge: '<S72>/Merge6' incorporates:
                 *  Constant: '<S137>/Constant'
                 *  SignalConversion generated from: '<S97>/ColorInd'
                 */
                VeOFCR_e_ColorInd_Cmd = CeCITR_e_CPIM_Blue;

                /* End of Outputs for SubSystem: '<S72>/If Action Subsystem8' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S72>/If Action Subsystem9' incorporates:
                 *  ActionPort: '<S98>/Action Port'
                 */
                OFCR_ac_IfActionSubsystem_d((&(VeOFCR_e_Ind1_Cmd)),
                    (&(VeOFCR_e_Ind2_Cmd)), (&(VeOFCR_e_Ind3_Cmd)),
                    (&(VeOFCR_e_Ind4_Cmd)), (&(VeOFCR_e_Ind5_Cmd)),
                    (&(VeOFCR_e_BlinkRate_Cmd)), (&(VeOFCR_e_ColorInd_Cmd)));

                /* End of Outputs for SubSystem: '<S72>/If Action Subsystem9' */
            }
        }

        /* End of Outputs for SubSystem: '<S72>/If Action Subsystem3' */
    }

    /* End of If: '<S72>/If' */

    /* If: '<S73>/If' incorporates:
     *  Constant: '<S146>/Constant1'
     *  Constant: '<S146>/Constant2'
     *  DataStoreRead: '<S146>/StatusByte_Module_Failure_CPIM'
     *  Logic: '<S146>/Logical Operator'
     *  Logic: '<S73>/Logical5'
     *  RelationalOperator: '<S146>/Relational Operator1'
     *  RelationalOperator: '<S146>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S146>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S146>/Bitwise Operator2'
     */
    if (rtb_Logical1_i || (((OFCR_ac_DW.StatusByte_Module_Failure_CPIM & ((uint8)
            1U)) > ((uint8)0U)) && ((OFCR_ac_DW.StatusByte_Module_Failure_CPIM &
           ((uint8)64U)) == ((uint8)0U))))
    {
        /* Outputs for IfAction SubSystem: '<S73>/If Action Subsystem' incorporates:
         *  ActionPort: '<S147>/Action Port'
         */
        /* Merge: '<S73>/Merge' incorporates:
         *  Constant: '<S151>/Constant'
         *  SignalConversion generated from: '<S147>/Icon1_Cmd'
         */
        VeOFCR_e_CPIM_Icon1_Cmd_Test1 = CeCITR_e_CPIM_Icon_OFF;

        /* Merge: '<S73>/Merge1' incorporates:
         *  Constant: '<S152>/Constant'
         *  SignalConversion generated from: '<S147>/Icon2_Cmd'
         */
        VeOFCR_e_CPIM_Icon2_Cmd_Test1 = CeCITR_e_CPIM_Icon_OFF;

        /* End of Outputs for SubSystem: '<S73>/If Action Subsystem' */
    }
    else if (VeOFCR_b_CPIM_Icon1_FailSts)
    {
        /* Outputs for IfAction SubSystem: '<S73>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S148>/Action Port'
         */
        /* Merge: '<S73>/Merge' incorporates:
         *  Constant: '<S153>/Constant'
         *  SignalConversion generated from: '<S148>/Icon1_Cmd'
         */
        VeOFCR_e_CPIM_Icon1_Cmd_Test1 = CeCITR_e_CPIM_Icon_OFF;

        /* Merge: '<S73>/Merge1' incorporates:
         *  Inport: '<S148>/CPIM_LED_Icon2_Cmd'
         *  Switch: '<S5>/Switch20'
         */
        VeOFCR_e_CPIM_Icon2_Cmd_Test1 = VeOFCR_b_CPIM_Icon2_Cmd_In;

        /* End of Outputs for SubSystem: '<S73>/If Action Subsystem1' */
    }
    else if (VeOFCR_b_CPIM_Icon2_FailSts)
    {
        /* Outputs for IfAction SubSystem: '<S73>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S149>/Action Port'
         */
        /* Merge: '<S73>/Merge' incorporates:
         *  Inport: '<S149>/CPIM_LED_Icon1_Cmd'
         *  Switch: '<S5>/Switch17'
         */
        VeOFCR_e_CPIM_Icon1_Cmd_Test1 = VeOFCR_b_CPIM_Icon1_Cmd_In;

        /* Merge: '<S73>/Merge1' incorporates:
         *  Constant: '<S154>/Constant'
         *  SignalConversion generated from: '<S149>/Icon2_Cmd'
         */
        VeOFCR_e_CPIM_Icon2_Cmd_Test1 = CeCITR_e_CPIM_Icon_OFF;

        /* End of Outputs for SubSystem: '<S73>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S73>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S150>/Action Port'
         */
        /* Merge: '<S73>/Merge' incorporates:
         *  Inport: '<S150>/CPIM_LED_Icon1_Cmd'
         *  Switch: '<S5>/Switch17'
         */
        VeOFCR_e_CPIM_Icon1_Cmd_Test1 = VeOFCR_b_CPIM_Icon1_Cmd_In;

        /* Merge: '<S73>/Merge1' incorporates:
         *  Inport: '<S150>/CPIM_LED_Icon2_Cmd'
         *  Switch: '<S5>/Switch20'
         */
        VeOFCR_e_CPIM_Icon2_Cmd_Test1 = VeOFCR_b_CPIM_Icon2_Cmd_In;

        /* End of Outputs for SubSystem: '<S73>/If Action Subsystem3' */
    }

    /* End of If: '<S73>/If' */

    /* Outputs for Atomic SubSystem: '<S160>/Counter Reset  Enabled ' */
    /* Switch: '<S194>/Switch' incorporates:
     *  Constant: '<S194>/Constant Value2'
     *  Switch: '<S194>/Switch2'
     *  UnitDelay: '<S194>/Unit Delay'
     */
    if (rtb_Logical2_e)
    {
        OFCR_ac_DW.UnitDelay_DSTATE_k = ((uint16)0U);
    }
    else
    {
        if (VeOFCR_b_FirstPlugIn)
        {
            /* UnitDelay: '<S194>/Unit Delay' incorporates:
             *  Constant: '<S194>/Constant Value1'
             *  Sum: '<S194>/Subtraction'
             *  Switch: '<S194>/Switch2'
             */
            OFCR_ac_DW.UnitDelay_DSTATE_k = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)OFCR_ac_DW.UnitDelay_DSTATE_k));
        }
    }

    /* End of Switch: '<S194>/Switch' */
    /* End of Outputs for SubSystem: '<S160>/Counter Reset  Enabled ' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/OFCR_MedTEH' */

    /* Inport: '<Root>/VeCITR_e_ChrgrFlapSts' */
    (void)Rte_Read_VeCITR_e_ChrgrFlapSts_Value(&tmpRead_7);

    /* Inport: '<Root>/VeCDMR_b_BCIM_LED_ShrtOrOpn' */
    (void)Rte_Read_VeCDMR_b_BCIM_LED_ShrtOrOpn_Value(&tmpRead_5);

    /* Inport: '<Root>/VeCDMR_b_BCIM_HW_BusFlt' */
    (void)Rte_Read_VeCDMR_b_BCIM_HW_BusFlt_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCDMR_b_CPIM_LED_ShrtOrOpn' */
    (void)Rte_Read_VeCDMR_b_CPIM_LED_ShrtOrOpn_Value(&rtb_Logical5_nz);

    /* Inport: '<Root>/VeCDMR_b_CPIM_HW_BusFlt' */
    (void)Rte_Read_VeCDMR_b_CPIM_HW_BusFlt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeCDMR_b_BCIM_ClrMismtch' */
    (void)Rte_Read_VeCDMR_b_BCIM_ClrMismtch_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCDMR_b_CPIM_ClrMismtch' */
    (void)Rte_Read_VeCDMR_b_CPIM_ClrMismtch_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/OFCR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCC'
     */
    /* RelationalOperator: '<S160>/Comparison' incorporates:
     *  Constant: '<S196>/Calib'
     *  UnitDelay: '<S160>/Unit Delay'
     *  UnitDelay: '<S194>/Unit Delay'
     */
    OFCR_ac_DW.UnitDelay_DSTATE_g = (OFCR_ac_DW.UnitDelay_DSTATE_k >
        KeOFCR_Cnt_ColorTimer);

    /* RelationalOperator: '<S178>/Comparison1' incorporates:
     *  Constant: '<S179>/Calib'
     *  UnitDelay: '<S178>/Unit Delay1'
     */
    OFCR_ac_DW.UnitDelay1_DSTATE = (rtb_Switch1_e > KeOFCR_t_ResetThreshold);

    /* RelationalOperator: '<S225>/Comparison4' incorporates:
     *  Constant: '<S185>/Constant'
     *  DataStoreRead: '<S185>/StatusByte_LostCommCPIM'
     *  RelationalOperator: '<S185>/Relational Operator'
     *  S-Function (sfix_bitop): '<S185>/Bitwise Operator7'
     */
    rtb_Comparison4_n = ((OFCR_ac_DW.StatusByte_LostCommCPIM & ((uint8)1U)) >
                         ((uint8)0U));

    /* Logic: '<S156>/Logical11' incorporates:
     *  Constant: '<S181>/Constant'
     *  Constant: '<S182>/Constant'
     *  Constant: '<S183>/Constant'
     *  Constant: '<S186>/Calib'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S188>/Calib'
     *  DataStoreRead: '<S181>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S182>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S183>/StatusByte_LIN3_BusOff'
     *  Logic: '<S156>/Logical6'
     *  Logic: '<S156>/Logical7'
     *  Logic: '<S156>/Logical8'
     *  RelationalOperator: '<S181>/Relational Operator'
     *  RelationalOperator: '<S182>/Relational Operator'
     *  RelationalOperator: '<S183>/Relational Operator'
     *  S-Function (sfix_bitop): '<S181>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S182>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S183>/Bitwise Operator7'
     */
    rtb_Logical1_i = (((((OFCR_ac_DW.StatusByte_LIN1_BusOff & ((uint8)1U)) >
                         ((uint8)0U)) && (HeOFCR_b_EnblLIN1_BusOff)) ||
                       (((OFCR_ac_DW.StatusByte_LIN2_BusOff & ((uint8)1U)) >
                         ((uint8)0U)) && (HeOFCR_b_EnblLIN2_BusOff))) ||
                      (((OFCR_ac_DW.StatusByte_LIN3_BusOff & ((uint8)1U)) >
                        ((uint8)0U)) && (HeOFCR_b_EnblLIN3_BusOff)));

    /* Logic: '<S156>/Logical1' incorporates:
     *  Constant: '<S184>/Constant'
     *  DataStoreRead: '<S184>/StatusByte_LostCommBCIM'
     *  RelationalOperator: '<S184>/Relational Operator'
     *  S-Function (sfix_bitop): '<S184>/Bitwise Operator7'
     */
    VeOFCR_b_BCIM_Flt = ((((tmpRead_0 || tmpRead_4) || tmpRead_5) ||
                          rtb_Logical1_i) ||
                         ((OFCR_ac_DW.StatusByte_LostCommBCIM & ((uint8)1U)) >
                          ((uint8)0U)));

    /* Logic: '<S156>/Logical2' */
    VeOFCR_b_CPIM_Flt = ((((tmpRead || tmpRead_3) || rtb_Logical5_nz) ||
                          rtb_Logical1_i) || rtb_Comparison4_n);

    /* Logic: '<S156>/Logical4' incorporates:
     *  Constant: '<S189>/Calib'
     *  Logic: '<S156>/Logical3'
     *  Logic: '<S156>/Logical5'
     */
    VeOFCR_b_ThmrSnsrFlt = (((rtb_Logical1_i || rtb_Comparison4_n) &&
        (KeOFCR_b_SnsronLINBus)) || (VeOFCR_b_SCP_InletTemp_FA));

    /* RelationalOperator: '<S220>/Relational Operator' incorporates:
     *  Constant: '<S220>/Constant'
     *  DataStoreRead: '<S220>/StatusByte_LostCommBCM'
     *  S-Function (sfix_bitop): '<S220>/Bitwise Operator7'
     */
    rtb_AND_hm = ((OFCR_ac_DW.StatusByte_LostCommBCM & ((uint8)1U)) > ((uint8)0U));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/OFCR_MedTEH' */

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_Color' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_Color_Value((&(VeOFCR_e_BCIM_Color_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_IconI2' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_IconI2_Value((&(VeOFCR_e_Icon2_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_IconI1' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_IconI1_Value((&(VeOFCR_e_Icon1_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_Color' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_Color_Value((&(VeOFCR_e_CPIM_Color_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIMBlinkRate' */
    (void)Rte_Read_VeCITR_e_DVC_CPIMBlinkRate_Value
        ((&(VeOFCR_e_CPIM_BlinkRate_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind5' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_Ind5_Value((&(VeOFCR_e_CPIM_Ind5_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind4' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_Ind4_Value((&(VeOFCR_e_CPIM_Ind4_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind3' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_Ind3_Value((&(VeOFCR_e_CPIM_Ind3_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind2' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_Ind2_Value((&(VeOFCR_e_CPIM_Ind2_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind1' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_Ind1_Value((&(VeOFCR_e_CPIM_Ind1_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_CPIM_IO' */
    (void)Rte_Read_VeCITR_e_DVC_CPIM_IO_Value(&tmpRead_2);

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_BlinkRate' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_BlinkRate_Value
        ((&(VeOFCR_e_BCIM_BlinkRate_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind5' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_Ind5_Value((&(VeOFCR_e_BCIM_Ind5_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind4' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_Ind4_Value((&(VeOFCR_e_BCIM_Ind4_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind3' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_Ind3_Value((&(VeOFCR_e_BCIM_Ind3_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind2' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_Ind2_Value((&(VeOFCR_e_BCIM_Ind2_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind1' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_Ind1_Value((&(VeOFCR_e_BCIM_Ind1_CmdInt)));

    /* Inport: '<Root>/VeCITR_e_DVC_BCIM_IO' */
    (void)Rte_Read_VeCITR_e_DVC_BCIM_IO_Value(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<Root>/OFCR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCC'
     */
    /* Switch: '<S11>/Switch10' incorporates:
     *  Constant: '<S223>/Constant'
     *  Inport: '<Root>/VeCITR_e_DVC_CPIM_IO'
     *  RelationalOperator: '<S11>/Comparison9'
     *  Switch: '<S11>/Switch11'
     *  Switch: '<S11>/Switch12'
     *  Switch: '<S11>/Switch13'
     *  Switch: '<S11>/Switch14'
     *  Switch: '<S11>/Switch2'
     *  Switch: '<S11>/Switch4'
     *  Switch: '<S11>/Switch5'
     *  Switch: '<S11>/Switch6'
     *  Switch: '<S11>/Switch8'
     */
    if (tmpRead_2 == CeODCR_e_ShortTermAdjust)
    {
    }
    else
    {
        /* Switch: '<S11>/Switch10' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIMBlinkRate'
         *  Merge: '<S72>/Merge3'
         */
        VeOFCR_e_CPIM_BlinkRate_CmdInt = VeOFCR_e_BlinkRate_Cmd;

        /* Switch: '<S11>/Switch11' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind2'
         *  Merge: '<S72>/Merge2'
         */
        VeOFCR_e_CPIM_Ind2_CmdInt = VeOFCR_e_Ind2_Cmd;

        /* Switch: '<S11>/Switch12' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_Color'
         *  Merge: '<S72>/Merge6'
         */
        VeOFCR_e_CPIM_Color_CmdInt = VeOFCR_e_ColorInd_Cmd;

        /* Switch: '<S11>/Switch13' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_IconI2'
         *  Merge: '<S73>/Merge1'
         */
        VeOFCR_e_Icon2_CmdInt = VeOFCR_e_CPIM_Icon2_Cmd_Test1;

        /* Switch: '<S11>/Switch14' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_IconI1'
         *  Merge: '<S73>/Merge'
         */
        VeOFCR_e_Icon1_CmdInt = VeOFCR_e_CPIM_Icon1_Cmd_Test1;

        /* Switch: '<S11>/Switch2' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind1'
         *  Merge: '<S72>/Merge'
         */
        VeOFCR_e_CPIM_Ind1_CmdInt = VeOFCR_e_Ind1_Cmd;

        /* Switch: '<S11>/Switch4' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind3'
         *  Merge: '<S72>/Merge4'
         */
        VeOFCR_e_CPIM_Ind3_CmdInt = VeOFCR_e_Ind3_Cmd;

        /* Switch: '<S11>/Switch5' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_BCIM_Color'
         *  Merge: '<S7>/Merge6'
         */
        VeOFCR_e_BCIM_Color_CmdInt = VeOFCR_e_BCIM_Color_Cmd;

        /* Switch: '<S11>/Switch6' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind4'
         *  Merge: '<S72>/Merge5'
         */
        VeOFCR_e_CPIM_Ind4_CmdInt = VeOFCR_e_Ind4_Cmd;

        /* Switch: '<S11>/Switch8' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_CPIM_Ind5'
         *  Merge: '<S72>/Merge1'
         */
        VeOFCR_e_CPIM_Ind5_CmdInt = VeOFCR_e_Ind5_Cmd;
    }

    /* End of Switch: '<S11>/Switch10' */

    /* Switch: '<S11>/Switch1' incorporates:
     *  Inport: '<Root>/VeCITR_e_DVC_BCIM_IO'
     *  RelationalOperator: '<S11>/Comparison1'
     *  Switch: '<S11>/Switch15'
     *  Switch: '<S11>/Switch16'
     *  Switch: '<S11>/Switch3'
     *  Switch: '<S11>/Switch7'
     *  Switch: '<S11>/Switch9'
     */
    if (tmpRead_1 == CeODCR_e_ShortTermAdjust)
    {
    }
    else
    {
        /* Switch: '<S11>/Switch1' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_BCIM_BlinkRate'
         *  Merge: '<S7>/Merge3'
         */
        VeOFCR_e_BCIM_BlinkRate_CmdInt = VeOFCR_e_BCIM_BlinkRate_Cmd;

        /* Switch: '<S11>/Switch15' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind4'
         *  Merge: '<S7>/Merge5'
         */
        VeOFCR_e_BCIM_Ind4_CmdInt = VeOFCR_e_BCIM_Ind4_Cmd;

        /* Switch: '<S11>/Switch16' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind5'
         *  Merge: '<S7>/Merge1'
         */
        VeOFCR_e_BCIM_Ind5_CmdInt = VeOFCR_e_BCIM_Ind5_Cmd;

        /* Switch: '<S11>/Switch3' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind2'
         *  Merge: '<S7>/Merge2'
         */
        VeOFCR_e_BCIM_Ind2_CmdInt = VeOFCR_e_BCIM_Ind2_Cmd;

        /* Switch: '<S11>/Switch7' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind1'
         *  Merge: '<S7>/Merge'
         */
        VeOFCR_e_BCIM_Ind1_CmdInt = VeOFCR_e_BCIM_Ind1_Cmd;

        /* Switch: '<S11>/Switch9' incorporates:
         *  Inport: '<Root>/VeCITR_e_DVC_BCIM_Ind3'
         *  Merge: '<S7>/Merge4'
         */
        VeOFCR_e_BCIM_Ind3_CmdInt = VeOFCR_e_BCIM_Ind3_Cmd;
    }

    /* End of Switch: '<S11>/Switch1' */

    /* RelationalOperator: '<S225>/Comparison4' incorporates:
     *  Constant: '<S227>/Constant'
     *  RelationalOperator: '<S224>/Comparison4'
     */
    rtb_Comparison4_n = (VeOFCR_e_ChargeType == CeOBCR_e_AC);

    /* Outputs for Atomic SubSystem: '<S224>/Hysteresis' */
    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S232>/Calib'
     *  Constant: '<S233>/Calib'
     *  RelationalOperator: '<S228>/Greater  Than'
     *  RelationalOperator: '<S228>/Greater  Than1'
     *  Switch: '<S228>/Switch2'
     */
    if (VeOFCR_T_SCP_InletTemp > KeOFCR_T_Abs_RSPDerate2Normal)
    {
        /* Switch: '<S228>/Switch1' incorporates:
         *  Constant: '<S228>/Constant Value'
         */
        VeOFCR_T_ChrgPortTempTest1 = true;
    }
    else
    {
        if (VeOFCR_T_SCP_InletTemp < KeOFCR_T_Abs_LSPDerate2Normal)
        {
            /* Switch: '<S228>/Switch2' incorporates:
             *  Constant: '<S228>/Constant Value1'
             *  Switch: '<S228>/Switch1'
             */
            VeOFCR_T_ChrgPortTempTest1 = false;
        }
    }

    /* End of Switch: '<S228>/Switch1' */
    /* End of Outputs for SubSystem: '<S224>/Hysteresis' */

    /* Sum: '<S224>/Sum1' */
    rtb_Switch1_l = VeOFCR_T_SCP_InletTemp - VeOFCR_T_SCP_AmbientTemp;

    /* Outputs for Atomic SubSystem: '<S224>/Hysteresis1' */
    /* Switch: '<S229>/Switch1' incorporates:
     *  Constant: '<S229>/Constant Value'
     *  Constant: '<S234>/Calib'
     *  Constant: '<S235>/Calib'
     *  RelationalOperator: '<S229>/Greater  Than'
     *  RelationalOperator: '<S229>/Greater  Than1'
     *  Switch: '<S229>/Switch2'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    if (rtb_Switch1_l > KeOFCR_T_Del_RSPDerate2Normal)
    {
        OFCR_ac_DW.UnitDelay_DSTATE_d = true;
    }
    else
    {
        if (rtb_Switch1_l < KeOFCR_T_Del_LSPDerate2Normal)
        {
            /* Switch: '<S229>/Switch2' incorporates:
             *  Constant: '<S229>/Constant Value1'
             *  UnitDelay: '<S229>/Unit Delay'
             */
            OFCR_ac_DW.UnitDelay_DSTATE_d = false;
        }
    }

    /* End of Switch: '<S229>/Switch1' */
    /* End of Outputs for SubSystem: '<S224>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S224>/Hysteresis2' */
    /* Switch: '<S230>/Switch1' incorporates:
     *  Constant: '<S230>/Constant Value'
     *  Constant: '<S237>/Calib'
     *  Constant: '<S239>/Calib'
     *  RelationalOperator: '<S230>/Greater  Than'
     *  RelationalOperator: '<S230>/Greater  Than1'
     *  Switch: '<S230>/Switch2'
     *  UnitDelay: '<S230>/Unit Delay'
     */
    if (rtb_Switch1_l > KeOFCR_T_RSPDeltaOTThrshldFlt)
    {
        OFCR_ac_DW.UnitDelay_DSTATE_gb = true;
    }
    else
    {
        if (rtb_Switch1_l < KeOFCR_T_LSPDeltaOTThrshldFlt)
        {
            /* Switch: '<S230>/Switch2' incorporates:
             *  Constant: '<S230>/Constant Value1'
             *  UnitDelay: '<S230>/Unit Delay'
             */
            OFCR_ac_DW.UnitDelay_DSTATE_gb = false;
        }
    }

    /* End of Switch: '<S230>/Switch1' */
    /* End of Outputs for SubSystem: '<S224>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S224>/Hysteresis3' */
    /* Switch: '<S231>/Switch1' incorporates:
     *  Constant: '<S236>/Calib'
     *  Constant: '<S238>/Calib'
     *  RelationalOperator: '<S231>/Greater  Than'
     *  RelationalOperator: '<S231>/Greater  Than1'
     *  Switch: '<S231>/Switch2'
     */
    if (VeOFCR_T_SCP_InletTemp > KeOFCR_T_RSPAbsOTThrshldFlt)
    {
        /* Switch: '<S231>/Switch1' incorporates:
         *  Constant: '<S231>/Constant Value'
         */
        VeOFCR_b_ChrgPortTempTest5 = true;
    }
    else
    {
        if (VeOFCR_T_SCP_InletTemp < KeOFCR_T_LSPAbsOTThrshldFlt)
        {
            /* Switch: '<S231>/Switch2' incorporates:
             *  Constant: '<S231>/Constant Value1'
             *  Switch: '<S231>/Switch1'
             */
            VeOFCR_b_ChrgPortTempTest5 = false;
        }
    }

    /* End of Switch: '<S231>/Switch1' */
    /* End of Outputs for SubSystem: '<S224>/Hysteresis3' */

    /* Logic: '<S224>/Logical5' */
    rtb_Logical5_nz = !VeOFCR_b_StopChrg_AC;

    /* Logic: '<S224>/Logical1' incorporates:
     *  Logic: '<S224>/Logical6'
     */
    tmpRead_3 = !VeOFCR_b_SCP_AmbientTemp_FA;

    /* Logic: '<S224>/Logical2' incorporates:
     *  Logic: '<S224>/Logical1'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    VeOFCR_T_ChrgPortTempTest2 = ((OFCR_ac_DW.UnitDelay_DSTATE_d) && tmpRead_3);

    /* Logic: '<S224>/Logical3' */
    VeOFCR_b_ChrgPortTempTest4 = ((VeOFCR_T_ChrgPortTempTest1) ||
        (VeOFCR_T_ChrgPortTempTest2));

    /* Logic: '<S224>/Logical7' incorporates:
     *  UnitDelay: '<S230>/Unit Delay'
     */
    VeOFCR_b_ChrgPortTempTest6 = ((OFCR_ac_DW.UnitDelay_DSTATE_gb) && tmpRead_3);

    /* Logic: '<S224>/Logical4' incorporates:
     *  Constant: '<S241>/Calib'
     *  Logic: '<S224>/Logical9'
     *  UnitDelay: '<S224>/Unit Delay'
     *  UnitDelay: '<S224>/Unit Delay2'
     */
    VeOFCR_b_ChrgPortTempTest3 = ((((VeOFCR_b_ChrgPortTempTest5) ||
        (VeOFCR_b_ChrgPortTempTest6)) || ((KeOFCR_b_LINOffLOCCPIM_ACStop) &&
        (OFCR_ac_DW.UnitDelay_DSTATE_i))) || (OFCR_ac_DW.UnitDelay2_DSTATE_e));

    /* Logic: '<S224>/Logical8' incorporates:
     *  Constant: '<S240>/Calib'
     */
    VeOFCR_b_StopChrg_AC = ((rtb_Comparison4_n && (KeOFCR_b_ACTempSensAvail)) &&
                            (VeOFCR_b_ChrgPortTempTest3));

    /* Switch: '<S224>/Switch' incorporates:
     *  Constant: '<S240>/Calib'
     *  Logic: '<S224>/Logical'
     */
    if ((rtb_Comparison4_n && rtb_Logical5_nz) && (KeOFCR_b_ACTempSensAvail))
    {
        /* Switch: '<S224>/Switch' */
        VeOFCR_b_DerateChrg_AC = VeOFCR_b_ChrgPortTempTest4;
    }
    else
    {
        /* Switch: '<S224>/Switch' incorporates:
         *  Constant: '<S224>/FALSE Constant'
         */
        VeOFCR_b_DerateChrg_AC = false;
    }

    /* End of Switch: '<S224>/Switch' */

    /* RelationalOperator: '<S225>/Comparison1' */
    VeOFCR_b_ChrgLtch = (VeOFCR_e_ChargingSysSts ==
                         CeOBCR_e_ChargingSts_Charging);

    /* RelationalOperator: '<S225>/Comparison4' incorporates:
     *  Constant: '<S244>/Constant'
     */
    rtb_Comparison4_n = (VeOFCR_e_ChargeType == CeOBCR_e_DC);

    /* Outputs for Atomic SubSystem: '<S225>/EdgeRising' */
    /* Logic: '<S242>/OR1' incorporates:
     *  UnitDelay: '<S242>/Unit Delay'
     */
    rtb_Logical5_nz = !OFCR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S242>/Unit Delay' */
    OFCR_ac_DW.UnitDelay_DSTATE_c = VeOFCR_b_ChrgLtch;

    /* Outputs for Enabled SubSystem: '<S225>/EnabledSubsystem' incorporates:
     *  EnablePort: '<S243>/Enable'
     */
    /* Logic: '<S242>/AND' */
    if ((VeOFCR_b_ChrgLtch) && rtb_Logical5_nz)
    {
        /* Gain: '<S268>/Gain' */
        VeOFCR_T_DCPosLtch = 1.0F * VeOFCR_T_DCPosTemp;

        /* Gain: '<S269>/Gain' */
        VeOFCR_T_DCNegLtch = 1.0F * VeOFCR_T_DCNegTemp;
    }

    /* End of Logic: '<S242>/AND' */
    /* End of Outputs for SubSystem: '<S225>/EnabledSubsystem' */
    /* End of Outputs for SubSystem: '<S225>/EdgeRising' */

    /* Switch: '<S225>/Switch1' */
    if (VeOFCR_b_ChrgLtch)
    {
        rtb_Switch1_l = VeOFCR_T_DCPosLtch;
    }
    else
    {
        rtb_Switch1_l = VeOFCR_T_DCPosTemp;
    }

    /* End of Switch: '<S225>/Switch1' */

    /* Sum: '<S225>/Sum1' */
    VeOFCR_T_DCPosRise = VeOFCR_T_DCPosTemp - rtb_Switch1_l;

    /* Outputs for Atomic SubSystem: '<S225>/Hysteresis' */
    /* Switch: '<S246>/Switch1' incorporates:
     *  Constant: '<S257>/Calib'
     *  Constant: '<S261>/Calib'
     *  RelationalOperator: '<S246>/Greater  Than'
     *  RelationalOperator: '<S246>/Greater  Than1'
     *  Switch: '<S246>/Switch2'
     */
    if (VeOFCR_T_DCPosRise > KeOFCR_T_Del_RSPDerate_DCPos)
    {
        /* Switch: '<S246>/Switch1' incorporates:
         *  Constant: '<S246>/Constant Value'
         */
        VeOFCR_b_Derate_DCPosRise = true;
    }
    else
    {
        if (VeOFCR_T_DCPosRise < KeOFCR_T_Del_LSPDerate_DCPos)
        {
            /* Switch: '<S246>/Switch2' incorporates:
             *  Constant: '<S246>/Constant Value1'
             *  Switch: '<S246>/Switch1'
             */
            VeOFCR_b_Derate_DCPosRise = false;
        }
    }

    /* End of Switch: '<S246>/Switch1' */
    /* End of Outputs for SubSystem: '<S225>/Hysteresis' */

    /* MinMax: '<S225>/MinMax1' */
    VeOFCR_T_MaxInletTemp_DC = fmaxf(VeOFCR_T_DCPosTemp, VeOFCR_T_DCNegTemp);

    /* Outputs for Atomic SubSystem: '<S225>/Hysteresis1' */
    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S252>/Calib'
     *  Constant: '<S254>/Calib'
     *  RelationalOperator: '<S247>/Greater  Than'
     *  RelationalOperator: '<S247>/Greater  Than1'
     *  Switch: '<S247>/Switch2'
     */
    if (VeOFCR_T_MaxInletTemp_DC > KeOFCR_T_Abs_RSPDerate)
    {
        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S247>/Constant Value'
         */
        VeOFCR_b_Derate_Abs = true;
    }
    else
    {
        if (VeOFCR_T_MaxInletTemp_DC < KeOFCR_T_Abs_LSPDerate)
        {
            /* Switch: '<S247>/Switch2' incorporates:
             *  Constant: '<S247>/Constant Value1'
             *  Switch: '<S247>/Switch1'
             */
            VeOFCR_b_Derate_Abs = false;
        }
    }

    /* End of Switch: '<S247>/Switch1' */
    /* End of Outputs for SubSystem: '<S225>/Hysteresis1' */

    /* Switch: '<S225>/Switch2' */
    if (VeOFCR_b_ChrgLtch)
    {
        rtb_Switch1_l = VeOFCR_T_DCNegLtch;
    }
    else
    {
        rtb_Switch1_l = VeOFCR_T_DCNegTemp;
    }

    /* End of Switch: '<S225>/Switch2' */

    /* Sum: '<S225>/Sum2' */
    VeOFCR_T_DCNegRise = VeOFCR_T_DCNegTemp - rtb_Switch1_l;

    /* Outputs for Atomic SubSystem: '<S225>/Hysteresis4' */
    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S256>/Calib'
     *  Constant: '<S260>/Calib'
     *  RelationalOperator: '<S248>/Greater  Than'
     *  RelationalOperator: '<S248>/Greater  Than1'
     *  Switch: '<S248>/Switch2'
     */
    if (VeOFCR_T_DCNegRise > KeOFCR_T_Del_RSPDerate_DCNeg)
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  Constant: '<S248>/Constant Value'
         */
        VeOFCR_b_Derate_DCNegRise = true;
    }
    else
    {
        if (VeOFCR_T_DCNegRise < KeOFCR_T_Del_LSPDerate_DCNeg)
        {
            /* Switch: '<S248>/Switch2' incorporates:
             *  Constant: '<S248>/Constant Value1'
             *  Switch: '<S248>/Switch1'
             */
            VeOFCR_b_Derate_DCNegRise = false;
        }
    }

    /* End of Switch: '<S248>/Switch1' */
    /* End of Outputs for SubSystem: '<S225>/Hysteresis4' */

    /* Outputs for Atomic SubSystem: '<S225>/Hysteresis5' */
    /* Switch: '<S249>/Switch1' incorporates:
     *  Constant: '<S259>/Calib'
     *  Constant: '<S263>/Calib'
     *  RelationalOperator: '<S249>/Greater  Than'
     *  RelationalOperator: '<S249>/Greater  Than1'
     *  Switch: '<S249>/Switch2'
     */
    if (VeOFCR_T_DCPosRise > KeOFCR_T_Del_RSPStop_DCPos)
    {
        /* Switch: '<S249>/Switch1' incorporates:
         *  Constant: '<S249>/Constant Value'
         */
        VeOFCR_b_Stop_DCPosRise = true;
    }
    else
    {
        if (VeOFCR_T_DCPosRise < KeOFCR_T_Del_LSPStop_DCPos)
        {
            /* Switch: '<S249>/Switch2' incorporates:
             *  Constant: '<S249>/Constant Value1'
             *  Switch: '<S249>/Switch1'
             */
            VeOFCR_b_Stop_DCPosRise = false;
        }
    }

    /* End of Switch: '<S249>/Switch1' */
    /* End of Outputs for SubSystem: '<S225>/Hysteresis5' */

    /* Outputs for Atomic SubSystem: '<S225>/Hysteresis6' */
    /* Switch: '<S250>/Switch1' incorporates:
     *  Constant: '<S253>/Calib'
     *  Constant: '<S255>/Calib'
     *  RelationalOperator: '<S250>/Greater  Than'
     *  RelationalOperator: '<S250>/Greater  Than1'
     *  Switch: '<S250>/Switch2'
     */
    if (VeOFCR_T_MaxInletTemp_DC > KeOFCR_T_Abs_RSPStop)
    {
        /* Switch: '<S250>/Switch1' incorporates:
         *  Constant: '<S250>/Constant Value'
         */
        VeOFCR_b_Stop_Abs = true;
    }
    else
    {
        if (VeOFCR_T_MaxInletTemp_DC < KeOFCR_T_Abs_LSPStop)
        {
            /* Switch: '<S250>/Switch2' incorporates:
             *  Constant: '<S250>/Constant Value1'
             *  Switch: '<S250>/Switch1'
             */
            VeOFCR_b_Stop_Abs = false;
        }
    }

    /* End of Switch: '<S250>/Switch1' */
    /* End of Outputs for SubSystem: '<S225>/Hysteresis6' */

    /* Outputs for Atomic SubSystem: '<S225>/Hysteresis7' */
    /* Switch: '<S251>/Switch1' incorporates:
     *  Constant: '<S258>/Calib'
     *  Constant: '<S262>/Calib'
     *  RelationalOperator: '<S251>/Greater  Than'
     *  RelationalOperator: '<S251>/Greater  Than1'
     *  Switch: '<S251>/Switch2'
     */
    if (VeOFCR_T_DCNegRise > KeOFCR_T_Del_RSPStop_DCNeg)
    {
        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S251>/Constant Value'
         */
        VeOFCR_b_Stop_DCNegRise = true;
    }
    else
    {
        if (VeOFCR_T_DCNegRise < KeOFCR_T_Del_LSPStop_DCNeg)
        {
            /* Switch: '<S251>/Switch2' incorporates:
             *  Constant: '<S251>/Constant Value1'
             *  Switch: '<S251>/Switch1'
             */
            VeOFCR_b_Stop_DCNegRise = false;
        }
    }

    /* End of Switch: '<S251>/Switch1' */
    /* End of Outputs for SubSystem: '<S225>/Hysteresis7' */

    /* Logic: '<S225>/Logical4' */
    rtb_Logical5_nz = !VeOFCR_b_StopChrg_DC;

    /* Logic: '<S225>/Logical12' incorporates:
     *  Logic: '<S225>/Logical1'
     */
    tmpRead_3 = ((VeOFCR_b_DCPosTemp_FA) || (VeOFCR_b_DCNegTemp_FA));

    /* Logic: '<S225>/Logical16' incorporates:
     *  Constant: '<S266>/Calib'
     *  Constant: '<S267>/Calib'
     *  Logic: '<S225>/Logical12'
     *  Logic: '<S225>/Logical15'
     *  Logic: '<S225>/Logical6'
     *  UnitDelay: '<S225>/Unit Delay'
     */
    VeOFCR_b_Stop_DC_OT = (((((VeOFCR_b_Stop_DCPosRise) ||
        (VeOFCR_b_Stop_DCNegRise)) || (VeOFCR_b_Stop_Abs)) ||
                            ((KeOFCR_b_Stop_InletFA) && tmpRead_3)) ||
                           ((KeOFCR_b_LINOffLOCCPIM_DCStop) &&
                            (OFCR_ac_DW.UnitDelay_DSTATE_m)));

    /* Logic: '<S225>/Logical3' incorporates:
     *  Constant: '<S265>/Calib'
     *  Logic: '<S225>/Logical2'
     */
    VeOFCR_b_Derate_DC_OT = ((((VeOFCR_b_Derate_DCPosRise) ||
        (VeOFCR_b_Derate_DCNegRise)) || (VeOFCR_b_Derate_Abs)) ||
        ((KeOFCR_b_Derate_InletFA) && tmpRead_3));

    /* Logic: '<S225>/Logical5' incorporates:
     *  Constant: '<S264>/Calib'
     */
    VeOFCR_b_StopChrg_DC = ((rtb_Comparison4_n && (KeOFCR_b_DCTempSensAvail)) &&
                            (VeOFCR_b_Stop_DC_OT));

    /* Switch: '<S225>/Switch' incorporates:
     *  Constant: '<S264>/Calib'
     *  Logic: '<S225>/Logical'
     */
    if ((rtb_Comparison4_n && rtb_Logical5_nz) && (KeOFCR_b_DCTempSensAvail))
    {
        /* Switch: '<S225>/Switch' */
        VeOFCR_b_DerateChrg_DC = VeOFCR_b_Derate_DC_OT;
    }
    else
    {
        /* Switch: '<S225>/Switch' incorporates:
         *  Constant: '<S225>/FALSE Constant'
         */
        VeOFCR_b_DerateChrg_DC = false;
    }

    /* End of Switch: '<S225>/Switch' */

    /* Switch: '<S270>/Switch1' incorporates:
     *  Switch: '<S270>/Switch2'
     */
    if (VeOFCR_b_DerateChrg_DC)
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S271>/Calib'
         */
        VeOFCR_I_ChrgPortOTCrntReq = KeOFCR_I_DCInletOT;
    }
    else if (VeOFCR_b_DerateChrg_AC)
    {
        /* Switch: '<S270>/Switch2' incorporates:
         *  Constant: '<S272>/Calib'
         *  Switch: '<S270>/Switch1'
         */
        VeOFCR_I_ChrgPortOTCrntReq = KeOFCR_I_InletOT;
    }
    else
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S273>/Calib'
         *  Switch: '<S270>/Switch2'
         */
        VeOFCR_I_ChrgPortOTCrntReq = KeOFCR_I_NoDerate;
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Logic: '<S226>/Logical2' */
    VeOFCR_b_ChrgPortDerate = ((VeOFCR_b_DerateChrg_AC) ||
        (VeOFCR_b_DerateChrg_DC));

    /* Logic: '<S226>/Logical1' */
    VeOFCR_b_ChrgPortStop = ((VeOFCR_b_StopChrg_AC) || (VeOFCR_b_StopChrg_DC));

    /* Update for UnitDelay: '<S72>/Unit Delay2' */
    OFCR_ac_DW.UnitDelay2_DSTATE_k = VeOFCR_b_CPIM_Flt;

    /* Update for UnitDelay: '<S224>/Unit Delay' */
    OFCR_ac_DW.UnitDelay_DSTATE_i = VeOFCR_b_ThmrSnsrFlt;

    /* Update for UnitDelay: '<S224>/Unit Delay2' */
    OFCR_ac_DW.UnitDelay2_DSTATE_e = VeOFCR_b_SCP_InletTemp_FA;

    /* Update for UnitDelay: '<S225>/Unit Delay' */
    OFCR_ac_DW.UnitDelay_DSTATE_m = VeOFCR_b_ThmrSnsrFlt;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCO'
     */
    /* Outport: '<Root>/VeOFCR_I_ChrgPortOTCrnt' incorporates:
     *  Gain: '<S383>/Gain'
     *  SignalConversion generated from: '<S1>/VeOFCR_I_ChrgPortOTCrnt'
     */
    (void)Rte_Write_VeOFCR_I_ChrgPortOTCrnt_Value(1.0F *
        VeOFCR_I_ChrgPortOTCrntReq);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCC'
     */
    /* Outport: '<Root>/VeOFCR_b_BckLghtCmd' incorporates:
     *  Constant: '<S219>/Constant'
     *  Gain: '<S385>/Gain'
     *  Inport: '<Root>/VeCITR_e_ChrgrFlapSts'
     *  Logic: '<S10>/Logical19'
     *  Logic: '<S10>/Logical20'
     *  Logic: '<S10>/Logical21'
     *  RelationalOperator: '<S10>/Comparison8'
     *  SignalConversion generated from: '<S1>/VeOFCR_b_BckLghtCmd'
     */
    (void)Rte_Write_VeOFCR_b_BckLghtCmd_Value((true) && (((!rtb_AND_hm) &&
        (!rtb_Logical1_i)) && (tmpRead_7 == CeCITR_e_ChrgrFlap_Open)));

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S359>/Calib'
     */
    if (KeOFCR_b_OvrdValEnblBlue)
    {
        /* Outport: '<Root>/VeOFCR_b_CPIM_BlueLED_Cmd' incorporates:
         *  Constant: '<S358>/Calib'
         *  SignalConversion generated from: '<S1>/VeOFCR_b_CPIM_BlueLED_Cmd'
         */
        (void)Rte_Write_VeOFCR_b_CPIM_BlueLED_Cmd_Value(KeOFCR_b_OvrdValBlue);
    }
    else
    {
        /* Outport: '<Root>/VeOFCR_b_CPIM_BlueLED_Cmd' incorporates:
         *  SignalConversion generated from: '<S1>/VeOFCR_b_CPIM_BlueLED_Cmd'
         */
        (void)Rte_Write_VeOFCR_b_CPIM_BlueLED_Cmd_Value(OFCR_ac_B.Merge3);
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S360>/Calib'
     */
    if (KeOFCR_b_OvrdValEnblGreen)
    {
        /* Outport: '<Root>/VeOFCR_b_CPIM_GreenLED_Cmd' incorporates:
         *  Constant: '<S362>/Calib'
         *  SignalConversion generated from: '<S1>/VeOFCR_b_CPIM_GreenLED_Cmd'
         */
        (void)Rte_Write_VeOFCR_b_CPIM_GreenLED_Cmd_Value(KeOFCR_b_OvrdValGreen);
    }
    else
    {
        /* Outport: '<Root>/VeOFCR_b_CPIM_GreenLED_Cmd' incorporates:
         *  SignalConversion generated from: '<S1>/VeOFCR_b_CPIM_GreenLED_Cmd'
         */
        (void)Rte_Write_VeOFCR_b_CPIM_GreenLED_Cmd_Value(OFCR_ac_B.Merge1);
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S361>/Calib'
     */
    if (KeOFCR_b_OvrdValEnblRed)
    {
        /* Outport: '<Root>/VeOFCR_b_CPIM_RedLED_Cmd' incorporates:
         *  Constant: '<S363>/Calib'
         *  SignalConversion generated from: '<S1>/VeOFCR_b_CPIM_RedLED_Cmd'
         */
        (void)Rte_Write_VeOFCR_b_CPIM_RedLED_Cmd_Value(KeOFCR_b_OvrdValRed);
    }
    else
    {
        /* Outport: '<Root>/VeOFCR_b_CPIM_RedLED_Cmd' incorporates:
         *  SignalConversion generated from: '<S1>/VeOFCR_b_CPIM_RedLED_Cmd'
         */
        (void)Rte_Write_VeOFCR_b_CPIM_RedLED_Cmd_Value(OFCR_ac_B.Merge);
    }

    /* End of Switch: '<S6>/Switch' */

    /* Switch: '<S6>/Switch21' incorporates:
     *  Constant: '<S348>/Calib'
     */
    if (KeOFCR_b_ChrgPortOT_DerateRq_Ovrd)
    {
        /* Outport: '<Root>/VeOFCR_b_ChrgPortOT_DerateRq' incorporates:
         *  Constant: '<S349>/Calib'
         *  SignalConversion generated from: '<S1>/VeOFCR_b_ChrgPortOT_DerateRq'
         */
        (void)Rte_Write_VeOFCR_b_ChrgPortOT_DerateRq_Value
            (KeOFCR_b_ChrgPortOT_DerateRq_Val);
    }
    else
    {
        /* Outport: '<Root>/VeOFCR_b_ChrgPortOT_DerateRq' incorporates:
         *  SignalConversion generated from: '<S1>/VeOFCR_b_ChrgPortOT_DerateRq'
         */
        (void)Rte_Write_VeOFCR_b_ChrgPortOT_DerateRq_Value
            (VeOFCR_b_ChrgPortDerate);
    }

    /* End of Switch: '<S6>/Switch21' */

    /* Switch: '<S6>/Switch19' incorporates:
     *  Constant: '<S350>/Calib'
     */
    if (KeOFCR_b_ChrgPortOT_StopChrg_Ovrd)
    {
        /* Outport: '<Root>/VeOFCR_b_ChrgPortOT_StopChrg' incorporates:
         *  Constant: '<S351>/Calib'
         *  SignalConversion generated from: '<S1>/VeOFCR_b_ChrgPortOT_StopChrg'
         */
        (void)Rte_Write_VeOFCR_b_ChrgPortOT_StopChrg_Value
            (KeOFCR_b_ChrgPortOT_StopChrg_Val);
    }
    else
    {
        /* Outport: '<Root>/VeOFCR_b_ChrgPortOT_StopChrg' incorporates:
         *  SignalConversion generated from: '<S1>/VeOFCR_b_ChrgPortOT_StopChrg'
         */
        (void)Rte_Write_VeOFCR_b_ChrgPortOT_StopChrg_Value(VeOFCR_b_ChrgPortStop);
    }

    /* End of Switch: '<S6>/Switch19' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCC'
     */
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/FALSE Constant'
     *  Constant: '<S221>/Calib'
     *  Logic: '<S10>/Logical3'
     *  Logic: '<S10>/Logical4'
     *  Logic: '<S10>/Logical9'
     *  Switch: '<S10>/Switch'
     */
    if (KeOFCR_b_PassThru_IntLghtSts)
    {
        rtb_Logical1_i = VeOFCR_b_InternalLightStsIn;
    }
    else if ((!rtb_AND_hm) && (!rtb_Logical1_i))
    {
        /* Switch: '<S10>/Switch' */
        rtb_Logical1_i = VeOFCR_b_InternalLightStsIn;
    }
    else
    {
        rtb_Logical1_i = false;
    }

    /* End of Switch: '<S10>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCO'
     */
    /* Outport: '<Root>/VeOFCR_b_InternalLightSts' incorporates:
     *  Gain: '<S384>/Gain'
     *  SignalConversion generated from: '<S1>/VeOFCR_b_InternalLightSts'
     */
    (void)Rte_Write_VeOFCR_b_InternalLightSts_Value((true) && rtb_Logical1_i);

    /* Switch: '<S6>/Switch16' incorporates:
     *  Constant: '<S338>/Calib'
     *  Constant: '<S364>/Calib'
     *  Switch: '<S11>/Switch1'
     */
    if (KeOFCR_b_BCIM_BlinkRate_Cmd_Ovrd)
    {
        tmp = KeOFCR_e_BCIM_BlinkRate_Cmd_Val;
    }
    else
    {
        tmp = VeOFCR_e_BCIM_BlinkRate_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_BCIM_Blink_Rate' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_BCIM_Blink_Rate'
     *  Switch: '<S6>/Switch16'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Blink_Rate_Value(tmp);

    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S344>/Calib'
     *  Constant: '<S370>/Calib'
     *  Switch: '<S11>/Switch5'
     */
    if (KeOFCR_b_BCIM_IndColor_Cmd_Ovrd)
    {
        tmp_0 = KeOFCR_e_BCIM_IndColor_Cmd_Val;
    }
    else
    {
        tmp_0 = VeOFCR_e_BCIM_Color_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_BCIM_ColorInd_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_BCIM_ColorInd_Cmd'
     *  Switch: '<S6>/Switch4'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_ColorInd_Cmd_Value(tmp_0);

    /* Switch: '<S6>/Switch17' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S365>/Calib'
     *  Switch: '<S11>/Switch7'
     */
    if (KeOFCR_b_BCIM_Ind1_Cmd_Ovrd)
    {
        tmp_1 = KeOFCR_e_BCIM_Ind1_Cmd_Val;
    }
    else
    {
        tmp_1 = VeOFCR_e_BCIM_Ind1_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind1_Set_St' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_BCIM_Ind1_Set_St'
     *  Switch: '<S6>/Switch17'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind1_Set_St_Value(tmp_1);

    /* Switch: '<S6>/Switch18' incorporates:
     *  Constant: '<S340>/Calib'
     *  Constant: '<S366>/Calib'
     *  Switch: '<S11>/Switch3'
     */
    if (KeOFCR_b_BCIM_Ind2_Cmd_Ovrd)
    {
        tmp_1 = KeOFCR_e_BCIM_Ind2_Cmd_Val;
    }
    else
    {
        tmp_1 = VeOFCR_e_BCIM_Ind2_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind2_Set_St' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_BCIM_Ind2_Set_St'
     *  Switch: '<S6>/Switch18'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind2_Set_St_Value(tmp_1);

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S341>/Calib'
     *  Constant: '<S367>/Calib'
     *  Switch: '<S11>/Switch9'
     */
    if (KeOFCR_b_BCIM_Ind3_Cmd_Ovrd)
    {
        tmp_1 = KeOFCR_e_BCIM_Ind3_Cmd_Val;
    }
    else
    {
        tmp_1 = VeOFCR_e_BCIM_Ind3_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind3_Set_St' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_BCIM_Ind3_Set_St'
     *  Switch: '<S6>/Switch3'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind3_Set_St_Value(tmp_1);

    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S342>/Calib'
     *  Constant: '<S368>/Calib'
     *  Switch: '<S11>/Switch15'
     */
    if (KeOFCR_b_BCIM_Ind4_Cmd_Ovrd)
    {
        tmp_1 = KeOFCR_e_BCIM_Ind4_Cmd_Val;
    }
    else
    {
        tmp_1 = VeOFCR_e_BCIM_Ind4_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind4_Set_St' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_BCIM_Ind4_Set_St'
     *  Switch: '<S6>/Switch5'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind4_Set_St_Value(tmp_1);

    /* Switch: '<S6>/Switch15' incorporates:
     *  Constant: '<S343>/Calib'
     *  Constant: '<S369>/Calib'
     *  Switch: '<S11>/Switch16'
     */
    if (KeOFCR_b_BCIM_Ind5_Cmd_Ovrd)
    {
        tmp_1 = KeOFCR_e_BCIM_Ind5_Cmd_Val;
    }
    else
    {
        tmp_1 = VeOFCR_e_BCIM_Ind5_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind5_Set_St' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_BCIM_Ind5_Set_St'
     *  Switch: '<S6>/Switch15'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind5_Set_St_Value(tmp_1);

    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S345>/Calib'
     *  Constant: '<S371>/Calib'
     *  Switch: '<S11>/Switch10'
     */
    if (KeOFCR_b_BlinkRate_Cmd_Ovrd)
    {
        tmp_2 = KeOFCR_e_BlinkRate_Cmd_Val;
    }
    else
    {
        tmp_2 = VeOFCR_e_CPIM_BlinkRate_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_BlinkRate_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_BlinkRate_Cmd'
     *  Switch: '<S6>/Switch6'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_BlinkRate_Cmd_Value(tmp_2);

    /* Switch: '<S6>/Switch7' incorporates:
     *  Constant: '<S357>/Calib'
     *  Constant: '<S379>/Calib'
     *  Switch: '<S11>/Switch12'
     */
    if (KeOFCR_b_IndColor_Cmd_Ovrd)
    {
        tmp_3 = KeOFCR_e_IndColor_Cmd_Val;
    }
    else
    {
        tmp_3 = VeOFCR_e_CPIM_Color_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_ColorInd_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_ColorInd_Cmd'
     *  Switch: '<S6>/Switch7'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_ColorInd_Cmd_Value(tmp_3);

    /* Switch: '<S6>/Switch13' incorporates:
     *  Constant: '<S346>/Calib'
     *  Constant: '<S372>/Calib'
     *  Switch: '<S11>/Switch14'
     */
    if (KeOFCR_b_CPIM_Icon1_CmdOutOvrd)
    {
        tmp_4 = KeOFCR_e_CPIM_Icon1_CmdOutVal;
    }
    else
    {
        tmp_4 = VeOFCR_e_Icon1_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_Icon1_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_Icon1_Cmd'
     *  Switch: '<S6>/Switch13'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Icon1_Cmd_Value(tmp_4);

    /* Switch: '<S6>/Switch14' incorporates:
     *  Constant: '<S347>/Calib'
     *  Constant: '<S373>/Calib'
     *  Switch: '<S11>/Switch13'
     */
    if (KeOFCR_b_CPIM_Icon2_CmdOutOvrd)
    {
        tmp_4 = KeOFCR_e_CPIM_Icon2_CmdOutVal;
    }
    else
    {
        tmp_4 = VeOFCR_e_Icon2_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_Icon2_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_Icon2_Cmd'
     *  Switch: '<S6>/Switch14'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Icon2_Cmd_Value(tmp_4);

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S352>/Calib'
     *  Constant: '<S374>/Calib'
     *  Switch: '<S11>/Switch2'
     */
    if (KeOFCR_b_Ind1_Cmd_Ovrd)
    {
        tmp_5 = KeOFCR_e_Ind1_Cmd_Val;
    }
    else
    {
        tmp_5 = VeOFCR_e_CPIM_Ind1_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind1_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_Ind1_Cmd'
     *  Switch: '<S6>/Switch8'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind1_Cmd_Value(tmp_5);

    /* Switch: '<S6>/Switch9' incorporates:
     *  Constant: '<S353>/Calib'
     *  Constant: '<S375>/Calib'
     *  Switch: '<S11>/Switch11'
     */
    if (KeOFCR_b_Ind2_Cmd_Ovrd)
    {
        tmp_5 = KeOFCR_e_Ind2_Cmd_Val;
    }
    else
    {
        tmp_5 = VeOFCR_e_CPIM_Ind2_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind2_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_Ind2_Cmd'
     *  Switch: '<S6>/Switch9'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind2_Cmd_Value(tmp_5);

    /* Switch: '<S6>/Switch10' incorporates:
     *  Constant: '<S354>/Calib'
     *  Constant: '<S376>/Calib'
     *  Switch: '<S11>/Switch4'
     */
    if (KeOFCR_b_Ind3_Cmd_Ovrd)
    {
        tmp_5 = KeOFCR_e_Ind3_Cmd_Val;
    }
    else
    {
        tmp_5 = VeOFCR_e_CPIM_Ind3_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind3_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_Ind3_Cmd'
     *  Switch: '<S6>/Switch10'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind3_Cmd_Value(tmp_5);

    /* Switch: '<S6>/Switch11' incorporates:
     *  Constant: '<S355>/Calib'
     *  Constant: '<S377>/Calib'
     *  Switch: '<S11>/Switch6'
     */
    if (KeOFCR_b_Ind4_Cmd_Ovrd)
    {
        tmp_5 = KeOFCR_e_Ind4_Cmd_Val;
    }
    else
    {
        tmp_5 = VeOFCR_e_CPIM_Ind4_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind4_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_Ind4_Cmd'
     *  Switch: '<S6>/Switch11'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind4_Cmd_Value(tmp_5);

    /* Switch: '<S6>/Switch12' incorporates:
     *  Constant: '<S356>/Calib'
     *  Constant: '<S378>/Calib'
     *  Switch: '<S11>/Switch8'
     */
    if (KeOFCR_b_Ind5_Cmd_Ovrd)
    {
        tmp_5 = KeOFCR_e_Ind5_Cmd_Val;
    }
    else
    {
        tmp_5 = VeOFCR_e_CPIM_Ind5_CmdInt;
    }

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind5_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOFCR_e_CPIM_Ind5_Cmd'
     *  Switch: '<S6>/Switch12'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind5_Cmd_Value(tmp_5);

    /* Outport: '<Root>/VeOFCR_k_ChargeReq_Reason' incorporates:
     *  Constant: '<S380>/Calib'
     *  Gain: '<S382>/Gain'
     *  SignalConversion generated from: '<S1>/VeOFCR_k_ChargeReq_Reason'
     */
    (void)Rte_Write_VeOFCR_k_ChargeReq_Reason_Value((sint16)(1 *
        KeOFCR_k_OvrdValChrgReqRsn));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/OFCR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_OFCR_FUNC

FUNC(void, OFCR_CODE) OFCR_PwrOff(void)
{

#if Rte_SysCon_Variant_OFCR_FUNC

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/OFCR_PwrOff' */
    /* Outport: '<Root>/NeOFCR_b_PluginLatchOverride_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOFCR_b_PluginLatchOverride'
     */
    (void)Rte_Write_NeOFCR_b_PluginLatchOverride_NeOFCR_b_PluginLatchOverride
        (OFCR_ac_DW.NeOFCR_b_PluginLatchOverride);

    /* Outport: '<Root>/NeOFCR_b_RadioRqLstVldStt_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOFCR_b_RadioRqLstVldStt'
     */
    (void)Rte_Write_NeOFCR_b_RadioRqLstVldStt_NeOFCR_b_RadioRqLstVldStt
        (OFCR_ac_DW.NeOFCR_b_RadioRqLstVldStt);

    /* End of Outputs for SubSystem: '<Root>/OFCR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, OFCR_CODE) OFCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/OFCR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* Outputs for Atomic SubSystem: '<S387>/Variant Subsystem' */
#if Rte_SysCon_Variant_OFCR_FUNC

    /* Outputs for Atomic SubSystem: '<S388>/FUNC' */
    /* VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_RedLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const1'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_RedL = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_GreenLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const2'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Gree = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_BlueLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const3'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Blue = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_k_ChargeReq_Reason_Out_Init' incorporates:
     *  Constant: '<S389>/Const4'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_k_ChargeReq = 0;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind1_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const5'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind1 = CeCITR_e_CPIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind2_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const6'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind2 = CeCITR_e_CPIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind3_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const7'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind3 = CeCITR_e_CPIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind4_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const8'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind4 = CeCITR_e_CPIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind5_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const9'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind5 = CeCITR_e_CPIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_BlinkRate_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const10'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Blin = CeCITR_e_CPIM_NoBlink;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const11'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Colo = CeCITR_e_CPIM_NoColor;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon1_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const12'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Icon = CeCITR_e_CPIM_Icon_OFF;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon2_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const13'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ic_j = CeCITR_e_CPIM_Icon_OFF;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind1_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const14'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind1 = CeCITR_e_BCIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind2_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const15'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind2 = CeCITR_e_BCIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind3_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const16'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind3 = CeCITR_e_BCIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind4_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const17'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind4 = CeCITR_e_BCIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind5_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const18'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind5 = CeCITR_e_BCIM_Ind_Off;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Blink_Rate_Out_Init' incorporates:
     *  Constant: '<S389>/Const19'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Blin = CeCITR_e_BCIM_NoBlink;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_DerateRq_Out_Init' incorporates:
     *  Constant: '<S389>/Const20'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPortO = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_StopChrg_Out_Init' incorporates:
     *  Constant: '<S389>/Const21'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPor_d = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_I_ChrgPortOTCrnt_Out_Init' incorporates:
     *  Constant: '<S389>/Const22'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_I_ChrgPortO = 0.0F;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_InternalLightSts_Out_Init' incorporates:
     *  Constant: '<S389>/Const23'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_InternalL = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_BckLghtCmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const24'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_BckLghtCm = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const25'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Colo = CeCITR_e_BCIM_NoColor;

    /* End of Outputs for SubSystem: '<S388>/FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S388>/NF' */
    /* VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_RedLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S396>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_RedL = KeOFCR_b_OvrdValRed;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_GreenLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S395>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Gree = KeOFCR_b_OvrdValGreen;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_BlueLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S394>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Blue = KeOFCR_b_OvrdValBlue;

    /* VariantMerge generated from: '<S388>/VeOFCR_k_ChargeReq_Reason_Out_Init' incorporates:
     *  Constant: '<S413>/Calib'
     *  Gain: '<S414>/Gain'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_k_ChargeReq = (sint16)(1 *
        KeOFCR_k_OvrdValChrgReqRsn);

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind1_Cmd_Out_Init' incorporates:
     *  Constant: '<S407>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind1 = KeOFCR_e_Ind1_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind2_Cmd_Out_Init' incorporates:
     *  Constant: '<S408>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind2 = KeOFCR_e_Ind2_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind3_Cmd_Out_Init' incorporates:
     *  Constant: '<S409>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind3 = KeOFCR_e_Ind3_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind4_Cmd_Out_Init' incorporates:
     *  Constant: '<S410>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind4 = KeOFCR_e_Ind4_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind5_Cmd_Out_Init' incorporates:
     *  Constant: '<S411>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind5 = KeOFCR_e_Ind5_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_BlinkRate_Cmd_Out_Init' incorporates:
     *  Constant: '<S404>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Blin =
        KeOFCR_e_BlinkRate_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S412>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Colo =
        KeOFCR_e_IndColor_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon1_Cmd_Out_Init' incorporates:
     *  Constant: '<S405>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Icon =
        KeOFCR_e_CPIM_Icon1_CmdOutVal;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon2_Cmd_Out_Init' incorporates:
     *  Constant: '<S406>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ic_j =
        KeOFCR_e_CPIM_Icon2_CmdOutVal;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind1_Set_St_Out_Init' incorporates:
     *  Constant: '<S398>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind1 =
        KeOFCR_e_BCIM_Ind1_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind2_Set_St_Out_Init' incorporates:
     *  Constant: '<S399>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind2 =
        KeOFCR_e_BCIM_Ind2_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind3_Set_St_Out_Init' incorporates:
     *  Constant: '<S400>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind3 =
        KeOFCR_e_BCIM_Ind3_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind4_Set_St_Out_Init' incorporates:
     *  Constant: '<S401>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind4 =
        KeOFCR_e_BCIM_Ind4_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind5_Set_St_Out_Init' incorporates:
     *  Constant: '<S402>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind5 =
        KeOFCR_e_BCIM_Ind5_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Blink_Rate_Out_Init' incorporates:
     *  Constant: '<S397>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Blin =
        KeOFCR_e_BCIM_BlinkRate_Cmd_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_DerateRq_Out_Init' incorporates:
     *  Constant: '<S392>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPortO =
        KeOFCR_b_ChrgPortOT_DerateRq_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_StopChrg_Out_Init' incorporates:
     *  Constant: '<S393>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPor_d =
        KeOFCR_b_ChrgPortOT_StopChrg_Val;

    /* VariantMerge generated from: '<S388>/VeOFCR_I_ChrgPortOTCrnt_Out_Init' incorporates:
     *  Constant: '<S391>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_I_ChrgPortO = KeOFCR_I_ChrgPortOTCrnt;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_InternalLightSts_Out_Init' incorporates:
     *  Constant: '<S390>/FALSE Constant3'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_InternalL = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_b_BckLghtCmd_Out_Init' incorporates:
     *  Constant: '<S390>/FALSE Constant1'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_BckLghtCm = false;

    /* VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S403>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Colo =
        KeOFCR_e_BCIM_IndColor_Cmd_Val;

    /* End of Outputs for SubSystem: '<S388>/NF' */
#endif

    /* End of Outputs for SubSystem: '<S387>/Variant Subsystem' */
#if Rte_SysCon_Variant_OFCR_FUNC

    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S386>/NeOFCR_b_RadioRqLstVldStt' incorporates:
     *  Inport: '<Root>/NeOFCR_b_RadioRqLstVldStt_PM_In'
     */
    (void)Rte_Read_NeOFCR_b_RadioRqLstVldStt_Rx_NeOFCR_b_RadioRqLstVldStt
        (&OFCR_ac_DW.NeOFCR_b_RadioRqLstVldStt);

    /* DataStoreWrite: '<S386>/NeOFCR_b_PluginLatchOverride' incorporates:
     *  Inport: '<Root>/NeOFCR_b_PluginLatchOverride_PM_In'
     */
    (void)Rte_Read_NeOFCR_b_PluginLatchOverride_Rx_NeOFCR_b_PluginLatchOverride(
        &OFCR_ac_DW.NeOFCR_b_PluginLatchOverride);

    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeOFCR_I_ChrgPortOTCrnt' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_I_ChrgPortOTCrnt_Out_Init'
     */
    (void)Rte_Write_VeOFCR_I_ChrgPortOTCrnt_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_I_ChrgPortO);

    /* Outport: '<Root>/VeOFCR_b_BckLghtCmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_b_BckLghtCmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_b_BckLghtCmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_b_BckLghtCm);

    /* Outport: '<Root>/VeOFCR_b_CPIM_BlueLED_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_b_CPIM_BlueLED_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_b_CPIM_BlueLED_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Blue);

    /* Outport: '<Root>/VeOFCR_b_CPIM_GreenLED_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_b_CPIM_GreenLED_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_b_CPIM_GreenLED_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Gree);

    /* Outport: '<Root>/VeOFCR_b_CPIM_RedLED_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_b_CPIM_RedLED_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_b_CPIM_RedLED_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_RedL);

    /* Outport: '<Root>/VeOFCR_b_ChrgPortOT_DerateRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_b_ChrgPortOT_DerateRq_Out_Init'
     */
    (void)Rte_Write_VeOFCR_b_ChrgPortOT_DerateRq_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPortO);

    /* Outport: '<Root>/VeOFCR_b_ChrgPortOT_StopChrg' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_b_ChrgPortOT_StopChrg_Out_Init'
     */
    (void)Rte_Write_VeOFCR_b_ChrgPortOT_StopChrg_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPor_d);

    /* Outport: '<Root>/VeOFCR_b_InternalLightSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_b_InternalLightSts_Out_Init'
     */
    (void)Rte_Write_VeOFCR_b_InternalLightSts_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_b_InternalL);

    /* Outport: '<Root>/VeOFCR_e_BCIM_Blink_Rate' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_BCIM_Blink_Rate_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Blink_Rate_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Blink_Rate_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Blin);

    /* Outport: '<Root>/VeOFCR_e_BCIM_ColorInd_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_BCIM_ColorInd_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_ColorInd_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_ColorInd_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Colo);

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind1_Set_St' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_BCIM_Ind1_Set_St_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind1_Set_St_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind1_Set_St_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind1);

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind2_Set_St' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_BCIM_Ind2_Set_St_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind2_Set_St_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind2_Set_St_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind2);

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind3_Set_St' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_BCIM_Ind3_Set_St_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind3_Set_St_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind3_Set_St_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind3);

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind4_Set_St' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_BCIM_Ind4_Set_St_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind4_Set_St_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind4_Set_St_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind4);

    /* Outport: '<Root>/VeOFCR_e_BCIM_Ind5_Set_St' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_BCIM_Ind5_Set_St_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind5_Set_St_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind5_Set_St_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind5);

    /* Outport: '<Root>/VeOFCR_e_CPIM_BlinkRate_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_BlinkRate_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_BlinkRate_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_BlinkRate_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Blin);

    /* Outport: '<Root>/VeOFCR_e_CPIM_ColorInd_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_ColorInd_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_ColorInd_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_ColorInd_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Colo);

    /* Outport: '<Root>/VeOFCR_e_CPIM_Icon1_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_Icon1_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon1_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Icon1_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Icon);

    /* Outport: '<Root>/VeOFCR_e_CPIM_Icon2_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_Icon2_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon2_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Icon2_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ic_j);

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind1_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_Ind1_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind1_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind1_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind1);

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind2_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_Ind2_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind2_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind2_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind2);

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind3_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_Ind3_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind3_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind3_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind3);

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind4_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_Ind4_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind4_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind4_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind4);

    /* Outport: '<Root>/VeOFCR_e_CPIM_Ind5_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_e_CPIM_Ind5_Cmd_Out_Init'
     *  VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind5_Cmd_Out_Init'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind5_Cmd_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind5);

    /* Outport: '<Root>/VeOFCR_k_ChargeReq_Reason' incorporates:
     *  SignalConversion generated from: '<S3>/VeOFCR_k_ChargeReq_Reason_Out_Init'
     */
    (void)Rte_Write_VeOFCR_k_ChargeReq_Reason_Value
        (OFCR_ac_B.VariantMergeForOutportVeOFCR_k_ChargeReq);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, OFCR_CODE) OFCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/OFCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for Atomic SubSystem: '<S387>/Variant Subsystem' */
#if Rte_SysCon_Variant_OFCR_FUNC

    /* SystemInitialize for Atomic SubSystem: '<S388>/FUNC' */
    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_RedLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const1'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_RedL = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_GreenLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const2'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Gree = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_BlueLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const3'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Blue = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind1_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const5'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind1 = CeCITR_e_CPIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind2_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const6'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind2 = CeCITR_e_CPIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind3_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const7'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind3 = CeCITR_e_CPIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind4_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const8'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind4 = CeCITR_e_CPIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind5_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const9'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind5 = CeCITR_e_CPIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_BlinkRate_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const10'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Blin = CeCITR_e_CPIM_NoBlink;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const11'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Colo = CeCITR_e_CPIM_NoColor;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon1_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const12'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Icon = CeCITR_e_CPIM_Icon_OFF;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon2_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const13'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ic_j = CeCITR_e_CPIM_Icon_OFF;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind1_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const14'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind1 = CeCITR_e_BCIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind2_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const15'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind2 = CeCITR_e_BCIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind3_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const16'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind3 = CeCITR_e_BCIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind4_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const17'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind4 = CeCITR_e_BCIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind5_Set_St_Out_Init' incorporates:
     *  Constant: '<S389>/Const18'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind5 = CeCITR_e_BCIM_Ind_Off;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Blink_Rate_Out_Init' incorporates:
     *  Constant: '<S389>/Const19'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Blin = CeCITR_e_BCIM_NoBlink;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_DerateRq_Out_Init' incorporates:
     *  Constant: '<S389>/Const20'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPortO = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_StopChrg_Out_Init' incorporates:
     *  Constant: '<S389>/Const21'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPor_d = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_I_ChrgPortOTCrnt_Out_Init' incorporates:
     *  Constant: '<S389>/Const22'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_I_ChrgPortO = 0.0F;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_InternalLightSts_Out_Init' incorporates:
     *  Constant: '<S389>/Const23'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_InternalL = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_BckLghtCmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const24'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_BckLghtCm = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S389>/Const25'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Colo = CeCITR_e_BCIM_NoColor;

    /* End of SystemInitialize for SubSystem: '<S388>/FUNC' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S388>/NF' */
    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_RedLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S396>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_RedL = KeOFCR_b_OvrdValRed;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_GreenLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S395>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Gree = KeOFCR_b_OvrdValGreen;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_CPIM_BlueLED_Cmd_Out_Init' incorporates:
     *  Constant: '<S394>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_CPIM_Blue = KeOFCR_b_OvrdValBlue;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind1_Cmd_Out_Init' incorporates:
     *  Constant: '<S407>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind1 = KeOFCR_e_Ind1_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind2_Cmd_Out_Init' incorporates:
     *  Constant: '<S408>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind2 = KeOFCR_e_Ind2_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind3_Cmd_Out_Init' incorporates:
     *  Constant: '<S409>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind3 = KeOFCR_e_Ind3_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind4_Cmd_Out_Init' incorporates:
     *  Constant: '<S410>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind4 = KeOFCR_e_Ind4_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Ind5_Cmd_Out_Init' incorporates:
     *  Constant: '<S411>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ind5 = KeOFCR_e_Ind5_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_BlinkRate_Cmd_Out_Init' incorporates:
     *  Constant: '<S404>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Blin =
        KeOFCR_e_BlinkRate_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S412>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Colo =
        KeOFCR_e_IndColor_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon1_Cmd_Out_Init' incorporates:
     *  Constant: '<S405>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Icon =
        KeOFCR_e_CPIM_Icon1_CmdOutVal;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_CPIM_Icon2_Cmd_Out_Init' incorporates:
     *  Constant: '<S406>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_CPIM_Ic_j =
        KeOFCR_e_CPIM_Icon2_CmdOutVal;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind1_Set_St_Out_Init' incorporates:
     *  Constant: '<S398>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind1 =
        KeOFCR_e_BCIM_Ind1_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind2_Set_St_Out_Init' incorporates:
     *  Constant: '<S399>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind2 =
        KeOFCR_e_BCIM_Ind2_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind3_Set_St_Out_Init' incorporates:
     *  Constant: '<S400>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind3 =
        KeOFCR_e_BCIM_Ind3_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind4_Set_St_Out_Init' incorporates:
     *  Constant: '<S401>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind4 =
        KeOFCR_e_BCIM_Ind4_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Ind5_Set_St_Out_Init' incorporates:
     *  Constant: '<S402>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Ind5 =
        KeOFCR_e_BCIM_Ind5_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_Blink_Rate_Out_Init' incorporates:
     *  Constant: '<S397>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Blin =
        KeOFCR_e_BCIM_BlinkRate_Cmd_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_DerateRq_Out_Init' incorporates:
     *  Constant: '<S392>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPortO =
        KeOFCR_b_ChrgPortOT_DerateRq_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_ChrgPortOT_StopChrg_Out_Init' incorporates:
     *  Constant: '<S393>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_ChrgPor_d =
        KeOFCR_b_ChrgPortOT_StopChrg_Val;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_I_ChrgPortOTCrnt_Out_Init' incorporates:
     *  Constant: '<S391>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_I_ChrgPortO = KeOFCR_I_ChrgPortOTCrnt;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_InternalLightSts_Out_Init' incorporates:
     *  Constant: '<S390>/FALSE Constant3'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_InternalL = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_b_BckLghtCmd_Out_Init' incorporates:
     *  Constant: '<S390>/FALSE Constant1'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_b_BckLghtCm = false;

    /* Start for VariantMerge generated from: '<S388>/VeOFCR_e_BCIM_ColorInd_Cmd_Out_Init' incorporates:
     *  Constant: '<S403>/Calib'
     */
    OFCR_ac_B.VariantMergeForOutportVeOFCR_e_BCIM_Colo =
        KeOFCR_e_BCIM_IndColor_Cmd_Val;

    /* End of SystemInitialize for SubSystem: '<S388>/NF' */
#endif

    /* End of SystemInitialize for SubSystem: '<S387>/Variant Subsystem' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_OFCR_FUNC

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/OFCR_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OFCC'
     */
    /* SystemInitialize for Merge: '<S71>/Merge' */
    OFCR_ac_B.Merge = false;

    /* SystemInitialize for Merge: '<S71>/Merge1' */
    OFCR_ac_B.Merge1 = false;

    /* SystemInitialize for Merge: '<S71>/Merge3' */
    OFCR_ac_B.Merge3 = false;

    /* SystemInitialize for Merge: '<S155>/Merge' */
    VeOFCR_b_TestRed = false;

    /* SystemInitialize for Merge: '<S155>/Merge1' */
    VeOFCR_b_TestGreen = false;

    /* SystemInitialize for Merge: '<S155>/Merge2' */
    VeOFCR_b_TestBlue = false;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/OFCR_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeOFCR_b_CPIM_RedLED_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeOFCR_b_CPIM_RedLED_Cmd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_b_CPIM_GreenLED_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeOFCR_b_CPIM_GreenLED_Cmd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_b_CPIM_BlueLED_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeOFCR_b_CPIM_BlueLED_Cmd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_k_ChargeReq_Reason' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    (void)Rte_Write_VeOFCR_k_ChargeReq_Reason_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_Ind1_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind1_Cmd_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_Ind2_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_6'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind2_Cmd_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_Ind3_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_7'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind3_Cmd_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_Ind4_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_8'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind4_Cmd_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_Ind5_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_9'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Ind5_Cmd_Value(CeCITR_e_CPIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_BlinkRate_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_BlinkRate_Cmd_Value(CeCITR_e_CPIM_NoBlink);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_ColorInd_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_11'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_ColorInd_Cmd_Value(CeCITR_e_CPIM_NoColor);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_Icon1_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Icon1_Cmd_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_CPIM_Icon2_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_13'
     */
    (void)Rte_Write_VeOFCR_e_CPIM_Icon2_Cmd_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_BCIM_Ind1_Set_St' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind1_Set_St_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_BCIM_Ind2_Set_St' incorporates:
     *  Merge: '<Root>/Merge_Outport_15'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind2_Set_St_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_BCIM_Ind3_Set_St' incorporates:
     *  Merge: '<Root>/Merge_Outport_16'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind3_Set_St_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_BCIM_Ind4_Set_St' incorporates:
     *  Merge: '<Root>/Merge_Outport_17'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind4_Set_St_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_BCIM_Ind5_Set_St' incorporates:
     *  Merge: '<Root>/Merge_Outport_18'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Ind5_Set_St_Value(CeCITR_e_BCIM_Ind_Off);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_BCIM_Blink_Rate' incorporates:
     *  Merge: '<Root>/Merge_Outport_19'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_Blink_Rate_Value(CeCITR_e_BCIM_NoBlink);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_b_ChrgPortOT_DerateRq' incorporates:
     *  Merge: '<Root>/Merge_Outport_20'
     */
    (void)Rte_Write_VeOFCR_b_ChrgPortOT_DerateRq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_b_ChrgPortOT_StopChrg' incorporates:
     *  Merge: '<Root>/Merge_Outport_21'
     */
    (void)Rte_Write_VeOFCR_b_ChrgPortOT_StopChrg_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_I_ChrgPortOTCrnt' incorporates:
     *  Merge: '<Root>/Merge_Outport_22'
     */
    (void)Rte_Write_VeOFCR_I_ChrgPortOTCrnt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_b_InternalLightSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_23'
     */
    (void)Rte_Write_VeOFCR_b_InternalLightSts_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_b_BckLghtCmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_24'
     */
    (void)Rte_Write_VeOFCR_b_BckLghtCmd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeOFCR_e_BCIM_ColorInd_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_25'
     */
    (void)Rte_Write_VeOFCR_e_BCIM_ColorInd_Cmd_Value(CeCITR_e_BCIM_NoColor);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
