/*
 * File: HPMR_ac.c
 *
 * Code generated for Simulink model 'HPMR_ac'.
 *
 * Model version                  : 9.295
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:48:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HPMR_ac.h"

/* Named constants for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3
#define HPMR__IN_OPERATIONAL_ALTERNATOR ((uint8)21U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_ALT_HV_ENBLD        ((uint8)1U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_CMND_BUS_DISCH      ((uint8)2U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_CMND_CNTCTR_OPN     ((uint8)3U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_DISBL_ALT_HV        ((uint8)4U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_DISBL_INV           ((uint8)5U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_DISBL_INV_VC        ((uint8)6U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_DTRMN_HYBSYSST      ((uint8)7U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_ENBL_ALT_HV         ((uint8)8U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_ENBL_HV             ((uint8)9U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_ENBL_INV            ((uint8)10U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_ENBL_INV_VC         ((uint8)11U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_EVAL_ALT_HV_ENBL    ((uint8)12U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_EVAL_CNTCTR_OPN     ((uint8)13U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_EVAL_HV_ENBL        ((uint8)14U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_EVAL_PRPLSN_DISBL   ((uint8)15U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_HV_ENBLD            ((uint8)16U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_INIT_CNTRLR_PWRDWN  ((uint8)17U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_INV_ENBLD           ((uint8)18U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_INV_VC_ENBLD        ((uint8)19U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_OPERATIONAL         ((uint8)20U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_POWERUP             ((uint8)23U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_PRPLSN_DISBLD       ((uint8)24U)
#endif

#if Rte_SysCon_Variant_HPMR_3
#define HPM_IN_OPERATIONAL_CONVENTIONAL ((uint8)22U)
#endif

/* Named constants for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_a_IN_OPERATIONAL_SERIESCFG ((uint8)14U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_CMND_BUS_DISCH_p    ((uint8)1U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_CMND_CNTCTR_OPN_h   ((uint8)2U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_DISBL_INV_k         ((uint8)3U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_DTRMN_HYBSYSST_j    ((uint8)4U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_ENBL_HV_j           ((uint8)5U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_ENBL_INV_a          ((uint8)6U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_EVAL_CNTCTR_OPN_p   ((uint8)7U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_EVAL_HV_ENBL_k      ((uint8)8U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_EVAL_PRPLSN_DISBL_k ((uint8)9U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_HV_ENBLD_e          ((uint8)10U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_INIT_CNTRLR_PWRDWN_p ((uint8)11U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_INV_ENBLD_d         ((uint8)12U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_OPERATIONAL_p       ((uint8)13U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_POWERUP_l           ((uint8)15U)
#endif

#if !Rte_SysCon_Variant_HPMR_3
#define HPMR_ac_IN_PRPLSN_DISBLD_h     ((uint8)16U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HPMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, HPMR_VAR_INIT) HeHPMR_t_dT = 0.01F;/* Referenced by: '<S1622>/Calib' */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(uint16, HPMR_VAR_INIT) KeHPMR_Cnt_ALT_Mode_Retry = 100U;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

static volatile CONST(uint16, HPMR_VAR_INIT) KeHPMR_Cnt_ActDschDeb = 10U;/* Referenced by:
                                                                      * '<S140>/Calib'
                                                                      * '<S326>/Calib'
                                                                      */
static volatile CONST(uint16, HPMR_VAR_INIT) KeHPMR_Cnt_ActvDischTout = 240U;/* Referenced by:
                                                                      * '<S1165>/Calib'
                                                                      * '<S1324>/Calib'
                                                                      */
static volatile CONST(uint16, HPMR_VAR_INIT) KeHPMR_Cnt_HoldMtrNotInActvDschrg =
    240U;                              /* Referenced by:
                                        * '<S79>/Calib'
                                        * '<S228>/Calib'
                                        */
static volatile CONST(uint16, HPMR_VAR_INIT) KeHPMR_Cnt_SC_WkUp_EnblCANCDbnc =
    2U;                                /* Referenced by:
                                        * '<S1119>/Calib'
                                        * '<S1273>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_DC_CntctrCmdClose = 70.0F;/* Referenced by:
                                                                      * '<S1088>/Calib'
                                                                      * '<S1225>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_DC_CntctrCmdInvalid = 0.0F;/* Referenced by: '<S1635>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_DC_CntctrCmdOpen = 30.0F;/* Referenced by:
                                                                      * '<S1089>/Calib'
                                                                      * '<S1226>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_I_ContactorPackCurrent =
    2.0F;                              /* Referenced by:
                                        * '<S384>/Calib'
                                        * '<S662>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_I_ContactorPackCurrentCrash
    = 10.0F;                           /* Referenced by:
                                        * '<S385>/Calib'
                                        * '<S663>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_I_HV_BatCurrArb = 0.0F;/* Referenced by: '<S1420>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MaxMtrTorqPropEnbl = 5.0F;/* Referenced by:
                                                                      * '<S693>/Calib'
                                                                      * '<S436>/Calib'
                                                                      * '<S495>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MinMtrTorqPropEnbl =
    -5.0F;                             /* Referenced by:
                                        * '<S694>/Calib'
                                        * '<S437>/Calib'
                                        * '<S496>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MtrA_MaxTorqRaw = 0.0F;/* Referenced by: '<S1421>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MtrA_MinTorqRaw = 0.0F;/* Referenced by: '<S1422>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MtrB_MaxTorqRaw = 0.0F;/* Referenced by: '<S1423>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MtrB_MinTorqRaw = 0.0F;/* Referenced by: '<S1424>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MtrC_MaxTorqRaw = 0.0F;/* Referenced by: '<S1425>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_M_MtrC_MinTorqRaw = 0.0F;/* Referenced by: '<S1426>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_P_BattLTMaxLim = 0.0F;/* Referenced by: '<S1427>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_P_BattSysNotActvThresh =
    -100.0F;                           /* Referenced by:
                                        * '<S402>/Calib'
                                        * '<S666>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_P_HV_AccPwr = 0.0F;/* Referenced by: '<S1428>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_U_BusDischCmpltThresh =
    14.0F;                             /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        * '<S139>/Calib'
                                        * '<S325>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_U_DiscHV_BusShutdown =
    30.0F;                             /* Referenced by:
                                        * '<S85>/Calib'
                                        * '<S233>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_U_HV_Volt = 0.0F;/* Referenced by: '<S1429>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_U_PrechargeMinVolt = 200.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_12VP1f = 0;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_AHCPCoreFail = 0;/* Referenced by: '<S1430>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_APMFailure = 0;/* Referenced by: '<S1431>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_APM_BoostComplete = 1;/* Referenced by: '<S1432>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_AccRunActiveAnalog = 0;/* Referenced by: '<S1433>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_AfterRunReq = 0;/* Referenced by: '<S1434>/Calib' */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_AllwClsdMtrsNotEnbld = 0;/* Referenced by: '<S83>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_AuthenticationValid = 1;/* Referenced by: '<S1435>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_BPOpenPending = 0;/* Referenced by: '<S1436>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_BPOpnCntctrReq = 0;/* Referenced by: '<S1437>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_BSGModing = 0;/* Referenced by:
                                                                      * '<S34>/Calib'
                                                                      * '<S202>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ClrORCLossCommMem = 0;/* Referenced by:
                                                                      * '<S515>/Calib'
                                                                      * '<S751>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ClsCntcrCmd_LVCheck = 0;/* Referenced by: '<S1438>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_CntctrOpenHVIL_OvrdEnbl =
    0;                                 /* Referenced by:
                                        * '<S35>/Calib'
                                        * '<S203>/Calib'
                                        */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DrvReadyStsVal = 0;/* Referenced by: '<S1439>/Calib' */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblAPMBoostCmd = 0;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblAPMBuckSpclCmd = 0;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblAllwCntctrCls_InvFlt =
    1;                                 /* Referenced by:
                                        * '<S158>/Calib'
                                        * '<S352>/Calib'
                                        */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblBP_ReqOpen = 0;/* Referenced by:
                                                                      * '<S628>/Calib'
                                                                      * '<S967>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblDrvReadySts = 1;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblImpctChck12VStrt = 0;/* Referenced by: '<S1100>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvA = 0;/* Referenced by: '<S1440>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvA_INVR_Enbl = 1;/* Referenced by:
                                                                      * '<S1185>/Calib'
                                                                      * '<S1378>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvA_SRAR_Enbl = 1;/* Referenced by:
                                                                      * '<S1186>/Calib'
                                                                      * '<S1379>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvB = 0;/* Referenced by: '<S1441>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvB_INVR_Enbl = 1;/* Referenced by:
                                                                      * '<S1187>/Calib'
                                                                      * '<S1380>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvB_SRAR_Enbl = 0;/* Referenced by:
                                                                      * '<S1188>/Calib'
                                                                      * '<S1381>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvC = 0;/* Referenced by: '<S1442>/Calib' */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvC_INVR_Enbl = 1;/* Referenced by: '<S1189>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInvC_SRAR_Enbl = 0;/* Referenced by: '<S1190>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblInv_Check = 0;/* Referenced by: '<S174>/Calib' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblMtrBFdbckVCAltMd = 0;/* Referenced by: '<S438>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblMtrShtDwnSpd = 1;/* Referenced by:
                                                                      * '<S524>/Calib'
                                                                      * '<S760>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblP1fCond_Allw12VStrt =
    1;                                 /* Referenced by: '<S1112>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_DsblPrplsnSysArb_Out = 0;/* Referenced by: '<S1443>/Calib' */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Dsbl_MCPSPTChk_ALTMd = 1;/* Referenced by: '<S36>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ECMHoodOpen = 0;/* Referenced by: '<S1444>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnableCANC = 0;/* Referenced by: '<S1445>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnableCrashFastOpen = 1;/* Referenced by:
                                                                      * '<S1090>/Calib'
                                                                      * '<S1227>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnableHoodSw = 1;/* Referenced by:
                                                                      * '<S629>/Calib'
                                                                      * '<S968>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_EnblAllowCntctrClsd_InvFlt = 0;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblAltMdImpact = 0;/* Referenced by: '<S630>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblAltMdTransLocBPCM = 0;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblBuckSpclFdbck = 1;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S390>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblDfltMd = 1;/* Referenced by:
                                                                      * '<S38>/Calib'
                                                                      * '<S172>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblDiagn_InverterFaulted
    = 1;                               /* Referenced by: '<S39>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblExitPwrDwn = 1;/* Referenced by:
                                                                      * '<S40>/Calib'
                                                                      * '<S204>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblHEVBusOff_CntctrOpn =
    1;                                 /* Referenced by: '<S631>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_EnblHVBatSrvcDscnt_RapidShtDn = 1;/* Referenced by:
                                                * '<S159>/Calib'
                                                * '<S353>/Calib'
                                                */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblHVSys = 0;/* Referenced by: '<S1446>/Calib' */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblInvrtrCmd_ALT_Mode =
    1;                                 /* Referenced by:
                                        * '<S41>/Calib'
                                        * '<S439>/Calib'
                                        */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblMtrSys = 0;/* Referenced by: '<S1447>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblORCLoC_RapidShtDn = 1;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      * '<S160>/Calib'
                                                                      * '<S354>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_EnblOpnReq_SrvcProc1320_Out = 0;/* Referenced by: '<S969>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblOprMdSts_PropSysStrt =
    0;                                 /* Referenced by: '<S1113>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblPSACond_HdSw = 1;/* Referenced by:
                                                                      * '<S632>/Calib'
                                                                      * '<S970>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblPropSysModeOvrd = 0;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblPropSysStrtRdy = 1;/* Referenced by: '<S1114>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblPrplsnSys = 0;/* Referenced by: '<S1448>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblSecured_to_Shtdwn = 1;/* Referenced by:
                                                                      * '<S178>/Calib'
                                                                      * '<S370>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EnblShtDwnCmd_SRAR = 1;/* Referenced by:
                                                                      * '<S42>/Calib'
                                                                      * '<S205>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_AHCP_CoreFail = 1;/* Referenced by:
                                                                      * '<S633>/Calib'
                                                                      * '<S972>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_ALTMode_BuckSpcl = 0;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_ALT_HV_Retry = 1;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_ALT_Mode = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_ALT_Mode_EnblHVSys =
    0;                                 /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_APMFault = 0;/* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_Allw12VStrt = 0;/* Referenced by: '<S1101>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_BusDischg = 1;/* Referenced by:
                                                                      * '<S1134>/Calib'
                                                                      * '<S1311>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_CritFltLatch = 1;/* Referenced by:
                                                                      * '<S161>/Calib'
                                                                      * '<S355>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_DAPFA_OpnCntctr = 1;/* Referenced by:
                                                                      * '<S634>/Calib'
                                                                      * '<S973>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_FltShtDwnCmnd = 1;/* Referenced by:
                                                                      * '<S635>/Calib'
                                                                      * '<S974>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_HVILSpdCond = 1;/* Referenced by:
                                                                      * '<S636>/Calib'
                                                                      * '<S975>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_HV_IntrnlIntrk_Chk =
    1;                                 /* Referenced by: '<S976>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_HV_Retry_CntctrCls =
    0;                                 /* Referenced by: '<S47>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_HiMtrSpdActv = 1;/* Referenced by:
                                                                      * '<S162>/Calib'
                                                                      * '<S356>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_INV_Retry_MCP = 0;/* Referenced by: '<S48>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_ImmShtDwn = 1;/* Referenced by:
                                                                      * '<S49>/Calib'
                                                                      * '<S206>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_InverterFaulted = 1;/* Referenced by:
                                                                      * '<S637>/Calib'
                                                                      * '<S977>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_Enbl_InvrtrFlt_AllwCntctrCls = 1;/* Referenced by:
                                               * '<S638>/Calib'
                                               * '<S978>/Calib'
                                               */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_LossCommORC = 1;/* Referenced by:
                                                                      * '<S163>/Calib'
                                                                      * '<S167>/Calib'
                                                                      * '<S357>/Calib'
                                                                      * '<S361>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_MCPA_CoreFail = 1;/* Referenced by:
                                                                      * '<S639>/Calib'
                                                                      * '<S979>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_MCPB_CoreFail = 1;/* Referenced by:
                                                                      * '<S640>/Calib'
                                                                      * '<S980>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_ORC_LOCFlt = 1;/* Referenced by:
                                                                      * '<S641>/Calib'
                                                                      * '<S981>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_OperConv_CntctrOpn =
    1;                                 /* Referenced by: '<S50>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_SRARDsblINVA = 1;/* Referenced by:
                                                                      * '<S642>/Calib'
                                                                      * '<S982>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_SRARDsblINVB = 1;/* Referenced by:
                                                                      * '<S643>/Calib'
                                                                      * '<S983>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_Enbl_SRARDsblINV_AltToConv = 0;/* Referenced by: '<S1191>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_SRARDsblINV_SFChart =
    1;                                 /* Referenced by: '<S157>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Enbl_SRAROpnCntctr = 1;/* Referenced by:
                                                                      * '<S164>/Calib'
                                                                      * '<S358>/Calib'
                                                                      * '<S644>/Calib'
                                                                      * '<S984>/Calib'
                                                                      * '<S1102>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_EngChckPSASet = 1;/* Referenced by: '<S51>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_FCPS_RunReqToEVCU = 0;/* Referenced by: '<S1449>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_FOTAOvrrdEnblHVSys_D = 0;/* Referenced by: '<S1450>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_FOTAOvrrdEnblHVSys_SD = 0;/* Referenced by: '<S1451>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_FltShtDwnBPClsdCmnd = 0;/* Referenced by: '<S1452>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_FltShtDwnCmnd = 0;/* Referenced by: '<S1453>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_GenrEnblCANC = 0;/* Referenced by: '<S1454>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HVAuxLoadOffReqVal = 0;/* Referenced by: '<S1455>/Calib' */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HVBatCntrWeld_HV = 1;/* Referenced by: '<S136>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HVBatCntrWeld_ImpdOpn = 0;/* Referenced by: '<S1456>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HVBatRdyTimeOut = 0;/* Referenced by: '<S1457>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HVBatSrvcDisCnct = 1;/* Referenced by:
                                                                      * '<S1091>/Calib'
                                                                      * '<S1228>/Calib'
                                                                      * '<S645>/Calib'
                                                                      * '<S985>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HVBatSrvcDisCnctFA = 0;/* Referenced by: '<S1458>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HVDspt_Enbl = 0;/* Referenced by: '<S1459>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HV_BatCntctrStatFA = 0;/* Referenced by: '<S1460>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HV_BusDischrgEnabled = 1;/* Referenced by:
                                                                      * '<S52>/Calib'
                                                                      * '<S207>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_HighVoltageRapidShtdwnCmnd = 0;/* Referenced by: '<S1461>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HoodOpen = 0;/* Referenced by: '<S1462>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_HoodOpenSlct = 1;/* Referenced by:
                                                                      * '<S646>/Calib'
                                                                      * '<S986>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_InvFltAltMdMtrAFlt = 0;/* Referenced by: '<S440>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_InverterFaulted_Slctr = 0;/* Referenced by:
                                                                      * '<S695>/Calib'
                                                                      * '<S441>/Calib'
                                                                      * '<S497>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_InverterNormlPSOn_Slctr =
    1;                                 /* Referenced by:
                                        * '<S696>/Calib'
                                        * '<S442>/Calib'
                                        * '<S498>/Calib'
                                        */

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_InvrtrDsbld_Slctr12VMtr =
    1;                                 /* Referenced by: '<S443>/Calib' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_InvrtrFltd_Slctr12VMtr =
    1;                                 /* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_InvrtrNrmlPSOn_Slctr12VMtr = 0;/* Referenced by:
                                             * '<S9>/HybSysSt_Machine'
                                             * '<S445>/Calib'
                                             */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_InvrtrSwitchCmd_Slctr = 0;/* Referenced by:
                                                                      * '<S1192>/Calib'
                                                                      * '<S1382>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MCPACoreFail = 0;/* Referenced by: '<S1463>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MCPBCoreFail = 0;/* Referenced by: '<S1464>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MergeDAPwHVIL = 0;/* Referenced by:
                                                                      * '<S1092>/Calib'
                                                                      * '<S1229>/Calib'
                                                                      * '<S647>/Calib'
                                                                      * '<S987>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MtrAFlt_HV_CntctrOpnRq =
    0;                                 /* Referenced by: '<S1465>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MtrA_SpdFA = 0;/* Referenced by: '<S1466>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MtrBFlt_HV_CntctrOpnRq =
    0;                                 /* Referenced by: '<S1467>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MtrB_SpdFA = 0;/* Referenced by: '<S1468>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MtrCFlt_HV_CntctrOpnRq =
    0;                                 /* Referenced by: '<S1469>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_MtrSpeedFastOpen = 0;/* Referenced by:
                                                                      * '<S1093>/Calib'
                                                                      * '<S1230>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ORCLOC_ImpactRing = 0;/* Referenced by: '<S1470>/Calib' */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ORCLOC_Src = 0;/* Referenced by: '<S752>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ORCLossComm = 0;/* Referenced by: '<S1471>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OpnBattCntctr = 0;/* Referenced by: '<S1472>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OpnReq_SrvcProc1320 = 0;/* Referenced by: '<S1473>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdAHCPCoreFail = 0;/* Referenced by: '<S1474>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdAPMBoostCmplt = 0;/* Referenced by: '<S1475>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdAPMFailure = 0;/* Referenced by: '<S1476>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdAccRunActiveAnalog =
    0;                                 /* Referenced by: '<S1477>/Calib' */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdActvDschCntctrChk = 0;/* Referenced by: '<S1312>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdAfterRunReq = 0;/* Referenced by: '<S1478>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdAuthenticationValid =
    1;                                 /* Referenced by: '<S1479>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdBPOpenPending = 0;/* Referenced by: '<S1480>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdBPOpnReq = 0;/* Referenced by: '<S1481>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdBSWSt_SPT = 0;/* Referenced by: '<S1482>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdBattLTMaxLim = 0;/* Referenced by: '<S1483>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdDAPFA = 0;/* Referenced by: '<S1484>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdDsblInvA = 0;/* Referenced by: '<S1485>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdDsblInvB = 0;/* Referenced by: '<S1486>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdDsblInvC = 0;/* Referenced by: '<S1487>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdDsblPrplsnSysArb_Out =
    0;                                 /* Referenced by: '<S1488>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdECMHoodOpen = 0;/* Referenced by: '<S1489>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdEnableCANC = 0;/* Referenced by: '<S1490>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdEnblHVSys = 0;/* Referenced by: '<S1491>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdEnblMtrSys = 0;/* Referenced by: '<S1492>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdEnblPrplsnSys = 0;/* Referenced by: '<S1493>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdEngStartStopSt = 0;/* Referenced by: '<S1494>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdFCActualMode = 0;/* Referenced by: '<S1495>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdFCPS_RunReqToEVCU = 0;/* Referenced by: '<S1496>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdFcShutDownReq = 0;/* Referenced by: '<S1497>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdFltShtDwnBPClsdCmnd =
    0;                                 /* Referenced by: '<S1498>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdFltShtDwnCmnd = 0;/* Referenced by: '<S1499>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdGenrEnblCANC = 0;/* Referenced by: '<S1500>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHCPImmoStat = 1;/* Referenced by: '<S1501>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHVBatCntrWeld_ImpdOpn
    = 0;                               /* Referenced by: '<S1502>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHVBatRdyTimeOut = 0;/* Referenced by: '<S1503>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHVBatSrvcDisCnctFA =
    0;                                 /* Referenced by: '<S1504>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHV_AccPwr = 0;/* Referenced by: '<S1505>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHV_BatCntctrStat = 0;/* Referenced by: '<S1506>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHV_BatCntctrStatFA =
    0;                                 /* Referenced by: '<S1507>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHV_BatCurrArb = 0;/* Referenced by: '<S1508>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHV_IntrlkStat = 0;/* Referenced by: '<S1509>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHV_IntrnlIntrlkStat =
    0;                                 /* Referenced by: '<S1510>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHV_Volt = 0;/* Referenced by: '<S1511>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_OvrdHighVoltageRapidShtdwnCmnd = 0;/* Referenced by: '<S1512>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHoodOpen = 0;/* Referenced by: '<S1513>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHoodSw = 1;/* Referenced by:
                                                                      * '<S648>/Calib'
                                                                      * '<S988>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHybEngCond = 0;/* Referenced by: '<S53>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHybEngCond_PwrUp = 1;/* Referenced by:
                                                                      * '<S54>/Calib'
                                                                      * '<S208>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHybEngCond_SPT = 1;/* Referenced by:
                                                                      * '<S55>/Calib'
                                                                      * '<S209>/Calib'
                                                                      * '<S582>/Calib'
                                                                      * '<S818>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHybEngCond_Spcl = 1;/* Referenced by:
                                                                      * '<S56>/Calib'
                                                                      * '<S210>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdHybEngSysActv = 0;/* Referenced by: '<S1514>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdKeyStatus = 0;/* Referenced by: '<S1515>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMCPACoreFail = 0;/* Referenced by: '<S1516>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMCPASt_SPT = 0;/* Referenced by: '<S1517>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMCPBCoreFail = 0;/* Referenced by: '<S1518>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMCPBSt_SPT = 1;/* Referenced by: '<S1519>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMCPCSt_SPT = 0;/* Referenced by: '<S1520>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_OvrdMtrAFlt_HV_CntctrOpnRq = 0;/* Referenced by: '<S1521>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrA_InvrtrSt = 0;/* Referenced by: '<S1522>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrA_MaxTorqRaw = 0;/* Referenced by: '<S1523>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrA_MinTorqRaw = 0;/* Referenced by: '<S1524>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrA_Spd = 0;/* Referenced by: '<S1525>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrA_SpdFA = 0;/* Referenced by: '<S1526>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_OvrdMtrBFlt_HV_CntctrOpnRq = 0;/* Referenced by: '<S1527>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrB_InvrtrSt = 0;/* Referenced by: '<S1528>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrB_MaxTorqRaw = 0;/* Referenced by: '<S1529>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrB_MinTorqRaw = 0;/* Referenced by: '<S1530>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrB_Spd = 0;/* Referenced by: '<S1531>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrB_SpdFA = 0;/* Referenced by: '<S1532>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_OvrdMtrCFlt_HV_CntctrOpnRq = 0;/* Referenced by: '<S1533>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrC_InvrtrSt = 0;/* Referenced by: '<S1534>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrC_MaxTorqRaw = 0;/* Referenced by: '<S1535>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdMtrC_MinTorqRaw = 0;/* Referenced by: '<S1536>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdORCLossComm = 0;/* Referenced by: '<S1537>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdOperModeStatus = 0;/* Referenced by: '<S1538>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdOperationalModeSts =
    0;                                 /* Referenced by: '<S1539>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdOpnBattCntctr = 0;/* Referenced by: '<S1540>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdOpnReq_SrvcProc1320 =
    0;                                 /* Referenced by: '<S1541>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdP1fVoltCtrlEnbl = 0;/* Referenced by: '<S1542>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdP1f_Dgrd_AltMd = 0;/* Referenced by: '<S1543>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdPADShtdwn = 1;/* Referenced by:
                                                                      * '<S94>/Calib'
                                                                      * '<S248>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdPowerMode = 0;/* Referenced by: '<S1544>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdPrmryShiftPstnFA = 0;/* Referenced by: '<S1545>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdPropSysStrtRdy = 0;/* Referenced by:
                                                                      * '<S1257>/Calib'
                                                                      * '<S1115>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdRdyForShtDwn = 0;/* Referenced by: '<S1546>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT)
    KeHPMR_b_OvrdRdyForShtDwnAPMCleared = 0;/* Referenced by: '<S1547>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdRelockTmrActv = 0;/* Referenced by: '<S1548>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdRunCrankActive = 0;/* Referenced by: '<S1549>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdSCPRInitStatus = 0;/* Referenced by: '<S1550>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdScndryShiftPstnFA = 0;/* Referenced by: '<S1551>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdSecured_to_Shtdwn = 0;/* Referenced by: '<S1552>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdSpdChk_ActvDschg = 0;/* Referenced by:
                                                                      * '<S525>/Calib'
                                                                      * '<S761>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdThrmlRdy4ShtDn = 0;/* Referenced by: '<S1553>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdThrmlSystRlyEnblCmnd =
    0;                                 /* Referenced by: '<S1554>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdTransFailSts = 0;/* Referenced by: '<S1555>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdValueDAPFA = 0;/* Referenced by: '<S1556>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdVehSpdFA = 0;/* Referenced by: '<S1557>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdVehicleSigned = 0;/* Referenced by: '<S1558>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrdVldtdTransRngSt = 0;/* Referenced by: '<S1559>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrd_ClsCntcrCmd_LVCheck =
    0;                                 /* Referenced by: '<S1560>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrd_HVDspt_Enbl = 0;/* Referenced by: '<S1561>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrd_MtrA_Dschrge_Stat =
    0;                                 /* Referenced by: '<S1562>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrd_MtrB_Dschrge_Stat =
    0;                                 /* Referenced by: '<S1563>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrd_MtrC_Dschrge_Stat =
    0;                                 /* Referenced by: '<S1564>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrd_SC_WakeUpSt = 0;/* Referenced by: '<S1565>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrd_Worksite_inverter =
    0;                                 /* Referenced by: '<S1566>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrrdChargingSysSts = 0;/* Referenced by: '<S1567>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrrdDrvReadySts = 0;/* Referenced by: '<S1568>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrrdFD_OpenRq = 0;/* Referenced by: '<S1569>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrrdFD_OpenRqVal = 0;/* Referenced by: '<S1570>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrrdFOTAInstallSt = 0;/* Referenced by: '<S1571>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrrdHVAuxLoadOffReq = 0;/* Referenced by: '<S1572>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_OvrrdThrmlRnawy_Flag = 0;/* Referenced by: '<S1573>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrrd_DrvAllwd = 0;/* Referenced by: '<S1574>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrrd_DrvAllwd_Val = 0;/* Referenced by: '<S1575>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Ovrrd_ORCLOC_ImpactRing =
    0;                                 /* Referenced by: '<S1576>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_P1fVoltCtrlEnbl = 0;/* Referenced by: '<S1577>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_P1f_Dgrd_AltMd = 0;/* Referenced by: '<S1578>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_PM_OffResetEnable = 1;/* Referenced by:
                                                                      * '<S1201>/Calib'
                                                                      * '<S1399>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_PrmryShiftPstnFA = 0;/* Referenced by: '<S1579>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_RapidShtdwnActive = 1;/* Referenced by:
                                                                      * '<S386>/Calib'
                                                                      * '<S664>/Calib'
                                                                      */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_RdyForShtDwnAPMCleared =
    0;                                 /* Referenced by: '<S1580>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_RdyForShtDwnVal = 0;/* Referenced by: '<S1581>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_RelockTmrActv = 0;/* Referenced by: '<S1582>/Calib' */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_RotSftFALogicSlct = 0;/* Referenced by: '<S971>/Calib' */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_RunCrankActive = 0;/* Referenced by: '<S1583>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_SC_WakeUpSt = 0;/* Referenced by: '<S1584>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ScndryShiftPstnFA = 0;/* Referenced by: '<S1585>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Secured_to_Shtdwn = 0;/* Referenced by: '<S1586>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ThrmlRdy4ShtDn = 0;/* Referenced by: '<S1587>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ThrmlRnawyFlag_Val = 0;/* Referenced by: '<S1588>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_ThrmlSystRlyEnblCmnd = 0;/* Referenced by: '<S1589>/Calib' */
static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_TransmissionFailSts = 0;/* Referenced by: '<S1590>/Calib' */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_UseThermalRunawayLogic =
    0;                                 /* Referenced by:
                                        * '<S249>/Calib'
                                        * '<S1275>/Calib'
                                        */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_VehSpdFA = 0;/* Referenced by: '<S1591>/Calib' */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_VehWSwitchBattPack = 1;/* Referenced by:
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      * '<S250>/Calib'
                                                                      * '<S319>/Calib'
                                                                      * '<S350>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, HPMR_VAR_INIT) KeHPMR_b_Worksite_inverter = 0;/* Referenced by: '<S1592>/Calib' */
static volatile CONST(TeGENR_e_APM_OperMode, HPMR_VAR_INIT)
    KeHPMR_e_APM_OperModeStatus = CeGENR_e_Default;/* Referenced by: '<S1593>/Calib' */
static volatile CONST(TeOBCR_e_ChargingSystemSts, HPMR_VAR_INIT)
    KeHPMR_e_ChargingSysStsVal = CeOBCR_e_NotCharging;/* Referenced by: '<S1594>/Calib' */
static volatile CONST(TeESSR_e_EngStartStopSt, HPMR_VAR_INIT)
    KeHPMR_e_EngStartStopSt = CeESSR_e_EngOff;/* Referenced by: '<S1595>/Calib' */
static volatile CONST(TeFCPR_e_ActualMode, HPMR_VAR_INIT) KeHPMR_e_FCActualMode =
    CeFCPR_e_ActualMode_NotAvailable;  /* Referenced by: '<S1596>/Calib' */
static volatile CONST(TeFCRR_e_FcFltReq, HPMR_VAR_INIT) KeHPMR_e_FcShutDownReq =
    CeFCRR_e_FcNoFlt;                  /* Referenced by: '<S1597>/Calib' */
static volatile CONST(TeIMOR_e_HCPImmoStatCanC, HPMR_VAR_INIT)
    KeHPMR_e_HCPImmoStat = CeIMOR_e_HCPRUN;/* Referenced by: '<S1598>/Calib' */
static volatile CONST(TeHVTR_e_HV_BatCntctrStat, HPMR_VAR_INIT)
    KeHPMR_e_HV_BatCntctrStat = CeHVTR_e_Open;/* Referenced by: '<S1599>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HPMR_VAR_INIT)
    KeHPMR_e_HV_IntrlkStat = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S1600>/Calib' */
static volatile CONST(TeBPCR_e_HVBatIntrlk_InternalStat, HPMR_VAR_INIT)
    KeHPMR_e_HV_IntrnlIntrlkStat = CeBPCR_e_HVBatIntrlkPass;/* Referenced by: '<S1601>/Calib' */
static volatile CONST(TeESSR_e_HybEngSysActv, HPMR_VAR_INIT)
    KeHPMR_e_HybEngSysActv = CeESSR_e_HybEngEnabledOff;/* Referenced by: '<S1602>/Calib' */
static volatile CONST(TeHPMR_e_IGBT_DischrgSlct, HPMR_VAR_INIT)
    KeHPMR_e_IGBT_DischrgSlct = CeHPMR_e_OnCktFail;/* Referenced by:
                                                    * '<S1166>/Calib'
                                                    * '<S1325>/Calib'
                                                    */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(TeHPMR_e_InvrtrSwitchCmd, HPMR_VAR_INIT)
    KeHPMR_e_InvrtrBSwCmd_VCOvrd = CeHPMR_e_Disable;/* Referenced by: '<S1193>/Calib' */

#endif

static volatile CONST(TePMDR_e_KeyStatus, HPMR_VAR_INIT) KeHPMR_e_KeyStatus =
    CePMDR_e_KeySt_Off;                /* Referenced by: '<S1603>/Calib' */
static volatile CONST(TeINVR_e_Dschrge_Stat, HPMR_VAR_INIT)
    KeHPMR_e_MtrA_Dschrge_Stat = CeINVR_e_AD_DISABLED;/* Referenced by: '<S1604>/Calib' */
static volatile CONST(TeINVR_e_MtrInvrtrSt, HPMR_VAR_INIT)
    KeHPMR_e_MtrA_InvrtrSt = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S1605>/Calib' */
static volatile CONST(TeINVR_e_Dschrge_Stat, HPMR_VAR_INIT)
    KeHPMR_e_MtrB_Dschrge_Stat = CeINVR_e_AD_DISABLED;/* Referenced by: '<S1606>/Calib' */
static volatile CONST(TeINVR_e_MtrInvrtrSt, HPMR_VAR_INIT)
    KeHPMR_e_MtrB_InvrtrSt = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S1607>/Calib' */

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static volatile CONST(TeINVR_e_MtrInvrtrSt, HPMR_VAR_INIT)
    KeHPMR_e_MtrB_InvrtrSt_VCOvrd = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S446>/Calib' */

#endif

static volatile CONST(TeINVR_e_Dschrge_Stat, HPMR_VAR_INIT)
    KeHPMR_e_MtrC_Dschrge_Stat = CeINVR_e_AD_DISABLED;/* Referenced by: '<S1608>/Calib' */
static volatile CONST(TeINVR_e_MtrInvrtrSt, HPMR_VAR_INIT)
    KeHPMR_e_MtrC_InvrtrSt = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S1609>/Calib' */
static volatile CONST(TePMDR_e_OperationalMode, HPMR_VAR_INIT)
    KeHPMR_e_OperationalModeSts = CePMDR_e_Init;/* Referenced by: '<S1610>/Calib' */
static volatile CONST(TeINVR_e_SPTState, HPMR_VAR_INIT) KeHPMR_e_OvrdValueBSWSt =
    CeINVR_e_Pending_SPT;              /* Referenced by: '<S1611>/Calib' */
static volatile CONST(TeINVR_e_SPTState, HPMR_VAR_INIT) KeHPMR_e_OvrdValueMCPASt
    = CeINVR_e_Pending_SPT;            /* Referenced by: '<S1612>/Calib' */
static volatile CONST(TeINVR_e_SPTState, HPMR_VAR_INIT) KeHPMR_e_OvrdValueMCPBSt
    = CeINVR_e_Passed_SPT;             /* Referenced by: '<S1613>/Calib' */
static volatile CONST(TeINVR_e_SPTState, HPMR_VAR_INIT) KeHPMR_e_OvrdValueMCPCSt
    = CeINVR_e_Pending_SPT;            /* Referenced by: '<S1614>/Calib' */
static volatile CONST(TeCITR_e_FOTA_Install_Status, HPMR_VAR_INIT)
    KeHPMR_e_OvrrdFOTAInstallStVal = CeCITR_e_Installation_Default;/* Referenced by: '<S1615>/Calib' */
static volatile CONST(TePMDR_e_PowerMode, HPMR_VAR_INIT) KeHPMR_e_PMM_PowerMode =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S1616>/Calib' */
static volatile CONST(TeSCPR_e_InitStatus, HPMR_VAR_INIT)
    KeHPMR_e_SCPRInitStatus = CeSCPR_e_InitDefault;/* Referenced by: '<S1617>/Calib' */
static volatile CONST(TeTRGR_e_TransRangeState, HPMR_VAR_INIT)
    KeHPMR_e_VldtdTransRngSt = CeTRGR_e_NoSelectionAvailable;/* Referenced by: '<S1618>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_f_CntctrCmd_PWM = 250.0F;/* Referenced by:
                                                                      * '<S1636>/Calib'
                                                                      * '<S1094>/Calib'
                                                                      * '<S1231>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_n_MaxMtrSpdForStrt =
    12500.0F;                          /* Referenced by:
                                        * '<S526>/Calib'
                                        * '<S762>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_n_MtrA_Spd = 0.0F;/* Referenced by: '<S1619>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_n_MtrB_Spd = 0.0F;/* Referenced by: '<S1620>/Calib' */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_n_MtrShtDwnSpd = 5.0F;/* Referenced by:
                                                                      * '<S527>/Calib'
                                                                      * '<S763>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_n_MtrSpd_ActvDschg =
    2200.0F;                           /* Referenced by:
                                        * '<S529>/Calib'
                                        * '<S765>/Calib'
                                        */

#if Rte_SysCon_Variant_HPMR_12VBSG && Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_12VMtrFltCnfrmCDbnc =
    0.0375F;                           /* Referenced by: '<S1149>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ALTMdEnbl_Tout = 0.025F;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ALTMode_BuckSpclTmr =
    0.05F;                          /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_APMFailureStDebounce =
    0.025F;                            /* Referenced by: '<S392>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_APMFdbkDbnc = 0.0375F;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_APMShtdwnTmr = 10.2F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_AfterRunShtDnTmr = 300.0F;/* Referenced by:
                                                                      * '<S95>/Calib'
                                                                      * '<S251>/Calib'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_BuckSpclAchvdTmr = 0.0F;/* Referenced by: '<S393>/Calib' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_BuckSpclNotAchvdTmr =
    5.0F;                              /* Referenced by: '<S394>/Calib' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_BusDischTimeout = 30.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ChgPortRelockShtDnTmr =
    60.0F;                             /* Referenced by:
                                        * '<S96>/Calib'
                                        * '<S252>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_CloseStateLowVolt = 2.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ClosedCntctrLowBusVolt =
    0.1F;                              /* Referenced by:
                                        * '<S86>/Calib'
                                        * '<S234>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_CntctrMaxDelayOpen = 2.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_CntctrMxDlyCls = 5.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_CntctrNotCloseDbnc =
    0.055F;                            /* Referenced by:
                                        * '<S405>/Calib'
                                        * '<S672>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_CntctrOpenAck_Timeout =
    1.0F;                              /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_CntctrOpenConvMd_Tout =
    0.025F;                            /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_CntctrOpenHVIL_Timeout =
    0.25F;                             /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_DbncMtrEnblPropStrt =
    0.0F;                           /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_DbncPADShtdwn = 10.0F;/* Referenced by:
                                                                      * '<S97>/Calib'
                                                                      * '<S253>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_DbncRadioSCPR_InitDone =
    0.4F;                              /* Referenced by:
                                        * '<S98>/Calib'
                                        * '<S254>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_DbncThermalLINDsbl = 0.4F;/* Referenced by:
                                                                      * '<S99>/Calib'
                                                                      * '<S255>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_DtrmHybSysStTmr = 0.1F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_DvlpmntPowerupDelay =
    0.0F;                              /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_Enbl_ALT_HV_RetryTmr =
    1.0F;                           /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_Enbl_HV_RetryTmr = 1.0F;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_Enbl_INV_RetryTmr = 1.0F;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_EngStopTimeout = 0.7F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_EngSysNotActvTmr =
    1.0E+9F;                           /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        * '<S133>/Calib'
                                        * '<S315>/Calib'
                                        */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_FC_FuelDoorOpenTimeOut =
    10.0F;                         /* Referenced by: '<S10>/HybSysSt_Machine' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT)
    KeHPMR_t_FOTAInstallCmpl_EnblCANCTmr = 10.0F;/* Referenced by:
                                                  * '<S1120>/Calib'
                                                  * '<S1274>/Calib'
                                                  */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_FOTATimeOut = 3.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_HVDsptShtDnTmr = 0.5F;/* Referenced by: '<S100>/Calib' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_HVIL_PNDelay = 2.0F;/* Referenced by:
                                                                      * '<S649>/Calib'
                                                                      * '<S989>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_HV_BusKeyOff = 10.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_HardwareDischargePeriod =
    0.25F;                             /* Referenced by:
                                        * '<S1167>/Calib'
                                        * '<S1326>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ImmobAuthTmr = 0.25F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      * '<S146>/Calib'
                                                                      * '<S332>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_InvDisableTimeout = 1.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_InvDisableTimeoutCrash =
    0.1F;                              /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_InvStsChckTmout = 0.5F;/* Referenced by: '<S175>/Calib' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_InvertersDisabledDbnc =
    0.0375F;                           /* Referenced by:
                                        * '<S697>/Calib'
                                        * '<S447>/Calib'
                                        * '<S499>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_InvrtrStDebounce = 0.025F;/* Referenced by:
                                                                      * '<S698>/Calib'
                                                                      * '<S448>/Calib'
                                                                      * '<S500>/Calib'
                                                                      */

#if (!Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3) || (Rte_SysCon_Variant_HPMR_12VBSG && Rte_SysCon_Variant_HPMR_3)

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_InvrtrStDebounce12VMtr =
    0.0375F;                           /* Referenced by:
                                        * '<S449>/Calib'
                                        * '<S1150>/Calib'
                                        */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_MCPTimeout_SPT = 0.5F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      * '<S130>/Calib'
                                                                      * '<S294>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_MaxDelayFOTAShutdwn =
    3.0F;                              /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_MaxDelayHVBatSrvcDscnt =
    2.0F;                              /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_MaxDelayRapidShtdwn =
    2.0F;                              /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_MtrSysActvTmr_12VMtr =
    0.25F;                             /* Referenced by: '<S450>/Calib' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_MtrSysNotActvTmr = 1.0F;/* Referenced by:
                                                                      * '<S9>/HybSysSt_Machine'
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ORCLoCDetTm_BSW = 7.2F;/* Referenced by:
                                                                      * '<S516>/Calib'
                                                                      * '<S753>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ParkAchvdTimeout =
    3900.0F;                           /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        * '<S101>/Calib'
                                        * '<S256>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_PrplsnDisblCnfrmTmr =
    0.0125F;                           /* Referenced by:
                                        * '<S9>/HybSysSt_Machine'
                                        * '<S10>/HybSysSt_Machine'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ReqOpenLowVehSpd = 0.5F;/* Referenced by:
                                                                      * '<S650>/Calib'
                                                                      * '<S990>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_SCPRInitTmot = 30.0F;/* Referenced by:
                                                                      * '<S102>/Calib'
                                                                      * '<S257>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_SeriesCfgTmot = 10.0F;/* Referenced by:
                                                                      * '<S10>/HybSysSt_Machine'
                                                                      * '<S258>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HPMR_3

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ShortWeldCheck = 0.5F;
                                    /* Referenced by: '<S9>/HybSysSt_Machine' */

#endif

static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ShtdwnMtrSpdTime = 0.5F;/* Referenced by:
                                                                      * '<S530>/Calib'
                                                                      * '<S766>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_SpdThreshTm_ActvDschg =
    0.5F;                              /* Referenced by:
                                        * '<S531>/Calib'
                                        * '<S767>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_SysPowerupTimeOut =
    120.0F;                            /* Referenced by:
                                        * '<S57>/Calib'
                                        * '<S211>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_t_ThrmlShtdwnTmot = 120.0F;/* Referenced by:
                                                                      * '<S103>/Calib'
                                                                      * '<S259>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_v_CntctrOpenVehSpd =
    8.33333F;                          /* Referenced by:
                                        * '<S651>/Calib'
                                        * '<S991>/Calib'
                                        */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_v_VehSpd_ActvDschg = 32.0F;/* Referenced by:
                                                                      * '<S532>/Calib'
                                                                      * '<S768>/Calib'
                                                                      */
static volatile CONST(float32, HPMR_VAR_INIT) KeHPMR_v_VehicleSigned = 0.0F;/* Referenced by: '<S1621>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_HPMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HPMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, HPMR_VAR_INIT) EeHPMR_b_ORC_LOCFA;/* '<Root>/DSM_1' */
static VAR(sint16, HPMR_VAR_INIT) VaHPMC_K_RsnForUnintndShtDwn2[15];/* synthesized block */

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_ActvDschCntctrChk;/* '<S1212>/Logical9' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_ActvDschCntctrChk;/* '<S1141>/OR1' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_Allw12VStrt;/* '<S1095>/Logical5' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_AllwClsdMtrsNotEnbld;/* '<S12>/Logical' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_BSW_SPT_Failure;/* '<S536>/Logical6' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_BattSysNotActv;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_CntctrOpen_Cnvl;/* '<S69>/Logical' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_CntctrOpnAltMdReq;/* '<S537>/Logical4' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_CntctrsOpenAfterClose;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_CntrlrPwrHold;/* '<S15>/AND' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_ContactorsClosedThisKey;/* '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_DAPFA_OpenCntctr;/* '<S537>/Logical5' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_EnableCANC;/* '<S1071>/Logical1' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_EnblV2L;/* '<S70>/Logical' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_Enbl_SPT_Chck;/* '<S536>/Logical9' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_HV_IntrnlIntrlkStatFail;/* '<S773>/AND23' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_ImmoFailShutDwn;/* '<S587>/OR1' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_ImmoStat_NotVldTmout;/* synthesized block */

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_InitPwrUp;/* '<S10>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_InitPwrUp;/* '<S9>/HybSysSt_Machine' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_InverterFaultedOut;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_InvrtrsNotResponding;/* '<S585>/OR1' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_LossCommORC;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MCP_SPT_Failure;/* '<S536>/Logical5' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MCP_SPT_Pendng;/* '<S21>/AND4' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MCP_SPT_Timeout;/* synthesized block */

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MtrAActv;/* '<S658>/OR8' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MtrBActv;/* '<S658>/OR9' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MtrSysActv_HVMtr;/* synthesized block */

#endif

#if Rte_SysCon_Variant_HPMR_3 && Rte_SysCon_Variant_HPMR_3Motor

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MtrSysActv_HVMtr_ThreeMtr;/* '<S506>/AND' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_MtrSystemActive;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_ORCLoCDetDn;/* '<S381>/Comparison' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_OpnReq_SrvcProc1320_Out;/* '<S773>/AND24' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_PropulsionSystemActive;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_PwrPnl_InvSts;/* '<S71>/AND5' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_RstActvDschCntctrChk;/* '<S1124>/AND5' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_Secured_To_Shtdwn;/* '<S72>/Switch' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_UnxpctdEngShtOff;/* '<S588>/OR1' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_VltBelowActvDschThres;/* '<S327>/AND' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMC_b_VltBelowActvDschThres;/* '<S141>/AND' */

#endif

static VAR(TeHPMR_e_BattCntctrCmd, HPMR_VAR_INIT) VeHPMC_e_BattCntctrCmd;/* synthesized block */
static VAR(TeHPMR_e_InvrtrSwitchCmd, HPMR_VAR_INIT) VeHPMC_e_InvrtrASwitchCmd;/* synthesized block */

#if !Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMC_e_Src_HybSysSt;/* '<S10>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMC_e_Src_HybSysSt;/* '<S9>/HybSysSt_Machine' */

#endif

static VAR(float32, HPMR_VAR_INIT) VeHPMI_I_HV_BatCurrArb;/* '<S7>/Switch23' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_M_MtrA_MaxTorqRaw;/* '<S7>/Switch62' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_M_MtrA_MinTorqRaw;/* '<S7>/Switch60' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_M_MtrB_MaxTorqRaw;/* '<S7>/Switch61' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_M_MtrB_MinTorqRaw;/* '<S7>/Switch59' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_M_MtrC_MaxTorqRaw;/* '<S7>/Switch79' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_M_MtrC_MinTorqRaw;/* '<S7>/Switch75' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_P_BattLTMaxLim;/* '<S7>/Switch38' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_P_HV_AccPwr;/* '<S7>/Switch40' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_U_HV_Volt;/* '<S7>/Switch25' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_AHCP_CoreFail;/* '<S7>/Switch7' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_APMFailure;/* '<S7>/Switch67' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_APM_BoostComplete;/* '<S7>/Switch47' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_AccRunActiveAnalog;/* '<S7>/Switch71' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_AuthenticationValid;/* '<S7>/Switch2' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_ClsCntcrCmd_LVCheck;/* '<S7>/Switch74' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_DAPFA_OpenCntctr;/* '<S7>/Switch6' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_DrvAllwd_FCEnbl;/* '<S7>/Switch92' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_DrvReadyCmplSts;/* '<S7>/Switch85' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_DsblInvA;/* '<S7>/Switch49' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_DsblInvB;/* '<S7>/Switch50' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_DsblInvC;/* '<S7>/Switch77' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_DsblPrplsnSysArb_Out;/* '<S7>/Switch66' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_ECMHoodOpen;/* '<S7>/Switch56' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_EnableCANC;/* '<S7>/Switch43' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_EnblHVSys;/* '<S7>/Switch33' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_EnblMtrSys;/* '<S7>/Switch34' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_EnblPrplsnSys;/* '<S7>/Switch35' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_FC_FuelDoorOpenReq;/* '<S7>/Switch91' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_FOTAOvrrdEnblHVSys;/* '<S7>/Switch84' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_FltShtDwnBPClsdCmnd;/* '<S7>/Switch29' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_FltShtDwnCmnd;/* '<S7>/Switch14' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_GenrEnblCANC;/* '<S7>/Switch93' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HCP_LTP_FanAftRun_Rq;/* '<S7>/Switch53' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HVBatCntrWeld_ImpdOpn;/* '<S7>/Switch55' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HVBatRdyTimeOut;/* '<S7>/Switch65' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HVBatSrvcDisCnctFA;/* '<S7>/Switch36' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HVDspt_Enbl;/* '<S7>/Switch87' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HV_AuxLoadOffReq;/* '<S7>/Switch17' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HV_BatCntctrOpenPending;/* '<S7>/Switch44' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HV_BatCntctrOpenReq;/* '<S7>/Switch10' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HV_BatCntctrStatFA;/* '<S7>/Switch27' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_HoodOpen;/* '<S7>/Switch64' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_LossCommwORC;/* '<S7>/Switch' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_MCPB_CoreFail;/* '<S7>/Switch8' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_MtrAFlt_HV_CntctrOpnRq;/* '<S7>/Switch63' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_MtrA_SpdFA;/* '<S7>/Switch30' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_MtrBFlt_HV_CntctrOpnRq;/* '<S7>/Switch58' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_MtrB_SpdFA;/* '<S7>/Switch31' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_MtrCFlt_HV_CntctrOpnRq;/* '<S7>/Switch78' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_ORCLOC_ImpactRing;/* '<S7>/Switch90' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_OpnBattCntctr;/* '<S7>/Switch48' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_OpnReq_SrvcProc1320_Out;/* '<S7>/Switch89' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_P1fVoltCtrlEnbl;/* '<S7>/Switch73' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_P1f_Dgrd_AltMd;/* '<S7>/Switch52' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_Prmry_TransShiftPstnFA;/* '<S7>/Switch81' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_RdyForShtDwn;/* '<S7>/Switch54' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_RdyForShtDwnAPMCleared;/* '<S7>/Switch37' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_RdyForShtDwn_OBCR;/* '<S7>/Switch97' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_RelockTimerActive;/* '<S7>/Switch57' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_RunCrankActive;/* '<S7>/Switch32' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_SC_WkUpFlg;/* '<S7>/Switch72' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_Scndry_TransShiftPstnFA;/* '<S7>/Switch19' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_Secured_To_Shtdwn;/* '<S7>/Switch70' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_ThrmlRnawyFlg;/* '<S7>/Switch16' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_ThrmlSystRly_EnblCmnd;/* '<S7>/Switch68' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_TransmissionFailSts;/* '<S7>/Switch80' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_VehSpdFA;/* '<S7>/Switch26' */
static VAR(boolean, HPMR_VAR_INIT) VeHPMI_b_Worksite_Inverter_Active;/* '<S7>/Switch86' */
static VAR(TeGENR_e_APM_OperMode, HPMR_VAR_INIT) VeHPMI_e_APM_OperModeStatus;/* '<S7>/Switch46' */
static VAR(TeINVR_e_SPTState, HPMR_VAR_INIT) VeHPMI_e_BSW_SPT_State;/* '<S7>/Switch3' */
static VAR(TeOBCR_e_ChargingSystemSts, HPMR_VAR_INIT) VeHPMI_e_ChargingSystemSts;/* '<S7>/Switch18' */
static VAR(TeESSR_e_EngStartStopSt, HPMR_VAR_INIT) VeHPMI_e_EngStartStopSt;/* '<S7>/Switch39' */
static VAR(TeCITR_e_FOTA_Install_Status, HPMR_VAR_INIT)
    VeHPMI_e_FOTA_Install_Status;      /* '<S7>/Switch83' */
static VAR(TeIMOR_e_HCPImmoStatCanC, HPMR_VAR_INIT) VeHPMI_e_HCPImmoStatCanC;/* '<S7>/Switch51' */
static VAR(TeHVTR_e_HV_BatCntctrStat, HPMR_VAR_INIT) VeHPMI_e_HV_BatCntctrStat;/* '<S7>/Switch13' */
static VAR(TeHVTR_e_HV_IntrlkStat, HPMR_VAR_INIT) VeHPMI_e_HV_IntrlkStat;/* '<S7>/Switch22' */
static VAR(TeBPCR_e_HVBatIntrlk_InternalStat, HPMR_VAR_INIT)
    VeHPMI_e_HV_IntrnlIntrlkStat;      /* '<S7>/Switch88' */
static VAR(TeESSR_e_HybEngSysActv, HPMR_VAR_INIT) VeHPMI_e_HybEngSysActv;/* '<S7>/Switch1' */
static VAR(TeSCPR_e_InitStatus, HPMR_VAR_INIT) VeHPMI_e_InitStatus;/* '<S7>/Switch28' */
static VAR(TePMDR_e_KeyStatus, HPMR_VAR_INIT) VeHPMI_e_KeyStatus;/* '<S7>/Switch45' */
static VAR(TeINVR_e_SPTState, HPMR_VAR_INIT) VeHPMI_e_MCPA_SPT_State;/* '<S7>/Switch4' */
static VAR(TeINVR_e_SPTState, HPMR_VAR_INIT) VeHPMI_e_MCPB_SPT_State;/* '<S7>/Switch5' */
static VAR(TeINVR_e_SPTState, HPMR_VAR_INIT) VeHPMI_e_MCPC_SPT_State;/* '<S7>/Switch76' */
static VAR(TeINVR_e_Dschrge_Stat, HPMR_VAR_INIT) VeHPMI_e_MtrA_Dschrge_Stat;/* '<S7>/Switch94' */
static VAR(TeINVR_e_MtrInvrtrSt, HPMR_VAR_INIT) VeHPMI_e_MtrA_InvrtrSt;/* '<S7>/Switch20' */
static VAR(TeINVR_e_Dschrge_Stat, HPMR_VAR_INIT) VeHPMI_e_MtrB_Dschrge_Stat;/* '<S7>/Switch95' */
static VAR(TeINVR_e_MtrInvrtrSt, HPMR_VAR_INIT) VeHPMI_e_MtrB_InvrtrSt;/* '<S7>/Switch21' */
static VAR(TeINVR_e_Dschrge_Stat, HPMR_VAR_INIT) VeHPMI_e_MtrC_Dschrge_Stat;/* '<S7>/Switch96' */
static VAR(TeINVR_e_MtrInvrtrSt, HPMR_VAR_INIT) VeHPMI_e_MtrC_InvrtrSt;/* '<S7>/Switch82' */
static VAR(TePMDR_e_OperationalMode, HPMR_VAR_INIT) VeHPMI_e_OperationalModeSts;/* '<S7>/Switch69' */
static VAR(TePMDR_e_PowerMode, HPMR_VAR_INIT) VeHPMI_e_PMM_PowerMode;/* '<S7>/Switch42' */
static VAR(TeTRGR_e_TransRangeState, HPMR_VAR_INIT) VeHPMI_e_VldtdTransRngSt;/* '<S7>/Switch24' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_n_MtrA_Spd;/* '<S7>/Switch11' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_n_MtrB_Spd;/* '<S7>/Switch12' */
static VAR(float32, HPMR_VAR_INIT) VeHPMI_v_VehicleSigned;/* '<S7>/Switch15' */

#if Rte_SysCon_Variant_HPMR_3

static VAR(uint16, HPMR_VAR_INIT) VeHPMR_Cnt_ALT_Mode_Retry;/* '<S9>/HybSysSt_Machine' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_AHCP_CoreFail;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_APMFaulted;/* '<S377>/Logical' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ActvDiscNotOcc;/* '<S179>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ActvDiscNotOcc;/* '<S11>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ActvDschSwitch;/* '<S1126>/Logical' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ActvDschTout;/* '<S1160>/Greater  Than1' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_BP_CurrOpenCondMet;/* synthesized block */
static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_BP_CurrOpenCondMetCrash;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_BattCntctrReqMet;/* '<S537>/Logical10' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_BattCntctrReqMet_Dbnc;/* '<S654>/AND' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_BattSwtchInProg;/* '<S10>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_BuckSpclAchvd;/* '<S377>/Logical3' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_BuckSpclNotAchvd;/* '<S377>/Logical2' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_CollisionDetection;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_CommandContactorsOpen;/* '<S9>/HybSysSt_Machine' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_CommandContactorsOpenOld;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_CritFaultLatched;/* '<S67>/Logical1' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_DAPFA_OpenCntctr;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_DrvReadyCmplSts;/* '<S33>/AND5' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_DsblAllwCntctrCls_InvFlt;/* '<S67>/AND1' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_DsblInv;/* '<S60>/Logical2' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_EnblActvDschTout;/* '<S1126>/Logical4' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_EnblHVSysOffOnTransOcc;/* '<S151>/OR1' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_EngSysNotActvAftrCrnk;/* '<S22>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_FOTAInstallCmpl_EnblCANC;/* '<S1071>/AND' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_FltShtDwnCmnd;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HEVBusOff;/* '<S613>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVBatCntrWeld_ImpdOpn;/* '<S27>/Logical' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVBatCntrWeld_ImpdOpnHV;/* '<S27>/Logical1' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVBatSrvcDisCnctFA;/* '<S67>/AND4' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVFaults;/* '<S197>/Logical3' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVFaultsAltMd;/* '<S29>/Logical3' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVILFailThisKeyCycl;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVILFailThisKeyCyclRst;/* '<S28>/Logical' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVILFailed;/* '<S537>/Equal3' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVILOrSpeedCondMet;/* '<S537>/AND6' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVILSourced;/* '<S537>/Equal6' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HVILSpdCondMet;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HV_AllShutDwnReq;/* '<S69>/AND7' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HV_BatCntctrOpenReq;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HV_BatCntctrStatAvail;/* '<S9>/Logical6' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HighMtrSpdActvIn;/* '<S67>/Logical4' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_HoodSwCondMet_HVIL;/* '<S537>/Logical11' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ImmShtdwnCondMet;/* '<S10>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ImmShtdwnCondMet;/* '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ImmoStat_AuthVld;/* '<S32>/Logical11' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ImmoStat_NotVldTmout;/* '<S147>/AND' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ImmobAuthVld;/* '<S16>/AND' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InitPwrUp;/* '<S216>/Gain' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InitPwrUp;/* '<S61>/Gain' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted;/* synthesized block */

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaultedMtrB;/* '<S463>/AND' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp1;/* '<S658>/OR15' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp1;/* '<S408>/OR15' */

#endif

#if Rte_SysCon_Variant_HPMR_3 && Rte_SysCon_Variant_HPMR_3Motor

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp1_ThreeMtr;/* '<S409>/OR15' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp2;/* '<S658>/OR14' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp2;/* '<S408>/OR14' */

#endif

#if Rte_SysCon_Variant_HPMR_3 && Rte_SysCon_Variant_HPMR_3Motor

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp2_ThreeMtr;/* '<S409>/OR14' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp3;/* '<S658>/OR13' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp3;/* '<S408>/OR34' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterFaulted_Tmp4;/* '<S408>/OR36' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterNormalPSOn_Tmp1;/* '<S658>/OR36' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InverterNormalPSOn_Tmp2;/* '<S658>/OR33' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvertersDisabled;/* synthesized block */

#if !Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvertersDisabled_Tmp1;/* '<S658>/OR3' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvertersDisabled_Tmp1;/* '<S408>/OR40' */

#endif

#if Rte_SysCon_Variant_HPMR_3 && Rte_SysCon_Variant_HPMR_3Motor

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvertersDisabled_Tmp1_ThreeMtr;/* '<S409>/OR3' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvertersDisabled_Tmp2;/* '<S408>/OR39' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvrtDisbld_12VMtr;/* synthesized block */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvrtrFaulted_12VMtr;/* synthesized block */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_InvrtrFlt_AllwCntctrCls;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_LossCommORC;/* '<S67>/Logical2' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MCPA_CoreFail;/* synthesized block */
static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MCPB_CoreFail;/* synthesized block */
static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3 && Rte_SysCon_Variant_HPMR_3Motor

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq_ThreeMtr;/* '<S409>/OR20' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3 && Rte_SysCon_Variant_HPMR_3Motor

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq_ThreeMtr;/* '<S409>/OR17' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq;/* synthesized block */

#endif

#if Rte_SysCon_Variant_HPMR_3 && Rte_SysCon_Variant_HPMR_3Motor

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq_ThreeMtr;/* '<S409>/OR58' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrNotInActvDschrg;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrSpdMet_ActvDschg;/* '<S382>/Comparison3' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrSysActvTmout_12VMtr;/* synthesized block */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrSysActv_12VMtr;/* synthesized block */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrSysActv_12VMtrPndg;/* '<S408>/OR30' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrSysActv_VoltCntrl;/* synthesized block */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrSysActv_VoltCntrl_12VMtr;/* '<S460>/AND' */

#endif

#if !Rte_SysCon_Variant_HPMR_3Motor && Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_MtrSysActv_VoltCntrl_Tmp;/* '<S459>/AND' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ORC_LOCFlt_BSW;/* '<S537>/AND15' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_OpnBattCntctr;/* '<S67>/AND17' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_PRNDLTimeCondMet;/* '<S537>/Comparison' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_PropSysStartRdy_12VStrt;/* '<S1095>/Logical6' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_PropSysStartRdy_BSG;/* '<S1096>/AND6' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_PropSysStartRdy_HEV;/* '<S1096>/AND2' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_PropSysStartRdy_HVStrt;/* '<S1096>/AND1' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_PropSysStrtRdyEnblCond;/* '<S1096>/Logical2' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_RstActvDschTout;/* '<S1161>/AND' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_SC_WkUp_EnblCANC;/* '<S1122>/AND' */

#endif

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_ShutdownInProcess;/* synthesized block */
static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_SpdCondMetActvDschg;/* synthesized block */
static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_UnintendedFltShtdwn;/* synthesized block */
static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_UnintendedShtdwn;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(boolean, HPMR_VAR_INIT) VeHPMR_b_VehSpdMet_ActvDschg;/* '<S382>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_InvrtrSwitchCmd, HPMR_VAR_INIT)
    VeHPMR_e_InvrtrASwitchCmd_Tmp_NO;  /* '<S1135>/Switch4' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_InvrtrSwitchCmd, HPMR_VAR_INIT)
    VeHPMR_e_InvrtrBSwitchCmd_Tmp_NO;  /* '<S1135>/Switch6' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_InvrtrSwitchCmd, HPMR_VAR_INIT)
    VeHPMR_e_InvrtrCSwitchCmd_Tmp_NO;  /* '<S1135>/Switch1' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_InvrtrSwitchCmd, HPMR_VAR_INIT)
    VeHPMR_e_InvrtrSwitchCmd_TmpBD;    /* '<S1126>/Switch' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_InvrtrSwitchCmd, HPMR_VAR_INIT)
    VeHPMR_e_InvrtrSwitchCmd_Tmp_EBD;  /* '<S1130>/Switch1' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMR_e_SrcSysSt;/* '<S192>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMR_e_SrcSysSt;/* '<S25>/DataTypeConversion' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMR_e_TrgtSysSt;/* '<S193>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMR_e_TrgtSysSt;/* '<S26>/DataTypeConversion' */

#endif

#if !Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMR_e_Trgt_HybSysSt;/* '<S10>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(TeHPMR_e_HybSysState, HPMR_VAR_INIT) VeHPMR_e_Trgt_HybSysSt;/* '<S9>/HybSysSt_Machine' */

#endif

#if Rte_SysCon_Variant_HPMR_3

static VAR(float32, HPMR_VAR_INIT) VeHPMR_t_MtrSpdMet_Tmr;/* '<S535>/Switch1' */

#endif

static VAR(float32, HPMR_VAR_INIT) VeHPMR_t_StateTimer;/* synthesized block */

#if Rte_SysCon_Variant_HPMR_3

static VAR(float32, HPMR_VAR_INIT) VeHPMR_t_VehSpdMet_Tmr;/* '<S534>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HPMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HPMR
#include "MemMap.h"

CONST(ConstB_HPMR_ac_T, HPMR_VAR_INIT) HPMR_ac_ConstB =
{

#if !Rte_SysCon_Variant_HPMR_3

    0,                                 /* '<S772>/Switch27' */

#define CONSTB_HPMR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_HPMR_3

    0,                                 /* '<S772>/Switch28' */

#define CONSTB_HPMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HPMR_3

    0,                                 /* '<S536>/Switch27' */

#define CONSTB_HPMR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_HPMR_3

    0,                                 /* '<S536>/Switch28' */

#define CONSTB_HPMR_AC_T_VARIANT_EXISTS
#endif

    CeHPMR_e_NoOverride,               /* '<S1628>/Constant' */
    CeHPMR_e_NoUnintndShtDwn,          /* '<S1626>/Constant' */
    CeHPMR_e_Disabled,                 /* '<S1631>/Constant' */
    CeHPMR_e_Disable,                  /* '<S1625>/Constant' */
    CeHPMR_e_Disable,                  /* '<S1633>/Constant' */
    CeHPMR_e_Disable,                  /* '<S1630>/Constant' */
    CeHPMR_e_POWERUP,                  /* '<S1629>/Constant' */
    CeHPMR_e_FC_Disabled,              /* '<S1634>/Constant' */
    CeHPMR_e_Undetermined,             /* '<S1627>/Constant' */
    CeHPMR_e_Idle                      /* '<S1632>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_HPMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HPMR
#include "MemMap.h"

VAR(B_HPMR_ac_T, HPMR_VAR_INIT) HPMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HPMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HPMR
#include "MemMap.h"

VAR(DW_HPMR_ac_T, HPMR_VAR_INIT) HPMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HPMR
#include "MemMap.h"

static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_LOC_Dtctd_NoClr(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1);
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_NoLOC_Clr_Memory(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1);
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_ORCLOC_NotDtrmnd(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1);
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_Clr_ORCLOC_Mem(void);
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_CntrlrPwrHold_0(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1);
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_CntrlrPwrHold_1(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1);
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_Store_ORCLOC_Mem(void);

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnPowerUpCondition(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnShutdownInProces(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_UnintendedShtdwnOccEn(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_InvrtrSwitchCmd H_GetHPMR_e_DtrmnInvrtrDisblCmd(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static boolean HPMR__GetHPMR_b_DtrmnPropSysAct(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_PropSysMode HPMR_GetHPMR_e_DtrmnPropSysMode(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_InvrtrSwitchCmd HP_GetHPMR_e_DtrmnInvrtrEnblCmd(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_APM_OperMode HPMR_GetHPMR_e_DtrmnAPMOperMode(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_CMND_BUS_DISCH(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_CMND_CNTCTR_OPN(const boolean *AND_b);

#endif

#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_PropSysMode HPMR_ac_GetHPMR_e_DtrmnAltMode(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_DISBL_INV(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static boolean H_GetHPMR_b_UnintendedShtdwnOcc(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_HybSysState HPMR_ac_GetHPMR_e_DtrmnHybSysSt(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR__enter_atomic_EVAL_HV_ENBL(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_DTRMN_HYBSYSST(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_ALT_HV(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static boolean HPMR_GetHPMR_b_ImmShtdwnCondMet(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_HV(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_INV(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_INV_VC(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_ALT_HV_ENBL(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_CommandContactorsOpen(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_CNTCTR_OPN(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_HV_ENBL(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_PRPLSN_DISBL(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_HV_ENBLD(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_INIT_CNTRLR_PWRDWN(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_OPERATIONAL(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_OPERATIONAL_ALTERNATOR(void);

#endif

#if Rte_SysCon_Variant_HPMR_3

static void HPMR_a_OPERATIONAL_CONVENTIONAL(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnPowerUpConditi_b(const boolean *OR1_f);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnShutdownInProc_p(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_UnintendedShtdwnOcc_g(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_InvrtrSwitchCmd GetHPMR_e_DtrmnInvrtrDisblCmd_l(const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static boolean HPM_GetHPMR_b_DtrmnPropSysAct_k(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_CMND_BUS_DISCH_i(const boolean *OR1_f);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_UnintendedShtdwnOcc_a(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_HybSysState HPMR__GetHPMR_e_DtrmnHybSysSt_g(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPM_enter_atomic_EVAL_HV_ENBL_e(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_DTRMN_HYBSYSST_j(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static boolean HP_GetHPMR_b_ImmShtdwnCondMet_g(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_HV_e(const boolean *VeHPMR_b_HV_BatCntctrStatAvai_c,
    const boolean *OR1_f, const boolean *OR1);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_INV_h(const boolean *VeHPMR_b_ImmoStat_AuthVld_f, const
    boolean *VeHPMR_b_HighMtrSpdActvIn_o, const boolean *AND_l, const boolean
    *OR1_f, const boolean *OR1);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_CommandContactorsOp_c(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_CNTCTR_OPN_h(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_HV_ENBL_j(const boolean *VeHPMR_b_CritFaultLatched_j,
    const boolean *VeHPMR_b_LossCommORC_o, const boolean
    *VeHPMR_b_OpnBattCntctr_i, const boolean *VeHPMR_b_DsblAllwCntctrCls_InvF,
    const boolean *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_PRPLSN_DISBL_g(const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_HV_ENBLD_h(const boolean *OR1_f);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_a_enter_atomic_OPERATIONAL(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_exit_atomic_OPERATIONAL(void);

#endif

#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_OPERATIONAL_a(const boolean *VeHPMR_b_ImmoStat_AuthVld_f,
    const boolean *OR1_f);

#endif

/*
 * Output and update for action system:
 *    '<S517>/LOC_Dtctd_NoClr'
 *    '<S754>/LOC_Dtctd_NoClr'
 */
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_LOC_Dtctd_NoClr(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S520>/Out1' incorporates:
     *  Constant: '<S520>/TRUE Constant'
     */
    *rty_Out1 = true;
}

/*
 * Output and update for action system:
 *    '<S517>/NoLOC_Clr_Memory'
 *    '<S754>/NoLOC_Clr_Memory'
 */
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_NoLOC_Clr_Memory(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1)
{
    /* DataStoreWrite: '<S521>/Data Store Write' incorporates:
     *  Constant: '<S521>/FALSE Constant'
     */
    EeHPMR_b_ORC_LOCFA = false;

    /* SignalConversion generated from: '<S521>/Out1' incorporates:
     *  Constant: '<S521>/FALSE Constant1'
     */
    *rty_Out1 = false;
}

/*
 * Output and update for action system:
 *    '<S381>/ORCLOC_NotDtrmnd'
 *    '<S659>/ORCLOC_NotDtrmnd'
 */
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_ORCLOC_NotDtrmnd(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1)
{
    /* DataStoreRead: '<S518>/Data Store Read1' */
    *rty_Out1 = EeHPMR_b_ORC_LOCFA;
}

/*
 * Output and update for action system:
 *    '<S381>/Clr_ORCLOC_Mem'
 *    '<S659>/Clr_ORCLOC_Mem'
 */
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_Clr_ORCLOC_Mem(void)
{
    /* DataStoreWrite: '<S514>/Data Store Write' incorporates:
     *  Constant: '<S514>/FALSE Constant'
     */
    EeHPMR_b_ORC_LOCFA = false;
}

/*
 * Output and update for action system:
 *    '<S20>/CntrlrPwrHold_0'
 *    '<S187>/CntrlrPwrHold_0'
 */
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_CntrlrPwrHold_0(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S89>/Out1' incorporates:
     *  Constant: '<S89>/Constant Value'
     */
    *rty_Out1 = false;
}

/*
 * Output and update for action system:
 *    '<S20>/CntrlrPwrHold_1'
 *    '<S187>/CntrlrPwrHold_1'
 */
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_CntrlrPwrHold_1(P2VAR(boolean,
    AUTOMATIC, HPMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S90>/Out1' incorporates:
     *  Constant: '<S90>/Constant Value'
     */
    *rty_Out1 = true;
}

/*
 * Output and update for action system:
 *    '<S68>/Store_ORCLOC_Mem'
 *    '<S220>/Store_ORCLOC_Mem'
 */
static FUNC(void, HPMR_CODE_LOCAL) HPMR_ac_Store_ORCLOC_Mem(void)
{
    /* DataStoreWrite: '<S168>/Data Store Write' incorporates:
     *  Constant: '<S168>/TRUE Constant'
     */
    EeHPMR_b_ORC_LOCFA = true;
}

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnPowerUpCondition(void)
{
    /* MATLAB Function 'GetHPMR_b_DtrmnPowerUpCondition': '<S31>:292' */
    /* '<S31>:292:3' */
    return (!VeHPMR_b_CollisionDetection) &&
        (((!HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) && (((VeHPMI_b_EnblMtrSys)
            || (VeHPMI_b_EnblHVSys)) || (VeHPMI_b_EnblPrplsnSys))) ||
         (VeHPMR_b_EnblHVSysOffOnTransOcc));
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnShutdownInProces(void)
{
    boolean ShtDwnInProcess;

    /* MATLAB Function 'GetHPMR_b_DtrmnShutdownInProcess': '<S31>:1017' */
    if (VeHPMC_b_InitPwrUp)
    {
        /* '<S31>:1017:2' */
        /* '<S31>:1017:3' */
        ShtDwnInProcess = false;
    }
    else
    {
        /* '<S31>:1017:5' */
        ShtDwnInProcess = true;
    }

    return ShtDwnInProcess;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_UnintendedShtdwnOccEn(void)
{
    boolean UnintendedShtdwnOccEntry;

    /* MATLAB Function 'GetHPMR_b_UnintendedShtdwnOccEntry': '<S31>:1046' */
    if ((CeHPMR_e_EVAL_PRPLSN_DISBL <= ((uint32)VeHPMC_e_Src_HybSysSt)) &&
            (((uint32)VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_INIT_CNTRLR_PWRDWN))
    {
        /* '<S31>:1046:2' */
        /* '<S31>:1046:3' */
        UnintendedShtdwnOccEntry = false;
    }
    else
    {
        /* '<S31>:1046:5' */
        UnintendedShtdwnOccEntry = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;
    }

    return UnintendedShtdwnOccEntry;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_InvrtrSwitchCmd H_GetHPMR_e_DtrmnInvrtrDisblCmd(void)
{
    TeHPMR_e_InvrtrSwitchCmd Output;

    /* MATLAB Function 'GetHPMR_e_DtrmnInvrtrDisblCmd': '<S31>:286' */
    if (((VeHPMR_b_CollisionDetection) || (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)) ||
        (VeHPMR_b_HVBatSrvcDisCnctFA))
    {
        /* '<S31>:286:4' */
        /* '<S31>:286:5' */
        Output = CeHPMR_e_DisableImmd;
    }
    else
    {
        /* '<S31>:286:7' */
        Output = CeHPMR_e_Disable;
    }

    return Output;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static boolean HPMR__GetHPMR_b_DtrmnPropSysAct(void)
{
    boolean PropSysActOut;

    /* Switch: '<S7>/Switch51' incorporates:
     *  Constant: '<S51>/Calib'
     *  Switch: '<S7>/Switch1'
     */
    /* MATLAB Function 'GetHPMR_b_DtrmnPropSysAct': '<S31>:666' */
    if (((VeHPMR_b_HVFaultsAltMd) || (((uint32)VeHPMI_e_HCPImmoStatCanC) ==
            CeIMOR_e_HCPKILL)) || (HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m))
    {
        /* '<S31>:666:7' */
        /* '<S31>:666:8' */
        PropSysActOut = false;
    }
    else if (((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
              (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS)) &&
             (KeHPMR_b_EngChckPSASet))
    {
        /* '<S31>:666:9' */
        /* '<S31>:666:10' */
        PropSysActOut = true;
    }
    else
    {
        /* '<S31>:666:12' */
        PropSysActOut = false;
    }

    /* End of Switch: '<S7>/Switch51' */
    return PropSysActOut;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_PropSysMode HPMR_GetHPMR_e_DtrmnPropSysMode(void)
{
    TeHPMR_e_PropSysMode PropSysModeOut;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S34>/Calib'
     */
    /* MATLAB Function 'GetHPMR_e_DtrmnPropSysMode': '<S31>:664' */
    if ((((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
            (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS)) &&
         (KeHPMR_b_BSGModing)) && (!HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m))
    {
        /* '<S31>:664:7' */
        /* '<S31>:664:8' */
        /* '<S31>:664:9' */
        PropSysModeOut = CeHPMR_e_Conventional;
    }
    else
    {
        /* '<S31>:664:11' */
        PropSysModeOut = CeHPMR_e_Disabled;
    }

    /* End of Switch: '<S7>/Switch1' */
    return PropSysModeOut;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_InvrtrSwitchCmd HP_GetHPMR_e_DtrmnInvrtrEnblCmd(void)
{
    TeHPMR_e_InvrtrSwitchCmd Output;

    /* Constant: '<S41>/Calib' */
    /* MATLAB Function 'GetHPMR_e_DtrmnInvrtrEnblCmd': '<S31>:968' */
    if (KeHPMR_b_EnblInvrtrCmd_ALT_Mode)
    {
        /* '<S31>:968:5' */
        /* '<S31>:968:6' */
        Output = CeHPMR_e_Enable;
    }
    else
    {
        /* '<S31>:968:8' */
        Output = CeHPMR_e_Enable_VoltCntrl;
    }

    /* End of Constant: '<S41>/Calib' */
    return Output;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_APM_OperMode HPMR_GetHPMR_e_DtrmnAPMOperMode(void)
{
    TeHPMR_e_APM_OperMode Output;
    TeHPMR_e_HybSysState tmp;

    /* Switch: '<S7>/Switch13' incorporates:
     *  Constant: '<S38>/Calib'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    /* MATLAB Function 'GetHPMR_e_DtrmnAPMOperMode': '<S31>:962' */
    if ((((!VeHPMR_b_HV_BatCntctrOpenReq) && (!VeHPMR_b_OpnBattCntctr)) &&
            (!VeHPMC_b_CntctrOpnAltMdReq)) && (((uint32)
            VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed))
    {
        /* '<S31>:962:11' */
        /* '<S31>:962:12' */
        Output = CeHPMR_e_Buck;
    }
    else
    {
        tmp = HPMR_ac_B.LeHPMR_e_HybSysSt_j;
        if ((((uint32)tmp) == CeHPMR_e_OPERATIONAL_ALTERNATOR) &&
                (!KeHPMR_b_DsblAPMBuckSpclCmd))
        {
            /* '<S31>:962:13' */
            /* '<S31>:962:14' */
            Output = CeHPMR_e_Buck_Spcl;
        }
        else if (((!KeHPMR_b_EnblDfltMd) && (((uint32)tmp) ==
                   CeHPMR_e_ENBL_ALT_HV_SYS)) && (!KeHPMR_b_DsblAPMBoostCmd))
        {
            /* '<S31>:962:15' */
            /* '<S31>:962:16' */
            Output = CeHPMR_e_Boost;
        }
        else
        {
            /* '<S31>:962:18' */
            Output = CeHPMR_e_Idle;
        }
    }

    /* End of Switch: '<S7>/Switch13' */
    return Output;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_CMND_BUS_DISCH(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S53>/Calib'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'CMND_BUS_DISCH': '<S31>:308' */
    if (((!VeHPMC_b_CntctrOpen_Cnvl) && (((((uint32)VeHPMI_e_HybEngSysActv) !=
            CeESSR_e_HybEngDisabled) && (((uint32)VeHPMI_e_HybEngSysActv) !=
            CeESSR_e_HybEngEnabledOnIS)) && (!KeHPMR_b_OvrdHybEngCond))) &&
            (!VeHPMR_b_HV_AllShutDwnReq))
    {
        /* Transition: '<S31>:789' */
        /* Transition: '<S31>:911' */
        /* Transition: '<S31>:1005' */
        /* Transition: '<S31>:912' */
        /* Exit 'CMND_BUS_DISCH': '<S31>:308' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_BUS_DISCHARGE;
        HPMR_ac_DW.is_c4_HPMR_ac = HPM_IN_OPERATIONAL_CONVENTIONAL;

        /* Entry 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_CONVENTIONAL;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = HPMR_GetHPMR_e_DtrmnAPMOperMode();
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        VeHPMC_b_PropulsionSystemActive = true;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Conventional;
    }
    else if ((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaultsAltMd))
    {
        /* Transition: '<S31>:406' */
        /* Transition: '<S31>:793' */
        /* Transition: '<S31>:574' */
        /* Transition: '<S31>:573' */
        /* Transition: '<S31>:572' */
        /* Transition: '<S31>:571' */
        /* Transition: '<S31>:521' */
        /* Exit 'CMND_BUS_DISCH': '<S31>:308' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_BUS_DISCHARGE;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

        /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOccEn();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_t_StateTimer = 0.0F;
    }
    else if (((VeHPMC_b_VltBelowActvDschThres) && (VeHPMR_b_MtrNotInActvDschrg))
             || (VeHPMR_t_StateTimer > KeHPMR_t_BusDischTimeout))
    {
        /* Transition: '<S31>:408' */
        /* Exit 'CMND_BUS_DISCH': '<S31>:308' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_BUS_DISCHARGE;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN;

        /* Entry 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
        HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = false;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = true;
    }
    else
    {
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }

    /* End of Switch: '<S7>/Switch1' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_CMND_CNTCTR_OPN(const boolean *AND_b)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_CNTCTR_OPEN;
    HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Open;

    /* Constant: '<S52>/Calib' incorporates:
     *  Constant: '<S35>/Calib'
     *  Switch: '<S7>/Switch13'
     */
    /* During 'CMND_CNTCTR_OPN': '<S31>:307' */
    /* Transition: '<S31>:401' */
    if ((*AND_b) || (!KeHPMR_b_HV_BusDischrgEnabled))
    {
        /* Transition: '<S31>:402' */
        /* Transition: '<S31>:410' */
        /* Exit 'CMND_CNTCTR_OPN': '<S31>:307' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_CNTCTR_OPEN;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
        HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = false;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = true;
    }
    else if ((VeHPMC_b_CntctrOpen_Cnvl) && (VeHPMR_t_StateTimer >
              KeHPMR_t_CntctrOpenConvMd_Tout))
    {
        /* Transition: '<S31>:1004' */
        /* Transition: '<S31>:1005' */
        /* Transition: '<S31>:912' */
        /* Exit 'CMND_CNTCTR_OPN': '<S31>:307' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_CNTCTR_OPEN;
        HPMR_ac_DW.is_c4_HPMR_ac = HPM_IN_OPERATIONAL_CONVENTIONAL;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_CONVENTIONAL;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = HPMR_GetHPMR_e_DtrmnAPMOperMode();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = true;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Conventional;
    }
    else if ((!VeHPMC_b_CntctrOpen_Cnvl) && (((KeHPMR_b_HV_BusDischrgEnabled) &&
               (((KeHPMR_b_CntctrOpenHVIL_OvrdEnbl) ||
                 (VeHPMR_b_CollisionDetection)) && (VeHPMR_t_StateTimer >
                 KeHPMR_t_CntctrOpenHVIL_Timeout))) || (((((uint32)
                  VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Open) ||
                (!VeHPMR_b_HV_BatCntctrStatAvail)) || (VeHPMR_t_StateTimer >
                KeHPMR_t_CntctrOpenAck_Timeout))))
    {
        /* Transition: '<S31>:403' */
        /* Exit 'CMND_CNTCTR_OPN': '<S31>:307' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_CNTCTR_OPEN;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_CMND_BUS_DISCH;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'CMND_BUS_DISCH': '<S31>:308' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = true;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else if ((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaultsAltMd))
    {
        /* Transition: '<S31>:399' */
        /* Transition: '<S31>:574' */
        /* Transition: '<S31>:573' */
        /* Transition: '<S31>:572' */
        /* Transition: '<S31>:571' */
        /* Transition: '<S31>:521' */
        /* Exit 'CMND_CNTCTR_OPN': '<S31>:307' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_CNTCTR_OPEN;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOccEn();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;
    }
    else
    {
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }

    /* End of Constant: '<S52>/Calib' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_PropSysMode HPMR_ac_GetHPMR_e_DtrmnAltMode(void)
{
    TeHPMR_e_PropSysMode Output;

    /* Constant: '<S43>/Calib' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    /* MATLAB Function 'GetHPMR_e_DtrmnAltMode': '<S31>:971' */
    if ((KeHPMR_b_Enbl_ALTMode_BuckSpcl) && (VeHPMR_t_StateTimer >
            KeHPMR_t_ALTMode_BuckSpclTmr))
    {
        /* '<S31>:971:7' */
        /* '<S31>:971:8' */
        Output = CeHPMR_e_Alternator;
    }
    else if ((VeHPMR_b_BuckSpclAchvd) || ((((uint32)
                HPMR_ac_B.LeHPMR_e_HybSysSt_j) ==
               CeHPMR_e_OPERATIONAL_ALTERNATOR) && (!KeHPMR_b_EnblBuckSpclFdbck)))
    {
        /* '<S31>:971:9' */
        /* '<S31>:971:10' */
        Output = CeHPMR_e_Alternator;
    }
    else
    {
        /* '<S31>:971:12' */
        Output = CeHPMR_e_Conventional;
    }

    /* End of Constant: '<S43>/Calib' */
    return Output;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_DISBL_INV(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;

    /* During 'DISBL_INV': '<S31>:305' */
    if (((VeHPMR_b_InvertersDisabled) || (VeHPMR_t_StateTimer >
            KeHPMR_t_InvDisableTimeout)) || ((VeHPMR_b_CollisionDetection) &&
            (VeHPMR_t_StateTimer > KeHPMR_t_InvDisableTimeoutCrash)))
    {
        /* Transition: '<S31>:395' */
        /* Exit 'DISBL_INV': '<S31>:305' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_DISBL_INV;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_CNTCTR_OPN;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'EVAL_CNTCTR_OPN': '<S31>:306' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_CNTCTR_OPEN;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = true;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMR_b_ImmShtdwnCondMet = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else if ((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaultsAltMd))
    {
        /* Transition: '<S31>:393' */
        /* Transition: '<S31>:572' */
        /* Transition: '<S31>:571' */
        /* Transition: '<S31>:521' */
        /* Exit 'DISBL_INV': '<S31>:305' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_DISBL_INV;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOccEn();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = H_GetHPMR_e_DtrmnInvrtrDisblCmd();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProces();

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static boolean H_GetHPMR_b_UnintendedShtdwnOcc(void)
{
    boolean UnintendedShtdwnOcc;

    /* Constant: '<S42>/Calib' */
    /* MATLAB Function 'GetHPMR_b_UnintendedShtdwnOcc': '<S31>:1029' */
    if ((VeHPMR_b_HVFaultsAltMd) || ((VeHPMR_b_FltShtDwnCmnd) &&
            (KeHPMR_b_EnblShtDwnCmd_SRAR)))
    {
        /* '<S31>:1029:2' */
        /* '<S31>:1029:3' */
        UnintendedShtdwnOcc = true;
    }
    else
    {
        /* '<S31>:1029:5' */
        UnintendedShtdwnOcc = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;
    }

    /* End of Constant: '<S42>/Calib' */
    return UnintendedShtdwnOcc;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_HybSysState HPMR_ac_GetHPMR_e_DtrmnHybSysSt(void)
{
    TeHPMR_e_HybSysState output;
    boolean tmp;
    boolean tmp_0;

    /* Constant: '<S49>/Calib' incorporates:
     *  Constant: '<S42>/Calib'
     */
    /* MATLAB Function 'GetHPMR_e_DtrmnHybSysSt': '<S31>:482' */
    if ((((((((((VeHPMR_b_CollisionDetection) || (VeHPMR_b_ImmShtdwnCondMet)) ||
               (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)) && (KeHPMR_b_Enbl_ImmShtDwn))
             || ((VeHPMR_b_FltShtDwnCmnd) && (KeHPMR_b_EnblShtDwnCmd_SRAR))) ||
            (VeHPMR_b_HVBatSrvcDisCnctFA)) || (VeHPMR_b_HVILSpdCondMet)) ||
            (VeHPMR_b_MCPA_CoreFail)) || (VeHPMR_b_MCPB_CoreFail)) ||
            (VeHPMR_b_AHCP_CoreFail))
    {
        /* '<S31>:482:7' */
        /* '<S31>:482:8' */
        /* '<S31>:482:9' */
        output = CeHPMR_e_EVAL_PRPLSN_DISBL;
    }
    else
    {
        tmp = !VeHPMC_b_InitPwrUp;
        if ((tmp && (CeHPMR_e_EVAL_HV_ENABLE <= ((uint32)VeHPMC_e_Src_HybSysSt)))
            && (((uint32)VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_INV_ENABLED))
        {
            /* '<S31>:482:13' */
            switch (VeHPMC_e_Src_HybSysSt)
            {
              case CeHPMR_e_EVAL_HV_ENABLE:
                /* Switch: '<S7>/Switch1' incorporates:
                 *  Constant: '<S53>/Calib'
                 */
                /* '<S31>:482:15' */
                if (((((uint32)VeHPMI_e_HybEngSysActv) !=
                        CeESSR_e_HybEngDisabled) && (((uint32)
                        VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS)) &&
                    (!KeHPMR_b_OvrdHybEngCond))
                {
                    /* '<S31>:482:16' */
                    /* '<S31>:482:17' */
                    output = CeHPMR_e_OPERATIONAL_CONVENTIONAL;
                }
                else
                {
                    /* '<S31>:482:19' */
                    output = CeHPMR_e_CMND_CNTCTR_OPEN;
                }
                break;

              case CeHPMR_e_ENBL_HV_SYS:
                /* '<S31>:482:22' */
                /* '<S31>:482:23' */
                output = CeHPMR_e_EVAL_CNTCTR_OPEN;
                break;

              case CeHPMR_e_HV_ENABLED:
                /* '<S31>:482:25' */
                /* '<S31>:482:26' */
                output = CeHPMR_e_DISBL_INV;
                break;

              case CeHPMR_e_ENBL_INV:
                /* Switch: '<S7>/Switch1' */
                /* '<S31>:482:28' */
                if (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled)
                {
                    /* '<S31>:482:29' */
                    /* '<S31>:482:30' */
                    output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                }
                else
                {
                    /* '<S31>:482:32' */
                    output = CeHPMR_e_DISBL_INV;
                }
                break;

              case CeHPMR_e_INV_ENABLED:
                /* Switch: '<S7>/Switch1' */
                /* '<S31>:482:35' */
                if (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled)
                {
                    /* '<S31>:482:36' */
                    /* '<S31>:482:37' */
                    output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                }
                else
                {
                    /* '<S31>:482:39' */
                    output = CeHPMR_e_DISBL_INV;
                }
                break;

              default:
                /* '<S31>:482:42' */
                output = CeHPMR_e_DTRMN_HYBSYSST;
                break;
            }
        }
        else if (((VeHPMC_b_InitPwrUp) && (CeHPMR_e_EVAL_HV_ENABLE <= ((uint32)
                    VeHPMC_e_Src_HybSysSt))) && (((uint32)VeHPMC_e_Src_HybSysSt)
                  <= CeHPMR_e_INV_ENABLED))
        {
            /* Switch: '<S7>/Switch13' incorporates:
             *  Switch: '<S7>/Switch1'
             *  Switch: '<S7>/Switch4'
             *  Switch: '<S7>/Switch5'
             *  VariantMerge generated from: '<S380>/VeHPMR_e_MCPC_SPT_State'
             */
            /* '<S31>:482:47' */
            if (((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)
            {
                /* '<S31>:482:48' */
                if (((((VeHPMI_b_EnblMtrSys) && (VeHPMR_b_ImmobAuthVld)) &&
                        (((uint32)VeHPMI_e_MCPA_SPT_State) ==
                         CeINVR_e_Passed_SPT)) && (((uint32)
                        VeHPMI_e_MCPB_SPT_State) == CeINVR_e_Passed_SPT)) &&
                        (((uint32)HPMR_ac_B.VariantMergeForOutportVeHPMR_e_) ==
                         CeINVR_e_Passed_SPT))
                {
                    /* '<S31>:482:49' */
                    /* '<S31>:482:50' */
                    /* '<S31>:482:51' */
                    output = CeHPMR_e_ENBL_INV;
                }
                else if (((uint32)VeHPMI_e_HybEngSysActv) !=
                         CeESSR_e_HybEngDisabled)
                {
                    /* '<S31>:482:52' */
                    /* '<S31>:482:53' */
                    output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                }
                else
                {
                    /* '<S31>:482:55' */
                    output = CeHPMR_e_ENBL_HV_SYS;
                }
            }
            else
            {
                /* '<S31>:482:58' */
                output = CeHPMR_e_EVAL_HV_ENABLE;
            }
        }
        else if ((tmp && (CeHPMR_e_EVAL_ALT_HV_ENABLE <= ((uint32)
                    VeHPMC_e_Src_HybSysSt))) && (((uint32)VeHPMC_e_Src_HybSysSt)
                  <= CeHPMR_e_INV_VC_ENABLED))
        {
            /* '<S31>:482:63' */
            /* '<S31>:482:64' */
            output = CeHPMR_e_EVAL_PRPLSN_DISBL;
        }
        else if (((VeHPMC_b_InitPwrUp) && (CeHPMR_e_EVAL_ALT_HV_ENABLE <=
                   ((uint32)VeHPMC_e_Src_HybSysSt))) && (((uint32)
                   VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_INV_VC_ENABLED))
        {
            /* Switch: '<S7>/Switch1' */
            /* '<S31>:482:69' */
            if ((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS))
            {
                /* '<S31>:482:70' */
                /* '<S31>:482:71' */
                output = CeHPMR_e_OPERATIONAL_CONVENTIONAL;
            }
            else
            {
                /* '<S31>:482:73' */
                output = CeHPMR_e_EVAL_PRPLSN_DISBL;
            }
        }
        else if (tmp && (((uint32)VeHPMC_e_Src_HybSysSt) == CeHPMR_e_OPERATIONAL))
        {
            /* Switch: '<S7>/Switch45' incorporates:
             *  Constant: '<S53>/Calib'
             *  Switch: '<S7>/Switch1'
             */
            /* '<S31>:482:78' */
            if (((uint32)VeHPMI_e_KeyStatus) == CePMDR_e_KeySt_Off)
            {
                /* '<S31>:482:79' */
                /* '<S31>:482:80' */
                output = CeHPMR_e_EVAL_PRPLSN_DISBL;
            }
            else if (((((uint32)VeHPMI_e_HybEngSysActv) !=
                       CeESSR_e_HybEngDisabled) && (((uint32)
                        VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS)) &&
                     (!KeHPMR_b_OvrdHybEngCond))
            {
                /* '<S31>:482:81' */
                /* '<S31>:482:82' */
                output = CeHPMR_e_DISBL_INV;
            }
            else
            {
                /* '<S31>:482:87' */
                output = CeHPMR_e_EVAL_PRPLSN_DISBL;
            }

            /* End of Switch: '<S7>/Switch45' */
        }
        else if ((VeHPMC_b_InitPwrUp) && (((uint32)VeHPMC_e_Src_HybSysSt) ==
                  CeHPMR_e_OPERATIONAL))
        {
            /* '<S31>:482:92' */
            tmp = !VeHPMI_b_EnblPrplsnSys;
            if (((VeHPMI_b_EnblHVSys) && (!VeHPMI_b_EnblMtrSys)) && tmp)
            {
                /* Switch: '<S7>/Switch1' incorporates:
                 *  Switch: '<S7>/Switch13'
                 */
                /* '<S31>:482:93' */
                if (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled)
                {
                    /* '<S31>:482:94' */
                    /* '<S31>:482:95' */
                    output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                }
                else if (((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)
                {
                    /* '<S31>:482:96' */
                    /* '<S31>:482:97' */
                    output = CeHPMR_e_ENBL_HV_SYS;
                }
                else
                {
                    /* '<S31>:482:99' */
                    output = CeHPMR_e_EVAL_HV_ENABLE;
                }
            }
            else
            {
                tmp_0 = ((VeHPMI_b_EnblHVSys) && (VeHPMI_b_EnblMtrSys));
                if (tmp_0 && tmp)
                {
                    /* Switch: '<S7>/Switch1' incorporates:
                     *  Switch: '<S7>/Switch13'
                     */
                    /* '<S31>:482:101' */
                    if (((uint32)VeHPMI_e_HybEngSysActv) !=
                            CeESSR_e_HybEngDisabled)
                    {
                        /* '<S31>:482:102' */
                        /* '<S31>:482:103' */
                        output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                    }
                    else if (((uint32)VeHPMI_e_HV_BatCntctrStat) ==
                             CeHVTR_e_Closed)
                    {
                        /* '<S31>:482:104' */
                        /* '<S31>:482:105' */
                        output = CeHPMR_e_ENBL_INV;
                    }
                    else
                    {
                        /* '<S31>:482:107' */
                        output = CeHPMR_e_EVAL_HV_ENABLE;
                    }
                }
                else if (tmp_0 && (VeHPMI_b_EnblPrplsnSys))
                {
                    /* Switch: '<S7>/Switch1' incorporates:
                     *  Switch: '<S7>/Switch13'
                     */
                    /* '<S31>:482:110' */
                    if (((uint32)VeHPMI_e_HybEngSysActv) !=
                            CeESSR_e_HybEngDisabled)
                    {
                        /* '<S31>:482:111' */
                        /* '<S31>:482:112' */
                        output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                    }
                    else if (((uint32)VeHPMI_e_HV_BatCntctrStat) ==
                             CeHVTR_e_Closed)
                    {
                        /* '<S31>:482:113' */
                        /* '<S31>:482:114' */
                        output = CeHPMR_e_ENBL_INV;
                    }
                    else
                    {
                        /* '<S31>:482:116' */
                        output = CeHPMR_e_EVAL_HV_ENABLE;
                    }
                }
                else
                {
                    /* '<S31>:482:120' */
                    output = CeHPMR_e_DTRMN_HYBSYSST;
                }
            }
        }
        else if (tmp && (((uint32)VeHPMC_e_Src_HybSysSt) ==
                         CeHPMR_e_OPERATIONAL_CONVENTIONAL))
        {
            /* Switch: '<S7>/Switch13' */
            /* '<S31>:482:127' */
            if ((((VeHPMR_b_HV_BatCntctrOpenReq) || (VeHPMR_b_OpnBattCntctr)) ||
                 (VeHPMC_b_CntctrOpnAltMdReq)) && (((uint32)
                    VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed))
            {
                /* '<S31>:482:128' */
                /* '<S31>:482:129' */
                output = CeHPMR_e_EVAL_CNTCTR_OPEN;
            }
            else
            {
                /* '<S31>:482:131' */
                output = CeHPMR_e_EVAL_PRPLSN_DISBL;
            }
        }
        else if ((VeHPMC_b_InitPwrUp) && (((uint32)VeHPMC_e_Src_HybSysSt) ==
                  CeHPMR_e_OPERATIONAL_CONVENTIONAL))
        {
            /* '<S31>:482:138' */
            tmp = !VeHPMI_b_EnblPrplsnSys;
            if (((VeHPMI_b_EnblHVSys) && (!VeHPMI_b_EnblMtrSys)) && tmp)
            {
                /* Switch: '<S7>/Switch13' */
                /* '<S31>:482:139' */
                if ((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed) &&
                        (VeHPMR_b_HV_BatCntctrStatAvail))
                {
                    /* '<S31>:482:140' */
                    /* '<S31>:482:141' */
                    output = CeHPMR_e_HV_ENABLED;
                }
                else
                {
                    /* '<S31>:482:143' */
                    output = CeHPMR_e_EVAL_HV_ENABLE;
                }
            }
            else
            {
                tmp_0 = ((VeHPMI_b_EnblHVSys) && (VeHPMI_b_EnblMtrSys));
                if (tmp_0 && tmp)
                {
                    /* Switch: '<S7>/Switch13' */
                    /* '<S31>:482:145' */
                    if ((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)
                        && (VeHPMR_b_HV_BatCntctrStatAvail))
                    {
                        /* '<S31>:482:146' */
                        /* '<S31>:482:147' */
                        output = CeHPMR_e_ENBL_INV;
                    }
                    else
                    {
                        /* '<S31>:482:149' */
                        output = CeHPMR_e_EVAL_HV_ENABLE;
                    }
                }
                else if (tmp_0 && (VeHPMI_b_EnblPrplsnSys))
                {
                    /* Switch: '<S7>/Switch13' */
                    /* '<S31>:482:152' */
                    if ((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)
                        && (VeHPMR_b_HV_BatCntctrStatAvail))
                    {
                        /* '<S31>:482:153' */
                        /* '<S31>:482:154' */
                        output = CeHPMR_e_ENBL_INV;
                    }
                    else
                    {
                        /* '<S31>:482:156' */
                        output = CeHPMR_e_EVAL_HV_ENABLE;
                    }
                }
                else
                {
                    /* '<S31>:482:160' */
                    output = CeHPMR_e_DTRMN_HYBSYSST;
                }
            }
        }
        else if ((VeHPMC_b_InitPwrUp) && (((uint32)VeHPMC_e_Src_HybSysSt) ==
                  CeHPMR_e_OPERATIONAL_ALTERNATOR))
        {
            /* Switch: '<S7>/Switch1' incorporates:
             *  Constant: '<S53>/Calib'
             */
            /* '<S31>:482:167' */
            if (((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                 (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS))
                && (!KeHPMR_b_OvrdHybEngCond))
            {
                /* '<S31>:482:168' */
                /* '<S31>:482:169' */
                output = CeHPMR_e_EVAL_HV_ENABLE;
            }
            else
            {
                /* '<S31>:482:171' */
                output = CeHPMR_e_EVAL_PRPLSN_DISBL;
            }
        }
        else if ((VeHPMC_b_InitPwrUp) && (((uint32)VeHPMC_e_Src_HybSysSt) ==
                  CeHPMR_e_DISBL_ALT_HV))
        {
            /* '<S31>:482:185' */
            /* '<S31>:482:186' */
            output = CeHPMR_e_EVAL_HV_ENABLE;
        }
        else if (tmp && (((uint32)VeHPMC_e_Src_HybSysSt) ==
                         CeHPMR_e_DISBL_ALT_HV))
        {
            /* '<S31>:482:191' */
            /* '<S31>:482:192' */
            output = CeHPMR_e_EVAL_PRPLSN_DISBL;
        }
        else if (((VeHPMC_b_InitPwrUp) && (CeHPMR_e_EVAL_PRPLSN_DISBL <=
                   ((uint32)VeHPMC_e_Src_HybSysSt))) && (((uint32)
                   VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_INIT_CNTRLR_PWRDWN))
        {
            /* Switch: '<S7>/Switch13' */
            /* '<S31>:482:196' */
            if (((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed) &&
                    (VeHPMR_b_HV_BatCntctrStatAvail)) && (((uint32)
                    VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_EVAL_CNTCTR_OPEN))
            {
                /* '<S31>:482:197' */
                if (VeHPMI_b_EnblMtrSys)
                {
                    /* '<S31>:482:199' */
                    /* '<S31>:482:200' */
                    output = CeHPMR_e_ENBL_INV;
                }
                else
                {
                    /* '<S31>:482:202' */
                    output = CeHPMR_e_ENBL_HV_SYS;
                }
            }
            else
            {
                /* '<S31>:482:205' */
                output = CeHPMR_e_EVAL_HV_ENABLE;
            }
        }
        else if ((tmp && (CeHPMR_e_EVAL_PRPLSN_DISBL <= ((uint32)
                    VeHPMC_e_Src_HybSysSt))) && (((uint32)VeHPMC_e_Src_HybSysSt)
                  <= CeHPMR_e_INIT_CNTRLR_PWRDWN))
        {
            /* '<S31>:482:209' */
            switch (VeHPMC_e_Src_HybSysSt)
            {
              case CeHPMR_e_EVAL_PRPLSN_DISBL:
                /* '<S31>:482:210' */
                /* '<S31>:482:211' */
                output = CeHPMR_e_PRPLSN_DISABLED;
                break;

              case CeHPMR_e_PRPLSN_DISABLED:
                /* '<S31>:482:212' */
                /* '<S31>:482:213' */
                output = CeHPMR_e_DISBL_INV;
                break;

              case CeHPMR_e_DISBL_INV:
                /* '<S31>:482:214' */
                /* '<S31>:482:215' */
                output = CeHPMR_e_EVAL_CNTCTR_OPEN;
                break;

              case CeHPMR_e_EVAL_CNTCTR_OPEN:
                /* '<S31>:482:216' */
                /* '<S31>:482:217' */
                output = CeHPMR_e_EVAL_CNTCTR_OPEN;
                break;

              case CeHPMR_e_CMND_CNTCTR_OPEN:
                /* '<S31>:482:218' */
                /* '<S31>:482:219' */
                output = CeHPMR_e_CMND_CNTCTR_OPEN;
                break;

              case CeHPMR_e_CMND_BUS_DISCHARGE:
                /* '<S31>:482:220' */
                /* '<S31>:482:221' */
                output = CeHPMR_e_CMND_BUS_DISCHARGE;
                break;

              default:
                /* '<S31>:482:223' */
                output = CeHPMR_e_INIT_CNTRLR_PWRDWN;
                break;
            }
        }
        else
        {
            /* '<S31>:482:226' */
            output = CeHPMR_e_DTRMN_HYBSYSST;
        }
    }

    /* End of Constant: '<S49>/Calib' */
    return output;
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR__enter_atomic_EVAL_HV_ENBL(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    /* Entry 'EVAL_HV_ENBL': '<S31>:293' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_HV_ENABLE;
    HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = true;

    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
    VeHPMR_t_StateTimer = 0.0F;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
    HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
    VeHPMR_b_ShutdownInProcess = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
    HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
    HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m = false;
    VeHPMC_b_ContactorsClosedThisKey = false;
    VeHPMR_b_ImmShtdwnCondMet = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PrechargeFailure' */
    HPMR_ac_B.LeHPMR_b_PrechargeFailure = false;
    VeHPMR_b_CommandContactorsOpen = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
    VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
    HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_DTRMN_HYBSYSST(void)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

    /* During 'DTRMN_HYBSYSST': '<S31>:483' */
    guard1 = false;
    if (VeHPMR_t_StateTimer >= KeHPMR_t_DtrmHybSysStTmr)
    {
        /* Transition: '<S31>:532' */
        /* Transition: '<S31>:534' */
        /* Transition: '<S31>:536' */
        /* Transition: '<S31>:990' */
        if (((uint32)VeHPMR_e_Trgt_HybSysSt) == CeHPMR_e_INIT_CNTRLR_PWRDWN)
        {
            /* Transition: '<S31>:992' */
            /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
            HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = false;
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;

            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
            VeHPMR_b_ShutdownInProcess = true;
        }
        else
        {
            /* Transition: '<S31>:991' */
            if (((uint32)VeHPMR_e_Trgt_HybSysSt) == CeHPMR_e_CMND_BUS_DISCHARGE)
            {
                /* Transition: '<S31>:993' */
                /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_CMND_BUS_DISCH;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'CMND_BUS_DISCH': '<S31>:308' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_GetHPMR_e_DtrmnPropSysMode();
            }
            else
            {
                /* Transition: '<S31>:552' */
                if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                        CeHPMR_e_CMND_CNTCTR_OPEN)
                {
                    /* Transition: '<S31>:540' */
                    /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                    HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_CMND_CNTCTR_OPN;

                    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                    /* Entry 'CMND_CNTCTR_OPN': '<S31>:307' */
                    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_CNTCTR_OPEN;

                    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                    VeHPMR_t_StateTimer = 0.0F;
                    VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                    VeHPMR_b_ShutdownInProcess = true;

                    /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                    HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                    HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Open;
                    VeHPMR_b_ImmShtdwnCondMet = false;

                    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                    VeHPMC_b_PropulsionSystemActive =
                        HPMR__GetHPMR_b_DtrmnPropSysAct();
                    HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                        HPMR_GetHPMR_e_DtrmnPropSysMode();
                }
                else
                {
                    /* Transition: '<S31>:553' */
                    if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                            CeHPMR_e_EVAL_CNTCTR_OPEN)
                    {
                        /* Transition: '<S31>:538' */
                        /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_CNTCTR_OPN;

                        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                        /* Entry 'EVAL_CNTCTR_OPN': '<S31>:306' */
                        HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                            CeHPMR_e_EVAL_CNTCTR_OPEN;
                        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                        VeHPMR_t_StateTimer = 0.0F;

                        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                        VeHPMR_b_ShutdownInProcess = true;

                        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                        VeHPMR_b_ImmShtdwnCondMet = false;

                        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                        VeHPMC_b_PropulsionSystemActive =
                            HPMR__GetHPMR_b_DtrmnPropSysAct();
                        HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                            HPMR_GetHPMR_e_DtrmnPropSysMode();
                    }
                    else
                    {
                        /* Transition: '<S31>:554' */
                        if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                CeHPMR_e_DISBL_INV)
                        {
                            /* Transition: '<S31>:542' */
                            /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DISBL_INV;

                            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                            /* Entry 'DISBL_INV': '<S31>:305' */
                            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;

                            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                            VeHPMR_t_StateTimer = 0.0F;

                            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                            HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition
                                ();

                            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                            VeHPMR_b_ShutdownInProcess =
                                GetHPMR_b_DtrmnShutdownInProces();

                            /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                            HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                                H_GetHPMR_e_DtrmnInvrtrDisblCmd();
                            VeHPMR_b_ImmShtdwnCondMet = false;

                            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                            VeHPMC_b_PropulsionSystemActive =
                                HPMR__GetHPMR_b_DtrmnPropSysAct();
                            HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                                HPMR_GetHPMR_e_DtrmnPropSysMode();
                        }
                        else
                        {
                            /* Transition: '<S31>:555' */
                            /* Transition: '<S31>:584' */
                            if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                    CeHPMR_e_EVAL_PRPLSN_DISBL)
                            {
                                /* Transition: '<S31>:544' */
                                /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                                HPMR_ac_DW.is_c4_HPMR_ac =
                                    HPMR_ac_IN_EVAL_PRPLSN_DISBL;

                                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                /* Entry 'EVAL_PRPLSN_DISBL': '<S31>:303' */
                                HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                    CeHPMR_e_EVAL_PRPLSN_DISBL;

                                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                VeHPMR_t_StateTimer = 0.0F;

                                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                                HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                                VeHPMC_b_InitPwrUp = false;

                                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                VeHPMC_b_PropulsionSystemActive = false;
                                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                                    CeHPMR_e_Disabled;
                                VeHPMR_b_ImmShtdwnCondMet = false;
                            }
                            else
                            {
                                /* Transition: '<S31>:556' */
                                if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                        CeHPMR_e_ENBL_INV)
                                {
                                    /* Transition: '<S31>:550' */
                                    /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                                    HPMR_ac_DW.is_c4_HPMR_ac =
                                        HPMR_ac_IN_ENBL_INV;

                                    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                    /* Entry 'ENBL_INV': '<S31>:297' */
                                    HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                        CeHPMR_e_ENBL_INV;

                                    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                                    VeHPMR_b_ShutdownInProcess = false;

                                    /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                                    HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                                        false;
                                    HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m = false;

                                    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                    VeHPMR_t_StateTimer = 0.0F;

                                    /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                                    HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                                        CeHPMR_e_Enable;

                                    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                    VeHPMC_b_PropulsionSystemActive =
                                        HPMR__GetHPMR_b_DtrmnPropSysAct();
                                    HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                                        HPMR_GetHPMR_e_DtrmnPropSysMode();
                                }
                                else
                                {
                                    /* Transition: '<S31>:557' */
                                    if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                            CeHPMR_e_ENBL_HV_SYS)
                                    {
                                        /* Transition: '<S31>:548' */
                                        /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                                        HPMR_ac_DW.is_c4_HPMR_ac =
                                            HPMR_ac_IN_ENBL_HV;

                                        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                        /* Entry 'ENBL_HV': '<S31>:294' */
                                        HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                            CeHPMR_e_ENBL_HV_SYS;

                                        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                        VeHPMR_t_StateTimer = 0.0F;

                                        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                                        VeHPMR_b_ShutdownInProcess = false;

                                        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                                        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h
                                            = false;
                                        HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m =
                                            false;

                                        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                                        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                                            CeHPMR_e_Disable;
                                        HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g =
                                            CeHPMR_e_Closed;

                                        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                        VeHPMC_b_PropulsionSystemActive =
                                            HPMR__GetHPMR_b_DtrmnPropSysAct();
                                        HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                                            HPMR_GetHPMR_e_DtrmnPropSysMode();
                                    }
                                    else
                                    {
                                        /* Transition: '<S31>:559' */
                                        if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                                CeHPMR_e_EVAL_HV_ENABLE)
                                        {
                                            /* Transition: '<S31>:546' */
                                            /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                                            HPMR_ac_DW.is_c4_HPMR_ac =
                                                HPMR_ac_IN_EVAL_HV_ENBL;
                                            HPMR__enter_atomic_EVAL_HV_ENBL();
                                        }
                                        else if (((uint32)VeHPMR_e_Trgt_HybSysSt)
                                                 == CeHPMR_e_PRPLSN_DISABLED)
                                        {
                                            /* Transition: '<S31>:585' */
                                            /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                                            HPMR_ac_DW.is_c4_HPMR_ac =
                                                HPMR_ac_IN_PRPLSN_DISBLD;

                                            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                            /* Entry 'PRPLSN_DISBLD': '<S31>:304' */
                                            HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                                CeHPMR_e_PRPLSN_DISABLED;

                                            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                            VeHPMR_t_StateTimer = 0.0F;
                                            VeHPMC_b_InitPwrUp =
                                                GetHPMR_b_DtrmnPowerUpCondition();

                                            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                                            VeHPMR_b_ShutdownInProcess =
                                                GetHPMR_b_DtrmnShutdownInProces();

                                            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                                            HPMR_ac_B.LeHPMR_e_APM_OperMode =
                                                CeHPMR_e_Idle;

                                            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                            VeHPMC_b_PropulsionSystemActive =
                                                false;
                                            HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                                                CeHPMR_e_Disabled;
                                            VeHPMR_b_ImmShtdwnCondMet = false;
                                        }
                                        else
                                        {
                                            /* Transition: '<S31>:958' */
                                            if (((uint32)VeHPMR_e_Trgt_HybSysSt)
                                                == CeHPMR_e_OPERATIONAL_CONVENTIONAL)
                                            {
                                                /* Transition: '<S31>:798' */
                                                /* Exit 'DTRMN_HYBSYSST': '<S31>:483' */
                                                HPMR_ac_DW.is_c4_HPMR_ac =
                                                    HPM_IN_OPERATIONAL_CONVENTIONAL;

                                                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                                /* Entry 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
                                                HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                                    CeHPMR_e_OPERATIONAL_CONVENTIONAL;

                                                /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                                                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5
                                                    = CeHPMR_e_Disable;

                                                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                                                HPMR_ac_B.LeHPMR_e_APM_OperMode =
                                                    HPMR_GetHPMR_e_DtrmnAPMOperMode
                                                    ();

                                                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                                VeHPMR_t_StateTimer = 0.0F;

                                                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                                                VeHPMR_b_ShutdownInProcess =
                                                    false;

                                                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                                                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h
                                                    = false;

                                                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                                VeHPMC_b_PropulsionSystemActive =
                                                    true;
                                                HPMR_ac_B.LeHPMR_e_PropSysMode_l
                                                    = CeHPMR_e_Conventional;
                                            }
                                            else
                                            {
                                                guard1 = true;
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
    else
    {
        guard1 = true;
    }

    if (guard1)
    {
        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            H_GetHPMR_b_UnintendedShtdwnOcc();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_e_Trgt_HybSysSt = HPMR_ac_GetHPMR_e_DtrmnHybSysSt();
    }
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_ALT_HV(void)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_ALT_HV_SYS;

    /* Switch: '<S7>/Switch46' incorporates:
     *  Constant: '<S38>/Calib'
     *  Switch: '<S7>/Switch1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'ENBL_ALT_HV': '<S31>:827' */
    if (((((((uint32)VeHPMI_e_APM_OperModeStatus) == CeGENR_e_OperBoost) &&
            (VeHPMI_b_APM_BoostComplete)) && (VeHPMI_U_HV_Volt >
            KeHPMR_U_PrechargeMinVolt)) || (((KeHPMR_b_EnblDfltMd) ||
            (KeHPMR_b_DsblAPMBoostCmd)) && (VeHPMR_t_StateTimer >
            KeHPMR_t_ALTMdEnbl_Tout))) && (((uint32)VeHPMI_e_HybEngSysActv) !=
            CeESSR_e_HybEngDisabled))
    {
        /* Transition: '<S31>:844' */
        /* Exit 'ENBL_ALT_HV': '<S31>:827' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_ALT_HV_SYS;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_ALT_HV_ENBLD;

        /* Entry 'ALT_HV_ENBLD': '<S31>:843' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ALT_HV_ENABLED;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else
    {
        guard1 = false;
        if ((((VeHPMR_t_StateTimer >= KeHPMR_t_CloseStateLowVolt) &&
                (VeHPMI_U_HV_Volt <= KeHPMR_U_PrechargeMinVolt)) &&
                (VeHPMI_b_EnblHVSys)) && (((uint32)VeHPMI_e_HybEngSysActv) !=
                CeESSR_e_HybEngDisabled))
        {
            /* Transition: '<S31>:840' */
            /* Transition: '<S31>:892' */
            /* Transition: '<S31>:908' */
            guard1 = true;
        }
        else if ((((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled)
                   || (VeHPMR_b_HVFaultsAltMd)) || (VeHPMR_b_FltShtDwnCmnd)) ||
                 (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))
        {
            /* Transition: '<S31>:841' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:908' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S31>:842' */
            guard1 = true;
        }
        else
        {
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        }

        if (guard1)
        {
            /* Transition: '<S31>:907' */
            /* Transition: '<S31>:891' */
            /* Transition: '<S31>:906' */
            /* Transition: '<S31>:905' */
            /* Transition: '<S31>:890' */
            /* Transition: '<S31>:904' */
            /* Transition: '<S31>:903' */
            /* Transition: '<S31>:889' */
            /* Transition: '<S31>:902' */
            /* Transition: '<S31>:898' */
            /* Exit 'ENBL_ALT_HV': '<S31>:827' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_ALT_HV_SYS;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch46' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static boolean HPMR_GetHPMR_b_ImmShtdwnCondMet(void)
{
    /* MATLAB Function 'GetHPMR_b_ImmShtdwnCondMet': '<S31>:280' */
    /* '<S31>:280:6' */
    return (VeHPMC_b_CntctrsOpenAfterClose) || (VeHPMR_b_CollisionDetection);
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_HV(void)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_HV_SYS;
    HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Closed;

    /* Switch: '<S7>/Switch13' incorporates:
     *  Constant: '<S46>/Calib'
     *  Constant: '<S54>/Calib'
     *  Switch: '<S7>/Switch1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PrechargeFailure'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'ENBL_HV': '<S31>:294' */
    if (((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed) &&
            (VeHPMR_b_HV_BatCntctrStatAvail)) && (VeHPMI_U_HV_Volt >
            KeHPMR_U_PrechargeMinVolt))
    {
        /* Transition: '<S31>:357' */
        /* Exit 'ENBL_HV': '<S31>:294' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_HV_SYS;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_HV_ENBLD;

        /* Entry 'HV_ENBLD': '<S31>:296' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_HV_ENABLED;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Buck;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        VeHPMC_b_ContactorsClosedThisKey = true;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else if ((((((KeHPMR_b_Enbl_ALT_Mode_EnblHVSys) && (VeHPMR_t_StateTimer >=
                  KeHPMR_t_CloseStateLowVolt)) && (VeHPMI_U_HV_Volt <=
                 KeHPMR_U_PrechargeMinVolt)) && (VeHPMI_b_EnblHVSys)) &&
              ((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngEnabledOn) ||
               (KeHPMR_b_OvrdHybEngCond_PwrUp))) && (((uint32)
               VeHPMI_e_HV_BatCntctrStat) != CeHVTR_e_PrechrgFailed))
    {
        /* Transition: '<S31>:782' */
        /* Transition: '<S31>:826' */
        /* Transition: '<S31>:825' */
        /* Transition: '<S31>:917' */
        /* Exit 'ENBL_HV': '<S31>:294' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_HV_SYS;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_ALT_HV_ENBL;

        /* Entry 'EVAL_ALT_HV_ENBL': '<S31>:823' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_ALT_HV_ENABLE;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Open;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else
    {
        guard1 = false;
        if (((VeHPMR_t_StateTimer >= KeHPMR_t_CloseStateLowVolt) &&
                (VeHPMI_U_HV_Volt <= KeHPMR_U_PrechargeMinVolt)) &&
                (VeHPMI_b_EnblHVSys))
        {
            /* Transition: '<S31>:356' */
            HPMR_ac_B.LeHPMR_b_PrechargeFailure = true;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:567' */
            guard1 = true;
        }
        else if ((VeHPMR_b_ImmShtdwnCondMet) || (VeHPMR_b_UnintendedFltShtdwn))
        {
            /* Transition: '<S31>:351' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:568' */
            /* Transition: '<S31>:567' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S31>:353' */
            guard1 = true;
        }
        else
        {
            VeHPMR_b_ImmShtdwnCondMet = HPMR_GetHPMR_b_ImmShtdwnCondMet();
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        }

        if (guard1)
        {
            /* Transition: '<S31>:566' */
            /* Transition: '<S31>:565' */
            /* Transition: '<S31>:732' */
            /* Transition: '<S31>:730' */
            /* Transition: '<S31>:563' */
            /* Transition: '<S31>:562' */
            /* Transition: '<S31>:561' */
            /* Transition: '<S31>:506' */
            /* Exit 'ENBL_HV': '<S31>:294' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_HV_SYS;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch13' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_INV(void)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV;

    /* During 'ENBL_INV': '<S31>:297' */
    if (((((VeHPMC_b_MtrSystemActive) && (((VeHPMC_b_MtrSysActv_HVMtr) ||
             (VeHPMR_t_StateTimer >= KeHPMR_t_DbncMtrEnblPropStrt)) ||
            (!KeHPMR_b_InvrtrNrmlPSOn_Slctr12VMtr))) && (VeHPMR_b_ImmobAuthVld))
         && (!VeHPMR_b_HighMtrSpdActvIn)) && (!VeHPMC_b_BattSysNotActv))
    {
        /* Transition: '<S31>:368' */
        /* Exit 'ENBL_INV': '<S31>:297' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_INV_ENBLD;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'INV_ENBLD': '<S31>:300' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INV_ENABLED;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Hybrid;

        /* VariantMerge generated from: '<S8>/LeHPMR_b_HighMtrStrtSpdActv' */
        HPMR_ac_B.LeHPMR_b_HighMtrStrtSpdActv = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
    }
    else if (VeHPMR_b_HighMtrSpdActvIn)
    {
        /* VariantMerge generated from: '<S8>/LeHPMR_b_HighMtrStrtSpdActv' */
        /* Transition: '<S31>:362' */
        HPMR_ac_B.LeHPMR_b_HighMtrStrtSpdActv = true;

        /* Transition: '<S31>:361' */
        /* Exit 'ENBL_INV': '<S31>:297' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_ENBL_INV;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'ENBL_INV': '<S31>:297' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m = false;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Enable;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else
    {
        guard1 = false;
        if ((((((VeHPMR_t_StateTimer >= KeHPMR_t_MtrSysNotActvTmr) &&
                (!VeHPMC_b_MtrSystemActive)) || (VeHPMR_b_ImmShtdwnCondMet)) ||
                (VeHPMR_b_UnintendedFltShtdwn)) || (VeHPMC_b_BattSysNotActv)) ||
            (VeHPMR_b_ImmoStat_NotVldTmout))
        {
            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            /* Transition: '<S31>:366' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:563' */
            guard1 = true;
        }
        else if (((!VeHPMR_b_ImmoStat_AuthVld) || (!VeHPMI_b_EnblHVSys)) ||
                 (!VeHPMI_b_EnblMtrSys))
        {
            /* Transition: '<S31>:363' */
            guard1 = true;
        }
        else
        {
            VeHPMR_b_ImmShtdwnCondMet = HPMR_GetHPMR_b_ImmShtdwnCondMet();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        }

        if (guard1)
        {
            /* Transition: '<S31>:562' */
            /* Transition: '<S31>:561' */
            /* Transition: '<S31>:506' */
            /* Exit 'ENBL_INV': '<S31>:297' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;
        }
    }
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_INV_VC(void)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV_VC;

    /* Switch: '<S7>/Switch1' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'ENBL_INV_VC': '<S31>:851' */
    if ((VeHPMR_b_MtrSysActv_VoltCntrl) && (((uint32)VeHPMI_e_HybEngSysActv) !=
            CeESSR_e_HybEngDisabled))
    {
        /* Transition: '<S31>:869' */
        /* Exit 'ENBL_INV_VC': '<S31>:851' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV_VC;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_INV_VC_ENBLD;

        /* Entry 'INV_VC_ENBLD': '<S31>:868' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INV_VC_ENABLED;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
    }
    else
    {
        guard1 = false;
        if (((((VeHPMR_t_StateTimer >= KeHPMR_t_MtrSysNotActvTmr) &&
                (!VeHPMR_b_MtrSysActv_VoltCntrl)) || (VeHPMR_b_InverterFaulted))
             || (VeHPMR_b_DsblInv)) && (((uint32)VeHPMI_e_HybEngSysActv) !=
                CeESSR_e_HybEngDisabled))
        {
            /* Transition: '<S31>:854' */
            /* Transition: '<S31>:890' */
            /* Transition: '<S31>:904' */
            guard1 = true;
        }
        else if ((((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled)
                   || (VeHPMR_b_HVFaultsAltMd)) || (VeHPMR_b_FltShtDwnCmnd)) ||
                 (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))
        {
            /* Transition: '<S31>:857' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:904' */
            guard1 = true;
        }
        else if ((!VeHPMI_b_EnblHVSys) || (!VeHPMI_b_EnblMtrSys))
        {
            /* Transition: '<S31>:859' */
            guard1 = true;
        }
        else
        {
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        }

        if (guard1)
        {
            /* Transition: '<S31>:903' */
            /* Transition: '<S31>:889' */
            /* Transition: '<S31>:902' */
            /* Transition: '<S31>:898' */
            /* Exit 'ENBL_INV_VC': '<S31>:851' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV_VC;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch1' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_ALT_HV_ENBL(void)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_ALT_HV_ENABLE;
    HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Open;

    /* Switch: '<S7>/Switch1' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'EVAL_ALT_HV_ENBL': '<S31>:823' */
    if (((((((((((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngEnabledOn) &&
                 (!VeHPMR_b_InverterFaulted)) && (!VeHPMR_b_APMFaulted)) &&
               (!VeHPMR_b_DsblInv)) && (VeHPMR_Cnt_ALT_Mode_Retry <=
               KeHPMR_Cnt_ALT_Mode_Retry)) && ((!VeHPMR_b_HVBatCntrWeld_ImpdOpn)
              && (!VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))) &&
            (!VeHPMR_b_HVFaultsAltMd)) && ((!VeHPMR_b_LossCommORC) ||
            (!KeHPMR_b_EnblORCLoC_RapidShtDn))) && (!VeHPMR_b_FltShtDwnCmnd)) &&
         (!VeHPMI_b_HVDspt_Enbl)) && (VeHPMR_t_StateTimer >
            KeHPMR_t_ShortWeldCheck))
    {
        /* Transition: '<S31>:828' */
        /* Exit 'EVAL_ALT_HV_ENBL': '<S31>:823' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_ALT_HV_ENABLE;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_ENBL_ALT_HV;

        /* Entry 'ENBL_ALT_HV': '<S31>:827' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_ALT_HV_SYS;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = HPMR_GetHPMR_e_DtrmnAPMOperMode();
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else
    {
        guard1 = false;
        if (((((((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                 (VeHPMR_b_InverterFaulted)) || (VeHPMR_b_APMFaulted)) ||
                (VeHPMR_b_DsblInv)) || (VeHPMR_Cnt_ALT_Mode_Retry >
                KeHPMR_Cnt_ALT_Mode_Retry)) || (VeHPMR_b_HVBatCntrWeld_ImpdOpn))
            || (VeHPMI_b_HVDspt_Enbl))
        {
            /* Transition: '<S31>:836' */
            /* Transition: '<S31>:893' */
            /* Transition: '<S31>:910' */
            guard1 = true;
        }
        else if ((((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled)
                   || (VeHPMR_b_HVFaultsAltMd)) || (VeHPMR_b_FltShtDwnCmnd)) ||
                 (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))
        {
            /* Transition: '<S31>:832' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:910' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S31>:834' */
            guard1 = true;
        }
        else
        {
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
        }

        if (guard1)
        {
            /* Transition: '<S31>:909' */
            /* Transition: '<S31>:892' */
            /* Transition: '<S31>:908' */
            /* Transition: '<S31>:907' */
            /* Transition: '<S31>:891' */
            /* Transition: '<S31>:906' */
            /* Transition: '<S31>:905' */
            /* Transition: '<S31>:890' */
            /* Transition: '<S31>:904' */
            /* Transition: '<S31>:903' */
            /* Transition: '<S31>:889' */
            /* Transition: '<S31>:902' */
            /* Transition: '<S31>:898' */
            /* Exit 'EVAL_ALT_HV_ENBL': '<S31>:823' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_ALT_HV_ENABLE;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch1' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_CommandContactorsOpen(void)
{
    boolean Output_tmp;

    /* MATLAB Function 'GetHPMR_b_CommandContactorsOpen': '<S31>:283' */
    /* '<S31>:283:4' */
    Output_tmp = !VeHPMI_b_EnblHVSys;

    /* Switch: '<S7>/Switch13' */
    return (((((((VeHPMR_b_UnintendedFltShtdwn) ||
                 (HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h)) ||
                ((((VeHPMR_t_StateTimer > KeHPMR_t_HV_BusKeyOff) && Output_tmp) &&
                  ((VeHPMI_b_RdyForShtDwnAPMCleared) || (VeHPMR_t_StateTimer >
                    KeHPMR_t_APMShtdwnTmr))) && (VeHPMC_b_PwrPnl_InvSts))) ||
               ((((uint32)VeHPMI_e_HV_BatCntctrStat) != CeHVTR_e_Closed) &&
                (VeHPMR_b_HV_BatCntctrStatAvail))) || ((Output_tmp &&
                (VeHPMI_b_FOTAOvrrdEnblHVSys)) && (VeHPMR_t_StateTimer >
                KeHPMR_t_MaxDelayFOTAShutdwn))) &&
             (((VeHPMR_b_BP_CurrOpenCondMet) &&
               (HPMR_ac_B.LeHPMR_b_ShtdwnMtrSpdMet)) || (VeHPMR_t_StateTimer >
               KeHPMR_t_CntctrMaxDelayOpen))) || ((VeHPMR_b_CollisionDetection) &&
             ((VeHPMR_b_BP_CurrOpenCondMetCrash) || (VeHPMR_t_StateTimer >
               KeHPMR_t_MaxDelayRapidShtdwn)))) || ((VeHPMR_b_HVBatSrvcDisCnctFA)
        && ((VeHPMR_b_BP_CurrOpenCondMet) || (VeHPMR_t_StateTimer >
        KeHPMR_t_MaxDelayHVBatSrvcDscnt)));
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_CNTCTR_OPN(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_CNTCTR_OPEN;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S37>/Calib'
     *  Constant: '<S53>/Calib'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'EVAL_CNTCTR_OPN': '<S31>:306' */
    if (((((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
            (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS)) &&
          (!KeHPMR_b_OvrdHybEngCond)) &&
            (((((KeHPMR_b_EnblAllowCntctrClsd_InvFlt) && (VeHPMR_b_DsblInv)) &&
               (!VeHPMR_b_InverterFaulted)) || (VeHPMC_b_AllwClsdMtrsNotEnbld)) &&
             ((!VeHPMR_b_HV_BatCntctrOpenReq) && ((!VeHPMR_b_OpnBattCntctr) && (
             !VeHPMC_b_CntctrOpnAltMdReq))))) && (!VeHPMR_b_HV_AllShutDwnReq))
    {
        /* Transition: '<S31>:795' */
        /* Transition: '<S31>:912' */
        /* Exit 'EVAL_CNTCTR_OPN': '<S31>:306' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_CNTCTR_OPEN;
        HPMR_ac_DW.is_c4_HPMR_ac = HPM_IN_OPERATIONAL_CONVENTIONAL;

        /* Entry 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_CONVENTIONAL;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = HPMR_GetHPMR_e_DtrmnAPMOperMode();
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        VeHPMC_b_PropulsionSystemActive = true;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Conventional;
    }
    else if ((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaultsAltMd))
    {
        /* Transition: '<S31>:396' */
        /* Transition: '<S31>:573' */
        /* Transition: '<S31>:572' */
        /* Transition: '<S31>:571' */
        /* Transition: '<S31>:521' */
        /* Exit 'EVAL_CNTCTR_OPN': '<S31>:306' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_CNTCTR_OPEN;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

        /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOccEn();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_t_StateTimer = 0.0F;
    }
    else if (VeHPMR_b_CommandContactorsOpen)
    {
        /* Transition: '<S31>:398' */
        /* Exit 'EVAL_CNTCTR_OPN': '<S31>:306' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_CNTCTR_OPEN;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_CMND_CNTCTR_OPN;

        /* Entry 'CMND_CNTCTR_OPN': '<S31>:307' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_CNTCTR_OPEN;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_b_ShutdownInProcess = true;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Open;
        VeHPMR_b_ImmShtdwnCondMet = false;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else
    {
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        VeHPMR_b_CommandContactorsOpen = GetHPMR_b_CommandContactorsOpen();
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }

    /* End of Switch: '<S7>/Switch1' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_HV_ENBL(void)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_HV_ENABLE;
    VeHPMC_b_ContactorsClosedThisKey = false;

    /* Switch: '<S7>/Switch22' incorporates:
     *  Constant: '<S45>/Calib'
     *  Constant: '<S54>/Calib'
     *  Constant: '<S55>/Calib'
     *  Constant: '<S56>/Calib'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch3'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'EVAL_HV_ENBL': '<S31>:293' */
    if ((((((((((((((((uint32)VeHPMI_e_HV_IntrlkStat) == CeHVTR_e_IntrlkPassed) &&
                    (!VeHPMR_b_HV_BatCntctrOpenReq)) &&
                   (!VeHPMR_b_CritFaultLatched)) &&
                  (!VeHPMR_b_DsblAllwCntctrCls_InvFlt)) && (((uint32)
                   VeHPMI_e_BSW_SPT_State) == CeINVR_e_Passed_SPT)) &&
                (!VeHPMR_b_DAPFA_OpenCntctr)) && (!VeHPMR_b_LossCommORC)) &&
              (((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngEnabledOn) ||
                (KeHPMR_b_OvrdHybEngCond_PwrUp)) ||
               (KeHPMR_b_OvrdHybEngCond_Spcl))) && (!VeHPMR_b_OpnBattCntctr)) &&
            (!VeHPMR_b_HVBatSrvcDisCnctFA)) && (!VeHPMR_b_HVILFailThisKeyCycl)) &&
          (!VeHPMC_b_CntctrOpnAltMdReq)) && (VeHPMI_b_ClsCntcrCmd_LVCheck)) &&
            (VeHPMR_b_DrvReadyCmplSts))
    {
        /* Transition: '<S31>:350' */
        /* Exit 'EVAL_HV_ENBL': '<S31>:293' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_HV_ENABLE;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_ENBL_HV;

        /* Entry 'ENBL_HV': '<S31>:294' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_HV_SYS;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m = false;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Closed;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else if ((((KeHPMR_b_Enbl_ALT_Mode) && (((uint32)VeHPMI_e_BSW_SPT_State) ==
                CeINVR_e_Passed_SPT)) && (((uint32)VeHPMI_e_HybEngSysActv) ==
               CeESSR_e_HybEngEnabledOn)) && (((VeHPMR_b_HV_BatCntctrOpenReq) ||
               (VeHPMR_b_OpnBattCntctr)) || (VeHPMC_b_CntctrOpnAltMdReq)))
    {
        /* Transition: '<S31>:775' */
        /* Transition: '<S31>:825' */
        /* Transition: '<S31>:917' */
        /* Exit 'EVAL_HV_ENBL': '<S31>:293' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_HV_ENABLE;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_ALT_HV_ENBL;

        /* Entry 'EVAL_ALT_HV_ENBL': '<S31>:823' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_ALT_HV_ENABLE;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Open;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else
    {
        guard1 = false;
        if ((((((uint32)VeHPMI_e_BSW_SPT_State) == CeINVR_e_Failed_SPT) ||
                ((((uint32)VeHPMI_e_BSW_SPT_State) == CeINVR_e_Pending_SPT) &&
                 (VeHPMR_t_StateTimer > ((float32)
                 Rte_Prm_KeHPMR_t_BSWTimeout_SPT_KeHPMR_t_BSWTimeout_SPT())))) &&
             ((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) ||
                (KeHPMR_b_OvrdHybEngCond_SPT))) || ((((((VeHPMR_b_HVILSpdCondMet)
                 || (VeHPMR_b_HVBatSrvcDisCnctFA)) ||
                (VeHPMR_b_CollisionDetection)) || (VeHPMR_b_DAPFA_OpenCntctr)) ||
              (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)) ||
                (VeHPMR_b_HVILFailThisKeyCycl)))
        {
            /* Transition: '<S31>:728' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            guard1 = true;
        }
        else if ((VeHPMR_t_StateTimer > KeHPMR_t_CntctrMxDlyCls) && ((((uint32)
                    VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) ||
                  (KeHPMR_b_OvrdHybEngCond_PwrUp)))
        {
            /* Transition: '<S31>:346' */
            VeHPMR_b_ShutdownInProcess = true;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:766' */
            /* Transition: '<S31>:753' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S31>:765' */
            /* Transition: '<S31>:753' */
            guard1 = true;
        }
        else
        {
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
        }

        if (guard1)
        {
            /* Transition: '<S31>:726' */
            /* Transition: '<S31>:568' */
            /* Transition: '<S31>:567' */
            /* Transition: '<S31>:566' */
            /* Transition: '<S31>:565' */
            /* Transition: '<S31>:732' */
            /* Transition: '<S31>:730' */
            /* Transition: '<S31>:563' */
            /* Transition: '<S31>:562' */
            /* Transition: '<S31>:561' */
            /* Transition: '<S31>:506' */
            /* Exit 'EVAL_HV_ENBL': '<S31>:293' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_HV_ENABLE;
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch22' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_PRPLSN_DISBL(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_PRPLSN_DISBL;

    /* Switch: '<S7>/Switch1' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'EVAL_PRPLSN_DISBL': '<S31>:303' */
    if ((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) ||
            (VeHPMR_b_CollisionDetection))
    {
        /* Transition: '<S31>:388' */
        /* Exit 'EVAL_PRPLSN_DISBL': '<S31>:303' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_PRPLSN_DISBL;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_PRPLSN_DISBLD;

        /* Entry 'PRPLSN_DISBLD': '<S31>:304' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_PRPLSN_DISABLED;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProces();
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_PropulsionSystemActive = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Disabled;
        VeHPMR_b_ImmShtdwnCondMet = false;
    }
    else if ((VeHPMR_t_StateTimer >= KeHPMR_t_EngStopTimeout) &&
             ((!VeHPMI_b_EnblMtrSys) || (VeHPMR_b_HVFaultsAltMd)))
    {
        /* Transition: '<S31>:386' */
        /* Transition: '<S31>:387' */
        /* Transition: '<S31>:392' */
        /* Exit 'EVAL_PRPLSN_DISBL': '<S31>:303' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_PRPLSN_DISBL;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DISBL_INV;

        /* Entry 'DISBL_INV': '<S31>:305' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProces();
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = H_GetHPMR_e_DtrmnInvrtrDisblCmd();
        VeHPMR_b_ImmShtdwnCondMet = false;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else if (((VeHPMC_b_InitPwrUp) && (((uint32)VeHPMI_e_HybEngSysActv) ==
               CeESSR_e_HybEngDisabled)) && (!VeHPMR_b_HVFaultsAltMd))
    {
        /* Transition: '<S31>:384' */
        /* Transition: '<S31>:521' */
        /* Exit 'EVAL_PRPLSN_DISBL': '<S31>:303' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_PRPLSN_DISBL;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

        /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOccEn();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_t_StateTimer = 0.0F;
    }
    else
    {
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
        VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProces();
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }

    /* End of Switch: '<S7>/Switch1' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_HV_ENBLD(void)
{
    TeINVR_e_SPTState tmp;
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_HV_ENABLED;
    VeHPMC_b_ContactorsClosedThisKey = true;

    /* VariantMerge generated from: '<S380>/VeHPMR_e_MCPC_SPT_State' */
    /* During 'HV_ENBLD': '<S31>:296' */
    tmp = HPMR_ac_B.VariantMergeForOutportVeHPMR_e_;

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S55>/Calib'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch5'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    if ((((((VeHPMI_b_EnblMtrSys) && (!VeHPMC_b_BattSysNotActv)) &&
            (VeHPMR_b_ImmobAuthVld)) && (((uint32)VeHPMI_e_MCPA_SPT_State) ==
            CeINVR_e_Passed_SPT)) && (((uint32)VeHPMI_e_MCPB_SPT_State) ==
            CeINVR_e_Passed_SPT)) && (((uint32)tmp) == CeINVR_e_Passed_SPT))
    {
        /* Transition: '<S31>:360' */
        /* Exit 'HV_ENBLD': '<S31>:296' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_HV_ENABLED;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_ENBL_INV;

        /* Entry 'ENBL_INV': '<S31>:297' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m = false;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Enable;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else
    {
        guard1 = false;
        if ((((((uint32)VeHPMI_e_MCPA_SPT_State) == CeINVR_e_Failed_SPT) ||
                (((uint32)VeHPMI_e_MCPB_SPT_State) == CeINVR_e_Failed_SPT)) ||
                (((uint32)tmp) == CeINVR_e_Failed_SPT)) ||
                ((VeHPMC_b_MCP_SPT_Timeout) && ((((uint32)VeHPMI_e_HybEngSysActv)
               != CeESSR_e_HybEngDisabled) || (KeHPMR_b_OvrdHybEngCond_SPT))))
        {
            /* Transition: '<S31>:731' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            guard1 = true;
        }
        else if ((VeHPMR_b_ImmShtdwnCondMet) || (VeHPMR_b_UnintendedFltShtdwn))
        {
            /* Transition: '<S31>:509' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:732' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S31>:358' */
            /* Transition: '<S31>:565' */
            /* Transition: '<S31>:732' */
            guard1 = true;
        }
        else
        {
            VeHPMR_b_ImmShtdwnCondMet = HPMR_GetHPMR_b_ImmShtdwnCondMet();
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        }

        if (guard1)
        {
            /* Transition: '<S31>:730' */
            /* Transition: '<S31>:563' */
            /* Transition: '<S31>:562' */
            /* Transition: '<S31>:561' */
            /* Transition: '<S31>:506' */
            /* Exit 'HV_ENBLD': '<S31>:296' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_HV_ENABLED;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch4' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_INIT_CNTRLR_PWRDWN(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    /* Constant: '<S40>/Calib' incorporates:
     *  Constant: '<S53>/Calib'
     *  Switch: '<S7>/Switch1'
     */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;

    /* During 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
    if (((!VeHPMC_b_VltBelowActvDschThres) && (VeHPMR_b_ActvDiscNotOcc)) &&
            ((VeHPMR_b_CollisionDetection) || (VeHPMR_b_LossCommORC)))
    {
        /* Transition: '<S31>:1071' */
        /* Transition: '<S31>:1074' */
        /* Transition: '<S31>:1075' */
        /* Exit 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_INIT_CNTRLR_PWRDWN;
        HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = true;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_CMND_BUS_DISCH;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'CMND_BUS_DISCH': '<S31>:308' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = true;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
    }
    else if (((!VeHPMC_b_CntctrOpen_Cnvl) && ((((uint32)VeHPMI_e_HybEngSysActv)
                != CeESSR_e_HybEngDisabled) && (((uint32)VeHPMI_e_HybEngSysActv)
                != CeESSR_e_HybEngEnabledOnIS))) && (!KeHPMR_b_OvrdHybEngCond))
    {
        /* Transition: '<S31>:996' */
        /* Transition: '<S31>:998' */
        /* Transition: '<S31>:911' */
        /* Transition: '<S31>:1005' */
        /* Transition: '<S31>:912' */
        /* Exit 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_INIT_CNTRLR_PWRDWN;
        HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = true;
        HPMR_ac_DW.is_c4_HPMR_ac = HPM_IN_OPERATIONAL_CONVENTIONAL;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_CONVENTIONAL;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = HPMR_GetHPMR_e_DtrmnAPMOperMode();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = true;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Conventional;
    }
    else if (((KeHPMR_b_EnblExitPwrDwn) && (VeHPMC_b_InitPwrUp)) &&
             (!VeHPMR_b_CollisionDetection))
    {
        /* Transition: '<S31>:739' */
        /* Transition: '<S31>:740' */
        /* Transition: '<S31>:793' */
        /* Transition: '<S31>:574' */
        /* Transition: '<S31>:573' */
        /* Transition: '<S31>:572' */
        /* Transition: '<S31>:571' */
        /* Transition: '<S31>:521' */
        /* Exit 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_INIT_CNTRLR_PWRDWN;
        HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = true;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOccEn();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;
    }
    else
    {
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }

    /* End of Constant: '<S40>/Calib' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_OPERATIONAL(void)
{
    boolean guard1 = false;
    boolean tmp;
    boolean tmp_0;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL;

    /* During 'OPERATIONAL': '<S31>:302' */
    tmp = !VeHPMI_b_EnblPrplsnSys;
    tmp_0 = !VeHPMI_b_EnblMtrSys;
    if ((VeHPMR_b_CollisionDetection) || (((!VeHPMI_b_EnblHVSys) && tmp_0) &&
            tmp))
    {
        /* Transition: '<S31>:381' */
        /* Exit 'OPERATIONAL': '<S31>:302' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_PRPLSN_DISBL;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'EVAL_PRPLSN_DISBL': '<S31>:303' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_PRPLSN_DISBL;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_InitPwrUp = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Disabled;
        VeHPMR_b_ImmShtdwnCondMet = false;
    }
    else
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
         *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
         *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
         *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
         */
        guard1 = false;
        if ((((VeHPMC_b_CntctrsOpenAfterClose) || (VeHPMR_b_UnintendedFltShtdwn))
             || (VeHPMR_b_UnintendedShtdwn)) || (((uint32)VeHPMI_e_HybEngSysActv)
             == CeESSR_e_HybEngDisabled))
        {
            /* Transition: '<S31>:785' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            guard1 = true;
        }
        else if (((((((((VeHPMI_b_EnblHVSys) && (VeHPMI_b_EnblMtrSys)) && tmp) ||
                      (((VeHPMI_b_EnblHVSys) && tmp_0) && tmp)) || ((((uint32)
                        VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) &&
                      (VeHPMI_b_EnblPrplsnSys))) || (!VeHPMR_b_ImmoStat_AuthVld))
                   && (!VeHPMC_b_CntctrsOpenAfterClose)) &&
                  (!VeHPMR_b_UnintendedShtdwn)) && (!VeHPMR_b_CollisionDetection))
        {
            /* Transition: '<S31>:581' */
            HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m = true;
            guard1 = true;
        }
        else
        {
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
        }

        if (guard1)
        {
            /* Exit 'OPERATIONAL': '<S31>:302' */
            VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
            HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            VeHPMR_t_StateTimer = 0.0F;
        }

        /* End of Switch: '<S7>/Switch1' */
    }
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_OPERATIONAL_ALTERNATOR(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_ALTERNATOR;

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S47>/Calib'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'OPERATIONAL_ALTERNATOR': '<S31>:870' */
    if ((((((((VeHPMR_b_APMFaulted) || (VeHPMR_b_BuckSpclNotAchvd)) ||
             (!VeHPMR_b_MtrSysActv_VoltCntrl)) || (VeHPMR_b_InverterFaulted)) ||
           (VeHPMR_b_DsblInv)) || (VeHPMR_b_HVBatCntrWeld_ImpdOpn)) ||
            (VeHPMI_b_HVDspt_Enbl)) && (((uint32)VeHPMI_e_HybEngSysActv) !=
            CeESSR_e_HybEngDisabled))
    {
        /* Transition: '<S31>:888' */
        /* Exit 'OPERATIONAL_ALTERNATOR': '<S31>:870' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL_ALTERNATOR;
        HPMR_ac_DW.is_c4_HPMR_ac = HPM_IN_OPERATIONAL_CONVENTIONAL;

        /* Entry 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_CONVENTIONAL;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = HPMR_GetHPMR_e_DtrmnAPMOperMode();
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        VeHPMC_b_PropulsionSystemActive = true;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Conventional;
    }
    else if ((((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) ||
               (VeHPMR_b_HVFaultsAltMd)) || (VeHPMR_b_FltShtDwnCmnd)) ||
             (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))
    {
        /* Transition: '<S31>:929' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

        /* Transition: '<S31>:930' */
        /* Transition: '<S31>:931' */
        /* Exit 'OPERATIONAL_ALTERNATOR': '<S31>:870' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL_ALTERNATOR;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_PRPLSN_DISBL;

        /* Entry 'EVAL_PRPLSN_DISBL': '<S31>:303' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_PRPLSN_DISBL;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_InitPwrUp = false;
        VeHPMC_b_PropulsionSystemActive = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Disabled;
        VeHPMR_b_ImmShtdwnCondMet = false;
    }
    else if (((((((KeHPMR_b_Enbl_HV_Retry_CntctrCls) && (((uint32)
                    VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled)) &&
                 (!VeHPMR_b_HV_BatCntctrOpenReq)) &&
                (!VeHPMI_b_HV_BatCntctrOpenPending)) && (!VeHPMR_b_OpnBattCntctr))
              && (!VeHPMC_b_CntctrOpnAltMdReq)) || (((!VeHPMI_b_EnblHVSys) &&
               (!VeHPMI_b_EnblMtrSys)) && (!VeHPMI_b_EnblPrplsnSys)))
    {
        /* Transition: '<S31>:883' */
        /* Transition: '<S31>:880' */
        /* Exit 'OPERATIONAL_ALTERNATOR': '<S31>:870' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL_ALTERNATOR;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DISBL_INV_VC;

        /* Entry 'DISBL_INV_VC': '<S31>:981' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV_VC;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_ac_GetHPMR_e_DtrmnAltMode();
    }
    else
    {
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_ac_GetHPMR_e_DtrmnAltMode();
    }

    /* End of Switch: '<S7>/Switch1' */
}

#endif

/* Function for Chart: '<S9>/HybSysSt_Machine' */
#if Rte_SysCon_Variant_HPMR_3

static void HPMR_a_OPERATIONAL_CONVENTIONAL(void)
{
    boolean guard1 = false;
    boolean guard2 = false;
    boolean tmp;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_CONVENTIONAL;

    /* During 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
    guard1 = false;
    guard2 = false;
    if (((!VeHPMI_b_EnblHVSys) && (!VeHPMI_b_EnblMtrSys)) &&
            (!VeHPMI_b_EnblPrplsnSys))
    {
        /* Transition: '<S31>:807' */
        /* Transition: '<S31>:805' */
        guard1 = true;
    }
    else
    {
        tmp = !VeHPMR_b_DsblInv;
        if (((((((((KeHPMR_b_Enbl_INV_Retry_MCP) && (VeHPMR_t_StateTimer >=
                    KeHPMR_t_Enbl_INV_RetryTmr)) && ((((uint32)
                     VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                   (((uint32)VeHPMI_e_HybEngSysActv) !=
                    CeESSR_e_HybEngEnabledOnIS))) && (!VeHPMR_b_InverterFaulted))
                && (((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)) &&
                (VeHPMR_b_HV_BatCntctrStatAvail)) && (((uint32)
                VeHPMI_e_BSW_SPT_State) == CeINVR_e_Passed_SPT)) && tmp) ||
                ((((((((KeHPMR_b_Enbl_HV_Retry_CntctrCls) &&
                       (VeHPMR_t_StateTimer >= KeHPMR_t_Enbl_HV_RetryTmr)) &&
                      ((((uint32)VeHPMI_e_HybEngSysActv) !=
                        CeESSR_e_HybEngDisabled) && (((uint32)
                     VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngEnabledOnIS))) &&
                     ((((!VeHPMR_b_HV_BatCntctrOpenReq) &&
                        (!VeHPMI_b_HV_BatCntctrOpenPending)) &&
                       (!VeHPMC_b_CntctrOpnAltMdReq)) &&
                      (!VeHPMR_b_OpnBattCntctr))) && (((uint32)
                  VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Open)) &&
                   (VeHPMR_b_HV_BatCntctrStatAvail)) && (((uint32)
                VeHPMI_e_BSW_SPT_State) == CeINVR_e_Passed_SPT)) ||
                 ((((((KeHPMR_b_Enbl_ALT_HV_Retry) && (VeHPMR_t_StateTimer >=
                   KeHPMR_t_Enbl_ALT_HV_RetryTmr)) && ((((uint32)
                    VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                  (((uint32)VeHPMI_e_HybEngSysActv) !=
                   CeESSR_e_HybEngEnabledOnIS))) &&
                    (((((((VeHPMR_b_HV_BatCntctrOpenReq) ||
                          (VeHPMI_b_HV_BatCntctrOpenPending)) ||
                         (VeHPMC_b_CntctrOpnAltMdReq)) ||
                        (VeHPMR_b_OpnBattCntctr)) && (((uint32)
                     VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Open)) &&
                      (VeHPMR_b_HV_BatCntctrStatAvail)) ||
                     (((VeHPMR_b_OpnBattCntctr) &&
                       (!VeHPMR_b_HV_BatCntctrStatAvail)) &&
                      (KeHPMR_b_EnblAltMdTransLocBPCM)))) && (((uint32)
                 VeHPMI_e_BSW_SPT_State) == CeINVR_e_Passed_SPT)) && tmp)))
        {
            /* Transition: '<S31>:811' */
            /* Transition: '<S31>:817' */
            /* Transition: '<S31>:812' */
            /* Transition: '<S31>:820' */
            /* Transition: '<S31>:941' */
            /* Transition: '<S31>:948' */
            /* Transition: '<S31>:947' */
            /* Transition: '<S31>:821' */
            /* Transition: '<S31>:822' */
            guard2 = true;
        }
        else if (((((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled)
                    || ((VeHPMR_b_InverterFaulted) &&
                        (KeHPMR_b_EnblDiagn_InverterFaulted))) ||
                   (VeHPMR_b_HVFaultsAltMd)) || (VeHPMR_b_FltShtDwnCmnd)) ||
                 (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))
        {
            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            /* Transition: '<S31>:923' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S31>:924' */
            guard1 = true;
        }
        else if ((((KeHPMR_b_Enbl_OperConv_CntctrOpn) &&
                   (((VeHPMR_b_HV_BatCntctrOpenReq) || (VeHPMR_b_OpnBattCntctr))
                    || (VeHPMC_b_CntctrOpnAltMdReq))) && (((uint32)
                    VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)) &&
                 (VeHPMR_b_HV_BatCntctrStatAvail))
        {
            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
            /* Transition: '<S31>:959' */
            VeHPMR_b_ShutdownInProcess = true;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            guard2 = true;
        }
        else
        {
            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;

            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
            HPMR_ac_B.LeHPMR_e_APM_OperMode = HPMR_GetHPMR_e_DtrmnAPMOperMode();
        }
    }

    if (guard2)
    {
        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        /* Exit 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL_CONVENTIONAL;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOccEn();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;
    }

    if (guard1)
    {
        /* Transition: '<S31>:925' */
        /* Exit 'OPERATIONAL_CONVENTIONAL': '<S31>:797' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL_CONVENTIONAL;
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_PRPLSN_DISBL;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'EVAL_PRPLSN_DISBL': '<S31>:303' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_PRPLSN_DISBL;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_InitPwrUp = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Disabled;
        VeHPMR_b_ImmShtdwnCondMet = false;
    }
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnPowerUpConditi_b(const boolean *OR1_f)
{
    /* MATLAB Function 'GetHPMR_b_DtrmnPowerUpCondition': '<S199>:292' */
    /* '<S199>:292:3' */
    return (!VeHPMR_b_CollisionDetection) &&
        (((!HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) && (((VeHPMI_b_EnblMtrSys)
            || (VeHPMI_b_EnblHVSys)) || (VeHPMI_b_EnblPrplsnSys))) || (*OR1_f));
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_DtrmnShutdownInProc_p(void)
{
    boolean ShtDwnInProcess;

    /* MATLAB Function 'GetHPMR_b_DtrmnShutdownInProcess': '<S199>:1017' */
    if (VeHPMC_b_InitPwrUp)
    {
        /* '<S199>:1017:2' */
        /* '<S199>:1017:3' */
        ShtDwnInProcess = false;
    }
    else
    {
        /* '<S199>:1017:5' */
        ShtDwnInProcess = true;
    }

    return ShtDwnInProcess;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_UnintendedShtdwnOcc_g(void)
{
    boolean UnintendedShtdwnOccEntry;

    /* MATLAB Function 'GetHPMR_b_UnintendedShtdwnOccEntry': '<S199>:1046' */
    if ((CeHPMR_e_EVAL_PRPLSN_DISBL <= ((uint32)VeHPMC_e_Src_HybSysSt)) &&
            (((uint32)VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_INIT_CNTRLR_PWRDWN))
    {
        /* '<S199>:1046:2' */
        /* '<S199>:1046:3' */
        UnintendedShtdwnOccEntry = false;
    }
    else
    {
        /* '<S199>:1046:5' */
        UnintendedShtdwnOccEntry = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;
    }

    return UnintendedShtdwnOccEntry;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_InvrtrSwitchCmd GetHPMR_e_DtrmnInvrtrDisblCmd_l(const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m)
{
    TeHPMR_e_InvrtrSwitchCmd Output;

    /* MATLAB Function 'GetHPMR_e_DtrmnInvrtrDisblCmd': '<S199>:286' */
    if ((((VeHPMR_b_CollisionDetection) || (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)) ||
         (*VeHPMR_b_HVBatSrvcDisCnctFA_m)) || (VeHPMC_b_HV_IntrnlIntrlkStatFail))
    {
        /* '<S199>:286:4' */
        /* '<S199>:286:5' */
        Output = CeHPMR_e_DisableImmd;
    }
    else
    {
        /* '<S199>:286:7' */
        Output = CeHPMR_e_Disable;
    }

    return Output;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static boolean HPM_GetHPMR_b_DtrmnPropSysAct_k(void)
{
    boolean PropSysActOut;

    /* Switch: '<S7>/Switch45' */
    /* MATLAB Function 'GetHPMR_b_DtrmnPropSysAct': '<S199>:1066' */
    if (((((VeHPMR_b_HVFaults) || (((uint32)VeHPMI_e_KeyStatus) !=
            CePMDR_e_KeySt_RunPostCrank)) || (VeHPMC_b_CntctrsOpenAfterClose)) ||
         (HPMR_ac_DW.VeHPMC_b_ForcePSADrop)) || (VeHPMR_b_UnintendedFltShtdwn))
    {
        /* '<S199>:1066:2' */
        /* '<S199>:1066:3' */
        PropSysActOut = false;
    }
    else
    {
        /* '<S199>:1066:5' */
        PropSysActOut = VeHPMC_b_PropulsionSystemActive;
    }

    /* End of Switch: '<S7>/Switch45' */
    return PropSysActOut;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_CMND_BUS_DISCH_i(const boolean *OR1_f)
{
    boolean tmp;
    boolean tmp_0;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;

    /* During 'CMND_BUS_DISCH': '<S199>:308' */
    tmp = !VeHPMR_b_HVFaults;
    if (((VeHPMC_b_InitPwrUp) && tmp) && (!VeHPMR_b_BattSwtchInProg))
    {
        /* Transition: '<S199>:406' */
        /* Transition: '<S199>:793' */
        /* Transition: '<S199>:574' */
        /* Transition: '<S199>:573' */
        /* Transition: '<S199>:572' */
        /* Transition: '<S199>:571' */
        /* Transition: '<S199>:521' */
        /* Exit 'CMND_BUS_DISCH': '<S199>:308' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_BUS_DISCHARGE;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOcc_g();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;
    }
    else
    {
        tmp_0 = ((VeHPMC_b_VltBelowActvDschThres) &&
                 (VeHPMR_b_MtrNotInActvDschrg));
        if ((((tmp_0 || (VeHPMR_t_StateTimer > KeHPMR_t_BusDischTimeout)) &&
                (VeHPMI_b_HV_AuxLoadOffReq)) && tmp) &&
                (KeHPMR_b_VehWSwitchBattPack))
        {
            /* Transition: '<S199>:1101' */
            /* Exit 'CMND_BUS_DISCH': '<S199>:308' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_BUS_DISCHARGE;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_a_IN_OPERATIONAL_SERIESCFG;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'OPERATIONAL_SERIESCFG': '<S199>:1100' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_SERIESCFG;
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;
            VeHPMR_b_BattSwtchInProg = false;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
            VeHPMR_b_ShutdownInProcess = true;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
        }
        else if (tmp_0 || (VeHPMR_t_StateTimer > KeHPMR_t_BusDischTimeout))
        {
            /* Transition: '<S199>:408' */
            /* Exit 'CMND_BUS_DISCH': '<S199>:308' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_BUS_DISCHARGE;
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN_p;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'INIT_CNTRLR_PWRDWN': '<S199>:473' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
            HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = false;
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = false;

            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
            VeHPMR_b_ShutdownInProcess = true;
        }
        else
        {
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
        }
    }
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_UnintendedShtdwnOcc_a(void)
{
    boolean UnintendedShtdwnOcc;

    /* Constant: '<S205>/Calib' */
    /* MATLAB Function 'GetHPMR_b_UnintendedShtdwnOcc': '<S199>:1029' */
    if ((VeHPMR_b_HVFaults) || ((VeHPMR_b_FltShtDwnCmnd) &&
                                (KeHPMR_b_EnblShtDwnCmd_SRAR)))
    {
        /* '<S199>:1029:2' */
        /* '<S199>:1029:3' */
        UnintendedShtdwnOcc = true;
    }
    else
    {
        /* '<S199>:1029:5' */
        UnintendedShtdwnOcc = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;
    }

    /* End of Constant: '<S205>/Calib' */
    return UnintendedShtdwnOcc;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static TeHPMR_e_HybSysState HPMR__GetHPMR_e_DtrmnHybSysSt_g(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m)
{
    TeHPMR_e_HybSysState output;
    boolean tmp;
    boolean tmp_0;

    /* Constant: '<S206>/Calib' incorporates:
     *  Constant: '<S205>/Calib'
     */
    /* MATLAB Function 'GetHPMR_e_DtrmnHybSysSt': '<S199>:482' */
    if (((((((((((((VeHPMR_b_CollisionDetection) || (VeHPMR_b_ImmShtdwnCondMet))
                  || (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)) &&
                 (KeHPMR_b_Enbl_ImmShtDwn)) || ((VeHPMR_b_FltShtDwnCmnd) &&
                 (KeHPMR_b_EnblShtDwnCmd_SRAR))) ||
               (*VeHPMR_b_HVBatSrvcDisCnctFA_m)) ||
              (VeHPMC_b_HV_IntrnlIntrlkStatFail)) || (VeHPMR_b_HVILSpdCondMet)) ||
            (VeHPMR_b_MCPA_CoreFail)) || (VeHPMR_b_MCPB_CoreFail)) ||
            (VeHPMR_b_AHCP_CoreFail)) || (VeHPMC_b_OpnReq_SrvcProc1320_Out)) ||
            (VeHPMR_b_HV_BatCntctrOpenReq))
    {
        /* '<S199>:482:7' */
        /* '<S199>:482:8' */
        /* '<S199>:482:9' */
        /* '<S199>:482:10' */
        output = CeHPMR_e_EVAL_PRPLSN_DISBL;
    }
    else
    {
        tmp = !VeHPMC_b_InitPwrUp;
        if ((tmp && (CeHPMR_e_EVAL_HV_ENABLE <= ((uint32)VeHPMC_e_Src_HybSysSt)))
            && (((uint32)VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_INV_ENABLED))
        {
            /* '<S199>:482:14' */
            switch (VeHPMC_e_Src_HybSysSt)
            {
              case CeHPMR_e_EVAL_HV_ENABLE:
                /* '<S199>:482:16' */
                /* '<S199>:482:17' */
                output = CeHPMR_e_CMND_CNTCTR_OPEN;
                break;

              case CeHPMR_e_ENBL_HV_SYS:
                /* '<S199>:482:19' */
                /* '<S199>:482:20' */
                output = CeHPMR_e_EVAL_CNTCTR_OPEN;
                break;

              case CeHPMR_e_HV_ENABLED:
                /* '<S199>:482:22' */
                /* '<S199>:482:23' */
                output = CeHPMR_e_DISBL_INV;
                break;

              case CeHPMR_e_ENBL_INV:
                /* '<S199>:482:25' */
                /* '<S199>:482:26' */
                output = CeHPMR_e_DISBL_INV;
                break;

              case CeHPMR_e_INV_ENABLED:
                /* '<S199>:482:28' */
                /* '<S199>:482:29' */
                output = CeHPMR_e_DISBL_INV;
                break;

              default:
                /* '<S199>:482:31' */
                output = CeHPMR_e_DTRMN_HYBSYSST;
                break;
            }
        }
        else if (((VeHPMC_b_InitPwrUp) && (CeHPMR_e_EVAL_HV_ENABLE <= ((uint32)
                    VeHPMC_e_Src_HybSysSt))) && (((uint32)VeHPMC_e_Src_HybSysSt)
                  <= CeHPMR_e_INV_ENABLED))
        {
            /* Switch: '<S7>/Switch13' incorporates:
             *  Switch: '<S7>/Switch4'
             *  Switch: '<S7>/Switch5'
             */
            /* '<S199>:482:36' */
            if (((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)
            {
                /* '<S199>:482:37' */
                if ((((VeHPMI_b_EnblMtrSys) && (VeHPMI_b_AuthenticationValid)) &&
                     (((uint32)VeHPMI_e_MCPA_SPT_State) == CeINVR_e_Passed_SPT))
                    && (((uint32)VeHPMI_e_MCPB_SPT_State) == CeINVR_e_Passed_SPT))
                {
                    /* '<S199>:482:38' */
                    /* '<S199>:482:39' */
                    output = CeHPMR_e_ENBL_INV;
                }
                else
                {
                    /* '<S199>:482:41' */
                    output = CeHPMR_e_ENBL_HV_SYS;
                }
            }
            else
            {
                /* '<S199>:482:44' */
                output = CeHPMR_e_EVAL_HV_ENABLE;
            }
        }
        else if (tmp && (((uint32)VeHPMC_e_Src_HybSysSt) == CeHPMR_e_OPERATIONAL))
        {
            /* '<S199>:482:49' */
            if ((VeHPMI_b_HV_AuxLoadOffReq) && (KeHPMR_b_VehWSwitchBattPack))
            {
                /* '<S199>:482:50' */
                /* '<S199>:482:51' */
                output = CeHPMR_e_DISBL_INV;
            }
            else
            {
                /* '<S199>:482:53' */
                output = CeHPMR_e_EVAL_PRPLSN_DISBL;
            }
        }
        else if ((VeHPMC_b_InitPwrUp) && (((uint32)VeHPMC_e_Src_HybSysSt) ==
                  CeHPMR_e_OPERATIONAL))
        {
            /* '<S199>:482:58' */
            tmp = !VeHPMI_b_EnblPrplsnSys;
            if (((VeHPMI_b_EnblHVSys) && (!VeHPMI_b_EnblMtrSys)) && tmp)
            {
                /* Switch: '<S7>/Switch1' incorporates:
                 *  Switch: '<S7>/Switch13'
                 */
                /* '<S199>:482:59' */
                if ((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled)
                    && (((uint32)VeHPMI_e_HybEngSysActv) !=
                        CeESSR_e_HybEngEnabledOnIS))
                {
                    /* '<S199>:482:60' */
                    /* '<S199>:482:61' */
                    output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                }
                else if (((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed)
                {
                    /* '<S199>:482:62' */
                    /* '<S199>:482:63' */
                    output = CeHPMR_e_ENBL_HV_SYS;
                }
                else
                {
                    /* '<S199>:482:65' */
                    output = CeHPMR_e_EVAL_HV_ENABLE;
                }
            }
            else
            {
                tmp_0 = ((VeHPMI_b_EnblHVSys) && (VeHPMI_b_EnblMtrSys));
                if (tmp_0 && tmp)
                {
                    /* Switch: '<S7>/Switch1' incorporates:
                     *  Switch: '<S7>/Switch13'
                     */
                    /* '<S199>:482:67' */
                    if ((((uint32)VeHPMI_e_HybEngSysActv) !=
                            CeESSR_e_HybEngDisabled) && (((uint32)
                            VeHPMI_e_HybEngSysActv) !=
                            CeESSR_e_HybEngEnabledOnIS))
                    {
                        /* '<S199>:482:68' */
                        /* '<S199>:482:69' */
                        output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                    }
                    else if (((uint32)VeHPMI_e_HV_BatCntctrStat) ==
                             CeHVTR_e_Closed)
                    {
                        /* '<S199>:482:70' */
                        /* '<S199>:482:71' */
                        output = CeHPMR_e_ENBL_INV;
                    }
                    else
                    {
                        /* '<S199>:482:73' */
                        output = CeHPMR_e_EVAL_HV_ENABLE;
                    }
                }
                else if (tmp_0 && (VeHPMI_b_EnblPrplsnSys))
                {
                    /* Switch: '<S7>/Switch1' incorporates:
                     *  Switch: '<S7>/Switch13'
                     */
                    /* '<S199>:482:76' */
                    if ((((uint32)VeHPMI_e_HybEngSysActv) !=
                            CeESSR_e_HybEngDisabled) && (((uint32)
                            VeHPMI_e_HybEngSysActv) !=
                            CeESSR_e_HybEngEnabledOnIS))
                    {
                        /* '<S199>:482:77' */
                        /* '<S199>:482:78' */
                        output = CeHPMR_e_EVAL_PRPLSN_DISBL;
                    }
                    else if (((uint32)VeHPMI_e_HV_BatCntctrStat) ==
                             CeHVTR_e_Closed)
                    {
                        /* '<S199>:482:79' */
                        /* '<S199>:482:80' */
                        output = CeHPMR_e_ENBL_INV;
                    }
                    else
                    {
                        /* '<S199>:482:82' */
                        output = CeHPMR_e_EVAL_HV_ENABLE;
                    }
                }
                else
                {
                    /* '<S199>:482:86' */
                    output = CeHPMR_e_DTRMN_HYBSYSST;
                }
            }
        }
        else if (((VeHPMC_b_InitPwrUp) && (CeHPMR_e_EVAL_PRPLSN_DISBL <=
                   ((uint32)VeHPMC_e_Src_HybSysSt))) && (((uint32)
                   VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_INIT_CNTRLR_PWRDWN))
        {
            /* Switch: '<S7>/Switch13' */
            /* '<S199>:482:91' */
            if (((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed) &&
                    (*VeHPMR_b_HV_BatCntctrStatAvai_c)) && (((uint32)
                    VeHPMC_e_Src_HybSysSt) <= CeHPMR_e_EVAL_CNTCTR_OPEN))
            {
                /* '<S199>:482:92' */
                if (VeHPMI_b_EnblMtrSys)
                {
                    /* '<S199>:482:94' */
                    /* '<S199>:482:95' */
                    output = CeHPMR_e_ENBL_INV;
                }
                else
                {
                    /* '<S199>:482:97' */
                    output = CeHPMR_e_ENBL_HV_SYS;
                }
            }
            else
            {
                /* '<S199>:482:100' */
                output = CeHPMR_e_EVAL_HV_ENABLE;
            }
        }
        else if ((tmp && (CeHPMR_e_EVAL_PRPLSN_DISBL <= ((uint32)
                    VeHPMC_e_Src_HybSysSt))) && (((uint32)VeHPMC_e_Src_HybSysSt)
                  <= CeHPMR_e_INIT_CNTRLR_PWRDWN))
        {
            /* '<S199>:482:104' */
            switch (VeHPMC_e_Src_HybSysSt)
            {
              case CeHPMR_e_EVAL_PRPLSN_DISBL:
                /* '<S199>:482:105' */
                /* '<S199>:482:106' */
                output = CeHPMR_e_PRPLSN_DISABLED;
                break;

              case CeHPMR_e_PRPLSN_DISABLED:
                /* '<S199>:482:107' */
                /* '<S199>:482:108' */
                output = CeHPMR_e_DISBL_INV;
                break;

              case CeHPMR_e_DISBL_INV:
                /* '<S199>:482:109' */
                /* '<S199>:482:110' */
                output = CeHPMR_e_EVAL_CNTCTR_OPEN;
                break;

              case CeHPMR_e_EVAL_CNTCTR_OPEN:
                /* '<S199>:482:111' */
                /* '<S199>:482:112' */
                output = CeHPMR_e_EVAL_CNTCTR_OPEN;
                break;

              case CeHPMR_e_CMND_CNTCTR_OPEN:
                /* '<S199>:482:113' */
                /* '<S199>:482:114' */
                output = CeHPMR_e_CMND_CNTCTR_OPEN;
                break;

              case CeHPMR_e_CMND_BUS_DISCHARGE:
                /* '<S199>:482:115' */
                /* '<S199>:482:116' */
                output = CeHPMR_e_CMND_BUS_DISCHARGE;
                break;

              default:
                /* '<S199>:482:118' */
                output = CeHPMR_e_INIT_CNTRLR_PWRDWN;
                break;
            }
        }
        else
        {
            /* '<S199>:482:121' */
            output = CeHPMR_e_DTRMN_HYBSYSST;
        }
    }

    /* End of Constant: '<S206>/Calib' */
    return output;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPM_enter_atomic_EVAL_HV_ENBL_e(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    /* Entry 'EVAL_HV_ENBL': '<S199>:293' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_HV_ENABLE;
    HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = true;

    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
    VeHPMR_t_StateTimer = 0.0F;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
    HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
    VeHPMR_b_ShutdownInProcess = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
    HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
    HPMR_ac_B.VeHPMC_b_ContactorsClosedThis_i = false;
    VeHPMR_b_ImmShtdwnCondMet = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PrechargeFailure' */
    HPMR_ac_B.LeHPMR_b_PrechargeFailure = false;
    HPMR_ac_B.VeHPMR_b_CommandContactorsOpe_f = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
    VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
    HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_DTRMN_HYBSYSST_j(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

    /* During 'DTRMN_HYBSYSST': '<S199>:483' */
    guard1 = false;
    if (VeHPMR_t_StateTimer >= KeHPMR_t_DtrmHybSysStTmr)
    {
        /* Transition: '<S199>:532' */
        /* Transition: '<S199>:534' */
        /* Transition: '<S199>:536' */
        /* Transition: '<S199>:990' */
        if (((uint32)VeHPMR_e_Trgt_HybSysSt) == CeHPMR_e_INIT_CNTRLR_PWRDWN)
        {
            /* Transition: '<S199>:992' */
            /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN_p;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'INIT_CNTRLR_PWRDWN': '<S199>:473' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
            HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = false;
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = false;

            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
            VeHPMR_b_ShutdownInProcess = true;
        }
        else
        {
            /* Transition: '<S199>:991' */
            if (((uint32)VeHPMR_e_Trgt_HybSysSt) == CeHPMR_e_CMND_BUS_DISCHARGE)
            {
                /* Transition: '<S199>:993' */
                /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_CMND_BUS_DISCH_p;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'CMND_BUS_DISCH': '<S199>:308' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
            }
            else
            {
                /* Transition: '<S199>:552' */
                if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                        CeHPMR_e_CMND_CNTCTR_OPEN)
                {
                    /* Transition: '<S199>:540' */
                    /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                    HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_CMND_CNTCTR_OPN_h;

                    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                    /* Entry 'CMND_CNTCTR_OPN': '<S199>:307' */
                    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_CNTCTR_OPEN;

                    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                    VeHPMR_t_StateTimer = 0.0F;
                    VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

                    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                    VeHPMR_b_ShutdownInProcess = true;

                    /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                    HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                    HPMR_ac_B.LeHPMC_e_BattCntctrCmd = CeHPMR_e_Open;
                    VeHPMR_b_ImmShtdwnCondMet = false;

                    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                    VeHPMC_b_PropulsionSystemActive =
                        HPM_GetHPMR_b_DtrmnPropSysAct_k();
                    HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
                }
                else
                {
                    /* Transition: '<S199>:553' */
                    if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                            CeHPMR_e_EVAL_CNTCTR_OPEN)
                    {
                        /* Transition: '<S199>:538' */
                        /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_EVAL_CNTCTR_OPN_p;

                        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                        /* Entry 'EVAL_CNTCTR_OPN': '<S199>:306' */
                        HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                            CeHPMR_e_EVAL_CNTCTR_OPEN;
                        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b
                            (OR1_f);

                        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                        VeHPMR_t_StateTimer = 0.0F;

                        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                        VeHPMR_b_ShutdownInProcess = true;

                        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                        VeHPMR_b_ImmShtdwnCondMet = false;

                        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                        VeHPMC_b_PropulsionSystemActive =
                            HPM_GetHPMR_b_DtrmnPropSysAct_k();
                        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
                    }
                    else
                    {
                        /* Transition: '<S199>:554' */
                        if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                CeHPMR_e_DISBL_INV)
                        {
                            /* Transition: '<S199>:542' */
                            /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DISBL_INV_k;

                            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                            /* Entry 'DISBL_INV': '<S199>:305' */
                            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;

                            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                            VeHPMR_t_StateTimer = 0.0F;

                            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                            HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b
                                (OR1_f);

                            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                            VeHPMR_b_ShutdownInProcess =
                                GetHPMR_b_DtrmnShutdownInProc_p();

                            /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                            HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                                GetHPMR_e_DtrmnInvrtrDisblCmd_l
                                (VeHPMR_b_HVBatSrvcDisCnctFA_m);
                            VeHPMR_b_ImmShtdwnCondMet = false;

                            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                            VeHPMC_b_PropulsionSystemActive =
                                HPM_GetHPMR_b_DtrmnPropSysAct_k();
                            HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
                        }
                        else
                        {
                            /* Transition: '<S199>:555' */
                            /* Transition: '<S199>:584' */
                            if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                    CeHPMR_e_EVAL_PRPLSN_DISBL)
                            {
                                /* Transition: '<S199>:544' */
                                /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                                HPMR_ac_DW.is_c1_HPMR_ac =
                                    HPMR_ac_IN_EVAL_PRPLSN_DISBL_k;

                                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                /* Entry 'EVAL_PRPLSN_DISBL': '<S199>:303' */
                                HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                    CeHPMR_e_EVAL_PRPLSN_DISBL;

                                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                VeHPMR_t_StateTimer = 0.0F;

                                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                                HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                                VeHPMC_b_InitPwrUp = false;

                                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                VeHPMC_b_PropulsionSystemActive = false;
                                HPMR_ac_B.LeHPMR_e_PropSysMode_i =
                                    CeHPMR_e_Disabled;
                                VeHPMR_b_ImmShtdwnCondMet = false;
                            }
                            else
                            {
                                /* Transition: '<S199>:556' */
                                if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                        CeHPMR_e_ENBL_INV)
                                {
                                    /* Transition: '<S199>:550' */
                                    /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                                    HPMR_ac_DW.is_c1_HPMR_ac =
                                        HPMR_ac_IN_ENBL_INV_a;

                                    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                    /* Entry 'ENBL_INV': '<S199>:297' */
                                    HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                        CeHPMR_e_ENBL_INV;

                                    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                                    VeHPMR_b_ShutdownInProcess = false;

                                    /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                                    HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                                        false;

                                    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                    VeHPMR_t_StateTimer = 0.0F;

                                    /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                                    HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                                        CeHPMR_e_Enable;

                                    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                    VeHPMC_b_PropulsionSystemActive =
                                        HPM_GetHPMR_b_DtrmnPropSysAct_k();
                                    HPMR_ac_B.LeHPMR_e_PropSysMode_i =
                                        CeHPMR_e_Disabled;
                                }
                                else
                                {
                                    /* Transition: '<S199>:557' */
                                    if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                            CeHPMR_e_ENBL_HV_SYS)
                                    {
                                        /* Transition: '<S199>:548' */
                                        /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                                        HPMR_ac_DW.is_c1_HPMR_ac =
                                            HPMR_ac_IN_ENBL_HV_j;

                                        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                        /* Entry 'ENBL_HV': '<S199>:294' */
                                        HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                            CeHPMR_e_ENBL_HV_SYS;

                                        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                        VeHPMR_t_StateTimer = 0.0F;

                                        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                                        VeHPMR_b_ShutdownInProcess = false;

                                        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                                        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h
                                            = false;

                                        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                                        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                                            CeHPMR_e_Disable;
                                        HPMR_ac_B.LeHPMC_e_BattCntctrCmd =
                                            CeHPMR_e_Closed;

                                        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                        VeHPMC_b_PropulsionSystemActive =
                                            HPM_GetHPMR_b_DtrmnPropSysAct_k();
                                        HPMR_ac_B.LeHPMR_e_PropSysMode_i =
                                            CeHPMR_e_Disabled;
                                    }
                                    else
                                    {
                                        /* Transition: '<S199>:559' */
                                        if (((uint32)VeHPMR_e_Trgt_HybSysSt) ==
                                                CeHPMR_e_EVAL_HV_ENABLE)
                                        {
                                            /* Transition: '<S199>:546' */
                                            /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                                            HPMR_ac_DW.is_c1_HPMR_ac =
                                                HPMR_ac_IN_EVAL_HV_ENBL_k;
                                            HPM_enter_atomic_EVAL_HV_ENBL_e();
                                        }
                                        else if (((uint32)VeHPMR_e_Trgt_HybSysSt)
                                                 == CeHPMR_e_PRPLSN_DISABLED)
                                        {
                                            /* Transition: '<S199>:585' */
                                            /* Exit 'DTRMN_HYBSYSST': '<S199>:483' */
                                            HPMR_ac_DW.is_c1_HPMR_ac =
                                                HPMR_ac_IN_PRPLSN_DISBLD_h;

                                            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                                            /* Entry 'PRPLSN_DISBLD': '<S199>:304' */
                                            HPMR_ac_B.LeHPMR_e_HybSysSt_j =
                                                CeHPMR_e_PRPLSN_DISABLED;

                                            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                                            VeHPMR_t_StateTimer = 0.0F;
                                            VeHPMC_b_InitPwrUp =
                                                GetHPMR_b_DtrmnPowerUpConditi_b
                                                (OR1_f);

                                            /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                                            VeHPMR_b_ShutdownInProcess =
                                                GetHPMR_b_DtrmnShutdownInProc_p();

                                            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                                            HPMR_ac_B.LeHPMR_e_APM_OperMode =
                                                CeHPMR_e_Idle;

                                            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                                            VeHPMC_b_PropulsionSystemActive =
                                                false;
                                            HPMR_ac_B.LeHPMR_e_PropSysMode_i =
                                                CeHPMR_e_Disabled;
                                            VeHPMR_b_ImmShtdwnCondMet = false;
                                        }
                                        else
                                        {
                                            guard1 = true;
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
    else
    {
        guard1 = true;
    }

    if (guard1)
    {
        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOcc_a();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
        VeHPMR_e_Trgt_HybSysSt = HPMR__GetHPMR_e_DtrmnHybSysSt_g
            (VeHPMR_b_HV_BatCntctrStatAvai_c, VeHPMR_b_HVBatSrvcDisCnctFA_m);
    }
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static boolean HP_GetHPMR_b_ImmShtdwnCondMet_g(void)
{
    /* MATLAB Function 'GetHPMR_b_ImmShtdwnCondMet': '<S199>:280' */
    /* '<S199>:280:6' */
    return (VeHPMC_b_CntctrsOpenAfterClose) || (VeHPMR_b_CollisionDetection);
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_HV_e(const boolean *VeHPMR_b_HV_BatCntctrStatAvai_c,
    const boolean *OR1_f, const boolean *OR1)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_HV_SYS;
    HPMR_ac_B.LeHPMC_e_BattCntctrCmd = CeHPMR_e_Closed;

    /* Switch: '<S7>/Switch13' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PrechargeFailure'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'ENBL_HV': '<S199>:294' */
    if (((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed) &&
            (*VeHPMR_b_HV_BatCntctrStatAvai_c)) && (VeHPMI_U_HV_Volt >
            KeHPMR_U_PrechargeMinVolt))
    {
        /* Transition: '<S199>:357' */
        /* Exit 'ENBL_HV': '<S199>:294' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_HV_SYS;
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_HV_ENBLD_e;

        /* Entry 'HV_ENBLD': '<S199>:296' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_HV_ENABLED;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Buck;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.VeHPMC_b_ContactorsClosedThis_i = true;
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
    }
    else
    {
        guard1 = false;
        if ((((VeHPMR_t_StateTimer >= KeHPMR_t_CloseStateLowVolt) &&
                (VeHPMI_U_HV_Volt <= KeHPMR_U_PrechargeMinVolt)) &&
                (VeHPMI_b_EnblHVSys)) && (*OR1))
        {
            /* Transition: '<S199>:1118' */
            HPMR_ac_B.LeHPMR_b_PrechargeFailure = true;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            HPMR_ac_DW.VeHPMC_b_ForcePSADrop = true;
            guard1 = true;
        }
        else if (((VeHPMR_t_StateTimer >= KeHPMR_t_CloseStateLowVolt) &&
                  (VeHPMI_U_HV_Volt <= KeHPMR_U_PrechargeMinVolt)) &&
                 (VeHPMI_b_EnblHVSys))
        {
            /* Transition: '<S199>:356' */
            HPMR_ac_B.LeHPMR_b_PrechargeFailure = true;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S199>:567' */
            /* Transition: '<S199>:1117' */
            guard1 = true;
        }
        else if ((VeHPMR_b_ImmShtdwnCondMet) || (VeHPMR_b_UnintendedFltShtdwn))
        {
            /* Transition: '<S199>:351' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S199>:568' */
            /* Transition: '<S199>:567' */
            /* Transition: '<S199>:1117' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S199>:353' */
            /* Transition: '<S199>:1117' */
            guard1 = true;
        }
        else
        {
            VeHPMR_b_ImmShtdwnCondMet = HP_GetHPMR_b_ImmShtdwnCondMet_g();
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
        }

        if (guard1)
        {
            /* Transition: '<S199>:1116' */
            /* Transition: '<S199>:1087' */
            /* Transition: '<S199>:565' */
            /* Transition: '<S199>:732' */
            /* Transition: '<S199>:1090' */
            /* Transition: '<S199>:1092' */
            /* Transition: '<S199>:1093' */
            /* Transition: '<S199>:1096' */
            /* Transition: '<S199>:1120' */
            /* Transition: '<S199>:1097' */
            /* Transition: '<S199>:561' */
            /* Transition: '<S199>:506' */
            /* Exit 'ENBL_HV': '<S199>:294' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_HV_SYS;
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

            /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOcc_g();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch13' */
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_ENBL_INV_h(const boolean *VeHPMR_b_ImmoStat_AuthVld_f, const
    boolean *VeHPMR_b_HighMtrSpdActvIn_o, const boolean *AND_l, const boolean
    *OR1_f, const boolean *OR1)
{
    boolean guard1 = false;
    boolean tmp;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV;

    /* During 'ENBL_INV': '<S199>:297' */
    if ((((VeHPMC_b_MtrSystemActive) && (VeHPMI_b_AuthenticationValid)) &&
            (!(*VeHPMR_b_HighMtrSpdActvIn_o))) && (!VeHPMC_b_BattSysNotActv))
    {
        /* Transition: '<S199>:368' */
        /* Exit 'ENBL_INV': '<S199>:297' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_INV_ENBLD_d;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'INV_ENBLD': '<S199>:300' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INV_ENABLED;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Hybrid;

        /* VariantMerge generated from: '<S8>/LeHPMR_b_HighMtrStrtSpdActv' */
        HPMR_ac_B.LeHPMR_b_HighMtrStrtSpdActv = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
    }
    else if (*VeHPMR_b_HighMtrSpdActvIn_o)
    {
        /* VariantMerge generated from: '<S8>/LeHPMR_b_HighMtrStrtSpdActv' */
        /* Transition: '<S199>:362' */
        HPMR_ac_B.LeHPMR_b_HighMtrStrtSpdActv = true;

        /* Transition: '<S199>:361' */
        /* Exit 'ENBL_INV': '<S199>:297' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_ENBL_INV_a;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'ENBL_INV': '<S199>:297' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Enable;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
    }
    else
    {
        tmp = !VeHPMC_b_MtrSystemActive;
        guard1 = false;
        if (((VeHPMR_t_StateTimer >= KeHPMR_t_MtrSysNotActvTmr) && tmp) && (*OR1))
        {
            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            /* Transition: '<S199>:1121' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            HPMR_ac_DW.VeHPMC_b_ForcePSADrop = true;
            guard1 = true;
        }
        else if ((((((VeHPMR_t_StateTimer >= KeHPMR_t_MtrSysNotActvTmr) && tmp) ||
                    (VeHPMR_b_ImmShtdwnCondMet)) ||
                   (VeHPMR_b_UnintendedFltShtdwn)) || (VeHPMC_b_BattSysNotActv))
                 || (*AND_l))
        {
            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            /* Transition: '<S199>:366' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S199>:1093' */
            /* Transition: '<S199>:1096' */
            guard1 = true;
        }
        else if (((!(*VeHPMR_b_ImmoStat_AuthVld_f)) || (!VeHPMI_b_EnblHVSys)) ||
                 (!VeHPMI_b_EnblMtrSys))
        {
            /* Transition: '<S199>:363' */
            /* Transition: '<S199>:1096' */
            guard1 = true;
        }
        else if ((VeHPMI_b_HV_AuxLoadOffReq) && (KeHPMR_b_VehWSwitchBattPack))
        {
            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            /* Transition: '<S199>:1089' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            VeHPMR_b_BattSwtchInProg = true;

            /* Transition: '<S199>:1092' */
            /* Transition: '<S199>:1093' */
            /* Transition: '<S199>:1096' */
            guard1 = true;
        }
        else
        {
            VeHPMR_b_ImmShtdwnCondMet = HP_GetHPMR_b_ImmShtdwnCondMet_g();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
        }

        if (guard1)
        {
            /* Transition: '<S199>:1120' */
            /* Transition: '<S199>:1097' */
            /* Transition: '<S199>:561' */
            /* Transition: '<S199>:506' */
            /* Exit 'ENBL_INV': '<S199>:297' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_ENBL_INV;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOcc_g();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;
        }
    }
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static boolean GetHPMR_b_CommandContactorsOp_c(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m)
{
    boolean Output_tmp;

    /* MATLAB Function 'GetHPMR_b_CommandContactorsOpen': '<S199>:283' */
    /* '<S199>:283:4' */
    Output_tmp = !VeHPMI_b_EnblHVSys;

    /* Switch: '<S7>/Switch13' */
    return (((((((VeHPMR_b_UnintendedFltShtdwn) ||
                 (HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h)) ||
                (((VeHPMR_t_StateTimer > KeHPMR_t_HV_BusKeyOff) && Output_tmp) &&
                 ((VeHPMI_b_RdyForShtDwnAPMCleared) || (VeHPMR_t_StateTimer >
                   KeHPMR_t_APMShtdwnTmr)))) || ((((uint32)
                  VeHPMI_e_HV_BatCntctrStat) != CeHVTR_e_Closed) &&
                (*VeHPMR_b_HV_BatCntctrStatAvai_c))) || ((Output_tmp &&
                (VeHPMI_b_FOTAOvrrdEnblHVSys)) && (VeHPMR_t_StateTimer >
                KeHPMR_t_MaxDelayFOTAShutdwn))) &&
             (((VeHPMR_b_BP_CurrOpenCondMet) &&
               (HPMR_ac_B.LeHPMR_b_ShtdwnMtrSpdMet)) || (VeHPMR_t_StateTimer >
               KeHPMR_t_CntctrMaxDelayOpen))) || ((VeHPMR_b_CollisionDetection) &&
             ((VeHPMR_b_BP_CurrOpenCondMetCrash) || (VeHPMR_t_StateTimer >
               KeHPMR_t_MaxDelayRapidShtdwn)))) ||
        (((*VeHPMR_b_HVBatSrvcDisCnctFA_m) || (VeHPMC_b_HV_IntrnlIntrlkStatFail))
         && ((VeHPMR_b_BP_CurrOpenCondMet) || (VeHPMR_t_StateTimer >
           KeHPMR_t_MaxDelayHVBatSrvcDscnt)));
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_CNTCTR_OPN_h(const boolean
    *VeHPMR_b_HV_BatCntctrStatAvai_c, const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_CNTCTR_OPEN;

    /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
    HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;

    /* During 'EVAL_CNTCTR_OPN': '<S199>:306' */
    if (((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaults)) &&
            (!VeHPMR_b_BattSwtchInProg))
    {
        /* Transition: '<S199>:396' */
        /* Transition: '<S199>:573' */
        /* Transition: '<S199>:572' */
        /* Transition: '<S199>:571' */
        /* Transition: '<S199>:521' */
        /* Exit 'EVAL_CNTCTR_OPN': '<S199>:306' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_CNTCTR_OPEN;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOcc_g();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;
    }
    else if (HPMR_ac_B.VeHPMR_b_CommandContactorsOpe_f)
    {
        /* Transition: '<S199>:398' */
        /* Exit 'EVAL_CNTCTR_OPN': '<S199>:306' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_CNTCTR_OPEN;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_CMND_CNTCTR_OPN_h;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'CMND_CNTCTR_OPN': '<S199>:307' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_CNTCTR_OPEN;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = true;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd = CeHPMR_e_Open;
        VeHPMR_b_ImmShtdwnCondMet = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
    }
    else
    {
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_B.VeHPMR_b_CommandContactorsOpe_f =
            GetHPMR_b_CommandContactorsOp_c(VeHPMR_b_HV_BatCntctrStatAvai_c,
            VeHPMR_b_HVBatSrvcDisCnctFA_m);

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_HV_ENBL_j(const boolean *VeHPMR_b_CritFaultLatched_j,
    const boolean *VeHPMR_b_LossCommORC_o, const boolean
    *VeHPMR_b_OpnBattCntctr_i, const boolean *VeHPMR_b_DsblAllwCntctrCls_InvF,
    const boolean *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_HV_ENABLE;
    HPMR_ac_B.VeHPMC_b_ContactorsClosedThis_i = false;

    /* Switch: '<S7>/Switch22' incorporates:
     *  Constant: '<S208>/Calib'
     *  Constant: '<S209>/Calib'
     *  Constant: '<S210>/Calib'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch3'
     *  Switch: '<S7>/Switch88'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'EVAL_HV_ENBL': '<S199>:293' */
    if (((((((((((((((((uint32)VeHPMI_e_HV_IntrlkStat) == CeHVTR_e_IntrlkPassed)
                     && (!VeHPMR_b_HV_BatCntctrOpenReq)) &&
                    (!(*VeHPMR_b_CritFaultLatched_j))) &&
                   (!(*VeHPMR_b_DsblAllwCntctrCls_InvF))) && (((uint32)
                    VeHPMI_e_BSW_SPT_State) == CeINVR_e_Passed_SPT)) &&
                 (!VeHPMR_b_DAPFA_OpenCntctr)) && (!(*VeHPMR_b_LossCommORC_o))) &&
               (((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngEnabledOn) ||
                 (KeHPMR_b_OvrdHybEngCond_PwrUp)) ||
                (KeHPMR_b_OvrdHybEngCond_Spcl))) && (!(*VeHPMR_b_OpnBattCntctr_i)))
             && (!(*VeHPMR_b_HVBatSrvcDisCnctFA_m))) && (((uint32)
              VeHPMI_e_HV_IntrnlIntrlkStat) == CeBPCR_e_HVBatIntrlkPass)) &&
            (!VeHPMR_b_HVILFailThisKeyCycl)) &&
            (!VeHPMC_b_OpnReq_SrvcProc1320_Out)) && ((!VeHPMI_b_HV_AuxLoadOffReq)
          || (!KeHPMR_b_VehWSwitchBattPack))) && (VeHPMI_b_ClsCntcrCmd_LVCheck))
    {
        /* Transition: '<S199>:350' */
        /* Exit 'EVAL_HV_ENBL': '<S199>:293' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_HV_ENABLE;
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_ENBL_HV_j;

        /* Entry 'ENBL_HV': '<S199>:294' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_HV_SYS;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd = CeHPMR_e_Closed;
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
    }
    else
    {
        guard1 = false;
        if ((((((uint32)VeHPMI_e_BSW_SPT_State) == CeINVR_e_Failed_SPT) ||
                ((((uint32)VeHPMI_e_BSW_SPT_State) == CeINVR_e_Pending_SPT) &&
                 (VeHPMR_t_StateTimer > ((float32)
                 Rte_Prm_KeHPMR_t_BSWTimeout_SPT_KeHPMR_t_BSWTimeout_SPT())))) &&
             ((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) ||
                (KeHPMR_b_OvrdHybEngCond_SPT))) ||
                (((((((((VeHPMR_b_HVILSpdCondMet) ||
                        (*VeHPMR_b_HVBatSrvcDisCnctFA_m)) ||
                       (VeHPMC_b_HV_IntrnlIntrlkStatFail)) ||
                      (VeHPMR_b_CollisionDetection)) ||
                     (VeHPMR_b_DAPFA_OpenCntctr)) ||
                    (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)) ||
                   (VeHPMR_b_HVILFailThisKeyCycl)) ||
                  ((VeHPMI_b_HV_AuxLoadOffReq) && (KeHPMR_b_VehWSwitchBattPack)))
                 || (VeHPMC_b_OpnReq_SrvcProc1320_Out)))
        {
            /* Transition: '<S199>:728' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            guard1 = true;
        }
        else if ((VeHPMR_t_StateTimer > KeHPMR_t_CntctrMxDlyCls) && ((((uint32)
                    VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) ||
                  (KeHPMR_b_OvrdHybEngCond_PwrUp)))
        {
            /* Transition: '<S199>:346' */
            VeHPMR_b_ShutdownInProcess = true;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S199>:766' */
            /* Transition: '<S199>:753' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S199>:765' */
            /* Transition: '<S199>:753' */
            guard1 = true;
        }
        else
        {
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
        }

        if (guard1)
        {
            /* Transition: '<S199>:1082' */
            /* Transition: '<S199>:568' */
            /* Transition: '<S199>:567' */
            /* Transition: '<S199>:1117' */
            /* Transition: '<S199>:1116' */
            /* Transition: '<S199>:1087' */
            /* Transition: '<S199>:565' */
            /* Transition: '<S199>:732' */
            /* Transition: '<S199>:1090' */
            /* Transition: '<S199>:1092' */
            /* Transition: '<S199>:1093' */
            /* Transition: '<S199>:1096' */
            /* Transition: '<S199>:1120' */
            /* Transition: '<S199>:1097' */
            /* Transition: '<S199>:561' */
            /* Transition: '<S199>:506' */
            /* Exit 'EVAL_HV_ENBL': '<S199>:293' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_HV_ENABLE;
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

            /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOcc_g();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch22' */
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_EVAL_PRPLSN_DISBL_g(const boolean
    *VeHPMR_b_HVBatSrvcDisCnctFA_m, const boolean *OR1_f)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_PRPLSN_DISBL;

    /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
    HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;

    /* Switch: '<S7>/Switch1' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'EVAL_PRPLSN_DISBL': '<S199>:303' */
    if ((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) ||
            (VeHPMR_b_CollisionDetection))
    {
        /* Transition: '<S199>:388' */
        /* Exit 'EVAL_PRPLSN_DISBL': '<S199>:303' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_PRPLSN_DISBL;
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_PRPLSN_DISBLD_h;

        /* Entry 'PRPLSN_DISBLD': '<S199>:304' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_PRPLSN_DISABLED;
        VeHPMR_t_StateTimer = 0.0F;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
        VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProc_p();
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_PropulsionSystemActive = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
        VeHPMR_b_ImmShtdwnCondMet = false;
    }
    else if ((VeHPMR_t_StateTimer >= KeHPMR_t_EngStopTimeout) &&
             ((!VeHPMI_b_EnblMtrSys) || (VeHPMR_b_CollisionDetection)))
    {
        /* Transition: '<S199>:386' */
        /* Transition: '<S199>:387' */
        /* Transition: '<S199>:392' */
        /* Exit 'EVAL_PRPLSN_DISBL': '<S199>:303' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_PRPLSN_DISBL;
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DISBL_INV_k;

        /* Entry 'DISBL_INV': '<S199>:305' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
        VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProc_p();
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = GetHPMR_e_DtrmnInvrtrDisblCmd_l
            (VeHPMR_b_HVBatSrvcDisCnctFA_m);
        VeHPMR_b_ImmShtdwnCondMet = false;
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
    }
    else if ((((VeHPMC_b_InitPwrUp) && (((uint32)VeHPMI_e_HybEngSysActv) !=
                CeESSR_e_HybEngEnabledOnIS)) && (!VeHPMR_b_HVFaults)) &&
             (!VeHPMR_b_BattSwtchInProg))
    {
        /* Transition: '<S199>:384' */
        /* Transition: '<S199>:521' */
        /* Exit 'EVAL_PRPLSN_DISBL': '<S199>:303' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_EVAL_PRPLSN_DISBL;
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

        /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
            GetHPMR_b_UnintendedShtdwnOcc_g();
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
        VeHPMR_t_StateTimer = 0.0F;
    }
    else
    {
        VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
        VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProc_p();
        VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
    }

    /* End of Switch: '<S7>/Switch1' */
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_HV_ENBLD_h(const boolean *OR1_f)
{
    boolean guard1 = false;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_HV_ENABLED;

    /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
    HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Buck;
    HPMR_ac_B.VeHPMC_b_ContactorsClosedThis_i = true;

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S209>/Calib'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch5'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1'
     *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
     *  VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess'
     *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
     */
    /* During 'HV_ENBLD': '<S199>:296' */
    if (((((VeHPMI_b_EnblMtrSys) && (!VeHPMC_b_BattSysNotActv)) &&
            (VeHPMI_b_AuthenticationValid)) && (((uint32)VeHPMI_e_MCPA_SPT_State)
          == CeINVR_e_Passed_SPT)) && (((uint32)VeHPMI_e_MCPB_SPT_State) ==
            CeINVR_e_Passed_SPT))
    {
        /* Transition: '<S199>:360' */
        /* Exit 'HV_ENBLD': '<S199>:296' */
        VeHPMC_e_Src_HybSysSt = CeHPMR_e_HV_ENABLED;
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_ENBL_INV_a;

        /* Entry 'ENBL_INV': '<S199>:297' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV;
        VeHPMR_b_ShutdownInProcess = false;
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        VeHPMR_t_StateTimer = 0.0F;
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Enable;
        VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
    }
    else
    {
        guard1 = false;
        if (((((uint32)VeHPMI_e_MCPA_SPT_State) == CeINVR_e_Failed_SPT) ||
                (((uint32)VeHPMI_e_MCPB_SPT_State) == CeINVR_e_Failed_SPT)) ||
                ((VeHPMC_b_MCP_SPT_Timeout) && ((((uint32)VeHPMI_e_HybEngSysActv)
               != CeESSR_e_HybEngDisabled) || (KeHPMR_b_OvrdHybEngCond_SPT))))
        {
            /* Transition: '<S199>:731' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            guard1 = true;
        }
        else if ((VeHPMR_b_ImmShtdwnCondMet) || (VeHPMR_b_UnintendedFltShtdwn))
        {
            /* Transition: '<S199>:509' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

            /* Transition: '<S199>:732' */
            guard1 = true;
        }
        else if (!VeHPMI_b_EnblHVSys)
        {
            /* Transition: '<S199>:358' */
            /* Transition: '<S199>:565' */
            /* Transition: '<S199>:732' */
            guard1 = true;
        }
        else if ((VeHPMI_b_HV_AuxLoadOffReq) && (KeHPMR_b_VehWSwitchBattPack))
        {
            /* Transition: '<S199>:1085' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            VeHPMR_b_BattSwtchInProg = true;

            /* Transition: '<S199>:1087' */
            /* Transition: '<S199>:565' */
            /* Transition: '<S199>:732' */
            guard1 = true;
        }
        else
        {
            VeHPMR_b_ImmShtdwnCondMet = HP_GetHPMR_b_ImmShtdwnCondMet_g();
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
        }

        if (guard1)
        {
            /* Transition: '<S199>:1090' */
            /* Transition: '<S199>:1092' */
            /* Transition: '<S199>:1093' */
            /* Transition: '<S199>:1096' */
            /* Transition: '<S199>:1120' */
            /* Transition: '<S199>:1097' */
            /* Transition: '<S199>:561' */
            /* Transition: '<S199>:506' */
            /* Exit 'HV_ENBLD': '<S199>:296' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_HV_ENABLED;
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

            /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOcc_g();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S7>/Switch4' */
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_a_enter_atomic_OPERATIONAL(void)
{
    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    /* Entry 'OPERATIONAL': '<S199>:302' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL;

    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
    VeHPMR_t_StateTimer = 0.0F;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
    VeHPMR_b_ShutdownInProcess = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
    HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
    VeHPMC_b_PropulsionSystemActive = true;
    HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Hybrid;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_exit_atomic_OPERATIONAL(void)
{
    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
    /* Exit 'OPERATIONAL': '<S199>:302' */
    VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
    HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;

    /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
    VeHPMR_t_StateTimer = 0.0F;
    VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL;
}

#endif

/* Function for Chart: '<S10>/HybSysSt_Machine' */
#if !Rte_SysCon_Variant_HPMR_3

static void HPMR_ac_OPERATIONAL_a(const boolean *VeHPMR_b_ImmoStat_AuthVld_f,
    const boolean *OR1_f)
{
    boolean guard1 = false;
    boolean tmp;
    boolean tmp_0;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
    HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL;

    /* During 'OPERATIONAL': '<S199>:302' */
    tmp = !VeHPMI_b_EnblPrplsnSys;
    tmp_0 = !VeHPMI_b_EnblMtrSys;
    if ((VeHPMR_b_CollisionDetection) || (((!VeHPMI_b_EnblHVSys) && tmp_0) &&
            tmp))
    {
        /* Transition: '<S199>:381' */
        HPMR_ac_exit_atomic_OPERATIONAL();
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_EVAL_PRPLSN_DISBL_k;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'EVAL_PRPLSN_DISBL': '<S199>:303' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_PRPLSN_DISBL;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
        VeHPMC_b_InitPwrUp = false;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
        VeHPMR_b_ImmShtdwnCondMet = false;
    }
    else
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
         *  VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc'
         *  VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer'
         */
        guard1 = false;
        if (((((((((VeHPMI_b_EnblHVSys) && (VeHPMI_b_EnblMtrSys)) && tmp) ||
                 (((VeHPMI_b_EnblHVSys) && tmp_0) && tmp)) || ((((uint32)
                   VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) &&
                 (VeHPMI_b_EnblPrplsnSys))) || (!(*VeHPMR_b_ImmoStat_AuthVld_f)))
              && (!VeHPMC_b_CntctrsOpenAfterClose)) &&
                (!VeHPMR_b_UnintendedShtdwn)) && (!VeHPMR_b_CollisionDetection))
        {
            /* Transition: '<S199>:581' */
            HPMR_ac_DW.VeHPMC_b_ForcePSADrop = true;
            guard1 = true;
        }
        else if ((((VeHPMC_b_CntctrsOpenAfterClose) ||
                   (VeHPMR_b_UnintendedFltShtdwn)) || (VeHPMR_b_UnintendedShtdwn))
                 || (((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled))
        {
            /* Transition: '<S199>:1098' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            guard1 = true;
        }
        else if ((VeHPMI_b_HV_AuxLoadOffReq) && (KeHPMR_b_VehWSwitchBattPack))
        {
            /* Transition: '<S199>:1099' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
            VeHPMR_b_BattSwtchInProg = true;
            guard1 = true;
        }
        else
        {
            VeHPMR_t_StateTimer = VeHPMR_t_StateTimer + HPMR_ac_B.LeHPMR_t_dT;
        }

        if (guard1)
        {
            HPMR_ac_exit_atomic_OPERATIONAL();
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

            /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOcc_g();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(OR1_f);
            VeHPMR_t_StateTimer = 0.0F;
        }

        /* End of Switch: '<S7>/Switch1' */
    }
}

#endif

/* Model step function for TID1 */
FUNC(void, HPMR_CODE) HPMR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 rtb_Abs;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_3;
    float32 tmpRead_8;
    float32 tmpRead_a;
    TeBPCR_e_HVBatIntrlk_InternalStat tmpRead_1z;
    TeCITR_e_FOTA_Install_Status tmpRead_1v;
    TeESSR_e_EngStartStopSt tmpRead_n;
    TeESSR_e_HybEngSysActv tmpRead_c;
    TeFCPR_e_ActualMode tmpRead_25;
    TeFCRR_e_FcFltReq tmpRead_24;
    TeGENR_e_APM_OperMode tmpRead_w;
    TeHVTR_e_HV_BatCntctrStat tmpRead_1;
    TeHVTR_e_HV_IntrlkStat tmpRead_6;
    TeIMOR_e_HCPImmoStatCanC tmpRead_11;
    TeINVR_e_Dschrge_Stat tmpRead_21;
    TeINVR_e_Dschrge_Stat tmpRead_22;
    TeINVR_e_Dschrge_Stat tmpRead_23;
    TeINVR_e_MtrInvrtrSt tmpRead_1s;
    TeINVR_e_MtrInvrtrSt tmpRead_4;
    TeINVR_e_MtrInvrtrSt tmpRead_5;
    TeINVR_e_SPTState tmpRead_1r;
    TeINVR_e_SPTState tmpRead_o;
    TeINVR_e_SPTState tmpRead_p;
    TeINVR_e_SPTState tmpRead_q;
    TeOBCR_e_ChargingSystemSts tmpRead_20;
    TePMDR_e_KeyStatus tmpRead_1f;
    TePMDR_e_OperationalMode tmpRead_1o;
    TePMDR_e_PowerMode tmpRead_r;
    TeSCPR_e_InitStatus tmpRead_1m;
    TeTRGR_e_TransRangeState tmpRead_9;
    sint8 rtAction;
    sint8 rtPrevAction;
    boolean rtb_AND22_k;
    boolean rtb_Comparison2_jy;
    boolean tmpRead_10;
    boolean tmpRead_12;
    boolean tmpRead_13;
    boolean tmpRead_14;
    boolean tmpRead_15;
    boolean tmpRead_16;
    boolean tmpRead_17;
    boolean tmpRead_18;
    boolean tmpRead_19;
    boolean tmpRead_1a;
    boolean tmpRead_1b;
    boolean tmpRead_1c;
    boolean tmpRead_1d;
    boolean tmpRead_1e;
    boolean tmpRead_1g;
    boolean tmpRead_1h;
    boolean tmpRead_1i;
    boolean tmpRead_1j;
    boolean tmpRead_1k;
    boolean tmpRead_1l;
    boolean tmpRead_1n;
    boolean tmpRead_1p;
    boolean tmpRead_1q;
    boolean tmpRead_1t;
    boolean tmpRead_1u;
    boolean tmpRead_1w;
    boolean tmpRead_1x;
    boolean tmpRead_1y;
    boolean tmpRead_2;
    boolean tmpRead_7;
    boolean tmpRead_b;
    boolean tmpRead_d;
    boolean tmpRead_e;
    boolean tmpRead_f;
    boolean tmpRead_g;
    boolean tmpRead_h;
    boolean tmpRead_i;
    boolean tmpRead_j;
    boolean tmpRead_k;
    boolean tmpRead_l;
    boolean tmpRead_m;
    boolean tmpRead_s;
    boolean tmpRead_t;
    boolean tmpRead_u;
    boolean tmpRead_v;
    boolean tmpRead_x;
    boolean tmpRead_y;
    boolean tmpRead_z;

#if !Rte_SysCon_Variant_HPMR_3

    boolean rtb_Logical;

#endif

    float32 rtb_Switch1_a;
    float32 rtb_Switch1_ap;
    float32 rtb_Switch1_bzy;
    float32 rtb_Switch1_d3;
    float32 rtb_Switch1_huz;
    float32 rtb_Switch1_ne;
    float32 rtb_Switch1_pc;
    uint16 rtb_Switch1_mp;
    boolean rtb_AND_j3;
    boolean rtb_AND_m4u;
    boolean rtb_OR17;
    boolean rtb_OR20;
    boolean rtb_OR35_m;
    boolean rtb_OR8_o;
    boolean rtb_UnitDelay_av;
    boolean rtb_UnitDelay_ik;
    boolean rtb_VeHPMC_b_MtrAActv;

#if Rte_SysCon_Variant_HPMR_12VBSG && Rte_SysCon_Variant_HPMR_3

    float32 rtb_Switch1_fj;

#endif

    sint32 tmp;
    TeHPMR_e_BattCntctrCmd rtb_Switch1_bb;
    TeHPMR_e_HybSysState VeHPMI_b_HighVoltageRapidShtd_0;
    TeHPMR_e_InvrtrSwitchCmd rtb_VeHPMR_e_InvrtrASwitchCmd_A;
    boolean VeHPMI_b_HighVoltageRapidShtdwn;
    boolean VeHPMI_b_MCPA_CoreFail;
    boolean rtb_AND_et;

#if Rte_SysCon_Variant_HPMR_3

    TeHPMR_e_InvrtrSwitchCmd VeHPMI_b_HighVoltageRapidShtd_1;

#endif

#if Rte_SysCon_Variant_HPMR_3

    TeHPMR_e_PropSysMode tmp_0;

#endif

    boolean guard1 = false;

#if Rte_SysCon_Variant_HPMR_3

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_HPMR_3

    boolean guard3 = false;

#endif

    /* Inport: '<Root>/VeFCPR_b_FCPS_RunReqToEVCU' */
    (void)Rte_Read_VeFCPR_b_FCPS_RunReqToEVCU_Value(&rtb_Comparison2_jy);

    /* Inport: '<Root>/VeFCPR_e_ActualMode' */
    (void)Rte_Read_VeFCPR_e_ActualMode_Value(&tmpRead_25);

    /* Inport: '<Root>/VeFCRR_e_FcShutDownReq' */
    (void)Rte_Read_VeFCRR_e_FcShutDownReq_Value(&tmpRead_24);

    /* Inport: '<Root>/VeOBCR_b_RdyForShtDwn' */
    (void)Rte_Read_VeOBCR_b_RdyForShtDwn_Value(&rtb_AND22_k);

    /* Inport: '<Root>/VeINVR_e_MtrC_Dschrge_Stat' */
    (void)Rte_Read_VeINVR_e_MtrC_Dschrge_Stat_Value(&tmpRead_23);

    /* Inport: '<Root>/VeINVR_e_MtrB_Dschrge_Stat' */
    (void)Rte_Read_VeINVR_e_MtrB_Dschrge_Stat_Value(&tmpRead_22);

    /* Inport: '<Root>/VeINVR_e_MtrA_Dschrge_Stat' */
    (void)Rte_Read_VeINVR_e_MtrA_Dschrge_Stat_Value(&tmpRead_21);

    /* Inport: '<Root>/VeGENR_b_CAN_CWakeUp' */
    (void)Rte_Read_VeGENR_b_CAN_CWakeUp_Value(&rtb_AND_j3);

    /* Inport: '<Root>/VeTRGR_b_TransmissionFailSts' */
    (void)Rte_Read_VeTRGR_b_TransmissionFailSts_Value(&rtb_UnitDelay_av);

    /* Inport: '<Root>/VePLTR_b_Scndry_TransShiftPstnFA' */
    (void)Rte_Read_VePLTR_b_Scndry_TransShiftPstnFA_Value(&rtb_VeHPMC_b_MtrAActv);

    /* Inport: '<Root>/VePLTR_b_Prmry_TransShiftPstnFA' */
    (void)Rte_Read_VePLTR_b_Prmry_TransShiftPstnFA_Value(&rtb_UnitDelay_ik);

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_20);

    /* Inport: '<Root>/VeBPCR_b_HV_AuxLoadOffReq' */
    (void)Rte_Read_VeBPCR_b_HV_AuxLoadOffReq_Value(&rtb_AND_m4u);

    /* Inport: '<Root>/VeBPCR_b_ThrmlRnawyFlg' */
    (void)Rte_Read_VeBPCR_b_ThrmlRnawyFlg_Value(&rtb_OR35_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HPMR_MedTEB'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&HPMR_ac_DW.StatusByte_CommBusOff);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeSSDR_b_DrvAllwd_FCEnbl' */
    (void)Rte_Read_VeSSDR_b_DrvAllwd_FCEnbl_Value(&rtb_OR17);

    /* Inport: '<Root>/VeFCPR_b_FuelLidReq' */
    (void)Rte_Read_VeFCPR_b_FuelLidReq_Value(&rtb_OR20);

    /* Inport: '<Root>/VeIMPR_b_LossCommORC' */
    (void)Rte_Read_VeIMPR_b_LossCommORC_Value(&rtb_OR8_o);

    /* Inport: '<Root>/VeHVTR_b_OpnReq_SrvcProc1320_Out' */
    (void)Rte_Read_VeHVTR_b_OpnReq_SrvcProc1320_Out_Value(&rtb_AND_et);

    /* Inport: '<Root>/VeHVTR_e_HV_IntrnlIntrlkStat' */
    (void)Rte_Read_VeHVTR_e_HV_IntrnlIntrlkStat_Value(&tmpRead_1z);

    /* Inport: '<Root>/VeGENR_b_HVDspt_Enbl' */
    (void)Rte_Read_VeGENR_b_HVDspt_Enbl_Value(&tmpRead_1y);

    /* Inport: '<Root>/VePLTR_b_Worksite_Inverter_Active' */
    (void)Rte_Read_VePLTR_b_Worksite_Inverter_Active_Value(&tmpRead_1x);

    /* Inport: '<Root>/VeINVR_b_DrvReadyCmplSts' */
    (void)Rte_Read_VeINVR_b_DrvReadyCmplSts_Value(&tmpRead_1w);

    /* Inport: '<Root>/VeCITR_e_FOTA_Install_Status' */
    (void)Rte_Read_VeCITR_e_FOTA_Install_Status_Value(&tmpRead_1v);

    /* Inport: '<Root>/VeSSDR_b_FOTAOvrrdEnblHVSys' */
    (void)Rte_Read_VeSSDR_b_FOTAOvrrdEnblHVSys_Value(&tmpRead_1u);

    /* Inport: '<Root>/VeSRAR_b_DsblInvC' */
    (void)Rte_Read_VeSRAR_b_DsblInvC_Value(&tmpRead_1t);

    /* Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrC_InvrtrSt_Value(&tmpRead_1s);

    /* Inport: '<Root>/VeINVR_e_MCPC_SPT_State' */
    (void)Rte_Read_VeINVR_e_MCPC_SPT_State_Value(&tmpRead_1r);

    /* Inport: '<Root>/VeINVR_b_MtrCFlt_HV_CntctrOpnRq' */
    (void)Rte_Read_VeINVR_b_MtrCFlt_HV_CntctrOpnRq_Value(&tmpRead_1q);

    /* Inport: '<Root>/VeMTIR_M_MtrC_MinTorqRaw' */
    (void)Rte_Read_VeMTIR_M_MtrC_MinTorqRaw_Value(&rtb_Switch1_ne);

    /* Inport: '<Root>/VeMTIR_M_MtrC_MaxTorqRaw' */
    (void)Rte_Read_VeMTIR_M_MtrC_MaxTorqRaw_Value(&rtb_Switch1_a);

    /* Inport: '<Root>/VeGENR_b_ClsCntcrCmd_LVCheck' */
    (void)Rte_Read_VeGENR_b_ClsCntcrCmd_LVCheck_Value(&tmpRead_1p);

    /* Inport: '<Root>/VePMDR_e_OperationalModeSts' */
    (void)Rte_Read_VePMDR_e_OperationalModeSts_Value(&tmpRead_1o);

    /* Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd' */
    (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value(&tmpRead_1n);

    /* Inport: '<Root>/VeSCPR_e_InitStatus' */
    (void)Rte_Read_VeSCPR_e_InitStatus_Value(&tmpRead_1m);

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&tmpRead_1l);

    /* Inport: '<Root>/VeINVR_b_P1f_Dgrd_AltMd' */
    (void)Rte_Read_VeINVR_b_P1f_Dgrd_AltMd_Value(&tmpRead_1k);

    /* Inport: '<Root>/VeGENR_b_P1fVoltCtrlEnbl' */
    (void)Rte_Read_VeGENR_b_P1fVoltCtrlEnbl_Value(&tmpRead_1j);

    /* Inport: '<Root>/VeTHMR_b_SC_WkUpFlg' */
    (void)Rte_Read_VeTHMR_b_SC_WkUpFlg_Value(&tmpRead_1i);

    /* Inport: '<Root>/VePMDR_b_AccRunActiveAnalog' */
    (void)Rte_Read_VePMDR_b_AccRunActiveAnalog_Value(&tmpRead_1h);

    /* Inport: '<Root>/VeTRGR_b_Secured_To_Shtdwn' */
    (void)Rte_Read_VeTRGR_b_Secured_To_Shtdwn_Value(&tmpRead_1g);

    /* Inport: '<Root>/VePMDR_e_KeyStatus' */
    (void)Rte_Read_VePMDR_e_KeyStatus_Value(&tmpRead_1f);

    /* Inport: '<Root>/VeGENR_b_APMFailure' */
    (void)Rte_Read_VeGENR_b_APMFailure_Value(&tmpRead_1e);

    /* Inport: '<Root>/VeSSDR_b_DsblPrplsnSysArb_Out' */
    (void)Rte_Read_VeSSDR_b_DsblPrplsnSysArb_Out_Value(&tmpRead_1d);

    /* Inport: '<Root>/VeSSDR_b_HVBatRdyTimeOut' */
    (void)Rte_Read_VeSSDR_b_HVBatRdyTimeOut_Value(&tmpRead_1c);

    /* Inport: '<Root>/VeHSWR_b_HoodOpen' */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value(&tmpRead_1b);

    /* Inport: '<Root>/VeINVR_b_MtrBFlt_HV_CntctrOpnRq' */
    (void)Rte_Read_VeINVR_b_MtrBFlt_HV_CntctrOpnRq_Value(&tmpRead_1a);

    /* Inport: '<Root>/VeINVR_b_MtrAFlt_HV_CntctrOpnRq' */
    (void)Rte_Read_VeINVR_b_MtrAFlt_HV_CntctrOpnRq_Value(&tmpRead_19);

    /* Inport: '<Root>/VeMTIR_M_MtrB_MinTorqRaw' */
    (void)Rte_Read_VeMTIR_M_MtrB_MinTorqRaw_Value(&rtb_Switch1_d3);

    /* Inport: '<Root>/VeMTIR_M_MtrB_MaxTorqRaw' */
    (void)Rte_Read_VeMTIR_M_MtrB_MaxTorqRaw_Value(&rtb_Abs);

    /* Inport: '<Root>/VeMTIR_M_MtrA_MinTorqRaw' */
    (void)Rte_Read_VeMTIR_M_MtrA_MinTorqRaw_Value(&rtb_Switch1_bzy);

    /* Inport: '<Root>/VeMTIR_M_MtrA_MaxTorqRaw' */
    (void)Rte_Read_VeMTIR_M_MtrA_MaxTorqRaw_Value(&rtb_Switch1_ap);

    /* Inport: '<Root>/VeOBCR_b_RelockTimerActive' */
    (void)Rte_Read_VeOBCR_b_RelockTimerActive_Value(&tmpRead_18);

    /* Inport: '<Root>/VeHSWR_b_ECMHoodOpen' */
    (void)Rte_Read_VeHSWR_b_ECMHoodOpen_Value(&tmpRead_17);

    /* Inport: '<Root>/VeBPCR_b_HVBatCntrWeld_ImpdOpn' */
    (void)Rte_Read_VeBPCR_b_HVBatCntrWeld_ImpdOpn_Value(&tmpRead_16);

    /* Inport: '<Root>/VeTHMR_b_RdyForShtDwn' */
    (void)Rte_Read_VeTHMR_b_RdyForShtDwn_Value(&tmpRead_15);

    /* Inport: '<Root>/VeTHMR_b_HCP_LTP_FanAftRun_Rq' */
    (void)Rte_Read_VeTHMR_b_HCP_LTP_FanAftRun_Rq_Value(&tmpRead_14);

    /* Inport: '<Root>/VeBSWR_b_LossCommwORC' */
    (void)Rte_Read_VeBSWR_b_LossCommwORC_Value(&tmpRead_13);

    /* Inport: '<Root>/VeBSWR_b_AHCP_CoreFail' */
    (void)Rte_Read_VeBSWR_b_AHCP_CoreFail_Value(&tmpRead_12);

    /* Inport: '<Root>/VeIMOR_e_HCPImmoStatCanC' */
    (void)Rte_Read_VeIMOR_e_HCPImmoStatCanC_Value(&tmpRead_11);

    /* Inport: '<Root>/VeSRAR_b_DsblInvB' */
    (void)Rte_Read_VeSRAR_b_DsblInvB_Value(&tmpRead_10);

    /* Inport: '<Root>/VeSRAR_b_DsblInvA' */
    (void)Rte_Read_VeSRAR_b_DsblInvA_Value(&tmpRead_z);

    /* Inport: '<Root>/VeSRAR_b_OpnBattCntctr' */
    (void)Rte_Read_VeSRAR_b_OpnBattCntctr_Value(&tmpRead_y);

    /* Inport: '<Root>/VeGENR_b_APM_BoostComplete' */
    (void)Rte_Read_VeGENR_b_APM_BoostComplete_Value(&tmpRead_x);

    /* Inport: '<Root>/VeIDCR_e_stModeRqAPM' */
    (void)Rte_Read_VeIDCR_e_stModeRqAPM_Value(&tmpRead_w);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenPending' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenPending_Value(&tmpRead_v);

    /* Inport: '<Root>/VeBSWR_b_MCPB_CoreFail' */
    (void)Rte_Read_VeBSWR_b_MCPB_CoreFail_Value(&tmpRead_u);

    /* Inport: '<Root>/VeBSWR_b_MCPA_CoreFail' */
    (void)Rte_Read_VeBSWR_b_MCPA_CoreFail_Value(&VeHPMI_b_MCPA_CoreFail);

    /* Inport: '<Root>/VePWDR_b_DAPFA_OpenCntctr' */
    (void)Rte_Read_VePWDR_b_DAPFA_OpenCntctr_Value(&tmpRead_t);

    /* Inport: '<Root>/VeOBCR_b_EnableCANC' */
    (void)Rte_Read_VeOBCR_b_EnableCANC_Value(&tmpRead_s);

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_r);

    /* Inport: '<Root>/VeINVR_e_MCPB_SPT_State' */
    (void)Rte_Read_VeINVR_e_MCPB_SPT_State_Value(&tmpRead_q);

    /* Inport: '<Root>/VeINVR_e_MCPA_SPT_State' */
    (void)Rte_Read_VeINVR_e_MCPA_SPT_State_Value(&tmpRead_p);

    /* Inport: '<Root>/VeBSWR_e_SPT_State' */
    (void)Rte_Read_VeBSWR_e_SPT_State_Value(&tmpRead_o);

    /* Inport: '<Root>/VeIMPR_b_HighVoltageRapidShtdwnCmnd' */
    (void)Rte_Read_VeIMPR_b_HighVoltageRapidShtdwnCmnd_Value
        (&VeHPMI_b_HighVoltageRapidShtdwn);

    /* Inport: '<Root>/VeABCR_P_HV_AccPwr' */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value(&rtb_Switch1_huz);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_n);

    /* Inport: '<Root>/VeESMR_P_BattLTMaxLim' */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&rtb_Switch1_pc);

    /* Inport: '<Root>/VeGENR_b_RdyForShtDwnAPMCleared' */
    (void)Rte_Read_VeGENR_b_RdyForShtDwnAPMCleared_Value(&tmpRead_m);

    /* Inport: '<Root>/VeHVTR_b_HVBatSrvcDisCnctFA' */
    (void)Rte_Read_VeHVTR_b_HVBatSrvcDisCnctFA_Value(&tmpRead_l);

    /* Inport: '<Root>/VeSSDR_b_EnblPrplsnSys' */
    (void)Rte_Read_VeSSDR_b_EnblPrplsnSys_Value(&tmpRead_k);

    /* Inport: '<Root>/VeSSDR_b_EnblMtrSys' */
    (void)Rte_Read_VeSSDR_b_EnblMtrSys_Value(&tmpRead_j);

    /* Inport: '<Root>/VeSSDR_b_EnblHVSys' */
    (void)Rte_Read_VeSSDR_b_EnblHVSys_Value(&tmpRead_i);

    /* Inport: '<Root>/VePMDR_b_RunCrankActive' */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value(&tmpRead_h);

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&tmpRead_g);

    /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead_f);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnBPClsdCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnBPClsdCmnd_Value(&tmpRead_e);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrStatFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrStatFA_Value(&tmpRead_d);

    /* Inport: '<Root>/VeESSR_e_HybEngSysActv' */
    (void)Rte_Read_VeESSR_e_HybEngSysActv_Value(&tmpRead_c);

    /* Inport: '<Root>/VeIMOR_b_AuthenticationValid' */
    (void)Rte_Read_VeIMOR_b_AuthenticationValid_Value(&tmpRead_b);

    /* Inport: '<Root>/VeHVTR_U_HV_Volt' */
    (void)Rte_Read_VeHVTR_U_HV_Volt_Value(&tmpRead_a);

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHVTR_I_HV_BatCurrArb' */
    (void)Rte_Read_VeHVTR_I_HV_BatCurrArb_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenReq_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHVTR_e_HV_IntrlkStat' */
    (void)Rte_Read_VeHVTR_e_HV_IntrlkStat_Value(&tmpRead_6);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCSVR_v_VehSpdSigned' */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&tmpRead_3);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnCmnd_Value(&tmpRead_2);

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value(&tmpRead_1);

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_0);

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HPMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HPMI_Override'
     */
    /* Switch: '<S7>/Switch11' incorporates:
     *  Constant: '<S1525>/Calib'
     */
    if (KeHPMR_b_OvrdMtrA_Spd)
    {
        /* Switch: '<S7>/Switch11' incorporates:
         *  Constant: '<S1619>/Calib'
         */
        VeHPMI_n_MtrA_Spd = KeHPMR_n_MtrA_Spd;
    }
    else
    {
        /* Switch: '<S7>/Switch11' */
        VeHPMI_n_MtrA_Spd = tmpRead;
    }

    /* End of Switch: '<S7>/Switch11' */

    /* Switch: '<S7>/Switch12' incorporates:
     *  Constant: '<S1531>/Calib'
     */
    if (KeHPMR_b_OvrdMtrB_Spd)
    {
        /* Switch: '<S7>/Switch12' incorporates:
         *  Constant: '<S1620>/Calib'
         */
        VeHPMI_n_MtrB_Spd = KeHPMR_n_MtrB_Spd;
    }
    else
    {
        /* Switch: '<S7>/Switch12' */
        VeHPMI_n_MtrB_Spd = tmpRead_0;
    }

    /* End of Switch: '<S7>/Switch12' */

    /* Switch: '<S7>/Switch13' incorporates:
     *  Constant: '<S1506>/Calib'
     */
    if (KeHPMR_b_OvrdHV_BatCntctrStat)
    {
        /* Switch: '<S7>/Switch13' incorporates:
         *  Constant: '<S1599>/Calib'
         */
        VeHPMI_e_HV_BatCntctrStat = KeHPMR_e_HV_BatCntctrStat;
    }
    else
    {
        /* Switch: '<S7>/Switch13' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        VeHPMI_e_HV_BatCntctrStat = tmpRead_1;
    }

    /* End of Switch: '<S7>/Switch13' */

    /* Switch: '<S7>/Switch14' incorporates:
     *  Constant: '<S1499>/Calib'
     */
    if (KeHPMR_b_OvrdFltShtDwnCmnd)
    {
        /* Switch: '<S7>/Switch14' incorporates:
         *  Constant: '<S1453>/Calib'
         */
        VeHPMI_b_FltShtDwnCmnd = KeHPMR_b_FltShtDwnCmnd;
    }
    else
    {
        /* Switch: '<S7>/Switch14' */
        VeHPMI_b_FltShtDwnCmnd = tmpRead_2;
    }

    /* End of Switch: '<S7>/Switch14' */

    /* Switch: '<S7>/Switch15' incorporates:
     *  Constant: '<S1558>/Calib'
     */
    if (KeHPMR_b_OvrdVehicleSigned)
    {
        /* Switch: '<S7>/Switch15' incorporates:
         *  Constant: '<S1621>/Calib'
         */
        VeHPMI_v_VehicleSigned = KeHPMR_v_VehicleSigned;
    }
    else
    {
        /* Switch: '<S7>/Switch15' */
        VeHPMI_v_VehicleSigned = tmpRead_3;
    }

    /* End of Switch: '<S7>/Switch15' */

    /* Switch: '<S7>/Switch20' incorporates:
     *  Constant: '<S1522>/Calib'
     */
    if (KeHPMR_b_OvrdMtrA_InvrtrSt)
    {
        /* Switch: '<S7>/Switch20' incorporates:
         *  Constant: '<S1605>/Calib'
         */
        VeHPMI_e_MtrA_InvrtrSt = KeHPMR_e_MtrA_InvrtrSt;
    }
    else
    {
        /* Switch: '<S7>/Switch20' incorporates:
         *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
         */
        VeHPMI_e_MtrA_InvrtrSt = tmpRead_4;
    }

    /* End of Switch: '<S7>/Switch20' */

    /* Switch: '<S7>/Switch21' incorporates:
     *  Constant: '<S1528>/Calib'
     */
    if (KeHPMR_b_OvrdMtrB_InvrtrSt)
    {
        /* Switch: '<S7>/Switch21' incorporates:
         *  Constant: '<S1607>/Calib'
         */
        VeHPMI_e_MtrB_InvrtrSt = KeHPMR_e_MtrB_InvrtrSt;
    }
    else
    {
        /* Switch: '<S7>/Switch21' incorporates:
         *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
         */
        VeHPMI_e_MtrB_InvrtrSt = tmpRead_5;
    }

    /* End of Switch: '<S7>/Switch21' */

    /* Switch: '<S7>/Switch22' incorporates:
     *  Constant: '<S1509>/Calib'
     */
    if (KeHPMR_b_OvrdHV_IntrlkStat)
    {
        /* Switch: '<S7>/Switch22' incorporates:
         *  Constant: '<S1600>/Calib'
         */
        VeHPMI_e_HV_IntrlkStat = KeHPMR_e_HV_IntrlkStat;
    }
    else
    {
        /* Switch: '<S7>/Switch22' incorporates:
         *  Inport: '<Root>/VeHVTR_e_HV_IntrlkStat'
         */
        VeHPMI_e_HV_IntrlkStat = tmpRead_6;
    }

    /* End of Switch: '<S7>/Switch22' */

    /* Switch: '<S7>/Switch10' incorporates:
     *  Constant: '<S1481>/Calib'
     */
    if (KeHPMR_b_OvrdBPOpnReq)
    {
        /* Switch: '<S7>/Switch10' incorporates:
         *  Constant: '<S1437>/Calib'
         */
        VeHPMI_b_HV_BatCntctrOpenReq = KeHPMR_b_BPOpnCntctrReq;
    }
    else
    {
        /* Switch: '<S7>/Switch10' */
        VeHPMI_b_HV_BatCntctrOpenReq = tmpRead_7;
    }

    /* End of Switch: '<S7>/Switch10' */

    /* Switch: '<S7>/Switch23' incorporates:
     *  Constant: '<S1508>/Calib'
     */
    if (KeHPMR_b_OvrdHV_BatCurrArb)
    {
        /* Switch: '<S7>/Switch23' incorporates:
         *  Constant: '<S1420>/Calib'
         */
        VeHPMI_I_HV_BatCurrArb = KeHPMR_I_HV_BatCurrArb;
    }
    else
    {
        /* Switch: '<S7>/Switch23' */
        VeHPMI_I_HV_BatCurrArb = tmpRead_8;
    }

    /* End of Switch: '<S7>/Switch23' */

    /* Switch: '<S7>/Switch24' incorporates:
     *  Constant: '<S1559>/Calib'
     */
    if (KeHPMR_b_OvrdVldtdTransRngSt)
    {
        /* Switch: '<S7>/Switch24' incorporates:
         *  Constant: '<S1618>/Calib'
         */
        VeHPMI_e_VldtdTransRngSt = KeHPMR_e_VldtdTransRngSt;
    }
    else
    {
        /* Switch: '<S7>/Switch24' incorporates:
         *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
         */
        VeHPMI_e_VldtdTransRngSt = tmpRead_9;
    }

    /* End of Switch: '<S7>/Switch24' */

    /* Switch: '<S7>/Switch25' incorporates:
     *  Constant: '<S1511>/Calib'
     */
    if (KeHPMR_b_OvrdHV_Volt)
    {
        /* Switch: '<S7>/Switch25' incorporates:
         *  Constant: '<S1429>/Calib'
         */
        VeHPMI_U_HV_Volt = KeHPMR_U_HV_Volt;
    }
    else
    {
        /* Switch: '<S7>/Switch25' */
        VeHPMI_U_HV_Volt = tmpRead_a;
    }

    /* End of Switch: '<S7>/Switch25' */

    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S1479>/Calib'
     */
    if (KeHPMR_b_OvrdAuthenticationValid)
    {
        /* Switch: '<S7>/Switch2' incorporates:
         *  Constant: '<S1435>/Calib'
         */
        VeHPMI_b_AuthenticationValid = KeHPMR_b_AuthenticationValid;
    }
    else
    {
        /* Switch: '<S7>/Switch2' */
        VeHPMI_b_AuthenticationValid = tmpRead_b;
    }

    /* End of Switch: '<S7>/Switch2' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S1514>/Calib'
     */
    if (KeHPMR_b_OvrdHybEngSysActv)
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  Constant: '<S1602>/Calib'
         */
        VeHPMI_e_HybEngSysActv = KeHPMR_e_HybEngSysActv;
    }
    else
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  Inport: '<Root>/VeESSR_e_HybEngSysActv'
         */
        VeHPMI_e_HybEngSysActv = tmpRead_c;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Switch: '<S7>/Switch27' incorporates:
     *  Constant: '<S1507>/Calib'
     */
    if (KeHPMR_b_OvrdHV_BatCntctrStatFA)
    {
        /* Switch: '<S7>/Switch27' incorporates:
         *  Constant: '<S1460>/Calib'
         */
        VeHPMI_b_HV_BatCntctrStatFA = KeHPMR_b_HV_BatCntctrStatFA;
    }
    else
    {
        /* Switch: '<S7>/Switch27' */
        VeHPMI_b_HV_BatCntctrStatFA = tmpRead_d;
    }

    /* End of Switch: '<S7>/Switch27' */

    /* Switch: '<S7>/Switch29' incorporates:
     *  Constant: '<S1498>/Calib'
     */
    if (KeHPMR_b_OvrdFltShtDwnBPClsdCmnd)
    {
        /* Switch: '<S7>/Switch29' incorporates:
         *  Constant: '<S1452>/Calib'
         */
        VeHPMI_b_FltShtDwnBPClsdCmnd = KeHPMR_b_FltShtDwnBPClsdCmnd;
    }
    else
    {
        /* Switch: '<S7>/Switch29' */
        VeHPMI_b_FltShtDwnBPClsdCmnd = tmpRead_e;
    }

    /* End of Switch: '<S7>/Switch29' */

    /* Switch: '<S7>/Switch30' incorporates:
     *  Constant: '<S1526>/Calib'
     */
    if (KeHPMR_b_OvrdMtrA_SpdFA)
    {
        /* Switch: '<S7>/Switch30' incorporates:
         *  Constant: '<S1466>/Calib'
         */
        VeHPMI_b_MtrA_SpdFA = KeHPMR_b_MtrA_SpdFA;
    }
    else
    {
        /* Switch: '<S7>/Switch30' */
        VeHPMI_b_MtrA_SpdFA = tmpRead_f;
    }

    /* End of Switch: '<S7>/Switch30' */

    /* Switch: '<S7>/Switch31' incorporates:
     *  Constant: '<S1532>/Calib'
     */
    if (KeHPMR_b_OvrdMtrB_SpdFA)
    {
        /* Switch: '<S7>/Switch31' incorporates:
         *  Constant: '<S1468>/Calib'
         */
        VeHPMI_b_MtrB_SpdFA = KeHPMR_b_MtrB_SpdFA;
    }
    else
    {
        /* Switch: '<S7>/Switch31' */
        VeHPMI_b_MtrB_SpdFA = tmpRead_g;
    }

    /* End of Switch: '<S7>/Switch31' */

    /* Switch: '<S7>/Switch32' incorporates:
     *  Constant: '<S1549>/Calib'
     */
    if (KeHPMR_b_OvrdRunCrankActive)
    {
        /* Switch: '<S7>/Switch32' incorporates:
         *  Constant: '<S1583>/Calib'
         */
        VeHPMI_b_RunCrankActive = KeHPMR_b_RunCrankActive;
    }
    else
    {
        /* Switch: '<S7>/Switch32' */
        VeHPMI_b_RunCrankActive = tmpRead_h;
    }

    /* End of Switch: '<S7>/Switch32' */

    /* Switch: '<S7>/Switch33' incorporates:
     *  Constant: '<S1491>/Calib'
     */
    if (KeHPMR_b_OvrdEnblHVSys)
    {
        /* Switch: '<S7>/Switch33' incorporates:
         *  Constant: '<S1446>/Calib'
         */
        VeHPMI_b_EnblHVSys = KeHPMR_b_EnblHVSys;
    }
    else
    {
        /* Switch: '<S7>/Switch33' */
        VeHPMI_b_EnblHVSys = tmpRead_i;
    }

    /* End of Switch: '<S7>/Switch33' */

    /* Switch: '<S7>/Switch34' incorporates:
     *  Constant: '<S1492>/Calib'
     */
    if (KeHPMR_b_OvrdEnblMtrSys)
    {
        /* Switch: '<S7>/Switch34' incorporates:
         *  Constant: '<S1447>/Calib'
         */
        VeHPMI_b_EnblMtrSys = KeHPMR_b_EnblMtrSys;
    }
    else
    {
        /* Switch: '<S7>/Switch34' */
        VeHPMI_b_EnblMtrSys = tmpRead_j;
    }

    /* End of Switch: '<S7>/Switch34' */

    /* Switch: '<S7>/Switch35' incorporates:
     *  Constant: '<S1493>/Calib'
     */
    if (KeHPMR_b_OvrdEnblPrplsnSys)
    {
        /* Switch: '<S7>/Switch35' incorporates:
         *  Constant: '<S1448>/Calib'
         */
        VeHPMI_b_EnblPrplsnSys = KeHPMR_b_EnblPrplsnSys;
    }
    else
    {
        /* Switch: '<S7>/Switch35' */
        VeHPMI_b_EnblPrplsnSys = tmpRead_k;
    }

    /* End of Switch: '<S7>/Switch35' */

    /* Switch: '<S7>/Switch36' incorporates:
     *  Constant: '<S1504>/Calib'
     */
    if (KeHPMR_b_OvrdHVBatSrvcDisCnctFA)
    {
        /* Switch: '<S7>/Switch36' incorporates:
         *  Constant: '<S1458>/Calib'
         */
        VeHPMI_b_HVBatSrvcDisCnctFA = KeHPMR_b_HVBatSrvcDisCnctFA;
    }
    else
    {
        /* Switch: '<S7>/Switch36' */
        VeHPMI_b_HVBatSrvcDisCnctFA = tmpRead_l;
    }

    /* End of Switch: '<S7>/Switch36' */

    /* Switch: '<S7>/Switch37' incorporates:
     *  Constant: '<S1547>/Calib'
     */
    if (KeHPMR_b_OvrdRdyForShtDwnAPMCleared)
    {
        /* Switch: '<S7>/Switch37' incorporates:
         *  Constant: '<S1580>/Calib'
         */
        VeHPMI_b_RdyForShtDwnAPMCleared = KeHPMR_b_RdyForShtDwnAPMCleared;
    }
    else
    {
        /* Switch: '<S7>/Switch37' */
        VeHPMI_b_RdyForShtDwnAPMCleared = tmpRead_m;
    }

    /* End of Switch: '<S7>/Switch37' */

    /* Switch: '<S7>/Switch38' incorporates:
     *  Constant: '<S1483>/Calib'
     */
    if (KeHPMR_b_OvrdBattLTMaxLim)
    {
        /* Switch: '<S7>/Switch38' incorporates:
         *  Constant: '<S1427>/Calib'
         */
        VeHPMI_P_BattLTMaxLim = KeHPMR_P_BattLTMaxLim;
    }
    else
    {
        /* Switch: '<S7>/Switch38' */
        VeHPMI_P_BattLTMaxLim = rtb_Switch1_pc;
    }

    /* End of Switch: '<S7>/Switch38' */

    /* Switch: '<S7>/Switch39' incorporates:
     *  Constant: '<S1494>/Calib'
     */
    if (KeHPMR_b_OvrdEngStartStopSt)
    {
        /* Switch: '<S7>/Switch39' incorporates:
         *  Constant: '<S1595>/Calib'
         */
        VeHPMI_e_EngStartStopSt = KeHPMR_e_EngStartStopSt;
    }
    else
    {
        /* Switch: '<S7>/Switch39' incorporates:
         *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
         */
        VeHPMI_e_EngStartStopSt = tmpRead_n;
    }

    /* End of Switch: '<S7>/Switch39' */

    /* Switch: '<S7>/Switch40' incorporates:
     *  Constant: '<S1505>/Calib'
     */
    if (KeHPMR_b_OvrdHV_AccPwr)
    {
        /* Switch: '<S7>/Switch40' incorporates:
         *  Constant: '<S1428>/Calib'
         */
        VeHPMI_P_HV_AccPwr = KeHPMR_P_HV_AccPwr;
    }
    else
    {
        /* Switch: '<S7>/Switch40' */
        VeHPMI_P_HV_AccPwr = rtb_Switch1_huz;
    }

    /* End of Switch: '<S7>/Switch40' */

    /* Switch: '<S7>/Switch41' incorporates:
     *  Constant: '<S1512>/Calib'
     */
    if (KeHPMR_b_OvrdHighVoltageRapidShtdwnCmnd)
    {
        /* Switch: '<S7>/Switch41' incorporates:
         *  Constant: '<S1461>/Calib'
         */
        VeHPMI_b_HighVoltageRapidShtdwn = KeHPMR_b_HighVoltageRapidShtdwnCmnd;
    }

    /* End of Switch: '<S7>/Switch41' */

    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S1482>/Calib'
     */
    if (KeHPMR_b_OvrdBSWSt_SPT)
    {
        /* Switch: '<S7>/Switch3' incorporates:
         *  Constant: '<S1611>/Calib'
         */
        VeHPMI_e_BSW_SPT_State = KeHPMR_e_OvrdValueBSWSt;
    }
    else
    {
        /* Switch: '<S7>/Switch3' incorporates:
         *  Inport: '<Root>/VeBSWR_e_SPT_State'
         */
        VeHPMI_e_BSW_SPT_State = tmpRead_o;
    }

    /* End of Switch: '<S7>/Switch3' */

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S1517>/Calib'
     */
    if (KeHPMR_b_OvrdMCPASt_SPT)
    {
        /* Switch: '<S7>/Switch4' incorporates:
         *  Constant: '<S1612>/Calib'
         */
        VeHPMI_e_MCPA_SPT_State = KeHPMR_e_OvrdValueMCPASt;
    }
    else
    {
        /* Switch: '<S7>/Switch4' incorporates:
         *  Inport: '<Root>/VeINVR_e_MCPA_SPT_State'
         */
        VeHPMI_e_MCPA_SPT_State = tmpRead_p;
    }

    /* End of Switch: '<S7>/Switch4' */

    /* Switch: '<S7>/Switch5' incorporates:
     *  Constant: '<S1519>/Calib'
     */
    if (KeHPMR_b_OvrdMCPBSt_SPT)
    {
        /* Switch: '<S7>/Switch5' incorporates:
         *  Constant: '<S1613>/Calib'
         */
        VeHPMI_e_MCPB_SPT_State = KeHPMR_e_OvrdValueMCPBSt;
    }
    else
    {
        /* Switch: '<S7>/Switch5' incorporates:
         *  Inport: '<Root>/VeINVR_e_MCPB_SPT_State'
         */
        VeHPMI_e_MCPB_SPT_State = tmpRead_q;
    }

    /* End of Switch: '<S7>/Switch5' */

    /* Switch: '<S7>/Switch42' incorporates:
     *  Constant: '<S1544>/Calib'
     */
    if (KeHPMR_b_OvrdPowerMode)
    {
        /* Switch: '<S7>/Switch42' incorporates:
         *  Constant: '<S1616>/Calib'
         */
        VeHPMI_e_PMM_PowerMode = KeHPMR_e_PMM_PowerMode;
    }
    else
    {
        /* Switch: '<S7>/Switch42' incorporates:
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeHPMI_e_PMM_PowerMode = tmpRead_r;
    }

    /* End of Switch: '<S7>/Switch42' */

    /* Switch: '<S7>/Switch43' incorporates:
     *  Constant: '<S1490>/Calib'
     */
    if (KeHPMR_b_OvrdEnableCANC)
    {
        /* Switch: '<S7>/Switch43' incorporates:
         *  Constant: '<S1445>/Calib'
         */
        VeHPMI_b_EnableCANC = KeHPMR_b_EnableCANC;
    }
    else
    {
        /* Switch: '<S7>/Switch43' */
        VeHPMI_b_EnableCANC = tmpRead_s;
    }

    /* End of Switch: '<S7>/Switch43' */

    /* Switch: '<S7>/Switch6' incorporates:
     *  Constant: '<S1484>/Calib'
     */
    if (KeHPMR_b_OvrdDAPFA)
    {
        /* Switch: '<S7>/Switch6' incorporates:
         *  Constant: '<S1556>/Calib'
         */
        VeHPMI_b_DAPFA_OpenCntctr = KeHPMR_b_OvrdValueDAPFA;
    }
    else
    {
        /* Switch: '<S7>/Switch6' */
        VeHPMI_b_DAPFA_OpenCntctr = tmpRead_t;
    }

    /* End of Switch: '<S7>/Switch6' */

    /* Switch: '<S7>/Switch9' incorporates:
     *  Constant: '<S1516>/Calib'
     */
    if (KeHPMR_b_OvrdMCPACoreFail)
    {
        /* Switch: '<S7>/Switch9' incorporates:
         *  Constant: '<S1463>/Calib'
         */
        VeHPMI_b_MCPA_CoreFail = KeHPMR_b_MCPACoreFail;
    }

    /* End of Switch: '<S7>/Switch9' */

    /* Switch: '<S7>/Switch8' incorporates:
     *  Constant: '<S1518>/Calib'
     */
    if (KeHPMR_b_OvrdMCPBCoreFail)
    {
        /* Switch: '<S7>/Switch8' incorporates:
         *  Constant: '<S1464>/Calib'
         */
        VeHPMI_b_MCPB_CoreFail = KeHPMR_b_MCPBCoreFail;
    }
    else
    {
        /* Switch: '<S7>/Switch8' */
        VeHPMI_b_MCPB_CoreFail = tmpRead_u;
    }

    /* End of Switch: '<S7>/Switch8' */

    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S1474>/Calib'
     */
    if (KeHPMR_b_OvrdAHCPCoreFail)
    {
        /* Switch: '<S7>/Switch7' incorporates:
         *  Constant: '<S1430>/Calib'
         */
        VeHPMI_b_AHCP_CoreFail = KeHPMR_b_AHCPCoreFail;
    }
    else
    {
        /* Switch: '<S7>/Switch7' */
        VeHPMI_b_AHCP_CoreFail = tmpRead_12;
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S1537>/Calib'
     */
    if (KeHPMR_b_OvrdORCLossComm)
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S1471>/Calib'
         */
        VeHPMI_b_LossCommwORC = KeHPMR_b_ORCLossComm;
    }
    else
    {
        /* Switch: '<S7>/Switch' */
        VeHPMI_b_LossCommwORC = tmpRead_13;
    }

    /* End of Switch: '<S7>/Switch' */

    /* Switch: '<S7>/Switch44' incorporates:
     *  Constant: '<S1480>/Calib'
     */
    if (KeHPMR_b_OvrdBPOpenPending)
    {
        /* Switch: '<S7>/Switch44' incorporates:
         *  Constant: '<S1436>/Calib'
         */
        VeHPMI_b_HV_BatCntctrOpenPending = KeHPMR_b_BPOpenPending;
    }
    else
    {
        /* Switch: '<S7>/Switch44' */
        VeHPMI_b_HV_BatCntctrOpenPending = tmpRead_v;
    }

    /* End of Switch: '<S7>/Switch44' */

    /* Switch: '<S7>/Switch46' incorporates:
     *  Constant: '<S1538>/Calib'
     */
    if (KeHPMR_b_OvrdOperModeStatus)
    {
        /* Switch: '<S7>/Switch46' incorporates:
         *  Constant: '<S1593>/Calib'
         */
        VeHPMI_e_APM_OperModeStatus = KeHPMR_e_APM_OperModeStatus;
    }
    else
    {
        /* Switch: '<S7>/Switch46' incorporates:
         *  Inport: '<Root>/VeIDCR_e_stModeRqAPM'
         */
        VeHPMI_e_APM_OperModeStatus = tmpRead_w;
    }

    /* End of Switch: '<S7>/Switch46' */

    /* Switch: '<S7>/Switch47' incorporates:
     *  Constant: '<S1475>/Calib'
     */
    if (KeHPMR_b_OvrdAPMBoostCmplt)
    {
        /* Switch: '<S7>/Switch47' incorporates:
         *  Constant: '<S1432>/Calib'
         */
        VeHPMI_b_APM_BoostComplete = KeHPMR_b_APM_BoostComplete;
    }
    else
    {
        /* Switch: '<S7>/Switch47' */
        VeHPMI_b_APM_BoostComplete = tmpRead_x;
    }

    /* End of Switch: '<S7>/Switch47' */

    /* Switch: '<S7>/Switch48' incorporates:
     *  Constant: '<S1540>/Calib'
     */
    if (KeHPMR_b_OvrdOpnBattCntctr)
    {
        /* Switch: '<S7>/Switch48' incorporates:
         *  Constant: '<S1472>/Calib'
         */
        VeHPMI_b_OpnBattCntctr = KeHPMR_b_OpnBattCntctr;
    }
    else
    {
        /* Switch: '<S7>/Switch48' */
        VeHPMI_b_OpnBattCntctr = tmpRead_y;
    }

    /* End of Switch: '<S7>/Switch48' */

    /* Switch: '<S7>/Switch49' incorporates:
     *  Constant: '<S1485>/Calib'
     */
    if (KeHPMR_b_OvrdDsblInvA)
    {
        /* Switch: '<S7>/Switch49' incorporates:
         *  Constant: '<S1440>/Calib'
         */
        VeHPMI_b_DsblInvA = KeHPMR_b_DsblInvA;
    }
    else
    {
        /* Switch: '<S7>/Switch49' */
        VeHPMI_b_DsblInvA = tmpRead_z;
    }

    /* End of Switch: '<S7>/Switch49' */

    /* Switch: '<S7>/Switch50' incorporates:
     *  Constant: '<S1486>/Calib'
     */
    if (KeHPMR_b_OvrdDsblInvB)
    {
        /* Switch: '<S7>/Switch50' incorporates:
         *  Constant: '<S1441>/Calib'
         */
        VeHPMI_b_DsblInvB = KeHPMR_b_DsblInvB;
    }
    else
    {
        /* Switch: '<S7>/Switch50' */
        VeHPMI_b_DsblInvB = tmpRead_10;
    }

    /* End of Switch: '<S7>/Switch50' */

    /* Switch: '<S7>/Switch51' incorporates:
     *  Constant: '<S1501>/Calib'
     */
    if (KeHPMR_b_OvrdHCPImmoStat)
    {
        /* Switch: '<S7>/Switch51' incorporates:
         *  Constant: '<S1598>/Calib'
         */
        VeHPMI_e_HCPImmoStatCanC = KeHPMR_e_HCPImmoStat;
    }
    else
    {
        /* Switch: '<S7>/Switch51' incorporates:
         *  Inport: '<Root>/VeIMOR_e_HCPImmoStatCanC'
         */
        VeHPMI_e_HCPImmoStatCanC = tmpRead_11;
    }

    /* End of Switch: '<S7>/Switch51' */

    /* Switch: '<S7>/Switch53' incorporates:
     *  Constant: '<S1478>/Calib'
     */
    if (KeHPMR_b_OvrdAfterRunReq)
    {
        /* Switch: '<S7>/Switch53' incorporates:
         *  Constant: '<S1434>/Calib'
         */
        VeHPMI_b_HCP_LTP_FanAftRun_Rq = KeHPMR_b_AfterRunReq;
    }
    else
    {
        /* Switch: '<S7>/Switch53' */
        VeHPMI_b_HCP_LTP_FanAftRun_Rq = tmpRead_14;
    }

    /* End of Switch: '<S7>/Switch53' */

    /* Switch: '<S7>/Switch54' incorporates:
     *  Constant: '<S1553>/Calib'
     */
    if (KeHPMR_b_OvrdThrmlRdy4ShtDn)
    {
        /* Switch: '<S7>/Switch54' incorporates:
         *  Constant: '<S1587>/Calib'
         */
        VeHPMI_b_RdyForShtDwn = KeHPMR_b_ThrmlRdy4ShtDn;
    }
    else
    {
        /* Switch: '<S7>/Switch54' */
        VeHPMI_b_RdyForShtDwn = tmpRead_15;
    }

    /* End of Switch: '<S7>/Switch54' */

    /* Switch: '<S7>/Switch55' incorporates:
     *  Constant: '<S1502>/Calib'
     */
    if (KeHPMR_b_OvrdHVBatCntrWeld_ImpdOpn)
    {
        /* Switch: '<S7>/Switch55' incorporates:
         *  Constant: '<S1456>/Calib'
         */
        VeHPMI_b_HVBatCntrWeld_ImpdOpn = KeHPMR_b_HVBatCntrWeld_ImpdOpn;
    }
    else
    {
        /* Switch: '<S7>/Switch55' */
        VeHPMI_b_HVBatCntrWeld_ImpdOpn = tmpRead_16;
    }

    /* End of Switch: '<S7>/Switch55' */

    /* Switch: '<S7>/Switch56' incorporates:
     *  Constant: '<S1489>/Calib'
     */
    if (KeHPMR_b_OvrdECMHoodOpen)
    {
        /* Switch: '<S7>/Switch56' incorporates:
         *  Constant: '<S1444>/Calib'
         */
        VeHPMI_b_ECMHoodOpen = KeHPMR_b_ECMHoodOpen;
    }
    else
    {
        /* Switch: '<S7>/Switch56' */
        VeHPMI_b_ECMHoodOpen = tmpRead_17;
    }

    /* End of Switch: '<S7>/Switch56' */

    /* Switch: '<S7>/Switch57' incorporates:
     *  Constant: '<S1548>/Calib'
     */
    if (KeHPMR_b_OvrdRelockTmrActv)
    {
        /* Switch: '<S7>/Switch57' incorporates:
         *  Constant: '<S1582>/Calib'
         */
        VeHPMI_b_RelockTimerActive = KeHPMR_b_RelockTmrActv;
    }
    else
    {
        /* Switch: '<S7>/Switch57' */
        VeHPMI_b_RelockTimerActive = tmpRead_18;
    }

    /* End of Switch: '<S7>/Switch57' */

    /* Switch: '<S7>/Switch58' incorporates:
     *  Constant: '<S1527>/Calib'
     */
    if (KeHPMR_b_OvrdMtrBFlt_HV_CntctrOpnRq)
    {
        /* Switch: '<S7>/Switch58' incorporates:
         *  Constant: '<S1467>/Calib'
         */
        VeHPMI_b_MtrBFlt_HV_CntctrOpnRq = KeHPMR_b_MtrBFlt_HV_CntctrOpnRq;
    }
    else
    {
        /* Switch: '<S7>/Switch58' */
        VeHPMI_b_MtrBFlt_HV_CntctrOpnRq = tmpRead_1a;
    }

    /* End of Switch: '<S7>/Switch58' */

    /* Switch: '<S7>/Switch63' incorporates:
     *  Constant: '<S1521>/Calib'
     */
    if (KeHPMR_b_OvrdMtrAFlt_HV_CntctrOpnRq)
    {
        /* Switch: '<S7>/Switch63' incorporates:
         *  Constant: '<S1465>/Calib'
         */
        VeHPMI_b_MtrAFlt_HV_CntctrOpnRq = KeHPMR_b_MtrAFlt_HV_CntctrOpnRq;
    }
    else
    {
        /* Switch: '<S7>/Switch63' */
        VeHPMI_b_MtrAFlt_HV_CntctrOpnRq = tmpRead_19;
    }

    /* End of Switch: '<S7>/Switch63' */

    /* Switch: '<S7>/Switch62' incorporates:
     *  Constant: '<S1523>/Calib'
     */
    if (KeHPMR_b_OvrdMtrA_MaxTorqRaw)
    {
        /* Switch: '<S7>/Switch62' incorporates:
         *  Constant: '<S1421>/Calib'
         */
        VeHPMI_M_MtrA_MaxTorqRaw = KeHPMR_M_MtrA_MaxTorqRaw;
    }
    else
    {
        /* Switch: '<S7>/Switch62' */
        VeHPMI_M_MtrA_MaxTorqRaw = rtb_Switch1_ap;
    }

    /* End of Switch: '<S7>/Switch62' */

    /* Switch: '<S7>/Switch60' incorporates:
     *  Constant: '<S1524>/Calib'
     */
    if (KeHPMR_b_OvrdMtrA_MinTorqRaw)
    {
        /* Switch: '<S7>/Switch60' incorporates:
         *  Constant: '<S1422>/Calib'
         */
        VeHPMI_M_MtrA_MinTorqRaw = KeHPMR_M_MtrA_MinTorqRaw;
    }
    else
    {
        /* Switch: '<S7>/Switch60' */
        VeHPMI_M_MtrA_MinTorqRaw = rtb_Switch1_bzy;
    }

    /* End of Switch: '<S7>/Switch60' */

    /* Switch: '<S7>/Switch61' incorporates:
     *  Constant: '<S1529>/Calib'
     */
    if (KeHPMR_b_OvrdMtrB_MaxTorqRaw)
    {
        /* Switch: '<S7>/Switch61' incorporates:
         *  Constant: '<S1423>/Calib'
         */
        VeHPMI_M_MtrB_MaxTorqRaw = KeHPMR_M_MtrB_MaxTorqRaw;
    }
    else
    {
        /* Switch: '<S7>/Switch61' */
        VeHPMI_M_MtrB_MaxTorqRaw = rtb_Abs;
    }

    /* End of Switch: '<S7>/Switch61' */

    /* Switch: '<S7>/Switch59' incorporates:
     *  Constant: '<S1530>/Calib'
     */
    if (KeHPMR_b_OvrdMtrB_MinTorqRaw)
    {
        /* Switch: '<S7>/Switch59' incorporates:
         *  Constant: '<S1424>/Calib'
         */
        VeHPMI_M_MtrB_MinTorqRaw = KeHPMR_M_MtrB_MinTorqRaw;
    }
    else
    {
        /* Switch: '<S7>/Switch59' */
        VeHPMI_M_MtrB_MinTorqRaw = rtb_Switch1_d3;
    }

    /* End of Switch: '<S7>/Switch59' */

    /* Switch: '<S7>/Switch64' incorporates:
     *  Constant: '<S1513>/Calib'
     */
    if (KeHPMR_b_OvrdHoodOpen)
    {
        /* Switch: '<S7>/Switch64' incorporates:
         *  Constant: '<S1462>/Calib'
         */
        VeHPMI_b_HoodOpen = KeHPMR_b_HoodOpen;
    }
    else
    {
        /* Switch: '<S7>/Switch64' */
        VeHPMI_b_HoodOpen = tmpRead_1b;
    }

    /* End of Switch: '<S7>/Switch64' */

    /* Switch: '<S7>/Switch65' incorporates:
     *  Constant: '<S1503>/Calib'
     */
    if (KeHPMR_b_OvrdHVBatRdyTimeOut)
    {
        /* Switch: '<S7>/Switch65' incorporates:
         *  Constant: '<S1457>/Calib'
         */
        VeHPMI_b_HVBatRdyTimeOut = KeHPMR_b_HVBatRdyTimeOut;
    }
    else
    {
        /* Switch: '<S7>/Switch65' */
        VeHPMI_b_HVBatRdyTimeOut = tmpRead_1c;
    }

    /* End of Switch: '<S7>/Switch65' */

    /* Switch: '<S7>/Switch66' incorporates:
     *  Constant: '<S1488>/Calib'
     */
    if (KeHPMR_b_OvrdDsblPrplsnSysArb_Out)
    {
        /* Switch: '<S7>/Switch66' incorporates:
         *  Constant: '<S1443>/Calib'
         */
        VeHPMI_b_DsblPrplsnSysArb_Out = KeHPMR_b_DsblPrplsnSysArb_Out;
    }
    else
    {
        /* Switch: '<S7>/Switch66' */
        VeHPMI_b_DsblPrplsnSysArb_Out = tmpRead_1d;
    }

    /* End of Switch: '<S7>/Switch66' */

    /* Switch: '<S7>/Switch67' incorporates:
     *  Constant: '<S1476>/Calib'
     */
    if (KeHPMR_b_OvrdAPMFailure)
    {
        /* Switch: '<S7>/Switch67' incorporates:
         *  Constant: '<S1431>/Calib'
         */
        VeHPMI_b_APMFailure = KeHPMR_b_APMFailure;
    }
    else
    {
        /* Switch: '<S7>/Switch67' */
        VeHPMI_b_APMFailure = tmpRead_1e;
    }

    /* End of Switch: '<S7>/Switch67' */

    /* Switch: '<S7>/Switch45' incorporates:
     *  Constant: '<S1515>/Calib'
     */
    if (KeHPMR_b_OvrdKeyStatus)
    {
        /* Switch: '<S7>/Switch45' incorporates:
         *  Constant: '<S1603>/Calib'
         */
        VeHPMI_e_KeyStatus = KeHPMR_e_KeyStatus;
    }
    else
    {
        /* Switch: '<S7>/Switch45' incorporates:
         *  Inport: '<Root>/VePMDR_e_KeyStatus'
         */
        VeHPMI_e_KeyStatus = tmpRead_1f;
    }

    /* End of Switch: '<S7>/Switch45' */

    /* Switch: '<S7>/Switch70' incorporates:
     *  Constant: '<S1552>/Calib'
     */
    if (KeHPMR_b_OvrdSecured_to_Shtdwn)
    {
        /* Switch: '<S7>/Switch70' incorporates:
         *  Constant: '<S1586>/Calib'
         */
        VeHPMI_b_Secured_To_Shtdwn = KeHPMR_b_Secured_to_Shtdwn;
    }
    else
    {
        /* Switch: '<S7>/Switch70' */
        VeHPMI_b_Secured_To_Shtdwn = tmpRead_1g;
    }

    /* End of Switch: '<S7>/Switch70' */

    /* Switch: '<S7>/Switch71' incorporates:
     *  Constant: '<S1477>/Calib'
     */
    if (KeHPMR_b_OvrdAccRunActiveAnalog)
    {
        /* Switch: '<S7>/Switch71' incorporates:
         *  Constant: '<S1433>/Calib'
         */
        VeHPMI_b_AccRunActiveAnalog = KeHPMR_b_AccRunActiveAnalog;
    }
    else
    {
        /* Switch: '<S7>/Switch71' */
        VeHPMI_b_AccRunActiveAnalog = tmpRead_1h;
    }

    /* End of Switch: '<S7>/Switch71' */

    /* Switch: '<S7>/Switch72' incorporates:
     *  Constant: '<S1565>/Calib'
     */
    if (KeHPMR_b_Ovrd_SC_WakeUpSt)
    {
        /* Switch: '<S7>/Switch72' incorporates:
         *  Constant: '<S1584>/Calib'
         */
        VeHPMI_b_SC_WkUpFlg = KeHPMR_b_SC_WakeUpSt;
    }
    else
    {
        /* Switch: '<S7>/Switch72' */
        VeHPMI_b_SC_WkUpFlg = tmpRead_1i;
    }

    /* End of Switch: '<S7>/Switch72' */

    /* Switch: '<S7>/Switch73' incorporates:
     *  Constant: '<S1542>/Calib'
     */
    if (KeHPMR_b_OvrdP1fVoltCtrlEnbl)
    {
        /* Switch: '<S7>/Switch73' incorporates:
         *  Constant: '<S1577>/Calib'
         */
        VeHPMI_b_P1fVoltCtrlEnbl = KeHPMR_b_P1fVoltCtrlEnbl;
    }
    else
    {
        /* Switch: '<S7>/Switch73' */
        VeHPMI_b_P1fVoltCtrlEnbl = tmpRead_1j;
    }

    /* End of Switch: '<S7>/Switch73' */

    /* Switch: '<S7>/Switch52' incorporates:
     *  Constant: '<S1543>/Calib'
     */
    if (KeHPMR_b_OvrdP1f_Dgrd_AltMd)
    {
        /* Switch: '<S7>/Switch52' incorporates:
         *  Constant: '<S1578>/Calib'
         */
        VeHPMI_b_P1f_Dgrd_AltMd = KeHPMR_b_P1f_Dgrd_AltMd;
    }
    else
    {
        /* Switch: '<S7>/Switch52' */
        VeHPMI_b_P1f_Dgrd_AltMd = tmpRead_1k;
    }

    /* End of Switch: '<S7>/Switch52' */

    /* Switch: '<S7>/Switch26' incorporates:
     *  Constant: '<S1557>/Calib'
     */
    if (KeHPMR_b_OvrdVehSpdFA)
    {
        /* Switch: '<S7>/Switch26' incorporates:
         *  Constant: '<S1591>/Calib'
         */
        VeHPMI_b_VehSpdFA = KeHPMR_b_VehSpdFA;
    }
    else
    {
        /* Switch: '<S7>/Switch26' */
        VeHPMI_b_VehSpdFA = tmpRead_1l;
    }

    /* End of Switch: '<S7>/Switch26' */

    /* SignalConversion generated from: '<S7>/LeHPMR_t_dT' incorporates:
     *  Constant: '<S1622>/Calib'
     */
    HPMR_ac_B.LeHPMR_t_dT = HeHPMR_t_dT;

    /* Switch: '<S7>/Switch28' incorporates:
     *  Constant: '<S1550>/Calib'
     */
    if (KeHPMR_b_OvrdSCPRInitStatus)
    {
        /* Switch: '<S7>/Switch28' incorporates:
         *  Constant: '<S1617>/Calib'
         */
        VeHPMI_e_InitStatus = KeHPMR_e_SCPRInitStatus;
    }
    else
    {
        /* Switch: '<S7>/Switch28' incorporates:
         *  Inport: '<Root>/VeSCPR_e_InitStatus'
         */
        VeHPMI_e_InitStatus = tmpRead_1m;
    }

    /* End of Switch: '<S7>/Switch28' */

    /* Switch: '<S7>/Switch68' incorporates:
     *  Constant: '<S1554>/Calib'
     */
    if (KeHPMR_b_OvrdThrmlSystRlyEnblCmnd)
    {
        /* Switch: '<S7>/Switch68' incorporates:
         *  Constant: '<S1589>/Calib'
         */
        VeHPMI_b_ThrmlSystRly_EnblCmnd = KeHPMR_b_ThrmlSystRlyEnblCmnd;
    }
    else
    {
        /* Switch: '<S7>/Switch68' */
        VeHPMI_b_ThrmlSystRly_EnblCmnd = tmpRead_1n;
    }

    /* End of Switch: '<S7>/Switch68' */

    /* Switch: '<S7>/Switch69' incorporates:
     *  Constant: '<S1539>/Calib'
     */
    if (KeHPMR_b_OvrdOperationalModeSts)
    {
        /* Switch: '<S7>/Switch69' incorporates:
         *  Constant: '<S1610>/Calib'
         */
        VeHPMI_e_OperationalModeSts = KeHPMR_e_OperationalModeSts;
    }
    else
    {
        /* Switch: '<S7>/Switch69' incorporates:
         *  Inport: '<Root>/VePMDR_e_OperationalModeSts'
         */
        VeHPMI_e_OperationalModeSts = tmpRead_1o;
    }

    /* End of Switch: '<S7>/Switch69' */

    /* Switch: '<S7>/Switch74' incorporates:
     *  Constant: '<S1560>/Calib'
     */
    if (KeHPMR_b_Ovrd_ClsCntcrCmd_LVCheck)
    {
        /* Switch: '<S7>/Switch74' incorporates:
         *  Constant: '<S1438>/Calib'
         */
        VeHPMI_b_ClsCntcrCmd_LVCheck = KeHPMR_b_ClsCntcrCmd_LVCheck;
    }
    else
    {
        /* Switch: '<S7>/Switch74' */
        VeHPMI_b_ClsCntcrCmd_LVCheck = tmpRead_1p;
    }

    /* End of Switch: '<S7>/Switch74' */

    /* Switch: '<S7>/Switch79' incorporates:
     *  Constant: '<S1535>/Calib'
     */
    if (KeHPMR_b_OvrdMtrC_MaxTorqRaw)
    {
        /* Switch: '<S7>/Switch79' incorporates:
         *  Constant: '<S1425>/Calib'
         */
        VeHPMI_M_MtrC_MaxTorqRaw = KeHPMR_M_MtrC_MaxTorqRaw;
    }
    else
    {
        /* Switch: '<S7>/Switch79' */
        VeHPMI_M_MtrC_MaxTorqRaw = rtb_Switch1_a;
    }

    /* End of Switch: '<S7>/Switch79' */

    /* Switch: '<S7>/Switch75' incorporates:
     *  Constant: '<S1536>/Calib'
     */
    if (KeHPMR_b_OvrdMtrC_MinTorqRaw)
    {
        /* Switch: '<S7>/Switch75' incorporates:
         *  Constant: '<S1426>/Calib'
         */
        VeHPMI_M_MtrC_MinTorqRaw = KeHPMR_M_MtrC_MinTorqRaw;
    }
    else
    {
        /* Switch: '<S7>/Switch75' */
        VeHPMI_M_MtrC_MinTorqRaw = rtb_Switch1_ne;
    }

    /* End of Switch: '<S7>/Switch75' */

    /* Switch: '<S7>/Switch82' incorporates:
     *  Constant: '<S1534>/Calib'
     */
    if (KeHPMR_b_OvrdMtrC_InvrtrSt)
    {
        /* Switch: '<S7>/Switch82' incorporates:
         *  Constant: '<S1609>/Calib'
         */
        VeHPMI_e_MtrC_InvrtrSt = KeHPMR_e_MtrC_InvrtrSt;
    }
    else
    {
        /* Switch: '<S7>/Switch82' incorporates:
         *  Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt'
         */
        VeHPMI_e_MtrC_InvrtrSt = tmpRead_1s;
    }

    /* End of Switch: '<S7>/Switch82' */

    /* Switch: '<S7>/Switch76' incorporates:
     *  Constant: '<S1520>/Calib'
     */
    if (KeHPMR_b_OvrdMCPCSt_SPT)
    {
        /* Switch: '<S7>/Switch76' incorporates:
         *  Constant: '<S1614>/Calib'
         */
        VeHPMI_e_MCPC_SPT_State = KeHPMR_e_OvrdValueMCPCSt;
    }
    else
    {
        /* Switch: '<S7>/Switch76' incorporates:
         *  Inport: '<Root>/VeINVR_e_MCPC_SPT_State'
         */
        VeHPMI_e_MCPC_SPT_State = tmpRead_1r;
    }

    /* End of Switch: '<S7>/Switch76' */

    /* Switch: '<S7>/Switch77' incorporates:
     *  Constant: '<S1487>/Calib'
     */
    if (KeHPMR_b_OvrdDsblInvC)
    {
        /* Switch: '<S7>/Switch77' incorporates:
         *  Constant: '<S1442>/Calib'
         */
        VeHPMI_b_DsblInvC = KeHPMR_b_DsblInvC;
    }
    else
    {
        /* Switch: '<S7>/Switch77' */
        VeHPMI_b_DsblInvC = tmpRead_1t;
    }

    /* End of Switch: '<S7>/Switch77' */

    /* Switch: '<S7>/Switch78' incorporates:
     *  Constant: '<S1533>/Calib'
     */
    if (KeHPMR_b_OvrdMtrCFlt_HV_CntctrOpnRq)
    {
        /* Switch: '<S7>/Switch78' incorporates:
         *  Constant: '<S1469>/Calib'
         */
        VeHPMI_b_MtrCFlt_HV_CntctrOpnRq = KeHPMR_b_MtrCFlt_HV_CntctrOpnRq;
    }
    else
    {
        /* Switch: '<S7>/Switch78' */
        VeHPMI_b_MtrCFlt_HV_CntctrOpnRq = tmpRead_1q;
    }

    /* End of Switch: '<S7>/Switch78' */

    /* Switch: '<S7>/Switch84' incorporates:
     *  Constant: '<S1451>/Calib'
     */
    if (KeHPMR_b_FOTAOvrrdEnblHVSys_SD)
    {
        /* Switch: '<S7>/Switch84' incorporates:
         *  Constant: '<S1450>/Calib'
         */
        VeHPMI_b_FOTAOvrrdEnblHVSys = KeHPMR_b_FOTAOvrrdEnblHVSys_D;
    }
    else
    {
        /* Switch: '<S7>/Switch84' */
        VeHPMI_b_FOTAOvrrdEnblHVSys = tmpRead_1u;
    }

    /* End of Switch: '<S7>/Switch84' */

    /* Switch: '<S7>/Switch83' incorporates:
     *  Constant: '<S1571>/Calib'
     */
    if (KeHPMR_b_OvrrdFOTAInstallSt)
    {
        /* Switch: '<S7>/Switch83' incorporates:
         *  Constant: '<S1615>/Calib'
         */
        VeHPMI_e_FOTA_Install_Status = KeHPMR_e_OvrrdFOTAInstallStVal;
    }
    else
    {
        /* Switch: '<S7>/Switch83' incorporates:
         *  Inport: '<Root>/VeCITR_e_FOTA_Install_Status'
         */
        VeHPMI_e_FOTA_Install_Status = tmpRead_1v;
    }

    /* End of Switch: '<S7>/Switch83' */

    /* Switch: '<S7>/Switch85' incorporates:
     *  Constant: '<S1568>/Calib'
     */
    if (KeHPMR_b_OvrrdDrvReadySts)
    {
        /* Switch: '<S7>/Switch85' incorporates:
         *  Constant: '<S1439>/Calib'
         */
        VeHPMI_b_DrvReadyCmplSts = KeHPMR_b_DrvReadyStsVal;
    }
    else
    {
        /* Switch: '<S7>/Switch85' */
        VeHPMI_b_DrvReadyCmplSts = tmpRead_1w;
    }

    /* End of Switch: '<S7>/Switch85' */

    /* Switch: '<S7>/Switch86' incorporates:
     *  Constant: '<S1566>/Calib'
     */
    if (KeHPMR_b_Ovrd_Worksite_inverter)
    {
        /* Switch: '<S7>/Switch86' incorporates:
         *  Constant: '<S1592>/Calib'
         */
        VeHPMI_b_Worksite_Inverter_Active = KeHPMR_b_Worksite_inverter;
    }
    else
    {
        /* Switch: '<S7>/Switch86' */
        VeHPMI_b_Worksite_Inverter_Active = tmpRead_1x;
    }

    /* End of Switch: '<S7>/Switch86' */

    /* Switch: '<S7>/Switch87' incorporates:
     *  Constant: '<S1561>/Calib'
     */
    if (KeHPMR_b_Ovrd_HVDspt_Enbl)
    {
        /* Switch: '<S7>/Switch87' incorporates:
         *  Constant: '<S1459>/Calib'
         */
        VeHPMI_b_HVDspt_Enbl = KeHPMR_b_HVDspt_Enbl;
    }
    else
    {
        /* Switch: '<S7>/Switch87' */
        VeHPMI_b_HVDspt_Enbl = tmpRead_1y;
    }

    /* End of Switch: '<S7>/Switch87' */

    /* Switch: '<S7>/Switch88' incorporates:
     *  Constant: '<S1510>/Calib'
     */
    if (KeHPMR_b_OvrdHV_IntrnlIntrlkStat)
    {
        /* Switch: '<S7>/Switch88' incorporates:
         *  Constant: '<S1601>/Calib'
         */
        VeHPMI_e_HV_IntrnlIntrlkStat = KeHPMR_e_HV_IntrnlIntrlkStat;
    }
    else
    {
        /* Switch: '<S7>/Switch88' incorporates:
         *  Inport: '<Root>/VeHVTR_e_HV_IntrnlIntrlkStat'
         */
        VeHPMI_e_HV_IntrnlIntrlkStat = tmpRead_1z;
    }

    /* End of Switch: '<S7>/Switch88' */

    /* Switch: '<S7>/Switch89' incorporates:
     *  Constant: '<S1541>/Calib'
     */
    if (KeHPMR_b_OvrdOpnReq_SrvcProc1320)
    {
        /* Switch: '<S7>/Switch89' incorporates:
         *  Constant: '<S1473>/Calib'
         */
        VeHPMI_b_OpnReq_SrvcProc1320_Out = KeHPMR_b_OpnReq_SrvcProc1320;
    }
    else
    {
        /* Switch: '<S7>/Switch89' */
        VeHPMI_b_OpnReq_SrvcProc1320_Out = rtb_AND_et;
    }

    /* End of Switch: '<S7>/Switch89' */

    /* Switch: '<S7>/Switch90' incorporates:
     *  Constant: '<S1576>/Calib'
     */
    if (KeHPMR_b_Ovrrd_ORCLOC_ImpactRing)
    {
        /* Switch: '<S7>/Switch90' incorporates:
         *  Constant: '<S1470>/Calib'
         */
        VeHPMI_b_ORCLOC_ImpactRing = KeHPMR_b_ORCLOC_ImpactRing;
    }
    else
    {
        /* Switch: '<S7>/Switch90' */
        VeHPMI_b_ORCLOC_ImpactRing = rtb_OR8_o;
    }

    /* End of Switch: '<S7>/Switch90' */

    /* Switch: '<S7>/Switch91' incorporates:
     *  Constant: '<S1569>/Calib'
     */
    if (KeHPMR_b_OvrrdFD_OpenRq)
    {
        /* Switch: '<S7>/Switch91' incorporates:
         *  Constant: '<S1570>/Calib'
         */
        VeHPMI_b_FC_FuelDoorOpenReq = KeHPMR_b_OvrrdFD_OpenRqVal;
    }
    else
    {
        /* Switch: '<S7>/Switch91' */
        VeHPMI_b_FC_FuelDoorOpenReq = rtb_OR20;
    }

    /* End of Switch: '<S7>/Switch91' */

    /* Switch: '<S7>/Switch92' incorporates:
     *  Constant: '<S1574>/Calib'
     */
    if (KeHPMR_b_Ovrrd_DrvAllwd)
    {
        /* Switch: '<S7>/Switch92' incorporates:
         *  Constant: '<S1575>/Calib'
         */
        VeHPMI_b_DrvAllwd_FCEnbl = KeHPMR_b_Ovrrd_DrvAllwd_Val;
    }
    else
    {
        /* Switch: '<S7>/Switch92' */
        VeHPMI_b_DrvAllwd_FCEnbl = rtb_OR17;
    }

    /* End of Switch: '<S7>/Switch92' */

    /* Switch: '<S7>/Switch16' incorporates:
     *  Constant: '<S1573>/Calib'
     */
    if (KeHPMR_b_OvrrdThrmlRnawy_Flag)
    {
        /* Switch: '<S7>/Switch16' incorporates:
         *  Constant: '<S1588>/Calib'
         */
        VeHPMI_b_ThrmlRnawyFlg = KeHPMR_b_ThrmlRnawyFlag_Val;
    }
    else
    {
        /* Switch: '<S7>/Switch16' */
        VeHPMI_b_ThrmlRnawyFlg = rtb_OR35_m;
    }

    /* End of Switch: '<S7>/Switch16' */

    /* Switch: '<S7>/Switch17' incorporates:
     *  Constant: '<S1572>/Calib'
     */
    if (KeHPMR_b_OvrrdHVAuxLoadOffReq)
    {
        /* Switch: '<S7>/Switch17' incorporates:
         *  Constant: '<S1455>/Calib'
         */
        VeHPMI_b_HV_AuxLoadOffReq = KeHPMR_b_HVAuxLoadOffReqVal;
    }
    else
    {
        /* Switch: '<S7>/Switch17' */
        VeHPMI_b_HV_AuxLoadOffReq = rtb_AND_m4u;
    }

    /* End of Switch: '<S7>/Switch17' */

    /* Switch: '<S7>/Switch18' incorporates:
     *  Constant: '<S1567>/Calib'
     */
    if (KeHPMR_b_OvrrdChargingSysSts)
    {
        /* Switch: '<S7>/Switch18' incorporates:
         *  Constant: '<S1594>/Calib'
         */
        VeHPMI_e_ChargingSystemSts = KeHPMR_e_ChargingSysStsVal;
    }
    else
    {
        /* Switch: '<S7>/Switch18' incorporates:
         *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
         */
        VeHPMI_e_ChargingSystemSts = tmpRead_20;
    }

    /* End of Switch: '<S7>/Switch18' */

    /* Switch: '<S7>/Switch81' incorporates:
     *  Constant: '<S1545>/Calib'
     */
    if (KeHPMR_b_OvrdPrmryShiftPstnFA)
    {
        /* Switch: '<S7>/Switch81' incorporates:
         *  Constant: '<S1579>/Calib'
         */
        VeHPMI_b_Prmry_TransShiftPstnFA = KeHPMR_b_PrmryShiftPstnFA;
    }
    else
    {
        /* Switch: '<S7>/Switch81' */
        VeHPMI_b_Prmry_TransShiftPstnFA = rtb_UnitDelay_ik;
    }

    /* End of Switch: '<S7>/Switch81' */

    /* Switch: '<S7>/Switch19' incorporates:
     *  Constant: '<S1551>/Calib'
     */
    if (KeHPMR_b_OvrdScndryShiftPstnFA)
    {
        /* Switch: '<S7>/Switch19' incorporates:
         *  Constant: '<S1585>/Calib'
         */
        VeHPMI_b_Scndry_TransShiftPstnFA = KeHPMR_b_ScndryShiftPstnFA;
    }
    else
    {
        /* Switch: '<S7>/Switch19' */
        VeHPMI_b_Scndry_TransShiftPstnFA = rtb_VeHPMC_b_MtrAActv;
    }

    /* End of Switch: '<S7>/Switch19' */

    /* Switch: '<S7>/Switch80' incorporates:
     *  Constant: '<S1555>/Calib'
     */
    if (KeHPMR_b_OvrdTransFailSts)
    {
        /* Switch: '<S7>/Switch80' incorporates:
         *  Constant: '<S1590>/Calib'
         */
        VeHPMI_b_TransmissionFailSts = KeHPMR_b_TransmissionFailSts;
    }
    else
    {
        /* Switch: '<S7>/Switch80' */
        VeHPMI_b_TransmissionFailSts = rtb_UnitDelay_av;
    }

    /* End of Switch: '<S7>/Switch80' */

    /* Switch: '<S7>/Switch93' incorporates:
     *  Constant: '<S1500>/Calib'
     */
    if (KeHPMR_b_OvrdGenrEnblCANC)
    {
        /* Switch: '<S7>/Switch93' incorporates:
         *  Constant: '<S1454>/Calib'
         */
        VeHPMI_b_GenrEnblCANC = KeHPMR_b_GenrEnblCANC;
    }
    else
    {
        /* Switch: '<S7>/Switch93' */
        VeHPMI_b_GenrEnblCANC = rtb_AND_j3;
    }

    /* End of Switch: '<S7>/Switch93' */

    /* Switch: '<S7>/Switch94' incorporates:
     *  Constant: '<S1562>/Calib'
     */
    if (KeHPMR_b_Ovrd_MtrA_Dschrge_Stat)
    {
        /* Switch: '<S7>/Switch94' incorporates:
         *  Constant: '<S1604>/Calib'
         */
        VeHPMI_e_MtrA_Dschrge_Stat = KeHPMR_e_MtrA_Dschrge_Stat;
    }
    else
    {
        /* Switch: '<S7>/Switch94' incorporates:
         *  Inport: '<Root>/VeINVR_e_MtrA_Dschrge_Stat'
         */
        VeHPMI_e_MtrA_Dschrge_Stat = tmpRead_21;
    }

    /* End of Switch: '<S7>/Switch94' */

    /* Switch: '<S7>/Switch95' incorporates:
     *  Constant: '<S1563>/Calib'
     */
    if (KeHPMR_b_Ovrd_MtrB_Dschrge_Stat)
    {
        /* Switch: '<S7>/Switch95' incorporates:
         *  Constant: '<S1606>/Calib'
         */
        VeHPMI_e_MtrB_Dschrge_Stat = KeHPMR_e_MtrB_Dschrge_Stat;
    }
    else
    {
        /* Switch: '<S7>/Switch95' incorporates:
         *  Inport: '<Root>/VeINVR_e_MtrB_Dschrge_Stat'
         */
        VeHPMI_e_MtrB_Dschrge_Stat = tmpRead_22;
    }

    /* End of Switch: '<S7>/Switch95' */

    /* Switch: '<S7>/Switch96' incorporates:
     *  Constant: '<S1564>/Calib'
     */
    if (KeHPMR_b_Ovrd_MtrC_Dschrge_Stat)
    {
        /* Switch: '<S7>/Switch96' incorporates:
         *  Constant: '<S1608>/Calib'
         */
        VeHPMI_e_MtrC_Dschrge_Stat = KeHPMR_e_MtrC_Dschrge_Stat;
    }
    else
    {
        /* Switch: '<S7>/Switch96' incorporates:
         *  Inport: '<Root>/VeINVR_e_MtrC_Dschrge_Stat'
         */
        VeHPMI_e_MtrC_Dschrge_Stat = tmpRead_23;
    }

    /* End of Switch: '<S7>/Switch96' */

    /* Switch: '<S7>/Switch97' incorporates:
     *  Constant: '<S1546>/Calib'
     */
    if (KeHPMR_b_OvrdRdyForShtDwn)
    {
        /* Switch: '<S7>/Switch97' incorporates:
         *  Constant: '<S1581>/Calib'
         */
        VeHPMI_b_RdyForShtDwn_OBCR = KeHPMR_b_RdyForShtDwnVal;
    }
    else
    {
        /* Switch: '<S7>/Switch97' */
        VeHPMI_b_RdyForShtDwn_OBCR = rtb_AND22_k;
    }

    /* End of Switch: '<S7>/Switch97' */

    /* Switch: '<S7>/Switch98' incorporates:
     *  Constant: '<S1497>/Calib'
     */
    if (KeHPMR_b_OvrdFcShutDownReq)
    {
        /* Switch: '<S7>/Switch98' incorporates:
         *  Constant: '<S1597>/Calib'
         */
        HPMR_ac_B.VeHPMI_e_FcShutDownReq = KeHPMR_e_FcShutDownReq;
    }
    else
    {
        /* Switch: '<S7>/Switch98' incorporates:
         *  Inport: '<Root>/VeFCRR_e_FcShutDownReq'
         */
        HPMR_ac_B.VeHPMI_e_FcShutDownReq = tmpRead_24;
    }

    /* End of Switch: '<S7>/Switch98' */

    /* Switch: '<S7>/Switch99' incorporates:
     *  Constant: '<S1495>/Calib'
     */
    if (KeHPMR_b_OvrdFCActualMode)
    {
        /* Switch: '<S7>/Switch99' incorporates:
         *  Constant: '<S1596>/Calib'
         */
        HPMR_ac_B.VeHPMI_e_FCActualMode = KeHPMR_e_FCActualMode;
    }
    else
    {
        /* Switch: '<S7>/Switch99' incorporates:
         *  Inport: '<Root>/VeFCPR_e_ActualMode'
         */
        HPMR_ac_B.VeHPMI_e_FCActualMode = tmpRead_25;
    }

    /* End of Switch: '<S7>/Switch99' */

    /* Switch: '<S7>/Switch100' incorporates:
     *  Constant: '<S1496>/Calib'
     */
    if (KeHPMR_b_OvrdFCPS_RunReqToEVCU)
    {
        /* Switch: '<S7>/Switch100' incorporates:
         *  Constant: '<S1449>/Calib'
         */
        HPMR_ac_B.VeHPMI_b_FCPS_RunReqToEVCU = KeHPMR_b_FCPS_RunReqToEVCU;
    }
    else
    {
        /* Switch: '<S7>/Switch100' */
        HPMR_ac_B.VeHPMI_b_FCPS_RunReqToEVCU = rtb_Comparison2_jy;
    }

    /* End of Switch: '<S7>/Switch100' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HPMC_DetHybSysStInputs'
     */
    /* Outputs for Atomic SubSystem: '<S5>/DetHybSysStInputs_Variant' */
#if Rte_SysCon_Variant_HPMR_3

    /* Outputs for Atomic SubSystem: '<S374>/HPMC_DetHybSysStInputs' */
    /* RelationalOperator: '<S377>/Comparison2' incorporates:
     *  Constant: '<S388>/Constant'
     *  Switch: '<S7>/Switch46'
     */
    rtb_Comparison2_jy = (((uint32)VeHPMI_e_APM_OperModeStatus) ==
                          CeGENR_e_OperBuckSpecial);

    /* Outputs for Atomic SubSystem: '<S377>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S395>/EdgeRising' */
    /* Logic: '<S537>/AND22' incorporates:
     *  UnitDelay: '<S398>/Unit Delay'
     */
    rtb_AND22_k = HPMR_ac_DW.UnitDelay_DSTATE_pz;

    /* Update for UnitDelay: '<S398>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_pz = VeHPMI_b_APMFailure;

    /* Switch: '<S395>/Switch1' incorporates:
     *  Logic: '<S395>/OR'
     *  Logic: '<S395>/OR1'
     *  Logic: '<S398>/AND'
     *  Logic: '<S398>/OR1'
     */
    if ((!VeHPMI_b_APMFailure) || ((VeHPMI_b_APMFailure) && (!rtb_AND22_k)))
    {
        /* Switch: '<S395>/Switch1' incorporates:
         *  Constant: '<S395>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S395>/Switch1' incorporates:
         *  Constant: '<S392>/Calib'
         *  MinMax: '<S395>/Minimum'
         *  Sum: '<S395>/Summation'
         *  UnitDelay: '<S395>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_APMFailureStDebounce,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_bt);
    }

    /* End of Switch: '<S395>/Switch1' */
    /* End of Outputs for SubSystem: '<S395>/EdgeRising' */

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bt = rtb_Switch1_ne;

    /* Logic: '<S377>/Logical' incorporates:
     *  Constant: '<S391>/Calib'
     *  Constant: '<S392>/Calib'
     *  Logic: '<S395>/AND'
     *  RelationalOperator: '<S395>/Greater  Than'
     */
    VeHPMR_b_APMFaulted = (((VeHPMI_b_APMFailure) && (rtb_Switch1_ne >=
        KeHPMR_t_APMFailureStDebounce)) && (KeHPMR_b_Enbl_APMFault));

    /* End of Outputs for SubSystem: '<S377>/Turn On Delay Time' */

    /* Logic: '<S377>/Logical1' incorporates:
     *  Constant: '<S387>/Constant'
     *  Constant: '<S389>/Constant'
     *  RelationalOperator: '<S377>/Comparison1'
     *  RelationalOperator: '<S377>/Comparison2'
     *  RelationalOperator: '<S377>/Comparison3'
     *  Switch: '<S7>/Switch46'
     *  UnitDelay: '<S9>/Unit Delay3'
     */
    rtb_AND22_k = ((((uint32)HPMR_ac_B.LeHPMR_e_HybSysStOld) ==
                    CeHPMR_e_OPERATIONAL_ALTERNATOR) && (((uint32)
                     VeHPMI_e_APM_OperModeStatus) != CeGENR_e_OperBuckSpecial));

    /* Outputs for Atomic SubSystem: '<S377>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S396>/EdgeRising' */
    /* Logic: '<S399>/AND' incorporates:
     *  Logic: '<S399>/OR1'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    rtb_AND_j3 = (rtb_AND22_k && (!HPMR_ac_DW.UnitDelay_DSTATE_ga));

    /* Update for UnitDelay: '<S399>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ga = rtb_AND22_k;

    /* End of Outputs for SubSystem: '<S396>/EdgeRising' */

    /* Switch: '<S396>/Switch1' incorporates:
     *  Logic: '<S396>/OR'
     *  Logic: '<S396>/OR1'
     */
    if ((!rtb_AND22_k) || rtb_AND_j3)
    {
        /* Switch: '<S396>/Switch1' incorporates:
         *  Constant: '<S396>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S396>/Switch1' incorporates:
         *  Constant: '<S394>/Calib'
         *  MinMax: '<S396>/Minimum'
         *  Sum: '<S396>/Summation'
         *  UnitDelay: '<S396>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_BuckSpclNotAchvdTmr,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_ez);
    }

    /* End of Switch: '<S396>/Switch1' */

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ez = rtb_Switch1_ne;

    /* Logic: '<S377>/Logical2' incorporates:
     *  Constant: '<S390>/Calib'
     *  Constant: '<S394>/Calib'
     *  Logic: '<S396>/AND'
     *  RelationalOperator: '<S396>/Greater  Than'
     */
    VeHPMR_b_BuckSpclNotAchvd = ((rtb_AND22_k && (rtb_Switch1_ne >=
        KeHPMR_t_BuckSpclNotAchvdTmr)) && (KeHPMR_b_EnblBuckSpclFdbck));

    /* End of Outputs for SubSystem: '<S377>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S377>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S397>/EdgeRising' */
    /* Logic: '<S400>/AND' incorporates:
     *  Logic: '<S400>/OR1'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_da));

    /* Update for UnitDelay: '<S400>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_da = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S397>/EdgeRising' */

    /* Switch: '<S397>/Switch1' incorporates:
     *  Logic: '<S397>/OR'
     *  Logic: '<S397>/OR1'
     */
    if ((!rtb_Comparison2_jy) || rtb_AND22_k)
    {
        /* Switch: '<S397>/Switch1' incorporates:
         *  Constant: '<S397>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S397>/Switch1' incorporates:
         *  Constant: '<S393>/Calib'
         *  MinMax: '<S397>/Minimum'
         *  Sum: '<S397>/Summation'
         *  UnitDelay: '<S397>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_BuckSpclAchvdTmr, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_hr);
    }

    /* End of Switch: '<S397>/Switch1' */

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hr = rtb_Switch1_ne;

    /* Logic: '<S377>/Logical3' incorporates:
     *  Constant: '<S390>/Calib'
     *  Constant: '<S393>/Calib'
     *  Logic: '<S397>/AND'
     *  RelationalOperator: '<S397>/Greater  Than'
     */
    VeHPMR_b_BuckSpclAchvd = ((KeHPMR_b_EnblBuckSpclFdbck) &&
        (rtb_Comparison2_jy && (rtb_Switch1_ne >= KeHPMR_t_BuckSpclAchvdTmr)));

    /* End of Outputs for SubSystem: '<S377>/Turn On Delay Time2' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_BattSysNotActv' incorporates:
     *  Constant: '<S401>/Constant'
     *  Constant: '<S402>/Calib'
     *  Logic: '<S378>/Logical'
     *  RelationalOperator: '<S378>/Comparison4'
     *  RelationalOperator: '<S378>/Equal7'
     *  Sum: '<S378>/Sum1'
     *  Switch: '<S7>/Switch39'
     */
    VeHPMC_b_BattSysNotActv = (((VeHPMI_P_BattLTMaxLim - VeHPMI_P_HV_AccPwr) <
        KeHPMR_P_BattSysNotActvThresh) && (((uint32)VeHPMI_e_EngStartStopSt) ==
        CeESSR_e_EngOff));

    /* Logic: '<S379>/AND1' incorporates:
     *  Constant: '<S404>/Constant'
     *  Logic: '<S375>/Logical2'
     *  Logic: '<S379>/OR7'
     *  RelationalOperator: '<S379>/Equal3'
     *  Switch: '<S7>/Switch13'
     */
    rtb_Comparison2_jy = ((((HPMR_ac_B.LeHPMC_b_ContactorsClosedThisKe) &&
                            (!VeHPMI_b_HV_BatCntctrStatFA)) && (((uint32)
        VeHPMI_e_HV_BatCntctrStat) != CeHVTR_e_Closed)) &&
                          (!VeHPMR_b_CommandContactorsOpenOld));

    /* Outputs for Atomic SubSystem: '<S379>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S406>/EdgeRising' */
    /* Logic: '<S407>/AND' incorporates:
     *  Logic: '<S407>/OR1'
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_nn));

    /* Update for UnitDelay: '<S407>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_nn = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S406>/EdgeRising' */

    /* Switch: '<S406>/Switch1' incorporates:
     *  Logic: '<S406>/OR'
     *  Logic: '<S406>/OR1'
     */
    if ((!rtb_Comparison2_jy) || rtb_AND22_k)
    {
        /* Switch: '<S406>/Switch1' incorporates:
         *  Constant: '<S406>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S406>/Switch1' incorporates:
         *  Constant: '<S405>/Calib'
         *  MinMax: '<S406>/Minimum'
         *  Sum: '<S406>/Summation'
         *  UnitDelay: '<S406>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_CntctrNotCloseDbnc,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_k31);
    }

    /* End of Switch: '<S406>/Switch1' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_CntctrsOpenAfterClose' incorporates:
     *  Constant: '<S405>/Calib'
     *  Logic: '<S406>/AND'
     *  RelationalOperator: '<S406>/Greater  Than'
     */
    VeHPMC_b_CntctrsOpenAfterClose = (rtb_Comparison2_jy && (rtb_Switch1_ne >=
        KeHPMR_t_CntctrNotCloseDbnc));

    /* Update for UnitDelay: '<S406>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_k31 = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S379>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_CntctrsOpenAfterClose1' incorporates:
     *  Logic: '<S403>/AND'
     */
    HPMR_ac_B.LeHPMR_b_CntctrsOpenAfterClose1 = VeHPMC_b_CntctrsOpenAfterClose;

    /* Outputs for Atomic SubSystem: '<S375>/DetMtrSysActive' */
#if Rte_SysCon_Variant_HPMR_3Motor

    /* Outputs for Atomic SubSystem: '<S380>/DetMtrSysActive_3motor' */
    /* Logic: '<S409>/OR22' incorporates:
     *  Constant: '<S480>/Constant'
     *  Constant: '<S495>/Calib'
     *  Constant: '<S496>/Calib'
     *  RelationalOperator: '<S409>/Equal37'
     *  RelationalOperator: '<S409>/Greater  Than'
     *  RelationalOperator: '<S409>/Greater  Than3'
     *  Switch: '<S7>/Switch82'
     */
    rtb_AND_j3 = (((VeHPMI_M_MtrC_MaxTorqRaw >= KeHPMR_M_MaxMtrTorqPropEnbl) &&
                   (VeHPMI_M_MtrC_MinTorqRaw <= KeHPMR_M_MinMtrTorqPropEnbl)) &&
                  (((uint32)VeHPMI_e_MtrC_InvrtrSt) ==
                   CeINVR_e_NormalPowerStageOn));

    /* UnitDelay: '<S513>/Unit Delay' incorporates:
     *  Constant: '<S480>/Constant'
     *  Constant: '<S495>/Calib'
     *  Constant: '<S496>/Calib'
     *  Logic: '<S409>/OR25'
     *  RelationalOperator: '<S409>/Equal10'
     *  RelationalOperator: '<S409>/Greater  Than1'
     *  RelationalOperator: '<S409>/Greater  Than2'
     *  Switch: '<S7>/Switch21'
     */
    rtb_UnitDelay_av = (((CeINVR_e_NormalPowerStageOn == ((uint32)
                           VeHPMI_e_MtrB_InvrtrSt)) && (VeHPMI_M_MtrB_MaxTorqRaw
                          >= KeHPMR_M_MaxMtrTorqPropEnbl)) &&
                        (VeHPMI_M_MtrB_MinTorqRaw <= KeHPMR_M_MinMtrTorqPropEnbl));

    /* Logic: '<S409>/OR15' incorporates:
     *  Constant: '<S490>/Constant'
     *  Constant: '<S497>/Calib'
     *  Logic: '<S409>/OR16'
     *  Logic: '<S409>/OR6'
     *  RelationalOperator: '<S409>/Equal10'
     *  RelationalOperator: '<S409>/Equal31'
     *  RelationalOperator: '<S409>/Equal37'
     *  RelationalOperator: '<S409>/Equal5'
     *  RelationalOperator: '<S409>/Equal6'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch82'
     */
    VeHPMR_b_InverterFaulted_Tmp1_ThreeMtr = ((((((uint32)VeHPMI_e_MtrB_InvrtrSt)
        == CeINVR_e_InverterFaulted) || (CeINVR_e_InverterFaulted == ((uint32)
        VeHPMI_e_MtrA_InvrtrSt))) || (CeINVR_e_InverterFaulted == ((uint32)
        VeHPMI_e_MtrC_InvrtrSt))) && (!KeHPMR_b_InverterFaulted_Slctr));

    /* Logic: '<S409>/OR14' incorporates:
     *  Constant: '<S483>/Constant'
     *  Constant: '<S492>/Constant'
     *  Constant: '<S493>/Constant'
     *  Constant: '<S497>/Calib'
     *  Logic: '<S409>/OR10'
     *  Logic: '<S409>/OR11'
     *  Logic: '<S409>/OR12'
     *  Logic: '<S409>/OR55'
     *  RelationalOperator: '<S409>/Equal10'
     *  RelationalOperator: '<S409>/Equal15'
     *  RelationalOperator: '<S409>/Equal16'
     *  RelationalOperator: '<S409>/Equal32'
     *  RelationalOperator: '<S409>/Equal37'
     *  RelationalOperator: '<S409>/Equal6'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch82'
     */
    VeHPMR_b_InverterFaulted_Tmp2_ThreeMtr = ((KeHPMR_b_InverterFaulted_Slctr) &&
        ((((((uint32)VeHPMI_e_MtrC_InvrtrSt) == CeINVR_e_InverterFaulted) &&
           (VeHPMI_b_MtrCFlt_HV_CntctrOpnRq)) || ((((uint32)
        VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_InverterFaulted) &&
        (VeHPMI_b_MtrBFlt_HV_CntctrOpnRq))) || ((((uint32)VeHPMI_e_MtrA_InvrtrSt)
        == CeINVR_e_InverterFaulted) && (VeHPMI_b_MtrAFlt_HV_CntctrOpnRq))));

    /* Logic: '<S409>/OR13' */
    rtb_AND22_k = ((VeHPMR_b_InverterFaulted_Tmp1_ThreeMtr) ||
                   (VeHPMR_b_InverterFaulted_Tmp2_ThreeMtr));

    /* Logic: '<S409>/OR17' incorporates:
     *  Constant: '<S479>/Constant'
     *  Logic: '<S409>/OR18'
     *  RelationalOperator: '<S409>/Equal10'
     *  RelationalOperator: '<S409>/Equal17'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq_ThreeMtr = ((((uint32)VeHPMI_e_MtrB_InvrtrSt)
        == CeINVR_e_InverterFaulted) && (!VeHPMI_b_MtrBFlt_HV_CntctrOpnRq));

    /* Logic: '<S409>/OR58' incorporates:
     *  Constant: '<S484>/Constant'
     *  Logic: '<S409>/OR57'
     *  RelationalOperator: '<S409>/Equal33'
     *  RelationalOperator: '<S409>/Equal37'
     *  Switch: '<S7>/Switch82'
     */
    VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq_ThreeMtr = ((((uint32)VeHPMI_e_MtrC_InvrtrSt)
        == CeINVR_e_InverterFaulted) && (!VeHPMI_b_MtrCFlt_HV_CntctrOpnRq));

    /* Logic: '<S409>/OR20' incorporates:
     *  Constant: '<S481>/Constant'
     *  Logic: '<S409>/OR21'
     *  RelationalOperator: '<S409>/Equal18'
     *  RelationalOperator: '<S409>/Equal6'
     *  Switch: '<S7>/Switch20'
     */
    VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq_ThreeMtr = ((((uint32)VeHPMI_e_MtrA_InvrtrSt)
        == CeINVR_e_InverterFaulted) && (!VeHPMI_b_MtrAFlt_HV_CntctrOpnRq));

    /* Logic: '<S409>/OR19' */
    rtb_Comparison2_jy = (((VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq_ThreeMtr) &&
                           (VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq_ThreeMtr)) &&
                          (VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq_ThreeMtr));

    /* Logic: '<S409>/OR26' incorporates:
     *  Constant: '<S498>/Calib'
     *  Logic: '<S409>/OR1'
     *  Logic: '<S409>/OR23'
     *  Logic: '<S409>/OR24'
     *  Logic: '<S409>/OR8'
     *  Logic: '<S409>/OR9'
     */
    rtb_AND_j3 = (((rtb_AND_j3 && rtb_UnitDelay_av) &&
                   (!KeHPMR_b_InverterNormlPSOn_Slctr)) ||
                  ((KeHPMR_b_InverterNormlPSOn_Slctr) && (rtb_AND_j3 ||
                    rtb_UnitDelay_av)));

    /* Logic: '<S409>/OR3' incorporates:
     *  Constant: '<S476>/Constant'
     *  Constant: '<S477>/Constant'
     *  Constant: '<S482>/Constant'
     *  Constant: '<S485>/Constant'
     *  Constant: '<S486>/Constant'
     *  Constant: '<S487>/Constant'
     *  Constant: '<S489>/Constant'
     *  Constant: '<S491>/Constant'
     *  Constant: '<S494>/Constant'
     *  Logic: '<S409>/OR4'
     *  Logic: '<S409>/OR5'
     *  Logic: '<S409>/OR61'
     *  RelationalOperator: '<S409>/Equal1'
     *  RelationalOperator: '<S409>/Equal10'
     *  RelationalOperator: '<S409>/Equal2'
     *  RelationalOperator: '<S409>/Equal3'
     *  RelationalOperator: '<S409>/Equal34'
     *  RelationalOperator: '<S409>/Equal35'
     *  RelationalOperator: '<S409>/Equal36'
     *  RelationalOperator: '<S409>/Equal37'
     *  RelationalOperator: '<S409>/Equal4'
     *  RelationalOperator: '<S409>/Equal6'
     *  RelationalOperator: '<S409>/Equal7'
     *  RelationalOperator: '<S409>/Equal8'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch82'
     */
    VeHPMR_b_InvertersDisabled_Tmp1_ThreeMtr = (((((((uint32)
        VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_NormalPowerStageOff) || (((uint32)
        VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_InverterFaulted)) || (((uint32)
        VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_NormalPowerStageOnOvrd)) &&
        (((((uint32)VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_NormalPowerStageOff) ||
          (((uint32)VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_InverterFaulted)) ||
         (((uint32)VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_NormalPowerStageOnOvrd)))
        && (((((uint32)VeHPMI_e_MtrC_InvrtrSt) == CeINVR_e_NormalPowerStageOff) ||
             (((uint32)VeHPMI_e_MtrC_InvrtrSt) == CeINVR_e_InverterFaulted)) ||
            (((uint32)VeHPMI_e_MtrC_InvrtrSt) == CeINVR_e_NormalPowerStageOnOvrd)));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_MtrNotInActvDschrg' incorporates:
     *  Constant: '<S478>/Constant'
     *  Constant: '<S488>/Constant'
     *  Logic: '<S409>/OR7'
     *  RelationalOperator: '<S409>/Equal10'
     *  RelationalOperator: '<S409>/Equal11'
     *  RelationalOperator: '<S409>/Equal12'
     *  RelationalOperator: '<S409>/Equal13'
     *  RelationalOperator: '<S409>/Equal14'
     *  RelationalOperator: '<S409>/Equal30'
     *  RelationalOperator: '<S409>/Equal37'
     *  RelationalOperator: '<S409>/Equal6'
     *  RelationalOperator: '<S409>/Equal9'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch82'
     *  Switch: '<S7>/Switch94'
     *  Switch: '<S7>/Switch95'
     *  Switch: '<S7>/Switch96'
     */
    VeHPMR_b_MtrNotInActvDschrg = ((((((((uint32)VeHPMI_e_MtrC_InvrtrSt) !=
        CeINVR_e_ActiveDischarge) && (((uint32)VeHPMI_e_MtrB_InvrtrSt) !=
        CeINVR_e_ActiveDischarge)) && (CeINVR_e_ActiveDischarge != ((uint32)
        VeHPMI_e_MtrA_InvrtrSt))) && (((uint32)VeHPMI_e_MtrA_Dschrge_Stat) !=
        CeINVR_e_AD_INPROGRESS)) && (((uint32)VeHPMI_e_MtrB_Dschrge_Stat) !=
        CeINVR_e_AD_INPROGRESS)) && (CeINVR_e_AD_INPROGRESS != ((uint32)
        VeHPMI_e_MtrC_Dschrge_Stat)));

    /* Outputs for Atomic SubSystem: '<S409>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S506>/EdgeFalling1' */
    /* Logic: '<S510>/AND' incorporates:
     *  Logic: '<S510>/OR1'
     *  UnitDelay: '<S510>/Unit Delay'
     */
    rtb_UnitDelay_av = ((!rtb_AND_j3) && (HPMR_ac_DW.UnitDelay_DSTATE_kl));

    /* Update for UnitDelay: '<S510>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_kl = rtb_AND_j3;

    /* End of Outputs for SubSystem: '<S506>/EdgeFalling1' */

    /* Switch: '<S506>/Switch' */
    if (rtb_UnitDelay_av)
    {
        /* Switch: '<S506>/Switch' incorporates:
         *  Constant: '<S500>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_InvrtrStDebounce;
    }
    else
    {
        /* Switch: '<S506>/Switch' incorporates:
         *  Constant: '<S506>/Constant Value1'
         *  MinMax: '<S506>/Minimum'
         *  Sum: '<S506>/Summation'
         *  UnitDelay: '<S506>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_g3 -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S506>/Switch' */

    /* Logic: '<S506>/AND' incorporates:
     *  Constant: '<S506>/Constant Value2'
     *  RelationalOperator: '<S506>/Greater  Than'
     */
    VeHPMC_b_MtrSysActv_HVMtr_ThreeMtr = (rtb_AND_j3 || (rtb_Switch1_ne > 0.0F));

    /* Update for UnitDelay: '<S506>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_g3 = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S409>/Turn Off Delay Time' */

    /* VariantMerge generated from: '<S374>/VeHPMC_b_MtrSystemActive' incorporates:
     *  Gain: '<S501>/Gain'
     */
    VeHPMC_b_MtrSystemActive = VeHPMC_b_MtrSysActv_HVMtr_ThreeMtr;

    /* VariantMerge generated from: '<S380>/VeHPMC_b_MtrSysActv_HVMtr' incorporates:
     *  Gain: '<S502>/Gain'
     */
    VeHPMC_b_MtrSysActv_HVMtr = VeHPMC_b_MtrSysActv_HVMtr_ThreeMtr;

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq' incorporates:
     *  Gain: '<S503>/Gain'
     */
    VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq = VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq_ThreeMtr;

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq' incorporates:
     *  Gain: '<S504>/Gain'
     */
    VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq = VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq_ThreeMtr;

    /* VariantMerge generated from: '<S380>/LeHPMR_b_InverterCFaulted_NoReactn' incorporates:
     *  Gain: '<S505>/Gain'
     */
    VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq = VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq_ThreeMtr;

    /* Outputs for Atomic SubSystem: '<S409>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S507>/EdgeRising' */
    /* Logic: '<S511>/AND' incorporates:
     *  Logic: '<S511>/OR1'
     *  UnitDelay: '<S511>/Unit Delay'
     */
    rtb_AND_j3 = (rtb_AND22_k && (!HPMR_ac_DW.UnitDelay_DSTATE_irr));

    /* Update for UnitDelay: '<S511>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_irr = rtb_AND22_k;

    /* End of Outputs for SubSystem: '<S507>/EdgeRising' */

    /* Switch: '<S507>/Switch1' incorporates:
     *  Logic: '<S507>/OR'
     *  Logic: '<S507>/OR1'
     */
    if ((!rtb_AND22_k) || rtb_AND_j3)
    {
        /* Switch: '<S507>/Switch1' incorporates:
         *  Constant: '<S507>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S507>/Switch1' incorporates:
         *  Constant: '<S500>/Calib'
         *  MinMax: '<S507>/Minimum'
         *  Sum: '<S507>/Summation'
         *  UnitDelay: '<S507>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvrtrStDebounce, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_no);
    }

    /* End of Switch: '<S507>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_InverterFaulted' incorporates:
     *  Constant: '<S500>/Calib'
     *  Logic: '<S507>/AND'
     *  RelationalOperator: '<S507>/Greater  Than'
     */
    VeHPMR_b_InverterFaulted = (rtb_AND22_k && (rtb_Switch1_ne >=
        KeHPMR_t_InvrtrStDebounce));

    /* Update for UnitDelay: '<S507>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_no = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S409>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S409>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S508>/EdgeRising' */
    /* UnitDelay: '<S513>/Unit Delay' incorporates:
     *  UnitDelay: '<S512>/Unit Delay'
     */
    rtb_UnitDelay_av = HPMR_ac_DW.UnitDelay_DSTATE_eu;

    /* Update for UnitDelay: '<S512>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_eu = VeHPMR_b_InvertersDisabled_Tmp1_ThreeMtr;

    /* Switch: '<S508>/Switch1' incorporates:
     *  Logic: '<S508>/OR'
     *  Logic: '<S508>/OR1'
     *  Logic: '<S512>/AND'
     *  Logic: '<S512>/OR1'
     */
    if ((!VeHPMR_b_InvertersDisabled_Tmp1_ThreeMtr) ||
            ((VeHPMR_b_InvertersDisabled_Tmp1_ThreeMtr) && (!rtb_UnitDelay_av)))
    {
        /* Switch: '<S508>/Switch1' incorporates:
         *  Constant: '<S508>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S508>/Switch1' incorporates:
         *  Constant: '<S499>/Calib'
         *  MinMax: '<S508>/Minimum'
         *  Sum: '<S508>/Summation'
         *  UnitDelay: '<S508>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvertersDisabledDbnc,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_ap);
    }

    /* End of Switch: '<S508>/Switch1' */
    /* End of Outputs for SubSystem: '<S508>/EdgeRising' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_InvertersDisabled' incorporates:
     *  Constant: '<S499>/Calib'
     *  Logic: '<S508>/AND'
     *  RelationalOperator: '<S508>/Greater  Than'
     */
    VeHPMR_b_InvertersDisabled = ((VeHPMR_b_InvertersDisabled_Tmp1_ThreeMtr) &&
        (rtb_Switch1_ne >= KeHPMR_t_InvertersDisabledDbnc));

    /* Update for UnitDelay: '<S508>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ap = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S409>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S409>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S509>/EdgeRising' */
    /* Logic: '<S513>/AND' incorporates:
     *  Logic: '<S513>/OR1'
     *  UnitDelay: '<S513>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_ggl));

    /* Update for UnitDelay: '<S513>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ggl = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S509>/EdgeRising' */

    /* Switch: '<S509>/Switch1' incorporates:
     *  Logic: '<S509>/OR'
     *  Logic: '<S509>/OR1'
     */
    if ((!rtb_Comparison2_jy) || rtb_AND22_k)
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S509>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S500>/Calib'
         *  MinMax: '<S509>/Minimum'
         *  Sum: '<S509>/Summation'
         *  UnitDelay: '<S509>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvrtrStDebounce, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_k3);
    }

    /* End of Switch: '<S509>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_InvrtrFlt_AllwCntctrCls' incorporates:
     *  Constant: '<S500>/Calib'
     *  Logic: '<S509>/AND'
     *  RelationalOperator: '<S509>/Greater  Than'
     */
    VeHPMR_b_InvrtrFlt_AllwCntctrCls = (rtb_Comparison2_jy && (rtb_Switch1_ne >=
        KeHPMR_t_InvrtrStDebounce));

    /* Update for UnitDelay: '<S509>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_k3 = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S409>/Turn On Delay Time2' */

    /* VariantMerge generated from: '<S380>/VeHPMR_b_MtrSysActv_VoltCntrl' incorporates:
     *  Constant: '<S409>/Constant4'
     *  SignalConversion: '<S409>/Signal Copy'
     */
    VeHPMR_b_MtrSysActv_VoltCntrl = false;

    /* VariantMerge generated from: '<S380>/VeHPMR_b_MtrSysActv_12VMtr' incorporates:
     *  Constant: '<S409>/Constant2'
     *  SignalConversion: '<S409>/Signal Copy1'
     */
    VeHPMR_b_MtrSysActv_12VMtr = true;

    /* VariantMerge generated from: '<S380>/VeHPMR_b_InvrtDisbld_12VMtr' incorporates:
     *  Constant: '<S409>/Constant1'
     *  SignalConversion: '<S409>/Signal Copy2'
     */
    VeHPMR_b_InvrtDisbld_12VMtr = false;

    /* VariantMerge generated from: '<S380>/VeHPMR_b_InvrtrFaulted_12VMtr' incorporates:
     *  Constant: '<S409>/Constant'
     *  SignalConversion: '<S409>/Signal Copy3'
     */
    VeHPMR_b_InvrtrFaulted_12VMtr = false;

    /* VariantMerge generated from: '<S380>/VeHPMR_b_MtrSysActvTmout_12VMtr' incorporates:
     *  Constant: '<S409>/Constant3'
     *  SignalConversion: '<S409>/Signal Copy4'
     */
    VeHPMR_b_MtrSysActvTmout_12VMtr = false;

    /* VariantMerge generated from: '<S380>/VeHPMR_e_MCPC_SPT_State' incorporates:
     *  Inport: '<S409>/VeINVR_e_MCPC_SPT_State'
     *  Switch: '<S7>/Switch76'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR_e_ = VeHPMI_e_MCPC_SPT_State;

    /* End of Outputs for SubSystem: '<S380>/DetMtrSysActive_3motor' */
#else

    /* Outputs for Atomic SubSystem: '<S380>/DetMtrSysActive_2Motor' */
    /* Logic: '<S408>/OR25' incorporates:
     *  Constant: '<S416>/Constant'
     *  Constant: '<S436>/Calib'
     *  Constant: '<S437>/Calib'
     *  RelationalOperator: '<S408>/Equal20'
     *  RelationalOperator: '<S408>/Greater  Than'
     *  RelationalOperator: '<S408>/Greater  Than3'
     *  Switch: '<S7>/Switch20'
     */
    rtb_VeHPMC_b_MtrAActv = (((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOn) && (VeHPMI_M_MtrA_MaxTorqRaw >=
        KeHPMR_M_MaxMtrTorqPropEnbl)) && (VeHPMI_M_MtrA_MinTorqRaw <=
        KeHPMR_M_MinMtrTorqPropEnbl));

    /* Outputs for Atomic SubSystem: '<S408>/Turn Off Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S461>/EdgeFalling1' */
    /* Logic: '<S470>/AND' incorporates:
     *  Logic: '<S470>/OR1'
     *  UnitDelay: '<S470>/Unit Delay'
     */
    rtb_Comparison2_jy = ((!rtb_VeHPMC_b_MtrAActv) &&
                          (HPMR_ac_DW.UnitDelay_DSTATE_kj));

    /* Update for UnitDelay: '<S470>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_kj = rtb_VeHPMC_b_MtrAActv;

    /* End of Outputs for SubSystem: '<S461>/EdgeFalling1' */

    /* Switch: '<S461>/Switch' */
    if (rtb_Comparison2_jy)
    {
        /* Switch: '<S461>/Switch' incorporates:
         *  Constant: '<S449>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_InvrtrStDebounce12VMtr;
    }
    else
    {
        /* Switch: '<S461>/Switch' incorporates:
         *  Constant: '<S461>/Constant Value1'
         *  MinMax: '<S461>/Minimum'
         *  Sum: '<S461>/Summation'
         *  UnitDelay: '<S461>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_oe -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S461>/Switch' */

    /* Logic: '<S461>/AND' incorporates:
     *  Constant: '<S461>/Constant Value2'
     *  RelationalOperator: '<S461>/Greater  Than'
     */
    rtb_AND22_k = (rtb_VeHPMC_b_MtrAActv || (rtb_Switch1_ne > 0.0F));

    /* Update for UnitDelay: '<S461>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_oe = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S408>/Turn Off Delay Time3' */

    /* Logic: '<S408>/OR30' incorporates:
     *  Constant: '<S424>/Constant'
     *  Logic: '<S408>/OR31'
     *  RelationalOperator: '<S408>/Equal27'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    VeHPMR_b_MtrSysActv_12VMtrPndg = ((!rtb_AND22_k) && (((uint32)
        HPMR_ac_DW.UnitDelay_DSTATE_ef) == CeHPMR_e_Enable));

    /* Outputs for Atomic SubSystem: '<S408>/Stop Watch Reset Enabled3' */
    /* Switch: '<S457>/Switch2' incorporates:
     *  Logic: '<S408>/OR32'
     *  Switch: '<S457>/Switch1'
     */
    if (!VeHPMR_b_MtrSysActv_12VMtrPndg)
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Constant: '<S457>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S457>/Switch1' incorporates:
         *  Sum: '<S457>/Subtraction'
         *  Switch: '<S457>/Switch2'
         *  UnitDelay: '<S457>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_ac;
    }

    /* End of Switch: '<S457>/Switch2' */

    /* Update for UnitDelay: '<S457>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ac = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S408>/Stop Watch Reset Enabled3' */

    /* VariantMerge generated from: '<S380>/VeHPMR_b_MtrSysActvTmout_12VMtr' incorporates:
     *  Constant: '<S450>/Calib'
     *  RelationalOperator: '<S408>/Comparison7'
     */
    VeHPMR_b_MtrSysActvTmout_12VMtr = (rtb_Switch1_ne >=
        KeHPMR_t_MtrSysActvTmr_12VMtr);

    /* RelationalOperator: '<S408>/Equal25' incorporates:
     *  Constant: '<S422>/Constant'
     *  RelationalOperator: '<S408>/Equal20'
     *  Switch: '<S7>/Switch20'
     */
    rtb_AND_j3 = (((uint32)VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_InverterFaulted);

    /* RelationalOperator: '<S408>/Equal26' incorporates:
     *  Constant: '<S423>/Constant'
     *  RelationalOperator: '<S408>/Equal20'
     *  Switch: '<S7>/Switch20'
     */
    rtb_Comparison2_jy = (((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
                          CeINVR_e_NormalVoltCntrlOn);

    /* Logic: '<S408>/OR51' incorporates:
     *  Constant: '<S414>/Constant'
     *  Constant: '<S436>/Calib'
     *  Constant: '<S437>/Calib'
     *  Logic: '<S408>/OR1'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Greater  Than1'
     *  RelationalOperator: '<S408>/Greater  Than2'
     *  Switch: '<S7>/Switch21'
     */
    rtb_UnitDelay_av = (((CeINVR_e_NormalPowerStageOn == ((uint32)
                           VeHPMI_e_MtrB_InvrtrSt)) && (VeHPMI_M_MtrB_MaxTorqRaw
                          >= KeHPMR_M_MaxMtrTorqPropEnbl)) &&
                        (VeHPMI_M_MtrB_MinTorqRaw <= KeHPMR_M_MinMtrTorqPropEnbl));

    /* Logic: '<S408>/OR22' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S445>/Calib'
     *  Logic: '<S408>/OR2'
     *  Logic: '<S408>/OR23'
     *  Logic: '<S408>/OR24'
     *  Logic: '<S408>/OR26'
     *  Logic: '<S408>/OR27'
     *  Logic: '<S408>/OR28'
     *  Logic: '<S408>/OR57'
     *  Logic: '<S408>/OR58'
     *  Logic: '<S408>/OR59'
     */
    rtb_UnitDelay_av = ((rtb_UnitDelay_av &&
                         (KeHPMR_b_InvrtrNrmlPSOn_Slctr12VMtr)) ||
                        ((!KeHPMR_b_InvrtrNrmlPSOn_Slctr12VMtr) &&
                         (((rtb_VeHPMC_b_MtrAActv || rtb_UnitDelay_av) &&
                           (KeHPMR_b_InverterNormlPSOn_Slctr)) ||
                          ((!KeHPMR_b_InverterNormlPSOn_Slctr) &&
                           (rtb_VeHPMC_b_MtrAActv && rtb_UnitDelay_av)))));

    /* Outputs for Atomic SubSystem: '<S408>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S458>/EdgeFalling1' */
    /* Logic: '<S467>/AND' incorporates:
     *  Logic: '<S467>/OR1'
     *  UnitDelay: '<S467>/Unit Delay'
     */
    rtb_VeHPMC_b_MtrAActv = ((!rtb_UnitDelay_av) &&
        (HPMR_ac_DW.UnitDelay_DSTATE_j40));

    /* Update for UnitDelay: '<S467>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_j40 = rtb_UnitDelay_av;

    /* End of Outputs for SubSystem: '<S458>/EdgeFalling1' */

    /* Switch: '<S458>/Switch' */
    if (rtb_VeHPMC_b_MtrAActv)
    {
        /* Switch: '<S458>/Switch' incorporates:
         *  Constant: '<S448>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_InvrtrStDebounce;
    }
    else
    {
        /* Switch: '<S458>/Switch' incorporates:
         *  Constant: '<S458>/Constant Value1'
         *  MinMax: '<S458>/Minimum'
         *  Sum: '<S458>/Summation'
         *  UnitDelay: '<S458>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_au -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S458>/Switch' */

    /* Logic: '<S458>/AND' incorporates:
     *  Constant: '<S458>/Constant Value2'
     *  RelationalOperator: '<S458>/Greater  Than'
     */
    rtb_VeHPMC_b_MtrAActv = (rtb_UnitDelay_av || (rtb_Switch1_ne > 0.0F));

    /* Update for UnitDelay: '<S458>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_au = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S408>/Turn Off Delay Time' */

    /* Logic: '<S408>/OR51' incorporates:
     *  Constant: '<S445>/Calib'
     *  Logic: '<S408>/OR52'
     */
    rtb_UnitDelay_av = (rtb_VeHPMC_b_MtrAActv ||
                        ((KeHPMR_b_InvrtrNrmlPSOn_Slctr12VMtr) && rtb_AND22_k));

    /* Outputs for Atomic SubSystem: '<S408>/Turn Off Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S462>/EdgeFalling1' */
    /* UnitDelay: '<S474>/Unit Delay' incorporates:
     *  UnitDelay: '<S471>/Unit Delay'
     */
    rtb_UnitDelay_ik = HPMR_ac_DW.UnitDelay_DSTATE_cwo;

    /* Update for UnitDelay: '<S471>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cwo = VeHPMI_b_P1f_Dgrd_AltMd;

    /* Logic: '<S471>/OR1' incorporates:
     *  Logic: '<S462>/AND'
     */
    tmpRead_1y = !VeHPMI_b_P1f_Dgrd_AltMd;

    /* Switch: '<S462>/Switch' incorporates:
     *  Logic: '<S471>/AND'
     *  Logic: '<S471>/OR1'
     */
    if (tmpRead_1y && rtb_UnitDelay_ik)
    {
        /* Switch: '<S462>/Switch' incorporates:
         *  Constant: '<S449>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_InvrtrStDebounce12VMtr;
    }
    else
    {
        /* Switch: '<S462>/Switch' incorporates:
         *  Constant: '<S462>/Constant Value1'
         *  MinMax: '<S462>/Minimum'
         *  Sum: '<S462>/Summation'
         *  UnitDelay: '<S462>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_ge -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S462>/Switch' */
    /* End of Outputs for SubSystem: '<S462>/EdgeFalling1' */

    /* Update for UnitDelay: '<S462>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ge = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S408>/Turn Off Delay Time4' */

    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S466>/EdgeRising' */
    /* Logic: '<S475>/AND' incorporates:
     *  Logic: '<S475>/OR1'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    rtb_UnitDelay_ik = (rtb_AND_j3 && (!HPMR_ac_DW.UnitDelay_DSTATE_oe5));

    /* Update for UnitDelay: '<S475>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_oe5 = rtb_AND_j3;

    /* End of Outputs for SubSystem: '<S466>/EdgeRising' */

    /* Switch: '<S466>/Switch1' incorporates:
     *  Logic: '<S466>/OR'
     *  Logic: '<S466>/OR1'
     */
    if ((!rtb_AND_j3) || rtb_UnitDelay_ik)
    {
        /* Switch: '<S466>/Switch1' incorporates:
         *  Constant: '<S466>/Constant Value1'
         */
        rtb_Switch1_a = 0.0F;
    }
    else
    {
        /* Switch: '<S466>/Switch1' incorporates:
         *  Constant: '<S449>/Calib'
         *  MinMax: '<S466>/Minimum'
         *  Sum: '<S466>/Summation'
         *  UnitDelay: '<S466>/Unit Delay'
         */
        rtb_Switch1_a = fminf(KeHPMR_t_InvrtrStDebounce12VMtr,
                              HPMR_ac_B.LeHPMR_t_dT +
                              HPMR_ac_DW.UnitDelay_DSTATE_hh);
    }

    /* End of Switch: '<S466>/Switch1' */

    /* Logic: '<S466>/AND' incorporates:
     *  Constant: '<S449>/Calib'
     *  RelationalOperator: '<S466>/Greater  Than'
     */
    rtb_AND_m4u = (rtb_AND_j3 && (rtb_Switch1_a >=
                    KeHPMR_t_InvrtrStDebounce12VMtr));

    /* Update for UnitDelay: '<S466>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hh = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time3' */

    /* Logic: '<S408>/OR15' incorporates:
     *  Constant: '<S428>/Constant'
     *  Constant: '<S441>/Calib'
     *  Logic: '<S408>/OR16'
     *  Logic: '<S408>/OR6'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Equal20'
     *  RelationalOperator: '<S408>/Equal5'
     *  RelationalOperator: '<S408>/Equal6'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_InverterFaulted_Tmp1 = (((((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
        CeINVR_e_InverterFaulted) || (CeINVR_e_InverterFaulted == ((uint32)
        VeHPMI_e_MtrA_InvrtrSt))) && (!KeHPMR_b_InverterFaulted_Slctr));

    /* Logic: '<S408>/OR14' incorporates:
     *  Constant: '<S430>/Constant'
     *  Constant: '<S431>/Constant'
     *  Constant: '<S441>/Calib'
     *  Logic: '<S408>/OR10'
     *  Logic: '<S408>/OR11'
     *  Logic: '<S408>/OR12'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Equal15'
     *  RelationalOperator: '<S408>/Equal16'
     *  RelationalOperator: '<S408>/Equal20'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_InverterFaulted_Tmp2 = ((KeHPMR_b_InverterFaulted_Slctr) &&
        (((((uint32)VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_InverterFaulted) &&
          (VeHPMI_b_MtrBFlt_HV_CntctrOpnRq)) || ((((uint32)
        VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_InverterFaulted) &&
        (VeHPMI_b_MtrAFlt_HV_CntctrOpnRq))));

    /* Logic: '<S408>/OR17' incorporates:
     *  Constant: '<S413>/Constant'
     *  Logic: '<S408>/OR18'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Equal17'
     *  Switch: '<S7>/Switch21'
     */
    rtb_OR17 = ((((uint32)VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_InverterFaulted) &&
                (!VeHPMI_b_MtrBFlt_HV_CntctrOpnRq));

    /* Logic: '<S408>/OR20' incorporates:
     *  Constant: '<S415>/Constant'
     *  Logic: '<S408>/OR21'
     *  RelationalOperator: '<S408>/Equal18'
     *  RelationalOperator: '<S408>/Equal20'
     *  Switch: '<S7>/Switch20'
     */
    rtb_OR20 = ((((uint32)VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_InverterFaulted) &&
                (!VeHPMI_b_MtrAFlt_HV_CntctrOpnRq));

    /* Logic: '<S408>/OR19' */
    rtb_AND_j3 = (rtb_OR17 && rtb_OR20);

    /* VariantMerge generated from: '<S380>/VeHPMR_b_InvrtDisbld_12VMtr' incorporates:
     *  Constant: '<S418>/Constant'
     *  Constant: '<S419>/Constant'
     *  Constant: '<S420>/Constant'
     *  Logic: '<S408>/OR29'
     *  RelationalOperator: '<S408>/Equal20'
     *  RelationalOperator: '<S408>/Equal22'
     *  RelationalOperator: '<S408>/Equal23'
     *  RelationalOperator: '<S408>/Equal24'
     *  Switch: '<S7>/Switch20'
     */
    VeHPMR_b_InvrtDisbld_12VMtr = (((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOff) || (((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_InverterFaulted)) || (((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOnOvrd));

    /* UnitDelay: '<S474>/Unit Delay' incorporates:
     *  Constant: '<S411>/Constant'
     *  Constant: '<S421>/Constant'
     *  Constant: '<S429>/Constant'
     *  Logic: '<S408>/OR5'
     *  RelationalOperator: '<S408>/Equal1'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Equal4'
     *  RelationalOperator: '<S408>/Equal8'
     *  Switch: '<S7>/Switch21'
     */
    rtb_UnitDelay_ik = (((((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
                          CeINVR_e_NormalPowerStageOff) || (((uint32)
                           VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_InverterFaulted))
                        || (((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
                            CeINVR_e_NormalPowerStageOnOvrd));

    /* Logic: '<S408>/OR34' incorporates:
     *  Constant: '<S444>/Calib'
     *  Logic: '<S408>/OR13'
     *  Logic: '<S408>/OR37'
     */
    VeHPMR_b_InverterFaulted_Tmp3 = (((VeHPMR_b_InverterFaulted_Tmp1) ||
        (VeHPMR_b_InverterFaulted_Tmp2)) && (!KeHPMR_b_InvrtrFltd_Slctr12VMtr));

    /* Logic: '<S408>/OR36' incorporates:
     *  Constant: '<S425>/Constant'
     *  Constant: '<S444>/Calib'
     *  Logic: '<S408>/OR33'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Equal28'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_InverterFaulted_Tmp4 = ((KeHPMR_b_InvrtrFltd_Slctr12VMtr) &&
        ((((uint32)VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_InverterFaulted) &&
         (VeHPMI_b_MtrBFlt_HV_CntctrOpnRq)));

    /* Logic: '<S408>/OR35' */
    rtb_OR35_m = ((VeHPMR_b_InverterFaulted_Tmp3) ||
                  (VeHPMR_b_InverterFaulted_Tmp4));

    /* Logic: '<S408>/OR40' incorporates:
     *  Constant: '<S410>/Constant'
     *  Constant: '<S427>/Constant'
     *  Constant: '<S432>/Constant'
     *  Constant: '<S443>/Calib'
     *  Logic: '<S408>/OR3'
     *  Logic: '<S408>/OR4'
     *  Logic: '<S408>/OR41'
     *  RelationalOperator: '<S408>/Equal2'
     *  RelationalOperator: '<S408>/Equal20'
     *  RelationalOperator: '<S408>/Equal3'
     *  RelationalOperator: '<S408>/Equal7'
     *  Switch: '<S7>/Switch20'
     */
    VeHPMR_b_InvertersDisabled_Tmp1 = (((((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOff) || (((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_InverterFaulted)) || (((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOnOvrd)) && rtb_UnitDelay_ik) &&
        (!KeHPMR_b_InvrtrDsbld_Slctr12VMtr));

    /* Logic: '<S408>/OR39' incorporates:
     *  Constant: '<S443>/Calib'
     */
    VeHPMR_b_InvertersDisabled_Tmp2 = ((KeHPMR_b_InvrtrDsbld_Slctr12VMtr) &&
        rtb_UnitDelay_ik);

    /* Logic: '<S408>/OR38' */
    rtb_UnitDelay_ik = ((VeHPMR_b_InvertersDisabled_Tmp1) ||
                        (VeHPMR_b_InvertersDisabled_Tmp2));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_MtrNotInActvDschrg' incorporates:
     *  Constant: '<S417>/Constant'
     *  Constant: '<S426>/Constant'
     *  Logic: '<S408>/OR7'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Equal11'
     *  RelationalOperator: '<S408>/Equal12'
     *  RelationalOperator: '<S408>/Equal19'
     *  RelationalOperator: '<S408>/Equal20'
     *  RelationalOperator: '<S408>/Equal9'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch94'
     *  Switch: '<S7>/Switch95'
     */
    VeHPMR_b_MtrNotInActvDschrg = ((((((uint32)VeHPMI_e_MtrB_InvrtrSt) !=
        CeINVR_e_ActiveDischarge) && (CeINVR_e_ActiveDischarge != ((uint32)
        VeHPMI_e_MtrA_InvrtrSt))) && (((uint32)VeHPMI_e_MtrA_Dschrge_Stat) !=
        CeINVR_e_AD_INPROGRESS)) && (CeINVR_e_AD_INPROGRESS != ((uint32)
        VeHPMI_e_MtrB_Dschrge_Stat)));

    /* Logic: '<S408>/OR8' incorporates:
     *  Constant: '<S412>/Constant'
     *  Constant: '<S438>/Calib'
     *  Constant: '<S446>/Calib'
     *  Logic: '<S408>/Logical1'
     *  RelationalOperator: '<S408>/Equal10'
     *  RelationalOperator: '<S408>/Equal13'
     *  RelationalOperator: '<S408>/Equal14'
     *  RelationalOperator: '<S408>/Equal20'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     */
    rtb_OR8_o = ((((uint32)VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_NormalVoltCntrlOn)
                 && ((KeHPMR_e_MtrB_InvrtrSt_VCOvrd == VeHPMI_e_MtrB_InvrtrSt) ||
                     (KeHPMR_b_DsblMtrBFdbckVCAltMd)));

    /* Outputs for Atomic SubSystem: '<S408>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S459>/EdgeFalling1' */
    /* Logic: '<S468>/AND' incorporates:
     *  Logic: '<S468>/OR1'
     *  UnitDelay: '<S468>/Unit Delay'
     */
    rtb_AND_et = ((!rtb_OR8_o) && (HPMR_ac_DW.UnitDelay_DSTATE_kk));

    /* Update for UnitDelay: '<S468>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_kk = rtb_OR8_o;

    /* End of Outputs for SubSystem: '<S459>/EdgeFalling1' */

    /* Switch: '<S459>/Switch' */
    if (rtb_AND_et)
    {
        /* Switch: '<S459>/Switch' incorporates:
         *  Constant: '<S448>/Calib'
         */
        rtb_Switch1_a = KeHPMR_t_InvrtrStDebounce;
    }
    else
    {
        /* Switch: '<S459>/Switch' incorporates:
         *  Constant: '<S459>/Constant Value1'
         *  MinMax: '<S459>/Minimum'
         *  Sum: '<S459>/Summation'
         *  UnitDelay: '<S459>/Unit Delay'
         */
        rtb_Switch1_a = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_bi -
                              HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S459>/Switch' */

    /* Logic: '<S459>/AND' incorporates:
     *  Constant: '<S459>/Constant Value2'
     *  RelationalOperator: '<S459>/Greater  Than'
     */
    VeHPMR_b_MtrSysActv_VoltCntrl_Tmp = (rtb_OR8_o || (rtb_Switch1_a > 0.0F));

    /* Update for UnitDelay: '<S459>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bi = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S408>/Turn Off Delay Time1' */

    /* VariantMerge generated from: '<S380>/VeHPMR_b_MtrSysActv_VoltCntrl' incorporates:
     *  Constant: '<S439>/Calib'
     *  Logic: '<S408>/Logical'
     *  Logic: '<S408>/OR9'
     */
    VeHPMR_b_MtrSysActv_VoltCntrl = ((VeHPMR_b_MtrSysActv_VoltCntrl_Tmp) ||
        ((KeHPMR_b_EnblInvrtrCmd_ALT_Mode) && rtb_UnitDelay_av));

    /* VariantMerge generated from: '<S374>/VeHPMC_b_MtrSystemActive' incorporates:
     *  Gain: '<S451>/Gain'
     */
    VeHPMC_b_MtrSystemActive = rtb_UnitDelay_av;

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq' incorporates:
     *  Gain: '<S452>/Gain'
     */
    VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq = rtb_OR17;

    /* VariantMerge generated from: '<S380>/VeHPMC_b_MtrSysActv_HVMtr' incorporates:
     *  Gain: '<S453>/Gain'
     */
    VeHPMC_b_MtrSysActv_HVMtr = rtb_VeHPMC_b_MtrAActv;

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq' incorporates:
     *  Gain: '<S454>/Gain'
     */
    VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq = rtb_OR20;

    /* VariantMerge generated from: '<S380>/VeHPMR_b_MtrSysActv_12VMtr' incorporates:
     *  Gain: '<S455>/Gain'
     */
    VeHPMR_b_MtrSysActv_12VMtr = rtb_AND22_k;

    /* VariantMerge generated from: '<S380>/VeHPMR_b_InvrtrFaulted_12VMtr' incorporates:
     *  Gain: '<S456>/Gain'
     */
    VeHPMR_b_InvrtrFaulted_12VMtr = rtb_AND_m4u;

    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S463>/EdgeRising' */
    /* Logic: '<S472>/AND' incorporates:
     *  Logic: '<S472>/OR1'
     *  UnitDelay: '<S472>/Unit Delay'
     */
    rtb_AND22_k = (rtb_OR35_m && (!HPMR_ac_DW.UnitDelay_DSTATE_bt0));

    /* Update for UnitDelay: '<S472>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bt0 = rtb_OR35_m;

    /* End of Outputs for SubSystem: '<S463>/EdgeRising' */

    /* Switch: '<S463>/Switch1' incorporates:
     *  Logic: '<S463>/OR'
     *  Logic: '<S463>/OR1'
     */
    if ((!rtb_OR35_m) || rtb_AND22_k)
    {
        /* Switch: '<S463>/Switch1' incorporates:
         *  Constant: '<S463>/Constant Value1'
         */
        rtb_Switch1_a = 0.0F;
    }
    else
    {
        /* Switch: '<S463>/Switch1' incorporates:
         *  Constant: '<S448>/Calib'
         *  MinMax: '<S463>/Minimum'
         *  Sum: '<S463>/Summation'
         *  UnitDelay: '<S463>/Unit Delay'
         */
        rtb_Switch1_a = fminf(KeHPMR_t_InvrtrStDebounce, HPMR_ac_B.LeHPMR_t_dT +
                              HPMR_ac_DW.UnitDelay_DSTATE_fv);
    }

    /* End of Switch: '<S463>/Switch1' */

    /* Logic: '<S463>/AND' incorporates:
     *  Constant: '<S448>/Calib'
     *  RelationalOperator: '<S463>/Greater  Than'
     */
    VeHPMR_b_InverterFaultedMtrB = (rtb_OR35_m && (rtb_Switch1_a >=
        KeHPMR_t_InvrtrStDebounce));

    /* Update for UnitDelay: '<S463>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_fv = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time' */

    /* RelationalOperator: '<S408>/Comparison1' incorporates:
     *  RelationalOperator: '<S408>/Comparison3'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    VeHPMI_b_HighVoltageRapidShtd_0 = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* Switch: '<S408>/Switch' incorporates:
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     *  Constant: '<S440>/Calib'
     *  Logic: '<S408>/Logical2'
     *  Logic: '<S408>/Logical3'
     *  RelationalOperator: '<S408>/Comparison1'
     *  RelationalOperator: '<S408>/Comparison3'
     */
    if (((((uint32)VeHPMI_b_HighVoltageRapidShtd_0) >=
            CeHPMR_e_EVAL_ALT_HV_ENABLE) && (((uint32)
            VeHPMI_b_HighVoltageRapidShtd_0) <= CeHPMR_e_OPERATIONAL_ALTERNATOR))
        && (KeHPMR_b_InvFltAltMdMtrAFlt))
    {
        /* Outputs for Atomic SubSystem: '<S408>/Turn Off Delay Time4' */
        /* VariantMerge generated from: '<S374>/VeHPMR_b_InverterFaulted' incorporates:
         *  Constant: '<S462>/Constant Value2'
         *  Logic: '<S408>/Logical4'
         *  Logic: '<S408>/Logical5'
         *  Logic: '<S462>/AND'
         *  RelationalOperator: '<S462>/Greater  Than'
         */
        VeHPMR_b_InverterFaulted = ((tmpRead_1y && (rtb_Switch1_ne <= 0.0F)) &&
            rtb_AND_m4u);

        /* End of Outputs for SubSystem: '<S408>/Turn Off Delay Time4' */
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VeHPMR_b_InverterFaulted' */
        VeHPMR_b_InverterFaulted = VeHPMR_b_InverterFaultedMtrB;
    }

    /* End of Switch: '<S408>/Switch' */

    /* Outputs for Atomic SubSystem: '<S408>/Turn Off Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S460>/EdgeFalling1' */
    /* Logic: '<S469>/AND' incorporates:
     *  Logic: '<S469>/OR1'
     *  UnitDelay: '<S469>/Unit Delay'
     */
    rtb_AND22_k = ((!rtb_Comparison2_jy) && (HPMR_ac_DW.UnitDelay_DSTATE_dl));

    /* Update for UnitDelay: '<S469>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dl = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S460>/EdgeFalling1' */

    /* Switch: '<S460>/Switch' */
    if (rtb_AND22_k)
    {
        /* Switch: '<S460>/Switch' incorporates:
         *  Constant: '<S449>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_InvrtrStDebounce12VMtr;
    }
    else
    {
        /* Switch: '<S460>/Switch' incorporates:
         *  Constant: '<S460>/Constant Value1'
         *  MinMax: '<S460>/Minimum'
         *  Sum: '<S460>/Summation'
         *  UnitDelay: '<S460>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_cn -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S460>/Switch' */

    /* Logic: '<S460>/AND' incorporates:
     *  Constant: '<S460>/Constant Value2'
     *  RelationalOperator: '<S460>/Greater  Than'
     */
    VeHPMR_b_MtrSysActv_VoltCntrl_12VMtr = (rtb_Comparison2_jy ||
        (rtb_Switch1_ne > 0.0F));

    /* Update for UnitDelay: '<S460>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cn = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S408>/Turn Off Delay Time2' */

    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S464>/EdgeRising' */
    /* Logic: '<S473>/AND' incorporates:
     *  Logic: '<S473>/OR1'
     *  UnitDelay: '<S473>/Unit Delay'
     */
    rtb_Comparison2_jy = (rtb_UnitDelay_ik && (!HPMR_ac_DW.UnitDelay_DSTATE_ai));

    /* Update for UnitDelay: '<S473>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ai = rtb_UnitDelay_ik;

    /* End of Outputs for SubSystem: '<S464>/EdgeRising' */

    /* Switch: '<S464>/Switch1' incorporates:
     *  Logic: '<S464>/OR'
     *  Logic: '<S464>/OR1'
     */
    if ((!rtb_UnitDelay_ik) || rtb_Comparison2_jy)
    {
        /* Switch: '<S464>/Switch1' incorporates:
         *  Constant: '<S464>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S464>/Switch1' incorporates:
         *  Constant: '<S447>/Calib'
         *  MinMax: '<S464>/Minimum'
         *  Sum: '<S464>/Summation'
         *  UnitDelay: '<S464>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvertersDisabledDbnc,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_hm);
    }

    /* End of Switch: '<S464>/Switch1' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_InvertersDisabled' incorporates:
     *  Constant: '<S447>/Calib'
     *  Logic: '<S464>/AND'
     *  RelationalOperator: '<S464>/Greater  Than'
     */
    VeHPMR_b_InvertersDisabled = (rtb_UnitDelay_ik && (rtb_Switch1_ne >=
        KeHPMR_t_InvertersDisabledDbnc));

    /* Update for UnitDelay: '<S464>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hm = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S465>/EdgeRising' */
    /* Logic: '<S474>/AND' incorporates:
     *  Logic: '<S474>/OR1'
     *  UnitDelay: '<S474>/Unit Delay'
     */
    rtb_Comparison2_jy = (rtb_AND_j3 && (!HPMR_ac_DW.UnitDelay_DSTATE_bic));

    /* Update for UnitDelay: '<S474>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bic = rtb_AND_j3;

    /* End of Outputs for SubSystem: '<S465>/EdgeRising' */

    /* Switch: '<S465>/Switch1' incorporates:
     *  Logic: '<S465>/OR'
     *  Logic: '<S465>/OR1'
     */
    if ((!rtb_AND_j3) || rtb_Comparison2_jy)
    {
        /* Switch: '<S465>/Switch1' incorporates:
         *  Constant: '<S465>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S465>/Switch1' incorporates:
         *  Constant: '<S448>/Calib'
         *  MinMax: '<S465>/Minimum'
         *  Sum: '<S465>/Summation'
         *  UnitDelay: '<S465>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvrtrStDebounce, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_dgh);
    }

    /* End of Switch: '<S465>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_InvrtrFlt_AllwCntctrCls' incorporates:
     *  Constant: '<S448>/Calib'
     *  Logic: '<S465>/AND'
     *  RelationalOperator: '<S465>/Greater  Than'
     */
    VeHPMR_b_InvrtrFlt_AllwCntctrCls = (rtb_AND_j3 && (rtb_Switch1_ne >=
        KeHPMR_t_InvrtrStDebounce));

    /* Update for UnitDelay: '<S465>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dgh = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time2' */

    /* VariantMerge generated from: '<S380>/LeHPMR_b_InverterCFaulted_NoReactn' incorporates:
     *  Constant: '<S408>/Constant'
     *  SignalConversion: '<S408>/Signal Copy'
     */
    VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq = false;

    /* VariantMerge generated from: '<S380>/VeHPMR_e_MCPC_SPT_State' incorporates:
     *  Constant: '<S435>/Constant'
     *  SignalConversion: '<S408>/Signal Copy1'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR_e_ = CeINVR_e_Passed_SPT;

    /* End of Outputs for SubSystem: '<S380>/DetMtrSysActive_2Motor' */
#endif

    /* End of Outputs for SubSystem: '<S375>/DetMtrSysActive' */

    /* Outputs for Atomic SubSystem: '<S381>/Stop Watch Reset Enabled' */
    /* Switch: '<S519>/Switch2' incorporates:
     *  DataStoreRead: '<S381>/Data Store Read'
     *  Logic: '<S381>/Logical'
     *  Logic: '<S381>/Logical2'
     *  Switch: '<S519>/Switch1'
     */
    if ((!EeHPMR_b_ORC_LOCFA) || (!VeHPMI_b_RunCrankActive))
    {
        /* Switch: '<S519>/Switch1' incorporates:
         *  Constant: '<S519>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S519>/Switch1' incorporates:
         *  Sum: '<S519>/Subtraction'
         *  Switch: '<S519>/Switch2'
         *  UnitDelay: '<S519>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_d0;
    }

    /* End of Switch: '<S519>/Switch2' */

    /* Update for UnitDelay: '<S519>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_d0 = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S381>/Stop Watch Reset Enabled' */

    /* RelationalOperator: '<S381>/Comparison' incorporates:
     *  Constant: '<S516>/Calib'
     */
    VeHPMC_b_ORCLoCDetDn = (rtb_Switch1_ne >= KeHPMR_t_ORCLoCDetTm_BSW);

    /* VariantMerge generated from: '<S374>/VeHPMC_b_ORC_LOCFault' incorporates:
     *  Inport: '<S375>/VeIMPR_b_LossCommORC'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__n = VeHPMI_b_ORCLOC_ImpactRing;

    /* If: '<S381>/If' incorporates:
     *  DataStoreRead: '<S381>/Data Store Read1'
     *  Logic: '<S381>/Logical1'
     */
    if ((VeHPMC_b_ORCLoCDetDn) && (EeHPMR_b_ORC_LOCFA))
    {
        /* Outputs for IfAction SubSystem: '<S381>/ORCLOC_Detrmnd' incorporates:
         *  ActionPort: '<S517>/Action Port'
         */
        /* If: '<S517>/If' */
        if (HPMR_ac_B.VariantMergeForOutportVeHPMC__n)
        {
            /* Outputs for IfAction SubSystem: '<S517>/LOC_Dtctd_NoClr' incorporates:
             *  ActionPort: '<S520>/Action Port'
             */
            HPMR_ac_LOC_Dtctd_NoClr(&rtb_Comparison2_jy);

            /* End of Outputs for SubSystem: '<S517>/LOC_Dtctd_NoClr' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S517>/NoLOC_Clr_Memory' incorporates:
             *  ActionPort: '<S521>/Action Port'
             */
            HPMR_ac_NoLOC_Clr_Memory(&rtb_Comparison2_jy);

            /* End of Outputs for SubSystem: '<S517>/NoLOC_Clr_Memory' */
        }

        /* End of If: '<S517>/If' */

        /* VariantMerge generated from: '<S374>/VeHPMC_b_LossCommORC' incorporates:
         *  Gain: '<S522>/Gain'
         */
        VeHPMC_b_LossCommORC = rtb_Comparison2_jy;

        /* End of Outputs for SubSystem: '<S381>/ORCLOC_Detrmnd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S381>/ORCLOC_NotDtrmnd' incorporates:
         *  ActionPort: '<S518>/Action Port'
         */
        HPMR_ac_ORCLOC_NotDtrmnd((&(VeHPMC_b_LossCommORC)));

        /* End of Outputs for SubSystem: '<S381>/ORCLOC_NotDtrmnd' */
    }

    /* End of If: '<S381>/If' */

    /* If: '<S381>/If1' incorporates:
     *  Constant: '<S515>/Calib'
     */
    if (KeHPMR_b_ClrORCLossCommMem)
    {
        /* Outputs for IfAction SubSystem: '<S381>/Clr_ORCLOC_Mem' incorporates:
         *  ActionPort: '<S514>/Action Port'
         */
        HPMR_ac_Clr_ORCLOC_Mem();

        /* End of Outputs for SubSystem: '<S381>/Clr_ORCLOC_Mem' */
    }

    /* End of If: '<S381>/If1' */

    /* Abs: '<S537>/Abs1' incorporates:
     *  Abs: '<S382>/Abs2'
     */
    rtb_Switch1_ne = fabsf(VeHPMI_n_MtrA_Spd);

    /* Abs: '<S375>/Abs' incorporates:
     *  Abs: '<S382>/Abs1'
     */
    rtb_Switch1_a = fabsf(VeHPMI_n_MtrB_Spd);

    /* Logic: '<S382>/AND2' incorporates:
     *  Constant: '<S527>/Calib'
     *  RelationalOperator: '<S382>/Equal4'
     *  RelationalOperator: '<S382>/Equal5'
     */
    rtb_Comparison2_jy = ((rtb_Switch1_ne < KeHPMR_n_MtrShtDwnSpd) &&
                          (rtb_Switch1_a < KeHPMR_n_MtrShtDwnSpd));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_HighMtrSpdActv' incorporates:
     *  Constant: '<S526>/Calib'
     *  Logic: '<S382>/AND3'
     *  RelationalOperator: '<S382>/Equal3'
     *  RelationalOperator: '<S382>/Equal6'
     */
    HPMR_ac_B.LeHPMR_b_HighMtrSpdActv = ((rtb_Switch1_ne >=
        KeHPMR_n_MaxMtrSpdForStrt) || (rtb_Switch1_a >=
        KeHPMR_n_MaxMtrSpdForStrt));

    /* Outputs for Atomic SubSystem: '<S382>/EdgeFalling' */
    /* Logic: '<S523>/AND' incorporates:
     *  Logic: '<S523>/OR1'
     *  UnitDelay: '<S523>/Unit Delay'
     */
    rtb_AND22_k = ((!rtb_Comparison2_jy) && (HPMR_ac_DW.UnitDelay_DSTATE_ii));

    /* Update for UnitDelay: '<S523>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ii = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S382>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S382>/Stop Watch Reset Enabled' */
    /* Switch: '<S533>/Switch1' incorporates:
     *  Switch: '<S533>/Switch2'
     */
    if (rtb_AND22_k)
    {
        /* Switch: '<S533>/Switch1' incorporates:
         *  Constant: '<S533>/Constant Value2'
         */
        rtb_Switch1_d3 = 0.0F;
    }
    else if (rtb_Comparison2_jy)
    {
        /* Switch: '<S533>/Switch2' incorporates:
         *  Sum: '<S533>/Subtraction'
         *  Switch: '<S533>/Switch1'
         *  UnitDelay: '<S533>/Unit Delay'
         */
        rtb_Switch1_d3 = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_oy;
    }
    else
    {
        /* Switch: '<S533>/Switch1' incorporates:
         *  Switch: '<S533>/Switch2'
         *  UnitDelay: '<S533>/Unit Delay'
         */
        rtb_Switch1_d3 = HPMR_ac_DW.UnitDelay_DSTATE_oy;
    }

    /* End of Switch: '<S533>/Switch1' */

    /* Update for UnitDelay: '<S533>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_oy = rtb_Switch1_d3;

    /* End of Outputs for SubSystem: '<S382>/Stop Watch Reset Enabled' */

    /* Abs: '<S537>/Abs1' */
    rtb_Switch1_ne = fabsf(VeHPMI_v_VehicleSigned);

    /* Outputs for Atomic SubSystem: '<S382>/Stop Watch Reset Enabled1' */
    /* Switch: '<S534>/Switch2' incorporates:
     *  Constant: '<S532>/Calib'
     *  Logic: '<S382>/Logical3'
     *  RelationalOperator: '<S382>/Equal7'
     *  Switch: '<S534>/Switch1'
     */
    if (rtb_Switch1_ne >= KeHPMR_v_VehSpd_ActvDschg)
    {
        /* Switch: '<S534>/Switch1' incorporates:
         *  Constant: '<S534>/Constant Value2'
         */
        VeHPMR_t_VehSpdMet_Tmr = 0.0F;
    }
    else
    {
        /* Switch: '<S534>/Switch1' incorporates:
         *  Sum: '<S534>/Subtraction'
         *  Switch: '<S534>/Switch2'
         *  UnitDelay: '<S534>/Unit Delay'
         */
        VeHPMR_t_VehSpdMet_Tmr = HPMR_ac_B.LeHPMR_t_dT +
            HPMR_ac_DW.UnitDelay_DSTATE_jq;
    }

    /* End of Switch: '<S534>/Switch2' */

    /* Update for UnitDelay: '<S534>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_jq = VeHPMR_t_VehSpdMet_Tmr;

    /* End of Outputs for SubSystem: '<S382>/Stop Watch Reset Enabled1' */

    /* RelationalOperator: '<S382>/Comparison2' incorporates:
     *  Constant: '<S531>/Calib'
     */
    VeHPMR_b_VehSpdMet_ActvDschg = (VeHPMR_t_VehSpdMet_Tmr >
        KeHPMR_t_SpdThreshTm_ActvDschg);

    /* Outputs for Atomic SubSystem: '<S382>/Stop Watch Reset Enabled2' */
    /* Switch: '<S535>/Switch2' incorporates:
     *  Constant: '<S529>/Calib'
     *  Logic: '<S382>/Logical4'
     *  RelationalOperator: '<S382>/Equal8'
     *  Switch: '<S535>/Switch1'
     */
    if (rtb_Switch1_a >= KeHPMR_n_MtrSpd_ActvDschg)
    {
        /* Switch: '<S535>/Switch1' incorporates:
         *  Constant: '<S535>/Constant Value2'
         */
        VeHPMR_t_MtrSpdMet_Tmr = 0.0F;
    }
    else
    {
        /* Switch: '<S535>/Switch1' incorporates:
         *  Sum: '<S535>/Subtraction'
         *  Switch: '<S535>/Switch2'
         *  UnitDelay: '<S535>/Unit Delay'
         */
        VeHPMR_t_MtrSpdMet_Tmr = HPMR_ac_B.LeHPMR_t_dT +
            HPMR_ac_DW.UnitDelay_DSTATE_lv;
    }

    /* End of Switch: '<S535>/Switch2' */

    /* Update for UnitDelay: '<S535>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_lv = VeHPMR_t_MtrSpdMet_Tmr;

    /* End of Outputs for SubSystem: '<S382>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S382>/Comparison3' incorporates:
     *  Constant: '<S531>/Calib'
     */
    VeHPMR_b_MtrSpdMet_ActvDschg = (VeHPMR_t_MtrSpdMet_Tmr >
        KeHPMR_t_SpdThreshTm_ActvDschg);

    /* Switch: '<S382>/Switch' incorporates:
     *  Constant: '<S382>/TRUE Constant2'
     *  Constant: '<S530>/Calib'
     *  Logic: '<S382>/Logical1'
     *  RelationalOperator: '<S382>/Comparison'
     *  RelationalOperator: '<S382>/Comparison1'
     *  RelationalOperator: '<S382>/Comparison4'
     */
    if ((VeHPMI_b_MtrA_SpdFA) || (VeHPMI_b_MtrB_SpdFA))
    {
        tmpRead_1y = true;
    }
    else
    {
        tmpRead_1y = (rtb_Switch1_d3 > KeHPMR_t_ShtdwnMtrSpdTime);
    }

    /* End of Switch: '<S382>/Switch' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_ShtdwnMtrSpdMet' incorporates:
     *  Constant: '<S524>/Calib'
     *  Logic: '<S382>/Logical2'
     */
    HPMR_ac_B.LeHPMR_b_ShtdwnMtrSpdMet = (tmpRead_1y ||
        (KeHPMR_b_DsblMtrShtDwnSpd));

    /* Switch: '<S382>/Switch1' */
    if (VeHPMI_b_MtrB_SpdFA)
    {
        tmpRead_1y = VeHPMR_b_VehSpdMet_ActvDschg;
    }
    else
    {
        tmpRead_1y = VeHPMR_b_MtrSpdMet_ActvDschg;
    }

    /* End of Switch: '<S382>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_SpdCondMetActvDschg' incorporates:
     *  Constant: '<S525>/Calib'
     *  Logic: '<S382>/Logical5'
     */
    VeHPMR_b_SpdCondMetActvDschg = (tmpRead_1y || (KeHPMR_b_OvrdSpdChk_ActvDschg));

    /* Logic: '<S537>/AND16' incorporates:
     *  Constant: '<S637>/Calib'
     */
    rtb_Comparison2_jy = ((VeHPMR_b_InverterFaulted) &&
                          (KeHPMR_b_Enbl_InverterFaulted));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_FltShtDwnCmnd' incorporates:
     *  Constant: '<S635>/Calib'
     *  Logic: '<S537>/AND1'
     */
    VeHPMR_b_FltShtDwnCmnd = ((VeHPMI_b_FltShtDwnCmnd) &&
        (KeHPMR_b_Enbl_FltShtDwnCmnd));

    /* Logic: '<S537>/Logical5' incorporates:
     *  Constant: '<S634>/Calib'
     */
    VeHPMC_b_DAPFA_OpenCntctr = ((VeHPMI_b_DAPFA_OpenCntctr) &&
        (KeHPMR_b_Enbl_DAPFA_OpnCntctr));

    /* RelationalOperator: '<S537>/Equal3' incorporates:
     *  Constant: '<S591>/Constant'
     *  Switch: '<S7>/Switch22'
     */
    VeHPMR_b_HVILFailed = (((uint32)VeHPMI_e_HV_IntrlkStat) ==
                           CeHVTR_e_IntrlkFailed);

    /* RelationalOperator: '<S537>/Equal6' incorporates:
     *  Constant: '<S594>/Constant'
     *  RelationalOperator: '<S537>/Equal3'
     *  Switch: '<S7>/Switch22'
     */
    VeHPMR_b_HVILSourced = (((uint32)VeHPMI_e_HV_IntrlkStat) !=
                            CeHVTR_e_IntrlkNotSourced);

    /* Outputs for Atomic SubSystem: '<S537>/Stop Watch Reset Enabled' */
    /* Switch: '<S653>/Switch2' incorporates:
     *  Constant: '<S592>/Constant'
     *  Constant: '<S593>/Constant'
     *  Logic: '<S537>/Logical2'
     *  Logic: '<S537>/OR5'
     *  RelationalOperator: '<S537>/Equal1'
     *  RelationalOperator: '<S537>/Equal4'
     *  Switch: '<S653>/Switch1'
     *  Switch: '<S7>/Switch24'
     */
    if ((((uint32)VeHPMI_e_VldtdTransRngSt) != CeTRGR_e_TransRangeNeutral) &&
            (((uint32)VeHPMI_e_VldtdTransRngSt) != CeTRGR_e_TransRangePark))
    {
        /* Switch: '<S653>/Switch1' incorporates:
         *  Constant: '<S653>/Constant Value2'
         */
        rtb_Switch1_a = 0.0F;
    }
    else
    {
        /* Switch: '<S653>/Switch1' incorporates:
         *  Sum: '<S653>/Subtraction'
         *  Switch: '<S653>/Switch2'
         *  UnitDelay: '<S653>/Unit Delay'
         */
        rtb_Switch1_a = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_dg;
    }

    /* End of Switch: '<S653>/Switch2' */

    /* Update for UnitDelay: '<S653>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dg = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S537>/Stop Watch Reset Enabled' */

    /* RelationalOperator: '<S537>/Comparison' incorporates:
     *  Constant: '<S649>/Calib'
     */
    VeHPMR_b_PRNDLTimeCondMet = (rtb_Switch1_a > KeHPMR_t_HVIL_PNDelay);

    /* Switch: '<S537>/Switch' incorporates:
     *  Constant: '<S646>/Calib'
     */
    if (KeHPMR_b_HoodOpenSlct)
    {
        tmpRead_1y = VeHPMI_b_HoodOpen;
    }
    else
    {
        tmpRead_1y = VeHPMI_b_ECMHoodOpen;
    }

    /* End of Switch: '<S537>/Switch' */

    /* Logic: '<S537>/Logical11' incorporates:
     *  Constant: '<S629>/Calib'
     *  Constant: '<S632>/Calib'
     *  Constant: '<S648>/Calib'
     *  Logic: '<S537>/Logical12'
     *  Logic: '<S537>/Logical13'
     *  Logic: '<S537>/Logical9'
     */
    VeHPMR_b_HoodSwCondMet_HVIL = (((KeHPMR_b_OvrdHoodSw) ||
        ((KeHPMR_b_EnblPSACond_HdSw) && (!VeHPMC_b_PropulsionSystemActive))) ||
        ((KeHPMR_b_EnableHoodSw) && tmpRead_1y));

    /* Logic: '<S537>/AND6' incorporates:
     *  Constant: '<S611>/Constant'
     *  Constant: '<S612>/Constant'
     *  Constant: '<S647>/Calib'
     *  Constant: '<S651>/Calib'
     *  Logic: '<S537>/Logical'
     *  Logic: '<S537>/Logical1'
     *  Logic: '<S537>/Logical3'
     *  Logic: '<S537>/Logical6'
     *  Logic: '<S537>/Logical7'
     *  Logic: '<S537>/OR1'
     *  RelationalOperator: '<S537>/Equal2'
     *  RelationalOperator: '<S537>/Equal4'
     *  RelationalOperator: '<S537>/Equal5'
     *  RelationalOperator: '<S537>/Equal7'
     *  Switch: '<S7>/Switch24'
     */
    VeHPMR_b_HVILOrSpeedCondMet = ((((((VeHPMC_b_DAPFA_OpenCntctr) &&
        (KeHPMR_b_MergeDAPwHVIL)) || ((VeHPMR_b_HVILFailed) &&
        (VeHPMR_b_HVILSourced))) && ((rtb_Switch1_ne <=
        KeHPMR_v_CntctrOpenVehSpd) || (VeHPMI_b_VehSpdFA))) &&
        ((VeHPMR_b_PRNDLTimeCondMet) || ((((uint32)VeHPMI_e_VldtdTransRngSt) ==
        CeTRGR_e_NoSelectionAvailable) || (((uint32)VeHPMI_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangeIllegal)))) && (VeHPMR_b_HoodSwCondMet_HVIL));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_HVILSpdCondMet' incorporates:
     *  Constant: '<S636>/Calib'
     *  Logic: '<S537>/AND5'
     */
    VeHPMR_b_HVILSpdCondMet = ((VeHPMR_b_HVILOrSpeedCondMet) &&
        (KeHPMR_b_Enbl_HVILSpdCond));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_HV_BatCntctrOpenReq' incorporates:
     *  Constant: '<S628>/Calib'
     *  Logic: '<S537>/AND11'
     *  Logic: '<S537>/AND12'
     */
    VeHPMR_b_HV_BatCntctrOpenReq = ((VeHPMI_b_HV_BatCntctrOpenReq) &&
        (!KeHPMR_b_DsblBP_ReqOpen));

    /* Outputs for Atomic SubSystem: '<S537>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S654>/EdgeRising' */
    /* Logic: '<S655>/AND' incorporates:
     *  Logic: '<S655>/OR1'
     *  UnitDelay: '<S655>/Unit Delay'
     */
    rtb_AND22_k = ((VeHPMR_b_HV_BatCntctrOpenReq) &&
                   (!HPMR_ac_DW.UnitDelay_DSTATE_op));

    /* Update for UnitDelay: '<S655>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_op = VeHPMR_b_HV_BatCntctrOpenReq;

    /* End of Outputs for SubSystem: '<S654>/EdgeRising' */

    /* Switch: '<S654>/Switch1' incorporates:
     *  Logic: '<S654>/OR'
     *  Logic: '<S654>/OR1'
     */
    if ((!VeHPMR_b_HV_BatCntctrOpenReq) || rtb_AND22_k)
    {
        /* Switch: '<S654>/Switch1' incorporates:
         *  Constant: '<S654>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S654>/Switch1' incorporates:
         *  Constant: '<S650>/Calib'
         *  MinMax: '<S654>/Minimum'
         *  Sum: '<S654>/Summation'
         *  UnitDelay: '<S654>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_ReqOpenLowVehSpd, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_bo);
    }

    /* End of Switch: '<S654>/Switch1' */

    /* Logic: '<S654>/AND' incorporates:
     *  Constant: '<S650>/Calib'
     *  RelationalOperator: '<S654>/Greater  Than'
     */
    VeHPMR_b_BattCntctrReqMet_Dbnc = ((VeHPMR_b_HV_BatCntctrOpenReq) &&
        (rtb_Switch1_ne >= KeHPMR_t_ReqOpenLowVehSpd));

    /* Update for UnitDelay: '<S654>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bo = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S537>/Turn On Delay Time1' */

    /* Logic: '<S613>/Logical Operator' incorporates:
     *  Constant: '<S613>/Constant1'
     *  Constant: '<S613>/Constant2'
     *  DataStoreRead: '<S613>/StatusByte_CommBusOff'
     *  RelationalOperator: '<S613>/Relational Operator1'
     *  RelationalOperator: '<S613>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator2'
     */
    VeHPMR_b_HEVBusOff = (((((sint32)HPMR_ac_DW.StatusByte_CommBusOff) & 1) > 0)
                          && ((((uint32)HPMR_ac_DW.StatusByte_CommBusOff) & 64U)
                           == 0U));

    /* Logic: '<S537>/Logical10' incorporates:
     *  Constant: '<S595>/Constant'
     *  Constant: '<S631>/Calib'
     *  Logic: '<S537>/AND21'
     *  Logic: '<S537>/AND3'
     *  Logic: '<S537>/AND7'
     *  RelationalOperator: '<S537>/Equal8'
     *  Switch: '<S7>/Switch1'
     */
    VeHPMR_b_BattCntctrReqMet = ((((VeHPMR_b_BattCntctrReqMet_Dbnc) &&
        (VeHPMR_b_HV_BatCntctrOpenReq)) || ((((uint32)VeHPMI_e_HybEngSysActv) ==
        CeESSR_e_HybEngDisabled) && (VeHPMR_b_HV_BatCntctrOpenReq))) ||
        ((VeHPMR_b_HEVBusOff) && (KeHPMR_b_EnblHEVBusOff_CntctrOpn)));

    /* Logic: '<S537>/AND8' incorporates:
     *  Constant: '<S645>/Calib'
     */
    rtb_AND_j3 = ((VeHPMI_b_HVBatSrvcDisCnctFA) && (KeHPMR_b_HVBatSrvcDisCnct));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_CritFaultLatched' incorporates:
     *  Inport: '<S375>/VeIMPR_b_HighVoltageRapidShtdwnCmnd'
     */
    HPMR_ac_B.VeHPMR_b_FinalImpactSignal = VeHPMI_b_HighVoltageRapidShtdwn;

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling1' */
    /* Logic: '<S586>/OR1' incorporates:
     *  Logic: '<S536>/Logical7'
     *  Logic: '<S539>/AND'
     *  Logic: '<S539>/OR1'
     *  Logic: '<S586>/NOT'
     *  Logic: '<S586>/OR'
     *  UnitDelay: '<S539>/Unit Delay'
     *  UnitDelay: '<S586>/Unit Delay'
     */
    rtb_AND22_k = (((VeHPMC_b_CntctrsOpenAfterClose) &&
                    (HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h)) ||
                   (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
                     (!HPMR_ac_DW.UnitDelay_DSTATE_bd)) &&
                    (HPMR_ac_DW.UnitDelay_DSTATE_nq)));

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling1' */

    /* Update for UnitDelay: '<S586>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_nq = rtb_AND22_k;

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MCPA_CoreFail' incorporates:
     *  Constant: '<S639>/Calib'
     *  Logic: '<S537>/AND10'
     */
    VeHPMR_b_MCPA_CoreFail = (VeHPMI_b_MCPA_CoreFail &&
        (KeHPMR_b_Enbl_MCPA_CoreFail));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MCPB_CoreFail' incorporates:
     *  Constant: '<S640>/Calib'
     *  Logic: '<S537>/AND14'
     */
    VeHPMR_b_MCPB_CoreFail = ((VeHPMI_b_MCPB_CoreFail) &&
        (KeHPMR_b_Enbl_MCPB_CoreFail));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_AHCP_CoreFail' incorporates:
     *  Constant: '<S633>/Calib'
     *  Logic: '<S537>/AND13'
     */
    VeHPMR_b_AHCP_CoreFail = ((VeHPMI_b_AHCP_CoreFail) &&
        (KeHPMR_b_Enbl_AHCP_CoreFail));

    /* Logic: '<S537>/AND15' incorporates:
     *  Constant: '<S641>/Calib'
     */
    VeHPMR_b_ORC_LOCFlt_BSW = ((HPMR_ac_B.VariantMergeForOutportVeHPMC__n) &&
        (KeHPMR_b_Enbl_ORC_LOCFlt));

    /* Logic: '<S537>/AND17' incorporates:
     *  Constant: '<S644>/Calib'
     */
    rtb_UnitDelay_av = ((VeHPMI_b_OpnBattCntctr) && (KeHPMR_b_Enbl_SRAROpnCntctr));

    /* Logic: '<S537>/AND19' incorporates:
     *  Constant: '<S642>/Calib'
     */
    rtb_VeHPMC_b_MtrAActv = ((VeHPMI_b_DsblInvA) && (KeHPMR_b_Enbl_SRARDsblINVA));

    /* Logic: '<S537>/AND20' incorporates:
     *  Constant: '<S638>/Calib'
     */
    rtb_UnitDelay_ik = ((VeHPMR_b_InvrtrFlt_AllwCntctrCls) &&
                        (KeHPMR_b_Enbl_InvrtrFlt_AllwCntctrCls));

    /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
     *  Constant: '<S568>/Constant'
     *  DataTypeConversion: '<S536>/Data Type Conversion'
     */
    HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[0] = CeHPMR_e_NoUnintndShtDwn;

    /* Switch: '<S536>/Switch' */
    if (rtb_Comparison2_jy)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S547>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[1] = CeHPMR_e_InverterFaulted;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S548>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[1] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch' */

    /* Switch: '<S536>/Switch1' */
    if (VeHPMR_b_FltShtDwnCmnd)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S559>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[2] = CeHPMR_e_FltShtDwnCmnd;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S570>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[2] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch1' */

    /* Switch: '<S536>/Switch2' */
    if (VeHPMR_b_HVILSpdCondMet)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S576>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[3] = CeHPMR_e_HVILOrSpeedCondMet;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S577>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[3] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch2' */

    /* Switch: '<S536>/Switch13' */
    if (VeHPMR_b_BattCntctrReqMet)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S578>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[4] = CeHPMR_e_BattCntctrReqMet;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S579>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[4] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch13' */

    /* Switch: '<S536>/Switch12' */
    if (rtb_AND_j3)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S580>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[5] = CeHPMR_e_HVBatSrvcDisCnctFA;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S581>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[5] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch12' */

    /* Switch: '<S536>/Switch11' */
    if (HPMR_ac_B.VeHPMR_b_FinalImpactSignal)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S549>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[6] = CeHPMR_e_CritFaultLatched;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S550>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[6] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch11' */

    /* Switch: '<S536>/Switch10' */
    if (rtb_AND22_k)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S551>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[7] =
            CeHPMR_e_CntctrsOpenAfterClose;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S552>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[7] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch10' */

    /* Switch: '<S536>/Switch9' */
    if (VeHPMR_b_MCPA_CoreFail)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S553>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[8] = CeHPMR_e_MCPACoreFail;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S554>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[8] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch9' */

    /* Switch: '<S536>/Switch8' */
    if (VeHPMR_b_MCPB_CoreFail)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S555>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[9] = CeHPMR_e_MCPBCoreFail;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S556>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[9] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch8' */

    /* Switch: '<S536>/Switch7' */
    if (VeHPMR_b_AHCP_CoreFail)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S557>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[10] = CeHPMR_e_AHCPCoreFail;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S558>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[10] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch7' */

    /* Switch: '<S536>/Switch6' */
    if (VeHPMR_b_ORC_LOCFlt_BSW)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S560>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[11] = CeHPMR_e_ORC_LossCommFA;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S561>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[11] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch6' */

    /* Switch: '<S536>/Switch5' */
    if (rtb_UnitDelay_av)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S562>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[12] = CeHPMR_e_OpnBattCntctr;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S563>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[12] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch5' */

    /* Switch: '<S536>/Switch4' */
    if (rtb_VeHPMC_b_MtrAActv)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S564>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[13] = CeHPMR_e_DisblINVA;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S565>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[13] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch4' */

    /* Switch: '<S536>/Switch3' */
    if (rtb_UnitDelay_ik)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S566>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[14] =
            CeHPMR_e_InvrtrFlt_AllwCntctrCls;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  Constant: '<S567>/Constant'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[14] = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S536>/Switch3' */

    /* Logic: '<S536>/Logical9' incorporates:
     *  Constant: '<S575>/Constant'
     *  Constant: '<S582>/Calib'
     *  RelationalOperator: '<S536>/Comparison8'
     *  RelationalOperator: '<S537>/Equal8'
     *  Switch: '<S7>/Switch1'
     */
    VeHPMC_b_Enbl_SPT_Chck = ((((uint32)VeHPMI_e_HybEngSysActv) !=
        CeESSR_e_HybEngDisabled) || (KeHPMR_b_OvrdHybEngCond_SPT));

    /* Outputs for Atomic SubSystem: '<S536>/EdgeRising3' */
    /* Logic: '<S536>/Logical5' incorporates:
     *  Constant: '<S574>/Constant'
     *  Logic: '<S536>/Logical8'
     *  Logic: '<S546>/AND'
     *  Logic: '<S546>/OR1'
     *  RelationalOperator: '<S536>/Comparison6'
     *  RelationalOperator: '<S536>/Comparison7'
     *  RelationalOperator: '<S536>/Comparison9'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch5'
     *  UnitDelay: '<S546>/Unit Delay'
     *  VariantMerge generated from: '<S380>/VeHPMR_e_MCPC_SPT_State'
     */
    VeHPMC_b_MCP_SPT_Failure = ((((((((uint32)VeHPMI_e_MCPA_SPT_State) ==
        CeINVR_e_Failed_SPT) || (CeINVR_e_Failed_SPT == ((uint32)
        VeHPMI_e_MCPB_SPT_State))) || (CeINVR_e_Failed_SPT == ((uint32)
        HPMR_ac_B.VariantMergeForOutportVeHPMR_e_))) ||
        (VeHPMC_b_MCP_SPT_Timeout)) && (VeHPMC_b_Enbl_SPT_Chck)) &&
        ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
         (!HPMR_ac_DW.UnitDelay_DSTATE_e4)));

    /* End of Outputs for SubSystem: '<S536>/EdgeRising3' */

    /* Logic: '<S536>/Logical6' incorporates:
     *  Constant: '<S571>/Constant'
     *  Constant: '<S572>/Constant'
     *  Constant: '<S583>/Calib'
     *  Logic: '<S536>/Logical3'
     *  Logic: '<S536>/Logical4'
     *  RelationalOperator: '<S536>/Comparison'
     *  RelationalOperator: '<S536>/Comparison2'
     *  RelationalOperator: '<S536>/Comparison3'
     *  Switch: '<S7>/Switch3'
     */
    VeHPMC_b_BSW_SPT_Failure = (((CeINVR_e_Failed_SPT == ((uint32)
        VeHPMI_e_BSW_SPT_State)) || ((((uint32)VeHPMI_e_BSW_SPT_State) ==
        CeINVR_e_Pending_SPT) && (VeHPMR_t_StateTimer > ((float32)
        Rte_Prm_KeHPMR_t_BSWTimeout_SPT_KeHPMR_t_BSWTimeout_SPT())))) &&
        (VeHPMC_b_Enbl_SPT_Chck));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_RapidShutdownOcc' incorporates:
     *  Constant: '<S386>/Calib'
     *  Logic: '<S375>/OR6'
     */
    VeHPMR_b_CollisionDetection = ((KeHPMR_b_RapidShtdwnActive) &&
        (HPMR_ac_B.VeHPMR_b_FinalImpactSignal));

    /* Logic: '<S536>/Logical2' incorporates:
     *  Logic: '<S537>/AND2'
     */
    rtb_OR35_m = !VeHPMC_b_MtrSystemActive;

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling' */
    /* Logic: '<S585>/OR1' incorporates:
     *  Constant: '<S569>/Constant'
     *  Logic: '<S536>/Logical'
     *  Logic: '<S536>/Logical1'
     *  Logic: '<S536>/Logical2'
     *  Logic: '<S538>/AND'
     *  Logic: '<S538>/OR1'
     *  Logic: '<S543>/AND'
     *  Logic: '<S543>/OR1'
     *  Logic: '<S585>/NOT'
     *  Logic: '<S585>/OR'
     *  Merge: '<S1074>/Merge1'
     *  RelationalOperator: '<S536>/Comparison1'
     *  RelationalOperator: '<S536>/Comparison10'
     *  RelationalOperator: '<S536>/Comparison4'
     *  UnitDelay: '<S538>/Unit Delay'
     *  UnitDelay: '<S543>/Unit Delay'
     *  UnitDelay: '<S585>/Unit Delay'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut'
     */
    VeHPMC_b_InvrtrsNotResponding = ((((((((uint32)VeHPMC_e_InvrtrASwitchCmd) ==
        CeHPMR_e_Enable) || (CeHPMR_e_Enable == ((uint32)
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1))) || (CeHPMR_e_Enable ==
        ((uint32)HPMR_ac_B.VeHPMR_e_InvrtrCSwitchCmd_Arb))) && rtb_OR35_m) &&
        ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
         (!HPMR_ac_DW.UnitDelay_DSTATE_f2))) ||
        (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
          (!HPMR_ac_DW.UnitDelay_DSTATE_gj)) && (HPMR_ac_DW.UnitDelay_DSTATE_cq)));

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S536>/EdgeRising' */

    /* Update for UnitDelay: '<S585>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cq = VeHPMC_b_InvrtrsNotResponding;

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset3' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling3' */
    /* Logic: '<S588>/OR1' incorporates:
     *  Constant: '<S573>/Constant'
     *  Logic: '<S536>/Logical11'
     *  Logic: '<S536>/Logical12'
     *  Logic: '<S541>/AND'
     *  Logic: '<S541>/OR1'
     *  Logic: '<S545>/AND'
     *  Logic: '<S545>/OR1'
     *  Logic: '<S588>/NOT'
     *  Logic: '<S588>/OR'
     *  RelationalOperator: '<S536>/Comparison5'
     *  RelationalOperator: '<S537>/Equal8'
     *  Switch: '<S7>/Switch1'
     *  UnitDelay: '<S536>/Unit Delay'
     *  UnitDelay: '<S541>/Unit Delay'
     *  UnitDelay: '<S545>/Unit Delay'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    VeHPMC_b_UnxpctdEngShtOff = ((((((uint32)VeHPMI_e_HybEngSysActv) ==
        CeESSR_e_HybEngDisabled) && (HPMR_ac_DW.UnitDelay_DSTATE_ipd)) &&
        ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
         (!HPMR_ac_DW.UnitDelay_DSTATE_gg))) ||
        (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
          (!HPMR_ac_DW.UnitDelay_DSTATE_aqu)) &&
         (HPMR_ac_DW.UnitDelay_DSTATE_mpa)));

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S536>/EdgeRising2' */

    /* Update for UnitDelay: '<S588>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mpa = VeHPMC_b_UnxpctdEngShtOff;

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset3' */

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset4' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling4' */
    /* Logic: '<S589>/OR1' incorporates:
     *  Logic: '<S542>/AND'
     *  Logic: '<S542>/OR1'
     *  Logic: '<S589>/NOT'
     *  Logic: '<S589>/OR'
     *  UnitDelay: '<S542>/Unit Delay'
     *  UnitDelay: '<S589>/Unit Delay'
     */
    rtb_AND_m4u = ((VeHPMC_b_MCP_SPT_Failure) ||
                   (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
                     (!HPMR_ac_DW.UnitDelay_DSTATE_gu)) &&
                    (HPMR_ac_DW.UnitDelay_DSTATE_i3)));

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling4' */

    /* Update for UnitDelay: '<S589>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_i3 = rtb_AND_m4u;

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling2' */
    /* Logic: '<S587>/OR1' incorporates:
     *  Logic: '<S536>/Logical10'
     *  Logic: '<S540>/AND'
     *  Logic: '<S540>/OR1'
     *  Logic: '<S544>/AND'
     *  Logic: '<S544>/OR1'
     *  Logic: '<S587>/NOT'
     *  Logic: '<S587>/OR'
     *  UnitDelay: '<S540>/Unit Delay'
     *  UnitDelay: '<S544>/Unit Delay'
     *  UnitDelay: '<S587>/Unit Delay'
     */
    VeHPMC_b_ImmoFailShutDwn = (((VeHPMC_b_ImmoStat_NotVldTmout) &&
        ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
         (!HPMR_ac_DW.UnitDelay_DSTATE_nh))) ||
        (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
          (!HPMR_ac_DW.UnitDelay_DSTATE_oyl)) && (HPMR_ac_DW.UnitDelay_DSTATE_gn)));

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S536>/EdgeRising1' */

    /* Update for UnitDelay: '<S587>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_gn = VeHPMC_b_ImmoFailShutDwn;

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset2' */

    /* Logic: '<S537>/AND22' incorporates:
     *  Constant: '<S643>/Calib'
     */
    rtb_AND22_k = ((VeHPMI_b_DsblInvB) && (KeHPMR_b_Enbl_SRARDsblINVB));

    /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
     *  Gain: '<S584>/Gain'
     *  Switch: '<S536>/Switch14'
     */
    VaHPMC_K_RsnForUnintndShtDwn2[0] = (sint16)(VeHPMR_b_CollisionDetection ? 1 :
        0);

    /* Switch: '<S536>/Switch15' */
    if (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value2'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[1] = 2;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value3'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[1] = 0;
    }

    /* End of Switch: '<S536>/Switch15' */

    /* Switch: '<S536>/Switch16' */
    if (VeHPMC_b_InvrtrsNotResponding)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value4'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[2] = 3;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value5'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[2] = 0;
    }

    /* End of Switch: '<S536>/Switch16' */

    /* Switch: '<S536>/Switch17' */
    if (VeHPMC_b_BattSysNotActv)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value6'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[3] = 4;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value7'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[3] = 0;
    }

    /* End of Switch: '<S536>/Switch17' */

    /* Switch: '<S536>/Switch18' */
    if (VeHPMC_b_BSW_SPT_Failure)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value8'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[4] = 5;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value9'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[4] = 0;
    }

    /* End of Switch: '<S536>/Switch18' */

    /* Switch: '<S536>/Switch19' */
    if (VeHPMC_b_DAPFA_OpenCntctr)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value10'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[5] = 6;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value11'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[5] = 0;
    }

    /* End of Switch: '<S536>/Switch19' */

    /* Switch: '<S536>/Switch20' */
    if (VeHPMC_b_UnxpctdEngShtOff)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value12'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[6] = 7;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value13'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[6] = 0;
    }

    /* End of Switch: '<S536>/Switch20' */

    /* Switch: '<S536>/Switch21' */
    if (HPMR_ac_B.LeHPMR_b_PrechargeFailure)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value14'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[7] = 8;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value15'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[7] = 0;
    }

    /* End of Switch: '<S536>/Switch21' */

    /* Switch: '<S536>/Switch22' */
    if (rtb_AND_m4u)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value16'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[8] = 9;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value17'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[8] = 0;
    }

    /* End of Switch: '<S536>/Switch22' */

    /* Switch: '<S536>/Switch23' */
    if (VeHPMC_b_ImmoFailShutDwn)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value18'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[9] = 10;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value19'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[9] = 0;
    }

    /* End of Switch: '<S536>/Switch23' */

    /* Switch: '<S536>/Switch24' */
    if (rtb_AND22_k)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value20'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[10] = 11;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value21'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[10] = 0;
    }

    /* End of Switch: '<S536>/Switch24' */

    /* Switch: '<S536>/Switch25' */
    if (VeHPMR_b_HVILFailThisKeyCycl)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value22'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[11] = 12;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value23'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[11] = 0;
    }

    /* End of Switch: '<S536>/Switch25' */

    /* Switch: '<S536>/Switch26' */
    if (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value24'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[12] = 13;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S536>/Constant Value25'
         *  Gain: '<S584>/Gain'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[12] = 0;
    }

    /* End of Switch: '<S536>/Switch26' */

    /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
     *  Gain: '<S584>/Gain'
     */
    VaHPMC_K_RsnForUnintndShtDwn2[13] = HPMR_ac_ConstB.Switch27_a;
    VaHPMC_K_RsnForUnintndShtDwn2[14] = HPMR_ac_ConstB.Switch28_f;

    /* Logic: '<S537>/Logical4' incorporates:
     *  Constant: '<S630>/Calib'
     *  Logic: '<S537>/Logical8'
     */
    VeHPMC_b_CntctrOpnAltMdReq = (((HPMR_ac_B.VeHPMR_b_FinalImpactSignal) ||
        (VeHPMR_b_ORC_LOCFlt_BSW)) && (KeHPMR_b_EnblAltMdImpact));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_UnintendedFltShtdwn' incorporates:
     *  Logic: '<S537>/AND18'
     *  Logic: '<S537>/AND9'
     */
    VeHPMR_b_UnintendedFltShtdwn = ((((((((((((rtb_Comparison2_jy ||
        (VeHPMR_b_FltShtDwnCmnd)) || (VeHPMR_b_HVILSpdCondMet)) ||
        (VeHPMR_b_BattCntctrReqMet)) || rtb_AND_j3) || (VeHPMR_b_MCPA_CoreFail))
        || (VeHPMR_b_MCPB_CoreFail)) || (VeHPMR_b_AHCP_CoreFail)) ||
        (VeHPMR_b_ORC_LOCFlt_BSW)) || rtb_UnitDelay_av) ||
        (rtb_VeHPMC_b_MtrAActv || rtb_AND22_k)) || rtb_UnitDelay_ik) ||
        (VeHPMC_b_CntctrOpnAltMdReq));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_UnintendedShtdwn' incorporates:
     *  Logic: '<S537>/AND4'
     */
    VeHPMR_b_UnintendedShtdwn = ((rtb_OR35_m || (VeHPMC_b_BattSysNotActv)) ||
        (VeHPMR_b_UnintendedFltShtdwn));

    /* Switch: '<S618>/Switch1' incorporates:
     *  Switch: '<S614>/Switch1'
     *  Switch: '<S615>/Switch1'
     *  Switch: '<S616>/Switch1'
     *  Switch: '<S617>/Switch1'
     *  Switch: '<S619>/Switch1'
     *  Switch: '<S620>/Switch1'
     *  Switch: '<S621>/Switch1'
     *  Switch: '<S622>/Switch1'
     *  Switch: '<S623>/Switch1'
     *  Switch: '<S624>/Switch1'
     *  Switch: '<S625>/Switch1'
     *  Switch: '<S626>/Switch1'
     *  Switch: '<S627>/Switch1'
     */
    if (rtb_Comparison2_jy)
    {
        /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  Constant: '<S601>/Constant'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_InverterFaulted;
    }
    else if (VeHPMR_b_FltShtDwnCmnd)
    {
        /* Switch: '<S623>/Switch1' incorporates:
         *  Constant: '<S596>/Constant'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_FltShtDwnCmnd;
    }
    else if (VeHPMR_b_HVILSpdCondMet)
    {
        /* Switch: '<S619>/Switch1' incorporates:
         *  Constant: '<S607>/Constant'
         *  Switch: '<S623>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_HVILOrSpeedCondMet;
    }
    else if (VeHPMR_b_BattCntctrReqMet)
    {
        /* Switch: '<S614>/Switch1' incorporates:
         *  Constant: '<S597>/Constant'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_BattCntctrReqMet;
    }
    else if (rtb_AND_j3)
    {
        /* Switch: '<S620>/Switch1' incorporates:
         *  Constant: '<S603>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_HVBatSrvcDisCnctFA;
    }
    else if (HPMR_ac_B.VeHPMR_b_FinalImpactSignal)
    {
        /* Switch: '<S621>/Switch1' incorporates:
         *  Constant: '<S604>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_CritFaultLatched;
    }
    else if (VeHPMC_b_CntctrsOpenAfterClose)
    {
        /* Switch: '<S622>/Switch1' incorporates:
         *  Constant: '<S605>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_CntctrsOpenAfterClose;
    }
    else if (VeHPMR_b_MCPA_CoreFail)
    {
        /* Switch: '<S624>/Switch1' incorporates:
         *  Constant: '<S609>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_MCPACoreFail;
    }
    else if (VeHPMR_b_MCPB_CoreFail)
    {
        /* Switch: '<S625>/Switch1' incorporates:
         *  Constant: '<S608>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  Switch: '<S624>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_MCPBCoreFail;
    }
    else if (VeHPMR_b_AHCP_CoreFail)
    {
        /* Switch: '<S626>/Switch1' incorporates:
         *  Constant: '<S610>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  Switch: '<S624>/Switch1'
         *  Switch: '<S625>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_AHCPCoreFail;
    }
    else if (VeHPMR_b_ORC_LOCFlt_BSW)
    {
        /* Switch: '<S627>/Switch1' incorporates:
         *  Constant: '<S598>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  Switch: '<S624>/Switch1'
         *  Switch: '<S625>/Switch1'
         *  Switch: '<S626>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_ORC_LossCommFA;
    }
    else if (rtb_UnitDelay_av)
    {
        /* Switch: '<S615>/Switch1' incorporates:
         *  Constant: '<S600>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  Switch: '<S624>/Switch1'
         *  Switch: '<S625>/Switch1'
         *  Switch: '<S626>/Switch1'
         *  Switch: '<S627>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_OpnBattCntctr;
    }
    else if (rtb_VeHPMC_b_MtrAActv)
    {
        /* Switch: '<S616>/Switch1' incorporates:
         *  Constant: '<S599>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S615>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  Switch: '<S624>/Switch1'
         *  Switch: '<S625>/Switch1'
         *  Switch: '<S626>/Switch1'
         *  Switch: '<S627>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_DisblINVA;
    }
    else if (rtb_UnitDelay_ik)
    {
        /* Switch: '<S617>/Switch1' incorporates:
         *  Constant: '<S602>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S615>/Switch1'
         *  Switch: '<S616>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  Switch: '<S624>/Switch1'
         *  Switch: '<S625>/Switch1'
         *  Switch: '<S626>/Switch1'
         *  Switch: '<S627>/Switch1'
         *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn =
            CeHPMR_e_InvrtrFlt_AllwCntctrCls;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  Constant: '<S606>/Constant'
         *  Switch: '<S614>/Switch1'
         *  Switch: '<S615>/Switch1'
         *  Switch: '<S616>/Switch1'
         *  Switch: '<S617>/Switch1'
         *  Switch: '<S619>/Switch1'
         *  Switch: '<S620>/Switch1'
         *  Switch: '<S621>/Switch1'
         *  Switch: '<S622>/Switch1'
         *  Switch: '<S623>/Switch1'
         *  Switch: '<S624>/Switch1'
         *  Switch: '<S625>/Switch1'
         *  Switch: '<S626>/Switch1'
         *  Switch: '<S627>/Switch1'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = CeHPMR_e_NoUnintndShtDwn;
    }

    /* End of Switch: '<S618>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_DAPFA_OpenCntctr' incorporates:
     *  Gain: '<S652>/Gain'
     */
    VeHPMR_b_DAPFA_OpenCntctr = VeHPMC_b_DAPFA_OpenCntctr;

    /* VariantMerge generated from: '<S374>/VeHPMC_b_InverterFaultedOut' incorporates:
     *  SignalConversion: '<S375>/Signal Copy'
     */
    VeHPMC_b_InverterFaultedOut = VeHPMR_b_InverterFaulted;

    /* Abs: '<S375>/Abs' */
    rtb_Switch1_a = fabsf(VeHPMI_I_HV_BatCurrArb);

    /* VariantMerge generated from: '<S374>/LeHPMR_b_BP_CurrOpenCondMetCrash' incorporates:
     *  Constant: '<S385>/Calib'
     *  RelationalOperator: '<S375>/Equal1'
     */
    VeHPMR_b_BP_CurrOpenCondMetCrash = (rtb_Switch1_a <=
        KeHPMR_I_ContactorPackCurrentCrash);

    /* VariantMerge generated from: '<S374>/LeHPMR_b_BP_CurrOpenCondMet' incorporates:
     *  Constant: '<S384>/Calib'
     *  RelationalOperator: '<S375>/Equal7'
     */
    VeHPMR_b_BP_CurrOpenCondMet = (rtb_Switch1_a <=
        KeHPMR_I_ContactorPackCurrent);

    /* End of Outputs for SubSystem: '<S374>/HPMC_DetHybSysStInputs' */
    /* End of Outputs for SubSystem: '<S5>/DetHybSysStInputs_Variant' */
#else

    /* Outputs for Atomic SubSystem: '<S374>/HPMC_DetHybSysStInputs_BEV' */
    /* VariantMerge generated from: '<S374>/LeHPMR_b_BattSysNotActv' incorporates:
     *  Constant: '<S666>/Calib'
     *  Logic: '<S656>/Logical'
     *  RelationalOperator: '<S656>/Comparison4'
     *  RelationalOperator: '<S656>/Equal7'
     *  Sum: '<S656>/Sum1'
     *  Switch: '<S7>/Switch39'
     */
    VeHPMC_b_BattSysNotActv = (((VeHPMI_P_BattLTMaxLim - VeHPMI_P_HV_AccPwr) <
        KeHPMR_P_BattSysNotActvThresh) && (((uint32)VeHPMI_e_EngStartStopSt) ==
        CeESSR_e_EngOff));

    /* Logic: '<S657>/AND1' incorporates:
     *  Logic: '<S376>/Logical2'
     *  Logic: '<S657>/OR7'
     *  RelationalOperator: '<S657>/Equal3'
     *  Switch: '<S7>/Switch13'
     */
    rtb_Comparison2_jy = ((((HPMR_ac_B.LeHPMC_b_ContactorsClosedThisKe) &&
                            (!VeHPMI_b_HV_BatCntctrStatFA)) && (((uint32)
        VeHPMI_e_HV_BatCntctrStat) != CeHVTR_e_Closed)) &&
                          (!VeHPMR_b_CommandContactorsOpenOld));

    /* Outputs for Atomic SubSystem: '<S657>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S673>/EdgeRising' */
    /* Logic: '<S677>/AND' incorporates:
     *  Logic: '<S677>/OR1'
     *  UnitDelay: '<S677>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_cj));

    /* Update for UnitDelay: '<S677>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cj = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S673>/EdgeRising' */

    /* Switch: '<S673>/Switch1' incorporates:
     *  Logic: '<S673>/OR'
     *  Logic: '<S673>/OR1'
     */
    if ((!rtb_Comparison2_jy) || rtb_AND22_k)
    {
        /* Switch: '<S673>/Switch1' incorporates:
         *  Constant: '<S673>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S673>/Switch1' incorporates:
         *  Constant: '<S672>/Calib'
         *  MinMax: '<S673>/Minimum'
         *  Sum: '<S673>/Summation'
         *  UnitDelay: '<S673>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_CntctrNotCloseDbnc,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_ae);
    }

    /* End of Switch: '<S673>/Switch1' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_CntctrsOpenAfterClose' incorporates:
     *  Constant: '<S672>/Calib'
     *  Logic: '<S673>/AND'
     *  RelationalOperator: '<S673>/Greater  Than'
     */
    VeHPMC_b_CntctrsOpenAfterClose = (rtb_Comparison2_jy && (rtb_Switch1_ne >=
        KeHPMR_t_CntctrNotCloseDbnc));

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ae = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S657>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_CntctrsOpenAfterClose1' incorporates:
     *  Logic: '<S670>/AND'
     */
    HPMR_ac_B.LeHPMR_b_CntctrsOpenAfterClose1 = VeHPMC_b_CntctrsOpenAfterClose;

    /* Logic: '<S658>/OR15' incorporates:
     *  Constant: '<S695>/Calib'
     *  Logic: '<S658>/OR16'
     *  Logic: '<S658>/OR6'
     *  RelationalOperator: '<S658>/Equal5'
     *  RelationalOperator: '<S658>/Equal6'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_InverterFaulted_Tmp1 = (((((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
        CeINVR_e_InverterFaulted) || (CeINVR_e_InverterFaulted == ((uint32)
        VeHPMI_e_MtrA_InvrtrSt))) && (!KeHPMR_b_InverterFaulted_Slctr));

    /* Logic: '<S658>/OR14' incorporates:
     *  Constant: '<S695>/Calib'
     *  Logic: '<S658>/OR10'
     *  Logic: '<S658>/OR11'
     *  Logic: '<S658>/OR12'
     *  RelationalOperator: '<S658>/Equal15'
     *  RelationalOperator: '<S658>/Equal16'
     *  RelationalOperator: '<S658>/Equal5'
     *  RelationalOperator: '<S658>/Equal6'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_InverterFaulted_Tmp2 = ((KeHPMR_b_InverterFaulted_Slctr) &&
        (((((uint32)VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_InverterFaulted) &&
          (VeHPMI_b_MtrBFlt_HV_CntctrOpnRq)) || ((((uint32)
        VeHPMI_e_MtrA_InvrtrSt) == CeINVR_e_InverterFaulted) &&
        (VeHPMI_b_MtrAFlt_HV_CntctrOpnRq))));

    /* Logic: '<S658>/OR13' */
    VeHPMR_b_InverterFaulted_Tmp3 = ((VeHPMR_b_InverterFaulted_Tmp1) ||
        (VeHPMR_b_InverterFaulted_Tmp2));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq' incorporates:
     *  Logic: '<S658>/OR17'
     *  Logic: '<S658>/OR18'
     *  RelationalOperator: '<S658>/Equal17'
     *  RelationalOperator: '<S658>/Equal5'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq = ((((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
        CeINVR_e_InverterFaulted) && (!VeHPMI_b_MtrBFlt_HV_CntctrOpnRq));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq' incorporates:
     *  Logic: '<S658>/OR20'
     *  Logic: '<S658>/OR21'
     *  RelationalOperator: '<S658>/Equal18'
     *  RelationalOperator: '<S658>/Equal6'
     *  Switch: '<S7>/Switch20'
     */
    VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq = ((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_InverterFaulted) && (!VeHPMI_b_MtrAFlt_HV_CntctrOpnRq));

    /* Logic: '<S658>/OR19' */
    rtb_Comparison2_jy = ((VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq) &&
                          (VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq));

    /* Logic: '<S658>/OR3' incorporates:
     *  Logic: '<S658>/OR4'
     *  Logic: '<S658>/OR5'
     *  RelationalOperator: '<S658>/Equal1'
     *  RelationalOperator: '<S658>/Equal2'
     *  RelationalOperator: '<S658>/Equal3'
     *  RelationalOperator: '<S658>/Equal4'
     *  RelationalOperator: '<S658>/Equal5'
     *  RelationalOperator: '<S658>/Equal6'
     *  RelationalOperator: '<S658>/Equal7'
     *  RelationalOperator: '<S658>/Equal8'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMR_b_InvertersDisabled_Tmp1 = ((((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOff) || (((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_InverterFaulted)) || (((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOnOvrd)) && (((((uint32)VeHPMI_e_MtrB_InvrtrSt)
        == CeINVR_e_NormalPowerStageOff) || (((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
        CeINVR_e_InverterFaulted)) || (((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
        CeINVR_e_NormalPowerStageOnOvrd)));

    /* Logic: '<S658>/OR8' incorporates:
     *  Constant: '<S693>/Calib'
     *  Constant: '<S694>/Calib'
     *  RelationalOperator: '<S658>/Equal13'
     *  RelationalOperator: '<S658>/Equal6'
     *  RelationalOperator: '<S658>/Greater  Than4'
     *  RelationalOperator: '<S658>/Greater  Than7'
     *  Switch: '<S7>/Switch20'
     */
    VeHPMC_b_MtrAActv = (((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
                           CeINVR_e_NormalPowerStageOn) &&
                          (VeHPMI_M_MtrA_MaxTorqRaw >=
                           KeHPMR_M_MaxMtrTorqPropEnbl)) &&
                         (VeHPMI_M_MtrA_MinTorqRaw <=
                          KeHPMR_M_MinMtrTorqPropEnbl));

    /* Logic: '<S658>/OR9' incorporates:
     *  Constant: '<S693>/Calib'
     *  Constant: '<S694>/Calib'
     *  RelationalOperator: '<S658>/Equal14'
     *  RelationalOperator: '<S658>/Equal5'
     *  RelationalOperator: '<S658>/Greater  Than5'
     *  RelationalOperator: '<S658>/Greater  Than6'
     *  Switch: '<S7>/Switch21'
     */
    VeHPMC_b_MtrBActv = (((((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
                           CeINVR_e_NormalPowerStageOn) &&
                          (VeHPMI_M_MtrB_MaxTorqRaw >=
                           KeHPMR_M_MaxMtrTorqPropEnbl)) &&
                         (VeHPMI_M_MtrB_MinTorqRaw <=
                          KeHPMR_M_MinMtrTorqPropEnbl));

    /* Logic: '<S658>/OR33' incorporates:
     *  Constant: '<S696>/Calib'
     *  Logic: '<S658>/OR30'
     */
    VeHPMR_b_InverterNormalPSOn_Tmp2 = (((VeHPMC_b_MtrAActv) ||
        (VeHPMC_b_MtrBActv)) && (KeHPMR_b_InverterNormlPSOn_Slctr));

    /* Logic: '<S658>/OR36' incorporates:
     *  Constant: '<S696>/Calib'
     *  Logic: '<S658>/OR32'
     *  Logic: '<S658>/OR34'
     */
    VeHPMR_b_InverterNormalPSOn_Tmp1 = ((!KeHPMR_b_InverterNormlPSOn_Slctr) &&
        ((VeHPMC_b_MtrAActv) && (VeHPMC_b_MtrBActv)));

    /* Logic: '<S658>/OR35' */
    rtb_AND22_k = ((VeHPMR_b_InverterNormalPSOn_Tmp2) ||
                   (VeHPMR_b_InverterNormalPSOn_Tmp1));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_MtrNotInActvDschrg' incorporates:
     *  Constant: '<S682>/Constant'
     *  Logic: '<S658>/OR7'
     *  RelationalOperator: '<S658>/Equal11'
     *  RelationalOperator: '<S658>/Equal12'
     *  RelationalOperator: '<S658>/Equal19'
     *  RelationalOperator: '<S658>/Equal5'
     *  RelationalOperator: '<S658>/Equal6'
     *  RelationalOperator: '<S658>/Equal9'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch94'
     *  Switch: '<S7>/Switch95'
     */
    VeHPMR_b_MtrNotInActvDschrg = ((((((uint32)VeHPMI_e_MtrB_InvrtrSt) !=
        CeINVR_e_ActiveDischarge) && (CeINVR_e_ActiveDischarge != ((uint32)
        VeHPMI_e_MtrA_InvrtrSt))) && (((uint32)VeHPMI_e_MtrA_Dschrge_Stat) !=
        CeINVR_e_AD_INPROGRESS)) && (CeINVR_e_AD_INPROGRESS != ((uint32)
        VeHPMI_e_MtrB_Dschrge_Stat)));

    /* Outputs for Atomic SubSystem: '<S658>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S701>/EdgeRising' */
    /* UnitDelay: '<S822>/Unit Delay' incorporates:
     *  UnitDelay: '<S747>/Unit Delay'
     */
    rtb_AND_j3 = HPMR_ac_DW.UnitDelay_DSTATE_kn;

    /* Update for UnitDelay: '<S747>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_kn = VeHPMR_b_InverterFaulted_Tmp3;

    /* Switch: '<S701>/Switch1' incorporates:
     *  Logic: '<S701>/OR'
     *  Logic: '<S701>/OR1'
     *  Logic: '<S747>/AND'
     *  Logic: '<S747>/OR1'
     */
    if ((!VeHPMR_b_InverterFaulted_Tmp3) || ((VeHPMR_b_InverterFaulted_Tmp3) &&
            (!rtb_AND_j3)))
    {
        /* Switch: '<S701>/Switch1' incorporates:
         *  Constant: '<S701>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S701>/Switch1' incorporates:
         *  Constant: '<S698>/Calib'
         *  MinMax: '<S701>/Minimum'
         *  Sum: '<S701>/Summation'
         *  UnitDelay: '<S701>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvrtrStDebounce, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_hn);
    }

    /* End of Switch: '<S701>/Switch1' */
    /* End of Outputs for SubSystem: '<S701>/EdgeRising' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_InverterFaulted' incorporates:
     *  Constant: '<S698>/Calib'
     *  Logic: '<S701>/AND'
     *  RelationalOperator: '<S701>/Greater  Than'
     */
    VeHPMR_b_InverterFaulted = ((VeHPMR_b_InverterFaulted_Tmp3) &&
        (rtb_Switch1_ne >= KeHPMR_t_InvrtrStDebounce));

    /* Update for UnitDelay: '<S701>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hn = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S658>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S374>/VeHPMC_b_InverterFaultedOut' incorporates:
     *  Gain: '<S699>/Gain'
     */
    VeHPMC_b_InverterFaultedOut = VeHPMR_b_InverterFaulted;

    /* Outputs for Atomic SubSystem: '<S658>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S700>/EdgeFalling' */
    /* Logic: '<S746>/AND' incorporates:
     *  Logic: '<S746>/OR1'
     *  UnitDelay: '<S746>/Unit Delay'
     */
    rtb_AND_j3 = ((!rtb_AND22_k) && (HPMR_ac_DW.UnitDelay_DSTATE_mv));

    /* Update for UnitDelay: '<S746>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mv = rtb_AND22_k;

    /* End of Outputs for SubSystem: '<S700>/EdgeFalling' */

    /* Switch: '<S700>/Switch' */
    if (rtb_AND_j3)
    {
        /* Switch: '<S700>/Switch' incorporates:
         *  Constant: '<S698>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_InvrtrStDebounce;
    }
    else
    {
        /* Switch: '<S700>/Switch' incorporates:
         *  Constant: '<S700>/Constant Value1'
         *  MinMax: '<S700>/Minimum'
         *  Sum: '<S700>/Summation'
         *  UnitDelay: '<S700>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_ot -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S700>/Switch' */

    /* VariantMerge generated from: '<S374>/VeHPMC_b_MtrSystemActive' incorporates:
     *  Constant: '<S700>/Constant Value2'
     *  Logic: '<S700>/AND'
     *  RelationalOperator: '<S700>/Greater  Than'
     */
    VeHPMC_b_MtrSystemActive = (rtb_AND22_k || (rtb_Switch1_ne > 0.0F));

    /* Update for UnitDelay: '<S700>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ot = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S658>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S658>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S702>/EdgeRising' */
    /* UnitDelay: '<S822>/Unit Delay' incorporates:
     *  UnitDelay: '<S748>/Unit Delay'
     */
    rtb_AND_j3 = HPMR_ac_DW.UnitDelay_DSTATE_lgn;

    /* Update for UnitDelay: '<S748>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_lgn = VeHPMR_b_InvertersDisabled_Tmp1;

    /* Switch: '<S702>/Switch1' incorporates:
     *  Logic: '<S702>/OR'
     *  Logic: '<S702>/OR1'
     *  Logic: '<S748>/AND'
     *  Logic: '<S748>/OR1'
     */
    if ((!VeHPMR_b_InvertersDisabled_Tmp1) || ((VeHPMR_b_InvertersDisabled_Tmp1)
         && (!rtb_AND_j3)))
    {
        /* Switch: '<S702>/Switch1' incorporates:
         *  Constant: '<S702>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S702>/Switch1' incorporates:
         *  Constant: '<S697>/Calib'
         *  MinMax: '<S702>/Minimum'
         *  Sum: '<S702>/Summation'
         *  UnitDelay: '<S702>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvertersDisabledDbnc,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_as);
    }

    /* End of Switch: '<S702>/Switch1' */
    /* End of Outputs for SubSystem: '<S702>/EdgeRising' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_InvertersDisabled' incorporates:
     *  Constant: '<S697>/Calib'
     *  Logic: '<S702>/AND'
     *  RelationalOperator: '<S702>/Greater  Than'
     */
    VeHPMR_b_InvertersDisabled = ((VeHPMR_b_InvertersDisabled_Tmp1) &&
        (rtb_Switch1_ne >= KeHPMR_t_InvertersDisabledDbnc));

    /* Update for UnitDelay: '<S702>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_as = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S658>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S658>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S703>/EdgeRising' */
    /* Logic: '<S749>/AND' incorporates:
     *  Logic: '<S749>/OR1'
     *  UnitDelay: '<S749>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_hc));

    /* Update for UnitDelay: '<S749>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hc = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S703>/EdgeRising' */

    /* Switch: '<S703>/Switch1' incorporates:
     *  Logic: '<S703>/OR'
     *  Logic: '<S703>/OR1'
     */
    if ((!rtb_Comparison2_jy) || rtb_AND22_k)
    {
        /* Switch: '<S703>/Switch1' incorporates:
         *  Constant: '<S703>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S703>/Switch1' incorporates:
         *  Constant: '<S698>/Calib'
         *  MinMax: '<S703>/Minimum'
         *  Sum: '<S703>/Summation'
         *  UnitDelay: '<S703>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_InvrtrStDebounce, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_ih);
    }

    /* End of Switch: '<S703>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_InvrtrFlt_AllwCntctrCls' incorporates:
     *  Constant: '<S698>/Calib'
     *  Logic: '<S703>/AND'
     *  RelationalOperator: '<S703>/Greater  Than'
     */
    VeHPMR_b_InvrtrFlt_AllwCntctrCls = (rtb_Comparison2_jy && (rtb_Switch1_ne >=
        KeHPMR_t_InvrtrStDebounce));

    /* Update for UnitDelay: '<S703>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ih = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S658>/Turn On Delay Time2' */

    /* Outputs for Atomic SubSystem: '<S659>/Stop Watch Reset Enabled' */
    /* Switch: '<S756>/Switch2' incorporates:
     *  DataStoreRead: '<S659>/Data Store Read'
     *  Logic: '<S659>/Logical'
     *  Logic: '<S659>/Logical2'
     *  Switch: '<S756>/Switch'
     */
    if ((!EeHPMR_b_ORC_LOCFA) || (!VeHPMI_b_RunCrankActive))
    {
        /* Switch: '<S756>/Switch' incorporates:
         *  Constant: '<S756>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S756>/Switch' incorporates:
         *  Sum: '<S756>/Subtraction'
         *  Switch: '<S756>/Switch2'
         *  UnitDelay: '<S756>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_bs;
    }

    /* End of Switch: '<S756>/Switch2' */

    /* Update for UnitDelay: '<S756>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bs = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S659>/Stop Watch Reset Enabled' */

    /* Switch: '<S659>/Switch52' incorporates:
     *  Constant: '<S752>/Calib'
     */
    if (KeHPMR_b_ORCLOC_Src)
    {
        /* VariantMerge generated from: '<S374>/VeHPMC_b_ORC_LOCFault' */
        HPMR_ac_B.VariantMergeForOutportVeHPMC__n = VeHPMI_b_ORCLOC_ImpactRing;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VeHPMC_b_ORC_LOCFault' */
        HPMR_ac_B.VariantMergeForOutportVeHPMC__n = VeHPMI_b_LossCommwORC;
    }

    /* End of Switch: '<S659>/Switch52' */

    /* If: '<S659>/If' incorporates:
     *  Constant: '<S753>/Calib'
     *  DataStoreRead: '<S659>/Data Store Read1'
     *  Logic: '<S659>/Logical1'
     *  RelationalOperator: '<S659>/Comparison'
     */
    if ((rtb_Switch1_ne >= KeHPMR_t_ORCLoCDetTm_BSW) && (EeHPMR_b_ORC_LOCFA))
    {
        /* Outputs for IfAction SubSystem: '<S659>/ORCLOC_Detrmnd' incorporates:
         *  ActionPort: '<S754>/Action Port'
         */
        /* If: '<S754>/If' */
        if (HPMR_ac_B.VariantMergeForOutportVeHPMC__n)
        {
            /* Outputs for IfAction SubSystem: '<S754>/LOC_Dtctd_NoClr' incorporates:
             *  ActionPort: '<S757>/Action Port'
             */
            HPMR_ac_LOC_Dtctd_NoClr((&(VeHPMC_b_LossCommORC)));

            /* End of Outputs for SubSystem: '<S754>/LOC_Dtctd_NoClr' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S754>/NoLOC_Clr_Memory' incorporates:
             *  ActionPort: '<S758>/Action Port'
             */
            HPMR_ac_NoLOC_Clr_Memory((&(VeHPMC_b_LossCommORC)));

            /* End of Outputs for SubSystem: '<S754>/NoLOC_Clr_Memory' */
        }

        /* End of If: '<S754>/If' */
        /* End of Outputs for SubSystem: '<S659>/ORCLOC_Detrmnd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S659>/ORCLOC_NotDtrmnd' incorporates:
         *  ActionPort: '<S755>/Action Port'
         */
        HPMR_ac_ORCLOC_NotDtrmnd((&(VeHPMC_b_LossCommORC)));

        /* End of Outputs for SubSystem: '<S659>/ORCLOC_NotDtrmnd' */
    }

    /* End of If: '<S659>/If' */

    /* If: '<S659>/If1' incorporates:
     *  Constant: '<S751>/Calib'
     */
    if (KeHPMR_b_ClrORCLossCommMem)
    {
        /* Outputs for IfAction SubSystem: '<S659>/Clr_ORCLOC_Mem' incorporates:
         *  ActionPort: '<S750>/Action Port'
         */
        HPMR_ac_Clr_ORCLOC_Mem();

        /* End of Outputs for SubSystem: '<S659>/Clr_ORCLOC_Mem' */
    }

    /* End of If: '<S659>/If1' */

    /* Abs: '<S773>/Abs1' incorporates:
     *  Abs: '<S660>/Abs2'
     */
    rtb_Switch1_ne = fabsf(VeHPMI_n_MtrA_Spd);

    /* Abs: '<S376>/Abs' incorporates:
     *  Abs: '<S660>/Abs1'
     */
    rtb_Abs = fabsf(VeHPMI_n_MtrB_Spd);

    /* Logic: '<S660>/AND2' incorporates:
     *  Constant: '<S763>/Calib'
     *  RelationalOperator: '<S660>/Equal4'
     *  RelationalOperator: '<S660>/Equal5'
     */
    rtb_Comparison2_jy = ((rtb_Switch1_ne < KeHPMR_n_MtrShtDwnSpd) && (rtb_Abs <
                           KeHPMR_n_MtrShtDwnSpd));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_HighMtrSpdActv' incorporates:
     *  Constant: '<S762>/Calib'
     *  Logic: '<S660>/AND3'
     *  RelationalOperator: '<S660>/Equal3'
     *  RelationalOperator: '<S660>/Equal6'
     */
    HPMR_ac_B.LeHPMR_b_HighMtrSpdActv = ((rtb_Switch1_ne >=
        KeHPMR_n_MaxMtrSpdForStrt) || (rtb_Abs >= KeHPMR_n_MaxMtrSpdForStrt));

    /* Outputs for Atomic SubSystem: '<S660>/EdgeFalling' */
    /* Logic: '<S759>/AND' incorporates:
     *  Logic: '<S759>/OR1'
     *  UnitDelay: '<S759>/Unit Delay'
     */
    rtb_AND22_k = ((!rtb_Comparison2_jy) && (HPMR_ac_DW.UnitDelay_DSTATE_mn));

    /* Update for UnitDelay: '<S759>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mn = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S660>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S660>/Stop Watch Reset Enabled' */
    /* Switch: '<S769>/Switch' incorporates:
     *  Switch: '<S769>/Switch2'
     */
    if (rtb_AND22_k)
    {
        /* Switch: '<S769>/Switch' incorporates:
         *  Constant: '<S769>/Constant Value2'
         */
        rtb_Switch1_a = 0.0F;
    }
    else if (rtb_Comparison2_jy)
    {
        /* Switch: '<S769>/Switch2' incorporates:
         *  Sum: '<S769>/Subtraction'
         *  Switch: '<S769>/Switch'
         *  UnitDelay: '<S769>/Unit Delay'
         */
        rtb_Switch1_a = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_ip;
    }
    else
    {
        /* Switch: '<S769>/Switch' incorporates:
         *  Switch: '<S769>/Switch2'
         *  UnitDelay: '<S769>/Unit Delay'
         */
        rtb_Switch1_a = HPMR_ac_DW.UnitDelay_DSTATE_ip;
    }

    /* End of Switch: '<S769>/Switch' */

    /* Update for UnitDelay: '<S769>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ip = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S660>/Stop Watch Reset Enabled' */

    /* Abs: '<S773>/Abs1' */
    rtb_Switch1_ne = fabsf(VeHPMI_v_VehicleSigned);

    /* Outputs for Atomic SubSystem: '<S660>/Stop Watch Reset Enabled1' */
    /* Switch: '<S770>/Switch2' incorporates:
     *  Constant: '<S768>/Calib'
     *  Logic: '<S660>/Logical3'
     *  RelationalOperator: '<S660>/Equal7'
     *  Switch: '<S770>/Switch'
     */
    if (rtb_Switch1_ne >= KeHPMR_v_VehSpd_ActvDschg)
    {
        /* Switch: '<S770>/Switch' incorporates:
         *  Constant: '<S770>/Constant Value2'
         */
        rtb_Switch1_d3 = 0.0F;
    }
    else
    {
        /* Switch: '<S770>/Switch' incorporates:
         *  Sum: '<S770>/Subtraction'
         *  Switch: '<S770>/Switch2'
         *  UnitDelay: '<S770>/Unit Delay'
         */
        rtb_Switch1_d3 = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S770>/Switch2' */

    /* Update for UnitDelay: '<S770>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_d3;

    /* End of Outputs for SubSystem: '<S660>/Stop Watch Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S660>/Stop Watch Reset Enabled2' */
    /* Switch: '<S771>/Switch2' incorporates:
     *  Constant: '<S765>/Calib'
     *  Logic: '<S660>/Logical4'
     *  RelationalOperator: '<S660>/Equal8'
     *  Switch: '<S771>/Switch'
     */
    if (rtb_Abs >= KeHPMR_n_MtrSpd_ActvDschg)
    {
        /* Switch: '<S771>/Switch' incorporates:
         *  Constant: '<S771>/Constant Value2'
         */
        rtb_Abs = 0.0F;
    }
    else
    {
        /* Switch: '<S771>/Switch' incorporates:
         *  Sum: '<S771>/Subtraction'
         *  Switch: '<S771>/Switch2'
         *  UnitDelay: '<S771>/Unit Delay'
         */
        rtb_Abs = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_bh;
    }

    /* End of Switch: '<S771>/Switch2' */

    /* Update for UnitDelay: '<S771>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bh = rtb_Abs;

    /* End of Outputs for SubSystem: '<S660>/Stop Watch Reset Enabled2' */

    /* Switch: '<S660>/Switch' incorporates:
     *  Constant: '<S660>/TRUE Constant2'
     *  Constant: '<S766>/Calib'
     *  Logic: '<S660>/Logical1'
     *  RelationalOperator: '<S660>/Comparison'
     *  RelationalOperator: '<S660>/Comparison1'
     *  RelationalOperator: '<S660>/Comparison4'
     */
    if ((VeHPMI_b_MtrA_SpdFA) || (VeHPMI_b_MtrB_SpdFA))
    {
        tmpRead_1y = true;
    }
    else
    {
        tmpRead_1y = (rtb_Switch1_a > KeHPMR_t_ShtdwnMtrSpdTime);
    }

    /* End of Switch: '<S660>/Switch' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_ShtdwnMtrSpdMet' incorporates:
     *  Constant: '<S760>/Calib'
     *  Logic: '<S660>/Logical2'
     */
    HPMR_ac_B.LeHPMR_b_ShtdwnMtrSpdMet = (tmpRead_1y ||
        (KeHPMR_b_DsblMtrShtDwnSpd));

    /* Switch: '<S660>/Switch1' incorporates:
     *  Constant: '<S767>/Calib'
     *  RelationalOperator: '<S660>/Comparison2'
     *  RelationalOperator: '<S660>/Comparison3'
     */
    if (VeHPMI_b_MtrB_SpdFA)
    {
        tmpRead_1y = (rtb_Switch1_d3 > KeHPMR_t_SpdThreshTm_ActvDschg);
    }
    else
    {
        tmpRead_1y = (rtb_Abs > KeHPMR_t_SpdThreshTm_ActvDschg);
    }

    /* End of Switch: '<S660>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_SpdCondMetActvDschg' incorporates:
     *  Constant: '<S761>/Calib'
     *  Logic: '<S660>/Logical5'
     */
    VeHPMR_b_SpdCondMetActvDschg = (tmpRead_1y || (KeHPMR_b_OvrdSpdChk_ActvDschg));

    /* Logic: '<S773>/AND16' incorporates:
     *  Constant: '<S977>/Calib'
     */
    rtb_Comparison2_jy = ((VeHPMR_b_InverterFaulted) &&
                          (KeHPMR_b_Enbl_InverterFaulted));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_FltShtDwnCmnd' incorporates:
     *  Constant: '<S974>/Calib'
     *  Logic: '<S773>/AND1'
     */
    VeHPMR_b_FltShtDwnCmnd = ((VeHPMI_b_FltShtDwnCmnd) &&
        (KeHPMR_b_Enbl_FltShtDwnCmnd));

    /* Logic: '<S773>/Logical6' incorporates:
     *  Constant: '<S973>/Calib'
     */
    rtb_AND22_k = ((VeHPMI_b_DAPFA_OpenCntctr) && (KeHPMR_b_Enbl_DAPFA_OpnCntctr));

    /* Outputs for Atomic SubSystem: '<S773>/Stop Watch Reset Enabled' */
    /* Switch: '<S993>/Switch2' incorporates:
     *  Logic: '<S773>/Logical2'
     *  Logic: '<S773>/OR5'
     *  RelationalOperator: '<S773>/Equal1'
     *  RelationalOperator: '<S773>/Equal4'
     *  Switch: '<S7>/Switch24'
     *  Switch: '<S993>/Switch'
     */
    if ((((uint32)VeHPMI_e_VldtdTransRngSt) != CeTRGR_e_TransRangeNeutral) &&
            (((uint32)VeHPMI_e_VldtdTransRngSt) != CeTRGR_e_TransRangePark))
    {
        /* Switch: '<S993>/Switch' incorporates:
         *  Constant: '<S993>/Constant Value2'
         */
        rtb_Switch1_a = 0.0F;
    }
    else
    {
        /* Switch: '<S993>/Switch' incorporates:
         *  Sum: '<S993>/Subtraction'
         *  Switch: '<S993>/Switch2'
         *  UnitDelay: '<S993>/Unit Delay'
         */
        rtb_Switch1_a = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S993>/Switch2' */

    /* Update for UnitDelay: '<S993>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ir = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S773>/Stop Watch Reset Enabled' */

    /* Switch: '<S773>/Switch1' incorporates:
     *  Constant: '<S971>/Calib'
     *  Logic: '<S773>/OR2'
     *  Logic: '<S773>/OR3'
     */
    if (KeHPMR_b_RotSftFALogicSlct)
    {
        tmpRead_1y = ((VeHPMI_b_Prmry_TransShiftPstnFA) &&
                      (VeHPMI_b_Scndry_TransShiftPstnFA));
    }
    else
    {
        tmpRead_1y = ((VeHPMI_b_Prmry_TransShiftPstnFA) ||
                      (VeHPMI_b_Scndry_TransShiftPstnFA));
    }

    /* End of Switch: '<S773>/Switch1' */

    /* Switch: '<S773>/Switch' incorporates:
     *  Constant: '<S986>/Calib'
     */
    if (KeHPMR_b_HoodOpenSlct)
    {
        rtb_AND_j3 = VeHPMI_b_HoodOpen;
    }
    else
    {
        rtb_AND_j3 = VeHPMI_b_ECMHoodOpen;
    }

    /* End of Switch: '<S773>/Switch' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_HVILSpdCondMet' incorporates:
     *  Constant: '<S968>/Calib'
     *  Constant: '<S970>/Calib'
     *  Constant: '<S975>/Calib'
     *  Constant: '<S987>/Calib'
     *  Constant: '<S988>/Calib'
     *  Constant: '<S989>/Calib'
     *  Constant: '<S991>/Calib'
     *  Logic: '<S773>/AND5'
     *  Logic: '<S773>/AND6'
     *  Logic: '<S773>/Logical'
     *  Logic: '<S773>/Logical1'
     *  Logic: '<S773>/Logical11'
     *  Logic: '<S773>/Logical12'
     *  Logic: '<S773>/Logical13'
     *  Logic: '<S773>/Logical3'
     *  Logic: '<S773>/Logical4'
     *  Logic: '<S773>/Logical5'
     *  Logic: '<S773>/Logical9'
     *  Logic: '<S773>/OR1'
     *  RelationalOperator: '<S773>/Comparison'
     *  RelationalOperator: '<S773>/Equal2'
     *  RelationalOperator: '<S773>/Equal3'
     *  RelationalOperator: '<S773>/Equal4'
     *  RelationalOperator: '<S773>/Equal6'
     *  RelationalOperator: '<S773>/Equal7'
     *  RelationalOperator: '<S773>/Equal9'
     *  Switch: '<S7>/Switch22'
     *  Switch: '<S7>/Switch24'
     */
    VeHPMR_b_HVILSpdCondMet = ((((((rtb_AND22_k && (KeHPMR_b_MergeDAPwHVIL)) ||
        ((((uint32)VeHPMI_e_HV_IntrlkStat) == CeHVTR_e_IntrlkFailed) &&
         (((uint32)VeHPMI_e_HV_IntrlkStat) != CeHVTR_e_IntrlkNotSourced))) &&
        ((rtb_Switch1_ne <= KeHPMR_v_CntctrOpenVehSpd) || (VeHPMI_b_VehSpdFA))) &&
        ((((rtb_Switch1_a > KeHPMR_t_HVIL_PNDelay) || ((((uint32)
        VeHPMI_e_VldtdTransRngSt) == CeTRGR_e_NoSelectionAvailable) || (((uint32)
        VeHPMI_e_VldtdTransRngSt) == CeTRGR_e_TransRangeIllegal))) || tmpRead_1y)
         || (VeHPMI_b_TransmissionFailSts))) && (((KeHPMR_b_OvrdHoodSw) ||
        ((KeHPMR_b_EnblPSACond_HdSw) && (!VeHPMC_b_PropulsionSystemActive))) ||
        ((KeHPMR_b_EnableHoodSw) && rtb_AND_j3))) && (KeHPMR_b_Enbl_HVILSpdCond));

    /* VariantMerge generated from: '<S374>/LeHPMR_b_HV_BatCntctrOpenReq' incorporates:
     *  Constant: '<S967>/Calib'
     *  Logic: '<S773>/AND11'
     *  Logic: '<S773>/AND12'
     */
    VeHPMR_b_HV_BatCntctrOpenReq = ((VeHPMI_b_HV_BatCntctrOpenReq) &&
        (!KeHPMR_b_DsblBP_ReqOpen));

    /* Outputs for Atomic SubSystem: '<S773>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S994>/EdgeRising' */
    /* Logic: '<S1064>/AND' incorporates:
     *  Logic: '<S1064>/OR1'
     *  UnitDelay: '<S1064>/Unit Delay'
     */
    rtb_AND_j3 = ((VeHPMR_b_HV_BatCntctrOpenReq) &&
                  (!HPMR_ac_DW.UnitDelay_DSTATE_h5));

    /* Update for UnitDelay: '<S1064>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_h5 = VeHPMR_b_HV_BatCntctrOpenReq;

    /* End of Outputs for SubSystem: '<S994>/EdgeRising' */

    /* Switch: '<S994>/Switch1' incorporates:
     *  Logic: '<S994>/OR'
     *  Logic: '<S994>/OR1'
     */
    if ((!VeHPMR_b_HV_BatCntctrOpenReq) || rtb_AND_j3)
    {
        /* Switch: '<S994>/Switch1' incorporates:
         *  Constant: '<S994>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S994>/Switch1' incorporates:
         *  Constant: '<S990>/Calib'
         *  MinMax: '<S994>/Minimum'
         *  Sum: '<S994>/Summation'
         *  UnitDelay: '<S994>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_ReqOpenLowVehSpd, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_k2);
    }

    /* End of Switch: '<S994>/Switch1' */

    /* Update for UnitDelay: '<S994>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_k2 = rtb_Switch1_ne;

    /* Logic: '<S773>/Logical10' incorporates:
     *  Constant: '<S990>/Calib'
     *  Logic: '<S773>/AND3'
     *  Logic: '<S773>/AND7'
     *  Logic: '<S994>/AND'
     *  RelationalOperator: '<S773>/Equal8'
     *  RelationalOperator: '<S994>/Greater  Than'
     *  Switch: '<S7>/Switch1'
     */
    rtb_AND_j3 = ((((VeHPMR_b_HV_BatCntctrOpenReq) && (rtb_Switch1_ne >=
                     KeHPMR_t_ReqOpenLowVehSpd)) &&
                   (VeHPMR_b_HV_BatCntctrOpenReq)) || ((((uint32)
                     VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) &&
                   (VeHPMR_b_HV_BatCntctrOpenReq)));

    /* End of Outputs for SubSystem: '<S773>/Turn On Delay Time1' */

    /* Logic: '<S773>/AND23' incorporates:
     *  Constant: '<S976>/Calib'
     *  RelationalOperator: '<S773>/Equal5'
     *  Switch: '<S7>/Switch88'
     */
    VeHPMC_b_HV_IntrnlIntrlkStatFail = ((((uint32)VeHPMI_e_HV_IntrnlIntrlkStat) ==
        CeBPCR_e_HVBatIntrlkFail) && (KeHPMR_b_Enbl_HV_IntrnlIntrk_Chk));

    /* Logic: '<S773>/AND8' incorporates:
     *  Constant: '<S985>/Calib'
     */
    rtb_UnitDelay_av = ((VeHPMI_b_HVBatSrvcDisCnctFA) &&
                        (KeHPMR_b_HVBatSrvcDisCnct));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_CritFaultLatched' incorporates:
     *  Inport: '<S376>/VeIMPR_b_HighVoltageRapidShtdwnCmnd'
     */
    HPMR_ac_B.VeHPMR_b_FinalImpactSignal = VeHPMI_b_HighVoltageRapidShtdwn;

    /* Outputs for Atomic SubSystem: '<S772>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeFalling1' */
    /* Logic: '<S821>/OR1' incorporates:
     *  Logic: '<S772>/Logical7'
     *  Logic: '<S775>/AND'
     *  Logic: '<S775>/OR1'
     *  Logic: '<S821>/NOT'
     *  Logic: '<S821>/OR'
     *  UnitDelay: '<S775>/Unit Delay'
     *  UnitDelay: '<S821>/Unit Delay'
     */
    rtb_VeHPMC_b_MtrAActv = (((VeHPMC_b_CntctrsOpenAfterClose) &&
        (HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h)) ||
        (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
          (!HPMR_ac_DW.UnitDelay_DSTATE_pn)) && (HPMR_ac_DW.UnitDelay_DSTATE_d2)));

    /* End of Outputs for SubSystem: '<S772>/EdgeFalling1' */

    /* Update for UnitDelay: '<S821>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_d2 = rtb_VeHPMC_b_MtrAActv;

    /* End of Outputs for SubSystem: '<S772>/Signal Latch On With Reset1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MCPA_CoreFail' incorporates:
     *  Constant: '<S979>/Calib'
     *  Logic: '<S773>/AND10'
     */
    VeHPMR_b_MCPA_CoreFail = (VeHPMI_b_MCPA_CoreFail &&
        (KeHPMR_b_Enbl_MCPA_CoreFail));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_MCPB_CoreFail' incorporates:
     *  Constant: '<S980>/Calib'
     *  Logic: '<S773>/AND14'
     */
    VeHPMR_b_MCPB_CoreFail = ((VeHPMI_b_MCPB_CoreFail) &&
        (KeHPMR_b_Enbl_MCPB_CoreFail));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_AHCP_CoreFail' incorporates:
     *  Constant: '<S972>/Calib'
     *  Logic: '<S773>/AND13'
     */
    VeHPMR_b_AHCP_CoreFail = ((VeHPMI_b_AHCP_CoreFail) &&
        (KeHPMR_b_Enbl_AHCP_CoreFail));

    /* Logic: '<S773>/AND15' incorporates:
     *  Constant: '<S981>/Calib'
     */
    VeHPMI_b_HighVoltageRapidShtdwn =
        ((HPMR_ac_B.VariantMergeForOutportVeHPMC__n) &&
         (KeHPMR_b_Enbl_ORC_LOCFlt));

    /* Logic: '<S773>/AND17' incorporates:
     *  Constant: '<S984>/Calib'
     */
    VeHPMI_b_MCPA_CoreFail = ((VeHPMI_b_OpnBattCntctr) &&
        (KeHPMR_b_Enbl_SRAROpnCntctr));

    /* Logic: '<S773>/AND19' incorporates:
     *  Constant: '<S982>/Calib'
     */
    rtb_UnitDelay_ik = ((VeHPMI_b_DsblInvA) && (KeHPMR_b_Enbl_SRARDsblINVA));

    /* Logic: '<S773>/AND20' incorporates:
     *  Constant: '<S978>/Calib'
     */
    rtb_AND_m4u = ((VeHPMR_b_InvrtrFlt_AllwCntctrCls) &&
                   (KeHPMR_b_Enbl_InvrtrFlt_AllwCntctrCls));

    /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
     *  DataTypeConversion: '<S772>/Data Type Conversion'
     */
    HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[0] = 0;

    /* Switch: '<S772>/Switch' */
    if (rtb_Comparison2_jy)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[1] = 1;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[1] = 0;
    }

    /* End of Switch: '<S772>/Switch' */

    /* Switch: '<S772>/Switch1' */
    if (VeHPMR_b_FltShtDwnCmnd)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[2] = 2;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[2] = 0;
    }

    /* End of Switch: '<S772>/Switch1' */

    /* Switch: '<S772>/Switch2' */
    if (VeHPMR_b_HVILSpdCondMet)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[3] = 3;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[3] = 0;
    }

    /* End of Switch: '<S772>/Switch2' */

    /* Switch: '<S772>/Switch13' */
    if (rtb_AND_j3)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[4] = 4;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[4] = 0;
    }

    /* End of Switch: '<S772>/Switch13' */

    /* Switch: '<S772>/Switch12' incorporates:
     *  Logic: '<S772>/Logical13'
     */
    if ((VeHPMC_b_HV_IntrnlIntrlkStatFail) || rtb_UnitDelay_av)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[5] = 5;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[5] = 0;
    }

    /* End of Switch: '<S772>/Switch12' */

    /* Switch: '<S772>/Switch11' */
    if (HPMR_ac_B.VeHPMR_b_FinalImpactSignal)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[6] = 6;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[6] = 0;
    }

    /* End of Switch: '<S772>/Switch11' */

    /* Switch: '<S772>/Switch10' */
    if (rtb_VeHPMC_b_MtrAActv)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[7] = 7;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[7] = 0;
    }

    /* End of Switch: '<S772>/Switch10' */

    /* Switch: '<S772>/Switch9' */
    if (VeHPMR_b_MCPA_CoreFail)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[8] = 8;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[8] = 0;
    }

    /* End of Switch: '<S772>/Switch9' */

    /* Switch: '<S772>/Switch8' */
    if (VeHPMR_b_MCPB_CoreFail)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[9] = 9;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[9] = 0;
    }

    /* End of Switch: '<S772>/Switch8' */

    /* Switch: '<S772>/Switch7' */
    if (VeHPMR_b_AHCP_CoreFail)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[10] = 10;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[10] = 0;
    }

    /* End of Switch: '<S772>/Switch7' */

    /* Switch: '<S772>/Switch6' */
    if (VeHPMI_b_HighVoltageRapidShtdwn)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[11] = 11;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[11] = 0;
    }

    /* End of Switch: '<S772>/Switch6' */

    /* Switch: '<S772>/Switch5' */
    if (VeHPMI_b_MCPA_CoreFail)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[12] = 12;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[12] = 0;
    }

    /* End of Switch: '<S772>/Switch5' */

    /* Switch: '<S772>/Switch4' */
    if (rtb_UnitDelay_ik)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[13] = 13;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[13] = 0;
    }

    /* End of Switch: '<S772>/Switch4' */

    /* Switch: '<S772>/Switch3' */
    if (rtb_AND_m4u)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[14] = 14;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn1' incorporates:
         *  DataTypeConversion: '<S772>/Data Type Conversion'
         */
        HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1[14] = 0;
    }

    /* End of Switch: '<S772>/Switch3' */

    /* VariantMerge generated from: '<S374>/LeHPMR_b_RapidShutdownOcc' incorporates:
     *  Constant: '<S664>/Calib'
     *  Logic: '<S376>/OR6'
     */
    VeHPMR_b_CollisionDetection = ((KeHPMR_b_RapidShtdwnActive) &&
        (HPMR_ac_B.VeHPMR_b_FinalImpactSignal));

    /* Outputs for Atomic SubSystem: '<S772>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeFalling' */
    /* Logic: '<S820>/OR1' incorporates:
     *  Logic: '<S772>/Logical'
     *  Logic: '<S772>/Logical1'
     *  Logic: '<S772>/Logical2'
     *  Logic: '<S774>/AND'
     *  Logic: '<S774>/OR1'
     *  Logic: '<S779>/AND'
     *  Logic: '<S779>/OR1'
     *  Logic: '<S820>/NOT'
     *  Logic: '<S820>/OR'
     *  RelationalOperator: '<S772>/Comparison1'
     *  RelationalOperator: '<S772>/Comparison4'
     *  UnitDelay: '<S774>/Unit Delay'
     *  UnitDelay: '<S779>/Unit Delay'
     *  UnitDelay: '<S820>/Unit Delay'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut'
     */
    rtb_OR35_m = (((((((uint32)VeHPMC_e_InvrtrASwitchCmd) == CeHPMR_e_Enable) ||
                     (CeHPMR_e_Enable == ((uint32)
                       HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1))) &&
                    (!VeHPMC_b_MtrSystemActive)) &&
                   ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
                    (!HPMR_ac_DW.UnitDelay_DSTATE_jb))) ||
                  (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
                    (!HPMR_ac_DW.UnitDelay_DSTATE_bhh)) &&
                   (HPMR_ac_DW.UnitDelay_DSTATE_nd)));

    /* End of Outputs for SubSystem: '<S772>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S772>/EdgeRising' */

    /* Update for UnitDelay: '<S820>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_nd = rtb_OR35_m;

    /* End of Outputs for SubSystem: '<S772>/Signal Latch On With Reset' */

    /* Logic: '<S773>/AND22' incorporates:
     *  Constant: '<S818>/Calib'
     *  Logic: '<S772>/Logical9'
     *  RelationalOperator: '<S772>/Comparison8'
     *  RelationalOperator: '<S773>/Equal8'
     *  Switch: '<S7>/Switch1'
     */
    rtb_VeHPMC_b_MtrAActv = ((((uint32)VeHPMI_e_HybEngSysActv) !=
        CeESSR_e_HybEngDisabled) || (KeHPMR_b_OvrdHybEngCond_SPT));

    /* Logic: '<S772>/Logical6' incorporates:
     *  Constant: '<S819>/Calib'
     *  Logic: '<S772>/Logical3'
     *  Logic: '<S772>/Logical4'
     *  RelationalOperator: '<S772>/Comparison'
     *  RelationalOperator: '<S772>/Comparison2'
     *  RelationalOperator: '<S772>/Comparison3'
     *  Switch: '<S7>/Switch3'
     */
    rtb_OR17 = (((CeINVR_e_Failed_SPT == ((uint32)VeHPMI_e_BSW_SPT_State)) ||
                 ((((uint32)VeHPMI_e_BSW_SPT_State) == CeINVR_e_Pending_SPT) &&
                  (VeHPMR_t_StateTimer > ((float32)
                    Rte_Prm_KeHPMR_t_BSWTimeout_SPT_KeHPMR_t_BSWTimeout_SPT()))))
                && rtb_VeHPMC_b_MtrAActv);

    /* Outputs for Atomic SubSystem: '<S772>/Signal Latch On With Reset3' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeFalling3' */
    /* Logic: '<S823>/OR1' incorporates:
     *  Logic: '<S772>/Logical11'
     *  Logic: '<S772>/Logical12'
     *  Logic: '<S777>/AND'
     *  Logic: '<S777>/OR1'
     *  Logic: '<S781>/AND'
     *  Logic: '<S781>/OR1'
     *  Logic: '<S823>/NOT'
     *  Logic: '<S823>/OR'
     *  RelationalOperator: '<S772>/Comparison5'
     *  RelationalOperator: '<S773>/Equal8'
     *  Switch: '<S7>/Switch1'
     *  UnitDelay: '<S772>/Unit Delay'
     *  UnitDelay: '<S777>/Unit Delay'
     *  UnitDelay: '<S781>/Unit Delay'
     *  UnitDelay: '<S823>/Unit Delay'
     */
    rtb_OR20 = ((((((uint32)VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled) &&
                  (HPMR_ac_DW.UnitDelay_DSTATE_my)) &&
                 ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
                  (!HPMR_ac_DW.UnitDelay_DSTATE_d5l))) ||
                (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
                  (!HPMR_ac_DW.UnitDelay_DSTATE_ov)) &&
                 (HPMR_ac_DW.UnitDelay_DSTATE_oz)));

    /* End of Outputs for SubSystem: '<S772>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S772>/EdgeRising2' */

    /* Update for UnitDelay: '<S823>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_oz = rtb_OR20;

    /* End of Outputs for SubSystem: '<S772>/Signal Latch On With Reset3' */

    /* Outputs for Atomic SubSystem: '<S772>/Signal Latch On With Reset4' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeRising3' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeFalling4' */
    /* Logic: '<S824>/OR1' incorporates:
     *  Logic: '<S772>/Logical5'
     *  Logic: '<S772>/Logical8'
     *  Logic: '<S778>/AND'
     *  Logic: '<S778>/OR1'
     *  Logic: '<S782>/AND'
     *  Logic: '<S782>/OR1'
     *  Logic: '<S824>/NOT'
     *  Logic: '<S824>/OR'
     *  RelationalOperator: '<S772>/Comparison6'
     *  RelationalOperator: '<S772>/Comparison7'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch5'
     *  UnitDelay: '<S778>/Unit Delay'
     *  UnitDelay: '<S782>/Unit Delay'
     *  UnitDelay: '<S824>/Unit Delay'
     */
    rtb_OR8_o = ((((((((uint32)VeHPMI_e_MCPA_SPT_State) == CeINVR_e_Failed_SPT) ||
                     (CeINVR_e_Failed_SPT == ((uint32)VeHPMI_e_MCPB_SPT_State)))
                    || (VeHPMC_b_MCP_SPT_Timeout)) && rtb_VeHPMC_b_MtrAActv) &&
                  ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
                   (!HPMR_ac_DW.UnitDelay_DSTATE_az))) ||
                 (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
                   (!HPMR_ac_DW.UnitDelay_DSTATE_e5)) &&
                  (HPMR_ac_DW.UnitDelay_DSTATE_bg)));

    /* End of Outputs for SubSystem: '<S772>/EdgeFalling4' */
    /* End of Outputs for SubSystem: '<S772>/EdgeRising3' */

    /* Update for UnitDelay: '<S824>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bg = rtb_OR8_o;

    /* End of Outputs for SubSystem: '<S772>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S772>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S772>/EdgeFalling2' */
    /* Logic: '<S822>/OR1' incorporates:
     *  Logic: '<S772>/Logical10'
     *  Logic: '<S776>/AND'
     *  Logic: '<S776>/OR1'
     *  Logic: '<S780>/AND'
     *  Logic: '<S780>/OR1'
     *  Logic: '<S822>/NOT'
     *  Logic: '<S822>/OR'
     *  UnitDelay: '<S776>/Unit Delay'
     *  UnitDelay: '<S780>/Unit Delay'
     *  UnitDelay: '<S822>/Unit Delay'
     */
    rtb_AND_et = (((VeHPMC_b_ImmoStat_NotVldTmout) &&
                   ((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) &&
                    (!HPMR_ac_DW.UnitDelay_DSTATE_cyo))) ||
                  (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
                    (!HPMR_ac_DW.UnitDelay_DSTATE_k5)) &&
                   (HPMR_ac_DW.UnitDelay_DSTATE_ax)));

    /* End of Outputs for SubSystem: '<S772>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S772>/EdgeRising1' */

    /* Update for UnitDelay: '<S822>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ax = rtb_AND_et;

    /* End of Outputs for SubSystem: '<S772>/Signal Latch On With Reset2' */

    /* Logic: '<S773>/AND22' incorporates:
     *  Constant: '<S983>/Calib'
     */
    rtb_VeHPMC_b_MtrAActv = ((VeHPMI_b_DsblInvB) && (KeHPMR_b_Enbl_SRARDsblINVB));

    /* Logic: '<S773>/AND24' incorporates:
     *  Constant: '<S969>/Calib'
     */
    VeHPMC_b_OpnReq_SrvcProc1320_Out = ((VeHPMI_b_OpnReq_SrvcProc1320_Out) &&
        (KeHPMR_b_EnblOpnReq_SrvcProc1320_Out));

    /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
     *  DataTypeConversion: '<S772>/Data Type Conversion1'
     *  Switch: '<S772>/Switch14'
     */
    VaHPMC_K_RsnForUnintndShtDwn2[0] = (sint16)(VeHPMR_b_CollisionDetection ? 1 :
        0);

    /* Switch: '<S772>/Switch15' */
    if (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value2'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[1] = 2;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value3'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[1] = 0;
    }

    /* End of Switch: '<S772>/Switch15' */

    /* Switch: '<S772>/Switch16' */
    if (rtb_OR35_m)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value4'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[2] = 3;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value5'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[2] = 0;
    }

    /* End of Switch: '<S772>/Switch16' */

    /* Switch: '<S772>/Switch17' */
    if (VeHPMC_b_BattSysNotActv)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value6'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[3] = 4;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value7'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[3] = 0;
    }

    /* End of Switch: '<S772>/Switch17' */

    /* Switch: '<S772>/Switch18' */
    if (rtb_OR17)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value8'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[4] = 5;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value9'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[4] = 0;
    }

    /* End of Switch: '<S772>/Switch18' */

    /* Switch: '<S772>/Switch19' */
    if (rtb_AND22_k)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value10'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[5] = 6;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value11'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[5] = 0;
    }

    /* End of Switch: '<S772>/Switch19' */

    /* Switch: '<S772>/Switch20' */
    if (rtb_OR20)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value12'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[6] = 7;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value13'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[6] = 0;
    }

    /* End of Switch: '<S772>/Switch20' */

    /* Switch: '<S772>/Switch21' */
    if (HPMR_ac_B.LeHPMR_b_PrechargeFailure)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value14'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[7] = 8;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value15'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[7] = 0;
    }

    /* End of Switch: '<S772>/Switch21' */

    /* Switch: '<S772>/Switch22' */
    if (rtb_OR8_o)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value16'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[8] = 9;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value17'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[8] = 0;
    }

    /* End of Switch: '<S772>/Switch22' */

    /* Switch: '<S772>/Switch23' */
    if (rtb_AND_et)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value18'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[9] = 10;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value19'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[9] = 0;
    }

    /* End of Switch: '<S772>/Switch23' */

    /* Switch: '<S772>/Switch24' */
    if (rtb_VeHPMC_b_MtrAActv)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value20'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[10] = 11;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value21'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[10] = 0;
    }

    /* End of Switch: '<S772>/Switch24' */

    /* Switch: '<S772>/Switch25' */
    if (VeHPMR_b_HVILFailThisKeyCycl)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value22'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[11] = 12;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value23'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[11] = 0;
    }

    /* End of Switch: '<S772>/Switch25' */

    /* Switch: '<S772>/Switch26' */
    if (VeHPMC_b_OpnReq_SrvcProc1320_Out)
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value24'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[12] = 13;
    }
    else
    {
        /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
         *  Constant: '<S772>/Constant Value25'
         *  DataTypeConversion: '<S772>/Data Type Conversion1'
         */
        VaHPMC_K_RsnForUnintndShtDwn2[12] = 0;
    }

    /* End of Switch: '<S772>/Switch26' */

    /* VariantMerge generated from: '<S374>/VaHPMC_K_RsnForUnintndShtDwn2' incorporates:
     *  DataTypeConversion: '<S772>/Data Type Conversion1'
     */
    VaHPMC_K_RsnForUnintndShtDwn2[13] = HPMR_ac_ConstB.Switch27;
    VaHPMC_K_RsnForUnintndShtDwn2[14] = HPMR_ac_ConstB.Switch28;

    /* VariantMerge generated from: '<S374>/VeHPMR_b_UnintendedFltShtdwn' incorporates:
     *  Logic: '<S773>/AND18'
     *  Logic: '<S773>/AND9'
     */
    VeHPMR_b_UnintendedFltShtdwn = (((((((((((((rtb_Comparison2_jy ||
        (VeHPMR_b_FltShtDwnCmnd)) || (VeHPMR_b_HVILSpdCondMet)) || rtb_AND_j3) ||
        rtb_UnitDelay_av) || (VeHPMR_b_MCPA_CoreFail)) ||
        (VeHPMR_b_MCPB_CoreFail)) || (VeHPMR_b_AHCP_CoreFail)) ||
        VeHPMI_b_HighVoltageRapidShtdwn) || VeHPMI_b_MCPA_CoreFail) ||
        (rtb_UnitDelay_ik || rtb_VeHPMC_b_MtrAActv)) || rtb_AND_m4u) ||
        (VeHPMC_b_HV_IntrnlIntrlkStatFail)) || (VeHPMC_b_OpnReq_SrvcProc1320_Out));

    /* VariantMerge generated from: '<S374>/VeHPMR_b_UnintendedShtdwn' incorporates:
     *  Logic: '<S773>/AND2'
     *  Logic: '<S773>/AND4'
     */
    VeHPMR_b_UnintendedShtdwn = (((!VeHPMC_b_MtrSystemActive) ||
        (VeHPMC_b_BattSysNotActv)) || (VeHPMR_b_UnintendedFltShtdwn));

    /* Switch: '<S962>/Switch1' incorporates:
     *  Constant: '<S976>/Calib'
     *  Switch: '<S773>/Switch13'
     *  Switch: '<S953>/Switch1'
     *  Switch: '<S954>/Switch1'
     *  Switch: '<S959>/Switch1'
     */
    if (rtb_Comparison2_jy)
    {
        /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  DataTypeConversion: '<S1036>/Data Type Conversion1'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 1U;
    }
    else if (VeHPMR_b_FltShtDwnCmnd)
    {
        /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  DataTypeConversion: '<S1021>/Data Type Conversion1'
         *  Switch: '<S953>/Switch1'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 2U;
    }
    else if (VeHPMR_b_HVILSpdCondMet)
    {
        /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  DataTypeConversion: '<S1054>/Data Type Conversion1'
         *  Switch: '<S953>/Switch1'
         *  Switch: '<S959>/Switch1'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 3U;
    }
    else if (rtb_AND_j3)
    {
        /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  DataTypeConversion: '<S1024>/Data Type Conversion1'
         *  Switch: '<S953>/Switch1'
         *  Switch: '<S954>/Switch1'
         *  Switch: '<S959>/Switch1'
         */
        HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 4U;
    }
    else
    {
        if (KeHPMR_b_Enbl_HV_IntrnlIntrk_Chk)
        {
            /* Switch: '<S773>/Switch13' incorporates:
             *  Switch: '<S953>/Switch1'
             *  Switch: '<S954>/Switch1'
             *  Switch: '<S959>/Switch1'
             */
            rtb_UnitDelay_av = VeHPMC_b_HV_IntrnlIntrlkStatFail;
        }

        /* Switch: '<S960>/Switch1' incorporates:
         *  Switch: '<S953>/Switch1'
         *  Switch: '<S954>/Switch1'
         *  Switch: '<S955>/Switch1'
         *  Switch: '<S956>/Switch1'
         *  Switch: '<S957>/Switch1'
         *  Switch: '<S958>/Switch1'
         *  Switch: '<S959>/Switch1'
         *  Switch: '<S961>/Switch1'
         *  Switch: '<S963>/Switch1'
         *  Switch: '<S964>/Switch1'
         *  Switch: '<S965>/Switch1'
         *  Switch: '<S966>/Switch1'
         */
        if (rtb_UnitDelay_av)
        {
            /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
             *  DataTypeConversion: '<S1042>/Data Type Conversion1'
             *  Switch: '<S960>/Switch1'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 5U;
        }
        else if (HPMR_ac_B.VeHPMR_b_FinalImpactSignal)
        {
            /* Switch: '<S961>/Switch1' incorporates:
             *  DataTypeConversion: '<S1045>/Data Type Conversion1'
             *  Switch: '<S960>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 6U;
        }
        else if (VeHPMC_b_CntctrsOpenAfterClose)
        {
            /* Switch: '<S963>/Switch1' incorporates:
             *  DataTypeConversion: '<S1048>/Data Type Conversion1'
             *  Switch: '<S960>/Switch1'
             *  Switch: '<S961>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 7U;
        }
        else if (VeHPMR_b_MCPA_CoreFail)
        {
            /* Switch: '<S964>/Switch1' incorporates:
             *  DataTypeConversion: '<S1060>/Data Type Conversion1'
             *  Switch: '<S960>/Switch1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 8U;
        }
        else if (VeHPMR_b_MCPB_CoreFail)
        {
            /* Switch: '<S965>/Switch1' incorporates:
             *  DataTypeConversion: '<S1057>/Data Type Conversion1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  Switch: '<S964>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 9U;
        }
        else if (VeHPMR_b_AHCP_CoreFail)
        {
            /* Switch: '<S966>/Switch1' incorporates:
             *  DataTypeConversion: '<S1063>/Data Type Conversion1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  Switch: '<S964>/Switch1'
             *  Switch: '<S965>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 10U;
        }
        else if (VeHPMI_b_HighVoltageRapidShtdwn)
        {
            /* Switch: '<S955>/Switch1' incorporates:
             *  DataTypeConversion: '<S1027>/Data Type Conversion1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  Switch: '<S964>/Switch1'
             *  Switch: '<S965>/Switch1'
             *  Switch: '<S966>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 11U;
        }
        else if (VeHPMI_b_MCPA_CoreFail)
        {
            /* Switch: '<S956>/Switch1' incorporates:
             *  DataTypeConversion: '<S1033>/Data Type Conversion1'
             *  Switch: '<S955>/Switch1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  Switch: '<S964>/Switch1'
             *  Switch: '<S965>/Switch1'
             *  Switch: '<S966>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 12U;
        }
        else if (rtb_UnitDelay_ik)
        {
            /* Switch: '<S957>/Switch1' incorporates:
             *  DataTypeConversion: '<S1030>/Data Type Conversion1'
             *  Switch: '<S955>/Switch1'
             *  Switch: '<S956>/Switch1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  Switch: '<S964>/Switch1'
             *  Switch: '<S965>/Switch1'
             *  Switch: '<S966>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 13U;
        }
        else if (rtb_AND_m4u)
        {
            /* Switch: '<S958>/Switch1' incorporates:
             *  Switch: '<S955>/Switch1'
             *  Switch: '<S956>/Switch1'
             *  Switch: '<S957>/Switch1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  Switch: '<S964>/Switch1'
             *  Switch: '<S965>/Switch1'
             *  Switch: '<S966>/Switch1'
             *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 14U;
        }
        else
        {
            /* VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
             *  Switch: '<S955>/Switch1'
             *  Switch: '<S956>/Switch1'
             *  Switch: '<S957>/Switch1'
             *  Switch: '<S958>/Switch1'
             *  Switch: '<S961>/Switch1'
             *  Switch: '<S963>/Switch1'
             *  Switch: '<S964>/Switch1'
             *  Switch: '<S965>/Switch1'
             *  Switch: '<S966>/Switch1'
             */
            HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn = 0U;
        }

        /* End of Switch: '<S960>/Switch1' */
    }

    /* End of Switch: '<S962>/Switch1' */

    /* VariantMerge generated from: '<S374>/VeHPMR_b_DAPFA_OpenCntctr' incorporates:
     *  Gain: '<S992>/Gain'
     */
    VeHPMR_b_DAPFA_OpenCntctr = rtb_AND22_k;

    /* Abs: '<S376>/Abs' */
    rtb_Abs = fabsf(VeHPMI_I_HV_BatCurrArb);

    /* VariantMerge generated from: '<S374>/LeHPMR_b_BP_CurrOpenCondMetCrash' incorporates:
     *  Constant: '<S663>/Calib'
     *  RelationalOperator: '<S376>/Equal1'
     */
    VeHPMR_b_BP_CurrOpenCondMetCrash = (rtb_Abs <=
        KeHPMR_I_ContactorPackCurrentCrash);

    /* VariantMerge generated from: '<S374>/LeHPMR_b_BP_CurrOpenCondMet' incorporates:
     *  Constant: '<S662>/Calib'
     *  RelationalOperator: '<S376>/Equal7'
     */
    VeHPMR_b_BP_CurrOpenCondMet = (rtb_Abs <= KeHPMR_I_ContactorPackCurrent);

    /* End of Outputs for SubSystem: '<S374>/HPMC_DetHybSysStInputs_BEV' */
#endif

    /* Update for Atomic SubSystem: '<S5>/DetHybSysStInputs_Variant' */
#if Rte_SysCon_Variant_HPMR_3

    /* Update for Atomic SubSystem: '<S374>/HPMC_DetHybSysStInputs' */
    /* Update for Atomic SubSystem: '<S375>/DetMtrSysActive' */
#if !Rte_SysCon_Variant_HPMR_3Motor

    /* Update for Atomic SubSystem: '<S380>/DetMtrSysActive_2Motor' */
    /* Update for UnitDelay: '<S408>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut'
     */
    HPMR_ac_DW.UnitDelay_DSTATE_ef = VeHPMC_e_InvrtrASwitchCmd;

    /* End of Update for SubSystem: '<S380>/DetMtrSysActive_2Motor' */
#endif

    /* End of Update for SubSystem: '<S375>/DetMtrSysActive' */

    /* Update for Atomic SubSystem: '<S536>/EdgeFalling1' */
    /* Update for UnitDelay: '<S539>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bd = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeFalling1' */

    /* Update for Atomic SubSystem: '<S536>/EdgeFalling' */
    /* Update for UnitDelay: '<S538>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_gj = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeFalling' */

    /* Update for Atomic SubSystem: '<S536>/EdgeFalling2' */
    /* Update for UnitDelay: '<S540>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_oyl = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeFalling2' */

    /* Update for Atomic SubSystem: '<S536>/EdgeFalling3' */
    /* Update for UnitDelay: '<S541>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_aqu = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeFalling3' */

    /* Update for Atomic SubSystem: '<S536>/EdgeFalling4' */
    /* Update for UnitDelay: '<S542>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_gu = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeFalling4' */

    /* Update for Atomic SubSystem: '<S536>/EdgeRising' */
    /* Update for UnitDelay: '<S543>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_f2 = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeRising' */

    /* Update for Atomic SubSystem: '<S536>/EdgeRising1' */
    /* Update for UnitDelay: '<S544>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_nh = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeRising1' */

    /* Update for Atomic SubSystem: '<S536>/EdgeRising2' */
    /* Update for UnitDelay: '<S545>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_gg = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeRising2' */

    /* Update for Atomic SubSystem: '<S536>/EdgeRising3' */
    /* Update for UnitDelay: '<S546>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_e4 = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S536>/EdgeRising3' */

    /* Update for UnitDelay: '<S536>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ipd = VeHPMC_b_PropulsionSystemActive;

    /* End of Update for SubSystem: '<S374>/HPMC_DetHybSysStInputs' */
    /* End of Update for SubSystem: '<S5>/DetHybSysStInputs_Variant' */
#else

    /* Update for Atomic SubSystem: '<S374>/HPMC_DetHybSysStInputs_BEV' */
    /* Update for Atomic SubSystem: '<S772>/EdgeFalling1' */
    /* Update for UnitDelay: '<S775>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_pn = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeFalling1' */

    /* Update for Atomic SubSystem: '<S772>/EdgeRising' */
    /* Update for UnitDelay: '<S779>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_jb = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeRising' */

    /* Update for Atomic SubSystem: '<S772>/EdgeFalling' */
    /* Update for UnitDelay: '<S774>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bhh = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeFalling' */

    /* Update for UnitDelay: '<S772>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_my = VeHPMC_b_PropulsionSystemActive;

    /* Update for Atomic SubSystem: '<S772>/EdgeRising2' */
    /* Update for UnitDelay: '<S781>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_d5l = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeRising2' */

    /* Update for Atomic SubSystem: '<S772>/EdgeFalling3' */
    /* Update for UnitDelay: '<S777>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ov = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeFalling3' */

    /* Update for Atomic SubSystem: '<S772>/EdgeRising3' */
    /* Update for UnitDelay: '<S782>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_az = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeRising3' */

    /* Update for Atomic SubSystem: '<S772>/EdgeFalling4' */
    /* Update for UnitDelay: '<S778>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_e5 = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeFalling4' */

    /* Update for Atomic SubSystem: '<S772>/EdgeRising1' */
    /* Update for UnitDelay: '<S780>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cyo = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeRising1' */

    /* Update for Atomic SubSystem: '<S772>/EdgeFalling2' */
    /* Update for UnitDelay: '<S776>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_k5 = HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* End of Update for SubSystem: '<S772>/EdgeFalling2' */
    /* End of Update for SubSystem: '<S374>/HPMC_DetHybSysStInputs_BEV' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HPMC_DetHybSysSt'
     */
    /* Outputs for Atomic SubSystem: '<S4>/DetHybSysSt_Variant' */
#if Rte_SysCon_Variant_HPMR_3

    /* Outputs for Atomic SubSystem: '<S8>/DetHybSysSt' */
    /* Logic: '<S67>/Logical1' incorporates:
     *  Constant: '<S161>/Calib'
     */
    VeHPMR_b_CritFaultLatched = ((HPMR_ac_B.VeHPMR_b_FinalImpactSignal) &&
        (KeHPMR_b_Enbl_CritFltLatch));

    /* Logic: '<S9>/Logical6' */
    VeHPMR_b_HV_BatCntctrStatAvail = !VeHPMI_b_HV_BatCntctrStatFA;

    /* Logic: '<S16>/AND' */
    VeHPMR_b_ImmobAuthVld = VeHPMI_b_AuthenticationValid;

    /* UnitDelay: '<S122>/Unit Delay' incorporates:
     *  Constant: '<S143>/Constant'
     *  RelationalOperator: '<S32>/Comparison4'
     *  Switch: '<S7>/Switch51'
     */
    VeHPMI_b_MCPA_CoreFail = (((uint32)VeHPMI_e_HCPImmoStatCanC) ==
        CeIMOR_e_HCPKILL);

    /* Logic: '<S32>/Logical11' */
    VeHPMR_b_ImmoStat_AuthVld = !VeHPMI_b_MCPA_CoreFail;

    /* UnitDelay: '<S9>/Unit Delay3' */
    HPMR_ac_B.LeHPMR_e_HybSysStOld = HPMR_ac_DW.UnitDelay3_DSTATE_j;

    /* RelationalOperator: '<S32>/Comparison6' incorporates:
     *  RelationalOperator: '<S19>/Equal2'
     *  RelationalOperator: '<S21>/Comparison4'
     *  RelationalOperator: '<S21>/Comparison6'
     *  RelationalOperator: '<S32>/Comparison5'
     *  UnitDelay: '<S9>/Unit Delay3'
     */
    VeHPMI_b_HighVoltageRapidShtd_0 = HPMR_ac_B.LeHPMR_e_HybSysStOld;

    /* Logic: '<S32>/AND2' incorporates:
     *  Constant: '<S144>/Constant'
     *  Constant: '<S145>/Constant'
     *  Logic: '<S32>/AND5'
     *  RelationalOperator: '<S32>/Comparison5'
     *  RelationalOperator: '<S32>/Comparison6'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (VeHPMI_b_MCPA_CoreFail && ((((uint32)
        VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_ENBL_INV) || (((uint32)
        VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_INV_ENABLED)));

    /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S147>/EdgeRising' */
    /* Logic: '<S148>/AND' incorporates:
     *  Logic: '<S148>/OR1'
     *  UnitDelay: '<S148>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (!HPMR_ac_DW.UnitDelay_DSTATE_kfr));

    /* Update for UnitDelay: '<S148>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_kfr = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S147>/EdgeRising' */

    /* Switch: '<S147>/Switch1' incorporates:
     *  Logic: '<S147>/OR'
     *  Logic: '<S147>/OR1'
     */
    if ((!VeHPMI_b_HighVoltageRapidShtdwn) || VeHPMI_b_MCPA_CoreFail)
    {
        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S147>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S146>/Calib'
         *  MinMax: '<S147>/Minimum'
         *  Sum: '<S147>/Summation'
         *  UnitDelay: '<S147>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_ImmobAuthTmr, HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_ki);
    }

    /* End of Switch: '<S147>/Switch1' */

    /* Logic: '<S147>/AND' incorporates:
     *  Constant: '<S146>/Calib'
     *  RelationalOperator: '<S147>/Greater  Than'
     */
    VeHPMR_b_ImmoStat_NotVldTmout = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (rtb_Switch1_ne >= KeHPMR_t_ImmobAuthTmr));

    /* Update for UnitDelay: '<S147>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ki = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S32>/Turn On Delay Time' */

    /* Logic: '<S19>/AND13' incorporates:
     *  Constant: '<S84>/Constant'
     *  Constant: '<S85>/Calib'
     *  RelationalOperator: '<S19>/Equal2'
     *  RelationalOperator: '<S19>/Less  Than2'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = ((((uint32)VeHPMI_b_HighVoltageRapidShtd_0)
        == CeHPMR_e_CMND_CNTCTR_OPEN) && (VeHPMI_U_HV_Volt <
        KeHPMR_U_DiscHV_BusShutdown));

    /* Outputs for Atomic SubSystem: '<S19>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S87>/EdgeRising' */
    /* Logic: '<S88>/AND' incorporates:
     *  Logic: '<S88>/OR1'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (!HPMR_ac_DW.UnitDelay_DSTATE_jsm));

    /* Update for UnitDelay: '<S88>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_jsm = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S87>/EdgeRising' */

    /* Switch: '<S87>/Switch1' incorporates:
     *  Logic: '<S87>/OR'
     *  Logic: '<S87>/OR1'
     */
    if ((!VeHPMI_b_HighVoltageRapidShtdwn) || VeHPMI_b_MCPA_CoreFail)
    {
        /* Switch: '<S87>/Switch1' incorporates:
         *  Constant: '<S87>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S87>/Switch1' incorporates:
         *  Constant: '<S86>/Calib'
         *  MinMax: '<S87>/Minimum'
         *  Sum: '<S87>/Summation'
         *  UnitDelay: '<S87>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_ClosedCntctrLowBusVolt,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_oo);
    }

    /* End of Switch: '<S87>/Switch1' */

    /* Logic: '<S87>/AND' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S87>/Greater  Than'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (rtb_Switch1_ne >= KeHPMR_t_ClosedCntctrLowBusVolt));

    /* Update for UnitDelay: '<S87>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_oo = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S19>/Turn On Delay Time1' */

    /* Logic: '<S67>/Logical4' incorporates:
     *  Constant: '<S162>/Calib'
     */
    VeHPMR_b_HighMtrSpdActvIn = ((HPMR_ac_B.LeHPMR_b_HighMtrSpdActv) &&
        (KeHPMR_b_Enbl_HiMtrSpdActv));

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising' */
    /* Logic: '<S149>/OR1' incorporates:
     *  UnitDelay: '<S149>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = !HPMR_ac_DW.UnitDelay_DSTATE_k0;

    /* Update for UnitDelay: '<S149>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_k0 = VeHPMI_b_EnblHVSys;

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset' */
    /* Logic: '<S151>/OR1' incorporates:
     *  Logic: '<S149>/AND'
     *  Logic: '<S151>/OR'
     *  Logic: '<S33>/AND3'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    VeHPMR_b_EnblHVSysOffOnTransOcc = (((VeHPMI_b_EnblHVSys) &&
        VeHPMI_b_MCPA_CoreFail) || ((VeHPMI_b_EnblHVSys) &&
        (HPMR_ac_DW.UnitDelay_DSTATE_bf)));

    /* End of Outputs for SubSystem: '<S33>/EdgeRising' */

    /* Update for UnitDelay: '<S151>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bf = VeHPMR_b_EnblHVSysOffOnTransOcc;

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising1' */
    /* Logic: '<S132>/OR1' incorporates:
     *  UnitDelay: '<S132>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = !HPMR_ac_DW.UnitDelay_DSTATE_a4k;

    /* Update for UnitDelay: '<S132>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_a4k = VeHPMI_b_EnblPrplsnSys;

    /* Outputs for Atomic SubSystem: '<S22>/Signal Latch On With Reset1' */
    /* Logic: '<S134>/OR1' incorporates:
     *  Logic: '<S132>/AND'
     *  Logic: '<S134>/OR'
     *  Logic: '<S22>/Logical8'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = (((VeHPMI_b_EnblPrplsnSys) &&
        VeHPMI_b_MCPA_CoreFail) || ((VeHPMI_b_EnblPrplsnSys) &&
        (HPMR_ac_DW.UnitDelay_DSTATE_ms)));

    /* End of Outputs for SubSystem: '<S22>/EdgeRising1' */

    /* Update for UnitDelay: '<S134>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ms = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S22>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S22>/Stop Watch Reset Enabled2' */
    /* Switch: '<S135>/Switch1' incorporates:
     *  Logic: '<S22>/Logical9'
     *  Switch: '<S135>/Switch2'
     */
    if (!VeHPMI_b_EnblPrplsnSys)
    {
        /* Switch: '<S135>/Switch1' incorporates:
         *  Constant: '<S135>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else if (VeHPMI_b_MCPA_CoreFail)
    {
        /* Switch: '<S135>/Switch2' incorporates:
         *  Sum: '<S135>/Subtraction'
         *  Switch: '<S135>/Switch1'
         *  UnitDelay: '<S135>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_g2;
    }
    else
    {
        /* Switch: '<S135>/Switch1' incorporates:
         *  Switch: '<S135>/Switch2'
         *  UnitDelay: '<S135>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_DW.UnitDelay_DSTATE_g2;
    }

    /* End of Switch: '<S135>/Switch1' */

    /* Update for UnitDelay: '<S135>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_g2 = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S22>/Stop Watch Reset Enabled2' */

    /* RelationalOperator: '<S22>/Comparison2' incorporates:
     *  Constant: '<S133>/Calib'
     */
    VeHPMR_b_EngSysNotActvAftrCrnk = (rtb_Switch1_ne >=
        KeHPMR_t_EngSysNotActvTmr);

    /* Logic: '<S67>/Logical2' incorporates:
     *  Constant: '<S163>/Calib'
     */
    VeHPMR_b_LossCommORC = ((VeHPMC_b_LossCommORC) && (KeHPMR_b_Enbl_LossCommORC));

    /* Logic: '<S21>/AND4' incorporates:
     *  Constant: '<S123>/Constant'
     *  Constant: '<S124>/Constant'
     *  Constant: '<S125>/Constant'
     *  Constant: '<S126>/Constant'
     *  Constant: '<S127>/Constant'
     *  Constant: '<S128>/Constant'
     *  Constant: '<S129>/Constant'
     *  Logic: '<S21>/AND1'
     *  Logic: '<S21>/AND2'
     *  Logic: '<S21>/AND5'
     *  RelationalOperator: '<S21>/Comparison1'
     *  RelationalOperator: '<S21>/Comparison2'
     *  RelationalOperator: '<S21>/Comparison3'
     *  RelationalOperator: '<S21>/Comparison4'
     *  RelationalOperator: '<S21>/Comparison5'
     *  RelationalOperator: '<S21>/Comparison6'
     *  RelationalOperator: '<S21>/Comparison8'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch42'
     *  Switch: '<S7>/Switch5'
     *  VariantMerge generated from: '<S380>/VeHPMR_e_MCPC_SPT_State'
     */
    VeHPMC_b_MCP_SPT_Pendng = ((((((uint32)VeHPMI_b_HighVoltageRapidShtd_0) ==
        CeHPMR_e_HV_ENABLED) || (CeHPMR_e_ALT_HV_ENABLED == ((uint32)
        VeHPMI_b_HighVoltageRapidShtd_0))) && ((((uint32)VeHPMI_e_PMM_PowerMode)
        == CePMDR_e_PowerMode_Run) || (((uint32)VeHPMI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Crank))) && (((((uint32)VeHPMI_e_MCPA_SPT_State) ==
        CeINVR_e_Pending_SPT) || (((uint32)VeHPMI_e_MCPB_SPT_State) ==
        CeINVR_e_Pending_SPT)) || (((uint32)
        HPMR_ac_B.VariantMergeForOutportVeHPMR_e_) == CeINVR_e_Pending_SPT)));

    /* Outputs for Atomic SubSystem: '<S21>/Stop Watch Reset Enabled3' */
    /* Switch: '<S131>/Switch2' incorporates:
     *  Logic: '<S21>/AND3'
     *  Switch: '<S131>/Switch1'
     */
    if (!VeHPMC_b_MCP_SPT_Pendng)
    {
        /* Switch: '<S131>/Switch1' incorporates:
         *  Constant: '<S131>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S131>/Switch1' incorporates:
         *  Sum: '<S131>/Subtraction'
         *  Switch: '<S131>/Switch2'
         *  UnitDelay: '<S131>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S131>/Switch2' */

    /* Update for UnitDelay: '<S131>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S21>/Stop Watch Reset Enabled3' */

    /* VariantMerge generated from: '<S8>/VeHPMC_b_MCP_SPT_Timeout' incorporates:
     *  Constant: '<S130>/Calib'
     *  RelationalOperator: '<S21>/Comparison7'
     */
    VeHPMC_b_MCP_SPT_Timeout = (rtb_Switch1_ne >= KeHPMR_t_MCPTimeout_SPT);

    /* VariantMerge generated from: '<S8>/VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn' incorporates:
     *  Constant: '<S160>/Calib'
     *  Logic: '<S67>/Logical7'
     */
    VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn =
        ((HPMR_ac_B.VariantMergeForOutportVeHPMC__n) &&
         (KeHPMR_b_EnblORCLoC_RapidShtDn));

    /* Logic: '<S67>/AND17' incorporates:
     *  Constant: '<S164>/Calib'
     */
    VeHPMR_b_OpnBattCntctr = ((VeHPMI_b_OpnBattCntctr) &&
        (KeHPMR_b_Enbl_SRAROpnCntctr));

    /* Logic: '<S60>/Logical2' incorporates:
     *  Constant: '<S157>/Calib'
     *  Logic: '<S60>/Logical'
     *  Logic: '<S60>/Logical1'
     *  Logic: '<S60>/Logical3'
     *  Logic: '<S60>/Logical4'
     */
    VeHPMR_b_DsblInv = (((((VeHPMI_b_DsblInvA) || (VeHPMI_b_DsblInvB)) ||
                          (VeHPMI_b_DsblInvC)) &&
                         (KeHPMR_b_Enbl_SRARDsblINV_SFChart)) ||
                        ((!KeHPMR_b_Enbl_SRARDsblINV_SFChart) &&
                         (VeHPMI_b_DsblInvA)));

    /* Logic: '<S67>/AND1' incorporates:
     *  Constant: '<S158>/Calib'
     */
    VeHPMR_b_DsblAllwCntctrCls_InvFlt = ((VeHPMR_b_InverterFaulted) &&
        (KeHPMR_b_DsblAllwCntctrCls_InvFlt));

    /* Logic: '<S67>/AND4' incorporates:
     *  Constant: '<S159>/Calib'
     */
    VeHPMR_b_HVBatSrvcDisCnctFA = ((VeHPMI_b_HVBatSrvcDisCnctFA) &&
        (KeHPMR_b_EnblHVBatSrvcDscnt_RapidShtDn));

    /* Logic: '<S27>/Logical' incorporates:
     *  Constant: '<S136>/Calib'
     *  Logic: '<S27>/Logical2'
     */
    VeHPMR_b_HVBatCntrWeld_ImpdOpn = ((VeHPMI_b_HVBatCntrWeld_ImpdOpn) &&
        (!KeHPMR_b_HVBatCntrWeld_HV));

    /* Logic: '<S69>/AND7' incorporates:
     *  Logic: '<S29>/Logical2'
     */
    VeHPMI_b_MCPA_CoreFail = ((VeHPMR_b_CollisionDetection) ||
        (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn));

    /* Logic: '<S69>/AND7' */
    VeHPMR_b_HV_AllShutDwnReq = ((((VeHPMI_b_MCPA_CoreFail ||
        (VeHPMR_b_HVBatSrvcDisCnctFA)) || (VeHPMR_b_MCPA_CoreFail)) ||
        (VeHPMR_b_MCPB_CoreFail)) || (VeHPMR_b_AHCP_CoreFail));

    /* Logic: '<S69>/Logical' incorporates:
     *  Constant: '<S169>/Constant'
     *  Constant: '<S170>/Constant'
     *  Constant: '<S171>/Constant'
     *  Constant: '<S172>/Calib'
     *  Logic: '<S69>/Logical10'
     *  Logic: '<S69>/Logical12'
     *  RelationalOperator: '<S69>/Comparison7'
     *  RelationalOperator: '<S69>/Comparison8'
     *  RelationalOperator: '<S69>/Comparison9'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch13'
     */
    VeHPMC_b_CntctrOpen_Cnvl = ((((!VeHPMR_b_HV_AllShutDwnReq) && (((uint32)
        VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Open)) &&
        ((CeESSR_e_HybEngEnabledOnIS != ((uint32)VeHPMI_e_HybEngSysActv)) &&
         (((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled))) &&
        (KeHPMR_b_EnblDfltMd));

    /* Logic: '<S28>/Logical' incorporates:
     *  Constant: '<S137>/Constant'
     *  RelationalOperator: '<S28>/Comparison4'
     *  RelationalOperator: '<S28>/Comparison5'
     *  Switch: '<S7>/Switch45'
     *  UnitDelay: '<S28>/Unit Delay'
     */
    VeHPMR_b_HVILFailThisKeyCyclRst = ((((uint32)VeHPMI_e_KeyStatus) !=
        CePMDR_e_KeySt_Off) && (CePMDR_e_KeySt_Off == ((uint32)
        HPMR_ac_DW.UnitDelay_DSTATE_aiw)));

    /* Outputs for Atomic SubSystem: '<S28>/Signal Latch On With Reset' */
    /* VariantMerge generated from: '<S8>/VeHPMR_b_HVILFailThisKeyCycl' incorporates:
     *  Logic: '<S138>/NOT'
     *  Logic: '<S138>/OR'
     *  Logic: '<S138>/OR1'
     *  Logic: '<S28>/Logical1'
     *  UnitDelay: '<S138>/Unit Delay'
     */
    VeHPMR_b_HVILFailThisKeyCycl = (((VeHPMR_b_HVILSpdCondMet) ||
        (VeHPMI_b_HVBatSrvcDisCnctFA)) || ((!VeHPMR_b_HVILFailThisKeyCyclRst) &&
        (HPMR_ac_DW.UnitDelay_DSTATE_hk)));

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hk = VeHPMR_b_HVILFailThisKeyCycl;

    /* End of Outputs for SubSystem: '<S28>/Signal Latch On With Reset' */

    /* Logic: '<S29>/Logical3' incorporates:
     *  Logic: '<S29>/Logical1'
     */
    VeHPMR_b_HVFaultsAltMd = ((((((VeHPMI_b_HVBatSrvcDisCnctFA) ||
        (VeHPMR_b_HVILSpdCondMet)) || VeHPMI_b_MCPA_CoreFail) ||
        (VeHPMR_b_MCPA_CoreFail)) || (VeHPMR_b_MCPB_CoreFail)) ||
        (VeHPMR_b_AHCP_CoreFail));

    /* Logic: '<S27>/Logical1' incorporates:
     *  Constant: '<S136>/Calib'
     */
    VeHPMR_b_HVBatCntrWeld_ImpdOpnHV = ((KeHPMR_b_HVBatCntrWeld_HV) &&
        (VeHPMI_b_HVBatCntrWeld_ImpdOpn));

    /* Logic: '<S33>/AND5' incorporates:
     *  Constant: '<S150>/Calib'
     */
    VeHPMR_b_DrvReadyCmplSts = ((VeHPMI_b_DrvReadyCmplSts) ||
        (KeHPMR_b_DsblDrvReadySts));

    /* Logic: '<S12>/Logical' incorporates:
     *  Constant: '<S83>/Calib'
     *  Logic: '<S12>/Logical2'
     */
    VeHPMC_b_AllwClsdMtrsNotEnbld = ((!VeHPMC_b_MtrSystemActive) &&
        (KeHPMR_b_AllwClsdMtrsNotEnbld));

    /* Outputs for Atomic SubSystem: '<S71>/Stop Watch Reset Enabled3' */
    /* Switch: '<S176>/Switch2' incorporates:
     *  Switch: '<S176>/Switch1'
     *  UnitDelay: '<S9>/Unit Delay1'
     */
    if (HPMR_ac_DW.UnitDelay1_DSTATE_l)
    {
        /* Switch: '<S176>/Switch1' incorporates:
         *  Constant: '<S176>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S176>/Switch1' incorporates:
         *  Sum: '<S176>/Subtraction'
         *  Switch: '<S176>/Switch2'
         *  UnitDelay: '<S176>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S176>/Switch2' */

    /* Update for UnitDelay: '<S176>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S71>/Stop Watch Reset Enabled3' */

    /* Logic: '<S71>/AND5' incorporates:
     *  Constant: '<S174>/Calib'
     *  Constant: '<S175>/Calib'
     *  RelationalOperator: '<S71>/Comparison7'
     */
    VeHPMC_b_PwrPnl_InvSts = (((VeHPMI_b_Worksite_Inverter_Active) ||
        (KeHPMR_b_DsblInv_Check)) || (rtb_Switch1_ne >= KeHPMR_t_InvStsChckTmout));

    /* RelationalOperator: '<S30>/LessThanOrEqual' incorporates:
     *  Constant: '<S139>/Calib'
     */
    VeHPMI_b_MCPA_CoreFail = (VeHPMI_U_HV_Volt <= KeHPMR_U_BusDischCmpltThresh);

    /* Outputs for Atomic SubSystem: '<S30>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S141>/EdgeRising' */
    /* Logic: '<S142>/AND' incorporates:
     *  Logic: '<S142>/OR1'
     *  UnitDelay: '<S142>/Unit Delay'
     */
    rtb_Comparison2_jy = (VeHPMI_b_MCPA_CoreFail &&
                          (!HPMR_ac_DW.UnitDelay_DSTATE_os));

    /* Update for UnitDelay: '<S142>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_os = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S141>/EdgeRising' */

    /* Switch: '<S141>/Switch1' incorporates:
     *  Constant: '<S140>/Calib'
     *  Constant: '<S141>/Constant Value'
     *  Logic: '<S141>/OR'
     *  Logic: '<S141>/OR1'
     *  MinMax: '<S141>/Minimum'
     *  Sum: '<S141>/Summation'
     *  UnitDelay: '<S141>/Unit Delay'
     */
    if ((!VeHPMI_b_MCPA_CoreFail) || rtb_Comparison2_jy)
    {
        /* Switch: '<S141>/Switch1' incorporates:
         *  Constant: '<S141>/Constant Value1'
         */
        rtb_Switch1_mp = 0U;
    }
    else if (KeHPMR_Cnt_ActDschDeb < ((uint16)(((uint32)
                HPMR_ac_DW.UnitDelay_DSTATE_ma) + 1U)))
    {
        /* MinMax: '<S141>/Minimum' incorporates:
         *  Constant: '<S140>/Calib'
         *  Switch: '<S141>/Switch1'
         */
        rtb_Switch1_mp = KeHPMR_Cnt_ActDschDeb;
    }
    else
    {
        /* Switch: '<S141>/Switch1' incorporates:
         *  Constant: '<S141>/Constant Value'
         *  MinMax: '<S141>/Minimum'
         *  Sum: '<S141>/Summation'
         *  UnitDelay: '<S141>/Unit Delay'
         */
        rtb_Switch1_mp = (uint16)(((uint32)HPMR_ac_DW.UnitDelay_DSTATE_ma) + 1U);
    }

    /* End of Switch: '<S141>/Switch1' */

    /* Logic: '<S141>/AND' incorporates:
     *  Constant: '<S140>/Calib'
     *  RelationalOperator: '<S141>/Greater  Than'
     */
    VeHPMC_b_VltBelowActvDschThres = (VeHPMI_b_MCPA_CoreFail && (rtb_Switch1_mp >=
        KeHPMR_Cnt_ActDschDeb));

    /* Update for UnitDelay: '<S141>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ma = rtb_Switch1_mp;

    /* End of Outputs for SubSystem: '<S30>/Turn On Delay Sample' */

    /* Logic: '<S11>/Logical Operator2' incorporates:
     *  Constant: '<S75>/Constant'
     *  Constant: '<S76>/Constant'
     *  Constant: '<S77>/Constant'
     *  Constant: '<S78>/Constant'
     *  RelationalOperator: '<S11>/Equal'
     *  RelationalOperator: '<S11>/Equal1'
     *  RelationalOperator: '<S11>/Equal2'
     *  RelationalOperator: '<S11>/Equal3'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch94'
     *  Switch: '<S7>/Switch95'
     */
    VeHPMI_b_MCPA_CoreFail = ((((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
        CeINVR_e_ActiveDischarge) || (((uint32)VeHPMI_e_MtrB_InvrtrSt) ==
        CeINVR_e_ActiveDischarge)) || (((uint32)VeHPMI_e_MtrA_Dschrge_Stat) ==
        CeINVR_e_AD_INPROGRESS)) || (((uint32)VeHPMI_e_MtrB_Dschrge_Stat) ==
        CeINVR_e_AD_INPROGRESS));

    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising' */
    /* Logic: '<S73>/OR1' incorporates:
     *  UnitDelay: '<S73>/Unit Delay'
     */
    rtb_Comparison2_jy = !HPMR_ac_DW.UnitDelay_DSTATE_dj;

    /* Update for UnitDelay: '<S73>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dj = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S11>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising1' */
    /* Logic: '<S74>/AND' incorporates:
     *  Logic: '<S74>/OR1'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    rtb_AND22_k = ((VeHPMR_b_MtrNotInActvDschrg) &&
                   (!HPMR_ac_DW.UnitDelay_DSTATE_i5));

    /* End of Outputs for SubSystem: '<S11>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S11>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S81>/EdgeFalling' */
    /* Logic: '<S82>/OR1' incorporates:
     *  Logic: '<S81>/AND'
     */
    rtb_UnitDelay_av = !rtb_AND22_k;

    /* Logic: '<S82>/AND' incorporates:
     *  Logic: '<S82>/OR1'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_AND_j3 = (rtb_UnitDelay_av && (HPMR_ac_DW.UnitDelay_DSTATE_b0p));

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_b0p = rtb_AND22_k;

    /* End of Outputs for SubSystem: '<S81>/EdgeFalling' */

    /* Switch: '<S81>/Switch' */
    if (rtb_AND_j3)
    {
        /* Switch: '<S81>/Switch' incorporates:
         *  Constant: '<S79>/Calib'
         */
        rtb_Switch1_mp = KeHPMR_Cnt_HoldMtrNotInActvDschrg;
    }
    else
    {
        /* Sum: '<S81>/Summation' incorporates:
         *  Constant: '<S81>/Constant Value'
         *  UnitDelay: '<S81>/Unit Delay'
         */
        tmp = ((sint32)HPMR_ac_DW.UnitDelay_DSTATE_cs) - 1;
        if ((((sint32)HPMR_ac_DW.UnitDelay_DSTATE_cs) - 1) < 0)
        {
            tmp = 0;
        }

        /* Switch: '<S81>/Switch' incorporates:
         *  Sum: '<S81>/Summation'
         */
        rtb_Switch1_mp = (uint16)tmp;
    }

    /* End of Switch: '<S81>/Switch' */

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cs = rtb_Switch1_mp;

    /* Outputs for Atomic SubSystem: '<S11>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising' */
    /* Logic: '<S80>/OR1' incorporates:
     *  Constant: '<S81>/Constant Value2'
     *  Logic: '<S11>/Logical Operator1'
     *  Logic: '<S73>/AND'
     *  Logic: '<S80>/NOT'
     *  Logic: '<S80>/OR'
     *  Logic: '<S81>/AND'
     *  RelationalOperator: '<S81>/Greater  Than'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = ((VeHPMI_b_MCPA_CoreFail && rtb_Comparison2_jy) ||
        (((rtb_UnitDelay_av && (((sint32)rtb_Switch1_mp) <= 0)) ||
          (!VeHPMC_b_VltBelowActvDschThres)) && (HPMR_ac_DW.UnitDelay_DSTATE_cw)));

    /* End of Outputs for SubSystem: '<S11>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S11>/Turn Off Delay Sample' */

    /* Update for UnitDelay: '<S80>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cw = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S11>/Signal Latch On With Reset' */

    /* Logic: '<S11>/Logical Operator' */
    VeHPMR_b_ActvDiscNotOcc = !VeHPMI_b_MCPA_CoreFail;

    /* Chart: '<S9>/HybSysSt_Machine' incorporates:
     *  Constant: '<S57>/Calib'
     *  Switch: '<S7>/Switch46'
     */
    /* Gateway: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt/HybSysSt_Machine */
    /* During: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt/HybSysSt_Machine */
    if (((uint32)HPMR_ac_DW.is_active_c4_HPMR_ac) == 0U)
    {
        /* Entry: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt/HybSysSt_Machine */
        HPMR_ac_DW.is_active_c4_HPMR_ac = 1U;

        /* Entry Internal: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt/HybSysSt_Machine */
        /* Transition: '<S31>:340' */
        HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_POWERUP;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'POWERUP': '<S31>:281' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_POWERUP;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Undetermined;
        HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = true;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;
        HPMR_ac_DW.VeHPMC_b_ForcePSADrop_m = false;

        /* VariantMerge generated from: '<S8>/LeHPMR_b_HighMtrStrtSpdActv' */
        HPMR_ac_B.LeHPMR_b_HighMtrStrtSpdActv = false;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = HPMR__GetHPMR_b_DtrmnPropSysAct();
        HPMR_ac_B.LeHPMR_e_PropSysMode_l = HPMR_GetHPMR_e_DtrmnPropSysMode();
        VeHPMR_Cnt_ALT_Mode_Retry = 0U;
    }
    else
    {
        guard1 = false;
        guard2 = false;
        guard3 = false;
        switch (HPMR_ac_DW.is_c4_HPMR_ac)
        {
          case HPMR_ac_IN_ALT_HV_ENBLD:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ALT_HV_ENABLED;

            /* During 'ALT_HV_ENBLD': '<S31>:843' */
            if (((((uint32)VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                 (VeHPMI_b_EnblMtrSys)) && (((((uint32)VeHPMI_e_MCPA_SPT_State) ==
                   CeINVR_e_Passed_SPT) && (((uint32)VeHPMI_e_MCPB_SPT_State) ==
                   CeINVR_e_Passed_SPT)) || (KeHPMR_b_Dsbl_MCPSPTChk_ALTMd)))
            {
                /* Transition: '<S31>:852' */
                /* Exit 'ALT_HV_ENBLD': '<S31>:843' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_ALT_HV_ENABLED;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_ENBL_INV_VC;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'ENBL_INV_VC': '<S31>:851' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_ENBL_INV_VC;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                    HP_GetHPMR_e_DtrmnInvrtrEnblCmd();

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_GetHPMR_e_DtrmnPropSysMode();
            }
            else if ((((((((uint32)VeHPMI_e_MCPA_SPT_State) ==
                          CeINVR_e_Failed_SPT) || (((uint32)
                           VeHPMI_e_MCPB_SPT_State) == CeINVR_e_Failed_SPT)) ||
                        (VeHPMC_b_MCP_SPT_Timeout)) || (VeHPMR_b_InverterFaulted))
                      || (VeHPMR_b_DsblInv)) && (((uint32)VeHPMI_e_HybEngSysActv)
                      != CeESSR_e_HybEngDisabled))
            {
                /* Transition: '<S31>:846' */
                /* Transition: '<S31>:891' */
                /* Transition: '<S31>:906' */
                guard1 = true;
            }
            else if ((((((uint32)VeHPMI_e_HybEngSysActv) ==
                        CeESSR_e_HybEngDisabled) || (VeHPMR_b_HVFaultsAltMd)) ||
                      (VeHPMR_b_FltShtDwnCmnd)) ||
                     (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                /* Transition: '<S31>:848' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

                /* Transition: '<S31>:906' */
                guard1 = true;
            }
            else if (!VeHPMI_b_EnblHVSys)
            {
                /* Transition: '<S31>:850' */
                guard1 = true;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_GetHPMR_e_DtrmnPropSysMode();
            }
            break;

          case HPMR_ac_IN_CMND_BUS_DISCH:
            HPMR_ac_CMND_BUS_DISCH();
            break;

          case HPMR_ac_IN_CMND_CNTCTR_OPN:
            HPMR_ac_CMND_CNTCTR_OPN(&VeHPMI_b_HighVoltageRapidShtdwn);
            break;

          case HPMR_ac_IN_DISBL_ALT_HV:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_ALT_HV;

            /* During 'DISBL_ALT_HV': '<S31>:982' */
            if (((((uint32)VeHPMI_e_APM_OperModeStatus) == CeGENR_e_Default) &&
                    (VeHPMI_U_HV_Volt < KeHPMR_U_BusDischCmpltThresh)) ||
                    (VeHPMR_t_StateTimer > KeHPMR_t_BusDischTimeout))
            {
                /* Transition: '<S31>:984' */
                /* Transition: '<S31>:885' */
                /* Transition: '<S31>:886' */
                /* Transition: '<S31>:947' */
                /* Transition: '<S31>:821' */
                /* Transition: '<S31>:822' */
                /* Exit 'DISBL_ALT_HV': '<S31>:982' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_DISBL_ALT_HV;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                    GetHPMR_b_UnintendedShtdwnOccEn();
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_ac_GetHPMR_e_DtrmnAltMode();
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();
            }
            break;

          case HPMR_ac_IN_DISBL_INV:
            HPMR_ac_DISBL_INV();
            break;

          case HPMR_ac_IN_DISBL_INV_VC:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV_VC;

            /* During 'DISBL_INV_VC': '<S31>:981' */
            if (((VeHPMR_b_InvertersDisabled) || (KeHPMR_b_12VP1f)) ||
                    (VeHPMR_t_StateTimer > KeHPMR_t_InvDisableTimeout))
            {
                /* Transition: '<S31>:983' */
                /* Exit 'DISBL_INV_VC': '<S31>:981' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_DISBL_INV_VC;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DISBL_ALT_HV;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DISBL_ALT_HV': '<S31>:982' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_ALT_HV;

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_ac_GetHPMR_e_DtrmnAltMode();
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_ac_GetHPMR_e_DtrmnAltMode();
            }
            break;

          case HPMR_ac_IN_DTRMN_HYBSYSST:
            HPMR_ac_DTRMN_HYBSYSST();
            break;

          case HPMR_ac_IN_ENBL_ALT_HV:
            HPMR_ac_ENBL_ALT_HV();
            break;

          case HPMR_ac_IN_ENBL_HV:
            HPMR_ac_ENBL_HV();
            break;

          case HPMR_ac_IN_ENBL_INV:
            HPMR_ac_ENBL_INV();
            break;

          case HPMR_ac_IN_ENBL_INV_VC:
            HPMR_ac_ENBL_INV_VC();
            break;

          case HPMR_ac_IN_EVAL_ALT_HV_ENBL:
            HPMR_ac_EVAL_ALT_HV_ENBL();
            break;

          case HPMR_ac_IN_EVAL_CNTCTR_OPN:
            HPMR_ac_EVAL_CNTCTR_OPN();
            break;

          case HPMR_ac_IN_EVAL_HV_ENBL:
            HPMR_ac_EVAL_HV_ENBL();
            break;

          case HPMR_ac_IN_EVAL_PRPLSN_DISBL:
            HPMR_ac_EVAL_PRPLSN_DISBL();
            break;

          case HPMR_ac_IN_HV_ENBLD:
            HPMR_ac_HV_ENBLD();
            break;

          case HPMR_ac_IN_INIT_CNTRLR_PWRDWN:
            HPMR_ac_INIT_CNTRLR_PWRDWN();
            break;

          case HPMR_ac_IN_INV_ENBLD:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INV_ENABLED;

            /* During 'INV_ENBLD': '<S31>:300' */
            if (((((((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed) &&
                     (VeHPMR_b_ImmobAuthVld)) && ((((uint32)
                       VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                     (((uint32)VeHPMI_e_HybEngSysActv) !=
                      CeESSR_e_HybEngEnabledOnIS))) && (VeHPMC_b_MtrSystemActive))
                  && (!VeHPMR_b_UnintendedFltShtdwn)) && (VeHPMI_b_EnblPrplsnSys))
                && (!VeHPMC_b_BattSysNotActv))
            {
                /* Transition: '<S31>:376' */
                /* Exit 'INV_ENBLD': '<S31>:300' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_INV_ENABLED;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_OPERATIONAL;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'OPERATIONAL': '<S31>:302' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL;

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive = true;
                HPMR_ac_B.LeHPMR_e_PropSysMode_l = CeHPMR_e_Hybrid;
            }
            else if (((((((VeHPMR_b_EngSysNotActvAftrCrnk) && (((uint32)
                            VeHPMI_e_HybEngSysActv) == CeESSR_e_HybEngDisabled))
                         && (VeHPMI_b_EnblPrplsnSys)) ||
                        (VeHPMR_b_ImmShtdwnCondMet)) ||
                       (VeHPMR_b_UnintendedShtdwn)) ||
                      (VeHPMR_b_UnintendedFltShtdwn)) ||
                     (VeHPMR_b_ImmoStat_NotVldTmout))
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                /* Transition: '<S31>:370' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

                /* Transition: '<S31>:561' */
                guard2 = true;
            }
            else if (((!VeHPMR_b_ImmoStat_AuthVld) || (!VeHPMI_b_EnblHVSys)) ||
                     (!VeHPMI_b_EnblMtrSys))
            {
                /* Transition: '<S31>:372' */
                guard2 = true;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                VeHPMR_b_ImmShtdwnCondMet = HPMR_GetHPMR_b_ImmShtdwnCondMet();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;

          case HPMR_ac_IN_INV_VC_ENBLD:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INV_VC_ENABLED;

            /* During 'INV_VC_ENBLD': '<S31>:868' */
            if ((((VeHPMR_b_MtrSysActv_VoltCntrl) && ((((uint32)
                     VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                    (((uint32)VeHPMI_e_HybEngSysActv) !=
                     CeESSR_e_HybEngEnabledOnIS))) && (VeHPMI_b_EnblPrplsnSys)) &&
                ((((uint32)VeHPMI_e_APM_OperModeStatus) == CeGENR_e_Default) &&
                    (VeHPMR_t_StateTimer > KeHPMR_t_APMFdbkDbnc)))
            {
                /* Transition: '<S31>:871' */
                /* Exit 'INV_VC_ENBLD': '<S31>:868' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_INV_VC_ENABLED;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR__IN_OPERATIONAL_ALTERNATOR;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'OPERATIONAL_ALTERNATOR': '<S31>:870' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_ALTERNATOR;

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                HPMR_ac_B.LeHPMR_e_APM_OperMode =
                    HPMR_GetHPMR_e_DtrmnAPMOperMode();

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive = true;
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_ac_GetHPMR_e_DtrmnAltMode();
                VeHPMR_Cnt_ALT_Mode_Retry = (uint16)((sint32)(((sint32)
                    VeHPMR_Cnt_ALT_Mode_Retry) + 1));
            }
            else if (((((!VeHPMR_b_MtrSysActv_VoltCntrl) ||
                        (VeHPMR_b_InverterFaulted)) || (VeHPMR_b_DsblInv)) ||
                      (VeHPMR_b_HVBatCntrWeld_ImpdOpn)) && (((uint32)
                       VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled))
            {
                /* Transition: '<S31>:873' */
                /* Transition: '<S31>:889' */
                /* Transition: '<S31>:902' */
                guard3 = true;
            }
            else if ((((((uint32)VeHPMI_e_HybEngSysActv) ==
                        CeESSR_e_HybEngDisabled) || (VeHPMR_b_HVFaultsAltMd)) ||
                      (VeHPMR_b_FltShtDwnCmnd)) ||
                     (VeHPMR_b_HVBatCntrWeld_ImpdOpnHV))
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                /* Transition: '<S31>:875' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

                /* Transition: '<S31>:902' */
                guard3 = true;
            }
            else if ((!VeHPMI_b_EnblHVSys) || (!VeHPMI_b_EnblMtrSys))
            {
                /* Transition: '<S31>:877' */
                guard3 = true;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;

          case HPMR_ac_IN_OPERATIONAL:
            HPMR_ac_OPERATIONAL();
            break;

          case HPMR__IN_OPERATIONAL_ALTERNATOR:
            HPMR_ac_OPERATIONAL_ALTERNATOR();
            break;

          case HPM_IN_OPERATIONAL_CONVENTIONAL:
            HPMR_a_OPERATIONAL_CONVENTIONAL();
            break;

          case HPMR_ac_IN_POWERUP:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_POWERUP;
            HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g = CeHPMR_e_Undetermined;

            /* During 'POWERUP': '<S31>:281' */
            if ((VeHPMI_b_EnblHVSys) && (VeHPMR_t_StateTimer >=
                    KeHPMR_t_DvlpmntPowerupDelay))
            {
                /* Transition: '<S31>:345' */
                /* Exit 'POWERUP': '<S31>:281' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_POWERUP;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_EVAL_HV_ENBL;
                HPMR__enter_atomic_EVAL_HV_ENBL();
            }
            else if (((VeHPMI_b_FOTAOvrrdEnblHVSys) && (VeHPMR_t_StateTimer >=
                       KeHPMR_t_FOTATimeOut)) || (VeHPMR_t_StateTimer >
                      KeHPMR_t_SysPowerupTimeOut))
            {
                /* Transition: '<S31>:697' */
                /* Transition: '<S31>:707' */
                /* Transition: '<S31>:708' */
                /* Exit 'POWERUP': '<S31>:281' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_POWERUP;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'INIT_CNTRLR_PWRDWN': '<S31>:473' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
                HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c = false;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_GetHPMR_e_DtrmnPropSysMode();
            }
            break;

          default:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_PRPLSN_DISABLED;

            /* During 'PRPLSN_DISBLD': '<S31>:304' */
            if (((!VeHPMI_b_EnblMtrSys) || (VeHPMR_b_CollisionDetection)) ||
                    (VeHPMR_t_StateTimer >= KeHPMR_t_PrplsnDisblCnfrmTmr))
            {
                /* Transition: '<S31>:391' */
                /* Exit 'PRPLSN_DISBLD': '<S31>:304' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_PRPLSN_DISABLED;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DISBL_INV;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DISBL_INV': '<S31>:305' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProces();

                /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                    H_GetHPMR_e_DtrmnInvrtrDisblCmd();
                VeHPMR_b_ImmShtdwnCondMet = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPMR__GetHPMR_b_DtrmnPropSysAct();
                HPMR_ac_B.LeHPMR_e_PropSysMode_l =
                    HPMR_GetHPMR_e_DtrmnPropSysMode();
            }
            else if ((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaultsAltMd))
            {
                /* Transition: '<S31>:389' */
                /* Transition: '<S31>:571' */
                /* Transition: '<S31>:521' */
                /* Exit 'PRPLSN_DISBLD': '<S31>:304' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_PRPLSN_DISABLED;
                HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                    GetHPMR_b_UnintendedShtdwnOccEn();
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;
            }
            else
            {
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProces();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;
        }

        if (guard3)
        {
            /* Transition: '<S31>:898' */
            /* Exit 'INV_VC_ENBLD': '<S31>:868' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_INV_VC_ENABLED;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;
        }

        if (guard2)
        {
            /* Transition: '<S31>:506' */
            /* Exit 'INV_ENBLD': '<S31>:300' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_INV_ENABLED;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;
        }

        if (guard1)
        {
            /* Transition: '<S31>:905' */
            /* Transition: '<S31>:890' */
            /* Transition: '<S31>:904' */
            /* Transition: '<S31>:903' */
            /* Transition: '<S31>:889' */
            /* Transition: '<S31>:902' */
            /* Transition: '<S31>:898' */
            /* Exit 'ALT_HV_ENBLD': '<S31>:843' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_ALT_HV_ENABLED;
            HPMR_ac_DW.is_c4_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'DTRMN_HYBSYSST': '<S31>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOccEn();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpCondition();

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* End of Chart: '<S9>/HybSysSt_Machine' */

    /* RelationalOperator: '<S68>/Comparison4' incorporates:
     *  RelationalOperator: '<S68>/Comparison1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    VeHPMI_b_HighVoltageRapidShtd_0 = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* If: '<S68>/If' incorporates:
     *  Constant: '<S165>/Constant'
     *  Constant: '<S166>/Constant'
     *  Constant: '<S167>/Calib'
     *  Logic: '<S68>/Logical'
     *  Logic: '<S68>/Logical2'
     *  RelationalOperator: '<S68>/Comparison1'
     *  RelationalOperator: '<S68>/Comparison4'
     */
    if (((HPMR_ac_B.VariantMergeForOutportVeHPMC__n) && ((((uint32)
            VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_CMND_BUS_DISCHARGE) ||
            (((uint32)VeHPMI_b_HighVoltageRapidShtd_0) ==
             CeHPMR_e_INIT_CNTRLR_PWRDWN))) && (KeHPMR_b_Enbl_LossCommORC))
    {
        /* Outputs for IfAction SubSystem: '<S68>/Store_ORCLOC_Mem' incorporates:
         *  ActionPort: '<S168>/Action Port'
         */
        HPMR_ac_Store_ORCLOC_Mem();

        /* End of Outputs for SubSystem: '<S68>/Store_ORCLOC_Mem' */
    }

    /* End of If: '<S68>/If' */

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive' incorporates:
     *  Logic: '<S13>/AND'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__j = VeHPMC_b_PropulsionSystemActive;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess1' incorporates:
     *  Logic: '<S14>/AND'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR__p = VeHPMR_b_ShutdownInProcess;

    /* Logic: '<S15>/AND' */
    VeHPMC_b_CntrlrPwrHold = HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_c;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_ContactorsClosedThisKeyOut' incorporates:
     *  Logic: '<S17>/AND'
     */
    HPMR_ac_B.VeHPMC_b_ContactorsClosedThisKe = VeHPMC_b_ContactorsClosedThisKey;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_MtrSystemActiveOut' incorporates:
     *  Logic: '<S18>/AND'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR_b_ = VeHPMC_b_MtrSystemActive;

    /* Logic: '<S20>/Logical10' incorporates:
     *  Constant: '<S91>/Constant'
     *  Logic: '<S20>/Logical1'
     *  RelationalOperator: '<S20>/Comparison4'
     *  RelationalOperator: '<S21>/Comparison2'
     *  Switch: '<S7>/Switch42'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = ((!VeHPMC_b_CntrlrPwrHold) && (((uint32)
        VeHPMI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Off));

    /* Outputs for Atomic SubSystem: '<S20>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S105>/EdgeFalling1' */
    /* UnitDelay: '<S122>/Unit Delay' incorporates:
     *  UnitDelay: '<S114>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = HPMR_ac_DW.UnitDelay_DSTATE_kx;

    /* Update for UnitDelay: '<S114>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_kx = VeHPMI_b_AccRunActiveAnalog;

    /* Logic: '<S114>/OR1' incorporates:
     *  Logic: '<S105>/AND'
     */
    tmpRead_1y = !VeHPMI_b_AccRunActiveAnalog;

    /* Switch: '<S105>/Switch' incorporates:
     *  Logic: '<S114>/AND'
     *  Logic: '<S114>/OR1'
     */
    if (tmpRead_1y && VeHPMI_b_MCPA_CoreFail)
    {
        /* Switch: '<S105>/Switch' incorporates:
         *  Constant: '<S97>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_DbncPADShtdwn;
    }
    else
    {
        /* Switch: '<S105>/Switch' incorporates:
         *  Constant: '<S105>/Constant Value1'
         *  MinMax: '<S105>/Minimum'
         *  Sum: '<S105>/Summation'
         *  UnitDelay: '<S105>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_h1 -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S105>/Switch' */
    /* End of Outputs for SubSystem: '<S105>/EdgeFalling1' */

    /* Update for UnitDelay: '<S105>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_h1 = rtb_Switch1_ne;

    /* Logic: '<S20>/Logical' incorporates:
     *  Constant: '<S105>/Constant Value2'
     *  Constant: '<S94>/Calib'
     *  Logic: '<S105>/AND'
     *  Logic: '<S20>/Logical8'
     *  Logic: '<S20>/Logical9'
     *  RelationalOperator: '<S105>/Greater  Than'
     */
    VeHPMI_b_MCPA_CoreFail = (VeHPMI_b_HighVoltageRapidShtdwn && ((tmpRead_1y &&
        (rtb_Switch1_ne <= 0.0F)) || (KeHPMR_b_OvrdPADShtdwn)));

    /* End of Outputs for SubSystem: '<S20>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S106>/EdgeRising' */
    /* Logic: '<S115>/AND' incorporates:
     *  Logic: '<S115>/OR1'
     *  UnitDelay: '<S115>/Unit Delay'
     */
    rtb_Comparison2_jy = (VeHPMI_b_MCPA_CoreFail &&
                          (!HPMR_ac_DW.UnitDelay_DSTATE_dc));

    /* Update for UnitDelay: '<S115>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dc = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S106>/EdgeRising' */

    /* Switch: '<S106>/Switch1' incorporates:
     *  Logic: '<S106>/OR'
     *  Logic: '<S106>/OR1'
     */
    if ((!VeHPMI_b_MCPA_CoreFail) || rtb_Comparison2_jy)
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  Constant: '<S106>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  Constant: '<S95>/Calib'
         *  MinMax: '<S106>/Minimum'
         *  Sum: '<S106>/Summation'
         *  UnitDelay: '<S106>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_AfterRunShtDnTmr, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_dt);
    }

    /* End of Switch: '<S106>/Switch1' */

    /* Update for UnitDelay: '<S106>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dt = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S107>/EdgeRising' */
    /* Logic: '<S116>/AND' incorporates:
     *  Logic: '<S116>/OR1'
     *  UnitDelay: '<S116>/Unit Delay'
     */
    rtb_Comparison2_jy = (VeHPMI_b_MCPA_CoreFail &&
                          (!HPMR_ac_DW.UnitDelay_DSTATE_o4));

    /* Update for UnitDelay: '<S116>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_o4 = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S107>/EdgeRising' */

    /* Switch: '<S107>/Switch1' incorporates:
     *  Logic: '<S107>/OR'
     *  Logic: '<S107>/OR1'
     */
    if ((!VeHPMI_b_MCPA_CoreFail) || rtb_Comparison2_jy)
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S107>/Constant Value1'
         */
        rtb_Switch1_a = 0.0F;
    }
    else
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S96>/Calib'
         *  MinMax: '<S107>/Minimum'
         *  Sum: '<S107>/Summation'
         *  UnitDelay: '<S107>/Unit Delay'
         */
        rtb_Switch1_a = fminf(KeHPMR_t_ChgPortRelockShtDnTmr,
                              HPMR_ac_B.LeHPMR_t_dT +
                              HPMR_ac_DW.UnitDelay_DSTATE_lb);
    }

    /* End of Switch: '<S107>/Switch1' */

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_lb = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time1' */

    /* RelationalOperator: '<S20>/Comparison1' incorporates:
     *  Constant: '<S93>/Constant'
     *  Switch: '<S7>/Switch28'
     */
    rtb_Comparison2_jy = (((uint32)VeHPMI_e_InitStatus) == CeSCPR_e_InitComplete);

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S108>/EdgeRising' */
    /* Logic: '<S117>/AND' incorporates:
     *  Logic: '<S117>/OR1'
     *  UnitDelay: '<S117>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_bhm));

    /* Update for UnitDelay: '<S117>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bhm = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S108>/EdgeRising' */

    /* Switch: '<S108>/Switch1' incorporates:
     *  Logic: '<S108>/OR'
     *  Logic: '<S108>/OR1'
     */
    if ((!rtb_Comparison2_jy) || rtb_AND22_k)
    {
        /* Switch: '<S108>/Switch1' incorporates:
         *  Constant: '<S108>/Constant Value1'
         */
        rtb_Switch1_d3 = 0.0F;
    }
    else
    {
        /* Switch: '<S108>/Switch1' incorporates:
         *  Constant: '<S98>/Calib'
         *  MinMax: '<S108>/Minimum'
         *  Sum: '<S108>/Summation'
         *  UnitDelay: '<S108>/Unit Delay'
         */
        rtb_Switch1_d3 = fminf(KeHPMR_t_DbncRadioSCPR_InitDone,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_jo);
    }

    /* End of Switch: '<S108>/Switch1' */

    /* Update for UnitDelay: '<S108>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_jo = rtb_Switch1_d3;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time2' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising' */
    /* Logic: '<S119>/AND' incorporates:
     *  Logic: '<S119>/OR1'
     *  UnitDelay: '<S119>/Unit Delay'
     */
    rtb_AND22_k = (VeHPMI_b_HighVoltageRapidShtdwn &&
                   (!HPMR_ac_DW.UnitDelay_DSTATE_ps));

    /* Update for UnitDelay: '<S119>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ps = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S110>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time5' */
    /* Logic: '<S110>/OR1' incorporates:
     *  Logic: '<S111>/OR1'
     */
    tmpRead_1y = !VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time5' */

    /* Switch: '<S110>/Switch1' incorporates:
     *  Logic: '<S110>/OR'
     *  Logic: '<S110>/OR1'
     */
    if (tmpRead_1y || rtb_AND22_k)
    {
        /* Switch: '<S110>/Switch1' incorporates:
         *  Constant: '<S110>/Constant Value1'
         */
        rtb_Abs = 0.0F;
    }
    else
    {
        /* Switch: '<S110>/Switch1' incorporates:
         *  Constant: '<S102>/Calib'
         *  MinMax: '<S110>/Minimum'
         *  Sum: '<S110>/Summation'
         *  UnitDelay: '<S110>/Unit Delay'
         */
        rtb_Abs = fminf(KeHPMR_t_SCPRInitTmot, HPMR_ac_B.LeHPMR_t_dT +
                        HPMR_ac_DW.UnitDelay_DSTATE_ik);
    }

    /* End of Switch: '<S110>/Switch1' */

    /* Update for UnitDelay: '<S110>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ik = rtb_Abs;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time4' */

    /* Logic: '<S20>/Logical13' */
    rtb_AND22_k = !VeHPMI_b_ThrmlSystRly_EnblCmnd;

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising' */
    /* Logic: '<S118>/AND' incorporates:
     *  Logic: '<S118>/OR1'
     *  UnitDelay: '<S118>/Unit Delay'
     */
    rtb_AND_j3 = (rtb_AND22_k && (!HPMR_ac_DW.UnitDelay_DSTATE_f5));

    /* Update for UnitDelay: '<S118>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_f5 = rtb_AND22_k;

    /* End of Outputs for SubSystem: '<S109>/EdgeRising' */

    /* Switch: '<S109>/Switch1' incorporates:
     *  Logic: '<S109>/OR'
     *  Logic: '<S109>/OR1'
     */
    if ((!rtb_AND22_k) || rtb_AND_j3)
    {
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S109>/Constant Value1'
         */
        rtb_Switch1_bzy = 0.0F;
    }
    else
    {
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S99>/Calib'
         *  MinMax: '<S109>/Minimum'
         *  Sum: '<S109>/Summation'
         *  UnitDelay: '<S109>/Unit Delay'
         */
        rtb_Switch1_bzy = fminf(KeHPMR_t_DbncThermalLINDsbl,
                                HPMR_ac_B.LeHPMR_t_dT +
                                HPMR_ac_DW.UnitDelay_DSTATE_cu);
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Update for UnitDelay: '<S109>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cu = rtb_Switch1_bzy;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time3' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time5' */
    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising' */
    /* Logic: '<S120>/AND' incorporates:
     *  Logic: '<S120>/OR1'
     *  UnitDelay: '<S120>/Unit Delay'
     */
    rtb_AND_j3 = (VeHPMI_b_HighVoltageRapidShtdwn &&
                  (!HPMR_ac_DW.UnitDelay_DSTATE_mj));

    /* Update for UnitDelay: '<S120>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mj = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S111>/EdgeRising' */

    /* Switch: '<S111>/Switch1' incorporates:
     *  Logic: '<S111>/OR'
     */
    if (tmpRead_1y || rtb_AND_j3)
    {
        /* Switch: '<S111>/Switch1' incorporates:
         *  Constant: '<S111>/Constant Value1'
         */
        rtb_Switch1_ap = 0.0F;
    }
    else
    {
        /* Switch: '<S111>/Switch1' incorporates:
         *  Constant: '<S103>/Calib'
         *  MinMax: '<S111>/Minimum'
         *  Sum: '<S111>/Summation'
         *  UnitDelay: '<S111>/Unit Delay'
         */
        rtb_Switch1_ap = fminf(KeHPMR_t_ThrmlShtdwnTmot, HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_b0);
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Update for UnitDelay: '<S111>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_b0 = rtb_Switch1_ap;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time5' */

    /* Logic: '<S20>/Logical16' incorporates:
     *  Logic: '<S20>/Logical17'
     */
    rtb_AND_j3 = (VeHPMI_b_MCPA_CoreFail && (!VeHPMI_b_HVDspt_Enbl));

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time6' */
    /* Outputs for Atomic SubSystem: '<S112>/EdgeRising' */
    /* Logic: '<S121>/AND' incorporates:
     *  Logic: '<S121>/OR1'
     *  UnitDelay: '<S121>/Unit Delay'
     */
    rtb_UnitDelay_av = (rtb_AND_j3 && (!HPMR_ac_DW.UnitDelay_DSTATE_mo));

    /* Update for UnitDelay: '<S121>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mo = rtb_AND_j3;

    /* End of Outputs for SubSystem: '<S112>/EdgeRising' */

    /* Switch: '<S112>/Switch1' incorporates:
     *  Logic: '<S112>/OR'
     *  Logic: '<S112>/OR1'
     */
    if ((!rtb_AND_j3) || rtb_UnitDelay_av)
    {
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S112>/Constant Value1'
         */
        rtb_Switch1_huz = 0.0F;
    }
    else
    {
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S100>/Calib'
         *  MinMax: '<S112>/Minimum'
         *  Sum: '<S112>/Summation'
         *  UnitDelay: '<S112>/Unit Delay'
         */
        rtb_Switch1_huz = fminf(KeHPMR_t_HVDsptShtDnTmr, HPMR_ac_B.LeHPMR_t_dT +
                                HPMR_ac_DW.UnitDelay_DSTATE_hz);
    }

    /* End of Switch: '<S112>/Switch1' */

    /* Update for UnitDelay: '<S112>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hz = rtb_Switch1_huz;

    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time6' */

    /* Switch: '<S72>/Switch' incorporates:
     *  Constant: '<S178>/Calib'
     */
    if (KeHPMR_b_EnblSecured_to_Shtdwn)
    {
        /* Switch: '<S72>/Switch' */
        VeHPMC_b_Secured_To_Shtdwn = VeHPMI_b_Secured_To_Shtdwn;
    }
    else
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S177>/Constant'
         *  RelationalOperator: '<S72>/Comparison4'
         *  Switch: '<S7>/Switch24'
         */
        VeHPMC_b_Secured_To_Shtdwn = (((uint32)VeHPMI_e_VldtdTransRngSt) ==
            CeTRGR_e_TransRangePark);
    }

    /* End of Switch: '<S72>/Switch' */

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time7' */
    /* Outputs for Atomic SubSystem: '<S113>/EdgeRising' */
    /* Logic: '<S122>/AND' incorporates:
     *  Logic: '<S122>/OR1'
     *  UnitDelay: '<S122>/Unit Delay'
     */
    rtb_UnitDelay_av = (VeHPMI_b_MCPA_CoreFail &&
                        (!HPMR_ac_DW.UnitDelay_DSTATE_i0i));

    /* Update for UnitDelay: '<S122>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_i0i = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S113>/EdgeRising' */

    /* Switch: '<S113>/Switch1' incorporates:
     *  Logic: '<S113>/OR'
     *  Logic: '<S113>/OR1'
     */
    if ((!VeHPMI_b_MCPA_CoreFail) || rtb_UnitDelay_av)
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S113>/Constant Value1'
         */
        rtb_Switch1_pc = 0.0F;
    }
    else
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S101>/Calib'
         *  MinMax: '<S113>/Minimum'
         *  Sum: '<S113>/Summation'
         *  UnitDelay: '<S113>/Unit Delay'
         */
        rtb_Switch1_pc = fminf(KeHPMR_t_ParkAchvdTimeout, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_el);
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Update for UnitDelay: '<S113>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_el = rtb_Switch1_pc;

    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time5' */
    /* Outputs for Atomic SubSystem: '<S20>/Turn On Delay Time6' */
    /* If: '<S20>/If' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S92>/Constant'
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/Calib'
     *  Constant: '<S98>/Calib'
     *  Constant: '<S99>/Calib'
     *  Logic: '<S106>/AND'
     *  Logic: '<S107>/AND'
     *  Logic: '<S108>/AND'
     *  Logic: '<S109>/AND'
     *  Logic: '<S110>/AND'
     *  Logic: '<S111>/AND'
     *  Logic: '<S112>/AND'
     *  Logic: '<S113>/AND'
     *  Logic: '<S20>/Logical11'
     *  Logic: '<S20>/Logical12'
     *  Logic: '<S20>/Logical14'
     *  Logic: '<S20>/Logical15'
     *  Logic: '<S20>/Logical18'
     *  Logic: '<S20>/Logical2'
     *  Logic: '<S20>/Logical3'
     *  Logic: '<S20>/Logical4'
     *  Logic: '<S20>/Logical5'
     *  Logic: '<S20>/Logical6'
     *  Logic: '<S20>/Logical7'
     *  RelationalOperator: '<S106>/Greater  Than'
     *  RelationalOperator: '<S107>/Greater  Than'
     *  RelationalOperator: '<S108>/Greater  Than'
     *  RelationalOperator: '<S109>/Greater  Than'
     *  RelationalOperator: '<S110>/Greater  Than'
     *  RelationalOperator: '<S111>/Greater  Than'
     *  RelationalOperator: '<S112>/Greater  Than'
     *  RelationalOperator: '<S113>/Greater  Than'
     *  RelationalOperator: '<S20>/Comparison2'
     *  Switch: '<S7>/Switch83'
     */
    if (((((((VeHPMI_b_MCPA_CoreFail && (((!VeHPMI_b_HCP_LTP_FanAftRun_Rq) ||
                (VeHPMI_b_RdyForShtDwn)) || (VeHPMI_b_MCPA_CoreFail &&
                (rtb_Switch1_ne >= KeHPMR_t_AfterRunShtDnTmr)))) &&
             ((!VeHPMI_b_RelockTimerActive) || (VeHPMI_b_MCPA_CoreFail &&
               (rtb_Switch1_a >= KeHPMR_t_ChgPortRelockShtDnTmr)))) &&
            ((rtb_Comparison2_jy && (rtb_Switch1_d3 >=
               KeHPMR_t_DbncRadioSCPR_InitDone)) ||
             (VeHPMI_b_HighVoltageRapidShtdwn && (rtb_Abs >=
               KeHPMR_t_SCPRInitTmot)))) && ((rtb_AND22_k && (rtb_Switch1_bzy >=
              KeHPMR_t_DbncThermalLINDsbl)) || (VeHPMI_b_HighVoltageRapidShtdwn &&
             (rtb_Switch1_ap >= KeHPMR_t_ThrmlShtdwnTmot)))) &&
            ((!HPMR_ac_B.VariantMergeForOutportVeHPMC__e) || (((uint32)
             VeHPMI_e_FOTA_Install_Status) != CeCITR_e_Installation_Complete))) &&
         (rtb_AND_j3 && (rtb_Switch1_huz >= KeHPMR_t_HVDsptShtDnTmr))) &&
            ((VeHPMC_b_Secured_To_Shtdwn) || (VeHPMI_b_MCPA_CoreFail &&
            (rtb_Switch1_pc >= KeHPMR_t_ParkAchvdTimeout))))
    {
        /* Outputs for IfAction SubSystem: '<S20>/CntrlrPwrHold_0' incorporates:
         *  ActionPort: '<S89>/Action Port'
         */
        HPMR_ac_CntrlrPwrHold_0(&HPMR_ac_B.VariantMergeForOutportLeHPMR_b_);

        /* End of Outputs for SubSystem: '<S20>/CntrlrPwrHold_0' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S20>/CntrlrPwrHold_1' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        HPMR_ac_CntrlrPwrHold_1(&HPMR_ac_B.VariantMergeForOutportLeHPMR_b_);

        /* End of Outputs for SubSystem: '<S20>/CntrlrPwrHold_1' */
    }

    /* End of If: '<S20>/If' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time6' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time5' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time3' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time4' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time2' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S20>/Turn On Delay Time7' */

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PrepareToShtdwn' incorporates:
     *  Gain: '<S104>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__i = VeHPMI_b_HighVoltageRapidShtdwn;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt' incorporates:
     *  DataTypeConversion: '<S23>/DataTypeConversion'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    HPMR_ac_B.VariantMergeForOutportLeHPMR_e_ = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion'
     */
    VeHPMC_e_BattCntctrCmd = HPMR_ac_B.LeHPMC_e_BattCntctrCmd_g;

    /* DataTypeConversion: '<S25>/DataTypeConversion' */
    VeHPMR_e_SrcSysSt = VeHPMC_e_Src_HybSysSt;

    /* DataTypeConversion: '<S26>/DataTypeConversion' */
    VeHPMR_e_TrgtSysSt = VeHPMR_e_Trgt_HybSysSt;

    /* Outputs for Atomic SubSystem: '<S58>/Stop Watch Reset Enabled1' */
    /* Switch: '<S153>/Switch2' incorporates:
     *  Logic: '<S58>/Logical5'
     *  Switch: '<S153>/Switch1'
     */
    if (!VeHPMC_b_PropulsionSystemActive)
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S153>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Sum: '<S153>/Subtraction'
         *  Switch: '<S153>/Switch2'
         *  UnitDelay: '<S153>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_iv;
    }

    /* End of Switch: '<S153>/Switch2' */

    /* Update for UnitDelay: '<S153>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_iv = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S58>/Stop Watch Reset Enabled1' */

    /* VariantMerge generated from: '<S8>/VeHPMR_t_PropSysActv' incorporates:
     *  Gain: '<S152>/Gain'
     */
    HPMR_ac_B.VeHPMR_t_PropSysActv = rtb_Switch1_ne;

    /* RelationalOperator: '<S59>/Comparison4' incorporates:
     *  Switch: '<S59>/Switch'
     */
    tmp_0 = HPMR_ac_B.LeHPMR_e_PropSysMode_l;

    /* Switch: '<S59>/Switch' incorporates:
     *  Constant: '<S155>/Constant'
     *  Constant: '<S156>/Calib'
     *  Logic: '<S59>/Logical'
     *  RelationalOperator: '<S59>/Comparison4'
     */
    if (((KeHPMR_b_EnblPropSysModeOvrd) && (VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq)) &&
        (((uint32)tmp_0) == CeHPMR_e_Hybrid))
    {
        /* VariantMerge generated from: '<S8>/LeHPMR_e_PropSysMode' incorporates:
         *  Constant: '<S154>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_PropSysMode_k = CeHPMR_e_Conventional;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/LeHPMR_e_PropSysMode' */
        HPMR_ac_B.LeHPMR_e_PropSysMode_k = tmp_0;
    }

    /* Gain: '<S61>/Gain' */
    VeHPMR_b_InitPwrUp = VeHPMC_b_InitPwrUp;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_MCP_SPT_TimeoutOut' incorporates:
     *  Gain: '<S62>/Gain'
     */
    HPMR_ac_B.VeHPMC_b_MCP_SPT_TimeoutOut = VeHPMC_b_MCP_SPT_Timeout;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_ImmoStat_NotVldTmout' incorporates:
     *  Gain: '<S63>/Gain'
     */
    VeHPMC_b_ImmoStat_NotVldTmout = VeHPMR_b_ImmoStat_NotVldTmout;

    /* Logic: '<S70>/Logical' incorporates:
     *  Constant: '<S173>/Constant'
     *  Logic: '<S70>/Logical10'
     *  RelationalOperator: '<S69>/Comparison7'
     *  RelationalOperator: '<S70>/Comparison7'
     *  Switch: '<S7>/Switch13'
     */
    VeHPMC_b_EnblV2L = ((!VeHPMR_b_ShutdownInProcess) && (((uint32)
                          VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed));

    /* VariantMerge generated from: '<S8>/VeHPMC_b_EnblV2L' incorporates:
     *  Gain: '<S64>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__d = VeHPMC_b_EnblV2L;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_PrechargeFailure' incorporates:
     *  Gain: '<S65>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR__c =
        HPMR_ac_B.LeHPMR_b_PrechargeFailure;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_UnintendedShtdwnOcc' incorporates:
     *  Gain: '<S66>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR__h =
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* VariantMerge generated from: '<S8>/LeHPMC_b_ContactorsClosedThisKeyOld' incorporates:
     *  UnitDelay: '<S9>/Unit Delay'
     */
    HPMR_ac_B.LeHPMC_b_ContactorsClosedThisKe = HPMR_ac_DW.UnitDelay_DSTATE_pu;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_CommandContactorsOpenOld' incorporates:
     *  UnitDelay: '<S9>/Unit Delay2'
     */
    VeHPMR_b_CommandContactorsOpenOld = HPMR_ac_DW.UnitDelay2_DSTATE_p;

    /* End of Outputs for SubSystem: '<S8>/DetHybSysSt' */
#else

    /* Outputs for Atomic SubSystem: '<S8>/DetHybSysSt_BEV' */
    /* Logic: '<S219>/Logical1' incorporates:
     *  Constant: '<S355>/Calib'
     */
    VeHPMI_b_MCPA_CoreFail = ((HPMR_ac_B.VeHPMR_b_FinalImpactSignal) &&
        (KeHPMR_b_Enbl_CritFltLatch));

    /* Logic: '<S10>/Logical6' */
    rtb_Comparison2_jy = !VeHPMI_b_HV_BatCntctrStatFA;

    /* Switch: '<S221>/Switch' incorporates:
     *  RelationalOperator: '<S200>/Comparison4'
     *  Switch: '<S7>/Switch51'
     */
    rtb_AND_j3 = (((uint32)VeHPMI_e_HCPImmoStatCanC) == CeIMOR_e_HCPKILL);

    /* Logic: '<S200>/Logical11' */
    rtb_AND22_k = !rtb_AND_j3;

    /* RelationalOperator: '<S200>/Comparison6' incorporates:
     *  RelationalOperator: '<S186>/Equal2'
     *  RelationalOperator: '<S188>/Comparison4'
     *  RelationalOperator: '<S188>/Comparison6'
     *  RelationalOperator: '<S200>/Comparison5'
     *  UnitDelay: '<S10>/Unit Delay3'
     */
    VeHPMI_b_HighVoltageRapidShtd_0 = HPMR_ac_DW.UnitDelay3_DSTATE;

    /* Logic: '<S200>/AND2' incorporates:
     *  Logic: '<S200>/AND5'
     *  RelationalOperator: '<S200>/Comparison5'
     *  RelationalOperator: '<S200>/Comparison6'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (rtb_AND_j3 && ((((uint32)
        VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_ENBL_INV) || (((uint32)
        VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_INV_ENABLED)));

    /* Outputs for Atomic SubSystem: '<S200>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S333>/EdgeRising' */
    /* Logic: '<S343>/AND' incorporates:
     *  Logic: '<S343>/OR1'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    rtb_AND_j3 = (VeHPMI_b_HighVoltageRapidShtdwn &&
                  (!HPMR_ac_DW.UnitDelay_DSTATE_en));

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_en = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S333>/EdgeRising' */

    /* Switch: '<S333>/Switch1' incorporates:
     *  Logic: '<S333>/OR'
     *  Logic: '<S333>/OR1'
     */
    if ((!VeHPMI_b_HighVoltageRapidShtdwn) || rtb_AND_j3)
    {
        /* Switch: '<S333>/Switch1' incorporates:
         *  Constant: '<S333>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S333>/Switch1' incorporates:
         *  Constant: '<S332>/Calib'
         *  MinMax: '<S333>/Minimum'
         *  Sum: '<S333>/Summation'
         *  UnitDelay: '<S333>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_ImmobAuthTmr, HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_nm);
    }

    /* End of Switch: '<S333>/Switch1' */

    /* Logic: '<S333>/AND' incorporates:
     *  Constant: '<S332>/Calib'
     *  RelationalOperator: '<S333>/Greater  Than'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (rtb_Switch1_ne >= KeHPMR_t_ImmobAuthTmr));

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_nm = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S200>/Turn On Delay Time' */

    /* Logic: '<S186>/AND13' incorporates:
     *  Constant: '<S233>/Calib'
     *  RelationalOperator: '<S186>/Equal2'
     *  RelationalOperator: '<S186>/Less  Than2'
     */
    rtb_AND_j3 = ((((uint32)VeHPMI_b_HighVoltageRapidShtd_0) ==
                   CeHPMR_e_CMND_CNTCTR_OPEN) && (VeHPMI_U_HV_Volt <
                   KeHPMR_U_DiscHV_BusShutdown));

    /* Outputs for Atomic SubSystem: '<S186>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S235>/EdgeRising' */
    /* Logic: '<S239>/AND' incorporates:
     *  Logic: '<S239>/OR1'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    rtb_UnitDelay_av = (rtb_AND_j3 && (!HPMR_ac_DW.UnitDelay_DSTATE_p1));

    /* Update for UnitDelay: '<S239>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_p1 = rtb_AND_j3;

    /* End of Outputs for SubSystem: '<S235>/EdgeRising' */

    /* Switch: '<S235>/Switch1' incorporates:
     *  Logic: '<S235>/OR'
     *  Logic: '<S235>/OR1'
     */
    if ((!rtb_AND_j3) || rtb_UnitDelay_av)
    {
        /* Update for UnitDelay: '<S235>/Unit Delay' incorporates:
         *  Constant: '<S235>/Constant Value1'
         *  Switch: '<S235>/Switch1'
         */
        HPMR_ac_DW.UnitDelay_DSTATE_fb = 0.0F;
    }
    else
    {
        /* Update for UnitDelay: '<S235>/Unit Delay' incorporates:
         *  Constant: '<S234>/Calib'
         *  MinMax: '<S235>/Minimum'
         *  Sum: '<S235>/Summation'
         *  Switch: '<S235>/Switch1'
         */
        HPMR_ac_DW.UnitDelay_DSTATE_fb = fminf(KeHPMR_t_ClosedCntctrLowBusVolt,
            HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_fb);
    }

    /* End of Switch: '<S235>/Switch1' */
    /* End of Outputs for SubSystem: '<S186>/Turn On Delay Time1' */

    /* Logic: '<S219>/Logical4' incorporates:
     *  Constant: '<S356>/Calib'
     */
    rtb_AND_j3 = ((HPMR_ac_B.LeHPMR_b_HighMtrSpdActv) &&
                  (KeHPMR_b_Enbl_HiMtrSpdActv));

    /* Outputs for Atomic SubSystem: '<S201>/EdgeRising' */
    /* Logic: '<S344>/OR1' incorporates:
     *  UnitDelay: '<S344>/Unit Delay'
     */
    rtb_UnitDelay_av = !HPMR_ac_DW.UnitDelay_DSTATE_je;

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_je = VeHPMI_b_EnblHVSys;

    /* Outputs for Atomic SubSystem: '<S201>/Signal Latch On With Reset' */
    /* Logic: '<S345>/OR1' incorporates:
     *  Logic: '<S201>/AND3'
     *  Logic: '<S344>/AND'
     *  Logic: '<S345>/OR'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_OR20 = (((VeHPMI_b_EnblHVSys) && rtb_UnitDelay_av) ||
                ((VeHPMI_b_EnblHVSys) && (HPMR_ac_DW.UnitDelay_DSTATE_ac3)));

    /* End of Outputs for SubSystem: '<S201>/EdgeRising' */

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ac3 = rtb_OR20;

    /* End of Outputs for SubSystem: '<S201>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising1' */
    /* Logic: '<S314>/OR1' incorporates:
     *  UnitDelay: '<S314>/Unit Delay'
     */
    rtb_UnitDelay_av = !HPMR_ac_DW.UnitDelay_DSTATE_cz;

    /* Update for UnitDelay: '<S314>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cz = VeHPMI_b_EnblPrplsnSys;

    /* Outputs for Atomic SubSystem: '<S189>/Signal Latch On With Reset1' */
    /* Logic: '<S316>/OR1' incorporates:
     *  Logic: '<S189>/Logical8'
     *  Logic: '<S314>/AND'
     *  Logic: '<S316>/OR'
     *  UnitDelay: '<S316>/Unit Delay'
     */
    rtb_UnitDelay_av = (((VeHPMI_b_EnblPrplsnSys) && rtb_UnitDelay_av) ||
                        ((VeHPMI_b_EnblPrplsnSys) &&
                         (HPMR_ac_DW.UnitDelay_DSTATE_n0)));

    /* End of Outputs for SubSystem: '<S189>/EdgeRising1' */

    /* Update for UnitDelay: '<S316>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_n0 = rtb_UnitDelay_av;

    /* End of Outputs for SubSystem: '<S189>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S189>/Stop Watch Reset Enabled2' */
    /* Switch: '<S317>/Switch' incorporates:
     *  Logic: '<S189>/Logical9'
     *  Switch: '<S317>/Switch2'
     */
    if (!VeHPMI_b_EnblPrplsnSys)
    {
        /* Switch: '<S317>/Switch' incorporates:
         *  Constant: '<S317>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else if (rtb_UnitDelay_av)
    {
        /* Switch: '<S317>/Switch2' incorporates:
         *  Sum: '<S317>/Subtraction'
         *  Switch: '<S317>/Switch'
         *  UnitDelay: '<S317>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_ko;
    }
    else
    {
        /* Switch: '<S317>/Switch' incorporates:
         *  Switch: '<S317>/Switch2'
         *  UnitDelay: '<S317>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_DW.UnitDelay_DSTATE_ko;
    }

    /* End of Switch: '<S317>/Switch' */

    /* Update for UnitDelay: '<S317>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ko = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S189>/Stop Watch Reset Enabled2' */

    /* Logic: '<S219>/Logical2' incorporates:
     *  Constant: '<S357>/Calib'
     */
    rtb_UnitDelay_av = ((VeHPMC_b_LossCommORC) && (KeHPMR_b_Enbl_LossCommORC));

    /* Outputs for Atomic SubSystem: '<S188>/Stop Watch Reset Enabled3' */
    /* Switch: '<S295>/Switch2' incorporates:
     *  Logic: '<S188>/AND1'
     *  Logic: '<S188>/AND2'
     *  Logic: '<S188>/AND3'
     *  Logic: '<S188>/AND4'
     *  Logic: '<S188>/AND5'
     *  RelationalOperator: '<S188>/Comparison1'
     *  RelationalOperator: '<S188>/Comparison2'
     *  RelationalOperator: '<S188>/Comparison3'
     *  RelationalOperator: '<S188>/Comparison4'
     *  RelationalOperator: '<S188>/Comparison5'
     *  RelationalOperator: '<S188>/Comparison6'
     *  Switch: '<S295>/Switch'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch42'
     *  Switch: '<S7>/Switch5'
     */
    if ((((((uint32)VeHPMI_b_HighVoltageRapidShtd_0) != CeHPMR_e_HV_ENABLED) &&
            (CeHPMR_e_ALT_HV_ENABLED != ((uint32)VeHPMI_b_HighVoltageRapidShtd_0)))
         || ((((uint32)VeHPMI_e_PMM_PowerMode) != CePMDR_e_PowerMode_Run) &&
             (((uint32)VeHPMI_e_PMM_PowerMode) != CePMDR_e_PowerMode_Crank))) ||
        ((((uint32)VeHPMI_e_MCPA_SPT_State) != CeINVR_e_Pending_SPT) &&
            (((uint32)VeHPMI_e_MCPB_SPT_State) != CeINVR_e_Pending_SPT)))
    {
        /* Switch: '<S295>/Switch' incorporates:
         *  Constant: '<S295>/Constant Value2'
         */
        rtb_Switch1_a = 0.0F;
    }
    else
    {
        /* Switch: '<S295>/Switch' incorporates:
         *  Sum: '<S295>/Subtraction'
         *  Switch: '<S295>/Switch2'
         *  UnitDelay: '<S295>/Unit Delay'
         */
        rtb_Switch1_a = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S295>/Switch2' */

    /* Update for UnitDelay: '<S295>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S188>/Stop Watch Reset Enabled3' */

    /* VariantMerge generated from: '<S8>/VeHPMC_b_MCP_SPT_Timeout' incorporates:
     *  Constant: '<S294>/Calib'
     *  RelationalOperator: '<S188>/Comparison7'
     */
    VeHPMC_b_MCP_SPT_Timeout = (rtb_Switch1_a >= KeHPMR_t_MCPTimeout_SPT);

    /* VariantMerge generated from: '<S8>/VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn' incorporates:
     *  Constant: '<S354>/Calib'
     *  Logic: '<S219>/Logical7'
     */
    VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn =
        ((HPMR_ac_B.VariantMergeForOutportVeHPMC__n) &&
         (KeHPMR_b_EnblORCLoC_RapidShtDn));

    /* Logic: '<S219>/AND17' incorporates:
     *  Constant: '<S358>/Calib'
     */
    rtb_VeHPMC_b_MtrAActv = ((VeHPMI_b_OpnBattCntctr) &&
        (KeHPMR_b_Enbl_SRAROpnCntctr));

    /* Logic: '<S219>/AND1' incorporates:
     *  Constant: '<S352>/Calib'
     */
    rtb_OR8_o = ((VeHPMR_b_InverterFaulted) &&
                 (KeHPMR_b_DsblAllwCntctrCls_InvFlt));

    /* Logic: '<S219>/AND4' incorporates:
     *  Constant: '<S353>/Calib'
     */
    rtb_AND_et = ((VeHPMI_b_HVBatSrvcDisCnctFA) &&
                  (KeHPMR_b_EnblHVBatSrvcDscnt_RapidShtDn));

    /* Outputs for Atomic SubSystem: '<S196>/Signal Latch On With Reset' */
    /* VariantMerge generated from: '<S8>/VeHPMR_b_HVILFailThisKeyCycl' incorporates:
     *  Logic: '<S196>/Logical'
     *  Logic: '<S196>/Logical1'
     *  Logic: '<S321>/NOT'
     *  Logic: '<S321>/OR'
     *  Logic: '<S321>/OR1'
     *  RelationalOperator: '<S196>/Comparison4'
     *  RelationalOperator: '<S196>/Comparison5'
     *  Switch: '<S7>/Switch45'
     *  UnitDelay: '<S196>/Unit Delay'
     *  UnitDelay: '<S321>/Unit Delay'
     */
    VeHPMR_b_HVILFailThisKeyCycl = ((((VeHPMR_b_HVILSpdCondMet) ||
        (VeHPMI_b_HVBatSrvcDisCnctFA)) || (VeHPMC_b_HV_IntrnlIntrlkStatFail)) ||
        (((((uint32)VeHPMI_e_KeyStatus) == CePMDR_e_KeySt_Off) ||
          (CePMDR_e_KeySt_Off != ((uint32)HPMR_ac_DW.UnitDelay_DSTATE_hs))) &&
         (HPMR_ac_DW.UnitDelay_DSTATE_jz)));

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_jz = VeHPMR_b_HVILFailThisKeyCycl;

    /* End of Outputs for SubSystem: '<S196>/Signal Latch On With Reset' */

    /* Logic: '<S197>/Logical3' incorporates:
     *  Logic: '<S197>/Logical1'
     *  Logic: '<S197>/Logical2'
     */
    VeHPMR_b_HVFaults = (((((((((VeHPMI_b_HVBatSrvcDisCnctFA) ||
        (VeHPMR_b_HVILSpdCondMet)) || (VeHPMC_b_HV_IntrnlIntrlkStatFail)) ||
        ((VeHPMR_b_CollisionDetection) || (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn))) ||
        (VeHPMR_b_MCPA_CoreFail)) || (VeHPMR_b_MCPB_CoreFail)) ||
                           (VeHPMR_b_AHCP_CoreFail)) ||
                          (VeHPMC_b_OpnReq_SrvcProc1320_Out)) ||
                         (VeHPMR_b_HV_BatCntctrOpenReq));

    /* RelationalOperator: '<S198>/LessThanOrEqual' incorporates:
     *  Constant: '<S325>/Calib'
     */
    rtb_UnitDelay_ik = (VeHPMI_U_HV_Volt <= KeHPMR_U_BusDischCmpltThresh);

    /* Outputs for Atomic SubSystem: '<S198>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S327>/EdgeRising' */
    /* Logic: '<S328>/AND' incorporates:
     *  Logic: '<S328>/OR1'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    rtb_AND_m4u = (rtb_UnitDelay_ik && (!HPMR_ac_DW.UnitDelay_DSTATE_eb));

    /* Update for UnitDelay: '<S328>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_eb = rtb_UnitDelay_ik;

    /* End of Outputs for SubSystem: '<S327>/EdgeRising' */

    /* Switch: '<S327>/Switch1' incorporates:
     *  Constant: '<S326>/Calib'
     *  Constant: '<S327>/Constant Value'
     *  Logic: '<S327>/OR'
     *  Logic: '<S327>/OR1'
     *  MinMax: '<S327>/Minimum'
     *  Sum: '<S327>/Summation'
     *  UnitDelay: '<S327>/Unit Delay'
     */
    if ((!rtb_UnitDelay_ik) || rtb_AND_m4u)
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  Constant: '<S327>/Constant Value1'
         */
        rtb_Switch1_mp = 0U;
    }
    else if (KeHPMR_Cnt_ActDschDeb < ((uint16)(((uint32)
                HPMR_ac_DW.UnitDelay_DSTATE_m0) + 1U)))
    {
        /* MinMax: '<S327>/Minimum' incorporates:
         *  Constant: '<S326>/Calib'
         *  Switch: '<S327>/Switch1'
         */
        rtb_Switch1_mp = KeHPMR_Cnt_ActDschDeb;
    }
    else
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  Constant: '<S327>/Constant Value'
         *  MinMax: '<S327>/Minimum'
         *  Sum: '<S327>/Summation'
         *  UnitDelay: '<S327>/Unit Delay'
         */
        rtb_Switch1_mp = (uint16)(((uint32)HPMR_ac_DW.UnitDelay_DSTATE_m0) + 1U);
    }

    /* End of Switch: '<S327>/Switch1' */

    /* Logic: '<S327>/AND' incorporates:
     *  Constant: '<S326>/Calib'
     *  RelationalOperator: '<S327>/Greater  Than'
     */
    VeHPMC_b_VltBelowActvDschThres = (rtb_UnitDelay_ik && (rtb_Switch1_mp >=
        KeHPMR_Cnt_ActDschDeb));

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_m0 = rtb_Switch1_mp;

    /* End of Outputs for SubSystem: '<S198>/Turn On Delay Sample' */

    /* Logic: '<S179>/Logical Operator2' incorporates:
     *  Constant: '<S224>/Constant'
     *  Constant: '<S225>/Constant'
     *  Constant: '<S226>/Constant'
     *  Constant: '<S227>/Constant'
     *  RelationalOperator: '<S179>/Equal'
     *  RelationalOperator: '<S179>/Equal1'
     *  RelationalOperator: '<S179>/Equal2'
     *  RelationalOperator: '<S179>/Equal3'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch21'
     *  Switch: '<S7>/Switch94'
     *  Switch: '<S7>/Switch95'
     */
    rtb_UnitDelay_ik = ((((((uint32)VeHPMI_e_MtrA_InvrtrSt) ==
                           CeINVR_e_ActiveDischarge) || (((uint32)
                            VeHPMI_e_MtrB_InvrtrSt) == CeINVR_e_ActiveDischarge))
                         || (((uint32)VeHPMI_e_MtrA_Dschrge_Stat) ==
                          CeINVR_e_AD_INPROGRESS)) || (((uint32)
                          VeHPMI_e_MtrB_Dschrge_Stat) == CeINVR_e_AD_INPROGRESS));

    /* Outputs for Atomic SubSystem: '<S179>/EdgeRising' */
    /* Logic: '<S222>/OR1' incorporates:
     *  UnitDelay: '<S222>/Unit Delay'
     */
    rtb_AND_m4u = !HPMR_ac_DW.UnitDelay_DSTATE_p1l;

    /* Update for UnitDelay: '<S222>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_p1l = rtb_UnitDelay_ik;

    /* End of Outputs for SubSystem: '<S179>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S179>/EdgeRising1' */
    /* Logic: '<S223>/AND' incorporates:
     *  Logic: '<S223>/OR1'
     *  UnitDelay: '<S223>/Unit Delay'
     */
    rtb_OR35_m = ((VeHPMR_b_MtrNotInActvDschrg) &&
                  (!HPMR_ac_DW.UnitDelay_DSTATE_bm));

    /* End of Outputs for SubSystem: '<S179>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S179>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S230>/EdgeFalling' */
    /* Logic: '<S231>/OR1' incorporates:
     *  Logic: '<S230>/AND'
     */
    tmpRead_1y = !rtb_OR35_m;

    /* Logic: '<S231>/AND' incorporates:
     *  Logic: '<S231>/OR1'
     *  UnitDelay: '<S231>/Unit Delay'
     */
    rtb_OR17 = (tmpRead_1y && (HPMR_ac_DW.UnitDelay_DSTATE_aj));

    /* Update for UnitDelay: '<S231>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_aj = rtb_OR35_m;

    /* End of Outputs for SubSystem: '<S230>/EdgeFalling' */

    /* Switch: '<S230>/Switch' */
    if (rtb_OR17)
    {
        /* Switch: '<S230>/Switch' incorporates:
         *  Constant: '<S228>/Calib'
         */
        rtb_Switch1_mp = KeHPMR_Cnt_HoldMtrNotInActvDschrg;
    }
    else
    {
        /* Sum: '<S230>/Summation' incorporates:
         *  Constant: '<S230>/Constant Value'
         *  UnitDelay: '<S230>/Unit Delay'
         */
        tmp = ((sint32)HPMR_ac_DW.UnitDelay_DSTATE_is) - 1;
        if ((((sint32)HPMR_ac_DW.UnitDelay_DSTATE_is) - 1) < 0)
        {
            tmp = 0;
        }

        /* Switch: '<S230>/Switch' incorporates:
         *  Sum: '<S230>/Summation'
         */
        rtb_Switch1_mp = (uint16)tmp;
    }

    /* End of Switch: '<S230>/Switch' */

    /* Update for UnitDelay: '<S230>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_is = rtb_Switch1_mp;

    /* End of Outputs for SubSystem: '<S179>/Turn Off Delay Sample' */

    /* Logic: '<S179>/Logical Operator1' incorporates:
     *  Chart: '<S10>/HybSysSt_Machine'
     */
    rtb_OR35_m = !VeHPMC_b_VltBelowActvDschThres;

    /* Outputs for Atomic SubSystem: '<S179>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S179>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S179>/Turn Off Delay Sample' */
    /* Logic: '<S229>/OR1' incorporates:
     *  Constant: '<S230>/Constant Value2'
     *  Logic: '<S179>/Logical Operator1'
     *  Logic: '<S222>/AND'
     *  Logic: '<S229>/NOT'
     *  Logic: '<S229>/OR'
     *  Logic: '<S230>/AND'
     *  RelationalOperator: '<S230>/Greater  Than'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_UnitDelay_ik = ((rtb_UnitDelay_ik && rtb_AND_m4u) || (((tmpRead_1y &&
                           (((sint32)rtb_Switch1_mp) <= 0)) || rtb_OR35_m) &&
                         (HPMR_ac_DW.UnitDelay_DSTATE_fw)));

    /* End of Outputs for SubSystem: '<S179>/Turn Off Delay Sample' */
    /* End of Outputs for SubSystem: '<S179>/EdgeRising' */

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_fw = rtb_UnitDelay_ik;

    /* End of Outputs for SubSystem: '<S179>/Signal Latch On With Reset' */

    /* Logic: '<S179>/Logical Operator' */
    VeHPMR_b_ActvDiscNotOcc = !rtb_UnitDelay_ik;

    /* Outputs for Atomic SubSystem: '<S213>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S213>/EdgeFalling' */
    /* Logic: '<S348>/OR1' incorporates:
     *  Chart: '<S10>/HybSysSt_Machine'
     *  Logic: '<S349>/AND'
     */
    rtb_OR17 = !VeHPMI_b_HV_AuxLoadOffReq;

    /* End of Outputs for SubSystem: '<S213>/EdgeRising' */

    /* Logic: '<S348>/AND' incorporates:
     *  Logic: '<S348>/OR1'
     *  UnitDelay: '<S348>/Unit Delay'
     */
    rtb_UnitDelay_ik = (rtb_OR17 && (HPMR_ac_DW.UnitDelay_DSTATE_dvo));

    /* Update for UnitDelay: '<S348>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dvo = VeHPMI_b_HV_AuxLoadOffReq;

    /* End of Outputs for SubSystem: '<S213>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S213>/EdgeRising' */
    /* Logic: '<S349>/OR1' incorporates:
     *  UnitDelay: '<S349>/Unit Delay'
     */
    rtb_AND_m4u = !HPMR_ac_DW.UnitDelay_DSTATE_fa;

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_fa = VeHPMI_b_HV_AuxLoadOffReq;

    /* Outputs for Atomic SubSystem: '<S213>/Signal Latch On With Reset' */
    /* Logic: '<S351>/OR1' incorporates:
     *  Constant: '<S350>/Calib'
     *  Logic: '<S213>/Logical19'
     *  Logic: '<S349>/AND'
     *  Logic: '<S351>/NOT'
     *  Logic: '<S351>/OR'
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_UnitDelay_ik = ((rtb_UnitDelay_ik && (KeHPMR_b_VehWSwitchBattPack)) ||
                        ((rtb_OR17 || (!rtb_AND_m4u)) &&
                         (HPMR_ac_DW.UnitDelay_DSTATE_j2)));

    /* End of Outputs for SubSystem: '<S213>/EdgeRising' */

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_j2 = rtb_UnitDelay_ik;

    /* End of Outputs for SubSystem: '<S213>/Signal Latch On With Reset' */

    /* Chart: '<S10>/HybSysSt_Machine' incorporates:
     *  Constant: '<S203>/Calib'
     *  Constant: '<S204>/Calib'
     *  Constant: '<S207>/Calib'
     *  Constant: '<S211>/Calib'
     *  Switch: '<S7>/Switch13'
     */
    /* Gateway: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt_BEV/HybSysSt_Machine */
    /* During: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt_BEV/HybSysSt_Machine */
    if (((uint32)HPMR_ac_DW.is_active_c1_HPMR_ac) == 0U)
    {
        /* Entry: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt_BEV/HybSysSt_Machine */
        HPMR_ac_DW.is_active_c1_HPMR_ac = 1U;

        /* Entry Internal: HPMR_MedTEB/HPMC_DetHybSysSt/DetHybSysSt_Variant/DetHybSysSt_BEV/HybSysSt_Machine */
        /* Transition: '<S199>:340' */
        HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_POWERUP_l;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
        /* Entry 'POWERUP': '<S199>:281' */
        HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_POWERUP;
        HPMR_ac_B.LeHPMC_e_BattCntctrCmd = CeHPMR_e_Undetermined;
        HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = true;

        /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 = CeHPMR_e_Disable;

        /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
        HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = false;

        /* VariantMerge generated from: '<S8>/LeHPMR_b_HighMtrStrtSpdActv' */
        HPMR_ac_B.LeHPMR_b_HighMtrStrtSpdActv = false;

        /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
        VeHPMR_b_ShutdownInProcess = false;

        /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
        VeHPMR_t_StateTimer = 0.0F;

        /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
        VeHPMC_b_PropulsionSystemActive = false;
        VeHPMR_b_BattSwtchInProg = false;
        HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
    }
    else
    {
        guard1 = false;
        switch (HPMR_ac_DW.is_c1_HPMR_ac)
        {
          case HPMR_ac_IN_CMND_BUS_DISCH_p:
            HPMR_ac_CMND_BUS_DISCH_i(&rtb_OR20);
            break;

          case HPMR_ac_IN_CMND_CNTCTR_OPN_h:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_CNTCTR_OPEN;

            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
            HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
            HPMR_ac_B.LeHPMC_e_BattCntctrCmd = CeHPMR_e_Open;

            /* During 'CMND_CNTCTR_OPN': '<S199>:307' */
            if (((KeHPMR_b_HV_BusDischrgEnabled) &&
                    (((KeHPMR_b_CntctrOpenHVIL_OvrdEnbl) ||
                      (VeHPMR_b_CollisionDetection)) && (VeHPMR_t_StateTimer >
                    KeHPMR_t_CntctrOpenHVIL_Timeout))) || (((((uint32)
                    VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Open) ||
                    (!rtb_Comparison2_jy)) || (VeHPMR_t_StateTimer >
                    KeHPMR_t_CntctrOpenAck_Timeout)))
            {
                /* Transition: '<S199>:403' */
                /* Exit 'CMND_CNTCTR_OPN': '<S199>:307' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_CNTCTR_OPEN;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_CMND_BUS_DISCH_p;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'CMND_BUS_DISCH': '<S199>:308' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
            }
            else if (((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaults)) &&
                     (!VeHPMR_b_BattSwtchInProg))
            {
                /* Transition: '<S199>:399' */
                /* Transition: '<S199>:574' */
                /* Transition: '<S199>:573' */
                /* Transition: '<S199>:572' */
                /* Transition: '<S199>:571' */
                /* Transition: '<S199>:521' */
                /* Exit 'CMND_CNTCTR_OPN': '<S199>:307' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_CMND_CNTCTR_OPEN;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                    GetHPMR_b_UnintendedShtdwnOcc_g();
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;
            }
            else
            {
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;

          case HPMR_ac_IN_DISBL_INV_k:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;

            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
            HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;

            /* During 'DISBL_INV': '<S199>:305' */
            if (((VeHPMR_b_InvertersDisabled) || (VeHPMR_t_StateTimer >
                    KeHPMR_t_InvDisableTimeout)) ||
                    ((VeHPMR_b_CollisionDetection) && (VeHPMR_t_StateTimer >
                    KeHPMR_t_InvDisableTimeoutCrash)))
            {
                /* Transition: '<S199>:395' */
                /* Exit 'DISBL_INV': '<S199>:305' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_DISBL_INV;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_EVAL_CNTCTR_OPN_p;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'EVAL_CNTCTR_OPN': '<S199>:306' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_EVAL_CNTCTR_OPEN;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;

                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                VeHPMR_b_ImmShtdwnCondMet = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
            }
            else if (((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaults)) &&
                     (!VeHPMR_b_BattSwtchInProg))
            {
                /* Transition: '<S199>:393' */
                /* Transition: '<S199>:572' */
                /* Transition: '<S199>:571' */
                /* Transition: '<S199>:521' */
                /* Exit 'DISBL_INV': '<S199>:305' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_DISBL_INV;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                    GetHPMR_b_UnintendedShtdwnOcc_g();
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                    GetHPMR_e_DtrmnInvrtrDisblCmd_l(&rtb_AND_et);
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProc_p();

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;

          case HPMR_ac_IN_DTRMN_HYBSYSST_j:
            HPMR_ac_DTRMN_HYBSYSST_j(&rtb_Comparison2_jy, &rtb_AND_et, &rtb_OR20);
            break;

          case HPMR_ac_IN_ENBL_HV_j:
            HPMR_ac_ENBL_HV_e(&rtb_Comparison2_jy, &rtb_OR20, &rtb_UnitDelay_ik);
            break;

          case HPMR_ac_IN_ENBL_INV_a:
            HPMR_ac_ENBL_INV_h(&rtb_AND22_k, &rtb_AND_j3,
                               &VeHPMI_b_HighVoltageRapidShtdwn, &rtb_OR20,
                               &rtb_UnitDelay_ik);
            break;

          case HPMR_ac_IN_EVAL_CNTCTR_OPN_p:
            HPMR_ac_EVAL_CNTCTR_OPN_h(&rtb_Comparison2_jy, &rtb_AND_et,
                &rtb_OR20);
            break;

          case HPMR_ac_IN_EVAL_HV_ENBL_k:
            HPMR_ac_EVAL_HV_ENBL_j(&VeHPMI_b_MCPA_CoreFail, &rtb_UnitDelay_av,
                                   &rtb_VeHPMC_b_MtrAActv, &rtb_OR8_o,
                                   &rtb_AND_et, &rtb_OR20);
            break;

          case HPMR_ac_IN_EVAL_PRPLSN_DISBL_k:
            HPMR_ac_EVAL_PRPLSN_DISBL_g(&rtb_AND_et, &rtb_OR20);
            break;

          case HPMR_ac_IN_HV_ENBLD_e:
            HPMR_ac_HV_ENBLD_h(&rtb_OR20);
            break;

          case HPMR_ac_IN_INIT_CNTRLR_PWRDWN_p:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;

            /* During 'INIT_CNTRLR_PWRDWN': '<S199>:473' */
            if ((rtb_OR35_m && (VeHPMR_b_ActvDiscNotOcc)) &&
                    ((VeHPMR_b_CollisionDetection) || rtb_UnitDelay_av))
            {
                /* Transition: '<S199>:1072' */
                /* Transition: '<S199>:1073' */
                /* Transition: '<S199>:1074' */
                /* Exit 'INIT_CNTRLR_PWRDWN': '<S199>:473' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_INIT_CNTRLR_PWRDWN;
                HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = true;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_CMND_BUS_DISCH_p;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'CMND_BUS_DISCH': '<S199>:308' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_CMND_BUS_DISCHARGE;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
            }
            else if (((KeHPMR_b_EnblExitPwrDwn) && (VeHPMC_b_InitPwrUp)) &&
                     (!VeHPMR_b_CollisionDetection))
            {
                /* Transition: '<S199>:739' */
                /* Transition: '<S199>:740' */
                /* Transition: '<S199>:793' */
                /* Transition: '<S199>:574' */
                /* Transition: '<S199>:573' */
                /* Transition: '<S199>:572' */
                /* Transition: '<S199>:571' */
                /* Transition: '<S199>:521' */
                /* Exit 'INIT_CNTRLR_PWRDWN': '<S199>:473' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_INIT_CNTRLR_PWRDWN;
                HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = true;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                    GetHPMR_b_UnintendedShtdwnOcc_g();
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;
            }
            else
            {
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;

          case HPMR_ac_IN_INV_ENBLD_d:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INV_ENABLED;

            /* During 'INV_ENBLD': '<S199>:300' */
            if (((((((((uint32)VeHPMI_e_HV_BatCntctrStat) == CeHVTR_e_Closed) &&
                     (VeHPMI_b_AuthenticationValid)) && ((((uint32)
                       VeHPMI_e_HybEngSysActv) != CeESSR_e_HybEngDisabled) &&
                     (((uint32)VeHPMI_e_HybEngSysActv) !=
                      CeESSR_e_HybEngEnabledOnIS))) && (VeHPMC_b_MtrSystemActive))
                  && (!VeHPMR_b_UnintendedFltShtdwn)) && (VeHPMI_b_EnblPrplsnSys))
                && (!VeHPMC_b_BattSysNotActv))
            {
                /* Transition: '<S199>:376' */
                /* Exit 'INV_ENBLD': '<S199>:300' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_INV_ENABLED;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_OPERATIONAL_p;
                HPMR_a_enter_atomic_OPERATIONAL();
            }
            else if (((((((rtb_Switch1_ne >= KeHPMR_t_EngSysNotActvTmr) &&
                          (((uint32)VeHPMI_e_HybEngSysActv) ==
                           CeESSR_e_HybEngDisabled)) && (VeHPMI_b_EnblPrplsnSys))
                        || (VeHPMR_b_ImmShtdwnCondMet)) ||
                       (VeHPMR_b_UnintendedShtdwn)) ||
                      (VeHPMR_b_UnintendedFltShtdwn)) ||
                     VeHPMI_b_HighVoltageRapidShtdwn)
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                /* Transition: '<S199>:370' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

                /* Transition: '<S199>:561' */
                guard1 = true;
            }
            else if (((!rtb_AND22_k) || (!VeHPMI_b_EnblHVSys)) ||
                     (!VeHPMI_b_EnblMtrSys))
            {
                /* Transition: '<S199>:372' */
                guard1 = true;
            }
            else if ((VeHPMI_b_HV_AuxLoadOffReq) && (KeHPMR_b_VehWSwitchBattPack))
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                /* Transition: '<S199>:1095' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;
                VeHPMR_b_BattSwtchInProg = true;

                /* Transition: '<S199>:1097' */
                /* Transition: '<S199>:561' */
                guard1 = true;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                VeHPMR_b_ImmShtdwnCondMet = HP_GetHPMR_b_ImmShtdwnCondMet_g();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;

          case HPMR_ac_IN_OPERATIONAL_p:
            HPMR_ac_OPERATIONAL_a(&rtb_AND22_k, &rtb_OR20);
            break;

          case HPMR_a_IN_OPERATIONAL_SERIESCFG:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_OPERATIONAL_SERIESCFG;

            /* During 'OPERATIONAL_SERIESCFG': '<S199>:1100' */
            if ((((VeHPMR_b_HVFaults) || rtb_VeHPMC_b_MtrAActv) ||
                    (VeHPMR_b_UnintendedFltShtdwn)) || (VeHPMR_t_StateTimer >
                    KeHPMR_t_SeriesCfgTmot))
            {
                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                /* Transition: '<S199>:1106' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h = true;

                /* Transition: '<S199>:1107' */
                /* Exit 'OPERATIONAL_SERIESCFG': '<S199>:1100' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL_SERIESCFG;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN_p;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'INIT_CNTRLR_PWRDWN': '<S199>:473' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
                HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = false;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive = false;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;
            }
            else if ((rtb_OR17 && (!VeHPMR_b_HVFaults)) &&
                     (!VeHPMR_b_UnintendedFltShtdwn))
            {
                /* Transition: '<S199>:1109' */
                /* Transition: '<S199>:1110' */
                /* Exit 'OPERATIONAL_SERIESCFG': '<S199>:1100' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_OPERATIONAL_SERIESCFG;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_EVAL_HV_ENBL_k;
                HPM_enter_atomic_EVAL_HV_ENBL_e();
            }
            else
            {
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;

          case HPMR_ac_IN_POWERUP_l:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_POWERUP;
            HPMR_ac_B.LeHPMC_e_BattCntctrCmd = CeHPMR_e_Undetermined;

            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
            HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;

            /* During 'POWERUP': '<S199>:281' */
            if ((VeHPMI_b_EnblHVSys) && (VeHPMR_t_StateTimer >=
                    KeHPMR_t_DvlpmntPowerupDelay))
            {
                /* Transition: '<S199>:345' */
                /* Exit 'POWERUP': '<S199>:281' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_POWERUP;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_EVAL_HV_ENBL_k;
                HPM_enter_atomic_EVAL_HV_ENBL_e();
            }
            else if ((((VeHPMI_b_FC_FuelDoorOpenReq) && (VeHPMR_t_StateTimer >=
                        KeHPMR_t_FC_FuelDoorOpenTimeOut)) ||
                      ((VeHPMI_b_FOTAOvrrdEnblHVSys) && (VeHPMR_t_StateTimer >=
                        KeHPMR_t_FOTATimeOut))) || (VeHPMR_t_StateTimer >
                      KeHPMR_t_SysPowerupTimeOut))
            {
                /* Transition: '<S199>:697' */
                /* Transition: '<S199>:707' */
                /* Transition: '<S199>:708' */
                /* Exit 'POWERUP': '<S199>:281' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_POWERUP;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_INIT_CNTRLR_PWRDWN_p;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'INIT_CNTRLR_PWRDWN': '<S199>:473' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_INIT_CNTRLR_PWRDWN;
                HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o = false;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive = false;

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = true;
            }
            else
            {
                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
                HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
            }
            break;

          default:
            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_PRPLSN_DISABLED;

            /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
            HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;

            /* During 'PRPLSN_DISBLD': '<S199>:304' */
            if (((!VeHPMI_b_EnblMtrSys) || (VeHPMR_b_CollisionDetection)) ||
                    (VeHPMR_t_StateTimer >= KeHPMR_t_PrplsnDisblCnfrmTmr))
            {
                /* Transition: '<S199>:391' */
                /* Exit 'PRPLSN_DISBLD': '<S199>:304' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_PRPLSN_DISABLED;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DISBL_INV_k;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DISBL_INV': '<S199>:305' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DISBL_INV;

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;

                /* VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode' */
                HPMR_ac_B.LeHPMR_e_APM_OperMode = CeHPMR_e_Idle;
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProc_p();

                /* VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd' */
                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5 =
                    GetHPMR_e_DtrmnInvrtrDisblCmd_l(&rtb_AND_et);
                VeHPMR_b_ImmShtdwnCondMet = false;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
                VeHPMC_b_PropulsionSystemActive =
                    HPM_GetHPMR_b_DtrmnPropSysAct_k();
                HPMR_ac_B.LeHPMR_e_PropSysMode_i = CeHPMR_e_Disabled;
            }
            else if (((VeHPMC_b_InitPwrUp) && (!VeHPMR_b_HVFaults)) &&
                     (!VeHPMR_b_BattSwtchInProg))
            {
                /* Transition: '<S199>:389' */
                /* Transition: '<S199>:571' */
                /* Transition: '<S199>:521' */
                /* Exit 'PRPLSN_DISBLD': '<S199>:304' */
                VeHPMC_e_Src_HybSysSt = CeHPMR_e_PRPLSN_DISABLED;
                HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

                /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
                /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
                HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

                /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
                HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                    GetHPMR_b_UnintendedShtdwnOcc_g();
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = 0.0F;
            }
            else
            {
                VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

                /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess' */
                VeHPMR_b_ShutdownInProcess = GetHPMR_b_DtrmnShutdownInProc_p();

                /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
                VeHPMR_t_StateTimer = VeHPMR_t_StateTimer +
                    HPMR_ac_B.LeHPMR_t_dT;
            }
            break;
        }

        if (guard1)
        {
            /* Transition: '<S199>:506' */
            /* Exit 'INV_ENBLD': '<S199>:300' */
            VeHPMC_e_Src_HybSysSt = CeHPMR_e_INV_ENABLED;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive1' */
            VeHPMC_b_PropulsionSystemActive = HPM_GetHPMR_b_DtrmnPropSysAct_k();
            HPMR_ac_DW.is_c1_HPMR_ac = HPMR_ac_IN_DTRMN_HYBSYSST_j;

            /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1' */
            /* Entry 'DTRMN_HYBSYSST': '<S199>:483' */
            HPMR_ac_B.LeHPMR_e_HybSysSt_j = CeHPMR_e_DTRMN_HYBSYSST;

            /* VariantMerge generated from: '<S8>/VeHPMC_b_UnintendedShtdwnOcc' */
            HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h =
                GetHPMR_b_UnintendedShtdwnOcc_g();
            VeHPMC_b_InitPwrUp = GetHPMR_b_DtrmnPowerUpConditi_b(&rtb_OR20);

            /* VariantMerge generated from: '<S8>/VeHPMR_t_StateTimer' */
            VeHPMR_t_StateTimer = 0.0F;
        }
    }

    /* RelationalOperator: '<S220>/Comparison4' incorporates:
     *  RelationalOperator: '<S220>/Comparison1'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    VeHPMI_b_HighVoltageRapidShtd_0 = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* If: '<S220>/If' incorporates:
     *  Constant: '<S361>/Calib'
     *  Logic: '<S220>/Logical'
     *  Logic: '<S220>/Logical2'
     *  RelationalOperator: '<S220>/Comparison1'
     *  RelationalOperator: '<S220>/Comparison4'
     */
    if (((HPMR_ac_B.VariantMergeForOutportVeHPMC__n) && ((((uint32)
            VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_CMND_BUS_DISCHARGE) ||
            (((uint32)VeHPMI_b_HighVoltageRapidShtd_0) ==
             CeHPMR_e_INIT_CNTRLR_PWRDWN))) && (KeHPMR_b_Enbl_LossCommORC))
    {
        /* Outputs for IfAction SubSystem: '<S220>/Store_ORCLOC_Mem' incorporates:
         *  ActionPort: '<S362>/Action Port'
         */
        HPMR_ac_Store_ORCLOC_Mem();

        /* End of Outputs for SubSystem: '<S220>/Store_ORCLOC_Mem' */
    }

    /* End of If: '<S220>/If' */

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PropulsionSystemActive' incorporates:
     *  Logic: '<S180>/AND'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__j = VeHPMC_b_PropulsionSystemActive;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_ShutdownInProcess1' incorporates:
     *  Logic: '<S181>/AND'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR__p = VeHPMR_b_ShutdownInProcess;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_ContactorsClosedThisKeyOut' incorporates:
     *  Logic: '<S184>/AND'
     */
    HPMR_ac_B.VeHPMC_b_ContactorsClosedThisKe =
        HPMR_ac_B.VeHPMC_b_ContactorsClosedThis_i;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_MtrSystemActiveOut' incorporates:
     *  Logic: '<S185>/AND'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR_b_ = VeHPMC_b_MtrSystemActive;

    /* Logic: '<S187>/Logical13' incorporates:
     *  Logic: '<S187>/Logical1'
     *  RelationalOperator: '<S187>/Comparison4'
     *  RelationalOperator: '<S188>/Comparison2'
     *  Switch: '<S7>/Switch42'
     */
    VeHPMI_b_MCPA_CoreFail = ((!HPMR_ac_B.LeHPMR_b_CntrlrPwrHold_o) && (((uint32)
        VeHPMI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Off));

    /* Outputs for Atomic SubSystem: '<S187>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S263>/EdgeFalling' */
    /* UnitDelay: '<S261>/Unit Delay' incorporates:
     *  UnitDelay: '<S280>/Unit Delay'
     */
    rtb_Comparison2_jy = HPMR_ac_DW.UnitDelay_DSTATE_b0t;

    /* Update for UnitDelay: '<S280>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_b0t = VeHPMI_b_AccRunActiveAnalog;

    /* Logic: '<S280>/OR1' incorporates:
     *  Logic: '<S263>/AND'
     */
    tmpRead_1y = !VeHPMI_b_AccRunActiveAnalog;

    /* Switch: '<S263>/Switch' incorporates:
     *  Logic: '<S280>/AND'
     *  Logic: '<S280>/OR1'
     */
    if (tmpRead_1y && rtb_Comparison2_jy)
    {
        /* Switch: '<S263>/Switch' incorporates:
         *  Constant: '<S253>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_DbncPADShtdwn;
    }
    else
    {
        /* Switch: '<S263>/Switch' incorporates:
         *  Constant: '<S263>/Constant Value1'
         *  MinMax: '<S263>/Minimum'
         *  Sum: '<S263>/Summation'
         *  UnitDelay: '<S263>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_m -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S263>/Switch' */
    /* End of Outputs for SubSystem: '<S263>/EdgeFalling' */

    /* Update for UnitDelay: '<S263>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_ne;

    /* Logic: '<S187>/Logical' incorporates:
     *  Constant: '<S248>/Calib'
     *  Constant: '<S263>/Constant Value2'
     *  Logic: '<S187>/Logical8'
     *  Logic: '<S187>/Logical9'
     *  Logic: '<S263>/AND'
     *  RelationalOperator: '<S263>/Greater  Than'
     */
    rtb_Comparison2_jy = (VeHPMI_b_MCPA_CoreFail && ((tmpRead_1y &&
                            (rtb_Switch1_ne <= 0.0F)) || (KeHPMR_b_OvrdPADShtdwn)));

    /* End of Outputs for SubSystem: '<S187>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S264>/EdgeRising' */
    /* Logic: '<S281>/AND' incorporates:
     *  Logic: '<S281>/OR1'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_i0));

    /* Update for UnitDelay: '<S281>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_i0 = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S264>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time1' */
    /* Logic: '<S264>/OR1' incorporates:
     *  Logic: '<S265>/OR1'
     */
    tmpRead_1y = !rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time1' */

    /* Switch: '<S264>/Switch1' incorporates:
     *  Logic: '<S264>/OR'
     *  Logic: '<S264>/OR1'
     */
    if (tmpRead_1y || rtb_AND22_k)
    {
        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S264>/Constant Value1'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S251>/Calib'
         *  MinMax: '<S264>/Minimum'
         *  Sum: '<S264>/Summation'
         *  UnitDelay: '<S264>/Unit Delay'
         */
        rtb_Switch1_ne = fminf(KeHPMR_t_AfterRunShtDnTmr, HPMR_ac_B.LeHPMR_t_dT
                               + HPMR_ac_DW.UnitDelay_DSTATE_a4);
    }

    /* End of Switch: '<S264>/Switch1' */

    /* Update for UnitDelay: '<S264>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_a4 = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S265>/EdgeRising' */
    /* Logic: '<S282>/AND' incorporates:
     *  Logic: '<S282>/OR1'
     *  UnitDelay: '<S282>/Unit Delay'
     */
    rtb_AND22_k = (rtb_Comparison2_jy && (!HPMR_ac_DW.UnitDelay_DSTATE_om));

    /* Update for UnitDelay: '<S282>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_om = rtb_Comparison2_jy;

    /* End of Outputs for SubSystem: '<S265>/EdgeRising' */

    /* Switch: '<S265>/Switch1' incorporates:
     *  Logic: '<S265>/OR'
     */
    if (tmpRead_1y || rtb_AND22_k)
    {
        /* Switch: '<S265>/Switch1' incorporates:
         *  Constant: '<S265>/Constant Value1'
         */
        rtb_Switch1_a = 0.0F;
    }
    else
    {
        /* Switch: '<S265>/Switch1' incorporates:
         *  Constant: '<S252>/Calib'
         *  MinMax: '<S265>/Minimum'
         *  Sum: '<S265>/Summation'
         *  UnitDelay: '<S265>/Unit Delay'
         */
        rtb_Switch1_a = fminf(KeHPMR_t_ChgPortRelockShtDnTmr,
                              HPMR_ac_B.LeHPMR_t_dT +
                              HPMR_ac_DW.UnitDelay_DSTATE_cy);
    }

    /* End of Switch: '<S265>/Switch1' */

    /* Update for UnitDelay: '<S265>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cy = rtb_Switch1_a;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time1' */

    /* RelationalOperator: '<S187>/Comparison1' incorporates:
     *  Switch: '<S7>/Switch28'
     */
    rtb_AND22_k = (((uint32)VeHPMI_e_InitStatus) == CeSCPR_e_InitComplete);

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S267>/EdgeRising' */
    /* Logic: '<S284>/AND' incorporates:
     *  Logic: '<S284>/OR1'
     *  UnitDelay: '<S284>/Unit Delay'
     */
    rtb_AND_j3 = (rtb_AND22_k && (!HPMR_ac_DW.UnitDelay_DSTATE_ll));

    /* Update for UnitDelay: '<S284>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ll = rtb_AND22_k;

    /* End of Outputs for SubSystem: '<S267>/EdgeRising' */

    /* Switch: '<S267>/Switch1' incorporates:
     *  Logic: '<S267>/OR'
     *  Logic: '<S267>/OR1'
     */
    if ((!rtb_AND22_k) || rtb_AND_j3)
    {
        /* Switch: '<S267>/Switch1' incorporates:
         *  Constant: '<S267>/Constant Value1'
         */
        rtb_Switch1_d3 = 0.0F;
    }
    else
    {
        /* Switch: '<S267>/Switch1' incorporates:
         *  Constant: '<S254>/Calib'
         *  MinMax: '<S267>/Minimum'
         *  Sum: '<S267>/Summation'
         *  UnitDelay: '<S267>/Unit Delay'
         */
        rtb_Switch1_d3 = fminf(KeHPMR_t_DbncRadioSCPR_InitDone,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S267>/Switch1' */

    /* Update for UnitDelay: '<S267>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_d3;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time3' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S266>/EdgeRising' */
    /* Logic: '<S283>/AND' incorporates:
     *  Logic: '<S283>/OR1'
     *  UnitDelay: '<S283>/Unit Delay'
     */
    rtb_AND_j3 = (VeHPMI_b_MCPA_CoreFail && (!HPMR_ac_DW.UnitDelay_DSTATE_j2f));

    /* Update for UnitDelay: '<S283>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_j2f = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S266>/EdgeRising' */

    /* Switch: '<S266>/Switch1' incorporates:
     *  Logic: '<S266>/OR'
     *  Logic: '<S266>/OR1'
     */
    if ((!VeHPMI_b_MCPA_CoreFail) || rtb_AND_j3)
    {
        /* Switch: '<S266>/Switch1' incorporates:
         *  Constant: '<S266>/Constant Value1'
         */
        rtb_Abs = 0.0F;
    }
    else
    {
        /* Switch: '<S266>/Switch1' incorporates:
         *  Constant: '<S257>/Calib'
         *  MinMax: '<S266>/Minimum'
         *  Sum: '<S266>/Summation'
         *  UnitDelay: '<S266>/Unit Delay'
         */
        rtb_Abs = fminf(KeHPMR_t_SCPRInitTmot, HPMR_ac_B.LeHPMR_t_dT +
                        HPMR_ac_DW.UnitDelay_DSTATE_b);
    }

    /* End of Switch: '<S266>/Switch1' */

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_b = rtb_Abs;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time2' */

    /* Logic: '<S187>/Logical12' */
    rtb_UnitDelay_av = !VeHPMI_b_ThrmlSystRly_EnblCmnd;

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time5' */
    /* Outputs for Atomic SubSystem: '<S269>/EdgeRising' */
    /* Logic: '<S286>/AND' incorporates:
     *  Logic: '<S286>/OR1'
     *  UnitDelay: '<S286>/Unit Delay'
     */
    rtb_AND_j3 = (rtb_UnitDelay_av && (!HPMR_ac_DW.UnitDelay_DSTATE_kf));

    /* Update for UnitDelay: '<S286>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_kf = rtb_UnitDelay_av;

    /* End of Outputs for SubSystem: '<S269>/EdgeRising' */

    /* Switch: '<S269>/Switch1' incorporates:
     *  Logic: '<S269>/OR'
     *  Logic: '<S269>/OR1'
     */
    if ((!rtb_UnitDelay_av) || rtb_AND_j3)
    {
        /* Switch: '<S269>/Switch1' incorporates:
         *  Constant: '<S269>/Constant Value1'
         */
        rtb_Switch1_bzy = 0.0F;
    }
    else
    {
        /* Switch: '<S269>/Switch1' incorporates:
         *  Constant: '<S255>/Calib'
         *  MinMax: '<S269>/Minimum'
         *  Sum: '<S269>/Summation'
         *  UnitDelay: '<S269>/Unit Delay'
         */
        rtb_Switch1_bzy = fminf(KeHPMR_t_DbncThermalLINDsbl,
                                HPMR_ac_B.LeHPMR_t_dT +
                                HPMR_ac_DW.UnitDelay_DSTATE_dv);
    }

    /* End of Switch: '<S269>/Switch1' */

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dv = rtb_Switch1_bzy;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time5' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S268>/EdgeRising' */
    /* Logic: '<S285>/AND' incorporates:
     *  Logic: '<S285>/OR1'
     *  UnitDelay: '<S285>/Unit Delay'
     */
    rtb_AND_j3 = (VeHPMI_b_MCPA_CoreFail && (!HPMR_ac_DW.UnitDelay_DSTATE_lg));

    /* Update for UnitDelay: '<S285>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_lg = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S268>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time6' */
    /* Logic: '<S268>/OR1' incorporates:
     *  Logic: '<S270>/OR1'
     */
    tmpRead_1y = !VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time6' */

    /* Switch: '<S268>/Switch1' incorporates:
     *  Logic: '<S268>/OR'
     *  Logic: '<S268>/OR1'
     */
    if (tmpRead_1y || rtb_AND_j3)
    {
        /* Switch: '<S268>/Switch1' incorporates:
         *  Constant: '<S268>/Constant Value1'
         */
        rtb_Switch1_ap = 0.0F;
    }
    else
    {
        /* Switch: '<S268>/Switch1' incorporates:
         *  Constant: '<S259>/Calib'
         *  MinMax: '<S268>/Minimum'
         *  Sum: '<S268>/Summation'
         *  UnitDelay: '<S268>/Unit Delay'
         */
        rtb_Switch1_ap = fminf(KeHPMR_t_ThrmlShtdwnTmot, HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S268>/Switch1' */

    /* Update for UnitDelay: '<S268>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_ap;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time4' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time6' */
    /* Outputs for Atomic SubSystem: '<S270>/EdgeRising' */
    /* Logic: '<S287>/AND' incorporates:
     *  Logic: '<S287>/OR1'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    rtb_VeHPMC_b_MtrAActv = (VeHPMI_b_MCPA_CoreFail &&
        (!HPMR_ac_DW.UnitDelay_DSTATE_c1));

    /* Update for UnitDelay: '<S287>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_c1 = VeHPMI_b_MCPA_CoreFail;

    /* End of Outputs for SubSystem: '<S270>/EdgeRising' */

    /* Switch: '<S270>/Switch1' incorporates:
     *  Logic: '<S270>/OR'
     */
    if (tmpRead_1y || rtb_VeHPMC_b_MtrAActv)
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S270>/Constant Value1'
         */
        rtb_Switch1_huz = 0.0F;
    }
    else
    {
        /* Switch: '<S270>/Switch1' incorporates:
         *  Constant: '<S256>/Calib'
         *  MinMax: '<S270>/Minimum'
         *  Sum: '<S270>/Summation'
         *  UnitDelay: '<S270>/Unit Delay'
         */
        rtb_Switch1_huz = fminf(KeHPMR_t_ParkAchvdTimeout, HPMR_ac_B.LeHPMR_t_dT
                                + HPMR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Update for UnitDelay: '<S270>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_huz;

    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time6' */

    /* Logic: '<S187>/Logical19' incorporates:
     *  Constant: '<S244>/Constant'
     *  Constant: '<S245>/Constant'
     *  Constant: '<S250>/Calib'
     *  RelationalOperator: '<S187>/Comparison3'
     *  RelationalOperator: '<S187>/Comparison5'
     *  UnitDelay: '<S187>/Unit Delay3'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    rtb_VeHPMC_b_MtrAActv = (((((uint32)HPMR_ac_DW.UnitDelay3_DSTATE_a) ==
        CeHPMR_e_OPERATIONAL_SERIESCFG) && (((uint32)
        HPMR_ac_B.LeHPMR_e_HybSysSt_j) == CeHPMR_e_INIT_CNTRLR_PWRDWN)) &&
        (KeHPMR_b_VehWSwitchBattPack));

    /* Outputs for Atomic SubSystem: '<S187>/EdgeRising' */
    /* Logic: '<S243>/AND' incorporates:
     *  Logic: '<S243>/OR1'
     *  UnitDelay: '<S243>/Unit Delay'
     */
    rtb_UnitDelay_ik = (rtb_VeHPMC_b_MtrAActv &&
                        (!HPMR_ac_DW.UnitDelay_DSTATE_dm));

    /* Update for UnitDelay: '<S243>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_dm = rtb_VeHPMC_b_MtrAActv;

    /* End of Outputs for SubSystem: '<S187>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S187>/Timer Reset Enabled' */
    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S262>/Constant Value3'
     *  Logic: '<S262>/AND1'
     *  RelationalOperator: '<S262>/Greater  Than2'
     *  Switch: '<S262>/Switch2'
     *  UnitDelay: '<S262>/Unit Delay'
     */
    if (rtb_UnitDelay_ik && (HPMR_ac_DW.UnitDelay_DSTATE_l <= 0.0F))
    {
        /* Switch: '<S262>/Switch1' incorporates:
         *  Constant: '<S258>/Calib'
         */
        rtb_Switch1_pc = KeHPMR_t_SeriesCfgTmot;
    }
    else if (rtb_VeHPMC_b_MtrAActv)
    {
        /* Switch: '<S262>/Switch2' incorporates:
         *  Constant: '<S262>/Constant Value4'
         *  MinMax: '<S262>/Maximum'
         *  Sum: '<S262>/Subtraction'
         *  Switch: '<S262>/Switch1'
         */
        rtb_Switch1_pc = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_l -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S262>/Switch1' incorporates:
         *  Switch: '<S262>/Switch2'
         */
        rtb_Switch1_pc = HPMR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* End of Switch: '<S262>/Switch1' */

    /* Update for UnitDelay: '<S262>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_pc;

    /* Outputs for Atomic SubSystem: '<S187>/Signal Latch On With Reset' */
    /* Logic: '<S261>/OR1' incorporates:
     *  Constant: '<S262>/Constant Value2'
     *  Logic: '<S187>/Logical21'
     *  Logic: '<S187>/Logical22'
     *  Logic: '<S261>/NOT'
     *  Logic: '<S261>/OR'
     *  RelationalOperator: '<S262>/Greater  Than1'
     *  UnitDelay: '<S261>/Unit Delay'
     */
    rtb_VeHPMC_b_MtrAActv = (rtb_VeHPMC_b_MtrAActv ||
        (((!VeHPMI_b_RdyForShtDwn_OBCR) && (rtb_Switch1_pc > 0.0F)) &&
         (HPMR_ac_DW.UnitDelay_DSTATE_geu)));

    /* End of Outputs for SubSystem: '<S187>/Timer Reset Enabled' */

    /* Update for UnitDelay: '<S261>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_geu = rtb_VeHPMC_b_MtrAActv;

    /* End of Outputs for SubSystem: '<S187>/Signal Latch On With Reset' */

    /* Switch: '<S221>/Switch' incorporates:
     *  Constant: '<S370>/Calib'
     *  RelationalOperator: '<S221>/Comparison4'
     *  Switch: '<S7>/Switch24'
     */
    if (KeHPMR_b_EnblSecured_to_Shtdwn)
    {
        tmpRead_1y = VeHPMI_b_Secured_To_Shtdwn;
    }
    else
    {
        tmpRead_1y = (((uint32)VeHPMI_e_VldtdTransRngSt) ==
                      CeTRGR_e_TransRangePark);
    }

    /* End of Switch: '<S221>/Switch' */

    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time5' */
    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S187>/Turn On Delay Time6' */
    /* If: '<S187>/If' incorporates:
     *  Constant: '<S249>/Calib'
     *  Constant: '<S251>/Calib'
     *  Constant: '<S252>/Calib'
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Calib'
     *  Constant: '<S257>/Calib'
     *  Constant: '<S259>/Calib'
     *  Logic: '<S187>/Logical10'
     *  Logic: '<S187>/Logical11'
     *  Logic: '<S187>/Logical14'
     *  Logic: '<S187>/Logical15'
     *  Logic: '<S187>/Logical16'
     *  Logic: '<S187>/Logical17'
     *  Logic: '<S187>/Logical18'
     *  Logic: '<S187>/Logical2'
     *  Logic: '<S187>/Logical20'
     *  Logic: '<S187>/Logical3'
     *  Logic: '<S187>/Logical4'
     *  Logic: '<S187>/Logical5'
     *  Logic: '<S187>/Logical6'
     *  Logic: '<S187>/Logical7'
     *  Logic: '<S264>/AND'
     *  Logic: '<S265>/AND'
     *  Logic: '<S266>/AND'
     *  Logic: '<S267>/AND'
     *  Logic: '<S268>/AND'
     *  Logic: '<S269>/AND'
     *  Logic: '<S270>/AND'
     *  RelationalOperator: '<S187>/Comparison2'
     *  RelationalOperator: '<S264>/Greater  Than'
     *  RelationalOperator: '<S265>/Greater  Than'
     *  RelationalOperator: '<S266>/Greater  Than'
     *  RelationalOperator: '<S267>/Greater  Than'
     *  RelationalOperator: '<S268>/Greater  Than'
     *  RelationalOperator: '<S269>/Greater  Than'
     *  RelationalOperator: '<S270>/Greater  Than'
     *  Switch: '<S7>/Switch83'
     */
    if ((((((((rtb_Comparison2_jy && (((!VeHPMI_b_HCP_LTP_FanAftRun_Rq) ||
                 (VeHPMI_b_RdyForShtDwn)) || (rtb_Comparison2_jy &&
                 (rtb_Switch1_ne >= KeHPMR_t_AfterRunShtDnTmr)))) &&
              ((!VeHPMI_b_RelockTimerActive) || (rtb_Comparison2_jy &&
                (rtb_Switch1_a >= KeHPMR_t_ChgPortRelockShtDnTmr)))) &&
             ((rtb_AND22_k && (rtb_Switch1_d3 >= KeHPMR_t_DbncRadioSCPR_InitDone))
              || (VeHPMI_b_MCPA_CoreFail && (rtb_Abs >= KeHPMR_t_SCPRInitTmot))))
            && ((rtb_UnitDelay_av && (rtb_Switch1_bzy >=
               KeHPMR_t_DbncThermalLINDsbl)) || (VeHPMI_b_MCPA_CoreFail &&
              (rtb_Switch1_ap >= KeHPMR_t_ThrmlShtdwnTmot)))) &&
            ((!HPMR_ac_B.VariantMergeForOutportVeHPMC__e) || (((uint32)
              VeHPMI_e_FOTA_Install_Status) != CeCITR_e_Installation_Complete)))
          && (tmpRead_1y || (VeHPMI_b_MCPA_CoreFail && (rtb_Switch1_huz >=
             KeHPMR_t_ParkAchvdTimeout)))) && ((!VeHPMI_b_ThrmlRnawyFlg) ||
            (!KeHPMR_b_UseThermalRunawayLogic))) && (!rtb_VeHPMC_b_MtrAActv))
    {
        /* Outputs for IfAction SubSystem: '<S187>/CntrlrPwrHold_0' incorporates:
         *  ActionPort: '<S240>/Action Port'
         */
        HPMR_ac_CntrlrPwrHold_0(&HPMR_ac_B.VariantMergeForOutportLeHPMR_b_);

        /* End of Outputs for SubSystem: '<S187>/CntrlrPwrHold_0' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S187>/CntrlrPwrHold_1' incorporates:
         *  ActionPort: '<S241>/Action Port'
         */
        HPMR_ac_CntrlrPwrHold_1(&HPMR_ac_B.VariantMergeForOutportLeHPMR_b_);

        /* End of Outputs for SubSystem: '<S187>/CntrlrPwrHold_1' */
    }

    /* End of If: '<S187>/If' */
    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time6' */
    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time4' */
    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time5' */
    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time2' */
    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time3' */
    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S187>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S8>/VeHPMC_b_PrepareToShtdwn' incorporates:
     *  Gain: '<S260>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__i = VeHPMI_b_MCPA_CoreFail;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt' incorporates:
     *  DataTypeConversion: '<S190>/DataTypeConversion'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    HPMR_ac_B.VariantMergeForOutportLeHPMR_e_ = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd' incorporates:
     *  DataTypeConversion: '<S191>/DataTypeConversion'
     */
    VeHPMC_e_BattCntctrCmd = HPMR_ac_B.LeHPMC_e_BattCntctrCmd;

    /* DataTypeConversion: '<S192>/DataTypeConversion' */
    VeHPMR_e_SrcSysSt = VeHPMC_e_Src_HybSysSt;

    /* DataTypeConversion: '<S193>/DataTypeConversion' */
    VeHPMR_e_TrgtSysSt = VeHPMR_e_Trgt_HybSysSt;

    /* VariantMerge generated from: '<S8>/LeHPMR_e_PropSysMode' incorporates:
     *  DataTypeConversion: '<S194>/DataTypeConversion'
     */
    HPMR_ac_B.LeHPMR_e_PropSysMode_k = HPMR_ac_B.LeHPMR_e_PropSysMode_i;

    /* Logic: '<S318>/AND' incorporates:
     *  Constant: '<S319>/Calib'
     *  Logic: '<S195>/Logical Operator'
     *  Logic: '<S195>/Logical Operator1'
     */
    HPMR_ac_B.AND_m = (((VeHPMR_b_HVFaults) || (VeHPMR_b_UnintendedFltShtdwn)) &&
                       (KeHPMR_b_VehWSwitchBattPack));

    /* Outputs for Atomic SubSystem: '<S212>/Stop Watch Reset Enabled1' */
    /* Switch: '<S347>/Switch2' incorporates:
     *  Logic: '<S212>/Logical5'
     *  Switch: '<S347>/Switch'
     */
    if (!VeHPMC_b_PropulsionSystemActive)
    {
        /* Switch: '<S347>/Switch' incorporates:
         *  Constant: '<S347>/Constant Value2'
         */
        rtb_Switch1_ne = 0.0F;
    }
    else
    {
        /* Switch: '<S347>/Switch' incorporates:
         *  Sum: '<S347>/Subtraction'
         *  Switch: '<S347>/Switch2'
         *  UnitDelay: '<S347>/Unit Delay'
         */
        rtb_Switch1_ne = HPMR_ac_B.LeHPMR_t_dT + HPMR_ac_DW.UnitDelay_DSTATE_c;
    }

    /* End of Switch: '<S347>/Switch2' */

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S212>/Stop Watch Reset Enabled1' */

    /* VariantMerge generated from: '<S8>/VeHPMR_t_PropSysActv' incorporates:
     *  Gain: '<S346>/Gain'
     */
    HPMR_ac_B.VeHPMR_t_PropSysActv = rtb_Switch1_ne;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_ImmoStat_NotVldTmout' incorporates:
     *  Gain: '<S214>/Gain'
     */
    VeHPMC_b_ImmoStat_NotVldTmout = VeHPMI_b_HighVoltageRapidShtdwn;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_MCP_SPT_TimeoutOut' incorporates:
     *  Gain: '<S215>/Gain'
     */
    HPMR_ac_B.VeHPMC_b_MCP_SPT_TimeoutOut = VeHPMC_b_MCP_SPT_Timeout;

    /* Gain: '<S216>/Gain' */
    VeHPMR_b_InitPwrUp = VeHPMC_b_InitPwrUp;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_UnintendedShtdwnOcc' incorporates:
     *  Gain: '<S217>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR__h =
        HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_PrechargeFailure' incorporates:
     *  Gain: '<S218>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMR__c =
        HPMR_ac_B.LeHPMR_b_PrechargeFailure;

    /* VariantMerge generated from: '<S8>/LeHPMC_b_ContactorsClosedThisKeyOld' incorporates:
     *  UnitDelay: '<S10>/Unit Delay'
     */
    HPMR_ac_B.LeHPMC_b_ContactorsClosedThisKe = HPMR_ac_DW.UnitDelay_DSTATE_cub;

    /* VariantMerge generated from: '<S8>/VeHPMR_b_CommandContactorsOpenOld' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    VeHPMR_b_CommandContactorsOpenOld = HPMR_ac_DW.UnitDelay2_DSTATE_l;

    /* VariantMerge generated from: '<S8>/VeHPMC_b_EnblV2L' incorporates:
     *  Constant: '<S10>/FALSE Constant2'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__d = false;

    /* End of Outputs for SubSystem: '<S8>/DetHybSysSt_BEV' */
#endif

    /* End of Outputs for SubSystem: '<S4>/DetHybSysSt_Variant' */

    /* Update for Atomic SubSystem: '<S4>/DetHybSysSt_Variant' */
#if Rte_SysCon_Variant_HPMR_3

    /* Update for Atomic SubSystem: '<S8>/DetHybSysSt' */
    /* Update for UnitDelay: '<S9>/Unit Delay3' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    HPMR_ac_DW.UnitDelay3_DSTATE_j = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* Update for UnitDelay: '<S28>/Unit Delay' incorporates:
     *  Switch: '<S7>/Switch45'
     */
    HPMR_ac_DW.UnitDelay_DSTATE_aiw = VeHPMI_e_KeyStatus;

    /* Update for UnitDelay: '<S9>/Unit Delay1' */
    HPMR_ac_DW.UnitDelay1_DSTATE_l = VeHPMC_b_EnblV2L;

    /* Update for Atomic SubSystem: '<S11>/EdgeRising1' */
    /* Update for UnitDelay: '<S74>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_i5 = VeHPMR_b_MtrNotInActvDschrg;

    /* End of Update for SubSystem: '<S11>/EdgeRising1' */

    /* Update for UnitDelay: '<S9>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_pu = VeHPMC_b_ContactorsClosedThisKey;

    /* Update for UnitDelay: '<S9>/Unit Delay2' */
    HPMR_ac_DW.UnitDelay2_DSTATE_p = VeHPMR_b_CommandContactorsOpen;

    /* End of Update for SubSystem: '<S8>/DetHybSysSt' */
#else

    /* Update for Atomic SubSystem: '<S8>/DetHybSysSt_BEV' */
    /* Update for UnitDelay: '<S10>/Unit Delay3' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    HPMR_ac_DW.UnitDelay3_DSTATE = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* Update for UnitDelay: '<S196>/Unit Delay' incorporates:
     *  Switch: '<S7>/Switch45'
     */
    HPMR_ac_DW.UnitDelay_DSTATE_hs = VeHPMI_e_KeyStatus;

    /* Update for Atomic SubSystem: '<S179>/EdgeRising1' */
    /* Update for UnitDelay: '<S223>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_bm = VeHPMR_b_MtrNotInActvDschrg;

    /* End of Update for SubSystem: '<S179>/EdgeRising1' */

    /* Update for UnitDelay: '<S187>/Unit Delay3' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    HPMR_ac_DW.UnitDelay3_DSTATE_a = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* Update for UnitDelay: '<S10>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cub = HPMR_ac_B.VeHPMC_b_ContactorsClosedThis_i;

    /* Update for UnitDelay: '<S10>/Unit Delay2' */
    HPMR_ac_DW.UnitDelay2_DSTATE_l = HPMR_ac_B.VeHPMR_b_CommandContactorsOpe_f;

    /* End of Update for SubSystem: '<S8>/DetHybSysSt_BEV' */
#endif

    /* End of Update for SubSystem: '<S4>/DetHybSysSt_Variant' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HPMC_ProcHybSysStOutputs'
     */
    /* Outputs for Atomic SubSystem: '<S6>/ProcHybSysStOutputs_Variant' */
#if Rte_SysCon_Variant_HPMR_3

    /* Outputs for Atomic SubSystem: '<S1065>/ProcHybSysStOutputs' */
    /* Switch: '<S1087>/Switch1' incorporates:
     *  Constant: '<S1083>/Constant'
     *  RelationalOperator: '<S1069>/Equal2'
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    if (((uint32)VeHPMC_e_BattCntctrCmd) == CeHPMR_e_Closed)
    {
        /* Switch: '<S1087>/Switch1' incorporates:
         *  Constant: '<S1079>/Constant'
         */
        rtb_Switch1_bb = CeHPMR_e_Closed;
    }
    else
    {
        /* RelationalOperator: '<S1069>/Comparison4' incorporates:
         *  Constant: '<S1077>/Constant'
         */
        VeHPMI_b_HighVoltageRapidShtdwn = (((uint32)VeHPMC_e_BattCntctrCmd) ==
            CeHPMR_e_Open);

        /* Switch: '<S1087>/Switch2' incorporates:
         *  Constant: '<S1081>/Constant'
         *  Constant: '<S1090>/Calib'
         *  Constant: '<S1091>/Calib'
         *  Constant: '<S1092>/Calib'
         *  Constant: '<S1093>/Calib'
         *  Logic: '<S1069>/Logical'
         *  Logic: '<S1069>/Logical1'
         *  Logic: '<S1069>/Logical2'
         *  Logic: '<S1069>/Logical3'
         *  Logic: '<S1069>/Logical4'
         *  Logic: '<S1069>/Logical5'
         *  Logic: '<S1069>/Logical6'
         *  Logic: '<S1069>/Logical7'
         *  RelationalOperator: '<S1069>/Comparison1'
         *  Switch: '<S1069>/Switch'
         *  Switch: '<S1069>/Switch3'
         */
        if (((HPMR_ac_B.VeHPMR_b_FinalImpactSignal) &&
                (KeHPMR_b_EnableCrashFastOpen)) &&
                VeHPMI_b_HighVoltageRapidShtdwn)
        {
            /* Switch: '<S1087>/Switch1' incorporates:
             *  Constant: '<S1082>/Constant'
             *  Switch: '<S1087>/Switch2'
             */
            rtb_Switch1_bb = CeHPMR_e_ImpctOpen;
        }
        else if (VeHPMI_b_HighVoltageRapidShtdwn &&
                 ((((!HPMR_ac_B.LeHPMR_b_ShtdwnMtrSpdMet) &&
                    (KeHPMR_b_MtrSpeedFastOpen)) ||
                   ((VeHPMI_b_HVBatSrvcDisCnctFA) && (KeHPMR_b_HVBatSrvcDisCnct)))
                  || ((VeHPMR_b_HVILSpdCondMet) && (!KeHPMR_b_MergeDAPwHVIL))))
        {
            /* Switch: '<S1069>/Switch3' incorporates:
             *  Constant: '<S1078>/Constant'
             *  Switch: '<S1087>/Switch1'
             */
            rtb_Switch1_bb = CeHPMR_e_FastOpen;
        }
        else if (((uint32)VeHPMC_e_BattCntctrCmd) == CeHPMR_e_Undetermined)
        {
            /* Switch: '<S1069>/Switch' incorporates:
             *  Constant: '<S1081>/Constant'
             *  Switch: '<S1069>/Switch3'
             *  Switch: '<S1087>/Switch1'
             */
            rtb_Switch1_bb = CeHPMR_e_Undetermined;
        }
        else
        {
            /* Switch: '<S1087>/Switch1' incorporates:
             *  Constant: '<S1080>/Constant'
             *  Switch: '<S1069>/Switch'
             *  Switch: '<S1069>/Switch3'
             */
            rtb_Switch1_bb = CeHPMR_e_Open;
        }

        /* End of Switch: '<S1087>/Switch2' */
    }

    /* End of Switch: '<S1087>/Switch1' */

    /* VariantMerge generated from: '<S1065>/LeHPMR_e_HighVltCntctrCntrl' incorporates:
     *  DataTypeConversion: '<S1084>/DataTypeConversion'
     *  Switch: '<S1087>/Switch1'
     */
    HPMR_ac_B.VariantMergeForOutportLeHPMR__p = rtb_Switch1_bb;

    /* Switch: '<S1086>/Switch1' incorporates:
     *  Constant: '<S1085>/Constant'
     *  RelationalOperator: '<S1069>/Equal5'
     *  Switch: '<S1087>/Switch1'
     */
    if (((uint32)rtb_Switch1_bb) == CeHPMR_e_Closed)
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_DC_BattPackCntctrCmd' incorporates:
         *  Constant: '<S1088>/Calib'
         */
        HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd_n = KeHPMR_DC_CntctrCmdClose;
    }
    else
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_DC_BattPackCntctrCmd' incorporates:
         *  Constant: '<S1089>/Calib'
         */
        HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd_n = KeHPMR_DC_CntctrCmdOpen;
    }

    /* End of Switch: '<S1086>/Switch1' */

    /* VariantMerge generated from: '<S1065>/LeHPMR_f_CntctrCmd_PWM' incorporates:
     *  Constant: '<S1094>/Calib'
     */
    HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM_o = KeHPMR_f_CntctrCmd_PWM;

    /* RelationalOperator: '<S1095>/Comparison4' incorporates:
     *  RelationalOperator: '<S1074>/Equal10'
     *  RelationalOperator: '<S1074>/Equal9'
     *  RelationalOperator: '<S1096>/Equal6'
     *  RelationalOperator: '<S1124>/Equal4'
     *  RelationalOperator: '<S1124>/Equal5'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    VeHPMI_b_HighVoltageRapidShtd_0 = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* Logic: '<S1095>/Logical5' incorporates:
     *  Constant: '<S1097>/Constant'
     *  Constant: '<S1098>/Constant'
     *  Constant: '<S1099>/Constant'
     *  Constant: '<S1100>/Calib'
     *  Constant: '<S1101>/Calib'
     *  Constant: '<S1102>/Calib'
     *  Logic: '<S1095>/Logical'
     *  Logic: '<S1095>/Logical1'
     *  Logic: '<S1095>/Logical10'
     *  Logic: '<S1095>/Logical11'
     *  Logic: '<S1095>/Logical12'
     *  Logic: '<S1095>/Logical14'
     *  Logic: '<S1095>/Logical15'
     *  Logic: '<S1095>/Logical2'
     *  Logic: '<S1095>/Logical4'
     *  Logic: '<S1095>/Logical7'
     *  Logic: '<S1095>/Logical8'
     *  Logic: '<S1095>/Logical9'
     *  RelationalOperator: '<S1095>/Comparison1'
     *  RelationalOperator: '<S1095>/Comparison2'
     *  RelationalOperator: '<S1095>/Comparison4'
     *  Switch: '<S7>/Switch3'
     *  Switch: '<S7>/Switch51'
     */
    VeHPMC_b_Allw12VStrt = ((((((((((((((uint32)VeHPMI_b_HighVoltageRapidShtd_0)
        == CeHPMR_e_EVAL_HV_ENABLE) && (((VeHPMR_b_HV_BatCntctrOpenReq) ||
        ((VeHPMI_b_OpnBattCntctr) && (KeHPMR_b_Enbl_SRAROpnCntctr))) ||
        ((VeHPMC_b_CntctrOpnAltMdReq) && (KeHPMR_b_DsblImpctChck12VStrt)))) && (
        !VeHPMR_b_HVILSpdCondMet)) && (!VeHPMI_b_HVBatSrvcDisCnctFA)) &&
        (!VeHPMR_b_HVILFailThisKeyCycl)) && (((uint32)VeHPMI_e_BSW_SPT_State) ==
        CeINVR_e_Passed_SPT)) && ((!HPMR_ac_B.VeHPMR_b_FinalImpactSignal) ||
        (KeHPMR_b_DsblImpctChck12VStrt))) && (!VeHPMR_b_DAPFA_OpenCntctr)) && ((
        !VeHPMC_b_LossCommORC) || (KeHPMR_b_DsblImpctChck12VStrt))) &&
        (VeHPMI_b_EnblPrplsnSys)) && (((uint32)VeHPMI_e_HCPImmoStatCanC) ==
        CeIMOR_e_HCPRUN)) && (KeHPMR_b_Enbl_Allw12VStrt));

    /* Outputs for Atomic SubSystem: '<S1096>/EdgeRising1' */
    /* Logic: '<S1095>/Logical13' incorporates:
     *  Logic: '<S1096>/Logical6'
     *  Logic: '<S1109>/AND'
     */
    rtb_Comparison2_jy = !VeHPMC_b_PropulsionSystemActive;

    /* End of Outputs for SubSystem: '<S1096>/EdgeRising1' */

    /* Logic: '<S1095>/Logical6' incorporates:
     *  Logic: '<S1095>/Logical13'
     */
    VeHPMR_b_PropSysStartRdy_12VStrt = ((VeHPMC_b_Allw12VStrt) &&
        rtb_Comparison2_jy);

    /* VariantMerge generated from: '<S1065>/VeHPMC_b_Allw12VStrt' incorporates:
     *  Gain: '<S1103>/Gain'
     */
    HPMR_ac_B.VeHPMC_b_Allw12VStrt_f = VeHPMC_b_Allw12VStrt;

    /* Logic: '<S1096>/AND1' incorporates:
     *  Constant: '<S1107>/Constant'
     *  Constant: '<S1114>/Calib'
     *  Logic: '<S1096>/OR3'
     *  Logic: '<S1096>/OR6'
     *  RelationalOperator: '<S1096>/Equal6'
     */
    VeHPMR_b_PropSysStartRdy_HVStrt = (((!KeHPMR_b_EnblPropSysStrtRdy) &&
        (!VeHPMI_b_FltShtDwnBPClsdCmnd)) && (CeHPMR_e_INV_ENABLED == ((uint32)
        VeHPMI_b_HighVoltageRapidShtd_0)));

    /* Logic: '<S1074>/AND7' incorporates:
     *  Constant: '<S1127>/Constant'
     *  Constant: '<S1134>/Calib'
     *  RelationalOperator: '<S1074>/Equal9'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = ((((uint32)VeHPMI_b_HighVoltageRapidShtd_0)
        == CeHPMR_e_CMND_BUS_DISCHARGE) && (KeHPMR_b_Enbl_BusDischg));

    /* Outputs for Atomic SubSystem: '<S1124>/EdgeFalling' */
    /* Logic: '<S1136>/AND' incorporates:
     *  Logic: '<S1136>/OR1'
     *  UnitDelay: '<S1136>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = ((!VeHPMI_b_HighVoltageRapidShtdwn) &&
        (HPMR_ac_DW.UnitDelay_DSTATE_ah));

    /* Update for UnitDelay: '<S1136>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ah = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1124>/EdgeFalling' */

    /* Logic: '<S1124>/AND5' incorporates:
     *  Constant: '<S1140>/Constant'
     *  RelationalOperator: '<S1069>/Equal2'
     *  RelationalOperator: '<S1124>/Equal3'
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    VeHPMC_b_RstActvDschCntctrChk = ((CeHPMR_e_Closed == ((uint32)
        VeHPMC_e_BattCntctrCmd)) || VeHPMI_b_MCPA_CoreFail);

    /* Outputs for Atomic SubSystem: '<S1124>/Signal Latch On With Reset' */
    /* Logic: '<S1141>/OR1' incorporates:
     *  Constant: '<S1137>/Constant'
     *  Constant: '<S1138>/Constant'
     *  Constant: '<S1139>/Constant'
     *  Constant: '<S1140>/Constant'
     *  Logic: '<S1124>/AND1'
     *  Logic: '<S1124>/AND2'
     *  Logic: '<S1124>/AND4'
     *  Logic: '<S1141>/NOT'
     *  Logic: '<S1141>/OR'
     *  RelationalOperator: '<S1069>/Equal2'
     *  RelationalOperator: '<S1124>/Equal1'
     *  RelationalOperator: '<S1124>/Equal2'
     *  RelationalOperator: '<S1124>/Equal4'
     *  RelationalOperator: '<S1124>/Equal5'
     *  UnitDelay: '<S1124>/Unit Delay1'
     *  UnitDelay: '<S1141>/Unit Delay'
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    VeHPMC_b_ActvDschCntctrChk = ((((((uint32)VeHPMI_b_HighVoltageRapidShtd_0) >=
        CeHPMR_e_EVAL_ALT_HV_ENABLE) && (((uint32)
        VeHPMI_b_HighVoltageRapidShtd_0) <= CeHPMR_e_OPERATIONAL_ALTERNATOR)) ||
        ((((uint32)VeHPMC_e_BattCntctrCmd) == CeHPMR_e_Open) && (((uint32)
        HPMR_ac_DW.UnitDelay1_DSTATE_g) == CeHPMR_e_Closed))) ||
        ((!VeHPMC_b_RstActvDschCntctrChk) && (HPMR_ac_DW.UnitDelay_DSTATE_aq)));

    /* Update for UnitDelay: '<S1141>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_aq = VeHPMC_b_ActvDschCntctrChk;

    /* End of Outputs for SubSystem: '<S1124>/Signal Latch On With Reset' */

    /* If: '<S1074>/If' incorporates:
     *  Constant: '<S1128>/Constant'
     *  Constant: '<S1129>/Constant'
     *  Constant: '<S1134>/Calib'
     *  Logic: '<S1074>/AND3'
     *  RelationalOperator: '<S1074>/Equal10'
     *  RelationalOperator: '<S1074>/Equal11'
     *  UnitDelay: '<S1074>/Unit Delay'
     */
    rtPrevAction = HPMR_ac_DW.If_ActiveSubsystem_m;
    if (VeHPMI_b_HighVoltageRapidShtdwn)
    {
        rtAction = 0;
    }
    else if (((KeHPMR_b_Enbl_BusDischg) && (((uint32)
                VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_INIT_CNTRLR_PWRDWN))
             && (((uint32)HPMR_ac_DW.UnitDelay_DSTATE_jg) ==
                 CeHPMR_e_CMND_BUS_DISCHARGE))
    {
        rtAction = 1;
    }
    else
    {
        rtAction = 2;
    }

    HPMR_ac_DW.If_ActiveSubsystem_m = rtAction;
    switch (rtAction)
    {
      case 0:
        if (rtAction != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S1074>/BusDischarge' incorporates:
             *  ActionPort: '<S1126>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S1126>/Turn On Delay Time' */
            /* SystemReset for If: '<S1074>/If' incorporates:
             *  UnitDelay: '<S1160>/Unit Delay'
             *  UnitDelay: '<S1161>/Unit Delay'
             *  UnitDelay: '<S1169>/Unit Delay'
             *  UnitDelay: '<S1170>/Unit Delay'
             */
            HPMR_ac_DW.UnitDelay_DSTATE_d = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S1169>/EdgeRising' */
            HPMR_ac_DW.UnitDelay_DSTATE_kh = false;

            /* End of SystemReset for SubSystem: '<S1169>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S1126>/Turn On Delay Time' */

            /* SystemReset for Atomic SubSystem: '<S1126>/EdgeRising' */
            HPMR_ac_DW.UnitDelay_DSTATE_bz = false;

            /* End of SystemReset for SubSystem: '<S1126>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S1126>/Count Down  Reset Enabled' */
            HPMR_ac_DW.UnitDelay_DSTATE_oa = 0U;

            /* End of SystemReset for SubSystem: '<S1126>/Count Down  Reset Enabled' */
            /* End of SystemReset for SubSystem: '<S1074>/BusDischarge' */
        }

        /* Outputs for IfAction SubSystem: '<S1074>/BusDischarge' incorporates:
         *  ActionPort: '<S1126>/Action Port'
         */
        /* RelationalOperator: '<S1126>/Comparison4' incorporates:
         *  Constant: '<S1159>/Constant'
         *  Constant: '<S1166>/Calib'
         */
        VeHPMI_b_HighVoltageRapidShtdwn = (((uint32)KeHPMR_e_IGBT_DischrgSlct) ==
            CeHPMR_e_OnCktFail);

        /* Outputs for Atomic SubSystem: '<S1126>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S1169>/EdgeRising' */
        /* Logic: '<S1170>/AND' incorporates:
         *  Logic: '<S1170>/OR1'
         *  UnitDelay: '<S1170>/Unit Delay'
         */
        VeHPMI_b_MCPA_CoreFail = (VeHPMI_b_HighVoltageRapidShtdwn &&
            (!HPMR_ac_DW.UnitDelay_DSTATE_kh));

        /* Update for UnitDelay: '<S1170>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE_kh = VeHPMI_b_HighVoltageRapidShtdwn;

        /* End of Outputs for SubSystem: '<S1169>/EdgeRising' */

        /* Switch: '<S1169>/Switch1' incorporates:
         *  Logic: '<S1169>/OR'
         *  Logic: '<S1169>/OR1'
         */
        if ((!VeHPMI_b_HighVoltageRapidShtdwn) || VeHPMI_b_MCPA_CoreFail)
        {
            /* Switch: '<S1169>/Switch1' incorporates:
             *  Constant: '<S1169>/Constant Value1'
             */
            rtb_Switch1_ne = 0.0F;
        }
        else
        {
            /* Switch: '<S1169>/Switch1' incorporates:
             *  Constant: '<S1167>/Calib'
             *  MinMax: '<S1169>/Minimum'
             *  Sum: '<S1169>/Summation'
             *  UnitDelay: '<S1169>/Unit Delay'
             */
            rtb_Switch1_ne = fminf(KeHPMR_t_HardwareDischargePeriod,
                                   HPMR_ac_B.LeHPMR_t_dT +
                                   HPMR_ac_DW.UnitDelay_DSTATE_d);
        }

        /* End of Switch: '<S1169>/Switch1' */

        /* Update for UnitDelay: '<S1169>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_ne;

        /* UnitDelay: '<S1161>/Unit Delay' incorporates:
         *  Constant: '<S1155>/Constant'
         *  Constant: '<S1166>/Calib'
         *  Constant: '<S1167>/Calib'
         *  Logic: '<S1126>/Logical1'
         *  Logic: '<S1169>/AND'
         *  RelationalOperator: '<S1126>/Comparison1'
         *  RelationalOperator: '<S1126>/Comparison4'
         *  RelationalOperator: '<S1169>/Greater  Than'
         */
        VeHPMI_b_HighVoltageRapidShtdwn = ((VeHPMI_b_HighVoltageRapidShtdwn &&
            (rtb_Switch1_ne >= KeHPMR_t_HardwareDischargePeriod)) || (((uint32)
            KeHPMR_e_IGBT_DischrgSlct) == CeHPMR_e_Always));

        /* End of Outputs for SubSystem: '<S1126>/Turn On Delay Time' */

        /* Logic: '<S1126>/Logical2' */
        VeHPMI_b_MCPA_CoreFail = (((VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn) ||
            (VeHPMI_b_HVBatSrvcDisCnctFA)) || (VeHPMR_b_CollisionDetection));

        /* Logic: '<S1126>/Logical4' incorporates:
         *  Logic: '<S1126>/Logical3'
         *  Logic: '<S1126>/Logical5'
         */
        VeHPMR_b_EnblActvDschTout = (((VeHPMR_b_SpdCondMetActvDschg) &&
            VeHPMI_b_HighVoltageRapidShtdwn) || (VeHPMI_b_HighVoltageRapidShtdwn
            && VeHPMI_b_MCPA_CoreFail));

        /* Outputs for Atomic SubSystem: '<S1126>/EdgeRising' */
        /* Logic: '<S1161>/AND' incorporates:
         *  Logic: '<S1161>/OR1'
         *  UnitDelay: '<S1161>/Unit Delay'
         */
        VeHPMR_b_RstActvDschTout = ((VeHPMR_b_EnblActvDschTout) &&
            (!HPMR_ac_DW.UnitDelay_DSTATE_bz));

        /* Update for UnitDelay: '<S1161>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE_bz = VeHPMR_b_EnblActvDschTout;

        /* End of Outputs for SubSystem: '<S1126>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S1126>/Count Down  Reset Enabled' */
        /* Switch: '<S1160>/Switch1' incorporates:
         *  Constant: '<S1160>/Constant Value'
         *  Logic: '<S1160>/AND'
         *  RelationalOperator: '<S1160>/Greater  Than'
         *  Switch: '<S1160>/Switch2'
         *  UnitDelay: '<S1160>/Unit Delay'
         */
        if (VeHPMR_b_RstActvDschTout)
        {
            /* Switch: '<S1160>/Switch1' incorporates:
             *  Constant: '<S1165>/Calib'
             */
            rtb_Switch1_mp = KeHPMR_Cnt_ActvDischTout;
        }
        else if ((VeHPMR_b_EnblActvDschTout) && (((sint32)
                   HPMR_ac_DW.UnitDelay_DSTATE_oa) > 0))
        {
            /* Switch: '<S1160>/Switch2' incorporates:
             *  Constant: '<S1160>/Constant Value1'
             *  Sum: '<S1160>/Subtraction'
             *  Switch: '<S1160>/Switch1'
             *  UnitDelay: '<S1160>/Unit Delay'
             */
            rtb_Switch1_mp = (uint16)((sint32)(((sint32)
                HPMR_ac_DW.UnitDelay_DSTATE_oa) - 1));
        }
        else
        {
            /* Switch: '<S1160>/Switch1' incorporates:
             *  Switch: '<S1160>/Switch2'
             *  UnitDelay: '<S1160>/Unit Delay'
             */
            rtb_Switch1_mp = HPMR_ac_DW.UnitDelay_DSTATE_oa;
        }

        /* End of Switch: '<S1160>/Switch1' */

        /* RelationalOperator: '<S1160>/Greater  Than1' incorporates:
         *  Constant: '<S1160>/Constant Value2'
         */
        VeHPMR_b_ActvDschTout = (((sint32)rtb_Switch1_mp) > 0);

        /* Update for UnitDelay: '<S1160>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE_oa = rtb_Switch1_mp;

        /* End of Outputs for SubSystem: '<S1126>/Count Down  Reset Enabled' */

        /* Logic: '<S1126>/Logical' */
        VeHPMR_b_ActvDschSwitch = (((VeHPMR_b_ActvDschTout) &&
            (VeHPMR_b_EnblActvDschTout)) && (VeHPMC_b_ActvDschCntctrChk));

        /* Switch: '<S1126>/Switch' incorporates:
         *  Switch: '<S1126>/Switch1'
         */
        if (VeHPMR_b_ActvDschSwitch)
        {
            /* Switch: '<S1126>/Switch' incorporates:
             *  Constant: '<S1156>/Constant'
             */
            VeHPMR_e_InvrtrSwitchCmd_TmpBD = CeHPMR_e_ActiveDischarge;
        }
        else if (VeHPMI_b_MCPA_CoreFail)
        {
            /* Switch: '<S1126>/Switch1' incorporates:
             *  Constant: '<S1158>/Constant'
             *  Switch: '<S1126>/Switch'
             */
            VeHPMR_e_InvrtrSwitchCmd_TmpBD = CeHPMR_e_DisableImmd;
        }
        else
        {
            /* Switch: '<S1126>/Switch' incorporates:
             *  Constant: '<S1157>/Constant'
             *  Switch: '<S1126>/Switch1'
             */
            VeHPMR_e_InvrtrSwitchCmd_TmpBD = CeHPMR_e_Disable;
        }

        /* End of Switch: '<S1126>/Switch' */

        /* Merge: '<S1074>/Merge' incorporates:
         *  DataTypeConversion: '<S1162>/DataTypeConversion'
         *  Switch: '<S1126>/Switch'
         */
        rtb_VeHPMR_e_InvrtrASwitchCmd_A = VeHPMR_e_InvrtrSwitchCmd_TmpBD;

        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut' incorporates:
         *  DataTypeConversion: '<S1163>/DataTypeConversion'
         *  Switch: '<S1126>/Switch'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1 =
            VeHPMR_e_InvrtrSwitchCmd_TmpBD;

        /* Merge: '<S1074>/Merge1' incorporates:
         *  DataTypeConversion: '<S1164>/DataTypeConversion'
         *  Switch: '<S1126>/Switch'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrCSwitchCmd_Arb = VeHPMR_e_InvrtrSwitchCmd_TmpBD;

        /* End of Outputs for SubSystem: '<S1074>/BusDischarge' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S1074>/EndBusDischarge' incorporates:
         *  ActionPort: '<S1130>/Action Port'
         */
        /* Switch: '<S1130>/Switch1' incorporates:
         *  Logic: '<S1130>/Logical2'
         */
        if (((VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn) || (VeHPMI_b_HVBatSrvcDisCnctFA))
            || (VeHPMR_b_CollisionDetection))
        {
            /* Switch: '<S1130>/Switch1' incorporates:
             *  Constant: '<S1172>/Constant'
             */
            VeHPMR_e_InvrtrSwitchCmd_Tmp_EBD = CeHPMR_e_DisableImmd;
        }
        else
        {
            /* Switch: '<S1130>/Switch1' incorporates:
             *  Constant: '<S1171>/Constant'
             */
            VeHPMR_e_InvrtrSwitchCmd_Tmp_EBD = CeHPMR_e_Disable;
        }

        /* End of Switch: '<S1130>/Switch1' */

        /* Merge: '<S1074>/Merge' incorporates:
         *  DataTypeConversion: '<S1173>/DataTypeConversion'
         *  Switch: '<S1130>/Switch1'
         */
        rtb_VeHPMR_e_InvrtrASwitchCmd_A = VeHPMR_e_InvrtrSwitchCmd_Tmp_EBD;

        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut' incorporates:
         *  DataTypeConversion: '<S1174>/DataTypeConversion'
         *  Switch: '<S1130>/Switch1'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1 =
            VeHPMR_e_InvrtrSwitchCmd_Tmp_EBD;

        /* Merge: '<S1074>/Merge1' incorporates:
         *  DataTypeConversion: '<S1175>/DataTypeConversion'
         *  Switch: '<S1130>/Switch1'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrCSwitchCmd_Arb =
            VeHPMR_e_InvrtrSwitchCmd_Tmp_EBD;

        /* End of Outputs for SubSystem: '<S1074>/EndBusDischarge' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S1074>/NormalOperation' incorporates:
         *  ActionPort: '<S1135>/Action Port'
         */
        /* RelationalOperator: '<S1135>/Comparison12' incorporates:
         *  RelationalOperator: '<S1135>/Comparison13'
         *  RelationalOperator: '<S1135>/Comparison14'
         *  Switch: '<S1135>/Switch4'
         *  Switch: '<S1135>/Switch6'
         *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
         */
        VeHPMI_b_HighVoltageRapidShtd_1 = HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5;

        /* Logic: '<S1135>/Logical10' incorporates:
         *  Constant: '<S1176>/Constant'
         *  Constant: '<S1178>/Constant'
         *  Constant: '<S1191>/Calib'
         *  Constant: '<S1192>/Calib'
         *  Logic: '<S1135>/Logical11'
         *  Logic: '<S1135>/Logical16'
         *  RelationalOperator: '<S1135>/Comparison12'
         *  RelationalOperator: '<S1135>/Comparison13'
         */
        VeHPMI_b_HighVoltageRapidShtdwn = ((KeHPMR_b_InvrtrSwitchCmd_Slctr) &&
            ((((uint32)VeHPMI_b_HighVoltageRapidShtd_1) == CeHPMR_e_Enable) ||
             ((((uint32)VeHPMI_b_HighVoltageRapidShtd_1) ==
               CeHPMR_e_Enable_VoltCntrl) &&
              (KeHPMR_b_Enbl_SRARDsblINV_AltToConv))));

        /* Switch: '<S1135>/Switch4' incorporates:
         *  Constant: '<S1185>/Calib'
         *  Constant: '<S1186>/Calib'
         *  Logic: '<S1135>/Logical14'
         *  Logic: '<S1135>/Logical15'
         *  Logic: '<S1135>/Logical9'
         */
        if ((((KeHPMR_b_DsblInvA_INVR_Enbl) && (VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq))
             && VeHPMI_b_HighVoltageRapidShtdwn) ||
                (((KeHPMR_b_DsblInvA_SRAR_Enbl) && (VeHPMI_b_DsblInvA)) &&
                 VeHPMI_b_HighVoltageRapidShtdwn))
        {
            /* Switch: '<S1135>/Switch4' incorporates:
             *  Constant: '<S1177>/Constant'
             */
            VeHPMR_e_InvrtrASwitchCmd_Tmp_NO = CeHPMR_e_Disable;
        }
        else
        {
            /* Switch: '<S1135>/Switch4' */
            VeHPMR_e_InvrtrASwitchCmd_Tmp_NO = VeHPMI_b_HighVoltageRapidShtd_1;
        }

        /* Merge: '<S1074>/Merge' incorporates:
         *  DataTypeConversion: '<S1181>/DataTypeConversion'
         *  Switch: '<S1135>/Switch4'
         */
        rtb_VeHPMR_e_InvrtrASwitchCmd_A = VeHPMR_e_InvrtrASwitchCmd_Tmp_NO;

        /* Switch: '<S1135>/Switch6' incorporates:
         *  Constant: '<S1184>/Constant'
         *  Constant: '<S1187>/Calib'
         *  Constant: '<S1188>/Calib'
         *  Logic: '<S1135>/Logical12'
         *  Logic: '<S1135>/Logical13'
         *  Logic: '<S1135>/Logical8'
         *  RelationalOperator: '<S1135>/Comparison14'
         *  Switch: '<S1135>/Switch7'
         */
        if ((((KeHPMR_b_DsblInvB_INVR_Enbl) && (VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq))
             && VeHPMI_b_HighVoltageRapidShtdwn) ||
                (((KeHPMR_b_DsblInvB_SRAR_Enbl) && (VeHPMI_b_DsblInvB)) &&
                 VeHPMI_b_HighVoltageRapidShtdwn))
        {
            /* Switch: '<S1135>/Switch6' incorporates:
             *  Constant: '<S1179>/Constant'
             */
            VeHPMR_e_InvrtrBSwitchCmd_Tmp_NO = CeHPMR_e_Disable;
        }
        else if (((uint32)VeHPMI_b_HighVoltageRapidShtd_1) ==
                 CeHPMR_e_Enable_VoltCntrl)
        {
            /* Switch: '<S1135>/Switch7' incorporates:
             *  Constant: '<S1193>/Calib'
             *  Switch: '<S1135>/Switch6'
             */
            VeHPMR_e_InvrtrBSwitchCmd_Tmp_NO = KeHPMR_e_InvrtrBSwCmd_VCOvrd;
        }
        else
        {
            /* Switch: '<S1135>/Switch6' incorporates:
             *  Switch: '<S1135>/Switch7'
             *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
             */
            VeHPMR_e_InvrtrBSwitchCmd_Tmp_NO =
                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5;
        }

        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut' incorporates:
         *  DataTypeConversion: '<S1182>/DataTypeConversion'
         *  Switch: '<S1135>/Switch6'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1 =
            VeHPMR_e_InvrtrBSwitchCmd_Tmp_NO;

        /* Switch: '<S1135>/Switch1' incorporates:
         *  Constant: '<S1189>/Calib'
         *  Constant: '<S1190>/Calib'
         *  Logic: '<S1135>/Logical18'
         *  Logic: '<S1135>/Logical19'
         *  Logic: '<S1135>/Logical21'
         */
        if ((((KeHPMR_b_DsblInvC_INVR_Enbl) && (VeHPMR_b_MtrC_InvrtrFlt_NoOpnRq))
             && VeHPMI_b_HighVoltageRapidShtdwn) ||
                (((KeHPMR_b_DsblInvC_SRAR_Enbl) && (VeHPMI_b_DsblInvC)) &&
                 VeHPMI_b_HighVoltageRapidShtdwn))
        {
            /* Switch: '<S1135>/Switch1' incorporates:
             *  Constant: '<S1180>/Constant'
             */
            VeHPMR_e_InvrtrCSwitchCmd_Tmp_NO = CeHPMR_e_Disable;
        }
        else
        {
            /* Switch: '<S1135>/Switch1' incorporates:
             *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
             */
            VeHPMR_e_InvrtrCSwitchCmd_Tmp_NO =
                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5;
        }

        /* End of Switch: '<S1135>/Switch1' */

        /* Merge: '<S1074>/Merge1' incorporates:
         *  DataTypeConversion: '<S1183>/DataTypeConversion'
         *  Switch: '<S1135>/Switch1'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrCSwitchCmd_Arb =
            VeHPMR_e_InvrtrCSwitchCmd_Tmp_NO;

        /* End of Outputs for SubSystem: '<S1074>/NormalOperation' */
        break;
    }

    /* End of If: '<S1074>/If' */

    /* Outputs for Atomic SubSystem: '<S1074>/BSG12V_Arbitration' */
#if Rte_SysCon_Variant_HPMR_12VBSG

    /* Outputs for Atomic SubSystem: '<S1125>/BSG12V_Arbitration' */
    /* Outputs for Atomic SubSystem: '<S1142>/Turn On Delay Time' */
    /* Logic: '<S1152>/OR1' incorporates:
     *  Logic: '<S1152>/AND'
     */
    tmpRead_1y = !VeHPMR_b_InvrtrFaulted_12VMtr;

    /* Outputs for Atomic SubSystem: '<S1152>/EdgeRising' */
    /* Switch: '<S1152>/Switch1' incorporates:
     *  Logic: '<S1152>/OR'
     *  Logic: '<S1152>/OR1'
     *  Logic: '<S1154>/AND'
     *  Logic: '<S1154>/OR1'
     *  UnitDelay: '<S1154>/Unit Delay'
     */
    if (tmpRead_1y || ((VeHPMR_b_InvrtrFaulted_12VMtr) &&
                       (!HPMR_ac_DW.UnitDelay_DSTATE_mp)))
    {
        /* Switch: '<S1152>/Switch1' incorporates:
         *  Constant: '<S1152>/Constant Value1'
         */
        rtb_Switch1_fj = 0.0F;
    }
    else
    {
        /* Switch: '<S1152>/Switch1' incorporates:
         *  Constant: '<S1149>/Calib'
         *  MinMax: '<S1152>/Minimum'
         *  Sum: '<S1152>/Summation'
         *  UnitDelay: '<S1152>/Unit Delay'
         */
        rtb_Switch1_fj = fminf(KeHPMR_t_12VMtrFltCnfrmCDbnc,
                               HPMR_ac_B.LeHPMR_t_dT +
                               HPMR_ac_DW.UnitDelay_DSTATE_o);
    }

    /* End of Switch: '<S1152>/Switch1' */
    /* End of Outputs for SubSystem: '<S1152>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S1142>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S1142>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1151>/EdgeFalling1' */
    /* UnitDelay: '<S1153>/Unit Delay' */
    VeHPMI_b_HighVoltageRapidShtdwn = HPMR_ac_DW.UnitDelay_DSTATE_m4;

    /* Update for UnitDelay: '<S1153>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_m4 = VeHPMI_b_P1f_Dgrd_AltMd;

    /* Switch: '<S1151>/Switch' incorporates:
     *  Logic: '<S1153>/AND'
     *  Logic: '<S1153>/OR1'
     */
    if ((!VeHPMI_b_P1f_Dgrd_AltMd) && VeHPMI_b_HighVoltageRapidShtdwn)
    {
        /* Switch: '<S1151>/Switch' incorporates:
         *  Constant: '<S1150>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_InvrtrStDebounce12VMtr;
    }
    else
    {
        /* Switch: '<S1151>/Switch' incorporates:
         *  Constant: '<S1151>/Constant Value1'
         *  MinMax: '<S1151>/Minimum'
         *  Sum: '<S1151>/Summation'
         *  UnitDelay: '<S1151>/Unit Delay'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_k -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }

    /* End of Switch: '<S1151>/Switch' */
    /* End of Outputs for SubSystem: '<S1151>/EdgeFalling1' */

    /* Update for UnitDelay: '<S1151>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_ne;

    /* End of Outputs for SubSystem: '<S1142>/Turn Off Delay Time' */

    /* Logic: '<S1142>/Logical4' incorporates:
     *  Constant: '<S1147>/Constant'
     *  Constant: '<S1148>/Constant'
     *  Logic: '<S1142>/Logical'
     *  RelationalOperator: '<S1142>/Comparison1'
     *  RelationalOperator: '<S1142>/Comparison2'
     *  Switch: '<S7>/Switch39'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = ((((uint32)
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5) == CeHPMR_e_Enable_VoltCntrl) ||
        ((VeHPMI_b_P1fVoltCtrlEnbl) && (((uint32)VeHPMI_e_EngStartStopSt) ==
        CeESSR_e_EngRunning)));

    /* Outputs for Atomic SubSystem: '<S1142>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1142>/Turn Off Delay Time' */
    /* Switch: '<S1142>/Switch2' incorporates:
     *  Constant: '<S1149>/Calib'
     *  Constant: '<S1151>/Constant Value2'
     *  Logic: '<S1142>/Logical1'
     *  Logic: '<S1142>/Logical2'
     *  Logic: '<S1142>/Logical3'
     *  Logic: '<S1142>/Logical5'
     *  Logic: '<S1142>/Logical6'
     *  Logic: '<S1151>/AND'
     *  Logic: '<S1152>/AND'
     *  RelationalOperator: '<S1151>/Greater  Than'
     *  RelationalOperator: '<S1152>/Greater  Than'
     */
    if ((((VeHPMI_b_RunCrankActive) && (VeHPMI_b_AuthenticationValid)) &&
            ((tmpRead_1y || (rtb_Switch1_fj < KeHPMR_t_12VMtrFltCnfrmCDbnc)) ||
             (((VeHPMI_b_P1f_Dgrd_AltMd) || (rtb_Switch1_ne > 0.0F)) &&
              VeHPMI_b_HighVoltageRapidShtdwn))) &&
            (!VeHPMR_b_MtrSysActvTmout_12VMtr))
    {
        /* Switch: '<S1142>/Switch5' */
        if (VeHPMI_b_HighVoltageRapidShtdwn)
        {
            /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
             *  Constant: '<S1146>/Constant'
             */
            VeHPMC_e_InvrtrASwitchCmd = CeHPMR_e_Enable_VoltCntrl;
        }
        else
        {
            /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
             *  Constant: '<S1144>/Constant'
             */
            VeHPMC_e_InvrtrASwitchCmd = CeHPMR_e_Enable;
        }

        /* End of Switch: '<S1142>/Switch5' */
    }
    else
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
         *  Constant: '<S1145>/Constant'
         */
        VeHPMC_e_InvrtrASwitchCmd = CeHPMR_e_Disable;
    }

    /* End of Switch: '<S1142>/Switch2' */
    /* End of Outputs for SubSystem: '<S1142>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S1142>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S1125>/BSG12V_Arbitration' */
#else

    /* Outputs for Atomic SubSystem: '<S1125>/HVMtrA' */
    /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
     *  Inport: '<S1143>/InvSwitchCmnd_A'
     *  Merge: '<S1074>/Merge'
     */
    VeHPMC_e_InvrtrASwitchCmd = rtb_VeHPMR_e_InvrtrASwitchCmd_A;

    /* End of Outputs for SubSystem: '<S1125>/HVMtrA' */
#endif

    /* End of Outputs for SubSystem: '<S1074>/BSG12V_Arbitration' */

    /* Logic: '<S1096>/AND2' incorporates:
     *  Constant: '<S1106>/Constant'
     *  Constant: '<S1112>/Calib'
     *  Logic: '<S1096>/AND3'
     *  Logic: '<S1096>/AND9'
     *  Logic: '<S1096>/Logical1'
     *  RelationalOperator: '<S1096>/Equal5'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut'
     */
    VeHPMR_b_PropSysStartRdy_HEV = ((VeHPMR_b_PropSysStartRdy_HVStrt) ||
        ((VeHPMR_b_PropSysStartRdy_12VStrt) &&
         ((KeHPMR_b_DsblP1fCond_Allw12VStrt) || ((VeHPMR_b_InvrtDisbld_12VMtr) &&
        (CeHPMR_e_Enable == ((uint32)VeHPMC_e_InvrtrASwitchCmd))))));

    /* Outputs for Atomic SubSystem: '<S1096>/EdgeRising' */
    /* Logic: '<S1108>/OR1' incorporates:
     *  UnitDelay: '<S1108>/Unit Delay'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = !HPMR_ac_DW.UnitDelay_DSTATE_cr;

    /* Update for UnitDelay: '<S1108>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_cr = VeHPMI_b_RunCrankActive;

    /* End of Outputs for SubSystem: '<S1096>/EdgeRising' */

    /* RelationalOperator: '<S1096>/Comparison5' incorporates:
     *  RelationalOperator: '<S1096>/Comparison1'
     *  UnitDelay: '<S1096>/Unit Delay'
     */
    tmpRead_1o = HPMR_ac_DW.UnitDelay_DSTATE_fm;

    /* Outputs for Atomic SubSystem: '<S1096>/EdgeRising' */
    /* Logic: '<S1096>/Logical2' incorporates:
     *  Constant: '<S1104>/Constant'
     *  Constant: '<S1105>/Constant'
     *  Constant: '<S1110>/Constant'
     *  Constant: '<S1111>/Constant'
     *  Constant: '<S1113>/Calib'
     *  Logic: '<S1096>/AND8'
     *  Logic: '<S1096>/Logical'
     *  Logic: '<S1096>/Logical3'
     *  Logic: '<S1096>/Logical4'
     *  Logic: '<S1096>/Logical7'
     *  Logic: '<S1108>/AND'
     *  RelationalOperator: '<S1096>/Comparison1'
     *  RelationalOperator: '<S1096>/Comparison10'
     *  RelationalOperator: '<S1096>/Comparison11'
     *  RelationalOperator: '<S1096>/Comparison2'
     *  RelationalOperator: '<S1096>/Comparison4'
     *  RelationalOperator: '<S1096>/Comparison5'
     *  Switch: '<S7>/Switch42'
     *  Switch: '<S7>/Switch69'
     *  UnitDelay: '<S1096>/Unit Delay1'
     */
    VeHPMR_b_PropSysStrtRdyEnblCond = (((((((((uint32)
        VeHPMI_e_OperationalModeSts) == CePMDR_e_Ign_Start) &&
        (CePMDR_e_Ign_Start != ((uint32)tmpRead_1o))) || ((((uint32)tmpRead_1o)
        != CePMDR_e_Ign_Cranking) && (CePMDR_e_Ign_Cranking == ((uint32)
        VeHPMI_e_OperationalModeSts)))) && rtb_Comparison2_jy) &&
        (KeHPMR_b_EnblOprMdSts_PropSysStrt)) || ((VeHPMI_b_RunCrankActive) &&
        VeHPMI_b_HighVoltageRapidShtdwn)) || ((((uint32)
        HPMR_ac_DW.VeHPMR_e_PMM_PowerMode_Prev) == CePMDR_e_PowerMode_Run) &&
        (((uint32)VeHPMI_e_PMM_PowerMode) == CePMDR_e_PowerMode_Crank)));

    /* End of Outputs for SubSystem: '<S1096>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S1096>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S1096>/EdgeRising1' */
    /* Logic: '<S1116>/OR1' incorporates:
     *  Logic: '<S1109>/AND'
     *  Logic: '<S1116>/NOT'
     *  Logic: '<S1116>/OR'
     *  UnitDelay: '<S1109>/Unit Delay'
     *  UnitDelay: '<S1116>/Unit Delay'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = ((VeHPMR_b_PropSysStrtRdyEnblCond) ||
        ((rtb_Comparison2_jy || (HPMR_ac_DW.UnitDelay_DSTATE_ju)) &&
         (HPMR_ac_DW.UnitDelay_DSTATE_hz0)));

    /* End of Outputs for SubSystem: '<S1096>/EdgeRising1' */

    /* Update for UnitDelay: '<S1116>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_hz0 = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1096>/Signal Latch On With Reset2' */

    /* Logic: '<S1096>/AND6' incorporates:
     *  Constant: '<S1114>/Calib'
     */
    VeHPMR_b_PropSysStartRdy_BSG = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (KeHPMR_b_EnblPropSysStrtRdy));

    /* VariantMerge generated from: '<S1065>/LeHPMR_b_PropSysStartReady' incorporates:
     *  Constant: '<S1115>/Calib'
     *  Logic: '<S1096>/Logical5'
     */
    HPMR_ac_B.LeHPMR_b_PropSysStartReady_a = (((VeHPMR_b_PropSysStartRdy_BSG) ||
        (VeHPMR_b_PropSysStartRdy_HEV)) || (KeHPMR_b_OvrdPropSysStrtRdy));

    /* RelationalOperator: '<S1071>/Comparison4' incorporates:
     *  Constant: '<S1118>/Constant'
     *  Switch: '<S7>/Switch83'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (((uint32)VeHPMI_e_FOTA_Install_Status) ==
        CeCITR_e_Installation_Complete);

    /* Outputs for Atomic SubSystem: '<S1071>/EdgeRising' */
    /* Logic: '<S1117>/AND' incorporates:
     *  Logic: '<S1117>/OR1'
     *  UnitDelay: '<S1117>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (!HPMR_ac_DW.UnitDelay_DSTATE_js));

    /* Update for UnitDelay: '<S1117>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_js = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1071>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S1071>/Timer Reset Enabled' */
    /* Switch: '<S1121>/Switch1' incorporates:
     *  Constant: '<S1121>/Constant Value3'
     *  Logic: '<S1121>/AND1'
     *  RelationalOperator: '<S1121>/Greater  Than2'
     *  Switch: '<S1121>/Switch2'
     *  UnitDelay: '<S1121>/Unit Delay'
     */
    if (VeHPMI_b_MCPA_CoreFail && (HPMR_ac_DW.UnitDelay_DSTATE_n <= 0.0F))
    {
        /* Switch: '<S1121>/Switch1' incorporates:
         *  Constant: '<S1120>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_FOTAInstallCmpl_EnblCANCTmr;
    }
    else if (VeHPMI_b_HighVoltageRapidShtdwn)
    {
        /* Switch: '<S1121>/Switch2' incorporates:
         *  Constant: '<S1121>/Constant Value4'
         *  MinMax: '<S1121>/Maximum'
         *  Sum: '<S1121>/Subtraction'
         *  Switch: '<S1121>/Switch1'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_n -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S1121>/Switch1' incorporates:
         *  Switch: '<S1121>/Switch2'
         */
        rtb_Switch1_ne = HPMR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* End of Switch: '<S1121>/Switch1' */

    /* Update for UnitDelay: '<S1121>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_ne;

    /* Logic: '<S1071>/AND' incorporates:
     *  Constant: '<S1121>/Constant Value2'
     *  RelationalOperator: '<S1121>/Greater  Than1'
     */
    VeHPMR_b_FOTAInstallCmpl_EnblCANC = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (rtb_Switch1_ne > 0.0F));

    /* End of Outputs for SubSystem: '<S1071>/Timer Reset Enabled' */

    /* Logic: '<S1071>/Logical' incorporates:
     *  Logic: '<S1071>/Logical2'
     *  UnitDelay: '<S1071>/Unit Delay'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = ((!HPMR_ac_DW.UnitDelay_DSTATE_ei) &&
        (VeHPMI_b_SC_WkUpFlg));

    /* Outputs for Atomic SubSystem: '<S1071>/Turn Off Delay Sample Modified' */
    /* Outputs for Atomic SubSystem: '<S1122>/EdgeFalling1' */
    /* Logic: '<S1123>/AND' incorporates:
     *  Logic: '<S1123>/OR1'
     *  UnitDelay: '<S1123>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = ((!VeHPMI_b_HighVoltageRapidShtdwn) &&
        (HPMR_ac_DW.UnitDelay_DSTATE_co));

    /* Update for UnitDelay: '<S1123>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_co = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1122>/EdgeFalling1' */

    /* Switch: '<S1122>/Switch' incorporates:
     *  MinMax: '<S1122>/Minimum1'
     *  UnitDelay: '<S1122>/Unit Delay'
     */
    if (VeHPMI_b_MCPA_CoreFail)
    {
        /* Switch: '<S1122>/Switch' incorporates:
         *  Constant: '<S1119>/Calib'
         */
        rtb_Switch1_mp = KeHPMR_Cnt_SC_WkUp_EnblCANCDbnc;
    }
    else
    {
        if (((sint32)HPMR_ac_DW.UnitDelay_DSTATE_o3) > 1)
        {
            /* MinMax: '<S1122>/Minimum1' incorporates:
             *  UnitDelay: '<S1122>/Unit Delay'
             */
            rtb_Switch1_mp = HPMR_ac_DW.UnitDelay_DSTATE_o3;
        }
        else
        {
            /* MinMax: '<S1122>/Minimum1' */
            rtb_Switch1_mp = 1U;
        }

        /* Switch: '<S1122>/Switch' incorporates:
         *  Constant: '<S1122>/Constant Value'
         *  Sum: '<S1122>/Summation'
         */
        rtb_Switch1_mp = (uint16)((sint32)(((sint32)rtb_Switch1_mp) - 1));
    }

    /* End of Switch: '<S1122>/Switch' */

    /* Logic: '<S1122>/AND' incorporates:
     *  Constant: '<S1122>/Constant Value2'
     *  RelationalOperator: '<S1122>/Greater  Than'
     */
    VeHPMR_b_SC_WkUp_EnblCANC = (VeHPMI_b_HighVoltageRapidShtdwn || (((sint32)
        rtb_Switch1_mp) > 0));

    /* Update for UnitDelay: '<S1122>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_o3 = rtb_Switch1_mp;

    /* End of Outputs for SubSystem: '<S1071>/Turn Off Delay Sample Modified' */

    /* Logic: '<S1071>/Logical1' */
    VeHPMC_b_EnableCANC = ((((VeHPMI_b_EnableCANC) || (VeHPMR_b_SC_WkUp_EnblCANC))
                            || (VeHPMR_b_FOTAInstallCmpl_EnblCANC)) ||
                           (VeHPMI_b_GenrEnblCANC));

    /* VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrASwitchCmdOut' incorporates:
     *  DataTypeConversion: '<S1131>/DataTypeConversion'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC_e_ = VeHPMC_e_InvrtrASwitchCmd;

    /* VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrBSwitchCmdOut' incorporates:
     *  DataTypeConversion: '<S1132>/DataTypeConversion'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC_ie =
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1;

    /* VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrCSwitchCmdOut' incorporates:
     *  DataTypeConversion: '<S1133>/DataTypeConversion'
     *  Merge: '<S1074>/Merge1'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__p =
        HPMR_ac_B.VeHPMR_e_InvrtrCSwitchCmd_Arb;

    /* VariantMerge generated from: '<S1065>/VeHPMC_b_EnableCANC' incorporates:
     *  Gain: '<S1075>/Gain'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC_b_ = VeHPMC_b_EnableCANC;

    /* VariantMerge generated from: '<S1065>/VeHPMC_b_EnableCANCPrev' incorporates:
     *  UnitDelay: '<S1066>/Unit Delay1'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__e = HPMR_ac_DW.UnitDelay1_DSTATE;

    /* Outputs for Atomic SubSystem: '<S1076>/Signal Latch On With Reset' */
    /* Logic: '<S1203>/OR1' incorporates:
     *  Constant: '<S1194>/Constant'
     *  Constant: '<S1195>/Constant'
     *  Logic: '<S1076>/OR5'
     *  RelationalOperator: '<S1076>/Equal3'
     *  RelationalOperator: '<S1076>/Equal4'
     *  Switch: '<S7>/Switch24'
     *  UnitDelay: '<S1203>/Unit Delay'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (((((uint32)VeHPMI_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangeNeutral) || (((uint32)VeHPMI_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangePark)) || (HPMR_ac_DW.UnitDelay_DSTATE_pi));

    /* Update for UnitDelay: '<S1203>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_pi = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1076>/Signal Latch On With Reset' */

    /* Switch: '<S1200>/Switch1' incorporates:
     *  Gain: '<S1202>/Gain'
     *  Logic: '<S1076>/OR1'
     *  Logic: '<S1076>/OR2'
     */
    if ((VeHPMR_b_ShutdownInProcess) || (!VeHPMI_b_HighVoltageRapidShtdwn))
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_e_ShtdwnTransOvrdVal' incorporates:
         *  Constant: '<S1198>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal_b = CeHPMR_e_Neutral;
    }
    else
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_e_ShtdwnTransOvrdVal' incorporates:
         *  Constant: '<S1197>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal_b = CeHPMR_e_NoOverride;
    }

    /* End of Switch: '<S1200>/Switch1' */

    /* VariantMerge generated from: '<S1065>/VeHPMC_e_FuelCellMdCmd' incorporates:
     *  Constant: '<S1073>/Constant'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__l = CeHPMR_e_FC_Disabled;

    /* VariantMerge generated from: '<S1065>/VeHPMR_b_EVCURespAuxLoadOff' incorporates:
     *  Constant: '<S1066>/FALSE Constant12'
     */
    HPMR_ac_B.VeHPMR_b_EVCURespAuxLoadOff = false;

    /* End of Outputs for SubSystem: '<S1065>/ProcHybSysStOutputs' */
#else

    /* Outputs for Atomic SubSystem: '<S1065>/ProcHybSysStOutputs_BEV' */
    /* Logic: '<S1209>/Logical' incorporates:
     *  Logic: '<S1209>/Logical2'
     *  UnitDelay: '<S1209>/Unit Delay'
     */
    rtb_Logical = ((!HPMR_ac_DW.UnitDelay_DSTATE_mw) && (VeHPMI_b_SC_WkUpFlg));

    /* Outputs for Atomic SubSystem: '<S1209>/Turn Off Delay Sample Modified' */
    /* Outputs for Atomic SubSystem: '<S1277>/EdgeFalling1' */
    /* Logic: '<S1281>/AND' incorporates:
     *  Logic: '<S1281>/OR1'
     *  UnitDelay: '<S1281>/Unit Delay'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = ((!rtb_Logical) &&
        (HPMR_ac_DW.UnitDelay_DSTATE_n3));

    /* Update for UnitDelay: '<S1281>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_n3 = rtb_Logical;

    /* End of Outputs for SubSystem: '<S1277>/EdgeFalling1' */

    /* Switch: '<S1277>/Switch' incorporates:
     *  MinMax: '<S1277>/Minimum1'
     *  UnitDelay: '<S1277>/Unit Delay'
     */
    if (VeHPMI_b_HighVoltageRapidShtdwn)
    {
        /* Switch: '<S1277>/Switch' incorporates:
         *  Constant: '<S1273>/Calib'
         */
        rtb_Switch1_mp = KeHPMR_Cnt_SC_WkUp_EnblCANCDbnc;
    }
    else
    {
        if (((sint32)HPMR_ac_DW.UnitDelay_DSTATE_nr) > 1)
        {
            /* MinMax: '<S1277>/Minimum1' incorporates:
             *  UnitDelay: '<S1277>/Unit Delay'
             */
            rtb_Switch1_mp = HPMR_ac_DW.UnitDelay_DSTATE_nr;
        }
        else
        {
            /* MinMax: '<S1277>/Minimum1' */
            rtb_Switch1_mp = 1U;
        }

        /* Switch: '<S1277>/Switch' incorporates:
         *  Constant: '<S1277>/Constant Value'
         *  Sum: '<S1277>/Summation'
         */
        rtb_Switch1_mp = (uint16)((sint32)(((sint32)rtb_Switch1_mp) - 1));
    }

    /* End of Switch: '<S1277>/Switch' */

    /* Update for UnitDelay: '<S1277>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_nr = rtb_Switch1_mp;

    /* End of Outputs for SubSystem: '<S1209>/Turn Off Delay Sample Modified' */

    /* RelationalOperator: '<S1209>/Comparison4' incorporates:
     *  Switch: '<S7>/Switch83'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (((uint32)VeHPMI_e_FOTA_Install_Status) ==
        CeCITR_e_Installation_Complete);

    /* Outputs for Atomic SubSystem: '<S1209>/EdgeRising' */
    /* Logic: '<S1271>/AND' incorporates:
     *  Logic: '<S1271>/OR1'
     *  UnitDelay: '<S1271>/Unit Delay'
     */
    VeHPMI_b_MCPA_CoreFail = (VeHPMI_b_HighVoltageRapidShtdwn &&
        (!HPMR_ac_DW.UnitDelay_DSTATE_er));

    /* Update for UnitDelay: '<S1271>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_er = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1209>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S1209>/Timer Reset Enabled' */
    /* Switch: '<S1276>/Switch1' incorporates:
     *  Constant: '<S1276>/Constant Value3'
     *  Logic: '<S1276>/AND1'
     *  RelationalOperator: '<S1276>/Greater  Than2'
     *  Switch: '<S1276>/Switch2'
     *  UnitDelay: '<S1276>/Unit Delay'
     */
    if (VeHPMI_b_MCPA_CoreFail && (HPMR_ac_DW.UnitDelay_DSTATE_a <= 0.0F))
    {
        /* Switch: '<S1276>/Switch1' incorporates:
         *  Constant: '<S1274>/Calib'
         */
        rtb_Switch1_ne = KeHPMR_t_FOTAInstallCmpl_EnblCANCTmr;
    }
    else if (VeHPMI_b_HighVoltageRapidShtdwn)
    {
        /* Switch: '<S1276>/Switch2' incorporates:
         *  Constant: '<S1276>/Constant Value4'
         *  MinMax: '<S1276>/Maximum'
         *  Sum: '<S1276>/Subtraction'
         *  Switch: '<S1276>/Switch1'
         */
        rtb_Switch1_ne = fmaxf(HPMR_ac_DW.UnitDelay_DSTATE_a -
                               HPMR_ac_B.LeHPMR_t_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S1276>/Switch1' incorporates:
         *  Switch: '<S1276>/Switch2'
         */
        rtb_Switch1_ne = HPMR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* End of Switch: '<S1276>/Switch1' */

    /* Update for UnitDelay: '<S1276>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch1_ne;

    /* Outputs for Atomic SubSystem: '<S1209>/Turn Off Delay Sample Modified' */
    /* Logic: '<S1209>/Logical1' incorporates:
     *  Constant: '<S1275>/Calib'
     *  Constant: '<S1276>/Constant Value2'
     *  Constant: '<S1277>/Constant Value2'
     *  Logic: '<S1209>/Logical17'
     *  Logic: '<S1209>/Logical4'
     *  Logic: '<S1277>/AND'
     *  RelationalOperator: '<S1276>/Greater  Than1'
     *  RelationalOperator: '<S1277>/Greater  Than'
     */
    rtb_Logical = (((((VeHPMI_b_EnableCANC) || (rtb_Logical || (((sint32)
                         rtb_Switch1_mp) > 0))) ||
                     (VeHPMI_b_HighVoltageRapidShtdwn && (rtb_Switch1_ne > 0.0F)))
                    || ((VeHPMI_b_ThrmlRnawyFlg) &&
                        (KeHPMR_b_UseThermalRunawayLogic))) ||
                   (VeHPMI_b_GenrEnblCANC));

    /* End of Outputs for SubSystem: '<S1209>/Turn Off Delay Sample Modified' */
    /* End of Outputs for SubSystem: '<S1209>/Timer Reset Enabled' */

    /* VariantMerge generated from: '<S1065>/VeHPMC_b_EnableCANC' incorporates:
     *  Logic: '<S1204>/AND'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC_b_ = rtb_Logical;

    /* Switch: '<S1224>/Switch1' incorporates:
     *  RelationalOperator: '<S1206>/Equal2'
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    if (((uint32)VeHPMC_e_BattCntctrCmd) == CeHPMR_e_Closed)
    {
        /* Switch: '<S1224>/Switch1' incorporates:
         *  DataTypeConversion: '<S1240>/Data Type Conversion1'
         */
        rtb_Switch1_bb = 1U;
    }
    else
    {
        /* RelationalOperator: '<S1206>/Comparison4' */
        VeHPMI_b_HighVoltageRapidShtdwn = (((uint32)VeHPMC_e_BattCntctrCmd) ==
            CeHPMR_e_Open);

        /* Switch: '<S1224>/Switch2' incorporates:
         *  Constant: '<S1227>/Calib'
         *  Constant: '<S1228>/Calib'
         *  Constant: '<S1229>/Calib'
         *  Constant: '<S1230>/Calib'
         *  Logic: '<S1206>/Logical'
         *  Logic: '<S1206>/Logical1'
         *  Logic: '<S1206>/Logical11'
         *  Logic: '<S1206>/Logical2'
         *  Logic: '<S1206>/Logical3'
         *  Logic: '<S1206>/Logical4'
         *  Logic: '<S1206>/Logical5'
         *  Logic: '<S1206>/Logical6'
         *  Logic: '<S1206>/Logical7'
         *  RelationalOperator: '<S1206>/Comparison1'
         *  Switch: '<S1206>/Switch'
         *  Switch: '<S1206>/Switch3'
         */
        if (((HPMR_ac_B.VeHPMR_b_FinalImpactSignal) &&
                (KeHPMR_b_EnableCrashFastOpen)) &&
                VeHPMI_b_HighVoltageRapidShtdwn)
        {
            /* Switch: '<S1224>/Switch1' incorporates:
             *  DataTypeConversion: '<S1249>/Data Type Conversion1'
             *  Switch: '<S1224>/Switch2'
             */
            rtb_Switch1_bb = 2U;
        }
        else if (VeHPMI_b_HighVoltageRapidShtdwn &&
                 ((((!HPMR_ac_B.LeHPMR_b_ShtdwnMtrSpdMet) &&
                    (KeHPMR_b_MtrSpeedFastOpen)) ||
                   (((VeHPMI_b_HVBatSrvcDisCnctFA) && (KeHPMR_b_HVBatSrvcDisCnct))
                    || (VeHPMC_b_HV_IntrnlIntrlkStatFail))) ||
                  ((VeHPMR_b_HVILSpdCondMet) && (!KeHPMR_b_MergeDAPwHVIL))))
        {
            /* Switch: '<S1206>/Switch3' incorporates:
             *  DataTypeConversion: '<S1237>/Data Type Conversion1'
             *  Switch: '<S1224>/Switch1'
             */
            rtb_Switch1_bb = 3U;
        }
        else if (((uint32)VeHPMC_e_BattCntctrCmd) == CeHPMR_e_Undetermined)
        {
            /* Switch: '<S1206>/Switch' incorporates:
             *  Switch: '<S1206>/Switch3'
             *  Switch: '<S1224>/Switch1'
             */
            rtb_Switch1_bb = 7U;
        }
        else
        {
            /* Switch: '<S1224>/Switch1' incorporates:
             *  Switch: '<S1206>/Switch'
             *  Switch: '<S1206>/Switch3'
             */
            rtb_Switch1_bb = 0U;
        }

        /* End of Switch: '<S1224>/Switch2' */
    }

    /* End of Switch: '<S1224>/Switch1' */

    /* VariantMerge generated from: '<S1065>/LeHPMR_e_HighVltCntctrCntrl' incorporates:
     *  DataTypeConversion: '<S1221>/DataTypeConversion'
     *  Switch: '<S1224>/Switch1'
     */
    HPMR_ac_B.VariantMergeForOutportLeHPMR__p = rtb_Switch1_bb;

    /* Switch: '<S1223>/Switch1' incorporates:
     *  RelationalOperator: '<S1206>/Equal5'
     *  Switch: '<S1224>/Switch1'
     */
    if (((uint32)rtb_Switch1_bb) == CeHPMR_e_Closed)
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_DC_BattPackCntctrCmd' incorporates:
         *  Constant: '<S1225>/Calib'
         */
        HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd_n = KeHPMR_DC_CntctrCmdClose;
    }
    else
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_DC_BattPackCntctrCmd' incorporates:
         *  Constant: '<S1226>/Calib'
         */
        HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd_n = KeHPMR_DC_CntctrCmdOpen;
    }

    /* End of Switch: '<S1223>/Switch1' */

    /* VariantMerge generated from: '<S1065>/LeHPMR_f_CntctrCmd_PWM' incorporates:
     *  Constant: '<S1231>/Calib'
     */
    HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM_o = KeHPMR_f_CntctrCmd_PWM;

    /* RelationalOperator: '<S1207>/Equal6' incorporates:
     *  RelationalOperator: '<S1212>/Equal10'
     *  RelationalOperator: '<S1212>/Equal9'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    VeHPMI_b_HighVoltageRapidShtd_0 = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* VariantMerge generated from: '<S1065>/LeHPMR_b_PropSysStartReady' incorporates:
     *  Constant: '<S1257>/Calib'
     *  Logic: '<S1207>/AND1'
     *  Logic: '<S1207>/Logical5'
     *  Logic: '<S1207>/OR3'
     *  RelationalOperator: '<S1207>/Equal6'
     */
    HPMR_ac_B.LeHPMR_b_PropSysStartReady_a = (((!VeHPMI_b_FltShtDwnBPClsdCmnd) &&
        (CeHPMR_e_INV_ENABLED == ((uint32)VeHPMI_b_HighVoltageRapidShtd_0))) ||
        (KeHPMR_b_OvrdPropSysStrtRdy));

    /* Outputs for Atomic SubSystem: '<S1208>/EdgeFalling' */
    /* UnitDelay: '<S1401>/Unit Delay' incorporates:
     *  UnitDelay: '<S1263>/Unit Delay'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = HPMR_ac_DW.UnitDelay_DSTATE_gr;

    /* Update for UnitDelay: '<S1263>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_gr = VeHPMI_b_HV_AuxLoadOffReq;

    /* Outputs for Atomic SubSystem: '<S1208>/Signal Latch On With Reset' */
    /* VariantMerge generated from: '<S1065>/VeHPMR_b_EVCURespAuxLoadOff' incorporates:
     *  Logic: '<S1208>/Logical'
     *  Logic: '<S1263>/AND'
     *  Logic: '<S1263>/OR1'
     *  Logic: '<S1264>/NOT'
     *  Logic: '<S1264>/OR'
     *  Logic: '<S1264>/OR1'
     *  RelationalOperator: '<S1206>/Equal2'
     *  RelationalOperator: '<S1208>/Equal'
     *  RelationalOperator: '<S1208>/Equal1'
     *  UnitDelay: '<S1208>/Unit Delay'
     *  UnitDelay: '<S1264>/Unit Delay'
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    HPMR_ac_B.VeHPMR_b_EVCURespAuxLoadOff = ((((((uint32)VeHPMC_e_BattCntctrCmd)
        == CeHPMR_e_Open) && (((uint32)HPMR_ac_DW.UnitDelay_DSTATE_n5) ==
        CeHPMR_e_Closed)) && (VeHPMI_b_HV_AuxLoadOffReq)) ||
        (((VeHPMI_b_HV_AuxLoadOffReq) || (!VeHPMI_b_HighVoltageRapidShtdwn)) &&
         (HPMR_ac_DW.UnitDelay_DSTATE_asm)));

    /* End of Outputs for SubSystem: '<S1208>/EdgeFalling' */

    /* Update for UnitDelay: '<S1264>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_asm = HPMR_ac_B.VeHPMR_b_EVCURespAuxLoadOff;

    /* End of Outputs for SubSystem: '<S1208>/Signal Latch On With Reset' */

    /* Switch: '<S1289>/Switch1' incorporates:
     *  Constant: '<S1283>/Constant'
     *  Constant: '<S1285>/Constant'
     *  Logic: '<S1211>/Logical'
     *  Logic: '<S1211>/Logical1'
     *  Logic: '<S1211>/Logical2'
     *  RelationalOperator: '<S1211>/Equal'
     *  RelationalOperator: '<S1211>/Equal1'
     *  Switch: '<S1289>/Switch2'
     *  Switch: '<S1289>/Switch3'
     *  Switch: '<S7>/Switch98'
     *  Switch: '<S7>/Switch99'
     */
    if (((HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc_h) ||
            (HPMR_ac_B.VeHPMR_b_FinalImpactSignal)) ||
            (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn))
    {
        /* VariantMerge generated from: '<S1065>/VeHPMC_e_FuelCellMdCmd' incorporates:
         *  DataTypeConversion: '<S1295>/Data Type Conversion1'
         *  Switch: '<S1289>/Switch1'
         */
        HPMR_ac_B.VariantMergeForOutportVeHPMC__l = 4U;
    }
    else if (((uint32)HPMR_ac_B.VeHPMI_e_FcShutDownReq) ==
             CeFCRR_e_FcQuickShutDown)
    {
        /* Switch: '<S1289>/Switch2' incorporates:
         *  Constant: '<S1284>/Constant'
         *  VariantMerge generated from: '<S1065>/VeHPMC_e_FuelCellMdCmd'
         */
        HPMR_ac_B.VariantMergeForOutportVeHPMC__l = CeHPMR_e_FC_ImmdShtdwn;
    }
    else if (((VeHPMI_b_DrvAllwd_FCEnbl) && (VeHPMC_b_PropulsionSystemActive)) &&
             (((uint32)HPMR_ac_B.VeHPMI_e_FCActualMode) !=
              CeFCPR_e_ActualMode_NotAvailable))
    {
        /* Switch: '<S1289>/Switch3' incorporates:
         *  Switch: '<S1289>/Switch2'
         *  VariantMerge generated from: '<S1065>/VeHPMC_e_FuelCellMdCmd'
         */
        HPMR_ac_B.VariantMergeForOutportVeHPMC__l = 1U;
    }
    else
    {
        /* VariantMerge generated from: '<S1065>/VeHPMC_e_FuelCellMdCmd' incorporates:
         *  Switch: '<S1289>/Switch2'
         *  Switch: '<S1289>/Switch3'
         */
        HPMR_ac_B.VariantMergeForOutportVeHPMC__l = 0U;
    }

    /* End of Switch: '<S1289>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1212>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S1212>/EdgeRising' */
    /* Logic: '<S1314>/OR1' incorporates:
     *  Logic: '<S1212>/Logical10'
     *  Logic: '<S1212>/Logical8'
     *  Logic: '<S1303>/AND'
     *  Logic: '<S1314>/NOT'
     *  Logic: '<S1314>/OR'
     *  RelationalOperator: '<S1206>/Equal2'
     *  RelationalOperator: '<S1212>/Comparison10'
     *  RelationalOperator: '<S1212>/Comparison11'
     *  RelationalOperator: '<S1212>/Comparison2'
     *  UnitDelay: '<S1212>/Unit Delay1'
     *  UnitDelay: '<S1303>/Unit Delay'
     *  UnitDelay: '<S1314>/Unit Delay'
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (((((uint32)VeHPMC_e_BattCntctrCmd) ==
        CeHPMR_e_Open) && (((uint32)HPMR_ac_DW.UnitDelay1_DSTATE_c) ==
                           CeHPMR_e_Closed)) || (((CeHPMR_e_Closed != ((uint32)
        VeHPMC_e_BattCntctrCmd)) && ((!VeHPMR_b_MtrNotInActvDschrg) ||
        (HPMR_ac_DW.UnitDelay_DSTATE_o0))) && (HPMR_ac_DW.UnitDelay_DSTATE_gb)));

    /* End of Outputs for SubSystem: '<S1212>/EdgeRising' */

    /* Update for UnitDelay: '<S1314>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_gb = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1212>/Signal Latch On With Reset1' */

    /* Logic: '<S1212>/Logical9' incorporates:
     *  Constant: '<S1312>/Calib'
     */
    VeHPMC_b_ActvDschCntctrChk = (((VeHPMI_b_HighVoltageRapidShtdwn ||
        (KeHPMR_b_OvrdActvDschCntctrChk)) || (VeHPMR_b_CollisionDetection)) ||
        (VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn));

    /* If: '<S1212>/If' incorporates:
     *  Constant: '<S1311>/Calib'
     *  Logic: '<S1212>/AND3'
     *  Logic: '<S1212>/AND7'
     *  RelationalOperator: '<S1212>/Equal10'
     *  RelationalOperator: '<S1212>/Equal11'
     *  RelationalOperator: '<S1212>/Equal9'
     *  UnitDelay: '<S1212>/Unit Delay'
     */
    rtPrevAction = HPMR_ac_DW.If_ActiveSubsystem;
    if ((((uint32)VeHPMI_b_HighVoltageRapidShtd_0) ==
            CeHPMR_e_CMND_BUS_DISCHARGE) && (KeHPMR_b_Enbl_BusDischg))
    {
        rtAction = 0;
    }
    else if (((KeHPMR_b_Enbl_BusDischg) && (((uint32)
                VeHPMI_b_HighVoltageRapidShtd_0) == CeHPMR_e_INIT_CNTRLR_PWRDWN))
             && (((uint32)HPMR_ac_DW.UnitDelay_DSTATE_gk) ==
                 CeHPMR_e_CMND_BUS_DISCHARGE))
    {
        rtAction = 1;
    }
    else
    {
        rtAction = 2;
    }

    HPMR_ac_DW.If_ActiveSubsystem = rtAction;
    switch (rtAction)
    {
      case 0:
        if (rtAction != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S1212>/BusDischarge' incorporates:
             *  ActionPort: '<S1299>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S1299>/Turn On Delay Time' */
            /* SystemReset for If: '<S1212>/If' incorporates:
             *  UnitDelay: '<S1320>/Unit Delay'
             *  UnitDelay: '<S1321>/Unit Delay'
             *  UnitDelay: '<S1328>/Unit Delay'
             *  UnitDelay: '<S1344>/Unit Delay'
             */
            HPMR_ac_DW.UnitDelay_DSTATE = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S1328>/EdgeRising' */
            HPMR_ac_DW.UnitDelay_DSTATE_j4 = false;

            /* End of SystemReset for SubSystem: '<S1328>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S1299>/Turn On Delay Time' */

            /* SystemReset for Atomic SubSystem: '<S1299>/EdgeRising' */
            HPMR_ac_DW.UnitDelay_DSTATE_d5 = false;

            /* End of SystemReset for SubSystem: '<S1299>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S1299>/Count Down  Reset Enabled' */
            HPMR_ac_DW.UnitDelay_DSTATE_cd = 0U;

            /* End of SystemReset for SubSystem: '<S1299>/Count Down  Reset Enabled' */
            /* End of SystemReset for SubSystem: '<S1212>/BusDischarge' */
        }

        /* Outputs for IfAction SubSystem: '<S1212>/BusDischarge' incorporates:
         *  ActionPort: '<S1299>/Action Port'
         */
        /* RelationalOperator: '<S1299>/Comparison4' incorporates:
         *  Constant: '<S1325>/Calib'
         */
        VeHPMI_b_HighVoltageRapidShtdwn = (((uint32)KeHPMR_e_IGBT_DischrgSlct) ==
            CeHPMR_e_OnCktFail);

        /* Outputs for Atomic SubSystem: '<S1299>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S1328>/EdgeRising' */
        /* Logic: '<S1344>/AND' incorporates:
         *  Logic: '<S1344>/OR1'
         *  UnitDelay: '<S1344>/Unit Delay'
         */
        VeHPMI_b_MCPA_CoreFail = (VeHPMI_b_HighVoltageRapidShtdwn &&
            (!HPMR_ac_DW.UnitDelay_DSTATE_j4));

        /* Update for UnitDelay: '<S1344>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE_j4 = VeHPMI_b_HighVoltageRapidShtdwn;

        /* End of Outputs for SubSystem: '<S1328>/EdgeRising' */

        /* Switch: '<S1328>/Switch1' incorporates:
         *  Logic: '<S1328>/OR'
         *  Logic: '<S1328>/OR1'
         */
        if ((!VeHPMI_b_HighVoltageRapidShtdwn) || VeHPMI_b_MCPA_CoreFail)
        {
            /* Switch: '<S1328>/Switch1' incorporates:
             *  Constant: '<S1328>/Constant Value1'
             */
            rtb_Switch1_ne = 0.0F;
        }
        else
        {
            /* Switch: '<S1328>/Switch1' incorporates:
             *  Constant: '<S1326>/Calib'
             *  MinMax: '<S1328>/Minimum'
             *  Sum: '<S1328>/Summation'
             *  UnitDelay: '<S1328>/Unit Delay'
             */
            rtb_Switch1_ne = fminf(KeHPMR_t_HardwareDischargePeriod,
                                   HPMR_ac_B.LeHPMR_t_dT +
                                   HPMR_ac_DW.UnitDelay_DSTATE);
        }

        /* End of Switch: '<S1328>/Switch1' */

        /* Update for UnitDelay: '<S1328>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE = rtb_Switch1_ne;

        /* UnitDelay: '<S1321>/Unit Delay' incorporates:
         *  Constant: '<S1325>/Calib'
         *  Constant: '<S1326>/Calib'
         *  Logic: '<S1299>/Logical1'
         *  Logic: '<S1328>/AND'
         *  RelationalOperator: '<S1299>/Comparison1'
         *  RelationalOperator: '<S1299>/Comparison4'
         *  RelationalOperator: '<S1328>/Greater  Than'
         */
        VeHPMI_b_MCPA_CoreFail = ((VeHPMI_b_HighVoltageRapidShtdwn &&
            (rtb_Switch1_ne >= KeHPMR_t_HardwareDischargePeriod)) || (((uint32)
            KeHPMR_e_IGBT_DischrgSlct) == CeHPMR_e_Always));

        /* End of Outputs for SubSystem: '<S1299>/Turn On Delay Time' */

        /* Logic: '<S1299>/Logical2' */
        VeHPMI_b_HighVoltageRapidShtdwn = ((((VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn) ||
            (VeHPMI_b_HVBatSrvcDisCnctFA)) || (VeHPMC_b_HV_IntrnlIntrlkStatFail))
            || (VeHPMR_b_CollisionDetection));

        /* Logic: '<S1299>/Logical4' incorporates:
         *  Logic: '<S1299>/Logical3'
         *  Logic: '<S1299>/Logical5'
         */
        VeHPMI_b_MCPA_CoreFail = (((VeHPMR_b_SpdCondMetActvDschg) &&
            VeHPMI_b_MCPA_CoreFail) || (VeHPMI_b_MCPA_CoreFail &&
            VeHPMI_b_HighVoltageRapidShtdwn));

        /* Outputs for Atomic SubSystem: '<S1299>/EdgeRising' */
        /* Logic: '<S1321>/OR1' incorporates:
         *  UnitDelay: '<S1321>/Unit Delay'
         */
        rtb_Comparison2_jy = !HPMR_ac_DW.UnitDelay_DSTATE_d5;

        /* Update for UnitDelay: '<S1321>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE_d5 = VeHPMI_b_MCPA_CoreFail;

        /* Outputs for Atomic SubSystem: '<S1299>/Count Down  Reset Enabled' */
        /* Switch: '<S1320>/Switch1' incorporates:
         *  Constant: '<S1320>/Constant Value'
         *  Logic: '<S1320>/AND'
         *  Logic: '<S1321>/AND'
         *  RelationalOperator: '<S1320>/Greater  Than'
         *  Switch: '<S1320>/Switch2'
         *  UnitDelay: '<S1320>/Unit Delay'
         */
        if (VeHPMI_b_MCPA_CoreFail && rtb_Comparison2_jy)
        {
            /* Switch: '<S1320>/Switch1' incorporates:
             *  Constant: '<S1324>/Calib'
             */
            rtb_Switch1_mp = KeHPMR_Cnt_ActvDischTout;
        }
        else if (VeHPMI_b_MCPA_CoreFail && (((sint32)
                   HPMR_ac_DW.UnitDelay_DSTATE_cd) > 0))
        {
            /* Switch: '<S1320>/Switch2' incorporates:
             *  Constant: '<S1320>/Constant Value1'
             *  Sum: '<S1320>/Subtraction'
             *  Switch: '<S1320>/Switch1'
             *  UnitDelay: '<S1320>/Unit Delay'
             */
            rtb_Switch1_mp = (uint16)((sint32)(((sint32)
                HPMR_ac_DW.UnitDelay_DSTATE_cd) - 1));
        }
        else
        {
            /* Switch: '<S1320>/Switch1' incorporates:
             *  Switch: '<S1320>/Switch2'
             *  UnitDelay: '<S1320>/Unit Delay'
             */
            rtb_Switch1_mp = HPMR_ac_DW.UnitDelay_DSTATE_cd;
        }

        /* End of Switch: '<S1320>/Switch1' */
        /* End of Outputs for SubSystem: '<S1299>/EdgeRising' */

        /* Update for UnitDelay: '<S1320>/Unit Delay' */
        HPMR_ac_DW.UnitDelay_DSTATE_cd = rtb_Switch1_mp;

        /* Switch: '<S1299>/Switch' incorporates:
         *  Constant: '<S1320>/Constant Value2'
         *  Logic: '<S1299>/Logical'
         *  RelationalOperator: '<S1320>/Greater  Than1'
         *  Switch: '<S1299>/Switch1'
         */
        if (((((sint32)rtb_Switch1_mp) > 0) && VeHPMI_b_MCPA_CoreFail) &&
                (VeHPMC_b_ActvDschCntctrChk))
        {
            /* Switch: '<S1299>/Switch' incorporates:
             *  DataTypeConversion: '<S1334>/Data Type Conversion1'
             */
            rtb_VeHPMR_e_InvrtrASwitchCmd_A = 2U;
        }
        else if (VeHPMI_b_HighVoltageRapidShtdwn)
        {
            /* Switch: '<S1299>/Switch1' incorporates:
             *  Switch: '<S1299>/Switch'
             */
            rtb_VeHPMR_e_InvrtrASwitchCmd_A = 3U;
        }
        else
        {
            /* Switch: '<S1299>/Switch' incorporates:
             *  Switch: '<S1299>/Switch1'
             */
            rtb_VeHPMR_e_InvrtrASwitchCmd_A = 0U;
        }

        /* End of Switch: '<S1299>/Switch' */
        /* End of Outputs for SubSystem: '<S1299>/Count Down  Reset Enabled' */

        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
         *  DataTypeConversion: '<S1322>/DataTypeConversion'
         *  Switch: '<S1299>/Switch'
         */
        VeHPMC_e_InvrtrASwitchCmd = rtb_VeHPMR_e_InvrtrASwitchCmd_A;

        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut' incorporates:
         *  DataTypeConversion: '<S1323>/DataTypeConversion'
         *  Switch: '<S1299>/Switch'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1 =
            rtb_VeHPMR_e_InvrtrASwitchCmd_A;

        /* End of Outputs for SubSystem: '<S1212>/BusDischarge' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S1212>/EndBusDischarge' incorporates:
         *  ActionPort: '<S1304>/Action Port'
         */
        /* Switch: '<S1304>/Switch1' incorporates:
         *  Logic: '<S1304>/Logical2'
         */
        if ((((VeHPMR_b_ORC_LOCFlt_BSW_RpdShtDn) || (VeHPMI_b_HVBatSrvcDisCnctFA))
             || (VeHPMC_b_HV_IntrnlIntrlkStatFail)) ||
                (VeHPMR_b_CollisionDetection))
        {
            /* Switch: '<S1304>/Switch1' */
            rtb_VeHPMR_e_InvrtrASwitchCmd_A = 3U;
        }
        else
        {
            /* Switch: '<S1304>/Switch1' */
            rtb_VeHPMR_e_InvrtrASwitchCmd_A = 0U;
        }

        /* End of Switch: '<S1304>/Switch1' */

        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
         *  DataTypeConversion: '<S1356>/DataTypeConversion'
         *  Switch: '<S1304>/Switch1'
         */
        VeHPMC_e_InvrtrASwitchCmd = rtb_VeHPMR_e_InvrtrASwitchCmd_A;

        /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut' incorporates:
         *  DataTypeConversion: '<S1357>/DataTypeConversion'
         *  Switch: '<S1304>/Switch1'
         */
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1 =
            rtb_VeHPMR_e_InvrtrASwitchCmd_A;

        /* End of Outputs for SubSystem: '<S1212>/EndBusDischarge' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S1212>/NormalOperation' incorporates:
         *  ActionPort: '<S1313>/Action Port'
         */
        /* Logic: '<S1313>/Logical10' incorporates:
         *  Constant: '<S1382>/Calib'
         *  RelationalOperator: '<S1313>/Comparison12'
         *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
         */
        VeHPMI_b_HighVoltageRapidShtdwn = ((KeHPMR_b_InvrtrSwitchCmd_Slctr) &&
            (((uint32)HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5) == CeHPMR_e_Enable));

        /* Switch: '<S1313>/Switch4' incorporates:
         *  Constant: '<S1378>/Calib'
         *  Constant: '<S1379>/Calib'
         *  Logic: '<S1313>/Logical14'
         *  Logic: '<S1313>/Logical15'
         *  Logic: '<S1313>/Logical9'
         */
        if ((((KeHPMR_b_DsblInvA_INVR_Enbl) && (VeHPMR_b_MtrA_InvrtrFlt_NoOpnRq))
             && VeHPMI_b_HighVoltageRapidShtdwn) ||
                (((KeHPMR_b_DsblInvA_SRAR_Enbl) && (VeHPMI_b_DsblInvA)) &&
                 VeHPMI_b_HighVoltageRapidShtdwn))
        {
            /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
             *  DataTypeConversion: '<S1376>/DataTypeConversion'
             */
            VeHPMC_e_InvrtrASwitchCmd = 0U;
        }
        else
        {
            /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut' incorporates:
             *  DataTypeConversion: '<S1376>/DataTypeConversion'
             *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
             */
            VeHPMC_e_InvrtrASwitchCmd = HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5;
        }

        /* End of Switch: '<S1313>/Switch4' */

        /* Switch: '<S1313>/Switch6' incorporates:
         *  Constant: '<S1380>/Calib'
         *  Constant: '<S1381>/Calib'
         *  Logic: '<S1313>/Logical12'
         *  Logic: '<S1313>/Logical13'
         *  Logic: '<S1313>/Logical8'
         */
        if ((((KeHPMR_b_DsblInvB_INVR_Enbl) && (VeHPMR_b_MtrB_InvrtrFlt_NoOpnRq))
             && VeHPMI_b_HighVoltageRapidShtdwn) ||
                (((KeHPMR_b_DsblInvB_SRAR_Enbl) && (VeHPMI_b_DsblInvB)) &&
                 VeHPMI_b_HighVoltageRapidShtdwn))
        {
            /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut' incorporates:
             *  DataTypeConversion: '<S1377>/DataTypeConversion'
             */
            HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1 = 0U;
        }
        else
        {
            /* VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut' incorporates:
             *  DataTypeConversion: '<S1377>/DataTypeConversion'
             *  VariantMerge generated from: '<S8>/LeHPMR_e_InvrtrSwitchCmd'
             */
            HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1 =
                HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e5;
        }

        /* End of Switch: '<S1313>/Switch6' */
        /* End of Outputs for SubSystem: '<S1212>/NormalOperation' */
        break;
    }

    /* End of If: '<S1212>/If' */

    /* VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrASwitchCmdOut' incorporates:
     *  DataTypeConversion: '<S1306>/DataTypeConversion'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrASwitchCmdOut'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC_e_ = VeHPMC_e_InvrtrASwitchCmd;

    /* VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrBSwitchCmdOut' incorporates:
     *  DataTypeConversion: '<S1307>/DataTypeConversion'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_InvrtrBSwitchCmdOut'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC_ie =
        HPMR_ac_B.VeHPMR_e_InvrtrBSwitchCmd_Arb1;

    /* Outputs for Enabled SubSystem: '<S1370>/Subsystem' incorporates:
     *  EnablePort: '<S1372>/Enable'
     */
    /* VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrCSwitchCmdOut' incorporates:
     *  Constant: '<S1371>/Constant'
     *  DataTypeConversion: '<S1372>/Data Type Conversion1'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__p = CeHPMR_e_Disable;

    /* End of Outputs for SubSystem: '<S1370>/Subsystem' */

    /* VariantMerge generated from: '<S1065>/VeHPMC_b_EnableCANCPrev' incorporates:
     *  UnitDelay: '<S1067>/Unit Delay2'
     */
    HPMR_ac_B.VariantMergeForOutportVeHPMC__e = HPMR_ac_DW.UnitDelay2_DSTATE;

    /* Outputs for Atomic SubSystem: '<S1213>/Signal Latch On With Reset' */
    /* Logic: '<S1401>/OR1' incorporates:
     *  Logic: '<S1213>/OR5'
     *  RelationalOperator: '<S1213>/Equal3'
     *  RelationalOperator: '<S1213>/Equal4'
     *  Switch: '<S7>/Switch24'
     *  UnitDelay: '<S1401>/Unit Delay'
     */
    VeHPMI_b_HighVoltageRapidShtdwn = (((((uint32)VeHPMI_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangeNeutral) || (((uint32)VeHPMI_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangePark)) || (HPMR_ac_DW.UnitDelay_DSTATE_mi));

    /* Update for UnitDelay: '<S1401>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mi = VeHPMI_b_HighVoltageRapidShtdwn;

    /* End of Outputs for SubSystem: '<S1213>/Signal Latch On With Reset' */

    /* Switch: '<S1398>/Switch1' incorporates:
     *  Gain: '<S1400>/Gain'
     *  Logic: '<S1213>/OR1'
     *  Logic: '<S1213>/OR2'
     */
    if ((VeHPMR_b_ShutdownInProcess) || (!VeHPMI_b_HighVoltageRapidShtdwn))
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_e_ShtdwnTransOvrdVal' */
        HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal_b = 1U;
    }
    else
    {
        /* VariantMerge generated from: '<S1065>/LeHPMR_e_ShtdwnTransOvrdVal' */
        HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal_b = 0U;
    }

    /* End of Switch: '<S1398>/Switch1' */

    /* VariantMerge generated from: '<S1065>/VeHPMC_b_Allw12VStrt' incorporates:
     *  Constant: '<S1067>/FALSE Constant1'
     */
    HPMR_ac_B.VeHPMC_b_Allw12VStrt_f = false;

    /* End of Outputs for SubSystem: '<S1065>/ProcHybSysStOutputs_BEV' */
#endif

    /* End of Outputs for SubSystem: '<S6>/ProcHybSysStOutputs_Variant' */

    /* Update for Atomic SubSystem: '<S6>/ProcHybSysStOutputs_Variant' */
#if Rte_SysCon_Variant_HPMR_3

    /* Update for Atomic SubSystem: '<S1065>/ProcHybSysStOutputs' */
    /* Update for UnitDelay: '<S1074>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    HPMR_ac_DW.UnitDelay_DSTATE_jg = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* Update for UnitDelay: '<S1124>/Unit Delay1' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    HPMR_ac_DW.UnitDelay1_DSTATE_g = VeHPMC_e_BattCntctrCmd;

    /* Update for Atomic SubSystem: '<S1074>/BSG12V_Arbitration' */
#if Rte_SysCon_Variant_HPMR_12VBSG

    /* Update for Atomic SubSystem: '<S1125>/BSG12V_Arbitration' */
    /* Update for Atomic SubSystem: '<S1142>/Turn On Delay Time' */
    /* Update for Atomic SubSystem: '<S1152>/EdgeRising' */
    /* Update for UnitDelay: '<S1154>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mp = VeHPMR_b_InvrtrFaulted_12VMtr;

    /* End of Update for SubSystem: '<S1152>/EdgeRising' */

    /* Update for UnitDelay: '<S1152>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch1_fj;

    /* End of Update for SubSystem: '<S1142>/Turn On Delay Time' */
    /* End of Update for SubSystem: '<S1125>/BSG12V_Arbitration' */
#endif

    /* End of Update for SubSystem: '<S1074>/BSG12V_Arbitration' */

    /* Update for UnitDelay: '<S1096>/Unit Delay' incorporates:
     *  Switch: '<S7>/Switch69'
     */
    HPMR_ac_DW.UnitDelay_DSTATE_fm = VeHPMI_e_OperationalModeSts;

    /* Update for UnitDelay: '<S1096>/Unit Delay1' incorporates:
     *  Switch: '<S7>/Switch42'
     */
    HPMR_ac_DW.VeHPMR_e_PMM_PowerMode_Prev = VeHPMI_e_PMM_PowerMode;

    /* Update for Atomic SubSystem: '<S1096>/EdgeRising1' */
    /* Update for UnitDelay: '<S1109>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ju = VeHPMC_b_PropulsionSystemActive;

    /* End of Update for SubSystem: '<S1096>/EdgeRising1' */

    /* Update for UnitDelay: '<S1071>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_ei = VeHPMI_b_SC_WkUpFlg;

    /* Update for UnitDelay: '<S1066>/Unit Delay1' */
    HPMR_ac_DW.UnitDelay1_DSTATE = VeHPMC_b_EnableCANC;

    /* End of Update for SubSystem: '<S1065>/ProcHybSysStOutputs' */
#else

    /* Update for Atomic SubSystem: '<S1065>/ProcHybSysStOutputs_BEV' */
    /* Update for UnitDelay: '<S1209>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_mw = VeHPMI_b_SC_WkUpFlg;

    /* Update for UnitDelay: '<S1208>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    HPMR_ac_DW.UnitDelay_DSTATE_n5 = VeHPMC_e_BattCntctrCmd;

    /* Update for UnitDelay: '<S1212>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt1'
     */
    HPMR_ac_DW.UnitDelay_DSTATE_gk = HPMR_ac_B.LeHPMR_e_HybSysSt_j;

    /* Update for UnitDelay: '<S1212>/Unit Delay1' incorporates:
     *  VariantMerge generated from: '<S8>/LeHPMC_e_BattCntctrCmd'
     */
    HPMR_ac_DW.UnitDelay1_DSTATE_c = VeHPMC_e_BattCntctrCmd;

    /* Update for Atomic SubSystem: '<S1212>/EdgeRising' */
    /* Update for UnitDelay: '<S1303>/Unit Delay' */
    HPMR_ac_DW.UnitDelay_DSTATE_o0 = VeHPMR_b_MtrNotInActvDschrg;

    /* End of Update for SubSystem: '<S1212>/EdgeRising' */

    /* Update for UnitDelay: '<S1067>/Unit Delay2' */
    HPMR_ac_DW.UnitDelay2_DSTATE = rtb_Logical;

    /* End of Update for SubSystem: '<S1065>/ProcHybSysStOutputs_BEV' */
#endif

    /* End of Update for SubSystem: '<S6>/ProcHybSysStOutputs_Variant' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHPMR_DC_BattPackCntctrCmd' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_DC_BattPackCntctrCmd'
     */
    (void)Rte_Write_VeHPMR_DC_BattPackCntctrCmd_Value
        (HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd_n);

    /* Outport: '<Root>/VeHPMR_b_CntctrsOpenAfterClose' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_b_CntctrsOpenAfterClose1'
     */
    (void)Rte_Write_VeHPMR_b_CntctrsOpenAfterClose_Value
        (HPMR_ac_B.LeHPMR_b_CntctrsOpenAfterClose1);

    /* Outport: '<Root>/VeHPMR_b_CntrlrPwrHold' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_b_CntrlrPwrHold'
     */
    (void)Rte_Write_VeHPMR_b_CntrlrPwrHold_Value
        (HPMR_ac_B.VariantMergeForOutportLeHPMR_b_);

    /* Outport: '<Root>/VeHPMR_b_HighMtrStrtSpdActv' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_b_HighMtrStrtSpdActv'
     */
    (void)Rte_Write_VeHPMR_b_HighMtrStrtSpdActv_Value
        (HPMR_ac_B.LeHPMR_b_HighMtrStrtSpdActv);

    /* Outport: '<Root>/VeHPMR_b_PropSysStartReady' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_b_PropSysStartReady'
     */
    (void)Rte_Write_VeHPMR_b_PropSysStartReady_Value
        (HPMR_ac_B.LeHPMR_b_PropSysStartReady_a);

    /* Outport: '<Root>/VeHPMR_e_HighVltCntctrCntrl' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_e_HighVltCntctrCntrl'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_HighVltCntctrCntrl'
     */
    (void)Rte_Write_VeHPMR_e_HighVltCntctrCntrl_Value
        (HPMR_ac_B.VariantMergeForOutportLeHPMR__p);

    /* Outport: '<Root>/VeHPMR_e_HybSysSt' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_e_HybSysSt'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_HybSysSt'
     */
    (void)Rte_Write_VeHPMR_e_HybSysSt_Value
        (HPMR_ac_B.VariantMergeForOutportLeHPMR_e_);

    /* Outport: '<Root>/VeHPMR_e_PropSysMode' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_e_PropSysMode'
     *  VariantMerge generated from: '<S8>/LeHPMR_e_PropSysMode'
     */
    (void)Rte_Write_VeHPMR_e_PropSysMode_Value(HPMR_ac_B.LeHPMR_e_PropSysMode_k);

    /* Outport: '<Root>/VeHPMR_e_ShtdwnTransOvrdVal' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_e_ShtdwnTransOvrdVal'
     *  VariantMerge generated from: '<S1065>/LeHPMR_e_ShtdwnTransOvrdVal'
     */
    (void)Rte_Write_VeHPMR_e_ShtdwnTransOvrdVal_Value
        (HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal_b);

    /* Outport: '<Root>/VeHPMR_f_CntctrCmd_PWM' incorporates:
     *  SignalConversion generated from: '<S1>/LeHPMR_f_CntctrCmd_PWM'
     */
    (void)Rte_Write_VeHPMR_f_CntctrCmd_PWM_Value
        (HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM_o);

    /* Outport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn1' incorporates:
     *  SignalConversion generated from: '<S1>/VaHPMC_K_RsnForUnintndShtDwn1'
     */
    (void)Rte_Write_VaHPMR_K_RsnForUnintndShtDwn1_Value
        (HPMR_ac_B.VaHPMC_K_RsnForUnintndShtDwn1);

    /* Outport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn2' incorporates:
     *  SignalConversion generated from: '<S1>/VaHPMC_K_RsnForUnintndShtDwn2'
     */
    (void)Rte_Write_VaHPMR_K_RsnForUnintndShtDwn2_Value
        ((&(VaHPMC_K_RsnForUnintndShtDwn2[0])));

    /* Outport: '<Root>/VeHPMR_b_Allw12VStrt' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_Allw12VStrt'
     */
    (void)Rte_Write_VeHPMR_b_Allw12VStrt_Value(HPMR_ac_B.VeHPMC_b_Allw12VStrt_f);

    /* Outport: '<Root>/VeHPMR_b_ContactorsClosedThisKey' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_ContactorsClosedThisKeyOut'
     */
    (void)Rte_Write_VeHPMR_b_ContactorsClosedThisKey_Value
        (HPMR_ac_B.VeHPMC_b_ContactorsClosedThisKe);

    /* Outport: '<Root>/VeHPMR_b_EnableCANC' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_EnableCANC'
     */
    (void)Rte_Write_VeHPMR_b_EnableCANC_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC_b_);

    /* Outport: '<Root>/VeHPMR_b_EnblV2L' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_EnblV2L'
     */
    (void)Rte_Write_VeHPMR_b_EnblV2L_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC__d);

    /* Outport: '<Root>/VeHPMR_b_InverterFaultedOut' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_InverterFaultedOut'
     */
    (void)Rte_Write_VeHPMR_b_InverterFaultedOut_Value
        (VeHPMC_b_InverterFaultedOut);

    /* Outport: '<Root>/VeHPMR_b_MCP_SPT_Timeout' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_MCP_SPT_TimeoutOut'
     */
    (void)Rte_Write_VeHPMR_b_MCP_SPT_Timeout_Value
        (HPMR_ac_B.VeHPMC_b_MCP_SPT_TimeoutOut);

    /* Outport: '<Root>/VeHPMR_b_PrepareToShtdwn' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_PrepareToShtdwn'
     */
    (void)Rte_Write_VeHPMR_b_PrepareToShtdwn_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC__i);

    /* Outport: '<Root>/VeHPMR_b_PropSysActv' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_b_PropulsionSystemActive'
     */
    (void)Rte_Write_VeHPMR_b_PropSysActv_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC__j);

    /* Outport: '<Root>/VeHPMR_e_FuelCellMdCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_e_FuelCellMdCmd'
     *  VariantMerge generated from: '<S1065>/VeHPMC_e_FuelCellMdCmd'
     */
    (void)Rte_Write_VeHPMR_e_FuelCellMdCmd_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC__l);

    /* Outport: '<Root>/VeHPMR_e_InvrtrASwitchCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_e_InvrtrASwitchCmdOut'
     *  VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrASwitchCmdOut'
     */
    (void)Rte_Write_VeHPMR_e_InvrtrASwitchCmd_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC_e_);

    /* Outport: '<Root>/VeHPMR_e_InvrtrBSwitchCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_e_InvrtrBSwitchCmdOut'
     *  VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrBSwitchCmdOut'
     */
    (void)Rte_Write_VeHPMR_e_InvrtrBSwitchCmd_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC_ie);

    /* Outport: '<Root>/VeHPMR_e_InvrtrCSwitchCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMC_e_InvrtrCSwitchCmdOut'
     *  VariantMerge generated from: '<S1065>/VeHPMC_e_InvrtrCSwitchCmdOut'
     */
    (void)Rte_Write_VeHPMR_e_InvrtrCSwitchCmd_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMC__p);

    /* Outport: '<Root>/VeHPMR_b_EVCURespAuxLoadOff' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_b_EVCURespAuxLoadOff'
     */
    (void)Rte_Write_VeHPMR_b_EVCURespAuxLoadOff_Value
        (HPMR_ac_B.VeHPMR_b_EVCURespAuxLoadOff);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_HVFltStpChrg' */
#if !Rte_SysCon_Variant_HPMR_3

    /* Outport: '<Root>/VeHPMR_b_HVFltStpChrg' */
    (void)Rte_Write_VeHPMR_b_HVFltStpChrg_Value(HPMR_ac_B.AND_m);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHPMR_b_HVFltStpChrg' */

    /* Outport: '<Root>/VeHPMR_b_MtrSystemActive' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_b_MtrSystemActiveOut'
     */
    (void)Rte_Write_VeHPMR_b_MtrSystemActive_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMR_b_);

    /* Outport: '<Root>/VeHPMR_b_PrechargeFailure' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_b_PrechargeFailure'
     */
    (void)Rte_Write_VeHPMR_b_PrechargeFailure_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMR__c);

    /* Outport: '<Root>/VeHPMR_b_BattCntctrOpenPndg' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_b_ShutdownInProcess1'
     */
    (void)Rte_Write_VeHPMR_b_BattCntctrOpenPndg_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMR__p);

    /* Outport: '<Root>/VeHPMR_b_UnintendedShtdwnOcc' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_b_UnintendedShtdwnOcc'
     */
    (void)Rte_Write_VeHPMR_b_UnintendedShtdwnOcc_Value
        (HPMR_ac_B.VariantMergeForOutportVeHPMR__h);

    /* Outport: '<Root>/VeHPMR_e_APM_OperMode' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_e_APM_OperMode'
     *  VariantMerge generated from: '<S8>/VeHPMR_e_APM_OperMode'
     */
    (void)Rte_Write_VeHPMR_e_APM_OperMode_Value(HPMR_ac_B.LeHPMR_e_APM_OperMode);

    /* Outport: '<Root>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_e_RsnForUnintndShtDwn'
     *  VariantMerge generated from: '<S374>/VeHPMR_e_RsnForUnintndShtDwn'
     */
    (void)Rte_Write_VeHPMR_e_RsnForUnintndShtDwn_Value
        (HPMR_ac_B.VeHPMC_e_RsnForUnintndShtDwn);

    /* Outport: '<Root>/VeHPMR_t_PropSysActvTmr' incorporates:
     *  SignalConversion generated from: '<S1>/VeHPMR_t_PropSysActv'
     */
    (void)Rte_Write_VeHPMR_t_PropSysActvTmr_Value(HPMR_ac_B.VeHPMR_t_PropSysActv);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, HPMR_CODE) HPMR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/HPMR_PwrOff'
     */
    /* Outport: '<Root>/EeHPMR_b_ORC_LOCFA_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeHPMR_b_ORC_LOCFA'
     */
    (void)Rte_Write_EeHPMR_b_ORC_LOCFA_EeHPMR_b_ORC_LOCFA(EeHPMR_b_ORC_LOCFA);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, HPMR_CODE) HPMR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HPMR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S1623>/EeHPMR_b_ORC_LOCFA' incorporates:
     *  Inport: '<Root>/EeHPMR_b_ORC_LOCFA_PM_In'
     */
    (void)Rte_Read_EeHPMR_b_ORC_LOCFA_Rx_EeHPMR_b_ORC_LOCFA
        ((&(EeHPMR_b_ORC_LOCFA)));

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitHPMC'
     */
    /* SignalConversion generated from: '<S1624>/LeHPMR_b_CntrlrPwrHold' */
    HPMR_ac_B.LeHPMR_b_CntrlrPwrHold = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrSwitchCmd' incorporates:
     *  Constant: '<S1625>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd = HPMR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_HighVltCntctrCntrl' incorporates:
     *  Constant: '<S1627>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_HighVltCntctrCntrl = HPMR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_ShtdwnTransOvrdVal' incorporates:
     *  Constant: '<S1628>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal = HPMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1624>/LeHPMC_b_PropSysActv' */
    HPMR_ac_B.LeHPMC_b_PropSysActv = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_ShutdownInitiated' */
    HPMR_ac_B.LeHPMR_b_ShutdownInitiated = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_DC_BattPackCntctrCmd' incorporates:
     *  Constant: '<S1635>/Calib'
     */
    HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd = KeHPMR_DC_CntctrCmdInvalid;

    /* SignalConversion generated from: '<S1624>/LeHPMR_f_CntctrCmd_PWM' incorporates:
     *  Constant: '<S1636>/Calib'
     */
    HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM = KeHPMR_f_CntctrCmd_PWM;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_HybSysSt' incorporates:
     *  Constant: '<S1629>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_HybSysSt = HPMR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_PropSysStartReady' */
    HPMR_ac_B.LeHPMR_b_PropSysStartReady = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_MtrSpdActv' */
    HPMR_ac_B.LeHPMR_b_MtrSpdActv = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_t_PropSysActvTmr' */
    HPMR_ac_B.LeHPMR_t_PropSysActvTmr = 0.0F;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_MtrSystemActiveIn' */
    HPMR_ac_B.LeHPMR_b_MtrSystemActiveIn = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_UnintendedShtdwnOcc' */
    HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_PropSysMode' incorporates:
     *  Constant: '<S1631>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_PropSysMode = HPMR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_RsnForUnintndShtDwn' incorporates:
     *  Constant: '<S1626>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_RsnForUnintndShtDwn = HPMR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_EnableCANC' */
    HPMR_ac_B.LeHPMR_b_EnableCANC = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_APMOperMode' incorporates:
     *  Constant: '<S1632>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_APMOperMode = HPMR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_PreChargeFailure' */
    HPMR_ac_B.LeHPMR_b_PreChargeFailure = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_CntctrsOpenAfterCloseIn' */
    HPMR_ac_B.LeHPMR_b_CntctrsOpenAfterCloseI = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_ContactorsClosedThisKey' */
    HPMR_ac_B.LeHPMR_b_ContactorsClosedThisKe = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrASwitchCmd' incorporates:
     *  Constant: '<S1633>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_InvrtrASwitchCmd = HPMR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_Allw12VStrt' */
    HPMR_ac_B.LeHPMR_b_Allw12VStrt = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_MCP_SPT_Timeout' */
    HPMR_ac_B.LeHPMR_b_MCP_SPT_Timeout = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_InverterFaultedOut' */
    HPMR_ac_B.LeHPMR_b_InverterFaultedOut = false;
    for (i = 0; i < 15; i++)
    {
        /* SignalConversion generated from: '<S1624>/LaHPMC_K_RsnForUnintndShtDwn1' */
        HPMR_ac_B.LaHPMC_K_RsnForUnintndShtDwn1[i] = 0;

        /* SignalConversion generated from: '<S1624>/LaHPMC_K_RsnForUnintndShtDwn2' */
        HPMR_ac_B.LaHPMC_K_RsnForUnintndShtDwn2[i] = 0;
    }

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_PrepareToShtdwn' */
    HPMR_ac_B.LeHPMR_b_PrepareToShtdwn = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrCSwitchCmd' incorporates:
     *  Constant: '<S1630>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e = HPMR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_EnblV2L' */
    HPMR_ac_B.LeHPMR_b_EnblV2L = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_e_FuelCellMdCmd_Out' incorporates:
     *  Constant: '<S1634>/Constant'
     */
    HPMR_ac_B.LeHPMR_e_FuelCellMdCmd_Out = HPMR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_EVCURespAuxLoadOff' */
    HPMR_ac_B.LeHPMR_b_EVCURespAuxLoadOff = false;

    /* SignalConversion generated from: '<S1624>/LeHPMR_b_HVFltStpChrg' */
    HPMR_ac_B.LeHPMR_b_HVFltStpChrg = false;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn1' incorporates:
     *  SignalConversion generated from: '<S3>/LaHPMC_K_RsnForUnintndShtDwn1'
     */
    (void)Rte_Write_VaHPMR_K_RsnForUnintndShtDwn1_Value
        (HPMR_ac_B.LaHPMC_K_RsnForUnintndShtDwn1);

    /* Outport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn2' incorporates:
     *  SignalConversion generated from: '<S3>/LaHPMC_K_RsnForUnintndShtDwn2'
     */
    (void)Rte_Write_VaHPMR_K_RsnForUnintndShtDwn2_Value
        (HPMR_ac_B.LaHPMC_K_RsnForUnintndShtDwn2);

    /* Outport: '<Root>/VeHPMR_b_PropSysActv' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMC_b_PropSysActv'
     */
    (void)Rte_Write_VeHPMR_b_PropSysActv_Value(HPMR_ac_B.LeHPMC_b_PropSysActv);

    /* Outport: '<Root>/VeHPMR_DC_BattPackCntctrCmd' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_DC_BattPackCntctrCmd'
     */
    (void)Rte_Write_VeHPMR_DC_BattPackCntctrCmd_Value
        (HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd);

    /* Outport: '<Root>/VeHPMR_b_Allw12VStrt' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_Allw12VStrt'
     */
    (void)Rte_Write_VeHPMR_b_Allw12VStrt_Value(HPMR_ac_B.LeHPMR_b_Allw12VStrt);

    /* Outport: '<Root>/VeHPMR_b_CntctrsOpenAfterClose' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_CntctrsOpenAfterCloseIn'
     */
    (void)Rte_Write_VeHPMR_b_CntctrsOpenAfterClose_Value
        (HPMR_ac_B.LeHPMR_b_CntctrsOpenAfterCloseI);

    /* Outport: '<Root>/VeHPMR_b_CntrlrPwrHold' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_CntrlrPwrHold'
     */
    (void)Rte_Write_VeHPMR_b_CntrlrPwrHold_Value
        (HPMR_ac_B.LeHPMR_b_CntrlrPwrHold);

    /* Outport: '<Root>/VeHPMR_b_ContactorsClosedThisKey' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_ContactorsClosedThisKey'
     */
    (void)Rte_Write_VeHPMR_b_ContactorsClosedThisKey_Value
        (HPMR_ac_B.LeHPMR_b_ContactorsClosedThisKe);

    /* Outport: '<Root>/VeHPMR_b_EVCURespAuxLoadOff' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_EVCURespAuxLoadOff'
     */
    (void)Rte_Write_VeHPMR_b_EVCURespAuxLoadOff_Value
        (HPMR_ac_B.LeHPMR_b_EVCURespAuxLoadOff);

    /* Outport: '<Root>/VeHPMR_b_EnableCANC' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_EnableCANC'
     */
    (void)Rte_Write_VeHPMR_b_EnableCANC_Value(HPMR_ac_B.LeHPMR_b_EnableCANC);

    /* Outport: '<Root>/VeHPMR_b_EnblV2L' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_EnblV2L'
     */
    (void)Rte_Write_VeHPMR_b_EnblV2L_Value(HPMR_ac_B.LeHPMR_b_EnblV2L);

    /* Outport: '<Root>/VeHPMR_b_HVFltStpChrg' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_HVFltStpChrg'
     */
    (void)Rte_Write_VeHPMR_b_HVFltStpChrg_Value(HPMR_ac_B.LeHPMR_b_HVFltStpChrg);

    /* Outport: '<Root>/VeHPMR_b_InverterFaultedOut' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_InverterFaultedOut'
     */
    (void)Rte_Write_VeHPMR_b_InverterFaultedOut_Value
        (HPMR_ac_B.LeHPMR_b_InverterFaultedOut);

    /* Outport: '<Root>/VeHPMR_b_MCP_SPT_Timeout' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_MCP_SPT_Timeout'
     */
    (void)Rte_Write_VeHPMR_b_MCP_SPT_Timeout_Value
        (HPMR_ac_B.LeHPMR_b_MCP_SPT_Timeout);

    /* Outport: '<Root>/VeHPMR_b_HighMtrStrtSpdActv' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_MtrSpdActv'
     */
    (void)Rte_Write_VeHPMR_b_HighMtrStrtSpdActv_Value
        (HPMR_ac_B.LeHPMR_b_MtrSpdActv);

    /* Outport: '<Root>/VeHPMR_b_MtrSystemActive' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_MtrSystemActiveIn'
     */
    (void)Rte_Write_VeHPMR_b_MtrSystemActive_Value
        (HPMR_ac_B.LeHPMR_b_MtrSystemActiveIn);

    /* Outport: '<Root>/VeHPMR_b_PrechargeFailure' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_PreChargeFailure'
     */
    (void)Rte_Write_VeHPMR_b_PrechargeFailure_Value
        (HPMR_ac_B.LeHPMR_b_PreChargeFailure);

    /* Outport: '<Root>/VeHPMR_b_PrepareToShtdwn' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_PrepareToShtdwn'
     */
    (void)Rte_Write_VeHPMR_b_PrepareToShtdwn_Value
        (HPMR_ac_B.LeHPMR_b_PrepareToShtdwn);

    /* Outport: '<Root>/VeHPMR_b_PropSysStartReady' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_PropSysStartReady'
     */
    (void)Rte_Write_VeHPMR_b_PropSysStartReady_Value
        (HPMR_ac_B.LeHPMR_b_PropSysStartReady);

    /* Outport: '<Root>/VeHPMR_b_BattCntctrOpenPndg' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_ShutdownInitiated'
     */
    (void)Rte_Write_VeHPMR_b_BattCntctrOpenPndg_Value
        (HPMR_ac_B.LeHPMR_b_ShutdownInitiated);

    /* Outport: '<Root>/VeHPMR_b_UnintendedShtdwnOcc' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_b_UnintendedShtdwnOcc'
     */
    (void)Rte_Write_VeHPMR_b_UnintendedShtdwnOcc_Value
        (HPMR_ac_B.LeHPMR_b_UnintendedShtdwnOcc);

    /* Outport: '<Root>/VeHPMR_e_APM_OperMode' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_APMOperMode'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_APMOperMode'
     */
    (void)Rte_Write_VeHPMR_e_APM_OperMode_Value(HPMR_ac_B.LeHPMR_e_APMOperMode);

    /* Outport: '<Root>/VeHPMR_e_FuelCellMdCmd' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_FuelCellMdCmd_Out'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_FuelCellMdCmd_Out'
     */
    (void)Rte_Write_VeHPMR_e_FuelCellMdCmd_Value
        (HPMR_ac_B.LeHPMR_e_FuelCellMdCmd_Out);

    /* Outport: '<Root>/VeHPMR_e_HighVltCntctrCntrl' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_HighVltCntctrCntrl'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_HighVltCntctrCntrl'
     */
    (void)Rte_Write_VeHPMR_e_HighVltCntctrCntrl_Value
        (HPMR_ac_B.LeHPMR_e_HighVltCntctrCntrl);

    /* Outport: '<Root>/VeHPMR_e_HybSysSt' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_HybSysSt'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_HybSysSt'
     */
    (void)Rte_Write_VeHPMR_e_HybSysSt_Value(HPMR_ac_B.LeHPMR_e_HybSysSt);

    /* Outport: '<Root>/VeHPMR_e_InvrtrASwitchCmd' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrASwitchCmd'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_InvrtrASwitchCmd'
     */
    (void)Rte_Write_VeHPMR_e_InvrtrASwitchCmd_Value
        (HPMR_ac_B.LeHPMR_e_InvrtrASwitchCmd);

    /* Outport: '<Root>/VeHPMR_e_InvrtrCSwitchCmd' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrCSwitchCmd'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_InvrtrCSwitchCmd'
     */
    (void)Rte_Write_VeHPMR_e_InvrtrCSwitchCmd_Value
        (HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e);

    /* Outport: '<Root>/VeHPMR_e_InvrtrBSwitchCmd' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrSwitchCmd'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_InvrtrSwitchCmd'
     */
    (void)Rte_Write_VeHPMR_e_InvrtrBSwitchCmd_Value
        (HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd);

    /* Outport: '<Root>/VeHPMR_e_PropSysMode' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_PropSysMode'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_PropSysMode'
     */
    (void)Rte_Write_VeHPMR_e_PropSysMode_Value(HPMR_ac_B.LeHPMR_e_PropSysMode);

    /* Outport: '<Root>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_RsnForUnintndShtDwn'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_RsnForUnintndShtDwn'
     */
    (void)Rte_Write_VeHPMR_e_RsnForUnintndShtDwn_Value
        (HPMR_ac_B.LeHPMR_e_RsnForUnintndShtDwn);

    /* Outport: '<Root>/VeHPMR_e_ShtdwnTransOvrdVal' incorporates:
     *  SignalConversion generated from: '<S1624>/LeHPMR_e_ShtdwnTransOvrdVal'
     *  SignalConversion generated from: '<S3>/LeHPMR_e_ShtdwnTransOvrdVal'
     */
    (void)Rte_Write_VeHPMR_e_ShtdwnTransOvrdVal_Value
        (HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal);

    /* Outport: '<Root>/VeHPMR_f_CntctrCmd_PWM' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_f_CntctrCmd_PWM'
     */
    (void)Rte_Write_VeHPMR_f_CntctrCmd_PWM_Value
        (HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM);

    /* Outport: '<Root>/VeHPMR_t_PropSysActvTmr' incorporates:
     *  SignalConversion generated from: '<S3>/LeHPMR_t_PropSysActvTmr'
     */
    (void)Rte_Write_VeHPMR_t_PropSysActvTmr_Value
        (HPMR_ac_B.LeHPMR_t_PropSysActvTmr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HPMR_CODE) HPMR_ac_Init(void)
{
    {
        sint32 i;
        sint16 tmp[15];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/HPMR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/InitHPMC'
         */
        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrSwitchCmd' incorporates:
         *  Constant: '<S1625>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd = HPMR_ac_ConstB.Constant_l;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_HighVltCntctrCntrl' incorporates:
         *  Constant: '<S1627>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_HighVltCntctrCntrl = HPMR_ac_ConstB.Constant_k;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_ShtdwnTransOvrdVal' incorporates:
         *  Constant: '<S1628>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_ShtdwnTransOvrdVal = HPMR_ac_ConstB.Constant;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_DC_BattPackCntctrCmd' incorporates:
         *  Constant: '<S1635>/Calib'
         */
        HPMR_ac_B.LeHPMR_DC_BattPackCntctrCmd = KeHPMR_DC_CntctrCmdInvalid;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_f_CntctrCmd_PWM' incorporates:
         *  Constant: '<S1636>/Calib'
         */
        HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM = KeHPMR_f_CntctrCmd_PWM;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_HybSysSt' incorporates:
         *  Constant: '<S1629>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_HybSysSt = HPMR_ac_ConstB.Constant_d;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_PropSysMode' incorporates:
         *  Constant: '<S1631>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_PropSysMode = HPMR_ac_ConstB.Constant_j;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  Constant: '<S1626>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_RsnForUnintndShtDwn = HPMR_ac_ConstB.Constant_i;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_APMOperMode' incorporates:
         *  Constant: '<S1632>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_APMOperMode = HPMR_ac_ConstB.Constant_c;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrASwitchCmd' incorporates:
         *  Constant: '<S1633>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_InvrtrASwitchCmd = HPMR_ac_ConstB.Constant_h;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_InvrtrCSwitchCmd' incorporates:
         *  Constant: '<S1630>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_InvrtrSwitchCmd_e = HPMR_ac_ConstB.Constant_g;

        /* SystemInitialize for SignalConversion generated from: '<S1624>/LeHPMR_e_FuelCellMdCmd_Out' incorporates:
         *  Constant: '<S1634>/Constant'
         */
        HPMR_ac_B.LeHPMR_e_FuelCellMdCmd_Out = HPMR_ac_ConstB.Constant_e;

        /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
         *  SubSystem: '<Root>/HPMR_MedTEB'
         */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/HPMI_Override'
         */
        /* SystemInitialize for SignalConversion generated from: '<S7>/LeHPMR_t_dT' incorporates:
         *  Constant: '<S1622>/Calib'
         */
        HPMR_ac_B.LeHPMR_t_dT = HeHPMR_t_dT;

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/HPMC_ProcHybSysStOutputs'
         */
        /* SystemInitialize for Atomic SubSystem: '<S6>/ProcHybSysStOutputs_Variant' */
#if Rte_SysCon_Variant_HPMR_3

        /* SystemInitialize for Atomic SubSystem: '<S1065>/ProcHybSysStOutputs' */
        /* Start for VariantMerge generated from: '<S1065>/LeHPMR_f_CntctrCmd_PWM' incorporates:
         *  Constant: '<S1094>/Calib'
         */
        HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM_o = KeHPMR_f_CntctrCmd_PWM;

        /* Start for If: '<S1074>/If' */
        HPMR_ac_DW.If_ActiveSubsystem_m = -1;

        /* End of SystemInitialize for SubSystem: '<S1065>/ProcHybSysStOutputs' */
#else

        /* SystemInitialize for Atomic SubSystem: '<S1065>/ProcHybSysStOutputs_BEV' */
        /* Start for VariantMerge generated from: '<S1065>/LeHPMR_f_CntctrCmd_PWM' incorporates:
         *  Constant: '<S1231>/Calib'
         */
        HPMR_ac_B.LeHPMR_f_CntctrCmd_PWM_o = KeHPMR_f_CntctrCmd_PWM;

        /* Start for If: '<S1212>/If' */
        HPMR_ac_DW.If_ActiveSubsystem = -1;

        /* End of SystemInitialize for SubSystem: '<S1065>/ProcHybSysStOutputs_BEV' */
#endif

        /* End of SystemInitialize for SubSystem: '<S6>/ProcHybSysStOutputs_Variant' */
        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_InvrtrBSwitchCmd' incorporates:
         *  Merge: '<Root>/Merge_2'
         */
        (void)Rte_Write_VeHPMR_e_InvrtrBSwitchCmd_Value(CeHPMR_e_Disable);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_HighVltCntctrCntrl' incorporates:
         *  Merge: '<Root>/Merge_16'
         */
        (void)Rte_Write_VeHPMR_e_HighVltCntctrCntrl_Value(CeHPMR_e_Open);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_ShtdwnTransOvrdVal' incorporates:
         *  Merge: '<Root>/Merge_13'
         */
        (void)Rte_Write_VeHPMR_e_ShtdwnTransOvrdVal_Value(CeHPMR_e_NoOverride);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_HybSysSt' incorporates:
         *  Merge: '<Root>/Merge_29'
         */
        (void)Rte_Write_VeHPMR_e_HybSysSt_Value(CeHPMR_e_POWERUP);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_PropSysMode' incorporates:
         *  Merge: '<Root>/Merge_4'
         */
        (void)Rte_Write_VeHPMR_e_PropSysMode_Value(CeHPMR_e_Disabled);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_RsnForUnintndShtDwn' incorporates:
         *  Merge: '<Root>/Merge_17'
         */
        (void)Rte_Write_VeHPMR_e_RsnForUnintndShtDwn_Value
            (CeHPMR_e_NoUnintndShtDwn);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_APM_OperMode' incorporates:
         *  Merge: '<Root>/Merge_12'
         */
        (void)Rte_Write_VeHPMR_e_APM_OperMode_Value(CeHPMR_e_Idle);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_InvrtrASwitchCmd' incorporates:
         *  Merge: '<Root>/Merge_20'
         */
        (void)Rte_Write_VeHPMR_e_InvrtrASwitchCmd_Value(CeHPMR_e_Disable);

        /* SystemInitialize for Merge: '<Root>/Merge_8' */
        for (i = 0; i < 15; i++)
        {
            tmp[i] = 0;
        }

        /* SystemInitialize for Outport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn1' incorporates:
         *  Merge: '<Root>/Merge_8'
         */
        (void)Rte_Write_VaHPMR_K_RsnForUnintndShtDwn1_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_9' */
        for (i = 0; i < 15; i++)
        {
            tmp[i] = 0;
        }

        /* SystemInitialize for Outport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn2' incorporates:
         *  Merge: '<Root>/Merge_9'
         */
        (void)Rte_Write_VaHPMR_K_RsnForUnintndShtDwn2_Value(tmp);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_InvrtrCSwitchCmd' incorporates:
         *  Merge: '<Root>/Merge_23'
         */
        (void)Rte_Write_VeHPMR_e_InvrtrCSwitchCmd_Value(CeHPMR_e_Disable);

        /* SystemInitialize for Outport: '<Root>/VeHPMR_e_FuelCellMdCmd' incorporates:
         *  Merge: '<Root>/Merge_15'
         */
        (void)Rte_Write_VeHPMR_e_FuelCellMdCmd_Value(CeHPMR_e_FC_Disabled);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
