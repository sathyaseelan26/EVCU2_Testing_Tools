/*
 * File: BACR_ac.c
 *
 * Code generated for Simulink model 'BACR_ac'.
 *
 * Model version                  : 9.140
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:08:11 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BACR_ac.h"
#include "intrp2d_fu32fla_16a.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"
#include "plook_u32ff_binca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_BACR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, BACR_VAR_INIT) HeBACR_b_CDSOC_Ovrd = 0;/* Referenced by: '<S221>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) HeBACR_b_EOCRenableCat = 1;/* Referenced by: '<S310>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) HeBACR_b_EOCRenableCatval = 0;/* Referenced by: '<S311>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) HeBACR_b_ElecPwrTorq_Ovrd = 0;/* Referenced by: '<S329>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) HeBACR_t_dT = 0.02F;/* Referenced by:
                                                                   * '<S312>/Calib'
                                                                   * '<S222>/Calib'
                                                                   * '<S200>/Calib'
                                                                   * '<S67>/Calib'
                                                                   * '<S112>/Calib'
                                                                   * '<S144>/Calib'
                                                                   * '<S182>/Calib'
                                                                   */
static volatile CONST(boolean, BACR_VAR_INIT) KaBACR_b_DrvMd_IsCImode[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S225>/Calib' */

static volatile CONST(boolean, BACR_VAR_INIT) KaBACR_b_EnblHldTgtSOC[3] =
{
    0, 1, 0
} ;                                    /* Referenced by: '<S274>/Calib' */

static volatile CONST(boolean, BACR_VAR_INIT) KaBACR_b_PwrPnlMd_IsCImode[4] =
{
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S226>/Calib' */

static volatile CONST(boolean, BACR_VAR_INIT) KaBACR_b_TcaseStat_IsCImode[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S227>/Calib' */

static volatile CONST(boolean, BACR_VAR_INIT) KaBACR_b_TrnMd_IsCImode[10] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S228>/Calib' */

static volatile CONST(boolean, BACR_VAR_INIT) KaBACR_b_UseRawTgtSOC4StrtStpArb[3]
    =
{
    1, 1, 1
} ;                                    /* Referenced by: '<S275>/Calib' */

static volatile CONST(boolean, BACR_VAR_INIT) KaBACR_b_UseTargetSOCRaw[3] =
{
    0, 0, 0
} ;                                    /* Referenced by: '<S276>/Calib' */

static volatile CONST(uint8, BACR_VAR_INIT) KaBACR_i_DrvSelMdSOCStratSel[60] =
{
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U,
    2U, 2U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 2U, 2U, 2U, 2U, 2U, 2U,
    2U, 2U, 2U
} ;                                    /* Referenced by: '<S277>/Calib' */

static volatile CONST(uint8, BACR_VAR_INIT) KaBACR_i_TrrnDrvMdPshftStratSel[60] =
{
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U
} ;                                    /* Referenced by: '<S86>/Calib' */

static volatile CONST(float32, BACR_VAR_INIT) KaBACR_r_DrvSelMdSOCStratCals[15] =
{
    85.0F, 1.5F, 1.5F, 1.0F, 9999.0F, 9999.0F, -1.0F, -0.3F, -9999.0F, 13.5F,
    13.5F, 13.5F, 85.0F, 85.0F, 85.0F
} ;                                    /* Referenced by: '<S278>/Calib' */

static volatile CONST(float32, BACR_VAR_INIT) KeBACR_P_GPFSrvcReq_Pshift = 0.0F;/* Referenced by: '<S287>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_P_InPlant_Pshift4ChrgDisAlw
    = 0.0F;                            /* Referenced by:
                                        * '<S106>/Calib'
                                        * '<S149>/Calib'
                                        * '<S186>/Calib'
                                        */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_P_OilDiln_PshiftMaxLimOffset = 2.0F;/* Referenced by: '<S192>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_P_PbatMin_Dflt = -999.0F;/* Referenced by: '<S288>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_P_PshiftDCloadOffstDr_Po_LSP = 3.5F;/* Referenced by: '<S52>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_P_PshiftDCloadOffstDr_Po_RSP = 4.0F;/* Referenced by: '<S53>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_ChrgDplgtSOCHyst = 3.0F;/* Referenced by: '<S229>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_ChrgIncrSOCDeltaLSP =
    5.0F;                              /* Referenced by: '<S230>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_ChrgIncrSOCDeltaRSP =
    -3.0F;                             /* Referenced by: '<S231>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_ChrgSustnSOCHyst =
    10.0F;                             /* Referenced by: '<S232>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_NoPoBsdOffset_SOCMax =
    1.0F;                              /* Referenced by: '<S77>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_NoPoBsdOffset_SOCMin =
    0.0F;                              /* Referenced by: '<S78>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_RaceStrtExitPedal =
    90.0F;                             /* Referenced by: '<S113>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_SOC_TopOfCharge = 92.0F;/* Referenced by: '<S193>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_TargetSOCOffset_Rev =
    0.0F;                              /* Referenced by: '<S265>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_TargetSOC_D_Min = 18.0F;/* Referenced by: '<S266>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_Pct_TopOfChrgPshift_ExitSOC
    = 89.0F;                           /* Referenced by: '<S194>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_Pct_deltaSOC_ContChargePwrLmt_LSP = 18.0F;/* Referenced by: '<S289>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_Pct_deltaSOC_ContChargePwrLmt_RSP = 20.0F;/* Referenced by: '<S290>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_T_BattTempMax_4PwrShift_LSP
    = 50.0F;                           /* Referenced by:
                                        * '<S89>/Calib'
                                        * '<S97>/Calib'
                                        */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_T_BattTempMax_4PwrShift_RSP
    = 55.0F;                           /* Referenced by:
                                        * '<S90>/Calib'
                                        * '<S98>/Calib'
                                        */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_T_BattTempMin_4PwrShift_LSP
    = -20.0F;                          /* Referenced by:
                                        * '<S91>/Calib'
                                        * '<S99>/Calib'
                                        */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_T_BattTempMin_4PwrShift_RSP
    = -15.0F;                          /* Referenced by:
                                        * '<S92>/Calib'
                                        * '<S100>/Calib'
                                        */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_AddMtrALoss = 1;/* Referenced by: '<S114>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_CStoCDPlugInChrg_Ovrd = 1;/* Referenced by: '<S233>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_ChargeSustnOvrd = 0;/* Referenced by: '<S330>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_ChrgIncrEngCond = 0;/* Referenced by: '<S234>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_ChrgStVehTypeIndpdnt = 0;/* Referenced by: '<S235>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_ChrgSustEngCond = 1;/* Referenced by: '<S236>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_DsblCDPluginChrg = 0;/* Referenced by: '<S237>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_EnblPlugInPshift = 0;/* Referenced by: '<S157>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_EnblRaceStartPshift = 1;/* Referenced by: '<S115>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT)
    KeBACR_b_GPFSrvcReq_PshiftOvrrdEnbl = 0;/* Referenced by: '<S291>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_HEVChrgSt4Md9TIDSpprt = 0;/* Referenced by:
                                                                      * '<S331>/Calib'
                                                                      * '<S350>/Calib'
                                                                      */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_HEVSt_Supported = 0;/* Referenced by:
                                                                      * '<S332>/Calib'
                                                                      * '<S351>/Calib'
                                                                      */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_InPlntAllwChrgOvrrdVal =
    1;                                 /* Referenced by: '<S314>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_InPlntEnblPshiftDIDCtrl =
    0;                                 /* Referenced by:
                                        * '<S107>/Calib'
                                        * '<S150>/Calib'
                                        * '<S187>/Calib'
                                        */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_InPlntEnblPshiftOpng = 1;/* Referenced by: '<S292>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_Md9TIDSupported = 1;/* Referenced by:
                                                                      * '<S333>/Calib'
                                                                      * '<S352>/Calib'
                                                                      */

#if Rte_SysCon_Variant_BACR_OilDilutionPshiftEnbl

static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_OilDilnMinEngPwrReq_Enbl =
    0;                                 /* Referenced by: '<S26>/Calib' */

#endif

static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_OvrrdInPlntAllwChrg = 0;/* Referenced by: '<S315>/Calib' */
static volatile CONST(boolean, BACR_VAR_INIT) KeBACR_b_ResetToEngRunTime = 1;/* Referenced by: '<S316>/Calib' */
static volatile CONST(TeBACR_e_HEVCharge_State, BACR_VAR_INIT)
    KeBACR_e_ChargeSustnOvrdVal = CeBACR_e_ChargeSustaining;/* Referenced by: '<S334>/Calib' */
static volatile CONST(TeBACR_e_HybridEV_Type, BACR_VAR_INIT)
    KeBACR_e_HybridEV_Type = CeBACR_e_HybridEV;/* Referenced by:
                                                * '<S335>/Calib'
                                                * '<S353>/Calib'
                                                * '<S238>/Calib'
                                                */
static volatile CONST(uint8, BACR_VAR_INIT) KeBACR_i_PwrPnlGenMdStratidx = 2U;/* Referenced by: '<S279>/Calib' */
static volatile CONST(uint8, BACR_VAR_INIT) KeBACR_i_SOCIncMdStratidx = 2U;/* Referenced by: '<S280>/Calib' */

#if Rte_SysCon_Variant_BACR_OilDilutionPshiftEnbl

static volatile CONST(float32, BACR_VAR_INIT) KeBACR_k_OilDilnMinEngPwr_FiltCoef
    = 0.2F;                            /* Referenced by: '<S27>/Calib' */

#endif

static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_k_PlugInPshiftIdle_FilterCoef = 0.02F;/* Referenced by: '<S158>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_k_PlugInPshiftStgc_FilterCoef = 0.02F;/* Referenced by: '<S159>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_k_PlugInPshiftTact_FilterCoef = 1.0F;/* Referenced by: '<S160>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_n_PshiftDCloadOffstDr_No_LSP = 100.0F;/* Referenced by: '<S44>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_n_PshiftDCloadOffstDr_No_RSP = 150.0F;/* Referenced by: '<S45>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_r_AddlCostFactNegT_NiTiTrnstn = 1.0F;/* Referenced by:
                                                 * '<S142>/Calib'
                                                 * '<S179>/Calib'
                                                 * '<S64>/Calib'
                                                 */
static volatile CONST(float32, BACR_VAR_INIT)
    KeBACR_r_AddlCostFactPosT_NiTiTrnstn = 1.0F;/* Referenced by:
                                                 * '<S148>/Calib'
                                                 * '<S180>/Calib'
                                                 * '<S65>/Calib'
                                                 */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_BatPwrShft_LTMax_FactMN =
    -1.0F;                             /* Referenced by: '<S293>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_BatPwrShft_LTMin_FactMX =
    -1.0F;                             /* Referenced by: '<S294>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_ElecPwrTorq_PedalFact =
    1.0F;                              /* Referenced by: '<S336>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_ElectrPdlFact_LD = -0.05F;/* Referenced by: '<S256>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_ElectrPdlFact_LU = 0.05F;/* Referenced by: '<S257>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_NoTiBsd_TranstnLD =
    -0.05F;                            /* Referenced by: '<S72>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_NoTiBsd_TranstnLU = 0.05F;/* Referenced by: '<S73>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_SOCCostFac_RaceStrt_Neg =
    -10.0F;                            /* Referenced by: '<S119>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_r_SOCCostFac_RaceStrt_Pos =
    10.0F;                             /* Referenced by: '<S120>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_t_OptPbatPshftBlndTm = 2.0F;/* Referenced by:
                                                                      * '<S68>/Calib'
                                                                      * '<S145>/Calib'
                                                                      * '<S183>/Calib'
                                                                      */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_t_RaceStrtPshiftBlndTime =
    2.0F;                              /* Referenced by: '<S116>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KeBACR_t_TOCPwrShftExit_BlendTime =
    0.5F;                              /* Referenced by: '<S201>/Calib' */
static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_AHH_SOCBsd_PShftOffset[5]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_CWU_PBatShift_Drive[36] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S74>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_CWU_PBatShift_PN[36] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_CWU_PBatShift_Rev[36] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S169>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[180] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S93>/Vector'
                                        * '<S101>/Vector'
                                        * '<S105>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_P_CostFactSOC_PBatShift_Drive_Po[180] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S284>/Vector'
                                        * '<S94>/Vector'
                                        * '<S102>/Vector'
                                        * '<S103>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_P_CostFactSOC_PBatShift_Drive_Po2[180] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S104>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_CostFactSOC_PBatShift_PN
    [49] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_P_CostFactSOC_PBatShift_Rev[49] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S170>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_InPlant_PBatPshift[7] =
{
    3.0F, 2.0F, 1.0F, 0.0F, 0.0F, 0.0F, -2.0F
} ;                                    /* Referenced by:
                                        * '<S108>/Vector'
                                        * '<S151>/Vector'
                                        * '<S188>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_NiToBsd_PBatShift_Drive
    [110] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S75>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_NoPoBased_PwrShft_Offset
    [72] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_P_PwrShftOffst_DCloadBsd_Dr[49] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S48>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_PwrShift_TopOfChrg[8] =
{
    -3.0F, -3.0F, 0.0F, 0.0F, -3.0F, -6.0F, -10.0F, -15.0F
} ;                                    /* Referenced by: '<S203>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_SOCPshiftOpng[6] =
{
    120.0F, 40.0F, 16.0F, 6.0F, -25.0F, -101.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_P_dSOC_DCLoadPshiftOffset
    [42] =
{
    0.0F, 0.0F, 0.0F, 0.0F, -0.5F, -0.5F, -1.0F, 3.0F, 3.0F, 3.0F, 3.0F, 2.5F,
    2.5F, 2.0F, 2.5F, 3.0F, 6.0F, 6.0F, 5.5F, 5.5F, 5.0F, 2.0F, 2.5F, 3.5F, 3.0F,
    3.0F, 3.0F, 3.0F, 1.5F, 2.0F, 3.5F, 3.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.5F, 3.5F,
    3.0F, 3.0F, 3.0F, 3.0F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_Pct_TargetSOC_D_Max[5] =
{
    25.0F, 88.0F, 88.0F, 25.0F, 25.0F
} ;                                    /* Referenced by: '<S267>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_Pct_TargetSOC_Drv_PoBsd[5] =
{
    97.0F, 97.0F, 63.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S80>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_Pct_TargetSOC_PN[5] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_dP_BattPwrShftRt_2DLT[25] =
{
    0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.1F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F, 0.1F, 0.2F, 0.2F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S300>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_k_SOCBlnc_NoBasedFltrCoeff
    [9] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S317>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Neg_Drive_Po
    [56] =
{
    -2.0F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -10.0F, -2.0F, -2.0F, -2.0F, -2.0F,
    -2.0F, -2.0F, -10.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -10.0F,
    -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -10.0F, -2.0F, -4.0F, -2.0F, -2.0F,
    -2.0F, -2.0F, -10.0F, -2.0F, -4.0F, -2.0F, -2.0F, -2.0F, -2.0F, -10.0F,
    -2.0F, -4.0F, -2.0F, -2.0F, -2.0F, -2.0F, -10.0F, -2.0F, -4.0F, -2.0F, -2.0F,
    -2.0F, -2.0F, -10.0F
} ;                                    /* Referenced by: '<S60>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_r_CostFactSOC_Neg_Drive_Stgc[56] =
{
    -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -10.0F, -0.5F, -0.5F, -0.5F, -0.5F,
    -0.5F, -0.5F, -10.0F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -10.0F,
    -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -10.0F, -0.5F, -4.0F, -0.5F, -0.5F,
    -0.5F, -0.5F, -10.0F, -0.5F, -4.0F, -0.5F, -0.5F, -0.5F, -0.5F, -10.0F,
    -0.5F, -4.0F, -0.5F, -0.5F, -0.5F, -0.5F, -10.0F, -0.5F, -4.0F, -0.5F, -0.5F,
    -0.5F, -0.5F, -10.0F
} ;                                    /* Referenced by: '<S61>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Neg_PN[7] =
{
    -3.0F, -3.0F, -3.0F, -3.0F, -2.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Neg_Rev[7] =
{
    -1.5F, -1.5F, -1.5F, -1.5F, -3.0F, -3.0F, -3.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Neg_TOC[8] =
{
    -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F
} ;                                    /* Referenced by: '<S204>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Pos_Drive_Po
    [56] =
{
    4.0F, 2.0F, 1.5F, 1.5F, 1.5F, 1.5F, 0.5F, 4.0F, 2.0F, 1.5F, 1.5F, 1.5F, 1.5F,
    1.5F, 4.0F, 2.0F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 4.0F, 2.0F, 1.5F, 1.5F, 1.5F,
    1.5F, 1.5F, 4.0F, 2.0F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 4.0F, 2.0F, 1.5F, 1.5F,
    1.5F, 1.5F, 1.5F, 4.0F, 2.0F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 4.0F, 2.0F, 1.5F,
    1.5F, 1.5F, 1.5F, 1.5F
} ;                                    /* Referenced by: '<S62>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_r_CostFactSOC_Pos_Drive_Stgc[56] =
{
    4.0F, 2.0F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 4.0F, 2.0F, 0.5F, 0.5F, 0.5F, 0.5F,
    0.5F, 4.0F, 2.0F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 4.0F, 2.0F, 0.5F, 0.5F, 0.5F,
    0.5F, 0.5F, 4.0F, 2.0F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 4.0F, 2.0F, 0.5F, 0.5F,
    0.5F, 0.5F, 0.5F, 4.0F, 2.0F, 0.5F, 0.5F, 0.5F, 0.5F, 0.5F, 4.0F, 2.0F, 0.5F,
    0.5F, 0.5F, 0.5F, 0.5F
} ;                                    /* Referenced by: '<S63>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Pos_PN[7] =
{
    3.0F, 3.0F, 3.0F, 3.0F, 2.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S133>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Pos_Rev[7] =
{
    8.0F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F
} ;                                    /* Referenced by: '<S172>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_CostFactSOC_Pos_TOC[8] =
{
    2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F
} ;                                    /* Referenced by: '<S205>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_DCLoad_PShftFctr[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S49>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_ElectrPdlFact_BattTemp[6]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_ElectrPdlFact_MtrATorq[56]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S259>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_ElectrPdlFact_MtrBTorq[56]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S260>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_ElectrPdlFact_PBattMax[5]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KtBACR_r_ElectrPdlFact_SOC[7] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S262>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_r_InPlant_PBatPshift_Mult_Drive[5] =
{
    0.0F, 0.21F, 0.42F, 0.63F, 0.89F
} ;                                    /* Referenced by: '<S109>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_r_InPlant_PBatPshift_Mult_PN[5] =
{
    0.0F, 0.21F, 0.42F, 0.63F, 0.89F
} ;                                    /* Referenced by: '<S152>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KtBACR_r_InPlant_PBatPshift_Mult_Rev[5] =
{
    0.0F, 0.21F, 0.42F, 0.63F, 0.89F
} ;                                    /* Referenced by: '<S189>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_AHH_SOCBsd_PShftOffset[5]
    =
{
    20.0F, 30.0F, 40.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_CWU_PBatShift_Drive[6] =
{
    -50.0F, 0.0F, 20.0F, 50.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S74>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_CWU_PBatShift_PN[6] =
{
    -50.0F, 0.0F, 20.0F, 50.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_CWU_PBatShift_Rev[6] =
{
    -50.0F, 0.0F, 20.0F, 50.0F, 150.0F, 250.0F
} ;                                    /* Referenced by: '<S169>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[10] =
{
    -6.0F, -2.0F, -1.0F, -0.5F, 0.0F, 1.0F, 2.0F, 4.0F, 8.0F, 10.0F
} ;                                    /* Referenced by:
                                        * '<S93>/Vector'
                                        * '<S101>/Vector'
                                        * '<S105>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_P_CostFactSOC_PBatShift_Drive_Po[10] =
{
    -6.0F, -2.0F, -1.0F, -0.5F, 0.0F, 1.0F, 2.0F, 4.0F, 8.0F, 10.0F
} ;                                    /* Referenced by:
                                        * '<S284>/Vector'
                                        * '<S94>/Vector'
                                        * '<S102>/Vector'
                                        * '<S103>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_P_CostFactSOC_PBatShift_Drive_Po2[10] =
{
    -6.0F, -2.0F, -1.0F, -0.5F, 0.0F, 1.0F, 2.0F, 4.0F, 8.0F, 10.0F
} ;                                    /* Referenced by: '<S104>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_CostFactSOC_PBatShift_PN
    [7] =
{
    -10.0F, -5.0F, -2.5F, 0.0F, 2.5F, 5.0F, 10.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_P_CostFactSOC_PBatShift_Rev[7] =
{
    -40.0F, -38.0F, -2.5F, 0.0F, 2.5F, 25.0F, 35.0F
} ;                                    /* Referenced by: '<S170>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_InPlant_PBatPshift[7] =
{
    -4.0F, -2.0F, -1.0F, 0.0F, 1.0F, 2.0F, 4.0F
} ;                                    /* Referenced by:
                                        * '<S108>/Vector'
                                        * '<S151>/Vector'
                                        * '<S188>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_NiToBsd_PBatShift_Drive
    [11] =
{
    -50.0F, -20.0F, 0.0F, 10.0F, 25.0F, 50.0F, 75.0F, 100.0F, 150.0F, 200.0F,
    250.0F
} ;                                    /* Referenced by: '<S75>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_NoPoBased_PwrShft_Offset
    [9] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 3600.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_P_PwrShftOffst_DCloadBsd_Dr[7] =
{
    -3.0F, -1.5F, -0.5F, 0.5F, 2.0F, 5.0F, 10.0F
} ;                                    /* Referenced by: '<S48>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_PwrShift_TopOfChrg[8] =
{
    -10.0F, 0.0F, 2.0F, 10.0F, 20.0F, 50.0F, 100.0F, 150.0F
} ;                                    /* Referenced by: '<S203>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_SOCPshiftOpng[6] =
{
    10.0F, 12.0F, 13.0F, 14.0F, 14.5F, 15.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_P_dSOC_DCLoadPshiftOffset[7]
    =
{
    -5.0F, -3.0F, -1.5F, 0.0F, 1.0F, 1.5F, 3.0F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_Pct_TargetSOC_D_Max[5] =
{
    -40.0F, -10.0F, 100.0F, 120.0F, 125.0F
} ;                                    /* Referenced by: '<S267>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_Pct_TargetSOC_Drv_PoBsd[5] =
{
    -20.0F, -5.0F, 0.0F, 1.0F, 5.0F
} ;                                    /* Referenced by: '<S80>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_Pct_TargetSOC_PN[5] =
{
    -40.0F, -10.0F, 100.0F, 120.0F, 125.0F
} ;                                    /* Referenced by: '<S268>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_dP_BattPwrShftRt_2DLT[5] =
{
    0.0F, 200.0F, 1000.0F, 2000.0F, 3000.0F
} ;                                    /* Referenced by: '<S300>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_k_SOCBlnc_NoBasedFltrCoeff
    [9] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2400.0F, 2800.0F, 3200.0F, 3600.0F
} ;                                    /* Referenced by: '<S317>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Neg_Drive_Po
    [7] =
{
    -2.0F, 0.0F, 10.0F, 35.0F, 39.0F, 65.0F, 70.0F
} ;                                    /* Referenced by: '<S60>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_r_CostFactSOC_Neg_Drive_Stgc[7] =
{
    -2.0F, 0.0F, 10.0F, 35.0F, 39.0F, 65.0F, 70.0F
} ;                                    /* Referenced by: '<S61>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Neg_PN[7] =
{
    -75.0F, -50.0F, -40.0F, -25.0F, -10.0F, 0.0F, 3.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Neg_Rev[7] =
{
    -45.0F, -30.0F, -10.0F, 0.0F, 10.0F, 20.0F, 35.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Neg_TOC[8] =
{
    -10.0F, 0.0F, 2.0F, 10.0F, 20.0F, 50.0F, 100.0F, 150.0F
} ;                                    /* Referenced by: '<S204>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Pos_Drive_Po
    [7] =
{
    -75.0F, -60.0F, -40.0F, -35.0F, -10.0F, 0.0F, 3.0F
} ;                                    /* Referenced by: '<S62>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_r_CostFactSOC_Pos_Drive_Stgc[7] =
{
    -75.0F, -60.0F, -40.0F, -35.0F, -10.0F, 0.0F, 3.0F
} ;                                    /* Referenced by: '<S63>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Pos_PN[7] =
{
    -75.0F, -50.0F, -40.0F, -25.0F, -10.0F, 0.0F, 3.0F
} ;                                    /* Referenced by: '<S133>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Pos_Rev[7] =
{
    -45.0F, -30.0F, -10.0F, 0.0F, 10.0F, 20.0F, 35.0F
} ;                                    /* Referenced by: '<S172>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_CostFactSOC_Pos_TOC[8] =
{
    -10.0F, 0.0F, 2.0F, 10.0F, 20.0F, 50.0F, 100.0F, 150.0F
} ;                                    /* Referenced by: '<S205>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_DCLoad_PShftFctr[6] =
{
    40.0F, 41.0F, 50.0F, 60.0F, 69.0F, 70.0F
} ;                                    /* Referenced by: '<S49>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_ElectrPdlFact_BattTemp[6]
    =
{
    -20.0F, 0.0F, 10.0F, 20.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_ElectrPdlFact_MtrATorq[8]
    =
{
    0.0F, 500.0F, 1000.0F, 2500.0F, 5000.0F, 7500.0F, 10000.0F, 12500.0F
} ;                                    /* Referenced by: '<S259>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_ElectrPdlFact_MtrBTorq[8]
    =
{
    0.0F, 500.0F, 1000.0F, 2500.0F, 5000.0F, 7500.0F, 10000.0F, 12500.0F
} ;                                    /* Referenced by: '<S260>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_ElectrPdlFact_PBattMax[5]
    =
{
    0.0F, 2.0F, 5.0F, 10.0F, 15.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KxBACR_r_ElectrPdlFact_SOC[7] =
{
    0.0F, 40.0F, 50.0F, 55.0F, 60.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S262>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_r_InPlant_PBatPshift_Mult_Drive[5] =
{
    36.0F, 56.0F, 60.0F, 91.0F, 132.0F
} ;                                    /* Referenced by: '<S109>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_r_InPlant_PBatPshift_Mult_PN[5] =
{
    36.0F, 56.0F, 60.0F, 91.0F, 132.0F
} ;                                    /* Referenced by: '<S152>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KxBACR_r_InPlant_PBatPshift_Mult_Rev[5] =
{
    36.0F, 56.0F, 60.0F, 91.0F, 132.0F
} ;                                    /* Referenced by: '<S189>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_P_CWU_PBatShift_Drive[6] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 5000.0F
} ;                                    /* Referenced by: '<S74>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_P_CWU_PBatShift_PN[6] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 5000.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_P_CWU_PBatShift_Rev[6] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 5000.0F
} ;                                    /* Referenced by: '<S169>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KyBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[18] =
{
    -250.0F, -100.0F, -50.0F, 0.0F, 10.0F, 25.0F, 50.0F, 60.0F, 80.0F, 100.0F,
    120.0F, 150.0F, 200.0F, 250.0F, 300.0F, 350.0F, 400.0F, 450.0F
} ;                                    /* Referenced by:
                                        * '<S93>/Vector'
                                        * '<S101>/Vector'
                                        * '<S105>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT)
    KyBACR_P_CostFactSOC_PBatShift_Drive_Po[18] =
{
    -250.0F, -100.0F, -50.0F, 0.0F, 10.0F, 25.0F, 50.0F, 60.0F, 80.0F, 100.0F,
    120.0F, 150.0F, 200.0F, 250.0F, 300.0F, 350.0F, 400.0F, 450.0F
} ;                                    /* Referenced by:
                                        * '<S284>/Vector'
                                        * '<S94>/Vector'
                                        * '<S102>/Vector'
                                        * '<S103>/Vector'
                                        */

static volatile CONST(float32, BACR_VAR_INIT)
    KyBACR_P_CostFactSOC_PBatShift_Drive_Po2[18] =
{
    -250.0F, -100.0F, -50.0F, 0.0F, 10.0F, 25.0F, 50.0F, 60.0F, 80.0F, 100.0F,
    120.0F, 150.0F, 200.0F, 250.0F, 300.0F, 350.0F, 400.0F, 450.0F
} ;                                    /* Referenced by: '<S104>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_P_CostFactSOC_PBatShift_PN
    [7] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KyBACR_P_CostFactSOC_PBatShift_Rev[7] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F
} ;                                    /* Referenced by: '<S170>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_P_NiToBsd_PBatShift_Drive
    [10] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F,
    7000.0F
} ;                                    /* Referenced by: '<S75>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_P_NoPoBased_PwrShft_Offset
    [8] =
{
    -20.0F, 0.0F, 15.0F, 30.0F, 60.0F, 100.0F, 120.0F, 200.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KyBACR_P_PwrShftOffst_DCloadBsd_Dr[7] =
{
    0.0F, 1.0F, 2.0F, 5.0F, 7.5F, 10.0F, 15.0F
} ;                                    /* Referenced by: '<S48>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_P_dSOC_DCLoadPshiftOffset[6]
    =
{
    0.0F, 3.0F, 6.0F, 9.0F, 12.0F, 15.0F
} ;                                    /* Referenced by: '<S285>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_dP_BattPwrShftRt_2DLT[5] =
{
    -30.0F, -10.0F, 0.0F, 10.0F, 30.0F
} ;                                    /* Referenced by: '<S300>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_r_CostFactSOC_Neg_Drive_Po
    [8] =
{
    -20.0F, 0.0F, 10.0F, 25.0F, 50.0F, 100.0F, 150.0F, 200.0F
} ;                                    /* Referenced by: '<S60>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KyBACR_r_CostFactSOC_Neg_Drive_Stgc[8] =
{
    -20.0F, 0.0F, 10.0F, 25.0F, 50.0F, 100.0F, 150.0F, 200.0F
} ;                                    /* Referenced by: '<S61>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_r_CostFactSOC_Pos_Drive_Po
    [8] =
{
    -20.0F, 0.0F, 15.0F, 30.0F, 60.0F, 100.0F, 120.0F, 200.0F
} ;                                    /* Referenced by: '<S62>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT)
    KyBACR_r_CostFactSOC_Pos_Drive_Stgc[8] =
{
    -20.0F, 0.0F, 15.0F, 30.0F, 60.0F, 100.0F, 120.0F, 200.0F
} ;                                    /* Referenced by: '<S63>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_r_ElectrPdlFact_MtrATorq[7]
    =
{
    0.0F, 10.0F, 25.0F, 50.0F, 100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S259>/Vector' */

static volatile CONST(float32, BACR_VAR_INIT) KyBACR_r_ElectrPdlFact_MtrBTorq[7]
    =
{
    0.0F, 10.0F, 25.0F, 50.0F, 100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S260>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_BACR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_AHH_PwrShft_Offset[2];/* '<S28>/Switch2' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_BatPwrShift_PostOilDilnLimit[2];/* '<S7>/MinMax' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_BattPwrShift[2];/* '<S197>/Gain' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_DCLoadBsdPShft_Offset_BSG[2];/* '<S54>/Gain' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_NiTi_PwrShftDrv_Offset[2];/* '<S36>/Product1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_NiTi_PwrShftPNBlnd[2];/* '<S129>/Switch1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_NiTi_PwrShftPN_Offset[2];/* '<S32>/Product1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_NiTi_PwrShftRevBlnd[2];/* '<S168>/Switch1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_NiTi_PwrShftRev_Offset[2];/* '<S33>/Product1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_NiToBsd_PwrShft[2];/* '<S36>/Product' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_NoBasedPwrShft_Offset[2];/* '<S28>/Switch1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_OilDiln_PshiftMin[2];/* synthesized block */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_PBatShift_Drive[2];/* '<S39>/Merge3' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_PBatShift_PN[2];/* '<S131>/Vector' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_PBatShift_Rev[2];/* '<S170>/Vector' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_PshiftOffset_DCloadBsd[2];/* '<S28>/Switch3' */
static VAR(float32, BACR_VAR_INIT) VaBACC_P_PwrShftDrvBlnd[2];/* '<S43>/Switch1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_Pct_TargetSOC_Drive[2];/* '<S38>/MinMax1' */
static VAR(float32, BACR_VAR_INIT) VaBACC_r_CostFactSOCNeg[2];/* '<S21>/Merge2' */
static VAR(float32, BACR_VAR_INIT) VaBACC_r_CostFactSOCPos[2];/* '<S21>/Merge1' */
static VAR(float32, BACR_VAR_INIT) VaBACI_M_To_PredImmed[2];/* '<S323>/Gain' */
static VAR(float32, BACR_VAR_INIT) VaBACI_P_PredictedPo_kW[3];/* '<S324>/Gain' */
static VAR(float32, BACR_VAR_INIT) VeBACC_P_BattPwrShiftIdle;/* '<S20>/Merge5' */
static VAR(float32, BACR_VAR_INIT) VeBACC_P_PlugInPshift_Idle;/* '<S155>/Switch1' */
static VAR(float32, BACR_VAR_INIT) VeBACC_P_PlugInPshift_Stgc;/* '<S153>/Switch1' */
static VAR(float32, BACR_VAR_INIT) VeBACC_P_PlugInPshift_Tact;/* '<S154>/Switch1' */
static VAR(float32, BACR_VAR_INIT) VeBACC_Pct_TargetSOCOfstBlnd;/* '<S281>/Switch' */
static VAR(float32, BACR_VAR_INIT) VeBACC_Pct_TargetSOC_DriveRaw;/* '<S10>/MinMax1' */
static VAR(float32, BACR_VAR_INIT) VeBACC_Pct_TargetSOC_PN;/* '<S10>/MinMax2' */
static VAR(float32, BACR_VAR_INIT) VeBACC_Pct_TargetSOC_Rev;/* '<S10>/Sum1' */
static VAR(float32, BACR_VAR_INIT) VeBACC_Pct_TargetSOC_StartStop;/* '<S10>/MinMax4' */
static VAR(float32, BACR_VAR_INIT) VeBACC_Pct_TargetSOC_Stgc;/* '<S10>/MinMax' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_BypassRtLmtr_TactPshift;/* '<S21>/Logical1' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_CDSOC_NoEngSt;/* '<S8>/Switch4' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_CD_SOC;/* '<S223>/Switch1' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_CImode;/* '<S8>/Logical21' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_ChargeDepleting;/* '<S220>/AND1' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_ChargeIncreasing;/* '<S8>/Logical13' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_Charged_AboveSOCLmt;/* '<S250>/AND' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_OilDiln_MinPshift_Actv;/* synthesized block */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_PlugInPshift_Actv;/* '<S134>/Logical1' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_RaceStrtPshift_Actv;/* '<S117>/OR1' */
static VAR(boolean, BACR_VAR_INIT) VeBACC_b_TOCPshift_Actv;/* '<S198>/OR1' */
static VAR(TeBACR_e_HEVCharge_State, BACR_VAR_INIT) VeBACC_e_ChargeSustn;/* '<S8>/Merge' */
static VAR(float32, BACR_VAR_INIT) VeBACC_r_ElecPwrTorq_PedalFact;/* '<S255>/Sum3' */
static VAR(boolean, BACR_VAR_INIT) VeBACI_b_AHH_Apply;/* '<S5>/Logical12' */
static VAR(boolean, BACR_VAR_INIT) VeBACI_b_InPlantMode;/* '<S5>/Logical15' */
static VAR(boolean, BACR_VAR_INIT) VeBACI_b_InPlntAllwChrg;/* '<S5>/Switch2' */
static VAR(boolean, BACR_VAR_INIT) VeBACI_b_PluggedInChrg;/* '<S5>/Comparison8' */
static VAR(float32, BACR_VAR_INIT) VeBACI_n_No_Fltd;/* '<S308>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BACR
#include "MemMap.h"

CONST(ConstP_BACR_ac_T, BACR_VAR_INIT) BACR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S284>/Vector'
     *   '<S93>/Vector'
     *   '<S94>/Vector'
     *   '<S101>/Vector'
     *   '<S102>/Vector'
     *   '<S103>/Vector'
     *   '<S104>/Vector'
     *   '<S105>/Vector'
     */
    {
        9U, 17U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S60>/Vector'
     *   '<S61>/Vector'
     *   '<S62>/Vector'
     *   '<S63>/Vector'
     */
    {
        6U, 7U
    },

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S47>/Vector'
     */
    {
        8U, 7U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S48>/Vector'
     *   '<S131>/Vector'
     *   '<S170>/Vector'
     */
    {
        6U, 6U
    },

    /* Computed Parameter: Vector_maxIndex_k
     * Referenced by: '<S75>/Vector'
     */
    {
        10U, 9U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S130>/Vector'
     *   '<S169>/Vector'
     *   '<S74>/Vector'
     */
    {
        5U, 5U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S259>/Vector'
     *   '<S260>/Vector'
     */
    {
        7U, 6U
    },

    /* Computed Parameter: Vector_maxIndex_b
     * Referenced by: '<S300>/Vector'
     */
    {
        4U, 4U
    },

    /* Computed Parameter: Vector_maxIndex_f
     * Referenced by: '<S285>/Vector'
     */
    {
        6U, 5U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_BACR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

VAR(B_BACR_ac_T, BACR_VAR_INIT) BACR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

VAR(DW_BACR_ac_T, BACR_VAR_INIT) BACR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BACR
#include "MemMap.h"

static FUNC(void, BACR_CODE_LOCAL) BACR_ac_Default(CONST(float32, AUTOMATIC)
    rtu_dSOC[2], CONST(float32, AUTOMATIC) rtu_Po[2], VAR(float32, AUTOMATIC)
    rtu_TBatt, VAR(float32, AUTOMATIC) rty_Pshift[2], P2VAR(boolean, AUTOMATIC,
    BACR_VAR_INIT) rty_HiLo_Tmp, P2VAR(DW_Default_BACR_ac_T, AUTOMATIC,
    BACR_VAR_INIT) localDW);

/*
 * Output and update for action system:
 *    '<S39>/Default'
 *    '<S39>/Default1'
 */
static FUNC(void, BACR_CODE_LOCAL) BACR_ac_Default(CONST(float32, AUTOMATIC)
    rtu_dSOC[2], CONST(float32, AUTOMATIC) rtu_Po[2], VAR(float32, AUTOMATIC)
    rtu_TBatt, VAR(float32, AUTOMATIC) rty_Pshift[2], P2VAR(boolean, AUTOMATIC,
    BACR_VAR_INIT) rty_HiLo_Tmp, P2VAR(DW_Default_BACR_ac_T, AUTOMATIC,
    BACR_VAR_INIT) localDW)
{
    sint32 iU;
    boolean rtb_Logical2_l;

    /* Outputs for Atomic SubSystem: '<S81>/Hysteresis' */
    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S87>/Constant Value'
     *  Constant: '<S91>/Calib'
     *  Constant: '<S92>/Calib'
     *  RelationalOperator: '<S87>/Greater  Than'
     *  RelationalOperator: '<S87>/Greater  Than1'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    if (rtu_TBatt > KeBACR_T_BattTempMin_4PwrShift_RSP)
    {
        localDW->UnitDelay_DSTATE_a = true;
    }
    else
    {
        localDW->UnitDelay_DSTATE_a = ((rtu_TBatt >=
            KeBACR_T_BattTempMin_4PwrShift_LSP) && (localDW->UnitDelay_DSTATE_a));
    }

    /* End of Switch: '<S87>/Switch1' */
    /* End of Outputs for SubSystem: '<S81>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S81>/Hysteresis1' */
    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S88>/Constant Value'
     *  Constant: '<S89>/Calib'
     *  Constant: '<S90>/Calib'
     *  RelationalOperator: '<S88>/Greater  Than'
     *  RelationalOperator: '<S88>/Greater  Than1'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    if (rtu_TBatt > KeBACR_T_BattTempMax_4PwrShift_RSP)
    {
        localDW->UnitDelay_DSTATE = true;
    }
    else
    {
        localDW->UnitDelay_DSTATE = ((rtu_TBatt >=
            KeBACR_T_BattTempMax_4PwrShift_LSP) && (localDW->UnitDelay_DSTATE));
    }

    /* End of Switch: '<S88>/Switch1' */
    /* End of Outputs for SubSystem: '<S81>/Hysteresis1' */

    /* Logic: '<S81>/Logical2' incorporates:
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_Logical2_l = !localDW->UnitDelay_DSTATE_a;

    /* Logic: '<S81>/Logical3' incorporates:
     *  UnitDelay: '<S88>/Unit Delay'
     */
    *rty_HiLo_Tmp = ((localDW->UnitDelay_DSTATE) || rtb_Logical2_l);
    for (iU = 0; iU < 2; iU++)
    {
        /* Switch: '<S81>/Switch' incorporates:
         *  Logic: '<S81>/Logical1'
         *  UnitDelay: '<S88>/Unit Delay'
         */
        if (rtb_Logical2_l || (localDW->UnitDelay_DSTATE))
        {
            /* Lookup_n-D: '<S93>/Vector' */
            rty_Pshift[iU] = look2_iflf_binlca_16a(rtu_dSOC[iU], rtu_Po[iU], ((
                const float32 *)
                &(KxBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[0])), ((const
                float32 *)&(KyBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[0])),
                ((const float32 *)
                 &(KtBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[0])),
                BACR_ac_ConstP.pooled8, 10U);
        }
        else
        {
            /* Lookup_n-D: '<S94>/Vector' */
            rty_Pshift[iU] = look2_iflf_binlca_16a(rtu_dSOC[iU], rtu_Po[iU], ((
                const float32 *)&(KxBACR_P_CostFactSOC_PBatShift_Drive_Po[0])),
                ((const float32 *)&(KyBACR_P_CostFactSOC_PBatShift_Drive_Po[0])),
                ((const float32 *)&(KtBACR_P_CostFactSOC_PBatShift_Drive_Po[0])),
                BACR_ac_ConstP.pooled8, 10U);
        }

        /* End of Switch: '<S81>/Switch' */
    }
}

/* Model step function for TID1 */
FUNC(void, BACR_CODE) BACR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVeBPCR_T_BatMod;
    float32 fractions[2];
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    float32 tmpRead_3;
    float32 tmpRead_7;
    float32 tmpRead_a;
    float32 tmpRead_c;
    uint32 bpIndices[2];
    uint32 bpIndices_0[2];
    uint32 bpIndices_1[2];
    TeESSR_e_HybEngSysActv tmpRead_8;
    TeFWDR_e_TrnsfrCaseRange tmpRead_b;
    TeHPMR_e_PropSysMode tmpRead_4;
    TeOBCR_e_ChargingSystemSts tmpRead_5;
    TeTRGR_e_TransRangeState tmpRead;
    boolean tmpRead_6;
    boolean tmpRead_9;

#if Rte_SysCon_Variant_BACR_OilDilutionPshiftEnbl

    float32 tmpRead_d;

#endif

    sint32 i;
    float32 rtb_Gain[3];
    float32 rtb_Sum2_cd[3];
    float32 rtb_Switch4[3];
    float32 Gain_l[2];
    float32 rtb_Sum2_jp[2];
    float32 rtb_Sum2_n[2];
    float32 rtb_TmpSignalConversionAtVaOSMR_P_PShi_j[2];
    float32 rtb_TmpSignalConversionAtVaOSMR_P_PShift[2];
    float32 rtb_MinMax3;
    float32 rtb_Product1_k;
    float32 rtb_Product_i;
    float32 rtb_Selector3;
    float32 rtb_Sum2_e;
    float32 rtb_Sum2_m;
    float32 rtb_Sum_d;
    float32 rtb_Switch12;
    float32 rtb_Switch1_cm;
    float32 rtb_Switch5;
    float32 rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;
    float32 rtb_TmpSignalConversionAtVeATRR_M_OutTrq;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    float32 rtb_TmpSignalConversionAtVeENGR_T_EngCoo;
    float32 rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
    float32 rtb_TmpSignalConversionAtVeHSCR_r_Donu_a;
    float32 rtb_TmpSignalConversionAtVeHSCR_r_DonutS;
    float32 rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc;
    float32 rtb_TmpSignalConversionAtVeOITR_P_OptCal;
    float32 rtb_TmpSignalConversionAtVeOSMR_M_OutTor;
    float32 rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
    float32 rtb_TmpSignalConversionAtVeTISR_n_InputS;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_StratN;
    float32 rtb_VariantMerge_For_Variant_Source_Vari;
    float32 rtb_Vector_bs;
    float32 tmpRead_e;
    float32 tmpRead_f;
    sint16 rtb_DataTypeConversion;
    TeBACR_e_HEVCharge_State rtb_Switch1_ak;
    TeHTDR_e_AHH_ApplyReleaseReq rtb_TmpSignalConversionAtVeHTDR_e_AHH_Ap;
    TeVTXR_e_PowerPanelMd rtb_TmpSignalConversionAtVeVTXR_e_PowerP;
    sint8 rtPrevAction;
    uint8 rtb_Switch3_pr;
    uint8 rtb_TmpSignalConversionAtVeDMDR_i_DrvMdA;
    uint8 rtb_TmpSignalConversionAtVeTMDR_i_TrueTr;
    boolean rtb_AND_hb;
    boolean rtb_Comparison1_i;
    boolean rtb_Comparison8;
    boolean rtb_LogicalOperator4;
    boolean rtb_RelationalOperator_i;
    boolean rtb_TmpSignalConversionAtVePLTR_b_InFiel;

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* SignalConversion generated from: '<S1>/VeVSDR_n_StratNoFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_StratNoFltrd'
     */
    (void)Rte_Read_VeVSDR_n_StratNoFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_StratN);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_PrimNo);

    /* SignalConversion generated from: '<S1>/VeOSMR_M_OutTorqReqAccel' incorporates:
     *  Inport: '<Root>/VeOSMR_M_OutTorqReqAccel'
     */
    (void)Rte_Read_VeOSMR_M_OutTorqReqAccel_Value
        (&rtb_TmpSignalConversionAtVeOSMR_M_OutTor);

    /* SignalConversion generated from: '<S1>/VeATRR_M_OutTrqReqImmWithoutSEM' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutTrqReqImmWithoutSEM'
     */
    (void)Rte_Read_VeATRR_M_OutTrqReqImmWithoutSEM_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_OutTrq);

    /* SignalConversion generated from: '<S1>/VeHTDR_e_AHH_ApplyRelease_Req' incorporates:
     *  Inport: '<Root>/VeHTDR_e_AHH_ApplyRelease_Req'
     */
    (void)Rte_Read_VeHTDR_e_AHH_ApplyRelease_Req_Value
        (&rtb_TmpSignalConversionAtVeHTDR_e_AHH_Ap);

    /* SignalConversion generated from: '<S1>/VePLTR_b_InFieldMode' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&rtb_TmpSignalConversionAtVePLTR_b_InFiel);

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S1>/VaOSMR_P_PShiftMaxLim' incorporates:
     *  Inport: '<Root>/VaOSMR_P_PShiftMaxLim'
     */
    (void)Rte_Read_VaOSMR_P_PShiftMaxLim_Value
        (rtb_TmpSignalConversionAtVaOSMR_P_PShift);

    /* SignalConversion generated from: '<S1>/VaOSMR_P_PShiftMinLim' incorporates:
     *  Inport: '<Root>/VaOSMR_P_PShiftMinLim'
     */
    (void)Rte_Read_VaOSMR_P_PShiftMinLim_Value
        (rtb_TmpSignalConversionAtVaOSMR_P_PShi_j);

    /* SignalConversion generated from: '<S1>/VeABCR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value
        (&rtb_TmpSignalConversionAtVeABCR_P_HV_Acc);

    /* SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&rtb_TmpSignalConversionAtVeENGR_T_EngCoo);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value
        (&rtb_TmpSignalConversionAtVeBPCR_T_BatMod);

    /* SignalConversion generated from: '<S1>/VeEOCR_r_ColdCtrlCostFact_Tact' incorporates:
     *  Inport: '<Root>/VeEOCR_r_ColdCtrlCostFact_Tact'
     */
    (void)Rte_Read_VeEOCR_r_ColdCtrlCostFact_Tact_Value
        (&rtb_TmpSignalConversionAtVeEOCR_r_ColdCt);

    /* SignalConversion generated from: '<S1>/VeHSCR_r_DonutSpaceCoefA2' incorporates:
     *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefA2'
     */
    (void)Rte_Read_VeHSCR_r_DonutSpaceCoefA2_Value
        (&rtb_TmpSignalConversionAtVeHSCR_r_DonutS);

    /* SignalConversion generated from: '<S1>/VeOSMR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeOSMR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeOSMR_P_HV_AccPwr_Value
        (&rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc);

    /* SignalConversion generated from: '<S1>/VeDMDR_i_DrvMdArbIdx' incorporates:
     *  Inport: '<Root>/VeDMDR_i_DrvMdArbIdx'
     */
    (void)Rte_Read_VeDMDR_i_DrvMdArbIdx_Value
        (&rtb_TmpSignalConversionAtVeDMDR_i_DrvMdA);

    /* SignalConversion generated from: '<S1>/VeOITR_P_OptCalcBattPwr' incorporates:
     *  Inport: '<Root>/VeOITR_P_OptCalcBattPwr'
     */
    (void)Rte_Read_VeOITR_P_OptCalcBattPwr_Value
        (&rtb_TmpSignalConversionAtVeOITR_P_OptCal);

    /* SignalConversion generated from: '<S1>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  Inport: '<Root>/VeTMDR_i_TrueTrrnMd'
     */
    (void)Rte_Read_VeTMDR_i_TrueTrrnMd_Value
        (&rtb_TmpSignalConversionAtVeTMDR_i_TrueTr);

    /* SignalConversion generated from: '<S1>/VeHVTR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeHVTR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value
        (&rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc);

    /* SignalConversion generated from: '<S1>/VeHSCR_r_DonutSpaceCoefB2' incorporates:
     *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefB2'
     */
    (void)Rte_Read_VeHSCR_r_DonutSpaceCoefB2_Value
        (&rtb_TmpSignalConversionAtVeHSCR_r_Donu_a);

    /* SignalConversion generated from: '<S1>/VeVTXR_e_PowerPanelMd' incorporates:
     *  Inport: '<Root>/VeVTXR_e_PowerPanelMd'
     */
    (void)Rte_Read_VeVTXR_e_PowerPanelMd_Value
        (&rtb_TmpSignalConversionAtVeVTXR_e_PowerP);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* Logic: '<S5>/Logical14' incorporates:
     *  Inport: '<S5>/PSA'
     *  Logic: '<S8>/Logical2'
     */
    tmpRead_6 = !tmpRead_6;

    /* Outputs for Atomic SubSystem: '<S5>/Accumulator Reset' */
    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S312>/Calib'
     *  Logic: '<S5>/Logical14'
     *  Logic: '<S5>/Logical16'
     *  Sum: '<S303>/Summation'
     *  UnitDelay: '<S303>/Unit Delay'
     */
    if (tmpRead_6 || rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S313>/Switch1' incorporates:
         *  Constant: '<S316>/Calib'
         *  Switch: '<S313>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* UnitDelay: '<S303>/Unit Delay' incorporates:
             *  Constant: '<S5>/Constant Value7'
             *  Switch: '<S313>/Switch1'
             */
            BACR_ac_DW.UnitDelay_DSTATE_my = 0.0F;
        }
        else if (KeBACR_b_ResetToEngRunTime)
        {
            /* Switch: '<S313>/Switch2' incorporates:
             *  DataStoreRead: '<S5>/Data Store Read'
             *  UnitDelay: '<S303>/Unit Delay'
             */
            BACR_ac_DW.UnitDelay_DSTATE_my =
                BACR_ac_DW.NeBACR_t_EngRunTimeInPlant;
        }
        else
        {
            /* UnitDelay: '<S303>/Unit Delay' incorporates:
             *  Constant: '<S5>/Constant Value3'
             *  Switch: '<S313>/Switch2'
             */
            BACR_ac_DW.UnitDelay_DSTATE_my = 0.0F;
        }

        /* End of Switch: '<S313>/Switch1' */
    }
    else
    {
        BACR_ac_DW.UnitDelay_DSTATE_my += HeBACR_t_dT;
    }

    /* End of Switch: '<S303>/Switch1' */
    /* End of Outputs for SubSystem: '<S5>/Accumulator Reset' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeOITR_M_OutTorqReqModTactMin' */
    (void)Rte_Read_VeOITR_M_OutTorqReqModTactMin_Value(&tmpRead_e);

    /* Inport: '<Root>/VeRGNR_M_DrvIntndTotBrkOutTrq' */
    (void)Rte_Read_VeRGNR_M_DrvIntndTotBrkOutTrq_Value(&tmpRead_c);

    /* Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd' */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&rtb_VariantMerge_For_Variant_Source_Vari);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* DataStoreWrite: '<S5>/Data Store Write' incorporates:
     *  UnitDelay: '<S303>/Unit Delay'
     */
    BACR_ac_DW.NeBACR_t_EngRunTimeInPlant = BACR_ac_DW.UnitDelay_DSTATE_my;

    /* Outputs for Atomic SubSystem: '<S5>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S308>/Switch1' incorporates:
     *  Inport: '<S5>/Trans_No_in'
     *  Lookup_n-D: '<S317>/Vector'
     *  Product: '<S308>/Multiplication'
     *  Sum: '<S308>/Subtraction'
     *  Sum: '<S308>/Summation'
     *  UnitDelay: '<S308>/Unit Delay'
     */
    VeBACI_n_No_Fltd = ((rtb_VariantMerge_For_Variant_Source_Vari -
                         VeBACI_n_No_Fltd) * look1_iflf_binlca_16a
                        (rtb_VariantMerge_For_Variant_Source_Vari, ((const
                           float32 *)&(KxBACR_k_SOCBlnc_NoBasedFltrCoeff[0])),
                         ((const float32 *)&(KtBACR_k_SOCBlnc_NoBasedFltrCoeff[0])),
                         8U)) + VeBACI_n_No_Fltd;

    /* End of Outputs for SubSystem: '<S5>/Digital Lowpass Reset Enabled' */

    /* Product: '<S5>/Product1' */
    rtb_Product1_k = rtb_TmpSignalConversionAtVeOSMR_M_OutTor *
        rtb_TmpSignalConversionAtVeVSDR_n_StratN;

    /* Outputs for Atomic SubSystem: '<S5>/Protected Division' */
    /* Switch: '<S319>/Switch1' incorporates:
     *  Constant: '<S319>/Constant Value'
     *  RelationalOperator: '<S319>/Not Equal'
     */
    if (rtb_Product1_k != 0.0F)
    {
        /* Switch: '<S319>/Switch1' incorporates:
         *  Constant: '<S5>/Constant Value17'
         *  Product: '<S319>/Division'
         */
        rtb_Product1_k /= 9549.29688F;
    }
    else
    {
        /* Switch: '<S319>/Switch1' incorporates:
         *  Constant: '<S319>/Constant Value4'
         *  Switch: '<S319>/Switch2'
         *  Switch: '<S319>/Switch3'
         */
        rtb_Product1_k = 0.0F;
    }

    /* End of Switch: '<S319>/Switch1' */
    /* End of Outputs for SubSystem: '<S5>/Protected Division' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeOITR_M_OutTorqReqModTactMax' */
    (void)Rte_Read_VeOITR_M_OutTorqReqModTactMax_Value(&rtb_Product_i);

    /* Inport: '<Root>/VeOSMR_P_PoMaxLinConstrn' */
    (void)Rte_Read_VeOSMR_P_PoMaxLinConstrn_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* Product: '<S5>/Product' incorporates:
     *  MinMax: '<S5>/MinMax2'
     */
    rtb_Product_i = fminf(rtb_TmpSignalConversionAtVeATRR_M_OutTrq,
                          rtb_Product_i) *
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

    /* Product: '<S5>/Product2' incorporates:
     *  MinMax: '<S5>/MinMax'
     *  Sum: '<S5>/Add'
     */
    rtb_TmpSignalConversionAtVeVSDR_n_PrimNo *= fmaxf
        (rtb_TmpSignalConversionAtVeATRR_M_OutTrq + tmpRead_c, tmpRead_e);

    /* Outputs for Atomic SubSystem: '<S5>/Protected Division1' */
    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S320>/Constant Value'
     *  RelationalOperator: '<S320>/Not Equal'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_PrimNo != 0.0F)
    {
        /* Gain: '<S324>/Gain' incorporates:
         *  Constant: '<S5>/Constant Value17'
         *  Product: '<S320>/Division'
         *  Switch: '<S320>/Switch1'
         */
        VaBACI_P_PredictedPo_kW[2] = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo /
            9549.29688F;
    }
    else
    {
        /* Gain: '<S324>/Gain' incorporates:
         *  Constant: '<S320>/Constant Value4'
         *  Switch: '<S320>/Switch1'
         *  Switch: '<S320>/Switch2'
         *  Switch: '<S320>/Switch3'
         */
        VaBACI_P_PredictedPo_kW[2] = 0.0F;
    }

    /* End of Switch: '<S320>/Switch1' */
    /* End of Outputs for SubSystem: '<S5>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S5>/Protected Division2' */
    /* Switch: '<S321>/Switch1' incorporates:
     *  Constant: '<S321>/Constant Value'
     *  RelationalOperator: '<S321>/Not Equal'
     */
    if (rtb_Product_i != 0.0F)
    {
        /* Gain: '<S324>/Gain' incorporates:
         *  Constant: '<S5>/Constant Value17'
         *  Product: '<S321>/Division'
         *  Switch: '<S321>/Switch1'
         */
        VaBACI_P_PredictedPo_kW[1] = rtb_Product_i / 9549.29688F;
    }
    else
    {
        /* Gain: '<S324>/Gain' incorporates:
         *  Constant: '<S321>/Constant Value4'
         *  Switch: '<S321>/Switch1'
         *  Switch: '<S321>/Switch2'
         *  Switch: '<S321>/Switch3'
         */
        VaBACI_P_PredictedPo_kW[1] = 0.0F;
    }

    /* End of Switch: '<S321>/Switch1' */
    /* End of Outputs for SubSystem: '<S5>/Protected Division2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePLTR_b_InPlantAllowCharge' */
    (void)Rte_Read_VePLTR_b_InPlantAllowCharge_Value((&(VeBACI_b_InPlntAllwChrg)));

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_5);

    /* Inport: '<Root>/VeESMR_Pct_CS_SOCSetPt' */
    (void)Rte_Read_VeESMR_Pct_CS_SOCSetPt_Value(&rtb_Vector_bs);

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead);

    /* Inport: '<Root>/VeEOCR_b_CatalystWarmupEnabled' */
    (void)Rte_Read_VeEOCR_b_CatalystWarmupEnabled_Value
        (&rtb_RelationalOperator_i);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* Gain: '<S323>/Gain' */
    VaBACI_M_To_PredImmed[0] = rtb_TmpSignalConversionAtVeOSMR_M_OutTor;
    VaBACI_M_To_PredImmed[1] = rtb_TmpSignalConversionAtVeATRR_M_OutTrq;

    /* Gain: '<S324>/Gain' incorporates:
     *  MinMax: '<S5>/MinMax1'
     */
    VaBACI_P_PredictedPo_kW[0] = fminf(rtb_Product1_k, tmpRead_f);

    /* RelationalOperator: '<S5>/Comparison8' incorporates:
     *  Constant: '<S307>/Constant'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */
    VeBACI_b_PluggedInChrg = (((uint32)tmpRead_5) ==
        CeOBCR_e_ChargingSts_Charging);

    /* Logic: '<S5>/Logical12' incorporates:
     *  Constant: '<S304>/Constant'
     *  Constant: '<S305>/Constant'
     *  RelationalOperator: '<S5>/Comparison10'
     *  RelationalOperator: '<S5>/Comparison9'
     */
    VeBACI_b_AHH_Apply = ((((uint32)rtb_TmpSignalConversionAtVeHTDR_e_AHH_Ap) ==
                           CeHTDR_e_AHH_Apply) || (((uint32)
                            rtb_TmpSignalConversionAtVeHTDR_e_AHH_Ap) ==
                           CeHTDR_e_AHH_EPB_Apply));

    /* Logic: '<S5>/Logical15' */
    VeBACI_b_InPlantMode = !rtb_TmpSignalConversionAtVePLTR_b_InFiel;

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S315>/Calib'
     */
    if (KeBACR_b_OvrrdInPlntAllwChrg)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S314>/Calib'
         *  Inport: '<Root>/VePLTR_b_InPlantAllowCharge'
         */
        VeBACI_b_InPlntAllwChrg = KeBACR_b_InPlntAllwChrgOvrrdVal;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S310>/Calib'
     *  Constant: '<S311>/Calib'
     */
    if (HeBACR_b_EOCRenableCat)
    {
        rtb_RelationalOperator_i = HeBACR_b_EOCRenableCatval;
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S5>/Switch1' */
    if (rtb_RelationalOperator_i)
    {
        /* Outputs for Function Call SubSystem: '<S1>/BACC_Controls' */
        /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
         *  Constant: '<S306>/Constant'
         */
        rtb_DataTypeConversion = CeTRGR_e_TransRangeDrive;

        /* End of Outputs for SubSystem: '<S1>/BACC_Controls' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/BACC_Controls' */
        /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
         *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
         */
        rtb_DataTypeConversion = (sint16)tmpRead;

        /* End of Outputs for SubSystem: '<S1>/BACC_Controls' */
    }

    /* End of Switch: '<S5>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* Switch: '<S10>/Switch2' */
    if (VeBACI_b_PluggedInChrg)
    {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Inport: '<Root>/VeOBCR_Pct_TargetSOC'
         */
        (void)Rte_Read_VeOBCR_Pct_TargetSOC_Value(&rtb_Switch1_cm);
    }
    else
    {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Lookup_n-D: '<S268>/Vector'
         *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
         */
        rtb_Switch1_cm = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeENGR_T_EngCoo, ((const float32 *)
              &(KxBACR_Pct_TargetSOC_PN[0])), ((const float32 *)
              &(KtBACR_Pct_TargetSOC_PN[0])), 4U);
    }

    /* End of Switch: '<S10>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeFWDR_e_Tcase_Stat' */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* Lookup_n-D: '<S267>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
     */
    rtb_TmpSignalConversionAtVeOSMR_M_OutTor = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeENGR_T_EngCoo, ((const float32 *)
          &(KxBACR_Pct_TargetSOC_D_Max[0])), ((const float32 *)
          &(KtBACR_Pct_TargetSOC_D_Max[0])), 4U);

    /* Logic: '<S8>/Logical21' incorporates:
     *  Constant: '<S225>/Calib'
     *  Constant: '<S226>/Calib'
     *  Constant: '<S227>/Calib'
     *  Constant: '<S228>/Calib'
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     *  DataTypeConversion: '<S8>/Data Type Conversion1'
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     *  Selector: '<S8>/Selector'
     *  Selector: '<S8>/Selector1'
     *  Selector: '<S8>/Selector2'
     *  Selector: '<S8>/Selector3'
     */
    VeBACC_b_CImode = ((((KaBACR_b_DrvMd_IsCImode
                          [(rtb_TmpSignalConversionAtVeDMDR_i_DrvMdA)]) ||
                         (KaBACR_b_TrnMd_IsCImode
                          [(rtb_TmpSignalConversionAtVeTMDR_i_TrueTr)])) ||
                        (KaBACR_b_PwrPnlMd_IsCImode
                         [(rtb_TmpSignalConversionAtVeVTXR_e_PowerP)])) ||
                       (KaBACR_b_TcaseStat_IsCImode[(tmpRead_b)]));

    /* Switch: '<S270>/Switch3' incorporates:
     *  Constant: '<S271>/Constant'
     *  RelationalOperator: '<S270>/Comparison4'
     *  Switch: '<S270>/Switch7'
     */
    if (CeVTXR_e_GeneratorMd == ((uint32)
            rtb_TmpSignalConversionAtVeVTXR_e_PowerP))
    {
        /* Switch: '<S270>/Switch3' incorporates:
         *  Constant: '<S279>/Calib'
         */
        rtb_Switch3_pr = KeBACR_i_PwrPnlGenMdStratidx;
    }
    else if (VeBACC_b_CImode)
    {
        /* Switch: '<S270>/Switch3' incorporates:
         *  Constant: '<S280>/Calib'
         *  Switch: '<S270>/Switch7'
         */
        rtb_Switch3_pr = KeBACR_i_SOCIncMdStratidx;
    }
    else
    {
        /* Switch: '<S270>/Switch3' incorporates:
         *  Constant: '<S277>/Calib'
         *  Selector: '<S270>/Selector12'
         *  Switch: '<S270>/Switch7'
         */
        rtb_Switch3_pr = KaBACR_i_DrvSelMdSOCStratSel[(10 * ((sint32)
            rtb_TmpSignalConversionAtVeDMDR_i_DrvMdA)) + ((sint32)
            rtb_TmpSignalConversionAtVeTMDR_i_TrueTr)];
    }

    /* End of Switch: '<S270>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeVTXR_Pct_HVBattTgtSOC' */
    (void)Rte_Read_VeVTXR_Pct_HVBattTgtSOC_Value(&rtb_MinMax3);

    /* Inport: '<Root>/VeTMDR_Pct_TargetSOC' */
    (void)Rte_Read_VeTMDR_Pct_TargetSOC_Value(&rtb_Switch12);

    /* Inport: '<Root>/VeDMDR_Pct_SOCTarget' */
    (void)Rte_Read_VeDMDR_Pct_SOCTarget_Value(&rtb_Sum2_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* MinMax: '<S10>/MinMax3' */
    rtb_MinMax3 = fmaxf(fmaxf(rtb_Sum2_e, rtb_Switch12), rtb_MinMax3);

    /* RelationalOperator: '<S297>/Relational Operator' incorporates:
     *  RelationalOperator: '<S270>/Comparison2'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel =
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > rtb_MinMax3);

    /* Switch: '<S270>/Switch12' */
    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S270>/Switch12' */
        rtb_Switch12 = rtb_MinMax3;
    }
    else
    {
        /* Switch: '<S270>/Switch12' incorporates:
         *  Constant: '<S278>/Calib'
         *  Selector: '<S270>/SelCals'
         *  Sum: '<S270>/Sum1'
         */
        rtb_Switch12 = KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) -
            1] + rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    }

    /* End of Switch: '<S270>/Switch12' */

    /* RelationalOperator: '<S298>/Relational Operator' incorporates:
     *  Constant: '<S274>/Calib'
     *  Logic: '<S270>/Logical1'
     *  MinMax: '<S270>/MinMax'
     *  RelationalOperator: '<S270>/Comparison1'
     *  Selector: '<S270>/Selector2'
     *  UnitDelay: '<S270>/Unit Delay2'
     */
    rtb_RelationalOperator_i = ((fminf(BACR_ac_DW.UnitDelay2_DSTATE, rtb_MinMax3)
        > rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B) && (KaBACR_b_EnblHldTgtSOC
        [((sint32)rtb_Switch3_pr) - 1]));

    /* Switch: '<S270>/Switch8' incorporates:
     *  MinMax: '<S270>/MinMax10'
     *  MinMax: '<S270>/MinMax11'
     *  UnitDelay: '<S270>/Unit Delay1'
     */
    if (rtb_RelationalOperator_i)
    {
        BACR_ac_DW.UnitDelay1_DSTATE = fminf(fmaxf(BACR_ac_DW.UnitDelay1_DSTATE,
            rtb_Switch12), rtb_MinMax3);
    }
    else
    {
        BACR_ac_DW.UnitDelay1_DSTATE = rtb_Switch12;
    }

    /* End of Switch: '<S270>/Switch8' */

    /* Switch: '<S270>/Switch13' */
    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S270>/Switch13' */
        rtb_Switch12 = rtb_MinMax3;
    }
    else
    {
        /* Switch: '<S270>/Switch13' incorporates:
         *  Constant: '<S278>/Calib'
         *  Selector: '<S270>/SelCals'
         *  Selector: '<S270>/Selector2'
         *  Sum: '<S270>/Sum2'
         */
        rtb_Switch12 = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B -
            KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) - 1];
    }

    /* End of Switch: '<S270>/Switch13' */

    /* Switch: '<S270>/Switch9' incorporates:
     *  MinMax: '<S270>/MinMax8'
     *  MinMax: '<S270>/MinMax9'
     *  UnitDelay: '<S270>/Unit Delay6'
     */
    if (rtb_RelationalOperator_i)
    {
        BACR_ac_DW.UnitDelay6_DSTATE = fminf(fmaxf(BACR_ac_DW.UnitDelay6_DSTATE,
            rtb_Switch12), rtb_MinMax3);
    }
    else
    {
        BACR_ac_DW.UnitDelay6_DSTATE = rtb_Switch12;
    }

    /* End of Switch: '<S270>/Switch9' */

    /* Switch: '<S273>/Switch1' incorporates:
     *  Constant: '<S276>/Calib'
     *  RelationalOperator: '<S282>/Relational Operator'
     *  Selector: '<S270>/Selector1'
     *  Selector: '<S270>/Selector2'
     *  Switch: '<S282>/Switch1'
     *  UnitDelay: '<S270>/Unit Delay1'
     */
    if (KaBACR_b_UseTargetSOCRaw[((sint32)rtb_Switch3_pr) - 1])
    {
        /* Switch: '<S273>/Switch1' */
        rtb_Switch12 = rtb_MinMax3;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S270>/Limiter4' */
        if (BACR_ac_DW.UnitDelay1_DSTATE < rtb_MinMax3)
        {
            /* Switch: '<S282>/Switch1' incorporates:
             *  UnitDelay: '<S270>/Unit Delay1'
             */
            rtb_Switch12 = BACR_ac_DW.UnitDelay1_DSTATE;
        }
        else
        {
            /* Switch: '<S282>/Switch1' */
            rtb_Switch12 = rtb_MinMax3;
        }

        /* Switch: '<S282>/Switch' incorporates:
         *  RelationalOperator: '<S282>/Relational Operator1'
         *  UnitDelay: '<S270>/Unit Delay6'
         */
        if (rtb_Switch12 <= BACR_ac_DW.UnitDelay6_DSTATE)
        {
            /* Switch: '<S273>/Switch1' */
            rtb_Switch12 = BACR_ac_DW.UnitDelay6_DSTATE;
        }

        /* End of Switch: '<S282>/Switch' */
        /* End of Outputs for SubSystem: '<S270>/Limiter4' */
    }

    /* End of Switch: '<S273>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S270>/GradientLimiter' */
    /* Sum: '<S272>/Sum2' incorporates:
     *  UnitDelay: '<S272>/Unit Delay'
     */
    rtb_Sum2_e = rtb_Switch12 - BACR_ac_DW.UnitDelay_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S272>/Limiter' */
    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S283>/Relational Operator'
     *  Selector: '<S270>/SelCals'
     */
    if (KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) + 2] < rtb_Sum2_e)
    {
        /* Switch: '<S263>/Switch1' */
        rtb_Sum2_e = KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) + 2];
    }

    /* End of Switch: '<S283>/Switch1' */

    /* RelationalOperator: '<S283>/Relational Operator1' incorporates:
     *  Constant: '<S278>/Calib'
     *  Selector: '<S270>/SelCals'
     *  Switch: '<S283>/Switch'
     */
    rtb_Switch12 = KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) + 5];

    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S283>/Relational Operator1'
     *  Selector: '<S270>/SelCals'
     */
    if (rtb_Sum2_e > rtb_Switch12)
    {
        rtb_Switch12 = rtb_Sum2_e;
    }

    /* End of Outputs for SubSystem: '<S272>/Limiter' */

    /* Sum: '<S272>/Sum3' incorporates:
     *  UnitDelay: '<S272>/Unit Delay'
     */
    BACR_ac_DW.UnitDelay_DSTATE_m += rtb_Switch12;

    /* End of Outputs for SubSystem: '<S270>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S270>/Limiter' */
    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S281>/Relational Operator'
     *  Selector: '<S270>/SelCals'
     *  UnitDelay: '<S272>/Unit Delay'
     */
    if (KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) + 11] <
            BACR_ac_DW.UnitDelay_DSTATE_m)
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) +
            11];
    }
    else
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = BACR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Switch: '<S281>/Switch' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S281>/Relational Operator1'
     *  Selector: '<S270>/SelCals'
     */
    if (rtb_Switch12 > KaBACR_r_DrvSelMdSOCStratCals[((sint32)rtb_Switch3_pr) +
            8])
    {
        /* Switch: '<S281>/Switch' */
        VeBACC_Pct_TargetSOCOfstBlnd = rtb_Switch12;
    }
    else
    {
        /* Switch: '<S281>/Switch' */
        VeBACC_Pct_TargetSOCOfstBlnd = KaBACR_r_DrvSelMdSOCStratCals[((sint32)
            rtb_Switch3_pr) + 8];
    }

    /* End of Switch: '<S281>/Switch' */
    /* End of Outputs for SubSystem: '<S270>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S10>/Limiter' */
    /* Switch: '<S269>/Switch1' incorporates:
     *  RelationalOperator: '<S269>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_M_OutTor < VeBACC_Pct_TargetSOCOfstBlnd)
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = rtb_TmpSignalConversionAtVeOSMR_M_OutTor;
    }
    else
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = VeBACC_Pct_TargetSOCOfstBlnd;
    }

    /* End of Switch: '<S269>/Switch1' */

    /* Switch: '<S269>/Switch' incorporates:
     *  Constant: '<S266>/Calib'
     *  RelationalOperator: '<S269>/Relational Operator1'
     */
    if (rtb_Switch12 <= KeBACR_Pct_TargetSOC_D_Min)
    {
        rtb_Switch12 = KeBACR_Pct_TargetSOC_D_Min;
    }

    /* End of Switch: '<S269>/Switch' */
    /* End of Outputs for SubSystem: '<S10>/Limiter' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* MinMax: '<S10>/MinMax1' incorporates:
     *  Gain: '<S322>/Gain'
     */
    VeBACC_Pct_TargetSOC_DriveRaw = fmaxf(rtb_Switch12, rtb_Vector_bs);

    /* MinMax: '<S10>/MinMax2' */
    VeBACC_Pct_TargetSOC_PN = fmaxf(rtb_Switch1_cm,
        VeBACC_Pct_TargetSOC_DriveRaw);

    /* Sum: '<S10>/Sum1' incorporates:
     *  Constant: '<S265>/Calib'
     */
    VeBACC_Pct_TargetSOC_Rev = VeBACC_Pct_TargetSOC_DriveRaw -
        KeBACR_Pct_TargetSOCOffset_Rev;

    /* Switch: '<S263>/Switch1' incorporates:
     *  Sum: '<S12>/Sum1'
     */
    rtb_Sum2_e = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B -
        VeBACC_Pct_TargetSOC_DriveRaw;

    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S12>/Constant Value17'
     *  Lookup_n-D: '<S284>/Vector'
     *  Switch: '<S263>/Switch1'
     */
    rtb_Switch12 = look2_iflf_binlca_16a(rtb_Sum2_e, 0.0F, ((const float32 *)
        &(KxBACR_P_CostFactSOC_PBatShift_Drive_Po[0])), ((const float32 *)
        &(KyBACR_P_CostFactSOC_PBatShift_Drive_Po[0])), ((const float32 *)
        &(KtBACR_P_CostFactSOC_PBatShift_Drive_Po[0])), BACR_ac_ConstP.pooled8,
        10U);

    /* Switch: '<S263>/Switch1' incorporates:
     *  Lookup_n-D: '<S285>/Vector'
     *  SignalConversion generated from: '<S1>/VeOSMR_P_HV_AccPwr'
     */
    rtb_Sum2_e = look2_iflf_binlca_16a(rtb_Sum2_e,
        rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc, ((const float32 *)
        &(KxBACR_P_dSOC_DCLoadPshiftOffset[0])), ((const float32 *)
        &(KyBACR_P_dSOC_DCLoadPshiftOffset[0])), ((const float32 *)
        &(KtBACR_P_dSOC_DCLoadPshiftOffset[0])),
        BACR_ac_ConstP.Vector_maxIndex_f, 7U);

    /* Sum: '<S12>/Sum2' */
    VeBACC_P_BattPwrShiftIdle = rtb_Switch12 - rtb_Sum2_e;

    /* Outputs for Atomic SubSystem: '<S4>/BACC_Battery_PowerShift' */
    /* RelationalOperator: '<S20>/Comparison8' incorporates:
     *  UnitDelay: '<S20>/Unit Delay1'
     */
    rtb_Comparison8 = (rtb_DataTypeConversion != BACR_ac_DW.UnitDelay1_DSTATE_a);

    /* If: '<S20>/If' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Inport: '<Root>/VeATRR_b_RaceStrtActv'
     *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefCa'
     */
    rtPrevAction = BACR_ac_DW.If_ActiveSubsystem;
    if ((rtb_DataTypeConversion == 3) || (rtb_DataTypeConversion == 1))
    {
        BACR_ac_DW.If_ActiveSubsystem = 0;
    }
    else if (rtb_DataTypeConversion == 2)
    {
        BACR_ac_DW.If_ActiveSubsystem = 1;
    }
    else
    {
        BACR_ac_DW.If_ActiveSubsystem = 2;
    }

    switch (BACR_ac_DW.If_ActiveSubsystem)
    {
      case 0:
        if (BACR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S20>/PARK_NEUTRAL' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* InitializeConditions for If: '<S20>/If' incorporates:
             *  Switch: '<S143>/Switch1'
             *  UnitDelay: '<S134>/Unit Delay'
             *  UnitDelay: '<S134>/Unit Delay1'
             *  UnitDelay: '<S134>/Unit Delay2'
             *  UnitDelay: '<S143>/Unit Delay'
             *  UnitDelay: '<S143>/Unit Delay1'
             *  UnitDelay: '<S143>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE_p = 0.0F;
            BACR_ac_DW.UnitDelay1_DSTATE_l = false;
            BACR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
            BACR_ac_DW.UnitDelay_DSTATE_af = 0.0F;
            BACR_ac_DW.UnitDelay1_DSTATE_d = 0.0F;
            BACR_ac_DW.UnitDelay2_DSTATE_p = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S20>/PARK_NEUTRAL' */

            /* SystemReset for IfAction SubSystem: '<S20>/PARK_NEUTRAL' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S134>/EdgeRising' */
            /* SystemReset for If: '<S20>/If' incorporates:
             *  UnitDelay: '<S153>/Unit Delay'
             *  UnitDelay: '<S154>/Unit Delay'
             *  UnitDelay: '<S155>/Unit Delay'
             *  UnitDelay: '<S156>/Unit Delay'
             */
            BACR_ac_DW.UnitDelay_DSTATE_hc = false;

            /* End of SystemReset for SubSystem: '<S134>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S134>/Digital Lowpass Reset Enabled' */
            BACR_ac_DW.UnitDelay_DSTATE_n = 0.0F;

            /* End of SystemReset for SubSystem: '<S134>/Digital Lowpass Reset Enabled' */

            /* SystemReset for Atomic SubSystem: '<S134>/Digital Lowpass Reset Enabled1' */
            BACR_ac_DW.UnitDelay_DSTATE_c = 0.0F;

            /* End of SystemReset for SubSystem: '<S134>/Digital Lowpass Reset Enabled1' */

            /* SystemReset for Atomic SubSystem: '<S134>/Digital Lowpass Reset Enabled2' */
            BACR_ac_DW.UnitDelay_DSTATE_la = 0.0F;

            /* End of SystemReset for SubSystem: '<S134>/Digital Lowpass Reset Enabled2' */
            /* End of SystemReset for SubSystem: '<S20>/PARK_NEUTRAL' */
        }

        /* Outputs for IfAction SubSystem: '<S20>/PARK_NEUTRAL' incorporates:
         *  ActionPort: '<S32>/Action Port'
         */
        /* Sum: '<S32>/Sum' */
        rtb_Sum_d = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B -
            VeBACC_Pct_TargetSOC_PN;

        /* Logic: '<S126>/Logical1' incorporates:
         *  Constant: '<S146>/Calib'
         *  RelationalOperator: '<S126>/Comparison1'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel = (((float32)
            Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()) <
            rtb_TmpSignalConversionAtVeEOCR_r_ColdCt);

        /* UnitDelay: '<S156>/Unit Delay' incorporates:
         *  Constant: '<S126>/Constant Value1'
         *  Constant: '<S145>/Calib'
         *  Logic: '<S126>/Logical6'
         *  RelationalOperator: '<S126>/Comparison2'
         */
        rtb_Comparison1_i = ((KeBACR_t_OptPbatPshftBlndTm > 0.0F) &&
                             rtb_TmpSignalConversionAtVePLTR_b_InFiel);

        /* Switch: '<S143>/Switch3' */
        if (rtb_Comparison1_i)
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Constant: '<S143>/Constant Value4'
             *  UnitDelay: '<S143>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE_p = 0.0F;
        }
        else
        {
            /* MinMax: '<S143>/Maximum' incorporates:
             *  Constant: '<S144>/Calib'
             *  Constant: '<S145>/Calib'
             */
            rtb_TmpSignalConversionAtVeHSCR_r_Donu_a = fmaxf(HeBACR_t_dT,
                KeBACR_t_OptPbatPshftBlndTm);

            /* Outputs for Atomic SubSystem: '<S143>/Protected Division' */
            /* Switch: '<S147>/Switch1' incorporates:
             *  Constant: '<S144>/Calib'
             *  Constant: '<S147>/Constant Value'
             *  Constant: '<S147>/Constant Value1'
             *  Constant: '<S147>/Constant Value2'
             *  Constant: '<S147>/Constant Value3'
             *  Logic: '<S147>/AND'
             *  RelationalOperator: '<S147>/Greater Than or Equal '
             *  RelationalOperator: '<S147>/Greater Than or Equal 1'
             *  RelationalOperator: '<S147>/Not Equal'
             *  RelationalOperator: '<S147>/Not Equal1'
             *  Switch: '<S147>/Switch2'
             *  Switch: '<S147>/Switch3'
             */
            if ((HeBACR_t_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeHSCR_r_Donu_a != 0.0F))
            {
                /* Switch: '<S147>/Switch1' incorporates:
                 *  Product: '<S147>/Division'
                 */
                rtb_TmpSignalConversionAtVeHSCR_r_Donu_a = HeBACR_t_dT /
                    rtb_TmpSignalConversionAtVeHSCR_r_Donu_a;
            }
            else if (HeBACR_t_dT > 0.0F)
            {
                /* Switch: '<S147>/Switch2' incorporates:
                 *  Constant: '<S147>/MAXFLOAT'
                 *  Switch: '<S147>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeHSCR_r_Donu_a = 3.402823466E+38F;
            }
            else if (HeBACR_t_dT < 0.0F)
            {
                /* Switch: '<S147>/Switch3' incorporates:
                 *  Constant: '<S147>/MINFLOAT'
                 *  Switch: '<S147>/Switch1'
                 *  Switch: '<S147>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeHSCR_r_Donu_a = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S147>/Switch1' incorporates:
                 *  Constant: '<S147>/Constant Value4'
                 *  Switch: '<S147>/Switch2'
                 *  Switch: '<S147>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeHSCR_r_Donu_a = 0.0F;
            }

            /* End of Switch: '<S147>/Switch1' */
            /* End of Outputs for SubSystem: '<S143>/Protected Division' */

            /* Switch: '<S143>/Switch1' incorporates:
             *  Constant: '<S143>/Constant Value2'
             *  Constant: '<S143>/Constant Value3'
             *  Logic: '<S143>/Logical'
             *  Logic: '<S143>/Logical2'
             *  MinMax: '<S143>/MinMax'
             *  Sum: '<S143>/Summation1'
             *  UnitDelay: '<S143>/Unit Delay1'
             *  UnitDelay: '<S143>/Unit Delay3'
             */
            if ((!BACR_ac_DW.UnitDelay1_DSTATE_l) || rtb_Comparison8)
            {
                BACR_ac_DW.UnitDelay3_DSTATE_p = 1.0F;
            }

            BACR_ac_DW.UnitDelay3_DSTATE_p = fminf
                (BACR_ac_DW.UnitDelay3_DSTATE_p +
                 rtb_TmpSignalConversionAtVeHSCR_r_Donu_a, 1.0F);
        }

        /* End of Switch: '<S143>/Switch3' */

        /* Logic: '<S126>/Logical1' incorporates:
         *  Constant: '<S143>/Constant Value1'
         *  Logic: '<S126>/Logical2'
         *  RelationalOperator: '<S143>/Comparison2'
         *  UnitDelay: '<S143>/Unit Delay3'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel =
            ((BACR_ac_DW.UnitDelay3_DSTATE_p < 1.0F) &&
             (!rtb_TmpSignalConversionAtVePLTR_b_InFiel));

        /* Switch: '<S125>/Switch1' */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* Switch: '<S125>/Switch1' incorporates:
             *  Constant: '<S142>/Calib'
             *  Lookup_n-D: '<S132>/Vector'
             *  Product: '<S125>/Product2'
             *  Sum: '<S32>/Sum'
             */
            rtb_TmpSignalConversionAtVeHSCR_r_Donu_a =
                KeBACR_r_AddlCostFactNegT_NiTiTrnstn * look1_iflf_binlca_16a
                (rtb_Sum_d, ((const float32 *)&(KxBACR_r_CostFactSOC_Neg_PN[0])),
                 ((const float32 *)&(KtBACR_r_CostFactSOC_Neg_PN[0])), 6U);
        }
        else
        {
            /* Switch: '<S125>/Switch1' incorporates:
             *  Lookup_n-D: '<S132>/Vector'
             *  Sum: '<S32>/Sum'
             */
            rtb_TmpSignalConversionAtVeHSCR_r_Donu_a = look1_iflf_binlca_16a
                (rtb_Sum_d, ((const float32 *)&(KxBACR_r_CostFactSOC_Neg_PN[0])),
                 ((const float32 *)&(KtBACR_r_CostFactSOC_Neg_PN[0])), 6U);
        }

        /* End of Switch: '<S125>/Switch1' */

        /* Switch: '<S143>/Switch2' incorporates:
         *  Gain: '<S126>/Gain'
         *  UnitDelay: '<S143>/Unit Delay'
         */
        if (rtb_Comparison1_i)
        {
            BACR_ac_DW.UnitDelay_DSTATE_p =
                -rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        }

        /* End of Switch: '<S143>/Switch2' */

        /* Lookup_n-D: '<S130>/Vector' incorporates:
         *  SignalConversion generated from: '<S131>/Vector'
         */
        VaBACC_P_NiTi_PwrShftPN_Offset[0] =
            rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
        VaBACC_P_NiTi_PwrShftPN_Offset[1] =
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

        /* Lookup_n-D: '<S131>/Vector' incorporates:
         *  Sum: '<S32>/Sum'
         */
        bpIndices[0U] = plook_u32ff_binca_16a(rtb_Sum_d, ((const float32 *)
            &(KxBACR_P_CostFactSOC_PBatShift_PN[0])), 6U,
            &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
        rtb_Sum2_jp[0U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        for (i = 0; i < 2; i++)
        {
            bpIndices[1U] = plook_u32ff_binca_16a
                (VaBACC_P_NiTi_PwrShftPN_Offset[(i)], ((const float32 *)
                  &(KyBACR_P_CostFactSOC_PBatShift_PN[0])), 6U,
                 &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
            rtb_Sum2_jp[1U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
            VaBACC_P_PBatShift_PN[(i)] = intrp2d_fu32fla_16a(bpIndices,
                rtb_Sum2_jp, ((const float32 *)
                              &(KtBACR_P_CostFactSOC_PBatShift_PN[0])), 7U,
                BACR_ac_ConstP.pooled10);
        }

        /* End of Lookup_n-D: '<S131>/Vector' */

        /* Lookup_n-D: '<S130>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
         */
        bpIndices_0[1U] = plook_u32ff_binca_16a
            (rtb_TmpSignalConversionAtVeTISR_n_InputS, ((const float32 *)
              &(KyBACR_P_CWU_PBatShift_PN[0])), 5U,
             &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
        Gain_l[1U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        for (i = 0; i < 2; i++)
        {
            bpIndices_0[0U] = plook_u32ff_binca_16a(VaBACI_M_To_PredImmed[(i)],
                ((const float32 *)&(KxBACR_P_CWU_PBatShift_PN[0])), 5U,
                &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
            Gain_l[0U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
            VaBACC_P_NiTi_PwrShftPN_Offset[(i)] = intrp2d_fu32fla_16a
                (bpIndices_0, Gain_l, ((const float32 *)
                  &(KtBACR_P_CWU_PBatShift_PN[0])), 6U, BACR_ac_ConstP.pooled11);
        }

        /* End of Lookup_n-D: '<S130>/Vector' */
        for (i = 0; i < 2; i++)
        {
            /* Product: '<S32>/Product1' */
            VaBACC_P_NiTi_PwrShftPN_Offset[(i)] =
                VaBACC_P_NiTi_PwrShftPN_Offset[(i)] *
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
        }

        /* Switch: '<S127>/Switch1' */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* Switch: '<S127>/Switch1' incorporates:
             *  Constant: '<S148>/Calib'
             *  Lookup_n-D: '<S133>/Vector'
             *  Product: '<S127>/Product2'
             *  Sum: '<S32>/Sum'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS =
                KeBACR_r_AddlCostFactPosT_NiTiTrnstn * look1_iflf_binlca_16a
                (rtb_Sum_d, ((const float32 *)&(KxBACR_r_CostFactSOC_Pos_PN[0])),
                 ((const float32 *)&(KtBACR_r_CostFactSOC_Pos_PN[0])), 6U);
        }
        else
        {
            /* Switch: '<S127>/Switch1' incorporates:
             *  Lookup_n-D: '<S133>/Vector'
             *  Sum: '<S32>/Sum'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = look1_iflf_binlca_16a
                (rtb_Sum_d, ((const float32 *)&(KxBACR_r_CostFactSOC_Pos_PN[0])),
                 ((const float32 *)&(KtBACR_r_CostFactSOC_Pos_PN[0])), 6U);
        }

        /* End of Switch: '<S127>/Switch1' */

        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S150>/Calib'
         *  Logic: '<S129>/Logical2'
         *  Switch: '<S129>/Switch'
         */
        if ((KeBACR_b_InPlntEnblPshiftDIDCtrl) && (VeBACI_b_InPlantMode))
        {
            /* Switch: '<S129>/Switch5' */
            if (VeBACI_b_InPlntAllwChrg)
            {
                /* Outputs for Function Call SubSystem: '<S1>/BACI_Input_Processing' */
                /* Switch: '<S129>/Switch5' incorporates:
                 *  Gain: '<S322>/Gain'
                 *  Lookup_n-D: '<S151>/Vector'
                 *  Sum: '<S32>/Sum1'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = look1_iflf_binlca_16a
                    (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B - rtb_Vector_bs,
                     ((const float32 *)&(KxBACR_P_InPlant_PBatPshift[0])), ((
                       const float32 *)&(KtBACR_P_InPlant_PBatPshift[0])), 6U);

                /* End of Outputs for SubSystem: '<S1>/BACI_Input_Processing' */
            }
            else
            {
                /* Switch: '<S129>/Switch5' incorporates:
                 *  Constant: '<S149>/Calib'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt =
                    KeBACR_P_InPlant_Pshift4ChrgDisAlw;
            }

            /* End of Switch: '<S129>/Switch5' */

            /* Switch: '<S129>/Switch1' */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_NiTi_PwrShftPNBlnd[(i)] =
                    rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
            }
        }
        else
        {
            if (VeBACI_b_InPlantMode)
            {
                /* Switch: '<S129>/Switch' incorporates:
                 *  DataStoreRead: '<S4>/Data Store Read'
                 *  Lookup_n-D: '<S152>/Vector'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = look1_iflf_binlca_16a
                    (BACR_ac_DW.NeBACR_t_EngRunTimeInPlant, ((const float32 *)
                      &(KxBACR_r_InPlant_PBatPshift_Mult_PN[0])), ((const
                       float32 *)&(KtBACR_r_InPlant_PBatPshift_Mult_PN[0])), 4U);
            }
            else
            {
                /* Switch: '<S129>/Switch' incorporates:
                 *  Constant: '<S129>/Constant Value'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = 1.0F;
            }

            for (i = 0; i < 2; i++)
            {
                /* Sum: '<S32>/Sum2' */
                rtb_Sum2_jp[i] = VaBACC_P_PBatShift_PN[(i)] +
                    VaBACC_P_NiTi_PwrShftPN_Offset[(i)];
            }

            /* Switch: '<S129>/Switch1' incorporates:
             *  Constant: '<S143>/Constant Value'
             *  Product: '<S129>/Product'
             *  Product: '<S143>/Multiplication'
             *  Product: '<S143>/Multiplication3'
             *  Sum: '<S143>/Subtraction'
             *  Sum: '<S143>/Summation'
             *  UnitDelay: '<S143>/Unit Delay'
             *  UnitDelay: '<S143>/Unit Delay3'
             */
            VaBACC_P_NiTi_PwrShftPNBlnd[0] =
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt * rtb_Sum2_jp[0];
            VaBACC_P_NiTi_PwrShftPNBlnd[1] = (((1.0F -
                BACR_ac_DW.UnitDelay3_DSTATE_p) * BACR_ac_DW.UnitDelay_DSTATE_p)
                + (BACR_ac_DW.UnitDelay3_DSTATE_p * rtb_Sum2_jp[1])) *
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
        }

        /* End of Switch: '<S129>/Switch1' */

        /* Logic: '<S134>/Logical1' incorporates:
         *  Constant: '<S157>/Calib'
         *  Logic: '<S134>/Logical2'
         */
        VeBACC_b_PlugInPshift_Actv = (((KeBACR_b_EnblPlugInPshift) &&
            (VeBACI_b_PluggedInChrg)) && (!VeBACI_b_InPlantMode));

        /* Merge: '<S20>/Merge4' incorporates:
         *  Gain: '<S138>/Gain'
         *  Logic: '<S32>/Logical1'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel = ((VeBACC_b_PlugInPshift_Actv)
            || rtb_TmpSignalConversionAtVePLTR_b_InFiel);

        /* Outputs for Atomic SubSystem: '<S134>/EdgeRising' */
        /* Logic: '<S156>/AND' incorporates:
         *  Logic: '<S156>/OR1'
         *  UnitDelay: '<S156>/Unit Delay'
         */
        rtb_Comparison8 = ((VeBACC_b_PlugInPshift_Actv) &&
                           (!BACR_ac_DW.UnitDelay_DSTATE_hc));

        /* Update for UnitDelay: '<S156>/Unit Delay' */
        BACR_ac_DW.UnitDelay_DSTATE_hc = VeBACC_b_PlugInPshift_Actv;

        /* End of Outputs for SubSystem: '<S134>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S134>/Digital Lowpass Reset Enabled1' */
        /* Outputs for Atomic SubSystem: '<S134>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S153>/Switch1' incorporates:
         *  Switch: '<S154>/Switch1'
         */
        if (rtb_Comparison8)
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  UnitDelay: '<S134>/Unit Delay'
             */
            VeBACC_P_PlugInPshift_Stgc = BACR_ac_DW.UnitDelay_DSTATE_af;

            /* Switch: '<S154>/Switch1' incorporates:
             *  UnitDelay: '<S134>/Unit Delay1'
             */
            VeBACC_P_PlugInPshift_Tact = BACR_ac_DW.UnitDelay1_DSTATE_d;
        }
        else
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S134>/Constant Value'
             *  Constant: '<S159>/Calib'
             *  MinMax: '<S134>/MinMax1'
             *  Product: '<S153>/Multiplication'
             *  Sum: '<S134>/Sum1'
             *  Sum: '<S153>/Subtraction'
             *  Sum: '<S153>/Summation'
             *  UnitDelay: '<S153>/Unit Delay'
             */
            VeBACC_P_PlugInPshift_Stgc = ((fmaxf
                (rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc -
                 rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc, 0.0F) -
                BACR_ac_DW.UnitDelay_DSTATE_n) *
                KeBACR_k_PlugInPshiftStgc_FilterCoef) +
                BACR_ac_DW.UnitDelay_DSTATE_n;

            /* Switch: '<S154>/Switch1' incorporates:
             *  Constant: '<S134>/Constant Value1'
             *  Constant: '<S160>/Calib'
             *  MinMax: '<S134>/MinMax2'
             *  Product: '<S154>/Multiplication'
             *  Sum: '<S134>/Sum2'
             *  Sum: '<S154>/Subtraction'
             *  Sum: '<S154>/Summation'
             *  UnitDelay: '<S154>/Unit Delay'
             */
            VeBACC_P_PlugInPshift_Tact = ((fmaxf
                (rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc -
                 rtb_TmpSignalConversionAtVeABCR_P_HV_Acc, 0.0F) -
                BACR_ac_DW.UnitDelay_DSTATE_c) *
                KeBACR_k_PlugInPshiftTact_FilterCoef) +
                BACR_ac_DW.UnitDelay_DSTATE_c;
        }

        /* End of Switch: '<S153>/Switch1' */
        /* End of Outputs for SubSystem: '<S134>/Digital Lowpass Reset Enabled1' */

        /* Update for UnitDelay: '<S153>/Unit Delay' */
        BACR_ac_DW.UnitDelay_DSTATE_n = VeBACC_P_PlugInPshift_Stgc;

        /* End of Outputs for SubSystem: '<S134>/Digital Lowpass Reset Enabled' */

        /* Outputs for Atomic SubSystem: '<S134>/Digital Lowpass Reset Enabled1' */
        /* Update for UnitDelay: '<S154>/Unit Delay' */
        BACR_ac_DW.UnitDelay_DSTATE_c = VeBACC_P_PlugInPshift_Tact;

        /* End of Outputs for SubSystem: '<S134>/Digital Lowpass Reset Enabled1' */

        /* Outputs for Atomic SubSystem: '<S134>/Digital Lowpass Reset Enabled2' */
        /* Switch: '<S155>/Switch1' */
        if (rtb_Comparison8)
        {
            /* Switch: '<S155>/Switch1' incorporates:
             *  UnitDelay: '<S134>/Unit Delay2'
             */
            VeBACC_P_PlugInPshift_Idle = BACR_ac_DW.UnitDelay2_DSTATE_p;
        }
        else
        {
            /* Switch: '<S155>/Switch1' incorporates:
             *  Constant: '<S134>/Constant Value2'
             *  Constant: '<S158>/Calib'
             *  MinMax: '<S134>/MinMax3'
             *  Product: '<S155>/Multiplication'
             *  Sum: '<S134>/Sum3'
             *  Sum: '<S155>/Subtraction'
             *  Sum: '<S155>/Summation'
             *  UnitDelay: '<S155>/Unit Delay'
             */
            VeBACC_P_PlugInPshift_Idle = ((fmaxf
                (rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc -
                 rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc, 0.0F) -
                BACR_ac_DW.UnitDelay_DSTATE_la) *
                KeBACR_k_PlugInPshiftIdle_FilterCoef) +
                BACR_ac_DW.UnitDelay_DSTATE_la;
        }

        /* End of Switch: '<S155>/Switch1' */

        /* Update for UnitDelay: '<S155>/Unit Delay' */
        BACR_ac_DW.UnitDelay_DSTATE_la = VeBACC_P_PlugInPshift_Idle;

        /* End of Outputs for SubSystem: '<S134>/Digital Lowpass Reset Enabled2' */

        /* Switch: '<S134>/Switch' incorporates:
         *  Switch: '<S134>/Switch2'
         *  UnitDelay: '<S134>/Unit Delay'
         *  UnitDelay: '<S134>/Unit Delay1'
         */
        if (VeBACC_b_PlugInPshift_Actv)
        {
            BACR_ac_DW.UnitDelay_DSTATE_af = VeBACC_P_PlugInPshift_Stgc;
            BACR_ac_DW.UnitDelay1_DSTATE_d = VeBACC_P_PlugInPshift_Tact;
        }
        else
        {
            BACR_ac_DW.UnitDelay_DSTATE_af = VaBACC_P_NiTi_PwrShftPNBlnd[0];
            BACR_ac_DW.UnitDelay1_DSTATE_d = VaBACC_P_NiTi_PwrShftPNBlnd[1];
        }

        /* End of Switch: '<S134>/Switch' */

        /* Gain: '<S161>/Gain' incorporates:
         *  UnitDelay: '<S134>/Unit Delay'
         */
        BACR_ac_B.Merge1[0] = BACR_ac_DW.UnitDelay_DSTATE_af;

        /* Gain: '<S162>/Gain' incorporates:
         *  UnitDelay: '<S134>/Unit Delay1'
         */
        BACR_ac_B.Merge1[1] = BACR_ac_DW.UnitDelay1_DSTATE_d;

        /* Switch: '<S134>/Switch3' incorporates:
         *  UnitDelay: '<S134>/Unit Delay2'
         */
        if (VeBACC_b_PlugInPshift_Actv)
        {
            BACR_ac_DW.UnitDelay2_DSTATE_p = VeBACC_P_PlugInPshift_Idle;
        }
        else
        {
            BACR_ac_DW.UnitDelay2_DSTATE_p = VeBACC_P_BattPwrShiftIdle;
        }

        /* End of Switch: '<S134>/Switch3' */

        /* Merge: '<S20>/Merge5' incorporates:
         *  Gain: '<S163>/Gain'
         *  UnitDelay: '<S134>/Unit Delay2'
         */
        VeBACC_P_BattPwrShiftIdle = BACR_ac_DW.UnitDelay2_DSTATE_p;

        /* Merge: '<S20>/Merge6' incorporates:
         *  Gain: '<S135>/Gain'
         */
        rtb_Comparison8 = VeBACC_b_PlugInPshift_Actv;

        /* Gain: '<S136>/Gain' */
        BACR_ac_B.Merge2[1] = rtb_TmpSignalConversionAtVeTISR_n_InputS;

        /* Gain: '<S137>/Gain' */
        BACR_ac_B.Merge3[1] = rtb_TmpSignalConversionAtVeHSCR_r_Donu_a;

        /* Gain: '<S140>/Gain' */
        BACR_ac_B.Merge2[0] = rtb_TmpSignalConversionAtVeTISR_n_InputS;

        /* Gain: '<S141>/Gain' */
        BACR_ac_B.Merge3[0] = rtb_TmpSignalConversionAtVeHSCR_r_Donu_a;

        /* Update for UnitDelay: '<S143>/Unit Delay1' incorporates:
         *  Constant: '<S143>/TRUE Constant'
         */
        BACR_ac_DW.UnitDelay1_DSTATE_l = true;

        /* End of Outputs for SubSystem: '<S20>/PARK_NEUTRAL' */
        break;

      case 1:
        if (BACR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S20>/Reverse' incorporates:
             *  ActionPort: '<S33>/Action Port'
             */
            /* InitializeConditions for If: '<S20>/If' incorporates:
             *  Switch: '<S181>/Switch1'
             *  UnitDelay: '<S181>/Unit Delay'
             *  UnitDelay: '<S181>/Unit Delay1'
             *  UnitDelay: '<S181>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE_h = 0.0F;
            BACR_ac_DW.UnitDelay1_DSTATE_k = false;
            BACR_ac_DW.UnitDelay_DSTATE_o = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S20>/Reverse' */
        }

        /* Outputs for IfAction SubSystem: '<S20>/Reverse' incorporates:
         *  ActionPort: '<S33>/Action Port'
         */
        /* Sum: '<S33>/Sum' */
        rtb_TmpSignalConversionAtVeHSCR_r_Donu_a =
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B - VeBACC_Pct_TargetSOC_Rev;

        /* Logic: '<S166>/Logical1' incorporates:
         *  Constant: '<S184>/Calib'
         *  RelationalOperator: '<S166>/Comparison1'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel = (((float32)
            Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin()) <
            rtb_TmpSignalConversionAtVeEOCR_r_ColdCt);

        /* Logic: '<S166>/Logical6' incorporates:
         *  Constant: '<S166>/Constant Value1'
         *  Constant: '<S183>/Calib'
         *  RelationalOperator: '<S166>/Comparison2'
         */
        rtb_Comparison1_i = ((KeBACR_t_OptPbatPshftBlndTm > 0.0F) &&
                             rtb_TmpSignalConversionAtVePLTR_b_InFiel);

        /* Switch: '<S181>/Switch3' */
        if (rtb_Comparison1_i)
        {
            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S181>/Constant Value4'
             *  UnitDelay: '<S181>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE_h = 0.0F;
        }
        else
        {
            /* MinMax: '<S181>/Maximum' incorporates:
             *  Constant: '<S182>/Calib'
             *  Constant: '<S183>/Calib'
             */
            rtb_Sum_d = fmaxf(HeBACR_t_dT, KeBACR_t_OptPbatPshftBlndTm);

            /* Outputs for Atomic SubSystem: '<S181>/Protected Division' */
            /* Switch: '<S185>/Switch1' incorporates:
             *  Constant: '<S182>/Calib'
             *  Constant: '<S185>/Constant Value'
             *  Constant: '<S185>/Constant Value1'
             *  Constant: '<S185>/Constant Value2'
             *  Constant: '<S185>/Constant Value3'
             *  Logic: '<S185>/AND'
             *  RelationalOperator: '<S185>/Greater Than or Equal '
             *  RelationalOperator: '<S185>/Greater Than or Equal 1'
             *  RelationalOperator: '<S185>/Not Equal'
             *  RelationalOperator: '<S185>/Not Equal1'
             *  Switch: '<S185>/Switch2'
             *  Switch: '<S185>/Switch3'
             */
            if ((HeBACR_t_dT != 0.0F) && (rtb_Sum_d != 0.0F))
            {
                /* Switch: '<S185>/Switch1' incorporates:
                 *  Product: '<S185>/Division'
                 */
                rtb_Sum_d = HeBACR_t_dT / rtb_Sum_d;
            }
            else if (HeBACR_t_dT > 0.0F)
            {
                /* Switch: '<S185>/Switch2' incorporates:
                 *  Constant: '<S185>/MAXFLOAT'
                 *  Switch: '<S185>/Switch1'
                 */
                rtb_Sum_d = 3.402823466E+38F;
            }
            else if (HeBACR_t_dT < 0.0F)
            {
                /* Switch: '<S185>/Switch3' incorporates:
                 *  Constant: '<S185>/MINFLOAT'
                 *  Switch: '<S185>/Switch1'
                 *  Switch: '<S185>/Switch2'
                 */
                rtb_Sum_d = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S185>/Switch1' incorporates:
                 *  Constant: '<S185>/Constant Value4'
                 *  Switch: '<S185>/Switch2'
                 *  Switch: '<S185>/Switch3'
                 */
                rtb_Sum_d = 0.0F;
            }

            /* End of Switch: '<S185>/Switch1' */
            /* End of Outputs for SubSystem: '<S181>/Protected Division' */

            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S181>/Constant Value2'
             *  Constant: '<S181>/Constant Value3'
             *  Logic: '<S181>/Logical'
             *  Logic: '<S181>/Logical2'
             *  MinMax: '<S181>/MinMax'
             *  Sum: '<S181>/Summation1'
             *  UnitDelay: '<S181>/Unit Delay1'
             *  UnitDelay: '<S181>/Unit Delay3'
             */
            if ((!BACR_ac_DW.UnitDelay1_DSTATE_k) || rtb_Comparison8)
            {
                BACR_ac_DW.UnitDelay3_DSTATE_h = 1.0F;
            }

            BACR_ac_DW.UnitDelay3_DSTATE_h = fminf
                (BACR_ac_DW.UnitDelay3_DSTATE_h + rtb_Sum_d, 1.0F);
        }

        /* End of Switch: '<S181>/Switch3' */

        /* Logic: '<S166>/Logical1' incorporates:
         *  Constant: '<S181>/Constant Value1'
         *  Logic: '<S166>/Logical2'
         *  RelationalOperator: '<S181>/Comparison2'
         *  UnitDelay: '<S181>/Unit Delay3'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel =
            ((BACR_ac_DW.UnitDelay3_DSTATE_h < 1.0F) &&
             (!rtb_TmpSignalConversionAtVePLTR_b_InFiel));

        /* Switch: '<S164>/Switch1' incorporates:
         *  Switch: '<S165>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* Switch: '<S164>/Switch1' incorporates:
             *  Constant: '<S179>/Calib'
             *  Lookup_n-D: '<S171>/Vector'
             *  Product: '<S164>/Product2'
             *  Sum: '<S33>/Sum'
             */
            rtb_Sum_d = KeBACR_r_AddlCostFactNegT_NiTiTrnstn *
                look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeHSCR_r_Donu_a,
                ((const float32 *)&(KxBACR_r_CostFactSOC_Neg_Rev[0])), ((const
                float32 *)&(KtBACR_r_CostFactSOC_Neg_Rev[0])), 6U);

            /* Switch: '<S165>/Switch1' incorporates:
             *  Constant: '<S180>/Calib'
             *  Lookup_n-D: '<S172>/Vector'
             *  Product: '<S165>/Product2'
             *  Sum: '<S33>/Sum'
             */
            rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc =
                KeBACR_r_AddlCostFactPosT_NiTiTrnstn * look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeHSCR_r_Donu_a, ((const float32 *)
                  &(KxBACR_r_CostFactSOC_Pos_Rev[0])), ((const float32 *)
                  &(KtBACR_r_CostFactSOC_Pos_Rev[0])), 6U);
        }
        else
        {
            /* Switch: '<S164>/Switch1' incorporates:
             *  Lookup_n-D: '<S171>/Vector'
             *  Sum: '<S33>/Sum'
             */
            rtb_Sum_d = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeHSCR_r_Donu_a, ((const float32 *)
                  &(KxBACR_r_CostFactSOC_Neg_Rev[0])), ((const float32 *)
                  &(KtBACR_r_CostFactSOC_Neg_Rev[0])), 6U);

            /* Switch: '<S165>/Switch1' incorporates:
             *  Lookup_n-D: '<S172>/Vector'
             *  Sum: '<S33>/Sum'
             */
            rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeHSCR_r_Donu_a, ((const float32 *)
                  &(KxBACR_r_CostFactSOC_Pos_Rev[0])), ((const float32 *)
                  &(KtBACR_r_CostFactSOC_Pos_Rev[0])), 6U);
        }

        /* End of Switch: '<S164>/Switch1' */

        /* Switch: '<S181>/Switch2' incorporates:
         *  Gain: '<S166>/Gain'
         *  UnitDelay: '<S181>/Unit Delay'
         */
        if (rtb_Comparison1_i)
        {
            BACR_ac_DW.UnitDelay_DSTATE_o =
                -rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        }

        /* End of Switch: '<S181>/Switch2' */

        /* Lookup_n-D: '<S169>/Vector' incorporates:
         *  SignalConversion generated from: '<S170>/Vector'
         */
        VaBACC_P_NiTi_PwrShftRev_Offset[0] =
            rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
        VaBACC_P_NiTi_PwrShftRev_Offset[1] =
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

        /* Lookup_n-D: '<S170>/Vector' incorporates:
         *  Sum: '<S33>/Sum'
         */
        bpIndices[0U] = plook_u32ff_binca_16a
            (rtb_TmpSignalConversionAtVeHSCR_r_Donu_a, ((const float32 *)
              &(KxBACR_P_CostFactSOC_PBatShift_Rev[0])), 6U,
             &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
        rtb_Sum2_jp[0U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        for (i = 0; i < 2; i++)
        {
            bpIndices[1U] = plook_u32ff_binca_16a
                (VaBACC_P_NiTi_PwrShftRev_Offset[(i)], ((const float32 *)
                  &(KyBACR_P_CostFactSOC_PBatShift_Rev[0])), 6U,
                 &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
            rtb_Sum2_jp[1U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
            VaBACC_P_PBatShift_Rev[(i)] = intrp2d_fu32fla_16a(bpIndices,
                rtb_Sum2_jp, ((const float32 *)
                              &(KtBACR_P_CostFactSOC_PBatShift_Rev[0])), 7U,
                BACR_ac_ConstP.pooled10);
        }

        /* End of Lookup_n-D: '<S170>/Vector' */

        /* Lookup_n-D: '<S169>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
         */
        bpIndices_0[1U] = plook_u32ff_binca_16a
            (rtb_TmpSignalConversionAtVeTISR_n_InputS, ((const float32 *)
              &(KyBACR_P_CWU_PBatShift_Rev[0])), 5U,
             &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
        Gain_l[1U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        for (i = 0; i < 2; i++)
        {
            bpIndices_0[0U] = plook_u32ff_binca_16a(VaBACI_M_To_PredImmed[(i)],
                ((const float32 *)&(KxBACR_P_CWU_PBatShift_Rev[0])), 5U,
                &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
            Gain_l[0U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
            VaBACC_P_NiTi_PwrShftRev_Offset[(i)] = intrp2d_fu32fla_16a
                (bpIndices_0, Gain_l, ((const float32 *)
                  &(KtBACR_P_CWU_PBatShift_Rev[0])), 6U, BACR_ac_ConstP.pooled11);
        }

        /* End of Lookup_n-D: '<S169>/Vector' */
        for (i = 0; i < 2; i++)
        {
            /* Product: '<S33>/Product1' */
            VaBACC_P_NiTi_PwrShftRev_Offset[(i)] =
                VaBACC_P_NiTi_PwrShftRev_Offset[(i)] *
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
        }

        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S187>/Calib'
         *  Logic: '<S168>/Logical2'
         *  Switch: '<S168>/Switch'
         */
        if ((KeBACR_b_InPlntEnblPshiftDIDCtrl) && (VeBACI_b_InPlantMode))
        {
            /* Switch: '<S168>/Switch5' */
            if (VeBACI_b_InPlntAllwChrg)
            {
                /* Outputs for Function Call SubSystem: '<S1>/BACI_Input_Processing' */
                /* Switch: '<S168>/Switch5' incorporates:
                 *  Gain: '<S322>/Gain'
                 *  Lookup_n-D: '<S188>/Vector'
                 *  Sum: '<S33>/Sum1'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS = look1_iflf_binlca_16a
                    (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B - rtb_Vector_bs,
                     ((const float32 *)&(KxBACR_P_InPlant_PBatPshift[0])), ((
                       const float32 *)&(KtBACR_P_InPlant_PBatPshift[0])), 6U);

                /* End of Outputs for SubSystem: '<S1>/BACI_Input_Processing' */
            }
            else
            {
                /* Switch: '<S168>/Switch5' incorporates:
                 *  Constant: '<S186>/Calib'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS =
                    KeBACR_P_InPlant_Pshift4ChrgDisAlw;
            }

            /* End of Switch: '<S168>/Switch5' */

            /* Switch: '<S168>/Switch1' */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_NiTi_PwrShftRevBlnd[(i)] =
                    rtb_TmpSignalConversionAtVeTISR_n_InputS;
            }
        }
        else
        {
            if (VeBACI_b_InPlantMode)
            {
                /* Switch: '<S168>/Switch' incorporates:
                 *  DataStoreRead: '<S4>/Data Store Read'
                 *  Lookup_n-D: '<S189>/Vector'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS = look1_iflf_binlca_16a
                    (BACR_ac_DW.NeBACR_t_EngRunTimeInPlant, ((const float32 *)
                      &(KxBACR_r_InPlant_PBatPshift_Mult_Rev[0])), ((const
                       float32 *)&(KtBACR_r_InPlant_PBatPshift_Mult_Rev[0])), 4U);
            }
            else
            {
                /* Switch: '<S168>/Switch' incorporates:
                 *  Constant: '<S168>/Constant Value'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;
            }

            for (i = 0; i < 2; i++)
            {
                /* Sum: '<S33>/Sum2' */
                rtb_Sum2_jp[i] = VaBACC_P_PBatShift_Rev[(i)] +
                    VaBACC_P_NiTi_PwrShftRev_Offset[(i)];
            }

            /* Switch: '<S168>/Switch1' incorporates:
             *  Constant: '<S181>/Constant Value'
             *  Product: '<S168>/Product'
             *  Product: '<S181>/Multiplication'
             *  Product: '<S181>/Multiplication3'
             *  Sum: '<S181>/Subtraction'
             *  Sum: '<S181>/Summation'
             *  UnitDelay: '<S181>/Unit Delay'
             *  UnitDelay: '<S181>/Unit Delay3'
             */
            VaBACC_P_NiTi_PwrShftRevBlnd[0] =
                rtb_TmpSignalConversionAtVeTISR_n_InputS * rtb_Sum2_jp[0];
            VaBACC_P_NiTi_PwrShftRevBlnd[1] = (((1.0F -
                BACR_ac_DW.UnitDelay3_DSTATE_h) * BACR_ac_DW.UnitDelay_DSTATE_o)
                + (BACR_ac_DW.UnitDelay3_DSTATE_h * rtb_Sum2_jp[1])) *
                rtb_TmpSignalConversionAtVeTISR_n_InputS;
        }

        /* End of Switch: '<S168>/Switch1' */

        /* Gain: '<S173>/Gain' */
        BACR_ac_B.Merge2[1] = rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc;

        /* Gain: '<S174>/Gain' */
        BACR_ac_B.Merge3[1] = rtb_Sum_d;
        for (i = 0; i < 2; i++)
        {
            /* Merge: '<S20>/Merge1' incorporates:
             *  Gain: '<S176>/Gain'
             */
            BACR_ac_B.Merge1[i] = VaBACC_P_NiTi_PwrShftRevBlnd[(i)];
        }

        /* Gain: '<S177>/Gain' */
        BACR_ac_B.Merge2[0] = rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc;

        /* Gain: '<S178>/Gain' */
        BACR_ac_B.Merge3[0] = rtb_Sum_d;

        /* Merge: '<S20>/Merge6' incorporates:
         *  Constant: '<S33>/FALSE Constant3'
         *  SignalConversion generated from: '<S33>/Pshift_PlugIn'
         */
        rtb_Comparison8 = false;

        /* Update for UnitDelay: '<S181>/Unit Delay1' incorporates:
         *  Constant: '<S181>/TRUE Constant'
         */
        BACR_ac_DW.UnitDelay1_DSTATE_k = true;

        /* End of Outputs for SubSystem: '<S20>/Reverse' */
        break;

      default:
        if (BACR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S20>/DRIVE' incorporates:
             *  ActionPort: '<S28>/Action Port'
             */
            /* InitializeConditions for If: '<S20>/If' incorporates:
             *  Switch: '<S110>/Switch1'
             *  Switch: '<S66>/Switch1'
             *  UnitDelay: '<S110>/Unit Delay1'
             *  UnitDelay: '<S110>/Unit Delay3'
             *  UnitDelay: '<S66>/Unit Delay'
             *  UnitDelay: '<S66>/Unit Delay1'
             *  UnitDelay: '<S66>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE_a = 0.0F;
            BACR_ac_DW.UnitDelay1_DSTATE_f = false;
            BACR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
            for (i = 0; i < 2; i++)
            {
                /* InitializeConditions for UnitDelay: '<S50>/Unit Delay' */
                BACR_ac_DW.UnitDelay_DSTATE_b[i] = 0.0F;

                /* InitializeConditions for UnitDelay: '<S110>/Unit Delay' */
                BACR_ac_DW.UnitDelay_DSTATE_h[i] = 0.0F;
            }

            BACR_ac_DW.UnitDelay3_DSTATE_aa = 0.0F;
            BACR_ac_DW.UnitDelay1_DSTATE_ac = false;

            /* End of InitializeConditions for SubSystem: '<S20>/DRIVE' */

            /* SystemReset for IfAction SubSystem: '<S20>/DRIVE' incorporates:
             *  ActionPort: '<S28>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S50>/Signal Latch On With Reset' */
            /* SystemReset for If: '<S20>/If' incorporates:
             *  UnitDelay: '<S111>/Unit Delay'
             *  UnitDelay: '<S117>/Unit Delay'
             *  UnitDelay: '<S41>/Unit Delay'
             *  UnitDelay: '<S42>/Unit Delay'
             *  UnitDelay: '<S71>/Unit Delay'
             */
            BACR_ac_DW.UnitDelay_DSTATE_ek = false;

            /* End of SystemReset for SubSystem: '<S50>/Signal Latch On With Reset' */

            /* SystemReset for Atomic SubSystem: '<S36>/GradientLimiter' */
            BACR_ac_DW.UnitDelay_DSTATE_l2 = 0.0F;

            /* End of SystemReset for SubSystem: '<S36>/GradientLimiter' */

            /* SystemReset for Atomic SubSystem: '<S28>/Hysteresis' */
            BACR_ac_DW.UnitDelay_DSTATE_gn = false;

            /* End of SystemReset for SubSystem: '<S28>/Hysteresis' */

            /* SystemReset for Atomic SubSystem: '<S28>/Hysteresis1' */
            BACR_ac_DW.UnitDelay_DSTATE_oa = false;

            /* End of SystemReset for SubSystem: '<S28>/Hysteresis1' */

            /* SystemReset for Atomic SubSystem: '<S50>/EdgeFalling' */
            BACR_ac_DW.UnitDelay_DSTATE_j = false;

            /* End of SystemReset for SubSystem: '<S50>/EdgeFalling' */
            /* End of SystemReset for SubSystem: '<S20>/DRIVE' */
        }

        (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value(&tmpRead_a);
        (void)Rte_Read_VeATRR_b_RaceStrtActv_Value(&rtb_Comparison1_i);

        /* Outputs for IfAction SubSystem: '<S20>/DRIVE' incorporates:
         *  ActionPort: '<S28>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S50>/Signal Latch On With Reset' */
        /* Logic: '<S117>/OR1' incorporates:
         *  Constant: '<S113>/Calib'
         *  Constant: '<S115>/Calib'
         *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Inport: '<Root>/VeATRR_b_RaceStrtActv'
         *  Logic: '<S117>/NOT'
         *  Logic: '<S117>/OR'
         *  Logic: '<S50>/Logical'
         *  RelationalOperator: '<S50>/Comparison2'
         *  UnitDelay: '<S117>/Unit Delay'
         */
        VeBACC_b_RaceStrtPshift_Actv = (((KeBACR_b_EnblRaceStartPshift) &&
            rtb_Comparison1_i) || ((tmpRead_a >= KeBACR_Pct_RaceStrtExitPedal) &&
            (BACR_ac_DW.UnitDelay_DSTATE_ek)));

        /* Update for UnitDelay: '<S117>/Unit Delay' */
        BACR_ac_DW.UnitDelay_DSTATE_ek = VeBACC_b_RaceStrtPshift_Actv;

        /* End of Outputs for SubSystem: '<S50>/Signal Latch On With Reset' */
        for (i = 0; i < 2; i++)
        {
            /* Lookup_n-D: '<S80>/Vector' */
            VaBACC_P_NiTi_PwrShftDrv_Offset[(i)] = look1_iflf_binlca_16a
                (VaBACI_P_PredictedPo_kW[(i)], ((const float32 *)
                  &(KxBACR_Pct_TargetSOC_Drv_PoBsd[0])), ((const float32 *)
                  &(KtBACR_Pct_TargetSOC_Drv_PoBsd[0])), 4U);

            /* MinMax: '<S38>/MinMax1' */
            VaBACC_Pct_TargetSOC_Drive[(i)] = fmaxf
                (VeBACC_Pct_TargetSOC_DriveRaw, VaBACC_P_NiTi_PwrShftDrv_Offset
                 [(i)]);

            /* Sum: '<S38>/Sum2' */
            rtb_Sum2_n[i] = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B -
                VaBACC_Pct_TargetSOC_Drive[(i)];
        }

        /* RelationalOperator: '<S35>/Comparison1' incorporates:
         *  Constant: '<S69>/Calib'
         */
        rtb_Comparison1_i = (((float32)
                              Rte_Prm_KeOPTR_r_NiTiFctrMin_KeOPTR_r_NiTiFctrMin())
                             < rtb_TmpSignalConversionAtVeEOCR_r_ColdCt);

        /* UnitDelay: '<S111>/Unit Delay' incorporates:
         *  Constant: '<S35>/Constant Value1'
         *  Constant: '<S68>/Calib'
         *  Logic: '<S35>/Logical6'
         *  RelationalOperator: '<S35>/Comparison2'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel = ((KeBACR_t_OptPbatPshftBlndTm
            > 0.0F) && rtb_Comparison1_i);

        /* Switch: '<S66>/Switch3' */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* Switch: '<S66>/Switch1' incorporates:
             *  Constant: '<S66>/Constant Value4'
             *  UnitDelay: '<S66>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE_a = 0.0F;
        }
        else
        {
            /* MinMax: '<S66>/Maximum' incorporates:
             *  Constant: '<S67>/Calib'
             *  Constant: '<S68>/Calib'
             */
            rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc = fmaxf(HeBACR_t_dT,
                KeBACR_t_OptPbatPshftBlndTm);

            /* Outputs for Atomic SubSystem: '<S66>/Protected Division' */
            /* Switch: '<S70>/Switch1' incorporates:
             *  Constant: '<S67>/Calib'
             *  Constant: '<S70>/Constant Value'
             *  Constant: '<S70>/Constant Value1'
             *  Constant: '<S70>/Constant Value2'
             *  Constant: '<S70>/Constant Value3'
             *  Logic: '<S70>/AND'
             *  RelationalOperator: '<S70>/Greater Than or Equal '
             *  RelationalOperator: '<S70>/Greater Than or Equal 1'
             *  RelationalOperator: '<S70>/Not Equal'
             *  RelationalOperator: '<S70>/Not Equal1'
             *  Switch: '<S70>/Switch2'
             *  Switch: '<S70>/Switch3'
             */
            if ((HeBACR_t_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc != 0.0F))
            {
                /* Switch: '<S70>/Switch1' incorporates:
                 *  Product: '<S70>/Division'
                 */
                rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc = HeBACR_t_dT /
                    rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc;
            }
            else if (HeBACR_t_dT > 0.0F)
            {
                /* Switch: '<S70>/Switch2' incorporates:
                 *  Constant: '<S70>/MAXFLOAT'
                 *  Switch: '<S70>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc = 3.402823466E+38F;
            }
            else if (HeBACR_t_dT < 0.0F)
            {
                /* Switch: '<S70>/Switch3' incorporates:
                 *  Constant: '<S70>/MINFLOAT'
                 *  Switch: '<S70>/Switch1'
                 *  Switch: '<S70>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S70>/Switch1' incorporates:
                 *  Constant: '<S70>/Constant Value4'
                 *  Switch: '<S70>/Switch2'
                 *  Switch: '<S70>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc = 0.0F;
            }

            /* End of Switch: '<S70>/Switch1' */
            /* End of Outputs for SubSystem: '<S66>/Protected Division' */

            /* Switch: '<S66>/Switch1' incorporates:
             *  Constant: '<S66>/Constant Value2'
             *  Constant: '<S66>/Constant Value3'
             *  Logic: '<S66>/Logical'
             *  Logic: '<S66>/Logical2'
             *  MinMax: '<S66>/MinMax'
             *  Sum: '<S66>/Summation1'
             *  UnitDelay: '<S66>/Unit Delay1'
             *  UnitDelay: '<S66>/Unit Delay3'
             */
            if ((!BACR_ac_DW.UnitDelay1_DSTATE_f) || rtb_Comparison8)
            {
                BACR_ac_DW.UnitDelay3_DSTATE_a = 1.0F;
            }

            BACR_ac_DW.UnitDelay3_DSTATE_a = fminf
                (BACR_ac_DW.UnitDelay3_DSTATE_a +
                 rtb_TmpSignalConversionAtVeHVTR_P_HV_Acc, 1.0F);
        }

        /* End of Switch: '<S66>/Switch3' */

        /* Logic: '<S35>/Logical1' incorporates:
         *  Constant: '<S66>/Constant Value1'
         *  Logic: '<S35>/Logical2'
         *  RelationalOperator: '<S66>/Comparison2'
         *  UnitDelay: '<S66>/Unit Delay3'
         */
        rtb_Comparison8 = ((BACR_ac_DW.UnitDelay3_DSTATE_a < 1.0F) &&
                           (!rtb_Comparison1_i));

        /* If: '<S28>/If' incorporates:
         *  Switch: '<S58>/Switch1'
         *  Switch: '<S59>/Switch1'
         */
        if (VeBACC_b_RaceStrtPshift_Actv)
        {
            /* Outputs for IfAction SubSystem: '<S28>/RaceStart_SOCCostFactor' incorporates:
             *  ActionPort: '<S51>/Action Port'
             */
            /* Gain: '<S121>/Gain' incorporates:
             *  Constant: '<S120>/Calib'
             */
            BACR_ac_B.Merge2[1] = KeBACR_r_SOCCostFac_RaceStrt_Pos;

            /* Gain: '<S123>/Gain' incorporates:
             *  Constant: '<S120>/Calib'
             */
            BACR_ac_B.Merge2[0] = KeBACR_r_SOCCostFac_RaceStrt_Pos;

            /* Gain: '<S122>/Gain' incorporates:
             *  Constant: '<S119>/Calib'
             */
            BACR_ac_B.Merge3[1] = KeBACR_r_SOCCostFac_RaceStrt_Neg;

            /* Gain: '<S124>/Gain' incorporates:
             *  Constant: '<S119>/Calib'
             */
            BACR_ac_B.Merge3[0] = KeBACR_r_SOCCostFac_RaceStrt_Neg;

            /* End of Outputs for SubSystem: '<S28>/RaceStart_SOCCostFactor' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S28>/ArbDrvCostFactors' incorporates:
             *  ActionPort: '<S34>/Action Port'
             */
            if (rtb_Comparison8)
            {
                /* Switch: '<S58>/Switch1' incorporates:
                 *  Constant: '<S64>/Calib'
                 *  Lookup_n-D: '<S60>/Vector'
                 *  Product: '<S58>/Product2'
                 */
                BACR_ac_B.Merge3[1] = KeBACR_r_AddlCostFactNegT_NiTiTrnstn *
                    look2_iflf_binlca_16a(rtb_Sum2_n[1],
                    VaBACI_P_PredictedPo_kW[1], ((const float32 *)
                    &(KxBACR_r_CostFactSOC_Neg_Drive_Po[0])), ((const float32 *)
                    &(KyBACR_r_CostFactSOC_Neg_Drive_Po[0])), ((const float32 *)
                    &(KtBACR_r_CostFactSOC_Neg_Drive_Po[0])),
                    BACR_ac_ConstP.pooled9, 7U);

                /* Switch: '<S59>/Switch1' incorporates:
                 *  Constant: '<S65>/Calib'
                 *  Lookup_n-D: '<S62>/Vector'
                 *  Product: '<S59>/Product2'
                 */
                BACR_ac_B.Merge2[1] = KeBACR_r_AddlCostFactPosT_NiTiTrnstn *
                    look2_iflf_binlca_16a(rtb_Sum2_n[1],
                    VaBACI_P_PredictedPo_kW[1], ((const float32 *)
                    &(KxBACR_r_CostFactSOC_Pos_Drive_Po[0])), ((const float32 *)
                    &(KyBACR_r_CostFactSOC_Pos_Drive_Po[0])), ((const float32 *)
                    &(KtBACR_r_CostFactSOC_Pos_Drive_Po[0])),
                    BACR_ac_ConstP.pooled9, 7U);
            }
            else
            {
                /* Switch: '<S58>/Switch1' incorporates:
                 *  Lookup_n-D: '<S60>/Vector'
                 */
                BACR_ac_B.Merge3[1] = look2_iflf_binlca_16a(rtb_Sum2_n[1],
                    VaBACI_P_PredictedPo_kW[1], ((const float32 *)
                    &(KxBACR_r_CostFactSOC_Neg_Drive_Po[0])), ((const float32 *)
                    &(KyBACR_r_CostFactSOC_Neg_Drive_Po[0])), ((const float32 *)
                    &(KtBACR_r_CostFactSOC_Neg_Drive_Po[0])),
                    BACR_ac_ConstP.pooled9, 7U);

                /* Switch: '<S59>/Switch1' incorporates:
                 *  Lookup_n-D: '<S62>/Vector'
                 */
                BACR_ac_B.Merge2[1] = look2_iflf_binlca_16a(rtb_Sum2_n[1],
                    VaBACI_P_PredictedPo_kW[1], ((const float32 *)
                    &(KxBACR_r_CostFactSOC_Pos_Drive_Po[0])), ((const float32 *)
                    &(KyBACR_r_CostFactSOC_Pos_Drive_Po[0])), ((const float32 *)
                    &(KtBACR_r_CostFactSOC_Pos_Drive_Po[0])),
                    BACR_ac_ConstP.pooled9, 7U);
            }

            /* Lookup_n-D: '<S61>/Vector' */
            BACR_ac_B.Merge3[0] = look2_iflf_binlca_16a(rtb_Sum2_n[0],
                VaBACI_P_PredictedPo_kW[0], ((const float32 *)
                &(KxBACR_r_CostFactSOC_Neg_Drive_Stgc[0])), ((const float32 *)
                &(KyBACR_r_CostFactSOC_Neg_Drive_Stgc[0])), ((const float32 *)
                &(KtBACR_r_CostFactSOC_Neg_Drive_Stgc[0])),
                BACR_ac_ConstP.pooled9, 7U);

            /* Lookup_n-D: '<S63>/Vector' */
            BACR_ac_B.Merge2[0] = look2_iflf_binlca_16a(rtb_Sum2_n[0],
                VaBACI_P_PredictedPo_kW[0], ((const float32 *)
                &(KxBACR_r_CostFactSOC_Pos_Drive_Stgc[0])), ((const float32 *)
                &(KyBACR_r_CostFactSOC_Pos_Drive_Stgc[0])), ((const float32 *)
                &(KtBACR_r_CostFactSOC_Pos_Drive_Stgc[0])),
                BACR_ac_ConstP.pooled9, 7U);

            /* End of Outputs for SubSystem: '<S28>/ArbDrvCostFactors' */
        }

        /* End of If: '<S28>/If' */

        /* Switch: '<S66>/Switch2' incorporates:
         *  Gain: '<S35>/Gain'
         *  UnitDelay: '<S66>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            BACR_ac_DW.UnitDelay_DSTATE_d =
                -rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        }

        /* End of Switch: '<S66>/Switch2' */

        /* If: '<S39>/If' incorporates:
         *  Constant: '<S86>/Calib'
         *  Selector: '<S39>/Selector12'
         */
        i = (sint32)KaBACR_i_TrrnDrvMdPshftStratSel[(10 * ((sint32)
            rtb_TmpSignalConversionAtVeDMDR_i_DrvMdA)) + ((sint32)
            rtb_TmpSignalConversionAtVeTMDR_i_TrueTr)];
        if (i == 0)
        {
            /* Outputs for IfAction SubSystem: '<S39>/Default' incorporates:
             *  ActionPort: '<S81>/Action Port'
             */
            BACR_ac_Default(rtb_Sum2_n, (&(VaBACI_P_PredictedPo_kW[0])),
                            rtb_TmpSignalConversionAtVeBPCR_T_BatMod,
                            (&(VaBACC_P_PBatShift_Drive[0])),
                            &rtb_TmpSignalConversionAtVePLTR_b_InFiel,
                            &BACR_ac_DW.Default);

            /* End of Outputs for SubSystem: '<S39>/Default' */
        }
        else if (i == 1)
        {
            /* Outputs for IfAction SubSystem: '<S39>/Idx1' incorporates:
             *  ActionPort: '<S83>/Action Port'
             */
            /* Lookup_n-D: '<S103>/Vector' */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_PBatShift_Drive[(i)] = look2_iflf_binlca_16a
                    (rtb_Sum2_n[i], VaBACI_P_PredictedPo_kW[(i)], ((const
                       float32 *)&(KxBACR_P_CostFactSOC_PBatShift_Drive_Po[0])),
                     ((const float32 *)
                      &(KyBACR_P_CostFactSOC_PBatShift_Drive_Po[0])), ((const
                       float32 *)&(KtBACR_P_CostFactSOC_PBatShift_Drive_Po[0])),
                     BACR_ac_ConstP.pooled8, 10U);
            }

            /* End of Lookup_n-D: '<S103>/Vector' */

            /* UnitDelay: '<S111>/Unit Delay' incorporates:
             *  Constant: '<S83>/FALSE Constant'
             *  SignalConversion generated from: '<S83>/HiLo_Tmp'
             */
            rtb_TmpSignalConversionAtVePLTR_b_InFiel = false;

            /* End of Outputs for SubSystem: '<S39>/Idx1' */
        }
        else if (i == 2)
        {
            /* Outputs for IfAction SubSystem: '<S39>/Idx2' incorporates:
             *  ActionPort: '<S84>/Action Port'
             */
            /* Lookup_n-D: '<S104>/Vector' */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_PBatShift_Drive[(i)] = look2_iflf_binlca_16a
                    (rtb_Sum2_n[i], VaBACI_P_PredictedPo_kW[(i)], ((const
                       float32 *)&(KxBACR_P_CostFactSOC_PBatShift_Drive_Po2[0])),
                     ((const float32 *)
                      &(KyBACR_P_CostFactSOC_PBatShift_Drive_Po2[0])), ((const
                       float32 *)&(KtBACR_P_CostFactSOC_PBatShift_Drive_Po2[0])),
                     BACR_ac_ConstP.pooled8, 10U);
            }

            /* End of Lookup_n-D: '<S104>/Vector' */

            /* UnitDelay: '<S111>/Unit Delay' incorporates:
             *  Constant: '<S84>/FALSE Constant3'
             *  SignalConversion generated from: '<S84>/HiLo_Tmp'
             */
            rtb_TmpSignalConversionAtVePLTR_b_InFiel = false;

            /* End of Outputs for SubSystem: '<S39>/Idx2' */
        }
        else if (i == 3)
        {
            /* Outputs for IfAction SubSystem: '<S39>/Idx3' incorporates:
             *  ActionPort: '<S85>/Action Port'
             */
            /* Lookup_n-D: '<S105>/Vector' */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_PBatShift_Drive[(i)] = look2_iflf_binlca_16a
                    (rtb_Sum2_n[i], VaBACI_P_PredictedPo_kW[(i)], ((const
                       float32 *)
                      &(KxBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[0])), ((
                       const float32 *)
                      &(KyBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[0])), ((
                       const float32 *)
                      &(KtBACR_P_CostFactSOC_PBatShift_Drive_LoHiTBatt[0])),
                     BACR_ac_ConstP.pooled8, 10U);
            }

            /* End of Lookup_n-D: '<S105>/Vector' */

            /* UnitDelay: '<S111>/Unit Delay' incorporates:
             *  Constant: '<S85>/FALSE Constant1'
             *  SignalConversion generated from: '<S85>/HiLo_Tmp'
             */
            rtb_TmpSignalConversionAtVePLTR_b_InFiel = false;

            /* End of Outputs for SubSystem: '<S39>/Idx3' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S39>/Default1' incorporates:
             *  ActionPort: '<S82>/Action Port'
             */
            BACR_ac_Default(rtb_Sum2_n, (&(VaBACI_P_PredictedPo_kW[0])),
                            rtb_TmpSignalConversionAtVeBPCR_T_BatMod,
                            (&(VaBACC_P_PBatShift_Drive[0])),
                            &rtb_TmpSignalConversionAtVePLTR_b_InFiel,
                            &BACR_ac_DW.Default1);

            /* End of Outputs for SubSystem: '<S39>/Default1' */
        }

        /* End of If: '<S39>/If' */

        /* Outputs for Atomic SubSystem: '<S36>/GradientLimiter' */
        /* Sum: '<S71>/Sum2' incorporates:
         *  Switch: '<S36>/Switch2'
         *  UnitDelay: '<S71>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeOITR_P_OptCal = ((float32)
            ((!rtb_TmpSignalConversionAtVePLTR_b_InFiel) ? 1 : 0)) -
            BACR_ac_DW.UnitDelay_DSTATE_l2;

        /* Outputs for Atomic SubSystem: '<S71>/Limiter' */
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S73>/Calib'
         *  RelationalOperator: '<S76>/Relational Operator'
         */
        if (KeBACR_r_NoTiBsd_TranstnLU <
                rtb_TmpSignalConversionAtVeOITR_P_OptCal)
        {
            /* Switch: '<S76>/Switch1' */
            rtb_TmpSignalConversionAtVeOITR_P_OptCal =
                KeBACR_r_NoTiBsd_TranstnLU;
        }

        /* End of Switch: '<S76>/Switch1' */

        /* Switch: '<S76>/Switch' incorporates:
         *  Constant: '<S72>/Calib'
         *  RelationalOperator: '<S76>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeOITR_P_OptCal <=
                KeBACR_r_NoTiBsd_TranstnLD)
        {
            rtb_TmpSignalConversionAtVeOITR_P_OptCal =
                KeBACR_r_NoTiBsd_TranstnLD;
        }

        /* End of Switch: '<S76>/Switch' */
        /* End of Outputs for SubSystem: '<S71>/Limiter' */

        /* Sum: '<S71>/Sum3' incorporates:
         *  UnitDelay: '<S71>/Unit Delay'
         */
        BACR_ac_DW.UnitDelay_DSTATE_l2 +=
            rtb_TmpSignalConversionAtVeOITR_P_OptCal;

        /* End of Outputs for SubSystem: '<S36>/GradientLimiter' */

        /* Lookup_n-D: '<S75>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
         */
        bpIndices[1U] = plook_u32ff_binca_16a
            (rtb_TmpSignalConversionAtVeTISR_n_InputS, ((const float32 *)
              &(KyBACR_P_NiToBsd_PBatShift_Drive[0])), 9U,
             &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
        rtb_Sum2_jp[1U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        for (i = 0; i < 2; i++)
        {
            bpIndices[0U] = plook_u32ff_binca_16a(VaBACI_M_To_PredImmed[(i)], ((
                const float32 *)&(KxBACR_P_NiToBsd_PBatShift_Drive[0])), 10U,
                &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
            rtb_Sum2_jp[0U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
            VaBACC_P_NiTi_PwrShftDrv_Offset[(i)] = intrp2d_fu32fla_16a(bpIndices,
                rtb_Sum2_jp, ((const float32 *)
                              &(KtBACR_P_NiToBsd_PBatShift_Drive[0])), 11U,
                BACR_ac_ConstP.Vector_maxIndex_k);
        }

        /* End of Lookup_n-D: '<S75>/Vector' */
        for (i = 0; i < 2; i++)
        {
            /* Product: '<S36>/Product' incorporates:
             *  UnitDelay: '<S71>/Unit Delay'
             */
            VaBACC_P_NiToBsd_PwrShft[(i)] = BACR_ac_DW.UnitDelay_DSTATE_l2 *
                VaBACC_P_NiTi_PwrShftDrv_Offset[(i)];
        }

        /* Lookup_n-D: '<S74>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
         */
        bpIndices_0[1U] = plook_u32ff_binca_16a
            (rtb_TmpSignalConversionAtVeTISR_n_InputS, ((const float32 *)
              &(KyBACR_P_CWU_PBatShift_Drive[0])), 5U,
             &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
        Gain_l[1U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
        for (i = 0; i < 2; i++)
        {
            bpIndices_0[0U] = plook_u32ff_binca_16a(VaBACI_M_To_PredImmed[(i)],
                ((const float32 *)&(KxBACR_P_CWU_PBatShift_Drive[0])), 5U,
                &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
            Gain_l[0U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
            VaBACC_P_NiTi_PwrShftDrv_Offset[(i)] = intrp2d_fu32fla_16a
                (bpIndices_0, Gain_l, ((const float32 *)
                  &(KtBACR_P_CWU_PBatShift_Drive[0])), 6U,
                 BACR_ac_ConstP.pooled11);
        }

        /* End of Lookup_n-D: '<S74>/Vector' */
        for (i = 0; i < 2; i++)
        {
            /* Product: '<S36>/Product1' incorporates:
             *  UnitDelay: '<S71>/Unit Delay'
             */
            VaBACC_P_NiTi_PwrShftDrv_Offset[(i)] =
                (BACR_ac_DW.UnitDelay_DSTATE_l2 *
                 VaBACC_P_NiTi_PwrShftDrv_Offset[(i)]) *
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
        }

        /* Switch: '<S28>/Switch1' incorporates:
         *  Constant: '<S77>/Calib'
         *  Constant: '<S78>/Calib'
         *  Logic: '<S37>/Logical3'
         *  RelationalOperator: '<S37>/Comparison6'
         *  RelationalOperator: '<S37>/Comparison7'
         */
        if ((KeBACR_Pct_NoPoBsdOffset_SOCMax >=
                rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B) &&
                (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >=
                 KeBACR_Pct_NoPoBsdOffset_SOCMin))
        {
            /* Lookup_n-D: '<S47>/Vector' incorporates:
             *  Switch: '<S308>/Switch1'
             */
            bpIndices_1[0U] = plook_u32ff_binca_16a(VeBACI_n_No_Fltd, ((const
                float32 *)&(KxBACR_P_NoPoBased_PwrShft_Offset[0])), 8U,
                &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
            fractions[0U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
            for (i = 0; i < 2; i++)
            {
                bpIndices_1[1U] = plook_u32ff_binca_16a(VaBACI_P_PredictedPo_kW
                    [(i)], ((const float32 *)
                            &(KyBACR_P_NoPoBased_PwrShft_Offset[0])), 7U,
                    &rtb_TmpSignalConversionAtVeOITR_P_OptCal);
                fractions[1U] = rtb_TmpSignalConversionAtVeOITR_P_OptCal;
                VaBACC_P_NoBasedPwrShft_Offset[(i)] = intrp2d_fu32fla_16a
                    (bpIndices_1, fractions, ((const float32 *)
                      &(KtBACR_P_NoPoBased_PwrShft_Offset[0])), 9U,
                     BACR_ac_ConstP.Vector_maxIndex);
            }

            /* End of Lookup_n-D: '<S47>/Vector' */
        }
        else
        {
            /* Switch: '<S28>/Switch1' incorporates:
             *  Constant: '<S28>/Constant Value17'
             */
            VaBACC_P_NoBasedPwrShft_Offset[0] = 0.0F;
            VaBACC_P_NoBasedPwrShft_Offset[1] = 0.0F;
        }

        /* End of Switch: '<S28>/Switch1' */

        /* Switch: '<S28>/Switch2' */
        if (VeBACI_b_AHH_Apply)
        {
            /* Lookup_n-D: '<S46>/Vector' incorporates:
             *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
                  &(KxBACR_P_AHH_SOCBsd_PShftOffset[0])), ((const float32 *)
                  &(KtBACR_P_AHH_SOCBsd_PShftOffset[0])), 4U);

            /* Switch: '<S28>/Switch2' */
            VaBACC_P_AHH_PwrShft_Offset[0] =
                rtb_TmpSignalConversionAtVeTISR_n_InputS;
            VaBACC_P_AHH_PwrShft_Offset[1] =
                rtb_TmpSignalConversionAtVeTISR_n_InputS;
        }
        else
        {
            /* Switch: '<S28>/Switch2' incorporates:
             *  Constant: '<S28>/Constant Value4'
             */
            VaBACC_P_AHH_PwrShft_Offset[0] = 0.0F;
            VaBACC_P_AHH_PwrShft_Offset[1] = 0.0F;
        }

        /* End of Switch: '<S28>/Switch2' */
        /* End of Outputs for SubSystem: '<S20>/DRIVE' */
        (void)Rte_Read_VeHSCR_r_DonutSpaceCoefCa_Value(&tmpRead_7);

        /* Outputs for IfAction SubSystem: '<S20>/DRIVE' incorporates:
         *  ActionPort: '<S28>/Action Port'
         */
        /* Sum: '<S28>/Sum1' incorporates:
         *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefCa'
         *  Product: '<S57>/Prod'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS =
            (rtb_TmpSignalConversionAtVeHSCR_r_DonutS *
             rtb_TmpSignalConversionAtVeHSCR_r_DonutS) + tmpRead_7;

        /* Product: '<S28>/Product1' incorporates:
         *  Lookup_n-D: '<S49>/Vector'
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  Sum: '<S28>/Sum2'
         */
        rtb_TmpSignalConversionAtVeEOCR_r_ColdCt =
            (rtb_TmpSignalConversionAtVeABCR_P_HV_Acc +
             rtb_TmpSignalConversionAtVeTISR_n_InputS) * look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
              &(KxBACR_r_DCLoad_PShftFctr[0])), ((const float32 *)
              &(KtBACR_r_DCLoad_PShftFctr[0])), 5U);

        /* Gain: '<S54>/Gain' */
        VaBACC_P_DCLoadBsdPShft_Offset_BSG[0] =
            rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
        VaBACC_P_DCLoadBsdPShft_Offset_BSG[1] =
            rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;

        /* Outputs for Atomic SubSystem: '<S28>/Hysteresis' */
        /* Switch: '<S41>/Switch1' incorporates:
         *  Constant: '<S41>/Constant Value'
         *  Constant: '<S52>/Calib'
         *  Constant: '<S53>/Calib'
         *  RelationalOperator: '<S41>/Greater  Than'
         *  RelationalOperator: '<S41>/Greater  Than1'
         *  UnitDelay: '<S41>/Unit Delay'
         */
        if (VaBACI_P_PredictedPo_kW[0] > KeBACR_P_PshiftDCloadOffstDr_Po_RSP)
        {
            BACR_ac_DW.UnitDelay_DSTATE_gn = true;
        }
        else
        {
            BACR_ac_DW.UnitDelay_DSTATE_gn = ((VaBACI_P_PredictedPo_kW[0] >=
                KeBACR_P_PshiftDCloadOffstDr_Po_LSP) &&
                (BACR_ac_DW.UnitDelay_DSTATE_gn));
        }

        /* End of Switch: '<S41>/Switch1' */
        /* End of Outputs for SubSystem: '<S28>/Hysteresis' */

        /* Outputs for Atomic SubSystem: '<S28>/Hysteresis1' */
        /* Switch: '<S42>/Switch1' incorporates:
         *  Constant: '<S42>/Constant Value'
         *  Constant: '<S44>/Calib'
         *  Constant: '<S45>/Calib'
         *  RelationalOperator: '<S42>/Greater  Than'
         *  RelationalOperator: '<S42>/Greater  Than1'
         *  UnitDelay: '<S42>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeVSDR_n_StratN >
                KeBACR_n_PshiftDCloadOffstDr_No_RSP)
        {
            BACR_ac_DW.UnitDelay_DSTATE_oa = true;
        }
        else
        {
            BACR_ac_DW.UnitDelay_DSTATE_oa =
                ((rtb_TmpSignalConversionAtVeVSDR_n_StratN >=
                  KeBACR_n_PshiftDCloadOffstDr_No_LSP) &&
                 (BACR_ac_DW.UnitDelay_DSTATE_oa));
        }

        /* End of Switch: '<S42>/Switch1' */
        /* End of Outputs for SubSystem: '<S28>/Hysteresis1' */

        /* Switch: '<S28>/Switch3' incorporates:
         *  Logic: '<S28>/Logical Operator'
         *  Logic: '<S28>/Logical Operator1'
         *  Logic: '<S28>/Logical Operator2'
         *  UnitDelay: '<S41>/Unit Delay'
         *  UnitDelay: '<S42>/Unit Delay'
         */
        if ((!BACR_ac_DW.UnitDelay_DSTATE_gn) &&
                (!BACR_ac_DW.UnitDelay_DSTATE_oa))
        {
            /* SignalConversion generated from: '<S48>/Vector' */
            rtb_Sum2_jp[0] = rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
            rtb_Sum2_jp[1] = rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

            /* Lookup_n-D: '<S48>/Vector' */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_PshiftOffset_DCloadBsd[(i)] = look2_iflf_binlca_16a
                    (rtb_Sum2_n[i], rtb_Sum2_jp[i], ((const float32 *)
                      &(KxBACR_P_PwrShftOffst_DCloadBsd_Dr[0])), ((const float32
                       *)&(KyBACR_P_PwrShftOffst_DCloadBsd_Dr[0])), ((const
                       float32 *)&(KtBACR_P_PwrShftOffst_DCloadBsd_Dr[0])),
                     BACR_ac_ConstP.pooled10, 7U);
            }

            /* End of Lookup_n-D: '<S48>/Vector' */
        }
        else
        {
            /* Switch: '<S28>/Switch3' incorporates:
             *  Constant: '<S28>/Constant Value1'
             */
            VaBACC_P_PshiftOffset_DCloadBsd[0] = 0.0F;
            VaBACC_P_PshiftOffset_DCloadBsd[1] = 0.0F;
        }

        /* End of Switch: '<S28>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S50>/EdgeFalling' */
        /* Logic: '<S111>/AND' incorporates:
         *  Logic: '<S111>/OR1'
         *  UnitDelay: '<S111>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel =
            ((!VeBACC_b_RaceStrtPshift_Actv) && (BACR_ac_DW.UnitDelay_DSTATE_j));

        /* Update for UnitDelay: '<S111>/Unit Delay' */
        BACR_ac_DW.UnitDelay_DSTATE_j = VeBACC_b_RaceStrtPshift_Actv;

        /* End of Outputs for SubSystem: '<S50>/EdgeFalling' */

        /* Switch: '<S110>/Switch2' incorporates:
         *  Switch: '<S110>/Switch3'
         *  UnitDelay: '<S110>/Unit Delay'
         *  UnitDelay: '<S50>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            for (i = 0; i < 2; i++)
            {
                BACR_ac_DW.UnitDelay_DSTATE_h[i] =
                    BACR_ac_DW.UnitDelay_DSTATE_b[i];
            }

            /* Switch: '<S110>/Switch1' incorporates:
             *  Constant: '<S110>/Constant Value4'
             *  UnitDelay: '<S110>/Unit Delay'
             *  UnitDelay: '<S110>/Unit Delay3'
             *  UnitDelay: '<S50>/Unit Delay'
             */
            BACR_ac_DW.UnitDelay3_DSTATE_aa = 0.0F;
        }
        else
        {
            /* MinMax: '<S110>/Maximum' incorporates:
             *  Constant: '<S112>/Calib'
             *  Constant: '<S116>/Calib'
             */
            rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = fmaxf(HeBACR_t_dT,
                KeBACR_t_RaceStrtPshiftBlndTime);

            /* Outputs for Atomic SubSystem: '<S110>/Protected Division' */
            /* Switch: '<S118>/Switch1' incorporates:
             *  Constant: '<S112>/Calib'
             *  Constant: '<S118>/Constant Value'
             *  Constant: '<S118>/Constant Value1'
             *  Constant: '<S118>/Constant Value2'
             *  Constant: '<S118>/Constant Value3'
             *  Logic: '<S118>/AND'
             *  RelationalOperator: '<S118>/Greater Than or Equal '
             *  RelationalOperator: '<S118>/Greater Than or Equal 1'
             *  RelationalOperator: '<S118>/Not Equal'
             *  RelationalOperator: '<S118>/Not Equal1'
             *  Switch: '<S118>/Switch2'
             *  Switch: '<S118>/Switch3'
             */
            if ((HeBACR_t_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeEOCR_r_ColdCt != 0.0F))
            {
                /* Switch: '<S118>/Switch1' incorporates:
                 *  Product: '<S118>/Division'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = HeBACR_t_dT /
                    rtb_TmpSignalConversionAtVeEOCR_r_ColdCt;
            }
            else if (HeBACR_t_dT > 0.0F)
            {
                /* Switch: '<S118>/Switch2' incorporates:
                 *  Constant: '<S118>/MAXFLOAT'
                 *  Switch: '<S118>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = 3.402823466E+38F;
            }
            else if (HeBACR_t_dT < 0.0F)
            {
                /* Switch: '<S118>/Switch3' incorporates:
                 *  Constant: '<S118>/MINFLOAT'
                 *  Switch: '<S118>/Switch1'
                 *  Switch: '<S118>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S118>/Switch1' incorporates:
                 *  Constant: '<S118>/Constant Value4'
                 *  Switch: '<S118>/Switch2'
                 *  Switch: '<S118>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeEOCR_r_ColdCt = 0.0F;
            }

            /* End of Switch: '<S118>/Switch1' */
            /* End of Outputs for SubSystem: '<S110>/Protected Division' */

            /* Switch: '<S110>/Switch1' incorporates:
             *  Constant: '<S110>/Constant Value2'
             *  Constant: '<S110>/Constant Value3'
             *  MinMax: '<S110>/MinMax'
             *  Sum: '<S110>/Summation1'
             *  UnitDelay: '<S110>/Unit Delay1'
             *  UnitDelay: '<S110>/Unit Delay3'
             */
            if (!BACR_ac_DW.UnitDelay1_DSTATE_ac)
            {
                BACR_ac_DW.UnitDelay3_DSTATE_aa = 1.0F;
            }

            BACR_ac_DW.UnitDelay3_DSTATE_aa = fminf
                (BACR_ac_DW.UnitDelay3_DSTATE_aa +
                 rtb_TmpSignalConversionAtVeEOCR_r_ColdCt, 1.0F);
        }

        /* End of Switch: '<S110>/Switch2' */

        /* Switch: '<S50>/Switch3' incorporates:
         *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefCb'
         */
        if (VeBACC_b_RaceStrtPshift_Actv)
        {
            (void)Rte_Read_VeHSCR_r_DonutSpaceCoefCb_Value(&rtb_Sum_d);

            /* Switch: '<S50>/Switch' incorporates:
             *  Constant: '<S114>/Calib'
             *  Constant: '<S50>/Constant Value'
             *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefCb'
             */
            if (!KeBACR_b_AddMtrALoss)
            {
                rtb_TmpSignalConversionAtVeTISR_n_InputS = 0.0F;
            }

            /* End of Switch: '<S50>/Switch' */

            /* Product: '<S50>/Product2' incorporates:
             *  Product: '<S50>/Product'
             *  Sum: '<S50>/Sum1'
             *  Sum: '<S50>/Sum3'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS =
                -(((rtb_TmpSignalConversionAtVeHSCR_r_Donu_a *
                    rtb_TmpSignalConversionAtVeHSCR_r_Donu_a) + rtb_Sum_d) +
                  (rtb_TmpSignalConversionAtVeTISR_n_InputS +
                   rtb_TmpSignalConversionAtVeABCR_P_HV_Acc));

            /* Switch: '<S50>/Switch3' */
            for (i = 0; i < 2; i++)
            {
                BACR_ac_DW.UnitDelay_DSTATE_b[i] =
                    rtb_TmpSignalConversionAtVeTISR_n_InputS;
            }
        }
        else
        {
            for (i = 0; i < 2; i++)
            {
                /* Sum: '<S28>/Sum' incorporates:
                 *  Sum: '<S36>/Sum'
                 */
                rtb_Sum2_jp[i] = (((((VaBACC_P_NiToBsd_PwrShft[(i)] +
                                      VaBACC_P_NiTi_PwrShftDrv_Offset[(i)]) +
                                     VaBACC_P_PBatShift_Drive[(i)]) +
                                    VaBACC_P_NoBasedPwrShft_Offset[(i)]) +
                                   VaBACC_P_AHH_PwrShft_Offset[(i)]) -
                                  VaBACC_P_DCLoadBsdPShft_Offset_BSG[(i)]) -
                    VaBACC_P_PshiftOffset_DCloadBsd[(i)];
            }

            /* Switch: '<S50>/Switch3' incorporates:
             *  Constant: '<S66>/Constant Value'
             *  Product: '<S66>/Multiplication'
             *  Product: '<S66>/Multiplication3'
             *  Sum: '<S66>/Subtraction'
             *  Sum: '<S66>/Summation'
             *  UnitDelay: '<S66>/Unit Delay'
             *  UnitDelay: '<S66>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay_DSTATE_b[0] = rtb_Sum2_jp[0];
            BACR_ac_DW.UnitDelay_DSTATE_b[1] = ((1.0F -
                BACR_ac_DW.UnitDelay3_DSTATE_a) * BACR_ac_DW.UnitDelay_DSTATE_d)
                + (BACR_ac_DW.UnitDelay3_DSTATE_a * rtb_Sum2_jp[1]);
        }

        /* End of Switch: '<S50>/Switch3' */
        for (i = 0; i < 2; i++)
        {
            /* Sum: '<S110>/Summation' incorporates:
             *  Constant: '<S110>/Constant Value'
             *  Product: '<S110>/Multiplication'
             *  Product: '<S110>/Multiplication3'
             *  Sum: '<S110>/Subtraction'
             *  UnitDelay: '<S110>/Unit Delay'
             *  UnitDelay: '<S110>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay_DSTATE_b[i] = ((1.0F -
                BACR_ac_DW.UnitDelay3_DSTATE_aa) *
                BACR_ac_DW.UnitDelay_DSTATE_h[i]) +
                (BACR_ac_DW.UnitDelay3_DSTATE_aa *
                 BACR_ac_DW.UnitDelay_DSTATE_b[i]);
        }

        /* Switch: '<S43>/Switch1' incorporates:
         *  Constant: '<S107>/Calib'
         *  Logic: '<S43>/Logical2'
         *  Switch: '<S43>/Switch'
         */
        if ((KeBACR_b_InPlntEnblPshiftDIDCtrl) && (VeBACI_b_InPlantMode))
        {
            /* Switch: '<S43>/Switch5' */
            if (VeBACI_b_InPlntAllwChrg)
            {
                /* Outputs for Function Call SubSystem: '<S1>/BACI_Input_Processing' */
                /* Switch: '<S43>/Switch5' incorporates:
                 *  Gain: '<S322>/Gain'
                 *  Lookup_n-D: '<S108>/Vector'
                 *  Sum: '<S38>/Sum1'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS = look1_iflf_binlca_16a
                    (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B - rtb_Vector_bs,
                     ((const float32 *)&(KxBACR_P_InPlant_PBatPshift[0])), ((
                       const float32 *)&(KtBACR_P_InPlant_PBatPshift[0])), 6U);

                /* End of Outputs for SubSystem: '<S1>/BACI_Input_Processing' */
            }
            else
            {
                /* Switch: '<S43>/Switch5' incorporates:
                 *  Constant: '<S106>/Calib'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS =
                    KeBACR_P_InPlant_Pshift4ChrgDisAlw;
            }

            /* End of Switch: '<S43>/Switch5' */

            /* Switch: '<S43>/Switch1' */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_PwrShftDrvBlnd[(i)] =
                    rtb_TmpSignalConversionAtVeTISR_n_InputS;
            }
        }
        else
        {
            if (VeBACI_b_InPlantMode)
            {
                /* Switch: '<S43>/Switch' incorporates:
                 *  DataStoreRead: '<S4>/Data Store Read'
                 *  Lookup_n-D: '<S109>/Vector'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS = look1_iflf_binlca_16a
                    (BACR_ac_DW.NeBACR_t_EngRunTimeInPlant, ((const float32 *)
                      &(KxBACR_r_InPlant_PBatPshift_Mult_Drive[0])), ((const
                       float32 *)&(KtBACR_r_InPlant_PBatPshift_Mult_Drive[0])),
                     4U);
            }
            else
            {
                /* Switch: '<S43>/Switch' incorporates:
                 *  Constant: '<S43>/Constant Value'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;
            }

            /* Switch: '<S43>/Switch1' incorporates:
             *  Product: '<S43>/Product'
             */
            for (i = 0; i < 2; i++)
            {
                VaBACC_P_PwrShftDrvBlnd[(i)] =
                    rtb_TmpSignalConversionAtVeTISR_n_InputS *
                    BACR_ac_DW.UnitDelay_DSTATE_b[i];
            }
        }

        /* End of Switch: '<S43>/Switch1' */

        /* Merge: '<S20>/Merge4' incorporates:
         *  Constant: '<S110>/Constant Value1'
         *  Gain: '<S55>/Gain'
         *  Logic: '<S28>/Logical1'
         *  RelationalOperator: '<S110>/Comparison2'
         *  UnitDelay: '<S110>/Unit Delay3'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel =
            (((BACR_ac_DW.UnitDelay3_DSTATE_aa < 1.0F) ||
              (VeBACC_b_RaceStrtPshift_Actv)) || rtb_Comparison8);
        for (i = 0; i < 2; i++)
        {
            /* Merge: '<S20>/Merge1' incorporates:
             *  Gain: '<S56>/Gain'
             */
            BACR_ac_B.Merge1[i] = VaBACC_P_PwrShftDrvBlnd[(i)];
        }

        /* Merge: '<S20>/Merge6' incorporates:
         *  Constant: '<S28>/FALSE Constant3'
         *  SignalConversion generated from: '<S28>/Pshift_PlugIn'
         */
        rtb_Comparison8 = false;

        /* Update for UnitDelay: '<S66>/Unit Delay1' incorporates:
         *  Constant: '<S66>/TRUE Constant'
         */
        BACR_ac_DW.UnitDelay1_DSTATE_f = true;

        /* Update for UnitDelay: '<S110>/Unit Delay1' incorporates:
         *  Constant: '<S110>/TRUE Constant'
         */
        BACR_ac_DW.UnitDelay1_DSTATE_ac = true;

        /* End of Outputs for SubSystem: '<S20>/DRIVE' */
        break;
    }

    /* End of If: '<S20>/If' */

    /* Outputs for Atomic SubSystem: '<S7>/OilDilution_PshiftMinLim' */
#if Rte_SysCon_Variant_BACR_OilDilutionPshiftEnbl

    /* Outputs for Atomic SubSystem: '<S17>/Enable' */
    /* Inport: '<Root>/VeENGR_b_OilDil_EngMinPwrEnbl' */
    (void)Rte_Read_VeENGR_b_OilDil_EngMinPwrEnbl_Value(&rtb_LogicalOperator4);

    /* Inport: '<Root>/VeENGR_P_OilDil_EngMinPwrReq' */
    (void)Rte_Read_VeENGR_P_OilDil_EngMinPwrReq_Value(&tmpRead_d);

    /* Outputs for Atomic SubSystem: '<S23>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S25>/Switch2' incorporates:
     *  Constant: '<S27>/Calib'
     *  Product: '<S25>/Multiplication'
     *  Sum: '<S25>/Subtraction'
     *  Sum: '<S25>/Summation'
     *  UnitDelay: '<S25>/Unit Delay'
     */
    BACR_ac_DW.UnitDelay_DSTATE_op += (tmpRead_d -
        BACR_ac_DW.UnitDelay_DSTATE_op) * KeBACR_k_OilDilnMinEngPwr_FiltCoef;

    /* End of Outputs for SubSystem: '<S23>/Digital Lowpass Reset Enabled' */

    /* VariantMerge generated from: '<S17>/OilDiln_PshiftMinLim_Actv' incorporates:
     *  Constant: '<S26>/Calib'
     *  Logic: '<S23>/Logical Operator'
     *  Logic: '<S23>/Logical Operator1'
     */
    VeBACC_b_OilDiln_MinPshift_Actv = ((rtb_LogicalOperator4 &&
        (!VeBACI_b_InPlantMode)) && (KeBACR_b_OilDilnMinEngPwrReq_Enbl));

    /* Switch: '<S23>/Switch3' */
    if (VeBACC_b_OilDiln_MinPshift_Actv)
    {
        /* Switch: '<S23>/Switch1' */
        if (rtb_Comparison8)
        {
            for (i = 0; i < 2; i++)
            {
                /* VariantMerge generated from: '<S17>/OilDiln_PshiftMin' incorporates:
                 *  Sum: '<S23>/Sum1'
                 *  Switch: '<S23>/Switch1'
                 *  UnitDelay: '<S25>/Unit Delay'
                 */
                VaBACC_P_OilDiln_PshiftMin[(i)] = BACR_ac_B.Merge1[i] +
                    BACR_ac_DW.UnitDelay_DSTATE_op;
            }
        }
        else
        {
            /* Sum: '<S23>/Sum' incorporates:
             *  UnitDelay: '<S25>/Unit Delay'
             */
            tmpRead_d = BACR_ac_DW.UnitDelay_DSTATE_op -
                VaBACI_P_PredictedPo_kW[2];

            /* VariantMerge generated from: '<S17>/OilDiln_PshiftMin' incorporates:
             *  Sum: '<S23>/Sum'
             *  Switch: '<S23>/Switch1'
             */
            VaBACC_P_OilDiln_PshiftMin[0] = tmpRead_d -
                rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
            VaBACC_P_OilDiln_PshiftMin[1] = tmpRead_d -
                rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;
        }

        /* End of Switch: '<S23>/Switch1' */
    }
    else
    {
        /* VariantMerge generated from: '<S17>/OilDiln_PshiftMin' incorporates:
         *  Constant: '<S23>/Constant1'
         */
        for (i = 0; i < 2; i++)
        {
            VaBACC_P_OilDiln_PshiftMin[(i)] = -99999.0F;
        }
    }

    /* End of Switch: '<S23>/Switch3' */
    /* End of Outputs for SubSystem: '<S17>/Enable' */
    /* End of Outputs for SubSystem: '<S7>/OilDilution_PshiftMinLim' */
#else

    /* Outputs for Atomic SubSystem: '<S17>/Bypass' */
    /* VariantMerge generated from: '<S17>/OilDiln_PshiftMin' incorporates:
     *  Constant: '<S22>/Constant1'
     *  Gain: '<S24>/Gain'
     */
    VaBACC_P_OilDiln_PshiftMin[0] = -99999.0F;
    VaBACC_P_OilDiln_PshiftMin[1] = -99999.0F;

    /* VariantMerge generated from: '<S17>/OilDiln_PshiftMinLim_Actv' incorporates:
     *  Constant: '<S22>/FALSE Constant'
     */
    VeBACC_b_OilDiln_MinPshift_Actv = false;

    /* End of Outputs for SubSystem: '<S17>/Bypass' */
#endif

    for (i = 0; i < 2; i++)
    {
        /* MinMax: '<S7>/MinMax' */
        VaBACC_P_BatPwrShift_PostOilDilnLimit[(i)] = fmaxf(BACR_ac_B.Merge1[i],
            VaBACC_P_OilDiln_PshiftMin[(i)]);
    }

    /* Logic: '<S21>/Logical Operator4' incorporates:
     *  Constant: '<S192>/Calib'
     *  Constant: '<S194>/Calib'
     *  Gain: '<S21>/Multiply'
     *  Logic: '<S21>/Logical Operator2'
     *  Logic: '<S21>/Logical Operator3'
     *  RelationalOperator: '<S21>/Comparison1'
     *  RelationalOperator: '<S21>/Comparison3'
     *  Sum: '<S21>/Add'
     */
    rtb_LogicalOperator4 = ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B <
        KeBACR_Pct_TopOfChrgPshift_ExitSOC) &&
                            ((!VeBACC_b_OilDiln_MinPshift_Actv) ||
        ((VaBACC_P_BatPwrShift_PostOilDilnLimit[1] +
          KeBACR_P_OilDiln_PshiftMaxLimOffset) <
         (-rtb_TmpSignalConversionAtVaOSMR_P_PShi_j[1]))));

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising' */
    /* Logic: '<S191>/OR1' incorporates:
     *  UnitDelay: '<S191>/Unit Delay'
     */
    rtb_Comparison8 = !BACR_ac_DW.UnitDelay_DSTATE_lb;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    BACR_ac_DW.UnitDelay_DSTATE_lb = rtb_LogicalOperator4;

    /* Outputs for Atomic SubSystem: '<S21>/Signal Latch On With Reset' */
    /* Logic: '<S198>/OR1' incorporates:
     *  Constant: '<S193>/Calib'
     *  Gain: '<S21>/Multiply'
     *  Logic: '<S191>/AND'
     *  Logic: '<S198>/NOT'
     *  Logic: '<S198>/OR'
     *  Logic: '<S21>/Logical Operator'
     *  Logic: '<S21>/Logical Operator1'
     *  RelationalOperator: '<S21>/Comparison'
     *  RelationalOperator: '<S21>/Comparison2'
     *  UnitDelay: '<S198>/Unit Delay'
     */
    VeBACC_b_TOCPshift_Actv = ((((VeBACC_b_OilDiln_MinPshift_Actv) &&
        (VaBACC_P_BatPwrShift_PostOilDilnLimit[1] >
         (-rtb_TmpSignalConversionAtVaOSMR_P_PShi_j[1]))) ||
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > KeBACR_Pct_SOC_TopOfCharge))
        || (((!rtb_LogicalOperator4) || (!rtb_Comparison8)) &&
            (VeBACC_b_TOCPshift_Actv)));

    /* End of Outputs for SubSystem: '<S21>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S21>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S21>/EdgeFalling2' */
    /* Logic: '<S190>/OR1' */
    rtb_LogicalOperator4 = !VeBACC_b_TOCPshift_Actv;

    /* Logic: '<S190>/AND' incorporates:
     *  Logic: '<S190>/OR1'
     *  UnitDelay: '<S190>/Unit Delay'
     */
    rtb_Comparison8 = (rtb_LogicalOperator4 && (BACR_ac_DW.UnitDelay_DSTATE_ai));

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    BACR_ac_DW.UnitDelay_DSTATE_ai = VeBACC_b_TOCPshift_Actv;

    /* End of Outputs for SubSystem: '<S21>/EdgeFalling2' */

    /* If: '<S21>/If' */
    rtPrevAction = BACR_ac_DW.If_ActiveSubsystem_c;
    BACR_ac_DW.If_ActiveSubsystem_c = (sint8)(rtb_LogicalOperator4 ? 1 : 0);
    if (!rtb_LogicalOperator4)
    {
        /* Outputs for IfAction SubSystem: '<S21>/PowerShift_TopOfCharge' incorporates:
         *  ActionPort: '<S196>/Action Port'
         */
        /* Merge: '<S21>/Merge1' incorporates:
         *  Gain: '<S206>/Gain'
         *  Lookup_n-D: '<S205>/Vector'
         */
        VaBACC_r_CostFactSOCPos[0] = BACR_ac_B.Merge2[0];
        VaBACC_r_CostFactSOCPos[1] = look1_iflf_binlca_16a
            (VaBACI_P_PredictedPo_kW[1], ((const float32 *)
              &(KxBACR_r_CostFactSOC_Pos_TOC[0])), ((const float32 *)
              &(KtBACR_r_CostFactSOC_Pos_TOC[0])), 7U);

        /* Merge: '<S21>/Merge2' incorporates:
         *  Gain: '<S207>/Gain'
         *  Lookup_n-D: '<S204>/Vector'
         */
        VaBACC_r_CostFactSOCNeg[0] = BACR_ac_B.Merge3[0];
        VaBACC_r_CostFactSOCNeg[1] = look1_iflf_binlca_16a
            (VaBACI_P_PredictedPo_kW[1], ((const float32 *)
              &(KxBACR_r_CostFactSOC_Neg_TOC[0])), ((const float32 *)
              &(KtBACR_r_CostFactSOC_Neg_TOC[0])), 7U);

        /* Gain: '<S208>/Gain' incorporates:
         *  Lookup_n-D: '<S203>/Vector'
         *  Sum: '<S196>/Sum1'
         *  UnitDelay: '<S21>/Unit Delay'
         */
        BACR_ac_DW.UnitDelay_DSTATE_i = look1_iflf_binlca_16a
            (VaBACI_P_PredictedPo_kW[1], ((const float32 *)
              &(KxBACR_P_PwrShift_TopOfChrg[0])), ((const float32 *)
              &(KtBACR_P_PwrShift_TopOfChrg[0])), 7U) -
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

        /* End of Outputs for SubSystem: '<S21>/PowerShift_TopOfCharge' */
    }
    else
    {
        if (1 != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S21>/Passthrough' incorporates:
             *  ActionPort: '<S195>/Action Port'
             */
            /* InitializeConditions for If: '<S21>/If' incorporates:
             *  Switch: '<S199>/Switch1'
             *  UnitDelay: '<S199>/Unit Delay'
             *  UnitDelay: '<S199>/Unit Delay1'
             *  UnitDelay: '<S199>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE = 0.0F;
            BACR_ac_DW.UnitDelay1_DSTATE_o = false;
            BACR_ac_DW.UnitDelay_DSTATE_l = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S21>/Passthrough' */
        }

        /* Outputs for IfAction SubSystem: '<S21>/Passthrough' incorporates:
         *  ActionPort: '<S195>/Action Port'
         */
        /* Switch: '<S199>/Switch3' incorporates:
         *  Switch: '<S199>/Switch2'
         *  UnitDelay: '<S199>/Unit Delay'
         *  UnitDelay: '<S21>/Unit Delay'
         */
        if (rtb_Comparison8)
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Constant: '<S199>/Constant Value4'
             *  UnitDelay: '<S199>/Unit Delay3'
             */
            BACR_ac_DW.UnitDelay3_DSTATE = 0.0F;
            BACR_ac_DW.UnitDelay_DSTATE_l = BACR_ac_DW.UnitDelay_DSTATE_i;
        }
        else
        {
            /* MinMax: '<S199>/Maximum' incorporates:
             *  Constant: '<S200>/Calib'
             *  Constant: '<S201>/Calib'
             */
            rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc = fmaxf(HeBACR_t_dT,
                KeBACR_t_TOCPwrShftExit_BlendTime);

            /* Outputs for Atomic SubSystem: '<S199>/Protected Division' */
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S200>/Calib'
             *  Constant: '<S202>/Constant Value'
             *  Constant: '<S202>/Constant Value1'
             *  Constant: '<S202>/Constant Value2'
             *  Constant: '<S202>/Constant Value3'
             *  Logic: '<S202>/AND'
             *  RelationalOperator: '<S202>/Greater Than or Equal '
             *  RelationalOperator: '<S202>/Greater Than or Equal 1'
             *  RelationalOperator: '<S202>/Not Equal'
             *  RelationalOperator: '<S202>/Not Equal1'
             *  Switch: '<S202>/Switch2'
             *  Switch: '<S202>/Switch3'
             */
            if ((HeBACR_t_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc != 0.0F))
            {
                /* Switch: '<S202>/Switch1' incorporates:
                 *  Product: '<S202>/Division'
                 */
                rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc = HeBACR_t_dT /
                    rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc;
            }
            else if (HeBACR_t_dT > 0.0F)
            {
                /* Switch: '<S202>/Switch2' incorporates:
                 *  Constant: '<S202>/MAXFLOAT'
                 *  Switch: '<S202>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc = 3.402823466E+38F;
            }
            else if (HeBACR_t_dT < 0.0F)
            {
                /* Switch: '<S202>/Switch3' incorporates:
                 *  Constant: '<S202>/MINFLOAT'
                 *  Switch: '<S202>/Switch1'
                 *  Switch: '<S202>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S202>/Switch1' incorporates:
                 *  Constant: '<S202>/Constant Value4'
                 *  Switch: '<S202>/Switch2'
                 *  Switch: '<S202>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc = 0.0F;
            }

            /* End of Switch: '<S202>/Switch1' */
            /* End of Outputs for SubSystem: '<S199>/Protected Division' */

            /* Switch: '<S199>/Switch1' incorporates:
             *  Constant: '<S199>/Constant Value2'
             *  Constant: '<S199>/Constant Value3'
             *  MinMax: '<S199>/MinMax'
             *  Sum: '<S199>/Summation1'
             *  UnitDelay: '<S199>/Unit Delay1'
             *  UnitDelay: '<S199>/Unit Delay3'
             */
            if (!BACR_ac_DW.UnitDelay1_DSTATE_o)
            {
                BACR_ac_DW.UnitDelay3_DSTATE = 1.0F;
            }

            BACR_ac_DW.UnitDelay3_DSTATE = fminf(BACR_ac_DW.UnitDelay3_DSTATE +
                rtb_TmpSignalConversionAtVeOSMR_P_HV_Acc, 1.0F);
        }

        /* End of Switch: '<S199>/Switch3' */

        /* RelationalOperator: '<S199>/Comparison2' incorporates:
         *  Constant: '<S199>/Constant Value1'
         *  UnitDelay: '<S199>/Unit Delay3'
         */
        BACR_ac_B.Comparison2 = (BACR_ac_DW.UnitDelay3_DSTATE < 1.0F);

        /* Sum: '<S199>/Summation' incorporates:
         *  Constant: '<S199>/Constant Value'
         *  Product: '<S199>/Multiplication'
         *  Product: '<S199>/Multiplication3'
         *  Sum: '<S199>/Subtraction'
         *  UnitDelay: '<S199>/Unit Delay'
         *  UnitDelay: '<S199>/Unit Delay3'
         *  UnitDelay: '<S21>/Unit Delay'
         */
        BACR_ac_DW.UnitDelay_DSTATE_i = ((1.0F - BACR_ac_DW.UnitDelay3_DSTATE) *
            BACR_ac_DW.UnitDelay_DSTATE_l) + (BACR_ac_DW.UnitDelay3_DSTATE *
            VaBACC_P_BatPwrShift_PostOilDilnLimit[1]);
        for (i = 0; i < 2; i++)
        {
            /* Merge: '<S21>/Merge1' incorporates:
             *  Inport: '<S195>/CostFac_Pos'
             */
            VaBACC_r_CostFactSOCPos[(i)] = BACR_ac_B.Merge2[i];

            /* Merge: '<S21>/Merge2' incorporates:
             *  Inport: '<S195>/CostFac_Neg'
             */
            VaBACC_r_CostFactSOCNeg[(i)] = BACR_ac_B.Merge3[i];
        }

        /* Update for UnitDelay: '<S199>/Unit Delay1' incorporates:
         *  Constant: '<S199>/TRUE Constant'
         */
        BACR_ac_DW.UnitDelay1_DSTATE_o = true;

        /* End of Outputs for SubSystem: '<S21>/Passthrough' */
    }

    /* End of If: '<S21>/If' */
    /* End of Outputs for SubSystem: '<S4>/BACC_Battery_PowerShift' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeHPMR_e_PropSysMode' */
    (void)Rte_Read_VeHPMR_e_PropSysMode_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* Outputs for Atomic SubSystem: '<S4>/BACC_Battery_PowerShift' */
    for (i = 0; i < 2; i++)
    {
        /* Gain: '<S18>/Gain' */
        rtb_Sum2_jp[i] = VaBACC_r_CostFactSOCPos[(i)];

        /* Gain: '<S19>/Gain' */
        Gain_l[i] = VaBACC_r_CostFactSOCNeg[(i)];
    }

    /* Logic: '<S21>/Logical1' */
    VeBACC_b_BypassRtLmtr_TactPshift = (((VeBACC_b_TOCPshift_Actv) ||
        (BACR_ac_B.Comparison2)) || rtb_TmpSignalConversionAtVePLTR_b_InFiel);

    /* Gain: '<S197>/Gain' incorporates:
     *  UnitDelay: '<S21>/Unit Delay'
     */
    VaBACC_P_BattPwrShift[0] = VaBACC_P_BatPwrShift_PostOilDilnLimit[0];
    VaBACC_P_BattPwrShift[1] = BACR_ac_DW.UnitDelay_DSTATE_i;

    /* End of Outputs for SubSystem: '<S4>/BACC_Battery_PowerShift' */

    /* Outputs for Atomic SubSystem: '<S4>/BACC_Electric_Power_PedalFactor' */
    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S253>/Constant'
     *  Inport: '<Root>/VeBCPR_M_BeltCapMaxPrll'
     *  Inport: '<Root>/VeHPMR_e_PropSysMode'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     *  Inport: '<Root>/VeMTQR_M_MtrA_MaxTorq_LT'
     *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT'
     *  RelationalOperator: '<S9>/Comparison4'
     */
    if (((uint32)tmpRead_4) == CeHPMR_e_Hybrid)
    {
        (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_Sum2_m);
        (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead_3);
        (void)Rte_Read_VeBCPR_M_BeltCapMaxPrll_Value(&tmpRead_2);
        (void)Rte_Read_VeMTQR_M_MtrB_MaxTorq_LT_Value(&tmpRead_1);
        (void)Rte_Read_VeMTQR_M_MtrA_MaxTorq_LT_Value(&tmpRead_0);

        /* Switch: '<S9>/Switch2' incorporates:
         *  Inport: '<Root>/VeBCPR_M_BeltCapMaxPrll'
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
         *  Inport: '<Root>/VeMTQR_M_MtrA_MaxTorq_LT'
         *  Inport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT'
         *  Lookup_n-D: '<S258>/Vector'
         *  Lookup_n-D: '<S259>/Vector'
         *  Lookup_n-D: '<S260>/Vector'
         *  Lookup_n-D: '<S261>/Vector'
         *  Lookup_n-D: '<S262>/Vector'
         *  MinMax: '<S9>/MinMax'
         *  MinMax: '<S9>/MinMax1'
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
         *  Sum: '<S9>/Sum1'
         */
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc = fminf(fminf(fminf(fminf
            (look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((
            const float32 *)&(KxBACR_r_ElectrPdlFact_SOC[0])), ((const float32 *)
            &(KtBACR_r_ElectrPdlFact_SOC[0])), 6U), look2_iflf_binlca_16a
             (tmpRead_3, fminf(tmpRead_0, tmpRead_2), ((const float32 *)
            &(KxBACR_r_ElectrPdlFact_MtrATorq[0])), ((const float32 *)
            &(KyBACR_r_ElectrPdlFact_MtrATorq[0])), ((const float32 *)
            &(KtBACR_r_ElectrPdlFact_MtrATorq[0])), BACR_ac_ConstP.pooled12, 8U)),
            look2_iflf_binlca_16a(rtb_Sum2_m, tmpRead_1, ((const float32 *)
            &(KxBACR_r_ElectrPdlFact_MtrBTorq[0])), ((const float32 *)
            &(KyBACR_r_ElectrPdlFact_MtrBTorq[0])), ((const float32 *)
            &(KtBACR_r_ElectrPdlFact_MtrBTorq[0])), BACR_ac_ConstP.pooled12, 8U)),
            look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_T_BatMod, ((
            const float32 *)&(KxBACR_r_ElectrPdlFact_BattTemp[0])), ((const
            float32 *)&(KtBACR_r_ElectrPdlFact_BattTemp[0])), 5U)),
            look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVaOSMR_P_PShift[1] -
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc, ((const float32 *)
            &(KxBACR_r_ElectrPdlFact_PBattMax[0])), ((const float32 *)
            &(KtBACR_r_ElectrPdlFact_PBattMax[0])), 4U));
    }
    else
    {
        /* Switch: '<S9>/Switch2' incorporates:
         *  Constant: '<S9>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc = 0.0F;
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S9>/GradientLimiter' */
    /* Sum: '<S255>/Sum2' incorporates:
     *  UnitDelay: '<S255>/Unit Delay'
     */
    rtb_Sum2_e = rtb_TmpSignalConversionAtVeABCR_P_HV_Acc -
        VeBACC_r_ElecPwrTorq_PedalFact;

    /* Outputs for Atomic SubSystem: '<S255>/Limiter' */
    /* Switch: '<S263>/Switch1' incorporates:
     *  Constant: '<S257>/Calib'
     *  RelationalOperator: '<S263>/Relational Operator'
     */
    if (KeBACR_r_ElectrPdlFact_LU < rtb_Sum2_e)
    {
        /* Switch: '<S263>/Switch1' */
        rtb_Sum2_e = KeBACR_r_ElectrPdlFact_LU;
    }

    /* End of Switch: '<S263>/Switch1' */

    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S256>/Calib'
     *  RelationalOperator: '<S263>/Relational Operator1'
     */
    if (rtb_Sum2_e <= KeBACR_r_ElectrPdlFact_LD)
    {
        rtb_Sum2_e = KeBACR_r_ElectrPdlFact_LD;
    }

    /* End of Switch: '<S263>/Switch' */
    /* End of Outputs for SubSystem: '<S255>/Limiter' */

    /* Sum: '<S255>/Sum3' incorporates:
     *  UnitDelay: '<S255>/Unit Delay'
     */
    VeBACC_r_ElecPwrTorq_PedalFact = rtb_Sum2_e + VeBACC_r_ElecPwrTorq_PedalFact;

    /* End of Outputs for SubSystem: '<S9>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S4>/BACC_Electric_Power_PedalFactor' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* MinMax: '<S10>/MinMax5' incorporates:
     *  Gain: '<S322>/Gain'
     */
    rtb_TmpSignalConversionAtVeABCR_P_HV_Acc = fmaxf(rtb_Vector_bs, rtb_MinMax3);

    /* Sum: '<S8>/Sum2' incorporates:
     *  Constant: '<S229>/Calib'
     */
    rtb_Sum2_m = KeBACR_Pct_ChrgDplgtSOCHyst +
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis' */
    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S232>/Calib'
     *  RelationalOperator: '<S223>/Greater  Than'
     *  Sum: '<S8>/Sum1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > (rtb_Sum2_m +
            KeBACR_Pct_ChrgSustnSOCHyst))
    {
        /* Switch: '<S223>/Switch1' incorporates:
         *  Constant: '<S223>/Constant Value'
         */
        VeBACC_b_CD_SOC = true;
    }
    else
    {
        /* Switch: '<S223>/Switch1' incorporates:
         *  RelationalOperator: '<S223>/Greater  Than1'
         *  UnitDelay: '<S223>/Unit Delay'
         */
        VeBACC_b_CD_SOC = ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >=
                            rtb_Sum2_m) && (VeBACC_b_CD_SOC));
    }

    /* End of Switch: '<S223>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis' */

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S237>/Calib'
     *  Logic: '<S8>/Logical12'
     */
    if (KeBACR_b_DsblCDPluginChrg)
    {
        rtb_LogicalOperator4 = !VeBACI_b_PluggedInChrg;
    }
    else
    {
        rtb_LogicalOperator4 = VeBACI_b_PluggedInChrg;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Logic: '<S8>/Logical5' incorporates:
     *  Constant: '<S221>/Calib'
     *  Constant: '<S233>/Calib'
     *  Logic: '<S8>/Logical10'
     *  Logic: '<S8>/Logical4'
     */
    rtb_LogicalOperator4 = ((rtb_LogicalOperator4 ||
        (KeBACR_b_CStoCDPlugInChrg_Ovrd)) && ((VeBACC_b_CD_SOC) ||
        (HeBACR_b_CDSOC_Ovrd)));

    /* Outputs for Atomic SubSystem: '<S241>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S250>/EdgeRising' */
    /* Logic: '<S251>/AND' incorporates:
     *  Logic: '<S251>/OR1'
     *  UnitDelay: '<S251>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = (rtb_LogicalOperator4 &&
        (!BACR_ac_DW.UnitDelay_DSTATE_bg));

    /* Update for UnitDelay: '<S251>/Unit Delay' */
    BACR_ac_DW.UnitDelay_DSTATE_bg = rtb_LogicalOperator4;

    /* End of Outputs for SubSystem: '<S250>/EdgeRising' */

    /* Switch: '<S250>/Switch1' incorporates:
     *  Constant: '<S250>/Constant Value'
     *  Constant: '<S250>/Constant Value1'
     *  Logic: '<S250>/OR'
     *  Logic: '<S250>/OR1'
     *  MinMax: '<S250>/Minimum'
     *  Sum: '<S250>/Summation'
     *  UnitDelay: '<S250>/Unit Delay'
     */
    if ((!rtb_LogicalOperator4) || rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        BACR_ac_DW.UnitDelay_DSTATE_k = 0U;
    }
    else if (9 < ((sint32)((uint16)(((uint32)BACR_ac_DW.UnitDelay_DSTATE_k) + 1U))))
    {
        /* MinMax: '<S250>/Minimum' */
        BACR_ac_DW.UnitDelay_DSTATE_k = 9U;
    }
    else
    {
        /* MinMax: '<S250>/Minimum' incorporates:
         *  Constant: '<S250>/Constant Value'
         *  Sum: '<S250>/Summation'
         *  UnitDelay: '<S250>/Unit Delay'
         */
        BACR_ac_DW.UnitDelay_DSTATE_k = (uint16)(((uint32)
            BACR_ac_DW.UnitDelay_DSTATE_k) + 1U);
    }

    /* End of Switch: '<S250>/Switch1' */

    /* Logic: '<S250>/AND' incorporates:
     *  Constant: '<S241>/Constant Value'
     *  RelationalOperator: '<S250>/Greater  Than'
     *  UnitDelay: '<S250>/Unit Delay'
     */
    VeBACC_b_Charged_AboveSOCLmt = (rtb_LogicalOperator4 && (((sint32)
        BACR_ac_DW.UnitDelay_DSTATE_k) >= 9));

    /* End of Outputs for SubSystem: '<S241>/Turn On Delay Sample' */

    /* Outputs for Enabled SubSystem: '<S8>/Charge_Depleting_DS' incorporates:
     *  EnablePort: '<S210>/Enable'
     */
    /* DataStoreWrite: '<S210>/Data Store Write' */
    BACR_ac_DW.NeBACR_b_ChargeDepleting = ((VeBACC_b_Charged_AboveSOCLmt) ||
        (BACR_ac_DW.NeBACR_b_ChargeDepleting));

    /* End of Outputs for SubSystem: '<S8>/Charge_Depleting_DS' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeENGR_b_EngCombustionCmnd' */
    (void)Rte_Read_VeENGR_b_EngCombustionCmnd_Value(&rtb_AND_hb);

    /* Inport: '<Root>/VeESSR_e_HybEngSysActv' */
    (void)Rte_Read_VeESSR_e_HybEngSysActv_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* Outputs for Atomic SubSystem: '<S8>/Signal Latch On With Reset' */
    /* Logic: '<S240>/OR1' incorporates:
     *  Constant: '<S215>/Constant'
     *  Inport: '<Root>/VeESSR_e_HybEngSysActv'
     *  Logic: '<S240>/NOT'
     *  Logic: '<S240>/OR'
     *  Logic: '<S8>/Logical11'
     *  RelationalOperator: '<S8>/Relational Operator'
     *  UnitDelay: '<S240>/Unit Delay'
     *  UnitDelay: '<S8>/Unit Delay1'
     */
    BACR_ac_DW.UnitDelay_DSTATE_f = (((((uint32)tmpRead_8) ==
        CeESSR_e_HybEngEnabledOn) && rtb_AND_hb) ||
        ((!BACR_ac_DW.UnitDelay1_DSTATE_dp) && (BACR_ac_DW.UnitDelay_DSTATE_f)));

    /* End of Outputs for SubSystem: '<S8>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S8>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S242>/EdgeRising' */
    /* Logic: '<S252>/AND' incorporates:
     *  Logic: '<S252>/OR1'
     *  UnitDelay: '<S252>/Unit Delay'
     */
    rtb_AND_hb = !BACR_ac_DW.UnitDelay_DSTATE_cs;

    /* Update for UnitDelay: '<S252>/Unit Delay' incorporates:
     *  Constant: '<S8>/TRUE Constant3'
     */
    BACR_ac_DW.UnitDelay_DSTATE_cs = true;

    /* End of Outputs for SubSystem: '<S242>/EdgeRising' */

    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S222>/Calib'
     *  Constant: '<S242>/Constant Value1'
     *  Constant: '<S8>/Constant Value18'
     *  Logic: '<S242>/OR'
     *  MinMax: '<S242>/Minimum'
     *  Sum: '<S242>/Summation'
     *  UnitDelay: '<S242>/Unit Delay'
     */
    if (rtb_AND_hb)
    {
        BACR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
    }
    else
    {
        BACR_ac_DW.UnitDelay_DSTATE_a = fminf(2.0F, HeBACR_t_dT +
            BACR_ac_DW.UnitDelay_DSTATE_a);
    }

    /* End of Switch: '<S242>/Switch1' */

    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S8>/Constant Value18'
     *  RelationalOperator: '<S242>/Greater  Than'
     *  UnitDelay: '<S242>/Unit Delay'
     */
    if (BACR_ac_DW.UnitDelay_DSTATE_a >= 2.0F)
    {
        /* Switch: '<S8>/Switch4' incorporates:
         *  Constant: '<S236>/Calib'
         *  DataStoreRead: '<S8>/Data Store Read1'
         *  Logic: '<S8>/Logical20'
         *  Logic: '<S8>/Logical6'
         *  Logic: '<S8>/Logical8'
         *  Logic: '<S8>/Logical9'
         *  UnitDelay: '<S240>/Unit Delay'
         */
        VeBACC_b_CDSOC_NoEngSt = ((((!BACR_ac_DW.UnitDelay_DSTATE_f) &&
            (KeBACR_b_ChrgSustEngCond)) || (VeBACC_b_CD_SOC)) &&
            (BACR_ac_DW.NeBACR_b_ChargeDepleting));
    }
    else
    {
        /* Switch: '<S8>/Switch4' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read1'
         */
        VeBACC_b_CDSOC_NoEngSt = BACR_ac_DW.NeBACR_b_ChargeDepleting;
    }

    /* End of Switch: '<S8>/Switch4' */
    /* End of Outputs for SubSystem: '<S8>/Turn On Delay Time' */

    /* Logic: '<S8>/Logical7' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     */
    rtb_AND_hb = ((BACR_ac_DW.NeBACR_b_ChargeDepleting) &&
                  (VeBACC_b_CDSOC_NoEngSt));

    /* Outputs for Atomic SubSystem: '<S220>/EdgeFalling1' */
    /* Logic: '<S220>/AND2' incorporates:
     *  Logic: '<S246>/OR1'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = !rtb_AND_hb;

    /* End of Outputs for SubSystem: '<S220>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S220>/Signal Latch Off' */
    /* Logic: '<S248>/OR2' incorporates:
     *  Logic: '<S220>/AND2'
     *  Logic: '<S248>/Logical1'
     *  UnitDelay: '<S248>/Unit Delay'
     */
    rtb_Comparison8 = (rtb_TmpSignalConversionAtVePLTR_b_InFiel &&
                       (!BACR_ac_DW.UnitDelay_DSTATE_a2));

    /* Logic: '<S248>/Logical2' incorporates:
     *  UnitDelay: '<S248>/Unit Delay'
     */
    BACR_ac_DW.UnitDelay_DSTATE_a2 = !rtb_Comparison8;

    /* End of Outputs for SubSystem: '<S220>/Signal Latch Off' */

    /* Outputs for Atomic SubSystem: '<S220>/EdgeRising' */
    /* Logic: '<S247>/AND' incorporates:
     *  Logic: '<S247>/OR1'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    rtb_LogicalOperator4 = (rtb_Comparison8 && (!BACR_ac_DW.UnitDelay_DSTATE_a2l));

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    BACR_ac_DW.UnitDelay_DSTATE_a2l = rtb_Comparison8;

    /* End of Outputs for SubSystem: '<S220>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S220>/EdgeFalling1' */
    /* Logic: '<S246>/AND' incorporates:
     *  UnitDelay: '<S246>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel =
        (rtb_TmpSignalConversionAtVePLTR_b_InFiel &&
         (BACR_ac_DW.UnitDelay_DSTATE_bu));

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    BACR_ac_DW.UnitDelay_DSTATE_bu = rtb_AND_hb;

    /* End of Outputs for SubSystem: '<S220>/EdgeFalling1' */

    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S220>/Constant Value5'
     *  Logic: '<S220>/AND3'
     *  Sum: '<S220>/Summation'
     *  UnitDelay: '<S220>/Unit Delay'
     */
    if (rtb_LogicalOperator4 || rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        BACR_ac_DW.UnitDelay_DSTATE_dm = 19U;
    }
    else
    {
        /* Sum: '<S220>/Summation' incorporates:
         *  Constant: '<S220>/Constant Value2'
         *  UnitDelay: '<S220>/Unit Delay'
         */
        i = ((sint32)BACR_ac_DW.UnitDelay_DSTATE_dm) - 1;
        if ((((sint32)BACR_ac_DW.UnitDelay_DSTATE_dm) - 1) < 0)
        {
            i = 0;
        }

        BACR_ac_DW.UnitDelay_DSTATE_dm = (uint8)i;
    }

    /* End of Switch: '<S220>/Switch' */

    /* Logic: '<S220>/AND1' incorporates:
     *  Constant: '<S220>/Constant Value4'
     *  RelationalOperator: '<S220>/Greater  Than'
     *  UnitDelay: '<S220>/Unit Delay'
     */
    VeBACC_b_ChargeDepleting = (rtb_AND_hb || (((sint32)
        BACR_ac_DW.UnitDelay_DSTATE_dm) > 0));

    /* Outputs for Atomic SubSystem: '<S8>/EdgeFalling' */
    /* Logic: '<S218>/AND' incorporates:
     *  Logic: '<S218>/OR1'
     *  UnitDelay: '<S218>/Unit Delay'
     */
    rtb_AND_hb = ((!VeBACC_b_ChargeDepleting) && (BACR_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    BACR_ac_DW.UnitDelay_DSTATE_g = VeBACC_b_ChargeDepleting;

    /* End of Outputs for SubSystem: '<S8>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis1' */
    /* Switch: '<S224>/Switch1' incorporates:
     *  Constant: '<S224>/Constant Value'
     *  Constant: '<S230>/Calib'
     *  Constant: '<S231>/Calib'
     *  RelationalOperator: '<S224>/Greater  Than'
     *  RelationalOperator: '<S224>/Greater  Than1'
     *  Sum: '<S8>/Sum3'
     *  Sum: '<S8>/Sum4'
     *  UnitDelay: '<S224>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >
            (KeBACR_Pct_ChrgIncrSOCDeltaRSP +
             rtb_TmpSignalConversionAtVeABCR_P_HV_Acc))
    {
        BACR_ac_DW.UnitDelay_DSTATE_cp = true;
    }
    else
    {
        BACR_ac_DW.UnitDelay_DSTATE_cp =
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >=
              (rtb_TmpSignalConversionAtVeABCR_P_HV_Acc -
               KeBACR_Pct_ChrgIncrSOCDeltaLSP)) &&
             (BACR_ac_DW.UnitDelay_DSTATE_cp));
    }

    /* End of Switch: '<S224>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* Logic: '<S8>/Logical13' incorporates:
     *  Constant: '<S234>/Calib'
     *  Gain: '<S322>/Gain'
     *  Logic: '<S8>/Logical14'
     *  Logic: '<S8>/Logical16'
     *  Logic: '<S8>/Logical17'
     *  RelationalOperator: '<S8>/Relational Operator1'
     *  UnitDelay: '<S224>/Unit Delay'
     *  UnitDelay: '<S240>/Unit Delay'
     */
    VeBACC_b_ChargeIncreasing = ((((VeBACC_b_CImode) &&
        (!BACR_ac_DW.UnitDelay_DSTATE_cp)) && ((!KeBACR_b_ChrgIncrEngCond) ||
        (BACR_ac_DW.UnitDelay_DSTATE_f))) &&
        (rtb_TmpSignalConversionAtVeABCR_P_HV_Acc > rtb_Vector_bs));

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising' */
    /* Logic: '<S219>/AND' incorporates:
     *  Logic: '<S219>/OR1'
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_LogicalOperator4 = ((VeBACC_b_ChargeIncreasing) &&
                            (!BACR_ac_DW.UnitDelay_DSTATE_nh));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    BACR_ac_DW.UnitDelay_DSTATE_nh = VeBACC_b_ChargeIncreasing;

    /* End of Outputs for SubSystem: '<S8>/EdgeRising' */

    /* Outputs for Enabled SubSystem: '<S8>/Charge_Sustaining_DS' incorporates:
     *  EnablePort: '<S213>/Enable'
     */
    /* DataStoreWrite: '<S213>/Data Store Write' incorporates:
     *  Constant: '<S237>/Calib'
     *  Logic: '<S8>/Logical19'
     *  Switch: '<S8>/Switch2'
     */
    BACR_ac_DW.NeBACR_b_ChargeDepleting = ((((!rtb_AND_hb) &&
        (!rtb_LogicalOperator4)) && ((!KeBACR_b_DsblCDPluginChrg) ||
        (!VeBACI_b_PluggedInChrg))) && (BACR_ac_DW.NeBACR_b_ChargeDepleting));

    /* End of Outputs for SubSystem: '<S8>/Charge_Sustaining_DS' */

    /* RelationalOperator: '<S8>/Comparison1' incorporates:
     *  Constant: '<S214>/Constant'
     *  Constant: '<S238>/Calib'
     */
    rtb_AND_hb = (CeBACR_e_EnhancedHybridEV == ((uint32)KeBACR_e_HybridEV_Type));

    /* RelationalOperator: '<S297>/Relational Operator' incorporates:
     *  Constant: '<S235>/Calib'
     *  Switch: '<S8>/Switch3'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = ((KeBACR_b_ChrgStVehTypeIndpdnt) ||
        rtb_AND_hb);

    /* If: '<S8>/If' incorporates:
     *  Constant: '<S235>/Calib'
     *  Logic: '<S8>/Logical'
     *  Logic: '<S8>/Logical1'
     *  Logic: '<S8>/Logical3'
     *  Switch: '<S8>/Switch5'
     */
    if (tmpRead_6 && rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Outputs for IfAction SubSystem: '<S8>/Not_PSA' incorporates:
         *  ActionPort: '<S239>/Action Port'
         */
        /* Merge: '<S8>/Merge' incorporates:
         *  Constant: '<S249>/Constant'
         *  SignalConversion generated from: '<S239>/Not_PSA'
         */
        VeBACC_e_ChargeSustn = CeBACR_e_PropSystem_NotActive;

        /* End of Outputs for SubSystem: '<S8>/Not_PSA' */
    }
    else if (rtb_TmpSignalConversionAtVePLTR_b_InFiel &&
             (VeBACC_b_ChargeIncreasing))
    {
        /* Outputs for IfAction SubSystem: '<S8>/Charge_Incrsng' incorporates:
         *  ActionPort: '<S211>/Action Port'
         */
        /* Merge: '<S8>/Merge' incorporates:
         *  Constant: '<S244>/Constant'
         *  SignalConversion generated from: '<S211>/Charge_Incrsng'
         */
        VeBACC_e_ChargeSustn = CeBACR_e_ChargeIncreasing;

        /* End of Outputs for SubSystem: '<S8>/Charge_Incrsng' */
    }
    else
    {
        if (KeBACR_b_ChrgStVehTypeIndpdnt)
        {
            /* Switch: '<S8>/Switch5' incorporates:
             *  Constant: '<S8>/TRUE Constant1'
             */
            tmpRead_6 = true;
        }
        else
        {
            /* Switch: '<S8>/Switch5' incorporates:
             *  Constant: '<S216>/Constant'
             *  Logic: '<S8>/Logical18'
             *  RelationalOperator: '<S8>/Comparison4'
             */
            tmpRead_6 = (rtb_AND_hb || (((uint32)KeBACR_e_HybridEV_Type) ==
                          CeBACR_e_PlugInHybridEV));
        }

        if (tmpRead_6 && (VeBACC_b_ChargeDepleting))
        {
            /* Outputs for IfAction SubSystem: '<S8>/Charge_Depleting' incorporates:
             *  ActionPort: '<S209>/Action Port'
             */
            /* Merge: '<S8>/Merge' incorporates:
             *  Constant: '<S243>/Constant'
             *  SignalConversion generated from: '<S209>/Charge_Dpltng'
             */
            VeBACC_e_ChargeSustn = CeBACR_e_ChargeDepleting;

            /* End of Outputs for SubSystem: '<S8>/Charge_Depleting' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S8>/Charge_Sustaining' incorporates:
             *  ActionPort: '<S212>/Action Port'
             */
            /* Merge: '<S8>/Merge' incorporates:
             *  Constant: '<S245>/Constant'
             *  SignalConversion generated from: '<S212>/Charge_Sustn'
             */
            VeBACC_e_ChargeSustn = CeBACR_e_ChargeSustaining;

            /* End of Outputs for SubSystem: '<S8>/Charge_Sustaining' */
        }
    }

    /* End of If: '<S8>/If' */

    /* Switch: '<S10>/Switch1' */
    if (!VeBACI_b_PluggedInChrg)
    {
        /* Switch: '<S10>/Switch1' */
        rtb_Switch1_cm = VeBACC_Pct_TargetSOC_DriveRaw;
    }

    /* End of Switch: '<S10>/Switch1' */

    /* MinMax: '<S10>/MinMax' */
    VeBACC_Pct_TargetSOC_Stgc = fmaxf(rtb_Switch1_cm,
        VeBACC_Pct_TargetSOC_DriveRaw);

    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S275>/Calib'
     *  Selector: '<S270>/Selector2'
     *  Selector: '<S270>/Selector6'
     */
    if (!KaBACR_b_UseRawTgtSOC4StrtStpArb[((sint32)rtb_Switch3_pr) - 1])
    {
        rtb_MinMax3 = VeBACC_Pct_TargetSOCOfstBlnd;
    }

    /* End of Switch: '<S270>/Switch1' */

    /* MinMax: '<S10>/MinMax4' */
    VeBACC_Pct_TargetSOC_StartStop = fmaxf(rtb_MinMax3,
        VeBACC_Pct_TargetSOC_Stgc);

    /* Switch: '<S270>/Switch2' incorporates:
     *  UnitDelay: '<S270>/Unit Delay2'
     */
    if (!rtb_RelationalOperator_i)
    {
        BACR_ac_DW.UnitDelay2_DSTATE = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    }

    /* End of Switch: '<S270>/Switch2' */

    /* Lookup_n-D: '<S295>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    rtb_Vector_bs = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
          &(KxBACR_P_SOCPshiftOpng[0])), ((const float32 *)
          &(KtBACR_P_SOCPshiftOpng[0])), 5U);

    /* RelationalOperator: '<S298>/Relational Operator' incorporates:
     *  Constant: '<S13>/Constant Value'
     *  RelationalOperator: '<S13>/Comparison7'
     */
    rtb_RelationalOperator_i = (rtb_Vector_bs > -100.0F);

    /* Sum: '<S13>/Sum' */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B =
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc -
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;

    /* Outputs for Atomic SubSystem: '<S13>/Hysteresis' */
    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S286>/Constant Value'
     *  Constant: '<S289>/Calib'
     *  Constant: '<S290>/Calib'
     *  RelationalOperator: '<S286>/Greater  Than'
     *  RelationalOperator: '<S286>/Greater  Than1'
     *  UnitDelay: '<S286>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >
            KeBACR_Pct_deltaSOC_ContChargePwrLmt_RSP)
    {
        BACR_ac_DW.UnitDelay_DSTATE_d5 = true;
    }
    else
    {
        BACR_ac_DW.UnitDelay_DSTATE_d5 =
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >=
              KeBACR_Pct_deltaSOC_ContChargePwrLmt_LSP) &&
             (BACR_ac_DW.UnitDelay_DSTATE_d5));
    }

    /* End of Switch: '<S286>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Hysteresis' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeBPCR_P_TracBat_EChrgPowLongMod' */
    (void)Rte_Read_VeBPCR_P_TracBat_EChrgPowLongMod_Value(&rtb_Switch5);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* Switch: '<S13>/Switch5' incorporates:
     *  UnitDelay: '<S286>/Unit Delay'
     */
    if (!BACR_ac_DW.UnitDelay_DSTATE_d5)
    {
        /* Switch: '<S13>/Switch5' incorporates:
         *  Constant: '<S288>/Calib'
         */
        rtb_Switch5 = KeBACR_P_PbatMin_Dflt;
    }

    /* End of Switch: '<S13>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeRTMR_b_GPFRegenTestEnbl' */
    (void)Rte_Read_VeRTMR_b_GPFRegenTestEnbl_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* Switch: '<S13>/Switch3' incorporates:
     *  MinMax: '<S13>/MinMax1'
     */
    if (rtb_RelationalOperator_i)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B =
            rtb_TmpSignalConversionAtVaOSMR_P_PShi_j[0];
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = fmaxf
            (rtb_TmpSignalConversionAtVaOSMR_P_PShi_j[0], rtb_Switch5);
    }

    /* End of Switch: '<S13>/Switch3' */

    /* Product: '<S13>/Product3' incorporates:
     *  Constant: '<S294>/Calib'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B *= KeBACR_r_BatPwrShft_LTMin_FactMX;

    /* Product: '<S13>/Product2' incorporates:
     *  Constant: '<S293>/Calib'
     */
    rtb_Switch1_cm = KeBACR_r_BatPwrShft_LTMax_FactMN *
        rtb_TmpSignalConversionAtVaOSMR_P_PShift[0];

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S4>/PowerShiftRL' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACI_Input_Processing'
     */
    /* Switch: '<S298>/Switch1' incorporates:
     *  Inport: '<S5>/Trans_No_in'
     *  Lookup_n-D: '<S300>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     */
    rtb_Switch12 = look2_iflf_binlca_16a
        (rtb_VariantMerge_For_Variant_Source_Vari,
         rtb_TmpSignalConversionAtVeBPCR_T_BatMod, ((const float32 *)
          &(KxBACR_dP_BattPwrShftRt_2DLT[0])), ((const float32 *)
          &(KyBACR_dP_BattPwrShftRt_2DLT[0])), ((const float32 *)
          &(KtBACR_dP_BattPwrShftRt_2DLT[0])), BACR_ac_ConstP.Vector_maxIndex_b,
         5U);

    /* Switch: '<S15>/Switch4' */
    rtb_Switch4[0] = rtb_Switch12;

    /* Switch: '<S15>/Switch4' */
    if (VeBACC_b_BypassRtLmtr_TactPshift)
    {
        /* Switch: '<S15>/Switch4' incorporates:
         *  Constant: '<S15>/Constant Value2'
         */
        rtb_Switch4[1] = 9999.0F;
    }
    else
    {
        /* Switch: '<S15>/Switch4' */
        rtb_Switch4[1] = rtb_Switch12;
    }

    /* Switch: '<S15>/Switch4' */
    rtb_Switch4[2] = rtb_Switch12;
    for (i = 0; i < 3; i++)
    {
        /* Gain: '<S15>/Gain' */
        rtb_Gain[i] = -rtb_Switch4[i];
    }

    /* Outputs for Atomic SubSystem: '<S15>/GradientLimiter' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S299>/Sum2' incorporates:
         *  UnitDelay: '<S299>/Unit Delay'
         */
        rtb_Sum2_cd[i] = VaBACC_P_BattPwrShift[(i)] -
            BACR_ac_DW.UnitDelay_DSTATE[i];
    }

    /* Sum: '<S299>/Sum2' incorporates:
     *  UnitDelay: '<S299>/Unit Delay'
     */
    rtb_Sum2_cd[2] = VeBACC_P_BattPwrShiftIdle - BACR_ac_DW.UnitDelay_DSTATE[2];

    /* Outputs for Atomic SubSystem: '<S299>/Limiter' */
    for (i = 0; i < 3; i++)
    {
        /* RelationalOperator: '<S302>/Relational Operator' */
        rtb_VariantMerge_For_Variant_Source_Vari = rtb_Switch4[i];

        /* RelationalOperator: '<S302>/Relational Operator1' */
        rtb_TmpSignalConversionAtVeABCR_P_HV_Acc = rtb_Gain[i];

        /* RelationalOperator: '<S302>/Relational Operator' */
        rtb_Sum2_m = rtb_Sum2_cd[i];

        /* Switch: '<S302>/Switch1' incorporates:
         *  RelationalOperator: '<S302>/Relational Operator'
         */
        if (rtb_VariantMerge_For_Variant_Source_Vari >= rtb_Sum2_m)
        {
            /* Switch: '<S302>/Switch1' */
            rtb_VariantMerge_For_Variant_Source_Vari = rtb_Sum2_m;
        }

        /* End of Switch: '<S302>/Switch1' */

        /* Switch: '<S302>/Switch' incorporates:
         *  RelationalOperator: '<S302>/Relational Operator1'
         */
        if (rtb_VariantMerge_For_Variant_Source_Vari >
                rtb_TmpSignalConversionAtVeABCR_P_HV_Acc)
        {
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc =
                rtb_VariantMerge_For_Variant_Source_Vari;
        }

        /* End of Switch: '<S302>/Switch' */

        /* Sum: '<S299>/Sum3' incorporates:
         *  RelationalOperator: '<S302>/Relational Operator1'
         *  UnitDelay: '<S299>/Unit Delay'
         */
        BACR_ac_DW.UnitDelay_DSTATE[i] +=
            rtb_TmpSignalConversionAtVeABCR_P_HV_Acc;

        /* Switch: '<S302>/Switch1' incorporates:
         *  RelationalOperator: '<S302>/Relational Operator'
         */
        rtb_Switch4[i] = rtb_VariantMerge_For_Variant_Source_Vari;
    }

    /* End of Outputs for SubSystem: '<S299>/Limiter' */
    /* End of Outputs for SubSystem: '<S15>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S4>/PowerShiftRL' */

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S291>/Calib'
     *  Logic: '<S13>/Logical'
     *  Switch: '<S13>/Switch2'
     */
    if ((KeBACR_b_GPFSrvcReq_PshiftOvrrdEnbl) && tmpRead_9)
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S287>/Calib'
         */
        for (i = 0; i < 3; i++)
        {
            rtb_Switch4[i] = KeBACR_P_GPFSrvcReq_Pshift;
        }
    }
    else
    {
        if (VeBACI_b_InPlantMode)
        {
            /* Switch: '<S13>/Switch4' incorporates:
             *  Constant: '<S292>/Calib'
             *  Switch: '<S13>/Switch2'
             */
            if (!KeBACR_b_InPlntEnblPshiftOpng)
            {
                /* Switch: '<S13>/Switch2' incorporates:
                 *  Constant: '<S13>/Constant Value1'
                 */
                rtb_Vector_bs = -9999.0F;
            }

            /* End of Switch: '<S13>/Switch4' */
        }

        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S13>/Constant Value2'
         *  MinMax: '<S13>/MinMax3'
         *  UnitDelay: '<S299>/Unit Delay'
         */
        rtb_Switch4[0] = fmaxf(rtb_Vector_bs, BACR_ac_DW.UnitDelay_DSTATE[0]);
        rtb_Switch4[1] = fmaxf(rtb_Vector_bs, BACR_ac_DW.UnitDelay_DSTATE[1]);
        rtb_Switch4[2] = fmaxf(-9999.0F, BACR_ac_DW.UnitDelay_DSTATE[2]);
    }

    /* End of Switch: '<S13>/Switch' */

    /* Outputs for Atomic SubSystem: '<S13>/Limiter' */
    /* Switch: '<S296>/Switch1' incorporates:
     *  RelationalOperator: '<S296>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B < rtb_Switch4[0])
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    }
    else
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = rtb_Switch4[0];
    }

    /* End of Switch: '<S296>/Switch1' */

    /* Switch: '<S296>/Switch' incorporates:
     *  RelationalOperator: '<S296>/Relational Operator1'
     */
    if (rtb_Switch12 > rtb_Switch1_cm)
    {
        /* Outputs for Function Call SubSystem: '<S1>/BACO_Output_Processing' */
        /* Gain: '<S337>/Gain' incorporates:
         *  Outport: '<Root>/VeBACR_P_BattPwrShift_Stgc'
         *  SignalConversion generated from: '<S1>/VeBACR_P_BattPwrShift_Stgc'
         */
        (void)Rte_Write_VeBACR_P_BattPwrShift_Stgc_Value(rtb_Switch12);

        /* End of Outputs for SubSystem: '<S1>/BACO_Output_Processing' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/BACO_Output_Processing' */
        /* Gain: '<S337>/Gain' incorporates:
         *  Outport: '<Root>/VeBACR_P_BattPwrShift_Stgc'
         *  SignalConversion generated from: '<S1>/VeBACR_P_BattPwrShift_Stgc'
         */
        (void)Rte_Write_VeBACR_P_BattPwrShift_Stgc_Value(rtb_Switch1_cm);

        /* End of Outputs for SubSystem: '<S1>/BACO_Output_Processing' */
    }

    /* End of Switch: '<S296>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S13>/Limiter1' */
    /* Switch: '<S297>/Switch1' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B < rtb_Switch4[2])
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    }
    else
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = rtb_Switch4[2];
    }

    /* End of Switch: '<S297>/Switch1' */

    /* Switch: '<S297>/Switch' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator1'
     */
    if (rtb_Switch12 > rtb_Switch1_cm)
    {
        /* Outputs for Function Call SubSystem: '<S1>/BACO_Output_Processing' */
        /* Outport: '<Root>/VeBACR_P_BattPwrShift_ZeroPdl' incorporates:
         *  Inport: '<S6>/BattPwrShift_ZeroPdl'
         *  SignalConversion generated from: '<S1>/VeBACR_P_BattPwrShift_ZeroPdl'
         */
        (void)Rte_Write_VeBACR_P_BattPwrShift_ZeroPdl_Value(rtb_Switch12);

        /* End of Outputs for SubSystem: '<S1>/BACO_Output_Processing' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/BACO_Output_Processing' */
        /* Outport: '<Root>/VeBACR_P_BattPwrShift_ZeroPdl' incorporates:
         *  Inport: '<S6>/BattPwrShift_ZeroPdl'
         *  SignalConversion generated from: '<S1>/VeBACR_P_BattPwrShift_ZeroPdl'
         */
        (void)Rte_Write_VeBACR_P_BattPwrShift_ZeroPdl_Value(rtb_Switch1_cm);

        /* End of Outputs for SubSystem: '<S1>/BACO_Output_Processing' */
    }

    /* End of Switch: '<S297>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/Limiter1' */

    /* Switch: '<S13>/Switch1' incorporates:
     *  MinMax: '<S13>/MinMax6'
     */
    if (rtb_RelationalOperator_i)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B =
            rtb_TmpSignalConversionAtVaOSMR_P_PShi_j[1];
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = fmaxf
            (rtb_TmpSignalConversionAtVaOSMR_P_PShi_j[1], rtb_Switch5);
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Product: '<S13>/Product1' incorporates:
     *  Constant: '<S294>/Calib'
     */
    rtb_Switch12 = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B *
        KeBACR_r_BatPwrShft_LTMin_FactMX;

    /* Product: '<S13>/Product4' incorporates:
     *  Constant: '<S293>/Calib'
     */
    rtb_Switch5 = KeBACR_r_BatPwrShft_LTMax_FactMN *
        rtb_TmpSignalConversionAtVaOSMR_P_PShift[1];

    /* Outputs for Atomic SubSystem: '<S13>/Limiter2' */
    /* Switch: '<S298>/Switch1' incorporates:
     *  RelationalOperator: '<S298>/Relational Operator'
     */
    if (rtb_Switch12 >= rtb_Switch4[1])
    {
        /* Switch: '<S298>/Switch1' */
        rtb_Switch12 = rtb_Switch4[1];
    }

    /* End of Switch: '<S298>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Limiter2' */

    /* Update for Atomic SubSystem: '<S4>/BACC_Battery_PowerShift' */
    /* Update for UnitDelay: '<S20>/Unit Delay1' */
    BACR_ac_DW.UnitDelay1_DSTATE_a = rtb_DataTypeConversion;

    /* End of Update for SubSystem: '<S4>/BACC_Battery_PowerShift' */

    /* Update for UnitDelay: '<S8>/Unit Delay1' */
    BACR_ac_DW.UnitDelay1_DSTATE_dp = VeBACC_b_CD_SOC;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACO_Output_Processing'
     */
    /* Selector: '<S6>/Selector' */
#if Rte_SysCon_Variant_BACR_1

    /* Selector: '<S6>/Selector3' incorporates:
     *  Gain: '<S18>/Gain'
     */
    rtb_Selector3 = rtb_Sum2_jp[0];

#endif

    /* End of Selector: '<S6>/Selector' */

    /* VariantMerge generated from: '<S6>/VariantSource1' incorporates:
     *  Gain: '<S18>/Gain'
     *  Selector: '<S6>/Selector1'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = rtb_Sum2_jp[1];

    /* Selector: '<S6>/Selector2' incorporates:
     *  SignalConversion generated from: '<S6>/VariantSource1'
     *  SignalConversion generated from: '<S6>/VariantSource'
     */
#if Rte_SysCon_Variant_BACR_1

    /* VariantMerge generated from: '<S6>/VariantSource1' incorporates:
     *  Gain: '<S19>/Gain'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = Gain_l[0];

#else

    /* Selector: '<S6>/Selector3' incorporates:
     *  Gain: '<S18>/Gain'
     *  Selector: '<S6>/Selector1'
     *  SignalConversion generated from: '<S6>/VariantSource'
     */
    rtb_Selector3 = rtb_Sum2_jp[1];

    /* VariantMerge generated from: '<S6>/VariantSource1' incorporates:
     *  Gain: '<S19>/Gain'
     *  Selector: '<S6>/Selector3'
     *  SignalConversion generated from: '<S6>/VariantSource1'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = Gain_l[1];

#endif

    /* End of Selector: '<S6>/Selector2' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S330>/Calib'
     */
    if (KeBACR_b_ChargeSustnOvrd)
    {
        /* Switch: '<S6>/Switch1' incorporates:
         *  Constant: '<S334>/Calib'
         */
        rtb_Switch1_ak = KeBACR_e_ChargeSustnOvrdVal;
    }
    else
    {
        /* Switch: '<S6>/Switch1' incorporates:
         *  Merge: '<S8>/Merge'
         */
        rtb_Switch1_ak = VeBACC_e_ChargeSustn;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* SignalConversion generated from: '<S6>/HybridEVType' incorporates:
     *  Constant: '<S332>/Calib'
     */
    BACR_ac_B.OutportBufferForHybridEVType = KeBACR_b_HEVSt_Supported;

    /* Outport: '<Root>/VeBACR_b_EnhancedHybridEVType' incorporates:
     *  Constant: '<S326>/Constant'
     *  Constant: '<S335>/Calib'
     *  RelationalOperator: '<S6>/Comparison4'
     *  SignalConversion generated from: '<S1>/EnhancedHybridEVType'
     */
    (void)Rte_Write_VeBACR_b_EnhancedHybridEVType_Value(((uint32)
        KeBACR_e_HybridEV_Type) == CeBACR_e_EnhancedHybridEV);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBACR_b_HybridEVType' incorporates:
     *  SignalConversion generated from: '<S1>/HybridEVType'
     */
    (void)Rte_Write_VeBACR_b_HybridEVType_Value
        (BACR_ac_B.OutportBufferForHybridEVType);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* Outputs for Atomic SubSystem: '<S13>/Limiter2' */
    /* Switch: '<S298>/Switch' incorporates:
     *  RelationalOperator: '<S298>/Relational Operator1'
     */
    if (rtb_Switch12 > rtb_Switch5)
    {
        /* Outport: '<Root>/VeBACR_P_BattPwrShift_Tact' incorporates:
         *  SignalConversion generated from: '<S1>/VeBACR_P_BattPwrShift_Tact'
         */
        (void)Rte_Write_VeBACR_P_BattPwrShift_Tact_Value(rtb_Switch12);
    }
    else
    {
        /* Outport: '<Root>/VeBACR_P_BattPwrShift_Tact' incorporates:
         *  SignalConversion generated from: '<S1>/VeBACR_P_BattPwrShift_Tact'
         */
        (void)Rte_Write_VeBACR_P_BattPwrShift_Tact_Value(rtb_Switch5);
    }

    /* End of Switch: '<S298>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/Limiter2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACO_Output_Processing'
     */
    /* Outport: '<Root>/VeBACR_Pct_TargetSOC_StartStop' incorporates:
     *  Inport: '<S6>/TargetSOC'
     *  SignalConversion generated from: '<S1>/VeBACR_Pct_TargetSOC_StartStop'
     */
    (void)Rte_Write_VeBACR_Pct_TargetSOC_StartStop_Value
        (VeBACC_Pct_TargetSOC_StartStop);

    /* Outport: '<Root>/VeBACR_Pct_TargetSOC_Stgc' incorporates:
     *  Inport: '<S6>/TargetSOC_Stgc'
     *  SignalConversion generated from: '<S1>/VeBACR_Pct_TargetSOC_Stgc'
     */
    (void)Rte_Write_VeBACR_Pct_TargetSOC_Stgc_Value(VeBACC_Pct_TargetSOC_Stgc);

    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S325>/Constant'
     *  Constant: '<S331>/Calib'
     *  Constant: '<S333>/Calib'
     *  RelationalOperator: '<S6>/Comparison2'
     *  Switch: '<S6>/Switch1'
     */
    if (KeBACR_b_Md9TIDSupported)
    {
        tmpRead_6 = KeBACR_b_HEVChrgSt4Md9TIDSpprt;
    }
    else
    {
        tmpRead_6 = (((uint32)rtb_Switch1_ak) == CeBACR_e_ChargeDepleting);
    }

    /* End of Switch: '<S6>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBACR_b_HEVChargingSt' incorporates:
     *  SignalConversion generated from: '<S1>/VeBACR_b_HEVChargingSt'
     */
    (void)Rte_Write_VeBACR_b_HEVChargingSt_Value(tmpRead_6);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACO_Output_Processing'
     */
    /* Outport: '<Root>/VeBACR_e_ChargeSustn' incorporates:
     *  DataTypeConversion: '<S327>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeBACR_e_ChargeSustn'
     *  Switch: '<S6>/Switch1'
     */
    (void)Rte_Write_VeBACR_e_ChargeSustn_Value(rtb_Switch1_ak);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCNeg_Stgc' incorporates:
     *  Gain: '<S341>/Gain'
     *  SignalConversion generated from: '<S1>/VeBACR_r_CostFactSOCNeg_Stgc'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCNeg_Stgc_Value
        (rtb_VariantMerge_For_Variant_Source_Vari);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCNeg_Tact' incorporates:
     *  Gain: '<S19>/Gain'
     *  Selector: '<S6>/Selector3'
     *  SignalConversion generated from: '<S1>/VeBACR_r_CostFactSOCNeg_Tact'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCNeg_Tact_Value(Gain_l[1]);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCPos_Stgc' incorporates:
     *  Gain: '<S339>/Gain'
     *  SignalConversion generated from: '<S1>/VeBACR_r_CostFactSOCPos_Stgc'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCPos_Stgc_Value(rtb_Selector3);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCPos_Tact' incorporates:
     *  Gain: '<S18>/Gain'
     *  Selector: '<S6>/Selector1'
     *  SignalConversion generated from: '<S1>/VeBACR_r_CostFactSOCPos_Tact'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCPos_Tact_Value(rtb_Sum2_jp[1]);

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S329>/Calib'
     */
    if (HeBACR_b_ElecPwrTorq_Ovrd)
    {
        /* Outport: '<Root>/VeBACR_r_ElecPwrTorq_PedalFact' incorporates:
         *  Constant: '<S336>/Calib'
         *  SignalConversion generated from: '<S1>/VeBACR_r_ElecPwrTorq_PedalFact'
         */
        (void)Rte_Write_VeBACR_r_ElecPwrTorq_PedalFact_Value
            (KeBACR_r_ElecPwrTorq_PedalFact);
    }
    else
    {
        /* Outport: '<Root>/VeBACR_r_ElecPwrTorq_PedalFact' incorporates:
         *  SignalConversion generated from: '<S1>/VeBACR_r_ElecPwrTorq_PedalFact'
         */
        (void)Rte_Write_VeBACR_r_ElecPwrTorq_PedalFact_Value
            (VeBACC_r_ElecPwrTorq_PedalFact);
    }

    /* End of Switch: '<S6>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, BACR_CODE) BACR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/BACR_PwrOff'
     */
    /* Outport: '<Root>/NeBACR_t_EngRunTimeInPlant_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBACR_t_EngRunTimeInPlant'
     */
    (void)Rte_Write_NeBACR_t_EngRunTimeInPlant_NeBACR_t_EngRunTimeInPlant
        (BACR_ac_DW.NeBACR_t_EngRunTimeInPlant);

    /* Outport: '<Root>/NeBACR_b_ChargeDepleting_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBACR_b_ChargeDepleting'
     */
    (void)Rte_Write_NeBACR_b_ChargeDepleting_NeBACR_b_ChargeDepleting
        (BACR_ac_DW.NeBACR_b_ChargeDepleting);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, BACR_CODE) BACR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BACR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S345>/NeBACR_b_ChargeDepleting' incorporates:
     *  Inport: '<Root>/NeBACR_b_ChargeDepleting_PM_In'
     */
    (void)Rte_Read_NeBACR_b_ChargeDepleting_Rx_NeBACR_b_ChargeDepleting
        (&BACR_ac_DW.NeBACR_b_ChargeDepleting);

    /* DataStoreWrite: '<S345>/NeBACR_t_EngRunTimeInPlant' incorporates:
     *  Inport: '<Root>/NeBACR_t_EngRunTimeInPlant_PM_In'
     */
    (void)Rte_Read_NeBACR_t_EngRunTimeInPlant_Rx_NeBACR_t_EngRunTimeInPlant
        (&BACR_ac_DW.NeBACR_t_EngRunTimeInPlant);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BACO_Initialization'
     */
    /* SignalConversion generated from: '<S344>/VeBACR_r_ElecPwrTorq_PedalFact' */
    BACR_ac_B.OutportBufferForVeBACR_r_ElecPwrTorq_Ped = 0.0F;

    /* SignalConversion generated from: '<S344>/HybridEVType_init' incorporates:
     *  Constant: '<S351>/Calib'
     */
    BACR_ac_B.OutportBufferForHybridEVType_init = KeBACR_b_HEVSt_Supported;

    /* Outport: '<Root>/VeBACR_b_EnhancedHybridEVType' incorporates:
     *  Constant: '<S347>/Constant'
     *  Constant: '<S353>/Calib'
     *  RelationalOperator: '<S344>/Comparison4'
     *  SignalConversion generated from: '<S3>/EnhancedHybridEVType_init'
     */
    (void)Rte_Write_VeBACR_b_EnhancedHybridEVType_Value(((uint32)
        KeBACR_e_HybridEV_Type) == CeBACR_e_EnhancedHybridEV);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeBACR_b_HybridEVType' incorporates:
     *  SignalConversion generated from: '<S3>/HybridEVType_init'
     */
    (void)Rte_Write_VeBACR_b_HybridEVType_Value
        (BACR_ac_B.OutportBufferForHybridEVType_init);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BACO_Initialization'
     */
    /* Outport: '<Root>/VeBACR_P_BattPwrShift_Stgc' incorporates:
     *  Constant: '<S344>/Constant Value11'
     *  Gain: '<S358>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_P_BattPwrShift_Stgc'
     */
    (void)Rte_Write_VeBACR_P_BattPwrShift_Stgc_Value(0.0F);

    /* Outport: '<Root>/VeBACR_P_BattPwrShift_Tact' incorporates:
     *  Constant: '<S344>/Constant Value11'
     *  Gain: '<S354>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_P_BattPwrShift_Tact'
     */
    (void)Rte_Write_VeBACR_P_BattPwrShift_Tact_Value(0.0F);

    /* Outport: '<Root>/VeBACR_P_BattPwrShift_ZeroPdl' incorporates:
     *  Constant: '<S344>/Constant Value11'
     *  Gain: '<S355>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_P_BattPwrShift_ZeroPdl'
     */
    (void)Rte_Write_VeBACR_P_BattPwrShift_ZeroPdl_Value(0.0F);

    /* Outport: '<Root>/VeBACR_Pct_TargetSOC_StartStop' incorporates:
     *  Constant: '<S344>/Constant Value2'
     *  Gain: '<S356>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_Pct_TargetSOC_StartStop'
     */
    (void)Rte_Write_VeBACR_Pct_TargetSOC_StartStop_Value(20.0F);

    /* Outport: '<Root>/VeBACR_Pct_TargetSOC_Stgc' incorporates:
     *  Constant: '<S344>/Constant Value2'
     *  Gain: '<S357>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_Pct_TargetSOC_Stgc'
     */
    (void)Rte_Write_VeBACR_Pct_TargetSOC_Stgc_Value(20.0F);

    /* Outport: '<Root>/VeBACR_b_HEVChargingSt' incorporates:
     *  Constant: '<S350>/Calib'
     *  Constant: '<S352>/Calib'
     *  SignalConversion generated from: '<S3>/VeBACR_b_HEVChargingSt'
     *  Switch: '<S344>/Switch5'
     */
    (void)Rte_Write_VeBACR_b_HEVChargingSt_Value((KeBACR_b_Md9TIDSupported) &&
        (KeBACR_b_HEVChrgSt4Md9TIDSpprt));

    /* Outport: '<Root>/VeBACR_e_ChargeSustn' incorporates:
     *  Constant: '<S348>/Constant'
     *  DataTypeConversion: '<S349>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/VeBACR_e_ChargeSustn'
     */
    (void)Rte_Write_VeBACR_e_ChargeSustn_Value(CeBACR_e_PropSystem_NotActive);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCNeg_Stgc' incorporates:
     *  Constant: '<S344>/Constant Value16'
     *  Gain: '<S362>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_r_CostFactSOCNeg_Stgc'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCNeg_Stgc_Value(0.0F);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCNeg_Tact' incorporates:
     *  Constant: '<S344>/Constant Value16'
     *  Gain: '<S361>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_r_CostFactSOCNeg_Tact'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCNeg_Tact_Value(0.0F);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCPos_Stgc' incorporates:
     *  Constant: '<S344>/Constant Value15'
     *  Gain: '<S360>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_r_CostFactSOCPos_Stgc'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCPos_Stgc_Value(0.0F);

    /* Outport: '<Root>/VeBACR_r_CostFactSOCPos_Tact' incorporates:
     *  Constant: '<S344>/Constant Value15'
     *  Gain: '<S359>/Gain'
     *  SignalConversion generated from: '<S3>/VeBACR_r_CostFactSOCPos_Tact'
     */
    (void)Rte_Write_VeBACR_r_CostFactSOCPos_Tact_Value(0.0F);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeBACR_r_ElecPwrTorq_PedalFact' incorporates:
     *  SignalConversion generated from: '<S3>/VeBACR_r_ElecPwrTorq_PedalFact'
     */
    (void)Rte_Write_VeBACR_r_ElecPwrTorq_PedalFact_Value
        (BACR_ac_B.OutportBufferForVeBACR_r_ElecPwrTorq_Ped);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BACR_CODE) BACR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BACR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACC_Controls'
     */
    /* SystemInitialize for Atomic SubSystem: '<S4>/BACC_Battery_PowerShift' */
    /* Start for If: '<S20>/If' */
    BACR_ac_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<S21>/If' */
    BACR_ac_DW.If_ActiveSubsystem_c = -1;

    /* End of SystemInitialize for SubSystem: '<S4>/BACC_Battery_PowerShift' */

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BACO_Output_Processing'
     */
    /* SystemInitialize for SignalConversion generated from: '<S6>/HybridEVType' incorporates:
     *  Constant: '<S332>/Calib'
     */
    BACR_ac_B.OutportBufferForHybridEVType = KeBACR_b_HEVSt_Supported;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BACR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BACO_Initialization'
     */
    /* SystemInitialize for SignalConversion generated from: '<S344>/HybridEVType_init' incorporates:
     *  Constant: '<S351>/Calib'
     */
    BACR_ac_B.OutportBufferForHybridEVType_init = KeBACR_b_HEVSt_Supported;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeBACR_e_ChargeSustn' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeBACR_e_ChargeSustn_Value(CeBACR_e_ChargeSustaining);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
