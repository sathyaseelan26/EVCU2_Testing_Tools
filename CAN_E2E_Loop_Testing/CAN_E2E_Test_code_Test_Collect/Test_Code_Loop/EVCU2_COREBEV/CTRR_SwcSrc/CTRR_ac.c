/*
 * File: CTRR_ac.c
 *
 * Code generated for Simulink model 'CTRR_ac'.
 *
 * Model version                  : 9.126
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:21:56 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CTRR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(uint16, CTRR_VAR_INIT) KeCTRR_Cnt_HCCTISEnbl_Delay = 2U;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_CabCoolPwrNeed_D = 0.0F;/* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_CabCoolPwrNeed_NFdial =
    0.0F;                              /* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_CabCool_Pwr_dflt_D = 0.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_DeIcingPower = 2000.0F;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_ErrBasedHeatPwr_NFdial =
    0.0F;                              /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_ErrorBasedPwr_D = 0.0F;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_HeatPmpPwrNeed_D = 0.0F;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_HeatPmpPwrNeed_NFdial =
    0.0F;                              /* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_HeatPmpPwr_dflt_D = 0.0F;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_RearCabPwrNeed_Min = 0.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_RearHeaterPwrReq_D = 0.0F;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_P_RearHeaterPwrReq_NFdial =
    0.0F;                              /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_CabHtReq_AirHtrPwrThLSP
    = 10.0F;                           /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_CabHtReq_AirHtrPwrThRSP
    = 20.0F;                           /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_FrtBlwrCmd_D = 0.0F;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_FrtBlwrCmd_Incrs =
    40.0F;                             /* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_FrtBlwrCmd_Min = 5.0F;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_FrtBlwrRamp_Dwn = 0.0F;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT)
    KeCTRR_Pct_RearCabHtReq_AirHtrPwrThLSP = 10.0F;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT)
    KeCTRR_Pct_RearCabHtReq_AirHtrPwrThRSP = 20.0F;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_RrBlwrCmd_D = 0.0F;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_RrBlwrCmd_Incrs = 40.0F;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_RrBlwrCmd_Min = 5.0F;/* Referenced by:
                                                                      * '<S213>/Calib'
                                                                      * '<S99>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_Pct_RrtBlwrRamp_Dwn = 0.0F;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_BTISBTIS2Max_D = 0.0F;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_BattClntMinTgt_D = 0.0F;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_CabHeatReq_MildAmb =
    15.0F;                             /* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_ECT_D = 0.0F;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_FtEvapTmp_D = 0.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_FtEvapTmp_Tgt_D = 0.0F;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_HCCTISTgtArb_D = 0.0F;/* Referenced by: '<S13>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_HCCTISTgtArb_NFdial =
    0.0F;                              /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_HCCTIS_InitConst = 84.0F;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_HVC_HtrClntI_Temp_D =
    0.0F;                              /* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_HtrCorTmp_InTgt_D = 0.0F;/* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_OV_EPD_AmbTemp = -10.0F;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_OV_EPD_OvrdHCCTISTrgt =
    72.0F;                             /* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_RA_HCCTISTrgtMax = 65.0F;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_T_RA_HCCTISTrgtMin = 0.0F;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AC_CompReq_D = 0;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AC_CompReq_SD = 0;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AHPEnbReqApp_ECH = 1;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AHPEnblReqApp_AirPTC = 1;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AHP_Enb = 1;/* Referenced by:
                                                                    * '<S70>/Calib'
                                                                    * '<S123>/Calib'
                                                                    */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AmbBlwrCab_HeatAlwdEnb =
    1;                                 /* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AmbBlwrLatch_RST_App = 1;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AmbBlwr_CabRizEdg = 1;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AmbBlwr_HCCT_ErDis = 0;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AmbientChillCond_D = 0;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AmbientChillCond_Nf = 0;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_AmbientChillCond_SD = 0;/* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_BTISBTIS2Max_SD = 0;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_BattAllowed_D = 0;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_BattAllowed_SD = 0;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_BattClntMinTgt_SD = 0;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_BattHeatReq_D = 0;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_BattHeatReq_SD = 0;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabAllowed_D = 0;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabAllowed_SD = 0;/* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabCmfrtAchvd_TimrDsbl =
    1;                                 /* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabCoolPwrNeed_SD = 0;/* Referenced by: '<S16>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabCoolPwr_Slct = 0;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabCool_Pwr_dflt_SD = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabHeatThermalMode_SD = 0;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabPriorityHigh_D = 0;/* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabPriorityHigh_NFdial =
    0;                                 /* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabPriorityHigh_SD = 0;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabReqNotAllow_D = 0;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_CabReqNotAllow_SD = 0;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_DeiceActv_D = 0;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_DeiceActv_SD = 0;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_ECHInlet_HCCTISTgt_Err_SD
    = 0;                               /* Referenced by: '<S19>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_ECT_SD = 0;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_DeIcingPwr = 1;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_ECHPerf_Flt_RA = 1;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_ECH_LOC_Flt_RA = 1;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_HTAPPerf_Flt_RA = 1;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_HTAP_LOC_Flt_RA = 1;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_HTLBVStck_Flt_RA = 1;/* Referenced by: '<S193>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_SnsrCktHi = 1;/* Referenced by: '<S53>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_SnsrCktLo = 1;/* Referenced by: '<S54>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Enbl_SnsrPerf = 1;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_ErrorBasedPwr_SD = 0;/* Referenced by: '<S20>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_FrtAmbBlwr_CabEnb = 1;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_FrtBlwrCmd_SD = 0;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_FrtBlwrMin_FlowEnb = 1;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_FrtBlwrRamp_DwnSelTevap =
    1;                                 /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_FtEvapTmp_SD = 0;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_FtEvapTmp_Tgt_SD = 0;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HCCTISTgtArb_SD = 0;/* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HTAPPerf_FltDtct_D = 0;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HTAPPerf_FltDtct_SD = 0;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HTL_Valve_Stuck_State_SD =
    1;                                 /* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HVAC_HeatReq_D = 0;/* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HVAC_HeatReq_NFdial = 0;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HVAC_HeatReq_SD = 0;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HVAC_TrueHeatReq_NFdial =
    0;                                 /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HVC_HtrClntIn_Temp_SD = 0;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HardCabHeat_ReqDial = 0;/* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HardCabHeat_ReqSlct = 1;/* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HardCabHeat_Req_D = 0;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HardCabHeat_Req_NFdial =
    0;                                 /* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HardCabHeat_Req_SD = 0;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HardCab_HCCT_Er = 0;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HeatEnblReqApp_AirPTC = 1;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HeatPmpPwrNeed_SD = 0;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HeatPmpPwr_dflt_SD = 0;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Heat_AHP_Enb = 1;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HrshCabReq_AccOn = 1;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HrshCabReq_CrankOn = 1;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HrshCabReq_KeyOffEnb = 1;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HrshCabReq_RunOn = 1;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HtrCorTmpInTgtSel = 0;/* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_HtrCorTmp_InTgt_SD = 0;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_MinFlowCabHeatReq_D = 0;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_MinFlowCabHeatReq_NF = 0;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_MinFlowCabHeatReq_SD = 0;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_OV_EPD_DsblAmbTemp = 0;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_OV_Enbl_AmbTmpHeatRq = 0;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RS_N_Or_NrmlPerWp_D = 0;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RS_N_Or_NrmlPerWp_SD = 0;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RearHeaterPwrReq_SD = 0;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RearHeaterReq_D = 0;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RearHeaterReq_NFdial = 0;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RearHeaterReq_SD = 0;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RrAmbBlwr_CabEnb = 1;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RrBlwrCmd_SD = 0;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_RrBlwrMin_FlowEnb = 1;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_SSDR_KeySts_SD = 0;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_TrueCabReq_D = 0;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_TrueCabReq_SD = 0;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(boolean, CTRR_VAR_INIT)
    KeCTRR_b_TurnOffEng_CabComfAchvd_NFdial = 0;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(boolean, CTRR_VAR_INIT) KeCTRR_b_Use_ECH_In_Temp = 1;/* Referenced by:
                                                                      * '<S174>/Calib'
                                                                      * '<S175>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_AmbBlwr_HCCT_Er = 3.0F;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_CabHeatReq_TempHysHigh =
    2.0F;                              /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_CabHeatReq_TempHysLow =
    2.0F;                              /* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_CabHtgPriority_MaxTmpErr
    = 5.0F;                            /* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_ECHInlet_HCCTISTgt_Err_D
    = 0.0F;                            /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HCCTISErr_HeatDsbl =
    -9.0F;                             /* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HCCTISErr_HeatDsbl_HP =
    -9.0F;                             /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HCCTISErr_HeatEnbl =
    -5.0F;                             /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HCCTISErr_HeatEnbl_HP =
    -5.0F;                             /* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HCCT_DltaStdyStat_Er =
    4.0F;                              /* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HarshReq_HtrCorTemp_Er =
    4.0F;                              /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HeatPumpErrDefault =
    -40.0F;                            /* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HeatPumpErr_NF = 0.0F;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_4

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HtrCorTmp_Err_NFdial =
    0.0F;                              /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_HtrCorTmp_TgtIncrs =
    10.0F;                             /* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_dT_StopCabinCond_TempThres =
    -5.0F;                             /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(TeTHMR_e_CabHeatThrmlMode, CTRR_VAR_INIT)
    KeCTRR_e_CabHeatThermalMode_D = CeTHMR_e_NoActvHeat;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(TeRCVR_e_Valve_Stuck_Status, CTRR_VAR_INIT)
    KeCTRR_e_HTL_Valve_Stuck_State_D = CeRCVR_e_Faulty_Open;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(TeSSDR_e_KeySts, CTRR_VAR_INIT) KeCTRR_e_SSDR_KeySts_D =
    CeSSDR_e_KeyOff;                   /* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_t_AmbBlwrCab_HeatAlwdTim =
    400.0F;                            /* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_t_DelayEngTurn_Off_Blwr =
    5.0F;                              /* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_t_EngReq_HarshCabRq = 5.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KeCTRR_t_HrshCabRq_KeyMaskTim =
    5.0F;                              /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_K_CabHeatTransient[36] =
{
    0.0007F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F,
    -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F,
    -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F,
    -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F, -0.04F
} ;                                    /* Referenced by: '<S199>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_P_CabCoolPwrLookup[11] =
{
    0.0F, 520.0F, 1040.0F, 1560.0F, 2080.0F, 2600.0F, 3120.0F, 3640.0F, 4160.0F,
    4680.0F, 5200.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_P_CabinPwrNeed_LookUp[8] =
{
    0.0F, 1500.0F, 3000.0F, 3500.0F, 4500.0F, 6000.0F, 7500.0F, 9000.0F
} ;                                    /* Referenced by: '<S161>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_P_HeatPmpPwr[6] =
{
    7500.0F, 7500.0F, 7500.0F, 7500.0F, 7500.0F, 7500.0F
} ;                                    /* Referenced by: '<S168>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_P_Min_HeatPmpPwr[6] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S169>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_P_RearCabAirHtrPwrTgt[9] =
{
    0.0F, 510.0F, 1030.0F, 1560.0F, 2590.0F, 3630.0F, 4670.0F, 5740.0F, 6600.0F
} ;                                    /* Referenced by: '<S216>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_P_RearHeaterMaxPwr[9] =
{
    7000.0F, 7000.0F, 7000.0F, 7000.0F, 7000.0F, 7000.0F, 7000.0F, 7000.0F,
    7000.0F
} ;                                    /* Referenced by: '<S217>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_n_FtBlwrCab_CmfrtAchv[36] =
{
    0.0F, 0.0F, 0.0F, 10.0F, 10.0F, 10.0F, 0.0F, 0.0F, 0.0F, 10.0F, 10.0F, 10.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_n_FtBlwrCab_HeatngEngAllwd
    [36] =
{
    0.0F, 0.0F, 0.0F, 10.0F, 10.0F, 10.0F, 0.0F, 0.0F, 0.0F, 10.0F, 10.0F, 10.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KtCTRR_n_RrBlwrCab_HeatngEngAllwd
    [36] =
{
    0.0F, 0.0F, 0.0F, 10.0F, 10.0F, 10.0F, 0.0F, 0.0F, 0.0F, 10.0F, 10.0F, 10.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S94>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_K_CabHeatTransient[6] =
{
    5.0F, 10.0F, 15.0F, 25.0F, 29.0F, 30.0F
} ;                                    /* Referenced by: '<S199>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_P_CabCoolPwrLookup[11] =
{
    0.0001F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_P_CabinPwrNeed_LookUp[8] =
{
    0.001F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F, 140.0F
} ;                                    /* Referenced by: '<S161>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_P_HeatPmpPwr[6] =
{
    0.0F, 5.0F, 8.0F, 10.0F, 12.0F, 15.0F
} ;                                    /* Referenced by: '<S168>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_P_Min_HeatPmpPwr[6] =
{
    0.0F, 5.0F, 8.0F, 10.0F, 12.0F, 15.0F
} ;                                    /* Referenced by: '<S169>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_P_RearCabAirHtrPwrTgt[9] =
{
    0.01F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 110.0F, 127.0F
} ;                                    /* Referenced by: '<S216>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_P_RearHeaterMaxPwr[9] =
{
    -11.0F, 0.0F, 10.0F, 20.0F, 40.0F, 50.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S217>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_n_FtBlwrCab_CmfrtAchv[6] =
{
    -40.0F, -20.0F, 0.001F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_n_FtBlwrCab_HeatngEngAllwd
    [6] =
{
    -40.0F, -20.0F, 0.001F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KxCTRR_n_RrBlwrCab_HeatngEngAllwd
    [6] =
{
    -40.0F, -20.0F, 0.001F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S94>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KyCTRR_K_CabHeatTransient[6] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S199>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KyCTRR_n_FtBlwrCab_CmfrtAchv[6] =
{
    0.001F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KyCTRR_n_FtBlwrCab_HeatngEngAllwd
    [6] =
{
    0.001F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static volatile CONST(float32, CTRR_VAR_INIT) KyCTRR_n_RrBlwrCab_HeatngEngAllwd
    [6] =
{
    0.001F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S94>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CTRR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_K_HCCTISInitGain;/* '<S199>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_P_CabCoolPwrNeed_B4D;/* '<S47>/Switch' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_P_ErrorBasedPwr;/* '<S161>/Vector' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_P_HeatPmpPwrNeed_B4D;/* '<S170>/Switch' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_P_RearHeaterPwrNeed;
                                 /* '<S4>/SigConvForSigProp_VariantSource1_0' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_Pct_FrtBlwrCmd_AD;/* '<S219>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_Pct_RrBlwrCmd_AD;/* '<S219>/Switch2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_BTISBTIS2_Max_AD;/* '<S220>/Switch7' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_BattClntMinTgt_AD;/* '<S220>/Switch8' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_FtEvapTmp_AD;/* '<S219>/Switch4' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_FtEvapTmp_Tgt_AD;/* '<S219>/Switch5' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_HCCTIS_Tgt_DymPrf;/* '<S39>/Merge2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_HCCTIS_Tgt_Ovrd;/* '<S39>/Switch3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_HVC_HtrClntIn_Temp_AD;/* '<S222>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_T_HtrCorTmp_InTgt_AD;/* '<S219>/Switch' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AC_CompReq_AD;/* '<S219>/Switch3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AmbBlwrCab_HeatAlwd;/* '<S88>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AmbBlwrCab_HeatAlwdRaw;/* '<S61>/Logical2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AmbBlwrCab_HeatAlwdRaw0;/* '<S66>/Logical4' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Frt;/* '<S61>/Switch3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Rr;/* '<S61>/Switch4' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AmbBlwrCab_Latch;/* '<S87>/OR1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_AmbTmpCab_HeatReq;/* '<S95>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_BattAllowed_AD;/* '<S220>/Switch10' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_BattHeatReq_AD;/* '<S220>/Switch9' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_BlwrCabHeat_Req;/* '<S63>/Logical1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_CabAllowed_AD;/* '<S222>/Switch11' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_CabPriorityHigh_B4D;/* '<S156>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_CabReq_NotAllow_AD;/* '<S222>/Switch12' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_DeiceActv_AD;/* '<S222>/Switch5' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_ECH_HTAP_RA_Faults;/* '<S39>/LogicalOperator7' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_FrtBlwrDecreasing;/* '<S64>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HCCTIS_Enbl;/* '<S177>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HTAPPerf_FltDtct_AD;/* '<S222>/Switch3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HVAC_HeatReq_B4;/* '<S56>/Switch3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HardCabHeat_Enb;/* '<S76>/Logical1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HardCabHeat_Latch;/* '<S117>/OR1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HardCabHeat_Req0;/* '<S118>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HardCabHeat_Req_B4D;/* '<S56>/Switch4' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HardCab_FrtBlwr;/* '<S76>/Comparison1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HardCab_HCCT_Tgt;/* '<S76>/Comparison3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HardCab_RrBlwr;/* '<S76>/Comparison2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HrshCabReq_AccOn;/* '<S127>/Logical4' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HrshCabReq_CrankOn;/* '<S127>/Logical2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HrshCabReq_KeyOff;/* '<S127>/Logical1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HrshCabReq_KeyStsChng;/* '<S127>/Logical6' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HrshCabReq_RunOn;/* '<S127>/Logical3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HrshCabRq_KeyChngOn;/* '<S144>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_HrshCabRq_KeyLtchd;/* '<S143>/OR1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_MinFlowCab_HeatReq;/* '<S75>/Logical1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_OvrdHCCTISTgt_Amb;/* '<S39>/LogicalOperator3' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_RS_N_Or_NrmlPerWp_AD;/* '<S221>/Switch' */

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_RearHeaterReq_BD;/* '<S208>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_RrBlwrDecreasing;/* '<S64>/Comparison1' */

#endif

#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_SnsrCktHi;/* '<S37>/LogicalOperator2' */

#endif

#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_SnsrCktLo;/* '<S37>/LogicalOperator1' */

#endif

#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_SnsrFlts;/* '<S37>/LogicalOperator3' */

#endif

#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_SnsrPerf;/* '<S37>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_TrueCab_HeatReq_B4D;/* '<S77>/LogicalOperator1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_b_isHrshCabRq_Maskd;/* '<S135>/Switch2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_dT_EvapTempError;/* '<S35>/Sum5' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_dT_HCCTISInitGain_Err;/* '<S197>/MathFunction' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_dT_HCCTISInit_Err;/* '<S197>/Add1' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_dT_HCCTIS_Calc;/* '<S197>/Add2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(boolean, CTRR_VAR_INIT) VeCTRR_dT_HCCT_StdyStatEr;/* '<S64>/Comparison2' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(float32, CTRR_VAR_INIT) VeCTRR_dT_HeatPumpErr_BD;/* '<S58>/Merge' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(TeTHMR_e_CabHeatThrmlMode, CTRR_VAR_INIT)
    VeCTRR_e_CabHeatThermalMode_AD;    /* '<S222>/Switch6' */

#endif

#if Rte_SysCon_Variant_CTRR_3

static VAR(TeSSDR_e_KeySts, CTRR_VAR_INIT) VeCTRR_e_SSDR_KeySts_AD;/* '<S222>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CTRR
#include "MemMap.h"

CONST(ConstP_CTRR_ac_T, CTRR_VAR_INIT) CTRR_ac_ConstP =
{

#if Rte_SysCon_Variant_CTRR_3

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S199>/Vector'
     *   '<S93>/Vector'
     *   '<S94>/Vector'
     *   '<S111>/Vector'
     */
    {
        5U, 5U
    },

#endif

#ifndef CONSTP_CTRR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

VAR(B_CTRR_ac_T, CTRR_VAR_INIT) CTRR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

VAR(DW_CTRR_ac_T, CTRR_VAR_INIT) CTRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTRR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CTRR_3

FUNC(void, CTRR_CODE) CTRR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_CTRR_3

    float32 rtb_Switch5;

#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 rtb_VariantMerge_For_Variant_So;

#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 rtb_Switch2;

#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean rtb_Comparison4;

#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean rtb_Switch1_mq;

#endif

#if Rte_SysCon_Variant_CTRR_3

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_CTRR_3

    sint8 rtAction;

#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean rtb_UnitDelay_pl;

#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean rtb_AND_hu;

#endif

#if Rte_SysCon_Variant_CTRR_3

    boolean rtb_OR1_c;

#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 rtb_Merge1;

#endif

#if Rte_SysCon_Variant_CTRR_3

    uint16 rtb_Switch1_jx;

#endif

#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

    boolean rtb_Switch1_a;

#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 rtb_Vector_nv;

#endif

#if Rte_SysCon_Variant_CTRR_3

    TeRCVR_e_Valve_Stuck_Status Switch4_l;

#endif

#if Rte_SysCon_Variant_CTRR_3

    float32 rtb_Comparison4_tmp;

#endif

#if Rte_SysCon_Variant_CTRR_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTAIR_T_HtrCoreTmp_Tgt'
     */
    (void)Rte_Read_VeTAIR_T_HtrCoreTmp_Tgt_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_FcnC);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_FrtBlwrCmd'
     */
    (void)Rte_Read_VeTAIR_Pct_FrtBlwrCmd_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_RrBlwrCmd'
     */
    (void)Rte_Read_VeTAIR_Pct_RrBlwrCmd_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_h);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTAIR_b_ACCompReq'
     */
    (void)Rte_Read_VeTAIR_b_ACCompReq_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_ne);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTAIR_T_FtEvapTmp'
     */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTAIR_T_FtEvapTmp_Tgt'
     */
    (void)Rte_Read_VeTAIR_T_FtEvapTmp_Tgt_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTHMR_b_RS_N_Or_NrmlPerWp'
     */
    (void)Rte_Read_VeTHMR_b_RS_N_Or_NrmlPerWp_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_n0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeSSDR_e_KeySts'
     */
    (void)Rte_Read_VeSSDR_e_KeySts_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_hd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeCPDR_b_HTAP_FunPer_FltDtct'
     */
    (void)Rte_Read_VeCPDR_b_HTAP_FunPer_FltDtct_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTHMR_b_DeiceActv'
     */
    (void)Rte_Read_VeTHMR_b_DeiceActv_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_fq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTHMR_e_CabHeatThermalMode'
     */
    (void)Rte_Read_VeTHMR_e_CabHeatThermalMode_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_a3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeBTRR_T_BTISBTIS2_Max'
     */
    (void)Rte_Read_VeBTRR_T_BTISBTIS2_Max_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_ff);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTHMR_T_BattClntMinTgt'
     */
    (void)Rte_Read_VeTHMR_T_BattClntMinTgt_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeBTRR_b_BattHeatReq'
     */
    (void)Rte_Read_VeBTRR_b_BattHeatReq_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTHMR_b_BattAllowed'
     */
    (void)Rte_Read_VeTHMR_b_BattAllowed_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_hf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTHMR_b_CabAllowed'
     */
    (void)Rte_Read_VeTHMR_b_CabAllowed_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_la);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTHMR_b_CabReq_NotAllow'
     */
    (void)Rte_Read_VeTHMR_b_CabReq_NotAllow_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_bc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */
#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HtrCorClnt_TmpIn'
     */
    (void)Rte_Read_VeTRIR_T_HtrCorClnt_TmpIn_Value
        (&CTRR_ac_B.VM_Conditional_Signal_TmpVM_Fcn);

#elif !(!Rte_SysCon_Variant_CTRR_5) && Rte_SysCon_Variant_CTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */
    CTRR_ac_B.VM_Conditional_Signal_TmpVM_Fcn = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTRIR_Pct_AirHtrPwrTgt'
     */
    (void)Rte_Read_VeTRIR_Pct_AirHtrPwrTgt_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_k5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */
#if Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTRIR_b_AirHtrPwrTgt_FA'
     */
    (void)Rte_Read_VeTRIR_b_AirHtrPwrTgt_FA_Value
        (&CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_f);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeHTIR_T_Htr2CoreTemp'
     */
    (void)Rte_Read_VeHTIR_T_Htr2CoreTemp_Value
        (&CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_h);

#elif !Rte_SysCon_Variant_CTRR_1 && Rte_SysCon_Variant_CTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */
    CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_f = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */
    CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_h = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */
#if !Rte_SysCon_Variant_CTRR_5 && Rte_SysCon_Variant_CTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntOut_Temp'
     */
    (void)Rte_Read_VeHTIR_T_HVC_HtrClntOut_Temp_Value
        (&CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_k);

#elif !(!Rte_SysCon_Variant_CTRR_5) && Rte_SysCon_Variant_CTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' */
    CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_k = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VePDTR_b_OV_EPD_CabCond_Req'
     */
    (void)Rte_Read_VePDTR_b_OV_EPD_CabCond_Req_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_n5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeHCDR_b_HVC_Heater_FltDtct'
     */
    (void)Rte_Read_VeHCDR_b_HVC_Heater_FltDtct_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_m5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktHi_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktLo_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrPerf_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolHtrA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolHtrA_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_fj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolPmpA_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_lp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeTRIR_b_AHP_EnblReq'
     */
    (void)Rte_Read_VeTRIR_b_AHP_EnblReq_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_hl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp'
     */
    (void)Rte_Read_VeHTIR_T_HVC_HtrClntIn_Temp_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_F_m1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_Valve_Stuck_State'
     */
    (void)Rte_Read_VeRCVR_e_HTL_Valve_Stuck_State_Value
        (&CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_i);

    /* Outputs for Function Call SubSystem: '<Root>/CTRR_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrCktHi' */
    CTRR_ac_DW.StatusByte_CT3_SnsrCktHi =
        CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_n;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrCktLo' */
    CTRR_ac_DW.StatusByte_CT3_SnsrCktLo =
        CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_e;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrPerf' */
    CTRR_ac_DW.StatusByte_CT3_SnsrPerf =
        CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_a;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolHtrA' */
    CTRR_ac_DW.StatusByte_LostCommCoolHtrA =
        CTRR_ac_B.TmpSignalConversionAtTmpVM_F_fj;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolPmpA' */
    CTRR_ac_DW.StatusByte_LostCommCoolPmpA =
        CTRR_ac_B.TmpSignalConversionAtTmpVM_F_lp;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overrides'
     */
    /* Switch: '<S219>/Switch' incorporates:
     *  Constant: '<S233>/Calib'
     */
    if (KeCTRR_b_HtrCorTmp_InTgt_SD)
    {
        /* Switch: '<S219>/Switch' incorporates:
         *  Constant: '<S227>/Calib'
         */
        VeCTRR_T_HtrCorTmp_InTgt_AD = KeCTRR_T_HtrCorTmp_InTgt_D;
    }
    else
    {
        /* Switch: '<S219>/Switch' */
        VeCTRR_T_HtrCorTmp_InTgt_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_FcnC;
    }

    /* End of Switch: '<S219>/Switch' */

    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S230>/Calib'
     */
    if (KeCTRR_b_FrtBlwrCmd_SD)
    {
        /* Switch: '<S219>/Switch1' incorporates:
         *  Constant: '<S223>/Calib'
         */
        VeCTRR_Pct_FrtBlwrCmd_AD = KeCTRR_Pct_FrtBlwrCmd_D;
    }
    else
    {
        /* Switch: '<S219>/Switch1' */
        VeCTRR_Pct_FrtBlwrCmd_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_o;
    }

    /* End of Switch: '<S219>/Switch1' */

    /* Switch: '<S219>/Switch2' incorporates:
     *  Constant: '<S234>/Calib'
     */
    if (KeCTRR_b_RrBlwrCmd_SD)
    {
        /* Switch: '<S219>/Switch2' incorporates:
         *  Constant: '<S224>/Calib'
         */
        VeCTRR_Pct_RrBlwrCmd_AD = KeCTRR_Pct_RrBlwrCmd_D;
    }
    else
    {
        /* Switch: '<S219>/Switch2' */
        VeCTRR_Pct_RrBlwrCmd_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_h;
    }

    /* End of Switch: '<S219>/Switch2' */

    /* Switch: '<S219>/Switch3' incorporates:
     *  Constant: '<S229>/Calib'
     */
    if (KeCTRR_b_AC_CompReq_SD)
    {
        /* Switch: '<S219>/Switch3' incorporates:
         *  Constant: '<S228>/Calib'
         */
        VeCTRR_b_AC_CompReq_AD = KeCTRR_b_AC_CompReq_D;
    }
    else
    {
        /* Switch: '<S219>/Switch3' */
        VeCTRR_b_AC_CompReq_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_F_ne;
    }

    /* End of Switch: '<S219>/Switch3' */

    /* Switch: '<S219>/Switch4' incorporates:
     *  Constant: '<S231>/Calib'
     */
    if (KeCTRR_b_FtEvapTmp_SD)
    {
        /* Switch: '<S219>/Switch4' incorporates:
         *  Constant: '<S225>/Calib'
         */
        VeCTRR_T_FtEvapTmp_AD = KeCTRR_T_FtEvapTmp_D;
    }
    else
    {
        /* Switch: '<S219>/Switch4' */
        VeCTRR_T_FtEvapTmp_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_j;
    }

    /* End of Switch: '<S219>/Switch4' */

    /* Switch: '<S219>/Switch5' incorporates:
     *  Constant: '<S232>/Calib'
     */
    if (KeCTRR_b_FtEvapTmp_Tgt_SD)
    {
        /* Switch: '<S219>/Switch5' incorporates:
         *  Constant: '<S226>/Calib'
         */
        VeCTRR_T_FtEvapTmp_Tgt_AD = KeCTRR_T_FtEvapTmp_Tgt_D;
    }
    else
    {
        /* Switch: '<S219>/Switch5' */
        VeCTRR_T_FtEvapTmp_Tgt_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_m;
    }

    /* End of Switch: '<S219>/Switch5' */

    /* Switch: '<S221>/Switch' incorporates:
     *  Constant: '<S244>/Calib'
     */
    if (KeCTRR_b_RS_N_Or_NrmlPerWp_SD)
    {
        /* Switch: '<S221>/Switch' incorporates:
         *  Constant: '<S243>/Calib'
         */
        VeCTRR_b_RS_N_Or_NrmlPerWp_AD = KeCTRR_b_RS_N_Or_NrmlPerWp_D;
    }
    else
    {
        /* Switch: '<S221>/Switch' */
        VeCTRR_b_RS_N_Or_NrmlPerWp_AD =
            CTRR_ac_B.TmpSignalConversionAtTmpVM_F_n0;
    }

    /* End of Switch: '<S221>/Switch' */

    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S259>/Calib'
     */
    if (KeCTRR_b_SSDR_KeySts_SD)
    {
        /* Switch: '<S222>/Switch' incorporates:
         *  Constant: '<S262>/Calib'
         */
        VeCTRR_e_SSDR_KeySts_AD = KeCTRR_e_SSDR_KeySts_D;
    }
    else
    {
        /* Switch: '<S222>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
         */
        VeCTRR_e_SSDR_KeySts_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_F_hd;
    }

    /* End of Switch: '<S222>/Switch' */

    /* Switch: '<S222>/Switch3' incorporates:
     *  Constant: '<S256>/Calib'
     */
    if (KeCTRR_b_HTAPPerf_FltDtct_SD)
    {
        /* Switch: '<S222>/Switch3' incorporates:
         *  Constant: '<S255>/Calib'
         */
        VeCTRR_b_HTAPPerf_FltDtct_AD = KeCTRR_b_HTAPPerf_FltDtct_D;
    }
    else
    {
        /* Switch: '<S222>/Switch3' */
        VeCTRR_b_HTAPPerf_FltDtct_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_p;
    }

    /* End of Switch: '<S222>/Switch3' */

    /* Switch: '<S222>/Switch5' incorporates:
     *  Constant: '<S253>/Calib'
     */
    if (KeCTRR_b_DeiceActv_SD)
    {
        /* Switch: '<S222>/Switch5' incorporates:
         *  Constant: '<S252>/Calib'
         */
        VeCTRR_b_DeiceActv_AD = KeCTRR_b_DeiceActv_D;
    }
    else
    {
        /* Switch: '<S222>/Switch5' */
        VeCTRR_b_DeiceActv_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_F_fq;
    }

    /* End of Switch: '<S222>/Switch5' */

    /* Switch: '<S222>/Switch6' incorporates:
     *  Constant: '<S249>/Calib'
     */
    if (KeCTRR_b_CabHeatThermalMode_SD)
    {
        /* Switch: '<S222>/Switch6' incorporates:
         *  Constant: '<S260>/Calib'
         */
        VeCTRR_e_CabHeatThermalMode_AD = KeCTRR_e_CabHeatThermalMode_D;
    }
    else
    {
        /* Switch: '<S222>/Switch6' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
         */
        VeCTRR_e_CabHeatThermalMode_AD =
            CTRR_ac_B.TmpSignalConversionAtTmpVM_F_a3;
    }

    /* End of Switch: '<S222>/Switch6' */

    /* Switch: '<S222>/Switch11' incorporates:
     *  Constant: '<S248>/Calib'
     */
    if (KeCTRR_b_CabAllowed_SD)
    {
        /* Switch: '<S222>/Switch11' incorporates:
         *  Constant: '<S247>/Calib'
         */
        VeCTRR_b_CabAllowed_AD = KeCTRR_b_CabAllowed_D;
    }
    else
    {
        /* Switch: '<S222>/Switch11' */
        VeCTRR_b_CabAllowed_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_F_la;
    }

    /* End of Switch: '<S222>/Switch11' */

    /* Switch: '<S222>/Switch12' incorporates:
     *  Constant: '<S251>/Calib'
     */
    if (KeCTRR_b_CabReqNotAllow_SD)
    {
        /* Switch: '<S222>/Switch12' incorporates:
         *  Constant: '<S250>/Calib'
         */
        VeCTRR_b_CabReq_NotAllow_AD = KeCTRR_b_CabReqNotAllow_D;
    }
    else
    {
        /* Switch: '<S222>/Switch12' */
        VeCTRR_b_CabReq_NotAllow_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_F_bc;
    }

    /* End of Switch: '<S222>/Switch12' */

    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S258>/Calib'
     */
    if (KeCTRR_b_HVC_HtrClntIn_Temp_SD)
    {
        /* Switch: '<S222>/Switch1' incorporates:
         *  Constant: '<S246>/Calib'
         */
        VeCTRR_T_HVC_HtrClntIn_Temp_AD = KeCTRR_T_HVC_HtrClntI_Temp_D;
    }
    else
    {
        /* Switch: '<S222>/Switch1' */
        VeCTRR_T_HVC_HtrClntIn_Temp_AD =
            CTRR_ac_B.TmpSignalConversionAtTmpVM_F_m1;
    }

    /* End of Switch: '<S222>/Switch1' */

    /* Switch: '<S222>/Switch4' incorporates:
     *  Constant: '<S257>/Calib'
     */
    if (KeCTRR_b_HTL_Valve_Stuck_State_SD)
    {
        /* Switch: '<S222>/Switch4' incorporates:
         *  Constant: '<S261>/Calib'
         */
        Switch4_l = KeCTRR_e_HTL_Valve_Stuck_State_D;
    }
    else
    {
        /* Switch: '<S222>/Switch4' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
         */
        Switch4_l = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_i;
    }

    /* End of Switch: '<S222>/Switch4' */

    /* Switch: '<S220>/Switch7' incorporates:
     *  Constant: '<S237>/Calib'
     */
    if (KeCTRR_b_BTISBTIS2Max_SD)
    {
        /* Switch: '<S220>/Switch7' incorporates:
         *  Constant: '<S235>/Calib'
         */
        VeCTRR_T_BTISBTIS2_Max_AD = KeCTRR_T_BTISBTIS2Max_D;
    }
    else
    {
        /* Switch: '<S220>/Switch7' */
        VeCTRR_T_BTISBTIS2_Max_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_F_ff;
    }

    /* End of Switch: '<S220>/Switch7' */

    /* Switch: '<S220>/Switch8' incorporates:
     *  Constant: '<S240>/Calib'
     */
    if (KeCTRR_b_BattClntMinTgt_SD)
    {
        /* Switch: '<S220>/Switch8' incorporates:
         *  Constant: '<S236>/Calib'
         */
        VeCTRR_T_BattClntMinTgt_AD = KeCTRR_T_BattClntMinTgt_D;
    }
    else
    {
        /* Switch: '<S220>/Switch8' */
        VeCTRR_T_BattClntMinTgt_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
    }

    /* End of Switch: '<S220>/Switch8' */

    /* Switch: '<S220>/Switch9' incorporates:
     *  Constant: '<S242>/Calib'
     */
    if (KeCTRR_b_BattHeatReq_SD)
    {
        /* Switch: '<S220>/Switch9' incorporates:
         *  Constant: '<S241>/Calib'
         */
        VeCTRR_b_BattHeatReq_AD = KeCTRR_b_BattHeatReq_D;
    }
    else
    {
        /* Switch: '<S220>/Switch9' */
        VeCTRR_b_BattHeatReq_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_b;
    }

    /* End of Switch: '<S220>/Switch9' */

    /* Switch: '<S220>/Switch10' incorporates:
     *  Constant: '<S239>/Calib'
     */
    if (KeCTRR_b_BattAllowed_SD)
    {
        /* Switch: '<S220>/Switch10' incorporates:
         *  Constant: '<S238>/Calib'
         */
        VeCTRR_b_BattAllowed_AD = KeCTRR_b_BattAllowed_D;
    }
    else
    {
        /* Switch: '<S220>/Switch10' */
        VeCTRR_b_BattAllowed_AD = CTRR_ac_B.TmpSignalConversionAtTmpVM_F_hf;
    }

    /* End of Switch: '<S220>/Switch10' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Control_100ms'
     */
    /* Sum: '<S35>/Sum5' */
    VeCTRR_dT_EvapTempError = VeCTRR_T_FtEvapTmp_AD - VeCTRR_T_FtEvapTmp_Tgt_AD;

    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S44>/Calib'
     *  Constant: '<S45>/Calib'
     *  Switch: '<S41>/Switch1'
     *  Switch: '<S42>/Switch1'
     */
    if (KeCTRR_b_CabCool_Pwr_dflt_SD)
    {
        /* Switch: '<S158>/Switch5' incorporates:
         *  Constant: '<S43>/Calib'
         */
        rtb_Switch5 = KeCTRR_P_CabCool_Pwr_dflt_D;
    }
    else if (KeCTRR_b_CabCoolPwr_Slct)
    {
        /* Switch: '<S42>/Switch1' incorporates:
         *  Lookup_n-D: '<S46>/Vector'
         *  Sum: '<S35>/Sum5'
         *  Switch: '<S158>/Switch5'
         */
        rtb_Switch5 = look1_iflf_binlcapw(VeCTRR_dT_EvapTempError, ((const
            float32 *)&(KxCTRR_P_CabCoolPwrLookup[0])), ((const float32 *)
            &(KtCTRR_P_CabCoolPwrLookup[0])), 10U);
    }
    else if (VeCTRR_b_AC_CompReq_AD)
    {
        /* Switch: '<S41>/Switch1' incorporates:
         *  Lookup_n-D: '<S46>/Vector'
         *  Sum: '<S35>/Sum5'
         *  Switch: '<S158>/Switch5'
         *  Switch: '<S42>/Switch1'
         */
        rtb_Switch5 = look1_iflf_binlcapw(VeCTRR_dT_EvapTempError, ((const
            float32 *)&(KxCTRR_P_CabCoolPwrLookup[0])), ((const float32 *)
            &(KtCTRR_P_CabCoolPwrLookup[0])), 10U);
    }
    else
    {
        /* Switch: '<S158>/Switch5' incorporates:
         *  Constant: '<S35>/ConstantValue3'
         *  Switch: '<S41>/Switch1'
         *  Switch: '<S42>/Switch1'
         */
        rtb_Switch5 = 0.0F;
    }

    /* End of Switch: '<S35>/Switch' */

    /* Switch: '<S47>/Switch' incorporates:
     *  Constant: '<S47>/ConstantValue1'
     *  RelationalOperator: '<S47>/RelationalOperator'
     */
    if (rtb_Switch5 >= 0.0F)
    {
        /* Switch: '<S47>/Switch' */
        VeCTRR_P_CabCoolPwrNeed_B4D = rtb_Switch5;
    }
    else
    {
        /* Switch: '<S47>/Switch' incorporates:
         *  Constant: '<S47>/ConstantValue'
         */
        VeCTRR_P_CabCoolPwrNeed_B4D = 0.0F;
    }

    /* End of Switch: '<S47>/Switch' */

    /* S-Function (sfix_bitop): '<S49>/BitwiseOperator1' incorporates:
     *  Logic: '<S37>/LogicalOperator'
     *  Logic: '<S37>/LogicalOperator1'
     *  Logic: '<S37>/LogicalOperator2'
     *  Logic: '<S37>/LogicalOperator3'
     *  Logic: '<S49>/LogicalOperator'
     *  Logic: '<S50>/LogicalOperator'
     *  Logic: '<S51>/LogicalOperator'
     *  RelationalOperator: '<S49>/RelationalOperator1'
     *  RelationalOperator: '<S49>/RelationalOperator2'
     *  RelationalOperator: '<S50>/RelationalOperator1'
     *  RelationalOperator: '<S50>/RelationalOperator2'
     *  RelationalOperator: '<S51>/RelationalOperator1'
     *  RelationalOperator: '<S51>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S49>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S50>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S50>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S51>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S51>/BitwiseOperator2'
     *  Switch: '<S52>/Switch1'
     */
#if !Rte_SysCon_Variant_CTRR_5

    /* Logic: '<S37>/LogicalOperator' incorporates:
     *  Constant: '<S51>/Constant1'
     *  Constant: '<S51>/Constant2'
     *  Constant: '<S55>/Calib'
     *  DataStoreRead: '<S51>/StatusByte_CT3_SnsrPerf'
     */
    VeCTRR_b_SnsrPerf = ((((((uint32)CTRR_ac_DW.StatusByte_CT3_SnsrPerf) & 1U)
                           != 0U) && ((((uint32)
        CTRR_ac_DW.StatusByte_CT3_SnsrPerf) & 64U) == 0U)) &&
                         (KeCTRR_b_Enbl_SnsrPerf));

    /* Logic: '<S37>/LogicalOperator1' incorporates:
     *  Constant: '<S50>/Constant1'
     *  Constant: '<S50>/Constant2'
     *  Constant: '<S54>/Calib'
     *  DataStoreRead: '<S50>/StatusByte_CT3_SnsrCktLo'
     */
    VeCTRR_b_SnsrCktLo = ((((((uint32)CTRR_ac_DW.StatusByte_CT3_SnsrCktLo) & 1U)
                            != 0U) && ((((uint32)
        CTRR_ac_DW.StatusByte_CT3_SnsrCktLo) & 64U) == 0U)) &&
                          (KeCTRR_b_Enbl_SnsrCktLo));

    /* Logic: '<S37>/LogicalOperator2' incorporates:
     *  Constant: '<S49>/Constant1'
     *  Constant: '<S49>/Constant2'
     *  Constant: '<S53>/Calib'
     *  DataStoreRead: '<S49>/StatusByte_CT3_SnsrCktHi'
     */
    VeCTRR_b_SnsrCktHi = ((((((uint32)CTRR_ac_DW.StatusByte_CT3_SnsrCktHi) & 1U)
                            != 0U) && ((((uint32)
        CTRR_ac_DW.StatusByte_CT3_SnsrCktHi) & 64U) == 0U)) &&
                          (KeCTRR_b_Enbl_SnsrCktHi));

    /* Logic: '<S37>/LogicalOperator3' */
    VeCTRR_b_SnsrFlts = (((VeCTRR_b_SnsrPerf) || (VeCTRR_b_SnsrCktLo)) ||
                         (VeCTRR_b_SnsrCktHi));
    if (VeCTRR_b_SnsrFlts)
    {
        /* VariantMerge generated from: '<S4>/VariantSource2' */
        rtb_VariantMerge_For_Variant_So =
            CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_k;
    }
    else
    {
        /* VariantMerge generated from: '<S4>/VariantSource2' */
        rtb_VariantMerge_For_Variant_So =
            CTRR_ac_B.VM_Conditional_Signal_TmpVM_Fcn;
    }

#endif

    /* End of S-Function (sfix_bitop): '<S49>/BitwiseOperator1' */

    /* Outputs for Atomic SubSystem: '<S59>/Hysteresis1' */
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S80>/Calib'
     *  RelationalOperator: '<S78>/GreaterThan'
     */
    if (CTRR_ac_B.TmpSignalConversionAtTmpVM_F_k5 >
            KeCTRR_Pct_CabHtReq_AirHtrPwrThRSP)
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S78>/ConstantValue'
         */
        rtb_Switch1_mq = true;
    }
    else
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S79>/Calib'
         *  RelationalOperator: '<S78>/GreaterThan1'
         *  UnitDelay: '<S78>/UnitDelay'
         */
        rtb_Switch1_mq = ((CTRR_ac_B.TmpSignalConversionAtTmpVM_F_k5 >=
                           KeCTRR_Pct_CabHtReq_AirHtrPwrThLSP) &&
                          (CTRR_ac_DW.UnitDelay_DSTATE_d));
    }

    /* End of Switch: '<S78>/Switch1' */

    /* Update for UnitDelay: '<S78>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_mq;

    /* End of Outputs for SubSystem: '<S59>/Hysteresis1' */

    /* Logic: '<S39>/LogicalOperator3' incorporates:
     *  Constant: '<S185>/Calib'
     *  Constant: '<S195>/Calib'
     *  Logic: '<S39>/LogicalOperator2'
     *  RelationalOperator: '<S39>/RelationalOperator'
     */
    VeCTRR_b_OvrdHCCTISTgt_Amb = (((CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k <
        KeCTRR_T_OV_EPD_AmbTemp) || (KeCTRR_b_OV_EPD_DsblAmbTemp)) &&
        (CTRR_ac_B.TmpSignalConversionAtTmpVM_F_n5));

    /* Logic: '<S39>/LogicalOperator7' incorporates:
     *  Constant: '<S179>/Constant'
     *  Constant: '<S180>/Constant'
     *  Constant: '<S181>/Constant1'
     *  Constant: '<S181>/Constant2'
     *  Constant: '<S182>/Constant1'
     *  Constant: '<S182>/Constant2'
     *  Constant: '<S189>/Calib'
     *  Constant: '<S190>/Calib'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S192>/Calib'
     *  Constant: '<S193>/Calib'
     *  DataStoreRead: '<S181>/StatusByte_LostCommCoolHtrA'
     *  DataStoreRead: '<S182>/StatusByte_LostCommCoolPmpA'
     *  Logic: '<S181>/LogicalOperator'
     *  Logic: '<S182>/LogicalOperator'
     *  Logic: '<S39>/LogicalOperator1'
     *  Logic: '<S39>/LogicalOperator4'
     *  Logic: '<S39>/LogicalOperator5'
     *  Logic: '<S39>/LogicalOperator6'
     *  Logic: '<S39>/LogicalOperator8'
     *  Logic: '<S39>/LogicalOperator9'
     *  RelationalOperator: '<S181>/RelationalOperator1'
     *  RelationalOperator: '<S181>/RelationalOperator2'
     *  RelationalOperator: '<S182>/RelationalOperator1'
     *  RelationalOperator: '<S182>/RelationalOperator2'
     *  RelationalOperator: '<S39>/Relational Operator'
     *  RelationalOperator: '<S39>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S181>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S181>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S182>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S182>/BitwiseOperator2'
     */
    VeCTRR_b_ECH_HTAP_RA_Faults = ((((((VeCTRR_b_HTAPPerf_FltDtct_AD) &&
        (KeCTRR_b_Enbl_HTAPPerf_Flt_RA)) || ((((((uint32)
        CTRR_ac_DW.StatusByte_LostCommCoolPmpA) & 1U) != 0U) && ((((uint32)
        CTRR_ac_DW.StatusByte_LostCommCoolPmpA) & 64U) == 0U)) &&
        (KeCTRR_b_Enbl_HTAP_LOC_Flt_RA))) || ((((((uint32)
        CTRR_ac_DW.StatusByte_LostCommCoolHtrA) & 1U) != 0U) && ((((uint32)
        CTRR_ac_DW.StatusByte_LostCommCoolHtrA) & 64U) == 0U)) &&
        (KeCTRR_b_Enbl_ECH_LOC_Flt_RA))) ||
        ((CTRR_ac_B.TmpSignalConversionAtTmpVM_F_m5) &&
         (KeCTRR_b_Enbl_ECHPerf_Flt_RA))) || (((((uint32)Switch4_l) ==
        CeRCVR_e_Faulty_Open) || (((uint32)Switch4_l) == CeRCVR_e_SNA)) &&
        (KeCTRR_b_Enbl_HTLBVStck_Flt_RA)));

    /* Switch: '<S39>/Switch2' incorporates:
     *  Switch: '<S39>/Switch1'
     */
    if (VeCTRR_b_OvrdHCCTISTgt_Amb)
    {
        /* Switch: '<S39>/Switch2' incorporates:
         *  Constant: '<S186>/Calib'
         *  MinMax: '<S39>/MinMax1'
         */
        rtb_Switch2 = fmaxf(KeCTRR_T_OV_EPD_OvrdHCCTISTrgt,
                            VeCTRR_T_HtrCorTmp_InTgt_AD);
    }
    else if (VeCTRR_b_ECH_HTAP_RA_Faults)
    {
        /* Outputs for Atomic SubSystem: '<S39>/Limiter' */
        /* Switch: '<S196>/Switch1' incorporates:
         *  Constant: '<S187>/Calib'
         *  RelationalOperator: '<S196>/RelationalOperator'
         *  Switch: '<S39>/Switch1'
         */
        if (KeCTRR_T_RA_HCCTISTrgtMax < VeCTRR_T_HtrCorTmp_InTgt_AD)
        {
            /* Switch: '<S196>/Switch1' */
            rtb_Switch2 = KeCTRR_T_RA_HCCTISTrgtMax;
        }
        else
        {
            /* Switch: '<S196>/Switch1' */
            rtb_Switch2 = VeCTRR_T_HtrCorTmp_InTgt_AD;
        }

        /* End of Switch: '<S196>/Switch1' */

        /* Switch: '<S196>/Switch' incorporates:
         *  Constant: '<S188>/Calib'
         *  RelationalOperator: '<S196>/RelationalOperator1'
         *  Switch: '<S39>/Switch1'
         */
        if (rtb_Switch2 <= KeCTRR_T_RA_HCCTISTrgtMin)
        {
            /* Switch: '<S39>/Switch2' incorporates:
             *  Switch: '<S39>/Switch1'
             */
            rtb_Switch2 = KeCTRR_T_RA_HCCTISTrgtMin;
        }

        /* End of Switch: '<S196>/Switch' */
        /* End of Outputs for SubSystem: '<S39>/Limiter' */
    }
    else
    {
        /* Switch: '<S39>/Switch2' incorporates:
         *  Switch: '<S39>/Switch1'
         */
        rtb_Switch2 = VeCTRR_T_HtrCorTmp_InTgt_AD;
    }

    /* End of Switch: '<S39>/Switch2' */

    /* SignalConversion generated from: '<S4>/VariantSource2' */
#if Rte_SysCon_Variant_CTRR_5

    /* Outputs for Function Call SubSystem: '<S1>/Overrides' */
    /* Switch: '<S222>/Switch2' incorporates:
     *  Constant: '<S254>/Calib'
     */
    if (KeCTRR_b_ECT_SD)
    {
        /* VariantMerge generated from: '<S4>/VariantSource2' incorporates:
         *  Constant: '<S245>/Calib'
         */
        rtb_VariantMerge_For_Variant_So = KeCTRR_T_ECT_D;
    }
    else
    {
        /* VariantMerge generated from: '<S4>/VariantSource2' */
        rtb_VariantMerge_For_Variant_So =
            CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_f;
    }

    /* End of Switch: '<S222>/Switch2' */
    /* End of Outputs for SubSystem: '<S1>/Overrides' */
#endif

    /* End of SignalConversion generated from: '<S4>/VariantSource2' */

    /* Outputs for Enabled SubSystem: '<S39>/IfActionSubsystem6' incorporates:
     *  EnablePort: '<S183>/Enable'
     */
    /* Sum: '<S60>/Subtraction' incorporates:
     *  Sum: '<S159>/Subtraction2'
     *  Sum: '<S183>/Subtract'
     *  Sum: '<S64>/Subtraction3'
     *  Sum: '<S65>/Subtraction'
     *  Sum: '<S67>/Subtraction2'
     */
    rtb_Comparison4_tmp = rtb_Switch2 - rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S39>/IfActionSubsystem6' */

    /* RelationalOperator: '<S60>/Comparison4' incorporates:
     *  Constant: '<S86>/Calib'
     *  Sum: '<S60>/Subtraction'
     */
    rtb_Comparison4 = (rtb_Comparison4_tmp <= KeCTRR_dT_AmbBlwr_HCCT_Er);

    /* UnitDelay: '<S60>/UnitDelay' */
    rtb_UnitDelay_pl = CTRR_ac_DW.UnitDelay_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S60>/EdgeFalling' */
    /* Logic: '<S81>/AND' incorporates:
     *  Logic: '<S81>/OR1'
     *  UnitDelay: '<S81>/UnitDelay'
     */
    rtb_AND_hu = ((!rtb_UnitDelay_pl) && (CTRR_ac_DW.UnitDelay_DSTATE_ci));

    /* Update for UnitDelay: '<S81>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_ci = rtb_UnitDelay_pl;

    /* End of Outputs for SubSystem: '<S60>/EdgeFalling' */

    /* Logic: '<S61>/Logical6' incorporates:
     *  Constant: '<S61>/ConstantValue1'
     *  Constant: '<S91>/Calib'
     *  Lookup_n-D: '<S93>/Vector'
     *  RelationalOperator: '<S61>/Comparison1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
     *  Switch: '<S219>/Switch1'
     */
    rtb_UnitDelay_pl = ((KeCTRR_b_FrtAmbBlwr_CabEnb) && (look2_iflf_binlcapw
                         (VeCTRR_Pct_FrtBlwrCmd_AD,
                          CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k, ((const
                            float32 *)&(KxCTRR_n_FtBlwrCab_HeatngEngAllwd[0])),
                          ((const float32 *)&(KyCTRR_n_FtBlwrCab_HeatngEngAllwd
                            [0])), ((const float32 *)
                           &(KtCTRR_n_FtBlwrCab_HeatngEngAllwd[0])),
                          CTRR_ac_ConstP.pooled5, 6U) < 10.0F));

    /* Outputs for Atomic SubSystem: '<S61>/EdgeRising' */
    /* Logic: '<S89>/OR1' incorporates:
     *  UnitDelay: '<S89>/UnitDelay'
     */
    rtb_OR1_c = !CTRR_ac_DW.UnitDelay_DSTATE_je;

    /* Update for UnitDelay: '<S89>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_je = rtb_UnitDelay_pl;

    /* End of Outputs for SubSystem: '<S61>/EdgeRising' */

    /* Switch: '<S61>/Switch3' incorporates:
     *  Constant: '<S71>/Calib'
     */
    if (KeCTRR_b_AmbBlwr_CabRizEdg)
    {
        /* Outputs for Atomic SubSystem: '<S61>/EdgeRising' */
        /* Switch: '<S61>/Switch3' incorporates:
         *  Logic: '<S89>/AND'
         */
        VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Frt = (rtb_UnitDelay_pl && rtb_OR1_c);

        /* End of Outputs for SubSystem: '<S61>/EdgeRising' */
    }
    else
    {
        /* Switch: '<S61>/Switch3' */
        VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Frt = rtb_UnitDelay_pl;
    }

    /* End of Switch: '<S61>/Switch3' */

    /* Logic: '<S61>/Logical7' incorporates:
     *  Constant: '<S61>/ConstantValue4'
     *  Constant: '<S92>/Calib'
     *  Lookup_n-D: '<S94>/Vector'
     *  RelationalOperator: '<S61>/Comparison2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
     *  Switch: '<S219>/Switch2'
     */
    rtb_UnitDelay_pl = ((KeCTRR_b_RrAmbBlwr_CabEnb) && (10.0F >=
                         look2_iflf_binlcapw(VeCTRR_Pct_RrBlwrCmd_AD,
                          CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k, ((const
                            float32 *)&(KxCTRR_n_RrBlwrCab_HeatngEngAllwd[0])),
                          ((const float32 *)&(KyCTRR_n_RrBlwrCab_HeatngEngAllwd
                            [0])), ((const float32 *)
                           &(KtCTRR_n_RrBlwrCab_HeatngEngAllwd[0])),
                          CTRR_ac_ConstP.pooled5, 6U)));

    /* Outputs for Atomic SubSystem: '<S61>/EdgeRising1' */
    /* Logic: '<S90>/OR1' incorporates:
     *  UnitDelay: '<S90>/UnitDelay'
     */
    rtb_OR1_c = !CTRR_ac_DW.UnitDelay_DSTATE_j4;

    /* Update for UnitDelay: '<S90>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_j4 = rtb_UnitDelay_pl;

    /* End of Outputs for SubSystem: '<S61>/EdgeRising1' */

    /* Switch: '<S61>/Switch4' incorporates:
     *  Constant: '<S71>/Calib'
     */
    if (KeCTRR_b_AmbBlwr_CabRizEdg)
    {
        /* Outputs for Atomic SubSystem: '<S61>/EdgeRising1' */
        /* Switch: '<S61>/Switch4' incorporates:
         *  Logic: '<S90>/AND'
         */
        VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Rr = (rtb_UnitDelay_pl && rtb_OR1_c);

        /* End of Outputs for SubSystem: '<S61>/EdgeRising1' */
    }
    else
    {
        /* Switch: '<S61>/Switch4' */
        VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Rr = rtb_UnitDelay_pl;
    }

    /* End of Switch: '<S61>/Switch4' */

    /* Logic: '<S61>/Logical2' */
    VeCTRR_b_AmbBlwrCab_HeatAlwdRaw = ((VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Frt) ||
        (VeCTRR_b_AmbBlwrCab_HeatAlwdRaw_Rr));

    /* Outputs for Atomic SubSystem: '<S60>/EdgeRising2' */
    /* Logic: '<S83>/OR1' incorporates:
     *  UnitDelay: '<S83>/UnitDelay'
     */
    rtb_UnitDelay_pl = !CTRR_ac_DW.UnitDelay_DSTATE_ay;

    /* Update for UnitDelay: '<S83>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_ay = rtb_Comparison4;

    /* End of Outputs for SubSystem: '<S60>/EdgeRising2' */

    /* Switch: '<S60>/Switch4' incorporates:
     *  Constant: '<S84>/Calib'
     */
    if (KeCTRR_b_AmbBlwrLatch_RST_App)
    {
        /* Outputs for Atomic SubSystem: '<S60>/EdgeRising2' */
        /* Switch: '<S60>/Switch4' incorporates:
         *  Logic: '<S60>/Logical4'
         *  Logic: '<S83>/AND'
         */
        rtb_Comparison4 = ((rtb_Comparison4 && rtb_UnitDelay_pl) || rtb_AND_hu);

        /* End of Outputs for SubSystem: '<S60>/EdgeRising2' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S60>/EdgeRising2' */
        /* Switch: '<S60>/Switch4' incorporates:
         *  Constant: '<S85>/Calib'
         *  Logic: '<S60>/Logical1'
         *  Logic: '<S60>/Logical2'
         *  Logic: '<S83>/AND'
         *  Logic: '<S83>/OR1'
         */
        rtb_Comparison4 = (((rtb_Comparison4 && rtb_UnitDelay_pl) ||
                            (KeCTRR_b_AmbBlwr_HCCT_ErDis)) && rtb_AND_hu);

        /* End of Outputs for SubSystem: '<S60>/EdgeRising2' */
    }

    /* End of Switch: '<S60>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S60>/SignalLatchOnWithReset' */
    /* Logic: '<S87>/OR1' incorporates:
     *  Logic: '<S87>/NOT'
     *  Logic: '<S87>/OR'
     *  UnitDelay: '<S87>/UnitDelay'
     */
    VeCTRR_b_AmbBlwrCab_Latch = ((VeCTRR_b_AmbBlwrCab_HeatAlwdRaw) ||
        ((!rtb_Comparison4) && (CTRR_ac_DW.UnitDelay_DSTATE_bx)));

    /* Update for UnitDelay: '<S87>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_bx = VeCTRR_b_AmbBlwrCab_Latch;

    /* End of Outputs for SubSystem: '<S60>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S60>/EdgeRising' */
    /* Logic: '<S82>/OR1' incorporates:
     *  UnitDelay: '<S82>/UnitDelay'
     */
    rtb_Comparison4 = !CTRR_ac_DW.UnitDelay_DSTATE_e;

    /* Update for UnitDelay: '<S82>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_e = VeCTRR_b_AmbBlwrCab_Latch;

    /* Outputs for Atomic SubSystem: '<S60>/TimerRetriggerResetEnabled1' */
    /* Switch: '<S88>/Switch1' incorporates:
     *  Logic: '<S82>/AND'
     *  Switch: '<S88>/Switch2'
     */
    if ((VeCTRR_b_AmbBlwrCab_Latch) && rtb_Comparison4)
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Constant: '<S73>/Calib'
         */
        rtb_Switch5 = KeCTRR_t_AmbBlwrCab_HeatAlwdTim;
    }
    else if (VeCTRR_b_AmbBlwrCab_Latch)
    {
        /* Switch: '<S88>/Switch2' incorporates:
         *  Constant: '<S60>/ConstantValue4'
         *  Constant: '<S88>/ConstantValue4'
         *  MinMax: '<S88>/Maximum'
         *  Sum: '<S88>/Subtraction'
         *  Switch: '<S88>/Switch1'
         *  UnitDelay: '<S88>/UnitDelay'
         */
        rtb_Switch5 = fmaxf(CTRR_ac_DW.UnitDelay_DSTATE_a - 0.1F, 0.0F);
    }
    else
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Switch: '<S88>/Switch2'
         *  UnitDelay: '<S88>/UnitDelay'
         */
        rtb_Switch5 = CTRR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* End of Switch: '<S88>/Switch1' */
    /* End of Outputs for SubSystem: '<S60>/EdgeRising' */

    /* RelationalOperator: '<S88>/GreaterThan1' incorporates:
     *  Constant: '<S88>/ConstantValue2'
     */
    VeCTRR_b_AmbBlwrCab_HeatAlwd = (rtb_Switch5 > 0.0F);

    /* Update for UnitDelay: '<S88>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch5;

    /* End of Outputs for SubSystem: '<S60>/TimerRetriggerResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S62>/Hysteresis' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S96>/Calib'
     *  RelationalOperator: '<S95>/GreaterThan'
     *  Sum: '<S62>/Subtraction1'
     */
    if (rtb_Switch2 > (CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k +
                       KeCTRR_dT_CabHeatReq_TempHysHigh))
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S95>/ConstantValue'
         */
        VeCTRR_b_AmbTmpCab_HeatReq = true;
    }
    else
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S97>/Calib'
         *  RelationalOperator: '<S95>/GreaterThan1'
         *  Sum: '<S62>/Subtraction'
         *  UnitDelay: '<S95>/UnitDelay'
         */
        VeCTRR_b_AmbTmpCab_HeatReq = ((rtb_Switch2 >=
            (CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k -
             KeCTRR_dT_CabHeatReq_TempHysLow)) && (CTRR_ac_DW.UnitDelay_DSTATE_b));
    }

    /* End of Switch: '<S95>/Switch1' */

    /* Update for UnitDelay: '<S95>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_b = VeCTRR_b_AmbTmpCab_HeatReq;

    /* End of Outputs for SubSystem: '<S62>/Hysteresis' */

    /* UnitDelay: '<S178>/UnitDelay' incorporates:
     *  Constant: '<S100>/Calib'
     *  RelationalOperator: '<S63>/Comparison3'
     */
    rtb_AND_hu = (CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k <=
                  KeCTRR_T_CabHeatReq_MildAmb);

    /* Logic: '<S63>/Logical1' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S98>/Calib'
     *  Constant: '<S99>/Calib'
     *  Logic: '<S63>/Logical2'
     *  Logic: '<S63>/Logical3'
     *  RelationalOperator: '<S63>/Comparison1'
     *  RelationalOperator: '<S63>/Comparison2'
     */
    VeCTRR_b_BlwrCabHeat_Req = ((((VeCTRR_Pct_FrtBlwrCmd_AD >=
        KeCTRR_Pct_FrtBlwrCmd_Min) && rtb_AND_hu) &&
        (KeCTRR_b_FrtBlwrMin_FlowEnb)) || (((VeCTRR_Pct_RrBlwrCmd_AD >=
        KeCTRR_Pct_RrBlwrCmd_Min) && rtb_AND_hu) && (KeCTRR_b_RrBlwrMin_FlowEnb)));

    /* RelationalOperator: '<S64>/Comparison2' incorporates:
     *  Constant: '<S109>/Calib'
     */
    VeCTRR_dT_HCCT_StdyStatEr = (rtb_Comparison4_tmp <=
        KeCTRR_dT_HCCT_DltaStdyStat_Er);

    /* RelationalOperator: '<S64>/Comparison3' incorporates:
     *  Constant: '<S105>/Calib'
     *  Sum: '<S64>/Subtraction2'
     *  UnitDelay: '<S64>/UnitDelay1'
     */
    VeCTRR_b_FrtBlwrDecreasing = (VeCTRR_Pct_FrtBlwrCmd_AD <
        (CTRR_ac_DW.UnitDelay1_DSTATE + KeCTRR_Pct_FrtBlwrRamp_Dwn));

    /* Logic: '<S64>/Logical23' */
    rtb_AND_hu = ((VeCTRR_b_FrtBlwrDecreasing) && (VeCTRR_dT_HCCT_StdyStatEr));

    /* Outputs for Atomic SubSystem: '<S64>/EdgeRising1' */
    /* Logic: '<S104>/AND' incorporates:
     *  Logic: '<S104>/OR1'
     *  UnitDelay: '<S104>/UnitDelay'
     */
    rtb_Comparison4 = (rtb_AND_hu && (!CTRR_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S104>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_p = rtb_AND_hu;

    /* End of Outputs for SubSystem: '<S64>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S64>/CountDownResetTriggerEnabled1' */
    /* Outputs for Atomic SubSystem: '<S103>/EdgeRising' */
    /* Logic: '<S112>/OR1' incorporates:
     *  UnitDelay: '<S112>/UnitDelay'
     */
    rtb_UnitDelay_pl = !CTRR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S112>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_c = rtb_Comparison4;

    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S103>/ConstantValue'
     *  Logic: '<S103>/AND'
     *  Logic: '<S112>/AND'
     *  RelationalOperator: '<S103>/GreaterThan'
     *  Switch: '<S103>/Switch2'
     *  UnitDelay: '<S103>/UnitDelay'
     */
    if (rtb_Comparison4 && rtb_UnitDelay_pl)
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         */
        rtb_Switch5 = KeCTRR_t_DelayEngTurn_Off_Blwr;
    }
    else if (rtb_AND_hu && (CTRR_ac_DW.UnitDelay_DSTATE_g > 0.0F))
    {
        /* Switch: '<S103>/Switch2' incorporates:
         *  Constant: '<S103>/ConstantValue1'
         *  Sum: '<S103>/Subtraction'
         *  Switch: '<S103>/Switch1'
         *  UnitDelay: '<S103>/UnitDelay'
         */
        rtb_Switch5 = CTRR_ac_DW.UnitDelay_DSTATE_g - 1.0F;
    }
    else
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Switch: '<S103>/Switch2'
         *  UnitDelay: '<S103>/UnitDelay'
         */
        rtb_Switch5 = CTRR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for SubSystem: '<S103>/EdgeRising' */

    /* Update for UnitDelay: '<S103>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch5;

    /* End of Outputs for SubSystem: '<S64>/CountDownResetTriggerEnabled1' */

    /* Switch: '<S64>/Switch2' incorporates:
     *  Constant: '<S107>/Calib'
     */
    if (!KeCTRR_b_CabCmfrtAchvd_TimrDsbl)
    {
        /* Outputs for Atomic SubSystem: '<S64>/CountDownResetTriggerEnabled1' */
        /* UnitDelay: '<S178>/UnitDelay' incorporates:
         *  Constant: '<S103>/ConstantValue2'
         *  Logic: '<S64>/Logical6'
         *  RelationalOperator: '<S103>/GreaterThan1'
         */
        rtb_AND_hu = (rtb_Switch5 <= 0.0F);

        /* End of Outputs for SubSystem: '<S64>/CountDownResetTriggerEnabled1' */
    }

    /* End of Switch: '<S64>/Switch2' */

    /* Switch: '<S64>/Switch3' */
    if (rtb_AND_hu)
    {
        /* Switch: '<S64>/Switch1' incorporates:
         *  Constant: '<S108>/Calib'
         */
        if (KeCTRR_b_FrtBlwrRamp_DwnSelTevap)
        {
            rtb_Switch5 = VeCTRR_T_FtEvapTmp_AD;
        }
        else
        {
            rtb_Switch5 = CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k;
        }

        /* End of Switch: '<S64>/Switch1' */

        /* Switch: '<S64>/Switch3' incorporates:
         *  Constant: '<S64>/ConstantValue4'
         *  Lookup_n-D: '<S111>/Vector'
         *  RelationalOperator: '<S64>/Comparison4'
         *  Switch: '<S219>/Switch1'
         */
        rtb_Comparison4 = (look2_iflf_binlcapw(rtb_Switch5,
                            VeCTRR_Pct_FrtBlwrCmd_AD, ((const float32 *)
                             &(KxCTRR_n_FtBlwrCab_CmfrtAchv[0])), ((const
                              float32 *)&(KyCTRR_n_FtBlwrCab_CmfrtAchv[0])), ((
                              const float32 *)&(KtCTRR_n_FtBlwrCab_CmfrtAchv[0])),
                            CTRR_ac_ConstP.pooled5, 6U) < 10.0F);
    }
    else
    {
        /* Switch: '<S64>/Switch3' incorporates:
         *  Constant: '<S64>/TRUEConstant1'
         */
        rtb_Comparison4 = true;
    }

    /* End of Switch: '<S64>/Switch3' */

    /* RelationalOperator: '<S64>/Comparison1' incorporates:
     *  Constant: '<S106>/Calib'
     *  Sum: '<S64>/Subtraction1'
     *  UnitDelay: '<S64>/UnitDelay2'
     */
    VeCTRR_b_RrBlwrDecreasing = (VeCTRR_Pct_RrBlwrCmd_AD <
        (CTRR_ac_DW.UnitDelay2_DSTATE + KeCTRR_Pct_RrtBlwrRamp_Dwn));

    /* UnitDelay: '<S65>/UnitDelay' */
    rtb_UnitDelay_pl = CTRR_ac_DW.UnitDelay_DSTATE_lr;

    /* Outputs for Atomic SubSystem: '<S65>/EdgeFalling' */
    /* Logic: '<S113>/AND' incorporates:
     *  Logic: '<S113>/OR1'
     *  UnitDelay: '<S113>/UnitDelay'
     */
    rtb_AND_hu = ((!rtb_UnitDelay_pl) && (CTRR_ac_DW.UnitDelay_DSTATE_ad));

    /* Update for UnitDelay: '<S113>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_ad = rtb_UnitDelay_pl;

    /* End of Outputs for SubSystem: '<S65>/EdgeFalling' */

    /* RelationalOperator: '<S76>/Comparison3' incorporates:
     *  Constant: '<S126>/Calib'
     *  Sum: '<S76>/Subtraction2'
     *  UnitDelay: '<S76>/UnitDelay1'
     */
    VeCTRR_b_HardCab_HCCT_Tgt = (rtb_Switch2 >= (CTRR_ac_DW.UnitDelay1_DSTATE_k
        + KeCTRR_dT_HtrCorTmp_TgtIncrs));

    /* RelationalOperator: '<S76>/Comparison1' incorporates:
     *  Constant: '<S124>/Calib'
     *  Sum: '<S76>/Subtraction3'
     *  UnitDelay: '<S76>/UnitDelay'
     */
    VeCTRR_b_HardCab_FrtBlwr = (VeCTRR_Pct_FrtBlwrCmd_AD >=
        (CTRR_ac_DW.UnitDelay_DSTATE + KeCTRR_Pct_FrtBlwrCmd_Incrs));

    /* RelationalOperator: '<S76>/Comparison2' incorporates:
     *  Constant: '<S125>/Calib'
     *  Sum: '<S76>/Subtraction4'
     *  UnitDelay: '<S76>/UnitDelay2'
     */
    VeCTRR_b_HardCab_RrBlwr = (VeCTRR_Pct_RrBlwrCmd_AD >=
        (CTRR_ac_DW.UnitDelay2_DSTATE_a + KeCTRR_Pct_RrBlwrCmd_Incrs));

    /* Logic: '<S127>/Logical1' incorporates:
     *  Constant: '<S134>/Constant'
     *  Constant: '<S138>/Calib'
     *  RelationalOperator: '<S127>/Comparison3'
     *  Switch: '<S222>/Switch'
     */
    VeCTRR_b_HrshCabReq_KeyOff = ((KeCTRR_b_HrshCabReq_KeyOffEnb) && (((uint32)
        VeCTRR_e_SSDR_KeySts_AD) == CeSSDR_e_KeyOff));

    /* RelationalOperator: '<S127>/Comparison6' incorporates:
     *  Constant: '<S132>/Constant'
     *  RelationalOperator: '<S127>/Comparison3'
     *  Switch: '<S222>/Switch'
     */
    rtb_UnitDelay_pl = (CeSSDR_e_KeyCrank == ((uint32)VeCTRR_e_SSDR_KeySts_AD));

    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising1' */
    /* Logic: '<S128>/OR1' incorporates:
     *  UnitDelay: '<S128>/UnitDelay'
     */
    rtb_OR1_c = !CTRR_ac_DW.UnitDelay_DSTATE_am;

    /* Update for UnitDelay: '<S128>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_am = rtb_UnitDelay_pl;

    /* Logic: '<S127>/Logical2' incorporates:
     *  Constant: '<S137>/Calib'
     *  Logic: '<S128>/AND'
     */
    VeCTRR_b_HrshCabReq_CrankOn = ((KeCTRR_b_HrshCabReq_CrankOn) &&
        (rtb_UnitDelay_pl && rtb_OR1_c));

    /* End of Outputs for SubSystem: '<S127>/EdgeRising1' */

    /* RelationalOperator: '<S127>/Comparison1' incorporates:
     *  Constant: '<S131>/Constant'
     *  RelationalOperator: '<S127>/Comparison3'
     *  Switch: '<S222>/Switch'
     */
    rtb_UnitDelay_pl = (((uint32)VeCTRR_e_SSDR_KeySts_AD) == CeSSDR_e_KeyRun);

    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising2' */
    /* Logic: '<S129>/OR1' incorporates:
     *  UnitDelay: '<S129>/UnitDelay'
     */
    rtb_OR1_c = !CTRR_ac_DW.UnitDelay_DSTATE_lp;

    /* Update for UnitDelay: '<S129>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_lp = rtb_UnitDelay_pl;

    /* Logic: '<S127>/Logical3' incorporates:
     *  Constant: '<S139>/Calib'
     *  Logic: '<S129>/AND'
     */
    VeCTRR_b_HrshCabReq_RunOn = ((rtb_UnitDelay_pl && rtb_OR1_c) &&
        (KeCTRR_b_HrshCabReq_RunOn));

    /* End of Outputs for SubSystem: '<S127>/EdgeRising2' */

    /* RelationalOperator: '<S127>/Comparison2' incorporates:
     *  Constant: '<S133>/Constant'
     *  RelationalOperator: '<S127>/Comparison3'
     *  Switch: '<S222>/Switch'
     */
    rtb_UnitDelay_pl = (((uint32)VeCTRR_e_SSDR_KeySts_AD) == CeSSDR_e_KeyAccy);

    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising3' */
    /* Logic: '<S130>/OR1' incorporates:
     *  UnitDelay: '<S130>/UnitDelay'
     */
    rtb_OR1_c = !CTRR_ac_DW.UnitDelay_DSTATE_il;

    /* Update for UnitDelay: '<S130>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_il = rtb_UnitDelay_pl;

    /* Logic: '<S127>/Logical4' incorporates:
     *  Constant: '<S136>/Calib'
     *  Logic: '<S130>/AND'
     */
    VeCTRR_b_HrshCabReq_AccOn = ((KeCTRR_b_HrshCabReq_AccOn) &&
        (rtb_UnitDelay_pl && rtb_OR1_c));

    /* End of Outputs for SubSystem: '<S127>/EdgeRising3' */

    /* Logic: '<S127>/Logical6' */
    VeCTRR_b_HrshCabReq_KeyStsChng = (((VeCTRR_b_HrshCabReq_CrankOn) ||
        (VeCTRR_b_HrshCabReq_RunOn)) || (VeCTRR_b_HrshCabReq_AccOn));

    /* UnitDelay: '<S135>/UnitDelay' */
    rtb_UnitDelay_pl = CTRR_ac_DW.UnitDelay_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S135>/EdgeFalling' */
    /* Logic: '<S141>/AND' incorporates:
     *  Logic: '<S141>/OR1'
     *  UnitDelay: '<S141>/UnitDelay'
     */
    rtb_OR1_c = ((!rtb_UnitDelay_pl) && (CTRR_ac_DW.UnitDelay_DSTATE_j));

    /* Update for UnitDelay: '<S141>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_j = rtb_UnitDelay_pl;

    /* End of Outputs for SubSystem: '<S135>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S135>/SignalLatchOnWithReset1' */
    /* Logic: '<S143>/OR1' incorporates:
     *  Logic: '<S143>/NOT'
     *  Logic: '<S143>/OR'
     *  UnitDelay: '<S143>/UnitDelay'
     */
    VeCTRR_b_HrshCabRq_KeyLtchd = ((VeCTRR_b_HrshCabReq_KeyStsChng) ||
        ((!rtb_OR1_c) && (CTRR_ac_DW.UnitDelay_DSTATE_or)));

    /* Update for UnitDelay: '<S143>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_or = VeCTRR_b_HrshCabRq_KeyLtchd;

    /* End of Outputs for SubSystem: '<S135>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S135>/EdgeRising1' */
    /* Logic: '<S142>/OR1' incorporates:
     *  UnitDelay: '<S142>/UnitDelay'
     */
    rtb_UnitDelay_pl = !CTRR_ac_DW.UnitDelay_DSTATE_fk;

    /* Update for UnitDelay: '<S142>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_fk = VeCTRR_b_HrshCabRq_KeyLtchd;

    /* Outputs for Atomic SubSystem: '<S135>/TimerRetriggerResetEnabled' */
    /* Switch: '<S144>/Switch1' incorporates:
     *  Logic: '<S142>/AND'
     *  Switch: '<S144>/Switch2'
     */
    if ((VeCTRR_b_HrshCabRq_KeyLtchd) && rtb_UnitDelay_pl)
    {
        /* Switch: '<S144>/Switch1' incorporates:
         *  Constant: '<S140>/Calib'
         */
        rtb_Switch5 = KeCTRR_t_HrshCabRq_KeyMaskTim;
    }
    else if (VeCTRR_b_HrshCabRq_KeyLtchd)
    {
        /* Switch: '<S144>/Switch2' incorporates:
         *  Constant: '<S135>/ConstantValue4'
         *  Constant: '<S144>/ConstantValue4'
         *  MinMax: '<S144>/Maximum'
         *  Sum: '<S144>/Subtraction'
         *  Switch: '<S144>/Switch1'
         *  UnitDelay: '<S144>/UnitDelay'
         */
        rtb_Switch5 = fmaxf(CTRR_ac_DW.UnitDelay_DSTATE_o - 0.1F, 0.0F);
    }
    else
    {
        /* Switch: '<S144>/Switch1' incorporates:
         *  Switch: '<S144>/Switch2'
         *  UnitDelay: '<S144>/UnitDelay'
         */
        rtb_Switch5 = CTRR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S144>/Switch1' */
    /* End of Outputs for SubSystem: '<S135>/EdgeRising1' */

    /* RelationalOperator: '<S144>/GreaterThan1' incorporates:
     *  Constant: '<S144>/ConstantValue2'
     */
    VeCTRR_b_HrshCabRq_KeyChngOn = (rtb_Switch5 > 0.0F);

    /* Update for UnitDelay: '<S144>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch5;

    /* End of Outputs for SubSystem: '<S135>/TimerRetriggerResetEnabled' */

    /* Switch: '<S135>/Switch2' */
    if (VeCTRR_b_HrshCabReq_KeyOff)
    {
        /* Switch: '<S135>/Switch2' incorporates:
         *  Constant: '<S135>/FALSEConstant'
         */
        VeCTRR_b_isHrshCabRq_Maskd = false;
    }
    else
    {
        /* Switch: '<S135>/Switch2' incorporates:
         *  Logic: '<S135>/Logical8'
         */
        VeCTRR_b_isHrshCabRq_Maskd = !VeCTRR_b_HrshCabRq_KeyChngOn;
    }

    /* End of Switch: '<S135>/Switch2' */

    /* Logic: '<S76>/Logical1' incorporates:
     *  Logic: '<S76>/Logical2'
     */
    VeCTRR_b_HardCabHeat_Enb = ((((VeCTRR_b_HardCab_HCCT_Tgt) ||
        (VeCTRR_b_HardCab_FrtBlwr)) || (VeCTRR_b_HardCab_RrBlwr)) &&
        (VeCTRR_b_isHrshCabRq_Maskd));

    /* Outputs for Atomic SubSystem: '<S65>/SignalLatchOnWithReset1' */
    /* Logic: '<S117>/OR1' incorporates:
     *  Constant: '<S115>/Calib'
     *  Constant: '<S116>/Calib'
     *  Logic: '<S117>/NOT'
     *  Logic: '<S117>/OR'
     *  Logic: '<S65>/Logical1'
     *  Logic: '<S65>/Logical4'
     *  RelationalOperator: '<S65>/Comparison4'
     *  UnitDelay: '<S117>/UnitDelay'
     */
    VeCTRR_b_HardCabHeat_Latch = ((VeCTRR_b_HardCabHeat_Enb) ||
        ((((rtb_Comparison4_tmp > KeCTRR_dT_HarshReq_HtrCorTemp_Er) ||
           (!KeCTRR_b_HardCab_HCCT_Er)) && (!rtb_AND_hu)) &&
         (CTRR_ac_DW.UnitDelay_DSTATE_ge)));

    /* Update for UnitDelay: '<S117>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_ge = VeCTRR_b_HardCabHeat_Latch;

    /* End of Outputs for SubSystem: '<S65>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S65>/EdgeRising1' */
    /* Logic: '<S114>/OR1' incorporates:
     *  UnitDelay: '<S114>/UnitDelay'
     */
    rtb_AND_hu = !CTRR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S114>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_h = VeCTRR_b_HardCabHeat_Latch;

    /* Outputs for Atomic SubSystem: '<S65>/TimerRetriggerResetEnabled' */
    /* Switch: '<S118>/Switch1' incorporates:
     *  Logic: '<S114>/AND'
     *  Switch: '<S118>/Switch2'
     */
    if ((VeCTRR_b_HardCabHeat_Latch) && rtb_AND_hu)
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S74>/Calib'
         */
        rtb_Switch5 = KeCTRR_t_EngReq_HarshCabRq;
    }
    else if (VeCTRR_b_HardCabHeat_Latch)
    {
        /* Switch: '<S118>/Switch2' incorporates:
         *  Constant: '<S118>/ConstantValue4'
         *  Constant: '<S65>/ConstantValue4'
         *  MinMax: '<S118>/Maximum'
         *  Sum: '<S118>/Subtraction'
         *  Switch: '<S118>/Switch1'
         *  UnitDelay: '<S118>/UnitDelay'
         */
        rtb_Switch5 = fmaxf(CTRR_ac_DW.UnitDelay_DSTATE_f - 0.1F, 0.0F);
    }
    else
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Switch: '<S118>/Switch2'
         *  UnitDelay: '<S118>/UnitDelay'
         */
        rtb_Switch5 = CTRR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S118>/Switch1' */
    /* End of Outputs for SubSystem: '<S65>/EdgeRising1' */

    /* RelationalOperator: '<S118>/GreaterThan1' incorporates:
     *  Constant: '<S118>/ConstantValue2'
     */
    VeCTRR_b_HardCabHeat_Req0 = (rtb_Switch5 > 0.0F);

    /* Update for UnitDelay: '<S118>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch5;

    /* End of Outputs for SubSystem: '<S65>/TimerRetriggerResetEnabled' */

    /* Logic: '<S66>/Logical4' incorporates:
     *  Constant: '<S119>/Calib'
     */
    VeCTRR_b_AmbBlwrCab_HeatAlwdRaw0 = ((KeCTRR_b_AmbBlwrCab_HeatAlwdEnb) &&
        (VeCTRR_b_AmbBlwrCab_HeatAlwd));

    /* Logic: '<S56>/Logical2' incorporates:
     *  Constant: '<S70>/Calib'
     */
    rtb_AND_hu = ((KeCTRR_b_AHP_Enb) &&
                  (CTRR_ac_B.TmpSignalConversionAtTmpVM_F_hl));

    /* Switch: '<S75>/Switch3' incorporates:
     *  Constant: '<S123>/Calib'
     */
    if (KeCTRR_b_AHP_Enb)
    {
        rtb_UnitDelay_pl = rtb_AND_hu;
    }
    else
    {
        rtb_UnitDelay_pl = VeCTRR_b_BlwrCabHeat_Req;
    }

    /* End of Switch: '<S75>/Switch3' */

    /* Logic: '<S75>/Logical1' incorporates:
     *  Logic: '<S75>/Logical8'
     */
    VeCTRR_b_MinFlowCab_HeatReq = (rtb_UnitDelay_pl &&
        (!VeCTRR_b_AmbTmpCab_HeatReq));

    /* Switch: '<S56>/Switch3' incorporates:
     *  Switch: '<S56>/Switch4'
     */
    if (VeCTRR_b_RS_N_Or_NrmlPerWp_AD)
    {
        /* Switch: '<S56>/Switch3' incorporates:
         *  Constant: '<S56>/FALSEConstant3'
         */
        VeCTRR_b_HVAC_HeatReq_B4 = false;

        /* Switch: '<S56>/Switch4' incorporates:
         *  Constant: '<S56>/FALSEConstant4'
         */
        VeCTRR_b_HardCabHeat_Req_B4D = false;
    }
    else
    {
        /* Switch: '<S56>/Switch3' incorporates:
         *  Constant: '<S122>/Calib'
         *  Constant: '<S68>/Calib'
         *  Constant: '<S69>/Calib'
         *  Constant: '<S72>/Calib'
         *  Logic: '<S56>/Logical1'
         *  Logic: '<S56>/Logical3'
         *  Logic: '<S56>/Logical4'
         *  Logic: '<S56>/Logical5'
         *  Logic: '<S56>/Logical8'
         *  Logic: '<S56>/LogicalOperator'
         *  Logic: '<S67>/Logical9'
         *  RelationalOperator: '<S67>/Comparison4'
         */
        VeCTRR_b_HVAC_HeatReq_B4 = (((rtb_AND_hu ||
            ((((VeCTRR_b_AmbTmpCab_HeatReq) || (VeCTRR_b_BlwrCabHeat_Req)) ||
              (rtb_Comparison4_tmp >= KeCTRR_dT_StopCabinCond_TempThres)) &&
             (!KeCTRR_b_AHPEnbReqApp_ECH))) || (rtb_Switch1_mq &&
            (KeCTRR_b_AHPEnblReqApp_AirPTC))) || ((VeCTRR_b_OvrdHCCTISTgt_Amb) &&
            (KeCTRR_b_OV_Enbl_AmbTmpHeatRq)));

        /* Switch: '<S66>/Switch' incorporates:
         *  Constant: '<S121>/Calib'
         */
        if (KeCTRR_b_HardCabHeat_ReqSlct)
        {
            /* Switch: '<S56>/Switch4' incorporates:
             *  Logic: '<S66>/Logical3'
             *  Switch: '<S66>/Switch'
             */
            VeCTRR_b_HardCabHeat_Req_B4D = ((VeCTRR_b_HardCabHeat_Req0) ||
                (VeCTRR_b_AmbBlwrCab_HeatAlwdRaw0));
        }
        else
        {
            /* Switch: '<S56>/Switch4' incorporates:
             *  Constant: '<S120>/Calib'
             *  Switch: '<S66>/Switch'
             */
            VeCTRR_b_HardCabHeat_Req_B4D = KeCTRR_b_HardCabHeat_ReqDial;
        }

        /* End of Switch: '<S66>/Switch' */
    }

    /* End of Switch: '<S56>/Switch3' */

    /* If: '<S145>/If' incorporates:
     *  Constant: '<S149>/Constant'
     *  RelationalOperator: '<S145>/Comparison4'
     *  Switch: '<S222>/Switch6'
     */
    if (((uint32)VeCTRR_e_CabHeatThermalMode_AD) == CeTHMR_e_HeatPump)
    {
        /* Outputs for IfAction SubSystem: '<S145>/HeatingEnbl_HPMode' incorporates:
         *  ActionPort: '<S151>/ActionPort'
         */
        /* Merge: '<S145>/Merge' incorporates:
         *  Constant: '<S154>/Calib'
         *  SignalConversion generated from: '<S151>/LSP'
         */
        rtb_Switch5 = KeCTRR_dT_HCCTISErr_HeatDsbl_HP;

        /* Merge: '<S145>/Merge1' incorporates:
         *  Constant: '<S155>/Calib'
         *  SignalConversion generated from: '<S151>/RSP'
         */
        rtb_Merge1 = KeCTRR_dT_HCCTISErr_HeatEnbl_HP;

        /* End of Outputs for SubSystem: '<S145>/HeatingEnbl_HPMode' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S145>/HeatEnbl' incorporates:
         *  ActionPort: '<S150>/ActionPort'
         */
        /* Merge: '<S145>/Merge' incorporates:
         *  Constant: '<S152>/Calib'
         *  SignalConversion generated from: '<S150>/LSP'
         */
        rtb_Switch5 = KeCTRR_dT_HCCTISErr_HeatDsbl;

        /* Merge: '<S145>/Merge1' incorporates:
         *  Constant: '<S153>/Calib'
         *  SignalConversion generated from: '<S150>/RSP'
         */
        rtb_Merge1 = KeCTRR_dT_HCCTISErr_HeatEnbl;

        /* End of Outputs for SubSystem: '<S145>/HeatEnbl' */
    }

    /* End of If: '<S145>/If' */

    /* Outputs for Atomic SubSystem: '<S77>/Hysteresis' */
    /* Switch: '<S146>/Switch1' incorporates:
     *  RelationalOperator: '<S146>/GreaterThan'
     */
    if (rtb_Comparison4_tmp > rtb_Merge1)
    {
        /* Switch: '<S146>/Switch1' incorporates:
         *  Constant: '<S146>/ConstantValue'
         */
        rtb_AND_hu = true;
    }
    else
    {
        /* Switch: '<S146>/Switch1' incorporates:
         *  RelationalOperator: '<S146>/GreaterThan1'
         *  UnitDelay: '<S146>/UnitDelay'
         */
        rtb_AND_hu = ((rtb_Comparison4_tmp >= rtb_Switch5) &&
                      (CTRR_ac_DW.UnitDelay_DSTATE_ik));
    }

    /* End of Switch: '<S146>/Switch1' */

    /* Update for UnitDelay: '<S146>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_ik = rtb_AND_hu;

    /* End of Outputs for SubSystem: '<S77>/Hysteresis' */

    /* Logic: '<S77>/LogicalOperator1' incorporates:
     *  Constant: '<S147>/Calib'
     *  Constant: '<S148>/Calib'
     *  Logic: '<S77>/LogicalOperator'
     *  Logic: '<S77>/LogicalOperator2'
     */
    VeCTRR_b_TrueCab_HeatReq_B4D = ((((rtb_AND_hu && (VeCTRR_b_HVAC_HeatReq_B4))
        && (KeCTRR_b_Heat_AHP_Enb)) && (VeCTRR_b_AmbTmpCab_HeatReq)) ||
        (rtb_Switch1_mq && (KeCTRR_b_HeatEnblReqApp_AirPTC)));

    /* Switch: '<S156>/Switch1' */
    if (VeCTRR_b_RS_N_Or_NrmlPerWp_AD)
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Constant: '<S156>/FALSEConstant'
         */
        VeCTRR_b_CabPriorityHigh_B4D = false;
    }
    else
    {
        /* Switch: '<S156>/Switch1' incorporates:
         *  Constant: '<S160>/Calib'
         *  RelationalOperator: '<S156>/Comparison3'
         */
        VeCTRR_b_CabPriorityHigh_B4D = (rtb_Comparison4_tmp >=
            KeCTRR_dT_CabHtgPriority_MaxTmpErr);
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Lookup_n-D: '<S161>/Vector' */
    VeCTRR_P_ErrorBasedPwr = look1_iflf_binlcapw(rtb_Comparison4_tmp, ((const
        float32 *)&(KxCTRR_P_CabinPwrNeed_LookUp[0])), ((const float32 *)
        &(KtCTRR_P_CabinPwrNeed_LookUp[0])), 7U);

    /* UnitDelay: '<S178>/UnitDelay' incorporates:
     *  Logic: '<S58>/Logical16'
     *  Logic: '<S58>/Logical17'
     */
    rtb_AND_hu = (((VeCTRR_b_HVAC_HeatReq_B4) && (VeCTRR_b_CabAllowed_AD)) &&
                  (!VeCTRR_b_CabReq_NotAllow_AD));

    /* If: '<S58>/If2' incorporates:
     *  Logic: '<S58>/Logical'
     *  Logic: '<S58>/Logical1'
     */
    if (((VeCTRR_b_BattHeatReq_AD) && (VeCTRR_b_BattAllowed_AD)) && rtb_AND_hu)
    {
        /* Outputs for IfAction SubSystem: '<S58>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S172>/ActionPort'
         */
        /* Switch: '<S172>/Switch2' incorporates:
         *  Constant: '<S175>/Calib'
         */
        if (KeCTRR_b_Use_ECH_In_Temp)
        {
            rtb_Switch5 = VeCTRR_T_HVC_HtrClntIn_Temp_AD;
        }
        else
        {
            rtb_Switch5 = rtb_VariantMerge_For_Variant_So;
        }

        /* End of Switch: '<S172>/Switch2' */

        /* Merge: '<S58>/Merge' incorporates:
         *  MinMax: '<S172>/MinMax'
         *  Sum: '<S172>/Subtraction'
         *  Sum: '<S172>/Subtraction2'
         */
        VeCTRR_dT_HeatPumpErr_BD = fmaxf(rtb_Switch2 - rtb_Switch5,
            VeCTRR_T_BattClntMinTgt_AD - VeCTRR_T_BTISBTIS2_Max_AD);

        /* End of Outputs for SubSystem: '<S58>/IfActionSubsystem2' */
    }
    else if (rtb_AND_hu)
    {
        /* Outputs for IfAction SubSystem: '<S58>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S171>/ActionPort'
         */
        /* Switch: '<S171>/Switch2' incorporates:
         *  Constant: '<S174>/Calib'
         */
        if (KeCTRR_b_Use_ECH_In_Temp)
        {
            rtb_Switch5 = VeCTRR_T_HVC_HtrClntIn_Temp_AD;
        }
        else
        {
            rtb_Switch5 = rtb_VariantMerge_For_Variant_So;
        }

        /* End of Switch: '<S171>/Switch2' */

        /* Merge: '<S58>/Merge' incorporates:
         *  Sum: '<S171>/Subtraction'
         */
        VeCTRR_dT_HeatPumpErr_BD = rtb_Switch2 - rtb_Switch5;

        /* End of Outputs for SubSystem: '<S58>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S58>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S173>/ActionPort'
         */
        /* Merge: '<S58>/Merge' incorporates:
         *  Constant: '<S176>/Calib'
         *  SignalConversion generated from: '<S173>/ECH_TempErr'
         */
        VeCTRR_dT_HeatPumpErr_BD = KeCTRR_dT_HeatPumpErrDefault;

        /* End of Outputs for SubSystem: '<S58>/IfActionSubsystem3' */
    }

    /* End of If: '<S58>/If2' */

    /* Switch: '<S158>/Switch5' incorporates:
     *  Constant: '<S166>/Calib'
     *  Constant: '<S167>/Calib'
     *  Logic: '<S158>/Logical15'
     *  Switch: '<S162>/Switch1'
     *  Switch: '<S163>/Switch1'
     */
    if (KeCTRR_b_HeatPmpPwr_dflt_SD)
    {
        /* Switch: '<S158>/Switch5' incorporates:
         *  Constant: '<S165>/Calib'
         */
        rtb_Switch5 = KeCTRR_P_HeatPmpPwr_dflt_D;
    }
    else if ((VeCTRR_b_DeiceActv_AD) && (KeCTRR_b_Enbl_DeIcingPwr))
    {
        /* Switch: '<S162>/Switch1' incorporates:
         *  Constant: '<S164>/Calib'
         *  Switch: '<S158>/Switch5'
         */
        rtb_Switch5 = KeCTRR_P_DeIcingPower;
    }
    else if (VeCTRR_b_HVAC_HeatReq_B4)
    {
        /* Switch: '<S158>/Switch4' incorporates:
         *  Switch: '<S162>/Switch1'
         *  Switch: '<S163>/Switch1'
         */
        if (VeCTRR_b_MinFlowCab_HeatReq)
        {
            /* Switch: '<S158>/Switch5' incorporates:
             *  Lookup_n-D: '<S169>/Vector'
             *  Merge: '<S58>/Merge'
             *  Switch: '<S158>/Switch4'
             *  Switch: '<S163>/Switch1'
             */
            rtb_Switch5 = look1_iflf_binlcapw(VeCTRR_dT_HeatPumpErr_BD, ((const
                float32 *)&(KxCTRR_P_Min_HeatPmpPwr[0])), ((const float32 *)
                &(KtCTRR_P_Min_HeatPmpPwr[0])), 5U);
        }
        else
        {
            /* Switch: '<S158>/Switch5' incorporates:
             *  Lookup_n-D: '<S168>/Vector'
             *  Merge: '<S58>/Merge'
             *  Switch: '<S158>/Switch4'
             *  Switch: '<S163>/Switch1'
             */
            rtb_Switch5 = look1_iflf_binlcapw(VeCTRR_dT_HeatPumpErr_BD, ((const
                float32 *)&(KxCTRR_P_HeatPmpPwr[0])), ((const float32 *)
                &(KtCTRR_P_HeatPmpPwr[0])), 5U);
        }

        /* End of Switch: '<S158>/Switch4' */
    }
    else
    {
        /* Switch: '<S158>/Switch5' incorporates:
         *  Constant: '<S158>/ConstantValue3'
         *  Switch: '<S162>/Switch1'
         *  Switch: '<S163>/Switch1'
         */
        rtb_Switch5 = 0.0F;
    }

    /* End of Switch: '<S158>/Switch5' */

    /* Switch: '<S170>/Switch' incorporates:
     *  Constant: '<S170>/ConstantValue1'
     *  RelationalOperator: '<S170>/RelationalOperator'
     */
    if (rtb_Switch5 >= 0.0F)
    {
        /* Switch: '<S170>/Switch' */
        VeCTRR_P_HeatPmpPwrNeed_B4D = rtb_Switch5;
    }
    else
    {
        /* Switch: '<S170>/Switch' incorporates:
         *  Constant: '<S170>/ConstantValue'
         */
        VeCTRR_P_HeatPmpPwrNeed_B4D = 0.0F;
    }

    /* End of Switch: '<S170>/Switch' */

    /* Outputs for Atomic SubSystem: '<S39>/EdgeRising2' */
    /* Logic: '<S178>/AND' incorporates:
     *  Logic: '<S178>/OR1'
     *  UnitDelay: '<S178>/UnitDelay'
     */
    rtb_Switch1_mq = ((VeCTRR_b_HVAC_HeatReq_B4) &&
                      (!CTRR_ac_DW.UnitDelay_DSTATE_g0));

    /* Update for UnitDelay: '<S178>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_g0 = VeCTRR_b_HVAC_HeatReq_B4;

    /* End of Outputs for SubSystem: '<S39>/EdgeRising2' */

    /* Outputs for Enabled SubSystem: '<S39>/IfActionSubsystem6' incorporates:
     *  EnablePort: '<S183>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S39>/CountDownResetEnabled' */
    /* Switch: '<S177>/Switch1' incorporates:
     *  Constant: '<S177>/ConstantValue'
     *  Logic: '<S177>/AND'
     *  RelationalOperator: '<S177>/GreaterThan'
     *  Switch: '<S177>/Switch2'
     *  UnitDelay: '<S177>/UnitDelay'
     */
    if (rtb_Switch1_mq)
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S184>/Calib'
         */
        rtb_Switch1_jx = KeCTRR_Cnt_HCCTISEnbl_Delay;

        /* Lookup_n-D: '<S199>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
         */
        VeCTRR_K_HCCTISInitGain = look2_iflf_binlcapw
            (CTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k, rtb_Comparison4_tmp, ((
               const float32 *)&(KxCTRR_K_CabHeatTransient[0])), ((const float32
               *)&(KyCTRR_K_CabHeatTransient[0])), ((const float32 *)
              &(KtCTRR_K_CabHeatTransient[0])), CTRR_ac_ConstP.pooled5, 6U);

        /* Gain: '<S200>/Gain' */
        CTRR_ac_B.Gain_i = rtb_VariantMerge_For_Variant_So;

        /* Gain: '<S201>/Gain' */
        CTRR_ac_B.Gain_m = VeCTRR_K_HCCTISInitGain;
    }
    else if ((VeCTRR_b_HVAC_HeatReq_B4) && (((sint32)
               CTRR_ac_DW.UnitDelay_DSTATE_g5) > 0))
    {
        /* Switch: '<S177>/Switch2' incorporates:
         *  Constant: '<S177>/ConstantValue1'
         *  Sum: '<S177>/Subtraction'
         *  Switch: '<S177>/Switch1'
         *  UnitDelay: '<S177>/UnitDelay'
         */
        rtb_Switch1_jx = (uint16)((sint32)(((sint32)
            CTRR_ac_DW.UnitDelay_DSTATE_g5) - 1));
    }
    else
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  Switch: '<S177>/Switch2'
         *  UnitDelay: '<S177>/UnitDelay'
         */
        rtb_Switch1_jx = CTRR_ac_DW.UnitDelay_DSTATE_g5;
    }

    /* End of Switch: '<S177>/Switch1' */
    /* End of Outputs for SubSystem: '<S39>/IfActionSubsystem6' */

    /* RelationalOperator: '<S177>/GreaterThan1' incorporates:
     *  Constant: '<S177>/ConstantValue2'
     */
    VeCTRR_b_HCCTIS_Enbl = (((sint32)rtb_Switch1_jx) > 0);

    /* Update for UnitDelay: '<S177>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_g5 = rtb_Switch1_jx;

    /* End of Outputs for SubSystem: '<S39>/CountDownResetEnabled' */

    /* If: '<S39>/If' */
    rtPrevAction = CTRR_ac_DW.If_ActiveSubsystem;
    rtAction = (sint8)((!VeCTRR_b_HCCTIS_Enbl) ? 1 : 0);
    CTRR_ac_DW.If_ActiveSubsystem = rtAction;
    if (rtAction == 0)
    {
        /* Outputs for IfAction SubSystem: '<S39>/Subsystem3' incorporates:
         *  ActionPort: '<S198>/ActionPort'
         */
        /* Merge: '<S39>/Merge2' incorporates:
         *  Gain: '<S207>/Gain'
         */
        VeCTRR_T_HCCTIS_Tgt_DymPrf = CTRR_ac_B.Gain_i;

        /* End of Outputs for SubSystem: '<S39>/Subsystem3' */
    }
    else
    {
        if (rtAction != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S39>/Subsystem2' incorporates:
             *  ActionPort: '<S197>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S197>/EdgeBi' */
            /* SystemReset for If: '<S39>/If' incorporates:
             *  UnitDelay: '<S202>/UnitDelay'
             *  UnitDelay: '<S203>/UnitDelay'
             *  UnitDelay: '<S206>/UnitDelay'
             */
            CTRR_ac_DW.UnitDelay_DSTATE_nf = false;

            /* End of SystemReset for SubSystem: '<S197>/EdgeBi' */

            /* SystemReset for Atomic SubSystem: '<S197>/CounterResetTriggerEnabled' */
            CTRR_ac_DW.UnitDelay_DSTATE_i = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S202>/EdgeRising' */
            CTRR_ac_DW.UnitDelay_DSTATE_f0 = false;

            /* End of SystemReset for SubSystem: '<S202>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S197>/CounterResetTriggerEnabled' */
            /* End of SystemReset for SubSystem: '<S39>/Subsystem2' */
        }

        /* Outputs for IfAction SubSystem: '<S39>/Subsystem2' incorporates:
         *  ActionPort: '<S197>/ActionPort'
         */
        /* Sum: '<S197>/Add1' incorporates:
         *  Constant: '<S204>/Calib'
         */
        VeCTRR_dT_HCCTISInit_Err = CTRR_ac_B.Gain_i - KeCTRR_T_HCCTIS_InitConst;

        /* Outputs for Atomic SubSystem: '<S197>/EdgeBi' */
        /* RelationalOperator: '<S203>/NotEqual' incorporates:
         *  UnitDelay: '<S203>/UnitDelay'
         */
        rtb_Switch1_mq = !CTRR_ac_DW.UnitDelay_DSTATE_nf;

        /* Update for UnitDelay: '<S203>/UnitDelay' incorporates:
         *  Constant: '<S197>/Constant8'
         */
        CTRR_ac_DW.UnitDelay_DSTATE_nf = true;

        /* End of Outputs for SubSystem: '<S197>/EdgeBi' */

        /* Outputs for Atomic SubSystem: '<S197>/CounterResetTriggerEnabled' */
        /* Outputs for Atomic SubSystem: '<S202>/EdgeRising' */
        /* Logic: '<S206>/OR1' incorporates:
         *  UnitDelay: '<S206>/UnitDelay'
         */
        rtb_AND_hu = !CTRR_ac_DW.UnitDelay_DSTATE_f0;

        /* Update for UnitDelay: '<S206>/UnitDelay' */
        CTRR_ac_DW.UnitDelay_DSTATE_f0 = rtb_Switch1_mq;

        /* Switch: '<S202>/Switch1' incorporates:
         *  Logic: '<S206>/AND'
         */
        if (rtb_Switch1_mq && rtb_AND_hu)
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S202>/ConstantValue2'
             */
            rtb_VariantMerge_For_Variant_So = 0.0F;
        }
        else
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S202>/ConstantValue1'
             *  Sum: '<S202>/Subtraction'
             *  UnitDelay: '<S202>/UnitDelay'
             */
            rtb_VariantMerge_For_Variant_So = CTRR_ac_DW.UnitDelay_DSTATE_i +
                1.0F;
        }

        /* End of Switch: '<S202>/Switch1' */
        /* End of Outputs for SubSystem: '<S202>/EdgeRising' */

        /* Update for UnitDelay: '<S202>/UnitDelay' */
        CTRR_ac_DW.UnitDelay_DSTATE_i = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S197>/CounterResetTriggerEnabled' */

        /* Math: '<S197>/MathFunction' incorporates:
         *  Product: '<S197>/Product2'
         *
         * About '<S197>/MathFunction':
         *  Operator: exp
         */
        VeCTRR_dT_HCCTISInitGain_Err = expf(rtb_VariantMerge_For_Variant_So *
            CTRR_ac_B.Gain_m);

        /* Sum: '<S197>/Add2' incorporates:
         *  Constant: '<S204>/Calib'
         *  Product: '<S197>/Product1'
         */
        VeCTRR_dT_HCCTIS_Calc = (VeCTRR_dT_HCCTISInitGain_Err *
            VeCTRR_dT_HCCTISInit_Err) + KeCTRR_T_HCCTIS_InitConst;

        /* Merge: '<S39>/Merge2' incorporates:
         *  Gain: '<S205>/Gain'
         *  MinMax: '<S197>/MinMax'
         */
        VeCTRR_T_HCCTIS_Tgt_DymPrf = fminf(rtb_Switch2, VeCTRR_dT_HCCTIS_Calc);

        /* End of Outputs for SubSystem: '<S39>/Subsystem2' */
    }

    /* End of If: '<S39>/If' */

    /* Switch: '<S39>/Switch3' incorporates:
     *  Constant: '<S194>/Calib'
     *  Logic: '<S39>/Logical'
     *  Logic: '<S39>/Logical1'
     *  Logic: '<S39>/Logical2'
     *  Logic: '<S39>/Logical3'
     */
    if ((((!VeCTRR_b_MinFlowCab_HeatReq) && (!VeCTRR_b_OvrdHCCTISTgt_Amb)) &&
            (VeCTRR_b_ECH_HTAP_RA_Faults)) || (KeCTRR_b_HtrCorTmpInTgtSel))
    {
        /* Switch: '<S39>/Switch3' */
        VeCTRR_T_HCCTIS_Tgt_Ovrd = rtb_Switch2;
    }
    else
    {
        /* Switch: '<S39>/Switch3' */
        VeCTRR_T_HCCTIS_Tgt_Ovrd = VeCTRR_T_HCCTIS_Tgt_DymPrf;
    }

    /* End of Switch: '<S39>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S208>/Hysteresis' */
    /* Switch: '<S208>/Switch1' incorporates:
     *  Gain: '<S214>/Gain'
     *  SignalConversion generated from: '<S4>/VariantSource1'
     *  Switch: '<S209>/Switch2'
     */
#if Rte_SysCon_Variant_CTRR_1

    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S212>/Calib'
     *  RelationalOperator: '<S210>/GreaterThan'
     */
    if (CTRR_ac_B.TmpSignalConversionAtTmpVM_F_k5 >
            KeCTRR_Pct_RearCabHtReq_AirHtrPwrThRSP)
    {
        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S210>/ConstantValue'
         */
        rtb_Switch1_a = true;
    }
    else
    {
        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S211>/Calib'
         *  RelationalOperator: '<S210>/GreaterThan1'
         *  UnitDelay: '<S210>/UnitDelay'
         */
        rtb_Switch1_a = ((CTRR_ac_B.TmpSignalConversionAtTmpVM_F_k5 >=
                          KeCTRR_Pct_RearCabHtReq_AirHtrPwrThLSP) &&
                         (CTRR_ac_DW.UnitDelay_DSTATE_n));
    }

    /* End of Switch: '<S210>/Switch1' */

    /* Update for UnitDelay: '<S210>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_a;
    if (VeCTRR_b_RS_N_Or_NrmlPerWp_AD)
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S208>/FALSEConstant1'
         */
        VeCTRR_b_RearHeaterReq_BD = false;
    }
    else
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S213>/Calib'
         *  Logic: '<S208>/Logical1'
         *  RelationalOperator: '<S208>/Comparison2'
         */
        VeCTRR_b_RearHeaterReq_BD = (rtb_Switch1_a || (VeCTRR_Pct_RrBlwrCmd_AD >=
            KeCTRR_Pct_RrBlwrCmd_Min));
    }

    /* Gain: '<S214>/Gain' */
    rtb_Switch1_a = VeCTRR_b_RearHeaterReq_BD;
    if (VeCTRR_b_RS_N_Or_NrmlPerWp_AD)
    {
        /* VariantMerge generated from: '<S4>/VariantSource1' incorporates:
         *  Constant: '<S209>/ConstantValue'
         */
        rtb_Vector_nv = 0.0F;
    }
    else
    {
        /* Lookup_n-D: '<S217>/Vector' incorporates:
         *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
         */
        rtb_Vector_nv = look1_iflf_binlcapw
            (CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_h, ((const float32 *)
              &(KxCTRR_P_RearHeaterMaxPwr[0])), ((const float32 *)
              &(KtCTRR_P_RearHeaterMaxPwr[0])), 8U);

        /* Switch: '<S209>/Switch1' incorporates:
         *  Logic: '<S209>/Logical'
         *  Logic: '<S209>/Logical1'
         */
        if ((VeCTRR_b_RearHeaterReq_BD) &&
                (!CTRR_ac_B.VM_Conditional_Signal_TmpVM_F_f))
        {
            /* Switch: '<S209>/Switch1' incorporates:
             *  Lookup_n-D: '<S216>/Vector'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtCTRR_MedTEHInport35'
             */
            rtb_VariantMerge_For_Variant_So = look1_iflf_binlcapw
                (CTRR_ac_B.TmpSignalConversionAtTmpVM_F_k5, ((const float32 *)
                  &(KxCTRR_P_RearCabAirHtrPwrTgt[0])), ((const float32 *)
                  &(KtCTRR_P_RearCabAirHtrPwrTgt[0])), 8U);
        }
        else
        {
            /* Switch: '<S209>/Switch1' incorporates:
             *  Constant: '<S209>/ConstantValue2'
             */
            rtb_VariantMerge_For_Variant_So = 0.0F;
        }

        /* End of Switch: '<S209>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S209>/Limiter' */
        /* Switch: '<S218>/Switch1' incorporates:
         *  RelationalOperator: '<S218>/RelationalOperator'
         */
        if (rtb_Vector_nv >= rtb_VariantMerge_For_Variant_So)
        {
            /* Switch: '<S218>/Switch1' */
            rtb_Vector_nv = rtb_VariantMerge_For_Variant_So;
        }

        /* End of Switch: '<S218>/Switch1' */

        /* Switch: '<S218>/Switch' incorporates:
         *  Constant: '<S215>/Calib'
         *  RelationalOperator: '<S218>/RelationalOperator1'
         */
        if (rtb_Vector_nv <= KeCTRR_P_RearCabPwrNeed_Min)
        {
            /* VariantMerge generated from: '<S4>/VariantSource1' */
            rtb_Vector_nv = KeCTRR_P_RearCabPwrNeed_Min;
        }

        /* End of Switch: '<S218>/Switch' */
        /* End of Outputs for SubSystem: '<S209>/Limiter' */
    }

#else

    /* VariantMerge generated from: '<S4>/VariantSource1' incorporates:
     *  Constant: '<S4>/ConstantValue'
     *  SignalConversion generated from: '<S4>/VariantSource1'
     */
    rtb_Vector_nv = 0.0F;

#endif

    /* End of Switch: '<S208>/Switch1' */
    /* End of Outputs for SubSystem: '<S208>/Hysteresis' */

    /* SignalConversion generated from: '<S4>/VariantSource1' */
    VeCTRR_P_RearHeaterPwrNeed = rtb_Vector_nv;

    /* SignalConversion generated from: '<S4>/VariantSource' */
#if Rte_SysCon_Variant_CTRR_1

    /* VariantMerge generated from: '<S4>/VariantSource' */
    CTRR_ac_B.VariantMerge_For_Variant_Source = rtb_Switch1_a;

#else

    /* VariantMerge generated from: '<S4>/VariantSource' incorporates:
     *  Constant: '<S4>/FALSEConstant'
     *  SignalConversion generated from: '<S4>/VariantSource'
     */
    CTRR_ac_B.VariantMerge_For_Variant_Source = false;

#endif

    /* End of SignalConversion generated from: '<S4>/VariantSource' */

    /* Update for UnitDelay: '<S60>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_l = VeCTRR_b_AmbBlwrCab_HeatAlwd;

    /* Update for UnitDelay: '<S64>/UnitDelay1' */
    CTRR_ac_DW.UnitDelay1_DSTATE = VeCTRR_Pct_FrtBlwrCmd_AD;

    /* Update for UnitDelay: '<S64>/UnitDelay2' */
    CTRR_ac_DW.UnitDelay2_DSTATE = VeCTRR_Pct_RrBlwrCmd_AD;

    /* Update for UnitDelay: '<S65>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_lr = VeCTRR_b_HardCabHeat_Req0;

    /* Update for UnitDelay: '<S76>/UnitDelay1' */
    CTRR_ac_DW.UnitDelay1_DSTATE_k = rtb_Switch2;

    /* Update for UnitDelay: '<S76>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE = VeCTRR_Pct_FrtBlwrCmd_AD;

    /* Update for UnitDelay: '<S76>/UnitDelay2' */
    CTRR_ac_DW.UnitDelay2_DSTATE_a = VeCTRR_Pct_RrBlwrCmd_AD;

    /* Update for UnitDelay: '<S135>/UnitDelay' */
    CTRR_ac_DW.UnitDelay_DSTATE_m = VeCTRR_b_HrshCabRq_KeyChngOn;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CTRR_FUNC'
     */
    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S16>/Calib'
     */
    if (KeCTRR_b_CabCoolPwrNeed_SD)
    {
        /* Outport: '<Root>/VeCTRR_P_CabCoolPwrNeed' incorporates:
         *  Constant: '<S9>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_P_CabCoolPwrNeed'
         */
        (void)Rte_Write_VeCTRR_P_CabCoolPwrNeed_Value(KeCTRR_P_CabCoolPwrNeed_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_P_CabCoolPwrNeed' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_P_CabCoolPwrNeed'
         */
        (void)Rte_Write_VeCTRR_P_CabCoolPwrNeed_Value
            (VeCTRR_P_CabCoolPwrNeed_B4D);
    }

    /* End of Switch: '<S6>/Switch5' */

    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S20>/Calib'
     */
    if (KeCTRR_b_ErrorBasedPwr_SD)
    {
        /* Outport: '<Root>/VeCTRR_P_ErrBasedHeatPwr' incorporates:
         *  Constant: '<S10>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_P_ErrBasedHeatPwr'
         */
        (void)Rte_Write_VeCTRR_P_ErrBasedHeatPwr_Value(KeCTRR_P_ErrorBasedPwr_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_P_ErrBasedHeatPwr' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_P_ErrBasedHeatPwr'
         */
        (void)Rte_Write_VeCTRR_P_ErrBasedHeatPwr_Value(VeCTRR_P_ErrorBasedPwr);
    }

    /* End of Switch: '<S6>/Switch6' */

    /* Switch: '<S6>/Switch12' incorporates:
     *  Constant: '<S26>/Calib'
     */
    if (KeCTRR_b_HeatPmpPwrNeed_SD)
    {
        /* Outport: '<Root>/VeCTRR_P_HeatPmpPwrNeed' incorporates:
         *  Constant: '<S11>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_P_HeatPmpPwrNeed'
         */
        (void)Rte_Write_VeCTRR_P_HeatPmpPwrNeed_Value(KeCTRR_P_HeatPmpPwrNeed_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_P_HeatPmpPwrNeed' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_P_HeatPmpPwrNeed'
         */
        (void)Rte_Write_VeCTRR_P_HeatPmpPwrNeed_Value
            (VeCTRR_P_HeatPmpPwrNeed_B4D);
    }

    /* End of Switch: '<S6>/Switch12' */

    /* Switch: '<S6>/Switch10' incorporates:
     *  Constant: '<S29>/Calib'
     */
    if (KeCTRR_b_RearHeaterPwrReq_SD)
    {
        /* Outport: '<Root>/VeCTRR_P_RearHeaterPwrReq' incorporates:
         *  Constant: '<S12>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_P_RearHeaterPwrReq'
         */
        (void)Rte_Write_VeCTRR_P_RearHeaterPwrReq_Value
            (KeCTRR_P_RearHeaterPwrReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_P_RearHeaterPwrReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_P_RearHeaterPwrReq'
         */
        (void)Rte_Write_VeCTRR_P_RearHeaterPwrReq_Value
            (VeCTRR_P_RearHeaterPwrNeed);
    }

    /* End of Switch: '<S6>/Switch10' */

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S21>/Calib'
     */
    if (KeCTRR_b_HCCTISTgtArb_SD)
    {
        /* Outport: '<Root>/VeCTRR_T_HtrCoreTmp_Tgt_Arb' incorporates:
         *  Constant: '<S13>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_T_HtrCoreTmp_Tgt_Arb'
         */
        (void)Rte_Write_VeCTRR_T_HtrCoreTmp_Tgt_Arb_Value
            (KeCTRR_T_HCCTISTgtArb_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_T_HtrCoreTmp_Tgt_Arb' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_T_HtrCoreTmp_Tgt_Arb'
         */
        (void)Rte_Write_VeCTRR_T_HtrCoreTmp_Tgt_Arb_Value
            (VeCTRR_T_HCCTIS_Tgt_Ovrd);
    }

    /* End of Switch: '<S6>/Switch8' */

    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S15>/Calib'
     */
    if (KeCTRR_b_AmbientChillCond_SD)
    {
        /* Outport: '<Root>/VeCTRR_b_AmbientChillCond' incorporates:
         *  Constant: '<S14>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_b_AmbientChillCond'
         */
        (void)Rte_Write_VeCTRR_b_AmbientChillCond_Value
            (KeCTRR_b_AmbientChillCond_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_b_AmbientChillCond' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_b_AmbientChillCond'
         */
        (void)Rte_Write_VeCTRR_b_AmbientChillCond_Value
            (VeCTRR_b_OvrdHCCTISTgt_Amb);
    }

    /* End of Switch: '<S6>/Switch4' */

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S18>/Calib'
     */
    if (KeCTRR_b_CabPriorityHigh_SD)
    {
        /* Outport: '<Root>/VeCTRR_b_CabPriorityHigh' incorporates:
         *  Constant: '<S17>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_b_CabPriorityHigh'
         */
        (void)Rte_Write_VeCTRR_b_CabPriorityHigh_Value
            (KeCTRR_b_CabPriorityHigh_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_b_CabPriorityHigh' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_b_CabPriorityHigh'
         */
        (void)Rte_Write_VeCTRR_b_CabPriorityHigh_Value
            (VeCTRR_b_CabPriorityHigh_B4D);
    }

    /* End of Switch: '<S6>/Switch3' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S23>/Calib'
     */
    if (KeCTRR_b_HVAC_HeatReq_SD)
    {
        /* Outport: '<Root>/VeCTRR_b_HVAC_HeatReq' incorporates:
         *  Constant: '<S22>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_b_HVAC_HeatReq'
         */
        (void)Rte_Write_VeCTRR_b_HVAC_HeatReq_Value(KeCTRR_b_HVAC_HeatReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_b_HVAC_HeatReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_b_HVAC_HeatReq'
         */
        (void)Rte_Write_VeCTRR_b_HVAC_HeatReq_Value(VeCTRR_b_HVAC_HeatReq_B4);
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S25>/Calib'
     */
    if (KeCTRR_b_HardCabHeat_Req_SD)
    {
        /* Outport: '<Root>/VeCTRR_b_HardCabHeat_Req' incorporates:
         *  Constant: '<S24>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_b_HardCabHeat_Req'
         */
        (void)Rte_Write_VeCTRR_b_HardCabHeat_Req_Value
            (KeCTRR_b_HardCabHeat_Req_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_b_HardCabHeat_Req' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_b_HardCabHeat_Req'
         */
        (void)Rte_Write_VeCTRR_b_HardCabHeat_Req_Value
            (VeCTRR_b_HardCabHeat_Req_B4D);
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch13' incorporates:
     *  Constant: '<S28>/Calib'
     */
    if (KeCTRR_b_MinFlowCabHeatReq_SD)
    {
        /* Outport: '<Root>/VeCTRR_b_MinFlowCabHeatReq' incorporates:
         *  Constant: '<S27>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_b_MinFlowCabHeatReq'
         */
        (void)Rte_Write_VeCTRR_b_MinFlowCabHeatReq_Value
            (KeCTRR_b_MinFlowCabHeatReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_b_MinFlowCabHeatReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_b_MinFlowCabHeatReq'
         */
        (void)Rte_Write_VeCTRR_b_MinFlowCabHeatReq_Value
            (VeCTRR_b_MinFlowCab_HeatReq);
    }

    /* End of Switch: '<S6>/Switch13' */

    /* Switch: '<S6>/Switch9' incorporates:
     *  Constant: '<S31>/Calib'
     */
    if (KeCTRR_b_RearHeaterReq_SD)
    {
        /* Outport: '<Root>/VeCTRR_b_RearHeaterReq' incorporates:
         *  Constant: '<S30>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_b_RearHeaterReq'
         */
        (void)Rte_Write_VeCTRR_b_RearHeaterReq_Value(KeCTRR_b_RearHeaterReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_b_RearHeaterReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_b_RearHeaterReq'
         */
        (void)Rte_Write_VeCTRR_b_RearHeaterReq_Value
            (CTRR_ac_B.VariantMerge_For_Variant_Source);
    }

    /* End of Switch: '<S6>/Switch9' */

    /* Switch: '<S6>/Switch7' incorporates:
     *  Constant: '<S33>/Calib'
     */
    if (KeCTRR_b_TrueCabReq_SD)
    {
        /* Outport: '<Root>/VeCTRR_b_TrueCab_HeatReq' incorporates:
         *  Constant: '<S32>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_b_TrueCab_HeatReq'
         */
        (void)Rte_Write_VeCTRR_b_TrueCab_HeatReq_Value(KeCTRR_b_TrueCabReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_b_TrueCab_HeatReq' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_b_TrueCab_HeatReq'
         */
        (void)Rte_Write_VeCTRR_b_TrueCab_HeatReq_Value
            (VeCTRR_b_TrueCab_HeatReq_B4D);
    }

    /* End of Switch: '<S6>/Switch7' */

    /* Outport: '<Root>/VeCTRR_b_TurnOffEng_CabComfAchvd' incorporates:
     *  Gain: '<S7>/Gain'
     *  SignalConversion generated from: '<S1>/VeCTRR_b_TurnOffEng_CabComfAchvd'
     */
    (void)Rte_Write_VeCTRR_b_TurnOffEng_CabComfAchvd_Value(rtb_Comparison4);

    /* Switch: '<S6>/Switch11' incorporates:
     *  Constant: '<S19>/Calib'
     */
    if (KeCTRR_b_ECHInlet_HCCTISTgt_Err_SD)
    {
        /* Outport: '<Root>/VeCTRR_dT_HeatPumpErr' incorporates:
         *  Constant: '<S34>/Calib'
         *  SignalConversion generated from: '<S1>/VeCTRR_dT_ECHInlet_HCCTISTgt_Err'
         */
        (void)Rte_Write_VeCTRR_dT_HeatPumpErr_Value
            (KeCTRR_dT_ECHInlet_HCCTISTgt_Err_D);
    }
    else
    {
        /* Outport: '<Root>/VeCTRR_dT_HeatPumpErr' incorporates:
         *  SignalConversion generated from: '<S1>/VeCTRR_dT_ECHInlet_HCCTISTgt_Err'
         */
        (void)Rte_Write_VeCTRR_dT_HeatPumpErr_Value(VeCTRR_dT_HeatPumpErr_BD);
    }

    /* End of Switch: '<S6>/Switch11' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Control_100ms'
     */
    /* Outport: '<Root>/VeCTRR_dT_HtrCorTmp_Err' incorporates:
     *  SignalConversion generated from: '<S1>/VeCTRR_dT_HtrCorTmp_Err1'
     */
    (void)Rte_Write_VeCTRR_dT_HtrCorTmp_Err_Value(rtb_Comparison4_tmp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CTRR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CTRR_4

FUNC(void, CTRR_CODE) CTRR_PwrOn(void)
{

#if Rte_SysCon_Variant_CTRR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
    /* Outputs for Function Call SubSystem: '<Root>/CTRR_PwrOn' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CTRR_NF_DIAL'
     */
    /* SignalConversion generated from: '<S263>/VeCTRR_b_HVAC_HeatReq' incorporates:
     *  Constant: '<S271>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_HVAC_H = KeCTRR_b_HVAC_HeatReq_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_b_HardCabHeat_Req' incorporates:
     *  Constant: '<S273>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_HardCa = KeCTRR_b_HardCabHeat_Req_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_b_CabPriorityHigh' incorporates:
     *  Constant: '<S270>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_CabPri = KeCTRR_b_CabPriorityHigh_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_P_CabCoolPwrNeed' incorporates:
     *  Constant: '<S264>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_CabCoo = KeCTRR_P_CabCoolPwrNeed_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_b_TurnOffEng_CabComfAchvd' incorporates:
     *  Constant: '<S276>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_TurnOf =
        KeCTRR_b_TurnOffEng_CabComfAchvd_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_dT_HtrCorTmp_Err' incorporates:
     *  Constant: '<S278>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_dT_HtrCo = KeCTRR_dT_HtrCorTmp_Err_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_P_ErrBasedHeatPwr' incorporates:
     *  Constant: '<S265>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_ErrBas = KeCTRR_P_ErrBasedHeatPwr_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_b_TrueCab_HeatReq' incorporates:
     *  Constant: '<S272>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_TrueCa = KeCTRR_b_HVAC_TrueHeatReq_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_T_HtrCoreTmp_Tgt_Arb' incorporates:
     *  Constant: '<S268>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_T_HtrCor = KeCTRR_T_HCCTISTgtArb_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_b_RearHeaterReq' incorporates:
     *  Constant: '<S275>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_RearHe = KeCTRR_b_RearHeaterReq_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_P_RearHeaterPwrReq' incorporates:
     *  Constant: '<S267>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_RearHe = KeCTRR_P_RearHeaterPwrReq_NFdial;

    /* SignalConversion generated from: '<S263>/ECHInlet_HCCTISTgt_Err_NF' incorporates:
     *  Constant: '<S277>/Calib'
     */
    CTRR_ac_B.OutportBufferForECHInlet_HCCTIS = KeCTRR_dT_HeatPumpErr_NF;

    /* SignalConversion generated from: '<S263>/VeCTRR_P_HeatPmpPwrNeed' incorporates:
     *  Constant: '<S266>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_HeatPm = KeCTRR_P_HeatPmpPwrNeed_NFdial;

    /* SignalConversion generated from: '<S263>/VeCTRR_b_MinFlowCabHeatReq' incorporates:
     *  Constant: '<S274>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_MinFlo = KeCTRR_b_MinFlowCabHeatReq_NF;

    /* SignalConversion generated from: '<S263>/VeCTRR_b_AmbientChillCond' incorporates:
     *  Constant: '<S269>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_Ambien = KeCTRR_b_AmbientChillCond_Nf;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCTRR_dT_HeatPumpErr' incorporates:
     *  SignalConversion generated from: '<S2>/ECHInlet_HCCTISTgt_Err_NF'
     */
    (void)Rte_Write_VeCTRR_dT_HeatPumpErr_Value
        (CTRR_ac_B.OutportBufferForECHInlet_HCCTIS);

    /* Outport: '<Root>/VeCTRR_P_CabCoolPwrNeed' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_P_CabCoolPwrNeed'
     */
    (void)Rte_Write_VeCTRR_P_CabCoolPwrNeed_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_P_CabCoo);

    /* Outport: '<Root>/VeCTRR_P_ErrBasedHeatPwr' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_P_ErrBasedHeatPwr'
     */
    (void)Rte_Write_VeCTRR_P_ErrBasedHeatPwr_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_P_ErrBas);

    /* Outport: '<Root>/VeCTRR_P_HeatPmpPwrNeed' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_P_HeatPmpPwrNeed'
     */
    (void)Rte_Write_VeCTRR_P_HeatPmpPwrNeed_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_P_HeatPm);

    /* Outport: '<Root>/VeCTRR_P_RearHeaterPwrReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_P_RearHeaterPwrReq'
     */
    (void)Rte_Write_VeCTRR_P_RearHeaterPwrReq_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_P_RearHe);

    /* Outport: '<Root>/VeCTRR_T_HtrCoreTmp_Tgt_Arb' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_T_HtrCoreTmp_Tgt_Arb'
     */
    (void)Rte_Write_VeCTRR_T_HtrCoreTmp_Tgt_Arb_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_T_HtrCor);

    /* Outport: '<Root>/VeCTRR_b_AmbientChillCond' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_AmbientChillCond'
     */
    (void)Rte_Write_VeCTRR_b_AmbientChillCond_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_Ambien);

    /* Outport: '<Root>/VeCTRR_b_CabPriorityHigh' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_CabPriorityHigh'
     */
    (void)Rte_Write_VeCTRR_b_CabPriorityHigh_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_CabPri);

    /* Outport: '<Root>/VeCTRR_b_HVAC_HeatReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_HVAC_HeatReq'
     */
    (void)Rte_Write_VeCTRR_b_HVAC_HeatReq_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_HVAC_H);

    /* Outport: '<Root>/VeCTRR_b_HardCabHeat_Req' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_HardCabHeat_Req'
     */
    (void)Rte_Write_VeCTRR_b_HardCabHeat_Req_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_HardCa);

    /* Outport: '<Root>/VeCTRR_b_MinFlowCabHeatReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_MinFlowCabHeatReq'
     */
    (void)Rte_Write_VeCTRR_b_MinFlowCabHeatReq_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_MinFlo);

    /* Outport: '<Root>/VeCTRR_b_RearHeaterReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_RearHeaterReq'
     */
    (void)Rte_Write_VeCTRR_b_RearHeaterReq_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_RearHe);

    /* Outport: '<Root>/VeCTRR_b_TrueCab_HeatReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_TrueCab_HeatReq'
     */
    (void)Rte_Write_VeCTRR_b_TrueCab_HeatReq_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_TrueCa);

    /* Outport: '<Root>/VeCTRR_b_TurnOffEng_CabComfAchvd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_b_TurnOffEng_CabComfAchvd'
     */
    (void)Rte_Write_VeCTRR_b_TurnOffEng_CabComfAchvd_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_b_TurnOf);

    /* Outport: '<Root>/VeCTRR_dT_HtrCorTmp_Err' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTRR_dT_HtrCorTmp_Err'
     */
    (void)Rte_Write_VeCTRR_dT_HtrCorTmp_Err_Value
        (CTRR_ac_B.OutportBufferForVeCTRR_dT_HtrCo);

    /* End of Outputs for SubSystem: '<Root>/CTRR_PwrOn' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, CTRR_CODE) CTRR_ac_Init(void)
{

#if Rte_SysCon_Variant_CTRR_3

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/CTRR_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Control_100ms'
     */
    /* Start for If: '<S39>/If' */
    CTRR_ac_DW.If_ActiveSubsystem = -1;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/CTRR_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

#if Rte_SysCon_Variant_CTRR_4

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/CTRR_PwrOn' */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CTRR_NF_DIAL'
     */
    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_HVAC_HeatReq' incorporates:
     *  Constant: '<S271>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_HVAC_H = KeCTRR_b_HVAC_HeatReq_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_HardCabHeat_Req' incorporates:
     *  Constant: '<S273>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_HardCa = KeCTRR_b_HardCabHeat_Req_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_CabPriorityHigh' incorporates:
     *  Constant: '<S270>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_CabPri = KeCTRR_b_CabPriorityHigh_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_P_CabCoolPwrNeed' incorporates:
     *  Constant: '<S264>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_CabCoo = KeCTRR_P_CabCoolPwrNeed_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_TurnOffEng_CabComfAchvd' incorporates:
     *  Constant: '<S276>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_TurnOf =
        KeCTRR_b_TurnOffEng_CabComfAchvd_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_dT_HtrCorTmp_Err' incorporates:
     *  Constant: '<S278>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_dT_HtrCo = KeCTRR_dT_HtrCorTmp_Err_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_P_ErrBasedHeatPwr' incorporates:
     *  Constant: '<S265>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_ErrBas = KeCTRR_P_ErrBasedHeatPwr_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_TrueCab_HeatReq' incorporates:
     *  Constant: '<S272>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_TrueCa = KeCTRR_b_HVAC_TrueHeatReq_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_T_HtrCoreTmp_Tgt_Arb' incorporates:
     *  Constant: '<S268>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_T_HtrCor = KeCTRR_T_HCCTISTgtArb_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_RearHeaterReq' incorporates:
     *  Constant: '<S275>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_RearHe = KeCTRR_b_RearHeaterReq_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_P_RearHeaterPwrReq' incorporates:
     *  Constant: '<S267>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_RearHe = KeCTRR_P_RearHeaterPwrReq_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/ECHInlet_HCCTISTgt_Err_NF' incorporates:
     *  Constant: '<S277>/Calib'
     */
    CTRR_ac_B.OutportBufferForECHInlet_HCCTIS = KeCTRR_dT_HeatPumpErr_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_P_HeatPmpPwrNeed' incorporates:
     *  Constant: '<S266>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_P_HeatPm = KeCTRR_P_HeatPmpPwrNeed_NFdial;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_MinFlowCabHeatReq' incorporates:
     *  Constant: '<S274>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_MinFlo = KeCTRR_b_MinFlowCabHeatReq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S263>/VeCTRR_b_AmbientChillCond' incorporates:
     *  Constant: '<S269>/Calib'
     */
    CTRR_ac_B.OutportBufferForVeCTRR_b_Ambien = KeCTRR_b_AmbientChillCond_Nf;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/CTRR_PwrOn' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
