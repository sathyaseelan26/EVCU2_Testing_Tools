/*
 * File: LTIR_ac.c
 *
 * Code generated for Simulink model 'LTIR_ac'.
 *
 * Model version                  : 9.1079
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:28:34 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LTIR_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_LTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, LTIR_VAR_INIT) HeLTIR_b_SpeedUnitSwitchEnbl = 0;/* Referenced by: '<S9>/Calib' */
static volatile CONST(uint8, LTIR_VAR_INIT) KaLTIR_e_KeySts_Map[8] =
{
    0U, 1U, 7U, 3U, 4U, 5U, 7U, 7U
} ;                                    /* Referenced by: '<S10>/Calib' */

static volatile CONST(boolean, LTIR_VAR_INIT) KeLTIR_b_MtrMdCmnd_Slct = 1;/* Referenced by: '<S11>/Calib' */
static volatile CONST(boolean, LTIR_VAR_INIT) KeLTIR_b_MtrTrqCmnd_Slct = 0;/* Referenced by: '<S12>/Calib' */
static volatile CONST(boolean, LTIR_VAR_INIT) KeLTIR_b_Select_BCM_KeySts = 1;/* Referenced by: '<S13>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_LTIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LTIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if (!Rte_SysCon_Variant_LTIR_Enbl_BRAIN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4) || (!Rte_SysCon_Variant_LTIR_Enbl_CANC2 && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4) || Rte_SysCon_Variant_LTIR_Dsbl_AllProg || Rte_SysCon_Variant_LTIR_Dsbl_ESC

static VAR(boolean, LTIR_VAR_INIT) VeLTIC_b_BSM_LOC_BusOff_CANC;/* '<S3>/Logical43' */

#endif

#if Rte_SysCon_Variant_LTIR_Dsbl_AllProg

static VAR(boolean, LTIR_VAR_INIT) VeLTIC_b_BSM_LOC_BusOff_CANC2;/* '<S3>/Logical32' */

#endif

static VAR(boolean, LTIR_VAR_INIT) VeLTIC_b_SpeedUnitSwapped;/* '<S3>/Logical50' */
static VAR(TeLTIR_e_KeySts, LTIR_VAR_INIT) VeLTIC_e_KeySts_Temp;/* '<S3>/Switch1' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_M_BrkTrq;/* '<S4>/VeSCMR_M_Lv2BrkTrq' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_M_BrkTrqCANC2;/* '<S4>/VeSCMR_M_Lv2BrkTrqCANC2' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_M_BrkTrqDriver;/* '<S4>/VeSCMR_M_Lv2BrkTrqDriver' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_M_BrkTrqDriverCANC2;
                                      /* '<S4>/VeSCMR_M_Lv2BrkTrqDriverCANC2' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_M_MtrA_TrqCmnd;/* '<S4>/VeHTDR_M_MtrA_TorqCmnd' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_M_MtrC_TrqCmnd;/* '<S4>/VeHTDR_M_MtrC_TorqCmnd' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_Pct_BrkTravelSts;/* '<S4>/VeSCMR_Pct_Lv2BrkTravelSts' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_Pct_BrkTravelStsCANC2;
                                    /* '<S4>/VeSCMR_Pct_Lv2BrkTravelStsCANC2' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ACC_Engaged_FA;/* '<S136>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ACC_SystemSts_FA;/* '<S137>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ACC_WhlTrqEnbld_FA;/* '<S117>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ACC_WhlTrq_ADAS_FA;/* '<S70>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ACC_WhlTrq_FA;/* '<S99>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_AHH_Ready_Status_FA;/* '<S82>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_APM_CtrlStsFbk_FA;/* '<S132>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_APM_FailureReason_FA;/* '<S133>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_APM_FailureType_FA;/* '<S134>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_APM_HVBatVlt_FA;/* '<S118>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ASR_MSRActv_FA;/* '<S146>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkBoostPresCANC2_FA;/* '<S65>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkBoostPressure_FA;/* '<S127>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkMaxRgnReady_FA;/* '<S111>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkPdlStatCANC2_FA;/* '<S66>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkPdlStat_FA;/* '<S97>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkTravelStsCANC2_FA;/* '<S138>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkTravelSts_FA;/* '<S88>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkTrqCANC2_FA;/* '<S104>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkTrqDriverCANC2_FA;/* '<S64>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkTrqDriver_FA;/* '<S110>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_BrkTrq_FA;/* '<S108>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_CANBusOff_CANC;/* '<S69>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_CANBusOff_CANC11;/* '<S142>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_CANBusOff_CANC2;/* '<S73>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_CANBusOff_EPT;/* '<S131>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_DrvRqShftROT_Prmry_FA;/* '<S107>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_DrvRqShftROT_Scndry_FA;/* '<S85>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_EPB_HoldSts_FA;/* '<S116>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ESC_Active_FA;/* '<S128>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ESC_FailSts_FA;/* '<S129>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ESS_EngStateEE_FA;/* '<S60>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_EVRDesVSetP_FA;/* '<S47>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_EngActStdyStTorq_FA;/* '<S41>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_EngActStdyStTorq_Vld;/* '<S44>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_EngineSpeed_FA;/* '<S63>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_FrntAxlMaxRqC2_BSM_FA;/* '<S23>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_FrntAxlMaxRq_BSM_FA;/* '<S19>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_FrntAxlMinRqC2_BSM_FA;/* '<S24>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_FrntAxlMinRq_BSM_FA;/* '<S20>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_FrntAxlRqCANC2_BSM_FA;/* '<S74>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_FrntAxlRq_BSM_FA;/* '<S76>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_GlobDrvMdRq_BCM_FA;/* '<S162>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_GlobDrvMdRq_FA;/* '<S61>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatCntctrOpn_FA;/* '<S135>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatCntctrReq_FA;/* '<S144>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatCntctrStat_FA;/* '<S121>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatCrnt_FA;/* '<S81>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatCrnt_Vld;/* '<S43>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatModTempMax_FA;/* '<S119>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatModTempMin_FA;/* '<S80>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatSOC_FA;/* '<S79>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatSOC_Vld;/* '<S42>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_HV_BatVlt_FA;/* '<S83>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ImpendingSkid_FA;/* '<S84>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_KeySts_FA;/* '<S58>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ADCAM_CANC2;/* '<S150>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_APM_EPT;/* '<S98>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_BCM_CANC;/* '<S151>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_BPCM_EPT;/* '<S109>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_BSM_CANC;/* '<S68>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_BSM_CANC2;/* '<S72>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_CADM_CANC2;/* '<S157>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_DMPI_EPT;/* '<S160>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ECM_CANC;/* '<S159>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ECM_EPT;/* '<S155>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ESC_CANC;/* '<S46>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ESC_CANC2;/* '<S51>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ESM_CANC;/* '<S148>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ESM_CANC11;/* '<S152>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ESM_EPT;/* '<S154>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_IPC_CANC;/* '<S156>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_MCPA_CANC11;/* '<S120>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_MCPB_CANC11;/* '<S149>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_SGCP_CANC11;/* '<S52>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_SGW_CANC;/* '<S62>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LOC_ZCU_CL_CANC;/* '<S147>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_LV_BatVlt_FA;/* '<S77>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MCPA_Temp_FA;/* '<S124>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MCPA_Temp_Vld;/* '<S45>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MCPB_Temp_FA;/* '<S125>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrAFltHVCntctrOpnRqFA;/* '<S32>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrATrqAchvdNoAEMDVld;/* '<S36>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrATrqAchvdNoAEMD_FA;/* '<S34>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrA_InvrtrSts_FA;/* '<S86>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrA_MaxTrq_FA;/* '<S139>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrA_MinTrq_FA;/* '<S140>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrA_Spd_FA;/* '<S153>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrA_Spd_Vld;/* '<S28>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrA_TrqAchieved_FA;/* '<S122>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrA_TrqAchieved_Vld;/* '<S29>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrBFltHVCntctrOpnRqFA;/* '<S33>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrBTrqAchvdNoAEMDVld;/* '<S37>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrBTrqAchvdNoAEMD_FA;/* '<S35>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrB_InvrtrSts_FA;/* '<S126>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrB_MaxTrq_FA;/* '<S141>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrB_MinTrq_FA;/* '<S143>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrB_Spd_FA;/* '<S75>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrB_Spd_Vld;/* '<S30>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrB_TrqAchieved_FA;/* '<S123>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrB_TrqAchieved_Vld;/* '<S31>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_MtrCFltHVCntctrOpRq_FA;/* '<S40>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ParkingGrShftRqBSM_FA;/* '<S39>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_PrmrPRNDDispFailSts_FA;/* '<S53>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_PrmryPRNDDispFailSts;/* '<S38>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_Prmry_PRNDFailSts;/* '<S15>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_Prmry_PRNDFailSts_FA;/* '<S27>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ProxStat_FA;/* '<S145>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RgnBrkAxTrqReq_FA;/* '<S90>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RmtStrtActv_FA;/* '<S130>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RrAxlMaxRqC2_BSM_FA;/* '<S25>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RrAxlMaxRq_BSM_FA;/* '<S21>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RrAxlMinRqC2_BSM_FA;/* '<S26>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RrAxlMinRq_BSM_FA;/* '<S22>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RrAxlRqCANC2_BSM_FA;/* '<S78>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_RrAxlRq_BSM_FA;/* '<S87>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_SCCM_CRS_CTRL_FA;/* '<S106>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ScndPRNDDispFailSts_FA;/* '<S55>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_ScndryPRNDDispFailSts;/* '<S49>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_Scndry_PRNDFailSts;/* '<S16>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_Scndry_PRNDFailSts_FA;/* '<S54>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_SpeedUnit;/* '<S105>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_SpeedUnit_FA;/* '<S161>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_SumFWIDFst_FA;/* '<S48>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_SumFWIDSlw_FA;/* '<S50>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_Trns_DrvMdReq_FA;/* '<S163>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_VehSpdCANC2_FA;/* '<S71>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_VehSpdCANC_FA;/* '<S67>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlDirFL_Stat_FA;/* '<S112>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlDirFR_Stat_FA;/* '<S114>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlDirRL_Stat_FA;/* '<S113>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlDirRR_Stat_FA;/* '<S115>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlFL_RPS_CANC2_FA;/* '<S17>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlFL_RPS_FA;/* '<S56>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlFL_Spd_FA;/* '<S100>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlFR_RPS_CANC2_FA;/* '<S18>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlFR_RPS_FA;/* '<S57>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlFR_Spd_FA;/* '<S102>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlRL_Spd_FA;/* '<S101>/AND' */
static VAR(boolean, LTIR_VAR_INIT) VeLTII_b_WhlRR_Spd_FA;/* '<S103>/AND' */
static VAR(uint16, LTIR_VAR_INIT) VeLTII_e_BrkPdlStat;/* '<S4>/VeSCMR_e_Lv2BrkPdlStat' */
static VAR(uint16, LTIR_VAR_INIT) VeLTII_e_BrkPdlStatCANC2;/* '<S4>/VeSCMR_e_Lv2BrkPdlStatCANC2' */
static VAR(TeLTIR_e_KeySts, LTIR_VAR_INIT) VeLTII_e_KeySts;/* '<S166>/DataTypeConversion' */
static VAR(TeHTDR_e_SwitchMd, LTIR_VAR_INIT) VeLTII_e_MtrA_MdCmnd;/* '<S164>/DataTypeConversion' */
static VAR(TeHTDR_e_SwitchMd, LTIR_VAR_INIT) VeLTII_e_MtrC_MdCmnd;/* '<S165>/DataTypeConversion' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_n_WhlFL_RPS;/* '<S4>/VeSCMR_n_Lv2WhlFL_RPS' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_n_WhlFL_RPS_CANC2;/* '<S4>/VeSCMR_n_Lv2WhlFL_RPS_CANC2' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_n_WhlFR_RPS;/* '<S4>/VeSCMR_n_Lv2WhlFR_RPS' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_n_WhlFR_RPS_CANC2;/* '<S4>/VeSCMR_n_Lv2WhlFR_RPS_CANC2' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_p_BrakeBoostPresCANC2;
                                /* '<S4>/VeSCMR_p_Lv2BrakeBoostPressureCANC2' */
static VAR(float32, LTIR_VAR_INIT) VeLTII_p_BrakeBoostPressure;
                                     /* '<S4>/VeSCMR_p_Lv2BrakeBoostPressure' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LTIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_LTIR
#include "MemMap.h"

CONST(ConstB_LTIR_ac_T, LTIR_VAR_INIT) LTIR_ac_ConstB =
{
    CeLTIR_e_IGN_LK,                   /* '<S169>/Constant' */
    CeHTDR_e_DsblNoSwitch              /* '<S168>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_LTIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_LTIR
#include "MemMap.h"

VAR(B_LTIR_ac_T, LTIR_VAR_INIT) LTIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_LTIR
#include "MemMap.h"

/* Forward declaration for local functions */
static uint8 LT_safe_cast_to_TeMMMR_e_KeySts(uint8 input);
static uint8 LT_safe_cast_to_TeMMMR_e_KeySts(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeMMMR_e_KeySts (CeMMMR_e_Lv2_IGN_LK) */
    y = 1U;
    if (((sint32)input) <= 7)
    {
        /* Set output value to input value if it is a member of TeMMMR_e_KeySts */
        y = input;
    }

    return y;
}

/* Model step function for TID1 */
FUNC(void, LTIR_CODE) LTIR_FastTEF(void) /* Explicit Task: FastTEF */
{
    TeLTIR_e_KeySts tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_6;

#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    boolean rtb_Logical_Operator;

#endif

#if Rte_SysCon_Variant_LTIR_Enbl_BSM

    boolean rtb_Logical_Operator1;

#endif

#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN || Rte_SysCon_Variant_LTIR_Enbl_ESM

    boolean rtb_Logical_Operator13;

#endif

#if Rte_SysCon_Variant_LTIR_Enbl_ESM

    boolean rtb_Logical_Operator14;

#endif

#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN || Rte_SysCon_Variant_LTIR_Enbl_ESM

    boolean rtb_Logical_Operator19;

#endif

#if Rte_SysCon_Variant_LTIR_Enbl_ESM

    boolean rtb_Logical_Operator16;

#endif

#if Rte_SysCon_Variant_LTIR_Enbl_BSM

    boolean rtb_Logical_Operator3;

#endif

#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    boolean rtb_Logical_Operator45;

#endif

    boolean rtb_Switch2;

#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    boolean rtb_Logical_Operator63;

#endif

    TeHTDR_e_SwitchMd tmp;

    /* Logic: '<S52>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_SGCP_CANC11'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_SGCP_CANC11_Value((&(VeLTII_b_LOC_SGCP_CANC11)));

    /* Logic: '<S51>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ESC_CANC2'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ESC_CANC2_Value((&(VeLTII_b_LOC_ESC_CANC2)));

    /* Logic: '<S50>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2SumFWIDSlw_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2SumFWIDSlw_FA_Value((&(VeLTII_b_SumFWIDSlw_FA)));

    /* Logic: '<S48>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2SumFWIDFst_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2SumFWIDFst_FA_Value((&(VeLTII_b_SumFWIDFst_FA)));

    /* Logic: '<S47>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2EVRDesVSetP_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2EVRDesVSetP_FA_Value((&(VeLTII_b_EVRDesVSetP_FA)));

    /* Logic: '<S46>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ESC_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ESC_CANC_Value((&(VeLTII_b_LOC_ESC_CANC)));

    /* Logic: '<S45>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MCPA_Temp_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MCPA_Temp_Vld_Value((&(VeLTII_b_MCPA_Temp_Vld)));

    /* Logic: '<S44>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2EngActStdyStTorq_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2EngActStdyStTorq_Vld_Value
        ((&(VeLTII_b_EngActStdyStTorq_Vld)));

    /* Logic: '<S43>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatCrnt_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatCrnt_Vld_Value((&(VeLTII_b_HV_BatCrnt_Vld)));

    /* Logic: '<S42>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatSOC_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatSOC_Vld_Value((&(VeLTII_b_HV_BatSOC_Vld)));

    /* Logic: '<S41>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2EngActStdyStTorq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2EngActStdyStTorq_FA_Value
        ((&(VeLTII_b_EngActStdyStTorq_FA)));

    /* Logic: '<S40>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA_Value
        ((&(VeLTII_b_MtrCFltHVCntctrOpRq_FA)));

    /* Logic: '<S39>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ParkingGearShiftReq_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ParkingGearShiftReq_BSM_FA_Value
        ((&(VeLTII_b_ParkingGrShftRqBSM_FA)));

    /* Logic: '<S37>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_Vld_Value
        ((&(VeLTII_b_MtrBTrqAchvdNoAEMDVld)));

    /* Logic: '<S36>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_Vld_Value
        ((&(VeLTII_b_MtrATrqAchvdNoAEMDVld)));

    /* Logic: '<S35>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA_Value
        ((&(VeLTII_b_MtrBTrqAchvdNoAEMD_FA)));

    /* Logic: '<S34>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA_Value
        ((&(VeLTII_b_MtrATrqAchvdNoAEMD_FA)));

    /* Logic: '<S33>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA_Value
        ((&(VeLTII_b_MtrBFltHVCntctrOpnRqFA)));

    /* Logic: '<S32>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA_Value
        ((&(VeLTII_b_MtrAFltHVCntctrOpnRqFA)));

    /* Logic: '<S31>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_TrqAchieved_Vld_Value
        ((&(VeLTII_b_MtrB_TrqAchieved_Vld)));

    /* Logic: '<S30>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_Spd_Vld_Value((&(VeLTII_b_MtrB_Spd_Vld)));

    /* Logic: '<S29>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_TrqAchieved_Vld_Value
        ((&(VeLTII_b_MtrA_TrqAchieved_Vld)));

    /* Logic: '<S28>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_Vld'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_Spd_Vld_Value((&(VeLTII_b_MtrA_Spd_Vld)));

    /* Logic: '<S26>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMinRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RrAxlMinRqCANC2_BSM_FA_Value
        ((&(VeLTII_b_RrAxlMinRqC2_BSM_FA)));

    /* Logic: '<S25>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMaxRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RrAxlMaxRqCANC2_BSM_FA_Value
        ((&(VeLTII_b_RrAxlMaxRqC2_BSM_FA)));

    /* Logic: '<S24>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMinRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMinRqCANC2_BSM_FA_Value
        ((&(VeLTII_b_FrntAxlMinRqC2_BSM_FA)));

    /* Logic: '<S23>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA_Value
        ((&(VeLTII_b_FrntAxlMaxRqC2_BSM_FA)));

    /* Logic: '<S22>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMinRq_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RrAxlMinRq_BSM_FA_Value
        ((&(VeLTII_b_RrAxlMinRq_BSM_FA)));

    /* Logic: '<S21>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlMaxRq_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RrAxlMaxRq_BSM_FA_Value
        ((&(VeLTII_b_RrAxlMaxRq_BSM_FA)));

    /* Logic: '<S20>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMinRq_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMinRq_BSM_FA_Value
        ((&(VeLTII_b_FrntAxlMinRq_BSM_FA)));

    /* Logic: '<S19>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlMaxRq_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2FrntAxlMaxRq_BSM_FA_Value
        ((&(VeLTII_b_FrntAxlMaxRq_BSM_FA)));

    /* Logic: '<S18>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFR_RPS_CANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlFR_RPS_CANC2_FA_Value
        ((&(VeLTII_b_WhlFR_RPS_CANC2_FA)));

    /* Inport: '<S4>/VeSCMR_n_Lv2WhlFR_RPS_CANC2' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_RPS_CANC2'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlFR_RPS_CANC2_Value((&(VeLTII_n_WhlFR_RPS_CANC2)));

    /* Logic: '<S17>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFL_RPS_CANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlFL_RPS_CANC2_FA_Value
        ((&(VeLTII_b_WhlFL_RPS_CANC2_FA)));

    /* Inport: '<S4>/VeSCMR_n_Lv2WhlFL_RPS_CANC2' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_RPS_CANC2'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlFL_RPS_CANC2_Value((&(VeLTII_n_WhlFL_RPS_CANC2)));

    /* Logic: '<S57>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFR_RPS_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlFR_RPS_FA_Value((&(VeLTII_b_WhlFR_RPS_FA)));

    /* Inport: '<S4>/VeSCMR_n_Lv2WhlFR_RPS' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_RPS'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlFR_RPS_Value((&(VeLTII_n_WhlFR_RPS)));

    /* Logic: '<S56>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFL_RPS_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlFL_RPS_FA_Value((&(VeLTII_b_WhlFL_RPS_FA)));

    /* Inport: '<S4>/VeSCMR_n_Lv2WhlFL_RPS' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_RPS'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlFL_RPS_Value((&(VeLTII_n_WhlFL_RPS)));

    /* Logic: '<S55>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ScndryPRNDDispFailSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ScndryPRNDDispFailSts_FA_Value
        ((&(VeLTII_b_ScndPRNDDispFailSts_FA)));

    /* Logic: '<S54>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2Scndry_PRNDFailSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2Scndry_PRNDFailSts_FA_Value
        ((&(VeLTII_b_Scndry_PRNDFailSts_FA)));

    /* Logic: '<S53>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2PrmryPRNDDispFailSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2PrmryPRNDDispFailSts_FA_Value
        ((&(VeLTII_b_PrmrPRNDDispFailSts_FA)));

    /* Logic: '<S49>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ScndryPRNDDispFailSts'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ScndryPRNDDispFailSts_Value
        ((&(VeLTII_b_ScndryPRNDDispFailSts)));

    /* Logic: '<S38>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2PrmryPRNDDispFailSts'
     */
    (void)Rte_Read_VeSCMR_b_Lv2PrmryPRNDDispFailSts_Value
        ((&(VeLTII_b_PrmryPRNDDispFailSts)));

    /* Logic: '<S27>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2Prmry_PRNDFailSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2Prmry_PRNDFailSts_FA_Value
        ((&(VeLTII_b_Prmry_PRNDFailSts_FA)));

    /* Logic: '<S16>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2Scndry_PRNDFailSts'
     */
    (void)Rte_Read_VeSCMR_b_Lv2Scndry_PRNDFailSts_Value
        ((&(VeLTII_b_Scndry_PRNDFailSts)));

    /* Logic: '<S15>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2Prmry_PRNDFailSts'
     */
    (void)Rte_Read_VeSCMR_b_Lv2Prmry_PRNDFailSts_Value
        ((&(VeLTII_b_Prmry_PRNDFailSts)));

    /* Logic: '<S66>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkPdlStatCANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkPdlStatCANC2_FA_Value
        ((&(VeLTII_b_BrkPdlStatCANC2_FA)));

    /* Logic: '<S65>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkBoostPressureCANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkBoostPressureCANC2_FA_Value
        ((&(VeLTII_b_BrkBoostPresCANC2_FA)));

    /* Logic: '<S64>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkTrqDriverCANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkTrqDriverCANC2_FA_Value
        ((&(VeLTII_b_BrkTrqDriverCANC2_FA)));

    /* Logic: '<S104>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkTrqCANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkTrqCANC2_FA_Value((&(VeLTII_b_BrkTrqCANC2_FA)));

    /* Inport: '<S4>/VeSCMR_e_Lv2BrkPdlStatCANC2' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2BrkPdlStatCANC2'
     */
    (void)Rte_Read_VeSCMR_e_Lv2BrkPdlStatCANC2_Value((&(VeLTII_e_BrkPdlStatCANC2)));

    /* Inport: '<S4>/VeSCMR_p_Lv2BrakeBoostPressureCANC2' incorporates:
     *  Inport: '<Root>/VeSCMR_p_Lv2BrakeBoostPressureCANC2'
     */
    (void)Rte_Read_VeSCMR_p_Lv2BrakeBoostPressureCANC2_Value
        ((&(VeLTII_p_BrakeBoostPresCANC2)));

    /* Inport: '<S4>/VeSCMR_M_Lv2BrkTrqDriverCANC2' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2BrkTrqDriverCANC2'
     */
    (void)Rte_Read_VeSCMR_M_Lv2BrkTrqDriverCANC2_Value
        ((&(VeLTII_M_BrkTrqDriverCANC2)));

    /* Inport: '<S4>/VeSCMR_M_Lv2BrkTrqCANC2' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2BrkTrqCANC2'
     */
    (void)Rte_Read_VeSCMR_M_Lv2BrkTrqCANC2_Value((&(VeLTII_M_BrkTrqCANC2)));

    /* Inport: '<S4>/VeSCMR_e_Lv2BrkPdlStat' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2BrkPdlStat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2BrkPdlStat_Value((&(VeLTII_e_BrkPdlStat)));

    /* Inport: '<S4>/VeSCMR_p_Lv2BrakeBoostPressure' incorporates:
     *  Inport: '<Root>/VeSCMR_p_Lv2BrakeBoostPressure'
     */
    (void)Rte_Read_VeSCMR_p_Lv2BrakeBoostPressure_Value
        ((&(VeLTII_p_BrakeBoostPressure)));

    /* Inport: '<S4>/VeSCMR_M_Lv2BrkTrqDriver' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2BrkTrqDriver'
     */
    (void)Rte_Read_VeSCMR_M_Lv2BrkTrqDriver_Value((&(VeLTII_M_BrkTrqDriver)));

    /* Inport: '<S4>/VeSCMR_M_Lv2BrkTrq' incorporates:
     *  Inport: '<Root>/VeSCMR_M_Lv2BrkTrq'
     */
    (void)Rte_Read_VeSCMR_M_Lv2BrkTrq_Value((&(VeLTII_M_BrkTrq)));

    /* Inport: '<S4>/VeSCMR_Pct_Lv2BrkTravelStsCANC2' incorporates:
     *  Inport: '<Root>/VeSCMR_Pct_Lv2BrkTravelStsCANC2'
     */
    (void)Rte_Read_VeSCMR_Pct_Lv2BrkTravelStsCANC2_Value
        ((&(VeLTII_Pct_BrkTravelStsCANC2)));

    /* Inport: '<S4>/VeSCMR_Pct_Lv2BrkTravelSts' incorporates:
     *  Inport: '<Root>/VeSCMR_Pct_Lv2BrkTravelSts'
     */
    (void)Rte_Read_VeSCMR_Pct_Lv2BrkTravelSts_Value((&(VeLTII_Pct_BrkTravelSts)));

    /* Logic: '<S63>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2EngineSpeed_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2EngineSpeed_FA_Value((&(VeLTII_b_EngineSpeed_FA)));

    /* Logic: '<S86>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_InvrtrSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_InvrtrSts_FA_Value
        ((&(VeLTII_b_MtrA_InvrtrSts_FA)));

    /* Logic: '<S84>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ImpendingSkid_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ImpendingSkid_FA_Value
        ((&(VeLTII_b_ImpendingSkid_FA)));

    /* Logic: '<S82>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2AHH_Ready_Status_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2AHH_Ready_Status_FA_Value
        ((&(VeLTII_b_AHH_Ready_Status_FA)));

    /* Logic: '<S78>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RrAxlRqCANC2_BSM_FA_Value
        ((&(VeLTII_b_RrAxlRqCANC2_BSM_FA)));

    /* Logic: '<S74>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlRqCANC2_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2FrntAxlRqCANC2_BSM_FA_Value
        ((&(VeLTII_b_FrntAxlRqCANC2_BSM_FA)));

    /* Logic: '<S70>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ACC_WhlTrq_ADAS_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_WhlTrq_ADAS_FA_Value
        ((&(VeLTII_b_ACC_WhlTrq_ADAS_FA)));

    /* Logic: '<S60>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ESS_EngStateEE_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ESS_EngStateEE_FA_Value
        ((&(VeLTII_b_ESS_EngStateEE_FA)));

    /* Logic: '<S87>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RrAxlRq_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RrAxlRq_BSM_FA_Value((&(VeLTII_b_RrAxlRq_BSM_FA)));

    /* Logic: '<S76>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2FrntAxlRq_BSM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2FrntAxlRq_BSM_FA_Value
        ((&(VeLTII_b_FrntAxlRq_BSM_FA)));

    /* Logic: '<S62>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_SGW_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_SGW_CANC_Value((&(VeLTII_b_LOC_SGW_CANC)));

    /* Logic: '<S61>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2GlobDrvMdRq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2GlobDrvMdRq_FA_Value((&(VeLTII_b_GlobDrvMdRq_FA)));

    /* Logic: '<S163>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2Trns_DrvMdReq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2Trns_DrvMdReq_FA_Value
        ((&(VeLTII_b_Trns_DrvMdReq_FA)));

    /* Logic: '<S162>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2GlobDrvMdRq_BCM_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2GlobDrvMdRq_BCM_FA_Value
        ((&(VeLTII_b_GlobDrvMdRq_BCM_FA)));

    /* Logic: '<S161>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2SpeedUnit_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2SpeedUnit_FA_Value((&(VeLTII_b_SpeedUnit_FA)));

    /* Inport: '<S4>/VeHTDR_M_MtrC_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrC_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrC_TorqCmnd_Value((&(VeLTII_M_MtrC_TrqCmnd)));

    /* Inport: '<S4>/VeHTDR_M_MtrA_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Value((&(VeLTII_M_MtrA_TrqCmnd)));

    /* DataTypeConversion: '<S165>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeHTDR_e_MtrC_MdCmnd'
     */
    (void)Rte_Read_VeHTDR_e_MtrC_MdCmnd_Value((&(VeLTII_e_MtrC_MdCmnd)));

    /* DataTypeConversion: '<S164>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeHTDR_e_MtrA_MdCmnd'
     */
    (void)Rte_Read_VeHTDR_e_MtrA_MdCmnd_Value((&(VeLTII_e_MtrA_MdCmnd)));

    /* Logic: '<S160>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_DMPI_EPT'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_DMPI_EPT_Value((&(VeLTII_b_LOC_DMPI_EPT)));

    /* Logic: '<S159>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ECM_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ECM_CANC_Value((&(VeLTII_b_LOC_ECM_CANC)));

    /* Logic: '<S157>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_CADM_CANC2'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_CADM_CANC2_Value((&(VeLTII_b_LOC_CADM_CANC2)));

    /* Logic: '<S156>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_IPC_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_IPC_CANC_Value((&(VeLTII_b_LOC_IPC_CANC)));

    /* Logic: '<S155>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ECM_EPT'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ECM_EPT_Value((&(VeLTII_b_LOC_ECM_EPT)));

    /* Logic: '<S154>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ESM_EPT'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ESM_EPT_Value((&(VeLTII_b_LOC_ESM_EPT)));

    /* Logic: '<S152>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ESM_CANC11'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ESM_CANC11_Value((&(VeLTII_b_LOC_ESM_CANC11)));

    /* Logic: '<S151>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_BCM_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_BCM_CANC_Value((&(VeLTII_b_LOC_BCM_CANC)));

    /* Logic: '<S150>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ADCAM_CANC2'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ADCAM_CANC2_Value((&(VeLTII_b_LOC_ADCAM_CANC2)));

    /* Logic: '<S149>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_MCPB_CANC11'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_MCPB_CANC11_Value((&(VeLTII_b_LOC_MCPB_CANC11)));

    /* Logic: '<S148>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ESM_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ESM_CANC_Value((&(VeLTII_b_LOC_ESM_CANC)));

    /* Logic: '<S147>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_ZCU_CL_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ZCU_CL_CANC_Value((&(VeLTII_b_LOC_ZCU_CL_CANC)));

    /* Logic: '<S146>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ASR_MSRActv_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ASR_MSRActv_FA_Value((&(VeLTII_b_ASR_MSRActv_FA)));

    /* Logic: '<S145>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ProxStat_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ProxStat_FA_Value((&(VeLTII_b_ProxStat_FA)));

    /* Logic: '<S144>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrReq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatCntctrReq_FA_Value
        ((&(VeLTII_b_HV_BatCntctrReq_FA)));

    /* Logic: '<S143>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_MinTrq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_MinTrq_FA_Value((&(VeLTII_b_MtrB_MinTrq_FA)));

    /* Logic: '<S141>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_MaxTrq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_MaxTrq_FA_Value((&(VeLTII_b_MtrB_MaxTrq_FA)));

    /* Logic: '<S140>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_MinTrq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_MinTrq_FA_Value((&(VeLTII_b_MtrA_MinTrq_FA)));

    /* Logic: '<S139>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_MaxTrq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_MaxTrq_FA_Value((&(VeLTII_b_MtrA_MaxTrq_FA)));

    /* Logic: '<S138>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkTravelStsCANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkTravelStsCANC2_FA_Value
        ((&(VeLTII_b_BrkTravelStsCANC2_FA)));

    /* Logic: '<S137>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ACC_SystemSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_SystemSts_FA_Value
        ((&(VeLTII_b_ACC_SystemSts_FA)));

    /* Logic: '<S136>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ACC_Engaged_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_Engaged_FA_Value((&(VeLTII_b_ACC_Engaged_FA)));

    /* Logic: '<S135>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrOpn_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatCntctrOpn_FA_Value
        ((&(VeLTII_b_HV_BatCntctrOpn_FA)));

    /* Logic: '<S134>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2APM_FailureType_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2APM_FailureType_FA_Value
        ((&(VeLTII_b_APM_FailureType_FA)));

    /* Logic: '<S133>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2APM_FailureReason_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2APM_FailureReason_FA_Value
        ((&(VeLTII_b_APM_FailureReason_FA)));

    /* Logic: '<S132>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2APM_CtrlStsFbk_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2APM_CtrlStsFbk_FA_Value
        ((&(VeLTII_b_APM_CtrlStsFbk_FA)));

    /* Logic: '<S130>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RmtStrtActv_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RmtStrtActv_FA_Value((&(VeLTII_b_RmtStrtActv_FA)));

    /* Logic: '<S129>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ESC_FailSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ESC_FailSts_FA_Value((&(VeLTII_b_ESC_FailSts_FA)));

    /* Logic: '<S128>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ESC_Active_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ESC_Active_FA_Value((&(VeLTII_b_ESC_Active_FA)));

    /* Logic: '<S127>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkBoostPressure_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkBoostPressure_FA_Value
        ((&(VeLTII_b_BrkBoostPressure_FA)));

    /* Logic: '<S126>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_InvrtrSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_InvrtrSts_FA_Value
        ((&(VeLTII_b_MtrB_InvrtrSts_FA)));

    /* Logic: '<S125>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MCPB_Temp_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MCPB_Temp_FA_Value((&(VeLTII_b_MCPB_Temp_FA)));

    /* Logic: '<S124>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MCPA_Temp_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MCPA_Temp_FA_Value((&(VeLTII_b_MCPA_Temp_FA)));

    /* Logic: '<S123>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_TrqAchieved_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_TrqAchieved_FA_Value
        ((&(VeLTII_b_MtrB_TrqAchieved_FA)));

    /* Logic: '<S122>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_TrqAchieved_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_TrqAchieved_FA_Value
        ((&(VeLTII_b_MtrA_TrqAchieved_FA)));

    /* Logic: '<S121>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatCntctrStat_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatCntctrStat_FA_Value
        ((&(VeLTII_b_HV_BatCntctrStat_FA)));

    /* Logic: '<S119>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatModTempMax_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatModTempMax_FA_Value
        ((&(VeLTII_b_HV_BatModTempMax_FA)));

    /* Logic: '<S118>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2APM_HVBatVlt_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2APM_HVBatVlt_FA_Value((&(VeLTII_b_APM_HVBatVlt_FA)));

    /* Logic: '<S117>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ACC_WhlTrqEnbld_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_WhlTrqEnbld_FA_Value
        ((&(VeLTII_b_ACC_WhlTrqEnbld_FA)));

    /* Logic: '<S116>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2EPB_HoldSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2EPB_HoldSts_FA_Value((&(VeLTII_b_EPB_HoldSts_FA)));

    /* Logic: '<S115>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlDirRR_Stat_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlDirRR_Stat_FA_Value
        ((&(VeLTII_b_WhlDirRR_Stat_FA)));

    /* Logic: '<S114>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlDirFR_Stat_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlDirFR_Stat_FA_Value
        ((&(VeLTII_b_WhlDirFR_Stat_FA)));

    /* Logic: '<S113>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlDirRL_Stat_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlDirRL_Stat_FA_Value
        ((&(VeLTII_b_WhlDirRL_Stat_FA)));

    /* Logic: '<S112>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlDirFL_Stat_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlDirFL_Stat_FA_Value
        ((&(VeLTII_b_WhlDirFL_Stat_FA)));

    /* Logic: '<S111>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkMaxRgnReady_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkMaxRgnReady_FA_Value
        ((&(VeLTII_b_BrkMaxRgnReady_FA)));

    /* Logic: '<S110>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkTrqDriver_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkTrqDriver_FA_Value((&(VeLTII_b_BrkTrqDriver_FA)));

    /* Logic: '<S108>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkTrq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkTrq_FA_Value((&(VeLTII_b_BrkTrq_FA)));

    /* Logic: '<S107>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2DrvRqShftROT_Prmry_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2DrvRqShftROT_Prmry_FA_Value
        ((&(VeLTII_b_DrvRqShftROT_Prmry_FA)));

    /* Logic: '<S106>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2SCCM_CRS_CTRL_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2SCCM_CRS_CTRL_FA_Value
        ((&(VeLTII_b_SCCM_CRS_CTRL_FA)));

    /* Logic: '<S105>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2SpeedUnit'
     */
    (void)Rte_Read_VeSCMR_b_Lv2SpeedUnit_Value((&(VeLTII_b_SpeedUnit)));

    /* Logic: '<S103>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlRR_Spd_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlRR_Spd_FA_Value((&(VeLTII_b_WhlRR_Spd_FA)));

    /* Logic: '<S102>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFR_Spd_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlFR_Spd_FA_Value((&(VeLTII_b_WhlFR_Spd_FA)));

    /* Logic: '<S101>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlRL_Spd_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlRL_Spd_FA_Value((&(VeLTII_b_WhlRL_Spd_FA)));

    /* Logic: '<S100>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2WhlFL_Spd_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2WhlFL_Spd_FA_Value((&(VeLTII_b_WhlFL_Spd_FA)));

    /* Logic: '<S99>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2ACC_WhlTrq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2ACC_WhlTrq_FA_Value((&(VeLTII_b_ACC_WhlTrq_FA)));

    /* Logic: '<S97>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkPdlStat_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkPdlStat_FA_Value((&(VeLTII_b_BrkPdlStat_FA)));

    /* Inport: '<Root>/VeSCMR_b_Lv2AeCoastReadyFA' */
    (void)Rte_Read_VeSCMR_b_Lv2AeCoastReadyFA_Value(&rtb_Switch2);

    /* Inport: '<Root>/VeSCMR_b_Lv2DriveStyleStsFA' */
    (void)Rte_Read_VeSCMR_b_Lv2DriveStyleStsFA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSCMR_b_Lv2DrvrIntndTotBrkTrqFA' */
    (void)Rte_Read_VeSCMR_b_Lv2DrvrIntndTotBrkTrqFA_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSCMR_b_Lv2CmndTotBrkFricTorqFA' */
    (void)Rte_Read_VeSCMR_b_Lv2CmndTotBrkFricTorqFA_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSCMR_b_Lv2WhlTrqFrntAxReq_ESCFA' */
    (void)Rte_Read_VeSCMR_b_Lv2WhlTrqFrntAxReq_ESCFA_Value(&tmpRead_3);

    /* Inport: '<Root>/VeSCMR_b_Lv2ESCInterventionMSGFA' */
    (void)Rte_Read_VeSCMR_b_Lv2ESCInterventionMSGFA_Value(&tmpRead_2);

    /* Logic: '<S90>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2RgnBrkAxTrqReq_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2RgnBrkAxTrqReq_FA_Value
        ((&(VeLTII_b_RgnBrkAxTrqReq_FA)));

    /* Inport: '<Root>/VeSCMR_b_Lv2OPDHoldStatusFA' */
    (void)Rte_Read_VeSCMR_b_Lv2OPDHoldStatusFA_Value(&tmpRead_1);

    /* Logic: '<S88>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2BrkTravelSts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2BrkTravelSts_FA_Value((&(VeLTII_b_BrkTravelSts_FA)));

    /* Logic: '<S85>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2DrvRqShftROT_Scndry_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2DrvRqShftROT_Scndry_FA_Value
        ((&(VeLTII_b_DrvRqShftROT_Scndry_FA)));

    /* Logic: '<S83>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatVlt_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatVlt_FA_Value((&(VeLTII_b_HV_BatVlt_FA)));

    /* Logic: '<S81>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatCrnt_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatCrnt_FA_Value((&(VeLTII_b_HV_BatCrnt_FA)));

    /* Logic: '<S80>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatModTempMin_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatModTempMin_FA_Value
        ((&(VeLTII_b_HV_BatModTempMin_FA)));

    /* Logic: '<S79>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2HV_BatSOC_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2HV_BatSOC_FA_Value((&(VeLTII_b_HV_BatSOC_FA)));

    /* Logic: '<S77>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LV_BatVlt_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LV_BatVlt_FA_Value((&(VeLTII_b_LV_BatVlt_FA)));

    /* Logic: '<S75>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrB_Spd_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrB_Spd_FA_Value((&(VeLTII_b_MtrB_Spd_FA)));

    /* Logic: '<S73>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_CANC2'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_CANC2_Value((&(VeLTII_b_CANBusOff_CANC2)));

    /* Logic: '<S72>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_BSM_CANC2'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_BSM_CANC2_Value((&(VeLTII_b_LOC_BSM_CANC2)));

    /* Logic: '<S71>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2VehSpdCANC2_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2VehSpdCANC2_FA_Value((&(VeLTII_b_VehSpdCANC2_FA)));

    /* Logic: '<S69>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_CANC_Value((&(VeLTII_b_CANBusOff_CANC)));

    /* Logic: '<S68>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_BSM_CANC'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_BSM_CANC_Value((&(VeLTII_b_LOC_BSM_CANC)));

    /* Logic: '<S67>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2VehSpdCANC_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2VehSpdCANC_FA_Value((&(VeLTII_b_VehSpdCANC_FA)));

    /* Logic: '<S153>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2MtrA_Spd_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2MtrA_Spd_FA_Value((&(VeLTII_b_MtrA_Spd_FA)));

    /* Logic: '<S142>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_CANC11'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_CANC11_Value
        ((&(VeLTII_b_CANBusOff_CANC11)));

    /* Logic: '<S131>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_EPT'
     */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_EPT_Value((&(VeLTII_b_CANBusOff_EPT)));

    /* Logic: '<S120>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_MCPA_CANC11'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_MCPA_CANC11_Value((&(VeLTII_b_LOC_MCPA_CANC11)));

    /* Logic: '<S109>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_BPCM_EPT'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_BPCM_EPT_Value((&(VeLTII_b_LOC_BPCM_EPT)));

    /* Logic: '<S98>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2LOC_APM_EPT'
     */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_APM_EPT_Value((&(VeLTII_b_LOC_APM_EPT)));

    /* Inport: '<Root>/VeSCMR_b_Lv2KeySts_Src2_FA' */
    (void)Rte_Read_VeSCMR_b_Lv2KeySts_Src2_FA_Value(&tmpRead_0);

    /* Logic: '<S58>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_Lv2KeySts_FA'
     */
    (void)Rte_Read_VeSCMR_b_Lv2KeySts_FA_Value((&(VeLTII_b_KeySts_FA)));

    /* Inport: '<Root>/VeSCMR_e_Lv2KeySts_Src2' */
    (void)Rte_Read_VeSCMR_e_Lv2KeySts_Src2_Value(&tmpRead);

    /* DataTypeConversion: '<S166>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2KeySts'
     */
    (void)Rte_Read_VeSCMR_e_Lv2KeySts_Value((&(VeLTII_e_KeySts)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/LTIR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTIR_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S5>/LTIR_FastTEF_StartCheckpoint' */
    Rte_Call_LTIR_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTIC'
     */
    /* Switch: '<S3>/Switch1' incorporates:
     *  Constant: '<S13>/Calib'
     */
    if (KeLTIR_b_Select_BCM_KeySts)
    {
        /* Switch: '<S3>/Switch1' incorporates:
         *  DataTypeConversion: '<S166>/DataTypeConversion'
         */
        VeLTIC_e_KeySts_Temp = VeLTII_e_KeySts;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/LTII' */
        /* Switch: '<S3>/Switch1' incorporates:
         *  Inport: '<Root>/VeSCMR_e_Lv2KeySts_Src2'
         *  Inport: '<S4>/VeSCMR_e_Lv2KeySts_Src2'
         */
        VeLTIC_e_KeySts_Temp = tmpRead;

        /* End of Outputs for SubSystem: '<S1>/LTII' */
    }

    /* End of Switch: '<S3>/Switch1' */

    /* Logic: '<S3>/Logical1' */
    /* Gateway: LTIR_FastTEF/LTIC/Chart1 */
    /* During: LTIR_FastTEF/LTIC/Chart1 */
    /* Entry Internal: LTIR_FastTEF/LTIC/Chart1 */
    /* Transition: '<S7>:4' */
    /* Transition: '<S7>:9' */
#if Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/VariantSource1' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cp = ((((VeLTII_b_MtrA_Spd_FA) ||
        (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT)) ||
        (VeLTII_b_MtrA_Spd_Vld));

#endif

    /* End of Logic: '<S3>/Logical1' */

    /* Logic: '<S3>/Logical10' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source65' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ao = (((VeLTII_b_VehSpdCANC_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical10' */

    /* Logic: '<S3>/Logical11' */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source99' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ow = (((VeLTII_b_VehSpdCANC2_FA) ||
        (VeLTII_b_LOC_BSM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/Logical11' */

    /* Logic: '<S3>/Logical12' incorporates:
     *  Logic: '<S3>/Logical13'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BLUEN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/VariantSource7' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_k = (((VeLTII_b_LOC_APM_EPT) ||
        (VeLTII_b_LV_BatVlt_FA)) || (VeLTII_b_CANBusOff_EPT));

#elif Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/VariantSource7' incorporates:
     *  Logic: '<S3>/Logical13'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_k = (((VeLTII_b_LOC_DMPI_EPT) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LV_BatVlt_FA));

#endif

    /* End of Logic: '<S3>/Logical12' */

    /* Logic: '<S3>/Logical2' incorporates:
     *  Logic: '<S3>/Logical30'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/VariantSource2' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hl = ((((VeLTII_b_MtrB_Spd_FA) ||
        (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT)) ||
        (VeLTII_b_MtrB_Spd_Vld));

    /* VariantMerge generated from: '<S3>/Variant Source9' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mg = (((VeLTII_b_CANBusOff_EPT) ||
        (VeLTII_b_LOC_ESM_EPT)) || (VeLTII_b_DrvRqShftROT_Scndry_FA));

#endif

    /* End of Logic: '<S3>/Logical2' */

    /* Logic: '<S3>/Logical43' */
#if (!Rte_SysCon_Variant_LTIR_Enbl_BRAIN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4) || (!Rte_SysCon_Variant_LTIR_Enbl_CANC2 && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4) || Rte_SysCon_Variant_LTIR_Dsbl_AllProg || Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* Logic: '<S3>/Logical43' */
    VeLTIC_b_BSM_LOC_BusOff_CANC = ((VeLTII_b_LOC_BSM_CANC) ||
        (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical43' */

    /* Logic: '<S3>/Logical31' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source79' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_j2 = ((VeLTII_b_BrkTravelSts_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical31' */

    /* Logic: '<S3>/Logical34' */
#if !Rte_SysCon_Variant_LTIR_Enbl_BRAIN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source36' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_h3 = ((VeLTII_b_RgnBrkAxTrqReq_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical34' */

    /* Logic: '<S3>/Logical32' incorporates:
     *  Logic: '<S3>/Logical33'
     *  Logic: '<S3>/Logical35'
     *  Logic: '<S3>/Logical36'
     *  Logic: '<S3>/Logical37'
     *  Logic: '<S3>/Logical38'
     *  Logic: '<S3>/Logical40'
     *  Logic: '<S3>/Logical41'
     */
#if Rte_SysCon_Variant_LTIR_Dsbl_AllProg

    /* Logic: '<S3>/Logical32' */
    VeLTIC_b_BSM_LOC_BusOff_CANC2 = ((VeLTII_b_CANBusOff_CANC2) ||
        (VeLTII_b_LOC_BSM_CANC2));

    /* Outputs for Function Call SubSystem: '<S1>/LTII' */
    /* VariantMerge generated from: '<S3>/Variant Source37' incorporates:
     *  Logic: '<S89>/AND'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_l = (tmpRead_1 ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source38' incorporates:
     *  Logic: '<S91>/AND'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_oq = (tmpRead_2 ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source39' incorporates:
     *  Logic: '<S92>/AND'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gb = (tmpRead_3 ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source40' incorporates:
     *  Logic: '<S93>/AND'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gr = (tmpRead_4 ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source41' incorporates:
     *  Logic: '<S94>/AND'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hz = (tmpRead_5 ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source42' incorporates:
     *  Logic: '<S95>/AND'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_og = ((tmpRead_6 ||
        (VeLTII_b_LOC_BCM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source43' incorporates:
     *  Logic: '<S96>/AND'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_b3 = (rtb_Switch2 ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

    /* End of Outputs for SubSystem: '<S1>/LTII' */
#endif

    /* End of Logic: '<S3>/Logical32' */

    /* Logic: '<S3>/Logical42' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source77' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_h = ((VeLTII_b_BrkPdlStat_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical42' */

    /* Logic: '<S3>/Logical44' */
#if !Rte_SysCon_Variant_LTIR_Enbl_CANC2 && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source57' */
    LTIR_ac_B.VariantMerge_For_Variant_So_lg5 = ((VeLTII_b_ACC_WhlTrq_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical44' */

    /* Logic: '<S3>/Logical45' incorporates:
     *  Logic: '<S3>/Logical46'
     *  Logic: '<S3>/Logical47'
     *  Logic: '<S3>/Logical48'
     */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source63' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_nr = ((VeLTII_b_WhlFL_Spd_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source64' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_dx = ((VeLTII_b_WhlRL_Spd_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source67' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_p5 = ((VeLTII_b_WhlFR_Spd_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source66' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_lq = ((VeLTII_b_WhlRR_Spd_FA) ||
        (VeLTIC_b_BSM_LOC_BusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical45' */

    /* Logic: '<S3>/Logical7' */
#if !Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/VariantSource1' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cp = ((((VeLTII_b_MtrA_Spd_FA) ||
        (VeLTII_b_MtrA_Spd_Vld)) || (VeLTII_b_LOC_MCPA_CANC11)) ||
        (VeLTII_b_CANBusOff_CANC11));

#endif

    /* End of Logic: '<S3>/Logical7' */

    /* Logic: '<S3>/LogicalOperator' incorporates:
     *  Logic: '<S3>/LogicalOperator1'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BRAIN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hy = (((VeLTII_b_LOC_BCM_CANC) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_SCCM_CRS_CTRL_FA));

#elif Rte_SysCon_Variant_LTIR_Enbl_BRAIN

    /* VariantMerge generated from: '<S3>/Variant Source' incorporates:
     *  Logic: '<S3>/LogicalOperator1'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hy = (((VeLTII_b_LOC_ZCU_CL_CANC) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_SCCM_CRS_CTRL_FA));

#endif

    /* End of Logic: '<S3>/LogicalOperator' */

    /* Logic: '<S3>/LogicalOperator10' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source61' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pc = (((VeLTII_b_WhlDirRR_Stat_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator10' */

    /* Logic: '<S3>/LogicalOperator11' */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source88' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ha = (((VeLTII_b_EPB_HoldSts_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator11' */

    /* Logic: '<S3>/LogicalOperator12' */
#if Rte_SysCon_Variant_LTIR_ACC_WhlTrqEnbld_CANC

    /* VariantMerge generated from: '<S3>/Variant Source1' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gx = (((VeLTII_b_ACC_WhlTrqEnbld_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator12' */

    /* Logic: '<S3>/LogicalOperator13' incorporates:
     *  Logic: '<S3>/LogicalOperator14'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BLUEN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source2' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ij = (((VeLTII_b_APM_HVBatVlt_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_APM_EPT));

#elif Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source2' incorporates:
     *  Logic: '<S3>/LogicalOperator14'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ij = (((VeLTII_b_LOC_DMPI_EPT) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_APM_HVBatVlt_FA));

#endif

    /* End of Logic: '<S3>/LogicalOperator13' */

    /* Logic: '<S3>/LogicalOperator17' incorporates:
     *  Logic: '<S3>/LogicalOperator18'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/Variant Source18' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kw = ((((VeLTII_b_MtrA_TrqAchieved_FA)
        || (VeLTII_b_MtrA_TrqAchieved_Vld)) || (VeLTII_b_LOC_MCPA_CANC11)) ||
        (VeLTII_b_CANBusOff_CANC11));

    /* VariantMerge generated from: '<S3>/Variant Source21' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_di = ((((VeLTII_b_MtrB_TrqAchieved_FA)
        || (VeLTII_b_MtrB_TrqAchieved_Vld)) || (VeLTII_b_LOC_MCPB_CANC11)) ||
        (VeLTII_b_CANBusOff_CANC11));

#endif

    /* End of Logic: '<S3>/LogicalOperator17' */

    /* Logic: '<S3>/LogicalOperator19' */
#if Rte_SysCon_Variant_LTIR_Dsbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source7' */
    LTIR_ac_B.VariantMerge_For_Variant_So_p3u = ((((VeLTII_b_MCPA_Temp_FA) ||
        (VeLTII_b_LOC_MCPA_CANC11)) || (VeLTII_b_CANBusOff_CANC11)) ||
        (VeLTII_b_MCPA_Temp_Vld));

#endif

    /* End of Logic: '<S3>/LogicalOperator19' */

    /* Logic: '<S3>/LogicalOperator2' */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source87' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ot =
        (((VeLTII_b_DrvRqShftROT_Prmry_FA) || (VeLTII_b_CANBusOff_CANC)) ||
         (VeLTII_b_LOC_ESM_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator2' */

    /* Logic: '<S3>/LogicalOperator20' */
#if Rte_SysCon_Variant_LTIR_Enbl_MCPB

    /* VariantMerge generated from: '<S3>/Variant Source22' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_my = (((VeLTII_b_MCPB_Temp_FA) ||
        (VeLTII_b_LOC_MCPB_CANC11)) || (VeLTII_b_CANBusOff_CANC11));

#endif

    /* End of Logic: '<S3>/LogicalOperator20' */

    /* Logic: '<S3>/LogicalOperator21' */
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source23' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mu = (((VeLTII_b_MtrB_InvrtrSts_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_DMPI_EPT));

#endif

    /* End of Logic: '<S3>/LogicalOperator21' */

    /* Logic: '<S3>/LogicalOperator22' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source78' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ab = (((VeLTII_b_BrkBoostPressure_FA)
        || (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator22' */

    /* Logic: '<S3>/LogicalOperator23' incorporates:
     *  Logic: '<S3>/LogicalOperator24'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source98' */
    LTIR_ac_B.VariantMerge_For_Variant_So_p5x = (((VeLTII_b_ESC_Active_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source97' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mh = (((VeLTII_b_ESC_FailSts_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator23' */

    /* Logic: '<S3>/LogicalOperator25' incorporates:
     *  Logic: '<S3>/LogicalOperator26'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BRAIN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source3' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pl = (((VeLTII_b_LOC_BCM_CANC) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_RmtStrtActv_FA));

#elif Rte_SysCon_Variant_LTIR_Enbl_BRAIN

    /* VariantMerge generated from: '<S3>/Variant Source3' incorporates:
     *  Logic: '<S3>/LogicalOperator26'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pl = (((VeLTII_b_LOC_ZCU_CL_CANC) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_RmtStrtActv_FA));

#endif

    /* End of Logic: '<S3>/LogicalOperator25' */

    /* Logic: '<S3>/LogicalOperator27' incorporates:
     *  Logic: '<S3>/LogicalOperator28'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source4' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ke = (((VeLTII_b_LOC_DMPI_EPT) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_APM_CtrlStsFbk_FA));

#elif !Rte_SysCon_Variant_LTIR_Enbl_BLUEN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source4' incorporates:
     *  Logic: '<S3>/LogicalOperator28'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ke = (((VeLTII_b_LOC_APM_EPT) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_APM_CtrlStsFbk_FA));

#endif

    /* End of Logic: '<S3>/LogicalOperator27' */

    /* Logic: '<S3>/LogicalOperator29' */
#if Rte_SysCon_Variant_LTIR_Enbl_APM

    /* VariantMerge generated from: '<S3>/Variant Source5' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hn = (((VeLTII_b_LOC_APM_EPT) ||
        (VeLTII_b_APM_FailureReason_FA)) || (VeLTII_b_CANBusOff_EPT));

#endif

    /* End of Logic: '<S3>/LogicalOperator29' */

    /* Logic: '<S3>/LogicalOperator3' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source80' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jb = (((VeLTII_b_BrkTrq_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator3' */

    /* Logic: '<S3>/LogicalOperator30' incorporates:
     *  Logic: '<S3>/LogicalOperator31'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_APM

    /* VariantMerge generated from: '<S3>/Variant Source5' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hn = (((VeLTII_b_CANBusOff_EPT) ||
        (VeLTII_b_APM_FailureReason_FA)) || (VeLTII_b_LOC_DMPI_EPT));

#else

    /* VariantMerge generated from: '<S3>/Variant Source6' incorporates:
     *  Logic: '<S3>/LogicalOperator31'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jk = (((VeLTII_b_LOC_APM_EPT) ||
        (VeLTII_b_APM_FailureType_FA)) || (VeLTII_b_CANBusOff_EPT));

#endif

    /* End of Logic: '<S3>/LogicalOperator30' */

    /* Logic: '<S3>/LogicalOperator32' */
#if !Rte_SysCon_Variant_LTIR_Enbl_APM

    /* VariantMerge generated from: '<S3>/Variant Source6' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jk = (((VeLTII_b_APM_FailureType_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_DMPI_EPT));

#endif

    /* End of Logic: '<S3>/LogicalOperator32' */

    /* Logic: '<S3>/LogicalOperator34' incorporates:
     *  Logic: '<S3>/LogicalOperator35'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BRAIN

    /* VariantMerge generated from: '<S3>/Variant Source12' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_p3 = (((VeLTII_b_LOC_ZCU_CL_CANC) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_SpeedUnit_FA));

    /* VariantMerge generated from: '<S3>/Variant Source11' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_b = (((VeLTII_b_LOC_BSM_CANC2) ||
        (VeLTII_b_CANBusOff_CANC2)) || (VeLTII_b_ACC_Engaged_FA));

#endif

    /* End of Logic: '<S3>/LogicalOperator34' */

    /* Logic: '<S3>/LogicalOperator36' */
#if Rte_SysCon_Variant_LTIR_Dsbl_HEV_PHEV_sig

    /* VariantMerge generated from: '<S3>/Variant Source24' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cl = (((VeLTII_b_ProxStat_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_APM_EPT));

#endif

    /* End of Logic: '<S3>/LogicalOperator36' */

    /* Logic: '<S3>/LogicalOperator37' */
#if !Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/Variant Source16' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_m = (((VeLTII_b_MtrA_MaxTrq_FA) ||
        (VeLTII_b_LOC_MCPA_CANC11)) || (VeLTII_b_CANBusOff_CANC11));

#endif

    /* End of Logic: '<S3>/LogicalOperator37' */

    /* Logic: '<S3>/LogicalOperator38' */
#if Rte_SysCon_Variant_LTIR_ACC_Eng_CANC

    /* VariantMerge generated from: '<S3>/Variant Source11' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_b = (((VeLTII_b_ACC_Engaged_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator38' */

    /* Logic: '<S3>/LogicalOperator39' */
#if !Rte_SysCon_Variant_LTIR_Enbl_BRAIN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source12' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_p3 = (((VeLTII_b_LOC_IPC_CANC) ||
        (VeLTII_b_SpeedUnit_FA)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator39' */

    /* Logic: '<S3>/LogicalOperator4' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source81' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_p = (((VeLTII_b_BrkTrqDriver_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator4' */

    /* Logic: '<S3>/LogicalOperator40' */
#if Rte_SysCon_Variant_LTIR_Lv2GlobDrvMdRq_FA_BCM

    /* VariantMerge generated from: '<S3>/Variant Source13' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_h2 = (((VeLTII_b_GlobDrvMdRq_BCM_FA) ||
        (VeLTII_b_LOC_BCM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator40' */

    /* Logic: '<S3>/LogicalOperator41' */
#if Rte_SysCon_Variant_LTIR_ASR_MSRActv

    /* VariantMerge generated from: '<S3>/Variant Source25' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_o = (((VeLTII_b_ASR_MSRActv_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator41' */

    /* Logic: '<S3>/LogicalOperator42' */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source96' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_d = (((VeLTII_b_BrkTravelStsCANC2_FA)
        || (VeLTII_b_LOC_BSM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/LogicalOperator42' */

    /* Logic: '<S3>/LogicalOperator43' incorporates:
     *  Logic: '<S3>/LogicalOperator44'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_CADM

    /* VariantMerge generated from: '<S3>/Variant Source10' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_e = (((VeLTII_b_ACC_SystemSts_FA) ||
        (VeLTII_b_CANBusOff_CANC2)) || (VeLTII_b_LOC_CADM_CANC2));

#elif !Rte_SysCon_Variant_LTIR_Enbl_CADM && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source10' incorporates:
     *  Logic: '<S3>/LogicalOperator44'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_e = (((VeLTII_b_ACC_SystemSts_FA) ||
        (VeLTII_b_CANBusOff_CANC2)) || (VeLTII_b_LOC_ADCAM_CANC2));

#endif

    /* End of Logic: '<S3>/LogicalOperator43' */

    /* Logic: '<S3>/LogicalOperator47' incorporates:
     *  Logic: '<S3>/LogicalOperator48'
     *  Logic: '<S3>/LogicalOperator49'
     *  Logic: '<S3>/LogicalOperator52'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/Variant Source17' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ge = (((VeLTII_b_MtrA_MinTrq_FA) ||
        (VeLTII_b_LOC_MCPA_CANC11)) || (VeLTII_b_CANBusOff_CANC11));

    /* VariantMerge generated from: '<S3>/Variant Source19' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_i = (((VeLTII_b_MtrB_MaxTrq_FA) ||
        (VeLTII_b_LOC_MCPB_CANC11)) || (VeLTII_b_CANBusOff_CANC11));

    /* VariantMerge generated from: '<S3>/Variant Source20' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_m5 = (((VeLTII_b_MtrB_MinTrq_FA) ||
        (VeLTII_b_LOC_MCPB_CANC11)) || (VeLTII_b_CANBusOff_CANC11));

    /* VariantMerge generated from: '<S3>/VariantSource2' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hl = ((((VeLTII_b_MtrB_Spd_FA) ||
        (VeLTII_b_MtrB_Spd_Vld)) || (VeLTII_b_LOC_MCPB_CANC11)) ||
        (VeLTII_b_CANBusOff_CANC11));

#endif

    /* End of Logic: '<S3>/LogicalOperator47' */

    /* Logic: '<S3>/LogicalOperator5' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source59' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jf = (((VeLTII_b_WhlDirRL_Stat_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator5' */

    /* Logic: '<S3>/LogicalOperator53' */
#if !Rte_SysCon_Variant_LTIR_Enbl_EPT && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source9' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mg =
        (((VeLTII_b_DrvRqShftROT_Scndry_FA) || (VeLTII_b_CANBusOff_CANC11)) ||
         (VeLTII_b_LOC_ESM_CANC11));

#endif

    /* End of Logic: '<S3>/LogicalOperator53' */

    /* Logic: '<S3>/LogicalOperator54' incorporates:
     *  Logic: '<S3>/LogicalOperator55'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_SGW

    /* VariantMerge generated from: '<S3>/Variant Source14' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cs = (((VeLTII_b_Trns_DrvMdReq_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_SGW_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source15' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_g1 = (((VeLTII_b_GlobDrvMdRq_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_SGW_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator54' */

    /* Logic: '<S3>/LogicalOperator56' incorporates:
     *  Logic: '<S3>/LogicalOperator57'
     */
#if Rte_SysCon_Variant_LTIR_AxlReq_BSM

    /* VariantMerge generated from: '<S3>/Variant Source26' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gi = (((VeLTII_b_FrntAxlRq_BSM_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_BSM_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source27' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jo = (((VeLTII_b_RrAxlRq_BSM_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_BSM_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator56' */

    /* Logic: '<S3>/LogicalOperator58' */
#if Rte_SysCon_Variant_LTIR_ESS_EngStateEE_ECM

    /* VariantMerge generated from: '<S3>/Variant Source28' */
    LTIR_ac_B.VariantMerge_For_Variant_So_hlk = (((VeLTII_b_ESS_EngStateEE_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ECM_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator58' */

    /* Logic: '<S3>/LogicalOperator59' */
#if Rte_SysCon_Variant_LTIR_Enbl_CADM

    /* VariantMerge generated from: '<S3>/Variant Source29' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kt = (((VeLTII_b_ACC_WhlTrq_ADAS_FA) ||
        (VeLTII_b_LOC_CADM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/LogicalOperator59' */

    /* Logic: '<S3>/LogicalOperator6' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source68' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ny = (((VeLTII_b_LOC_BSM_CANC) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_BrkMaxRgnReady_FA));

#endif

    /* End of Logic: '<S3>/LogicalOperator6' */

    /* Logic: '<S3>/LogicalOperator60' incorporates:
     *  Logic: '<S3>/LogicalOperator61'
     */
#if Rte_SysCon_Variant_LTIR_AxlReq_BSM

    /* VariantMerge generated from: '<S3>/Variant Source30' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_iz =
        (((VeLTII_b_FrntAxlRqCANC2_BSM_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
         (VeLTII_b_CANBusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source31' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_by = (((VeLTII_b_RrAxlRqCANC2_BSM_FA)
        || (VeLTII_b_LOC_BSM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/LogicalOperator60' */

    /* Logic: '<S3>/LogicalOperator62' incorporates:
     *  Logic: '<S3>/LogicalOperator63'
     *  Logic: '<S3>/LogicalOperator65'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source32' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_f = (((VeLTII_b_AHH_Ready_Status_FA)
        || (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_BSM_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source33' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kn = (((VeLTII_b_ImpendingSkid_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_BSM_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source35' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_he = (((VeLTII_b_EngineSpeed_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_ECM_EPT));

#endif

    /* End of Logic: '<S3>/LogicalOperator62' */

    /* Logic: '<S3>/LogicalOperator66' incorporates:
     *  Logic: '<S3>/LogicalOperator67'
     *  Logic: '<S3>/LogicalOperator68'
     *  Logic: '<S3>/LogicalOperator69'
     *  Logic: '<S3>/LogicalOperator70'
     *  Logic: '<S3>/LogicalOperator71'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/Variant Source16' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_m = (((VeLTII_b_MtrA_MaxTrq_FA) ||
        (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT));

    /* VariantMerge generated from: '<S3>/Variant Source17' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ge = (((VeLTII_b_MtrA_MinTrq_FA) ||
        (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT));

    /* VariantMerge generated from: '<S3>/Variant Source18' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kw = ((((VeLTII_b_MtrA_TrqAchieved_FA)
        || (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT)) ||
        (VeLTII_b_MtrA_TrqAchieved_Vld));

    /* VariantMerge generated from: '<S3>/Variant Source19' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_i = (((VeLTII_b_MtrB_MaxTrq_FA) ||
        (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT));

    /* VariantMerge generated from: '<S3>/Variant Source20' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_m5 = (((VeLTII_b_MtrB_MinTrq_FA) ||
        (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT));

    /* VariantMerge generated from: '<S3>/Variant Source21' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_di = ((((VeLTII_b_MtrB_TrqAchieved_FA)
        || (VeLTII_b_LOC_DMPI_EPT)) || (VeLTII_b_CANBusOff_EPT)) ||
        (VeLTII_b_MtrB_TrqAchieved_Vld));

#endif

    /* End of Logic: '<S3>/LogicalOperator66' */

    /* Logic: '<S3>/LogicalOperator7' */
#if Rte_SysCon_Variant_LTIR_Enbl_CADM

    /* VariantMerge generated from: '<S3>/Variant Source1' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gx = (((VeLTII_b_ACC_WhlTrqEnbld_FA) ||
        (VeLTII_b_LOC_CADM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/LogicalOperator7' */

    /* Logic: '<S3>/LogicalOperator8' incorporates:
     *  Logic: '<S3>/LogicalOperator9'
     */
#if Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source58' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_co = (((VeLTII_b_WhlDirFL_Stat_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source60' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_n = (((VeLTII_b_WhlDirFR_Stat_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/LogicalOperator8' */

    /* Logic: '<S3>/Logical_Operator' */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* Logic: '<S3>/Logical_Operator' */
    rtb_Logical_Operator = (((VeLTII_b_BrkTrqCANC2_FA) ||
        (VeLTII_b_LOC_BSM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/Logical_Operator' */

    /* Logic: '<S3>/Logical_Operator1' */
#if Rte_SysCon_Variant_LTIR_Enbl_BSM

    /* Logic: '<S3>/Logical_Operator1' */
    rtb_Logical_Operator1 = (((VeLTII_b_WhlFL_RPS_FA) || (VeLTII_b_LOC_BSM_CANC))
        || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator1' */

    /* Logic: '<S3>/Logical_Operator68' incorporates:
     *  Logic: '<S3>/Logical_Operator62'
     */
#if !Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source81' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_p = (((VeLTII_b_BrkTrqDriver_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source78' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ab = (((VeLTII_b_BrkBoostPressure_FA)
        || (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator68' */

    /* Logic: '<S3>/Logical_Operator6' incorporates:
     *  Logic: '<S3>/Logical_Operator10'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source90' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_dn =
        ((LTIR_ac_B.VariantMerge_For_Variant_Sour_p) &&
         (((VeLTII_b_BrkTrqDriverCANC2_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
          (VeLTII_b_CANBusOff_CANC2)));

#endif

    /* End of Logic: '<S3>/Logical_Operator6' */

    /* Logic: '<S3>/Logical_Operator65' */
#if !Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source77' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_h = (((VeLTII_b_BrkPdlStat_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator65' */

    /* Logic: '<S3>/Logical_Operator7' incorporates:
     *  Logic: '<S3>/Logical_Operator11'
     *  Logic: '<S3>/Logical_Operator12'
     *  Logic: '<S3>/Logical_Operator8'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source91' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pd =
        ((LTIR_ac_B.VariantMerge_For_Variant_Sou_ab) &&
         (((VeLTII_b_BrkBoostPresCANC2_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
          (VeLTII_b_CANBusOff_CANC2)));

    /* VariantMerge generated from: '<S3>/Variant Source92' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_py =
        ((LTIR_ac_B.VariantMerge_For_Variant_Sour_h) &&
         (((VeLTII_b_BrkPdlStatCANC2_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
          (VeLTII_b_CANBusOff_CANC2)));

#endif

    /* End of Logic: '<S3>/Logical_Operator7' */

    /* Logic: '<S3>/Logical_Operator13' incorporates:
     *  Logic: '<S3>/Logical_Operator19'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN || Rte_SysCon_Variant_LTIR_Enbl_ESM

    /* Logic: '<S3>/Logical_Operator13' */
    rtb_Logical_Operator13 = (((VeLTII_b_Prmry_PRNDFailSts_FA) ||
        (VeLTII_b_LOC_ESM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* Logic: '<S3>/Logical_Operator19' */
    rtb_Logical_Operator19 = (((VeLTII_b_PrmrPRNDDispFailSts_FA) ||
        (VeLTII_b_LOC_ESM_CANC)) || (VeLTII_b_CANBusOff_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator13' */

    /* Logic: '<S3>/Logical_Operator14' incorporates:
     *  Logic: '<S3>/Logical_Operator16'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_ESM

    /* Logic: '<S3>/Logical_Operator14' */
    rtb_Logical_Operator14 = !rtb_Logical_Operator13;

    /* Logic: '<S3>/Logical_Operator16' */
    rtb_Logical_Operator16 = !rtb_Logical_Operator19;

#endif

    /* End of Logic: '<S3>/Logical_Operator14' */

    /* Logic: '<S3>/Logical_Operator2' incorporates:
     *  Logic: '<S3>/Logical_Operator23'
     *  Logic: '<S3>/Logical_Operator24'
     *  Logic: '<S3>/Logical_Operator3'
     *  Logic: '<S3>/Logical_Operator4'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BSM

    /* VariantMerge generated from: '<S3>/Variant Source94' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ok = (rtb_Logical_Operator1 &&
        (((VeLTII_b_WhlFL_RPS_CANC2_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
         (VeLTII_b_CANBusOff_CANC2)));

    /* Logic: '<S3>/Logical_Operator3' */
    rtb_Logical_Operator3 = (((VeLTII_b_WhlFR_RPS_FA) || (VeLTII_b_LOC_BSM_CANC))
        || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source95' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_fd = (rtb_Logical_Operator3 &&
        (((VeLTII_b_WhlFR_RPS_CANC2_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
         (VeLTII_b_CANBusOff_CANC2)));

#endif

    /* End of Logic: '<S3>/Logical_Operator2' */

    /* Logic: '<S3>/Logical_Operator25' incorporates:
     *  Logic: '<S3>/Logical_Operator26'
     *  Logic: '<S3>/Logical_Operator27'
     *  Logic: '<S3>/Logical_Operator28'
     *  Logic: '<S3>/Logical_Operator29'
     *  Logic: '<S3>/Logical_Operator30'
     *  Logic: '<S3>/Logical_Operator31'
     *  Logic: '<S3>/Logical_Operator32'
     */
#if Rte_SysCon_Variant_LTIR_AxlReq_BSM

    /* VariantMerge generated from: '<S3>/Variant Source44' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cv = (((VeLTII_b_FrntAxlMaxRq_BSM_FA)
        || (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source45' */
    LTIR_ac_B.VariantMerge_For_Variant_So_pwc = (((VeLTII_b_FrntAxlMinRq_BSM_FA)
        || (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source46' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_b0 = (((VeLTII_b_RrAxlMaxRq_BSM_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source47' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_l3 = (((VeLTII_b_RrAxlMinRq_BSM_FA) ||
        (VeLTII_b_LOC_BSM_CANC)) || (VeLTII_b_CANBusOff_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source48' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_bh =
        (((VeLTII_b_FrntAxlMaxRqC2_BSM_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
         (VeLTII_b_CANBusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source49' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hb =
        (((VeLTII_b_FrntAxlMinRqC2_BSM_FA) || (VeLTII_b_LOC_BSM_CANC2)) ||
         (VeLTII_b_CANBusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source50' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_p1 = (((VeLTII_b_RrAxlMaxRqC2_BSM_FA)
        || (VeLTII_b_LOC_BSM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source51' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ib = (((VeLTII_b_RrAxlMinRqC2_BSM_FA)
        || (VeLTII_b_LOC_BSM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/Logical_Operator25' */

    /* Logic: '<S3>/Logical_Operator33' incorporates:
     *  Logic: '<S3>/Logical_Operator34'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/Variant Source52' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_lg =
        (((VeLTII_b_MtrAFltHVCntctrOpnRqFA) || (VeLTII_b_LOC_MCPA_CANC11)) ||
         (VeLTII_b_CANBusOff_CANC11));

    /* VariantMerge generated from: '<S3>/Variant Source53' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_iv =
        (((VeLTII_b_MtrBFltHVCntctrOpnRqFA) || (VeLTII_b_LOC_MCPB_CANC11)) ||
         (VeLTII_b_CANBusOff_CANC11));

#endif

    /* End of Logic: '<S3>/Logical_Operator33' */

    /* Logic: '<S3>/Logical_Operator35' incorporates:
     *  Logic: '<S3>/Logical_Operator36'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_NoAEMD

    /* VariantMerge generated from: '<S3>/Variant Source69' */
    LTIR_ac_B.VariantMerge_For_Variant_So_izt =
        ((((VeLTII_b_MtrATrqAchvdNoAEMD_FA) || (VeLTII_b_LOC_MCPA_CANC11)) ||
          (VeLTII_b_CANBusOff_CANC11)) || (VeLTII_b_MtrATrqAchvdNoAEMDVld));

    /* VariantMerge generated from: '<S3>/Variant Source70' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mo =
        ((((VeLTII_b_MtrBTrqAchvdNoAEMD_FA) || (VeLTII_b_LOC_MCPB_CANC11)) ||
          (VeLTII_b_CANBusOff_CANC11)) || (VeLTII_b_MtrBTrqAchvdNoAEMDVld));

#endif

    /* End of Logic: '<S3>/Logical_Operator35' */

    /* Logic: '<S3>/Logical_Operator37' incorporates:
     *  Logic: '<S3>/Logical_Operator38'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_EPT

    /* VariantMerge generated from: '<S3>/Variant Source52' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_lg =
        (((VeLTII_b_MtrAFltHVCntctrOpnRqFA) || (VeLTII_b_LOC_DMPI_EPT)) ||
         (VeLTII_b_CANBusOff_EPT));

    /* VariantMerge generated from: '<S3>/Variant Source53' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_iv =
        (((VeLTII_b_MtrBFltHVCntctrOpnRqFA) || (VeLTII_b_LOC_DMPI_EPT)) ||
         (VeLTII_b_CANBusOff_EPT));

#endif

    /* End of Logic: '<S3>/Logical_Operator37' */

    /* Logic: '<S3>/Logical_Operator39' */
#if Rte_SysCon_Variant_LTIR_ParkingGearShft

    /* VariantMerge generated from: '<S3>/Variant Source56' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_md =
        (((VeLTII_b_ParkingGrShftRqBSM_FA) || (VeLTII_b_CANBusOff_CANC)) ||
         (VeLTII_b_LOC_BSM_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator39' */

    /* Logic: '<S3>/Logical_Operator40' */
#if Rte_SysCon_Variant_LTIR_Enbl_SGCP

    /* VariantMerge generated from: '<S3>/Variant Source71' */
    LTIR_ac_B.VariantMerge_For_Variant_So_cps =
        (((VeLTII_b_MtrCFltHVCntctrOpRq_FA) || (VeLTII_b_LOC_SGCP_CANC11)) ||
         (VeLTII_b_CANBusOff_CANC11));

#endif

    /* End of Logic: '<S3>/Logical_Operator40' */

    /* Logic: '<S3>/Logical_Operator41' */
#if !Rte_SysCon_Variant_LTIR_Dsbl_ECM

    /* VariantMerge generated from: '<S3>/Variant Source72' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ne = ((((VeLTII_b_EngActStdyStTorq_FA)
        || (VeLTII_b_LOC_ECM_EPT)) || (VeLTII_b_CANBusOff_EPT)) ||
        (VeLTII_b_EngActStdyStTorq_Vld));

#endif

    /* End of Logic: '<S3>/Logical_Operator41' */

    /* Logic: '<S3>/Logical_Operator42' incorporates:
     *  Logic: '<S3>/Logical_Operator43'
     *  Logic: '<S3>/Logical_Operator44'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source62' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ob = (((VeLTII_b_EVRDesVSetP_FA) ||
        (VeLTII_b_LOC_ECM_EPT)) || (VeLTII_b_CANBusOff_EPT));

    /* VariantMerge generated from: '<S3>/Variant Source73' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kr = (((VeLTII_b_SumFWIDFst_FA) ||
        (VeLTII_b_LOC_ECM_EPT)) || (VeLTII_b_CANBusOff_EPT));

    /* VariantMerge generated from: '<S3>/Variant Source74' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pa = (((VeLTII_b_SumFWIDSlw_FA) ||
        (VeLTII_b_LOC_ECM_EPT)) || (VeLTII_b_CANBusOff_EPT));

#endif

    /* End of Logic: '<S3>/Logical_Operator42' */

    /* Logic: '<S3>/Logical_Operator45' */
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* Logic: '<S3>/Logical_Operator45' */
    rtb_Logical_Operator45 = !rtb_Logical_Operator19;

#endif

    /* End of Logic: '<S3>/Logical_Operator45' */

    /* Logic: '<S3>/Logical_Operator46' */
#if Rte_SysCon_Variant_LTIR_Enbl_CANC2

    /* VariantMerge generated from: '<S3>/Variant Source57' */
    LTIR_ac_B.VariantMerge_For_Variant_So_lg5 = (((VeLTII_b_ACC_WhlTrq_FA) ||
        (VeLTII_b_LOC_BSM_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/Logical_Operator46' */

    /* Logic: '<S3>/Logical_Operator47' incorporates:
     *  Logic: '<S3>/Logical_Operator48'
     *  Logic: '<S3>/Logical_Operator49'
     *  Logic: '<S3>/Logical_Operator66'
     */
#if !Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source63' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_nr = (((VeLTII_b_WhlFL_Spd_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source64' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_dx = (((VeLTII_b_WhlRL_Spd_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source67' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_p5 = (((VeLTII_b_WhlFR_Spd_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source79' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_j2 = (((VeLTII_b_BrkTravelSts_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator47' */

    /* SignalConversion generated from: '<S3>/Variant Source96' incorporates:
     *  Logic: '<S3>/Logical_Operator5'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source96' incorporates:
     *  Constant: '<S3>/Constant70'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_d = false;

#else

    /* VariantMerge generated from: '<S3>/Variant Source93' incorporates:
     *  Logic: '<S3>/Logical_Operator5'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ar =
        ((LTIR_ac_B.VariantMerge_For_Variant_Sou_j2) &&
         (LTIR_ac_B.VariantMerge_For_Variant_Sour_d));

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source96' */

    /* Switch: '<S3>/Switch2' incorporates:
     *  Constant: '<S13>/Calib'
     */
    if (KeLTIR_b_Select_BCM_KeySts)
    {
        /* Switch: '<S3>/Switch2' */
        rtb_Switch2 = VeLTII_b_KeySts_FA;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/LTII' */
        /* Switch: '<S3>/Switch2' incorporates:
         *  Logic: '<S59>/AND'
         */
        rtb_Switch2 = tmpRead_0;

        /* End of Outputs for SubSystem: '<S1>/LTII' */
    }

    /* End of Switch: '<S3>/Switch2' */

    /* Logic: '<S3>/Logical_Operator50' incorporates:
     *  Logic: '<S3>/Logical_Operator51'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BCM

    /* VariantMerge generated from: '<S3>/Variant Source8' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ov = (((VeLTII_b_LOC_BCM_CANC) ||
        (VeLTII_b_CANBusOff_CANC)) || rtb_Switch2);

#else

    /* VariantMerge generated from: '<S3>/Variant Source8' incorporates:
     *  Logic: '<S3>/Logical_Operator51'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ov = ((rtb_Switch2 ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ZCU_CL_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator50' */

    /* Logic: '<S3>/Logical_Operator52' */
#if !Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source66' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_lq = (((VeLTII_b_WhlRR_Spd_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator52' */

    /* Logic: '<S3>/Logical_Operator53' incorporates:
     *  Logic: '<S3>/Logical_Operator55'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source35' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_he = (((VeLTII_b_EngineSpeed_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ECM_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source36' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_h3 = (((VeLTII_b_RgnBrkAxTrqReq_FA) ||
        (VeLTII_b_LOC_ESC_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

#endif

    /* End of Logic: '<S3>/Logical_Operator53' */

    /* Logic: '<S3>/Logical_Operator54' incorporates:
     *  Logic: '<S3>/Logical_Operator56'
     *  Logic: '<S3>/Logical_Operator57'
     *  Logic: '<S3>/Logical_Operator58'
     *  Logic: '<S3>/Logical_Operator59'
     *  Logic: '<S3>/Logical_Operator60'
     *  Logic: '<S3>/Logical_Operator67'
     */
#if !Rte_SysCon_Variant_LTIR_Dsbl_ESC

    /* VariantMerge generated from: '<S3>/Variant Source65' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ao = (((VeLTII_b_VehSpdCANC_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source68' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ny = (((VeLTII_b_BrkMaxRgnReady_FA) ||
        (VeLTII_b_LOC_ESC_CANC2)) || (VeLTII_b_CANBusOff_CANC2));

    /* VariantMerge generated from: '<S3>/Variant Source58' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_co = (((VeLTII_b_WhlDirFL_Stat_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source59' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jf = (((VeLTII_b_WhlDirRL_Stat_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source60' */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_n = (((VeLTII_b_WhlDirFR_Stat_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source61' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pc = (((VeLTII_b_WhlDirRR_Stat_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

    /* VariantMerge generated from: '<S3>/Variant Source80' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jb = (((VeLTII_b_BrkTrq_FA) ||
        (VeLTII_b_CANBusOff_CANC)) || (VeLTII_b_LOC_ESC_CANC));

#endif

    /* End of Logic: '<S3>/Logical_Operator54' */

    /* Logic: '<S3>/Logical_Operator63' incorporates:
     *  Logic: '<S3>/Logical_Operator64'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* Logic: '<S3>/Logical_Operator63' */
    rtb_Logical_Operator63 = !rtb_Logical_Operator13;

    /* VariantMerge generated from: '<S3>/Variant Source34' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pw = (((VeLTII_b_MtrA_InvrtrSts_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_DMPI_EPT));

#endif

    /* End of Logic: '<S3>/Logical_Operator63' */

    /* Logic: '<S3>/Logical_Operator9' incorporates:
     *  Switch: '<S3>/Switch10'
     *  Switch: '<S3>/Switch11'
     *  Switch: '<S3>/Switch12'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source89' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_k3 =
        ((LTIR_ac_B.VariantMerge_For_Variant_Sou_jb) && rtb_Logical_Operator);
    if (LTIR_ac_B.VariantMerge_For_Variant_Sour_p)
    {
        /* VariantMerge generated from: '<S3>/Variant Source86' */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_a4 = VeLTII_M_BrkTrqDriverCANC2;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source86' incorporates:
         *  Inport: '<S3>/BrkTrqDriver'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_a4 = VeLTII_M_BrkTrqDriver;
    }

    if (LTIR_ac_B.VariantMerge_For_Variant_Sou_ab)
    {
        /* VariantMerge generated from: '<S3>/Variant Source84' */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_gs = VeLTII_p_BrakeBoostPresCANC2;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source84' incorporates:
         *  Inport: '<S3>/BrakeBoostPressure'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_gs = VeLTII_p_BrakeBoostPressure;
    }

    if (LTIR_ac_B.VariantMerge_For_Variant_Sour_h)
    {
        /* VariantMerge generated from: '<S3>/Variant Source83' */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_j = VeLTII_e_BrkPdlStatCANC2;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source83' incorporates:
         *  Inport: '<S3>/BrkPdlStat'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_j = VeLTII_e_BrkPdlStat;
    }

#endif

    /* End of Logic: '<S3>/Logical_Operator9' */

    /* Switch: '<S3>/Switch16' incorporates:
     *  Switch: '<S3>/Switch17'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BSM

    if (rtb_Logical_Operator1)
    {
        /* VariantMerge generated from: '<S3>/Variant Source75' */
        LTIR_ac_B.VariantMerge_For_Variant_Source = VeLTII_n_WhlFL_RPS_CANC2;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source75' */
        LTIR_ac_B.VariantMerge_For_Variant_Source = VeLTII_n_WhlFL_RPS;
    }

    if (rtb_Logical_Operator3)
    {
        /* VariantMerge generated from: '<S3>/Variant Source76' */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_g = VeLTII_n_WhlFR_RPS_CANC2;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source76' */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_g = VeLTII_n_WhlFR_RPS;
    }

#endif

    /* End of Switch: '<S3>/Switch16' */

    /* Switch: '<S3>/Switch18' incorporates:
     *  Switch: '<S3>/Switch19'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source55' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_bw = ((!rtb_Logical_Operator63) ||
        (VeLTII_b_Prmry_PRNDFailSts));

    /* VariantMerge generated from: '<S3>/Variant Source54' */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_e0 = ((!rtb_Logical_Operator45) ||
        (VeLTII_b_PrmryPRNDDispFailSts));

#endif

    /* End of Switch: '<S3>/Switch18' */

    /* Switch: '<S3>/Switch3' incorporates:
     *  Switch: '<S3>/Switch6'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    if (LTIR_ac_B.VariantMerge_For_Variant_Sou_j2)
    {
        /* VariantMerge generated from: '<S3>/Variant Source82' */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_a = VeLTII_Pct_BrkTravelStsCANC2;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source82' incorporates:
         *  Inport: '<S3>/BrkTravelSts'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_a = VeLTII_Pct_BrkTravelSts;
    }

    if (LTIR_ac_B.VariantMerge_For_Variant_Sou_jb)
    {
        /* VariantMerge generated from: '<S3>/Variant Source85' */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_c = VeLTII_M_BrkTrqCANC2;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source85' incorporates:
         *  Inport: '<S3>/BrkTrq'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sour_c = VeLTII_M_BrkTrq;
    }

#endif

    /* End of Switch: '<S3>/Switch3' */

    /* Switch: '<S3>/Switch7' incorporates:
     *  Logic: '<S3>/Logical_Operator15'
     *  Logic: '<S3>/Logical_Operator17'
     *  Logic: '<S3>/Logical_Operator18'
     *  Logic: '<S3>/Logical_Operator20'
     *  Switch: '<S3>/Switch15'
     *  Switch: '<S3>/Switch8'
     *  Switch: '<S3>/Switch9'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_ESM

    if (rtb_Logical_Operator16)
    {
        /* VariantMerge generated from: '<S3>/Variant Source54' */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_e0 =
            VeLTII_b_PrmryPRNDDispFailSts;
    }
    else if (((!VeLTII_b_ScndPRNDDispFailSts_FA) && (!VeLTII_b_LOC_ESM_CANC11)) &&
             (!VeLTII_b_CANBusOff_CANC11))
    {
        /* VariantMerge generated from: '<S3>/Variant Source54' incorporates:
         *  Switch: '<S3>/Switch15'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_e0 =
            VeLTII_b_ScndryPRNDDispFailSts;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source54' incorporates:
         *  Logic: '<S3>/Logical_Operator22'
         *  Switch: '<S3>/Switch14'
         *  Switch: '<S3>/Switch15'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_e0 = (rtb_Logical_Operator19 ||
            (VeLTII_b_PrmryPRNDDispFailSts));
    }

    if (rtb_Logical_Operator14)
    {
        /* VariantMerge generated from: '<S3>/Variant Source55' */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_bw = VeLTII_b_Prmry_PRNDFailSts;
    }
    else if (((!VeLTII_b_Scndry_PRNDFailSts_FA) && (!VeLTII_b_LOC_ESM_CANC11)) &&
             (!VeLTII_b_CANBusOff_CANC11))
    {
        /* VariantMerge generated from: '<S3>/Variant Source55' incorporates:
         *  Switch: '<S3>/Switch9'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_bw = VeLTII_b_Scndry_PRNDFailSts;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/Variant Source55' incorporates:
         *  Logic: '<S3>/Logical_Operator21'
         *  Switch: '<S3>/Switch13'
         *  Switch: '<S3>/Switch9'
         */
        LTIR_ac_B.VariantMerge_For_Variant_Sou_bw = (rtb_Logical_Operator13 ||
            (VeLTII_b_Prmry_PRNDFailSts));
    }

#endif

    /* End of Switch: '<S3>/Switch7' */

    /* SignalConversion generated from: '<S3>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source10'
     *  SignalConversion generated from: '<S3>/Variant Source12'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/VariantSource7' incorporates:
     *  Constant: '<S3>/Constant53'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_k = false;

    /* VariantMerge generated from: '<S3>/Variant Source10' incorporates:
     *  Constant: '<S3>/Constant61'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_e = false;

    /* VariantMerge generated from: '<S3>/Variant Source12' incorporates:
     *  Constant: '<S3>/Constant69'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_p3 = false;

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource7' */

    /* SignalConversion generated from: '<S3>/Variant Source11' */
#if !Rte_SysCon_Variant_LTIR_ACC_Eng_CANC && !Rte_SysCon_Variant_LTIR_Enbl_BRAIN

    /* VariantMerge generated from: '<S3>/Variant Source11' incorporates:
     *  Constant: '<S3>/Constant52'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_b = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source11' */

    /* SignalConversion generated from: '<S3>/Variant Source13' */
#if !Rte_SysCon_Variant_LTIR_Lv2GlobDrvMdRq_FA_BCM

    /* VariantMerge generated from: '<S3>/Variant Source13' incorporates:
     *  Constant: '<S3>/Constant2'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_h2 = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source13' */

    /* SignalConversion generated from: '<S3>/Variant Source14' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source15'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_SGW

    /* VariantMerge generated from: '<S3>/Variant Source14' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cs = false;

    /* VariantMerge generated from: '<S3>/Variant Source15' incorporates:
     *  Constant: '<S3>/Constant'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_g1 = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source14' */

    /* SignalConversion generated from: '<S3>/Variant Source1' */
#if !Rte_SysCon_Variant_LTIR_ACC_WhlTrqEnbld_CANC && !Rte_SysCon_Variant_LTIR_Enbl_CADM

    /* VariantMerge generated from: '<S3>/Variant Source1' incorporates:
     *  Constant: '<S3>/Constant19'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gx = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source1' */

    /* SignalConversion generated from: '<S3>/Variant Source22' */
#if !Rte_SysCon_Variant_LTIR_Enbl_MCPB

    /* VariantMerge generated from: '<S3>/Variant Source22' incorporates:
     *  Constant: '<S3>/Constant4'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_my = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source22' */

    /* SignalConversion generated from: '<S3>/Variant Source23' */
#if !Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source23' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mu = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source23' */

    /* SignalConversion generated from: '<S3>/Variant Source24' */
#if !Rte_SysCon_Variant_LTIR_Dsbl_HEV_PHEV_sig

    /* VariantMerge generated from: '<S3>/Variant Source24' incorporates:
     *  Constant: '<S3>/Constant6'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cl = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source24' */

    /* SignalConversion generated from: '<S3>/Variant Source25' */
#if !Rte_SysCon_Variant_LTIR_ASR_MSRActv

    /* VariantMerge generated from: '<S3>/Variant Source25' incorporates:
     *  Constant: '<S3>/Constant7'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_o = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source25' */

    /* SignalConversion generated from: '<S3>/Variant Source26' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source27'
     */
#if !Rte_SysCon_Variant_LTIR_AxlReq_BSM

    /* VariantMerge generated from: '<S3>/Variant Source26' incorporates:
     *  Constant: '<S3>/Constant8'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gi = false;

    /* VariantMerge generated from: '<S3>/Variant Source27' incorporates:
     *  Constant: '<S3>/Constant9'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_jo = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source26' */

    /* SignalConversion generated from: '<S3>/Variant Source28' */
#if !Rte_SysCon_Variant_LTIR_ESS_EngStateEE_ECM

    /* VariantMerge generated from: '<S3>/Variant Source28' incorporates:
     *  Constant: '<S3>/Constant10'
     */
    LTIR_ac_B.VariantMerge_For_Variant_So_hlk = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source28' */

    /* SignalConversion generated from: '<S3>/Variant Source29' */
#if !Rte_SysCon_Variant_LTIR_Enbl_CADM

    /* VariantMerge generated from: '<S3>/Variant Source29' incorporates:
     *  Constant: '<S3>/Constant11'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kt = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source29' */

    /* SignalConversion generated from: '<S3>/Variant Source2' */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source2' incorporates:
     *  Constant: '<S3>/Constant58'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ij = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source2' */

    /* SignalConversion generated from: '<S3>/Variant Source30' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source31'
     */
#if !Rte_SysCon_Variant_LTIR_AxlReq_BSM

    /* VariantMerge generated from: '<S3>/Variant Source30' incorporates:
     *  Constant: '<S3>/Constant12'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_iz = false;

    /* VariantMerge generated from: '<S3>/Variant Source31' incorporates:
     *  Constant: '<S3>/Constant13'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_by = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source30' */

    /* SignalConversion generated from: '<S3>/Variant Source32' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source33'
     *  SignalConversion generated from: '<S3>/Variant Source34'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source32' incorporates:
     *  Constant: '<S3>/Constant14'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_f = false;

    /* VariantMerge generated from: '<S3>/Variant Source33' incorporates:
     *  Constant: '<S3>/Constant15'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kn = false;

    /* VariantMerge generated from: '<S3>/Variant Source34' incorporates:
     *  Constant: '<S3>/Constant16'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pw = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source32' */

    /* SignalConversion generated from: '<S3>/Variant Source35' */
#if !Rte_SysCon_Variant_LTIR_Enbl_BLUEN && !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source35' incorporates:
     *  Constant: '<S3>/Constant17'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_he = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source35' */

    /* SignalConversion generated from: '<S3>/Variant Source36' */
#if Rte_SysCon_Variant_LTIR_Enbl_BRAIN

    /* VariantMerge generated from: '<S3>/Variant Source36' incorporates:
     *  Constant: '<S3>/Constant18'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_h3 = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source36' */

    /* SignalConversion generated from: '<S3>/Variant Source37' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source38'
     *  SignalConversion generated from: '<S3>/Variant Source39'
     *  SignalConversion generated from: '<S3>/Variant Source40'
     *  SignalConversion generated from: '<S3>/Variant Source41'
     *  SignalConversion generated from: '<S3>/Variant Source42'
     *  SignalConversion generated from: '<S3>/Variant Source43'
     */
#if !Rte_SysCon_Variant_LTIR_Dsbl_AllProg

    /* VariantMerge generated from: '<S3>/Variant Source37' incorporates:
     *  Constant: '<S3>/Constant20'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_l = false;

    /* VariantMerge generated from: '<S3>/Variant Source38' incorporates:
     *  Constant: '<S3>/Constant21'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_oq = false;

    /* VariantMerge generated from: '<S3>/Variant Source39' incorporates:
     *  Constant: '<S3>/Constant22'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gb = false;

    /* VariantMerge generated from: '<S3>/Variant Source40' incorporates:
     *  Constant: '<S3>/Constant23'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gr = false;

    /* VariantMerge generated from: '<S3>/Variant Source41' incorporates:
     *  Constant: '<S3>/Constant24'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hz = false;

    /* VariantMerge generated from: '<S3>/Variant Source42' incorporates:
     *  Constant: '<S3>/Constant25'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_og = false;

    /* VariantMerge generated from: '<S3>/Variant Source43' incorporates:
     *  Constant: '<S3>/Constant26'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_b3 = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source37' */

    /* SignalConversion generated from: '<S3>/Variant Source3' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source4'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source3' incorporates:
     *  Constant: '<S3>/Constant59'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pl = false;

    /* VariantMerge generated from: '<S3>/Variant Source4' incorporates:
     *  Constant: '<S3>/Constant60'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ke = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source3' */

    /* SignalConversion generated from: '<S3>/Variant Source44' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source45'
     *  SignalConversion generated from: '<S3>/Variant Source46'
     *  SignalConversion generated from: '<S3>/Variant Source47'
     *  SignalConversion generated from: '<S3>/Variant Source48'
     *  SignalConversion generated from: '<S3>/Variant Source49'
     *  SignalConversion generated from: '<S3>/Variant Source50'
     *  SignalConversion generated from: '<S3>/Variant Source51'
     */
#if !Rte_SysCon_Variant_LTIR_AxlReq_BSM

    /* VariantMerge generated from: '<S3>/Variant Source44' incorporates:
     *  Constant: '<S3>/Constant30'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_cv = false;

    /* VariantMerge generated from: '<S3>/Variant Source45' incorporates:
     *  Constant: '<S3>/Constant31'
     */
    LTIR_ac_B.VariantMerge_For_Variant_So_pwc = false;

    /* VariantMerge generated from: '<S3>/Variant Source46' incorporates:
     *  Constant: '<S3>/Constant32'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_b0 = false;

    /* VariantMerge generated from: '<S3>/Variant Source47' incorporates:
     *  Constant: '<S3>/Constant33'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_l3 = false;

    /* VariantMerge generated from: '<S3>/Variant Source48' incorporates:
     *  Constant: '<S3>/Constant34'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_bh = false;

    /* VariantMerge generated from: '<S3>/Variant Source49' incorporates:
     *  Constant: '<S3>/Constant35'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hb = false;

    /* VariantMerge generated from: '<S3>/Variant Source50' incorporates:
     *  Constant: '<S3>/Constant37'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_p1 = false;

    /* VariantMerge generated from: '<S3>/Variant Source51' incorporates:
     *  Constant: '<S3>/Constant36'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ib = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source44' */

    /* SignalConversion generated from: '<S3>/Variant Source54' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source55'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BLUEN && !Rte_SysCon_Variant_LTIR_Enbl_ESM

    /* VariantMerge generated from: '<S3>/Variant Source54' incorporates:
     *  Constant: '<S3>/Constant46'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_e0 = true;

    /* VariantMerge generated from: '<S3>/Variant Source55' incorporates:
     *  Constant: '<S3>/Constant48'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_bw = true;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source54' */

    /* SignalConversion generated from: '<S3>/Variant Source56' */
#if !Rte_SysCon_Variant_LTIR_ParkingGearShft

    /* VariantMerge generated from: '<S3>/Variant Source56' incorporates:
     *  Constant: '<S3>/Constant38'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_md = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source56' */

    /* SignalConversion generated from: '<S3>/Variant Source57' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source62'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source57' incorporates:
     *  Constant: '<S3>/Constant29'
     */
    LTIR_ac_B.VariantMerge_For_Variant_So_lg5 = false;

#else

    /* VariantMerge generated from: '<S3>/Variant Source62' incorporates:
     *  Constant: '<S3>/Constant43'
     *  SignalConversion generated from: '<S3>/Variant Source62'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ob = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source57' */

    /* SignalConversion generated from: '<S3>/Variant Source69' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source70'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_NoAEMD

    /* VariantMerge generated from: '<S3>/Variant Source69' incorporates:
     *  Constant: '<S3>/Constant39'
     */
    LTIR_ac_B.VariantMerge_For_Variant_So_izt = false;

    /* VariantMerge generated from: '<S3>/Variant Source70' incorporates:
     *  Constant: '<S3>/Constant40'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mo = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source69' */

    /* SignalConversion generated from: '<S3>/Variant Source71' */
#if !Rte_SysCon_Variant_LTIR_Enbl_SGCP

    /* VariantMerge generated from: '<S3>/Variant Source71' incorporates:
     *  Constant: '<S3>/Constant41'
     */
    LTIR_ac_B.VariantMerge_For_Variant_So_cps = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source71' */

    /* SignalConversion generated from: '<S3>/Variant Source72' */
#if Rte_SysCon_Variant_LTIR_Dsbl_ECM

    /* VariantMerge generated from: '<S3>/Variant Source72' incorporates:
     *  Constant: '<S3>/Constant42'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ne = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source72' */

    /* SignalConversion generated from: '<S3>/Variant Source73' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source74'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source73' incorporates:
     *  Constant: '<S3>/Constant44'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_kr = false;

    /* VariantMerge generated from: '<S3>/Variant Source74' incorporates:
     *  Constant: '<S3>/Constant45'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pa = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source73' */

    /* SignalConversion generated from: '<S3>/Variant Source75' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source76'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BSM

    /* VariantMerge generated from: '<S3>/Variant Source75' incorporates:
     *  Constant: '<S3>/Constant50'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Source = 0.0F;

    /* VariantMerge generated from: '<S3>/Variant Source76' incorporates:
     *  Constant: '<S3>/Constant51'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_g = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source75' */

    /* SignalConversion generated from: '<S3>/Variant Source7' */
#if !Rte_SysCon_Variant_LTIR_Dsbl_BLUEN

    /* VariantMerge generated from: '<S3>/Variant Source7' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    LTIR_ac_B.VariantMerge_For_Variant_So_p3u = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source7' */

    /* SignalConversion generated from: '<S3>/Variant Source82' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source83'
     *  SignalConversion generated from: '<S3>/Variant Source84'
     *  SignalConversion generated from: '<S3>/Variant Source85'
     *  SignalConversion generated from: '<S3>/Variant Source86'
     *  SignalConversion generated from: '<S3>/Variant Source87'
     *  SignalConversion generated from: '<S3>/Variant Source88'
     *  SignalConversion generated from: '<S3>/Variant Source89'
     *  SignalConversion generated from: '<S3>/Variant Source90'
     *  SignalConversion generated from: '<S3>/Variant Source91'
     *  SignalConversion generated from: '<S3>/Variant Source92'
     *  SignalConversion generated from: '<S3>/Variant Source93'
     *  SignalConversion generated from: '<S3>/Variant Source97'
     *  SignalConversion generated from: '<S3>/Variant Source98'
     *  SignalConversion generated from: '<S3>/Variant Source99'
     *  SignalConversion generated from: '<S3>/Variant Source9'
     *  SignalConversion generated from: '<S3>/Variant Source'
     */
#if Rte_SysCon_Variant_LTIR_Enbl_P2GEN4

    /* VariantMerge generated from: '<S3>/Variant Source82' incorporates:
     *  Inport: '<S3>/BrkTravelSts'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_a = VeLTII_Pct_BrkTravelSts;

    /* VariantMerge generated from: '<S3>/Variant Source83' incorporates:
     *  Inport: '<S3>/BrkPdlStat'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_j = VeLTII_e_BrkPdlStat;

    /* VariantMerge generated from: '<S3>/Variant Source84' incorporates:
     *  Inport: '<S3>/BrakeBoostPressure'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_gs = VeLTII_p_BrakeBoostPressure;

    /* VariantMerge generated from: '<S3>/Variant Source85' incorporates:
     *  Inport: '<S3>/BrkTrq'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sour_c = VeLTII_M_BrkTrq;

    /* VariantMerge generated from: '<S3>/Variant Source86' incorporates:
     *  Inport: '<S3>/BrkTrqDriver'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_a4 = VeLTII_M_BrkTrqDriver;

    /* VariantMerge generated from: '<S3>/Variant Source87' incorporates:
     *  Constant: '<S3>/Constant56'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ot = false;

    /* VariantMerge generated from: '<S3>/Variant Source88' incorporates:
     *  Constant: '<S3>/Constant57'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ha = false;

    /* VariantMerge generated from: '<S3>/Variant Source89' incorporates:
     *  Constant: '<S3>/Constant62'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_k3 = false;

    /* VariantMerge generated from: '<S3>/Variant Source90' incorporates:
     *  Constant: '<S3>/Constant63'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_dn = false;

    /* VariantMerge generated from: '<S3>/Variant Source91' incorporates:
     *  Constant: '<S3>/Constant64'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_pd = false;

    /* VariantMerge generated from: '<S3>/Variant Source92' incorporates:
     *  Constant: '<S3>/Constant65'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_py = false;

    /* VariantMerge generated from: '<S3>/Variant Source93' incorporates:
     *  Constant: '<S3>/Constant66'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ar = false;

    /* VariantMerge generated from: '<S3>/Variant Source97' incorporates:
     *  Constant: '<S3>/Constant71'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mh = false;

    /* VariantMerge generated from: '<S3>/Variant Source98' incorporates:
     *  Constant: '<S3>/Constant72'
     */
    LTIR_ac_B.VariantMerge_For_Variant_So_p5x = false;

    /* VariantMerge generated from: '<S3>/Variant Source99' incorporates:
     *  Constant: '<S3>/Constant73'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ow = false;

    /* VariantMerge generated from: '<S3>/Variant Source9' incorporates:
     *  Constant: '<S3>/Constant54'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_mg = false;

    /* VariantMerge generated from: '<S3>/Variant Source' incorporates:
     *  Constant: '<S3>/Constant55'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_hy = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source82' */

    /* SignalConversion generated from: '<S3>/Variant Source94' incorporates:
     *  SignalConversion generated from: '<S3>/Variant Source95'
     */
#if !Rte_SysCon_Variant_LTIR_Enbl_BSM

    /* VariantMerge generated from: '<S3>/Variant Source94' incorporates:
     *  Constant: '<S3>/Constant67'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_ok = false;

    /* VariantMerge generated from: '<S3>/Variant Source95' incorporates:
     *  Constant: '<S3>/Constant68'
     */
    LTIR_ac_B.VariantMerge_For_Variant_Sou_fd = false;

#endif

    /* End of SignalConversion generated from: '<S3>/Variant Source94' */

    /* Logic: '<S3>/Logical50' */
    VeLTIC_b_SpeedUnitSwapped = !VeLTII_b_SpeedUnit;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_Engaged_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ACC_Engaged_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_Engaged_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_b);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_SystemSts_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ACC_SystemSts_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_SystemSts_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_e);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ACC_WhlTrqEnbld_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_gx);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ACC_WhlTrq_ADAS_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_kt);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ACC_WhlTrq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_WhlTrq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_So_lg5);

    /* Outport: '<Root>/VeLTIR_b_Lv2AHH_Ready_Status_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_AHH_Ready_Status_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2AHH_Ready_Status_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_f);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_CtrlStsFbk_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_APM_CtrlStsFbk_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_CtrlStsFbk_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ke);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_FailureReason_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_APM_FailureReason_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_FailureReason_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_hn);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_FailureType_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_APM_FailureType_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_FailureType_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_jk);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_HVBatVlt_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_APM_HVBatVlt_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_HVBatVlt_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ij);

    /* Outport: '<Root>/VeLTIR_b_Lv2ASR_MSRActv_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ASR_MSRActv_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ASR_MSRActv_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_o);

    /* Outport: '<Root>/VeLTIR_b_AeCoastReadyFA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_AeCoastReadyFA'
     */
    (void)Rte_Write_VeLTIR_b_AeCoastReadyFA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_b3);

    /* Outport: '<Root>/VeLTIR_p_Lv2BrakeBoostPressure' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrakeBoostPressure'
     */
    (void)Rte_Write_VeLTIR_p_Lv2BrakeBoostPressure_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_gs);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrakeBoostPressureFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrakeBoostPressureFlt'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrakeBoostPressureFlt_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_pd);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkBoostPressure_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkBoostPressure_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkBoostPressure_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ab);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkMaxRgnReady_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkMaxRgnReady_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkMaxRgnReady_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ny);

    /* Outport: '<Root>/VeLTIR_e_Lv2BrkPdlStat' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkPdlStat'
     */
    (void)Rte_Write_VeLTIR_e_Lv2BrkPdlStat_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_j);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkPdlStatFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkPdlStatFlt'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkPdlStatFlt_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_py);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkPdlStat_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkPdlStat_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkPdlStat_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_h);

    /* Outport: '<Root>/VeLTIR_Pct_Lv2BrkTravelSts' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTravelSts'
     */
    (void)Rte_Write_VeLTIR_Pct_Lv2BrkTravelSts_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_a);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTravelStsCANC2_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTravelStsCANC2_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTravelStsCANC2_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_d);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTravelStsFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTravelStsFlt'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTravelStsFlt_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ar);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTravelSts_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTravelSts_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTravelSts_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_j2);

    /* Outport: '<Root>/VeLTIR_M_Lv2BrkTrq' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTrq'
     */
    (void)Rte_Write_VeLTIR_M_Lv2BrkTrq_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_c);

    /* Outport: '<Root>/VeLTIR_M_Lv2BrkTrqDriver' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTrqDriver'
     */
    (void)Rte_Write_VeLTIR_M_Lv2BrkTrqDriver_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_a4);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrqDriverFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTrqDriverFlt'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrqDriverFlt_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_dn);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrqDriver_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTrqDriver_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrqDriver_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_p);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrqFlt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTrqFlt'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrqFlt_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_k3);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_BrkTrq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_jb);

    /* Outport: '<Root>/VeLTIR_b_CmndTotBrkFricTorqFA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_CmndTotBrkFricTorqFA'
     */
    (void)Rte_Write_VeLTIR_b_CmndTotBrkFricTorqFA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_gr);

    /* Outport: '<Root>/VeLTIR_b_DriveStyleStsFA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_DriveStyleStsFA'
     */
    (void)Rte_Write_VeLTIR_b_DriveStyleStsFA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_og);

    /* Outport: '<Root>/VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_DrvRqShftROT_Prmry_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ot);

    /* Outport: '<Root>/VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_DrvRqShftROT_Scndry_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_mg);

    /* Outport: '<Root>/VeLTIR_b_DrvrIntndTotBrkTrqFA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_DrvrIntndTotBrkTrqFA'
     */
    (void)Rte_Write_VeLTIR_b_DrvrIntndTotBrkTrqFA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_hz);

    /* Outport: '<Root>/VeLTIR_b_Lv2EPB_HoldSts_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_EPB_HoldSts_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EPB_HoldSts_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ha);

    /* Outport: '<Root>/VeLTIR_b_ESCInterventionMSGFA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ESCInterventionMSGFA'
     */
    (void)Rte_Write_VeLTIR_b_ESCInterventionMSGFA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_oq);

    /* Outport: '<Root>/VeLTIR_b_Lv2ESC_Active_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ESC_Active_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ESC_Active_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_So_p5x);

    /* Outport: '<Root>/VeLTIR_b_Lv2ESC_FailSts_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ESC_FailSts_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ESC_FailSts_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_mh);

    /* Outport: '<Root>/VeLTIR_b_Lv2ESS_EngStateEE_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ESS_EngStateEE_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ESS_EngStateEE_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_So_hlk);

    /* Outport: '<Root>/VeLTIR_b_Lv2EVRDesVSetP_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_EVRDesVSetP_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EVRDesVSetP_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ob);

    /* Outport: '<Root>/VeLTIR_b_Lv2EngActStdyStTorq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_EngActStdyStTorq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EngActStdyStTorq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ne);

    /* Outport: '<Root>/VeLTIR_b_Lv2EngineSpeed_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_EngineSpeed_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EngineSpeed_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_he);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FrntAxlMaxRqCANC2_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_bh);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMaxRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FrntAxlMaxRq_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMaxRq_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_cv);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMinRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FrntAxlMinRqCANC2_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMinRqCANC2_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_hb);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMinRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FrntAxlMinRq_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMinRq_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_So_pwc);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FrntAxlRqCANC2_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_iz);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_FrntAxlRq_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlRq_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_gi);

    /* Outport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_GlobDrvMdRq_BCM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_h2);

    /* Outport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_GlobDrvMdRq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2GlobDrvMdRq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_g1);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTIC'
     */
    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCntctrOpn_FA' incorporates:
     *  Logic: '<S3>/LogicalOperator33'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatCntctrOpn_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCntctrOpn_FA_Value
        (((VeLTII_b_HV_BatCntctrOpn_FA) || (VeLTII_b_LOC_BPCM_EPT)) ||
         (VeLTII_b_CANBusOff_EPT));

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCntctrReq_FA' incorporates:
     *  Logic: '<S3>/LogicalOperator46'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatCntctrReq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCntctrReq_FA_Value
        (((VeLTII_b_HV_BatCntctrReq_FA) || (VeLTII_b_CANBusOff_EPT)) ||
         (VeLTII_b_LOC_BPCM_EPT));

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCntctrStat_FA' incorporates:
     *  Logic: '<S3>/LogicalOperator16'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatCntctrStat_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCntctrStat_FA_Value
        (((VeLTII_b_HV_BatCntctrStat_FA) || (VeLTII_b_CANBusOff_EPT)) ||
         (VeLTII_b_LOC_BPCM_EPT));

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCrnt_FA' incorporates:
     *  Logic: '<S3>/Logical22'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatCrnt_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCrnt_FA_Value((((VeLTII_b_HV_BatCrnt_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_BPCM_EPT)) ||
        (VeLTII_b_HV_BatCrnt_Vld));

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatModTempMax_FA' incorporates:
     *  Logic: '<S3>/LogicalOperator15'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatModTempMax_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatModTempMax_FA_Value
        (((VeLTII_b_HV_BatModTempMax_FA) || (VeLTII_b_CANBusOff_EPT)) ||
         (VeLTII_b_LOC_BPCM_EPT));

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatModTempMin_FA' incorporates:
     *  Logic: '<S3>/Logical19'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatModTempMin_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatModTempMin_FA_Value
        (((VeLTII_b_HV_BatModTempMin_FA) || (VeLTII_b_CANBusOff_EPT)) ||
         (VeLTII_b_LOC_BPCM_EPT));

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatSOC_FA' incorporates:
     *  Logic: '<S3>/Logical15'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatSOC_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatSOC_FA_Value((((VeLTII_b_HV_BatSOC_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_BPCM_EPT)) ||
        (VeLTII_b_HV_BatSOC_Vld));

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatVlt_FA' incorporates:
     *  Logic: '<S3>/Logical26'
     *  SignalConversion generated from: '<S1>/Lv2_HV_BatVlt_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatVlt_FA_Value(((VeLTII_b_HV_BatVlt_FA) ||
        (VeLTII_b_CANBusOff_EPT)) || (VeLTII_b_LOC_BPCM_EPT));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeLTIR_b_Lv2ImpendingSkid_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ImpendingSkid_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ImpendingSkid_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_kn);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTIC'
     */
    /* Outport: '<Root>/VeLTIR_e_Lv2KeySts' incorporates:
     *  Chart: '<S3>/Chart1'
     *  Constant: '<S10>/Calib'
     *  DataTypeConversion: '<S8>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/Lv2_KeySts'
     *  Switch: '<S3>/Switch1'
     */
    (void)Rte_Write_VeLTIR_e_Lv2KeySts_Value((TeLTIR_e_KeySts)
        LT_safe_cast_to_TeMMMR_e_KeySts(KaLTIR_e_KeySts_Map
        [(VeLTIC_e_KeySts_Temp)]));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeLTIR_b_Lv2KeySts_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_KeySts_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2KeySts_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ov);

    /* Outport: '<Root>/VeLTIR_b_Lv2LV_BatVlt_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_LV_BatVlt_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2LV_BatVlt_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_k);

    /* Outport: '<Root>/VeLTIR_b_Lv2MCPA_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MCPA_Temp_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MCPA_Temp_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_So_p3u);

    /* Outport: '<Root>/VeLTIR_b_Lv2MCPB_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MCPB_Temp_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MCPB_Temp_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_my);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrAFlt_HV_CntctrOpnRq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_lg);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_InvrtrSts_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrA_InvrtrSts_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_InvrtrSts_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_pw);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_MaxTrq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrA_MaxTrq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_MaxTrq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTIC'
     */
    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S11>/Calib'
     *  DataTypeConversion: '<S164>/DataTypeConversion'
     *  DataTypeConversion: '<S165>/DataTypeConversion'
     */
    if (KeLTIR_b_MtrMdCmnd_Slct)
    {
        tmp = VeLTII_e_MtrA_MdCmnd;
    }
    else
    {
        tmp = VeLTII_e_MtrC_MdCmnd;
    }

    /* Outport: '<Root>/VeLTIR_e_Lv2MtrA_MdCmnd' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrA_MdCmnd'
     *  Switch: '<S3>/Switch'
     */
    (void)Rte_Write_VeLTIR_e_Lv2MtrA_MdCmnd_Value(tmp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_MinTrq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrA_MinTrq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_MinTrq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ge);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrA_Spd_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_Spd_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_cp);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_TrqAchieved_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrA_TrqAchieved_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_TrqAchieved_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_kw);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrA_TrqAchieved_NoAEMD_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_So_izt);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTIC'
     */
    /* Switch: '<S3>/Switch5' incorporates:
     *  Constant: '<S12>/Calib'
     */
    if (KeLTIR_b_MtrTrqCmnd_Slct)
    {
        /* Outport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd' incorporates:
         *  SignalConversion generated from: '<S1>/Lv2_MtrA_TrqCmnd'
         */
        (void)Rte_Write_VeLTIR_M_Lv2MtrA_TrqCmnd_Value(VeLTII_M_MtrA_TrqCmnd);
    }
    else
    {
        /* Outport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd' incorporates:
         *  SignalConversion generated from: '<S1>/Lv2_MtrA_TrqCmnd'
         */
        (void)Rte_Write_VeLTIR_M_Lv2MtrA_TrqCmnd_Value(VeLTII_M_MtrC_TrqCmnd);
    }

    /* End of Switch: '<S3>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrBFlt_HV_CntctrOpnRq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_iv);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_InvrtrSts_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrB_InvrtrSts_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_InvrtrSts_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_mu);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_MaxTrq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrB_MaxTrq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_MaxTrq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_i);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_MinTrq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrB_MinTrq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_MinTrq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_m5);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrB_Spd_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_Spd_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_hl);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_TrqAchieved_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrB_TrqAchieved_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_TrqAchieved_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_di);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrB_TrqAchieved_NoAEMD_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_mo);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_MtrCFlt_HV_CntctrOpnRq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_So_cps);

    /* Outport: '<Root>/VeLTIR_b_OPDHoldStatusFA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_OPDHoldStatusFA'
     */
    (void)Rte_Write_VeLTIR_b_OPDHoldStatusFA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2PRNDDispFailSts' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_PRNDDispFailSts'
     */
    (void)Rte_Write_VeLTIR_b_Lv2PRNDDispFailSts_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_e0);

    /* Outport: '<Root>/VeLTIR_b_Lv2PRNDFailSts' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_PRNDFailSts'
     */
    (void)Rte_Write_VeLTIR_b_Lv2PRNDFailSts_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_bw);

    /* Outport: '<Root>/VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ParkingGearShiftReq_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_md);

    /* Outport: '<Root>/VeLTIR_b_Lv2ProxStat_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_ProxStat_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ProxStat_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_cl);

    /* Outport: '<Root>/VeLTIR_b_Lv2RgnBrkAxTrqReq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RgnBrkAxTrqReq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RgnBrkAxTrqReq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_h3);

    /* Outport: '<Root>/VeLTIR_b_Lv2RmtStrtActv_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RmtStrtActv_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RmtStrtActv_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_pl);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMaxRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RrAxlMaxRqCANC2_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMaxRqCANC2_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_p1);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMaxRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RrAxlMaxRq_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMaxRq_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_b0);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMinRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RrAxlMinRqCANC2_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMinRqCANC2_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ib);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMinRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RrAxlMinRq_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMinRq_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_l3);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RrAxlRqCANC2_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_by);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_RrAxlRq_BSM_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlRq_BSM_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_jo);

    /* Outport: '<Root>/VeLTIR_b_Lv2SCCM_CRS_CTRL_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_SCCM_CRS_CTRL_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SCCM_CRS_CTRL_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_hy);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTIC'
     */
    /* Switch: '<S3>/Switch4' incorporates:
     *  Constant: '<S9>/Calib'
     */
    if (HeLTIR_b_SpeedUnitSwitchEnbl)
    {
        /* Outport: '<Root>/VeLTIR_b_Lv2SpeedUnit' incorporates:
         *  SignalConversion generated from: '<S1>/Lv2_SpeedUnit'
         */
        (void)Rte_Write_VeLTIR_b_Lv2SpeedUnit_Value(VeLTIC_b_SpeedUnitSwapped);
    }
    else
    {
        /* Outport: '<Root>/VeLTIR_b_Lv2SpeedUnit' incorporates:
         *  SignalConversion generated from: '<S1>/Lv2_SpeedUnit'
         */
        (void)Rte_Write_VeLTIR_b_Lv2SpeedUnit_Value(VeLTII_b_SpeedUnit);
    }

    /* End of Switch: '<S3>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeLTIR_b_Lv2SpeedUnit_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_SpeedUnit_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SpeedUnit_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_p3);

    /* Outport: '<Root>/VeLTIR_b_Lv2SumFWIDFst_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_SumFWIDFst_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SumFWIDFst_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_kr);

    /* Outport: '<Root>/VeLTIR_b_Lv2SumFWIDSlw_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_SumFWIDSlw_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SumFWIDSlw_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_pa);

    /* Outport: '<Root>/VeLTIR_b_Lv2Trns_DrvMdReq_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_Trns_DrvMdReq_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2Trns_DrvMdReq_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_cs);

    /* Outport: '<Root>/VeLTIR_b_Lv2VehSpdCANC2_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_VehSpdCANC2_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2VehSpdCANC2_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ow);

    /* Outport: '<Root>/VeLTIR_b_Lv2VehSpdCANC_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_VehSpdCANC_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2VehSpdCANC_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ao);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirFL_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlDirFL_Stat_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirFL_Stat_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_co);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirFR_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlDirFR_Stat_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirFR_Stat_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_n);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirRL_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlDirRL_Stat_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirRL_Stat_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_jf);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirRR_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlDirRR_Stat_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirRR_Stat_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_pc);

    /* Outport: '<Root>/VeLTIR_n_Lv2WhlFL_RPS' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlFL_RPS'
     */
    (void)Rte_Write_VeLTIR_n_Lv2WhlFL_RPS_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Source);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFL_RPS_Flt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlFL_RPS_Flt'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFL_RPS_Flt_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_ok);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFL_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlFL_Spd_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFL_Spd_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_nr);

    /* Outport: '<Root>/VeLTIR_n_Lv2WhlFR_RPS' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlFR_RPS'
     */
    (void)Rte_Write_VeLTIR_n_Lv2WhlFR_RPS_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sour_g);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFR_RPS_Flt' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlFR_RPS_Flt'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFR_RPS_Flt_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_fd);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFR_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlFR_Spd_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFR_Spd_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_p5);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlRL_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlRL_Spd_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlRL_Spd_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_dx);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlRR_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlRR_Spd_FA'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlRR_Spd_FA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_lq);

    /* Outport: '<Root>/VeLTIR_b_WhlTrqFrntAxReq_ESCFA' incorporates:
     *  SignalConversion generated from: '<S1>/Lv2_WhlTrqFrntAxReq_ESCFA'
     */
    (void)Rte_Write_VeLTIR_b_WhlTrqFrntAxReq_ESCFA_Value
        (LTIR_ac_B.VariantMerge_For_Variant_Sou_gb);

    /* Outputs for Atomic SubSystem: '<S1>/LTIR_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S6>/LTIR_FastTEF_StopCheckpoint' */
    Rte_Call_LTIR_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/LTIR_FastTEF_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, LTIR_CODE) LTIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/LTIR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S167>/VeLTIR_e_Lv2KeySts_Out_Init' incorporates:
     *  Constant: '<S169>/Constant'
     */
    LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Key = LTIR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2KeySts_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Key = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrA_Spd_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Mtr = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2VehSpdCANC_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Veh = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2VehSpdCANC2_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2V_l = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrB_Spd_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_f = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2LV_BatVlt_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2LV_ = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatSOC_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2HV_ = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatModTempMin_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_m = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatCrnt_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_e = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatVlt_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_l = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Drv = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkTravelSts_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Brk = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_OPDHoldStatusFA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_OPDHol = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RgnBrkAxTrqReq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Rgn = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_ESCInterventionMSGFA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_ESCInt = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_WhlTrqFrntAxReq_ESCFA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_WhlTrq = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_CmndTotBrkFricTorqFA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_CmndTo = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_DrvrIntndTotBrkTrqFA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_DrvrIn = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_DriveStyleStsFA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_DriveS = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_AeCoastReadyFA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_AeCoas = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkPdlStat_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_l = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ACC_WhlTrq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ACC = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlFL_Spd_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Whl = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlRL_Spd_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_o = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlFR_Spd_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_g = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlRR_Spd_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_oe = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2SpeedUnit_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Spe = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2SCCM_CRS_CTRL_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2SCC = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2D_l = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkTrq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_h = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkTrqDriver_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_b = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkMaxRgnReady_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_i = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlDirFL_Stat_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_f = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlDirRL_Stat_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_m = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlDirFR_Stat_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_h = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlDirRR_Stat_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_k = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2EPB_HoldSts_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2EPB = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_c = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2APM_HVBatVlt_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2APM = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatModTempMax_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_em = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatCntctrStat_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_o = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrA_TrqAchieved_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_p = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrB_TrqAchieved_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_l = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MCPA_Temp_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2MCP = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MCPB_Temp_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_lp = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrB_InvrtrSts_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_g = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkBoostPressure_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_m = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ESC_Active_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ESC = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ESC_FailSts_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2E_n = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RmtStrtActv_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Rmt = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2APM_CtrlStsFbk_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_a = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2APM_FailureReason_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_k = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2APM_FailureType_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_e = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatCntctrOpn_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_h = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ACC_Engaged_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_l = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ACC_SystemSts_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ep = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkTravelStsCANC2_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_iq = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrA_MaxTrq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_d = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrA_MinTrq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_o = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrB_MaxTrq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_m = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrB_MinTrq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_n = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2HV_BatCntctrReq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_d = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ProxStat_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Pro = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ASR_MSRActv_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ASR = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_e_Lv2MtrA_MdCmnd_Out_Init' incorporates:
     *  Constant: '<S168>/Constant'
     */
    LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Mtr = LTIR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S167>/VeLTIR_M_Lv2MtrA_TrqCmnd_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_M_Lv2Mtr = 0.0F;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2SpeedUnit_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2S_n = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Glo = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2Trns_DrvMdReq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Trn = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2GlobDrvMdRq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2G_b = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2FrntAxlRq_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Frn = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RrAxlRq_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2RrA = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ESS_EngStateEE_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ESS = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_f = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2F_f = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_l = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2AHH_Ready_Status_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2AHH = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ImpendingSkid_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Imp = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrA_InvrtrSts_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_b = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2EngineSpeed_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Eng = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_Pct_Lv2BrkTravelSts_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_Pct_Lv2B = 0.0F;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkTravelStsFlt_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_e = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_M_Lv2BrkTrq_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_M_Lv2Brk = 0.0F;

    /* SignalConversion generated from: '<S167>/VeLTIR_M_Lv2BrkTrqDriver_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_M_Lv2B_b = 0.0F;

    /* SignalConversion generated from: '<S167>/VeLTIR_p_Lv2BrakeBoostPressure_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_p_Lv2Bra = 0.0F;

    /* SignalConversion generated from: '<S167>/VeLTIR_e_Lv2BrkPdlStat_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Brk = 0U;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkTrqFlt_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_j = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkTrqDriverFlt_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ln = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrakeBoostPressureFlt_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Bra = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2BrkPdlStatFlt_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ea = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2PRNDFailSts_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2PRN = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2PRNDDispFailSts_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2P_a = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_n_Lv2WhlFL_RPS_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_n_Lv2Whl = 0.0F;

    /* SignalConversion generated from: '<S167>/VeLTIR_n_Lv2WhlFR_RPS_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_n_Lv2W_o = 0.0F;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlFL_RPS_Flt_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ho = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2WhlFR_RPS_Flt_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_h5 = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2FrntAxlMaxRq_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2F_h = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2FrntAxlMinRq_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_fv = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RrAxlMaxRq_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_j = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RrAxlMinRq_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_g = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2F_p = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2FrntAxlMinRqCANC2_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_hu = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RrAxlMaxRqCANC2_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_g3 = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2RrAxlMinRqCANC2_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_o = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_nt = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_f4 = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_c = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_cn = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Par = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_no = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2EngActStdyStTorq_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2E_i = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2EVRDesVSetP_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2EVR = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2SumFWIDFst_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Sum = false;

    /* SignalConversion generated from: '<S167>/VeLTIR_b_Lv2SumFWIDSlw_FA_Out_Init' */
    LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2S_b = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeLTIR_M_Lv2BrkTrqDriver' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_M_Lv2BrkTrqDriver_Out_Init'
     */
    (void)Rte_Write_VeLTIR_M_Lv2BrkTrqDriver_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_M_Lv2B_b);

    /* Outport: '<Root>/VeLTIR_M_Lv2BrkTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_M_Lv2BrkTrq_Out_Init'
     */
    (void)Rte_Write_VeLTIR_M_Lv2BrkTrq_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_M_Lv2Brk);

    /* Outport: '<Root>/VeLTIR_M_Lv2MtrA_TrqCmnd' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_M_Lv2MtrA_TrqCmnd_Out_Init'
     */
    (void)Rte_Write_VeLTIR_M_Lv2MtrA_TrqCmnd_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_M_Lv2Mtr);

    /* Outport: '<Root>/VeLTIR_Pct_Lv2BrkTravelSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_Pct_Lv2BrkTravelSts_Out_Init'
     */
    (void)Rte_Write_VeLTIR_Pct_Lv2BrkTravelSts_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_Pct_Lv2B);

    /* Outport: '<Root>/VeLTIR_b_AeCoastReadyFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_AeCoastReadyFA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_AeCoastReadyFA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_AeCoas);

    /* Outport: '<Root>/VeLTIR_b_CmndTotBrkFricTorqFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_CmndTotBrkFricTorqFA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_CmndTotBrkFricTorqFA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_CmndTo);

    /* Outport: '<Root>/VeLTIR_b_DriveStyleStsFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_DriveStyleStsFA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_DriveStyleStsFA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_DriveS);

    /* Outport: '<Root>/VeLTIR_b_DrvrIntndTotBrkTrqFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_DrvrIntndTotBrkTrqFA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_DrvrIntndTotBrkTrqFA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_DrvrIn);

    /* Outport: '<Root>/VeLTIR_b_ESCInterventionMSGFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_ESCInterventionMSGFA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_ESCInterventionMSGFA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_ESCInt);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_Engaged_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ACC_Engaged_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_Engaged_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_SystemSts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ACC_SystemSts_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_SystemSts_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ep);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_WhlTrqEnbld_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_c);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_WhlTrq_ADAS_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_f);

    /* Outport: '<Root>/VeLTIR_b_Lv2ACC_WhlTrq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ACC_WhlTrq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ACC_WhlTrq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ACC);

    /* Outport: '<Root>/VeLTIR_b_Lv2AHH_Ready_Status_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2AHH_Ready_Status_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2AHH_Ready_Status_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2AHH);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_CtrlStsFbk_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2APM_CtrlStsFbk_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_CtrlStsFbk_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_a);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_FailureReason_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2APM_FailureReason_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_FailureReason_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_k);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_FailureType_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2APM_FailureType_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_FailureType_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2A_e);

    /* Outport: '<Root>/VeLTIR_b_Lv2APM_HVBatVlt_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2APM_HVBatVlt_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2APM_HVBatVlt_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2APM);

    /* Outport: '<Root>/VeLTIR_b_Lv2ASR_MSRActv_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ASR_MSRActv_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ASR_MSRActv_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ASR);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrakeBoostPressureFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrakeBoostPressureFlt_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrakeBoostPressureFlt_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Bra);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkBoostPressure_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkBoostPressure_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkBoostPressure_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_m);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkMaxRgnReady_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkMaxRgnReady_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkMaxRgnReady_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_i);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkPdlStatFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkPdlStatFlt_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkPdlStatFlt_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ea);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkPdlStat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkPdlStat_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkPdlStat_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTravelStsCANC2_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkTravelStsCANC2_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTravelStsCANC2_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_iq);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTravelStsFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkTravelStsFlt_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTravelStsFlt_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_e);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTravelSts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkTravelSts_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTravelSts_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Brk);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrqDriverFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkTrqDriverFlt_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrqDriverFlt_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ln);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrqDriver_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkTrqDriver_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrqDriver_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_b);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrqFlt' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkTrqFlt_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrqFlt_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_j);

    /* Outport: '<Root>/VeLTIR_b_Lv2BrkTrq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2BrkTrq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2BrkTrq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2B_h);

    /* Outport: '<Root>/VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2DrvRqShftROT_Prmry_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2D_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2DrvRqShftROT_Scndry_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Drv);

    /* Outport: '<Root>/VeLTIR_b_Lv2EPB_HoldSts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2EPB_HoldSts_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EPB_HoldSts_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2EPB);

    /* Outport: '<Root>/VeLTIR_b_Lv2ESC_Active_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ESC_Active_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ESC_Active_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ESC);

    /* Outport: '<Root>/VeLTIR_b_Lv2ESC_FailSts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ESC_FailSts_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ESC_FailSts_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2E_n);

    /* Outport: '<Root>/VeLTIR_b_Lv2ESS_EngStateEE_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ESS_EngStateEE_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ESS_EngStateEE_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2ESS);

    /* Outport: '<Root>/VeLTIR_b_Lv2EVRDesVSetP_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2EVRDesVSetP_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EVRDesVSetP_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2EVR);

    /* Outport: '<Root>/VeLTIR_b_Lv2EngActStdyStTorq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2EngActStdyStTorq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EngActStdyStTorq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2E_i);

    /* Outport: '<Root>/VeLTIR_b_Lv2EngineSpeed_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2EngineSpeed_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2EngineSpeed_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Eng);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMaxRqCANC2_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2F_p);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMaxRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2FrntAxlMaxRq_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMaxRq_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2F_h);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMinRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2FrntAxlMinRqCANC2_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMinRqCANC2_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_hu);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlMinRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2FrntAxlMinRq_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlMinRq_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_fv);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlRqCANC2_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2F_f);

    /* Outport: '<Root>/VeLTIR_b_Lv2FrntAxlRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2FrntAxlRq_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2FrntAxlRq_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Frn);

    /* Outport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2GlobDrvMdRq_BCM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Glo);

    /* Outport: '<Root>/VeLTIR_b_Lv2GlobDrvMdRq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2GlobDrvMdRq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2GlobDrvMdRq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2G_b);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCntctrOpn_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatCntctrOpn_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCntctrOpn_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_h);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCntctrReq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatCntctrReq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCntctrReq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_d);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCntctrStat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatCntctrStat_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCntctrStat_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_o);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatCrnt_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatCrnt_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatCrnt_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_e);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatModTempMax_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatModTempMax_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatModTempMax_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_em);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatModTempMin_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatModTempMin_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatModTempMin_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_m);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatSOC_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatSOC_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatSOC_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2HV_);

    /* Outport: '<Root>/VeLTIR_b_Lv2HV_BatVlt_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2HV_BatVlt_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2HV_BatVlt_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2H_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2ImpendingSkid_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ImpendingSkid_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ImpendingSkid_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Imp);

    /* Outport: '<Root>/VeLTIR_b_Lv2KeySts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2KeySts_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2KeySts_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Key);

    /* Outport: '<Root>/VeLTIR_b_Lv2LV_BatVlt_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2LV_BatVlt_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2LV_BatVlt_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2LV_);

    /* Outport: '<Root>/VeLTIR_b_Lv2MCPA_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MCPA_Temp_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MCPA_Temp_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2MCP);

    /* Outport: '<Root>/VeLTIR_b_Lv2MCPB_Temp_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MCPB_Temp_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MCPB_Temp_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_lp);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrAFlt_HV_CntctrOpnRq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_nt);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_InvrtrSts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrA_InvrtrSts_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_InvrtrSts_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_b);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_MaxTrq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrA_MaxTrq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_MaxTrq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_d);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_MinTrq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrA_MinTrq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_MinTrq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_o);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrA_Spd_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_Spd_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Mtr);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_TrqAchieved_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrA_TrqAchieved_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_TrqAchieved_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_p);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrA_TrqAchieved_NoAEMD_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_cn);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrBFlt_HV_CntctrOpnRq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_f4);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_InvrtrSts_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrB_InvrtrSts_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_InvrtrSts_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_g);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_MaxTrq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrB_MaxTrq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_MaxTrq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_m);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_MinTrq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrB_MinTrq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_MinTrq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_n);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrB_Spd_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_Spd_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_f);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_TrqAchieved_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrB_TrqAchieved_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_TrqAchieved_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrB_TrqAchieved_NoAEMD_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2M_c);

    /* Outport: '<Root>/VeLTIR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2MtrCFlt_HV_CntctrOpnRq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_no);

    /* Outport: '<Root>/VeLTIR_b_Lv2PRNDDispFailSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2PRNDDispFailSts_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2PRNDDispFailSts_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2P_a);

    /* Outport: '<Root>/VeLTIR_b_Lv2PRNDFailSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2PRNDFailSts_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2PRNDFailSts_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2PRN);

    /* Outport: '<Root>/VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ParkingGearShiftReq_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Par);

    /* Outport: '<Root>/VeLTIR_b_Lv2ProxStat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2ProxStat_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2ProxStat_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Pro);

    /* Outport: '<Root>/VeLTIR_b_Lv2RgnBrkAxTrqReq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RgnBrkAxTrqReq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RgnBrkAxTrqReq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Rgn);

    /* Outport: '<Root>/VeLTIR_b_Lv2RmtStrtActv_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RmtStrtActv_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RmtStrtActv_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Rmt);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMaxRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RrAxlMaxRqCANC2_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMaxRqCANC2_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_g3);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMaxRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RrAxlMaxRq_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMaxRq_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_j);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMinRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RrAxlMinRqCANC2_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMinRqCANC2_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_o);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlMinRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RrAxlMinRq_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlMinRq_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_g);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlRqCANC2_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2R_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2RrAxlRq_BSM_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2RrAxlRq_BSM_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2RrAxlRq_BSM_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2RrA);

    /* Outport: '<Root>/VeLTIR_b_Lv2SCCM_CRS_CTRL_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2SCCM_CRS_CTRL_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SCCM_CRS_CTRL_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2SCC);

    /* Outport: '<Root>/VeLTIR_b_Lv2SpeedUnit_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2SpeedUnit_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SpeedUnit_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2S_n);

    /* Outport: '<Root>/VeLTIR_b_Lv2SpeedUnit' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2SpeedUnit_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SpeedUnit_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Spe);

    /* Outport: '<Root>/VeLTIR_b_Lv2SumFWIDFst_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2SumFWIDFst_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SumFWIDFst_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Sum);

    /* Outport: '<Root>/VeLTIR_b_Lv2SumFWIDSlw_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2SumFWIDSlw_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2SumFWIDSlw_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2S_b);

    /* Outport: '<Root>/VeLTIR_b_Lv2Trns_DrvMdReq_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2Trns_DrvMdReq_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2Trns_DrvMdReq_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Trn);

    /* Outport: '<Root>/VeLTIR_b_Lv2VehSpdCANC2_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2VehSpdCANC2_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2VehSpdCANC2_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2V_l);

    /* Outport: '<Root>/VeLTIR_b_Lv2VehSpdCANC_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2VehSpdCANC_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2VehSpdCANC_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Veh);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirFL_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlDirFL_Stat_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirFL_Stat_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_f);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirFR_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlDirFR_Stat_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirFR_Stat_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_h);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirRL_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlDirRL_Stat_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirRL_Stat_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_m);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlDirRR_Stat_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlDirRR_Stat_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlDirRR_Stat_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_k);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFL_RPS_Flt' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlFL_RPS_Flt_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFL_RPS_Flt_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_ho);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFL_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlFL_Spd_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFL_Spd_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2Whl);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFR_RPS_Flt' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlFR_RPS_Flt_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFR_RPS_Flt_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_h5);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlFR_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlFR_Spd_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlFR_Spd_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_g);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlRL_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlRL_Spd_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlRL_Spd_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2W_o);

    /* Outport: '<Root>/VeLTIR_b_Lv2WhlRR_Spd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_Lv2WhlRR_Spd_FA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_Lv2WhlRR_Spd_FA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_Lv2_oe);

    /* Outport: '<Root>/VeLTIR_b_OPDHoldStatusFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_OPDHoldStatusFA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_OPDHoldStatusFA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_OPDHol);

    /* Outport: '<Root>/VeLTIR_b_WhlTrqFrntAxReq_ESCFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_b_WhlTrqFrntAxReq_ESCFA_Out_Init'
     */
    (void)Rte_Write_VeLTIR_b_WhlTrqFrntAxReq_ESCFA_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_b_WhlTrq);

    /* Outport: '<Root>/VeLTIR_e_Lv2BrkPdlStat' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_e_Lv2BrkPdlStat_Out_Init'
     */
    (void)Rte_Write_VeLTIR_e_Lv2BrkPdlStat_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Brk);

    /* Outport: '<Root>/VeLTIR_e_Lv2KeySts' incorporates:
     *  SignalConversion generated from: '<S167>/VeLTIR_e_Lv2KeySts_Out_Init'
     *  SignalConversion generated from: '<S2>/VeLTIR_e_Lv2KeySts_Out_Init'
     */
    (void)Rte_Write_VeLTIR_e_Lv2KeySts_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Key);

    /* Outport: '<Root>/VeLTIR_e_Lv2MtrA_MdCmnd' incorporates:
     *  SignalConversion generated from: '<S167>/VeLTIR_e_Lv2MtrA_MdCmnd_Out_Init'
     *  SignalConversion generated from: '<S2>/VeLTIR_e_Lv2MtrA_MdCmnd_Out_Init'
     */
    (void)Rte_Write_VeLTIR_e_Lv2MtrA_MdCmnd_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Mtr);

    /* Outport: '<Root>/VeLTIR_n_Lv2WhlFL_RPS' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_n_Lv2WhlFL_RPS_Out_Init'
     */
    (void)Rte_Write_VeLTIR_n_Lv2WhlFL_RPS_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_n_Lv2Whl);

    /* Outport: '<Root>/VeLTIR_n_Lv2WhlFR_RPS' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_n_Lv2WhlFR_RPS_Out_Init'
     */
    (void)Rte_Write_VeLTIR_n_Lv2WhlFR_RPS_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_n_Lv2W_o);

    /* Outport: '<Root>/VeLTIR_p_Lv2BrakeBoostPressure' incorporates:
     *  SignalConversion generated from: '<S2>/VeLTIR_p_Lv2BrakeBoostPressure_Out_Init'
     */
    (void)Rte_Write_VeLTIR_p_Lv2BrakeBoostPressure_Value
        (LTIR_ac_B.OutportBufferForVeLTIR_p_Lv2Bra);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, LTIR_CODE) LTIR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Key = CeLTIR_e_IGN_LK;
    }

    /* custom signals */
    VeLTIC_e_KeySts_Temp = CeLTIR_e_IGN_LK;
    VeLTII_e_KeySts = CeLTIR_e_IGN_LK;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/LTIR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S167>/VeLTIR_e_Lv2KeySts_Out_Init' incorporates:
     *  Constant: '<S169>/Constant'
     */
    LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Key = LTIR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S167>/VeLTIR_e_Lv2MtrA_MdCmnd_Out_Init' incorporates:
     *  Constant: '<S168>/Constant'
     */
    LTIR_ac_B.OutportBufferForVeLTIR_e_Lv2Mtr = LTIR_ac_ConstB.Constant_d;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/LTIR_FastTEF'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/LTII'
     */
    /* SystemInitialize for DataTypeConversion: '<S166>/DataTypeConversion' incorporates:
     *  Outport: '<S4>/VeLTII_e_KeySts'
     */
    VeLTII_e_KeySts = CeLTIR_e_IGN_LK;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* SystemInitialize for Outport: '<Root>/VeLTIR_e_Lv2KeySts' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeLTIR_e_Lv2KeySts_Value(CeLTIR_e_IGN_LK);

    /* SystemInitialize for Outport: '<Root>/VeLTIR_e_Lv2MtrA_MdCmnd' incorporates:
     *  Merge: '<Root>/Merge37'
     */
    (void)Rte_Write_VeLTIR_e_Lv2MtrA_MdCmnd_Value(CeHTDR_e_DsblNoSwitch);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
