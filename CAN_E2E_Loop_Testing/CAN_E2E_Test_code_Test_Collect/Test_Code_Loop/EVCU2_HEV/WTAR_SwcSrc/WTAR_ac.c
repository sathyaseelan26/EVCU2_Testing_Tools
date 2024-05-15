/*
 * File: WTAR_ac.c
 *
 * Code generated for Simulink model 'WTAR_ac'.
 *
 * Model version                  : 9.323
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:12:40 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "WTAR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"
#include "look2_iu8flftf_binlcapw.h"

/* Named constants for Chart: '<S312>/Pre_Load_Arbitration' */
#define WTAR_ac_IN_BuildAndArm         ((uint8)1U)
#define WTAR_ac_IN_Complete            ((uint8)2U)
#define WTAR_ac_IN_DeadPedal           ((uint8)3U)
#define WTAR_ac_IN_Enabled             ((uint8)4U)
#define WTAR_ac_IN_Initializing        ((uint8)5U)
#define WTAR_ac_IN_Off                 ((uint8)6U)
#define WTAR_ac_IN_Triggered           ((uint8)7U)

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_WTAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, WTAR_VAR_INIT) HaWTAR_k_PRNDCoeff_Drv[3] =
{
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S262>/Calib' */

static volatile CONST(float32, WTAR_VAR_INIT) HaWTAR_k_PRNDCoeff_PN[3] =
{
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S263>/Calib' */

static volatile CONST(float32, WTAR_VAR_INIT) HaWTAR_k_PRNDCoeff_Rev[3] =
{
    -1.0F, -1.0F, -1.0F
} ;                                    /* Referenced by: '<S264>/Calib' */

static volatile CONST(float32, WTAR_VAR_INIT) HeWTAR_M_TactToMaxOvrdVal_C =
    99999.0F;                          /* Referenced by: '<S1465>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) HeWTAR_b_OvrdTactToMaxOvrd_C = 1;/* Referenced by: '<S1466>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) HeWTAR_b_SignConvEna = 1;/* Referenced by:
                                                                      * '<S256>/Calib'
                                                                      * '<S374>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) HeWTAR_b_ToCLFast_InLash = 0;/* Referenced by:
                                                                      * '<S915>/Calib'
                                                                      * '<S1078>/Calib'
                                                                      * '<S1237>/Calib'
                                                                      * '<S1395>/Calib'
                                                                      */
static volatile CONST(sint16, WTAR_VAR_INIT) HeWTAR_i_PRNDLTyp_C = 3;/* Referenced by: '<S270>/Calib' */

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(uint8, WTAR_VAR_INIT) KaWTAR_i_KtKdSelc_4HiMap[60] =
{
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 2U, 3U, 1U, 2U, 3U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U
} ;                                    /* Referenced by: '<S518>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(uint8, WTAR_VAR_INIT) KaWTAR_i_KtKdSelc_4LoMap[60] =
{
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 3U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U
} ;                                    /* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_10

static volatile CONST(uint8, WTAR_VAR_INIT) KaWTAR_i_KtKdSelc_BEV_Map[60] =
{
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 3U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U
} ;                                    /* Referenced by: '<S464>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_10 && !Rte_SysCon_Variant_WTAR_4

static volatile CONST(uint8, WTAR_VAR_INIT) KaWTAR_i_KtKdSelc_M182[16] =
{
    1U, 1U, 2U, 1U, 3U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 4U, 1U
} ;                                    /* Referenced by: '<S466>/Calib' */

#endif

static volatile CONST(uint16, WTAR_VAR_INIT) KaWTAR_k_NtiIndex[13] =
{
    0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 8U, 8U, 8U, 8U
} ;                                    /* Referenced by: '<S390>/Calib' */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KaWTAR_scl_ParkRattleFactor[29] =
{
    0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S756>/Calib' */

#endif

static volatile CONST(uint16, WTAR_VAR_INIT) KeWTAR_Cnt_OvrRevPtn_ActIniDly =
    100U;                              /* Referenced by: '<S625>/Calib' */
static volatile CONST(uint16, WTAR_VAR_INIT) KeWTAR_Cnt_TorqLongTimer = 3U;/* Referenced by:
                                                                      * '<S856>/Calib'
                                                                      * '<S1026>/Calib'
                                                                      * '<S1185>/Calib'
                                                                      * '<S1343>/Calib'
                                                                      */
static volatile CONST(uint16, WTAR_VAR_INIT) KeWTAR_Cnt_TorqShortTimer = 2U;/* Referenced by:
                                                                      * '<S857>/Calib'
                                                                      * '<S1027>/Calib'
                                                                      * '<S1186>/Calib'
                                                                      * '<S1344>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ASL_BldOfst = 0.0F;/* Referenced by: '<S335>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_AeC_KDKTMultThrhd = 1.0F;/* Referenced by: '<S453>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_AeCoastActive_LSP = 2.5F;/* Referenced by: '<S798>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_AeCoastActive_RSP = 5.0F;/* Referenced by: '<S799>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_AxleTrqPotential = 0.0F;/* Referenced by: '<S1467>/Calib' */

#if Rte_SysCon_Variant_WTAR_9

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_AxleTrq_xDMPI_SNAOvrd =
    0.0F;                              /* Referenced by: '<S399>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_BrkTrqRed_ToNet_LD =
    -1000.0F;                          /* Referenced by: '<S813>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_BrkTrqRed_ToNet_LU =
    1000.0F;                           /* Referenced by: '<S814>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_CmndPrdtAxleTorq = 0.0F;/* Referenced by: '<S1468>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_CurbClimbingBreakCheck =
    40.0F;                             /* Referenced by:
                                        * '<S831>/Calib'
                                        * '<S1001>/Calib'
                                        * '<S1160>/Calib'
                                        * '<S1318>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_M_CurbClimbing_TorqRecoverThrsh = 20.0F;/* Referenced by:
                                                    * '<S832>/Calib'
                                                    * '<S1002>/Calib'
                                                    * '<S1161>/Calib'
                                                    * '<S1319>/Calib'
                                                    */

#if Rte_SysCon_Variant_WTAR_9

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_DMPI_TgtOffset = 10.0F;/* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_DTCM_DeltaTrq4Blnd = 1.0F;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_DTCM_TrqReq_MinLim = 5.0F;/* Referenced by: '<S424>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_M_DrvIntndTotBrkTorq_ImpndSkid = 20.0F;/* Referenced by: '<S98>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_DrvrIntndedAxleTorqRaw =
    0.0F;                              /* Referenced by: '<S1469>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ESC_DeltaTrq4Blnd = 1.0F;/* Referenced by: '<S375>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_FrmNegRtLimTrqThresh =
    0.0F;                              /* Referenced by:
                                        * '<S920>/Calib'
                                        * '<S1083>/Calib'
                                        * '<S1242>/Calib'
                                        * '<S1400>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_FrmPosRtLimTrqThresh =
    -20.0F;                            /* Referenced by:
                                        * '<S921>/Calib'
                                        * '<S1084>/Calib'
                                        * '<S1243>/Calib'
                                        * '<S1401>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ImpndSkidFiltOff = 5.0F;/* Referenced by: '<S69>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ItermLimit = 100000.0F;/* Referenced by:
                                                                      * '<S550>/Calib'
                                                                      * '<S557>/Calib'
                                                                      * '<S564>/Calib'
                                                                      * '<S571>/Calib'
                                                                      * '<S578>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ItermSpdPrtn_OvrdVal =
    9999.0F;                           /* Referenced by: '<S546>/Calib' */

#if !Rte_SysCon_Variant_WTAR_1

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_MGateMinLD = -10000.0F;/* Referenced by: '<S226>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_1

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_MGateMinLU = 10000.0F;/* Referenced by: '<S227>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_MinBrkTrq_ToNet = 5000.0F;/* Referenced by: '<S815>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_M_MinTorq_4ThermalProtection = 400.0F;/* Referenced by: '<S184>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_NegLashTrqThresh = 150.0F;/* Referenced by:
                                                                      * '<S922>/Calib'
                                                                      * '<S1085>/Calib'
                                                                      * '<S1244>/Calib'
                                                                      * '<S1402>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_NormalMin_OvrdVal = 0.0F;/* Referenced by: '<S1470>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_OPDActiveThrhd = 0.25F;/* Referenced by: '<S243>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_OPD_TrqDiffExit = 2.5F;/* Referenced by: '<S800>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_OvrRev_MaxTrq_Ofst = 0.0F;/* Referenced by: '<S543>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_OvrRev_MinTrq_Ofst = 0.0F;/* Referenced by: '<S544>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_PosLashTrqThresh = -30.0F;/* Referenced by:
                                                                      * '<S923>/Calib'
                                                                      * '<S1086>/Calib'
                                                                      * '<S1245>/Calib'
                                                                      * '<S1403>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_PreLoadTrqMax = 1000.0F;/* Referenced by: '<S700>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_PreLoad_FinalDrvTrqReq =
    300.0F;                            /* Referenced by: '<S701>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_PtermSpdPrtn_OvrdVal =
    9999.0F;                           /* Referenced by: '<S654>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_Resp_HystNeg = -100.0F;/* Referenced by:
                                                                      * '<S956>/Calib'
                                                                      * '<S1120>/Calib'
                                                                      * '<S1278>/Calib'
                                                                      * '<S1436>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_Resp_HystPos = 100.0F;/* Referenced by:
                                                                      * '<S957>/Calib'
                                                                      * '<S1121>/Calib'
                                                                      * '<S1279>/Calib'
                                                                      * '<S1437>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_SumMaxTrqDsrd = 0.0F;/* Referenced by: '<S1471>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ToMin_BrkTrqRdct =
    5000.0F;                           /* Referenced by: '<S816>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ToReq_SOCAdj_LD =
    -2500.0F;                          /* Referenced by: '<S152>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ToReq_SOCAdj_LU = 2500.0F;/* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_M_ToTactMinOffset_HiSOCToRed = 0.0F;/* Referenced by: '<S154>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ToTgtOffset = 10.0F;/* Referenced by: '<S685>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ToTgtOffsetR = -10.0F;/* Referenced by: '<S686>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_M_TorqCompareforCurbClimbingD = 10.0F;/* Referenced by:
                                                  * '<S858>/Calib'
                                                  * '<S1028>/Calib'
                                                  * '<S1187>/Calib'
                                                  * '<S1345>/Calib'
                                                  */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_M_TorqCompareforCurbClimbingR = -10.0F;/* Referenced by:
                                                   * '<S859>/Calib'
                                                   * '<S1029>/Calib'
                                                   * '<S1188>/Calib'
                                                   * '<S1346>/Calib'
                                                   */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_TorqReduceCurbClimbingD =
    1500.0F;                           /* Referenced by:
                                        * '<S860>/Calib'
                                        * '<S1030>/Calib'
                                        * '<S1189>/Calib'
                                        * '<S1347>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_TorqReduceCurbClimbingR =
    1500.0F;                           /* Referenced by:
                                        * '<S861>/Calib'
                                        * '<S1031>/Calib'
                                        * '<S1190>/Calib'
                                        * '<S1348>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_TorqueReductionSkidMin =
    0.0F;                              /* Referenced by:
                                        * '<S70>/Calib'
                                        * '<S109>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_TrqThshd_CreepRst = 2.0F;/* Referenced by: '<S391>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_TrqThshd_CreepRstWheel =
    2.0F;                              /* Referenced by: '<S392>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_M_ZeroPedalAxlTorqFiltd =
    0.0F;                              /* Referenced by: '<S1472>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_AccPedThshd_CreepDsb =
    0.1F;                              /* Referenced by: '<S393>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_AccPedThshd_CreepRst =
    0.1F;                              /* Referenced by: '<S394>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_AccelEffPosition = 0.0F;/* Referenced by: '<S1473>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_Pct_CurbClimbingGradeCheckLSP = 15.0F;/* Referenced by:
                                                  * '<S833>/Calib'
                                                  * '<S1003>/Calib'
                                                  * '<S1162>/Calib'
                                                  * '<S1320>/Calib'
                                                  */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_Pct_CurbClimbingGradeCheckRSP = 20.0F;/* Referenced by:
                                                  * '<S834>/Calib'
                                                  * '<S1004>/Calib'
                                                  * '<S1163>/Calib'
                                                  * '<S1321>/Calib'
                                                  */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_CurbClimbingPedalCheck =
    0.95F;                             /* Referenced by:
                                        * '<S835>/Calib'
                                        * '<S1005>/Calib'
                                        * '<S1164>/Calib'
                                        * '<S1322>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_HVBatSOCLim = 70.0F;/* Referenced by: '<S702>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_HV_BatSOC = 0.0F;/* Referenced by: '<S1474>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_HV_SOC_ChrgAdj_LSP =
    99.0F;                             /* Referenced by: '<S155>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_HV_SOC_ChrgAdj_RSP =
    99.9F;                             /* Referenced by: '<S156>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_MaxPdl_ZeroPedal = 2.0F;/* Referenced by:
                                                                      * '<S924>/Calib'
                                                                      * '<S1087>/Calib'
                                                                      * '<S1246>/Calib'
                                                                      * '<S1404>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_Pct_PreLoadBuild_PedalPosnThrsld = 90.0F;/* Referenced by: '<S703>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_PreLoadPedalPosnLim =
    5.0F;                              /* Referenced by: '<S704>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_TipInThresh = 0.1F;/* Referenced by:
                                                                      * '<S892>/Calib'
                                                                      * '<S1056>/Calib'
                                                                      * '<S1215>/Calib'
                                                                      * '<S1373>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_Pct_TipOutThresh = -0.1F;/* Referenced by:
                                                                      * '<S893>/Calib'
                                                                      * '<S1057>/Calib'
                                                                      * '<S1216>/Calib'
                                                                      * '<S1374>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_T_CurbClimbing_InvrtrBTempCheck = 120.0F;/* Referenced by:
                                                     * '<S836>/Calib'
                                                     * '<S1006>/Calib'
                                                     * '<S1165>/Calib'
                                                     * '<S1323>/Calib'
                                                     */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_T_CurbClimbing_MtrBTempCheck = 120.0F;/* Referenced by:
                                                  * '<S837>/Calib'
                                                  * '<S1007>/Calib'
                                                  * '<S1166>/Calib'
                                                  * '<S1324>/Calib'
                                                  */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_InvATemp_LSP =
    9999.0F;                           /* Referenced by: '<S757>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_InvATemp_RSP =
    9999.0F;                           /* Referenced by: '<S758>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_InvBTemp_LSP =
    9999.0F;                           /* Referenced by: '<S759>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_InvBTemp_RSP =
    9999.0F;                           /* Referenced by: '<S760>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_MtrATemp_LSP =
    9999.0F;                           /* Referenced by: '<S761>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_MtrATemp_RSP =
    9999.0F;                           /* Referenced by: '<S762>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_MtrBTemp_LSP =
    9999.0F;                           /* Referenced by: '<S763>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_DsblParkTrq_MtrBTemp_RSP =
    9999.0F;                           /* Referenced by: '<S764>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_EngCltTmp = 0.0F;/* Referenced by: '<S1475>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_MtrA_Temp = 0.0F;/* Referenced by: '<S1476>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_MtrB_InvrtrTemp = 0.0F;/* Referenced by: '<S1477>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_MtrB_Temp = 0.0F;/* Referenced by: '<S1478>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_MtrC_Temp = 0.0F;/* Referenced by: '<S1479>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_PreLoadMtrTempLim =
    100.0F;                            /* Referenced by: '<S705>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_PreLoad_HVBattTempMaxLim =
    50.0F;                             /* Referenced by: '<S706>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_PreLoad_HVBattTempMinLim =
    4.0F;                              /* Referenced by: '<S707>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_TrnOilTemp = 0.0F;/* Referenced by: '<S1480>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_T_TrnsOilTempOvrrd = 50.0F;/* Referenced by: '<S519>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ASLR_Lim4OITR_Ena = 1;/* Referenced by: '<S327>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_AeCMinPRNDLOff = 1;/* Referenced by: '<S242>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ArbTrqSel4TTC = 1;/* Referenced by: '<S725>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT)
    KeWTAR_b_BrkPdl4ZeroPedalLash_enable = 0;/* Referenced by:
                                              * '<S925>/Calib'
                                              * '<S1088>/Calib'
                                              * '<S1247>/Calib'
                                              * '<S1405>/Calib'
                                              */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_CC_FilterRst_Dsbl = 0;/* Referenced by:
                                                                      * '<S991>/Calib'
                                                                      * '<S1151>/Calib'
                                                                      * '<S1309>/Calib'
                                                                      * '<S870>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_CreepMdC2LOCBrkPdlEnblr =
    0;                                 /* Referenced by: '<S25>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_D2NTrqCheckOn = 1;/* Referenced by: '<S250>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ESC_ArbDsbl = 1;/* Referenced by: '<S168>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ESC_PostShpng_ArbDsbl = 1;/* Referenced by: '<S376>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_EnableDforCurbClimbing =
    0;                                 /* Referenced by:
                                        * '<S838>/Calib'
                                        * '<S1008>/Calib'
                                        * '<S1167>/Calib'
                                        * '<S1325>/Calib'
                                        */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_EnableRforCurbClimbing =
    0;                                 /* Referenced by:
                                        * '<S839>/Calib'
                                        * '<S1009>/Calib'
                                        * '<S1168>/Calib'
                                        * '<S1326>/Calib'
                                        */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_EnblToDelayCushion = 1;/* Referenced by:
                                                                      * '<S878>/Calib'
                                                                      * '<S1042>/Calib'
                                                                      * '<S1201>/Calib'
                                                                      * '<S1359>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_FilCoeff_SrcSel = 1;/* Referenced by:
                                                                      * '<S958>/Calib'
                                                                      * '<S1122>/Calib'
                                                                      * '<S1280>/Calib'
                                                                      * '<S1438>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_FilLv2_En = 1;/* Referenced by: '<S871>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_FilLv2_En_Diff = 1;/* Referenced by: '<S992>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_FilLv2_En_Raw = 1;/* Referenced by: '<S1152>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_FilLv2_En_xSEM = 1;/* Referenced by: '<S1310>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_FilterTransInc_En = 1;/* Referenced by: '<S872>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ImpndSkid = 0;/* Referenced by: '<S1481>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ItermSpdPrtn_Ovrd = 1;/* Referenced by: '<S547>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_LashControlBypass_Diff =
    0;                                 /* Referenced by: '<S1089>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_MinPedalChngAeC = 1;/* Referenced by: '<S993>/Calib' */

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_MinPedalOff = 1;/* Referenced by: '<S370>/Calib' */

#endif

static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ModHH_FilterRst_Dsbl = 1;/* Referenced by:
                                                                      * '<S994>/Calib'
                                                                      * '<S1153>/Calib'
                                                                      * '<S1311>/Calib'
                                                                      * '<S986>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_NegPosLashEnabled = 0;/* Referenced by:
                                                                      * '<S926>/Calib'
                                                                      * '<S1090>/Calib'
                                                                      * '<S1248>/Calib'
                                                                      * '<S1406>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_NormalMinPRNDLOff = 1;/* Referenced by: '<S234>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_NormalMin_Ovrd = 0;/* Referenced by: '<S1482>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OPD_TrqDiffOvrd = 0;/* Referenced by: '<S801>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OffWheelBasedInR = 1;/* Referenced by:
                                                                      * '<S241>/Calib'
                                                                      * '<S371>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OpenMinPedalCnstr = 1;/* Referenced by: '<S237>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT)
    KeWTAR_b_OpenMinPedalCnstrMainFilter = 0;/* Referenced by: '<S238>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OpenMinPedalCnstr_Diff =
    1;                                 /* Referenced by: '<S239>/Calib' */

#if !Rte_SysCon_Variant_WTAR_1

static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrRevMinBypass = 0;/* Referenced by: '<S228>/Calib' */

#endif

static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdAccelEffPosition = 0;/* Referenced by: '<S1483>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdAxleRatio = 1;/* Referenced by: '<S1484>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdAxleTrqPotential = 0;/* Referenced by: '<S1485>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdBarPrsAbs = 0;/* Referenced by: '<S1486>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdCmndPrdtAxleTorq = 0;/* Referenced by: '<S1487>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT)
    KeWTAR_b_OvrdDrvrIntndedAxleTorqRaw = 0;/* Referenced by: '<S1488>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdEngCltTmp = 0;/* Referenced by: '<S1489>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdHV_BatSOC = 0;/* Referenced by: '<S1490>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdImpndSkid = 0;/* Referenced by: '<S1491>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdMtrA_Temp = 0;/* Referenced by: '<S1492>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdMtrB_InvrtrTemp = 0;/* Referenced by: '<S1493>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdMtrB_Temp = 0;/* Referenced by: '<S1494>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdMtrC_Temp = 0;/* Referenced by: '<S1495>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdSumMaxTrqDsrd = 0;/* Referenced by: '<S1496>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdTCaseRatio = 1;/* Referenced by: '<S1497>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdTrnOilTemp = 0;/* Referenced by: '<S1498>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_OvrdZeroPedalAxlTorqFiltd
    = 0;                               /* Referenced by: '<S1499>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_PRNDLActByPass = 0;/* Referenced by: '<S288>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_PrdtxSEM_SrcSel = 1;/* Referenced by: '<S258>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_PreLoadOvrdVal = 1;/* Referenced by: '<S708>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_PtermSpdPrtn_Ovrd = 1;/* Referenced by: '<S655>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_R2NTrqCheckOn = 1;/* Referenced by: '<S244>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_RespInactOvrd = 1;/* Referenced by: '<S719>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_RespInactOvrdVal = 1;/* Referenced by: '<S720>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_TactLimMaxEna = 1;/* Referenced by: '<S726>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_TactLimMinEna = 1;/* Referenced by: '<S727>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_TrnsOilTempOvrrdEnbl = 0;/* Referenced by: '<S520>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_Typ1Max_Off = 1;/* Referenced by: '<S235>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_UseHADR_LashSt = 0;/* Referenced by:
                                                                      * '<S927>/Calib'
                                                                      * '<S1091>/Calib'
                                                                      * '<S1249>/Calib'
                                                                      * '<S1407>/Calib'
                                                                      */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_UseHCPPedalScalar = 0;/* Referenced by: '<S171>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_UseHillHold = 0;/* Referenced by: '<S37>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_UseImpendingSkidLgic = 0;/* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_UseMinCreepWheel = 1;/* Referenced by: '<S236>/Calib' */

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_UseNb_KDKT = 1;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_UseNturb_KDKT = 1;/* Referenced by: '<S455>/Calib' */

#endif

static volatile CONST(boolean, WTAR_VAR_INIT) KeWTAR_b_ZeroPedalLash_Enbl = 0;/* Referenced by:
                                                                      * '<S928>/Calib'
                                                                      * '<S1092>/Calib'
                                                                      * '<S1250>/Calib'
                                                                      * '<S1408>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_BypassLashLD_PstFil =
    -400.0F;                           /* Referenced by:
                                        * '<S935>/Calib'
                                        * '<S1100>/Calib'
                                        * '<S1258>/Calib'
                                        * '<S1416>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_BypassLashLU_PstFil =
    400.0F;                            /* Referenced by:
                                        * '<S936>/Calib'
                                        * '<S1101>/Calib'
                                        * '<S1259>/Calib'
                                        * '<S1417>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_CurbClimbing_RtLmtDrop_D
    = -10.0F;                          /* Referenced by:
                                        * '<S840>/Calib'
                                        * '<S1010>/Calib'
                                        * '<S1169>/Calib'
                                        * '<S1327>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_CurbClimbing_RtLmtDrop_R
    = -10.0F;                          /* Referenced by:
                                        * '<S841>/Calib'
                                        * '<S1011>/Calib'
                                        * '<S1170>/Calib'
                                        * '<S1328>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_CurbClimbing_RtLmtRise_D
    = 10.0F;                           /* Referenced by:
                                        * '<S842>/Calib'
                                        * '<S1012>/Calib'
                                        * '<S1171>/Calib'
                                        * '<S1329>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_CurbClimbing_RtLmtRise_R
    = 10.0F;                           /* Referenced by:
                                        * '<S843>/Calib'
                                        * '<S1013>/Calib'
                                        * '<S1172>/Calib'
                                        * '<S1330>/Calib'
                                        */

#if Rte_SysCon_Variant_WTAR_9

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_DMPI_BlendRate = 10.0F;/* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_DTCM_RampInTrqRateLU =
    1.0F;                              /* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_DTCM_RampOutTrqRateLD =
    -1.0F;                             /* Referenced by: '<S426>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_ESC_RampInTrqRateLU =
    1.0F;                              /* Referenced by: '<S377>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_ESC_RampOutTrqRateLD =
    -1.0F;                             /* Referenced by: '<S378>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_OutTorqCmndTactic_LoLmt =
    -1000.0F;                          /* Referenced by: '<S738>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_ThermalProtectionTorq_LD
    = -5.0F;                           /* Referenced by: '<S185>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_ThermalProtectionTorq_LU
    = 5.0F;                            /* Referenced by: '<S186>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_TipInRtLimitHi = 1.0F;/* Referenced by:
                                                                      * '<S882>/Calib'
                                                                      * '<S1046>/Calib'
                                                                      * '<S1205>/Calib'
                                                                      * '<S1363>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dM_TipInRtLimitLo = 0.0F;/* Referenced by:
                                                                      * '<S883>/Calib'
                                                                      * '<S1047>/Calib'
                                                                      * '<S1206>/Calib'
                                                                      * '<S1364>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_dM_TorqueReductionSkidfct_DecLmt = -1.0F;/* Referenced by: '<S85>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_dM_TorqueReductionSkidfct_IncLmt = 1.0F;/* Referenced by: '<S86>/Calib' */
static volatile CONST(sint16, WTAR_VAR_INIT) KeWTAR_d_TCMLimpPRNDLCoeffMsk = 0;/* Referenced by: '<S282>/Calib' */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dscl_ParkRattleDecrRateLmt =
    -99.0F;                            /* Referenced by: '<S765>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_dscl_ParkRattleIncrRateLmt =
    0.1F;                              /* Referenced by: '<S766>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(uint16, WTAR_VAR_INIT) KeWTAR_g_TrqEnbInPark = 0U;/* Referenced by: '<S767>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_k_HillHoldOffsetFactorFilter = 0.01F;/* Referenced by: '<S49>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_HillHold_No_FiltCoef =
    0.05F;                             /* Referenced by: '<S43>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_KD_Neg_Fast = 0.0F;/* Referenced by:
                                                                      * '<S967>/Calib'
                                                                      * '<S1128>/Calib'
                                                                      * '<S1286>/Calib'
                                                                      * '<S1444>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_KD_Pos_Fast = 0.0F;/* Referenced by:
                                                                      * '<S973>/Calib'
                                                                      * '<S1134>/Calib'
                                                                      * '<S1292>/Calib'
                                                                      * '<S1450>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_KD_Trans = 0.0F;/* Referenced by: '<S965>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_KT_Neg_Fast = 0.0F;/* Referenced by:
                                                                      * '<S968>/Calib'
                                                                      * '<S1129>/Calib'
                                                                      * '<S1287>/Calib'
                                                                      * '<S1445>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_KT_Pos_Fast = 0.0F;/* Referenced by:
                                                                      * '<S974>/Calib'
                                                                      * '<S1135>/Calib'
                                                                      * '<S1293>/Calib'
                                                                      * '<S1451>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_KT_Trans = 0.0F;/* Referenced by: '<S966>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NegKDMult = 1.0F;/* Referenced by: '<S456>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NegKTMult = 1.0F;/* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NegLashFac_1 = 1.1F;/* Referenced by: '<S467>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NegLashFac_2 = 1.4F;/* Referenced by: '<S478>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NegLashFac_3 = 1.7F;/* Referenced by: '<S489>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NegLashFac_4 = 1.7F;/* Referenced by: '<S500>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NegLashFac_Launch = 1.6F;/* Referenced by: '<S507>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NotInLashFac_1 = 1.2F;/* Referenced by: '<S468>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NotInLashFac_2 = 1.5F;/* Referenced by: '<S479>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NotInLashFac_3 = 1.8F;/* Referenced by: '<S490>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NotInLashFac_4 = 1.8F;/* Referenced by: '<S501>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_NotInLashFac_Launch =
    1.0F;                              /* Referenced by: '<S508>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_OPDhillHold = 1.0F;/* Referenced by: '<S817>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_PosKDMult = 1.0F;/* Referenced by: '<S458>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_PosKTMult = 1.0F;/* Referenced by: '<S459>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_PosLashFac_1 = 1.0F;/* Referenced by: '<S469>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_PosLashFac_2 = 1.3F;/* Referenced by: '<S480>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_PosLashFac_3 = 1.6F;/* Referenced by: '<S491>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_PosLashFac_4 = 1.6F;/* Referenced by: '<S502>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_PosLashFac_Launch = 1.6F;/* Referenced by: '<S509>/Calib' */

#if Rte_SysCon_Variant_WTAR_7

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_k_TranIntkTrqFilGrad = 0.9F;/* Referenced by: '<S802>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_CurbClimbingSpeedCheck =
    10.0F;                             /* Referenced by:
                                        * '<S844>/Calib'
                                        * '<S1014>/Calib'
                                        * '<S1173>/Calib'
                                        * '<S1331>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_ItermOffset_Na = 0.0F;/* Referenced by: '<S551>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_ItermOffset_Nb = 0.0F;/* Referenced by: '<S558>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_ItermOffset_Ni = 0.0F;/* Referenced by: '<S565>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_ItermOffset_Npin = 0.0F;/* Referenced by: '<S572>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_ItermOffset_Nturb = 0.0F;/* Referenced by: '<S579>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_MaxNo_ZeroPdlLsh = 100.0F;/* Referenced by:
                                                                      * '<S929>/Calib'
                                                                      * '<S1093>/Calib'
                                                                      * '<S1251>/Calib'
                                                                      * '<S1409>/Calib'
                                                                      */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NaClipAct_OvrSpdLSPA =
    -300.0F;                           /* Referenced by: '<S605>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NaClipAct_OvrSpdLSPB =
    -300.0F;                           /* Referenced by: '<S606>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NaClipAct_OvrSpdRSP =
    -100.0F;                           /* Referenced by: '<S607>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NbClipAct_OvrSpdLSPA =
    -300.0F;                           /* Referenced by: '<S609>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NbClipAct_OvrSpdLSPB =
    -300.0F;                           /* Referenced by: '<S610>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NbClipAct_OvrSpdRSP =
    -100.0F;                           /* Referenced by: '<S611>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NiClipAct_OvrSpdLSPA =
    -300.0F;                           /* Referenced by: '<S613>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NiClipAct_OvrSpdLSPB =
    -300.0F;                           /* Referenced by: '<S614>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NiClipAct_OvrSpdRSP =
    -100.0F;                           /* Referenced by: '<S615>/Calib' */

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NpinClipAct_OvrSpdLSPA =
    -100.0F;                           /* Referenced by: '<S617>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NpinClipAct_OvrSpdLSPB =
    -100.0F;                           /* Referenced by: '<S618>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NpinClipAct_OvrSpdRSP =
    0.0F;                              /* Referenced by: '<S619>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NturbClipAct_OvrSpdLSPA =
    -300.0F;                           /* Referenced by: '<S622>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NturbClipAct_OvrSpdLSPB =
    -300.0F;                           /* Referenced by: '<S623>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_NturbClipAct_OvrSpdRSP =
    -100.0F;                           /* Referenced by: '<S624>/Calib' */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_OutTransSpdThrsh_Dsbl =
    28.0F;                             /* Referenced by: '<S768>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_n_OutTransSpdThrsh_Dsbl_EngOff = 9999.0F;/* Referenced by: '<S769>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_OvrRevUndSpdThrd =
    -400.0F;                           /* Referenced by: '<S639>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_n_PinionSpdLimit = 10800.0F;/* Referenced by: '<S593>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_p_BarPrsAbs = 0.0F;/* Referenced by: '<S1500>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_p_PreLoadBuild_BrkBoostThrsld = 10.0F;/* Referenced by: '<S709>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_p_PreLoadComplete_BrkBoostLwrLim = 1.0F;/* Referenced by: '<S710>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_p_PreLoadEna_BrkBoostThrsld
    = 1.0F;                            /* Referenced by: '<S711>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_p_PreLoadTrigger_BrkBoostThrsld = 5.0F;/* Referenced by: '<S712>/Calib' */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_phi_MtrBPosDiff = 340.0F;/* Referenced by: '<S770>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_phi_MtrBPostnThrsh_Dsbl =
    13.0F;                             /* Referenced by: '<S771>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_phi_PreLoad_SWangleMaxLim =
    190.0F;                            /* Referenced by: '<S713>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_AxleRatio = 1.0F;/* Referenced by: '<S1501>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_FltCoeff_Ni = 0.25F;/* Referenced by: '<S640>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_FltCoeff_TactMax = 0.5F;/* Referenced by:
                                                                      * '<S1038>/Calib'
                                                                      * '<S1197>/Calib'
                                                                      * '<S1355>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_NoFromNa_NbDep =
    0.338461548F;                      /* Referenced by: '<S772>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_NoFromNi_NbDep =
    1.35457873F;                       /* Referenced by: '<S773>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_PedalScalarPct2ToReq =
    10.0F;                             /* Referenced by: '<S178>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_RdcdPerfSclrRateLimMax =
    1.0F;                              /* Referenced by:
                                        * '<S120>/Calib'
                                        * '<S125>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_RdcdPerfSclrRateLimMin =
    -0.5F;                             /* Referenced by:
                                        * '<S121>/Calib'
                                        * '<S126>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_r_TCaseRatio = 1.0F;/* Referenced by: '<S1502>/Calib' */

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_scl_PinRedGear =
    3.29411769F;                       /* Referenced by: '<S628>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_scl_ToothPinion = 23.0F;/* Referenced by: '<S629>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_scl_ToothRing = 78.0F;/* Referenced by: '<S630>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_scl_ToothSun = 30.0F;/* Referenced by: '<S631>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_ASL_BldFac = 1.0F;/* Referenced by: '<S336>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_ASL_BldFacDsbl = 0.001F;/* Referenced by: '<S337>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_BrkAplyd_ZrPdLsh_Delay =
    0.5F;                              /* Referenced by:
                                        * '<S930>/Calib'
                                        * '<S1094>/Calib'
                                        * '<S1252>/Calib'
                                        * '<S1410>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_CurbClimbingTorqChkTime =
    5.0F;                              /* Referenced by:
                                        * '<S845>/Calib'
                                        * '<S1015>/Calib'
                                        * '<S1174>/Calib'
                                        * '<S1332>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_t_CurbClimbing_GradeUpdateDelay = 1.5F;/* Referenced by:
                                                   * '<S846>/Calib'
                                                   * '<S1016>/Calib'
                                                   * '<S1175>/Calib'
                                                   * '<S1333>/Calib'
                                                   */

#if Rte_SysCon_Variant_WTAR_1

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_DCTMinArbRamp = 1.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_WTAR_1

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_DCTMinArbRampHybrid2Ev =
    0.0F;                              /* Referenced by: '<S216>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_EstimFilterLagImmed_TipIn
    = 0.0875F;                         /* Referenced by:
                                        * '<S894>/Calib'
                                        * '<S1058>/Calib'
                                        * '<S1217>/Calib'
                                        * '<S1375>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT)
    KeWTAR_t_EstimFilterLagImmed_TipOut = 0.0875F;/* Referenced by:
                                                   * '<S895>/Calib'
                                                   * '<S1059>/Calib'
                                                   * '<S1218>/Calib'
                                                   * '<S1376>/Calib'
                                                   */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_EstimFilterLagPred_TipIn =
    0.0375F;                           /* Referenced by:
                                        * '<S896>/Calib'
                                        * '<S1060>/Calib'
                                        * '<S1219>/Calib'
                                        * '<S1377>/Calib'
                                        */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_EstimFilterLagPred_TipOut
    = 0.0375F;                         /* Referenced by:
                                        * '<S897>/Calib'
                                        * '<S1061>/Calib'
                                        * '<S1220>/Calib'
                                        * '<S1378>/Calib'
                                        */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_NoThrshDsblDelay = 0.5F;/* Referenced by: '<S774>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_PRNDLDrvActDly = 0.2F;/* Referenced by: '<S289>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_PRNDLRevActDly = 0.2F;/* Referenced by: '<S290>/Calib' */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_ParkRattleDelay = 3.0F;/* Referenced by: '<S775>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_ParkRattleInitDelay =
    1.0F;                              /* Referenced by: '<S776>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_ParkRattleShutOffDelay =
    2.0F;                              /* Referenced by: '<S777>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_PreLoadArmedTimeMax =
    15.0F;                             /* Referenced by: '<S714>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_PreLoadArmedTimeMin =
    5.0F;                              /* Referenced by: '<S715>/Calib' */

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_RampMnToMx_D = 0.2F;/* Referenced by: '<S356>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_RampMnToMx_N = 0.1F;/* Referenced by: '<S357>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_RampMnToMx_R = 0.2F;/* Referenced by: '<S358>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_RampMxToMn_D = 0.2F;/* Referenced by: '<S359>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_RampMxToMn_N = 0.1F;/* Referenced by: '<S360>/Calib' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_RampMxToMn_R = 0.2F;/* Referenced by: '<S361>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_ToClipBlend = 0.5F;/* Referenced by: '<S687>/Calib' */
static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_t_dT = 0.01F;/* Referenced by:
                                                                   * '<S308>/Calib'
                                                                   * '<S716>/Calib'
                                                                   * '<S778>/Calib'
                                                                   * '<S338>/Calib'
                                                                   * '<S688>/Calib'
                                                                   * '<S847>/Calib'
                                                                   * '<S931>/Calib'
                                                                   * '<S950>/Calib'
                                                                   * '<S1017>/Calib'
                                                                   * '<S1095>/Calib'
                                                                   * '<S1115>/Calib'
                                                                   * '<S1176>/Calib'
                                                                   * '<S1253>/Calib'
                                                                   * '<S1273>/Calib'
                                                                   * '<S1334>/Calib'
                                                                   * '<S1411>/Calib'
                                                                   * '<S1431>/Calib'
                                                                   * '<S217>/Calib'
                                                                   * '<S291>/Calib'
                                                                   * '<S362>/Calib'
                                                                   * '<S586>/Calib'
                                                                   * '<S898>/Calib'
                                                                   * '<S1062>/Calib'
                                                                   * '<S1221>/Calib'
                                                                   * '<S1379>/Calib'
                                                                   * '<S646>/Calib'
                                                                   */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KeWTAR_v_VehSpdThrsh_Dsbl = 1.5F;/* Referenced by: '<S779>/Calib' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_Mult_ItermDTR[9] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.1F, 5.0F, 5.0F
} ;                                    /* Referenced by: '<S545>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_ItermNa[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S552>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_ItermNb[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S559>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_ItermNi[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S566>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_ItermNpin[7] =
{
    0.1F, 0.09F, 0.2F, 0.0F, 0.2F, 0.15F, 0.1F
} ;                                    /* Referenced by: '<S573>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_ItermNturb[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S580>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_MtrA[7] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S656>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_MtrB[7] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S657>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_Ni[7] =
{
    1.0F, 0.8F, 0.5F, 0.2F, 0.1F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S658>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_Npin[7] =
{
    0.1F, 0.09F, 0.2F, 0.0F, 0.2F, 0.15F, 0.1F
} ;                                    /* Referenced by: '<S659>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_K_SpdPrct_Nti[7] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S660>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_M_CreepTorque[7] =
{
    0.0F, 0.0F, 80.0F, 100.0F, 80.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S26>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_M_HillHoldAxleTorqOffset[9]
    =
{
    4000.0F, 1600.0F, 80.0F, 0.0F, 0.0F, 0.0F, -80.0F, -1600.0F, -4000.0F
} ;                                    /* Referenced by: '<S50>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_M_OvrRev_OpenLoop[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S587>/Vector' */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_M_ToReqInPark[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S780>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT)
    KtWTAR_M_To_TBattBased_RateLmtDown[6] =
{
    -150.0F, -150.0F, -150.0F, -150.0F, -150.0F, -150.0F
} ;                                    /* Referenced by:
                                        * '<S982>/Vector'
                                        * '<S1143>/Vector'
                                        * '<S1301>/Vector'
                                        * '<S1459>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_M_To_TBattBased_RateLmtUp[6]
    =
{
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S983>/Vector'
                                        * '<S1144>/Vector'
                                        * '<S1302>/Vector'
                                        * '<S1460>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_Pct_LagLmt_NoDepend[3] =
{
    0.1F, 0.51F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S899>/Vector'
                                        * '<S1063>/Vector'
                                        * '<S1222>/Vector'
                                        * '<S1380>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_dM_InNegLash_LU_PstFil[54] =
{
    64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F,
    16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F,
    0.25F, 8.0F, 16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F,
    16.0F, 32.0F, 64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F,
    64.0F, 64.0F, 32.0F, 16.0F, 8.0F, 0.25F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by:
                                        * '<S939>/Vector'
                                        * '<S941>/Vector'
                                        * '<S1102>/Vector'
                                        * '<S1104>/Vector'
                                        * '<S1260>/Vector'
                                        * '<S1262>/Vector'
                                        * '<S1418>/Vector'
                                        * '<S1420>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_dM_InPosLash_LD_PstFil[54] =
{
    -64.0F, -32.0F, -16.0F, -8.0F, -0.25F, -8.0F, -16.0F, -32.0F, -64.0F, -64.0F,
    -32.0F, -16.0F, -8.0F, -0.25F, -8.0F, -16.0F, -32.0F, -64.0F, -64.0F, -32.0F,
    -16.0F, -8.0F, -0.25F, -8.0F, -16.0F, -32.0F, -64.0F, -64.0F, -32.0F, -16.0F,
    -8.0F, -0.25F, -8.0F, -16.0F, -32.0F, -64.0F, -64.0F, -32.0F, -16.0F, -8.0F,
    -0.25F, -8.0F, -16.0F, -32.0F, -64.0F, -64.0F, -32.0F, -16.0F, -8.0F, -0.25F,
    -8.0F, -16.0F, -32.0F, -64.0F
} ;                                    /* Referenced by:
                                        * '<S940>/Vector'
                                        * '<S942>/Vector'
                                        * '<S1103>/Vector'
                                        * '<S1105>/Vector'
                                        * '<S1261>/Vector'
                                        * '<S1263>/Vector'
                                        * '<S1419>/Vector'
                                        * '<S1421>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_dM_NotLashToNo_LD_PstFil[40]
    =
{
    -8.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F,
    -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F, -20.0F,
    -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F, -20.0F, -20.0F,
    -20.0F, -20.0F, -20.0F, -20.0F, -8.0F, -20.0F, -20.0F, -20.0F, -20.0F,
    -20.0F, -20.0F, -20.0F
} ;                                    /* Referenced by:
                                        * '<S943>/Vector'
                                        * '<S1106>/Vector'
                                        * '<S1264>/Vector'
                                        * '<S1422>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_dM_NotLashToNo_LU_PstFil[40]
    =
{
    8.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 8.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 8.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 8.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 8.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<S944>/Vector'
                                        * '<S1107>/Vector'
                                        * '<S1265>/Vector'
                                        * '<S1423>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT)
    KtWTAR_dM_OutTorqCmndPotential_HiLmt[30] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by: '<S730>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KtWTAR_dM_OutTorqCmndPotential_LoLmt[30] =
{
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F
} ;                                    /* Referenced by: '<S731>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KtWTAR_dM_OutTorqCmndStrategic_HiLmt[30] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by: '<S732>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KtWTAR_dM_OutTorqCmndStrategic_LoLmt[30] =
{
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F
} ;                                    /* Referenced by: '<S733>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_dM_OutTorqCmndTactic_HiLmt
    [30] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by: '<S739>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_dM_ZeroPedalLash_LD_PstFil
    [45] =
{
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F, -1000.0F,
    -1000.0F, -1000.0F, -1000.0F
} ;                                    /* Referenced by:
                                        * '<S946>/Vector'
                                        * '<S1111>/Vector'
                                        * '<S1269>/Vector'
                                        * '<S1427>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_dM_ZeroPedalLash_LU_PstFil
    [45] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S947>/Vector'
                                        * '<S1112>/Vector'
                                        * '<S1270>/Vector'
                                        * '<S1428>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT)
    KtWTAR_k_CoastTrq_SOC_Altud_Factor[20] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S157>/Vector' */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_01_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S470>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_01_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.5F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S471>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_02_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S481>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_02_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.7F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_03_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S492>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_03_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.9F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S493>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_04_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S503>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDNeg_Launch[45] =
{
    1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F,
    0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 0.95F, 0.85F, 0.75F, 0.65F, 0.5F,
    0.9F, 0.8F, 0.7F, 0.6F, 0.45F, 0.85F, 0.75F, 0.65F, 0.55F, 0.4F, 0.8F, 0.7F,
    0.6F, 0.5F, 0.3F, 0.7F, 0.7F, 0.6F, 0.5F, 0.3F
} ;                                    /* Referenced by: '<S510>/Vector' */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_01_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S472>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_01_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.5F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S473>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_02_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_02_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.7F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S484>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_03_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S494>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_03_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.9F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S495>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_04_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S504>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KDPos_Launch[45] =
{
    1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F,
    0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 0.95F, 0.85F, 0.75F, 0.65F, 0.5F,
    0.9F, 0.8F, 0.7F, 0.6F, 0.45F, 0.85F, 0.75F, 0.65F, 0.55F, 0.4F, 0.8F, 0.7F,
    0.6F, 0.5F, 0.3F, 0.7F, 0.7F, 0.6F, 0.5F, 0.3F
} ;                                    /* Referenced by: '<S511>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KD_NegSlowRespTo[5] =
{
    0.5F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S969>/Vector'
                                        * '<S1130>/Vector'
                                        * '<S1288>/Vector'
                                        * '<S1446>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KD_PosSlowRespTo[5] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.5F
} ;                                    /* Referenced by:
                                        * '<S975>/Vector'
                                        * '<S1136>/Vector'
                                        * '<S1294>/Vector'
                                        * '<S1452>/Vector'
                                        */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_01_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S474>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_01_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.5F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S475>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_02_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S485>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_02_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.7F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S486>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_03_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S496>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_03_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.9F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S497>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_04_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S505>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTNeg_Launch[45] =
{
    1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F,
    0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 0.95F, 0.85F, 0.75F, 0.65F, 0.5F,
    0.9F, 0.8F, 0.7F, 0.6F, 0.45F, 0.85F, 0.75F, 0.65F, 0.55F, 0.4F, 0.8F, 0.7F,
    0.6F, 0.5F, 0.3F, 0.7F, 0.7F, 0.6F, 0.5F, 0.3F
} ;                                    /* Referenced by: '<S512>/Vector' */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_01_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S476>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_01_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.5F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S477>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_02_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S487>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_02_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.7F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_03_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S498>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_03_No_Ni[54] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.9F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F
} ;                                    /* Referenced by: '<S499>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_04_No[8] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F
} ;                                    /* Referenced by: '<S506>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KTPos_Launch[45] =
{
    1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 1.0F, 0.9F, 0.8F,
    0.7F, 0.5F, 1.0F, 0.9F, 0.8F, 0.7F, 0.5F, 0.95F, 0.85F, 0.75F, 0.65F, 0.5F,
    0.9F, 0.8F, 0.7F, 0.6F, 0.45F, 0.85F, 0.75F, 0.65F, 0.55F, 0.4F, 0.8F, 0.7F,
    0.6F, 0.5F, 0.3F, 0.7F, 0.7F, 0.6F, 0.5F, 0.3F
} ;                                    /* Referenced by: '<S513>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KT_NegSlowRespTo[5] =
{
    0.5F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S970>/Vector'
                                        * '<S1131>/Vector'
                                        * '<S1289>/Vector'
                                        * '<S1447>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_KT_PosSlowRespTo[5] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.5F
} ;                                    /* Referenced by:
                                        * '<S976>/Vector'
                                        * '<S1137>/Vector'
                                        * '<S1295>/Vector'
                                        * '<S1453>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_k_PIBldFac[20] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S590>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_n_NaMan_RSP[7] =
{
    -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F
} ;                                    /* Referenced by: '<S633>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_n_NbMan_RSP[7] =
{
    -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F
} ;                                    /* Referenced by: '<S634>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_n_NiMan_RSP[7] =
{
    -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F
} ;                                    /* Referenced by: '<S635>/Vector' */

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_n_NpinMan_RSP[7] =
{
    -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F
} ;                                    /* Referenced by: '<S636>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_n_NturbMan_RSP[7] =
{
    -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F
} ;                                    /* Referenced by: '<S637>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_CreepTorqRamp[7] =
{
    1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S27>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_PerformanceFactor[7] =
{
    0.0F, 0.0F, 0.3F, 0.3F, 0.3F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_PerformanceFactor2[7] =
{
    0.0F, 0.0F, 0.3F, 0.3F, 0.3F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S137>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_SpdBsdFctr_ToNet[8] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S818>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_ToReduction_ECT[42] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S187>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_ToReduction_MtrTemp[42] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S188>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_ToReduction_TOT[42] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S189>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_r_TrqCmndFactor_OilTemp[20]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S521>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_t_TimCnstSpdIni[42] =
{
    1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
    1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
    1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F,
    1.5F, 1.5F, 1.5F
} ;                                    /* Referenced by: '<S647>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KtWTAR_t_TimCnstSpdIni_Auto[6] =
{
    1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F
} ;                                    /* Referenced by: '<S648>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_Mult_ItermDTR[9] =
{
    -1500.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 2000.0F, 10000.0F
} ;                                    /* Referenced by: '<S545>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_ItermNa[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S552>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_ItermNb[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S559>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_ItermNi[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S566>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_ItermNpin[7] =
{
    -700.0F, -200.0F, -50.0F, 0.0F, 50.0F, 200.0F, 700.0F
} ;                                    /* Referenced by: '<S573>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_ItermNturb[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S580>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_MtrA[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S656>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_MtrB[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S657>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_Ni[7] =
{
    -400.0F, -300.0F, -250.0F, -200.0F, -100.0F, 0.0F, 250.0F
} ;                                    /* Referenced by: '<S658>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_Npin[7] =
{
    -700.0F, -200.0F, -50.0F, 0.0F, 50.0F, 200.0F, 700.0F
} ;                                    /* Referenced by: '<S659>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_K_SpdPrct_Nti[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S660>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_M_CreepTorque[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S26>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_M_HillHoldAxleTorqOffset[9]
    =
{
    -320.0F, -190.0F, -40.0F, -24.0F, 0.0F, 24.0F, 40.0F, 190.0F, 320.0F
} ;                                    /* Referenced by: '<S50>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_M_OvrRev_OpenLoop[7] =
{
    -5.0F, 0.0F, 8.0F, 16.0F, 32.0F, 64.0F, 100.0F
} ;                                    /* Referenced by: '<S587>/Vector' */

#if !Rte_SysCon_Variant_WTAR_8

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_M_ToReqInPark[7] =
{
    -6.0F, -3.9F, -0.001F, 0.0F, 0.2F, 3.9F, 6.0F
} ;                                    /* Referenced by: '<S780>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT)
    KxWTAR_M_To_TBattBased_RateLmtDown[6] =
{
    -10.0F, 0.0F, 10.0F, 20.0F, 50.0F, 135.0F
} ;                                    /* Referenced by:
                                        * '<S982>/Vector'
                                        * '<S1143>/Vector'
                                        * '<S1301>/Vector'
                                        * '<S1459>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_M_To_TBattBased_RateLmtUp[6]
    =
{
    -10.0F, 0.0F, 10.0F, 20.0F, 50.0F, 135.0F
} ;                                    /* Referenced by:
                                        * '<S983>/Vector'
                                        * '<S1144>/Vector'
                                        * '<S1302>/Vector'
                                        * '<S1460>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_Pct_LagLmt_NoDepend[3] =
{
    10.0F, 105.0F, 250.0F
} ;                                    /* Referenced by:
                                        * '<S899>/Vector'
                                        * '<S1063>/Vector'
                                        * '<S1222>/Vector'
                                        * '<S1380>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_dM_InNegLash_LU_PstFil[9] =
{
    -400.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 400.0F
} ;                                    /* Referenced by:
                                        * '<S939>/Vector'
                                        * '<S941>/Vector'
                                        * '<S1102>/Vector'
                                        * '<S1104>/Vector'
                                        * '<S1260>/Vector'
                                        * '<S1262>/Vector'
                                        * '<S1418>/Vector'
                                        * '<S1420>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_dM_InPosLash_LD_PstFil[9] =
{
    -400.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 400.0F
} ;                                    /* Referenced by:
                                        * '<S940>/Vector'
                                        * '<S942>/Vector'
                                        * '<S1103>/Vector'
                                        * '<S1105>/Vector'
                                        * '<S1261>/Vector'
                                        * '<S1263>/Vector'
                                        * '<S1419>/Vector'
                                        * '<S1421>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_dM_NotLashToNo_LD_PstFil[8]
    =
{
    20.0F, 100.0F, 200.0F, 500.0F, 2000.0F, 2001.0F, 2002.0F, 2003.0F
} ;                                    /* Referenced by:
                                        * '<S943>/Vector'
                                        * '<S1106>/Vector'
                                        * '<S1264>/Vector'
                                        * '<S1422>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_dM_NotLashToNo_LU_PstFil[8]
    =
{
    20.0F, 100.0F, 200.0F, 500.0F, 2000.0F, 2001.0F, 2002.0F, 2003.0F
} ;                                    /* Referenced by:
                                        * '<S944>/Vector'
                                        * '<S1107>/Vector'
                                        * '<S1265>/Vector'
                                        * '<S1423>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT)
    KxWTAR_dM_OutTorqCmndPotential_HiLmt[6] =
{
    -300.0F, -100.0F, -0.0F, 50.0F, 100.0F, 300.0F
} ;                                    /* Referenced by: '<S730>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KxWTAR_dM_OutTorqCmndPotential_LoLmt[6] =
{
    -300.0F, -100.0F, -0.0F, 50.0F, 100.0F, 300.0F
} ;                                    /* Referenced by: '<S731>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KxWTAR_dM_OutTorqCmndStrategic_HiLmt[6] =
{
    -300.0F, -100.0F, -0.0F, 50.0F, 100.0F, 300.0F
} ;                                    /* Referenced by: '<S732>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KxWTAR_dM_OutTorqCmndStrategic_LoLmt[6] =
{
    -300.0F, -100.0F, -0.0F, 50.0F, 100.0F, 300.0F
} ;                                    /* Referenced by: '<S733>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_dM_OutTorqCmndTactic_HiLmt
    [6] =
{
    -300.0F, -100.0F, -0.0F, 50.0F, 100.0F, 300.0F
} ;                                    /* Referenced by: '<S739>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_dM_ZeroPedalLash_LD_PstFil
    [9] =
{
    -300.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 3000.0F
} ;                                    /* Referenced by:
                                        * '<S946>/Vector'
                                        * '<S1111>/Vector'
                                        * '<S1269>/Vector'
                                        * '<S1427>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_dM_ZeroPedalLash_LU_PstFil
    [9] =
{
    -300.0F, -200.0F, -100.0F, -50.0F, 0.0F, 50.0F, 100.0F, 200.0F, 3000.0F
} ;                                    /* Referenced by:
                                        * '<S947>/Vector'
                                        * '<S1112>/Vector'
                                        * '<S1270>/Vector'
                                        * '<S1428>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT)
    KxWTAR_k_CoastTrq_SOC_Altud_Factor[5] =
{
    60.0F, 70.0F, 75.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S157>/Vector' */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDNeg_01_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S470>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDNeg_01_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S471>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDNeg_02_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S481>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDNeg_02_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDNeg_03_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S492>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDNeg_03_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S493>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDNeg_04_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S503>/Vector' */

static volatile CONST(uint8, WTAR_VAR_INIT) KxWTAR_k_KDNeg_Launch[5] =
{
    0U, 1U, 2U, 3U, 4U
} ;                                    /* Referenced by: '<S510>/Vector' */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDPos_01_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S472>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDPos_01_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S473>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDPos_02_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDPos_02_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S484>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDPos_03_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S494>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDPos_03_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S495>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KDPos_04_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S504>/Vector' */

static volatile CONST(uint8, WTAR_VAR_INIT) KxWTAR_k_KDPos_Launch[5] =
{
    0U, 1U, 2U, 3U, 4U
} ;                                    /* Referenced by: '<S511>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KD_NegSlowRespTo[5] =
{
    -0.2F, 0.2F, 0.5F, 0.9F, 0.99F
} ;                                    /* Referenced by:
                                        * '<S969>/Vector'
                                        * '<S1130>/Vector'
                                        * '<S1288>/Vector'
                                        * '<S1446>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KD_PosSlowRespTo[5] =
{
    -0.2F, 0.2F, 0.5F, 0.9F, 0.99F
} ;                                    /* Referenced by:
                                        * '<S975>/Vector'
                                        * '<S1136>/Vector'
                                        * '<S1294>/Vector'
                                        * '<S1452>/Vector'
                                        */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTNeg_01_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S474>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTNeg_01_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S475>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTNeg_02_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S485>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTNeg_02_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S486>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTNeg_03_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S496>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTNeg_03_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S497>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTNeg_04_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S505>/Vector' */

static volatile CONST(uint8, WTAR_VAR_INIT) KxWTAR_k_KTNeg_Launch[5] =
{
    0U, 1U, 2U, 3U, 4U
} ;                                    /* Referenced by: '<S512>/Vector' */

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTPos_01_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S476>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTPos_01_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S477>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTPos_02_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S487>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTPos_02_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if !Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTPos_03_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S498>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTPos_03_No_Ni[9] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S499>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KTPos_04_No[8] =
{
    -410.0F, 0.0F, 1200.0F, 1600.0F, 2000.0F, 2400.0F, 3200.0F, 4000.0F
} ;                                    /* Referenced by: '<S506>/Vector' */

static volatile CONST(uint8, WTAR_VAR_INIT) KxWTAR_k_KTPos_Launch[5] =
{
    0U, 1U, 2U, 3U, 4U
} ;                                    /* Referenced by: '<S513>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KT_NegSlowRespTo[5] =
{
    -0.2F, 0.2F, 0.5F, 0.9F, 0.99F
} ;                                    /* Referenced by:
                                        * '<S970>/Vector'
                                        * '<S1131>/Vector'
                                        * '<S1289>/Vector'
                                        * '<S1447>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_KT_PosSlowRespTo[5] =
{
    -0.2F, 0.2F, 0.5F, 0.9F, 0.99F
} ;                                    /* Referenced by:
                                        * '<S976>/Vector'
                                        * '<S1137>/Vector'
                                        * '<S1295>/Vector'
                                        * '<S1453>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_k_PIBldFac[5] =
{
    0.0F, 0.1F, 0.5F, 0.6F, 1.0F
} ;                                    /* Referenced by: '<S590>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_n_NaMan_RSP[7] =
{
    1.0F, 2.0F, 4.0F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S633>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_n_NbMan_RSP[7] =
{
    1.0F, 2.0F, 4.0F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S634>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_n_NiMan_RSP[7] =
{
    1.0F, 2.0F, 4.0F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S635>/Vector' */

#if Rte_SysCon_Variant_WTAR_5

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_n_NpinMan_RSP[7] =
{
    1.0F, 2.0F, 4.0F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S636>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_n_NturbMan_RSP[7] =
{
    1.0F, 2.0F, 4.0F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S637>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_CreepTorqRamp[7] =
{
    -250.0F, -200.0F, -100.0F, 0.0F, 250.0F, 500.0F, 700.0F
} ;                                    /* Referenced by: '<S27>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_PerformanceFactor[7] =
{
    -500.0F, -450.0F, -250.0F, 0.0F, 1000.0F, 2500.0F, 3000.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_PerformanceFactor2[7] =
{
    -500.0F, -450.0F, -250.0F, 0.0F, 1000.0F, 2500.0F, 3000.0F
} ;                                    /* Referenced by: '<S137>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_SpdBsdFctr_ToNet[8] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 500.0F, 1000.0F, 2000.0F, 4000.0F
} ;                                    /* Referenced by: '<S818>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_ToReduction_ECT[6] =
{
    500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 2900.0F
} ;                                    /* Referenced by: '<S187>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_ToReduction_MtrTemp[6] =
{
    500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 2900.0F
} ;                                    /* Referenced by: '<S188>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_ToReduction_TOT[6] =
{
    500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 2900.0F
} ;                                    /* Referenced by: '<S189>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_r_TrqCmndFactor_OilTemp[4] =
{
    500.0F, 1000.0F, 1500.0F, 1800.0F
} ;                                    /* Referenced by: '<S521>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_t_TimCnstSpdIni[7] =
{
    1.0F, 2.0F, 4.0F, 8.0F, 16.0F, 32.0F, 64.0F
} ;                                    /* Referenced by: '<S647>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KxWTAR_t_TimCnstSpdIni_Auto[6] =
{
    -6.5F, 0.0F, 0.5F, 2.0F, 4.5F, 6.5F
} ;                                    /* Referenced by: '<S648>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_dM_InNegLash_LU_PstFil[6] =
{
    500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3001.0F
} ;                                    /* Referenced by:
                                        * '<S939>/Vector'
                                        * '<S941>/Vector'
                                        * '<S1102>/Vector'
                                        * '<S1104>/Vector'
                                        * '<S1260>/Vector'
                                        * '<S1262>/Vector'
                                        * '<S1418>/Vector'
                                        * '<S1420>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_dM_InPosLash_LD_PstFil[6] =
{
    500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3001.0F
} ;                                    /* Referenced by:
                                        * '<S940>/Vector'
                                        * '<S942>/Vector'
                                        * '<S1103>/Vector'
                                        * '<S1105>/Vector'
                                        * '<S1261>/Vector'
                                        * '<S1263>/Vector'
                                        * '<S1419>/Vector'
                                        * '<S1421>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_dM_NotLashToNo_LD_PstFil[5]
    =
{
    50.0F, 100.0F, 1500.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by:
                                        * '<S943>/Vector'
                                        * '<S1106>/Vector'
                                        * '<S1264>/Vector'
                                        * '<S1422>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_dM_NotLashToNo_LU_PstFil[5]
    =
{
    50.0F, 100.0F, 1500.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by:
                                        * '<S944>/Vector'
                                        * '<S1107>/Vector'
                                        * '<S1265>/Vector'
                                        * '<S1423>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT)
    KyWTAR_dM_OutTorqCmndPotential_HiLmt[5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by: '<S730>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KyWTAR_dM_OutTorqCmndPotential_LoLmt[5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by: '<S731>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KyWTAR_dM_OutTorqCmndStrategic_HiLmt[5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by: '<S732>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT)
    KyWTAR_dM_OutTorqCmndStrategic_LoLmt[5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by: '<S733>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_dM_OutTorqCmndTactic_HiLmt
    [5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by: '<S739>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_dM_ZeroPedalLash_LD_PstFil
    [5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by:
                                        * '<S946>/Vector'
                                        * '<S1111>/Vector'
                                        * '<S1269>/Vector'
                                        * '<S1427>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_dM_ZeroPedalLash_LU_PstFil
    [5] =
{
    -40.0F, 0.0F, 40.0F, 400.0F, 5000.0F
} ;                                    /* Referenced by:
                                        * '<S947>/Vector'
                                        * '<S1112>/Vector'
                                        * '<S1270>/Vector'
                                        * '<S1428>/Vector'
                                        */

static volatile CONST(float32, WTAR_VAR_INIT)
    KyWTAR_k_CoastTrq_SOC_Altud_Factor[4] =
{
    60.0F, 85.0F, 95.0F, 100.0F
} ;                                    /* Referenced by: '<S157>/Vector' */

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDNeg_01_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S471>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDNeg_02_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDNeg_03_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S493>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDNeg_Launch[9] =
{
    -100.0F, 0.0F, 20.0F, 50.0F, 100.0F, 175.0F, 300.0F, 500.0F, 1000.0F
} ;                                    /* Referenced by: '<S510>/Vector' */

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDPos_01_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S473>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDPos_02_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S484>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDPos_03_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S495>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KDPos_Launch[9] =
{
    -100.0F, 0.0F, 20.0F, 50.0F, 100.0F, 175.0F, 300.0F, 500.0F, 1000.0F
} ;                                    /* Referenced by: '<S511>/Vector' */

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTNeg_01_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S475>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTNeg_02_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S486>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTNeg_03_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S497>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTNeg_Launch[9] =
{
    -100.0F, 0.0F, 20.0F, 50.0F, 100.0F, 175.0F, 300.0F, 500.0F, 1000.0F
} ;                                    /* Referenced by: '<S512>/Vector' */

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTPos_01_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S477>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTPos_02_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if Rte_SysCon_Variant_WTAR_4

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTPos_03_No_Ni[6] =
{
    -2000.0F, 0.0F, 500.0F, 1200.0F, 3000.0F, 5000.0F
} ;                                    /* Referenced by: '<S499>/Vector' */

#endif

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_KTPos_Launch[9] =
{
    -100.0F, 0.0F, 20.0F, 50.0F, 100.0F, 175.0F, 300.0F, 500.0F, 1000.0F
} ;                                    /* Referenced by: '<S513>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_k_PIBldFac[4] =
{
    -100.0F, 0.0F, 100.0F, 200.0F
} ;                                    /* Referenced by: '<S590>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_r_ToReduction_ECT[7] =
{
    106.0F, 109.0F, 112.0F, 115.0F, 118.0F, 121.0F, 125.0F
} ;                                    /* Referenced by: '<S187>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_r_ToReduction_MtrTemp[7] =
{
    140.0F, 144.0F, 148.0F, 152.0F, 156.0F, 160.0F, 165.0F
} ;                                    /* Referenced by: '<S188>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_r_ToReduction_TOT[7] =
{
    120.0F, 123.0F, 126.0F, 129.0F, 132.0F, 135.0F, 139.0F
} ;                                    /* Referenced by: '<S189>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_r_TrqCmndFactor_OilTemp[5] =
{
    -30.0F, -25.0F, -15.0F, -10.0F, -9.0F
} ;                                    /* Referenced by: '<S521>/Vector' */

static volatile CONST(float32, WTAR_VAR_INIT) KyWTAR_t_TimCnstSpdIni[6] =
{
    -6.5F, 0.0F, 0.5F, 2.0F, 4.5F, 6.5F
} ;                                    /* Referenced by: '<S647>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_WTAR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_WTAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, WTAR_VAR_INIT) VaWTAC_M_ESCTrqPreGrdLim[2];/* '<S302>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VaWTAC_b_CreepActDsbFil[4];/* '<S395>/OR1' */
static VAR(boolean, WTAR_VAR_INIT) VaWTAC_b_FilteringDone[4];/* '<S304>/Relational Operator3' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayImmed;/* '<S900>/Gain' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayImmed_Raw;/* '<S1223>/Gain' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayImmed_xSEM;/* '<S1381>/Gain' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayImmed_xSEM4AeCst;/* '<S1064>/Gain' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayPredExtr;/* '<S901>/Gain' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayPredExtra_Raw;/* '<S1224>/Gain' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayPredExtra_xSEM;/* '<S1382>/Gain' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_Cnt_DelayPredExtra_xSEM4AeCst;/* '<S1065>/Gain' */

#if !Rte_SysCon_Variant_WTAR_2

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ASL_Final_HTDR;/* '<S332>/Summation' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ASL_Final_OITR;/* '<S331>/Summation' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ActualAxleTrq;/* '<S197>/Multiplication7' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_AeCoastTorqDiffRaw;/* '<S320>/Add' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_AfterMainFilter;/* '<S979>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_AfterMainFilterAeC;/* '<S1140>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_AfterMainFilterRaw;/* '<S1298>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_AfterMainFilterxSEM;/* '<S1456>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_AfterToClip_xSEM_xPRNDL;/* '<S530>/Switch9' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Arbitrated_res;/* '<S66>/Merge' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Arbitrated_resfilt;/* '<S65>/Merge2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_AxleTorqReq_AfterHillHold;/* '<S10>/Merge3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_BrkTrqRdctn_Fltd;/* '<S321>/Multiplication1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_BrkTrqRdctn_Raw;/* '<S321>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_CurbClimbingOutputTorqLimited_Raw;/* '<S1182>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM;/* '<S1340>/Switch' */
static VAR(float32, WTAR_VAR_INIT)
    VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM4AeCst;/* '<S1023>/Switch' */

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_DTCM_TrqWSign;/* '<S410>/Product' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_DrvReqMd_xDMPI;/* '<S718>/MinMax3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MGateMinArb;/* '<S211>/MinMax2' */

#if Rte_SysCon_Variant_WTAR_1

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MGateMinArbDCT;/* '<S212>/Summation' */

#endif

#if !Rte_SysCon_Variant_WTAR_1

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MGateMinArbNonDCT;/* '<S210>/Switch7' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MainFilter_Lasch_TrqReset;/* '<S827>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MainFilter_Lasch_TrqResetRaw;/* '<S324>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MainFilter_Lasch_TrqReset_xSEM;/* '<S325>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Max4Converter2FW_Typ1;/* '<S203>/Switch9' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Min4Converter2FW_Typ1;/* '<S203>/Switch10' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Min4Process;/* '<S204>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Min4ProcessMainFilter;/* '<S204>/Switch6' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Min4Process_Diff;/* '<S204>/Switch8' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_Min4ShapeStgc;/* '<S206>/Switch5' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MinPdl4DifTorq;/* synthesized block */

#if !Rte_SysCon_Variant_WTAR_2

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_MinPedal_Arb_ASL;/* '<S355>/Switch6' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqPot_OvrSpd;/* '<S528>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqPot_xPRNDL;/* '<S530>/Switch14' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqRawShpd_OvrSpd;/* '<S529>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqRawShpd_xPRNDL;/* '<S530>/Switch19' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqRaw_OvrSpd;/* '<S525>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqRaw_xPRNDL;/* '<S530>/Switch13' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqReqHTDR_xPRNDL;/* '<S530>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqReqOITR_OvrSpd;/* '<S523>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutTrqReqOITR_xPRNDL;/* '<S530>/Switch7' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutputTorqueAftCurbClimbing_Raw;/* '<S1147>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM;/* '<S1305>/Switch2' */
static VAR(float32, WTAR_VAR_INIT)
    VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM4AeCst;/* '<S987>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw;/* '<S1195>/Merge' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM;/* '<S1353>/Merge' */
static VAR(float32, WTAR_VAR_INIT)
    VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst;/* '<S1036>/Merge' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevOpenLoop;/* '<S588>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_ItermRaw;/* '<S531>/MinMax2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NaI;/* '<S538>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NaP;/* '<S534>/Product' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NbI;/* '<S539>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NbP;/* '<S534>/Product1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NiI;/* '<S540>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NiP;/* '<S534>/Product2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NpinI;/* '<S541>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NpinP;/* '<S534>/Product6' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NturbI;/* '<S542>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRevPtn_NturbP;/* '<S534>/Product3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRev_IniVal;/* '<S532>/Switch8' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRev_PIDTqOutTrqReqHTDR;/* '<S311>/Unit Delay1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrRev_PIDTqOutTrqReqxSEM;/* '<S311>/Unit Delay2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrSpdPtn_ITerm;/* '<S537>/Switch10' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrSpdPtn_PID;/* '<S599>/Sum3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_OvrSpdPtn_PTerm;/* '<S534>/Switch10' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_PostRateLim;/* '<S985>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_PostRateLimAeC;/* '<S1146>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_PostRateLimRaw;/* '<S1304>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_PostRateLimxSEM;/* '<S1462>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_SumMaxTrqDsrd;/* '<S197>/Multiplication2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToArb_Net;/* '<S321>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToCmnd_AftLashCtrl_PstFil;/* '<S938>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC;/* '<S1109>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM;/* '<S1425>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToCmnd_PstFil_HTDR;/* '<S826>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToDelta_Strategic;/* '<S723>/Sum1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToDelta_Tactic;/* '<S724>/Sum1' */

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToHTDR_DTCMArb;/* '<S410>/Switch2' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToHTDR_DTCM_Out;/* '<S410>/Switch13' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToHTDR_ESC_Out;/* '<S383>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToNet_Arb_xSEM;/* '<S321>/Subtraction2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToNet_Arb_xSEM_xPRNDL;/* '<S530>/Switch11' */

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToOITR_DTCMArb;/* '<S410>/Switch4' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToOITR_DTCM_Out;/* '<S410>/Switch14' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToOITR_ESC_Out;/* '<S384>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToPotDelta_Strategic;/* '<S723>/Sum2' */

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToPot_DTCMArb;/* '<S410>/Switch8' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToPot_DTCM_Out;/* '<S410>/Switch16' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToPot_Net;/* '<S321>/Subtraction5' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToPot_PostThermPrtct;/* '<S4>/Sum2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToPreload;/* '<S312>/Pre_Load_Arbitration' */

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRaw_DTCMArb;/* '<S410>/Switch6' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRaw_DTCM_Out;/* '<S410>/Switch15' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRawxShp_DTCMArb;/* '<S410>/Switch11' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRawxShp_DTCM_Out;/* '<S410>/Switch18' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqArbitrated_Creep;/* '<S9>/Merge4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqHTDR;/* '<S322>/Unit Delay2' */

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqParkRaw;/* '<S319>/Product2' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqPot_Creep;/* '<S9>/Merge1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqPot_RedPerf;/* '<S12>/Merge1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqRaw_Creep;/* '<S9>/Merge6' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqRaw_RedPerf;/* '<S12>/Merge5' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqStgcPreShp;/* '<S318>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqStgc_PreLim;/* '<S723>/Sum3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqxSEM_Creep;/* '<S9>/Merge2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToReqxSEM_RedPerf;/* '<S12>/Merge3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LD;/* '<S951>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LDAeC;/* '<S1116>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LDRaw;/* '<S1274>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LDxSEM;/* '<S1432>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LU;/* '<S951>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LUAeC;/* '<S1116>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LURaw;/* '<S1274>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToRtLmt_LUxSEM;/* '<S1432>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceCurbClimbingD_Raw;/* '<S1177>/MinMax1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceCurbClimbingD_xSEM;/* '<S1335>/MinMax1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceCurbClimbingD_xSEM4AeCst;/* '<S1018>/MinMax1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceCurbClimbingR_Raw;/* '<S1177>/MinMax2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceCurbClimbingR_xSEM;/* '<S1335>/MinMax2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceCurbClimbingR_xSEM4AeCst;/* '<S1018>/MinMax2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceforCurbClimbing_Raw;/* '<S1177>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceforCurbClimbing_xSEM;/* '<S1335>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TorqReduceforCurbClimbing_xSEM4AeCst;/* '<S1018>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TotalToReduction_ThermProtection;/* '<S191>/Gain' */

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToxSEM_DTCMArb;/* '<S410>/Switch10' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToxSEM_DTCM_Out;/* '<S410>/Switch17' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_ToxSEM_PostThermPrtct;/* '<S4>/Sum4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TransIntakeTrq;/* '<S197>/Multiplication1' */

#if Rte_SysCon_Variant_WTAR_7

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TransIntkTrqFil;/* '<S796>/Switch1' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TwoFootBrakePdlTrqNet;/* '<S321>/Multiplication3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TwoFootGasPdlTrq;/* '<S321>/Multiplication2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TwoFootGasPdlTrqNet;/* '<S321>/Subtraction4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TwoFootTrqBrakeAHH;/* '<S321>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_M_TwoFootTrqBrakePedal;/* '<S321>/Switch4' */

#if !Rte_SysCon_Variant_WTAR_2

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ASL_BldAct_HTDR;/* '<S332>/Comparison2' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ASL_BldAct_OITR;/* '<S331>/Comparison2' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ASR_D;/* '<S410>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ASR_R;/* '<S410>/Logical Operator4' */

#endif

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_AeCoastSwitch;/* '<S320>/AND3' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_AfterToClip_xSEM_BldAct;/* '<S674>/Comparison2' */

#if Rte_SysCon_Variant_WTAR_1

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_BlndFacDCTMin;/* '<S212>/Comparison2' */

#endif

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ChangePrdttoRaw;/* '<S318>/Switch2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_CurbClimbing_TrqModulated_Raw;/* '<S1147>/Unit Delay1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_CurbClimbing_TrqModulated_xSEM;/* '<S1305>/Unit Delay1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_CurbClimbing_TrqModulated_xSEM4AeCst;/* '<S987>/Unit Delay1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_CurbeClimbing_TorqModulated;/* '<S820>/Comparison8' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_CurbeClimbing_TorqModulated_Raw;/* '<S1147>/Comparison8' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_CurbeClimbing_TorqModulated_xSEM;/* '<S1305>/Comparison8' */
static VAR(boolean, WTAR_VAR_INIT)
    VeWTAC_b_CurbeClimbing_TorqModulated_xSEM4AeCst;/* '<S987>/Comparison8' */

#if Rte_SysCon_Variant_WTAR_9

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_DMPI_D_TTC_Actv;/* '<S305>/Relational Operator2' */

#endif

#if Rte_SysCon_Variant_WTAR_9

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_DMPI_DrvMdReq_Actv;/* '<S305>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_DTCM_TrqMode;/* '<S410>/Logical Operator' */

#endif

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ESC_GradLimReset;/* '<S302>/Logical Operator1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ImpSkidAct;/* '<S107>/OR1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ImpSkidFiltAct;/* '<S80>/OR1' */

#if Rte_SysCon_Variant_WTAR_10

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_LaunchFiltActv;/* '<S445>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_WTAR_1

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_MGateMinSwt1;/* '<S213>/AND3' */

#endif

#if Rte_SysCon_Variant_WTAR_1

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_MGateMinSwt2;/* '<S213>/AND4' */

#endif

#if Rte_SysCon_Variant_WTAR_1

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_MGateMinSwt3;/* '<S213>/AND2' */

#endif

#if Rte_SysCon_Variant_WTAR_1

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_MGateMinSwt4;/* '<S213>/Equal4' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_MSR_D;/* '<S410>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_WTAR_3

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_MSR_R;/* '<S410>/Logical Operator5' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_MtrPosBigDiff;/* '<S319>/Comparison19' */

#endif

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_NegLashCntrl_PstFil;/* '<S824>/AND1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_NegLashCntrl_PstFilAeC;/* '<S995>/AND1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_NegLashCntrl_PstFilRaw;/* '<S1154>/AND1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_NegLashCntrl_PstFilxSEM;/* '<S1312>/AND1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OutTrqPot_BldAct;/* '<S676>/Comparison2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OutTrqRawShpd_BldAct;/* '<S677>/Comparison2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OutTrqRaw_BldAct;/* '<S673>/Comparison2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OutTrqReqHTDR_BldAct;/* '<S672>/Comparison2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OutTrqReqOITR_BldAct;/* '<S671>/Comparison2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevITermFzrAct;/* '<S535>/Logical1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevNa;/* '<S604>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevNb;/* '<S608>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevNi;/* '<S533>/Logical2' */

#if Rte_SysCon_Variant_WTAR_5

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevNpin;/* '<S616>/Switch1' */

#endif

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevNturb;/* '<S621>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevPtn_TotalActive;/* '<S531>/Logical1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevSpdRaw;/* '<S599>/Logical5' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRevUndSpd;/* '<S602>/Comparison3' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRev_ItermFrzTypA;/* '<S535>/Logical4' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRev_ItermFrzTypB;/* '<S535>/Logical5' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_OvrRev_ItermFrzTypC;/* '<S535>/Logical6' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PRNDLDrvAct;/* '<S259>/Merge2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PRNDLRevAct;/* '<S259>/Merge1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PTAR_NotActv;/* '<S303>/Logical2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PTAR_NotActvFrontAxle;/* '<S303>/Equal' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PTAR_NotActvRearAxle;/* '<S303>/Equal1' */

#if !Rte_SysCon_Variant_WTAR_8

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ParkRattleActive;/* '<S319>/Comparison10' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ParkRattleDelayEnbld;/* '<S788>/AND' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ParkRattleEnbld;/* '<S785>/OR1' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ParkRattleInitDelayEnbld;/* '<S789>/AND' */

#endif

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PedalNotPressed;/* '<S304>/Relational Operator2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PosLashCntrl_PstFil;/* '<S824>/AND' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PosLashCntrl_PstFilAeC;/* '<S995>/AND' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PosLashCntrl_PstFilRaw;/* '<S1154>/AND' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PosLashCntrl_PstFilxSEM;/* '<S1312>/AND' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_PreLoadSel;/* '<S312>/Logical1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TipInOut_Detect_Raw;/* '<S1214>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TipInOut_Detect_xSEM;/* '<S1372>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TipInOut_Detect_xSEM4AeCst;/* '<S1055>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TipInOut_detect;/* '<S891>/Switch1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ToNet_Arb_xSEM_BldAct;/* '<S675>/Comparison2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqLongTimer_Raw;/* '<S1184>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqLongTimer_xSEM;/* '<S1342>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqLongTimer_xSEM4AeCst;/* '<S1025>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqShortTimer_Raw;/* '<S1183>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqShortTimer_xSEM;/* '<S1341>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqShortTimer_xSEM4AeCst;/* '<S1024>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqueCheckEnable_Raw;/* '<S1147>/Logical' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqueCheckEnable_xSEM;/* '<S1305>/Logical' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_TorqueCheckEnable_xSEM4AeCst;/* '<S987>/Logical' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_UseWashedToPrd;/* '<S902>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_UseWashedToPrd_Raw;/* '<S1225>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_UseWashedToPrd_eCoast;/* '<S1066>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_UseWashedToPrd_xSEM;/* '<S1383>/Greater  Than1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_WheelBasedinR;/* '<S205>/Logical3' */

#if !Rte_SysCon_Variant_WTAR_2

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_WheelBasedinR_ASL;/* '<S355>/Logical3' */

#endif

static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ZeroPedalLashCtrl_PstFil;/* '<S824>/AND2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ZeroPedalLashCtrl_PstFilAeC;/* '<S995>/AND2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ZeroPedalLashCtrl_PstFilRaw;/* '<S1154>/AND2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAC_b_ZeroPedalLashCtrl_PstFilxSEM;/* '<S1312>/AND2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_LashGradLimRaw_Lo;/* '<S824>/Merge1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_LashGradLimRaw_Up;/* '<S824>/Merge2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_LashGradLim_Lo;/* '<S824>/MinMax3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_LashGradLim_Up;/* '<S824>/MinMax4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LD_PstFil;/* '<S943>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LD_PstFilAeC;/* '<S1106>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LD_PstFilRaw;/* '<S1264>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LD_PstFilxSEM;/* '<S1422>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LU_PstFil;/* '<S944>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LU_PstFilAeC;/* '<S1107>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LU_PstFilRaw;/* '<S1265>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_NoLashToNo_LU_PstFilxSEM;/* '<S1423>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_TCMGradLim_Lo_dt;/* '<S6>/Multiplication3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_dM_TCMGradLim_Up_dt;/* '<S6>/Multiplication1' */
static VAR(uint8, WTAR_VAR_INIT) VeWTAC_i_KdKt_Selc;
                               /* '<S309>/SigConvForSigProp_Variant_Source_0' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_i_WashCountIn;/* '<S876>/Sum' */
static VAR(uint16, WTAR_VAR_INIT) VeWTAC_i_WashCountOut;/* '<S876>/Switch4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KDFilterCoeffs;/* '<S948>/Merge2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KDFilterCoeffsAeC;/* '<S1113>/Merge' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KDFilterCoeffsRaw;/* '<S1271>/Merge' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KDFilterCoeffsxSEM;/* '<S1429>/Merge' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KTFilterCoeffs;/* '<S948>/Merge3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KTFilterCoeffsAeC;/* '<S1113>/Merge1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KTFilterCoeffsRaw;/* '<S1271>/Merge1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_KTFilterCoeffsxSEM;/* '<S1429>/Merge1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_NegKD;/* '<S309>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_NegKT;/* '<S309>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_NegLashFac;/* '<S309>/Merge6' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_NotInLashFac;/* '<S309>/Merge7' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_OL_BldFac;/* '<S591>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_PIBldFac;/* '<S590>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_PosKD;/* '<S309>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_PosKT;/* '<S309>/Switch4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_k_PosLashFac;/* '<S309>/Merge5' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_MaxDiffSpd;/* '<S602>/MinMax2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_MinDiffSpd_Fil;/* '<S603>/MinMax2' */

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_NoFromNaNi;/* '<S319>/Abs1' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_OvrSpdPtn_SpdDiffNa;/* '<S602>/Sum5' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_OvrSpdPtn_SpdDiffNb;/* '<S602>/Sum2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_OvrSpdPtn_SpdDiffNi;/* '<S602>/Sum7' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_OvrSpdPtn_SpdDiffNpin;/* '<S602>/Sum1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_OvrSpdPtn_SpdDiffNturb;/* '<S602>/Sum8' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_TgtSpdNa;/* '<S603>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_TgtSpdNb;/* '<S603>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_TgtSpdNi;/* '<S603>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_TgtSpdNpin;/* '<S603>/Switch4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_n_TgtSpdNturb;/* '<S603>/Switch3' */

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_phi_ContMtrPos;/* '<S319>/Sum2' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_phi_GradeAngleLatched;/* '<S319>/Switch4' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_phi_MtrPosDelta;/* '<S319>/Abs' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_phi_MtrPosDiff;/* '<S319>/Sum3' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_phi_MtrPosLatchd;/* '<S319>/Switch1' */

#endif

#if !Rte_SysCon_Variant_WTAR_8

static VAR(float32, WTAR_VAR_INIT) VeWTAC_phi_MtrPosPrevVal;/* '<S319>/Switch17' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAC_r_RdcdPerfSclr;/* '<S124>/Sum3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_r_RdcdPerfSclr2;/* '<S119>/Sum3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAC_r_TrqCmndFactor_OilTemp;/* '<S521>/Vector' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_M_AxleTrqPotential;/* '<S8>/Switch2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_M_AxleTrqReqMin;/* '<S8>/Switch35' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_M_CmndPrdtAxleTorq;/* '<S8>/Switch' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_M_DrvrIntndedAxleTorqRaw;/* '<S8>/Switch1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_M_NormalMinStgc;/* '<S8>/Switch13' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_M_OutTorqReqModTactMax;/* '<S8>/Switch17' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_M_SumMaxTrqDsrd;/* '<S8>/Switch3' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_Pct_AccelPedalEffPosition;/* '<S8>/Switch7' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_Pct_HV_BatPackSOC_Arb;/* '<S8>/Switch11' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_T_EngCoolantTemp;/* '<S8>/Switch28' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_T_MtrA_Temp;/* '<S8>/Switch37' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_T_MtrB_InvrtrTemp;/* '<S8>/Switch23' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_T_MtrB_Temp;/* '<S8>/Switch26' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_T_MtrC_Temp;/* '<S8>/Switch4' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_T_TrnOilTemp;/* '<S8>/Switch30' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAI_b_ImpndSkid;/* '<S8>/Switch19' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_p_AmbientAirPrs;/* '<S8>/Switch25' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_r_Axle_Ratio;/* '<S8>/Switch12' */
static VAR(float32, WTAR_VAR_INIT) VeWTAI_r_TCaseRatio;/* '<S8>/Switch10' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayImmed_Raw_Single;/* '<S1198>/Product1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayImmed_Single;/* '<S875>/Product1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayImmed_xSEM4AeCst_Single;/* '<S1039>/Product1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayImmed_xSEM_Single;/* '<S1356>/Product1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayPredExtr_Single;/* '<S875>/Product2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayPredExtra_Raw_Single;/* '<S1198>/Product2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayPredExtra_xSEM4AeCst_Single;/* '<S1039>/Product2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_Cnt_DelayPredExtra_xSEM_Single;/* '<S1356>/Product2' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_M_ASL_PIDTrq_OITR;/* '<S330>/Gain' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_M_HillHoldOffset;/* '<S42>/Product' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_M_Max4Process;/* '<S204>/Switch3' */

#if !Rte_SysCon_Variant_WTAR_2

static VAR(float32, WTAR_VAR_INIT) VeWTAR_M_Mn_ASL;/* '<S363>/Switch1' */

#endif

#if !Rte_SysCon_Variant_WTAR_2

static VAR(float32, WTAR_VAR_INIT) VeWTAR_M_Mx_ASL;/* '<S363>/Switch2' */

#endif

static VAR(float32, WTAR_VAR_INIT) VeWTAR_M_OutTrqReqOITR_ASL;/* '<S301>/MinMax5' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_M_PreSatTrq;/* '<S952>/Switch3' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAR_b_HillHoldCndtnMet;/* '<S41>/Logical Operator1' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAR_b_IsRollBackInD;/* '<S41>/Logical Operator' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAR_b_IsRollForwardInR;/* '<S41>/Logical Operator2' */
static VAR(boolean, WTAR_VAR_INIT) VeWTAR_b_PRNDL_Changed;/* '<S38>/Unit Delay1' */
static VAR(TeWTAR_e_OvrSpdPtnTp, WTAR_VAR_INIT) VeWTAR_e_OvrSpdPtn_Type;/* '<S534>/Merge1' */
static VAR(float32, WTAR_VAR_INIT) VeWTAR_k_HillHoldOffsetFactor;/* '<S51>/Switch1' */

#if Rte_SysCon_Variant_WTAR_5

static VAR(float32, WTAR_VAR_INIT) VeWTAR_n_PinionSpeed;/* '<S600>/Divide4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_WTAR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_WTAR
#include "MemMap.h"

CONST(ConstB_WTAR_ac_T, WTAR_VAR_INIT) WTAR_ac_ConstB =
{
    CeWTAR_e_ECM_TorqReqst             /* '<S1507>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_WTAR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_WTAR
#include "MemMap.h"

CONST(ConstP_WTAR_ac_T, WTAR_VAR_INIT) WTAR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S157>/Vector'
     *   '<S590>/Vector'
     */
    {
        4U, 3U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S187>/Vector'
     *   '<S188>/Vector'
     *   '<S189>/Vector'
     */
    {
        5U, 6U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S471>/Vector'
     *   '<S473>/Vector'
     *   '<S475>/Vector'
     *   '<S477>/Vector'
     *   '<S482>/Vector'
     *   '<S484>/Vector'
     *   '<S486>/Vector'
     *   '<S488>/Vector'
     *   '<S493>/Vector'
     *   '<S495>/Vector'
     *   '<S497>/Vector'
     *   '<S499>/Vector'
     *   '<S939>/Vector'
     *   '<S940>/Vector'
     *   '<S941>/Vector'
     *   '<S942>/Vector'
     *   '<S1102>/Vector'
     *   '<S1103>/Vector'
     *   '<S1104>/Vector'
     *   '<S1105>/Vector'
     *   '<S1260>/Vector'
     *   '<S1261>/Vector'
     *   '<S1262>/Vector'
     *   '<S1263>/Vector'
     *   '<S1418>/Vector'
     *   '<S1419>/Vector'
     *   '<S1420>/Vector'
     *   '<S1421>/Vector'
     */
    {
        8U, 5U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S510>/Vector'
     *   '<S511>/Vector'
     *   '<S512>/Vector'
     *   '<S513>/Vector'
     */
    {
        4U, 8U
    },

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S647>/Vector'
     */
    {
        6U, 5U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S946>/Vector'
     *   '<S947>/Vector'
     *   '<S1111>/Vector'
     *   '<S1112>/Vector'
     *   '<S1269>/Vector'
     *   '<S1270>/Vector'
     *   '<S1427>/Vector'
     *   '<S1428>/Vector'
     */
    {
        8U, 4U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S943>/Vector'
     *   '<S944>/Vector'
     *   '<S1106>/Vector'
     *   '<S1107>/Vector'
     *   '<S1264>/Vector'
     *   '<S1265>/Vector'
     *   '<S1422>/Vector'
     *   '<S1423>/Vector'
     */
    {
        7U, 4U
    },

    /* Computed Parameter: Vector_maxIndex_l
     * Referenced by: '<S521>/Vector'
     */
    {
        3U, 4U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S730>/Vector'
     *   '<S731>/Vector'
     *   '<S732>/Vector'
     *   '<S733>/Vector'
     *   '<S739>/Vector'
     */
    {
        5U, 4U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_WTAR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_WTAR
#include "MemMap.h"

VAR(B_WTAR_ac_T, WTAR_VAR_INIT) WTAR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_WTAR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_WTAR
#include "MemMap.h"

VAR(DW_WTAR_ac_T, WTAR_VAR_INIT) WTAR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_WTAR
#include "MemMap.h"

static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_Enabled(VAR(float32, AUTOMATIC)
    rtu_To_PreDelay, VAR(float32, AUTOMATIC) rtu_To_AfterDelay, VAR(float32,
    AUTOMATIC) rtu_MinPedal, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_To,
    P2VAR(DW_Enabled_WTAR_ac_T, AUTOMATIC, WTAR_VAR_INIT) localDW);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_Pass(VAR(float32, AUTOMATIC)
    rtu_To_AfterDelay, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_To);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_ConvertSingletoUint16_1(VAR(float32,
    AUTOMATIC) rtu_Single_In, P2VAR(B_ConvertSingletoUint16_1_WTA_T, AUTOMATIC,
    WTAR_VAR_INIT) localB);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_WashMemory(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(uint16, AUTOMATIC) rtu_Iteration_Num, VAR(uint16, AUTOMATIC)
    rtu_CurrentIndex, VAR(float32, AUTOMATIC) rtu_CurrentInput, P2VAR
    (B_WashMemory_WTAR_ac_T, AUTOMATIC, WTAR_VAR_INIT) localB);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_ByPass(P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_LU, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_LD);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_ZeroPedalLash(VAR(float32, AUTOMATIC)
    rtu_ToRqst, VAR(float32, AUTOMATIC) rtu_No, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_LeWTAR_dM_ZeroPedalLash_LU, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_LeWTAR_dM_ZeroPedalLash_LD);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_InNegLashCntrl(VAR(float32, AUTOMATIC)
    rtu_ToRequstLmtd, VAR(float32, AUTOMATIC) rtu_No, VAR(float32, AUTOMATIC)
    rtu_NegLashFac, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT)
    rty_LeWTAR_dM_InNegLash_LU, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_LD);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_PosSlowResp(VAR(float32, AUTOMATIC)
    rtu_Kd, VAR(float32, AUTOMATIC) rtu_ToRsrv, VAR(float32, AUTOMATIC) rtu_Kt,
    P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KD_PS, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KT_PS);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_PosFastResp(P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KD_PF, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KT_PF);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_NegSlowResp(VAR(float32, AUTOMATIC)
    rtu_Kd, VAR(float32, AUTOMATIC) rtu_ToRsrv, VAR(float32, AUTOMATIC) rtu_Kt,
    P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KD_NS, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KT_NS);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_NegFastResp(P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KD_NF, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KT_NF);
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_InPosLashCntrl(VAR(float32, AUTOMATIC)
    rtu_ToRequstLmtd, VAR(float32, AUTOMATIC) rtu_No, VAR(float32, AUTOMATIC)
    rtu_PosLashFac, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_LU, P2VAR
    (float32, AUTOMATIC, WTAR_VAR_INIT) rty_LeWTAR_dM_InPosLash_LD);

/*
 * Output and update for action system:
 *    '<S874>/Enabled'
 *    '<S1036>/Enabled'
 *    '<S1195>/Enabled'
 *    '<S1353>/Enabled'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_Enabled(VAR(float32, AUTOMATIC)
    rtu_To_PreDelay, VAR(float32, AUTOMATIC) rtu_To_AfterDelay, VAR(float32,
    AUTOMATIC) rtu_MinPedal, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_To,
    P2VAR(DW_Enabled_WTAR_ac_T, AUTOMATIC, WTAR_VAR_INIT) localDW)
{
    float32 rtb_Sum2_gp;

    /* Outputs for Atomic SubSystem: '<S877>/GradientLimiter' */
    /* Sum: '<S881>/Sum2' incorporates:
     *  UnitDelay: '<S881>/Unit Delay'
     */
    rtb_Sum2_gp = rtu_To_PreDelay - localDW->UnitDelay_DSTATE;

    /* Outputs for Atomic SubSystem: '<S881>/Limiter' */
    /* Switch: '<S886>/Switch1' incorporates:
     *  Constant: '<S882>/Calib'
     *  RelationalOperator: '<S886>/Relational Operator'
     */
    if (KeWTAR_dM_TipInRtLimitHi < rtb_Sum2_gp)
    {
        /* Switch: '<S886>/Switch1' */
        rtb_Sum2_gp = KeWTAR_dM_TipInRtLimitHi;
    }

    /* End of Switch: '<S886>/Switch1' */

    /* Switch: '<S886>/Switch' incorporates:
     *  Constant: '<S883>/Calib'
     *  RelationalOperator: '<S886>/Relational Operator1'
     */
    if (rtb_Sum2_gp <= KeWTAR_dM_TipInRtLimitLo)
    {
        rtb_Sum2_gp = KeWTAR_dM_TipInRtLimitLo;
    }

    /* End of Switch: '<S886>/Switch' */
    /* End of Outputs for SubSystem: '<S881>/Limiter' */

    /* Sum: '<S881>/Sum3' incorporates:
     *  UnitDelay: '<S881>/Unit Delay'
     */
    rtb_Sum2_gp += localDW->UnitDelay_DSTATE;

    /* Outputs for Atomic SubSystem: '<S881>/Limiter1' */
    /* Switch: '<S887>/Switch1' incorporates:
     *  Constant: '<S877>/Constant Value2'
     *  RelationalOperator: '<S887>/Relational Operator'
     */
    if (100000.0F < rtb_Sum2_gp)
    {
        /* MinMax: '<S877>/MinMax2' */
        rtb_Sum2_gp = 100000.0F;
    }

    /* End of Switch: '<S887>/Switch1' */

    /* Switch: '<S887>/Switch' incorporates:
     *  RelationalOperator: '<S887>/Relational Operator1'
     */
    if (rtb_Sum2_gp <= rtu_MinPedal)
    {
        /* Switch: '<S887>/Switch' */
        rtb_Sum2_gp = rtu_MinPedal;
    }

    /* End of Switch: '<S887>/Switch' */
    /* End of Outputs for SubSystem: '<S881>/Limiter1' */

    /* Update for UnitDelay: '<S881>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_Sum2_gp;

    /* End of Outputs for SubSystem: '<S877>/GradientLimiter' */

    /* MinMax: '<S877>/MinMax1' incorporates:
     *  MinMax: '<S877>/MinMax2'
     */
    *rty_To = fmaxf(fminf(rtb_Sum2_gp, rtu_To_PreDelay), rtu_To_AfterDelay);
}

/*
 * Output and update for action system:
 *    '<S874>/Pass'
 *    '<S1036>/Pass'
 *    '<S1195>/Pass'
 *    '<S1353>/Pass'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_Pass(VAR(float32, AUTOMATIC)
    rtu_To_AfterDelay, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_To)
{
    /* Gain: '<S888>/Gain' */
    *rty_To = rtu_To_AfterDelay;
}

/*
 * Output and update for atomic system:
 *    '<S875>/ConvertSingletoUint16_1'
 *    '<S875>/ConvertSingletoUint16_2'
 *    '<S1039>/ConvertSingletoUint16_1'
 *    '<S1039>/ConvertSingletoUint16_2'
 *    '<S1198>/ConvertSingletoUint16_1'
 *    '<S1198>/ConvertSingletoUint16_2'
 *    '<S1356>/ConvertSingletoUint16_1'
 *    '<S1356>/ConvertSingletoUint16_2'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_ConvertSingletoUint16_1(VAR(float32,
    AUTOMATIC) rtu_Single_In, P2VAR(B_ConvertSingletoUint16_1_WTA_T, AUTOMATIC,
    WTAR_VAR_INIT) localB)
{
    /* Chart: '<S875>/ConvertSingletoUint16_1' */
    /* Gateway: WTAR_ProcessTrqReq/HTDR_Aditional_Delay/LagforTipInTipOut/ConvertSingletoUint16_1 */
    /* During: WTAR_ProcessTrqReq/HTDR_Aditional_Delay/LagforTipInTipOut/ConvertSingletoUint16_1 */
    /* Entry Internal: WTAR_ProcessTrqReq/HTDR_Aditional_Delay/LagforTipInTipOut/ConvertSingletoUint16_1 */
    /* Transition: '<S889>:7' */
    if (rtu_Single_In < 1.0F)
    {
        /* Transition: '<S889>:9' */
        /* Transition: '<S889>:2' */
        localB->Uint16_out = 0U;

        /* Transition: '<S889>:3' */
        /* Transition: '<S889>:113' */
        /* Transition: '<S889>:116' */
        /* Transition: '<S889>:118' */
        /* Transition: '<S889>:120' */
        /* Transition: '<S889>:122' */
        /* Transition: '<S889>:124' */
        /* Transition: '<S889>:126' */
        /* Transition: '<S889>:128' */
        /* Transition: '<S889>:130' */
        /* Transition: '<S889>:132' */
        /* Transition: '<S889>:134' */
        /* Transition: '<S889>:136' */
        /* Transition: '<S889>:138' */
        /* Transition: '<S889>:140' */
        /* Transition: '<S889>:141' */
        /* Transition: '<S889>:143' */
    }
    else
    {
        /* Transition: '<S889>:11' */
        if (rtu_Single_In < 2.0F)
        {
            /* Transition: '<S889>:8' */
            /* Transition: '<S889>:4' */
            localB->Uint16_out = 1U;

            /* Transition: '<S889>:6' */
            /* Transition: '<S889>:116' */
            /* Transition: '<S889>:118' */
            /* Transition: '<S889>:120' */
            /* Transition: '<S889>:122' */
            /* Transition: '<S889>:124' */
            /* Transition: '<S889>:126' */
            /* Transition: '<S889>:128' */
            /* Transition: '<S889>:130' */
            /* Transition: '<S889>:132' */
            /* Transition: '<S889>:134' */
            /* Transition: '<S889>:136' */
            /* Transition: '<S889>:138' */
            /* Transition: '<S889>:140' */
            /* Transition: '<S889>:141' */
            /* Transition: '<S889>:143' */
        }
        else
        {
            /* Transition: '<S889>:5' */
            if (rtu_Single_In < 3.0F)
            {
                /* Transition: '<S889>:12' */
                /* Transition: '<S889>:10' */
                localB->Uint16_out = 2U;

                /* Transition: '<S889>:13' */
                /* Transition: '<S889>:118' */
                /* Transition: '<S889>:120' */
                /* Transition: '<S889>:122' */
                /* Transition: '<S889>:124' */
                /* Transition: '<S889>:126' */
                /* Transition: '<S889>:128' */
                /* Transition: '<S889>:130' */
                /* Transition: '<S889>:132' */
                /* Transition: '<S889>:134' */
                /* Transition: '<S889>:136' */
                /* Transition: '<S889>:138' */
                /* Transition: '<S889>:140' */
                /* Transition: '<S889>:141' */
                /* Transition: '<S889>:143' */
            }
            else
            {
                /* Transition: '<S889>:20' */
                if (rtu_Single_In < 4.0F)
                {
                    /* Transition: '<S889>:21' */
                    /* Transition: '<S889>:1' */
                    localB->Uint16_out = 3U;

                    /* Transition: '<S889>:19' */
                    /* Transition: '<S889>:120' */
                    /* Transition: '<S889>:122' */
                    /* Transition: '<S889>:124' */
                    /* Transition: '<S889>:126' */
                    /* Transition: '<S889>:128' */
                    /* Transition: '<S889>:130' */
                    /* Transition: '<S889>:132' */
                    /* Transition: '<S889>:134' */
                    /* Transition: '<S889>:136' */
                    /* Transition: '<S889>:138' */
                    /* Transition: '<S889>:140' */
                    /* Transition: '<S889>:141' */
                    /* Transition: '<S889>:143' */
                }
                else
                {
                    /* Transition: '<S889>:16' */
                    if (rtu_Single_In < 5.0F)
                    {
                        /* Transition: '<S889>:15' */
                        /* Transition: '<S889>:18' */
                        localB->Uint16_out = 4U;

                        /* Transition: '<S889>:17' */
                        /* Transition: '<S889>:122' */
                        /* Transition: '<S889>:124' */
                        /* Transition: '<S889>:126' */
                        /* Transition: '<S889>:128' */
                        /* Transition: '<S889>:130' */
                        /* Transition: '<S889>:132' */
                        /* Transition: '<S889>:134' */
                        /* Transition: '<S889>:136' */
                        /* Transition: '<S889>:138' */
                        /* Transition: '<S889>:140' */
                        /* Transition: '<S889>:141' */
                        /* Transition: '<S889>:143' */
                    }
                    else
                    {
                        /* Transition: '<S889>:14' */
                        if (rtu_Single_In < 6.0F)
                        {
                            /* Transition: '<S889>:36' */
                            /* Transition: '<S889>:37' */
                            localB->Uint16_out = 5U;

                            /* Transition: '<S889>:35' */
                            /* Transition: '<S889>:124' */
                            /* Transition: '<S889>:126' */
                            /* Transition: '<S889>:128' */
                            /* Transition: '<S889>:130' */
                            /* Transition: '<S889>:132' */
                            /* Transition: '<S889>:134' */
                            /* Transition: '<S889>:136' */
                            /* Transition: '<S889>:138' */
                            /* Transition: '<S889>:140' */
                            /* Transition: '<S889>:141' */
                            /* Transition: '<S889>:143' */
                        }
                        else
                        {
                            /* Transition: '<S889>:32' */
                            if (rtu_Single_In < 7.0F)
                            {
                                /* Transition: '<S889>:31' */
                                /* Transition: '<S889>:34' */
                                localB->Uint16_out = 6U;

                                /* Transition: '<S889>:28' */
                                /* Transition: '<S889>:126' */
                                /* Transition: '<S889>:128' */
                                /* Transition: '<S889>:130' */
                                /* Transition: '<S889>:132' */
                                /* Transition: '<S889>:134' */
                                /* Transition: '<S889>:136' */
                                /* Transition: '<S889>:138' */
                                /* Transition: '<S889>:140' */
                                /* Transition: '<S889>:141' */
                                /* Transition: '<S889>:143' */
                            }
                            else
                            {
                                /* Transition: '<S889>:29' */
                                if (rtu_Single_In < 8.0F)
                                {
                                    /* Transition: '<S889>:27' */
                                    /* Transition: '<S889>:26' */
                                    localB->Uint16_out = 7U;

                                    /* Transition: '<S889>:24' */
                                    /* Transition: '<S889>:128' */
                                    /* Transition: '<S889>:130' */
                                    /* Transition: '<S889>:132' */
                                    /* Transition: '<S889>:134' */
                                    /* Transition: '<S889>:136' */
                                    /* Transition: '<S889>:138' */
                                    /* Transition: '<S889>:140' */
                                    /* Transition: '<S889>:141' */
                                    /* Transition: '<S889>:143' */
                                }
                                else
                                {
                                    /* Transition: '<S889>:25' */
                                    if (rtu_Single_In < 9.0F)
                                    {
                                        /* Transition: '<S889>:23' */
                                        /* Transition: '<S889>:22' */
                                        localB->Uint16_out = 8U;

                                        /* Transition: '<S889>:30' */
                                        /* Transition: '<S889>:130' */
                                        /* Transition: '<S889>:132' */
                                        /* Transition: '<S889>:134' */
                                        /* Transition: '<S889>:136' */
                                        /* Transition: '<S889>:138' */
                                        /* Transition: '<S889>:140' */
                                        /* Transition: '<S889>:141' */
                                        /* Transition: '<S889>:143' */
                                    }
                                    else
                                    {
                                        /* Transition: '<S889>:33' */
                                        if (rtu_Single_In < 10.0F)
                                        {
                                            /* Transition: '<S889>:40' */
                                            /* Transition: '<S889>:45' */
                                            localB->Uint16_out = 9U;

                                            /* Transition: '<S889>:41' */
                                            /* Transition: '<S889>:132' */
                                            /* Transition: '<S889>:134' */
                                            /* Transition: '<S889>:136' */
                                            /* Transition: '<S889>:138' */
                                            /* Transition: '<S889>:140' */
                                            /* Transition: '<S889>:141' */
                                            /* Transition: '<S889>:143' */
                                        }
                                        else
                                        {
                                            /* Transition: '<S889>:39' */
                                            if (rtu_Single_In < 11.0F)
                                            {
                                                /* Transition: '<S889>:38' */
                                                /* Transition: '<S889>:42' */
                                                localB->Uint16_out = 10U;

                                                /* Transition: '<S889>:60' */
                                                /* Transition: '<S889>:134' */
                                                /* Transition: '<S889>:136' */
                                                /* Transition: '<S889>:138' */
                                                /* Transition: '<S889>:140' */
                                                /* Transition: '<S889>:141' */
                                                /* Transition: '<S889>:143' */
                                            }
                                            else
                                            {
                                                /* Transition: '<S889>:61' */
                                                if (rtu_Single_In < 12.0F)
                                                {
                                                    /* Transition: '<S889>:59' */
                                                    /* Transition: '<S889>:58' */
                                                    localB->Uint16_out = 11U;

                                                    /* Transition: '<S889>:56' */
                                                    /* Transition: '<S889>:136' */
                                                    /* Transition: '<S889>:138' */
                                                    /* Transition: '<S889>:140' */
                                                    /* Transition: '<S889>:141' */
                                                    /* Transition: '<S889>:143' */
                                                }
                                                else
                                                {
                                                    /* Transition: '<S889>:57' */
                                                    if (rtu_Single_In < 13.0F)
                                                    {
                                                        /* Transition: '<S889>:55' */
                                                        /* Transition: '<S889>:54' */
                                                        localB->Uint16_out = 12U;

                                                        /* Transition: '<S889>:62' */
                                                        /* Transition: '<S889>:138' */
                                                        /* Transition: '<S889>:140' */
                                                        /* Transition: '<S889>:141' */
                                                        /* Transition: '<S889>:143' */
                                                    }
                                                    else
                                                    {
                                                        /* Transition: '<S889>:43' */
                                                        if (rtu_Single_In <
                                                                14.0F)
                                                        {
                                                            /* Transition: '<S889>:53' */
                                                            /* Transition: '<S889>:52' */
                                                            localB->Uint16_out =
                                                                13U;

                                                            /* Transition: '<S889>:50' */
                                                            /* Transition: '<S889>:140' */
                                                            /* Transition: '<S889>:141' */
                                                            /* Transition: '<S889>:143' */
                                                        }
                                                        else
                                                        {
                                                            /* Transition: '<S889>:51' */
                                                            if (rtu_Single_In <
                                                                    15.0F)
                                                            {
                                                                /* Transition: '<S889>:49' */
                                                                /* Transition: '<S889>:48' */
                                                                localB->Uint16_out
                                                                    = 14U;

                                                                /* Transition: '<S889>:46' */
                                                                /* Transition: '<S889>:141' */
                                                                /* Transition: '<S889>:143' */
                                                            }
                                                            else
                                                            {
                                                                /* Transition: '<S889>:44' */
                                                                localB->Uint16_out
                                                                    = 15U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    /* End of Chart: '<S875>/ConvertSingletoUint16_1' */
    /* Transition: '<S889>:145' */
}

/*
 * Output and update for enable system:
 *    '<S876>/WashMemory'
 *    '<S1040>/WashMemory'
 *    '<S1199>/WashMemory'
 *    '<S1357>/WashMemory'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_WashMemory(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(uint16, AUTOMATIC) rtu_Iteration_Num, VAR(uint16, AUTOMATIC)
    rtu_CurrentIndex, VAR(float32, AUTOMATIC) rtu_CurrentInput, P2VAR
    (B_WashMemory_WTAR_ac_T, AUTOMATIC, WTAR_VAR_INIT) localB)
{
    sint32 tmp;
    sint16 rtb_Gain_a;
    sint16 rtb_Sum3_ay;
    sint16 s909_iter;

    /* Outputs for Enabled SubSystem: '<S876>/WashMemory' incorporates:
     *  EnablePort: '<S906>/Enable'
     */
    if (rtu_Enable)
    {
        /* Gain: '<S906>/Gain' */
        rtb_Gain_a = (sint16)rtu_Iteration_Num;

        /* Sum: '<S906>/Sum3' incorporates:
         *  Constant: '<S906>/Constant Value3'
         *  Gain: '<S906>/Gain1'
         */
        rtb_Sum3_ay = (sint16)(((sint16)rtu_CurrentIndex) + 1);

        /* Switch: '<S906>/Switch' incorporates:
         *  Constant: '<S906>/Constant Value2'
         *  Constant: '<S906>/Constant Value3'
         *  Gain: '<S906>/Gain'
         *  Gain: '<S906>/Gain1'
         *  RelationalOperator: '<S906>/Comparison'
         *  Sum: '<S906>/Sum1'
         *  Sum: '<S906>/Sum3'
         */
        if (((sint16)(((sint16)(((sint16)rtu_CurrentIndex) + 1)) - ((sint16)
                rtu_Iteration_Num))) <= 0)
        {
            /* Switch: '<S906>/Switch' incorporates:
             *  Constant: '<S906>/Constant Value1'
             *  Sum: '<S906>/Sum2'
             */
            rtb_Sum3_ay = (sint16)(((sint16)(((sint16)rtu_CurrentIndex) + 1)) +
                                   32);
        }

        /* End of Switch: '<S906>/Switch' */

        /* Outputs for Iterator SubSystem: '<S906>/ForIterator' incorporates:
         *  ForIterator: '<S909>/ForIterator'
         */
        /* Gain: '<S906>/Gain' */
        if (((sint16)rtu_Iteration_Num) > 32766)
        {
            rtb_Gain_a = 32766;
        }
        else
        {
            if (((sint16)rtu_Iteration_Num) < 0)
            {
                rtb_Gain_a = 0;
            }
        }

        for (s909_iter = 1; s909_iter <= rtb_Gain_a; s909_iter++)
        {
            /* Sum: '<S909>/Sum2' incorporates:
             *  Gain: '<S909>/Gain1'
             */
            tmp = ((sint32)((uint16)rtb_Sum3_ay)) - ((sint32)s909_iter);
            if (tmp < 0)
            {
                tmp = 0;
            }

            /* Assignment: '<S909>/Array Assignment' incorporates:
             *  S-Function (sfix_bitop): '<S909>/Bitwise Logical Operator'
             *  Sum: '<S909>/Sum2'
             */
            localB->ArrayAssignment[tmp & 31] = rtu_CurrentInput;
        }

        /* End of Outputs for SubSystem: '<S906>/ForIterator' */
    }

    /* End of Outputs for SubSystem: '<S876>/WashMemory' */
}

/*
 * Output and update for action system:
 *    '<S824>/ByPass'
 *    '<S995>/ByPass'
 *    '<S1154>/ByPass'
 *    '<S1312>/ByPass'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_ByPass(P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_LU, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_LD)
{
    /* SignalConversion generated from: '<S910>/LU' incorporates:
     *  Constant: '<S936>/Calib'
     */
    *rty_LU = KeWTAR_dM_BypassLashLU_PstFil;

    /* SignalConversion generated from: '<S910>/LD' incorporates:
     *  Constant: '<S935>/Calib'
     */
    *rty_LD = KeWTAR_dM_BypassLashLD_PstFil;
}

/*
 * Output and update for action system:
 *    '<S824>/ZeroPedalLash'
 *    '<S995>/ZeroPedalLash'
 *    '<S1154>/ZeroPedalLash'
 *    '<S1312>/ZeroPedalLash'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_ZeroPedalLash(VAR(float32, AUTOMATIC)
    rtu_ToRqst, VAR(float32, AUTOMATIC) rtu_No, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_LeWTAR_dM_ZeroPedalLash_LU, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_LeWTAR_dM_ZeroPedalLash_LD)
{
    /* Lookup_n-D: '<S946>/Vector' */
    *rty_LeWTAR_dM_ZeroPedalLash_LD = look2_iflf_binlcapw(rtu_ToRqst, rtu_No, ((
        const float32 *)&(KxWTAR_dM_ZeroPedalLash_LD_PstFil[0])), ((const
        float32 *)&(KyWTAR_dM_ZeroPedalLash_LD_PstFil[0])), ((const float32 *)
        &(KtWTAR_dM_ZeroPedalLash_LD_PstFil[0])), WTAR_ac_ConstP.pooled20, 9U);

    /* Lookup_n-D: '<S947>/Vector' */
    *rty_LeWTAR_dM_ZeroPedalLash_LU = look2_iflf_binlcapw(rtu_ToRqst, rtu_No, ((
        const float32 *)&(KxWTAR_dM_ZeroPedalLash_LU_PstFil[0])), ((const
        float32 *)&(KyWTAR_dM_ZeroPedalLash_LU_PstFil[0])), ((const float32 *)
        &(KtWTAR_dM_ZeroPedalLash_LU_PstFil[0])), WTAR_ac_ConstP.pooled20, 9U);
}

/*
 * Output and update for action system:
 *    '<S824>/InNegLashCntrl'
 *    '<S995>/InNegLashCntrl'
 *    '<S1154>/InNegLashCntrl'
 *    '<S1312>/InNegLashCntrl'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_InNegLashCntrl(VAR(float32, AUTOMATIC)
    rtu_ToRequstLmtd, VAR(float32, AUTOMATIC) rtu_No, VAR(float32, AUTOMATIC)
    rtu_NegLashFac, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT)
    rty_LeWTAR_dM_InNegLash_LU, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_LD)
{
    /* Product: '<S918>/Multiplication1' incorporates:
     *  Lookup_n-D: '<S940>/Vector'
     */
    *rty_LD = rtu_NegLashFac * look2_iflf_binlcapw(rtu_ToRequstLmtd, rtu_No, ((
        const float32 *)&(KxWTAR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
        &(KyWTAR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
        &(KtWTAR_dM_InPosLash_LD_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U);

    /* Product: '<S918>/Multiplication5' incorporates:
     *  Lookup_n-D: '<S939>/Vector'
     */
    *rty_LeWTAR_dM_InNegLash_LU = look2_iflf_binlcapw(rtu_ToRequstLmtd, rtu_No,
        ((const float32 *)&(KxWTAR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
        &(KyWTAR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
        &(KtWTAR_dM_InNegLash_LU_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U) *
        rtu_NegLashFac;
}

/*
 * Output and update for action system:
 *    '<S948>/PosSlowResp'
 *    '<S1113>/PosSlowResp'
 *    '<S1271>/PosSlowResp'
 *    '<S1429>/PosSlowResp'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_PosSlowResp(VAR(float32, AUTOMATIC)
    rtu_Kd, VAR(float32, AUTOMATIC) rtu_ToRsrv, VAR(float32, AUTOMATIC) rtu_Kt,
    P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KD_PS, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KT_PS)
{
    float32 rtb_Sum_l;

    /* Sum: '<S964>/Sum' incorporates:
     *  Lookup_n-D: '<S975>/Vector'
     */
    rtb_Sum_l = rtu_Kd + look1_iflf_binlcapw(rtu_ToRsrv, ((const float32 *)
        &(KxWTAR_k_KD_PosSlowRespTo[0])), ((const float32 *)
        &(KtWTAR_k_KD_PosSlowRespTo[0])), 4U);

    /* Outputs for Atomic SubSystem: '<S964>/Limiter' */
    /* Switch: '<S977>/Switch1' incorporates:
     *  Constant: '<S964>/Constant Value2'
     *  RelationalOperator: '<S977>/Relational Operator'
     */
    if (1.0F < rtb_Sum_l)
    {
        /* Switch: '<S977>/Switch1' */
        rtb_Sum_l = 1.0F;
    }

    /* End of Switch: '<S977>/Switch1' */

    /* Switch: '<S977>/Switch' incorporates:
     *  Constant: '<S964>/Constant Value1'
     *  RelationalOperator: '<S977>/Relational Operator1'
     */
    if (rtb_Sum_l > 0.0F)
    {
        *rty_KD_PS = rtb_Sum_l;
    }
    else
    {
        *rty_KD_PS = 0.0F;
    }

    /* End of Switch: '<S977>/Switch' */
    /* End of Outputs for SubSystem: '<S964>/Limiter' */

    /* Sum: '<S964>/Sum1' incorporates:
     *  Lookup_n-D: '<S976>/Vector'
     */
    rtb_Sum_l = look1_iflf_binlcapw(rtu_ToRsrv, ((const float32 *)
        &(KxWTAR_k_KT_PosSlowRespTo[0])), ((const float32 *)
        &(KtWTAR_k_KT_PosSlowRespTo[0])), 4U) + rtu_Kt;

    /* Outputs for Atomic SubSystem: '<S964>/Limiter1' */
    /* Switch: '<S978>/Switch1' incorporates:
     *  Constant: '<S964>/Constant Value2'
     *  RelationalOperator: '<S978>/Relational Operator'
     */
    if (1.0F < rtb_Sum_l)
    {
        /* Switch: '<S978>/Switch1' */
        rtb_Sum_l = 1.0F;
    }

    /* End of Switch: '<S978>/Switch1' */

    /* Switch: '<S978>/Switch' incorporates:
     *  Constant: '<S964>/Constant Value1'
     *  RelationalOperator: '<S978>/Relational Operator1'
     */
    if (rtb_Sum_l > 0.0F)
    {
        *rty_KT_PS = rtb_Sum_l;
    }
    else
    {
        *rty_KT_PS = 0.0F;
    }

    /* End of Switch: '<S978>/Switch' */
    /* End of Outputs for SubSystem: '<S964>/Limiter1' */
}

/*
 * Output and update for action system:
 *    '<S948>/PosFastResp'
 *    '<S1113>/PosFastResp'
 *    '<S1271>/PosFastResp'
 *    '<S1429>/PosFastResp'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_PosFastResp(P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KD_PF, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KT_PF)
{
    /* SignalConversion generated from: '<S963>/KD_PF' incorporates:
     *  Constant: '<S973>/Calib'
     */
    *rty_KD_PF = KeWTAR_k_KD_Pos_Fast;

    /* SignalConversion generated from: '<S963>/KT_PF' incorporates:
     *  Constant: '<S974>/Calib'
     */
    *rty_KT_PF = KeWTAR_k_KT_Pos_Fast;
}

/*
 * Output and update for action system:
 *    '<S948>/NegSlowResp'
 *    '<S1113>/NegSlowResp'
 *    '<S1271>/NegSlowResp'
 *    '<S1429>/NegSlowResp'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_NegSlowResp(VAR(float32, AUTOMATIC)
    rtu_Kd, VAR(float32, AUTOMATIC) rtu_ToRsrv, VAR(float32, AUTOMATIC) rtu_Kt,
    P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KD_NS, P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KT_NS)
{
    float32 rtb_Sum_n;

    /* Sum: '<S961>/Sum' incorporates:
     *  Lookup_n-D: '<S969>/Vector'
     */
    rtb_Sum_n = rtu_Kd + look1_iflf_binlcapw(rtu_ToRsrv, ((const float32 *)
        &(KxWTAR_k_KD_NegSlowRespTo[0])), ((const float32 *)
        &(KtWTAR_k_KD_NegSlowRespTo[0])), 4U);

    /* Outputs for Atomic SubSystem: '<S961>/Limiter' */
    /* Switch: '<S971>/Switch1' incorporates:
     *  Constant: '<S961>/Constant Value2'
     *  RelationalOperator: '<S971>/Relational Operator'
     */
    if (1.0F < rtb_Sum_n)
    {
        /* Switch: '<S971>/Switch1' */
        rtb_Sum_n = 1.0F;
    }

    /* End of Switch: '<S971>/Switch1' */

    /* Switch: '<S971>/Switch' incorporates:
     *  Constant: '<S961>/Constant Value1'
     *  RelationalOperator: '<S971>/Relational Operator1'
     */
    if (rtb_Sum_n > 0.0F)
    {
        *rty_KD_NS = rtb_Sum_n;
    }
    else
    {
        *rty_KD_NS = 0.0F;
    }

    /* End of Switch: '<S971>/Switch' */
    /* End of Outputs for SubSystem: '<S961>/Limiter' */

    /* Sum: '<S961>/Sum1' incorporates:
     *  Lookup_n-D: '<S970>/Vector'
     */
    rtb_Sum_n = look1_iflf_binlcapw(rtu_ToRsrv, ((const float32 *)
        &(KxWTAR_k_KT_NegSlowRespTo[0])), ((const float32 *)
        &(KtWTAR_k_KT_NegSlowRespTo[0])), 4U) + rtu_Kt;

    /* Outputs for Atomic SubSystem: '<S961>/Limiter1' */
    /* Switch: '<S972>/Switch1' incorporates:
     *  Constant: '<S961>/Constant Value2'
     *  RelationalOperator: '<S972>/Relational Operator'
     */
    if (1.0F < rtb_Sum_n)
    {
        /* Switch: '<S972>/Switch1' */
        rtb_Sum_n = 1.0F;
    }

    /* End of Switch: '<S972>/Switch1' */

    /* Switch: '<S972>/Switch' incorporates:
     *  Constant: '<S961>/Constant Value1'
     *  RelationalOperator: '<S972>/Relational Operator1'
     */
    if (rtb_Sum_n > 0.0F)
    {
        *rty_KT_NS = rtb_Sum_n;
    }
    else
    {
        *rty_KT_NS = 0.0F;
    }

    /* End of Switch: '<S972>/Switch' */
    /* End of Outputs for SubSystem: '<S961>/Limiter1' */
}

/*
 * Output and update for action system:
 *    '<S948>/NegFastResp'
 *    '<S1113>/NegFastResp'
 *    '<S1271>/NegFastResp'
 *    '<S1429>/NegFastResp'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_NegFastResp(P2VAR(float32, AUTOMATIC,
    WTAR_VAR_INIT) rty_KD_NF, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_KT_NF)
{
    /* SignalConversion generated from: '<S960>/KD_NF' incorporates:
     *  Constant: '<S967>/Calib'
     */
    *rty_KD_NF = KeWTAR_k_KD_Neg_Fast;

    /* SignalConversion generated from: '<S960>/KT_NF' incorporates:
     *  Constant: '<S968>/Calib'
     */
    *rty_KT_NF = KeWTAR_k_KT_Neg_Fast;
}

/*
 * Output and update for action system:
 *    '<S995>/InPosLashCntrl'
 *    '<S1154>/InPosLashCntrl'
 */
static FUNC(void, WTAR_CODE_LOCAL) WTAR_ac_InPosLashCntrl(VAR(float32, AUTOMATIC)
    rtu_ToRequstLmtd, VAR(float32, AUTOMATIC) rtu_No, VAR(float32, AUTOMATIC)
    rtu_PosLashFac, P2VAR(float32, AUTOMATIC, WTAR_VAR_INIT) rty_LU, P2VAR
    (float32, AUTOMATIC, WTAR_VAR_INIT) rty_LeWTAR_dM_InPosLash_LD)
{
    /* Product: '<S1082>/Multiplication1' incorporates:
     *  Lookup_n-D: '<S1105>/Vector'
     */
    *rty_LeWTAR_dM_InPosLash_LD = look2_iflf_binlcapw(rtu_ToRequstLmtd, rtu_No,
        ((const float32 *)&(KxWTAR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
        &(KyWTAR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
        &(KtWTAR_dM_InPosLash_LD_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U) *
        rtu_PosLashFac;

    /* Product: '<S1082>/Multiplication2' incorporates:
     *  Lookup_n-D: '<S1104>/Vector'
     */
    *rty_LU = rtu_PosLashFac * look2_iflf_binlcapw(rtu_ToRequstLmtd, rtu_No, ((
        const float32 *)&(KxWTAR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
        &(KyWTAR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
        &(KtWTAR_dM_InNegLash_LU_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U);
}

/* Model step function for TID1 */
FUNC(void, WTAR_CODE) WTAR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_2;
    float32 tmpRead_3;
    TeBRKR_e_AHH_ReadyStatus tmpRead_4;
    TePTAR_e_ImmediateTorqRespType tmpRead_1;

#if !Rte_SysCon_Variant_WTAR_8

    TeTISR_e_InpSpdDfltSource tmpRead_5;

#endif

#if !Rte_SysCon_Variant_WTAR_8

    TeSTRR_e_HybStrtrSt tmpRead_6;

#endif

    float32 tmpRead_7[9];
    TeBRKR_e_OPDHoldStatus tmpRead_9;
    TeTRNR_e_TCMGearStat tmpRead_8;

#if Rte_SysCon_Variant_WTAR_10

    TeTMDR_e_TrrnMd tmpRead_a;

#endif

#if Rte_SysCon_Variant_WTAR_4

    TeTMDR_e_LockLowSt tmpRead_b;

#endif

#if Rte_SysCon_Variant_WTAR_1

    TeTRNR_e_TCMTgtMdReq tmpRead_c;

#endif

#if Rte_SysCon_Variant_WTAR_1

    TeHSER_e_PropulsionMode tmpRead_d;

#endif

    sint16 tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_g;

#if !Rte_SysCon_Variant_WTAR_10 && !Rte_SysCon_Variant_WTAR_4

    TeDMIR_e_DriveStyleSts tmpRead_h;

#endif

    TePTAR_e_ImmediateTorqRespType tmpRead_i;

#if Rte_SysCon_Variant_WTAR_3

    boolean tmpRead_j;

#endif

    float32 rtb_VariantMerge_For_Variant__a[6];
    float32 rtb_Switch1_hk[3];
    float32 rtb_VariantMerge_For_Variant__f[2];
    float32 rtb_Abs1;
    float32 rtb_Abs1_gm;
    float32 rtb_Gain;
    float32 rtb_MinMax18;
    float32 rtb_MinMax_n;
    float32 rtb_Switch13;
    float32 rtb_Switch14;
    float32 rtb_TmpSignalConversionAtVeBTQR;
    float32 rtb_TmpSignalConversionAtVeCTCR;
    float32 rtb_TmpSignalConversionAtVeCT_n;
    float32 rtb_TmpSignalConversionAtVeDT_i;
    float32 rtb_TmpSignalConversionAtVeESPR;
    float32 rtb_TmpSignalConversionAtVeHSCR;
    float32 rtb_TmpSignalConversionAtVeHS_m;
    float32 rtb_TmpSignalConversionAtVeMSPR;
    float32 rtb_TmpSignalConversionAtVeMS_e;
    float32 rtb_TmpSignalConversionAtVeTRNR;
    float32 rtb_UnitDelay3_kz;
    uint16 rtb_Switch_pb;
    TeADCR_e_AWDSysStat tmpRead_l;
    TeAPSR_e_Lv1PvMode tmpRead_m;
    TeTIMR_e_LaunchIntensity tmpRead_k;
    uint8 rtb_VariantMerge_For_Variant__h;
    boolean rtb_UnitDelay_hm[4];
    boolean rtb_Comparison12;
    boolean rtb_NotEqual2_c;
    boolean rtb_OR1_ad;
    boolean rtb_TmpSignalConversionAtVeAECR;
    boolean rtb_TmpSignalConversionAtVeBRKR;
    boolean rtb_TmpSignalConversionAtVeCCTR;
    boolean rtb_TmpSignalConversionAtVeD_ly;
    boolean rtb_TmpSignalConversionAtVeSRAR;
    boolean rtb_TmpSignalConversionAtVeSR_f;
    boolean rtb_TmpSignalConversionAtVeSR_p;
    boolean rtb_UnitDelay_gs;
    boolean rtb_VariantMerge_For_Variant__d;

#if !Rte_SysCon_Variant_WTAR_2 || Rte_SysCon_Variant_WTAR_9

    float32 rtb_Switch_as[2];

#endif

    float32 rtb_TmpSignalConversionAtVeSCCR;
    boolean rtb_TmpSignalConversionAtVeAS_j;
    boolean rtb_TmpSignalConversionAtVeSC_h;

#if !Rte_SysCon_Variant_WTAR_8

    boolean rtb_TmpSignalConversionAtVePMDR;

#endif

    float32 rtb_Switch1_i0j[2];
    float32 rtb_Sum3_gl;
    float32 rtb_Switch1_mxa;
    float32 rtb_Switch2_ol5;
    float32 rtb_Switch3_c1;
    float32 rtb_TmpSignalConversionAtVeA_b3;
    float32 rtb_TmpSignalConversionAtVeCS_n;
    float32 rtb_TmpSignalConversionAtVeCT_m;
    float32 rtb_TmpSignalConversionAtVeDTRR;
    float32 rtb_TmpSignalConversionAtVeDT_m;
    float32 rtb_TmpSignalConversionAtVeM_mo;
    boolean rtb_AND_p4;
    boolean rtb_Equal2_ow;
    boolean rtb_NotEqual_ka;

#if Rte_SysCon_Variant_WTAR_10 || Rte_SysCon_Variant_WTAR_4

    uint8 rtb_TmpSignalConversionAtVeDMDR;

#endif

#if Rte_SysCon_Variant_WTAR_10 || Rte_SysCon_Variant_WTAR_4

    uint8 rtb_TmpSignalConversionAtVeTMDR;

#endif

    float32 rtb_Sum1_oe;
    float32 rtb_Sum2;
    float32 rtb_Sum4_a;
    float32 rtb_Switch1_bbt;
    float32 rtb_Switch1_ee;
    float32 rtb_Switch1_mh;
    float32 rtb_Switch3_k3z;
    float32 rtb_Switch_fq;
    float32 rtb_TmpSignalConversionAtVeAXLR;
    float32 rtb_TmpSignalConversionAtVeTISR;
    float32 rtb_TmpSignalConversionAtVeVSDR;
    float32 rtb_UnitDelay_co;
    uint16 rtb_Switch1_av;
    uint16 rtb_Switch1_g;
    boolean rtb_AND_a2v;
    boolean rtb_AND_au;
    boolean rtb_AND_ok;
    boolean rtb_OR1_a5;
    boolean rtb_OR1_em;
    boolean rtb_OR1_f24;
    boolean rtb_TmpSignalConversionAtVeTRGR;

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch2_js;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch2_ik;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_UnitDelay_p4;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch2_gl;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch2_ou;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch3_mt;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_UnitDelay1_oi;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch2_o0;

#endif

#if Rte_SysCon_Variant_WTAR_9

    float32 rtb_Switch2_bqf;

#endif

#if Rte_SysCon_Variant_WTAR_9

    float32 rtb_Switch2_jq;

#endif

    float32 rtb_Summation_g5;

#if !Rte_SysCon_Variant_WTAR_8

    float32 rtb_Switch_jv;

#endif

#if !Rte_SysCon_Variant_WTAR_8

    boolean rtb_TmpSignalConversionAtVeSTRR;

#endif

#if !Rte_SysCon_Variant_WTAR_8

    float32 rtb_TmpSignalConversionAtVeINVR;

#endif

#if Rte_SysCon_Variant_WTAR_9

    float32 rtb_Summation_la;

#endif

#if Rte_SysCon_Variant_WTAR_9

    float32 rtb_Summation_ce;

#endif

    float32 rtb_Sum2_id;
    float32 rtb_Sum2_md;
    float32 rtb_Vector_bo;
    boolean rtb_AND_di;
    boolean rtb_TmpSignalConversionAtVeDT_a;

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Sum2_lf[2];

#endif

    float32 rtb_TmpSignalConversionAtVeAX_b;

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch1_o1;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch1_ev;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch1_as;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch1_hw;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch1_how;

#endif

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Switch1_d3;

#endif

    float32 rtb_Switch9_hi;

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Max_m;

#endif

    float32 rtb_Maximum_i;
    float32 rtb_Maximum_jf;

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_Max_d;

#endif

#if Rte_SysCon_Variant_WTAR_9

    float32 rtb_Max_ob;

#endif

#if Rte_SysCon_Variant_WTAR_9

    float32 rtb_Max;

#endif

    float32 rtb_Sum3_aq;
    float32 rtb_TmpSignalConversionAtVeBPCR;
    float32 rtb_TmpSignalConversionAtVeBT_h;
    float32 rtb_TmpSignalConversionAtVeCS_l;

#if Rte_SysCon_Variant_WTAR_1

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeT_oy;

#endif

#if Rte_SysCon_Variant_WTAR_1

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTR_h;

#endif

    float32 rtb_TmpSignalConversionAtVeSC_c;
    float32 rtb_TmpSignalConversionAtVeSC_f;
    float32 rtb_TmpSignalConversionAtVeSC_j;
    float32 rtb_TmpSignalConversionAtVeS_dq;
    TeBRKR_e_BrkPdl_Stat rtb_TmpSignalConversionAtVeBR_d;
    TeDTRR_e_SumFWIDFst rtb_TmpSignalConversionAtVeDT_o;
    TeDTRR_e_SumFWIDFst rtb_TmpSignalConversionAtVeD_k5;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR;
    TeHADR_e_LashSt rtb_TmpSignalConversionAtVeHADR;
    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHSER;
    TeHTDR_e_AHH_ApplyReleaseReq rtb_TmpSignalConversionAtVeHTDR;
    TePLTR_e_EPBHoldSts rtb_TmpSignalConversionAtVePLTR;
    TeTIMR_e_RaceModeSts rtb_TmpSignalConversionAtVeTI_j;
    TeTIMR_e_RaceOptions rtb_TmpSignalConversionAtVeTIMR;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTR_g;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTR_c;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTR_k;
    TeWTAR_e_PedalTrqArb rtb_VeWTAC_e_ToTypeAftSOCArb;

#if !Rte_SysCon_Variant_WTAR_2

    float32 rtb_TmpSignalConversionAtVeASLR;

#endif

    sint32 i;
    float32 Gain_pj;
    float32 Switch1_f_idx_2;
    float32 Switch1_f_idx_3;
    float32 VeWTAC_M_ToPrdt_xSEM;
    float32 rtb_TmpSignalConversionAtVeAX_k;
    float32 rtb_VariantMerge_For_Varian_a_0;
    float32 rtb_VariantMerge_For_Varian_a_1;
    float32 rtb_VariantMerge_For_Varian_a_2;
    float32 rtb_VariantMerge_For_Varian_a_3;
    float32 rtb_VariantMerge_For_Varian_a_4;
    float32 rtb_VariantMerge_For_Varian_a_5;
    float32 rtb_VariantMerge_For_Varian_a_6;
    float32 *rtb_Switch1_hy_0;
    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR;
    boolean Switch1_g;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_TmpSignalConversionAtVeMSPR);

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_TmpSignalConversionAtVeTISR);

    /* SignalConversion generated from: '<S1>/VeHADR_e_LashSt' incorporates:
     *  Inport: '<Root>/VeHADR_e_LashSt'
     */
    (void)Rte_Read_VeHADR_e_LashSt_Value(&rtb_TmpSignalConversionAtVeHADR);

    /* SignalConversion generated from: '<S1>/VeBTQR_M_DrvrIntndedTotBrkTrq' incorporates:
     *  Inport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq'
     */
    (void)Rte_Read_VeBTQR_M_DrvrIntndedTotBrkTrq_Value
        (&rtb_TmpSignalConversionAtVeBTQR);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S1>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&rtb_TmpSignalConversionAtVeBR_d);

    /* SignalConversion generated from: '<S1>/VeHTDR_e_AHH_ApplyRelease_Req' incorporates:
     *  Inport: '<Root>/VeHTDR_e_AHH_ApplyRelease_Req'
     */
    (void)Rte_Read_VeHTDR_e_AHH_ApplyRelease_Req_Value
        (&rtb_TmpSignalConversionAtVeHTDR);

    /* SignalConversion generated from: '<S1>/VeBRKR_b_BrkPedalDscrtInptFA' incorporates:
     *  Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
     */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value
        (&rtb_TmpSignalConversionAtVeBRKR);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrA_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&rtb_TmpSignalConversionAtVeMS_e);

    /* SignalConversion generated from: '<S1>/VeDTRR_e_SumFWIDFst' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDFst_Value(&rtb_TmpSignalConversionAtVeD_k5);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTR_g);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR);

    /* SignalConversion generated from: '<S1>/VeMSPR_phi_MtrBPosAngle' */
#if !Rte_SysCon_Variant_WTAR_8

    /* SignalConversion generated from: '<S1>/VeMSPR_phi_MtrBPosAngle' incorporates:
     *  Inport: '<Root>/VeMSPR_phi_MtrBPosAngle'
     */
    (void)Rte_Read_VeMSPR_phi_MtrBPosAngle_Value
        (&rtb_TmpSignalConversionAtVeM_mo);

#endif

    /* End of SignalConversion generated from: '<S1>/VeMSPR_phi_MtrBPosAngle' */

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value(&rtb_TmpSignalConversionAtVeCS_n);

    /* SignalConversion generated from: '<S1>/VePMDR_b_RunCrankActive' */
#if !Rte_SysCon_Variant_WTAR_8

    /* SignalConversion generated from: '<S1>/VePMDR_b_RunCrankActive' incorporates:
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value
        (&rtb_TmpSignalConversionAtVePMDR);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMDR_b_RunCrankActive' */

    /* SignalConversion generated from: '<S1>/VePLTR_e_EPBHoldSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value(&rtb_TmpSignalConversionAtVePLTR);

    /* SignalConversion generated from: '<S1>/VeINVR_T_MtrA_InvrtrTemp' */
#if !Rte_SysCon_Variant_WTAR_8

    /* SignalConversion generated from: '<S1>/VeINVR_T_MtrA_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeINVR_T_MtrA_InvrtrTemp' */

    /* SignalConversion generated from: '<S1>/VeDTRR_e_SumFWIDSlw' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDSlw_Value(&rtb_TmpSignalConversionAtVeDT_o);

    /* SignalConversion generated from: '<S1>/VeHSCR_n_Max_MtrA_Spd' incorporates:
     *  Inport: '<Root>/VeHSCR_n_Max_MtrA_Spd'
     */
    (void)Rte_Read_VeHSCR_n_Max_MtrA_Spd_Value(&rtb_TmpSignalConversionAtVeHSCR);

    /* SignalConversion generated from: '<S1>/VeHSCR_n_Max_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeHSCR_n_Max_MtrB_Spd'
     */
    (void)Rte_Read_VeHSCR_n_Max_MtrB_Spd_Value(&rtb_TmpSignalConversionAtVeHS_m);

    /* SignalConversion generated from: '<S1>/VeESPR_n_EngSpdMaxLim' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngSpdMaxLim'
     */
    (void)Rte_Read_VeESPR_n_EngSpdMaxLim_Value(&rtb_TmpSignalConversionAtVeESPR);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value(&rtb_TmpSignalConversionAtVeVSDR);

    /* SignalConversion generated from: '<S1>/VeTRNR_n_NtiMaxATRR' incorporates:
     *  Inport: '<Root>/VeTRNR_n_NtiMaxATRR'
     */
    (void)Rte_Read_VeTRNR_n_NtiMaxATRR_Value(&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl' incorporates:
     *  Inport: '<Root>/VeBTQR_r_TrqDmnConvSumToAxl'
     */
    (void)Rte_Read_VeBTQR_r_TrqDmnConvSumToAxl_Value
        (&rtb_TmpSignalConversionAtVeBT_h);

    /* SignalConversion generated from: '<S1>/VeAXLR_M_OutTorqReqModHH_Axle' incorporates:
     *  Inport: '<Root>/VeAXLR_M_OutTorqReqModHH_Axle'
     */
    (void)Rte_Read_VeAXLR_M_OutTorqReqModHH_Axle_Value
        (&rtb_TmpSignalConversionAtVeAXLR);

    /* SignalConversion generated from: '<S1>/VeAECR_b_AeCoastStat' incorporates:
     *  Inport: '<Root>/VeAECR_b_AeCoastStat'
     */
    (void)Rte_Read_VeAECR_b_AeCoastStat_Value(&rtb_TmpSignalConversionAtVeAECR);

    /* SignalConversion generated from: '<S1>/VeDTRR_b_OPD_Active' incorporates:
     *  Inport: '<Root>/VeDTRR_b_OPD_Active'
     */
    (void)Rte_Read_VeDTRR_b_OPD_Active_Value(&rtb_TmpSignalConversionAtVeD_ly);

    /* SignalConversion generated from: '<S1>/VeDTRR_M_MgateMinTrq' incorporates:
     *  Inport: '<Root>/VeDTRR_M_MgateMinTrq'
     */
    (void)Rte_Read_VeDTRR_M_MgateMinTrq_Value(&rtb_TmpSignalConversionAtVeDTRR);

    /* SignalConversion generated from: '<S1>/VeTRGR_b_ManualMode' incorporates:
     *  Inport: '<Root>/VeTRGR_b_ManualMode'
     */
    (void)Rte_Read_VeTRGR_b_ManualMode_Value(&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S1>/VeCCTR_b_CcEngaged' incorporates:
     *  Inport: '<Root>/VeCCTR_b_CcEngaged'
     */
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value(&rtb_TmpSignalConversionAtVeCCTR);

    /* SignalConversion generated from: '<S1>/VeTMDR_i_TrueTrrnMd' */
#if Rte_SysCon_Variant_WTAR_10 || Rte_SysCon_Variant_WTAR_4

    /* SignalConversion generated from: '<S1>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  Inport: '<Root>/VeTMDR_i_TrueTrrnMd'
     */
    (void)Rte_Read_VeTMDR_i_TrueTrrnMd_Value(&rtb_TmpSignalConversionAtVeTMDR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMDR_i_TrueTrrnMd' */

    /* SignalConversion generated from: '<S1>/VeASLR_M_PIDTrq' */
#if !Rte_SysCon_Variant_WTAR_2

    /* SignalConversion generated from: '<S1>/VeASLR_M_PIDTrq' incorporates:
     *  Inport: '<Root>/VeASLR_M_PIDTrq'
     */
    (void)Rte_Read_VeASLR_M_PIDTrq_Value(&rtb_TmpSignalConversionAtVeASLR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeASLR_M_PIDTrq' */

    /* SignalConversion generated from: '<S1>/VeASLR_b_ASLActive' incorporates:
     *  Inport: '<Root>/VeASLR_b_ASLActive'
     */
    (void)Rte_Read_VeASLR_b_ASLActive_Value(&rtb_TmpSignalConversionAtVeAS_j);

    /* SignalConversion generated from: '<S1>/VeCTCR_M_WheelTrqMinOverrev' incorporates:
     *  Inport: '<Root>/VeCTCR_M_WheelTrqMinOverrev'
     */
    (void)Rte_Read_VeCTCR_M_WheelTrqMinOverrev_Value
        (&rtb_TmpSignalConversionAtVeCTCR);

    /* SignalConversion generated from: '<S1>/VeCSVR_a_VehAccel' incorporates:
     *  Inport: '<Root>/VeCSVR_a_VehAccel'
     */
    (void)Rte_Read_VeCSVR_a_VehAccel_Value(&rtb_TmpSignalConversionAtVeCS_l);

    /* SignalConversion generated from: '<S1>/VeAXLR_M_MinTransTo_Axle' incorporates:
     *  Inport: '<Root>/VeAXLR_M_MinTransTo_Axle'
     */
    (void)Rte_Read_VeAXLR_M_MinTransTo_Axle_Value
        (&rtb_TmpSignalConversionAtVeA_b3);

    /* SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4ECM' incorporates:
     *  Inport: '<Root>/VeCTCR_M_WheelMin4ECM'
     */
    (void)Rte_Read_VeCTCR_M_WheelMin4ECM_Value(&rtb_TmpSignalConversionAtVeCT_n);

    /* SignalConversion generated from: '<S1>/VeAXLR_M_OutTorqMaxArb_xSEM_Axle' incorporates:
     *  Inport: '<Root>/VeAXLR_M_OutTorqMaxArb_xSEM_Axle'
     */
    (void)Rte_Read_VeAXLR_M_OutTorqMaxArb_xSEM_Axle_Value
        (&rtb_TmpSignalConversionAtVeAX_k);

    /* SignalConversion generated from: '<S1>/VeDTRR_M_DrvLnTrqRqMod_Axle' */
#if Rte_SysCon_Variant_WTAR_3

    /* SignalConversion generated from: '<S1>/VeDTRR_M_DrvLnTrqRqMod_Axle' incorporates:
     *  Inport: '<Root>/VeDTRR_M_DrvLnTrqRqMod_Axle'
     */
    (void)Rte_Read_VeDTRR_M_DrvLnTrqRqMod_Axle_Value
        (&rtb_TmpSignalConversionAtVeDT_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDTRR_M_DrvLnTrqRqMod_Axle' */

    /* SignalConversion generated from: '<S1>/VeSRAR_b_ReducedPerfMode' incorporates:
     *  Inport: '<Root>/VeSRAR_b_ReducedPerfMode'
     */
    (void)Rte_Read_VeSRAR_b_ReducedPerfMode_Value
        (&rtb_TmpSignalConversionAtVeSRAR);

    /* SignalConversion generated from: '<S1>/VeSRAR_b_ReducedPerfMode2' incorporates:
     *  Inport: '<Root>/VeSRAR_b_ReducedPerfMode2'
     */
    (void)Rte_Read_VeSRAR_b_ReducedPerfMode2_Value
        (&rtb_TmpSignalConversionAtVeSR_p);

    /* SignalConversion generated from: '<S1>/VeDMDR_i_DrvMdArbIdx' */
#if Rte_SysCon_Variant_WTAR_10 || Rte_SysCon_Variant_WTAR_4

    /* SignalConversion generated from: '<S1>/VeDMDR_i_DrvMdArbIdx' incorporates:
     *  Inport: '<Root>/VeDMDR_i_DrvMdArbIdx'
     */
    (void)Rte_Read_VeDMDR_i_DrvMdArbIdx_Value(&rtb_TmpSignalConversionAtVeDMDR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMDR_i_DrvMdArbIdx' */

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceOptions_Sts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceOptions_Sts'
     */
    (void)Rte_Read_VeTIMR_e_RaceOptions_Sts_Value
        (&rtb_TmpSignalConversionAtVeTIMR);

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value(&rtb_TmpSignalConversionAtVeTI_j);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_OutputTorqueLimit' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCCR_b_OutputTorqueLimit_CAN_FA'
     */
#if Rte_SysCon_Variant_WTAR_9

    /* SignalConversion generated from: '<S1>/VeSCCR_M_OutputTorqueLimit' incorporates:
     *  Inport: '<Root>/VeSCCR_M_OutputTorqueLimit'
     */
    (void)Rte_Read_VeSCCR_M_OutputTorqueLimit_Value
        (&rtb_TmpSignalConversionAtVeSCCR);

    /* SignalConversion generated from: '<S1>/VeSCCR_b_OutputTorqueLimit_CAN_FA' incorporates:
     *  Inport: '<Root>/VeSCCR_b_OutputTorqueLimit_CAN_FA'
     */
    (void)Rte_Read_VeSCCR_b_OutputTorqueLimit_CAN_FA_Value
        (&rtb_TmpSignalConversionAtVeSC_h);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSCCR_M_OutputTorqueLimit' */

    /* SignalConversion generated from: '<S1>/VeSTRR_b_EngOnReq' */
#if !Rte_SysCon_Variant_WTAR_8

    /* SignalConversion generated from: '<S1>/VeSTRR_b_EngOnReq' incorporates:
     *  Inport: '<Root>/VeSTRR_b_EngOnReq'
     */
    (void)Rte_Read_VeSTRR_b_EngOnReq_Value(&rtb_TmpSignalConversionAtVeSTRR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTRR_b_EngOnReq' */

    /* SignalConversion generated from: '<S1>/VeAXLR_M_To_CL_Fast_Axle' incorporates:
     *  Inport: '<Root>/VeAXLR_M_To_CL_Fast_Axle'
     */
    (void)Rte_Read_VeAXLR_M_To_CL_Fast_Axle_Value
        (&rtb_TmpSignalConversionAtVeAX_b);

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value(&rtb_TmpSignalConversionAtVeFWDR);

    /* SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMax' incorporates:
     *  Inport: '<Root>/VeDTRR_M_AxleTrqReqMax'
     */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqMax_Value(&rtb_TmpSignalConversionAtVeDT_m);

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrq' incorporates:
     *  Inport: '<Root>/VeCTCR_M_MinCreepWheelTrq'
     */
    (void)Rte_Read_VeCTCR_M_MinCreepWheelTrq_Value
        (&rtb_TmpSignalConversionAtVeCT_m);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C3Stat'
     */
#if Rte_SysCon_Variant_WTAR_1

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_C1Stat'
     */
    (void)Rte_Read_VeTRNR_e_C1Stat_Value(&rtb_TmpSignalConversionAtVeT_oy);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C3Stat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_C3Stat'
     */
    (void)Rte_Read_VeTRNR_e_C3Stat_Value(&rtb_TmpSignalConversionAtVeTR_h);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeINVR_T_MtrC_Temp' */
    (void)Rte_Read_VeINVR_T_MtrC_Temp_Value(&rtb_Switch9_hi);

    /* Inport: '<Root>/VeAXLR_M_SumMaxTrqDsrd_Axle' */
    (void)Rte_Read_VeAXLR_M_SumMaxTrqDsrd_Axle_Value(&rtb_Switch3_c1);

    /* Inport: '<Root>/VeDTRR_M_NormalMinStgc' */
    (void)Rte_Read_VeDTRR_M_NormalMinStgc_Value(&rtb_Sum1_oe);

    /* Inport: '<Root>/VeFWDR_r_Axle_Ratio' */
    (void)Rte_Read_VeFWDR_r_Axle_Ratio_Value(&rtb_Maximum_i);

    /* Inport: '<Root>/VeFWDR_r_TCaseRatio' */
    (void)Rte_Read_VeFWDR_r_TCaseRatio_Value(&rtb_Switch1_bbt);

    /* Inport: '<Root>/VeAXLR_M_OutTorqReqModTactMax_Axle' */
    (void)Rte_Read_VeAXLR_M_OutTorqReqModTactMax_Axle_Value(&rtb_Maximum_jf);

    /* Inport: '<Root>/VeINVR_T_MtrA_Temp' */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value(&rtb_Gain);

    /* Inport: '<Root>/VeENGR_T_EngCoolantTemp' */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&rtb_Switch1_mxa);

    /* Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp' */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value(&rtb_Summation_g5);

    /* Inport: '<Root>/VeINVR_T_MtrB_Temp' */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value(&rtb_Sum2_id);

    /* Inport: '<Root>/VePLTR_p_AmbientAirPrs' */
    (void)Rte_Read_VePLTR_p_AmbientAirPrs_Value(&rtb_Switch14);

    /* Inport: '<Root>/VeBRKR_b_ImpndSkid' */
    (void)Rte_Read_VeBRKR_b_ImpndSkid_Value(&rtb_NotEqual_ka);

    /* Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value(&rtb_Switch13);

    /* Inport: '<Root>/VeTFTR_T_TransOilTemp' */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&Switch1_f_idx_2);

    /* Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition' */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value(&Switch1_f_idx_3);

    /* Inport: '<Root>/VeDTRR_M_AxleTrqPotential' */
    (void)Rte_Read_VeDTRR_M_AxleTrqPotential_Value(&tmpRead_3);

    /* Inport: '<Root>/VeDTRR_M_AxleTrqReqMin' */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqMin_Value(&tmpRead_2);

    /* Inport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrqRaw' */
    (void)Rte_Read_VeDTRR_M_DrvrIntndedAxleTrqRaw_Value(&tmpRead_0);

    /* Inport: '<Root>/VeDTRR_M_AxleTrqReqPrdt' */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqPrdt_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&rtb_TmpSignalConversionAtVeTR_k);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_TCMActualEvenGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TCMActualEvenGear'
     */
    (void)Rte_Read_VeTRNR_e_TCMActualEvenGear_Value
        (&rtb_TmpSignalConversionAtVeTR_c);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  Inport: '<Root>/VeSCCR_M_FrntAxlMaxRq'
     */
    (void)Rte_Read_VeSCCR_M_FrntAxlMaxRq_Value(&rtb_TmpSignalConversionAtVeS_dq);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  Inport: '<Root>/VeSCCR_M_FrntAxlMinRq'
     */
    (void)Rte_Read_VeSCCR_M_FrntAxlMinRq_Value(&rtb_TmpSignalConversionAtVeSC_f);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  Inport: '<Root>/VeSCCR_M_RrAxlMaxRq'
     */
    (void)Rte_Read_VeSCCR_M_RrAxlMaxRq_Value(&rtb_TmpSignalConversionAtVeSC_c);

    /* SignalConversion generated from: '<S1>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  Inport: '<Root>/VeSCCR_M_RrAxlMinRq'
     */
    (void)Rte_Read_VeSCCR_M_RrAxlMinRq_Value(&rtb_TmpSignalConversionAtVeSC_j);

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S1>/VeSRAR_b_CreepTorqMode' incorporates:
     *  Inport: '<Root>/VeSRAR_b_CreepTorqMode'
     */
    (void)Rte_Read_VeSRAR_b_CreepTorqMode_Value(&rtb_TmpSignalConversionAtVeSR_f);

    /* SignalConversion generated from: '<S1>/VeDTRR_b_Lv2RdPrfmActive' incorporates:
     *  Inport: '<Root>/VeDTRR_b_Lv2RdPrfmActive'
     */
    (void)Rte_Read_VeDTRR_b_Lv2RdPrfmActive_Value
        (&rtb_TmpSignalConversionAtVeDT_a);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/WTAR_InputsProcess'
     */
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S1487>/Calib'
     */
    if (KeWTAR_b_OvrdCmndPrdtAxleTorq)
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S1468>/Calib'
         */
        VeWTAI_M_CmndPrdtAxleTorq = KeWTAR_M_CmndPrdtAxleTorq;
    }
    else
    {
        /* Switch: '<S8>/Switch' */
        VeWTAI_M_CmndPrdtAxleTorq = tmpRead;
    }

    /* End of Switch: '<S8>/Switch' */

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S1488>/Calib'
     */
    if (KeWTAR_b_OvrdDrvrIntndedAxleTorqRaw)
    {
        /* Switch: '<S8>/Switch1' incorporates:
         *  Constant: '<S1469>/Calib'
         */
        VeWTAI_M_DrvrIntndedAxleTorqRaw = KeWTAR_M_DrvrIntndedAxleTorqRaw;
    }
    else
    {
        /* Switch: '<S8>/Switch1' */
        VeWTAI_M_DrvrIntndedAxleTorqRaw = tmpRead_0;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Switch: '<S8>/Switch35' incorporates:
     *  Constant: '<S1499>/Calib'
     */
    if (KeWTAR_b_OvrdZeroPedalAxlTorqFiltd)
    {
        /* Switch: '<S8>/Switch35' incorporates:
         *  Constant: '<S1472>/Calib'
         */
        VeWTAI_M_AxleTrqReqMin = KeWTAR_M_ZeroPedalAxlTorqFiltd;
    }
    else
    {
        /* Switch: '<S8>/Switch35' */
        VeWTAI_M_AxleTrqReqMin = tmpRead_2;
    }

    /* End of Switch: '<S8>/Switch35' */

    /* Switch: '<S8>/Switch7' incorporates:
     *  Constant: '<S1483>/Calib'
     */
    if (KeWTAR_b_OvrdAccelEffPosition)
    {
        /* Switch: '<S8>/Switch7' incorporates:
         *  Constant: '<S1473>/Calib'
         */
        VeWTAI_Pct_AccelPedalEffPosition = KeWTAR_Pct_AccelEffPosition;
    }
    else
    {
        /* Switch: '<S8>/Switch7' */
        VeWTAI_Pct_AccelPedalEffPosition = Switch1_f_idx_3;
    }

    /* End of Switch: '<S8>/Switch7' */

    /* Switch: '<S8>/Switch30' incorporates:
     *  Constant: '<S1498>/Calib'
     */
    if (KeWTAR_b_OvrdTrnOilTemp)
    {
        /* Switch: '<S8>/Switch30' incorporates:
         *  Constant: '<S1480>/Calib'
         */
        VeWTAI_T_TrnOilTemp = KeWTAR_T_TrnOilTemp;
    }
    else
    {
        /* Switch: '<S8>/Switch30' */
        VeWTAI_T_TrnOilTemp = Switch1_f_idx_2;
    }

    /* End of Switch: '<S8>/Switch30' */

    /* Switch: '<S8>/Switch11' incorporates:
     *  Constant: '<S1490>/Calib'
     */
    if (KeWTAR_b_OvrdHV_BatSOC)
    {
        /* Switch: '<S8>/Switch11' incorporates:
         *  Constant: '<S1474>/Calib'
         */
        VeWTAI_Pct_HV_BatPackSOC_Arb = KeWTAR_Pct_HV_BatSOC;
    }
    else
    {
        /* Switch: '<S8>/Switch11' */
        VeWTAI_Pct_HV_BatPackSOC_Arb = rtb_Switch13;
    }

    /* End of Switch: '<S8>/Switch11' */

    /* Switch: '<S8>/Switch19' incorporates:
     *  Constant: '<S1491>/Calib'
     */
    if (KeWTAR_b_OvrdImpndSkid)
    {
        /* Switch: '<S8>/Switch19' incorporates:
         *  Constant: '<S1481>/Calib'
         */
        VeWTAI_b_ImpndSkid = KeWTAR_b_ImpndSkid;
    }
    else
    {
        /* Switch: '<S8>/Switch19' */
        VeWTAI_b_ImpndSkid = rtb_NotEqual_ka;
    }

    /* End of Switch: '<S8>/Switch19' */

    /* Switch: '<S8>/Switch25' incorporates:
     *  Constant: '<S1486>/Calib'
     */
    if (KeWTAR_b_OvrdBarPrsAbs)
    {
        /* Switch: '<S8>/Switch25' incorporates:
         *  Constant: '<S1500>/Calib'
         */
        VeWTAI_p_AmbientAirPrs = KeWTAR_p_BarPrsAbs;
    }
    else
    {
        /* Switch: '<S8>/Switch25' */
        VeWTAI_p_AmbientAirPrs = rtb_Switch14;
    }

    /* End of Switch: '<S8>/Switch25' */

    /* Switch: '<S8>/Switch26' incorporates:
     *  Constant: '<S1494>/Calib'
     */
    if (KeWTAR_b_OvrdMtrB_Temp)
    {
        /* Switch: '<S8>/Switch26' incorporates:
         *  Constant: '<S1478>/Calib'
         */
        VeWTAI_T_MtrB_Temp = KeWTAR_T_MtrB_Temp;
    }
    else
    {
        /* Switch: '<S8>/Switch26' */
        VeWTAI_T_MtrB_Temp = rtb_Sum2_id;
    }

    /* End of Switch: '<S8>/Switch26' */

    /* Switch: '<S8>/Switch23' incorporates:
     *  Constant: '<S1493>/Calib'
     */
    if (KeWTAR_b_OvrdMtrB_InvrtrTemp)
    {
        /* Switch: '<S8>/Switch23' incorporates:
         *  Constant: '<S1477>/Calib'
         */
        VeWTAI_T_MtrB_InvrtrTemp = KeWTAR_T_MtrB_InvrtrTemp;
    }
    else
    {
        /* Switch: '<S8>/Switch23' */
        VeWTAI_T_MtrB_InvrtrTemp = rtb_Summation_g5;
    }

    /* End of Switch: '<S8>/Switch23' */

    /* Switch: '<S8>/Switch28' incorporates:
     *  Constant: '<S1489>/Calib'
     */
    if (KeWTAR_b_OvrdEngCltTmp)
    {
        /* Switch: '<S8>/Switch28' incorporates:
         *  Constant: '<S1475>/Calib'
         */
        VeWTAI_T_EngCoolantTemp = KeWTAR_T_EngCltTmp;
    }
    else
    {
        /* Switch: '<S8>/Switch28' */
        VeWTAI_T_EngCoolantTemp = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S8>/Switch28' */

    /* Switch: '<S8>/Switch37' incorporates:
     *  Constant: '<S1492>/Calib'
     */
    if (KeWTAR_b_OvrdMtrA_Temp)
    {
        /* Switch: '<S8>/Switch37' incorporates:
         *  Constant: '<S1476>/Calib'
         */
        VeWTAI_T_MtrA_Temp = KeWTAR_T_MtrA_Temp;
    }
    else
    {
        /* Switch: '<S8>/Switch37' */
        VeWTAI_T_MtrA_Temp = rtb_Gain;
    }

    /* End of Switch: '<S8>/Switch37' */

    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S1485>/Calib'
     */
    if (KeWTAR_b_OvrdAxleTrqPotential)
    {
        /* Switch: '<S8>/Switch2' incorporates:
         *  Constant: '<S1467>/Calib'
         */
        VeWTAI_M_AxleTrqPotential = KeWTAR_M_AxleTrqPotential;
    }
    else
    {
        /* Switch: '<S8>/Switch2' */
        VeWTAI_M_AxleTrqPotential = tmpRead_3;
    }

    /* End of Switch: '<S8>/Switch2' */

    /* Switch: '<S8>/Switch17' incorporates:
     *  Constant: '<S1466>/Calib'
     */
    if (HeWTAR_b_OvrdTactToMaxOvrd_C)
    {
        /* Switch: '<S8>/Switch17' incorporates:
         *  Constant: '<S1465>/Calib'
         */
        VeWTAI_M_OutTorqReqModTactMax = HeWTAR_M_TactToMaxOvrdVal_C;
    }
    else
    {
        /* Switch: '<S8>/Switch17' */
        VeWTAI_M_OutTorqReqModTactMax = rtb_Maximum_jf;
    }

    /* End of Switch: '<S8>/Switch17' */

    /* Switch: '<S8>/Switch10' incorporates:
     *  Constant: '<S1497>/Calib'
     */
    if (KeWTAR_b_OvrdTCaseRatio)
    {
        /* Switch: '<S8>/Switch10' incorporates:
         *  Constant: '<S1502>/Calib'
         */
        VeWTAI_r_TCaseRatio = KeWTAR_r_TCaseRatio;
    }
    else
    {
        /* Switch: '<S8>/Switch10' */
        VeWTAI_r_TCaseRatio = rtb_Switch1_bbt;
    }

    /* End of Switch: '<S8>/Switch10' */

    /* Switch: '<S8>/Switch12' incorporates:
     *  Constant: '<S1484>/Calib'
     */
    if (KeWTAR_b_OvrdAxleRatio)
    {
        /* Switch: '<S8>/Switch12' incorporates:
         *  Constant: '<S1501>/Calib'
         */
        VeWTAI_r_Axle_Ratio = KeWTAR_r_AxleRatio;
    }
    else
    {
        /* Switch: '<S8>/Switch12' */
        VeWTAI_r_Axle_Ratio = rtb_Maximum_i;
    }

    /* End of Switch: '<S8>/Switch12' */

    /* Switch: '<S8>/Switch13' incorporates:
     *  Constant: '<S1482>/Calib'
     */
    if (KeWTAR_b_NormalMin_Ovrd)
    {
        /* Switch: '<S8>/Switch13' incorporates:
         *  Constant: '<S1470>/Calib'
         */
        VeWTAI_M_NormalMinStgc = KeWTAR_M_NormalMin_OvrdVal;
    }
    else
    {
        /* Switch: '<S8>/Switch13' */
        VeWTAI_M_NormalMinStgc = rtb_Sum1_oe;
    }

    /* End of Switch: '<S8>/Switch13' */

    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S1496>/Calib'
     */
    if (KeWTAR_b_OvrdSumMaxTrqDsrd)
    {
        /* Switch: '<S8>/Switch3' incorporates:
         *  Constant: '<S1471>/Calib'
         */
        VeWTAI_M_SumMaxTrqDsrd = KeWTAR_M_SumMaxTrqDsrd;
    }
    else
    {
        /* Switch: '<S8>/Switch3' */
        VeWTAI_M_SumMaxTrqDsrd = rtb_Switch3_c1;
    }

    /* End of Switch: '<S8>/Switch3' */

    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S1495>/Calib'
     */
    if (KeWTAR_b_OvrdMtrC_Temp)
    {
        /* Switch: '<S8>/Switch4' incorporates:
         *  Constant: '<S1479>/Calib'
         */
        VeWTAI_T_MtrC_Temp = KeWTAR_T_MtrC_Temp;
    }
    else
    {
        /* Switch: '<S8>/Switch4' */
        VeWTAI_T_MtrC_Temp = rtb_Switch9_hi;
    }

    /* End of Switch: '<S8>/Switch4' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* RelationalOperator: '<S213>/Equal4' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngStToPropulsionMode'
     *  Inport: '<Root>/VeTRNR_e_TCMTgtMdReq'
     *  Logic: '<S213>/AND2'
     *  Logic: '<S213>/AND3'
     *  Logic: '<S213>/AND4'
     *  Logic: '<S213>/AND5'
     *  MinMax: '<S212>/MinMax'
     *  Product: '<S212>/Multiplication'
     *  Product: '<S212>/Multiplication3'
     *  RelationalOperator: '<S212>/Comparison2'
     *  RelationalOperator: '<S213>/Equal1'
     *  RelationalOperator: '<S213>/Equal2'
     *  RelationalOperator: '<S213>/Equal3'
     *  RelationalOperator: '<S213>/Equal5'
     *  RelationalOperator: '<S213>/Equal6'
     *  SignalConversion generated from: '<S201>/VariantSource'
     *  Sum: '<S212>/Subtraction'
     *  Sum: '<S212>/Summation'
     *  Switch: '<S209>/Switch9'
     *  Switch: '<S210>/Switch6'
     *  Switch: '<S210>/Switch7'
     *  Switch: '<S212>/Switch2'
     *  Switch: '<S212>/Switch3'
     *  Switch: '<S213>/Switch4'
     *  UnitDelay: '<S209>/Unit Delay4'
     *  UnitDelay: '<S212>/Unit Delay'
     *  UnitDelay: '<S212>/Unit Delay1'
     * */
#if Rte_SysCon_Variant_WTAR_1

    /* Outputs for Atomic SubSystem: '<S209>/EdgeBi' */
    (void)Rte_Read_VeHSER_e_RngStToPropulsionMode_Value(&tmpRead_d);

    /* RelationalOperator: '<S213>/Equal4' incorporates:
     *  Constant: '<S222>/Constant'
     *  Inport: '<Root>/VeHSER_e_RngStToPropulsionMode'
     */
    VeWTAC_b_MGateMinSwt4 = (((uint32)tmpRead_d) == CeHSER_e_EVOnly);

    /* RelationalOperator: '<S214>/Not Equal' incorporates:
     *  UnitDelay: '<S214>/Unit Delay'
     */
    rtb_NotEqual_ka = (VeWTAC_b_MGateMinSwt4 != WTAR_ac_DW.UnitDelay_DSTATE_jl);

    /* Update for UnitDelay: '<S214>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jl = VeWTAC_b_MGateMinSwt4;
    if (rtb_NotEqual_ka)
    {
        /* Product: '<S211>/Multiplication11' incorporates:
         *  Constant: '<S212>/Constant Value4'
         */
        rtb_Switch3_c1 = 0.0F;

        /* Switch: '<S212>/Switch2' */
        rtb_Switch2_ol5 = WTAR_ac_DW.UnitDelay4_DSTATE_l;
    }
    else
    {
        if (VeWTAC_b_MGateMinSwt4)
        {
            /* Switch: '<S209>/Switch9' incorporates:
             *  Constant: '<S216>/Calib'
             */
            rtb_Switch9_hi = KeWTAR_t_DCTMinArbRampHybrid2Ev;
        }
        else
        {
            /* Switch: '<S209>/Switch9' incorporates:
             *  Constant: '<S215>/Calib'
             */
            rtb_Switch9_hi = KeWTAR_t_DCTMinArbRamp;
        }

        /* Outputs for Atomic SubSystem: '<S212>/Protected_Division1' */
        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S217>/Calib'
         *  Constant: '<S218>/Constant Value'
         *  Constant: '<S218>/Constant Value1'
         *  Constant: '<S218>/Constant Value2'
         *  Constant: '<S218>/Constant Value3'
         *  Logic: '<S218>/AND'
         *  RelationalOperator: '<S218>/Greater Than or Equal '
         *  RelationalOperator: '<S218>/Greater Than or Equal 1'
         *  RelationalOperator: '<S218>/Not Equal'
         *  RelationalOperator: '<S218>/Not Equal1'
         *  Switch: '<S218>/Switch2'
         *  Switch: '<S218>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_Switch9_hi != 0.0F))
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Product: '<S218>/Division'
             */
            rtb_Switch9_hi = KeWTAR_t_dT / rtb_Switch9_hi;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S218>/Switch2' incorporates:
             *  Constant: '<S218>/MAXFLOAT'
             *  Switch: '<S218>/Switch1'
             */
            rtb_Switch9_hi = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S218>/Switch3' incorporates:
             *  Constant: '<S218>/MINFLOAT'
             *  Switch: '<S218>/Switch1'
             *  Switch: '<S218>/Switch2'
             */
            rtb_Switch9_hi = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S218>/Constant Value4'
             *  Switch: '<S218>/Switch2'
             *  Switch: '<S218>/Switch3'
             */
            rtb_Switch9_hi = 0.0F;
        }

        /* End of Switch: '<S218>/Switch1' */
        /* End of Outputs for SubSystem: '<S212>/Protected_Division1' */

        /* Product: '<S211>/Multiplication11' incorporates:
         *  Sum: '<S212>/Summation1'
         */
        rtb_Switch3_c1 = rtb_Switch9_hi + WTAR_ac_DW.UnitDelay1_DSTATE_ba;

        /* Switch: '<S212>/Switch2' */
        rtb_Switch2_ol5 = WTAR_ac_DW.UnitDelay_DSTATE_e1;
    }

    /* MinMax: '<S212>/MinMax' incorporates:
     *  Constant: '<S212>/Constant Value2'
     *  Switch: '<S209>/Switch9'
     */
    rtb_MinMax_n = fminf(rtb_Switch3_c1, 1.0F);

    /* RelationalOperator: '<S212>/Comparison2' incorporates:
     *  Constant: '<S212>/Constant Value1'
     */
    VeWTAC_b_BlndFacDCTMin = (rtb_MinMax_n < 1.0F);

    /* Logic: '<S213>/AND3' incorporates:
     *  Constant: '<S219>/Constant'
     *  Constant: '<S223>/Constant'
     */
    VeWTAC_b_MGateMinSwt1 = ((((uint32)rtb_TmpSignalConversionAtVeT_oy) ==
        CeHCCR_e_ClActuated) || (((uint32)rtb_TmpSignalConversionAtVeT_oy) ==
        CeHCCR_e_ClReleased));

    /* Logic: '<S213>/AND4' incorporates:
     *  Constant: '<S220>/Constant'
     *  Constant: '<S224>/Constant'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C3Stat'
     */
    VeWTAC_b_MGateMinSwt2 = ((((uint32)rtb_TmpSignalConversionAtVeTR_h) ==
        CeHCCR_e_ClActuated) || (((uint32)rtb_TmpSignalConversionAtVeTR_h) ==
        CeHCCR_e_ClReleased));
    (void)Rte_Read_VeTRNR_e_TCMTgtMdReq_Value(&tmpRead_c);

    /* Logic: '<S213>/AND2' incorporates:
     *  Constant: '<S221>/Constant'
     *  Inport: '<Root>/VeTRNR_e_TCMTgtMdReq'
     */
    VeWTAC_b_MGateMinSwt3 = ((((uint32)tmpRead_c) == CeTRNR_e_PrllEngOff) &&
        ((VeWTAC_b_MGateMinSwt1) || (VeWTAC_b_MGateMinSwt2)));
    if (VeWTAC_b_MGateMinSwt4)
    {
        /* Switch: '<S213>/Switch3' incorporates:
         *  Inport: '<Root>/VeAXLR_M_Clch1Torq_Axle'
         *  Inport: '<Root>/VeAXLR_M_Clch3Torq_Axle'
         */
        if (VeWTAC_b_MGateMinSwt3)
        {
            (void)Rte_Read_VeAXLR_M_Clch3Torq_Axle_Value(&rtb_Sum2_md);
            (void)Rte_Read_VeAXLR_M_Clch1Torq_Axle_Value(&rtb_UnitDelay3_kz);

            /* Switch: '<S213>/Switch1' incorporates:
             *  Constant: '<S213>/Constant Value3'
             *  Inport: '<Root>/VeAXLR_M_Clch1Torq_Axle'
             *  Inport: '<Root>/VeAXLR_M_Clch3Torq_Axle'
             */
            if (!VeWTAC_b_MGateMinSwt1)
            {
                rtb_UnitDelay3_kz = 0.0F;
            }

            /* End of Switch: '<S213>/Switch1' */

            /* Switch: '<S213>/Switch2' incorporates:
             *  Constant: '<S213>/Constant Value1'
             */
            if (!VeWTAC_b_MGateMinSwt2)
            {
                rtb_Sum2_md = 0.0F;
            }

            /* End of Switch: '<S213>/Switch2' */

            /* Switch: '<S213>/Switch3' incorporates:
             *  Sum: '<S213>/Sum1'
             */
            rtb_Switch3_c1 = rtb_UnitDelay3_kz + rtb_Sum2_md;
        }
        else
        {
            /* Switch: '<S213>/Switch3' incorporates:
             *  Constant: '<S213>/Constant Value2'
             */
            rtb_Switch3_c1 = 0.0F;
        }

        /* End of Switch: '<S213>/Switch3' */
    }
    else
    {
        /* Product: '<S211>/Multiplication11' */
        rtb_Switch3_c1 = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* Sum: '<S212>/Summation' incorporates:
     *  Constant: '<S212>/Constant Value'
     */
    VeWTAC_M_MGateMinArbDCT = ((1.0F - rtb_MinMax_n) * rtb_Switch2_ol5) +
        (rtb_MinMax_n * rtb_Switch3_c1);

    /* MinMax: '<S211>/MinMax18' */
    rtb_MinMax18 = VeWTAC_M_MGateMinArbDCT;

    /* End of Outputs for SubSystem: '<S209>/EdgeBi' */
#else

    /* Outputs for Atomic SubSystem: '<S210>/GradientLimiter1' */
    /* Switch: '<S210>/Switch6' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        rtb_Switch13 = rtb_TmpSignalConversionAtVeCTCR;
    }
    else
    {
        rtb_Switch13 = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* Sum: '<S225>/Sum2' incorporates:
     *  UnitDelay: '<S225>/Unit Delay'
     */
    rtb_Sum2_md = rtb_Switch13 - WTAR_ac_DW.UnitDelay_DSTATE_kz;

    /* Outputs for Atomic SubSystem: '<S225>/Limiter' */
    /* Switch: '<S229>/Switch1' incorporates:
     *  Constant: '<S227>/Calib'
     *  RelationalOperator: '<S229>/Relational Operator'
     */
    if (KeWTAR_M_MGateMinLU < rtb_Sum2_md)
    {
        /* MinMax: '<S203>/MinMax6' */
        rtb_Sum2_md = KeWTAR_M_MGateMinLU;
    }

    /* End of Switch: '<S229>/Switch1' */

    /* Switch: '<S229>/Switch' incorporates:
     *  Constant: '<S226>/Calib'
     *  RelationalOperator: '<S229>/Relational Operator1'
     */
    if (rtb_Sum2_md <= KeWTAR_M_MGateMinLD)
    {
        rtb_Sum2_md = KeWTAR_M_MGateMinLD;
    }

    /* End of Switch: '<S229>/Switch' */
    /* End of Outputs for SubSystem: '<S225>/Limiter' */

    /* Sum: '<S225>/Sum3' incorporates:
     *  UnitDelay: '<S225>/Unit Delay'
     */
    rtb_Sum2_md += WTAR_ac_DW.UnitDelay_DSTATE_kz;

    /* Update for UnitDelay: '<S225>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_kz = rtb_Sum2_md;

    /* Switch: '<S210>/Switch7' incorporates:
     *  Constant: '<S228>/Calib'
     */
    if (KeWTAR_b_OvrRevMinBypass)
    {
        /* Switch: '<S210>/Switch7' */
        VeWTAC_M_MGateMinArbNonDCT = rtb_TmpSignalConversionAtVeDTRR;
    }
    else
    {
        /* Switch: '<S210>/Switch7' incorporates:
         *  MinMax: '<S210>/MinMax1'
         */
        VeWTAC_M_MGateMinArbNonDCT = fminf(rtb_TmpSignalConversionAtVeDTRR,
            rtb_Sum2_md);
    }

    /* MinMax: '<S211>/MinMax18' incorporates:
     *  SignalConversion generated from: '<S201>/VariantSource'
     */
    rtb_MinMax18 = VeWTAC_M_MGateMinArbNonDCT;

    /* End of Outputs for SubSystem: '<S210>/GradientLimiter1' */
#endif

    /* End of RelationalOperator: '<S213>/Equal4' */

    /* MinMax: '<S211>/MinMax2' incorporates:
     *  Constant: '<S211>/Constant Value5'
     */
    VeWTAC_M_MGateMinArb = fmaxf(rtb_MinMax18, -9999.0F);

    /* MinMax: '<S211>/MinMax8' */
    rtb_Switch9_hi = fmaxf(VeWTAC_M_MGateMinArb, rtb_TmpSignalConversionAtVeA_b3);

    /* MinMax: '<S211>/MinMax18' incorporates:
     *  Constant: '<S211>/Constant5'
     *  MinMax: '<S211>/MinMax17'
     */
    rtb_MinMax18 = fminf(0.0F, fmaxf(rtb_Switch9_hi,
                          rtb_TmpSignalConversionAtVeCT_m));

    /* SwitchCase: '<S259>/Drv_Prog_Case' incorporates:
     *  Constant: '<S270>/Calib'
     *  Inport: '<Root>/VeTINR_d_TCMLimphomeFaults'
     */
    switch (HeWTAR_i_PRNDLTyp_C)
    {
      case 1:
        /* Outputs for IfAction SubSystem: '<S259>/Reverse_P1P4' incorporates:
         *  ActionPort: '<S273>/Action Port'
         */
        /* RelationalOperator: '<S273>/Equal2' incorporates:
         *  Constant: '<S294>/Constant'
         */
        rtb_Equal2_ow = (((uint32)rtb_TmpSignalConversionAtVeTR_k) ==
                         CeTRNR_e_Neutral);

        /* RelationalOperator: '<S273>/Equal4' incorporates:
         *  Constant: '<S296>/Constant'
         */
        rtb_NotEqual_ka = (((uint32)rtb_TmpSignalConversionAtVeTR_k) ==
                           CeTRNR_e_Reverse);

        /* Outputs for Atomic SubSystem: '<S273>/Turn_On_Delay_Time' */
        /* Outputs for Atomic SubSystem: '<S298>/EdgeRising' */
        /* Logic: '<S300>/AND' incorporates:
         *  Logic: '<S300>/OR1'
         *  UnitDelay: '<S300>/Unit Delay'
         */
        rtb_AND_di = (rtb_Equal2_ow && (!WTAR_ac_DW.UnitDelay_DSTATE_jsg));

        /* Update for UnitDelay: '<S300>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_jsg = rtb_Equal2_ow;

        /* End of Outputs for SubSystem: '<S298>/EdgeRising' */

        /* Switch: '<S298>/Switch1' incorporates:
         *  Logic: '<S298>/OR'
         *  Logic: '<S298>/OR1'
         */
        if ((!rtb_Equal2_ow) || rtb_AND_di)
        {
            /* Switch: '<S298>/Switch1' incorporates:
             *  Constant: '<S298>/Constant Value1'
             */
            rtb_Sum2_md = 0.0F;
        }
        else
        {
            /* Switch: '<S298>/Switch1' incorporates:
             *  Constant: '<S290>/Calib'
             *  Constant: '<S291>/Calib'
             *  MinMax: '<S298>/Minimum'
             *  Sum: '<S298>/Summation'
             *  UnitDelay: '<S298>/Unit Delay'
             */
            rtb_Sum2_md = fminf(KeWTAR_t_PRNDLRevActDly, KeWTAR_t_dT +
                                WTAR_ac_DW.UnitDelay_DSTATE_m4);
        }

        /* End of Switch: '<S298>/Switch1' */

        /* Update for UnitDelay: '<S298>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_m4 = rtb_Sum2_md;

        /* Merge: '<S259>/Merge1' incorporates:
         *  Constant: '<S288>/Calib'
         *  Constant: '<S290>/Calib'
         *  Constant: '<S292>/Constant'
         *  Constant: '<S293>/Constant'
         *  Logic: '<S273>/OR1'
         *  Logic: '<S273>/OR2'
         *  Logic: '<S273>/OR5'
         *  Logic: '<S298>/AND'
         *  RelationalOperator: '<S273>/Equal'
         *  RelationalOperator: '<S273>/Equal1'
         *  RelationalOperator: '<S298>/Greater  Than'
         */
        VeWTAC_b_PRNDLRevAct = ((CeTRGR_e_TransRangeReverse == ((uint32)
            rtb_TmpSignalConversionAtVeTR_g)) && (((CeTRNR_e_Reverse == ((uint32)
            rtb_TmpSignalConversionAtVeTR_k)) || (rtb_Equal2_ow && (rtb_Sum2_md >=
            KeWTAR_t_PRNDLRevActDly))) || (KeWTAR_b_PRNDLActByPass)));

        /* End of Outputs for SubSystem: '<S273>/Turn_On_Delay_Time' */

        /* Outputs for Atomic SubSystem: '<S273>/Turn_Off_Delay_Time' */
        /* Outputs for Atomic SubSystem: '<S297>/EdgeFalling1' */
        /* Logic: '<S299>/OR1' incorporates:
         *  Logic: '<S297>/AND'
         */
        rtb_AND_di = !rtb_NotEqual_ka;

        /* Logic: '<S299>/AND' incorporates:
         *  Logic: '<S299>/OR1'
         *  UnitDelay: '<S299>/Unit Delay'
         */
        rtb_Equal2_ow = (rtb_AND_di && (WTAR_ac_DW.UnitDelay_DSTATE_g1q));

        /* Update for UnitDelay: '<S299>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_g1q = rtb_NotEqual_ka;

        /* End of Outputs for SubSystem: '<S297>/EdgeFalling1' */

        /* Switch: '<S297>/Switch' */
        if (rtb_Equal2_ow)
        {
            /* Switch: '<S297>/Switch' incorporates:
             *  Constant: '<S289>/Calib'
             */
            rtb_Sum2_md = KeWTAR_t_PRNDLDrvActDly;
        }
        else
        {
            /* Switch: '<S297>/Switch' incorporates:
             *  Constant: '<S291>/Calib'
             *  Constant: '<S297>/Constant Value1'
             *  MinMax: '<S297>/Minimum'
             *  Sum: '<S297>/Summation'
             *  UnitDelay: '<S297>/Unit Delay'
             */
            rtb_Sum2_md = fmaxf(WTAR_ac_DW.UnitDelay_DSTATE_hd - KeWTAR_t_dT,
                                0.0F);
        }

        /* End of Switch: '<S297>/Switch' */

        /* Update for UnitDelay: '<S297>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_hd = rtb_Sum2_md;

        /* Merge: '<S259>/Merge2' incorporates:
         *  Constant: '<S288>/Calib'
         *  Constant: '<S295>/Constant'
         *  Constant: '<S297>/Constant Value2'
         *  Logic: '<S273>/OR3'
         *  Logic: '<S273>/OR4'
         *  Logic: '<S273>/OR6'
         *  Logic: '<S297>/AND'
         *  RelationalOperator: '<S273>/Equal3'
         *  RelationalOperator: '<S297>/Greater  Than'
         */
        VeWTAC_b_PRNDLDrvAct = ((CeTRGR_e_TransRangeDrive == ((uint32)
            rtb_TmpSignalConversionAtVeTR_g)) && ((KeWTAR_b_PRNDLActByPass) ||
            (rtb_AND_di && (rtb_Sum2_md <= 0.0F))));

        /* End of Outputs for SubSystem: '<S273>/Turn_Off_Delay_Time' */
        /* End of Outputs for SubSystem: '<S259>/Reverse_P1P4' */
        break;

      case 2:
        (void)Rte_Read_VeTINR_d_TCMLimphomeFaults_Value(&tmpRead_e);

        /* Outputs for IfAction SubSystem: '<S259>/Reverse_P1P2pnt5' incorporates:
         *  ActionPort: '<S272>/Action Port'
         */
        /* Merge: '<S259>/Merge1' incorporates:
         *  Constant: '<S284>/Constant'
         *  Constant: '<S285>/Constant'
         *  Constant: '<S286>/Constant'
         *  Inport: '<Root>/VeTINR_d_TCMLimphomeFaults'
         *  Logic: '<S272>/OR1'
         *  Logic: '<S272>/OR2'
         *  RelationalOperator: '<S272>/Equal'
         *  RelationalOperator: '<S272>/Equal1'
         *  RelationalOperator: '<S272>/Equal2'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_TCMActualEvenGear'
         */
        VeWTAC_b_PRNDLRevAct = ((CeTRGR_e_TransRangeReverse == ((uint32)
            rtb_TmpSignalConversionAtVeTR_g)) && ((CeTRNR_e_Neutral == ((uint32)
            rtb_TmpSignalConversionAtVeTR_c)) || (((uint32)
            rtb_TmpSignalConversionAtVeTR_c) == CeTRNR_e_Reverse)));

        /* Merge: '<S259>/Merge2' incorporates:
         *  Constant: '<S281>/Constant'
         *  Constant: '<S282>/Calib'
         *  Constant: '<S283>/Constant Value'
         *  Constant: '<S287>/Constant'
         *  Logic: '<S272>/OR3'
         *  Logic: '<S272>/OR4'
         *  Logic: '<S272>/OR5'
         *  RelationalOperator: '<S272>/Equal1'
         *  RelationalOperator: '<S272>/Equal11'
         *  RelationalOperator: '<S272>/Equal4'
         *  RelationalOperator: '<S283>/Comparison'
         *  S-Function (sfix_bitop): '<S283>/Bitwise Logical Operator6'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_TCMActualEvenGear'
         */
        VeWTAC_b_PRNDLDrvAct = ((((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
            CeTRGR_e_TransRangeDrive) && ((((uint32)
            rtb_TmpSignalConversionAtVeTR_c) != CeTRNR_e_Reverse) || ((tmpRead_e
            & KeWTAR_d_TCMLimpPRNDLCoeffMsk) >= 1)));

        /* End of Outputs for SubSystem: '<S259>/Reverse_P1P2pnt5' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S259>/Reverse_Else' incorporates:
         *  ActionPort: '<S271>/Action Port'
         */
        /* Merge: '<S259>/Merge1' incorporates:
         *  Constant: '<S280>/Constant'
         *  RelationalOperator: '<S271>/Equal'
         */
        VeWTAC_b_PRNDLRevAct = (CeTRGR_e_TransRangeReverse == ((uint32)
            rtb_TmpSignalConversionAtVeTR_g));

        /* Merge: '<S259>/Merge2' incorporates:
         *  Constant: '<S274>/Constant'
         *  Constant: '<S275>/Constant'
         *  Constant: '<S276>/Constant'
         *  Constant: '<S277>/Constant'
         *  Constant: '<S278>/Constant'
         *  Constant: '<S279>/Constant'
         *  Logic: '<S271>/OR'
         *  RelationalOperator: '<S271>/Equal1'
         *  RelationalOperator: '<S271>/Equal11'
         *  RelationalOperator: '<S271>/Equal2'
         *  RelationalOperator: '<S271>/Equal4'
         *  RelationalOperator: '<S271>/Equal5'
         *  RelationalOperator: '<S271>/Equal6'
         */
        VeWTAC_b_PRNDLDrvAct = ((((((((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
            CeTRGR_e_TransRangeDrive1) || (((uint32)
            rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_TransRangeDrive2)) ||
            (((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
             CeTRGR_e_TransRangeDrive3)) || (((uint32)
            rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_TransRangeDrive4)) ||
            (((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
             CeTRGR_e_TransRangeDrive5)) || (((uint32)
            rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_TransRangeDrive));

        /* End of Outputs for SubSystem: '<S259>/Reverse_Else' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S259>/Drv_Prog_Case' */

    /* Logic: '<S200>/OR3' incorporates:
     *  Constant: '<S260>/Constant'
     *  Constant: '<S261>/Constant'
     *  RelationalOperator: '<S200>/Equal12'
     *  RelationalOperator: '<S200>/Equal3'
     */
    rtb_NotEqual_ka = ((((uint32)rtb_TmpSignalConversionAtVeFWDR) ==
                        CeFWDR_e_TfrCas4Low) || (((uint32)
                         rtb_TmpSignalConversionAtVeFWDR) == CeFWDR_e_TfrCas4HI));

    /* Switch: '<S265>/Switch1' incorporates:
     *  Logic: '<S200>/OR2'
     */
    if ((VeWTAC_b_PRNDLRevAct) && rtb_NotEqual_ka)
    {
        /* Switch: '<S265>/Switch1' incorporates:
         *  Constant: '<S264>/Calib'
         */
        for (i = 0; i < 3; i++)
        {
            rtb_Switch1_hk[i] = HaWTAR_k_PRNDCoeff_Rev[(i)];
        }
    }
    else
    {
        /* Logic: '<S200>/OR1' */
        rtb_NotEqual_ka = ((VeWTAC_b_PRNDLDrvAct) && rtb_NotEqual_ka);

        /* Switch: '<S265>/Switch1' */
        for (i = 0; i < 3; i++)
        {
            /* Switch: '<S265>/Switch2' incorporates:
             *  Constant: '<S262>/Calib'
             *  Constant: '<S263>/Calib'
             */
            if (rtb_NotEqual_ka)
            {
                rtb_Switch1_hk[i] = HaWTAR_k_PRNDCoeff_Drv[(i)];
            }
            else
            {
                rtb_Switch1_hk[i] = HaWTAR_k_PRNDCoeff_PN[(i)];
            }

            /* End of Switch: '<S265>/Switch2' */
        }
    }

    /* End of Switch: '<S265>/Switch1' */

    /* UnitDelay: '<S202>/Unit Delay3' */
    rtb_UnitDelay3_kz = WTAR_ac_DW.UnitDelay3_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S202>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S232>/OR1' incorporates:
     *  Constant: '<S202>/Constant1'
     *  Constant: '<S202>/Constant9'
     *  Constant: '<S230>/Constant'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S202>/AND6'
     *  Logic: '<S232>/NOT'
     *  Logic: '<S232>/OR'
     *  RelationalOperator: '<S202>/Comparison1'
     *  RelationalOperator: '<S202>/Comparison5'
     *  RelationalOperator: '<S202>/Equal'
     *  UnitDelay: '<S232>/Unit Delay'
     */
    rtb_NotEqual_ka = ((CeTRGR_e_DriveToReverse == ((uint32)
                         rtb_TmpSignalConversionAtVeTR_g)) || (((rtb_Switch1_hk
                          [0] <= 0.5F) && (rtb_UnitDelay3_kz > 0.1F)) &&
                        (WTAR_ac_DW.UnitDelay_DSTATE_ii)));

    /* Update for UnitDelay: '<S232>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ii = rtb_NotEqual_ka;

    /* End of Outputs for SubSystem: '<S202>/Signal_Latch_On_With_Reset' */

    /* Outputs for Atomic SubSystem: '<S202>/Signal_Latch_On_With_Reset1' */
    /* Logic: '<S233>/OR1' incorporates:
     *  Constant: '<S202>/Constant2'
     *  Constant: '<S202>/Constant3'
     *  Constant: '<S231>/Constant'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S202>/AND1'
     *  Logic: '<S233>/NOT'
     *  Logic: '<S233>/OR'
     *  RelationalOperator: '<S202>/Comparison2'
     *  RelationalOperator: '<S202>/Comparison3'
     *  RelationalOperator: '<S202>/Equal1'
     *  UnitDelay: '<S233>/Unit Delay'
     */
    rtb_Equal2_ow = ((((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
                      CeTRGR_e_ReverseToDrive) || (((rtb_Switch1_hk[0] >= -0.5F)
                       && (rtb_UnitDelay3_kz < -0.1F)) &&
                      (WTAR_ac_DW.UnitDelay_DSTATE_hj)));

    /* Update for UnitDelay: '<S233>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hj = rtb_Equal2_ow;

    /* End of Outputs for SubSystem: '<S202>/Signal_Latch_On_With_Reset1' */

    /* Outputs for Atomic SubSystem: '<S208>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S255>/OR1' incorporates:
     *  Constant: '<S250>/Calib'
     *  Constant: '<S251>/Constant'
     *  Constant: '<S252>/Constant'
     *  Constant: '<S253>/Constant'
     *  Constant: '<S254>/Constant'
     *  Logic: '<S208>/AND1'
     *  Logic: '<S208>/AND2'
     *  Logic: '<S208>/AND5'
     *  Logic: '<S255>/NOT'
     *  Logic: '<S255>/OR'
     *  RelationalOperator: '<S208>/Comparison2'
     *  RelationalOperator: '<S208>/Comparison3'
     *  RelationalOperator: '<S208>/Comparison4'
     *  RelationalOperator: '<S208>/Comparison5'
     *  RelationalOperator: '<S208>/Comparison6'
     *  UnitDelay: '<S255>/Unit Delay'
     */
    rtb_AND_di = (((KeWTAR_b_D2NTrqCheckOn) && (((uint32)
                     rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_DriveToNeutral))
                  || (((WTAR_ac_B.VeWTAR_M_OutTrqReqHTDR_ASL < rtb_MinMax18) &&
                       (((CeTRGR_e_DriveToNeutral == ((uint32)
                        rtb_TmpSignalConversionAtVeTR_g)) ||
                         (CeTRGR_e_TransRangeNeutral == ((uint32)
                        rtb_TmpSignalConversionAtVeTR_g))) ||
                        (CeTRGR_e_NeutralToDrive == ((uint32)
                       rtb_TmpSignalConversionAtVeTR_g)))) &&
                      (WTAR_ac_DW.UnitDelay_DSTATE_jz)));

    /* Update for UnitDelay: '<S255>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jz = rtb_AND_di;

    /* End of Outputs for SubSystem: '<S208>/Signal_Latch_On_With_Reset' */

    /* Switch: '<S208>/Switch' */
    if (!rtb_AND_di)
    {
        /* Switch: '<S208>/Switch' incorporates:
         *  Constant: '<S208>/Constant2'
         *  Gain: '<S267>/Gain'
         *  RelationalOperator: '<S208>/Comparison1'
         */
        rtb_AND_di = (rtb_Switch1_hk[0] >= 0.5F);
    }

    /* End of Switch: '<S208>/Switch' */

    /* UnitDelay: '<S249>/Unit Delay' incorporates:
     *  Constant: '<S243>/Calib'
     *  Logic: '<S207>/AND3'
     *  Logic: '<S207>/AND4'
     *  RelationalOperator: '<S207>/Comparison1'
     *  UnitDelay: '<S207>/Unit Delay3'
     */
    rtb_UnitDelay_gs = (rtb_TmpSignalConversionAtVeAECR &&
                        (rtb_TmpSignalConversionAtVeD_ly ||
                         (WTAR_ac_DW.UnitDelay3_DSTATE_p >=
                          KeWTAR_M_OPDActiveThrhd)));

    /* Outputs for Atomic SubSystem: '<S207>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S249>/OR1' incorporates:
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Constant'
     *  Constant: '<S246>/Constant'
     *  Constant: '<S247>/Constant'
     *  Constant: '<S248>/Constant'
     *  Logic: '<S207>/AND1'
     *  Logic: '<S207>/AND2'
     *  Logic: '<S207>/AND5'
     *  Logic: '<S249>/NOT'
     *  Logic: '<S249>/OR'
     *  Product: '<S211>/Multiplication11'
     *  RelationalOperator: '<S207>/Comparison2'
     *  RelationalOperator: '<S207>/Comparison3'
     *  RelationalOperator: '<S207>/Comparison4'
     *  RelationalOperator: '<S207>/Comparison5'
     *  RelationalOperator: '<S207>/Comparison6'
     *  UnitDelay: '<S249>/Unit Delay'
     */
    rtb_OR1_ad = ((((KeWTAR_b_R2NTrqCheckOn) && (((uint32)
                      rtb_TmpSignalConversionAtVeTR_g) ==
                     CeTRGR_e_ReverseToNeutral)) && rtb_UnitDelay_gs) ||
                  (((WTAR_ac_B.VeWTAR_M_OutTrqReqHTDR_ASL > (-rtb_MinMax18)) &&
                    (((CeTRGR_e_ReverseToNeutral == ((uint32)
                        rtb_TmpSignalConversionAtVeTR_g)) ||
                      (CeTRGR_e_TransRangeNeutral == ((uint32)
                        rtb_TmpSignalConversionAtVeTR_g))) ||
                     (CeTRGR_e_NeutralToReverse == ((uint32)
                       rtb_TmpSignalConversionAtVeTR_g)))) &&
                   (WTAR_ac_DW.UnitDelay_DSTATE_ig)));

    /* Update for UnitDelay: '<S249>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ig = rtb_OR1_ad;

    /* End of Outputs for SubSystem: '<S207>/Signal_Latch_On_With_Reset' */

    /* Switch: '<S203>/Switch11' incorporates:
     *  Constant: '<S203>/Constant8'
     *  Constant: '<S236>/Calib'
     */
    if (KeWTAR_b_UseMinCreepWheel)
    {
        rtb_Switch13 = rtb_TmpSignalConversionAtVeCT_m;
    }
    else
    {
        rtb_Switch13 = -99999.0F;
    }

    /* End of Switch: '<S203>/Switch11' */

    /* VariantMerge generated from: '<S320>/Variant_Source' incorporates:
     *  Constant: '<S203>/Constant9'
     *  Gain: '<S267>/Gain'
     *  MinMax: '<S203>/MinMax3'
     *  MinMax: '<S203>/MinMax6'
     *  Product: '<S203>/Multiplication5'
     */
    VeWTAC_M_MinPdl4DifTorq = fmaxf(fminf(rtb_Switch9_hi, 0.0F), rtb_Switch13) *
        rtb_Switch1_hk[0];

    /* Logic: '<S203>/AND7' incorporates:
     *  Logic: '<S202>/AND2'
     */
    rtb_Equal2_ow = !rtb_Equal2_ow;

    /* Switch: '<S203>/Switch10' incorporates:
     *  Constant: '<S234>/Calib'
     *  Logic: '<S203>/AND2'
     *  Logic: '<S203>/AND7'
     */
    if ((((KeWTAR_b_NormalMinPRNDLOff) && rtb_AND_di) && rtb_UnitDelay_gs) &&
            rtb_Equal2_ow)
    {
        /* Switch: '<S203>/Switch10' */
        VeWTAC_M_Min4Converter2FW_Typ1 = rtb_MinMax18;
    }
    else
    {
        /* Switch: '<S203>/Switch10' */
        VeWTAC_M_Min4Converter2FW_Typ1 = rtb_TmpSignalConversionAtVeA_b3;
    }

    /* End of Switch: '<S203>/Switch10' */

    /* Logic: '<S203>/AND8' incorporates:
     *  Logic: '<S202>/AND2'
     */
    rtb_NotEqual_ka = !rtb_NotEqual_ka;

    /* Switch: '<S203>/Switch9' incorporates:
     *  Constant: '<S203>/Constant7'
     *  Constant: '<S235>/Calib'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S203>/AND3'
     *  Logic: '<S203>/AND8'
     *  Logic: '<S203>/AND9'
     *  RelationalOperator: '<S203>/Comparison3'
     */
    if (((((KeWTAR_b_Typ1Max_Off) && (rtb_Switch1_hk[0] < -0.5F)) &&
            rtb_UnitDelay_gs) && rtb_NotEqual_ka) || rtb_OR1_ad)
    {
        /* Switch: '<S203>/Switch9' incorporates:
         *  Product: '<S211>/Multiplication11'
         */
        VeWTAC_M_Max4Converter2FW_Typ1 = -rtb_MinMax18;
    }
    else
    {
        /* Switch: '<S203>/Switch9' incorporates:
         *  Constant: '<S203>/Constant6'
         */
        VeWTAC_M_Max4Converter2FW_Typ1 = 99999.0F;
    }

    /* End of Switch: '<S203>/Switch9' */

    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S237>/Calib'
     */
    if (KeWTAR_b_OpenMinPedalCnstr)
    {
        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S204>/Constant Value3'
         */
        VeWTAC_M_Min4Process = -100000.0F;
    }
    else
    {
        /* Switch: '<S204>/Switch1' incorporates:
         *  Gain: '<S267>/Gain'
         *  MinMax: '<S204>/MinMax7'
         *  Product: '<S204>/Product'
         */
        VeWTAC_M_Min4Process = fmaxf(rtb_TmpSignalConversionAtVeCT_m,
            VeWTAI_M_AxleTrqReqMin) * rtb_Switch1_hk[0];
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S204>/Switch6' incorporates:
     *  Constant: '<S238>/Calib'
     */
    if (KeWTAR_b_OpenMinPedalCnstrMainFilter)
    {
        /* Switch: '<S204>/Switch6' incorporates:
         *  Constant: '<S204>/Constant Value6'
         */
        VeWTAC_M_Min4ProcessMainFilter = -100000.0F;
    }
    else
    {
        /* Switch: '<S204>/Switch6' incorporates:
         *  Gain: '<S267>/Gain'
         *  MinMax: '<S204>/MinMax1'
         *  Product: '<S204>/Product1'
         */
        VeWTAC_M_Min4ProcessMainFilter = fmaxf(rtb_TmpSignalConversionAtVeCT_n,
            VeWTAI_M_AxleTrqReqMin) * rtb_Switch1_hk[0];
    }

    /* End of Switch: '<S204>/Switch6' */

    /* Switch: '<S204>/Switch8' incorporates:
     *  Constant: '<S239>/Calib'
     */
    if (KeWTAR_b_OpenMinPedalCnstr_Diff)
    {
        /* Switch: '<S204>/Switch8' incorporates:
         *  Constant: '<S204>/Constant Value8'
         */
        VeWTAC_M_Min4Process_Diff = -100000.0F;
    }
    else
    {
        /* Switch: '<S204>/Switch8' incorporates:
         *  Gain: '<S267>/Gain'
         *  Product: '<S204>/Multiplication9'
         */
        VeWTAC_M_Min4Process_Diff = VeWTAI_M_AxleTrqReqMin * rtb_Switch1_hk[0];
    }

    /* End of Switch: '<S204>/Switch8' */

    /* Switch: '<S204>/Switch3' incorporates:
     *  Constant: '<S204>/Constant Value4'
     *  RelationalOperator: '<S204>/Greater  Than1'
     */
    if (WTAR_ac_B.Gain_c < 0.01F)
    {
        /* Switch: '<S204>/Switch3' incorporates:
         *  Constant: '<S204>/Constant Value5'
         */
        VeWTAR_M_Max4Process = 0.0F;
    }
    else
    {
        /* Product: '<S204>/Multiplication2' incorporates:
         *  Gain: '<S269>/Gain'
         */
        rtb_UnitDelay3_kz = rtb_TmpSignalConversionAtVeDT_m * rtb_Switch1_hk[1];

        /* Outputs for Atomic SubSystem: '<S204>/Protected_Division' */
        /* Switch: '<S240>/Switch1' incorporates:
         *  Constant: '<S240>/Constant Value'
         *  Constant: '<S240>/Constant Value1'
         *  Constant: '<S240>/Constant Value2'
         *  Constant: '<S240>/Constant Value3'
         *  Logic: '<S240>/AND'
         *  RelationalOperator: '<S240>/Greater Than or Equal '
         *  RelationalOperator: '<S240>/Greater Than or Equal 1'
         *  RelationalOperator: '<S240>/Not Equal'
         *  RelationalOperator: '<S240>/Not Equal1'
         *  Switch: '<S240>/Switch2'
         *  Switch: '<S240>/Switch3'
         */
        if ((rtb_UnitDelay3_kz != 0.0F) && (WTAR_ac_B.Gain_c != 0.0F))
        {
            /* Switch: '<S204>/Switch3' incorporates:
             *  Product: '<S240>/Division'
             *  Switch: '<S240>/Switch1'
             */
            VeWTAR_M_Max4Process = rtb_UnitDelay3_kz / WTAR_ac_B.Gain_c;
        }
        else if (rtb_UnitDelay3_kz > 0.0F)
        {
            /* Switch: '<S240>/Switch2' incorporates:
             *  Constant: '<S240>/MAXFLOAT'
             *  Switch: '<S204>/Switch3'
             */
            VeWTAR_M_Max4Process = 3.402823466E+38F;
        }
        else if (rtb_UnitDelay3_kz < 0.0F)
        {
            /* Switch: '<S240>/Switch3' incorporates:
             *  Constant: '<S240>/MINFLOAT'
             *  Switch: '<S204>/Switch3'
             *  Switch: '<S240>/Switch2'
             */
            VeWTAR_M_Max4Process = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S204>/Switch3' incorporates:
             *  Constant: '<S240>/Constant Value4'
             *  Switch: '<S240>/Switch2'
             *  Switch: '<S240>/Switch3'
             */
            VeWTAR_M_Max4Process = 0.0F;
        }

        /* End of Switch: '<S240>/Switch1' */
        /* End of Outputs for SubSystem: '<S204>/Protected_Division' */
    }

    /* End of Switch: '<S204>/Switch3' */

    /* Logic: '<S205>/Logical3' incorporates:
     *  Constant: '<S205>/Constant Value7'
     *  Constant: '<S241>/Calib'
     *  Gain: '<S267>/Gain'
     *  RelationalOperator: '<S205>/Comparison5'
     */
    VeWTAC_b_WheelBasedinR = ((KeWTAR_b_OffWheelBasedInR) && (rtb_Switch1_hk[0] <
        -0.5F));

    /* Switch: '<S206>/Switch5' incorporates:
     *  Constant: '<S206>/Constant Value'
     *  Gain: '<S269>/Gain'
     *  RelationalOperator: '<S206>/Comparison1'
     */
    if (rtb_Switch1_hk[1] >= 1.0F)
    {
        /* Switch: '<S206>/Switch5' */
        VeWTAC_M_Min4ShapeStgc = VeWTAI_M_NormalMinStgc;
    }
    else
    {
        /* Switch: '<S206>/Switch5' incorporates:
         *  Constant: '<S206>/Constant Value2'
         */
        VeWTAC_M_Min4ShapeStgc = -99999.0F;
    }

    /* End of Switch: '<S206>/Switch5' */

    /* Product: '<S206>/Multiplication18' incorporates:
     *  Gain: '<S267>/Gain'
     */
    rtb_UnitDelay3_kz = rtb_Switch1_hk[0] * rtb_TmpSignalConversionAtVeDT_m;

    /* Switch: '<S206>/Switch15' incorporates:
     *  Constant: '<S206>/Constant4'
     *  Constant: '<S242>/Calib'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S206>/AND1'
     *  RelationalOperator: '<S206>/Comparison2'
     */
    if ((KeWTAR_b_AeCMinPRNDLOff) && (rtb_Switch1_hk[0] >= 1.0F))
    {
        /* Switch: '<S206>/Switch15' incorporates:
         *  MinMax: '<S206>/MinMax8'
         */
        rtb_TmpSignalConversionAtVeDT_m = fmaxf(rtb_Switch9_hi,
            rtb_TmpSignalConversionAtVeCT_m);
    }
    else
    {
        /* Switch: '<S206>/Switch15' incorporates:
         *  Constant: '<S206>/Constant3'
         */
        rtb_TmpSignalConversionAtVeDT_m = -99999.0F;
    }

    /* End of Switch: '<S206>/Switch15' */

    /* Switch: '<S257>/Switch1' incorporates:
     *  Constant: '<S197>/Constant'
     *  Constant: '<S197>/Constant3'
     *  Gain: '<S267>/Gain'
     *  RelationalOperator: '<S197>/Relational Operator'
     *  RelationalOperator: '<S197>/Relational Operator1'
     *  Switch: '<S257>/Switch2'
     */
    if (rtb_Switch1_hk[0] > 0.5F)
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S197>/Constant1'
         */
        rtb_Switch9_hi = 1.0F;
    }
    else if (rtb_Switch1_hk[0] < -0.5F)
    {
        /* Switch: '<S257>/Switch2' incorporates:
         *  Constant: '<S197>/Constant2'
         *  Switch: '<S257>/Switch1'
         */
        rtb_Switch9_hi = -1.0F;
    }
    else
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  UnitDelay: '<S197>/Unit Delay'
         */
        rtb_Switch9_hi = WTAR_ac_DW.UnitDelay_DSTATE_ni;
    }

    /* End of Switch: '<S257>/Switch1' */

    /* Switch: '<S197>/Switch1' incorporates:
     *  Constant: '<S256>/Calib'
     */
    if (HeWTAR_b_SignConvEna)
    {
        /* Switch: '<S197>/Switch1' incorporates:
         *  Product: '<S197>/Multiplication3'
         */
        rtb_MinMax18 = rtb_TmpSignalConversionAtVeS_dq * rtb_Switch9_hi;
        rtb_Gain = rtb_TmpSignalConversionAtVeSC_f * rtb_Switch9_hi;
        Switch1_f_idx_2 = rtb_TmpSignalConversionAtVeSC_c * rtb_Switch9_hi;
        Switch1_f_idx_3 = rtb_TmpSignalConversionAtVeSC_j * rtb_Switch9_hi;
    }
    else
    {
        /* Switch: '<S197>/Switch1' */
        rtb_MinMax18 = rtb_TmpSignalConversionAtVeS_dq;
        rtb_Gain = rtb_TmpSignalConversionAtVeSC_f;
        Switch1_f_idx_2 = rtb_TmpSignalConversionAtVeSC_c;
        Switch1_f_idx_3 = rtb_TmpSignalConversionAtVeSC_j;
    }

    /* End of Switch: '<S197>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf' */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf_Value(&rtb_Vector_bo);

    /* Inport: '<Root>/VeCTCR_M_TransIntakeWhlTgt_Raw' */
    (void)Rte_Read_VeCTCR_M_TransIntakeWhlTgt_Raw_Value(&rtb_Abs1);

    /* Inport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrq' */
    (void)Rte_Read_VeDTRR_M_DrvrIntndedAxleTrq_Value(&Gain_pj);

    /* Inport: '<Root>/VeDTRR_M_AxleTrqReqPrdt_xSEM' */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqPrdt_xSEM_Value(&VeWTAC_M_ToPrdt_xSEM);

    /* Inport: '<Root>/VeAXLR_M_ActualAxleTrq' */
    (void)Rte_Read_VeAXLR_M_ActualAxleTrq_Value(&rtb_Sum3_gl);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Product: '<S197>/Multiplication1' incorporates:
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_M_TransIntakeTrq = rtb_Abs1 * rtb_Switch1_hk[0];

    /* Product: '<S197>/Multiplication2' incorporates:
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_M_SumMaxTrqDsrd = VeWTAI_M_SumMaxTrqDsrd * rtb_Switch1_hk[0];

    /* Product: '<S197>/Multiplication4' incorporates:
     *  Gain: '<S267>/Gain'
     */
    rtb_TmpSignalConversionAtVeSC_f = VeWTAI_M_DrvrIntndedAxleTorqRaw *
        rtb_Switch1_hk[0];

    /* Product: '<S197>/Multiplication6' incorporates:
     *  Gain: '<S267>/Gain'
     */
    rtb_TmpSignalConversionAtVeS_dq = VeWTAI_M_AxleTrqPotential *
        rtb_Switch1_hk[0];

    /* Product: '<S197>/Multiplication7' incorporates:
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_M_ActualAxleTrq = rtb_Sum3_gl * rtb_Switch1_hk[0];

    /* Switch: '<S197>/Switch4' incorporates:
     *  Constant: '<S258>/Calib'
     */
    if (KeWTAR_b_PrdtxSEM_SrcSel)
    {
        VeWTAC_M_ToPrdt_xSEM = Gain_pj;
    }

    /* End of Switch: '<S197>/Switch4' */

    /* Product: '<S197>/Multiplication8' incorporates:
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_M_ToPrdt_xSEM *= rtb_Switch1_hk[0];

    /* Update for UnitDelay: '<S212>/Unit Delay1' incorporates:
     *  UnitDelay: '<S209>/Unit Delay4'
     *  UnitDelay: '<S212>/Unit Delay'
     */
#if Rte_SysCon_Variant_WTAR_1

    WTAR_ac_DW.UnitDelay1_DSTATE_ba = rtb_MinMax_n;
    WTAR_ac_DW.UnitDelay4_DSTATE_l = VeWTAC_M_MGateMinArbDCT;
    WTAR_ac_DW.UnitDelay_DSTATE_e1 = rtb_Switch2_ol5;

#endif

    /* End of Update for UnitDelay: '<S212>/Unit Delay1' */

    /* Update for UnitDelay: '<S202>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_e = WTAR_ac_B.VeWTAR_M_OutTrqReqHTDR_ASL;

    /* Update for UnitDelay: '<S207>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_p = WTAR_ac_B.Gain_dp;

    /* Update for UnitDelay: '<S197>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ni = rtb_Switch9_hi;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ArbOutTorq'
     */
    /* Outputs for Atomic SubSystem: '<S111>/GradientLimiter' */
    /* Switch: '<S193>/Switch1' incorporates:
     *  UnitDelay: '<S119>/Unit Delay'
     */
    rtb_MinMax_n = WTAR_ac_DW.UnitDelay_DSTATE_dm;

    /* Sum: '<S119>/Sum2' incorporates:
     *  Switch: '<S111>/Switch'
     */
    rtb_Switch2_ol5 = ((float32)(rtb_TmpSignalConversionAtVeSR_p ? 1.0F : 0.0F))
        - rtb_MinMax_n;

    /* Outputs for Atomic SubSystem: '<S119>/Limiter' */
    /* Switch: '<S123>/Switch1' incorporates:
     *  Constant: '<S120>/Calib'
     *  RelationalOperator: '<S123>/Relational Operator'
     */
    if (KeWTAR_r_RdcdPerfSclrRateLimMax < rtb_Switch2_ol5)
    {
        /* UnitDelay: '<S183>/Unit Delay' */
        rtb_Switch2_ol5 = KeWTAR_r_RdcdPerfSclrRateLimMax;
    }

    /* End of Switch: '<S123>/Switch1' */

    /* Switch: '<S123>/Switch' incorporates:
     *  Constant: '<S121>/Calib'
     *  RelationalOperator: '<S123>/Relational Operator1'
     */
    if (rtb_Switch2_ol5 <= KeWTAR_r_RdcdPerfSclrRateLimMin)
    {
        rtb_Switch2_ol5 = KeWTAR_r_RdcdPerfSclrRateLimMin;
    }

    /* End of Switch: '<S123>/Switch' */
    /* End of Outputs for SubSystem: '<S119>/Limiter' */

    /* Sum: '<S119>/Sum3' */
    VeWTAC_r_RdcdPerfSclr2 = rtb_Switch2_ol5 + rtb_MinMax_n;

    /* Update for UnitDelay: '<S119>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_dm = VeWTAC_r_RdcdPerfSclr2;

    /* End of Outputs for SubSystem: '<S111>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S112>/GradientLimiter' */
    /* Switch: '<S193>/Switch1' incorporates:
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_MinMax_n = WTAR_ac_DW.UnitDelay_DSTATE_ib;

    /* Sum: '<S124>/Sum2' incorporates:
     *  Switch: '<S112>/Switch'
     */
    rtb_Switch2_ol5 = ((float32)(rtb_TmpSignalConversionAtVeSRAR ? 1.0F : 0.0F))
        - rtb_MinMax_n;

    /* Outputs for Atomic SubSystem: '<S124>/Limiter' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  Constant: '<S125>/Calib'
     *  RelationalOperator: '<S128>/Relational Operator'
     */
    if (KeWTAR_r_RdcdPerfSclrRateLimMax < rtb_Switch2_ol5)
    {
        /* UnitDelay: '<S183>/Unit Delay' */
        rtb_Switch2_ol5 = KeWTAR_r_RdcdPerfSclrRateLimMax;
    }

    /* End of Switch: '<S128>/Switch1' */

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S126>/Calib'
     *  RelationalOperator: '<S128>/Relational Operator1'
     */
    if (rtb_Switch2_ol5 <= KeWTAR_r_RdcdPerfSclrRateLimMin)
    {
        rtb_Switch2_ol5 = KeWTAR_r_RdcdPerfSclrRateLimMin;
    }

    /* End of Switch: '<S128>/Switch' */
    /* End of Outputs for SubSystem: '<S124>/Limiter' */

    /* Sum: '<S124>/Sum3' */
    VeWTAC_r_RdcdPerfSclr = rtb_Switch2_ol5 + rtb_MinMax_n;

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ib = VeWTAC_r_RdcdPerfSclr;

    /* End of Outputs for SubSystem: '<S112>/GradientLimiter' */

    /* Switch: '<S15>/Switch1' incorporates:
     *  Constant: '<S168>/Calib'
     */
    if (KeWTAR_b_ESC_ArbDsbl)
    {
        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        /* Switch: '<S15>/Switch1' incorporates:
         *  Gain: '<S267>/Gain'
         *  Product: '<S197>/Multiplication5'
         */
        rtb_Switch1_i0j[0] = VeWTAI_M_CmndPrdtAxleTorq * rtb_Switch1_hk[0];
        rtb_Switch1_i0j[1] = rtb_Vector_bo * rtb_Switch1_hk[0];

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        /* Switch: '<S15>/Switch1' incorporates:
         *  Gain: '<S267>/Gain'
         *  MinMax: '<S15>/MinMax1'
         *  MinMax: '<S15>/MinMax2'
         *  Product: '<S197>/Multiplication5'
         *  SignalConversion generated from: '<S5>/VeWTAC_M_FrntAxleMinRq'
         */
        rtb_Switch1_i0j[0] = fmaxf(fminf(VeWTAI_M_CmndPrdtAxleTorq *
            rtb_Switch1_hk[0], rtb_MinMax18), rtb_Gain);
        rtb_Switch1_i0j[1] = fmaxf(fminf(rtb_Vector_bo * rtb_Switch1_hk[0],
            rtb_MinMax18), rtb_Gain);

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
    }

    /* End of Switch: '<S15>/Switch1' */

    /* If: '<S13>/If' incorporates:
     *  Constant: '<S13>/Constant Value'
     *  Constant: '<S144>/Constant'
     *  Inport: '<Root>/VeAXLR_M_OutTorqReqModTactMin_Axle'
     *  Logic: '<S13>/Logical'
     *  MinMax: '<S13>/MinMax1'
     *  RelationalOperator: '<S13>/Comparison'
     *  RelationalOperator: '<S13>/Comparison4'
     */
    if ((fmaxf(rtb_TmpSignalConversionAtVeSC_f, rtb_Switch1_i0j[0]) > -1.0F) ||
            (((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
             CeTRGR_e_TransRangeReverse))
    {
        /* Outputs for IfAction SubSystem: '<S13>/EitherPositive_PassThru' incorporates:
         *  ActionPort: '<S143>/Action Port'
         */
        /* Merge: '<S13>/Merge2' incorporates:
         *  Gain: '<S164>/Gain'
         */
        rtb_Switch2_ol5 = rtb_Switch1_i0j[0];

        /* Merge: '<S13>/Merge1' incorporates:
         *  Gain: '<S165>/Gain'
         */
        rtb_Sum3_gl = rtb_TmpSignalConversionAtVeSC_f;

        /* Merge: '<S13>/Merge3' incorporates:
         *  Gain: '<S166>/Gain'
         */
        rtb_Sum3_aq = rtb_TmpSignalConversionAtVeS_dq;

        /* Merge: '<S13>/Merge5' incorporates:
         *  Gain: '<S167>/Gain'
         */
        rtb_MinMax_n = VeWTAC_M_ToPrdt_xSEM;

        /* Switch: '<S143>/Switch4' */
        if (rtb_TmpSignalConversionAtVeDT_a)
        {
            /* Merge: '<S13>/Merge4' incorporates:
             *  Constant: '<S163>/Constant'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_LV2;
        }
        else
        {
            /* Merge: '<S13>/Merge4' incorporates:
             *  Constant: '<S162>/Constant'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_ECM_TorqReqst;
        }

        /* End of Switch: '<S143>/Switch4' */
        /* End of Outputs for SubSystem: '<S13>/EitherPositive_PassThru' */
    }
    else
    {
        (void)Rte_Read_VeAXLR_M_OutTorqReqModTactMin_Axle_Value(&rtb_Sum3_aq);

        /* Outputs for IfAction SubSystem: '<S13>/BothNegative' incorporates:
         *  ActionPort: '<S142>/Action Port'
         */
        /* Lookup_n-D: '<S157>/Vector' incorporates:
         *  Inport: '<Root>/VeAXLR_M_OutTorqReqModTactMin_Axle'
         *  Switch: '<S8>/Switch11'
         *  Switch: '<S8>/Switch25'
         */
        rtb_Vector_bo = look2_iflf_binlcapw(VeWTAI_p_AmbientAirPrs,
            VeWTAI_Pct_HV_BatPackSOC_Arb, ((const float32 *)
            &(KxWTAR_k_CoastTrq_SOC_Altud_Factor[0])), ((const float32 *)
            &(KyWTAR_k_CoastTrq_SOC_Altud_Factor[0])), ((const float32 *)
            &(KtWTAR_k_CoastTrq_SOC_Altud_Factor[0])), WTAR_ac_ConstP.pooled16,
            5U);

        /* Sum: '<S142>/Sum3' incorporates:
         *  Constant: '<S154>/Calib'
         */
        rtb_Sum3_aq -= KeWTAR_M_ToTactMinOffset_HiSOCToRed;

        /* Outputs for Atomic SubSystem: '<S142>/Hysteresis' */
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S156>/Calib'
         *  RelationalOperator: '<S151>/Greater  Than'
         */
        if (VeWTAI_Pct_HV_BatPackSOC_Arb > KeWTAR_Pct_HV_SOC_ChrgAdj_RSP)
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Constant: '<S151>/Constant Value'
             */
            rtb_AND_di = true;
        }
        else
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Constant: '<S155>/Calib'
             *  RelationalOperator: '<S151>/Greater  Than1'
             *  UnitDelay: '<S151>/Unit Delay'
             */
            rtb_AND_di = ((VeWTAI_Pct_HV_BatPackSOC_Arb >=
                           KeWTAR_Pct_HV_SOC_ChrgAdj_LSP) &&
                          (WTAR_ac_DW.UnitDelay_DSTATE_gu));
        }

        /* End of Switch: '<S151>/Switch1' */

        /* Update for UnitDelay: '<S151>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_gu = rtb_AND_di;

        /* End of Outputs for SubSystem: '<S142>/Hysteresis' */

        /* Switch: '<S142>/Switch1' incorporates:
         *  MinMax: '<S142>/MinMax2'
         *  Product: '<S142>/Product'
         */
        if (rtb_AND_di)
        {
            rtb_MinMax_n = fmaxf(rtb_Sum3_aq, rtb_Switch1_i0j[0] * rtb_Vector_bo);
        }
        else
        {
            rtb_MinMax_n = rtb_Switch1_i0j[0] * rtb_Vector_bo;
        }

        /* End of Switch: '<S142>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S142>/GradientLimiter' */
        /* Sum: '<S149>/Sum2' incorporates:
         *  UnitDelay: '<S149>/Unit Delay'
         */
        rtb_MinMax_n -= WTAR_ac_DW.UnitDelay_DSTATE_o0;

        /* Outputs for Atomic SubSystem: '<S149>/Limiter' */
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S153>/Calib'
         *  RelationalOperator: '<S160>/Relational Operator'
         */
        if (KeWTAR_M_ToReq_SOCAdj_LU < rtb_MinMax_n)
        {
            /* UnitDelay: '<S150>/Unit Delay' */
            rtb_MinMax_n = KeWTAR_M_ToReq_SOCAdj_LU;
        }

        /* End of Switch: '<S160>/Switch1' */

        /* Switch: '<S160>/Switch' incorporates:
         *  Constant: '<S152>/Calib'
         *  RelationalOperator: '<S160>/Relational Operator1'
         */
        if (rtb_MinMax_n <= KeWTAR_M_ToReq_SOCAdj_LD)
        {
            rtb_MinMax_n = KeWTAR_M_ToReq_SOCAdj_LD;
        }

        /* End of Switch: '<S160>/Switch' */
        /* End of Outputs for SubSystem: '<S149>/Limiter' */

        /* Sum: '<S149>/Sum3' incorporates:
         *  UnitDelay: '<S149>/Unit Delay'
         */
        rtb_Switch2_ol5 = rtb_MinMax_n + WTAR_ac_DW.UnitDelay_DSTATE_o0;

        /* Update for UnitDelay: '<S149>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_o0 = rtb_Switch2_ol5;

        /* End of Outputs for SubSystem: '<S142>/GradientLimiter' */

        /* Switch: '<S142>/Switch2' */
        if (rtb_AND_di)
        {
            /* Switch: '<S142>/Switch2' incorporates:
             *  MinMax: '<S142>/MinMax3'
             *  Product: '<S142>/Product1'
             */
            rtb_Sum3_aq = fmaxf(rtb_Sum3_aq, rtb_Vector_bo *
                                rtb_TmpSignalConversionAtVeSC_f);
        }
        else
        {
            /* Switch: '<S142>/Switch2' incorporates:
             *  Product: '<S142>/Product1'
             */
            rtb_Sum3_aq = rtb_Vector_bo * rtb_TmpSignalConversionAtVeSC_f;
        }

        /* End of Switch: '<S142>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S142>/GradientLimiter1' */
        /* Sum: '<S150>/Sum2' incorporates:
         *  UnitDelay: '<S150>/Unit Delay'
         */
        rtb_Sum3_aq -= WTAR_ac_DW.UnitDelay_DSTATE_cx;

        /* Outputs for Atomic SubSystem: '<S150>/Limiter' */
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S153>/Calib'
         *  RelationalOperator: '<S161>/Relational Operator'
         */
        if (KeWTAR_M_ToReq_SOCAdj_LU < rtb_Sum3_aq)
        {
            /* Switch: '<S161>/Switch1' */
            rtb_Sum3_aq = KeWTAR_M_ToReq_SOCAdj_LU;
        }

        /* End of Switch: '<S161>/Switch1' */

        /* Switch: '<S161>/Switch' incorporates:
         *  Constant: '<S152>/Calib'
         *  RelationalOperator: '<S161>/Relational Operator1'
         */
        if (rtb_Sum3_aq <= KeWTAR_M_ToReq_SOCAdj_LD)
        {
            rtb_Sum3_aq = KeWTAR_M_ToReq_SOCAdj_LD;
        }

        /* End of Switch: '<S161>/Switch' */
        /* End of Outputs for SubSystem: '<S150>/Limiter' */

        /* Sum: '<S150>/Sum3' incorporates:
         *  UnitDelay: '<S150>/Unit Delay'
         */
        rtb_Sum3_gl = rtb_Sum3_aq + WTAR_ac_DW.UnitDelay_DSTATE_cx;

        /* Update for UnitDelay: '<S150>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_cx = rtb_Sum3_gl;

        /* End of Outputs for SubSystem: '<S142>/GradientLimiter1' */

        /* Merge: '<S13>/Merge3' incorporates:
         *  Product: '<S142>/Product2'
         */
        rtb_Sum3_aq = rtb_Vector_bo * rtb_TmpSignalConversionAtVeS_dq;

        /* Merge: '<S13>/Merge5' incorporates:
         *  Product: '<S142>/Product3'
         */
        rtb_MinMax_n = rtb_Vector_bo * VeWTAC_M_ToPrdt_xSEM;

        /* Switch: '<S142>/Switch3' incorporates:
         *  Constant: '<S142>/Constant Value'
         *  RelationalOperator: '<S142>/Comparison'
         *  Switch: '<S142>/Switch4'
         *  Switch: '<S142>/Switch5'
         */
        if (rtb_AND_di)
        {
            /* Merge: '<S13>/Merge4' incorporates:
             *  Constant: '<S145>/Constant'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_Coast_HighSOC;
        }
        else if (rtb_Vector_bo < 0.98F)
        {
            /* Switch: '<S142>/Switch4' incorporates:
             *  Constant: '<S146>/Constant'
             *  Merge: '<S13>/Merge4'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_Coast_BaroDerate;
        }
        else if (rtb_TmpSignalConversionAtVeDT_a)
        {
            /* Switch: '<S142>/Switch5' incorporates:
             *  Constant: '<S148>/Constant'
             *  Merge: '<S13>/Merge4'
             *  Switch: '<S142>/Switch4'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_LV2;
        }
        else
        {
            /* Merge: '<S13>/Merge4' incorporates:
             *  Constant: '<S147>/Constant'
             *  Switch: '<S142>/Switch4'
             *  Switch: '<S142>/Switch5'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_ECM_TorqReqst;
        }

        /* End of Switch: '<S142>/Switch3' */
        /* End of Outputs for SubSystem: '<S13>/BothNegative' */
    }

    /* End of If: '<S13>/If' */

    /* If: '<S11>/If4' incorporates:
     *  Constant: '<S58>/Calib'
     */
    if (KeWTAR_b_UseImpendingSkidLgic)
    {
        /* Outputs for IfAction SubSystem: '<S11>/UseImpendingSkidLogic' incorporates:
         *  ActionPort: '<S60>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S66>/Signal_Latch_On_With_Reset' */
        /* Logic: '<S107>/OR1' incorporates:
         *  Constant: '<S98>/Calib'
         *  Logic: '<S107>/OR'
         *  Logic: '<S66>/Logical'
         *  Logic: '<S66>/Logical2'
         *  RelationalOperator: '<S66>/Comparison'
         *  UnitDelay: '<S107>/Unit Delay'
         */
        VeWTAC_b_ImpSkidAct = (((rtb_TmpSignalConversionAtVeBTQR >
            KeWTAR_M_DrvIntndTotBrkTorq_ImpndSkid) && (VeWTAI_b_ImpndSkid)) ||
                               ((VeWTAI_b_ImpndSkid) &&
                                (WTAR_ac_DW.UnitDelay_DSTATE_lc)));

        /* Update for UnitDelay: '<S107>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_lc = VeWTAC_b_ImpSkidAct;

        /* End of Outputs for SubSystem: '<S66>/Signal_Latch_On_With_Reset' */

        /* If: '<S66>/If' */
        if (VeWTAC_b_ImpSkidAct)
        {
            /* Outputs for IfAction SubSystem: '<S66>/ImpendinActive' incorporates:
             *  ActionPort: '<S96>/Action Port'
             */
            /* MinMax: '<S96>/MinMax2' incorporates:
             *  Constant: '<S109>/Calib'
             *  Constant: '<S96>/Constant Value'
             */
            rtb_Vector_bo = fminf(KeWTAR_M_TorqueReductionSkidMin, 100.0F);

            /* Merge: '<S66>/Merge' incorporates:
             *  MinMax: '<S96>/MinMax'
             */
            VeWTAC_M_Arbitrated_res = fmaxf(rtb_Vector_bo, rtb_Switch2_ol5);

            /* Merge: '<S66>/Merge1' incorporates:
             *  MinMax: '<S96>/MinMax1'
             */
            VeWTAC_M_ToPrdt_xSEM = fmaxf(rtb_Vector_bo, rtb_Sum3_gl);

            /* Merge: '<S66>/Merge2' incorporates:
             *  MinMax: '<S96>/MinMax3'
             */
            rtb_TmpSignalConversionAtVeS_dq = fmaxf(rtb_Vector_bo, rtb_Sum3_aq);

            /* Merge: '<S66>/Merge3' incorporates:
             *  MinMax: '<S96>/MinMax4'
             */
            rtb_Vector_bo = fmaxf(rtb_Vector_bo, rtb_MinMax_n);

            /* Merge: '<S11>/Merge3' incorporates:
             *  Constant: '<S108>/Constant'
             *  SignalConversion generated from: '<S96>/VeWTAC_e_TrqArbSkid'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_Skid;

            /* End of Outputs for SubSystem: '<S66>/ImpendinActive' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S66>/ImpendinNotActive' incorporates:
             *  ActionPort: '<S97>/Action Port'
             */
            /* Merge: '<S66>/Merge' incorporates:
             *  Inport: '<S97>/Arbitrated_in'
             */
            VeWTAC_M_Arbitrated_res = rtb_Switch2_ol5;

            /* Merge: '<S66>/Merge1' incorporates:
             *  Inport: '<S97>/Raw_in'
             */
            VeWTAC_M_ToPrdt_xSEM = rtb_Sum3_gl;

            /* Merge: '<S66>/Merge2' incorporates:
             *  Inport: '<S97>/Pot_in'
             */
            rtb_TmpSignalConversionAtVeS_dq = rtb_Sum3_aq;

            /* Merge: '<S66>/Merge3' incorporates:
             *  Inport: '<S97>/xSEM_in'
             */
            rtb_Vector_bo = rtb_MinMax_n;

            /* End of Outputs for SubSystem: '<S66>/ImpendinNotActive' */
        }

        /* End of If: '<S66>/If' */

        /* MinMax: '<S65>/MinMax2' incorporates:
         *  Constant: '<S65>/Constant Value'
         *  Constant: '<S70>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_f = fminf(KeWTAR_M_TorqueReductionSkidMin,
            100.0F);

        /* Outputs for Atomic SubSystem: '<S65>/Signal_Latch_On_With_Reset1' */
        /* Logic: '<S80>/OR1' incorporates:
         *  Abs: '<S65>/Abs'
         *  Abs: '<S65>/Abs1'
         *  Constant: '<S69>/Calib'
         *  Logic: '<S65>/Logical1'
         *  Logic: '<S65>/Logical3'
         *  Logic: '<S80>/NOT'
         *  Logic: '<S80>/OR'
         *  RelationalOperator: '<S65>/Comparison1'
         *  RelationalOperator: '<S65>/Comparison2'
         *  RelationalOperator: '<S65>/Comparison3'
         *  RelationalOperator: '<S65>/Comparison4'
         *  RelationalOperator: '<S65>/Comparison5'
         *  RelationalOperator: '<S65>/Comparison6'
         *  RelationalOperator: '<S65>/Comparison7'
         *  Sum: '<S65>/Add'
         *  Sum: '<S65>/Add1'
         *  UnitDelay: '<S65>/Unit Delay'
         *  UnitDelay: '<S65>/Unit Delay1'
         *  UnitDelay: '<S65>/Unit Delay2'
         *  UnitDelay: '<S80>/Unit Delay'
         */
        VeWTAC_b_ImpSkidFiltAct = ((WTAR_ac_DW.UnitDelay_DSTATE_p3k !=
            VeWTAC_b_ImpSkidAct) || (((((((rtb_Switch2_ol5 <=
            rtb_TmpSignalConversionAtVeSC_f) && (rtb_Sum3_gl <=
            rtb_TmpSignalConversionAtVeSC_f)) && (rtb_Sum3_aq <=
            rtb_TmpSignalConversionAtVeSC_f)) && (rtb_MinMax_n <=
            rtb_TmpSignalConversionAtVeSC_f)) && (fabsf(VeWTAC_M_Arbitrated_res
            - WTAR_ac_DW.UnitDelay2_DSTATE_ks) > KeWTAR_M_ImpndSkidFiltOff)) &&
            (fabsf(VeWTAC_M_ToPrdt_xSEM - WTAR_ac_DW.UnitDelay1_DSTATE_ok) >
             KeWTAR_M_ImpndSkidFiltOff)) && (WTAR_ac_DW.UnitDelay_DSTATE_ck)));

        /* Update for UnitDelay: '<S80>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_ck = VeWTAC_b_ImpSkidFiltAct;

        /* End of Outputs for SubSystem: '<S65>/Signal_Latch_On_With_Reset1' */

        /* If: '<S65>/If1' */
        if (VeWTAC_b_ImpSkidFiltAct)
        {
            /* Outputs for IfAction SubSystem: '<S65>/FilterActive' incorporates:
             *  ActionPort: '<S67>/Action Port'
             */
            /* Sum: '<S81>/Sum2' incorporates:
             *  UnitDelay: '<S65>/Unit Delay4'
             */
            rtb_Sum3_aq = VeWTAC_M_Arbitrated_res -
                WTAR_ac_DW.UnitDelay4_DSTATE_nu;

            /* Outputs for Atomic SubSystem: '<S81>/Limiter' */
            /* Switch: '<S87>/Switch1' incorporates:
             *  Constant: '<S86>/Calib'
             *  RelationalOperator: '<S87>/Relational Operator'
             */
            if (KeWTAR_dM_TorqueReductionSkidfct_IncLmt < rtb_Sum3_aq)
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_IncLmt;
            }
            else
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = rtb_Sum3_aq;
            }

            /* End of Switch: '<S87>/Switch1' */

            /* Switch: '<S87>/Switch' incorporates:
             *  Constant: '<S85>/Calib'
             *  RelationalOperator: '<S87>/Relational Operator1'
             */
            if (rtb_Switch2_ol5 <= KeWTAR_dM_TorqueReductionSkidfct_DecLmt)
            {
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_DecLmt;
            }

            /* End of Switch: '<S87>/Switch' */
            /* End of Outputs for SubSystem: '<S81>/Limiter' */

            /* Merge: '<S65>/Merge2' incorporates:
             *  Sum: '<S81>/Sum3'
             *  UnitDelay: '<S65>/Unit Delay4'
             */
            VeWTAC_M_Arbitrated_resfilt = rtb_Switch2_ol5 +
                WTAR_ac_DW.UnitDelay4_DSTATE_nu;

            /* Sum: '<S82>/Sum2' incorporates:
             *  UnitDelay: '<S65>/Unit Delay5'
             */
            rtb_Sum3_aq = rtb_TmpSignalConversionAtVeS_dq -
                WTAR_ac_DW.UnitDelay5_DSTATE_o;

            /* Outputs for Atomic SubSystem: '<S82>/Limiter' */
            /* Switch: '<S88>/Switch1' incorporates:
             *  Constant: '<S86>/Calib'
             *  RelationalOperator: '<S88>/Relational Operator'
             */
            if (KeWTAR_dM_TorqueReductionSkidfct_IncLmt < rtb_Sum3_aq)
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_IncLmt;
            }
            else
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = rtb_Sum3_aq;
            }

            /* End of Switch: '<S88>/Switch1' */

            /* Switch: '<S88>/Switch' incorporates:
             *  Constant: '<S85>/Calib'
             *  RelationalOperator: '<S88>/Relational Operator1'
             */
            if (rtb_Switch2_ol5 <= KeWTAR_dM_TorqueReductionSkidfct_DecLmt)
            {
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_DecLmt;
            }

            /* End of Switch: '<S88>/Switch' */
            /* End of Outputs for SubSystem: '<S82>/Limiter' */

            /* Merge: '<S65>/Merge1' incorporates:
             *  Sum: '<S82>/Sum3'
             *  UnitDelay: '<S65>/Unit Delay5'
             */
            rtb_Sum3_aq = rtb_Switch2_ol5 + WTAR_ac_DW.UnitDelay5_DSTATE_o;

            /* Sum: '<S83>/Sum2' incorporates:
             *  UnitDelay: '<S65>/Unit Delay3'
             */
            rtb_MinMax_n = VeWTAC_M_ToPrdt_xSEM -
                WTAR_ac_DW.UnitDelay3_DSTATE_jo;

            /* Outputs for Atomic SubSystem: '<S83>/Limiter' */
            /* Switch: '<S89>/Switch1' incorporates:
             *  Constant: '<S86>/Calib'
             *  RelationalOperator: '<S89>/Relational Operator'
             */
            if (KeWTAR_dM_TorqueReductionSkidfct_IncLmt < rtb_MinMax_n)
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_IncLmt;
            }
            else
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = rtb_MinMax_n;
            }

            /* End of Switch: '<S89>/Switch1' */

            /* Switch: '<S89>/Switch' incorporates:
             *  Constant: '<S85>/Calib'
             *  RelationalOperator: '<S89>/Relational Operator1'
             */
            if (rtb_Switch2_ol5 <= KeWTAR_dM_TorqueReductionSkidfct_DecLmt)
            {
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_DecLmt;
            }

            /* End of Switch: '<S89>/Switch' */
            /* End of Outputs for SubSystem: '<S83>/Limiter' */

            /* Merge: '<S65>/Merge3' incorporates:
             *  Sum: '<S83>/Sum3'
             *  UnitDelay: '<S65>/Unit Delay3'
             */
            rtb_MinMax_n = rtb_Switch2_ol5 + WTAR_ac_DW.UnitDelay3_DSTATE_jo;

            /* Sum: '<S84>/Sum2' incorporates:
             *  UnitDelay: '<S65>/Unit Delay6'
             */
            rtb_Vector_bo -= WTAR_ac_DW.UnitDelay6_DSTATE_d;

            /* Outputs for Atomic SubSystem: '<S84>/Limiter' */
            /* Switch: '<S90>/Switch1' incorporates:
             *  Constant: '<S86>/Calib'
             *  RelationalOperator: '<S90>/Relational Operator'
             */
            if (KeWTAR_dM_TorqueReductionSkidfct_IncLmt < rtb_Vector_bo)
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_IncLmt;
            }
            else
            {
                /* Switch: '<S90>/Switch1' */
                rtb_Switch2_ol5 = rtb_Vector_bo;
            }

            /* End of Switch: '<S90>/Switch1' */

            /* Switch: '<S90>/Switch' incorporates:
             *  Constant: '<S85>/Calib'
             *  RelationalOperator: '<S90>/Relational Operator1'
             */
            if (rtb_Switch2_ol5 <= KeWTAR_dM_TorqueReductionSkidfct_DecLmt)
            {
                rtb_Switch2_ol5 = KeWTAR_dM_TorqueReductionSkidfct_DecLmt;
            }

            /* End of Switch: '<S90>/Switch' */
            /* End of Outputs for SubSystem: '<S84>/Limiter' */

            /* Merge: '<S65>/Merge4' incorporates:
             *  Sum: '<S84>/Sum3'
             *  UnitDelay: '<S65>/Unit Delay6'
             */
            rtb_TmpSignalConversionAtVeS_dq = rtb_Switch2_ol5 +
                WTAR_ac_DW.UnitDelay6_DSTATE_d;

            /* End of Outputs for SubSystem: '<S65>/FilterActive' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S65>/FilterNotActive' incorporates:
             *  ActionPort: '<S68>/Action Port'
             */
            /* Merge: '<S65>/Merge2' incorporates:
             *  Gain: '<S92>/Gain'
             */
            VeWTAC_M_Arbitrated_resfilt = VeWTAC_M_Arbitrated_res;

            /* Merge: '<S65>/Merge3' incorporates:
             *  Gain: '<S91>/Gain'
             */
            rtb_MinMax_n = VeWTAC_M_ToPrdt_xSEM;

            /* Merge: '<S65>/Merge1' incorporates:
             *  Gain: '<S93>/Gain'
             */
            rtb_Sum3_aq = rtb_TmpSignalConversionAtVeS_dq;

            /* Merge: '<S65>/Merge4' incorporates:
             *  Gain: '<S94>/Gain'
             */
            rtb_TmpSignalConversionAtVeS_dq = rtb_Vector_bo;

            /* End of Outputs for SubSystem: '<S65>/FilterNotActive' */
        }

        /* End of If: '<S65>/If1' */

        /* Merge: '<S11>/Merge8' incorporates:
         *  Gain: '<S72>/Gain'
         */
        rtb_Vector_bo = VeWTAC_M_Arbitrated_resfilt;

        /* Merge: '<S11>/Merge9' incorporates:
         *  Gain: '<S73>/Gain'
         */
        rtb_Switch2_ol5 = rtb_MinMax_n;

        /* Merge: '<S11>/Merge2' incorporates:
         *  Gain: '<S77>/Gain'
         */
        rtb_Sum3_gl = rtb_TmpSignalConversionAtVeS_dq;

        /* Merge: '<S11>/Merge1' incorporates:
         *  Gain: '<S78>/Gain'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Sum3_aq;

        /* Update for UnitDelay: '<S65>/Unit Delay2' */
        WTAR_ac_DW.UnitDelay2_DSTATE_ks = VeWTAC_M_Arbitrated_resfilt;

        /* Update for UnitDelay: '<S65>/Unit Delay1' */
        WTAR_ac_DW.UnitDelay1_DSTATE_ok = rtb_MinMax_n;

        /* Update for UnitDelay: '<S65>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_p3k = VeWTAC_b_ImpSkidAct;

        /* Update for UnitDelay: '<S65>/Unit Delay4' */
        WTAR_ac_DW.UnitDelay4_DSTATE_nu = VeWTAC_M_Arbitrated_resfilt;

        /* Update for UnitDelay: '<S65>/Unit Delay6' */
        WTAR_ac_DW.UnitDelay6_DSTATE_d = rtb_TmpSignalConversionAtVeS_dq;

        /* Update for UnitDelay: '<S65>/Unit Delay5' */
        WTAR_ac_DW.UnitDelay5_DSTATE_o = rtb_Sum3_aq;

        /* Update for UnitDelay: '<S65>/Unit Delay3' */
        WTAR_ac_DW.UnitDelay3_DSTATE_jo = rtb_MinMax_n;

        /* End of Outputs for SubSystem: '<S11>/UseImpendingSkidLogic' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S11>/Through' incorporates:
         *  ActionPort: '<S59>/Action Port'
         */
        /* Merge: '<S11>/Merge8' incorporates:
         *  Gain: '<S61>/Gain'
         */
        rtb_Vector_bo = rtb_Switch2_ol5;

        /* Merge: '<S11>/Merge9' incorporates:
         *  Gain: '<S62>/Gain'
         */
        rtb_Switch2_ol5 = rtb_Sum3_gl;

        /* Merge: '<S11>/Merge1' incorporates:
         *  Gain: '<S63>/Gain'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Sum3_aq;

        /* Merge: '<S11>/Merge2' incorporates:
         *  Gain: '<S64>/Gain'
         */
        rtb_Sum3_gl = rtb_MinMax_n;

        /* End of Outputs for SubSystem: '<S11>/Through' */
    }

    /* End of If: '<S11>/If4' */

    /* If: '<S16>/If1' incorporates:
     *  Constant: '<S171>/Calib'
     */
    if (KeWTAR_b_UseHCPPedalScalar)
    {
        /* Outputs for IfAction SubSystem: '<S16>/Use_HCP_PedalScalar' incorporates:
         *  ActionPort: '<S173>/Action Port'
         */
        /* Product: '<S173>/Multiplication6' incorporates:
         *  Constant: '<S178>/Calib'
         */
        rtb_Switch2_ol5 = VeWTAI_Pct_AccelPedalEffPosition *
            KeWTAR_r_PedalScalarPct2ToReq;

        /* Merge: '<S16>/Merge' incorporates:
         *  Gain: '<S179>/Gain'
         */
        rtb_Sum3_aq = rtb_Switch2_ol5;

        /* Merge: '<S16>/Merge1' incorporates:
         *  Gain: '<S180>/Gain'
         */
        rtb_Vector_bo = rtb_Switch2_ol5;

        /* Merge: '<S16>/Merge2' incorporates:
         *  Gain: '<S181>/Gain'
         */
        rtb_MinMax_n = rtb_Switch2_ol5;

        /* End of Outputs for SubSystem: '<S16>/Use_HCP_PedalScalar' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S16>/PassThru' incorporates:
         *  ActionPort: '<S172>/Action Port'
         */
        /* Merge: '<S16>/Merge' incorporates:
         *  Gain: '<S174>/Gain'
         */
        rtb_Sum3_aq = rtb_Vector_bo;

        /* Merge: '<S16>/Merge1' incorporates:
         *  Gain: '<S175>/Gain'
         */
        rtb_Vector_bo = rtb_Switch2_ol5;

        /* Merge: '<S16>/Merge2' incorporates:
         *  Gain: '<S176>/Gain'
         */
        rtb_MinMax_n = VeWTAC_M_ToPrdt_xSEM;

        /* Merge: '<S16>/Merge3' incorporates:
         *  Gain: '<S177>/Gain'
         */
        rtb_Switch2_ol5 = rtb_Sum3_gl;

        /* End of Outputs for SubSystem: '<S16>/PassThru' */
    }

    /* End of If: '<S16>/If1' */

    /* If: '<S12>/If2' */
    if (VeWTAC_r_RdcdPerfSclr2 > 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S12>/Reduced_Perf_Mode_2' incorporates:
         *  ActionPort: '<S114>/Action Port'
         */
        /* Sum: '<S114>/Sum' incorporates:
         *  Constant: '<S114>/Constant Value'
         *  Lookup_n-D: '<S137>/Vector'
         *  Product: '<S114>/Multiplication3'
         *  Product: '<S114>/Multiplication4'
         *  Product: '<S114>/Multiplication6'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Sum: '<S114>/Sum3'
         */
        rtb_Vector_bo = ((look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
                           ((const float32 *)&(KxWTAR_r_PerformanceFactor2[0])),
                           ((const float32 *)&(KtWTAR_r_PerformanceFactor2[0])),
                           6U) * VeWTAC_r_RdcdPerfSclr2) * rtb_Sum3_aq) + ((1.0F
            - VeWTAC_r_RdcdPerfSclr2) * rtb_Sum3_aq);

        /* Merge: '<S12>/Merge2' incorporates:
         *  Gain: '<S138>/Gain'
         */
        rtb_Sum3_aq = rtb_Vector_bo;

        /* Merge: '<S12>/Merge5' incorporates:
         *  Gain: '<S139>/Gain'
         */
        VeWTAC_M_ToReqRaw_RedPerf = rtb_Vector_bo;

        /* Merge: '<S12>/Merge1' incorporates:
         *  Gain: '<S140>/Gain'
         */
        VeWTAC_M_ToReqPot_RedPerf = rtb_Vector_bo;

        /* Merge: '<S12>/Merge3' incorporates:
         *  Gain: '<S141>/Gain'
         */
        VeWTAC_M_ToReqxSEM_RedPerf = rtb_Vector_bo;

        /* Merge: '<S12>/Merge4' incorporates:
         *  Constant: '<S136>/Constant'
         *  SignalConversion generated from: '<S114>/VeWTAC_e_TrqArbSRARRedPerf2'
         */
        rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_SRAR_RedPerfTrq2;

        /* End of Outputs for SubSystem: '<S12>/Reduced_Perf_Mode_2' */
    }
    else if (VeWTAC_r_RdcdPerfSclr > 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S12>/Reduced_Perf_Mode_1' incorporates:
         *  ActionPort: '<S113>/Action Port'
         */
        /* Sum: '<S113>/Sum' incorporates:
         *  Constant: '<S113>/Constant Value'
         *  Lookup_n-D: '<S130>/Vector'
         *  Product: '<S113>/Multiplication3'
         *  Product: '<S113>/Multiplication4'
         *  Product: '<S113>/Multiplication6'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Sum: '<S113>/Sum3'
         */
        rtb_Vector_bo = ((look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
                           ((const float32 *)&(KxWTAR_r_PerformanceFactor[0])),
                           ((const float32 *)&(KtWTAR_r_PerformanceFactor[0])),
                           6U) * VeWTAC_r_RdcdPerfSclr) * rtb_Sum3_aq) + ((1.0F
            - VeWTAC_r_RdcdPerfSclr) * rtb_Sum3_aq);

        /* Merge: '<S12>/Merge2' incorporates:
         *  Gain: '<S132>/Gain'
         */
        rtb_Sum3_aq = rtb_Vector_bo;

        /* Merge: '<S12>/Merge5' incorporates:
         *  Gain: '<S133>/Gain'
         */
        VeWTAC_M_ToReqRaw_RedPerf = rtb_Vector_bo;

        /* Merge: '<S12>/Merge1' incorporates:
         *  Gain: '<S134>/Gain'
         */
        VeWTAC_M_ToReqPot_RedPerf = rtb_Vector_bo;

        /* Merge: '<S12>/Merge3' incorporates:
         *  Gain: '<S135>/Gain'
         */
        VeWTAC_M_ToReqxSEM_RedPerf = rtb_Vector_bo;

        /* Merge: '<S12>/Merge4' incorporates:
         *  Constant: '<S129>/Constant'
         *  SignalConversion generated from: '<S113>/VeWTAC_e_TrqArbSRARRedPerf1'
         */
        rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_SRAR_RedPerfTrq;

        /* End of Outputs for SubSystem: '<S12>/Reduced_Perf_Mode_1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S12>/PassThru' incorporates:
         *  ActionPort: '<S110>/Action Port'
         */
        /* Merge: '<S12>/Merge5' incorporates:
         *  Gain: '<S116>/Gain'
         */
        VeWTAC_M_ToReqRaw_RedPerf = rtb_Vector_bo;

        /* Merge: '<S12>/Merge1' incorporates:
         *  Gain: '<S117>/Gain'
         */
        VeWTAC_M_ToReqPot_RedPerf = rtb_MinMax_n;

        /* Merge: '<S12>/Merge3' incorporates:
         *  Gain: '<S118>/Gain'
         */
        VeWTAC_M_ToReqxSEM_RedPerf = rtb_Switch2_ol5;

        /* End of Outputs for SubSystem: '<S12>/PassThru' */
    }

    /* End of If: '<S12>/If2' */

    /* If: '<S10>/If5' incorporates:
     *  Constant: '<S37>/Calib'
     */
    if (KeWTAR_b_UseHillHold)
    {
        /* Outputs for IfAction SubSystem: '<S10>/WTAR_HillHold' incorporates:
         *  ActionPort: '<S38>/Action Port'
         */
        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        /* RelationalOperator: '<S38>/Comparison5' incorporates:
         *  Gain: '<S267>/Gain'
         *  UnitDelay: '<S38>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeDT_a = (rtb_Switch1_hk[0] !=
            WTAR_ac_DW.UnitDelay_DSTATE_m0);

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */

        /* Outputs for Atomic SubSystem: '<S38>/Digital Lowpass Reset Enabled1' */
        /* Sum: '<S40>/Summation' incorporates:
         *  Constant: '<S43>/Calib'
         *  Product: '<S40>/Multiplication'
         *  Sum: '<S40>/Subtraction'
         *  UnitDelay: '<S40>/Unit Delay'
         */
        rtb_Vector_bo = ((rtb_TmpSignalConversionAtVeCSVR -
                          WTAR_ac_DW.UnitDelay_DSTATE_kc) *
                         KeWTAR_k_HillHold_No_FiltCoef) +
            WTAR_ac_DW.UnitDelay_DSTATE_kc;

        /* Update for UnitDelay: '<S40>/Unit Delay' incorporates:
         *  Switch: '<S40>/Switch2'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_kc = rtb_Vector_bo;

        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        /* Logic: '<S41>/Logical Operator' incorporates:
         *  Constant: '<S41>/Constant'
         *  Gain: '<S267>/Gain'
         *  RelationalOperator: '<S41>/Comparison1'
         *  RelationalOperator: '<S41>/Comparison2'
         *  Switch: '<S40>/Switch2'
         */
        VeWTAR_b_IsRollBackInD = ((rtb_Switch1_hk[0] > 0.0F) && (rtb_Vector_bo <
            0.0F));

        /* Logic: '<S41>/Logical Operator2' incorporates:
         *  Constant: '<S41>/Constant'
         *  Gain: '<S267>/Gain'
         *  RelationalOperator: '<S41>/Comparison3'
         *  RelationalOperator: '<S41>/Comparison4'
         *  Switch: '<S40>/Switch2'
         */
        VeWTAR_b_IsRollForwardInR = ((rtb_Switch1_hk[0] < 0.0F) &&
            (rtb_Vector_bo > 0.0F));

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
        /* End of Outputs for SubSystem: '<S38>/Digital Lowpass Reset Enabled1' */

        /* Logic: '<S41>/Logical Operator1' */
        VeWTAR_b_HillHoldCndtnMet = ((VeWTAR_b_IsRollBackInD) ||
            (VeWTAR_b_IsRollForwardInR));

        /* UnitDelay: '<S41>/Unit Delay' */
        rtb_AND_di = WTAR_ac_DW.UnitDelay_DSTATE_jo;

        /* UnitDelay: '<S38>/Unit Delay1' */
        VeWTAR_b_PRNDL_Changed = WTAR_ac_DW.UnitDelay1_DSTATE_lk;

        /* If: '<S38>/If' */
        if (VeWTAR_b_HillHoldCndtnMet)
        {
            /* Outputs for IfAction SubSystem: '<S38>/Hillhold' incorporates:
             *  ActionPort: '<S42>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S51>/EdgeRising' */
            /* Logic: '<S52>/OR1' incorporates:
             *  UnitDelay: '<S52>/Unit Delay'
             */
            rtb_UnitDelay_gs = !WTAR_ac_DW.UnitDelay_DSTATE_f4y;

            /* Update for UnitDelay: '<S52>/Unit Delay' */
            WTAR_ac_DW.UnitDelay_DSTATE_f4y = rtb_AND_di;

            /* End of Outputs for SubSystem: '<S51>/EdgeRising' */

            /* UnitDelay: '<S51>/Unit Delay' */
            rtb_MinMax_n = WTAR_ac_DW.UnitDelay_DSTATE_dt;

            /* If: '<S51>/If' incorporates:
             *  Constant: '<S47>/Constant'
             *  Constant: '<S48>/Constant'
             *  Logic: '<S42>/Logical1'
             *  RelationalOperator: '<S42>/Comparison1'
             *  RelationalOperator: '<S42>/Comparison5'
             */
            if ((((uint32)rtb_TmpSignalConversionAtVeHSER) !=
                    CeHSER_e_UseNeutralEqn) && (((uint32)
                    rtb_TmpSignalConversionAtVeHSER) != CeHSER_e_UseNeutralEqn_2))
            {
                /* Outputs for IfAction SubSystem: '<S51>/Filter' incorporates:
                 *  ActionPort: '<S53>/Action Port'
                 */
                /* Switch: '<S42>/Switch2' incorporates:
                 *  Constant: '<S42>/Constant Value2'
                 *  Constant: '<S49>/Calib'
                 *  Product: '<S53>/Multiplication'
                 *  Sum: '<S53>/Subtraction'
                 *  Sum: '<S53>/Summation'
                 */
                rtb_MinMax_n += (1.0F - rtb_MinMax_n) *
                    KeWTAR_k_HillHoldOffsetFactorFilter;

                /* End of Outputs for SubSystem: '<S51>/Filter' */
            }

            /* End of If: '<S51>/If' */

            /* Outputs for Atomic SubSystem: '<S51>/EdgeRising' */
            /* Switch: '<S51>/Switch1' incorporates:
             *  Logic: '<S52>/AND'
             */
            if (rtb_AND_di && rtb_UnitDelay_gs)
            {
                /* Switch: '<S51>/Switch1' incorporates:
                 *  Switch: '<S42>/Switch1'
                 */
                VeWTAR_k_HillHoldOffsetFactor = (float32)
                    ((!VeWTAR_b_PRNDL_Changed) ? 1 : 0);
            }
            else
            {
                /* Switch: '<S51>/Switch1' */
                VeWTAR_k_HillHoldOffsetFactor = rtb_MinMax_n;
            }

            /* End of Switch: '<S51>/Switch1' */
            /* End of Outputs for SubSystem: '<S51>/EdgeRising' */

            /* Switch: '<S42>/Switch2' incorporates:
             *  Constant: '<S42>/Constant Value'
             *  Lookup_n-D: '<S50>/Vector'
             *  Switch: '<S40>/Switch2'
             */
            if (rtb_AND_di)
            {
                /* Outputs for Atomic SubSystem: '<S38>/Digital Lowpass Reset Enabled1' */
                rtb_MinMax_n = look1_iflf_binlcapw(rtb_Vector_bo, ((const
                    float32 *)&(KxWTAR_M_HillHoldAxleTorqOffset[0])), ((const
                    float32 *)&(KtWTAR_M_HillHoldAxleTorqOffset[0])), 8U);

                /* End of Outputs for SubSystem: '<S38>/Digital Lowpass Reset Enabled1' */
            }
            else
            {
                rtb_MinMax_n = 0.0F;
            }

            /* End of Switch: '<S42>/Switch2' */

            /* Product: '<S42>/Product' */
            VeWTAR_M_HillHoldOffset = rtb_MinMax_n *
                VeWTAR_k_HillHoldOffsetFactor;

            /* Merge: '<S10>/Merge3' incorporates:
             *  Sum: '<S42>/Sum'
             */
            VeWTAC_M_AxleTorqReq_AfterHillHold = rtb_Sum3_aq +
                VeWTAR_M_HillHoldOffset;

            /* Merge: '<S10>/Merge1' incorporates:
             *  Constant: '<S46>/Constant'
             *  SignalConversion generated from: '<S42>/VeWTAR_e_TrqArbHillHold'
             */
            rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_HillHold;

            /* Update for UnitDelay: '<S51>/Unit Delay' */
            WTAR_ac_DW.UnitDelay_DSTATE_dt = VeWTAR_k_HillHoldOffsetFactor;

            /* End of Outputs for SubSystem: '<S38>/Hillhold' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S38>/Pass' incorporates:
             *  ActionPort: '<S44>/Action Port'
             */
            /* Merge: '<S10>/Merge3' incorporates:
             *  Gain: '<S56>/Gain'
             */
            VeWTAC_M_AxleTorqReq_AfterHillHold = rtb_Sum3_aq;

            /* End of Outputs for SubSystem: '<S38>/Pass' */
        }

        /* End of If: '<S38>/If' */

        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        /* Update for UnitDelay: '<S38>/Unit Delay' incorporates:
         *  Gain: '<S267>/Gain'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_m0 = rtb_Switch1_hk[0];

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */

        /* Update for UnitDelay: '<S41>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_jo = VeWTAR_b_HillHoldCndtnMet;

        /* Update for UnitDelay: '<S38>/Unit Delay1' */
        WTAR_ac_DW.UnitDelay1_DSTATE_lk = rtb_TmpSignalConversionAtVeDT_a;

        /* End of Outputs for SubSystem: '<S10>/WTAR_HillHold' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S10>/Without_HillHold_Pass_Thru' incorporates:
         *  ActionPort: '<S39>/Action Port'
         */
        /* Merge: '<S10>/Merge3' incorporates:
         *  Gain: '<S57>/Gain'
         */
        VeWTAC_M_AxleTorqReq_AfterHillHold = rtb_Sum3_aq;

        /* End of Outputs for SubSystem: '<S10>/Without_HillHold_Pass_Thru' */
    }

    /* End of If: '<S10>/If5' */

    /* If: '<S9>/If3' incorporates:
     *  Inport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA'
     */
    if (rtb_TmpSignalConversionAtVeSR_f)
    {
        (void)Rte_Read_VeBTQR_b_DrvrIntndedTotBrkTrqFA_Value(&rtb_Comparison12);

        /* Outputs for IfAction SubSystem: '<S9>/CreepTorqModeArbitrated_Raw' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        /* Switch: '<S24>/Switch1' incorporates:
         *  Constant: '<S19>/Constant Value1'
         *  Constant: '<S21>/Constant'
         *  Constant: '<S22>/Constant'
         *  Constant: '<S25>/Calib'
         *  Inport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA'
         *  Logic: '<S19>/Logical'
         *  Logic: '<S19>/Logical1'
         *  Lookup_n-D: '<S26>/Vector'
         *  Lookup_n-D: '<S27>/Vector'
         *  Product: '<S19>/Multiplication3'
         *  RelationalOperator: '<S19>/Comparison2'
         *  RelationalOperator: '<S19>/Comparison4'
         *  SignalConversion generated from: '<S1>/VeBRKR_e_BrkPedalDscrtInpt'
         *  SignalConversion generated from: '<S1>/VeBTQR_M_DrvrIntndedTotBrkTrq'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  SignalConversion generated from: '<S1>/VePLTR_e_EPBHoldSts'
         */
        if (((KeWTAR_b_CreepMdC2LOCBrkPdlEnblr) && rtb_Comparison12) &&
                ((((uint32)rtb_TmpSignalConversionAtVeBR_d) ==
                  CeBRKR_e_BrkApplied) || (((uint32)
                rtb_TmpSignalConversionAtVePLTR) != CePLTR_e_EPBHoldSts_REL)))
        {
            rtb_Switch13 = 0.0F;
        }
        else
        {
            rtb_Switch13 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
                ((const float32 *)&(KxWTAR_M_CreepTorque[0])), ((const float32 *)
                &(KtWTAR_M_CreepTorque[0])), 6U) * look1_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeBTQR, ((const float32 *)
                  &(KxWTAR_r_CreepTorqRamp[0])), ((const float32 *)
                  &(KtWTAR_r_CreepTorqRamp[0])), 6U);
        }

        /* End of Switch: '<S24>/Switch1' */

        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        /* Sum: '<S19>/Sum' incorporates:
         *  Gain: '<S267>/Gain'
         *  Product: '<S19>/Multiplication1'
         */
        rtb_Sum3_aq = rtb_Switch13 * rtb_Switch1_hk[0];

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */

        /* Merge: '<S9>/Merge6' incorporates:
         *  Gain: '<S29>/Gain'
         */
        VeWTAC_M_ToReqRaw_Creep = rtb_Sum3_aq;

        /* Merge: '<S9>/Merge4' incorporates:
         *  Gain: '<S30>/Gain'
         */
        VeWTAC_M_ToReqArbitrated_Creep = rtb_Sum3_aq;

        /* Merge: '<S9>/Merge1' incorporates:
         *  Gain: '<S31>/Gain'
         */
        VeWTAC_M_ToReqPot_Creep = rtb_Sum3_aq;

        /* Merge: '<S9>/Merge2' incorporates:
         *  Gain: '<S32>/Gain'
         */
        VeWTAC_M_ToReqxSEM_Creep = rtb_Sum3_aq;

        /* Merge: '<S9>/Merge3' incorporates:
         *  Constant: '<S23>/Constant'
         *  SignalConversion generated from: '<S19>/VeWTAC_e_SRARCreepTrq'
         */
        rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_SRAR_CreepTrq;

        /* End of Outputs for SubSystem: '<S9>/CreepTorqModeArbitrated_Raw' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/PassThru' incorporates:
         *  ActionPort: '<S20>/Action Port'
         */
        /* Merge: '<S9>/Merge4' incorporates:
         *  Gain: '<S33>/Gain'
         *  Product: '<S4>/Product4'
         */
        VeWTAC_M_ToReqArbitrated_Creep = VeWTAC_M_AxleTorqReq_AfterHillHold *
            VeWTAC_r_TrqCmndFactor_OilTemp;

        /* Merge: '<S9>/Merge6' incorporates:
         *  Gain: '<S34>/Gain'
         *  Product: '<S4>/Product4'
         */
        VeWTAC_M_ToReqRaw_Creep = VeWTAC_M_ToReqRaw_RedPerf *
            VeWTAC_r_TrqCmndFactor_OilTemp;

        /* Merge: '<S9>/Merge1' incorporates:
         *  Gain: '<S35>/Gain'
         *  Product: '<S4>/Product4'
         */
        VeWTAC_M_ToReqPot_Creep = VeWTAC_M_ToReqPot_RedPerf *
            VeWTAC_r_TrqCmndFactor_OilTemp;

        /* Merge: '<S9>/Merge2' incorporates:
         *  Gain: '<S36>/Gain'
         *  Product: '<S4>/Product4'
         */
        VeWTAC_M_ToReqxSEM_Creep = VeWTAC_M_ToReqxSEM_RedPerf *
            VeWTAC_r_TrqCmndFactor_OilTemp;

        /* End of Outputs for SubSystem: '<S9>/PassThru' */
    }

    /* End of If: '<S9>/If3' */

    /* SignalConversion generated from: '<S1>/VeWTAR_M_ToArb_ESC' incorporates:
     *  Outport: '<Root>/VeWTAR_M_ToArb_ESC'
     *  UnitDelay: '<S15>/Unit Delay6'
     */
    (void)Rte_Write_VeWTAR_M_ToArb_ESC_Value(WTAR_ac_DW.UnitDelay6_DSTATE_bv);

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S184>/Calib'
     *  RelationalOperator: '<S18>/Equal2'
     */
    if (KeWTAR_M_MinTorq_4ThermalProtection < VeWTAC_M_ToReqArbitrated_Creep)
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Lookup_n-D: '<S187>/Vector'
         *  Lookup_n-D: '<S188>/Vector'
         *  Lookup_n-D: '<S189>/Vector'
         *  MinMax: '<S18>/MinMax1'
         *  MinMax: '<S18>/MinMax2'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S8>/Switch28'
         *  Switch: '<S8>/Switch30'
         */
        rtb_Vector_bo = fminf(fminf(look2_iflf_binlcapw
                               (rtb_TmpSignalConversionAtVeCSVR,
                                VeWTAI_T_EngCoolantTemp, ((const float32 *)
            &(KxWTAR_r_ToReduction_ECT[0])), ((const float32 *)
            &(KyWTAR_r_ToReduction_ECT[0])), ((const float32 *)
            &(KtWTAR_r_ToReduction_ECT[0])), WTAR_ac_ConstP.pooled17, 6U),
                               look2_iflf_binlcapw
                               (rtb_TmpSignalConversionAtVeCSVR, fmaxf(fmaxf
            (VeWTAI_T_MtrB_Temp, VeWTAI_T_MtrA_Temp), VeWTAI_T_MtrC_Temp), ((
            const float32 *)&(KxWTAR_r_ToReduction_MtrTemp[0])), ((const float32
            *)&(KyWTAR_r_ToReduction_MtrTemp[0])), ((const float32 *)
            &(KtWTAR_r_ToReduction_MtrTemp[0])), WTAR_ac_ConstP.pooled17, 6U)),
                              look2_iflf_binlcapw
                              (rtb_TmpSignalConversionAtVeCSVR,
                               VeWTAI_T_TrnOilTemp, ((const float32 *)
                                &(KxWTAR_r_ToReduction_TOT[0])), ((const float32
            *)&(KyWTAR_r_ToReduction_TOT[0])), ((const float32 *)
                                &(KtWTAR_r_ToReduction_TOT[0])),
                               WTAR_ac_ConstP.pooled17, 6U));
    }
    else
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Constant: '<S18>/Constant Value'
         */
        rtb_Vector_bo = 1.0F;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S18>/GradientLimiter' */
    /* Sum: '<S183>/Sum2' incorporates:
     *  Product: '<S18>/Division1'
     *  Sum: '<S18>/Sum1'
     *  UnitDelay: '<S183>/Unit Delay'
     */
    rtb_MinMax_n = (VeWTAC_M_ToReqArbitrated_Creep - (rtb_Vector_bo *
                     VeWTAC_M_ToReqArbitrated_Creep)) -
        WTAR_ac_DW.UnitDelay_DSTATE_ft;

    /* Outputs for Atomic SubSystem: '<S183>/Limiter' */
    /* Switch: '<S193>/Switch1' incorporates:
     *  Constant: '<S186>/Calib'
     *  RelationalOperator: '<S193>/Relational Operator'
     */
    if (KeWTAR_dM_ThermalProtectionTorq_LU < rtb_MinMax_n)
    {
        /* Switch: '<S193>/Switch1' */
        rtb_MinMax_n = KeWTAR_dM_ThermalProtectionTorq_LU;
    }

    /* End of Switch: '<S193>/Switch1' */

    /* Switch: '<S193>/Switch' incorporates:
     *  Constant: '<S185>/Calib'
     *  RelationalOperator: '<S193>/Relational Operator1'
     */
    if (rtb_MinMax_n <= KeWTAR_dM_ThermalProtectionTorq_LD)
    {
        rtb_MinMax_n = KeWTAR_dM_ThermalProtectionTorq_LD;
    }

    /* End of Switch: '<S193>/Switch' */
    /* End of Outputs for SubSystem: '<S183>/Limiter' */

    /* Sum: '<S183>/Sum3' incorporates:
     *  UnitDelay: '<S183>/Unit Delay'
     */
    rtb_MinMax_n += WTAR_ac_DW.UnitDelay_DSTATE_ft;

    /* Update for UnitDelay: '<S183>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ft = rtb_MinMax_n;

    /* End of Outputs for SubSystem: '<S18>/GradientLimiter' */

    /* Gain: '<S191>/Gain' */
    VeWTAC_M_TotalToReduction_ThermProtection = rtb_MinMax_n;

    /* Gain: '<S17>/Gain' incorporates:
     *  Sum: '<S4>/Sum3'
     */
    rtb_MinMax_n = VeWTAC_M_ToReqRaw_Creep -
        VeWTAC_M_TotalToReduction_ThermProtection;

    /* Sum: '<S4>/Sum1' */
    rtb_Switch2_ol5 = VeWTAC_M_ToReqArbitrated_Creep -
        VeWTAC_M_TotalToReduction_ThermProtection;

    /* Sum: '<S4>/Sum2' */
    VeWTAC_M_ToPot_PostThermPrtct = VeWTAC_M_ToReqPot_Creep -
        VeWTAC_M_TotalToReduction_ThermProtection;

    /* Sum: '<S4>/Sum4' */
    VeWTAC_M_ToxSEM_PostThermPrtct = VeWTAC_M_ToReqxSEM_Creep -
        VeWTAC_M_TotalToReduction_ThermProtection;

    /* Update for UnitDelay: '<S15>/Unit Delay6' */
    WTAR_ac_DW.UnitDelay6_DSTATE_bv = rtb_Switch1_i0j[1];

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outputs for Atomic SubSystem: '<S820>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S849>/EdgeRising' */
    /* Logic: '<S864>/AND' incorporates:
     *  Logic: '<S864>/OR1'
     *  UnitDelay: '<S864>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_f = !WTAR_ac_DW.UnitDelay_DSTATE_dq;

    /* Update for UnitDelay: '<S864>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_dq = true;

    /* End of Outputs for SubSystem: '<S849>/EdgeRising' */

    /* Switch: '<S849>/Switch1' incorporates:
     *  Logic: '<S849>/OR'
     */
    if (rtb_TmpSignalConversionAtVeSR_f)
    {
        /* Switch: '<S849>/Switch1' incorporates:
         *  Constant: '<S849>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S849>/Switch1' incorporates:
         *  Constant: '<S846>/Calib'
         *  Constant: '<S847>/Calib'
         *  MinMax: '<S849>/Minimum'
         *  Sum: '<S849>/Summation'
         *  UnitDelay: '<S849>/Unit Delay'
         */
        VeWTAC_M_ToPrdt_xSEM = fminf(KeWTAR_t_CurbClimbing_GradeUpdateDelay,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_fa);
    }

    /* End of Switch: '<S849>/Switch1' */

    /* Update for UnitDelay: '<S849>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_fa = VeWTAC_M_ToPrdt_xSEM;

    /* Switch: '<S820>/Switch3' incorporates:
     *  Constant: '<S6>/VeVLDR_Pct_GradeCurrent'
     *  Constant: '<S846>/Calib'
     *  DataStoreWrite: '<S820>/Data Store Write'
     *  RelationalOperator: '<S849>/Greater  Than'
     */
    if (VeWTAC_M_ToPrdt_xSEM >= KeWTAR_t_CurbClimbing_GradeUpdateDelay)
    {
        WTAR_ac_DW.NeWTAR_Pct_GradeCurrent = 0.0F;
    }

    /* End of Switch: '<S820>/Switch3' */
    /* End of Outputs for SubSystem: '<S820>/Turn On Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Up_Axle' */
    (void)Rte_Read_VeTTIR_dM_TCM_TrqGradLim_Up_Axle_Value(&rtb_Switch_fq);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Abs: '<S820>/Abs1' incorporates:
     *  DataStoreWrite: '<S820>/Data Store Write'
     */
    rtb_Abs1 = fabsf(WTAR_ac_DW.NeWTAR_Pct_GradeCurrent);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Switch: '<S820>/Switch' incorporates:
     *  Constant: '<S820>/Constant Value11'
     *  Gain: '<S267>/Gain'
     *  RelationalOperator: '<S820>/Comparison4'
     *  Switch: '<S820>/Switch1'
     */
    if (rtb_Switch1_hk[0] > 0.0F)
    {
        /* Switch: '<S820>/Switch' incorporates:
         *  Constant: '<S842>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_c = KeWTAR_dM_CurbClimbing_RtLmtRise_D;

        /* Switch: '<S820>/Switch1' incorporates:
         *  Constant: '<S840>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_j = KeWTAR_dM_CurbClimbing_RtLmtDrop_D;
    }
    else
    {
        /* Switch: '<S820>/Switch' incorporates:
         *  Constant: '<S843>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_c = KeWTAR_dM_CurbClimbing_RtLmtRise_R;

        /* Switch: '<S820>/Switch1' incorporates:
         *  Constant: '<S841>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_j = KeWTAR_dM_CurbClimbing_RtLmtDrop_R;
    }

    /* End of Switch: '<S820>/Switch' */

    /* Product: '<S6>/Multiplication1' incorporates:
     *  Constant: '<S308>/Calib'
     */
    VeWTAC_dM_TCMGradLim_Up_dt = KeWTAR_t_dT * rtb_Switch_fq;

    /* UnitDelay: '<S320>/Unit Delay2' */
    rtb_TmpSignalConversionAtVeSR_f = WTAR_ac_DW.UnitDelay2_DSTATE_om;

    /* UnitDelay: '<S795>/Unit Delay' incorporates:
     *  Constant: '<S304>/Constant Value'
     *  RelationalOperator: '<S304>/Relational Operator'
     */
    rtb_TmpSignalConversionAtVeDT_a = (rtb_TmpSignalConversionAtVeCT_n > 0.0F);

    /* RelationalOperator: '<S304>/Relational Operator2' incorporates:
     *  Constant: '<S394>/Calib'
     */
    VeWTAC_b_PedalNotPressed = (VeWTAI_Pct_AccelPedalEffPosition <
        KeWTAR_Pct_AccPedThshd_CreepRst);

    /* Logic: '<S312>/Logical1' incorporates:
     *  Constant: '<S696>/Constant'
     *  Constant: '<S697>/Constant'
     *  Constant: '<S698>/Constant'
     *  Constant: '<S699>/Constant'
     *  Constant: '<S708>/Calib'
     *  RelationalOperator: '<S312>/Relational Operator'
     *  RelationalOperator: '<S312>/Relational Operator1'
     *  RelationalOperator: '<S312>/Relational Operator2'
     *  RelationalOperator: '<S312>/Relational Operator3'
     */
    VeWTAC_b_PreLoadSel = (((((KeWTAR_b_PreLoadOvrdVal) && (((uint32)
        rtb_TmpSignalConversionAtVeTIMR) == CeTIMR_e_LaunchControl)) &&
        (((uint32)rtb_TmpSignalConversionAtVeTI_j) != CeTIMR_e_RaceMode_Off)) &&
                            (((uint32)rtb_TmpSignalConversionAtVeTI_j) !=
        CeTIMR_e_RaceMode_Unavailable)) && (((uint32)
        rtb_TmpSignalConversionAtVeTI_j) != CeTIMR_e_RaceMode_Complete));

    /* Chart: '<S312>/Pre_Load_Arbitration' incorporates:
     *  Constant: '<S700>/Calib'
     *  Constant: '<S701>/Calib'
     *  Constant: '<S703>/Calib'
     *  Constant: '<S704>/Calib'
     *  Constant: '<S705>/Calib'
     *  Constant: '<S706>/Calib'
     *  Constant: '<S707>/Calib'
     *  Constant: '<S709>/Calib'
     *  Constant: '<S710>/Calib'
     *  Constant: '<S711>/Calib'
     *  Constant: '<S712>/Calib'
     *  Constant: '<S713>/Calib'
     *  Constant: '<S714>/Calib'
     *  Constant: '<S715>/Calib'
     *  Constant: '<S716>/Calib'
     *  Gain: '<S267>/Gain'
     *  Inport: '<Root>/VeADCR_e_AWDSysStat'
     *  Inport: '<Root>/VeAPSR_b_Lv1PvBrkActive'
     *  Inport: '<Root>/VeAPSR_e_Lv1PVMode'
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempAvg'
     *  Inport: '<Root>/VeBRKR_P_BrkPrss'
     *  Inport: '<Root>/VeBRKR_b_BrkPdlFlt'
     *  Inport: '<Root>/VeBRKR_b_BrkPrssFA'
     *  Inport: '<Root>/VePLTR_b_LwsAngleFA'
     *  Inport: '<Root>/VePLTR_phi_LwsAngle'
     *  Inport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode'
     *  SignalConversion generated from: '<S1>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    /* Gateway: WTAR_MedTEB/To_FltAndShap/Preload_Torque_Reserve/Pre_Load_Arbitration */
    /* During: WTAR_MedTEB/To_FltAndShap/Preload_Torque_Reserve/Pre_Load_Arbitration */
    if (((uint32)WTAR_ac_DW.is_active_c3_WTAR_ac) == 0U)
    {
        /* Entry: WTAR_MedTEB/To_FltAndShap/Preload_Torque_Reserve/Pre_Load_Arbitration */
        WTAR_ac_DW.is_active_c3_WTAR_ac = 1U;

        /* Entry Internal: WTAR_MedTEB/To_FltAndShap/Preload_Torque_Reserve/Pre_Load_Arbitration */
        /* Transition: '<S717>:37' */
        VeWTAC_M_ToPreload = 0.0F;
        WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
    }
    else
    {
        (void)Rte_Read_VeBRKR_b_BrkPdlFlt_Value(&rtb_NotEqual2_c);
        (void)Rte_Read_VeBRKR_b_BrkPrssFA_Value(&rtb_AND_p4);
        (void)Rte_Read_VeBPCR_T_HV_BatModTempAvg_Value(&rtb_Switch1_ee);
        (void)Rte_Read_VeAPSR_b_Lv1PvBrkActive_Value(&rtb_OR1_em);
        (void)Rte_Read_VePLTR_b_LwsAngleFA_Value(&rtb_AND_a2v);
        (void)Rte_Read_VeSRAR_b_Inhibit_AWD_TerrainMode_Value(&rtb_AND_ok);
        (void)Rte_Read_VeADCR_e_AWDSysStat_Value(&tmpRead_l);
        (void)Rte_Read_VeBRKR_P_BrkPrss_Value(&rtb_Abs1_gm);
        (void)Rte_Read_VePLTR_phi_LwsAngle_Value(&rtb_UnitDelay_co);
        (void)Rte_Read_VeAPSR_e_Lv1PVMode_Value(&tmpRead_m);
        switch (WTAR_ac_DW.is_c3_WTAR_ac)
        {
          case WTAR_ac_IN_BuildAndArm:
            /* During 'BuildAndArm': '<S717>:40' */
            if ((((((sint32)((rtb_Abs1_gm <
                              KeWTAR_p_PreLoadTrigger_BrkBoostThrsld) ? 1 : 0))
                    & ((sint32)((((uint32)rtb_TmpSignalConversionAtVeBR_d) ==
                                 CeBRKR_e_BrkNotApplied) ? 1 : 0))) & ((sint32)
                    ((WTAR_ac_DW.BuildTime > KeWTAR_t_PreLoadArmedTimeMin) ? 1 :
                     0))) & ((sint32)((WTAR_ac_DW.BuildTime <
                                       KeWTAR_t_PreLoadArmedTimeMax) ? 1 : 0)))
                    != 0)
            {
                /* Transition: '<S717>:47' */
                WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Triggered;
            }
            else
            {
                /* Transition: '<S717>:50' */
                if (((((((VeWTAI_T_MtrA_Temp >= KeWTAR_T_PreLoadMtrTempLim) ||
                         (VeWTAI_T_MtrB_Temp >= KeWTAR_T_PreLoadMtrTempLim)) ||
                        (rtb_Switch1_ee <= KeWTAR_T_PreLoad_HVBattTempMinLim)) ||
                       (rtb_Switch1_ee >= KeWTAR_T_PreLoad_HVBattTempMaxLim)) ||
                      (((uint32)rtb_TmpSignalConversionAtVeTIMR) !=
                        CeTIMR_e_LaunchControl)) || (rtb_UnitDelay_co >=
                        KeWTAR_phi_PreLoad_SWangleMaxLim)) ||
                        (WTAR_ac_DW.BuildTime >= KeWTAR_t_PreLoadArmedTimeMax))
                {
                    /* Transition: '<S717>:51' */
                    WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_DeadPedal;
                }
                else
                {
                    /* Transition: '<S717>:97' */
                    /* Transition: '<S717>:93' */
                    /* Transition: '<S717>:94' */
                    /* Transition: '<S717>:95' */
                    if ((!VeWTAC_b_PreLoadSel) || (((uint32)
                            rtb_TmpSignalConversionAtVeTI_j) ==
                            CeTIMR_e_RaceMode_Cancelled))
                    {
                        /* Transition: '<S717>:96' */
                        VeWTAC_M_ToPreload = 0.0F;
                        WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
                    }
                    else
                    {
                        WTAR_ac_DW.BuildTime += KeWTAR_t_dT;
                        VeWTAC_M_ToPreload = fminf(rtb_Switch2_ol5,
                            KeWTAR_M_PreLoadTrqMax);
                    }
                }
            }
            break;

          case WTAR_ac_IN_Complete:
            /* During 'Complete': '<S717>:43' */
            if (((uint32)rtb_TmpSignalConversionAtVeTI_j) !=
                    CeTIMR_e_RaceMode_Active)
            {
                /* Transition: '<S717>:70' */
                VeWTAC_M_ToPreload = 0.0F;

                /* Transition: '<S717>:72' */
                /* Transition: '<S717>:74' */
                /* Transition: '<S717>:75' */
                WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
            }
            else
            {
                /* Transition: '<S717>:79' */
                /* Transition: '<S717>:80' */
                /* Transition: '<S717>:81' */
                if (((((((VeWTAI_T_MtrA_Temp >= KeWTAR_T_PreLoadMtrTempLim) ||
                         (VeWTAI_T_MtrB_Temp >= KeWTAR_T_PreLoadMtrTempLim)) ||
                        (rtb_Switch1_ee <= KeWTAR_T_PreLoad_HVBattTempMinLim)) ||
                       (rtb_Switch1_ee >= KeWTAR_T_PreLoad_HVBattTempMaxLim)) ||
                      (((uint32)rtb_TmpSignalConversionAtVeTIMR) !=
                        CeTIMR_e_LaunchControl)) || (rtb_UnitDelay_co >=
                        KeWTAR_phi_PreLoad_SWangleMaxLim)) ||
                        (WTAR_ac_DW.BuildTime >= KeWTAR_t_PreLoadArmedTimeMax))
                {
                    /* Transition: '<S717>:51' */
                    WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_DeadPedal;
                }
                else
                {
                    /* Transition: '<S717>:89' */
                    /* Transition: '<S717>:90' */
                    /* Transition: '<S717>:92' */
                    /* Transition: '<S717>:93' */
                    /* Transition: '<S717>:94' */
                    /* Transition: '<S717>:95' */
                    if ((!VeWTAC_b_PreLoadSel) || (((uint32)
                            rtb_TmpSignalConversionAtVeTI_j) ==
                            CeTIMR_e_RaceMode_Cancelled))
                    {
                        /* Transition: '<S717>:96' */
                        VeWTAC_M_ToPreload = 0.0F;
                        WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
                    }
                    else
                    {
                        VeWTAC_M_ToPreload = fminf(rtb_Switch2_ol5,
                            KeWTAR_M_PreLoadTrqMax);
                    }
                }
            }
            break;

          case WTAR_ac_IN_DeadPedal:
            /* During 'DeadPedal': '<S717>:42' */
            /* Transition: '<S717>:62' */
            if (((float64)VeWTAI_Pct_AccelPedalEffPosition) < 0.1)
            {
                /* Transition: '<S717>:63' */
                WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
            }
            else
            {
                VeWTAC_M_ToPreload = 0.0F;
            }
            break;

          case WTAR_ac_IN_Enabled:
            /* During 'Enabled': '<S717>:39' */
            if (((((((sint32)((VeWTAI_Pct_AccelPedalEffPosition >
                               KeWTAR_Pct_PreLoadBuild_PedalPosnThrsld) ? 1 : 0))
                    & ((sint32)((rtb_Abs1_gm >
                                 KeWTAR_p_PreLoadBuild_BrkBoostThrsld) ? 1 : 0)))
                   & ((sint32)((((uint32)rtb_TmpSignalConversionAtVeBR_d) ==
                                CeBRKR_e_BrkApplied) ? 1 : 0))) & ((sint32)
                    ((((uint32)rtb_TmpSignalConversionAtVeTI_j) ==
                      CeTIMR_e_RaceMode_Active) ? 1 : 0))) & ((sint32)((((uint32)
                     rtb_TmpSignalConversionAtVeTIMR) == CeTIMR_e_LaunchControl)
                   ? 1 : 0))) != 0)
            {
                /* Transition: '<S717>:46' */
                WTAR_ac_DW.BuildTime = 0.0F;
                WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_BuildAndArm;
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
                if ((((((((((((VeWTAI_Pct_AccelPedalEffPosition <=
                               KeWTAR_Pct_PreLoadPedalPosnLim) || (rtb_Abs1_gm <=
                               KeWTAR_p_PreLoadEna_BrkBoostThrsld)) ||
                             rtb_NotEqual2_c) || rtb_TmpSignalConversionAtVeBRKR)
                           || rtb_AND_p4) || rtb_OR1_em) || (rtb_Switch1_hk[0]
                          != 1.0F)) || (rtb_UnitDelay_co >=
                                        KeWTAR_phi_PreLoad_SWangleMaxLim)) ||
                        rtb_AND_a2v) || (((uint32)tmpRead_l) !=
                                         CeADCR_e_AllWheelDrive)) || rtb_AND_ok)
                    || (((uint32)tmpRead_m) != CeAPSR_e_LV1PVMode_PVOk))
                {
                    /* Transition: '<S717>:66' */
                    WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_DeadPedal;
                }
                else
                {
                    /* Transition: '<S717>:98' */
                    /* Transition: '<S717>:94' */
                    /* Transition: '<S717>:95' */
                    if ((!VeWTAC_b_PreLoadSel) || (((uint32)
                            rtb_TmpSignalConversionAtVeTI_j) ==
                            CeTIMR_e_RaceMode_Cancelled))
                    {
                        /* Transition: '<S717>:96' */
                        VeWTAC_M_ToPreload = 0.0F;
                        WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
                    }
                }

                /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
            }
            break;

          case WTAR_ac_IN_Initializing:
            /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
            /* During 'Initializing': '<S717>:38' */
            if ((((((((((((((sint32)((VeWTAI_Pct_AccelPedalEffPosition >
                                      KeWTAR_Pct_PreLoadPedalPosnLim) ? 1 : 0))
                           & ((sint32)((rtb_Abs1_gm >
                                        KeWTAR_p_PreLoadEna_BrkBoostThrsld) ? 1 :
                             0))) & ((sint32)((!rtb_NotEqual2_c) ? 1 : 0))) &
                         ((sint32)((!rtb_TmpSignalConversionAtVeBRKR) ? 1 : 0)))
                        & ((sint32)((!rtb_AND_p4) ? 1 : 0))) & ((sint32)
                        ((!rtb_OR1_em) ? 1 : 0))) & ((sint32)((rtb_Switch1_hk[0]
                         > 0.5F) ? 1 : 0))) & ((sint32)((rtb_UnitDelay_co <
                        KeWTAR_phi_PreLoad_SWangleMaxLim) ? 1 : 0))) & ((sint32)
                     ((!rtb_AND_a2v) ? 1 : 0))) & ((sint32)((((uint32)tmpRead_l)
                      == CeADCR_e_AllWheelDrive) ? 1 : 0))) & ((sint32)
                    ((!rtb_AND_ok) ? 1 : 0))) & ((sint32)((((uint32)tmpRead_m) ==
                    CeAPSR_e_LV1PVMode_PVOk) ? 1 : 0))) != 0)
            {
                /* Transition: '<S717>:45' */
                WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Enabled;
            }
            else
            {
                /* Transition: '<S717>:99' */
                /* Transition: '<S717>:95' */
                if ((!VeWTAC_b_PreLoadSel) || (((uint32)
                        rtb_TmpSignalConversionAtVeTI_j) ==
                        CeTIMR_e_RaceMode_Cancelled))
                {
                    /* Transition: '<S717>:96' */
                    VeWTAC_M_ToPreload = 0.0F;
                    WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
                }
            }

            /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
            break;

          case WTAR_ac_IN_Off:
            /* During 'Off': '<S717>:56' */
            if ((((sint32)((((uint32)rtb_TmpSignalConversionAtVeTI_j) ==
                            CeTIMR_e_RaceMode_Active) ? 1 : 0)) &
                    (VeWTAC_b_PreLoadSel ? 1 : 0)) != 0)
            {
                /* Transition: '<S717>:44' */
                WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Initializing;
            }
            break;

          default:
            /* During 'Triggered': '<S717>:41' */
            if ((((sint32)((rtb_Abs1_gm <
                            KeWTAR_p_PreLoadComplete_BrkBoostLwrLim) ? 1 : 0)) &
                 ((sint32)((VeWTAC_M_ToPreload >=
                            KeWTAR_M_PreLoad_FinalDrvTrqReq) ? 1 : 0))) != 0)
            {
                /* Transition: '<S717>:48' */
                WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Complete;
            }
            else
            {
                /* Transition: '<S717>:82' */
                /* Transition: '<S717>:81' */
                if (((((((VeWTAI_T_MtrA_Temp >= KeWTAR_T_PreLoadMtrTempLim) ||
                         (VeWTAI_T_MtrB_Temp >= KeWTAR_T_PreLoadMtrTempLim)) ||
                        (rtb_Switch1_ee <= KeWTAR_T_PreLoad_HVBattTempMinLim)) ||
                       (rtb_Switch1_ee >= KeWTAR_T_PreLoad_HVBattTempMaxLim)) ||
                      (((uint32)rtb_TmpSignalConversionAtVeTIMR) !=
                        CeTIMR_e_LaunchControl)) || (rtb_UnitDelay_co >=
                        KeWTAR_phi_PreLoad_SWangleMaxLim)) ||
                        (WTAR_ac_DW.BuildTime >= KeWTAR_t_PreLoadArmedTimeMax))
                {
                    /* Transition: '<S717>:51' */
                    WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_DeadPedal;
                }
                else
                {
                    /* Transition: '<S717>:91' */
                    /* Transition: '<S717>:92' */
                    /* Transition: '<S717>:93' */
                    /* Transition: '<S717>:94' */
                    /* Transition: '<S717>:95' */
                    if ((!VeWTAC_b_PreLoadSel) || (((uint32)
                            rtb_TmpSignalConversionAtVeTI_j) ==
                            CeTIMR_e_RaceMode_Cancelled))
                    {
                        /* Transition: '<S717>:96' */
                        VeWTAC_M_ToPreload = 0.0F;
                        WTAR_ac_DW.is_c3_WTAR_ac = WTAR_ac_IN_Off;
                    }
                    else
                    {
                        VeWTAC_M_ToPreload = fminf(rtb_Switch2_ol5,
                            KeWTAR_M_PreLoadTrqMax);
                    }
                }
            }
            break;
        }
    }

    /* End of Chart: '<S312>/Pre_Load_Arbitration' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBRKR_e_AHH_Ready_Status' */
    (void)Rte_Read_VeBRKR_e_AHH_Ready_Status_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Switch: '<S312>/Switch3' */
    if (VeWTAC_b_PreLoadSel)
    {
        /* Switch: '<S312>/Switch3' */
        rtb_UnitDelay_co = VeWTAC_M_ToPreload;
        rtb_Switch_fq = VeWTAC_M_ToPreload;
        rtb_TmpSignalConversionAtVeS_dq = VeWTAC_M_ToPreload;
    }
    else
    {
        /* Switch: '<S312>/Switch3' */
        rtb_UnitDelay_co = rtb_Switch2_ol5;
        rtb_Switch_fq = VeWTAC_M_ToxSEM_PostThermPrtct;
        rtb_TmpSignalConversionAtVeS_dq = VeWTAC_M_ToPot_PostThermPrtct;
    }

    /* End of Switch: '<S312>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Product: '<S321>/Multiplication2' incorporates:
     *  Gain: '<S267>/Gain'
     *  MinMax: '<S321>/MinMax1'
     */
    VeWTAC_M_TwoFootGasPdlTrq = fmaxf(rtb_UnitDelay_co, rtb_Switch_fq) *
        rtb_Switch1_hk[0];

    /* Sum: '<S321>/Subtraction4' incorporates:
     *  MinMax: '<S206>/MinMax2'
     */
    VeWTAC_M_TwoFootGasPdlTrqNet = VeWTAC_M_TwoFootGasPdlTrq - fmaxf
        (rtb_TmpSignalConversionAtVeCT_m, VeWTAI_M_AxleTrqReqMin);

    /* Switch: '<S321>/Switch4' incorporates:
     *  Constant: '<S805>/Constant'
     *  Constant: '<S806>/Constant'
     *  Constant: '<S811>/Constant'
     *  Logic: '<S321>/Logical4'
     *  Logic: '<S321>/Logical5'
     *  Logic: '<S321>/Logical7'
     *  RelationalOperator: '<S321>/Comparison3'
     *  RelationalOperator: '<S321>/Comparison4'
     *  RelationalOperator: '<S321>/Not Equal2'
     */
    if (((((uint32)rtb_TmpSignalConversionAtVeHTDR) == CeHTDR_e_AHH_Apply) ||
            (((uint32)rtb_TmpSignalConversionAtVeHTDR) == CeHTDR_e_AHH_EPB_Apply))
        || ((((uint32)rtb_TmpSignalConversionAtVeBR_d) == CeBRKR_e_BrkApplied) &&
            (!rtb_TmpSignalConversionAtVeBRKR)))
    {
        /* Switch: '<S321>/Switch4' */
        VeWTAC_M_TwoFootTrqBrakePedal = rtb_TmpSignalConversionAtVeBTQR;
    }
    else
    {
        /* Switch: '<S321>/Switch4' incorporates:
         *  Constant: '<S321>/Constant Value11'
         */
        VeWTAC_M_TwoFootTrqBrakePedal = 0.0F;
    }

    /* End of Switch: '<S321>/Switch4' */

    /* Switch: '<S321>/Switch1' incorporates:
     *  Constant: '<S807>/Constant'
     *  Constant: '<S808>/Constant'
     *  Constant: '<S809>/Constant'
     *  Inport: '<Root>/VeBRKR_e_AHH_Ready_Status'
     *  Logic: '<S321>/Logical1'
     *  Logic: '<S321>/Logical6'
     *  RelationalOperator: '<S321>/Comparison1'
     *  RelationalOperator: '<S321>/Comparison2'
     *  RelationalOperator: '<S321>/Comparison6'
     */
    if (((((uint32)rtb_TmpSignalConversionAtVeHTDR) == CeHTDR_e_AHH_Apply) ||
            (((uint32)rtb_TmpSignalConversionAtVeHTDR) == CeHTDR_e_AHH_EPB_Apply))
        && (((uint32)tmpRead_4) == CeBRKR_e_AHH_Active))
    {
        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S321>/Constant Value5'
         */
        VeWTAC_M_TwoFootTrqBrakeAHH = 10000.0F;
    }
    else
    {
        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S321>/Constant Value4'
         */
        VeWTAC_M_TwoFootTrqBrakeAHH = 0.0F;
    }

    /* End of Switch: '<S321>/Switch1' */

    /* Outputs for IfAction SubSystem: '<S1312>/NotInLash' incorporates:
     *  ActionPort: '<S1412>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S1154>/NotInLash' incorporates:
     *  ActionPort: '<S1254>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S995>/NotInLash' incorporates:
     *  ActionPort: '<S1096>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S824>/NotInLash' incorporates:
     *  ActionPort: '<S932>/Action Port'
     */
    /* If: '<S824>/If' incorporates:
     *  Abs: '<S1096>/Abs1'
     *  Abs: '<S1254>/Abs1'
     *  Abs: '<S1412>/Abs1'
     *  Abs: '<S321>/Abs'
     *  Abs: '<S322>/Abs'
     *  Abs: '<S932>/Abs1'
     *  If: '<S1154>/If'
     *  If: '<S1312>/If'
     *  If: '<S995>/If'
     */
    rtb_Maximum_i = fabsf(rtb_TmpSignalConversionAtVeCSVR);

    /* End of Outputs for SubSystem: '<S824>/NotInLash' */
    /* End of Outputs for SubSystem: '<S995>/NotInLash' */
    /* End of Outputs for SubSystem: '<S1154>/NotInLash' */
    /* End of Outputs for SubSystem: '<S1312>/NotInLash' */

    /* Product: '<S321>/Multiplication3' incorporates:
     *  Abs: '<S321>/Abs'
     *  Constant: '<S321>/Constant Value7'
     *  Constant: '<S815>/Calib'
     *  Lookup_n-D: '<S818>/Vector'
     *  MinMax: '<S321>/MinMax'
     *  Sum: '<S321>/Subtraction1'
     */
    VeWTAC_M_TwoFootBrakePdlTrqNet = fmaxf(fmaxf(0.0F,
        VeWTAC_M_TwoFootTrqBrakePedal - KeWTAR_M_MinBrkTrq_ToNet),
        VeWTAC_M_TwoFootTrqBrakeAHH) * look1_iflf_binlcapw(rtb_Maximum_i, ((
        const float32 *)&(KxWTAR_r_SpdBsdFctr_ToNet[0])), ((const float32 *)
        &(KtWTAR_r_SpdBsdFctr_ToNet[0])), 7U);

    /* Switch: '<S321>/Switch2' incorporates:
     *  Constant: '<S816>/Calib'
     *  RelationalOperator: '<S321>/Greater  Than1'
     */
    if (VeWTAC_M_TwoFootGasPdlTrq < KeWTAR_M_ToMin_BrkTrqRdct)
    {
        /* Switch: '<S321>/Switch2' incorporates:
         *  Constant: '<S321>/Constant Value1'
         */
        VeWTAC_M_BrkTrqRdctn_Raw = 0.0F;
    }
    else
    {
        /* Switch: '<S321>/Switch2' incorporates:
         *  MinMax: '<S321>/MinMax2'
         */
        VeWTAC_M_BrkTrqRdctn_Raw = fminf(VeWTAC_M_TwoFootGasPdlTrqNet,
            VeWTAC_M_TwoFootBrakePdlTrqNet);
    }

    /* End of Switch: '<S321>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBRKR_e_OPDHoldStatus' */
    (void)Rte_Read_VeBRKR_e_OPDHoldStatus_Value(&tmpRead_9);

    /* Inport: '<Root>/VeBRKR_b_OPDHoldStatusFA' */
    (void)Rte_Read_VeBRKR_b_OPDHoldStatusFA_Value(&rtb_OR1_a5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outputs for Atomic SubSystem: '<S321>/GradientLimiter1' */
    /* Sum: '<S812>/Sum2' incorporates:
     *  UnitDelay: '<S812>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCT_n = VeWTAC_M_BrkTrqRdctn_Raw -
        WTAR_ac_DW.UnitDelay_DSTATE_h5;

    /* Outputs for Atomic SubSystem: '<S812>/Limiter' */
    /* Switch: '<S819>/Switch1' incorporates:
     *  Constant: '<S814>/Calib'
     *  RelationalOperator: '<S819>/Relational Operator'
     */
    if (KeWTAR_M_BrkTrqRed_ToNet_LU < rtb_TmpSignalConversionAtVeCT_n)
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = KeWTAR_M_BrkTrqRed_ToNet_LU;
    }
    else
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeCT_n;
    }

    /* End of Switch: '<S819>/Switch1' */

    /* Switch: '<S819>/Switch' incorporates:
     *  Constant: '<S813>/Calib'
     *  RelationalOperator: '<S819>/Relational Operator1'
     */
    if (VeWTAC_M_ToPrdt_xSEM <= KeWTAR_M_BrkTrqRed_ToNet_LD)
    {
        VeWTAC_M_ToPrdt_xSEM = KeWTAR_M_BrkTrqRed_ToNet_LD;
    }

    /* End of Switch: '<S819>/Switch' */
    /* End of Outputs for SubSystem: '<S812>/Limiter' */

    /* Sum: '<S812>/Sum3' incorporates:
     *  UnitDelay: '<S812>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCT_n = VeWTAC_M_ToPrdt_xSEM +
        WTAR_ac_DW.UnitDelay_DSTATE_h5;

    /* Update for UnitDelay: '<S812>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_h5 = rtb_TmpSignalConversionAtVeCT_n;

    /* End of Outputs for SubSystem: '<S321>/GradientLimiter1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Product: '<S321>/Multiplication1' incorporates:
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_M_BrkTrqRdctn_Fltd = rtb_TmpSignalConversionAtVeCT_n *
        rtb_Switch1_hk[0];

    /* Switch: '<S321>/Switch3' incorporates:
     *  Constant: '<S810>/Constant'
     *  Inport: '<Root>/VeBRKR_e_OPDHoldStatus'
     *  Logic: '<S321>/Logical2'
     *  Logic: '<S321>/Logical3'
     *  RelationalOperator: '<S321>/Greater  Than2'
     */
    if ((!rtb_OR1_a5) && (((uint32)tmpRead_9) == CeBRKR_e_Holding))
    {
        /* Switch: '<S321>/Switch3' incorporates:
         *  Constant: '<S817>/Calib'
         *  Product: '<S321>/Multiplication4'
         *  Sum: '<S321>/Subtraction3'
         */
        VeWTAC_M_ToArb_Net = (rtb_UnitDelay_co - VeWTAC_M_BrkTrqRdctn_Fltd) *
            KeWTAR_k_OPDhillHold;
    }
    else
    {
        /* Switch: '<S321>/Switch3' incorporates:
         *  Sum: '<S321>/Subtraction3'
         */
        VeWTAC_M_ToArb_Net = rtb_UnitDelay_co - VeWTAC_M_BrkTrqRdctn_Fltd;
    }

    /* End of Switch: '<S321>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCTCR_b_MinCreepWheelTrq_Enable' */
    (void)Rte_Read_VeCTCR_b_MinCreepWheelTrq_Enable_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Sum: '<S321>/Subtraction2' */
    VeWTAC_M_ToNet_Arb_xSEM = rtb_Switch_fq - VeWTAC_M_BrkTrqRdctn_Fltd;

    /* RelationalOperator: '<S304>/Relational Operator3' incorporates:
     *  Abs: '<S304>/Abs'
     *  Constant: '<S391>/Calib'
     *  Constant: '<S392>/Calib'
     *  Sum: '<S304>/Sum'
     *  UnitDelay: '<S6>/Unit Delay'
     *  UnitDelay: '<S6>/Unit Delay1'
     *  UnitDelay: '<S6>/Unit Delay3'
     *  UnitDelay: '<S6>/Unit Delay4'
     */
    VaWTAC_b_FilteringDone[0] = (fabsf(WTAR_ac_DW.UnitDelay_DSTATE -
        VeWTAC_M_ToArb_Net) < KeWTAR_M_TrqThshd_CreepRst);
    VaWTAC_b_FilteringDone[1] = (fabsf(WTAR_ac_DW.UnitDelay1_DSTATE -
        rtb_MinMax_n) < KeWTAR_M_TrqThshd_CreepRst);
    VaWTAC_b_FilteringDone[2] = (fabsf(WTAR_ac_DW.UnitDelay3_DSTATE -
        VeWTAC_M_ToNet_Arb_xSEM) < KeWTAR_M_TrqThshd_CreepRst);
    VaWTAC_b_FilteringDone[3] = (fabsf(WTAR_ac_DW.UnitDelay4_DSTATE -
        rtb_MinMax_n) < KeWTAR_M_TrqThshd_CreepRstWheel);
    for (i = 0; i < 4; i++)
    {
        /* UnitDelay: '<S395>/Unit Delay' incorporates:
         *  Logic: '<S304>/Logical1'
         */
        rtb_UnitDelay_hm[i] = (((VeWTAC_b_PedalNotPressed) && tmpRead_g) &&
                               (VaWTAC_b_FilteringDone[(i)]));
    }

    /* Outputs for Atomic SubSystem: '<S304>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S395>/NOT' incorporates:
     *  Constant: '<S393>/Calib'
     *  RelationalOperator: '<S304>/Relational Operator4'
     */
    rtb_TmpSignalConversionAtVeBRKR = (VeWTAI_Pct_AccelPedalEffPosition <=
        KeWTAR_Pct_AccPedThshd_CreepDsb);

    /* Logic: '<S395>/OR1' incorporates:
     *  Constant: '<S304>/Constant Value1'
     *  Logic: '<S304>/Logical2'
     *  Logic: '<S395>/OR'
     *  RelationalOperator: '<S304>/Relational Operator1'
     *  UnitDelay: '<S395>/Unit Delay'
     */
    VaWTAC_b_CreepActDsbFil[0] = ((rtb_TmpSignalConversionAtVeDT_a &&
        (rtb_UnitDelay_hm[0])) || (rtb_TmpSignalConversionAtVeBRKR &&
        (WTAR_ac_DW.UnitDelay_DSTATE_ix[0])));
    VaWTAC_b_CreepActDsbFil[1] = ((rtb_TmpSignalConversionAtVeDT_a &&
        (rtb_UnitDelay_hm[1])) || (rtb_TmpSignalConversionAtVeBRKR &&
        (WTAR_ac_DW.UnitDelay_DSTATE_ix[1])));
    VaWTAC_b_CreepActDsbFil[2] = ((rtb_TmpSignalConversionAtVeDT_a &&
        (rtb_UnitDelay_hm[2])) || (rtb_TmpSignalConversionAtVeBRKR &&
        (WTAR_ac_DW.UnitDelay_DSTATE_ix[2])));
    VaWTAC_b_CreepActDsbFil[3] = (((rtb_MinMax_n > 0.0F) && (rtb_UnitDelay_hm[3]))
        || (rtb_TmpSignalConversionAtVeBRKR && (WTAR_ac_DW.UnitDelay_DSTATE_ix[3])));

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    for (i = 0; i < 4; i++)
    {
        WTAR_ac_DW.UnitDelay_DSTATE_ix[i] = VaWTAC_b_CreepActDsbFil[(i)];
    }

    /* End of Update for UnitDelay: '<S395>/Unit Delay' */
    /* End of Outputs for SubSystem: '<S304>/Signal_Latch_On_With_Reset' */

    /* Logic: '<S821>/AND5' incorporates:
     *  Constant: '<S870>/Calib'
     *  Logic: '<S323>/AND5'
     *  Logic: '<S324>/AND5'
     *  Logic: '<S325>/AND5'
     */
    rtb_TmpSignalConversionAtVeCCTR = ((KeWTAR_b_CC_FilterRst_Dsbl) &&
        rtb_TmpSignalConversionAtVeCCTR);

    /* Logic: '<S821>/AND1' incorporates:
     *  Constant: '<S866>/Constant'
     *  Constant: '<S867>/Constant'
     *  Constant: '<S868>/Constant'
     *  Constant: '<S869>/Constant'
     *  Constant: '<S871>/Calib'
     *  Constant: '<S872>/Calib'
     *  Logic: '<S821>/AND2'
     *  Logic: '<S821>/AND3'
     *  Logic: '<S821>/AND4'
     *  Logic: '<S821>/AND5'
     *  RelationalOperator: '<S821>/Comparison1'
     *  RelationalOperator: '<S821>/Comparison2'
     *  RelationalOperator: '<S821>/Comparison3'
     *  RelationalOperator: '<S821>/Comparison4'
     *  UnitDelay: '<S821>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtVeBRKR = ((((((((uint32)
        rtb_TmpSignalConversionAtVeDT_o) == CeDTRR_e_Trans) && (((uint32)
        rtb_TmpSignalConversionAtVeD_k5) == CeDTRR_e_Potential)) &&
        (KeWTAR_b_FilterTransInc_En)) || (((((uint32)
        rtb_TmpSignalConversionAtVeD_k5) == CeDTRR_e_Level2) || (((uint32)
        rtb_TmpSignalConversionAtVeDT_o) == CeDTRR_e_Level2)) &&
        (KeWTAR_b_FilLv2_En))) || ((rtb_TmpSignalConversionAtVeCCTR &&
        (WTAR_ac_DW.UnitDelay3_DSTATE_dw)) && rtb_TmpSignalConversionAtVeSR_f)) ||
        (VaWTAC_b_CreepActDsbFil[0]));

    /* RelationalOperator: '<S824>/Not Equal2' incorporates:
     *  Constant: '<S913>/Constant'
     */
    rtb_NotEqual2_c = (((uint32)rtb_TmpSignalConversionAtVeBR_d) !=
                       CeBRKR_e_BrkApplied);

    /* Outputs for Atomic SubSystem: '<S824>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S933>/EdgeRising' */
    /* Logic: '<S945>/AND' incorporates:
     *  Logic: '<S945>/OR1'
     *  UnitDelay: '<S945>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_NotEqual2_c && (!WTAR_ac_DW.UnitDelay_DSTATE_ew));

    /* Update for UnitDelay: '<S945>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ew = rtb_NotEqual2_c;

    /* End of Outputs for SubSystem: '<S933>/EdgeRising' */

    /* Switch: '<S933>/Switch1' incorporates:
     *  Logic: '<S933>/OR'
     *  Logic: '<S933>/OR1'
     */
    if ((!rtb_NotEqual2_c) || rtb_AND_p4)
    {
        /* Switch: '<S933>/Switch1' incorporates:
         *  Constant: '<S933>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeCT_n = 0.0F;
    }
    else
    {
        /* Switch: '<S933>/Switch1' incorporates:
         *  Constant: '<S930>/Calib'
         *  Constant: '<S931>/Calib'
         *  MinMax: '<S933>/Minimum'
         *  Sum: '<S933>/Summation'
         *  UnitDelay: '<S933>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCT_n = fminf(KeWTAR_t_BrkAplyd_ZrPdLsh_Delay,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_fv);
    }

    /* End of Switch: '<S933>/Switch1' */

    /* Update for UnitDelay: '<S933>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_fv = rtb_TmpSignalConversionAtVeCT_n;

    /* Logic: '<S824>/AND2' incorporates:
     *  Constant: '<S924>/Calib'
     *  Constant: '<S925>/Calib'
     *  Constant: '<S928>/Calib'
     *  Constant: '<S929>/Calib'
     *  Constant: '<S930>/Calib'
     *  Logic: '<S824>/AND3'
     *  Logic: '<S933>/AND'
     *  RelationalOperator: '<S824>/Greater  Than4'
     *  RelationalOperator: '<S824>/Greater  Than5'
     *  RelationalOperator: '<S933>/Greater  Than'
     */
    VeWTAC_b_ZeroPedalLashCtrl_PstFil =
        (((((KeWTAR_b_BrkPdl4ZeroPedalLash_enable) || (rtb_NotEqual2_c &&
             (rtb_TmpSignalConversionAtVeCT_n >= KeWTAR_t_BrkAplyd_ZrPdLsh_Delay)))
           && (KeWTAR_b_ZeroPedalLash_Enbl)) &&
          (VeWTAI_Pct_AccelPedalEffPosition < KeWTAR_Pct_MaxPdl_ZeroPedal)) &&
         (rtb_TmpSignalConversionAtVeCSVR < KeWTAR_n_MaxNo_ZeroPdlLsh));

    /* End of Outputs for SubSystem: '<S824>/Turn On Delay Time1' */

    /* UnitDelay: '<S322>/Unit Delay2' */
    VeWTAC_M_ToReqHTDR = WTAR_ac_DW.UnitDelay2_DSTATE_n;

    /* Switch: '<S824>/Switch2' incorporates:
     *  Constant: '<S915>/Calib'
     */
    if (HeWTAR_b_ToCLFast_InLash)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S824>/Add'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeAX_b +
            VeWTAC_M_ToReqHTDR;
    }
    else
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_ToReqHTDR;
    }

    /* End of Switch: '<S824>/Switch2' */

    /* Switch: '<S917>/Switch1' incorporates:
     *  Constant: '<S912>/Constant'
     *  Constant: '<S922>/Calib'
     *  Constant: '<S927>/Calib'
     *  RelationalOperator: '<S824>/Greater  Than3'
     *  RelationalOperator: '<S824>/Not Equal'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (CeHADR_e_LashStPos != ((uint32)
                             rtb_TmpSignalConversionAtVeHADR));
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq < KeWTAR_M_NegLashTrqThresh);
    }

    /* End of Switch: '<S917>/Switch1' */

    /* Logic: '<S824>/AND1' incorporates:
     *  Constant: '<S920>/Calib'
     *  RelationalOperator: '<S824>/Greater  Than2'
     */
    VeWTAC_b_NegLashCntrl_PstFil = (rtb_Comparison12 && (VeWTAC_M_ToPrdt_xSEM >
        KeWTAR_M_FrmNegRtLimTrqThresh));

    /* Switch: '<S916>/Switch1' incorporates:
     *  Constant: '<S911>/Constant'
     *  Constant: '<S923>/Calib'
     *  Constant: '<S927>/Calib'
     *  RelationalOperator: '<S824>/Greater  Than1'
     *  RelationalOperator: '<S824>/Not Equal1'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeHADR) !=
                            CeHADR_e_LashStNeg);
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq > KeWTAR_M_PosLashTrqThresh);
    }

    /* End of Switch: '<S916>/Switch1' */

    /* Logic: '<S824>/AND' incorporates:
     *  Constant: '<S921>/Calib'
     *  RelationalOperator: '<S824>/Greater  Than'
     */
    VeWTAC_b_PosLashCntrl_PstFil = (rtb_Comparison12 && (VeWTAC_M_ToPrdt_xSEM <
        KeWTAR_M_FrmPosRtLimTrqThresh));

    /* UnitDelay: '<S824>/Unit Delay' */
    rtb_TmpSignalConversionAtVeCT_n = WTAR_ac_DW.UnitDelay_DSTATE_n;

    /* Lookup_n-D: '<S982>/Vector' incorporates:
     *  Lookup_n-D: '<S1143>/Vector'
     *  Lookup_n-D: '<S1301>/Vector'
     *  Lookup_n-D: '<S1459>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    rtb_UnitDelay_co = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeBPCR, ((
        const float32 *)&(KxWTAR_M_To_TBattBased_RateLmtDown[0])), ((const
        float32 *)&(KtWTAR_M_To_TBattBased_RateLmtDown[0])), 5U);

    /* Lookup_n-D: '<S983>/Vector' incorporates:
     *  Lookup_n-D: '<S1144>/Vector'
     *  Lookup_n-D: '<S1302>/Vector'
     *  Lookup_n-D: '<S1460>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    rtb_TmpSignalConversionAtVeSC_f = look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeBPCR, ((const float32 *)
          &(KxWTAR_M_To_TBattBased_RateLmtUp[0])), ((const float32 *)
          &(KtWTAR_M_To_TBattBased_RateLmtUp[0])), 5U);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* RelationalOperator: '<S951>/Comparison11' incorporates:
     *  Constant: '<S951>/Constant Value1'
     *  Gain: '<S267>/Gain'
     */
    rtb_NotEqual2_c = (rtb_Switch1_hk[0] >= 0.0F);

    /* Switch: '<S951>/Switch3' incorporates:
     *  Constant: '<S951>/Constant Value3'
     *  RelationalOperator: '<S951>/Comparison1'
     *  Switch: '<S951>/Switch1'
     */
    if (VeWTAC_M_ToArb_Net < 0.0F)
    {
        /* Switch: '<S951>/Switch3' incorporates:
         *  Lookup_n-D: '<S982>/Vector'
         *  Product: '<S951>/Product1'
         */
        VeWTAC_M_ToRtLmt_LU = -rtb_UnitDelay_co;
    }
    else if (rtb_NotEqual2_c)
    {
        /* Switch: '<S951>/Switch1' incorporates:
         *  Lookup_n-D: '<S983>/Vector'
         *  Switch: '<S951>/Switch3'
         */
        VeWTAC_M_ToRtLmt_LU = rtb_TmpSignalConversionAtVeSC_f;
    }
    else
    {
        /* Switch: '<S951>/Switch3' incorporates:
         *  Lookup_n-D: '<S982>/Vector'
         *  Product: '<S951>/Product1'
         */
        VeWTAC_M_ToRtLmt_LU = -rtb_UnitDelay_co;
    }

    /* End of Switch: '<S951>/Switch3' */

    /* Switch: '<S951>/Switch2' */
    if (rtb_NotEqual2_c)
    {
        /* Switch: '<S951>/Switch2' incorporates:
         *  Lookup_n-D: '<S982>/Vector'
         */
        VeWTAC_M_ToRtLmt_LD = rtb_UnitDelay_co;
    }
    else
    {
        /* Switch: '<S951>/Switch2' incorporates:
         *  Lookup_n-D: '<S983>/Vector'
         *  Product: '<S951>/Product'
         */
        VeWTAC_M_ToRtLmt_LD = -rtb_TmpSignalConversionAtVeSC_f;
    }

    /* End of Switch: '<S951>/Switch2' */

    /* UnitDelay: '<S952>/Unit Delay' */
    rtb_TmpSignalConversionAtVeBPCR = WTAR_ac_DW.UnitDelay_DSTATE_a;

    /* Switch: '<S952>/Switch3' */
    if (rtb_TmpSignalConversionAtVeBRKR)
    {
        /* Switch: '<S952>/Switch3' */
        VeWTAR_M_PreSatTrq = VeWTAC_M_ToArb_Net;
    }
    else
    {
        /* Sum: '<S952>/Sum2' */
        rtb_TmpSignalConversionAtVeCT_m = VeWTAC_M_ToArb_Net -
            rtb_TmpSignalConversionAtVeBPCR;

        /* Outputs for Atomic SubSystem: '<S952>/Limiter' */
        /* Switch: '<S984>/Switch1' incorporates:
         *  RelationalOperator: '<S984>/Relational Operator'
         */
        if (VeWTAC_M_ToRtLmt_LU < rtb_TmpSignalConversionAtVeCT_m)
        {
            /* Switch: '<S984>/Switch1' */
            rtb_TmpSignalConversionAtVeCT_m = VeWTAC_M_ToRtLmt_LU;
        }

        /* End of Switch: '<S984>/Switch1' */

        /* Switch: '<S984>/Switch' incorporates:
         *  RelationalOperator: '<S984>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeCT_m <= VeWTAC_M_ToRtLmt_LD)
        {
            rtb_TmpSignalConversionAtVeCT_m = VeWTAC_M_ToRtLmt_LD;
        }

        /* End of Switch: '<S984>/Switch' */
        /* End of Outputs for SubSystem: '<S952>/Limiter' */

        /* Switch: '<S952>/Switch3' incorporates:
         *  Sum: '<S952>/Sum3'
         */
        VeWTAR_M_PreSatTrq = rtb_TmpSignalConversionAtVeCT_m +
            rtb_TmpSignalConversionAtVeBPCR;
    }

    /* End of Switch: '<S952>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S952>/Limiter1' */
    /* Switch: '<S985>/Switch1' incorporates:
     *  Constant: '<S952>/Constant Value3'
     *  RelationalOperator: '<S985>/Relational Operator'
     */
    if (100000.0F < VeWTAR_M_PreSatTrq)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAR_M_PreSatTrq;
    }

    /* End of Switch: '<S985>/Switch1' */

    /* Switch: '<S985>/Switch' incorporates:
     *  RelationalOperator: '<S985>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4ProcessMainFilter)
    {
        /* Switch: '<S985>/Switch' */
        VeWTAC_M_PostRateLim = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S985>/Switch' */
        VeWTAC_M_PostRateLim = VeWTAC_M_Min4ProcessMainFilter;
    }

    /* End of Switch: '<S985>/Switch' */
    /* End of Outputs for SubSystem: '<S952>/Limiter1' */

    /* Sum: '<S948>/Subtraction1' incorporates:
     *  UnitDelay: '<S825>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeBPCR = VeWTAC_M_PostRateLim -
        WTAR_ac_DW.UnitDelay1_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S948>/Hysteresis' */
    /* Switch: '<S955>/Switch1' incorporates:
     *  Constant: '<S957>/Calib'
     *  RelationalOperator: '<S955>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeBPCR > KeWTAR_M_Resp_HystPos)
    {
        /* Switch: '<S955>/Switch1' incorporates:
         *  Constant: '<S955>/Constant Value'
         */
        rtb_NotEqual2_c = true;
    }
    else
    {
        /* Switch: '<S955>/Switch1' incorporates:
         *  Constant: '<S956>/Calib'
         *  RelationalOperator: '<S955>/Greater  Than1'
         *  UnitDelay: '<S955>/Unit Delay'
         */
        rtb_NotEqual2_c = ((rtb_TmpSignalConversionAtVeBPCR >=
                            KeWTAR_M_Resp_HystNeg) &&
                           (WTAR_ac_DW.UnitDelay_DSTATE_a5));
    }

    /* End of Switch: '<S955>/Switch1' */

    /* Update for UnitDelay: '<S955>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_a5 = rtb_NotEqual2_c;

    /* End of Outputs for SubSystem: '<S948>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S876>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S948>/EdgeFalling' */
    /* Logic: '<S953>/OR1' incorporates:
     *  Logic: '<S903>/OR1'
     */
    rtb_OR1_em = !rtb_TmpSignalConversionAtVeBRKR;

    /* End of Outputs for SubSystem: '<S876>/EdgeFalling' */

    /* Logic: '<S953>/AND' incorporates:
     *  Logic: '<S953>/OR1'
     *  UnitDelay: '<S953>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_OR1_em && (WTAR_ac_DW.UnitDelay_DSTATE_hg));

    /* Update for UnitDelay: '<S953>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hg = rtb_TmpSignalConversionAtVeBRKR;

    /* End of Outputs for SubSystem: '<S948>/EdgeFalling' */

    /* Logic: '<S948>/Logical' */
    rtb_AND_p4 = (rtb_AND_p4 || rtb_TmpSignalConversionAtVeBRKR);

    /* RelationalOperator: '<S445>/Relational Operator2' incorporates:
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     *  Logic: '<S445>/Logical Operator'
     *  RelationalOperator: '<S445>/Relational Operator'
     *  RelationalOperator: '<S445>/Relational Operator1'
     *  Switch: '<S465>/Switch'
     */
#if Rte_SysCon_Variant_WTAR_10

    (void)Rte_Read_VeTMDR_e_TrrnMd_Value(&tmpRead_a);

    /* Logic: '<S445>/Logical Operator' incorporates:
     *  Constant: '<S461>/Constant'
     *  Constant: '<S462>/Constant'
     *  Constant: '<S463>/Constant'
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     */
    VeWTAC_b_LaunchFiltActv = (((((uint32)rtb_TmpSignalConversionAtVeTIMR) ==
        CeTIMR_e_LaunchControl) && (((uint32)rtb_TmpSignalConversionAtVeTI_j) ==
        CeTIMR_e_RaceMode_Active)) && (((uint32)tmpRead_a) == CeTMDR_e_Drag));
    if (VeWTAC_b_LaunchFiltActv)
    {
        /* VariantMerge generated from: '<S309>/Variant_Source' incorporates:
         *  Constant: '<S445>/Constant'
         */
        rtb_VariantMerge_For_Variant__h = MAX_uint8_T;
    }
    else
    {
        /* VariantMerge generated from: '<S309>/Variant_Source' incorporates:
         *  Constant: '<S464>/Calib'
         *  Selector: '<S445>/Selector12'
         */
        rtb_VariantMerge_For_Variant__h = KaWTAR_i_KtKdSelc_BEV_Map[(6 *
            ((sint32)rtb_TmpSignalConversionAtVeTMDR)) + ((sint32)
            rtb_TmpSignalConversionAtVeDMDR)];
    }

#endif

    /* End of RelationalOperator: '<S445>/Relational Operator2' */

    /* If: '<S460>/If' incorporates:
     *  Constant: '<S514>/Constant'
     *  DataTypeConversion: '<S446>/Data Type Conversion2'
     *  Inport: '<Root>/VeDTRR_e_DrvMdActv'
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     *  RelationalOperator: '<S460>/Comparison2'
     *  Selector: '<S446>/Selector'
     */
#if Rte_SysCon_Variant_WTAR_4

    (void)Rte_Read_VeTMDR_e_LockLowSt_Value(&tmpRead_b);
    if (((uint32)tmpRead_b) == CeTMDR_e_AWD_Low)
    {
        /* Outputs for IfAction SubSystem: '<S460>/KdKt_4Lo' incorporates:
         *  ActionPort: '<S515>/Action Port'
         */
        /* VariantMerge generated from: '<S309>/Variant_Source' incorporates:
         *  Constant: '<S517>/Calib'
         *  Selector: '<S515>/Selector12'
         */
        rtb_VariantMerge_For_Variant__h = KaWTAR_i_KtKdSelc_4LoMap[(6 * ((sint32)
            rtb_TmpSignalConversionAtVeTMDR)) + ((sint32)
            rtb_TmpSignalConversionAtVeDMDR)];

        /* End of Outputs for SubSystem: '<S460>/KdKt_4Lo' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S460>/KdKt_Non_4Lo' incorporates:
         *  ActionPort: '<S516>/Action Port'
         */
        /* VariantMerge generated from: '<S309>/Variant_Source' incorporates:
         *  Constant: '<S518>/Calib'
         *  Selector: '<S516>/Selector12'
         */
        rtb_VariantMerge_For_Variant__h = KaWTAR_i_KtKdSelc_4HiMap[(6 * ((sint32)
            rtb_TmpSignalConversionAtVeTMDR)) + ((sint32)
            rtb_TmpSignalConversionAtVeDMDR)];

        /* End of Outputs for SubSystem: '<S460>/KdKt_Non_4Lo' */
    }

#elif !Rte_SysCon_Variant_WTAR_10 && !Rte_SysCon_Variant_WTAR_4

    (void)Rte_Read_VeDTRR_e_DrvMdActv_Value(&tmpRead_h);

    /* VariantMerge generated from: '<S309>/Variant_Source' incorporates:
     *  Constant: '<S466>/Calib'
     *  DataTypeConversion: '<S446>/Data Type Conversion2'
     *  Inport: '<Root>/VeDTRR_e_DrvMdActv'
     *  Selector: '<S446>/Selector'
     */
    rtb_VariantMerge_For_Variant__h = KaWTAR_i_KtKdSelc_M182[(tmpRead_h)];

#endif

    /* End of If: '<S460>/If' */

    /* SignalConversion generated from: '<S309>/Variant_Source' */
    VeWTAC_i_KdKt_Selc = rtb_VariantMerge_For_Variant__h;

    /* Switch: '<S447>/Switch1' incorporates:
     *  Constant: '<S454>/Calib'
     *  Constant: '<S455>/Calib'
     *  Switch: '<S447>/Switch2'
     */
#if Rte_SysCon_Variant_WTAR_4

    if (KeWTAR_b_UseNturb_KDKT)
    {
        /* Switch: '<S447>/Switch1' */
        rtb_Switch1_mh = rtb_TmpSignalConversionAtVeVSDR;
    }
    else if (KeWTAR_b_UseNb_KDKT)
    {
        /* Switch: '<S447>/Switch2' incorporates:
         *  Switch: '<S447>/Switch1'
         */
        rtb_Switch1_mh = rtb_TmpSignalConversionAtVeMSPR;
    }
    else
    {
        /* Switch: '<S447>/Switch1' incorporates:
         *  Switch: '<S447>/Switch2'
         */
        rtb_Switch1_mh = rtb_TmpSignalConversionAtVeTISR;
    }

#endif

    /* End of Switch: '<S447>/Switch1' */

    /* SwitchCase: '<S309>/Drv_Prog_Case' incorporates:
     *  Inport: '<Root>/VeTIMR_e_LaunchIntensity'
     */
    switch (VeWTAC_i_KdKt_Selc)
    {
      case 1:
        /* Outputs for IfAction SubSystem: '<S309>/KdKt_01' incorporates:
         *  ActionPort: '<S448>/Action Port'
         */
        /* Lookup_n-D: '<S470>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge1' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge1 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDNeg_01_No[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_01_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S470>/Vector' */

        /* Lookup_n-D: '<S471>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge1' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge1 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KDNeg_01_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KDNeg_01_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_01_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S471>/Vector' */

        /* Lookup_n-D: '<S472>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge3' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge3 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDPos_01_No[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_01_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S472>/Vector' */

        /* Lookup_n-D: '<S473>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge3' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge3 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KDPos_01_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KDPos_01_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_01_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S473>/Vector' */

        /* Lookup_n-D: '<S474>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge2' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge2 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTNeg_01_No[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_01_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S474>/Vector' */

        /* Lookup_n-D: '<S475>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge2' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge2 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KTNeg_01_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KTNeg_01_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_01_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S475>/Vector' */

        /* Lookup_n-D: '<S476>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge4' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge4 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTPos_01_No[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_01_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S476>/Vector' */

        /* Lookup_n-D: '<S477>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge4' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge4 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KTPos_01_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KTPos_01_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_01_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S477>/Vector' */

        /* Merge: '<S309>/Merge5' incorporates:
         *  Constant: '<S469>/Calib'
         *  SignalConversion generated from: '<S448>/PosLash'
         */
        VeWTAC_k_PosLashFac = KeWTAR_k_PosLashFac_1;

        /* Merge: '<S309>/Merge6' incorporates:
         *  Constant: '<S467>/Calib'
         *  SignalConversion generated from: '<S448>/NegLash'
         */
        VeWTAC_k_NegLashFac = KeWTAR_k_NegLashFac_1;

        /* Merge: '<S309>/Merge7' incorporates:
         *  Constant: '<S468>/Calib'
         *  SignalConversion generated from: '<S448>/NotInLash'
         */
        VeWTAC_k_NotInLashFac = KeWTAR_k_NotInLashFac_1;

        /* End of Outputs for SubSystem: '<S309>/KdKt_01' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S309>/KdKt_02' incorporates:
         *  ActionPort: '<S449>/Action Port'
         */
        /* Lookup_n-D: '<S481>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge1' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge1 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDNeg_02_No[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_02_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S481>/Vector' */

        /* Lookup_n-D: '<S482>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge1' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge1 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KDNeg_02_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KDNeg_02_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_02_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S482>/Vector' */

        /* Lookup_n-D: '<S483>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge3' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge3 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDPos_02_No[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_02_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S483>/Vector' */

        /* Lookup_n-D: '<S484>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge3' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge3 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KDPos_02_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KDPos_02_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_02_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S484>/Vector' */

        /* Lookup_n-D: '<S485>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge2' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge2 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTNeg_02_No[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_02_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S485>/Vector' */

        /* Lookup_n-D: '<S486>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge2' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge2 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KTNeg_02_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KTNeg_02_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_02_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S486>/Vector' */

        /* Lookup_n-D: '<S487>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge4' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge4 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTPos_02_No[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_02_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S487>/Vector' */

        /* Lookup_n-D: '<S488>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge4' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge4 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KTPos_02_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KTPos_02_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_02_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S488>/Vector' */

        /* Merge: '<S309>/Merge5' incorporates:
         *  Constant: '<S480>/Calib'
         *  SignalConversion generated from: '<S449>/PosLash'
         */
        VeWTAC_k_PosLashFac = KeWTAR_k_PosLashFac_2;

        /* Merge: '<S309>/Merge6' incorporates:
         *  Constant: '<S478>/Calib'
         *  SignalConversion generated from: '<S449>/NegLash'
         */
        VeWTAC_k_NegLashFac = KeWTAR_k_NegLashFac_2;

        /* Merge: '<S309>/Merge7' incorporates:
         *  Constant: '<S479>/Calib'
         *  SignalConversion generated from: '<S449>/NotInLash'
         */
        VeWTAC_k_NotInLashFac = KeWTAR_k_NotInLashFac_2;

        /* End of Outputs for SubSystem: '<S309>/KdKt_02' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S309>/KdKt_03' incorporates:
         *  ActionPort: '<S450>/Action Port'
         */
        /* Lookup_n-D: '<S492>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge1' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge1 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDNeg_03_No[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_03_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S492>/Vector' */

        /* Lookup_n-D: '<S493>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge1' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge1 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KDNeg_03_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KDNeg_03_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_03_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S493>/Vector' */

        /* Lookup_n-D: '<S494>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge3' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge3 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDPos_03_No[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_03_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S494>/Vector' */

        /* Lookup_n-D: '<S495>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge3' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge3 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KDPos_03_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KDPos_03_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_03_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S495>/Vector' */

        /* Lookup_n-D: '<S496>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge2' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge2 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTNeg_03_No[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_03_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S496>/Vector' */

        /* Lookup_n-D: '<S497>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge2' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge2 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KTNeg_03_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KTNeg_03_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_03_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S497>/Vector' */

        /* Lookup_n-D: '<S498>/Vector' */
#if !Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge4' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge4 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTPos_03_No[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_03_No[0])), 7U);

#endif

        /* End of Lookup_n-D: '<S498>/Vector' */

        /* Lookup_n-D: '<S499>/Vector' */
#if Rte_SysCon_Variant_WTAR_4

        /* Merge: '<S309>/Merge4' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Switch: '<S447>/Switch1'
         */
        WTAR_ac_B.Merge4 = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            rtb_Switch1_mh, ((const float32 *)&(KxWTAR_k_KTPos_03_No_Ni[0])), ((
            const float32 *)&(KyWTAR_k_KTPos_03_No_Ni[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_03_No_Ni[0])), WTAR_ac_ConstP.pooled18, 9U);

#endif

        /* End of Lookup_n-D: '<S499>/Vector' */

        /* Merge: '<S309>/Merge5' incorporates:
         *  Constant: '<S491>/Calib'
         *  SignalConversion generated from: '<S450>/PosLash'
         */
        VeWTAC_k_PosLashFac = KeWTAR_k_PosLashFac_3;

        /* Merge: '<S309>/Merge6' incorporates:
         *  Constant: '<S489>/Calib'
         *  SignalConversion generated from: '<S450>/NegLash'
         */
        VeWTAC_k_NegLashFac = KeWTAR_k_NegLashFac_3;

        /* Merge: '<S309>/Merge7' incorporates:
         *  Constant: '<S490>/Calib'
         *  SignalConversion generated from: '<S450>/NotInLash'
         */
        VeWTAC_k_NotInLashFac = KeWTAR_k_NotInLashFac_3;

        /* End of Outputs for SubSystem: '<S309>/KdKt_03' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S309>/KdKt_04' incorporates:
         *  ActionPort: '<S451>/Action Port'
         */
        /* Merge: '<S309>/Merge1' incorporates:
         *  Lookup_n-D: '<S503>/Vector'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge1 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDNeg_04_No[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_04_No[0])), 7U);

        /* Merge: '<S309>/Merge3' incorporates:
         *  Lookup_n-D: '<S504>/Vector'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge3 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KDPos_04_No[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_04_No[0])), 7U);

        /* Merge: '<S309>/Merge2' incorporates:
         *  Lookup_n-D: '<S505>/Vector'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge2 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTNeg_04_No[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_04_No[0])), 7U);

        /* Merge: '<S309>/Merge4' incorporates:
         *  Lookup_n-D: '<S506>/Vector'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        WTAR_ac_B.Merge4 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeCSVR,
            ((const float32 *)&(KxWTAR_k_KTPos_04_No[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_04_No[0])), 7U);

        /* Merge: '<S309>/Merge5' incorporates:
         *  Constant: '<S502>/Calib'
         *  SignalConversion generated from: '<S451>/PosLash'
         */
        VeWTAC_k_PosLashFac = KeWTAR_k_PosLashFac_4;

        /* Merge: '<S309>/Merge6' incorporates:
         *  Constant: '<S500>/Calib'
         *  SignalConversion generated from: '<S451>/NegLash'
         */
        VeWTAC_k_NegLashFac = KeWTAR_k_NegLashFac_4;

        /* Merge: '<S309>/Merge7' incorporates:
         *  Constant: '<S501>/Calib'
         *  SignalConversion generated from: '<S451>/NotInLash'
         */
        VeWTAC_k_NotInLashFac = KeWTAR_k_NotInLashFac_4;

        /* End of Outputs for SubSystem: '<S309>/KdKt_04' */
        break;

      case 255:
        (void)Rte_Read_VeTIMR_e_LaunchIntensity_Value(&tmpRead_k);

        /* Outputs for IfAction SubSystem: '<S309>/KdKt_Launch' incorporates:
         *  ActionPort: '<S452>/Action Port'
         */
        /* Merge: '<S309>/Merge1' incorporates:
         *  DataTypeConversion: '<S452>/Data Type Conversion2'
         *  Inport: '<Root>/VeTIMR_e_LaunchIntensity'
         *  Lookup_n-D: '<S510>/Vector'
         *  Switch: '<S321>/Switch3'
         */
        WTAR_ac_B.Merge1 = look2_iu8flftf_binlcapw((uint8)tmpRead_k,
            VeWTAC_M_ToArb_Net, ((const uint8 *)&(KxWTAR_k_KDNeg_Launch[0])), ((
            const float32 *)&(KyWTAR_k_KDNeg_Launch[0])), ((const float32 *)
            &(KtWTAR_k_KDNeg_Launch[0])), WTAR_ac_ConstP.pooled19, 5U);

        /* Merge: '<S309>/Merge3' incorporates:
         *  DataTypeConversion: '<S452>/Data Type Conversion2'
         *  Inport: '<Root>/VeTIMR_e_LaunchIntensity'
         *  Lookup_n-D: '<S511>/Vector'
         *  Switch: '<S321>/Switch3'
         */
        WTAR_ac_B.Merge3 = look2_iu8flftf_binlcapw((uint8)tmpRead_k,
            VeWTAC_M_ToArb_Net, ((const uint8 *)&(KxWTAR_k_KDPos_Launch[0])), ((
            const float32 *)&(KyWTAR_k_KDPos_Launch[0])), ((const float32 *)
            &(KtWTAR_k_KDPos_Launch[0])), WTAR_ac_ConstP.pooled19, 5U);

        /* Merge: '<S309>/Merge2' incorporates:
         *  DataTypeConversion: '<S452>/Data Type Conversion2'
         *  Inport: '<Root>/VeTIMR_e_LaunchIntensity'
         *  Lookup_n-D: '<S512>/Vector'
         *  Switch: '<S321>/Switch3'
         */
        WTAR_ac_B.Merge2 = look2_iu8flftf_binlcapw((uint8)tmpRead_k,
            VeWTAC_M_ToArb_Net, ((const uint8 *)&(KxWTAR_k_KTNeg_Launch[0])), ((
            const float32 *)&(KyWTAR_k_KTNeg_Launch[0])), ((const float32 *)
            &(KtWTAR_k_KTNeg_Launch[0])), WTAR_ac_ConstP.pooled19, 5U);

        /* Merge: '<S309>/Merge4' incorporates:
         *  DataTypeConversion: '<S452>/Data Type Conversion2'
         *  Inport: '<Root>/VeTIMR_e_LaunchIntensity'
         *  Lookup_n-D: '<S513>/Vector'
         *  Switch: '<S321>/Switch3'
         */
        WTAR_ac_B.Merge4 = look2_iu8flftf_binlcapw((uint8)tmpRead_k,
            VeWTAC_M_ToArb_Net, ((const uint8 *)&(KxWTAR_k_KTPos_Launch[0])), ((
            const float32 *)&(KyWTAR_k_KTPos_Launch[0])), ((const float32 *)
            &(KtWTAR_k_KTPos_Launch[0])), WTAR_ac_ConstP.pooled19, 5U);

        /* Merge: '<S309>/Merge5' incorporates:
         *  Constant: '<S509>/Calib'
         *  SignalConversion generated from: '<S452>/PosLash_Launch'
         */
        VeWTAC_k_PosLashFac = KeWTAR_k_PosLashFac_Launch;

        /* Merge: '<S309>/Merge6' incorporates:
         *  Constant: '<S507>/Calib'
         *  SignalConversion generated from: '<S452>/NegLash_Launch'
         */
        VeWTAC_k_NegLashFac = KeWTAR_k_NegLashFac_Launch;

        /* Merge: '<S309>/Merge7' incorporates:
         *  Constant: '<S508>/Calib'
         *  SignalConversion generated from: '<S452>/NotInLash_Launch'
         */
        VeWTAC_k_NotInLashFac = KeWTAR_k_NotInLashFac_Launch;

        /* End of Outputs for SubSystem: '<S309>/KdKt_Launch' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S309>/Drv_Prog_Case' */

    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  Constant: '<S453>/Calib'
     *  RelationalOperator: '<S309>/Comparison1'
     *  UnitDelay: '<S309>/Unit Delay1'
     */
    rtb_Comparison12 = (WTAR_ac_DW.UnitDelay1_DSTATE_l >
                        KeWTAR_M_AeC_KDKTMultThrhd);

    /* Switch: '<S309>/Switch3' incorporates:
     *  Switch: '<S309>/Switch1'
     *  Switch: '<S309>/Switch2'
     *  Switch: '<S309>/Switch4'
     */
    if (rtb_Comparison12)
    {
        /* Switch: '<S309>/Switch3' incorporates:
         *  Constant: '<S458>/Calib'
         *  Product: '<S309>/Product2'
         */
        VeWTAC_k_PosKD = KeWTAR_k_PosKDMult * WTAR_ac_B.Merge3;

        /* Switch: '<S309>/Switch4' incorporates:
         *  Constant: '<S459>/Calib'
         *  Product: '<S309>/Product3'
         */
        VeWTAC_k_PosKT = KeWTAR_k_PosKTMult * WTAR_ac_B.Merge4;

        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S456>/Calib'
         *  Product: '<S309>/Product'
         */
        VeWTAC_k_NegKD = KeWTAR_k_NegKDMult * WTAR_ac_B.Merge1;

        /* Switch: '<S309>/Switch2' incorporates:
         *  Constant: '<S457>/Calib'
         *  Product: '<S309>/Product1'
         */
        VeWTAC_k_NegKT = KeWTAR_k_NegKTMult * WTAR_ac_B.Merge2;
    }
    else
    {
        /* Switch: '<S309>/Switch3' */
        VeWTAC_k_PosKD = WTAR_ac_B.Merge3;

        /* Switch: '<S309>/Switch4' */
        VeWTAC_k_PosKT = WTAR_ac_B.Merge4;

        /* Switch: '<S309>/Switch1' */
        VeWTAC_k_NegKD = WTAR_ac_B.Merge1;

        /* Switch: '<S309>/Switch2' */
        VeWTAC_k_NegKT = WTAR_ac_B.Merge2;
    }

    /* End of Switch: '<S309>/Switch3' */

    /* Switch: '<S948>/Switch4' incorporates:
     *  Constant: '<S958>/Calib'
     */
    if (KeWTAR_b_FilCoeff_SrcSel)
    {
        /* Switch: '<S948>/Switch4' incorporates:
         *  Abs: '<S948>/Abs'
         *  Sum: '<S948>/Subtraction2'
         */
        rtb_Switch1_mh = VeWTAR_M_Max4Process - fabsf(VeWTAC_M_PostRateLim);
    }
    else
    {
        /* Switch: '<S948>/Switch4' */
        rtb_Switch1_mh = VeWTAI_Pct_AccelPedalEffPosition;
    }

    /* End of Switch: '<S948>/Switch4' */

    /* If: '<S948>/If' */
    rtb_Comparison12 = !rtb_AND_p4;
    if (rtb_NotEqual2_c && rtb_Comparison12)
    {
        /* Outputs for IfAction SubSystem: '<S948>/PosSlowResp' incorporates:
         *  ActionPort: '<S964>/Action Port'
         */
        WTAR_ac_PosSlowResp(VeWTAC_k_PosKD, rtb_Switch1_mh, VeWTAC_k_PosKT,
                            &WTAR_ac_B.Merge, &WTAR_ac_B.Merge1_o);

        /* End of Outputs for SubSystem: '<S948>/PosSlowResp' */
    }
    else if (rtb_NotEqual2_c && rtb_AND_p4)
    {
        /* Outputs for IfAction SubSystem: '<S948>/PosFastResp' incorporates:
         *  ActionPort: '<S963>/Action Port'
         */
        WTAR_ac_PosFastResp(&WTAR_ac_B.Merge, &WTAR_ac_B.Merge1_o);

        /* End of Outputs for SubSystem: '<S948>/PosFastResp' */
    }
    else
    {
        rtb_OR1_a5 = !rtb_NotEqual2_c;
        if (rtb_OR1_a5 && rtb_Comparison12)
        {
            /* Outputs for IfAction SubSystem: '<S948>/NegSlowResp' incorporates:
             *  ActionPort: '<S961>/Action Port'
             */
            WTAR_ac_NegSlowResp(VeWTAC_k_NegKD, rtb_Switch1_mh, VeWTAC_k_NegKT,
                                &WTAR_ac_B.Merge, &WTAR_ac_B.Merge1_o);

            /* End of Outputs for SubSystem: '<S948>/NegSlowResp' */
        }
        else
        {
            if (rtb_OR1_a5 && rtb_AND_p4)
            {
                /* Outputs for IfAction SubSystem: '<S948>/NegFastResp' incorporates:
                 *  ActionPort: '<S960>/Action Port'
                 */
                WTAR_ac_NegFastResp(&WTAR_ac_B.Merge, &WTAR_ac_B.Merge1_o);

                /* End of Outputs for SubSystem: '<S948>/NegFastResp' */
            }
        }
    }

    /* End of If: '<S948>/If' */

    /* If: '<S948>/If1' */
    if (rtb_TmpSignalConversionAtVeBRKR)
    {
        /* Outputs for IfAction SubSystem: '<S948>/FastTran' incorporates:
         *  ActionPort: '<S954>/Action Port'
         */
        /* Merge: '<S948>/Merge2' incorporates:
         *  Constant: '<S965>/Calib'
         *  SignalConversion generated from: '<S954>/KD_Trans'
         */
        VeWTAC_k_KDFilterCoeffs = KeWTAR_k_KD_Trans;

        /* Merge: '<S948>/Merge3' incorporates:
         *  Constant: '<S966>/Calib'
         *  SignalConversion generated from: '<S954>/KT_Trans'
         */
        VeWTAC_k_KTFilterCoeffs = KeWTAR_k_KT_Trans;

        /* End of Outputs for SubSystem: '<S948>/FastTran' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S948>/PassThru' incorporates:
         *  ActionPort: '<S962>/Action Port'
         */
        /* Merge: '<S948>/Merge2' incorporates:
         *  Inport: '<S962>/KD'
         */
        VeWTAC_k_KDFilterCoeffs = WTAR_ac_B.Merge;

        /* Merge: '<S948>/Merge3' incorporates:
         *  Inport: '<S962>/KT'
         */
        VeWTAC_k_KTFilterCoeffs = WTAR_ac_B.Merge1_o;

        /* End of Outputs for SubSystem: '<S948>/PassThru' */
    }

    /* End of If: '<S948>/If1' */

    /* Product: '<S949>/Multiplication3' incorporates:
     *  Constant: '<S950>/Calib'
     *  Sum: '<S949>/Subtraction1'
     *  UnitDelay: '<S949>/Unit Delay1'
     *  UnitDelay: '<S949>/Unit Delay4'
     */
    rtb_Switch1_mh = (WTAR_ac_DW.UnitDelay4_DSTATE_k -
                      WTAR_ac_DW.UnitDelay1_DSTATE_k) * KeWTAR_t_dT;

    /* MinMax: '<S949>/Maximum' incorporates:
     *  Constant: '<S950>/Calib'
     */
    rtb_TmpSignalConversionAtVeBPCR = fmaxf(VeWTAC_k_KTFilterCoeffs, KeWTAR_t_dT);

    /* Outputs for Atomic SubSystem: '<S949>/Protected Division' */
    /* Switch: '<S981>/Switch1' incorporates:
     *  Constant: '<S981>/Constant Value'
     *  Constant: '<S981>/Constant Value1'
     *  Constant: '<S981>/Constant Value2'
     *  Constant: '<S981>/Constant Value3'
     *  Logic: '<S981>/AND'
     *  RelationalOperator: '<S981>/Greater Than or Equal '
     *  RelationalOperator: '<S981>/Greater Than or Equal 1'
     *  RelationalOperator: '<S981>/Not Equal'
     *  RelationalOperator: '<S981>/Not Equal1'
     *  Switch: '<S981>/Switch2'
     *  Switch: '<S981>/Switch3'
     */
    if ((rtb_Switch1_mh != 0.0F) && (rtb_TmpSignalConversionAtVeBPCR != 0.0F))
    {
        /* Switch: '<S981>/Switch1' incorporates:
         *  Product: '<S981>/Division'
         */
        rtb_Switch1_mh /= rtb_TmpSignalConversionAtVeBPCR;
    }
    else if (rtb_Switch1_mh > 0.0F)
    {
        /* Switch: '<S981>/Switch2' incorporates:
         *  Constant: '<S981>/MAXFLOAT'
         *  Switch: '<S981>/Switch1'
         */
        rtb_Switch1_mh = 3.402823466E+38F;
    }
    else if (rtb_Switch1_mh < 0.0F)
    {
        /* Switch: '<S981>/Switch3' incorporates:
         *  Constant: '<S981>/MINFLOAT'
         *  Switch: '<S981>/Switch1'
         *  Switch: '<S981>/Switch2'
         */
        rtb_Switch1_mh = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S981>/Switch1' incorporates:
         *  Constant: '<S981>/Constant Value4'
         *  Switch: '<S981>/Switch2'
         *  Switch: '<S981>/Switch3'
         */
        rtb_Switch1_mh = 0.0F;
    }

    /* End of Switch: '<S981>/Switch1' */
    /* End of Outputs for SubSystem: '<S949>/Protected Division' */

    /* Sum: '<S949>/Summation2' incorporates:
     *  Product: '<S949>/Multiplication5'
     *  Sum: '<S949>/Subtraction2'
     *  Sum: '<S949>/Summation1'
     *  UnitDelay: '<S949>/Unit Delay1'
     *  UnitDelay: '<S949>/Unit Delay4'
     */
    rtb_Switch1_mh = ((VeWTAC_M_PostRateLim - WTAR_ac_DW.UnitDelay4_DSTATE_k) *
                      VeWTAC_k_KDFilterCoeffs) + (rtb_Switch1_mh +
        WTAR_ac_DW.UnitDelay1_DSTATE_k);

    /* Outputs for Atomic SubSystem: '<S949>/Limiter1' */
    /* Switch: '<S979>/Switch1' incorporates:
     *  Constant: '<S949>/Constant Value3'
     *  RelationalOperator: '<S979>/Relational Operator'
     */
    if (100000.0F < rtb_Switch1_mh)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Switch1_mh;
    }

    /* End of Switch: '<S979>/Switch1' */

    /* Switch: '<S979>/Switch' incorporates:
     *  RelationalOperator: '<S979>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4ProcessMainFilter)
    {
        /* Switch: '<S979>/Switch' */
        VeWTAC_M_AfterMainFilter = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S979>/Switch' */
        VeWTAC_M_AfterMainFilter = VeWTAC_M_Min4ProcessMainFilter;
    }

    /* End of Switch: '<S979>/Switch' */
    /* End of Outputs for SubSystem: '<S949>/Limiter1' */

    /* If: '<S824>/If' incorporates:
     *  Constant: '<S926>/Calib'
     */
    if (rtb_TmpSignalConversionAtVeBRKR)
    {
        /* Outputs for IfAction SubSystem: '<S824>/ByPass' incorporates:
         *  ActionPort: '<S910>/Action Port'
         */
        WTAR_ac_ByPass((&(VeWTAC_dM_LashGradLimRaw_Up)),
                       (&(VeWTAC_dM_LashGradLimRaw_Lo)));

        /* End of Outputs for SubSystem: '<S824>/ByPass' */
    }
    else if (VeWTAC_b_ZeroPedalLashCtrl_PstFil)
    {
        /* Outputs for IfAction SubSystem: '<S824>/ZeroPedalLash' incorporates:
         *  ActionPort: '<S934>/Action Port'
         */
        WTAR_ac_ZeroPedalLash(rtb_TmpSignalConversionAtVeCT_n,
                              rtb_TmpSignalConversionAtVeCSVR,
                              (&(VeWTAC_dM_LashGradLimRaw_Up)),
                              (&(VeWTAC_dM_LashGradLimRaw_Lo)));

        /* End of Outputs for SubSystem: '<S824>/ZeroPedalLash' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_NegLashCntrl_PstFil))
    {
        /* Outputs for IfAction SubSystem: '<S824>/InNegLashCntrl' incorporates:
         *  ActionPort: '<S918>/Action Port'
         */
        WTAR_ac_InNegLashCntrl(rtb_TmpSignalConversionAtVeCT_n,
                               rtb_TmpSignalConversionAtVeCSVR,
                               VeWTAC_k_NegLashFac,
                               (&(VeWTAC_dM_LashGradLimRaw_Up)),
                               (&(VeWTAC_dM_LashGradLimRaw_Lo)));

        /* End of Outputs for SubSystem: '<S824>/InNegLashCntrl' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_PosLashCntrl_PstFil))
    {
        /* Outputs for IfAction SubSystem: '<S824>/InPosLashCntrl' incorporates:
         *  ActionPort: '<S919>/Action Port'
         */
        /* Merge: '<S824>/Merge1' incorporates:
         *  Lookup_n-D: '<S942>/Vector'
         *  Product: '<S919>/Multiplication1'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  UnitDelay: '<S824>/Unit Delay'
         */
        VeWTAC_dM_LashGradLimRaw_Lo = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCT_n, rtb_TmpSignalConversionAtVeCSVR,
             ((const float32 *)&(KxWTAR_dM_InPosLash_LD_PstFil[0])), ((const
               float32 *)&(KyWTAR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
              &(KtWTAR_dM_InPosLash_LD_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U)
            * VeWTAC_k_PosLashFac;

        /* Merge: '<S824>/Merge2' incorporates:
         *  Lookup_n-D: '<S941>/Vector'
         *  Product: '<S919>/Multiplication5'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  UnitDelay: '<S824>/Unit Delay'
         */
        VeWTAC_dM_LashGradLimRaw_Up = VeWTAC_k_PosLashFac * look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCT_n, rtb_TmpSignalConversionAtVeCSVR,
             ((const float32 *)&(KxWTAR_dM_InNegLash_LU_PstFil[0])), ((const
               float32 *)&(KyWTAR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
              &(KtWTAR_dM_InNegLash_LU_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U);

        /* End of Outputs for SubSystem: '<S824>/InPosLashCntrl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S824>/NotInLash' incorporates:
         *  ActionPort: '<S932>/Action Port'
         */
        /* Abs: '<S932>/Abs' incorporates:
         *  Sum: '<S932>/Add'
         */
        rtb_Switch1_mh = fabsf(VeWTAC_M_AfterMainFilter -
                               rtb_TmpSignalConversionAtVeCT_n);

        /* Lookup_n-D: '<S943>/Vector' incorporates:
         *  Abs: '<S932>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LD_PstFil = look2_iflf_binlcapw(rtb_Switch1_mh,
            rtb_Maximum_i, ((const float32 *)&(KxWTAR_dM_NotLashToNo_LD_PstFil[0])),
            ((const float32 *)&(KyWTAR_dM_NotLashToNo_LD_PstFil[0])), ((const
            float32 *)&(KtWTAR_dM_NotLashToNo_LD_PstFil[0])),
            WTAR_ac_ConstP.pooled21, 8U);

        /* Lookup_n-D: '<S944>/Vector' incorporates:
         *  Abs: '<S932>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LU_PstFil = look2_iflf_binlcapw(rtb_Switch1_mh,
            rtb_Maximum_i, ((const float32 *)&(KxWTAR_dM_NotLashToNo_LU_PstFil[0])),
            ((const float32 *)&(KyWTAR_dM_NotLashToNo_LU_PstFil[0])), ((const
            float32 *)&(KtWTAR_dM_NotLashToNo_LU_PstFil[0])),
            WTAR_ac_ConstP.pooled21, 8U);

        /* Merge: '<S824>/Merge2' incorporates:
         *  Product: '<S932>/Multiplication1'
         */
        VeWTAC_dM_LashGradLimRaw_Up = VeWTAC_dM_NoLashToNo_LU_PstFil *
            VeWTAC_k_NotInLashFac;

        /* Merge: '<S824>/Merge1' incorporates:
         *  Product: '<S932>/Multiplication5'
         */
        VeWTAC_dM_LashGradLimRaw_Lo = VeWTAC_k_NotInLashFac *
            VeWTAC_dM_NoLashToNo_LD_PstFil;

        /* End of Outputs for SubSystem: '<S824>/NotInLash' */
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTTIR_dM_TCM_TrqGradLim_Lo_Axle' */
    (void)Rte_Read_VeTTIR_dM_TCM_TrqGradLim_Lo_Axle_Value(&rtb_Sum2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* MinMax: '<S824>/MinMax4' */
    VeWTAC_dM_LashGradLim_Up = fminf(VeWTAC_dM_TCMGradLim_Up_dt,
        VeWTAC_dM_LashGradLimRaw_Up);

    /* Product: '<S6>/Multiplication3' incorporates:
     *  Constant: '<S308>/Calib'
     */
    VeWTAC_dM_TCMGradLim_Lo_dt = rtb_Sum2 * KeWTAR_t_dT;

    /* MinMax: '<S824>/MinMax3' */
    VeWTAC_dM_LashGradLim_Lo = fmaxf(VeWTAC_dM_TCMGradLim_Lo_dt,
        VeWTAC_dM_LashGradLimRaw_Lo);

    /* Sum: '<S914>/Sum2' incorporates:
     *  UnitDelay: '<S914>/Unit Delay1'
     */
    rtb_Sum2 = VeWTAC_M_AfterMainFilter - WTAR_ac_DW.UnitDelay1_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S914>/Limiter' */
    /* Switch: '<S937>/Switch1' incorporates:
     *  RelationalOperator: '<S937>/Relational Operator'
     */
    if (VeWTAC_dM_LashGradLim_Up < rtb_Sum2)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAC_dM_LashGradLim_Up;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Sum2;
    }

    /* End of Switch: '<S937>/Switch1' */

    /* Switch: '<S937>/Switch' incorporates:
     *  RelationalOperator: '<S937>/Relational Operator1'
     */
    if (rtb_Switch1_mxa <= VeWTAC_dM_LashGradLim_Lo)
    {
        rtb_Switch1_mxa = VeWTAC_dM_LashGradLim_Lo;
    }

    /* End of Switch: '<S937>/Switch' */
    /* End of Outputs for SubSystem: '<S914>/Limiter' */

    /* Sum: '<S914>/Sum3' incorporates:
     *  UnitDelay: '<S914>/Unit Delay1'
     */
    rtb_Sum2 = rtb_Switch1_mxa + WTAR_ac_DW.UnitDelay1_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S914>/Limiter1' */
    /* Switch: '<S938>/Switch1' incorporates:
     *  Constant: '<S824>/Constant Value10'
     *  RelationalOperator: '<S938>/Relational Operator'
     */
    if (100000.0F < rtb_Sum2)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Sum2;
    }

    /* End of Switch: '<S938>/Switch1' */

    /* Switch: '<S938>/Switch' incorporates:
     *  RelationalOperator: '<S938>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S938>/Switch' */
        VeWTAC_M_ToCmnd_AftLashCtrl_PstFil = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S938>/Switch' */
        VeWTAC_M_ToCmnd_AftLashCtrl_PstFil = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S938>/Switch' */
    /* End of Outputs for SubSystem: '<S914>/Limiter1' */

    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  RelationalOperator: '<S876>/Comparison'
     *  UnitDelay: '<S876>/Unit Delay1'
     */
    rtb_Comparison12 = (VeWTAC_M_ToCmnd_AftLashCtrl_PstFil >
                        WTAR_ac_DW.UnitDelay1_DSTATE_la);

    /* Switch: '<S876>/Switch3' incorporates:
     *  Logic: '<S876>/Logical1'
     *  Logic: '<S876>/Logical2'
     *  RelationalOperator: '<S876>/Comparison2'
     *  UnitDelay: '<S876>/Unit Delay2'
     */
    if ((WTAR_ac_DW.UnitDelay2_DSTATE > VeWTAC_M_ToCmnd_AftLashCtrl_PstFil) && (
            !rtb_Comparison12))
    {
        /* Switch: '<S876>/Switch3' incorporates:
         *  Constant: '<S876>/Constant Value3'
         */
        rtb_Sum2 = 0.0F;
    }
    else
    {
        /* Switch: '<S876>/Switch3' incorporates:
         *  Constant: '<S876>/Constant Value4'
         */
        rtb_Sum2 = 1.0E+6F;
    }

    /* End of Switch: '<S876>/Switch3' */

    /* Switch: '<S876>/Switch2' incorporates:
     *  Logic: '<S876>/Logical'
     *  RelationalOperator: '<S876>/Comparison1'
     *  UnitDelay: '<S876>/Unit Delay2'
     */
    if (rtb_Comparison12 && (WTAR_ac_DW.UnitDelay2_DSTATE <
                             VeWTAC_M_ToCmnd_AftLashCtrl_PstFil))
    {
        /* Switch: '<S876>/Switch2' incorporates:
         *  Constant: '<S876>/Constant Value'
         */
        rtb_Switch1_mh = 0.0F;
    }
    else
    {
        /* Switch: '<S876>/Switch2' incorporates:
         *  Constant: '<S876>/Constant Value1'
         */
        rtb_Switch1_mh = -1.0E+6F;
    }

    /* End of Switch: '<S876>/Switch2' */

    /* Switch: '<S319>/Switch2' incorporates:
     *  Lookup_n-D: '<S899>/Vector'
     */
    rtb_Sum3_gl = look1_iflf_binlcapw(rtb_Maximum_i, ((const float32 *)
        &(KxWTAR_Pct_LagLmt_NoDepend[0])), ((const float32 *)
        &(KtWTAR_Pct_LagLmt_NoDepend[0])), 2U);

    /* Sum: '<S875>/Sum1' incorporates:
     *  UnitDelay: '<S875>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeBPCR = VeWTAI_Pct_AccelPedalEffPosition -
        WTAR_ac_DW.UnitDelay2_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S875>/Hysteresis' */
    /* Switch: '<S891>/Switch1' incorporates:
     *  Constant: '<S892>/Calib'
     *  RelationalOperator: '<S891>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeBPCR > KeWTAR_Pct_TipInThresh)
    {
        /* Switch: '<S891>/Switch1' incorporates:
         *  Constant: '<S891>/Constant Value'
         */
        VeWTAC_b_TipInOut_detect = true;
    }
    else
    {
        /* Switch: '<S891>/Switch1' incorporates:
         *  Constant: '<S893>/Calib'
         *  RelationalOperator: '<S891>/Greater  Than1'
         *  UnitDelay: '<S891>/Unit Delay'
         */
        VeWTAC_b_TipInOut_detect = ((rtb_TmpSignalConversionAtVeBPCR >=
            KeWTAR_Pct_TipOutThresh) && (WTAR_ac_DW.UnitDelay_DSTATE_op));
    }

    /* End of Switch: '<S891>/Switch1' */

    /* Update for UnitDelay: '<S891>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_op = VeWTAC_b_TipInOut_detect;

    /* End of Outputs for SubSystem: '<S875>/Hysteresis' */

    /* Switch: '<S875>/Switch4' incorporates:
     *  Constant: '<S896>/Calib'
     *  Constant: '<S897>/Calib'
     */
    if (VeWTAC_b_TipInOut_detect)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipOut;
    }

    /* End of Switch: '<S875>/Switch4' */

    /* Product: '<S875>/Product2' incorporates:
     *  Constant: '<S898>/Calib'
     *  Product: '<S875>/Multiplication1'
     */
    VeWTAR_Cnt_DelayPredExtr_Single = (rtb_Sum3_gl * rtb_Switch13) / KeWTAR_t_dT;

    /* Chart: '<S875>/ConvertSingletoUint16_1' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayPredExtr_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_1);

    /* Gain: '<S901>/Gain' */
    VeWTAC_Cnt_DelayPredExtr = WTAR_ac_B.sf_ConvertSingletoUint16_1.Uint16_out;

    /* Sum: '<S876>/Sum' incorporates:
     *  Constant: '<S876>/Constant Value5'
     *  UnitDelay: '<S876>/Unit Delay3'
     */
    VeWTAC_i_WashCountIn = (uint16)(((uint32)WTAR_ac_DW.UnitDelay3_DSTATE_b) +
        1U);

    /* Switch: '<S1357>/Switch' incorporates:
     *  S-Function (sfix_bitop): '<S876>/Bitwise Logical Operator'
     */
    rtb_Switch_pb = (uint16)(VeWTAC_i_WashCountIn & ((uint16)31));

    /* Outputs for Atomic SubSystem: '<S876>/EdgeFalling' */
    /* Logic: '<S903>/AND' incorporates:
     *  UnitDelay: '<S903>/Unit Delay'
     */
    WTAR_ac_B.AND_f = (rtb_OR1_em && (WTAR_ac_DW.UnitDelay_DSTATE_nm));

    /* Update for UnitDelay: '<S903>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nm = rtb_TmpSignalConversionAtVeBRKR;

    /* End of Outputs for SubSystem: '<S876>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S876>/WashMemory' */
    /* Sum: '<S876>/Sum1' incorporates:
     *  Constant: '<S876>/Constant Value6'
     *  S-Function (sfix_bitop): '<S876>/Bitwise Logical Operator1'
     */
    WTAR_ac_WashMemory(WTAR_ac_B.AND_f, (uint16)(((uint32)
                         VeWTAC_Cnt_DelayPredExtr) + 1U), rtb_Switch_pb,
                       VeWTAC_M_ToCmnd_AftLashCtrl_PstFil, &WTAR_ac_B.WashMemory);

    /* End of Outputs for SubSystem: '<S876>/WashMemory' */

    /* Outputs for Atomic SubSystem: '<S876>/Count Down  Reset Enabled' */
    /* Switch: '<S902>/Switch1' incorporates:
     *  Constant: '<S902>/Constant Value'
     *  RelationalOperator: '<S902>/Greater  Than'
     *  Switch: '<S902>/Switch2'
     *  UnitDelay: '<S902>/Unit Delay'
     */
    if (WTAR_ac_B.AND_f)
    {
        /* Switch: '<S902>/Switch1' */
        rtb_Switch1_g = VeWTAC_Cnt_DelayPredExtr;
    }
    else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_hv) > 0)
    {
        /* Switch: '<S902>/Switch2' incorporates:
         *  Constant: '<S902>/Constant Value1'
         *  Sum: '<S902>/Subtraction'
         *  Switch: '<S902>/Switch1'
         *  UnitDelay: '<S902>/Unit Delay'
         */
        rtb_Switch1_g = (uint16)((sint32)(((sint32)
            WTAR_ac_DW.UnitDelay_DSTATE_hv) - 1));
    }
    else
    {
        /* Switch: '<S902>/Switch1' incorporates:
         *  Switch: '<S902>/Switch2'
         *  UnitDelay: '<S902>/Unit Delay'
         */
        rtb_Switch1_g = WTAR_ac_DW.UnitDelay_DSTATE_hv;
    }

    /* End of Switch: '<S902>/Switch1' */

    /* RelationalOperator: '<S902>/Greater  Than1' incorporates:
     *  Constant: '<S902>/Constant Value2'
     */
    VeWTAC_b_UseWashedToPrd = (((sint32)rtb_Switch1_g) > 0);

    /* Update for UnitDelay: '<S902>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hv = rtb_Switch1_g;

    /* End of Outputs for SubSystem: '<S876>/Count Down  Reset Enabled' */

    /* Switch: '<S876>/Switch1' */
    if (VeWTAC_b_UseWashedToPrd)
    {
        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.WashMemory.ArrayAssignment[0];
    }
    else
    {
        /* Assignment: '<S876>/Array Assignment' incorporates:
         *  S-Function (sfix_bitop): '<S876>/Bitwise Logical Operator1'
         */
        WTAR_ac_B.ArrayAssignment_b[rtb_Switch_pb] =
            VeWTAC_M_ToCmnd_AftLashCtrl_PstFil;

        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.ArrayAssignment_b[0];
    }

    /* End of Switch: '<S876>/Switch1' */

    /* Switch: '<S875>/Switch1' incorporates:
     *  Constant: '<S894>/Calib'
     *  Constant: '<S895>/Calib'
     */
    if (VeWTAC_b_TipInOut_detect)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipOut;
    }

    /* End of Switch: '<S875>/Switch1' */

    /* Product: '<S875>/Product1' incorporates:
     *  Constant: '<S898>/Calib'
     *  Product: '<S875>/Multiplication3'
     */
    VeWTAR_Cnt_DelayImmed_Single = (rtb_Switch13 * rtb_Sum3_gl) / KeWTAR_t_dT;

    /* Chart: '<S875>/ConvertSingletoUint16_2' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayImmed_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_2);

    /* Gain: '<S900>/Gain' */
    VeWTAC_Cnt_DelayImmed = WTAR_ac_B.sf_ConvertSingletoUint16_2.Uint16_out;

    /* Selector: '<S876>/Selector' incorporates:
     *  Logic: '<S876>/Logical3'
     *  Switch: '<S876>/Switch'
     */
    if (!rtb_TmpSignalConversionAtVeBRKR)
    {
        rtb_Switch1_g = VeWTAC_Cnt_DelayPredExtr;
    }
    else
    {
        rtb_Switch1_g = VeWTAC_Cnt_DelayImmed;
    }

    /* Outputs for Atomic SubSystem: '<S876>/GradientLimiter' */
    /* Sum: '<S904>/Sum2' incorporates:
     *  S-Function (sfix_bitop): '<S876>/Bitwise Logical Operator2'
     *  Selector: '<S876>/Selector'
     *  Sum: '<S876>/Sum2'
     *  UnitDelay: '<S904>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR = rtb_Switch1_hy_0[((uint16)(rtb_Switch_pb -
        rtb_Switch1_g)) & ((uint16)31)] - WTAR_ac_DW.UnitDelay_DSTATE_cy;

    /* Outputs for Atomic SubSystem: '<S904>/Limiter' */
    /* Switch: '<S907>/Switch1' incorporates:
     *  RelationalOperator: '<S907>/Relational Operator'
     */
    if (rtb_Sum2 < rtb_TmpSignalConversionAtVeBPCR)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = rtb_Sum2;
    }
    else
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = rtb_TmpSignalConversionAtVeBPCR;
    }

    /* End of Switch: '<S907>/Switch1' */

    /* Switch: '<S907>/Switch' incorporates:
     *  RelationalOperator: '<S907>/Relational Operator1'
     */
    if (rtb_Sum3_gl > rtb_Switch1_mh)
    {
        rtb_Switch1_mh = rtb_Sum3_gl;
    }

    /* End of Switch: '<S907>/Switch' */
    /* End of Outputs for SubSystem: '<S904>/Limiter' */

    /* Sum: '<S904>/Sum3' incorporates:
     *  UnitDelay: '<S904>/Unit Delay'
     */
    rtb_Sum2 = rtb_Switch1_mh + WTAR_ac_DW.UnitDelay_DSTATE_cy;

    /* Outputs for Atomic SubSystem: '<S904>/Limiter1' */
    /* Switch: '<S908>/Switch1' incorporates:
     *  Constant: '<S876>/Constant Value2'
     *  RelationalOperator: '<S908>/Relational Operator'
     */
    if (100000.0F < rtb_Sum2)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Sum2;
    }

    /* End of Switch: '<S908>/Switch1' */

    /* Switch: '<S908>/Switch' incorporates:
     *  RelationalOperator: '<S908>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S908>/Switch' */
        rtb_Sum2 = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S908>/Switch' */
        rtb_Sum2 = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S908>/Switch' */
    /* End of Outputs for SubSystem: '<S904>/Limiter1' */

    /* Update for UnitDelay: '<S904>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_cy = rtb_Sum2;

    /* End of Outputs for SubSystem: '<S876>/GradientLimiter' */

    /* If: '<S874>/If1' incorporates:
     *  Constant: '<S878>/Calib'
     */
    if (KeWTAR_b_EnblToDelayCushion)
    {
        /* Outputs for IfAction SubSystem: '<S874>/Enabled' incorporates:
         *  ActionPort: '<S877>/Action Port'
         */
        WTAR_ac_Enabled(VeWTAC_M_ToCmnd_AftLashCtrl_PstFil, rtb_Sum2,
                        VeWTAC_M_Min4Process, &rtb_Switch1_mh,
                        &WTAR_ac_DW.Enabled);

        /* End of Outputs for SubSystem: '<S874>/Enabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S874>/Pass' incorporates:
         *  ActionPort: '<S880>/Action Port'
         */
        WTAR_ac_Pass(rtb_Sum2, &rtb_Switch1_mh);

        /* End of Outputs for SubSystem: '<S874>/Pass' */
    }

    /* End of If: '<S874>/If1' */

    /* Outputs for Atomic SubSystem: '<S820>/Hysteresis' */
    /* Switch: '<S830>/Switch1' incorporates:
     *  Constant: '<S834>/Calib'
     *  RelationalOperator: '<S830>/Greater  Than'
     */
    if (rtb_Abs1 > KeWTAR_Pct_CurbClimbingGradeCheckRSP)
    {
        /* Switch: '<S830>/Switch1' incorporates:
         *  Constant: '<S830>/Constant Value'
         */
        rtb_NotEqual2_c = true;
    }
    else
    {
        /* Switch: '<S830>/Switch1' incorporates:
         *  Constant: '<S833>/Calib'
         *  RelationalOperator: '<S830>/Greater  Than1'
         *  UnitDelay: '<S830>/Unit Delay'
         */
        rtb_NotEqual2_c = ((rtb_Abs1 >= KeWTAR_Pct_CurbClimbingGradeCheckLSP) &&
                           (WTAR_ac_DW.UnitDelay_DSTATE_no));
    }

    /* End of Switch: '<S830>/Switch1' */

    /* Update for UnitDelay: '<S830>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_no = rtb_NotEqual2_c;

    /* End of Outputs for SubSystem: '<S820>/Hysteresis' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Logic: '<S820>/Logical' incorporates:
     *  Constant: '<S820>/Constant Value1'
     *  Constant: '<S820>/Constant Value2'
     *  Constant: '<S831>/Calib'
     *  Constant: '<S835>/Calib'
     *  Constant: '<S836>/Calib'
     *  Constant: '<S837>/Calib'
     *  Constant: '<S838>/Calib'
     *  Constant: '<S839>/Calib'
     *  Constant: '<S844>/Calib'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S820>/Logical1'
     *  Logic: '<S820>/Logical2'
     *  Logic: '<S820>/Logical3'
     *  Logic: '<S820>/Logical6'
     *  Logic: '<S820>/Logical7'
     *  RelationalOperator: '<S820>/Comparison1'
     *  RelationalOperator: '<S820>/Comparison10'
     *  RelationalOperator: '<S820>/Comparison11'
     *  RelationalOperator: '<S820>/Comparison2'
     *  RelationalOperator: '<S820>/Comparison3'
     *  RelationalOperator: '<S820>/Comparison7'
     *  RelationalOperator: '<S820>/Comparison9'
     */
    rtb_NotEqual2_c = ((((((rtb_TmpSignalConversionAtVeBTQR <
                            KeWTAR_M_CurbClimbingBreakCheck) && (rtb_Maximum_i <
                            KeWTAR_n_CurbClimbingSpeedCheck)) &&
                          (VeWTAI_Pct_AccelPedalEffPosition >
                           KeWTAR_Pct_CurbClimbingPedalCheck)) &&
                         (!rtb_NotEqual2_c)) &&
                        (((KeWTAR_b_EnableDforCurbClimbing) && (rtb_Switch1_hk[0]
                           > 0.0F)) || ((KeWTAR_b_EnableRforCurbClimbing) &&
                          (rtb_Switch1_hk[0] < 0.0F)))) && ((VeWTAI_T_MtrB_Temp <
                         KeWTAR_T_CurbClimbing_MtrBTempCheck) &&
                        (VeWTAI_T_MtrB_InvrtrTemp <
                         KeWTAR_T_CurbClimbing_InvrtrBTempCheck)));

    /* Outputs for Atomic SubSystem: '<S820>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S850>/EdgeRising' */
    /* Logic: '<S865>/AND' incorporates:
     *  Logic: '<S865>/OR1'
     *  UnitDelay: '<S865>/Unit Delay'
     */
    rtb_AND_p4 = (rtb_NotEqual2_c && (!WTAR_ac_DW.UnitDelay_DSTATE_jq));

    /* Update for UnitDelay: '<S865>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jq = rtb_NotEqual2_c;

    /* End of Outputs for SubSystem: '<S850>/EdgeRising' */

    /* Switch: '<S850>/Switch1' incorporates:
     *  Logic: '<S850>/OR'
     *  Logic: '<S850>/OR1'
     */
    if ((!rtb_NotEqual2_c) || rtb_AND_p4)
    {
        /* Switch: '<S850>/Switch1' incorporates:
         *  Constant: '<S850>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeBPCR = 0.0F;
    }
    else
    {
        /* Switch: '<S850>/Switch1' incorporates:
         *  Constant: '<S845>/Calib'
         *  Constant: '<S847>/Calib'
         *  MinMax: '<S850>/Minimum'
         *  Sum: '<S850>/Summation'
         *  UnitDelay: '<S850>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR = fminf(KeWTAR_t_CurbClimbingTorqChkTime,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_jy);
    }

    /* End of Switch: '<S850>/Switch1' */

    /* Logic: '<S850>/AND' incorporates:
     *  Constant: '<S845>/Calib'
     *  RelationalOperator: '<S850>/Greater  Than'
     */
    rtb_NotEqual2_c = (rtb_NotEqual2_c && (rtb_TmpSignalConversionAtVeBPCR >=
                        KeWTAR_t_CurbClimbingTorqChkTime));

    /* Update for UnitDelay: '<S850>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jy = rtb_TmpSignalConversionAtVeBPCR;

    /* End of Outputs for SubSystem: '<S820>/Turn On Delay Time1' */

    /* Outputs for Enabled SubSystem: '<S820>/TorqueReduction' incorporates:
     *  EnablePort: '<S848>/Enable'
     */
    if (rtb_NotEqual2_c)
    {
        /* Outputs for Atomic SubSystem: '<S848>/Count Down  Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S854>/EdgeRising' */
        /* Logic: '<S862>/OR1' incorporates:
         *  UnitDelay: '<S862>/Unit Delay'
         */
        rtb_AND_p4 = !WTAR_ac_DW.UnitDelay_DSTATE_bc;

        /* Update for UnitDelay: '<S862>/Unit Delay' incorporates:
         *  UnitDelay: '<S820>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_bc = WTAR_ac_DW.UnitDelay_DSTATE_ea;

        /* Switch: '<S854>/Switch1' incorporates:
         *  Constant: '<S854>/Constant Value'
         *  Logic: '<S862>/AND'
         *  RelationalOperator: '<S854>/Greater  Than'
         *  Switch: '<S854>/Switch2'
         *  UnitDelay: '<S820>/Unit Delay'
         *  UnitDelay: '<S854>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_ea) && rtb_AND_p4)
        {
            /* Switch: '<S854>/Switch1' incorporates:
             *  Constant: '<S857>/Calib'
             */
            rtb_Switch1_g = KeWTAR_Cnt_TorqShortTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_pg) > 0)
        {
            /* Switch: '<S854>/Switch2' incorporates:
             *  Constant: '<S854>/Constant Value1'
             *  Sum: '<S854>/Subtraction'
             *  Switch: '<S854>/Switch1'
             *  UnitDelay: '<S854>/Unit Delay'
             */
            rtb_Switch1_g = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_pg) - 1));
        }
        else
        {
            /* Switch: '<S854>/Switch1' incorporates:
             *  Switch: '<S854>/Switch2'
             *  UnitDelay: '<S854>/Unit Delay'
             */
            rtb_Switch1_g = WTAR_ac_DW.UnitDelay_DSTATE_pg;
        }

        /* End of Switch: '<S854>/Switch1' */
        /* End of Outputs for SubSystem: '<S854>/EdgeRising' */

        /* Update for UnitDelay: '<S854>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_pg = rtb_Switch1_g;

        /* End of Outputs for SubSystem: '<S848>/Count Down  Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S848>/Count Down  Reset Trigger Enabled1' */
        /* Outputs for Atomic SubSystem: '<S855>/EdgeRising' */
        /* Logic: '<S863>/OR1' incorporates:
         *  UnitDelay: '<S863>/Unit Delay'
         */
        rtb_AND_p4 = !WTAR_ac_DW.UnitDelay_DSTATE_ko;

        /* Update for UnitDelay: '<S863>/Unit Delay' incorporates:
         *  UnitDelay: '<S820>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_ko = WTAR_ac_DW.UnitDelay_DSTATE_ea;

        /* Switch: '<S855>/Switch1' incorporates:
         *  Constant: '<S855>/Constant Value'
         *  Logic: '<S863>/AND'
         *  RelationalOperator: '<S855>/Greater  Than'
         *  Switch: '<S855>/Switch2'
         *  UnitDelay: '<S820>/Unit Delay'
         *  UnitDelay: '<S855>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_ea) && rtb_AND_p4)
        {
            /* Switch: '<S855>/Switch1' incorporates:
             *  Constant: '<S856>/Calib'
             */
            rtb_Switch_pb = KeWTAR_Cnt_TorqLongTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_o1s) > 0)
        {
            /* Switch: '<S855>/Switch2' incorporates:
             *  Constant: '<S855>/Constant Value1'
             *  Sum: '<S855>/Subtraction'
             *  Switch: '<S855>/Switch1'
             *  UnitDelay: '<S855>/Unit Delay'
             */
            rtb_Switch_pb = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_o1s) - 1));
        }
        else
        {
            /* Switch: '<S855>/Switch1' incorporates:
             *  Switch: '<S855>/Switch2'
             *  UnitDelay: '<S855>/Unit Delay'
             */
            rtb_Switch_pb = WTAR_ac_DW.UnitDelay_DSTATE_o1s;
        }

        /* End of Switch: '<S855>/Switch1' */
        /* End of Outputs for SubSystem: '<S855>/EdgeRising' */

        /* RelationalOperator: '<S855>/Greater  Than1' incorporates:
         *  Constant: '<S855>/Constant Value2'
         */
        WTAR_ac_B.GreaterThan1 = (((sint32)rtb_Switch_pb) > 0);

        /* Update for UnitDelay: '<S855>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_o1s = rtb_Switch_pb;

        /* End of Outputs for SubSystem: '<S848>/Count Down  Reset Trigger Enabled1' */

        /* Outputs for Atomic SubSystem: '<S848>/Count Down  Reset Trigger Enabled' */
        /* Switch: '<S848>/Switch2' incorporates:
         *  Constant: '<S854>/Constant Value2'
         *  RelationalOperator: '<S854>/Greater  Than1'
         */
        if (((sint32)rtb_Switch1_g) > 0)
        {
            /* Switch: '<S848>/Switch1' incorporates:
             *  Constant: '<S848>/Constant Value'
             *  RelationalOperator: '<S848>/Comparison1'
             */
            if (rtb_Switch1_mh >= 1.0F)
            {
                /* Switch: '<S848>/Switch2' incorporates:
                 *  Constant: '<S858>/Calib'
                 *  Constant: '<S860>/Calib'
                 *  MinMax: '<S848>/MinMax1'
                 *  Sum: '<S848>/Sum1'
                 *  Switch: '<S848>/Switch1'
                 */
                WTAR_ac_B.Switch2 = fmaxf(KeWTAR_M_TorqCompareforCurbClimbingD,
                    rtb_Switch1_mh - KeWTAR_M_TorqReduceCurbClimbingD);
            }
            else
            {
                /* Switch: '<S848>/Switch2' incorporates:
                 *  Constant: '<S859>/Calib'
                 *  Constant: '<S861>/Calib'
                 *  MinMax: '<S848>/MinMax2'
                 *  Sum: '<S848>/Sum2'
                 *  Switch: '<S848>/Switch1'
                 */
                WTAR_ac_B.Switch2 = fminf(rtb_Switch1_mh +
                    KeWTAR_M_TorqReduceCurbClimbingR,
                    KeWTAR_M_TorqCompareforCurbClimbingR);
            }

            /* End of Switch: '<S848>/Switch1' */
        }
        else
        {
            /* Switch: '<S848>/Switch2' */
            WTAR_ac_B.Switch2 = rtb_Switch1_mh;
        }

        /* End of Switch: '<S848>/Switch2' */
        /* End of Outputs for SubSystem: '<S848>/Count Down  Reset Trigger Enabled' */
    }

    /* End of Outputs for SubSystem: '<S820>/TorqueReduction' */

    /* Logic: '<S820>/Logical4' */
    rtb_AND_p4 = (rtb_NotEqual2_c && (WTAR_ac_B.GreaterThan1));

    /* Outputs for Atomic SubSystem: '<S829>/EdgeRising' */
    /* Logic: '<S851>/OR1' incorporates:
     *  UnitDelay: '<S851>/Unit Delay'
     */
    rtb_OR1_em = !WTAR_ac_DW.UnitDelay_DSTATE_ium;

    /* Update for UnitDelay: '<S851>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ium = rtb_AND_p4;

    /* Switch: '<S829>/Switch1' incorporates:
     *  Logic: '<S851>/AND'
     */
    if (rtb_AND_p4 && rtb_OR1_em)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = rtb_Switch1_mh;
    }
    else
    {
        /* Switch: '<S319>/Switch2' incorporates:
         *  UnitDelay: '<S829>/Unit Delay1'
         */
        rtb_Sum3_gl = WTAR_ac_DW.UnitDelay1_DSTATE_e;
    }

    /* End of Switch: '<S829>/Switch1' */
    /* End of Outputs for SubSystem: '<S829>/EdgeRising' */

    /* Switch: '<S829>/Switch' */
    if (rtb_AND_p4)
    {
        rtb_TmpSignalConversionAtVeBPCR = WTAR_ac_B.Switch2;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR = rtb_Switch1_mh;
    }

    /* End of Switch: '<S829>/Switch' */

    /* Sum: '<S829>/Sum4' */
    rtb_TmpSignalConversionAtVeBPCR -= rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S829>/Limiter' */
    /* Switch: '<S852>/Switch1' incorporates:
     *  RelationalOperator: '<S852>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeSC_c < rtb_TmpSignalConversionAtVeBPCR)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeSC_c;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeBPCR;
    }

    /* End of Switch: '<S852>/Switch1' */

    /* Switch: '<S852>/Switch' incorporates:
     *  RelationalOperator: '<S852>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_TmpSignalConversionAtVeSC_j)
    {
        rtb_TmpSignalConversionAtVeSC_j = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S852>/Switch' */
    /* End of Outputs for SubSystem: '<S829>/Limiter' */

    /* Sum: '<S829>/Sum1' */
    rtb_TmpSignalConversionAtVeBPCR = rtb_TmpSignalConversionAtVeSC_j +
        rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S829>/Limiter1' */
    /* Switch: '<S853>/Switch1' incorporates:
     *  Constant: '<S829>/Constant Value1'
     *  RelationalOperator: '<S853>/Relational Operator'
     */
    if (100000.0F < rtb_TmpSignalConversionAtVeBPCR)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeBPCR;
    }

    /* End of Switch: '<S853>/Switch1' */

    /* Switch: '<S853>/Switch' incorporates:
     *  RelationalOperator: '<S853>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S853>/Switch' */
        rtb_TmpSignalConversionAtVeBPCR = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S853>/Switch' */
        rtb_TmpSignalConversionAtVeBPCR = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S853>/Switch' */
    /* End of Outputs for SubSystem: '<S829>/Limiter1' */

    /* Switch: '<S820>/Switch2' incorporates:
     *  Logic: '<S820>/Logical9'
     *  UnitDelay: '<S820>/Unit Delay1'
     */
    if (rtb_AND_p4 || (WTAR_ac_DW.UnitDelay1_DSTATE_n))
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeBPCR;
    }
    else
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch1_mh;
    }

    /* End of Switch: '<S820>/Switch2' */

    /* RelationalOperator: '<S820>/Comparison8' incorporates:
     *  Abs: '<S820>/Abs2'
     *  Constant: '<S832>/Calib'
     *  Sum: '<S820>/Sum1'
     */
    VeWTAC_b_CurbeClimbing_TorqModulated = (fabsf(VeWTAC_M_ToPrdt_xSEM -
        rtb_Switch1_mh) > KeWTAR_M_CurbClimbing_TorqRecoverThrsh);

    /* Switch: '<S876>/Switch4' incorporates:
     *  Constant: '<S876>/Constant Value8'
     *  RelationalOperator: '<S876>/Comparison3'
     */
    if (((sint32)VeWTAC_i_WashCountIn) > 65534)
    {
        /* Switch: '<S876>/Switch4' incorporates:
         *  Constant: '<S876>/Constant Value7'
         */
        VeWTAC_i_WashCountOut = 0U;
    }
    else
    {
        /* Switch: '<S876>/Switch4' */
        VeWTAC_i_WashCountOut = VeWTAC_i_WashCountIn;
    }

    /* End of Switch: '<S876>/Switch4' */

    /* UnitDelay: '<S311>/Unit Delay1' */
    VeWTAC_M_OvrRev_PIDTqOutTrqReqHTDR = WTAR_ac_DW.UnitDelay1_DSTATE_f;

    /* Switch: '<S827>/Switch2' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S827>/Switch2' incorporates:
         *  MinMax: '<S827>/MinMax2'
         */
        VeWTAC_M_MainFilter_Lasch_TrqReset = fmaxf(fmaxf
            (VeWTAI_M_OutTorqReqModTactMax, VeWTAC_M_SumMaxTrqDsrd),
            VeWTAC_M_OvrRev_PIDTqOutTrqReqHTDR);
    }
    else
    {
        /* Switch: '<S827>/Switch2' incorporates:
         *  MinMax: '<S827>/MinMax1'
         */
        VeWTAC_M_MainFilter_Lasch_TrqReset = fminf(fminf
            (VeWTAI_M_OutTorqReqModTactMax, VeWTAC_M_SumMaxTrqDsrd),
            VeWTAC_M_OvrRev_PIDTqOutTrqReqHTDR);
    }

    /* End of Switch: '<S827>/Switch2' */

    /* Switch: '<S827>/Switch1' incorporates:
     *  Constant: '<S986>/Calib'
     */
    if (KeWTAR_b_ModHH_FilterRst_Dsbl)
    {
        /* Switch: '<S827>/Switch1' incorporates:
         *  MinMax: '<S827>/MinMax3'
         */
        rtb_TmpSignalConversionAtVeCT_n = fmaxf
            (VeWTAC_M_MainFilter_Lasch_TrqReset, rtb_TmpSignalConversionAtVeAX_k);
    }
    else
    {
        /* Switch: '<S827>/Switch1' incorporates:
         *  MinMax: '<S827>/MinMax3'
         *  MinMax: '<S827>/MinMax4'
         */
        rtb_TmpSignalConversionAtVeCT_n = fminf(fmaxf
            (VeWTAC_M_MainFilter_Lasch_TrqReset, rtb_TmpSignalConversionAtVeAX_k),
            rtb_TmpSignalConversionAtVeAXLR);
    }

    /* End of Switch: '<S827>/Switch1' */

    /* Switch: '<S914>/Switch2' incorporates:
     *  RelationalOperator: '<S914>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeCT_n > VeWTAC_M_AfterMainFilter)
    {
        /* Update for UnitDelay: '<S914>/Unit Delay1' incorporates:
         *  MinMax: '<S914>/MinMax2'
         *  Switch: '<S914>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_h = fminf
            (VeWTAC_M_ToCmnd_AftLashCtrl_PstFil, rtb_TmpSignalConversionAtVeCT_n);
    }
    else
    {
        /* Update for UnitDelay: '<S914>/Unit Delay1' incorporates:
         *  Switch: '<S914>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_h = VeWTAC_M_ToCmnd_AftLashCtrl_PstFil;
    }

    /* End of Switch: '<S914>/Switch2' */

    /* Switch: '<S949>/Switch1' incorporates:
     *  RelationalOperator: '<S949>/Relational Operator'
     *  Switch: '<S949>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeCT_n > VeWTAC_M_PostRateLim)
    {
        /* Update for UnitDelay: '<S949>/Unit Delay4' incorporates:
         *  MinMax: '<S949>/MinMax1'
         *  Switch: '<S949>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_k = fminf(rtb_TmpSignalConversionAtVeCT_n,
            VeWTAC_M_PostRateLim);

        /* Update for UnitDelay: '<S949>/Unit Delay1' incorporates:
         *  MinMax: '<S949>/MinMax2'
         *  Switch: '<S949>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_k = fminf(VeWTAC_M_AfterMainFilter,
            rtb_TmpSignalConversionAtVeCT_n);
    }
    else
    {
        /* Update for UnitDelay: '<S949>/Unit Delay4' incorporates:
         *  Switch: '<S949>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_k = VeWTAC_M_PostRateLim;

        /* Update for UnitDelay: '<S949>/Unit Delay1' incorporates:
         *  Switch: '<S949>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_k = VeWTAC_M_AfterMainFilter;
    }

    /* End of Switch: '<S949>/Switch1' */

    /* Gain: '<S826>/Gain' */
    VeWTAC_M_ToCmnd_PstFil_HTDR = VeWTAC_M_ToPrdt_xSEM;

    /* Outputs for Atomic SubSystem: '<S987>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1019>/EdgeRising' */
    /* Logic: '<S1034>/AND' incorporates:
     *  Logic: '<S1034>/OR1'
     *  UnitDelay: '<S1034>/Unit Delay'
     */
    rtb_AND_p4 = !WTAR_ac_DW.UnitDelay_DSTATE_lg;

    /* Update for UnitDelay: '<S1034>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_lg = true;

    /* End of Outputs for SubSystem: '<S1019>/EdgeRising' */

    /* Switch: '<S1019>/Switch1' incorporates:
     *  Logic: '<S1019>/OR'
     */
    if (rtb_AND_p4)
    {
        /* Switch: '<S1019>/Switch1' incorporates:
         *  Constant: '<S1019>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeCT_n = 0.0F;
    }
    else
    {
        /* Switch: '<S1019>/Switch1' incorporates:
         *  Constant: '<S1016>/Calib'
         *  Constant: '<S1017>/Calib'
         *  MinMax: '<S1019>/Minimum'
         *  Sum: '<S1019>/Summation'
         *  UnitDelay: '<S1019>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCT_n = fminf
            (KeWTAR_t_CurbClimbing_GradeUpdateDelay, KeWTAR_t_dT +
             WTAR_ac_DW.UnitDelay_DSTATE_bq);
    }

    /* End of Switch: '<S1019>/Switch1' */

    /* Update for UnitDelay: '<S1019>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_bq = rtb_TmpSignalConversionAtVeCT_n;

    /* Switch: '<S987>/Switch3' incorporates:
     *  Constant: '<S1016>/Calib'
     *  Constant: '<S6>/VeVLDR_Pct_GradeCurrent'
     *  DataStoreWrite: '<S987>/Data Store Write'
     *  RelationalOperator: '<S1019>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeCT_n >=
            KeWTAR_t_CurbClimbing_GradeUpdateDelay)
    {
        WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM4Ae = 0.0F;
    }

    /* End of Switch: '<S987>/Switch3' */
    /* End of Outputs for SubSystem: '<S987>/Turn On Delay Time' */

    /* Abs: '<S987>/Abs1' incorporates:
     *  DataStoreWrite: '<S987>/Data Store Write'
     */
    rtb_Abs1_gm = fabsf(WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM4Ae);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Switch: '<S987>/Switch' incorporates:
     *  Constant: '<S987>/Constant Value11'
     *  Gain: '<S267>/Gain'
     *  RelationalOperator: '<S987>/Comparison4'
     *  Switch: '<S987>/Switch1'
     */
    if (rtb_Switch1_hk[0] > 0.0F)
    {
        /* Switch: '<S987>/Switch' incorporates:
         *  Constant: '<S1012>/Calib'
         */
        rtb_Switch_fq = KeWTAR_dM_CurbClimbing_RtLmtRise_D;

        /* Switch: '<S987>/Switch1' incorporates:
         *  Constant: '<S1010>/Calib'
         */
        rtb_Switch1_ee = KeWTAR_dM_CurbClimbing_RtLmtDrop_D;
    }
    else
    {
        /* Switch: '<S987>/Switch' incorporates:
         *  Constant: '<S1013>/Calib'
         */
        rtb_Switch_fq = KeWTAR_dM_CurbClimbing_RtLmtRise_R;

        /* Switch: '<S987>/Switch1' incorporates:
         *  Constant: '<S1011>/Calib'
         */
        rtb_Switch1_ee = KeWTAR_dM_CurbClimbing_RtLmtDrop_R;
    }

    /* End of Switch: '<S987>/Switch' */

    /* Logic: '<S323>/Logical1' incorporates:
     *  Constant: '<S988>/Constant'
     *  Constant: '<S989>/Constant'
     *  Constant: '<S992>/Calib'
     *  Logic: '<S323>/AND3'
     *  Logic: '<S323>/AND4'
     *  Logic: '<S323>/AND5'
     *  RelationalOperator: '<S323>/Comparison2'
     *  RelationalOperator: '<S323>/Comparison3'
     *  UnitDelay: '<S323>/Unit Delay3'
     */
    rtb_AND_p4 = (((((((uint32)rtb_TmpSignalConversionAtVeDT_o) ==
                      CeDTRR_e_Level2) || (((uint32)
                       rtb_TmpSignalConversionAtVeD_k5) == CeDTRR_e_Level2)) &&
                    (KeWTAR_b_FilLv2_En_Diff)) ||
                   ((rtb_TmpSignalConversionAtVeCCTR &&
                     (WTAR_ac_DW.UnitDelay3_DSTATE_n)) &&
                    rtb_TmpSignalConversionAtVeSR_f)) ||
                  (VaWTAC_b_CreepActDsbFil[3]));

    /* RelationalOperator: '<S995>/Not Equal2' incorporates:
     *  Constant: '<S1077>/Constant'
     */
    rtb_OR1_em = (((uint32)rtb_TmpSignalConversionAtVeBR_d) !=
                  CeBRKR_e_BrkApplied);

    /* Outputs for Atomic SubSystem: '<S995>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S1098>/EdgeRising' */
    /* Logic: '<S1110>/AND' incorporates:
     *  Logic: '<S1110>/OR1'
     *  UnitDelay: '<S1110>/Unit Delay'
     */
    rtb_AND_a2v = (rtb_OR1_em && (!WTAR_ac_DW.UnitDelay_DSTATE_l4));

    /* Update for UnitDelay: '<S1110>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_l4 = rtb_OR1_em;

    /* End of Outputs for SubSystem: '<S1098>/EdgeRising' */

    /* Switch: '<S1098>/Switch1' incorporates:
     *  Logic: '<S1098>/OR'
     *  Logic: '<S1098>/OR1'
     */
    if ((!rtb_OR1_em) || rtb_AND_a2v)
    {
        /* Switch: '<S1098>/Switch1' incorporates:
         *  Constant: '<S1098>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeCT_n = 0.0F;
    }
    else
    {
        /* Switch: '<S1098>/Switch1' incorporates:
         *  Constant: '<S1094>/Calib'
         *  Constant: '<S1095>/Calib'
         *  MinMax: '<S1098>/Minimum'
         *  Sum: '<S1098>/Summation'
         *  UnitDelay: '<S1098>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCT_n = fminf(KeWTAR_t_BrkAplyd_ZrPdLsh_Delay,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_lh);
    }

    /* End of Switch: '<S1098>/Switch1' */

    /* Update for UnitDelay: '<S1098>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_lh = rtb_TmpSignalConversionAtVeCT_n;

    /* Logic: '<S995>/AND2' incorporates:
     *  Constant: '<S1087>/Calib'
     *  Constant: '<S1088>/Calib'
     *  Constant: '<S1092>/Calib'
     *  Constant: '<S1093>/Calib'
     *  Constant: '<S1094>/Calib'
     *  Logic: '<S1098>/AND'
     *  Logic: '<S995>/AND3'
     *  RelationalOperator: '<S1098>/Greater  Than'
     *  RelationalOperator: '<S995>/Greater  Than4'
     *  RelationalOperator: '<S995>/Greater  Than5'
     */
    VeWTAC_b_ZeroPedalLashCtrl_PstFilAeC =
        (((((KeWTAR_b_BrkPdl4ZeroPedalLash_enable) || (rtb_OR1_em &&
             (rtb_TmpSignalConversionAtVeCT_n >= KeWTAR_t_BrkAplyd_ZrPdLsh_Delay)))
           && (KeWTAR_b_ZeroPedalLash_Enbl)) &&
          (VeWTAI_Pct_AccelPedalEffPosition < KeWTAR_Pct_MaxPdl_ZeroPedal)) &&
         (rtb_TmpSignalConversionAtVeCSVR < KeWTAR_n_MaxNo_ZeroPdlLsh));

    /* End of Outputs for SubSystem: '<S995>/Turn On Delay Time1' */

    /* Switch: '<S995>/Switch2' incorporates:
     *  Constant: '<S1078>/Calib'
     */
    if (HeWTAR_b_ToCLFast_InLash)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S995>/Add'
         *  UnitDelay: '<S323>/Unit Delay2'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeAX_b +
            WTAR_ac_DW.UnitDelay2_DSTATE_k;
    }
    else
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  UnitDelay: '<S323>/Unit Delay2'
         */
        VeWTAC_M_ToPrdt_xSEM = WTAR_ac_DW.UnitDelay2_DSTATE_k;
    }

    /* End of Switch: '<S995>/Switch2' */

    /* Switch: '<S1080>/Switch1' incorporates:
     *  Constant: '<S1076>/Constant'
     *  Constant: '<S1085>/Calib'
     *  Constant: '<S1091>/Calib'
     *  RelationalOperator: '<S995>/Greater  Than3'
     *  RelationalOperator: '<S995>/Not Equal'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeHADR) !=
                            CeHADR_e_LashStPos);
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq < KeWTAR_M_NegLashTrqThresh);
    }

    /* End of Switch: '<S1080>/Switch1' */

    /* Logic: '<S995>/AND1' incorporates:
     *  Constant: '<S1083>/Calib'
     *  RelationalOperator: '<S995>/Greater  Than2'
     */
    VeWTAC_b_NegLashCntrl_PstFilAeC = (rtb_Comparison12 && (VeWTAC_M_ToPrdt_xSEM
        > KeWTAR_M_FrmNegRtLimTrqThresh));

    /* Switch: '<S1079>/Switch1' incorporates:
     *  Constant: '<S1075>/Constant'
     *  Constant: '<S1086>/Calib'
     *  Constant: '<S1091>/Calib'
     *  RelationalOperator: '<S995>/Greater  Than1'
     *  RelationalOperator: '<S995>/Not Equal1'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeHADR) !=
                            CeHADR_e_LashStNeg);
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq > KeWTAR_M_PosLashTrqThresh);
    }

    /* End of Switch: '<S1079>/Switch1' */

    /* Logic: '<S995>/AND' incorporates:
     *  Constant: '<S1084>/Calib'
     *  RelationalOperator: '<S995>/Greater  Than'
     */
    VeWTAC_b_PosLashCntrl_PstFilAeC = (rtb_Comparison12 && (VeWTAC_M_ToPrdt_xSEM
        < KeWTAR_M_FrmPosRtLimTrqThresh));

    /* UnitDelay: '<S995>/Unit Delay' */
    rtb_TmpSignalConversionAtVeCT_n = WTAR_ac_DW.UnitDelay_DSTATE_a4;

    /* Switch: '<S323>/Switch' incorporates:
     *  Constant: '<S993>/Calib'
     *  Logic: '<S323>/AND1'
     */
    if ((VaWTAC_b_CreepActDsbFil[3]) && (KeWTAR_b_MinPedalChngAeC))
    {
        /* Switch: '<S323>/Switch' */
        rtb_TmpSignalConversionAtVeCT_m = VeWTAC_M_Min4ProcessMainFilter;
    }
    else
    {
        /* Switch: '<S323>/Switch' */
        rtb_TmpSignalConversionAtVeCT_m = VeWTAC_M_Min4Process_Diff;
    }

    /* End of Switch: '<S323>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* RelationalOperator: '<S1116>/Comparison11' incorporates:
     *  Constant: '<S1116>/Constant Value1'
     *  Gain: '<S267>/Gain'
     */
    rtb_OR1_em = (rtb_Switch1_hk[0] >= 0.0F);

    /* Switch: '<S1116>/Switch3' incorporates:
     *  Constant: '<S1116>/Constant Value3'
     *  RelationalOperator: '<S1116>/Comparison1'
     *  Switch: '<S1116>/Switch1'
     */
    if (rtb_MinMax_n < 0.0F)
    {
        /* Switch: '<S1116>/Switch3' incorporates:
         *  Product: '<S1116>/Product1'
         */
        VeWTAC_M_ToRtLmt_LUAeC = -rtb_UnitDelay_co;
    }
    else if (rtb_OR1_em)
    {
        /* Switch: '<S1116>/Switch1' incorporates:
         *  Switch: '<S1116>/Switch3'
         */
        VeWTAC_M_ToRtLmt_LUAeC = rtb_TmpSignalConversionAtVeSC_f;
    }
    else
    {
        /* Switch: '<S1116>/Switch3' incorporates:
         *  Product: '<S1116>/Product1'
         */
        VeWTAC_M_ToRtLmt_LUAeC = -rtb_UnitDelay_co;
    }

    /* End of Switch: '<S1116>/Switch3' */

    /* Switch: '<S1116>/Switch2' */
    if (rtb_OR1_em)
    {
        /* Switch: '<S1116>/Switch2' */
        VeWTAC_M_ToRtLmt_LDAeC = rtb_UnitDelay_co;
    }
    else
    {
        /* Switch: '<S1116>/Switch2' incorporates:
         *  Product: '<S1116>/Product'
         */
        VeWTAC_M_ToRtLmt_LDAeC = -rtb_TmpSignalConversionAtVeSC_f;
    }

    /* End of Switch: '<S1116>/Switch2' */

    /* UnitDelay: '<S1117>/Unit Delay' */
    VeWTAC_M_ToPrdt_xSEM = WTAR_ac_DW.UnitDelay_DSTATE_b;

    /* Switch: '<S1117>/Switch3' */
    if (rtb_AND_p4)
    {
        /* Switch: '<S1117>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_MinMax_n;
    }
    else
    {
        /* Sum: '<S1117>/Sum2' */
        rtb_Sum3_gl = rtb_MinMax_n - VeWTAC_M_ToPrdt_xSEM;

        /* Outputs for Atomic SubSystem: '<S1117>/Limiter' */
        /* Switch: '<S1145>/Switch1' incorporates:
         *  RelationalOperator: '<S1145>/Relational Operator'
         */
        if (VeWTAC_M_ToRtLmt_LUAeC < rtb_Sum3_gl)
        {
            /* Switch: '<S1145>/Switch1' */
            rtb_Sum3_gl = VeWTAC_M_ToRtLmt_LUAeC;
        }

        /* End of Switch: '<S1145>/Switch1' */

        /* Switch: '<S1145>/Switch' incorporates:
         *  RelationalOperator: '<S1145>/Relational Operator1'
         */
        if (rtb_Sum3_gl <= VeWTAC_M_ToRtLmt_LDAeC)
        {
            rtb_Sum3_gl = VeWTAC_M_ToRtLmt_LDAeC;
        }

        /* End of Switch: '<S1145>/Switch' */
        /* End of Outputs for SubSystem: '<S1117>/Limiter' */

        /* Switch: '<S1117>/Switch3' incorporates:
         *  Sum: '<S1117>/Sum3'
         */
        VeWTAC_M_ToPrdt_xSEM += rtb_Sum3_gl;
    }

    /* End of Switch: '<S1117>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S1117>/Limiter1' */
    /* Switch: '<S1146>/Switch1' incorporates:
     *  Constant: '<S1117>/Constant Value3'
     *  RelationalOperator: '<S1146>/Relational Operator'
     */
    if (100000.0F < VeWTAC_M_ToPrdt_xSEM)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S1146>/Switch1' */

    /* Switch: '<S1146>/Switch' incorporates:
     *  RelationalOperator: '<S1146>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_TmpSignalConversionAtVeCT_m)
    {
        /* Switch: '<S1146>/Switch' */
        VeWTAC_M_PostRateLimAeC = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1146>/Switch' */
        VeWTAC_M_PostRateLimAeC = rtb_TmpSignalConversionAtVeCT_m;
    }

    /* End of Switch: '<S1146>/Switch' */
    /* End of Outputs for SubSystem: '<S1117>/Limiter1' */

    /* Sum: '<S1113>/Subtraction1' incorporates:
     *  UnitDelay: '<S996>/Unit Delay1'
     */
    VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_PostRateLimAeC -
        WTAR_ac_DW.UnitDelay1_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S1113>/Hysteresis' */
    /* Switch: '<S1119>/Switch1' incorporates:
     *  Constant: '<S1121>/Calib'
     *  RelationalOperator: '<S1119>/Greater  Than'
     */
    if (VeWTAC_M_ToPrdt_xSEM > KeWTAR_M_Resp_HystPos)
    {
        /* Switch: '<S1119>/Switch1' incorporates:
         *  Constant: '<S1119>/Constant Value'
         */
        rtb_OR1_em = true;
    }
    else
    {
        /* Switch: '<S1119>/Switch1' incorporates:
         *  Constant: '<S1120>/Calib'
         *  RelationalOperator: '<S1119>/Greater  Than1'
         *  UnitDelay: '<S1119>/Unit Delay'
         */
        rtb_OR1_em = ((VeWTAC_M_ToPrdt_xSEM >= KeWTAR_M_Resp_HystNeg) &&
                      (WTAR_ac_DW.UnitDelay_DSTATE_ly2));
    }

    /* End of Switch: '<S1119>/Switch1' */

    /* Update for UnitDelay: '<S1119>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ly2 = rtb_OR1_em;

    /* End of Outputs for SubSystem: '<S1113>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S1040>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S1113>/EdgeFalling' */
    /* Logic: '<S1118>/OR1' incorporates:
     *  Logic: '<S1067>/OR1'
     */
    rtb_AND_ok = !rtb_AND_p4;

    /* End of Outputs for SubSystem: '<S1040>/EdgeFalling' */

    /* Logic: '<S1118>/AND' incorporates:
     *  Logic: '<S1118>/OR1'
     *  UnitDelay: '<S1118>/Unit Delay'
     */
    rtb_AND_a2v = (rtb_AND_ok && (WTAR_ac_DW.UnitDelay_DSTATE_gr));

    /* Update for UnitDelay: '<S1118>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_gr = rtb_AND_p4;

    /* End of Outputs for SubSystem: '<S1113>/EdgeFalling' */

    /* Logic: '<S1113>/Logical' */
    rtb_AND_a2v = (rtb_AND_a2v || rtb_AND_p4);

    /* Switch: '<S1113>/Switch4' incorporates:
     *  Constant: '<S1122>/Calib'
     */
    if (KeWTAR_b_FilCoeff_SrcSel)
    {
        /* Switch: '<S1113>/Switch4' incorporates:
         *  Abs: '<S1113>/Abs'
         *  Sum: '<S1113>/Subtraction2'
         */
        VeWTAC_M_ToPrdt_xSEM = VeWTAR_M_Max4Process - fabsf
            (VeWTAC_M_PostRateLimAeC);
    }
    else
    {
        /* Switch: '<S1113>/Switch4' */
        VeWTAC_M_ToPrdt_xSEM = VeWTAI_Pct_AccelPedalEffPosition;
    }

    /* End of Switch: '<S1113>/Switch4' */

    /* If: '<S1113>/If' */
    rtb_Comparison12 = !rtb_AND_a2v;
    if (rtb_OR1_em && rtb_Comparison12)
    {
        /* Outputs for IfAction SubSystem: '<S1113>/PosSlowResp' incorporates:
         *  ActionPort: '<S1127>/Action Port'
         */
        WTAR_ac_PosSlowResp(VeWTAC_k_PosKD, VeWTAC_M_ToPrdt_xSEM, VeWTAC_k_PosKT,
                            (&(VeWTAC_k_KDFilterCoeffsAeC)),
                            (&(VeWTAC_k_KTFilterCoeffsAeC)));

        /* End of Outputs for SubSystem: '<S1113>/PosSlowResp' */
    }
    else if (rtb_OR1_em && rtb_AND_a2v)
    {
        /* Outputs for IfAction SubSystem: '<S1113>/PosFastResp' incorporates:
         *  ActionPort: '<S1126>/Action Port'
         */
        WTAR_ac_PosFastResp((&(VeWTAC_k_KDFilterCoeffsAeC)),
                            (&(VeWTAC_k_KTFilterCoeffsAeC)));

        /* End of Outputs for SubSystem: '<S1113>/PosFastResp' */
    }
    else
    {
        rtb_OR1_a5 = !rtb_OR1_em;
        if (rtb_OR1_a5 && rtb_Comparison12)
        {
            /* Outputs for IfAction SubSystem: '<S1113>/NegSlowResp' incorporates:
             *  ActionPort: '<S1125>/Action Port'
             */
            WTAR_ac_NegSlowResp(VeWTAC_k_NegKD, VeWTAC_M_ToPrdt_xSEM,
                                VeWTAC_k_NegKT, (&(VeWTAC_k_KDFilterCoeffsAeC)),
                                (&(VeWTAC_k_KTFilterCoeffsAeC)));

            /* End of Outputs for SubSystem: '<S1113>/NegSlowResp' */
        }
        else
        {
            if (rtb_OR1_a5 && rtb_AND_a2v)
            {
                /* Outputs for IfAction SubSystem: '<S1113>/NegFastResp' incorporates:
                 *  ActionPort: '<S1124>/Action Port'
                 */
                WTAR_ac_NegFastResp((&(VeWTAC_k_KDFilterCoeffsAeC)),
                                    (&(VeWTAC_k_KTFilterCoeffsAeC)));

                /* End of Outputs for SubSystem: '<S1113>/NegFastResp' */
            }
        }
    }

    /* End of If: '<S1113>/If' */

    /* Product: '<S1114>/Multiplication3' incorporates:
     *  Constant: '<S1115>/Calib'
     *  Sum: '<S1114>/Subtraction1'
     *  UnitDelay: '<S1114>/Unit Delay2'
     *  UnitDelay: '<S1114>/Unit Delay4'
     */
    VeWTAC_M_ToPrdt_xSEM = (WTAR_ac_DW.UnitDelay4_DSTATE_n -
                            WTAR_ac_DW.UnitDelay2_DSTATE_b) * KeWTAR_t_dT;

    /* MinMax: '<S1114>/Maximum' incorporates:
     *  Constant: '<S1115>/Calib'
     */
    rtb_Sum3_gl = fmaxf(VeWTAC_k_KTFilterCoeffsAeC, KeWTAR_t_dT);

    /* Outputs for Atomic SubSystem: '<S1114>/Protected Division' */
    /* Switch: '<S1142>/Switch1' incorporates:
     *  Constant: '<S1142>/Constant Value'
     *  Constant: '<S1142>/Constant Value1'
     *  Constant: '<S1142>/Constant Value2'
     *  Constant: '<S1142>/Constant Value3'
     *  Logic: '<S1142>/AND'
     *  RelationalOperator: '<S1142>/Greater Than or Equal '
     *  RelationalOperator: '<S1142>/Greater Than or Equal 1'
     *  RelationalOperator: '<S1142>/Not Equal'
     *  RelationalOperator: '<S1142>/Not Equal1'
     *  Switch: '<S1142>/Switch2'
     *  Switch: '<S1142>/Switch3'
     */
    if ((VeWTAC_M_ToPrdt_xSEM != 0.0F) && (rtb_Sum3_gl != 0.0F))
    {
        /* Switch: '<S1142>/Switch1' incorporates:
         *  Product: '<S1142>/Division'
         */
        VeWTAC_M_ToPrdt_xSEM /= rtb_Sum3_gl;
    }
    else if (VeWTAC_M_ToPrdt_xSEM > 0.0F)
    {
        /* Switch: '<S1142>/Switch2' incorporates:
         *  Constant: '<S1142>/MAXFLOAT'
         *  Switch: '<S1142>/Switch1'
         */
        VeWTAC_M_ToPrdt_xSEM = 3.402823466E+38F;
    }
    else if (VeWTAC_M_ToPrdt_xSEM < 0.0F)
    {
        /* Switch: '<S1142>/Switch3' incorporates:
         *  Constant: '<S1142>/MINFLOAT'
         *  Switch: '<S1142>/Switch1'
         *  Switch: '<S1142>/Switch2'
         */
        VeWTAC_M_ToPrdt_xSEM = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S1142>/Switch1' incorporates:
         *  Constant: '<S1142>/Constant Value4'
         *  Switch: '<S1142>/Switch2'
         *  Switch: '<S1142>/Switch3'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }

    /* End of Switch: '<S1142>/Switch1' */
    /* End of Outputs for SubSystem: '<S1114>/Protected Division' */

    /* Sum: '<S1114>/Summation2' incorporates:
     *  Product: '<S1114>/Multiplication5'
     *  Sum: '<S1114>/Subtraction2'
     *  Sum: '<S1114>/Summation3'
     *  UnitDelay: '<S1114>/Unit Delay2'
     *  UnitDelay: '<S1114>/Unit Delay4'
     */
    VeWTAC_M_ToPrdt_xSEM = ((VeWTAC_M_PostRateLimAeC -
        WTAR_ac_DW.UnitDelay4_DSTATE_n) * VeWTAC_k_KDFilterCoeffsAeC) +
        (VeWTAC_M_ToPrdt_xSEM + WTAR_ac_DW.UnitDelay2_DSTATE_b);

    /* Outputs for Atomic SubSystem: '<S1114>/Limiter1' */
    /* Switch: '<S1140>/Switch1' incorporates:
     *  Constant: '<S1114>/Constant Value3'
     *  RelationalOperator: '<S1140>/Relational Operator'
     */
    if (100000.0F < VeWTAC_M_ToPrdt_xSEM)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S1140>/Switch1' */

    /* Switch: '<S1140>/Switch' incorporates:
     *  RelationalOperator: '<S1140>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_TmpSignalConversionAtVeCT_m)
    {
        /* Switch: '<S1140>/Switch' */
        VeWTAC_M_AfterMainFilterAeC = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1140>/Switch' */
        VeWTAC_M_AfterMainFilterAeC = rtb_TmpSignalConversionAtVeCT_m;
    }

    /* End of Switch: '<S1140>/Switch' */
    /* End of Outputs for SubSystem: '<S1114>/Limiter1' */

    /* If: '<S995>/If' incorporates:
     *  Constant: '<S1089>/Calib'
     *  Constant: '<S1090>/Calib'
     *  Logic: '<S995>/AND4'
     */
    if ((KeWTAR_b_LashControlBypass_Diff) || rtb_AND_p4)
    {
        /* Outputs for IfAction SubSystem: '<S995>/ByPass' incorporates:
         *  ActionPort: '<S1074>/Action Port'
         */
        WTAR_ac_ByPass(&VeWTAC_M_ToPrdt_xSEM, &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S995>/ByPass' */
    }
    else if (VeWTAC_b_ZeroPedalLashCtrl_PstFilAeC)
    {
        /* Outputs for IfAction SubSystem: '<S995>/ZeroPedalLash' incorporates:
         *  ActionPort: '<S1099>/Action Port'
         */
        WTAR_ac_ZeroPedalLash(rtb_TmpSignalConversionAtVeCT_n,
                              rtb_TmpSignalConversionAtVeCSVR,
                              &VeWTAC_M_ToPrdt_xSEM, &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S995>/ZeroPedalLash' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_NegLashCntrl_PstFilAeC))
    {
        /* Outputs for IfAction SubSystem: '<S995>/InNegLashCntrl' incorporates:
         *  ActionPort: '<S1081>/Action Port'
         */
        WTAR_ac_InNegLashCntrl(rtb_TmpSignalConversionAtVeCT_n,
                               rtb_TmpSignalConversionAtVeCSVR,
                               VeWTAC_k_NegLashFac, &VeWTAC_M_ToPrdt_xSEM,
                               &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S995>/InNegLashCntrl' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_PosLashCntrl_PstFilAeC))
    {
        /* Outputs for IfAction SubSystem: '<S995>/InPosLashCntrl' incorporates:
         *  ActionPort: '<S1082>/Action Port'
         */
        WTAR_ac_InPosLashCntrl(rtb_TmpSignalConversionAtVeCT_n,
                               rtb_TmpSignalConversionAtVeCSVR,
                               VeWTAC_k_PosLashFac, &VeWTAC_M_ToPrdt_xSEM,
                               &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S995>/InPosLashCntrl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S995>/NotInLash' incorporates:
         *  ActionPort: '<S1096>/Action Port'
         */
        /* Abs: '<S1096>/Abs' incorporates:
         *  Sum: '<S1096>/Add'
         */
        rtb_TmpSignalConversionAtVeCT_n = fabsf(VeWTAC_M_AfterMainFilterAeC -
            rtb_TmpSignalConversionAtVeCT_n);

        /* Lookup_n-D: '<S1106>/Vector' incorporates:
         *  Abs: '<S1096>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LD_PstFilAeC = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCT_n, rtb_Maximum_i, ((const float32 *)
              &(KxWTAR_dM_NotLashToNo_LD_PstFil[0])), ((const float32 *)
              &(KyWTAR_dM_NotLashToNo_LD_PstFil[0])), ((const float32 *)
              &(KtWTAR_dM_NotLashToNo_LD_PstFil[0])), WTAR_ac_ConstP.pooled21,
             8U);

        /* Lookup_n-D: '<S1107>/Vector' incorporates:
         *  Abs: '<S1096>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LU_PstFilAeC = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCT_n, rtb_Maximum_i, ((const float32 *)
              &(KxWTAR_dM_NotLashToNo_LU_PstFil[0])), ((const float32 *)
              &(KyWTAR_dM_NotLashToNo_LU_PstFil[0])), ((const float32 *)
              &(KtWTAR_dM_NotLashToNo_LU_PstFil[0])), WTAR_ac_ConstP.pooled21,
             8U);

        /* Switch: '<S319>/Switch3' incorporates:
         *  Product: '<S1096>/Multiplication1'
         */
        VeWTAC_M_ToPrdt_xSEM = VeWTAC_dM_NoLashToNo_LU_PstFilAeC *
            VeWTAC_k_NotInLashFac;

        /* Switch: '<S319>/Switch2' incorporates:
         *  Product: '<S1096>/Multiplication2'
         */
        rtb_Sum3_gl = VeWTAC_k_NotInLashFac * VeWTAC_dM_NoLashToNo_LD_PstFilAeC;

        /* End of Outputs for SubSystem: '<S995>/NotInLash' */
    }

    /* MinMax: '<S995>/MinMax4' */
    rtb_TmpSignalConversionAtVeCT_n = fminf(VeWTAC_dM_TCMGradLim_Up_dt,
        VeWTAC_M_ToPrdt_xSEM);

    /* MinMax: '<S995>/MinMax3' */
    rtb_TmpSignalConversionAtVeCT_m = fmaxf(VeWTAC_dM_TCMGradLim_Lo_dt,
        rtb_Sum3_gl);

    /* Sum: '<S1097>/Sum2' incorporates:
     *  UnitDelay: '<S1097>/Unit Delay1'
     */
    VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_AfterMainFilterAeC -
        WTAR_ac_DW.UnitDelay1_DSTATE_h0;

    /* Outputs for Atomic SubSystem: '<S1097>/Limiter' */
    /* Switch: '<S1108>/Switch1' incorporates:
     *  RelationalOperator: '<S1108>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeCT_n < VeWTAC_M_ToPrdt_xSEM)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeCT_n;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S1108>/Switch1' */

    /* Switch: '<S1108>/Switch' incorporates:
     *  RelationalOperator: '<S1108>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_TmpSignalConversionAtVeCT_m)
    {
        rtb_TmpSignalConversionAtVeCT_m = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S1108>/Switch' */
    /* End of Outputs for SubSystem: '<S1097>/Limiter' */

    /* Sum: '<S1097>/Sum3' incorporates:
     *  UnitDelay: '<S1097>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeCT_n = rtb_TmpSignalConversionAtVeCT_m +
        WTAR_ac_DW.UnitDelay1_DSTATE_h0;

    /* Outputs for Atomic SubSystem: '<S1097>/Limiter1' */
    /* Switch: '<S1109>/Switch1' incorporates:
     *  Constant: '<S995>/Constant Value10'
     *  RelationalOperator: '<S1109>/Relational Operator'
     */
    if (100000.0F < rtb_TmpSignalConversionAtVeCT_n)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeCT_n;
    }

    /* End of Switch: '<S1109>/Switch1' */

    /* Switch: '<S1109>/Switch' incorporates:
     *  RelationalOperator: '<S1109>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process_Diff)
    {
        /* Switch: '<S1109>/Switch' */
        VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1109>/Switch' */
        VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC = VeWTAC_M_Min4Process_Diff;
    }

    /* End of Switch: '<S1109>/Switch' */
    /* End of Outputs for SubSystem: '<S1097>/Limiter1' */

    /* MinMax: '<S990>/MinMax1' incorporates:
     *  Constant: '<S990>/Constant Value'
     *  MinMax: '<S1150>/MinMax1'
     *  MinMax: '<S1308>/MinMax1'
     */
    rtb_TmpSignalConversionAtVeSC_c = fmaxf(VeWTAI_M_OutTorqReqModTactMax, 0.0F);

    /* Outputs for Atomic SubSystem: '<S990>/Digital Lowpass Reset Enabled1' */
    /* Sum: '<S1037>/Summation' incorporates:
     *  Constant: '<S1038>/Calib'
     *  MinMax: '<S990>/MinMax1'
     *  Product: '<S1037>/Multiplication'
     *  Sum: '<S1037>/Subtraction'
     *  UnitDelay: '<S1037>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCT_n = ((rtb_TmpSignalConversionAtVeSC_c -
        WTAR_ac_DW.UnitDelay_DSTATE_mf) * KeWTAR_r_FltCoeff_TactMax) +
        WTAR_ac_DW.UnitDelay_DSTATE_mf;

    /* Update for UnitDelay: '<S1037>/Unit Delay' incorporates:
     *  Switch: '<S1037>/Switch2'
     */
    WTAR_ac_DW.UnitDelay_DSTATE_mf = rtb_TmpSignalConversionAtVeCT_n;

    /* MinMax: '<S990>/MinMax' incorporates:
     *  Switch: '<S1037>/Switch2'
     */
    rtb_TmpSignalConversionAtVeCT_n = fminf
        (VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC, rtb_TmpSignalConversionAtVeCT_n);

    /* End of Outputs for SubSystem: '<S990>/Digital Lowpass Reset Enabled1' */

    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  RelationalOperator: '<S1040>/Comparison'
     *  UnitDelay: '<S1040>/Unit Delay1'
     */
    rtb_Comparison12 = (rtb_TmpSignalConversionAtVeCT_n >
                        WTAR_ac_DW.UnitDelay1_DSTATE_oj);

    /* Switch: '<S1040>/Switch3' incorporates:
     *  Logic: '<S1040>/Logical1'
     *  Logic: '<S1040>/Logical2'
     *  RelationalOperator: '<S1040>/Comparison2'
     *  UnitDelay: '<S1040>/Unit Delay2'
     */
    if ((WTAR_ac_DW.UnitDelay2_DSTATE_d > rtb_TmpSignalConversionAtVeCT_n) &&
            (!rtb_Comparison12))
    {
        /* Switch: '<S1040>/Switch3' incorporates:
         *  Constant: '<S1040>/Constant Value3'
         */
        rtb_TmpSignalConversionAtVeCT_m = 0.0F;
    }
    else
    {
        /* Switch: '<S1040>/Switch3' incorporates:
         *  Constant: '<S1040>/Constant Value4'
         */
        rtb_TmpSignalConversionAtVeCT_m = 1.0E+6F;
    }

    /* End of Switch: '<S1040>/Switch3' */

    /* Switch: '<S1040>/Switch2' incorporates:
     *  Logic: '<S1040>/Logical'
     *  RelationalOperator: '<S1040>/Comparison1'
     *  UnitDelay: '<S1040>/Unit Delay2'
     */
    if (rtb_Comparison12 && (WTAR_ac_DW.UnitDelay2_DSTATE_d <
                             rtb_TmpSignalConversionAtVeCT_n))
    {
        /* Switch: '<S1040>/Switch2' incorporates:
         *  Constant: '<S1040>/Constant Value'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S1040>/Switch2' incorporates:
         *  Constant: '<S1040>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = -1.0E+6F;
    }

    /* End of Switch: '<S1040>/Switch2' */

    /* Lookup_n-D: '<S1063>/Vector' incorporates:
     *  Abs: '<S321>/Abs'
     *  Lookup_n-D: '<S1222>/Vector'
     *  Lookup_n-D: '<S1380>/Vector'
     */
    rtb_Switch1_bbt = look1_iflf_binlcapw(rtb_Maximum_i, ((const float32 *)
        &(KxWTAR_Pct_LagLmt_NoDepend[0])), ((const float32 *)
        &(KtWTAR_Pct_LagLmt_NoDepend[0])), 2U);

    /* Sum: '<S1039>/Sum1' incorporates:
     *  UnitDelay: '<S1039>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeSC_j = VeWTAI_Pct_AccelPedalEffPosition -
        WTAR_ac_DW.UnitDelay2_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S1039>/Hysteresis' */
    /* Switch: '<S1055>/Switch1' incorporates:
     *  Constant: '<S1056>/Calib'
     *  RelationalOperator: '<S1055>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeSC_j > KeWTAR_Pct_TipInThresh)
    {
        /* Switch: '<S1055>/Switch1' incorporates:
         *  Constant: '<S1055>/Constant Value'
         */
        VeWTAC_b_TipInOut_Detect_xSEM4AeCst = true;
    }
    else
    {
        /* Switch: '<S1055>/Switch1' incorporates:
         *  Constant: '<S1057>/Calib'
         *  RelationalOperator: '<S1055>/Greater  Than1'
         *  UnitDelay: '<S1055>/Unit Delay'
         */
        VeWTAC_b_TipInOut_Detect_xSEM4AeCst = ((rtb_TmpSignalConversionAtVeSC_j >=
            KeWTAR_Pct_TipOutThresh) && (WTAR_ac_DW.UnitDelay_DSTATE_fw));
    }

    /* End of Switch: '<S1055>/Switch1' */

    /* Update for UnitDelay: '<S1055>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_fw = VeWTAC_b_TipInOut_Detect_xSEM4AeCst;

    /* End of Outputs for SubSystem: '<S1039>/Hysteresis' */

    /* Switch: '<S1039>/Switch4' incorporates:
     *  Constant: '<S1060>/Calib'
     *  Constant: '<S1061>/Calib'
     */
    if (VeWTAC_b_TipInOut_Detect_xSEM4AeCst)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipOut;
    }

    /* End of Switch: '<S1039>/Switch4' */

    /* Product: '<S1039>/Product2' incorporates:
     *  Constant: '<S1062>/Calib'
     *  Lookup_n-D: '<S1063>/Vector'
     *  Product: '<S1039>/Multiplication1'
     */
    VeWTAR_Cnt_DelayPredExtra_xSEM4AeCst_Single = (rtb_Switch1_bbt *
        rtb_Switch13) / KeWTAR_t_dT;

    /* Chart: '<S1039>/ConvertSingletoUint16_2' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayPredExtra_xSEM4AeCst_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_2_m);

    /* Gain: '<S1065>/Gain' */
    VeWTAC_Cnt_DelayPredExtra_xSEM4AeCst =
        WTAR_ac_B.sf_ConvertSingletoUint16_2_m.Uint16_out;

    /* Switch: '<S1357>/Switch' incorporates:
     *  Constant: '<S1040>/Constant Value5'
     *  S-Function (sfix_bitop): '<S1040>/Bitwise Logical Operator'
     *  Sum: '<S1040>/Sum'
     *  UnitDelay: '<S1040>/Unit Delay3'
     */
    rtb_Switch_pb = (uint16)(((uint16)(((uint32)WTAR_ac_DW.UnitDelay3_DSTATE_i)
        + 1U)) & ((uint16)31));

    /* Outputs for Atomic SubSystem: '<S1040>/EdgeFalling' */
    /* Logic: '<S1067>/AND' incorporates:
     *  UnitDelay: '<S1067>/Unit Delay'
     */
    WTAR_ac_B.AND_c = (rtb_AND_ok && (WTAR_ac_DW.UnitDelay_DSTATE_hz));

    /* Update for UnitDelay: '<S1067>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hz = rtb_AND_p4;

    /* End of Outputs for SubSystem: '<S1040>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S1040>/WashMemory' */
    /* Sum: '<S1040>/Sum1' incorporates:
     *  Constant: '<S1040>/Constant Value6'
     *  S-Function (sfix_bitop): '<S1040>/Bitwise Logical Operator1'
     */
    WTAR_ac_WashMemory(WTAR_ac_B.AND_c, (uint16)(((uint32)
                         VeWTAC_Cnt_DelayPredExtra_xSEM4AeCst) + 1U),
                       rtb_Switch_pb, rtb_TmpSignalConversionAtVeCT_n,
                       &WTAR_ac_B.WashMemory_a);

    /* End of Outputs for SubSystem: '<S1040>/WashMemory' */

    /* Outputs for Atomic SubSystem: '<S1040>/Count Down  Reset Enabled' */
    /* Switch: '<S1066>/Switch1' incorporates:
     *  Constant: '<S1066>/Constant Value'
     *  RelationalOperator: '<S1066>/Greater  Than'
     *  Switch: '<S1066>/Switch2'
     *  UnitDelay: '<S1066>/Unit Delay'
     */
    if (WTAR_ac_B.AND_c)
    {
        /* Switch: '<S1066>/Switch1' */
        rtb_Switch1_av = VeWTAC_Cnt_DelayPredExtra_xSEM4AeCst;
    }
    else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_a0) > 0)
    {
        /* Switch: '<S1066>/Switch2' incorporates:
         *  Constant: '<S1066>/Constant Value1'
         *  Sum: '<S1066>/Subtraction'
         *  Switch: '<S1066>/Switch1'
         *  UnitDelay: '<S1066>/Unit Delay'
         */
        rtb_Switch1_av = (uint16)((sint32)(((sint32)
            WTAR_ac_DW.UnitDelay_DSTATE_a0) - 1));
    }
    else
    {
        /* Switch: '<S1066>/Switch1' incorporates:
         *  Switch: '<S1066>/Switch2'
         *  UnitDelay: '<S1066>/Unit Delay'
         */
        rtb_Switch1_av = WTAR_ac_DW.UnitDelay_DSTATE_a0;
    }

    /* End of Switch: '<S1066>/Switch1' */

    /* RelationalOperator: '<S1066>/Greater  Than1' incorporates:
     *  Constant: '<S1066>/Constant Value2'
     */
    VeWTAC_b_UseWashedToPrd_eCoast = (((sint32)rtb_Switch1_av) > 0);

    /* Update for UnitDelay: '<S1066>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_a0 = rtb_Switch1_av;

    /* End of Outputs for SubSystem: '<S1040>/Count Down  Reset Enabled' */

    /* Switch: '<S1040>/Switch1' */
    if (VeWTAC_b_UseWashedToPrd_eCoast)
    {
        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.WashMemory_a.ArrayAssignment[0];
    }
    else
    {
        /* Assignment: '<S1040>/Array Assignment' incorporates:
         *  S-Function (sfix_bitop): '<S1040>/Bitwise Logical Operator1'
         */
        WTAR_ac_B.ArrayAssignment_eg[rtb_Switch_pb] =
            rtb_TmpSignalConversionAtVeCT_n;

        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.ArrayAssignment_eg[0];
    }

    /* End of Switch: '<S1040>/Switch1' */

    /* Switch: '<S1039>/Switch1' incorporates:
     *  Constant: '<S1058>/Calib'
     *  Constant: '<S1059>/Calib'
     */
    if (VeWTAC_b_TipInOut_Detect_xSEM4AeCst)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipOut;
    }

    /* End of Switch: '<S1039>/Switch1' */

    /* Product: '<S1039>/Product1' incorporates:
     *  Constant: '<S1062>/Calib'
     *  Lookup_n-D: '<S1063>/Vector'
     *  Product: '<S1039>/Multiplication3'
     */
    VeWTAR_Cnt_DelayImmed_xSEM4AeCst_Single = (rtb_Switch13 * rtb_Switch1_bbt) /
        KeWTAR_t_dT;

    /* Chart: '<S1039>/ConvertSingletoUint16_1' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayImmed_xSEM4AeCst_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_1_b);

    /* Gain: '<S1064>/Gain' */
    VeWTAC_Cnt_DelayImmed_xSEM4AeCst =
        WTAR_ac_B.sf_ConvertSingletoUint16_1_b.Uint16_out;

    /* Selector: '<S1040>/Selector' incorporates:
     *  Logic: '<S1040>/Logical3'
     *  Switch: '<S1040>/Switch'
     */
    if (!rtb_AND_p4)
    {
        rtb_Switch1_g = VeWTAC_Cnt_DelayPredExtra_xSEM4AeCst;
    }
    else
    {
        rtb_Switch1_g = VeWTAC_Cnt_DelayImmed_xSEM4AeCst;
    }

    /* Outputs for Atomic SubSystem: '<S1040>/GradientLimiter' */
    /* Sum: '<S1068>/Sum2' incorporates:
     *  S-Function (sfix_bitop): '<S1040>/Bitwise Logical Operator2'
     *  Selector: '<S1040>/Selector'
     *  Sum: '<S1040>/Sum2'
     *  UnitDelay: '<S1068>/Unit Delay'
     */
    rtb_Sum3_gl = rtb_Switch1_hy_0[((uint16)(rtb_Switch_pb - rtb_Switch1_g)) &
        ((uint16)31)] - WTAR_ac_DW.UnitDelay_DSTATE_ca;

    /* Outputs for Atomic SubSystem: '<S1068>/Limiter' */
    /* Switch: '<S1071>/Switch1' incorporates:
     *  RelationalOperator: '<S1071>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeCT_m < rtb_Sum3_gl)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = rtb_TmpSignalConversionAtVeCT_m;
    }

    /* End of Switch: '<S1071>/Switch1' */

    /* Switch: '<S1071>/Switch' incorporates:
     *  RelationalOperator: '<S1071>/Relational Operator1'
     */
    if (rtb_Sum3_gl > VeWTAC_M_ToPrdt_xSEM)
    {
        VeWTAC_M_ToPrdt_xSEM = rtb_Sum3_gl;
    }

    /* End of Switch: '<S1071>/Switch' */
    /* End of Outputs for SubSystem: '<S1068>/Limiter' */

    /* Sum: '<S1068>/Sum3' incorporates:
     *  UnitDelay: '<S1068>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCT_m = VeWTAC_M_ToPrdt_xSEM +
        WTAR_ac_DW.UnitDelay_DSTATE_ca;

    /* Outputs for Atomic SubSystem: '<S1068>/Limiter1' */
    /* Switch: '<S1072>/Switch1' incorporates:
     *  Constant: '<S1040>/Constant Value2'
     *  RelationalOperator: '<S1072>/Relational Operator'
     */
    if (100000.0F < rtb_TmpSignalConversionAtVeCT_m)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeCT_m;
    }

    /* End of Switch: '<S1072>/Switch1' */

    /* Switch: '<S1072>/Switch' incorporates:
     *  RelationalOperator: '<S1072>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process_Diff)
    {
        /* Switch: '<S1072>/Switch' */
        rtb_TmpSignalConversionAtVeCT_m = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1072>/Switch' */
        rtb_TmpSignalConversionAtVeCT_m = VeWTAC_M_Min4Process_Diff;
    }

    /* End of Switch: '<S1072>/Switch' */
    /* End of Outputs for SubSystem: '<S1068>/Limiter1' */

    /* Update for UnitDelay: '<S1068>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ca = rtb_TmpSignalConversionAtVeCT_m;

    /* End of Outputs for SubSystem: '<S1040>/GradientLimiter' */

    /* If: '<S1036>/If1' incorporates:
     *  Constant: '<S1042>/Calib'
     */
    if (KeWTAR_b_EnblToDelayCushion)
    {
        /* Outputs for IfAction SubSystem: '<S1036>/Enabled' incorporates:
         *  ActionPort: '<S1041>/Action Port'
         */
        WTAR_ac_Enabled(rtb_TmpSignalConversionAtVeCT_n,
                        rtb_TmpSignalConversionAtVeCT_m,
                        VeWTAC_M_Min4Process_Diff,
                        (&(VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst)),
                        &WTAR_ac_DW.Enabled_h);

        /* End of Outputs for SubSystem: '<S1036>/Enabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1036>/Pass' incorporates:
         *  ActionPort: '<S1044>/Action Port'
         */
        WTAR_ac_Pass(rtb_TmpSignalConversionAtVeCT_m,
                     (&(VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst)));

        /* End of Outputs for SubSystem: '<S1036>/Pass' */
    }

    /* End of If: '<S1036>/If1' */

    /* Outputs for Atomic SubSystem: '<S987>/Hysteresis' */
    /* Switch: '<S1000>/Switch1' incorporates:
     *  Constant: '<S1004>/Calib'
     *  RelationalOperator: '<S1000>/Greater  Than'
     */
    if (rtb_Abs1_gm > KeWTAR_Pct_CurbClimbingGradeCheckRSP)
    {
        /* Switch: '<S1000>/Switch1' incorporates:
         *  Constant: '<S1000>/Constant Value'
         */
        rtb_AND_p4 = true;
    }
    else
    {
        /* Switch: '<S1000>/Switch1' incorporates:
         *  Constant: '<S1003>/Calib'
         *  RelationalOperator: '<S1000>/Greater  Than1'
         *  UnitDelay: '<S1000>/Unit Delay'
         */
        rtb_AND_p4 = ((rtb_Abs1_gm >= KeWTAR_Pct_CurbClimbingGradeCheckLSP) &&
                      (WTAR_ac_DW.UnitDelay_DSTATE_cb));
    }

    /* End of Switch: '<S1000>/Switch1' */

    /* Update for UnitDelay: '<S1000>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_cb = rtb_AND_p4;

    /* End of Outputs for SubSystem: '<S987>/Hysteresis' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Logic: '<S987>/Logical' incorporates:
     *  Abs: '<S321>/Abs'
     *  Constant: '<S1001>/Calib'
     *  Constant: '<S1005>/Calib'
     *  Constant: '<S1006>/Calib'
     *  Constant: '<S1007>/Calib'
     *  Constant: '<S1008>/Calib'
     *  Constant: '<S1009>/Calib'
     *  Constant: '<S1014>/Calib'
     *  Constant: '<S987>/Constant Value1'
     *  Constant: '<S987>/Constant Value2'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S987>/Logical1'
     *  Logic: '<S987>/Logical2'
     *  Logic: '<S987>/Logical3'
     *  Logic: '<S987>/Logical6'
     *  Logic: '<S987>/Logical7'
     *  RelationalOperator: '<S987>/Comparison1'
     *  RelationalOperator: '<S987>/Comparison10'
     *  RelationalOperator: '<S987>/Comparison11'
     *  RelationalOperator: '<S987>/Comparison2'
     *  RelationalOperator: '<S987>/Comparison3'
     *  RelationalOperator: '<S987>/Comparison7'
     *  RelationalOperator: '<S987>/Comparison9'
     */
    VeWTAC_b_TorqueCheckEnable_xSEM4AeCst =
        ((((((rtb_TmpSignalConversionAtVeBTQR < KeWTAR_M_CurbClimbingBreakCheck)
             && (rtb_Maximum_i < KeWTAR_n_CurbClimbingSpeedCheck)) &&
            (VeWTAI_Pct_AccelPedalEffPosition >
             KeWTAR_Pct_CurbClimbingPedalCheck)) && (!rtb_AND_p4)) &&
          (((KeWTAR_b_EnableDforCurbClimbing) && (rtb_Switch1_hk[0] > 0.0F)) ||
           ((KeWTAR_b_EnableRforCurbClimbing) && (rtb_Switch1_hk[0] < 0.0F)))) &&
         ((VeWTAI_T_MtrB_Temp < KeWTAR_T_CurbClimbing_MtrBTempCheck) &&
          (VeWTAI_T_MtrB_InvrtrTemp < KeWTAR_T_CurbClimbing_InvrtrBTempCheck)));

    /* Outputs for Atomic SubSystem: '<S987>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S1020>/EdgeRising' */
    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  UnitDelay: '<S1035>/Unit Delay'
     */
    rtb_Comparison12 = WTAR_ac_DW.UnitDelay_DSTATE_h3;

    /* Update for UnitDelay: '<S1035>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_h3 = VeWTAC_b_TorqueCheckEnable_xSEM4AeCst;

    /* Switch: '<S1020>/Switch1' incorporates:
     *  Logic: '<S1020>/OR'
     *  Logic: '<S1020>/OR1'
     *  Logic: '<S1035>/AND'
     *  Logic: '<S1035>/OR1'
     */
    if ((!VeWTAC_b_TorqueCheckEnable_xSEM4AeCst) ||
            ((VeWTAC_b_TorqueCheckEnable_xSEM4AeCst) && (!rtb_Comparison12)))
    {
        /* Switch: '<S1020>/Switch1' incorporates:
         *  Constant: '<S1020>/Constant Value1'
         */
        rtb_Abs1_gm = 0.0F;
    }
    else
    {
        /* Switch: '<S1020>/Switch1' incorporates:
         *  Constant: '<S1015>/Calib'
         *  Constant: '<S1017>/Calib'
         *  MinMax: '<S1020>/Minimum'
         *  Sum: '<S1020>/Summation'
         *  UnitDelay: '<S1020>/Unit Delay'
         */
        rtb_Abs1_gm = fminf(KeWTAR_t_CurbClimbingTorqChkTime, KeWTAR_t_dT +
                            WTAR_ac_DW.UnitDelay_DSTATE_ci);
    }

    /* End of Switch: '<S1020>/Switch1' */
    /* End of Outputs for SubSystem: '<S1020>/EdgeRising' */

    /* Logic: '<S1020>/AND' incorporates:
     *  Constant: '<S1015>/Calib'
     *  RelationalOperator: '<S1020>/Greater  Than'
     */
    rtb_AND_p4 = ((VeWTAC_b_TorqueCheckEnable_xSEM4AeCst) && (rtb_Abs1_gm >=
                   KeWTAR_t_CurbClimbingTorqChkTime));

    /* Update for UnitDelay: '<S1020>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ci = rtb_Abs1_gm;

    /* End of Outputs for SubSystem: '<S987>/Turn On Delay Time1' */

    /* Outputs for Enabled SubSystem: '<S987>/TorqueReduction' incorporates:
     *  EnablePort: '<S1018>/Enable'
     */
    if (rtb_AND_p4)
    {
        /* Outputs for Atomic SubSystem: '<S1018>/Count Down  Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S1024>/EdgeRising' */
        /* Logic: '<S1032>/OR1' incorporates:
         *  UnitDelay: '<S1032>/Unit Delay'
         */
        rtb_OR1_em = !WTAR_ac_DW.UnitDelay_DSTATE_ms;

        /* Update for UnitDelay: '<S1032>/Unit Delay' incorporates:
         *  UnitDelay: '<S987>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_ms = WTAR_ac_DW.UnitDelay_DSTATE_nl;

        /* Switch: '<S1024>/Switch1' incorporates:
         *  Constant: '<S1024>/Constant Value'
         *  Logic: '<S1032>/AND'
         *  RelationalOperator: '<S1024>/Greater  Than'
         *  Switch: '<S1024>/Switch2'
         *  UnitDelay: '<S1024>/Unit Delay'
         *  UnitDelay: '<S987>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_nl) && rtb_OR1_em)
        {
            /* Switch: '<S1024>/Switch1' incorporates:
             *  Constant: '<S1027>/Calib'
             */
            rtb_Switch_pb = KeWTAR_Cnt_TorqShortTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_df) > 0)
        {
            /* Switch: '<S1024>/Switch2' incorporates:
             *  Constant: '<S1024>/Constant Value1'
             *  Sum: '<S1024>/Subtraction'
             *  Switch: '<S1024>/Switch1'
             *  UnitDelay: '<S1024>/Unit Delay'
             */
            rtb_Switch_pb = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_df) - 1));
        }
        else
        {
            /* Switch: '<S1024>/Switch1' incorporates:
             *  Switch: '<S1024>/Switch2'
             *  UnitDelay: '<S1024>/Unit Delay'
             */
            rtb_Switch_pb = WTAR_ac_DW.UnitDelay_DSTATE_df;
        }

        /* End of Switch: '<S1024>/Switch1' */
        /* End of Outputs for SubSystem: '<S1024>/EdgeRising' */

        /* RelationalOperator: '<S1024>/Greater  Than1' incorporates:
         *  Constant: '<S1024>/Constant Value2'
         */
        VeWTAC_b_TorqShortTimer_xSEM4AeCst = (((sint32)rtb_Switch_pb) > 0);

        /* Update for UnitDelay: '<S1024>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_df = rtb_Switch_pb;

        /* End of Outputs for SubSystem: '<S1018>/Count Down  Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S1018>/Count Down  Reset Trigger Enabled1' */
        /* Outputs for Atomic SubSystem: '<S1025>/EdgeRising' */
        /* Logic: '<S1033>/OR1' incorporates:
         *  UnitDelay: '<S1033>/Unit Delay'
         */
        rtb_OR1_em = !WTAR_ac_DW.UnitDelay_DSTATE_gi;

        /* Update for UnitDelay: '<S1033>/Unit Delay' incorporates:
         *  UnitDelay: '<S987>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_gi = WTAR_ac_DW.UnitDelay_DSTATE_nl;

        /* Switch: '<S1025>/Switch1' incorporates:
         *  Constant: '<S1025>/Constant Value'
         *  Logic: '<S1033>/AND'
         *  RelationalOperator: '<S1025>/Greater  Than'
         *  Switch: '<S1025>/Switch2'
         *  UnitDelay: '<S1025>/Unit Delay'
         *  UnitDelay: '<S987>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_nl) && rtb_OR1_em)
        {
            /* Switch: '<S1025>/Switch1' incorporates:
             *  Constant: '<S1026>/Calib'
             */
            rtb_Switch_pb = KeWTAR_Cnt_TorqLongTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_gq) > 0)
        {
            /* Switch: '<S1025>/Switch2' incorporates:
             *  Constant: '<S1025>/Constant Value1'
             *  Sum: '<S1025>/Subtraction'
             *  Switch: '<S1025>/Switch1'
             *  UnitDelay: '<S1025>/Unit Delay'
             */
            rtb_Switch_pb = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_gq) - 1));
        }
        else
        {
            /* Switch: '<S1025>/Switch1' incorporates:
             *  Switch: '<S1025>/Switch2'
             *  UnitDelay: '<S1025>/Unit Delay'
             */
            rtb_Switch_pb = WTAR_ac_DW.UnitDelay_DSTATE_gq;
        }

        /* End of Switch: '<S1025>/Switch1' */
        /* End of Outputs for SubSystem: '<S1025>/EdgeRising' */

        /* RelationalOperator: '<S1025>/Greater  Than1' incorporates:
         *  Constant: '<S1025>/Constant Value2'
         */
        VeWTAC_b_TorqLongTimer_xSEM4AeCst = (((sint32)rtb_Switch_pb) > 0);

        /* Update for UnitDelay: '<S1025>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_gq = rtb_Switch_pb;

        /* End of Outputs for SubSystem: '<S1018>/Count Down  Reset Trigger Enabled1' */

        /* MinMax: '<S1018>/MinMax1' incorporates:
         *  Constant: '<S1028>/Calib'
         *  Constant: '<S1030>/Calib'
         *  Sum: '<S1018>/Sum1'
         */
        VeWTAC_M_TorqReduceCurbClimbingD_xSEM4AeCst = fmaxf
            (KeWTAR_M_TorqCompareforCurbClimbingD,
             VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst -
             KeWTAR_M_TorqReduceCurbClimbingD);

        /* MinMax: '<S1018>/MinMax2' incorporates:
         *  Constant: '<S1029>/Calib'
         *  Constant: '<S1031>/Calib'
         *  Sum: '<S1018>/Sum2'
         */
        VeWTAC_M_TorqReduceCurbClimbingR_xSEM4AeCst = fminf
            (VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst +
             KeWTAR_M_TorqReduceCurbClimbingR,
             KeWTAR_M_TorqCompareforCurbClimbingR);

        /* Switch: '<S1018>/Switch2' */
        if (VeWTAC_b_TorqShortTimer_xSEM4AeCst)
        {
            /* Switch: '<S1018>/Switch1' incorporates:
             *  Constant: '<S1018>/Constant Value'
             *  RelationalOperator: '<S1018>/Comparison1'
             */
            if (VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst >= 1.0F)
            {
                /* Switch: '<S1018>/Switch2' */
                VeWTAC_M_TorqReduceforCurbClimbing_xSEM4AeCst =
                    VeWTAC_M_TorqReduceCurbClimbingD_xSEM4AeCst;
            }
            else
            {
                /* Switch: '<S1018>/Switch2' */
                VeWTAC_M_TorqReduceforCurbClimbing_xSEM4AeCst =
                    VeWTAC_M_TorqReduceCurbClimbingR_xSEM4AeCst;
            }

            /* End of Switch: '<S1018>/Switch1' */
        }
        else
        {
            /* Switch: '<S1018>/Switch2' */
            VeWTAC_M_TorqReduceforCurbClimbing_xSEM4AeCst =
                VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst;
        }

        /* End of Switch: '<S1018>/Switch2' */
    }

    /* End of Outputs for SubSystem: '<S987>/TorqueReduction' */

    /* Logic: '<S987>/Logical4' */
    rtb_OR1_em = (rtb_AND_p4 && (VeWTAC_b_TorqLongTimer_xSEM4AeCst));

    /* Outputs for Atomic SubSystem: '<S999>/EdgeRising' */
    /* Logic: '<S1021>/OR1' incorporates:
     *  UnitDelay: '<S1021>/Unit Delay'
     */
    rtb_AND_a2v = !WTAR_ac_DW.UnitDelay_DSTATE_jnu;

    /* Update for UnitDelay: '<S1021>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jnu = rtb_OR1_em;

    /* Switch: '<S999>/Switch1' incorporates:
     *  Logic: '<S1021>/AND'
     */
    if (rtb_OR1_em && rtb_AND_a2v)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst;
    }
    else
    {
        /* Switch: '<S319>/Switch2' incorporates:
         *  UnitDelay: '<S999>/Unit Delay1'
         */
        rtb_Sum3_gl = WTAR_ac_DW.UnitDelay1_DSTATE_lm;
    }

    /* End of Switch: '<S999>/Switch1' */
    /* End of Outputs for SubSystem: '<S999>/EdgeRising' */

    /* Switch: '<S999>/Switch' */
    if (rtb_OR1_em)
    {
        VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_TorqReduceforCurbClimbing_xSEM4AeCst;
    }
    else
    {
        VeWTAC_M_ToPrdt_xSEM =
            VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst;
    }

    /* End of Switch: '<S999>/Switch' */

    /* Sum: '<S999>/Sum4' */
    rtb_Abs1_gm = VeWTAC_M_ToPrdt_xSEM - rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S999>/Limiter' */
    /* Switch: '<S1022>/Switch1' incorporates:
     *  RelationalOperator: '<S1022>/Relational Operator'
     */
    if (rtb_Switch_fq < rtb_Abs1_gm)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Switch_fq;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Abs1_gm;
    }

    /* End of Switch: '<S1022>/Switch1' */

    /* Switch: '<S1022>/Switch' incorporates:
     *  RelationalOperator: '<S1022>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_Switch1_ee)
    {
        rtb_Switch1_ee = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S1022>/Switch' */
    /* End of Outputs for SubSystem: '<S999>/Limiter' */

    /* Sum: '<S999>/Sum1' */
    rtb_Switch_fq = rtb_Switch1_ee + rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S999>/Limiter1' */
    /* Switch: '<S1023>/Switch1' incorporates:
     *  Constant: '<S999>/Constant Value1'
     *  RelationalOperator: '<S1023>/Relational Operator'
     */
    if (100000.0F < rtb_Switch_fq)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Switch_fq;
    }

    /* End of Switch: '<S1023>/Switch1' */

    /* Switch: '<S1023>/Switch' incorporates:
     *  RelationalOperator: '<S1023>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process_Diff)
    {
        /* Switch: '<S1023>/Switch' */
        VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM4AeCst = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1023>/Switch' */
        VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM4AeCst =
            VeWTAC_M_Min4Process_Diff;
    }

    /* End of Switch: '<S1023>/Switch' */
    /* End of Outputs for SubSystem: '<S999>/Limiter1' */

    /* UnitDelay: '<S987>/Unit Delay1' */
    VeWTAC_b_CurbClimbing_TrqModulated_xSEM4AeCst =
        WTAR_ac_DW.UnitDelay1_DSTATE_iq;

    /* Switch: '<S987>/Switch2' incorporates:
     *  Logic: '<S987>/Logical9'
     */
    if (rtb_OR1_em || (VeWTAC_b_CurbClimbing_TrqModulated_xSEM4AeCst))
    {
        /* Switch: '<S987>/Switch2' */
        VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM4AeCst =
            VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM4AeCst;
    }
    else
    {
        /* Switch: '<S987>/Switch2' */
        VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM4AeCst =
            VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst;
    }

    /* End of Switch: '<S987>/Switch2' */

    /* RelationalOperator: '<S987>/Comparison8' incorporates:
     *  Abs: '<S987>/Abs2'
     *  Constant: '<S1002>/Calib'
     *  Sum: '<S987>/Sum1'
     */
    VeWTAC_b_CurbeClimbing_TorqModulated_xSEM4AeCst = (fabsf
        (VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM4AeCst -
         VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst) >
        KeWTAR_M_CurbClimbing_TorqRecoverThrsh);

    /* Switch: '<S1040>/Switch4' incorporates:
     *  Constant: '<S1040>/Constant Value5'
     *  Constant: '<S1040>/Constant Value8'
     *  RelationalOperator: '<S1040>/Comparison3'
     *  Sum: '<S1040>/Sum'
     *  UnitDelay: '<S1040>/Unit Delay3'
     */
    if (((sint32)((uint16)(((uint32)WTAR_ac_DW.UnitDelay3_DSTATE_i) + 1U))) >
            65534)
    {
        /* Update for UnitDelay: '<S1040>/Unit Delay3' incorporates:
         *  Constant: '<S1040>/Constant Value7'
         *  Switch: '<S1040>/Switch4'
         */
        WTAR_ac_DW.UnitDelay3_DSTATE_i = 0U;
    }
    else
    {
        /* Update for UnitDelay: '<S1040>/Unit Delay3' incorporates:
         *  Switch: '<S1040>/Switch4'
         */
        WTAR_ac_DW.UnitDelay3_DSTATE_i = (uint16)(((uint32)
            WTAR_ac_DW.UnitDelay3_DSTATE_i) + 1U);
    }

    /* End of Switch: '<S1040>/Switch4' */

    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S994>/Calib'
     */
    if (KeWTAR_b_ModHH_FilterRst_Dsbl)
    {
        /* Switch: '<S323>/Switch1' incorporates:
         *  MinMax: '<S323>/MinMax1'
         */
        rtb_Switch_fq = fmaxf(VeWTAI_M_OutTorqReqModTactMax,
                              rtb_TmpSignalConversionAtVeAX_k);
    }
    else
    {
        /* Switch: '<S323>/Switch1' incorporates:
         *  MinMax: '<S323>/MinMax1'
         *  MinMax: '<S323>/MinMax4'
         */
        rtb_Switch_fq = fminf(fmaxf(VeWTAI_M_OutTorqReqModTactMax,
                               rtb_TmpSignalConversionAtVeAX_k),
                              rtb_TmpSignalConversionAtVeAXLR);
    }

    /* End of Switch: '<S323>/Switch1' */

    /* Switch: '<S1097>/Switch2' incorporates:
     *  RelationalOperator: '<S1097>/Relational Operator'
     */
    if (rtb_Switch_fq > VeWTAC_M_AfterMainFilterAeC)
    {
        /* Update for UnitDelay: '<S1097>/Unit Delay1' incorporates:
         *  MinMax: '<S1097>/MinMax2'
         *  Switch: '<S1097>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_h0 = fminf
            (VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC, rtb_Switch_fq);
    }
    else
    {
        /* Update for UnitDelay: '<S1097>/Unit Delay1' incorporates:
         *  Switch: '<S1097>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_h0 = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC;
    }

    /* End of Switch: '<S1097>/Switch2' */

    /* Switch: '<S1114>/Switch1' incorporates:
     *  RelationalOperator: '<S1114>/Relational Operator'
     *  Switch: '<S1114>/Switch2'
     */
    if (rtb_Switch_fq > VeWTAC_M_PostRateLimAeC)
    {
        /* Update for UnitDelay: '<S1114>/Unit Delay4' incorporates:
         *  MinMax: '<S1114>/MinMax1'
         *  Switch: '<S1114>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_n = fminf(rtb_Switch_fq,
            VeWTAC_M_PostRateLimAeC);

        /* Update for UnitDelay: '<S1114>/Unit Delay2' incorporates:
         *  MinMax: '<S1114>/MinMax2'
         *  Switch: '<S1114>/Switch2'
         */
        WTAR_ac_DW.UnitDelay2_DSTATE_b = fminf(VeWTAC_M_AfterMainFilterAeC,
            rtb_Switch_fq);
    }
    else
    {
        /* Update for UnitDelay: '<S1114>/Unit Delay4' incorporates:
         *  Switch: '<S1114>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_n = VeWTAC_M_PostRateLimAeC;

        /* Update for UnitDelay: '<S1114>/Unit Delay2' incorporates:
         *  Switch: '<S1114>/Switch2'
         */
        WTAR_ac_DW.UnitDelay2_DSTATE_b = VeWTAC_M_AfterMainFilterAeC;
    }

    /* End of Switch: '<S1114>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1147>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1178>/EdgeRising' */
    /* Logic: '<S1193>/AND' incorporates:
     *  Logic: '<S1193>/OR1'
     *  UnitDelay: '<S1193>/Unit Delay'
     */
    rtb_OR1_em = !WTAR_ac_DW.UnitDelay_DSTATE_brh;

    /* Update for UnitDelay: '<S1193>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_brh = true;

    /* End of Outputs for SubSystem: '<S1178>/EdgeRising' */

    /* Switch: '<S1178>/Switch1' incorporates:
     *  Logic: '<S1178>/OR'
     */
    if (rtb_OR1_em)
    {
        /* Switch: '<S1178>/Switch1' incorporates:
         *  Constant: '<S1178>/Constant Value1'
         */
        rtb_Switch_fq = 0.0F;
    }
    else
    {
        /* Switch: '<S1178>/Switch1' incorporates:
         *  Constant: '<S1175>/Calib'
         *  Constant: '<S1176>/Calib'
         *  MinMax: '<S1178>/Minimum'
         *  Sum: '<S1178>/Summation'
         *  UnitDelay: '<S1178>/Unit Delay'
         */
        rtb_Switch_fq = fminf(KeWTAR_t_CurbClimbing_GradeUpdateDelay,
                              KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_oj);
    }

    /* End of Switch: '<S1178>/Switch1' */

    /* Update for UnitDelay: '<S1178>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_oj = rtb_Switch_fq;

    /* Switch: '<S1147>/Switch3' incorporates:
     *  Constant: '<S1175>/Calib'
     *  Constant: '<S6>/VeVLDR_Pct_GradeCurrent'
     *  DataStoreWrite: '<S1147>/Data Store Write'
     *  RelationalOperator: '<S1178>/Greater  Than'
     */
    if (rtb_Switch_fq >= KeWTAR_t_CurbClimbing_GradeUpdateDelay)
    {
        WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_Raw = 0.0F;
    }

    /* End of Switch: '<S1147>/Switch3' */
    /* End of Outputs for SubSystem: '<S1147>/Turn On Delay Time' */

    /* Abs: '<S1147>/Abs1' incorporates:
     *  DataStoreWrite: '<S1147>/Data Store Write'
     */
    rtb_Switch3_c1 = fabsf(WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_Raw);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Switch: '<S1147>/Switch' incorporates:
     *  Constant: '<S1147>/Constant Value11'
     *  Gain: '<S267>/Gain'
     *  RelationalOperator: '<S1147>/Comparison4'
     *  Switch: '<S1147>/Switch1'
     */
    if (rtb_Switch1_hk[0] > 0.0F)
    {
        /* Switch: '<S1147>/Switch' incorporates:
         *  Constant: '<S1171>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_j = KeWTAR_dM_CurbClimbing_RtLmtRise_D;

        /* Switch: '<S1147>/Switch1' incorporates:
         *  Constant: '<S1169>/Calib'
         */
        rtb_Abs1 = KeWTAR_dM_CurbClimbing_RtLmtDrop_D;
    }
    else
    {
        /* Switch: '<S1147>/Switch' incorporates:
         *  Constant: '<S1172>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_j = KeWTAR_dM_CurbClimbing_RtLmtRise_R;

        /* Switch: '<S1147>/Switch1' incorporates:
         *  Constant: '<S1170>/Calib'
         */
        rtb_Abs1 = KeWTAR_dM_CurbClimbing_RtLmtDrop_R;
    }

    /* End of Switch: '<S1147>/Switch' */

    /* Logic: '<S324>/Logical1' incorporates:
     *  Constant: '<S1148>/Constant'
     *  Constant: '<S1149>/Constant'
     *  Constant: '<S1152>/Calib'
     *  Logic: '<S324>/AND3'
     *  Logic: '<S324>/AND4'
     *  Logic: '<S324>/AND5'
     *  RelationalOperator: '<S324>/Comparison2'
     *  RelationalOperator: '<S324>/Comparison3'
     *  UnitDelay: '<S324>/Unit Delay3'
     */
    rtb_OR1_em = (((((((uint32)rtb_TmpSignalConversionAtVeDT_o) ==
                      CeDTRR_e_Level2) || (((uint32)
                       rtb_TmpSignalConversionAtVeD_k5) == CeDTRR_e_Level2)) &&
                    (KeWTAR_b_FilLv2_En_Raw)) ||
                   ((rtb_TmpSignalConversionAtVeCCTR &&
                     (WTAR_ac_DW.UnitDelay3_DSTATE_dm)) &&
                    rtb_TmpSignalConversionAtVeSR_f)) ||
                  (VaWTAC_b_CreepActDsbFil[1]));

    /* RelationalOperator: '<S1154>/Not Equal2' incorporates:
     *  Constant: '<S1236>/Constant'
     */
    rtb_AND_a2v = (((uint32)rtb_TmpSignalConversionAtVeBR_d) !=
                   CeBRKR_e_BrkApplied);

    /* Outputs for Atomic SubSystem: '<S1154>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S1256>/EdgeRising' */
    /* Logic: '<S1268>/AND' incorporates:
     *  Logic: '<S1268>/OR1'
     *  UnitDelay: '<S1268>/Unit Delay'
     */
    rtb_AND_ok = (rtb_AND_a2v && (!WTAR_ac_DW.UnitDelay_DSTATE_gf));

    /* Update for UnitDelay: '<S1268>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_gf = rtb_AND_a2v;

    /* End of Outputs for SubSystem: '<S1256>/EdgeRising' */

    /* Switch: '<S1256>/Switch1' incorporates:
     *  Logic: '<S1256>/OR'
     *  Logic: '<S1256>/OR1'
     */
    if ((!rtb_AND_a2v) || rtb_AND_ok)
    {
        /* Switch: '<S1256>/Switch1' incorporates:
         *  Constant: '<S1256>/Constant Value1'
         */
        rtb_Switch_fq = 0.0F;
    }
    else
    {
        /* Switch: '<S1256>/Switch1' incorporates:
         *  Constant: '<S1252>/Calib'
         *  Constant: '<S1253>/Calib'
         *  MinMax: '<S1256>/Minimum'
         *  Sum: '<S1256>/Summation'
         *  UnitDelay: '<S1256>/Unit Delay'
         */
        rtb_Switch_fq = fminf(KeWTAR_t_BrkAplyd_ZrPdLsh_Delay, KeWTAR_t_dT +
                              WTAR_ac_DW.UnitDelay_DSTATE_k2);
    }

    /* End of Switch: '<S1256>/Switch1' */

    /* Update for UnitDelay: '<S1256>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_k2 = rtb_Switch_fq;

    /* Logic: '<S1154>/AND2' incorporates:
     *  Constant: '<S1246>/Calib'
     *  Constant: '<S1247>/Calib'
     *  Constant: '<S1250>/Calib'
     *  Constant: '<S1251>/Calib'
     *  Constant: '<S1252>/Calib'
     *  Logic: '<S1154>/AND3'
     *  Logic: '<S1256>/AND'
     *  RelationalOperator: '<S1154>/Greater  Than4'
     *  RelationalOperator: '<S1154>/Greater  Than5'
     *  RelationalOperator: '<S1256>/Greater  Than'
     */
    VeWTAC_b_ZeroPedalLashCtrl_PstFilRaw =
        (((((KeWTAR_b_BrkPdl4ZeroPedalLash_enable) || (rtb_AND_a2v &&
             (rtb_Switch_fq >= KeWTAR_t_BrkAplyd_ZrPdLsh_Delay))) &&
           (KeWTAR_b_ZeroPedalLash_Enbl)) && (VeWTAI_Pct_AccelPedalEffPosition <
           KeWTAR_Pct_MaxPdl_ZeroPedal)) && (rtb_TmpSignalConversionAtVeCSVR <
          KeWTAR_n_MaxNo_ZeroPdlLsh));

    /* End of Outputs for SubSystem: '<S1154>/Turn On Delay Time1' */

    /* Switch: '<S1154>/Switch2' incorporates:
     *  Constant: '<S1237>/Calib'
     */
    if (HeWTAR_b_ToCLFast_InLash)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S1154>/Add'
         *  UnitDelay: '<S324>/Unit Delay2'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeAX_b +
            WTAR_ac_DW.UnitDelay2_DSTATE_p;
    }
    else
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  UnitDelay: '<S324>/Unit Delay2'
         */
        VeWTAC_M_ToPrdt_xSEM = WTAR_ac_DW.UnitDelay2_DSTATE_p;
    }

    /* End of Switch: '<S1154>/Switch2' */

    /* Switch: '<S1239>/Switch1' incorporates:
     *  Constant: '<S1235>/Constant'
     *  Constant: '<S1244>/Calib'
     *  Constant: '<S1249>/Calib'
     *  RelationalOperator: '<S1154>/Greater  Than3'
     *  RelationalOperator: '<S1154>/Not Equal'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeHADR) !=
                            CeHADR_e_LashStPos);
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq < KeWTAR_M_NegLashTrqThresh);
    }

    /* End of Switch: '<S1239>/Switch1' */

    /* Logic: '<S1154>/AND1' incorporates:
     *  Constant: '<S1242>/Calib'
     *  RelationalOperator: '<S1154>/Greater  Than2'
     */
    VeWTAC_b_NegLashCntrl_PstFilRaw = (rtb_Comparison12 && (VeWTAC_M_ToPrdt_xSEM
        > KeWTAR_M_FrmNegRtLimTrqThresh));

    /* Switch: '<S1238>/Switch1' incorporates:
     *  Constant: '<S1234>/Constant'
     *  Constant: '<S1245>/Calib'
     *  Constant: '<S1249>/Calib'
     *  RelationalOperator: '<S1154>/Greater  Than1'
     *  RelationalOperator: '<S1154>/Not Equal1'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeHADR) !=
                            CeHADR_e_LashStNeg);
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq > KeWTAR_M_PosLashTrqThresh);
    }

    /* End of Switch: '<S1238>/Switch1' */

    /* Logic: '<S1154>/AND' incorporates:
     *  Constant: '<S1243>/Calib'
     *  RelationalOperator: '<S1154>/Greater  Than'
     */
    VeWTAC_b_PosLashCntrl_PstFilRaw = (rtb_Comparison12 && (VeWTAC_M_ToPrdt_xSEM
        < KeWTAR_M_FrmPosRtLimTrqThresh));

    /* UnitDelay: '<S1154>/Unit Delay' */
    rtb_Switch_fq = WTAR_ac_DW.UnitDelay_DSTATE_i;

    /* Switch: '<S319>/Switch3' incorporates:
     *  Lookup_n-D: '<S1301>/Vector'
     */
    VeWTAC_M_ToPrdt_xSEM = rtb_UnitDelay_co;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* RelationalOperator: '<S1274>/Comparison11' incorporates:
     *  Constant: '<S1274>/Constant Value1'
     *  Gain: '<S267>/Gain'
     */
    rtb_AND_a2v = (rtb_Switch1_hk[0] >= 0.0F);

    /* Switch: '<S1274>/Switch3' incorporates:
     *  Constant: '<S1274>/Constant Value3'
     *  RelationalOperator: '<S1274>/Comparison1'
     *  Switch: '<S1274>/Switch1'
     */
    if (rtb_MinMax_n < 0.0F)
    {
        /* Switch: '<S1274>/Switch3' incorporates:
         *  Product: '<S1274>/Product1'
         */
        VeWTAC_M_ToRtLmt_LURaw = -rtb_UnitDelay_co;
    }
    else if (rtb_AND_a2v)
    {
        /* Switch: '<S1274>/Switch1' incorporates:
         *  Switch: '<S1274>/Switch3'
         */
        VeWTAC_M_ToRtLmt_LURaw = rtb_TmpSignalConversionAtVeSC_f;
    }
    else
    {
        /* Switch: '<S1274>/Switch3' incorporates:
         *  Product: '<S1274>/Product1'
         */
        VeWTAC_M_ToRtLmt_LURaw = -rtb_UnitDelay_co;
    }

    /* End of Switch: '<S1274>/Switch3' */

    /* Switch: '<S1274>/Switch2' */
    if (rtb_AND_a2v)
    {
        /* Switch: '<S1274>/Switch2' */
        VeWTAC_M_ToRtLmt_LDRaw = rtb_UnitDelay_co;
    }
    else
    {
        /* Switch: '<S1274>/Switch2' incorporates:
         *  Product: '<S1274>/Product'
         */
        VeWTAC_M_ToRtLmt_LDRaw = -rtb_TmpSignalConversionAtVeSC_f;
    }

    /* End of Switch: '<S1274>/Switch2' */

    /* UnitDelay: '<S1275>/Unit Delay' */
    rtb_Switch1_ee = WTAR_ac_DW.UnitDelay_DSTATE_e;

    /* Switch: '<S1275>/Switch3' */
    if (rtb_OR1_em)
    {
        /* Switch: '<S1275>/Switch3' */
        rtb_Switch1_ee = rtb_MinMax_n;
    }
    else
    {
        /* Sum: '<S1275>/Sum2' */
        rtb_Abs1_gm = rtb_MinMax_n - rtb_Switch1_ee;

        /* Outputs for Atomic SubSystem: '<S1275>/Limiter' */
        /* Switch: '<S1303>/Switch1' incorporates:
         *  RelationalOperator: '<S1303>/Relational Operator'
         */
        if (VeWTAC_M_ToRtLmt_LURaw < rtb_Abs1_gm)
        {
            /* Switch: '<S1303>/Switch1' */
            rtb_Abs1_gm = VeWTAC_M_ToRtLmt_LURaw;
        }

        /* End of Switch: '<S1303>/Switch1' */

        /* Switch: '<S1303>/Switch' incorporates:
         *  RelationalOperator: '<S1303>/Relational Operator1'
         */
        if (rtb_Abs1_gm <= VeWTAC_M_ToRtLmt_LDRaw)
        {
            rtb_Abs1_gm = VeWTAC_M_ToRtLmt_LDRaw;
        }

        /* End of Switch: '<S1303>/Switch' */
        /* End of Outputs for SubSystem: '<S1275>/Limiter' */

        /* Switch: '<S1275>/Switch3' incorporates:
         *  Sum: '<S1275>/Sum3'
         */
        rtb_Switch1_ee += rtb_Abs1_gm;
    }

    /* End of Switch: '<S1275>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S1275>/Limiter1' */
    /* Switch: '<S1304>/Switch1' incorporates:
     *  Constant: '<S1275>/Constant Value3'
     *  RelationalOperator: '<S1304>/Relational Operator'
     */
    if (100000.0F < rtb_Switch1_ee)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Switch1_ee;
    }

    /* End of Switch: '<S1304>/Switch1' */

    /* Switch: '<S1304>/Switch' incorporates:
     *  RelationalOperator: '<S1304>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4ProcessMainFilter)
    {
        /* Switch: '<S1304>/Switch' */
        VeWTAC_M_PostRateLimRaw = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1304>/Switch' */
        VeWTAC_M_PostRateLimRaw = VeWTAC_M_Min4ProcessMainFilter;
    }

    /* End of Switch: '<S1304>/Switch' */
    /* End of Outputs for SubSystem: '<S1275>/Limiter1' */

    /* Sum: '<S1271>/Subtraction1' incorporates:
     *  UnitDelay: '<S1155>/Unit Delay1'
     */
    rtb_Switch1_ee = VeWTAC_M_PostRateLimRaw - WTAR_ac_DW.UnitDelay1_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S1271>/Hysteresis' */
    /* Switch: '<S1277>/Switch1' incorporates:
     *  Constant: '<S1279>/Calib'
     *  RelationalOperator: '<S1277>/Greater  Than'
     */
    if (rtb_Switch1_ee > KeWTAR_M_Resp_HystPos)
    {
        /* Switch: '<S1277>/Switch1' incorporates:
         *  Constant: '<S1277>/Constant Value'
         */
        rtb_AND_a2v = true;
    }
    else
    {
        /* Switch: '<S1277>/Switch1' incorporates:
         *  Constant: '<S1278>/Calib'
         *  RelationalOperator: '<S1277>/Greater  Than1'
         *  UnitDelay: '<S1277>/Unit Delay'
         */
        rtb_AND_a2v = ((rtb_Switch1_ee >= KeWTAR_M_Resp_HystNeg) &&
                       (WTAR_ac_DW.UnitDelay_DSTATE_dk));
    }

    /* End of Switch: '<S1277>/Switch1' */

    /* Update for UnitDelay: '<S1277>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_dk = rtb_AND_a2v;

    /* End of Outputs for SubSystem: '<S1271>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S1199>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S1271>/EdgeFalling' */
    /* Logic: '<S1276>/OR1' incorporates:
     *  Logic: '<S1226>/OR1'
     */
    rtb_TmpSignalConversionAtVeDT_a = !rtb_OR1_em;

    /* End of Outputs for SubSystem: '<S1199>/EdgeFalling' */

    /* Logic: '<S1276>/AND' incorporates:
     *  Logic: '<S1276>/OR1'
     *  UnitDelay: '<S1276>/Unit Delay'
     */
    rtb_AND_ok = (rtb_TmpSignalConversionAtVeDT_a &&
                  (WTAR_ac_DW.UnitDelay_DSTATE_fb));

    /* Update for UnitDelay: '<S1276>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_fb = rtb_OR1_em;

    /* End of Outputs for SubSystem: '<S1271>/EdgeFalling' */

    /* Logic: '<S1271>/Logical' */
    rtb_AND_ok = (rtb_AND_ok || rtb_OR1_em);

    /* Switch: '<S1271>/Switch4' incorporates:
     *  Constant: '<S1280>/Calib'
     */
    if (KeWTAR_b_FilCoeff_SrcSel)
    {
        /* Switch: '<S1271>/Switch4' incorporates:
         *  Abs: '<S1271>/Abs'
         *  Sum: '<S1271>/Subtraction2'
         */
        rtb_Switch1_ee = VeWTAR_M_Max4Process - fabsf(VeWTAC_M_PostRateLimRaw);
    }
    else
    {
        /* Switch: '<S1271>/Switch4' */
        rtb_Switch1_ee = VeWTAI_Pct_AccelPedalEffPosition;
    }

    /* End of Switch: '<S1271>/Switch4' */

    /* If: '<S1271>/If' */
    rtb_Comparison12 = !rtb_AND_ok;
    if (rtb_AND_a2v && rtb_Comparison12)
    {
        /* Outputs for IfAction SubSystem: '<S1271>/PosSlowResp' incorporates:
         *  ActionPort: '<S1285>/Action Port'
         */
        WTAR_ac_PosSlowResp(VeWTAC_k_PosKD, rtb_Switch1_ee, VeWTAC_k_PosKT,
                            (&(VeWTAC_k_KDFilterCoeffsRaw)),
                            (&(VeWTAC_k_KTFilterCoeffsRaw)));

        /* End of Outputs for SubSystem: '<S1271>/PosSlowResp' */
    }
    else if (rtb_AND_a2v && rtb_AND_ok)
    {
        /* Outputs for IfAction SubSystem: '<S1271>/PosFastResp' incorporates:
         *  ActionPort: '<S1284>/Action Port'
         */
        WTAR_ac_PosFastResp((&(VeWTAC_k_KDFilterCoeffsRaw)),
                            (&(VeWTAC_k_KTFilterCoeffsRaw)));

        /* End of Outputs for SubSystem: '<S1271>/PosFastResp' */
    }
    else
    {
        rtb_OR1_a5 = !rtb_AND_a2v;
        if (rtb_OR1_a5 && rtb_Comparison12)
        {
            /* Outputs for IfAction SubSystem: '<S1271>/NegSlowResp' incorporates:
             *  ActionPort: '<S1283>/Action Port'
             */
            WTAR_ac_NegSlowResp(VeWTAC_k_NegKD, rtb_Switch1_ee, VeWTAC_k_NegKT,
                                (&(VeWTAC_k_KDFilterCoeffsRaw)),
                                (&(VeWTAC_k_KTFilterCoeffsRaw)));

            /* End of Outputs for SubSystem: '<S1271>/NegSlowResp' */
        }
        else
        {
            if (rtb_OR1_a5 && rtb_AND_ok)
            {
                /* Outputs for IfAction SubSystem: '<S1271>/NegFastResp' incorporates:
                 *  ActionPort: '<S1282>/Action Port'
                 */
                WTAR_ac_NegFastResp((&(VeWTAC_k_KDFilterCoeffsRaw)),
                                    (&(VeWTAC_k_KTFilterCoeffsRaw)));

                /* End of Outputs for SubSystem: '<S1271>/NegFastResp' */
            }
        }
    }

    /* End of If: '<S1271>/If' */

    /* Product: '<S1272>/Multiplication3' incorporates:
     *  Constant: '<S1273>/Calib'
     *  Sum: '<S1272>/Subtraction1'
     *  UnitDelay: '<S1272>/Unit Delay1'
     *  UnitDelay: '<S1272>/Unit Delay4'
     */
    rtb_Switch1_ee = (WTAR_ac_DW.UnitDelay4_DSTATE_c -
                      WTAR_ac_DW.UnitDelay1_DSTATE_f3) * KeWTAR_t_dT;

    /* MinMax: '<S1272>/Maximum' incorporates:
     *  Constant: '<S1273>/Calib'
     */
    rtb_Abs1_gm = fmaxf(VeWTAC_k_KTFilterCoeffsRaw, KeWTAR_t_dT);

    /* Outputs for Atomic SubSystem: '<S1272>/Protected Division' */
    /* Switch: '<S1300>/Switch1' incorporates:
     *  Constant: '<S1300>/Constant Value'
     *  Constant: '<S1300>/Constant Value1'
     *  Constant: '<S1300>/Constant Value2'
     *  Constant: '<S1300>/Constant Value3'
     *  Logic: '<S1300>/AND'
     *  RelationalOperator: '<S1300>/Greater Than or Equal '
     *  RelationalOperator: '<S1300>/Greater Than or Equal 1'
     *  RelationalOperator: '<S1300>/Not Equal'
     *  RelationalOperator: '<S1300>/Not Equal1'
     *  Switch: '<S1300>/Switch2'
     *  Switch: '<S1300>/Switch3'
     */
    if ((rtb_Switch1_ee != 0.0F) && (rtb_Abs1_gm != 0.0F))
    {
        /* Switch: '<S1300>/Switch1' incorporates:
         *  Product: '<S1300>/Division'
         */
        rtb_Switch1_ee /= rtb_Abs1_gm;
    }
    else if (rtb_Switch1_ee > 0.0F)
    {
        /* Switch: '<S1300>/Switch2' incorporates:
         *  Constant: '<S1300>/MAXFLOAT'
         *  Switch: '<S1300>/Switch1'
         */
        rtb_Switch1_ee = 3.402823466E+38F;
    }
    else if (rtb_Switch1_ee < 0.0F)
    {
        /* Switch: '<S1300>/Switch3' incorporates:
         *  Constant: '<S1300>/MINFLOAT'
         *  Switch: '<S1300>/Switch1'
         *  Switch: '<S1300>/Switch2'
         */
        rtb_Switch1_ee = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S1300>/Switch1' incorporates:
         *  Constant: '<S1300>/Constant Value4'
         *  Switch: '<S1300>/Switch2'
         *  Switch: '<S1300>/Switch3'
         */
        rtb_Switch1_ee = 0.0F;
    }

    /* End of Switch: '<S1300>/Switch1' */
    /* End of Outputs for SubSystem: '<S1272>/Protected Division' */

    /* Sum: '<S1272>/Summation2' incorporates:
     *  Product: '<S1272>/Multiplication5'
     *  Sum: '<S1272>/Subtraction2'
     *  Sum: '<S1272>/Summation3'
     *  UnitDelay: '<S1272>/Unit Delay1'
     *  UnitDelay: '<S1272>/Unit Delay4'
     */
    rtb_Switch1_ee = ((VeWTAC_M_PostRateLimRaw - WTAR_ac_DW.UnitDelay4_DSTATE_c)
                      * VeWTAC_k_KDFilterCoeffsRaw) + (rtb_Switch1_ee +
        WTAR_ac_DW.UnitDelay1_DSTATE_f3);

    /* Outputs for Atomic SubSystem: '<S1272>/Limiter1' */
    /* Switch: '<S1298>/Switch1' incorporates:
     *  Constant: '<S1272>/Constant Value3'
     *  RelationalOperator: '<S1298>/Relational Operator'
     */
    if (100000.0F < rtb_Switch1_ee)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Switch1_ee;
    }

    /* End of Switch: '<S1298>/Switch1' */

    /* Switch: '<S1298>/Switch' incorporates:
     *  RelationalOperator: '<S1298>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4ProcessMainFilter)
    {
        /* Switch: '<S1298>/Switch' */
        VeWTAC_M_AfterMainFilterRaw = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1298>/Switch' */
        VeWTAC_M_AfterMainFilterRaw = VeWTAC_M_Min4ProcessMainFilter;
    }

    /* End of Switch: '<S1298>/Switch' */
    /* End of Outputs for SubSystem: '<S1272>/Limiter1' */

    /* If: '<S1154>/If' incorporates:
     *  Constant: '<S1248>/Calib'
     */
    if (rtb_OR1_em)
    {
        /* Outputs for IfAction SubSystem: '<S1154>/ByPass' incorporates:
         *  ActionPort: '<S1233>/Action Port'
         */
        WTAR_ac_ByPass(&VeWTAC_M_ToPrdt_xSEM, &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S1154>/ByPass' */
    }
    else if (VeWTAC_b_ZeroPedalLashCtrl_PstFilRaw)
    {
        /* Outputs for IfAction SubSystem: '<S1154>/ZeroPedalLash' incorporates:
         *  ActionPort: '<S1257>/Action Port'
         */
        WTAR_ac_ZeroPedalLash(rtb_Switch_fq, rtb_TmpSignalConversionAtVeCSVR,
                              &VeWTAC_M_ToPrdt_xSEM, &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S1154>/ZeroPedalLash' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_NegLashCntrl_PstFilRaw))
    {
        /* Outputs for IfAction SubSystem: '<S1154>/InNegLashCntrl' incorporates:
         *  ActionPort: '<S1240>/Action Port'
         */
        WTAR_ac_InNegLashCntrl(rtb_Switch_fq, rtb_TmpSignalConversionAtVeCSVR,
                               VeWTAC_k_NegLashFac, &VeWTAC_M_ToPrdt_xSEM,
                               &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S1154>/InNegLashCntrl' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_PosLashCntrl_PstFilRaw))
    {
        /* Outputs for IfAction SubSystem: '<S1154>/InPosLashCntrl' incorporates:
         *  ActionPort: '<S1241>/Action Port'
         */
        WTAR_ac_InPosLashCntrl(rtb_Switch_fq, rtb_TmpSignalConversionAtVeCSVR,
                               VeWTAC_k_PosLashFac, &VeWTAC_M_ToPrdt_xSEM,
                               &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S1154>/InPosLashCntrl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1154>/NotInLash' incorporates:
         *  ActionPort: '<S1254>/Action Port'
         */
        /* Abs: '<S1254>/Abs' incorporates:
         *  Sum: '<S1254>/Add'
         */
        rtb_Switch_fq = fabsf(VeWTAC_M_AfterMainFilterRaw - rtb_Switch_fq);

        /* Lookup_n-D: '<S1264>/Vector' incorporates:
         *  Abs: '<S1254>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LD_PstFilRaw = look2_iflf_binlcapw(rtb_Switch_fq,
            rtb_Maximum_i, ((const float32 *)&(KxWTAR_dM_NotLashToNo_LD_PstFil[0])),
            ((const float32 *)&(KyWTAR_dM_NotLashToNo_LD_PstFil[0])), ((const
            float32 *)&(KtWTAR_dM_NotLashToNo_LD_PstFil[0])),
            WTAR_ac_ConstP.pooled21, 8U);

        /* Lookup_n-D: '<S1265>/Vector' incorporates:
         *  Abs: '<S1254>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LU_PstFilRaw = look2_iflf_binlcapw(rtb_Switch_fq,
            rtb_Maximum_i, ((const float32 *)&(KxWTAR_dM_NotLashToNo_LU_PstFil[0])),
            ((const float32 *)&(KyWTAR_dM_NotLashToNo_LU_PstFil[0])), ((const
            float32 *)&(KtWTAR_dM_NotLashToNo_LU_PstFil[0])),
            WTAR_ac_ConstP.pooled21, 8U);

        /* Switch: '<S319>/Switch3' incorporates:
         *  Product: '<S1254>/Multiplication1'
         */
        VeWTAC_M_ToPrdt_xSEM = VeWTAC_dM_NoLashToNo_LU_PstFilRaw *
            VeWTAC_k_NotInLashFac;

        /* Switch: '<S319>/Switch2' incorporates:
         *  Product: '<S1254>/Multiplication2'
         */
        rtb_Sum3_gl = VeWTAC_k_NotInLashFac * VeWTAC_dM_NoLashToNo_LD_PstFilRaw;

        /* End of Outputs for SubSystem: '<S1154>/NotInLash' */
    }

    /* MinMax: '<S1154>/MinMax4' */
    rtb_Switch_fq = fminf(VeWTAC_dM_TCMGradLim_Up_dt, VeWTAC_M_ToPrdt_xSEM);

    /* MinMax: '<S1154>/MinMax3' */
    rtb_Switch1_ee = fmaxf(VeWTAC_dM_TCMGradLim_Lo_dt, rtb_Sum3_gl);

    /* Sum: '<S1255>/Sum2' incorporates:
     *  UnitDelay: '<S1255>/Unit Delay1'
     */
    rtb_Abs1_gm = VeWTAC_M_AfterMainFilterRaw - WTAR_ac_DW.UnitDelay1_DSTATE_ki;

    /* Outputs for Atomic SubSystem: '<S1255>/Limiter' */
    /* Switch: '<S1266>/Switch1' incorporates:
     *  RelationalOperator: '<S1266>/Relational Operator'
     */
    if (rtb_Switch_fq < rtb_Abs1_gm)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Switch_fq;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Abs1_gm;
    }

    /* End of Switch: '<S1266>/Switch1' */

    /* Switch: '<S1266>/Switch' incorporates:
     *  RelationalOperator: '<S1266>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_Switch1_ee)
    {
        rtb_Switch1_ee = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S1266>/Switch' */
    /* End of Outputs for SubSystem: '<S1255>/Limiter' */

    /* Sum: '<S1255>/Sum3' incorporates:
     *  UnitDelay: '<S1255>/Unit Delay1'
     */
    rtb_Switch_fq = rtb_Switch1_ee + WTAR_ac_DW.UnitDelay1_DSTATE_ki;

    /* Outputs for Atomic SubSystem: '<S1255>/Limiter1' */
    /* Switch: '<S1267>/Switch1' incorporates:
     *  Constant: '<S1154>/Constant Value10'
     *  RelationalOperator: '<S1267>/Relational Operator'
     */
    if (100000.0F < rtb_Switch_fq)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Switch_fq;
    }

    /* End of Switch: '<S1267>/Switch1' */

    /* Switch: '<S1267>/Switch' incorporates:
     *  RelationalOperator: '<S1267>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S1267>/Switch' */
        rtb_Switch_fq = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1267>/Switch' */
        rtb_Switch_fq = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S1267>/Switch' */
    /* End of Outputs for SubSystem: '<S1255>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S1150>/Digital Lowpass Reset Enabled1' */
    /* Sum: '<S1196>/Summation' incorporates:
     *  Constant: '<S1197>/Calib'
     *  Product: '<S1196>/Multiplication'
     *  Sum: '<S1196>/Subtraction'
     *  UnitDelay: '<S1196>/Unit Delay'
     */
    rtb_Switch1_ee = ((rtb_TmpSignalConversionAtVeSC_c -
                       WTAR_ac_DW.UnitDelay_DSTATE_p) *
                      KeWTAR_r_FltCoeff_TactMax) + WTAR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S1196>/Unit Delay' incorporates:
     *  Switch: '<S1196>/Switch2'
     */
    WTAR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_ee;

    /* MinMax: '<S1150>/MinMax' incorporates:
     *  Switch: '<S1196>/Switch2'
     */
    rtb_Switch1_ee = fminf(rtb_Switch_fq, rtb_Switch1_ee);

    /* End of Outputs for SubSystem: '<S1150>/Digital Lowpass Reset Enabled1' */

    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  RelationalOperator: '<S1199>/Comparison'
     *  UnitDelay: '<S1199>/Unit Delay1'
     */
    rtb_Comparison12 = (rtb_Switch1_ee > WTAR_ac_DW.UnitDelay1_DSTATE_ck);

    /* Switch: '<S1199>/Switch3' incorporates:
     *  Logic: '<S1199>/Logical1'
     *  Logic: '<S1199>/Logical2'
     *  RelationalOperator: '<S1199>/Comparison2'
     *  UnitDelay: '<S1199>/Unit Delay2'
     */
    if ((WTAR_ac_DW.UnitDelay2_DSTATE_o > rtb_Switch1_ee) && (!rtb_Comparison12))
    {
        /* Switch: '<S1199>/Switch3' incorporates:
         *  Constant: '<S1199>/Constant Value3'
         */
        rtb_Abs1_gm = 0.0F;
    }
    else
    {
        /* Switch: '<S1199>/Switch3' incorporates:
         *  Constant: '<S1199>/Constant Value4'
         */
        rtb_Abs1_gm = 1.0E+6F;
    }

    /* End of Switch: '<S1199>/Switch3' */

    /* Switch: '<S1199>/Switch2' incorporates:
     *  Logic: '<S1199>/Logical'
     *  RelationalOperator: '<S1199>/Comparison1'
     *  UnitDelay: '<S1199>/Unit Delay2'
     */
    if (rtb_Comparison12 && (WTAR_ac_DW.UnitDelay2_DSTATE_o < rtb_Switch1_ee))
    {
        /* Switch: '<S1199>/Switch2' incorporates:
         *  Constant: '<S1199>/Constant Value'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S1199>/Switch2' incorporates:
         *  Constant: '<S1199>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = -1.0E+6F;
    }

    /* End of Switch: '<S1199>/Switch2' */

    /* Sum: '<S1198>/Sum1' incorporates:
     *  UnitDelay: '<S1198>/Unit Delay2'
     */
    rtb_Sum1_oe = VeWTAI_Pct_AccelPedalEffPosition -
        WTAR_ac_DW.UnitDelay2_DSTATE_bw;

    /* Outputs for Atomic SubSystem: '<S1198>/Hysteresis' */
    /* Switch: '<S1214>/Switch1' incorporates:
     *  Constant: '<S1215>/Calib'
     *  RelationalOperator: '<S1214>/Greater  Than'
     */
    if (rtb_Sum1_oe > KeWTAR_Pct_TipInThresh)
    {
        /* Switch: '<S1214>/Switch1' incorporates:
         *  Constant: '<S1214>/Constant Value'
         */
        VeWTAC_b_TipInOut_Detect_Raw = true;
    }
    else
    {
        /* Switch: '<S1214>/Switch1' incorporates:
         *  Constant: '<S1216>/Calib'
         *  RelationalOperator: '<S1214>/Greater  Than1'
         *  UnitDelay: '<S1214>/Unit Delay'
         */
        VeWTAC_b_TipInOut_Detect_Raw = ((rtb_Sum1_oe >= KeWTAR_Pct_TipOutThresh)
            && (WTAR_ac_DW.UnitDelay_DSTATE_c4));
    }

    /* End of Switch: '<S1214>/Switch1' */

    /* Update for UnitDelay: '<S1214>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_c4 = VeWTAC_b_TipInOut_Detect_Raw;

    /* End of Outputs for SubSystem: '<S1198>/Hysteresis' */

    /* Switch: '<S1198>/Switch4' incorporates:
     *  Constant: '<S1219>/Calib'
     *  Constant: '<S1220>/Calib'
     */
    if (VeWTAC_b_TipInOut_Detect_Raw)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipOut;
    }

    /* End of Switch: '<S1198>/Switch4' */

    /* Product: '<S1198>/Product2' incorporates:
     *  Constant: '<S1221>/Calib'
     *  Product: '<S1198>/Multiplication1'
     */
    VeWTAR_Cnt_DelayPredExtra_Raw_Single = (rtb_Switch1_bbt * rtb_Switch13) /
        KeWTAR_t_dT;

    /* Chart: '<S1198>/ConvertSingletoUint16_1' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayPredExtra_Raw_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_1_m);

    /* Gain: '<S1224>/Gain' */
    VeWTAC_Cnt_DelayPredExtra_Raw =
        WTAR_ac_B.sf_ConvertSingletoUint16_1_m.Uint16_out;

    /* S-Function (sfix_bitop): '<S1357>/Bitwise Logical Operator' incorporates:
     *  Constant: '<S1199>/Constant Value5'
     *  S-Function (sfix_bitop): '<S1199>/Bitwise Logical Operator'
     *  Sum: '<S1199>/Sum'
     *  UnitDelay: '<S1199>/Unit Delay3'
     */
    rtb_Switch1_g = (uint16)(((uint16)(((uint32)WTAR_ac_DW.UnitDelay3_DSTATE_og)
        + 1U)) & ((uint16)31));

    /* Outputs for Atomic SubSystem: '<S1199>/EdgeFalling' */
    /* Logic: '<S1226>/AND' incorporates:
     *  UnitDelay: '<S1226>/Unit Delay'
     */
    WTAR_ac_B.AND_gb = (rtb_TmpSignalConversionAtVeDT_a &&
                        (WTAR_ac_DW.UnitDelay_DSTATE_ax));

    /* Update for UnitDelay: '<S1226>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ax = rtb_OR1_em;

    /* End of Outputs for SubSystem: '<S1199>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S1199>/WashMemory' */
    /* Sum: '<S1199>/Sum1' incorporates:
     *  Constant: '<S1199>/Constant Value6'
     *  S-Function (sfix_bitop): '<S1199>/Bitwise Logical Operator1'
     */
    WTAR_ac_WashMemory(WTAR_ac_B.AND_gb, (uint16)(((uint32)
                         VeWTAC_Cnt_DelayPredExtra_Raw) + 1U), rtb_Switch1_g,
                       rtb_Switch1_ee, &WTAR_ac_B.WashMemory_j);

    /* End of Outputs for SubSystem: '<S1199>/WashMemory' */

    /* Outputs for Atomic SubSystem: '<S1199>/Count Down  Reset Enabled' */
    /* Switch: '<S1225>/Switch1' incorporates:
     *  Constant: '<S1225>/Constant Value'
     *  RelationalOperator: '<S1225>/Greater  Than'
     *  Switch: '<S1225>/Switch2'
     *  UnitDelay: '<S1225>/Unit Delay'
     */
    if (WTAR_ac_B.AND_gb)
    {
        /* Switch: '<S1225>/Switch1' */
        rtb_Switch1_av = VeWTAC_Cnt_DelayPredExtra_Raw;
    }
    else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_mc) > 0)
    {
        /* Switch: '<S1225>/Switch2' incorporates:
         *  Constant: '<S1225>/Constant Value1'
         *  Sum: '<S1225>/Subtraction'
         *  Switch: '<S1225>/Switch1'
         *  UnitDelay: '<S1225>/Unit Delay'
         */
        rtb_Switch1_av = (uint16)((sint32)(((sint32)
            WTAR_ac_DW.UnitDelay_DSTATE_mc) - 1));
    }
    else
    {
        /* Switch: '<S1225>/Switch1' incorporates:
         *  Switch: '<S1225>/Switch2'
         *  UnitDelay: '<S1225>/Unit Delay'
         */
        rtb_Switch1_av = WTAR_ac_DW.UnitDelay_DSTATE_mc;
    }

    /* End of Switch: '<S1225>/Switch1' */

    /* RelationalOperator: '<S1225>/Greater  Than1' incorporates:
     *  Constant: '<S1225>/Constant Value2'
     */
    VeWTAC_b_UseWashedToPrd_Raw = (((sint32)rtb_Switch1_av) > 0);

    /* Update for UnitDelay: '<S1225>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_mc = rtb_Switch1_av;

    /* End of Outputs for SubSystem: '<S1199>/Count Down  Reset Enabled' */

    /* Switch: '<S1199>/Switch1' */
    if (VeWTAC_b_UseWashedToPrd_Raw)
    {
        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.WashMemory_j.ArrayAssignment[0];
    }
    else
    {
        /* Assignment: '<S1199>/Array Assignment' incorporates:
         *  S-Function (sfix_bitop): '<S1199>/Bitwise Logical Operator1'
         */
        WTAR_ac_B.ArrayAssignment_e[rtb_Switch1_g] = rtb_Switch1_ee;

        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.ArrayAssignment_e[0];
    }

    /* End of Switch: '<S1199>/Switch1' */

    /* Switch: '<S1198>/Switch1' incorporates:
     *  Constant: '<S1217>/Calib'
     *  Constant: '<S1218>/Calib'
     */
    if (VeWTAC_b_TipInOut_Detect_Raw)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipOut;
    }

    /* End of Switch: '<S1198>/Switch1' */

    /* Product: '<S1198>/Product1' incorporates:
     *  Constant: '<S1221>/Calib'
     *  Product: '<S1198>/Multiplication3'
     */
    VeWTAR_Cnt_DelayImmed_Raw_Single = (rtb_Switch13 * rtb_Switch1_bbt) /
        KeWTAR_t_dT;

    /* Chart: '<S1198>/ConvertSingletoUint16_2' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayImmed_Raw_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_2_f);

    /* Gain: '<S1223>/Gain' */
    VeWTAC_Cnt_DelayImmed_Raw =
        WTAR_ac_B.sf_ConvertSingletoUint16_2_f.Uint16_out;

    /* Selector: '<S1199>/Selector' incorporates:
     *  Logic: '<S1199>/Logical3'
     *  Switch: '<S1199>/Switch'
     */
    if (!rtb_OR1_em)
    {
        rtb_Switch_pb = VeWTAC_Cnt_DelayPredExtra_Raw;
    }
    else
    {
        rtb_Switch_pb = VeWTAC_Cnt_DelayImmed_Raw;
    }

    /* Outputs for Atomic SubSystem: '<S1199>/GradientLimiter' */
    /* Sum: '<S1227>/Sum2' incorporates:
     *  S-Function (sfix_bitop): '<S1199>/Bitwise Logical Operator2'
     *  Selector: '<S1199>/Selector'
     *  Sum: '<S1199>/Sum2'
     *  UnitDelay: '<S1227>/Unit Delay'
     */
    rtb_Sum3_gl = rtb_Switch1_hy_0[((uint16)(rtb_Switch1_g - rtb_Switch_pb)) &
        ((uint16)31)] - WTAR_ac_DW.UnitDelay_DSTATE_mi;

    /* Outputs for Atomic SubSystem: '<S1227>/Limiter' */
    /* Switch: '<S1230>/Switch1' incorporates:
     *  RelationalOperator: '<S1230>/Relational Operator'
     */
    if (rtb_Abs1_gm < rtb_Sum3_gl)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = rtb_Abs1_gm;
    }

    /* End of Switch: '<S1230>/Switch1' */

    /* Switch: '<S1230>/Switch' incorporates:
     *  RelationalOperator: '<S1230>/Relational Operator1'
     */
    if (rtb_Sum3_gl > VeWTAC_M_ToPrdt_xSEM)
    {
        VeWTAC_M_ToPrdt_xSEM = rtb_Sum3_gl;
    }

    /* End of Switch: '<S1230>/Switch' */
    /* End of Outputs for SubSystem: '<S1227>/Limiter' */

    /* Sum: '<S1227>/Sum3' incorporates:
     *  UnitDelay: '<S1227>/Unit Delay'
     */
    rtb_Abs1_gm = VeWTAC_M_ToPrdt_xSEM + WTAR_ac_DW.UnitDelay_DSTATE_mi;

    /* Outputs for Atomic SubSystem: '<S1227>/Limiter1' */
    /* Switch: '<S1231>/Switch1' incorporates:
     *  Constant: '<S1199>/Constant Value2'
     *  RelationalOperator: '<S1231>/Relational Operator'
     */
    if (100000.0F < rtb_Abs1_gm)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_Abs1_gm;
    }

    /* End of Switch: '<S1231>/Switch1' */

    /* Switch: '<S1231>/Switch' incorporates:
     *  RelationalOperator: '<S1231>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S1231>/Switch' */
        rtb_Abs1_gm = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1231>/Switch' */
        rtb_Abs1_gm = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S1231>/Switch' */
    /* End of Outputs for SubSystem: '<S1227>/Limiter1' */

    /* Update for UnitDelay: '<S1227>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_mi = rtb_Abs1_gm;

    /* End of Outputs for SubSystem: '<S1199>/GradientLimiter' */

    /* If: '<S1195>/If1' incorporates:
     *  Constant: '<S1201>/Calib'
     */
    if (KeWTAR_b_EnblToDelayCushion)
    {
        /* Outputs for IfAction SubSystem: '<S1195>/Enabled' incorporates:
         *  ActionPort: '<S1200>/Action Port'
         */
        WTAR_ac_Enabled(rtb_Switch1_ee, rtb_Abs1_gm, VeWTAC_M_Min4Process,
                        (&(VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw)),
                        &WTAR_ac_DW.Enabled_d);

        /* End of Outputs for SubSystem: '<S1195>/Enabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1195>/Pass' incorporates:
         *  ActionPort: '<S1203>/Action Port'
         */
        WTAR_ac_Pass(rtb_Abs1_gm, (&(VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw)));

        /* End of Outputs for SubSystem: '<S1195>/Pass' */
    }

    /* End of If: '<S1195>/If1' */

    /* Outputs for Atomic SubSystem: '<S1147>/Hysteresis' */
    /* Switch: '<S1159>/Switch1' incorporates:
     *  Constant: '<S1163>/Calib'
     *  RelationalOperator: '<S1159>/Greater  Than'
     */
    if (rtb_Switch3_c1 > KeWTAR_Pct_CurbClimbingGradeCheckRSP)
    {
        /* Switch: '<S1159>/Switch1' incorporates:
         *  Constant: '<S1159>/Constant Value'
         */
        rtb_OR1_em = true;
    }
    else
    {
        /* Switch: '<S1159>/Switch1' incorporates:
         *  Constant: '<S1162>/Calib'
         *  RelationalOperator: '<S1159>/Greater  Than1'
         *  UnitDelay: '<S1159>/Unit Delay'
         */
        rtb_OR1_em = ((rtb_Switch3_c1 >= KeWTAR_Pct_CurbClimbingGradeCheckLSP) &&
                      (WTAR_ac_DW.UnitDelay_DSTATE_nte));
    }

    /* End of Switch: '<S1159>/Switch1' */

    /* Update for UnitDelay: '<S1159>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nte = rtb_OR1_em;

    /* End of Outputs for SubSystem: '<S1147>/Hysteresis' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Logic: '<S1147>/Logical' incorporates:
     *  Abs: '<S321>/Abs'
     *  Constant: '<S1147>/Constant Value1'
     *  Constant: '<S1147>/Constant Value2'
     *  Constant: '<S1160>/Calib'
     *  Constant: '<S1164>/Calib'
     *  Constant: '<S1165>/Calib'
     *  Constant: '<S1166>/Calib'
     *  Constant: '<S1167>/Calib'
     *  Constant: '<S1168>/Calib'
     *  Constant: '<S1173>/Calib'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S1147>/Logical1'
     *  Logic: '<S1147>/Logical2'
     *  Logic: '<S1147>/Logical3'
     *  Logic: '<S1147>/Logical6'
     *  Logic: '<S1147>/Logical7'
     *  RelationalOperator: '<S1147>/Comparison1'
     *  RelationalOperator: '<S1147>/Comparison10'
     *  RelationalOperator: '<S1147>/Comparison11'
     *  RelationalOperator: '<S1147>/Comparison2'
     *  RelationalOperator: '<S1147>/Comparison3'
     *  RelationalOperator: '<S1147>/Comparison7'
     *  RelationalOperator: '<S1147>/Comparison9'
     */
    VeWTAC_b_TorqueCheckEnable_Raw = ((((((rtb_TmpSignalConversionAtVeBTQR <
        KeWTAR_M_CurbClimbingBreakCheck) && (rtb_Maximum_i <
        KeWTAR_n_CurbClimbingSpeedCheck)) && (VeWTAI_Pct_AccelPedalEffPosition >
        KeWTAR_Pct_CurbClimbingPedalCheck)) && (!rtb_OR1_em)) &&
        (((KeWTAR_b_EnableDforCurbClimbing) && (rtb_Switch1_hk[0] > 0.0F)) ||
         ((KeWTAR_b_EnableRforCurbClimbing) && (rtb_Switch1_hk[0] < 0.0F)))) &&
        ((VeWTAI_T_MtrB_Temp < KeWTAR_T_CurbClimbing_MtrBTempCheck) &&
         (VeWTAI_T_MtrB_InvrtrTemp < KeWTAR_T_CurbClimbing_InvrtrBTempCheck)));

    /* Outputs for Atomic SubSystem: '<S1147>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S1179>/EdgeRising' */
    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  UnitDelay: '<S1194>/Unit Delay'
     */
    rtb_Comparison12 = WTAR_ac_DW.UnitDelay_DSTATE_d1;

    /* Update for UnitDelay: '<S1194>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_d1 = VeWTAC_b_TorqueCheckEnable_Raw;

    /* Switch: '<S1179>/Switch1' incorporates:
     *  Logic: '<S1179>/OR'
     *  Logic: '<S1179>/OR1'
     *  Logic: '<S1194>/AND'
     *  Logic: '<S1194>/OR1'
     */
    if ((!VeWTAC_b_TorqueCheckEnable_Raw) || ((VeWTAC_b_TorqueCheckEnable_Raw) &&
         (!rtb_Comparison12)))
    {
        /* Switch: '<S1179>/Switch1' incorporates:
         *  Constant: '<S1179>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S1179>/Switch1' incorporates:
         *  Constant: '<S1174>/Calib'
         *  Constant: '<S1176>/Calib'
         *  MinMax: '<S1179>/Minimum'
         *  Sum: '<S1179>/Summation'
         *  UnitDelay: '<S1179>/Unit Delay'
         */
        VeWTAC_M_ToPrdt_xSEM = fminf(KeWTAR_t_CurbClimbingTorqChkTime,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_co);
    }

    /* End of Switch: '<S1179>/Switch1' */
    /* End of Outputs for SubSystem: '<S1179>/EdgeRising' */

    /* Logic: '<S1179>/AND' incorporates:
     *  Constant: '<S1174>/Calib'
     *  RelationalOperator: '<S1179>/Greater  Than'
     */
    rtb_OR1_em = ((VeWTAC_b_TorqueCheckEnable_Raw) && (VeWTAC_M_ToPrdt_xSEM >=
                   KeWTAR_t_CurbClimbingTorqChkTime));

    /* Update for UnitDelay: '<S1179>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_co = VeWTAC_M_ToPrdt_xSEM;

    /* End of Outputs for SubSystem: '<S1147>/Turn On Delay Time1' */

    /* Outputs for Enabled SubSystem: '<S1147>/TorqueReduction' incorporates:
     *  EnablePort: '<S1177>/Enable'
     */
    if (rtb_OR1_em)
    {
        /* Outputs for Atomic SubSystem: '<S1177>/Count Down  Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S1183>/EdgeRising' */
        /* Logic: '<S1191>/OR1' incorporates:
         *  UnitDelay: '<S1191>/Unit Delay'
         */
        rtb_AND_a2v = !WTAR_ac_DW.UnitDelay_DSTATE_fvz;

        /* Update for UnitDelay: '<S1191>/Unit Delay' incorporates:
         *  UnitDelay: '<S1147>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_fvz = WTAR_ac_DW.UnitDelay_DSTATE_ly;

        /* Switch: '<S1183>/Switch1' incorporates:
         *  Constant: '<S1183>/Constant Value'
         *  Logic: '<S1191>/AND'
         *  RelationalOperator: '<S1183>/Greater  Than'
         *  Switch: '<S1183>/Switch2'
         *  UnitDelay: '<S1147>/Unit Delay'
         *  UnitDelay: '<S1183>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_ly) && rtb_AND_a2v)
        {
            /* Switch: '<S1183>/Switch1' incorporates:
             *  Constant: '<S1186>/Calib'
             */
            rtb_Switch1_g = KeWTAR_Cnt_TorqShortTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_kb) > 0)
        {
            /* Switch: '<S1183>/Switch2' incorporates:
             *  Constant: '<S1183>/Constant Value1'
             *  Sum: '<S1183>/Subtraction'
             *  Switch: '<S1183>/Switch1'
             *  UnitDelay: '<S1183>/Unit Delay'
             */
            rtb_Switch1_g = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_kb) - 1));
        }
        else
        {
            /* Switch: '<S1183>/Switch1' incorporates:
             *  Switch: '<S1183>/Switch2'
             *  UnitDelay: '<S1183>/Unit Delay'
             */
            rtb_Switch1_g = WTAR_ac_DW.UnitDelay_DSTATE_kb;
        }

        /* End of Switch: '<S1183>/Switch1' */
        /* End of Outputs for SubSystem: '<S1183>/EdgeRising' */

        /* RelationalOperator: '<S1183>/Greater  Than1' incorporates:
         *  Constant: '<S1183>/Constant Value2'
         */
        VeWTAC_b_TorqShortTimer_Raw = (((sint32)rtb_Switch1_g) > 0);

        /* Update for UnitDelay: '<S1183>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_kb = rtb_Switch1_g;

        /* End of Outputs for SubSystem: '<S1177>/Count Down  Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S1177>/Count Down  Reset Trigger Enabled1' */
        /* Outputs for Atomic SubSystem: '<S1184>/EdgeRising' */
        /* Logic: '<S1192>/OR1' incorporates:
         *  UnitDelay: '<S1192>/Unit Delay'
         */
        rtb_AND_a2v = !WTAR_ac_DW.UnitDelay_DSTATE_nz;

        /* Update for UnitDelay: '<S1192>/Unit Delay' incorporates:
         *  UnitDelay: '<S1147>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_nz = WTAR_ac_DW.UnitDelay_DSTATE_ly;

        /* Switch: '<S1184>/Switch1' incorporates:
         *  Constant: '<S1184>/Constant Value'
         *  Logic: '<S1192>/AND'
         *  RelationalOperator: '<S1184>/Greater  Than'
         *  Switch: '<S1184>/Switch2'
         *  UnitDelay: '<S1147>/Unit Delay'
         *  UnitDelay: '<S1184>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_ly) && rtb_AND_a2v)
        {
            /* Switch: '<S1184>/Switch1' incorporates:
             *  Constant: '<S1185>/Calib'
             */
            rtb_Switch1_g = KeWTAR_Cnt_TorqLongTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_h2) > 0)
        {
            /* Switch: '<S1184>/Switch2' incorporates:
             *  Constant: '<S1184>/Constant Value1'
             *  Sum: '<S1184>/Subtraction'
             *  Switch: '<S1184>/Switch1'
             *  UnitDelay: '<S1184>/Unit Delay'
             */
            rtb_Switch1_g = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_h2) - 1));
        }
        else
        {
            /* Switch: '<S1184>/Switch1' incorporates:
             *  Switch: '<S1184>/Switch2'
             *  UnitDelay: '<S1184>/Unit Delay'
             */
            rtb_Switch1_g = WTAR_ac_DW.UnitDelay_DSTATE_h2;
        }

        /* End of Switch: '<S1184>/Switch1' */
        /* End of Outputs for SubSystem: '<S1184>/EdgeRising' */

        /* RelationalOperator: '<S1184>/Greater  Than1' incorporates:
         *  Constant: '<S1184>/Constant Value2'
         */
        VeWTAC_b_TorqLongTimer_Raw = (((sint32)rtb_Switch1_g) > 0);

        /* Update for UnitDelay: '<S1184>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_h2 = rtb_Switch1_g;

        /* End of Outputs for SubSystem: '<S1177>/Count Down  Reset Trigger Enabled1' */

        /* MinMax: '<S1177>/MinMax1' incorporates:
         *  Constant: '<S1187>/Calib'
         *  Constant: '<S1189>/Calib'
         *  Sum: '<S1177>/Sum1'
         */
        VeWTAC_M_TorqReduceCurbClimbingD_Raw = fmaxf
            (KeWTAR_M_TorqCompareforCurbClimbingD,
             VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw -
             KeWTAR_M_TorqReduceCurbClimbingD);

        /* MinMax: '<S1177>/MinMax2' incorporates:
         *  Constant: '<S1188>/Calib'
         *  Constant: '<S1190>/Calib'
         *  Sum: '<S1177>/Sum2'
         */
        VeWTAC_M_TorqReduceCurbClimbingR_Raw = fminf
            (VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw +
             KeWTAR_M_TorqReduceCurbClimbingR,
             KeWTAR_M_TorqCompareforCurbClimbingR);

        /* Switch: '<S1177>/Switch2' */
        if (VeWTAC_b_TorqShortTimer_Raw)
        {
            /* Switch: '<S1177>/Switch1' incorporates:
             *  Constant: '<S1177>/Constant Value'
             *  RelationalOperator: '<S1177>/Comparison1'
             */
            if (VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw >= 1.0F)
            {
                /* Switch: '<S1177>/Switch2' */
                VeWTAC_M_TorqReduceforCurbClimbing_Raw =
                    VeWTAC_M_TorqReduceCurbClimbingD_Raw;
            }
            else
            {
                /* Switch: '<S1177>/Switch2' */
                VeWTAC_M_TorqReduceforCurbClimbing_Raw =
                    VeWTAC_M_TorqReduceCurbClimbingR_Raw;
            }

            /* End of Switch: '<S1177>/Switch1' */
        }
        else
        {
            /* Switch: '<S1177>/Switch2' */
            VeWTAC_M_TorqReduceforCurbClimbing_Raw =
                VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw;
        }

        /* End of Switch: '<S1177>/Switch2' */
    }

    /* End of Outputs for SubSystem: '<S1147>/TorqueReduction' */

    /* Logic: '<S1147>/Logical4' */
    rtb_AND_a2v = (rtb_OR1_em && (VeWTAC_b_TorqLongTimer_Raw));

    /* Outputs for Atomic SubSystem: '<S1158>/EdgeRising' */
    /* Logic: '<S1180>/OR1' incorporates:
     *  UnitDelay: '<S1180>/Unit Delay'
     */
    rtb_AND_ok = !WTAR_ac_DW.UnitDelay_DSTATE_as;

    /* Update for UnitDelay: '<S1180>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_as = rtb_AND_a2v;

    /* Switch: '<S1158>/Switch1' incorporates:
     *  Logic: '<S1180>/AND'
     */
    if (rtb_AND_a2v && rtb_AND_ok)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw;
    }
    else
    {
        /* Switch: '<S319>/Switch2' incorporates:
         *  UnitDelay: '<S1158>/Unit Delay1'
         */
        rtb_Sum3_gl = WTAR_ac_DW.UnitDelay1_DSTATE_jt;
    }

    /* End of Switch: '<S1158>/Switch1' */
    /* End of Outputs for SubSystem: '<S1158>/EdgeRising' */

    /* Switch: '<S1158>/Switch' */
    if (rtb_AND_a2v)
    {
        rtb_Switch3_c1 = VeWTAC_M_TorqReduceforCurbClimbing_Raw;
    }
    else
    {
        rtb_Switch3_c1 = VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw;
    }

    /* End of Switch: '<S1158>/Switch' */

    /* Sum: '<S1158>/Sum4' */
    VeWTAC_M_ToPrdt_xSEM = rtb_Switch3_c1 - rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S1158>/Limiter' */
    /* Switch: '<S1181>/Switch1' incorporates:
     *  RelationalOperator: '<S1181>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeSC_j < VeWTAC_M_ToPrdt_xSEM)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeSC_j;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S1181>/Switch1' */

    /* Switch: '<S1181>/Switch' incorporates:
     *  RelationalOperator: '<S1181>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_Abs1)
    {
        rtb_Abs1 = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S1181>/Switch' */
    /* End of Outputs for SubSystem: '<S1158>/Limiter' */

    /* Sum: '<S1158>/Sum1' */
    VeWTAC_M_ToPrdt_xSEM = rtb_Abs1 + rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S1158>/Limiter1' */
    /* Switch: '<S1182>/Switch1' incorporates:
     *  Constant: '<S1158>/Constant Value1'
     *  RelationalOperator: '<S1182>/Relational Operator'
     */
    if (100000.0F < VeWTAC_M_ToPrdt_xSEM)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S1182>/Switch1' */

    /* Switch: '<S1182>/Switch' incorporates:
     *  RelationalOperator: '<S1182>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S1182>/Switch' */
        VeWTAC_M_CurbClimbingOutputTorqLimited_Raw = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1182>/Switch' */
        VeWTAC_M_CurbClimbingOutputTorqLimited_Raw = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S1182>/Switch' */
    /* End of Outputs for SubSystem: '<S1158>/Limiter1' */

    /* UnitDelay: '<S1147>/Unit Delay1' */
    VeWTAC_b_CurbClimbing_TrqModulated_Raw = WTAR_ac_DW.UnitDelay1_DSTATE_lw;

    /* Switch: '<S1147>/Switch2' incorporates:
     *  Logic: '<S1147>/Logical9'
     */
    if (rtb_AND_a2v || (VeWTAC_b_CurbClimbing_TrqModulated_Raw))
    {
        /* Switch: '<S1147>/Switch2' */
        VeWTAC_M_OutputTorqueAftCurbClimbing_Raw =
            VeWTAC_M_CurbClimbingOutputTorqLimited_Raw;
    }
    else
    {
        /* Switch: '<S1147>/Switch2' */
        VeWTAC_M_OutputTorqueAftCurbClimbing_Raw =
            VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw;
    }

    /* End of Switch: '<S1147>/Switch2' */

    /* RelationalOperator: '<S1147>/Comparison8' incorporates:
     *  Abs: '<S1147>/Abs2'
     *  Constant: '<S1161>/Calib'
     *  Sum: '<S1147>/Sum1'
     */
    VeWTAC_b_CurbeClimbing_TorqModulated_Raw = (fabsf
        (VeWTAC_M_OutputTorqueAftCurbClimbing_Raw -
         VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw) >
        KeWTAR_M_CurbClimbing_TorqRecoverThrsh);

    /* Switch: '<S1199>/Switch4' incorporates:
     *  Constant: '<S1199>/Constant Value5'
     *  Constant: '<S1199>/Constant Value8'
     *  RelationalOperator: '<S1199>/Comparison3'
     *  Sum: '<S1199>/Sum'
     *  UnitDelay: '<S1199>/Unit Delay3'
     */
    if (((sint32)((uint16)(((uint32)WTAR_ac_DW.UnitDelay3_DSTATE_og) + 1U))) >
            65534)
    {
        /* Update for UnitDelay: '<S1199>/Unit Delay3' incorporates:
         *  Constant: '<S1199>/Constant Value7'
         *  Switch: '<S1199>/Switch4'
         */
        WTAR_ac_DW.UnitDelay3_DSTATE_og = 0U;
    }
    else
    {
        /* Update for UnitDelay: '<S1199>/Unit Delay3' incorporates:
         *  Switch: '<S1199>/Switch4'
         */
        WTAR_ac_DW.UnitDelay3_DSTATE_og = (uint16)(((uint32)
            WTAR_ac_DW.UnitDelay3_DSTATE_og) + 1U);
    }

    /* End of Switch: '<S1199>/Switch4' */

    /* Switch: '<S324>/Switch1' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  MinMax: '<S324>/MinMax1'
         */
        VeWTAC_M_MainFilter_Lasch_TrqResetRaw = fmaxf
            (VeWTAI_M_OutTorqReqModTactMax, VeWTAC_M_SumMaxTrqDsrd);
    }
    else
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  MinMax: '<S324>/MinMax2'
         */
        VeWTAC_M_MainFilter_Lasch_TrqResetRaw = fminf(VeWTAC_M_SumMaxTrqDsrd,
            VeWTAI_M_OutTorqReqModTactMax);
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Switch: '<S324>/Switch2' incorporates:
     *  Constant: '<S1153>/Calib'
     */
    if (KeWTAR_b_ModHH_FilterRst_Dsbl)
    {
        /* Switch: '<S324>/Switch2' incorporates:
         *  MinMax: '<S324>/MinMax3'
         */
        VeWTAC_M_ToPrdt_xSEM = fmaxf(VeWTAC_M_MainFilter_Lasch_TrqResetRaw,
            rtb_TmpSignalConversionAtVeAX_k);
    }
    else
    {
        /* Switch: '<S324>/Switch2' incorporates:
         *  MinMax: '<S324>/MinMax3'
         *  MinMax: '<S324>/MinMax4'
         */
        VeWTAC_M_ToPrdt_xSEM = fminf(fmaxf(VeWTAC_M_MainFilter_Lasch_TrqResetRaw,
            rtb_TmpSignalConversionAtVeAX_k), rtb_TmpSignalConversionAtVeAXLR);
    }

    /* End of Switch: '<S324>/Switch2' */

    /* Switch: '<S1255>/Switch2' incorporates:
     *  RelationalOperator: '<S1255>/Relational Operator'
     */
    if (VeWTAC_M_ToPrdt_xSEM > VeWTAC_M_AfterMainFilterRaw)
    {
        /* Update for UnitDelay: '<S1255>/Unit Delay1' incorporates:
         *  MinMax: '<S1255>/MinMax2'
         *  Switch: '<S1255>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_ki = fminf(rtb_Switch_fq,
            VeWTAC_M_ToPrdt_xSEM);
    }
    else
    {
        /* Update for UnitDelay: '<S1255>/Unit Delay1' incorporates:
         *  Switch: '<S1255>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_ki = rtb_Switch_fq;
    }

    /* End of Switch: '<S1255>/Switch2' */

    /* Switch: '<S1272>/Switch1' incorporates:
     *  RelationalOperator: '<S1272>/Relational Operator'
     *  Switch: '<S1272>/Switch2'
     */
    if (VeWTAC_M_ToPrdt_xSEM > VeWTAC_M_PostRateLimRaw)
    {
        /* Update for UnitDelay: '<S1272>/Unit Delay4' incorporates:
         *  MinMax: '<S1272>/MinMax1'
         *  Switch: '<S1272>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_c = fminf(VeWTAC_M_ToPrdt_xSEM,
            VeWTAC_M_PostRateLimRaw);

        /* Update for UnitDelay: '<S1272>/Unit Delay1' incorporates:
         *  MinMax: '<S1272>/MinMax2'
         *  Switch: '<S1272>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_f3 = fminf(VeWTAC_M_AfterMainFilterRaw,
            VeWTAC_M_ToPrdt_xSEM);
    }
    else
    {
        /* Update for UnitDelay: '<S1272>/Unit Delay4' incorporates:
         *  Switch: '<S1272>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_c = VeWTAC_M_PostRateLimRaw;

        /* Update for UnitDelay: '<S1272>/Unit Delay1' incorporates:
         *  Switch: '<S1272>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_f3 = VeWTAC_M_AfterMainFilterRaw;
    }

    /* End of Switch: '<S1272>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1305>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1336>/EdgeRising' */
    /* Logic: '<S1351>/AND' incorporates:
     *  Logic: '<S1351>/OR1'
     *  UnitDelay: '<S1351>/Unit Delay'
     */
    rtb_AND_a2v = !WTAR_ac_DW.UnitDelay_DSTATE_nt;

    /* Update for UnitDelay: '<S1351>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nt = true;

    /* End of Outputs for SubSystem: '<S1336>/EdgeRising' */

    /* Switch: '<S1336>/Switch1' incorporates:
     *  Logic: '<S1336>/OR'
     */
    if (rtb_AND_a2v)
    {
        /* Switch: '<S1336>/Switch1' incorporates:
         *  Constant: '<S1336>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S1336>/Switch1' incorporates:
         *  Constant: '<S1333>/Calib'
         *  Constant: '<S1334>/Calib'
         *  MinMax: '<S1336>/Minimum'
         *  Sum: '<S1336>/Summation'
         *  UnitDelay: '<S1336>/Unit Delay'
         */
        VeWTAC_M_ToPrdt_xSEM = fminf(KeWTAR_t_CurbClimbing_GradeUpdateDelay,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_hl);
    }

    /* End of Switch: '<S1336>/Switch1' */

    /* Update for UnitDelay: '<S1336>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hl = VeWTAC_M_ToPrdt_xSEM;

    /* Switch: '<S1305>/Switch3' incorporates:
     *  Constant: '<S1333>/Calib'
     *  Constant: '<S6>/VeVLDR_Pct_GradeCurrent'
     *  DataStoreWrite: '<S1305>/Data Store Write'
     *  RelationalOperator: '<S1336>/Greater  Than'
     */
    if (VeWTAC_M_ToPrdt_xSEM >= KeWTAR_t_CurbClimbing_GradeUpdateDelay)
    {
        WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM = 0.0F;
    }

    /* End of Switch: '<S1305>/Switch3' */
    /* End of Outputs for SubSystem: '<S1305>/Turn On Delay Time' */

    /* Abs: '<S1305>/Abs1' incorporates:
     *  DataStoreWrite: '<S1305>/Data Store Write'
     */
    rtb_Switch3_c1 = fabsf(WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Switch: '<S1305>/Switch' incorporates:
     *  Constant: '<S1305>/Constant Value11'
     *  Gain: '<S267>/Gain'
     *  RelationalOperator: '<S1305>/Comparison4'
     *  Switch: '<S1305>/Switch1'
     */
    if (rtb_Switch1_hk[0] > 0.0F)
    {
        /* Switch: '<S1305>/Switch' incorporates:
         *  Constant: '<S1329>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_j = KeWTAR_dM_CurbClimbing_RtLmtRise_D;

        /* Switch: '<S1305>/Switch1' incorporates:
         *  Constant: '<S1327>/Calib'
         */
        rtb_Abs1 = KeWTAR_dM_CurbClimbing_RtLmtDrop_D;
    }
    else
    {
        /* Switch: '<S1305>/Switch' incorporates:
         *  Constant: '<S1330>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_j = KeWTAR_dM_CurbClimbing_RtLmtRise_R;

        /* Switch: '<S1305>/Switch1' incorporates:
         *  Constant: '<S1328>/Calib'
         */
        rtb_Abs1 = KeWTAR_dM_CurbClimbing_RtLmtDrop_R;
    }

    /* End of Switch: '<S1305>/Switch' */

    /* Logic: '<S325>/Logical1' incorporates:
     *  Constant: '<S1306>/Constant'
     *  Constant: '<S1307>/Constant'
     *  Constant: '<S1310>/Calib'
     *  Logic: '<S325>/AND3'
     *  Logic: '<S325>/AND4'
     *  Logic: '<S325>/AND5'
     *  RelationalOperator: '<S325>/Comparison2'
     *  RelationalOperator: '<S325>/Comparison3'
     *  UnitDelay: '<S325>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtVeCCTR = (((((((uint32)
        rtb_TmpSignalConversionAtVeDT_o) == CeDTRR_e_Level2) || (((uint32)
        rtb_TmpSignalConversionAtVeD_k5) == CeDTRR_e_Level2)) &&
        (KeWTAR_b_FilLv2_En_xSEM)) || ((rtb_TmpSignalConversionAtVeCCTR &&
        (WTAR_ac_DW.UnitDelay3_DSTATE_p0)) && rtb_TmpSignalConversionAtVeSR_f)) ||
        (VaWTAC_b_CreepActDsbFil[2]));

    /* RelationalOperator: '<S1312>/Not Equal2' incorporates:
     *  Constant: '<S1394>/Constant'
     */
    rtb_TmpSignalConversionAtVeSR_f = (((uint32)rtb_TmpSignalConversionAtVeBR_d)
        != CeBRKR_e_BrkApplied);

    /* Outputs for Atomic SubSystem: '<S1312>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S1414>/EdgeRising' */
    /* Logic: '<S1426>/AND' incorporates:
     *  Logic: '<S1426>/OR1'
     *  UnitDelay: '<S1426>/Unit Delay'
     */
    rtb_AND_a2v = (rtb_TmpSignalConversionAtVeSR_f &&
                   (!WTAR_ac_DW.UnitDelay_DSTATE_iug));

    /* Update for UnitDelay: '<S1426>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_iug = rtb_TmpSignalConversionAtVeSR_f;

    /* End of Outputs for SubSystem: '<S1414>/EdgeRising' */

    /* Switch: '<S1414>/Switch1' incorporates:
     *  Logic: '<S1414>/OR'
     *  Logic: '<S1414>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeSR_f) || rtb_AND_a2v)
    {
        /* Switch: '<S1414>/Switch1' incorporates:
         *  Constant: '<S1414>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S1414>/Switch1' incorporates:
         *  Constant: '<S1410>/Calib'
         *  Constant: '<S1411>/Calib'
         *  MinMax: '<S1414>/Minimum'
         *  Sum: '<S1414>/Summation'
         *  UnitDelay: '<S1414>/Unit Delay'
         */
        VeWTAC_M_ToPrdt_xSEM = fminf(KeWTAR_t_BrkAplyd_ZrPdLsh_Delay,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_js);
    }

    /* End of Switch: '<S1414>/Switch1' */

    /* Update for UnitDelay: '<S1414>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_js = VeWTAC_M_ToPrdt_xSEM;

    /* Logic: '<S1312>/AND2' incorporates:
     *  Constant: '<S1404>/Calib'
     *  Constant: '<S1405>/Calib'
     *  Constant: '<S1408>/Calib'
     *  Constant: '<S1409>/Calib'
     *  Constant: '<S1410>/Calib'
     *  Logic: '<S1312>/AND3'
     *  Logic: '<S1414>/AND'
     *  RelationalOperator: '<S1312>/Greater  Than4'
     *  RelationalOperator: '<S1312>/Greater  Than5'
     *  RelationalOperator: '<S1414>/Greater  Than'
     */
    VeWTAC_b_ZeroPedalLashCtrl_PstFilxSEM =
        (((((KeWTAR_b_BrkPdl4ZeroPedalLash_enable) ||
            (rtb_TmpSignalConversionAtVeSR_f && (VeWTAC_M_ToPrdt_xSEM >=
              KeWTAR_t_BrkAplyd_ZrPdLsh_Delay))) && (KeWTAR_b_ZeroPedalLash_Enbl))
          && (VeWTAI_Pct_AccelPedalEffPosition < KeWTAR_Pct_MaxPdl_ZeroPedal)) &&
         (rtb_TmpSignalConversionAtVeCSVR < KeWTAR_n_MaxNo_ZeroPdlLsh));

    /* End of Outputs for SubSystem: '<S1312>/Turn On Delay Time1' */

    /* Switch: '<S1312>/Switch2' incorporates:
     *  Constant: '<S1395>/Calib'
     */
    if (HeWTAR_b_ToCLFast_InLash)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S1312>/Add'
         *  UnitDelay: '<S325>/Unit Delay2'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeAX_b +
            WTAR_ac_DW.UnitDelay2_DSTATE_ea;
    }
    else
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  UnitDelay: '<S325>/Unit Delay2'
         */
        VeWTAC_M_ToPrdt_xSEM = WTAR_ac_DW.UnitDelay2_DSTATE_ea;
    }

    /* End of Switch: '<S1312>/Switch2' */

    /* Switch: '<S1397>/Switch1' incorporates:
     *  Constant: '<S1393>/Constant'
     *  Constant: '<S1402>/Calib'
     *  Constant: '<S1407>/Calib'
     *  RelationalOperator: '<S1312>/Greater  Than3'
     *  RelationalOperator: '<S1312>/Not Equal'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeHADR) !=
                            CeHADR_e_LashStPos);
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq < KeWTAR_M_NegLashTrqThresh);
    }

    /* End of Switch: '<S1397>/Switch1' */

    /* Logic: '<S1312>/AND1' incorporates:
     *  Constant: '<S1400>/Calib'
     *  RelationalOperator: '<S1312>/Greater  Than2'
     */
    VeWTAC_b_NegLashCntrl_PstFilxSEM = (rtb_Comparison12 &&
        (VeWTAC_M_ToPrdt_xSEM > KeWTAR_M_FrmNegRtLimTrqThresh));

    /* Switch: '<S1396>/Switch1' incorporates:
     *  Constant: '<S1392>/Constant'
     *  Constant: '<S1403>/Calib'
     *  Constant: '<S1407>/Calib'
     *  RelationalOperator: '<S1312>/Greater  Than1'
     *  RelationalOperator: '<S1312>/Not Equal1'
     *  SignalConversion generated from: '<S1>/VeHADR_e_LashSt'
     */
    if (KeWTAR_b_UseHADR_LashSt)
    {
        rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeHADR) !=
                            CeHADR_e_LashStNeg);
    }
    else
    {
        rtb_Comparison12 = (VeWTAC_M_ActualAxleTrq > KeWTAR_M_PosLashTrqThresh);
    }

    /* End of Switch: '<S1396>/Switch1' */

    /* Logic: '<S1312>/AND' incorporates:
     *  Constant: '<S1401>/Calib'
     *  RelationalOperator: '<S1312>/Greater  Than'
     */
    VeWTAC_b_PosLashCntrl_PstFilxSEM = (rtb_Comparison12 &&
        (VeWTAC_M_ToPrdt_xSEM < KeWTAR_M_FrmPosRtLimTrqThresh));

    /* UnitDelay: '<S1312>/Unit Delay' */
    rtb_TmpSignalConversionAtVeAX_b = WTAR_ac_DW.UnitDelay_DSTATE_io;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* RelationalOperator: '<S1432>/Comparison11' incorporates:
     *  Constant: '<S1432>/Constant Value1'
     *  Gain: '<S267>/Gain'
     */
    rtb_TmpSignalConversionAtVeSR_f = (rtb_Switch1_hk[0] >= 0.0F);

    /* Switch: '<S1432>/Switch3' incorporates:
     *  Constant: '<S1432>/Constant Value3'
     *  RelationalOperator: '<S1432>/Comparison1'
     *  Switch: '<S1432>/Switch1'
     */
    if (VeWTAC_M_ToNet_Arb_xSEM < 0.0F)
    {
        /* Switch: '<S1432>/Switch3' incorporates:
         *  Product: '<S1432>/Product1'
         */
        VeWTAC_M_ToRtLmt_LUxSEM = -rtb_UnitDelay_co;
    }
    else if (rtb_TmpSignalConversionAtVeSR_f)
    {
        /* Switch: '<S1432>/Switch1' incorporates:
         *  Switch: '<S1432>/Switch3'
         */
        VeWTAC_M_ToRtLmt_LUxSEM = rtb_TmpSignalConversionAtVeSC_f;
    }
    else
    {
        /* Switch: '<S1432>/Switch3' incorporates:
         *  Product: '<S1432>/Product1'
         */
        VeWTAC_M_ToRtLmt_LUxSEM = -rtb_UnitDelay_co;
    }

    /* End of Switch: '<S1432>/Switch3' */

    /* Switch: '<S1432>/Switch2' */
    if (rtb_TmpSignalConversionAtVeSR_f)
    {
        /* Switch: '<S1432>/Switch2' */
        VeWTAC_M_ToRtLmt_LDxSEM = rtb_UnitDelay_co;
    }
    else
    {
        /* Switch: '<S1432>/Switch2' incorporates:
         *  Product: '<S1432>/Product'
         */
        VeWTAC_M_ToRtLmt_LDxSEM = -rtb_TmpSignalConversionAtVeSC_f;
    }

    /* End of Switch: '<S1432>/Switch2' */

    /* UnitDelay: '<S1433>/Unit Delay' */
    rtb_UnitDelay_co = WTAR_ac_DW.UnitDelay_DSTATE_bp;

    /* Switch: '<S1433>/Switch3' */
    if (rtb_TmpSignalConversionAtVeCCTR)
    {
        /* Switch: '<S1433>/Switch3' */
        rtb_UnitDelay_co = VeWTAC_M_ToNet_Arb_xSEM;
    }
    else
    {
        /* Sum: '<S1433>/Sum2' */
        VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_ToNet_Arb_xSEM - rtb_UnitDelay_co;

        /* Outputs for Atomic SubSystem: '<S1433>/Limiter' */
        /* Switch: '<S1461>/Switch1' incorporates:
         *  RelationalOperator: '<S1461>/Relational Operator'
         */
        if (VeWTAC_M_ToRtLmt_LUxSEM < VeWTAC_M_ToPrdt_xSEM)
        {
            /* Switch: '<S1461>/Switch1' */
            VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_ToRtLmt_LUxSEM;
        }

        /* End of Switch: '<S1461>/Switch1' */

        /* Switch: '<S1461>/Switch' incorporates:
         *  RelationalOperator: '<S1461>/Relational Operator1'
         */
        if (VeWTAC_M_ToPrdt_xSEM <= VeWTAC_M_ToRtLmt_LDxSEM)
        {
            VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_ToRtLmt_LDxSEM;
        }

        /* End of Switch: '<S1461>/Switch' */
        /* End of Outputs for SubSystem: '<S1433>/Limiter' */

        /* Switch: '<S1433>/Switch3' incorporates:
         *  Sum: '<S1433>/Sum3'
         */
        rtb_UnitDelay_co += VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S1433>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S1433>/Limiter1' */
    /* Switch: '<S1462>/Switch1' incorporates:
     *  Constant: '<S1433>/Constant Value3'
     *  RelationalOperator: '<S1462>/Relational Operator'
     */
    if (100000.0F < rtb_UnitDelay_co)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_UnitDelay_co;
    }

    /* End of Switch: '<S1462>/Switch1' */

    /* Switch: '<S1462>/Switch' incorporates:
     *  RelationalOperator: '<S1462>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4ProcessMainFilter)
    {
        /* Switch: '<S1462>/Switch' */
        VeWTAC_M_PostRateLimxSEM = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1462>/Switch' */
        VeWTAC_M_PostRateLimxSEM = VeWTAC_M_Min4ProcessMainFilter;
    }

    /* End of Switch: '<S1462>/Switch' */
    /* End of Outputs for SubSystem: '<S1433>/Limiter1' */

    /* Sum: '<S1429>/Subtraction1' incorporates:
     *  UnitDelay: '<S1313>/Unit Delay1'
     */
    rtb_UnitDelay_co = VeWTAC_M_PostRateLimxSEM - WTAR_ac_DW.UnitDelay1_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S1429>/Hysteresis' */
    /* Switch: '<S1435>/Switch1' incorporates:
     *  Constant: '<S1437>/Calib'
     *  RelationalOperator: '<S1435>/Greater  Than'
     */
    if (rtb_UnitDelay_co > KeWTAR_M_Resp_HystPos)
    {
        /* Switch: '<S1435>/Switch1' incorporates:
         *  Constant: '<S1435>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeSR_f = true;
    }
    else
    {
        /* Switch: '<S1435>/Switch1' incorporates:
         *  Constant: '<S1436>/Calib'
         *  RelationalOperator: '<S1435>/Greater  Than1'
         *  UnitDelay: '<S1435>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeSR_f = ((rtb_UnitDelay_co >=
            KeWTAR_M_Resp_HystNeg) && (WTAR_ac_DW.UnitDelay_DSTATE_np));
    }

    /* End of Switch: '<S1435>/Switch1' */

    /* Update for UnitDelay: '<S1435>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_np = rtb_TmpSignalConversionAtVeSR_f;

    /* End of Outputs for SubSystem: '<S1429>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S1357>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S1429>/EdgeFalling' */
    /* Logic: '<S1434>/OR1' incorporates:
     *  Logic: '<S1384>/OR1'
     */
    rtb_AND_ok = !rtb_TmpSignalConversionAtVeCCTR;

    /* End of Outputs for SubSystem: '<S1357>/EdgeFalling' */

    /* Logic: '<S1434>/AND' incorporates:
     *  Logic: '<S1434>/OR1'
     *  UnitDelay: '<S1434>/Unit Delay'
     */
    rtb_AND_a2v = (rtb_AND_ok && (WTAR_ac_DW.UnitDelay_DSTATE_jw));

    /* Update for UnitDelay: '<S1434>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jw = rtb_TmpSignalConversionAtVeCCTR;

    /* End of Outputs for SubSystem: '<S1429>/EdgeFalling' */

    /* Logic: '<S1429>/Logical' */
    rtb_AND_a2v = (rtb_AND_a2v || rtb_TmpSignalConversionAtVeCCTR);

    /* Switch: '<S1429>/Switch4' incorporates:
     *  Constant: '<S1438>/Calib'
     */
    if (KeWTAR_b_FilCoeff_SrcSel)
    {
        /* Switch: '<S1429>/Switch4' incorporates:
         *  Abs: '<S1429>/Abs'
         *  Sum: '<S1429>/Subtraction2'
         */
        rtb_UnitDelay_co = VeWTAR_M_Max4Process - fabsf(VeWTAC_M_PostRateLimxSEM);
    }
    else
    {
        /* Switch: '<S1429>/Switch4' */
        rtb_UnitDelay_co = VeWTAI_Pct_AccelPedalEffPosition;
    }

    /* End of Switch: '<S1429>/Switch4' */

    /* If: '<S1429>/If' */
    rtb_Comparison12 = !rtb_AND_a2v;
    if (rtb_TmpSignalConversionAtVeSR_f && rtb_Comparison12)
    {
        /* Outputs for IfAction SubSystem: '<S1429>/PosSlowResp' incorporates:
         *  ActionPort: '<S1443>/Action Port'
         */
        WTAR_ac_PosSlowResp(VeWTAC_k_PosKD, rtb_UnitDelay_co, VeWTAC_k_PosKT,
                            (&(VeWTAC_k_KDFilterCoeffsxSEM)),
                            (&(VeWTAC_k_KTFilterCoeffsxSEM)));

        /* End of Outputs for SubSystem: '<S1429>/PosSlowResp' */
    }
    else if (rtb_TmpSignalConversionAtVeSR_f && rtb_AND_a2v)
    {
        /* Outputs for IfAction SubSystem: '<S1429>/PosFastResp' incorporates:
         *  ActionPort: '<S1442>/Action Port'
         */
        WTAR_ac_PosFastResp((&(VeWTAC_k_KDFilterCoeffsxSEM)),
                            (&(VeWTAC_k_KTFilterCoeffsxSEM)));

        /* End of Outputs for SubSystem: '<S1429>/PosFastResp' */
    }
    else
    {
        rtb_OR1_a5 = !rtb_TmpSignalConversionAtVeSR_f;
        if (rtb_OR1_a5 && rtb_Comparison12)
        {
            /* Outputs for IfAction SubSystem: '<S1429>/NegSlowResp' incorporates:
             *  ActionPort: '<S1441>/Action Port'
             */
            WTAR_ac_NegSlowResp(VeWTAC_k_NegKD, rtb_UnitDelay_co, VeWTAC_k_NegKT,
                                (&(VeWTAC_k_KDFilterCoeffsxSEM)),
                                (&(VeWTAC_k_KTFilterCoeffsxSEM)));

            /* End of Outputs for SubSystem: '<S1429>/NegSlowResp' */
        }
        else
        {
            if (rtb_OR1_a5 && rtb_AND_a2v)
            {
                /* Outputs for IfAction SubSystem: '<S1429>/NegFastResp' incorporates:
                 *  ActionPort: '<S1440>/Action Port'
                 */
                WTAR_ac_NegFastResp((&(VeWTAC_k_KDFilterCoeffsxSEM)),
                                    (&(VeWTAC_k_KTFilterCoeffsxSEM)));

                /* End of Outputs for SubSystem: '<S1429>/NegFastResp' */
            }
        }
    }

    /* End of If: '<S1429>/If' */

    /* Product: '<S1430>/Multiplication3' incorporates:
     *  Constant: '<S1431>/Calib'
     *  Sum: '<S1430>/Subtraction1'
     *  UnitDelay: '<S1430>/Unit Delay2'
     *  UnitDelay: '<S1430>/Unit Delay4'
     */
    rtb_UnitDelay_co = (WTAR_ac_DW.UnitDelay4_DSTATE_p -
                        WTAR_ac_DW.UnitDelay2_DSTATE_oc) * KeWTAR_t_dT;

    /* MinMax: '<S1430>/Maximum' incorporates:
     *  Constant: '<S1431>/Calib'
     */
    VeWTAC_M_ToPrdt_xSEM = fmaxf(VeWTAC_k_KTFilterCoeffsxSEM, KeWTAR_t_dT);

    /* Outputs for Atomic SubSystem: '<S1430>/Protected Division' */
    /* Switch: '<S1458>/Switch1' incorporates:
     *  Constant: '<S1458>/Constant Value'
     *  Constant: '<S1458>/Constant Value1'
     *  Constant: '<S1458>/Constant Value2'
     *  Constant: '<S1458>/Constant Value3'
     *  Logic: '<S1458>/AND'
     *  RelationalOperator: '<S1458>/Greater Than or Equal '
     *  RelationalOperator: '<S1458>/Greater Than or Equal 1'
     *  RelationalOperator: '<S1458>/Not Equal'
     *  RelationalOperator: '<S1458>/Not Equal1'
     *  Switch: '<S1458>/Switch2'
     *  Switch: '<S1458>/Switch3'
     */
    if ((rtb_UnitDelay_co != 0.0F) && (VeWTAC_M_ToPrdt_xSEM != 0.0F))
    {
        /* Switch: '<S1458>/Switch1' incorporates:
         *  Product: '<S1458>/Division'
         */
        rtb_UnitDelay_co /= VeWTAC_M_ToPrdt_xSEM;
    }
    else if (rtb_UnitDelay_co > 0.0F)
    {
        /* Switch: '<S1458>/Switch2' incorporates:
         *  Constant: '<S1458>/MAXFLOAT'
         *  Switch: '<S1458>/Switch1'
         */
        rtb_UnitDelay_co = 3.402823466E+38F;
    }
    else if (rtb_UnitDelay_co < 0.0F)
    {
        /* Switch: '<S1458>/Switch3' incorporates:
         *  Constant: '<S1458>/MINFLOAT'
         *  Switch: '<S1458>/Switch1'
         *  Switch: '<S1458>/Switch2'
         */
        rtb_UnitDelay_co = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S1458>/Switch1' incorporates:
         *  Constant: '<S1458>/Constant Value4'
         *  Switch: '<S1458>/Switch2'
         *  Switch: '<S1458>/Switch3'
         */
        rtb_UnitDelay_co = 0.0F;
    }

    /* End of Switch: '<S1458>/Switch1' */
    /* End of Outputs for SubSystem: '<S1430>/Protected Division' */

    /* Sum: '<S1430>/Summation2' incorporates:
     *  Product: '<S1430>/Multiplication5'
     *  Sum: '<S1430>/Subtraction2'
     *  Sum: '<S1430>/Summation3'
     *  UnitDelay: '<S1430>/Unit Delay2'
     *  UnitDelay: '<S1430>/Unit Delay4'
     */
    rtb_UnitDelay_co = ((VeWTAC_M_PostRateLimxSEM -
                         WTAR_ac_DW.UnitDelay4_DSTATE_p) *
                        VeWTAC_k_KDFilterCoeffsxSEM) + (rtb_UnitDelay_co +
        WTAR_ac_DW.UnitDelay2_DSTATE_oc);

    /* Outputs for Atomic SubSystem: '<S1430>/Limiter1' */
    /* Switch: '<S1456>/Switch1' incorporates:
     *  Constant: '<S1430>/Constant Value3'
     *  RelationalOperator: '<S1456>/Relational Operator'
     */
    if (100000.0F < rtb_UnitDelay_co)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_UnitDelay_co;
    }

    /* End of Switch: '<S1456>/Switch1' */

    /* Switch: '<S1456>/Switch' incorporates:
     *  RelationalOperator: '<S1456>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4ProcessMainFilter)
    {
        /* Switch: '<S1456>/Switch' */
        VeWTAC_M_AfterMainFilterxSEM = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1456>/Switch' */
        VeWTAC_M_AfterMainFilterxSEM = VeWTAC_M_Min4ProcessMainFilter;
    }

    /* End of Switch: '<S1456>/Switch' */
    /* End of Outputs for SubSystem: '<S1430>/Limiter1' */

    /* If: '<S1312>/If' incorporates:
     *  Constant: '<S1406>/Calib'
     */
    if (rtb_TmpSignalConversionAtVeCCTR)
    {
        /* Outputs for IfAction SubSystem: '<S1312>/ByPass' incorporates:
         *  ActionPort: '<S1391>/Action Port'
         */
        WTAR_ac_ByPass(&VeWTAC_M_ToPrdt_xSEM, &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S1312>/ByPass' */
    }
    else if (VeWTAC_b_ZeroPedalLashCtrl_PstFilxSEM)
    {
        /* Outputs for IfAction SubSystem: '<S1312>/ZeroPedalLash' incorporates:
         *  ActionPort: '<S1415>/Action Port'
         */
        WTAR_ac_ZeroPedalLash(rtb_TmpSignalConversionAtVeAX_b,
                              rtb_TmpSignalConversionAtVeCSVR,
                              &VeWTAC_M_ToPrdt_xSEM, &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S1312>/ZeroPedalLash' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_NegLashCntrl_PstFilxSEM))
    {
        /* Outputs for IfAction SubSystem: '<S1312>/InNegLashCntrl' incorporates:
         *  ActionPort: '<S1398>/Action Port'
         */
        WTAR_ac_InNegLashCntrl(rtb_TmpSignalConversionAtVeAX_b,
                               rtb_TmpSignalConversionAtVeCSVR,
                               VeWTAC_k_NegLashFac, &VeWTAC_M_ToPrdt_xSEM,
                               &rtb_Sum3_gl);

        /* End of Outputs for SubSystem: '<S1312>/InNegLashCntrl' */
    }
    else if ((KeWTAR_b_NegPosLashEnabled) && (VeWTAC_b_PosLashCntrl_PstFilxSEM))
    {
        /* Outputs for IfAction SubSystem: '<S1312>/InPosLashCntrl' incorporates:
         *  ActionPort: '<S1399>/Action Port'
         */
        /* Switch: '<S319>/Switch3' incorporates:
         *  Lookup_n-D: '<S1420>/Vector'
         *  Product: '<S1399>/Multiplication1'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  UnitDelay: '<S1312>/Unit Delay'
         */
        VeWTAC_M_ToPrdt_xSEM = VeWTAC_k_PosLashFac * look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAX_b, rtb_TmpSignalConversionAtVeCSVR,
             ((const float32 *)&(KxWTAR_dM_InNegLash_LU_PstFil[0])), ((const
               float32 *)&(KyWTAR_dM_InNegLash_LU_PstFil[0])), ((const float32 *)
              &(KtWTAR_dM_InNegLash_LU_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U);

        /* Switch: '<S319>/Switch2' incorporates:
         *  Lookup_n-D: '<S1421>/Vector'
         *  Product: '<S1399>/Multiplication5'
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  UnitDelay: '<S1312>/Unit Delay'
         */
        rtb_Sum3_gl = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeAX_b,
            rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
            &(KxWTAR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
            &(KyWTAR_dM_InPosLash_LD_PstFil[0])), ((const float32 *)
            &(KtWTAR_dM_InPosLash_LD_PstFil[0])), WTAR_ac_ConstP.pooled18, 9U) *
            VeWTAC_k_PosLashFac;

        /* End of Outputs for SubSystem: '<S1312>/InPosLashCntrl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1312>/NotInLash' incorporates:
         *  ActionPort: '<S1412>/Action Port'
         */
        /* Abs: '<S1412>/Abs' incorporates:
         *  Sum: '<S1412>/Add'
         */
        rtb_TmpSignalConversionAtVeAX_b = fabsf(VeWTAC_M_AfterMainFilterxSEM -
            rtb_TmpSignalConversionAtVeAX_b);

        /* Lookup_n-D: '<S1422>/Vector' incorporates:
         *  Abs: '<S1412>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LD_PstFilxSEM = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAX_b, rtb_Maximum_i, ((const float32 *)
              &(KxWTAR_dM_NotLashToNo_LD_PstFil[0])), ((const float32 *)
              &(KyWTAR_dM_NotLashToNo_LD_PstFil[0])), ((const float32 *)
              &(KtWTAR_dM_NotLashToNo_LD_PstFil[0])), WTAR_ac_ConstP.pooled21,
             8U);

        /* Lookup_n-D: '<S1423>/Vector' incorporates:
         *  Abs: '<S1412>/Abs'
         */
        VeWTAC_dM_NoLashToNo_LU_PstFilxSEM = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAX_b, rtb_Maximum_i, ((const float32 *)
              &(KxWTAR_dM_NotLashToNo_LU_PstFil[0])), ((const float32 *)
              &(KyWTAR_dM_NotLashToNo_LU_PstFil[0])), ((const float32 *)
              &(KtWTAR_dM_NotLashToNo_LU_PstFil[0])), WTAR_ac_ConstP.pooled21,
             8U);

        /* Switch: '<S319>/Switch2' incorporates:
         *  Product: '<S1412>/Multiplication1'
         */
        rtb_Sum3_gl = VeWTAC_k_NotInLashFac * VeWTAC_dM_NoLashToNo_LD_PstFilxSEM;

        /* Switch: '<S319>/Switch3' incorporates:
         *  Product: '<S1412>/Multiplication5'
         */
        VeWTAC_M_ToPrdt_xSEM = VeWTAC_dM_NoLashToNo_LU_PstFilxSEM *
            VeWTAC_k_NotInLashFac;

        /* End of Outputs for SubSystem: '<S1312>/NotInLash' */
    }

    /* MinMax: '<S1312>/MinMax4' */
    rtb_TmpSignalConversionAtVeAX_b = fminf(VeWTAC_dM_TCMGradLim_Up_dt,
        VeWTAC_M_ToPrdt_xSEM);

    /* MinMax: '<S1312>/MinMax3' */
    rtb_UnitDelay_co = fmaxf(VeWTAC_dM_TCMGradLim_Lo_dt, rtb_Sum3_gl);

    /* Sum: '<S1413>/Sum2' incorporates:
     *  UnitDelay: '<S1413>/Unit Delay1'
     */
    VeWTAC_M_ToPrdt_xSEM = VeWTAC_M_AfterMainFilterxSEM -
        WTAR_ac_DW.UnitDelay1_DSTATE_jg;

    /* Outputs for Atomic SubSystem: '<S1413>/Limiter' */
    /* Switch: '<S1424>/Switch1' incorporates:
     *  RelationalOperator: '<S1424>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeAX_b < VeWTAC_M_ToPrdt_xSEM)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeAX_b;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S1424>/Switch1' */

    /* Switch: '<S1424>/Switch' incorporates:
     *  RelationalOperator: '<S1424>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_UnitDelay_co)
    {
        rtb_UnitDelay_co = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S1424>/Switch' */
    /* End of Outputs for SubSystem: '<S1413>/Limiter' */

    /* Sum: '<S1413>/Sum3' incorporates:
     *  UnitDelay: '<S1413>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeAX_b = rtb_UnitDelay_co +
        WTAR_ac_DW.UnitDelay1_DSTATE_jg;

    /* Outputs for Atomic SubSystem: '<S1413>/Limiter1' */
    /* Switch: '<S1425>/Switch1' incorporates:
     *  Constant: '<S1312>/Constant Value10'
     *  RelationalOperator: '<S1425>/Relational Operator'
     */
    if (100000.0F < rtb_TmpSignalConversionAtVeAX_b)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeAX_b;
    }

    /* End of Switch: '<S1425>/Switch1' */

    /* Switch: '<S1425>/Switch' incorporates:
     *  RelationalOperator: '<S1425>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S1425>/Switch' */
        VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1425>/Switch' */
        VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S1425>/Switch' */
    /* End of Outputs for SubSystem: '<S1413>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S1308>/Digital Lowpass Reset Enabled1' */
    /* Sum: '<S1354>/Summation' incorporates:
     *  Constant: '<S1355>/Calib'
     *  Product: '<S1354>/Multiplication'
     *  Sum: '<S1354>/Subtraction'
     *  UnitDelay: '<S1354>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAX_b = ((rtb_TmpSignalConversionAtVeSC_c -
        WTAR_ac_DW.UnitDelay_DSTATE_f3) * KeWTAR_r_FltCoeff_TactMax) +
        WTAR_ac_DW.UnitDelay_DSTATE_f3;

    /* Update for UnitDelay: '<S1354>/Unit Delay' incorporates:
     *  Switch: '<S1354>/Switch2'
     */
    WTAR_ac_DW.UnitDelay_DSTATE_f3 = rtb_TmpSignalConversionAtVeAX_b;

    /* MinMax: '<S1308>/MinMax' incorporates:
     *  Switch: '<S1354>/Switch2'
     */
    rtb_TmpSignalConversionAtVeAX_b = fminf
        (VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM, rtb_TmpSignalConversionAtVeAX_b);

    /* End of Outputs for SubSystem: '<S1308>/Digital Lowpass Reset Enabled1' */

    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  RelationalOperator: '<S1357>/Comparison'
     *  UnitDelay: '<S1357>/Unit Delay1'
     */
    rtb_Comparison12 = (rtb_TmpSignalConversionAtVeAX_b >
                        WTAR_ac_DW.UnitDelay1_DSTATE_g);

    /* Switch: '<S1357>/Switch3' incorporates:
     *  Logic: '<S1357>/Logical1'
     *  Logic: '<S1357>/Logical2'
     *  RelationalOperator: '<S1357>/Comparison2'
     *  UnitDelay: '<S1357>/Unit Delay2'
     */
    if ((WTAR_ac_DW.UnitDelay2_DSTATE_ow > rtb_TmpSignalConversionAtVeAX_b) && (
            !rtb_Comparison12))
    {
        /* Switch: '<S1357>/Switch3' incorporates:
         *  Constant: '<S1357>/Constant Value3'
         */
        rtb_UnitDelay_co = 0.0F;
    }
    else
    {
        /* Switch: '<S1357>/Switch3' incorporates:
         *  Constant: '<S1357>/Constant Value4'
         */
        rtb_UnitDelay_co = 1.0E+6F;
    }

    /* End of Switch: '<S1357>/Switch3' */

    /* Switch: '<S1357>/Switch2' incorporates:
     *  Logic: '<S1357>/Logical'
     *  RelationalOperator: '<S1357>/Comparison1'
     *  UnitDelay: '<S1357>/Unit Delay2'
     */
    if (rtb_Comparison12 && (WTAR_ac_DW.UnitDelay2_DSTATE_ow <
                             rtb_TmpSignalConversionAtVeAX_b))
    {
        /* Switch: '<S1357>/Switch2' incorporates:
         *  Constant: '<S1357>/Constant Value'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S1357>/Switch2' incorporates:
         *  Constant: '<S1357>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = -1.0E+6F;
    }

    /* End of Switch: '<S1357>/Switch2' */

    /* Sum: '<S1356>/Sum1' incorporates:
     *  UnitDelay: '<S1356>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeSC_f = VeWTAI_Pct_AccelPedalEffPosition -
        WTAR_ac_DW.UnitDelay2_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S1356>/Hysteresis' */
    /* Switch: '<S1372>/Switch1' incorporates:
     *  Constant: '<S1373>/Calib'
     *  RelationalOperator: '<S1372>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeSC_f > KeWTAR_Pct_TipInThresh)
    {
        /* Switch: '<S1372>/Switch1' incorporates:
         *  Constant: '<S1372>/Constant Value'
         */
        VeWTAC_b_TipInOut_Detect_xSEM = true;
    }
    else
    {
        /* Switch: '<S1372>/Switch1' incorporates:
         *  Constant: '<S1374>/Calib'
         *  RelationalOperator: '<S1372>/Greater  Than1'
         *  UnitDelay: '<S1372>/Unit Delay'
         */
        VeWTAC_b_TipInOut_Detect_xSEM = ((rtb_TmpSignalConversionAtVeSC_f >=
            KeWTAR_Pct_TipOutThresh) && (WTAR_ac_DW.UnitDelay_DSTATE_bp2));
    }

    /* End of Switch: '<S1372>/Switch1' */

    /* Update for UnitDelay: '<S1372>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_bp2 = VeWTAC_b_TipInOut_Detect_xSEM;

    /* End of Outputs for SubSystem: '<S1356>/Hysteresis' */

    /* Switch: '<S1356>/Switch4' incorporates:
     *  Constant: '<S1377>/Calib'
     *  Constant: '<S1378>/Calib'
     */
    if (VeWTAC_b_TipInOut_Detect_xSEM)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagPred_TipOut;
    }

    /* End of Switch: '<S1356>/Switch4' */

    /* Product: '<S1356>/Product2' incorporates:
     *  Constant: '<S1379>/Calib'
     *  Product: '<S1356>/Multiplication1'
     */
    VeWTAR_Cnt_DelayPredExtra_xSEM_Single = (rtb_Switch1_bbt * rtb_Switch13) /
        KeWTAR_t_dT;

    /* Chart: '<S1356>/ConvertSingletoUint16_2' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayPredExtra_xSEM_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_2_b);

    /* Gain: '<S1382>/Gain' */
    VeWTAC_Cnt_DelayPredExtra_xSEM =
        WTAR_ac_B.sf_ConvertSingletoUint16_2_b.Uint16_out;

    /* S-Function (sfix_bitop): '<S1357>/Bitwise Logical Operator' incorporates:
     *  Constant: '<S1357>/Constant Value5'
     *  Sum: '<S1357>/Sum'
     *  UnitDelay: '<S1357>/Unit Delay3'
     */
    rtb_Switch1_g = (uint16)(((uint16)(((uint32)WTAR_ac_DW.UnitDelay3_DSTATE_d)
        + 1U)) & ((uint16)31));

    /* Outputs for Atomic SubSystem: '<S1357>/EdgeFalling' */
    /* Logic: '<S1384>/AND' incorporates:
     *  UnitDelay: '<S1384>/Unit Delay'
     */
    WTAR_ac_B.AND_g = (rtb_AND_ok && (WTAR_ac_DW.UnitDelay_DSTATE_iq));

    /* Update for UnitDelay: '<S1384>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_iq = rtb_TmpSignalConversionAtVeCCTR;

    /* End of Outputs for SubSystem: '<S1357>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S1357>/WashMemory' */
    /* Sum: '<S1357>/Sum1' incorporates:
     *  Constant: '<S1357>/Constant Value6'
     *  S-Function (sfix_bitop): '<S1357>/Bitwise Logical Operator1'
     */
    WTAR_ac_WashMemory(WTAR_ac_B.AND_g, (uint16)(((uint32)
                         VeWTAC_Cnt_DelayPredExtra_xSEM) + 1U), rtb_Switch1_g,
                       rtb_TmpSignalConversionAtVeAX_b, &WTAR_ac_B.WashMemory_p);

    /* End of Outputs for SubSystem: '<S1357>/WashMemory' */

    /* Outputs for Atomic SubSystem: '<S1357>/Count Down  Reset Enabled' */
    /* Switch: '<S1383>/Switch1' incorporates:
     *  Constant: '<S1383>/Constant Value'
     *  RelationalOperator: '<S1383>/Greater  Than'
     *  Switch: '<S1383>/Switch2'
     *  UnitDelay: '<S1383>/Unit Delay'
     */
    if (WTAR_ac_B.AND_g)
    {
        /* Switch: '<S1383>/Switch1' */
        rtb_Switch1_av = VeWTAC_Cnt_DelayPredExtra_xSEM;
    }
    else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_p3) > 0)
    {
        /* Switch: '<S1383>/Switch2' incorporates:
         *  Constant: '<S1383>/Constant Value1'
         *  Sum: '<S1383>/Subtraction'
         *  Switch: '<S1383>/Switch1'
         *  UnitDelay: '<S1383>/Unit Delay'
         */
        rtb_Switch1_av = (uint16)((sint32)(((sint32)
            WTAR_ac_DW.UnitDelay_DSTATE_p3) - 1));
    }
    else
    {
        /* Switch: '<S1383>/Switch1' incorporates:
         *  Switch: '<S1383>/Switch2'
         *  UnitDelay: '<S1383>/Unit Delay'
         */
        rtb_Switch1_av = WTAR_ac_DW.UnitDelay_DSTATE_p3;
    }

    /* End of Switch: '<S1383>/Switch1' */

    /* RelationalOperator: '<S1383>/Greater  Than1' incorporates:
     *  Constant: '<S1383>/Constant Value2'
     */
    VeWTAC_b_UseWashedToPrd_xSEM = (((sint32)rtb_Switch1_av) > 0);

    /* Update for UnitDelay: '<S1383>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_p3 = rtb_Switch1_av;

    /* End of Outputs for SubSystem: '<S1357>/Count Down  Reset Enabled' */

    /* Switch: '<S1357>/Switch1' */
    if (VeWTAC_b_UseWashedToPrd_xSEM)
    {
        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.WashMemory_p.ArrayAssignment[0];
    }
    else
    {
        /* Assignment: '<S1357>/Array Assignment' incorporates:
         *  S-Function (sfix_bitop): '<S1357>/Bitwise Logical Operator1'
         */
        WTAR_ac_B.ArrayAssignment[rtb_Switch1_g] =
            rtb_TmpSignalConversionAtVeAX_b;

        /* Switch: '<S1357>/Switch1' */
        rtb_Switch1_hy_0 = &WTAR_ac_B.ArrayAssignment[0];
    }

    /* End of Switch: '<S1357>/Switch1' */

    /* Switch: '<S1356>/Switch1' incorporates:
     *  Constant: '<S1375>/Calib'
     *  Constant: '<S1376>/Calib'
     */
    if (VeWTAC_b_TipInOut_Detect_xSEM)
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipIn;
    }
    else
    {
        rtb_Switch13 = KeWTAR_t_EstimFilterLagImmed_TipOut;
    }

    /* End of Switch: '<S1356>/Switch1' */

    /* Product: '<S1356>/Product1' incorporates:
     *  Constant: '<S1379>/Calib'
     *  Product: '<S1356>/Multiplication3'
     */
    VeWTAR_Cnt_DelayImmed_xSEM_Single = (rtb_Switch13 * rtb_Switch1_bbt) /
        KeWTAR_t_dT;

    /* Chart: '<S1356>/ConvertSingletoUint16_1' */
    WTAR_ac_ConvertSingletoUint16_1(VeWTAR_Cnt_DelayImmed_xSEM_Single,
        &WTAR_ac_B.sf_ConvertSingletoUint16_1_k);

    /* Gain: '<S1381>/Gain' */
    VeWTAC_Cnt_DelayImmed_xSEM =
        WTAR_ac_B.sf_ConvertSingletoUint16_1_k.Uint16_out;

    /* Selector: '<S1357>/Selector' incorporates:
     *  Logic: '<S1357>/Logical3'
     *  Switch: '<S1357>/Switch'
     */
    if (!rtb_TmpSignalConversionAtVeCCTR)
    {
        rtb_Switch_pb = VeWTAC_Cnt_DelayPredExtra_xSEM;
    }
    else
    {
        rtb_Switch_pb = VeWTAC_Cnt_DelayImmed_xSEM;
    }

    /* Outputs for Atomic SubSystem: '<S1357>/GradientLimiter' */
    /* Sum: '<S1385>/Sum2' incorporates:
     *  S-Function (sfix_bitop): '<S1357>/Bitwise Logical Operator2'
     *  Selector: '<S1357>/Selector'
     *  Sum: '<S1357>/Sum2'
     *  UnitDelay: '<S1385>/Unit Delay'
     */
    rtb_Sum3_gl = rtb_Switch1_hy_0[((uint16)(rtb_Switch1_g - rtb_Switch_pb)) &
        ((uint16)31)] - WTAR_ac_DW.UnitDelay_DSTATE_ioj;

    /* Outputs for Atomic SubSystem: '<S1385>/Limiter' */
    /* Switch: '<S1388>/Switch1' incorporates:
     *  RelationalOperator: '<S1388>/Relational Operator'
     */
    if (rtb_UnitDelay_co < rtb_Sum3_gl)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = rtb_UnitDelay_co;
    }

    /* End of Switch: '<S1388>/Switch1' */

    /* Switch: '<S1388>/Switch' incorporates:
     *  RelationalOperator: '<S1388>/Relational Operator1'
     */
    if (rtb_Sum3_gl > VeWTAC_M_ToPrdt_xSEM)
    {
        VeWTAC_M_ToPrdt_xSEM = rtb_Sum3_gl;
    }

    /* End of Switch: '<S1388>/Switch' */
    /* End of Outputs for SubSystem: '<S1385>/Limiter' */

    /* Sum: '<S1385>/Sum3' incorporates:
     *  UnitDelay: '<S1385>/Unit Delay'
     */
    rtb_UnitDelay_co = VeWTAC_M_ToPrdt_xSEM + WTAR_ac_DW.UnitDelay_DSTATE_ioj;

    /* Outputs for Atomic SubSystem: '<S1385>/Limiter1' */
    /* Switch: '<S1389>/Switch1' incorporates:
     *  Constant: '<S1357>/Constant Value2'
     *  RelationalOperator: '<S1389>/Relational Operator'
     */
    if (100000.0F < rtb_UnitDelay_co)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_UnitDelay_co;
    }

    /* End of Switch: '<S1389>/Switch1' */

    /* Switch: '<S1389>/Switch' incorporates:
     *  RelationalOperator: '<S1389>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S1389>/Switch' */
        rtb_UnitDelay_co = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1389>/Switch' */
        rtb_UnitDelay_co = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S1389>/Switch' */
    /* End of Outputs for SubSystem: '<S1385>/Limiter1' */

    /* Update for UnitDelay: '<S1385>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ioj = rtb_UnitDelay_co;

    /* End of Outputs for SubSystem: '<S1357>/GradientLimiter' */

    /* If: '<S1353>/If1' incorporates:
     *  Constant: '<S1359>/Calib'
     */
    if (KeWTAR_b_EnblToDelayCushion)
    {
        /* Outputs for IfAction SubSystem: '<S1353>/Enabled' incorporates:
         *  ActionPort: '<S1358>/Action Port'
         */
        WTAR_ac_Enabled(rtb_TmpSignalConversionAtVeAX_b, rtb_UnitDelay_co,
                        VeWTAC_M_Min4Process,
                        (&(VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM)),
                        &WTAR_ac_DW.Enabled_p);

        /* End of Outputs for SubSystem: '<S1353>/Enabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1353>/Pass' incorporates:
         *  ActionPort: '<S1361>/Action Port'
         */
        WTAR_ac_Pass(rtb_UnitDelay_co,
                     (&(VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM)));

        /* End of Outputs for SubSystem: '<S1353>/Pass' */
    }

    /* End of If: '<S1353>/If1' */

    /* Outputs for Atomic SubSystem: '<S1305>/Hysteresis' */
    /* Switch: '<S1317>/Switch1' incorporates:
     *  Constant: '<S1321>/Calib'
     *  RelationalOperator: '<S1317>/Greater  Than'
     */
    if (rtb_Switch3_c1 > KeWTAR_Pct_CurbClimbingGradeCheckRSP)
    {
        /* Switch: '<S1317>/Switch1' incorporates:
         *  Constant: '<S1317>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeCCTR = true;
    }
    else
    {
        /* Switch: '<S1317>/Switch1' incorporates:
         *  Constant: '<S1320>/Calib'
         *  RelationalOperator: '<S1317>/Greater  Than1'
         *  UnitDelay: '<S1317>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCCTR = ((rtb_Switch3_c1 >=
            KeWTAR_Pct_CurbClimbingGradeCheckLSP) &&
            (WTAR_ac_DW.UnitDelay_DSTATE_cc));
    }

    /* End of Switch: '<S1317>/Switch1' */

    /* Update for UnitDelay: '<S1317>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_cc = rtb_TmpSignalConversionAtVeCCTR;

    /* End of Outputs for SubSystem: '<S1305>/Hysteresis' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Logic: '<S1305>/Logical' incorporates:
     *  Abs: '<S321>/Abs'
     *  Constant: '<S1305>/Constant Value1'
     *  Constant: '<S1305>/Constant Value2'
     *  Constant: '<S1318>/Calib'
     *  Constant: '<S1322>/Calib'
     *  Constant: '<S1323>/Calib'
     *  Constant: '<S1324>/Calib'
     *  Constant: '<S1325>/Calib'
     *  Constant: '<S1326>/Calib'
     *  Constant: '<S1331>/Calib'
     *  Gain: '<S267>/Gain'
     *  Logic: '<S1305>/Logical1'
     *  Logic: '<S1305>/Logical2'
     *  Logic: '<S1305>/Logical3'
     *  Logic: '<S1305>/Logical6'
     *  Logic: '<S1305>/Logical7'
     *  RelationalOperator: '<S1305>/Comparison1'
     *  RelationalOperator: '<S1305>/Comparison10'
     *  RelationalOperator: '<S1305>/Comparison11'
     *  RelationalOperator: '<S1305>/Comparison2'
     *  RelationalOperator: '<S1305>/Comparison3'
     *  RelationalOperator: '<S1305>/Comparison7'
     *  RelationalOperator: '<S1305>/Comparison9'
     */
    VeWTAC_b_TorqueCheckEnable_xSEM = ((((((rtb_TmpSignalConversionAtVeBTQR <
        KeWTAR_M_CurbClimbingBreakCheck) && (rtb_Maximum_i <
        KeWTAR_n_CurbClimbingSpeedCheck)) && (VeWTAI_Pct_AccelPedalEffPosition >
        KeWTAR_Pct_CurbClimbingPedalCheck)) && (!rtb_TmpSignalConversionAtVeCCTR))
        && (((KeWTAR_b_EnableDforCurbClimbing) && (rtb_Switch1_hk[0] > 0.0F)) ||
            ((KeWTAR_b_EnableRforCurbClimbing) && (rtb_Switch1_hk[0] < 0.0F)))) &&
        ((VeWTAI_T_MtrB_Temp < KeWTAR_T_CurbClimbing_MtrBTempCheck) &&
         (VeWTAI_T_MtrB_InvrtrTemp < KeWTAR_T_CurbClimbing_InvrtrBTempCheck)));

    /* Outputs for Atomic SubSystem: '<S1305>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S1337>/EdgeRising' */
    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  UnitDelay: '<S1352>/Unit Delay'
     */
    rtb_Comparison12 = WTAR_ac_DW.UnitDelay_DSTATE_d0;

    /* Update for UnitDelay: '<S1352>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_d0 = VeWTAC_b_TorqueCheckEnable_xSEM;

    /* Switch: '<S1337>/Switch1' incorporates:
     *  Logic: '<S1337>/OR'
     *  Logic: '<S1337>/OR1'
     *  Logic: '<S1352>/AND'
     *  Logic: '<S1352>/OR1'
     */
    if ((!VeWTAC_b_TorqueCheckEnable_xSEM) || ((VeWTAC_b_TorqueCheckEnable_xSEM)
         && (!rtb_Comparison12)))
    {
        /* Switch: '<S1337>/Switch1' incorporates:
         *  Constant: '<S1337>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeBTQR = 0.0F;
    }
    else
    {
        /* Switch: '<S1337>/Switch1' incorporates:
         *  Constant: '<S1332>/Calib'
         *  Constant: '<S1334>/Calib'
         *  MinMax: '<S1337>/Minimum'
         *  Sum: '<S1337>/Summation'
         *  UnitDelay: '<S1337>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBTQR = fminf(KeWTAR_t_CurbClimbingTorqChkTime,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_ed);
    }

    /* End of Switch: '<S1337>/Switch1' */
    /* End of Outputs for SubSystem: '<S1337>/EdgeRising' */

    /* Logic: '<S1337>/AND' incorporates:
     *  Constant: '<S1332>/Calib'
     *  RelationalOperator: '<S1337>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeCCTR = ((VeWTAC_b_TorqueCheckEnable_xSEM) &&
        (rtb_TmpSignalConversionAtVeBTQR >= KeWTAR_t_CurbClimbingTorqChkTime));

    /* Update for UnitDelay: '<S1337>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ed = rtb_TmpSignalConversionAtVeBTQR;

    /* End of Outputs for SubSystem: '<S1305>/Turn On Delay Time1' */

    /* Outputs for Enabled SubSystem: '<S1305>/TorqueReduction' incorporates:
     *  EnablePort: '<S1335>/Enable'
     */
    if (rtb_TmpSignalConversionAtVeCCTR)
    {
        /* Outputs for Atomic SubSystem: '<S1335>/Count Down  Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S1341>/EdgeRising' */
        /* Logic: '<S1349>/OR1' incorporates:
         *  UnitDelay: '<S1349>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeSR_f = !WTAR_ac_DW.UnitDelay_DSTATE_be;

        /* Update for UnitDelay: '<S1349>/Unit Delay' incorporates:
         *  UnitDelay: '<S1305>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_be = WTAR_ac_DW.UnitDelay_DSTATE_pj;

        /* Switch: '<S1341>/Switch1' incorporates:
         *  Constant: '<S1341>/Constant Value'
         *  Logic: '<S1349>/AND'
         *  RelationalOperator: '<S1341>/Greater  Than'
         *  Switch: '<S1341>/Switch2'
         *  UnitDelay: '<S1305>/Unit Delay'
         *  UnitDelay: '<S1341>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_pj) && rtb_TmpSignalConversionAtVeSR_f)
        {
            /* Switch: '<S1341>/Switch1' incorporates:
             *  Constant: '<S1344>/Calib'
             */
            rtb_Switch1_g = KeWTAR_Cnt_TorqShortTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_pqn) > 0)
        {
            /* Switch: '<S1341>/Switch2' incorporates:
             *  Constant: '<S1341>/Constant Value1'
             *  Sum: '<S1341>/Subtraction'
             *  Switch: '<S1341>/Switch1'
             *  UnitDelay: '<S1341>/Unit Delay'
             */
            rtb_Switch1_g = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_pqn) - 1));
        }
        else
        {
            /* Switch: '<S1341>/Switch1' incorporates:
             *  Switch: '<S1341>/Switch2'
             *  UnitDelay: '<S1341>/Unit Delay'
             */
            rtb_Switch1_g = WTAR_ac_DW.UnitDelay_DSTATE_pqn;
        }

        /* End of Switch: '<S1341>/Switch1' */
        /* End of Outputs for SubSystem: '<S1341>/EdgeRising' */

        /* RelationalOperator: '<S1341>/Greater  Than1' incorporates:
         *  Constant: '<S1341>/Constant Value2'
         */
        VeWTAC_b_TorqShortTimer_xSEM = (((sint32)rtb_Switch1_g) > 0);

        /* Update for UnitDelay: '<S1341>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_pqn = rtb_Switch1_g;

        /* End of Outputs for SubSystem: '<S1335>/Count Down  Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S1335>/Count Down  Reset Trigger Enabled1' */
        /* Outputs for Atomic SubSystem: '<S1342>/EdgeRising' */
        /* Logic: '<S1350>/OR1' incorporates:
         *  UnitDelay: '<S1350>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeSR_f = !WTAR_ac_DW.UnitDelay_DSTATE_lp;

        /* Update for UnitDelay: '<S1350>/Unit Delay' incorporates:
         *  UnitDelay: '<S1305>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_lp = WTAR_ac_DW.UnitDelay_DSTATE_pj;

        /* Switch: '<S1342>/Switch1' incorporates:
         *  Constant: '<S1342>/Constant Value'
         *  Logic: '<S1350>/AND'
         *  RelationalOperator: '<S1342>/Greater  Than'
         *  Switch: '<S1342>/Switch2'
         *  UnitDelay: '<S1305>/Unit Delay'
         *  UnitDelay: '<S1342>/Unit Delay'
         */
        if ((WTAR_ac_DW.UnitDelay_DSTATE_pj) && rtb_TmpSignalConversionAtVeSR_f)
        {
            /* Switch: '<S1342>/Switch1' incorporates:
             *  Constant: '<S1343>/Calib'
             */
            rtb_Switch1_g = KeWTAR_Cnt_TorqLongTimer;
        }
        else if (((sint32)WTAR_ac_DW.UnitDelay_DSTATE_ebt) > 0)
        {
            /* Switch: '<S1342>/Switch2' incorporates:
             *  Constant: '<S1342>/Constant Value1'
             *  Sum: '<S1342>/Subtraction'
             *  Switch: '<S1342>/Switch1'
             *  UnitDelay: '<S1342>/Unit Delay'
             */
            rtb_Switch1_g = (uint16)((sint32)(((sint32)
                WTAR_ac_DW.UnitDelay_DSTATE_ebt) - 1));
        }
        else
        {
            /* Switch: '<S1342>/Switch1' incorporates:
             *  Switch: '<S1342>/Switch2'
             *  UnitDelay: '<S1342>/Unit Delay'
             */
            rtb_Switch1_g = WTAR_ac_DW.UnitDelay_DSTATE_ebt;
        }

        /* End of Switch: '<S1342>/Switch1' */
        /* End of Outputs for SubSystem: '<S1342>/EdgeRising' */

        /* RelationalOperator: '<S1342>/Greater  Than1' incorporates:
         *  Constant: '<S1342>/Constant Value2'
         */
        VeWTAC_b_TorqLongTimer_xSEM = (((sint32)rtb_Switch1_g) > 0);

        /* Update for UnitDelay: '<S1342>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_ebt = rtb_Switch1_g;

        /* End of Outputs for SubSystem: '<S1335>/Count Down  Reset Trigger Enabled1' */

        /* MinMax: '<S1335>/MinMax1' incorporates:
         *  Constant: '<S1345>/Calib'
         *  Constant: '<S1347>/Calib'
         *  Sum: '<S1335>/Sum1'
         */
        VeWTAC_M_TorqReduceCurbClimbingD_xSEM = fmaxf
            (KeWTAR_M_TorqCompareforCurbClimbingD,
             VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM -
             KeWTAR_M_TorqReduceCurbClimbingD);

        /* MinMax: '<S1335>/MinMax2' incorporates:
         *  Constant: '<S1346>/Calib'
         *  Constant: '<S1348>/Calib'
         *  Sum: '<S1335>/Sum2'
         */
        VeWTAC_M_TorqReduceCurbClimbingR_xSEM = fminf
            (VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM +
             KeWTAR_M_TorqReduceCurbClimbingR,
             KeWTAR_M_TorqCompareforCurbClimbingR);

        /* Switch: '<S1335>/Switch2' */
        if (VeWTAC_b_TorqShortTimer_xSEM)
        {
            /* Switch: '<S1335>/Switch1' incorporates:
             *  Constant: '<S1335>/Constant Value'
             *  RelationalOperator: '<S1335>/Comparison1'
             */
            if (VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM >= 1.0F)
            {
                /* Switch: '<S1335>/Switch2' */
                VeWTAC_M_TorqReduceforCurbClimbing_xSEM =
                    VeWTAC_M_TorqReduceCurbClimbingD_xSEM;
            }
            else
            {
                /* Switch: '<S1335>/Switch2' */
                VeWTAC_M_TorqReduceforCurbClimbing_xSEM =
                    VeWTAC_M_TorqReduceCurbClimbingR_xSEM;
            }

            /* End of Switch: '<S1335>/Switch1' */
        }
        else
        {
            /* Switch: '<S1335>/Switch2' */
            VeWTAC_M_TorqReduceforCurbClimbing_xSEM =
                VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM;
        }

        /* End of Switch: '<S1335>/Switch2' */
    }

    /* End of Outputs for SubSystem: '<S1305>/TorqueReduction' */

    /* Logic: '<S1305>/Logical4' */
    rtb_TmpSignalConversionAtVeSR_f = (rtb_TmpSignalConversionAtVeCCTR &&
        (VeWTAC_b_TorqLongTimer_xSEM));

    /* Outputs for Atomic SubSystem: '<S1316>/EdgeRising' */
    /* Logic: '<S1338>/OR1' incorporates:
     *  UnitDelay: '<S1338>/Unit Delay'
     */
    rtb_AND_a2v = !WTAR_ac_DW.UnitDelay_DSTATE_nth;

    /* Update for UnitDelay: '<S1338>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nth = rtb_TmpSignalConversionAtVeSR_f;

    /* Switch: '<S1316>/Switch1' incorporates:
     *  Logic: '<S1338>/AND'
     */
    if (rtb_TmpSignalConversionAtVeSR_f && rtb_AND_a2v)
    {
        /* Switch: '<S319>/Switch2' */
        rtb_Sum3_gl = VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM;
    }
    else
    {
        /* Switch: '<S319>/Switch2' incorporates:
         *  UnitDelay: '<S1316>/Unit Delay1'
         */
        rtb_Sum3_gl = WTAR_ac_DW.UnitDelay1_DSTATE_a;
    }

    /* End of Switch: '<S1316>/Switch1' */
    /* End of Outputs for SubSystem: '<S1316>/EdgeRising' */

    /* Switch: '<S1316>/Switch' */
    if (rtb_TmpSignalConversionAtVeSR_f)
    {
        rtb_TmpSignalConversionAtVeSC_c =
            VeWTAC_M_TorqReduceforCurbClimbing_xSEM;
    }
    else
    {
        rtb_TmpSignalConversionAtVeSC_c =
            VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM;
    }

    /* End of Switch: '<S1316>/Switch' */

    /* Sum: '<S1316>/Sum4' */
    rtb_TmpSignalConversionAtVeBTQR = rtb_TmpSignalConversionAtVeSC_c -
        rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S1316>/Limiter' */
    /* Switch: '<S1339>/Switch1' incorporates:
     *  RelationalOperator: '<S1339>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeSC_j < rtb_TmpSignalConversionAtVeBTQR)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeSC_j;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeBTQR;
    }

    /* End of Switch: '<S1339>/Switch1' */

    /* Switch: '<S1339>/Switch' incorporates:
     *  RelationalOperator: '<S1339>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > rtb_Abs1)
    {
        rtb_Abs1 = rtb_Switch1_mxa;
    }

    /* End of Switch: '<S1339>/Switch' */
    /* End of Outputs for SubSystem: '<S1316>/Limiter' */

    /* Sum: '<S1316>/Sum1' */
    rtb_TmpSignalConversionAtVeBTQR = rtb_Abs1 + rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S1316>/Limiter1' */
    /* Switch: '<S1340>/Switch1' incorporates:
     *  Constant: '<S1316>/Constant Value1'
     *  RelationalOperator: '<S1340>/Relational Operator'
     */
    if (100000.0F < rtb_TmpSignalConversionAtVeBTQR)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 100000.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeBTQR;
    }

    /* End of Switch: '<S1340>/Switch1' */

    /* Switch: '<S1340>/Switch' incorporates:
     *  RelationalOperator: '<S1340>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > VeWTAC_M_Min4Process)
    {
        /* Switch: '<S1340>/Switch' */
        VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S1340>/Switch' */
        VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM = VeWTAC_M_Min4Process;
    }

    /* End of Switch: '<S1340>/Switch' */
    /* End of Outputs for SubSystem: '<S1316>/Limiter1' */

    /* UnitDelay: '<S1305>/Unit Delay1' */
    VeWTAC_b_CurbClimbing_TrqModulated_xSEM = WTAR_ac_DW.UnitDelay1_DSTATE_iu;

    /* Switch: '<S1305>/Switch2' incorporates:
     *  Logic: '<S1305>/Logical9'
     */
    if (rtb_TmpSignalConversionAtVeSR_f ||
            (VeWTAC_b_CurbClimbing_TrqModulated_xSEM))
    {
        /* Switch: '<S1305>/Switch2' */
        VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM =
            VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM;
    }
    else
    {
        /* Switch: '<S1305>/Switch2' */
        VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM =
            VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM;
    }

    /* End of Switch: '<S1305>/Switch2' */

    /* Switch: '<S319>/Switch3' incorporates:
     *  Abs: '<S1305>/Abs2'
     *  Sum: '<S1305>/Sum1'
     */
    VeWTAC_M_ToPrdt_xSEM = fabsf(VeWTAC_M_OutputTorqueAftCurbClimbing_xSEM -
        VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM);

    /* RelationalOperator: '<S1305>/Comparison8' incorporates:
     *  Constant: '<S1319>/Calib'
     */
    VeWTAC_b_CurbeClimbing_TorqModulated_xSEM = (VeWTAC_M_ToPrdt_xSEM >
        KeWTAR_M_CurbClimbing_TorqRecoverThrsh);

    /* UnitDelay: '<S311>/Unit Delay2' */
    VeWTAC_M_OvrRev_PIDTqOutTrqReqxSEM = WTAR_ac_DW.UnitDelay2_DSTATE_a;

    /* Switch: '<S325>/Switch1' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S325>/Switch1' incorporates:
         *  MinMax: '<S325>/MinMax'
         */
        VeWTAC_M_MainFilter_Lasch_TrqReset_xSEM = fmaxf(fmaxf
            (VeWTAI_M_OutTorqReqModTactMax, VeWTAC_M_OvrRev_PIDTqOutTrqReqxSEM),
            VeWTAC_M_SumMaxTrqDsrd);
    }
    else
    {
        /* Switch: '<S325>/Switch1' incorporates:
         *  MinMax: '<S325>/MinMax1'
         */
        VeWTAC_M_MainFilter_Lasch_TrqReset_xSEM = fminf(fminf
            (VeWTAC_M_SumMaxTrqDsrd, VeWTAC_M_OvrRev_PIDTqOutTrqReqxSEM),
            VeWTAI_M_OutTorqReqModTactMax);
    }

    /* End of Switch: '<S325>/Switch1' */

    /* Switch: '<S325>/Switch2' incorporates:
     *  Constant: '<S1311>/Calib'
     */
    if (KeWTAR_b_ModHH_FilterRst_Dsbl)
    {
        /* Switch: '<S325>/Switch2' incorporates:
         *  MinMax: '<S325>/MinMax2'
         */
        rtb_TmpSignalConversionAtVeAX_k = fmaxf
            (VeWTAC_M_MainFilter_Lasch_TrqReset_xSEM,
             rtb_TmpSignalConversionAtVeAX_k);
    }
    else
    {
        /* Switch: '<S325>/Switch2' incorporates:
         *  MinMax: '<S325>/MinMax2'
         *  MinMax: '<S325>/MinMax4'
         */
        rtb_TmpSignalConversionAtVeAX_k = fminf(fmaxf
            (VeWTAC_M_MainFilter_Lasch_TrqReset_xSEM,
             rtb_TmpSignalConversionAtVeAX_k), rtb_TmpSignalConversionAtVeAXLR);
    }

    /* End of Switch: '<S325>/Switch2' */

    /* Switch: '<S1413>/Switch2' incorporates:
     *  RelationalOperator: '<S1413>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeAX_k > VeWTAC_M_AfterMainFilterxSEM)
    {
        /* Update for UnitDelay: '<S1413>/Unit Delay1' incorporates:
         *  MinMax: '<S1413>/MinMax2'
         *  Switch: '<S1413>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_jg = fminf
            (VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM,
             rtb_TmpSignalConversionAtVeAX_k);
    }
    else
    {
        /* Update for UnitDelay: '<S1413>/Unit Delay1' incorporates:
         *  Switch: '<S1413>/Switch2'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_jg = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM;
    }

    /* End of Switch: '<S1413>/Switch2' */

    /* Switch: '<S1430>/Switch1' incorporates:
     *  RelationalOperator: '<S1430>/Relational Operator'
     *  Switch: '<S1430>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeAX_k > VeWTAC_M_PostRateLimxSEM)
    {
        /* Update for UnitDelay: '<S1430>/Unit Delay4' incorporates:
         *  MinMax: '<S1430>/MinMax1'
         *  Switch: '<S1430>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_p = fminf(rtb_TmpSignalConversionAtVeAX_k,
            VeWTAC_M_PostRateLimxSEM);

        /* Update for UnitDelay: '<S1430>/Unit Delay2' incorporates:
         *  MinMax: '<S1430>/MinMax2'
         *  Switch: '<S1430>/Switch2'
         */
        WTAR_ac_DW.UnitDelay2_DSTATE_oc = fminf(VeWTAC_M_AfterMainFilterxSEM,
            rtb_TmpSignalConversionAtVeAX_k);
    }
    else
    {
        /* Update for UnitDelay: '<S1430>/Unit Delay4' incorporates:
         *  Switch: '<S1430>/Switch1'
         */
        WTAR_ac_DW.UnitDelay4_DSTATE_p = VeWTAC_M_PostRateLimxSEM;

        /* Update for UnitDelay: '<S1430>/Unit Delay2' incorporates:
         *  Switch: '<S1430>/Switch2'
         */
        WTAR_ac_DW.UnitDelay2_DSTATE_oc = VeWTAC_M_AfterMainFilterxSEM;
    }

    /* End of Switch: '<S1430>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeDTRR_e_RrAxleTrqRespType' */
    (void)Rte_Read_VeDTRR_e_RrAxleTrqRespType_Value(&tmpRead_i);

    /* Inport: '<Root>/VeDTRR_e_AxleTrqRespType' */
    (void)Rte_Read_VeDTRR_e_AxleTrqRespType_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* RelationalOperator: '<S303>/Equal' incorporates:
     *  Constant: '<S388>/Constant'
     *  Inport: '<Root>/VeDTRR_e_AxleTrqRespType'
     */
    VeWTAC_b_PTAR_NotActvFrontAxle = (((uint32)tmpRead_1) != CePTAR_e_Inactive);

    /* RelationalOperator: '<S303>/Equal1' incorporates:
     *  Constant: '<S389>/Constant'
     *  Inport: '<Root>/VeDTRR_e_RrAxleTrqRespType'
     */
    VeWTAC_b_PTAR_NotActvRearAxle = (((uint32)tmpRead_i) != CePTAR_e_Inactive);

    /* Logic: '<S303>/Logical2' */
    VeWTAC_b_PTAR_NotActv = ((VeWTAC_b_PTAR_NotActvFrontAxle) ||
        (VeWTAC_b_PTAR_NotActvRearAxle));

    /* Switch: '<S326>/Switch3' incorporates:
     *  MinMax: '<S331>/MinMax'
     *  RelationalOperator: '<S331>/Comparison2'
     *  Switch: '<S331>/Switch3'
     *  UnitDelay: '<S301>/Unit Delay2'
     *  UnitDelay: '<S331>/Unit Delay1'
     */
#if !Rte_SysCon_Variant_WTAR_2

    /* Outputs for Atomic SubSystem: '<S326>/EdgeFalling2' */
    /* Logic: '<S334>/AND' incorporates:
     *  Logic: '<S334>/OR1'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    rtb_AND_au = ((!rtb_TmpSignalConversionAtVeAS_j) &&
                  (WTAR_ac_DW.UnitDelay_DSTATE_an));

    /* Update for UnitDelay: '<S334>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_an = rtb_TmpSignalConversionAtVeAS_j;
    if (VeWTAC_b_PTAR_NotActv)
    {
        /* Switch: '<S326>/Switch3' incorporates:
         *  Constant: '<S337>/Calib'
         */
        rtb_Switch3_k3z = KeWTAR_t_ASL_BldFacDsbl;
    }
    else
    {
        /* Switch: '<S326>/Switch3' incorporates:
         *  Constant: '<S336>/Calib'
         */
        rtb_Switch3_k3z = KeWTAR_t_ASL_BldFac;
    }

    if (rtb_AND_au)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S331>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* MinMax: '<S331>/Max' incorporates:
         *  Constant: '<S338>/Calib'
         */
        rtb_Max_m = fmaxf(KeWTAR_t_dT, rtb_Switch3_k3z);

        /* Outputs for Atomic SubSystem: '<S331>/Protected_Division1' */
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S338>/Calib'
         *  Constant: '<S341>/Constant Value'
         *  Constant: '<S341>/Constant Value1'
         *  Constant: '<S341>/Constant Value2'
         *  Constant: '<S341>/Constant Value3'
         *  Logic: '<S341>/AND'
         *  RelationalOperator: '<S341>/Greater Than or Equal '
         *  RelationalOperator: '<S341>/Greater Than or Equal 1'
         *  RelationalOperator: '<S341>/Not Equal'
         *  RelationalOperator: '<S341>/Not Equal1'
         *  Switch: '<S341>/Switch2'
         *  Switch: '<S341>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_Max_m != 0.0F))
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  Product: '<S341>/Division'
             */
            rtb_Max_m = KeWTAR_t_dT / rtb_Max_m;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S341>/Switch2' incorporates:
             *  Constant: '<S341>/MAXFLOAT'
             *  Switch: '<S341>/Switch1'
             */
            rtb_Max_m = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S341>/Switch3' incorporates:
             *  Constant: '<S341>/MINFLOAT'
             *  Switch: '<S341>/Switch1'
             *  Switch: '<S341>/Switch2'
             */
            rtb_Max_m = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  Constant: '<S341>/Constant Value4'
             *  Switch: '<S341>/Switch2'
             *  Switch: '<S341>/Switch3'
             */
            rtb_Max_m = 0.0F;
        }

        /* End of Switch: '<S341>/Switch1' */
        /* End of Outputs for SubSystem: '<S331>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S331>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Max_m + WTAR_ac_DW.UnitDelay1_DSTATE_b;
    }

    /* MinMax: '<S331>/MinMax' incorporates:
     *  Constant: '<S331>/Constant Value2'
     */
    rtb_Max_m = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);

    /* RelationalOperator: '<S331>/Comparison2' incorporates:
     *  Constant: '<S331>/Constant Value1'
     */
    VeWTAC_b_ASL_BldAct_OITR = (rtb_Max_m < 1.0F);

    /* Switch: '<S319>/Switch3' */
    VeWTAC_M_ToPrdt_xSEM = WTAR_ac_DW.UnitDelay2_DSTATE_h;

    /* End of Outputs for SubSystem: '<S326>/EdgeFalling2' */
#endif

    /* End of Switch: '<S326>/Switch3' */

    /* Sum: '<S321>/Subtraction5' */
    VeWTAC_M_ToPot_Net = rtb_TmpSignalConversionAtVeS_dq -
        VeWTAC_M_BrkTrqRdctn_Fltd;

    /* SignalConversion generated from: '<S530>/VariantSource' */
#if Rte_SysCon_Variant_WTAR_6

    /* VariantMerge generated from: '<S530>/VariantSource' */
    rtb_VariantMerge_For_Varian_a_0 = VeWTAC_M_ToCmnd_AftLashCtrl_PstFil;
    rtb_VariantMerge_For_Varian_a_1 = VeWTAC_M_ToCmnd_PstFil_HTDR;
    rtb_VariantMerge_For_Varian_a_2 = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM;
    rtb_VariantMerge_For_Varian_a_3 = VeWTAC_M_ToNet_Arb_xSEM;
    rtb_VariantMerge_For_Varian_a_4 = VeWTAC_M_ToPot_Net;
    rtb_VariantMerge_For_Varian_a_5 = rtb_MinMax_n;
    rtb_VariantMerge_For_Varian_a_6 = rtb_Switch_fq;

#endif

    /* End of SignalConversion generated from: '<S530>/VariantSource' */

    /* Switch: '<S603>/Switch6' */
    if (rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Switch: '<S603>/Switch6' incorporates:
         *  Lookup_n-D: '<S647>/Vector'
         *  SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl'
         *  SignalConversion generated from: '<S1>/VeCSVR_a_VehAccel'
         */
        rtb_TmpSignalConversionAtVeAX_k = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBT_h, rtb_TmpSignalConversionAtVeCS_l,
             ((const float32 *)&(KxWTAR_t_TimCnstSpdIni[0])), ((const float32 *)
              &(KyWTAR_t_TimCnstSpdIni[0])), ((const float32 *)
              &(KtWTAR_t_TimCnstSpdIni[0])), WTAR_ac_ConstP.Vector_maxIndex, 7U);
    }
    else
    {
        /* Switch: '<S603>/Switch6' incorporates:
         *  Lookup_n-D: '<S648>/Vector'
         *  SignalConversion generated from: '<S1>/VeCSVR_a_VehAccel'
         */
        rtb_TmpSignalConversionAtVeAX_k = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCS_l, ((const float32 *)
              &(KxWTAR_t_TimCnstSpdIni_Auto[0])), ((const float32 *)
              &(KtWTAR_t_TimCnstSpdIni_Auto[0])), 5U);
    }

    /* End of Switch: '<S603>/Switch6' */

    /* Lookup_n-D: '<S587>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd'
     */
    rtb_TmpSignalConversionAtVeCS_l = look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeCS_n, ((const float32 *)
          &(KxWTAR_M_OvrRev_OpenLoop[0])), ((const float32 *)
          &(KtWTAR_M_OvrRev_OpenLoop[0])), 6U);

    /* Switch: '<S601>/Switch1' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S601>/Switch1' incorporates:
         *  RelationalOperator: '<S601>/Comparison1'
         *  UnitDelay: '<S601>/Unit Delay6'
         */
        rtb_TmpSignalConversionAtVeSR_f = (WTAR_ac_DW.UnitDelay6_DSTATE <
            VeWTAC_M_ToCmnd_PstFil_HTDR);
    }
    else
    {
        /* Switch: '<S601>/Switch1' incorporates:
         *  RelationalOperator: '<S601>/Comparison2'
         *  UnitDelay: '<S601>/Unit Delay6'
         */
        rtb_TmpSignalConversionAtVeSR_f = (WTAR_ac_DW.UnitDelay6_DSTATE >
            VeWTAC_M_ToCmnd_PstFil_HTDR);
    }

    /* End of Switch: '<S601>/Switch1' */

    /* Switch: '<S594>/Switch6' */
    if (rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Switch: '<S594>/Switch6' incorporates:
         *  Lookup_n-D: '<S633>/Vector'
         *  SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl'
         */
        rtb_TmpSignalConversionAtVeSC_f = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBT_h, ((const float32 *)
              &(KxWTAR_n_NaMan_RSP[0])), ((const float32 *)&(KtWTAR_n_NaMan_RSP
               [0])), 6U);
    }
    else
    {
        /* Switch: '<S594>/Switch6' incorporates:
         *  Constant: '<S607>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_f = KeWTAR_n_NaClipAct_OvrSpdRSP;
    }

    /* End of Switch: '<S594>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTRNR_e_TargetGear' */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&tmpRead_8);

    /* Inport: '<Root>/VaOSMR_n_NTurb_FromNo' */
    (void)Rte_Read_VaOSMR_n_NTurb_FromNo_Value(tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Abs: '<S602>/Abs' */
    rtb_TmpSignalConversionAtVeS_dq = fabsf(rtb_TmpSignalConversionAtVeMS_e);

    /* Sum: '<S602>/Sum5' */
    VeWTAC_n_OvrSpdPtn_SpdDiffNa = rtb_TmpSignalConversionAtVeS_dq -
        rtb_TmpSignalConversionAtVeHSCR;

    /* Abs: '<S602>/Abs1' */
    rtb_Sum3_gl = fabsf(rtb_TmpSignalConversionAtVeMSPR);

    /* Sum: '<S602>/Sum2' */
    VeWTAC_n_OvrSpdPtn_SpdDiffNb = rtb_Sum3_gl - rtb_TmpSignalConversionAtVeHS_m;

    /* Outputs for Atomic SubSystem: '<S602>/Digital_Lowpass_Reset_Enabled1' */
    /* Sum: '<S638>/Summation' incorporates:
     *  Constant: '<S640>/Calib'
     *  Product: '<S638>/Multiplication'
     *  Sum: '<S638>/Subtraction'
     *  UnitDelay: '<S638>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBTQR = ((rtb_TmpSignalConversionAtVeTISR -
        WTAR_ac_DW.UnitDelay_DSTATE_cm) * KeWTAR_r_FltCoeff_Ni) +
        WTAR_ac_DW.UnitDelay_DSTATE_cm;

    /* Update for UnitDelay: '<S638>/Unit Delay' incorporates:
     *  Switch: '<S638>/Switch2'
     */
    WTAR_ac_DW.UnitDelay_DSTATE_cm = rtb_TmpSignalConversionAtVeBTQR;

    /* Sum: '<S602>/Sum7' incorporates:
     *  Switch: '<S638>/Switch2'
     */
    VeWTAC_n_OvrSpdPtn_SpdDiffNi = rtb_TmpSignalConversionAtVeBTQR -
        rtb_TmpSignalConversionAtVeESPR;

    /* End of Outputs for SubSystem: '<S602>/Digital_Lowpass_Reset_Enabled1' */

    /* MinMax: '<S602>/MinMax1' incorporates:
     *  Constant: '<S390>/Calib'
     *  DataTypeConversion: '<S303>/Data Type Conversion'
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     *  Selector: '<S303>/Ta2Tmx'
     *  Selector: '<S303>/Ta2Tmx1'
     */
    rtb_TmpSignalConversionAtVeVSDR = fmaxf(rtb_TmpSignalConversionAtVeVSDR,
        tmpRead_7[KaWTAR_k_NtiIndex[(tmpRead_8)]]);

    /* Sum: '<S602>/Sum8' */
    VeWTAC_n_OvrSpdPtn_SpdDiffNturb = rtb_TmpSignalConversionAtVeVSDR -
        rtb_TmpSignalConversionAtVeTRNR;

    /* Outputs for Atomic SubSystem: '<S600>/Protected_Division1' */
    /* Sum: '<S600>/Sum4' incorporates:
     *  Abs: '<S602>/Abs2'
     *  Product: '<S600>/Divide2'
     *  Product: '<S600>/Divide3'
     *  Product: '<S600>/Divide4'
     *  Product: '<S600>/Divide5'
     *  SignalConversion generated from: '<S602>/VariantSource'
     *  Sum: '<S600>/Sum2'
     */
#if Rte_SysCon_Variant_WTAR_5

    /* Sum: '<S600>/Sum4' incorporates:
     *  Constant: '<S630>/Calib'
     *  Constant: '<S631>/Calib'
     */
    rtb_Sum4_a = KeWTAR_scl_ToothSun + KeWTAR_scl_ToothRing;

    /* Switch: '<S632>/Switch1' incorporates:
     *  Constant: '<S631>/Calib'
     *  Constant: '<S632>/Constant Value'
     *  Constant: '<S632>/Constant Value1'
     *  Constant: '<S632>/Constant Value2'
     *  Constant: '<S632>/Constant Value3'
     *  Logic: '<S632>/AND'
     *  RelationalOperator: '<S632>/Greater Than or Equal '
     *  RelationalOperator: '<S632>/Greater Than or Equal 1'
     *  RelationalOperator: '<S632>/Not Equal'
     *  RelationalOperator: '<S632>/Not Equal1'
     *  Switch: '<S632>/Switch2'
     *  Switch: '<S632>/Switch3'
     */
    if ((KeWTAR_scl_ToothSun != 0.0F) && (rtb_Sum4_a != 0.0F))
    {
        /* Switch: '<S632>/Switch1' incorporates:
         *  Product: '<S632>/Division'
         */
        rtb_Sum4_a = KeWTAR_scl_ToothSun / rtb_Sum4_a;
    }
    else if (KeWTAR_scl_ToothSun > 0.0F)
    {
        /* Switch: '<S632>/Switch2' incorporates:
         *  Constant: '<S632>/MAXFLOAT'
         *  Switch: '<S632>/Switch1'
         */
        rtb_Sum4_a = 3.402823466E+38F;
    }
    else if (KeWTAR_scl_ToothSun < 0.0F)
    {
        /* Switch: '<S632>/Switch3' incorporates:
         *  Constant: '<S632>/MINFLOAT'
         *  Switch: '<S632>/Switch1'
         *  Switch: '<S632>/Switch2'
         */
        rtb_Sum4_a = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S632>/Switch1' incorporates:
         *  Constant: '<S632>/Constant Value4'
         *  Switch: '<S632>/Switch2'
         *  Switch: '<S632>/Switch3'
         */
        rtb_Sum4_a = 0.0F;
    }

    /* End of Switch: '<S632>/Switch1' */

    /* Product: '<S600>/Divide4' incorporates:
     *  Constant: '<S628>/Calib'
     *  Constant: '<S629>/Calib'
     *  Constant: '<S630>/Calib'
     */
    VeWTAR_n_PinionSpeed = ((KeWTAR_scl_ToothRing / KeWTAR_scl_ToothPinion) *
                            rtb_Sum4_a) * ((rtb_TmpSignalConversionAtVeMSPR /
        KeWTAR_scl_PinRedGear) - rtb_TmpSignalConversionAtVeMS_e);

    /* VariantMerge generated from: '<S602>/VariantSource' */
    rtb_Sum4_a = fabsf(VeWTAR_n_PinionSpeed);

#else

    /* VariantMerge generated from: '<S602>/VariantSource' incorporates:
     *  Constant: '<S602>/Constant Value2'
     *  SignalConversion generated from: '<S602>/VariantSource'
     */
    rtb_Sum4_a = 0.0F;

#endif

    /* End of Sum: '<S600>/Sum4' */
    /* End of Outputs for SubSystem: '<S600>/Protected_Division1' */

    /* Sum: '<S602>/Sum1' incorporates:
     *  Constant: '<S593>/Calib'
     */
    VeWTAC_n_OvrSpdPtn_SpdDiffNpin = rtb_Sum4_a - KeWTAR_n_PinionSpdLimit;

    /* Outputs for Atomic SubSystem: '<S594>/Hysteresis1' */
    /* Switch: '<S604>/Switch1' incorporates:
     *  RelationalOperator: '<S604>/Greater  Than'
     *  SignalConversion generated from: '<S533>/Selector'
     *  Switch: '<S594>/Switch2'
     */
    if (VeWTAC_n_OvrSpdPtn_SpdDiffNa > rtb_TmpSignalConversionAtVeSC_f)
    {
        /* Switch: '<S604>/Switch1' incorporates:
         *  Constant: '<S604>/Constant Value'
         */
        VeWTAC_b_OvrRevNa = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeSR_f)
        {
            /* Switch: '<S594>/Switch2' incorporates:
             *  Constant: '<S605>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NaClipAct_OvrSpdLSPA;
        }
        else
        {
            /* Switch: '<S594>/Switch2' incorporates:
             *  Constant: '<S606>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NaClipAct_OvrSpdLSPB;
        }

        /* Switch: '<S604>/Switch1' incorporates:
         *  RelationalOperator: '<S604>/Greater  Than1'
         *  Sum: '<S594>/Sum5'
         *  UnitDelay: '<S604>/Unit Delay'
         */
        VeWTAC_b_OvrRevNa = ((VeWTAC_n_OvrSpdPtn_SpdDiffNa >=
                              (rtb_TmpSignalConversionAtVeSC_c +
                               rtb_TmpSignalConversionAtVeSC_f)) &&
                             (WTAR_ac_DW.UnitDelay_DSTATE_d0h));
    }

    /* End of Switch: '<S604>/Switch1' */

    /* Update for UnitDelay: '<S604>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_d0h = VeWTAC_b_OvrRevNa;

    /* End of Outputs for SubSystem: '<S594>/Hysteresis1' */

    /* Switch: '<S595>/Switch6' */
    if (rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Switch: '<S595>/Switch6' incorporates:
         *  Lookup_n-D: '<S634>/Vector'
         *  SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl'
         */
        rtb_TmpSignalConversionAtVeMSPR = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBT_h, ((const float32 *)
              &(KxWTAR_n_NbMan_RSP[0])), ((const float32 *)&(KtWTAR_n_NbMan_RSP
               [0])), 6U);
    }
    else
    {
        /* Switch: '<S595>/Switch6' incorporates:
         *  Constant: '<S611>/Calib'
         */
        rtb_TmpSignalConversionAtVeMSPR = KeWTAR_n_NbClipAct_OvrSpdRSP;
    }

    /* End of Switch: '<S595>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S595>/Hysteresis2' */
    /* Switch: '<S608>/Switch1' incorporates:
     *  RelationalOperator: '<S608>/Greater  Than'
     *  SignalConversion generated from: '<S533>/Selector'
     *  Switch: '<S595>/Switch2'
     */
    if (VeWTAC_n_OvrSpdPtn_SpdDiffNa > rtb_TmpSignalConversionAtVeMSPR)
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S608>/Constant Value'
         */
        VeWTAC_b_OvrRevNb = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeSR_f)
        {
            /* Switch: '<S595>/Switch2' incorporates:
             *  Constant: '<S609>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NbClipAct_OvrSpdLSPA;
        }
        else
        {
            /* Switch: '<S595>/Switch2' incorporates:
             *  Constant: '<S610>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NbClipAct_OvrSpdLSPB;
        }

        /* Switch: '<S608>/Switch1' incorporates:
         *  RelationalOperator: '<S608>/Greater  Than1'
         *  Sum: '<S595>/Sum5'
         *  UnitDelay: '<S608>/Unit Delay'
         */
        VeWTAC_b_OvrRevNb = ((VeWTAC_n_OvrSpdPtn_SpdDiffNa >=
                              (rtb_TmpSignalConversionAtVeSC_c +
                               rtb_TmpSignalConversionAtVeMSPR)) &&
                             (WTAR_ac_DW.UnitDelay_DSTATE_ca3));
    }

    /* End of Switch: '<S608>/Switch1' */

    /* Update for UnitDelay: '<S608>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ca3 = VeWTAC_b_OvrRevNb;

    /* End of Outputs for SubSystem: '<S595>/Hysteresis2' */

    /* Switch: '<S596>/Switch6' */
    if (rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Switch: '<S596>/Switch6' incorporates:
         *  Lookup_n-D: '<S635>/Vector'
         *  SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl'
         */
        rtb_TmpSignalConversionAtVeMSPR = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBT_h, ((const float32 *)
              &(KxWTAR_n_NiMan_RSP[0])), ((const float32 *)&(KtWTAR_n_NiMan_RSP
               [0])), 6U);
    }
    else
    {
        /* Switch: '<S596>/Switch6' incorporates:
         *  Constant: '<S615>/Calib'
         */
        rtb_TmpSignalConversionAtVeMSPR = KeWTAR_n_NiClipAct_OvrSpdRSP;
    }

    /* End of Switch: '<S596>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S596>/Hysteresis3' */
    /* Switch: '<S612>/Switch1' incorporates:
     *  RelationalOperator: '<S612>/Greater  Than'
     *  SignalConversion generated from: '<S533>/Selector'
     *  Switch: '<S596>/Switch2'
     */
    if (VeWTAC_n_OvrSpdPtn_SpdDiffNa > rtb_TmpSignalConversionAtVeMSPR)
    {
        /* Switch: '<S612>/Switch1' incorporates:
         *  Constant: '<S612>/Constant Value'
         */
        rtb_AND_a2v = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeSR_f)
        {
            /* Switch: '<S596>/Switch2' incorporates:
             *  Constant: '<S613>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NiClipAct_OvrSpdLSPA;
        }
        else
        {
            /* Switch: '<S596>/Switch2' incorporates:
             *  Constant: '<S614>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NiClipAct_OvrSpdLSPB;
        }

        /* Switch: '<S612>/Switch1' incorporates:
         *  RelationalOperator: '<S612>/Greater  Than1'
         *  Sum: '<S596>/Sum5'
         *  UnitDelay: '<S612>/Unit Delay'
         */
        rtb_AND_a2v = ((VeWTAC_n_OvrSpdPtn_SpdDiffNa >=
                        (rtb_TmpSignalConversionAtVeSC_c +
                         rtb_TmpSignalConversionAtVeMSPR)) &&
                       (WTAR_ac_DW.UnitDelay_DSTATE_pa));
    }

    /* End of Switch: '<S612>/Switch1' */
    /* End of Outputs for SubSystem: '<S596>/Hysteresis3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeICSR_b_Disable_Ni_Global' */
    (void)Rte_Read_VeICSR_b_Disable_Ni_Global_Value(&rtb_OR1_f24);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outputs for Atomic SubSystem: '<S596>/Hysteresis3' */
    /* Update for UnitDelay: '<S612>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_pa = rtb_AND_a2v;

    /* End of Outputs for SubSystem: '<S596>/Hysteresis3' */

    /* Logic: '<S533>/Logical2' */
    VeWTAC_b_OvrRevNi = (rtb_OR1_f24 && rtb_AND_a2v);

    /* Switch: '<S598>/Switch6' */
    if (rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Switch: '<S598>/Switch6' incorporates:
         *  Lookup_n-D: '<S637>/Vector'
         *  SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl'
         */
        rtb_TmpSignalConversionAtVeMSPR = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBT_h, ((const float32 *)
              &(KxWTAR_n_NturbMan_RSP[0])), ((const float32 *)
              &(KtWTAR_n_NturbMan_RSP[0])), 6U);
    }
    else
    {
        /* Switch: '<S598>/Switch6' incorporates:
         *  Constant: '<S624>/Calib'
         */
        rtb_TmpSignalConversionAtVeMSPR = KeWTAR_n_NturbClipAct_OvrSpdRSP;
    }

    /* End of Switch: '<S598>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S598>/Hysteresis4' */
    /* Switch: '<S621>/Switch1' incorporates:
     *  RelationalOperator: '<S621>/Greater  Than'
     *  SignalConversion generated from: '<S533>/Selector'
     *  Switch: '<S598>/Switch2'
     */
    if (VeWTAC_n_OvrSpdPtn_SpdDiffNa > rtb_TmpSignalConversionAtVeMSPR)
    {
        /* Switch: '<S621>/Switch1' incorporates:
         *  Constant: '<S621>/Constant Value'
         */
        VeWTAC_b_OvrRevNturb = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeSR_f)
        {
            /* Switch: '<S598>/Switch2' incorporates:
             *  Constant: '<S622>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NturbClipAct_OvrSpdLSPA;
        }
        else
        {
            /* Switch: '<S598>/Switch2' incorporates:
             *  Constant: '<S623>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NturbClipAct_OvrSpdLSPB;
        }

        /* Switch: '<S621>/Switch1' incorporates:
         *  RelationalOperator: '<S621>/Greater  Than1'
         *  Sum: '<S598>/Sum5'
         *  UnitDelay: '<S621>/Unit Delay'
         */
        VeWTAC_b_OvrRevNturb = ((VeWTAC_n_OvrSpdPtn_SpdDiffNa >=
            (rtb_TmpSignalConversionAtVeSC_c + rtb_TmpSignalConversionAtVeMSPR))
                                && (WTAR_ac_DW.UnitDelay_DSTATE_hc));
    }

    /* End of Switch: '<S621>/Switch1' */

    /* Update for UnitDelay: '<S621>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hc = VeWTAC_b_OvrRevNturb;

    /* End of Outputs for SubSystem: '<S598>/Hysteresis4' */

    /* Outputs for Atomic SubSystem: '<S597>/Hysteresis4' */
    /* Switch: '<S597>/Switch6' incorporates:
     *  Gain: '<S620>/Gain'
     *  Selector: '<S533>/Selector4'
     *  SignalConversion generated from: '<S533>/VariantSource'
     */
#if Rte_SysCon_Variant_WTAR_5

    if (rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Switch: '<S597>/Switch6' incorporates:
         *  Lookup_n-D: '<S636>/Vector'
         *  SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl'
         */
        rtb_TmpSignalConversionAtVeBT_h = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBT_h, ((const float32 *)
              &(KxWTAR_n_NpinMan_RSP[0])), ((const float32 *)
              &(KtWTAR_n_NpinMan_RSP[0])), 6U);
    }
    else
    {
        /* Switch: '<S597>/Switch6' incorporates:
         *  Constant: '<S619>/Calib'
         */
        rtb_TmpSignalConversionAtVeBT_h = KeWTAR_n_NpinClipAct_OvrSpdRSP;
    }

    /* Switch: '<S616>/Switch1' incorporates:
     *  RelationalOperator: '<S616>/Greater  Than'
     *  SignalConversion generated from: '<S533>/Selector'
     *  Switch: '<S597>/Switch2'
     */
    if (VeWTAC_n_OvrSpdPtn_SpdDiffNa > rtb_TmpSignalConversionAtVeBT_h)
    {
        /* Switch: '<S616>/Switch1' incorporates:
         *  Constant: '<S616>/Constant Value'
         */
        VeWTAC_b_OvrRevNpin = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeSR_f)
        {
            /* Switch: '<S597>/Switch2' incorporates:
             *  Constant: '<S617>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NpinClipAct_OvrSpdLSPA;
        }
        else
        {
            /* Switch: '<S597>/Switch2' incorporates:
             *  Constant: '<S618>/Calib'
             */
            rtb_TmpSignalConversionAtVeSC_c = KeWTAR_n_NpinClipAct_OvrSpdLSPB;
        }

        /* Switch: '<S616>/Switch1' incorporates:
         *  RelationalOperator: '<S616>/Greater  Than1'
         *  Sum: '<S597>/Sum5'
         *  UnitDelay: '<S616>/Unit Delay'
         */
        VeWTAC_b_OvrRevNpin = ((VeWTAC_n_OvrSpdPtn_SpdDiffNa >=
                                (rtb_TmpSignalConversionAtVeSC_c +
            rtb_TmpSignalConversionAtVeBT_h)) &&
                               (WTAR_ac_DW.UnitDelay_DSTATE_f3v));
    }

    /* End of Switch: '<S616>/Switch1' */

    /* Update for UnitDelay: '<S616>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_f3v = VeWTAC_b_OvrRevNpin;

    /* VariantMerge generated from: '<S533>/VariantSource' */
    rtb_VariantMerge_For_Variant__d = VeWTAC_b_OvrRevNpin;

#else

    /* VariantMerge generated from: '<S533>/VariantSource' incorporates:
     *  Constant: '<S533>/Constant Value2'
     *  SignalConversion generated from: '<S533>/VariantSource'
     */
    rtb_VariantMerge_For_Variant__d = false;

#endif

    /* End of Switch: '<S597>/Switch6' */
    /* End of Outputs for SubSystem: '<S597>/Hysteresis4' */

    /* Logic: '<S599>/Logical5' */
    VeWTAC_b_OvrRevSpdRaw = (((((VeWTAC_b_OvrRevNa) || (VeWTAC_b_OvrRevNb)) ||
        (VeWTAC_b_OvrRevNi)) || (VeWTAC_b_OvrRevNturb)) ||
        rtb_VariantMerge_For_Variant__d);

    /* Outputs for Atomic SubSystem: '<S599>/Turn_On_Delay_Sample' */
    /* Outputs for Atomic SubSystem: '<S626>/EdgeRising' */
    /* Logic: '<S627>/AND' incorporates:
     *  Logic: '<S627>/OR1'
     *  UnitDelay: '<S599>/Unit Delay3'
     *  UnitDelay: '<S627>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRGR = ((WTAR_ac_DW.UnitDelay3_DSTATE_h) &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_on));

    /* Update for UnitDelay: '<S627>/Unit Delay' incorporates:
     *  UnitDelay: '<S599>/Unit Delay3'
     */
    WTAR_ac_DW.UnitDelay_DSTATE_on = WTAR_ac_DW.UnitDelay3_DSTATE_h;

    /* End of Outputs for SubSystem: '<S626>/EdgeRising' */

    /* Switch: '<S626>/Switch1' incorporates:
     *  Constant: '<S625>/Calib'
     *  Constant: '<S626>/Constant Value'
     *  Logic: '<S626>/OR'
     *  Logic: '<S626>/OR1'
     *  MinMax: '<S626>/Minimum'
     *  Sum: '<S626>/Summation'
     *  UnitDelay: '<S599>/Unit Delay3'
     *  UnitDelay: '<S626>/Unit Delay'
     */
    if ((!WTAR_ac_DW.UnitDelay3_DSTATE_h) || rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Switch: '<S626>/Switch1' incorporates:
         *  Constant: '<S626>/Constant Value1'
         */
        rtb_Switch1_g = 0U;
    }
    else if (KeWTAR_Cnt_OvrRevPtn_ActIniDly < ((uint16)(((uint32)
                WTAR_ac_DW.UnitDelay_DSTATE_nu) + 1U)))
    {
        /* MinMax: '<S626>/Minimum' incorporates:
         *  Constant: '<S625>/Calib'
         *  Switch: '<S626>/Switch1'
         */
        rtb_Switch1_g = KeWTAR_Cnt_OvrRevPtn_ActIniDly;
    }
    else
    {
        /* Switch: '<S626>/Switch1' incorporates:
         *  Constant: '<S626>/Constant Value'
         *  MinMax: '<S626>/Minimum'
         *  Sum: '<S626>/Summation'
         *  UnitDelay: '<S626>/Unit Delay'
         */
        rtb_Switch1_g = (uint16)(((uint32)WTAR_ac_DW.UnitDelay_DSTATE_nu) + 1U);
    }

    /* End of Switch: '<S626>/Switch1' */

    /* Update for UnitDelay: '<S626>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nu = rtb_Switch1_g;

    /* Logic: '<S599>/Logical1' incorporates:
     *  Constant: '<S625>/Calib'
     *  Logic: '<S626>/AND'
     *  RelationalOperator: '<S626>/Greater  Than'
     *  UnitDelay: '<S599>/Unit Delay3'
     */
    WTAR_ac_B.VeWTAR_b_ToClipActive = ((VeWTAC_b_OvrRevSpdRaw) &&
        ((WTAR_ac_DW.UnitDelay3_DSTATE_h) && (rtb_Switch1_g >=
        KeWTAR_Cnt_OvrRevPtn_ActIniDly)));

    /* End of Outputs for SubSystem: '<S599>/Turn_On_Delay_Sample' */

    /* Outputs for Atomic SubSystem: '<S532>/EdgeRising1' */
    /* Logic: '<S585>/AND' incorporates:
     *  Logic: '<S585>/OR1'
     *  UnitDelay: '<S585>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTRGR = ((WTAR_ac_B.VeWTAR_b_ToClipActive) &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_nc));

    /* Update for UnitDelay: '<S585>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nc = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S532>/EdgeRising1' */

    /* Switch: '<S532>/Switch8' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S589>/Switch1' */
        if (rtb_TmpSignalConversionAtVeTRGR)
        {
            /* Switch: '<S532>/Switch8' incorporates:
             *  Switch: '<S589>/Switch1'
             */
            VeWTAC_M_OvrRev_IniVal = rtb_TmpSignalConversionAtVeCS_l;
        }
        else
        {
            /* Switch: '<S532>/Switch8' incorporates:
             *  Switch: '<S589>/Switch1'
             *  UnitDelay: '<S589>/Unit Delay'
             */
            VeWTAC_M_OvrRev_IniVal = WTAR_ac_DW.UnitDelay_DSTATE_d;
        }

        /* End of Switch: '<S589>/Switch1' */
    }
    else
    {
        /* Switch: '<S532>/Switch8' */
        VeWTAC_M_OvrRev_IniVal = rtb_TmpSignalConversionAtVeCS_l;
    }

    /* End of Switch: '<S532>/Switch8' */

    /* Outputs for Atomic SubSystem: '<S532>/EdgeRising' */
    /* Logic: '<S584>/OR1' incorporates:
     *  UnitDelay: '<S584>/Unit Delay'
     */
    rtb_OR1_f24 = !WTAR_ac_DW.UnitDelay_DSTATE_db;

    /* Update for UnitDelay: '<S584>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_db = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S532>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S532>/LowpassT_Reset_Enabled' */
    /* UnitDelay: '<S588>/Unit Delay' */
    rtb_TmpSignalConversionAtVeBT_h = WTAR_ac_DW.UnitDelay_DSTATE_mk;

    /* Outputs for Atomic SubSystem: '<S532>/EdgeRising' */
    /* Switch: '<S588>/Switch1' incorporates:
     *  Logic: '<S584>/AND'
     */
    if ((WTAR_ac_B.VeWTAR_b_ToClipActive) && rtb_OR1_f24)
    {
        /* Switch: '<S588>/Switch1' incorporates:
         *  UnitDelay: '<S532>/Unit Delay4'
         */
        VeWTAC_M_OvrRevOpenLoop = WTAR_ac_DW.UnitDelay4_DSTATE_kf;
    }
    else
    {
        /* Switch: '<S588>/Switch1' incorporates:
         *  Constant: '<S586>/Calib'
         *  MinMax: '<S588>/Maximum'
         *  Product: '<S588>/Multiplication'
         *  Product: '<S588>/Multiplication1'
         *  Sum: '<S588>/Subtraction'
         *  Sum: '<S588>/Summation'
         */
        VeWTAC_M_OvrRevOpenLoop = (((VeWTAC_M_OvrRev_IniVal -
            rtb_TmpSignalConversionAtVeBT_h) * KeWTAR_t_dT) * (1.0F / fmaxf
            (rtb_TmpSignalConversionAtVeAX_k, KeWTAR_t_dT))) +
            rtb_TmpSignalConversionAtVeBT_h;
    }

    /* End of Switch: '<S588>/Switch1' */
    /* End of Outputs for SubSystem: '<S532>/EdgeRising' */

    /* Update for UnitDelay: '<S588>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_mk = VeWTAC_M_OvrRevOpenLoop;

    /* End of Outputs for SubSystem: '<S532>/LowpassT_Reset_Enabled' */

    /* Abs: '<S583>/Abs' incorporates:
     *  Sum: '<S583>/Sum4'
     */
    rtb_TmpSignalConversionAtVeMSPR = fabsf(VeWTAC_M_OvrRevOpenLoop -
        VeWTAC_M_OvrRev_IniVal);

    /* Switch: '<S583>/Switch8' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S583>/Switch8' incorporates:
         *  UnitDelay: '<S583>/Unit Delay4'
         */
        rtb_TmpSignalConversionAtVeBT_h = WTAR_ac_DW.UnitDelay4_DSTATE_b;
    }
    else
    {
        /* Switch: '<S583>/Switch8' incorporates:
         *  UnitDelay: '<S532>/Unit Delay4'
         */
        rtb_TmpSignalConversionAtVeBT_h = WTAR_ac_DW.UnitDelay4_DSTATE_kf;
    }

    /* End of Switch: '<S583>/Switch8' */

    /* Abs: '<S583>/Abs1' incorporates:
     *  Sum: '<S583>/Sum1'
     */
    rtb_TmpSignalConversionAtVeSC_f = fabsf(rtb_TmpSignalConversionAtVeBT_h -
        VeWTAC_M_OvrRev_IniVal);

    /* Outputs for Atomic SubSystem: '<S583>/Protected_Division1' */
    /* Switch: '<S592>/Switch1' incorporates:
     *  Constant: '<S592>/Constant Value'
     *  Constant: '<S592>/Constant Value1'
     *  Constant: '<S592>/Constant Value2'
     *  Logic: '<S592>/AND'
     *  RelationalOperator: '<S592>/Greater Than or Equal '
     *  RelationalOperator: '<S592>/Not Equal'
     *  RelationalOperator: '<S592>/Not Equal1'
     *  Switch: '<S592>/Switch2'
     */
    if ((rtb_TmpSignalConversionAtVeMSPR != 0.0F) &&
            (rtb_TmpSignalConversionAtVeSC_f != 0.0F))
    {
        /* Switch: '<S592>/Switch1' incorporates:
         *  Product: '<S592>/Division'
         */
        rtb_TmpSignalConversionAtVeMSPR /= rtb_TmpSignalConversionAtVeSC_f;
    }
    else if (rtb_TmpSignalConversionAtVeMSPR > 0.0F)
    {
        /* Switch: '<S592>/Switch2' incorporates:
         *  Constant: '<S592>/MAXFLOAT'
         *  Switch: '<S592>/Switch1'
         */
        rtb_TmpSignalConversionAtVeMSPR = 3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S592>/Switch1' incorporates:
         *  Constant: '<S592>/Constant Value4'
         *  Switch: '<S592>/Switch2'
         *  Switch: '<S592>/Switch3'
         */
        rtb_TmpSignalConversionAtVeMSPR = 0.0F;
    }

    /* End of Switch: '<S592>/Switch1' */
    /* End of Outputs for SubSystem: '<S583>/Protected_Division1' */

    /* Outputs for Atomic SubSystem: '<S583>/Limiter1' */
    /* Switch: '<S591>/Switch1' incorporates:
     *  Constant: '<S583>/Constant Value4'
     *  RelationalOperator: '<S591>/Relational Operator'
     */
    if (1.0F < rtb_TmpSignalConversionAtVeMSPR)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 1.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeMSPR;
    }

    /* End of Switch: '<S591>/Switch1' */

    /* Switch: '<S591>/Switch' incorporates:
     *  Constant: '<S583>/Constant Value2'
     *  RelationalOperator: '<S591>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > 0.0F)
    {
        /* Switch: '<S591>/Switch' */
        VeWTAC_k_OL_BldFac = rtb_Switch1_mxa;
    }
    else
    {
        /* Switch: '<S591>/Switch' */
        VeWTAC_k_OL_BldFac = 0.0F;
    }

    /* End of Switch: '<S591>/Switch' */
    /* End of Outputs for SubSystem: '<S583>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S603>/EdgeRising3' */
    /* Logic: '<S643>/OR1' incorporates:
     *  UnitDelay: '<S643>/Unit Delay'
     */
    rtb_OR1_f24 = !WTAR_ac_DW.UnitDelay_DSTATE_hdr;

    /* Update for UnitDelay: '<S643>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hdr = VeWTAC_b_OvrRevNa;

    /* Outputs for Atomic SubSystem: '<S603>/LowpassT_Reset_Enabled' */
    /* Switch: '<S649>/Switch1' incorporates:
     *  Logic: '<S643>/AND'
     */
    if ((VeWTAC_b_OvrRevNa) && rtb_OR1_f24)
    {
        /* Switch: '<S649>/Switch1' */
        rtb_TmpSignalConversionAtVeMSPR = rtb_TmpSignalConversionAtVeS_dq;
    }
    else
    {
        /* Switch: '<S649>/Switch1' incorporates:
         *  Constant: '<S646>/Calib'
         *  MinMax: '<S649>/Maximum'
         *  Product: '<S649>/Multiplication'
         *  Product: '<S649>/Multiplication1'
         *  Sum: '<S649>/Subtraction'
         *  Sum: '<S649>/Summation'
         *  UnitDelay: '<S649>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeMSPR = (((rtb_TmpSignalConversionAtVeHSCR -
            WTAR_ac_DW.UnitDelay_DSTATE_kq) * KeWTAR_t_dT) * (1.0F / fmaxf
            (rtb_TmpSignalConversionAtVeAX_k, KeWTAR_t_dT))) +
            WTAR_ac_DW.UnitDelay_DSTATE_kq;
    }

    /* End of Switch: '<S649>/Switch1' */
    /* End of Outputs for SubSystem: '<S603>/EdgeRising3' */

    /* Update for UnitDelay: '<S649>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_kq = rtb_TmpSignalConversionAtVeMSPR;

    /* End of Outputs for SubSystem: '<S603>/LowpassT_Reset_Enabled' */

    /* Switch: '<S603>/Switch' */
    if (VeWTAC_b_OvrRevNa)
    {
        /* Switch: '<S603>/Switch' */
        VeWTAC_n_TgtSpdNa = rtb_TmpSignalConversionAtVeMSPR;
    }
    else
    {
        /* Switch: '<S603>/Switch' */
        VeWTAC_n_TgtSpdNa = rtb_TmpSignalConversionAtVeHSCR;
    }

    /* End of Switch: '<S603>/Switch' */

    /* Sum: '<S603>/Sum3' */
    rtb_TmpSignalConversionAtVeSC_f = VeWTAC_n_TgtSpdNa -
        rtb_TmpSignalConversionAtVeS_dq;

    /* Outputs for Atomic SubSystem: '<S603>/EdgeRising1' */
    /* Logic: '<S641>/OR1' incorporates:
     *  UnitDelay: '<S641>/Unit Delay'
     */
    rtb_OR1_f24 = !WTAR_ac_DW.UnitDelay_DSTATE_lk;

    /* Update for UnitDelay: '<S641>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_lk = VeWTAC_b_OvrRevNb;

    /* Outputs for Atomic SubSystem: '<S603>/LowpassT_Reset_Enabled1' */
    /* Switch: '<S650>/Switch1' incorporates:
     *  Logic: '<S641>/AND'
     */
    if ((VeWTAC_b_OvrRevNb) && rtb_OR1_f24)
    {
        /* Switch: '<S650>/Switch1' */
        rtb_TmpSignalConversionAtVeHSCR = rtb_Sum3_gl;
    }
    else
    {
        /* Switch: '<S650>/Switch1' incorporates:
         *  Constant: '<S646>/Calib'
         *  MinMax: '<S650>/Maximum'
         *  Product: '<S650>/Multiplication'
         *  Product: '<S650>/Multiplication1'
         *  Sum: '<S650>/Subtraction'
         *  Sum: '<S650>/Summation'
         *  UnitDelay: '<S650>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHSCR = (((rtb_TmpSignalConversionAtVeHS_m -
            WTAR_ac_DW.UnitDelay_DSTATE_ch) * KeWTAR_t_dT) * (1.0F / fmaxf
            (rtb_TmpSignalConversionAtVeAX_k, KeWTAR_t_dT))) +
            WTAR_ac_DW.UnitDelay_DSTATE_ch;
    }

    /* End of Switch: '<S650>/Switch1' */
    /* End of Outputs for SubSystem: '<S603>/EdgeRising1' */

    /* Update for UnitDelay: '<S650>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ch = rtb_TmpSignalConversionAtVeHSCR;

    /* End of Outputs for SubSystem: '<S603>/LowpassT_Reset_Enabled1' */

    /* Switch: '<S603>/Switch1' */
    if (VeWTAC_b_OvrRevNb)
    {
        /* Switch: '<S603>/Switch1' */
        VeWTAC_n_TgtSpdNb = rtb_TmpSignalConversionAtVeHSCR;
    }
    else
    {
        /* Switch: '<S603>/Switch1' */
        VeWTAC_n_TgtSpdNb = rtb_TmpSignalConversionAtVeHS_m;
    }

    /* End of Switch: '<S603>/Switch1' */

    /* Sum: '<S603>/Sum1' */
    rtb_TmpSignalConversionAtVeS_dq = VeWTAC_n_TgtSpdNb - rtb_Sum3_gl;

    /* Outputs for Atomic SubSystem: '<S603>/EdgeRising2' */
    /* Logic: '<S642>/OR1' incorporates:
     *  UnitDelay: '<S642>/Unit Delay'
     */
    rtb_OR1_f24 = !WTAR_ac_DW.UnitDelay_DSTATE_i5;

    /* Update for UnitDelay: '<S642>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_i5 = VeWTAC_b_OvrRevNi;

    /* Outputs for Atomic SubSystem: '<S603>/LowpassT_Reset_Enabled2' */
    /* Switch: '<S651>/Switch1' incorporates:
     *  Logic: '<S642>/AND'
     */
    if ((VeWTAC_b_OvrRevNi) && rtb_OR1_f24)
    {
        /* Outputs for Atomic SubSystem: '<S602>/Digital_Lowpass_Reset_Enabled1' */
        /* Switch: '<S651>/Switch1' incorporates:
         *  Switch: '<S638>/Switch2'
         */
        rtb_TmpSignalConversionAtVeHS_m = rtb_TmpSignalConversionAtVeBTQR;

        /* End of Outputs for SubSystem: '<S602>/Digital_Lowpass_Reset_Enabled1' */
    }
    else
    {
        /* Switch: '<S651>/Switch1' incorporates:
         *  Constant: '<S646>/Calib'
         *  MinMax: '<S651>/Maximum'
         *  Product: '<S651>/Multiplication'
         *  Product: '<S651>/Multiplication1'
         *  Sum: '<S651>/Subtraction'
         *  Sum: '<S651>/Summation'
         *  UnitDelay: '<S651>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHS_m = (((rtb_TmpSignalConversionAtVeESPR -
            WTAR_ac_DW.UnitDelay_DSTATE_bh) * KeWTAR_t_dT) * (1.0F / fmaxf
            (rtb_TmpSignalConversionAtVeAX_k, KeWTAR_t_dT))) +
            WTAR_ac_DW.UnitDelay_DSTATE_bh;
    }

    /* End of Switch: '<S651>/Switch1' */
    /* End of Outputs for SubSystem: '<S603>/EdgeRising2' */

    /* Update for UnitDelay: '<S651>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_bh = rtb_TmpSignalConversionAtVeHS_m;

    /* End of Outputs for SubSystem: '<S603>/LowpassT_Reset_Enabled2' */

    /* Switch: '<S603>/Switch2' */
    if (VeWTAC_b_OvrRevNi)
    {
        /* Switch: '<S603>/Switch2' */
        VeWTAC_n_TgtSpdNi = rtb_TmpSignalConversionAtVeHS_m;
    }
    else
    {
        /* Switch: '<S603>/Switch2' */
        VeWTAC_n_TgtSpdNi = rtb_TmpSignalConversionAtVeESPR;
    }

    /* End of Switch: '<S603>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S602>/Digital_Lowpass_Reset_Enabled1' */
    /* Sum: '<S603>/Sum2' incorporates:
     *  Switch: '<S638>/Switch2'
     */
    rtb_TmpSignalConversionAtVeESPR = VeWTAC_n_TgtSpdNi -
        rtb_TmpSignalConversionAtVeBTQR;

    /* End of Outputs for SubSystem: '<S602>/Digital_Lowpass_Reset_Enabled1' */

    /* Outputs for Atomic SubSystem: '<S603>/EdgeRising4' */
    /* Logic: '<S644>/OR1' incorporates:
     *  UnitDelay: '<S644>/Unit Delay'
     */
    rtb_OR1_f24 = !WTAR_ac_DW.UnitDelay_DSTATE_g5;

    /* Update for UnitDelay: '<S644>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_g5 = VeWTAC_b_OvrRevNturb;

    /* Outputs for Atomic SubSystem: '<S603>/LowpassT_Reset_Enabled3' */
    /* Switch: '<S652>/Switch1' incorporates:
     *  Logic: '<S644>/AND'
     */
    if ((VeWTAC_b_OvrRevNturb) && rtb_OR1_f24)
    {
        /* Switch: '<S652>/Switch1' */
        rtb_TmpSignalConversionAtVeHS_m = rtb_TmpSignalConversionAtVeVSDR;
    }
    else
    {
        /* Switch: '<S652>/Switch1' incorporates:
         *  Constant: '<S646>/Calib'
         *  MinMax: '<S652>/Maximum'
         *  Product: '<S652>/Multiplication'
         *  Product: '<S652>/Multiplication1'
         *  Sum: '<S652>/Subtraction'
         *  Sum: '<S652>/Summation'
         *  UnitDelay: '<S652>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHS_m = (((rtb_TmpSignalConversionAtVeTRNR -
            WTAR_ac_DW.UnitDelay_DSTATE_b1) * KeWTAR_t_dT) * (1.0F / fmaxf
            (rtb_TmpSignalConversionAtVeAX_k, KeWTAR_t_dT))) +
            WTAR_ac_DW.UnitDelay_DSTATE_b1;
    }

    /* End of Switch: '<S652>/Switch1' */
    /* End of Outputs for SubSystem: '<S603>/EdgeRising4' */

    /* Update for UnitDelay: '<S652>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_b1 = rtb_TmpSignalConversionAtVeHS_m;

    /* End of Outputs for SubSystem: '<S603>/LowpassT_Reset_Enabled3' */

    /* Switch: '<S603>/Switch3' */
    if (VeWTAC_b_OvrRevNturb)
    {
        /* Switch: '<S603>/Switch3' */
        VeWTAC_n_TgtSpdNturb = rtb_TmpSignalConversionAtVeHS_m;
    }
    else
    {
        /* Switch: '<S603>/Switch3' */
        VeWTAC_n_TgtSpdNturb = rtb_TmpSignalConversionAtVeTRNR;
    }

    /* End of Switch: '<S603>/Switch3' */

    /* Sum: '<S603>/Sum4' */
    rtb_TmpSignalConversionAtVeHS_m = VeWTAC_n_TgtSpdNturb -
        rtb_TmpSignalConversionAtVeVSDR;

    /* Outputs for Atomic SubSystem: '<S603>/EdgeRising5' */
    /* Logic: '<S645>/OR1' incorporates:
     *  UnitDelay: '<S645>/Unit Delay'
     */
    rtb_OR1_f24 = !WTAR_ac_DW.UnitDelay_DSTATE_lq;

    /* Update for UnitDelay: '<S645>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_lq = rtb_VariantMerge_For_Variant__d;

    /* Outputs for Atomic SubSystem: '<S603>/LowpassT_Reset_Enabled4' */
    /* Switch: '<S653>/Switch1' incorporates:
     *  Logic: '<S645>/AND'
     */
    if (rtb_VariantMerge_For_Variant__d && rtb_OR1_f24)
    {
        /* Switch: '<S653>/Switch1' */
        rtb_TmpSignalConversionAtVeTRNR = rtb_Sum4_a;
    }
    else
    {
        /* Switch: '<S653>/Switch1' incorporates:
         *  Constant: '<S593>/Calib'
         *  Constant: '<S646>/Calib'
         *  MinMax: '<S653>/Maximum'
         *  Product: '<S653>/Multiplication'
         *  Product: '<S653>/Multiplication1'
         *  Sum: '<S653>/Subtraction'
         *  Sum: '<S653>/Summation'
         *  UnitDelay: '<S653>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTRNR = (((KeWTAR_n_PinionSpdLimit -
            WTAR_ac_DW.UnitDelay_DSTATE_nr1) * KeWTAR_t_dT) * (1.0F / fmaxf
            (rtb_TmpSignalConversionAtVeAX_k, KeWTAR_t_dT))) +
            WTAR_ac_DW.UnitDelay_DSTATE_nr1;
    }

    /* End of Switch: '<S653>/Switch1' */
    /* End of Outputs for SubSystem: '<S603>/EdgeRising5' */

    /* Update for UnitDelay: '<S653>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nr1 = rtb_TmpSignalConversionAtVeTRNR;

    /* End of Outputs for SubSystem: '<S603>/LowpassT_Reset_Enabled4' */

    /* Switch: '<S603>/Switch4' */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S603>/Switch4' */
        VeWTAC_n_TgtSpdNpin = rtb_TmpSignalConversionAtVeTRNR;
    }
    else
    {
        /* Switch: '<S603>/Switch4' incorporates:
         *  Constant: '<S593>/Calib'
         */
        VeWTAC_n_TgtSpdNpin = KeWTAR_n_PinionSpdLimit;
    }

    /* End of Switch: '<S603>/Switch4' */

    /* Sum: '<S603>/Sum5' */
    rtb_TmpSignalConversionAtVeHSCR = VeWTAC_n_TgtSpdNpin - rtb_Sum4_a;

    /* MinMax: '<S603>/MinMax2' */
    VeWTAC_n_MinDiffSpd_Fil = fminf(fminf(fminf(fminf
        (rtb_TmpSignalConversionAtVeSC_f, rtb_TmpSignalConversionAtVeS_dq),
        rtb_TmpSignalConversionAtVeESPR), rtb_TmpSignalConversionAtVeHS_m),
        rtb_TmpSignalConversionAtVeHSCR);

    /* Lookup_n-D: '<S590>/Vector' incorporates:
     *  MinMax: '<S603>/MinMax2'
     *  Switch: '<S591>/Switch'
     */
    VeWTAC_k_PIBldFac = look2_iflf_binlcapw(VeWTAC_k_OL_BldFac,
        VeWTAC_n_MinDiffSpd_Fil, ((const float32 *)&(KxWTAR_k_PIBldFac[0])), ((
        const float32 *)&(KyWTAR_k_PIBldFac[0])), ((const float32 *)
        &(KtWTAR_k_PIBldFac[0])), WTAR_ac_ConstP.pooled16, 5U);

    /* Product: '<S534>/Product' incorporates:
     *  Lookup_n-D: '<S656>/Vector'
     *  Sum: '<S603>/Sum3'
     */
    VeWTAC_M_OvrRevPtn_NaP = rtb_TmpSignalConversionAtVeSC_f *
        look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeSC_f, ((const float32 *)
        &(KxWTAR_K_SpdPrct_MtrA[0])), ((const float32 *)&(KtWTAR_K_SpdPrct_MtrA
        [0])), 6U);

    /* Product: '<S534>/Product1' incorporates:
     *  Lookup_n-D: '<S657>/Vector'
     *  Sum: '<S603>/Sum1'
     */
    VeWTAC_M_OvrRevPtn_NbP = rtb_TmpSignalConversionAtVeS_dq *
        look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeS_dq, ((const float32 *)
        &(KxWTAR_K_SpdPrct_MtrB[0])), ((const float32 *)&(KtWTAR_K_SpdPrct_MtrB
        [0])), 6U);

    /* Product: '<S534>/Product2' incorporates:
     *  Lookup_n-D: '<S658>/Vector'
     *  Sum: '<S603>/Sum2'
     */
    VeWTAC_M_OvrRevPtn_NiP = rtb_TmpSignalConversionAtVeESPR *
        look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeESPR, ((const float32 *)
        &(KxWTAR_K_SpdPrct_Ni[0])), ((const float32 *)&(KtWTAR_K_SpdPrct_Ni[0])),
                            6U);

    /* Product: '<S534>/Product3' incorporates:
     *  Lookup_n-D: '<S660>/Vector'
     *  Sum: '<S603>/Sum4'
     */
    VeWTAC_M_OvrRevPtn_NturbP = rtb_TmpSignalConversionAtVeHS_m *
        look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeHS_m, ((const float32 *)
        &(KxWTAR_K_SpdPrct_Nti[0])), ((const float32 *)&(KtWTAR_K_SpdPrct_Nti[0])),
                            6U);

    /* Product: '<S534>/Product6' incorporates:
     *  Lookup_n-D: '<S659>/Vector'
     *  Sum: '<S603>/Sum5'
     */
    VeWTAC_M_OvrRevPtn_NpinP = rtb_TmpSignalConversionAtVeHSCR *
        look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeHSCR, ((const float32 *)
        &(KxWTAR_K_SpdPrct_Npin[0])), ((const float32 *)&(KtWTAR_K_SpdPrct_Npin
        [0])), 6U);

    /* Switch: '<S534>/Switch2' incorporates:
     *  Constant: '<S534>/Constant Value1'
     */
    if (VeWTAC_b_OvrRevNa)
    {
        rtb_Switch13 = VeWTAC_M_OvrRevPtn_NaP;
    }
    else
    {
        rtb_Switch13 = 99999.0F;
    }

    /* End of Switch: '<S534>/Switch2' */

    /* Switch: '<S534>/Switch3' incorporates:
     *  Constant: '<S534>/Constant Value3'
     */
    if (VeWTAC_b_OvrRevNb)
    {
        rtb_TmpSignalConversionAtVeMSPR = VeWTAC_M_OvrRevPtn_NbP;
    }
    else
    {
        rtb_TmpSignalConversionAtVeMSPR = 99999.0F;
    }

    /* End of Switch: '<S534>/Switch3' */

    /* Switch: '<S534>/Switch4' incorporates:
     *  Constant: '<S534>/Constant Value8'
     */
    if (VeWTAC_b_OvrRevNi)
    {
        rtb_TmpSignalConversionAtVeTRNR = VeWTAC_M_OvrRevPtn_NiP;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTRNR = 99999.0F;
    }

    /* End of Switch: '<S534>/Switch4' */

    /* Switch: '<S534>/Switch5' incorporates:
     *  Constant: '<S534>/Constant Value9'
     */
    if (VeWTAC_b_OvrRevNturb)
    {
        rtb_Sum4_a = VeWTAC_M_OvrRevPtn_NturbP;
    }
    else
    {
        rtb_Sum4_a = 99999.0F;
    }

    /* End of Switch: '<S534>/Switch5' */

    /* Switch: '<S534>/Switch6' incorporates:
     *  Constant: '<S534>/Constant Value10'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        rtb_TmpSignalConversionAtVeVSDR = VeWTAC_M_OvrRevPtn_NpinP;
    }
    else
    {
        rtb_TmpSignalConversionAtVeVSDR = 99999.0F;
    }

    /* End of Switch: '<S534>/Switch6' */

    /* Switch: '<S319>/Switch2' incorporates:
     *  MinMax: '<S534>/MinMax2'
     */
    rtb_Sum3_gl = fminf(fminf(fminf(fminf(rtb_Switch13,
                           rtb_TmpSignalConversionAtVeMSPR),
                          rtb_TmpSignalConversionAtVeTRNR), rtb_Sum4_a),
                        rtb_TmpSignalConversionAtVeVSDR);

    /* Switch: '<S534>/Switch10' incorporates:
     *  Constant: '<S655>/Calib'
     *  Switch: '<S534>/Switch1'
     */
    if (KeWTAR_b_PtermSpdPrtn_Ovrd)
    {
        /* Switch: '<S534>/Switch10' incorporates:
         *  Constant: '<S654>/Calib'
         */
        VeWTAC_M_OvrSpdPtn_PTerm = KeWTAR_M_PtermSpdPrtn_OvrdVal;
    }
    else if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S534>/Switch1' incorporates:
         *  Product: '<S534>/Product4'
         *  Product: '<S534>/Product5'
         *  Switch: '<S534>/Switch10'
         */
        VeWTAC_M_OvrSpdPtn_PTerm = -(VeWTAC_k_PIBldFac * rtb_Sum3_gl);
    }
    else
    {
        /* Switch: '<S534>/Switch10' incorporates:
         *  Product: '<S534>/Product5'
         *  Switch: '<S534>/Switch1'
         */
        VeWTAC_M_OvrSpdPtn_PTerm = VeWTAC_k_PIBldFac * rtb_Sum3_gl;
    }

    /* End of Switch: '<S534>/Switch10' */

    /* UnitDelay: '<S522>/Unit Delay3' */
    rtb_TmpSignalConversionAtVeTRNR = WTAR_ac_DW.UnitDelay3_DSTATE_a;

    /* MinMax: '<S602>/MinMax2' */
    VeWTAC_n_MaxDiffSpd = fmaxf(fmaxf(fmaxf(fmaxf(VeWTAC_n_OvrSpdPtn_SpdDiffNpin,
        VeWTAC_n_OvrSpdPtn_SpdDiffNturb), VeWTAC_n_OvrSpdPtn_SpdDiffNi),
        VeWTAC_n_OvrSpdPtn_SpdDiffNb), VeWTAC_n_OvrSpdPtn_SpdDiffNa);

    /* RelationalOperator: '<S602>/Comparison3' incorporates:
     *  Constant: '<S639>/Calib'
     */
    VeWTAC_b_OvrRevUndSpd = (VeWTAC_n_MaxDiffSpd < KeWTAR_n_OvrRevUndSpdThrd);

    /* Logic: '<S535>/Logical4' incorporates:
     *  RelationalOperator: '<S535>/Comparison1'
     */
    VeWTAC_b_OvrRev_ItermFrzTypA = ((rtb_TmpSignalConversionAtVeTRNR >=
        VeWTAC_M_ToCmnd_PstFil_HTDR) && (VeWTAC_b_OvrRevUndSpd));

    /* Logic: '<S535>/Logical5' incorporates:
     *  Constant: '<S543>/Calib'
     *  RelationalOperator: '<S535>/Comparison3'
     *  Sum: '<S535>/Sum4'
     */
    VeWTAC_b_OvrRev_ItermFrzTypB = ((VeWTAC_b_OvrRevUndSpd) &&
        (rtb_TmpSignalConversionAtVeTRNR >= (VeWTAI_M_OutTorqReqModTactMax +
        KeWTAR_M_OvrRev_MaxTrq_Ofst)));

    /* Logic: '<S535>/Logical6' incorporates:
     *  Constant: '<S544>/Calib'
     *  Logic: '<S535>/Logical3'
     *  RelationalOperator: '<S535>/Comparison5'
     *  Sum: '<S535>/Sum1'
     */
    VeWTAC_b_OvrRev_ItermFrzTypC = ((rtb_TmpSignalConversionAtVeTRNR <=
        (rtb_TmpSignalConversionAtVeCTCR + KeWTAR_M_OvrRev_MinTrq_Ofst)) &&
        (!VeWTAC_b_OvrRevUndSpd));

    /* Logic: '<S535>/Logical1' */
    VeWTAC_b_OvrRevITermFzrAct = (((VeWTAC_b_OvrRev_ItermFrzTypA) ||
        (VeWTAC_b_OvrRev_ItermFrzTypB)) || (VeWTAC_b_OvrRev_ItermFrzTypC));

    /* Outputs for Atomic SubSystem: '<S538>/EdgeRising1' */
    /* Logic: '<S549>/OR1' incorporates:
     *  UnitDelay: '<S549>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_f = !WTAR_ac_DW.UnitDelay_DSTATE_g0;

    /* Update for UnitDelay: '<S549>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_g0 = VeWTAC_b_OvrRevNa;

    /* End of Outputs for SubSystem: '<S538>/EdgeRising1' */

    /* Switch: '<S536>/Switch3' incorporates:
     *  Product: '<S536>/Product2'
     */
    if (VeWTAC_b_WheelBasedinR)
    {
        rtb_Switch13 = -rtb_TmpSignalConversionAtVeAXLR;
    }
    else
    {
        rtb_Switch13 = rtb_TmpSignalConversionAtVeAXLR;
    }

    /* End of Switch: '<S536>/Switch3' */

    /* Product: '<S536>/Product3' incorporates:
     *  Lookup_n-D: '<S545>/Vector'
     */
    rtb_TmpSignalConversionAtVeMSPR = VeWTAC_k_PIBldFac * look1_iflf_binlcapw
        (rtb_Switch13, ((const float32 *)&(KxWTAR_K_Mult_ItermDTR[0])), ((const
           float32 *)&(KtWTAR_K_Mult_ItermDTR[0])), 8U);

    /* Outputs for Atomic SubSystem: '<S538>/EdgeRising' */
    /* Logic: '<S548>/AND' incorporates:
     *  Logic: '<S548>/OR1'
     *  UnitDelay: '<S548>/Unit Delay'
     */
    rtb_OR1_f24 = ((VeWTAC_b_OvrRevNa) && (!WTAR_ac_DW.UnitDelay_DSTATE_ml));

    /* Update for UnitDelay: '<S548>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ml = VeWTAC_b_OvrRevNa;

    /* End of Outputs for SubSystem: '<S538>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S538>/EdgeRising1' */
    /* Switch: '<S538>/Switch2' incorporates:
     *  Logic: '<S538>/Logical2'
     *  Logic: '<S538>/Logical3'
     *  Logic: '<S549>/AND'
     *  Switch: '<S538>/Switch9'
     */
    if ((VeWTAC_b_OvrRevITermFzrAct) && ((!VeWTAC_b_OvrRevNa) ||
            (!rtb_TmpSignalConversionAtVeSR_f)))
    {
        /* Switch: '<S538>/Switch2' incorporates:
         *  UnitDelay: '<S538>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeTRNR = WTAR_ac_DW.UnitDelay1_DSTATE_bm;
    }
    else if (VeWTAC_b_OvrRevNa)
    {
        /* Gain: '<S538>/Negation' incorporates:
         *  Constant: '<S550>/Calib'
         *  Switch: '<S538>/Switch9'
         */
        rtb_TmpSignalConversionAtVeTRNR = -KeWTAR_M_ItermLimit;

        /* Sum: '<S538>/Sum1' incorporates:
         *  Constant: '<S551>/Calib'
         *  Switch: '<S538>/Switch9'
         */
        rtb_TmpSignalConversionAtVeVSDR = rtb_TmpSignalConversionAtVeSC_f +
            KeWTAR_n_ItermOffset_Na;

        /* Switch: '<S554>/Switch1' incorporates:
         *  Switch: '<S538>/Switch9'
         *  UnitDelay: '<S537>/Unit Delay'
         *  UnitDelay: '<S554>/Unit Delay'
         */
        if (rtb_OR1_f24)
        {
            rtb_TmpSignalConversionAtVeSC_f = WTAR_ac_DW.UnitDelay_DSTATE_l;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSC_f = WTAR_ac_DW.UnitDelay_DSTATE_au;
        }

        /* End of Switch: '<S554>/Switch1' */

        /* Sum: '<S538>/Sum4' incorporates:
         *  Lookup_n-D: '<S552>/Vector'
         *  Product: '<S538>/Product1'
         *  Sum: '<S538>/Sum1'
         *  Switch: '<S538>/Switch9'
         */
        rtb_Sum4_a = ((rtb_TmpSignalConversionAtVeMSPR *
                       rtb_TmpSignalConversionAtVeVSDR) * look1_iflf_binlcapw
                      (rtb_TmpSignalConversionAtVeVSDR, ((const float32 *)
                        &(KxWTAR_K_SpdPrct_ItermNa[0])), ((const float32 *)
                        &(KtWTAR_K_SpdPrct_ItermNa[0])), 6U)) +
            rtb_TmpSignalConversionAtVeSC_f;

        /* Outputs for Atomic SubSystem: '<S538>/Limiter' */
        /* Switch: '<S553>/Switch1' incorporates:
         *  Constant: '<S550>/Calib'
         *  RelationalOperator: '<S553>/Relational Operator'
         *  Switch: '<S538>/Switch9'
         */
        if (KeWTAR_M_ItermLimit < rtb_Sum4_a)
        {
            /* Switch: '<S553>/Switch1' */
            rtb_Sum4_a = KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S553>/Switch1' */

        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S550>/Calib'
         *  Gain: '<S538>/Negation'
         *  RelationalOperator: '<S553>/Relational Operator1'
         *  Switch: '<S538>/Switch9'
         */
        if (rtb_Sum4_a > (-KeWTAR_M_ItermLimit))
        {
            /* Switch: '<S538>/Switch2' incorporates:
             *  Switch: '<S538>/Switch9'
             */
            rtb_TmpSignalConversionAtVeTRNR = rtb_Sum4_a;
        }

        /* End of Switch: '<S553>/Switch' */
        /* End of Outputs for SubSystem: '<S538>/Limiter' */
    }
    else
    {
        /* Switch: '<S538>/Switch2' incorporates:
         *  Constant: '<S538>/Constant Value8'
         *  Switch: '<S538>/Switch9'
         */
        rtb_TmpSignalConversionAtVeTRNR = 0.0F;
    }

    /* End of Switch: '<S538>/Switch2' */
    /* End of Outputs for SubSystem: '<S538>/EdgeRising1' */

    /* Switch: '<S538>/Switch1' */
    if (VeWTAC_b_OvrRevNa)
    {
        /* Switch: '<S538>/Switch1' */
        VeWTAC_M_OvrRevPtn_NaI = rtb_TmpSignalConversionAtVeTRNR;
    }
    else
    {
        /* Switch: '<S538>/Switch1' incorporates:
         *  Constant: '<S538>/Constant Value1'
         */
        VeWTAC_M_OvrRevPtn_NaI = 99999.0F;
    }

    /* End of Switch: '<S538>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S539>/EdgeRising1' */
    /* Logic: '<S556>/OR1' incorporates:
     *  UnitDelay: '<S556>/Unit Delay'
     */
    rtb_AND_a2v = !WTAR_ac_DW.UnitDelay_DSTATE_h3n;

    /* Update for UnitDelay: '<S556>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_h3n = VeWTAC_b_OvrRevNb;

    /* End of Outputs for SubSystem: '<S539>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S539>/EdgeRising' */
    /* Logic: '<S555>/AND' incorporates:
     *  Logic: '<S555>/OR1'
     *  UnitDelay: '<S555>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_f = ((VeWTAC_b_OvrRevNb) &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_dj));

    /* Update for UnitDelay: '<S555>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_dj = VeWTAC_b_OvrRevNb;

    /* End of Outputs for SubSystem: '<S539>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S539>/EdgeRising1' */
    /* Switch: '<S539>/Switch2' incorporates:
     *  Logic: '<S539>/Logical2'
     *  Logic: '<S539>/Logical3'
     *  Logic: '<S556>/AND'
     *  Switch: '<S539>/Switch9'
     */
    if ((VeWTAC_b_OvrRevITermFzrAct) && ((!VeWTAC_b_OvrRevNb) || (!rtb_AND_a2v)))
    {
        /* Switch: '<S539>/Switch2' incorporates:
         *  UnitDelay: '<S539>/Unit Delay1'
         */
        rtb_Sum4_a = WTAR_ac_DW.UnitDelay1_DSTATE_p;
    }
    else if (VeWTAC_b_OvrRevNb)
    {
        /* Gain: '<S539>/Negation' incorporates:
         *  Constant: '<S557>/Calib'
         *  Switch: '<S539>/Switch9'
         */
        rtb_Sum4_a = -KeWTAR_M_ItermLimit;

        /* Sum: '<S539>/Sum1' incorporates:
         *  Constant: '<S558>/Calib'
         *  Switch: '<S539>/Switch9'
         */
        rtb_TmpSignalConversionAtVeAX_k = rtb_TmpSignalConversionAtVeS_dq +
            KeWTAR_n_ItermOffset_Nb;

        /* Switch: '<S561>/Switch1' incorporates:
         *  Switch: '<S539>/Switch9'
         *  UnitDelay: '<S537>/Unit Delay'
         *  UnitDelay: '<S561>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeSR_f)
        {
            rtb_TmpSignalConversionAtVeSC_c = WTAR_ac_DW.UnitDelay_DSTATE_l;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSC_c = WTAR_ac_DW.UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S561>/Switch1' */

        /* Sum: '<S539>/Sum4' incorporates:
         *  Lookup_n-D: '<S559>/Vector'
         *  Product: '<S539>/Product1'
         *  Sum: '<S539>/Sum1'
         *  Switch: '<S539>/Switch9'
         */
        rtb_TmpSignalConversionAtVeVSDR = ((rtb_TmpSignalConversionAtVeMSPR *
            rtb_TmpSignalConversionAtVeAX_k) * look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAX_k, ((const float32 *)
            &(KxWTAR_K_SpdPrct_ItermNb[0])), ((const float32 *)
            &(KtWTAR_K_SpdPrct_ItermNb[0])), 6U)) +
            rtb_TmpSignalConversionAtVeSC_c;

        /* Outputs for Atomic SubSystem: '<S539>/Limiter' */
        /* Switch: '<S560>/Switch1' incorporates:
         *  Constant: '<S557>/Calib'
         *  RelationalOperator: '<S560>/Relational Operator'
         *  Switch: '<S539>/Switch9'
         */
        if (KeWTAR_M_ItermLimit < rtb_TmpSignalConversionAtVeVSDR)
        {
            /* Switch: '<S560>/Switch1' */
            rtb_TmpSignalConversionAtVeVSDR = KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S560>/Switch1' */

        /* Switch: '<S560>/Switch' incorporates:
         *  Constant: '<S557>/Calib'
         *  Gain: '<S539>/Negation'
         *  RelationalOperator: '<S560>/Relational Operator1'
         *  Switch: '<S539>/Switch9'
         */
        if (rtb_TmpSignalConversionAtVeVSDR > (-KeWTAR_M_ItermLimit))
        {
            /* Switch: '<S539>/Switch2' incorporates:
             *  Switch: '<S539>/Switch9'
             */
            rtb_Sum4_a = rtb_TmpSignalConversionAtVeVSDR;
        }

        /* End of Switch: '<S560>/Switch' */
        /* End of Outputs for SubSystem: '<S539>/Limiter' */
    }
    else
    {
        /* Switch: '<S539>/Switch2' incorporates:
         *  Constant: '<S539>/Constant Value8'
         *  Switch: '<S539>/Switch9'
         */
        rtb_Sum4_a = 0.0F;
    }

    /* End of Switch: '<S539>/Switch2' */
    /* End of Outputs for SubSystem: '<S539>/EdgeRising1' */

    /* Switch: '<S539>/Switch1' */
    if (VeWTAC_b_OvrRevNb)
    {
        /* Switch: '<S539>/Switch1' */
        VeWTAC_M_OvrRevPtn_NbI = rtb_Sum4_a;
    }
    else
    {
        /* Switch: '<S539>/Switch1' incorporates:
         *  Constant: '<S539>/Constant Value1'
         */
        VeWTAC_M_OvrRevPtn_NbI = 99999.0F;
    }

    /* End of Switch: '<S539>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S540>/EdgeRising1' */
    /* Logic: '<S563>/OR1' incorporates:
     *  UnitDelay: '<S563>/Unit Delay'
     */
    rtb_AND_ok = !WTAR_ac_DW.UnitDelay_DSTATE_oc;

    /* Update for UnitDelay: '<S563>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_oc = VeWTAC_b_OvrRevNi;

    /* End of Outputs for SubSystem: '<S540>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S540>/EdgeRising' */
    /* Logic: '<S562>/AND' incorporates:
     *  Logic: '<S562>/OR1'
     *  UnitDelay: '<S562>/Unit Delay'
     */
    rtb_AND_a2v = ((VeWTAC_b_OvrRevNi) && (!WTAR_ac_DW.UnitDelay_DSTATE_i2));

    /* Update for UnitDelay: '<S562>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_i2 = VeWTAC_b_OvrRevNi;

    /* End of Outputs for SubSystem: '<S540>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S540>/EdgeRising1' */
    /* Switch: '<S540>/Switch2' incorporates:
     *  Logic: '<S540>/Logical2'
     *  Logic: '<S540>/Logical3'
     *  Logic: '<S563>/AND'
     *  Switch: '<S540>/Switch9'
     */
    if ((VeWTAC_b_OvrRevITermFzrAct) && ((!VeWTAC_b_OvrRevNi) || (!rtb_AND_ok)))
    {
        /* Switch: '<S540>/Switch2' incorporates:
         *  UnitDelay: '<S540>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeESPR = WTAR_ac_DW.UnitDelay1_DSTATE_m;
    }
    else if (VeWTAC_b_OvrRevNi)
    {
        /* Sum: '<S540>/Sum1' incorporates:
         *  Constant: '<S565>/Calib'
         *  Switch: '<S540>/Switch9'
         */
        rtb_TmpSignalConversionAtVeESPR += KeWTAR_n_ItermOffset_Ni;

        /* Switch: '<S568>/Switch1' incorporates:
         *  Switch: '<S540>/Switch9'
         *  UnitDelay: '<S537>/Unit Delay'
         *  UnitDelay: '<S568>/Unit Delay'
         */
        if (rtb_AND_a2v)
        {
            rtb_Switch3_c1 = WTAR_ac_DW.UnitDelay_DSTATE_l;
        }
        else
        {
            rtb_Switch3_c1 = WTAR_ac_DW.UnitDelay_DSTATE_b4;
        }

        /* End of Switch: '<S568>/Switch1' */

        /* Sum: '<S540>/Sum4' incorporates:
         *  Lookup_n-D: '<S566>/Vector'
         *  Product: '<S540>/Product2'
         *  Sum: '<S540>/Sum1'
         *  Switch: '<S540>/Switch9'
         */
        rtb_TmpSignalConversionAtVeESPR = ((rtb_TmpSignalConversionAtVeMSPR *
            rtb_TmpSignalConversionAtVeESPR) * look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeESPR, ((const float32 *)
            &(KxWTAR_K_SpdPrct_ItermNi[0])), ((const float32 *)
            &(KtWTAR_K_SpdPrct_ItermNi[0])), 6U)) + rtb_Switch3_c1;

        /* Outputs for Atomic SubSystem: '<S540>/Limiter' */
        /* Switch: '<S567>/Switch1' incorporates:
         *  Constant: '<S564>/Calib'
         *  RelationalOperator: '<S567>/Relational Operator'
         *  Switch: '<S540>/Switch9'
         */
        if (KeWTAR_M_ItermLimit < rtb_TmpSignalConversionAtVeESPR)
        {
            /* Switch: '<S567>/Switch1' */
            rtb_TmpSignalConversionAtVeESPR = KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S567>/Switch1' */

        /* Switch: '<S567>/Switch' incorporates:
         *  Constant: '<S564>/Calib'
         *  Gain: '<S540>/Negation'
         *  RelationalOperator: '<S567>/Relational Operator1'
         *  Switch: '<S540>/Switch9'
         */
        if (rtb_TmpSignalConversionAtVeESPR <= (-KeWTAR_M_ItermLimit))
        {
            /* Switch: '<S540>/Switch2' incorporates:
             *  Switch: '<S540>/Switch9'
             */
            rtb_TmpSignalConversionAtVeESPR = -KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S567>/Switch' */
        /* End of Outputs for SubSystem: '<S540>/Limiter' */
    }
    else
    {
        /* Switch: '<S540>/Switch2' incorporates:
         *  Constant: '<S540>/Constant Value8'
         *  Switch: '<S540>/Switch9'
         */
        rtb_TmpSignalConversionAtVeESPR = 0.0F;
    }

    /* End of Switch: '<S540>/Switch2' */
    /* End of Outputs for SubSystem: '<S540>/EdgeRising1' */

    /* Switch: '<S540>/Switch1' */
    if (VeWTAC_b_OvrRevNi)
    {
        /* Switch: '<S540>/Switch1' */
        VeWTAC_M_OvrRevPtn_NiI = rtb_TmpSignalConversionAtVeESPR;
    }
    else
    {
        /* Switch: '<S540>/Switch1' incorporates:
         *  Constant: '<S540>/Constant Value1'
         */
        VeWTAC_M_OvrRevPtn_NiI = 99999.0F;
    }

    /* End of Switch: '<S540>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S542>/EdgeRising1' */
    /* Logic: '<S577>/OR1' incorporates:
     *  UnitDelay: '<S577>/Unit Delay'
     */
    rtb_OR1_a5 = !WTAR_ac_DW.UnitDelay_DSTATE_pb;

    /* Update for UnitDelay: '<S577>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_pb = VeWTAC_b_OvrRevNturb;

    /* End of Outputs for SubSystem: '<S542>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S542>/EdgeRising' */
    /* Logic: '<S576>/AND' incorporates:
     *  Logic: '<S576>/OR1'
     *  UnitDelay: '<S576>/Unit Delay'
     */
    rtb_AND_ok = ((VeWTAC_b_OvrRevNturb) && (!WTAR_ac_DW.UnitDelay_DSTATE_a44));

    /* Update for UnitDelay: '<S576>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_a44 = VeWTAC_b_OvrRevNturb;

    /* End of Outputs for SubSystem: '<S542>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S542>/EdgeRising1' */
    /* Switch: '<S542>/Switch2' incorporates:
     *  Logic: '<S542>/Logical2'
     *  Logic: '<S542>/Logical3'
     *  Logic: '<S577>/AND'
     *  Switch: '<S542>/Switch9'
     */
    if ((VeWTAC_b_OvrRevITermFzrAct) && ((!VeWTAC_b_OvrRevNturb) || (!rtb_OR1_a5)))
    {
        /* Switch: '<S542>/Switch2' incorporates:
         *  UnitDelay: '<S542>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeHS_m = WTAR_ac_DW.UnitDelay1_DSTATE_fa;
    }
    else if (VeWTAC_b_OvrRevNturb)
    {
        /* Sum: '<S542>/Sum1' incorporates:
         *  Constant: '<S579>/Calib'
         *  Switch: '<S542>/Switch9'
         */
        rtb_TmpSignalConversionAtVeHS_m += KeWTAR_n_ItermOffset_Nturb;

        /* Switch: '<S582>/Switch1' incorporates:
         *  Switch: '<S542>/Switch9'
         *  UnitDelay: '<S537>/Unit Delay'
         *  UnitDelay: '<S582>/Unit Delay'
         */
        if (rtb_AND_ok)
        {
            rtb_TmpSignalConversionAtVeSC_f = WTAR_ac_DW.UnitDelay_DSTATE_l;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSC_f = WTAR_ac_DW.UnitDelay_DSTATE_c;
        }

        /* End of Switch: '<S582>/Switch1' */

        /* Sum: '<S542>/Sum4' incorporates:
         *  Lookup_n-D: '<S580>/Vector'
         *  Product: '<S542>/Product2'
         *  Sum: '<S542>/Sum1'
         *  Switch: '<S542>/Switch9'
         */
        rtb_TmpSignalConversionAtVeHS_m = ((rtb_TmpSignalConversionAtVeMSPR *
            rtb_TmpSignalConversionAtVeHS_m) * look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeHS_m, ((const float32 *)
            &(KxWTAR_K_SpdPrct_ItermNturb[0])), ((const float32 *)
            &(KtWTAR_K_SpdPrct_ItermNturb[0])), 6U)) +
            rtb_TmpSignalConversionAtVeSC_f;

        /* Outputs for Atomic SubSystem: '<S542>/Limiter' */
        /* Switch: '<S581>/Switch1' incorporates:
         *  Constant: '<S578>/Calib'
         *  RelationalOperator: '<S581>/Relational Operator'
         *  Switch: '<S542>/Switch9'
         */
        if (KeWTAR_M_ItermLimit < rtb_TmpSignalConversionAtVeHS_m)
        {
            /* Switch: '<S581>/Switch1' */
            rtb_TmpSignalConversionAtVeHS_m = KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S581>/Switch1' */

        /* Switch: '<S581>/Switch' incorporates:
         *  Constant: '<S578>/Calib'
         *  Gain: '<S542>/Negation'
         *  RelationalOperator: '<S581>/Relational Operator1'
         *  Switch: '<S542>/Switch9'
         */
        if (rtb_TmpSignalConversionAtVeHS_m <= (-KeWTAR_M_ItermLimit))
        {
            /* Switch: '<S542>/Switch2' incorporates:
             *  Switch: '<S542>/Switch9'
             */
            rtb_TmpSignalConversionAtVeHS_m = -KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S581>/Switch' */
        /* End of Outputs for SubSystem: '<S542>/Limiter' */
    }
    else
    {
        /* Switch: '<S542>/Switch2' incorporates:
         *  Constant: '<S542>/Constant Value8'
         *  Switch: '<S542>/Switch9'
         */
        rtb_TmpSignalConversionAtVeHS_m = 0.0F;
    }

    /* End of Switch: '<S542>/Switch2' */
    /* End of Outputs for SubSystem: '<S542>/EdgeRising1' */

    /* Switch: '<S542>/Switch1' */
    if (VeWTAC_b_OvrRevNturb)
    {
        /* Switch: '<S542>/Switch1' */
        VeWTAC_M_OvrRevPtn_NturbI = rtb_TmpSignalConversionAtVeHS_m;
    }
    else
    {
        /* Switch: '<S542>/Switch1' incorporates:
         *  Constant: '<S542>/Constant Value1'
         */
        VeWTAC_M_OvrRevPtn_NturbI = 99999.0F;
    }

    /* End of Switch: '<S542>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S541>/EdgeRising1' */
    /* Logic: '<S570>/OR1' incorporates:
     *  UnitDelay: '<S570>/Unit Delay'
     */
    rtb_Comparison12 = !WTAR_ac_DW.UnitDelay_DSTATE_mp;

    /* Update for UnitDelay: '<S570>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_mp = rtb_VariantMerge_For_Variant__d;

    /* End of Outputs for SubSystem: '<S541>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S541>/EdgeRising' */
    /* Logic: '<S569>/AND' incorporates:
     *  Logic: '<S569>/OR1'
     *  UnitDelay: '<S569>/Unit Delay'
     */
    rtb_OR1_a5 = (rtb_VariantMerge_For_Variant__d &&
                  (!WTAR_ac_DW.UnitDelay_DSTATE_cv));

    /* Update for UnitDelay: '<S569>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_cv = rtb_VariantMerge_For_Variant__d;

    /* End of Outputs for SubSystem: '<S541>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S541>/EdgeRising1' */
    /* Switch: '<S541>/Switch2' incorporates:
     *  Logic: '<S541>/Logical2'
     *  Logic: '<S541>/Logical3'
     *  Logic: '<S570>/AND'
     *  Switch: '<S541>/Switch9'
     */
    if ((VeWTAC_b_OvrRevITermFzrAct) && ((!rtb_VariantMerge_For_Variant__d) || (
            !rtb_Comparison12)))
    {
        /* Switch: '<S541>/Switch2' incorporates:
         *  UnitDelay: '<S541>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeHSCR = WTAR_ac_DW.UnitDelay1_DSTATE_jk;
    }
    else if (rtb_VariantMerge_For_Variant__d)
    {
        /* Sum: '<S541>/Sum1' incorporates:
         *  Constant: '<S572>/Calib'
         *  Switch: '<S541>/Switch9'
         */
        rtb_TmpSignalConversionAtVeHSCR += KeWTAR_n_ItermOffset_Npin;

        /* Switch: '<S575>/Switch1' incorporates:
         *  Switch: '<S541>/Switch9'
         *  UnitDelay: '<S537>/Unit Delay'
         *  UnitDelay: '<S575>/Unit Delay'
         */
        if (rtb_OR1_a5)
        {
            rtb_TmpSignalConversionAtVeSC_f = WTAR_ac_DW.UnitDelay_DSTATE_l;
        }
        else
        {
            rtb_TmpSignalConversionAtVeSC_f = WTAR_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S575>/Switch1' */

        /* Sum: '<S541>/Sum4' incorporates:
         *  Lookup_n-D: '<S573>/Vector'
         *  Product: '<S541>/Product2'
         *  Sum: '<S541>/Sum1'
         *  Switch: '<S541>/Switch9'
         */
        rtb_TmpSignalConversionAtVeHSCR = ((rtb_TmpSignalConversionAtVeMSPR *
            rtb_TmpSignalConversionAtVeHSCR) * look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeHSCR, ((const float32 *)
            &(KxWTAR_K_SpdPrct_ItermNpin[0])), ((const float32 *)
            &(KtWTAR_K_SpdPrct_ItermNpin[0])), 6U)) +
            rtb_TmpSignalConversionAtVeSC_f;

        /* Outputs for Atomic SubSystem: '<S541>/Limiter' */
        /* Switch: '<S574>/Switch1' incorporates:
         *  Constant: '<S571>/Calib'
         *  RelationalOperator: '<S574>/Relational Operator'
         *  Switch: '<S541>/Switch9'
         */
        if (KeWTAR_M_ItermLimit < rtb_TmpSignalConversionAtVeHSCR)
        {
            /* Switch: '<S574>/Switch1' */
            rtb_TmpSignalConversionAtVeHSCR = KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S574>/Switch1' */

        /* Switch: '<S574>/Switch' incorporates:
         *  Constant: '<S571>/Calib'
         *  Gain: '<S541>/Negation'
         *  RelationalOperator: '<S574>/Relational Operator1'
         *  Switch: '<S541>/Switch9'
         */
        if (rtb_TmpSignalConversionAtVeHSCR <= (-KeWTAR_M_ItermLimit))
        {
            /* Switch: '<S541>/Switch2' incorporates:
             *  Switch: '<S541>/Switch9'
             */
            rtb_TmpSignalConversionAtVeHSCR = -KeWTAR_M_ItermLimit;
        }

        /* End of Switch: '<S574>/Switch' */
        /* End of Outputs for SubSystem: '<S541>/Limiter' */
    }
    else
    {
        /* Switch: '<S541>/Switch2' incorporates:
         *  Constant: '<S541>/Constant Value8'
         *  Switch: '<S541>/Switch9'
         */
        rtb_TmpSignalConversionAtVeHSCR = 0.0F;
    }

    /* End of Switch: '<S541>/Switch2' */
    /* End of Outputs for SubSystem: '<S541>/EdgeRising1' */

    /* Switch: '<S541>/Switch1' */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S541>/Switch1' */
        VeWTAC_M_OvrRevPtn_NpinI = rtb_TmpSignalConversionAtVeHSCR;
    }
    else
    {
        /* Switch: '<S541>/Switch1' incorporates:
         *  Constant: '<S541>/Constant Value1'
         */
        VeWTAC_M_OvrRevPtn_NpinI = 99999.0F;
    }

    /* End of Switch: '<S541>/Switch1' */

    /* MinMax: '<S531>/MinMax2' */
    VeWTAC_M_OvrRevPtn_ItermRaw = fminf(fminf(fminf(fminf(VeWTAC_M_OvrRevPtn_NaI,
        VeWTAC_M_OvrRevPtn_NbI), VeWTAC_M_OvrRevPtn_NiI),
        VeWTAC_M_OvrRevPtn_NturbI), VeWTAC_M_OvrRevPtn_NpinI);

    /* Logic: '<S531>/Logical1' */
    VeWTAC_b_OvrRevPtn_TotalActive = ((((rtb_VariantMerge_For_Variant__d ||
        (VeWTAC_b_OvrRevNturb)) || (VeWTAC_b_OvrRevNi)) || (VeWTAC_b_OvrRevNb)) ||
        (VeWTAC_b_OvrRevNa));

    /* Switch: '<S537>/Switch2' */
    if (VeWTAC_b_OvrRevPtn_TotalActive)
    {
        /* Switch: '<S537>/Switch2' */
        rtb_TmpSignalConversionAtVeMSPR = VeWTAC_M_OvrRevPtn_ItermRaw;
    }
    else
    {
        /* Switch: '<S537>/Switch2' incorporates:
         *  Constant: '<S537>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeMSPR = 0.0F;
    }

    /* End of Switch: '<S537>/Switch2' */

    /* Switch: '<S537>/Switch10' incorporates:
     *  Constant: '<S547>/Calib'
     *  Switch: '<S537>/Switch1'
     */
    if (KeWTAR_b_ItermSpdPrtn_Ovrd)
    {
        /* Switch: '<S537>/Switch10' incorporates:
         *  Constant: '<S546>/Calib'
         */
        VeWTAC_M_OvrSpdPtn_ITerm = KeWTAR_M_ItermSpdPrtn_OvrdVal;
    }
    else if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S537>/Switch1' incorporates:
         *  Product: '<S537>/Product1'
         *  Switch: '<S537>/Switch10'
         */
        VeWTAC_M_OvrSpdPtn_ITerm = -rtb_TmpSignalConversionAtVeMSPR;
    }
    else
    {
        /* Switch: '<S537>/Switch10' incorporates:
         *  Switch: '<S537>/Switch1'
         */
        VeWTAC_M_OvrSpdPtn_ITerm = rtb_TmpSignalConversionAtVeMSPR;
    }

    /* End of Switch: '<S537>/Switch10' */

    /* Sum: '<S599>/Sum3' */
    VeWTAC_M_OvrSpdPtn_PID = (VeWTAC_M_OvrSpdPtn_PTerm +
        VeWTAC_M_OvrSpdPtn_ITerm) + VeWTAC_M_OvrRevOpenLoop;

    /* Switch: '<S530>/Switch10' incorporates:
     *  Switch: '<S530>/Switch1'
     */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S319>/Switch13' incorporates:
         *  Gain: '<S530>/Gain'
         *  MinMax: '<S530>/MinMax11'
         */
        rtb_Switch13 = fminf(VeWTAC_M_OvrSpdPtn_PID,
                             -rtb_TmpSignalConversionAtVeCTCR);

        /* Switch: '<S530>/Switch1' incorporates:
         *  Constant: '<S686>/Calib'
         */
        rtb_Switch1_bbt = KeWTAR_M_ToTgtOffsetR;
    }
    else
    {
        /* Switch: '<S319>/Switch13' incorporates:
         *  MinMax: '<S530>/MinMax12'
         */
        rtb_Switch13 = fmaxf(rtb_TmpSignalConversionAtVeCTCR,
                             VeWTAC_M_OvrSpdPtn_PID);

        /* Switch: '<S530>/Switch1' incorporates:
         *  Constant: '<S685>/Calib'
         */
        rtb_Switch1_bbt = KeWTAR_M_ToTgtOffset;
    }

    /* End of Switch: '<S530>/Switch10' */

    /* Switch: '<S530>/Switch12' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_Switch13;
        Gain_pj = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S530>/Sum6'
         *  UnitDelay: '<S530>/Unit Delay2'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay2_DSTATE_ny;
        Gain_pj = VeWTAC_M_ToCmnd_AftLashCtrl_PstFil + rtb_Switch1_bbt;
    }

    /* End of Switch: '<S530>/Switch12' */

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling6' */
    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling5' */
    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling4' */
    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling' */
    /* Logic: '<S678>/OR1' incorporates:
     *  Logic: '<S679>/OR1'
     *  Logic: '<S680>/OR1'
     *  Logic: '<S681>/OR1'
     *  Logic: '<S682>/OR1'
     *  Logic: '<S683>/OR1'
     *  Logic: '<S684>/OR1'
     */
    rtb_Comparison12 = !WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S530>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S530>/EdgeFalling4' */
    /* End of Outputs for SubSystem: '<S530>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S530>/EdgeFalling5' */
    /* End of Outputs for SubSystem: '<S530>/EdgeFalling6' */

    /* Logic: '<S678>/AND' incorporates:
     *  Logic: '<S678>/OR1'
     *  UnitDelay: '<S678>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_Comparison12 &&
        (WTAR_ac_DW.UnitDelay_DSTATE_mx));

    /* Update for UnitDelay: '<S678>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_mx = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling' */

    /* Switch: '<S671>/Switch2' incorporates:
     *  Switch: '<S671>/Switch3'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S671>/Switch2' */
        rtb_TmpSignalConversionAtVeCTCR = rtb_Sum3_aq;

        /* Switch: '<S319>/Switch14' incorporates:
         *  Constant: '<S671>/Constant Value4'
         */
        rtb_Switch14 = 0.0F;
    }
    else
    {
        /* Switch: '<S671>/Switch2' incorporates:
         *  UnitDelay: '<S671>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCTCR = WTAR_ac_DW.UnitDelay_DSTATE_jn;

        /* MinMax: '<S671>/Maximum' incorporates:
         *  Constant: '<S687>/Calib'
         *  Constant: '<S688>/Calib'
         */
        rtb_TmpSignalConversionAtVeVSDR = fmaxf(KeWTAR_t_dT,
            KeWTAR_t_ToClipBlend);

        /* Outputs for Atomic SubSystem: '<S671>/Protected_Division1' */
        /* Switch: '<S689>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S689>/Constant Value'
         *  Constant: '<S689>/Constant Value1'
         *  Constant: '<S689>/Constant Value2'
         *  Constant: '<S689>/Constant Value3'
         *  Logic: '<S689>/AND'
         *  RelationalOperator: '<S689>/Greater Than or Equal '
         *  RelationalOperator: '<S689>/Greater Than or Equal 1'
         *  RelationalOperator: '<S689>/Not Equal'
         *  RelationalOperator: '<S689>/Not Equal1'
         *  Switch: '<S689>/Switch2'
         *  Switch: '<S689>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_TmpSignalConversionAtVeVSDR != 0.0F))
        {
            /* Switch: '<S689>/Switch1' incorporates:
             *  Product: '<S689>/Division'
             */
            rtb_TmpSignalConversionAtVeVSDR = KeWTAR_t_dT /
                rtb_TmpSignalConversionAtVeVSDR;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S689>/Switch2' incorporates:
             *  Constant: '<S689>/MAXFLOAT'
             *  Switch: '<S689>/Switch1'
             */
            rtb_TmpSignalConversionAtVeVSDR = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S689>/Switch3' incorporates:
             *  Constant: '<S689>/MINFLOAT'
             *  Switch: '<S689>/Switch1'
             *  Switch: '<S689>/Switch2'
             */
            rtb_TmpSignalConversionAtVeVSDR = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S689>/Switch1' incorporates:
             *  Constant: '<S689>/Constant Value4'
             *  Switch: '<S689>/Switch2'
             *  Switch: '<S689>/Switch3'
             */
            rtb_TmpSignalConversionAtVeVSDR = 0.0F;
        }

        /* End of Switch: '<S689>/Switch1' */
        /* End of Outputs for SubSystem: '<S671>/Protected_Division1' */

        /* Switch: '<S319>/Switch14' incorporates:
         *  Sum: '<S671>/Summation1'
         *  UnitDelay: '<S671>/Unit Delay1'
         */
        rtb_Switch14 = rtb_TmpSignalConversionAtVeVSDR +
            WTAR_ac_DW.UnitDelay1_DSTATE_ft;
    }

    /* End of Switch: '<S671>/Switch2' */

    /* MinMax: '<S671>/MinMax' incorporates:
     *  Constant: '<S671>/Constant Value2'
     */
    rtb_TmpSignalConversionAtVeVSDR = fminf(rtb_Switch14, 1.0F);

    /* Switch: '<S530>/Switch7' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch7' incorporates:
         *  Constant: '<S671>/Constant Value'
         *  MinMax: '<S530>/MinMax5'
         *  Product: '<S671>/Multiplication'
         *  Product: '<S671>/Multiplication3'
         *  Sum: '<S671>/Subtraction'
         *  Sum: '<S671>/Summation'
         */
        VeWTAC_M_OutTrqReqOITR_xPRNDL = fmaxf(((1.0F -
            rtb_TmpSignalConversionAtVeVSDR) * rtb_TmpSignalConversionAtVeCTCR)
            + (rtb_TmpSignalConversionAtVeVSDR * Gain_pj),
            VeWTAC_M_ToCmnd_AftLashCtrl_PstFil);
    }
    else
    {
        /* Switch: '<S530>/Switch7' incorporates:
         *  Constant: '<S671>/Constant Value'
         *  MinMax: '<S530>/MinMax6'
         *  Product: '<S671>/Multiplication'
         *  Product: '<S671>/Multiplication3'
         *  Sum: '<S671>/Subtraction'
         *  Sum: '<S671>/Summation'
         */
        VeWTAC_M_OutTrqReqOITR_xPRNDL = fminf(VeWTAC_M_ToCmnd_AftLashCtrl_PstFil,
            ((1.0F - rtb_TmpSignalConversionAtVeVSDR) *
             rtb_TmpSignalConversionAtVeCTCR) + (rtb_TmpSignalConversionAtVeVSDR
            * Gain_pj));
    }

    /* End of Switch: '<S530>/Switch7' */

    /* Switch: '<S530>/Switch2' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_Switch13;
        Gain_pj = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S530>/Sum2'
         *  UnitDelay: '<S530>/Unit Delay1'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay1_DSTATE_m3;
        Gain_pj = VeWTAC_M_ToCmnd_PstFil_HTDR + rtb_Switch1_bbt;
    }

    /* End of Switch: '<S530>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling1' */
    /* Logic: '<S679>/AND' incorporates:
     *  UnitDelay: '<S679>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_Comparison12 &&
        (WTAR_ac_DW.UnitDelay_DSTATE_ff));

    /* Update for UnitDelay: '<S679>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ff = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling1' */

    /* Switch: '<S672>/Switch2' incorporates:
     *  Switch: '<S672>/Switch3'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S672>/Switch2' */
        rtb_TmpSignalConversionAtVeAX_k = rtb_Sum3_aq;

        /* Switch: '<S319>/Switch14' incorporates:
         *  Constant: '<S672>/Constant Value4'
         */
        rtb_Switch14 = 0.0F;
    }
    else
    {
        /* Switch: '<S672>/Switch2' incorporates:
         *  UnitDelay: '<S672>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAX_k = WTAR_ac_DW.UnitDelay_DSTATE_k;

        /* MinMax: '<S672>/Maximum' incorporates:
         *  Constant: '<S687>/Calib'
         *  Constant: '<S688>/Calib'
         */
        rtb_TmpSignalConversionAtVeBTQR = fmaxf(KeWTAR_t_dT,
            KeWTAR_t_ToClipBlend);

        /* Outputs for Atomic SubSystem: '<S672>/Protected_Division1' */
        /* Switch: '<S690>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S690>/Constant Value'
         *  Constant: '<S690>/Constant Value1'
         *  Constant: '<S690>/Constant Value2'
         *  Constant: '<S690>/Constant Value3'
         *  Logic: '<S690>/AND'
         *  RelationalOperator: '<S690>/Greater Than or Equal '
         *  RelationalOperator: '<S690>/Greater Than or Equal 1'
         *  RelationalOperator: '<S690>/Not Equal'
         *  RelationalOperator: '<S690>/Not Equal1'
         *  Switch: '<S690>/Switch2'
         *  Switch: '<S690>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_TmpSignalConversionAtVeBTQR != 0.0F))
        {
            /* Switch: '<S690>/Switch1' incorporates:
             *  Product: '<S690>/Division'
             */
            rtb_TmpSignalConversionAtVeBTQR = KeWTAR_t_dT /
                rtb_TmpSignalConversionAtVeBTQR;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S690>/Switch2' incorporates:
             *  Constant: '<S690>/MAXFLOAT'
             *  Switch: '<S690>/Switch1'
             */
            rtb_TmpSignalConversionAtVeBTQR = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S690>/Switch3' incorporates:
             *  Constant: '<S690>/MINFLOAT'
             *  Switch: '<S690>/Switch1'
             *  Switch: '<S690>/Switch2'
             */
            rtb_TmpSignalConversionAtVeBTQR = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S690>/Switch1' incorporates:
             *  Constant: '<S690>/Constant Value4'
             *  Switch: '<S690>/Switch2'
             *  Switch: '<S690>/Switch3'
             */
            rtb_TmpSignalConversionAtVeBTQR = 0.0F;
        }

        /* End of Switch: '<S690>/Switch1' */
        /* End of Outputs for SubSystem: '<S672>/Protected_Division1' */

        /* Switch: '<S319>/Switch14' incorporates:
         *  Sum: '<S672>/Summation1'
         *  UnitDelay: '<S672>/Unit Delay1'
         */
        rtb_Switch14 = rtb_TmpSignalConversionAtVeBTQR +
            WTAR_ac_DW.UnitDelay1_DSTATE_ah;
    }

    /* End of Switch: '<S672>/Switch2' */

    /* MinMax: '<S672>/MinMax' incorporates:
     *  Constant: '<S672>/Constant Value2'
     */
    rtb_TmpSignalConversionAtVeBTQR = fminf(rtb_Switch14, 1.0F);

    /* Sum: '<S672>/Summation' incorporates:
     *  Constant: '<S672>/Constant Value'
     *  Product: '<S672>/Multiplication'
     *  Product: '<S672>/Multiplication3'
     *  Sum: '<S672>/Subtraction'
     */
    rtb_Switch1_mxa = ((1.0F - rtb_TmpSignalConversionAtVeBTQR) *
                       rtb_TmpSignalConversionAtVeAX_k) +
        (rtb_TmpSignalConversionAtVeBTQR * Gain_pj);

    /* Switch: '<S530>/Switch3' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch3' incorporates:
         *  MinMax: '<S530>/MinMax1'
         */
        VeWTAC_M_OutTrqReqHTDR_xPRNDL = fmaxf(rtb_Switch1_mxa,
            VeWTAC_M_ToCmnd_PstFil_HTDR);
    }
    else
    {
        /* Switch: '<S530>/Switch3' incorporates:
         *  MinMax: '<S530>/MinMax2'
         */
        VeWTAC_M_OutTrqReqHTDR_xPRNDL = fminf(VeWTAC_M_ToCmnd_PstFil_HTDR,
            rtb_Switch1_mxa);
    }

    /* End of Switch: '<S530>/Switch3' */

    /* Switch: '<S530>/Switch5' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_Switch13;
        Gain_pj = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S530>/Sum3'
         *  UnitDelay: '<S530>/Unit Delay4'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay4_DSTATE_o;
        Gain_pj = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM + rtb_Switch1_bbt;
    }

    /* End of Switch: '<S530>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling3' */
    /* Logic: '<S681>/AND' incorporates:
     *  UnitDelay: '<S681>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_Comparison12 &&
        (WTAR_ac_DW.UnitDelay_DSTATE_nn));

    /* Update for UnitDelay: '<S681>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nn = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling3' */

    /* Switch: '<S674>/Switch2' incorporates:
     *  Switch: '<S674>/Switch3'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S674>/Switch2' */
        rtb_TmpSignalConversionAtVeS_dq = rtb_Sum3_aq;

        /* Switch: '<S319>/Switch14' incorporates:
         *  Constant: '<S674>/Constant Value4'
         */
        rtb_Switch14 = 0.0F;
    }
    else
    {
        /* Switch: '<S674>/Switch2' incorporates:
         *  UnitDelay: '<S674>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeS_dq = WTAR_ac_DW.UnitDelay_DSTATE_f;

        /* MinMax: '<S674>/Maximum' incorporates:
         *  Constant: '<S687>/Calib'
         *  Constant: '<S688>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_f = fmaxf(KeWTAR_t_dT,
            KeWTAR_t_ToClipBlend);

        /* Outputs for Atomic SubSystem: '<S674>/Protected_Division1' */
        /* Switch: '<S692>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S692>/Constant Value'
         *  Constant: '<S692>/Constant Value1'
         *  Constant: '<S692>/Constant Value2'
         *  Constant: '<S692>/Constant Value3'
         *  Logic: '<S692>/AND'
         *  RelationalOperator: '<S692>/Greater Than or Equal '
         *  RelationalOperator: '<S692>/Greater Than or Equal 1'
         *  RelationalOperator: '<S692>/Not Equal'
         *  RelationalOperator: '<S692>/Not Equal1'
         *  Switch: '<S692>/Switch2'
         *  Switch: '<S692>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_TmpSignalConversionAtVeSC_f != 0.0F))
        {
            /* Switch: '<S692>/Switch1' incorporates:
             *  Product: '<S692>/Division'
             */
            rtb_TmpSignalConversionAtVeSC_f = KeWTAR_t_dT /
                rtb_TmpSignalConversionAtVeSC_f;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S692>/Switch2' incorporates:
             *  Constant: '<S692>/MAXFLOAT'
             *  Switch: '<S692>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSC_f = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S692>/Switch3' incorporates:
             *  Constant: '<S692>/MINFLOAT'
             *  Switch: '<S692>/Switch1'
             *  Switch: '<S692>/Switch2'
             */
            rtb_TmpSignalConversionAtVeSC_f = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S692>/Switch1' incorporates:
             *  Constant: '<S692>/Constant Value4'
             *  Switch: '<S692>/Switch2'
             *  Switch: '<S692>/Switch3'
             */
            rtb_TmpSignalConversionAtVeSC_f = 0.0F;
        }

        /* End of Switch: '<S692>/Switch1' */
        /* End of Outputs for SubSystem: '<S674>/Protected_Division1' */

        /* Switch: '<S319>/Switch14' incorporates:
         *  Sum: '<S674>/Summation1'
         *  UnitDelay: '<S674>/Unit Delay1'
         */
        rtb_Switch14 = rtb_TmpSignalConversionAtVeSC_f +
            WTAR_ac_DW.UnitDelay1_DSTATE_i;
    }

    /* End of Switch: '<S674>/Switch2' */

    /* MinMax: '<S674>/MinMax' incorporates:
     *  Constant: '<S674>/Constant Value2'
     */
    rtb_TmpSignalConversionAtVeSC_f = fminf(rtb_Switch14, 1.0F);

    /* Sum: '<S674>/Summation' incorporates:
     *  Constant: '<S674>/Constant Value'
     *  Product: '<S674>/Multiplication'
     *  Product: '<S674>/Multiplication3'
     *  Sum: '<S674>/Subtraction'
     */
    rtb_Summation_g5 = ((1.0F - rtb_TmpSignalConversionAtVeSC_f) *
                        rtb_TmpSignalConversionAtVeS_dq) +
        (rtb_TmpSignalConversionAtVeSC_f * Gain_pj);

    /* Switch: '<S530>/Switch9' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch9' incorporates:
         *  MinMax: '<S530>/MinMax7'
         */
        VeWTAC_M_AfterToClip_xSEM_xPRNDL = fmaxf(rtb_Summation_g5,
            VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM);
    }
    else
    {
        /* Switch: '<S530>/Switch9' incorporates:
         *  MinMax: '<S530>/MinMax8'
         */
        VeWTAC_M_AfterToClip_xSEM_xPRNDL = fminf
            (VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM, rtb_Summation_g5);
    }

    /* End of Switch: '<S530>/Switch9' */

    /* Switch: '<S530>/Switch8' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_Switch13;
        Gain_pj = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S530>/Sum4'
         *  UnitDelay: '<S530>/Unit Delay5'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay5_DSTATE;
        Gain_pj = VeWTAC_M_ToNet_Arb_xSEM + rtb_Switch1_bbt;
    }

    /* End of Switch: '<S530>/Switch8' */

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling4' */
    /* Logic: '<S682>/AND' incorporates:
     *  UnitDelay: '<S682>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_Comparison12 &&
        (WTAR_ac_DW.UnitDelay_DSTATE_pf));

    /* Update for UnitDelay: '<S682>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_pf = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling4' */

    /* Switch: '<S675>/Switch2' incorporates:
     *  Switch: '<S675>/Switch3'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S675>/Switch2' */
        rtb_TmpSignalConversionAtVeSC_c = rtb_Sum3_aq;

        /* Switch: '<S319>/Switch14' incorporates:
         *  Constant: '<S675>/Constant Value4'
         */
        rtb_Switch14 = 0.0F;
    }
    else
    {
        /* Switch: '<S675>/Switch2' incorporates:
         *  UnitDelay: '<S675>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeSC_c = WTAR_ac_DW.UnitDelay_DSTATE_jr;

        /* MinMax: '<S675>/Maximum' incorporates:
         *  Constant: '<S687>/Calib'
         *  Constant: '<S688>/Calib'
         */
        rtb_TmpSignalConversionAtVeSC_j = fmaxf(KeWTAR_t_dT,
            KeWTAR_t_ToClipBlend);

        /* Outputs for Atomic SubSystem: '<S675>/Protected_Division1' */
        /* Switch: '<S693>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S693>/Constant Value'
         *  Constant: '<S693>/Constant Value1'
         *  Constant: '<S693>/Constant Value2'
         *  Constant: '<S693>/Constant Value3'
         *  Logic: '<S693>/AND'
         *  RelationalOperator: '<S693>/Greater Than or Equal '
         *  RelationalOperator: '<S693>/Greater Than or Equal 1'
         *  RelationalOperator: '<S693>/Not Equal'
         *  RelationalOperator: '<S693>/Not Equal1'
         *  Switch: '<S693>/Switch2'
         *  Switch: '<S693>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_TmpSignalConversionAtVeSC_j != 0.0F))
        {
            /* Switch: '<S693>/Switch1' incorporates:
             *  Product: '<S693>/Division'
             */
            rtb_TmpSignalConversionAtVeSC_j = KeWTAR_t_dT /
                rtb_TmpSignalConversionAtVeSC_j;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S693>/Switch2' incorporates:
             *  Constant: '<S693>/MAXFLOAT'
             *  Switch: '<S693>/Switch1'
             */
            rtb_TmpSignalConversionAtVeSC_j = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S693>/Switch3' incorporates:
             *  Constant: '<S693>/MINFLOAT'
             *  Switch: '<S693>/Switch1'
             *  Switch: '<S693>/Switch2'
             */
            rtb_TmpSignalConversionAtVeSC_j = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S693>/Switch1' incorporates:
             *  Constant: '<S693>/Constant Value4'
             *  Switch: '<S693>/Switch2'
             *  Switch: '<S693>/Switch3'
             */
            rtb_TmpSignalConversionAtVeSC_j = 0.0F;
        }

        /* End of Switch: '<S693>/Switch1' */
        /* End of Outputs for SubSystem: '<S675>/Protected_Division1' */

        /* Switch: '<S319>/Switch14' incorporates:
         *  Sum: '<S675>/Summation1'
         *  UnitDelay: '<S675>/Unit Delay1'
         */
        rtb_Switch14 = rtb_TmpSignalConversionAtVeSC_j +
            WTAR_ac_DW.UnitDelay1_DSTATE_pm;
    }

    /* End of Switch: '<S675>/Switch2' */

    /* MinMax: '<S675>/MinMax' incorporates:
     *  Constant: '<S675>/Constant Value2'
     */
    rtb_TmpSignalConversionAtVeSC_j = fminf(rtb_Switch14, 1.0F);

    /* Switch: '<S530>/Switch11' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch11' incorporates:
         *  Constant: '<S675>/Constant Value'
         *  MinMax: '<S530>/MinMax9'
         *  Product: '<S675>/Multiplication'
         *  Product: '<S675>/Multiplication3'
         *  Sum: '<S675>/Subtraction'
         *  Sum: '<S675>/Summation'
         */
        VeWTAC_M_ToNet_Arb_xSEM_xPRNDL = fmaxf(((1.0F -
            rtb_TmpSignalConversionAtVeSC_j) * rtb_TmpSignalConversionAtVeSC_c)
            + (rtb_TmpSignalConversionAtVeSC_j * Gain_pj),
            VeWTAC_M_ToNet_Arb_xSEM);
    }
    else
    {
        /* Switch: '<S530>/Switch11' incorporates:
         *  Constant: '<S675>/Constant Value'
         *  MinMax: '<S530>/MinMax10'
         *  Product: '<S675>/Multiplication'
         *  Product: '<S675>/Multiplication3'
         *  Sum: '<S675>/Subtraction'
         *  Sum: '<S675>/Summation'
         */
        VeWTAC_M_ToNet_Arb_xSEM_xPRNDL = fminf(VeWTAC_M_ToNet_Arb_xSEM, ((1.0F -
            rtb_TmpSignalConversionAtVeSC_j) * rtb_TmpSignalConversionAtVeSC_c)
            + (rtb_TmpSignalConversionAtVeSC_j * Gain_pj));
    }

    /* End of Switch: '<S530>/Switch11' */

    /* Switch: '<S530>/Switch15' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_Switch13;
        Gain_pj = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S530>/Sum5'
         *  UnitDelay: '<S530>/Unit Delay6'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay6_DSTATE_b;
        Gain_pj = VeWTAC_M_ToPot_Net + rtb_Switch1_bbt;
    }

    /* End of Switch: '<S530>/Switch15' */

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling2' */
    /* Logic: '<S680>/AND' incorporates:
     *  UnitDelay: '<S680>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_Comparison12 &&
        (WTAR_ac_DW.UnitDelay_DSTATE_fd));

    /* Update for UnitDelay: '<S680>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_fd = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling2' */

    /* Switch: '<S676>/Switch2' incorporates:
     *  Switch: '<S676>/Switch3'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S676>/Switch2' */
        rtb_Abs1 = rtb_Sum3_aq;

        /* Switch: '<S319>/Switch14' incorporates:
         *  Constant: '<S676>/Constant Value4'
         */
        rtb_Switch14 = 0.0F;
    }
    else
    {
        /* Switch: '<S676>/Switch2' incorporates:
         *  UnitDelay: '<S676>/Unit Delay'
         */
        rtb_Abs1 = WTAR_ac_DW.UnitDelay_DSTATE_ns;

        /* MinMax: '<S676>/Maximum' incorporates:
         *  Constant: '<S687>/Calib'
         *  Constant: '<S688>/Calib'
         */
        rtb_Switch3_c1 = fmaxf(KeWTAR_t_dT, KeWTAR_t_ToClipBlend);

        /* Outputs for Atomic SubSystem: '<S676>/Protected_Division1' */
        /* Switch: '<S694>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S694>/Constant Value'
         *  Constant: '<S694>/Constant Value1'
         *  Constant: '<S694>/Constant Value2'
         *  Constant: '<S694>/Constant Value3'
         *  Logic: '<S694>/AND'
         *  RelationalOperator: '<S694>/Greater Than or Equal '
         *  RelationalOperator: '<S694>/Greater Than or Equal 1'
         *  RelationalOperator: '<S694>/Not Equal'
         *  RelationalOperator: '<S694>/Not Equal1'
         *  Switch: '<S694>/Switch2'
         *  Switch: '<S694>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_Switch3_c1 != 0.0F))
        {
            /* Switch: '<S694>/Switch1' incorporates:
             *  Product: '<S694>/Division'
             */
            rtb_Switch3_c1 = KeWTAR_t_dT / rtb_Switch3_c1;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S694>/Switch2' incorporates:
             *  Constant: '<S694>/MAXFLOAT'
             *  Switch: '<S694>/Switch1'
             */
            rtb_Switch3_c1 = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S694>/Switch3' incorporates:
             *  Constant: '<S694>/MINFLOAT'
             *  Switch: '<S694>/Switch1'
             *  Switch: '<S694>/Switch2'
             */
            rtb_Switch3_c1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S694>/Switch1' incorporates:
             *  Constant: '<S694>/Constant Value4'
             *  Switch: '<S694>/Switch2'
             *  Switch: '<S694>/Switch3'
             */
            rtb_Switch3_c1 = 0.0F;
        }

        /* End of Switch: '<S694>/Switch1' */
        /* End of Outputs for SubSystem: '<S676>/Protected_Division1' */

        /* Switch: '<S319>/Switch14' incorporates:
         *  Sum: '<S676>/Summation1'
         *  UnitDelay: '<S676>/Unit Delay1'
         */
        rtb_Switch14 = rtb_Switch3_c1 + WTAR_ac_DW.UnitDelay1_DSTATE_h3;
    }

    /* End of Switch: '<S676>/Switch2' */

    /* MinMax: '<S676>/MinMax' incorporates:
     *  Constant: '<S676>/Constant Value2'
     */
    rtb_Switch3_c1 = fminf(rtb_Switch14, 1.0F);

    /* Switch: '<S530>/Switch14' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch14' incorporates:
         *  Constant: '<S676>/Constant Value'
         *  MinMax: '<S530>/MinMax14'
         *  Product: '<S676>/Multiplication'
         *  Product: '<S676>/Multiplication3'
         *  Sum: '<S676>/Subtraction'
         *  Sum: '<S676>/Summation'
         */
        VeWTAC_M_OutTrqPot_xPRNDL = fmaxf(((1.0F - rtb_Switch3_c1) * rtb_Abs1) +
            (rtb_Switch3_c1 * Gain_pj), VeWTAC_M_ToPot_Net);
    }
    else
    {
        /* Switch: '<S530>/Switch14' incorporates:
         *  Constant: '<S676>/Constant Value'
         *  MinMax: '<S530>/MinMax13'
         *  Product: '<S676>/Multiplication'
         *  Product: '<S676>/Multiplication3'
         *  Sum: '<S676>/Subtraction'
         *  Sum: '<S676>/Summation'
         */
        VeWTAC_M_OutTrqPot_xPRNDL = fminf(VeWTAC_M_ToPot_Net, ((1.0F -
            rtb_Switch3_c1) * rtb_Abs1) + (rtb_Switch3_c1 * Gain_pj));
    }

    /* End of Switch: '<S530>/Switch14' */

    /* Switch: '<S530>/Switch18' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_Switch13;
        Gain_pj = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S530>/Sum1'
         *  UnitDelay: '<S530>/Unit Delay3'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay3_DSTATE_l;
        Gain_pj = rtb_MinMax_n + rtb_Switch1_bbt;
    }

    /* End of Switch: '<S530>/Switch18' */

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling5' */
    /* Logic: '<S683>/AND' incorporates:
     *  UnitDelay: '<S683>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_Comparison12 &&
        (WTAR_ac_DW.UnitDelay_DSTATE_os));

    /* Update for UnitDelay: '<S683>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_os = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling5' */

    /* Switch: '<S673>/Switch2' incorporates:
     *  Switch: '<S673>/Switch3'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S673>/Switch2' */
        rtb_Sum1_oe = rtb_Sum3_aq;

        /* Switch: '<S319>/Switch14' incorporates:
         *  Constant: '<S673>/Constant Value4'
         */
        rtb_Switch14 = 0.0F;
    }
    else
    {
        /* Switch: '<S673>/Switch2' incorporates:
         *  UnitDelay: '<S673>/Unit Delay'
         */
        rtb_Sum1_oe = WTAR_ac_DW.UnitDelay_DSTATE_dc;

        /* MinMax: '<S673>/Maximum' incorporates:
         *  Constant: '<S687>/Calib'
         *  Constant: '<S688>/Calib'
         */
        rtb_Maximum_i = fmaxf(KeWTAR_t_dT, KeWTAR_t_ToClipBlend);

        /* Outputs for Atomic SubSystem: '<S673>/Protected_Division1' */
        /* Switch: '<S691>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S691>/Constant Value'
         *  Constant: '<S691>/Constant Value1'
         *  Constant: '<S691>/Constant Value2'
         *  Constant: '<S691>/Constant Value3'
         *  Logic: '<S691>/AND'
         *  RelationalOperator: '<S691>/Greater Than or Equal '
         *  RelationalOperator: '<S691>/Greater Than or Equal 1'
         *  RelationalOperator: '<S691>/Not Equal'
         *  RelationalOperator: '<S691>/Not Equal1'
         *  Switch: '<S691>/Switch2'
         *  Switch: '<S691>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_Maximum_i != 0.0F))
        {
            /* Switch: '<S691>/Switch1' incorporates:
             *  Product: '<S691>/Division'
             */
            rtb_Maximum_i = KeWTAR_t_dT / rtb_Maximum_i;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S691>/Switch2' incorporates:
             *  Constant: '<S691>/MAXFLOAT'
             *  Switch: '<S691>/Switch1'
             */
            rtb_Maximum_i = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S691>/Switch3' incorporates:
             *  Constant: '<S691>/MINFLOAT'
             *  Switch: '<S691>/Switch1'
             *  Switch: '<S691>/Switch2'
             */
            rtb_Maximum_i = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S691>/Switch1' incorporates:
             *  Constant: '<S691>/Constant Value4'
             *  Switch: '<S691>/Switch2'
             *  Switch: '<S691>/Switch3'
             */
            rtb_Maximum_i = 0.0F;
        }

        /* End of Switch: '<S691>/Switch1' */
        /* End of Outputs for SubSystem: '<S673>/Protected_Division1' */

        /* Switch: '<S319>/Switch14' incorporates:
         *  Sum: '<S673>/Summation1'
         *  UnitDelay: '<S673>/Unit Delay1'
         */
        rtb_Switch14 = rtb_Maximum_i + WTAR_ac_DW.UnitDelay1_DSTATE_ov;
    }

    /* End of Switch: '<S673>/Switch2' */

    /* MinMax: '<S673>/MinMax' incorporates:
     *  Constant: '<S673>/Constant Value2'
     */
    rtb_Maximum_i = fminf(rtb_Switch14, 1.0F);

    /* Switch: '<S530>/Switch13' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch13' incorporates:
         *  Constant: '<S673>/Constant Value'
         *  MinMax: '<S530>/MinMax4'
         *  Product: '<S673>/Multiplication'
         *  Product: '<S673>/Multiplication3'
         *  Sum: '<S673>/Subtraction'
         *  Sum: '<S673>/Summation'
         */
        VeWTAC_M_OutTrqRaw_xPRNDL = fmaxf(((1.0F - rtb_Maximum_i) * rtb_Sum1_oe)
            + (rtb_Maximum_i * Gain_pj), rtb_MinMax_n);
    }
    else
    {
        /* Switch: '<S530>/Switch13' incorporates:
         *  Constant: '<S673>/Constant Value'
         *  MinMax: '<S530>/MinMax3'
         *  Product: '<S673>/Multiplication'
         *  Product: '<S673>/Multiplication3'
         *  Sum: '<S673>/Subtraction'
         *  Sum: '<S673>/Summation'
         */
        VeWTAC_M_OutTrqRaw_xPRNDL = fminf(rtb_MinMax_n, ((1.0F - rtb_Maximum_i) *
            rtb_Sum1_oe) + (rtb_Maximum_i * Gain_pj));
    }

    /* End of Switch: '<S530>/Switch13' */

    /* Switch: '<S530>/Switch20' */
    if (WTAR_ac_B.VeWTAR_b_ToClipActive)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_Switch13;
        Gain_pj = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S530>/Sum7'
         *  UnitDelay: '<S530>/Unit Delay7'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay7_DSTATE;
        Gain_pj = rtb_Switch_fq + rtb_Switch1_bbt;
    }

    /* End of Switch: '<S530>/Switch20' */

    /* Outputs for Atomic SubSystem: '<S530>/EdgeFalling6' */
    /* Logic: '<S684>/AND' incorporates:
     *  UnitDelay: '<S684>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_Comparison12 &&
        (WTAR_ac_DW.UnitDelay_DSTATE_p1));

    /* Update for UnitDelay: '<S684>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_p1 = WTAR_ac_B.VeWTAR_b_ToClipActive;

    /* End of Outputs for SubSystem: '<S530>/EdgeFalling6' */

    /* Switch: '<S677>/Switch2' incorporates:
     *  Switch: '<S677>/Switch3'
     */
    if (rtb_VariantMerge_For_Variant__d)
    {
        /* Switch: '<S677>/Switch2' */
        rtb_Switch1_bbt = rtb_Sum3_aq;

        /* Switch: '<S319>/Switch13' incorporates:
         *  Constant: '<S677>/Constant Value4'
         */
        rtb_Switch13 = 0.0F;
    }
    else
    {
        /* Switch: '<S677>/Switch2' incorporates:
         *  UnitDelay: '<S677>/Unit Delay'
         */
        rtb_Switch1_bbt = WTAR_ac_DW.UnitDelay_DSTATE_lv;

        /* MinMax: '<S677>/Maximum' incorporates:
         *  Constant: '<S687>/Calib'
         *  Constant: '<S688>/Calib'
         */
        rtb_Maximum_jf = fmaxf(KeWTAR_t_dT, KeWTAR_t_ToClipBlend);

        /* Outputs for Atomic SubSystem: '<S677>/Protected_Division1' */
        /* Switch: '<S695>/Switch1' incorporates:
         *  Constant: '<S688>/Calib'
         *  Constant: '<S695>/Constant Value'
         *  Constant: '<S695>/Constant Value1'
         *  Constant: '<S695>/Constant Value2'
         *  Constant: '<S695>/Constant Value3'
         *  Logic: '<S695>/AND'
         *  RelationalOperator: '<S695>/Greater Than or Equal '
         *  RelationalOperator: '<S695>/Greater Than or Equal 1'
         *  RelationalOperator: '<S695>/Not Equal'
         *  RelationalOperator: '<S695>/Not Equal1'
         *  Switch: '<S695>/Switch2'
         *  Switch: '<S695>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_Maximum_jf != 0.0F))
        {
            /* Switch: '<S695>/Switch1' incorporates:
             *  Product: '<S695>/Division'
             */
            rtb_Maximum_jf = KeWTAR_t_dT / rtb_Maximum_jf;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S695>/Switch2' incorporates:
             *  Constant: '<S695>/MAXFLOAT'
             *  Switch: '<S695>/Switch1'
             */
            rtb_Maximum_jf = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S695>/Switch3' incorporates:
             *  Constant: '<S695>/MINFLOAT'
             *  Switch: '<S695>/Switch1'
             *  Switch: '<S695>/Switch2'
             */
            rtb_Maximum_jf = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S695>/Switch1' incorporates:
             *  Constant: '<S695>/Constant Value4'
             *  Switch: '<S695>/Switch2'
             *  Switch: '<S695>/Switch3'
             */
            rtb_Maximum_jf = 0.0F;
        }

        /* End of Switch: '<S695>/Switch1' */
        /* End of Outputs for SubSystem: '<S677>/Protected_Division1' */

        /* Switch: '<S319>/Switch13' incorporates:
         *  Sum: '<S677>/Summation1'
         *  UnitDelay: '<S677>/Unit Delay1'
         */
        rtb_Switch13 = rtb_Maximum_jf + WTAR_ac_DW.UnitDelay1_DSTATE_dp;
    }

    /* End of Switch: '<S677>/Switch2' */

    /* MinMax: '<S677>/MinMax' incorporates:
     *  Constant: '<S677>/Constant Value2'
     */
    rtb_Maximum_jf = fminf(rtb_Switch13, 1.0F);

    /* Switch: '<S530>/Switch19' */
    if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch19' incorporates:
         *  Constant: '<S677>/Constant Value'
         *  MinMax: '<S530>/MinMax16'
         *  Product: '<S677>/Multiplication'
         *  Product: '<S677>/Multiplication3'
         *  Sum: '<S677>/Subtraction'
         *  Sum: '<S677>/Summation'
         */
        VeWTAC_M_OutTrqRawShpd_xPRNDL = fmaxf(((1.0F - rtb_Maximum_jf) *
            rtb_Switch1_bbt) + (rtb_Maximum_jf * Gain_pj), rtb_Switch_fq);
    }
    else
    {
        /* Switch: '<S530>/Switch19' incorporates:
         *  Constant: '<S677>/Constant Value'
         *  MinMax: '<S530>/MinMax15'
         *  Product: '<S677>/Multiplication'
         *  Product: '<S677>/Multiplication3'
         *  Sum: '<S677>/Subtraction'
         *  Sum: '<S677>/Summation'
         */
        VeWTAC_M_OutTrqRawShpd_xPRNDL = fminf(rtb_Switch_fq, ((1.0F -
            rtb_Maximum_jf) * rtb_Switch1_bbt) + (rtb_Maximum_jf * Gain_pj));
    }

    /* End of Switch: '<S530>/Switch19' */

    /* SignalConversion generated from: '<S530>/VariantSource' */
#if !Rte_SysCon_Variant_WTAR_6

    /* VariantMerge generated from: '<S530>/VariantSource' */
    rtb_VariantMerge_For_Varian_a_0 = VeWTAC_M_OutTrqReqOITR_xPRNDL;
    rtb_VariantMerge_For_Varian_a_1 = VeWTAC_M_OutTrqReqHTDR_xPRNDL;
    rtb_VariantMerge_For_Varian_a_2 = VeWTAC_M_AfterToClip_xSEM_xPRNDL;
    rtb_VariantMerge_For_Varian_a_3 = VeWTAC_M_ToNet_Arb_xSEM_xPRNDL;
    rtb_VariantMerge_For_Varian_a_4 = VeWTAC_M_OutTrqPot_xPRNDL;
    rtb_VariantMerge_For_Varian_a_5 = VeWTAC_M_OutTrqRaw_xPRNDL;
    rtb_VariantMerge_For_Varian_a_6 = VeWTAC_M_OutTrqRawShpd_xPRNDL;

#endif

    /* End of SignalConversion generated from: '<S530>/VariantSource' */

    /* Outputs for Atomic SubSystem: '<S410>/Signal_Latch_On_With_Reset' */
    /* Outputs for Atomic SubSystem: '<S410>/EdgeBi' */
    /* Outputs for Atomic SubSystem: '<S410>/GradientLimiter' */
    /* Product: '<S410>/Product' incorporates:
     *  Abs: '<S410>/Abs2'
     *  Gain: '<S427>/Gain'
     *  Inport: '<Root>/VeTINR_b_DrvLnMinTrqMd'
     *  Logic: '<S410>/Logical Operator'
     *  Logic: '<S410>/Logical Operator2'
     *  Logic: '<S410>/Logical Operator5'
     *  Logic: '<S410>/Logical Operator6'
     *  RelationalOperator: '<S410>/Relational Operator'
     *  RelationalOperator: '<S410>/Relational Operator1'
     *  RelationalOperator: '<S410>/Relational Operator10'
     *  RelationalOperator: '<S410>/Relational Operator11'
     *  RelationalOperator: '<S410>/Relational Operator12'
     *  RelationalOperator: '<S410>/Relational Operator2'
     *  RelationalOperator: '<S410>/Relational Operator3'
     *  RelationalOperator: '<S410>/Relational Operator4'
     *  RelationalOperator: '<S410>/Relational Operator9'
     *  Sum: '<S410>/Sum1'
     *  Switch: '<S410>/Switch1'
     *  Switch: '<S410>/Switch13'
     *  Switch: '<S410>/Switch2'
     *  UnitDelay: '<S410>/Unit Delay'
     */
#if Rte_SysCon_Variant_WTAR_3

    /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
    /* Product: '<S410>/Product' incorporates:
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_M_DTCM_TrqWSign = rtb_Switch1_hk[0] * rtb_TmpSignalConversionAtVeDT_i;

    /* Logic: '<S410>/Logical Operator2' incorporates:
     *  Constant: '<S410>/Constant Value1'
     *  Constant: '<S410>/Constant Value17'
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_b_ASR_D = ((rtb_Switch1_hk[0] > 0.5F) && (VeWTAC_M_ActualAxleTrq >
                       0.0F));

    /* Logic: '<S410>/Logical Operator5' incorporates:
     *  Constant: '<S410>/Constant Value6'
     *  Constant: '<S410>/Constant Value7'
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_b_MSR_R = ((rtb_Switch1_hk[0] < -0.5F) && (VeWTAC_M_ActualAxleTrq >
                       0.0F));

    /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
    if ((VeWTAC_b_ASR_D) || (VeWTAC_b_MSR_R))
    {
        /* Switch: '<S410>/Switch2' incorporates:
         *  Gain: '<S524>/Gain'
         *  MinMax: '<S410>/MinMax2'
         */
        VeWTAC_M_ToHTDR_DTCMArb = fminf(rtb_VariantMerge_For_Varian_a_1,
            VeWTAC_M_DTCM_TrqWSign);
    }
    else
    {
        /* Switch: '<S410>/Switch2' incorporates:
         *  Gain: '<S524>/Gain'
         *  MinMax: '<S410>/MinMax5'
         */
        VeWTAC_M_ToHTDR_DTCMArb = fmaxf(VeWTAC_M_DTCM_TrqWSign,
            rtb_VariantMerge_For_Varian_a_1);
    }

    (void)Rte_Read_VeTINR_b_DrvLnMinTrqMd_Value(&tmpRead_j);

    /* Logic: '<S410>/Logical Operator' incorporates:
     *  Constant: '<S424>/Calib'
     *  Inport: '<Root>/VeTINR_b_DrvLnMinTrqMd'
     */
    VeWTAC_b_DTCM_TrqMode = ((((rtb_TmpSignalConversionAtVeDT_i >=
        KeWTAR_M_DTCM_TrqReq_MinLim) && (!rtb_TmpSignalConversionAtVeSRAR)) && (
        !rtb_TmpSignalConversionAtVeSR_p)) && tmpRead_j);
    if (VeWTAC_b_DTCM_TrqMode)
    {
        /* Switch: '<S410>/Switch1' */
        rtb_TmpSignalConversionAtVeDT_i = VeWTAC_M_ToHTDR_DTCMArb;
    }
    else
    {
        /* Switch: '<S410>/Switch1' incorporates:
         *  Gain: '<S524>/Gain'
         */
        rtb_TmpSignalConversionAtVeDT_i = rtb_VariantMerge_For_Varian_a_1;
    }

    /* Sum: '<S417>/Sum2' incorporates:
     *  UnitDelay: '<S417>/Unit Delay'
     */
    rtb_Sum2_id = rtb_TmpSignalConversionAtVeDT_i -
        WTAR_ac_DW.UnitDelay_DSTATE_fu;

    /* Outputs for Atomic SubSystem: '<S417>/Limiter' */
    /* Switch: '<S439>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S439>/Relational Operator'
     */
    if (KeWTAR_dM_DTCM_RampInTrqRateLU < rtb_Sum2_id)
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = KeWTAR_dM_DTCM_RampInTrqRateLU;
    }
    else
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = rtb_Sum2_id;
    }

    /* End of Switch: '<S439>/Switch1' */

    /* Switch: '<S439>/Switch' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S439>/Relational Operator1'
     */
    if (rtb_Switch13 <= KeWTAR_dM_DTCM_RampOutTrqRateLD)
    {
        rtb_Switch13 = KeWTAR_dM_DTCM_RampOutTrqRateLD;
    }

    /* End of Switch: '<S439>/Switch' */
    /* End of Outputs for SubSystem: '<S417>/Limiter' */

    /* Sum: '<S417>/Sum3' incorporates:
     *  UnitDelay: '<S417>/Unit Delay'
     */
    rtb_Sum2_id = rtb_Switch13 + WTAR_ac_DW.UnitDelay_DSTATE_fu;

    /* Update for UnitDelay: '<S417>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_fu = rtb_Sum2_id;

    /* RelationalOperator: '<S411>/Not Equal' incorporates:
     *  UnitDelay: '<S411>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (VeWTAC_b_DTCM_TrqMode !=
        WTAR_ac_DW.UnitDelay_DSTATE_pe);

    /* Update for UnitDelay: '<S411>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_pe = VeWTAC_b_DTCM_TrqMode;

    /* Logic: '<S433>/OR1' incorporates:
     *  Constant: '<S423>/Calib'
     *  Logic: '<S433>/NOT'
     *  Logic: '<S433>/OR'
     *  UnitDelay: '<S433>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (rtb_TmpSignalConversionAtVeSRAR ||
        ((fabsf(WTAR_ac_DW.UnitDelay_DSTATE_k5 - rtb_TmpSignalConversionAtVeDT_i)
          > KeWTAR_M_DTCM_DeltaTrq4Blnd) && (WTAR_ac_DW.UnitDelay_DSTATE_bci)));

    /* Update for UnitDelay: '<S433>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_bci = rtb_TmpSignalConversionAtVeSRAR;
    if (rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Switch: '<S410>/Switch13' */
        VeWTAC_M_ToHTDR_DTCM_Out = rtb_Sum2_id;
    }
    else
    {
        /* Switch: '<S410>/Switch13' */
        VeWTAC_M_ToHTDR_DTCM_Out = rtb_TmpSignalConversionAtVeDT_i;
    }

    rtb_VariantMerge_For_Variant__a[0] = VeWTAC_M_ToHTDR_DTCM_Out;

#endif

    /* End of Product: '<S410>/Product' */
    /* End of Outputs for SubSystem: '<S410>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S410>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S410>/Signal_Latch_On_With_Reset' */

    /* Gain: '<S523>/Gain' */
    VeWTAC_M_OutTrqReqOITR_OvrSpd = rtb_VariantMerge_For_Varian_a_0;

    /* Gain: '<S529>/Gain' */
    VeWTAC_M_OutTrqRawShpd_OvrSpd = rtb_VariantMerge_For_Varian_a_6;

    /* Outputs for Atomic SubSystem: '<S410>/Signal_Latch_On_With_Reset1' */
    /* Outputs for Atomic SubSystem: '<S410>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S410>/GradientLimiter1' */
    /* Logic: '<S410>/Logical Operator7' incorporates:
     *  Abs: '<S410>/Abs1'
     *  Gain: '<S428>/Gain'
     *  RelationalOperator: '<S410>/Relational Operator13'
     *  Sum: '<S410>/Sum2'
     *  Switch: '<S410>/Switch14'
     *  Switch: '<S410>/Switch3'
     *  Switch: '<S410>/Switch4'
     *  UnitDelay: '<S410>/Unit Delay1'
     */
#if Rte_SysCon_Variant_WTAR_3

    if ((VeWTAC_b_ASR_D) || (VeWTAC_b_MSR_R))
    {
        /* Switch: '<S410>/Switch4' incorporates:
         *  MinMax: '<S410>/MinMax1'
         */
        VeWTAC_M_ToOITR_DTCMArb = fminf(VeWTAC_M_OutTrqReqOITR_OvrSpd,
            VeWTAC_M_DTCM_TrqWSign);
    }
    else
    {
        /* Switch: '<S410>/Switch4' incorporates:
         *  MinMax: '<S410>/MinMax3'
         */
        VeWTAC_M_ToOITR_DTCMArb = fmaxf(VeWTAC_M_DTCM_TrqWSign,
            VeWTAC_M_OutTrqReqOITR_OvrSpd);
    }

    if (VeWTAC_b_DTCM_TrqMode)
    {
        /* Switch: '<S410>/Switch3' */
        rtb_TmpSignalConversionAtVeDT_i = VeWTAC_M_ToOITR_DTCMArb;
    }
    else
    {
        /* Switch: '<S410>/Switch3' */
        rtb_TmpSignalConversionAtVeDT_i = VeWTAC_M_OutTrqReqOITR_OvrSpd;
    }

    /* Sum: '<S418>/Sum2' incorporates:
     *  UnitDelay: '<S418>/Unit Delay'
     */
    rtb_Sum2_id = rtb_TmpSignalConversionAtVeDT_i -
        WTAR_ac_DW.UnitDelay_DSTATE_gj;

    /* Outputs for Atomic SubSystem: '<S418>/Limiter' */
    /* Switch: '<S440>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S440>/Relational Operator'
     */
    if (KeWTAR_dM_DTCM_RampInTrqRateLU < rtb_Sum2_id)
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = KeWTAR_dM_DTCM_RampInTrqRateLU;
    }
    else
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = rtb_Sum2_id;
    }

    /* End of Switch: '<S440>/Switch1' */

    /* Switch: '<S440>/Switch' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S440>/Relational Operator1'
     */
    if (rtb_Switch13 <= KeWTAR_dM_DTCM_RampOutTrqRateLD)
    {
        rtb_Switch13 = KeWTAR_dM_DTCM_RampOutTrqRateLD;
    }

    /* End of Switch: '<S440>/Switch' */
    /* End of Outputs for SubSystem: '<S418>/Limiter' */

    /* Sum: '<S418>/Sum3' incorporates:
     *  UnitDelay: '<S418>/Unit Delay'
     */
    rtb_Sum2_id = rtb_Switch13 + WTAR_ac_DW.UnitDelay_DSTATE_gj;

    /* Update for UnitDelay: '<S418>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_gj = rtb_Sum2_id;

    /* RelationalOperator: '<S412>/Not Equal' incorporates:
     *  UnitDelay: '<S412>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (VeWTAC_b_DTCM_TrqMode !=
        WTAR_ac_DW.UnitDelay_DSTATE_j2);

    /* Update for UnitDelay: '<S412>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_j2 = VeWTAC_b_DTCM_TrqMode;

    /* Logic: '<S434>/OR1' incorporates:
     *  Constant: '<S423>/Calib'
     *  Logic: '<S434>/NOT'
     *  Logic: '<S434>/OR'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (rtb_TmpSignalConversionAtVeSRAR ||
        ((fabsf(WTAR_ac_DW.UnitDelay1_DSTATE_cp -
                rtb_TmpSignalConversionAtVeDT_i) > KeWTAR_M_DTCM_DeltaTrq4Blnd) &&
         (WTAR_ac_DW.UnitDelay_DSTATE_iuv)));

    /* Update for UnitDelay: '<S434>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_iuv = rtb_TmpSignalConversionAtVeSRAR;
    if (rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Switch: '<S410>/Switch14' */
        VeWTAC_M_ToOITR_DTCM_Out = rtb_Sum2_id;
    }
    else
    {
        /* Switch: '<S410>/Switch14' */
        VeWTAC_M_ToOITR_DTCM_Out = rtb_TmpSignalConversionAtVeDT_i;
    }

    rtb_VariantMerge_For_Variant__a[1] = VeWTAC_M_ToOITR_DTCM_Out;

#endif

    /* End of Logic: '<S410>/Logical Operator7' */
    /* End of Outputs for SubSystem: '<S410>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S410>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S410>/Signal_Latch_On_With_Reset1' */

    /* Gain: '<S528>/Gain' */
    VeWTAC_M_OutTrqPot_OvrSpd = rtb_VariantMerge_For_Varian_a_4;

    /* Outputs for Atomic SubSystem: '<S410>/Signal_Latch_On_With_Reset2' */
    /* Outputs for Atomic SubSystem: '<S410>/EdgeBi2' */
    /* Outputs for Atomic SubSystem: '<S410>/GradientLimiter2' */
    /* Logic: '<S410>/Logical Operator8' incorporates:
     *  Abs: '<S410>/Abs3'
     *  Gain: '<S429>/Gain'
     *  RelationalOperator: '<S410>/Relational Operator14'
     *  Sum: '<S410>/Sum3'
     *  Switch: '<S410>/Switch15'
     *  Switch: '<S410>/Switch5'
     *  Switch: '<S410>/Switch6'
     *  UnitDelay: '<S410>/Unit Delay2'
     */
#if Rte_SysCon_Variant_WTAR_3

    if ((VeWTAC_b_ASR_D) || (VeWTAC_b_MSR_R))
    {
        /* Switch: '<S410>/Switch6' incorporates:
         *  MinMax: '<S410>/MinMax4'
         */
        VeWTAC_M_ToRaw_DTCMArb = fminf(VeWTAC_M_OutTrqRawShpd_OvrSpd,
            VeWTAC_M_DTCM_TrqWSign);
    }
    else
    {
        /* Switch: '<S410>/Switch6' incorporates:
         *  MinMax: '<S410>/MinMax6'
         */
        VeWTAC_M_ToRaw_DTCMArb = fmaxf(VeWTAC_M_DTCM_TrqWSign,
            VeWTAC_M_OutTrqRawShpd_OvrSpd);
    }

    if (VeWTAC_b_DTCM_TrqMode)
    {
        /* Switch: '<S410>/Switch5' */
        rtb_TmpSignalConversionAtVeDT_i = VeWTAC_M_ToRaw_DTCMArb;
    }
    else
    {
        /* Switch: '<S410>/Switch5' */
        rtb_TmpSignalConversionAtVeDT_i = VeWTAC_M_OutTrqRawShpd_OvrSpd;
    }

    /* Sum: '<S419>/Sum2' incorporates:
     *  UnitDelay: '<S419>/Unit Delay'
     */
    rtb_Sum2_id = rtb_TmpSignalConversionAtVeDT_i -
        WTAR_ac_DW.UnitDelay_DSTATE_pp;

    /* Outputs for Atomic SubSystem: '<S419>/Limiter' */
    /* Switch: '<S441>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S441>/Relational Operator'
     */
    if (KeWTAR_dM_DTCM_RampInTrqRateLU < rtb_Sum2_id)
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = KeWTAR_dM_DTCM_RampInTrqRateLU;
    }
    else
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = rtb_Sum2_id;
    }

    /* End of Switch: '<S441>/Switch1' */

    /* Switch: '<S441>/Switch' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S441>/Relational Operator1'
     */
    if (rtb_Switch13 <= KeWTAR_dM_DTCM_RampOutTrqRateLD)
    {
        rtb_Switch13 = KeWTAR_dM_DTCM_RampOutTrqRateLD;
    }

    /* End of Switch: '<S441>/Switch' */
    /* End of Outputs for SubSystem: '<S419>/Limiter' */

    /* Sum: '<S419>/Sum3' incorporates:
     *  UnitDelay: '<S419>/Unit Delay'
     */
    rtb_Sum2_id = rtb_Switch13 + WTAR_ac_DW.UnitDelay_DSTATE_pp;

    /* Update for UnitDelay: '<S419>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_pp = rtb_Sum2_id;

    /* RelationalOperator: '<S413>/Not Equal' incorporates:
     *  UnitDelay: '<S413>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (VeWTAC_b_DTCM_TrqMode !=
        WTAR_ac_DW.UnitDelay_DSTATE_f5);

    /* Update for UnitDelay: '<S413>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_f5 = VeWTAC_b_DTCM_TrqMode;

    /* Logic: '<S435>/OR1' incorporates:
     *  Constant: '<S423>/Calib'
     *  Logic: '<S435>/NOT'
     *  Logic: '<S435>/OR'
     *  UnitDelay: '<S435>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (rtb_TmpSignalConversionAtVeSRAR ||
        ((fabsf(WTAR_ac_DW.UnitDelay2_DSTATE_b1 -
                rtb_TmpSignalConversionAtVeDT_i) > KeWTAR_M_DTCM_DeltaTrq4Blnd) &&
         (WTAR_ac_DW.UnitDelay_DSTATE_jd)));

    /* Update for UnitDelay: '<S435>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jd = rtb_TmpSignalConversionAtVeSRAR;
    if (rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Switch: '<S410>/Switch15' */
        VeWTAC_M_ToRaw_DTCM_Out = rtb_Sum2_id;
    }
    else
    {
        /* Switch: '<S410>/Switch15' */
        VeWTAC_M_ToRaw_DTCM_Out = rtb_TmpSignalConversionAtVeDT_i;
    }

    rtb_VariantMerge_For_Variant__a[2] = VeWTAC_M_ToRaw_DTCM_Out;

#endif

    /* End of Logic: '<S410>/Logical Operator8' */
    /* End of Outputs for SubSystem: '<S410>/GradientLimiter2' */
    /* End of Outputs for SubSystem: '<S410>/EdgeBi2' */
    /* End of Outputs for SubSystem: '<S410>/Signal_Latch_On_With_Reset2' */

    /* Gain: '<S525>/Gain' */
    VeWTAC_M_OutTrqRaw_OvrSpd = rtb_VariantMerge_For_Varian_a_5;

    /* Outputs for Atomic SubSystem: '<S410>/Signal_Latch_On_With_Reset5' */
    /* Outputs for Atomic SubSystem: '<S410>/EdgeBi5' */
    /* Outputs for Atomic SubSystem: '<S410>/GradientLimiter5' */
    /* Outputs for Atomic SubSystem: '<S410>/Signal_Latch_On_With_Reset4' */
    /* Outputs for Atomic SubSystem: '<S410>/EdgeBi4' */
    /* Outputs for Atomic SubSystem: '<S410>/GradientLimiter4' */
    /* Outputs for Atomic SubSystem: '<S410>/Signal_Latch_On_With_Reset3' */
    /* Outputs for Atomic SubSystem: '<S410>/EdgeBi3' */
    /* Outputs for Atomic SubSystem: '<S410>/GradientLimiter3' */
    /* Logic: '<S410>/Logical Operator9' incorporates:
     *  Abs: '<S410>/Abs4'
     *  Abs: '<S410>/Abs5'
     *  Abs: '<S410>/Abs6'
     *  Gain: '<S430>/Gain'
     *  Gain: '<S431>/Gain'
     *  Gain: '<S432>/Gain'
     *  Logic: '<S410>/Logical Operator10'
     *  Logic: '<S410>/Logical Operator11'
     *  RelationalOperator: '<S410>/Relational Operator15'
     *  RelationalOperator: '<S410>/Relational Operator16'
     *  RelationalOperator: '<S410>/Relational Operator17'
     *  SignalConversion generated from: '<S306>/VariantSource'
     *  Sum: '<S410>/Sum4'
     *  Sum: '<S410>/Sum5'
     *  Sum: '<S410>/Sum6'
     *  Switch: '<S410>/Switch10'
     *  Switch: '<S410>/Switch11'
     *  Switch: '<S410>/Switch12'
     *  Switch: '<S410>/Switch16'
     *  Switch: '<S410>/Switch17'
     *  Switch: '<S410>/Switch18'
     *  Switch: '<S410>/Switch7'
     *  Switch: '<S410>/Switch8'
     *  Switch: '<S410>/Switch9'
     *  UnitDelay: '<S410>/Unit Delay3'
     *  UnitDelay: '<S410>/Unit Delay4'
     *  UnitDelay: '<S410>/Unit Delay5'
     */
#if Rte_SysCon_Variant_WTAR_3

    if ((VeWTAC_b_ASR_D) || (VeWTAC_b_MSR_R))
    {
        /* Switch: '<S410>/Switch8' incorporates:
         *  MinMax: '<S410>/MinMax7'
         */
        VeWTAC_M_ToPot_DTCMArb = fminf(VeWTAC_M_OutTrqPot_OvrSpd,
            VeWTAC_M_DTCM_TrqWSign);
    }
    else
    {
        /* Switch: '<S410>/Switch8' incorporates:
         *  MinMax: '<S410>/MinMax8'
         */
        VeWTAC_M_ToPot_DTCMArb = fmaxf(VeWTAC_M_DTCM_TrqWSign,
            VeWTAC_M_OutTrqPot_OvrSpd);
    }

    if (VeWTAC_b_DTCM_TrqMode)
    {
        /* Switch: '<S410>/Switch7' */
        rtb_TmpSignalConversionAtVeDT_i = VeWTAC_M_ToPot_DTCMArb;
    }
    else
    {
        /* Switch: '<S410>/Switch7' */
        rtb_TmpSignalConversionAtVeDT_i = VeWTAC_M_OutTrqPot_OvrSpd;
    }

    /* Sum: '<S420>/Sum2' incorporates:
     *  UnitDelay: '<S420>/Unit Delay'
     */
    rtb_Sum2_id = rtb_TmpSignalConversionAtVeDT_i -
        WTAR_ac_DW.UnitDelay_DSTATE_nv;

    /* Outputs for Atomic SubSystem: '<S420>/Limiter' */
    /* Switch: '<S442>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S442>/Relational Operator'
     */
    if (KeWTAR_dM_DTCM_RampInTrqRateLU < rtb_Sum2_id)
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = KeWTAR_dM_DTCM_RampInTrqRateLU;
    }
    else
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = rtb_Sum2_id;
    }

    /* End of Switch: '<S442>/Switch1' */

    /* Switch: '<S442>/Switch' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S442>/Relational Operator1'
     */
    if (rtb_Switch13 <= KeWTAR_dM_DTCM_RampOutTrqRateLD)
    {
        rtb_Switch13 = KeWTAR_dM_DTCM_RampOutTrqRateLD;
    }

    /* End of Switch: '<S442>/Switch' */
    /* End of Outputs for SubSystem: '<S420>/Limiter' */

    /* Sum: '<S420>/Sum3' incorporates:
     *  UnitDelay: '<S420>/Unit Delay'
     */
    rtb_Sum2_id = rtb_Switch13 + WTAR_ac_DW.UnitDelay_DSTATE_nv;

    /* Update for UnitDelay: '<S420>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nv = rtb_Sum2_id;

    /* RelationalOperator: '<S414>/Not Equal' incorporates:
     *  UnitDelay: '<S414>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (VeWTAC_b_DTCM_TrqMode !=
        WTAR_ac_DW.UnitDelay_DSTATE_cip);

    /* Update for UnitDelay: '<S414>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_cip = VeWTAC_b_DTCM_TrqMode;

    /* Logic: '<S436>/OR1' incorporates:
     *  Constant: '<S423>/Calib'
     *  Logic: '<S436>/NOT'
     *  Logic: '<S436>/OR'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (rtb_TmpSignalConversionAtVeSRAR ||
        ((fabsf(WTAR_ac_DW.UnitDelay3_DSTATE_j - rtb_TmpSignalConversionAtVeDT_i)
          > KeWTAR_M_DTCM_DeltaTrq4Blnd) && (WTAR_ac_DW.UnitDelay_DSTATE_hi)));

    /* Update for UnitDelay: '<S436>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hi = rtb_TmpSignalConversionAtVeSRAR;
    if (rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Switch: '<S410>/Switch16' */
        VeWTAC_M_ToPot_DTCM_Out = rtb_Sum2_id;
    }
    else
    {
        /* Switch: '<S410>/Switch16' */
        VeWTAC_M_ToPot_DTCM_Out = rtb_TmpSignalConversionAtVeDT_i;
    }

    rtb_VariantMerge_For_Variant__a[3] = VeWTAC_M_ToPot_DTCM_Out;
    if ((VeWTAC_b_ASR_D) || (VeWTAC_b_MSR_R))
    {
        /* Switch: '<S410>/Switch10' incorporates:
         *  Gain: '<S526>/Gain'
         *  MinMax: '<S410>/MinMax9'
         */
        VeWTAC_M_ToxSEM_DTCMArb = fminf(rtb_VariantMerge_For_Varian_a_2,
            VeWTAC_M_DTCM_TrqWSign);
    }
    else
    {
        /* Switch: '<S410>/Switch10' incorporates:
         *  Gain: '<S526>/Gain'
         *  MinMax: '<S410>/MinMax10'
         */
        VeWTAC_M_ToxSEM_DTCMArb = fmaxf(VeWTAC_M_DTCM_TrqWSign,
            rtb_VariantMerge_For_Varian_a_2);
    }

    if (VeWTAC_b_DTCM_TrqMode)
    {
        /* Switch: '<S410>/Switch9' */
        rtb_Sum2_id = VeWTAC_M_ToxSEM_DTCMArb;
    }
    else
    {
        /* Switch: '<S410>/Switch9' incorporates:
         *  Gain: '<S526>/Gain'
         */
        rtb_Sum2_id = rtb_VariantMerge_For_Varian_a_2;
    }

    /* Sum: '<S421>/Sum2' incorporates:
     *  UnitDelay: '<S421>/Unit Delay'
     */
    rtb_Switch13 = rtb_Sum2_id - WTAR_ac_DW.UnitDelay_DSTATE_f2;

    /* Outputs for Atomic SubSystem: '<S421>/Limiter' */
    /* Switch: '<S443>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S443>/Relational Operator'
     */
    if (KeWTAR_dM_DTCM_RampInTrqRateLU < rtb_Switch13)
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = KeWTAR_dM_DTCM_RampInTrqRateLU;
    }

    /* End of Switch: '<S443>/Switch1' */

    /* Switch: '<S443>/Switch' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S443>/Relational Operator1'
     */
    if (rtb_Switch13 <= KeWTAR_dM_DTCM_RampOutTrqRateLD)
    {
        rtb_Switch13 = KeWTAR_dM_DTCM_RampOutTrqRateLD;
    }

    /* End of Switch: '<S443>/Switch' */
    /* End of Outputs for SubSystem: '<S421>/Limiter' */

    /* Sum: '<S421>/Sum3' incorporates:
     *  UnitDelay: '<S421>/Unit Delay'
     */
    rtb_Switch13 += WTAR_ac_DW.UnitDelay_DSTATE_f2;

    /* Update for UnitDelay: '<S421>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_f2 = rtb_Switch13;

    /* RelationalOperator: '<S415>/Not Equal' incorporates:
     *  UnitDelay: '<S415>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (VeWTAC_b_DTCM_TrqMode !=
        WTAR_ac_DW.UnitDelay_DSTATE_ei);

    /* Update for UnitDelay: '<S415>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ei = VeWTAC_b_DTCM_TrqMode;

    /* Logic: '<S437>/OR1' incorporates:
     *  Constant: '<S423>/Calib'
     *  Logic: '<S437>/NOT'
     *  Logic: '<S437>/OR'
     *  UnitDelay: '<S437>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (rtb_TmpSignalConversionAtVeSRAR ||
        ((fabsf(WTAR_ac_DW.UnitDelay4_DSTATE_a - rtb_Sum2_id) >
          KeWTAR_M_DTCM_DeltaTrq4Blnd) && (WTAR_ac_DW.UnitDelay_DSTATE_g1)));

    /* Update for UnitDelay: '<S437>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_g1 = rtb_TmpSignalConversionAtVeSRAR;
    if (rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Switch: '<S410>/Switch17' */
        VeWTAC_M_ToxSEM_DTCM_Out = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S410>/Switch17' */
        VeWTAC_M_ToxSEM_DTCM_Out = rtb_Sum2_id;
    }

    rtb_VariantMerge_For_Variant__a[4] = VeWTAC_M_ToxSEM_DTCM_Out;
    if ((VeWTAC_b_ASR_D) || (VeWTAC_b_MSR_R))
    {
        /* Switch: '<S410>/Switch11' incorporates:
         *  MinMax: '<S410>/MinMax12'
         */
        VeWTAC_M_ToRawxShp_DTCMArb = fminf(VeWTAC_M_OutTrqRaw_OvrSpd,
            VeWTAC_M_DTCM_TrqWSign);
    }
    else
    {
        /* Switch: '<S410>/Switch11' incorporates:
         *  MinMax: '<S410>/MinMax11'
         */
        VeWTAC_M_ToRawxShp_DTCMArb = fmaxf(VeWTAC_M_DTCM_TrqWSign,
            VeWTAC_M_OutTrqRaw_OvrSpd);
    }

    if (VeWTAC_b_DTCM_TrqMode)
    {
        /* Switch: '<S410>/Switch12' */
        rtb_Sum2_id = VeWTAC_M_ToRawxShp_DTCMArb;
    }
    else
    {
        /* Switch: '<S410>/Switch12' */
        rtb_Sum2_id = VeWTAC_M_OutTrqRaw_OvrSpd;
    }

    /* Sum: '<S422>/Sum2' incorporates:
     *  UnitDelay: '<S422>/Unit Delay'
     */
    rtb_Switch13 = rtb_Sum2_id - WTAR_ac_DW.UnitDelay_DSTATE_ng;

    /* Outputs for Atomic SubSystem: '<S422>/Limiter' */
    /* Switch: '<S444>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  RelationalOperator: '<S444>/Relational Operator'
     */
    if (KeWTAR_dM_DTCM_RampInTrqRateLU < rtb_Switch13)
    {
        /* Switch: '<S319>/Switch13' */
        rtb_Switch13 = KeWTAR_dM_DTCM_RampInTrqRateLU;
    }

    /* End of Switch: '<S444>/Switch1' */

    /* Switch: '<S444>/Switch' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S444>/Relational Operator1'
     */
    if (rtb_Switch13 <= KeWTAR_dM_DTCM_RampOutTrqRateLD)
    {
        rtb_Switch13 = KeWTAR_dM_DTCM_RampOutTrqRateLD;
    }

    /* End of Switch: '<S444>/Switch' */
    /* End of Outputs for SubSystem: '<S422>/Limiter' */

    /* Sum: '<S422>/Sum3' incorporates:
     *  UnitDelay: '<S422>/Unit Delay'
     */
    rtb_Switch13 += WTAR_ac_DW.UnitDelay_DSTATE_ng;

    /* Update for UnitDelay: '<S422>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ng = rtb_Switch13;

    /* RelationalOperator: '<S416>/Not Equal' incorporates:
     *  UnitDelay: '<S416>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (VeWTAC_b_DTCM_TrqMode !=
        WTAR_ac_DW.UnitDelay_DSTATE_oe);

    /* Update for UnitDelay: '<S416>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_oe = VeWTAC_b_DTCM_TrqMode;

    /* Logic: '<S438>/OR1' incorporates:
     *  Constant: '<S423>/Calib'
     *  Logic: '<S438>/NOT'
     *  Logic: '<S438>/OR'
     *  UnitDelay: '<S438>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR = (rtb_TmpSignalConversionAtVeSRAR ||
        ((fabsf(WTAR_ac_DW.UnitDelay5_DSTATE_h - rtb_Sum2_id) >
          KeWTAR_M_DTCM_DeltaTrq4Blnd) && (WTAR_ac_DW.UnitDelay_DSTATE_cq)));

    /* Update for UnitDelay: '<S438>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_cq = rtb_TmpSignalConversionAtVeSRAR;
    if (rtb_TmpSignalConversionAtVeSRAR)
    {
        /* Switch: '<S410>/Switch18' */
        VeWTAC_M_ToRawxShp_DTCM_Out = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S410>/Switch18' */
        VeWTAC_M_ToRawxShp_DTCM_Out = rtb_Sum2_id;
    }

    rtb_VariantMerge_For_Variant__a[5] = VeWTAC_M_ToRawxShp_DTCM_Out;

#else

    /* VariantMerge generated from: '<S306>/VariantSource' incorporates:
     *  Gain: '<S524>/Gain'
     *  Gain: '<S526>/Gain'
     *  SignalConversion generated from: '<S306>/VariantSource'
     */
    rtb_VariantMerge_For_Variant__a[0] = rtb_VariantMerge_For_Varian_a_1;
    rtb_VariantMerge_For_Variant__a[1] = VeWTAC_M_OutTrqReqOITR_OvrSpd;
    rtb_VariantMerge_For_Variant__a[2] = VeWTAC_M_OutTrqRawShpd_OvrSpd;
    rtb_VariantMerge_For_Variant__a[3] = VeWTAC_M_OutTrqPot_OvrSpd;
    rtb_VariantMerge_For_Variant__a[4] = rtb_VariantMerge_For_Varian_a_2;
    rtb_VariantMerge_For_Variant__a[5] = VeWTAC_M_OutTrqRaw_OvrSpd;

#endif

    /* End of Logic: '<S410>/Logical Operator9' */
    /* End of Outputs for SubSystem: '<S410>/GradientLimiter3' */
    /* End of Outputs for SubSystem: '<S410>/EdgeBi3' */
    /* End of Outputs for SubSystem: '<S410>/Signal_Latch_On_With_Reset3' */
    /* End of Outputs for SubSystem: '<S410>/GradientLimiter4' */
    /* End of Outputs for SubSystem: '<S410>/EdgeBi4' */
    /* End of Outputs for SubSystem: '<S410>/Signal_Latch_On_With_Reset4' */
    /* End of Outputs for SubSystem: '<S410>/GradientLimiter5' */
    /* End of Outputs for SubSystem: '<S410>/EdgeBi5' */
    /* End of Outputs for SubSystem: '<S410>/Signal_Latch_On_With_Reset5' */

    /* Switch: '<S302>/Switch3' incorporates:
     *  Constant: '<S302>/Constant Value1'
     *  Constant: '<S374>/Calib'
     *  Logic: '<S302>/Logical Operator4'
     *  Logic: '<S302>/Logical Operator5'
     *  RelationalOperator: '<S302>/Relational Operator3'
     */
    if ((rtb_Switch9_hi > 0.5F) || (!HeWTAR_b_SignConvEna))
    {
        /* Switch: '<S302>/Switch3' incorporates:
         *  SignalConversion generated from: '<S5>/VeWTAC_M_FrntAxleMinRq'
         */
        rtb_TmpSignalConversionAtVeDT_i = rtb_MinMax18;

        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        rtb_MinMax18 = rtb_Gain;

        /* Gain: '<S381>/Gain' incorporates:
         *  Outport: '<Root>/VeWTAR_M_RrAxlMaxRq'
         *  SignalConversion generated from: '<S1>/VeWTAC_M_RrAxlMaxRq'
         *  SignalConversion generated from: '<S5>/VeWTAC_M_RrAxleMaxRq'
         */
        (void)Rte_Write_VeWTAR_M_RrAxlMaxRq_Value(Switch1_f_idx_2);

        /* Gain: '<S382>/Gain' incorporates:
         *  Outport: '<Root>/VeWTAR_M_RrAxlMinRq'
         *  SignalConversion generated from: '<S1>/VeWTAC_M_RrAxlMinRq'
         *  SignalConversion generated from: '<S5>/VeWTAC_M_RrAxleMinRq'
         */
        (void)Rte_Write_VeWTAR_M_RrAxlMinRq_Value(Switch1_f_idx_3);

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
        /* Switch: '<S302>/Switch3' incorporates:
         *  SignalConversion generated from: '<S5>/VeWTAC_M_FrntAxleMinRq'
         */
        rtb_TmpSignalConversionAtVeDT_i = rtb_Gain;

        /* Gain: '<S381>/Gain' incorporates:
         *  Outport: '<Root>/VeWTAR_M_RrAxlMaxRq'
         *  SignalConversion generated from: '<S1>/VeWTAC_M_RrAxlMaxRq'
         *  SignalConversion generated from: '<S5>/VeWTAC_M_RrAxleMinRq'
         */
        (void)Rte_Write_VeWTAR_M_RrAxlMaxRq_Value(Switch1_f_idx_3);

        /* Gain: '<S382>/Gain' incorporates:
         *  Outport: '<Root>/VeWTAR_M_RrAxlMinRq'
         *  SignalConversion generated from: '<S1>/VeWTAC_M_RrAxlMinRq'
         *  SignalConversion generated from: '<S5>/VeWTAC_M_RrAxleMaxRq'
         */
        (void)Rte_Write_VeWTAR_M_RrAxlMinRq_Value(Switch1_f_idx_2);

        /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
    }

    /* End of Switch: '<S302>/Switch3' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S376>/Calib'
         */
        if (KeWTAR_b_ESC_PostShpng_ArbDsbl)
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  MinMax: '<S302>/MinMax2'
             */
            VaWTAC_M_ESCTrqPreGrdLim[(i)] = rtb_VariantMerge_For_Variant__a[i];
        }
        else
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Gain: '<S379>/Gain'
             *  Gain: '<S380>/Gain'
             *  MinMax: '<S302>/MinMax2'
             *  MinMax: '<S302>/MinMax5'
             */
            VaWTAC_M_ESCTrqPreGrdLim[(i)] = fmaxf(fminf
                (rtb_VariantMerge_For_Variant__a[i],
                 rtb_TmpSignalConversionAtVeDT_i), rtb_MinMax18);
        }

        /* End of Switch: '<S302>/Switch1' */
    }

    /* RelationalOperator: '<S302>/Relational Operator2' */
    rtb_TmpSignalConversionAtVeSRAR = (VaWTAC_M_ESCTrqPreGrdLim[0] !=
        rtb_VariantMerge_For_Variant__a[0]);

    /* Outputs for Atomic SubSystem: '<S302>/EdgeRising' */
    /* Logic: '<S372>/OR1' incorporates:
     *  UnitDelay: '<S372>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_p = !WTAR_ac_DW.UnitDelay_DSTATE_ar;

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ar = rtb_TmpSignalConversionAtVeSRAR;

    /* Outputs for Atomic SubSystem: '<S302>/Signal_Latch_On_With_Reset1' */
    /* Logic: '<S385>/OR1' incorporates:
     *  Abs: '<S302>/Abs2'
     *  Constant: '<S375>/Calib'
     *  Logic: '<S302>/Logical Operator2'
     *  Logic: '<S302>/Logical Operator3'
     *  Logic: '<S372>/AND'
     *  Logic: '<S385>/NOT'
     *  Logic: '<S385>/OR'
     *  RelationalOperator: '<S302>/Relational Operator1'
     *  Sum: '<S302>/Sum1'
     *  UnitDelay: '<S302>/Unit Delay'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_p = ((rtb_TmpSignalConversionAtVeSRAR &&
        rtb_TmpSignalConversionAtVeSR_p) || ((rtb_TmpSignalConversionAtVeSRAR ||
        (fabsf(WTAR_ac_DW.UnitDelay_DSTATE_n3[0] - VaWTAC_M_ESCTrqPreGrdLim[0]) >
         KeWTAR_M_ESC_DeltaTrq4Blnd)) && (WTAR_ac_DW.UnitDelay_DSTATE_no2)));

    /* End of Outputs for SubSystem: '<S302>/EdgeRising' */

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_no2 = rtb_TmpSignalConversionAtVeSR_p;

    /* End of Outputs for SubSystem: '<S302>/Signal_Latch_On_With_Reset1' */

    /* Logic: '<S302>/Logical Operator1' */
    VeWTAC_b_ESC_GradLimReset = !rtb_TmpSignalConversionAtVeSR_p;

    /* Outputs for Atomic SubSystem: '<S302>/GradientLimiter_with_Resetable_delay' */
    /* Logic: '<S373>/Logical Operator1' */
    rtb_TmpSignalConversionAtVeSR_p = !VeWTAC_b_ESC_GradLimReset;

    /* Outputs for Atomic SubSystem: '<S373>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S387>/Switch1' */
        if (VeWTAC_b_ESC_GradLimReset)
        {
            /* Switch: '<S326>/Switch4' */
            rtb_Switch9_hi = VaWTAC_M_ESCTrqPreGrdLim[(i)];
        }
        else
        {
            /* Switch: '<S326>/Switch4' incorporates:
             *  UnitDelay: '<S387>/Unit Delay'
             */
            rtb_Switch9_hi = WTAR_ac_DW.UnitDelay_DSTATE_o4[i];
        }

        /* End of Switch: '<S387>/Switch1' */

        /* Sum: '<S373>/Sum2' */
        rtb_VariantMerge_For_Varian_a_0 = VaWTAC_M_ESCTrqPreGrdLim[(i)] -
            rtb_Switch9_hi;

        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S377>/Calib'
         *  RelationalOperator: '<S386>/Relational Operator'
         */
        if (KeWTAR_dM_ESC_RampInTrqRateLU < rtb_VariantMerge_For_Varian_a_0)
        {
            /* Switch: '<S339>/Switch1' */
            rtb_VariantMerge_For_Varian_a_0 = KeWTAR_dM_ESC_RampInTrqRateLU;
        }

        /* End of Switch: '<S386>/Switch1' */

        /* Switch: '<S386>/Switch' incorporates:
         *  Constant: '<S378>/Calib'
         *  RelationalOperator: '<S386>/Relational Operator1'
         */
        if (rtb_VariantMerge_For_Varian_a_0 <= KeWTAR_dM_ESC_RampOutTrqRateLD)
        {
            rtb_VariantMerge_For_Varian_a_0 = KeWTAR_dM_ESC_RampOutTrqRateLD;
        }

        /* End of Switch: '<S386>/Switch' */

        /* Switch: '<S326>/Switch4' incorporates:
         *  Sum: '<S373>/Sum3'
         */
        rtb_Switch9_hi += rtb_VariantMerge_For_Varian_a_0;

        /* Switch: '<S373>/Switch' */
        if (rtb_TmpSignalConversionAtVeSR_p)
        {
            /* Switch: '<S373>/Switch' */
            rtb_Switch1_i0j[i] = rtb_Switch9_hi;
        }
        else
        {
            /* Switch: '<S373>/Switch' */
            rtb_Switch1_i0j[i] = VaWTAC_M_ESCTrqPreGrdLim[(i)];
        }

        /* End of Switch: '<S373>/Switch' */

        /* Switch: '<S387>/Switch3' */
        if (VeWTAC_b_ESC_GradLimReset)
        {
            /* Update for UnitDelay: '<S387>/Unit Delay' */
            WTAR_ac_DW.UnitDelay_DSTATE_o4[i] = VaWTAC_M_ESCTrqPreGrdLim[(i)];
        }
        else
        {
            /* Update for UnitDelay: '<S387>/Unit Delay' */
            WTAR_ac_DW.UnitDelay_DSTATE_o4[i] = rtb_Switch9_hi;
        }

        /* End of Switch: '<S387>/Switch3' */
    }

    /* End of Outputs for SubSystem: '<S373>/Limiter' */
    /* End of Outputs for SubSystem: '<S302>/GradientLimiter_with_Resetable_delay' */

    /* Gain: '<S384>/Gain' */
    VeWTAC_M_ToOITR_ESC_Out = rtb_Switch1_i0j[1];

    /* Gain: '<S383>/Gain' */
    VeWTAC_M_ToHTDR_ESC_Out = rtb_Switch1_i0j[0];

    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S370>/Calib'
     *  Logic: '<S355>/Logical1'
     *  Logic: '<S355>/Logical2'
     *  Logic: '<S355>/Logical3'
     *  MinMax: '<S332>/MinMax'
     *  MinMax: '<S343>/MinMax'
     *  MinMax: '<S344>/MinMax'
     *  MinMax: '<S345>/MinMax'
     *  MinMax: '<S346>/MinMax'
     *  MinMax: '<S347>/MinMax'
     *  MinMax: '<S348>/MinMax'
     *  Product: '<S331>/Multiplication'
     *  Product: '<S331>/Multiplication3'
     *  Product: '<S332>/Multiplication'
     *  Product: '<S332>/Multiplication3'
     *  RelationalOperator: '<S332>/Comparison2'
     *  RelationalOperator: '<S339>/Relational Operator1'
     *  RelationalOperator: '<S355>/Comparison2'
     *  RelationalOperator: '<S355>/Comparison3'
     *  RelationalOperator: '<S355>/Comparison4'
     *  RelationalOperator: '<S355>/Comparison5'
     *  Sum: '<S331>/Subtraction'
     *  Sum: '<S331>/Summation'
     *  Sum: '<S332>/Subtraction'
     *  Sum: '<S332>/Summation'
     *  Switch: '<S326>/Switch4'
     *  Switch: '<S331>/Switch2'
     *  Switch: '<S332>/Switch2'
     *  Switch: '<S332>/Switch3'
     *  Switch: '<S343>/Switch2'
     *  Switch: '<S343>/Switch3'
     *  Switch: '<S344>/Switch2'
     *  Switch: '<S344>/Switch3'
     *  Switch: '<S345>/Switch2'
     *  Switch: '<S345>/Switch3'
     *  Switch: '<S346>/Switch2'
     *  Switch: '<S346>/Switch3'
     *  Switch: '<S347>/Switch2'
     *  Switch: '<S347>/Switch3'
     *  Switch: '<S348>/Switch2'
     *  Switch: '<S348>/Switch3'
     *  Switch: '<S355>/Switch6'
     *  Switch: '<S363>/Switch1'
     *  Switch: '<S363>/Switch2'
     *  Switch: '<S363>/Switch3'
     *  Switch: '<S363>/Switch4'
     *  UnitDelay: '<S301>/Unit Delay1'
     *  UnitDelay: '<S331>/Unit Delay'
     *  UnitDelay: '<S332>/Unit Delay'
     *  UnitDelay: '<S332>/Unit Delay1'
     *  UnitDelay: '<S343>/Unit Delay'
     *  UnitDelay: '<S343>/Unit Delay1'
     *  UnitDelay: '<S344>/Unit Delay'
     *  UnitDelay: '<S344>/Unit Delay1'
     *  UnitDelay: '<S345>/Unit Delay'
     *  UnitDelay: '<S345>/Unit Delay1'
     *  UnitDelay: '<S346>/Unit Delay'
     *  UnitDelay: '<S346>/Unit Delay1'
     *  UnitDelay: '<S347>/Unit Delay'
     *  UnitDelay: '<S347>/Unit Delay1'
     *  UnitDelay: '<S348>/Unit Delay'
     *  UnitDelay: '<S348>/Unit Delay1'
     *  UnitDelay: '<S363>/Unit Delay'
     *  UnitDelay: '<S363>/Unit Delay1'
     */
#if !Rte_SysCon_Variant_WTAR_2

    /* Outputs for Atomic SubSystem: '<S326>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising5' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising3' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising4' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S326>/EdgeFalling1' */
    if (rtb_TmpSignalConversionAtVeAS_j)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_TmpSignalConversionAtVeASLR;
        Gain_pj = rtb_TmpSignalConversionAtVeASLR;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Constant: '<S335>/Calib'
         *  Sum: '<S326>/Sum2'
         */
        rtb_Sum3_aq = VeWTAC_M_ToPrdt_xSEM;
        Gain_pj = VeWTAC_M_ToOITR_ESC_Out + KeWTAR_M_ASL_BldOfst;
    }

    if (rtb_AND_au)
    {
        /* Switch: '<S331>/Switch2' */
        rtb_Switch2_js = rtb_Sum3_aq;
    }
    else
    {
        /* Switch: '<S331>/Switch2' */
        rtb_Switch2_js = WTAR_ac_DW.UnitDelay_DSTATE_i3;
    }

    /* Sum: '<S331>/Summation' incorporates:
     *  Constant: '<S331>/Constant Value'
     */
    VeWTAC_M_ASL_Final_OITR = ((1.0F - rtb_Max_m) * rtb_Switch2_js) + (rtb_Max_m
        * Gain_pj);

    /* Logic: '<S333>/AND' incorporates:
     *  Logic: '<S333>/OR1'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDT_a = ((!rtb_TmpSignalConversionAtVeAS_j) &&
        (WTAR_ac_DW.UnitDelay_DSTATE_kg));

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_kg = rtb_TmpSignalConversionAtVeAS_j;
    if (rtb_TmpSignalConversionAtVeDT_a)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S332>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* MinMax: '<S332>/Max' incorporates:
         *  Constant: '<S338>/Calib'
         */
        rtb_Max_d = fmaxf(KeWTAR_t_dT, rtb_Switch3_k3z);

        /* Outputs for Atomic SubSystem: '<S332>/Protected_Division1' */
        /* Switch: '<S342>/Switch1' incorporates:
         *  Constant: '<S338>/Calib'
         *  Constant: '<S342>/Constant Value'
         *  Constant: '<S342>/Constant Value1'
         *  Constant: '<S342>/Constant Value2'
         *  Constant: '<S342>/Constant Value3'
         *  Logic: '<S342>/AND'
         *  RelationalOperator: '<S342>/Greater Than or Equal '
         *  RelationalOperator: '<S342>/Greater Than or Equal 1'
         *  RelationalOperator: '<S342>/Not Equal'
         *  RelationalOperator: '<S342>/Not Equal1'
         *  Switch: '<S342>/Switch2'
         *  Switch: '<S342>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (rtb_Max_d != 0.0F))
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Product: '<S342>/Division'
             */
            rtb_Max_d = KeWTAR_t_dT / rtb_Max_d;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S342>/Switch2' incorporates:
             *  Constant: '<S342>/MAXFLOAT'
             *  Switch: '<S342>/Switch1'
             */
            rtb_Max_d = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S342>/Switch3' incorporates:
             *  Constant: '<S342>/MINFLOAT'
             *  Switch: '<S342>/Switch1'
             *  Switch: '<S342>/Switch2'
             */
            rtb_Max_d = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Constant: '<S342>/Constant Value4'
             *  Switch: '<S342>/Switch2'
             *  Switch: '<S342>/Switch3'
             */
            rtb_Max_d = 0.0F;
        }

        /* End of Switch: '<S342>/Switch1' */
        /* End of Outputs for SubSystem: '<S332>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S332>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Max_d + WTAR_ac_DW.UnitDelay1_DSTATE_h4;
    }

    /* MinMax: '<S332>/MinMax' incorporates:
     *  Constant: '<S332>/Constant Value2'
     */
    rtb_Max_d = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);

    /* RelationalOperator: '<S332>/Comparison2' incorporates:
     *  Constant: '<S332>/Constant Value1'
     */
    VeWTAC_b_ASL_BldAct_HTDR = (rtb_Max_d < 1.0F);

    /* Switch: '<S319>/Switch3' */
    VeWTAC_M_ToPrdt_xSEM = WTAR_ac_DW.UnitDelay1_DSTATE_py;
    if (rtb_TmpSignalConversionAtVeAS_j)
    {
        /* Switch: '<S326>/Switch4' */
        rtb_Sum3_aq = rtb_TmpSignalConversionAtVeASLR;
        Gain_pj = rtb_TmpSignalConversionAtVeASLR;
    }
    else
    {
        /* Switch: '<S326>/Switch4' incorporates:
         *  Constant: '<S335>/Calib'
         *  Sum: '<S326>/Sum1'
         */
        rtb_Sum3_aq = VeWTAC_M_ToPrdt_xSEM;
        Gain_pj = VeWTAC_M_ToHTDR_ESC_Out + KeWTAR_M_ASL_BldOfst;
    }

    if (rtb_TmpSignalConversionAtVeDT_a)
    {
        /* Switch: '<S332>/Switch2' */
        rtb_Switch2_ik = rtb_Sum3_aq;
    }
    else
    {
        /* Switch: '<S332>/Switch2' */
        rtb_Switch2_ik = WTAR_ac_DW.UnitDelay_DSTATE_ej;
    }

    /* Sum: '<S332>/Summation' incorporates:
     *  Constant: '<S332>/Constant Value'
     */
    VeWTAC_M_ASL_Final_HTDR = ((1.0F - rtb_Max_d) * rtb_Switch2_ik) + (rtb_Max_d
        * Gain_pj);

    /* UnitDelay: '<S363>/Unit Delay' */
    rtb_UnitDelay_p4 = WTAR_ac_DW.UnitDelay_DSTATE_m;

    /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
    /* Logic: '<S355>/Logical3' incorporates:
     *  Constant: '<S355>/Constant Value7'
     *  Constant: '<S371>/Calib'
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_b_WheelBasedinR_ASL = ((KeWTAR_b_OffWheelBasedInR) &&
        (rtb_Switch1_hk[0] < -0.5F));

    /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */

    /* Logic: '<S349>/AND' incorporates:
     *  Logic: '<S349>/OR1'
     *  UnitDelay: '<S349>/Unit Delay'
     */
    rtb_AND_au = ((VeWTAC_b_WheelBasedinR_ASL) &&
                  (!WTAR_ac_DW.UnitDelay_DSTATE_bcw));

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_bcw = VeWTAC_b_WheelBasedinR_ASL;
    if (rtb_AND_au)
    {
        /* Switch: '<S343>/Switch2' */
        rtb_Switch2_gl = rtb_UnitDelay_p4;

        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S343>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S343>/Switch2' */
        rtb_Switch2_gl = WTAR_ac_DW.UnitDelay_DSTATE_it;

        /* Outputs for Atomic SubSystem: '<S343>/Protected_Division1' */
        /* Switch: '<S364>/Switch1' incorporates:
         *  Constant: '<S361>/Calib'
         *  Constant: '<S362>/Calib'
         *  Constant: '<S364>/Constant Value'
         *  Constant: '<S364>/Constant Value1'
         *  Constant: '<S364>/Constant Value2'
         *  Constant: '<S364>/Constant Value3'
         *  Logic: '<S364>/AND'
         *  RelationalOperator: '<S364>/Greater Than or Equal '
         *  RelationalOperator: '<S364>/Greater Than or Equal 1'
         *  RelationalOperator: '<S364>/Not Equal'
         *  RelationalOperator: '<S364>/Not Equal1'
         *  Switch: '<S364>/Switch2'
         *  Switch: '<S364>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (KeWTAR_t_RampMxToMn_R != 0.0F))
        {
            /* Switch: '<S364>/Switch1' incorporates:
             *  Product: '<S364>/Division'
             */
            rtb_Switch1_o1 = KeWTAR_t_dT / KeWTAR_t_RampMxToMn_R;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S364>/Switch2' incorporates:
             *  Constant: '<S364>/MAXFLOAT'
             *  Switch: '<S364>/Switch1'
             */
            rtb_Switch1_o1 = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S364>/Switch3' incorporates:
             *  Constant: '<S364>/MINFLOAT'
             *  Switch: '<S364>/Switch1'
             *  Switch: '<S364>/Switch2'
             */
            rtb_Switch1_o1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S364>/Switch1' incorporates:
             *  Constant: '<S364>/Constant Value4'
             *  Switch: '<S364>/Switch2'
             *  Switch: '<S364>/Switch3'
             */
            rtb_Switch1_o1 = 0.0F;
        }

        /* End of Switch: '<S364>/Switch1' */
        /* End of Outputs for SubSystem: '<S343>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S343>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch1_o1 + WTAR_ac_DW.UnitDelay1_DSTATE_hz;
    }

    /* MinMax: '<S343>/MinMax' incorporates:
     *  Constant: '<S343>/Constant Value2'
     */
    rtb_Switch1_o1 = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);
    if (KeWTAR_b_MinPedalOff)
    {
        /* Switch: '<S355>/Switch6' incorporates:
         *  Constant: '<S355>/Constant Value9'
         */
        VeWTAC_M_MinPedal_Arb_ASL = 100000.0F;
    }
    else
    {
        /* Switch: '<S355>/Switch6' */
        VeWTAC_M_MinPedal_Arb_ASL = rtb_TmpSignalConversionAtVeDTRR;
    }

    /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
    /* Logic: '<S355>/Logical2' incorporates:
     *  Constant: '<S355>/Constant Value5'
     *  Constant: '<S355>/Constant Value6'
     *  Constant: '<S370>/Calib'
     *  Constant: '<S371>/Calib'
     *  Gain: '<S267>/Gain'
     */
    rtb_AND_au = (((KeWTAR_b_OffWheelBasedInR) && (rtb_Switch1_hk[0] > -0.5F)) &&
                  (rtb_Switch1_hk[0] < 0.5F));

    /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */

    /* Logic: '<S351>/AND' incorporates:
     *  Logic: '<S351>/OR1'
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDT_a = (rtb_AND_au &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_jx));

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jx = rtb_AND_au;
    if (rtb_TmpSignalConversionAtVeDT_a)
    {
        /* Switch: '<S345>/Switch2' */
        rtb_Switch2_ou = rtb_UnitDelay_p4;

        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S345>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S345>/Switch2' */
        rtb_Switch2_ou = WTAR_ac_DW.UnitDelay_DSTATE_g3;

        /* Outputs for Atomic SubSystem: '<S345>/Protected_Division1' */
        /* Switch: '<S366>/Switch1' incorporates:
         *  Constant: '<S360>/Calib'
         *  Constant: '<S362>/Calib'
         *  Constant: '<S366>/Constant Value'
         *  Constant: '<S366>/Constant Value1'
         *  Constant: '<S366>/Constant Value2'
         *  Constant: '<S366>/Constant Value3'
         *  Logic: '<S366>/AND'
         *  RelationalOperator: '<S366>/Greater Than or Equal '
         *  RelationalOperator: '<S366>/Greater Than or Equal 1'
         *  RelationalOperator: '<S366>/Not Equal'
         *  RelationalOperator: '<S366>/Not Equal1'
         *  Switch: '<S366>/Switch2'
         *  Switch: '<S366>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (KeWTAR_t_RampMxToMn_N != 0.0F))
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Product: '<S366>/Division'
             */
            rtb_Switch1_ev = KeWTAR_t_dT / KeWTAR_t_RampMxToMn_N;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S366>/Switch2' incorporates:
             *  Constant: '<S366>/MAXFLOAT'
             *  Switch: '<S366>/Switch1'
             */
            rtb_Switch1_ev = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S366>/Switch3' incorporates:
             *  Constant: '<S366>/MINFLOAT'
             *  Switch: '<S366>/Switch1'
             *  Switch: '<S366>/Switch2'
             */
            rtb_Switch1_ev = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Constant: '<S366>/Constant Value4'
             *  Switch: '<S366>/Switch2'
             *  Switch: '<S366>/Switch3'
             */
            rtb_Switch1_ev = 0.0F;
        }

        /* End of Switch: '<S366>/Switch1' */
        /* End of Outputs for SubSystem: '<S345>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S345>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch1_ev + WTAR_ac_DW.UnitDelay1_DSTATE_dx;
    }

    /* MinMax: '<S345>/MinMax' incorporates:
     *  Constant: '<S345>/Constant Value2'
     */
    rtb_Switch1_ev = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);

    /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
    /* Logic: '<S355>/Logical1' incorporates:
     *  Constant: '<S355>/Constant Value4'
     *  Constant: '<S371>/Calib'
     *  Gain: '<S267>/Gain'
     */
    rtb_TmpSignalConversionAtVeDT_a = ((KeWTAR_b_OffWheelBasedInR) &&
        (rtb_Switch1_hk[0] > 0.5F));

    /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */

    /* Logic: '<S353>/AND' incorporates:
     *  Logic: '<S353>/OR1'
     *  UnitDelay: '<S353>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_p = (rtb_TmpSignalConversionAtVeDT_a &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_eje));

    /* Update for UnitDelay: '<S353>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_eje = rtb_TmpSignalConversionAtVeDT_a;
    if (rtb_TmpSignalConversionAtVeSR_p)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S344>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S344>/Switch2' */
        rtb_UnitDelay_p4 = WTAR_ac_DW.UnitDelay_DSTATE_h;

        /* Outputs for Atomic SubSystem: '<S344>/Protected_Division1' */
        /* Switch: '<S365>/Switch1' incorporates:
         *  Constant: '<S359>/Calib'
         *  Constant: '<S362>/Calib'
         *  Constant: '<S365>/Constant Value'
         *  Constant: '<S365>/Constant Value1'
         *  Constant: '<S365>/Constant Value2'
         *  Constant: '<S365>/Constant Value3'
         *  Logic: '<S365>/AND'
         *  RelationalOperator: '<S365>/Greater Than or Equal '
         *  RelationalOperator: '<S365>/Greater Than or Equal 1'
         *  RelationalOperator: '<S365>/Not Equal'
         *  RelationalOperator: '<S365>/Not Equal1'
         *  Switch: '<S365>/Switch2'
         *  Switch: '<S365>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (KeWTAR_t_RampMxToMn_D != 0.0F))
        {
            /* Switch: '<S365>/Switch1' incorporates:
             *  Product: '<S365>/Division'
             */
            rtb_Switch1_as = KeWTAR_t_dT / KeWTAR_t_RampMxToMn_D;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S365>/Switch2' incorporates:
             *  Constant: '<S365>/MAXFLOAT'
             *  Switch: '<S365>/Switch1'
             */
            rtb_Switch1_as = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S365>/Switch3' incorporates:
             *  Constant: '<S365>/MINFLOAT'
             *  Switch: '<S365>/Switch1'
             *  Switch: '<S365>/Switch2'
             */
            rtb_Switch1_as = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S365>/Switch1' incorporates:
             *  Constant: '<S365>/Constant Value4'
             *  Switch: '<S365>/Switch2'
             *  Switch: '<S365>/Switch3'
             */
            rtb_Switch1_as = 0.0F;
        }

        /* End of Switch: '<S365>/Switch1' */
        /* End of Outputs for SubSystem: '<S344>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S344>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch1_as + WTAR_ac_DW.UnitDelay1_DSTATE_mr;
    }

    /* MinMax: '<S344>/MinMax' incorporates:
     *  Constant: '<S344>/Constant Value2'
     */
    rtb_Switch1_as = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);
    if (VeWTAC_b_WheelBasedinR_ASL)
    {
        /* Switch: '<S363>/Switch2' incorporates:
         *  Constant: '<S343>/Constant Value'
         *  Product: '<S343>/Multiplication'
         *  Product: '<S343>/Multiplication3'
         *  Sum: '<S343>/Subtraction'
         *  Sum: '<S343>/Summation'
         */
        VeWTAR_M_Mx_ASL = ((1.0F - rtb_Switch1_o1) * rtb_Switch2_gl) +
            (rtb_Switch1_o1 * VeWTAC_M_MinPedal_Arb_ASL);
    }
    else if (rtb_AND_au)
    {
        /* Switch: '<S363>/Switch3' incorporates:
         *  Constant: '<S345>/Constant Value'
         *  Product: '<S345>/Multiplication'
         *  Product: '<S345>/Multiplication3'
         *  Sum: '<S345>/Subtraction'
         *  Sum: '<S345>/Summation'
         *  Switch: '<S363>/Switch2'
         */
        VeWTAR_M_Mx_ASL = ((1.0F - rtb_Switch1_ev) * rtb_Switch2_ou) +
            (rtb_Switch1_ev * rtb_UnitDelay3_kz);
    }
    else
    {
        /* Switch: '<S363>/Switch2' incorporates:
         *  Constant: '<S344>/Constant Value'
         *  Product: '<S344>/Multiplication'
         *  Product: '<S344>/Multiplication3'
         *  Sum: '<S344>/Subtraction'
         *  Sum: '<S344>/Summation'
         *  Switch: '<S363>/Switch3'
         */
        VeWTAR_M_Mx_ASL = ((1.0F - rtb_Switch1_as) * rtb_UnitDelay_p4) +
            (rtb_Switch1_as * rtb_UnitDelay3_kz);
    }

    /* UnitDelay: '<S363>/Unit Delay1' incorporates:
     *  Switch: '<S363>/Switch3'
     */
    rtb_UnitDelay1_oi = WTAR_ac_DW.UnitDelay1_DSTATE_dk;

    /* Logic: '<S350>/AND' incorporates:
     *  Logic: '<S350>/OR1'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_p = ((VeWTAC_b_WheelBasedinR_ASL) &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_mt));

    /* Update for UnitDelay: '<S350>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_mt = VeWTAC_b_WheelBasedinR_ASL;
    if (rtb_TmpSignalConversionAtVeSR_p)
    {
        /* Switch: '<S346>/Switch2' */
        rtb_Switch3_mt = rtb_UnitDelay1_oi;

        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S346>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S346>/Switch2' */
        rtb_Switch3_mt = WTAR_ac_DW.UnitDelay_DSTATE_ioq;

        /* Outputs for Atomic SubSystem: '<S346>/Protected_Division1' */
        /* Switch: '<S367>/Switch1' incorporates:
         *  Constant: '<S358>/Calib'
         *  Constant: '<S362>/Calib'
         *  Constant: '<S367>/Constant Value'
         *  Constant: '<S367>/Constant Value1'
         *  Constant: '<S367>/Constant Value2'
         *  Constant: '<S367>/Constant Value3'
         *  Logic: '<S367>/AND'
         *  RelationalOperator: '<S367>/Greater Than or Equal '
         *  RelationalOperator: '<S367>/Greater Than or Equal 1'
         *  RelationalOperator: '<S367>/Not Equal'
         *  RelationalOperator: '<S367>/Not Equal1'
         *  Switch: '<S367>/Switch2'
         *  Switch: '<S367>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (KeWTAR_t_RampMnToMx_R != 0.0F))
        {
            /* Switch: '<S367>/Switch1' incorporates:
             *  Product: '<S367>/Division'
             */
            rtb_Switch1_hw = KeWTAR_t_dT / KeWTAR_t_RampMnToMx_R;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S367>/Switch2' incorporates:
             *  Constant: '<S367>/MAXFLOAT'
             *  Switch: '<S367>/Switch1'
             */
            rtb_Switch1_hw = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S367>/Switch3' incorporates:
             *  Constant: '<S367>/MINFLOAT'
             *  Switch: '<S367>/Switch1'
             *  Switch: '<S367>/Switch2'
             */
            rtb_Switch1_hw = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S367>/Switch1' incorporates:
             *  Constant: '<S367>/Constant Value4'
             *  Switch: '<S367>/Switch2'
             *  Switch: '<S367>/Switch3'
             */
            rtb_Switch1_hw = 0.0F;
        }

        /* End of Switch: '<S367>/Switch1' */
        /* End of Outputs for SubSystem: '<S346>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S346>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch1_hw + WTAR_ac_DW.UnitDelay1_DSTATE_po;
    }

    /* MinMax: '<S346>/MinMax' incorporates:
     *  Constant: '<S346>/Constant Value2'
     */
    rtb_Switch1_hw = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);

    /* Logic: '<S352>/AND' incorporates:
     *  Logic: '<S352>/OR1'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_p = (rtb_AND_au &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_kr));

    /* Update for UnitDelay: '<S352>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_kr = rtb_AND_au;
    if (rtb_TmpSignalConversionAtVeSR_p)
    {
        /* Switch: '<S348>/Switch2' */
        rtb_Switch2_o0 = rtb_UnitDelay1_oi;

        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S348>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S348>/Switch2' */
        rtb_Switch2_o0 = WTAR_ac_DW.UnitDelay_DSTATE_lm;

        /* Outputs for Atomic SubSystem: '<S348>/Protected_Division1' */
        /* Switch: '<S369>/Switch1' incorporates:
         *  Constant: '<S357>/Calib'
         *  Constant: '<S362>/Calib'
         *  Constant: '<S369>/Constant Value'
         *  Constant: '<S369>/Constant Value1'
         *  Constant: '<S369>/Constant Value2'
         *  Constant: '<S369>/Constant Value3'
         *  Logic: '<S369>/AND'
         *  RelationalOperator: '<S369>/Greater Than or Equal '
         *  RelationalOperator: '<S369>/Greater Than or Equal 1'
         *  RelationalOperator: '<S369>/Not Equal'
         *  RelationalOperator: '<S369>/Not Equal1'
         *  Switch: '<S369>/Switch2'
         *  Switch: '<S369>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (KeWTAR_t_RampMnToMx_N != 0.0F))
        {
            /* Switch: '<S369>/Switch1' incorporates:
             *  Product: '<S369>/Division'
             */
            rtb_Switch1_how = KeWTAR_t_dT / KeWTAR_t_RampMnToMx_N;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S369>/Switch2' incorporates:
             *  Constant: '<S369>/MAXFLOAT'
             *  Switch: '<S369>/Switch1'
             */
            rtb_Switch1_how = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S369>/Switch3' incorporates:
             *  Constant: '<S369>/MINFLOAT'
             *  Switch: '<S369>/Switch1'
             *  Switch: '<S369>/Switch2'
             */
            rtb_Switch1_how = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S369>/Switch1' incorporates:
             *  Constant: '<S369>/Constant Value4'
             *  Switch: '<S369>/Switch2'
             *  Switch: '<S369>/Switch3'
             */
            rtb_Switch1_how = 0.0F;
        }

        /* End of Switch: '<S369>/Switch1' */
        /* End of Outputs for SubSystem: '<S348>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S348>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch1_how + WTAR_ac_DW.UnitDelay1_DSTATE_eo;
    }

    /* MinMax: '<S348>/MinMax' incorporates:
     *  Constant: '<S348>/Constant Value2'
     */
    rtb_Switch1_how = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);

    /* Logic: '<S354>/AND' incorporates:
     *  Logic: '<S354>/OR1'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_p = (rtb_TmpSignalConversionAtVeDT_a &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_p3w));

    /* Update for UnitDelay: '<S354>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_p3w = rtb_TmpSignalConversionAtVeDT_a;
    if (rtb_TmpSignalConversionAtVeSR_p)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S347>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S347>/Switch2' */
        rtb_UnitDelay1_oi = WTAR_ac_DW.UnitDelay_DSTATE_nr;

        /* Outputs for Atomic SubSystem: '<S347>/Protected_Division1' */
        /* Switch: '<S368>/Switch1' incorporates:
         *  Constant: '<S356>/Calib'
         *  Constant: '<S362>/Calib'
         *  Constant: '<S368>/Constant Value'
         *  Constant: '<S368>/Constant Value1'
         *  Constant: '<S368>/Constant Value2'
         *  Constant: '<S368>/Constant Value3'
         *  Logic: '<S368>/AND'
         *  RelationalOperator: '<S368>/Greater Than or Equal '
         *  RelationalOperator: '<S368>/Greater Than or Equal 1'
         *  RelationalOperator: '<S368>/Not Equal'
         *  RelationalOperator: '<S368>/Not Equal1'
         *  Switch: '<S368>/Switch2'
         *  Switch: '<S368>/Switch3'
         */
        if ((KeWTAR_t_dT != 0.0F) && (KeWTAR_t_RampMnToMx_D != 0.0F))
        {
            /* Switch: '<S368>/Switch1' incorporates:
             *  Product: '<S368>/Division'
             */
            rtb_Switch1_d3 = KeWTAR_t_dT / KeWTAR_t_RampMnToMx_D;
        }
        else if (KeWTAR_t_dT > 0.0F)
        {
            /* Switch: '<S368>/Switch2' incorporates:
             *  Constant: '<S368>/MAXFLOAT'
             *  Switch: '<S368>/Switch1'
             */
            rtb_Switch1_d3 = 3.402823466E+38F;
        }
        else if (KeWTAR_t_dT < 0.0F)
        {
            /* Switch: '<S368>/Switch3' incorporates:
             *  Constant: '<S368>/MINFLOAT'
             *  Switch: '<S368>/Switch1'
             *  Switch: '<S368>/Switch2'
             */
            rtb_Switch1_d3 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S368>/Switch1' incorporates:
             *  Constant: '<S368>/Constant Value4'
             *  Switch: '<S368>/Switch2'
             *  Switch: '<S368>/Switch3'
             */
            rtb_Switch1_d3 = 0.0F;
        }

        /* End of Switch: '<S368>/Switch1' */
        /* End of Outputs for SubSystem: '<S347>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S347>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch1_d3 + WTAR_ac_DW.UnitDelay1_DSTATE_g4;
    }

    /* MinMax: '<S347>/MinMax' incorporates:
     *  Constant: '<S347>/Constant Value2'
     */
    rtb_Switch1_d3 = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);
    if (VeWTAC_b_WheelBasedinR_ASL)
    {
        /* Switch: '<S363>/Switch1' incorporates:
         *  Constant: '<S346>/Constant Value'
         *  Product: '<S346>/Multiplication'
         *  Product: '<S346>/Multiplication3'
         *  Sum: '<S346>/Subtraction'
         *  Sum: '<S346>/Summation'
         */
        VeWTAR_M_Mn_ASL = ((1.0F - rtb_Switch1_hw) * rtb_Switch3_mt) +
            (rtb_Switch1_hw * rtb_UnitDelay3_kz);
    }
    else if (rtb_AND_au)
    {
        /* Switch: '<S363>/Switch4' incorporates:
         *  Constant: '<S348>/Constant Value'
         *  Product: '<S348>/Multiplication'
         *  Product: '<S348>/Multiplication3'
         *  Sum: '<S348>/Subtraction'
         *  Sum: '<S348>/Summation'
         *  Switch: '<S363>/Switch1'
         */
        VeWTAR_M_Mn_ASL = ((1.0F - rtb_Switch1_how) * rtb_Switch2_o0) +
            (rtb_Switch1_how * rtb_TmpSignalConversionAtVeDTRR);
    }
    else
    {
        /* Switch: '<S363>/Switch1' incorporates:
         *  Constant: '<S347>/Constant Value'
         *  Product: '<S347>/Multiplication'
         *  Product: '<S347>/Multiplication3'
         *  Sum: '<S347>/Subtraction'
         *  Sum: '<S347>/Summation'
         *  Switch: '<S363>/Switch4'
         */
        VeWTAR_M_Mn_ASL = ((1.0F - rtb_Switch1_d3) * rtb_UnitDelay1_oi) +
            (rtb_Switch1_d3 * rtb_TmpSignalConversionAtVeDTRR);
    }

    /* Switch: '<S339>/Switch1' incorporates:
     *  RelationalOperator: '<S339>/Relational Operator'
     *  Switch: '<S363>/Switch4'
     */
    if (VeWTAR_M_Mx_ASL < VeWTAC_M_ASL_Final_HTDR)
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Sum2_lf[0] = VeWTAR_M_Mx_ASL;
    }
    else
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Sum2_lf[0] = VeWTAC_M_ASL_Final_HTDR;
    }

    if (VeWTAR_M_Mx_ASL < VeWTAC_M_ASL_Final_OITR)
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Sum2_lf[1] = VeWTAR_M_Mx_ASL;
    }
    else
    {
        /* Switch: '<S339>/Switch1' */
        rtb_Sum2_lf[1] = VeWTAC_M_ASL_Final_OITR;
    }

    /* End of Switch: '<S339>/Switch1' */
    for (i = 0; i < 2; i++)
    {
        rtb_VariantMerge_For_Varian_a_0 = rtb_Sum2_lf[i];

        /* Switch: '<S339>/Switch' incorporates:
         *  RelationalOperator: '<S339>/Relational Operator1'
         */
        if (rtb_VariantMerge_For_Varian_a_0 > VeWTAR_M_Mn_ASL)
        {
            /* Switch: '<S339>/Switch' */
            rtb_Switch_as[i] = rtb_VariantMerge_For_Varian_a_0;
        }
        else
        {
            /* Switch: '<S339>/Switch' */
            rtb_Switch_as[i] = VeWTAR_M_Mn_ASL;
        }

        /* End of Switch: '<S339>/Switch' */
    }

    /* End of Outputs for SubSystem: '<S326>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S340>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S340>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S340>/EdgeRising4' */
    /* End of Outputs for SubSystem: '<S340>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S340>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S340>/EdgeRising5' */
    /* End of Outputs for SubSystem: '<S326>/Limiter1' */
#endif

    /* End of Switch: '<S326>/Switch1' */
    for (i = 0; i < 2; i++)
    {
        /* SignalConversion generated from: '<S301>/VariantSource' */
#if Rte_SysCon_Variant_WTAR_2

        /* VariantMerge generated from: '<S301>/VariantSource' */
        rtb_VariantMerge_For_Variant__f[i] = 99999.0F;

#else

        /* VariantMerge generated from: '<S301>/VariantSource' incorporates:
         *  SignalConversion generated from: '<S301>/VariantSource'
         */
        rtb_VariantMerge_For_Variant__f[i] = rtb_Switch_as[i];

#endif

        /* End of SignalConversion generated from: '<S301>/VariantSource' */
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* MinMax: '<S301>/MinMax1' incorporates:
     *  MinMax: '<S301>/MinMax3'
     *  SignalConversion generated from: '<S5>/VeWTAC_M_FrntAxleMinRq'
     */
    WTAR_ac_B.VeWTAR_M_OutTrqReqHTDR_ASL = fminf(fmaxf
        (rtb_VariantMerge_For_Variant__f[0], rtb_Gain), VeWTAC_M_ToHTDR_ESC_Out);

    /* Gain: '<S330>/Gain' */
    VeWTAR_M_ASL_PIDTrq_OITR = rtb_VariantMerge_For_Variant__f[1];

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* MinMax: '<S301>/MinMax5' incorporates:
     *  MinMax: '<S301>/MinMax4'
     *  SignalConversion generated from: '<S5>/VeWTAC_M_FrntAxleMinRq'
     */
    VeWTAR_M_OutTrqReqOITR_ASL = fminf(fmaxf(rtb_Gain, VeWTAR_M_ASL_PIDTrq_OITR),
        VeWTAC_M_ToOITR_ESC_Out);

    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S327>/Calib'
     */
    if (KeWTAR_b_ASLR_Lim4OITR_Ena)
    {
        /* Switch: '<S301>/Switch1' */
        rtb_UnitDelay3_kz = VeWTAR_M_OutTrqReqOITR_ASL;
    }
    else
    {
        /* Switch: '<S301>/Switch1' */
        rtb_UnitDelay3_kz = VeWTAC_M_ToOITR_ESC_Out;
    }

    /* End of Switch: '<S301>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Product: '<S718>/Product3' incorporates:
     *  Gain: '<S267>/Gain'
     */
    rtb_Switch3_k3z = rtb_Switch1_hk[0] * VeWTAC_M_SumMaxTrqDsrd;

    /* RelationalOperator: '<S718>/Relational Operator3' incorporates:
     *  Constant: '<S718>/Constant Value1'
     *  Gain: '<S267>/Gain'
     */
    rtb_AND_au = (rtb_Switch1_hk[0] > 0.5F);

    /* Product: '<S718>/Product4' incorporates:
     *  Gain: '<S267>/Gain'
     */
    rtb_Switch13 = rtb_Switch1_hk[0] * VeWTAC_M_MinPdl4DifTorq;

    /* Switch: '<S718>/Switch2' incorporates:
     *  Constant: '<S726>/Calib'
     *  Switch: '<S718>/Switch1'
     */
    if (KeWTAR_b_TactLimMaxEna)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Inport: '<Root>/VeAXLR_M_ToMaxArb_Axle'
         */
        (void)Rte_Read_VeAXLR_M_ToMaxArb_Axle_Value(&VeWTAC_M_ToPrdt_xSEM);
    }
    else if (rtb_AND_au)
    {
        /* Switch: '<S718>/Switch1' incorporates:
         *  Switch: '<S319>/Switch3'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch3_k3z;
    }
    else
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Switch: '<S718>/Switch1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Switch13;
    }

    /* End of Switch: '<S718>/Switch2' */

    /* Switch: '<S718>/Switch3' incorporates:
     *  Constant: '<S727>/Calib'
     *  Switch: '<S718>/Switch4'
     */
    if (KeWTAR_b_TactLimMinEna)
    {
        /* Switch: '<S319>/Switch14' incorporates:
         *  Inport: '<Root>/VeAXLR_M_ToMinArb_Axle'
         */
        (void)Rte_Read_VeAXLR_M_ToMinArb_Axle_Value(&rtb_Switch14);
    }
    else if (rtb_AND_au)
    {
        /* Switch: '<S718>/Switch4' incorporates:
         *  Switch: '<S319>/Switch14'
         */
        rtb_Switch14 = rtb_Switch13;
    }
    else
    {
        /* Switch: '<S319>/Switch14' incorporates:
         *  Switch: '<S718>/Switch4'
         */
        rtb_Switch14 = rtb_Switch3_k3z;
    }

    /* End of Switch: '<S718>/Switch3' */

    /* Switch: '<S718>/Switch5' incorporates:
     *  Constant: '<S725>/Calib'
     */
    if (KeWTAR_b_ArbTrqSel4TTC)
    {
        rtb_Switch13 = rtb_VariantMerge_For_Variant__a[0];
    }
    else
    {
        rtb_Switch13 = rtb_VariantMerge_For_Variant__a[2];
    }

    /* End of Switch: '<S718>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* MinMax: '<S718>/MinMax1' incorporates:
     *  Gain: '<S267>/Gain'
     *  MinMax: '<S718>/MinMax2'
     *  Product: '<S718>/Product2'
     */
    rtb_Switch3_k3z = fmaxf(fminf(VeWTAC_M_ToPrdt_xSEM, rtb_Switch13 *
        rtb_Switch1_hk[0]), rtb_Switch14);

    /* Switch: '<S319>/Switch3' incorporates:
     *  Gain: '<S267>/Gain'
     *  MinMax: '<S718>/MinMax4'
     *  Product: '<S718>/Product1'
     */
    VeWTAC_M_ToPrdt_xSEM = fminf(VeWTAC_M_ToPrdt_xSEM, rtb_Switch1_hk[0] *
        rtb_VariantMerge_For_Variant__a[5]);

    /* MinMax: '<S718>/MinMax3' */
    VeWTAC_M_DrvReqMd_xDMPI = fmaxf(VeWTAC_M_ToPrdt_xSEM, rtb_Switch14);

    /* Outputs for Atomic SubSystem: '<S305>/EdgeBi2' */
    /* Outputs for Atomic SubSystem: '<S305>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S305>/EdgeBi' */
    /* RelationalOperator: '<S305>/Relational Operator2' incorporates:
     *  Logic: '<S305>/Logical Operator'
     *  Logic: '<S305>/Logical Operator1'
     *  Logic: '<S305>/Logical Operator2'
     *  Logic: '<S305>/Logical Operator3'
     *  MinMax: '<S406>/MinMax'
     *  MinMax: '<S407>/MinMax'
     *  Product: '<S406>/Multiplication'
     *  Product: '<S406>/Multiplication3'
     *  Product: '<S407>/Multiplication'
     *  Product: '<S407>/Multiplication3'
     *  RelationalOperator: '<S305>/Relational Operator'
     *  Sum: '<S406>/Subtraction'
     *  Sum: '<S406>/Summation'
     *  Sum: '<S407>/Subtraction'
     *  Sum: '<S407>/Summation'
     *  Switch: '<S402>/Switch'
     *  Switch: '<S403>/Switch'
     *  Switch: '<S406>/Switch2'
     *  Switch: '<S406>/Switch3'
     *  Switch: '<S407>/Switch2'
     *  Switch: '<S407>/Switch3'
     *  UnitDelay: '<S305>/Unit Delay'
     *  UnitDelay: '<S305>/Unit Delay1'
     *  UnitDelay: '<S406>/Unit Delay'
     *  UnitDelay: '<S406>/Unit Delay1'
     *  UnitDelay: '<S407>/Unit Delay'
     *  UnitDelay: '<S407>/Unit Delay1'
     */
#if Rte_SysCon_Variant_WTAR_9

    /* RelationalOperator: '<S305>/Relational Operator2' */
    VeWTAC_b_DMPI_D_TTC_Actv = (rtb_Switch3_k3z >
        rtb_TmpSignalConversionAtVeSCCR);

    /* RelationalOperator: '<S396>/Not Equal' incorporates:
     *  UnitDelay: '<S396>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSR_p = (VeWTAC_b_DMPI_D_TTC_Actv !=
        WTAR_ac_DW.UnitDelay_DSTATE_na);

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_na = VeWTAC_b_DMPI_D_TTC_Actv;

    /* RelationalOperator: '<S305>/Relational Operator' */
    VeWTAC_b_DMPI_DrvMdReq_Actv = (rtb_TmpSignalConversionAtVeSCCR <
        VeWTAC_M_DrvReqMd_xDMPI);

    /* RelationalOperator: '<S397>/Not Equal' incorporates:
     *  UnitDelay: '<S397>/Unit Delay'
     */
    rtb_AND_au = (VeWTAC_b_DMPI_DrvMdReq_Actv != WTAR_ac_DW.UnitDelay_DSTATE_b5);

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_b5 = VeWTAC_b_DMPI_DrvMdReq_Actv;

    /* RelationalOperator: '<S398>/Not Equal' incorporates:
     *  UnitDelay: '<S398>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDT_a = (rtb_TmpSignalConversionAtVeSC_h !=
        WTAR_ac_DW.UnitDelay_DSTATE_dg);

    /* Update for UnitDelay: '<S398>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_dg = rtb_TmpSignalConversionAtVeSC_h;

    /* RelationalOperator: '<S319>/Comparison12' */
    rtb_Comparison12 = (rtb_TmpSignalConversionAtVeSR_p ||
                        rtb_TmpSignalConversionAtVeDT_a);

    /* UnitDelay: '<S795>/Unit Delay' */
    rtb_TmpSignalConversionAtVeDT_a = (rtb_TmpSignalConversionAtVeDT_a ||
        rtb_AND_au);
    if ((VeWTAC_b_DMPI_D_TTC_Actv) || rtb_TmpSignalConversionAtVeSC_h)
    {
        /* Switch: '<S404>/Switch' */
        if (rtb_TmpSignalConversionAtVeSC_h)
        {
            /* Switch: '<S402>/Switch' incorporates:
             *  Constant: '<S399>/Calib'
             */
            rtb_Switch_as[0] = WTAR_ac_DW.UnitDelay_DSTATE_o;
            rtb_Switch_as[1] = KeWTAR_M_AxleTrq_xDMPI_SNAOvrd;
        }
        else
        {
            /* Switch: '<S402>/Switch' */
            rtb_Switch_as[0] = rtb_Switch3_k3z;
            rtb_Switch_as[1] = rtb_TmpSignalConversionAtVeSCCR;
        }

        /* End of Switch: '<S404>/Switch' */
    }
    else
    {
        /* Switch: '<S402>/Switch' incorporates:
         *  Constant: '<S400>/Calib'
         *  Sum: '<S305>/Add'
         */
        rtb_Switch_as[0] = WTAR_ac_DW.UnitDelay_DSTATE_o;
        rtb_Switch_as[1] = rtb_Switch3_k3z + KeWTAR_M_DMPI_TgtOffset;
    }

    if ((VeWTAC_b_DMPI_DrvMdReq_Actv) || rtb_TmpSignalConversionAtVeSC_h)
    {
        /* Switch: '<S405>/Switch' */
        if (rtb_TmpSignalConversionAtVeSC_h)
        {
            /* Switch: '<S403>/Switch' incorporates:
             *  Constant: '<S399>/Calib'
             */
            rtb_Sum3_aq = WTAR_ac_DW.UnitDelay1_DSTATE_fj;
            Gain_pj = KeWTAR_M_AxleTrq_xDMPI_SNAOvrd;
        }
        else
        {
            /* Switch: '<S403>/Switch' */
            rtb_Sum3_aq = VeWTAC_M_DrvReqMd_xDMPI;
            Gain_pj = rtb_TmpSignalConversionAtVeSCCR;
        }

        /* End of Switch: '<S405>/Switch' */
    }
    else
    {
        /* Switch: '<S403>/Switch' incorporates:
         *  Constant: '<S400>/Calib'
         *  Sum: '<S305>/Add1'
         */
        rtb_Sum3_aq = WTAR_ac_DW.UnitDelay1_DSTATE_fj;
        Gain_pj = VeWTAC_M_DrvReqMd_xDMPI + KeWTAR_M_DMPI_TgtOffset;
    }

    if (rtb_Comparison12)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S406>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;

        /* Switch: '<S406>/Switch2' */
        rtb_Switch2_bqf = rtb_Switch_as[0];
    }
    else
    {
        /* MinMax: '<S406>/Max' incorporates:
         *  Abs: '<S406>/Abs'
         *  Constant: '<S401>/Calib'
         *  Sum: '<S406>/Summation2'
         */
        rtb_Max_ob = fmaxf(KeWTAR_dM_DMPI_BlendRate, fabsf
                           (WTAR_ac_DW.UnitDelay_DSTATE_ih - rtb_Switch_as[1]));

        /* Outputs for Atomic SubSystem: '<S406>/Protected_Division1' */
        /* Switch: '<S408>/Switch1' incorporates:
         *  Constant: '<S401>/Calib'
         *  Constant: '<S408>/Constant Value'
         *  Constant: '<S408>/Constant Value1'
         *  Constant: '<S408>/Constant Value2'
         *  Constant: '<S408>/Constant Value3'
         *  Logic: '<S408>/AND'
         *  RelationalOperator: '<S408>/Greater Than or Equal '
         *  RelationalOperator: '<S408>/Greater Than or Equal 1'
         *  RelationalOperator: '<S408>/Not Equal'
         *  RelationalOperator: '<S408>/Not Equal1'
         *  Switch: '<S408>/Switch2'
         *  Switch: '<S408>/Switch3'
         */
        if ((KeWTAR_dM_DMPI_BlendRate != 0.0F) && (rtb_Max_ob != 0.0F))
        {
            /* Switch: '<S408>/Switch1' incorporates:
             *  Product: '<S408>/Division'
             */
            rtb_Max_ob = KeWTAR_dM_DMPI_BlendRate / rtb_Max_ob;
        }
        else if (KeWTAR_dM_DMPI_BlendRate > 0.0F)
        {
            /* Switch: '<S408>/Switch2' incorporates:
             *  Constant: '<S408>/MAXFLOAT'
             *  Switch: '<S408>/Switch1'
             */
            rtb_Max_ob = 3.402823466E+38F;
        }
        else if (KeWTAR_dM_DMPI_BlendRate < 0.0F)
        {
            /* Switch: '<S408>/Switch3' incorporates:
             *  Constant: '<S408>/MINFLOAT'
             *  Switch: '<S408>/Switch1'
             *  Switch: '<S408>/Switch2'
             */
            rtb_Max_ob = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S408>/Switch1' incorporates:
             *  Constant: '<S408>/Constant Value4'
             *  Switch: '<S408>/Switch2'
             *  Switch: '<S408>/Switch3'
             */
            rtb_Max_ob = 0.0F;
        }

        /* End of Switch: '<S408>/Switch1' */
        /* End of Outputs for SubSystem: '<S406>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S406>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Max_ob + WTAR_ac_DW.UnitDelay1_DSTATE_kis;

        /* Switch: '<S406>/Switch2' */
        rtb_Switch2_bqf = WTAR_ac_DW.UnitDelay_DSTATE_ih;
    }

    /* MinMax: '<S406>/MinMax' incorporates:
     *  Constant: '<S406>/Constant Value2'
     */
    rtb_Max_ob = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);

    /* Sum: '<S406>/Summation' incorporates:
     *  Constant: '<S406>/Constant Value'
     */
    rtb_Summation_la = ((1.0F - rtb_Max_ob) * rtb_Switch2_bqf) + (rtb_Max_ob *
        rtb_Switch_as[1]);
    if (rtb_TmpSignalConversionAtVeDT_a)
    {
        /* Switch: '<S319>/Switch3' incorporates:
         *  Constant: '<S407>/Constant Value4'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;

        /* Switch: '<S407>/Switch2' */
        rtb_Switch2_jq = rtb_Sum3_aq;
    }
    else
    {
        /* MinMax: '<S407>/Max' incorporates:
         *  Abs: '<S407>/Abs'
         *  Constant: '<S401>/Calib'
         *  Sum: '<S407>/Summation2'
         */
        rtb_Max = fmaxf(KeWTAR_dM_DMPI_BlendRate, fabsf
                        (WTAR_ac_DW.UnitDelay_DSTATE_b2 - Gain_pj));

        /* Outputs for Atomic SubSystem: '<S407>/Protected_Division1' */
        /* Switch: '<S409>/Switch1' incorporates:
         *  Constant: '<S401>/Calib'
         *  Constant: '<S409>/Constant Value'
         *  Constant: '<S409>/Constant Value1'
         *  Constant: '<S409>/Constant Value2'
         *  Constant: '<S409>/Constant Value3'
         *  Logic: '<S409>/AND'
         *  RelationalOperator: '<S409>/Greater Than or Equal '
         *  RelationalOperator: '<S409>/Greater Than or Equal 1'
         *  RelationalOperator: '<S409>/Not Equal'
         *  RelationalOperator: '<S409>/Not Equal1'
         *  Switch: '<S409>/Switch2'
         *  Switch: '<S409>/Switch3'
         */
        if ((KeWTAR_dM_DMPI_BlendRate != 0.0F) && (rtb_Max != 0.0F))
        {
            /* Switch: '<S409>/Switch1' incorporates:
             *  Product: '<S409>/Division'
             */
            rtb_Max = KeWTAR_dM_DMPI_BlendRate / rtb_Max;
        }
        else if (KeWTAR_dM_DMPI_BlendRate > 0.0F)
        {
            /* Switch: '<S409>/Switch2' incorporates:
             *  Constant: '<S409>/MAXFLOAT'
             *  Switch: '<S409>/Switch1'
             */
            rtb_Max = 3.402823466E+38F;
        }
        else if (KeWTAR_dM_DMPI_BlendRate < 0.0F)
        {
            /* Switch: '<S409>/Switch3' incorporates:
             *  Constant: '<S409>/MINFLOAT'
             *  Switch: '<S409>/Switch1'
             *  Switch: '<S409>/Switch2'
             */
            rtb_Max = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S409>/Switch1' incorporates:
             *  Constant: '<S409>/Constant Value4'
             *  Switch: '<S409>/Switch2'
             *  Switch: '<S409>/Switch3'
             */
            rtb_Max = 0.0F;
        }

        /* End of Switch: '<S409>/Switch1' */
        /* End of Outputs for SubSystem: '<S407>/Protected_Division1' */

        /* Switch: '<S319>/Switch3' incorporates:
         *  Sum: '<S407>/Summation1'
         */
        VeWTAC_M_ToPrdt_xSEM = rtb_Max + WTAR_ac_DW.UnitDelay1_DSTATE_ps;

        /* Switch: '<S407>/Switch2' */
        rtb_Switch2_jq = WTAR_ac_DW.UnitDelay_DSTATE_b2;
    }

    /* MinMax: '<S407>/MinMax' incorporates:
     *  Constant: '<S407>/Constant Value2'
     */
    rtb_Max = fminf(VeWTAC_M_ToPrdt_xSEM, 1.0F);

    /* Sum: '<S407>/Summation' incorporates:
     *  Constant: '<S407>/Constant Value'
     */
    rtb_Summation_ce = ((1.0F - rtb_Max) * rtb_Switch2_jq) + (rtb_Max * Gain_pj);

#endif

    /* End of RelationalOperator: '<S305>/Relational Operator2' */
    /* End of Outputs for SubSystem: '<S305>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S305>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S305>/EdgeBi2' */

    /* RelationalOperator: '<S410>/Relational Operator5' incorporates:
     *  Logic: '<S410>/Logical Operator3'
     *  Logic: '<S410>/Logical Operator4'
     *  RelationalOperator: '<S410>/Relational Operator6'
     *  RelationalOperator: '<S410>/Relational Operator7'
     *  RelationalOperator: '<S410>/Relational Operator8'
     */
#if Rte_SysCon_Variant_WTAR_3

    /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
    /* Logic: '<S410>/Logical Operator3' incorporates:
     *  Constant: '<S410>/Constant Value2'
     *  Constant: '<S410>/Constant Value3'
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_b_MSR_D = ((rtb_Switch1_hk[0] > 0.5F) && (VeWTAC_M_ActualAxleTrq <
                       0.0F));

    /* Logic: '<S410>/Logical Operator4' incorporates:
     *  Constant: '<S410>/Constant Value4'
     *  Constant: '<S410>/Constant Value5'
     *  Gain: '<S267>/Gain'
     */
    VeWTAC_b_ASR_R = ((rtb_Switch1_hk[0] < -0.5F) && (VeWTAC_M_ActualAxleTrq <
                       0.0F));

    /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
#endif

    /* End of RelationalOperator: '<S410>/Relational Operator5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeATRR_b_SEM_Act' */
    (void)Rte_Read_VeATRR_b_SEM_Act_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/WTAR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S519>/Calib'
     *  Constant: '<S520>/Calib'
     */
    if (KeWTAR_b_TrnsOilTempOvrrdEnbl)
    {
        rtb_Switch13 = KeWTAR_T_TrnsOilTempOvrrd;
    }
    else
    {
        rtb_Switch13 = VeWTAI_T_TrnOilTemp;
    }

    /* End of Switch: '<S310>/Switch' */

    /* Lookup_n-D: '<S521>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    VeWTAC_r_TrqCmndFactor_OilTemp = look2_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeCSVR, rtb_Switch13, ((const float32 *)
          &(KxWTAR_r_TrqCmndFactor_OilTemp[0])), ((const float32 *)
          &(KyWTAR_r_TrqCmndFactor_OilTemp[0])), ((const float32 *)
          &(KtWTAR_r_TrqCmndFactor_OilTemp[0])),
         WTAR_ac_ConstP.Vector_maxIndex_l, 4U);

    /* SignalConversion generated from: '<S6>/VariantSource1' */
#if Rte_SysCon_Variant_WTAR_9

    /* VariantMerge generated from: '<S6>/VariantSource1' */
    WTAR_ac_B.VariantMerge_For_Variant_Source[0] = rtb_Summation_la;
    WTAR_ac_B.VariantMerge_For_Variant_Source[1] = rtb_Summation_ce;

#else

    /* VariantMerge generated from: '<S6>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S6>/VariantSource1'
     */
    WTAR_ac_B.VariantMerge_For_Variant_Source[0] = rtb_Switch3_k3z;
    WTAR_ac_B.VariantMerge_For_Variant_Source[1] = VeWTAC_M_DrvReqMd_xDMPI;

#endif

    /* End of SignalConversion generated from: '<S6>/VariantSource1' */

    /* Switch: '<S554>/Switch3' */
    if (rtb_OR1_f24)
    {
        /* Update for UnitDelay: '<S554>/Unit Delay' incorporates:
         *  Switch: '<S554>/Switch3'
         *  UnitDelay: '<S537>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_au = WTAR_ac_DW.UnitDelay_DSTATE_l;
    }
    else
    {
        /* Update for UnitDelay: '<S554>/Unit Delay' incorporates:
         *  Switch: '<S554>/Switch3'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_au = rtb_TmpSignalConversionAtVeTRNR;
    }

    /* End of Switch: '<S554>/Switch3' */

    /* Switch: '<S561>/Switch3' */
    if (rtb_TmpSignalConversionAtVeSR_f)
    {
        /* Update for UnitDelay: '<S561>/Unit Delay' incorporates:
         *  Switch: '<S561>/Switch3'
         *  UnitDelay: '<S537>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_j = WTAR_ac_DW.UnitDelay_DSTATE_l;
    }
    else
    {
        /* Update for UnitDelay: '<S561>/Unit Delay' incorporates:
         *  Switch: '<S561>/Switch3'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_j = rtb_Sum4_a;
    }

    /* End of Switch: '<S561>/Switch3' */

    /* Switch: '<S568>/Switch3' */
    if (rtb_AND_a2v)
    {
        /* Update for UnitDelay: '<S568>/Unit Delay' incorporates:
         *  Switch: '<S568>/Switch3'
         *  UnitDelay: '<S537>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_b4 = WTAR_ac_DW.UnitDelay_DSTATE_l;
    }
    else
    {
        /* Update for UnitDelay: '<S568>/Unit Delay' incorporates:
         *  Switch: '<S568>/Switch3'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_b4 = rtb_TmpSignalConversionAtVeESPR;
    }

    /* End of Switch: '<S568>/Switch3' */

    /* Switch: '<S575>/Switch3' */
    if (rtb_OR1_a5)
    {
        /* Update for UnitDelay: '<S575>/Unit Delay' incorporates:
         *  Switch: '<S575>/Switch3'
         *  UnitDelay: '<S537>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_g = WTAR_ac_DW.UnitDelay_DSTATE_l;
    }
    else
    {
        /* Update for UnitDelay: '<S575>/Unit Delay' incorporates:
         *  Switch: '<S575>/Switch3'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_g = rtb_TmpSignalConversionAtVeHSCR;
    }

    /* End of Switch: '<S575>/Switch3' */

    /* Switch: '<S582>/Switch3' */
    if (rtb_AND_ok)
    {
        /* Update for UnitDelay: '<S582>/Unit Delay' incorporates:
         *  Switch: '<S582>/Switch3'
         *  UnitDelay: '<S537>/Unit Delay'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_c = WTAR_ac_DW.UnitDelay_DSTATE_l;
    }
    else
    {
        /* Update for UnitDelay: '<S582>/Unit Delay' incorporates:
         *  Switch: '<S582>/Switch3'
         */
        WTAR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeHS_m;
    }

    /* End of Switch: '<S582>/Switch3' */

    /* If: '<S534>/If1' incorporates:
     *  Constant: '<S534>/Constant Value2'
     *  Constant: '<S534>/Constant Value4'
     *  Constant: '<S534>/Constant Value5'
     *  Constant: '<S534>/Constant Value6'
     *  RelationalOperator: '<S534>/Comparison1'
     *  RelationalOperator: '<S534>/Comparison2'
     *  RelationalOperator: '<S534>/Comparison4'
     *  RelationalOperator: '<S534>/Comparison5'
     *  Sum: '<S534>/Sum2'
     *  Sum: '<S534>/Sum4'
     *  Sum: '<S534>/Sum5'
     */
    if (rtb_Sum3_gl < 0.1F)
    {
        /* Outputs for IfAction SubSystem: '<S534>/None' incorporates:
         *  ActionPort: '<S664>/Action Port'
         */
        /* Merge: '<S534>/Merge1' incorporates:
         *  Constant: '<S669>/Constant'
         *  SignalConversion generated from: '<S664>/OvrSpdPtn_Tp'
         */
        VeWTAR_e_OvrSpdPtn_Type = CeWTAR_e_None;

        /* End of Outputs for SubSystem: '<S534>/None' */
    }
    else if ((rtb_Sum3_gl - VeWTAC_M_OvrRevPtn_NaP) < 0.1F)
    {
        /* Outputs for IfAction SubSystem: '<S534>/Na' incorporates:
         *  ActionPort: '<S661>/Action Port'
         */
        /* Merge: '<S534>/Merge1' incorporates:
         *  Constant: '<S666>/Constant'
         *  SignalConversion generated from: '<S661>/OvrSpdPtn_Tp'
         */
        VeWTAR_e_OvrSpdPtn_Type = CeWTAR_e_Na;

        /* End of Outputs for SubSystem: '<S534>/Na' */
    }
    else if ((rtb_Sum3_gl - VeWTAC_M_OvrRevPtn_NbP) < 0.1F)
    {
        /* Outputs for IfAction SubSystem: '<S534>/Nb' incorporates:
         *  ActionPort: '<S662>/Action Port'
         */
        /* Merge: '<S534>/Merge1' incorporates:
         *  Constant: '<S667>/Constant'
         *  SignalConversion generated from: '<S662>/OvrSpdPtn_Tp'
         */
        VeWTAR_e_OvrSpdPtn_Type = CeWTAR_e_Nb;

        /* End of Outputs for SubSystem: '<S534>/Nb' */
    }
    else if ((rtb_Sum3_gl - VeWTAC_M_OvrRevPtn_NiP) < 0.1F)
    {
        /* Outputs for IfAction SubSystem: '<S534>/Ni' incorporates:
         *  ActionPort: '<S663>/Action Port'
         */
        /* Merge: '<S534>/Merge1' incorporates:
         *  Constant: '<S668>/Constant'
         *  SignalConversion generated from: '<S663>/OvrSpdPtn_Tp'
         */
        VeWTAR_e_OvrSpdPtn_Type = CeWTAR_e_Ni;

        /* End of Outputs for SubSystem: '<S534>/Ni' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S534>/Nturb' incorporates:
         *  ActionPort: '<S665>/Action Port'
         */
        /* Merge: '<S534>/Merge1' incorporates:
         *  Constant: '<S670>/Constant'
         *  SignalConversion generated from: '<S665>/OvrSpdPtn_Tp'
         */
        VeWTAR_e_OvrSpdPtn_Type = CeWTAR_e_Nturb;

        /* End of Outputs for SubSystem: '<S534>/Nturb' */
    }

    /* End of If: '<S534>/If1' */

    /* RelationalOperator: '<S671>/Comparison2' incorporates:
     *  Constant: '<S671>/Constant Value1'
     */
    VeWTAC_b_OutTrqReqOITR_BldAct = (rtb_TmpSignalConversionAtVeVSDR < 1.0F);

    /* RelationalOperator: '<S672>/Comparison2' incorporates:
     *  Constant: '<S672>/Constant Value1'
     */
    VeWTAC_b_OutTrqReqHTDR_BldAct = (rtb_TmpSignalConversionAtVeBTQR < 1.0F);

    /* RelationalOperator: '<S673>/Comparison2' incorporates:
     *  Constant: '<S673>/Constant Value1'
     */
    VeWTAC_b_OutTrqRaw_BldAct = (rtb_Maximum_i < 1.0F);

    /* RelationalOperator: '<S674>/Comparison2' incorporates:
     *  Constant: '<S674>/Constant Value1'
     */
    VeWTAC_b_AfterToClip_xSEM_BldAct = (rtb_TmpSignalConversionAtVeSC_f < 1.0F);

    /* RelationalOperator: '<S675>/Comparison2' incorporates:
     *  Constant: '<S675>/Constant Value1'
     */
    VeWTAC_b_ToNet_Arb_xSEM_BldAct = (rtb_TmpSignalConversionAtVeSC_j < 1.0F);

    /* RelationalOperator: '<S676>/Comparison2' incorporates:
     *  Constant: '<S676>/Constant Value1'
     */
    VeWTAC_b_OutTrqPot_BldAct = (rtb_Switch3_c1 < 1.0F);

    /* RelationalOperator: '<S677>/Comparison2' incorporates:
     *  Constant: '<S677>/Constant Value1'
     */
    VeWTAC_b_OutTrqRawShpd_BldAct = (rtb_Maximum_jf < 1.0F);

    /* Switch: '<S530>/Switch16' incorporates:
     *  Logic: '<S530>/Logical2'
     *  Switch: '<S530>/Switch17'
     */
    if ((VeWTAC_b_AfterToClip_xSEM_BldAct) || (WTAR_ac_B.VeWTAR_b_ToClipActive))
    {
        /* Update for UnitDelay: '<S311>/Unit Delay2' incorporates:
         *  Switch: '<S530>/Switch16'
         */
        WTAR_ac_DW.UnitDelay2_DSTATE_a = rtb_Summation_g5;
    }
    else if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch17' incorporates:
         *  Constant: '<S530>/Constant Value4'
         *  Switch: '<S530>/Switch16'
         *  UnitDelay: '<S311>/Unit Delay2'
         */
        WTAR_ac_DW.UnitDelay2_DSTATE_a = -99999.0F;
    }
    else
    {
        /* Update for UnitDelay: '<S311>/Unit Delay2' incorporates:
         *  Constant: '<S530>/Constant Value2'
         *  Switch: '<S530>/Switch16'
         *  Switch: '<S530>/Switch17'
         */
        WTAR_ac_DW.UnitDelay2_DSTATE_a = 99999.0F;
    }

    /* End of Switch: '<S530>/Switch16' */

    /* Switch: '<S530>/Switch4' incorporates:
     *  Logic: '<S530>/Logical1'
     *  Switch: '<S530>/Switch6'
     */
    if ((VeWTAC_b_OutTrqReqHTDR_BldAct) || (WTAR_ac_B.VeWTAR_b_ToClipActive))
    {
        /* Update for UnitDelay: '<S311>/Unit Delay1' incorporates:
         *  Switch: '<S530>/Switch4'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_f = rtb_Switch1_mxa;
    }
    else if (VeWTAC_b_WheelBasedinR)
    {
        /* Switch: '<S530>/Switch6' incorporates:
         *  Constant: '<S530>/Constant Value3'
         *  Switch: '<S530>/Switch4'
         *  UnitDelay: '<S311>/Unit Delay1'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_f = -99999.0F;
    }
    else
    {
        /* Update for UnitDelay: '<S311>/Unit Delay1' incorporates:
         *  Constant: '<S530>/Constant Value1'
         *  Switch: '<S530>/Switch4'
         *  Switch: '<S530>/Switch6'
         */
        WTAR_ac_DW.UnitDelay1_DSTATE_f = 99999.0F;
    }

    /* End of Switch: '<S530>/Switch4' */

    /* Sum: '<S724>/Sum1' incorporates:
     *  UnitDelay: '<S724>/Unit Delay'
     */
    VeWTAC_M_ToDelta_Tactic = rtb_UnitDelay3_kz - WTAR_ac_DW.UnitDelay_DSTATE_es;

    /* Lookup_n-D: '<S739>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Sum: '<S724>/Sum1'
     */
    rtb_TmpSignalConversionAtVeSCCR = look2_iflf_binlcapw
        (VeWTAC_M_ToDelta_Tactic, rtb_TmpSignalConversionAtVeCSVR, ((const
           float32 *)&(KxWTAR_dM_OutTorqCmndTactic_HiLmt[0])), ((const float32 *)
          &(KyWTAR_dM_OutTorqCmndTactic_HiLmt[0])), ((const float32 *)
          &(KtWTAR_dM_OutTorqCmndTactic_HiLmt[0])), WTAR_ac_ConstP.pooled22, 6U);

    /* Outputs for Atomic SubSystem: '<S724>/GradientLimiter' */
    /* Sum: '<S737>/Sum2' incorporates:
     *  UnitDelay: '<S737>/Unit Delay'
     */
    rtb_UnitDelay3_kz -= WTAR_ac_DW.UnitDelay_DSTATE_iu;

    /* Outputs for Atomic SubSystem: '<S737>/Limiter' */
    /* Switch: '<S740>/Switch1' incorporates:
     *  RelationalOperator: '<S740>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeSCCR < rtb_UnitDelay3_kz)
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeSCCR;
    }
    else
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_UnitDelay3_kz;
    }

    /* End of Switch: '<S740>/Switch1' */

    /* Switch: '<S740>/Switch' incorporates:
     *  Constant: '<S738>/Calib'
     *  RelationalOperator: '<S740>/Relational Operator1'
     */
    if (VeWTAC_M_ToPrdt_xSEM <= KeWTAR_dM_OutTorqCmndTactic_LoLmt)
    {
        VeWTAC_M_ToPrdt_xSEM = KeWTAR_dM_OutTorqCmndTactic_LoLmt;
    }

    /* End of Switch: '<S740>/Switch' */
    /* End of Outputs for SubSystem: '<S737>/Limiter' */

    /* Sum: '<S737>/Sum3' incorporates:
     *  UnitDelay: '<S737>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSCCR = VeWTAC_M_ToPrdt_xSEM +
        WTAR_ac_DW.UnitDelay_DSTATE_iu;

    /* Update for UnitDelay: '<S737>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_iu = rtb_TmpSignalConversionAtVeSCCR;

    /* End of Outputs for SubSystem: '<S724>/GradientLimiter' */

    /* Gain: '<S316>/Gain' incorporates:
     *  Product: '<S718>/Product'
     */
    WTAR_ac_B.Gain_c = VeWTAI_r_TCaseRatio * VeWTAI_r_Axle_Ratio;

    /* MinMax: '<S320>/MinMax3' incorporates:
     *  MinMax: '<S320>/MinMax1'
     *  MinMax: '<S320>/MinMax2'
     */
#if Rte_SysCon_Variant_WTAR_7

    /* Outputs for Atomic SubSystem: '<S320>/Digital_Lowpass_Reset_Enabled' */
    /* Switch: '<S781>/Switch1' incorporates:
     *  UnitDelay: '<S796>/Unit Delay'
     */
    rtb_Switch1_mxa = WTAR_ac_DW.UnitDelay_DSTATE_ou;

    /* Switch: '<S796>/Switch1' incorporates:
     *  Constant: '<S802>/Calib'
     *  Product: '<S796>/Multiplication'
     *  Sum: '<S796>/Subtraction'
     *  Sum: '<S796>/Summation'
     */
    VeWTAC_M_TransIntkTrqFil = ((VeWTAC_M_TransIntakeTrq - rtb_Switch1_mxa) *
        KeWTAR_k_TranIntkTrqFilGrad) + rtb_Switch1_mxa;

    /* Update for UnitDelay: '<S796>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ou = VeWTAC_M_TransIntkTrqFil;

    /* Outputs for Function Call SubSystem: '<S1>/InpTrqProc' */
    /* VariantMerge generated from: '<S320>/Variant_Source' incorporates:
     *  Gain: '<S198>/Gain'
     */
    VeWTAC_M_MinPdl4DifTorq = fmaxf(fmaxf(fminf(fmaxf
        (VeWTAC_M_Min4Converter2FW_Typ1, rtb_VariantMerge_For_Variant__a[4]),
        VeWTAC_M_TransIntkTrqFil), rtb_TmpSignalConversionAtVeA_b3),
        rtb_TmpSignalConversionAtVeDTRR);

    /* End of Outputs for SubSystem: '<S1>/InpTrqProc' */
    /* End of Outputs for SubSystem: '<S320>/Digital_Lowpass_Reset_Enabled' */
#endif

    /* End of MinMax: '<S320>/MinMax3' */

    /* Sum: '<S320>/Add' */
    VeWTAC_M_AeCoastTorqDiffRaw = VeWTAC_M_MinPdl4DifTorq -
        VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC;

    /* Switch: '<S320>/Switch7' incorporates:
     *  Product: '<S320>/Multiplication2'
     */
    if (VeWTAC_b_WheelBasedinR)
    {
        rtb_Switch13 = -VeWTAC_M_AeCoastTorqDiffRaw;
    }
    else
    {
        rtb_Switch13 = VeWTAC_M_AeCoastTorqDiffRaw;
    }

    /* End of Switch: '<S320>/Switch7' */

    /* Switch: '<S319>/Switch3' incorporates:
     *  Constant: '<S320>/Constant'
     *  MinMax: '<S320>/MinMax'
     */
    VeWTAC_M_ToPrdt_xSEM = fmaxf(rtb_Switch13, 0.0F);

    /* Outputs for Atomic SubSystem: '<S320>/Signal_Latch_On_With_Reset' */
    /* Logic: '<S804>/OR1' incorporates:
     *  Constant: '<S800>/Calib'
     *  Logic: '<S804>/NOT'
     *  Logic: '<S804>/OR'
     *  RelationalOperator: '<S320>/Greater  Than6'
     *  UnitDelay: '<S804>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSC_h = (rtb_TmpSignalConversionAtVeD_ly ||
        ((VeWTAC_M_ToPrdt_xSEM >= KeWTAR_M_OPD_TrqDiffExit) &&
         (WTAR_ac_DW.UnitDelay_DSTATE_c1)));

    /* Update for UnitDelay: '<S804>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_c1 = rtb_TmpSignalConversionAtVeSC_h;

    /* End of Outputs for SubSystem: '<S320>/Signal_Latch_On_With_Reset' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Logic: '<S320>/AND3' incorporates:
     *  Constant: '<S801>/Calib'
     *  Logic: '<S202>/AND2'
     *  Logic: '<S320>/AND1'
     *  Logic: '<S320>/AND2'
     */
    VeWTAC_b_AeCoastSwitch = (((rtb_TmpSignalConversionAtVeAECR &&
        (KeWTAR_b_OPD_TrqDiffOvrd)) || rtb_TmpSignalConversionAtVeSC_h) &&
        (rtb_NotEqual_ka && rtb_Equal2_ow));

    /* Switch: '<S320>/Switch13' */
    if (VeWTAC_b_AeCoastSwitch)
    {
        /* Switch: '<S320>/Switch13' */
        rtb_TmpSignalConversionAtVeDTRR = VeWTAC_M_ToPrdt_xSEM;
    }
    else
    {
        /* Switch: '<S320>/Switch13' incorporates:
         *  Constant: '<S320>/Constant Value22'
         */
        rtb_TmpSignalConversionAtVeDTRR = 0.0F;
    }

    /* End of Switch: '<S320>/Switch13' */

    /* Gain: '<S317>/Gain' */
    WTAR_ac_B.Gain_dp = rtb_TmpSignalConversionAtVeDTRR;

    /* Switch: '<S318>/Switch2' incorporates:
     *  Constant: '<S719>/Calib'
     */
    if (KeWTAR_b_RespInactOvrd)
    {
        /* Switch: '<S318>/Switch2' incorporates:
         *  Constant: '<S720>/Calib'
         */
        VeWTAC_b_ChangePrdttoRaw = KeWTAR_b_RespInactOvrdVal;
    }
    else
    {
        /* Switch: '<S318>/Switch2' */
        VeWTAC_b_ChangePrdttoRaw = VeWTAC_b_PTAR_NotActv;
    }

    /* End of Switch: '<S318>/Switch2' */

    /* Switch: '<S318>/Switch1' */
    if (VeWTAC_b_ChangePrdttoRaw)
    {
        /* Switch: '<S318>/Switch1' */
        VeWTAC_M_ToReqStgcPreShp = rtb_MinMax_n;
    }
    else
    {
        /* Switch: '<S318>/Switch1' */
        VeWTAC_M_ToReqStgcPreShp = rtb_Switch2_ol5;
    }

    /* End of Switch: '<S318>/Switch1' */

    /* Sum: '<S723>/Sum2' incorporates:
     *  UnitDelay: '<S723>/Unit Delay1'
     */
    VeWTAC_M_ToPotDelta_Strategic = rtb_VariantMerge_For_Variant__a[3] -
        WTAR_ac_DW.UnitDelay1_DSTATE_aq;

    /* Lookup_n-D: '<S730>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Sum: '<S723>/Sum2'
     */
    rtb_UnitDelay3_kz = look2_iflf_binlcapw(VeWTAC_M_ToPotDelta_Strategic,
        rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
        &(KxWTAR_dM_OutTorqCmndPotential_HiLmt[0])), ((const float32 *)
        &(KyWTAR_dM_OutTorqCmndPotential_HiLmt[0])), ((const float32 *)
        &(KtWTAR_dM_OutTorqCmndPotential_HiLmt[0])), WTAR_ac_ConstP.pooled22, 6U);

    /* Lookup_n-D: '<S731>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Sum: '<S723>/Sum2'
     */
    rtb_TmpSignalConversionAtVeA_b3 = look2_iflf_binlcapw
        (VeWTAC_M_ToPotDelta_Strategic, rtb_TmpSignalConversionAtVeCSVR, ((const
           float32 *)&(KxWTAR_dM_OutTorqCmndPotential_LoLmt[0])), ((const
           float32 *)&(KyWTAR_dM_OutTorqCmndPotential_LoLmt[0])), ((const
           float32 *)&(KtWTAR_dM_OutTorqCmndPotential_LoLmt[0])),
         WTAR_ac_ConstP.pooled22, 6U);

    /* Outputs for Atomic SubSystem: '<S723>/GradientLimiter' */
    /* Sum: '<S728>/Sum2' incorporates:
     *  UnitDelay: '<S728>/Unit Delay'
     */
    VeWTAC_M_ToPrdt_xSEM = rtb_VariantMerge_For_Variant__a[3] -
        WTAR_ac_DW.UnitDelay_DSTATE_el;

    /* Outputs for Atomic SubSystem: '<S728>/Limiter' */
    /* Switch: '<S735>/Switch1' incorporates:
     *  RelationalOperator: '<S735>/Relational Operator'
     */
    if (rtb_UnitDelay3_kz < VeWTAC_M_ToPrdt_xSEM)
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_UnitDelay3_kz;
    }

    /* End of Switch: '<S735>/Switch1' */

    /* Switch: '<S735>/Switch' incorporates:
     *  RelationalOperator: '<S735>/Relational Operator1'
     */
    if (VeWTAC_M_ToPrdt_xSEM > rtb_TmpSignalConversionAtVeA_b3)
    {
        rtb_TmpSignalConversionAtVeA_b3 = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S735>/Switch' */
    /* End of Outputs for SubSystem: '<S728>/Limiter' */

    /* Sum: '<S728>/Sum3' incorporates:
     *  UnitDelay: '<S728>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeA_b3 += WTAR_ac_DW.UnitDelay_DSTATE_el;

    /* Update for UnitDelay: '<S728>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_el = rtb_TmpSignalConversionAtVeA_b3;

    /* End of Outputs for SubSystem: '<S723>/GradientLimiter' */

    /* Sum: '<S723>/Sum1' incorporates:
     *  UnitDelay: '<S723>/Unit Delay'
     */
    VeWTAC_M_ToDelta_Strategic = VeWTAC_M_ToReqStgcPreShp -
        WTAR_ac_DW.UnitDelay_DSTATE_lvz;

    /* Lookup_n-D: '<S732>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Sum: '<S723>/Sum1'
     */
    VeWTAC_M_ToPrdt_xSEM = look2_iflf_binlcapw(VeWTAC_M_ToDelta_Strategic,
        rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
        &(KxWTAR_dM_OutTorqCmndStrategic_HiLmt[0])), ((const float32 *)
        &(KyWTAR_dM_OutTorqCmndStrategic_HiLmt[0])), ((const float32 *)
        &(KtWTAR_dM_OutTorqCmndStrategic_HiLmt[0])), WTAR_ac_ConstP.pooled22, 6U);

    /* Lookup_n-D: '<S733>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Sum: '<S723>/Sum1'
     */
    rtb_UnitDelay3_kz = look2_iflf_binlcapw(VeWTAC_M_ToDelta_Strategic,
        rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
        &(KxWTAR_dM_OutTorqCmndStrategic_LoLmt[0])), ((const float32 *)
        &(KyWTAR_dM_OutTorqCmndStrategic_LoLmt[0])), ((const float32 *)
        &(KtWTAR_dM_OutTorqCmndStrategic_LoLmt[0])), WTAR_ac_ConstP.pooled22, 6U);

    /* Outputs for Atomic SubSystem: '<S723>/GradientLimiter2' */
    /* Sum: '<S729>/Sum2' incorporates:
     *  UnitDelay: '<S729>/Unit Delay'
     */
    rtb_Sum3_gl = VeWTAC_M_ToReqStgcPreShp - WTAR_ac_DW.UnitDelay_DSTATE_pq;

    /* Outputs for Atomic SubSystem: '<S729>/Limiter' */
    /* Switch: '<S736>/Switch1' incorporates:
     *  RelationalOperator: '<S736>/Relational Operator'
     */
    if (VeWTAC_M_ToPrdt_xSEM >= rtb_Sum3_gl)
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_Sum3_gl;
    }

    /* End of Switch: '<S736>/Switch1' */

    /* Switch: '<S736>/Switch' incorporates:
     *  RelationalOperator: '<S736>/Relational Operator1'
     */
    if (VeWTAC_M_ToPrdt_xSEM > rtb_UnitDelay3_kz)
    {
        rtb_UnitDelay3_kz = VeWTAC_M_ToPrdt_xSEM;
    }

    /* End of Switch: '<S736>/Switch' */
    /* End of Outputs for SubSystem: '<S729>/Limiter' */

    /* Sum: '<S729>/Sum3' incorporates:
     *  UnitDelay: '<S729>/Unit Delay'
     */
    rtb_UnitDelay3_kz += WTAR_ac_DW.UnitDelay_DSTATE_pq;

    /* Update for UnitDelay: '<S729>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_pq = rtb_UnitDelay3_kz;

    /* End of Outputs for SubSystem: '<S723>/GradientLimiter2' */

    /* Sum: '<S723>/Sum3' */
    VeWTAC_M_ToReqStgc_PreLim = rtb_UnitDelay3_kz;

    /* SignalConversion generated from: '<S6>/VariantSource' incorporates:
     *  Abs: '<S319>/Abs'
     *  Abs: '<S319>/Abs1'
     *  Abs: '<S319>/Abs2'
     *  Inport: '<Root>/VePLTR_b_MILOnRq_ESC'
     *  Inport: '<Root>/VePLTR_phi_EstSlopeAngle'
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     *  Logic: '<S319>/Logical'
     *  Logic: '<S319>/Logical1'
     *  Logic: '<S319>/Logical3'
     *  Logic: '<S319>/Logical4'
     *  Logic: '<S319>/Logical5'
     *  Logic: '<S319>/Logical6'
     *  Product: '<S319>/Multiplication1'
     *  Product: '<S319>/Multiplication2'
     *  Product: '<S319>/Product'
     *  Product: '<S319>/Product1'
     *  Product: '<S319>/Product2'
     *  RelationalOperator: '<S319>/Comparison1'
     *  RelationalOperator: '<S319>/Comparison10'
     *  RelationalOperator: '<S319>/Comparison11'
     *  RelationalOperator: '<S319>/Comparison12'
     *  RelationalOperator: '<S319>/Comparison13'
     *  RelationalOperator: '<S319>/Comparison19'
     *  RelationalOperator: '<S319>/Comparison2'
     *  RelationalOperator: '<S319>/Comparison3'
     *  RelationalOperator: '<S319>/Comparison4'
     *  RelationalOperator: '<S319>/Comparison5'
     *  RelationalOperator: '<S319>/Comparison6'
     *  RelationalOperator: '<S319>/Comparison7'
     *  RelationalOperator: '<S319>/Comparison8'
     *  RelationalOperator: '<S319>/Comparison9'
     *  Sum: '<S319>/Sum1'
     *  Sum: '<S319>/Sum2'
     *  Sum: '<S319>/Sum3'
     *  Sum: '<S319>/Summation'
     *  Switch: '<S319>/Switch'
     *  Switch: '<S319>/Switch1'
     *  Switch: '<S319>/Switch10'
     *  Switch: '<S319>/Switch11'
     *  Switch: '<S319>/Switch12'
     *  Switch: '<S319>/Switch13'
     *  Switch: '<S319>/Switch14'
     *  Switch: '<S319>/Switch15'
     *  Switch: '<S319>/Switch16'
     *  Switch: '<S319>/Switch17'
     *  Switch: '<S319>/Switch18'
     *  Switch: '<S319>/Switch2'
     *  Switch: '<S319>/Switch3'
     *  Switch: '<S319>/Switch4'
     *  Switch: '<S319>/Switch5'
     *  Switch: '<S319>/Switch6'
     *  Switch: '<S319>/Switch7'
     *  Switch: '<S319>/Switch8'
     *  Switch: '<S319>/Switch9'
     *  UnitDelay: '<S319>/Unit Delay'
     *  UnitDelay: '<S319>/Unit Delay1'
     *  UnitDelay: '<S319>/Unit Delay2'
     *  UnitDelay: '<S319>/Unit Delay3'
     *  UnitDelay: '<S319>/Unit Delay4'
     */
#if Rte_SysCon_Variant_WTAR_8

    /* VariantMerge generated from: '<S6>/VariantSource' incorporates:
     *  Constant: '<S6>/Constant Value30'
     */
    WTAR_ac_B.VariantMerge_For_Variant_Sour_a = 0.0F;

#else

    /* Outputs for Atomic SubSystem: '<S319>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S319>/Signal_Latch_On2' */
    /* Outputs for Atomic SubSystem: '<S319>/Turn_On_Delay_Time2' */
    /* Outputs for Atomic SubSystem: '<S319>/Signal_Latch_On' */
    /* Outputs for Atomic SubSystem: '<S319>/Signal_Latch_On1' */
    /* Outputs for Atomic SubSystem: '<S319>/GradientLimiter2' */
    /* Outputs for Atomic SubSystem: '<S319>/Hysteresis3' */
    /* Outputs for Atomic SubSystem: '<S319>/Hysteresis2' */
    /* Outputs for Atomic SubSystem: '<S319>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S319>/Hysteresis' */
    /* Outputs for Atomic SubSystem: '<S319>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S319>/Signal_Latch_On_With_Reset' */
    /* Outputs for Atomic SubSystem: '<S319>/Turn_On_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S319>/Turn_On_Delay_Time1' */
    /* Outputs for Atomic SubSystem: '<S319>/Signal_Latch_On_With_Reset1' */
    /* Outputs for Atomic SubSystem: '<S319>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S319>/EdgeRising1' */
    /* Logic: '<S742>/AND' incorporates:
     *  Logic: '<S742>/OR1'
     *  UnitDelay: '<S742>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR = (rtb_TmpSignalConversionAtVePMDR &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_m0f));

    /* Update for UnitDelay: '<S742>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_m0f = rtb_TmpSignalConversionAtVePMDR;

    /* Logic: '<S741>/AND' incorporates:
     *  Logic: '<S741>/OR1'
     *  UnitDelay: '<S741>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSC_h = ((!rtb_TmpSignalConversionAtVePMDR) &&
        (WTAR_ac_DW.UnitDelay_DSTATE_ee));

    /* Update for UnitDelay: '<S741>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ee = rtb_TmpSignalConversionAtVePMDR;

    /* Logic: '<S786>/OR1' incorporates:
     *  Constant: '<S748>/Constant'
     *  Logic: '<S319>/Logical5'
     *  Logic: '<S786>/NOT'
     *  Logic: '<S786>/OR'
     *  RelationalOperator: '<S319>/Comparison11'
     *  UnitDelay: '<S786>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR = (rtb_TmpSignalConversionAtVeAECR ||
        (((!rtb_TmpSignalConversionAtVeSC_h) && (((uint32)
        rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_TransRangePark)) &&
         (WTAR_ac_DW.UnitDelay_DSTATE_no4)));

    /* Update for UnitDelay: '<S786>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_no4 = rtb_TmpSignalConversionAtVeAECR;

    /* Outputs for Atomic SubSystem: '<S789>/EdgeRising' */
    /* Logic: '<S794>/AND' incorporates:
     *  Logic: '<S794>/OR1'
     *  UnitDelay: '<S794>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSC_h = (rtb_TmpSignalConversionAtVeAECR &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_kj));

    /* Update for UnitDelay: '<S794>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_kj = rtb_TmpSignalConversionAtVeAECR;

    /* End of Outputs for SubSystem: '<S789>/EdgeRising' */

    /* Switch: '<S789>/Switch1' incorporates:
     *  Logic: '<S789>/OR'
     *  Logic: '<S789>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeAECR) || rtb_TmpSignalConversionAtVeSC_h)
    {
        /* Switch: '<S789>/Switch1' incorporates:
         *  Constant: '<S789>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S789>/Switch1' incorporates:
         *  Constant: '<S776>/Calib'
         *  Constant: '<S778>/Calib'
         *  MinMax: '<S789>/Minimum'
         *  Sum: '<S789>/Summation'
         *  UnitDelay: '<S789>/Unit Delay'
         */
        VeWTAC_M_ToPrdt_xSEM = fminf(KeWTAR_t_ParkRattleInitDelay, KeWTAR_t_dT +
            WTAR_ac_DW.UnitDelay_DSTATE_eb);
    }

    /* End of Switch: '<S789>/Switch1' */

    /* Logic: '<S789>/AND' incorporates:
     *  Constant: '<S776>/Calib'
     *  RelationalOperator: '<S789>/Greater  Than'
     */
    VeWTAC_b_ParkRattleInitDelayEnbld = (rtb_TmpSignalConversionAtVeAECR &&
        (VeWTAC_M_ToPrdt_xSEM >= KeWTAR_t_ParkRattleInitDelay));

    /* Update for UnitDelay: '<S789>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_eb = VeWTAC_M_ToPrdt_xSEM;

    /* Logic: '<S319>/Logical6' incorporates:
     *  Constant: '<S743>/Constant'
     *  RelationalOperator: '<S319>/Comparison4'
     */
    rtb_TmpSignalConversionAtVePMDR = (rtb_TmpSignalConversionAtVePMDR &&
        (((uint32)rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S788>/EdgeRising' */
    /* Logic: '<S793>/AND' incorporates:
     *  Logic: '<S793>/OR1'
     *  UnitDelay: '<S793>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR = (rtb_TmpSignalConversionAtVePMDR &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_kcu));

    /* Update for UnitDelay: '<S793>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_kcu = rtb_TmpSignalConversionAtVePMDR;

    /* End of Outputs for SubSystem: '<S788>/EdgeRising' */

    /* Switch: '<S788>/Switch1' incorporates:
     *  Logic: '<S788>/OR'
     *  Logic: '<S788>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVePMDR) || rtb_TmpSignalConversionAtVeAECR)
    {
        /* Switch: '<S788>/Switch1' incorporates:
         *  Constant: '<S788>/Constant Value1'
         */
        VeWTAC_M_ToPrdt_xSEM = 0.0F;
    }
    else
    {
        /* Switch: '<S788>/Switch1' incorporates:
         *  Constant: '<S775>/Calib'
         *  Constant: '<S778>/Calib'
         *  MinMax: '<S788>/Minimum'
         *  Sum: '<S788>/Summation'
         *  UnitDelay: '<S788>/Unit Delay'
         */
        VeWTAC_M_ToPrdt_xSEM = fminf(KeWTAR_t_ParkRattleDelay, KeWTAR_t_dT +
            WTAR_ac_DW.UnitDelay_DSTATE_hn);
    }

    /* End of Switch: '<S788>/Switch1' */

    /* Logic: '<S788>/AND' incorporates:
     *  Constant: '<S775>/Calib'
     *  RelationalOperator: '<S788>/Greater  Than'
     */
    VeWTAC_b_ParkRattleDelayEnbld = (rtb_TmpSignalConversionAtVePMDR &&
        (VeWTAC_M_ToPrdt_xSEM >= KeWTAR_t_ParkRattleDelay));

    /* Update for UnitDelay: '<S788>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_hn = VeWTAC_M_ToPrdt_xSEM;

    /* Logic: '<S785>/OR1' incorporates:
     *  Constant: '<S745>/Constant'
     *  Logic: '<S319>/Logical4'
     *  Logic: '<S785>/NOT'
     *  Logic: '<S785>/OR'
     *  RelationalOperator: '<S319>/Comparison8'
     *  UnitDelay: '<S785>/Unit Delay'
     */
    VeWTAC_b_ParkRattleEnbld = (((VeWTAC_b_ParkRattleInitDelayEnbld) ||
        (VeWTAC_b_ParkRattleDelayEnbld)) || ((((uint32)
        rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_TransRangePark) &&
        (WTAR_ac_DW.UnitDelay_DSTATE_bhx)));

    /* Update for UnitDelay: '<S785>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_bhx = VeWTAC_b_ParkRattleEnbld;
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value(&rtb_Switch_jv);

    /* Switch: '<S319>/Switch4' incorporates:
     *  Inport: '<Root>/VePLTR_phi_EstSlopeAngle'
     */
    if (VeWTAC_b_ParkRattleEnbld)
    {
        /* Switch: '<S319>/Switch4' incorporates:
         *  UnitDelay: '<S319>/Unit Delay1'
         */
        VeWTAC_phi_GradeAngleLatched = WTAR_ac_DW.UnitDelay1_DSTATE_poi;
    }
    else
    {
        /* Switch: '<S319>/Switch4' */
        VeWTAC_phi_GradeAngleLatched = rtb_Switch_jv;
    }

    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&tmpRead_6);

    /* Outputs for Atomic SubSystem: '<S787>/EdgeFalling' */
    /* Logic: '<S792>/AND' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     *  Logic: '<S792>/OR1'
     *  UnitDelay: '<S792>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR = ((!rtb_TmpSignalConversionAtVeSTRR) &&
        (WTAR_ac_DW.UnitDelay_DSTATE_b4j));

    /* Update for UnitDelay: '<S792>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_b4j = rtb_TmpSignalConversionAtVeSTRR;

    /* End of Outputs for SubSystem: '<S787>/EdgeFalling' */

    /* Switch: '<S787>/Switch' */
    if (rtb_TmpSignalConversionAtVePMDR)
    {
        /* Switch: '<S787>/Switch' incorporates:
         *  Constant: '<S777>/Calib'
         */
        rtb_Switch_jv = KeWTAR_t_ParkRattleShutOffDelay;
    }
    else
    {
        /* Switch: '<S787>/Switch' incorporates:
         *  Constant: '<S778>/Calib'
         *  Constant: '<S787>/Constant Value1'
         *  MinMax: '<S787>/Minimum'
         *  Sum: '<S787>/Summation'
         *  UnitDelay: '<S787>/Unit Delay'
         */
        rtb_Switch_jv = fmaxf(WTAR_ac_DW.UnitDelay_DSTATE_o1 - KeWTAR_t_dT, 0.0F);
    }

    /* End of Switch: '<S787>/Switch' */

    /* Update for UnitDelay: '<S787>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_o1 = rtb_Switch_jv;

    /* Switch: '<S319>/Switch18' incorporates:
     *  Constant: '<S787>/Constant Value2'
     *  Logic: '<S787>/AND'
     *  RelationalOperator: '<S787>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeSTRR || (rtb_Switch_jv > 0.0F))
    {
        /* Switch: '<S319>/Switch13' incorporates:
         *  Constant: '<S756>/Calib'
         *  DataTypeConversion: '<S319>/Data Type Conversion'
         *  Selector: '<S319>/Selector2'
         *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
         */
        rtb_Switch13 = KaWTAR_scl_ParkRattleFactor
            [(rtb_TmpSignalConversionAtVeESSR)];
    }
    else
    {
        /* Switch: '<S319>/Switch13' incorporates:
         *  Constant: '<S319>/Constant Value31'
         */
        rtb_Switch13 = 0.0F;
    }

    /* Switch: '<S752>/Switch1' incorporates:
     *  Constant: '<S758>/Calib'
     *  RelationalOperator: '<S752>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeINVR > KeWTAR_T_DsblParkTrq_InvATemp_RSP)
    {
        /* Switch: '<S752>/Switch1' incorporates:
         *  Constant: '<S752>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeSTRR = true;
    }
    else
    {
        /* Switch: '<S752>/Switch1' incorporates:
         *  Constant: '<S757>/Calib'
         *  RelationalOperator: '<S752>/Greater  Than1'
         *  UnitDelay: '<S752>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeSTRR = ((rtb_TmpSignalConversionAtVeINVR >=
            KeWTAR_T_DsblParkTrq_InvATemp_LSP) &&
            (WTAR_ac_DW.UnitDelay_DSTATE_jqn));
    }

    /* End of Switch: '<S752>/Switch1' */

    /* Update for UnitDelay: '<S752>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jqn = rtb_TmpSignalConversionAtVeSTRR;

    /* Switch: '<S753>/Switch1' incorporates:
     *  Constant: '<S762>/Calib'
     *  RelationalOperator: '<S753>/Greater  Than'
     */
    if (VeWTAI_T_MtrA_Temp > KeWTAR_T_DsblParkTrq_MtrATemp_RSP)
    {
        /* Switch: '<S753>/Switch1' incorporates:
         *  Constant: '<S753>/Constant Value'
         */
        rtb_TmpSignalConversionAtVePMDR = true;
    }
    else
    {
        /* Switch: '<S753>/Switch1' incorporates:
         *  Constant: '<S761>/Calib'
         *  RelationalOperator: '<S753>/Greater  Than1'
         *  UnitDelay: '<S753>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePMDR = ((VeWTAI_T_MtrA_Temp >=
            KeWTAR_T_DsblParkTrq_MtrATemp_LSP) &&
            (WTAR_ac_DW.UnitDelay_DSTATE_n0));
    }

    /* End of Switch: '<S753>/Switch1' */

    /* Update for UnitDelay: '<S753>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_n0 = rtb_TmpSignalConversionAtVePMDR;

    /* Switch: '<S754>/Switch1' incorporates:
     *  Constant: '<S760>/Calib'
     *  RelationalOperator: '<S754>/Greater  Than'
     */
    if (VeWTAI_T_MtrB_InvrtrTemp > KeWTAR_T_DsblParkTrq_InvBTemp_RSP)
    {
        /* Switch: '<S754>/Switch1' incorporates:
         *  Constant: '<S754>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeAECR = true;
    }
    else
    {
        /* Switch: '<S754>/Switch1' incorporates:
         *  Constant: '<S759>/Calib'
         *  RelationalOperator: '<S754>/Greater  Than1'
         *  UnitDelay: '<S754>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAECR = ((VeWTAI_T_MtrB_InvrtrTemp >=
            KeWTAR_T_DsblParkTrq_InvBTemp_LSP) &&
            (WTAR_ac_DW.UnitDelay_DSTATE_jp));
    }

    /* End of Switch: '<S754>/Switch1' */

    /* Update for UnitDelay: '<S754>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jp = rtb_TmpSignalConversionAtVeAECR;

    /* Switch: '<S755>/Switch1' incorporates:
     *  Constant: '<S764>/Calib'
     *  RelationalOperator: '<S755>/Greater  Than'
     */
    if (VeWTAI_T_MtrB_Temp > KeWTAR_T_DsblParkTrq_MtrBTemp_RSP)
    {
        /* Switch: '<S755>/Switch1' incorporates:
         *  Constant: '<S755>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeSC_h = true;
    }
    else
    {
        /* Switch: '<S755>/Switch1' incorporates:
         *  Constant: '<S763>/Calib'
         *  RelationalOperator: '<S755>/Greater  Than1'
         *  UnitDelay: '<S755>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeSC_h = ((VeWTAI_T_MtrB_Temp >=
            KeWTAR_T_DsblParkTrq_MtrBTemp_LSP) &&
            (WTAR_ac_DW.UnitDelay_DSTATE_lr));
    }

    /* End of Switch: '<S755>/Switch1' */

    /* Update for UnitDelay: '<S755>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_lr = rtb_TmpSignalConversionAtVeSC_h;

    /* RelationalOperator: '<S319>/Comparison10' incorporates:
     *  Constant: '<S319>/Constant Value11'
     *  Constant: '<S749>/Constant'
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     *  Product: '<S319>/Product'
     *  RelationalOperator: '<S319>/Comparison6'
     *  Switch: '<S319>/Switch10'
     *  Switch: '<S319>/Switch11'
     *  Switch: '<S319>/Switch12'
     *  Switch: '<S319>/Switch5'
     *  Switch: '<S319>/Switch9'
     */
    VeWTAC_b_ParkRattleActive = (((((((((float32)((((uint32)tmpRead_6) !=
        CeSTRR_e_KeyOffSt) ? 1 : 0)) * ((float32)(VeWTAC_b_ParkRattleEnbld ?
        1.0F : 0.0F))) * rtb_Switch13) * ((float32)
        ((!rtb_TmpSignalConversionAtVeSTRR) ? 1 : 0))) * ((float32)
        ((!rtb_TmpSignalConversionAtVePMDR) ? 1 : 0))) * ((float32)
        ((!rtb_TmpSignalConversionAtVeAECR) ? 1 : 0))) * ((float32)
        ((!rtb_TmpSignalConversionAtVeSC_h) ? 1 : 0))) != 0.0F);

    /* Switch: '<S319>/Switch15' */
    if (VeWTAC_b_ParkRattleActive)
    {
        /* Switch: '<S319>/Switch15' incorporates:
         *  Lookup_n-D: '<S780>/Vector'
         *  Switch: '<S319>/Switch4'
         */
        rtb_Switch_jv = look1_iflf_binlcapw(VeWTAC_phi_GradeAngleLatched, ((
            const float32 *)&(KxWTAR_M_ToReqInPark[0])), ((const float32 *)
            &(KtWTAR_M_ToReqInPark[0])), 6U);
    }
    else
    {
        /* Switch: '<S319>/Switch15' incorporates:
         *  UnitDelay: '<S319>/Unit Delay3'
         */
        rtb_Switch_jv = WTAR_ac_DW.UnitDelay3_DSTATE_o;
    }

    /* Sum: '<S751>/Sum2' incorporates:
     *  Switch: '<S319>/Switch7'
     *  UnitDelay: '<S751>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR = ((float32)(VeWTAC_b_ParkRattleActive ?
        1.0F : 0.0F)) - WTAR_ac_DW.UnitDelay_DSTATE_br;

    /* Outputs for Atomic SubSystem: '<S751>/Limiter' */
    /* Switch: '<S791>/Switch1' incorporates:
     *  Constant: '<S766>/Calib'
     *  RelationalOperator: '<S791>/Relational Operator'
     */
    if (KeWTAR_dscl_ParkRattleIncrRateLmt < rtb_TmpSignalConversionAtVeINVR)
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = KeWTAR_dscl_ParkRattleIncrRateLmt;
    }
    else
    {
        /* Switch: '<S319>/Switch3' */
        VeWTAC_M_ToPrdt_xSEM = rtb_TmpSignalConversionAtVeINVR;
    }

    /* End of Switch: '<S791>/Switch1' */

    /* Switch: '<S791>/Switch' incorporates:
     *  Constant: '<S765>/Calib'
     *  RelationalOperator: '<S791>/Relational Operator1'
     */
    if (VeWTAC_M_ToPrdt_xSEM <= KeWTAR_dscl_ParkRattleDecrRateLmt)
    {
        VeWTAC_M_ToPrdt_xSEM = KeWTAR_dscl_ParkRattleDecrRateLmt;
    }

    /* End of Switch: '<S791>/Switch' */
    /* End of Outputs for SubSystem: '<S751>/Limiter' */

    /* Sum: '<S751>/Sum3' incorporates:
     *  UnitDelay: '<S751>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeINVR = VeWTAC_M_ToPrdt_xSEM +
        WTAR_ac_DW.UnitDelay_DSTATE_br;

    /* Update for UnitDelay: '<S751>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_br = rtb_TmpSignalConversionAtVeINVR;

    /* Product: '<S319>/Product2' */
    VeWTAC_M_ToReqParkRaw = rtb_Switch_jv * rtb_TmpSignalConversionAtVeINVR;

    /* Sum: '<S319>/Sum3' incorporates:
     *  UnitDelay: '<S319>/Unit Delay2'
     */
    VeWTAC_phi_MtrPosDiff = rtb_TmpSignalConversionAtVeM_mo -
        WTAR_ac_DW.UnitDelay2_DSTATE_m;

    /* RelationalOperator: '<S319>/Comparison19' incorporates:
     *  Abs: '<S319>/Abs2'
     *  Constant: '<S770>/Calib'
     */
    VeWTAC_b_MtrPosBigDiff = (fabsf(VeWTAC_phi_MtrPosDiff) >=
        KeWTAR_phi_MtrBPosDiff);

    /* Switch: '<S319>/Switch17' */
    if (VeWTAC_b_MtrPosBigDiff)
    {
        /* Switch: '<S319>/Switch17' incorporates:
         *  Constant: '<S319>/Constant Value30'
         */
        VeWTAC_phi_MtrPosPrevVal = 0.0F;
    }
    else
    {
        /* Switch: '<S319>/Switch17' */
        VeWTAC_phi_MtrPosPrevVal = VeWTAC_phi_MtrPosDiff;
    }

    /* Sum: '<S319>/Sum2' incorporates:
     *  UnitDelay: '<S319>/Unit Delay4'
     */
    VeWTAC_phi_ContMtrPos = WTAR_ac_DW.UnitDelay4_DSTATE_d +
        VeWTAC_phi_MtrPosPrevVal;

    /* Switch: '<S319>/Switch1' */
    if (VeWTAC_b_ParkRattleActive)
    {
        /* Switch: '<S319>/Switch1' incorporates:
         *  UnitDelay: '<S319>/Unit Delay'
         */
        VeWTAC_phi_MtrPosLatchd = WTAR_ac_DW.UnitDelay_DSTATE_bf;
    }
    else
    {
        /* Switch: '<S319>/Switch1' */
        VeWTAC_phi_MtrPosLatchd = VeWTAC_phi_ContMtrPos;
    }

    /* Abs: '<S319>/Abs' incorporates:
     *  Sum: '<S319>/Sum1'
     */
    VeWTAC_phi_MtrPosDelta = fabsf(VeWTAC_phi_ContMtrPos -
        VeWTAC_phi_MtrPosLatchd);

    /* RelationalOperator: '<S319>/Comparison12' incorporates:
     *  Constant: '<S746>/Constant'
     *  RelationalOperator: '<S319>/Comparison9'
     */
    rtb_Comparison12 = (((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
                        CeTRGR_e_TransRangePark);

    /* Logic: '<S783>/OR2' incorporates:
     *  Constant: '<S771>/Calib'
     *  Logic: '<S319>/Logical1'
     *  RelationalOperator: '<S319>/Comparison7'
     *  UnitDelay: '<S783>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSTRR = (((VeWTAC_phi_MtrPosDelta >
        KeWTAR_phi_MtrBPostnThrsh_Dsbl) && rtb_Comparison12) ||
        (WTAR_ac_DW.UnitDelay_DSTATE_f0));

    /* Update for UnitDelay: '<S783>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_f0 = rtb_TmpSignalConversionAtVeSTRR;

    /* Logic: '<S782>/OR2' incorporates:
     *  Constant: '<S779>/Calib'
     *  Logic: '<S319>/Logical3'
     *  RelationalOperator: '<S319>/Comparison3'
     *  UnitDelay: '<S782>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMDR = ((rtb_Comparison12 &&
        (rtb_TmpSignalConversionAtVeCS_n > KeWTAR_v_VehSpdThrsh_Dsbl)) ||
        (WTAR_ac_DW.UnitDelay_DSTATE_eo));

    /* Update for UnitDelay: '<S782>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_eo = rtb_TmpSignalConversionAtVePMDR;

    /* Abs: '<S319>/Abs1' incorporates:
     *  Constant: '<S772>/Calib'
     *  Constant: '<S773>/Calib'
     *  Product: '<S319>/Multiplication1'
     *  Product: '<S319>/Multiplication2'
     *  Sum: '<S319>/Summation'
     */
    VeWTAC_n_NoFromNaNi = fabsf((rtb_TmpSignalConversionAtVeMS_e *
        KeWTAR_r_NoFromNa_NbDep) + (rtb_TmpSignalConversionAtVeTISR *
        KeWTAR_r_NoFromNi_NbDep));

    /* Switch: '<S319>/Switch6' incorporates:
     *  Constant: '<S747>/Constant'
     *  Constant: '<S768>/Calib'
     *  Constant: '<S769>/Calib'
     *  RelationalOperator: '<S319>/Comparison2'
     *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeESSR) == CeESSR_e_EngRunning)
    {
        rtb_TmpSignalConversionAtVeTISR = KeWTAR_n_OutTransSpdThrsh_Dsbl;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTISR = KeWTAR_n_OutTransSpdThrsh_Dsbl_EngOff;
    }

    /* RelationalOperator: '<S319>/Comparison5' */
    rtb_TmpSignalConversionAtVeAECR = (VeWTAC_n_NoFromNaNi >
        rtb_TmpSignalConversionAtVeTISR);

    /* Outputs for Atomic SubSystem: '<S790>/EdgeRising' */
    /* Logic: '<S795>/AND' incorporates:
     *  Logic: '<S795>/OR1'
     *  UnitDelay: '<S795>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSC_h = (rtb_TmpSignalConversionAtVeAECR &&
        (!WTAR_ac_DW.UnitDelay_DSTATE_f4));

    /* Update for UnitDelay: '<S795>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_f4 = rtb_TmpSignalConversionAtVeAECR;

    /* End of Outputs for SubSystem: '<S790>/EdgeRising' */

    /* Switch: '<S790>/Switch1' incorporates:
     *  Logic: '<S790>/OR'
     *  Logic: '<S790>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeAECR) || rtb_TmpSignalConversionAtVeSC_h)
    {
        /* Switch: '<S790>/Switch1' incorporates:
         *  Constant: '<S790>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeTISR = 0.0F;
    }
    else
    {
        /* Switch: '<S790>/Switch1' incorporates:
         *  Constant: '<S774>/Calib'
         *  Constant: '<S778>/Calib'
         *  MinMax: '<S790>/Minimum'
         *  Sum: '<S790>/Summation'
         *  UnitDelay: '<S790>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTISR = fminf(KeWTAR_t_NoThrshDsblDelay,
            KeWTAR_t_dT + WTAR_ac_DW.UnitDelay_DSTATE_jt);
    }

    /* End of Switch: '<S790>/Switch1' */

    /* Update for UnitDelay: '<S790>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jt = rtb_TmpSignalConversionAtVeTISR;
    (void)Rte_Read_VeTISR_e_InpSpdSource_Value(&tmpRead_5);

    /* Logic: '<S784>/OR2' incorporates:
     *  Constant: '<S744>/Constant'
     *  Constant: '<S774>/Calib'
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     *  Logic: '<S319>/Logical'
     *  Logic: '<S790>/AND'
     *  RelationalOperator: '<S319>/Comparison1'
     *  RelationalOperator: '<S790>/Greater  Than'
     *  UnitDelay: '<S784>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR = (((rtb_Comparison12 &&
        (rtb_TmpSignalConversionAtVeAECR && (rtb_TmpSignalConversionAtVeTISR >=
        KeWTAR_t_NoThrshDsblDelay))) && (((uint32)tmpRead_5) ==
        CeTISR_e_EngSpeedFromMCP)) || (WTAR_ac_DW.UnitDelay_DSTATE_ib1));

    /* Update for UnitDelay: '<S784>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ib1 = rtb_TmpSignalConversionAtVeAECR;
    (void)Rte_Read_VePLTR_b_MILOnRq_ESC_Value(&Switch1_g);

    /* Product: '<S319>/Product1' incorporates:
     *  Constant: '<S750>/Constant'
     *  Constant: '<S767>/Calib'
     *  Inport: '<Root>/VePLTR_b_MILOnRq_ESC'
     *  RelationalOperator: '<S319>/Comparison12'
     *  RelationalOperator: '<S319>/Comparison13'
     *  SignalConversion generated from: '<S1>/VePLTR_e_EPBHoldSts'
     *  Switch: '<S319>/Switch'
     *  Switch: '<S319>/Switch13'
     *  Switch: '<S319>/Switch2'
     *  Switch: '<S319>/Switch3'
     */
    rtb_TmpSignalConversionAtVeTISR = (((((VeWTAC_M_ToReqParkRaw * ((float32)
        ((!rtb_TmpSignalConversionAtVeSTRR) ? 1 : 0))) * ((float32)
        ((!rtb_TmpSignalConversionAtVePMDR) ? 1 : 0))) * ((float32)
        ((!rtb_TmpSignalConversionAtVeAECR) ? 1 : 0))) * ((float32)((!Switch1_g)
        ? 1 : 0))) * ((float32)((((uint32)rtb_TmpSignalConversionAtVePLTR) !=
        CePLTR_e_EPBHoldSts_Flt_Prsnt) ? 1 : 0))) * ((float32)((((sint32)
        KeWTAR_g_TrqEnbInPark) == 62384) ? 1 : 0));

    /* Switch: '<S781>/Switch1' incorporates:
     *  Constant: '<S319>/Constant Value28'
     *  RelationalOperator: '<S781>/Relational Operator'
     */
    if (120.0F < rtb_TmpSignalConversionAtVeTISR)
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = 120.0F;
    }
    else
    {
        /* Switch: '<S781>/Switch1' */
        rtb_Switch1_mxa = rtb_TmpSignalConversionAtVeTISR;
    }

    /* End of Switch: '<S781>/Switch1' */

    /* Switch: '<S781>/Switch' incorporates:
     *  Constant: '<S319>/Constant Value29'
     *  RelationalOperator: '<S781>/Relational Operator1'
     */
    if (rtb_Switch1_mxa > -120.0F)
    {
        /* VariantMerge generated from: '<S6>/VariantSource' incorporates:
         *  SignalConversion generated from: '<S6>/VariantSource'
         */
        WTAR_ac_B.VariantMerge_For_Variant_Sour_a = rtb_Switch1_mxa;
    }
    else
    {
        /* VariantMerge generated from: '<S6>/VariantSource' incorporates:
         *  SignalConversion generated from: '<S6>/VariantSource'
         */
        WTAR_ac_B.VariantMerge_For_Variant_Sour_a = -120.0F;
    }

    /* End of Switch: '<S781>/Switch' */
    /* End of Outputs for SubSystem: '<S319>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S319>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S319>/Signal_Latch_On_With_Reset1' */
    /* End of Outputs for SubSystem: '<S319>/Turn_On_Delay_Time1' */
    /* End of Outputs for SubSystem: '<S319>/Turn_On_Delay_Time' */
    /* End of Outputs for SubSystem: '<S319>/Signal_Latch_On_With_Reset' */
    /* End of Outputs for SubSystem: '<S319>/TurnOffDelayTime' */
    /* End of Outputs for SubSystem: '<S319>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S319>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S319>/Hysteresis2' */
    /* End of Outputs for SubSystem: '<S319>/Hysteresis3' */
    /* End of Outputs for SubSystem: '<S319>/GradientLimiter2' */
    /* End of Outputs for SubSystem: '<S319>/Signal_Latch_On1' */
    /* End of Outputs for SubSystem: '<S319>/Signal_Latch_On' */
    /* End of Outputs for SubSystem: '<S319>/Turn_On_Delay_Time2' */
    /* End of Outputs for SubSystem: '<S319>/Signal_Latch_On2' */
    /* End of Outputs for SubSystem: '<S319>/Limiter1' */
#endif

    /* End of SignalConversion generated from: '<S6>/VariantSource' */

    /* Outputs for Atomic SubSystem: '<S320>/Hysteresis' */
    /* Switch: '<S797>/Switch1' incorporates:
     *  Constant: '<S799>/Calib'
     *  RelationalOperator: '<S797>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeDTRR > KeWTAR_M_AeCoastActive_RSP)
    {
        /* Switch: '<S797>/Switch1' incorporates:
         *  Constant: '<S797>/Constant Value'
         */
        Switch1_g = true;
    }
    else
    {
        /* Switch: '<S797>/Switch1' incorporates:
         *  Constant: '<S798>/Calib'
         *  RelationalOperator: '<S797>/Greater  Than1'
         *  UnitDelay: '<S797>/Unit Delay'
         */
        Switch1_g = ((rtb_TmpSignalConversionAtVeDTRR >=
                      KeWTAR_M_AeCoastActive_LSP) &&
                     (WTAR_ac_DW.UnitDelay_DSTATE_am));
    }

    /* End of Switch: '<S797>/Switch1' */

    /* Update for UnitDelay: '<S797>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_am = Switch1_g;

    /* End of Outputs for SubSystem: '<S320>/Hysteresis' */

    /* Update for UnitDelay: '<S820>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ea = rtb_NotEqual2_c;

    /* Update for UnitDelay: '<S876>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE = rtb_Sum2;

    /* Update for UnitDelay: '<S821>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_dw = rtb_TmpSignalConversionAtVeD_ly;

    /* Update for UnitDelay: '<S320>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_om = Switch1_g;

    /* Update for UnitDelay: '<S6>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE = VeWTAC_M_ToCmnd_PstFil_HTDR;

    /* Update for UnitDelay: '<S6>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE = rtb_VariantMerge_For_Variant__a[2];

    /* Update for UnitDelay: '<S6>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM;

    /* Update for UnitDelay: '<S6>/Unit Delay4' */
    WTAR_ac_DW.UnitDelay4_DSTATE = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC;

    /* Update for UnitDelay: '<S322>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_n = rtb_Switch1_mh;

    /* Update for UnitDelay: '<S824>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_n = VeWTAC_M_ToCmnd_AftLashCtrl_PstFil;

    /* Update for UnitDelay: '<S952>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_a = VeWTAC_M_PostRateLim;

    /* Update for UnitDelay: '<S825>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_o = VeWTAC_M_AfterMainFilter;

    /* Update for UnitDelay: '<S309>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_l = rtb_TmpSignalConversionAtVeDTRR;

    /* Update for UnitDelay: '<S876>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_la = VeWTAC_M_ToCmnd_AftLashCtrl_PstFil;

    /* Update for UnitDelay: '<S875>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_e = VeWTAI_Pct_AccelPedalEffPosition;

    /* Update for UnitDelay: '<S876>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_b = VeWTAC_i_WashCountOut;

    /* Update for UnitDelay: '<S829>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_e = rtb_TmpSignalConversionAtVeBPCR;

    /* Update for UnitDelay: '<S820>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_n = VeWTAC_b_CurbeClimbing_TorqModulated;

    /* Update for UnitDelay: '<S987>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_nl = rtb_AND_p4;

    /* Update for UnitDelay: '<S1040>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_d = rtb_TmpSignalConversionAtVeCT_m;

    /* Update for UnitDelay: '<S323>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_n = rtb_TmpSignalConversionAtVeD_ly;

    /* Update for UnitDelay: '<S323>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_k =
        VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM4AeCst;

    /* Update for UnitDelay: '<S995>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_a4 = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilAeC;

    /* Update for UnitDelay: '<S1117>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_b = VeWTAC_M_PostRateLimAeC;

    /* Update for UnitDelay: '<S996>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_j = VeWTAC_M_AfterMainFilterAeC;

    /* Update for UnitDelay: '<S1040>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_oj = rtb_TmpSignalConversionAtVeCT_n;

    /* Update for UnitDelay: '<S1039>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_l = VeWTAI_Pct_AccelPedalEffPosition;

    /* Update for UnitDelay: '<S999>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_lm =
        VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM4AeCst;

    /* Update for UnitDelay: '<S987>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_iq =
        VeWTAC_b_CurbeClimbing_TorqModulated_xSEM4AeCst;

    /* Update for UnitDelay: '<S1147>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ly = rtb_OR1_em;

    /* Update for UnitDelay: '<S1199>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_o = rtb_Abs1_gm;

    /* Update for UnitDelay: '<S324>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_dm = rtb_TmpSignalConversionAtVeD_ly;

    /* Update for UnitDelay: '<S324>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_p = VeWTAC_M_OutputTorqueBeforeCurbClimbing_Raw;

    /* Update for UnitDelay: '<S1154>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch_fq;

    /* Update for UnitDelay: '<S1275>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_e = VeWTAC_M_PostRateLimRaw;

    /* Update for UnitDelay: '<S1155>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_c = VeWTAC_M_AfterMainFilterRaw;

    /* Update for UnitDelay: '<S1199>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_ck = rtb_Switch1_ee;

    /* Update for UnitDelay: '<S1198>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_bw = VeWTAI_Pct_AccelPedalEffPosition;

    /* Update for UnitDelay: '<S1158>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_jt = VeWTAC_M_CurbClimbingOutputTorqLimited_Raw;

    /* Update for UnitDelay: '<S1147>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_lw = VeWTAC_b_CurbeClimbing_TorqModulated_Raw;

    /* Update for UnitDelay: '<S1305>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_pj = rtb_TmpSignalConversionAtVeCCTR;

    /* Update for UnitDelay: '<S1357>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_ow = rtb_UnitDelay_co;

    /* Update for UnitDelay: '<S325>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_p0 = rtb_TmpSignalConversionAtVeD_ly;

    /* Update for UnitDelay: '<S325>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_ea =
        VeWTAC_M_OutputTorqueBeforeCurbClimbing_xSEM;

    /* Update for UnitDelay: '<S1312>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_io = VeWTAC_M_ToCmnd_AftLashCtrl_PstFilxSEM;

    /* Update for UnitDelay: '<S1433>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_bp = VeWTAC_M_PostRateLimxSEM;

    /* Update for UnitDelay: '<S1313>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_d = VeWTAC_M_AfterMainFilterxSEM;

    /* Update for UnitDelay: '<S1357>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_g = rtb_TmpSignalConversionAtVeAX_b;

    /* Update for UnitDelay: '<S1356>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_g = VeWTAI_Pct_AccelPedalEffPosition;

    /* Switch: '<S1357>/Switch4' incorporates:
     *  Constant: '<S1357>/Constant Value5'
     *  Constant: '<S1357>/Constant Value8'
     *  RelationalOperator: '<S1357>/Comparison3'
     *  Sum: '<S1357>/Sum'
     *  UnitDelay: '<S1357>/Unit Delay3'
     */
    if (((sint32)((uint16)(((uint32)WTAR_ac_DW.UnitDelay3_DSTATE_d) + 1U))) >
            65534)
    {
        /* Update for UnitDelay: '<S1357>/Unit Delay3' incorporates:
         *  Constant: '<S1357>/Constant Value7'
         */
        WTAR_ac_DW.UnitDelay3_DSTATE_d = 0U;
    }
    else
    {
        /* Update for UnitDelay: '<S1357>/Unit Delay3' */
        WTAR_ac_DW.UnitDelay3_DSTATE_d = (uint16)(((uint32)
            WTAR_ac_DW.UnitDelay3_DSTATE_d) + 1U);
    }

    /* End of Switch: '<S1357>/Switch4' */

    /* Update for UnitDelay: '<S1316>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_a = VeWTAC_M_CurbClimbingOutputTorqLimited_xSEM;

    /* Update for UnitDelay: '<S1305>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_iu = VeWTAC_b_CurbeClimbing_TorqModulated_xSEM;

    /* Update for UnitDelay: '<S331>/Unit Delay1' incorporates:
     *  UnitDelay: '<S301>/Unit Delay2'
     */
#if !Rte_SysCon_Variant_WTAR_2

    WTAR_ac_DW.UnitDelay1_DSTATE_b = rtb_Max_m;
    WTAR_ac_DW.UnitDelay2_DSTATE_h = VeWTAR_M_OutTrqReqOITR_ASL;

#endif

    /* End of Update for UnitDelay: '<S331>/Unit Delay1' */

    /* Update for UnitDelay: '<S601>/Unit Delay6' */
    WTAR_ac_DW.UnitDelay6_DSTATE = VeWTAC_M_OvrSpdPtn_PID;

    /* Update for UnitDelay: '<S599>/Unit Delay3' incorporates:
     *  Constant: '<S599>/TRUE Constant'
     */
    WTAR_ac_DW.UnitDelay3_DSTATE_h = true;

    /* Switch: '<S589>/Switch3' */
    if (rtb_TmpSignalConversionAtVeTRGR)
    {
        /* Update for UnitDelay: '<S589>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeCS_l;
    }
    else
    {
        /* Update for UnitDelay: '<S589>/Unit Delay' */
        WTAR_ac_DW.UnitDelay_DSTATE_d = VeWTAC_M_OvrRev_IniVal;
    }

    /* End of Switch: '<S589>/Switch3' */

    /* Update for UnitDelay: '<S532>/Unit Delay4' */
    WTAR_ac_DW.UnitDelay4_DSTATE_kf = rtb_TmpSignalConversionAtVeAXLR;

    /* Update for UnitDelay: '<S583>/Unit Delay4' */
    WTAR_ac_DW.UnitDelay4_DSTATE_b = rtb_TmpSignalConversionAtVeBT_h;

    /* Update for UnitDelay: '<S538>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_bm = rtb_TmpSignalConversionAtVeTRNR;

    /* Update for UnitDelay: '<S522>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_a = VeWTAC_M_OvrSpdPtn_PID;

    /* Update for UnitDelay: '<S537>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtVeMSPR;

    /* Update for UnitDelay: '<S539>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_p = rtb_Sum4_a;

    /* Update for UnitDelay: '<S540>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_m = rtb_TmpSignalConversionAtVeESPR;

    /* Update for UnitDelay: '<S542>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_fa = rtb_TmpSignalConversionAtVeHS_m;

    /* Update for UnitDelay: '<S541>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_jk = rtb_TmpSignalConversionAtVeHSCR;

    /* Update for UnitDelay: '<S530>/Unit Delay2' */
    WTAR_ac_DW.UnitDelay2_DSTATE_ny = VeWTAC_M_OutTrqReqOITR_xPRNDL;

    /* Update for UnitDelay: '<S671>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jn = rtb_TmpSignalConversionAtVeCTCR;

    /* Update for UnitDelay: '<S671>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_ft = rtb_TmpSignalConversionAtVeVSDR;

    /* Update for UnitDelay: '<S530>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_m3 = VeWTAC_M_OutTrqReqHTDR_xPRNDL;

    /* Update for UnitDelay: '<S672>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeAX_k;

    /* Update for UnitDelay: '<S672>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_ah = rtb_TmpSignalConversionAtVeBTQR;

    /* Update for UnitDelay: '<S530>/Unit Delay4' */
    WTAR_ac_DW.UnitDelay4_DSTATE_o = VeWTAC_M_AfterToClip_xSEM_xPRNDL;

    /* Update for UnitDelay: '<S674>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVeS_dq;

    /* Update for UnitDelay: '<S674>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_i = rtb_TmpSignalConversionAtVeSC_f;

    /* Update for UnitDelay: '<S530>/Unit Delay5' */
    WTAR_ac_DW.UnitDelay5_DSTATE = VeWTAC_M_ToNet_Arb_xSEM_xPRNDL;

    /* Update for UnitDelay: '<S675>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_jr = rtb_TmpSignalConversionAtVeSC_c;

    /* Update for UnitDelay: '<S675>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_pm = rtb_TmpSignalConversionAtVeSC_j;

    /* Update for UnitDelay: '<S530>/Unit Delay6' */
    WTAR_ac_DW.UnitDelay6_DSTATE_b = VeWTAC_M_OutTrqPot_xPRNDL;

    /* Update for UnitDelay: '<S676>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_ns = rtb_Abs1;

    /* Update for UnitDelay: '<S676>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_h3 = rtb_Switch3_c1;

    /* Update for UnitDelay: '<S530>/Unit Delay3' */
    WTAR_ac_DW.UnitDelay3_DSTATE_l = VeWTAC_M_OutTrqRaw_xPRNDL;

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_dc = rtb_Sum1_oe;

    /* Update for UnitDelay: '<S673>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_ov = rtb_Maximum_i;

    /* Update for UnitDelay: '<S530>/Unit Delay7' */
    WTAR_ac_DW.UnitDelay7_DSTATE = VeWTAC_M_OutTrqRawShpd_xPRNDL;

    /* Update for UnitDelay: '<S677>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_lv = rtb_Switch1_bbt;

    /* Update for UnitDelay: '<S677>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_dp = rtb_Maximum_jf;

    /* Update for UnitDelay: '<S410>/Unit Delay' incorporates:
     *  UnitDelay: '<S410>/Unit Delay1'
     *  UnitDelay: '<S410>/Unit Delay2'
     *  UnitDelay: '<S410>/Unit Delay3'
     *  UnitDelay: '<S410>/Unit Delay4'
     *  UnitDelay: '<S410>/Unit Delay5'
     */
#if Rte_SysCon_Variant_WTAR_3

    WTAR_ac_DW.UnitDelay_DSTATE_k5 = VeWTAC_M_ToHTDR_DTCM_Out;
    WTAR_ac_DW.UnitDelay1_DSTATE_cp = VeWTAC_M_ToOITR_DTCM_Out;
    WTAR_ac_DW.UnitDelay2_DSTATE_b1 = VeWTAC_M_ToRaw_DTCM_Out;
    WTAR_ac_DW.UnitDelay3_DSTATE_j = VeWTAC_M_ToPot_DTCM_Out;
    WTAR_ac_DW.UnitDelay4_DSTATE_a = VeWTAC_M_ToxSEM_DTCM_Out;
    WTAR_ac_DW.UnitDelay5_DSTATE_h = VeWTAC_M_ToRawxShp_DTCM_Out;

#endif

    /* End of Update for UnitDelay: '<S410>/Unit Delay' */

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    for (i = 0; i < 2; i++)
    {
        WTAR_ac_DW.UnitDelay_DSTATE_n3[i] = rtb_Switch1_i0j[i];
    }

    /* End of Update for UnitDelay: '<S302>/Unit Delay' */

    /* Update for UnitDelay: '<S331>/Unit Delay' incorporates:
     *  UnitDelay: '<S301>/Unit Delay1'
     *  UnitDelay: '<S332>/Unit Delay'
     *  UnitDelay: '<S332>/Unit Delay1'
     *  UnitDelay: '<S343>/Unit Delay'
     *  UnitDelay: '<S343>/Unit Delay1'
     *  UnitDelay: '<S344>/Unit Delay'
     *  UnitDelay: '<S344>/Unit Delay1'
     *  UnitDelay: '<S345>/Unit Delay'
     *  UnitDelay: '<S345>/Unit Delay1'
     *  UnitDelay: '<S346>/Unit Delay'
     *  UnitDelay: '<S346>/Unit Delay1'
     *  UnitDelay: '<S347>/Unit Delay'
     *  UnitDelay: '<S347>/Unit Delay1'
     *  UnitDelay: '<S348>/Unit Delay'
     *  UnitDelay: '<S348>/Unit Delay1'
     *  UnitDelay: '<S363>/Unit Delay'
     *  UnitDelay: '<S363>/Unit Delay1'
     */
#if !Rte_SysCon_Variant_WTAR_2

    WTAR_ac_DW.UnitDelay_DSTATE_i3 = rtb_Switch2_js;
    WTAR_ac_DW.UnitDelay1_DSTATE_h4 = rtb_Max_d;
    WTAR_ac_DW.UnitDelay1_DSTATE_py = WTAR_ac_B.VeWTAR_M_OutTrqReqHTDR_ASL;
    WTAR_ac_DW.UnitDelay_DSTATE_ej = rtb_Switch2_ik;
    WTAR_ac_DW.UnitDelay_DSTATE_m = VeWTAR_M_Mx_ASL;
    WTAR_ac_DW.UnitDelay_DSTATE_it = rtb_Switch2_gl;
    WTAR_ac_DW.UnitDelay1_DSTATE_hz = rtb_Switch1_o1;
    WTAR_ac_DW.UnitDelay_DSTATE_g3 = rtb_Switch2_ou;
    WTAR_ac_DW.UnitDelay1_DSTATE_dx = rtb_Switch1_ev;
    WTAR_ac_DW.UnitDelay_DSTATE_h = rtb_UnitDelay_p4;
    WTAR_ac_DW.UnitDelay1_DSTATE_mr = rtb_Switch1_as;
    WTAR_ac_DW.UnitDelay1_DSTATE_dk = VeWTAR_M_Mn_ASL;
    WTAR_ac_DW.UnitDelay_DSTATE_ioq = rtb_Switch3_mt;
    WTAR_ac_DW.UnitDelay1_DSTATE_po = rtb_Switch1_hw;
    WTAR_ac_DW.UnitDelay_DSTATE_lm = rtb_Switch2_o0;
    WTAR_ac_DW.UnitDelay1_DSTATE_eo = rtb_Switch1_how;
    WTAR_ac_DW.UnitDelay_DSTATE_nr = rtb_UnitDelay1_oi;
    WTAR_ac_DW.UnitDelay1_DSTATE_g4 = rtb_Switch1_d3;

#endif

    /* End of Update for UnitDelay: '<S331>/Unit Delay' */

    /* Update for UnitDelay: '<S305>/Unit Delay' incorporates:
     *  UnitDelay: '<S305>/Unit Delay1'
     *  UnitDelay: '<S406>/Unit Delay'
     *  UnitDelay: '<S406>/Unit Delay1'
     *  UnitDelay: '<S407>/Unit Delay'
     *  UnitDelay: '<S407>/Unit Delay1'
     */
#if Rte_SysCon_Variant_WTAR_9

    WTAR_ac_DW.UnitDelay_DSTATE_o = rtb_Summation_la;
    WTAR_ac_DW.UnitDelay1_DSTATE_fj = rtb_Summation_ce;
    WTAR_ac_DW.UnitDelay_DSTATE_ih = rtb_Switch2_bqf;
    WTAR_ac_DW.UnitDelay1_DSTATE_kis = rtb_Max_ob;
    WTAR_ac_DW.UnitDelay_DSTATE_b2 = rtb_Switch2_jq;
    WTAR_ac_DW.UnitDelay1_DSTATE_ps = rtb_Max;

#endif

    /* End of Update for UnitDelay: '<S305>/Unit Delay' */

    /* Update for UnitDelay: '<S724>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_es = rtb_TmpSignalConversionAtVeSCCR;

    /* Update for UnitDelay: '<S723>/Unit Delay1' */
    WTAR_ac_DW.UnitDelay1_DSTATE_aq = rtb_TmpSignalConversionAtVeA_b3;

    /* Update for UnitDelay: '<S723>/Unit Delay' */
    WTAR_ac_DW.UnitDelay_DSTATE_lvz = rtb_UnitDelay3_kz;

    /* Update for UnitDelay: '<S319>/Unit Delay1' incorporates:
     *  UnitDelay: '<S319>/Unit Delay'
     *  UnitDelay: '<S319>/Unit Delay2'
     *  UnitDelay: '<S319>/Unit Delay3'
     *  UnitDelay: '<S319>/Unit Delay4'
     */
#if !Rte_SysCon_Variant_WTAR_8

    WTAR_ac_DW.UnitDelay1_DSTATE_poi = VeWTAC_phi_GradeAngleLatched;
    WTAR_ac_DW.UnitDelay3_DSTATE_o = rtb_Switch_jv;
    WTAR_ac_DW.UnitDelay4_DSTATE_d = VeWTAC_phi_ContMtrPos;
    WTAR_ac_DW.UnitDelay2_DSTATE_m = rtb_TmpSignalConversionAtVeM_mo;
    WTAR_ac_DW.UnitDelay_DSTATE_bf = VeWTAC_phi_MtrPosLatchd;

#endif

    /* End of Update for UnitDelay: '<S319>/Unit Delay1' */

    /* Outport: '<Root>/VeWTAR_b_ASL_Active' incorporates:
     *  Gain: '<S328>/Gain'
     *  SignalConversion generated from: '<S1>/ASL_Active'
     */
    (void)Rte_Write_VeWTAR_b_ASL_Active_Value(rtb_TmpSignalConversionAtVeAS_j);

    /* Outport: '<Root>/VeWTAR_M_ASL_PIDTrq' incorporates:
     *  Gain: '<S329>/Gain'
     *  SignalConversion generated from: '<S1>/ASL_PIDTrq'
     */
    (void)Rte_Write_VeWTAR_M_ASL_PIDTrq_Value(rtb_VariantMerge_For_Variant__f[0]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_IntndedAxleTrq_Shpd' incorporates:
     *  SignalConversion generated from: '<S1>/AxleTrqStatic_D_TTC'
     */
    (void)Rte_Write_VeWTAR_M_IntndedAxleTrq_Shpd_Value
        (WTAR_ac_B.VariantMerge_For_Variant_Source[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outport: '<Root>/VeWTAR_M_IntndedAxleTrq_xShpng' incorporates:
     *  SignalConversion generated from: '<S1>/AxleTrq_DrvReqMod'
     *  SignalConversion generated from: '<S6>/AxleTrq_DrvReqMod'
     */
    (void)Rte_Write_VeWTAR_M_IntndedAxleTrq_xShpng_Value
        (WTAR_ac_B.VariantMerge_For_Variant_Source[1]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_r_CombRatio' incorporates:
     *  SignalConversion generated from: '<S1>/ComboRatio'
     */
    (void)Rte_Write_VeWTAR_r_CombRatio_Value(WTAR_ac_B.Gain_c);

    /* Outport: '<Root>/VeWTAR_M_AeCoastTorqDiff' incorporates:
     *  SignalConversion generated from: '<S1>/DiffTrq'
     */
    (void)Rte_Write_VeWTAR_M_AeCoastTorqDiff_Value(WTAR_ac_B.Gain_dp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outport: '<Root>/VeWTAR_b_FilByPass' incorporates:
     *  Gain: '<S873>/Gain'
     *  Logic: '<S6>/Logical1'
     *  SignalConversion generated from: '<S1>/FilByPass'
     */
    (void)Rte_Write_VeWTAR_b_FilByPass_Value(((WTAR_ac_B.VeWTAR_b_ToClipActive) ||
        rtb_TmpSignalConversionAtVeBRKR) || tmpRead_f);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Outport: '<Root>/VeWTAR_M_Typ1Max' incorporates:
     *  Gain: '<S199>/Gain'
     *  SignalConversion generated from: '<S1>/MaxTyp1'
     */
    (void)Rte_Write_VeWTAR_M_Typ1Max_Value(VeWTAC_M_Max4Converter2FW_Typ1);

    /* Outport: '<Root>/VeWTAR_M_Typ1Min' incorporates:
     *  Gain: '<S198>/Gain'
     *  SignalConversion generated from: '<S1>/Min4Converter2FW_Tp1'
     */
    (void)Rte_Write_VeWTAR_M_Typ1Min_Value(VeWTAC_M_Min4Converter2FW_Typ1);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outport: '<Root>/VeWTAR_M_OutTorqReqHTDR_OvrSpd' incorporates:
     *  Gain: '<S524>/Gain'
     *  SignalConversion generated from: '<S1>/OutTorqReqHTDR_OvrSpd'
     */
    (void)Rte_Write_VeWTAR_M_OutTorqReqHTDR_OvrSpd_Value
        (rtb_VariantMerge_For_Varian_a_1);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_OutTrqReqHTDR_ASL' incorporates:
     *  SignalConversion generated from: '<S1>/OutTrqReqHTDR_ASL'
     */
    (void)Rte_Write_VeWTAR_M_OutTrqReqHTDR_ASL_Value
        (WTAR_ac_B.VeWTAR_M_OutTrqReqHTDR_ASL);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Outport: '<Root>/VeWTAR_k_PRNDL_Coeff_Phy' incorporates:
     *  Gain: '<S268>/Gain'
     *  SignalConversion generated from: '<S1>/PRNDL_Coeff_Phy'
     */
    (void)Rte_Write_VeWTAR_k_PRNDL_Coeff_Phy_Value(rtb_Switch1_hk[2]);

    /* Outport: '<Root>/VeWTAR_k_PRNDL_Coeff_Stgc' incorporates:
     *  Gain: '<S269>/Gain'
     *  SignalConversion generated from: '<S1>/PRNDL_Coeff_Stgc'
     */
    (void)Rte_Write_VeWTAR_k_PRNDL_Coeff_Stgc_Value(rtb_Switch1_hk[1]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_Raw_Prdctd_Tact' incorporates:
     *  SignalConversion generated from: '<S1>/Raw_Prdctd_Tact'
     */
    (void)Rte_Write_VeWTAR_M_Raw_Prdctd_Tact_Value(rtb_Switch_fq);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outport: '<Root>/VeWTAR_M_ToAxle_xSEM' incorporates:
     *  Gain: '<S526>/Gain'
     *  SignalConversion generated from: '<S1>/ToAxle_xSEM'
     */
    (void)Rte_Write_VeWTAR_M_ToAxle_xSEM_Value(rtb_VariantMerge_For_Varian_a_2);

    /* Outport: '<Root>/VeWTAR_M_ToNet_Arb_xSEM_OvrSpd' incorporates:
     *  Gain: '<S527>/Gain'
     *  SignalConversion generated from: '<S1>/ToNet_Arb_xSEM_OvrSpd'
     */
    (void)Rte_Write_VeWTAR_M_ToNet_Arb_xSEM_OvrSpd_Value
        (rtb_VariantMerge_For_Varian_a_3);

    /* Outport: '<Root>/VeWTAR_M_ToReqImmd' incorporates:
     *  Gain: '<S721>/Gain'
     *  SignalConversion generated from: '<S1>/ToReqImmd'
     */
    (void)Rte_Write_VeWTAR_M_ToReqImmd_Value(rtb_Switch2_ol5);

    /* Outport: '<Root>/VeWTAR_M_ToReqPot' incorporates:
     *  SignalConversion generated from: '<S1>/ToReqPot'
     *  Sum: '<S723>/Sum'
     */
    (void)Rte_Write_VeWTAR_M_ToReqPot_Value(rtb_TmpSignalConversionAtVeA_b3);

    /* Switch: '<S301>/Switch5' incorporates:
     *  MinMax: '<S301>/MinMax2'
     */
    if (rtb_TmpSignalConversionAtVeAS_j)
    {
        rtb_TmpSignalConversionAtVeM_mo = fminf(rtb_MinMax_n,
            rtb_VariantMerge_For_Variant__f[0]);
    }
    else
    {
        rtb_TmpSignalConversionAtVeM_mo = rtb_MinMax_n;
    }

    /* End of Switch: '<S301>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_ToReqPrdctd' incorporates:
     *  SignalConversion generated from: '<S1>/ToReqPrdtcd'
     */
    (void)Rte_Write_VeWTAR_M_ToReqPrdctd_Value(rtb_TmpSignalConversionAtVeM_mo);

    /* Outport: '<Root>/VeWTAR_b_AeCoastTorqDiffActv' incorporates:
     *  SignalConversion generated from: '<S1>/TorqDiffActive'
     */
    (void)Rte_Write_VeWTAR_b_AeCoastTorqDiffActv_Value(Switch1_g);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outport: '<Root>/VeWTAR_M_FrntAxlMaxRq' incorporates:
     *  Gain: '<S379>/Gain'
     *  SignalConversion generated from: '<S1>/VeWTAC_M_FrntAxlMaxRq'
     */
    (void)Rte_Write_VeWTAR_M_FrntAxlMaxRq_Value(rtb_TmpSignalConversionAtVeDT_i);

    /* Outport: '<Root>/VeWTAR_M_FrntAxlMinRq' incorporates:
     *  Gain: '<S380>/Gain'
     *  SignalConversion generated from: '<S1>/VeWTAC_M_FrntAxlMinRq'
     */
    (void)Rte_Write_VeWTAR_M_FrntAxlMinRq_Value(rtb_MinMax18);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_PostThermPrt' incorporates:
     *  SignalConversion generated from: '<S1>/VeWTAC_M_ToRaw_PostThermPrtct'
     */
    (void)Rte_Write_VeWTAR_M_PostThermPrt_Value(rtb_MinMax_n);

    /* Outport: '<Root>/VeWTAR_b_ESCTrqEnabled' incorporates:
     *  SignalConversion generated from: '<S1>/VeWTAC_b_ESCTrqEnabled'
     */
    (void)Rte_Write_VeWTAR_b_ESCTrqEnabled_Value(rtb_TmpSignalConversionAtVeSRAR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ArbOutTorq'
     */
    /* If: '<S18>/If' incorporates:
     *  Constant: '<S194>/Constant'
     *  SignalConversion generated from: '<S192>/VeWTAC_e_TrqArbThrmlDeRate'
     */
    if (rtb_Vector_bo < 0.999F)
    {
        /* Outputs for IfAction SubSystem: '<S18>/ThrmlDerateOn' incorporates:
         *  ActionPort: '<S192>/Action Port'
         */
        rtb_VeWTAC_e_ToTypeAftSOCArb = CeWTAR_e_ThermalDerate;

        /* End of Outputs for SubSystem: '<S18>/ThrmlDerateOn' */
    }

    /* End of If: '<S18>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_e_TrqArb' incorporates:
     *  SignalConversion generated from: '<S1>/VeWTAC_e_TrqArbTyp'
     */
    (void)Rte_Write_VeWTAR_e_TrqArb_Value(rtb_VeWTAC_e_ToTypeAftSOCArb);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Outport: '<Root>/VeWTAR_r_PRNDL_Coeff' incorporates:
     *  Gain: '<S267>/Gain'
     *  SignalConversion generated from: '<S1>/VeWTAC_r_PRNDL_Coeff'
     */
    (void)Rte_Write_VeWTAR_r_PRNDL_Coeff_Value(rtb_Switch1_hk[0]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI' incorporates:
     *  SignalConversion generated from: '<S1>/VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI'
     */
    (void)Rte_Write_VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI_Value(rtb_Switch3_k3z);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/InpTrqProc'
     */
    /* Outport: '<Root>/VeWTAR_M_MinPedal_StgcAxle' incorporates:
     *  Gain: '<S269>/Gain'
     *  Product: '<S206>/Multiplication15'
     *  SignalConversion generated from: '<S1>/VeWTAR_M_MinPedal_StgcAxle'
     */
    (void)Rte_Write_VeWTAR_M_MinPedal_StgcAxle_Value(VeWTAI_M_NormalMinStgc *
        rtb_Switch1_hk[1]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_MinPreConvsn' incorporates:
     *  SignalConversion generated from: '<S1>/VeWTAR_M_MinPreConvsn'
     */
    (void)Rte_Write_VeWTAR_M_MinPreConvsn_Value(rtb_TmpSignalConversionAtVeDT_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outport: '<Root>/VeWTAR_M_ToReqOITR' incorporates:
     *  Gain: '<S315>/Gain'
     *  SignalConversion generated from: '<S1>/VeWTAR_M_ToReqOITR'
     */
    (void)Rte_Write_VeWTAR_M_ToReqOITR_Value(rtb_TmpSignalConversionAtVeSCCR);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_ToReqPark' incorporates:
     *  SignalConversion generated from: '<S1>/VeWTAR_M_ToReqPark'
     */
    (void)Rte_Write_VeWTAR_M_ToReqPark_Value
        (WTAR_ac_B.VariantMerge_For_Variant_Sour_a);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/To_FltAndShap'
     */
    /* Outport: '<Root>/VeWTAR_M_ToReqStgc_PostLim' incorporates:
     *  MinMax: '<S723>/MinMax7'
     *  SignalConversion generated from: '<S1>/VeWTAR_M_ToReqStgc_PostLim'
     */
    (void)Rte_Write_VeWTAR_M_ToReqStgc_PostLim_Value(fmaxf
        (VeWTAC_M_ToReqStgc_PreLim, VeWTAC_M_Min4ShapeStgc));

    /* Outport: '<Root>/VeWTAR_b_IsToRequestClipped' incorporates:
     *  Gain: '<S313>/Gain'
     *  SignalConversion generated from: '<S1>/VeWTAR_b_ToClipped'
     */
    (void)Rte_Write_VeWTAR_b_IsToRequestClipped_Value
        (WTAR_ac_B.VeWTAR_b_ToClipActive);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, WTAR_CODE) WTAR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/WTAR_PwrOff'
     */
    /* Outport: '<Root>/NeWTAR_Pct_GradeCurrent_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeWTAR_Pct_GradeCurrent'
     */
    (void)Rte_Write_NeWTAR_Pct_GradeCurrent_NeWTAR_Pct_GradeCurrent
        (WTAR_ac_DW.NeWTAR_Pct_GradeCurrent);

    /* Outport: '<Root>/NeWTAR_Pct_GradeCurrent_Raw_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeWTAR_Pct_GradeCurrent_Raw'
     */
    (void)Rte_Write_NeWTAR_Pct_GradeCurrent_Raw_NeWTAR_Pct_GradeCurrent_Raw
        (WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_Raw);

    /* Outport: '<Root>/NeWTAR_Pct_GradeCurrent_xSEM_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeWTAR_Pct_GradeCurrent_xSEM'
     */
    (void)Rte_Write_NeWTAR_Pct_GradeCurrent_xSEM_NeWTAR_Pct_GradeCurrent_xSEM
        (WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM);

    /* Outport: '<Root>/NeWTAR_Pct_GradeCurrent_xSEM4AeCst_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeWTAR_Pct_GradeCurrent_xSEM4AeCst'
     */
    (void)
        Rte_Write_NeWTAR_Pct_GradeCurrent_xSEM4AeCst_NeWTAR_Pct_GradeCurrent_xSEM4AeCst
        (WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM4Ae);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, WTAR_CODE) WTAR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/WTAR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S1504>/NeWTAR_Pct_GradeCurrent_xSEM4AeCst' incorporates:
     *  Inport: '<Root>/NeWTAR_Pct_GradeCurrent_xSEM4AeCst_PM_In'
     */
    (void)
        Rte_Read_NeWTAR_Pct_GradeCurrent_xSEM4AeCst_Rx_NeWTAR_Pct_GradeCurrent_xSEM4AeCst
        (&WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM4Ae);

    /* DataStoreWrite: '<S1504>/NeWTAR_Pct_GradeCurrent_xSEM' incorporates:
     *  Inport: '<Root>/NeWTAR_Pct_GradeCurrent_xSEM_PM_In'
     */
    (void)Rte_Read_NeWTAR_Pct_GradeCurrent_xSEM_Rx_NeWTAR_Pct_GradeCurrent_xSEM(
        &WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_xSEM);

    /* DataStoreWrite: '<S1504>/NeWTAR_Pct_GradeCurrent_Raw' incorporates:
     *  Inport: '<Root>/NeWTAR_Pct_GradeCurrent_Raw_PM_In'
     */
    (void)Rte_Read_NeWTAR_Pct_GradeCurrent_Raw_Rx_NeWTAR_Pct_GradeCurrent_Raw
        (&WTAR_ac_DW.NeWTAR_Pct_GradeCurrent_Raw);

    /* DataStoreWrite: '<S1504>/NeWTAR_Pct_GradeCurrent' incorporates:
     *  Inport: '<Root>/NeWTAR_Pct_GradeCurrent_PM_In'
     */
    (void)Rte_Read_NeWTAR_Pct_GradeCurrent_Rx_NeWTAR_Pct_GradeCurrent
        (&WTAR_ac_DW.NeWTAR_Pct_GradeCurrent);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/WTAO_PwrUpRoutine'
     */
    /* SignalConversion generated from: '<S1506>/VeWTAR_b_IsToRequestClippedInit' */
    WTAR_ac_B.OutportBufferForVeWTAR_b_IsToRe = false;

    /* SignalConversion generated from: '<S1506>/VeWTAR_e_ToArbType' incorporates:
     *  Constant: '<S1507>/Constant'
     */
    WTAR_ac_B.OutportBufferForVeWTAR_e_ToArbT = WTAR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1506>/VeWTAR_r_PRNDL_CoeffInit' */
    WTAR_ac_B.OutportBufferForVeWTAR_r_PRNDL_ = 0.0F;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1505>/VeWTAR_M_AeCoastTorqDiff_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_AeCoas = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_b_AeCoastTorqDiffActv_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_b_AeCoas = false;

    /* SignalConversion generated from: '<S1505>/VeWTAR_b_ASL_Active_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_b_ASL_Ac = false;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_OutTrqReqHTDR_ASL_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_OutTrq = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_b_FilByPass_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_b_FilByP = false;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToArb_ESC_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToArb_ = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ASL_PIDTrq_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ASL_PI = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_OutTorqReqHTDR_OvrSpd_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_OutTor = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_Raw_Prdctd_Tact_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_Raw_Pr = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToAxle_xSEM_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToAxle = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToNet_Arb_xSEM_OvrSpd_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToNet_ = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToReqImmd_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqI = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToReqPot_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqP = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToReqPrdctd_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToRe_l = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToReqOITR_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqO = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_PostThermPrt_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_PostTh = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToReqPark_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToRe_m = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_Typ1Max_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_Typ1Ma = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_Typ1Min_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_Typ1Mi = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_r_CombRatio_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_r_CombRa = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_k_PRNDL_Coeff_Stgc_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_k_PRNDL_ = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_ToReqStgc_PostLim_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqS = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_MinPedal_StgcAxle_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_MinPed = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_MinPreConvsn_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_MinPre = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_k_PRNDL_Coeff_Phy_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_k_PRND_l = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_IntndedAxleTrq_Shpd_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_Intnde = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_IntndedAxleTrq_xShpng_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_Intn_d = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_FrntAxlMaxRq_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_FrntAx = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_FrntAxlMinRq_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_Frnt_p = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_RrAxlMinRq_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_RrAxlM = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_M_RrAxlMaxRq_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_M_RrAx_e = 0.0F;

    /* SignalConversion generated from: '<S1505>/VeWTAR_b_ESCTrqEna_Out_Init' */
    WTAR_ac_B.OutportBufferForVeWTAR_b_ESCTrq = false;

    /* SignalConversion generated from: '<S1505>/IntndedAxleTrq_Shpd_xDMPI_Out_Init' */
    WTAR_ac_B.OutportBufferForIntndedAxleTrq_ = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI' incorporates:
     *  SignalConversion generated from: '<S3>/IntndedAxleTrq_Shpd_xDMPI_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_IntndedAxleTrq_Shpd_xDMPI_Value
        (WTAR_ac_B.OutportBufferForIntndedAxleTrq_);

    /* Outport: '<Root>/VeWTAR_M_ASL_PIDTrq' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ASL_PIDTrq_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ASL_PIDTrq_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ASL_PI);

    /* Outport: '<Root>/VeWTAR_M_AeCoastTorqDiff' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_AeCoastTorqDiff_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_AeCoastTorqDiff_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_AeCoas);

    /* Outport: '<Root>/VeWTAR_M_FrntAxlMaxRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_FrntAxlMaxRq_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_FrntAxlMaxRq_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_FrntAx);

    /* Outport: '<Root>/VeWTAR_M_FrntAxlMinRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_FrntAxlMinRq_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_FrntAxlMinRq_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_Frnt_p);

    /* Outport: '<Root>/VeWTAR_M_IntndedAxleTrq_Shpd' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_IntndedAxleTrq_Shpd_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_IntndedAxleTrq_Shpd_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_Intnde);

    /* Outport: '<Root>/VeWTAR_M_IntndedAxleTrq_xShpng' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_IntndedAxleTrq_xShpng_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_IntndedAxleTrq_xShpng_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_Intn_d);

    /* Outport: '<Root>/VeWTAR_M_MinPedal_StgcAxle' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_MinPedal_StgcAxle_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_MinPedal_StgcAxle_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_MinPed);

    /* Outport: '<Root>/VeWTAR_M_MinPreConvsn' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_MinPreConvsn_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_MinPreConvsn_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_MinPre);

    /* Outport: '<Root>/VeWTAR_M_OutTorqReqHTDR_OvrSpd' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_OutTorqReqHTDR_OvrSpd_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_OutTorqReqHTDR_OvrSpd_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_OutTor);

    /* Outport: '<Root>/VeWTAR_M_OutTrqReqHTDR_ASL' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_OutTrqReqHTDR_ASL_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_OutTrqReqHTDR_ASL_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_OutTrq);

    /* Outport: '<Root>/VeWTAR_M_PostThermPrt' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_PostThermPrt_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_PostThermPrt_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_PostTh);

    /* Outport: '<Root>/VeWTAR_M_Raw_Prdctd_Tact' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_Raw_Prdctd_Tact_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_Raw_Prdctd_Tact_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_Raw_Pr);

    /* Outport: '<Root>/VeWTAR_M_RrAxlMaxRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_RrAxlMaxRq_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_RrAxlMaxRq_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_RrAx_e);

    /* Outport: '<Root>/VeWTAR_M_RrAxlMinRq' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_RrAxlMinRq_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_RrAxlMinRq_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_RrAxlM);

    /* Outport: '<Root>/VeWTAR_M_ToArb_ESC' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToArb_ESC_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToArb_ESC_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToArb_);

    /* Outport: '<Root>/VeWTAR_M_ToAxle_xSEM' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToAxle_xSEM_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToAxle_xSEM_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToAxle);

    /* Outport: '<Root>/VeWTAR_M_ToNet_Arb_xSEM_OvrSpd' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToNet_Arb_xSEM_OvrSpd_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToNet_Arb_xSEM_OvrSpd_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToNet_);

    /* Outport: '<Root>/VeWTAR_M_ToReqImmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToReqImmd_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToReqImmd_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqI);

    /* Outport: '<Root>/VeWTAR_M_ToReqOITR' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToReqOITR_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToReqOITR_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqO);

    /* Outport: '<Root>/VeWTAR_M_ToReqPark' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToReqPark_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToReqPark_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToRe_m);

    /* Outport: '<Root>/VeWTAR_M_ToReqPot' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToReqPot_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToReqPot_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqP);

    /* Outport: '<Root>/VeWTAR_M_ToReqPrdctd' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToReqPrdctd_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToReqPrdctd_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToRe_l);

    /* Outport: '<Root>/VeWTAR_M_ToReqStgc_PostLim' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_ToReqStgc_PostLim_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_ToReqStgc_PostLim_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_ToReqS);

    /* Outport: '<Root>/VeWTAR_M_Typ1Max' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_Typ1Max_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_Typ1Max_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_Typ1Ma);

    /* Outport: '<Root>/VeWTAR_M_Typ1Min' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_M_Typ1Min_Out_Init'
     */
    (void)Rte_Write_VeWTAR_M_Typ1Min_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_M_Typ1Mi);

    /* Outport: '<Root>/VeWTAR_b_ASL_Active' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_b_ASL_Active_Out_Init'
     */
    (void)Rte_Write_VeWTAR_b_ASL_Active_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_b_ASL_Ac);

    /* Outport: '<Root>/VeWTAR_b_AeCoastTorqDiffActv' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_b_AeCoastTorqDiffActv_Out_Init'
     */
    (void)Rte_Write_VeWTAR_b_AeCoastTorqDiffActv_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_b_AeCoas);

    /* Outport: '<Root>/VeWTAR_b_ESCTrqEnabled' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_b_ESCTrqEna_Out_Init'
     */
    (void)Rte_Write_VeWTAR_b_ESCTrqEnabled_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_b_ESCTrq);

    /* Outport: '<Root>/VeWTAR_b_FilByPass' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_b_FilByPass_Out_Init'
     */
    (void)Rte_Write_VeWTAR_b_FilByPass_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_b_FilByP);

    /* Outport: '<Root>/VeWTAR_b_IsToRequestClipped' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_b_IsToRequestClippedInit'
     */
    (void)Rte_Write_VeWTAR_b_IsToRequestClipped_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_b_IsToRe);

    /* Outport: '<Root>/VeWTAR_e_TrqArb' incorporates:
     *  SignalConversion generated from: '<S1506>/VeWTAR_e_ToArbType'
     *  SignalConversion generated from: '<S3>/VeWTAR_e_ToArbType'
     */
    (void)Rte_Write_VeWTAR_e_TrqArb_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_e_ToArbT);

    /* Outport: '<Root>/VeWTAR_k_PRNDL_Coeff_Phy' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_k_PRNDL_Coeff_Phy_Out_Init'
     */
    (void)Rte_Write_VeWTAR_k_PRNDL_Coeff_Phy_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_k_PRND_l);

    /* Outport: '<Root>/VeWTAR_k_PRNDL_Coeff_Stgc' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_k_PRNDL_Coeff_Stgc_Out_Init'
     */
    (void)Rte_Write_VeWTAR_k_PRNDL_Coeff_Stgc_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_k_PRNDL_);

    /* Outport: '<Root>/VeWTAR_r_CombRatio' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_r_CombRatio_Out_Init'
     */
    (void)Rte_Write_VeWTAR_r_CombRatio_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_r_CombRa);

    /* Outport: '<Root>/VeWTAR_r_PRNDL_Coeff' incorporates:
     *  SignalConversion generated from: '<S3>/VeWTAR_r_PRNDL_CoeffInit'
     */
    (void)Rte_Write_VeWTAR_r_PRNDL_Coeff_Value
        (WTAR_ac_B.OutportBufferForVeWTAR_r_PRNDL_);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, WTAR_CODE) WTAR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
    VeWTAR_e_OvrSpdPtn_Type = CeWTAR_e_None;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/WTAR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/WTAO_PwrUpRoutine'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1506>/VeWTAR_e_ToArbType' incorporates:
     *  Constant: '<S1507>/Constant'
     */
    WTAR_ac_B.OutportBufferForVeWTAR_e_ToArbT = WTAR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeWTAR_e_TrqArb' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeWTAR_e_TrqArb_Value(CeWTAR_e_ECM_TorqReqst);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
