/*
 * File: HVTR_ac.c
 *
 * Code generated for Simulink model 'HVTR_ac'.
 *
 * Model version                  : 9.354
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:58:12 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HVTR_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HVTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, HVTR_VAR_INIT) HeHVTR_t_dT = 0.01F;/* Referenced by: '<S549>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_APM2_HVILStsFAOvrd = 0U;/* Referenced by: '<S471>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_APM2_HVILStsOvrd = 0U;/* Referenced by: '<S472>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_APM3_HVILStsFAOvrd = 0U;/* Referenced by: '<S473>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_APM3_HVILStsOvrd = 0U;/* Referenced by: '<S474>/Calib' */

#if !Rte_SysCon_Variant_HVTR_AntiTemp

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_AntiTampCntr_Default =
    0U;                                /* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_AntiTamp_MinAutoStops =
    0U;                                /* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static volatile CONST(float32, HVTR_VAR_INIT)
    KeHVTR_Cnt_AntiTamp_NbrAhFailWindows = 3.0F;/* Referenced by: '<S450>/Calib' */

#endif

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_BatInrlk_HIVLStsFAOvrd =
    0U;                                /* Referenced by: '<S475>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_ECH_HVILStsFAOvrd = 0U;/* Referenced by: '<S476>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_ECH_HVILStsOvrd = 0U;/* Referenced by: '<S477>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_FCDCDC_HVILStsFAOvrd =
    0U;                                /* Referenced by: '<S478>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_FCDCDC_HVILStsOvrd = 0U;/* Referenced by: '<S479>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HEAC_HVILStsFAOvrd = 0U;/* Referenced by: '<S480>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HEAC_HVILStsOvrd = 0U;/* Referenced by: '<S481>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HVILIntrnlStatFAOvrd =
    0U;                                /* Referenced by: '<S482>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HVILIntrnlStatOvrd = 0U;/* Referenced by: '<S483>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HVILPwrupDelay = 1U;/* Referenced by:
                                                                      * '<S197>/Calib'
                                                                      * '<S229>/Calib'
                                                                      * '<S256>/Calib'
                                                                      * '<S277>/Calib'
                                                                      * '<S298>/Calib'
                                                                      * '<S318>/Calib'
                                                                      * '<S338>/Calib'
                                                                      * '<S358>/Calib'
                                                                      * '<S378>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HVIL_PassDebounce = 5U;/* Referenced by: '<S416>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HVIL_StatDly = 19200U;/* Referenced by: '<S417>/Calib' */

#endif

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_HVIntrlkStatOvrdEnbl =
    0U;                                /* Referenced by: '<S484>/Calib' */
static volatile CONST(sint16, HVTR_VAR_INIT) KeHVTR_Cnt_HV_BatIntrlkStatDebounce
    = 16;                              /* Referenced by: '<S485>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT)
    KeHVTR_Cnt_InvrtrA_HVIL_FailedOvrdEnbl = 0U;/* Referenced by: '<S486>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT)
    KeHVTR_Cnt_InvrtrB_HVIL_FailedOvrdEnbl = 0U;/* Referenced by: '<S487>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT)
    KeHVTR_Cnt_InvrtrC_HVIL_FailedOvrdEnbl = 0U;/* Referenced by: '<S488>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_MCPA_HVILStsFAOvrd = 0U;/* Referenced by: '<S489>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_MCPA_HVILStsOvrd = 0U;/* Referenced by: '<S490>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_MCPB_HVILStsFAOvrd = 0U;/* Referenced by: '<S491>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_MCPB_HVILStsOvrd = 0U;/* Referenced by: '<S492>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_MCPC_HVILStsFAOvrd = 0U;/* Referenced by: '<S493>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_MCPC_HVILStsOvrd = 0U;/* Referenced by: '<S494>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_OBCM_HVILStsFAOvrd = 0U;/* Referenced by: '<S495>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_OBCM_HVILStsOvrd = 0U;/* Referenced by: '<S496>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_V2X_HVILStsFAOvrd = 0U;/* Referenced by: '<S497>/Calib' */
static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_V2X_HVILStsOvrd = 0U;/* Referenced by: '<S498>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(uint16, HVTR_VAR_INIT) KeHVTR_Cnt_WaitTimeToStartCharging =
    40U;                               /* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_I_AntiTamp_MaxCurrDelta =
    10.0F;                             /* Referenced by: '<S451>/Calib' */

#endif

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_I_ChargingCurrentCal = 0.0F;/* Referenced by: '<S44>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_I_Htr2_CrntOvrdVal = 0.0F;/* Referenced by: '<S499>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_I_Htr4_CrntOvrdVal = 0.0F;/* Referenced by: '<S500>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_I_MaxIDCR_Current = 20.0F;/* Referenced by: '<S501>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_I_MinIDCR_Current = 0.0F;/* Referenced by: '<S502>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_P_AC_CompElecPwr_W_Dial =
    0.0F;                              /* Referenced by: '<S503>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_P_HVC_HtrPwrAct_W_Dial =
    0.0F;                              /* Referenced by: '<S504>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_P_Htr2_PwrOvrdVal = 0.0F;/* Referenced by: '<S505>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_P_Htr3_PwrOvrdVal = 0.0F;/* Referenced by: '<S506>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_P_Htr4_PwrOvrdVal = 0.0F;/* Referenced by: '<S507>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_P_SDS_HV_PwrOvrdVal = 0.0F;/* Referenced by: '<S508>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT)
    KeHVTR_U_MaxModuleDefaultOffsetVoltage = 0.0F;/* Referenced by: '<S110>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_U_MaxVolt_SrvcProc1320 =
    200.0F;                            /* Referenced by: '<S168>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT)
    KeHVTR_U_MinModuleDefaultOffsetVoltage = 0.0F;/* Referenced by: '<S111>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_AC_CompElecPwr_SelDial =
    1;                                 /* Referenced by: '<S509>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_APM2_HVILStsFA = 0;/* Referenced by: '<S510>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_APM3_HVILStsFA = 0;/* Referenced by: '<S511>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_APMHVValidOvrd = 0;/* Referenced by: '<S512>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_APMHVValidOvrdEnb = 0;/* Referenced by: '<S513>/Calib' */

#if Rte_SysCon_Variant_HVTR_AntiTemp

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_AntiTamp_ResetCounter = 0;/* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_AntiTamp_UsePrev = 0;/* Referenced by: '<S453>/Calib' */

#endif

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_BSG_OnBoard_PwrPanl_Enbl =
    0;                                 /* Referenced by: '<S45>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_BatInrlk_HVILStsFA = 0;/* Referenced by: '<S514>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_ChargeTypeOvrd = 0;/* Referenced by: '<S515>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_DevCalUseHVBatV = 0;/* Referenced by: '<S150>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_DsablAPMHV_Varb = 0;/* Referenced by: '<S152>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Dsabl_HVAC = 0;/* Referenced by: '<S153>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Dsabl_HVBatt = 0;/* Referenced by: '<S154>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_DsblMtrAV = 0;/* Referenced by:
                                                                      * '<S77>/Calib'
                                                                      * '<S155>/Calib'
                                                                      */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_DsblMtrBV = 0;/* Referenced by: '<S156>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_5

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Dsbl_PPIMHVIL = 1;/* Referenced by: '<S278>/Calib' */

#endif

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_ECH_HVILStsFA = 0;/* Referenced by: '<S516>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_FCDCDC_HVILStsFA = 0;/* Referenced by: '<S517>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_HEAC_HVILStsFA = 0;/* Referenced by: '<S518>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_0

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_HVBatSrvcDisCnctFA = 0;/* Referenced by: '<S393>/Calib' */

#endif

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_HVC_HtrPwrAct_SelDial = 1;/* Referenced by: '<S519>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_3

static volatile CONST(boolean, HVTR_VAR_INIT)
    KeHVTR_b_HVILIntrlkIntrnlStatFAEnbl = 0;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_3

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_HVILIntrlkStatFAEnbl = 0;/* Referenced by: '<S231>/Calib' */

#endif

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_HVILIntrnlStatFAOvrdVal =
    0;                                 /* Referenced by: '<S520>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_HVIL_PassLatchEnbl = 1;/* Referenced by: '<S419>/Calib' */

#endif

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Htr2_CrntOvrd = 0;/* Referenced by: '<S521>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Htr2_PwrOvrd = 0;/* Referenced by: '<S522>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Htr3_PwrOvrd = 0;/* Referenced by: '<S523>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Htr4_CrntOvrd = 0;/* Referenced by: '<S524>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Htr4_PwrOvrd = 0;/* Referenced by: '<S525>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_IDCM_V2X_Enbl = 0;/* Referenced by: '<S46>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_IncludeSDSCurrent = 0;/* Referenced by: '<S47>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_3

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Internl_HVIL_NA = 1;/* Referenced by: '<S232>/Calib' */

#endif

static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_InvrtrA_HVIL_FailedOvrd =
    0;                                 /* Referenced by: '<S526>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_InvrtrB_HVIL_FailedOvrd =
    0;                                 /* Referenced by: '<S527>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_InvrtrC_HVIL_FailedOvrd =
    0;                                 /* Referenced by: '<S528>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_MCPA_HVILStsFA = 0;/* Referenced by: '<S529>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_MCPB_HVILStsFA = 0;/* Referenced by: '<S530>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_MCPC_Enbl = 1;/* Referenced by: '<S157>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_MCPC_HVILStsFA = 0;/* Referenced by: '<S531>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_ManualSrvcProc_Enbl = 1;/* Referenced by: '<S160>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_OBCM_HVILStsFA = 0;/* Referenced by: '<S532>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_OpnReq_SrvcProc1320Ovrd =
    0;                                 /* Referenced by: '<S176>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_OpnReq_SrvcProc1320Val =
    0;                                 /* Referenced by: '<S177>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_PPIM_PwrPanl_Enbl = 1;/* Referenced by: '<S48>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_SDS_HV_PwrOvrd = 0;/* Referenced by: '<S533>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_SwtchBatt_Enbl = 0;/* Referenced by:
                                                                      * '<S49>/Calib'
                                                                      * '<S78>/Calib'
                                                                      * '<S100>/Calib'
                                                                      * '<S112>/Calib'
                                                                      */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_UseACCompCurr = 1;/* Referenced by: '<S79>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_UseBatVolt = 1;/* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_UseCalcCurr = 0;/* Referenced by: '<S85>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_UseIDCRCurr = 1;/* Referenced by: '<S80>/Calib' */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_Use_BpcmHvInternalVoltage
    = 0;                               /* Referenced by:
                                        * '<S101>/Calib'
                                        * '<S113>/Calib'
                                        */
static volatile CONST(boolean, HVTR_VAR_INIT) KeHVTR_b_V2X_HVILStsFA = 0;/* Referenced by: '<S534>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_APM2_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S535>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_APM3_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S536>/Calib' */
static volatile CONST(TeOBCR_e_ChargeType, HVTR_VAR_INIT)
    KeHVTR_e_ChargeTypeOvrVal = CeOBCR_e_AC;/* Referenced by: '<S537>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_ECH_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S538>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_FCDCDC_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S539>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_HEAC_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S540>/Calib' */
static volatile CONST(TeBPCR_e_HVBatIntrlk_InternalStat, HVTR_VAR_INIT)
    KeHVTR_e_HVILIntrnlStatOvrdVal = CeBPCR_e_HVBatIntrlkPass;/* Referenced by:
                                                               * '<S541>/Calib'
                                                               * '<S394>/Calib'
                                                               */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_HVIntrlkStatOvrd = CeHVTR_e_IntrlkPassed;/* Referenced by:
                                                       * '<S542>/Calib'
                                                       * '<S395>/Calib'
                                                       */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_MCPA_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S543>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_MCPB_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S544>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_MCPC_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S545>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_OBCM_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S546>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    KeHVTR_e_V2X_HVILSts = CeHVTR_e_IntrlkPassed;/* Referenced by: '<S547>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_APMCurrFilt = 0.01F;/* Referenced by: '<S51>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_APMPwrFilt = 0.01F;/* Referenced by: '<S52>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_AccPwrFilt = 0.01F;/* Referenced by: '<S53>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_EACCurrFilt = 0.01F;/* Referenced by: '<S54>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_EACPwrFilt = 0.01F;/* Referenced by: '<S55>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_ECHCurrFilt = 0.01F;/* Referenced by: '<S56>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_ECHPwrFilt = 0.01F;/* Referenced by: '<S57>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_Htr2CurrFilt = 0.01F;/* Referenced by: '<S58>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_Htr2PwrFilt = 0.01F;/* Referenced by: '<S59>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_Htr3CurrFilt = 0.01F;/* Referenced by: '<S60>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_Htr3PwrFilt = 0.01F;/* Referenced by: '<S61>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_Htr4CurrFilt = 0.01F;/* Referenced by: '<S62>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_Htr4PwrFilt = 0.01F;/* Referenced by: '<S63>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_SDSCurrFilt = 0.01F;/* Referenced by: '<S64>/Calib' */
static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_k_SDS_HV_PwrFilt = 0.01F;/* Referenced by: '<S65>/Calib' */

#if Rte_SysCon_Variant_HVTR_AntiTemp

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_q_AntiTamp_MaxAhLost = 1.0F;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_t_DebInvrtrA = 0.1F;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_t_DebInvrtrB = 0.1F;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_t_DebInvrtrC = 0.1F;/* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_t_IntrlkFailedDeb = 37.5F;/* Referenced by:
                                                                      * '<S198>/Calib'
                                                                      * '<S233>/Calib'
                                                                      * '<S257>/Calib'
                                                                      * '<S279>/Calib'
                                                                      * '<S299>/Calib'
                                                                      * '<S319>/Calib'
                                                                      * '<S339>/Calib'
                                                                      * '<S359>/Calib'
                                                                      * '<S379>/Calib'
                                                                      */

#endif

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_t_MSD_ActvDscharging = 3.0F;/* Referenced by: '<S169>/Calib' */

#if Rte_SysCon_Variant_HVTR_HVIL_1

static volatile CONST(float32, HVTR_VAR_INIT) KeHVTR_t_TimeWaitUpdateHVIL = 0.5F;/* Referenced by: '<S423>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HVTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HVTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, HVTR_VAR_INIT) EeHVTR_b_OpnReq_SrvcProc1320;/* '<Root>/DSM_2' */
static VAR(uint16, HVTR_VAR_INIT) EeHVTR_e_StrtCmd_SrvcProc1320;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(uint16, HVTR_VAR_INIT) VeHVTC_Cnt_PluggedIn;/* '<S396>/Switch1' */

#endif

static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_ACCompCurr;/* '<S75>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_AccPwrModCurr;/* '<S74>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_Arbitrated_ChrgCurr;/* '<S43>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_ECHCurr;/* '<S70>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_HV_BatCurrCalc;/* '<S9>/Summation3' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_Htr2_HV_CrntFiltered;/* '<S73>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_Htr3_HV_CrntFiltered;/* '<S76>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_Htr4_HV_CrntFiltered;/* '<S72>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_I_SDS_HV_CrntFiltered;/* '<S30>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_P_ECHPwr;/* '<S34>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_P_Htr2PwrFiltered;/* '<S25>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_P_Htr3PwrFiltered;/* '<S27>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_P_Htr4PwrFiltered;/* '<S26>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_P_SDS_HV_PwrFiltered;/* '<S29>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTC_U_HV_Volt;/* '<S107>/MinMax1' */

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_Charging;/* '<S188>/Comparison12' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_ChargingDetected;/* '<S188>/Logical10' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_HVILWaitTImeExpired;/* '<S188>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_IntrlkFailed_Reset;/* '<S188>/Logical11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_IntrlkStat_Invrtr;/* '<S188>/OR4' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_InvrtARisingDeb;/* '<S429>/AND' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_InvrtBRisingDeb;/* '<S430>/AND' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_InvrtCRisingDeb;/* '<S431>/AND' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_PluggedInRisingEdge;/* '<S397>/AND' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_PluggedIn_TimeInRange;/* '<S188>/Logical12' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(boolean, HVTR_VAR_INIT) VeHVTC_b_TImeInRange;/* '<S188>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(TeBPCR_e_HVBatIntrlk_InternalStat, HVTR_VAR_INIT)
    VeHVTC_e_HVILIntrnlStat;           /* '<S188>/Switch9' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTC_e_HV_IntrlkStatInternal;/* '<S188>/Switch11' */

#endif

static VAR(TeHVTR_e_HVBusVSrc, HVTR_VAR_INIT) VeHVTC_e_VoltSrc;/* '<S129>/Switch7' */
static VAR(TeHVTR_e_HVBusVSrc, HVTR_VAR_INIT) VeHVTC_e_VoltSrc_Arb2;/* '<S128>/Switch7' */

#if Rte_SysCon_Variant_HVTR_HVIL_1

static VAR(float32, HVTR_VAR_INIT) VeHVTC_t_TImeUpdateHVIL;/* '<S426>/Switch1' */

#endif

static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_ACCElecCurr;/* '<S563>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_APM_HV_Current;/* '<S560>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_ChrgCurrent;/* '<S548>/Switch' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_EVSEOutputCurr;/* '<S566>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_HVC_Htr_HV_CrntAct;/* '<S557>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_HV_BatCurr;/* '<S552>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_HV_Current_String2;/* '<S586>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_HV_Htr2_HV_CrntAct;/* '<S7>/Switch3' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_HV_Htr4_HV_CrntAct;/* '<S7>/Switch5' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_MtrA_DC_Crnt;/* '<S554>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_MtrB_DC_Crnt;/* '<S558>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_I_MtrC_DC_Crnt;/* '<S571>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_P_AC_CompElecPwr;/* '<S7>/Switch1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_P_HVC_HtrPwrActual_KW;/* '<S7>/Switch2' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_P_HV_Htr2PwrAct;/* '<S7>/Switch11' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_P_HV_Htr3PwrAct;/* '<S7>/Switch9' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_P_HV_Htr4PwrAct;/* '<S7>/Switch12' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_P_HV_SDS_HV_PwrAvg;/* '<S7>/Abs' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_P_Inverter_PowerDraw;/* '<S577>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_APM_HV_Voltage;/* '<S556>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_BPCM_HV_InternalVoltage;/* '<S594>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_BattSide_Volt;/* '<S574>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_CompHVInp;/* '<S596>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_HV_BatModVoltMax;/* '<S600>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_HV_BatModVoltMin;/* '<S598>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_HV_BatVolt;/* '<S550>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_HV_InternalStringVolt1;/* '<S588>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_HV_InternalStringVolt2;/* '<S589>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_MtrA_DC_Volt;/* '<S562>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_MtrB_DC_Volt;/* '<S580>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_U_MtrC_DC_Volt;/* '<S569>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_AC_CompElecPwr_FA;/* '<S561>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_APM2InterlockSts_FA;/* '<S7>/Switch29' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_APM3InterlockSts_FA;/* '<S7>/Switch31' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_APM_HV_CurrentFA;/* '<S565>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_APM_HV_VoltageFA;/* '<S7>/Switch6' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_BPCM_HV_InternalVoltage_FA;/* '<S595>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_CompHVInp_FA;/* '<S597>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_ECH_HVILSts_FA;/* '<S7>/Switch26' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_FC_DCDC_IntrlkStat_FA;/* '<S7>/Switch34' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HEAC_IntrlkStat_FA;/* '<S7>/Switch36' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HVBatIntrlkIntrnlStatFA;/* '<S7>/Switch7' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HVIL_A_Failed;/* '<S7>/Switch' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HVIL_B_Failed;/* '<S7>/Switch16' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HVIL_C_Failed;/* '<S7>/Switch15' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HVTracBatCntctrConfigFA;/* '<S593>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_BatCurrFA;/* '<S553>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_BatInrlkStatFA;/* '<S7>/Switch24' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_BatModVoltMaxFA;/* '<S601>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_BatModVoltMinFA;/* '<S599>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_BatVoltFA;/* '<S551>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_Current_String2_FA;/* '<S590>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_InternalStringVolt1FA;/* '<S591>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_HV_InternalStringVolt2FA;/* '<S592>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_Inverter_PowerDraw_FA;/* '<S578>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_LocBPCM;/* '<S567>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MCPA_HVILStsFA;/* '<S7>/Switch17' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MCPB_HVILStsFA;/* '<S7>/Switch19' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MCPC_HVILStsFA;/* '<S7>/Switch23' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MtrA_DC_CrntFA;/* '<S555>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MtrA_DC_VoltFA;/* '<S572>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MtrB_DC_CrntFA;/* '<S559>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MtrB_DC_VoltFA;/* '<S587>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MtrC_DC_CrntFA;/* '<S573>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_MtrC_DC_VoltFA;/* '<S570>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_OBCM_HVILStsFA;/* '<S7>/Switch21' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_OBCRPluggedIn;/* '<S568>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_Worksite_Inverter_Active;/* '<S575>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTI_b_Worksite_Inverter_Active_FA;/* '<S576>/Gain' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_APM2InterlockSts;/* '<S7>/Switch28' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_APM3InterlockSts;/* '<S7>/Switch30' */
static VAR(TeOBCR_e_ChargeType, HVTR_VAR_INIT) VeHVTI_e_ChargeType;/* '<S7>/Switch14' */
static VAR(TeOBCR_e_ChargingLevel, HVTR_VAR_INIT) VeHVTI_e_ChargingLevel;/* '<S465>/DataTypeConversion' */
static VAR(TeOBCR_e_ChargingSystemSts, HVTR_VAR_INIT) VeHVTI_e_ChargingSystemSts;/* '<S466>/DataTypeConversion' */
static VAR(TeOBCR_e_DC_ChrgTypeCmd, HVTR_VAR_INIT) VeHVTI_e_DC_ChrgTypeCmd;/* '<S462>/DataTypeConversion' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_ECH_HVILSts;/* '<S7>/Switch27' */
static VAR(TePLTR_e_EPBHoldSts, HVTR_VAR_INIT) VeHVTI_e_EPBHoldSts;/* '<S470>/DataTypeConversion' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_FC_DCDC_IntrlkStat;/* '<S7>/Switch33' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_HEAC_IntrlkStat;/* '<S7>/Switch35' */
static VAR(TeBPCR_e_HVBatIntrlk_InternalStat, HVTR_VAR_INIT)
    VeHVTI_e_HVBatIntrlkIntrnlStat;    /* '<S7>/Switch10' */
static VAR(TeBPCR_e_HVTracBatCntctrConfig, HVTR_VAR_INIT)
    VeHVTI_e_HVTracBatCntctrConfig;    /* '<S463>/DataTypeConversion' */
static VAR(TeHVTR_e_HV_BatCntctrStat, HVTR_VAR_INIT) VeHVTI_e_HV_BatCntctrStat;/* '<S464>/DataTypeConversion' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_HV_BatIntrlkStat;/* '<S7>/Switch4' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT)
    VeHVTI_e_HV_BatIntrlkStatDebounced;/* '<S460>/Switch' */
static VAR(TeSTRR_e_HybStrtrSt, HVTR_VAR_INIT) VeHVTI_e_HybStrtrSt;/* '<S468>/DataTypeConversion' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_MCPA_HVILSts;/* '<S7>/Switch8' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_MCPB_HVILSts;/* '<S7>/Switch18' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_MCPC_HVILSts;/* '<S7>/Switch22' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTI_e_OBCM_HVILSts;/* '<S7>/Switch20' */
static VAR(TePMDR_e_PowerMode, HVTR_VAR_INIT) VeHVTI_e_PMM_PowerMode;/* '<S467>/DataTypeConversion' */
static VAR(TeTRGR_e_TransRangeState, HVTR_VAR_INIT) VeHVTI_e_VldtdTransRngSt;/* '<S469>/DataTypeConversion' */
static VAR(float32, HVTR_VAR_INIT) VeHVTI_k_BatModNo;/* '<S564>/Gain' */

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(float32, HVTR_VAR_INIT) VeHVTR_Cnt_AntiTamp_AutoS_Count;/* '<S440>/Switch1' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(uint16, HVTR_VAR_INIT) VeHVTR_Cnt_AntiTamp_Test10;/* '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(uint16, HVTR_VAR_INIT) VeHVTR_Cnt_AntiTamp_Test12;/* '<S13>/Switch2' */

#endif

static VAR(uint16, HVTR_VAR_INIT) VeHVTR_Cnt_Tmr1Enbl_SrvcProc1320;/* '<S174>/Switch1' */

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(float32, HVTR_VAR_INIT) VeHVTR_I_AntiTamp_Test1;/* '<S13>/Product1' */

#endif

static VAR(float32, HVTR_VAR_INIT) VeHVTR_I_HV_Total_Load_Curr;/* '<S9>/Summation1' */
static VAR(float32, HVTR_VAR_INIT) VeHVTR_I_V2X_InputCurrent;/* '<S579>/Gain' */
static VAR(float32, HVTR_VAR_INIT) VeHVTR_P_BSG_OnBoard_PwrPanl;/* '<S8>/Switch8' */
static VAR(float32, HVTR_VAR_INIT) VeHVTR_P_PPIM_PwrPanl;/* '<S8>/Switch9' */
static VAR(float32, HVTR_VAR_INIT) VeHVTR_P_V2X_IDCM_dcPwr;/* '<S8>/Switch7' */
static VAR(float32, HVTR_VAR_INIT) VeHVTR_U_V2X_InputVoltage;/* '<S581>/Gain' */

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test1;/* '<S13>/Comparison5' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test11;/* '<S13>/Logical1' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test13;/* '<S13>/Logical2' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test14;/* '<S13>/Logical8' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test2;/* '<S13>/Logical6' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test3;/* '<S13>/Comparison6' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test5;/* '<S446>/AND' */

#endif

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_AntiTamp_Test8;/* '<S443>/AND' */

#endif

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_BattSide_CurrFA;/* '<S584>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_BattSide_VoltFA;/* '<S585>/Gain' */

#if Rte_SysCon_Variant_HVTR_HVIL_3

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_EnternalHVIL_Failed;/* '<S179>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_3

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_ExternalHVIL_NS;/* '<S179>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_3

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_ExternalHVIL_Passed;/* '<S179>/Comparison3' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S186>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_9

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S185>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_8

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S184>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_7

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S183>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_6

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S182>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_5

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S181>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_4

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S180>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_2

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Failed;/* '<S178>/Logical5' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S186>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_9

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S185>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_8

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S184>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_7

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S183>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_6

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S182>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_5

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S181>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_4

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S180>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_2

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_NS;/* '<S178>/Comparison11' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S186>/Logical' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_9

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S185>/Comparison4' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_8

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S184>/Logical' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_7

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S183>/Logical' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_6

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S182>/Logical' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_5

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S181>/Logical' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_4

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S180>/Logical' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_2

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_HVIL_Passed;/* '<S178>/Logical' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_3

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_IntrnlHVIL_Failed;/* '<S179>/Logical14' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_3

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_IntrnlHVIL_NS;/* '<S179>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_3

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_IntrnlHVIL_Passed;/* '<S179>/Comparison9' */

#endif

static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_SrvcHVError_M1;/* '<S158>/Logical1' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_SrvcHVError_M2;/* '<S158>/Logical3' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_V2X_HVILSts_FA;/* '<S7>/Switch32' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_V2X_InputCurrent_FA;/* '<S582>/Gain' */
static VAR(boolean, HVTR_VAR_INIT) VeHVTR_b_V2X_InputVoltage_FA;/* '<S583>/Gain' */
static VAR(TeHVTR_e_HV_IntrlkStat, HVTR_VAR_INIT) VeHVTR_e_V2X_HVILSts;/* '<S7>/Switch25' */

#if Rte_SysCon_Variant_HVTR_AntiTemp

static VAR(float32, HVTR_VAR_INIT) VeHVTR_q_AntiTamp_Test1;/* '<S457>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HVTR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HVTR
#include "MemMap.h"

CONST(ConstB_HVTR_ac_T, HVTR_VAR_INIT) HVTR_ac_ConstB =
{
    CeTRGR_e_NoSelectionAvailable,     /* '<S610>/Constant' */
    CePLTR_e_EPBHoldSts_REL,           /* '<S612>/Constant' */
    CeHVTR_e_NtPrfmd,                  /* '<S608>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S611>/Constant' */
    CeHVTR_e_IntrlkNotSourced,         /* '<S606>/Constant' */
    CeHVTR_e_Open,                     /* '<S609>/Constant' */
    CeBPCR_e_HVBatIntrlkSNA            /* '<S607>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_HVTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HVTR
#include "MemMap.h"

VAR(B_HVTR_ac_T, HVTR_VAR_INIT) HVTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HVTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HVTR
#include "MemMap.h"

VAR(DW_HVTR_ac_T, HVTR_VAR_INIT) HVTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HVTR
#include "MemMap.h"
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_Failed(P2VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR(TeBPCR_e_HVBatIntrlk_InternalStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out2);

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_Passed(P2VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR(TeBPCR_e_HVBatIntrlk_InternalStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out2);

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_Not_Sourced(P2VAR
    (TeHVTR_e_HV_IntrlkStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR
    (TeBPCR_e_HVBatIntrlk_InternalStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out2);

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_PreviousValue(VAR
    (TeHVTR_e_HV_IntrlkStat, AUTOMATIC) rtu_Last_HV_IntrlkStat, VAR
    (TeBPCR_e_HVBatIntrlk_InternalStat, AUTOMATIC) rtu_Last_HV_IntrlkStat1,
    P2VAR(TeHVTR_e_HV_IntrlkStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR
    (TeBPCR_e_HVBatIntrlk_InternalStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out2);

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_1

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_TurnOnDelaySample1(VAR(uint16,
    AUTOMATIC) rtu_n, VAR(boolean, AUTOMATIC) rtu_u, P2VAR
    (B_TurnOnDelaySample1_HVTR_ac_T, AUTOMATIC, HVTR_VAR_INIT) localB, P2VAR
    (DW_TurnOnDelaySample1_HVTR_ac_T, AUTOMATIC, HVTR_VAR_INIT) localDW);

#endif

/*
 * Output and update for action system:
 *    '<S178>/Failed'
 *    '<S180>/Failed'
 *    '<S181>/Failed'
 *    '<S182>/Failed'
 *    '<S183>/Failed'
 *    '<S184>/Failed'
 *    '<S185>/Failed'
 *    '<S186>/Failed'
 */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_Failed(P2VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR(TeBPCR_e_HVBatIntrlk_InternalStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out2)
{
    /* SignalConversion generated from: '<S196>/Out1' incorporates:
     *  Constant: '<S205>/Constant'
     */
    *rty_Out1 = CeHVTR_e_IntrlkFailed;

    /* SignalConversion generated from: '<S196>/Out2' incorporates:
     *  Constant: '<S204>/Constant'
     */
    *rty_Out2 = CeBPCR_e_HVBatIntrlkFail;
}

#endif

/*
 * Output and update for action system:
 *    '<S178>/Passed'
 *    '<S180>/Passed'
 *    '<S181>/Passed'
 *    '<S182>/Passed'
 *    '<S183>/Passed'
 *    '<S184>/Passed'
 *    '<S185>/Passed'
 *    '<S186>/Passed'
 */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_Passed(P2VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR(TeBPCR_e_HVBatIntrlk_InternalStat,
    AUTOMATIC, HVTR_VAR_INIT) rty_Out2)
{
    /* SignalConversion generated from: '<S200>/Out1' incorporates:
     *  Constant: '<S209>/Constant'
     */
    *rty_Out1 = CeHVTR_e_IntrlkPassed;

    /* SignalConversion generated from: '<S200>/Out2' incorporates:
     *  Constant: '<S208>/Constant'
     */
    *rty_Out2 = CeBPCR_e_HVBatIntrlkPass;
}

#endif

/*
 * Output and update for action system:
 *    '<S178>/Not_Sourced'
 *    '<S180>/Not_Sourced'
 *    '<S181>/Not_Sourced'
 *    '<S182>/Not_Sourced'
 *    '<S183>/Not_Sourced'
 *    '<S184>/Not_Sourced'
 *    '<S185>/Not_Sourced'
 *    '<S186>/Not_Sourced'
 */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_Not_Sourced(P2VAR
    (TeHVTR_e_HV_IntrlkStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR
    (TeBPCR_e_HVBatIntrlk_InternalStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out2)
{
    /* SignalConversion generated from: '<S199>/Out1' incorporates:
     *  Constant: '<S207>/Constant'
     */
    *rty_Out1 = CeHVTR_e_IntrlkNotSourced;

    /* SignalConversion generated from: '<S199>/Out2' incorporates:
     *  Constant: '<S206>/Constant'
     */
    *rty_Out2 = CeBPCR_e_HVBatIntrlkSNA;
}

#endif

/*
 * Output and update for action system:
 *    '<S178>/PreviousValue'
 *    '<S180>/PreviousValue'
 *    '<S181>/PreviousValue'
 *    '<S182>/PreviousValue'
 *    '<S183>/PreviousValue'
 *    '<S184>/PreviousValue'
 *    '<S185>/PreviousValue'
 *    '<S186>/PreviousValue'
 */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_PreviousValue(VAR
    (TeHVTR_e_HV_IntrlkStat, AUTOMATIC) rtu_Last_HV_IntrlkStat, VAR
    (TeBPCR_e_HVBatIntrlk_InternalStat, AUTOMATIC) rtu_Last_HV_IntrlkStat1,
    P2VAR(TeHVTR_e_HV_IntrlkStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out1, P2VAR
    (TeBPCR_e_HVBatIntrlk_InternalStat, AUTOMATIC, HVTR_VAR_INIT) rty_Out2)
{
    /* Inport: '<S201>/Last_HV_IntrlkStat' */
    *rty_Out1 = rtu_Last_HV_IntrlkStat;

    /* Inport: '<S201>/Last_HV_IntrlkStat1' */
    *rty_Out2 = rtu_Last_HV_IntrlkStat1;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S188>/Turn On Delay Sample1'
 *    '<S188>/Turn On Delay Sample2'
 */
#if Rte_SysCon_Variant_HVTR_HVIL_1

static FUNC(void, HVTR_CODE_LOCAL) HVTR_ac_TurnOnDelaySample1(VAR(uint16,
    AUTOMATIC) rtu_n, VAR(boolean, AUTOMATIC) rtu_u, P2VAR
    (B_TurnOnDelaySample1_HVTR_ac_T, AUTOMATIC, HVTR_VAR_INIT) localB, P2VAR
    (DW_TurnOnDelaySample1_HVTR_ac_T, AUTOMATIC, HVTR_VAR_INIT) localDW)
{
    uint16 rtb_Switch1_dj;
    boolean rtb_AND_p4;

    /* Outputs for Atomic SubSystem: '<S427>/EdgeRising' */
    /* Logic: '<S432>/AND' incorporates:
     *  Logic: '<S432>/OR1'
     *  UnitDelay: '<S432>/Unit Delay'
     */
    rtb_AND_p4 = (rtu_u && (!localDW->UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S432>/Unit Delay' */
    localDW->UnitDelay_DSTATE_d = rtu_u;

    /* End of Outputs for SubSystem: '<S427>/EdgeRising' */

    /* Switch: '<S433>/Switch1' incorporates:
     *  Constant: '<S427>/Constant Value'
     *  Logic: '<S427>/OR'
     *  Logic: '<S427>/OR1'
     *  MinMax: '<S427>/Minimum'
     *  Sum: '<S427>/Summation'
     *  UnitDelay: '<S427>/Unit Delay'
     */
    if ((!rtu_u) || rtb_AND_p4)
    {
        /* Switch: '<S433>/Switch1' incorporates:
         *  Constant: '<S427>/Constant Value1'
         */
        rtb_Switch1_dj = 0U;
    }
    else if (rtu_n < ((uint16)(((uint32)localDW->UnitDelay_DSTATE) + 1U)))
    {
        /* MinMax: '<S427>/Minimum' incorporates:
         *  Switch: '<S433>/Switch1'
         */
        rtb_Switch1_dj = rtu_n;
    }
    else
    {
        /* Switch: '<S433>/Switch1' incorporates:
         *  Constant: '<S427>/Constant Value'
         *  MinMax: '<S427>/Minimum'
         *  Sum: '<S427>/Summation'
         *  UnitDelay: '<S427>/Unit Delay'
         */
        rtb_Switch1_dj = (uint16)(((uint32)localDW->UnitDelay_DSTATE) + 1U);
    }

    /* End of Switch: '<S433>/Switch1' */

    /* Logic: '<S427>/AND' incorporates:
     *  RelationalOperator: '<S427>/Greater  Than'
     */
    localB->AND_f = (rtu_u && (rtb_Switch1_dj >= rtu_n));

    /* Update for UnitDelay: '<S427>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtb_Switch1_dj;
}

#endif

/* Model step function for TID1 */
FUNC(void, HVTR_CODE) HVTR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    TeHVTR_e_HV_IntrlkStat rtb_HV_IntrlkStat_write_IRV;

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    TeHVTR_e_HV_IntrlkStat rtb_VariantMergeForOutportHV_In;

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    TeBPCR_e_HVBatIntrlk_InternalStat rtb_HV_IntrnlItrlkStat_write_IR;

#endif

    TeHVTR_e_HV_IntrlkStat tmpRead_4;
    TeHVTR_e_HV_IntrlkStat tmpRead_5;
    TeHVTR_e_HV_IntrlkStat tmpRead_6;
    TeHVTR_e_HV_IntrlkStat tmpRead_8;
    TeHVTR_e_HV_IntrlkStat tmpRead_9;
    TeHVTR_e_HV_IntrlkStat tmpRead_a;
    TeHVTR_e_HV_IntrlkStat tmpRead_b;
    TeHVTR_e_HV_IntrlkStat tmpRead_c;
    TeHVTR_e_HV_IntrlkStat tmpRead_d;
    TeHVTR_e_HV_IntrlkStat tmpRead_e;
    TeOBCR_e_ChargeType tmpRead_3;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_7;

#if !(!Rte_SysCon_Variant_HVTR_AntiTemp) || Rte_SysCon_Variant_HVTR_AntiTemp

    uint16 rtb_VeHVTR_Cnt_AntiTamp_NbrOfFa;

#endif

    float32 rtb_Gain;
    float32 rtb_Merge;
    float32 rtb_Merge1;
    float32 rtb_Merge3;
    float32 rtb_Switch5_m;
    float32 rtb_TmpSignalConversionAtVeIDCR;
    sint16 rtb_Switch1_hk;
    sint8 rtAction;
    sint8 rtPrevAction;
    boolean rtb_Comparison2;
    boolean rtb_Comparison4_a;
    boolean rtb_Logical1;
    boolean rtb_Logical11_o;
    boolean rtb_Logical1_el;
    boolean rtb_Logical2;
    boolean rtb_Logical22;
    boolean rtb_Logical3_k;
    boolean rtb_Logical4;
    boolean rtb_Logical5;

#if !(!Rte_SysCon_Variant_HVTR_AntiTemp) || Rte_SysCon_Variant_HVTR_AntiTemp

    boolean rtb_AND_ix;

#endif

    boolean rtb_AND_li;

#if Rte_SysCon_Variant_HVTR_AntiTemp || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    uint16 rtb_Switch1_hr;

#endif

    float32 rtb_Multiplication1;
    float32 rtb_Multiplication3;
    float32 rtb_Product_k4;
    float32 rtb_Sum2;
    float32 rtb_Summation;
    float32 rtb_Summation_di;
    float32 rtb_Summation_gyj;
    float32 rtb_Summation_j4y;
    float32 rtb_Summation_m5;
    float32 rtb_Switch1_ad;
    float32 rtb_Switch2;
    float32 rtb_Switch3;
    float32 rtb_Switch3_m;
    float32 rtb_Switch4;
    TeHVTR_e_HV_IntrlkStat rtb_TmpSignalConversionAtVeBPCR;

#if (!Rte_SysCon_Variant_HVTR_HVIL_0 && Rte_SysCon_Variant_HVTR_HVIL_1) || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    TeHVTR_e_HV_IntrlkStat rtb_UnitDelay2_f;

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    TeBPCR_e_HVBatIntrlk_InternalStat rtb_UnitDelay1_b;

#endif

    TeBPCR_e_HVBatIntrlk_InternalStat rtb_Switch3_kd;

#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    TeHVTR_e_HV_IntrlkStat rtb_OutportBufferForHV_Intrlk_h;

#endif

#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    TeBPCR_e_HVBatIntrlk_InternalStat rtb_OutportBufferForHV_IntrnlIt;

#endif

    float32 Merge;
    float32 Merge1;
    float32 Merge2;
    float32 Switch1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HVTR_MedTEB'
     */
    /* SignalConversion generated from: '<S2>/HV_IntrlkStat_read' incorporates:
     *  SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat_read'
     */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    /* SignalConversion generated from: '<S2>/HV_IntrlkStat_read' incorporates:
     *  Merge: '<Root>/Merge_14_Irv'
     */
    rtb_HV_IntrlkStat_write_IRV =
        Rte_IrvRead_HVTR_MedTEB_HV_IntrlkStat_write_IRV();

    /* SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat_read' incorporates:
     *  Merge: '<Root>/Merge_11_Irv'
     */
    rtb_HV_IntrnlItrlkStat_write_IR =
        Rte_IrvRead_HVTR_MedTEB_HV_IntrnlItrlkStat_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/HV_IntrlkStat_read' */

    /* SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatInrlkStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatInrlkStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatInrlkStat_Value
        (&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S2>/VeIDCR_I_BattSide_Curr' incorporates:
     *  Inport: '<Root>/VeIDCR_I_BattSide_Curr'
     */
    (void)Rte_Read_VeIDCR_I_BattSide_Curr_Value(&rtb_TmpSignalConversionAtVeIDCR);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTI'
     */
    /* Switch: '<S602>/Switch1' incorporates:
     *  RelationalOperator: '<S460>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatInrlkStat'
     *  UnitDelay: '<S460>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR != HVTR_ac_DW.UnitDelay_DSTATE_o2)
    {
        /* Switch: '<S602>/Switch1' incorporates:
         *  Constant: '<S602>/Constant Value1'
         *  Constant: '<S602>/Constant Value2'
         *  Sum: '<S602>/Subtraction'
         */
        rtb_Switch1_hk = -1;
    }
    else
    {
        /* Switch: '<S602>/Switch1' incorporates:
         *  UnitDelay: '<S602>/Unit Delay2'
         */
        rtb_Switch1_hk = HVTR_ac_DW.UnitDelay2_DSTATE;
    }

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeFCPR_b_HEAC_IntrlkStat_FA' */
    (void)Rte_Read_VeFCPR_b_HEAC_IntrlkStat_FA_Value(&rtb_Comparison2);

    /* Inport: '<Root>/VeFCPR_e_HEAC_IntrlkStat' */
    (void)Rte_Read_VeFCPR_e_HEAC_IntrlkStat_Value(&tmpRead_e);

    /* Inport: '<Root>/VeFCPR_b_FC_DCDC_IntrlkStat_FA' */
    (void)Rte_Read_VeFCPR_b_FC_DCDC_IntrlkStat_FA_Value(&rtb_Logical4);

    /* Inport: '<Root>/VeFCPR_e_FC_DCDC_IntrlkStat' */
    (void)Rte_Read_VeFCPR_e_FC_DCDC_IntrlkStat_Value(&tmpRead_d);

    /* Inport: '<Root>/VeIDCR_b_APM3InterlockSts_FA' */
    (void)Rte_Read_VeIDCR_b_APM3InterlockSts_FA_Value(&rtb_AND_li);

    /* Inport: '<Root>/VeIDCR_e_APM3InterlockSts' */
    (void)Rte_Read_VeIDCR_e_APM3InterlockSts_Value(&tmpRead_c);

    /* Inport: '<Root>/VeIDCR_b_APM2InterlockSts_FA' */
    (void)Rte_Read_VeIDCR_b_APM2InterlockSts_FA_Value(&rtb_Logical1_el);

    /* Inport: '<Root>/VeIDCR_e_APM2InterlockSts' */
    (void)Rte_Read_VeIDCR_e_APM2InterlockSts_Value(&tmpRead_b);

    /* Gain: '<S597>/Gain' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CompHVInp_FA'
     */
    (void)Rte_Read_VeTAIR_b_CompHVInp_FA_Value((&(VeHVTI_b_CompHVInp_FA)));

    /* Gain: '<S596>/Gain' incorporates:
     *  Inport: '<Root>/VeTAIR_U_CompHVInp'
     */
    (void)Rte_Read_VeTAIR_U_CompHVInp_Value((&(VeHVTI_U_CompHVInp)));

    /* Gain: '<S593>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HVTracBatCntctrConfigFA'
     */
    (void)Rte_Read_VeBPCR_b_HVTracBatCntctrConfigFA_Value
        ((&(VeHVTI_b_HVTracBatCntctrConfigFA)));

    /* Gain: '<S595>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_HV_InternalVoltage_FA'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_HV_InternalVoltage_FA_Value
        ((&(VeHVTI_b_BPCM_HV_InternalVoltage_FA)));

    /* Gain: '<S594>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_U_BPCM_HV_InternalVoltage'
     */
    (void)Rte_Read_VeBPCR_U_BPCM_HV_InternalVoltage_Value
        ((&(VeHVTI_U_BPCM_HV_InternalVoltage)));

    /* Gain: '<S592>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_InternalStringVolt2FA'
     */
    (void)Rte_Read_VeBPCR_b_HV_InternalStringVolt2FA_Value
        ((&(VeHVTI_b_HV_InternalStringVolt2FA)));

    /* Gain: '<S591>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_InternalStringVolt1FA'
     */
    (void)Rte_Read_VeBPCR_b_HV_InternalStringVolt1FA_Value
        ((&(VeHVTI_b_HV_InternalStringVolt1FA)));

    /* Gain: '<S590>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_Current_String2_FA'
     */
    (void)Rte_Read_VeBPCR_b_HV_Current_String2_FA_Value
        ((&(VeHVTI_b_HV_Current_String2_FA)));

    /* DataTypeConversion: '<S462>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeOBCR_e_DC_ChrgTypeCmd'
     */
    (void)Rte_Read_VeOBCR_e_DC_ChrgTypeCmd_Value((&(VeHVTI_e_DC_ChrgTypeCmd)));

    /* Gain: '<S589>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_InternalStringVolt2'
     */
    (void)Rte_Read_VeBPCR_U_HV_InternalStringVolt2_Value
        ((&(VeHVTI_U_HV_InternalStringVolt2)));

    /* Gain: '<S588>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_InternalStringVolt1'
     */
    (void)Rte_Read_VeBPCR_U_HV_InternalStringVolt1_Value
        ((&(VeHVTI_U_HV_InternalStringVolt1)));

    /* DataTypeConversion: '<S463>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HVTracBatCntctrConfig'
     */
    (void)Rte_Read_VeBPCR_e_HVTracBatCntctrConfig_Value
        ((&(VeHVTI_e_HVTracBatCntctrConfig)));

    /* Gain: '<S586>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_I_HV_Current_String2'
     */
    (void)Rte_Read_VeBPCR_I_HV_Current_String2_Value
        ((&(VeHVTI_I_HV_Current_String2)));

    /* Gain: '<S585>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_b_BattSide_VoltFA'
     */
    (void)Rte_Read_VeIDCR_b_BattSide_VoltFA_Value((&(VeHVTR_b_BattSide_VoltFA)));

    /* Gain: '<S584>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_b_BattSide_CurrFA'
     */
    (void)Rte_Read_VeIDCR_b_BattSide_CurrFA_Value((&(VeHVTR_b_BattSide_CurrFA)));

    /* Gain: '<S583>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_b_V2X_InputVoltage_FA'
     */
    (void)Rte_Read_VeIDCR_b_V2X_InputVoltage_FA_Value
        ((&(VeHVTR_b_V2X_InputVoltage_FA)));

    /* Gain: '<S582>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_b_V2X_InputCurrent_FA'
     */
    (void)Rte_Read_VeIDCR_b_V2X_InputCurrent_FA_Value
        ((&(VeHVTR_b_V2X_InputCurrent_FA)));

    /* Gain: '<S581>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_U_V2X_InputVoltage'
     */
    (void)Rte_Read_VeIDCR_U_V2X_InputVoltage_Value((&(VeHVTR_U_V2X_InputVoltage)));

    /* Gain: '<S579>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_I_V2X_InputCurrent'
     */
    (void)Rte_Read_VeIDCR_I_V2X_InputCurrent_Value((&(VeHVTR_I_V2X_InputCurrent)));

    /* Inport: '<Root>/VeIDCR_b_V2X_InterlockSts_FA' */
    (void)Rte_Read_VeIDCR_b_V2X_InterlockSts_FA_Value(&rtb_Comparison4_a);

    /* Inport: '<Root>/VeIDCR_e_V2X_InterlockSts' */
    (void)Rte_Read_VeIDCR_e_V2X_InterlockSts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHTIR_b_HVC_Htr_InterlockStat_FA' */
    (void)Rte_Read_VeHTIR_b_HVC_Htr_InterlockStat_FA_Value(&rtb_Logical1);

    /* Inport: '<Root>/VeHTIR_e_HVC_Htr_InterlockStat' */
    (void)Rte_Read_VeHTIR_e_HVC_Htr_InterlockStat_Value(&tmpRead_9);

    /* Gain: '<S578>/Gain' incorporates:
     *  Inport: '<Root>/VePLTR_b_Inverter_PowerDraw_FA'
     */
    (void)Rte_Read_VePLTR_b_Inverter_PowerDraw_FA_Value
        ((&(VeHVTI_b_Inverter_PowerDraw_FA)));

    /* Gain: '<S577>/Gain' incorporates:
     *  Inport: '<Root>/VePLTR_W_Inverter_PowerDraw'
     */
    (void)Rte_Read_VePLTR_W_Inverter_PowerDraw_Value
        ((&(VeHVTI_P_Inverter_PowerDraw)));

    /* Gain: '<S576>/Gain' incorporates:
     *  Inport: '<Root>/VePLTR_b_Worksite_Inverter_Active_FA'
     */
    (void)Rte_Read_VePLTR_b_Worksite_Inverter_Active_FA_Value
        ((&(VeHVTI_b_Worksite_Inverter_Active_FA)));

    /* Gain: '<S575>/Gain' incorporates:
     *  Inport: '<Root>/VePLTR_b_Worksite_Inverter_Active'
     */
    (void)Rte_Read_VePLTR_b_Worksite_Inverter_Active_Value
        ((&(VeHVTI_b_Worksite_Inverter_Active)));

    /* Gain: '<S574>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_U_BattSideVolt'
     */
    (void)Rte_Read_VeIDCR_U_BattSideVolt_Value((&(VeHVTI_U_BattSide_Volt)));

    /* Inport: '<Root>/VeINVR_b_MCPC_HVILStsFA' */
    (void)Rte_Read_VeINVR_b_MCPC_HVILStsFA_Value(&rtb_Logical2);

    /* Inport: '<Root>/VeINVR_e_MCPC_HVILSts' */
    (void)Rte_Read_VeINVR_e_MCPC_HVILSts_Value(&tmpRead_8);

    /* Gain: '<S573>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_DC_CrntFA'
     */
    (void)Rte_Read_VeINVR_b_MtrC_DC_CrntFA_Value((&(VeHVTI_b_MtrC_DC_CrntFA)));

    /* Gain: '<S571>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrC_DC_Crnt'
     */
    (void)Rte_Read_VeINVR_I_MtrC_DC_Crnt_Value((&(VeHVTI_I_MtrC_DC_Crnt)));

    /* Gain: '<S570>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrC_DC_VoltFA'
     */
    (void)Rte_Read_VeINVR_b_MtrC_DC_VoltFA_Value((&(VeHVTI_b_MtrC_DC_VoltFA)));

    /* Gain: '<S569>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_U_MtrC_DC_Volt'
     */
    (void)Rte_Read_VeINVR_U_MtrC_DC_Volt_Value((&(VeHVTI_U_MtrC_DC_Volt)));

    /* Gain: '<S567>/Gain' incorporates:
     *  Inport: '<Root>/VeDFIR_b_LocBPCM'
     */
    (void)Rte_Read_VeDFIR_b_LocBPCM_Value((&(VeHVTI_b_LocBPCM)));

    /* DataTypeConversion: '<S470>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value((&(VeHVTI_e_EPBHoldSts)));

    /* Gain: '<S568>/Gain' incorporates:
     *  Inport: '<Root>/VeOBCR_b_PluggedIn'
     */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value((&(VeHVTI_b_OBCRPluggedIn)));

    /* DataTypeConversion: '<S469>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value((&(VeHVTI_e_VldtdTransRngSt)));

    /* DataTypeConversion: '<S468>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value((&(VeHVTI_e_HybStrtrSt)));

    /* DataTypeConversion: '<S467>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeHVTI_e_PMM_PowerMode)));

    /* Gain: '<S566>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_I_EVSEOutputCurr'
     */
    (void)Rte_Read_VeIDCR_I_EVSEOutputCurr_Value((&(VeHVTI_I_EVSEOutputCurr)));

    /* Gain: '<S563>/Gain' incorporates:
     *  Inport: '<Root>/VeTAIR_I_ACCElecCurr'
     */
    (void)Rte_Read_VeTAIR_I_ACCElecCurr_Value((&(VeHVTI_I_ACCElecCurr)));

    /* Gain: '<S557>/Gain' incorporates:
     *  Inport: '<Root>/VeHTIR_I_HVC_Htr_HV_CrntAct'
     */
    (void)Rte_Read_VeHTIR_I_HVC_Htr_HV_CrntAct_Value
        ((&(VeHVTI_I_HVC_Htr_HV_CrntAct)));

    /* Gain: '<S556>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_U_APM_HV_Voltage'
     */
    (void)Rte_Read_VeIDCR_U_APM_HV_Voltage_Value((&(VeHVTI_U_APM_HV_Voltage)));

    /* DataTypeConversion: '<S466>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value
        ((&(VeHVTI_e_ChargingSystemSts)));

    /* DataTypeConversion: '<S465>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value((&(VeHVTI_e_ChargingLevel)));

    /* DataTypeConversion: '<S464>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value((&(VeHVTI_e_HV_BatCntctrStat)));

    /* Gain: '<S565>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_b_APM_HV_CurrentFA'
     */
    (void)Rte_Read_VeIDCR_b_APM_HV_CurrentFA_Value((&(VeHVTI_b_APM_HV_CurrentFA)));

    /* Gain: '<S564>/Gain' incorporates:
     *  Inport: '<Root>/VeESMR_k_BatModNo'
     */
    (void)Rte_Read_VeESMR_k_BatModNo_Value((&(VeHVTI_k_BatModNo)));

    /* Inport: '<Root>/VeBPCR_b_HV_BatInrlkStatFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatInrlkStatFA_Value(&tmpRead_7);

    /* Gain: '<S561>/Gain' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AC_CompElecPwr_FA'
     */
    (void)Rte_Read_VeTAIR_b_AC_CompElecPwr_FA_Value
        ((&(VeHVTI_b_AC_CompElecPwr_FA)));

    /* Gain: '<S560>/Gain' incorporates:
     *  Inport: '<Root>/VeIDCR_I_APM_HV_Current'
     */
    (void)Rte_Read_VeIDCR_I_APM_HV_Current_Value((&(VeHVTI_I_APM_HV_Current)));

    /* Gain: '<S559>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrB_DC_CrntFA'
     */
    (void)Rte_Read_VeINVR_b_MtrB_DC_CrntFA_Value((&(VeHVTI_b_MtrB_DC_CrntFA)));

    /* Gain: '<S558>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt'
     */
    (void)Rte_Read_VeINVR_I_MtrB_DC_Crnt_Value((&(VeHVTI_I_MtrB_DC_Crnt)));

    /* Gain: '<S555>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_CrntFA'
     */
    (void)Rte_Read_VeINVR_b_MtrA_DC_CrntFA_Value((&(VeHVTI_b_MtrA_DC_CrntFA)));

    /* Gain: '<S554>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
     */
    (void)Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value((&(VeHVTI_I_MtrA_DC_Crnt)));

    /* Gain: '<S553>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatCurrFA'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatCurrFA_Value((&(VeHVTI_b_HV_BatCurrFA)));

    /* Gain: '<S552>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_I_HV_BatCurr'
     */
    (void)Rte_Read_VeBPCR_I_HV_BatCurr_Value((&(VeHVTI_I_HV_BatCurr)));

    /* Gain: '<S601>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatModVoltMaxFA_Value
        ((&(VeHVTI_b_HV_BatModVoltMaxFA)));

    /* Gain: '<S600>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatModVoltMax'
     */
    (void)Rte_Read_VeBPCR_U_HV_BatModVoltMax_Value((&(VeHVTI_U_HV_BatModVoltMax)));

    /* Gain: '<S599>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatModVoltMinFA'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatModVoltMinFA_Value
        ((&(VeHVTI_b_HV_BatModVoltMinFA)));

    /* Gain: '<S598>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatModVoltMin'
     */
    (void)Rte_Read_VeBPCR_U_HV_BatModVoltMin_Value((&(VeHVTI_U_HV_BatModVoltMin)));

    /* Gain: '<S587>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrB_DC_VoltFA'
     */
    (void)Rte_Read_VeINVR_b_MtrB_DC_VoltFA_Value((&(VeHVTI_b_MtrB_DC_VoltFA)));

    /* Gain: '<S580>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_U_MtrB_DC_Volt'
     */
    (void)Rte_Read_VeINVR_U_MtrB_DC_Volt_Value((&(VeHVTI_U_MtrB_DC_Volt)));

    /* Gain: '<S572>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_DC_VoltFA'
     */
    (void)Rte_Read_VeINVR_b_MtrA_DC_VoltFA_Value((&(VeHVTI_b_MtrA_DC_VoltFA)));

    /* Gain: '<S562>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_U_MtrA_DC_Volt'
     */
    (void)Rte_Read_VeINVR_U_MtrA_DC_Volt_Value((&(VeHVTI_U_MtrA_DC_Volt)));

    /* Gain: '<S551>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatVoltFA'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatVoltFA_Value((&(VeHVTI_b_HV_BatVoltFA)));

    /* Gain: '<S550>/Gain' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
     */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value((&(VeHVTI_U_HV_BatVolt)));

    /* Inport: '<Root>/VeIDCR_b_OBCM_HVILStsFA' */
    (void)Rte_Read_VeIDCR_b_OBCM_HVILStsFA_Value(&rtb_Logical3_k);

    /* Inport: '<Root>/VeIDCR_e_OBCM_HVILSts' */
    (void)Rte_Read_VeIDCR_e_OBCM_HVILSts_Value(&tmpRead_6);

    /* Inport: '<Root>/VeINVR_b_MCPB_HVILStsFA' */
    (void)Rte_Read_VeINVR_b_MCPB_HVILStsFA_Value(&rtb_Logical11_o);

    /* Inport: '<Root>/VeINVR_e_MCPB_HVILSts' */
    (void)Rte_Read_VeINVR_e_MCPB_HVILSts_Value(&tmpRead_5);

    /* Inport: '<Root>/VeINVR_b_MCPA_HVILStsFA' */
    (void)Rte_Read_VeINVR_b_MCPA_HVILStsFA_Value(&rtb_Logical5);

    /* Inport: '<Root>/VeINVR_e_MCPA_HVILSts' */
    (void)Rte_Read_VeINVR_e_MCPA_HVILSts_Value(&tmpRead_4);

    /* Inport: '<Root>/VeOBCR_e_ChargeType' */
    (void)Rte_Read_VeOBCR_e_ChargeType_Value(&tmpRead_3);

    /* Inport: '<Root>/VeIDCR_b_APM_HV_VoltageFA' */
    (void)Rte_Read_VeIDCR_b_APM_HV_VoltageFA_Value(&rtb_Logical22);

    /* Inport: '<Root>/VeHTIR_I_HVC_Htr4_HV_CrntAct' */
    (void)Rte_Read_VeHTIR_I_HVC_Htr4_HV_CrntAct_Value(&rtb_Switch3);

    /* Inport: '<Root>/VeHTIR_I_HVC_Htr2_HV_CrntAct' */
    (void)Rte_Read_VeHTIR_I_HVC_Htr2_HV_CrntAct_Value(&rtb_Multiplication1);

    /* Inport: '<Root>/VeAVTR_P_SDS_HV_PwrAvg' */
    (void)Rte_Read_VeAVTR_P_SDS_HV_PwrAvg_Value(&rtb_Product_k4);

    /* Inport: '<Root>/VeHTRR_P_HV_Htr4PwrAct' */
    (void)Rte_Read_VeHTRR_P_HV_Htr4PwrAct_Value(&rtb_Gain);

    /* Inport: '<Root>/VeHTRR_P_HV_Htr3PwrAct' */
    (void)Rte_Read_VeHTRR_P_HV_Htr3PwrAct_Value(&rtb_Switch3_m);

    /* Inport: '<Root>/VeHTRR_P_HV_Htr2PwrAct' */
    (void)Rte_Read_VeHTRR_P_HV_Htr2PwrAct_Value(&rtb_Switch4);

    /* Inport: '<Root>/VeHTRR_P_HVC_HtrPwrAct' */
    (void)Rte_Read_VeHTRR_P_HVC_HtrPwrAct_Value(&rtb_Multiplication3);

    /* Inport: '<Root>/VeTAIR_P_AC_CompElecPwr' */
    (void)Rte_Read_VeTAIR_P_AC_CompElecPwr_Value(&rtb_Switch2);

    /* Inport: '<Root>/VeIDCR_b_HVIL_C_Failed' */
    (void)Rte_Read_VeIDCR_b_HVIL_C_Failed_Value(&tmpRead_2);

    /* Inport: '<Root>/VeIDCR_b_HVIL_B_Failed' */
    (void)Rte_Read_VeIDCR_b_HVIL_B_Failed_Value(&tmpRead_1);

    /* Inport: '<Root>/VeIDCR_b_HVIL_A_Failed' */
    (void)Rte_Read_VeIDCR_b_HVIL_A_Failed_Value(&tmpRead_0);

    /* Inport: '<Root>/VeBPCR_b_HVBatIntrlkIntrnlStatFA' */
    (void)Rte_Read_VeBPCR_b_HVBatIntrlkIntrnlStatFA_Value(&tmpRead);

    /* Inport: '<Root>/VeBPCR_e_HVBatIntrlkIntrnlStat' */
    (void)Rte_Read_VeBPCR_e_HVBatIntrlkIntrnlStat_Value(&rtb_Switch3_kd);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HVTR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTI'
     */
    /* MinMax: '<S602>/MinMax' incorporates:
     *  Constant: '<S485>/Calib'
     *  Constant: '<S602>/Constant Value1'
     *  Sum: '<S602>/Subtraction'
     *  Switch: '<S602>/Switch1'
     */
    if (KeHVTR_Cnt_HV_BatIntrlkStatDebounce < ((sint16)(rtb_Switch1_hk + 1)))
    {
        /* MinMax: '<S602>/MinMax' */
        rtb_Switch1_hk = KeHVTR_Cnt_HV_BatIntrlkStatDebounce;
    }
    else
    {
        /* MinMax: '<S602>/MinMax' */
        rtb_Switch1_hk++;
    }

    /* End of MinMax: '<S602>/MinMax' */

    /* Switch: '<S460>/Switch' incorporates:
     *  Constant: '<S485>/Calib'
     *  RelationalOperator: '<S602>/Comparison1'
     */
    if (KeHVTR_Cnt_HV_BatIntrlkStatDebounce == rtb_Switch1_hk)
    {
        /* Switch: '<S460>/Switch' incorporates:
         *  RelationalOperator: '<S460>/Comparison4'
         *  SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatInrlkStat'
         */
        VeHVTI_e_HV_BatIntrlkStatDebounced = rtb_TmpSignalConversionAtVeBPCR;
    }
    else
    {
        /* Switch: '<S460>/Switch' incorporates:
         *  UnitDelay: '<S460>/Unit Delay1'
         */
        VeHVTI_e_HV_BatIntrlkStatDebounced = HVTR_ac_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S460>/Switch' */

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S484>/Calib'
     *  Constant: '<S7>/Constant Value3'
     *  RelationalOperator: '<S7>/Relational Operator2'
     */
    if (((sint32)KeHVTR_Cnt_HVIntrlkStatOvrdEnbl) == 13257)
    {
        /* Switch: '<S7>/Switch4' incorporates:
         *  Constant: '<S542>/Calib'
         */
        VeHVTI_e_HV_BatIntrlkStat = KeHVTR_e_HVIntrlkStatOvrd;
    }
    else
    {
        /* Switch: '<S7>/Switch4' incorporates:
         *  Switch: '<S460>/Switch'
         */
        VeHVTI_e_HV_BatIntrlkStat = VeHVTI_e_HV_BatIntrlkStatDebounced;
    }

    /* End of Switch: '<S7>/Switch4' */

    /* Switch: '<S7>/Switch10' incorporates:
     *  Constant: '<S483>/Calib'
     *  Constant: '<S7>/Constant Value4'
     *  RelationalOperator: '<S7>/Relational Operator3'
     */
    if (((sint32)KeHVTR_Cnt_HVILIntrnlStatOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch10' incorporates:
         *  Constant: '<S541>/Calib'
         */
        VeHVTI_e_HVBatIntrlkIntrnlStat = KeHVTR_e_HVILIntrnlStatOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch10' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HVBatIntrlkIntrnlStat'
         */
        VeHVTI_e_HVBatIntrlkIntrnlStat = rtb_Switch3_kd;
    }

    /* End of Switch: '<S7>/Switch10' */

    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S482>/Calib'
     *  Constant: '<S7>/Constant Value5'
     *  RelationalOperator: '<S7>/Relational Operator4'
     */
    if (((sint32)KeHVTR_Cnt_HVILIntrnlStatFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch7' incorporates:
         *  Constant: '<S520>/Calib'
         */
        VeHVTI_b_HVBatIntrlkIntrnlStatFA = KeHVTR_b_HVILIntrnlStatFAOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch7' */
        VeHVTI_b_HVBatIntrlkIntrnlStatFA = tmpRead;
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S486>/Calib'
     *  Constant: '<S7>/Constant Value1'
     *  RelationalOperator: '<S7>/Relational Operator'
     */
    if (((sint32)KeHVTR_Cnt_InvrtrA_HVIL_FailedOvrdEnbl) == 13257)
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S526>/Calib'
         */
        VeHVTI_b_HVIL_A_Failed = KeHVTR_b_InvrtrA_HVIL_FailedOvrd;
    }
    else
    {
        /* Switch: '<S7>/Switch' */
        VeHVTI_b_HVIL_A_Failed = tmpRead_0;
    }

    /* End of Switch: '<S7>/Switch' */

    /* Switch: '<S7>/Switch16' incorporates:
     *  Constant: '<S487>/Calib'
     *  Constant: '<S7>/Constant Value2'
     *  RelationalOperator: '<S7>/Relational Operator1'
     */
    if (((sint32)KeHVTR_Cnt_InvrtrB_HVIL_FailedOvrdEnbl) == 13257)
    {
        /* Switch: '<S7>/Switch16' incorporates:
         *  Constant: '<S527>/Calib'
         */
        VeHVTI_b_HVIL_B_Failed = KeHVTR_b_InvrtrB_HVIL_FailedOvrd;
    }
    else
    {
        /* Switch: '<S7>/Switch16' */
        VeHVTI_b_HVIL_B_Failed = tmpRead_1;
    }

    /* End of Switch: '<S7>/Switch16' */

    /* Switch: '<S7>/Switch15' incorporates:
     *  Constant: '<S488>/Calib'
     *  Constant: '<S7>/Constant Value6'
     *  RelationalOperator: '<S7>/Relational Operator5'
     */
    if (((sint32)KeHVTR_Cnt_InvrtrC_HVIL_FailedOvrdEnbl) == 13257)
    {
        /* Switch: '<S7>/Switch15' incorporates:
         *  Constant: '<S528>/Calib'
         */
        VeHVTI_b_HVIL_C_Failed = KeHVTR_b_InvrtrC_HVIL_FailedOvrd;
    }
    else
    {
        /* Switch: '<S7>/Switch15' */
        VeHVTI_b_HVIL_C_Failed = tmpRead_2;
    }

    /* End of Switch: '<S7>/Switch15' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S509>/Calib'
     */
    if (KeHVTR_b_AC_CompElecPwr_SelDial)
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  Constant: '<S503>/Calib'
         */
        VeHVTI_P_AC_CompElecPwr = KeHVTR_P_AC_CompElecPwr_W_Dial;
    }
    else
    {
        /* Switch: '<S7>/Switch1' */
        VeHVTI_P_AC_CompElecPwr = rtb_Switch2;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S519>/Calib'
     */
    if (KeHVTR_b_HVC_HtrPwrAct_SelDial)
    {
        /* Switch: '<S7>/Switch2' incorporates:
         *  Constant: '<S504>/Calib'
         */
        VeHVTI_P_HVC_HtrPwrActual_KW = KeHVTR_P_HVC_HtrPwrAct_W_Dial;
    }
    else
    {
        /* Switch: '<S7>/Switch2' */
        VeHVTI_P_HVC_HtrPwrActual_KW = rtb_Multiplication3;
    }

    /* End of Switch: '<S7>/Switch2' */

    /* Switch: '<S7>/Switch11' incorporates:
     *  Constant: '<S522>/Calib'
     */
    if (KeHVTR_b_Htr2_PwrOvrd)
    {
        /* Switch: '<S7>/Switch11' incorporates:
         *  Constant: '<S505>/Calib'
         */
        VeHVTI_P_HV_Htr2PwrAct = KeHVTR_P_Htr2_PwrOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch11' */
        VeHVTI_P_HV_Htr2PwrAct = rtb_Switch4;
    }

    /* End of Switch: '<S7>/Switch11' */

    /* Switch: '<S7>/Switch9' incorporates:
     *  Constant: '<S523>/Calib'
     */
    if (KeHVTR_b_Htr3_PwrOvrd)
    {
        /* Switch: '<S7>/Switch9' incorporates:
         *  Constant: '<S506>/Calib'
         */
        VeHVTI_P_HV_Htr3PwrAct = KeHVTR_P_Htr3_PwrOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch9' */
        VeHVTI_P_HV_Htr3PwrAct = rtb_Switch3_m;
    }

    /* End of Switch: '<S7>/Switch9' */

    /* Switch: '<S7>/Switch12' incorporates:
     *  Constant: '<S525>/Calib'
     */
    if (KeHVTR_b_Htr4_PwrOvrd)
    {
        /* Switch: '<S7>/Switch12' incorporates:
         *  Constant: '<S507>/Calib'
         */
        VeHVTI_P_HV_Htr4PwrAct = KeHVTR_P_Htr4_PwrOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch12' */
        VeHVTI_P_HV_Htr4PwrAct = rtb_Gain;
    }

    /* End of Switch: '<S7>/Switch12' */

    /* Switch: '<S7>/Switch13' incorporates:
     *  Constant: '<S508>/Calib'
     *  Constant: '<S533>/Calib'
     */
    if (KeHVTR_b_SDS_HV_PwrOvrd)
    {
        rtb_Product_k4 = KeHVTR_P_SDS_HV_PwrOvrdVal;
    }

    /* End of Switch: '<S7>/Switch13' */

    /* Abs: '<S7>/Abs' incorporates:
     *  Constant: '<S7>/Constant Value'
     *  Product: '<S7>/Multiplication3'
     */
    VeHVTI_P_HV_SDS_HV_PwrAvg = fabsf(rtb_Product_k4 * 0.001F);

    /* Outputs for Atomic SubSystem: '<S7>/Limiter' */
    /* Switch: '<S548>/Switch1' incorporates:
     *  Constant: '<S501>/Calib'
     *  RelationalOperator: '<S548>/Relational Operator'
     */
    if (KeHVTR_I_MaxIDCR_Current < rtb_TmpSignalConversionAtVeIDCR)
    {
        /* Switch: '<S548>/Switch1' */
        rtb_TmpSignalConversionAtVeIDCR = KeHVTR_I_MaxIDCR_Current;
    }

    /* End of Switch: '<S548>/Switch1' */

    /* Switch: '<S548>/Switch' incorporates:
     *  Constant: '<S502>/Calib'
     *  RelationalOperator: '<S548>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeIDCR > KeHVTR_I_MinIDCR_Current)
    {
        /* Switch: '<S548>/Switch' */
        VeHVTI_I_ChrgCurrent = rtb_TmpSignalConversionAtVeIDCR;
    }
    else
    {
        /* Switch: '<S548>/Switch' */
        VeHVTI_I_ChrgCurrent = KeHVTR_I_MinIDCR_Current;
    }

    /* End of Switch: '<S548>/Switch' */
    /* End of Outputs for SubSystem: '<S7>/Limiter' */

    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S521>/Calib'
     */
    if (KeHVTR_b_Htr2_CrntOvrd)
    {
        /* Switch: '<S7>/Switch3' incorporates:
         *  Constant: '<S499>/Calib'
         */
        VeHVTI_I_HV_Htr2_HV_CrntAct = KeHVTR_I_Htr2_CrntOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch3' */
        VeHVTI_I_HV_Htr2_HV_CrntAct = rtb_Multiplication1;
    }

    /* End of Switch: '<S7>/Switch3' */

    /* Switch: '<S7>/Switch5' incorporates:
     *  Constant: '<S524>/Calib'
     */
    if (KeHVTR_b_Htr4_CrntOvrd)
    {
        /* Switch: '<S7>/Switch5' incorporates:
         *  Constant: '<S500>/Calib'
         */
        VeHVTI_I_HV_Htr4_HV_CrntAct = KeHVTR_I_Htr4_CrntOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch5' */
        VeHVTI_I_HV_Htr4_HV_CrntAct = rtb_Switch3;
    }

    /* End of Switch: '<S7>/Switch5' */

    /* Switch: '<S7>/Switch6' incorporates:
     *  Constant: '<S513>/Calib'
     */
    if (KeHVTR_b_APMHVValidOvrdEnb)
    {
        /* Switch: '<S7>/Switch6' incorporates:
         *  Constant: '<S512>/Calib'
         */
        VeHVTI_b_APM_HV_VoltageFA = KeHVTR_b_APMHVValidOvrd;
    }
    else
    {
        /* Switch: '<S7>/Switch6' */
        VeHVTI_b_APM_HV_VoltageFA = rtb_Logical22;
    }

    /* End of Switch: '<S7>/Switch6' */

    /* Switch: '<S7>/Switch14' incorporates:
     *  Constant: '<S515>/Calib'
     */
    if (KeHVTR_b_ChargeTypeOvrd)
    {
        /* Switch: '<S7>/Switch14' incorporates:
         *  Constant: '<S537>/Calib'
         */
        VeHVTI_e_ChargeType = KeHVTR_e_ChargeTypeOvrVal;
    }
    else
    {
        /* Switch: '<S7>/Switch14' incorporates:
         *  Inport: '<Root>/VeOBCR_e_ChargeType'
         */
        VeHVTI_e_ChargeType = tmpRead_3;
    }

    /* End of Switch: '<S7>/Switch14' */

    /* Switch: '<S7>/Switch8' incorporates:
     *  Constant: '<S490>/Calib'
     *  Constant: '<S7>/Constant Value7'
     *  RelationalOperator: '<S7>/Relational Operator6'
     */
    if (((sint32)KeHVTR_Cnt_MCPA_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch8' incorporates:
         *  Constant: '<S543>/Calib'
         */
        VeHVTI_e_MCPA_HVILSts = KeHVTR_e_MCPA_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch8' incorporates:
         *  Inport: '<Root>/VeINVR_e_MCPA_HVILSts'
         */
        VeHVTI_e_MCPA_HVILSts = tmpRead_4;
    }

    /* End of Switch: '<S7>/Switch8' */

    /* Switch: '<S7>/Switch17' incorporates:
     *  Constant: '<S489>/Calib'
     *  Constant: '<S7>/Constant Value8'
     *  RelationalOperator: '<S7>/Relational Operator7'
     */
    if (((sint32)KeHVTR_Cnt_MCPA_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch17' incorporates:
         *  Constant: '<S529>/Calib'
         */
        VeHVTI_b_MCPA_HVILStsFA = KeHVTR_b_MCPA_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch17' */
        VeHVTI_b_MCPA_HVILStsFA = rtb_Logical5;
    }

    /* End of Switch: '<S7>/Switch17' */

    /* Switch: '<S7>/Switch18' incorporates:
     *  Constant: '<S492>/Calib'
     *  Constant: '<S7>/Constant Value9'
     *  RelationalOperator: '<S7>/Relational Operator8'
     */
    if (((sint32)KeHVTR_Cnt_MCPB_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch18' incorporates:
         *  Constant: '<S544>/Calib'
         */
        VeHVTI_e_MCPB_HVILSts = KeHVTR_e_MCPB_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch18' incorporates:
         *  Inport: '<Root>/VeINVR_e_MCPB_HVILSts'
         */
        VeHVTI_e_MCPB_HVILSts = tmpRead_5;
    }

    /* End of Switch: '<S7>/Switch18' */

    /* Switch: '<S7>/Switch19' incorporates:
     *  Constant: '<S491>/Calib'
     *  Constant: '<S7>/Constant Value10'
     *  RelationalOperator: '<S7>/Relational Operator9'
     */
    if (((sint32)KeHVTR_Cnt_MCPB_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch19' incorporates:
         *  Constant: '<S530>/Calib'
         */
        VeHVTI_b_MCPB_HVILStsFA = KeHVTR_b_MCPB_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch19' */
        VeHVTI_b_MCPB_HVILStsFA = rtb_Logical11_o;
    }

    /* End of Switch: '<S7>/Switch19' */

    /* Switch: '<S7>/Switch20' incorporates:
     *  Constant: '<S496>/Calib'
     *  Constant: '<S7>/Constant Value11'
     *  RelationalOperator: '<S7>/Relational Operator10'
     */
    if (((sint32)KeHVTR_Cnt_OBCM_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch20' incorporates:
         *  Constant: '<S546>/Calib'
         */
        VeHVTI_e_OBCM_HVILSts = KeHVTR_e_OBCM_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch20' incorporates:
         *  Inport: '<Root>/VeIDCR_e_OBCM_HVILSts'
         */
        VeHVTI_e_OBCM_HVILSts = tmpRead_6;
    }

    /* End of Switch: '<S7>/Switch20' */

    /* Switch: '<S7>/Switch21' incorporates:
     *  Constant: '<S495>/Calib'
     *  Constant: '<S7>/Constant Value12'
     *  RelationalOperator: '<S7>/Relational Operator11'
     */
    if (((sint32)KeHVTR_Cnt_OBCM_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch21' incorporates:
         *  Constant: '<S532>/Calib'
         */
        VeHVTI_b_OBCM_HVILStsFA = KeHVTR_b_OBCM_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch21' */
        VeHVTI_b_OBCM_HVILStsFA = rtb_Logical3_k;
    }

    /* End of Switch: '<S7>/Switch21' */

    /* Switch: '<S7>/Switch24' incorporates:
     *  Constant: '<S475>/Calib'
     *  Constant: '<S7>/Constant Value15'
     *  RelationalOperator: '<S7>/Relational Operator14'
     */
    if (((sint32)KeHVTR_Cnt_BatInrlk_HIVLStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch24' incorporates:
         *  Constant: '<S514>/Calib'
         */
        VeHVTI_b_HV_BatInrlkStatFA = KeHVTR_b_BatInrlk_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch24' */
        VeHVTI_b_HV_BatInrlkStatFA = tmpRead_7;
    }

    /* End of Switch: '<S7>/Switch24' */

    /* Switch: '<S7>/Switch22' incorporates:
     *  Constant: '<S494>/Calib'
     *  Constant: '<S7>/Constant Value13'
     *  RelationalOperator: '<S7>/Relational Operator12'
     */
    if (((sint32)KeHVTR_Cnt_MCPC_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch22' incorporates:
         *  Constant: '<S545>/Calib'
         */
        VeHVTI_e_MCPC_HVILSts = KeHVTR_e_MCPC_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch22' incorporates:
         *  Inport: '<Root>/VeINVR_e_MCPC_HVILSts'
         */
        VeHVTI_e_MCPC_HVILSts = tmpRead_8;
    }

    /* End of Switch: '<S7>/Switch22' */

    /* Switch: '<S7>/Switch23' incorporates:
     *  Constant: '<S493>/Calib'
     *  Constant: '<S7>/Constant Value14'
     *  RelationalOperator: '<S7>/Relational Operator13'
     */
    if (((sint32)KeHVTR_Cnt_MCPC_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch23' incorporates:
         *  Constant: '<S531>/Calib'
         */
        VeHVTI_b_MCPC_HVILStsFA = KeHVTR_b_MCPC_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch23' */
        VeHVTI_b_MCPC_HVILStsFA = rtb_Logical2;
    }

    /* End of Switch: '<S7>/Switch23' */

    /* Switch: '<S7>/Switch27' incorporates:
     *  Constant: '<S477>/Calib'
     *  Constant: '<S7>/Constant Value18'
     *  RelationalOperator: '<S7>/Relational Operator17'
     */
    if (((sint32)KeHVTR_Cnt_ECH_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch27' incorporates:
         *  Constant: '<S538>/Calib'
         */
        VeHVTI_e_ECH_HVILSts = KeHVTR_e_ECH_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch27' incorporates:
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr_InterlockStat'
         */
        VeHVTI_e_ECH_HVILSts = tmpRead_9;
    }

    /* End of Switch: '<S7>/Switch27' */

    /* Switch: '<S7>/Switch26' incorporates:
     *  Constant: '<S476>/Calib'
     *  Constant: '<S7>/Constant Value17'
     *  RelationalOperator: '<S7>/Relational Operator16'
     */
    if (((sint32)KeHVTR_Cnt_ECH_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch26' incorporates:
         *  Constant: '<S516>/Calib'
         */
        VeHVTI_b_ECH_HVILSts_FA = KeHVTR_b_ECH_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch26' */
        VeHVTI_b_ECH_HVILSts_FA = rtb_Logical1;
    }

    /* End of Switch: '<S7>/Switch26' */

    /* Switch: '<S7>/Switch25' incorporates:
     *  Constant: '<S498>/Calib'
     *  Constant: '<S7>/Constant Value16'
     *  RelationalOperator: '<S7>/Relational Operator15'
     */
    if (((sint32)KeHVTR_Cnt_V2X_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch25' incorporates:
         *  Constant: '<S547>/Calib'
         */
        VeHVTR_e_V2X_HVILSts = KeHVTR_e_V2X_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch25' incorporates:
         *  Inport: '<Root>/VeIDCR_e_V2X_InterlockSts'
         */
        VeHVTR_e_V2X_HVILSts = tmpRead_a;
    }

    /* End of Switch: '<S7>/Switch25' */

    /* Switch: '<S7>/Switch32' incorporates:
     *  Constant: '<S497>/Calib'
     *  Constant: '<S7>/Constant Value23'
     *  RelationalOperator: '<S7>/Relational Operator22'
     */
    if (((sint32)KeHVTR_Cnt_V2X_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch32' incorporates:
         *  Constant: '<S534>/Calib'
         */
        VeHVTR_b_V2X_HVILSts_FA = KeHVTR_b_V2X_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch32' */
        VeHVTR_b_V2X_HVILSts_FA = rtb_Comparison4_a;
    }

    /* End of Switch: '<S7>/Switch32' */

    /* Switch: '<S7>/Switch33' incorporates:
     *  Constant: '<S479>/Calib'
     *  Constant: '<S7>/Constant Value24'
     *  RelationalOperator: '<S7>/Relational Operator23'
     */
    if (((sint32)KeHVTR_Cnt_FCDCDC_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch33' incorporates:
         *  Constant: '<S539>/Calib'
         */
        VeHVTI_e_FC_DCDC_IntrlkStat = KeHVTR_e_FCDCDC_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch33' incorporates:
         *  Inport: '<Root>/VeFCPR_e_FC_DCDC_IntrlkStat'
         */
        VeHVTI_e_FC_DCDC_IntrlkStat = tmpRead_d;
    }

    /* End of Switch: '<S7>/Switch33' */

    /* Switch: '<S7>/Switch34' incorporates:
     *  Constant: '<S478>/Calib'
     *  Constant: '<S7>/Constant Value25'
     *  RelationalOperator: '<S7>/Relational Operator24'
     */
    if (((sint32)KeHVTR_Cnt_FCDCDC_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch34' incorporates:
         *  Constant: '<S517>/Calib'
         */
        VeHVTI_b_FC_DCDC_IntrlkStat_FA = KeHVTR_b_FCDCDC_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch34' */
        VeHVTI_b_FC_DCDC_IntrlkStat_FA = rtb_Logical4;
    }

    /* End of Switch: '<S7>/Switch34' */

    /* Switch: '<S7>/Switch35' incorporates:
     *  Constant: '<S481>/Calib'
     *  Constant: '<S7>/Constant Value26'
     *  RelationalOperator: '<S7>/Relational Operator25'
     */
    if (((sint32)KeHVTR_Cnt_HEAC_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch35' incorporates:
         *  Constant: '<S540>/Calib'
         */
        VeHVTI_e_HEAC_IntrlkStat = KeHVTR_e_HEAC_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch35' incorporates:
         *  Inport: '<Root>/VeFCPR_e_HEAC_IntrlkStat'
         */
        VeHVTI_e_HEAC_IntrlkStat = tmpRead_e;
    }

    /* End of Switch: '<S7>/Switch35' */

    /* Switch: '<S7>/Switch36' incorporates:
     *  Constant: '<S480>/Calib'
     *  Constant: '<S7>/Constant Value27'
     *  RelationalOperator: '<S7>/Relational Operator26'
     */
    if (((sint32)KeHVTR_Cnt_HEAC_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch36' incorporates:
         *  Constant: '<S518>/Calib'
         */
        VeHVTI_b_HEAC_IntrlkStat_FA = KeHVTR_b_HEAC_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch36' */
        VeHVTI_b_HEAC_IntrlkStat_FA = rtb_Comparison2;
    }

    /* End of Switch: '<S7>/Switch36' */

    /* Switch: '<S7>/Switch28' incorporates:
     *  Constant: '<S472>/Calib'
     *  Constant: '<S7>/Constant Value19'
     *  RelationalOperator: '<S7>/Relational Operator18'
     */
    if (((sint32)KeHVTR_Cnt_APM2_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch28' incorporates:
         *  Constant: '<S535>/Calib'
         */
        VeHVTI_e_APM2InterlockSts = KeHVTR_e_APM2_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch28' incorporates:
         *  Inport: '<Root>/VeIDCR_e_APM2InterlockSts'
         */
        VeHVTI_e_APM2InterlockSts = tmpRead_b;
    }

    /* End of Switch: '<S7>/Switch28' */

    /* Switch: '<S7>/Switch29' incorporates:
     *  Constant: '<S471>/Calib'
     *  Constant: '<S7>/Constant Value20'
     *  RelationalOperator: '<S7>/Relational Operator19'
     */
    if (((sint32)KeHVTR_Cnt_APM2_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch29' incorporates:
         *  Constant: '<S510>/Calib'
         */
        VeHVTI_b_APM2InterlockSts_FA = KeHVTR_b_APM2_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch29' */
        VeHVTI_b_APM2InterlockSts_FA = rtb_Logical1_el;
    }

    /* End of Switch: '<S7>/Switch29' */

    /* Switch: '<S7>/Switch30' incorporates:
     *  Constant: '<S474>/Calib'
     *  Constant: '<S7>/Constant Value21'
     *  RelationalOperator: '<S7>/Relational Operator20'
     */
    if (((sint32)KeHVTR_Cnt_APM3_HVILStsOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch30' incorporates:
         *  Constant: '<S536>/Calib'
         */
        VeHVTI_e_APM3InterlockSts = KeHVTR_e_APM3_HVILSts;
    }
    else
    {
        /* Switch: '<S7>/Switch30' incorporates:
         *  Inport: '<Root>/VeIDCR_e_APM3InterlockSts'
         */
        VeHVTI_e_APM3InterlockSts = tmpRead_c;
    }

    /* End of Switch: '<S7>/Switch30' */

    /* Switch: '<S7>/Switch31' incorporates:
     *  Constant: '<S473>/Calib'
     *  Constant: '<S7>/Constant Value22'
     *  RelationalOperator: '<S7>/Relational Operator21'
     */
    if (((sint32)KeHVTR_Cnt_APM3_HVILStsFAOvrd) == 13257)
    {
        /* Switch: '<S7>/Switch31' incorporates:
         *  Constant: '<S511>/Calib'
         */
        VeHVTI_b_APM3InterlockSts_FA = KeHVTR_b_APM3_HVILStsFA;
    }
    else
    {
        /* Switch: '<S7>/Switch31' */
        VeHVTI_b_APM3InterlockSts_FA = rtb_AND_li;
    }

    /* End of Switch: '<S7>/Switch31' */

    /* SignalConversion generated from: '<S7>/VeHVTR_t_dt' incorporates:
     *  Constant: '<S549>/Calib'
     */
    HVTR_ac_B.OutportBufferForVeHVTR_t_dt = HeHVTR_t_dT;

    /* Update for UnitDelay: '<S460>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatInrlkStat'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_o2 = rtb_TmpSignalConversionAtVeBPCR;

    /* Update for UnitDelay: '<S602>/Unit Delay2' */
    HVTR_ac_DW.UnitDelay2_DSTATE = rtb_Switch1_hk;

    /* Update for UnitDelay: '<S460>/Unit Delay1' incorporates:
     *  Switch: '<S460>/Switch'
     */
    HVTR_ac_DW.UnitDelay1_DSTATE_j = VeHVTI_e_HV_BatIntrlkStatDebounced;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Switch: '<S13>/Switch5' incorporates:
     *  Constant: '<S449>/Calib'
     *  DataStoreWrite: '<S13>/Data Store Write1'
     *  DataStoreWrite: '<S13>/Data Store Write2'
     *  DataStoreWrite: '<S13>/Data Store Write3'
     *  DataStoreWrite: '<S13>/Data Store Write4'
     *  DataStoreWrite: '<S13>/Data Store Write5'
     *  Logic: '<S13>/Logical1'
     *  Logic: '<S13>/Logical10'
     *  Logic: '<S13>/Logical11'
     *  Logic: '<S13>/Logical2'
     *  Logic: '<S13>/Logical3'
     *  Logic: '<S13>/Logical4'
     *  Logic: '<S13>/Logical5'
     *  Logic: '<S13>/Logical6'
     *  Logic: '<S13>/Logical7'
     *  Logic: '<S13>/Logical8'
     *  Logic: '<S13>/Logical9'
     *  Product: '<S13>/Product'
     *  Product: '<S13>/Product1'
     *  RelationalOperator: '<S13>/Comparison1'
     *  RelationalOperator: '<S13>/Comparison2'
     *  RelationalOperator: '<S13>/Comparison5'
     *  RelationalOperator: '<S13>/Comparison6'
     *  RelationalOperator: '<S13>/Comparison8'
     *  Sum: '<S13>/Sum5'
     *  Switch: '<S13>/Switch1'
     *  Switch: '<S13>/Switch2'
     *  Switch: '<S13>/Switch3'
     *  Switch: '<S13>/Switch4'
     *  UnitDelay: '<S13>/Unit Delay'
     */
#if Rte_SysCon_Variant_HVTR_AntiTemp

    /* Outputs for Atomic SubSystem: '<S13>/EdgeFalling4' */
    /* Outputs for Atomic SubSystem: '<S13>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising6' */
    /* Outputs for Atomic SubSystem: '<S13>/Counter Reset  Enabled ' */
    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S13>/EdgeFalling5' */
    /* Outputs for Atomic SubSystem: '<S13>/IntegratorT Reset Enabled Limited' */
    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising2' */
    /* Logic: '<S445>/AND' incorporates:
     *  Constant: '<S452>/Calib'
     *  Logic: '<S445>/OR1'
     *  UnitDelay: '<S445>/Unit Delay'
     */
    rtb_AND_ix = ((KeHVTR_b_AntiTamp_ResetCounter) &&
                  (!HVTR_ac_DW.UnitDelay_DSTATE_ic));

    /* Update for UnitDelay: '<S445>/Unit Delay' incorporates:
     *  Constant: '<S452>/Calib'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ic = KeHVTR_b_AntiTamp_ResetCounter;
    if (rtb_AND_ix)
    {
        /* Switch: '<S13>/Switch5' incorporates:
         *  Constant: '<S13>/Constant Value3'
         */
        rtb_VeHVTR_Cnt_AntiTamp_NbrOfFa = 0U;
    }
    else
    {
        /* Switch: '<S13>/Switch5' incorporates:
         *  DataStoreRead: '<S13>/Data Store Read9'
         */
        rtb_VeHVTR_Cnt_AntiTamp_NbrOfFa = HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter;
    }

    HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter = rtb_VeHVTR_Cnt_AntiTamp_NbrOfFa;

    /* Merge: '<S9>/Merge3' */
    rtb_Merge3 = VeHVTI_I_HV_BatCurr - VeHVTI_I_APM_HV_Current;

    /* Product: '<S13>/Product1' incorporates:
     *  Constant: '<S13>/Constant Value7'
     */
    VeHVTR_I_AntiTamp_Test1 = rtb_Merge3 / 3600.0F;

    /* RelationalOperator: '<S13>/Comparison5' incorporates:
     *  Constant: '<S451>/Calib'
     */
    VeHVTR_b_AntiTamp_Test1 = (rtb_Merge3 > KeHVTR_I_AntiTamp_MaxCurrDelta);

    /* RelationalOperator: '<S13>/Comparison1' incorporates:
     *  Constant: '<S439>/Constant'
     *  DataTypeConversion: '<S468>/DataTypeConversion'
     */
    rtb_AND_ix = (((uint32)VeHVTI_e_HybStrtrSt) == CeSTRR_e_EngOffSt);

    /* Logic: '<S13>/Logical6' */
    VeHVTR_b_AntiTamp_Test2 = (((VeHVTR_b_AntiTamp_Test1) && rtb_AND_ix) &&
        (!VeHVTI_b_APM_HV_CurrentFA));

    /* RelationalOperator: '<S13>/Comparison2' incorporates:
     *  Constant: '<S447>/Constant'
     *  DataTypeConversion: '<S467>/DataTypeConversion'
     */
    rtb_Comparison2 = (((uint32)VeHVTI_e_PMM_PowerMode) ==
                       CePMDR_e_PowerMode_Run);

    /* Logic: '<S13>/Logical4' */
    rtb_Logical4 = !rtb_Comparison2;

    /* Outputs for Atomic SubSystem: '<S456>/EdgeRising' */
    /* Logic: '<S458>/AND' incorporates:
     *  Logic: '<S458>/OR1'
     *  UnitDelay: '<S458>/Unit Delay'
     */
    rtb_AND_li = (rtb_Logical4 && (!HVTR_ac_DW.UnitDelay_DSTATE_o1h));

    /* Update for UnitDelay: '<S458>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_o1h = rtb_Logical4;

    /* End of Outputs for SubSystem: '<S456>/EdgeRising' */

    /* Switch: '<S456>/Switch1' incorporates:
     *  Constant: '<S456>/Constant Value'
     *  Logic: '<S456>/OR'
     *  Logic: '<S456>/OR1'
     *  MinMax: '<S456>/Minimum'
     *  Sum: '<S456>/Summation'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    if ((!rtb_Logical4) || rtb_AND_li)
    {
        /* Switch: '<S456>/Switch1' incorporates:
         *  Constant: '<S456>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (3 < ((sint32)((uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_cq) +
                1U))))
    {
        /* MinMax: '<S456>/Minimum' incorporates:
         *  Switch: '<S456>/Switch1'
         */
        rtb_Switch1_hr = 3U;
    }
    else
    {
        /* Switch: '<S456>/Switch1' incorporates:
         *  Constant: '<S456>/Constant Value'
         *  MinMax: '<S456>/Minimum'
         *  Sum: '<S456>/Summation'
         *  UnitDelay: '<S456>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_cq) + 1U);
    }

    /* End of Switch: '<S456>/Switch1' */

    /* Update for UnitDelay: '<S456>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_cq = rtb_Switch1_hr;

    /* Switch: '<S448>/Switch' incorporates:
     *  Constant: '<S13>/Constant Value15'
     *  Logic: '<S456>/AND'
     *  RelationalOperator: '<S456>/Greater  Than'
     *  Switch: '<S448>/Switch1'
     */
    if (rtb_Logical4 && (((sint32)rtb_Switch1_hr) >= 3))
    {
        /* Switch: '<S448>/Switch' incorporates:
         *  Constant: '<S13>/Constant Value11'
         */
        rtb_TmpSignalConversionAtVeIDCR = 0.0F;
    }
    else if (VeHVTR_b_AntiTamp_Test2)
    {
        /* Switch: '<S448>/Switch1' incorporates:
         *  Product: '<S448>/Multiplication'
         *  Sum: '<S448>/Sum//Sub'
         *  Switch: '<S448>/Switch'
         *  UnitDelay: '<S448>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeIDCR = (VeHVTR_I_AntiTamp_Test1 * 0.0125F) +
            HVTR_ac_DW.UnitDelay_DSTATE;
    }
    else
    {
        /* Switch: '<S448>/Switch' incorporates:
         *  Switch: '<S448>/Switch1'
         *  UnitDelay: '<S448>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeIDCR = HVTR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S448>/Switch' */

    /* Outputs for Atomic SubSystem: '<S448>/Limiter' */
    /* Switch: '<S457>/Switch1' incorporates:
     *  Constant: '<S13>/Constant Value13'
     *  RelationalOperator: '<S457>/Relational Operator'
     */
    if (10000.0F < rtb_TmpSignalConversionAtVeIDCR)
    {
        /* Switch: '<S128>/Switch1' */
        rtb_Switch1_ad = 10000.0F;
    }
    else
    {
        /* Switch: '<S128>/Switch1' */
        rtb_Switch1_ad = rtb_TmpSignalConversionAtVeIDCR;
    }

    /* End of Switch: '<S457>/Switch1' */

    /* Switch: '<S457>/Switch' incorporates:
     *  Constant: '<S13>/Constant Value14'
     *  RelationalOperator: '<S457>/Relational Operator1'
     */
    if (rtb_Switch1_ad > 0.0F)
    {
        /* Switch: '<S457>/Switch' */
        VeHVTR_q_AntiTamp_Test1 = rtb_Switch1_ad;
    }
    else
    {
        /* Switch: '<S457>/Switch' */
        VeHVTR_q_AntiTamp_Test1 = 0.0F;
    }

    /* End of Switch: '<S457>/Switch' */
    /* End of Outputs for SubSystem: '<S448>/Limiter' */

    /* Update for UnitDelay: '<S448>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE = VeHVTR_q_AntiTamp_Test1;

    /* RelationalOperator: '<S13>/Comparison6' incorporates:
     *  Constant: '<S450>/Calib'
     *  Constant: '<S454>/Calib'
     */
    VeHVTR_b_AntiTamp_Test3 = (VeHVTR_q_AntiTamp_Test1 >
        (KeHVTR_q_AntiTamp_MaxAhLost * KeHVTR_Cnt_AntiTamp_NbrAhFailWindows));

    /* Logic: '<S443>/OR1' incorporates:
     *  Logic: '<S441>/OR1'
     *  Logic: '<S442>/OR1'
     */
    rtb_AND_li = !rtb_Comparison2;

    /* Logic: '<S443>/AND' incorporates:
     *  Logic: '<S443>/OR1'
     *  UnitDelay: '<S443>/Unit Delay'
     */
    VeHVTR_b_AntiTamp_Test8 = (rtb_AND_li && (HVTR_ac_DW.UnitDelay_DSTATE_mc));

    /* Update for UnitDelay: '<S443>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_mc = rtb_Comparison2;

    /* Logic: '<S444>/AND' incorporates:
     *  Logic: '<S444>/OR1'
     *  UnitDelay: '<S444>/Unit Delay'
     */
    rtb_Logical4 = (rtb_AND_ix && (!HVTR_ac_DW.UnitDelay_DSTATE_kz));

    /* Update for UnitDelay: '<S444>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_kz = rtb_AND_ix;

    /* Switch: '<S440>/Switch1' incorporates:
     *  Switch: '<S440>/Switch2'
     */
    if (HVTR_ac_DW.UnitDelay_DSTATE_of)
    {
        /* Switch: '<S440>/Switch1' incorporates:
         *  Constant: '<S440>/Constant Value2'
         */
        VeHVTR_Cnt_AntiTamp_AutoS_Count = 0.0F;
    }
    else if (rtb_Logical4)
    {
        /* Switch: '<S440>/Switch2' incorporates:
         *  Constant: '<S440>/Constant Value1'
         *  Sum: '<S440>/Subtraction'
         *  Switch: '<S440>/Switch1'
         *  UnitDelay: '<S440>/Unit Delay'
         */
        VeHVTR_Cnt_AntiTamp_AutoS_Count = HVTR_ac_DW.UnitDelay_DSTATE_o + 1.0F;
    }
    else
    {
        /* Switch: '<S440>/Switch1' incorporates:
         *  Switch: '<S440>/Switch2'
         *  UnitDelay: '<S440>/Unit Delay'
         */
        VeHVTR_Cnt_AntiTamp_AutoS_Count = HVTR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S440>/Switch1' */

    /* Update for UnitDelay: '<S440>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_o = VeHVTR_Cnt_AntiTamp_AutoS_Count;
    VeHVTR_Cnt_AntiTamp_Test10 = KeHVTR_Cnt_AntiTamp_MinAutoStops;

    /* Logic: '<S107>/Logical1' incorporates:
     *  Constant: '<S449>/Calib'
     */
    rtb_Logical1_el = (VeHVTR_Cnt_AntiTamp_AutoS_Count >= ((float32)
                        VeHVTR_Cnt_AntiTamp_Test10));

    /* Logic: '<S13>/Logical7' */
    rtb_AND_ix = (((VeHVTR_b_AntiTamp_Test3) && (VeHVTR_b_AntiTamp_Test8)) &&
                  rtb_Logical1_el);

    /* Logic: '<S446>/AND' incorporates:
     *  Logic: '<S446>/OR1'
     *  UnitDelay: '<S446>/Unit Delay'
     */
    VeHVTR_b_AntiTamp_Test5 = (rtb_AND_ix && (!HVTR_ac_DW.UnitDelay_DSTATE_ms));

    /* Update for UnitDelay: '<S446>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_ms = rtb_AND_ix;

    /* Logic: '<S13>/Logical1' incorporates:
     *  Constant: '<S453>/Calib'
     *  DataStoreRead: '<S13>/Data Store Read2'
     */
    VeHVTR_b_AntiTamp_Test11 = ((HVTR_ac_DW.NeHVTR_b_AntiTampFailed) ||
        (KeHVTR_b_AntiTamp_UsePrev));

    /* RelationalOperator: '<S107>/Comparison4' */
    rtb_Comparison4_a = ((VeHVTR_b_AntiTamp_Test5) && (VeHVTR_b_AntiTamp_Test11));
    if (rtb_Comparison4_a)
    {
        /* MinMax: '<S13>/MinMax' incorporates:
         *  DataStoreRead: '<S13>/Data Store Read1'
         */
        if (((sint32)HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter) < 65500)
        {
            rtb_Switch1_hr = HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter;
        }
        else
        {
            rtb_Switch1_hr = 65500U;
        }

        /* End of MinMax: '<S13>/MinMax' */

        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S13>/Constant Value5'
         *  Sum: '<S13>/Sum4'
         */
        VeHVTR_Cnt_AntiTamp_Test12 = (uint16)(((uint32)rtb_Switch1_hr) + 1U);
    }
    else
    {
        /* Switch: '<S13>/Switch2' incorporates:
         *  DataStoreRead: '<S13>/Data Store Read3'
         */
        VeHVTR_Cnt_AntiTamp_Test12 = HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter;
    }

    HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter = VeHVTR_Cnt_AntiTamp_Test12;
    rtb_AND_ix = !rtb_Comparison4_a;

    /* Logic: '<S13>/Logical2' */
    VeHVTR_b_AntiTamp_Test13 = ((VeHVTR_b_AntiTamp_Test5) && rtb_AND_ix);
    HVTR_ac_DW.NeHVTR_b_AntiTampFailed = ((VeHVTR_b_AntiTamp_Test13) ||
        (HVTR_ac_DW.NeHVTR_b_AntiTampFailed));
    HVTR_ac_DW.NeHVTR_b_AntiTampFailed = (rtb_AND_ix &&
        (HVTR_ac_DW.NeHVTR_b_AntiTampFailed));

    /* Logic: '<S441>/AND' incorporates:
     *  DataStoreWrite: '<S13>/Data Store Write2'
     *  DataStoreWrite: '<S13>/Data Store Write3'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    rtb_AND_ix = (rtb_AND_li && (HVTR_ac_DW.UnitDelay_DSTATE_nd));

    /* Update for UnitDelay: '<S441>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_nd = rtb_Comparison2;

    /* Logic: '<S13>/Logical8' */
    VeHVTR_b_AntiTamp_Test14 = ((!VeHVTR_b_AntiTamp_Test5) && (rtb_AND_ix &&
        rtb_Logical1_el));
    HVTR_ac_DW.NeHVTR_b_AntiTampFailed = ((!VeHVTR_b_AntiTamp_Test14) &&
        (HVTR_ac_DW.NeHVTR_b_AntiTampFailed));

    /* Logic: '<S442>/AND' incorporates:
     *  DataStoreWrite: '<S13>/Data Store Write4'
     *  UnitDelay: '<S442>/Unit Delay'
     */
    rtb_AND_ix = (rtb_AND_li && (HVTR_ac_DW.UnitDelay_DSTATE_dk));

    /* Update for UnitDelay: '<S442>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_dk = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S13>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S13>/IntegratorT Reset Enabled Limited' */
    /* End of Outputs for SubSystem: '<S13>/EdgeFalling5' */
    /* End of Outputs for SubSystem: '<S13>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S13>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S13>/EdgeRising6' */
    /* End of Outputs for SubSystem: '<S13>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S13>/EdgeFalling4' */
#endif

    /* End of Switch: '<S13>/Switch5' */

    /* Switch: '<S8>/Switch3' */
    if (VeHVTI_b_APM_HV_CurrentFA)
    {
        /* Switch: '<S8>/Switch3' incorporates:
         *  Constant: '<S8>/Initial Value6'
         */
        rtb_Switch3 = 0.0F;
    }
    else
    {
        /* Switch: '<S8>/Switch3' */
        rtb_Switch3 = VeHVTI_I_APM_HV_Current;
    }

    /* End of Switch: '<S8>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */
    /* Sum: '<S24>/Summation' incorporates:
     *  Constant: '<S51>/Calib'
     *  Product: '<S24>/Multiplication'
     *  Sum: '<S24>/Subtraction'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeIDCR = ((rtb_Switch3 -
        HVTR_ac_DW.UnitDelay_DSTATE_ej) * KeHVTR_k_APMCurrFilt) +
        HVTR_ac_DW.UnitDelay_DSTATE_ej;

    /* Update for UnitDelay: '<S24>/Unit Delay' incorporates:
     *  Switch: '<S24>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ej = rtb_TmpSignalConversionAtVeIDCR;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled10' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  UnitDelay: '<S25>/Unit Delay'
     */
    rtb_Switch1_ad = HVTR_ac_DW.UnitDelay_DSTATE_ih;

    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S59>/Calib'
     *  Product: '<S25>/Multiplication'
     *  Sum: '<S25>/Subtraction'
     *  Sum: '<S25>/Summation'
     */
    VeHVTC_P_Htr2PwrFiltered = ((VeHVTI_P_HV_Htr2PwrAct - rtb_Switch1_ad) *
        KeHVTR_k_Htr2PwrFilt) + rtb_Switch1_ad;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_ih = VeHVTC_P_Htr2PwrFiltered;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled10' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled11' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  UnitDelay: '<S26>/Unit Delay'
     */
    rtb_Switch1_ad = HVTR_ac_DW.UnitDelay_DSTATE_dl;

    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Product: '<S26>/Multiplication'
     *  Sum: '<S26>/Subtraction'
     *  Sum: '<S26>/Summation'
     */
    VeHVTC_P_Htr4PwrFiltered = ((VeHVTI_P_HV_Htr4PwrAct - rtb_Switch1_ad) *
        KeHVTR_k_Htr4PwrFilt) + rtb_Switch1_ad;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_dl = VeHVTC_P_Htr4PwrFiltered;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled11' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled12' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  UnitDelay: '<S27>/Unit Delay'
     */
    rtb_Switch1_ad = HVTR_ac_DW.UnitDelay_DSTATE_n2;

    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S61>/Calib'
     *  Product: '<S27>/Multiplication'
     *  Sum: '<S27>/Subtraction'
     *  Sum: '<S27>/Summation'
     */
    VeHVTC_P_Htr3PwrFiltered = ((VeHVTI_P_HV_Htr3PwrAct - rtb_Switch1_ad) *
        KeHVTR_k_Htr3PwrFilt) + rtb_Switch1_ad;

    /* Update for UnitDelay: '<S27>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_n2 = VeHVTC_P_Htr3PwrFiltered;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled12' */

    /* Product: '<S8>/Multiplication1' incorporates:
     *  Constant: '<S8>/Constant Value2'
     */
    rtb_Multiplication1 = VeHVTC_P_Htr3PwrFiltered * 0.001F;

    /* RelationalOperator: '<S107>/Comparison4' incorporates:
     *  Constant: '<S130>/Constant'
     *  DataTypeConversion: '<S464>/DataTypeConversion'
     */
    rtb_Comparison4_a = (CeHVTR_e_Closed == ((uint32)VeHVTI_e_HV_BatCntctrStat));

    /* Logic: '<S107>/Logical1' incorporates:
     *  Constant: '<S150>/Calib'
     */
    rtb_Logical1_el = ((KeHVTR_b_DevCalUseHVBatV) && rtb_Comparison4_a);

    /* Sum: '<S107>/Sum' incorporates:
     *  Sum: '<S107>/Sum1'
     */
    rtb_Gain = VeHVTI_U_MtrA_DC_Volt + VeHVTI_U_MtrB_DC_Volt;

    /* Product: '<S107>/Product' incorporates:
     *  Constant: '<S107>/Constant Value1'
     *  Sum: '<S107>/Sum'
     */
    rtb_Product_k4 = (rtb_Gain + VeHVTI_U_MtrC_DC_Volt) * 0.33F;

    /* UnitDelay: '<S175>/Unit Delay' incorporates:
     *  Constant: '<S157>/Calib'
     *  Logic: '<S151>/Logical16'
     */
    rtb_Comparison2 = !KeHVTR_b_MCPC_Enbl;

    /* Logic: '<S151>/Logical1' incorporates:
     *  Constant: '<S155>/Calib'
     *  Constant: '<S156>/Calib'
     *  Logic: '<S151>/Logical11'
     *  Logic: '<S151>/Logical2'
     *  Logic: '<S151>/Logical3'
     *  Logic: '<S151>/Logical4'
     */
    rtb_Logical3_k = !VeHVTI_b_MtrB_DC_VoltFA;
    rtb_Logical11_o = !KeHVTR_b_DsblMtrBV;
    rtb_Logical2 = ((!VeHVTI_b_MtrA_DC_VoltFA) && (!KeHVTR_b_DsblMtrAV));
    tmpRead_7 = ((rtb_Logical2 && rtb_Logical3_k) && rtb_Logical11_o);
    rtb_Logical4 = !VeHVTI_b_MtrC_DC_VoltFA;
    rtb_AND_li = !rtb_Comparison2;

    /* Logic: '<S151>/Logical1' */
    rtb_Logical1 = ((tmpRead_7 && rtb_Logical4) && rtb_AND_li);

    /* Gain: '<S107>/Gain' */
    rtb_Gain *= 0.5F;

    /* Logic: '<S151>/Logical3' */
    rtb_Logical3_k = (rtb_Logical3_k && rtb_Logical11_o);

    /* Logic: '<S151>/Logical11' */
    rtb_Logical11_o = (rtb_Logical4 && rtb_AND_li);

    /* Logic: '<S151>/Logical5' incorporates:
     *  Constant: '<S152>/Calib'
     */
    rtb_Logical5 = ((!VeHVTI_b_APM_HV_VoltageFA) && (!KeHVTR_b_DsablAPMHV_Varb));

    /* Logic: '<S151>/Logical22' incorporates:
     *  Constant: '<S153>/Calib'
     */
    rtb_Logical22 = ((!VeHVTI_b_CompHVInp_FA) && (!KeHVTR_b_Dsabl_HVAC));

    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S107>/Constant Value'
     *  Switch: '<S129>/Switch11'
     *  Switch: '<S129>/Switch13'
     *  Switch: '<S129>/Switch15'
     *  Switch: '<S129>/Switch2'
     *  Switch: '<S129>/Switch3'
     *  Switch: '<S129>/Switch5'
     *  Switch: '<S129>/Switch6'
     */
    if (rtb_Logical1_el)
    {
        rtb_Switch3_m = VeHVTI_U_HV_BatVolt;
    }
    else if (rtb_Logical1)
    {
        /* Switch: '<S129>/Switch2' */
        rtb_Switch3_m = rtb_Product_k4;
    }
    else if (tmpRead_7)
    {
        /* Switch: '<S129>/Switch3' incorporates:
         *  Switch: '<S129>/Switch2'
         */
        rtb_Switch3_m = rtb_Gain;
    }
    else if (rtb_Logical3_k)
    {
        /* Switch: '<S129>/Switch5' incorporates:
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         */
        rtb_Switch3_m = VeHVTI_U_MtrB_DC_Volt;
    }
    else if (rtb_Logical2)
    {
        /* Switch: '<S129>/Switch6' incorporates:
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         *  Switch: '<S129>/Switch5'
         */
        rtb_Switch3_m = VeHVTI_U_MtrA_DC_Volt;
    }
    else if (rtb_Logical11_o)
    {
        /* Switch: '<S129>/Switch11' incorporates:
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         *  Switch: '<S129>/Switch5'
         *  Switch: '<S129>/Switch6'
         */
        rtb_Switch3_m = VeHVTI_U_MtrC_DC_Volt;
    }
    else if (rtb_Logical5)
    {
        /* Switch: '<S129>/Switch13' incorporates:
         *  Switch: '<S129>/Switch11'
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         *  Switch: '<S129>/Switch5'
         *  Switch: '<S129>/Switch6'
         */
        rtb_Switch3_m = VeHVTI_U_APM_HV_Voltage;
    }
    else if (rtb_Logical22)
    {
        /* Switch: '<S129>/Switch15' incorporates:
         *  Switch: '<S129>/Switch11'
         *  Switch: '<S129>/Switch13'
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         *  Switch: '<S129>/Switch5'
         *  Switch: '<S129>/Switch6'
         */
        rtb_Switch3_m = VeHVTI_U_CompHVInp;
    }
    else
    {
        rtb_Switch3_m = 0.01F;
    }

    /* End of Switch: '<S129>/Switch1' */

    /* MinMax: '<S107>/MinMax1' incorporates:
     *  Constant: '<S107>/Constant Value2'
     */
    VeHVTC_U_HV_Volt = fmaxf(rtb_Switch3_m, 0.01F);

    /* Switch: '<S10>/Switch3' */
    if (VeHVTI_b_HV_BatVoltFA)
    {
        /* Switch: '<S10>/Switch3' */
        rtb_Switch3_m = VeHVTC_U_HV_Volt;
    }
    else
    {
        /* Switch: '<S10>/Switch3' */
        rtb_Switch3_m = VeHVTI_U_HV_BatVolt;
    }

    /* End of Switch: '<S10>/Switch3' */

    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KeHVTR_b_UseBatVolt)
    {
        /* Switch: '<S8>/Switch4' */
        rtb_Switch4 = rtb_Switch3_m;
    }
    else
    {
        /* Switch: '<S8>/Switch4' */
        rtb_Switch4 = VeHVTC_U_HV_Volt;
    }

    /* End of Switch: '<S8>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S8>/Protected Division' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S67>/Constant Value'
     *  Constant: '<S67>/Constant Value1'
     *  Constant: '<S67>/Constant Value2'
     *  Constant: '<S67>/Constant Value3'
     *  Logic: '<S67>/AND'
     *  RelationalOperator: '<S67>/Greater Than or Equal '
     *  RelationalOperator: '<S67>/Greater Than or Equal 1'
     *  RelationalOperator: '<S67>/Not Equal'
     *  RelationalOperator: '<S67>/Not Equal1'
     *  Switch: '<S67>/Switch2'
     *  Switch: '<S67>/Switch3'
     */
    if ((rtb_Multiplication1 != 0.0F) && (rtb_Switch4 != 0.0F))
    {
        /* Switch: '<S67>/Switch1' incorporates:
         *  Product: '<S67>/Division'
         */
        rtb_Multiplication1 /= rtb_Switch4;
    }
    else if (rtb_Multiplication1 > 0.0F)
    {
        /* Switch: '<S67>/Switch2' incorporates:
         *  Constant: '<S67>/MAXFLOAT'
         *  Switch: '<S67>/Switch1'
         */
        rtb_Multiplication1 = 3.402823466E+38F;
    }
    else if (rtb_Multiplication1 < 0.0F)
    {
        /* Switch: '<S67>/Switch3' incorporates:
         *  Constant: '<S67>/MINFLOAT'
         *  Switch: '<S67>/Switch1'
         *  Switch: '<S67>/Switch2'
         */
        rtb_Multiplication1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S67>/Switch1' incorporates:
         *  Constant: '<S67>/Constant Value4'
         *  Switch: '<S67>/Switch2'
         *  Switch: '<S67>/Switch3'
         */
        rtb_Multiplication1 = 0.0F;
    }

    /* End of Switch: '<S67>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled13' */
    /* Sum: '<S28>/Summation' incorporates:
     *  Constant: '<S60>/Calib'
     *  Product: '<S28>/Multiplication'
     *  Sum: '<S28>/Subtraction'
     *  UnitDelay: '<S28>/Unit Delay'
     */
    rtb_Multiplication1 = ((rtb_Multiplication1 - HVTR_ac_DW.UnitDelay_DSTATE_bz)
                           * KeHVTR_k_Htr3CurrFilt) +
        HVTR_ac_DW.UnitDelay_DSTATE_bz;

    /* Update for UnitDelay: '<S28>/Unit Delay' incorporates:
     *  Switch: '<S28>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_bz = rtb_Multiplication1;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled13' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled14' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  UnitDelay: '<S29>/Unit Delay'
     */
    rtb_Switch1_ad = HVTR_ac_DW.UnitDelay_DSTATE_ae;

    /* Switch: '<S29>/Switch1' incorporates:
     *  Constant: '<S65>/Calib'
     *  Product: '<S29>/Multiplication'
     *  Sum: '<S29>/Subtraction'
     *  Sum: '<S29>/Summation'
     */
    VeHVTC_P_SDS_HV_PwrFiltered = ((VeHVTI_P_HV_SDS_HV_PwrAvg - rtb_Switch1_ad) *
        KeHVTR_k_SDS_HV_PwrFilt) + rtb_Switch1_ad;

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_ae = VeHVTC_P_SDS_HV_PwrFiltered;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled14' */

    /* Product: '<S8>/Multiplication3' incorporates:
     *  Constant: '<S8>/Constant Value3'
     */
    rtb_Multiplication3 = VeHVTC_P_SDS_HV_PwrFiltered * 1000.0F;

    /* Outputs for Atomic SubSystem: '<S8>/Protected Division1' */
    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S68>/Constant Value'
     *  Constant: '<S68>/Constant Value1'
     *  Constant: '<S68>/Constant Value2'
     *  Constant: '<S68>/Constant Value3'
     *  Logic: '<S68>/AND'
     *  RelationalOperator: '<S68>/Greater Than or Equal '
     *  RelationalOperator: '<S68>/Greater Than or Equal 1'
     *  RelationalOperator: '<S68>/Not Equal'
     *  RelationalOperator: '<S68>/Not Equal1'
     *  Switch: '<S68>/Switch2'
     *  Switch: '<S68>/Switch3'
     */
    if ((rtb_Multiplication3 != 0.0F) && (rtb_Switch4 != 0.0F))
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Product: '<S68>/Division'
         */
        rtb_Multiplication3 /= rtb_Switch4;
    }
    else if (rtb_Multiplication3 > 0.0F)
    {
        /* Switch: '<S68>/Switch2' incorporates:
         *  Constant: '<S68>/MAXFLOAT'
         *  Switch: '<S68>/Switch1'
         */
        rtb_Multiplication3 = 3.402823466E+38F;
    }
    else if (rtb_Multiplication3 < 0.0F)
    {
        /* Switch: '<S68>/Switch3' incorporates:
         *  Constant: '<S68>/MINFLOAT'
         *  Switch: '<S68>/Switch1'
         *  Switch: '<S68>/Switch2'
         */
        rtb_Multiplication3 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Constant: '<S68>/Constant Value4'
         *  Switch: '<S68>/Switch2'
         *  Switch: '<S68>/Switch3'
         */
        rtb_Multiplication3 = 0.0F;
    }

    /* End of Switch: '<S68>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled15' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  UnitDelay: '<S30>/Unit Delay'
     */
    rtb_Switch1_ad = HVTR_ac_DW.UnitDelay_DSTATE_mt;

    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S64>/Calib'
     *  Product: '<S30>/Multiplication'
     *  Sum: '<S30>/Subtraction'
     *  Sum: '<S30>/Summation'
     */
    VeHVTC_I_SDS_HV_CrntFiltered = ((rtb_Multiplication3 - rtb_Switch1_ad) *
        KeHVTR_k_SDSCurrFilt) + rtb_Switch1_ad;

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_mt = VeHVTC_I_SDS_HV_CrntFiltered;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled15' */

    /* Switch: '<S8>/Switch7' incorporates:
     *  Constant: '<S40>/Constant'
     *  Constant: '<S46>/Calib'
     *  DataTypeConversion: '<S466>/DataTypeConversion'
     *  Logic: '<S8>/Logical12'
     *  Logic: '<S8>/Logical13'
     *  Logic: '<S8>/Logical8'
     *  RelationalOperator: '<S8>/Comparison3'
     */
    if ((((((uint32)VeHVTI_e_ChargingSystemSts) == CeOBCR_e_NotCharging) &&
            (!VeHVTR_b_BattSide_CurrFA)) && (!VeHVTR_b_BattSide_VoltFA)) &&
            (KeHVTR_b_IDCM_V2X_Enbl))
    {
        /* Switch: '<S8>/Switch7' incorporates:
         *  Abs: '<S8>/Abs'
         *  Constant: '<S8>/Constant Value10'
         *  Product: '<S8>/Product'
         */
        VeHVTR_P_V2X_IDCM_dcPwr = (fabsf(VeHVTI_I_ChrgCurrent) *
            VeHVTI_U_BattSide_Volt) * 0.001F;
    }
    else
    {
        /* Switch: '<S8>/Switch7' incorporates:
         *  Constant: '<S8>/Constant Value6'
         */
        VeHVTR_P_V2X_IDCM_dcPwr = 0.0F;
    }

    /* End of Switch: '<S8>/Switch7' */

    /* Switch: '<S8>/Switch8' incorporates:
     *  Constant: '<S45>/Calib'
     *  Logic: '<S8>/Logical'
     *  Logic: '<S8>/Logical1'
     *  Logic: '<S8>/Logical2'
     */
    if ((((VeHVTI_b_Worksite_Inverter_Active) &&
            (!VeHVTI_b_Worksite_Inverter_Active_FA)) &&
            (!VeHVTI_b_Inverter_PowerDraw_FA)) &&
            (KeHVTR_b_BSG_OnBoard_PwrPanl_Enbl))
    {
        /* Switch: '<S8>/Switch8' incorporates:
         *  Constant: '<S8>/Constant Value11'
         *  Product: '<S8>/Product1'
         */
        VeHVTR_P_BSG_OnBoard_PwrPanl = VeHVTI_P_Inverter_PowerDraw * 0.001F;
    }
    else
    {
        /* Switch: '<S8>/Switch8' incorporates:
         *  Constant: '<S8>/Constant Value8'
         */
        VeHVTR_P_BSG_OnBoard_PwrPanl = 0.0F;
    }

    /* End of Switch: '<S8>/Switch8' */

    /* Switch: '<S8>/Switch9' incorporates:
     *  Constant: '<S48>/Calib'
     *  Logic: '<S8>/Logical10'
     *  Logic: '<S8>/Logical11'
     *  Logic: '<S8>/Logical9'
     */
    if (((!VeHVTR_b_V2X_InputCurrent_FA) && (!VeHVTR_b_V2X_InputVoltage_FA)) &&
            (KeHVTR_b_PPIM_PwrPanl_Enbl))
    {
        /* Switch: '<S8>/Switch9' incorporates:
         *  Constant: '<S8>/Constant Value5'
         *  Product: '<S8>/Product2'
         */
        VeHVTR_P_PPIM_PwrPanl = (VeHVTR_I_V2X_InputCurrent *
            VeHVTR_U_V2X_InputVoltage) * 0.001F;
    }
    else
    {
        /* Switch: '<S8>/Switch9' incorporates:
         *  Constant: '<S8>/Constant Value12'
         */
        VeHVTR_P_PPIM_PwrPanl = 0.0F;
    }

    /* End of Switch: '<S8>/Switch9' */

    /* Sum: '<S8>/Summation4' */
    rtb_Merge3 = (VeHVTR_P_V2X_IDCM_dcPwr + VeHVTR_P_BSG_OnBoard_PwrPanl) +
        VeHVTR_P_PPIM_PwrPanl;

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled16' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  UnitDelay: '<S31>/Unit Delay'
     */
    rtb_Switch1_ad = HVTR_ac_DW.UnitDelay_DSTATE_ob;

    /* Sum: '<S31>/Summation' incorporates:
     *  Constant: '<S53>/Calib'
     *  Product: '<S31>/Multiplication'
     *  Sum: '<S31>/Subtraction'
     */
    rtb_Multiplication3 = ((rtb_Merge3 - rtb_Switch1_ad) * KeHVTR_k_AccPwrFilt)
        + rtb_Switch1_ad;

    /* Update for UnitDelay: '<S31>/Unit Delay' incorporates:
     *  Switch: '<S31>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ob = rtb_Multiplication3;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled16' */

    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant Value'
     *  Constant: '<S8>/Initial Value4'
     *  Product: '<S8>/Multiplication'
     *  Switch: '<S24>/Switch2'
     */
    if (VeHVTI_b_APM_HV_VoltageFA)
    {
        rtb_Switch1_ad = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */
        rtb_Switch1_ad = (rtb_TmpSignalConversionAtVeIDCR * 0.001F) *
            VeHVTI_U_APM_HV_Voltage;

        /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */
    }

    /* End of Switch: '<S8>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled7' */
    /* Sum: '<S37>/Summation' incorporates:
     *  Constant: '<S52>/Calib'
     *  Product: '<S37>/Multiplication'
     *  Sum: '<S37>/Subtraction'
     *  UnitDelay: '<S37>/Unit Delay'
     */
    rtb_Switch2 = ((rtb_Switch1_ad - HVTR_ac_DW.UnitDelay_DSTATE_k) *
                   KeHVTR_k_APMPwrFilt) + HVTR_ac_DW.UnitDelay_DSTATE_k;

    /* Update for UnitDelay: '<S37>/Unit Delay' incorporates:
     *  Switch: '<S37>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch2;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled7' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled4' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  UnitDelay: '<S34>/Unit Delay'
     */
    rtb_Switch1_ad = HVTR_ac_DW.UnitDelay_DSTATE_oo;

    /* Switch: '<S34>/Switch1' incorporates:
     *  Constant: '<S57>/Calib'
     *  Product: '<S34>/Multiplication'
     *  Sum: '<S34>/Subtraction'
     *  Sum: '<S34>/Summation'
     */
    VeHVTC_P_ECHPwr = ((VeHVTI_P_HVC_HtrPwrActual_KW - rtb_Switch1_ad) *
                       KeHVTR_k_ECHPwrFilt) + rtb_Switch1_ad;

    /* Update for UnitDelay: '<S34>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_oo = VeHVTC_P_ECHPwr;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled4' */

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Initial Value5'
     */
    if (VeHVTI_b_AC_CompElecPwr_FA)
    {
        rtb_Switch1_ad = 0.0F;
    }
    else
    {
        rtb_Switch1_ad = VeHVTI_P_AC_CompElecPwr;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled3' */
    /* Sum: '<S33>/Summation' incorporates:
     *  Constant: '<S55>/Calib'
     *  Product: '<S33>/Multiplication'
     *  Sum: '<S33>/Subtraction'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_Summation_di = ((rtb_Switch1_ad - HVTR_ac_DW.UnitDelay_DSTATE_o1) *
                        KeHVTR_k_EACPwrFilt) + HVTR_ac_DW.UnitDelay_DSTATE_o1;

    /* Update for UnitDelay: '<S33>/Unit Delay' incorporates:
     *  Switch: '<S33>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_o1 = rtb_Summation_di;

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled2' */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled7' */
    /* Sum: '<S32>/Summation' incorporates:
     *  Constant: '<S53>/Calib'
     *  Product: '<S32>/Multiplication'
     *  Sum: '<S32>/Subtraction'
     *  Sum: '<S8>/Summation1'
     *  Switch: '<S33>/Switch2'
     *  Switch: '<S37>/Switch2'
     *  UnitDelay: '<S32>/Unit Delay'
     */
    rtb_Summation_di = (((((((((rtb_Switch2 + VeHVTC_P_ECHPwr) +
        rtb_Summation_di) + VeHVTC_P_Htr2PwrFiltered) + VeHVTC_P_Htr4PwrFiltered)
                            + VeHVTC_P_Htr3PwrFiltered) +
                           VeHVTC_P_SDS_HV_PwrFiltered) + rtb_Merge3) -
                         HVTR_ac_DW.UnitDelay_DSTATE_nc) * KeHVTR_k_AccPwrFilt)
        + HVTR_ac_DW.UnitDelay_DSTATE_nc;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled7' */
    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled3' */

    /* Update for UnitDelay: '<S32>/Unit Delay' incorporates:
     *  Switch: '<S32>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_nc = rtb_Summation_di;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled5' */
    /* Sum: '<S35>/Summation' incorporates:
     *  Constant: '<S56>/Calib'
     *  Product: '<S35>/Multiplication'
     *  Sum: '<S35>/Subtraction'
     *  UnitDelay: '<S35>/Unit Delay'
     */
    rtb_Summation_gyj = ((VeHVTI_I_HVC_Htr_HV_CrntAct -
                          HVTR_ac_DW.UnitDelay_DSTATE_b1) * KeHVTR_k_ECHCurrFilt)
        + HVTR_ac_DW.UnitDelay_DSTATE_b1;

    /* Update for UnitDelay: '<S35>/Unit Delay' incorporates:
     *  Switch: '<S35>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_b1 = rtb_Summation_gyj;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled5' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled6' */
    /* Sum: '<S36>/Summation' incorporates:
     *  Constant: '<S54>/Calib'
     *  Product: '<S36>/Multiplication'
     *  Sum: '<S36>/Subtraction'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    rtb_Summation_m5 = ((VeHVTI_I_ACCElecCurr - HVTR_ac_DW.UnitDelay_DSTATE_e4) *
                        KeHVTR_k_EACCurrFilt) + HVTR_ac_DW.UnitDelay_DSTATE_e4;

    /* Update for UnitDelay: '<S36>/Unit Delay' incorporates:
     *  Switch: '<S36>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_e4 = rtb_Summation_m5;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled6' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled8' */
    /* Sum: '<S38>/Summation' incorporates:
     *  Constant: '<S58>/Calib'
     *  Product: '<S38>/Multiplication'
     *  Sum: '<S38>/Subtraction'
     *  UnitDelay: '<S38>/Unit Delay'
     */
    rtb_Summation_j4y = ((VeHVTI_I_HV_Htr2_HV_CrntAct -
                          HVTR_ac_DW.UnitDelay_DSTATE_br) *
                         KeHVTR_k_Htr2CurrFilt) + HVTR_ac_DW.UnitDelay_DSTATE_br;

    /* Update for UnitDelay: '<S38>/Unit Delay' incorporates:
     *  Switch: '<S38>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_br = rtb_Summation_j4y;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled8' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled9' */
    /* Sum: '<S39>/Summation' incorporates:
     *  Constant: '<S62>/Calib'
     *  Product: '<S39>/Multiplication'
     *  Sum: '<S39>/Subtraction'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    rtb_Summation = ((VeHVTI_I_HV_Htr4_HV_CrntAct -
                      HVTR_ac_DW.UnitDelay_DSTATE_a) * KeHVTR_k_Htr4CurrFilt) +
        HVTR_ac_DW.UnitDelay_DSTATE_a;

    /* Update for UnitDelay: '<S39>/Unit Delay' incorporates:
     *  Switch: '<S39>/Switch2'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_a = rtb_Summation;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled9' */

    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  RelationalOperator: '<S8>/Comparison1'
     *  RelationalOperator: '<S8>/Comparison4'
     *  Switch: '<S43>/Switch2'
     *  Switch: '<S7>/Switch14'
     */
    if (((uint32)VeHVTI_e_ChargeType) == CeOBCR_e_AC)
    {
        /* Switch: '<S43>/Switch1' */
        VeHVTC_I_Arbitrated_ChrgCurr = VeHVTI_I_ChrgCurrent;
    }
    else if (((uint32)VeHVTI_e_ChargeType) == CeOBCR_e_DC)
    {
        /* Switch: '<S43>/Switch2' incorporates:
         *  Switch: '<S43>/Switch1'
         */
        VeHVTC_I_Arbitrated_ChrgCurr = VeHVTI_I_EVSEOutputCurr;
    }
    else
    {
        /* Switch: '<S43>/Switch1' incorporates:
         *  Constant: '<S44>/Calib'
         *  Switch: '<S43>/Switch2'
         */
        VeHVTC_I_Arbitrated_ChrgCurr = KeHVTR_I_ChargingCurrentCal;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */
    /* Gain: '<S74>/Gain' incorporates:
     *  Switch: '<S24>/Switch2'
     */
    VeHVTC_I_AccPwrModCurr = rtb_TmpSignalConversionAtVeIDCR;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */

    /* Switch: '<S8>/Switch5' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeHVTR_b_IncludeSDSCurrent)
    {
        /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */
        /* Switch: '<S8>/Switch5' incorporates:
         *  Sum: '<S8>/Summation2'
         *  Switch: '<S24>/Switch2'
         */
        rtb_Switch5_m = rtb_TmpSignalConversionAtVeIDCR +
            VeHVTC_I_SDS_HV_CrntFiltered;

        /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */
    }
    else
    {
        /* Switch: '<S8>/Switch5' */
        rtb_Switch5_m = VeHVTC_I_AccPwrModCurr;
    }

    /* End of Switch: '<S8>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled6' */
    /* Gain: '<S75>/Gain' incorporates:
     *  Switch: '<S36>/Switch2'
     */
    VeHVTC_I_ACCompCurr = rtb_Summation_m5;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled6' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled5' */
    /* Gain: '<S70>/Gain' incorporates:
     *  Switch: '<S35>/Switch2'
     */
    VeHVTC_I_ECHCurr = rtb_Summation_gyj;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled5' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled8' */
    /* Gain: '<S73>/Gain' incorporates:
     *  Switch: '<S38>/Switch2'
     */
    VeHVTC_I_Htr2_HV_CrntFiltered = rtb_Summation_j4y;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled8' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled13' */
    /* Gain: '<S76>/Gain' incorporates:
     *  Switch: '<S28>/Switch2'
     */
    VeHVTC_I_Htr3_HV_CrntFiltered = rtb_Multiplication1;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled13' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled9' */
    /* Gain: '<S72>/Gain' incorporates:
     *  Switch: '<S39>/Switch2'
     */
    VeHVTC_I_Htr4_HV_CrntFiltered = rtb_Summation;

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled9' */

    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S77>/Calib'
     *  Constant: '<S9>/Initial Value5'
     *  Logic: '<S9>/Logical3'
     */
    if ((VeHVTI_b_MtrA_DC_CrntFA) || (KeHVTR_b_DsblMtrAV))
    {
        rtb_Switch1_ad = 0.0F;
    }
    else
    {
        rtb_Switch1_ad = VeHVTI_I_MtrA_DC_Crnt;
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Switch: '<S9>/Switch3' incorporates:
     *  Constant: '<S9>/Initial Value1'
     */
    if (VeHVTI_b_MtrB_DC_CrntFA)
    {
        rtb_Merge3 = 0.0F;
    }
    else
    {
        rtb_Merge3 = VeHVTI_I_MtrB_DC_Crnt;
    }

    /* End of Switch: '<S9>/Switch3' */

    /* Switch: '<S9>/Switch6' incorporates:
     *  Constant: '<S9>/Initial Value2'
     */
    if (VeHVTI_b_MtrC_DC_CrntFA)
    {
        rtb_Merge1 = 0.0F;
    }
    else
    {
        rtb_Merge1 = VeHVTI_I_MtrC_DC_Crnt;
    }

    /* End of Switch: '<S9>/Switch6' */

    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S79>/Calib'
     *  Constant: '<S9>/Constant Value'
     */
    if (KeHVTR_b_UseACCompCurr)
    {
        rtb_Sum2 = VeHVTC_I_ACCompCurr;
    }
    else
    {
        rtb_Sum2 = 0.0F;
    }

    /* End of Switch: '<S9>/Switch4' */

    /* Sum: '<S9>/Summation1' */
    VeHVTR_I_HV_Total_Load_Curr = (((((((rtb_Switch1_ad + rtb_Merge3) +
        rtb_Merge1) + rtb_Switch5_m) + rtb_Sum2) + VeHVTC_I_ECHCurr) +
        VeHVTC_I_Htr2_HV_CrntFiltered) + VeHVTC_I_Htr3_HV_CrntFiltered) +
        VeHVTC_I_Htr4_HV_CrntFiltered;

    /* Switch: '<S9>/Switch5' incorporates:
     *  Constant: '<S80>/Calib'
     *  Constant: '<S9>/Constant Value2'
     */
    if (KeHVTR_b_UseIDCRCurr)
    {
        rtb_Switch1_ad = VeHVTC_I_Arbitrated_ChrgCurr;
    }
    else
    {
        rtb_Switch1_ad = 0.0F;
    }

    /* End of Switch: '<S9>/Switch5' */

    /* Sum: '<S9>/Summation3' */
    VeHVTC_I_HV_BatCurrCalc = VeHVTR_I_HV_Total_Load_Curr - rtb_Switch1_ad;

    /* If: '<S9>/If1' incorporates:
     *  Constant: '<S78>/Calib'
     */
    if (KeHVTR_b_SwtchBatt_Enbl)
    {
        /* Outputs for IfAction SubSystem: '<S9>/Switchable_Battery' incorporates:
         *  ActionPort: '<S84>/Action Port'
         */
        /* Sum: '<S84>/Sum2' */
        rtb_Sum2 = VeHVTI_I_HV_BatCurr + VeHVTI_I_HV_Current_String2;

        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S89>/Constant'
         *  Constant: '<S96>/Constant'
         *  DataTypeConversion: '<S462>/DataTypeConversion'
         *  RelationalOperator: '<S84>/Relational Operator'
         *  RelationalOperator: '<S84>/Relational Operator7'
         *  Switch: '<S97>/Switch2'
         */
        if (((uint32)VeHVTI_e_DC_ChrgTypeCmd) == CeOBCR_e_DC_ChrgType_400V)
        {
            /* Merge: '<S9>/Merge3' */
            rtb_Merge3 = rtb_Sum2;
        }
        else if (((uint32)VeHVTI_e_DC_ChrgTypeCmd) == CeOBCR_e_DC_ChrgType_800V)
        {
            /* Switch: '<S97>/Switch2' incorporates:
             *  Merge: '<S9>/Merge3'
             *  MinMax: '<S84>/MinMax1'
             */
            rtb_Merge3 = fminf(VeHVTI_I_HV_BatCurr, VeHVTI_I_HV_Current_String2);
        }
        else
        {
            /* Merge: '<S9>/Merge3' incorporates:
             *  Switch: '<S97>/Switch2'
             */
            rtb_Merge3 = rtb_Sum2;
        }

        /* End of Switch: '<S97>/Switch1' */

        /* Switch: '<S98>/Switch1' incorporates:
         *  Constant: '<S90>/Constant'
         *  Constant: '<S91>/Constant'
         *  Constant: '<S92>/Constant'
         *  DataTypeConversion: '<S463>/DataTypeConversion'
         *  RelationalOperator: '<S84>/Relational Operator1'
         *  RelationalOperator: '<S84>/Relational Operator2'
         *  RelationalOperator: '<S84>/Relational Operator3'
         *  Switch: '<S98>/Switch2'
         *  Switch: '<S98>/Switch3'
         */
        if (((uint32)VeHVTI_e_HVTracBatCntctrConfig) ==
                CeBPCR_e_HVTracBatConfig_Closed_Parallel)
        {
            /* Merge: '<S9>/Merge1' */
            rtb_Merge1 = rtb_Sum2;
        }
        else if (((uint32)VeHVTI_e_HVTracBatCntctrConfig) ==
                 CeBPCR_e_HVTracBatConfig_Closed_Single_B1)
        {
            /* Switch: '<S98>/Switch2' incorporates:
             *  Merge: '<S9>/Merge1'
             */
            rtb_Merge1 = VeHVTI_I_HV_BatCurr;
        }
        else if (((uint32)VeHVTI_e_HVTracBatCntctrConfig) ==
                 CeBPCR_e_HVTracBatConfig_Closed_Single_B2)
        {
            /* Switch: '<S98>/Switch3' incorporates:
             *  Merge: '<S9>/Merge1'
             *  Switch: '<S98>/Switch2'
             */
            rtb_Merge1 = VeHVTI_I_HV_Current_String2;
        }
        else
        {
            /* Merge: '<S9>/Merge1' incorporates:
             *  Constant: '<S84>/Constant'
             *  Switch: '<S98>/Switch2'
             *  Switch: '<S98>/Switch3'
             */
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S98>/Switch1' */

        /* Logic: '<S84>/Logical2' incorporates:
         *  Logic: '<S84>/Logical1'
         */
        rtb_Logical4 = ((VeHVTI_b_HV_BatCurrFA) ||
                        (VeHVTI_b_HV_Current_String2_FA));

        /* Switch: '<S99>/Switch1' incorporates:
         *  Constant: '<S93>/Constant'
         *  Constant: '<S94>/Constant'
         *  Constant: '<S95>/Constant'
         *  DataTypeConversion: '<S463>/DataTypeConversion'
         *  Logic: '<S84>/Logical2'
         *  Logic: '<S84>/Logical4'
         *  RelationalOperator: '<S84>/Relational Operator1'
         *  RelationalOperator: '<S84>/Relational Operator4'
         *  RelationalOperator: '<S84>/Relational Operator5'
         *  RelationalOperator: '<S84>/Relational Operator6'
         *  Switch: '<S99>/Switch2'
         *  Switch: '<S99>/Switch3'
         */
        if (rtb_Logical4 || (VeHVTI_b_HVTracBatCntctrConfigFA))
        {
            /* Merge: '<S9>/Merge' */
            rtb_Merge = VeHVTR_I_HV_Total_Load_Curr;
        }
        else if (((uint32)VeHVTI_e_HVTracBatCntctrConfig) ==
                 CeBPCR_e_HVTracBatConfig_Closed_Parallel)
        {
            /* Switch: '<S99>/Switch2' incorporates:
             *  Merge: '<S9>/Merge'
             */
            rtb_Merge = rtb_Sum2;
        }
        else if ((((uint32)VeHVTI_e_HVTracBatCntctrConfig) ==
                  CeBPCR_e_HVTracBatConfig_Closed_Single_B1) || (((uint32)
                   VeHVTI_e_HVTracBatCntctrConfig) ==
                  CeBPCR_e_HVTracBatConfig_Closed_Single_B2))
        {
            /* Switch: '<S99>/Switch3' incorporates:
             *  Abs: '<S84>/Abs1'
             *  Merge: '<S9>/Merge'
             *  Sum: '<S84>/Sum3'
             *  Switch: '<S99>/Switch2'
             */
            rtb_Merge = fabsf(VeHVTI_I_HV_BatCurr - VeHVTI_I_HV_Current_String2);
        }
        else
        {
            /* Merge: '<S9>/Merge' incorporates:
             *  Constant: '<S84>/Constant1'
             *  Switch: '<S99>/Switch2'
             *  Switch: '<S99>/Switch3'
             */
            rtb_Merge = 0.0F;
        }

        /* End of Switch: '<S99>/Switch1' */
        /* End of Outputs for SubSystem: '<S9>/Switchable_Battery' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/None_Switchable_Battery' incorporates:
         *  ActionPort: '<S82>/Action Port'
         */
        /* Merge: '<S9>/Merge4' incorporates:
         *  Inport: '<S82>/HV_BatCurrFA'
         *  SignalConversion generated from: '<S82>/VeBPCR_b_HV_BatCurrFA_NoSwitchBatt'
         */
        rtb_Logical4 = VeHVTI_b_HV_BatCurrFA;

        /* Merge: '<S9>/Merge1' incorporates:
         *  Gain: '<S86>/Gain'
         */
        rtb_Merge1 = VeHVTI_I_HV_BatCurr;

        /* Merge: '<S9>/Merge2' incorporates:
         *  Gain: '<S87>/Gain'
         */
        rtb_Sum2 = VeHVTI_I_HV_BatCurr;

        /* Merge: '<S9>/Merge3' incorporates:
         *  Gain: '<S88>/Gain'
         */
        rtb_Merge3 = VeHVTI_I_HV_BatCurr;

        /* Switch: '<S82>/Switch2' incorporates:
         *  Constant: '<S85>/Calib'
         *  Inport: '<S82>/HV_BatCurrFA'
         *  Logic: '<S82>/Logical1'
         *  Logic: '<S82>/Logical2'
         *  Logic: '<S9>/Logical'
         */
        if (((KeHVTR_b_UseCalcCurr) && (((((!VeHVTI_b_MtrA_DC_CrntFA) &&
                 (!VeHVTI_b_MtrB_DC_CrntFA)) && (!VeHVTI_b_APM_HV_CurrentFA)) &&
               (!VeHVTI_b_AC_CompElecPwr_FA)) && (!VeHVTI_b_MtrC_DC_CrntFA))) ||
            (VeHVTI_b_HV_BatCurrFA))
        {
            /* Merge: '<S9>/Merge' */
            rtb_Merge = VeHVTC_I_HV_BatCurrCalc;
        }
        else
        {
            /* Merge: '<S9>/Merge' */
            rtb_Merge = VeHVTI_I_HV_BatCurr;
        }

        /* End of Switch: '<S82>/Switch2' */
        /* End of Outputs for SubSystem: '<S9>/None_Switchable_Battery' */
    }

    /* End of If: '<S9>/If1' */

    /* Product: '<S8>/Multiplication2' incorporates:
     *  Constant: '<S8>/Constant Value1'
     */
    rtb_Switch4 = (0.001F * rtb_Switch4) * rtb_Merge;

    /* Switch: '<S8>/Switch6' */
    if (VeHVTI_b_APM_HV_VoltageFA)
    {
        /* Switch: '<S8>/Switch6' incorporates:
         *  Constant: '<S8>/Initial_Value13'
         */
        rtb_Switch3 = 0.0F;
    }
    else
    {
        /* Switch: '<S8>/Switch6' incorporates:
         *  Constant: '<S8>/Constant Value4'
         *  Product: '<S8>/Multiplication4'
         */
        rtb_Switch3 = (rtb_Switch3 * VeHVTI_U_APM_HV_Voltage) * 0.001F;
    }

    /* End of Switch: '<S8>/Switch6' */

    /* If: '<S10>/If' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S101>/Calib'
     */
    if (KeHVTR_b_SwtchBatt_Enbl)
    {
        /* Outputs for IfAction SubSystem: '<S10>/Switchable_Battery_Volt_Arbitration' incorporates:
         *  ActionPort: '<S104>/Action Port'
         */
        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S117>/Constant'
         *  Constant: '<S118>/Constant'
         *  DataTypeConversion: '<S462>/DataTypeConversion'
         *  RelationalOperator: '<S104>/Relational Operator'
         *  RelationalOperator: '<S104>/Relational Operator1'
         *  Switch: '<S119>/Switch2'
         */
        if (((uint32)VeHVTI_e_DC_ChrgTypeCmd) == CeOBCR_e_DC_ChrgType_400V)
        {
            /* Merge: '<S10>/Merge' incorporates:
             *  MinMax: '<S104>/MinMax'
             */
            Merge = fmaxf(VeHVTI_U_HV_InternalStringVolt1,
                          VeHVTI_U_HV_InternalStringVolt2);
        }
        else if (((uint32)VeHVTI_e_DC_ChrgTypeCmd) == CeOBCR_e_DC_ChrgType_800V)
        {
            /* Switch: '<S119>/Switch2' incorporates:
             *  Merge: '<S10>/Merge'
             *  Sum: '<S104>/Sum'
             */
            Merge = VeHVTI_U_HV_InternalStringVolt1 +
                VeHVTI_U_HV_InternalStringVolt2;
        }
        else
        {
            /* Merge: '<S10>/Merge' incorporates:
             *  MinMax: '<S104>/MinMax1'
             *  Switch: '<S119>/Switch2'
             */
            Merge = fmaxf(VeHVTI_U_HV_InternalStringVolt1,
                          VeHVTI_U_HV_InternalStringVolt2);
        }

        /* End of Switch: '<S119>/Switch1' */

        /* Merge: '<S10>/Merge1' incorporates:
         *  MinMax: '<S104>/MinMax2'
         */
        Merge1 = fminf(VeHVTI_U_HV_InternalStringVolt1,
                       VeHVTI_U_HV_InternalStringVolt2);

        /* Merge: '<S10>/Merge2' incorporates:
         *  MinMax: '<S104>/MinMax3'
         */
        Merge2 = fmaxf(VeHVTI_U_HV_InternalStringVolt1,
                       VeHVTI_U_HV_InternalStringVolt2);

        /* Merge: '<S10>/Merge3' incorporates:
         *  Logic: '<S104>/Logical Operator'
         */
        rtb_AND_li = ((VeHVTI_b_HV_InternalStringVolt1FA) ||
                      (VeHVTI_b_HV_InternalStringVolt2FA));

        /* End of Outputs for SubSystem: '<S10>/Switchable_Battery_Volt_Arbitration' */
    }
    else if (KeHVTR_b_Use_BpcmHvInternalVoltage)
    {
        /* Outputs for IfAction SubSystem: '<S10>/Use_BPCM_HV_InternalVoltage' incorporates:
         *  ActionPort: '<S106>/Action Port'
         */
        /* Merge: '<S10>/Merge' incorporates:
         *  Gain: '<S125>/Gain'
         */
        Merge = VeHVTI_U_BPCM_HV_InternalVoltage;

        /* Merge: '<S10>/Merge1' incorporates:
         *  Gain: '<S126>/Gain'
         */
        Merge1 = VeHVTI_U_BPCM_HV_InternalVoltage;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Gain: '<S127>/Gain'
         */
        Merge2 = VeHVTI_U_BPCM_HV_InternalVoltage;

        /* Merge: '<S10>/Merge3' incorporates:
         *  Gain: '<S124>/Gain'
         */
        rtb_AND_li = VeHVTI_b_BPCM_HV_InternalVoltage_FA;

        /* End of Outputs for SubSystem: '<S10>/Use_BPCM_HV_InternalVoltage' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S10>/Use_BMS_HV_InternalVoltage' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* Merge: '<S10>/Merge' incorporates:
         *  Gain: '<S120>/Gain'
         */
        Merge = VeHVTI_U_HV_BatVolt;

        /* Merge: '<S10>/Merge1' incorporates:
         *  Gain: '<S121>/Gain'
         */
        Merge1 = VeHVTI_U_HV_BatVolt;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Gain: '<S122>/Gain'
         */
        Merge2 = VeHVTI_U_HV_BatVolt;

        /* Merge: '<S10>/Merge3' incorporates:
         *  Gain: '<S123>/Gain'
         */
        rtb_AND_li = VeHVTI_b_HV_BatVoltFA;

        /* End of Outputs for SubSystem: '<S10>/Use_BMS_HV_InternalVoltage' */
    }

    /* End of If: '<S10>/If' */

    /* Switch: '<S103>/Switch1' */
    if (VeHVTI_b_HV_BatModVoltMaxFA)
    {
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S112>/Calib'
         *  Constant: '<S113>/Calib'
         *  Switch: '<S109>/Switch2'
         */
        if (KeHVTR_b_SwtchBatt_Enbl)
        {
            /* Switch: '<S109>/Switch1' incorporates:
             *  MinMax: '<S103>/MinMax1'
             */
            rtb_Switch1_ad = fmaxf(VeHVTI_U_HV_InternalStringVolt1,
                                   VeHVTI_U_HV_InternalStringVolt2);
        }
        else if (KeHVTR_b_Use_BpcmHvInternalVoltage)
        {
            /* Switch: '<S109>/Switch2' incorporates:
             *  Switch: '<S109>/Switch1'
             */
            rtb_Switch1_ad = VeHVTI_U_BPCM_HV_InternalVoltage;
        }
        else
        {
            /* Switch: '<S109>/Switch1' incorporates:
             *  Switch: '<S109>/Switch2'
             */
            rtb_Switch1_ad = rtb_Switch3_m;
        }

        /* End of Switch: '<S109>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S103>/Protected Division1' */
        /* Switch: '<S116>/Switch1' incorporates:
         *  Constant: '<S116>/Constant Value'
         *  Constant: '<S116>/Constant Value1'
         *  Constant: '<S116>/Constant Value2'
         *  Constant: '<S116>/Constant Value3'
         *  Logic: '<S116>/AND'
         *  RelationalOperator: '<S116>/Greater Than or Equal '
         *  RelationalOperator: '<S116>/Greater Than or Equal 1'
         *  RelationalOperator: '<S116>/Not Equal'
         *  RelationalOperator: '<S116>/Not Equal1'
         *  Switch: '<S116>/Switch2'
         *  Switch: '<S116>/Switch3'
         */
        if ((rtb_Switch1_ad != 0.0F) && (VeHVTI_k_BatModNo != 0.0F))
        {
            /* Switch: '<S116>/Switch1' incorporates:
             *  Product: '<S116>/Division'
             */
            rtb_Switch1_ad /= VeHVTI_k_BatModNo;
        }
        else if (rtb_Switch1_ad > 0.0F)
        {
            /* Switch: '<S116>/Switch2' incorporates:
             *  Constant: '<S116>/MAXFLOAT'
             *  Switch: '<S116>/Switch1'
             */
            rtb_Switch1_ad = 3.402823466E+38F;
        }
        else if (rtb_Switch1_ad < 0.0F)
        {
            /* Switch: '<S116>/Switch3' incorporates:
             *  Constant: '<S116>/MINFLOAT'
             *  Switch: '<S116>/Switch1'
             *  Switch: '<S116>/Switch2'
             */
            rtb_Switch1_ad = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S116>/Switch1' incorporates:
             *  Constant: '<S116>/Constant Value4'
             *  Switch: '<S116>/Switch2'
             *  Switch: '<S116>/Switch3'
             */
            rtb_Switch1_ad = 0.0F;
        }

        /* End of Switch: '<S116>/Switch1' */
        /* End of Outputs for SubSystem: '<S103>/Protected Division1' */

        /* Switch: '<S103>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Sum: '<S103>/Sum'
         */
        Switch1 = rtb_Switch1_ad + KeHVTR_U_MaxModuleDefaultOffsetVoltage;
    }
    else
    {
        /* Switch: '<S103>/Switch1' */
        Switch1 = VeHVTI_U_HV_BatModVoltMax;
    }

    /* End of Switch: '<S103>/Switch1' */

    /* Switch: '<S103>/Switch3' */
    if (VeHVTI_b_HV_BatModVoltMinFA)
    {
        /* Switch: '<S108>/Switch1' incorporates:
         *  Constant: '<S112>/Calib'
         *  Constant: '<S113>/Calib'
         *  Switch: '<S108>/Switch2'
         */
        if (KeHVTR_b_SwtchBatt_Enbl)
        {
            /* Switch: '<S108>/Switch1' incorporates:
             *  MinMax: '<S103>/MinMax'
             */
            rtb_Switch1_ad = fminf(VeHVTI_U_HV_InternalStringVolt1,
                                   VeHVTI_U_HV_InternalStringVolt2);
        }
        else if (KeHVTR_b_Use_BpcmHvInternalVoltage)
        {
            /* Switch: '<S108>/Switch2' incorporates:
             *  Switch: '<S108>/Switch1'
             */
            rtb_Switch1_ad = VeHVTI_U_BPCM_HV_InternalVoltage;
        }
        else
        {
            /* Switch: '<S108>/Switch1' incorporates:
             *  Switch: '<S108>/Switch2'
             */
            rtb_Switch1_ad = rtb_Switch3_m;
        }

        /* End of Switch: '<S108>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S103>/Protected Division' */
        /* Switch: '<S115>/Switch1' incorporates:
         *  Constant: '<S115>/Constant Value'
         *  Constant: '<S115>/Constant Value1'
         *  Constant: '<S115>/Constant Value2'
         *  Constant: '<S115>/Constant Value3'
         *  Logic: '<S115>/AND'
         *  RelationalOperator: '<S115>/Greater Than or Equal '
         *  RelationalOperator: '<S115>/Greater Than or Equal 1'
         *  RelationalOperator: '<S115>/Not Equal'
         *  RelationalOperator: '<S115>/Not Equal1'
         *  Switch: '<S115>/Switch2'
         *  Switch: '<S115>/Switch3'
         */
        if ((rtb_Switch1_ad != 0.0F) && (VeHVTI_k_BatModNo != 0.0F))
        {
            /* Switch: '<S115>/Switch1' incorporates:
             *  Product: '<S115>/Division'
             */
            rtb_Switch1_ad /= VeHVTI_k_BatModNo;
        }
        else if (rtb_Switch1_ad > 0.0F)
        {
            /* Switch: '<S115>/Switch2' incorporates:
             *  Constant: '<S115>/MAXFLOAT'
             *  Switch: '<S115>/Switch1'
             */
            rtb_Switch1_ad = 3.402823466E+38F;
        }
        else if (rtb_Switch1_ad < 0.0F)
        {
            /* Switch: '<S115>/Switch3' incorporates:
             *  Constant: '<S115>/MINFLOAT'
             *  Switch: '<S115>/Switch1'
             *  Switch: '<S115>/Switch2'
             */
            rtb_Switch1_ad = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S115>/Switch1' incorporates:
             *  Constant: '<S115>/Constant Value4'
             *  Switch: '<S115>/Switch2'
             *  Switch: '<S115>/Switch3'
             */
            rtb_Switch1_ad = 0.0F;
        }

        /* End of Switch: '<S115>/Switch1' */
        /* End of Outputs for SubSystem: '<S103>/Protected Division' */

        /* Switch: '<S103>/Switch3' incorporates:
         *  Constant: '<S111>/Calib'
         *  Sum: '<S103>/Sum1'
         */
        rtb_Switch3_m = rtb_Switch1_ad - KeHVTR_U_MinModuleDefaultOffsetVoltage;
    }
    else
    {
        /* Switch: '<S103>/Switch3' */
        rtb_Switch3_m = VeHVTI_U_HV_BatModVoltMin;
    }

    /* End of Switch: '<S103>/Switch3' */

    /* Logic: '<S151>/Logical6' incorporates:
     *  Logic: '<S151>/Logical8'
     */
    rtb_Comparison4_a = ((!VeHVTI_b_HV_BatVoltFA) && rtb_Comparison4_a);

    /* Switch: '<S128>/Switch1' incorporates:
     *  Switch: '<S128>/Switch2'
     *  Switch: '<S128>/Switch3'
     *  Switch: '<S128>/Switch7'
     *  Switch: '<S128>/Switch8'
     *  Switch: '<S129>/Switch7'
     *  Switch: '<S129>/Switch8'
     */
    if (rtb_Logical1_el)
    {
        /* Switch: '<S128>/Switch1' */
        rtb_Switch1_ad = VeHVTI_U_HV_BatVolt;

        /* Switch: '<S128>/Switch7' incorporates:
         *  Constant: '<S140>/Constant'
         */
        VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_HVBatV;

        /* Switch: '<S129>/Switch7' incorporates:
         *  Constant: '<S147>/Constant'
         */
        VeHVTC_e_VoltSrc = CeHVTR_e_HVBatV;
    }
    else if (rtb_Logical1)
    {
        /* Switch: '<S128>/Switch1' incorporates:
         *  Switch: '<S128>/Switch2'
         */
        rtb_Switch1_ad = rtb_Product_k4;

        /* Switch: '<S128>/Switch7' incorporates:
         *  Constant: '<S142>/Constant'
         *  Switch: '<S128>/Switch8'
         */
        VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_MtrABCavgV;

        /* Switch: '<S129>/Switch7' incorporates:
         *  Constant: '<S149>/Constant'
         *  Switch: '<S129>/Switch8'
         */
        VeHVTC_e_VoltSrc = CeHVTR_e_MtrABCavgV;
    }
    else if (tmpRead_7)
    {
        /* Switch: '<S128>/Switch1' incorporates:
         *  Switch: '<S128>/Switch2'
         *  Switch: '<S128>/Switch3'
         */
        rtb_Switch1_ad = rtb_Gain;

        /* Switch: '<S128>/Switch7' incorporates:
         *  Constant: '<S135>/Constant'
         *  Switch: '<S128>/Switch8'
         *  Switch: '<S128>/Switch9'
         */
        VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_MtrABavgV;

        /* Switch: '<S129>/Switch7' incorporates:
         *  Constant: '<S141>/Constant'
         *  Switch: '<S129>/Switch8'
         *  Switch: '<S129>/Switch9'
         */
        VeHVTC_e_VoltSrc = CeHVTR_e_MtrABavgV;
    }
    else
    {
        /* Switch: '<S128>/Switch5' incorporates:
         *  Switch: '<S128>/Switch2'
         *  Switch: '<S128>/Switch3'
         */
        if (rtb_Logical3_k)
        {
            /* Switch: '<S128>/Switch1' incorporates:
             *  Switch: '<S128>/Switch3'
             *  Switch: '<S128>/Switch5'
             */
            rtb_Switch1_ad = VeHVTI_U_MtrB_DC_Volt;
        }
        else if (rtb_Logical2)
        {
            /* Switch: '<S128>/Switch1' incorporates:
             *  Switch: '<S128>/Switch6'
             */
            rtb_Switch1_ad = VeHVTI_U_MtrA_DC_Volt;
        }
        else if (rtb_Logical11_o)
        {
            /* Switch: '<S128>/Switch1' incorporates:
             *  Switch: '<S128>/Switch11'
             *  Switch: '<S128>/Switch6'
             */
            rtb_Switch1_ad = VeHVTI_U_MtrC_DC_Volt;
        }
        else if (rtb_Logical5)
        {
            /* Switch: '<S128>/Switch1' incorporates:
             *  Switch: '<S128>/Switch11'
             *  Switch: '<S128>/Switch13'
             *  Switch: '<S128>/Switch6'
             */
            rtb_Switch1_ad = VeHVTI_U_APM_HV_Voltage;
        }
        else if (rtb_Comparison4_a)
        {
            /* Switch: '<S128>/Switch15' incorporates:
             *  Switch: '<S128>/Switch1'
             *  Switch: '<S128>/Switch11'
             *  Switch: '<S128>/Switch13'
             *  Switch: '<S128>/Switch6'
             */
            rtb_Switch1_ad = VeHVTI_U_HV_BatVolt;
        }
        else
        {
            /* Switch: '<S128>/Switch1' incorporates:
             *  Constant: '<S107>/Constant Value3'
             *  Switch: '<S128>/Switch11'
             *  Switch: '<S128>/Switch13'
             *  Switch: '<S128>/Switch15'
             *  Switch: '<S128>/Switch6'
             */
            rtb_Switch1_ad = 0.01F;
        }

        /* End of Switch: '<S128>/Switch5' */

        /* Switch: '<S128>/Switch4' incorporates:
         *  Switch: '<S128>/Switch8'
         *  Switch: '<S128>/Switch9'
         */
        if (rtb_Logical3_k)
        {
            /* Switch: '<S128>/Switch7' incorporates:
             *  Constant: '<S137>/Constant'
             *  Switch: '<S128>/Switch4'
             *  Switch: '<S128>/Switch9'
             */
            VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_MtrBV;
        }
        else if (rtb_Logical2)
        {
            /* Switch: '<S128>/Switch7' incorporates:
             *  Constant: '<S136>/Constant'
             *  Switch: '<S128>/Switch10'
             */
            VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_MtrAV;
        }
        else if (rtb_Logical11_o)
        {
            /* Switch: '<S128>/Switch7' incorporates:
             *  Constant: '<S134>/Constant'
             *  Switch: '<S128>/Switch10'
             *  Switch: '<S128>/Switch12'
             */
            VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_MtrCV;
        }
        else if (rtb_Logical5)
        {
            /* Switch: '<S128>/Switch7' incorporates:
             *  Constant: '<S138>/Constant'
             *  Switch: '<S128>/Switch10'
             *  Switch: '<S128>/Switch12'
             *  Switch: '<S128>/Switch14'
             */
            VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_APMHV;
        }
        else if (rtb_Comparison4_a)
        {
            /* Switch: '<S128>/Switch16' incorporates:
             *  Constant: '<S131>/Constant'
             *  Switch: '<S128>/Switch10'
             *  Switch: '<S128>/Switch12'
             *  Switch: '<S128>/Switch14'
             *  Switch: '<S128>/Switch7'
             */
            VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_HVBatV;
        }
        else
        {
            /* Switch: '<S128>/Switch7' incorporates:
             *  Constant: '<S139>/Constant'
             *  Switch: '<S128>/Switch10'
             *  Switch: '<S128>/Switch12'
             *  Switch: '<S128>/Switch14'
             *  Switch: '<S128>/Switch16'
             */
            VeHVTC_e_VoltSrc_Arb2 = CeHVTR_e_NoSrcAvlb;
        }

        /* End of Switch: '<S128>/Switch4' */

        /* Switch: '<S129>/Switch4' incorporates:
         *  Switch: '<S129>/Switch10'
         *  Switch: '<S129>/Switch12'
         *  Switch: '<S129>/Switch14'
         *  Switch: '<S129>/Switch16'
         *  Switch: '<S129>/Switch8'
         *  Switch: '<S129>/Switch9'
         */
        if (rtb_Logical3_k)
        {
            /* Switch: '<S129>/Switch7' incorporates:
             *  Constant: '<S144>/Constant'
             *  Switch: '<S129>/Switch4'
             *  Switch: '<S129>/Switch9'
             */
            VeHVTC_e_VoltSrc = CeHVTR_e_MtrBV;
        }
        else if (rtb_Logical2)
        {
            /* Switch: '<S129>/Switch10' incorporates:
             *  Constant: '<S143>/Constant'
             *  Switch: '<S129>/Switch7'
             */
            VeHVTC_e_VoltSrc = CeHVTR_e_MtrAV;
        }
        else if (rtb_Logical11_o)
        {
            /* Switch: '<S129>/Switch12' incorporates:
             *  Constant: '<S132>/Constant'
             *  Switch: '<S129>/Switch10'
             *  Switch: '<S129>/Switch7'
             */
            VeHVTC_e_VoltSrc = CeHVTR_e_MtrCV;
        }
        else if (rtb_Logical5)
        {
            /* Switch: '<S129>/Switch14' incorporates:
             *  Constant: '<S145>/Constant'
             *  Switch: '<S129>/Switch10'
             *  Switch: '<S129>/Switch12'
             *  Switch: '<S129>/Switch7'
             */
            VeHVTC_e_VoltSrc = CeHVTR_e_APMHV;
        }
        else if (rtb_Logical22)
        {
            /* Switch: '<S129>/Switch16' incorporates:
             *  Constant: '<S133>/Constant'
             *  Switch: '<S129>/Switch10'
             *  Switch: '<S129>/Switch12'
             *  Switch: '<S129>/Switch14'
             *  Switch: '<S129>/Switch7'
             */
            VeHVTC_e_VoltSrc = CeHVTR_e_HVAC;
        }
        else
        {
            /* Switch: '<S129>/Switch7' incorporates:
             *  Constant: '<S146>/Constant'
             *  Switch: '<S129>/Switch10'
             *  Switch: '<S129>/Switch12'
             *  Switch: '<S129>/Switch14'
             *  Switch: '<S129>/Switch16'
             */
            VeHVTC_e_VoltSrc = CeHVTR_e_NoSrcAvlb;
        }

        /* End of Switch: '<S129>/Switch4' */
    }

    /* End of Switch: '<S128>/Switch1' */

    /* Logic: '<S107>/Logical2' incorporates:
     *  Constant: '<S148>/Constant'
     *  RelationalOperator: '<S107>/Comparison1'
     *  Switch: '<S129>/Switch7'
     */
    rtb_Logical1_el = ((VeHVTI_b_LocBPCM) || (((uint32)VeHVTC_e_VoltSrc) ==
                        CeHVTR_e_NoSrcAvlb));

    /* UnitDelay: '<S12>/Unit Delay2' incorporates:
     *  UnitDelay: '<S12>/Unit Delay1'
     */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    /* UnitDelay: '<S12>/Unit Delay2' */
    rtb_UnitDelay2_f = HVTR_ac_DW.UnitDelay2_DSTATE_cs;

    /* UnitDelay: '<S12>/Unit Delay1' */
    rtb_UnitDelay1_b = HVTR_ac_DW.UnitDelay1_DSTATE_k;

#endif

    /* End of UnitDelay: '<S12>/Unit Delay2' */

    /* Outputs for Atomic SubSystem: '<S12>/Subsystem' */
    /* DataTypeConversion: '<S11>/DataTypeConversion' */
#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9
#if Rte_SysCon_Variant_HVTR_HVIL_2

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType1' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S178>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S178>/Comparison11' incorporates:
     *  Constant: '<S189>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* Logic: '<S178>/Logical4' incorporates:
     *  Constant: '<S190>/Constant'
     *  Constant: '<S191>/Constant'
     *  Constant: '<S194>/Constant'
     *  Constant: '<S195>/Constant'
     *  Logic: '<S178>/Logical1'
     *  Logic: '<S178>/Logical3'
     *  Logic: '<S178>/Logical6'
     *  RelationalOperator: '<S178>/Comparison10'
     *  RelationalOperator: '<S178>/Comparison16'
     *  RelationalOperator: '<S178>/Comparison17'
     *  RelationalOperator: '<S178>/Comparison18'
     *  RelationalOperator: '<S178>/Comparison19'
     *  RelationalOperator: '<S178>/Comparison20'
     *  RelationalOperator: '<S178>/Comparison6'
     *  RelationalOperator: '<S178>/Comparison7'
     *  RelationalOperator: '<S178>/Comparison8'
     *  RelationalOperator: '<S178>/Comparison9'
     *  Switch: '<S7>/Switch10'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    rtb_Comparison4_a = (((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkFailed) || (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HVBatIntrlkIntrnlStat) ==
                            CeBPCR_e_HVBatIntrlkFail)) || (((((((uint32)
        VeHVTI_e_MCPA_HVILSts) == CeHVTR_e_IntrlkInvalid) || (((uint32)
        VeHVTI_e_MCPB_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_OBCM_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HVBatIntrlkIntrnlStat) == CeBPCR_e_HVBatIntrlkINV))) ||
                         (((((VeHVTI_b_MCPA_HVILStsFA) ||
        (VeHVTI_b_MCPB_HVILStsFA)) || (VeHVTI_b_OBCM_HVILStsFA)) ||
                           (VeHVTI_b_HV_BatInrlkStatFA)) ||
                          (VeHVTI_b_HVBatIntrlkIntrnlStatFA)));

    /* Outputs for Atomic SubSystem: '<S178>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S203>/EdgeRising' */
    /* Logic: '<S211>/AND' incorporates:
     *  Logic: '<S211>/OR1'
     *  UnitDelay: '<S211>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_bx));

    /* Update for UnitDelay: '<S211>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_bx = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S203>/EdgeRising' */

    /* Switch: '<S203>/Switch1' incorporates:
     *  Logic: '<S203>/OR'
     *  Logic: '<S203>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S203>/Switch1' incorporates:
         *  Constant: '<S203>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S203>/Switch1' incorporates:
         *  Constant: '<S198>/Calib'
         *  MinMax: '<S203>/Minimum'
         *  Sum: '<S203>/Summation'
         *  UnitDelay: '<S203>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_h);
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_h = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S178>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S178>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S202>/EdgeRising' */
    /* Logic: '<S210>/AND' incorporates:
     *  Logic: '<S210>/OR1'
     *  UnitDelay: '<S178>/Unit Delay'
     *  UnitDelay: '<S210>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_cqy) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_ejq));

    /* Update for UnitDelay: '<S210>/Unit Delay' incorporates:
     *  UnitDelay: '<S178>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ejq = HVTR_ac_DW.UnitDelay_DSTATE_cqy;

    /* End of Outputs for SubSystem: '<S202>/EdgeRising' */

    /* Switch: '<S202>/Switch1' incorporates:
     *  Constant: '<S197>/Calib'
     *  Constant: '<S202>/Constant Value'
     *  Logic: '<S202>/OR'
     *  Logic: '<S202>/OR1'
     *  MinMax: '<S202>/Minimum'
     *  Sum: '<S202>/Summation'
     *  UnitDelay: '<S178>/Unit Delay'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_cqy) || rtb_Logical1)
    {
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S202>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_pm) + 1U)))
    {
        /* MinMax: '<S202>/Minimum' incorporates:
         *  Constant: '<S197>/Calib'
         *  Switch: '<S202>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S202>/Constant Value'
         *  MinMax: '<S202>/Minimum'
         *  Sum: '<S202>/Summation'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_pm) + 1U);
    }

    /* End of Switch: '<S202>/Switch1' */

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_pm = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S178>/Turn On Delay Time' */
    /* Logic: '<S178>/Logical5' incorporates:
     *  Constant: '<S197>/Calib'
     *  Constant: '<S198>/Calib'
     *  Logic: '<S202>/AND'
     *  Logic: '<S203>/AND'
     *  RelationalOperator: '<S202>/Greater  Than'
     *  RelationalOperator: '<S203>/Greater  Than'
     *  UnitDelay: '<S178>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_cqy) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S178>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S178>/Turn On Delay Sample' */

    /* Logic: '<S178>/Logical' incorporates:
     *  Constant: '<S192>/Constant'
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S178>/Comparison1'
     *  RelationalOperator: '<S178>/Comparison10'
     *  RelationalOperator: '<S178>/Comparison2'
     *  RelationalOperator: '<S178>/Comparison3'
     *  RelationalOperator: '<S178>/Comparison4'
     *  RelationalOperator: '<S178>/Comparison5'
     *  RelationalOperator: '<S178>/Comparison6'
     *  RelationalOperator: '<S178>/Comparison7'
     *  RelationalOperator: '<S178>/Comparison8'
     *  RelationalOperator: '<S178>/Comparison9'
     *  Switch: '<S7>/Switch10'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    VeHVTR_b_HVIL_Passed = (((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkPassed) && (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HVBatIntrlkIntrnlStat) ==
        CeBPCR_e_HVBatIntrlkPass));

    /* If: '<S178>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S178>/Failed' incorporates:
         *  ActionPort: '<S196>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S178>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S178>/Passed' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S178>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S178>/Not_Sourced' incorporates:
         *  ActionPort: '<S199>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S178>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S178>/PreviousValue' incorporates:
         *  ActionPort: '<S201>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S178>/PreviousValue' */
    }

    /* End of If: '<S178>/If' */

    /* Update for UnitDelay: '<S178>/Unit Delay' incorporates:
     *  Constant: '<S178>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_cqy = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType1' */
#elif Rte_SysCon_Variant_HVTR_HVIL_3

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType2' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S179>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* Switch: '<S179>/Switch3' incorporates:
     *  Constant: '<S232>/Calib'
     */
    if (KeHVTR_b_Internl_HVIL_NA)
    {
        /* Switch: '<S179>/Switch3' incorporates:
         *  Constant: '<S218>/Constant'
         */
        rtb_Switch3_kd = CeBPCR_e_HVBatIntrlkPass;
    }
    else
    {
        /* Switch: '<S179>/Switch3' incorporates:
         *  Switch: '<S7>/Switch10'
         */
        rtb_Switch3_kd = VeHVTI_e_HVBatIntrlkIntrnlStat;
    }

    /* End of Switch: '<S179>/Switch3' */

    /* RelationalOperator: '<S179>/Comparison11' incorporates:
     *  Constant: '<S212>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_ExternalHVIL_NS = (((uint32)rtb_UnitDelay2_f) ==
        CeHVTR_e_IntrlkNotSourced);

    /* RelationalOperator: '<S179>/Comparison2' incorporates:
     *  Constant: '<S216>/Constant'
     *  UnitDelay: '<S12>/Unit Delay1'
     */
    VeHVTR_b_IntrnlHVIL_NS = (((uint32)rtb_UnitDelay1_b) ==
        CeBPCR_e_HVBatIntrlkSNA);

    /* RelationalOperator: '<S179>/Comparison3' incorporates:
     *  Constant: '<S217>/Constant'
     *  Switch: '<S7>/Switch4'
     */
    VeHVTR_b_ExternalHVIL_Passed = (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkPassed);

    /* RelationalOperator: '<S179>/Comparison9' incorporates:
     *  Constant: '<S213>/Constant'
     */
    VeHVTR_b_IntrnlHVIL_Passed = (((uint32)rtb_Switch3_kd) ==
        CeBPCR_e_HVBatIntrlkPass);

    /* Logic: '<S179>/Logical4' incorporates:
     *  Constant: '<S215>/Constant'
     *  Constant: '<S220>/Constant'
     *  Constant: '<S231>/Calib'
     *  Logic: '<S179>/Logical10'
     *  RelationalOperator: '<S179>/Comparison19'
     *  RelationalOperator: '<S179>/Comparison3'
     *  RelationalOperator: '<S179>/Comparison8'
     *  Switch: '<S7>/Switch4'
     */
    rtb_Comparison4_a = (((((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
                           CeHVTR_e_IntrlkFailed) || (((uint32)
                            VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid))
                         || ((VeHVTI_b_HV_BatInrlkStatFA) &&
                          (KeHVTR_b_HVILIntrlkStatFAEnbl)));

    /* Outputs for Atomic SubSystem: '<S179>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S236>/EdgeRising' */
    /* Logic: '<S246>/AND' incorporates:
     *  Logic: '<S246>/OR1'
     *  UnitDelay: '<S246>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_lc));

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_lc = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S236>/EdgeRising' */

    /* Switch: '<S236>/Switch1' incorporates:
     *  Logic: '<S236>/OR'
     *  Logic: '<S236>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S236>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S233>/Calib'
         *  MinMax: '<S236>/Minimum'
         *  Sum: '<S236>/Summation'
         *  UnitDelay: '<S236>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_jd);
    }

    /* End of Switch: '<S236>/Switch1' */

    /* Update for UnitDelay: '<S236>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_jd = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S179>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S179>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S234>/EdgeRising' */
    /* Logic: '<S244>/AND' incorporates:
     *  Logic: '<S244>/OR1'
     *  UnitDelay: '<S179>/Unit Delay'
     *  UnitDelay: '<S244>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_hx) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_a2));

    /* Update for UnitDelay: '<S244>/Unit Delay' incorporates:
     *  UnitDelay: '<S179>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_a2 = HVTR_ac_DW.UnitDelay_DSTATE_hx;

    /* End of Outputs for SubSystem: '<S234>/EdgeRising' */

    /* Switch: '<S234>/Switch1' incorporates:
     *  Constant: '<S229>/Calib'
     *  Constant: '<S234>/Constant Value'
     *  Logic: '<S234>/OR'
     *  Logic: '<S234>/OR1'
     *  MinMax: '<S234>/Minimum'
     *  Sum: '<S234>/Summation'
     *  UnitDelay: '<S179>/Unit Delay'
     *  UnitDelay: '<S234>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_hx) || rtb_Logical1)
    {
        /* Switch: '<S234>/Switch1' incorporates:
         *  Constant: '<S234>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_oc) + 1U)))
    {
        /* MinMax: '<S234>/Minimum' incorporates:
         *  Constant: '<S229>/Calib'
         *  Switch: '<S234>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S234>/Switch1' incorporates:
         *  Constant: '<S234>/Constant Value'
         *  MinMax: '<S234>/Minimum'
         *  Sum: '<S234>/Summation'
         *  UnitDelay: '<S234>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_oc) + 1U);
    }

    /* End of Switch: '<S234>/Switch1' */

    /* Update for UnitDelay: '<S234>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_oc = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S179>/Turn On Delay Time' */
    /* Logic: '<S179>/Logical5' incorporates:
     *  Constant: '<S229>/Calib'
     *  Constant: '<S233>/Calib'
     *  Logic: '<S234>/AND'
     *  Logic: '<S236>/AND'
     *  RelationalOperator: '<S234>/Greater  Than'
     *  RelationalOperator: '<S236>/Greater  Than'
     *  UnitDelay: '<S179>/Unit Delay'
     */
    VeHVTR_b_EnternalHVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_hx) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S179>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S179>/Turn On Delay Sample' */

    /* If: '<S179>/If' */
    if (VeHVTR_b_EnternalHVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S179>/ExternalHVILFailed' incorporates:
         *  ActionPort: '<S221>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrlkStat' incorporates:
         *  Constant: '<S238>/Constant'
         *  SignalConversion generated from: '<S221>/Out1'
         */
        rtb_VariantMergeForOutportHV_In = CeHVTR_e_IntrlkFailed;

        /* End of Outputs for SubSystem: '<S179>/ExternalHVILFailed' */
    }
    else if (VeHVTR_b_ExternalHVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S179>/ExternalHVILPassed' incorporates:
         *  ActionPort: '<S223>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrlkStat' incorporates:
         *  Constant: '<S240>/Constant'
         *  SignalConversion generated from: '<S223>/Out1'
         */
        rtb_VariantMergeForOutportHV_In = CeHVTR_e_IntrlkPassed;

        /* End of Outputs for SubSystem: '<S179>/ExternalHVILPassed' */
    }
    else if (VeHVTR_b_ExternalHVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S179>/ExternalHVILNot_Sourced' incorporates:
         *  ActionPort: '<S222>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrlkStat' incorporates:
         *  Constant: '<S239>/Constant'
         *  SignalConversion generated from: '<S222>/Out1'
         */
        rtb_VariantMergeForOutportHV_In = CeHVTR_e_IntrlkNotSourced;

        /* End of Outputs for SubSystem: '<S179>/ExternalHVILNot_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S179>/ExternalHVILPreviousValue' incorporates:
         *  ActionPort: '<S224>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrlkStat' incorporates:
         *  Inport: '<S224>/Last_HV_IntrlkStat'
         *  UnitDelay: '<S12>/Unit Delay2'
         */
        rtb_VariantMergeForOutportHV_In = rtb_UnitDelay2_f;

        /* End of Outputs for SubSystem: '<S179>/ExternalHVILPreviousValue' */
    }

    /* End of If: '<S179>/If' */

    /* Logic: '<S179>/Logical13' incorporates:
     *  Constant: '<S214>/Constant'
     *  Constant: '<S219>/Constant'
     *  Constant: '<S230>/Calib'
     *  Constant: '<S232>/Calib'
     *  Logic: '<S179>/Logical8'
     *  RelationalOperator: '<S179>/Comparison1'
     *  RelationalOperator: '<S179>/Comparison4'
     *  Switch: '<S179>/Switch1'
     */
    rtb_Comparison4_a = (((((uint32)rtb_Switch3_kd) == CeBPCR_e_HVBatIntrlkFail)
                          || (((uint32)rtb_Switch3_kd) ==
                           CeBPCR_e_HVBatIntrlkINV)) ||
                         (((!KeHVTR_b_Internl_HVIL_NA) &&
                           (VeHVTI_b_HVBatIntrlkIntrnlStatFA)) &&
                          (KeHVTR_b_HVILIntrlkIntrnlStatFAEnbl)));

    /* Outputs for Atomic SubSystem: '<S179>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S237>/EdgeRising' */
    /* Logic: '<S247>/AND' incorporates:
     *  Logic: '<S247>/OR1'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_hy));

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_hy = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S237>/EdgeRising' */

    /* Switch: '<S237>/Switch1' incorporates:
     *  Logic: '<S237>/OR'
     *  Logic: '<S237>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S237>/Switch1' incorporates:
         *  Constant: '<S237>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S237>/Switch1' incorporates:
         *  Constant: '<S233>/Calib'
         *  MinMax: '<S237>/Minimum'
         *  Sum: '<S237>/Summation'
         *  UnitDelay: '<S237>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_oa);
    }

    /* End of Switch: '<S237>/Switch1' */

    /* Update for UnitDelay: '<S237>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_oa = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S179>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S179>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S235>/EdgeRising' */
    /* Logic: '<S245>/AND' incorporates:
     *  Logic: '<S245>/OR1'
     *  UnitDelay: '<S179>/Unit Delay1'
     *  UnitDelay: '<S245>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay1_DSTATE) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_il));

    /* Update for UnitDelay: '<S245>/Unit Delay' incorporates:
     *  UnitDelay: '<S179>/Unit Delay1'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_il = HVTR_ac_DW.UnitDelay1_DSTATE;

    /* End of Outputs for SubSystem: '<S235>/EdgeRising' */

    /* Switch: '<S235>/Switch1' incorporates:
     *  Constant: '<S229>/Calib'
     *  Constant: '<S235>/Constant Value'
     *  Logic: '<S235>/OR'
     *  Logic: '<S235>/OR1'
     *  MinMax: '<S235>/Minimum'
     *  Sum: '<S235>/Summation'
     *  UnitDelay: '<S179>/Unit Delay1'
     *  UnitDelay: '<S235>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay1_DSTATE) || rtb_Logical1)
    {
        /* Switch: '<S235>/Switch1' incorporates:
         *  Constant: '<S235>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_i5) + 1U)))
    {
        /* MinMax: '<S235>/Minimum' incorporates:
         *  Constant: '<S229>/Calib'
         *  Switch: '<S235>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S235>/Switch1' incorporates:
         *  Constant: '<S235>/Constant Value'
         *  MinMax: '<S235>/Minimum'
         *  Sum: '<S235>/Summation'
         *  UnitDelay: '<S235>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_i5) + 1U);
    }

    /* End of Switch: '<S235>/Switch1' */

    /* Update for UnitDelay: '<S235>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_i5 = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S179>/Turn On Delay Time1' */
    /* Logic: '<S179>/Logical14' incorporates:
     *  Constant: '<S229>/Calib'
     *  Constant: '<S233>/Calib'
     *  Logic: '<S235>/AND'
     *  Logic: '<S237>/AND'
     *  RelationalOperator: '<S235>/Greater  Than'
     *  RelationalOperator: '<S237>/Greater  Than'
     *  UnitDelay: '<S179>/Unit Delay1'
     */
    VeHVTR_b_IntrnlHVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay1_DSTATE) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S179>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S179>/Turn On Delay Sample1' */

    /* If: '<S179>/If1' */
    if (VeHVTR_b_IntrnlHVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S179>/InternalHVILFailed' incorporates:
         *  ActionPort: '<S225>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
         *  Constant: '<S241>/Constant'
         *  SignalConversion generated from: '<S225>/Out1'
         */
        HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkFail;

        /* End of Outputs for SubSystem: '<S179>/InternalHVILFailed' */
    }
    else if (VeHVTR_b_IntrnlHVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S179>/InternalHVILPassed' incorporates:
         *  ActionPort: '<S227>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
         *  Constant: '<S243>/Constant'
         *  SignalConversion generated from: '<S227>/Out1'
         */
        HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkPass;

        /* End of Outputs for SubSystem: '<S179>/InternalHVILPassed' */
    }
    else if (VeHVTR_b_IntrnlHVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S179>/InternalHVILNot_Sourced' incorporates:
         *  ActionPort: '<S226>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
         *  Constant: '<S242>/Constant'
         *  SignalConversion generated from: '<S226>/Out1'
         */
        HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

        /* End of Outputs for SubSystem: '<S179>/InternalHVILNot_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S179>/InternalHVILPreviousValue' incorporates:
         *  ActionPort: '<S228>/Action Port'
         */
        /* VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
         *  Inport: '<S228>/Last_HV_IntrnlIntrlkStat'
         *  UnitDelay: '<S12>/Unit Delay1'
         */
        HVTR_ac_B.VariantMergeForOutportHV_Intrnl = rtb_UnitDelay1_b;

        /* End of Outputs for SubSystem: '<S179>/InternalHVILPreviousValue' */
    }

    /* End of If: '<S179>/If1' */

    /* Update for UnitDelay: '<S179>/Unit Delay' incorporates:
     *  Constant: '<S179>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_hx = true;

    /* Update for UnitDelay: '<S179>/Unit Delay1' incorporates:
     *  Constant: '<S179>/TRUE Constant1'
     */
    HVTR_ac_DW.UnitDelay1_DSTATE = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType2' */
#elif Rte_SysCon_Variant_HVTR_HVIL_4

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType3' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S180>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S180>/Comparison11' incorporates:
     *  Constant: '<S248>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* Logic: '<S180>/Logical4' incorporates:
     *  Constant: '<S249>/Constant'
     *  Constant: '<S250>/Constant'
     *  Constant: '<S253>/Constant'
     *  Constant: '<S254>/Constant'
     *  Logic: '<S180>/Logical1'
     *  Logic: '<S180>/Logical3'
     *  Logic: '<S180>/Logical6'
     *  RelationalOperator: '<S180>/Comparison10'
     *  RelationalOperator: '<S180>/Comparison16'
     *  RelationalOperator: '<S180>/Comparison17'
     *  RelationalOperator: '<S180>/Comparison20'
     *  RelationalOperator: '<S180>/Comparison6'
     *  RelationalOperator: '<S180>/Comparison9'
     *  Switch: '<S7>/Switch10'
     *  Switch: '<S7>/Switch33'
     *  Switch: '<S7>/Switch35'
     */
    rtb_Comparison4_a = (((((((uint32)VeHVTI_e_FC_DCDC_IntrlkStat) ==
        CeHVTR_e_IntrlkFailed) || (((uint32)VeHVTI_e_HEAC_IntrlkStat) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HVBatIntrlkIntrnlStat) ==
                            CeBPCR_e_HVBatIntrlkFail)) || (((((uint32)
        VeHVTI_e_FC_DCDC_IntrlkStat) == CeHVTR_e_IntrlkInvalid) || (((uint32)
        VeHVTI_e_HEAC_IntrlkStat) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HVBatIntrlkIntrnlStat) == CeBPCR_e_HVBatIntrlkINV))) ||
                         (((VeHVTI_b_FC_DCDC_IntrlkStat_FA) ||
                           (VeHVTI_b_HEAC_IntrlkStat_FA)) ||
                          (VeHVTI_b_HVBatIntrlkIntrnlStatFA)));

    /* Outputs for Atomic SubSystem: '<S180>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S262>/EdgeRising' */
    /* Logic: '<S270>/AND' incorporates:
     *  Logic: '<S270>/OR1'
     *  UnitDelay: '<S270>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_mj));

    /* Update for UnitDelay: '<S270>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_mj = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S262>/EdgeRising' */

    /* Switch: '<S262>/Switch1' incorporates:
     *  Logic: '<S262>/OR'
     *  Logic: '<S262>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S262>/Switch1' incorporates:
         *  Constant: '<S262>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S262>/Switch1' incorporates:
         *  Constant: '<S257>/Calib'
         *  MinMax: '<S262>/Minimum'
         *  Sum: '<S262>/Summation'
         *  UnitDelay: '<S262>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S262>/Switch1' */

    /* Update for UnitDelay: '<S262>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_n = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S180>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S180>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S261>/EdgeRising' */
    /* Logic: '<S269>/AND' incorporates:
     *  Logic: '<S269>/OR1'
     *  UnitDelay: '<S180>/Unit Delay'
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_kg) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_b0));

    /* Update for UnitDelay: '<S269>/Unit Delay' incorporates:
     *  UnitDelay: '<S180>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_b0 = HVTR_ac_DW.UnitDelay_DSTATE_kg;

    /* End of Outputs for SubSystem: '<S261>/EdgeRising' */

    /* Switch: '<S261>/Switch1' incorporates:
     *  Constant: '<S256>/Calib'
     *  Constant: '<S261>/Constant Value'
     *  Logic: '<S261>/OR'
     *  Logic: '<S261>/OR1'
     *  MinMax: '<S261>/Minimum'
     *  Sum: '<S261>/Summation'
     *  UnitDelay: '<S180>/Unit Delay'
     *  UnitDelay: '<S261>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_kg) || rtb_Logical1)
    {
        /* Switch: '<S261>/Switch1' incorporates:
         *  Constant: '<S261>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S261>/Minimum' incorporates:
         *  Constant: '<S256>/Calib'
         *  Switch: '<S261>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S261>/Switch1' incorporates:
         *  Constant: '<S261>/Constant Value'
         *  MinMax: '<S261>/Minimum'
         *  Sum: '<S261>/Summation'
         *  UnitDelay: '<S261>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S261>/Switch1' */

    /* Update for UnitDelay: '<S261>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S180>/Turn On Delay Time' */
    /* Logic: '<S180>/Logical5' incorporates:
     *  Constant: '<S256>/Calib'
     *  Constant: '<S257>/Calib'
     *  Logic: '<S261>/AND'
     *  Logic: '<S262>/AND'
     *  RelationalOperator: '<S261>/Greater  Than'
     *  RelationalOperator: '<S262>/Greater  Than'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_kg) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S180>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S180>/Turn On Delay Sample' */

    /* Logic: '<S180>/Logical' incorporates:
     *  Constant: '<S251>/Constant'
     *  Constant: '<S252>/Constant'
     *  RelationalOperator: '<S180>/Comparison1'
     *  RelationalOperator: '<S180>/Comparison10'
     *  RelationalOperator: '<S180>/Comparison4'
     *  RelationalOperator: '<S180>/Comparison5'
     *  RelationalOperator: '<S180>/Comparison6'
     *  RelationalOperator: '<S180>/Comparison9'
     *  Switch: '<S7>/Switch10'
     *  Switch: '<S7>/Switch33'
     *  Switch: '<S7>/Switch35'
     */
    VeHVTR_b_HVIL_Passed = (((((uint32)VeHVTI_e_FC_DCDC_IntrlkStat) ==
        CeHVTR_e_IntrlkPassed) && (((uint32)VeHVTI_e_HEAC_IntrlkStat) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HVBatIntrlkIntrnlStat) ==
        CeBPCR_e_HVBatIntrlkPass));

    /* If: '<S180>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S180>/Failed' incorporates:
         *  ActionPort: '<S255>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S180>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S180>/Passed' incorporates:
         *  ActionPort: '<S259>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S180>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S180>/Not_Sourced' incorporates:
         *  ActionPort: '<S258>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S180>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S180>/PreviousValue' incorporates:
         *  ActionPort: '<S260>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S180>/PreviousValue' */
    }

    /* End of If: '<S180>/If' */

    /* Update for UnitDelay: '<S180>/Unit Delay' incorporates:
     *  Constant: '<S180>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_kg = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType3' */
#elif Rte_SysCon_Variant_HVTR_HVIL_5

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType4' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S181>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S181>/Comparison11' incorporates:
     *  Constant: '<S271>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* Switch: '<S181>/Switch3' incorporates:
     *  Constant: '<S278>/Calib'
     */
    if (KeHVTR_b_Dsbl_PPIMHVIL)
    {
        /* Switch: '<S181>/Switch3' incorporates:
         *  Constant: '<S273>/Constant'
         */
        rtb_TmpSignalConversionAtVeBPCR = CeHVTR_e_IntrlkPassed;
    }
    else
    {
        /* Switch: '<S181>/Switch3' incorporates:
         *  Switch: '<S7>/Switch25'
         */
        rtb_TmpSignalConversionAtVeBPCR = VeHVTR_e_V2X_HVILSts;
    }

    /* End of Switch: '<S181>/Switch3' */

    /* Logic: '<S181>/Logical4' incorporates:
     *  Constant: '<S272>/Constant'
     *  Constant: '<S275>/Constant'
     *  Constant: '<S278>/Calib'
     *  Logic: '<S181>/Logical1'
     *  Logic: '<S181>/Logical3'
     *  Logic: '<S181>/Logical6'
     *  RelationalOperator: '<S181>/Comparison15'
     *  RelationalOperator: '<S181>/Comparison17'
     *  RelationalOperator: '<S181>/Comparison18'
     *  RelationalOperator: '<S181>/Comparison19'
     *  RelationalOperator: '<S181>/Comparison20'
     *  RelationalOperator: '<S181>/Comparison21'
     *  RelationalOperator: '<S181>/Comparison23'
     *  RelationalOperator: '<S181>/Comparison24'
     *  RelationalOperator: '<S181>/Comparison6'
     *  RelationalOperator: '<S181>/Comparison7'
     *  RelationalOperator: '<S181>/Comparison8'
     *  RelationalOperator: '<S181>/Comparison9'
     *  Switch: '<S181>/Switch1'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    rtb_Comparison4_a = ((((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkFailed) || (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)rtb_TmpSignalConversionAtVeBPCR) ==
                            CeHVTR_e_IntrlkFailed)) || ((((((((uint32)
        VeHVTI_e_MCPA_HVILSts) == CeHVTR_e_IntrlkInvalid) || (((uint32)
        VeHVTI_e_MCPB_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_OBCM_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_ECH_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        rtb_TmpSignalConversionAtVeBPCR) == CeHVTR_e_IntrlkInvalid))) ||
                         ((((((VeHVTI_b_MCPA_HVILStsFA) ||
        (VeHVTI_b_MCPB_HVILStsFA)) || (VeHVTI_b_OBCM_HVILStsFA)) ||
                            (VeHVTI_b_HV_BatInrlkStatFA)) ||
                           (VeHVTI_b_ECH_HVILSts_FA)) ||
                          ((!KeHVTR_b_Dsbl_PPIMHVIL) && (VeHVTR_b_V2X_HVILSts_FA))));

    /* Outputs for Atomic SubSystem: '<S181>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S284>/EdgeRising' */
    /* Logic: '<S292>/AND' incorporates:
     *  Logic: '<S292>/OR1'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_mch));

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_mch = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S284>/EdgeRising' */

    /* Switch: '<S284>/Switch1' incorporates:
     *  Logic: '<S284>/OR'
     *  Logic: '<S284>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  Constant: '<S284>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  Constant: '<S279>/Calib'
         *  MinMax: '<S284>/Minimum'
         *  Sum: '<S284>/Summation'
         *  UnitDelay: '<S284>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_d);
    }

    /* End of Switch: '<S284>/Switch1' */

    /* Update for UnitDelay: '<S284>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_d = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S181>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S181>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S283>/EdgeRising' */
    /* Logic: '<S291>/AND' incorporates:
     *  Logic: '<S291>/OR1'
     *  UnitDelay: '<S181>/Unit Delay'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_as) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_nm));

    /* Update for UnitDelay: '<S291>/Unit Delay' incorporates:
     *  UnitDelay: '<S181>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_nm = HVTR_ac_DW.UnitDelay_DSTATE_as;

    /* End of Outputs for SubSystem: '<S283>/EdgeRising' */

    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S277>/Calib'
     *  Constant: '<S283>/Constant Value'
     *  Logic: '<S283>/OR'
     *  Logic: '<S283>/OR1'
     *  MinMax: '<S283>/Minimum'
     *  Sum: '<S283>/Summation'
     *  UnitDelay: '<S181>/Unit Delay'
     *  UnitDelay: '<S283>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_as) || rtb_Logical1)
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S283>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_phi) + 1U)))
    {
        /* MinMax: '<S283>/Minimum' incorporates:
         *  Constant: '<S277>/Calib'
         *  Switch: '<S283>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S283>/Constant Value'
         *  MinMax: '<S283>/Minimum'
         *  Sum: '<S283>/Summation'
         *  UnitDelay: '<S283>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_phi) + 1U);
    }

    /* End of Switch: '<S283>/Switch1' */

    /* Update for UnitDelay: '<S283>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_phi = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S181>/Turn On Delay Time' */
    /* Logic: '<S181>/Logical5' incorporates:
     *  Constant: '<S277>/Calib'
     *  Constant: '<S279>/Calib'
     *  Logic: '<S283>/AND'
     *  Logic: '<S284>/AND'
     *  RelationalOperator: '<S283>/Greater  Than'
     *  RelationalOperator: '<S284>/Greater  Than'
     *  UnitDelay: '<S181>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_as) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S181>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S181>/Turn On Delay Sample' */

    /* Logic: '<S181>/Logical' incorporates:
     *  Constant: '<S274>/Constant'
     *  RelationalOperator: '<S181>/Comparison1'
     *  RelationalOperator: '<S181>/Comparison15'
     *  RelationalOperator: '<S181>/Comparison2'
     *  RelationalOperator: '<S181>/Comparison22'
     *  RelationalOperator: '<S181>/Comparison25'
     *  RelationalOperator: '<S181>/Comparison3'
     *  RelationalOperator: '<S181>/Comparison4'
     *  RelationalOperator: '<S181>/Comparison6'
     *  RelationalOperator: '<S181>/Comparison7'
     *  RelationalOperator: '<S181>/Comparison8'
     *  RelationalOperator: '<S181>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    VeHVTR_b_HVIL_Passed = ((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkPassed) && (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)rtb_TmpSignalConversionAtVeBPCR) ==
        CeHVTR_e_IntrlkPassed));

    /* If: '<S181>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S181>/Failed' incorporates:
         *  ActionPort: '<S276>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S181>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S181>/Passed' incorporates:
         *  ActionPort: '<S281>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S181>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S181>/Not_Sourced' incorporates:
         *  ActionPort: '<S280>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S181>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S181>/PreviousValue' incorporates:
         *  ActionPort: '<S282>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S181>/PreviousValue' */
    }

    /* End of If: '<S181>/If' */

    /* Update for UnitDelay: '<S181>/Unit Delay' incorporates:
     *  Constant: '<S181>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_as = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType4' */
#elif Rte_SysCon_Variant_HVTR_HVIL_6

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType5' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S182>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S182>/Comparison11' incorporates:
     *  Constant: '<S293>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* Logic: '<S182>/Logical4' incorporates:
     *  Constant: '<S294>/Constant'
     *  Constant: '<S296>/Constant'
     *  Logic: '<S182>/Logical1'
     *  Logic: '<S182>/Logical3'
     *  Logic: '<S182>/Logical6'
     *  RelationalOperator: '<S182>/Comparison15'
     *  RelationalOperator: '<S182>/Comparison17'
     *  RelationalOperator: '<S182>/Comparison18'
     *  RelationalOperator: '<S182>/Comparison19'
     *  RelationalOperator: '<S182>/Comparison20'
     *  RelationalOperator: '<S182>/Comparison21'
     *  RelationalOperator: '<S182>/Comparison23'
     *  RelationalOperator: '<S182>/Comparison24'
     *  RelationalOperator: '<S182>/Comparison6'
     *  RelationalOperator: '<S182>/Comparison7'
     *  RelationalOperator: '<S182>/Comparison8'
     *  RelationalOperator: '<S182>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch22'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    rtb_Comparison4_a = ((((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkFailed) || (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_MCPC_HVILSts) ==
                            CeHVTR_e_IntrlkFailed)) || ((((((((uint32)
        VeHVTI_e_MCPA_HVILSts) == CeHVTR_e_IntrlkInvalid) || (((uint32)
        VeHVTI_e_MCPB_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_OBCM_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_ECH_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_MCPC_HVILSts) == CeHVTR_e_IntrlkInvalid))) ||
                         ((((((VeHVTI_b_MCPA_HVILStsFA) ||
        (VeHVTI_b_MCPB_HVILStsFA)) || (VeHVTI_b_OBCM_HVILStsFA)) ||
                            (VeHVTI_b_HV_BatInrlkStatFA)) ||
                           (VeHVTI_b_ECH_HVILSts_FA)) ||
                          (VeHVTI_b_MCPC_HVILStsFA)));

    /* Outputs for Atomic SubSystem: '<S182>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S304>/EdgeRising' */
    /* Logic: '<S312>/AND' incorporates:
     *  Logic: '<S312>/OR1'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_hq));

    /* Update for UnitDelay: '<S312>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_hq = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S304>/EdgeRising' */

    /* Switch: '<S304>/Switch1' incorporates:
     *  Logic: '<S304>/OR'
     *  Logic: '<S304>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S304>/Switch1' incorporates:
         *  Constant: '<S304>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S304>/Switch1' incorporates:
         *  Constant: '<S299>/Calib'
         *  MinMax: '<S304>/Minimum'
         *  Sum: '<S304>/Summation'
         *  UnitDelay: '<S304>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_p);
    }

    /* End of Switch: '<S304>/Switch1' */

    /* Update for UnitDelay: '<S304>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_p = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S182>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S182>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S303>/EdgeRising' */
    /* Logic: '<S311>/AND' incorporates:
     *  Logic: '<S311>/OR1'
     *  UnitDelay: '<S182>/Unit Delay'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_bt) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_ff));

    /* Update for UnitDelay: '<S311>/Unit Delay' incorporates:
     *  UnitDelay: '<S182>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ff = HVTR_ac_DW.UnitDelay_DSTATE_bt;

    /* End of Outputs for SubSystem: '<S303>/EdgeRising' */

    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S298>/Calib'
     *  Constant: '<S303>/Constant Value'
     *  Logic: '<S303>/OR'
     *  Logic: '<S303>/OR1'
     *  MinMax: '<S303>/Minimum'
     *  Sum: '<S303>/Summation'
     *  UnitDelay: '<S182>/Unit Delay'
     *  UnitDelay: '<S303>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_bt) || rtb_Logical1)
    {
        /* Switch: '<S303>/Switch1' incorporates:
         *  Constant: '<S303>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_e1) + 1U)))
    {
        /* MinMax: '<S303>/Minimum' incorporates:
         *  Constant: '<S298>/Calib'
         *  Switch: '<S303>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S303>/Switch1' incorporates:
         *  Constant: '<S303>/Constant Value'
         *  MinMax: '<S303>/Minimum'
         *  Sum: '<S303>/Summation'
         *  UnitDelay: '<S303>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_e1) + 1U);
    }

    /* End of Switch: '<S303>/Switch1' */

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_e1 = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S182>/Turn On Delay Time' */
    /* Logic: '<S182>/Logical5' incorporates:
     *  Constant: '<S298>/Calib'
     *  Constant: '<S299>/Calib'
     *  Logic: '<S303>/AND'
     *  Logic: '<S304>/AND'
     *  RelationalOperator: '<S303>/Greater  Than'
     *  RelationalOperator: '<S304>/Greater  Than'
     *  UnitDelay: '<S182>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_bt) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S182>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S182>/Turn On Delay Sample' */

    /* Logic: '<S182>/Logical' incorporates:
     *  Constant: '<S295>/Constant'
     *  RelationalOperator: '<S182>/Comparison1'
     *  RelationalOperator: '<S182>/Comparison15'
     *  RelationalOperator: '<S182>/Comparison2'
     *  RelationalOperator: '<S182>/Comparison22'
     *  RelationalOperator: '<S182>/Comparison23'
     *  RelationalOperator: '<S182>/Comparison25'
     *  RelationalOperator: '<S182>/Comparison3'
     *  RelationalOperator: '<S182>/Comparison4'
     *  RelationalOperator: '<S182>/Comparison6'
     *  RelationalOperator: '<S182>/Comparison7'
     *  RelationalOperator: '<S182>/Comparison8'
     *  RelationalOperator: '<S182>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch22'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    VeHVTR_b_HVIL_Passed = ((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkPassed) && (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_MCPC_HVILSts) ==
        CeHVTR_e_IntrlkPassed));

    /* If: '<S182>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S182>/Failed' incorporates:
         *  ActionPort: '<S297>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S182>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S182>/Passed' incorporates:
         *  ActionPort: '<S301>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S182>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S182>/Not_Sourced' incorporates:
         *  ActionPort: '<S300>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S182>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S182>/PreviousValue' incorporates:
         *  ActionPort: '<S302>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S182>/PreviousValue' */
    }

    /* End of If: '<S182>/If' */

    /* Update for UnitDelay: '<S182>/Unit Delay' incorporates:
     *  Constant: '<S182>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_bt = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType5' */
#elif Rte_SysCon_Variant_HVTR_HVIL_7

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType6' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S183>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S183>/Comparison11' incorporates:
     *  Constant: '<S313>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* Logic: '<S183>/Logical4' incorporates:
     *  Constant: '<S314>/Constant'
     *  Constant: '<S316>/Constant'
     *  Logic: '<S183>/Logical1'
     *  Logic: '<S183>/Logical3'
     *  Logic: '<S183>/Logical6'
     *  RelationalOperator: '<S183>/Comparison10'
     *  RelationalOperator: '<S183>/Comparison15'
     *  RelationalOperator: '<S183>/Comparison17'
     *  RelationalOperator: '<S183>/Comparison18'
     *  RelationalOperator: '<S183>/Comparison19'
     *  RelationalOperator: '<S183>/Comparison20'
     *  RelationalOperator: '<S183>/Comparison21'
     *  RelationalOperator: '<S183>/Comparison23'
     *  RelationalOperator: '<S183>/Comparison24'
     *  RelationalOperator: '<S183>/Comparison5'
     *  RelationalOperator: '<S183>/Comparison6'
     *  RelationalOperator: '<S183>/Comparison7'
     *  RelationalOperator: '<S183>/Comparison8'
     *  RelationalOperator: '<S183>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch28'
     *  Switch: '<S7>/Switch30'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    rtb_Comparison4_a = (((((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkFailed) || (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_APM2InterlockSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_APM3InterlockSts) ==
                            CeHVTR_e_IntrlkFailed)) || (((((((((uint32)
        VeHVTI_e_MCPA_HVILSts) == CeHVTR_e_IntrlkInvalid) || (((uint32)
        VeHVTI_e_MCPB_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_OBCM_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_ECH_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_APM2InterlockSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_APM3InterlockSts) == CeHVTR_e_IntrlkInvalid))) ||
                         (((((((VeHVTI_b_MCPA_HVILStsFA) ||
        (VeHVTI_b_MCPB_HVILStsFA)) || (VeHVTI_b_OBCM_HVILStsFA)) ||
        (VeHVTI_b_HV_BatInrlkStatFA)) || (VeHVTI_b_ECH_HVILSts_FA)) ||
                           (VeHVTI_b_APM2InterlockSts_FA)) ||
                          (VeHVTI_b_APM3InterlockSts_FA)));

    /* Outputs for Atomic SubSystem: '<S183>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S324>/EdgeRising' */
    /* Logic: '<S332>/AND' incorporates:
     *  Logic: '<S332>/OR1'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_jae));

    /* Update for UnitDelay: '<S332>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_jae = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S324>/EdgeRising' */

    /* Switch: '<S324>/Switch1' incorporates:
     *  Logic: '<S324>/OR'
     *  Logic: '<S324>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  Constant: '<S324>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S324>/Switch1' incorporates:
         *  Constant: '<S319>/Calib'
         *  MinMax: '<S324>/Minimum'
         *  Sum: '<S324>/Summation'
         *  UnitDelay: '<S324>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Update for UnitDelay: '<S324>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_g = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S183>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S183>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S323>/EdgeRising' */
    /* Logic: '<S331>/AND' incorporates:
     *  Logic: '<S331>/OR1'
     *  UnitDelay: '<S183>/Unit Delay'
     *  UnitDelay: '<S331>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_e0) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S331>/Unit Delay' incorporates:
     *  UnitDelay: '<S183>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_l = HVTR_ac_DW.UnitDelay_DSTATE_e0;

    /* End of Outputs for SubSystem: '<S323>/EdgeRising' */

    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S318>/Calib'
     *  Constant: '<S323>/Constant Value'
     *  Logic: '<S323>/OR'
     *  Logic: '<S323>/OR1'
     *  MinMax: '<S323>/Minimum'
     *  Sum: '<S323>/Summation'
     *  UnitDelay: '<S183>/Unit Delay'
     *  UnitDelay: '<S323>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_e0) || rtb_Logical1)
    {
        /* Switch: '<S323>/Switch1' incorporates:
         *  Constant: '<S323>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_a5) + 1U)))
    {
        /* MinMax: '<S323>/Minimum' incorporates:
         *  Constant: '<S318>/Calib'
         *  Switch: '<S323>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S323>/Switch1' incorporates:
         *  Constant: '<S323>/Constant Value'
         *  MinMax: '<S323>/Minimum'
         *  Sum: '<S323>/Summation'
         *  UnitDelay: '<S323>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_a5) + 1U);
    }

    /* End of Switch: '<S323>/Switch1' */

    /* Update for UnitDelay: '<S323>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_a5 = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S183>/Turn On Delay Time' */
    /* Logic: '<S183>/Logical5' incorporates:
     *  Constant: '<S318>/Calib'
     *  Constant: '<S319>/Calib'
     *  Logic: '<S323>/AND'
     *  Logic: '<S324>/AND'
     *  RelationalOperator: '<S323>/Greater  Than'
     *  RelationalOperator: '<S324>/Greater  Than'
     *  UnitDelay: '<S183>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_e0) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S183>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S183>/Turn On Delay Sample' */

    /* Logic: '<S183>/Logical' incorporates:
     *  Constant: '<S315>/Constant'
     *  RelationalOperator: '<S183>/Comparison1'
     *  RelationalOperator: '<S183>/Comparison12'
     *  RelationalOperator: '<S183>/Comparison15'
     *  RelationalOperator: '<S183>/Comparison2'
     *  RelationalOperator: '<S183>/Comparison22'
     *  RelationalOperator: '<S183>/Comparison23'
     *  RelationalOperator: '<S183>/Comparison25'
     *  RelationalOperator: '<S183>/Comparison3'
     *  RelationalOperator: '<S183>/Comparison4'
     *  RelationalOperator: '<S183>/Comparison5'
     *  RelationalOperator: '<S183>/Comparison6'
     *  RelationalOperator: '<S183>/Comparison7'
     *  RelationalOperator: '<S183>/Comparison8'
     *  RelationalOperator: '<S183>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch28'
     *  Switch: '<S7>/Switch30'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    VeHVTR_b_HVIL_Passed = (((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkPassed) && (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_APM2InterlockSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_APM3InterlockSts) ==
        CeHVTR_e_IntrlkPassed));

    /* If: '<S183>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S183>/Failed' incorporates:
         *  ActionPort: '<S317>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S183>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S183>/Passed' incorporates:
         *  ActionPort: '<S321>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S183>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S183>/Not_Sourced' incorporates:
         *  ActionPort: '<S320>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S183>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S183>/PreviousValue' incorporates:
         *  ActionPort: '<S322>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S183>/PreviousValue' */
    }

    /* End of If: '<S183>/If' */

    /* Update for UnitDelay: '<S183>/Unit Delay' incorporates:
     *  Constant: '<S183>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_e0 = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType6' */
#elif Rte_SysCon_Variant_HVTR_HVIL_8

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType7' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S184>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S184>/Comparison11' incorporates:
     *  Constant: '<S333>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* Logic: '<S184>/Logical4' incorporates:
     *  Constant: '<S334>/Constant'
     *  Constant: '<S336>/Constant'
     *  Logic: '<S184>/Logical1'
     *  Logic: '<S184>/Logical3'
     *  Logic: '<S184>/Logical6'
     *  RelationalOperator: '<S184>/Comparison15'
     *  RelationalOperator: '<S184>/Comparison17'
     *  RelationalOperator: '<S184>/Comparison18'
     *  RelationalOperator: '<S184>/Comparison19'
     *  RelationalOperator: '<S184>/Comparison20'
     *  RelationalOperator: '<S184>/Comparison21'
     *  RelationalOperator: '<S184>/Comparison23'
     *  RelationalOperator: '<S184>/Comparison24'
     *  RelationalOperator: '<S184>/Comparison6'
     *  RelationalOperator: '<S184>/Comparison7'
     *  RelationalOperator: '<S184>/Comparison8'
     *  RelationalOperator: '<S184>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch28'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    rtb_Comparison4_a = ((((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkFailed) || (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_APM2InterlockSts) ==
                            CeHVTR_e_IntrlkFailed)) || ((((((((uint32)
        VeHVTI_e_MCPA_HVILSts) == CeHVTR_e_IntrlkInvalid) || (((uint32)
        VeHVTI_e_MCPB_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_OBCM_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_ECH_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_APM2InterlockSts) == CeHVTR_e_IntrlkInvalid))) ||
                         ((((((VeHVTI_b_MCPA_HVILStsFA) ||
        (VeHVTI_b_MCPB_HVILStsFA)) || (VeHVTI_b_OBCM_HVILStsFA)) ||
                            (VeHVTI_b_HV_BatInrlkStatFA)) ||
                           (VeHVTI_b_ECH_HVILSts_FA)) ||
                          (VeHVTI_b_APM2InterlockSts_FA)));

    /* Outputs for Atomic SubSystem: '<S184>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S344>/EdgeRising' */
    /* Logic: '<S352>/AND' incorporates:
     *  Logic: '<S352>/OR1'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_hn));

    /* Update for UnitDelay: '<S352>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_hn = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S344>/EdgeRising' */

    /* Switch: '<S344>/Switch1' incorporates:
     *  Logic: '<S344>/OR'
     *  Logic: '<S344>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S344>/Switch1' incorporates:
         *  Constant: '<S344>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S344>/Switch1' incorporates:
         *  Constant: '<S339>/Calib'
         *  MinMax: '<S344>/Minimum'
         *  Sum: '<S344>/Summation'
         *  UnitDelay: '<S344>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_c);
    }

    /* End of Switch: '<S344>/Switch1' */

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_c = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S184>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S184>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S343>/EdgeRising' */
    /* Logic: '<S351>/AND' incorporates:
     *  Logic: '<S351>/OR1'
     *  UnitDelay: '<S184>/Unit Delay'
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_ca) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_ja));

    /* Update for UnitDelay: '<S351>/Unit Delay' incorporates:
     *  UnitDelay: '<S184>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ja = HVTR_ac_DW.UnitDelay_DSTATE_ca;

    /* End of Outputs for SubSystem: '<S343>/EdgeRising' */

    /* Switch: '<S343>/Switch1' incorporates:
     *  Constant: '<S338>/Calib'
     *  Constant: '<S343>/Constant Value'
     *  Logic: '<S343>/OR'
     *  Logic: '<S343>/OR1'
     *  MinMax: '<S343>/Minimum'
     *  Sum: '<S343>/Summation'
     *  UnitDelay: '<S184>/Unit Delay'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_ca) || rtb_Logical1)
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  Constant: '<S343>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_bv) + 1U)))
    {
        /* MinMax: '<S343>/Minimum' incorporates:
         *  Constant: '<S338>/Calib'
         *  Switch: '<S343>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  Constant: '<S343>/Constant Value'
         *  MinMax: '<S343>/Minimum'
         *  Sum: '<S343>/Summation'
         *  UnitDelay: '<S343>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_bv) + 1U);
    }

    /* End of Switch: '<S343>/Switch1' */

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_bv = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S184>/Turn On Delay Time' */
    /* Logic: '<S184>/Logical5' incorporates:
     *  Constant: '<S338>/Calib'
     *  Constant: '<S339>/Calib'
     *  Logic: '<S343>/AND'
     *  Logic: '<S344>/AND'
     *  RelationalOperator: '<S343>/Greater  Than'
     *  RelationalOperator: '<S344>/Greater  Than'
     *  UnitDelay: '<S184>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_ca) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S184>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S184>/Turn On Delay Sample' */

    /* Logic: '<S184>/Logical' incorporates:
     *  Constant: '<S335>/Constant'
     *  RelationalOperator: '<S184>/Comparison1'
     *  RelationalOperator: '<S184>/Comparison15'
     *  RelationalOperator: '<S184>/Comparison2'
     *  RelationalOperator: '<S184>/Comparison22'
     *  RelationalOperator: '<S184>/Comparison23'
     *  RelationalOperator: '<S184>/Comparison25'
     *  RelationalOperator: '<S184>/Comparison3'
     *  RelationalOperator: '<S184>/Comparison4'
     *  RelationalOperator: '<S184>/Comparison6'
     *  RelationalOperator: '<S184>/Comparison7'
     *  RelationalOperator: '<S184>/Comparison8'
     *  RelationalOperator: '<S184>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch20'
     *  Switch: '<S7>/Switch27'
     *  Switch: '<S7>/Switch28'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    VeHVTR_b_HVIL_Passed = ((((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkPassed) && (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_OBCM_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_ECH_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_APM2InterlockSts) ==
        CeHVTR_e_IntrlkPassed));

    /* If: '<S184>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S184>/Failed' incorporates:
         *  ActionPort: '<S337>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S184>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S184>/Passed' incorporates:
         *  ActionPort: '<S341>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S184>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S184>/Not_Sourced' incorporates:
         *  ActionPort: '<S340>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S184>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S184>/PreviousValue' incorporates:
         *  ActionPort: '<S342>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S184>/PreviousValue' */
    }

    /* End of If: '<S184>/If' */

    /* Update for UnitDelay: '<S184>/Unit Delay' incorporates:
     *  Constant: '<S184>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ca = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType7' */
#elif Rte_SysCon_Variant_HVTR_HVIL_9

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType8' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S185>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S185>/Comparison11' incorporates:
     *  Constant: '<S353>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* RelationalOperator: '<S185>/Comparison4' incorporates:
     *  Constant: '<S355>/Constant'
     *  Switch: '<S7>/Switch4'
     */
    VeHVTR_b_HVIL_Passed = (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
                            CeHVTR_e_IntrlkPassed);

    /* Logic: '<S185>/Logical4' incorporates:
     *  Constant: '<S354>/Constant'
     *  Constant: '<S356>/Constant'
     *  RelationalOperator: '<S185>/Comparison20'
     *  RelationalOperator: '<S185>/Comparison4'
     *  RelationalOperator: '<S185>/Comparison9'
     *  Switch: '<S7>/Switch4'
     */
    rtb_Comparison4_a = (((((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
                           CeHVTR_e_IntrlkFailed) || (((uint32)
                            VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid))
                         || (VeHVTI_b_HV_BatInrlkStatFA));

    /* Outputs for Atomic SubSystem: '<S185>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising' */
    /* Logic: '<S372>/AND' incorporates:
     *  Logic: '<S372>/OR1'
     *  UnitDelay: '<S372>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_fu));

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_fu = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S364>/EdgeRising' */

    /* Switch: '<S364>/Switch1' incorporates:
     *  Logic: '<S364>/OR'
     *  Logic: '<S364>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S364>/Switch1' incorporates:
         *  Constant: '<S364>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S364>/Switch1' incorporates:
         *  Constant: '<S359>/Calib'
         *  MinMax: '<S364>/Minimum'
         *  Sum: '<S364>/Summation'
         *  UnitDelay: '<S364>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_e);
    }

    /* End of Switch: '<S364>/Switch1' */

    /* Update for UnitDelay: '<S364>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_e = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S185>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S185>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S363>/EdgeRising' */
    /* Logic: '<S371>/AND' incorporates:
     *  Logic: '<S371>/OR1'
     *  UnitDelay: '<S185>/Unit Delay'
     *  UnitDelay: '<S371>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_dw) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_b1f));

    /* Update for UnitDelay: '<S371>/Unit Delay' incorporates:
     *  UnitDelay: '<S185>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_b1f = HVTR_ac_DW.UnitDelay_DSTATE_dw;

    /* End of Outputs for SubSystem: '<S363>/EdgeRising' */

    /* Switch: '<S363>/Switch1' incorporates:
     *  Constant: '<S358>/Calib'
     *  Constant: '<S363>/Constant Value'
     *  Logic: '<S363>/OR'
     *  Logic: '<S363>/OR1'
     *  MinMax: '<S363>/Minimum'
     *  Sum: '<S363>/Summation'
     *  UnitDelay: '<S185>/Unit Delay'
     *  UnitDelay: '<S363>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_dw) || rtb_Logical1)
    {
        /* Switch: '<S363>/Switch1' incorporates:
         *  Constant: '<S363>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_h2) + 1U)))
    {
        /* MinMax: '<S363>/Minimum' incorporates:
         *  Constant: '<S358>/Calib'
         *  Switch: '<S363>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S363>/Switch1' incorporates:
         *  Constant: '<S363>/Constant Value'
         *  MinMax: '<S363>/Minimum'
         *  Sum: '<S363>/Summation'
         *  UnitDelay: '<S363>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_h2) + 1U);
    }

    /* End of Switch: '<S363>/Switch1' */

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_h2 = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S185>/Turn On Delay Time' */
    /* Logic: '<S185>/Logical5' incorporates:
     *  Constant: '<S358>/Calib'
     *  Constant: '<S359>/Calib'
     *  Logic: '<S363>/AND'
     *  Logic: '<S364>/AND'
     *  RelationalOperator: '<S363>/Greater  Than'
     *  RelationalOperator: '<S364>/Greater  Than'
     *  UnitDelay: '<S185>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_dw) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S185>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S185>/Turn On Delay Sample' */

    /* If: '<S185>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S185>/Failed' incorporates:
         *  ActionPort: '<S357>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S185>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S185>/Passed' incorporates:
         *  ActionPort: '<S361>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S185>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S185>/Not_Sourced' incorporates:
         *  ActionPort: '<S360>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S185>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S185>/PreviousValue' incorporates:
         *  ActionPort: '<S362>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S185>/PreviousValue' */
    }

    /* End of If: '<S185>/If' */

    /* Update for UnitDelay: '<S185>/Unit Delay' incorporates:
     *  Constant: '<S185>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_dw = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType8' */
#elif Rte_SysCon_Variant_HVTR_HVIL_10

    /* Outputs for Atomic SubSystem: '<S162>/CANBasedType9' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S186>/FALSE Constant1'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = false;

    /* RelationalOperator: '<S186>/Comparison11' incorporates:
     *  Constant: '<S373>/Constant'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    VeHVTR_b_HVIL_NS = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkNotSourced);

    /* Logic: '<S186>/Logical4' incorporates:
     *  Constant: '<S374>/Constant'
     *  Constant: '<S376>/Constant'
     *  Logic: '<S186>/Logical1'
     *  Logic: '<S186>/Logical3'
     *  Logic: '<S186>/Logical6'
     *  RelationalOperator: '<S186>/Comparison17'
     *  RelationalOperator: '<S186>/Comparison19'
     *  RelationalOperator: '<S186>/Comparison20'
     *  RelationalOperator: '<S186>/Comparison6'
     *  RelationalOperator: '<S186>/Comparison8'
     *  RelationalOperator: '<S186>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    rtb_Comparison4_a = (((((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkFailed) || (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkFailed)) || (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
                            CeHVTR_e_IntrlkFailed)) || (((((uint32)
        VeHVTI_e_MCPA_HVILSts) == CeHVTR_e_IntrlkInvalid) || (((uint32)
        VeHVTI_e_MCPB_HVILSts) == CeHVTR_e_IntrlkInvalid)) || (((uint32)
        VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkInvalid))) ||
                         (((VeHVTI_b_MCPA_HVILStsFA) || (VeHVTI_b_MCPB_HVILStsFA))
                          || (VeHVTI_b_HV_BatInrlkStatFA)));

    /* Outputs for Atomic SubSystem: '<S186>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S384>/EdgeRising' */
    /* Logic: '<S392>/AND' incorporates:
     *  Logic: '<S392>/OR1'
     *  UnitDelay: '<S392>/Unit Delay'
     */
    rtb_Logical1 = (rtb_Comparison4_a && (!HVTR_ac_DW.UnitDelay_DSTATE_p1p));

    /* Update for UnitDelay: '<S392>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_p1p = rtb_Comparison4_a;

    /* End of Outputs for SubSystem: '<S384>/EdgeRising' */

    /* Switch: '<S384>/Switch1' incorporates:
     *  Logic: '<S384>/OR'
     *  Logic: '<S384>/OR1'
     */
    if ((!rtb_Comparison4_a) || rtb_Logical1)
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S384>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S379>/Calib'
         *  MinMax: '<S384>/Minimum'
         *  Sum: '<S384>/Summation'
         *  UnitDelay: '<S384>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_IntrlkFailedDeb,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_ox);
    }

    /* End of Switch: '<S384>/Switch1' */

    /* Update for UnitDelay: '<S384>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_ox = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S186>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S186>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S383>/EdgeRising' */
    /* Logic: '<S391>/AND' incorporates:
     *  Logic: '<S391>/OR1'
     *  UnitDelay: '<S186>/Unit Delay'
     *  UnitDelay: '<S391>/Unit Delay'
     */
    rtb_Logical1 = ((HVTR_ac_DW.UnitDelay_DSTATE_p1) &&
                    (!HVTR_ac_DW.UnitDelay_DSTATE_af));

    /* Update for UnitDelay: '<S391>/Unit Delay' incorporates:
     *  UnitDelay: '<S186>/Unit Delay'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_af = HVTR_ac_DW.UnitDelay_DSTATE_p1;

    /* End of Outputs for SubSystem: '<S383>/EdgeRising' */

    /* Switch: '<S383>/Switch1' incorporates:
     *  Constant: '<S378>/Calib'
     *  Constant: '<S383>/Constant Value'
     *  Logic: '<S383>/OR'
     *  Logic: '<S383>/OR1'
     *  MinMax: '<S383>/Minimum'
     *  Sum: '<S383>/Summation'
     *  UnitDelay: '<S186>/Unit Delay'
     *  UnitDelay: '<S383>/Unit Delay'
     */
    if ((!HVTR_ac_DW.UnitDelay_DSTATE_p1) || rtb_Logical1)
    {
        /* Switch: '<S383>/Switch1' incorporates:
         *  Constant: '<S383>/Constant Value1'
         */
        rtb_Switch1_hr = 0U;
    }
    else if (KeHVTR_Cnt_HVILPwrupDelay < ((uint16)(((uint32)
                HVTR_ac_DW.UnitDelay_DSTATE_cx) + 1U)))
    {
        /* MinMax: '<S383>/Minimum' incorporates:
         *  Constant: '<S378>/Calib'
         *  Switch: '<S383>/Switch1'
         */
        rtb_Switch1_hr = KeHVTR_Cnt_HVILPwrupDelay;
    }
    else
    {
        /* Switch: '<S383>/Switch1' incorporates:
         *  Constant: '<S383>/Constant Value'
         *  MinMax: '<S383>/Minimum'
         *  Sum: '<S383>/Summation'
         *  UnitDelay: '<S383>/Unit Delay'
         */
        rtb_Switch1_hr = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_cx) + 1U);
    }

    /* End of Switch: '<S383>/Switch1' */

    /* Update for UnitDelay: '<S383>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_cx = rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S186>/Turn On Delay Time' */
    /* Logic: '<S186>/Logical5' incorporates:
     *  Constant: '<S378>/Calib'
     *  Constant: '<S379>/Calib'
     *  Logic: '<S383>/AND'
     *  Logic: '<S384>/AND'
     *  RelationalOperator: '<S383>/Greater  Than'
     *  RelationalOperator: '<S384>/Greater  Than'
     *  UnitDelay: '<S186>/Unit Delay'
     */
    VeHVTR_b_HVIL_Failed = ((rtb_Comparison4_a && (rtb_Product_k4 >=
        KeHVTR_t_IntrlkFailedDeb)) && ((HVTR_ac_DW.UnitDelay_DSTATE_p1) &&
        (rtb_Switch1_hr >= KeHVTR_Cnt_HVILPwrupDelay)));

    /* End of Outputs for SubSystem: '<S186>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S186>/Turn On Delay Sample' */

    /* Logic: '<S186>/Logical' incorporates:
     *  Constant: '<S375>/Constant'
     *  RelationalOperator: '<S186>/Comparison1'
     *  RelationalOperator: '<S186>/Comparison3'
     *  RelationalOperator: '<S186>/Comparison4'
     *  RelationalOperator: '<S186>/Comparison6'
     *  RelationalOperator: '<S186>/Comparison8'
     *  RelationalOperator: '<S186>/Comparison9'
     *  Switch: '<S7>/Switch18'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S7>/Switch8'
     */
    VeHVTR_b_HVIL_Passed = (((((uint32)VeHVTI_e_MCPA_HVILSts) ==
        CeHVTR_e_IntrlkPassed) && (((uint32)VeHVTI_e_MCPB_HVILSts) ==
        CeHVTR_e_IntrlkPassed)) && (((uint32)VeHVTI_e_HV_BatIntrlkStat) ==
        CeHVTR_e_IntrlkPassed));

    /* If: '<S186>/If' */
    if (VeHVTR_b_HVIL_Failed)
    {
        /* Outputs for IfAction SubSystem: '<S186>/Failed' incorporates:
         *  ActionPort: '<S377>/Action Port'
         */
        HVTR_ac_Failed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S186>/Failed' */
    }
    else if (VeHVTR_b_HVIL_Passed)
    {
        /* Outputs for IfAction SubSystem: '<S186>/Passed' incorporates:
         *  ActionPort: '<S381>/Action Port'
         */
        HVTR_ac_Passed(&rtb_VariantMergeForOutportHV_In,
                       &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S186>/Passed' */
    }
    else if (VeHVTR_b_HVIL_NS)
    {
        /* Outputs for IfAction SubSystem: '<S186>/Not_Sourced' incorporates:
         *  ActionPort: '<S380>/Action Port'
         */
        HVTR_ac_Not_Sourced(&rtb_VariantMergeForOutportHV_In,
                            &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S186>/Not_Sourced' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S186>/PreviousValue' incorporates:
         *  ActionPort: '<S382>/Action Port'
         */
        HVTR_ac_PreviousValue(rtb_UnitDelay2_f, rtb_UnitDelay1_b,
                              &rtb_VariantMergeForOutportHV_In,
                              &HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

        /* End of Outputs for SubSystem: '<S186>/PreviousValue' */
    }

    /* End of If: '<S186>/If' */

    /* Update for UnitDelay: '<S186>/Unit Delay' incorporates:
     *  Constant: '<S186>/TRUE Constant'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_p1 = true;

    /* End of Outputs for SubSystem: '<S162>/CANBasedType9' */
#elif Rte_SysCon_Variant_HVTR_HVIL_0

    /* Outputs for Atomic SubSystem: '<S162>/No_Function' */
    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S393>/Calib'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = KeHVTR_b_HVBatSrvcDisCnctFA;

    /* VariantMerge generated from: '<S162>/HV_IntrlkStat' incorporates:
     *  Constant: '<S395>/Calib'
     */
    rtb_VariantMergeForOutportHV_In = KeHVTR_e_HVIntrlkStatOvrd;

    /* VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Constant: '<S394>/Calib'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = KeHVTR_e_HVILIntrnlStatOvrdVal;

    /* End of Outputs for SubSystem: '<S162>/No_Function' */
#elif Rte_SysCon_Variant_HVTR_HVIL_1

    /* Outputs for Atomic SubSystem: '<S162>/Sense_Point' */
    /* Logic: '<S188>/Logical2' */
    rtb_Comparison4_a = !VeHVTI_b_HVBatIntrlkIntrnlStatFA;

    /* Switch: '<S188>/Switch9' incorporates:
     *  Constant: '<S403>/Constant'
     *  Constant: '<S404>/Constant'
     *  Logic: '<S188>/Logical4'
     *  Logic: '<S188>/Logical5'
     *  RelationalOperator: '<S188>/Comparison3'
     *  RelationalOperator: '<S188>/Comparison8'
     *  Switch: '<S188>/Switch8'
     *  Switch: '<S7>/Switch10'
     */
    if ((CeBPCR_e_HVBatIntrlkFail == ((uint32)VeHVTI_e_HVBatIntrlkIntrnlStat)) &&
        rtb_Comparison4_a)
    {
        /* Switch: '<S188>/Switch9' incorporates:
         *  Constant: '<S412>/Constant'
         */
        VeHVTC_e_HVILIntrnlStat = CeBPCR_e_HVBatIntrlkFail;
    }
    else if (rtb_Comparison4_a && (((uint32)VeHVTI_e_HVBatIntrlkIntrnlStat) ==
              CeBPCR_e_HVBatIntrlkPass))
    {
        /* Switch: '<S188>/Switch8' incorporates:
         *  Constant: '<S411>/Constant'
         *  Switch: '<S188>/Switch9'
         */
        VeHVTC_e_HVILIntrnlStat = CeBPCR_e_HVBatIntrlkPass;
    }
    else
    {
        /* Switch: '<S188>/Switch9' incorporates:
         *  Constant: '<S410>/Constant'
         *  Switch: '<S188>/Switch8'
         */
        VeHVTC_e_HVILIntrnlStat = CeBPCR_e_HVBatIntrlkINV;
    }

    /* End of Switch: '<S188>/Switch9' */

    /* VariantMerge generated from: '<S162>/HVBatSrvcDisCnctFA' incorporates:
     *  Constant: '<S413>/Constant'
     *  RelationalOperator: '<S188>/Comparison9'
     *  Switch: '<S188>/Switch9'
     */
    HVTR_ac_B.VariantMergeForOutportHVBatSrvc = (((uint32)
        VeHVTC_e_HVILIntrnlStat) == CeBPCR_e_HVBatIntrlkFail);

    /* Outputs for Atomic SubSystem: '<S188>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S429>/EdgeRising' */
    /* RelationalOperator: '<S188>/Comparison10' incorporates:
     *  UnitDelay: '<S436>/Unit Delay'
     */
    rtb_Logical1 = HVTR_ac_DW.UnitDelay_DSTATE_is;

    /* Update for UnitDelay: '<S436>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_is = VeHVTI_b_HVIL_A_Failed;

    /* Switch: '<S429>/Switch1' incorporates:
     *  Logic: '<S429>/OR'
     *  Logic: '<S429>/OR1'
     *  Logic: '<S436>/AND'
     *  Logic: '<S436>/OR1'
     */
    if ((!VeHVTI_b_HVIL_A_Failed) || ((VeHVTI_b_HVIL_A_Failed) && (!rtb_Logical1)))
    {
        /* Switch: '<S429>/Switch1' incorporates:
         *  Constant: '<S429>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S429>/Switch1' incorporates:
         *  Constant: '<S420>/Calib'
         *  MinMax: '<S429>/Minimum'
         *  Sum: '<S429>/Summation'
         *  UnitDelay: '<S429>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_DebInvrtrA,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_j2);
    }

    /* End of Switch: '<S429>/Switch1' */
    /* End of Outputs for SubSystem: '<S429>/EdgeRising' */

    /* Logic: '<S429>/AND' incorporates:
     *  Constant: '<S420>/Calib'
     *  RelationalOperator: '<S429>/Greater  Than'
     */
    VeHVTC_b_InvrtARisingDeb = ((VeHVTI_b_HVIL_A_Failed) && (rtb_Product_k4 >=
        KeHVTR_t_DebInvrtrA));

    /* Update for UnitDelay: '<S429>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_j2 = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S188>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S188>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S430>/EdgeRising' */
    /* RelationalOperator: '<S188>/Comparison10' incorporates:
     *  UnitDelay: '<S437>/Unit Delay'
     */
    rtb_Logical1 = HVTR_ac_DW.UnitDelay_DSTATE_iu;

    /* Update for UnitDelay: '<S437>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_iu = VeHVTI_b_HVIL_B_Failed;

    /* Switch: '<S430>/Switch1' incorporates:
     *  Logic: '<S430>/OR'
     *  Logic: '<S430>/OR1'
     *  Logic: '<S437>/AND'
     *  Logic: '<S437>/OR1'
     */
    if ((!VeHVTI_b_HVIL_B_Failed) || ((VeHVTI_b_HVIL_B_Failed) && (!rtb_Logical1)))
    {
        /* Switch: '<S430>/Switch1' incorporates:
         *  Constant: '<S430>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S430>/Switch1' incorporates:
         *  Constant: '<S421>/Calib'
         *  MinMax: '<S430>/Minimum'
         *  Sum: '<S430>/Summation'
         *  UnitDelay: '<S430>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_DebInvrtrB,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S430>/Switch1' */
    /* End of Outputs for SubSystem: '<S430>/EdgeRising' */

    /* Logic: '<S430>/AND' incorporates:
     *  Constant: '<S421>/Calib'
     *  RelationalOperator: '<S430>/Greater  Than'
     */
    VeHVTC_b_InvrtBRisingDeb = ((VeHVTI_b_HVIL_B_Failed) && (rtb_Product_k4 >=
        KeHVTR_t_DebInvrtrB));

    /* Update for UnitDelay: '<S430>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_j = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S188>/Turn On Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S188>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S431>/EdgeRising' */
    /* RelationalOperator: '<S188>/Comparison10' incorporates:
     *  UnitDelay: '<S438>/Unit Delay'
     */
    rtb_Logical1 = HVTR_ac_DW.UnitDelay_DSTATE_eu;

    /* Update for UnitDelay: '<S438>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_eu = VeHVTI_b_HVIL_C_Failed;

    /* Switch: '<S431>/Switch1' incorporates:
     *  Logic: '<S431>/OR'
     *  Logic: '<S431>/OR1'
     *  Logic: '<S438>/AND'
     *  Logic: '<S438>/OR1'
     */
    if ((!VeHVTI_b_HVIL_C_Failed) || ((VeHVTI_b_HVIL_C_Failed) && (!rtb_Logical1)))
    {
        /* Switch: '<S431>/Switch1' incorporates:
         *  Constant: '<S431>/Constant Value1'
         */
        rtb_Product_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S431>/Switch1' incorporates:
         *  Constant: '<S422>/Calib'
         *  MinMax: '<S431>/Minimum'
         *  Sum: '<S431>/Summation'
         *  UnitDelay: '<S431>/Unit Delay'
         */
        rtb_Product_k4 = fminf(KeHVTR_t_DebInvrtrC,
                               HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                               HVTR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S431>/Switch1' */
    /* End of Outputs for SubSystem: '<S431>/EdgeRising' */

    /* Logic: '<S431>/AND' incorporates:
     *  Constant: '<S422>/Calib'
     *  RelationalOperator: '<S431>/Greater  Than'
     */
    VeHVTC_b_InvrtCRisingDeb = ((VeHVTI_b_HVIL_C_Failed) && (rtb_Product_k4 >=
        KeHVTR_t_DebInvrtrC));

    /* Update for UnitDelay: '<S431>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_m = rtb_Product_k4;

    /* End of Outputs for SubSystem: '<S188>/Turn On Delay Time2' */

    /* Logic: '<S188>/Logical1' */
    rtb_Comparison4_a = !VeHVTI_b_HV_BatInrlkStatFA;

    /* Logic: '<S188>/OR4' incorporates:
     *  Constant: '<S405>/Constant'
     *  Logic: '<S188>/OR7'
     *  RelationalOperator: '<S188>/Equal12'
     *  Switch: '<S7>/Switch4'
     */
    VeHVTC_b_IntrlkStat_Invrtr = ((((VeHVTC_b_InvrtARisingDeb) ||
        (VeHVTC_b_InvrtBRisingDeb)) || (VeHVTC_b_InvrtCRisingDeb)) || ((((uint32)
        VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkFailed) &&
        rtb_Comparison4_a));

    /* Outputs for Atomic SubSystem: '<S188>/Turn On Delay Sample1' */
    HVTR_ac_TurnOnDelaySample1(KeHVTR_Cnt_HVIL_StatDly,
        HVTR_ac_DW.UnitDelay2_DSTATE_c, &HVTR_ac_B.TurnOnDelaySample1_n,
        &HVTR_ac_DW.TurnOnDelaySample1_n);

    /* End of Outputs for SubSystem: '<S188>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S188>/Turn On Delay Sample2' */
    HVTR_ac_TurnOnDelaySample1(KeHVTR_Cnt_HVIL_PassDebounce, (!rtb_Comparison4_a)
        || (((uint32)VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkPassed),
        &HVTR_ac_B.TurnOnDelaySample2, &HVTR_ac_DW.TurnOnDelaySample2);

    /* End of Outputs for SubSystem: '<S188>/Turn On Delay Sample2' */

    /* Switch: '<S188>/Switch3' incorporates:
     *  Constant: '<S409>/Constant'
     *  Constant: '<S416>/Calib'
     *  Constant: '<S417>/Calib'
     *  Logic: '<S188>/OR8'
     *  Logic: '<S188>/OR9'
     *  RelationalOperator: '<S188>/Equal9'
     *  Switch: '<S7>/Switch4'
     *  UnitDelay: '<S188>/Unit Delay2'
     */
    if (HVTR_ac_B.TurnOnDelaySample2.AND_f)
    {
        /* Switch: '<S188>/Switch3' incorporates:
         *  Constant: '<S407>/Constant'
         */
        rtb_UnitDelay2_f = CeHVTR_e_IntrlkPassed;
    }
    else
    {
        /* Switch: '<S188>/Switch3' incorporates:
         *  Constant: '<S414>/Constant'
         */
        rtb_UnitDelay2_f = CeHVTR_e_IntrlkNotSourced;
    }

    /* End of Switch: '<S188>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S188>/Signal Latch On' */
    /* Logic: '<S425>/OR2' incorporates:
     *  Constant: '<S408>/Constant'
     *  Constant: '<S419>/Calib'
     *  Logic: '<S188>/OR1'
     *  RelationalOperator: '<S188>/Equal13'
     *  Switch: '<S188>/Switch3'
     *  UnitDelay: '<S425>/Unit Delay'
     */
    rtb_Logical1 = (((KeHVTR_b_HVIL_PassLatchEnbl) && (CeHVTR_e_IntrlkPassed ==
                      ((uint32)rtb_UnitDelay2_f))) ||
                    (HVTR_ac_DW.UnitDelay_DSTATE_ao));

    /* Update for UnitDelay: '<S425>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_ao = rtb_Logical1;

    /* End of Outputs for SubSystem: '<S188>/Signal Latch On' */

    /* Switch: '<S188>/Switch2' incorporates:
     *  Logic: '<S188>/OR5'
     *  Logic: '<S188>/OR6'
     */
    if ((VeHVTC_b_IntrlkStat_Invrtr) && ((HVTR_ac_B.TurnOnDelaySample1_n.AND_f) ||
         rtb_Logical1))
    {
        /* Switch: '<S188>/Switch2' incorporates:
         *  Constant: '<S406>/Constant'
         */
        rtb_UnitDelay2_f = CeHVTR_e_IntrlkFailed;
    }

    /* End of Switch: '<S188>/Switch2' */

    /* RelationalOperator: '<S188>/Comparison10' incorporates:
     *  Constant: '<S401>/Constant'
     *  Switch: '<S188>/Switch2'
     */
    rtb_Logical1 = (((uint32)rtb_UnitDelay2_f) == CeHVTR_e_IntrlkFailed);

    /* RelationalOperator: '<S188>/Comparison13' incorporates:
     *  Constant: '<S399>/Constant'
     *  DataTypeConversion: '<S465>/DataTypeConversion'
     */
    rtb_Logical2 = (CeOBCR_e_ChargingLvlDefault != ((uint32)
                     VeHVTI_e_ChargingLevel));

    /* Outputs for Atomic SubSystem: '<S188>/EdgeRising' */
    /* Logic: '<S397>/AND' incorporates:
     *  Logic: '<S397>/OR1'
     *  UnitDelay: '<S397>/Unit Delay'
     */
    VeHVTC_b_PluggedInRisingEdge = (rtb_Logical2 &&
        (!HVTR_ac_DW.UnitDelay_DSTATE_d2));

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_d2 = rtb_Logical2;

    /* End of Outputs for SubSystem: '<S188>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S188>/Counter Reset  Enabled ' */
    /* Switch: '<S396>/Switch1' incorporates:
     *  Switch: '<S396>/Switch2'
     */
    if (VeHVTC_b_PluggedInRisingEdge)
    {
        /* Switch: '<S396>/Switch1' incorporates:
         *  Constant: '<S396>/Constant Value2'
         */
        VeHVTC_Cnt_PluggedIn = 0U;
    }
    else if (rtb_Logical2)
    {
        /* Switch: '<S396>/Switch2' incorporates:
         *  Constant: '<S396>/Constant Value1'
         *  Sum: '<S396>/Subtraction'
         *  Switch: '<S396>/Switch1'
         *  UnitDelay: '<S396>/Unit Delay'
         */
        VeHVTC_Cnt_PluggedIn = (uint16)(((uint32)HVTR_ac_DW.UnitDelay_DSTATE_av)
            + 1U);
    }
    else
    {
        /* Switch: '<S396>/Switch1' incorporates:
         *  Switch: '<S396>/Switch2'
         *  UnitDelay: '<S396>/Unit Delay'
         */
        VeHVTC_Cnt_PluggedIn = HVTR_ac_DW.UnitDelay_DSTATE_av;
    }

    /* End of Switch: '<S396>/Switch1' */

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_av = VeHVTC_Cnt_PluggedIn;

    /* End of Outputs for SubSystem: '<S188>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S188>/Comparison2' incorporates:
     *  Constant: '<S418>/Calib'
     */
    VeHVTC_b_TImeInRange = (VeHVTC_Cnt_PluggedIn <
                            KeHVTR_Cnt_WaitTimeToStartCharging);

    /* Logic: '<S188>/Logical12' */
    VeHVTC_b_PluggedIn_TimeInRange = (rtb_Logical2 && (VeHVTC_b_TImeInRange));

    /* RelationalOperator: '<S188>/Comparison12' incorporates:
     *  Constant: '<S400>/Constant'
     *  DataTypeConversion: '<S466>/DataTypeConversion'
     *  RelationalOperator: '<S8>/Comparison3'
     */
    VeHVTC_b_Charging = (CeOBCR_e_ChargingSts_Charging == ((uint32)
                          VeHVTI_e_ChargingSystemSts));

    /* Logic: '<S188>/Logical10' */
    VeHVTC_b_ChargingDetected = ((VeHVTC_b_PluggedIn_TimeInRange) ||
        (VeHVTC_b_Charging));

    /* Logic: '<S188>/Logical8' */
    rtb_Logical2 = ((VeHVTC_b_ChargingDetected) && rtb_Logical1);

    /* Logic: '<S188>/Logical11' */
    VeHVTC_b_IntrlkFailed_Reset = !rtb_Logical1;

    /* Outputs for Atomic SubSystem: '<S188>/Stop Watch Reset Enabled1' */
    /* Switch: '<S426>/Switch1' incorporates:
     *  Switch: '<S426>/Switch2'
     */
    if (VeHVTC_b_IntrlkFailed_Reset)
    {
        /* Switch: '<S426>/Switch1' incorporates:
         *  Constant: '<S426>/Constant Value2'
         */
        VeHVTC_t_TImeUpdateHVIL = 0.0F;
    }
    else if (rtb_Logical2)
    {
        /* Switch: '<S426>/Switch2' incorporates:
         *  Sum: '<S426>/Subtraction'
         *  Switch: '<S426>/Switch1'
         *  UnitDelay: '<S426>/Unit Delay'
         */
        VeHVTC_t_TImeUpdateHVIL = HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
            HVTR_ac_DW.UnitDelay_DSTATE_b;
    }
    else
    {
        /* Switch: '<S426>/Switch1' incorporates:
         *  Switch: '<S426>/Switch2'
         *  UnitDelay: '<S426>/Unit Delay'
         */
        VeHVTC_t_TImeUpdateHVIL = HVTR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S426>/Switch1' */

    /* Update for UnitDelay: '<S426>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_b = VeHVTC_t_TImeUpdateHVIL;

    /* End of Outputs for SubSystem: '<S188>/Stop Watch Reset Enabled1' */

    /* RelationalOperator: '<S188>/Comparison11' incorporates:
     *  Constant: '<S423>/Calib'
     */
    VeHVTC_b_HVILWaitTImeExpired = (VeHVTC_t_TImeUpdateHVIL >=
        KeHVTR_t_TimeWaitUpdateHVIL);

    /* Switch: '<S188>/Switch11' incorporates:
     *  Constant: '<S415>/Constant'
     *  Logic: '<S188>/Logical3'
     *  Logic: '<S188>/Logical7'
     *  Logic: '<S188>/Logical9'
     *  RelationalOperator: '<S188>/Comparison1'
     *  RelationalOperator: '<S188>/Equal12'
     *  Switch: '<S188>/Switch12'
     *  Switch: '<S7>/Switch4'
     */
    if ((CeHVTR_e_IntrlkNotSourced == ((uint32)VeHVTI_e_HV_BatIntrlkStat)) &&
            rtb_Comparison4_a)
    {
        /* Switch: '<S188>/Switch11' */
        VeHVTC_e_HV_IntrlkStatInternal = CeHVTR_e_IntrlkNotSourced;
    }
    else if (rtb_Logical2 && (!VeHVTC_b_HVILWaitTImeExpired))
    {
        /* Switch: '<S188>/Switch12' incorporates:
         *  Switch: '<S188>/Switch11'
         *  UnitDelay: '<S188>/Unit Delay'
         */
        VeHVTC_e_HV_IntrlkStatInternal = HVTR_ac_DW.UnitDelay_DSTATE_ot;
    }
    else
    {
        /* Switch: '<S188>/Switch11' incorporates:
         *  RelationalOperator: '<S188>/Comparison10'
         *  Switch: '<S188>/Switch2'
         */
        VeHVTC_e_HV_IntrlkStatInternal = rtb_UnitDelay2_f;
    }

    /* End of Switch: '<S188>/Switch11' */

    /* VariantMerge generated from: '<S162>/HV_IntrlkStat' incorporates:
     *  DataTypeConversion: '<S398>/DataTypeConversion'
     *  Switch: '<S188>/Switch11'
     */
    rtb_VariantMergeForOutportHV_In = VeHVTC_e_HV_IntrlkStatInternal;

    /* VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Constant: '<S402>/Constant'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* Update for UnitDelay: '<S188>/Unit Delay2' incorporates:
     *  Constant: '<S188>/TRUE Constant2'
     */
    HVTR_ac_DW.UnitDelay2_DSTATE_c = true;

    /* Update for UnitDelay: '<S188>/Unit Delay' incorporates:
     *  Switch: '<S188>/Switch11'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ot = VeHVTC_e_HV_IntrlkStatInternal;

    /* End of Outputs for SubSystem: '<S162>/Sense_Point' */
#endif

    /* DataTypeConversion: '<S11>/DataTypeConversion' incorporates:
     *  Constant: '<S409>/Constant'
     *  Constant: '<S416>/Calib'
     *  Constant: '<S417>/Calib'
     *  Logic: '<S188>/OR8'
     *  Logic: '<S188>/OR9'
     *  RelationalOperator: '<S188>/Equal9'
     *  Switch: '<S7>/Switch4'
     *  UnitDelay: '<S188>/Unit Delay2'
     *  VariantMerge generated from: '<S162>/HV_IntrlkStat'
     */
    HVTR_ac_B.DataTypeConversion = rtb_VariantMergeForOutportHV_In;

#endif

    /* End of DataTypeConversion: '<S11>/DataTypeConversion' */
    /* End of Outputs for SubSystem: '<S12>/Subsystem' */

    /* If: '<S12>/If' incorporates:
     *  Constant: '<S160>/Calib'
     */
    rtPrevAction = HVTR_ac_DW.If_ActiveSubsystem;
    rtAction = (sint8)((!KeHVTR_b_ManualSrvcProc_Enbl) ? 1 : 0);
    HVTR_ac_DW.If_ActiveSubsystem = rtAction;
    if (rtAction == 0)
    {
        if (0 != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S12>/If Action Subsystem' incorporates:
             *  ActionPort: '<S158>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S158>/Turn On Delay Time' */
            /* SystemReset for If: '<S12>/If' incorporates:
             *  UnitDelay: '<S170>/Unit Delay'
             *  UnitDelay: '<S171>/Unit Delay'
             *  UnitDelay: '<S172>/Unit Delay'
             *  UnitDelay: '<S173>/Unit Delay'
             */
            HVTR_ac_DW.UnitDelay_DSTATE_ph = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S170>/EdgeRising' */
            HVTR_ac_DW.UnitDelay_DSTATE_dj = false;

            /* End of SystemReset for SubSystem: '<S170>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S158>/Turn On Delay Time' */

            /* SystemReset for Atomic SubSystem: '<S158>/Turn On Delay Time1' */
            HVTR_ac_DW.UnitDelay_DSTATE_i = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S171>/EdgeRising' */
            HVTR_ac_DW.UnitDelay_DSTATE_gd = false;

            /* End of SystemReset for SubSystem: '<S171>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S158>/Turn On Delay Time1' */
            /* End of SystemReset for SubSystem: '<S12>/If Action Subsystem' */
        }

        /* Outputs for IfAction SubSystem: '<S12>/If Action Subsystem' incorporates:
         *  ActionPort: '<S158>/Action Port'
         */
        /* Logic: '<S158>/Logical1' incorporates:
         *  Constant: '<S163>/Constant'
         *  Constant: '<S164>/Constant'
         *  Constant: '<S165>/Constant'
         *  Constant: '<S168>/Calib'
         *  DataTypeConversion: '<S464>/DataTypeConversion'
         *  Logic: '<S158>/Logical4'
         *  Logic: '<S158>/Logical5'
         *  RelationalOperator: '<S107>/Comparison4'
         *  RelationalOperator: '<S158>/Comparison1'
         *  RelationalOperator: '<S158>/Comparison3'
         *  RelationalOperator: '<S158>/Comparison4'
         *  RelationalOperator: '<S158>/Comparison5'
         *  Switch: '<S7>/Switch4'
         */
        VeHVTR_b_SrvcHVError_M1 = ((((!rtb_Logical1_el) && (((uint32)
            VeHVTI_e_HV_BatCntctrStat) == CeHVTR_e_Open)) && (VeHVTC_U_HV_Volt <
            KeHVTR_U_MaxVolt_SrvcProc1320)) && ((((uint32)
            VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkFailed) || (((uint32)
            VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_SrvcDisconnect)));

        /* Logic: '<S158>/Logical3' incorporates:
         *  Constant: '<S166>/Constant'
         *  Constant: '<S167>/Constant'
         *  Constant: '<S168>/Calib'
         *  Logic: '<S158>/Logical6'
         *  RelationalOperator: '<S158>/Comparison'
         *  RelationalOperator: '<S158>/Comparison2'
         *  RelationalOperator: '<S158>/Comparison3'
         *  RelationalOperator: '<S158>/Comparison6'
         *  Switch: '<S7>/Switch4'
         */
        VeHVTR_b_SrvcHVError_M2 = ((VeHVTC_U_HV_Volt >
            KeHVTR_U_MaxVolt_SrvcProc1320) && ((((uint32)
            VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_IntrlkFailed) || (((uint32)
            VeHVTI_e_HV_BatIntrlkStat) == CeHVTR_e_SrvcDisconnect)));

        /* Outputs for Atomic SubSystem: '<S158>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S170>/EdgeRising' */
        /* Logic: '<S172>/AND' incorporates:
         *  Logic: '<S172>/OR1'
         *  UnitDelay: '<S172>/Unit Delay'
         */
        rtb_Comparison4_a = ((VeHVTR_b_SrvcHVError_M2) &&
                             (!HVTR_ac_DW.UnitDelay_DSTATE_dj));

        /* Update for UnitDelay: '<S172>/Unit Delay' */
        HVTR_ac_DW.UnitDelay_DSTATE_dj = VeHVTR_b_SrvcHVError_M2;

        /* End of Outputs for SubSystem: '<S170>/EdgeRising' */

        /* Switch: '<S170>/Switch1' incorporates:
         *  Logic: '<S170>/OR'
         *  Logic: '<S170>/OR1'
         */
        if ((!VeHVTR_b_SrvcHVError_M2) || rtb_Comparison4_a)
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S170>/Constant Value1'
             */
            rtb_Product_k4 = 0.0F;
        }
        else
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S169>/Calib'
             *  MinMax: '<S170>/Minimum'
             *  Sum: '<S170>/Summation'
             *  UnitDelay: '<S170>/Unit Delay'
             */
            rtb_Product_k4 = fminf(KeHVTR_t_MSD_ActvDscharging,
                                   HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                                   HVTR_ac_DW.UnitDelay_DSTATE_ph);
        }

        /* End of Switch: '<S170>/Switch1' */

        /* Update for UnitDelay: '<S170>/Unit Delay' */
        HVTR_ac_DW.UnitDelay_DSTATE_ph = rtb_Product_k4;

        /* Merge: '<S12>/Merge4' incorporates:
         *  Constant: '<S169>/Calib'
         *  Logic: '<S158>/Logical2'
         *  Logic: '<S170>/AND'
         *  RelationalOperator: '<S170>/Greater  Than'
         */
        HVTR_ac_B.Merge4 = (rtb_Logical1_el || ((VeHVTR_b_SrvcHVError_M2) &&
                             (rtb_Product_k4 >= KeHVTR_t_MSD_ActvDscharging)));

        /* End of Outputs for SubSystem: '<S158>/Turn On Delay Time' */

        /* Outputs for Atomic SubSystem: '<S158>/Turn On Delay Time1' */
        /* Outputs for Atomic SubSystem: '<S171>/EdgeRising' */
        /* Logic: '<S173>/AND' incorporates:
         *  Logic: '<S173>/OR1'
         *  UnitDelay: '<S173>/Unit Delay'
         */
        rtb_Comparison4_a = ((VeHVTR_b_SrvcHVError_M1) &&
                             (!HVTR_ac_DW.UnitDelay_DSTATE_gd));

        /* Update for UnitDelay: '<S173>/Unit Delay' */
        HVTR_ac_DW.UnitDelay_DSTATE_gd = VeHVTR_b_SrvcHVError_M1;

        /* End of Outputs for SubSystem: '<S171>/EdgeRising' */

        /* Switch: '<S171>/Switch1' incorporates:
         *  Logic: '<S171>/OR'
         *  Logic: '<S171>/OR1'
         */
        if ((!VeHVTR_b_SrvcHVError_M1) || rtb_Comparison4_a)
        {
            /* Switch: '<S171>/Switch1' incorporates:
             *  Constant: '<S171>/Constant Value1'
             */
            rtb_Product_k4 = 0.0F;
        }
        else
        {
            /* Switch: '<S171>/Switch1' incorporates:
             *  Constant: '<S169>/Calib'
             *  MinMax: '<S171>/Minimum'
             *  Sum: '<S171>/Summation'
             *  UnitDelay: '<S171>/Unit Delay'
             */
            rtb_Product_k4 = fminf(KeHVTR_t_MSD_ActvDscharging,
                                   HVTR_ac_B.OutportBufferForVeHVTR_t_dt +
                                   HVTR_ac_DW.UnitDelay_DSTATE_i);
        }

        /* End of Switch: '<S171>/Switch1' */

        /* Merge: '<S12>/Merge' incorporates:
         *  Constant: '<S169>/Calib'
         *  Logic: '<S171>/AND'
         *  RelationalOperator: '<S171>/Greater  Than'
         */
        HVTR_ac_B.VeHVTR_b_SrvcPrcEnbld_Manual = ((VeHVTR_b_SrvcHVError_M1) &&
            (rtb_Product_k4 >= KeHVTR_t_MSD_ActvDscharging));

        /* Update for UnitDelay: '<S171>/Unit Delay' */
        HVTR_ac_DW.UnitDelay_DSTATE_i = rtb_Product_k4;

        /* End of Outputs for SubSystem: '<S158>/Turn On Delay Time1' */
        /* End of Outputs for SubSystem: '<S12>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S12>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S159>/Action Port'
         */
        /* Merge: '<S12>/Merge' incorporates:
         *  Constant: '<S159>/FALSE Constant'
         *  SignalConversion generated from: '<S159>/VeHVTR_b_SrvcPrcEnbld_Manual_2'
         */
        HVTR_ac_B.VeHVTR_b_SrvcPrcEnbld_Manual = false;

        /* Merge: '<S12>/Merge4' incorporates:
         *  Constant: '<S159>/FALSE Constant1'
         *  SignalConversion generated from: '<S159>/VeHVTR_b_SrvcHVError_Manual_2'
         */
        HVTR_ac_B.Merge4 = false;

        /* End of Outputs for SubSystem: '<S12>/If Action Subsystem1' */
    }

    /* End of If: '<S12>/If' */

    /* Outputs for Atomic SubSystem: '<S161>/EdgeRising' */
    /* Logic: '<S175>/OR1' incorporates:
     *  UnitDelay: '<S175>/Unit Delay'
     */
    rtb_Comparison4_a = !HVTR_ac_DW.UnitDelay_DSTATE_ndg;

    /* Update for UnitDelay: '<S175>/Unit Delay' incorporates:
     *  Constant: '<S161>/Constant1'
     */
    HVTR_ac_DW.UnitDelay_DSTATE_ndg = true;

    /* Outputs for Atomic SubSystem: '<S161>/Counter Reset  Enabled ' */
    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S161>/Constant'
     *  Logic: '<S161>/Logical Operator'
     *  Logic: '<S175>/AND'
     *  RelationalOperator: '<S161>/Comparison3'
     *  Switch: '<S174>/Switch2'
     *  UnitDelay: '<S161>/VeHVTR_b_StrtTmr_SrvcProc1320Prev'
     *  UnitDelay: '<S161>/VeHVTR_t_Tmr1Enbl_SrvcProc1320Prev'
     */
    if (rtb_Comparison4_a)
    {
        /* Switch: '<S174>/Switch1' incorporates:
         *  Constant: '<S174>/Constant Value2'
         */
        VeHVTR_Cnt_Tmr1Enbl_SrvcProc1320 = 0U;
    }
    else if ((HVTR_ac_DW.VeHVTR_b_StrtTmr_SrvcProc1320Pr) && (((sint32)
               HVTR_ac_DW.VeHVTR_t_Tmr1Enbl_SrvcProc1320P) < 65530))
    {
        /* Switch: '<S174>/Switch2' incorporates:
         *  Constant: '<S174>/Constant Value1'
         *  Sum: '<S174>/Subtraction'
         *  Switch: '<S174>/Switch1'
         *  UnitDelay: '<S174>/Unit Delay'
         */
        VeHVTR_Cnt_Tmr1Enbl_SrvcProc1320 = (uint16)(((uint32)
            HVTR_ac_DW.UnitDelay_DSTATE_bd) + 1U);
    }
    else
    {
        /* Switch: '<S174>/Switch1' incorporates:
         *  Switch: '<S174>/Switch2'
         *  UnitDelay: '<S174>/Unit Delay'
         */
        VeHVTR_Cnt_Tmr1Enbl_SrvcProc1320 = HVTR_ac_DW.UnitDelay_DSTATE_bd;
    }

    /* End of Switch: '<S174>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/EdgeRising' */

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_bd = VeHVTR_Cnt_Tmr1Enbl_SrvcProc1320;

    /* End of Outputs for SubSystem: '<S161>/Counter Reset  Enabled ' */

    /* Switch: '<S161>/Switch22' incorporates:
     *  Constant: '<S176>/Calib'
     */
    if (KeHVTR_b_OpnReq_SrvcProc1320Ovrd)
    {
        /* SignalConversion generated from: '<S2>/OpnReq_SrvcProc1320_Out' incorporates:
         *  Constant: '<S177>/Calib'
         *  Outport: '<Root>/VeHVTR_b_OpnReq_SrvcProc1320_Out'
         */
        (void)Rte_Write_VeHVTR_b_OpnReq_SrvcProc1320_Out_Value
            (KeHVTR_b_OpnReq_SrvcProc1320Val);
    }
    else
    {
        /* SignalConversion generated from: '<S2>/OpnReq_SrvcProc1320_Out' incorporates:
         *  DataStoreRead: '<S161>/Data Store Read'
         *  Outport: '<Root>/VeHVTR_b_OpnReq_SrvcProc1320_Out'
         */
        (void)Rte_Write_VeHVTR_b_OpnReq_SrvcProc1320_Out_Value
            (EeHVTR_b_OpnReq_SrvcProc1320);
    }

    /* End of Switch: '<S161>/Switch22' */

    /* SignalConversion generated from: '<S6>/Variant Source' incorporates:
     *  UnitDelay: '<S13>/Unit Delay'
     */
#if !Rte_SysCon_Variant_HVTR_AntiTemp

    /* VariantMerge generated from: '<S6>/Variant Source' incorporates:
     *  Constant: '<S459>/Calib'
     */
    HVTR_ac_B.VariantMerge_For_Variant_Source = KeHVTR_Cnt_AntiTampCntr_Default;

#else

    /* VariantMerge generated from: '<S6>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S6>/Variant Source'
     */
    HVTR_ac_B.VariantMerge_For_Variant_Source = rtb_VeHVTR_Cnt_AntiTamp_NbrOfFa;

    /* Update for UnitDelay: '<S13>/Unit Delay' */
    HVTR_ac_DW.UnitDelay_DSTATE_of = rtb_AND_ix;

#endif

    /* End of SignalConversion generated from: '<S6>/Variant Source' */

    /* Update for UnitDelay: '<S12>/Unit Delay2' incorporates:
     *  SignalConversion generated from: '<S2>/HV_IntrlkStat_read'
     *  SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat_read'
     *  UnitDelay: '<S12>/Unit Delay1'
     */
#if Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    HVTR_ac_DW.UnitDelay2_DSTATE_cs = rtb_HV_IntrlkStat_write_IRV;
    HVTR_ac_DW.UnitDelay1_DSTATE_k = rtb_HV_IntrnlItrlkStat_write_IR;

#endif

    /* End of Update for UnitDelay: '<S12>/Unit Delay2' */

    /* Update for UnitDelay: '<S161>/VeHVTR_t_Tmr1Enbl_SrvcProc1320Prev' */
    HVTR_ac_DW.VeHVTR_t_Tmr1Enbl_SrvcProc1320P =
        VeHVTR_Cnt_Tmr1Enbl_SrvcProc1320;

    /* Update for UnitDelay: '<S161>/VeHVTR_b_StrtTmr_SrvcProc1320Prev' incorporates:
     *  SignalConversion generated from: '<S1>/VeHVTR_b_StrtTmr_SrvcProc1320'
     *  SignalConversion generated from: '<S2>/VeHVTR_b_StrtTmr_SrvcProc1320_Read'
     */
    HVTR_ac_DW.VeHVTR_b_StrtTmr_SrvcProc1320Pr =
        Rte_IrvRead_HVTR_MedTEB_VeHVTR_b_StrtTmr_SrvcProc1320_IRV();

    /* Outport: '<Root>/VeHVTR_I_AccPwrModCurr' incorporates:
     *  Gain: '<S19>/Gain'
     *  SignalConversion generated from: '<S2>/APM_CurrentFiltered'
     */
    (void)Rte_Write_VeHVTR_I_AccPwrModCurr_Value(rtb_Switch5_m);

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled7' */
    /* Outport: '<Root>/VeHVTR_P_AccPwrModPwr' incorporates:
     *  SignalConversion generated from: '<S2>/APM_PowerFiltered'
     *  Switch: '<S37>/Switch2'
     */
    (void)Rte_Write_VeHVTR_P_AccPwrModPwr_Value(rtb_Switch2);

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled7' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_P_AccPwrModPwrRaw' incorporates:
     *  SignalConversion generated from: '<S2>/AccPwrModPwrRaw'
     */
    (void)Rte_Write_VeHVTR_P_AccPwrModPwrRaw_Value(rtb_Switch3);

    /* Outport: '<Root>/VeHVTR_Cnt_AntiTamp_NbrOfFailures' incorporates:
     *  SignalConversion generated from: '<S2>/AntiTampCounter'
     */
    (void)Rte_Write_VeHVTR_Cnt_AntiTamp_NbrOfFailures_Value
        (HVTR_ac_B.VariantMerge_For_Variant_Source);

    /* SignalConversion generated from: '<S2>/HVBatSrvcDisCnctFA' */
#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    /* Outport: '<Root>/VeHVTR_b_HVBatSrvcDisCnctFA' */
    (void)Rte_Write_VeHVTR_b_HVBatSrvcDisCnctFA_Value
        (HVTR_ac_B.VariantMergeForOutportHVBatSrvc);

#endif

    /* End of SignalConversion generated from: '<S2>/HVBatSrvcDisCnctFA' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled5' */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled6' */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled8' */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled9' */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled13' */
    /* Outport: '<Root>/VeHVTR_I_HV_AccCurr' incorporates:
     *  SignalConversion generated from: '<S2>/HV_AccCurr'
     *  Sum: '<S8>/Summation'
     *  Switch: '<S24>/Switch2'
     *  Switch: '<S28>/Switch2'
     *  Switch: '<S35>/Switch2'
     *  Switch: '<S36>/Switch2'
     *  Switch: '<S38>/Switch2'
     *  Switch: '<S39>/Switch2'
     */
    (void)Rte_Write_VeHVTR_I_HV_AccCurr_Value
        (((((((rtb_TmpSignalConversionAtVeIDCR + rtb_Summation_gyj) +
              rtb_Summation_m5) + rtb_Summation_j4y) + rtb_Summation) +
           rtb_Multiplication1) + VeHVTC_I_SDS_HV_CrntFiltered) -
         VeHVTC_I_Arbitrated_ChrgCurr);

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled13' */
    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled9' */
    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled8' */
    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled6' */
    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled5' */
    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled2' */
    /* Outport: '<Root>/VeHVTR_P_HV_AccPwr' incorporates:
     *  SignalConversion generated from: '<S2>/HV_AccPwr'
     *  Switch: '<S32>/Switch2'
     */
    (void)Rte_Write_VeHVTR_P_HV_AccPwr_Value(rtb_Summation_di);

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled2' */

    /* Outport: '<Root>/VeHVTR_I_HV_BatCurrArb' incorporates:
     *  Gain: '<S21>/Gain'
     *  SignalConversion generated from: '<S2>/HV_BatCurrArb'
     */
    (void)Rte_Write_VeHVTR_I_HV_BatCurrArb_Value(rtb_Merge);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_P_HV_BatPwr' incorporates:
     *  SignalConversion generated from: '<S2>/HV_BatPwr'
     */
    (void)Rte_Write_VeHVTR_P_HV_BatPwr_Value(rtb_Switch4);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Outport: '<Root>/VeHVTR_b_HV_BatPwrFA' incorporates:
     *  Logic: '<S8>/Logical3'
     *  Logic: '<S8>/Logical4'
     *  Logic: '<S8>/Logical5'
     *  Logic: '<S8>/Logical6'
     *  Logic: '<S8>/Logical7'
     *  SignalConversion generated from: '<S2>/HV_BatPwrFA'
     */
    (void)Rte_Write_VeHVTR_b_HV_BatPwrFA_Value((((((VeHVTI_b_MtrA_DC_CrntFA) ||
        (VeHVTI_b_MtrB_DC_CrntFA)) || (VeHVTI_b_MtrC_DC_CrntFA)) ||
        (VeHVTI_b_APM_HV_CurrentFA)) && rtb_Logical4) ||
        ((((VeHVTI_b_MtrB_DC_VoltFA) || (VeHVTI_b_MtrA_DC_VoltFA)) ||
          (VeHVTI_b_MtrC_DC_VoltFA)) && rtb_AND_li));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb' incorporates:
     *  SignalConversion generated from: '<S2>/HV_BatVoltModMaxArb'
     */
    (void)Rte_Write_VeHVTR_U_HV_BatVoltModMaxArb_Value(Switch1);

    /* Outport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb' incorporates:
     *  SignalConversion generated from: '<S2>/HV_BatVoltModMinArb'
     */
    (void)Rte_Write_VeHVTR_U_HV_BatVoltModMinArb_Value(rtb_Switch3_m);

    /* SignalConversion generated from: '<S2>/HV_IntrlkStat' incorporates:
     *  SignalConversion generated from: '<S2>/HV_IntrlkStat_write'
     *  SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat'
     *  SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat_write'
     */
#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    /* Outport: '<Root>/VeHVTR_e_HV_IntrlkStat' incorporates:
     *  DataTypeConversion: '<S11>/DataTypeConversion'
     */
    (void)Rte_Write_VeHVTR_e_HV_IntrlkStat_Value(HVTR_ac_B.DataTypeConversion);

    /* SignalConversion generated from: '<S2>/HV_IntrlkStat_write' incorporates:
     *  DataTypeConversion: '<S11>/DataTypeConversion'
     */
    rtb_OutportBufferForHV_Intrlk_h = HVTR_ac_B.DataTypeConversion;

    /* Outport: '<Root>/VeHVTR_e_HV_IntrnlIntrlkStat' incorporates:
     *  VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat'
     */
    (void)Rte_Write_VeHVTR_e_HV_IntrnlIntrlkStat_Value
        (HVTR_ac_B.VariantMergeForOutportHV_Intrnl);

    /* SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat_write' incorporates:
     *  VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat'
     */
    rtb_OutportBufferForHV_IntrnlIt = HVTR_ac_B.VariantMergeForOutportHV_Intrnl;

#endif

    /* End of SignalConversion generated from: '<S2>/HV_IntrlkStat' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Outport: '<Root>/VeHVTR_U_HV_Volt' incorporates:
     *  Gain: '<S17>/Gain'
     *  SignalConversion generated from: '<S2>/HV_Volt'
     */
    (void)Rte_Write_VeHVTR_U_HV_Volt_Value(VeHVTC_U_HV_Volt);

    /* Outport: '<Root>/VeHVTR_b_HV_VoltFA' incorporates:
     *  Constant: '<S152>/Calib'
     *  Constant: '<S153>/Calib'
     *  Constant: '<S155>/Calib'
     *  Constant: '<S156>/Calib'
     *  Logic: '<S151>/Logical12'
     *  Logic: '<S151>/Logical13'
     *  Logic: '<S151>/Logical14'
     *  Logic: '<S151>/Logical15'
     *  Logic: '<S151>/Logical7'
     *  Logic: '<S151>/Logical9'
     *  SignalConversion generated from: '<S2>/HV_VoltFA'
     */
    (void)Rte_Write_VeHVTR_b_HV_VoltFA_Value((((((VeHVTI_b_MtrA_DC_VoltFA) ||
        (KeHVTR_b_DsblMtrAV)) && ((VeHVTI_b_MtrB_DC_VoltFA) ||
        (KeHVTR_b_DsblMtrBV))) && ((VeHVTI_b_MtrC_DC_VoltFA) || rtb_Comparison2))
        && ((VeHVTI_b_APM_HV_VoltageFA) || (KeHVTR_b_DsablAPMHV_Varb))) &&
        ((VeHVTI_b_CompHVInp_FA) || (KeHVTR_b_Dsabl_HVAC)));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_b_SrvcHVError' incorporates:
     *  SignalConversion generated from: '<S2>/SrvcHVError_Manual'
     */
    (void)Rte_Write_VeHVTR_b_SrvcHVError_Value(HVTR_ac_B.Merge4);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Outport: '<Root>/VeHVTR_I_HV_BattCurrent' incorporates:
     *  Gain: '<S20>/Gain'
     *  SignalConversion generated from: '<S2>/VeHVTR_I_HV_BattCurrent'
     */
    (void)Rte_Write_VeHVTR_I_HV_BattCurrent_Value(rtb_Sum2);

    /* Outport: '<Root>/VeHVTR_I_StringCurrent_Arb' incorporates:
     *  Gain: '<S18>/Gain'
     *  SignalConversion generated from: '<S2>/VeHVTR_I_StringCurrent_Arb'
     */
    (void)Rte_Write_VeHVTR_I_StringCurrent_Arb_Value(rtb_Merge1);

    /* Outport: '<Root>/VeHVTR_I_StringsCurrFdbk' incorporates:
     *  Gain: '<S22>/Gain'
     *  SignalConversion generated from: '<S2>/VeHVTR_I_StringsCurrFdbk'
     */
    (void)Rte_Write_VeHVTR_I_StringsCurrFdbk_Value(rtb_Merge3);

    /* Switch: '<S8>/Switch10' incorporates:
     *  Constant: '<S49>/Calib'
     *  Product: '<S8>/Multiplication5'
     *  Product: '<S8>/Multiplication6'
     *  Sum: '<S8>/Summation3'
     */
    if (KeHVTR_b_SwtchBatt_Enbl)
    {
        rtb_Switch4 = (VeHVTI_I_HV_BatCurr * VeHVTI_U_HV_InternalStringVolt1) +
            (VeHVTI_I_HV_Current_String2 * VeHVTI_U_HV_InternalStringVolt2);
    }

    /* End of Switch: '<S8>/Switch10' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_P_HV_BatPwr_Arb2' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTR_P_HV_BatPwr_Arb2'
     */
    (void)Rte_Write_VeHVTR_P_HV_BatPwr_Arb2_Value(rtb_Switch4);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Outputs for Atomic SubSystem: '<S8>/Digital Lowpass Reset Enabled16' */
    /* Outport: '<Root>/VeHVTR_P_PwrPanl_PwrFiltred' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTR_P_PwrPanl_PwrFiltred'
     *  Switch: '<S31>/Switch2'
     */
    (void)Rte_Write_VeHVTR_P_PwrPanl_PwrFiltred_Value(rtb_Multiplication3);

    /* End of Outputs for SubSystem: '<S8>/Digital Lowpass Reset Enabled16' */

    /* Outport: '<Root>/VeHVTR_U_HV_Volt_Arb2' incorporates:
     *  Constant: '<S107>/Constant Value5'
     *  MinMax: '<S107>/MinMax2'
     *  SignalConversion generated from: '<S2>/VeHVTR_U_HV_Volt_Arb2'
     */
    (void)Rte_Write_VeHVTR_U_HV_Volt_Arb2_Value(fmaxf(rtb_Switch1_ad, 0.01F));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_U_HvBattVolt_Arb' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTR_U_HvBattVolt_Arb'
     */
    (void)Rte_Write_VeHVTR_U_HvBattVolt_Arb_Value(Merge);

    /* Outport: '<Root>/VeHVTR_U_HvBattVolt_Max' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTR_U_HvBattVolt_Max'
     */
    (void)Rte_Write_VeHVTR_U_HvBattVolt_Max_Value(Merge2);

    /* Outport: '<Root>/VeHVTR_U_HvBattVolt_Min' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTR_U_HvBattVolt_Min'
     */
    (void)Rte_Write_VeHVTR_U_HvBattVolt_Min_Value(Merge1);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Outport: '<Root>/VeHVTR_b_HV_BatCurrFA' incorporates:
     *  Gain: '<S23>/Gain'
     *  SignalConversion generated from: '<S2>/VeHVTR_b_HV_BatCurrFA'
     */
    (void)Rte_Write_VeHVTR_b_HV_BatCurrFA_Value(rtb_Logical4);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_b_HV_BatVoltFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTR_b_HV_BatVoltFA'
     */
    (void)Rte_Write_VeHVTR_b_HV_BatVoltFA_Value(rtb_AND_li);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Outport: '<Root>/VeHVTR_b_HV_VoltFA_Arb2' incorporates:
     *  Constant: '<S152>/Calib'
     *  Constant: '<S154>/Calib'
     *  Constant: '<S155>/Calib'
     *  Constant: '<S156>/Calib'
     *  Logic: '<S151>/Logical10'
     *  Logic: '<S151>/Logical17'
     *  Logic: '<S151>/Logical18'
     *  Logic: '<S151>/Logical19'
     *  Logic: '<S151>/Logical20'
     *  Logic: '<S151>/Logical21'
     *  SignalConversion generated from: '<S2>/VeHVTR_b_HV_VoltFA_Arb2'
     */
    (void)Rte_Write_VeHVTR_b_HV_VoltFA_Arb2_Value((((((VeHVTI_b_MtrA_DC_VoltFA) ||
        (KeHVTR_b_DsblMtrAV)) && ((VeHVTI_b_MtrB_DC_VoltFA) ||
        (KeHVTR_b_DsblMtrBV))) && ((VeHVTI_b_MtrC_DC_VoltFA) || rtb_Comparison2))
        && ((VeHVTI_b_APM_HV_VoltageFA) || (KeHVTR_b_DsablAPMHV_Varb))) &&
        ((VeHVTI_b_HV_BatVoltFA) || (KeHVTR_b_Dsabl_HVBatt)));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_b_SrvcPrcEnbld_Manual' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTR_b_SrvcPrcEnbld_Manual'
     */
    (void)Rte_Write_VeHVTR_b_SrvcPrcEnbld_Manual_Value
        (HVTR_ac_B.VeHVTR_b_SrvcPrcEnbld_Manual);

    /* Merge: '<Root>/BMS_HV_Nodes_FA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/BMS_HV_Nodes_FA_write'
     * */
    Rte_IrvWrite_HVTR_MedTEB_BMS_HV_Nodes_FA_write_IRV(rtb_Logical1_el);

    /* Merge: '<Root>/HV_BatIntrlkStat_IRV_Merge' incorporates:
     *  SignalConversion: '<S2>/Signal Conversion'
     *  SignalConversion generated from: '<S2>/HV_BatIntrlkStat_write'
     *  Switch: '<S7>/Switch4'
     */
    Rte_IrvWrite_HVTR_MedTEB_HV_BatIntrlkStat_write_IRV
        (VeHVTI_e_HV_BatIntrlkStat);

    /* SignalConversion generated from: '<S2>/HV_IntrlkStat_write' incorporates:
     *  SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat_write'
     */
#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/HV_IntrlkStat_write'
     */
    Rte_IrvWrite_HVTR_MedTEB_HV_IntrlkStat_write_IRV
        (rtb_OutportBufferForHV_Intrlk_h);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/HV_IntrnlItrlkStat_write'
     */
    Rte_IrvWrite_HVTR_MedTEB_HV_IntrnlItrlkStat_write_IRV
        (rtb_OutportBufferForHV_IntrnlIt);

#endif

    /* End of SignalConversion generated from: '<S2>/HV_IntrlkStat_write' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  Gain: '<S17>/Gain'
     *  SignalConversion generated from: '<S2>/HV_Volt_write'
     */
    Rte_IrvWrite_HVTR_MedTEB_HV_Volt_write_IRV(VeHVTC_U_HV_Volt);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/Tmr1Enbl_SrvcProc1300_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/Tmr1Enbl_SrvcProc1300_write'
     * */
    Rte_IrvWrite_HVTR_MedTEB_Tmr1Enbl_SrvcProc1300_write_IRV
        (VeHVTR_Cnt_Tmr1Enbl_SrvcProc1320);

    /* Merge: '<Root>/VeHVTI_b_OBCRPluggedIn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeHVTI_b_OBCRPluggedIn_write'
     * */
    Rte_IrvWrite_HVTR_MedTEB_VeHVTI_b_OBCRPluggedIn_write_IRV
        (VeHVTI_b_OBCRPluggedIn);

    /* Merge: '<Root>/VeHVTI_e_EPBHoldSts_IRV_Merge' incorporates:
     *  DataTypeConversion: '<S470>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeHVTI_e_EPBHoldSts_write'
     * */
    Rte_IrvWrite_HVTR_MedTEB_VeHVTI_e_EPBHoldSts_write_IRV(VeHVTI_e_EPBHoldSts);

    /* Merge: '<Root>/VeHVTI_e_HV_BatCntctrStat_IRV_Merge' incorporates:
     *  DataTypeConversion: '<S464>/DataTypeConversion'
     *  SignalConversion: '<S2>/Signal Conversion1'
     *  SignalConversion generated from: '<S2>/VeHVTI_e_HV_BatCntctrStat_write'
     */
    Rte_IrvWrite_HVTR_MedTEB_VeHVTI_e_HV_BatCntctrStat_write_IRV
        (VeHVTI_e_HV_BatCntctrStat);

    /* Merge: '<Root>/VeHVTI_e_VldtdTransRngSt_IRV_Merge' incorporates:
     *  DataTypeConversion: '<S469>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeHVTI_e_VldtdTransRngSt_write'
     * */
    Rte_IrvWrite_HVTR_MedTEB_VeHVTI_e_VldtdTransRngSt_write_IRV
        (VeHVTI_e_VldtdTransRngSt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, HVTR_CODE) DID_1320_SrvcProc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/DID_1320_SrvcProc' */
    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    EeHVTR_b_OpnReq_SrvcProc1320 = false;

    /* Outport: '<Root>/VeHVTR_e_Res_SrvcProc1320_out' incorporates:
     *  Constant: '<S5>/Constant'
     *  SignalConversion generated from: '<S1>/VeHVTR_e_Res_SrvcProc1320'
     */
    (void)Rte_Write_VeHVTR_e_Res_SrvcProc1320_out_Value(CeHVTR_e_SrvcPrcDisbld);

    /* SignalConversion generated from: '<S1>/VeHVTR_b_StrtTmr_SrvcProc1320' */
    HVTR_ac_B.OutportBufferForVeHVTR_b_StrtTm = false;

    /* SignalConversion generated from: '<S1>/VeHVTR_b_StrtTmr_SrvcProc1320' */
    Rte_IrvWrite_DID_1320_SrvcProc_VeHVTR_b_StrtTmr_SrvcProc1320_IRV
        (HVTR_ac_B.OutportBufferForVeHVTR_b_StrtTm);

    /* Outport: '<Root>/VeHVTR_b_SrvcHVError' incorporates:
     *  Constant: '<S1>/Constant3'
     *  SignalConversion generated from: '<S1>/VeHVTR_b_ServiceHVError_Routine'
     */
    (void)Rte_Write_VeHVTR_b_SrvcHVError_Value(false);

    /* End of Outputs for SubSystem: '<Root>/DID_1320_SrvcProc' */
}

/* Output function */
FUNC(void, HVTR_CODE) HVTR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/HVTR_PwrOff'
     */
    /* Outport: '<Root>/EeHVTR_e_StrtCmd_SrvcProc1320_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/EeHVTR_e_StrtCmd_SrvcProc1320'
     */
    (void)Rte_Write_EeHVTR_e_StrtCmd_SrvcProc1320_EeHVTR_e_StrtCmd_SrvcProc1320
        (EeHVTR_e_StrtCmd_SrvcProc1320);

    /* Outport: '<Root>/EeHVTR_b_OpnReq_SrvcProc1320_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/EeHVTR_b_OpnReq_SrvcProc1320'
     */
    (void)Rte_Write_EeHVTR_b_OpnReq_SrvcProc1320_EeHVTR_b_OpnReq_SrvcProc1320
        (EeHVTR_b_OpnReq_SrvcProc1320);

    /* Outport: '<Root>/NeHVTR_Cnt_AntiTampCounter_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHVTR_Cnt_AntiTampCounter'
     */
    (void)Rte_Write_NeHVTR_Cnt_AntiTampCounter_NeHVTR_Cnt_AntiTampCounter
        (HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter);

    /* Outport: '<Root>/NeHVTR_b_AntiTampFailed_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHVTR_b_AntiTampFailed'
     */
    (void)Rte_Write_NeHVTR_b_AntiTampFailed_NeHVTR_b_AntiTampFailed
        (HVTR_ac_DW.NeHVTR_b_AntiTampFailed);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, HVTR_CODE) HVTR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HVTR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S603>/NeHVTR_b_AntiTampFailed' incorporates:
     *  Inport: '<Root>/NeHVTR_b_AntiTampFailed_PM_In'
     */
    (void)Rte_Read_NeHVTR_b_AntiTampFailed_Rx_NeHVTR_b_AntiTampFailed
        (&HVTR_ac_DW.NeHVTR_b_AntiTampFailed);

    /* DataStoreWrite: '<S603>/NeHVTR_Cnt_AntiTampCounter' incorporates:
     *  Inport: '<Root>/NeHVTR_Cnt_AntiTampCounter_PM_In'
     */
    (void)Rte_Read_NeHVTR_Cnt_AntiTampCounter_Rx_NeHVTR_Cnt_AntiTampCounter
        (&HVTR_ac_DW.NeHVTR_Cnt_AntiTampCounter);

    /* DataStoreWrite: '<S603>/EeHVTR_b_OpnReq_SrvcProc1320' incorporates:
     *  Inport: '<Root>/EeHVTR_b_OpnReq_SrvcProc1320_PM_In'
     */
    (void)Rte_Read_EeHVTR_b_OpnReq_SrvcProc1320_Rx_EeHVTR_b_OpnReq_SrvcProc1320
        ((&(EeHVTR_b_OpnReq_SrvcProc1320)));

    /* DataStoreWrite: '<S603>/EeHVTR_e_StrtCmd_SrvcProc1320' incorporates:
     *  Inport: '<Root>/EeHVTR_e_StrtCmd_SrvcProc1320_PM_In'
     */
    (void)
        Rte_Read_EeHVTR_e_StrtCmd_SrvcProc1320_Rx_EeHVTR_e_StrtCmd_SrvcProc1320
        ((&(EeHVTR_e_StrtCmd_SrvcProc1320)));

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HVTO_Init'
     */
    /* SignalConversion generated from: '<S604>/HV_Volt' */
    HVTR_ac_B.OutportBufferForHV_Volt = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_BatMinModVolt' */
    HVTR_ac_B.OutportBufferForHV_BatMinModVol = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_BatMaxModVolt' */
    HVTR_ac_B.OutportBufferForHV_BatMaxModVol = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_BatCurr' */
    HVTR_ac_B.OutportBufferForHV_BatCurr = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_IntrlkStat' incorporates:
     *  Constant: '<S606>/Constant'
     */
    HVTR_ac_B.OutportBufferForHV_IntrlkStat = HVTR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S604>/HV_BatPwr' */
    HVTR_ac_B.OutportBufferForHV_BatPwr = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_AccCurr' */
    HVTR_ac_B.OutportBufferForHV_AccCurr = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_AccPwr' */
    HVTR_ac_B.OutportBufferForHV_AccPwr = 0.0F;

    /* SignalConversion generated from: '<S604>/AccPwrModCurr' */
    HVTR_ac_B.OutportBufferForAccPwrModCurr = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_VoltFA' */
    HVTR_ac_B.OutportBufferForHV_VoltFA = false;

    /* SignalConversion generated from: '<S604>/HVBatSrvcDisCnctFA' */
    HVTR_ac_B.OutportBufferForHVBatSrvcDisCnc = false;

    /* SignalConversion generated from: '<S604>/AccPwrModPwrRaw' */
    HVTR_ac_B.OutportBufferForAccPwrModPwrRaw = 0.0F;

    /* SignalConversion generated from: '<S604>/HV_IntrnlIntrlkStat' incorporates:
     *  Constant: '<S607>/Constant'
     */
    HVTR_ac_B.OutportBufferForHV_IntrnlIntrlk = HVTR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S604>/AccPwrModPwr' */
    HVTR_ac_B.OutportBufferForAccPwrModPwr = 0.0F;

    /* SignalConversion generated from: '<S604>/Res_SrvcProc1320' incorporates:
     *  Constant: '<S608>/Constant'
     */
    HVTR_ac_B.OutportBufferForRes_SrvcProc132 = HVTR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S604>/SrvcHVError' */
    HVTR_ac_B.OutportBufferForSrvcHVError = false;

    /* SignalConversion generated from: '<S604>/PwrOn__HV_BatCurrFA' */
    HVTR_ac_B.OutportBufferForPwrOn__HV_BatCu = false;

    /* SignalConversion generated from: '<S604>/PwrOn__HV_BattCurrent' */
    HVTR_ac_B.OutportBufferForPwrOn__HV_BattC = 0.0F;

    /* SignalConversion generated from: '<S604>/StringsCurrFdbk' */
    HVTR_ac_B.OutportBufferForStringsCurrFdbk = 0.0F;

    /* SignalConversion generated from: '<S604>/PwrOn__StringCurrent_Arb' */
    HVTR_ac_B.OutportBufferForPwrOn__StringCu = 0.0F;

    /* SignalConversion generated from: '<S604>/PwrOn__HvBattVolt_Arb' */
    HVTR_ac_B.OutportBufferForPwrOn__HvBattVo = 0.0F;

    /* SignalConversion generated from: '<S604>/PwrOn__HvBattVolt_Min' */
    HVTR_ac_B.OutportBufferForPwrOn__HvBatt_n = 0.0F;

    /* SignalConversion generated from: '<S604>/PwrOn__HvBattVolt_Max' */
    HVTR_ac_B.OutportBufferForPwrOn__HvBatt_f = 0.0F;

    /* SignalConversion generated from: '<S604>/PwrOn__HV_BatVoltFA' */
    HVTR_ac_B.OutportBufferForPwrOn__HV_BatVo = false;

    /* SignalConversion generated from: '<S604>/PwrOn__HV_BatPwr_Arb2' */
    HVTR_ac_B.OutportBufferForPwrOn__HV_BatPw = 0.0F;

    /* SignalConversion generated from: '<S604>/PwrOn__HV_Volt_Arb2' */
    HVTR_ac_B.OutportBufferForPwrOn__HV_Volt_ = 0.0F;

    /* SignalConversion generated from: '<S604>/PwrOn__HV_VoltFA_Arb2' */
    HVTR_ac_B.OutportBufferForPwrOn__HV_VoltF = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S605>/VeHVTR_b_HV_BatPwrFA_Out_Init' */
    HVTR_ac_B.OutportBufferForVeHVTR_b_HV_Bat = false;

    /* SignalConversion generated from: '<S605>/VeHVTR_Cnt_AntiTamp_NbrOfFailures_Out_Init' */
    HVTR_ac_B.OutportBufferForVeHVTR_Cnt_Anti = 0U;

    /* SignalConversion generated from: '<S605>/VeHVTR_b_OpnReq_SrvcProc1320_Out_Out_Init' */
    HVTR_ac_B.OutportBufferForVeHVTR_b_OpnReq = false;

    /* SignalConversion generated from: '<S605>/VeHVTR_b_SrvcPrcEnbld_Manual_Out_Init' */
    HVTR_ac_B.OutportBufferForVeHVTR_b_SrvcPr = false;

    /* SignalConversion generated from: '<S605>/VeHVTR_P_PwrPanl_PwrFiltred_Out_Init' */
    HVTR_ac_B.OutportBufferForVeHVTR_P_PwrPan = 0.0F;

    /* SignalConversion generated from: '<S605>/VeHVTI_e_HV_BatCntctrStat_write' incorporates:
     *  Constant: '<S609>/Constant'
     */
    HVTR_ac_B.OutportBufferForVeHVTI_e_HV_Bat = HVTR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S605>/VeHVTI_e_VldtdTransRngSt_write' incorporates:
     *  Constant: '<S610>/Constant'
     */
    HVTR_ac_B.OutportBufferForVeHVTI_e_VldtdT = HVTR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S605>/VeHVTI_b_OBCRPluggedIn_write' */
    HVTR_ac_B.OutportBufferForVeHVTI_b_OBCRPl = false;

    /* SignalConversion generated from: '<S605>/HV_BatIntrlkStat_write' incorporates:
     *  Constant: '<S611>/Constant'
     */
    HVTR_ac_B.OutportBufferForHV_BatIntrlkSta = HVTR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S605>/VeHVTI_e_EPBHoldSts_write' incorporates:
     *  Constant: '<S612>/Constant'
     */
    HVTR_ac_B.OutportBufferForVeHVTI_e_EPBHol = HVTR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S605>/Tmr1Enbl_SrvcProc1300_write' */
    HVTR_ac_B.OutportBufferForTmr1Enbl_SrvcPr = 0U;

    /* SignalConversion generated from: '<S605>/BMS_HV_Nodes_FA_write' */
    HVTR_ac_B.OutportBufferForBMS_HV_Nodes_FA = false;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeHVTR_I_AccPwrModCurr' incorporates:
     *  SignalConversion generated from: '<S4>/AccPwrModCurr'
     */
    (void)Rte_Write_VeHVTR_I_AccPwrModCurr_Value
        (HVTR_ac_B.OutportBufferForAccPwrModCurr);

    /* Outport: '<Root>/VeHVTR_P_AccPwrModPwr' incorporates:
     *  SignalConversion generated from: '<S4>/AccPwrModPwr'
     */
    (void)Rte_Write_VeHVTR_P_AccPwrModPwr_Value
        (HVTR_ac_B.OutportBufferForAccPwrModPwr);

    /* Outport: '<Root>/VeHVTR_P_AccPwrModPwrRaw' incorporates:
     *  SignalConversion generated from: '<S4>/AccPwrModPwrRaw'
     */
    (void)Rte_Write_VeHVTR_P_AccPwrModPwrRaw_Value
        (HVTR_ac_B.OutportBufferForAccPwrModPwrRaw);

    /* Outport: '<Root>/VeHVTR_b_HVBatSrvcDisCnctFA' incorporates:
     *  SignalConversion generated from: '<S4>/HVBatSrvcDisCnctFA'
     */
    (void)Rte_Write_VeHVTR_b_HVBatSrvcDisCnctFA_Value
        (HVTR_ac_B.OutportBufferForHVBatSrvcDisCnc);

    /* Outport: '<Root>/VeHVTR_I_HV_AccCurr' incorporates:
     *  SignalConversion generated from: '<S4>/HV_AccCurr'
     */
    (void)Rte_Write_VeHVTR_I_HV_AccCurr_Value
        (HVTR_ac_B.OutportBufferForHV_AccCurr);

    /* Outport: '<Root>/VeHVTR_P_HV_AccPwr' incorporates:
     *  SignalConversion generated from: '<S4>/HV_AccPwr'
     */
    (void)Rte_Write_VeHVTR_P_HV_AccPwr_Value(HVTR_ac_B.OutportBufferForHV_AccPwr);

    /* Outport: '<Root>/VeHVTR_I_HV_BatCurrArb' incorporates:
     *  SignalConversion generated from: '<S4>/HV_BatCurr'
     */
    (void)Rte_Write_VeHVTR_I_HV_BatCurrArb_Value
        (HVTR_ac_B.OutportBufferForHV_BatCurr);

    /* Outport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb' incorporates:
     *  SignalConversion generated from: '<S4>/HV_BatMaxModVolt'
     */
    (void)Rte_Write_VeHVTR_U_HV_BatVoltModMaxArb_Value
        (HVTR_ac_B.OutportBufferForHV_BatMaxModVol);

    /* Outport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb' incorporates:
     *  SignalConversion generated from: '<S4>/HV_BatMinModVolt'
     */
    (void)Rte_Write_VeHVTR_U_HV_BatVoltModMinArb_Value
        (HVTR_ac_B.OutportBufferForHV_BatMinModVol);

    /* Outport: '<Root>/VeHVTR_P_HV_BatPwr' incorporates:
     *  SignalConversion generated from: '<S4>/HV_BatPwr'
     */
    (void)Rte_Write_VeHVTR_P_HV_BatPwr_Value(HVTR_ac_B.OutportBufferForHV_BatPwr);

    /* Outport: '<Root>/VeHVTR_e_HV_IntrlkStat' incorporates:
     *  SignalConversion generated from: '<S4>/HV_IntrlkStat'
     *  SignalConversion generated from: '<S604>/HV_IntrlkStat'
     */
    (void)Rte_Write_VeHVTR_e_HV_IntrlkStat_Value
        (HVTR_ac_B.OutportBufferForHV_IntrlkStat);

    /* Outport: '<Root>/VeHVTR_e_HV_IntrnlIntrlkStat' incorporates:
     *  SignalConversion generated from: '<S4>/HV_IntrnlIntrlkStat'
     *  SignalConversion generated from: '<S604>/HV_IntrnlIntrlkStat'
     */
    (void)Rte_Write_VeHVTR_e_HV_IntrnlIntrlkStat_Value
        (HVTR_ac_B.OutportBufferForHV_IntrnlIntrlk);

    /* Outport: '<Root>/VeHVTR_U_HV_Volt' incorporates:
     *  SignalConversion generated from: '<S4>/HV_Volt'
     */
    (void)Rte_Write_VeHVTR_U_HV_Volt_Value(HVTR_ac_B.OutportBufferForHV_Volt);

    /* Outport: '<Root>/VeHVTR_b_HV_VoltFA' incorporates:
     *  SignalConversion generated from: '<S4>/HV_VoltFA'
     */
    (void)Rte_Write_VeHVTR_b_HV_VoltFA_Value(HVTR_ac_B.OutportBufferForHV_VoltFA);

    /* Outport: '<Root>/VeHVTR_b_HV_BatCurrFA' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HV_BatCurrFA'
     */
    (void)Rte_Write_VeHVTR_b_HV_BatCurrFA_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HV_BatCu);

    /* Outport: '<Root>/VeHVTR_P_HV_BatPwr_Arb2' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HV_BatPwr_Arb2'
     */
    (void)Rte_Write_VeHVTR_P_HV_BatPwr_Arb2_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HV_BatPw);

    /* Outport: '<Root>/VeHVTR_b_HV_BatVoltFA' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HV_BatVoltFA'
     */
    (void)Rte_Write_VeHVTR_b_HV_BatVoltFA_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HV_BatVo);

    /* Outport: '<Root>/VeHVTR_I_HV_BattCurrent' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HV_BattCurrent'
     */
    (void)Rte_Write_VeHVTR_I_HV_BattCurrent_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HV_BattC);

    /* Outport: '<Root>/VeHVTR_b_HV_VoltFA_Arb2' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HV_VoltFA_Arb2'
     */
    (void)Rte_Write_VeHVTR_b_HV_VoltFA_Arb2_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HV_VoltF);

    /* Outport: '<Root>/VeHVTR_U_HV_Volt_Arb2' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HV_Volt_Arb2'
     */
    (void)Rte_Write_VeHVTR_U_HV_Volt_Arb2_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HV_Volt_);

    /* Outport: '<Root>/VeHVTR_U_HvBattVolt_Arb' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HvBattVolt_Arb'
     */
    (void)Rte_Write_VeHVTR_U_HvBattVolt_Arb_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HvBattVo);

    /* Outport: '<Root>/VeHVTR_U_HvBattVolt_Max' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HvBattVolt_Max'
     */
    (void)Rte_Write_VeHVTR_U_HvBattVolt_Max_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HvBatt_f);

    /* Outport: '<Root>/VeHVTR_U_HvBattVolt_Min' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__HvBattVolt_Min'
     */
    (void)Rte_Write_VeHVTR_U_HvBattVolt_Min_Value
        (HVTR_ac_B.OutportBufferForPwrOn__HvBatt_n);

    /* Outport: '<Root>/VeHVTR_I_StringCurrent_Arb' incorporates:
     *  SignalConversion generated from: '<S4>/PwrOn__StringCurrent_Arb'
     */
    (void)Rte_Write_VeHVTR_I_StringCurrent_Arb_Value
        (HVTR_ac_B.OutportBufferForPwrOn__StringCu);

    /* Outport: '<Root>/VeHVTR_e_Res_SrvcProc1320_out' incorporates:
     *  SignalConversion generated from: '<S4>/Res_SrvcProc1320'
     *  SignalConversion generated from: '<S604>/Res_SrvcProc1320'
     */
    (void)Rte_Write_VeHVTR_e_Res_SrvcProc1320_out_Value
        (HVTR_ac_B.OutportBufferForRes_SrvcProc132);

    /* Outport: '<Root>/VeHVTR_b_SrvcHVError' incorporates:
     *  SignalConversion generated from: '<S4>/SrvcHVError'
     */
    (void)Rte_Write_VeHVTR_b_SrvcHVError_Value
        (HVTR_ac_B.OutportBufferForSrvcHVError);

    /* Outport: '<Root>/VeHVTR_I_StringsCurrFdbk' incorporates:
     *  SignalConversion generated from: '<S4>/StringsCurrFdbk'
     */
    (void)Rte_Write_VeHVTR_I_StringsCurrFdbk_Value
        (HVTR_ac_B.OutportBufferForStringsCurrFdbk);

    /* Outport: '<Root>/VeHVTR_Cnt_AntiTamp_NbrOfFailures' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTR_Cnt_AntiTamp_NbrOfFailures_Out_Init'
     */
    (void)Rte_Write_VeHVTR_Cnt_AntiTamp_NbrOfFailures_Value
        (HVTR_ac_B.OutportBufferForVeHVTR_Cnt_Anti);

    /* Outport: '<Root>/VeHVTR_P_PwrPanl_PwrFiltred' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTR_P_PwrPanl_PwrFiltred_Out_Init'
     */
    (void)Rte_Write_VeHVTR_P_PwrPanl_PwrFiltred_Value
        (HVTR_ac_B.OutportBufferForVeHVTR_P_PwrPan);

    /* Outport: '<Root>/VeHVTR_b_HV_BatPwrFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTR_b_HV_BatPwrFA_Out_Init'
     */
    (void)Rte_Write_VeHVTR_b_HV_BatPwrFA_Value
        (HVTR_ac_B.OutportBufferForVeHVTR_b_HV_Bat);

    /* Outport: '<Root>/VeHVTR_b_OpnReq_SrvcProc1320_Out' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTR_b_OpnReq_SrvcProc1320_Out_Out_Init'
     */
    (void)Rte_Write_VeHVTR_b_OpnReq_SrvcProc1320_Out_Value
        (HVTR_ac_B.OutportBufferForVeHVTR_b_OpnReq);

    /* Outport: '<Root>/VeHVTR_b_SrvcPrcEnbld_Manual' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTR_b_SrvcPrcEnbld_Manual_Out_Init'
     */
    (void)Rte_Write_VeHVTR_b_SrvcPrcEnbld_Manual_Value
        (HVTR_ac_B.OutportBufferForVeHVTR_b_SrvcPr);

    /* Merge: '<Root>/BMS_HV_Nodes_FA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/BMS_HV_Nodes_FA_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_BMS_HV_Nodes_FA_write_IRV
        (HVTR_ac_B.OutportBufferForBMS_HV_Nodes_FA);

    /* Merge: '<Root>/HV_BatIntrlkStat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/HV_BatIntrlkStat_write'
     *  SignalConversion generated from: '<S605>/HV_BatIntrlkStat_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_HV_BatIntrlkStat_write_IRV
        (HVTR_ac_B.OutportBufferForHV_BatIntrlkSta);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/HV_IntrlkStat_write'
     *  SignalConversion generated from: '<S604>/HV_IntrlkStat'
     * */
    Rte_IrvWrite_HVTR_PwrOn_HV_IntrlkStat_write_IRV
        (HVTR_ac_B.OutportBufferForHV_IntrlkStat);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/HV_IntrnlIntrlkStat_write'
     *  SignalConversion generated from: '<S604>/HV_IntrnlIntrlkStat'
     * */
    Rte_IrvWrite_HVTR_PwrOn_HV_IntrnlItrlkStat_write_IRV
        (HVTR_ac_B.OutportBufferForHV_IntrnlIntrlk);

    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/HV_Volt_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_HV_Volt_write_IRV(HVTR_ac_B.OutportBufferForHV_Volt);

    /* Merge: '<Root>/Tmr1Enbl_SrvcProc1300_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/Tmr1Enbl_SrvcProc1300_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_Tmr1Enbl_SrvcProc1300_write_IRV
        (HVTR_ac_B.OutportBufferForTmr1Enbl_SrvcPr);

    /* Merge: '<Root>/VeHVTI_b_OBCRPluggedIn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTI_b_OBCRPluggedIn_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_VeHVTI_b_OBCRPluggedIn_write_IRV
        (HVTR_ac_B.OutportBufferForVeHVTI_b_OBCRPl);

    /* Merge: '<Root>/VeHVTI_e_EPBHoldSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTI_e_EPBHoldSts_write'
     *  SignalConversion generated from: '<S605>/VeHVTI_e_EPBHoldSts_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_VeHVTI_e_EPBHoldSts_write_IRV
        (HVTR_ac_B.OutportBufferForVeHVTI_e_EPBHol);

    /* Merge: '<Root>/VeHVTI_e_HV_BatCntctrStat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTI_e_HV_BatCntctrStat_write'
     *  SignalConversion generated from: '<S605>/VeHVTI_e_HV_BatCntctrStat_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_VeHVTI_e_HV_BatCntctrStat_write_IRV
        (HVTR_ac_B.OutportBufferForVeHVTI_e_HV_Bat);

    /* Merge: '<Root>/VeHVTI_e_VldtdTransRngSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeHVTI_e_VldtdTransRngSt_write'
     *  SignalConversion generated from: '<S605>/VeHVTI_e_VldtdTransRngSt_write'
     * */
    Rte_IrvWrite_HVTR_PwrOn_VeHVTI_e_VldtdTransRngSt_write_IRV
        (HVTR_ac_B.OutportBufferForVeHVTI_e_VldtdT);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HVTR_CODE) HVTR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
    VeHVTI_e_HVTracBatCntctrConfig = CeBPCR_e_HVTracBatConfig_Closed_Parallel;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HVTR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/HVTO_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S604>/HV_IntrlkStat' incorporates:
     *  Constant: '<S606>/Constant'
     */
    HVTR_ac_B.OutportBufferForHV_IntrlkStat = HVTR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S604>/HV_IntrnlIntrlkStat' incorporates:
     *  Constant: '<S607>/Constant'
     */
    HVTR_ac_B.OutportBufferForHV_IntrnlIntrlk = HVTR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S604>/Res_SrvcProc1320' incorporates:
     *  Constant: '<S608>/Constant'
     */
    HVTR_ac_B.OutportBufferForRes_SrvcProc132 = HVTR_ac_ConstB.Constant_c;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S605>/VeHVTI_e_HV_BatCntctrStat_write' incorporates:
     *  Constant: '<S609>/Constant'
     */
    HVTR_ac_B.OutportBufferForVeHVTI_e_HV_Bat = HVTR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S605>/VeHVTI_e_VldtdTransRngSt_write' incorporates:
     *  Constant: '<S610>/Constant'
     */
    HVTR_ac_B.OutportBufferForVeHVTI_e_VldtdT = HVTR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S605>/HV_BatIntrlkStat_write' incorporates:
     *  Constant: '<S611>/Constant'
     */
    HVTR_ac_B.OutportBufferForHV_BatIntrlkSta = HVTR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S605>/VeHVTI_e_EPBHoldSts_write' incorporates:
     *  Constant: '<S612>/Constant'
     */
    HVTR_ac_B.OutportBufferForVeHVTI_e_EPBHol = HVTR_ac_ConstB.Constant_d;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/HVTR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTI'
     */
    /* SystemInitialize for SignalConversion generated from: '<S7>/VeHVTR_t_dt' incorporates:
     *  Constant: '<S549>/Calib'
     */
    HVTR_ac_B.OutportBufferForVeHVTR_t_dt = HeHVTR_t_dT;

    /* SystemInitialize for DataTypeConversion: '<S463>/DataTypeConversion' incorporates:
     *  Outport: '<S7>/VeHVTI_e_HVTracBatCntctrConfig'
     */
    VeHVTI_e_HVTracBatCntctrConfig = CeBPCR_e_HVTracBatConfig_Closed_Parallel;

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HVTC'
     */
    /* Start for If: '<S12>/If' */
    HVTR_ac_DW.If_ActiveSubsystem = -1;

#if Rte_SysCon_Variant_HVTR_HVIL_0 || Rte_SysCon_Variant_HVTR_HVIL_1 || Rte_SysCon_Variant_HVTR_HVIL_10 || Rte_SysCon_Variant_HVTR_HVIL_2 || Rte_SysCon_Variant_HVTR_HVIL_3 || Rte_SysCon_Variant_HVTR_HVIL_4 || Rte_SysCon_Variant_HVTR_HVIL_5 || Rte_SysCon_Variant_HVTR_HVIL_6 || Rte_SysCon_Variant_HVTR_HVIL_7 || Rte_SysCon_Variant_HVTR_HVIL_8 || Rte_SysCon_Variant_HVTR_HVIL_9

    /* SystemInitialize for Atomic SubSystem: '<S12>/Subsystem' */
#if Rte_SysCon_Variant_HVTR_HVIL_2

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType1' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S178>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType1' */
#elif Rte_SysCon_Variant_HVTR_HVIL_3

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType2' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S179>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType2' */
#elif Rte_SysCon_Variant_HVTR_HVIL_4

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType3' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S180>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType3' */
#elif Rte_SysCon_Variant_HVTR_HVIL_5

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType4' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S181>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType4' */
#elif Rte_SysCon_Variant_HVTR_HVIL_6

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType5' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S182>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType5' */
#elif Rte_SysCon_Variant_HVTR_HVIL_7

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType6' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S183>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType6' */
#elif Rte_SysCon_Variant_HVTR_HVIL_8

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType7' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S184>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType7' */
#elif Rte_SysCon_Variant_HVTR_HVIL_9

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType8' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S185>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType8' */
#elif Rte_SysCon_Variant_HVTR_HVIL_10

    /* SystemInitialize for Atomic SubSystem: '<S162>/CANBasedType9' */
    /* SystemInitialize for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<S186>/Merge1'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/CANBasedType9' */
#elif Rte_SysCon_Variant_HVTR_HVIL_0

    /* SystemInitialize for Atomic SubSystem: '<S162>/No_Function' */
    /* Start for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Constant: '<S394>/Calib'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = KeHVTR_e_HVILIntrnlStatOvrdVal;

    /* End of SystemInitialize for SubSystem: '<S162>/No_Function' */
#elif Rte_SysCon_Variant_HVTR_HVIL_1

    /* SystemInitialize for Atomic SubSystem: '<S162>/Sense_Point' */
    /* Start for VariantMerge generated from: '<S162>/HV_IntrnlIntrlkStat' incorporates:
     *  Constant: '<S402>/Constant'
     */
    HVTR_ac_B.VariantMergeForOutportHV_Intrnl = CeBPCR_e_HVBatIntrlkSNA;

    /* End of SystemInitialize for SubSystem: '<S162>/Sense_Point' */
#endif

    /* End of SystemInitialize for SubSystem: '<S12>/Subsystem' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VeHVTR_e_HV_IntrlkStat' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeHVTR_e_HV_IntrlkStat_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeHVTR_e_HV_IntrnlIntrlkStat' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeHVTR_e_HV_IntrnlIntrlkStat_Value(CeBPCR_e_HVBatIntrlkSNA);

    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/DID_1320_SrvcProc' incorporates:
     *  SubSystem: '<Root>/DID_1320_SrvcProc'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1>/VeHVTR_b_StrtTmr_SrvcProc1320' */
    Rte_IrvWrite_HVTR_ac_Init_VeHVTR_b_StrtTmr_SrvcProc1320_IRV
        (HVTR_ac_B.OutportBufferForVeHVTR_b_StrtTm);

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/DID_1320_SrvcProc' */

    /* SystemInitialize for Outport: '<Root>/VeHVTR_e_Res_SrvcProc1320_out' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeHVTR_e_Res_SrvcProc1320_out_Value(CeHVTR_e_SrvcPrcDisbld);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
