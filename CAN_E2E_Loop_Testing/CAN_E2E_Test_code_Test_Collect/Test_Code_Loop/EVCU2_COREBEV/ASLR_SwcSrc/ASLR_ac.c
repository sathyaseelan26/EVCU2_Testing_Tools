/*
 * File: ASLR_ac.c
 *
 * Code generated for Simulink model 'ASLR_ac'.
 *
 * Model version                  : 9.136
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:07:02 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ASLR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S27>/ASL_States_Chart' */
#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Act_without_spd_limiting ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Active              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Active_with_ramp    ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Active_with_speed_limiting ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Deactivated         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Enabled             ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Engaged             ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Fault               ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Not_Actuable        ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_OFF                 ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_ON                  ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Offline_Enabled     ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Override_KickDown   ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_Overspeed           ((uint8)4U)
#endif

/* Named constants for Chart: '<S364>/ISA_NOT_AVAIL_SPEED_TOO_HIGH_states' */
#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_TSR_WarningOff      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_TSR_WarningOn       ((uint8)2U)
#endif

/* Named constants for Chart: '<S366>/ISA_NOT_AVAIL_TSR_NOT_AVAIL_states' */
#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_TSR_Warning_Off     ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_TSR_Warning_On      ((uint8)2U)
#endif

/* Named constants for Chart: '<S367>/SL_NOT_AVAIL_HDC_Set' */
#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_HDC_WarningOff      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ASLR_3
#define ASLR_ac_IN_HDC_WarningOn       ((uint8)2U)
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
#define START_SEC_CALIB_UNSPECIFIED_ASLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint16, ASLR_VAR_INIT) HaASLR_i_DriveMdOvrdRemapping[5] =
{
    0U, 1U, 2U, 3U, 4U
} ;                                    /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_BypassVehSpdFaultASLAct =
    0;                                 /* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_HDCCtrlDeactivation = 0;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_HMICamelMdEnbl = 1;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_HMICamelMdPopUpOnlyEnbl =
    1;                                 /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_HMITurtleMdEnbl = 1;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_M182ProgrammPrsnc = 0;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_VF_ServiceToolSpdSel = 0;/* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) HeASLR_b_x250ProgrammPrsnc = 0;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) HeASLR_t_dT = 0.01F;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KaASLR_i_DispSpdSign[256] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F,
    12.0F, 13.0F, 14.0F, 15.0F, 16.0F, 17.0F, 18.0F, 19.0F, 20.0F, 21.0F, 22.0F,
    23.0F, 24.0F, 25.0F, 26.0F, 27.0F, 28.0F, 29.0F, 30.0F, 31.0F, 32.0F, 33.0F,
    34.0F, 35.0F, 36.0F, 37.0F, 38.0F, 39.0F, 40.0F, 41.0F, 42.0F, 43.0F, 44.0F,
    45.0F, 46.0F, 47.0F, 48.0F, 49.0F, 50.0F, 51.0F, 52.0F, 53.0F, 54.0F, 55.0F,
    56.0F, 57.0F, 58.0F, 59.0F, 60.0F, 61.0F, 62.0F, 63.0F, 64.0F, 65.0F, 66.0F,
    67.0F, 68.0F, 69.0F, 70.0F, 71.0F, 72.0F, 73.0F, 74.0F, 75.0F, 76.0F, 77.0F,
    78.0F, 79.0F, 80.0F, 81.0F, 82.0F, 83.0F, 84.0F, 85.0F, 86.0F, 87.0F, 88.0F,
    89.0F, 90.0F, 91.0F, 92.0F, 93.0F, 94.0F, 95.0F, 96.0F, 97.0F, 98.0F, 99.0F,
    100.0F, 101.0F, 102.0F, 103.0F, 104.0F, 105.0F, 106.0F, 107.0F, 108.0F,
    109.0F, 110.0F, 111.0F, 112.0F, 113.0F, 114.0F, 115.0F, 116.0F, 117.0F,
    118.0F, 119.0F, 120.0F, 121.0F, 122.0F, 123.0F, 124.0F, 125.0F, 126.0F,
    127.0F, 128.0F, 129.0F, 130.0F, 131.0F, 132.0F, 133.0F, 134.0F, 135.0F,
    136.0F, 137.0F, 138.0F, 139.0F, 140.0F, 141.0F, 142.0F, 143.0F, 144.0F,
    145.0F, 146.0F, 147.0F, 148.0F, 149.0F, 150.0F, 151.0F, 152.0F, 153.0F,
    154.0F, 155.0F, 156.0F, 157.0F, 158.0F, 159.0F, 160.0F, 161.0F, 162.0F,
    163.0F, 164.0F, 165.0F, 166.0F, 167.0F, 168.0F, 169.0F, 170.0F, 171.0F,
    172.0F, 173.0F, 174.0F, 175.0F, 176.0F, 177.0F, 178.0F, 179.0F, 180.0F,
    181.0F, 182.0F, 183.0F, 184.0F, 185.0F, 186.0F, 187.0F, 188.0F, 189.0F,
    190.0F, 191.0F, 192.0F, 193.0F, 194.0F, 195.0F, 196.0F, 197.0F, 198.0F,
    199.0F, 200.0F, 201.0F, 202.0F, 203.0F, 204.0F, 205.0F, 206.0F, 207.0F,
    208.0F, 209.0F, 210.0F, 211.0F, 212.0F, 213.0F, 214.0F, 215.0F, 216.0F,
    217.0F, 218.0F, 219.0F, 220.0F, 221.0F, 222.0F, 223.0F, 224.0F, 225.0F,
    226.0F, 227.0F, 228.0F, 229.0F, 230.0F, 231.0F, 232.0F, 233.0F, 234.0F,
    235.0F, 236.0F, 237.0F, 238.0F, 239.0F, 240.0F, 241.0F, 242.0F, 243.0F,
    244.0F, 245.0F, 246.0F, 247.0F, 248.0F, 249.0F, 250.0F, 251.0F, 252.0F,
    253.0F, 254.0F, 255.0F
} ;                                    /* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_Cnt_ASLAcclGrdActTime =
    5.0F;                              /* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint16, ASLR_VAR_INIT) KeASLR_Cnt_DspSpdLimStsDly = 0U;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint16, ASLR_VAR_INIT) KeASLR_Cnt_OvrRevPtn_ActIniDly =
    100U;                              /* Referenced by: '<S406>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint16, ASLR_VAR_INIT) KeASLR_Cnt_STSLDeactTime = 240U;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_M_ASL_ItermLimit = 1000.0F;/* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_M_MgateMinTrq_OvrrdVal =
    0.0F;                              /* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_M_OutTorqReqHTDR_OvrSpd_OvrrdVal = 0.0F;/* Referenced by: '<S464>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_M_OutTorqReqModHH_OvrrdVal =
    0.0F;                              /* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_P_ASL_MaxPwr_Ofst = 0.0F;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_P_ASL_MinPwr_Ofst = 0.0F;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_P_PtcPdlMaxPwr_OvrrdVal =
    0.0F;                              /* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_Pct_ASLKickdownThresh =
    80.0F;                             /* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_Pct_ASLOvrrdActThresh =
    70.0F;                             /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_Pct_ASLOvrrdDeactThresh =
    50.0F;                             /* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_Pct_AccelPdlDrvMdOvrrdKickdownLSP = 85.0F;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_Pct_AccelPdlDrvMdOvrrdKickdownRSP = 80.0F;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_Pct_AccelPedalEffPosition_OvrrdVal = 0.0F;/* Referenced by: '<S467>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_Pct_ProxiSpdomtrTol_OvrrdVal = 0.0F;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ACCSystemStsFA_OvrrdEnbl =
    0;                                 /* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ACCSystemStsFA_OvrrdVal =
    0;                                 /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ACCSystemSts_OvrrdEnbl =
    0;                                 /* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ACC_OnFA_OvrrdEnbl = 0;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ACC_OnFA_OvrrdVal = 0;/* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ACC_On_OvrrdEnbl = 0;/* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ACC_On_OvrrdVal = 0;/* Referenced by: '<S475>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_Abarth595_DMTMSpdLimArbEnbl = 0;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_AccelPedalEffPosition_OvrrdEnbl = 0;/* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_Arb_TerrainMd_OvrrdEnbl =
    0;                                 /* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_Autonomy_Lvl_OvrrdEnbl =
    0;                                 /* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_AxleTrqRespType_OvrrdEnbl
    = 0;                               /* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CC_Logic_OvrrdEnbl = 0;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CanSigVehSpdFA_OvrrdEnbl =
    0;                                 /* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CanSigVehSpdFA_OvrrdVal =
    0;                                 /* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CanSigVehSpd_OvrrdEnbl =
    0;                                 /* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcAccelStsFA_OvrrdEnbl =
    0;                                 /* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcAccelStsFA_OvrrdVal = 0;/* Referenced by: '<S485>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcAccelSts_OvrrdEnbl = 0;/* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcAccelSts_OvrrdVal = 0;/* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcCancelSwFA_OvrrdEnbl =
    0;                                 /* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcCancelSwFA_OvrrdVal = 0;/* Referenced by: '<S489>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcCancelSw_OvrrdEnbl = 0;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcCancelSw_OvrrdVal = 0;/* Referenced by: '<S491>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcDecelStsFA_OvrrdEnbl =
    0;                                 /* Referenced by: '<S492>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcDecelStsFA_OvrrdVal = 0;/* Referenced by: '<S493>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcDecelSts_OvrrdEnbl = 0;/* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcDecelSts_OvrrdVal = 0;/* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcEnabled_OvrrdEnbl = 0;/* Referenced by: '<S496>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcEnabled_OvrrdVal = 0;/* Referenced by: '<S497>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcEngaged_OvrrdEnbl = 0;/* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcEngaged_OvrrdVal = 0;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcFailStsFA_OvrrdEnbl = 0;/* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcFailStsFA_OvrrdVal = 0;/* Referenced by: '<S501>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcFailSts_OvrrdEnbl = 0;/* Referenced by: '<S502>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcFailSts_OvrrdVal = 0;/* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcOnOffSts_OvrrdEnbl = 0;/* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcOnOffSts_OvrrdVal = 0;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcResumeSwFA_OvrrdEnbl =
    0;                                 /* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcResumeSwFA_OvrrdVal = 0;/* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcResumeSw_OvrrdEnbl = 0;/* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_CcResumeSw_OvrrdVal = 0;/* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_DrvMdStat_OvrrdEnbl = 0;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_Dsbl_SL_PID_OvrrdEnbl = 0;/* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_Dsbl_SL_PID_OvrrdVal = 0;/* Referenced by: '<S512>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_DsplydSpdLimStsFA_OvrrdEnbl = 0;/* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_DsplydSpdLimStsFA_OvrrdVal = 0;/* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_DsplydSpdLimSts_OvrrdEnbl
    = 0;                               /* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_EnblHomSpdLim = 0;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_GRAR_DisableASL_OvrrdEnbl
    = 0;                               /* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_GRAR_DisableASL_OvrrdVal =
    0;                                 /* Referenced by: '<S558>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDCCtrlDeactivationEnbl =
    1;                                 /* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDCEnabledCAN_OvrrdEnbl =
    0;                                 /* Referenced by: '<S516>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDCEnabledCAN_OvrrdVal =
    0;                                 /* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDC_FA_OvrrdEnbl = 0;/* Referenced by: '<S518>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDC_FA_OvrrdVal = 0;/* Referenced by: '<S519>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDC_Proxi_OvrrdEnbl = 0;/* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDC_Proxi_OvrrdVal = 0;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HDC_Status_OvrrdEnbl = 0;/* Referenced by: '<S522>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_HomSpdLim_OvrrdEnbl = 0;/* Referenced by: '<S523>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_InhibitActvSpdLmtr_OvrrdEnbl = 0;/* Referenced by: '<S524>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_InhibitActvSpdLmtr_OvrrdVal = 0;/* Referenced by: '<S525>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_LP3Presence = 1;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_LaneCenteringOnOffStsFA_OvrrdEnbl = 0;/* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_LaneCenteringOnOffStsFA_OvrrdVal = 0;/* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_LaneCenteringOnOffSts_OvrrdEnbl = 0;/* Referenced by: '<S528>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_LaneCenteringOnOffSts_OvrrdVal = 0;/* Referenced by: '<S529>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_LatchASLSetSpdLim = 1;/* Referenced by:
                                                                      * '<S161>/Calib'
                                                                      * '<S311>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_Lv1CrusSwStuckFailed_OvrrdEnbl = 0;/* Referenced by: '<S530>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_Lv1CrusSwStuckFailed_OvrrdVal = 0;/* Referenced by: '<S531>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_Lv1PVMode_OvrrdEnbl = 0;/* Referenced by: '<S532>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_MgateMinTrq_OvrrdEnbl = 0;/* Referenced by: '<S533>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_NewRejStrategyEnbl = 0;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_OperationalModeStsOvrrdEnbl = 0;/* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_OutTorqReqHTDR_OvrSpd_OvrrdEnbl = 0;/* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_OutTorqReqModHH_OvrrdEnbl
    = 0;                               /* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_PMM_PowerMode_OvrrdEnbl =
    0;                                 /* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_PRNDL_Coeff_OvrrdEnbl = 0;/* Referenced by: '<S538>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_PrimNoSgndFltrd_OvrrdEnbl
    = 0;                               /* Referenced by: '<S539>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiACC_OvrrdEnbl = 0;/* Referenced by: '<S540>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiCC_OvrrdEnbl = 0;/* Referenced by: '<S541>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiCC_OvrrdVal = 0;/* Referenced by: '<S542>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_ProxiIncreasingSpdCnst_OvrrdEnbl = 0;/* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiNAVPrsnc_OvrrdEnbl =
    0;                                 /* Referenced by: '<S544>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiNAVPrsnc_OvrrdVal =
    0;                                 /* Referenced by: '<S545>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiSpdLimiter_OvrrdEnbl
    = 0;                               /* Referenced by: '<S546>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiSpdLimiter_OvrrdVal =
    0;                                 /* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ProxiSpdomtrTol_OvrrdEnbl
    = 0;                               /* Referenced by: '<S548>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_ProxiTrafficSignRcgntn_OvrrdEnbl = 0;/* Referenced by: '<S549>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_ProxiTrafficSignRcgntn_OvrrdVal = 0;/* Referenced by: '<S550>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_PtcPdlMaxPwr_OvrrdEnbl =
    0;                                 /* Referenced by: '<S551>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_RRCCPROXI_OvrrdEnbl = 0;/* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_RRCCPROXI_OvrrdVal = 0;/* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_RRCCSw_OvrrdEnbl = 0;/* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_RrAxleTrqRespType_OvrrdEnbl = 0;/* Referenced by: '<S557>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_ShippingMode_OvrrdEnbl =
    0;                                 /* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SignCaptMode_OvrrdEnbl =
    0;                                 /* Referenced by: '<S561>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SignCaptMode_OvrrdVal = 0;/* Referenced by: '<S562>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_SpdLimEEProgStatus_OvrrdEnbl = 0;/* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_SpdLmtrOnOffStsFA_OvrrdEnbl = 0;/* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_SpdLmtrOnOffStsFA_OvrrdVal = 0;/* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SpdLmtrOnOffSts_OvrrdEnbl
    = 0;                               /* Referenced by: '<S566>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SpdLmtrOnOffSts_OvrrdVal =
    0;                                 /* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SpdUnitTSR_Enbl = 1;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SpeedUnitFA_OvrrdEnbl = 0;/* Referenced by: '<S568>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SpeedUnitFA_OvrrdVal = 0;/* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SpeedUnit_OvrrdEnbl = 0;/* Referenced by: '<S570>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_SpeedUnit_OvrrdVal = 0;/* Referenced by: '<S571>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_TSRAutoSpdLimRejVehSpd_Enbl = 1;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TSRAuto_ASLEnggdCondEnbl =
    1;                                 /* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TSRCaptCondAutoEnbl = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TSRStsFA_OvrrdEnbl = 0;/* Referenced by: '<S572>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TSRStsFA_OvrrdVal = 0;/* Referenced by: '<S573>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TSRSts_OvrrdEnbl = 0;/* Referenced by: '<S574>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TSR_Req_OvrrdEnbl = 0;/* Referenced by: '<S575>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TSR_Req_OvrrdVal = 0;/* Referenced by: '<S576>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TerrainMd_OvrrdEnbl = 0;/* Referenced by: '<S577>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_TurtleMdSts_OvrrdEnbl = 0;/* Referenced by: '<S578>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_VehCategory_OvrrdEnbl = 0;/* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT) KeASLR_b_VehSpdSigned_OvrrdEnbl =
    0;                                 /* Referenced by: '<S580>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_VehSpdVSOSigFailSts_OvrrdEnbl = 0;/* Referenced by: '<S581>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(boolean, ASLR_VAR_INIT)
    KeASLR_b_VehSpdVSOSigFailSts_OvrrdVal = 0;/* Referenced by: '<S582>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_dPct_ASLOvrrdDltThresh =
    150.0F;                            /* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePLTR_e_ACCSystemSts, ASLR_VAR_INIT)
    KeASLR_e_ACCSystemSts_OvrrdVal = CePLTR_e_Off;/* Referenced by: '<S583>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TeTMDR_e_TrrnMd, ASLR_VAR_INIT)
    KeASLR_e_Arb_TerrainMd_OvrrdVal = CeTMDR_e_NotDefine;/* Referenced by: '<S608>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePLTR_e_Autonomy_Lvl, ASLR_VAR_INIT)
    KeASLR_e_Autonomy_Lvl_OvrrdVal = CePLTR_e_None_Level1;/* Referenced by: '<S584>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePTAR_e_ImmediateTorqRespType, ASLR_VAR_INIT)
    KeASLR_e_AxleTrqRespType_OvrrdVal = CePTAR_e_Inactive;/* Referenced by: '<S585>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePLTR_e_Cruise_Control_Logic, ASLR_VAR_INIT)
    KeASLR_e_CC_Logic_OvrrdVal = CePLTR_e_Logic1;/* Referenced by: '<S586>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TeDMDR_e_DrvMd, ASLR_VAR_INIT) KeASLR_e_DrvMdStat_OvrrdVal
    = CeDMDR_e_Normal_Mode;            /* Referenced by: '<S587>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TeASLR_e_HDC_Status, ASLR_VAR_INIT)
    KeASLR_e_HDC_Status_OvrrdVal = CeASLR_e_HDC_UNAVL;/* Referenced by: '<S588>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TeAPSR_e_Lv1PvMode, ASLR_VAR_INIT)
    KeASLR_e_Lv1PVMode_OvrrdVal = CeAPSR_e_LV1PVMode_PVOk;/* Referenced by: '<S589>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePMDR_e_OperationalMode, ASLR_VAR_INIT)
    KeASLR_e_OperationalModeStsOvrrdVal = CePMDR_e_Init;/* Referenced by: '<S590>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePMDR_e_PowerMode, ASLR_VAR_INIT)
    KeASLR_e_PMM_PowerMode_OvrrdVal = CePMDR_e_PowerMode_Off;/* Referenced by: '<S591>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePLTR_e_AdaptiveCruiseCtrl, ASLR_VAR_INIT)
    KeASLR_e_ProxiACC_OvrrdVal = CePLTR_e_ACC_Absent;/* Referenced by: '<S592>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePLTR_e_IncreasingSpdConst, ASLR_VAR_INIT)
    KeASLR_e_ProxiIncreasingSpdCnst_OvrrdVal = CePLTR_e_Increasing_0;/* Referenced by: '<S593>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePTAR_e_ImmediateTorqRespType, ASLR_VAR_INIT)
    KeASLR_e_RrAxleTrqRespType_OvrrdVal = CePTAR_e_Inactive;/* Referenced by: '<S594>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePLTR_e_ShipingMode, ASLR_VAR_INIT)
    KeASLR_e_ShippingMode_OvrrdVal = CePLTR_e_ShipingMode_CUST_MD;/* Referenced by: '<S595>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TeASLR_e_TSRSts, ASLR_VAR_INIT) KeASLR_e_TSRSts_OvrrdVal =
    CeASLR_e_TSRNotActive;             /* Referenced by: '<S596>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TeTMDR_e_TrrnMd, ASLR_VAR_INIT)
    KeASLR_e_TerrainMd_OvrrdVal = CeTMDR_e_NotDefine;/* Referenced by: '<S597>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TeDMDR_e_TurtleMdSts, ASLR_VAR_INIT)
    KeASLR_e_TurtleMdSts_OvrrdVal = CeDMDR_e_No_Turtle_Mode;/* Referenced by: '<S598>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(TePLTR_e_VehCategory, ASLR_VAR_INIT)
    KeASLR_e_VehCategory_OvrrdVal = CePLTR_e_Category_N1;/* Referenced by: '<S599>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(sint16, ASLR_VAR_INIT) KeASLR_i_DsplydSpdLimSts_OvrrdVal =
    0;                                 /* Referenced by: '<S600>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(sint16, ASLR_VAR_INIT) KeASLR_i_RRCCSw_OvrrdVal = 0;/* Referenced by: '<S601>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint8, ASLR_VAR_INIT) KeASLR_i_SpdLimEEProgStatus_OvrrdVal
    = 0U;                              /* Referenced by: '<S602>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_k_ASLOvrrd = 0.01F;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_k_GasPdlKuGrdnt = 6.0458F;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_k_GasPdlKyGrdnt = 0.9244F;/* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_n_PrimNoSgndFltrd_OvrrdVal =
    0.0F;                              /* Referenced by: '<S603>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_r_PRNDL_Coeff_OvrrdVal =
    0.0F;                              /* Referenced by: '<S604>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_ASL_ACC_HAS_SwOnTime =
    5.0F;                              /* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_ASL_CanSpd_Fltr_Time =
    0.0159F;                           /* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_ASL_Filter_Time = 4.0F;/* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_Actv_wRampExitThresh =
    2.0F;                              /* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_CcAccelSwOnTimeSP = 0.4F;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_CcCancelSwOnTime = 0.4F;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_CcDecelSwOnTimeSP = 0.4F;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_CcResumeSwOnTime = 0.4F;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_HDCSetWarningTime = 5.0F;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_LatchASLSetSpdLimDelay =
    1.0F;                              /* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_TSRAutoSpdLimRej = 5.0F;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_TSRNotEnbldWarningTime =
    2.0F;                              /* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_TSRSpdHighWarningTime =
    2.0F;                              /* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_t_TSRSpdLowWarningTime =
    2.0F;                              /* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASLActivationMinSpd =
    10.0F;                             /* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASLSetSpdMaxKPH = 130.0F;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASLSetSpdMaxMPH = 80.0F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASLSetSpdMinKPH = 30.0F;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASLSetSpdMinMPH = 20.0F;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASL_LSPA = -3.0F;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASL_LSPB = -5.0F;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASL_RD_ActivationThres =
    -4.0F;                             /* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_ASL_RSP = -1.0F;/* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_CanSigVehSpd_OvrrdVal =
    0.0F;                              /* Referenced by: '<S605>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_DfltHomSpdLim = 120.0F;/* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_DrvMdOvrrdCondVehSpdOfst =
    1.0F;                              /* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_HomSpdLimDltThrs = 5.0F;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_HomSpdLim_OvrrdVal =
    255.0F;                            /* Referenced by: '<S606>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_OvrSpdThreshEntry = 1.0F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_OvrSpdThreshExit = 1.0F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_OvrSpdThreshHystEntry =
    1.2F;                              /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_OvrSpdThreshHystExit =
    1.0F;                              /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_SetCorrectSpd = 1.0F;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_TurtleMdSpdLimSNA =
    255.0F;                            /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimDec_KPH = 10.0F;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimDec_MPH = 5.0F;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimInc_KPH = 10.0F;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimInc_MPH = 5.0F;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdCamel =
    80.0F;                             /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdEco =
    130.0F;                            /* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdEco_N1 =
    80.0F;                             /* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdNormal =
    150.0F;                            /* Referenced by:
                                        * '<S199>/Calib'
                                        * '<S271>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_v_VehSpdLimKPH_DrvMdNormal_N1 = 90.0F;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_v_VehSpdLimKPH_DrvMdNormal_N2 = 90.0F;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdOffrd =
    150.0F;                            /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdPwrMdN1
    = 120.0F;                          /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdPwrMdN2
    = 120.0F;                          /* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdRange =
    150.0F;                            /* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_DrvMdSport =
    150.0F;                            /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_v_VehSpdLimKPH_DrvMdSportAbarth = 155.0F;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_LP3Eco =
    130.0F;                            /* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_LP3Normal =
    150.0F;                            /* Referenced by:
                                        * '<S200>/Calib'
                                        * '<S282>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_REPB_Rock =
    100.0F;                            /* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_ShippingMd =
    30.0F;                             /* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_TurtleMd3 =
    70.0F;                             /* Referenced by:
                                        * '<S262>/Calib'
                                        * '<S283>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_v_VehSpdLimKPH_TurtleMd34_N1 = 70.0F;/* Referenced by:
                                                 * '<S284>/Calib'
                                                 * '<S286>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT)
    KeASLR_v_VehSpdLimKPH_TurtleMd34_N2 = 70.0F;/* Referenced by:
                                                 * '<S285>/Calib'
                                                 * '<S287>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimKPH_TurtleMd4 =
    70.0F;                             /* Referenced by:
                                        * '<S258>/Calib'
                                        * '<S288>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimMPH_TurtleMd3 =
    50.0F;                             /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimMPH_TurtleMd4 =
    50.0F;                             /* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimTapDwn_KPH =
    1.0F;                              /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimTapDwn_MPH =
    1.0F;                              /* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimTapUp_KPH = 1.0F;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdLimTapUp_MPH = 1.0F;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KeASLR_v_VehSpdSigned_OvrrdVal =
    0.0F;                              /* Referenced by: '<S607>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint8, ASLR_VAR_INIT) KeASLR_y_EEProgStsBitMask1 = 45U;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint8, ASLR_VAR_INIT) KeASLR_y_EEProgStsBitMask2 = 63U;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint8, ASLR_VAR_INIT) KeASLR_y_EEProgStsBitMask3 = 18U;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint16, ASLR_VAR_INIT) KeASLR_y_FatalFltRsn = 65535U;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(uint16, ASLR_VAR_INIT) KeASLR_y_TempFltRsn = 65535U;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KtASLR_K_ASL_IGain[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S419>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KtASLR_K_ASL_P[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S427>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KtASLR_k_ASLActive[7] =
{
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F
} ;                                    /* Referenced by: '<S293>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KtASLR_k_ASLDisabled[7] =
{
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F
} ;                                    /* Referenced by: '<S294>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KtASLR_r_ASL_Mult[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S420>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KxASLR_K_ASL_IGain[9] =
{
    -2.5F, -2.0F, -1.0F, 0.0F, 2.5F, 5.0F, 7.0F, 9.0F, 11.0F
} ;                                    /* Referenced by: '<S419>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KxASLR_K_ASL_P[9] =
{
    -2.5F, -2.0F, -1.0F, 0.0F, 2.5F, 5.0F, 7.0F, 9.0F, 11.0F
} ;                                    /* Referenced by: '<S427>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KxASLR_k_ASLActive[7] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 50.0F, 70.0F
} ;                                    /* Referenced by: '<S293>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KxASLR_k_ASLDisabled[7] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 50.0F, 70.0F
} ;                                    /* Referenced by: '<S294>/Vector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static volatile CONST(float32, ASLR_VAR_INIT) KxASLR_r_ASL_Mult[7] =
{
    -2.5F, -2.0F, -1.0F, 0.0F, 2.5F, 5.0F, 7.0F
} ;                                    /* Referenced by: '<S420>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ASLR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ASLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, ASLR_VAR_INIT) AeASLR_v_STSLSpdLimMPH;/* '<Root>/AeASLR_v_STSLSpdLimMPH' */

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_Cnt_ASLCounter;/* '<S169>/Gain' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_M_ASL_Raw;/* '<S403>/Division' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_P_ASL_Iterm;/* '<S417>/Switch9' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_P_ASL_ItermRaw;/* '<S399>/Product1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_P_ASL_PIDPwr;/* '<S401>/Switch1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_P_ASL_Pterm;/* '<S402>/Product' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_P_DrvrReqPwr;/* '<S393>/Convert to power1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_P_ModHHPwr;/* '<S393>/Convert to power' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_P_NormalMinPwr;/* '<S393>/Convert to power2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ACC_Enggd;/* '<S174>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLAccelSwOnLP;/* '<S59>/Relational Operator2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLAccelSwOnSP;/* '<S59>/Relational Operator11' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLCancelSwOn;/* '<S59>/Relational Operator7' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLDecelSwOnLP;/* '<S59>/Relational Operator3' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLDecelSwOnSP;/* '<S59>/Relational Operator9' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLEnabled;/* '<S148>/AND' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLEngaged;/* '<S147>/AND' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLFlag;/* '<S149>/AND' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLKickdown;/* '<S24>/Comparison1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLOff;/* '<S39>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLOn;/* '<S22>/Logical4' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLResumeSwOn;/* '<S59>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASL_Active;/* '<S396>/Logical1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASL_ItermFrz;/* '<S417>/Logical1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASL_ItermFrzTypA;/* '<S417>/Logical4' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASL_ItermFrzTypB;/* '<S417>/Logical5' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASL_ItermFrzTypC;/* '<S417>/Logical6' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASL_SpdBased;/* '<S405>/Switch1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ASLorACCorHASSwStuck;/* '<S59>/Relational Operator1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_CCorACCorHAS_On;/* '<S39>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_CondTrueWarnHDC;/* '<S367>/Logical2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_DrvMdTurtleMdOvrrdActv;/* '<S187>/Logical10' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_DrvMdTurtleMdOvrrdCond1;/* '<S188>/Logical1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_DrvMdTurtleMdOvrrdCond2;/* '<S188>/Comparison4' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_ISASts;/* '<S451>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_LatchASLSpdLimFlag;/* '<S27>/Logical2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_M182_ConditionOn;/* '<S22>/temp SetSpd 1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_SpdInfoTmrEnblr;/* '<S26>/Merge1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_TSRCaptCondAuto;/* '<S449>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_TSRCaptCondConf;/* '<S449>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_TSRRdy;/* '<S450>/Logical' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_TSRSpdLimArbFlag;/* '<S29>/Logical Operator5' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_TSR_Req_On;/* '<S369>/temp SetSpd 6' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLC_b_TorqLimActive;/* '<S146>/AND' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_e_ASLCurrentState;/* '<S168>/Gain' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_e_ASLPrevState;/* '<S166>/Gain' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(sint16, ASLR_VAR_INIT) VeASLC_e_DrvMdTurtleMdOvrrdSt;/* '<S189>/Merge1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(uint16, ASLR_VAR_INIT) VeASLC_e_DrvMdTurtleMdOvrrdStRaw;/* '<S189>/Selector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TeASLR_e_HDC_Status, ASLR_VAR_INIT) VeASLC_e_Hill_Des_Stat;/* '<S20>/temp SetSpd 2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(uint16, ASLR_VAR_INIT) VeASLC_e_SpeedLimitStsforCAN;/* '<S170>/Gain' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_r_ASL_Mult;/* '<S422>/Switch' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_ASL_DeltaSpd;/* '<S397>/Sum1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_CanSigVehSpdFltrd;/* '<S462>/Switch' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_Delta_Speed_PID;/* '<S398>/Sum3' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_DrvMdTurtleMdSpdLimArb;/* '<S187>/Switch2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_DrvMdTurtleMdSpdLimUnbiased;/* '<S184>/Add' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_HomSpdLimUnbiasKPH;/* '<S178>/Add1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_InitVehSpdLim;/* '<S167>/Gain' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_InitVehSpdLimPostLatch;/* '<S27>/Switch1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_InitVehSpdLimUnbiased;/* '<S178>/Add' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_STSpdLimUnbiasedKPH;/* '<S184>/Add1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_ServiceToolSpdLimKPH;/* '<S135>/Switch' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_SetVehSpdLimDrvMdTrtlMdUnbiasKPH;/* '<S296>/Gain' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_SetVehSpdLimDtrmnd;/* '<S29>/Rounding3' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_SetVehSpdLimKPH;/* '<S177>/Rounding1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_SetVehSpdLimMPH;/* '<S177>/Rounding2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_SetVehSpdLimUnbiasKPH;/* '<S177>/MinMax' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_SetVehSpdLimUnbiasMPH;/* '<S295>/Gain' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_ShippingMdSpdLimArb;/* '<S185>/Switch1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_TSRDispSpdLim;/* '<S450>/Selector' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_TSRDispSpdLimClpd;/* '<S458>/Switch' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_TSRSpdLimHonrd;/* '<S29>/temp SetSpd 9' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_TargetSpeed;/* '<S398>/Switch' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_VehSpdBiased;/* '<S61>/Rounding2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLC_v_VehSpdPreFltr;/* '<S62>/Switch62' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(uint16, ASLR_VAR_INIT) VeASLC_y_FatalFltRsn;/* '<S23>/Bitwise_Logical_Operator' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(uint16, ASLR_VAR_INIT) VeASLC_y_TempFltRsn;/* '<S30>/Bitwise Logical Operator' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLI_M_MgateMinTrq;/* '<S21>/Switch47' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLI_M_OutTorqReqHTDR_OvrSpd;/* '<S21>/Switch46' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLI_M_OutTorqReqModHH;/* '<S21>/Switch44' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLI_P_PctPdlMaxPwr;/* '<S21>/Switch40' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_ACCSystemStsFA;/* '<S21>/Switch57' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_CcFailStsFA;/* '<S21>/Switch55' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_CcOnOffSts;/* '<S21>/Switch32' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_DsplydSpdLimStsFA;/* '<S21>/Switch60' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_HDC_FA;/* '<S21>/Switch56' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_Hill_Stat_Prx;/* '<S21>/Switch50' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_InhibitActvSpdLmtr;/* '<S21>/Switch36' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_LaneCenteringOnOffSts;/* '<S21>/Switch34' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_LaneCenteringOnOffStsFA;/* '<S21>/Switch35' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_ProxiCC;/* '<S21>/Switch33' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_SRAR_Dsbl_SL_PID;/* '<S21>/Switch43' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_SpdLmtrOnOffSts;/* '<S21>/Switch1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_SpdLmtrOnOffStsFA;/* '<S21>/Switch4' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_SpeedUnit;/* '<S21>/Switch37' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_SpeedUnitFA;/* '<S21>/Switch58' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_TSRStsFA;/* '<S21>/Switch59' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_TSR_ReqOvrrd;/* '<S21>/Switch49' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLI_b_VehSpdVSOSigFailSts;/* '<S21>/Switch41' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePLTR_e_ACCSystemSts, ASLR_VAR_INIT) VeASLI_e_ACCSystemSts;/* '<S21>/Switch31' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePLTR_e_Autonomy_Lvl, ASLR_VAR_INIT) VeASLI_e_AutonomyLvl_Prx;/* '<S21>/Switch51' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePTAR_e_ImmediateTorqRespType, ASLR_VAR_INIT)
    VeASLI_e_AxleTrqRespType;          /* '<S21>/Switch48' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePLTR_e_Cruise_Control_Logic, ASLR_VAR_INIT)
    VeASLI_e_CruiseCntrl_Logic;        /* '<S21>/Switch52' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TeASLR_e_HDC_Status, ASLR_VAR_INIT) VeASLI_e_Hill_Des_Stat;/* '<S21>/Switch53' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePMDR_e_OperationalMode, ASLR_VAR_INIT) VeASLI_e_OperationalModeSts;/* '<S21>/Switch64' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePMDR_e_PowerMode, ASLR_VAR_INIT) VeASLI_e_PMM_PowerMode;/* '<S21>/Switch38' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePLTR_e_AdaptiveCruiseCtrl, ASLR_VAR_INIT) VeASLI_e_ProxiACC;/* '<S21>/Switch30' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePTAR_e_ImmediateTorqRespType, ASLR_VAR_INIT)
    VeASLI_e_RrAxleTrqRespType;        /* '<S21>/Switch65' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(uint8, ASLR_VAR_INIT) VeASLI_e_SpdLimEEProgStatus;/* '<S21>/Switch63' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TeTMDR_e_TrrnMd, ASLR_VAR_INIT) VeASLI_e_TerrainMd;/* '<S21>/Switch54' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLI_n_PrimNoSgndFltrd;/* '<S21>/Switch42' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLI_r_PRNDL_Coeff;/* '<S21>/Switch45' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLI_v_VehSpdSigned;/* '<S21>/Switch62' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLR_Pct_AccelPedalEffPosition;/* '<S21>/Switch21' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLR_Pct_ProxiSpdomtrTol;/* '<S21>/Switch24' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_ACC_On;/* '<S21>/Switch18' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_ACC_OnFA;/* '<S21>/Switch19' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CanSigVehSpdFA;/* '<S21>/Switch20' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcAccelSts;/* '<S21>/Switch7' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcAccelStsFA;/* '<S21>/Switch8' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcCancelSw;/* '<S21>/Switch13' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcCancelSwFA;/* '<S21>/Switch14' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcDecelSts;/* '<S21>/Switch9' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcDecelStsFA;/* '<S21>/Switch10' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcEnabled;/* '<S21>/Switch6' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcEngaged;/* '<S21>/Switch29' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcFailSts;/* '<S21>/Switch26' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcResumeSw;/* '<S21>/Switch11' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_CcResumeSwFA;/* '<S21>/Switch12' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_HDC_Control_Deactivation;/* '<S39>/Logical Operator9' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_Lv1CrusSwStuckFailed;/* '<S21>/Switch25' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_ModulePowerdown_tmp;/* '<S27>/Logical' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_ProxiNAVPrsnc;/* '<S21>/Switch17' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_ProxiSpdLimiter;/* '<S21>/Switch15' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_ProxiTrafficSignRcgntn;/* '<S21>/Switch16' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_ServiceToolSpdInfoAct;/* '<S136>/OR1' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_SignCaptMode;/* '<S21>/Switch3' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(boolean, ASLR_VAR_INIT) VeASLR_b_TempFlt;/* '<S30>/Comparison9' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TeDMDR_e_DrvMd, ASLR_VAR_INIT) VeASLR_e_DrvMdStat;/* '<S21>/Switch27' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(sint16, ASLR_VAR_INIT) VeASLR_e_DsplydSpdLimSts;/* '<S21>/Switch2' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TeAPSR_e_Lv1PvMode, ASLR_VAR_INIT) VeASLR_e_Lv1PVMode;/* '<S21>/Switch22' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePLTR_e_IncreasingSpdConst, ASLR_VAR_INIT)
    VeASLR_e_ProxiIncreasingSpdCnst;   /* '<S21>/Switch23' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TePLTR_e_ShipingMode, ASLR_VAR_INIT) VeASLR_e_ShippingMode;/* '<S21>/Switch39' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TeASLR_e_TSRSts, ASLR_VAR_INIT) VeASLR_e_TSRSts;/* '<S21>/Switch' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(TeDMDR_e_TurtleMdSts, ASLR_VAR_INIT) VeASLR_e_TurtleMdSts;/* '<S21>/Switch28' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLR_v_CanSigVehSpd;/* '<S21>/Switch5' */

#endif

#if Rte_SysCon_Variant_ASLR_3

static VAR(float32, ASLR_VAR_INIT) VeASLR_v_PreRampVehSpd;/* '<S171>/Gain' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ASLR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ASLR
#include "MemMap.h"

CONST(ConstB_ASLR_ac_T, ASLR_VAR_INIT) ASLR_ac_ConstB =
{
    CeASLR_e_TSRNotActive,             /* '<S612>/Constant' */
    CeASLR_e_HDC_UNAVL,                /* '<S614>/Constant' */
    CeASLR_e_HDC_UNAVL                 /* '<S613>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ASLR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ASLR
#include "MemMap.h"

VAR(B_ASLR_ac_T, ASLR_VAR_INIT) ASLR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ASLR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ASLR
#include "MemMap.h"

VAR(DW_ASLR_ac_T, ASLR_VAR_INIT) ASLR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ASLR
#include "MemMap.h"
#if Rte_SysCon_Variant_ASLR_3

static FUNC(void, ASLR_CODE_LOCAL) ASLR_ac_Action1(VAR(float32, AUTOMATIC)
    rtu_KeASLR_v_ServiceToolDfltSpd, P2VAR(float32, AUTOMATIC, ASLR_VAR_INIT)
    rty_STSL_SpdLimKPH, P2VAR(float32, AUTOMATIC, ASLR_VAR_INIT)
    rty_STSL_SpdLimMPH, P2VAR(boolean, AUTOMATIC, ASLR_VAR_INIT)
    rty_STSL_SpdInfoTmrEnbl);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_enter_internal_Engaged(void);

#endif

#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_exit_internal_Engaged(void);

#endif

#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_Engaged(const boolean *Logical1, const float32 *Switch1_n);

#endif

#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_exit_internal_ON(void);

#endif

/*
 * Output and update for action system:
 *    '<S26>/Action1'
 *    '<S26>/If Action Subsystem3'
 */
#if Rte_SysCon_Variant_ASLR_3

static FUNC(void, ASLR_CODE_LOCAL) ASLR_ac_Action1(VAR(float32, AUTOMATIC)
    rtu_KeASLR_v_ServiceToolDfltSpd, P2VAR(float32, AUTOMATIC, ASLR_VAR_INIT)
    rty_STSL_SpdLimKPH, P2VAR(float32, AUTOMATIC, ASLR_VAR_INIT)
    rty_STSL_SpdLimMPH, P2VAR(boolean, AUTOMATIC, ASLR_VAR_INIT)
    rty_STSL_SpdInfoTmrEnbl)
{
    /* Gain: '<S137>/Gain' */
    *rty_STSL_SpdLimMPH = rtu_KeASLR_v_ServiceToolDfltSpd;

    /* Gain: '<S138>/Gain' */
    *rty_STSL_SpdLimKPH = rtu_KeASLR_v_ServiceToolDfltSpd;

    /* SignalConversion generated from: '<S122>/STSL_SpdInfoTmrEnbl' incorporates:
     *  Constant: '<S122>/FALSE Constant'
     */
    *rty_STSL_SpdInfoTmrEnbl = false;
}

#endif

/* Function for Chart: '<S27>/ASL_States_Chart' */
#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_enter_internal_Engaged(void)
{
    /* Constant: '<S118>/Calib' */
    /* Entry Internal 'Engaged': '<S145>:243' */
    /* Transition: '<S145>:388' */
    if (VeASLC_v_VehSpdBiased > (ASLR_ac_B.LeASLR_v_PreRampVehSpd +
            KeASLR_v_OvrSpdThreshEntry))
    {
        /* Transition: '<S145>:256' */
        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Active_with_ramp;

        /* Entry 'Active_with_ramp': '<S145>:270' */
        ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 4U;
        ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
        ASLR_ac_B.LeASLR_e_ASLCurrentState = 6.0F;
        ASLR_ac_B.LeASLR_b_TorqLimActive = false;
    }
    else
    {
        /* Transition: '<S145>:253' */
        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Active;

        /* Constant: '<S120>/Calib' */
        /* Entry 'Active': '<S145>:257' */
        /* Entry Internal 'Active': '<S145>:257' */
        /* Transition: '<S145>:259' */
        if (VeASLC_v_VehSpdBiased > (ASLR_ac_B.LeASLR_v_PreRampVehSpd -
                KeASLR_v_OvrSpdThreshHystEntry))
        {
            /* Transition: '<S145>:260' */
            ASLR_ac_DW.is_Active = ASLR_ac_IN_Active_with_speed_limiting;

            /* Entry 'Active_with_speed_limiting': '<S145>:266' */
            ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
            ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 3.0F;
            ASLR_ac_B.LeASLR_b_TorqLimActive = true;
        }
        else
        {
            /* Transition: '<S145>:261' */
            ASLR_ac_DW.is_Active = ASLR_ac_IN_Act_without_spd_limiting;

            /* Entry 'Act_without_spd_limiting': '<S145>:265' */
            ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 2.0F;
            ASLR_ac_B.LeASLR_b_TorqLimActive = false;
        }

        /* End of Constant: '<S120>/Calib' */
    }

    /* End of Constant: '<S118>/Calib' */
}

#endif

/* Function for Chart: '<S27>/ASL_States_Chart' */
#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_exit_internal_Engaged(void)
{
    /* Exit Internal 'Engaged': '<S145>:243' */
    switch (ASLR_ac_DW.is_Engaged)
    {
      case ASLR_ac_IN_Active:
        /* Exit Internal 'Active': '<S145>:257' */
        switch (ASLR_ac_DW.is_Active)
        {
          case ASLR_ac_IN_Act_without_spd_limiting:
            /* Exit 'Act_without_spd_limiting': '<S145>:265' */
            ASLR_ac_B.LeASLR_e_ASLPrevState = 2.0F;
            ASLR_ac_DW.is_Active = ASLR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case ASLR_ac_IN_Active_with_speed_limiting:
            /* Exit 'Active_with_speed_limiting': '<S145>:266' */
            ASLR_ac_B.LeASLR_e_ASLPrevState = 3.0F;
            ASLR_ac_DW.is_Active = ASLR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            ASLR_ac_DW.is_Active = ASLR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case ASLR_ac_IN_Active_with_ramp:
        /* Exit 'Active_with_ramp': '<S145>:270' */
        ASLR_ac_B.LeASLR_e_ASLPrevState = 6.0F;
        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case ASLR_ac_IN_Override_KickDown:
        /* Exit 'Override_KickDown': '<S145>:268' */
        ASLR_ac_B.LeASLR_e_ASLPrevState = 5.0F;
        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case ASLR_ac_IN_Overspeed:
        /* Exit 'Overspeed': '<S145>:269' */
        ASLR_ac_B.LeASLR_e_ASLPrevState = 4.0F;
        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      default:
        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;
    }
}

#endif

/* Function for Chart: '<S27>/ASL_States_Chart' */
#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_Engaged(const boolean *Logical1, const float32 *Switch1_n)
{
    /* During 'Engaged': '<S145>:243' */
    if (VeASLC_b_ASLCancelSwOn)
    {
        /* Transition: '<S145>:37' */
        ASLR_ac_exit_internal_Engaged();
        ASLR_ac_DW.is_ON = ASLR_ac_IN_Deactivated;

        /* Entry 'Deactivated': '<S145>:5' */
        ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 5U;
        ASLR_ac_B.LeASLR_b_ASLEngaged = false;
        ASLR_ac_B.LeASLR_b_ASLFlag = false;
        ASLR_ac_B.LeASLR_e_ASLCurrentState = 7.0F;
        ASLR_ac_B.LeASLR_b_TorqLimActive = false;
    }
    else
    {
        ASLR_ac_B.LeASLR_v_PreRampVehSpd = VeASLC_v_SetVehSpdLimDtrmnd;
        ASLR_ac_B.LeASLR_v_InitVehSpdLim = ASLR_ac_B.LeASLR_v_PreRampVehSpd;
        switch (ASLR_ac_DW.is_Engaged)
        {
          case ASLR_ac_IN_Active:
            /* Constant: '<S118>/Calib' */
            /* During 'Active': '<S145>:257' */
            if (VeASLC_v_VehSpdBiased > (ASLR_ac_B.LeASLR_v_PreRampVehSpd +
                    KeASLR_v_OvrSpdThreshEntry))
            {
                /* Transition: '<S145>:250' */
                /* Exit Internal 'Active': '<S145>:257' */
                switch (ASLR_ac_DW.is_Active)
                {
                  case ASLR_ac_IN_Act_without_spd_limiting:
                    /* Exit 'Act_without_spd_limiting': '<S145>:265' */
                    ASLR_ac_B.LeASLR_e_ASLPrevState = 2.0F;
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case ASLR_ac_IN_Active_with_speed_limiting:
                    /* Exit 'Active_with_speed_limiting': '<S145>:266' */
                    ASLR_ac_B.LeASLR_e_ASLPrevState = 3.0F;
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Overspeed;

                /* Entry 'Overspeed': '<S145>:269' */
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 4U;
                ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 4.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = true;
            }
            else if (((uint32)ASLR_ac_DW.is_Active) ==
                     ASLR_ac_IN_Act_without_spd_limiting)
            {
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 2.0F;

                /* Constant: '<S120>/Calib' */
                /* During 'Act_without_spd_limiting': '<S145>:265' */
                if (VeASLC_v_VehSpdBiased > (ASLR_ac_B.LeASLR_v_PreRampVehSpd -
                        KeASLR_v_OvrSpdThreshHystEntry))
                {
                    /* Transition: '<S145>:263' */
                    /* Exit 'Act_without_spd_limiting': '<S145>:265' */
                    ASLR_ac_B.LeASLR_e_ASLPrevState = 2.0F;
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Active_with_speed_limiting;

                    /* Entry 'Active_with_speed_limiting': '<S145>:266' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 3.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = true;
                }
            }
            else
            {
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 3.0F;

                /* Constant: '<S121>/Calib' */
                /* During 'Active_with_speed_limiting': '<S145>:266' */
                if (VeASLC_v_VehSpdBiased <= (ASLR_ac_B.LeASLR_v_PreRampVehSpd -
                     KeASLR_v_OvrSpdThreshHystExit))
                {
                    /* Transition: '<S145>:264' */
                    /* Exit 'Active_with_speed_limiting': '<S145>:266' */
                    ASLR_ac_B.LeASLR_e_ASLPrevState = 3.0F;
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Act_without_spd_limiting;

                    /* Entry 'Act_without_spd_limiting': '<S145>:265' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 2.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                }
                else
                {
                    if (*Logical1)
                    {
                        /* Transition: '<S145>:368' */
                        /* Exit 'Active_with_speed_limiting': '<S145>:266' */
                        ASLR_ac_B.LeASLR_e_ASLPrevState = 3.0F;
                        ASLR_ac_DW.is_Active = ASLR_ac_IN_NO_ACTIVE_CHILD;
                        ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Override_KickDown;

                        /* Entry 'Override_KickDown': '<S145>:268' */
                        ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 3U;
                        ASLR_ac_B.LeASLR_e_ASLCurrentState = 5.0F;
                        ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                    }
                }

                /* End of Constant: '<S121>/Calib' */
            }

            /* End of Constant: '<S118>/Calib' */
            break;

          case ASLR_ac_IN_Active_with_ramp:
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 6.0F;

            /* Constant: '<S119>/Calib' */
            /* During 'Active_with_ramp': '<S145>:270' */
            if (VeASLC_v_VehSpdBiased < (ASLR_ac_B.LeASLR_v_PreRampVehSpd +
                    KeASLR_v_OvrSpdThreshExit))
            {
                /* Transition: '<S145>:254' */
                /* Exit 'Active_with_ramp': '<S145>:270' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 6.0F;
                ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Active;

                /* Constant: '<S120>/Calib' */
                /* Entry 'Active': '<S145>:257' */
                /* Entry Internal 'Active': '<S145>:257' */
                /* Transition: '<S145>:259' */
                if (VeASLC_v_VehSpdBiased > (ASLR_ac_B.LeASLR_v_PreRampVehSpd -
                        KeASLR_v_OvrSpdThreshHystEntry))
                {
                    /* Transition: '<S145>:260' */
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Active_with_speed_limiting;

                    /* Entry 'Active_with_speed_limiting': '<S145>:266' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 3.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = true;
                }
                else
                {
                    /* Transition: '<S145>:261' */
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Act_without_spd_limiting;

                    /* Entry 'Act_without_spd_limiting': '<S145>:265' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 2.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                }
            }
            else if (ASLR_ac_B.LeASLR_Cnt_ASLCounter > (*Switch1_n))
            {
                /* Transition: '<S145>:255' */
                /* Exit 'Active_with_ramp': '<S145>:270' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 6.0F;
                ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Overspeed;

                /* Entry 'Overspeed': '<S145>:269' */
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 4U;
                ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 4.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = true;
            }
            else if (*Logical1)
            {
                /* Transition: '<S145>:251' */
                /* Exit 'Active_with_ramp': '<S145>:270' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 6.0F;
                ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Override_KickDown;

                /* Entry 'Override_KickDown': '<S145>:268' */
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 3U;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 5.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
            }
            else
            {
                ASLR_ac_B.LeASLR_Cnt_ASLCounter++;
            }
            break;

          case ASLR_ac_IN_Override_KickDown:
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 5.0F;

            /* During 'Override_KickDown': '<S145>:268' */
            if ((!(*Logical1)) && (VeASLC_v_VehSpdBiased <=
                                   ASLR_ac_B.LeASLR_v_PreRampVehSpd))
            {
                /* Transition: '<S145>:245' */
                /* Exit 'Override_KickDown': '<S145>:268' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 5.0F;
                ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Active;

                /* Constant: '<S120>/Calib' */
                /* Entry 'Active': '<S145>:257' */
                /* Entry Internal 'Active': '<S145>:257' */
                /* Transition: '<S145>:259' */
                if (VeASLC_v_VehSpdBiased > (ASLR_ac_B.LeASLR_v_PreRampVehSpd -
                        KeASLR_v_OvrSpdThreshHystEntry))
                {
                    /* Transition: '<S145>:260' */
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Active_with_speed_limiting;

                    /* Entry 'Active_with_speed_limiting': '<S145>:266' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 3.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = true;
                }
                else
                {
                    /* Transition: '<S145>:261' */
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Act_without_spd_limiting;

                    /* Entry 'Act_without_spd_limiting': '<S145>:265' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 2.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                }
            }
            break;

          default:
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 4.0F;

            /* Constant: '<S119>/Calib' */
            /* During 'Overspeed': '<S145>:269' */
            if (VeASLC_v_VehSpdBiased <= (ASLR_ac_B.LeASLR_v_PreRampVehSpd +
                    KeASLR_v_OvrSpdThreshExit))
            {
                /* Transition: '<S145>:248' */
                /* Exit 'Overspeed': '<S145>:269' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 4.0F;
                ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Active;

                /* Constant: '<S120>/Calib' */
                /* Entry 'Active': '<S145>:257' */
                /* Entry Internal 'Active': '<S145>:257' */
                /* Transition: '<S145>:259' */
                if (VeASLC_v_VehSpdBiased > (ASLR_ac_B.LeASLR_v_PreRampVehSpd -
                        KeASLR_v_OvrSpdThreshHystEntry))
                {
                    /* Transition: '<S145>:260' */
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Active_with_speed_limiting;

                    /* Entry 'Active_with_speed_limiting': '<S145>:266' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_Cnt_ASLCounter = 0.0F;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 3.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = true;
                }
                else
                {
                    /* Transition: '<S145>:261' */
                    ASLR_ac_DW.is_Active = ASLR_ac_IN_Act_without_spd_limiting;

                    /* Entry 'Act_without_spd_limiting': '<S145>:265' */
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 1U;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 2.0F;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                }
            }
            else if (*Logical1)
            {
                /* Transition: '<S145>:249' */
                /* Exit 'Overspeed': '<S145>:269' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 4.0F;
                ASLR_ac_DW.is_Engaged = ASLR_ac_IN_Override_KickDown;

                /* Entry 'Override_KickDown': '<S145>:268' */
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 3U;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 5.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
            }
            else
            {
                ASLR_ac_B.LeASLR_Cnt_ASLCounter = fminf
                    (ASLR_ac_B.LeASLR_Cnt_ASLCounter + 1.0F, 65535.0F);
            }
            break;
        }
    }
}

#endif

/* Function for Chart: '<S27>/ASL_States_Chart' */
#if Rte_SysCon_Variant_ASLR_3

static void ASLR_ac_exit_internal_ON(void)
{
    /* Exit Internal 'ON': '<S145>:11' */
    switch (ASLR_ac_DW.is_ON)
    {
      case ASLR_ac_IN_Deactivated:
        /* Exit 'Deactivated': '<S145>:5' */
        ASLR_ac_B.LeASLR_e_ASLPrevState = 7.0F;
        ASLR_ac_DW.is_ON = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case ASLR_ac_IN_Enabled:
        /* Exit 'Enabled': '<S145>:4' */
        ASLR_ac_B.LeASLR_e_ASLPrevState = 1.0F;
        ASLR_ac_DW.is_ON = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case ASLR_ac_IN_Engaged:
        ASLR_ac_exit_internal_Engaged();
        ASLR_ac_DW.is_ON = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case ASLR_ac_IN_Offline_Enabled:
        /* Exit 'Offline_Enabled': '<S145>:237' */
        ASLR_ac_B.LeASLR_e_ASLPrevState = 10.0F;
        ASLR_ac_B.LeASLR_b_ASLFlag = false;
        ASLR_ac_DW.is_ON = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;

      default:
        ASLR_ac_DW.is_ON = ASLR_ac_IN_NO_ACTIVE_CHILD;
        break;
    }
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) ASLR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_ASLR_3

    TePLTR_e_VehCategory tmpRead;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_LogicalOperator8_c;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_VeASLC_v_ServiceToolSpdLim;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_tempSetSpd6;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_Merge2;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_Logical10;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_LogicalOperator7;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_tempSetSpd4_n;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_je;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_py;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_UnitDelay_ap;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_at;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_Add;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_MinMax;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_Switch1_duk;

#endif

#if Rte_SysCon_Variant_ASLR_3

    sint16 rtb_IntegerDelay;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_l5;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_ec;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_iv;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_Product2;

#endif

#if Rte_SysCon_Variant_ASLR_3

    uint16 rtb_Switch1_k;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_bt;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_Switch6;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_OR1_pz;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_OR1_cs;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_iq;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_AND_ia;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_OR1_ha;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean rtb_OR1_g;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 rtb_Switch1_kd;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 Switch66;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 Switch11;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean AND_nk;

#endif

#if Rte_SysCon_Variant_ASLR_3

    float32 Switch1_n;

#endif

#if Rte_SysCon_Variant_ASLR_3

    TeTMDR_e_TrrnMd Switch72;

#endif

#if Rte_SysCon_Variant_ASLR_3

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Inport: '<Root>/VeGRAR_b_DisableASL' */
    (void)Rte_Read_VeGRAR_b_DisableASL_Value(&rtb_AND_bt);

    /* Inport: '<Root>/VeTMDR_e_PropulsionMd' */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&Switch72);

    /* Inport: '<Root>/VePLTR_b_RRCCPROXI' */
    (void)Rte_Read_VePLTR_b_RRCCPROXI_Value(&rtb_AND_je);

    /* Inport: '<Root>/VePLTR_e_VehCategory' */
    (void)Rte_Read_VePLTR_e_VehCategory_Value(&tmpRead);

    /* Inport: '<Root>/VePLTR_b_HDCEnabledCAN' */
    (void)Rte_Read_VePLTR_b_HDCEnabledCAN_Value(&rtb_AND_py);

    /* Inport: '<Root>/VePLTR_v_HomSpdLim' */
    (void)Rte_Read_VePLTR_v_HomSpdLim_Value(&Switch66);

    /* Inport: '<Root>/VeDTRR_e_RrAxleTrqRespType' */
    (void)Rte_Read_VeDTRR_e_RrAxleTrqRespType_Value
        ((&(VeASLI_e_RrAxleTrqRespType)));

    /* Inport: '<Root>/VePMDR_e_OperationalModeSts' */
    (void)Rte_Read_VePMDR_e_OperationalModeSts_Value
        ((&(VeASLI_e_OperationalModeSts)));

    /* Inport: '<Root>/VeBSWR_e_SpdLimEEProgStatus' */
    (void)Rte_Read_VeBSWR_e_SpdLimEEProgStatus_Value
        ((&(VeASLI_e_SpdLimEEProgStatus)));

    /* Inport: '<Root>/VeCSVR_v_VehSpdSigned' */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value((&(VeASLI_v_VehSpdSigned)));

    /* Inport: '<Root>/VePLTR_b_SpeedUnit_FA' */
    (void)Rte_Read_VePLTR_b_SpeedUnit_FA_Value((&(VeASLI_b_SpeedUnitFA)));

    /* Inport: '<Root>/VePLTR_b_ACCSystemSts_FA' */
    (void)Rte_Read_VePLTR_b_ACCSystemSts_FA_Value((&(VeASLI_b_ACCSystemStsFA)));

    /* Inport: '<Root>/VeCCTR_b_CcFailStsFA' */
    (void)Rte_Read_VeCCTR_b_CcFailStsFA_Value((&(VeASLI_b_CcFailStsFA)));

    /* Inport: '<Root>/VeTMDR_e_TrrnMd' */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value((&(VeASLI_e_TerrainMd)));

    /* Inport: '<Root>/VePLTR_e_Proxi_CC_Logic' */
    (void)Rte_Read_VePLTR_e_Proxi_CC_Logic_Value((&(VeASLI_e_CruiseCntrl_Logic)));

    /* Inport: '<Root>/VePLTR_e_Proxi_Autonomy_Lvl' */
    (void)Rte_Read_VePLTR_e_Proxi_Autonomy_Lvl_Value((&(VeASLI_e_AutonomyLvl_Prx)));

    /* Inport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx' */
    (void)Rte_Read_VePLTR_b_Hill_Des_Stat_Prx_Value((&(VeASLI_b_Hill_Stat_Prx)));

    /* Inport: '<Root>/VeDTRR_e_AxleTrqRespType' */
    (void)Rte_Read_VeDTRR_e_AxleTrqRespType_Value((&(VeASLI_e_AxleTrqRespType)));

    /* Inport: '<Root>/VeDTRR_M_MgateMinTrq' */
    (void)Rte_Read_VeDTRR_M_MgateMinTrq_Value((&(VeASLI_M_MgateMinTrq)));

    /* Inport: '<Root>/VeWTAR_M_OutTorqReqHTDR_OvrSpd' */
    (void)Rte_Read_VeWTAR_M_OutTorqReqHTDR_OvrSpd_Value
        ((&(VeASLI_M_OutTorqReqHTDR_OvrSpd)));

    /* Inport: '<Root>/VeWTAR_r_PRNDL_Coeff' */
    (void)Rte_Read_VeWTAR_r_PRNDL_Coeff_Value((&(VeASLI_r_PRNDL_Coeff)));

    /* Inport: '<Root>/VeHTDR_M_OutTorqReqModHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value((&(VeASLI_M_OutTorqReqModHH)));

    /* Inport: '<Root>/VeSRAR_b_Dsbl_SL_PID' */
    (void)Rte_Read_VeSRAR_b_Dsbl_SL_PID_Value((&(VeASLI_b_SRAR_Dsbl_SL_PID)));

    /* Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd' */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value((&(VeASLI_n_PrimNoSgndFltrd)));

    /* Inport: '<Root>/VeDTRR_P_PtcPdlMaxPwr' */
    (void)Rte_Read_VeDTRR_P_PtcPdlMaxPwr_Value((&(VeASLI_P_PctPdlMaxPwr)));

    /* Inport: '<Root>/VePLTR_e_ShippingMode' */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value((&(VeASLR_e_ShippingMode)));

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeASLI_e_PMM_PowerMode)));

    /* Inport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts' */
    (void)Rte_Read_VeCSVR_b_VehSpdVSOSigFailSts_Value
        ((&(VeASLI_b_VehSpdVSOSigFailSts)));

    /* Inport: '<Root>/VePLTR_b_SpeedUnit' */
    (void)Rte_Read_VePLTR_b_SpeedUnit_Value((&(VeASLI_b_SpeedUnit)));

    /* Inport: '<Root>/VeSRAR_b_InhibitActvSpdLmtr' */
    (void)Rte_Read_VeSRAR_b_InhibitActvSpdLmtr_Value
        ((&(VeASLI_b_InhibitActvSpdLmtr)));

    /* Inport: '<Root>/VeCCTR_b_CcOnOffSts' */
    (void)Rte_Read_VeCCTR_b_CcOnOffSts_Value((&(VeASLI_b_CcOnOffSts)));

    /* Inport: '<Root>/VePLTR_b_ProxiCC' */
    (void)Rte_Read_VePLTR_b_ProxiCC_Value((&(VeASLI_b_ProxiCC)));

    /* Inport: '<Root>/VePLTR_e_ACCSystemSts' */
    (void)Rte_Read_VePLTR_e_ACCSystemSts_Value((&(VeASLI_e_ACCSystemSts)));

    /* Inport: '<Root>/VePLTR_e_ProxiACC' */
    (void)Rte_Read_VePLTR_e_ProxiACC_Value((&(VeASLI_e_ProxiACC)));

    /* Inport: '<Root>/VeCCTR_b_CcEngaged' */
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value((&(VeASLR_b_CcEngaged)));

    /* Inport: '<Root>/VeDMDR_e_TurtleMdSts' */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value((&(VeASLR_e_TurtleMdSts)));

    /* Inport: '<Root>/VeDMDR_e_DrvMdArb' */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value((&(VeASLR_e_DrvMdStat)));

    /* Inport: '<Root>/VeCCTR_b_CcFailSts' */
    (void)Rte_Read_VeCCTR_b_CcFailSts_Value((&(VeASLR_b_CcFailSts)));

    /* Inport: '<Root>/VeCCTR_b_Lv1CrusSwStuckFailed' */
    (void)Rte_Read_VeCCTR_b_Lv1CrusSwStuckFailed_Value
        ((&(VeASLR_b_Lv1CrusSwStuckFailed)));

    /* Inport: '<Root>/VePLTR_Pct_ProxiSpdomtrTol' */
    (void)Rte_Read_VePLTR_Pct_ProxiSpdomtrTol_Value
        ((&(VeASLR_Pct_ProxiSpdomtrTol)));

    /* Inport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst' */
    (void)Rte_Read_VePLTR_e_ProxiIncreasingSpdCnst_Value
        ((&(VeASLR_e_ProxiIncreasingSpdCnst)));

    /* Inport: '<Root>/VeAPSR_e_Lv1PVMode' */
    (void)Rte_Read_VeAPSR_e_Lv1PVMode_Value((&(VeASLR_e_Lv1PVMode)));

    /* Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition' */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        ((&(VeASLR_Pct_AccelPedalEffPosition)));

    /* Inport: '<Root>/VeCSVR_b_CanSigVehSpd_FA' */
    (void)Rte_Read_VeCSVR_b_CanSigVehSpd_FA_Value((&(VeASLR_b_CanSigVehSpdFA)));

    /* Inport: '<Root>/VePLTR_b_ACC_OnFA' */
    (void)Rte_Read_VePLTR_b_ACC_OnFA_Value((&(VeASLR_b_ACC_OnFA)));

    /* Inport: '<Root>/VePLTR_b_ACC_On' */
    (void)Rte_Read_VePLTR_b_ACC_On_Value((&(VeASLR_b_ACC_On)));

    /* Inport: '<Root>/VePLTR_b_ProxiNAVPrsnc' */
    (void)Rte_Read_VePLTR_b_ProxiNAVPrsnc_Value((&(VeASLR_b_ProxiNAVPrsnc)));

    /* Inport: '<Root>/VePLTR_b_ProxiTrafficSignRcgntn' */
    (void)Rte_Read_VePLTR_b_ProxiTrafficSignRcgntn_Value
        ((&(VeASLR_b_ProxiTrafficSignRcgntn)));

    /* Inport: '<Root>/VePLTR_b_ProxiSpdLimiter' */
    (void)Rte_Read_VePLTR_b_ProxiSpdLimiter_Value((&(VeASLR_b_ProxiSpdLimiter)));

    /* Inport: '<Root>/VeCCTR_b_CcCancelSwFA' */
    (void)Rte_Read_VeCCTR_b_CcCancelSwFA_Value((&(VeASLR_b_CcCancelSwFA)));

    /* Inport: '<Root>/VeCCTR_b_CcCancelSw' */
    (void)Rte_Read_VeCCTR_b_CcCancelSw_Value((&(VeASLR_b_CcCancelSw)));

    /* Inport: '<Root>/VeCCTR_b_CcResumeSwFA' */
    (void)Rte_Read_VeCCTR_b_CcResumeSwFA_Value((&(VeASLR_b_CcResumeSwFA)));

    /* Inport: '<Root>/VeCCTR_b_CcResumeSw' */
    (void)Rte_Read_VeCCTR_b_CcResumeSw_Value((&(VeASLR_b_CcResumeSw)));

    /* Inport: '<Root>/VeCCTR_b_CcDecelStsFA' */
    (void)Rte_Read_VeCCTR_b_CcDecelStsFA_Value((&(VeASLR_b_CcDecelStsFA)));

    /* Inport: '<Root>/VeCCTR_b_CcDecelSts' */
    (void)Rte_Read_VeCCTR_b_CcDecelSts_Value((&(VeASLR_b_CcDecelSts)));

    /* Inport: '<Root>/VeCCTR_b_CcAccelStsFA' */
    (void)Rte_Read_VeCCTR_b_CcAccelStsFA_Value((&(VeASLR_b_CcAccelStsFA)));

    /* Inport: '<Root>/VeCCTR_b_CcAccelSts' */
    (void)Rte_Read_VeCCTR_b_CcAccelSts_Value((&(VeASLR_b_CcAccelSts)));

    /* Inport: '<Root>/VeCCTR_b_CcEnabled' */
    (void)Rte_Read_VeCCTR_b_CcEnabled_Value((&(VeASLR_b_CcEnabled)));

    /* Inport: '<Root>/VeCSVR_v_CanSigVehSpd' */
    (void)Rte_Read_VeCSVR_v_CanSigVehSpd_Value((&(VeASLR_v_CanSigVehSpd)));

    /* Outputs for Function Call SubSystem: '<Root>/ASLR_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLI_Inputs'
     */
    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S574>/Calib'
     */
    if (KeASLR_b_TSRSts_OvrrdEnbl)
    {
        /* RelationalOperator: '<S450>/Comparison3' incorporates:
         *  Constant: '<S596>/Calib'
         *  Switch: '<S21>/Switch'
         */
        VeASLR_e_TSRSts = KeASLR_e_TSRSts_OvrrdVal;
    }
    else
    {
        /* RelationalOperator: '<S450>/Comparison3' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S1>/VeASLR_e_TSRSts_read'
         *  Switch: '<S21>/Switch'
         */
        VeASLR_e_TSRSts = Rte_IrvRead_ASLR_MedTEB_TSRSts_write_IRV();
    }

    /* End of Switch: '<S21>/Switch' */

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S566>/Calib'
     */
    if (KeASLR_b_SpdLmtrOnOffSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch1' incorporates:
         *  Constant: '<S567>/Calib'
         */
        VeASLI_b_SpdLmtrOnOffSts = KeASLR_b_SpdLmtrOnOffSts_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_10'
         *  SignalConversion generated from: '<S1>/VeASLR_b_SpdLmtrOnOffSts_read'
         */
        VeASLI_b_SpdLmtrOnOffSts =
            Rte_IrvRead_ASLR_MedTEB_SpeedLimiterOnOffSts_write_IRV();
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Switch: '<S21>/Switch2' incorporates:
     *  Constant: '<S515>/Calib'
     */
    if (KeASLR_b_DsplydSpdLimSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch2' incorporates:
         *  Constant: '<S600>/Calib'
         */
        VeASLR_e_DsplydSpdLimSts = KeASLR_i_DsplydSpdLimSts_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_7'
         *  SignalConversion generated from: '<S1>/VeASLR_e_DsplydSpdLimSts_read'
         */
        VeASLR_e_DsplydSpdLimSts =
            Rte_IrvRead_ASLR_MedTEB_DisplayedSpeedLimSts_write_IRV();
    }

    /* End of Switch: '<S21>/Switch2' */

    /* Switch: '<S21>/Switch3' incorporates:
     *  Constant: '<S561>/Calib'
     */
    if (KeASLR_b_SignCaptMode_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch3' incorporates:
         *  Constant: '<S562>/Calib'
         */
        VeASLR_b_SignCaptMode = KeASLR_b_SignCaptMode_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch3' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S1>/VeASLR_b_SignCaptMode_read'
         */
        VeASLR_b_SignCaptMode =
            Rte_IrvRead_ASLR_MedTEB_SignCaptureMode_write_IRV();
    }

    /* End of Switch: '<S21>/Switch3' */

    /* Switch: '<S21>/Switch4' incorporates:
     *  Constant: '<S564>/Calib'
     */
    if (KeASLR_b_SpdLmtrOnOffStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch4' incorporates:
         *  Constant: '<S565>/Calib'
         */
        VeASLI_b_SpdLmtrOnOffStsFA = KeASLR_b_SpdLmtrOnOffStsFA_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch4' incorporates:
         *  Merge: '<Root>/Merge_12'
         *  SignalConversion generated from: '<S1>/VeASLR_b_SpdLmtrOnOffStsFA_read'
         */
        VeASLI_b_SpdLmtrOnOffStsFA =
            Rte_IrvRead_ASLR_MedTEB_SpeedLimiterOnOffStsFA_write_IRV();
    }

    /* End of Switch: '<S21>/Switch4' */

    /* Switch: '<S21>/Switch5' incorporates:
     *  Constant: '<S483>/Calib'
     */
    if (KeASLR_b_CanSigVehSpd_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch5' incorporates:
         *  Constant: '<S605>/Calib'
         *  Inport: '<Root>/VeCSVR_v_CanSigVehSpd'
         */
        VeASLR_v_CanSigVehSpd = KeASLR_v_CanSigVehSpd_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch5' */

    /* Switch: '<S21>/Switch6' incorporates:
     *  Constant: '<S496>/Calib'
     */
    if (KeASLR_b_CcEnabled_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch6' incorporates:
         *  Constant: '<S497>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcEnabled'
         */
        VeASLR_b_CcEnabled = KeASLR_b_CcEnabled_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch6' */

    /* Switch: '<S21>/Switch7' incorporates:
     *  Constant: '<S486>/Calib'
     */
    if (KeASLR_b_CcAccelSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch7' incorporates:
         *  Constant: '<S487>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcAccelSts'
         */
        VeASLR_b_CcAccelSts = KeASLR_b_CcAccelSts_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch7' */

    /* Switch: '<S21>/Switch8' incorporates:
     *  Constant: '<S484>/Calib'
     */
    if (KeASLR_b_CcAccelStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch8' incorporates:
         *  Constant: '<S485>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcAccelStsFA'
         */
        VeASLR_b_CcAccelStsFA = KeASLR_b_CcAccelStsFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch8' */

    /* Switch: '<S21>/Switch9' incorporates:
     *  Constant: '<S494>/Calib'
     */
    if (KeASLR_b_CcDecelSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch9' incorporates:
         *  Constant: '<S495>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcDecelSts'
         */
        VeASLR_b_CcDecelSts = KeASLR_b_CcDecelSts_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch9' */

    /* Switch: '<S21>/Switch10' incorporates:
     *  Constant: '<S492>/Calib'
     */
    if (KeASLR_b_CcDecelStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch10' incorporates:
         *  Constant: '<S493>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcDecelStsFA'
         */
        VeASLR_b_CcDecelStsFA = KeASLR_b_CcDecelStsFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch10' */

    /* Switch: '<S21>/Switch11' incorporates:
     *  Constant: '<S508>/Calib'
     */
    if (KeASLR_b_CcResumeSw_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch11' incorporates:
         *  Constant: '<S509>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcResumeSw'
         */
        VeASLR_b_CcResumeSw = KeASLR_b_CcResumeSw_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch11' */

    /* Switch: '<S21>/Switch12' incorporates:
     *  Constant: '<S506>/Calib'
     */
    if (KeASLR_b_CcResumeSwFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch12' incorporates:
         *  Constant: '<S507>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcResumeSwFA'
         */
        VeASLR_b_CcResumeSwFA = KeASLR_b_CcResumeSwFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch12' */

    /* Switch: '<S21>/Switch13' incorporates:
     *  Constant: '<S490>/Calib'
     */
    if (KeASLR_b_CcCancelSw_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch13' incorporates:
         *  Constant: '<S491>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcCancelSw'
         */
        VeASLR_b_CcCancelSw = KeASLR_b_CcCancelSw_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch13' */

    /* Switch: '<S21>/Switch14' incorporates:
     *  Constant: '<S488>/Calib'
     */
    if (KeASLR_b_CcCancelSwFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch14' incorporates:
         *  Constant: '<S489>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcCancelSwFA'
         */
        VeASLR_b_CcCancelSwFA = KeASLR_b_CcCancelSwFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch14' */

    /* Switch: '<S21>/Switch15' incorporates:
     *  Constant: '<S546>/Calib'
     */
    if (KeASLR_b_ProxiSpdLimiter_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch15' incorporates:
         *  Constant: '<S547>/Calib'
         *  Inport: '<Root>/VePLTR_b_ProxiSpdLimiter'
         */
        VeASLR_b_ProxiSpdLimiter = KeASLR_b_ProxiSpdLimiter_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch15' */

    /* Switch: '<S21>/Switch16' incorporates:
     *  Constant: '<S549>/Calib'
     */
    if (KeASLR_b_ProxiTrafficSignRcgntn_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch16' incorporates:
         *  Constant: '<S550>/Calib'
         *  Inport: '<Root>/VePLTR_b_ProxiTrafficSignRcgntn'
         */
        VeASLR_b_ProxiTrafficSignRcgntn =
            KeASLR_b_ProxiTrafficSignRcgntn_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch16' */

    /* Switch: '<S21>/Switch17' incorporates:
     *  Constant: '<S544>/Calib'
     */
    if (KeASLR_b_ProxiNAVPrsnc_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch17' incorporates:
         *  Constant: '<S545>/Calib'
         *  Inport: '<Root>/VePLTR_b_ProxiNAVPrsnc'
         */
        VeASLR_b_ProxiNAVPrsnc = KeASLR_b_ProxiNAVPrsnc_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch17' */

    /* Switch: '<S21>/Switch18' incorporates:
     *  Constant: '<S474>/Calib'
     */
    if (KeASLR_b_ACC_On_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch18' incorporates:
         *  Constant: '<S475>/Calib'
         *  Inport: '<Root>/VePLTR_b_ACC_On'
         */
        VeASLR_b_ACC_On = KeASLR_b_ACC_On_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch18' */

    /* Switch: '<S21>/Switch19' incorporates:
     *  Constant: '<S472>/Calib'
     */
    if (KeASLR_b_ACC_OnFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch19' incorporates:
         *  Constant: '<S473>/Calib'
         *  Inport: '<Root>/VePLTR_b_ACC_OnFA'
         */
        VeASLR_b_ACC_OnFA = KeASLR_b_ACC_OnFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch19' */

    /* Switch: '<S21>/Switch20' incorporates:
     *  Constant: '<S481>/Calib'
     */
    if (KeASLR_b_CanSigVehSpdFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch20' incorporates:
         *  Constant: '<S482>/Calib'
         *  Inport: '<Root>/VeCSVR_b_CanSigVehSpd_FA'
         */
        VeASLR_b_CanSigVehSpdFA = KeASLR_b_CanSigVehSpdFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch20' */

    /* Switch: '<S21>/Switch21' incorporates:
     *  Constant: '<S476>/Calib'
     */
    if (KeASLR_b_AccelPedalEffPosition_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch21' incorporates:
         *  Constant: '<S467>/Calib'
         *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
         */
        VeASLR_Pct_AccelPedalEffPosition =
            KeASLR_Pct_AccelPedalEffPosition_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch21' */

    /* Switch: '<S21>/Switch22' incorporates:
     *  Constant: '<S532>/Calib'
     */
    if (KeASLR_b_Lv1PVMode_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch22' incorporates:
         *  Constant: '<S589>/Calib'
         *  Inport: '<Root>/VeAPSR_e_Lv1PVMode'
         */
        VeASLR_e_Lv1PVMode = KeASLR_e_Lv1PVMode_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch22' */

    /* Switch: '<S21>/Switch23' incorporates:
     *  Constant: '<S543>/Calib'
     */
    if (KeASLR_b_ProxiIncreasingSpdCnst_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch23' incorporates:
         *  Constant: '<S593>/Calib'
         *  Inport: '<Root>/VePLTR_e_ProxiIncreasingSpdCnst'
         */
        VeASLR_e_ProxiIncreasingSpdCnst =
            KeASLR_e_ProxiIncreasingSpdCnst_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch23' */

    /* Switch: '<S21>/Switch24' incorporates:
     *  Constant: '<S548>/Calib'
     */
    if (KeASLR_b_ProxiSpdomtrTol_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch24' incorporates:
         *  Constant: '<S468>/Calib'
         *  Inport: '<Root>/VePLTR_Pct_ProxiSpdomtrTol'
         */
        VeASLR_Pct_ProxiSpdomtrTol = KeASLR_Pct_ProxiSpdomtrTol_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch24' */

    /* Switch: '<S21>/Switch25' incorporates:
     *  Constant: '<S530>/Calib'
     */
    if (KeASLR_b_Lv1CrusSwStuckFailed_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch25' incorporates:
         *  Constant: '<S531>/Calib'
         *  Inport: '<Root>/VeCCTR_b_Lv1CrusSwStuckFailed'
         */
        VeASLR_b_Lv1CrusSwStuckFailed = KeASLR_b_Lv1CrusSwStuckFailed_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch25' */

    /* Switch: '<S21>/Switch26' incorporates:
     *  Constant: '<S502>/Calib'
     */
    if (KeASLR_b_CcFailSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch26' incorporates:
         *  Constant: '<S503>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcFailSts'
         */
        VeASLR_b_CcFailSts = KeASLR_b_CcFailSts_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch26' */

    /* Switch: '<S21>/Switch27' incorporates:
     *  Constant: '<S510>/Calib'
     */
    if (KeASLR_b_DrvMdStat_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch27' incorporates:
         *  Constant: '<S587>/Calib'
         *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
         */
        VeASLR_e_DrvMdStat = KeASLR_e_DrvMdStat_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch27' */

    /* Switch: '<S21>/Switch28' incorporates:
     *  Constant: '<S578>/Calib'
     */
    if (KeASLR_b_TurtleMdSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch28' incorporates:
         *  Constant: '<S598>/Calib'
         *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
         */
        VeASLR_e_TurtleMdSts = KeASLR_e_TurtleMdSts_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch28' */

    /* Switch: '<S21>/Switch29' incorporates:
     *  Constant: '<S498>/Calib'
     */
    if (KeASLR_b_CcEngaged_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch29' incorporates:
         *  Constant: '<S499>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcEngaged'
         */
        VeASLR_b_CcEngaged = KeASLR_b_CcEngaged_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch29' */

    /* Switch: '<S21>/Switch30' incorporates:
     *  Constant: '<S540>/Calib'
     */
    if (KeASLR_b_ProxiACC_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch30' incorporates:
         *  Constant: '<S592>/Calib'
         *  Inport: '<Root>/VePLTR_e_ProxiACC'
         */
        VeASLI_e_ProxiACC = KeASLR_e_ProxiACC_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch30' */

    /* Switch: '<S21>/Switch31' incorporates:
     *  Constant: '<S471>/Calib'
     */
    if (KeASLR_b_ACCSystemSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch31' incorporates:
         *  Constant: '<S583>/Calib'
         *  Inport: '<Root>/VePLTR_e_ACCSystemSts'
         */
        VeASLI_e_ACCSystemSts = KeASLR_e_ACCSystemSts_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch31' */

    /* Switch: '<S21>/Switch32' incorporates:
     *  Constant: '<S504>/Calib'
     */
    if (KeASLR_b_CcOnOffSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch32' incorporates:
         *  Constant: '<S505>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcOnOffSts'
         */
        VeASLI_b_CcOnOffSts = KeASLR_b_CcOnOffSts_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch32' */

    /* Switch: '<S21>/Switch33' incorporates:
     *  Constant: '<S541>/Calib'
     */
    if (KeASLR_b_ProxiCC_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch33' incorporates:
         *  Constant: '<S542>/Calib'
         *  Inport: '<Root>/VePLTR_b_ProxiCC'
         */
        VeASLI_b_ProxiCC = KeASLR_b_ProxiCC_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch33' */

    /* Switch: '<S21>/Switch34' incorporates:
     *  Constant: '<S528>/Calib'
     */
    if (KeASLR_b_LaneCenteringOnOffSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch34' incorporates:
         *  Constant: '<S529>/Calib'
         */
        VeASLI_b_LaneCenteringOnOffSts = KeASLR_b_LaneCenteringOnOffSts_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch34' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S1>/VeASLR_b_LaneCenteringOnOffSts_read'
         */
        VeASLI_b_LaneCenteringOnOffSts =
            Rte_IrvRead_ASLR_MedTEB_LaneCenteringOnOffSts_write_IRV();
    }

    /* End of Switch: '<S21>/Switch34' */

    /* Switch: '<S21>/Switch35' incorporates:
     *  Constant: '<S526>/Calib'
     */
    if (KeASLR_b_LaneCenteringOnOffStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch35' incorporates:
         *  Constant: '<S527>/Calib'
         */
        VeASLI_b_LaneCenteringOnOffStsFA =
            KeASLR_b_LaneCenteringOnOffStsFA_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch35' incorporates:
         *  Merge: '<Root>/Merge_9'
         *  SignalConversion generated from: '<S1>/VeASLR_b_LaneCenteringOnOffStsFA_read'
         */
        VeASLI_b_LaneCenteringOnOffStsFA =
            Rte_IrvRead_ASLR_MedTEB_LaneCenteringOnOffStsFA_write_IRV();
    }

    /* End of Switch: '<S21>/Switch35' */

    /* Switch: '<S21>/Switch36' incorporates:
     *  Constant: '<S524>/Calib'
     */
    if (KeASLR_b_InhibitActvSpdLmtr_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch36' incorporates:
         *  Constant: '<S525>/Calib'
         *  Inport: '<Root>/VeSRAR_b_InhibitActvSpdLmtr'
         */
        VeASLI_b_InhibitActvSpdLmtr = KeASLR_b_InhibitActvSpdLmtr_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch36' */

    /* Switch: '<S21>/Switch37' incorporates:
     *  Constant: '<S570>/Calib'
     */
    if (KeASLR_b_SpeedUnit_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch37' incorporates:
         *  Constant: '<S571>/Calib'
         *  Inport: '<Root>/VePLTR_b_SpeedUnit'
         */
        VeASLI_b_SpeedUnit = KeASLR_b_SpeedUnit_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch37' */

    /* Switch: '<S21>/Switch41' incorporates:
     *  Constant: '<S581>/Calib'
     */
    if (KeASLR_b_VehSpdVSOSigFailSts_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch41' incorporates:
         *  Constant: '<S582>/Calib'
         *  Inport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts'
         */
        VeASLI_b_VehSpdVSOSigFailSts = KeASLR_b_VehSpdVSOSigFailSts_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch41' */

    /* Switch: '<S21>/Switch38' incorporates:
     *  Constant: '<S537>/Calib'
     */
    if (KeASLR_b_PMM_PowerMode_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch38' incorporates:
         *  Constant: '<S591>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeASLI_e_PMM_PowerMode = KeASLR_e_PMM_PowerMode_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch38' */

    /* Switch: '<S21>/Switch39' incorporates:
     *  Constant: '<S560>/Calib'
     */
    if (KeASLR_b_ShippingMode_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch39' incorporates:
         *  Constant: '<S595>/Calib'
         *  Inport: '<Root>/VePLTR_e_ShippingMode'
         */
        VeASLR_e_ShippingMode = KeASLR_e_ShippingMode_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch39' */

    /* Switch: '<S21>/Switch40' incorporates:
     *  Constant: '<S551>/Calib'
     */
    if (KeASLR_b_PtcPdlMaxPwr_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch40' incorporates:
         *  Constant: '<S466>/Calib'
         *  Inport: '<Root>/VeDTRR_P_PtcPdlMaxPwr'
         */
        VeASLI_P_PctPdlMaxPwr = KeASLR_P_PtcPdlMaxPwr_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch40' */

    /* Switch: '<S21>/Switch42' incorporates:
     *  Constant: '<S539>/Calib'
     */
    if (KeASLR_b_PrimNoSgndFltrd_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch42' incorporates:
         *  Constant: '<S603>/Calib'
         *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
         */
        VeASLI_n_PrimNoSgndFltrd = KeASLR_n_PrimNoSgndFltrd_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch42' */

    /* Switch: '<S21>/Switch43' incorporates:
     *  Constant: '<S511>/Calib'
     */
    if (KeASLR_b_Dsbl_SL_PID_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch43' incorporates:
         *  Constant: '<S512>/Calib'
         *  Inport: '<Root>/VeSRAR_b_Dsbl_SL_PID'
         */
        VeASLI_b_SRAR_Dsbl_SL_PID = KeASLR_b_Dsbl_SL_PID_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch43' */

    /* Switch: '<S21>/Switch44' incorporates:
     *  Constant: '<S536>/Calib'
     */
    if (KeASLR_b_OutTorqReqModHH_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch44' incorporates:
         *  Constant: '<S465>/Calib'
         *  Inport: '<Root>/VeHTDR_M_OutTorqReqModHH'
         */
        VeASLI_M_OutTorqReqModHH = KeASLR_M_OutTorqReqModHH_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch44' */

    /* Switch: '<S21>/Switch45' incorporates:
     *  Constant: '<S538>/Calib'
     */
    if (KeASLR_b_PRNDL_Coeff_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch45' incorporates:
         *  Constant: '<S604>/Calib'
         *  Inport: '<Root>/VeWTAR_r_PRNDL_Coeff'
         */
        VeASLI_r_PRNDL_Coeff = KeASLR_r_PRNDL_Coeff_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch45' */

    /* Switch: '<S21>/Switch46' incorporates:
     *  Constant: '<S535>/Calib'
     */
    if (KeASLR_b_OutTorqReqHTDR_OvrSpd_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch46' incorporates:
         *  Constant: '<S464>/Calib'
         *  Inport: '<Root>/VeWTAR_M_OutTorqReqHTDR_OvrSpd'
         */
        VeASLI_M_OutTorqReqHTDR_OvrSpd = KeASLR_M_OutTorqReqHTDR_OvrSpd_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch46' */

    /* Switch: '<S21>/Switch47' incorporates:
     *  Constant: '<S533>/Calib'
     */
    if (KeASLR_b_MgateMinTrq_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch47' incorporates:
         *  Constant: '<S463>/Calib'
         *  Inport: '<Root>/VeDTRR_M_MgateMinTrq'
         */
        VeASLI_M_MgateMinTrq = KeASLR_M_MgateMinTrq_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch47' */

    /* Switch: '<S21>/Switch48' incorporates:
     *  Constant: '<S479>/Calib'
     */
    if (KeASLR_b_AxleTrqRespType_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch48' incorporates:
         *  Constant: '<S585>/Calib'
         *  Inport: '<Root>/VeDTRR_e_AxleTrqRespType'
         */
        VeASLI_e_AxleTrqRespType = KeASLR_e_AxleTrqRespType_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch48' */

    /* Switch: '<S21>/Switch49' incorporates:
     *  Constant: '<S575>/Calib'
     */
    if (KeASLR_b_TSR_Req_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch49' incorporates:
         *  Constant: '<S576>/Calib'
         */
        VeASLI_b_TSR_ReqOvrrd = KeASLR_b_TSR_Req_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch49' incorporates:
         *  Merge: '<Root>/Merge_13'
         *  SignalConversion generated from: '<S1>/VeASLR_b_TSR_Req_read'
         */
        VeASLI_b_TSR_ReqOvrrd = Rte_IrvRead_ASLR_MedTEB_TSR_Req_write_IRV();
    }

    /* End of Switch: '<S21>/Switch49' */

    /* Switch: '<S21>/Switch50' incorporates:
     *  Constant: '<S520>/Calib'
     */
    if (KeASLR_b_HDC_Proxi_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch50' incorporates:
         *  Constant: '<S521>/Calib'
         *  Inport: '<Root>/VePLTR_b_Hill_Des_Stat_Prx'
         */
        VeASLI_b_Hill_Stat_Prx = KeASLR_b_HDC_Proxi_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch50' */

    /* Switch: '<S21>/Switch51' incorporates:
     *  Constant: '<S478>/Calib'
     */
    if (KeASLR_b_Autonomy_Lvl_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch51' incorporates:
         *  Constant: '<S584>/Calib'
         *  Inport: '<Root>/VePLTR_e_Proxi_Autonomy_Lvl'
         */
        VeASLI_e_AutonomyLvl_Prx = KeASLR_e_Autonomy_Lvl_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch51' */

    /* Switch: '<S21>/Switch52' incorporates:
     *  Constant: '<S480>/Calib'
     */
    if (KeASLR_b_CC_Logic_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch52' incorporates:
         *  Constant: '<S586>/Calib'
         *  Inport: '<Root>/VePLTR_e_Proxi_CC_Logic'
         */
        VeASLI_e_CruiseCntrl_Logic = KeASLR_e_CC_Logic_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch52' */

    /* Switch: '<S21>/Switch53' incorporates:
     *  Constant: '<S522>/Calib'
     */
    if (KeASLR_b_HDC_Status_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch53' incorporates:
         *  Constant: '<S588>/Calib'
         */
        VeASLI_e_Hill_Des_Stat = KeASLR_e_HDC_Status_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch53' incorporates:
         *  Merge: '<Root>/Merge_14'
         *  SignalConversion generated from: '<S1>/VeASLR_e_Hill_Des_Status_read'
         */
        VeASLI_e_Hill_Des_Stat =
            Rte_IrvRead_ASLR_MedTEB_Hill_Des_St_Init_write_IRV();
    }

    /* End of Switch: '<S21>/Switch53' */

    /* Switch: '<S21>/Switch54' incorporates:
     *  Constant: '<S577>/Calib'
     */
    if (KeASLR_b_TerrainMd_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch54' incorporates:
         *  Constant: '<S597>/Calib'
         *  Inport: '<Root>/VeTMDR_e_TrrnMd'
         */
        VeASLI_e_TerrainMd = KeASLR_e_TerrainMd_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch54' */

    /* Switch: '<S21>/Switch55' incorporates:
     *  Constant: '<S500>/Calib'
     */
    if (KeASLR_b_CcFailStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch55' incorporates:
         *  Constant: '<S501>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcFailStsFA'
         */
        VeASLI_b_CcFailStsFA = KeASLR_b_CcFailStsFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch55' */

    /* Switch: '<S21>/Switch56' incorporates:
     *  Constant: '<S518>/Calib'
     */
    if (KeASLR_b_HDC_FA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch56' incorporates:
         *  Constant: '<S519>/Calib'
         */
        VeASLI_b_HDC_FA = KeASLR_b_HDC_FA_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch56' incorporates:
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S1>/VeASLR_b_Hill_Des_StatusFA_read'
         */
        VeASLI_b_HDC_FA = Rte_IrvRead_ASLR_MedTEB_HDC_FA_Init_write_IRV();
    }

    /* End of Switch: '<S21>/Switch56' */

    /* Switch: '<S21>/Switch57' incorporates:
     *  Constant: '<S469>/Calib'
     */
    if (KeASLR_b_ACCSystemStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch57' incorporates:
         *  Constant: '<S470>/Calib'
         *  Inport: '<Root>/VePLTR_b_ACCSystemSts_FA'
         */
        VeASLI_b_ACCSystemStsFA = KeASLR_b_ACCSystemStsFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch57' */

    /* Switch: '<S21>/Switch58' incorporates:
     *  Constant: '<S568>/Calib'
     */
    if (KeASLR_b_SpeedUnitFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch58' incorporates:
         *  Constant: '<S569>/Calib'
         *  Inport: '<Root>/VePLTR_b_SpeedUnit_FA'
         */
        VeASLI_b_SpeedUnitFA = KeASLR_b_SpeedUnitFA_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch58' */

    /* Switch: '<S21>/Switch59' incorporates:
     *  Constant: '<S572>/Calib'
     */
    if (KeASLR_b_TSRStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch59' incorporates:
         *  Constant: '<S573>/Calib'
         */
        VeASLI_b_TSRStsFA = KeASLR_b_TSRStsFA_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch59' incorporates:
         *  Merge: '<Root>/Merge_3'
         *  SignalConversion generated from: '<S1>/VeASLR_b_TSRStsFA_read'
         */
        VeASLI_b_TSRStsFA = Rte_IrvRead_ASLR_MedTEB_TSRStsFA_Init_write_IRV();
    }

    /* End of Switch: '<S21>/Switch59' */

    /* Switch: '<S21>/Switch60' incorporates:
     *  Constant: '<S513>/Calib'
     */
    if (KeASLR_b_DsplydSpdLimStsFA_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch60' incorporates:
         *  Constant: '<S514>/Calib'
         */
        VeASLI_b_DsplydSpdLimStsFA = KeASLR_b_DsplydSpdLimStsFA_OvrrdVal;
    }
    else
    {
        /* Switch: '<S21>/Switch60' incorporates:
         *  Merge: '<Root>/Merge_4'
         *  SignalConversion generated from: '<S1>/VeASLR_b_DsplydSpdLimStsFA_read'
         */
        VeASLI_b_DsplydSpdLimStsFA =
            Rte_IrvRead_ASLR_MedTEB_DsplydSpdLimStsFA_Init_write_IRV();
    }

    /* End of Switch: '<S21>/Switch60' */

    /* Switch: '<S21>/Switch62' incorporates:
     *  Constant: '<S580>/Calib'
     */
    if (KeASLR_b_VehSpdSigned_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch62' incorporates:
         *  Constant: '<S607>/Calib'
         *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
         */
        VeASLI_v_VehSpdSigned = KeASLR_v_VehSpdSigned_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch62' */

    /* Switch: '<S21>/Switch63' incorporates:
     *  Constant: '<S563>/Calib'
     */
    if (KeASLR_b_SpdLimEEProgStatus_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch63' incorporates:
         *  Constant: '<S602>/Calib'
         *  Inport: '<Root>/VeBSWR_e_SpdLimEEProgStatus'
         */
        VeASLI_e_SpdLimEEProgStatus = KeASLR_i_SpdLimEEProgStatus_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch63' */

    /* Switch: '<S21>/Switch64' incorporates:
     *  Constant: '<S534>/Calib'
     */
    if (KeASLR_b_OperationalModeStsOvrrdEnbl)
    {
        /* Switch: '<S21>/Switch64' incorporates:
         *  Constant: '<S590>/Calib'
         *  Inport: '<Root>/VePMDR_e_OperationalModeSts'
         */
        VeASLI_e_OperationalModeSts = KeASLR_e_OperationalModeStsOvrrdVal;
    }

    /* End of Switch: '<S21>/Switch64' */

    /* Switch: '<S21>/Switch65' incorporates:
     *  Constant: '<S557>/Calib'
     */
    if (KeASLR_b_RrAxleTrqRespType_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch65' incorporates:
         *  Constant: '<S594>/Calib'
         *  Inport: '<Root>/VeDTRR_e_RrAxleTrqRespType'
         */
        VeASLI_e_RrAxleTrqRespType = KeASLR_e_RrAxleTrqRespType_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch65' */

    /* Switch: '<S21>/Switch66' incorporates:
     *  Constant: '<S523>/Calib'
     */
    if (KeASLR_b_HomSpdLim_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch66' incorporates:
         *  Constant: '<S606>/Calib'
         */
        Switch66 = KeASLR_v_HomSpdLim_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch66' */

    /* Switch: '<S21>/Switch72' incorporates:
     *  Constant: '<S477>/Calib'
     */
    if (KeASLR_b_Arb_TerrainMd_OvrrdEnbl)
    {
        /* Switch: '<S21>/Switch72' incorporates:
         *  Constant: '<S608>/Calib'
         */
        Switch72 = KeASLR_e_Arb_TerrainMd_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch72' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLC'
     */
    /* Logic: '<S39>/Logical Operator8' incorporates:
     *  Constant: '<S132>/Calib'
     *  Constant: '<S26>/Constant Value11'
     *  RelationalOperator: '<S26>/Comparison11'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Logical Operator2'
     */
    rtb_LogicalOperator8_c = ((((sint32)VeASLI_e_SpdLimEEProgStatus) & ((sint32)
        KeASLR_y_EEProgStsBitMask1)) > 0);

    /* DataStoreRead: '<S20>/Data Store Read' */
    rtb_VeASLC_v_ServiceToolSpdLim = AeASLR_v_STSLSpdLimMPH;

    /* Switch: '<S450>/temp SetSpd 6' incorporates:
     *  Constant: '<S134>/Calib'
     *  Constant: '<S26>/Constant Value1'
     *  RelationalOperator: '<S26>/Comparison1'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Logical Operator4'
     */
    rtb_tempSetSpd6 = ((((sint32)VeASLI_e_SpdLimEEProgStatus) & ((sint32)
                         KeASLR_y_EEProgStsBitMask3)) > 0);

    /* If: '<S26>/If' incorporates:
     *  Constant: '<S133>/Calib'
     *  Constant: '<S26>/Constant Value12'
     *  Constant: '<S26>/Constant Value2'
     *  DataStoreRead: '<S20>/Data Store Read'
     *  Logic: '<S26>/Logical1'
     *  Logic: '<S26>/Logical12'
     *  RelationalOperator: '<S26>/Comparison12'
     *  RelationalOperator: '<S26>/Comparison4'
     *  RelationalOperator: '<S26>/Comparison5'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Logical Operator1'
     */
    if (rtb_LogicalOperator8_c && (255.0F == AeASLR_v_STSLSpdLimMPH))
    {
        /* Outputs for IfAction SubSystem: '<S26>/Action1' incorporates:
         *  ActionPort: '<S122>/Action Port'
         */
        ASLR_ac_Action1(255.0F, (&(VeASLC_r_ASL_Mult)), &rtb_Merge2,
                        (&(VeASLC_b_SpdInfoTmrEnblr)));

        /* End of Outputs for SubSystem: '<S26>/Action1' */
    }
    else if ((((sint32)VeASLI_e_SpdLimEEProgStatus) & ((sint32)
               KeASLR_y_EEProgStsBitMask2)) == 0)
    {
        /* Outputs for IfAction SubSystem: '<S26>/Action2Action3' incorporates:
         *  ActionPort: '<S123>/Action Port'
         */
        /* Merge: '<S26>/Merge' incorporates:
         *  Constant: '<S123>/Constant Value4'
         *  Gain: '<S139>/Gain'
         *  Product: '<S123>/Product1'
         */
        VeASLC_r_ASL_Mult = AeASLR_v_STSLSpdLimMPH * 1.60934401F;

        /* Merge: '<S26>/Merge2' incorporates:
         *  Gain: '<S140>/Gain'
         */
        rtb_Merge2 = AeASLR_v_STSLSpdLimMPH;

        /* Merge: '<S26>/Merge1' incorporates:
         *  Constant: '<S123>/TRUE Constant'
         *  SignalConversion generated from: '<S123>/STSL_SpdInfoTmrEnbl'
         */
        VeASLC_b_SpdInfoTmrEnblr = true;

        /* End of Outputs for SubSystem: '<S26>/Action2Action3' */
    }
    else if (rtb_tempSetSpd6 && (255.0F != AeASLR_v_STSLSpdLimMPH))
    {
        /* Outputs for IfAction SubSystem: '<S26>/Action4' incorporates:
         *  ActionPort: '<S124>/Action Port'
         */
        /* Merge: '<S26>/Merge2' incorporates:
         *  Gain: '<S141>/Gain'
         */
        rtb_Merge2 = AeASLR_v_STSLSpdLimMPH;

        /* Merge: '<S26>/Merge' incorporates:
         *  Constant: '<S124>/Constant Value4'
         *  Gain: '<S142>/Gain'
         *  Product: '<S124>/Product1'
         */
        VeASLC_r_ASL_Mult = AeASLR_v_STSLSpdLimMPH * 1.60934401F;

        /* Merge: '<S26>/Merge1' incorporates:
         *  Constant: '<S124>/FALSE Constant'
         *  SignalConversion generated from: '<S124>/STSL_SpdInfoTmrEnbl'
         */
        VeASLC_b_SpdInfoTmrEnblr = false;

        /* End of Outputs for SubSystem: '<S26>/Action4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S130>/Action Port'
         */
        ASLR_ac_Action1(255.0F, (&(VeASLC_r_ASL_Mult)), &rtb_Merge2,
                        (&(VeASLC_b_SpdInfoTmrEnblr)));

        /* End of Outputs for SubSystem: '<S26>/If Action Subsystem3' */
    }

    /* End of If: '<S26>/If' */

    /* DataStoreWrite: '<S26>/Data Store Write' */
    AeASLR_v_STSLSpdLimMPH = rtb_Merge2;

    /* Logic: '<S26>/Logical10' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S128>/Constant'
     *  Constant: '<S129>/Constant'
     *  Logic: '<S26>/Logical6'
     *  RelationalOperator: '<S26>/Comparison10'
     *  RelationalOperator: '<S26>/Comparison7'
     *  RelationalOperator: '<S26>/Comparison8'
     */
    rtb_Logical10 = ((((((uint32)VeASLI_e_OperationalModeSts) == CePMDR_e_Ign_On)
                       || (((uint32)VeASLI_e_OperationalModeSts) ==
                           CePMDR_e_Ign_Start)) || (((uint32)
                        VeASLI_e_OperationalModeSts) == CePMDR_e_Ign_On_EngOn)) &&
                     (VeASLC_b_SpdInfoTmrEnblr));

    /* Outputs for Atomic SubSystem: '<S26>/Counter Reset  Enabled ' */
    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S125>/Constant Value2'
     *  Logic: '<S26>/Logical11'
     *  Logic: '<S26>/Logical3'
     *  Switch: '<S125>/Switch2'
     *  UnitDelay: '<S125>/Unit Delay'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    if ((rtb_LogicalOperator8_c || rtb_tempSetSpd6) ||
            (ASLR_ac_DW.UnitDelay_DSTATE_mj))
    {
        ASLR_ac_DW.UnitDelay_DSTATE_db = 0U;
    }
    else
    {
        if (rtb_Logical10)
        {
            /* UnitDelay: '<S125>/Unit Delay' incorporates:
             *  Constant: '<S125>/Constant Value1'
             *  Sum: '<S125>/Subtraction'
             *  Switch: '<S125>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_db = (uint16)(((uint32)
                ASLR_ac_DW.UnitDelay_DSTATE_db) + 1U);
        }
    }

    /* End of Switch: '<S125>/Switch' */
    /* End of Outputs for SubSystem: '<S26>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S26>/Comparison14' incorporates:
     *  Constant: '<S131>/Calib'
     *  UnitDelay: '<S125>/Unit Delay'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_mj = (ASLR_ac_DW.UnitDelay_DSTATE_db >=
        KeASLR_Cnt_STSLDeactTime);

    /* Outputs for Atomic SubSystem: '<S26>/EdgeRising' */
    /* Logic: '<S126>/OR1' incorporates:
     *  UnitDelay: '<S126>/Unit Delay'
     */
    rtb_LogicalOperator8_c = !ASLR_ac_DW.UnitDelay_DSTATE_nm;

    /* Update for UnitDelay: '<S126>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_nm = rtb_Logical10;

    /* End of Outputs for SubSystem: '<S26>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S26>/Limiter' */
    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<S26>/Constant Value2'
     *  RelationalOperator: '<S135>/Relational Operator'
     */
    if (255.0F < VeASLC_r_ASL_Mult)
    {
        /* Switch: '<S422>/Switch1' */
        VeASLC_r_ASL_Mult = 255.0F;
    }

    /* End of Switch: '<S135>/Switch1' */

    /* Switch: '<S135>/Switch' incorporates:
     *  Constant: '<S26>/Constant Value4'
     *  RelationalOperator: '<S135>/Relational Operator1'
     */
    if (VeASLC_r_ASL_Mult > 0.0F)
    {
        /* Switch: '<S135>/Switch' */
        VeASLC_v_ServiceToolSpdLimKPH = VeASLC_r_ASL_Mult;
    }
    else
    {
        /* Switch: '<S135>/Switch' */
        VeASLC_v_ServiceToolSpdLimKPH = 0.0F;
    }

    /* End of Switch: '<S135>/Switch' */
    /* End of Outputs for SubSystem: '<S26>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S26>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S26>/EdgeRising' */
    /* Logic: '<S136>/OR1' incorporates:
     *  Logic: '<S126>/AND'
     *  Logic: '<S136>/NOT'
     *  Logic: '<S136>/OR'
     *  UnitDelay: '<S136>/Unit Delay'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    VeASLR_b_ServiceToolSpdInfoAct = ((rtb_Logical10 && rtb_LogicalOperator8_c) ||
        ((!ASLR_ac_DW.UnitDelay_DSTATE_mj) && (VeASLR_b_ServiceToolSpdInfoAct)));

    /* End of Outputs for SubSystem: '<S26>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S26>/Signal Latch On With Reset' */

    /* Logic: '<S39>/Logical Operator8' incorporates:
     *  Constant: '<S353>/Constant'
     *  RelationalOperator: '<S39>/Comparison3'
     */
    rtb_LogicalOperator8_c = (((uint32)VeASLI_e_ProxiACC) != CePLTR_e_ACC_Absent);

    /* Switch: '<S39>/temp SetSpd 6' incorporates:
     *  Constant: '<S107>/Calib'
     *  Constant: '<S356>/Constant'
     *  RelationalOperator: '<S39>/Comparison4'
     *  Switch: '<S21>/Switch52'
     */
    if (HeASLR_b_M182ProgrammPrsnc)
    {
        AND_nk = (((uint32)VeASLI_e_CruiseCntrl_Logic) == CePLTR_e_Logic2);
    }
    else
    {
        AND_nk = HeASLR_b_M182ProgrammPrsnc;
    }

    /* End of Switch: '<S39>/temp SetSpd 6' */

    /* Logic: '<S39>/Logical Operator7' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S39>/temp SetSpd 3'
     */
    rtb_LogicalOperator7 = (((VeASLI_b_ProxiCC) || AND_nk) ||
                            ((HeASLR_b_M182ProgrammPrsnc) &&
        rtb_LogicalOperator8_c));

    /* Logic: '<S39>/Logical Operator2' */
    rtb_Logical10 = ((VeASLR_b_ACC_On) && rtb_LogicalOperator8_c);

    /* Logic: '<S39>/Logical Operator8' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S39>/temp SetSpd 1'
     */
    rtb_LogicalOperator8_c = ((HeASLR_b_M182ProgrammPrsnc) ||
        rtb_LogicalOperator8_c);

    /* Switch: '<S39>/temp SetSpd 2' incorporates:
     *  Constant: '<S107>/Calib'
     */
    if (HeASLR_b_M182ProgrammPrsnc)
    {
        /* Switch: '<S450>/temp SetSpd 6' incorporates:
         *  Constant: '<S355>/Constant'
         *  Constant: '<S357>/Constant'
         *  Logic: '<S39>/Logical Operator5'
         *  RelationalOperator: '<S39>/Comparison2'
         *  RelationalOperator: '<S39>/Comparison5'
         */
        rtb_tempSetSpd6 = ((((uint32)VeASLI_e_AutonomyLvl_Prx) ==
                            CePLTR_e_Level2) || (((uint32)
                             VeASLI_e_AutonomyLvl_Prx) == CePLTR_e_Level2_Plus));
    }
    else
    {
        /* Switch: '<S450>/temp SetSpd 6' incorporates:
         *  Logic: '<S39>/Logical Operator6'
         */
        rtb_tempSetSpd6 = !HeASLR_b_M182ProgrammPrsnc;
    }

    /* End of Switch: '<S39>/temp SetSpd 2' */

    /* Logic: '<S39>/Logical Operator8' */
    rtb_LogicalOperator8_c = ((rtb_LogicalOperator8_c &&
        (VeASLI_b_LaneCenteringOnOffSts)) && rtb_tempSetSpd6);

    /* Switch: '<S20>/temp SetSpd 2' */
    if (VeASLI_b_HDC_FA)
    {
        /* RelationalOperator: '<S39>/Comparison7' incorporates:
         *  Constant: '<S42>/Constant'
         *  Switch: '<S20>/temp SetSpd 2'
         */
        VeASLC_e_Hill_Des_Stat = CeASLR_e_HDC_UNAVL;
    }
    else
    {
        /* RelationalOperator: '<S39>/Comparison7' incorporates:
         *  Switch: '<S20>/temp SetSpd 2'
         *  Switch: '<S21>/Switch53'
         */
        VeASLC_e_Hill_Des_Stat = VeASLI_e_Hill_Des_Stat;
    }

    /* End of Switch: '<S20>/temp SetSpd 2' */

    /* Logic: '<S39>/Logical Operator9' incorporates:
     *  Constant: '<S358>/Constant'
     *  Constant: '<S359>/Constant'
     *  RelationalOperator: '<S39>/Comparison6'
     *  RelationalOperator: '<S39>/Comparison7'
     *  UnitDelay: '<S39>/Unit Delay2'
     */
    VeASLR_b_HDC_Control_Deactivation = (((((uint32)
        ASLR_ac_DW.UnitDelay2_DSTATE_jk) == CeASLR_e_HDC_UNAVL) && (((uint32)
        VeASLC_e_Hill_Des_Stat) == CeASLR_e_HDC_AVL)) && (VeASLI_b_Hill_Stat_Prx));

    /* Switch: '<S39>/temp SetSpd 4' incorporates:
     *  Constant: '<S363>/Calib'
     */
    rtb_tempSetSpd4_n = ((HeASLR_b_HDCCtrlDeactivation) &&
                         (VeASLR_b_HDC_Control_Deactivation));

    /* RelationalOperator: '<S39>/Comparison8' incorporates:
     *  Logic: '<S39>/Logical Operator10'
     *  Logic: '<S39>/Logical Operator11'
     *  RelationalOperator: '<S39>/Comparison10'
     *  RelationalOperator: '<S39>/Comparison9'
     *  SignalConversion generated from: '<S39>/VariantSource'
     */
#if Rte_SysCon_Variant_ASLR_1

    /* Outputs for Function Call SubSystem: '<S1>/ASLI_Inputs' */
    /* Switch: '<S21>/Switch69' incorporates:
     *  Constant: '<S552>/Calib'
     *  Constant: '<S553>/Calib'
     */
    if (KeASLR_b_RRCCPROXI_OvrrdEnbl)
    {
        rtb_AND_je = KeASLR_b_RRCCPROXI_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch69' */
    /* End of Outputs for SubSystem: '<S1>/ASLI_Inputs' */

    /* Switch: '<S450>/temp SetSpd 6' incorporates:
     *  Constant: '<S360>/Constant'
     *  Constant: '<S361>/Constant'
     *  Constant: '<S362>/Constant'
     */
    rtb_tempSetSpd6 = (rtb_AND_je && (((((uint32)VeASLI_e_ACCSystemSts) ==
                          CePLTR_e_RRCC_Enabled_No_Set_Speed) || (((uint32)
                           VeASLI_e_ACCSystemSts) ==
                          CePLTR_e_RRCC_Enabled_With_Set_Speed)) || (((uint32)
                          VeASLI_e_ACCSystemSts) == CePLTR_e_RRCC_Engaged)));

#else

    /* Switch: '<S450>/temp SetSpd 6' incorporates:
     *  Constant: '<S39>/FALSE Constant'
     *  SignalConversion generated from: '<S39>/VariantSource'
     */
    rtb_tempSetSpd6 = false;

#endif

    /* End of RelationalOperator: '<S39>/Comparison8' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLI_Inputs'
     */
    /* Switch: '<S21>/Switch67' incorporates:
     *  Constant: '<S516>/Calib'
     *  Constant: '<S517>/Calib'
     */
    if (KeASLR_b_HDCEnabledCAN_OvrrdEnbl)
    {
        rtb_AND_py = KeASLR_b_HDCEnabledCAN_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch67' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLC'
     */
    /* Logic: '<S39>/Logical Operator' incorporates:
     *  Constant: '<S109>/Calib'
     *  Logic: '<S39>/Logical Operator1'
     *  Logic: '<S39>/Logical Operator4'
     */
    VeASLC_b_CCorACCorHAS_On = (((((((VeASLI_b_CcOnOffSts) &&
        rtb_LogicalOperator7) || rtb_Logical10) || rtb_LogicalOperator8_c) ||
        rtb_tempSetSpd4_n) || (((HeASLR_b_x250ProgrammPrsnc) && rtb_AND_py) &&
        (VeASLI_b_Hill_Stat_Prx))) || rtb_tempSetSpd6);

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising' */
    /* Logic: '<S64>/AND' incorporates:
     *  Logic: '<S64>/OR1'
     *  UnitDelay: '<S64>/Unit Delay'
     */
    rtb_AND_je = ((VeASLI_b_SpdLmtrOnOffSts) && (!ASLR_ac_DW.UnitDelay_DSTATE_ob));

    /* Update for UnitDelay: '<S64>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ob = VeASLI_b_SpdLmtrOnOffSts;

    /* End of Outputs for SubSystem: '<S22>/EdgeRising' */

    /* Switch: '<S25>/Switch8' incorporates:
     *  Constant: '<S112>/Calib'
     */
    if (KeASLR_b_LP3Presence)
    {
        /* Switch: '<S450>/temp SetSpd 6' incorporates:
         *  Constant: '<S106>/Constant'
         *  RelationalOperator: '<S25>/Comparison11'
         *  Switch: '<S21>/Switch54'
         */
        rtb_tempSetSpd6 = (((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_Corsa);
    }
    else
    {
        /* Switch: '<S450>/temp SetSpd 6' */
        rtb_tempSetSpd6 = KeASLR_b_LP3Presence;
    }

    /* End of Switch: '<S25>/Switch8' */

    /* Logic: '<S39>/Logical Operator3' incorporates:
     *  Constant: '<S354>/Constant'
     *  RelationalOperator: '<S39>/Comparison1'
     */
    VeASLC_b_ASLOff = ((((VeASLC_b_CCorACCorHAS_On) || rtb_AND_je) || (((uint32)
                          VeASLI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Off)) ||
                       rtb_tempSetSpd6);

    /* RelationalOperator: '<S24>/Comparison1' incorporates:
     *  Constant: '<S99>/Calib'
     */
    VeASLC_b_ASLKickdown = (VeASLR_Pct_AccelPedalEffPosition >=
                            KeASLR_Pct_ASLKickdownThresh);

    /* Outputs for Atomic SubSystem: '<S96>/EdgeRising' */
    /* Logic: '<S105>/AND' incorporates:
     *  Logic: '<S105>/OR1'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    rtb_AND_py = !ASLR_ac_DW.UnitDelay_DSTATE_id;

    /* Update for UnitDelay: '<S105>/Unit Delay' incorporates:
     *  Constant: '<S96>/TRUE Constant'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_id = true;

    /* End of Outputs for SubSystem: '<S96>/EdgeRising' */

    /* Switch: '<S96>/Switch' incorporates:
     *  Constant: '<S103>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S24>/Constant Value1'
     *  Logic: '<S96>/Logical1'
     *  Product: '<S96>/Product'
     *  Product: '<S96>/Product1'
     *  Sum: '<S96>/Sum1'
     *  Sum: '<S96>/Sum2'
     *  UnitDelay: '<S96>/Unit Delay1'
     *  UnitDelay: '<S96>/Unit Delay2'
     */
    if (rtb_AND_py)
    {
        ASLR_ac_DW.UnitDelay2_DSTATE = 0.0F;
    }
    else
    {
        ASLR_ac_DW.UnitDelay2_DSTATE = ((VeASLR_Pct_AccelPedalEffPosition -
            ASLR_ac_DW.UnitDelay1_DSTATE) * KeASLR_k_GasPdlKuGrdnt) +
            (ASLR_ac_DW.UnitDelay2_DSTATE * KeASLR_k_GasPdlKyGrdnt);
    }

    /* End of Switch: '<S96>/Switch' */

    /* Outputs for Atomic SubSystem: '<S24>/EdgeFalling' */
    /* Logic: '<S95>/AND' incorporates:
     *  Logic: '<S95>/OR1'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_AND_py = ((!VeASLC_b_ASLKickdown) && (ASLR_ac_DW.UnitDelay_DSTATE_l4));

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_l4 = VeASLC_b_ASLKickdown;

    /* End of Outputs for SubSystem: '<S24>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S24>/Counter Reset  Enabled ' */
    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S94>/Constant Value2'
     *  Logic: '<S24>/Logical2'
     *  RelationalOperator: '<S24>/Comparison2'
     *  RelationalOperator: '<S24>/Comparison3'
     *  Switch: '<S94>/Switch2'
     *  UnitDelay: '<S94>/Unit Delay'
     *  UnitDelay: '<S96>/Unit Delay2'
     */
    if ((VeASLR_Pct_AccelPedalEffPosition < KeASLR_Pct_ASLOvrrdDeactThresh) ||
            rtb_AND_py)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_dx = 0U;
    }
    else
    {
        if (ASLR_ac_DW.UnitDelay2_DSTATE >= KeASLR_dPct_ASLOvrrdDltThresh)
        {
            /* UnitDelay: '<S94>/Unit Delay' incorporates:
             *  Constant: '<S94>/Constant Value1'
             *  Sum: '<S94>/Subtraction'
             *  Switch: '<S94>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_dx = (uint16)(((uint32)
                ASLR_ac_DW.UnitDelay_DSTATE_dx) + 1U);
        }
    }

    /* End of Switch: '<S94>/Switch' */
    /* End of Outputs for SubSystem: '<S24>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S24>/Hysteresis_1' */
    /* Switch: '<S97>/Switch1' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S101>/Calib'
     *  Constant: '<S97>/Constant Value'
     *  RelationalOperator: '<S97>/Greater  Than'
     *  RelationalOperator: '<S97>/Greater  Than1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    if (VeASLR_Pct_AccelPedalEffPosition >= KeASLR_Pct_ASLOvrrdActThresh)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_cm0 = true;
    }
    else
    {
        ASLR_ac_DW.UnitDelay_DSTATE_cm0 = ((VeASLR_Pct_AccelPedalEffPosition >
            KeASLR_Pct_ASLOvrrdDeactThresh) && (ASLR_ac_DW.UnitDelay_DSTATE_cm0));
    }

    /* End of Switch: '<S97>/Switch1' */
    /* End of Outputs for SubSystem: '<S24>/Hysteresis_1' */

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S98>/Calib'
     *  Logic: '<S24>/Logical'
     *  RelationalOperator: '<S24>/Comparison4'
     *  UnitDelay: '<S94>/Unit Delay'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    if (HeASLR_b_x250ProgrammPrsnc)
    {
        AND_nk = ((((float32)ASLR_ac_DW.UnitDelay_DSTATE_dx) >=
                   KeASLR_Cnt_ASLAcclGrdActTime) &&
                  (ASLR_ac_DW.UnitDelay_DSTATE_cm0));
    }
    else
    {
        AND_nk = HeASLR_b_x250ProgrammPrsnc;
    }

    /* End of Switch: '<S24>/Switch' */

    /* Logic: '<S24>/Logical1' */
    rtb_AND_py = ((VeASLC_b_ASLKickdown) || AND_nk);

    /* Outputs for Atomic SubSystem: '<S27>/Protected Division' */
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S162>/Calib'
     *  Constant: '<S165>/Constant Value'
     *  Constant: '<S165>/Constant Value2'
     *  Constant: '<S165>/Constant Value3'
     *  RelationalOperator: '<S165>/Greater Than or Equal '
     *  RelationalOperator: '<S165>/Greater Than or Equal 1'
     *  RelationalOperator: '<S165>/Not Equal'
     *  Switch: '<S165>/Switch2'
     *  Switch: '<S165>/Switch3'
     */
    if (KeASLR_t_Actv_wRampExitThresh != 0.0F)
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Constant: '<S27>/Constant Value'
         *  MinMax: '<S27>/MinMax1'
         *  Product: '<S165>/Division'
         */
        Switch1_n = KeASLR_t_Actv_wRampExitThresh / fmaxf(HeASLR_t_dT, 0.0125F);
    }
    else if (KeASLR_t_Actv_wRampExitThresh > 0.0F)
    {
        /* Switch: '<S165>/Switch2' incorporates:
         *  Constant: '<S165>/MAXFLOAT'
         *  Switch: '<S165>/Switch1'
         */
        Switch1_n = 3.402823466E+38F;
    }
    else if (KeASLR_t_Actv_wRampExitThresh < 0.0F)
    {
        /* Switch: '<S165>/Switch3' incorporates:
         *  Constant: '<S165>/MINFLOAT'
         *  Switch: '<S165>/Switch1'
         *  Switch: '<S165>/Switch2'
         */
        Switch1_n = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S165>/Constant Value4'
         *  Switch: '<S165>/Switch2'
         *  Switch: '<S165>/Switch3'
         */
        Switch1_n = 0.0F;
    }

    /* End of Switch: '<S165>/Switch1' */
    /* End of Outputs for SubSystem: '<S27>/Protected Division' */

    /* Switch: '<S73>/Switch1' */
    if (VeASLI_b_VehSpdVSOSigFailSts)
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator1'
         *  Switch: '<S73>/Switch'
         */
        rtb_Switch1_k = (uint16)((sint32)((VeASLR_b_CanSigVehSpdFA ? 1 : 0) |
            ((uint8)2)));
    }
    else
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  Switch: '<S73>/Switch'
         */
        rtb_Switch1_k = VeASLR_b_CanSigVehSpdFA ? ((uint16)1) : ((uint16)0);
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Switch: '<S73>/Switch2' incorporates:
     *  Constant: '<S74>/Constant'
     *  RelationalOperator: '<S23>/Pedal not OK'
     *  Switch: '<S21>/Switch22'
     */
    if (((uint32)VeASLR_e_Lv1PVMode) != CeAPSR_e_LV1PVMode_PVOk)
    {
        /* Switch: '<S73>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S86>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)4;
    }

    /* End of Switch: '<S73>/Switch2' */

    /* Switch: '<S73>/Switch3' */
    if (VeASLR_b_Lv1CrusSwStuckFailed)
    {
        /* Switch: '<S73>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S87>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)8;
    }

    /* End of Switch: '<S73>/Switch3' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLI_Inputs'
     */
    /* Switch: '<S21>/Switch61' incorporates:
     *  Constant: '<S558>/Calib'
     *  Constant: '<S559>/Calib'
     */
    if (KeASLR_b_GRAR_DisableASL_OvrrdEnbl)
    {
        rtb_AND_bt = KeASLR_b_GRAR_DisableASL_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch61' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLC'
     */
    /* Switch: '<S73>/Switch4' incorporates:
     *  Logic: '<S23>/Logical Operator'
     */
    if (rtb_AND_bt || (VeASLI_b_InhibitActvSpdLmtr))
    {
        /* Switch: '<S73>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S88>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)16;
    }

    /* End of Switch: '<S73>/Switch4' */

    /* Switch: '<S73>/Switch12' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 4'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLR_b_ACC_OnFA))
    {
        /* Switch: '<S73>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)32;
    }

    /* End of Switch: '<S73>/Switch12' */

    /* Switch: '<S73>/Switch5' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 5'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLI_b_SpdLmtrOnOffStsFA))
    {
        /* Switch: '<S73>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S89>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)64;
    }

    /* End of Switch: '<S73>/Switch5' */

    /* Switch: '<S73>/Switch6' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 7'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLR_b_CcFailSts))
    {
        /* Switch: '<S73>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S90>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)128;
    }

    /* End of Switch: '<S73>/Switch6' */

    /* Switch: '<S73>/Switch7' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 8'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLR_b_CcAccelStsFA))
    {
        /* Switch: '<S73>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S91>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)256;
    }

    /* End of Switch: '<S73>/Switch7' */

    /* Switch: '<S73>/Switch8' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 9'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLR_b_CcDecelStsFA))
    {
        /* Switch: '<S73>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S92>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)512;
    }

    /* End of Switch: '<S73>/Switch8' */

    /* Switch: '<S73>/Switch10' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 10'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLR_b_CcResumeSwFA))
    {
        /* Switch: '<S73>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S80>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)1024;
    }

    /* End of Switch: '<S73>/Switch10' */

    /* Switch: '<S73>/Switch11' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 11'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLR_b_CcCancelSwFA))
    {
        /* Switch: '<S73>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S81>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)2048;
    }

    /* End of Switch: '<S73>/Switch11' */

    /* Switch: '<S73>/Switch13' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 12'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLI_b_LaneCenteringOnOffStsFA))
    {
        /* Switch: '<S73>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S83>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)4096;
    }

    /* End of Switch: '<S73>/Switch13' */

    /* Switch: '<S73>/Switch9' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S23>/temp SetSpd 6'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLI_b_CcFailStsFA))
    {
        /* Switch: '<S73>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S93>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)8192;
    }

    /* End of Switch: '<S73>/Switch9' */

    /* Switch: '<S73>/Switch14' incorporates:
     *  Constant: '<S107>/Calib'
     *  S-Function (sfix_bitop): '<S84>/FixPt Bitwise Operator1'
     *  Switch: '<S23>/temp SetSpd 3'
     *  Switch: '<S366>/Switch1'
     */
    if ((HeASLR_b_M182ProgrammPrsnc) && (VeASLI_b_ACCSystemStsFA))
    {
        rtb_Switch1_k |= (uint16)16384;
    }

    /* End of Switch: '<S73>/Switch14' */

    /* S-Function (sfix_bitop): '<S23>/Bitwise_Logical_Operator' incorporates:
     *  Constant: '<S76>/Calib'
     */
    VeASLC_y_FatalFltRsn = (uint16)(rtb_Switch1_k & KeASLR_y_FatalFltRsn);

    /* Outputs for Atomic SubSystem: '<S23>/Signal Latch On With Reset' */
    /* Logic: '<S77>/OR1' incorporates:
     *  Constant: '<S75>/Constant'
     *  Logic: '<S77>/NOT'
     *  Logic: '<S77>/OR'
     *  RelationalOperator: '<S23>/Comparison4'
     *  RelationalOperator: '<S23>/Comparison9'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_bx = ((((sint32)VeASLC_y_FatalFltRsn) > 0) ||
        ((((uint32)VeASLI_e_PMM_PowerMode) != CePMDR_e_PowerMode_Off) &&
         (ASLR_ac_DW.UnitDelay_DSTATE_bx)));

    /* End of Outputs for SubSystem: '<S23>/Signal Latch On With Reset' */

    /* Logic: '<S369>/Logical Operator1' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S30>/temp SetSpd 1'
     *  Switch: '<S369>/temp SetSpd 6'
     */
    VeASLC_b_TSR_Req_On = !HeASLR_b_M182ProgrammPrsnc;

    /* Switch: '<S335>/Switch1' incorporates:
     *  Switch: '<S30>/temp SetSpd 1'
     */
    if ((VeASLC_b_TSR_Req_On) && (VeASLI_b_SpdLmtrOnOffStsFA))
    {
        /* Switch: '<S335>/Switch1' incorporates:
         *  Constant: '<S107>/Calib'
         *  S-Function (sfix_bitop): '<S338>/FixPt Bitwise Operator1'
         *  Switch: '<S30>/temp SetSpd 3'
         */
        rtb_Switch1_k = (uint16)((sint32)(((sint32)
            (((!HeASLR_b_M182ProgrammPrsnc) && (VeASLR_b_ACC_OnFA)) ? 1 : 0)) |
            ((uint8)2)));
    }
    else
    {
        /* Switch: '<S335>/Switch1' incorporates:
         *  Switch: '<S30>/temp SetSpd 3'
         */
        rtb_Switch1_k = (uint16)(((VeASLC_b_TSR_Req_On) && (VeASLR_b_ACC_OnFA)) ?
            1 : 0);
    }

    /* End of Switch: '<S335>/Switch1' */

    /* Switch: '<S335>/Switch2' incorporates:
     *  Switch: '<S30>/temp SetSpd 2'
     */
    if ((VeASLC_b_TSR_Req_On) && (VeASLR_b_CcFailSts))
    {
        /* Switch: '<S335>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S345>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)4;
    }

    /* End of Switch: '<S335>/Switch2' */

    /* Switch: '<S335>/Switch3' incorporates:
     *  Switch: '<S30>/temp SetSpd 4'
     */
    if ((VeASLC_b_TSR_Req_On) && (VeASLR_b_CcAccelStsFA))
    {
        /* Switch: '<S335>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S346>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)8;
    }

    /* End of Switch: '<S335>/Switch3' */

    /* Switch: '<S335>/Switch4' incorporates:
     *  Switch: '<S30>/temp SetSpd 5'
     */
    if ((VeASLC_b_TSR_Req_On) && (VeASLR_b_CcDecelStsFA))
    {
        /* Switch: '<S335>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S347>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)16;
    }

    /* End of Switch: '<S335>/Switch4' */

    /* Switch: '<S335>/Switch12' incorporates:
     *  Switch: '<S30>/temp SetSpd 6'
     */
    if ((VeASLC_b_TSR_Req_On) && (VeASLR_b_CcResumeSwFA))
    {
        /* Switch: '<S335>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S341>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)32;
    }

    /* End of Switch: '<S335>/Switch12' */

    /* Switch: '<S335>/Switch5' incorporates:
     *  Switch: '<S30>/temp SetSpd 7'
     */
    if ((VeASLC_b_TSR_Req_On) && (VeASLR_b_CcCancelSwFA))
    {
        /* Switch: '<S335>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S348>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)64;
    }

    /* End of Switch: '<S335>/Switch5' */

    /* Switch: '<S335>/Switch6' incorporates:
     *  Switch: '<S30>/temp SetSpd 8'
     */
    if ((VeASLC_b_TSR_Req_On) && (VeASLI_b_LaneCenteringOnOffStsFA))
    {
        /* Switch: '<S335>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S349>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)128;
    }

    /* End of Switch: '<S335>/Switch6' */

    /* Switch: '<S335>/Switch7' */
    if (VeASLI_b_ACCSystemStsFA)
    {
        /* Switch: '<S335>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S350>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)256;
    }

    /* End of Switch: '<S335>/Switch7' */

    /* Switch: '<S335>/Switch8' */
    if (VeASLI_b_VehSpdVSOSigFailSts)
    {
        /* Switch: '<S335>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S351>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_k |= (uint16)512;
    }

    /* End of Switch: '<S335>/Switch8' */

    /* Switch: '<S335>/Switch10' incorporates:
     *  S-Function (sfix_bitop): '<S339>/FixPt Bitwise Operator1'
     *  Switch: '<S366>/Switch1'
     */
    if (VeASLR_b_CanSigVehSpdFA)
    {
        rtb_Switch1_k |= (uint16)1024;
    }

    /* End of Switch: '<S335>/Switch10' */

    /* S-Function (sfix_bitop): '<S30>/Bitwise Logical Operator' incorporates:
     *  Constant: '<S336>/Calib'
     */
    VeASLC_y_TempFltRsn = (uint16)(rtb_Switch1_k & KeASLR_y_TempFltRsn);

    /* RelationalOperator: '<S30>/Comparison9' */
    VeASLR_b_TempFlt = (((sint32)VeASLC_y_TempFltRsn) > 0);

    /* Outputs for Atomic SubSystem: '<S22>/EdgeFalling' */
    /* Logic: '<S63>/AND' incorporates:
     *  Logic: '<S63>/OR1'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    rtb_AND_bt = ((!rtb_AND_je) && (ASLR_ac_DW.UnitDelay_DSTATE_ng));

    /* Update for UnitDelay: '<S63>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ng = rtb_AND_je;

    /* End of Outputs for SubSystem: '<S22>/EdgeFalling' */

    /* Switch: '<S22>/temp SetSpd 6' incorporates:
     *  Constant: '<S107>/Calib'
     *  Constant: '<S68>/Constant'
     *  RelationalOperator: '<S22>/Comparison4'
     *  Switch: '<S21>/Switch52'
     *  Switch: '<S22>/temp SetSpd 1'
     */
    if (HeASLR_b_M182ProgrammPrsnc)
    {
        AND_nk = (((uint32)VeASLI_e_CruiseCntrl_Logic) == CePLTR_e_Logic2);

        /* Switch: '<S22>/temp SetSpd 1' incorporates:
         *  Constant: '<S67>/Constant'
         *  Constant: '<S68>/Constant'
         *  Constant: '<S69>/Constant'
         *  Logic: '<S22>/Logical3'
         *  Logic: '<S22>/Logical6'
         *  RelationalOperator: '<S22>/Comparison2'
         *  RelationalOperator: '<S22>/Comparison4'
         *  RelationalOperator: '<S22>/Comparison5'
         *  Switch: '<S21>/Switch52'
         */
        VeASLC_b_M182_ConditionOn = (((((uint32)VeASLC_e_Hill_Des_Stat) ==
            CeASLR_e_HDC_UNAVL) || (((uint32)VeASLC_e_Hill_Des_Stat) ==
            CeASLR_e_HDC_AVL)) && (VeASLI_b_Hill_Stat_Prx));
    }
    else
    {
        AND_nk = HeASLR_b_M182ProgrammPrsnc;

        /* Switch: '<S22>/temp SetSpd 1' incorporates:
         *  Logic: '<S22>/Logical Operator1'
         */
        VeASLC_b_M182_ConditionOn = !HeASLR_b_M182ProgrammPrsnc;
    }

    /* End of Switch: '<S22>/temp SetSpd 6' */

    /* Outputs for Atomic SubSystem: '<S22>/Signal Latch On With Reset' */
    /* Logic: '<S72>/OR1' incorporates:
     *  Constant: '<S65>/Constant'
     *  Constant: '<S66>/Constant'
     *  Logic: '<S22>/Logical Operator2'
     *  Logic: '<S22>/Logical Operator3'
     *  Logic: '<S22>/Logical2'
     *  Logic: '<S22>/Logical5'
     *  Logic: '<S22>/Logical7'
     *  Logic: '<S72>/NOT'
     *  Logic: '<S72>/OR'
     *  RelationalOperator: '<S22>/Comparison1'
     *  RelationalOperator: '<S22>/Comparison3'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_mz = ((((((((uint32)VeASLI_e_ProxiACC) !=
        CePLTR_e_ACC_Absent) || AND_nk) && (((uint32)VeASLI_e_ACCSystemSts) !=
        CePLTR_e_Off)) && rtb_AND_je) || ((VeASLR_b_CcEnabled) && rtb_AND_je)) ||
        ((!rtb_AND_bt) && (ASLR_ac_DW.UnitDelay_DSTATE_mz)));

    /* End of Outputs for SubSystem: '<S22>/Signal Latch On With Reset' */

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S70>/Calib'
     *  Switch: '<S22>/Switch2'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    if (!Rte_Prm_KeASLR_b_ASLInstantActivationEnable_KeASLR_b_ASLInstantActivationEnable
            ())
    {
        rtb_AND_je = ((!ASLR_ac_DW.UnitDelay_DSTATE_mz) && rtb_AND_je);
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S71>/Calib'
     *  Logic: '<S22>/Logical9'
     */
    if (KeASLR_b_HDCCtrlDeactivationEnbl)
    {
        AND_nk = !rtb_tempSetSpd4_n;
    }
    else
    {
        AND_nk = KeASLR_b_HDCCtrlDeactivationEnbl;
    }

    /* End of Switch: '<S22>/Switch' */

    /* Logic: '<S22>/Logical4' incorporates:
     *  Logic: '<S22>/Logical8'
     */
    VeASLC_b_ASLOn = ((((rtb_AND_je && (VeASLR_b_ProxiSpdLimiter)) &&
                        (VeASLC_b_M182_ConditionOn)) && (!rtb_tempSetSpd6)) &&
                      AND_nk);

    /* Logic: '<S59>/Logical Operator3' */
    rtb_tempSetSpd4_n = !VeASLR_b_CcCancelSw;

    /* Outputs for Atomic SubSystem: '<S59>/Stop Watch Reset Trigger Enabled3' */
    /* Outputs for Atomic SubSystem: '<S437>/EdgeRising_F2T' */
    /* Logic: '<S444>/OR1' incorporates:
     *  UnitDelay: '<S444>/Unit Delay'
     */
    rtb_AND_bt = !ASLR_ac_DW.UnitDelay_DSTATE_it;

    /* Update for UnitDelay: '<S444>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_it = rtb_tempSetSpd4_n;

    /* Switch: '<S437>/Switch' incorporates:
     *  Constant: '<S437>/Constant Value2'
     *  Logic: '<S444>/AND'
     *  Switch: '<S437>/Switch2'
     *  UnitDelay: '<S437>/Unit Delay'
     */
    if (rtb_tempSetSpd4_n && rtb_AND_bt)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
    }
    else
    {
        if (VeASLR_b_CcCancelSw)
        {
            /* UnitDelay: '<S437>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S437>/Subtraction'
             *  Switch: '<S437>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_f += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S437>/Switch' */
    /* End of Outputs for SubSystem: '<S437>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S59>/Stop Watch Reset Trigger Enabled3' */

    /* RelationalOperator: '<S59>/Relational Operator7' incorporates:
     *  Constant: '<S431>/Calib'
     *  UnitDelay: '<S437>/Unit Delay'
     */
    VeASLC_b_ASLCancelSwOn = (ASLR_ac_DW.UnitDelay_DSTATE_f >=
        KeASLR_t_CcCancelSwOnTime);

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling5' */
    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising6' */
    /* Outputs for Atomic SubSystem: '<S27>/EdgeFalling' */
    /* Logic: '<S150>/OR1' incorporates:
     *  Logic: '<S302>/OR1'
     *  Logic: '<S304>/OR1'
     *  Logic: '<S310>/AND'
     *  Logic: '<S448>/Logical Operator3'
     *  Logic: '<S59>/Logical Operator1'
     *  Logic: '<S59>/Logical Operator5'
     */
    rtb_AND_bt = !VeASLR_b_CcDecelSts;

    /* End of Outputs for SubSystem: '<S29>/EdgeRising6' */
    /* End of Outputs for SubSystem: '<S29>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S29>/EdgeFalling5' */

    /* Logic: '<S150>/AND' incorporates:
     *  Logic: '<S150>/OR1'
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_LogicalOperator7 = (rtb_AND_bt && (ASLR_ac_DW.UnitDelay_DSTATE_bj));

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_bj = VeASLR_b_CcDecelSts;

    /* End of Outputs for SubSystem: '<S27>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling4' */
    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S27>/EdgeFalling1' */
    /* Logic: '<S151>/OR1' incorporates:
     *  Logic: '<S301>/OR1'
     *  Logic: '<S303>/OR1'
     *  Logic: '<S448>/Logical Operator3'
     *  Logic: '<S59>/Logical Operator'
     *  Logic: '<S59>/Logical Operator4'
     */
    rtb_AND_je = !VeASLR_b_CcAccelSts;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S29>/EdgeFalling4' */

    /* Logic: '<S151>/AND' incorporates:
     *  Logic: '<S151>/OR1'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    AND_nk = (rtb_AND_je && (ASLR_ac_DW.UnitDelay_DSTATE_cm));

    /* Update for UnitDelay: '<S151>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_cm = VeASLR_b_CcAccelSts;

    /* End of Outputs for SubSystem: '<S27>/EdgeFalling1' */

    /* Logic: '<S59>/Logical Operator2' */
    rtb_tempSetSpd4_n = !VeASLR_b_CcResumeSw;

    /* Outputs for Atomic SubSystem: '<S59>/Stop Watch Reset Trigger Enabled2' */
    /* Outputs for Atomic SubSystem: '<S436>/EdgeRising_F2T' */
    /* Logic: '<S443>/OR1' incorporates:
     *  UnitDelay: '<S443>/Unit Delay'
     */
    rtb_OR1_ha = !ASLR_ac_DW.UnitDelay_DSTATE_bz;

    /* Update for UnitDelay: '<S443>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_bz = rtb_tempSetSpd4_n;

    /* Switch: '<S436>/Switch' incorporates:
     *  Constant: '<S436>/Constant Value2'
     *  Logic: '<S443>/AND'
     *  Switch: '<S436>/Switch2'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    if (rtb_tempSetSpd4_n && rtb_OR1_ha)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
    }
    else
    {
        if (VeASLR_b_CcResumeSw)
        {
            /* UnitDelay: '<S436>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S436>/Subtraction'
             *  Switch: '<S436>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_l += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S436>/Switch' */
    /* End of Outputs for SubSystem: '<S436>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S59>/Stop Watch Reset Trigger Enabled2' */

    /* RelationalOperator: '<S59>/Relational Operator5' incorporates:
     *  Constant: '<S433>/Calib'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    VeASLC_b_ASLResumeSwOn = (ASLR_ac_DW.UnitDelay_DSTATE_l >=
        KeASLR_t_CcResumeSwOnTime);

    /* Outputs for Atomic SubSystem: '<S27>/EdgeRising1' */
    /* Logic: '<S155>/AND' incorporates:
     *  Logic: '<S155>/OR1'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    rtb_tempSetSpd6 = ((VeASLC_b_ASLResumeSwOn) &&
                       (!ASLR_ac_DW.UnitDelay_DSTATE_c5));

    /* Update for UnitDelay: '<S155>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_c5 = VeASLC_b_ASLResumeSwOn;

    /* End of Outputs for SubSystem: '<S27>/EdgeRising1' */

    /* Switch: '<S25>/Switch11' */
    if (VeASLI_b_SpeedUnit)
    {
        /* Switch: '<S25>/Switch11' incorporates:
         *  Constant: '<S116>/Calib'
         */
        Switch11 = KeASLR_v_ASLSetSpdMinMPH;
    }
    else
    {
        /* Switch: '<S25>/Switch11' incorporates:
         *  Constant: '<S115>/Calib'
         */
        Switch11 = KeASLR_v_ASLSetSpdMinKPH;
    }

    /* End of Switch: '<S25>/Switch11' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLI_Inputs'
     */
    /* Switch: '<S21>/Switch68' incorporates:
     *  Constant: '<S579>/Calib'
     *  Constant: '<S599>/Calib'
     */
    if (KeASLR_b_VehCategory_OvrrdEnbl)
    {
        tmpRead = KeASLR_e_VehCategory_OvrrdVal;
    }

    /* End of Switch: '<S21>/Switch68' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLC'
     */
    /* RelationalOperator: '<S44>/Comparison1' incorporates:
     *  Constant: '<S389>/Constant'
     */
    rtb_tempSetSpd4_n = (((uint32)tmpRead) == CePLTR_e_Category_N1);

    /* If: '<S186>/If_DrvMd' incorporates:
     *  Constant: '<S107>/Calib'
     *  Constant: '<S109>/Calib'
     *  Constant: '<S235>/Constant'
     *  Constant: '<S236>/Constant'
     *  Constant: '<S237>/Constant'
     *  Constant: '<S238>/Constant'
     *  Constant: '<S239>/Constant'
     *  Constant: '<S240>/Constant'
     *  Constant: '<S241>/Constant'
     *  Constant: '<S242>/Constant'
     *  Constant: '<S243>/Constant'
     *  Constant: '<S244>/Constant'
     *  Constant: '<S245>/Constant'
     *  Constant: '<S246>/Constant'
     *  Constant: '<S247>/Constant'
     *  Constant: '<S248>/Constant'
     *  Constant: '<S249>/Constant'
     *  Constant: '<S250>/Constant'
     *  Constant: '<S251>/Constant'
     *  Constant: '<S252>/Constant'
     *  Constant: '<S253>/Constant'
     *  Constant: '<S256>/Constant'
     *  Logic: '<S186>/Logical1'
     *  Logic: '<S186>/Logical2'
     *  Logic: '<S186>/Logical4'
     *  Logic: '<S186>/Logical5'
     *  Logic: '<S186>/Logical6'
     *  Logic: '<S186>/Logical7'
     *  Logic: '<S186>/Logical8'
     *  Logic: '<S186>/Logical9'
     *  RelationalOperator: '<S186>/Comparison1'
     *  RelationalOperator: '<S186>/Comparison10'
     *  RelationalOperator: '<S186>/Comparison11'
     *  RelationalOperator: '<S186>/Comparison13'
     *  RelationalOperator: '<S186>/Comparison14'
     *  RelationalOperator: '<S186>/Comparison15'
     *  RelationalOperator: '<S186>/Comparison16'
     *  RelationalOperator: '<S186>/Comparison17'
     *  RelationalOperator: '<S186>/Comparison18'
     *  RelationalOperator: '<S186>/Comparison19'
     *  RelationalOperator: '<S186>/Comparison2'
     *  RelationalOperator: '<S186>/Comparison3'
     *  RelationalOperator: '<S186>/Comparison4'
     *  RelationalOperator: '<S186>/Comparison5'
     *  RelationalOperator: '<S186>/Comparison6'
     *  RelationalOperator: '<S186>/Comparison7'
     *  RelationalOperator: '<S186>/Relational Operator'
     *  RelationalOperator: '<S186>/Relational Operator1'
     *  RelationalOperator: '<S186>/Relational Operator2'
     *  RelationalOperator: '<S186>/Relational Operator3'
     */
    if ((((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_Sport) &&
            (HeASLR_b_M182ProgrammPrsnc))
    {
        /* Outputs for IfAction SubSystem: '<S186>/DrvMd_Sport' incorporates:
         *  ActionPort: '<S233>/Action Port'
         */
        /* SignalConversion generated from: '<S233>/M182_Sport' incorporates:
         *  Constant: '<S278>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdSport;

        /* End of Outputs for SubSystem: '<S186>/DrvMd_Sport' */
    }
    else if (((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_Normal_Mode)
    {
        /* Outputs for IfAction SubSystem: '<S186>/DrvMd_Normal' incorporates:
         *  ActionPort: '<S229>/Action Port'
         */
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S271>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        if (HeASLR_b_x250ProgrammPrsnc)
        {
            /* Switch: '<S229>/Switch' incorporates:
             *  Constant: '<S272>/Calib'
             *  Constant: '<S273>/Calib'
             *  UnitDelay: '<S186>/Unit Delay'
             */
            if (rtb_tempSetSpd4_n)
            {
                ASLR_ac_DW.UnitDelay_DSTATE =
                    KeASLR_v_VehSpdLimKPH_DrvMdNormal_N1;
            }
            else
            {
                ASLR_ac_DW.UnitDelay_DSTATE =
                    KeASLR_v_VehSpdLimKPH_DrvMdNormal_N2;
            }

            /* End of Switch: '<S229>/Switch' */
        }
        else
        {
            ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdNormal;
        }

        /* End of Switch: '<S229>/Switch1' */
        /* End of Outputs for SubSystem: '<S186>/DrvMd_Normal' */
    }
    else if (((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_Range_Mode)
    {
        /* Outputs for IfAction SubSystem: '<S186>/DrvMd_Range' incorporates:
         *  ActionPort: '<S232>/Action Port'
         */
        /* SignalConversion generated from: '<S232>/Range' incorporates:
         *  Constant: '<S277>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdRange;

        /* End of Outputs for SubSystem: '<S186>/DrvMd_Range' */
    }
    else if (((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_Camel_Mode)
    {
        /* Outputs for IfAction SubSystem: '<S186>/DrvMd_Camel' incorporates:
         *  ActionPort: '<S227>/Action Port'
         */
        /* Switch: '<S227>/Switch4' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S269>/Calib'
         *  Switch: '<S227>/Switch1'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        if (HeASLR_b_M182ProgrammPrsnc)
        {
            ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdEco;
        }
        else if (HeASLR_b_x250ProgrammPrsnc)
        {
            /* Switch: '<S227>/Switch2' incorporates:
             *  Switch: '<S227>/Switch1'
             */
            if (rtb_tempSetSpd4_n)
            {
                /* UnitDelay: '<S186>/Unit Delay' incorporates:
                 *  Constant: '<S270>/Calib'
                 *  Switch: '<S227>/Switch1'
                 */
                ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdEco_N1;
            }
            else
            {
                /* UnitDelay: '<S186>/Unit Delay' incorporates:
                 *  Constant: '<S268>/Calib'
                 *  Switch: '<S227>/Switch1'
                 */
                ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdCamel;
            }

            /* End of Switch: '<S227>/Switch2' */
        }
        else
        {
            /* UnitDelay: '<S186>/Unit Delay' incorporates:
             *  Constant: '<S268>/Calib'
             *  Switch: '<S227>/Switch1'
             */
            ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdCamel;
        }

        /* End of Switch: '<S227>/Switch4' */
        /* End of Outputs for SubSystem: '<S186>/DrvMd_Camel' */
    }
    else if ((((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_OffRd) &&
             (HeASLR_b_M182ProgrammPrsnc))
    {
        /* Outputs for IfAction SubSystem: '<S186>/DrvMd_Offroad' incorporates:
         *  ActionPort: '<S230>/Action Port'
         */
        /* SignalConversion generated from: '<S230>/Offroad' incorporates:
         *  Constant: '<S274>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdOffrd;

        /* End of Outputs for SubSystem: '<S186>/DrvMd_Offroad' */
    }
    else if (((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_Sport)
    {
        /* Outputs for IfAction SubSystem: '<S186>/DrvMd_SportAbarth' incorporates:
         *  ActionPort: '<S234>/Action Port'
         */
        /* SignalConversion generated from: '<S234>/Sport' incorporates:
         *  Constant: '<S279>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdSportAbarth;

        /* End of Outputs for SubSystem: '<S186>/DrvMd_SportAbarth' */
    }
    else if ((((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_Power) &&
             (HeASLR_b_x250ProgrammPrsnc))
    {
        /* Outputs for IfAction SubSystem: '<S186>/DrvMd_PowerMd' incorporates:
         *  ActionPort: '<S231>/Action Port'
         */
        /* Switch: '<S231>/Switch4' incorporates:
         *  Constant: '<S275>/Calib'
         *  Constant: '<S276>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        if (rtb_tempSetSpd4_n)
        {
            ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdPwrMdN1;
        }
        else
        {
            ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_DrvMdPwrMdN2;
        }

        /* End of Switch: '<S231>/Switch4' */
        /* End of Outputs for SubSystem: '<S186>/DrvMd_PowerMd' */
    }
    else if ((((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_ECO) || ((CeTMDR_e_ECO ==
               ((uint32)Switch72)) && (((uint32)VeASLI_e_TerrainMd) ==
               CeTMDR_e_Custom)))
    {
        /* Outputs for IfAction SubSystem: '<S186>/TrrnMd_AdvancedEfficiencyMd' incorporates:
         *  ActionPort: '<S263>/Action Port'
         */
        /* SignalConversion generated from: '<S263>/Out1' incorporates:
         *  Constant: '<S281>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_LP3Eco;

        /* End of Outputs for SubSystem: '<S186>/TrrnMd_AdvancedEfficiencyMd' */
    }
    else if (((((((((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_Auto) || (((uint32)
                    VeASLI_e_TerrainMd) == CeTMDR_e_Sport)) || ((((uint32)
                    VeASLI_e_TerrainMd) == CeTMDR_e_Custom) && (((uint32)
                    Switch72) == CeTMDR_e_Auto))) || ((((uint32)
                   VeASLI_e_TerrainMd) == CeTMDR_e_Custom) && (((uint32)Switch72)
                  == CeTMDR_e_Sport))) || (((uint32)VeASLI_e_TerrainMd) ==
                CeTMDR_e_Snow)) || (((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_Tow))
             || (((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_Sand))
    {
        /* Outputs for IfAction SubSystem: '<S186>/TrrnMd_MaxSpd' incorporates:
         *  ActionPort: '<S264>/Action Port'
         */
        /* SignalConversion generated from: '<S264>/Out1' incorporates:
         *  Constant: '<S282>/Calib'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_LP3Normal;

        /* End of Outputs for SubSystem: '<S186>/TrrnMd_MaxSpd' */
    }
    else
    {
        if (((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_Rock)
        {
            /* Outputs for IfAction SubSystem: '<S186>/REPB_Rock' incorporates:
             *  ActionPort: '<S257>/Action Port'
             */
            /* SignalConversion generated from: '<S257>/Out1' incorporates:
             *  Constant: '<S280>/Calib'
             *  UnitDelay: '<S186>/Unit Delay'
             */
            ASLR_ac_DW.UnitDelay_DSTATE = KeASLR_v_VehSpdLimKPH_REPB_Rock;

            /* End of Outputs for SubSystem: '<S186>/REPB_Rock' */
        }
    }

    /* End of If: '<S186>/If_DrvMd' */

    /* RelationalOperator: '<S186>/Comparison8' incorporates:
     *  Constant: '<S254>/Constant'
     */
    rtb_OR1_ha = (((uint32)VeASLR_e_TurtleMdSts) == CeDMDR_e_Turtle_Mode3);

    /* UnitDelay: '<S374>/Unit Delay' incorporates:
     *  Constant: '<S255>/Constant'
     *  RelationalOperator: '<S186>/Comparison9'
     */
    rtb_UnitDelay_ap = (((uint32)VeASLR_e_TurtleMdSts) == CeDMDR_e_Turtle_Mode4);

    /* If: '<S186>/If_TurtleMd' incorporates:
     *  Inport: '<S267>/In1'
     *  UnitDelay: '<S186>/Unit Delay'
     */
    if (rtb_OR1_ha)
    {
        /* Outputs for IfAction SubSystem: '<S186>/TurtleMd3' incorporates:
         *  ActionPort: '<S265>/Action Port'
         */
        /* Switch: '<S265>/Switch' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S283>/Calib'
         */
        if (HeASLR_b_x250ProgrammPrsnc)
        {
            /* Switch: '<S265>/Switch1' incorporates:
             *  Constant: '<S284>/Calib'
             *  Constant: '<S285>/Calib'
             */
            if (rtb_tempSetSpd4_n)
            {
                rtb_MinMax = KeASLR_v_VehSpdLimKPH_TurtleMd34_N1;
            }
            else
            {
                rtb_MinMax = KeASLR_v_VehSpdLimKPH_TurtleMd34_N2;
            }

            /* End of Switch: '<S265>/Switch1' */
        }
        else
        {
            rtb_MinMax = KeASLR_v_VehSpdLimKPH_TurtleMd3;
        }

        /* End of Switch: '<S265>/Switch' */
        /* End of Outputs for SubSystem: '<S186>/TurtleMd3' */
    }
    else if (rtb_UnitDelay_ap)
    {
        /* Outputs for IfAction SubSystem: '<S186>/TurtleMd4' incorporates:
         *  ActionPort: '<S266>/Action Port'
         */
        /* Switch: '<S266>/Switch' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S288>/Calib'
         */
        if (HeASLR_b_x250ProgrammPrsnc)
        {
            /* Switch: '<S266>/Switch1' incorporates:
             *  Constant: '<S286>/Calib'
             *  Constant: '<S287>/Calib'
             */
            if (rtb_tempSetSpd4_n)
            {
                rtb_MinMax = KeASLR_v_VehSpdLimKPH_TurtleMd34_N1;
            }
            else
            {
                rtb_MinMax = KeASLR_v_VehSpdLimKPH_TurtleMd34_N2;
            }

            /* End of Switch: '<S266>/Switch1' */
        }
        else
        {
            rtb_MinMax = KeASLR_v_VehSpdLimKPH_TurtleMd4;
        }

        /* End of Switch: '<S266>/Switch' */
        /* End of Outputs for SubSystem: '<S186>/TurtleMd4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S186>/TurtleMd_None' incorporates:
         *  ActionPort: '<S267>/Action Port'
         */
        rtb_MinMax = ASLR_ac_DW.UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S186>/TurtleMd_None' */
    }

    /* End of If: '<S186>/If_TurtleMd' */

    /* MinMax: '<S186>/MinMax' incorporates:
     *  UnitDelay: '<S186>/Unit Delay'
     */
    rtb_MinMax = fminf(ASLR_ac_DW.UnitDelay_DSTATE, rtb_MinMax);

    /* Switch: '<S44>/Switch' incorporates:
     *  Constant: '<S44>/Constant Value'
     *  RelationalOperator: '<S44>/Comparison4'
     */
    if (255.0F == Switch66)
    {
        /* Switch: '<S44>/Switch' incorporates:
         *  Constant: '<S391>/Calib'
         */
        Switch66 = KeASLR_v_DfltHomSpdLim;
    }

    /* End of Switch: '<S44>/Switch' */

    /* Product: '<S25>/Product2' incorporates:
     *  Constant: '<S25>/Constant Value2'
     */
    rtb_Product2 = rtb_VeASLC_v_ServiceToolSpdLim * 1.60934401F;

    /* Switch: '<S25>/Switch6' incorporates:
     *  Constant: '<S111>/Calib'
     */
    if (KeASLR_b_EnblHomSpdLim)
    {
        /* Switch: '<S25>/Switch6' incorporates:
         *  Constant: '<S117>/Calib'
         *  Sum: '<S25>/Sum2'
         */
        rtb_Switch6 = Switch66 - KeASLR_v_HomSpdLimDltThrs;
    }
    else
    {
        /* Switch: '<S25>/Switch6' incorporates:
         *  Constant: '<S25>/Constant Value1'
         */
        rtb_Switch6 = 255.0F;
    }

    /* End of Switch: '<S25>/Switch6' */

    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S108>/Calib'
     *  Switch: '<S25>/Switch2'
     */
    if (VeASLI_b_SpeedUnit)
    {
        /* Switch: '<S25>/Switch5' incorporates:
         *  Constant: '<S109>/Calib'
         */
        if (HeASLR_b_x250ProgrammPrsnc)
        {
            /* Switch: '<S25>/Switch4' incorporates:
             *  Constant: '<S111>/Calib'
             */
            if (KeASLR_b_EnblHomSpdLim)
            {
                /* Switch: '<S25>/Switch4' incorporates:
                 *  Constant: '<S117>/Calib'
                 *  Constant: '<S25>/Constant Value3'
                 *  Constant: '<S25>/Constant Value4'
                 *  Product: '<S25>/Product3'
                 *  Product: '<S25>/Product4'
                 *  Sum: '<S25>/Sum1'
                 */
                Switch66 = (Switch66 / 1.60934401F) - (KeASLR_v_HomSpdLimDltThrs
                    / 1.60934401F);
            }
            else
            {
                /* Switch: '<S25>/Switch4' incorporates:
                 *  Constant: '<S25>/Constant Value1'
                 */
                Switch66 = 255.0F;
            }

            /* End of Switch: '<S25>/Switch4' */

            /* Switch: '<S25>/Switch5' incorporates:
             *  Constant: '<S25>/Constant Value5'
             *  MinMax: '<S25>/MinMax2'
             *  Product: '<S25>/Product5'
             */
            Switch66 = fminf(rtb_MinMax / 1.60934401F, Switch66);
        }
        else
        {
            /* Switch: '<S25>/Switch5' incorporates:
             *  Constant: '<S25>/Constant Value1'
             */
            Switch66 = 255.0F;
        }

        /* End of Switch: '<S25>/Switch5' */

        /* Switch: '<S25>/Switch3' incorporates:
         *  Constant: '<S108>/Calib'
         *  Constant: '<S25>/Constant Value1'
         */
        if (!HeASLR_b_VF_ServiceToolSpdSel)
        {
            rtb_VeASLC_v_ServiceToolSpdLim = 255.0F;
        }

        /* End of Switch: '<S25>/Switch3' */

        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S114>/Calib'
         *  MinMax: '<S25>/MinMax'
         */
        rtb_VeASLC_v_ServiceToolSpdLim = fminf(fminf(KeASLR_v_ASLSetSpdMaxMPH,
            rtb_VeASLC_v_ServiceToolSpdLim), Switch66);
    }
    else
    {
        if (HeASLR_b_VF_ServiceToolSpdSel)
        {
            /* Switch: '<S25>/Switch2' */
            rtb_Switch1_duk = rtb_Product2;
        }
        else
        {
            /* Switch: '<S25>/Switch2' */
            rtb_Switch1_duk = 410.382721F;
        }

        /* Switch: '<S25>/Switch7' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S25>/Constant Value1'
         *  MinMax: '<S25>/MinMax3'
         */
        if (HeASLR_b_x250ProgrammPrsnc)
        {
            Switch66 = fminf(rtb_Switch6, rtb_MinMax);
        }
        else
        {
            Switch66 = 255.0F;
        }

        /* End of Switch: '<S25>/Switch7' */

        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S113>/Calib'
         *  MinMax: '<S25>/MinMax1'
         */
        rtb_VeASLC_v_ServiceToolSpdLim = fminf(fminf(KeASLR_v_ASLSetSpdMaxKPH,
            rtb_Switch1_duk), Switch66);
    }

    /* End of Switch: '<S25>/Switch1' */

    /* Sum: '<S61>/Sum' incorporates:
     *  Constant: '<S61>/Constant Value'
     *  Constant: '<S61>/Constant Value1'
     *  Product: '<S61>/Product1'
     */
    Switch66 = (VeASLR_Pct_ProxiSpdomtrTol * 0.01F) + 1.0F;

    /* Switch: '<S62>/Switch62' incorporates:
     *  Constant: '<S108>/Calib'
     */
    if (HeASLR_b_VF_ServiceToolSpdSel)
    {
        /* Switch: '<S62>/Switch62' */
        VeASLC_v_VehSpdPreFltr = VeASLI_v_VehSpdSigned;
    }
    else
    {
        /* Switch: '<S62>/Switch62' */
        VeASLC_v_VehSpdPreFltr = VeASLR_v_CanSigVehSpd;
    }

    /* End of Switch: '<S62>/Switch62' */

    /* Outputs for Atomic SubSystem: '<S62>/EdgeRising1' */
    /* Logic: '<S460>/OR1' incorporates:
     *  UnitDelay: '<S460>/Unit Delay'
     */
    rtb_tempSetSpd4_n = !ASLR_ac_DW.UnitDelay_DSTATE_cy;

    /* Update for UnitDelay: '<S460>/Unit Delay' incorporates:
     *  Constant: '<S62>/TRUE Constant2'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_cy = true;

    /* Outputs for Atomic SubSystem: '<S62>/LowpassT Reset Enabled1' */
    /* Switch: '<S462>/Switch' incorporates:
     *  Logic: '<S460>/AND'
     */
    if (rtb_tempSetSpd4_n)
    {
        /* Switch: '<S462>/Switch' */
        VeASLC_v_CanSigVehSpdFltrd = VeASLC_v_VehSpdPreFltr;
    }
    else
    {
        /* Switch: '<S462>/Switch' incorporates:
         *  Constant: '<S110>/Calib'
         *  Constant: '<S461>/Calib'
         *  MinMax: '<S462>/Maximum'
         *  Product: '<S462>/Multiplication'
         *  Product: '<S462>/Multiplication1'
         *  Sum: '<S462>/Subtraction'
         *  Sum: '<S462>/Summation'
         *  UnitDelay: '<S462>/Unit Delay'
         */
        VeASLC_v_CanSigVehSpdFltrd = (((VeASLC_v_VehSpdPreFltr -
            VeASLC_v_CanSigVehSpdFltrd) * HeASLR_t_dT) * (1.0F / fmaxf
            (KeASLR_t_ASL_CanSpd_Fltr_Time, HeASLR_t_dT))) +
            VeASLC_v_CanSigVehSpdFltrd;
    }

    /* End of Switch: '<S462>/Switch' */
    /* End of Outputs for SubSystem: '<S62>/LowpassT Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S62>/EdgeRising1' */

    /* Sum: '<S61>/Add' incorporates:
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     *  Product: '<S61>/Product'
     *  Switch: '<S21>/Switch23'
     */
    rtb_Add = (Switch66 * VeASLC_v_CanSigVehSpdFltrd) + ((float32)((uint16)
        VeASLR_e_ProxiIncreasingSpdCnst));

    /* Switch: '<S61>/Switch11' incorporates:
     *  Constant: '<S61>/Constant Value2'
     *  Product: '<S61>/Product2'
     */
    if (VeASLI_b_SpeedUnit)
    {
        rtb_Switch1_duk = 0.62137121F * rtb_Add;
    }
    else
    {
        rtb_Switch1_duk = rtb_Add;
    }

    /* End of Switch: '<S61>/Switch11' */

    /* Rounding: '<S61>/Rounding2' */
    VeASLC_v_VehSpdBiased = roundf(rtb_Switch1_duk);

    /* Logic: '<S59>/Logical2' */
    rtb_tempSetSpd4_n = (rtb_AND_bt || (VeASLC_b_ASLDecelSwOnLP));

    /* Outputs for Atomic SubSystem: '<S59>/Stop Watch Reset Trigger Enabled1' */
    /* Outputs for Atomic SubSystem: '<S435>/EdgeRising_F2T' */
    /* Logic: '<S442>/OR1' incorporates:
     *  UnitDelay: '<S442>/Unit Delay'
     */
    rtb_OR1_g = !ASLR_ac_DW.UnitDelay_DSTATE_hv;

    /* Update for UnitDelay: '<S442>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_hv = rtb_tempSetSpd4_n;

    /* Switch: '<S435>/Switch' incorporates:
     *  Constant: '<S435>/Constant Value2'
     *  Logic: '<S442>/AND'
     *  Switch: '<S435>/Switch2'
     *  UnitDelay: '<S435>/Unit Delay'
     */
    if (rtb_tempSetSpd4_n && rtb_OR1_g)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        if (VeASLR_b_CcDecelSts)
        {
            /* UnitDelay: '<S435>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S435>/Subtraction'
             *  Switch: '<S435>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_n += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S435>/Switch' */
    /* End of Outputs for SubSystem: '<S435>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S59>/Stop Watch Reset Trigger Enabled1' */

    /* RelationalOperator: '<S59>/Relational Operator3' incorporates:
     *  Constant: '<S432>/Calib'
     *  UnitDelay: '<S435>/Unit Delay'
     */
    VeASLC_b_ASLDecelSwOnLP = (ASLR_ac_DW.UnitDelay_DSTATE_n >=
        KeASLR_t_CcDecelSwOnTimeSP);

    /* Logic: '<S59>/Logical1' */
    rtb_tempSetSpd4_n = (rtb_AND_je || (VeASLC_b_ASLAccelSwOnLP));

    /* Outputs for Atomic SubSystem: '<S59>/Stop Watch Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S434>/EdgeRising_F2T' */
    /* Logic: '<S441>/OR1' incorporates:
     *  UnitDelay: '<S441>/Unit Delay'
     */
    rtb_OR1_g = !ASLR_ac_DW.UnitDelay_DSTATE_al;

    /* Update for UnitDelay: '<S441>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_al = rtb_tempSetSpd4_n;

    /* Switch: '<S434>/Switch' incorporates:
     *  Constant: '<S434>/Constant Value2'
     *  Logic: '<S441>/AND'
     *  Switch: '<S434>/Switch2'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    if (rtb_tempSetSpd4_n && rtb_OR1_g)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
    }
    else
    {
        if (VeASLR_b_CcAccelSts)
        {
            /* UnitDelay: '<S434>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S434>/Subtraction'
             *  Switch: '<S434>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_d += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S434>/Switch' */
    /* End of Outputs for SubSystem: '<S434>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S59>/Stop Watch Reset Trigger Enabled' */

    /* RelationalOperator: '<S59>/Relational Operator2' incorporates:
     *  Constant: '<S430>/Calib'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    VeASLC_b_ASLAccelSwOnLP = (ASLR_ac_DW.UnitDelay_DSTATE_d >=
        KeASLR_t_CcAccelSwOnTimeSP);

    /* RelationalOperator: '<S27>/Comparison1' incorporates:
     *  Constant: '<S159>/Constant'
     */
    rtb_tempSetSpd4_n = (((uint32)VeASLI_e_PMM_PowerMode) ==
                         CePMDR_e_PowerMode_Off);

    /* Outputs for Atomic SubSystem: '<S27>/EdgeFalling2' */
    /* Logic: '<S152>/OR1' incorporates:
     *  Chart: '<S27>/ASL_States_Chart'
     */
    rtb_OR1_g = !VeASLR_b_TempFlt;

    /* Logic: '<S152>/AND' incorporates:
     *  Logic: '<S152>/OR1'
     *  UnitDelay: '<S152>/Unit Delay'
     */
    rtb_AND_at = (rtb_OR1_g && (ASLR_ac_DW.UnitDelay_DSTATE_ee));

    /* Update for UnitDelay: '<S152>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ee = VeASLR_b_TempFlt;

    /* End of Outputs for SubSystem: '<S27>/EdgeFalling2' */

    /* Switch: '<S27>/Switch2' incorporates:
     *  Constant: '<S161>/Calib'
     *  Logic: '<S27>/Logical1'
     *  Logic: '<S27>/Logical3'
     *  Logic: '<S27>/Logical8'
     */
    if (((!KeASLR_b_LatchASLSetSpdLim) && rtb_tempSetSpd4_n) || rtb_AND_at)
    {
        /* Switch: '<S27>/Switch2' */
        ASLR_ac_DW.UnitDelay2_DSTATE_m = Switch11;
    }

    /* End of Switch: '<S27>/Switch2' */

    /* Chart: '<S27>/ASL_States_Chart' incorporates:
     *  Constant: '<S107>/Calib'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    /* Gateway: ASLR_MedTEB/ASLC/ASL_States_Determination/ASL_States_Chart */
    /* During: ASLR_MedTEB/ASLC/ASL_States_Determination/ASL_States_Chart */
    if (((uint32)ASLR_ac_DW.is_active_c5_ASLR_ac) == 0U)
    {
        /* Entry: ASLR_MedTEB/ASLC/ASL_States_Determination/ASL_States_Chart */
        ASLR_ac_DW.is_active_c5_ASLR_ac = 1U;

        /* Entry Internal: ASLR_MedTEB/ASLC/ASL_States_Determination/ASL_States_Chart */
        /* Transition: '<S145>:12' */
        ASLR_ac_B.LeASLR_e_ASLPrevState = 0.0F;
        ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_OFF;

        /* Entry 'OFF': '<S145>:2' */
        ASLR_ac_B.LeASLR_b_ASLEngaged = false;
        ASLR_ac_B.LeASLR_b_ASLEnabled = false;
        ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 6U;
        ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
        ASLR_ac_B.LeASLR_v_InitVehSpdLim = ASLR_ac_DW.UnitDelay2_DSTATE_m;
        ASLR_ac_B.LeASLR_b_ASLFlag = false;
        ASLR_ac_B.LeASLR_e_ASLCurrentState = 0.0F;
        ASLR_ac_B.LeASLR_b_TorqLimActive = false;
    }
    else
    {
        guard1 = false;
        switch (ASLR_ac_DW.is_c5_ASLR_ac)
        {
          case ASLR_ac_IN_Fault:
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 255.0F;

            /* During 'Fault': '<S145>:3' */
            if ((VeASLC_b_ASLOff) || ((!ASLR_ac_DW.UnitDelay_DSTATE_bx) &&
                                      (HeASLR_b_M182ProgrammPrsnc)))
            {
                /* Transition: '<S145>:304' */
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_OFF;

                /* Entry 'OFF': '<S145>:2' */
                ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 6U;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                    ASLR_ac_DW.UnitDelay2_DSTATE_m;
                ASLR_ac_B.LeASLR_b_ASLFlag = false;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 0.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
            }
            break;

          case ASLR_ac_IN_Not_Actuable:
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 8.0F;

            /* During 'Not_Actuable': '<S145>:102' */
            if (rtb_OR1_g || (VeASLC_b_ASLOff))
            {
                /* Transition: '<S145>:118' */
                /* Exit 'Not_Actuable': '<S145>:102' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 8.0F;
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_OFF;

                /* Entry 'OFF': '<S145>:2' */
                ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 6U;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                    ASLR_ac_DW.UnitDelay2_DSTATE_m;
                ASLR_ac_B.LeASLR_b_ASLFlag = false;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 0.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
            }
            else
            {
                if (ASLR_ac_DW.UnitDelay_DSTATE_bx)
                {
                    /* Transition: '<S145>:119' */
                    /* Exit 'Not_Actuable': '<S145>:102' */
                    ASLR_ac_B.LeASLR_e_ASLPrevState = 8.0F;
                    ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_Fault;

                    /* Entry 'Fault': '<S145>:3' */
                    ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                    ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                    ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                    ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 7U;
                    ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                    ASLR_ac_B.LeASLR_v_InitVehSpdLim = 0.0F;
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 255.0F;
                }
            }
            break;

          case ASLR_ac_IN_OFF:
            ASLR_ac_B.LeASLR_e_ASLCurrentState = 0.0F;

            /* During 'OFF': '<S145>:2' */
            if ((VeASLC_b_ASLOn) && (VeASLR_b_TempFlt))
            {
                /* Transition: '<S145>:211' */
                /* Exit 'OFF': '<S145>:2' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 0.0F;
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_Not_Actuable;

                /* Entry 'Not_Actuable': '<S145>:102' */
                ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 2U;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim = 0.0F;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 8.0F;
            }
            else if ((VeASLC_b_ASLOn) && (ASLR_ac_DW.UnitDelay_DSTATE_bx))
            {
                /* Transition: '<S145>:108' */
                /* Exit 'OFF': '<S145>:2' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 0.0F;
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_Fault;

                /* Entry 'Fault': '<S145>:3' */
                ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 7U;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim = 0.0F;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 255.0F;
            }
            else if ((VeASLC_b_ASLOn) && (!VeASLC_b_CCorACCorHAS_On))
            {
                /* Transition: '<S145>:23' */
                /* Exit 'OFF': '<S145>:2' */
                ASLR_ac_B.LeASLR_e_ASLPrevState = 0.0F;
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_ON;

                /* Entry Internal 'ON': '<S145>:11' */
                /* Transition: '<S145>:122' */
                ASLR_ac_DW.is_ON = ASLR_ac_IN_Enabled;

                /* Entry 'Enabled': '<S145>:4' */
                ASLR_ac_B.LeASLR_b_ASLEnabled = true;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 0U;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 1.0F;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd =
                    ASLR_ac_DW.UnitDelay2_DSTATE_m;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                    ASLR_ac_B.LeASLR_v_PreRampVehSpd;
            }
            else
            {
                ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                    ASLR_ac_DW.UnitDelay2_DSTATE_m;
            }
            break;

          default:
            /* During 'ON': '<S145>:11' */
            if (ASLR_ac_DW.UnitDelay_DSTATE_bx)
            {
                /* Transition: '<S145>:113' */
                ASLR_ac_exit_internal_ON();
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_Fault;

                /* Entry 'Fault': '<S145>:3' */
                ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 7U;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim = 0.0F;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 255.0F;
            }
            else if (VeASLR_b_TempFlt)
            {
                /* Transition: '<S145>:105' */
                ASLR_ac_exit_internal_ON();
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_Not_Actuable;

                /* Entry 'Not_Actuable': '<S145>:102' */
                ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 2U;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim = 0.0F;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 8.0F;
            }
            else if (VeASLC_b_ASLOff)
            {
                /* Transition: '<S145>:18' */
                ASLR_ac_exit_internal_ON();
                ASLR_ac_DW.is_c5_ASLR_ac = ASLR_ac_IN_OFF;

                /* Entry 'OFF': '<S145>:2' */
                ASLR_ac_B.LeASLR_b_ASLEngaged = false;
                ASLR_ac_B.LeASLR_b_ASLEnabled = false;
                ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN = 6U;
                ASLR_ac_B.LeASLR_v_PreRampVehSpd = 0.0F;
                ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                    ASLR_ac_DW.UnitDelay2_DSTATE_m;
                ASLR_ac_B.LeASLR_b_ASLFlag = false;
                ASLR_ac_B.LeASLR_e_ASLCurrentState = 0.0F;
                ASLR_ac_B.LeASLR_b_TorqLimActive = false;
            }
            else
            {
                switch (ASLR_ac_DW.is_ON)
                {
                  case ASLR_ac_IN_Deactivated:
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 7.0F;

                    /* During 'Deactivated': '<S145>:5' */
                    AND_nk = (rtb_LogicalOperator7 || AND_nk);
                    if ((rtb_tempSetSpd6 && (ASLR_ac_DW.UnitDelay2_DSTATE_m >=
                                             Switch11)) || (AND_nk &&
                            ((VeASLC_v_VehSpdBiased >= Switch11) &&
                             (VeASLC_v_VehSpdBiased <=
                              rtb_VeASLC_v_ServiceToolSpdLim))))
                    {
                        /* Transition: '<S145>:48' */
                        /* Exit 'Deactivated': '<S145>:5' */
                        ASLR_ac_B.LeASLR_e_ASLPrevState = 7.0F;
                        ASLR_ac_DW.is_ON = ASLR_ac_IN_Engaged;

                        /* Entry 'Engaged': '<S145>:243' */
                        ASLR_ac_B.LeASLR_b_ASLEngaged = true;
                        ASLR_ac_B.LeASLR_b_ASLFlag = true;
                        ASLR_ac_B.LeASLR_v_PreRampVehSpd =
                            VeASLC_v_SetVehSpdLimDtrmnd;
                        ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                            ASLR_ac_B.LeASLR_v_PreRampVehSpd;
                        ASLR_ac_enter_internal_Engaged();
                    }
                    else if ((AND_nk || ((VeASLC_b_ASLDecelSwOnLP) ||
                                         (VeASLC_b_ASLAccelSwOnLP))) &&
                             (((ASLR_ac_DW.UnitDelay2_DSTATE_m == 0.0F) ||
                               (VeASLC_v_VehSpdBiased < Switch11)) ||
                              (VeASLC_v_VehSpdBiased >
                               rtb_VeASLC_v_ServiceToolSpdLim)))
                    {
                        /* Transition: '<S145>:390' */
                        /* Exit 'Deactivated': '<S145>:5' */
                        ASLR_ac_B.LeASLR_e_ASLPrevState = 7.0F;
                        ASLR_ac_DW.is_ON = ASLR_ac_IN_Offline_Enabled;

                        /* Entry 'Offline_Enabled': '<S145>:237' */
                        ASLR_ac_B.LeASLR_e_ASLCurrentState = 10.0F;
                    }
                    else
                    {
                        ASLR_ac_B.LeASLR_v_PreRampVehSpd =
                            ASLR_ac_DW.UnitDelay2_DSTATE_m;
                        ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                            ASLR_ac_B.LeASLR_v_PreRampVehSpd;
                    }
                    break;

                  case ASLR_ac_IN_Enabled:
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 1.0F;

                    /* During 'Enabled': '<S145>:4' */
                    if (((VeASLC_v_VehSpdBiased >= Switch11) &&
                            (VeASLC_v_VehSpdBiased <=
                             rtb_VeASLC_v_ServiceToolSpdLim)) &&
                            (rtb_LogicalOperator7 || AND_nk))
                    {
                        /* Transition: '<S145>:310' */
                        guard1 = true;
                    }
                    else if (((rtb_LogicalOperator7 || AND_nk) ||
                              ((VeASLC_b_ASLDecelSwOnLP) ||
                               (VeASLC_b_ASLAccelSwOnLP))) &&
                             (((ASLR_ac_DW.UnitDelay2_DSTATE_m == 0.0F) ||
                               (VeASLC_v_VehSpdBiased < Switch11)) ||
                              (VeASLC_v_VehSpdBiased >
                               rtb_VeASLC_v_ServiceToolSpdLim)))
                    {
                        /* Transition: '<S145>:239' */
                        /* Exit 'Enabled': '<S145>:4' */
                        ASLR_ac_B.LeASLR_e_ASLPrevState = 1.0F;
                        ASLR_ac_DW.is_ON = ASLR_ac_IN_Offline_Enabled;

                        /* Entry 'Offline_Enabled': '<S145>:237' */
                        ASLR_ac_B.LeASLR_e_ASLCurrentState = 10.0F;
                    }
                    else if (rtb_tempSetSpd6 && (ASLR_ac_DW.UnitDelay2_DSTATE_m >=
                              Switch11))
                    {
                        /* Transition: '<S145>:133' */
                        guard1 = true;
                    }
                    else
                    {
                        ASLR_ac_B.LeASLR_v_PreRampVehSpd =
                            ASLR_ac_DW.UnitDelay2_DSTATE_m;
                        ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                            ASLR_ac_B.LeASLR_v_PreRampVehSpd;
                    }
                    break;

                  case ASLR_ac_IN_Engaged:
                    ASLR_ac_Engaged(&rtb_AND_py, &Switch1_n);
                    break;

                  default:
                    ASLR_ac_B.LeASLR_e_ASLCurrentState = 10.0F;

                    /* During 'Offline_Enabled': '<S145>:237' */
                    if ((((VeASLC_v_VehSpdBiased >= Switch11) &&
                            (VeASLC_v_VehSpdBiased <=
                             rtb_VeASLC_v_ServiceToolSpdLim)) &&
                            (rtb_LogicalOperator7 || AND_nk)) || rtb_tempSetSpd6)
                    {
                        /* Transition: '<S145>:309' */
                        /* Exit 'Offline_Enabled': '<S145>:237' */
                        ASLR_ac_B.LeASLR_e_ASLPrevState = 10.0F;
                        ASLR_ac_DW.is_ON = ASLR_ac_IN_Engaged;

                        /* Entry 'Engaged': '<S145>:243' */
                        ASLR_ac_B.LeASLR_b_ASLEngaged = true;
                        ASLR_ac_B.LeASLR_b_ASLFlag = true;
                        ASLR_ac_B.LeASLR_v_PreRampVehSpd =
                            VeASLC_v_SetVehSpdLimDtrmnd;
                        ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                            ASLR_ac_B.LeASLR_v_PreRampVehSpd;
                        ASLR_ac_enter_internal_Engaged();
                    }
                    else
                    {
                        ASLR_ac_B.LeASLR_v_PreRampVehSpd =
                            VeASLC_v_SetVehSpdLimDtrmnd;
                        ASLR_ac_B.LeASLR_v_InitVehSpdLim =
                            ASLR_ac_B.LeASLR_v_PreRampVehSpd;
                    }
                    break;
                }
            }
            break;
        }

        if (guard1)
        {
            /* Exit 'Enabled': '<S145>:4' */
            ASLR_ac_B.LeASLR_e_ASLPrevState = 1.0F;
            ASLR_ac_DW.is_ON = ASLR_ac_IN_Engaged;

            /* Entry 'Engaged': '<S145>:243' */
            ASLR_ac_B.LeASLR_b_ASLEngaged = true;
            ASLR_ac_B.LeASLR_b_ASLFlag = true;
            ASLR_ac_B.LeASLR_v_PreRampVehSpd = VeASLC_v_SetVehSpdLimDtrmnd;
            ASLR_ac_B.LeASLR_v_InitVehSpdLim = ASLR_ac_B.LeASLR_v_PreRampVehSpd;
            ASLR_ac_enter_internal_Engaged();
        }
    }

    /* Gain: '<S167>/Gain' */
    VeASLC_v_InitVehSpdLim = ASLR_ac_B.LeASLR_v_InitVehSpdLim;

    /* Logic: '<S27>/Logical' incorporates:
     *  Constant: '<S158>/Constant'
     *  RelationalOperator: '<S27>/Comparison4'
     *  UnitDelay: '<S27>/Unit Delay3'
     */
    VeASLR_b_ModulePowerdown_tmp = ((((uint32)ASLR_ac_DW.UnitDelay3_DSTATE_i) ==
        CePMDR_e_PowerMode_Run) && rtb_tempSetSpd4_n);

    /* Outputs for Atomic SubSystem: '<S27>/EdgeRising2' */
    /* Logic: '<S156>/OR1' incorporates:
     *  UnitDelay: '<S156>/Unit Delay'
     */
    rtb_LogicalOperator7 = !ASLR_ac_DW.UnitDelay_DSTATE_pp;

    /* Update for UnitDelay: '<S156>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_pp = VeASLR_b_ModulePowerdown_tmp;

    /* Switch: '<S160>/Switch1' incorporates:
     *  Logic: '<S156>/AND'
     *  UnitDelay: '<S160>/Unit Delay'
     */
    if ((VeASLR_b_ModulePowerdown_tmp) && rtb_LogicalOperator7)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_a = VeASLC_v_InitVehSpdLim;
    }

    /* End of Switch: '<S160>/Switch1' */
    /* End of Outputs for SubSystem: '<S27>/EdgeRising2' */

    /* DataStoreWrite: '<S27>/Data Store Write' incorporates:
     *  UnitDelay: '<S160>/Unit Delay'
     */
    ASLR_ac_DW.NeASLR_v_InitVehSpdLim = ASLR_ac_DW.UnitDelay_DSTATE_a;

    /* Logic: '<S146>/AND' */
    VeASLC_b_TorqLimActive = ASLR_ac_B.LeASLR_b_TorqLimActive;

    /* Logic: '<S147>/AND' */
    VeASLC_b_ASLEngaged = ASLR_ac_B.LeASLR_b_ASLEngaged;

    /* Logic: '<S148>/AND' */
    VeASLC_b_ASLEnabled = ASLR_ac_B.LeASLR_b_ASLEnabled;

    /* Logic: '<S149>/AND' */
    VeASLC_b_ASLFlag = ASLR_ac_B.LeASLR_b_ASLFlag;

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S27>/EdgeFalling3' */
    /* Logic: '<S153>/OR1' incorporates:
     *  Logic: '<S299>/OR1'
     */
    AND_nk = !VeASLI_b_SpeedUnit;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling' */

    /* Logic: '<S153>/AND' incorporates:
     *  Logic: '<S153>/OR1'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    rtb_LogicalOperator7 = (AND_nk && (ASLR_ac_DW.UnitDelay_DSTATE_ia));

    /* Update for UnitDelay: '<S153>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ia = VeASLI_b_SpeedUnit;

    /* End of Outputs for SubSystem: '<S27>/EdgeFalling3' */

    /* Outputs for Atomic SubSystem: '<S27>/EdgeFalling4' */
    /* Logic: '<S154>/AND' incorporates:
     *  Logic: '<S154>/OR1'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_OR1_g = ((!rtb_tempSetSpd4_n) && (ASLR_ac_DW.UnitDelay_DSTATE_l1));

    /* Update for UnitDelay: '<S154>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_l1 = rtb_tempSetSpd4_n;

    /* End of Outputs for SubSystem: '<S27>/EdgeFalling4' */

    /* Outputs for Atomic SubSystem: '<S27>/EdgeRising3' */
    /* Logic: '<S157>/OR1' incorporates:
     *  UnitDelay: '<S157>/Unit Delay'
     */
    rtb_tempSetSpd6 = !ASLR_ac_DW.UnitDelay_DSTATE_c4;

    /* Update for UnitDelay: '<S157>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_c4 = VeASLI_b_SpeedUnit;

    /* End of Outputs for SubSystem: '<S27>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S27>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S172>/EdgeFalling' */
    /* Logic: '<S173>/AND' incorporates:
     *  Logic: '<S173>/OR1'
     *  UnitDelay: '<S173>/Unit Delay'
     */
    rtb_AND_at = ((!rtb_OR1_g) && (ASLR_ac_DW.UnitDelay_DSTATE_fl));

    /* Update for UnitDelay: '<S173>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_fl = rtb_OR1_g;

    /* End of Outputs for SubSystem: '<S172>/EdgeFalling' */

    /* Switch: '<S172>/Switch' incorporates:
     *  Constant: '<S110>/Calib'
     *  Constant: '<S163>/Calib'
     *  Constant: '<S172>/Constant Value1'
     *  MinMax: '<S172>/Minimum'
     *  Sum: '<S172>/Summation'
     *  UnitDelay: '<S172>/Unit Delay'
     */
    if (rtb_AND_at)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_j = KeASLR_t_LatchASLSetSpdLimDelay;
    }
    else
    {
        ASLR_ac_DW.UnitDelay_DSTATE_j = fmaxf(ASLR_ac_DW.UnitDelay_DSTATE_j -
            HeASLR_t_dT, 0.0F);
    }

    /* End of Switch: '<S172>/Switch' */

    /* Logic: '<S27>/Logical2' incorporates:
     *  Constant: '<S161>/Calib'
     *  Constant: '<S172>/Constant Value2'
     *  Logic: '<S172>/AND'
     *  RelationalOperator: '<S172>/Greater  Than'
     *  UnitDelay: '<S172>/Unit Delay'
     */
    VeASLC_b_LatchASLSpdLimFlag = ((KeASLR_b_LatchASLSetSpdLim) && (rtb_OR1_g ||
        (ASLR_ac_DW.UnitDelay_DSTATE_j > 0.0F)));

    /* End of Outputs for SubSystem: '<S27>/Turn Off Delay Time' */

    /* Switch: '<S27>/Switch1' */
    if (VeASLC_b_LatchASLSpdLimFlag)
    {
        /* Switch: '<S27>/Switch1' incorporates:
         *  DataStoreRead: '<S27>/Data Store Read'
         */
        VeASLC_v_InitVehSpdLimPostLatch = ASLR_ac_DW.NeASLR_v_InitVehSpdLim;
    }
    else
    {
        /* Switch: '<S27>/Switch1' */
        VeASLC_v_InitVehSpdLimPostLatch = VeASLC_v_InitVehSpdLim;
    }

    /* End of Switch: '<S27>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S27>/EdgeRising3' */
    /* Switch: '<S27>/Switch3' incorporates:
     *  Logic: '<S157>/AND'
     */
    if ((VeASLI_b_SpeedUnit) && rtb_tempSetSpd6)
    {
        /* Switch: '<S27>/Switch3' incorporates:
         *  Constant: '<S27>/Constant Value2'
         *  Product: '<S27>/Product1'
         */
        VeASLC_r_ASL_Mult = VeASLC_v_InitVehSpdLimPostLatch * 0.62137121F;
    }
    else
    {
        /* Switch: '<S27>/Switch3' */
        VeASLC_r_ASL_Mult = VeASLC_v_InitVehSpdLimPostLatch;
    }

    /* End of Switch: '<S27>/Switch3' */
    /* End of Outputs for SubSystem: '<S27>/EdgeRising3' */

    /* Switch: '<S27>/Switch4' */
    if (rtb_LogicalOperator7)
    {
        /* Switch: '<S27>/Switch4' incorporates:
         *  Constant: '<S27>/Constant Value3'
         *  Product: '<S27>/Product2'
         */
        VeASLC_r_ASL_Mult = VeASLC_r_ASL_Mult * 1.60934401F;
    }

    /* End of Switch: '<S27>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S27>/Limiter' */
    /* Switch: '<S164>/Switch1' incorporates:
     *  RelationalOperator: '<S164>/Relational Operator'
     */
    if (rtb_VeASLC_v_ServiceToolSpdLim < VeASLC_r_ASL_Mult)
    {
        /* Switch: '<S422>/Switch1' */
        VeASLC_r_ASL_Mult = rtb_VeASLC_v_ServiceToolSpdLim;
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Switch: '<S164>/Switch' incorporates:
     *  RelationalOperator: '<S164>/Relational Operator1'
     *  UnitDelay: '<S27>/Unit Delay2'
     */
    if (VeASLC_r_ASL_Mult > Switch11)
    {
        ASLR_ac_DW.UnitDelay2_DSTATE_m = VeASLC_r_ASL_Mult;
    }
    else
    {
        ASLR_ac_DW.UnitDelay2_DSTATE_m = Switch11;
    }

    /* End of Switch: '<S164>/Switch' */
    /* End of Outputs for SubSystem: '<S27>/Limiter' */

    /* Gain: '<S168>/Gain' */
    VeASLC_e_ASLCurrentState = ASLR_ac_B.LeASLR_e_ASLCurrentState;

    /* RelationalOperator: '<S27>/Relational Operator5' incorporates:
     *  Constant: '<S27>/Override'
     */
    rtb_OR1_g = (VeASLC_e_ASLCurrentState == 5.0F);

    /* Gain: '<S166>/Gain' */
    VeASLC_e_ASLPrevState = ASLR_ac_B.LeASLR_e_ASLPrevState;

    /* Gain: '<S169>/Gain' */
    VeASLC_Cnt_ASLCounter = ASLR_ac_B.LeASLR_Cnt_ASLCounter;

    /* Gain: '<S170>/Gain' */
    VeASLC_e_SpeedLimitStsforCAN = ASLR_ac_B.LeASLR_e_SpeedLimitStsforCAN;

    /* Gain: '<S171>/Gain' */
    VeASLR_v_PreRampVehSpd = ASLR_ac_B.LeASLR_v_PreRampVehSpd;

    /* Switch: '<S27>/Switch' */
    if (VeASLC_b_ASLEnabled)
    {
        /* Switch: '<S27>/Switch' incorporates:
         *  UnitDelay: '<S27>/Unit Delay2'
         */
        Switch1_n = ASLR_ac_DW.UnitDelay2_DSTATE_m;
    }
    else
    {
        /* Switch: '<S27>/Switch' incorporates:
         *  Constant: '<S27>/ASLoff'
         */
        Switch1_n = 0.0F;
    }

    /* End of Switch: '<S27>/Switch' */

    /* Logic: '<S174>/Logical Operator2' incorporates:
     *  Constant: '<S179>/Constant'
     *  Constant: '<S180>/Constant'
     *  Constant: '<S181>/Constant'
     *  Constant: '<S182>/Constant'
     *  Logic: '<S174>/Logical Operator1'
     *  RelationalOperator: '<S174>/Comparison1'
     *  RelationalOperator: '<S174>/Comparison2'
     *  RelationalOperator: '<S174>/Comparison3'
     *  RelationalOperator: '<S174>/Comparison4'
     */
    VeASLC_b_ACC_Enggd = ((((uint32)VeASLI_e_ProxiACC) != CePLTR_e_ACC_Absent) &&
                          (((((uint32)VeASLI_e_ACCSystemSts) == CePLTR_e_Engaged)
                            || (((uint32)VeASLI_e_ACCSystemSts) ==
        CePLTR_e_Engaged_BrakeOnly)) || (((uint32)VeASLI_e_ACCSystemSts) ==
                            CePLTR_e_Override)));

    /* Switch: '<S450>/temp SetSpd 6' incorporates:
     *  Constant: '<S176>/Constant'
     *  RelationalOperator: '<S28>/Comparison4'
     *  Switch: '<S21>/Switch39'
     */
    rtb_tempSetSpd6 = (((uint32)VeASLR_e_ShippingMode) ==
                       CePLTR_e_ShipingMode_SHIP_MD);

    /* RelationalOperator: '<S188>/Comparison4' incorporates:
     *  Constant: '<S210>/Calib'
     *  Sum: '<S188>/Sum'
     */
    VeASLC_b_DrvMdTurtleMdOvrrdCond2 = ((rtb_Add -
        KeASLR_v_DrvMdOvrrdCondVehSpdOfst) > rtb_MinMax);

    /* Outputs for Atomic SubSystem: '<S187>/Signal Latch On With Reset3' */
    /* Logic: '<S202>/OR1' incorporates:
     *  Logic: '<S187>/Logical11'
     *  Logic: '<S187>/Logical2'
     *  Logic: '<S187>/Logical4'
     *  Logic: '<S202>/OR'
     *  RelationalOperator: '<S187>/Comparison1'
     *  RelationalOperator: '<S187>/Comparison2'
     *  UnitDelay: '<S187>/Unit Delay'
     *  UnitDelay: '<S187>/Unit Delay1'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_m3 = ((((VeASLR_e_DrvMdStat !=
        ASLR_ac_DW.UnitDelay_DSTATE_fiy) || (VeASLR_e_TurtleMdSts !=
        ASLR_ac_DW.UnitDelay1_DSTATE_h)) && (VeASLC_b_DrvMdTurtleMdOvrrdCond2)) ||
        ((VeASLC_b_DrvMdTurtleMdOvrrdCond2) && (ASLR_ac_DW.UnitDelay_DSTATE_m3)));

    /* End of Outputs for SubSystem: '<S187>/Signal Latch On With Reset3' */

    /* Outputs for Atomic SubSystem: '<S188>/Hysteresis' */
    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S207>/Constant Value'
     *  Constant: '<S208>/Calib'
     *  Constant: '<S209>/Calib'
     *  RelationalOperator: '<S207>/Greater  Than'
     *  RelationalOperator: '<S207>/Greater  Than1'
     *  UnitDelay: '<S207>/Unit Delay'
     */
    if (VeASLR_Pct_AccelPedalEffPosition >
            KeASLR_Pct_AccelPdlDrvMdOvrrdKickdownRSP)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_c0m = true;
    }
    else
    {
        ASLR_ac_DW.UnitDelay_DSTATE_c0m = ((VeASLR_Pct_AccelPedalEffPosition >=
            KeASLR_Pct_AccelPdlDrvMdOvrrdKickdownLSP) &&
            (ASLR_ac_DW.UnitDelay_DSTATE_c0m));
    }

    /* End of Switch: '<S207>/Switch1' */
    /* End of Outputs for SubSystem: '<S188>/Hysteresis' */

    /* Logic: '<S188>/Logical1' incorporates:
     *  Logic: '<S175>/Logical11'
     *  UnitDelay: '<S207>/Unit Delay'
     */
    VeASLC_b_DrvMdTurtleMdOvrrdCond1 = (((ASLR_ac_DW.UnitDelay_DSTATE_c0m) ||
        (((VeASLR_b_CcEngaged) || (VeASLC_b_ASLEngaged)) || (VeASLC_b_ACC_Enggd)))
        || rtb_AND_py);

    /* Outputs for Atomic SubSystem: '<S187>/Signal Latch On With Reset2' */
    /* Logic: '<S201>/OR1' incorporates:
     *  Logic: '<S187>/Logical12'
     *  Logic: '<S201>/OR'
     *  UnitDelay: '<S201>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_oj = ((VeASLC_b_DrvMdTurtleMdOvrrdCond1) ||
        ((VeASLC_b_DrvMdTurtleMdOvrrdCond2) && (ASLR_ac_DW.UnitDelay_DSTATE_oj)));

    /* End of Outputs for SubSystem: '<S187>/Signal Latch On With Reset2' */

    /* Logic: '<S187>/Logical10' incorporates:
     *  UnitDelay: '<S201>/Unit Delay'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    VeASLC_b_DrvMdTurtleMdOvrrdActv = ((ASLR_ac_DW.UnitDelay_DSTATE_m3) ||
        (ASLR_ac_DW.UnitDelay_DSTATE_oj));

    /* Switch: '<S187>/Switch6' incorporates:
     *  UnitDelay: '<S202>/Unit Delay'
     */
    if (!ASLR_ac_DW.UnitDelay_DSTATE_m3)
    {
        /* Switch: '<S187>/Switch6' */
        ASLR_ac_DW.UnitDelay_DSTATE_g = rtb_MinMax;
    }

    /* End of Switch: '<S187>/Switch6' */

    /* Switch: '<S187>/Switch2' */
    if (VeASLC_b_DrvMdTurtleMdOvrrdActv)
    {
        /* Switch: '<S187>/Switch4' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S190>/Constant'
         *  Constant: '<S191>/Constant'
         *  Constant: '<S192>/Constant'
         *  Constant: '<S193>/Constant'
         *  Constant: '<S194>/Constant'
         *  Constant: '<S195>/Constant'
         *  Constant: '<S196>/Constant'
         *  Constant: '<S197>/Constant'
         *  Constant: '<S198>/Calib'
         *  Logic: '<S187>/Logical1'
         *  Logic: '<S187>/Logical13'
         *  Logic: '<S187>/Logical3'
         *  Logic: '<S187>/Logical5'
         *  Logic: '<S187>/Logical6'
         *  Logic: '<S187>/Logical7'
         *  Logic: '<S187>/Logical8'
         *  Logic: '<S187>/Logical9'
         *  RelationalOperator: '<S187>/Comparison10'
         *  RelationalOperator: '<S187>/Comparison3'
         *  RelationalOperator: '<S187>/Comparison4'
         *  RelationalOperator: '<S187>/Comparison5'
         *  RelationalOperator: '<S187>/Comparison6'
         *  RelationalOperator: '<S187>/Comparison7'
         *  RelationalOperator: '<S187>/Comparison8'
         *  RelationalOperator: '<S187>/Comparison9'
         *  Switch: '<S187>/Switch1'
         *  Switch: '<S187>/Switch3'
         *  Switch: '<S187>/Switch7'
         *  UnitDelay: '<S201>/Unit Delay'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        if (KeASLR_b_Abarth595_DMTMSpdLimArbEnbl)
        {
            /* Switch: '<S187>/Switch5' incorporates:
             *  UnitDelay: '<S201>/Unit Delay'
             */
            if (ASLR_ac_DW.UnitDelay_DSTATE_oj)
            {
                /* Switch: '<S187>/Switch2' incorporates:
                 *  Switch: '<S187>/Switch4'
                 *  UnitDelay: '<S186>/Unit Delay'
                 */
                VeASLC_v_DrvMdTurtleMdSpdLimArb = ASLR_ac_DW.UnitDelay_DSTATE;
            }
            else
            {
                /* Switch: '<S187>/Switch2' incorporates:
                 *  Switch: '<S187>/Switch4'
                 */
                VeASLC_v_DrvMdTurtleMdSpdLimArb = ASLR_ac_DW.UnitDelay_DSTATE_g;
            }

            /* End of Switch: '<S187>/Switch5' */
        }
        else if (((((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_Power) &&
                  (HeASLR_b_x250ProgrammPrsnc)) || (((((uint32)
                     VeASLR_e_TurtleMdSts) != CeDMDR_e_No_Turtle_Mode) &&
                   (ASLR_ac_DW.UnitDelay_DSTATE_m3)) &&
                  (!ASLR_ac_DW.UnitDelay_DSTATE_oj)))
        {
            /* Switch: '<S187>/Switch3' incorporates:
             *  Switch: '<S187>/Switch2'
             *  UnitDelay: '<S186>/Unit Delay'
             */
            VeASLC_v_DrvMdTurtleMdSpdLimArb = ASLR_ac_DW.UnitDelay_DSTATE;
        }
        else if ((((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_ECO) ||
                 ((CeTMDR_e_ECO == ((uint32)Switch72)) && (((uint32)
                    VeASLI_e_TerrainMd) == CeTMDR_e_Custom)))
        {
            /* Switch: '<S187>/Switch7' incorporates:
             *  Constant: '<S200>/Calib'
             *  Switch: '<S187>/Switch2'
             *  Switch: '<S187>/Switch3'
             */
            VeASLC_v_DrvMdTurtleMdSpdLimArb = KeASLR_v_VehSpdLimKPH_LP3Normal;
        }
        else if ((((uint32)VeASLI_e_TerrainMd) == CeTMDR_e_Auto) ||
                 ((CeTMDR_e_Auto == ((uint32)Switch72)) && (((uint32)
                    VeASLI_e_TerrainMd) == CeTMDR_e_Custom)))
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Constant: '<S200>/Calib'
             *  Switch: '<S187>/Switch2'
             *  Switch: '<S187>/Switch3'
             *  Switch: '<S187>/Switch7'
             */
            VeASLC_v_DrvMdTurtleMdSpdLimArb = KeASLR_v_VehSpdLimKPH_LP3Normal;
        }
        else
        {
            /* Switch: '<S187>/Switch2' incorporates:
             *  Constant: '<S199>/Calib'
             *  Switch: '<S187>/Switch1'
             *  Switch: '<S187>/Switch3'
             *  Switch: '<S187>/Switch7'
             */
            VeASLC_v_DrvMdTurtleMdSpdLimArb = KeASLR_v_VehSpdLimKPH_DrvMdNormal;
        }

        /* End of Switch: '<S187>/Switch4' */
    }
    else
    {
        /* Switch: '<S187>/Switch2' */
        VeASLC_v_DrvMdTurtleMdSpdLimArb = rtb_MinMax;
    }

    /* End of Switch: '<S187>/Switch2' */

    /* RelationalOperator: '<S188>/Comparison2' incorporates:
     *  Constant: '<S205>/Constant'
     */
    rtb_AND_py = (((uint32)VeASLR_e_DrvMdStat) == CeDMDR_e_Camel_Mode);

    /* UnitDelay: '<S378>/Unit Delay' incorporates:
     *  Constant: '<S204>/Constant'
     *  Constant: '<S206>/Constant'
     *  Logic: '<S188>/Logical4'
     *  RelationalOperator: '<S188>/Comparison1'
     *  RelationalOperator: '<S188>/Comparison8'
     */
    rtb_LogicalOperator7 = ((((uint32)VeASLR_e_TurtleMdSts) ==
        CeDMDR_e_Turtle_Mode1) || (((uint32)VeASLR_e_TurtleMdSts) ==
        CeDMDR_e_Turtle_Mode2));

    /* Outputs for Atomic SubSystem: '<S188>/Signal Latch On With Reset' */
    /* Logic: '<S211>/OR1' incorporates:
     *  Logic: '<S188>/Logical6'
     *  Logic: '<S188>/Logical7'
     *  Logic: '<S211>/OR'
     *  UnitDelay: '<S188>/Unit Delay'
     *  UnitDelay: '<S211>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_n5 = (((ASLR_ac_DW.UnitDelay_DSTATE_jd) &&
        rtb_LogicalOperator7) || (rtb_LogicalOperator7 &&
        (ASLR_ac_DW.UnitDelay_DSTATE_n5)));

    /* End of Outputs for SubSystem: '<S188>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S189>/Signal Latch On With Reset' */
    /* Logic: '<S223>/OR1' incorporates:
     *  Logic: '<S189>/Logical2'
     *  Logic: '<S189>/Logical4'
     *  Logic: '<S223>/OR'
     *  UnitDelay: '<S223>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_ak = (((VeASLC_b_DrvMdTurtleMdOvrrdCond1) &&
        (VeASLC_b_DrvMdTurtleMdOvrrdCond2)) ||
        ((VeASLC_b_DrvMdTurtleMdOvrrdCond2) && (ASLR_ac_DW.UnitDelay_DSTATE_ak)));

    /* End of Outputs for SubSystem: '<S189>/Signal Latch On With Reset' */

    /* Logic: '<S189>/Logical10' incorporates:
     *  Logic: '<S188>/Logical3'
     */
    rtb_LogicalOperator7 = ((rtb_AND_py || (ASLR_ac_DW.UnitDelay_DSTATE_n5)) &&
                            (ASLR_ac_DW.UnitDelay_DSTATE_ak));

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising1' */
    /* Logic: '<S215>/OR1' incorporates:
     *  UnitDelay: '<S215>/Unit Delay'
     */
    rtb_AND_at = !ASLR_ac_DW.UnitDelay_DSTATE_eo;

    /* Update for UnitDelay: '<S215>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_eo = rtb_LogicalOperator7;

    /* End of Outputs for SubSystem: '<S189>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising' */
    /* Logic: '<S214>/OR1' incorporates:
     *  UnitDelay: '<S214>/Unit Delay'
     */
    rtb_OR1_pz = !ASLR_ac_DW.UnitDelay_DSTATE_co;

    /* Update for UnitDelay: '<S214>/Unit Delay' incorporates:
     *  Constant: '<S189>/TRUE Constant'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_co = true;

    /* Outputs for Atomic SubSystem: '<S189>/Counter Reset  Enabled ' */
    /* Switch: '<S212>/Switch' incorporates:
     *  Constant: '<S212>/Constant Value2'
     *  Logic: '<S214>/AND'
     *  Logic: '<S215>/AND'
     *  Switch: '<S212>/Switch2'
     *  UnitDelay: '<S212>/Unit Delay'
     */
    if (rtb_OR1_pz)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_eh = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S189>/EdgeRising1' */
        if (rtb_LogicalOperator7 && rtb_AND_at)
        {
            /* UnitDelay: '<S212>/Unit Delay' incorporates:
             *  Constant: '<S212>/Constant Value1'
             *  Sum: '<S212>/Subtraction'
             *  Switch: '<S212>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_eh = (uint16)(((uint32)
                ASLR_ac_DW.UnitDelay_DSTATE_eh) + 1U);
        }

        /* End of Outputs for SubSystem: '<S189>/EdgeRising1' */
    }

    /* End of Switch: '<S212>/Switch' */
    /* End of Outputs for SubSystem: '<S189>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S189>/EdgeRising' */

    /* UnitDelay: '<S374>/Unit Delay' incorporates:
     *  Logic: '<S186>/Logical3'
     */
    rtb_UnitDelay_ap = (rtb_OR1_ha || rtb_UnitDelay_ap);

    /* Logic: '<S189>/Logical1' */
    rtb_AND_at = ((ASLR_ac_DW.UnitDelay_DSTATE_ak) && rtb_UnitDelay_ap);

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising3' */
    /* Logic: '<S217>/OR1' incorporates:
     *  UnitDelay: '<S217>/Unit Delay'
     */
    rtb_OR1_pz = !ASLR_ac_DW.UnitDelay_DSTATE_el;

    /* Update for UnitDelay: '<S217>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_el = rtb_AND_at;

    /* End of Outputs for SubSystem: '<S189>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising2' */
    /* Logic: '<S216>/OR1' incorporates:
     *  UnitDelay: '<S216>/Unit Delay'
     */
    rtb_OR1_cs = !ASLR_ac_DW.UnitDelay_DSTATE_fi;

    /* Update for UnitDelay: '<S216>/Unit Delay' incorporates:
     *  Constant: '<S189>/TRUE Constant1'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_fi = true;

    /* Outputs for Atomic SubSystem: '<S189>/Counter Reset  Enabled 1' */
    /* Switch: '<S213>/Switch' incorporates:
     *  Constant: '<S213>/Constant Value2'
     *  Logic: '<S216>/AND'
     *  Logic: '<S217>/AND'
     *  Switch: '<S213>/Switch2'
     *  UnitDelay: '<S213>/Unit Delay'
     */
    if (rtb_OR1_cs)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_mn = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S189>/EdgeRising3' */
        if (rtb_AND_at && rtb_OR1_pz)
        {
            /* UnitDelay: '<S213>/Unit Delay' incorporates:
             *  Constant: '<S213>/Constant Value1'
             *  Sum: '<S213>/Subtraction'
             *  Switch: '<S213>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_mn = (uint16)(((uint32)
                ASLR_ac_DW.UnitDelay_DSTATE_mn) + 1U);
        }

        /* End of Outputs for SubSystem: '<S189>/EdgeRising3' */
    }

    /* End of Switch: '<S213>/Switch' */
    /* End of Outputs for SubSystem: '<S189>/Counter Reset  Enabled 1' */
    /* End of Outputs for SubSystem: '<S189>/EdgeRising2' */

    /* If: '<S189>/If_DrvMdTurtleMdOvrrdSt' incorporates:
     *  Constant: '<S222>/Calib'
     *  Logic: '<S189>/Logical3'
     */
    if ((HeASLR_b_HMICamelMdEnbl) && rtb_LogicalOperator7)
    {
        /* Outputs for IfAction SubSystem: '<S189>/HMI_CamelMd' incorporates:
         *  ActionPort: '<S218>/Action Port'
         */
        /* Switch: '<S218>/temp SetSpd 1' incorporates:
         *  Constant: '<S218>/Threshold_Instance'
         *  Constant: '<S218>/Threshold_Pop_Up_Only'
         *  Constant: '<S224>/Calib'
         *  Logic: '<S218>/Logical3'
         *  RelationalOperator: '<S218>/Comparison6'
         *  UnitDelay: '<S212>/Unit Delay'
         */
        if ((((sint32)ASLR_ac_DW.UnitDelay_DSTATE_eh) >= 2) &&
                (HeASLR_b_HMICamelMdPopUpOnlyEnbl))
        {
            rtb_Switch1_k = ASLR_ac_DW.UnitDelay_DSTATE_eh;
        }
        else
        {
            rtb_Switch1_k = 1U;
        }

        /* End of Switch: '<S218>/temp SetSpd 1' */

        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S218>/Threshold_Instance1'
         *  RelationalOperator: '<S218>/Comparison1'
         */
        if (((sint32)rtb_Switch1_k) >= 2)
        {
            /* Merge: '<S189>/Merge1' incorporates:
             *  Constant: '<S218>/Camel_Telltale'
             */
            VeASLC_e_DrvMdTurtleMdOvrrdSt = 2;
        }
        else
        {
            /* Merge: '<S189>/Merge1' incorporates:
             *  Constant: '<S218>/Camel_Pop_Up'
             */
            VeASLC_e_DrvMdTurtleMdOvrrdSt = 1;
        }

        /* End of Switch: '<S218>/Switch1' */
        /* End of Outputs for SubSystem: '<S189>/HMI_CamelMd' */
    }
    else if (rtb_AND_at)
    {
        /* Outputs for IfAction SubSystem: '<S189>/HMI_TurtleMd' incorporates:
         *  ActionPort: '<S220>/Action Port'
         */
        /* Switch: '<S220>/temp SetSpd 1' incorporates:
         *  Constant: '<S220>/Threshold_Instance'
         *  Constant: '<S220>/Threshold_Pop_Up_Only'
         *  Constant: '<S225>/Calib'
         *  Logic: '<S220>/Logical3'
         *  RelationalOperator: '<S220>/Comparison6'
         *  UnitDelay: '<S213>/Unit Delay'
         */
        if ((((sint32)ASLR_ac_DW.UnitDelay_DSTATE_mn) >= 2) &&
                (HeASLR_b_HMITurtleMdEnbl))
        {
            rtb_Switch1_k = ASLR_ac_DW.UnitDelay_DSTATE_mn;
        }
        else
        {
            rtb_Switch1_k = 1U;
        }

        /* End of Switch: '<S220>/temp SetSpd 1' */

        /* Switch: '<S220>/Switch2' incorporates:
         *  Constant: '<S220>/Threshold_Instance1'
         *  RelationalOperator: '<S220>/Comparison1'
         */
        if (((sint32)rtb_Switch1_k) >= 2)
        {
            /* Merge: '<S189>/Merge1' incorporates:
             *  Constant: '<S220>/Turtle_Telltale'
             */
            VeASLC_e_DrvMdTurtleMdOvrrdSt = 4;
        }
        else
        {
            /* Merge: '<S189>/Merge1' incorporates:
             *  Constant: '<S220>/Turtle_Pop_Up'
             */
            VeASLC_e_DrvMdTurtleMdOvrrdSt = 3;
        }

        /* End of Switch: '<S220>/Switch2' */
        /* End of Outputs for SubSystem: '<S189>/HMI_TurtleMd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S189>/HMI_None' incorporates:
         *  ActionPort: '<S219>/Action Port'
         */
        /* Merge: '<S189>/Merge1' incorporates:
         *  Constant: '<S219>/NoRequest'
         *  SignalConversion generated from: '<S219>/HMI_NoRequest'
         */
        VeASLC_e_DrvMdTurtleMdOvrrdSt = 0;

        /* End of Outputs for SubSystem: '<S189>/HMI_None' */
    }

    /* End of If: '<S189>/If_DrvMdTurtleMdOvrrdSt' */

    /* Selector: '<S189>/Selector' incorporates:
     *  Constant: '<S221>/Calib'
     */
    VeASLC_e_DrvMdTurtleMdOvrrdStRaw = HaASLR_i_DriveMdOvrdRemapping
        [(VeASLC_e_DrvMdTurtleMdOvrrdSt)];

    /* Sum: '<S184>/Add' incorporates:
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     *  Product: '<S184>/Divide'
     *  Switch: '<S21>/Switch23'
     */
    VeASLC_v_DrvMdTurtleMdSpdLimUnbiased = (VeASLC_v_DrvMdTurtleMdSpdLimArb /
        Switch66) - ((float32)((uint16)VeASLR_e_ProxiIncreasingSpdCnst));

    /* Sum: '<S184>/Add1' incorporates:
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     *  Product: '<S184>/Divide1'
     *  Switch: '<S21>/Switch23'
     */
    VeASLC_v_STSpdLimUnbiasedKPH = (VeASLC_v_ServiceToolSpdLimKPH / Switch66) -
        ((float32)((uint16)VeASLR_e_ProxiIncreasingSpdCnst));

    /* Switch: '<S185>/Switch1' incorporates:
     *  Switch: '<S185>/Switch3'
     */
    if (VeASLI_b_SpeedUnit)
    {
        /* Switch: '<S185>/Switch3' incorporates:
         *  Constant: '<S226>/Calib'
         */
        if (rtb_tempSetSpd6)
        {
            rtb_Switch1_duk = KeASLR_v_VehSpdLimKPH_ShippingMd;
        }
        else
        {
            rtb_Switch1_duk = VeASLC_v_DrvMdTurtleMdSpdLimUnbiased;
        }

        /* Switch: '<S185>/Switch1' incorporates:
         *  Constant: '<S185>/Constant Value2'
         *  Product: '<S185>/Product2'
         */
        VeASLC_v_ShippingMdSpdLimArb = 0.62137121F * rtb_Switch1_duk;
    }
    else if (rtb_tempSetSpd6)
    {
        /* Switch: '<S185>/Switch3' incorporates:
         *  Constant: '<S226>/Calib'
         *  Switch: '<S185>/Switch1'
         */
        VeASLC_v_ShippingMdSpdLimArb = KeASLR_v_VehSpdLimKPH_ShippingMd;
    }
    else
    {
        /* Switch: '<S185>/Switch1' incorporates:
         *  Switch: '<S185>/Switch3'
         */
        VeASLC_v_ShippingMdSpdLimArb = VeASLC_v_DrvMdTurtleMdSpdLimUnbiased;
    }

    /* End of Switch: '<S185>/Switch1' */

    /* Switch: '<S186>/Switch5' */
    if (rtb_UnitDelay_ap)
    {
        /* Switch: '<S186>/Switch6' incorporates:
         *  Switch: '<S186>/Switch8'
         */
        if (VeASLI_b_SpeedUnit)
        {
            /* Switch: '<S186>/Switch7' */
            if (rtb_OR1_ha)
            {
                /* Gain: '<S49>/Gain' incorporates:
                 *  Constant: '<S260>/Calib'
                 *  Outport: '<Root>/VeASLR_v_TurtleMdSpdLim'
                 *  SignalConversion generated from: '<S1>/TurtleMdSpdLim'
                 */
                (void)Rte_Write_VeASLR_v_TurtleMdSpdLim_Value
                    (KeASLR_v_VehSpdLimMPH_TurtleMd3);
            }
            else
            {
                /* Gain: '<S49>/Gain' incorporates:
                 *  Constant: '<S261>/Calib'
                 *  Outport: '<Root>/VeASLR_v_TurtleMdSpdLim'
                 *  SignalConversion generated from: '<S1>/TurtleMdSpdLim'
                 */
                (void)Rte_Write_VeASLR_v_TurtleMdSpdLim_Value
                    (KeASLR_v_VehSpdLimMPH_TurtleMd4);
            }

            /* End of Switch: '<S186>/Switch7' */
        }
        else if (rtb_OR1_ha)
        {
            /* Gain: '<S49>/Gain' incorporates:
             *  Constant: '<S262>/Calib'
             *  Outport: '<Root>/VeASLR_v_TurtleMdSpdLim'
             *  SignalConversion generated from: '<S1>/TurtleMdSpdLim'
             *  Switch: '<S186>/Switch8'
             */
            (void)Rte_Write_VeASLR_v_TurtleMdSpdLim_Value
                (KeASLR_v_VehSpdLimKPH_TurtleMd3);
        }
        else
        {
            /* Gain: '<S49>/Gain' incorporates:
             *  Constant: '<S258>/Calib'
             *  Outport: '<Root>/VeASLR_v_TurtleMdSpdLim'
             *  SignalConversion generated from: '<S1>/TurtleMdSpdLim'
             *  Switch: '<S186>/Switch8'
             */
            (void)Rte_Write_VeASLR_v_TurtleMdSpdLim_Value
                (KeASLR_v_VehSpdLimKPH_TurtleMd4);
        }

        /* End of Switch: '<S186>/Switch6' */
    }
    else
    {
        /* Gain: '<S49>/Gain' incorporates:
         *  Constant: '<S259>/Calib'
         *  Outport: '<Root>/VeASLR_v_TurtleMdSpdLim'
         *  SignalConversion generated from: '<S1>/TurtleMdSpdLim'
         */
        (void)Rte_Write_VeASLR_v_TurtleMdSpdLim_Value(KeASLR_v_TurtleMdSpdLimSNA);
    }

    /* End of Switch: '<S186>/Switch5' */

    /* RelationalOperator: '<S177>/Comparison2' incorporates:
     *  UnitDelay: '<S177>/Unit Delay2'
     */
    rtb_LogicalOperator7 = (VeASLI_b_SpeedUnit != ASLR_ac_DW.UnitDelay2_DSTATE_j);

    /* Outputs for Atomic SubSystem: '<S178>/Protected Division' */
    /* Switch: '<S297>/Switch1' incorporates:
     *  Constant: '<S297>/Constant Value'
     *  Constant: '<S297>/Constant Value1'
     *  Constant: '<S297>/Constant Value2'
     *  Constant: '<S297>/Constant Value3'
     *  Logic: '<S297>/AND'
     *  RelationalOperator: '<S297>/Greater Than or Equal '
     *  RelationalOperator: '<S297>/Greater Than or Equal 1'
     *  RelationalOperator: '<S297>/Not Equal'
     *  RelationalOperator: '<S297>/Not Equal1'
     *  Switch: '<S297>/Switch2'
     *  Switch: '<S297>/Switch3'
     */
    if ((Switch1_n != 0.0F) && (Switch66 != 0.0F))
    {
        /* Switch: '<S297>/Switch1' incorporates:
         *  Product: '<S297>/Division'
         */
        rtb_Switch1_duk = Switch1_n / Switch66;
    }
    else if (Switch1_n > 0.0F)
    {
        /* Switch: '<S297>/Switch2' incorporates:
         *  Constant: '<S297>/MAXFLOAT'
         *  Switch: '<S297>/Switch1'
         */
        rtb_Switch1_duk = 3.402823466E+38F;
    }
    else if (Switch1_n < 0.0F)
    {
        /* Switch: '<S297>/Switch3' incorporates:
         *  Constant: '<S297>/MINFLOAT'
         *  Switch: '<S297>/Switch1'
         *  Switch: '<S297>/Switch2'
         */
        rtb_Switch1_duk = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S297>/Switch1' incorporates:
         *  Constant: '<S297>/Constant Value4'
         *  Switch: '<S297>/Switch2'
         *  Switch: '<S297>/Switch3'
         */
        rtb_Switch1_duk = 0.0F;
    }

    /* End of Switch: '<S297>/Switch1' */
    /* End of Outputs for SubSystem: '<S178>/Protected Division' */

    /* Sum: '<S178>/Add' incorporates:
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     *  Switch: '<S21>/Switch23'
     */
    VeASLC_v_InitVehSpdLimUnbiased = rtb_Switch1_duk - ((float32)((uint16)
        VeASLR_e_ProxiIncreasingSpdCnst));

    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising' */
    /* Logic: '<S291>/AND' incorporates:
     *  Logic: '<S291>/OR1'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_UnitDelay_ap = !ASLR_ac_DW.UnitDelay_DSTATE_kn;

    /* Update for UnitDelay: '<S291>/Unit Delay' incorporates:
     *  Constant: '<S177>/TRUE Constant'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_kn = true;

    /* End of Outputs for SubSystem: '<S177>/EdgeRising' */

    /* Logic: '<S177>/Logical5' incorporates:
     *  Logic: '<S29>/Logical Operator14'
     *  Logic: '<S29>/Logical Operator18'
     *  Logic: '<S29>/Logical2'
     *  Logic: '<S29>/Logical6'
     *  Switch: '<S29>/temp SetSpd 10'
     *  Switch: '<S29>/temp SetSpd 12'
     */
    rtb_OR1_ha = !VeASLC_b_ASLEngaged;

    /* Switch: '<S177>/Switch2' incorporates:
     *  Logic: '<S177>/Logical4'
     *  Logic: '<S177>/Logical5'
     *  Product: '<S289>/Multiplication'
     *  Product: '<S290>/Multiplication'
     *  Sum: '<S289>/Subtraction'
     *  Sum: '<S289>/Subtraction1'
     *  Sum: '<S290>/Subtraction'
     *  Sum: '<S290>/Subtraction1'
     *  Switch: '<S177>/Switch6'
     *  UnitDelay: '<S177>/Unit Delay1'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    if ((((rtb_OR1_g || rtb_OR1_ha) || (ASLR_ac_DW.UnitDelay_DSTATE_bx)) ||
            (VeASLR_b_TempFlt)) || rtb_tempSetSpd6)
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  Logic: '<S177>/Logical1'
         *  Lookup_n-D: '<S294>/Vector'
         *  Sum: '<S177>/Sum2'
         *  Switch: '<S177>/Switch3'
         *  UnitDelay: '<S177>/Unit Delay1'
         */
        if (rtb_OR1_g)
        {
            /* Switch: '<S177>/Switch7' incorporates:
             *  Constant: '<S177>/Constant Value4'
             *  Constant: '<S292>/Calib'
             */
            if (rtb_LogicalOperator7)
            {
                rtb_Switch1_duk = 1.0F;
            }
            else
            {
                rtb_Switch1_duk = KeASLR_k_ASLOvrrd;
            }

            /* End of Switch: '<S177>/Switch7' */
        }
        else if (rtb_LogicalOperator7 || rtb_UnitDelay_ap)
        {
            /* Switch: '<S177>/Switch3' incorporates:
             *  Constant: '<S177>/Constant Value'
             */
            rtb_Switch1_duk = 1.0F;
        }
        else
        {
            rtb_Switch1_duk = look1_iflf_binlca_16a
                (ASLR_ac_DW.UnitDelay1_DSTATE_d - VeASLC_v_ShippingMdSpdLimArb,
                 ((const float32 *)&(KxASLR_k_ASLDisabled[0])), ((const float32 *)
                  &(KtASLR_k_ASLDisabled[0])), 6U);
        }

        /* End of Switch: '<S177>/Switch1' */
        ASLR_ac_DW.UnitDelay1_DSTATE_d += (VeASLC_v_ShippingMdSpdLimArb -
            ASLR_ac_DW.UnitDelay1_DSTATE_d) * rtb_Switch1_duk;
    }
    else
    {
        if (rtb_LogicalOperator7)
        {
            /* Switch: '<S177>/Switch6' incorporates:
             *  Constant: '<S177>/Constant Value3'
             */
            rtb_Switch1_duk = 1.0F;
        }
        else
        {
            /* Switch: '<S177>/Switch6' incorporates:
             *  Lookup_n-D: '<S293>/Vector'
             *  Sum: '<S177>/Sum1'
             *  UnitDelay: '<S177>/Unit Delay1'
             */
            rtb_Switch1_duk = look1_iflf_binlca_16a
                (ASLR_ac_DW.UnitDelay1_DSTATE_d - VeASLC_v_InitVehSpdLimUnbiased,
                 ((const float32 *)&(KxASLR_k_ASLActive[0])), ((const float32 *)
                  &(KtASLR_k_ASLActive[0])), 6U);
        }

        ASLR_ac_DW.UnitDelay1_DSTATE_d += (VeASLC_v_InitVehSpdLimUnbiased -
            ASLR_ac_DW.UnitDelay1_DSTATE_d) * rtb_Switch1_duk;
    }

    /* End of Switch: '<S177>/Switch2' */

    /* Switch: '<S177>/Switch5' */
    if (VeASLI_b_SpeedUnit)
    {
        /* Switch: '<S177>/Switch4' incorporates:
         *  Constant: '<S177>/Constant Value1'
         *  Product: '<S177>/Product2'
         */
        rtb_Add = 1.60934401F * Switch1_n;

        /* Gain: '<S296>/Gain' incorporates:
         *  Constant: '<S177>/Constant Value1'
         *  Product: '<S177>/Product2'
         *  Switch: '<S177>/Switch4'
         *  UnitDelay: '<S177>/Unit Delay1'
         */
        VeASLC_v_SetVehSpdLimDrvMdTrtlMdUnbiasKPH = 1.60934401F *
            ASLR_ac_DW.UnitDelay1_DSTATE_d;
    }
    else
    {
        /* Switch: '<S177>/Switch4' */
        rtb_Add = Switch1_n;

        /* Gain: '<S296>/Gain' incorporates:
         *  Switch: '<S177>/Switch4'
         *  UnitDelay: '<S177>/Unit Delay1'
         */
        VeASLC_v_SetVehSpdLimDrvMdTrtlMdUnbiasKPH =
            ASLR_ac_DW.UnitDelay1_DSTATE_d;
    }

    /* End of Switch: '<S177>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S178>/Protected Division1' */
    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S298>/Constant Value'
     *  Constant: '<S298>/Constant Value1'
     *  Constant: '<S298>/Constant Value2'
     *  Constant: '<S298>/Constant Value3'
     *  Logic: '<S298>/AND'
     *  RelationalOperator: '<S298>/Greater Than or Equal '
     *  RelationalOperator: '<S298>/Greater Than or Equal 1'
     *  RelationalOperator: '<S298>/Not Equal'
     *  RelationalOperator: '<S298>/Not Equal1'
     *  Switch: '<S298>/Switch2'
     *  Switch: '<S298>/Switch3'
     */
    if ((rtb_Switch6 != 0.0F) && (Switch66 != 0.0F))
    {
        /* Switch: '<S298>/Switch1' incorporates:
         *  Product: '<S298>/Division'
         */
        Switch66 = rtb_Switch6 / Switch66;
    }
    else if (rtb_Switch6 > 0.0F)
    {
        /* Switch: '<S298>/Switch2' incorporates:
         *  Constant: '<S298>/MAXFLOAT'
         *  Switch: '<S298>/Switch1'
         */
        Switch66 = 3.402823466E+38F;
    }
    else if (rtb_Switch6 < 0.0F)
    {
        /* Switch: '<S298>/Switch3' incorporates:
         *  Constant: '<S298>/MINFLOAT'
         *  Switch: '<S298>/Switch1'
         *  Switch: '<S298>/Switch2'
         */
        Switch66 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S298>/Switch1' incorporates:
         *  Constant: '<S298>/Constant Value4'
         *  Switch: '<S298>/Switch2'
         *  Switch: '<S298>/Switch3'
         */
        Switch66 = 0.0F;
    }

    /* End of Switch: '<S298>/Switch1' */
    /* End of Outputs for SubSystem: '<S178>/Protected Division1' */

    /* Sum: '<S178>/Add1' incorporates:
     *  DataTypeConversion: '<S61>/Data Type Conversion'
     *  Switch: '<S21>/Switch23'
     */
    VeASLC_v_HomSpdLimUnbiasKPH = Switch66 - ((float32)((uint16)
        VeASLR_e_ProxiIncreasingSpdCnst));

    /* Switch: '<S177>/Switch8' incorporates:
     *  Constant: '<S108>/Calib'
     *  Constant: '<S177>/Constant Value5'
     */
    if (HeASLR_b_VF_ServiceToolSpdSel)
    {
        rtb_Switch1_duk = VeASLC_v_STSpdLimUnbiasedKPH;
    }
    else
    {
        rtb_Switch1_duk = 255.0F;
    }

    /* End of Switch: '<S177>/Switch8' */

    /* Switch: '<S177>/Switch9' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S177>/Constant Value6'
     */
    if (KeASLR_b_EnblHomSpdLim)
    {
        Switch66 = VeASLC_v_HomSpdLimUnbiasKPH;
    }
    else
    {
        Switch66 = 255.0F;
    }

    /* End of Switch: '<S177>/Switch9' */

    /* MinMax: '<S177>/MinMax' */
    VeASLC_v_SetVehSpdLimUnbiasKPH = fminf(fminf
        (VeASLC_v_SetVehSpdLimDrvMdTrtlMdUnbiasKPH, rtb_Switch1_duk), Switch66);

    /* Rounding: '<S177>/Rounding1' */
    VeASLC_v_SetVehSpdLimKPH = roundf(rtb_Add);

    /* Switch: '<S177>/Switch4' */
    if (VeASLI_b_SpeedUnit)
    {
        /* Switch: '<S177>/Switch4' */
        rtb_Add = Switch1_n;

        /* Gain: '<S295>/Gain' incorporates:
         *  Switch: '<S177>/Switch4'
         *  UnitDelay: '<S177>/Unit Delay1'
         */
        VeASLC_v_SetVehSpdLimUnbiasMPH = ASLR_ac_DW.UnitDelay1_DSTATE_d;
    }
    else
    {
        /* Switch: '<S177>/Switch4' incorporates:
         *  Constant: '<S177>/Constant Value2'
         *  Product: '<S177>/Product1'
         */
        rtb_Add = Switch1_n * 0.62137121F;

        /* Gain: '<S295>/Gain' incorporates:
         *  Constant: '<S177>/Constant Value2'
         *  Product: '<S177>/Product1'
         *  Switch: '<S177>/Switch4'
         *  UnitDelay: '<S177>/Unit Delay1'
         */
        VeASLC_v_SetVehSpdLimUnbiasMPH = ASLR_ac_DW.UnitDelay1_DSTATE_d *
            0.62137121F;
    }

    /* End of Switch: '<S177>/Switch4' */

    /* Rounding: '<S177>/Rounding2' */
    VeASLC_v_SetVehSpdLimMPH = roundf(rtb_Add);

    /* Switch: '<S29>/Switch3' incorporates:
     *  Constant: '<S311>/Calib'
     *  Logic: '<S29>/Logical14'
     *  Logic: '<S29>/Logical15'
     */
    if ((!KeASLR_b_LatchASLSetSpdLim) && rtb_tempSetSpd4_n)
    {
        /* Abs: '<S403>/Abs' */
        rtb_Add = Switch11;
    }
    else
    {
        /* Abs: '<S403>/Abs' incorporates:
         *  MinMax: '<S29>/MinMax6'
         *  UnitDelay: '<S27>/Unit Delay2'
         */
        rtb_Add = fmaxf(ASLR_ac_DW.UnitDelay2_DSTATE_m, Switch11);
    }

    /* End of Switch: '<S29>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising2' */
    /* Logic: '<S306>/OR1' incorporates:
     *  UnitDelay: '<S306>/Unit Delay'
     */
    rtb_LogicalOperator7 = !ASLR_ac_DW.UnitDelay_DSTATE_op;

    /* Update for UnitDelay: '<S306>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_op = rtb_OR1_ha;

    /* End of Outputs for SubSystem: '<S29>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling1' */
    /* Logic: '<S300>/AND' incorporates:
     *  Logic: '<S300>/OR1'
     *  UnitDelay: '<S300>/Unit Delay'
     */
    rtb_UnitDelay_ap = ((!ASLR_ac_DW.UnitDelay_DSTATE_k) &&
                        (ASLR_ac_DW.UnitDelay_DSTATE_dg));

    /* Update for UnitDelay: '<S300>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_dg = ASLR_ac_DW.UnitDelay_DSTATE_k;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising3' */
    /* Logic: '<S307>/OR1' incorporates:
     *  UnitDelay: '<S307>/Unit Delay'
     */
    rtb_tempSetSpd6 = !ASLR_ac_DW.UnitDelay_DSTATE_hd;

    /* Update for UnitDelay: '<S307>/Unit Delay' incorporates:
     *  UnitDelay: '<S29>/Unit Delay2'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_hd = ASLR_ac_DW.UnitDelay2_DSTATE_ms;

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising2' */
    /* UnitDelay: '<S378>/Unit Delay' incorporates:
     *  Logic: '<S29>/Logical5'
     *  Logic: '<S306>/AND'
     *  Logic: '<S307>/AND'
     *  UnitDelay: '<S29>/Unit Delay2'
     */
    rtb_LogicalOperator7 = (((rtb_OR1_ha && rtb_LogicalOperator7) ||
        rtb_UnitDelay_ap) || ((ASLR_ac_DW.UnitDelay2_DSTATE_ms) &&
        rtb_tempSetSpd6));

    /* End of Outputs for SubSystem: '<S29>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S29>/EdgeRising3' */

    /* Switch: '<S333>/Switch1' */
    if (rtb_LogicalOperator7)
    {
        /* Switch: '<S333>/Switch1' */
        ASLR_ac_DW.UnitDelay_DSTATE_b = rtb_Add;
    }

    /* End of Switch: '<S333>/Switch1' */

    /* Switch: '<S450>/temp SetSpd 1' incorporates:
     *  Constant: '<S107>/Calib'
     *  Switch: '<S450>/temp SetSpd 6'
     */
    if (HeASLR_b_M182ProgrammPrsnc)
    {
        /* UnitDelay: '<S374>/Unit Delay' incorporates:
         *  Logic: '<S450>/Logical Operator'
         *  Logic: '<S450>/Logical Operator2'
         *  Logic: '<S450>/Logical Operator3'
         *  Logic: '<S450>/Logical Operator4'
         */
        rtb_UnitDelay_ap = (((!VeASLI_b_SpeedUnitFA) || (!VeASLI_b_TSRStsFA)) ||
                            (!VeASLI_b_DsplydSpdLimStsFA));

        /* Switch: '<S450>/temp SetSpd 6' */
        rtb_tempSetSpd6 = VeASLI_b_TSR_ReqOvrrd;
    }
    else
    {
        /* UnitDelay: '<S374>/Unit Delay' incorporates:
         *  Constant: '<S450>/TRUE Constant'
         */
        rtb_UnitDelay_ap = true;

        /* Switch: '<S450>/temp SetSpd 6' incorporates:
         *  Logic: '<S450>/Logical Operator1'
         */
        rtb_tempSetSpd6 = !HeASLR_b_M182ProgrammPrsnc;
    }

    /* End of Switch: '<S450>/temp SetSpd 1' */

    /* Delay: '<S450>/Integer Delay' incorporates:
     *  Constant: '<S457>/Calib'
     */
    if (((sint32)KeASLR_Cnt_DspSpdLimStsDly) <= 0)
    {
        /* Delay: '<S450>/Integer Delay' */
        rtb_IntegerDelay = VeASLR_e_DsplydSpdLimSts;
    }
    else
    {
        if (((sint32)KeASLR_Cnt_DspSpdLimStsDly) > 100)
        {
            rtb_Switch1_k = 100U;
        }
        else
        {
            rtb_Switch1_k = KeASLR_Cnt_DspSpdLimStsDly;
        }

        if (rtb_Switch1_k <= ASLR_ac_DW.CircBufIdx)
        {
            rtb_Switch1_k = (uint16)(((uint32)ASLR_ac_DW.CircBufIdx) - ((uint32)
                rtb_Switch1_k));
        }
        else
        {
            rtb_Switch1_k = (uint16)(((uint32)((uint16)(((uint32)
                ASLR_ac_DW.CircBufIdx) - ((uint32)rtb_Switch1_k)))) + 100U);
        }

        /* Delay: '<S450>/Integer Delay' */
        rtb_IntegerDelay = ASLR_ac_DW.IntegerDelay_DSTATE[rtb_Switch1_k];
    }

    /* End of Delay: '<S450>/Integer Delay' */

    /* Selector: '<S450>/Selector' incorporates:
     *  Constant: '<S456>/Calib'
     */
    VeASLC_v_TSRDispSpdLim = KaASLR_i_DispSpdSign[(rtb_IntegerDelay)];

    /* Sum: '<S450>/Sum1' incorporates:
     *  Constant: '<S459>/Calib'
     */
    Switch66 = VeASLC_v_TSRDispSpdLim - KeASLR_v_SetCorrectSpd;

    /* Logic: '<S450>/Logical' incorporates:
     *  Constant: '<S450>/EndSpdLim'
     *  Constant: '<S450>/SpdLimUnlimited'
     *  Constant: '<S455>/Constant'
     *  RelationalOperator: '<S450>/Comparison1'
     *  RelationalOperator: '<S450>/Comparison2'
     *  RelationalOperator: '<S450>/Comparison3'
     *  RelationalOperator: '<S450>/Comparison4'
     *  RelationalOperator: '<S450>/Comparison5'
     *  RelationalOperator: '<S450>/Comparison6'
     */
    VeASLC_b_TSRRdy = ((((((((rtb_UnitDelay_ap && rtb_tempSetSpd6) && (((uint32)
        VeASLR_e_TSRSts) == CeASLR_e_TSRActive)) && (VeASLC_v_TSRDispSpdLim !=
        254.0F)) && (VeASLC_v_TSRDispSpdLim != 255.0F)) &&
                          (VeASLC_v_TSRDispSpdLim != 0.0F)) &&
                         (VeASLR_b_ProxiTrafficSignRcgntn)) && (Switch66 <=
                         rtb_VeASLC_v_ServiceToolSpdLim)) && (Switch66 >=
                        Switch11));

    /* Outputs for Atomic SubSystem: '<S450>/Limiter' */
    /* Switch: '<S458>/Switch1' incorporates:
     *  RelationalOperator: '<S458>/Relational Operator'
     */
    if (rtb_VeASLC_v_ServiceToolSpdLim < Switch66)
    {
        /* Switch: '<S422>/Switch1' */
        VeASLC_r_ASL_Mult = rtb_VeASLC_v_ServiceToolSpdLim;
    }
    else
    {
        /* Switch: '<S422>/Switch1' */
        VeASLC_r_ASL_Mult = Switch66;
    }

    /* End of Switch: '<S458>/Switch1' */

    /* Switch: '<S458>/Switch' incorporates:
     *  RelationalOperator: '<S458>/Relational Operator1'
     */
    if (VeASLC_r_ASL_Mult > Switch11)
    {
        /* Switch: '<S458>/Switch' */
        VeASLC_v_TSRDispSpdLimClpd = VeASLC_r_ASL_Mult;
    }
    else
    {
        /* Switch: '<S458>/Switch' */
        VeASLC_v_TSRDispSpdLimClpd = Switch11;
    }

    /* End of Switch: '<S458>/Switch' */
    /* End of Outputs for SubSystem: '<S450>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S449>/EdgeRising1' */
    /* Logic: '<S453>/OR1' incorporates:
     *  UnitDelay: '<S453>/Unit Delay'
     */
    rtb_UnitDelay_ap = !ASLR_ac_DW.UnitDelay_DSTATE_nx;

    /* Update for UnitDelay: '<S453>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_nx = VeASLC_b_ASLEngaged;

    /* Logic: '<S449>/Logical Operator' incorporates:
     *  Constant: '<S107>/Calib'
     *  Constant: '<S454>/Calib'
     *  Logic: '<S449>/Logical Operator7'
     *  Logic: '<S449>/Logical Operator8'
     *  Logic: '<S453>/AND'
     *  RelationalOperator: '<S449>/Comparison2'
     *  Switch: '<S449>/temp SetSpd 6'
     *  UnitDelay: '<S449>/Unit Delay2'
     */
    VeASLC_b_TSRCaptCondAuto = ((((VeASLC_b_TSRRdy) &&
        ((VeASLC_v_TSRDispSpdLimClpd != ASLR_ac_DW.UnitDelay2_DSTATE_o) ||
         (((VeASLC_b_ASLEngaged) && rtb_UnitDelay_ap) &&
          (KeASLR_b_TSRAuto_ASLEnggdCondEnbl)))) && ((HeASLR_b_M182ProgrammPrsnc)
        || (VeASLR_b_ProxiNAVPrsnc))) && (VeASLR_b_SignCaptMode));

    /* End of Outputs for SubSystem: '<S449>/EdgeRising1' */

    /* Logic: '<S29>/Logical Operator13' incorporates:
     *  Constant: '<S315>/Calib'
     */
    rtb_OR1_g = (((VeASLC_b_ASLEngaged) && (VeASLC_b_TSRCaptCondAuto)) &&
                 (KeASLR_b_TSRCaptCondAutoEnbl));

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising5' */
    /* Logic: '<S309>/AND' incorporates:
     *  Logic: '<S309>/OR1'
     *  UnitDelay: '<S309>/Unit Delay'
     */
    rtb_tempSetSpd6 = ((VeASLR_b_CcAccelSts) && (!ASLR_ac_DW.UnitDelay_DSTATE_fy));

    /* Update for UnitDelay: '<S309>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_fy = VeASLR_b_CcAccelSts;

    /* End of Outputs for SubSystem: '<S29>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising6' */
    /* UnitDelay: '<S416>/Unit Delay' incorporates:
     *  UnitDelay: '<S310>/Unit Delay'
     */
    rtb_UnitDelay_ap = ASLR_ac_DW.UnitDelay_DSTATE_in;

    /* Update for UnitDelay: '<S310>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_in = VeASLR_b_CcDecelSts;

    /* Outputs for Atomic SubSystem: '<S29>/Signal Latch On With Reset2' */
    /* Logic: '<S330>/OR1' incorporates:
     *  Logic: '<S29>/Logical Operator15'
     *  Logic: '<S29>/Logical Operator24'
     *  Logic: '<S29>/Logical Operator25'
     *  Logic: '<S310>/AND'
     *  Logic: '<S310>/OR1'
     *  Logic: '<S330>/NOT'
     *  Logic: '<S330>/OR'
     *  UnitDelay: '<S29>/Unit Delay6'
     *  UnitDelay: '<S29>/Unit Delay7'
     *  UnitDelay: '<S330>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_i5 = (rtb_OR1_g ||
        ((((!ASLR_ac_DW.UnitDelay7_DSTATE) || ((!rtb_tempSetSpd6) && (rtb_AND_bt
        || rtb_UnitDelay_ap))) && (!ASLR_ac_DW.UnitDelay6_DSTATE)) &&
         (ASLR_ac_DW.UnitDelay_DSTATE_i5)));

    /* End of Outputs for SubSystem: '<S29>/Signal Latch On With Reset2' */
    /* End of Outputs for SubSystem: '<S29>/EdgeRising6' */

    /* Logic: '<S29>/Logical Operator23' */
    rtb_UnitDelay_ap = !ASLR_ac_DW.UnitDelay_DSTATE_i5;

    /* Outputs for Atomic SubSystem: '<S29>/Stop Watch Reset Trigger Enabled1' */
    /* Outputs for Atomic SubSystem: '<S332>/EdgeRising_F2T' */
    /* Logic: '<S334>/OR1' incorporates:
     *  UnitDelay: '<S334>/Unit Delay'
     */
    rtb_tempSetSpd6 = !ASLR_ac_DW.UnitDelay_DSTATE_jv;

    /* Update for UnitDelay: '<S334>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_jv = rtb_UnitDelay_ap;

    /* Switch: '<S332>/Switch' incorporates:
     *  Constant: '<S332>/Constant Value2'
     *  Logic: '<S334>/AND'
     *  Switch: '<S332>/Switch2'
     *  UnitDelay: '<S29>/Unit Delay8'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    if (rtb_UnitDelay_ap && rtb_tempSetSpd6)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_ix = 0.0F;
    }
    else
    {
        if (ASLR_ac_DW.UnitDelay8_DSTATE)
        {
            /* UnitDelay: '<S332>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S332>/Subtraction'
             *  Switch: '<S332>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_ix += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S332>/Switch' */
    /* End of Outputs for SubSystem: '<S332>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S29>/Stop Watch Reset Trigger Enabled1' */

    /* UnitDelay: '<S416>/Unit Delay' incorporates:
     *  Constant: '<S316>/Calib'
     *  RelationalOperator: '<S29>/Comparison5'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    rtb_UnitDelay_ap = (ASLR_ac_DW.UnitDelay_DSTATE_ix <=
                        KeASLR_t_TSRAutoSpdLimRej);

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling' */
    /* Logic: '<S299>/AND' incorporates:
     *  UnitDelay: '<S299>/Unit Delay'
     */
    rtb_AND_iv = (AND_nk && (ASLR_ac_DW.UnitDelay_DSTATE_n2));

    /* Update for UnitDelay: '<S299>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_n2 = VeASLI_b_SpeedUnit;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling2' */
    /* Logic: '<S301>/AND' incorporates:
     *  UnitDelay: '<S301>/Unit Delay'
     */
    rtb_AND_at = (rtb_AND_je && (ASLR_ac_DW.UnitDelay_DSTATE_ms));

    /* Update for UnitDelay: '<S301>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ms = VeASLR_b_CcAccelSts;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling3' */
    /* Logic: '<S302>/AND' incorporates:
     *  UnitDelay: '<S302>/Unit Delay'
     */
    rtb_OR1_pz = (rtb_AND_bt && (ASLR_ac_DW.UnitDelay_DSTATE_ar));

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ar = VeASLR_b_CcDecelSts;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling3' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling4' */
    /* Logic: '<S303>/AND' incorporates:
     *  UnitDelay: '<S303>/Unit Delay'
     */
    rtb_AND_iq = (rtb_AND_je && (ASLR_ac_DW.UnitDelay_DSTATE_dyz));

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_dyz = VeASLR_b_CcAccelSts;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling4' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling5' */
    /* Logic: '<S304>/AND' incorporates:
     *  UnitDelay: '<S304>/Unit Delay'
     */
    rtb_AND_ia = (rtb_AND_bt && (ASLR_ac_DW.UnitDelay_DSTATE_dy));

    /* Update for UnitDelay: '<S304>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_dy = VeASLR_b_CcDecelSts;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling5' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising1' */
    /* Logic: '<S305>/AND' incorporates:
     *  Logic: '<S305>/OR1'
     *  UnitDelay: '<S305>/Unit Delay'
     */
    rtb_AND_ec = ((VeASLI_b_SpeedUnit) && (!ASLR_ac_DW.UnitDelay_DSTATE_nn));

    /* Update for UnitDelay: '<S305>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_nn = VeASLI_b_SpeedUnit;

    /* End of Outputs for SubSystem: '<S29>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S29>/EdgeRising4' */
    /* Logic: '<S308>/AND' incorporates:
     *  Logic: '<S308>/OR1'
     *  UnitDelay: '<S308>/Unit Delay'
     */
    rtb_AND_l5 = ((VeASLC_b_ASLResumeSwOn) && (!ASLR_ac_DW.UnitDelay_DSTATE_bp));

    /* Update for UnitDelay: '<S308>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_bp = VeASLC_b_ASLResumeSwOn;

    /* End of Outputs for SubSystem: '<S29>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S59>/Stop Watch Reset Trigger Enabled5' */
    /* Outputs for Atomic SubSystem: '<S439>/EdgeRising_F2T' */
    /* Logic: '<S446>/OR1' incorporates:
     *  UnitDelay: '<S446>/Unit Delay'
     */
    AND_nk = !ASLR_ac_DW.UnitDelay_DSTATE_eu;

    /* Update for UnitDelay: '<S446>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_eu = rtb_AND_bt;

    /* Switch: '<S439>/Switch' incorporates:
     *  Constant: '<S439>/Constant Value2'
     *  Logic: '<S446>/AND'
     *  Switch: '<S439>/Switch2'
     *  UnitDelay: '<S439>/Unit Delay'
     */
    if (rtb_AND_bt && AND_nk)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_cc = 0.0F;
    }
    else
    {
        if (VeASLR_b_CcDecelSts)
        {
            /* UnitDelay: '<S439>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S439>/Subtraction'
             *  Switch: '<S439>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_cc += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S439>/Switch' */
    /* End of Outputs for SubSystem: '<S439>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S59>/Stop Watch Reset Trigger Enabled5' */

    /* RelationalOperator: '<S59>/Relational Operator9' incorporates:
     *  Constant: '<S432>/Calib'
     *  UnitDelay: '<S439>/Unit Delay'
     */
    VeASLC_b_ASLDecelSwOnSP = (ASLR_ac_DW.UnitDelay_DSTATE_cc <
        KeASLR_t_CcDecelSwOnTimeSP);

    /* Outputs for Atomic SubSystem: '<S59>/Stop Watch Reset Trigger Enabled4' */
    /* Outputs for Atomic SubSystem: '<S438>/EdgeRising_F2T' */
    /* Logic: '<S445>/OR1' incorporates:
     *  UnitDelay: '<S445>/Unit Delay'
     */
    AND_nk = !ASLR_ac_DW.UnitDelay_DSTATE_p4;

    /* Update for UnitDelay: '<S445>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_p4 = rtb_AND_je;

    /* Switch: '<S438>/Switch' incorporates:
     *  Constant: '<S438>/Constant Value2'
     *  Logic: '<S445>/AND'
     *  Switch: '<S438>/Switch2'
     *  UnitDelay: '<S438>/Unit Delay'
     */
    if (rtb_AND_je && AND_nk)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_gh = 0.0F;
    }
    else
    {
        if (VeASLR_b_CcAccelSts)
        {
            /* UnitDelay: '<S438>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S438>/Subtraction'
             *  Switch: '<S438>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_gh += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S438>/Switch' */
    /* End of Outputs for SubSystem: '<S438>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S59>/Stop Watch Reset Trigger Enabled4' */

    /* RelationalOperator: '<S59>/Relational Operator11' incorporates:
     *  Constant: '<S430>/Calib'
     *  UnitDelay: '<S438>/Unit Delay'
     */
    VeASLC_b_ASLAccelSwOnSP = (ASLR_ac_DW.UnitDelay_DSTATE_gh <
        KeASLR_t_CcAccelSwOnTimeSP);

    /* Switch: '<S29>/tempSetSpd' incorporates:
     *  Logic: '<S29>/Logical12'
     *  Logic: '<S29>/LogicalOperator3'
     *  UnitDelay: '<S29>/UnitDelay2'
     */
    if ((((VeASLC_b_ASLDecelSwOnSP) && rtb_OR1_pz) &&
            (!ASLR_ac_DW.UnitDelay2_DSTATE_b)) && (VeASLC_b_ASLEnabled))
    {
        /* Switch: '<S29>/temp SetSpd 8' incorporates:
         *  Constant: '<S321>/Calib'
         *  Constant: '<S322>/Calib'
         */
        if (VeASLI_b_SpeedUnit)
        {
            rtb_Switch1_duk = KeASLR_v_VehSpdLimTapDwn_MPH;
        }
        else
        {
            rtb_Switch1_duk = KeASLR_v_VehSpdLimTapDwn_KPH;
        }

        /* End of Switch: '<S29>/temp SetSpd 8' */

        /* Switch: '<S29>/tempSetSpd' incorporates:
         *  MinMax: '<S29>/MinMax7'
         *  Sum: '<S29>/Add3'
         */
        ASLR_ac_DW.UnitDelay_DSTATE_b = fmaxf(ASLR_ac_DW.UnitDelay_DSTATE_b -
            rtb_Switch1_duk, Switch11);
    }
    else
    {
        /* Logic: '<S29>/LogicalOperator4' incorporates:
         *  Constant: '<S29>/Constant Value'
         *  Logic: '<S29>/LogicalOperator2'
         *  Logic: '<S29>/LogicalOperator7'
         *  RelationalOperator: '<S29>/Comparison1'
         *  RelationalOperator: '<S29>/Comparison3'
         *  RelationalOperator: '<S29>/Comparison4'
         *  UnitDelay: '<S27>/Unit Delay2'
         */
        AND_nk = ((((VeASLC_b_ASLEnabled) && ((VeASLC_v_VehSpdBiased < Switch11)
                     || (VeASLC_v_VehSpdBiased > rtb_VeASLC_v_ServiceToolSpdLim)))
                   && (ASLR_ac_DW.UnitDelay2_DSTATE_m > 0.0F)) ||
                  (VeASLC_b_ASLEngaged));

        /* Switch: '<S29>/tempSetSpd1' incorporates:
         *  Logic: '<S29>/Logical11'
         *  Logic: '<S29>/LogicalOperator1'
         *  Logic: '<S29>/LogicalOperator5'
         *  Logic: '<S29>/LogicalOperator6'
         *  Switch: '<S29>/Switch'
         *  Switch: '<S29>/tempSetSpd2'
         *  UnitDelay: '<S29>/UnitDelay1'
         */
        if ((VeASLC_b_ASLDecelSwOnLP) && AND_nk)
        {
            /* Switch: '<S29>/temp SetSpd 7' */
            if (VeASLI_b_SpeedUnit)
            {
                /* Sum: '<S29>/Add1' incorporates:
                 *  Constant: '<S318>/Calib'
                 */
                rtb_Switch1_duk = KeASLR_v_VehSpdLimDec_MPH;
            }
            else
            {
                /* Sum: '<S29>/Add1' incorporates:
                 *  Constant: '<S317>/Calib'
                 */
                rtb_Switch1_duk = KeASLR_v_VehSpdLimDec_KPH;
            }

            /* End of Switch: '<S29>/temp SetSpd 7' */

            /* Outputs for Atomic SubSystem: '<S29>/Protected Division1' */
            /* Switch: '<S327>/Switch1' incorporates:
             *  Constant: '<S327>/Constant Value'
             *  RelationalOperator: '<S327>/Not Equal'
             */
            if (ASLR_ac_DW.UnitDelay_DSTATE_b != 0.0F)
            {
                /* Switch: '<S327>/Switch1' incorporates:
                 *  Constant: '<S29>/DivBy0Prot1'
                 *  MinMax: '<S29>/MinMax4'
                 *  Product: '<S327>/Division'
                 */
                rtb_Switch1_kd = ASLR_ac_DW.UnitDelay_DSTATE_b / fmaxf
                    (rtb_Switch1_duk, 0.1F);
            }
            else
            {
                /* Switch: '<S327>/Switch1' incorporates:
                 *  Constant: '<S327>/Constant Value4'
                 *  Switch: '<S327>/Switch2'
                 *  Switch: '<S327>/Switch3'
                 */
                rtb_Switch1_kd = 0.0F;
            }

            /* End of Switch: '<S327>/Switch1' */
            /* End of Outputs for SubSystem: '<S29>/Protected Division1' */

            /* Sum: '<S29>/Add1' incorporates:
             *  Product: '<S29>/Product3'
             *  Rounding: '<S29>/Rounding1'
             */
            rtb_Switch1_duk = (ceilf(rtb_Switch1_kd) * rtb_Switch1_duk) -
                rtb_Switch1_duk;

            /* Switch: '<S29>/tempSetSpd' incorporates:
             *  MinMax: '<S29>/MinMax1'
             *  Switch: '<S29>/tempSetSpd1'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_b = fmaxf(rtb_Switch1_duk, Switch11);
        }
        else if ((((VeASLC_b_ASLAccelSwOnSP) && rtb_AND_at) &&
                  (!ASLR_ac_DW.UnitDelay1_DSTATE_l)) && (VeASLC_b_ASLEnabled))
        {
            /* Switch: '<S29>/temp SetSpd 6' incorporates:
             *  Constant: '<S323>/Calib'
             *  Constant: '<S324>/Calib'
             *  Switch: '<S29>/Switch'
             */
            if (VeASLI_b_SpeedUnit)
            {
                rtb_Switch1_duk = KeASLR_v_VehSpdLimTapUp_MPH;
            }
            else
            {
                rtb_Switch1_duk = KeASLR_v_VehSpdLimTapUp_KPH;
            }

            /* End of Switch: '<S29>/temp SetSpd 6' */

            /* Switch: '<S29>/tempSetSpd' incorporates:
             *  MinMax: '<S29>/MinMax5'
             *  Sum: '<S29>/Add2'
             *  Switch: '<S29>/Switch'
             *  Switch: '<S29>/tempSetSpd1'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_b = fminf(ASLR_ac_DW.UnitDelay_DSTATE_b
                + rtb_Switch1_duk, rtb_VeASLC_v_ServiceToolSpdLim);
        }
        else
        {
            if ((VeASLC_b_ASLAccelSwOnLP) && AND_nk)
            {
                /* Switch: '<S29>/temp SetSpd 2' incorporates:
                 *  Switch: '<S29>/Switch'
                 *  Switch: '<S29>/tempSetSpd2'
                 */
                if (VeASLI_b_SpeedUnit)
                {
                    /* Sum: '<S29>/Add5' incorporates:
                     *  Constant: '<S320>/Calib'
                     */
                    rtb_Switch1_duk = KeASLR_v_VehSpdLimInc_MPH;
                }
                else
                {
                    /* Sum: '<S29>/Add5' incorporates:
                     *  Constant: '<S319>/Calib'
                     */
                    rtb_Switch1_duk = KeASLR_v_VehSpdLimInc_KPH;
                }

                /* End of Switch: '<S29>/temp SetSpd 2' */

                /* Outputs for Atomic SubSystem: '<S29>/Protected Division' */
                /* Switch: '<S326>/Switch1' incorporates:
                 *  Constant: '<S326>/Constant Value'
                 *  RelationalOperator: '<S326>/Not Equal'
                 *  Switch: '<S29>/Switch'
                 *  Switch: '<S29>/tempSetSpd2'
                 */
                if (ASLR_ac_DW.UnitDelay_DSTATE_b != 0.0F)
                {
                    /* Switch: '<S326>/Switch1' incorporates:
                     *  Constant: '<S29>/DivBy0Prot2'
                     *  MinMax: '<S29>/MinMax3'
                     *  Product: '<S326>/Division'
                     */
                    rtb_Switch1_kd = ASLR_ac_DW.UnitDelay_DSTATE_b / fmaxf
                        (rtb_Switch1_duk, 0.1F);
                }
                else
                {
                    /* Switch: '<S326>/Switch1' incorporates:
                     *  Constant: '<S326>/Constant Value4'
                     *  Switch: '<S326>/Switch2'
                     *  Switch: '<S326>/Switch3'
                     */
                    rtb_Switch1_kd = 0.0F;
                }

                /* End of Switch: '<S326>/Switch1' */
                /* End of Outputs for SubSystem: '<S29>/Protected Division' */

                /* Sum: '<S29>/Add5' incorporates:
                 *  Product: '<S29>/Product4'
                 *  Rounding: '<S29>/Rounding2'
                 *  Switch: '<S29>/Switch'
                 *  Switch: '<S29>/tempSetSpd2'
                 */
                rtb_Switch1_duk += floorf(rtb_Switch1_kd) * rtb_Switch1_duk;

                /* Switch: '<S29>/tempSetSpd' incorporates:
                 *  MinMax: '<S29>/MinMax2'
                 *  Switch: '<S29>/Switch'
                 *  Switch: '<S29>/tempSetSpd1'
                 *  Switch: '<S29>/tempSetSpd2'
                 */
                ASLR_ac_DW.UnitDelay_DSTATE_b = fminf(rtb_Switch1_duk,
                    rtb_VeASLC_v_ServiceToolSpdLim);
            }
        }

        /* End of Switch: '<S29>/tempSetSpd1' */
    }

    /* End of Switch: '<S29>/tempSetSpd' */

    /* Switch: '<S29>/temp SetSpd 10' */
    if (!ASLR_ac_DW.UnitDelay_DSTATE_i5)
    {
        /* Switch: '<S29>/temp SetSpd 12' incorporates:
         *  Constant: '<S312>/Calib'
         *  Constant: '<S314>/Calib'
         *  Logic: '<S29>/Logical Operator16'
         *  Logic: '<S29>/Logical Operator17'
         *  Logic: '<S29>/Logical Operator19'
         */
        if (KeASLR_b_NewRejStrategyEnbl)
        {
            AND_nk = (rtb_OR1_ha && ((VeASLR_b_CcAccelSts) ||
                       (VeASLR_b_CcDecelSts)));
        }
        else
        {
            AND_nk = (rtb_OR1_ha && (KeASLR_b_TSRAutoSpdLimRejVehSpd_Enbl));
        }

        /* Switch: '<S29>/temp SetSpd 11' incorporates:
         *  UnitDelay: '<S29>/Unit Delay5'
         */
        if (AND_nk)
        {
            ASLR_ac_DW.UnitDelay5_DSTATE = VeASLC_v_VehSpdBiased;
        }
        else
        {
            ASLR_ac_DW.UnitDelay5_DSTATE = ASLR_ac_DW.UnitDelay_DSTATE_b;
        }

        /* End of Switch: '<S29>/temp SetSpd 11' */
    }

    /* Outputs for Atomic SubSystem: '<S449>/EdgeRising' */
    /* Logic: '<S452>/AND' incorporates:
     *  Logic: '<S452>/OR1'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    AND_nk = ((VeASLC_b_ASLResumeSwOn) && (!ASLR_ac_DW.UnitDelay_DSTATE_f5));

    /* Update for UnitDelay: '<S452>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_f5 = VeASLC_b_ASLResumeSwOn;

    /* End of Outputs for SubSystem: '<S449>/EdgeRising' */

    /* Logic: '<S449>/Logical Operator1' incorporates:
     *  Logic: '<S368>/Logical5'
     */
    rtb_tempSetSpd6 = !VeASLR_b_SignCaptMode;

    /* Logic: '<S449>/Logical Operator2' incorporates:
     *  Logic: '<S449>/Logical Operator1'
     */
    VeASLC_b_TSRCaptCondConf = ((rtb_tempSetSpd6 && AND_nk) && (VeASLC_b_TSRRdy));

    /* RelationalOperator: '<S366>/Comparison5' incorporates:
     *  Logic: '<S449>/Logical Operator3'
     *  Logic: '<S449>/Logical Operator5'
     *  Logic: '<S449>/Logical1'
     */
    rtb_OR1_cs = ((VeASLC_b_TSRCaptCondConf) || ((!VeASLR_b_ProxiNAVPrsnc) &&
                   AND_nk));

    /* Logic: '<S368>/Logical5' incorporates:
     *  Logic: '<S29>/Logical Operator22'
     */
    AND_nk = (rtb_OR1_cs && (VeASLC_b_ASLEngaged));

    /* Outputs for Atomic SubSystem: '<S29>/Signal Latch On With Reset3' */
    /* Logic: '<S331>/OR1' incorporates:
     *  Constant: '<S29>/DivBy0Prot3'
     *  Logic: '<S29>/Logical Operator20'
     *  Logic: '<S29>/Logical Operator21'
     *  Logic: '<S331>/NOT'
     *  Logic: '<S331>/OR'
     *  RelationalOperator: '<S29>/Comparison6'
     *  UnitDelay: '<S331>/Unit Delay'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_pc = ((((ASLR_ac_DW.UnitDelay_DSTATE_ix > 0.0F) &&
        rtb_UnitDelay_ap) && rtb_AND_l5) || (((!rtb_OR1_g) && (!AND_nk)) &&
        (ASLR_ac_DW.UnitDelay_DSTATE_pc)));

    /* End of Outputs for SubSystem: '<S29>/Signal Latch On With Reset3' */

    /* Switch: '<S29>/temp SetSpd 9' */
    if (ASLR_ac_DW.UnitDelay_DSTATE_pc)
    {
        /* Switch: '<S29>/temp SetSpd 9' incorporates:
         *  UnitDelay: '<S29>/Unit Delay5'
         */
        VeASLC_v_TSRSpdLimHonrd = ASLR_ac_DW.UnitDelay5_DSTATE;
    }
    else
    {
        /* Switch: '<S29>/temp SetSpd 9' */
        VeASLC_v_TSRSpdLimHonrd = VeASLC_v_TSRDispSpdLimClpd;
    }

    /* End of Switch: '<S29>/temp SetSpd 9' */

    /* Logic: '<S29>/Logical Operator5' */
    VeASLC_b_TSRSpdLimArbFlag = ((AND_nk || rtb_OR1_g) ||
        (ASLR_ac_DW.UnitDelay_DSTATE_pc));

    /* Switch: '<S29>/temp SetSpd 3' incorporates:
     *  Logic: '<S29>/Logical3'
     *  Switch: '<S29>/temp SetSpd 4'
     *  UnitDelay: '<S29>/Unit Delay1'
     */
    if ((ASLR_ac_DW.UnitDelay1_DSTATE_o) && (VeASLC_b_ASLEnabled))
    {
        /* Switch: '<S29>/temp SetSpd 5' incorporates:
         *  Constant: '<S27>/OfflineEnable'
         *  Logic: '<S29>/Logical1'
         *  Logic: '<S29>/Logical4'
         *  RelationalOperator: '<S27>/Relational Operator10'
         *  RelationalOperator: '<S29>/Comparison2'
         *  Switch: '<S29>/temp SetSpd 1'
         *  UnitDelay: '<S27>/Unit Delay2'
         */
        if (rtb_OR1_g)
        {
            /* Switch: '<S29>/temp SetSpd 3' incorporates:
             *  Switch: '<S29>/temp SetSpd 5'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_b = VeASLC_v_TSRSpdLimHonrd;
        }
        else
        {
            if (((ASLR_ac_DW.UnitDelay2_DSTATE_m <= Switch11) ||
                    (!VeASLC_b_ASLResumeSwOn)) && (VeASLC_e_ASLCurrentState !=
                    10.0F))
            {
                /* Switch: '<S29>/temp SetSpd 13' incorporates:
                 *  Logic: '<S29>/Logical13'
                 *  Switch: '<S29>/temp SetSpd 1'
                 */
                if (rtb_AND_iq || rtb_AND_ia)
                {
                    /* Switch: '<S29>/temp SetSpd 3' incorporates:
                     *  Switch: '<S29>/temp SetSpd 1'
                     */
                    ASLR_ac_DW.UnitDelay_DSTATE_b = VeASLC_v_VehSpdBiased;
                }

                /* End of Switch: '<S29>/temp SetSpd 13' */
            }
        }

        /* End of Switch: '<S29>/temp SetSpd 5' */
    }
    else
    {
        if (VeASLC_b_TSRSpdLimArbFlag)
        {
            /* Switch: '<S29>/temp SetSpd 4' incorporates:
             *  Switch: '<S29>/temp SetSpd 3'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_b = VeASLC_v_TSRSpdLimHonrd;
        }
    }

    /* End of Switch: '<S29>/temp SetSpd 3' */

    /* Switch: '<S448>/temp SetSpd 6' incorporates:
     *  Constant: '<S107>/Calib'
     *  Logic: '<S448>/Logical Operator2'
     */
    if (HeASLR_b_M182ProgrammPrsnc)
    {
        AND_nk = (((VeASLI_b_SpeedUnitFA) || (VeASLI_b_TSRStsFA)) ||
                  (VeASLI_b_DsplydSpdLimStsFA));
    }
    else
    {
        AND_nk = HeASLR_b_M182ProgrammPrsnc;
    }

    /* End of Switch: '<S448>/temp SetSpd 6' */

    /* Outputs for Atomic SubSystem: '<S448>/S_R_FlipFlop' */
    /* Logic: '<S451>/Logical Operator3' incorporates:
     *  Logic: '<S448>/Logical Operator3'
     *  Logic: '<S448>/Logical1'
     *  Logic: '<S448>/Logical2'
     *  Logic: '<S449>/Logical Operator4'
     *  Logic: '<S451>/Logical Operator'
     *  Logic: '<S451>/Logical Operator2'
     *  RelationalOperator: '<S448>/Comparison2'
     *  UnitDelay: '<S451>/previous'
     */
    VeASLC_b_ISASts = ((((VeASLC_b_TSRCaptCondAuto) || rtb_OR1_cs) &&
                        (VeASLC_b_ASLEngaged)) || ((((((VeASLC_b_ASLEngaged) &&
                            (Switch1_n == Switch66)) && rtb_AND_je) &&
                          rtb_AND_bt) && (!AND_nk)) && (VeASLC_b_ISASts)));

    /* End of Outputs for SubSystem: '<S448>/S_R_FlipFlop' */

    /* RelationalOperator: '<S366>/Comparison5' incorporates:
     *  Constant: '<S313>/Calib'
     *  Logic: '<S29>/Logical7'
     *  Logic: '<S29>/Logical8'
     */
    rtb_OR1_cs = ((KeASLR_b_SpdUnitTSR_Enbl) || (!VeASLC_b_ISASts));

    /* Switch: '<S29>/Switch1' incorporates:
     *  Logic: '<S29>/Logical9'
     */
    if (rtb_AND_ec && rtb_OR1_cs)
    {
        /* Switch: '<S29>/Switch1' incorporates:
         *  Constant: '<S29>/Constant Value2'
         *  Product: '<S29>/Product1'
         */
        ASLR_ac_DW.UnitDelay_DSTATE_b *= 0.62137121F;
    }

    /* End of Switch: '<S29>/Switch1' */

    /* Switch: '<S29>/Switch2' incorporates:
     *  Logic: '<S29>/Logical10'
     */
    if (rtb_AND_iv && rtb_OR1_cs)
    {
        /* Switch: '<S29>/Switch2' incorporates:
         *  Constant: '<S29>/Constant Value3'
         *  Product: '<S29>/Product2'
         */
        ASLR_ac_DW.UnitDelay_DSTATE_b *= 1.60934401F;
    }

    /* End of Switch: '<S29>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S29>/Limiter' */
    /* Switch: '<S325>/Switch1' incorporates:
     *  RelationalOperator: '<S325>/Relational Operator'
     */
    if (rtb_VeASLC_v_ServiceToolSpdLim < ASLR_ac_DW.UnitDelay_DSTATE_b)
    {
        /* Switch: '<S422>/Switch1' */
        VeASLC_r_ASL_Mult = rtb_VeASLC_v_ServiceToolSpdLim;
    }
    else
    {
        /* Switch: '<S422>/Switch1' */
        VeASLC_r_ASL_Mult = ASLR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S325>/Switch1' */

    /* Switch: '<S325>/Switch' incorporates:
     *  RelationalOperator: '<S325>/Relational Operator1'
     */
    if (VeASLC_r_ASL_Mult <= Switch11)
    {
        /* Switch: '<S325>/Switch' */
        VeASLC_r_ASL_Mult = Switch11;
    }

    /* End of Switch: '<S325>/Switch' */
    /* End of Outputs for SubSystem: '<S29>/Limiter' */

    /* Logic: '<S29>/Logical Operator26' incorporates:
     *  UnitDelay: '<S29>/Unit Delay6'
     */
    ASLR_ac_DW.UnitDelay6_DSTATE = !rtb_UnitDelay_ap;

    /* Logic: '<S29>/Logical2' incorporates:
     *  UnitDelay: '<S29>/Unit Delay1'
     */
    ASLR_ac_DW.UnitDelay1_DSTATE_o = rtb_OR1_ha;

    /* Rounding: '<S29>/Rounding3' */
    VeASLC_v_SetVehSpdLimDtrmnd = roundf(VeASLC_r_ASL_Mult);

    /* Outputs for Atomic SubSystem: '<S29>/Signal Latch On With Reset' */
    /* Logic: '<S328>/OR1' incorporates:
     *  Logic: '<S328>/NOT'
     *  Logic: '<S328>/OR'
     *  UnitDelay: '<S29>/UnitDelay1'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay1_DSTATE_l = ((VeASLC_b_ASLAccelSwOnLP) || ((!rtb_AND_at)
        && (ASLR_ac_DW.UnitDelay_DSTATE_mr)));

    /* Update for UnitDelay: '<S328>/Unit Delay' incorporates:
     *  UnitDelay: '<S29>/UnitDelay1'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_mr = ASLR_ac_DW.UnitDelay1_DSTATE_l;

    /* End of Outputs for SubSystem: '<S29>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S29>/Signal Latch On With Reset1' */
    /* Logic: '<S329>/OR1' incorporates:
     *  Logic: '<S329>/NOT'
     *  Logic: '<S329>/OR'
     *  UnitDelay: '<S29>/UnitDelay2'
     *  UnitDelay: '<S329>/Unit Delay'
     */
    ASLR_ac_DW.UnitDelay2_DSTATE_b = ((VeASLC_b_ASLDecelSwOnLP) || ((!rtb_OR1_pz)
        && (ASLR_ac_DW.UnitDelay_DSTATE_az)));

    /* Update for UnitDelay: '<S329>/Unit Delay' incorporates:
     *  UnitDelay: '<S29>/UnitDelay2'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_az = ASLR_ac_DW.UnitDelay2_DSTATE_b;

    /* End of Outputs for SubSystem: '<S29>/Signal Latch On With Reset1' */

    /* Switch: '<S333>/Switch3' incorporates:
     *  UnitDelay: '<S333>/Unit Delay'
     */
    if (rtb_LogicalOperator7)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_b = rtb_Add;
    }
    else
    {
        ASLR_ac_DW.UnitDelay_DSTATE_b = VeASLC_r_ASL_Mult;
    }

    /* End of Switch: '<S333>/Switch3' */

    /* Product: '<S393>/Convert to power1' incorporates:
     *  Constant: '<S393>/Constant Value1'
     */
    VeASLC_P_DrvrReqPwr = (VeASLI_n_PrimNoSgndFltrd *
                           VeASLI_M_OutTorqReqHTDR_OvrSpd) / 9549.3F;

    /* Sum: '<S397>/Sum1' */
    VeASLC_v_ASL_DeltaSpd = VeASLC_v_SetVehSpdLimUnbiasKPH -
        VeASLC_v_CanSigVehSpdFltrd;

    /* Outputs for Atomic SubSystem: '<S396>/Hysteresis1' */
    /* Switch: '<S405>/Switch1' incorporates:
     *  Constant: '<S410>/Calib'
     *  Gain: '<S396>/Gain'
     *  RelationalOperator: '<S396>/Comparison2'
     *  RelationalOperator: '<S405>/Greater  Than'
     *  Switch: '<S396>/Switch2'
     *  UnitDelay: '<S401>/Unit Delay1'
     */
    if ((-VeASLC_v_ASL_DeltaSpd) > KeASLR_v_ASL_RSP)
    {
        /* Switch: '<S405>/Switch1' incorporates:
         *  Constant: '<S405>/Constant Value'
         */
        VeASLC_b_ASL_SpdBased = true;
    }
    else
    {
        if (VeASLC_P_DrvrReqPwr > VeASLC_P_ASL_PIDPwr)
        {
            /* Switch: '<S396>/Switch2' incorporates:
             *  Constant: '<S408>/Calib'
             */
            rtb_Switch1_duk = KeASLR_v_ASL_LSPA;
        }
        else
        {
            /* Switch: '<S396>/Switch2' incorporates:
             *  Constant: '<S409>/Calib'
             */
            rtb_Switch1_duk = KeASLR_v_ASL_LSPB;
        }

        /* Switch: '<S405>/Switch1' incorporates:
         *  RelationalOperator: '<S405>/Greater  Than1'
         *  UnitDelay: '<S405>/Unit Delay'
         */
        VeASLC_b_ASL_SpdBased = (((-VeASLC_v_ASL_DeltaSpd) >= rtb_Switch1_duk) &&
            (VeASLC_b_ASL_SpdBased));
    }

    /* End of Switch: '<S405>/Switch1' */
    /* End of Outputs for SubSystem: '<S396>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S396>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S411>/EdgeRising' */
    /* Logic: '<S412>/AND' incorporates:
     *  Logic: '<S412>/OR1'
     *  UnitDelay: '<S396>/Unit Delay3'
     *  UnitDelay: '<S412>/Unit Delay'
     */
    rtb_AND_bt = ((ASLR_ac_DW.UnitDelay3_DSTATE) &&
                  (!ASLR_ac_DW.UnitDelay_DSTATE_a0g));

    /* Update for UnitDelay: '<S412>/Unit Delay' incorporates:
     *  UnitDelay: '<S396>/Unit Delay3'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_a0g = ASLR_ac_DW.UnitDelay3_DSTATE;

    /* End of Outputs for SubSystem: '<S411>/EdgeRising' */

    /* Switch: '<S411>/Switch1' incorporates:
     *  Constant: '<S406>/Calib'
     *  Constant: '<S411>/Constant Value'
     *  Constant: '<S411>/Constant Value1'
     *  Logic: '<S411>/OR'
     *  Logic: '<S411>/OR1'
     *  MinMax: '<S411>/Minimum'
     *  Sum: '<S411>/Summation'
     *  UnitDelay: '<S396>/Unit Delay3'
     *  UnitDelay: '<S411>/Unit Delay'
     */
    if ((!ASLR_ac_DW.UnitDelay3_DSTATE) || rtb_AND_bt)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_e = 0U;
    }
    else if (KeASLR_Cnt_OvrRevPtn_ActIniDly < ((uint16)(((uint32)
                ASLR_ac_DW.UnitDelay_DSTATE_e) + 1U)))
    {
        /* MinMax: '<S411>/Minimum' incorporates:
         *  Constant: '<S406>/Calib'
         */
        ASLR_ac_DW.UnitDelay_DSTATE_e = KeASLR_Cnt_OvrRevPtn_ActIniDly;
    }
    else
    {
        /* MinMax: '<S411>/Minimum' incorporates:
         *  Constant: '<S411>/Constant Value'
         *  Sum: '<S411>/Summation'
         *  UnitDelay: '<S411>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE_e = (uint16)(((uint32)
            ASLR_ac_DW.UnitDelay_DSTATE_e) + 1U);
    }

    /* End of Switch: '<S411>/Switch1' */
    /* End of Outputs for SubSystem: '<S396>/Turn On Delay Sample' */

    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S396>/TRUE Constant1'
     *  Constant: '<S404>/Calib'
     *  Logic: '<S396>/Logical Operator1'
     *  Logic: '<S396>/Logical Operator4'
     */
    if (HeASLR_b_BypassVehSpdFaultASLAct)
    {
        AND_nk = true;
    }
    else
    {
        AND_nk = (((!VeASLR_b_CanSigVehSpdFA) && (!VeASLI_b_VehSpdVSOSigFailSts))
                  && (!VeASLI_b_SRAR_Dsbl_SL_PID));
    }

    /* End of Switch: '<S396>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S396>/Turn On Delay Sample' */
    /* Logic: '<S396>/Logical1' incorporates:
     *  Abs: '<S396>/Abs'
     *  Constant: '<S396>/Constant Value'
     *  Constant: '<S406>/Calib'
     *  Constant: '<S407>/Calib'
     *  Logic: '<S411>/AND'
     *  RelationalOperator: '<S396>/Comparison1'
     *  RelationalOperator: '<S396>/Comparison3'
     *  RelationalOperator: '<S411>/Greater  Than'
     *  UnitDelay: '<S396>/Unit Delay3'
     *  UnitDelay: '<S411>/Unit Delay'
     */
    VeASLC_b_ASL_Active = (((((VeASLC_b_ASL_SpdBased) &&
        ((ASLR_ac_DW.UnitDelay3_DSTATE) && (ASLR_ac_DW.UnitDelay_DSTATE_e >=
        KeASLR_Cnt_OvrRevPtn_ActIniDly))) && (fabsf(VeASLC_v_CanSigVehSpdFltrd) >
        KeASLR_v_ASLActivationMinSpd)) && (VeASLI_r_PRNDL_Coeff > 0.5F)) &&
                           AND_nk);

    /* End of Outputs for SubSystem: '<S396>/Turn On Delay Sample' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLI_Inputs'
     */
    /* Switch: '<S21>/Switch70' incorporates:
     *  Constant: '<S556>/Calib'
     *  Constant: '<S601>/Calib'
     *  Merge: '<Root>/Merge_5'
     *  SignalConversion generated from: '<S1>/VeASLR_b_RRCCSw_read'
     */
    if (KeASLR_b_RRCCSw_OvrrdEnbl)
    {
        rtb_IntegerDelay = KeASLR_i_RRCCSw_OvrrdVal;
    }
    else
    {
        rtb_IntegerDelay = Rte_IrvRead_ASLR_MedTEB_RRCCSW_Init_write_IRV();
    }

    /* End of Switch: '<S21>/Switch70' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLC'
     */
    /* Logic: '<S59>/Logical3' incorporates:
     *  Constant: '<S44>/Constant Value1'
     *  Logic: '<S22>/Logical1'
     *  RelationalOperator: '<S44>/Comparison2'
     */
    rtb_LogicalOperator8_c = (((((VeASLI_b_SpdLmtrOnOffSts) &&
        (VeASLR_b_ProxiSpdLimiter)) || rtb_Logical10) || rtb_LogicalOperator8_c)
        || (rtb_IntegerDelay == 1));

    /* Logic: '<S59>/Logical Operator6' */
    rtb_Logical10 = !rtb_LogicalOperator8_c;

    /* Outputs for Atomic SubSystem: '<S59>/Stop Watch Reset Trigger Enabled6' */
    /* Outputs for Atomic SubSystem: '<S440>/EdgeRising_F2T' */
    /* Logic: '<S447>/OR1' incorporates:
     *  UnitDelay: '<S447>/Unit Delay'
     */
    rtb_AND_bt = !ASLR_ac_DW.UnitDelay_DSTATE_or;

    /* Update for UnitDelay: '<S447>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_or = rtb_Logical10;

    /* Switch: '<S440>/Switch' incorporates:
     *  Constant: '<S440>/Constant Value2'
     *  Logic: '<S447>/AND'
     *  Switch: '<S440>/Switch2'
     *  UnitDelay: '<S440>/Unit Delay'
     */
    if (rtb_Logical10 && rtb_AND_bt)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_a0 = 0.0F;
    }
    else
    {
        if (rtb_LogicalOperator8_c)
        {
            /* UnitDelay: '<S440>/Unit Delay' incorporates:
             *  Constant: '<S110>/Calib'
             *  Sum: '<S440>/Subtraction'
             *  Switch: '<S440>/Switch2'
             */
            ASLR_ac_DW.UnitDelay_DSTATE_a0 += HeASLR_t_dT;
        }
    }

    /* End of Switch: '<S440>/Switch' */
    /* End of Outputs for SubSystem: '<S440>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S59>/Stop Watch Reset Trigger Enabled6' */

    /* RelationalOperator: '<S59>/Relational Operator1' incorporates:
     *  Constant: '<S429>/Calib'
     *  UnitDelay: '<S440>/Unit Delay'
     */
    VeASLC_b_ASLorACCorHASSwStuck = (ASLR_ac_DW.UnitDelay_DSTATE_a0 >
        KeASLR_t_ASL_ACC_HAS_SwOnTime);

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising' */
    /* Logic: '<S370>/OR1' incorporates:
     *  UnitDelay: '<S370>/Unit Delay'
     */
    rtb_LogicalOperator8_c = !ASLR_ac_DW.UnitDelay_DSTATE_jb;

    /* Update for UnitDelay: '<S370>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_jb = VeASLC_b_ASLResumeSwOn;

    /* End of Outputs for SubSystem: '<S364>/EdgeRising' */

    /* RelationalOperator: '<S366>/Comparison5' incorporates:
     *  Constant: '<S371>/Constant'
     *  Logic: '<S364>/Logical5'
     *  RelationalOperator: '<S364>/Comparison3'
     *  UnitDelay: '<S364>/Unit Delay1'
     */
    rtb_OR1_cs = (((((uint32)VeASLR_e_TSRSts) == CeASLR_e_TSRActive) &&
                   (ASLR_ac_DW.UnitDelay1_DSTATE_c)) &&
                  (VeASLR_b_ProxiTrafficSignRcgntn));

    /* UnitDelay: '<S416>/Unit Delay' incorporates:
     *  Constant: '<S364>/SpdLimUnlimited'
     *  Logic: '<S364>/Logical1'
     *  RelationalOperator: '<S364>/Comparison5'
     *  RelationalOperator: '<S364>/Comparison6'
     */
    rtb_UnitDelay_ap = ((Switch66 > rtb_VeASLC_v_ServiceToolSpdLim) || (Switch66
                         == 254.0F));

    /* Switch: '<S369>/temp SetSpd 6' incorporates:
     *  Constant: '<S107>/Calib'
     */
    if (HeASLR_b_M182ProgrammPrsnc)
    {
        /* Switch: '<S369>/temp SetSpd 6' */
        VeASLC_b_TSR_Req_On = VeASLI_b_TSR_ReqOvrrd;
    }

    /* UnitDelay: '<S378>/Unit Delay' incorporates:
     *  Logic: '<S368>/Logical3'
     */
    rtb_LogicalOperator7 = ((VeASLR_b_SignCaptMode) && (VeASLR_b_ProxiNAVPrsnc));

    /* Chart: '<S364>/ISA_NOT_AVAIL_SPEED_TOO_HIGH_states' incorporates:
     *  Constant: '<S110>/Calib'
     *  Constant: '<S373>/Calib'
     *  Logic: '<S364>/Logical2'
     *  Logic: '<S364>/Logical3'
     *  Logic: '<S364>/Logical4'
     *  Logic: '<S370>/AND'
     *  RelationalOperator: '<S364>/Comparison1'
     *  UnitDelay: '<S364>/Unit Delay'
     */
    /* Gateway: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_HIGH_determination/ISA_NOT_AVAIL_SPEED_TOO_HIGH_states */
    /* During: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_HIGH_determination/ISA_NOT_AVAIL_SPEED_TOO_HIGH_states */
    if (((uint32)ASLR_ac_DW.is_active_c12_ASLR_ac) == 0U)
    {
        /* Entry: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_HIGH_determination/ISA_NOT_AVAIL_SPEED_TOO_HIGH_states */
        ASLR_ac_DW.is_active_c12_ASLR_ac = 1U;

        /* Entry Internal: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_HIGH_determination/ISA_NOT_AVAIL_SPEED_TOO_HIGH_states */
        /* Transition: '<S372>:102' */
        ASLR_ac_DW.is_c12_ASLR_ac = ASLR_ac_IN_TSR_WarningOff;

        /* Entry 'TSR_WarningOff': '<S372>:100' */
        ASLR_ac_B.LeASLR_b_TSRSpdHighWarning = false;
    }
    else if (((sint32)ASLR_ac_DW.is_c12_ASLR_ac) == 1)
    {
        /* Outputs for Atomic SubSystem: '<S364>/EdgeRising' */
        /* During 'TSR_WarningOff': '<S372>:100' */
        if (((((rtb_OR1_cs && rtb_UnitDelay_ap) && rtb_tempSetSpd6) &&
                ((VeASLC_b_ASLResumeSwOn) && rtb_LogicalOperator8_c)) &&
                (VeASLC_b_TSR_Req_On)) || ((((rtb_OR1_cs && rtb_LogicalOperator7)
               && (Switch66 != ASLR_ac_DW.UnitDelay_DSTATE_m)) &&
                rtb_UnitDelay_ap) && (VeASLC_b_TSR_Req_On)))
        {
            /* Transition: '<S372>:104' */
            ASLR_ac_DW.is_c12_ASLR_ac = ASLR_ac_IN_TSR_WarningOn;

            /* Entry 'TSR_WarningOn': '<S372>:101' */
            ASLR_ac_B.LeASLR_b_TSRSpdHighWarning = true;
            ASLR_ac_DW.LeASLR_t_TSRSpdHighWarningTmr = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S364>/EdgeRising' */
    }
    else
    {
        /* During 'TSR_WarningOn': '<S372>:101' */
        if (ASLR_ac_DW.LeASLR_t_TSRSpdHighWarningTmr >=
                KeASLR_t_TSRSpdHighWarningTime)
        {
            /* Transition: '<S372>:103' */
            ASLR_ac_DW.is_c12_ASLR_ac = ASLR_ac_IN_TSR_WarningOff;

            /* Entry 'TSR_WarningOff': '<S372>:100' */
            ASLR_ac_B.LeASLR_b_TSRSpdHighWarning = false;
        }
        else
        {
            ASLR_ac_DW.LeASLR_t_TSRSpdHighWarningTmr += HeASLR_t_dT;
        }
    }

    /* End of Chart: '<S364>/ISA_NOT_AVAIL_SPEED_TOO_HIGH_states' */

    /* UnitDelay: '<S416>/Unit Delay' incorporates:
     *  Constant: '<S375>/Constant'
     *  Logic: '<S365>/Logical5'
     *  RelationalOperator: '<S365>/Comparison3'
     *  UnitDelay: '<S365>/Unit Delay1'
     */
    rtb_UnitDelay_ap = (((((uint32)VeASLR_e_TSRSts) == CeASLR_e_TSRActive) &&
                         (VeASLR_b_ProxiTrafficSignRcgntn)) &&
                        (ASLR_ac_DW.UnitDelay1_DSTATE_md));

    /* RelationalOperator: '<S366>/Comparison5' incorporates:
     *  RelationalOperator: '<S365>/Comparison6'
     */
    rtb_OR1_cs = (Switch66 < Switch11);

    /* Outputs for Atomic SubSystem: '<S365>/EdgeRising' */
    /* Logic: '<S374>/OR1' incorporates:
     *  UnitDelay: '<S374>/Unit Delay'
     */
    rtb_LogicalOperator8_c = !ASLR_ac_DW.UnitDelay_DSTATE_mv;

    /* Update for UnitDelay: '<S374>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_mv = VeASLC_b_ASLResumeSwOn;

    /* End of Outputs for SubSystem: '<S365>/EdgeRising' */

    /* Chart: '<S365>/ISA_NOT_AVAIL_SPEED_TOO_LOW_states' incorporates:
     *  Constant: '<S110>/Calib'
     *  Constant: '<S377>/Calib'
     *  Logic: '<S365>/Logical2'
     *  Logic: '<S365>/Logical3'
     *  Logic: '<S365>/Logical4'
     *  Logic: '<S374>/AND'
     *  RelationalOperator: '<S365>/Comparison1'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    /* Gateway: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_LOW_determination/ISA_NOT_AVAIL_SPEED_TOO_LOW_states */
    /* During: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_LOW_determination/ISA_NOT_AVAIL_SPEED_TOO_LOW_states */
    if (((uint32)ASLR_ac_DW.is_active_c1_ASLR_ac) == 0U)
    {
        /* Entry: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_LOW_determination/ISA_NOT_AVAIL_SPEED_TOO_LOW_states */
        ASLR_ac_DW.is_active_c1_ASLR_ac = 1U;

        /* Entry Internal: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_SPEED_TOO_LOW_determination/ISA_NOT_AVAIL_SPEED_TOO_LOW_states */
        /* Transition: '<S376>:102' */
        ASLR_ac_DW.is_c1_ASLR_ac = ASLR_ac_IN_TSR_WarningOff;

        /* Entry 'TSR_WarningOff': '<S376>:100' */
        ASLR_ac_B.LeASLR_b_TSRSpdLowWarning = false;
    }
    else if (((sint32)ASLR_ac_DW.is_c1_ASLR_ac) == 1)
    {
        /* Outputs for Atomic SubSystem: '<S365>/EdgeRising' */
        /* During 'TSR_WarningOff': '<S376>:100' */
        if (((((rtb_UnitDelay_ap && rtb_OR1_cs) && rtb_tempSetSpd6) &&
                ((VeASLC_b_ASLResumeSwOn) && rtb_LogicalOperator8_c)) &&
                (VeASLC_b_TSR_Req_On)) || ((((rtb_UnitDelay_ap &&
                rtb_LogicalOperator7) && (Switch66 !=
                ASLR_ac_DW.UnitDelay_DSTATE_c)) && rtb_OR1_cs) &&
                (VeASLC_b_TSR_Req_On)))
        {
            /* Transition: '<S376>:104' */
            ASLR_ac_DW.is_c1_ASLR_ac = ASLR_ac_IN_TSR_WarningOn;

            /* Entry 'TSR_WarningOn': '<S376>:101' */
            ASLR_ac_B.LeASLR_b_TSRSpdLowWarning = true;
            ASLR_ac_DW.LeASLR_t_TSRSpdLowWarningTmr = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S365>/EdgeRising' */
    }
    else
    {
        /* During 'TSR_WarningOn': '<S376>:101' */
        if (ASLR_ac_DW.LeASLR_t_TSRSpdLowWarningTmr >=
                KeASLR_t_TSRSpdLowWarningTime)
        {
            /* Transition: '<S376>:103' */
            ASLR_ac_DW.is_c1_ASLR_ac = ASLR_ac_IN_TSR_WarningOff;

            /* Entry 'TSR_WarningOff': '<S376>:100' */
            ASLR_ac_B.LeASLR_b_TSRSpdLowWarning = false;
        }
        else
        {
            ASLR_ac_DW.LeASLR_t_TSRSpdLowWarningTmr += HeASLR_t_dT;
        }
    }

    /* End of Chart: '<S365>/ISA_NOT_AVAIL_SPEED_TOO_LOW_states' */

    /* Outputs for Atomic SubSystem: '<S367>/EdgeRising' */
    /* Logic: '<S384>/OR1' incorporates:
     *  UnitDelay: '<S384>/Unit Delay'
     */
    rtb_LogicalOperator8_c = !ASLR_ac_DW.UnitDelay_DSTATE_pg;

    /* Update for UnitDelay: '<S384>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_pg = VeASLI_b_SpdLmtrOnOffSts;

    /* Logic: '<S367>/Logical2' incorporates:
     *  Constant: '<S107>/Calib'
     *  Constant: '<S385>/Constant'
     *  Constant: '<S386>/Constant'
     *  Logic: '<S367>/Logical3'
     *  Logic: '<S384>/AND'
     *  RelationalOperator: '<S367>/Comparison1'
     *  RelationalOperator: '<S367>/Comparison3'
     */
    VeASLC_b_CondTrueWarnHDC = (((((((uint32)VeASLC_e_Hill_Des_Stat) !=
        CeASLR_e_HDC_UNAVL) && (((uint32)VeASLC_e_Hill_Des_Stat) !=
        CeASLR_e_HDC_AVL)) && ((VeASLI_b_SpdLmtrOnOffSts) &&
        rtb_LogicalOperator8_c)) && (VeASLI_b_Hill_Stat_Prx)) &&
        (HeASLR_b_M182ProgrammPrsnc));

    /* End of Outputs for SubSystem: '<S367>/EdgeRising' */

    /* Chart: '<S367>/SL_NOT_AVAIL_HDC_Set' incorporates:
     *  Constant: '<S110>/Calib'
     *  Constant: '<S387>/Calib'
     */
    /* Gateway: ASLR_MedTEB/ASLC/Cluster_Warnings/SL_NOT_AVAIL_HDC_Set/SL_NOT_AVAIL_HDC_Set */
    /* During: ASLR_MedTEB/ASLC/Cluster_Warnings/SL_NOT_AVAIL_HDC_Set/SL_NOT_AVAIL_HDC_Set */
    if (((uint32)ASLR_ac_DW.is_active_c6_ASLR_ac) == 0U)
    {
        /* Entry: ASLR_MedTEB/ASLC/Cluster_Warnings/SL_NOT_AVAIL_HDC_Set/SL_NOT_AVAIL_HDC_Set */
        ASLR_ac_DW.is_active_c6_ASLR_ac = 1U;

        /* Entry Internal: ASLR_MedTEB/ASLC/Cluster_Warnings/SL_NOT_AVAIL_HDC_Set/SL_NOT_AVAIL_HDC_Set */
        /* Transition: '<S388>:102' */
        ASLR_ac_DW.is_c6_ASLR_ac = ASLR_ac_IN_HDC_WarningOff;

        /* Entry 'HDC_WarningOff': '<S388>:100' */
        ASLR_ac_B.LeASLR_b_HDCSetOnWarning = false;
    }
    else if (((sint32)ASLR_ac_DW.is_c6_ASLR_ac) == 1)
    {
        /* During 'HDC_WarningOff': '<S388>:100' */
        if (VeASLC_b_CondTrueWarnHDC)
        {
            /* Transition: '<S388>:104' */
            ASLR_ac_DW.is_c6_ASLR_ac = ASLR_ac_IN_HDC_WarningOn;

            /* Entry 'HDC_WarningOn': '<S388>:101' */
            ASLR_ac_B.LeASLR_b_HDCSetOnWarning = true;
            ASLR_ac_DW.LeASLR_t_HDCWarningTmr = 0.0F;
        }
    }
    else
    {
        /* During 'HDC_WarningOn': '<S388>:101' */
        if (ASLR_ac_DW.LeASLR_t_HDCWarningTmr >= KeASLR_t_HDCSetWarningTime)
        {
            /* Transition: '<S388>:103' */
            ASLR_ac_DW.is_c6_ASLR_ac = ASLR_ac_IN_HDC_WarningOff;

            /* Entry 'HDC_WarningOff': '<S388>:100' */
            ASLR_ac_B.LeASLR_b_HDCSetOnWarning = false;
        }
        else
        {
            ASLR_ac_DW.LeASLR_t_HDCWarningTmr += HeASLR_t_dT;
        }
    }

    /* End of Chart: '<S367>/SL_NOT_AVAIL_HDC_Set' */

    /* Outputs for Atomic SubSystem: '<S366>/EdgeRising' */
    /* UnitDelay: '<S378>/Unit Delay' */
    rtb_LogicalOperator7 = ASLR_ac_DW.UnitDelay_DSTATE_ct;

    /* Update for UnitDelay: '<S378>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ct = VeASLC_b_ASLResumeSwOn;

    /* End of Outputs for SubSystem: '<S366>/EdgeRising' */

    /* Chart: '<S366>/ISA_NOT_AVAIL_TSR_NOT_AVAIL_states' incorporates:
     *  Constant: '<S110>/Calib'
     *  Constant: '<S366>/EndSpdLim'
     *  Constant: '<S379>/Constant'
     *  Constant: '<S380>/Constant'
     *  Constant: '<S381>/Constant'
     *  Constant: '<S383>/Calib'
     *  Logic: '<S366>/Logical1'
     *  Logic: '<S366>/Logical2'
     *  Logic: '<S366>/Logical3'
     *  Logic: '<S366>/Logical4'
     *  Logic: '<S378>/AND'
     *  Logic: '<S378>/OR1'
     *  RelationalOperator: '<S366>/Comparison1'
     *  RelationalOperator: '<S366>/Comparison2'
     *  RelationalOperator: '<S366>/Comparison3'
     *  RelationalOperator: '<S366>/Comparison4'
     *  RelationalOperator: '<S366>/Comparison5'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    /* Gateway: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_TSR_NOT_AVAIL_determination/ISA_NOT_AVAIL_TSR_NOT_AVAIL_states */
    /* During: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_TSR_NOT_AVAIL_determination/ISA_NOT_AVAIL_TSR_NOT_AVAIL_states */
    if (((uint32)ASLR_ac_DW.is_active_c15_ASLR_ac) == 0U)
    {
        /* Entry: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_TSR_NOT_AVAIL_determination/ISA_NOT_AVAIL_TSR_NOT_AVAIL_states */
        ASLR_ac_DW.is_active_c15_ASLR_ac = 1U;

        /* Entry Internal: ASLR_MedTEB/ASLC/Cluster_Warnings/ISA_NOT_AVAIL_TSR_NOT_AVAIL_determination/ISA_NOT_AVAIL_TSR_NOT_AVAIL_states */
        /* Transition: '<S382>:102' */
        ASLR_ac_DW.is_c15_ASLR_ac = ASLR_ac_IN_TSR_Warning_Off;

        /* Entry 'TSR_Warning_Off': '<S382>:100' */
        ASLR_ac_B.LeASLR_b_TSRNotEnbldWarning = false;
        ASLR_ac_DW.LeASLR_t_TSRNotEnbldWarningTmr = 0.0F;
    }
    else if (((sint32)ASLR_ac_DW.is_c15_ASLR_ac) == 1)
    {
        /* Outputs for Atomic SubSystem: '<S366>/EdgeRising' */
        /* During 'TSR_Warning_Off': '<S382>:100' */
        if ((((((((((uint32)VeASLR_e_TSRSts) == CeASLR_e_TSRFaulted) ||
                  (((uint32)VeASLR_e_TSRSts) == CeASLR_e_TSRBlinded)) ||
                 ((((uint32)VeASLR_e_TSRSts) == CeASLR_e_TSRActive) &&
                  ((Switch66 == 255.0F) || (Switch66 == 0.0F)))) &&
                (VeASLR_b_ProxiTrafficSignRcgntn)) &&
                (ASLR_ac_DW.UnitDelay_DSTATE_h)) && rtb_tempSetSpd6) &&
                ((VeASLC_b_ASLResumeSwOn) && (!rtb_LogicalOperator7))) &&
                (VeASLC_b_TSR_Req_On))
        {
            /* Transition: '<S382>:104' */
            ASLR_ac_DW.is_c15_ASLR_ac = ASLR_ac_IN_TSR_Warning_On;

            /* Entry 'TSR_Warning_On': '<S382>:101' */
            ASLR_ac_B.LeASLR_b_TSRNotEnbldWarning = true;
            ASLR_ac_DW.LeASLR_t_TSRNotEnbldWarningTmr = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S366>/EdgeRising' */
    }
    else
    {
        /* During 'TSR_Warning_On': '<S382>:101' */
        if (ASLR_ac_DW.LeASLR_t_TSRNotEnbldWarningTmr >=
                KeASLR_t_TSRNotEnbldWarningTime)
        {
            /* Transition: '<S382>:103' */
            ASLR_ac_DW.is_c15_ASLR_ac = ASLR_ac_IN_TSR_Warning_Off;

            /* Entry 'TSR_Warning_Off': '<S382>:100' */
            ASLR_ac_B.LeASLR_b_TSRNotEnbldWarning = false;
            ASLR_ac_DW.LeASLR_t_TSRNotEnbldWarningTmr = 0.0F;
        }
        else
        {
            ASLR_ac_DW.LeASLR_t_TSRNotEnbldWarningTmr += HeASLR_t_dT;
        }
    }

    /* End of Chart: '<S366>/ISA_NOT_AVAIL_TSR_NOT_AVAIL_states' */

    /* Outputs for Enabled SubSystem: '<S20>/FunctionCall_Subsystem1' incorporates:
     *  EnablePort: '<S43>/Enable'
     */
    /* RelationalOperator: '<S20>/Relational Operator' incorporates:
     *  UnitDelay: '<S20>/Unit Delay'
     */
    if (rtb_Merge2 != ASLR_ac_DW.UnitDelay_DSTATE_p)
    {
        /* Outport: '<Root>/AeASLR_v_STSLSpdLimMPH_Strimm_out' incorporates:
         *  Inport: '<S43>/In1'
         */
        (void)Rte_Write_AeASLR_v_STSLSpdLimMPH_AeASLR_v_STSLSpdLimMPH(rtb_Merge2);
    }

    /* End of RelationalOperator: '<S20>/Relational Operator' */
    /* End of Outputs for SubSystem: '<S20>/FunctionCall_Subsystem1' */

    /* Logic: '<S398>/Logical' incorporates:
     *  Constant: '<S400>/Calib'
     *  RelationalOperator: '<S398>/Comparison1'
     */
    rtb_LogicalOperator8_c = ((VeASLC_v_ASL_DeltaSpd >
        KeASLR_v_ASL_RD_ActivationThres) && (VeASLC_b_ASL_Active));

    /* Outputs for Atomic SubSystem: '<S398>/EdgeRising3' */
    /* Logic: '<S413>/OR1' incorporates:
     *  UnitDelay: '<S413>/Unit Delay'
     */
    rtb_Logical10 = !ASLR_ac_DW.UnitDelay_DSTATE_ft;

    /* Update for UnitDelay: '<S413>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_ft = rtb_LogicalOperator8_c;

    /* Outputs for Atomic SubSystem: '<S398>/LowpassT Reset Enabled' */
    /* Switch: '<S415>/Switch' incorporates:
     *  Constant: '<S110>/Calib'
     *  Constant: '<S414>/Calib'
     *  Logic: '<S413>/AND'
     *  MinMax: '<S415>/Maximum'
     *  Product: '<S415>/Multiplication'
     *  Product: '<S415>/Multiplication1'
     *  Sum: '<S415>/Subtraction'
     *  Sum: '<S415>/Summation'
     *  UnitDelay: '<S415>/Unit Delay'
     */
    if (rtb_LogicalOperator8_c && rtb_Logical10)
    {
        ASLR_ac_DW.UnitDelay_DSTATE_o = VeASLC_v_CanSigVehSpdFltrd;
    }
    else
    {
        ASLR_ac_DW.UnitDelay_DSTATE_o += ((VeASLC_v_SetVehSpdLimUnbiasKPH -
            ASLR_ac_DW.UnitDelay_DSTATE_o) * HeASLR_t_dT) * (1.0F / fmaxf
            (KeASLR_t_ASL_Filter_Time, HeASLR_t_dT));
    }

    /* End of Switch: '<S415>/Switch' */
    /* End of Outputs for SubSystem: '<S398>/LowpassT Reset Enabled' */
    /* End of Outputs for SubSystem: '<S398>/EdgeRising3' */

    /* Switch: '<S398>/Switch' */
    if (rtb_LogicalOperator8_c)
    {
        /* Switch: '<S398>/Switch' incorporates:
         *  UnitDelay: '<S415>/Unit Delay'
         */
        VeASLC_v_TargetSpeed = ASLR_ac_DW.UnitDelay_DSTATE_o;
    }
    else
    {
        /* Switch: '<S398>/Switch' */
        VeASLC_v_TargetSpeed = VeASLC_v_SetVehSpdLimUnbiasKPH;
    }

    /* End of Switch: '<S398>/Switch' */

    /* Sum: '<S398>/Sum3' */
    VeASLC_v_Delta_Speed_PID = VeASLC_v_TargetSpeed - VeASLC_v_CanSigVehSpdFltrd;

    /* UnitDelay: '<S416>/Unit Delay' incorporates:
     *  Constant: '<S417>/Constant'
     *  RelationalOperator: '<S417>/Comparison2'
     */
    rtb_UnitDelay_ap = (VeASLC_v_Delta_Speed_PID >= 0.0F);

    /* Logic: '<S417>/Logical4' incorporates:
     *  RelationalOperator: '<S417>/Comparison1'
     *  UnitDelay: '<S401>/Unit Delay1'
     */
    VeASLC_b_ASL_ItermFrzTypA = ((VeASLC_P_ASL_PIDPwr >= VeASLC_P_DrvrReqPwr) &&
        rtb_UnitDelay_ap);

    /* Logic: '<S417>/Logical5' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S417>/Comparison3'
     *  Sum: '<S417>/Sum4'
     *  UnitDelay: '<S401>/Unit Delay1'
     */
    VeASLC_b_ASL_ItermFrzTypB = (rtb_UnitDelay_ap && (VeASLC_P_ASL_PIDPwr >=
        (VeASLI_P_PctPdlMaxPwr + KeASLR_P_ASL_MaxPwr_Ofst)));

    /* Product: '<S393>/Convert to power2' incorporates:
     *  Constant: '<S393>/Constant Value2'
     */
    VeASLC_P_NormalMinPwr = (VeASLI_n_PrimNoSgndFltrd * VeASLI_M_MgateMinTrq) /
        9549.3F;

    /* Logic: '<S417>/Logical6' incorporates:
     *  Constant: '<S417>/Constant1'
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S417>/Comparison4'
     *  RelationalOperator: '<S417>/Comparison5'
     *  Sum: '<S417>/Sum1'
     *  UnitDelay: '<S401>/Unit Delay1'
     */
    VeASLC_b_ASL_ItermFrzTypC = ((VeASLC_v_Delta_Speed_PID <= 0.0F) &&
        (VeASLC_P_ASL_PIDPwr <= (VeASLC_P_NormalMinPwr +
        KeASLR_P_ASL_MinPwr_Ofst)));

    /* Logic: '<S417>/Logical1' incorporates:
     *  Constant: '<S394>/Constant'
     *  Constant: '<S395>/Constant'
     *  RelationalOperator: '<S58>/Equal'
     *  RelationalOperator: '<S58>/Equal1'
     *  Switch: '<S21>/Switch48'
     *  Switch: '<S21>/Switch65'
     */
    VeASLC_b_ASL_ItermFrz = (((((VeASLC_b_ASL_ItermFrzTypA) ||
        (VeASLC_b_ASL_ItermFrzTypB)) || (VeASLC_b_ASL_ItermFrzTypC)) ||
        (((uint32)VeASLI_e_AxleTrqRespType) != CePTAR_e_Inactive)) || (((uint32)
        VeASLI_e_RrAxleTrqRespType) != CePTAR_e_Inactive));

    /* Outputs for Atomic SubSystem: '<S417>/EdgeRising' */
    /* Logic: '<S424>/OR1' incorporates:
     *  UnitDelay: '<S424>/Unit Delay'
     */
    rtb_LogicalOperator8_c = !ASLR_ac_DW.UnitDelay_DSTATE_c0;

    /* Update for UnitDelay: '<S424>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_c0 = VeASLC_b_ASL_Active;

    /* End of Outputs for SubSystem: '<S417>/EdgeRising' */

    /* Lookup_n-D: '<S420>/Vector' incorporates:
     *  Switch: '<S462>/Switch'
     */
    VeASLC_r_ASL_Mult = look1_iflf_binlca_16a(VeASLC_v_CanSigVehSpdFltrd, ((
        const float32 *)&(KxASLR_r_ASL_Mult[0])), ((const float32 *)
        &(KtASLR_r_ASL_Mult[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S399>/Limiter2' */
    /* Switch: '<S422>/Switch1' incorporates:
     *  Constant: '<S399>/Constant Value2'
     *  RelationalOperator: '<S422>/Relational Operator'
     */
    if (1.0F < VeASLC_r_ASL_Mult)
    {
        /* Switch: '<S422>/Switch1' */
        VeASLC_r_ASL_Mult = 1.0F;
    }

    /* End of Switch: '<S422>/Switch1' */

    /* Switch: '<S422>/Switch' incorporates:
     *  Constant: '<S399>/Constant Value1'
     *  RelationalOperator: '<S422>/Relational Operator1'
     */
    if (VeASLC_r_ASL_Mult <= 0.0F)
    {
        /* Switch: '<S422>/Switch' */
        VeASLC_r_ASL_Mult = 0.0F;
    }

    /* End of Switch: '<S422>/Switch' */
    /* End of Outputs for SubSystem: '<S399>/Limiter2' */

    /* Product: '<S399>/Product1' incorporates:
     *  Lookup_n-D: '<S419>/Vector'
     *  Sum: '<S398>/Sum3'
     */
    VeASLC_P_ASL_ItermRaw = (VeASLC_v_Delta_Speed_PID * look1_iflf_binlca_16a
        (VeASLC_v_Delta_Speed_PID, ((const float32 *)&(KxASLR_K_ASL_IGain[0])),
         ((const float32 *)&(KtASLR_K_ASL_IGain[0])), 8U)) * VeASLC_r_ASL_Mult;

    /* Product: '<S393>/Convert to power' incorporates:
     *  Constant: '<S393>/Constant Value'
     */
    VeASLC_P_ModHHPwr = (VeASLI_n_PrimNoSgndFltrd * VeASLI_M_OutTorqReqModHH) /
        9549.3F;

    /* Outputs for Atomic SubSystem: '<S399>/EdgeRising' */
    /* Logic: '<S416>/AND' incorporates:
     *  Logic: '<S416>/OR1'
     *  UnitDelay: '<S416>/Unit Delay'
     */
    rtb_Logical10 = ((VeASLC_b_ASL_Active) && (!ASLR_ac_DW.UnitDelay_DSTATE_lq));

    /* Update for UnitDelay: '<S416>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_lq = VeASLC_b_ASL_Active;

    /* End of Outputs for SubSystem: '<S399>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S417>/EdgeRising' */
    /* Switch: '<S417>/Switch9' incorporates:
     *  Logic: '<S417>/Logical2'
     *  Logic: '<S417>/Logical3'
     *  Logic: '<S424>/AND'
     */
    if ((!VeASLC_b_ASL_ItermFrz) || ((VeASLC_b_ASL_Active) &&
            rtb_LogicalOperator8_c))
    {
        /* Switch: '<S423>/Switch1' */
        if (rtb_Logical10)
        {
            ASLR_ac_DW.UnitDelay_DSTATE_i = VeASLC_P_ModHHPwr;
        }

        /* Sum: '<S399>/Sum4' */
        VeASLC_P_ASL_Iterm = VeASLC_P_ASL_ItermRaw +
            ASLR_ac_DW.UnitDelay_DSTATE_i;

        /* Outputs for Atomic SubSystem: '<S399>/Limiter' */
        /* Switch: '<S421>/Switch1' incorporates:
         *  Constant: '<S418>/Calib'
         *  RelationalOperator: '<S421>/Relational Operator'
         */
        if (KeASLR_M_ASL_ItermLimit < VeASLC_P_ASL_Iterm)
        {
            /* Switch: '<S421>/Switch1' */
            VeASLC_P_ASL_Iterm = KeASLR_M_ASL_ItermLimit;
        }

        /* End of Switch: '<S421>/Switch1' */

        /* Switch: '<S421>/Switch' incorporates:
         *  Constant: '<S418>/Calib'
         *  Gain: '<S399>/Negation'
         *  RelationalOperator: '<S421>/Relational Operator1'
         */
        if (VeASLC_P_ASL_Iterm <= (-KeASLR_M_ASL_ItermLimit))
        {
            /* Switch: '<S417>/Switch9' */
            VeASLC_P_ASL_Iterm = -KeASLR_M_ASL_ItermLimit;
        }

        /* End of Switch: '<S421>/Switch' */
        /* End of Outputs for SubSystem: '<S399>/Limiter' */
    }

    /* End of Switch: '<S417>/Switch9' */
    /* End of Outputs for SubSystem: '<S417>/EdgeRising' */

    /* Product: '<S402>/Product' incorporates:
     *  Lookup_n-D: '<S427>/Vector'
     *  Sum: '<S398>/Sum3'
     */
    VeASLC_P_ASL_Pterm = (VeASLC_r_ASL_Mult * look1_iflf_binlca_16a
                          (VeASLC_v_Delta_Speed_PID, ((const float32 *)
                            &(KxASLR_K_ASL_P[0])), ((const float32 *)
                            &(KtASLR_K_ASL_P[0])), 8U)) *
        VeASLC_v_Delta_Speed_PID;

    /* Switch: '<S401>/Switch1' */
    if (VeASLC_b_ASL_Active)
    {
        /* Switch: '<S401>/Switch1' incorporates:
         *  Sum: '<S392>/Sum2'
         */
        VeASLC_P_ASL_PIDPwr = VeASLC_P_ASL_Iterm + VeASLC_P_ASL_Pterm;
    }
    else
    {
        /* Switch: '<S401>/Switch1' incorporates:
         *  Constant: '<S401>/Constant Value1'
         */
        VeASLC_P_ASL_PIDPwr = 9999.0F;
    }

    /* End of Switch: '<S401>/Switch1' */

    /* Switch: '<S403>/Switch2' incorporates:
     *  Abs: '<S403>/Abs'
     *  Constant: '<S403>/Constant1'
     *  RelationalOperator: '<S403>/Relational Operator'
     */
    if (fabsf(VeASLI_n_PrimNoSgndFltrd) >= 0.01F)
    {
        /* Switch: '<S403>/Switch2' */
        Switch11 = VeASLI_n_PrimNoSgndFltrd;
    }
    else
    {
        /* Switch: '<S403>/Switch2' */
        Switch11 = 0.01F;
    }

    /* End of Switch: '<S403>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S403>/Protected Division' */
    /* Switch: '<S428>/Switch1' incorporates:
     *  Constant: '<S428>/Constant Value'
     *  Constant: '<S428>/Constant Value1'
     *  Constant: '<S428>/Constant Value2'
     *  Constant: '<S428>/Constant Value3'
     *  Logic: '<S428>/AND'
     *  RelationalOperator: '<S428>/Greater Than or Equal '
     *  RelationalOperator: '<S428>/Greater Than or Equal 1'
     *  RelationalOperator: '<S428>/Not Equal'
     *  RelationalOperator: '<S428>/Not Equal1'
     *  Switch: '<S428>/Switch2'
     *  Switch: '<S428>/Switch3'
     */
    if ((VeASLC_P_ASL_PIDPwr != 0.0F) && (Switch11 != 0.0F))
    {
        /* Switch: '<S428>/Switch1' incorporates:
         *  Product: '<S428>/Division'
         */
        Switch11 = VeASLC_P_ASL_PIDPwr / Switch11;
    }
    else if (VeASLC_P_ASL_PIDPwr > 0.0F)
    {
        /* Switch: '<S428>/Switch2' incorporates:
         *  Constant: '<S428>/MAXFLOAT'
         *  Switch: '<S428>/Switch1'
         */
        Switch11 = 3.402823466E+38F;
    }
    else if (VeASLC_P_ASL_PIDPwr < 0.0F)
    {
        /* Switch: '<S428>/Switch3' incorporates:
         *  Constant: '<S428>/MINFLOAT'
         *  Switch: '<S428>/Switch1'
         *  Switch: '<S428>/Switch2'
         */
        Switch11 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S428>/Switch1' incorporates:
         *  Constant: '<S428>/Constant Value4'
         *  Switch: '<S428>/Switch2'
         *  Switch: '<S428>/Switch3'
         */
        Switch11 = 0.0F;
    }

    /* End of Switch: '<S428>/Switch1' */
    /* End of Outputs for SubSystem: '<S403>/Protected Division' */

    /* Product: '<S403>/Division' incorporates:
     *  Constant: '<S403>/Constant3'
     */
    VeASLC_M_ASL_Raw = Switch11 * 9549.3F;

    /* Switch: '<S423>/Switch3' */
    if (rtb_Logical10)
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  UnitDelay: '<S423>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE_i = VeASLC_P_ModHHPwr;
    }
    else
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  UnitDelay: '<S423>/Unit Delay'
         */
        ASLR_ac_DW.UnitDelay_DSTATE_i = VeASLC_P_ASL_Iterm;
    }

    /* End of Switch: '<S423>/Switch3' */

    /* Update for UnitDelay: '<S39>/Unit Delay2' incorporates:
     *  Switch: '<S20>/temp SetSpd 2'
     */
    ASLR_ac_DW.UnitDelay2_DSTATE_jk = VeASLC_e_Hill_Des_Stat;

    /* Update for UnitDelay: '<S96>/Unit Delay1' */
    ASLR_ac_DW.UnitDelay1_DSTATE = VeASLR_Pct_AccelPedalEffPosition;

    /* Update for UnitDelay: '<S27>/Unit Delay3' incorporates:
     *  Switch: '<S21>/Switch38'
     */
    ASLR_ac_DW.UnitDelay3_DSTATE_i = VeASLI_e_PMM_PowerMode;

    /* Update for UnitDelay: '<S187>/Unit Delay' incorporates:
     *  Switch: '<S21>/Switch27'
     */
    ASLR_ac_DW.UnitDelay_DSTATE_fiy = VeASLR_e_DrvMdStat;

    /* Update for UnitDelay: '<S187>/Unit Delay1' incorporates:
     *  Switch: '<S21>/Switch28'
     */
    ASLR_ac_DW.UnitDelay1_DSTATE_h = VeASLR_e_TurtleMdSts;

    /* Update for UnitDelay: '<S188>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_jd = rtb_AND_py;

    /* Update for UnitDelay: '<S177>/Unit Delay2' */
    ASLR_ac_DW.UnitDelay2_DSTATE_j = VeASLI_b_SpeedUnit;

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_k = VeASLR_b_TempFlt;

    /* Update for UnitDelay: '<S29>/Unit Delay2' */
    ASLR_ac_DW.UnitDelay2_DSTATE_ms = rtb_tempSetSpd4_n;

    /* Update for UnitDelay: '<S29>/Unit Delay8' */
    ASLR_ac_DW.UnitDelay8_DSTATE = ASLR_ac_DW.UnitDelay_DSTATE_i5;

    /* Update for Delay: '<S450>/Integer Delay' */
    ASLR_ac_DW.IntegerDelay_DSTATE[ASLR_ac_DW.CircBufIdx] =
        VeASLR_e_DsplydSpdLimSts;
    if (((sint32)ASLR_ac_DW.CircBufIdx) < 99)
    {
        ASLR_ac_DW.CircBufIdx = (uint16)(((uint32)ASLR_ac_DW.CircBufIdx) + 1U);
    }
    else
    {
        ASLR_ac_DW.CircBufIdx = 0U;
    }

    /* End of Update for Delay: '<S450>/Integer Delay' */

    /* Update for UnitDelay: '<S449>/Unit Delay2' */
    ASLR_ac_DW.UnitDelay2_DSTATE_o = VeASLC_v_TSRDispSpdLimClpd;

    /* Update for UnitDelay: '<S29>/Unit Delay7' */
    ASLR_ac_DW.UnitDelay7_DSTATE = VeASLC_b_ASLEngaged;

    /* Update for UnitDelay: '<S396>/Unit Delay3' incorporates:
     *  Constant: '<S396>/TRUE Constant'
     */
    ASLR_ac_DW.UnitDelay3_DSTATE = true;

    /* Update for UnitDelay: '<S364>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_m = Switch66;

    /* Update for UnitDelay: '<S364>/Unit Delay1' */
    ASLR_ac_DW.UnitDelay1_DSTATE_c = VeASLC_b_ASLEngaged;

    /* Update for UnitDelay: '<S365>/Unit Delay1' */
    ASLR_ac_DW.UnitDelay1_DSTATE_md = VeASLC_b_ASLEngaged;

    /* Update for UnitDelay: '<S365>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_c = Switch66;

    /* Update for UnitDelay: '<S366>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_h = VeASLC_b_ASLEngaged;

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    ASLR_ac_DW.UnitDelay_DSTATE_p = rtb_Merge2;

    /* Outport: '<Root>/VeASLR_b_ASLEnabled' incorporates:
     *  Logic: '<S36>/AND'
     *  SignalConversion generated from: '<S1>/ASLEnabled'
     */
    (void)Rte_Write_VeASLR_b_ASLEnabled_Value(VeASLC_b_ASLEnabled);

    /* Outport: '<Root>/VeASLR_b_ASLActive' incorporates:
     *  Logic: '<S31>/AND'
     *  SignalConversion generated from: '<S1>/ASL_Active'
     */
    (void)Rte_Write_VeASLR_b_ASLActive_Value(VeASLC_b_ASL_Active);

    /* Outport: '<Root>/VeASLR_b_ASLorACCorHASSwStuck' incorporates:
     *  Logic: '<S38>/AND'
     *  SignalConversion generated from: '<S1>/ASLorACCorHASSwStuck'
     */
    (void)Rte_Write_VeASLR_b_ASLorACCorHASSwStuck_Value
        (VeASLC_b_ASLorACCorHASSwStuck);

    /* Outport: '<Root>/VeASLR_e_DrvMdOvrrdKickdownSt' incorporates:
     *  Gain: '<S55>/Gain'
     *  SignalConversion generated from: '<S1>/DrvMdOvrrdKickdownSt'
     */
    (void)Rte_Write_VeASLR_e_DrvMdOvrrdKickdownSt_Value
        (VeASLC_e_DrvMdTurtleMdOvrrdStRaw);

    /* Outport: '<Root>/VeASLR_v_DrvMdTurtleMdSpdLim' incorporates:
     *  Gain: '<S50>/Gain'
     *  SignalConversion generated from: '<S1>/DrvMdTurtleMdSpdLim'
     */
    (void)Rte_Write_VeASLR_v_DrvMdTurtleMdSpdLim_Value(rtb_MinMax);

    /* Outport: '<Root>/VeASLR_b_HomSpdLimEnabled' incorporates:
     *  Constant: '<S111>/Calib'
     *  Logic: '<S34>/AND'
     *  SignalConversion generated from: '<S1>/EnblHomSpdLim'
     */
    (void)Rte_Write_VeASLR_b_HomSpdLimEnabled_Value(KeASLR_b_EnblHomSpdLim);

    /* Outport: '<Root>/VeASLR_e_HDC_Status' incorporates:
     *  DataTypeConversion: '<S41>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/HDCStat'
     *  Switch: '<S20>/temp SetSpd 2'
     */
    (void)Rte_Write_VeASLR_e_HDC_Status_Value(VeASLC_e_Hill_Des_Stat);

    /* Outport: '<Root>/VeASLR_b_ISASts' incorporates:
     *  Logic: '<S35>/AND'
     *  SignalConversion generated from: '<S1>/ISASts'
     */
    (void)Rte_Write_VeASLR_b_ISASts_Value(VeASLC_b_ISASts);

    /* Outport: '<Root>/VeASLR_M_PIDTrq' incorporates:
     *  Gain: '<S54>/Gain'
     *  SignalConversion generated from: '<S1>/PID_Torque'
     */
    (void)Rte_Write_VeASLR_M_PIDTrq_Value(VeASLC_M_ASL_Raw);

    /* Outport: '<Root>/VeASLR_b_SpdLmtrOnOffSts' incorporates:
     *  Logic: '<S37>/AND'
     *  SignalConversion generated from: '<S1>/SL_OnOffStatus'
     */
    (void)Rte_Write_VeASLR_b_SpdLmtrOnOffSts_Value(VeASLI_b_SpdLmtrOnOffSts);

    /* Outport: '<Root>/VeASLR_b_STSLSpdInfoAct' incorporates:
     *  Logic: '<S32>/AND'
     *  SignalConversion generated from: '<S1>/STSL_SpdInfoAct'
     */
    (void)Rte_Write_VeASLR_b_STSLSpdInfoAct_Value(VeASLR_b_ServiceToolSpdInfoAct);

    /* Outport: '<Root>/VeASLR_v_STSLSpdLimKPH' incorporates:
     *  Gain: '<S45>/Gain'
     *  SignalConversion generated from: '<S1>/STSL_SpdLimKPH'
     */
    (void)Rte_Write_VeASLR_v_STSLSpdLimKPH_Value(VeASLC_v_ServiceToolSpdLimKPH);

    /* Outport: '<Root>/VeASLR_v_STSLSpdLimMPH' incorporates:
     *  Gain: '<S53>/Gain'
     *  SignalConversion generated from: '<S1>/STSL_SpdLimMPH'
     */
    (void)Rte_Write_VeASLR_v_STSLSpdLimMPH_Value(rtb_Merge2);

    /* Outport: '<Root>/VeASLR_b_STSpdLimEnabled' incorporates:
     *  Constant: '<S108>/Calib'
     *  Gain: '<S51>/Gain'
     *  SignalConversion generated from: '<S1>/STSpdLimEnabled'
     */
    (void)Rte_Write_VeASLR_b_STSpdLimEnabled_Value(HeASLR_b_VF_ServiceToolSpdSel);

    /* Outport: '<Root>/VeASLR_v_STSpdLim' incorporates:
     *  Gain: '<S52>/Gain'
     *  SignalConversion generated from: '<S1>/STSpdLimKPH'
     */
    (void)Rte_Write_VeASLR_v_STSpdLim_Value(rtb_Product2);

    /* Switch: '<S177>/Switch10' incorporates:
     *  Constant: '<S108>/Calib'
     *  Constant: '<S177>/Constant Value7'
     */
    if (HeASLR_b_VF_ServiceToolSpdSel)
    {
        rtb_Switch1_duk = VeASLC_v_ServiceToolSpdLimKPH;
    }
    else
    {
        rtb_Switch1_duk = 255.0F;
    }

    /* End of Switch: '<S177>/Switch10' */

    /* Switch: '<S177>/Switch11' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S177>/Constant Value8'
     */
    if (KeASLR_b_EnblHomSpdLim)
    {
        Switch66 = rtb_Switch6;
    }
    else
    {
        Switch66 = 255.0F;
    }

    /* End of Switch: '<S177>/Switch11' */

    /* Outport: '<Root>/VeASLR_v_SetVehSpdLimKPH' incorporates:
     *  MinMax: '<S177>/MinMax1'
     *  SignalConversion generated from: '<S1>/SetVehSpdLimKPH'
     */
    (void)Rte_Write_VeASLR_v_SetVehSpdLimKPH_Value(fminf(fminf
        (VeASLC_v_SetVehSpdLimKPH, rtb_Switch1_duk), Switch66));

    /* Switch: '<S177>/Switch12' incorporates:
     *  Constant: '<S108>/Calib'
     *  Constant: '<S177>/Constant Value11'
     *  Constant: '<S177>/Constant Value9'
     *  Product: '<S177>/Product3'
     */
    if (HeASLR_b_VF_ServiceToolSpdSel)
    {
        rtb_Switch1_duk = VeASLC_v_ServiceToolSpdLimKPH * 0.62137121F;
    }
    else
    {
        rtb_Switch1_duk = 255.0F;
    }

    /* End of Switch: '<S177>/Switch12' */

    /* Switch: '<S177>/Switch13' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S177>/Constant Value10'
     *  Constant: '<S177>/Constant Value12'
     *  Product: '<S177>/Product4'
     */
    if (KeASLR_b_EnblHomSpdLim)
    {
        Switch66 = rtb_Switch6 * 0.62137121F;
    }
    else
    {
        Switch66 = 255.0F;
    }

    /* End of Switch: '<S177>/Switch13' */

    /* Outport: '<Root>/VeASLR_v_SetVehSpdLimMPH' incorporates:
     *  MinMax: '<S177>/MinMax2'
     *  SignalConversion generated from: '<S1>/SetVehSpdLimMPH'
     */
    (void)Rte_Write_VeASLR_v_SetVehSpdLimMPH_Value(fminf(fminf
        (VeASLC_v_SetVehSpdLimMPH, rtb_Switch1_duk), Switch66));

    /* Outport: '<Root>/VeASLR_e_SpdLmtSts' incorporates:
     *  Gain: '<S47>/Gain'
     *  SignalConversion generated from: '<S1>/SpdLmtSts'
     */
    (void)Rte_Write_VeASLR_e_SpdLmtSts_Value(VeASLC_e_SpeedLimitStsforCAN);

    /* Outport: '<Root>/VeASLR_b_TSRReady' incorporates:
     *  Logic: '<S33>/AND'
     *  SignalConversion generated from: '<S1>/TSRReady'
     */
    (void)Rte_Write_VeASLR_b_TSRReady_Value(VeASLC_b_TSRRdy);

    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S366>/ISA_NOT_AVAIL_TSR_NOT_AVAIL1'
     *  Constant: '<S367>/NONE'
     *  Switch: '<S364>/Switch2'
     *  Switch: '<S365>/Switch3'
     *  Switch: '<S367>/Switch5'
     */
    if (ASLR_ac_B.LeASLR_b_TSRNotEnbldWarning)
    {
        rtb_Switch1_k = 25U;
    }
    else if (ASLR_ac_B.LeASLR_b_TSRSpdHighWarning)
    {
        /* Switch: '<S364>/Switch2' incorporates:
         *  Constant: '<S364>/ISA_NOT_AVAIL_SPEED_TOO_HIGH1'
         */
        rtb_Switch1_k = 26U;
    }
    else if (ASLR_ac_B.LeASLR_b_TSRSpdLowWarning)
    {
        /* Switch: '<S365>/Switch3' incorporates:
         *  Constant: '<S365>/ISA_NOT_AVAIL_SPEED_TOO_LOW1'
         *  Switch: '<S364>/Switch2'
         */
        rtb_Switch1_k = 27U;
    }
    else if (ASLR_ac_B.LeASLR_b_HDCSetOnWarning)
    {
        /* Switch: '<S367>/Switch5' incorporates:
         *  Constant: '<S367>/SL_NOT_AVAIL_HDC_SET1'
         *  Switch: '<S364>/Switch2'
         *  Switch: '<S365>/Switch3'
         */
        rtb_Switch1_k = 6U;
    }
    else
    {
        rtb_Switch1_k = 0U;
    }

    /* End of Switch: '<S366>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeASLR_e_TSRClusterWarnings' incorporates:
     *  SignalConversion generated from: '<S1>/TSR_ClusterWarnings'
     */
    (void)Rte_Write_VeASLR_e_TSRClusterWarnings_Value(rtb_Switch1_k);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLC'
     */
    /* Outport: '<Root>/VeASLR_v_TSRDispSpdLimClpd' incorporates:
     *  Gain: '<S46>/Gain'
     *  SignalConversion generated from: '<S1>/TSR_DispSpeedLimClpd'
     */
    (void)Rte_Write_VeASLR_v_TSRDispSpdLimClpd_Value(VeASLC_v_TSRDispSpdLimClpd);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ASLR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Output function */
FUNC(void, ASLR_CODE) DIDWrite_RWDB61B_SERVICETOOLSPEED(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWDB61B_SERVICETOOLSPEED' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RWDB61B_SERVICETOOLSPEED_DidWrite'
     */
    /* DataStoreWrite: '<S19>/AeASLR_v_STSLSpdLimMPH' incorporates:
     *  Inport: '<Root>/VeDCAB_v_STSLSpdLimMPH_DidWrite'
     */
    (void)Rte_Read_VeDCAB_v_STSLSpdLimMPH_DidWrite_Value
        ((&(AeASLR_v_STSLSpdLimMPH)));

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWDB61B_SERVICETOOLSPEED' */
}

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) FsftASLR_b_DsplydSpdLimSts(void)
{

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftASLR_b_DsplydSpdLimSts' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S4>/FsftASLR_b_DsplydSpdLimStsChrt'
     *  SignalConversion generated from: '<S4>/VeASLR_b_DsplydSpdLimStsFA_write'
     */
    /* Gateway: FsftASLR_b_DsplydSpdLimSts/FsftASLR_b_DsplydSpdLimStsChrt */
    /* During: FsftASLR_b_DsplydSpdLimSts/FsftASLR_b_DsplydSpdLimStsChrt */
    /* Entry Internal: FsftASLR_b_DsplydSpdLimSts/FsftASLR_b_DsplydSpdLimStsChrt */
    /* Transition: '<S615>:2' */
    Rte_IrvWrite_FsftASLR_b_DsplydSpdLimSts_DsplydSpdLimStsFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftASLR_b_DsplydSpdLimSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) FsftASLR_b_Hill_Des_Status(void)
{

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftASLR_b_Hill_Des_Status' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S5>/FsftASLR_b_Hill_Des_StatusChrt'
     *  SignalConversion generated from: '<S5>/VeASLR_b_Hill_Des_StatusFA_write'
     */
    /* Gateway: FsftASLR_b_Hill_Des_Status/FsftASLR_b_Hill_Des_StatusChrt */
    /* During: FsftASLR_b_Hill_Des_Status/FsftASLR_b_Hill_Des_StatusChrt */
    /* Entry Internal: FsftASLR_b_Hill_Des_Status/FsftASLR_b_Hill_Des_StatusChrt */
    /* Transition: '<S616>:2' */
    Rte_IrvWrite_FsftASLR_b_Hill_Des_Status_HDC_FA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftASLR_b_Hill_Des_Status' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) FsftASLR_b_LaneCenteringOnOffSts(void)
{

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftASLR_b_LaneCenteringOnOffSts' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S6>/FsftASLR_b_LaneCenteringOnOffStsChrt'
     *  SignalConversion generated from: '<S6>/VeASLR_b_LaneCenteringOnOffStsFA_write'
     */
    /* Gateway: FsftASLR_b_LaneCenteringOnOffSts/FsftASLR_b_LaneCenteringOnOffStsChrt */
    /* During: FsftASLR_b_LaneCenteringOnOffSts/FsftASLR_b_LaneCenteringOnOffStsChrt */
    /* Entry Internal: FsftASLR_b_LaneCenteringOnOffSts/FsftASLR_b_LaneCenteringOnOffStsChrt */
    /* Transition: '<S617>:2' */
    Rte_IrvWrite_FsftASLR_b_LaneCenteringOnOffSts_LaneCenteringOnOffStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftASLR_b_LaneCenteringOnOffSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) FsftASLR_b_RRCCSw_FA_Fsft(void)
{

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftASLR_b_RRCCSw_FA_Fsft' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S7>/FsftASLR_b_RRCCSw_FA_FsftChrt'
     *  SignalConversion generated from: '<S7>/VeASLR_b_RRCCSw_FA_LeFA_write'
     */
    /* Gateway: FsftASLR_b_RRCCSw_FA_Fsft/FsftASLR_b_RRCCSw_FA_FsftChrt */
    /* During: FsftASLR_b_RRCCSw_FA_Fsft/FsftASLR_b_RRCCSw_FA_FsftChrt */
    /* Entry Internal: FsftASLR_b_RRCCSw_FA_Fsft/FsftASLR_b_RRCCSw_FA_FsftChrt */
    /* Transition: '<S618>:2' */
    Rte_IrvWrite_FsftASLR_b_RRCCSw_FA_Fsft_RRCCSW_FA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftASLR_b_RRCCSw_FA_Fsft' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) FsftASLR_b_SpdLmtrOnOffSts(void)
{

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftASLR_b_SpdLmtrOnOffSts' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S8>/FsftASLR_b_SpdLmtrOnOffStsChrt'
     *  SignalConversion generated from: '<S8>/VeASLR_b_SpdLmtrOnOffStsFA_write'
     */
    /* Gateway: FsftASLR_b_SpdLmtrOnOffSts/FsftASLR_b_SpdLmtrOnOffStsChrt */
    /* During: FsftASLR_b_SpdLmtrOnOffSts/FsftASLR_b_SpdLmtrOnOffStsChrt */
    /* Entry Internal: FsftASLR_b_SpdLmtrOnOffSts/FsftASLR_b_SpdLmtrOnOffStsChrt */
    /* Transition: '<S619>:2' */
    Rte_IrvWrite_FsftASLR_b_SpdLmtrOnOffSts_SpeedLimiterOnOffStsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftASLR_b_SpdLmtrOnOffSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) FsftASLR_b_TSRSts(void)
{

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftASLR_b_TSRSts' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S9>/FsftASLR_b_TSRStsChrt'
     *  SignalConversion generated from: '<S9>/VeASLR_b_TSRStsFA_write'
     */
    /* Gateway: FsftASLR_b_TSRSts/FsftASLR_b_TSRStsChrt */
    /* During: FsftASLR_b_TSRSts/FsftASLR_b_TSRStsChrt */
    /* Entry Internal: FsftASLR_b_TSRSts/FsftASLR_b_TSRStsChrt */
    /* Transition: '<S620>:2' */
    Rte_IrvWrite_FsftASLR_b_TSRSts_TSRStsFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftASLR_b_TSRSts' */
#endif

}

#endif

/* Output function */
FUNC(void, ASLR_CODE) PokeASLR_Init_EEPROM(void)
{
    /* (no output/update code required) */
}

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_b_LaneCenteringOnOffSts(VAR(boolean, AUTOMATIC)
    LeASLR_b_LaneCenteringOnOffSts)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_b_LaneCenteringOnOffSts);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_b_LaneCenteringOnOffSts' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S11>/PokeASLR_b_LaneCenteringOnOffStsChrt'
     *  SignalConversion generated from: '<S11>/VeASLR_b_LaneCenteringOnOffSts_FA_Rst_write'
     */
    /* Gateway: PokeASLR_b_LaneCenteringOnOffSts/PokeASLR_b_LaneCenteringOnOffStsChrt */
    /* During: PokeASLR_b_LaneCenteringOnOffSts/PokeASLR_b_LaneCenteringOnOffStsChrt */
    /* Entry Internal: PokeASLR_b_LaneCenteringOnOffSts/PokeASLR_b_LaneCenteringOnOffStsChrt */
    /* Transition: '<S622>:2' */
    Rte_IrvWrite_PokeASLR_b_LaneCenteringOnOffSts_LaneCenteringOnOffStsFA_write_IRV
        (false);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S11>/LeASLR_b_LaneCenteringOnOffSts'
     *  SignalConversion generated from: '<S11>/VeASLR_b_LaneCenteringOnOffSts_write'
     */
    Rte_IrvWrite_PokeASLR_b_LaneCenteringOnOffSts_LaneCenteringOnOffSts_write_IRV
        (LeASLR_b_LaneCenteringOnOffSts);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_b_LaneCenteringOnOffSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_b_RRCCSw(VAR(sint16, AUTOMATIC) LeASLR_b_RRCCSw)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_b_RRCCSw);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_b_RRCCSw' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S12>/PokeASLR_b_RRCCSwChrt'
     *  SignalConversion generated from: '<S12>/VeASLR_b_RRCCSw_FA_Rst_write'
     */
    /* Gateway: PokeASLR_b_RRCCSw/PokeASLR_b_RRCCSwChrt */
    /* During: PokeASLR_b_RRCCSw/PokeASLR_b_RRCCSwChrt */
    /* Entry Internal: PokeASLR_b_RRCCSw/PokeASLR_b_RRCCSwChrt */
    /* Transition: '<S623>:2' */
    Rte_IrvWrite_PokeASLR_b_RRCCSw_RRCCSW_FA_Init_write_IRV(false);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S12>/LeASLR_b_RRCCSw'
     *  SignalConversion generated from: '<S12>/VeASLR_b_RRCCSw_write'
     */
    Rte_IrvWrite_PokeASLR_b_RRCCSw_RRCCSW_Init_write_IRV(LeASLR_b_RRCCSw);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_b_RRCCSw' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_b_SignCaptMode(VAR(boolean, AUTOMATIC)
    LeASLR_b_SignCaptMode)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_b_SignCaptMode);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_b_SignCaptMode' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S13>/LeASLR_b_SignCaptMode'
     *  SignalConversion generated from: '<S13>/VeASLR_b_SignCaptMode_write'
     */
    /* Gateway: PokeASLR_b_SignCaptMode/PokeASLR_b_SignCaptModeChrt */
    /* During: PokeASLR_b_SignCaptMode/PokeASLR_b_SignCaptModeChrt */
    /* Entry Internal: PokeASLR_b_SignCaptMode/PokeASLR_b_SignCaptModeChrt */
    /* Transition: '<S624>:2' */
    Rte_IrvWrite_PokeASLR_b_SignCaptMode_SignCaptureMode_write_IRV
        (LeASLR_b_SignCaptMode);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_b_SignCaptMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_b_SpdLmtrOnOffSts(VAR(boolean, AUTOMATIC)
    LeASLR_b_SpdLmtrOnOffSts)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_b_SpdLmtrOnOffSts);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_b_SpdLmtrOnOffSts' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S14>/PokeASLR_b_SpdLmtrOnOffStsChrt'
     *  SignalConversion generated from: '<S14>/VeASLR_b_SpdLmtrOnOffSts_FA_Rst_write'
     */
    /* Gateway: PokeASLR_b_SpdLmtrOnOffSts/PokeASLR_b_SpdLmtrOnOffStsChrt */
    /* During: PokeASLR_b_SpdLmtrOnOffSts/PokeASLR_b_SpdLmtrOnOffStsChrt */
    /* Entry Internal: PokeASLR_b_SpdLmtrOnOffSts/PokeASLR_b_SpdLmtrOnOffStsChrt */
    /* Transition: '<S625>:2' */
    Rte_IrvWrite_PokeASLR_b_SpdLmtrOnOffSts_SpeedLimiterOnOffStsFA_write_IRV
        (false);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S14>/LeASLR_b_SpdLmtrOnOffSts'
     *  SignalConversion generated from: '<S14>/VeASLR_b_SpdLmtrOnOffSts_write'
     */
    Rte_IrvWrite_PokeASLR_b_SpdLmtrOnOffSts_SpeedLimiterOnOffSts_write_IRV
        (LeASLR_b_SpdLmtrOnOffSts);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_b_SpdLmtrOnOffSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_b_TSR_Req(VAR(boolean, AUTOMATIC)
    LeASLR_b_TSR_Req)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_b_TSR_Req);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_b_TSR_Req' */
    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S15>/LeASLR_b_TSR_Req'
     *  SignalConversion generated from: '<S15>/VeASLR_b_TSR_Req_write'
     */
    /* Gateway: PokeASLR_b_TSR_Req/PokeASLR_b_TSR_ReqChrt */
    /* During: PokeASLR_b_TSR_Req/PokeASLR_b_TSR_ReqChrt */
    /* Entry Internal: PokeASLR_b_TSR_Req/PokeASLR_b_TSR_ReqChrt */
    /* Transition: '<S626>:2' */
    Rte_IrvWrite_PokeASLR_b_TSR_Req_TSR_Req_write_IRV(LeASLR_b_TSR_Req);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_b_TSR_Req' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_e_DsplydSpdLimSts(VAR(sint16, AUTOMATIC)
    LeASLR_e_DsplydSpdLimSts)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_e_DsplydSpdLimSts);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_e_DsplydSpdLimSts' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S16>/PokeASLR_e_DsplydSpdLimStsChrt'
     *  SignalConversion generated from: '<S16>/VeASLR_b_DsplydSpdLimSts_FA_Rst_write'
     */
    /* Gateway: PokeASLR_e_DsplydSpdLimSts/PokeASLR_e_DsplydSpdLimStsChrt */
    /* During: PokeASLR_e_DsplydSpdLimSts/PokeASLR_e_DsplydSpdLimStsChrt */
    /* Entry Internal: PokeASLR_e_DsplydSpdLimSts/PokeASLR_e_DsplydSpdLimStsChrt */
    /* Transition: '<S627>:2' */
    Rte_IrvWrite_PokeASLR_e_DsplydSpdLimSts_DsplydSpdLimStsFA_Init_write_IRV
        (false);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S16>/LeASLR_e_DsplydSpdLimSts'
     *  SignalConversion generated from: '<S16>/VeASLR_e_DsplydSpdLimSts_write'
     */
    Rte_IrvWrite_PokeASLR_e_DsplydSpdLimSts_DisplayedSpeedLimSts_write_IRV
        (LeASLR_e_DsplydSpdLimSts);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_e_DsplydSpdLimSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_e_Hill_Des_Status(VAR(TeASLR_e_HDC_Status,
    AUTOMATIC) LeASLR_e_Hill_Des_Status)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_e_Hill_Des_Status);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_e_Hill_Des_Status' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S17>/PokeASLR_e_Hill_Des_StatusChrt'
     *  SignalConversion generated from: '<S17>/VeASLR_b_Hill_Des_Status_FA_Rst_write'
     */
    /* Gateway: PokeASLR_e_Hill_Des_Status/PokeASLR_e_Hill_Des_StatusChrt */
    /* During: PokeASLR_e_Hill_Des_Status/PokeASLR_e_Hill_Des_StatusChrt */
    /* Entry Internal: PokeASLR_e_Hill_Des_Status/PokeASLR_e_Hill_Des_StatusChrt */
    /* Transition: '<S628>:2' */
    Rte_IrvWrite_PokeASLR_e_Hill_Des_Status_HDC_FA_Init_write_IRV(false);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S17>/LeASLR_e_Hill_Des_Status'
     *  SignalConversion generated from: '<S17>/VeASLR_e_Hill_Des_Status_write'
     */
    Rte_IrvWrite_PokeASLR_e_Hill_Des_Status_Hill_Des_St_Init_write_IRV
        (LeASLR_e_Hill_Des_Status);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_e_Hill_Des_Status' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ASLR_3

FUNC(void, ASLR_CODE) PokeASLR_e_TSRSts(VAR(TeASLR_e_TSRSts, AUTOMATIC)
    LeASLR_e_TSRSts)
{

#if !Rte_SysCon_Variant_ASLR_3

    UNUSED_PARAMETER(LeASLR_e_TSRSts);

#endif

#if Rte_SysCon_Variant_ASLR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeASLR_e_TSRSts' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S18>/PokeASLR_e_TSRStsChrt'
     *  SignalConversion generated from: '<S18>/VeASLR_b_TSRSts_FA_Rst_write'
     */
    /* Gateway: PokeASLR_e_TSRSts/PokeASLR_e_TSRStsChrt */
    /* During: PokeASLR_e_TSRSts/PokeASLR_e_TSRStsChrt */
    /* Entry Internal: PokeASLR_e_TSRSts/PokeASLR_e_TSRStsChrt */
    /* Transition: '<S629>:2' */
    Rte_IrvWrite_PokeASLR_e_TSRSts_TSRStsFA_Init_write_IRV(false);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S18>/LeASLR_e_TSRSts'
     *  SignalConversion generated from: '<S18>/VeASLR_e_TSRSts_write'
     */
    Rte_IrvWrite_PokeASLR_e_TSRSts_TSRSts_write_IRV(LeASLR_e_TSRSts);

    /* End of Outputs for SubSystem: '<Root>/PokeASLR_e_TSRSts' */
#endif

}

#endif

/* Output function */
FUNC(void, ASLR_CODE) ASLR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ASLR_PwrOff'
     */
    /* Outport: '<Root>/NeASLR_v_InitVehSpdLim_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeASLR_v_InitVehSpdLim'
     */
    (void)Rte_Write_NeASLR_v_InitVehSpdLim_NeASLR_v_InitVehSpdLim
        (ASLR_ac_DW.NeASLR_v_InitVehSpdLim);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, ASLR_CODE) ASLR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ASLR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S610>/AeASLR_v_STSLSpdLimMPH' incorporates:
     *  Inport: '<Root>/AeASLR_v_STSLSpdLimMPH_Strimm_In'
     */
    (void)Rte_Read_AeASLR_v_STSLSpdLimMPH_Rx_AeASLR_v_STSLSpdLimMPH
        ((&(AeASLR_v_STSLSpdLimMPH)));

    /* DataStoreWrite: '<S610>/NeASLR_v_InitVehSpdLim' incorporates:
     *  Inport: '<Root>/NeASLR_v_InitVehSpdLim_PM_In'
     */
    (void)Rte_Read_NeASLR_v_InitVehSpdLim_Rx_NeASLR_v_InitVehSpdLim
        (&ASLR_ac_DW.NeASLR_v_InitVehSpdLim);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ASLI_Poke_Fsft_Inits'
     */
    /* SignalConversion generated from: '<S609>/TSRSts' incorporates:
     *  Constant: '<S612>/Constant'
     */
    ASLR_ac_B.OutportBufferForTSRSts = ASLR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S609>/DisplayedSpeedLimSts' */
    ASLR_ac_B.OutportBufferForDisplayedSpeedLimSts = 0;

    /* SignalConversion generated from: '<S609>/SpeedLimiterOnOffSts' */
    ASLR_ac_B.OutportBufferForSpeedLimiterOnOffSts_a = false;

    /* SignalConversion generated from: '<S609>/SignCaptureMode' */
    ASLR_ac_B.OutportBufferForSignCaptureMode = false;

    /* SignalConversion generated from: '<S609>/SpeedLimiterOnOffStsFA' */
    ASLR_ac_B.OutportBufferForSpeedLimiterOnOffStsFA = false;

    /* SignalConversion generated from: '<S609>/LaneCenteringOnOffSts' */
    ASLR_ac_B.OutportBufferForLaneCenteringOnOffSts = false;

    /* SignalConversion generated from: '<S609>/LaneCenteringOnOffStsFA' */
    ASLR_ac_B.OutportBufferForLaneCenteringOnOffStsFA = false;

    /* SignalConversion generated from: '<S609>/TSR_Req' */
    ASLR_ac_B.OutportBufferForTSR_Req = false;

    /* SignalConversion generated from: '<S609>/Hill_Des_St_Init' incorporates:
     *  Constant: '<S613>/Constant'
     */
    ASLR_ac_B.OutportBufferForHill_Des_St_Init = ASLR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S609>/HDC_FA_Init' */
    ASLR_ac_B.OutportBufferForHDC_FA_Init = false;

    /* SignalConversion generated from: '<S609>/TSRStsFA_Init' */
    ASLR_ac_B.OutportBufferForTSRStsFA_Init = false;

    /* SignalConversion generated from: '<S609>/DsplydSpdLimStsFA_Init' */
    ASLR_ac_B.OutportBufferForDsplydSpdLimStsFA_Init = false;

    /* SignalConversion generated from: '<S609>/RRCCSW_Init' */
    ASLR_ac_B.OutportBufferForRRCCSW_Init = 0;

    /* SignalConversion generated from: '<S609>/RRCCSW_FA_Init' */
    ASLR_ac_B.OutportBufferForRRCCSW_FA_Init = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/OutputStubs'
     */
    /* SignalConversion generated from: '<S611>/SetVehSpdLimKPH' */
    ASLR_ac_B.OutportBufferForSetVehSpdLimKPH = 0.0F;

    /* SignalConversion generated from: '<S611>/SpdLimStsforCAN' */
    ASLR_ac_B.OutportBufferForSpdLimStsforCAN = 0U;

    /* SignalConversion generated from: '<S611>/ISASts' */
    ASLR_ac_B.OutportBufferForISASts = false;

    /* SignalConversion generated from: '<S611>/ASL_Enabled' */
    ASLR_ac_B.OutportBufferForASL_Enabled = false;

    /* SignalConversion generated from: '<S611>/TSR_ClusterWarnings' */
    ASLR_ac_B.OutportBufferForTSR_ClusterWarnings = 0U;

    /* SignalConversion generated from: '<S611>/SetVehSpdLimMPH' */
    ASLR_ac_B.OutportBufferForSetVehSpdLimMPH = 0.0F;

    /* SignalConversion generated from: '<S611>/KickdownSts' */
    ASLR_ac_B.OutportBufferForKickdownSts = 0U;

    /* SignalConversion generated from: '<S611>/SpeedLimiterOnOffSts' */
    ASLR_ac_B.OutportBufferForSpeedLimiterOnOffSts = false;

    /* SignalConversion generated from: '<S611>/ASLorACCorHASSwStuck' */
    ASLR_ac_B.OutportBufferForASLorACCorHASSwStuck = false;

    /* SignalConversion generated from: '<S611>/PIDTrq' */
    ASLR_ac_B.OutportBufferForPIDTrq = 9999.0F;

    /* SignalConversion generated from: '<S611>/ASL_Active' */
    ASLR_ac_B.OutportBufferForASL_Active = false;

    /* SignalConversion generated from: '<S611>/HDCSts' incorporates:
     *  Constant: '<S614>/Constant'
     */
    ASLR_ac_B.OutportBufferForHDCSts = ASLR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S611>/ST_InfoAct' */
    ASLR_ac_B.OutportBufferForST_InfoAct = false;

    /* SignalConversion generated from: '<S611>/STLimKPH' */
    ASLR_ac_B.OutportBufferForSTLimKPH = 0.0F;

    /* SignalConversion generated from: '<S611>/STLimMPH' */
    ASLR_ac_B.OutportBufferForSTLimMPH = 0.0F;

    /* SignalConversion generated from: '<S611>/TSRDispSpdClpd' */
    ASLR_ac_B.OutportBufferForTSRDispSpdClpd = 0.0F;

    /* SignalConversion generated from: '<S611>/DrvMdTurtleMdSpdLim' */
    ASLR_ac_B.OutportBufferForDrvMdTurtleMdSpdLim = 0.0F;

    /* SignalConversion generated from: '<S611>/TSRReady' */
    ASLR_ac_B.OutportBufferForTSRReady = false;

    /* SignalConversion generated from: '<S611>/HomSpdLimEnable' */
    ASLR_ac_B.OutportBufferForHomSpdLimEnable = false;

    /* SignalConversion generated from: '<S611>/STSpdLimEnable' */
    ASLR_ac_B.OutportBufferForSTSpdLimEnable = false;

    /* SignalConversion generated from: '<S611>/STSpdLimKPH' */
    ASLR_ac_B.OutportBufferForSTSpdLimKPH = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeASLR_b_ASLActive' incorporates:
     *  SignalConversion generated from: '<S3>/ASL_Active'
     */
    (void)Rte_Write_VeASLR_b_ASLActive_Value
        (ASLR_ac_B.OutportBufferForASL_Active);

    /* Outport: '<Root>/VeASLR_b_ASLEnabled' incorporates:
     *  SignalConversion generated from: '<S3>/ASL_Enabled'
     */
    (void)Rte_Write_VeASLR_b_ASLEnabled_Value
        (ASLR_ac_B.OutportBufferForASL_Enabled);

    /* Outport: '<Root>/VeASLR_b_ASLorACCorHASSwStuck' incorporates:
     *  SignalConversion generated from: '<S3>/ASLorACCorHASSwStuck'
     */
    (void)Rte_Write_VeASLR_b_ASLorACCorHASSwStuck_Value
        (ASLR_ac_B.OutportBufferForASLorACCorHASSwStuck);

    /* Outport: '<Root>/VeASLR_v_DrvMdTurtleMdSpdLim' incorporates:
     *  SignalConversion generated from: '<S3>/DrvMdTurtleMdSpdLim'
     */
    (void)Rte_Write_VeASLR_v_DrvMdTurtleMdSpdLim_Value
        (ASLR_ac_B.OutportBufferForDrvMdTurtleMdSpdLim);

    /* Outport: '<Root>/VeASLR_e_HDC_Status' incorporates:
     *  SignalConversion generated from: '<S3>/HDCSts'
     *  SignalConversion generated from: '<S611>/HDCSts'
     */
    (void)Rte_Write_VeASLR_e_HDC_Status_Value(ASLR_ac_B.OutportBufferForHDCSts);

    /* Outport: '<Root>/VeASLR_b_HomSpdLimEnabled' incorporates:
     *  SignalConversion generated from: '<S3>/HomSpdLimEnable'
     */
    (void)Rte_Write_VeASLR_b_HomSpdLimEnabled_Value
        (ASLR_ac_B.OutportBufferForHomSpdLimEnable);

    /* Outport: '<Root>/VeASLR_b_ISASts' incorporates:
     *  SignalConversion generated from: '<S3>/ISASts'
     */
    (void)Rte_Write_VeASLR_b_ISASts_Value(ASLR_ac_B.OutportBufferForISASts);

    /* Outport: '<Root>/VeASLR_e_DrvMdOvrrdKickdownSt' incorporates:
     *  SignalConversion generated from: '<S3>/KickdownSts'
     */
    (void)Rte_Write_VeASLR_e_DrvMdOvrrdKickdownSt_Value
        (ASLR_ac_B.OutportBufferForKickdownSts);

    /* Outport: '<Root>/VeASLR_b_SpdLmtrOnOffSts' incorporates:
     *  SignalConversion generated from: '<S3>/OutputStubs__SpeedLimiterOnOffSts'
     */
    (void)Rte_Write_VeASLR_b_SpdLmtrOnOffSts_Value
        (ASLR_ac_B.OutportBufferForSpeedLimiterOnOffSts);

    /* Outport: '<Root>/VeASLR_M_PIDTrq' incorporates:
     *  SignalConversion generated from: '<S3>/PIDTrq'
     */
    (void)Rte_Write_VeASLR_M_PIDTrq_Value(ASLR_ac_B.OutportBufferForPIDTrq);

    /* Outport: '<Root>/VeASLR_v_STSLSpdLimKPH' incorporates:
     *  SignalConversion generated from: '<S3>/STLimKPH'
     */
    (void)Rte_Write_VeASLR_v_STSLSpdLimKPH_Value
        (ASLR_ac_B.OutportBufferForSTLimKPH);

    /* Outport: '<Root>/VeASLR_v_STSLSpdLimMPH' incorporates:
     *  SignalConversion generated from: '<S3>/STLimMPH'
     */
    (void)Rte_Write_VeASLR_v_STSLSpdLimMPH_Value
        (ASLR_ac_B.OutportBufferForSTLimMPH);

    /* Outport: '<Root>/VeASLR_b_STSpdLimEnabled' incorporates:
     *  SignalConversion generated from: '<S3>/STSpdLimEnable'
     */
    (void)Rte_Write_VeASLR_b_STSpdLimEnabled_Value
        (ASLR_ac_B.OutportBufferForSTSpdLimEnable);

    /* Outport: '<Root>/VeASLR_v_STSpdLim' incorporates:
     *  SignalConversion generated from: '<S3>/STSpdLimKPH'
     */
    (void)Rte_Write_VeASLR_v_STSpdLim_Value
        (ASLR_ac_B.OutportBufferForSTSpdLimKPH);

    /* Outport: '<Root>/VeASLR_b_STSLSpdInfoAct' incorporates:
     *  SignalConversion generated from: '<S3>/ST_InfoAct'
     */
    (void)Rte_Write_VeASLR_b_STSLSpdInfoAct_Value
        (ASLR_ac_B.OutportBufferForST_InfoAct);

    /* Outport: '<Root>/VeASLR_v_SetVehSpdLimKPH' incorporates:
     *  SignalConversion generated from: '<S3>/SetVehSpdLimKPH'
     */
    (void)Rte_Write_VeASLR_v_SetVehSpdLimKPH_Value
        (ASLR_ac_B.OutportBufferForSetVehSpdLimKPH);

    /* Outport: '<Root>/VeASLR_v_SetVehSpdLimMPH' incorporates:
     *  SignalConversion generated from: '<S3>/SetVehSpdLimMPH'
     */
    (void)Rte_Write_VeASLR_v_SetVehSpdLimMPH_Value
        (ASLR_ac_B.OutportBufferForSetVehSpdLimMPH);

    /* Outport: '<Root>/VeASLR_e_SpdLmtSts' incorporates:
     *  SignalConversion generated from: '<S3>/SpdLimStsforCAN'
     */
    (void)Rte_Write_VeASLR_e_SpdLmtSts_Value
        (ASLR_ac_B.OutportBufferForSpdLimStsforCAN);

    /* Outport: '<Root>/VeASLR_v_TSRDispSpdLimClpd' incorporates:
     *  SignalConversion generated from: '<S3>/TSRDispSpdClpd'
     */
    (void)Rte_Write_VeASLR_v_TSRDispSpdLimClpd_Value
        (ASLR_ac_B.OutportBufferForTSRDispSpdClpd);

    /* Outport: '<Root>/VeASLR_b_TSRReady' incorporates:
     *  SignalConversion generated from: '<S3>/TSRReady'
     */
    (void)Rte_Write_VeASLR_b_TSRReady_Value(ASLR_ac_B.OutportBufferForTSRReady);

    /* Outport: '<Root>/VeASLR_e_TSRClusterWarnings' incorporates:
     *  SignalConversion generated from: '<S3>/TSR_ClusterWarnings'
     */
    (void)Rte_Write_VeASLR_e_TSRClusterWarnings_Value
        (ASLR_ac_B.OutportBufferForTSR_ClusterWarnings);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/OutputStubs'
     */
    /* Outport: '<Root>/VeASLR_v_TurtleMdSpdLim' incorporates:
     *  Constant: '<S611>/Constant Value18'
     *  SignalConversion generated from: '<S3>/TurtleMdSpdLim'
     */
    (void)Rte_Write_VeASLR_v_TurtleMdSpdLim_Value(0.0F);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S3>/DisplayedSpeedLimSts_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_DisplayedSpeedLimSts_write_IRV
        (ASLR_ac_B.OutportBufferForDisplayedSpeedLimSts);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S3>/DsplydSpdLimStsFA_Init_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_DsplydSpdLimStsFA_Init_write_IRV
        (ASLR_ac_B.OutportBufferForDsplydSpdLimStsFA_Init);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S3>/HDC_FA_Init_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_HDC_FA_Init_write_IRV
        (ASLR_ac_B.OutportBufferForHDC_FA_Init);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S3>/Hill_Des_St_Init_write'
     *  SignalConversion generated from: '<S609>/Hill_Des_St_Init'
     * */
    Rte_IrvWrite_ASLR_PwrOn_Hill_Des_St_Init_write_IRV
        (ASLR_ac_B.OutportBufferForHill_Des_St_Init);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S3>/LaneCenteringOnOffStsFA_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_LaneCenteringOnOffStsFA_write_IRV
        (ASLR_ac_B.OutportBufferForLaneCenteringOnOffStsFA);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S3>/LaneCenteringOnOffSts_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_LaneCenteringOnOffSts_write_IRV
        (ASLR_ac_B.OutportBufferForLaneCenteringOnOffSts);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S3>/RRCCSW_FA_Init_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_RRCCSW_FA_Init_write_IRV
        (ASLR_ac_B.OutportBufferForRRCCSW_FA_Init);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S3>/RRCCSW_Init_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_RRCCSW_Init_write_IRV
        (ASLR_ac_B.OutportBufferForRRCCSW_Init);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S3>/SignCaptureMode_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_SignCaptureMode_write_IRV
        (ASLR_ac_B.OutportBufferForSignCaptureMode);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S3>/SpeedLimiterOnOffStsFA_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_SpeedLimiterOnOffStsFA_write_IRV
        (ASLR_ac_B.OutportBufferForSpeedLimiterOnOffStsFA);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S3>/SpeedLimiterOnOffSts_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_SpeedLimiterOnOffSts_write_IRV
        (ASLR_ac_B.OutportBufferForSpeedLimiterOnOffSts_a);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S3>/TSRStsFA_Init_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_TSRStsFA_Init_write_IRV
        (ASLR_ac_B.OutportBufferForTSRStsFA_Init);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S3>/TSRSts_write'
     *  SignalConversion generated from: '<S609>/TSRSts'
     * */
    Rte_IrvWrite_ASLR_PwrOn_TSRSts_write_IRV(ASLR_ac_B.OutportBufferForTSRSts);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S3>/TSR_Req_write'
     * */
    Rte_IrvWrite_ASLR_PwrOn_TSR_Req_write_IRV(ASLR_ac_B.OutportBufferForTSR_Req);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ASLR_CODE) ASLR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
#if Rte_SysCon_Variant_ASLR_3

    VeASLR_e_Lv1PVMode = CeAPSR_e_LV1PVMode_NotValid;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ASLR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ASLI_Poke_Fsft_Inits'
     */
    /* SystemInitialize for SignalConversion generated from: '<S609>/TSRSts' incorporates:
     *  Constant: '<S612>/Constant'
     */
    ASLR_ac_B.OutportBufferForTSRSts = ASLR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S609>/Hill_Des_St_Init' incorporates:
     *  Constant: '<S613>/Constant'
     */
    ASLR_ac_B.OutportBufferForHill_Des_St_Init = ASLR_ac_ConstB.Constant_g;

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/OutputStubs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S611>/PIDTrq' */
    ASLR_ac_B.OutportBufferForPIDTrq = 9999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S611>/HDCSts' incorporates:
     *  Constant: '<S614>/Constant'
     */
    ASLR_ac_B.OutportBufferForHDCSts = ASLR_ac_ConstB.Constant_e;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_ASLR_3

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/ASLR_MedTEB' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ASLI_Inputs'
     */
    /* SystemInitialize for Switch: '<S21>/Switch22' incorporates:
     *  Inport: '<Root>/VeAPSR_e_Lv1PVMode'
     *  Outport: '<S21>/VeASLR_e_Lv1PVMode'
     */
    VeASLR_e_Lv1PVMode = CeAPSR_e_LV1PVMode_NotValid;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/ASLR_MedTEB' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeASLR_e_HDC_Status' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeASLR_e_HDC_Status_Value(CeASLR_e_HDC_UNAVL);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
