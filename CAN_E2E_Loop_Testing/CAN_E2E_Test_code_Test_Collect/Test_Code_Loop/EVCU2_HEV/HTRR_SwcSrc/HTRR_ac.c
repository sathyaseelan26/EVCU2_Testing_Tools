/*
 * File: HTRR_ac.c
 *
 * Code generated for Simulink model 'HTRR_ac'.
 *
 * Model version                  : 9.48
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:56:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HTRR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_Htr2PwrLimit_DVC_Lim_Dial
    = 0;                               /* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_Htr2PwrLimit_DVC_Lim_Slct
    = 0;                               /* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_Htr3PwrLimit_DVC_Lim_Dial
    = 0;                               /* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_Htr3PwrLimit_DVC_Lim_Slct
    = 0;                               /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_Htr4PwrLimit_DVC_Lim_Dial
    = 0;                               /* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_Htr4PwrLimit_DVC_Lim_Slct
    = 0;                               /* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_HtrPwrLimit_DVC_Lim_Dial =
    0;                                 /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRF_b_HtrPwrLimit_DVC_Lim_Slct =
    0;                                 /* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(uint16, HTRR_VAR_INIT) KeHTRR_Cnt_HeaterDsbl_UnlckTime =
    2U;                                /* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(sint16, HTRR_VAR_INIT) KeHTRR_Cnt_Htr_Unlck_RstSts_D = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(uint16, HTRR_VAR_INIT) KeHTRR_Cnt_Htr_Unlcksts_Waittime =
    7U;                                /* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(uint8, HTRR_VAR_INIT) KeHTRR_Cnt_Htr_UnlkCntrLmt = 2U;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVAC_HtrPwr_D = 0.0F;/* Referenced by: '<S334>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVAC_HtrPwr_INIT = 0.0F;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVAC_HtrPwr_NF = 0.0F;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVCHtr2Pwr_W_2_kW =
    1000.0F;                           /* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVCHtr3Pwr_W_2_kW =
    1000.0F;                           /* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVCHtr4Pwr_W_2_kW =
    1000.0F;                           /* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVCHtrPwr_W_2_kW =
    1000.0F;                           /* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr2PwrAct_Dial_NF =
    0.0F;                              /* Referenced by: '<S465>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr2PwrAct_INIT =
    0.0F;                              /* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr2PwrLimit_D = 0.0F;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr2PwrLimit_Dial_NF =
    0.0F;                              /* Referenced by: '<S467>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr2PwrLimit_INIT =
    0.0F;                              /* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr2PwrMax = 3000.0F;/* Referenced by:
                                                                      * '<S372>/Calib'
                                                                      * '<S378>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr3PwrAct_Dial_NF =
    0.0F;                              /* Referenced by: '<S479>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr3PwrAct_INIT =
    0.0F;                              /* Referenced by: '<S480>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr3PwrAct_W_INIT =
    0.0F;                              /* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr3PwrAct_W_NF_Dial =
    0.0F;                              /* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr3PwrLimit_D = 0.0F;/* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr3PwrLimit_Dial_NF =
    0.0F;                              /* Referenced by: '<S483>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr3PwrLimit_INIT =
    0.0F;                              /* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr4PwrAct_Dial_NF =
    0.0F;                              /* Referenced by: '<S493>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr4PwrAct_INIT =
    0.0F;                              /* Referenced by: '<S494>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr4PwrAct_W_INIT =
    0.0F;                              /* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr4PwrAct_W_NF_Dial =
    0.0F;                              /* Referenced by: '<S496>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr4PwrLimit_D = 0.0F;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr4PwrLimit_Dial_NF =
    0.0F;                              /* Referenced by: '<S497>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_Htr4PwrLimit_INIT =
    0.0F;                              /* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_HtrPwrAct_Dial_NF =
    0.0F;                              /* Referenced by: '<S445>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_HtrPwrAct_INIT = 0.0F;/* Referenced by: '<S446>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_HtrPwrAct_W_INIT =
    0.0F;                              /* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_HtrPwrAct_W_NF_Dial =
    0.0F;                              /* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_HtrPwrLimit_D = 0.0F;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_HtrPwrLimit_Dial_NF =
    0.0F;                              /* Referenced by: '<S449>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HVC_HtrPwrLimit_INIT =
    0.0F;                              /* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr2PwrTgt_Flt = 0.0F;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr2PwrTgt_Max = 7000.0F;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr2PwrTgt_Min = 0.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr2PwrTgt_MinOnReq =
    0.0F;                              /* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr2PwrTgt_Off = 0.0F;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr2PwrTgt_RtLimDown =
    0.0F;                              /* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr2PwrTgt_RtLimUp = 0.0F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_DVC_Lvl1 =
    0.0F;                              /* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_DVC_Lvl2 =
    0.0F;                              /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_DVC_Lvl3 =
    0.0F;                              /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_DVC_Zero =
    0.0F;                              /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Flt = 0.0F;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Lvl1 = 0.0F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Lvl2 = 0.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Lvl3 = 0.0F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Max = 7000.0F;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Min = 0.0F;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_MinOnReq =
    0.0F;                              /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Off = 0.0F;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_RtLimDown =
    0.0F;                              /* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_RtLimUp = 0.0F;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr3PwrTgt_Zero = 0.0F;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr4PwrTgt_Flt = 0.0F;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr4PwrTgt_Max = 7000.0F;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr4PwrTgt_Min = 0.0F;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr4PwrTgt_MinOnReq =
    0.0F;                              /* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr4PwrTgt_Off = 0.0F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr4PwrTgt_RtLimDown =
    0.0F;                              /* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_Htr4PwrTgt_RtLimUp = 0.0F;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HtrPwrTgt_Flt = 0.0F;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HtrPwrTgt_Max = 7000.0F;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HtrPwrTgt_Min = 0.0F;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HtrPwrTgt_MinOnReq = 0.0F;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HtrPwrTgt_Off = 0.0F;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HtrPwrTgt_RtLimDown =
    0.0F;                              /* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_P_HtrPwrTgt_RtLimUp = 0.0F;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_Pct_HVC_Htr2PctFctr =
    100.0F;                            /* Referenced by:
                                        * '<S373>/Calib'
                                        * '<S379>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_Pct_HVC_Htr2PwrAct_Dial_NF =
    0.0F;                              /* Referenced by: '<S469>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_Pct_HVC_Htr2PwrAct_INIT =
    0.0F;                              /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT)
    KeHTRR_Pct_HVC_Htr2PwrLimit_Dial_NF = 0.0F;/* Referenced by: '<S471>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_Pct_HVC_Htr2PwrLimit_INIT =
    0.0F;                              /* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntInTemp_UnlckLimit =
    0.0F;                              /* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_DVC_Test =
    70.0F;                             /* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_Flt = 0.0F;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_Max = 150.0F;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_Min = 0.0F;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_MinOnReq =
    0.0F;                              /* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_Off = 0.0F;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_RtLimDown =
    0.0F;                              /* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_ClntTempTgt_RtLimUp =
    0.0F;                              /* Referenced by: '<S213>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_EstAmbAirTemp_INIT =
    25.0F;                             /* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_AmbTemp_Dial_NF =
    0.0F;                              /* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr2TempTgt_D = 0.0F;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr2TempTgt_Dial_NF =
    0.0F;                              /* Referenced by: '<S473>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr2TempTgt_INIT =
    25.0F;                             /* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr3TempTgt_D = 0.0F;/* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr3TempTgt_Dial_NF =
    0.0F;                              /* Referenced by: '<S485>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr3TempTgt_INIT =
    25.0F;                             /* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr4TempTgt_D = 0.0F;/* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr4TempTgt_Dial_NF =
    0.0F;                              /* Referenced by: '<S499>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_Htr4TempTgt_INIT =
    25.0F;                             /* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_HtrTempTgt_D = 0.0F;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_HtrTempTgt_Dial_NF =
    0.0F;                              /* Referenced by: '<S453>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_HVC_HtrTempTgt_INIT =
    25.0F;                             /* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_DVC_Test =
    70.0F;                             /* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_Flt =
    0.0F;                              /* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_Max =
    150.0F;                            /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_Min =
    0.0F;                              /* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_MinOnReq =
    0.0F;                              /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_Off =
    0.0F;                              /* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_RtLimDown
    = 0.0F;                            /* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr2ClntTempTgt_RtLimUp =
    0.0F;                              /* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_DVC_Test =
    70.0F;                             /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_Flt =
    0.0F;                              /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_Max =
    150.0F;                            /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_Min =
    0.0F;                              /* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_MinOnReq =
    0.0F;                              /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_Off =
    0.0F;                              /* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_RtLimDown
    = 0.0F;                            /* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr3ClntTempTgt_RtLimUp =
    0.0F;                              /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT)
    KeHTRR_T_Htr3CntrsStck_CellTmpMx_Alwd = 0.0F;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_DVC_Test =
    70.0F;                             /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_Flt =
    0.0F;                              /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_Max =
    150.0F;                            /* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_Min =
    0.0F;                              /* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_MinOnReq =
    0.0F;                              /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_Off =
    0.0F;                              /* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_RtLimDown
    = 0.0F;                            /* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_T_Htr4ClntTempTgt_RtLimUp =
    0.0F;                              /* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KeHTRR_U_HT_CabVlvSts_D = 0.0F;/* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HT_CabVlvSts_SD = 0;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVAC_HtrPwr_SD = 0;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVAC_HtrReq_D = 0;/* Referenced by: '<S336>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVAC_HtrReq_INIT = 0;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVAC_HtrReq_NF = 0;/* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVAC_HtrReq_SD = 0;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr2PwrLimit_SD = 0;/* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr2ReqDial_NF = 0;/* Referenced by: '<S475>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr2Req_D = 0;/* Referenced by: '<S366>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr2Req_INIT = 0;/* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr2Req_SD = 0;/* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr2TempTgt_SD = 0;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr3PwrLimit_SD = 0;/* Referenced by: '<S395>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr3ReqDial_NF = 0;/* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr3Req_D = 0;/* Referenced by: '<S392>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr3Req_INIT = 0;/* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr3Req_SD = 0;/* Referenced by: '<S393>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr3TempTgt_SD = 0;/* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr4PwrLimit_SD = 0;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr4ReqDial_NF = 0;/* Referenced by: '<S501>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr4Req_D = 0;/* Referenced by: '<S406>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr4Req_INIT = 0;/* Referenced by: '<S502>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr4Req_SD = 0;/* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr4TempTgt_SD = 0;/* Referenced by: '<S405>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr4_OvrhtUnlck_INIT =
    0;                                 /* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_HVC_Htr4_OvrhtUnlck_NF_Dial = 0;/* Referenced by: '<S504>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_HVC_HtrClntIn_Temp_BL_INIT = 0;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_HVC_HtrClntIn_Temp_BL_NF_Dial = 0;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_HtrPwrLimit_SD = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_HtrReqDial_NF = 0;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_HtrReq_D = 0;/* Referenced by: '<S351>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_HtrReq_INIT = 0;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_HtrReq_SD = 0;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_HtrTempTgt_SD = 0;/* Referenced by: '<S348>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr_CoreTemp_BL_INIT =
    0;                                 /* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_HVC_Htr_CoreTemp_BL_NF_Dial = 0;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr_OvrhtUnlck_D = 0;/* Referenced by: '<S349>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr_OvrhtUnlck_INIT =
    0;                                 /* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_HVC_Htr_OvrhtUnlck_NF_Dial = 0;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HVC_Htr_OvrhtUnlck_SD = 0;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Heater_SlctnState_SD = 0;/* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Heater_State_SD = 0;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr1_GrdByPs_Dsbl = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr1_Slct_INIT = 0;/* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr1_Slct_NF = 0;/* Referenced by: '<S464>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr2_Slct_INIT = 0;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr2_Slct_NF = 0;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_D = 0;/* Referenced by: '<S390>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_INIT = 0;/* Referenced by: '<S489>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_NF_Dial = 0;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT)
    KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_SD = 0;/* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr3PwrTgtLvl_En = 0;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S130>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr3_Slct_INIT = 0;/* Referenced by: '<S491>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr3_Slct_NF = 0;/* Referenced by: '<S492>/Calib' */

#endif

#if !Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr4_Slct_INIT = 0;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_2

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr4_Slct_NF = 0;/* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr4_Unlock_Req = 0;/* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_HtrUnlockEnad_En = 0;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_Htr_Unlck_RstSts_SD = 0;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_InFieldMode_Dial = 0;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_InFieldMode_SD = 0;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_LimitCheckSts_Dial = 0;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_LimitCheckSts_SD = 0;/* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_UseHtr1_HVAC = 0;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_UseHtr2_HVAC = 1;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(boolean, HTRR_VAR_INIT) KeHTRR_b_UseHtr4_HVAC = 1;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(uint8, HTRR_VAR_INIT) KeHTRR_y_Heater_SlctnState_D = 0U;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(uint8, HTRR_VAR_INIT) KeHTRR_y_Heater_State_D = 0U;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KtHTRR_P_3wyVlvPos_HVACPwr[6] =
{
    0.0F, 1400.0F, 2050.0F, 4200.0F, 6500.0F, 8000.0F
} ;                                    /* Referenced by: '<S26>/Vector' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static volatile CONST(float32, HTRR_VAR_INIT) KxHTRR_P_3wyVlvPos_HVACPwr[6] =
{
    0.001F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S26>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HTRR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(sint16, HTRR_VAR_INIT) EeHTRR_Cnt_Htr_Unlck_RstSts;/* '<Root>/DSM_2' */
static VAR(uint8, HTRR_VAR_INIT) EeHTRR_Cnt_Htr_UnlockCntr;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr2PwrLimit_DVC_Lim_AD;/* '<S282>/Switch' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM1;/* '<S280>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM2;/* '<S275>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr2PwrLimit_isLimitCheckOk;/* '<S284>/Logical3' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr3PwrLimit_DVC_Lim_AD;/* '<S293>/Switch' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM1;/* '<S291>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM2;/* '<S276>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr3PwrLimit_isLimitCheckOk;/* '<S295>/Logical3' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr4PwrLimit_DVC_Lim_AD;/* '<S304>/Switch' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM1;/* '<S302>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM2;/* '<S277>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr4PwrLimit_isLimitCheckOk;/* '<S306>/Logical3' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_HtrDsbl_Unlck;/* '<S247>/Switch1' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_HtrPwrLimit_DVC_Lim_AD;/* '<S315>/Switch' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_HtrPwrLimit_DVC_Lim_AM1;/* '<S313>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_HtrPwrLimit_DVC_Lim_AM2;/* '<S278>/Merge' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_HtrPwrLimit_isLimitCheckOk;/* '<S317>/Logical3' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(boolean, HTRR_VAR_INIT) VeHTRR_b_Htr_UnlckRq;/* '<S235>/Logical1' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(TeHTRR_e_Htr_State, HTRR_VAR_INIT) VeHTRR_e_Adstd_Htr1_State;/* '<S202>/Switch1' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(TeHTRR_e_Htr_State, HTRR_VAR_INIT) VeHTRR_e_Adstd_Htr2_State;/* '<S45>/Switch1' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(TeHTRR_e_Htr_State, HTRR_VAR_INIT) VeHTRR_e_Adstd_Htr3_State;/* '<S97>/Switch1' */

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static VAR(TeHTRR_e_Htr_State, HTRR_VAR_INIT) VeHTRR_e_Adstd_Htr4_State;/* '<S154>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HTRR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HTRR
#include "MemMap.h"

VAR(B_HTRR_ac_T, HTRR_VAR_INIT) HTRR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HTRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HTRR
#include "MemMap.h"

VAR(DW_HTRR_ac_T, HTRR_VAR_INIT) HTRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HTRR
#include "MemMap.h"
#if Rte_SysCon_Variant_HTRR_FUNC_1

static FUNC(void, HTRR_CODE_LOCAL) HTRR_ac_Check_DVC_Limits(P2VAR(boolean,
    AUTOMATIC, HTRR_VAR_INIT) rty_True);

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

static FUNC(void, HTRR_CODE_LOCAL) HTRR_ac_Check_DVC_Action(P2VAR(boolean,
    AUTOMATIC, HTRR_VAR_INIT) rty_False);

#endif

/*
 * Output and update for action system:
 *    '<S280>/Check_DVC_Limits'
 *    '<S291>/Check_DVC_Limits'
 *    '<S302>/Check_DVC_Limits'
 *    '<S313>/Check_DVC_Limits'
 */
#if Rte_SysCon_Variant_HTRR_FUNC_1

static FUNC(void, HTRR_CODE_LOCAL) HTRR_ac_Check_DVC_Limits(P2VAR(boolean,
    AUTOMATIC, HTRR_VAR_INIT) rty_True)
{
    /* SignalConversion generated from: '<S283>/True' incorporates:
     *  Constant: '<S283>/TRUEConstant'
     */
    *rty_True = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S275>/Check_DVC_Action'
 *    '<S276>/Check_DVC_Action'
 *    '<S277>/Check_DVC_Action'
 *    '<S278>/Check_DVC_Action'
 */
#if Rte_SysCon_Variant_HTRR_FUNC_1

static FUNC(void, HTRR_CODE_LOCAL) HTRR_ac_Check_DVC_Action(P2VAR(boolean,
    AUTOMATIC, HTRR_VAR_INIT) rty_False)
{
    /* SignalConversion generated from: '<S279>/False' incorporates:
     *  Constant: '<S279>/Constant12'
     */
    *rty_False = false;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_HTRR_FUNC_1

FUNC(void, HTRR_CODE) HTRR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTIR_e_HVC_Htr_Warning tmpRead_1;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTIR_e_IO_CntrlSt tmpRead_2;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTIR_e_IO_CntrlSt tmpRead_3;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTIR_e_HVC_Htr_Warning tmpRead_4;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTIR_e_IO_CntrlSt tmpRead_5;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTIR_e_IO_CntrlSt tmpRead_6;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Switch1_ai;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    uint8 rtb_Switch13;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    uint8 rtb_Switch12;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeH_le;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeHT_p;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_Switch1_c;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_Logical4_a;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_TmpSignalConversionAtVeHC_h;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_TmpSignalConversionAtVeHC_g;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeHTIR;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeHT_b;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_Comparison2_fo;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    uint8 rtb_TmpSignalConversionAtVeHT_g;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_Comparison3_eq;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_TmpSignalConversionAtVeH_jh;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_AND_l;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_AND_i2;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Merge_c;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Merge1_c;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Merge_p;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Merge1_g;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Merge;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Merge1;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Switch1_nn;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Merge_b;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Switch1_bb;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Switch1_ii;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Switch1_gk;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_UnitDelay_d;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_OR1_f;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    uint16 rtb_Switch1_j;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeTHMR;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_Sum2_n;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_TmpSignalConversionAtVeH_ag;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean rtb_TmpSignalConversionAtVeHCDR;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeH_fh;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TePMTR_e_ThrmlDevisEnbl rtb_TmpSignalConversionAtVePMTR;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TePMTR_e_ThermlEnblReason rtb_TmpSignalConversionAtVePM_j;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTRR_e_HVC_HtrUnlockSts rtb_Merge6;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHT_e;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean GreaterThan_d;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean GreaterThan_k;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean GreaterThan_e;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean GreaterThan_jt;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean Switch6;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    boolean Switch7;

#endif

#if Rte_SysCon_Variant_HTRR_FUNC_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Outputs for Function Call SubSystem: '<Root>/HTRR_FUNC_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolHtrA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolHtrA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolHtrA_Value
        (&HTRR_ac_DW.StatusByte_LostCommCoolHtrA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_CooltHtr4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_CooltHtr4'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_CooltHtr4_Value
        (&HTRR_ac_DW.StatusByte_LostCommHB_CooltHtr4);

    /* End of Outputs for SubSystem: '<Root>/HTRR_FUNC_MedTEH' */

    /* Inport: '<Root>/VeTHMR_y_Htr_Oprtn_State' */
    (void)Rte_Read_VeTHMR_y_Htr_Oprtn_State_Value(&rtb_Switch12);

    /* Inport: '<Root>/VeTHMR_y_Htr_Slctn_State' */
    (void)Rte_Read_VeTHMR_y_Htr_Slctn_State_Value(&rtb_Switch13);

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&Switch7);

    /* Inport: '<Root>/VeBSWR_b_LimCheckingStatus' */
    (void)Rte_Read_VeBSWR_b_LimCheckingStatus_Value(&Switch6);

    /* Inport: '<Root>/VeAATR_T_EstAmbAirTemp' */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&rtb_Switch1);

    /* Inport: '<Root>/VeTAIR_U_HT_CabVlvSts' */
    (void)Rte_Read_VeTAIR_U_HT_CabVlvSts_Value(&rtb_Switch1_ai);

    /* Outputs for Function Call SubSystem: '<Root>/HTRR_FUNC_MedTEH' */
    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_HtrPwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_HtrPwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_HtrPwrAct_Value(&rtb_TmpSignalConversionAtVeHTIR);

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr2PwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_Htr2PwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_Htr2PwrAct_Value
        (&rtb_TmpSignalConversionAtVeH_le);

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr3PwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_Htr3PwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_Htr3PwrAct_Value
        (&rtb_TmpSignalConversionAtVeHT_b);

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr4PwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_Htr4PwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_Htr4PwrAct_Value
        (&rtb_TmpSignalConversionAtVeHT_p);

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlEnblRsn' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlEnblRsn'
     */
    (void)Rte_Read_VePMTR_e_ThrmlEnblRsn_Value(&rtb_TmpSignalConversionAtVePM_j);

    /* SignalConversion generated from: '<S1>/VeHCDR_b_HVC_Heater_FltDtct' incorporates:
     *  Inport: '<Root>/VeHCDR_b_HVC_Heater_FltDtct'
     */
    (void)Rte_Read_VeHCDR_b_HVC_Heater_FltDtct_Value
        (&rtb_TmpSignalConversionAtVeHCDR);

    /* SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater2_FltDtct' incorporates:
     *  Inport: '<Root>/VeHCDR_b_HV_Heater2_FltDtct'
     */
    (void)Rte_Read_VeHCDR_b_HV_Heater2_FltDtct_Value
        (&rtb_TmpSignalConversionAtVeHC_h);

    /* SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater3_FltDtct' incorporates:
     *  Inport: '<Root>/VeHCDR_b_HV_Heater3_FltDtct'
     */
    (void)Rte_Read_VeHCDR_b_HV_Heater3_FltDtct_Value
        (&rtb_TmpSignalConversionAtVeHC_g);

    /* SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater4_FltDtct' incorporates:
     *  Inport: '<Root>/VeHCDR_b_HV_Heater4_FltDtct'
     */
    (void)Rte_Read_VeHCDR_b_HV_Heater4_FltDtct_Value
        (&rtb_TmpSignalConversionAtVeH_ag);

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value(&rtb_TmpSignalConversionAtVePMTR);

    /* SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr_Sts_Value
        (&rtb_TmpSignalConversionAtVeHT_e);

    /* SignalConversion generated from: '<S1>/VeHTIR_Cnt_HVC_HtrUnlckCntr' incorporates:
     *  Inport: '<Root>/VeHTIR_Cnt_HVC_HtrUnlckCntr'
     */
    (void)Rte_Read_VeHTIR_Cnt_HVC_HtrUnlckCntr_Value
        (&rtb_TmpSignalConversionAtVeHT_g);

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_HtrOvrht_UnlckReq' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_HtrOvrht_UnlckReq'
     */
    (void)Rte_Read_VeHTIR_b_HVC_HtrOvrht_UnlckReq_Value
        (&rtb_TmpSignalConversionAtVeH_jh);

    /* SignalConversion generated from: '<S1>/VeTHMR_P_Htr3PwrTgt' incorporates:
     *  Inport: '<Root>/VeTHMR_P_Htr3PwrTgt'
     */
    (void)Rte_Read_VeTHMR_P_Htr3PwrTgt_Value(&rtb_TmpSignalConversionAtVeTHMR);

    /* SignalConversion generated from: '<S1>/VeHTIR_P_DVC_Htr3PwrLimit' incorporates:
     *  Inport: '<Root>/VeHTIR_P_DVC_Htr3PwrLimit'
     */
    (void)Rte_Read_VeHTIR_P_DVC_Htr3PwrLimit_Value
        (&rtb_TmpSignalConversionAtVeH_fh);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem2'
     */
    /* Switch: '<S413>/Switch6' incorporates:
     *  Constant: '<S429>/Calib'
     */
    if (KeHTRR_b_LimitCheckSts_SD)
    {
        /* Switch: '<S413>/Switch6' incorporates:
         *  Constant: '<S428>/Calib'
         */
        Switch6 = KeHTRR_b_LimitCheckSts_Dial;
    }

    /* End of Switch: '<S413>/Switch6' */

    /* Switch: '<S413>/Switch7' incorporates:
     *  Constant: '<S427>/Calib'
     */
    if (KeHTRR_b_InFieldMode_SD)
    {
        /* Switch: '<S413>/Switch7' incorporates:
         *  Constant: '<S426>/Calib'
         */
        Switch7 = KeHTRR_b_InFieldMode_Dial;
    }

    /* End of Switch: '<S413>/Switch7' */

    /* Switch: '<S413>/Switch13' incorporates:
     *  Constant: '<S424>/Calib'
     */
    if (KeHTRR_b_Heater_SlctnState_SD)
    {
        /* Switch: '<S413>/Switch13' incorporates:
         *  Constant: '<S430>/Calib'
         */
        rtb_Switch13 = KeHTRR_y_Heater_SlctnState_D;
    }

    /* End of Switch: '<S413>/Switch13' */

    /* Outputs for Atomic SubSystem: '<S413>/BitSelector' */
    /* RelationalOperator: '<S414>/GreaterThan' incorporates:
     *  Constant: '<S414>/ConstantValue'
     *  S-Function (sfix_bitop): '<S414>/BitwiseLogicalOperator'
     */
    GreaterThan_k = ((((sint32)rtb_Switch13) & 8) > 0);

    /* End of Outputs for SubSystem: '<S413>/BitSelector' */

    /* Outputs for Atomic SubSystem: '<S413>/BitSelector1' */
    /* RelationalOperator: '<S415>/GreaterThan' incorporates:
     *  Constant: '<S415>/ConstantValue'
     *  S-Function (sfix_bitop): '<S415>/BitwiseLogicalOperator'
     */
    GreaterThan_jt = ((((sint32)rtb_Switch13) & 4) > 0);

    /* End of Outputs for SubSystem: '<S413>/BitSelector1' */

    /* Outputs for Atomic SubSystem: '<S413>/BitSelector2' */
    /* RelationalOperator: '<S416>/GreaterThan' incorporates:
     *  Constant: '<S416>/ConstantValue'
     *  S-Function (sfix_bitop): '<S416>/BitwiseLogicalOperator'
     */
    GreaterThan_e = ((((sint32)rtb_Switch13) & 2) > 0);

    /* End of Outputs for SubSystem: '<S413>/BitSelector2' */

    /* Outputs for Atomic SubSystem: '<S413>/BitSelector3' */
    /* RelationalOperator: '<S417>/GreaterThan' incorporates:
     *  Constant: '<S417>/ConstantValue'
     *  S-Function (sfix_bitop): '<S417>/BitwiseLogicalOperator'
     */
    GreaterThan_d = ((((sint32)rtb_Switch13) & 1) > 0);

    /* End of Outputs for SubSystem: '<S413>/BitSelector3' */

    /* Switch: '<S413>/Switch12' incorporates:
     *  Constant: '<S425>/Calib'
     */
    if (KeHTRR_b_Heater_State_SD)
    {
        /* Switch: '<S413>/Switch12' incorporates:
         *  Constant: '<S431>/Calib'
         */
        rtb_Switch12 = KeHTRR_y_Heater_State_D;
    }

    /* End of Switch: '<S413>/Switch12' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HTRC'
     */
    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S23>/Calib'
     */
    if (KeHTRR_b_UseHtr1_HVAC)
    {
        /* Outputs for Function Call SubSystem: '<S1>/Subsystem2' */
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S422>/Calib'
         *  Constant: '<S423>/Calib'
         */
        if (KeHTRR_b_HT_CabVlvSts_SD)
        {
            rtb_Switch1_ai = KeHTRR_U_HT_CabVlvSts_D;
        }

        /* End of Switch: '<S413>/Switch4' */
        /* End of Outputs for SubSystem: '<S1>/Subsystem2' */

        /* Switch: '<S17>/Switch1' incorporates:
         *  Lookup_n-D: '<S26>/Vector'
         *  Sum: '<S8>/Sum1'
         */
        rtb_Switch1_ai = rtb_TmpSignalConversionAtVeHTIR - look1_iflf_binlcapw
            (rtb_Switch1_ai, ((const float32 *)&(KxHTRR_P_3wyVlvPos_HVACPwr[0])),
             ((const float32 *)&(KtHTRR_P_3wyVlvPos_HVACPwr[0])), 5U);
    }
    else
    {
        /* Switch: '<S17>/Switch1' incorporates:
         *  Constant: '<S8>/Constant'
         */
        rtb_Switch1_ai = 0.0F;
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S274>/Switch1' incorporates:
     *  Constant: '<S270>/Constant'
     *  Constant: '<S271>/Constant'
     *  Constant: '<S272>/Constant'
     *  Constant: '<S273>/Constant'
     *  Logic: '<S16>/Logical1'
     *  Logic: '<S16>/Logical2'
     *  Logic: '<S16>/Logical3'
     *  RelationalOperator: '<S16>/Comparison1'
     *  RelationalOperator: '<S16>/Comparison12'
     *  RelationalOperator: '<S16>/Comparison2'
     *  RelationalOperator: '<S16>/Comparison3'
     */
    rtb_Switch1_c = (((CePMTR_e_DISBL_All_Thrml != ((uint32)
                        rtb_TmpSignalConversionAtVePMTR)) && (((uint32)
                        rtb_TmpSignalConversionAtVePMTR) !=
                       CePMTR_e_Enb_Only_LT_Pmp_N_Fan)) && ((CePMTR_e_DisableAll
                       != ((uint32)rtb_TmpSignalConversionAtVePM_j)) &&
                      (((uint32)rtb_TmpSignalConversionAtVePM_j) !=
                       CePMTR_e_EnblKey_Acc_or_DrvDoorAjr)));

    /* Outputs for Enabled SubSystem: '<S4>/Htr_ECH_Control' incorporates:
     *  EnablePort: '<S12>/Enable'
     */
    if (GreaterThan_d)
    {
        /* Inport: '<Root>/VeHCDR_b_Heater1_LOC' */
        (void)Rte_Read_VeHCDR_b_Heater1_LOC_Value(&rtb_OR1_f);

        /* If: '<S207>/If1' incorporates:
         *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp'
         */
        if (rtb_OR1_f)
        {
            /* Outputs for IfAction SubSystem: '<S207>/No_Unlock_Request1' incorporates:
             *  ActionPort: '<S234>/ActionPort'
             */
            /* Merge: '<S207>/Merge' incorporates:
             *  Constant: '<S234>/FALSEConstant'
             *  SignalConversion generated from: '<S234>/HtrClntIn_Temp_BL'
             */
            HTRR_ac_B.Merge = false;

            /* Merge: '<S207>/Merge1' incorporates:
             *  Constant: '<S234>/FALSEConstant1'
             *  SignalConversion generated from: '<S234>/Htr_CoreTemp_BL'
             */
            HTRR_ac_B.Merge1 = false;

            /* Switch: '<S231>/Switch1' incorporates:
             *  Constant: '<S234>/FALSEConstant4'
             *  SignalConversion generated from: '<S234>/Dsbl_Htr_UnlckFlag'
             */
            rtb_TmpSignalConversionAtVeH_jh = false;

            /* Merge: '<S207>/Merge3' incorporates:
             *  Constant: '<S234>/FALSEConstant2'
             *  SignalConversion generated from: '<S234>/OverheatUnlock_Req'
             */
            HTRR_ac_B.Merge3 = false;

            /* Merge: '<S207>/Merge6' incorporates:
             *  Constant: '<S236>/Constant'
             *  SignalConversion generated from: '<S234>/OverheatUnlock_Rst_Sts'
             */
            rtb_Merge6 = CeHTRR_e_HeaterLOC;

            /* End of Outputs for SubSystem: '<S207>/No_Unlock_Request1' */
        }
        else
        {
            (void)Rte_Read_VeHTIR_T_HVC_HtrClntIn_Temp_Value(&rtb_Merge);
            (void)Rte_Read_VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Value(&tmpRead_1);

            /* Outputs for IfAction SubSystem: '<S207>/No_Unlock_Request2' incorporates:
             *  ActionPort: '<S235>/ActionPort'
             */
            /* Outputs for Atomic SubSystem: '<S235>/EdgeRising2' */
            /* Logic: '<S239>/OR1' incorporates:
             *  Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp'
             *  Inport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp'
             *  UnitDelay: '<S239>/UnitDelay'
             */
            rtb_OR1_f = !HTRR_ac_DW.UnitDelay_DSTATE_a4h;

            /* Update for UnitDelay: '<S239>/UnitDelay' */
            HTRR_ac_DW.UnitDelay_DSTATE_a4h = rtb_TmpSignalConversionAtVeH_jh;

            /* Switch: '<S246>/Switch1' incorporates:
             *  DataStoreWrite: '<S235>/DataStoreWrite1'
             *  Logic: '<S239>/AND'
             *  UnitDelay: '<S246>/UnitDelay'
             */
            if (rtb_TmpSignalConversionAtVeH_jh && rtb_OR1_f)
            {
                EeHTRR_Cnt_Htr_UnlockCntr = rtb_TmpSignalConversionAtVeHT_g;
            }
            else
            {
                EeHTRR_Cnt_Htr_UnlockCntr = HTRR_ac_DW.UnitDelay_DSTATE_k;
            }

            /* End of Switch: '<S246>/Switch1' */
            /* End of Outputs for SubSystem: '<S235>/EdgeRising2' */

            /* RelationalOperator: '<S235>/Comparison' incorporates:
             *  Constant: '<S251>/Calib'
             */
            rtb_OR1_f = (rtb_Merge < KeHTRR_T_ClntInTemp_UnlckLimit);

            /* RelationalOperator: '<S235>/Comparison2' incorporates:
             *  Constant: '<S245>/Constant'
             *  Inport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp'
             */
            rtb_Comparison2_fo = (((uint32)tmpRead_1) == CeHTIR_e_Warning_False);

            /* RelationalOperator: '<S235>/Comparison3' incorporates:
             *  Constant: '<S250>/Calib'
             */
            rtb_Comparison3_eq = (rtb_TmpSignalConversionAtVeHT_g <
                                  KeHTRR_Cnt_Htr_UnlkCntrLmt);

            /* Switch: '<S247>/Switch1' incorporates:
             *  Constant: '<S244>/Constant'
             *  Logic: '<S235>/Logical'
             *  RelationalOperator: '<S235>/Comparison7'
             */
            VeHTRR_b_HtrDsbl_Unlck = ((((rtb_OR1_f && rtb_Comparison2_fo) &&
                rtb_Comparison3_eq) && (((uint32)rtb_TmpSignalConversionAtVeHT_e)
                == CeHTIR_e_HtrSts_LockedUntilService)) &&
                rtb_TmpSignalConversionAtVeH_jh);

            /* Outputs for Atomic SubSystem: '<S235>/EdgeRising3' */
            /* UnitDelay: '<S243>/UnitDelay' incorporates:
             *  UnitDelay: '<S240>/UnitDelay'
             */
            rtb_UnitDelay_d = HTRR_ac_DW.UnitDelay_DSTATE_e;

            /* Update for UnitDelay: '<S240>/UnitDelay' */
            HTRR_ac_DW.UnitDelay_DSTATE_e = VeHTRR_b_HtrDsbl_Unlck;

            /* End of Outputs for SubSystem: '<S235>/EdgeRising3' */

            /* Outputs for Atomic SubSystem: '<S235>/EdgeRising4' */
            /* Logic: '<S241>/AND' incorporates:
             *  Logic: '<S241>/OR1'
             *  UnitDelay: '<S241>/UnitDelay'
             */
            rtb_AND_l = !HTRR_ac_DW.UnitDelay_DSTATE_g;

            /* Update for UnitDelay: '<S241>/UnitDelay' incorporates:
             *  Constant: '<S235>/TRUEConstant1'
             */
            HTRR_ac_DW.UnitDelay_DSTATE_g = true;

            /* End of Outputs for SubSystem: '<S235>/EdgeRising4' */

            /* Outputs for Atomic SubSystem: '<S235>/CountDownResetEnabled' */
            /* Outputs for Atomic SubSystem: '<S235>/EdgeRising3' */
            /* Switch: '<S237>/Switch1' incorporates:
             *  Constant: '<S237>/ConstantValue'
             *  Logic: '<S235>/LogicalOperator'
             *  Logic: '<S237>/AND'
             *  Logic: '<S240>/AND'
             *  Logic: '<S240>/OR1'
             *  RelationalOperator: '<S237>/GreaterThan'
             *  Switch: '<S237>/Switch2'
             *  UnitDelay: '<S237>/UnitDelay'
             */
            if (((VeHTRR_b_HtrDsbl_Unlck) && (!rtb_UnitDelay_d)) || rtb_AND_l)
            {
                /* Switch: '<S237>/Switch1' incorporates:
                 *  Constant: '<S248>/Calib'
                 */
                rtb_Switch1_j = KeHTRR_Cnt_HeaterDsbl_UnlckTime;
            }
            else if ((VeHTRR_b_HtrDsbl_Unlck) && (((sint32)
                       HTRR_ac_DW.UnitDelay_DSTATE_a4) > 0))
            {
                /* Switch: '<S237>/Switch2' incorporates:
                 *  Constant: '<S237>/ConstantValue1'
                 *  Sum: '<S237>/Subtraction'
                 *  Switch: '<S237>/Switch1'
                 *  UnitDelay: '<S237>/UnitDelay'
                 */
                rtb_Switch1_j = (uint16)((sint32)(((sint32)
                    HTRR_ac_DW.UnitDelay_DSTATE_a4) - 1));
            }
            else
            {
                /* Switch: '<S237>/Switch1' incorporates:
                 *  Switch: '<S237>/Switch2'
                 *  UnitDelay: '<S237>/UnitDelay'
                 */
                rtb_Switch1_j = HTRR_ac_DW.UnitDelay_DSTATE_a4;
            }

            /* End of Switch: '<S237>/Switch1' */
            /* End of Outputs for SubSystem: '<S235>/EdgeRising3' */

            /* Update for UnitDelay: '<S237>/UnitDelay' */
            HTRR_ac_DW.UnitDelay_DSTATE_a4 = rtb_Switch1_j;

            /* Logic: '<S235>/LogicalOperator1' incorporates:
             *  Constant: '<S237>/ConstantValue2'
             *  RelationalOperator: '<S237>/GreaterThan1'
             */
            rtb_UnitDelay_d = (((sint32)rtb_Switch1_j) <= 0);

            /* End of Outputs for SubSystem: '<S235>/CountDownResetEnabled' */

            /* Outputs for Atomic SubSystem: '<S235>/EdgeRising5' */
            /* Logic: '<S242>/AND' incorporates:
             *  Logic: '<S242>/OR1'
             *  UnitDelay: '<S242>/UnitDelay'
             */
            rtb_AND_l = (rtb_UnitDelay_d && (!HTRR_ac_DW.UnitDelay_DSTATE_ht));

            /* Update for UnitDelay: '<S242>/UnitDelay' */
            HTRR_ac_DW.UnitDelay_DSTATE_ht = rtb_UnitDelay_d;

            /* End of Outputs for SubSystem: '<S235>/EdgeRising5' */

            /* Outputs for Atomic SubSystem: '<S235>/EdgeRising6' */
            /* Logic: '<S243>/AND' incorporates:
             *  Logic: '<S243>/OR1'
             *  UnitDelay: '<S243>/UnitDelay'
             */
            rtb_AND_i2 = !HTRR_ac_DW.UnitDelay_DSTATE_ji;

            /* Update for UnitDelay: '<S243>/UnitDelay' incorporates:
             *  Constant: '<S235>/TRUEConstant3'
             */
            HTRR_ac_DW.UnitDelay_DSTATE_ji = true;

            /* End of Outputs for SubSystem: '<S235>/EdgeRising6' */

            /* Outputs for Atomic SubSystem: '<S235>/CountDownResetEnabled1' */
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S238>/ConstantValue'
             *  Logic: '<S235>/LogicalOperator2'
             *  Logic: '<S238>/AND'
             *  RelationalOperator: '<S238>/GreaterThan'
             *  Switch: '<S238>/Switch2'
             *  UnitDelay: '<S238>/UnitDelay'
             */
            if (rtb_AND_l || rtb_AND_i2)
            {
                /* Switch: '<S238>/Switch1' incorporates:
                 *  Constant: '<S249>/Calib'
                 */
                rtb_Switch1_j = KeHTRR_Cnt_Htr_Unlcksts_Waittime;
            }
            else if (rtb_UnitDelay_d && (((sint32)HTRR_ac_DW.UnitDelay_DSTATE_o)
                      > 0))
            {
                /* Switch: '<S238>/Switch2' incorporates:
                 *  Constant: '<S238>/ConstantValue1'
                 *  Sum: '<S238>/Subtraction'
                 *  Switch: '<S238>/Switch1'
                 *  UnitDelay: '<S238>/UnitDelay'
                 */
                rtb_Switch1_j = (uint16)((sint32)(((sint32)
                    HTRR_ac_DW.UnitDelay_DSTATE_o) - 1));
            }
            else
            {
                /* Switch: '<S238>/Switch1' incorporates:
                 *  Switch: '<S238>/Switch2'
                 *  UnitDelay: '<S238>/UnitDelay'
                 */
                rtb_Switch1_j = HTRR_ac_DW.UnitDelay_DSTATE_o;
            }

            /* End of Switch: '<S238>/Switch1' */

            /* Update for UnitDelay: '<S238>/UnitDelay' */
            HTRR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch1_j;

            /* If: '<S235>/If1' incorporates:
             *  Constant: '<S238>/ConstantValue2'
             *  Constant: '<S264>/Constant'
             *  Logic: '<S235>/LogicalOperator3'
             *  Logic: '<S257>/Logical1'
             *  RelationalOperator: '<S238>/GreaterThan1'
             *  RelationalOperator: '<S257>/Comparison9'
             *  Switch: '<S268>/Switch1'
             *  Switch: '<S269>/Switch1'
             */
            if (((sint32)rtb_Switch1_j) <= 0)
            {
                /* Outputs for IfAction SubSystem: '<S235>/Unlock_Req1' incorporates:
                 *  ActionPort: '<S256>/ActionPort'
                 */
                /* Switch: '<S262>/Switch1' incorporates:
                 *  Constant: '<S258>/Constant'
                 *  DataStoreRead: '<S256>/DataStoreRead'
                 *  RelationalOperator: '<S256>/Comparison4'
                 *  RelationalOperator: '<S256>/Comparison9'
                 *  Sum: '<S256>/Sum1'
                 *  Switch: '<S263>/Switch1'
                 */
                if (((sint32)((uint8)(rtb_TmpSignalConversionAtVeHT_g -
                                      EeHTRR_Cnt_Htr_UnlockCntr))) == 1)
                {
                    /* Merge: '<S207>/Merge6' incorporates:
                     *  Constant: '<S260>/Constant'
                     */
                    rtb_Merge6 = CeHTRR_e_UnlockPass;
                }
                else if (((uint32)rtb_TmpSignalConversionAtVeHT_e) ==
                         CeHTIR_e_HtrSts_LockedPermanent)
                {
                    /* Switch: '<S263>/Switch1' incorporates:
                     *  Constant: '<S259>/Constant'
                     *  Merge: '<S207>/Merge6'
                     */
                    rtb_Merge6 = CeHTRR_e_UnlockFailedPermanent;
                }
                else
                {
                    /* Merge: '<S207>/Merge6' incorporates:
                     *  Constant: '<S261>/Constant'
                     *  Switch: '<S263>/Switch1'
                     */
                    rtb_Merge6 = CeHTRR_e_UnlockFailed;
                }

                /* End of Switch: '<S262>/Switch1' */
                /* End of Outputs for SubSystem: '<S235>/Unlock_Req1' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S235>/Unlock_Req2' incorporates:
                 *  ActionPort: '<S257>/ActionPort'
                 */
                if (((uint32)rtb_TmpSignalConversionAtVeHT_e) ==
                        CeHTIR_e_HtrSts_LockedPermanent)
                {
                    /* Switch: '<S269>/Switch1' incorporates:
                     *  Constant: '<S265>/Constant'
                     *  Merge: '<S207>/Merge6'
                     */
                    rtb_Merge6 = CeHTRR_e_UnlockFailedPermanent;
                }
                else if (((!rtb_OR1_f) || (!rtb_Comparison2_fo)) ||
                         (!rtb_Comparison3_eq))
                {
                    /* Switch: '<S268>/Switch1' incorporates:
                     *  Constant: '<S266>/Constant'
                     *  Merge: '<S207>/Merge6'
                     *  Switch: '<S269>/Switch1'
                     */
                    rtb_Merge6 = CeHTRR_e_UnlockFailed;
                }
                else
                {
                    /* Merge: '<S207>/Merge6' incorporates:
                     *  Constant: '<S267>/Constant'
                     *  Switch: '<S268>/Switch1'
                     *  Switch: '<S269>/Switch1'
                     */
                    rtb_Merge6 = CeHTRR_e_UnlockInProgress;
                }

                /* End of Outputs for SubSystem: '<S235>/Unlock_Req2' */
            }

            /* End of If: '<S235>/If1' */
            /* End of Outputs for SubSystem: '<S235>/CountDownResetEnabled1' */

            /* Logic: '<S235>/Logical1' */
            VeHTRR_b_Htr_UnlckRq = (rtb_UnitDelay_d &&
                                    rtb_TmpSignalConversionAtVeH_jh);

            /* Switch: '<S231>/Switch1' incorporates:
             *  Gain: '<S252>/Gain'
             */
            rtb_TmpSignalConversionAtVeH_jh = VeHTRR_b_HtrDsbl_Unlck;

            /* Merge: '<S207>/Merge3' incorporates:
             *  Gain: '<S253>/Gain'
             */
            HTRR_ac_B.Merge3 = VeHTRR_b_Htr_UnlckRq;

            /* Merge: '<S207>/Merge' incorporates:
             *  Gain: '<S254>/Gain'
             */
            HTRR_ac_B.Merge = rtb_OR1_f;

            /* Merge: '<S207>/Merge1' incorporates:
             *  Gain: '<S255>/Gain'
             */
            HTRR_ac_B.Merge1 = rtb_Comparison2_fo;

            /* Update for UnitDelay: '<S246>/UnitDelay' incorporates:
             *  DataStoreWrite: '<S235>/DataStoreWrite1'
             */
            HTRR_ac_DW.UnitDelay_DSTATE_k = EeHTRR_Cnt_Htr_UnlockCntr;

            /* End of Outputs for SubSystem: '<S207>/No_Unlock_Request2' */
        }

        /* End of If: '<S207>/If1' */

        /* DataTypeConversion: '<S207>/DataTypeConversion' incorporates:
         *  DataStoreWrite: '<S207>/DataStoreWrite1'
         *  Merge: '<S207>/Merge6'
         */
        EeHTRR_Cnt_Htr_Unlck_RstSts = rtb_Merge6;

        /* DataStoreRead: '<S207>/DataStoreRead' */
        HTRR_ac_B.DataStoreRead_i = EeHTRR_Cnt_Htr_Unlck_RstSts;

        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S203>/Constant1'
         *  Constant: '<S203>/Constant2'
         *  DataStoreRead: '<S203>/StatusByte_LostCommCoolHtrA'
         *  Inport: '<Root>/VeHCDR_b_HVC_Heater_WarningFlag'
         *  Logic: '<S203>/LogicalOperator'
         *  RelationalOperator: '<S203>/RelationalOperator1'
         *  RelationalOperator: '<S203>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S203>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S203>/BitwiseOperator2'
         */
        if (((((sint32)HTRR_ac_DW.StatusByte_LostCommCoolHtrA) & 1) > 0) &&
                ((((uint32)HTRR_ac_DW.StatusByte_LostCommCoolHtrA) & 64U) == 0U))
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S197>/Constant'
             */
            VeHTRR_e_Adstd_Htr1_State = CeHTRR_e_Htr_Off;
        }
        else
        {
            (void)Rte_Read_VeHCDR_b_HVC_Heater_WarningFlag_Value(&rtb_Logical4_a);

            /* Switch: '<S201>/Switch1' incorporates:
             *  Constant: '<S421>/ConstantValue'
             *  Inport: '<Root>/VeHCDR_b_HVC_Heater_WarningFlag'
             *  Logic: '<S187>/Logical4'
             *  RelationalOperator: '<S421>/GreaterThan'
             *  S-Function (sfix_bitop): '<S421>/BitwiseLogicalOperator'
             *  Switch: '<S199>/Switch1'
             */
            if (rtb_Logical4_a || rtb_TmpSignalConversionAtVeHCDR)
            {
                /* Switch: '<S202>/Switch1' incorporates:
                 *  Constant: '<S198>/Constant'
                 *  Switch: '<S201>/Switch1'
                 */
                VeHTRR_e_Adstd_Htr1_State = CeHTRR_e_Htr_Faulty;
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S1>/Subsystem2' */
                /* Outputs for Atomic SubSystem: '<S413>/BitSelector7' */
                if ((((sint32)rtb_Switch12) & 1) > 0)
                {
                    /* Switch: '<S199>/Switch1' incorporates:
                     *  Constant: '<S196>/Constant'
                     *  Switch: '<S202>/Switch1'
                     */
                    VeHTRR_e_Adstd_Htr1_State = CeHTRR_e_Htr_On;
                }
                else
                {
                    /* Switch: '<S200>/Switch1' incorporates:
                     *  Constant: '<S195>/Constant'
                     *  Switch: '<S199>/Switch1'
                     *  Switch: '<S202>/Switch1'
                     */
                    VeHTRR_e_Adstd_Htr1_State = CeHTRR_e_Htr_Off;
                }

                /* End of Outputs for SubSystem: '<S413>/BitSelector7' */
                /* End of Outputs for SubSystem: '<S1>/Subsystem2' */
            }

            /* End of Switch: '<S201>/Switch1' */
        }

        /* End of Switch: '<S202>/Switch1' */

        /* If: '<S179>/If' incorporates:
         *  Constant: '<S181>/Constant'
         *  Constant: '<S183>/Constant'
         *  Inport: '<Root>/VeTHMR_P_ECH_HtrPwrTgt'
         *  RelationalOperator: '<S179>/Comparison1'
         *  RelationalOperator: '<S179>/Comparison4'
         *  Switch: '<S202>/Switch1'
         */
        if ((((uint32)VeHTRR_e_Adstd_Htr1_State) == CeHTRR_e_Htr_Off) ||
                (!rtb_Switch1_c))
        {
            /* Outputs for IfAction SubSystem: '<S179>/Off' incorporates:
             *  ActionPort: '<S185>/ActionPort'
             */
            /* Merge: '<S179>/Merge' incorporates:
             *  Constant: '<S191>/Calib'
             *  SignalConversion generated from: '<S185>/CoolantTempTrgt_OffCmd'
             */
            rtb_Merge = KeHTRR_T_ClntTempTgt_Off;

            /* Merge: '<S179>/Merge1' incorporates:
             *  Constant: '<S190>/Calib'
             *  SignalConversion generated from: '<S185>/HtrPwrTgt_OffCmd'
             */
            rtb_Merge1 = KeHTRR_P_HtrPwrTgt_Off;

            /* End of Outputs for SubSystem: '<S179>/Off' */
        }
        else if (((uint32)VeHTRR_e_Adstd_Htr1_State) == CeHTRR_e_Htr_On)
        {
            (void)Rte_Read_VeTHMR_P_ECH_HtrPwrTgt_Value(&rtb_Merge1);

            /* Merge: '<S179>/Merge' incorporates:
             *  Inport: '<Root>/VeTHMR_P_ECH_HtrPwrTgt'
             *  Inport: '<Root>/VeTHMR_T_ECH_ClntTempTgt'
             */
            (void)Rte_Read_VeTHMR_T_ECH_ClntTempTgt_Value(&rtb_Merge);
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S179>/Fault' incorporates:
             *  ActionPort: '<S184>/ActionPort'
             */
            /* Merge: '<S179>/Merge' incorporates:
             *  Constant: '<S189>/Calib'
             *  SignalConversion generated from: '<S184>/Htr1CoolantTempTrgt_Flt_Cmd'
             */
            rtb_Merge = KeHTRR_T_ClntTempTgt_Flt;

            /* Merge: '<S179>/Merge1' incorporates:
             *  Constant: '<S188>/Calib'
             *  SignalConversion generated from: '<S184>/Htr1PwrTgt_FltCmd'
             */
            rtb_Merge1 = KeHTRR_P_HtrPwrTgt_Flt;

            /* End of Outputs for SubSystem: '<S179>/Fault' */
        }

        /* End of If: '<S179>/If' */

        /* Outputs for Atomic SubSystem: '<S204>/GradientLimiter1' */
        /* Sum: '<S208>/Sum2' incorporates:
         *  UnitDelay: '<S208>/UnitDelay'
         */
        rtb_Sum2_n = rtb_Merge1 - HTRR_ac_DW.UnitDelay_DSTATE_m;

        /* Outputs for Atomic SubSystem: '<S208>/Limiter' */
        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S211>/Calib'
         *  RelationalOperator: '<S215>/RelationalOperator'
         */
        if (KeHTRR_P_HtrPwrTgt_RtLimUp < rtb_Sum2_n)
        {
            /* Switch: '<S224>/Switch1' */
            rtb_Switch1_nn = KeHTRR_P_HtrPwrTgt_RtLimUp;
        }
        else
        {
            /* Switch: '<S224>/Switch1' */
            rtb_Switch1_nn = rtb_Sum2_n;
        }

        /* End of Switch: '<S215>/Switch1' */

        /* Switch: '<S215>/Switch' incorporates:
         *  Constant: '<S210>/Calib'
         *  RelationalOperator: '<S215>/RelationalOperator1'
         */
        if (rtb_Switch1_nn <= KeHTRR_P_HtrPwrTgt_RtLimDown)
        {
            rtb_Switch1_nn = KeHTRR_P_HtrPwrTgt_RtLimDown;
        }

        /* End of Switch: '<S215>/Switch' */
        /* End of Outputs for SubSystem: '<S208>/Limiter' */

        /* Sum: '<S208>/Sum3' incorporates:
         *  UnitDelay: '<S208>/UnitDelay'
         */
        rtb_Sum2_n = rtb_Switch1_nn + HTRR_ac_DW.UnitDelay_DSTATE_m;

        /* Update for UnitDelay: '<S208>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE_m = rtb_Sum2_n;

        /* End of Outputs for SubSystem: '<S204>/GradientLimiter1' */

        /* Outputs for Atomic SubSystem: '<S204>/GradientLimiter2' */
        /* Sum: '<S209>/Sum2' incorporates:
         *  UnitDelay: '<S209>/UnitDelay'
         */
        rtb_Switch1_nn = rtb_Merge - HTRR_ac_DW.UnitDelay_DSTATE;

        /* Outputs for Atomic SubSystem: '<S209>/Limiter' */
        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S213>/Calib'
         *  RelationalOperator: '<S216>/RelationalOperator'
         */
        if (KeHTRR_T_ClntTempTgt_RtLimUp < rtb_Switch1_nn)
        {
            /* Switch: '<S216>/Switch1' */
            rtb_Switch1_nn = KeHTRR_T_ClntTempTgt_RtLimUp;
        }

        /* End of Switch: '<S216>/Switch1' */

        /* Switch: '<S216>/Switch' incorporates:
         *  Constant: '<S212>/Calib'
         *  RelationalOperator: '<S216>/RelationalOperator1'
         */
        if (rtb_Switch1_nn <= KeHTRR_T_ClntTempTgt_RtLimDown)
        {
            rtb_Switch1_nn = KeHTRR_T_ClntTempTgt_RtLimDown;
        }

        /* End of Switch: '<S216>/Switch' */
        /* End of Outputs for SubSystem: '<S209>/Limiter' */

        /* Sum: '<S209>/Sum3' incorporates:
         *  UnitDelay: '<S209>/UnitDelay'
         */
        rtb_Switch1_nn += HTRR_ac_DW.UnitDelay_DSTATE;

        /* Update for UnitDelay: '<S209>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE = rtb_Switch1_nn;

        /* End of Outputs for SubSystem: '<S204>/GradientLimiter2' */

        /* Logic: '<S204>/Logical4' incorporates:
         *  Constant: '<S182>/Constant'
         *  Constant: '<S214>/Calib'
         *  Logic: '<S179>/Logical1'
         *  Logic: '<S179>/Logical4'
         *  Logic: '<S204>/Logical1'
         *  RelationalOperator: '<S179>/Comparison2'
         *  Switch: '<S202>/Switch1'
         */
        rtb_Logical4_a = (((((uint32)VeHTRR_e_Adstd_Htr1_State) !=
                            CeHTRR_e_Htr_Off) && rtb_Switch1_c) ||
                          (KeHTRR_b_Htr1_GrdByPs_Dsbl));

        /* Switch: '<S206>/Switch' incorporates:
         *  Switch: '<S204>/Switch'
         */
        if (VeHTRR_b_HtrPwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S206>/Switch' incorporates:
             *  Constant: '<S233>/Calib'
             */
            rtb_Merge = KeHTRR_T_ClntTempTgt_DVC_Test;
        }
        else
        {
            if (rtb_Logical4_a)
            {
                /* Switch: '<S204>/Switch' incorporates:
                 *  Switch: '<S206>/Switch'
                 */
                rtb_Merge = rtb_Switch1_nn;
            }
        }

        /* End of Switch: '<S206>/Switch' */

        /* Outputs for Atomic SubSystem: '<S205>/Limiter' */
        /* Switch: '<S223>/Switch1' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S223>/RelationalOperator'
         */
        if (KeHTRR_T_ClntTempTgt_Max < rtb_Merge)
        {
            /* Switch: '<S224>/Switch1' */
            rtb_Switch1_nn = KeHTRR_T_ClntTempTgt_Max;
        }
        else
        {
            /* Switch: '<S224>/Switch1' */
            rtb_Switch1_nn = rtb_Merge;
        }

        /* End of Switch: '<S223>/Switch1' */

        /* Switch: '<S223>/Switch' incorporates:
         *  Constant: '<S221>/Calib'
         *  RelationalOperator: '<S223>/RelationalOperator1'
         */
        if (rtb_Switch1_nn > KeHTRR_T_ClntTempTgt_Min)
        {
            /* Switch: '<S223>/Switch' */
            rtb_Merge = rtb_Switch1_nn;
        }
        else
        {
            /* Switch: '<S223>/Switch' */
            rtb_Merge = KeHTRR_T_ClntTempTgt_Min;
        }

        /* End of Switch: '<S223>/Switch' */
        /* End of Outputs for SubSystem: '<S205>/Limiter' */

        /* Switch: '<S206>/Switch1' incorporates:
         *  Switch: '<S204>/Switch1'
         */
        if (VeHTRR_b_HtrPwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S206>/Switch1' incorporates:
             *  Inport: '<Root>/VeHTIR_P_DVC_HtrPwrLimit'
             */
            (void)Rte_Read_VeHTIR_P_DVC_HtrPwrLimit_Value(&rtb_Switch1_gk);
        }
        else if (rtb_Logical4_a)
        {
            /* Switch: '<S204>/Switch1' incorporates:
             *  Switch: '<S206>/Switch1'
             */
            rtb_Switch1_gk = rtb_Sum2_n;
        }
        else
        {
            /* Switch: '<S206>/Switch1' incorporates:
             *  Switch: '<S204>/Switch1'
             */
            rtb_Switch1_gk = rtb_Merge1;
        }

        /* End of Switch: '<S206>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S205>/Limiter1' */
        /* Switch: '<S224>/Switch1' incorporates:
         *  Constant: '<S217>/Calib'
         *  RelationalOperator: '<S224>/RelationalOperator'
         */
        if (KeHTRR_P_HtrPwrTgt_Max < rtb_Switch1_gk)
        {
            /* Switch: '<S224>/Switch1' */
            rtb_Switch1_nn = KeHTRR_P_HtrPwrTgt_Max;
        }
        else
        {
            /* Switch: '<S224>/Switch1' */
            rtb_Switch1_nn = rtb_Switch1_gk;
        }

        /* End of Switch: '<S224>/Switch1' */

        /* Switch: '<S224>/Switch' incorporates:
         *  Constant: '<S218>/Calib'
         *  RelationalOperator: '<S224>/RelationalOperator1'
         */
        if (rtb_Switch1_nn > KeHTRR_P_HtrPwrTgt_Min)
        {
            /* Switch: '<S224>/Switch' */
            rtb_Switch1_gk = rtb_Switch1_nn;
        }
        else
        {
            /* Switch: '<S224>/Switch' */
            rtb_Switch1_gk = KeHTRR_P_HtrPwrTgt_Min;
        }

        /* End of Switch: '<S224>/Switch' */
        /* End of Outputs for SubSystem: '<S205>/Limiter1' */

        /* Gain: '<S225>/Gain' */
        HTRR_ac_B.Gain_p = rtb_Merge;

        /* Gain: '<S226>/Gain' */
        HTRR_ac_B.Gain_o = rtb_Switch1_gk;

        /* Switch: '<S231>/Switch1' incorporates:
         *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
         */
        if (rtb_TmpSignalConversionAtVeH_jh)
        {
            /* Gain: '<S227>/Gain' incorporates:
             *  Constant: '<S228>/FALSEConstant'
             *  Switch: '<S231>/Switch1'
             */
            HTRR_ac_B.Gain_m = false;
        }
        else
        {
            (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value(&tmpRead);

            /* Switch: '<S230>/Switch1' incorporates:
             *  Constant: '<S229>/Constant'
             *  Constant: '<S232>/Calib'
             *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
             *  Logic: '<S228>/Logical2'
             *  RelationalOperator: '<S228>/Comparison1'
             *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr_Sts'
             */
            if ((tmpRead && (((uint32)rtb_TmpSignalConversionAtVeHT_e) ==
                             CeHTIR_e_HtrSts_LockedUntilService)) &&
                    (KeHTRR_b_HtrUnlockEnad_En))
            {
                /* Gain: '<S227>/Gain' incorporates:
                 *  Constant: '<S228>/TRUEConstant'
                 *  Switch: '<S230>/Switch1'
                 *  Switch: '<S231>/Switch1'
                 */
                HTRR_ac_B.Gain_m = true;
            }
            else
            {
                /* Gain: '<S227>/Gain' incorporates:
                 *  Constant: '<S219>/Calib'
                 *  Constant: '<S222>/Calib'
                 *  Logic: '<S205>/Logical1'
                 *  RelationalOperator: '<S205>/Comparison'
                 *  RelationalOperator: '<S205>/Comparison2'
                 *  Switch: '<S230>/Switch1'
                 *  Switch: '<S231>/Switch1'
                 */
                HTRR_ac_B.Gain_m = ((rtb_Merge > KeHTRR_T_ClntTempTgt_MinOnReq) ||
                                    (KeHTRR_P_HtrPwrTgt_MinOnReq <
                                     rtb_Switch1_gk));
            }

            /* End of Switch: '<S230>/Switch1' */
        }

        /* End of Switch: '<S231>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S4>/Htr_ECH_Control' */

    /* Outputs for Enabled SubSystem: '<S4>/Htr4_DBK_Control' incorporates:
     *  EnablePort: '<S11>/Enable'
     */
    if (GreaterThan_k)
    {
        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S152>/Constant1'
         *  Constant: '<S152>/Constant2'
         *  DataStoreRead: '<S152>/StatusByte_LostCommHB_CooltHtr4'
         *  Inport: '<Root>/VeHCDR_b_HV_Heater4_WarningFlag'
         *  Logic: '<S152>/LogicalOperator'
         *  RelationalOperator: '<S152>/RelationalOperator1'
         *  RelationalOperator: '<S152>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S152>/BitwiseOperator1'
         *  S-Function (sfix_bitop): '<S152>/BitwiseOperator2'
         */
        if (((((sint32)HTRR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 1) > 0) &&
                ((((uint32)HTRR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 64U) ==
                 0U))
        {
            /* Switch: '<S154>/Switch1' incorporates:
             *  Constant: '<S151>/Constant'
             */
            VeHTRR_e_Adstd_Htr4_State = CeHTRR_e_Htr_Off;
        }
        else
        {
            (void)Rte_Read_VeHCDR_b_HV_Heater4_WarningFlag_Value(&tmpRead_9);

            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S418>/ConstantValue'
             *  Inport: '<Root>/VeHCDR_b_HV_Heater4_WarningFlag'
             *  Logic: '<S140>/Logical4'
             *  RelationalOperator: '<S418>/GreaterThan'
             *  S-Function (sfix_bitop): '<S418>/BitwiseLogicalOperator'
             *  Switch: '<S155>/Switch1'
             */
            if (tmpRead_9 || rtb_TmpSignalConversionAtVeH_ag)
            {
                /* Switch: '<S154>/Switch1' incorporates:
                 *  Constant: '<S150>/Constant'
                 *  Switch: '<S153>/Switch1'
                 */
                VeHTRR_e_Adstd_Htr4_State = CeHTRR_e_Htr_Faulty;
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S1>/Subsystem2' */
                /* Outputs for Atomic SubSystem: '<S413>/BitSelector4' */
                if ((((sint32)rtb_Switch12) & 8) > 0)
                {
                    /* Switch: '<S155>/Switch1' incorporates:
                     *  Constant: '<S147>/Constant'
                     *  Switch: '<S154>/Switch1'
                     */
                    VeHTRR_e_Adstd_Htr4_State = CeHTRR_e_Htr_On;
                }
                else
                {
                    /* Switch: '<S156>/Switch1' incorporates:
                     *  Constant: '<S148>/Constant'
                     *  Switch: '<S154>/Switch1'
                     *  Switch: '<S155>/Switch1'
                     */
                    VeHTRR_e_Adstd_Htr4_State = CeHTRR_e_Htr_Off;
                }

                /* End of Outputs for SubSystem: '<S413>/BitSelector4' */
                /* End of Outputs for SubSystem: '<S1>/Subsystem2' */
            }

            /* End of Switch: '<S153>/Switch1' */
        }

        /* End of Switch: '<S154>/Switch1' */

        /* If: '<S133>/If' incorporates:
         *  Constant: '<S135>/Constant'
         *  Constant: '<S136>/Constant'
         *  Inport: '<Root>/VeTHMR_P_Htr4PwrTgt'
         *  Inport: '<Root>/VeTHMR_T_Htr4ClntTempTgt'
         *  RelationalOperator: '<S133>/Comparison2'
         *  RelationalOperator: '<S133>/Comparison3'
         *  Switch: '<S154>/Switch1'
         */
        if ((((uint32)VeHTRR_e_Adstd_Htr4_State) == CeHTRR_e_Htr_Off) ||
                (!rtb_Switch1_c))
        {
            /* Outputs for IfAction SubSystem: '<S133>/Off' incorporates:
             *  ActionPort: '<S138>/ActionPort'
             */
            /* Merge: '<S133>/Merge' incorporates:
             *  Constant: '<S144>/Calib'
             *  SignalConversion generated from: '<S138>/CoolantTempTrgt_OffCmd'
             */
            rtb_Merge_p = KeHTRR_T_Htr4ClntTempTgt_Off;

            /* Merge: '<S133>/Merge1' incorporates:
             *  Constant: '<S143>/Calib'
             *  SignalConversion generated from: '<S138>/Htr4PwrTgt_OffCmd'
             */
            rtb_Merge1_g = KeHTRR_P_Htr4PwrTgt_Off;

            /* End of Outputs for SubSystem: '<S133>/Off' */
        }
        else if (((uint32)VeHTRR_e_Adstd_Htr4_State) == CeHTRR_e_Htr_On)
        {
            (void)Rte_Read_VeTHMR_P_Htr4PwrTgt_Value(&rtb_Merge1_g);
            (void)Rte_Read_VeTHMR_T_Htr4ClntTempTgt_Value(&rtb_Merge_p);
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S133>/Fault' incorporates:
             *  ActionPort: '<S137>/ActionPort'
             */
            /* Merge: '<S133>/Merge' incorporates:
             *  Constant: '<S142>/Calib'
             *  SignalConversion generated from: '<S137>/CoolantTempTrgt_Flt_Cmd'
             */
            rtb_Merge_p = KeHTRR_T_Htr4ClntTempTgt_Flt;

            /* Merge: '<S133>/Merge1' incorporates:
             *  Constant: '<S141>/Calib'
             *  SignalConversion generated from: '<S137>/Htr4PwrTgt_FltCmd'
             */
            rtb_Merge1_g = KeHTRR_P_Htr4PwrTgt_Flt;

            /* End of Outputs for SubSystem: '<S133>/Fault' */
        }

        /* End of If: '<S133>/If' */

        /* Inport: '<Root>/VeHTIR_P_DVC_Htr4PwrLimit' */
        (void)Rte_Read_VeHTIR_P_DVC_Htr4PwrLimit_Value(&rtb_Switch1_ii);

        /* Outputs for Atomic SubSystem: '<S157>/GradientLimiter2' */
        /* Sum: '<S161>/Sum2' incorporates:
         *  UnitDelay: '<S161>/UnitDelay'
         */
        rtb_Merge_p -= HTRR_ac_DW.UnitDelay_DSTATE_l;

        /* Outputs for Atomic SubSystem: '<S161>/Limiter' */
        /* Switch: '<S167>/Switch1' incorporates:
         *  Constant: '<S165>/Calib'
         *  RelationalOperator: '<S167>/RelationalOperator'
         */
        if (KeHTRR_T_Htr4ClntTempTgt_RtLimUp < rtb_Merge_p)
        {
            /* UnitDelay: '<S160>/UnitDelay' */
            rtb_Merge_p = KeHTRR_T_Htr4ClntTempTgt_RtLimUp;
        }

        /* End of Switch: '<S167>/Switch1' */

        /* Switch: '<S167>/Switch' incorporates:
         *  Constant: '<S164>/Calib'
         *  RelationalOperator: '<S167>/RelationalOperator1'
         */
        if (rtb_Merge_p <= KeHTRR_T_Htr4ClntTempTgt_RtLimDown)
        {
            rtb_Merge_p = KeHTRR_T_Htr4ClntTempTgt_RtLimDown;
        }

        /* End of Switch: '<S167>/Switch' */
        /* End of Outputs for SubSystem: '<S161>/Limiter' */

        /* Sum: '<S161>/Sum3' incorporates:
         *  UnitDelay: '<S161>/UnitDelay'
         */
        rtb_Merge_p += HTRR_ac_DW.UnitDelay_DSTATE_l;

        /* Update for UnitDelay: '<S161>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE_l = rtb_Merge_p;

        /* End of Outputs for SubSystem: '<S157>/GradientLimiter2' */

        /* Outputs for Atomic SubSystem: '<S157>/GradientLimiter1' */
        /* Sum: '<S160>/Sum2' incorporates:
         *  UnitDelay: '<S160>/UnitDelay'
         */
        rtb_Merge1_g -= HTRR_ac_DW.UnitDelay_DSTATE_h;

        /* Outputs for Atomic SubSystem: '<S160>/Limiter' */
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S163>/Calib'
         *  RelationalOperator: '<S166>/RelationalOperator'
         */
        if (KeHTRR_P_Htr4PwrTgt_RtLimUp < rtb_Merge1_g)
        {
            /* Switch: '<S175>/Switch1' */
            rtb_Switch1_gk = KeHTRR_P_Htr4PwrTgt_RtLimUp;
        }
        else
        {
            /* Switch: '<S175>/Switch1' */
            rtb_Switch1_gk = rtb_Merge1_g;
        }

        /* End of Switch: '<S166>/Switch1' */

        /* Switch: '<S166>/Switch' incorporates:
         *  Constant: '<S162>/Calib'
         *  RelationalOperator: '<S166>/RelationalOperator1'
         */
        if (rtb_Switch1_gk <= KeHTRR_P_Htr4PwrTgt_RtLimDown)
        {
            rtb_Switch1_gk = KeHTRR_P_Htr4PwrTgt_RtLimDown;
        }

        /* End of Switch: '<S166>/Switch' */
        /* End of Outputs for SubSystem: '<S160>/Limiter' */

        /* Sum: '<S160>/Sum3' incorporates:
         *  UnitDelay: '<S160>/UnitDelay'
         */
        rtb_Merge1_g = rtb_Switch1_gk + HTRR_ac_DW.UnitDelay_DSTATE_h;

        /* Update for UnitDelay: '<S160>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE_h = rtb_Merge1_g;

        /* End of Outputs for SubSystem: '<S157>/GradientLimiter1' */

        /* Switch: '<S159>/Switch' */
        if (VeHTRR_b_Htr4PwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S159>/Switch' incorporates:
             *  Constant: '<S178>/Calib'
             */
            rtb_Merge_p = KeHTRR_T_Htr4ClntTempTgt_DVC_Test;
        }

        /* End of Switch: '<S159>/Switch' */

        /* Outputs for Atomic SubSystem: '<S158>/Limiter' */
        /* Switch: '<S174>/Switch1' incorporates:
         *  Constant: '<S171>/Calib'
         *  RelationalOperator: '<S174>/RelationalOperator'
         */
        if (KeHTRR_T_Htr4ClntTempTgt_Max < rtb_Merge_p)
        {
            /* Switch: '<S175>/Switch1' */
            rtb_Switch1_gk = KeHTRR_T_Htr4ClntTempTgt_Max;
        }
        else
        {
            /* Switch: '<S175>/Switch1' */
            rtb_Switch1_gk = rtb_Merge_p;
        }

        /* End of Switch: '<S174>/Switch1' */

        /* Switch: '<S174>/Switch' incorporates:
         *  Constant: '<S172>/Calib'
         *  RelationalOperator: '<S174>/RelationalOperator1'
         */
        if (rtb_Switch1_gk > KeHTRR_T_Htr4ClntTempTgt_Min)
        {
            /* Switch: '<S174>/Switch' */
            rtb_Merge_p = rtb_Switch1_gk;
        }
        else
        {
            /* Switch: '<S174>/Switch' */
            rtb_Merge_p = KeHTRR_T_Htr4ClntTempTgt_Min;
        }

        /* End of Switch: '<S174>/Switch' */
        /* End of Outputs for SubSystem: '<S158>/Limiter' */

        /* Switch: '<S159>/Switch1' */
        if (!VeHTRR_b_Htr4PwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S159>/Switch1' */
            rtb_Switch1_ii = rtb_Merge1_g;
        }

        /* End of Switch: '<S159>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S158>/Limiter1' */
        /* Switch: '<S175>/Switch1' incorporates:
         *  Constant: '<S168>/Calib'
         *  RelationalOperator: '<S175>/RelationalOperator'
         */
        if (KeHTRR_P_Htr4PwrTgt_Max < rtb_Switch1_ii)
        {
            /* Switch: '<S175>/Switch1' */
            rtb_Switch1_gk = KeHTRR_P_Htr4PwrTgt_Max;
        }
        else
        {
            /* Switch: '<S175>/Switch1' */
            rtb_Switch1_gk = rtb_Switch1_ii;
        }

        /* End of Switch: '<S175>/Switch1' */

        /* Switch: '<S175>/Switch' incorporates:
         *  Constant: '<S169>/Calib'
         *  RelationalOperator: '<S175>/RelationalOperator1'
         */
        if (rtb_Switch1_gk > KeHTRR_P_Htr4PwrTgt_Min)
        {
            /* Switch: '<S175>/Switch' */
            rtb_Switch1_ii = rtb_Switch1_gk;
        }
        else
        {
            /* Switch: '<S175>/Switch' */
            rtb_Switch1_ii = KeHTRR_P_Htr4PwrTgt_Min;
        }

        /* End of Switch: '<S175>/Switch' */
        /* End of Outputs for SubSystem: '<S158>/Limiter1' */

        /* Logic: '<S158>/Logical1' incorporates:
         *  Constant: '<S170>/Calib'
         *  Constant: '<S173>/Calib'
         *  RelationalOperator: '<S158>/Comparison'
         *  RelationalOperator: '<S158>/Comparison2'
         */
        HTRR_ac_B.Logical1 = ((rtb_Merge_p > KeHTRR_T_Htr4ClntTempTgt_MinOnReq) ||
                              (KeHTRR_P_Htr4PwrTgt_MinOnReq < rtb_Switch1_ii));

        /* Gain: '<S176>/Gain' */
        HTRR_ac_B.Gain_k = rtb_Merge_p;

        /* Gain: '<S177>/Gain' */
        HTRR_ac_B.Gain_fw = rtb_Switch1_ii;
    }

    /* End of Outputs for SubSystem: '<S4>/Htr4_DBK_Control' */

    /* Outputs for Enabled SubSystem: '<S4>/Htr2_EAH_Control' incorporates:
     *  EnablePort: '<S9>/Enable'
     */
    if (GreaterThan_e)
    {
        /* Inport: '<Root>/VeHCDR_b_HV_Heater2_WarningFlag' */
        (void)Rte_Read_VeHCDR_b_HV_Heater2_WarningFlag_Value(&tmpRead_7);

        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S420>/ConstantValue'
         *  Logic: '<S34>/Logical4'
         *  RelationalOperator: '<S420>/GreaterThan'
         *  S-Function (sfix_bitop): '<S420>/BitwiseLogicalOperator'
         *  Switch: '<S46>/Switch1'
         */
        if (tmpRead_7 || rtb_TmpSignalConversionAtVeHC_h)
        {
            /* Switch: '<S45>/Switch1' incorporates:
             *  Constant: '<S44>/Constant'
             */
            VeHTRR_e_Adstd_Htr2_State = CeHTRR_e_Htr_Faulty;
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/Subsystem2' */
            /* Outputs for Atomic SubSystem: '<S413>/BitSelector6' */
            if ((((sint32)rtb_Switch12) & 2) > 0)
            {
                /* Switch: '<S46>/Switch1' incorporates:
                 *  Constant: '<S43>/Constant'
                 *  Switch: '<S45>/Switch1'
                 */
                VeHTRR_e_Adstd_Htr2_State = CeHTRR_e_Htr_On;
            }
            else
            {
                /* Switch: '<S47>/Switch1' incorporates:
                 *  Constant: '<S42>/Constant'
                 *  Switch: '<S45>/Switch1'
                 *  Switch: '<S46>/Switch1'
                 */
                VeHTRR_e_Adstd_Htr2_State = CeHTRR_e_Htr_Off;
            }

            /* End of Outputs for SubSystem: '<S413>/BitSelector6' */
            /* End of Outputs for SubSystem: '<S1>/Subsystem2' */
        }

        /* End of Switch: '<S45>/Switch1' */

        /* If: '<S27>/If' incorporates:
         *  Constant: '<S29>/Constant'
         *  Constant: '<S30>/Constant'
         *  Inport: '<Root>/VeTHMR_P_Htr2PwrTgt'
         *  Inport: '<Root>/VeTHMR_T_Htr2ClntTempTgt'
         *  RelationalOperator: '<S27>/Comparison1'
         *  RelationalOperator: '<S27>/Comparison4'
         *  Switch: '<S45>/Switch1'
         */
        if ((((uint32)VeHTRR_e_Adstd_Htr2_State) == CeHTRR_e_Htr_Off) ||
                (!rtb_Switch1_c))
        {
            /* Outputs for IfAction SubSystem: '<S27>/Off' incorporates:
             *  ActionPort: '<S32>/ActionPort'
             */
            /* Merge: '<S27>/Merge' incorporates:
             *  Constant: '<S38>/Calib'
             *  SignalConversion generated from: '<S32>/Htr2CoolantTempTrgt_OffCmd'
             */
            rtb_Merge_c = KeHTRR_T_Htr2ClntTempTgt_Off;

            /* Merge: '<S27>/Merge1' incorporates:
             *  Constant: '<S37>/Calib'
             *  SignalConversion generated from: '<S32>/Htr2PwrTgt_OffCmd'
             */
            rtb_Merge1_c = KeHTRR_P_Htr2PwrTgt_Off;

            /* End of Outputs for SubSystem: '<S27>/Off' */
        }
        else if (((uint32)VeHTRR_e_Adstd_Htr2_State) == CeHTRR_e_Htr_On)
        {
            (void)Rte_Read_VeTHMR_P_Htr2PwrTgt_Value(&rtb_Merge1_c);
            (void)Rte_Read_VeTHMR_T_Htr2ClntTempTgt_Value(&rtb_Merge_c);
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S27>/Fault' incorporates:
             *  ActionPort: '<S31>/ActionPort'
             */
            /* Merge: '<S27>/Merge' incorporates:
             *  Constant: '<S36>/Calib'
             *  SignalConversion generated from: '<S31>/Htr2CoolantTempTrgt_Flt_Cmd'
             */
            rtb_Merge_c = KeHTRR_T_Htr2ClntTempTgt_Flt;

            /* Merge: '<S27>/Merge1' incorporates:
             *  Constant: '<S35>/Calib'
             *  SignalConversion generated from: '<S31>/Htr2PwrTgt_FltCmd'
             */
            rtb_Merge1_c = KeHTRR_P_Htr2PwrTgt_Flt;

            /* End of Outputs for SubSystem: '<S27>/Fault' */
        }

        /* End of If: '<S27>/If' */

        /* Inport: '<Root>/VeHTIR_P_DVC_Htr2PwrLimit' */
        (void)Rte_Read_VeHTIR_P_DVC_Htr2PwrLimit_Value(&rtb_Switch1_bb);

        /* Outputs for Atomic SubSystem: '<S48>/GradientLimiter2' */
        /* Sum: '<S52>/Sum2' incorporates:
         *  UnitDelay: '<S52>/UnitDelay'
         */
        rtb_Merge_c -= HTRR_ac_DW.UnitDelay_DSTATE_i;

        /* Outputs for Atomic SubSystem: '<S52>/Limiter' */
        /* Switch: '<S58>/Switch1' incorporates:
         *  Constant: '<S56>/Calib'
         *  RelationalOperator: '<S58>/RelationalOperator'
         */
        if (KeHTRR_T_Htr2ClntTempTgt_RtLimUp < rtb_Merge_c)
        {
            /* UnitDelay: '<S51>/UnitDelay' */
            rtb_Merge_c = KeHTRR_T_Htr2ClntTempTgt_RtLimUp;
        }

        /* End of Switch: '<S58>/Switch1' */

        /* Switch: '<S58>/Switch' incorporates:
         *  Constant: '<S55>/Calib'
         *  RelationalOperator: '<S58>/RelationalOperator1'
         */
        if (rtb_Merge_c <= KeHTRR_T_Htr2ClntTempTgt_RtLimDown)
        {
            rtb_Merge_c = KeHTRR_T_Htr2ClntTempTgt_RtLimDown;
        }

        /* End of Switch: '<S58>/Switch' */
        /* End of Outputs for SubSystem: '<S52>/Limiter' */

        /* Sum: '<S52>/Sum3' incorporates:
         *  UnitDelay: '<S52>/UnitDelay'
         */
        rtb_Merge_c += HTRR_ac_DW.UnitDelay_DSTATE_i;

        /* Update for UnitDelay: '<S52>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE_i = rtb_Merge_c;

        /* End of Outputs for SubSystem: '<S48>/GradientLimiter2' */

        /* Outputs for Atomic SubSystem: '<S48>/GradientLimiter1' */
        /* Sum: '<S51>/Sum2' incorporates:
         *  UnitDelay: '<S51>/UnitDelay'
         */
        rtb_Merge1_c -= HTRR_ac_DW.UnitDelay_DSTATE_j;

        /* Outputs for Atomic SubSystem: '<S51>/Limiter' */
        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S54>/Calib'
         *  RelationalOperator: '<S57>/RelationalOperator'
         */
        if (KeHTRR_P_Htr2PwrTgt_RtLimUp < rtb_Merge1_c)
        {
            /* Switch: '<S66>/Switch1' */
            rtb_Switch1_ii = KeHTRR_P_Htr2PwrTgt_RtLimUp;
        }
        else
        {
            /* Switch: '<S66>/Switch1' */
            rtb_Switch1_ii = rtb_Merge1_c;
        }

        /* End of Switch: '<S57>/Switch1' */

        /* Switch: '<S57>/Switch' incorporates:
         *  Constant: '<S53>/Calib'
         *  RelationalOperator: '<S57>/RelationalOperator1'
         */
        if (rtb_Switch1_ii <= KeHTRR_P_Htr2PwrTgt_RtLimDown)
        {
            rtb_Switch1_ii = KeHTRR_P_Htr2PwrTgt_RtLimDown;
        }

        /* End of Switch: '<S57>/Switch' */
        /* End of Outputs for SubSystem: '<S51>/Limiter' */

        /* Sum: '<S51>/Sum3' incorporates:
         *  UnitDelay: '<S51>/UnitDelay'
         */
        rtb_Merge1_c = rtb_Switch1_ii + HTRR_ac_DW.UnitDelay_DSTATE_j;

        /* Update for UnitDelay: '<S51>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE_j = rtb_Merge1_c;

        /* End of Outputs for SubSystem: '<S48>/GradientLimiter1' */

        /* Switch: '<S50>/Switch' */
        if (VeHTRR_b_Htr2PwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S50>/Switch' incorporates:
             *  Constant: '<S69>/Calib'
             */
            rtb_Merge_c = KeHTRR_T_Htr2ClntTempTgt_DVC_Test;
        }

        /* End of Switch: '<S50>/Switch' */

        /* Outputs for Atomic SubSystem: '<S49>/Limiter' */
        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S62>/Calib'
         *  RelationalOperator: '<S65>/RelationalOperator'
         */
        if (KeHTRR_T_Htr2ClntTempTgt_Max < rtb_Merge_c)
        {
            /* Switch: '<S66>/Switch1' */
            rtb_Switch1_ii = KeHTRR_T_Htr2ClntTempTgt_Max;
        }
        else
        {
            /* Switch: '<S66>/Switch1' */
            rtb_Switch1_ii = rtb_Merge_c;
        }

        /* End of Switch: '<S65>/Switch1' */

        /* Switch: '<S65>/Switch' incorporates:
         *  Constant: '<S63>/Calib'
         *  RelationalOperator: '<S65>/RelationalOperator1'
         */
        if (rtb_Switch1_ii > KeHTRR_T_Htr2ClntTempTgt_Min)
        {
            /* Switch: '<S65>/Switch' */
            rtb_Merge_c = rtb_Switch1_ii;
        }
        else
        {
            /* Switch: '<S65>/Switch' */
            rtb_Merge_c = KeHTRR_T_Htr2ClntTempTgt_Min;
        }

        /* End of Switch: '<S65>/Switch' */
        /* End of Outputs for SubSystem: '<S49>/Limiter' */

        /* Switch: '<S50>/Switch1' */
        if (!VeHTRR_b_Htr2PwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S50>/Switch1' */
            rtb_Switch1_bb = rtb_Merge1_c;
        }

        /* End of Switch: '<S50>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S49>/Limiter1' */
        /* Switch: '<S66>/Switch1' incorporates:
         *  Constant: '<S59>/Calib'
         *  RelationalOperator: '<S66>/RelationalOperator'
         */
        if (KeHTRR_P_Htr2PwrTgt_Max < rtb_Switch1_bb)
        {
            /* Switch: '<S66>/Switch1' */
            rtb_Switch1_ii = KeHTRR_P_Htr2PwrTgt_Max;
        }
        else
        {
            /* Switch: '<S66>/Switch1' */
            rtb_Switch1_ii = rtb_Switch1_bb;
        }

        /* End of Switch: '<S66>/Switch1' */

        /* Switch: '<S66>/Switch' incorporates:
         *  Constant: '<S60>/Calib'
         *  RelationalOperator: '<S66>/RelationalOperator1'
         */
        if (rtb_Switch1_ii > KeHTRR_P_Htr2PwrTgt_Min)
        {
            /* Switch: '<S66>/Switch' */
            rtb_Switch1_bb = rtb_Switch1_ii;
        }
        else
        {
            /* Switch: '<S66>/Switch' */
            rtb_Switch1_bb = KeHTRR_P_Htr2PwrTgt_Min;
        }

        /* End of Switch: '<S66>/Switch' */
        /* End of Outputs for SubSystem: '<S49>/Limiter1' */

        /* Logic: '<S49>/Logical1' incorporates:
         *  Constant: '<S61>/Calib'
         *  Constant: '<S64>/Calib'
         *  RelationalOperator: '<S49>/Comparison'
         *  RelationalOperator: '<S49>/Comparison2'
         */
        HTRR_ac_B.Logical1_a = ((rtb_Merge_c > KeHTRR_T_Htr2ClntTempTgt_MinOnReq)
                                || (KeHTRR_P_Htr2PwrTgt_MinOnReq <
            rtb_Switch1_bb));

        /* Gain: '<S67>/Gain' */
        HTRR_ac_B.Gain_fp = rtb_Merge_c;

        /* Gain: '<S68>/Gain' */
        HTRR_ac_B.Gain_c = rtb_Switch1_bb;
    }

    /* End of Outputs for SubSystem: '<S4>/Htr2_EAH_Control' */

    /* Outputs for Enabled SubSystem: '<S4>/Htr3HtElmntCntrl' incorporates:
     *  EnablePort: '<S10>/Enable'
     */
    if (GreaterThan_jt)
    {
        /* Inport: '<Root>/VeHCDR_b_HV_Heater3_WarningFlag' */
        (void)Rte_Read_VeHCDR_b_HV_Heater3_WarningFlag_Value(&tmpRead_8);

        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S419>/ConstantValue'
         *  Logic: '<S78>/Logical4'
         *  RelationalOperator: '<S419>/GreaterThan'
         *  S-Function (sfix_bitop): '<S419>/BitwiseLogicalOperator'
         *  Switch: '<S98>/Switch1'
         */
        if (tmpRead_8 || rtb_TmpSignalConversionAtVeHC_g)
        {
            /* Switch: '<S97>/Switch1' incorporates:
             *  Constant: '<S95>/Constant'
             */
            VeHTRR_e_Adstd_Htr3_State = CeHTRR_e_Htr_Faulty;
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/Subsystem2' */
            /* Outputs for Atomic SubSystem: '<S413>/BitSelector5' */
            if ((((sint32)rtb_Switch12) & 4) > 0)
            {
                /* Switch: '<S98>/Switch1' incorporates:
                 *  Constant: '<S96>/Constant'
                 *  Switch: '<S97>/Switch1'
                 */
                VeHTRR_e_Adstd_Htr3_State = CeHTRR_e_Htr_On;
            }
            else
            {
                /* Switch: '<S99>/Switch1' incorporates:
                 *  Constant: '<S94>/Constant'
                 *  Switch: '<S97>/Switch1'
                 *  Switch: '<S98>/Switch1'
                 */
                VeHTRR_e_Adstd_Htr3_State = CeHTRR_e_Htr_Off;
            }

            /* End of Outputs for SubSystem: '<S413>/BitSelector5' */
            /* End of Outputs for SubSystem: '<S1>/Subsystem2' */
        }

        /* End of Switch: '<S97>/Switch1' */

        /* If: '<S70>/If' incorporates:
         *  Constant: '<S73>/Constant'
         *  Constant: '<S74>/Constant'
         *  Inport: '<Root>/VeTHMR_T_Htr3ClntTempTgt'
         *  RelationalOperator: '<S70>/Comparison1'
         *  RelationalOperator: '<S70>/Comparison4'
         *  Switch: '<S97>/Switch1'
         */
        if ((((uint32)VeHTRR_e_Adstd_Htr3_State) == CeHTRR_e_Htr_Off) ||
                (!rtb_Switch1_c))
        {
            /* Outputs for IfAction SubSystem: '<S70>/Off' incorporates:
             *  ActionPort: '<S76>/ActionPort'
             */
            /* Merge: '<S70>/Merge' incorporates:
             *  Constant: '<S82>/Calib'
             *  SignalConversion generated from: '<S76>/Htr3CoolantTempTrgt_OffCmd'
             */
            rtb_Merge_b = KeHTRR_T_Htr3ClntTempTgt_Off;

            /* Merge: '<S70>/Merge1' incorporates:
             *  Constant: '<S81>/Calib'
             *  SignalConversion generated from: '<S76>/Htr3PwrTgt_OffCmd'
             */
            rtb_TmpSignalConversionAtVeTHMR = KeHTRR_P_Htr3PwrTgt_Off;

            /* End of Outputs for SubSystem: '<S70>/Off' */
        }
        else if (((uint32)VeHTRR_e_Adstd_Htr3_State) == CeHTRR_e_Htr_On)
        {
            (void)Rte_Read_VeTHMR_T_Htr3ClntTempTgt_Value(&rtb_Merge_b);

            /* Outputs for IfAction SubSystem: '<S70>/On' incorporates:
             *  ActionPort: '<S77>/ActionPort'
             */
            /* Switch: '<S84>/Switch2' incorporates:
             *  Constant: '<S92>/Calib'
             *  Inport: '<Root>/VeTHMR_T_Htr3ClntTempTgt'
             */
            if (KeHTRR_b_Htr3PwrTgtLvl_En)
            {
                /* Switch: '<S87>/Switch1' incorporates:
                 *  Constant: '<S88>/Calib'
                 *  Constant: '<S89>/Calib'
                 *  Constant: '<S90>/Calib'
                 *  RelationalOperator: '<S84>/Comparison1'
                 *  RelationalOperator: '<S84>/Comparison2'
                 *  RelationalOperator: '<S84>/Comparison3'
                 *  Switch: '<S85>/Switch1'
                 *  Switch: '<S86>/Switch1'
                 */
                if (rtb_TmpSignalConversionAtVeTHMR < KeHTRR_P_Htr3PwrTgt_Lvl1)
                {
                    /* Merge: '<S70>/Merge1' incorporates:
                     *  Constant: '<S91>/Calib'
                     *  Switch: '<S87>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR = KeHTRR_P_Htr3PwrTgt_Zero;
                }
                else if (rtb_TmpSignalConversionAtVeTHMR <
                         KeHTRR_P_Htr3PwrTgt_Lvl2)
                {
                    /* Switch: '<S85>/Switch1' incorporates:
                     *  Merge: '<S70>/Merge1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR = KeHTRR_P_Htr3PwrTgt_Lvl1;
                }
                else if (rtb_TmpSignalConversionAtVeTHMR <
                         KeHTRR_P_Htr3PwrTgt_Lvl3)
                {
                    /* Switch: '<S86>/Switch1' incorporates:
                     *  Constant: '<S89>/Calib'
                     *  Merge: '<S70>/Merge1'
                     *  Switch: '<S85>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR = KeHTRR_P_Htr3PwrTgt_Lvl2;
                }
                else
                {
                    /* Merge: '<S70>/Merge1' incorporates:
                     *  Constant: '<S90>/Calib'
                     *  Switch: '<S85>/Switch1'
                     *  Switch: '<S86>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR = KeHTRR_P_Htr3PwrTgt_Lvl3;
                }

                /* End of Switch: '<S87>/Switch1' */
            }

            /* End of Switch: '<S84>/Switch2' */
            /* End of Outputs for SubSystem: '<S70>/On' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S70>/Fault' incorporates:
             *  ActionPort: '<S75>/ActionPort'
             */
            /* Merge: '<S70>/Merge' incorporates:
             *  Constant: '<S80>/Calib'
             *  SignalConversion generated from: '<S75>/CoolantTempTrgt_Flt_Cmd'
             */
            rtb_Merge_b = KeHTRR_T_Htr3ClntTempTgt_Flt;

            /* Merge: '<S70>/Merge1' incorporates:
             *  Constant: '<S79>/Calib'
             *  SignalConversion generated from: '<S75>/HtrPwrTgt_FltCmd'
             */
            rtb_TmpSignalConversionAtVeTHMR = KeHTRR_P_Htr3PwrTgt_Flt;

            /* End of Outputs for SubSystem: '<S70>/Fault' */
        }

        /* End of If: '<S70>/If' */

        /* Outputs for Atomic SubSystem: '<S100>/GradientLimiter2' */
        /* Sum: '<S104>/Sum2' incorporates:
         *  UnitDelay: '<S104>/UnitDelay'
         */
        rtb_Merge_b -= HTRR_ac_DW.UnitDelay_DSTATE_d;

        /* Outputs for Atomic SubSystem: '<S104>/Limiter' */
        /* Switch: '<S110>/Switch1' incorporates:
         *  Constant: '<S108>/Calib'
         *  RelationalOperator: '<S110>/RelationalOperator'
         */
        if (KeHTRR_T_Htr3ClntTempTgt_RtLimUp < rtb_Merge_b)
        {
            /* UnitDelay: '<S103>/UnitDelay' */
            rtb_Merge_b = KeHTRR_T_Htr3ClntTempTgt_RtLimUp;
        }

        /* End of Switch: '<S110>/Switch1' */

        /* Switch: '<S110>/Switch' incorporates:
         *  Constant: '<S107>/Calib'
         *  RelationalOperator: '<S110>/RelationalOperator1'
         */
        if (rtb_Merge_b <= KeHTRR_T_Htr3ClntTempTgt_RtLimDown)
        {
            rtb_Merge_b = KeHTRR_T_Htr3ClntTempTgt_RtLimDown;
        }

        /* End of Switch: '<S110>/Switch' */
        /* End of Outputs for SubSystem: '<S104>/Limiter' */

        /* Sum: '<S104>/Sum3' incorporates:
         *  UnitDelay: '<S104>/UnitDelay'
         */
        rtb_Merge_b += HTRR_ac_DW.UnitDelay_DSTATE_d;

        /* Update for UnitDelay: '<S104>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE_d = rtb_Merge_b;

        /* End of Outputs for SubSystem: '<S100>/GradientLimiter2' */

        /* Outputs for Atomic SubSystem: '<S100>/GradientLimiter1' */
        /* Sum: '<S103>/Sum2' incorporates:
         *  UnitDelay: '<S103>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTHMR -= HTRR_ac_DW.UnitDelay_DSTATE_a;

        /* Outputs for Atomic SubSystem: '<S103>/Limiter' */
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S106>/Calib'
         *  RelationalOperator: '<S109>/RelationalOperator'
         */
        if (KeHTRR_P_Htr3PwrTgt_RtLimUp < rtb_TmpSignalConversionAtVeTHMR)
        {
            /* Switch: '<S118>/Switch1' */
            rtb_Switch1_bb = KeHTRR_P_Htr3PwrTgt_RtLimUp;
        }
        else
        {
            /* Switch: '<S118>/Switch1' */
            rtb_Switch1_bb = rtb_TmpSignalConversionAtVeTHMR;
        }

        /* End of Switch: '<S109>/Switch1' */

        /* Switch: '<S109>/Switch' incorporates:
         *  Constant: '<S105>/Calib'
         *  RelationalOperator: '<S109>/RelationalOperator1'
         */
        if (rtb_Switch1_bb <= KeHTRR_P_Htr3PwrTgt_RtLimDown)
        {
            rtb_Switch1_bb = KeHTRR_P_Htr3PwrTgt_RtLimDown;
        }

        /* End of Switch: '<S109>/Switch' */
        /* End of Outputs for SubSystem: '<S103>/Limiter' */

        /* Sum: '<S103>/Sum3' incorporates:
         *  UnitDelay: '<S103>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTHMR = rtb_Switch1_bb +
            HTRR_ac_DW.UnitDelay_DSTATE_a;

        /* Update for UnitDelay: '<S103>/UnitDelay' */
        HTRR_ac_DW.UnitDelay_DSTATE_a = rtb_TmpSignalConversionAtVeTHMR;

        /* End of Outputs for SubSystem: '<S100>/GradientLimiter1' */

        /* Switch: '<S102>/Switch' */
        if (VeHTRR_b_Htr3PwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S102>/Switch' incorporates:
             *  Constant: '<S121>/Calib'
             */
            rtb_Merge_b = KeHTRR_T_Htr3ClntTempTgt_DVC_Test;
        }

        /* End of Switch: '<S102>/Switch' */

        /* Outputs for Atomic SubSystem: '<S101>/Limiter' */
        /* Switch: '<S117>/Switch1' incorporates:
         *  Constant: '<S114>/Calib'
         *  RelationalOperator: '<S117>/RelationalOperator'
         */
        if (KeHTRR_T_Htr3ClntTempTgt_Max < rtb_Merge_b)
        {
            /* Switch: '<S118>/Switch1' */
            rtb_Switch1_bb = KeHTRR_T_Htr3ClntTempTgt_Max;
        }
        else
        {
            /* Switch: '<S118>/Switch1' */
            rtb_Switch1_bb = rtb_Merge_b;
        }

        /* End of Switch: '<S117>/Switch1' */

        /* Switch: '<S117>/Switch' incorporates:
         *  Constant: '<S115>/Calib'
         *  RelationalOperator: '<S117>/RelationalOperator1'
         */
        if (rtb_Switch1_bb > KeHTRR_T_Htr3ClntTempTgt_Min)
        {
            /* Switch: '<S117>/Switch' */
            rtb_Merge_b = rtb_Switch1_bb;
        }
        else
        {
            /* Switch: '<S117>/Switch' */
            rtb_Merge_b = KeHTRR_T_Htr3ClntTempTgt_Min;
        }

        /* End of Switch: '<S117>/Switch' */
        /* End of Outputs for SubSystem: '<S101>/Limiter' */

        /* Switch: '<S102>/Switch1' */
        if (VeHTRR_b_Htr3PwrLimit_DVC_Lim_AD)
        {
            /* Switch: '<S122>/Switch2' incorporates:
             *  Constant: '<S130>/Calib'
             */
            if (KeHTRR_b_Htr3PwrTgtLvl_En)
            {
                /* Switch: '<S125>/Switch1' incorporates:
                 *  Constant: '<S126>/Calib'
                 *  Constant: '<S127>/Calib'
                 *  Constant: '<S128>/Calib'
                 *  RelationalOperator: '<S122>/Comparison1'
                 *  RelationalOperator: '<S122>/Comparison2'
                 *  RelationalOperator: '<S122>/Comparison3'
                 *  Switch: '<S123>/Switch1'
                 *  Switch: '<S124>/Switch1'
                 */
                if (rtb_TmpSignalConversionAtVeH_fh <
                        KeHTRR_P_Htr3PwrTgt_DVC_Lvl1)
                {
                    /* Switch: '<S102>/Switch1' incorporates:
                     *  Constant: '<S129>/Calib'
                     *  Switch: '<S125>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR =
                        KeHTRR_P_Htr3PwrTgt_DVC_Zero;
                }
                else if (rtb_TmpSignalConversionAtVeH_fh <
                         KeHTRR_P_Htr3PwrTgt_DVC_Lvl2)
                {
                    /* Switch: '<S123>/Switch1' incorporates:
                     *  Switch: '<S102>/Switch1'
                     *  Switch: '<S125>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR =
                        KeHTRR_P_Htr3PwrTgt_DVC_Lvl1;
                }
                else if (rtb_TmpSignalConversionAtVeH_fh <
                         KeHTRR_P_Htr3PwrTgt_DVC_Lvl3)
                {
                    /* Switch: '<S124>/Switch1' incorporates:
                     *  Constant: '<S127>/Calib'
                     *  Switch: '<S102>/Switch1'
                     *  Switch: '<S123>/Switch1'
                     *  Switch: '<S125>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR =
                        KeHTRR_P_Htr3PwrTgt_DVC_Lvl2;
                }
                else
                {
                    /* Switch: '<S102>/Switch1' incorporates:
                     *  Constant: '<S128>/Calib'
                     *  Switch: '<S123>/Switch1'
                     *  Switch: '<S124>/Switch1'
                     *  Switch: '<S125>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeTHMR =
                        KeHTRR_P_Htr3PwrTgt_DVC_Lvl3;
                }

                /* End of Switch: '<S125>/Switch1' */
            }
            else
            {
                /* Switch: '<S102>/Switch1' incorporates:
                 *  Switch: '<S122>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeTHMR =
                    rtb_TmpSignalConversionAtVeH_fh;
            }

            /* End of Switch: '<S122>/Switch2' */
        }

        /* End of Switch: '<S102>/Switch1' */

        /* Inport: '<Root>/VeHTIR_e_HV_Htr3Cntctr_StckClsd' */
        (void)Rte_Read_VeHTIR_e_HV_Htr3Cntctr_StckClsd_Value(&tmpRead_4);

        /* Inport: '<Root>/VeBTRR_T_CellTempMaxUsed' */
        (void)Rte_Read_VeBTRR_T_CellTempMaxUsed_Value(&tmpRead_0);

        /* Outputs for Atomic SubSystem: '<S101>/Limiter1' */
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         *  RelationalOperator: '<S118>/RelationalOperator'
         */
        if (KeHTRR_P_Htr3PwrTgt_Max < rtb_TmpSignalConversionAtVeTHMR)
        {
            /* Switch: '<S118>/Switch1' */
            rtb_Switch1_bb = KeHTRR_P_Htr3PwrTgt_Max;
        }
        else
        {
            /* Switch: '<S118>/Switch1' */
            rtb_Switch1_bb = rtb_TmpSignalConversionAtVeTHMR;
        }

        /* End of Switch: '<S118>/Switch1' */

        /* Switch: '<S118>/Switch' incorporates:
         *  Constant: '<S112>/Calib'
         *  RelationalOperator: '<S118>/RelationalOperator1'
         */
        if (rtb_Switch1_bb > KeHTRR_P_Htr3PwrTgt_Min)
        {
            /* Switch: '<S118>/Switch' */
            rtb_TmpSignalConversionAtVeH_fh = rtb_Switch1_bb;
        }
        else
        {
            /* Switch: '<S118>/Switch' */
            rtb_TmpSignalConversionAtVeH_fh = KeHTRR_P_Htr3PwrTgt_Min;
        }

        /* End of Switch: '<S118>/Switch' */
        /* End of Outputs for SubSystem: '<S101>/Limiter1' */

        /* Logic: '<S101>/Logical1' incorporates:
         *  Constant: '<S113>/Calib'
         *  Constant: '<S116>/Calib'
         *  RelationalOperator: '<S101>/Comparison'
         *  RelationalOperator: '<S101>/Comparison2'
         */
        HTRR_ac_B.Logical1_f = ((rtb_Merge_b > KeHTRR_T_Htr3ClntTempTgt_MinOnReq)
                                || (KeHTRR_P_Htr3PwrTgt_MinOnReq <
            rtb_TmpSignalConversionAtVeH_fh));

        /* Gain: '<S119>/Gain' */
        HTRR_ac_B.Gain_i = rtb_Merge_b;

        /* Gain: '<S120>/Gain' */
        HTRR_ac_B.Gain_kj = rtb_TmpSignalConversionAtVeH_fh;

        /* Logic: '<S72>/Logical1' incorporates:
         *  Constant: '<S131>/Constant'
         *  Constant: '<S132>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HV_Htr3Cntctr_StckClsd'
         *  RelationalOperator: '<S72>/Comparison'
         *  RelationalOperator: '<S72>/Comparison1'
         */
        HTRR_ac_B.Logical1_b = ((((uint32)tmpRead_4) == CeHTIR_e_Warning_True) &&
                                (tmpRead_0 >
            KeHTRR_T_Htr3CntrsStck_CellTmpMx_Alwd));
    }

    /* End of Outputs for SubSystem: '<S4>/Htr3HtElmntCntrl' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Heater_Outputs'
     */
    /* Outputs for Enabled SubSystem: '<S6>/Htr1_ECH' incorporates:
     *  EnablePort: '<S324>/Enable'
     */
    if (GreaterThan_d)
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  Constant: '<S352>/Calib'
         */
        if (KeHTRR_b_HVC_HtrReq_SD)
        {
            /* Switch: '<S343>/Switch1' incorporates:
             *  Constant: '<S351>/Calib'
             */
            HTRR_ac_B.Switch1_k = KeHTRR_b_HVC_HtrReq_D;
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/HTRC' */
            /* Switch: '<S343>/Switch1' incorporates:
             *  Gain: '<S13>/Gain'
             */
            HTRR_ac_B.Switch1_k = HTRR_ac_B.Gain_m;

            /* End of Outputs for SubSystem: '<S1>/HTRC' */
        }

        /* End of Switch: '<S343>/Switch1' */

        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S348>/Calib'
         */
        if (KeHTRR_b_HVC_HtrTempTgt_SD)
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  Constant: '<S347>/Calib'
             */
            HTRR_ac_B.Switch1_gm = KeHTRR_T_HVC_HtrTempTgt_D;
        }
        else
        {
            /* Switch: '<S341>/Switch1' */
            HTRR_ac_B.Switch1_gm = HTRR_ac_B.Gain_p;
        }

        /* End of Switch: '<S341>/Switch1' */

        /* Switch: '<S344>/Switch1' incorporates:
         *  Constant: '<S354>/Calib'
         */
        if (KeHTRR_b_HVC_HtrPwrLimit_SD)
        {
            /* Switch: '<S344>/Switch1' incorporates:
             *  Constant: '<S353>/Calib'
             */
            HTRR_ac_B.Switch1_e = KeHTRR_P_HVC_HtrPwrLimit_D;
        }
        else
        {
            /* Switch: '<S344>/Switch1' */
            HTRR_ac_B.Switch1_e = HTRR_ac_B.Gain_o;
        }

        /* End of Switch: '<S344>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S346>/ProtectedDivision' */
        /* Switch: '<S358>/Switch1' incorporates:
         *  Constant: '<S357>/Calib'
         *  Constant: '<S358>/ConstantValue'
         *  Constant: '<S358>/ConstantValue1'
         *  Constant: '<S358>/ConstantValue2'
         *  Constant: '<S358>/ConstantValue3'
         *  Logic: '<S358>/AND'
         *  RelationalOperator: '<S358>/GreaterThanorEqual'
         *  RelationalOperator: '<S358>/GreaterThanorEqual1'
         *  RelationalOperator: '<S358>/NotEqual'
         *  RelationalOperator: '<S358>/NotEqual1'
         *  Switch: '<S358>/Switch2'
         *  Switch: '<S358>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeHTIR != 0.0F) &&
                (KeHTRR_P_HVCHtrPwr_W_2_kW != 0.0F))
        {
            /* Switch: '<S358>/Switch1' incorporates:
             *  Product: '<S358>/Division'
             */
            HTRR_ac_B.Switch1_hm = rtb_TmpSignalConversionAtVeHTIR /
                KeHTRR_P_HVCHtrPwr_W_2_kW;
        }
        else if (rtb_TmpSignalConversionAtVeHTIR > 0.0F)
        {
            /* Switch: '<S358>/Switch2' incorporates:
             *  Constant: '<S358>/MAXFLOAT'
             *  Switch: '<S358>/Switch1'
             */
            HTRR_ac_B.Switch1_hm = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeHTIR < 0.0F)
        {
            /* Switch: '<S358>/Switch3' incorporates:
             *  Constant: '<S358>/MINFLOAT'
             *  Switch: '<S358>/Switch1'
             *  Switch: '<S358>/Switch2'
             */
            HTRR_ac_B.Switch1_hm = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S358>/Switch1' incorporates:
             *  Constant: '<S358>/ConstantValue4'
             *  Switch: '<S358>/Switch2'
             *  Switch: '<S358>/Switch3'
             */
            HTRR_ac_B.Switch1_hm = 0.0F;
        }

        /* End of Switch: '<S358>/Switch1' */
        /* End of Outputs for SubSystem: '<S346>/ProtectedDivision' */

        /* Gain: '<S359>/Gain' */
        HTRR_ac_B.Gain_gs = rtb_TmpSignalConversionAtVeHTIR;

        /* Outputs for Function Call SubSystem: '<S1>/Subsystem2' */
        /* Gain: '<S338>/Gain' incorporates:
         *  Inport: '<S7>/AmbAirTemp'
         */
        HTRR_ac_B.Gain_n = rtb_Switch1;

        /* End of Outputs for SubSystem: '<S1>/Subsystem2' */

        /* Switch: '<S342>/Switch1' incorporates:
         *  Constant: '<S350>/Calib'
         */
        if (KeHTRR_b_HVC_Htr_OvrhtUnlck_SD)
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Constant: '<S349>/Calib'
             */
            HTRR_ac_B.Switch1_jk = KeHTRR_b_HVC_Htr_OvrhtUnlck_D;
        }
        else
        {
            /* Switch: '<S342>/Switch1' */
            HTRR_ac_B.Switch1_jk = HTRR_ac_B.Merge3;
        }

        /* End of Switch: '<S342>/Switch1' */

        /* Gain: '<S339>/Gain' */
        HTRR_ac_B.Gain_j = HTRR_ac_B.Merge;

        /* Gain: '<S340>/Gain' */
        HTRR_ac_B.Gain_l = HTRR_ac_B.Merge1;

        /* Switch: '<S345>/Switch1' incorporates:
         *  Constant: '<S356>/Calib'
         */
        if (KeHTRR_b_Htr_Unlck_RstSts_SD)
        {
            /* Switch: '<S345>/Switch1' incorporates:
             *  Constant: '<S355>/Calib'
             */
            HTRR_ac_B.Switch1_ie = KeHTRR_Cnt_Htr_Unlck_RstSts_D;
        }
        else
        {
            /* Switch: '<S345>/Switch1' */
            HTRR_ac_B.Switch1_ie = HTRR_ac_B.DataStoreRead_i;
        }

        /* End of Switch: '<S345>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S6>/Htr1_ECH' */

    /* Outputs for Enabled SubSystem: '<S6>/Htr2_EAH' incorporates:
     *  EnablePort: '<S325>/Enable'
     */
    if (GreaterThan_e)
    {
        /* Switch: '<S361>/Switch1' incorporates:
         *  Constant: '<S367>/Calib'
         */
        if (KeHTRR_b_HVC_Htr2Req_SD)
        {
            /* Switch: '<S361>/Switch1' incorporates:
             *  Constant: '<S366>/Calib'
             */
            HTRR_ac_B.Switch1_l = KeHTRR_b_HVC_Htr2Req_D;
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/HTRC' */
            /* Switch: '<S361>/Switch1' incorporates:
             *  Gain: '<S14>/Gain'
             */
            HTRR_ac_B.Switch1_l = HTRR_ac_B.Logical1_a;

            /* End of Outputs for SubSystem: '<S1>/HTRC' */
        }

        /* End of Switch: '<S361>/Switch1' */

        /* Switch: '<S360>/Switch1' incorporates:
         *  Constant: '<S365>/Calib'
         */
        if (KeHTRR_b_HVC_Htr2TempTgt_SD)
        {
            /* Switch: '<S360>/Switch1' incorporates:
             *  Constant: '<S364>/Calib'
             */
            HTRR_ac_B.Switch1_i = KeHTRR_T_HVC_Htr2TempTgt_D;
        }
        else
        {
            /* Switch: '<S360>/Switch1' */
            HTRR_ac_B.Switch1_i = HTRR_ac_B.Gain_fp;
        }

        /* End of Switch: '<S360>/Switch1' */

        /* Switch: '<S362>/Switch1' incorporates:
         *  Constant: '<S369>/Calib'
         */
        if (KeHTRR_b_HVC_Htr2PwrLimit_SD)
        {
            /* Switch: '<S362>/Switch1' incorporates:
             *  Constant: '<S368>/Calib'
             */
            rtb_Switch1 = KeHTRR_P_HVC_Htr2PwrLimit_D;
        }
        else
        {
            /* Switch: '<S362>/Switch1' */
            rtb_Switch1 = HTRR_ac_B.Gain_c;
        }

        /* End of Switch: '<S362>/Switch1' */

        /* Gain: '<S370>/Gain' */
        HTRR_ac_B.Gain_f = rtb_Switch1;

        /* Outputs for Atomic SubSystem: '<S371>/ProtectedDivision' */
        /* Switch: '<S374>/Switch1' incorporates:
         *  Constant: '<S372>/Calib'
         *  Constant: '<S374>/ConstantValue'
         *  Constant: '<S374>/ConstantValue1'
         *  Constant: '<S374>/ConstantValue2'
         *  Constant: '<S374>/ConstantValue3'
         *  Logic: '<S374>/AND'
         *  RelationalOperator: '<S374>/GreaterThanorEqual'
         *  RelationalOperator: '<S374>/GreaterThanorEqual1'
         *  RelationalOperator: '<S374>/NotEqual'
         *  RelationalOperator: '<S374>/NotEqual1'
         *  Switch: '<S374>/Switch2'
         *  Switch: '<S374>/Switch3'
         */
        if ((rtb_Switch1 != 0.0F) && (KeHTRR_P_HVC_Htr2PwrMax != 0.0F))
        {
            /* Switch: '<S374>/Switch1' incorporates:
             *  Product: '<S374>/Division'
             */
            rtb_Switch1 /= KeHTRR_P_HVC_Htr2PwrMax;
        }
        else if (rtb_Switch1 > 0.0F)
        {
            /* Switch: '<S374>/Switch2' incorporates:
             *  Constant: '<S374>/MAXFLOAT'
             *  Switch: '<S374>/Switch1'
             */
            rtb_Switch1 = 3.402823466E+38F;
        }
        else if (rtb_Switch1 < 0.0F)
        {
            /* Switch: '<S374>/Switch3' incorporates:
             *  Constant: '<S374>/MINFLOAT'
             *  Switch: '<S374>/Switch1'
             *  Switch: '<S374>/Switch2'
             */
            rtb_Switch1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S374>/Switch1' incorporates:
             *  Constant: '<S374>/ConstantValue4'
             *  Switch: '<S374>/Switch2'
             *  Switch: '<S374>/Switch3'
             */
            rtb_Switch1 = 0.0F;
        }

        /* End of Switch: '<S374>/Switch1' */
        /* End of Outputs for SubSystem: '<S371>/ProtectedDivision' */

        /* Product: '<S371>/Product' incorporates:
         *  Constant: '<S373>/Calib'
         */
        HTRR_ac_B.Product = rtb_Switch1 * KeHTRR_Pct_HVC_Htr2PctFctr;

        /* Outputs for Atomic SubSystem: '<S377>/ProtectedDivision' */
        /* Switch: '<S380>/Switch1' incorporates:
         *  Constant: '<S378>/Calib'
         *  Constant: '<S380>/ConstantValue'
         *  Constant: '<S380>/ConstantValue1'
         *  Constant: '<S380>/ConstantValue2'
         *  Constant: '<S380>/ConstantValue3'
         *  Logic: '<S380>/AND'
         *  RelationalOperator: '<S380>/GreaterThanorEqual'
         *  RelationalOperator: '<S380>/GreaterThanorEqual1'
         *  RelationalOperator: '<S380>/NotEqual'
         *  RelationalOperator: '<S380>/NotEqual1'
         *  Switch: '<S380>/Switch2'
         *  Switch: '<S380>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeH_le != 0.0F) &&
                (KeHTRR_P_HVC_Htr2PwrMax != 0.0F))
        {
            /* Switch: '<S380>/Switch1' incorporates:
             *  Product: '<S380>/Division'
             */
            rtb_Switch1 = rtb_TmpSignalConversionAtVeH_le /
                KeHTRR_P_HVC_Htr2PwrMax;
        }
        else if (rtb_TmpSignalConversionAtVeH_le > 0.0F)
        {
            /* Switch: '<S380>/Switch2' incorporates:
             *  Constant: '<S380>/MAXFLOAT'
             *  Switch: '<S380>/Switch1'
             */
            rtb_Switch1 = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeH_le < 0.0F)
        {
            /* Switch: '<S380>/Switch3' incorporates:
             *  Constant: '<S380>/MINFLOAT'
             *  Switch: '<S380>/Switch1'
             *  Switch: '<S380>/Switch2'
             */
            rtb_Switch1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S380>/Switch1' incorporates:
             *  Constant: '<S380>/ConstantValue4'
             *  Switch: '<S380>/Switch2'
             *  Switch: '<S380>/Switch3'
             */
            rtb_Switch1 = 0.0F;
        }

        /* End of Switch: '<S380>/Switch1' */
        /* End of Outputs for SubSystem: '<S377>/ProtectedDivision' */

        /* Product: '<S377>/Product' incorporates:
         *  Constant: '<S379>/Calib'
         */
        HTRR_ac_B.Product_d = rtb_Switch1 * KeHTRR_Pct_HVC_Htr2PctFctr;

        /* Outputs for Atomic SubSystem: '<S376>/ProtectedDivision' */
        /* Switch: '<S382>/Switch1' incorporates:
         *  Constant: '<S381>/Calib'
         *  Constant: '<S382>/ConstantValue'
         *  Constant: '<S382>/ConstantValue1'
         *  Constant: '<S382>/ConstantValue2'
         *  Constant: '<S382>/ConstantValue3'
         *  Logic: '<S382>/AND'
         *  RelationalOperator: '<S382>/GreaterThanorEqual'
         *  RelationalOperator: '<S382>/GreaterThanorEqual1'
         *  RelationalOperator: '<S382>/NotEqual'
         *  RelationalOperator: '<S382>/NotEqual1'
         *  Switch: '<S382>/Switch2'
         *  Switch: '<S382>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeH_le != 0.0F) &&
                (KeHTRR_P_HVCHtr2Pwr_W_2_kW != 0.0F))
        {
            /* Switch: '<S382>/Switch1' incorporates:
             *  Product: '<S382>/Division'
             */
            HTRR_ac_B.Switch1_j = rtb_TmpSignalConversionAtVeH_le /
                KeHTRR_P_HVCHtr2Pwr_W_2_kW;
        }
        else if (rtb_TmpSignalConversionAtVeH_le > 0.0F)
        {
            /* Switch: '<S382>/Switch2' incorporates:
             *  Constant: '<S382>/MAXFLOAT'
             *  Switch: '<S382>/Switch1'
             */
            HTRR_ac_B.Switch1_j = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeH_le < 0.0F)
        {
            /* Switch: '<S382>/Switch3' incorporates:
             *  Constant: '<S382>/MINFLOAT'
             *  Switch: '<S382>/Switch1'
             *  Switch: '<S382>/Switch2'
             */
            HTRR_ac_B.Switch1_j = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S382>/Switch1' incorporates:
             *  Constant: '<S382>/ConstantValue4'
             *  Switch: '<S382>/Switch2'
             *  Switch: '<S382>/Switch3'
             */
            HTRR_ac_B.Switch1_j = 0.0F;
        }

        /* End of Switch: '<S382>/Switch1' */
        /* End of Outputs for SubSystem: '<S376>/ProtectedDivision' */
    }

    /* End of Outputs for SubSystem: '<S6>/Htr2_EAH' */

    /* Outputs for Enabled SubSystem: '<S6>/Htr3_HtrElmt' incorporates:
     *  EnablePort: '<S326>/Enable'
     */
    if (GreaterThan_jt)
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S393>/Calib'
         */
        if (KeHTRR_b_HVC_Htr3Req_SD)
        {
            /* Switch: '<S385>/Switch1' incorporates:
             *  Constant: '<S392>/Calib'
             */
            HTRR_ac_B.Switch1_g1 = KeHTRR_b_HVC_Htr3Req_D;
        }
        else
        {
            /* Switch: '<S385>/Switch1' */
            HTRR_ac_B.Switch1_g1 = HTRR_ac_B.Logical1_f;
        }

        /* End of Switch: '<S385>/Switch1' */

        /* Switch: '<S383>/Switch1' incorporates:
         *  Constant: '<S389>/Calib'
         */
        if (KeHTRR_b_HVC_Htr3TempTgt_SD)
        {
            /* Switch: '<S383>/Switch1' incorporates:
             *  Constant: '<S388>/Calib'
             */
            HTRR_ac_B.Switch1_h = KeHTRR_T_HVC_Htr3TempTgt_D;
        }
        else
        {
            /* Switch: '<S383>/Switch1' */
            HTRR_ac_B.Switch1_h = HTRR_ac_B.Gain_i;
        }

        /* End of Switch: '<S383>/Switch1' */

        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S395>/Calib'
         */
        if (KeHTRR_b_HVC_Htr3PwrLimit_SD)
        {
            /* Switch: '<S386>/Switch1' incorporates:
             *  Constant: '<S394>/Calib'
             */
            HTRR_ac_B.Switch1_c = KeHTRR_P_HVC_Htr3PwrLimit_D;
        }
        else
        {
            /* Switch: '<S386>/Switch1' */
            HTRR_ac_B.Switch1_c = HTRR_ac_B.Gain_kj;
        }

        /* End of Switch: '<S386>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S387>/ProtectedDivision' */
        /* Switch: '<S397>/Switch1' incorporates:
         *  Constant: '<S396>/Calib'
         *  Constant: '<S397>/ConstantValue'
         *  Constant: '<S397>/ConstantValue1'
         *  Constant: '<S397>/ConstantValue2'
         *  Constant: '<S397>/ConstantValue3'
         *  Logic: '<S397>/AND'
         *  RelationalOperator: '<S397>/GreaterThanorEqual'
         *  RelationalOperator: '<S397>/GreaterThanorEqual1'
         *  RelationalOperator: '<S397>/NotEqual'
         *  RelationalOperator: '<S397>/NotEqual1'
         *  Switch: '<S397>/Switch2'
         *  Switch: '<S397>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeHT_b != 0.0F) &&
                (KeHTRR_P_HVCHtr3Pwr_W_2_kW != 0.0F))
        {
            /* Switch: '<S397>/Switch1' incorporates:
             *  Product: '<S397>/Division'
             */
            HTRR_ac_B.Switch1_f = rtb_TmpSignalConversionAtVeHT_b /
                KeHTRR_P_HVCHtr3Pwr_W_2_kW;
        }
        else if (rtb_TmpSignalConversionAtVeHT_b > 0.0F)
        {
            /* Switch: '<S397>/Switch2' incorporates:
             *  Constant: '<S397>/MAXFLOAT'
             *  Switch: '<S397>/Switch1'
             */
            HTRR_ac_B.Switch1_f = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeHT_b < 0.0F)
        {
            /* Switch: '<S397>/Switch3' incorporates:
             *  Constant: '<S397>/MINFLOAT'
             *  Switch: '<S397>/Switch1'
             *  Switch: '<S397>/Switch2'
             */
            HTRR_ac_B.Switch1_f = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S397>/Switch1' incorporates:
             *  Constant: '<S397>/ConstantValue4'
             *  Switch: '<S397>/Switch2'
             *  Switch: '<S397>/Switch3'
             */
            HTRR_ac_B.Switch1_f = 0.0F;
        }

        /* End of Switch: '<S397>/Switch1' */
        /* End of Outputs for SubSystem: '<S387>/ProtectedDivision' */

        /* Gain: '<S398>/Gain' */
        HTRR_ac_B.Gain_g = rtb_TmpSignalConversionAtVeHT_b;

        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S391>/Calib'
         */
        if (KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_SD)
        {
            /* Switch: '<S384>/Switch1' incorporates:
             *  Constant: '<S390>/Calib'
             */
            HTRR_ac_B.Switch1_p = KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_D;
        }
        else
        {
            /* Switch: '<S384>/Switch1' */
            HTRR_ac_B.Switch1_p = HTRR_ac_B.Logical1_b;
        }

        /* End of Switch: '<S384>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S6>/Htr3_HtrElmt' */

    /* Outputs for Enabled SubSystem: '<S6>/Htr4_ECH' incorporates:
     *  EnablePort: '<S327>/Enable'
     */
    if (GreaterThan_k)
    {
        /* Switch: '<S401>/Switch1' incorporates:
         *  Constant: '<S407>/Calib'
         */
        if (KeHTRR_b_HVC_Htr4Req_SD)
        {
            /* Switch: '<S401>/Switch1' incorporates:
             *  Constant: '<S406>/Calib'
             */
            HTRR_ac_B.Switch1_m = KeHTRR_b_HVC_Htr4Req_D;
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/HTRC' */
            /* Switch: '<S401>/Switch1' incorporates:
             *  Gain: '<S15>/Gain'
             */
            HTRR_ac_B.Switch1_m = HTRR_ac_B.Logical1;

            /* End of Outputs for SubSystem: '<S1>/HTRC' */
        }

        /* End of Switch: '<S401>/Switch1' */

        /* Switch: '<S400>/Switch1' incorporates:
         *  Constant: '<S405>/Calib'
         */
        if (KeHTRR_b_HVC_Htr4TempTgt_SD)
        {
            /* Switch: '<S400>/Switch1' incorporates:
             *  Constant: '<S404>/Calib'
             */
            HTRR_ac_B.Switch1 = KeHTRR_T_HVC_Htr4TempTgt_D;
        }
        else
        {
            /* Switch: '<S400>/Switch1' */
            HTRR_ac_B.Switch1 = HTRR_ac_B.Gain_k;
        }

        /* End of Switch: '<S400>/Switch1' */

        /* Switch: '<S402>/Switch1' incorporates:
         *  Constant: '<S409>/Calib'
         */
        if (KeHTRR_b_HVC_Htr4PwrLimit_SD)
        {
            /* Switch: '<S402>/Switch1' incorporates:
             *  Constant: '<S408>/Calib'
             */
            HTRR_ac_B.Switch1_g = KeHTRR_P_HVC_Htr4PwrLimit_D;
        }
        else
        {
            /* Switch: '<S402>/Switch1' */
            HTRR_ac_B.Switch1_g = HTRR_ac_B.Gain_fw;
        }

        /* End of Switch: '<S402>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S403>/ProtectedDivision' */
        /* Switch: '<S411>/Switch1' incorporates:
         *  Constant: '<S410>/Calib'
         *  Constant: '<S411>/ConstantValue'
         *  Constant: '<S411>/ConstantValue1'
         *  Constant: '<S411>/ConstantValue2'
         *  Constant: '<S411>/ConstantValue3'
         *  Logic: '<S411>/AND'
         *  RelationalOperator: '<S411>/GreaterThanorEqual'
         *  RelationalOperator: '<S411>/GreaterThanorEqual1'
         *  RelationalOperator: '<S411>/NotEqual'
         *  RelationalOperator: '<S411>/NotEqual1'
         *  Switch: '<S411>/Switch2'
         *  Switch: '<S411>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeHT_p != 0.0F) &&
                (KeHTRR_P_HVCHtr4Pwr_W_2_kW != 0.0F))
        {
            /* Switch: '<S411>/Switch1' incorporates:
             *  Product: '<S411>/Division'
             */
            HTRR_ac_B.Switch1_d = rtb_TmpSignalConversionAtVeHT_p /
                KeHTRR_P_HVCHtr4Pwr_W_2_kW;
        }
        else if (rtb_TmpSignalConversionAtVeHT_p > 0.0F)
        {
            /* Switch: '<S411>/Switch2' incorporates:
             *  Constant: '<S411>/MAXFLOAT'
             *  Switch: '<S411>/Switch1'
             */
            HTRR_ac_B.Switch1_d = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeHT_p < 0.0F)
        {
            /* Switch: '<S411>/Switch3' incorporates:
             *  Constant: '<S411>/MINFLOAT'
             *  Switch: '<S411>/Switch1'
             *  Switch: '<S411>/Switch2'
             */
            HTRR_ac_B.Switch1_d = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S411>/Switch1' incorporates:
             *  Constant: '<S411>/ConstantValue4'
             *  Switch: '<S411>/Switch2'
             *  Switch: '<S411>/Switch3'
             */
            HTRR_ac_B.Switch1_d = 0.0F;
        }

        /* End of Switch: '<S411>/Switch1' */
        /* End of Outputs for SubSystem: '<S403>/ProtectedDivision' */

        /* Gain: '<S412>/Gain' */
        HTRR_ac_B.Gain = rtb_TmpSignalConversionAtVeHT_p;

        /* SignalConversion generated from: '<S327>/Htr4_Unlock' incorporates:
         *  Constant: '<S399>/Calib'
         */
        HTRR_ac_B.OutportBufferForHtr4_Unlock = KeHTRR_b_Htr4_Unlock_Req;
    }

    /* End of Outputs for SubSystem: '<S6>/Htr4_ECH' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HTRR_DVC'
     */
    /* Outputs for Enabled SubSystem: '<S5>/Htr2' incorporates:
     *  EnablePort: '<S275>/Enable'
     */
    if (GreaterThan_e)
    {
        /* Inport: '<Root>/VeHTIR_e_Htr2PwrLimit_IO_Cnt' */
        (void)Rte_Read_VeHTIR_e_Htr2PwrLimit_IO_Cnt_Value(&tmpRead_3);

        /* If: '<S275>/If' incorporates:
         *  Constant: '<S281>/Constant'
         *  Inport: '<Root>/VeHTIR_e_Htr2PwrLimit_IO_Cnt'
         *  RelationalOperator: '<S275>/Comparison3'
         */
        if (((uint32)tmpRead_3) == CeHTIR_e_Short_Term_Adjustment)
        {
            /* Outputs for IfAction SubSystem: '<S275>/ChkHtr2PwrLmtDVC' incorporates:
             *  ActionPort: '<S280>/ActionPort'
             */
            /* If: '<S280>/If' */
            if (Switch6)
            {
                /* Outputs for IfAction SubSystem: '<S280>/ChkPmpLimits' incorporates:
                 *  ActionPort: '<S284>/ActionPort'
                 */
                /* Logic: '<S284>/Logical3' incorporates:
                 *  Constant: '<S286>/Constant'
                 *  RelationalOperator: '<S284>/Comparison2'
                 *  RelationalOperator: '<S284>/Comparison3'
                 *  RelationalOperator: '<S284>/Comparison4'
                 */
                VeHTRR_b_Htr2PwrLimit_isLimitCheckOk = (((((uint32)
                    rtb_TmpSignalConversionAtVePM_j) != CePMTR_e_DisableAll) &&
                    (!rtb_TmpSignalConversionAtVeHC_h)) && (!Switch7));

                /* Merge: '<S280>/Merge' incorporates:
                 *  Gain: '<S287>/Gain'
                 */
                VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM1 =
                    VeHTRR_b_Htr2PwrLimit_isLimitCheckOk;

                /* End of Outputs for SubSystem: '<S280>/ChkPmpLimits' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S280>/Check_DVC_Limits' incorporates:
                 *  ActionPort: '<S283>/ActionPort'
                 */
                HTRR_ac_Check_DVC_Limits((&(VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM1)));

                /* End of Outputs for SubSystem: '<S280>/Check_DVC_Limits' */
            }

            /* End of If: '<S280>/If' */

            /* Merge: '<S275>/Merge' incorporates:
             *  Gain: '<S285>/Gain'
             */
            VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM2 =
                VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM1;

            /* End of Outputs for SubSystem: '<S275>/ChkHtr2PwrLmtDVC' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S275>/Check_DVC_Action' incorporates:
             *  ActionPort: '<S279>/ActionPort'
             */
            HTRR_ac_Check_DVC_Action((&(VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM2)));

            /* End of Outputs for SubSystem: '<S275>/Check_DVC_Action' */
        }

        /* End of If: '<S275>/If' */

        /* Switch: '<S282>/Switch' incorporates:
         *  Constant: '<S289>/Calib'
         */
        if (KeHTRF_b_Htr2PwrLimit_DVC_Lim_Slct)
        {
            /* Switch: '<S282>/Switch' incorporates:
             *  Constant: '<S288>/Calib'
             */
            VeHTRR_b_Htr2PwrLimit_DVC_Lim_AD =
                KeHTRF_b_Htr2PwrLimit_DVC_Lim_Dial;
        }
        else
        {
            /* Switch: '<S282>/Switch' */
            VeHTRR_b_Htr2PwrLimit_DVC_Lim_AD = VeHTRR_b_Htr2PwrLimit_DVC_Lim_AM2;
        }

        /* End of Switch: '<S282>/Switch' */
    }

    /* End of Outputs for SubSystem: '<S5>/Htr2' */

    /* Outputs for Enabled SubSystem: '<S5>/Htr3' incorporates:
     *  EnablePort: '<S276>/Enable'
     */
    if (GreaterThan_jt)
    {
        /* Inport: '<Root>/VeHTIR_e_Htr3PwrLimit_IO_Cnt' */
        (void)Rte_Read_VeHTIR_e_Htr3PwrLimit_IO_Cnt_Value(&tmpRead_5);

        /* If: '<S276>/If' incorporates:
         *  Constant: '<S292>/Constant'
         *  Inport: '<Root>/VeHTIR_e_Htr3PwrLimit_IO_Cnt'
         *  RelationalOperator: '<S276>/Comparison3'
         */
        if (((uint32)tmpRead_5) == CeHTIR_e_Short_Term_Adjustment)
        {
            /* Outputs for IfAction SubSystem: '<S276>/ChkHtrPwrLmtDVC' incorporates:
             *  ActionPort: '<S291>/ActionPort'
             */
            /* If: '<S291>/If' */
            if (Switch6)
            {
                /* Outputs for IfAction SubSystem: '<S291>/ChkPmpLimits' incorporates:
                 *  ActionPort: '<S295>/ActionPort'
                 */
                /* Logic: '<S295>/Logical3' incorporates:
                 *  Constant: '<S297>/Constant'
                 *  RelationalOperator: '<S295>/Comparison2'
                 *  RelationalOperator: '<S295>/Comparison3'
                 *  RelationalOperator: '<S295>/Comparison4'
                 */
                VeHTRR_b_Htr3PwrLimit_isLimitCheckOk = (((((uint32)
                    rtb_TmpSignalConversionAtVePM_j) != CePMTR_e_DisableAll) &&
                    (!rtb_TmpSignalConversionAtVeHC_g)) && (!Switch7));

                /* Merge: '<S291>/Merge' incorporates:
                 *  Gain: '<S298>/Gain'
                 */
                VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM1 =
                    VeHTRR_b_Htr3PwrLimit_isLimitCheckOk;

                /* End of Outputs for SubSystem: '<S291>/ChkPmpLimits' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S291>/Check_DVC_Limits' incorporates:
                 *  ActionPort: '<S294>/ActionPort'
                 */
                HTRR_ac_Check_DVC_Limits((&(VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM1)));

                /* End of Outputs for SubSystem: '<S291>/Check_DVC_Limits' */
            }

            /* End of If: '<S291>/If' */

            /* Merge: '<S276>/Merge' incorporates:
             *  Gain: '<S296>/Gain'
             */
            VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM2 =
                VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM1;

            /* End of Outputs for SubSystem: '<S276>/ChkHtrPwrLmtDVC' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S276>/Check_DVC_Action' incorporates:
             *  ActionPort: '<S290>/ActionPort'
             */
            HTRR_ac_Check_DVC_Action((&(VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM2)));

            /* End of Outputs for SubSystem: '<S276>/Check_DVC_Action' */
        }

        /* End of If: '<S276>/If' */

        /* Switch: '<S293>/Switch' incorporates:
         *  Constant: '<S300>/Calib'
         */
        if (KeHTRF_b_Htr3PwrLimit_DVC_Lim_Slct)
        {
            /* Switch: '<S293>/Switch' incorporates:
             *  Constant: '<S299>/Calib'
             */
            VeHTRR_b_Htr3PwrLimit_DVC_Lim_AD =
                KeHTRF_b_Htr3PwrLimit_DVC_Lim_Dial;
        }
        else
        {
            /* Switch: '<S293>/Switch' */
            VeHTRR_b_Htr3PwrLimit_DVC_Lim_AD = VeHTRR_b_Htr3PwrLimit_DVC_Lim_AM2;
        }

        /* End of Switch: '<S293>/Switch' */
    }

    /* End of Outputs for SubSystem: '<S5>/Htr3' */

    /* Outputs for Enabled SubSystem: '<S5>/Htr4' incorporates:
     *  EnablePort: '<S277>/Enable'
     */
    if (GreaterThan_k)
    {
        /* Inport: '<Root>/VeHTIR_e_Htr4PwrLimit_IO_Cnt' */
        (void)Rte_Read_VeHTIR_e_Htr4PwrLimit_IO_Cnt_Value(&tmpRead_6);

        /* If: '<S277>/If' incorporates:
         *  Constant: '<S303>/Constant'
         *  Inport: '<Root>/VeHTIR_e_Htr4PwrLimit_IO_Cnt'
         *  RelationalOperator: '<S277>/Comparison3'
         */
        if (((uint32)tmpRead_6) == CeHTIR_e_Short_Term_Adjustment)
        {
            /* Outputs for IfAction SubSystem: '<S277>/ChkHtrPwrLmtDVC' incorporates:
             *  ActionPort: '<S302>/ActionPort'
             */
            /* If: '<S302>/If' */
            if (Switch6)
            {
                /* Outputs for IfAction SubSystem: '<S302>/ChkPmpLimits' incorporates:
                 *  ActionPort: '<S306>/ActionPort'
                 */
                /* Logic: '<S306>/Logical3' incorporates:
                 *  Constant: '<S308>/Constant'
                 *  RelationalOperator: '<S306>/Comparison2'
                 *  RelationalOperator: '<S306>/Comparison3'
                 *  RelationalOperator: '<S306>/Comparison4'
                 */
                VeHTRR_b_Htr4PwrLimit_isLimitCheckOk = (((((uint32)
                    rtb_TmpSignalConversionAtVePM_j) != CePMTR_e_DisableAll) &&
                    (!rtb_TmpSignalConversionAtVeH_ag)) && (!Switch7));

                /* Merge: '<S302>/Merge' incorporates:
                 *  Gain: '<S309>/Gain'
                 */
                VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM1 =
                    VeHTRR_b_Htr4PwrLimit_isLimitCheckOk;

                /* End of Outputs for SubSystem: '<S302>/ChkPmpLimits' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S302>/Check_DVC_Limits' incorporates:
                 *  ActionPort: '<S305>/ActionPort'
                 */
                HTRR_ac_Check_DVC_Limits((&(VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM1)));

                /* End of Outputs for SubSystem: '<S302>/Check_DVC_Limits' */
            }

            /* End of If: '<S302>/If' */

            /* Merge: '<S277>/Merge' incorporates:
             *  Gain: '<S307>/Gain'
             */
            VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM2 =
                VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM1;

            /* End of Outputs for SubSystem: '<S277>/ChkHtrPwrLmtDVC' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S277>/Check_DVC_Action' incorporates:
             *  ActionPort: '<S301>/ActionPort'
             */
            HTRR_ac_Check_DVC_Action((&(VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM2)));

            /* End of Outputs for SubSystem: '<S277>/Check_DVC_Action' */
        }

        /* End of If: '<S277>/If' */

        /* Switch: '<S304>/Switch' incorporates:
         *  Constant: '<S311>/Calib'
         */
        if (KeHTRF_b_Htr4PwrLimit_DVC_Lim_Slct)
        {
            /* Switch: '<S304>/Switch' incorporates:
             *  Constant: '<S310>/Calib'
             */
            VeHTRR_b_Htr4PwrLimit_DVC_Lim_AD =
                KeHTRF_b_Htr4PwrLimit_DVC_Lim_Dial;
        }
        else
        {
            /* Switch: '<S304>/Switch' */
            VeHTRR_b_Htr4PwrLimit_DVC_Lim_AD = VeHTRR_b_Htr4PwrLimit_DVC_Lim_AM2;
        }

        /* End of Switch: '<S304>/Switch' */
    }

    /* End of Outputs for SubSystem: '<S5>/Htr4' */

    /* Outputs for Enabled SubSystem: '<S5>/Subsystem' incorporates:
     *  EnablePort: '<S278>/Enable'
     */
    if (GreaterThan_d)
    {
        /* Inport: '<Root>/VeHTIR_e_HtrPwrLimit_IO_Cnt' */
        (void)Rte_Read_VeHTIR_e_HtrPwrLimit_IO_Cnt_Value(&tmpRead_2);

        /* If: '<S278>/If' incorporates:
         *  Constant: '<S314>/Constant'
         *  Inport: '<Root>/VeHTIR_e_HtrPwrLimit_IO_Cnt'
         *  RelationalOperator: '<S278>/Comparison3'
         */
        if (((uint32)tmpRead_2) == CeHTIR_e_Short_Term_Adjustment)
        {
            /* Outputs for IfAction SubSystem: '<S278>/ChkHtrPwrLimitDVC' incorporates:
             *  ActionPort: '<S313>/ActionPort'
             */
            /* If: '<S313>/If' */
            if (Switch6)
            {
                /* Outputs for IfAction SubSystem: '<S313>/ChkPmpLimits' incorporates:
                 *  ActionPort: '<S317>/ActionPort'
                 */
                /* Logic: '<S317>/Logical3' incorporates:
                 *  Constant: '<S319>/Constant'
                 *  RelationalOperator: '<S317>/Comparison2'
                 *  RelationalOperator: '<S317>/Comparison3'
                 *  RelationalOperator: '<S317>/Comparison4'
                 */
                VeHTRR_b_HtrPwrLimit_isLimitCheckOk = (((((uint32)
                    rtb_TmpSignalConversionAtVePM_j) != CePMTR_e_DisableAll) &&
                    (!rtb_TmpSignalConversionAtVeHCDR)) && (!Switch7));

                /* Merge: '<S313>/Merge' incorporates:
                 *  Gain: '<S320>/Gain'
                 */
                VeHTRR_b_HtrPwrLimit_DVC_Lim_AM1 =
                    VeHTRR_b_HtrPwrLimit_isLimitCheckOk;

                /* End of Outputs for SubSystem: '<S313>/ChkPmpLimits' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S313>/Check_DVC_Limits' incorporates:
                 *  ActionPort: '<S316>/ActionPort'
                 */
                HTRR_ac_Check_DVC_Limits((&(VeHTRR_b_HtrPwrLimit_DVC_Lim_AM1)));

                /* End of Outputs for SubSystem: '<S313>/Check_DVC_Limits' */
            }

            /* End of If: '<S313>/If' */

            /* Merge: '<S278>/Merge' incorporates:
             *  Gain: '<S318>/Gain'
             */
            VeHTRR_b_HtrPwrLimit_DVC_Lim_AM2 = VeHTRR_b_HtrPwrLimit_DVC_Lim_AM1;

            /* End of Outputs for SubSystem: '<S278>/ChkHtrPwrLimitDVC' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S278>/Check_DVC_Action' incorporates:
             *  ActionPort: '<S312>/ActionPort'
             */
            HTRR_ac_Check_DVC_Action((&(VeHTRR_b_HtrPwrLimit_DVC_Lim_AM2)));

            /* End of Outputs for SubSystem: '<S278>/Check_DVC_Action' */
        }

        /* End of If: '<S278>/If' */

        /* Switch: '<S315>/Switch' incorporates:
         *  Constant: '<S322>/Calib'
         */
        if (KeHTRF_b_HtrPwrLimit_DVC_Lim_Slct)
        {
            /* Switch: '<S315>/Switch' incorporates:
             *  Constant: '<S321>/Calib'
             */
            VeHTRR_b_HtrPwrLimit_DVC_Lim_AD = KeHTRF_b_HtrPwrLimit_DVC_Lim_Dial;
        }
        else
        {
            /* Switch: '<S315>/Switch' */
            VeHTRR_b_HtrPwrLimit_DVC_Lim_AD = VeHTRR_b_HtrPwrLimit_DVC_Lim_AM2;
        }

        /* End of Switch: '<S315>/Switch' */
    }

    /* End of Outputs for SubSystem: '<S5>/Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHTRR_T_HVC_AmbTemp' incorporates:
     *  SignalConversion generated from: '<S1>/AmbTemp'
     */
    (void)Rte_Write_VeHTRR_T_HVC_AmbTemp_Value(HTRR_ac_B.Gain_n);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HTRC'
     */
    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S8>/Constant1'
     */
    if (!KeHTRR_b_UseHtr2_HVAC)
    {
        rtb_TmpSignalConversionAtVeH_le = 0.0F;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S25>/Calib'
     *  Constant: '<S8>/Constant2'
     */
    if (!KeHTRR_b_UseHtr4_HVAC)
    {
        rtb_TmpSignalConversionAtVeHT_p = 0.0F;
    }

    /* End of Switch: '<S19>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Heater_Outputs'
     */
    /* Switch: '<S332>/Switch' incorporates:
     *  Constant: '<S334>/Calib'
     *  Constant: '<S335>/Calib'
     *  Sum: '<S8>/Sum'
     */
    if (KeHTRR_b_HVAC_HtrPwr_SD)
    {
        rtb_Switch1 = KeHTRR_P_HVAC_HtrPwr_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/HTRC' */
        rtb_Switch1 = (rtb_Switch1_ai + rtb_TmpSignalConversionAtVeH_le) +
            rtb_TmpSignalConversionAtVeHT_p;

        /* End of Outputs for SubSystem: '<S1>/HTRC' */
    }

    /* End of Switch: '<S332>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHTRR_P_HVAC_HtrPwr' incorporates:
     *  SignalConversion generated from: '<S1>/HVAC_HtrPwr'
     */
    (void)Rte_Write_VeHTRR_P_HVAC_HtrPwr_Value(rtb_Switch1);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr2PwrAct' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr2PwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr2PwrAct_Value(HTRR_ac_B.Switch1_j);

    /* Outport: '<Root>/VeHTRR_Pct_HV_Htr2PwrAct' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr2PwrAct_Pct'
     */
    (void)Rte_Write_VeHTRR_Pct_HV_Htr2PwrAct_Value(HTRR_ac_B.Product_d);

    /* Outport: '<Root>/VeHTRR_Pct_HV_Htr2PwrLimit' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr2PwrLimit_Pct'
     */
    (void)Rte_Write_VeHTRR_Pct_HV_Htr2PwrLimit_Value(HTRR_ac_B.Product);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr2PwrLimit' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr2PwrLimit_W'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr2PwrLimit_Value(HTRR_ac_B.Gain_f);

    /* Outport: '<Root>/VeHTRR_b_HV_Htr2Req' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr2Req'
     */
    (void)Rte_Write_VeHTRR_b_HV_Htr2Req_Value(HTRR_ac_B.Switch1_l);

    /* Outport: '<Root>/VeHTRR_T_HV_Htr2TempTgt' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr2TempTgt'
     */
    (void)Rte_Write_VeHTRR_T_HV_Htr2TempTgt_Value(HTRR_ac_B.Switch1_i);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr3PwrAct' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr3PwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr3PwrAct_Value(HTRR_ac_B.Switch1_f);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr3PwrAct_W' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr3PwrAct_W'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr3PwrAct_W_Value(HTRR_ac_B.Gain_g);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr3PwrLimit' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr3PwrLimit'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr3PwrLimit_Value(HTRR_ac_B.Switch1_c);

    /* Outport: '<Root>/VeHTRR_b_HV_Htr3Req' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr3Req'
     */
    (void)Rte_Write_VeHTRR_b_HV_Htr3Req_Value(HTRR_ac_B.Switch1_g1);

    /* Outport: '<Root>/VeHTRR_T_HV_Htr3TempTgt' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr3TempTgt'
     */
    (void)Rte_Write_VeHTRR_T_HV_Htr3TempTgt_Value(HTRR_ac_B.Switch1_h);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr4PwrAct' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr4PwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr4PwrAct_Value(HTRR_ac_B.Switch1_d);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr4PwrAct_W' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr4PwrAct_W'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr4PwrAct_W_Value(HTRR_ac_B.Gain);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr4PwrLimit' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr4PwrLimit'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr4PwrLimit_Value(HTRR_ac_B.Switch1_g);

    /* Outport: '<Root>/VeHTRR_b_HV_Htr4Req' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr4Req'
     */
    (void)Rte_Write_VeHTRR_b_HV_Htr4Req_Value(HTRR_ac_B.Switch1_m);

    /* Outport: '<Root>/VeHTRR_T_HV_Htr4TempTgt' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr4TempTgt'
     */
    (void)Rte_Write_VeHTRR_T_HV_Htr4TempTgt_Value(HTRR_ac_B.Switch1);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr4_OvrhtUnlck' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr4_Unlock'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr4_OvrhtUnlck_Value
        (HTRR_ac_B.OutportBufferForHtr4_Unlock);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr_HtrClntIn_Temp_BL' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_HtrClntIn_Temp_BL'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr_HtrClntIn_Temp_BL_Value(HTRR_ac_B.Gain_j);

    /* Outport: '<Root>/VeHTRR_P_HVC_HtrPwrAct' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_HtrPwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HVC_HtrPwrAct_Value(HTRR_ac_B.Switch1_hm);

    /* Outport: '<Root>/VeHTRR_P_HVC_HtrPwrAct_W' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_HtrPwrAct_W'
     */
    (void)Rte_Write_VeHTRR_P_HVC_HtrPwrAct_W_Value(HTRR_ac_B.Gain_gs);

    /* Outport: '<Root>/VeHTRR_P_HVC_HtrPwrLimit' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_HtrPwrLimit'
     */
    (void)Rte_Write_VeHTRR_P_HVC_HtrPwrLimit_Value(HTRR_ac_B.Switch1_e);

    /* Outport: '<Root>/VeHTRR_b_HVC_HtrReq' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_HtrReq'
     */
    (void)Rte_Write_VeHTRR_b_HVC_HtrReq_Value(HTRR_ac_B.Switch1_k);

    /* Outport: '<Root>/VeHTRR_T_HVC_HtrTempTgt' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_HtrTempTgt'
     */
    (void)Rte_Write_VeHTRR_T_HVC_HtrTempTgt_Value(HTRR_ac_B.Switch1_gm);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr_OvrhtUnlck' incorporates:
     *  SignalConversion generated from: '<S1>/HVC_Htr_OvrhtUnlck'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr_OvrhtUnlck_Value(HTRR_ac_B.Switch1_jk);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Heater_Outputs'
     */
    /* Switch: '<S333>/Switch' incorporates:
     *  Constant: '<S23>/Calib'
     *  Constant: '<S24>/Calib'
     *  Constant: '<S25>/Calib'
     *  Constant: '<S336>/Calib'
     *  Constant: '<S337>/Calib'
     *  Logic: '<S8>/LogicalOperator'
     *  Switch: '<S20>/Switch1'
     *  Switch: '<S21>/Switch1'
     *  Switch: '<S22>/Switch1'
     */
    if (KeHTRR_b_HVAC_HtrReq_SD)
    {
        Switch7 = KeHTRR_b_HVAC_HtrReq_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/HTRC' */
        Switch7 = ((((KeHTRR_b_UseHtr1_HVAC) && (HTRR_ac_B.Gain_m)) ||
                    ((KeHTRR_b_UseHtr2_HVAC) && (HTRR_ac_B.Logical1_a))) ||
                   ((KeHTRR_b_UseHtr4_HVAC) && (HTRR_ac_B.Logical1)));

        /* End of Outputs for SubSystem: '<S1>/HTRC' */
    }

    /* End of Switch: '<S333>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHTRR_b_HVAC_HtrReq' incorporates:
     *  SignalConversion generated from: '<S1>/Heater_Outputs__HVAC_HtrReq'
     */
    (void)Rte_Write_VeHTRR_b_HVAC_HtrReq_Value(Switch7);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr_CoreTemp_BL' incorporates:
     *  SignalConversion generated from: '<S1>/Heater_Outputs__Htr_CoreTemp_BL'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr_CoreTemp_BL_Value(HTRR_ac_B.Gain_l);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Heater_Outputs'
     */
    /* Outport: '<Root>/VeHTRR_b_Heater1Slct' incorporates:
     *  Gain: '<S329>/Gain'
     *  SignalConversion generated from: '<S1>/Htr1Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater1Slct_Value(GreaterThan_d);

    /* Outport: '<Root>/VeHTRR_b_Heater2Slct' incorporates:
     *  Gain: '<S328>/Gain'
     *  SignalConversion generated from: '<S1>/Htr2Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater2Slct_Value(GreaterThan_e);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg' incorporates:
     *  SignalConversion generated from: '<S1>/Htr3Cntctr_StckClsdOvrTmp_Flg'
     */
    (void)Rte_Write_VeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_Value
        (HTRR_ac_B.Switch1_p);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Heater_Outputs'
     */
    /* Outport: '<Root>/VeHTRR_b_Heater3Slct' incorporates:
     *  Gain: '<S330>/Gain'
     *  SignalConversion generated from: '<S1>/Htr3Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater3Slct_Value(GreaterThan_jt);

    /* Outport: '<Root>/VeHTRR_b_Heater4Slct' incorporates:
     *  Gain: '<S331>/Gain'
     *  SignalConversion generated from: '<S1>/Htr4Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater4Slct_Value(GreaterThan_k);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHTRR_Cnt_Htr_Unlck_RstSts' incorporates:
     *  SignalConversion generated from: '<S1>/Htr_Unlck_RstSts'
     */
    (void)Rte_Write_VeHTRR_Cnt_Htr_Unlck_RstSts_Value(HTRR_ac_B.Switch1_ie);

    /* End of Outputs for SubSystem: '<Root>/HTRR_FUNC_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, HTRR_CODE) HTRR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/HTRR_FUNC_PwrOff'
     */
    /* Outport: '<Root>/EeHTRR_Cnt_Htr_UnlockCntr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeHTRR_Cnt_Htr_UnlockCntr'
     */
    (void)Rte_Write_EeHTRR_Cnt_Htr_UnlockCntr_EeHTRR_Cnt_Htr_UnlockCntr
        (EeHTRR_Cnt_Htr_UnlockCntr);

    /* Outport: '<Root>/EeHTRR_Cnt_Htr_Unlck_RstSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeHTRR_Cnt_Htr_Unlck_RstSts'
     */
    (void)Rte_Write_EeHTRR_Cnt_Htr_Unlck_RstSts_EeHTRR_Cnt_Htr_Unlck_RstSts
        (EeHTRR_Cnt_Htr_Unlck_RstSts);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, HTRR_CODE) HTRR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HTRR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S432>/EeHTRR_Cnt_Htr_Unlck_RstSts' incorporates:
     *  Inport: '<Root>/EeHTRR_Cnt_Htr_Unlck_RstSts_PM_In'
     */
    (void)Rte_Read_EeHTRR_Cnt_Htr_Unlck_RstSts_Rx_EeHTRR_Cnt_Htr_Unlck_RstSts
        ((&(EeHTRR_Cnt_Htr_Unlck_RstSts)));

    /* DataStoreWrite: '<S432>/EeHTRR_Cnt_Htr_UnlockCntr' incorporates:
     *  Inport: '<Root>/EeHTRR_Cnt_Htr_UnlockCntr_PM_In'
     */
    (void)Rte_Read_EeHTRR_Cnt_Htr_UnlockCntr_Rx_EeHTRR_Cnt_Htr_UnlockCntr
        ((&(EeHTRR_Cnt_Htr_UnlockCntr)));

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Subsystem'
     */
    /* SignalConversion generated from: '<S437>/VariantSource2' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S454>/Calib'
     *  Constant: '<S457>/Calib'
     *  Constant: '<S458>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_HtrReqDial_NF;

    /* VariantMerge generated from: '<S437>/VariantSource2' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_hl = HTRR_ac_B.Calib_f;

#else

    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_HtrReq_INIT;

    /* VariantMerge generated from: '<S437>/VariantSource2' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S458>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_hl = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_HtrTempTgt_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource2' */

    /* SignalConversion generated from: '<S437>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S450>/Calib'
     *  Constant: '<S453>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib = KeHTRR_T_HVC_HtrTempTgt_Dial_NF;

    /* VariantMerge generated from: '<S437>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Source = HTRR_ac_B.Calib;

#else

    /* VariantMerge generated from: '<S437>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Source = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib = KeHTRR_P_HVC_HtrPwrLimit_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource1' */

    /* SignalConversion generated from: '<S437>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S449>/Calib'
     *  Constant: '<S451>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_HtrPwrLimit_Dial_NF;

    /* VariantMerge generated from: '<S437>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_g = HTRR_ac_B.Calib_j;

#else

    /* VariantMerge generated from: '<S437>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_g = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_j = KeHTRR_T_EstAmbAirTemp_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource3' */

    /* SignalConversion generated from: '<S437>/VariantSource4' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S446>/Calib'
     *  Constant: '<S452>/Calib'
     *  Constant: '<S461>/Calib'
     *  Constant: '<S462>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource5'
     * */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib = KeHTRR_T_HVC_AmbTemp_Dial_NF;

    /* VariantMerge generated from: '<S437>/VariantSource4' incorporates:
     *  Constant: '<S442>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_a = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr_OvrhtUnlck_NF_Dial;

    /* VariantMerge generated from: '<S437>/VariantSource5' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant__ghjtr = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S437>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_a = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr_OvrhtUnlck_INIT;

    /* VariantMerge generated from: '<S437>/VariantSource5' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S461>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant__ghjtr = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib = KeHTRR_P_HVC_HtrPwrAct_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource4' */

    /* SignalConversion generated from: '<S437>/VariantSource7' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S445>/Calib'
     *  Constant: '<S447>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_HtrPwrAct_Dial_NF;

    /* VariantMerge generated from: '<S437>/VariantSource7' incorporates:
     *  Constant: '<S441>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_k = HTRR_ac_B.Calib_j;

#else

    /* VariantMerge generated from: '<S437>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_k = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_HtrPwrAct_W_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource7' */

    /* SignalConversion generated from: '<S437>/VariantSource6' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S448>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S456>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource8'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib = KeHTRR_P_HVC_HtrPwrAct_W_NF_Dial;

    /* VariantMerge generated from: '<S437>/VariantSource6' incorporates:
     *  Constant: '<S442>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_i = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_HtrClntIn_Temp_BL_NF_Dial;

    /* VariantMerge generated from: '<S437>/VariantSource8' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cr = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S437>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_i = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_HtrClntIn_Temp_BL_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource6' */

    /* SignalConversion generated from: '<S437>/VariantSource9' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S459>/Calib'
     *  Constant: '<S460>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource8'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr_CoreTemp_BL_NF_Dial;

    /* VariantMerge generated from: '<S437>/VariantSource9' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_j = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S437>/VariantSource8' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource8'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cr = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr_CoreTemp_BL_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource9' */

    /* SignalConversion generated from: '<S437>/VariantSource10' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S463>/Calib'
     *  Constant: '<S464>/Calib'
     *  Constant: '<S476>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource9'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_f = KeHTRR_b_Htr1_Slct_NF;

    /* VariantMerge generated from: '<S437>/VariantSource10' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_iu = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S437>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource9'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_j = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr1_Slct_INIT;

    /* VariantMerge generated from: '<S437>/VariantSource10' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S463>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource10'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_iu = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr2Req_INIT;

#endif

    /* End of SignalConversion generated from: '<S437>/VariantSource10' */

    /* SignalConversion generated from: '<S438>/VariantSource2' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S473>/Calib'
     *  Constant: '<S475>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr2ReqDial_NF;

    /* VariantMerge generated from: '<S438>/VariantSource2' incorporates:
     *  Constant: '<S443>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_hlr = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_Htr2TempTgt_Dial_NF;

#else

    /* VariantMerge generated from: '<S438>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_hlr = HTRR_ac_B.Calib_f;

#endif

    /* End of SignalConversion generated from: '<S438>/VariantSource2' */

    /* SignalConversion generated from: '<S438>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S468>/Calib'
     *  Constant: '<S474>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* VariantMerge generated from: '<S438>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_c = HTRR_ac_B.Calib_j;

#else

    HTRR_ac_B.Calib = KeHTRR_T_HVC_Htr2TempTgt_INIT;

    /* VariantMerge generated from: '<S438>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S474>/Calib'
     *  SignalConversion generated from: '<S438>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_c = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr2PwrLimit_INIT;

#endif

    /* End of SignalConversion generated from: '<S438>/VariantSource1' */

    /* SignalConversion generated from: '<S438>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S467>/Calib'
     *  Constant: '<S471>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr2PwrLimit_Dial_NF;

    /* VariantMerge generated from: '<S438>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gv = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_j = KeHTRR_Pct_HVC_Htr2PwrLimit_Dial_NF;

#else

    /* VariantMerge generated from: '<S438>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gv = HTRR_ac_B.Calib;

#endif

    /* End of SignalConversion generated from: '<S438>/VariantSource3' */

    /* SignalConversion generated from: '<S438>/VariantSource5' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S466>/Calib'
     *  Constant: '<S472>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* VariantMerge generated from: '<S438>/VariantSource5' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gh = HTRR_ac_B.Calib_j;

#else

    HTRR_ac_B.Calib = KeHTRR_Pct_HVC_Htr2PwrLimit_INIT;

    /* VariantMerge generated from: '<S438>/VariantSource5' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S472>/Calib'
     *  SignalConversion generated from: '<S438>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gh = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr2PwrAct_INIT;

#endif

    /* End of SignalConversion generated from: '<S438>/VariantSource5' */

    /* SignalConversion generated from: '<S438>/VariantSource4' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S465>/Calib'
     *  Constant: '<S469>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr2PwrAct_Dial_NF;

    /* VariantMerge generated from: '<S438>/VariantSource4' incorporates:
     *  Constant: '<S441>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_a0 = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_j = KeHTRR_Pct_HVC_Htr2PwrAct_Dial_NF;

#else

    /* VariantMerge generated from: '<S438>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_a0 = HTRR_ac_B.Calib;

#endif

    /* End of SignalConversion generated from: '<S438>/VariantSource4' */

    /* SignalConversion generated from: '<S438>/VariantSource6' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S470>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* VariantMerge generated from: '<S438>/VariantSource6' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_i0 = HTRR_ac_B.Calib_j;

#else

    HTRR_ac_B.Calib = KeHTRR_Pct_HVC_Htr2PwrAct_INIT;

#endif

    /* End of SignalConversion generated from: '<S438>/VariantSource6' */

    /* SignalConversion generated from: '<S438>/VariantSource7' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S477>/Calib'
     *  Constant: '<S478>/Calib'
     *  Constant: '<S488>/Calib'
     *  SignalConversion generated from: '<S438>/VariantSource6'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_f = KeHTRR_b_Htr2_Slct_NF;

    /* VariantMerge generated from: '<S438>/VariantSource7' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_kd = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S438>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_i0 = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr2_Slct_INIT;

    /* VariantMerge generated from: '<S438>/VariantSource7' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S477>/Calib'
     *  SignalConversion generated from: '<S438>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_kd = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr3Req_INIT;

#endif

    /* End of SignalConversion generated from: '<S438>/VariantSource7' */

    /* SignalConversion generated from: '<S439>/VariantSource2' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S485>/Calib'
     *  Constant: '<S487>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr3ReqDial_NF;

    /* VariantMerge generated from: '<S439>/VariantSource2' incorporates:
     *  Constant: '<S443>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_hlr2 = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_Htr3TempTgt_Dial_NF;

#else

    /* VariantMerge generated from: '<S439>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_hlr2 = HTRR_ac_B.Calib_f;

#endif

    /* End of SignalConversion generated from: '<S439>/VariantSource2' */

    /* SignalConversion generated from: '<S439>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S484>/Calib'
     *  Constant: '<S486>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* VariantMerge generated from: '<S439>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cp = HTRR_ac_B.Calib_j;

#else

    HTRR_ac_B.Calib = KeHTRR_T_HVC_Htr3TempTgt_INIT;

    /* VariantMerge generated from: '<S439>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S486>/Calib'
     *  SignalConversion generated from: '<S439>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cp = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr3PwrLimit_INIT;

#endif

    /* End of SignalConversion generated from: '<S439>/VariantSource1' */

    /* SignalConversion generated from: '<S439>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S442>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S480>/Calib'
     *  Constant: '<S483>/Calib'
     *  Constant: '<S489>/Calib'
     *  Constant: '<S490>/Calib'
     *  SignalConversion generated from: '<S439>/VariantSource4'
     * */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr3PwrLimit_Dial_NF;

    /* VariantMerge generated from: '<S439>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_gvn = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_f = KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_NF_Dial;

    /* VariantMerge generated from: '<S439>/VariantSource4' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_a00k = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S439>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_gvn = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_INIT;

    /* VariantMerge generated from: '<S439>/VariantSource4' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S489>/Calib'
     *  SignalConversion generated from: '<S439>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_a00k = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr3PwrAct_INIT;

#endif

    /* End of SignalConversion generated from: '<S439>/VariantSource3' */

    /* SignalConversion generated from: '<S439>/VariantSource5' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S479>/Calib'
     *  Constant: '<S481>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr3PwrAct_Dial_NF;

    /* VariantMerge generated from: '<S439>/VariantSource5' incorporates:
     *  Constant: '<S441>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_ghj = HTRR_ac_B.Calib_j;

#else

    /* VariantMerge generated from: '<S439>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_ghj = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr3PwrAct_W_INIT;

#endif

    /* End of SignalConversion generated from: '<S439>/VariantSource5' */

    /* SignalConversion generated from: '<S439>/VariantSource6' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S482>/Calib'
     *  Constant: '<S491>/Calib'
     *  Constant: '<S492>/Calib'
     *  Constant: '<S502>/Calib'
     *  SignalConversion generated from: '<S439>/VariantSource7'
     * */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr3PwrAct_W_NF_Dial;

    /* VariantMerge generated from: '<S439>/VariantSource6' incorporates:
     *  Constant: '<S442>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_i0d = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_f = KeHTRR_b_Htr3_Slct_NF;

    /* VariantMerge generated from: '<S439>/VariantSource7' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_kdb = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S439>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_i0d = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr3_Slct_INIT;

    /* VariantMerge generated from: '<S439>/VariantSource7' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S491>/Calib'
     *  SignalConversion generated from: '<S439>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_kdb = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr4Req_INIT;

#endif

    /* End of SignalConversion generated from: '<S439>/VariantSource6' */

    /* SignalConversion generated from: '<S440>/VariantSource2' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S499>/Calib'
     *  Constant: '<S501>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr4ReqDial_NF;

    /* VariantMerge generated from: '<S440>/VariantSource2' incorporates:
     *  Constant: '<S443>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant__hlr2o = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_Htr4TempTgt_Dial_NF;

#else

    /* VariantMerge generated from: '<S440>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant__hlr2o = HTRR_ac_B.Calib_f;

#endif

    /* End of SignalConversion generated from: '<S440>/VariantSource2' */

    /* SignalConversion generated from: '<S440>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S498>/Calib'
     *  Constant: '<S500>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* VariantMerge generated from: '<S440>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_So_cpz = HTRR_ac_B.Calib_j;

#else

    HTRR_ac_B.Calib = KeHTRR_T_HVC_Htr4TempTgt_INIT;

    /* VariantMerge generated from: '<S440>/VariantSource1' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S500>/Calib'
     *  SignalConversion generated from: '<S440>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_cpz = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr4PwrLimit_INIT;

#endif

    /* End of SignalConversion generated from: '<S440>/VariantSource1' */

    /* SignalConversion generated from: '<S440>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S493>/Calib'
     *  Constant: '<S497>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr4PwrLimit_Dial_NF;

    /* VariantMerge generated from: '<S440>/VariantSource3' incorporates:
     *  Constant: '<S441>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_gvng = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr4PwrAct_Dial_NF;

#else

    /* VariantMerge generated from: '<S440>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_gvng = HTRR_ac_B.Calib;

#endif

    /* End of SignalConversion generated from: '<S440>/VariantSource3' */

    /* SignalConversion generated from: '<S440>/VariantSource5' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S442>/Calib'
     *  Constant: '<S494>/Calib'
     *  Constant: '<S495>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* VariantMerge generated from: '<S440>/VariantSource5' */
    HTRR_ac_B.VariantMerge_For_Variant_S_ghjt = HTRR_ac_B.Calib_j;

#else

    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr4PwrAct_INIT;

    /* VariantMerge generated from: '<S440>/VariantSource5' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S494>/Calib'
     *  SignalConversion generated from: '<S440>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_ghjt = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr4PwrAct_W_INIT;

#endif

    /* End of SignalConversion generated from: '<S440>/VariantSource5' */

    /* SignalConversion generated from: '<S440>/VariantSource4' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S496>/Calib'
     *  Constant: '<S505>/Calib'
     *  Constant: '<S506>/Calib'
     *  SignalConversion generated from: '<S440>/VariantSource6'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr4PwrAct_W_NF_Dial;

    /* VariantMerge generated from: '<S440>/VariantSource4' incorporates:
     *  Constant: '<S442>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_a00 = HTRR_ac_B.Calib;
    HTRR_ac_B.Calib_f = KeHTRR_b_Htr4_Slct_NF;

    /* VariantMerge generated from: '<S440>/VariantSource6' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_i0dl = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S440>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_a00 = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr4_Slct_INIT;

#endif

    /* End of SignalConversion generated from: '<S440>/VariantSource4' */

    /* SignalConversion generated from: '<S440>/VariantSource7' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S503>/Calib'
     *  Constant: '<S504>/Calib'
     *  SignalConversion generated from: '<S440>/VariantSource6'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr4_OvrhtUnlck_NF_Dial;

    /* VariantMerge generated from: '<S440>/VariantSource7' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_kdb3 = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S440>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_i0dl = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr4_OvrhtUnlck_INIT;

#endif

    /* End of SignalConversion generated from: '<S440>/VariantSource7' */

    /* SignalConversion generated from: '<S436>/VariantSource2' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S442>/Calib'
     *  SignalConversion generated from: '<S440>/VariantSource7'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib = KeHTRR_P_HVAC_HtrPwr_NF;

    /* VariantMerge generated from: '<S436>/VariantSource2' incorporates:
     *  Constant: '<S442>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_h = HTRR_ac_B.Calib;

#else

    /* VariantMerge generated from: '<S440>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_kdb3 = HTRR_ac_B.Calib_g;
    HTRR_ac_B.Calib_j = KeHTRR_P_HVAC_HtrPwr_INIT;

#endif

    /* End of SignalConversion generated from: '<S436>/VariantSource2' */

    /* SignalConversion generated from: '<S436>/VariantSource1' incorporates:
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  SignalConversion generated from: '<S436>/VariantSource2'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib_f = KeHTRR_b_HVAC_HtrReq_NF;

    /* VariantMerge generated from: '<S436>/VariantSource1' incorporates:
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_cpz2 = HTRR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S436>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S436>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_h = HTRR_ac_B.Calib_j;
    HTRR_ac_B.Calib_g = KeHTRR_b_HVAC_HtrReq_INIT;

    /* VariantMerge generated from: '<S436>/VariantSource1' incorporates:
     *  Constant: '<S443>/Calib'
     *  SignalConversion generated from: '<S436>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_cpz2 = HTRR_ac_B.Calib_g;

#endif

    /* End of SignalConversion generated from: '<S436>/VariantSource1' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeHTRR_T_HVC_AmbTemp' incorporates:
     *  SignalConversion generated from: '<S3>/EstAmbAirTemp_INIT'
     */
    (void)Rte_Write_VeHTRR_T_HVC_AmbTemp_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sour_a);

    /* Outport: '<Root>/VeHTRR_P_HVAC_HtrPwr' incorporates:
     *  SignalConversion generated from: '<S3>/HVAC_HtrPwr_INIT'
     */
    (void)Rte_Write_VeHTRR_P_HVAC_HtrPwr_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sour_h);

    /* Outport: '<Root>/VeHTRR_b_HVAC_HtrReq' incorporates:
     *  SignalConversion generated from: '<S3>/HVAC_HtrReq_INIT'
     */
    (void)Rte_Write_VeHTRR_b_HVAC_HtrReq_Value
        (HTRR_ac_B.VariantMerge_For_Variant_S_cpz2);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr2PwrAct' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr2PwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr2PwrAct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_a0);

    /* Outport: '<Root>/VeHTRR_Pct_HV_Htr2PwrAct' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr2PwrAct1'
     */
    (void)Rte_Write_VeHTRR_Pct_HV_Htr2PwrAct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_i0);

    /* Outport: '<Root>/VeHTRR_Pct_HV_Htr2PwrLimit' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr2PwrLimit1'
     */
    (void)Rte_Write_VeHTRR_Pct_HV_Htr2PwrLimit_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_gh);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr2PwrLimit' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr2PwrLimit_INIT'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr2PwrLimit_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_gv);

    /* Outport: '<Root>/VeHTRR_b_HV_Htr2Req' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr2Req_INIT'
     */
    (void)Rte_Write_VeHTRR_b_HV_Htr2Req_Value
        (HTRR_ac_B.VariantMerge_For_Variant_So_hlr);

    /* Outport: '<Root>/VeHTRR_T_HV_Htr2TempTgt' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr2TempTgt_INIT'
     */
    (void)Rte_Write_VeHTRR_T_HV_Htr2TempTgt_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sour_c);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr3PwrAct' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr3PwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr3PwrAct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_So_ghj);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr3PwrAct_W' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr3PwrAct_W'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr3PwrAct_W_Value
        (HTRR_ac_B.VariantMerge_For_Variant_So_i0d);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr3PwrLimit' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr3PwrLimit_INIT'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr3PwrLimit_Value
        (HTRR_ac_B.VariantMerge_For_Variant_So_gvn);

    /* Outport: '<Root>/VeHTRR_b_HV_Htr3Req' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr3Req_INIT'
     */
    (void)Rte_Write_VeHTRR_b_HV_Htr3Req_Value
        (HTRR_ac_B.VariantMerge_For_Variant_S_hlr2);

    /* Outport: '<Root>/VeHTRR_T_HV_Htr3TempTgt' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr3TempTgt_INIT'
     */
    (void)Rte_Write_VeHTRR_T_HV_Htr3TempTgt_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_cp);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr4PwrAct' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr4PwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr4PwrAct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_S_ghjt);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr4PwrAct_W' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr4PwrAct_W'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr4PwrAct_W_Value
        (HTRR_ac_B.VariantMerge_For_Variant_So_a00);

    /* Outport: '<Root>/VeHTRR_P_HV_Htr4PwrLimit' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr4PwrLimit_INIT'
     */
    (void)Rte_Write_VeHTRR_P_HV_Htr4PwrLimit_Value
        (HTRR_ac_B.VariantMerge_For_Variant_S_gvng);

    /* Outport: '<Root>/VeHTRR_b_HV_Htr4Req' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr4Req_INIT'
     */
    (void)Rte_Write_VeHTRR_b_HV_Htr4Req_Value
        (HTRR_ac_B.VariantMerge_For_Variant__hlr2o);

    /* Outport: '<Root>/VeHTRR_T_HV_Htr4TempTgt' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr4TempTgt_INIT'
     */
    (void)Rte_Write_VeHTRR_T_HV_Htr4TempTgt_Value
        (HTRR_ac_B.VariantMerge_For_Variant_So_cpz);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr4_OvrhtUnlck' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr4_OvrhtUnlck'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr4_OvrhtUnlck_Value
        (HTRR_ac_B.VariantMerge_For_Variant_S_kdb3);

    /* Outport: '<Root>/VeHTRR_P_HVC_HtrPwrAct' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_HtrPwrAct'
     */
    (void)Rte_Write_VeHTRR_P_HVC_HtrPwrAct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sour_k);

    /* Outport: '<Root>/VeHTRR_P_HVC_HtrPwrAct_W' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_HtrPwrAct_W'
     */
    (void)Rte_Write_VeHTRR_P_HVC_HtrPwrAct_W_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sour_i);

    /* Outport: '<Root>/VeHTRR_P_HVC_HtrPwrLimit' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_HtrPwrLimit_INIT'
     */
    (void)Rte_Write_VeHTRR_P_HVC_HtrPwrLimit_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sour_g);

    /* Outport: '<Root>/VeHTRR_b_HVC_HtrReq' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_HtrReq_INIT'
     */
    (void)Rte_Write_VeHTRR_b_HVC_HtrReq_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_hl);

    /* Outport: '<Root>/VeHTRR_T_HVC_HtrTempTgt' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_HtrTempTgt_INIT'
     */
    (void)Rte_Write_VeHTRR_T_HVC_HtrTempTgt_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Source);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr_CoreTemp_BL' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr_CoreTemp_BL'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr_CoreTemp_BL_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sour_j);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr_OvrhtUnlck' incorporates:
     *  SignalConversion generated from: '<S3>/HVC_Htr_OvrhtUnlck_INIT'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr_OvrhtUnlck_Value
        (HTRR_ac_B.VariantMerge_For_Variant__ghjtr);

    /* Outport: '<Root>/VeHTRR_b_Heater1Slct' incorporates:
     *  SignalConversion generated from: '<S3>/Htr1_Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater1Slct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_iu);

    /* Outport: '<Root>/VeHTRR_b_Heater2Slct' incorporates:
     *  SignalConversion generated from: '<S3>/Htr2_Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater2Slct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_kd);

    /* Outport: '<Root>/VeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg' incorporates:
     *  SignalConversion generated from: '<S3>/Htr3Cntctr_StckClsdOvrTmp_Flg_INIT'
     */
    (void)Rte_Write_VeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_Value
        (HTRR_ac_B.VariantMerge_For_Variant_S_a00k);

    /* Outport: '<Root>/VeHTRR_b_Heater3Slct' incorporates:
     *  SignalConversion generated from: '<S3>/Htr3_Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater3Slct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_So_kdb);

    /* Outport: '<Root>/VeHTRR_b_Heater4Slct' incorporates:
     *  SignalConversion generated from: '<S3>/Htr4_Slct'
     */
    (void)Rte_Write_VeHTRR_b_Heater4Slct_Value
        (HTRR_ac_B.VariantMerge_For_Variant_S_i0dl);

    /* Outport: '<Root>/VeHTRR_b_HVC_Htr_HtrClntIn_Temp_BL' incorporates:
     *  SignalConversion generated from: '<S3>/HtrClntIn_Temp_BL'
     */
    (void)Rte_Write_VeHTRR_b_HVC_Htr_HtrClntIn_Temp_BL_Value
        (HTRR_ac_B.VariantMerge_For_Variant_Sou_cr);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* Outport: '<Root>/VeHTRR_Cnt_Htr_Unlck_RstSts' incorporates:
     *  DataStoreRead: '<S432>/DataStoreRead'
     *  SignalConversion generated from: '<S3>/Htr_Unlck_RstSts_PM_INIT'
     */
    (void)Rte_Write_VeHTRR_Cnt_Htr_Unlck_RstSts_Value
        (EeHTRR_Cnt_Htr_Unlck_RstSts);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HTRR_CODE) HTRR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HTRR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Subsystem'
     */
    /* Start for Constant: '<S457>/Calib' incorporates:
     *  Constant: '<S453>/Calib'
     *  Constant: '<S454>/Calib'
     *  Constant: '<S458>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_HtrReqDial_NF;

    /* Start for Constant: '<S442>/Calib' */
    HTRR_ac_B.Calib = KeHTRR_T_HVC_HtrTempTgt_Dial_NF;

#else

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S458>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_HtrReq_INIT;

    /* Start for Constant: '<S441>/Calib' incorporates:
     *  Constant: '<S454>/Calib'
     */
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_HtrTempTgt_INIT;

#endif

    /* End of Start for Constant: '<S457>/Calib' */

    /* Start for Constant: '<S449>/Calib' incorporates:
     *  Constant: '<S450>/Calib'
     *  Constant: '<S451>/Calib'
     *  Constant: '<S461>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_HtrPwrLimit_Dial_NF;

#else

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S450>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_HtrPwrLimit_INIT;

    /* Start for Constant: '<S441>/Calib' incorporates:
     *  Constant: '<S451>/Calib'
     */
    HTRR_ac_B.Calib_j = KeHTRR_T_EstAmbAirTemp_INIT;

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S461>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr_OvrhtUnlck_INIT;

#endif

    /* End of Start for Constant: '<S449>/Calib' */

    /* Start for Constant: '<S452>/Calib' incorporates:
     *  Constant: '<S445>/Calib'
     *  Constant: '<S446>/Calib'
     *  Constant: '<S447>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S462>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S442>/Calib' */
    HTRR_ac_B.Calib = KeHTRR_T_HVC_AmbTemp_Dial_NF;

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr_OvrhtUnlck_NF_Dial;

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_HtrPwrAct_Dial_NF;

#else

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S446>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_HtrPwrAct_INIT;

    /* Start for Constant: '<S441>/Calib' incorporates:
     *  Constant: '<S447>/Calib'
     */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_HtrPwrAct_W_INIT;

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S455>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_HtrClntIn_Temp_BL_INIT;

#endif

    /* End of Start for Constant: '<S452>/Calib' */

    /* Start for Constant: '<S448>/Calib' incorporates:
     *  Constant: '<S456>/Calib'
     *  Constant: '<S459>/Calib'
     *  Constant: '<S460>/Calib'
     *  Constant: '<S463>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S442>/Calib' */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_HtrPwrAct_W_NF_Dial;

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr_CoreTemp_BL_NF_Dial;

#else

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S463>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr1_Slct_INIT;

#endif

    /* End of Start for Constant: '<S448>/Calib' */

    /* Start for Constant: '<S464>/Calib' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S473>/Calib'
     *  Constant: '<S474>/Calib'
     *  Constant: '<S475>/Calib'
     *  Constant: '<S476>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_Htr1_Slct_NF;

    /* Start for Constant: '<S443>/Calib' */
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr2ReqDial_NF;

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_Htr2TempTgt_Dial_NF;

#else

    /* Start for Constant: '<S444>/Calib' incorporates:
     *  Constant: '<S476>/Calib'
     */
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr2Req_INIT;

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S468>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr2PwrLimit_INIT;

#endif

    /* End of Start for Constant: '<S464>/Calib' */

    /* Start for Constant: '<S467>/Calib' incorporates:
     *  Constant: '<S465>/Calib'
     *  Constant: '<S466>/Calib'
     *  Constant: '<S470>/Calib'
     *  Constant: '<S471>/Calib'
     *  Constant: '<S472>/Calib'
     *  Constant: '<S477>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr2PwrAct_Dial_NF;

#else

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S470>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_Pct_HVC_Htr2PwrAct_INIT;

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S477>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr2_Slct_INIT;

#endif

    /* End of Start for Constant: '<S467>/Calib' */

    /* Start for Constant: '<S469>/Calib' incorporates:
     *  Constant: '<S478>/Calib'
     *  Constant: '<S484>/Calib'
     *  Constant: '<S485>/Calib'
     *  Constant: '<S486>/Calib'
     *  Constant: '<S487>/Calib'
     *  Constant: '<S488>/Calib'
     *  Constant: '<S489>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_Htr2_Slct_NF;

    /* Start for Constant: '<S443>/Calib' */
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr3ReqDial_NF;

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_Htr3TempTgt_Dial_NF;

#else

    /* Start for Constant: '<S444>/Calib' incorporates:
     *  Constant: '<S488>/Calib'
     */
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr3Req_INIT;

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S484>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr3PwrLimit_INIT;

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S489>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_INIT;

#endif

    /* End of Start for Constant: '<S469>/Calib' */

    /* Start for Constant: '<S483>/Calib' incorporates:
     *  Constant: '<S479>/Calib'
     *  Constant: '<S480>/Calib'
     *  Constant: '<S481>/Calib'
     *  Constant: '<S490>/Calib'
     *  Constant: '<S491>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_Htr3Cntctr_StckClsdOvrTmp_Flg_NF_Dial;

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr3PwrAct_Dial_NF;

#else

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S480>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr3PwrAct_INIT;

    /* Start for Constant: '<S441>/Calib' incorporates:
     *  Constant: '<S481>/Calib'
     */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr3PwrAct_W_INIT;

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S491>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr3_Slct_INIT;

#endif

    /* End of Start for Constant: '<S483>/Calib' */

    /* Start for Constant: '<S482>/Calib' incorporates:
     *  Constant: '<S492>/Calib'
     *  Constant: '<S498>/Calib'
     *  Constant: '<S499>/Calib'
     *  Constant: '<S500>/Calib'
     *  Constant: '<S501>/Calib'
     *  Constant: '<S502>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S442>/Calib' */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr3PwrAct_W_NF_Dial;

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_Htr3_Slct_NF;

    /* Start for Constant: '<S443>/Calib' */
    HTRR_ac_B.Calib_g = KeHTRR_b_HVC_Htr4ReqDial_NF;

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_T_HVC_Htr4TempTgt_Dial_NF;

#else

    /* Start for Constant: '<S444>/Calib' incorporates:
     *  Constant: '<S502>/Calib'
     */
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr4Req_INIT;

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S498>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr4PwrLimit_INIT;

#endif

    /* End of Start for Constant: '<S482>/Calib' */

    /* Start for Constant: '<S497>/Calib' incorporates:
     *  Constant: '<S493>/Calib'
     *  Constant: '<S494>/Calib'
     *  Constant: '<S495>/Calib'
     *  Constant: '<S505>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr4PwrAct_Dial_NF;

#else

    /* Start for Constant: '<S442>/Calib' incorporates:
     *  Constant: '<S494>/Calib'
     */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr4PwrAct_INIT;

    /* Start for Constant: '<S441>/Calib' incorporates:
     *  Constant: '<S495>/Calib'
     */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVC_Htr4PwrAct_W_INIT;

    /* Start for Constant: '<S443>/Calib' incorporates:
     *  Constant: '<S505>/Calib'
     */
    HTRR_ac_B.Calib_g = KeHTRR_b_Htr4_Slct_INIT;

#endif

    /* End of Start for Constant: '<S497>/Calib' */

    /* Start for Constant: '<S496>/Calib' incorporates:
     *  Constant: '<S441>/Calib'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S503>/Calib'
     *  Constant: '<S504>/Calib'
     *  Constant: '<S506>/Calib'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* Start for Constant: '<S442>/Calib' */
    HTRR_ac_B.Calib = KeHTRR_P_HVC_Htr4PwrAct_W_NF_Dial;

    /* Start for Constant: '<S444>/Calib' */
    HTRR_ac_B.Calib_f = KeHTRR_b_HVC_Htr4_OvrhtUnlck_NF_Dial;

#else

    /* Start for Constant: '<S441>/Calib' */
    HTRR_ac_B.Calib_j = KeHTRR_P_HVAC_HtrPwr_INIT;

    /* Start for Constant: '<S443>/Calib' */
    HTRR_ac_B.Calib_g = KeHTRR_b_HVAC_HtrReq_INIT;

#endif

    /* End of Start for Constant: '<S496>/Calib' */

    /* SystemInitialize for SignalConversion generated from: '<S437>/VariantSource2' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S444>/Calib'
     *  SignalConversion generated from: '<S437>/VariantSource1'
     * */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    HTRR_ac_B.Calib = KeHTRR_P_HVAC_HtrPwr_NF;
    HTRR_ac_B.Calib_f = KeHTRR_b_HVAC_HtrReq_NF;

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource2' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S444>/Calib'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_hl = HTRR_ac_B.Calib_f;

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_Source = HTRR_ac_B.Calib;

#else

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_hl = HTRR_ac_B.Calib_g;

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Source = HTRR_ac_B.Calib_j;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S437>/VariantSource2' */

    /* SystemInitialize for SignalConversion generated from: '<S437>/VariantSource3' */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource3' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_g = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_g = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S437>/VariantSource3' */

    /* SystemInitialize for SignalConversion generated from: '<S437>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource5'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource4' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_a = HTRR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource5' */
    HTRR_ac_B.VariantMerge_For_Variant__ghjtr = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_a = HTRR_ac_B.Calib_j;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S437>/VariantSource4' */

    /* SystemInitialize for SignalConversion generated from: '<S437>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource5'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource7' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_k = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant__ghjtr = HTRR_ac_B.Calib_g;

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_k = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S437>/VariantSource7' */

    /* SystemInitialize for SignalConversion generated from: '<S437>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource8'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource6' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_i = HTRR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource8' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cr = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_i = HTRR_ac_B.Calib_j;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S437>/VariantSource6' */

    /* SystemInitialize for SignalConversion generated from: '<S437>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource8'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource9' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_j = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource8' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource8'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cr = HTRR_ac_B.Calib_g;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S437>/VariantSource9' */

    /* SystemInitialize for SignalConversion generated from: '<S437>/VariantSource10' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource9'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource10' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_iu = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource9'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_j = HTRR_ac_B.Calib_g;

    /* SystemInitialize for VariantMerge generated from: '<S437>/VariantSource10' incorporates:
     *  SignalConversion generated from: '<S437>/VariantSource10'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_iu = HTRR_ac_B.Calib_g;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S437>/VariantSource10' */

    /* SystemInitialize for SignalConversion generated from: '<S438>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource1'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource2' */
    HTRR_ac_B.VariantMerge_For_Variant_So_hlr = HTRR_ac_B.Calib_g;

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_c = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_hlr = HTRR_ac_B.Calib_f;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S438>/VariantSource2' */

    /* SystemInitialize for SignalConversion generated from: '<S438>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource1'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource3' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gv = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_c = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S438>/VariantSource3' */

    /* SystemInitialize for SignalConversion generated from: '<S438>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource3'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource5' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gh = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gv = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S438>/VariantSource5' */

    /* SystemInitialize for SignalConversion generated from: '<S438>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource5'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource4' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_a0 = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_gh = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S438>/VariantSource4' */

    /* SystemInitialize for SignalConversion generated from: '<S438>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource4'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource6' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_i0 = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_a0 = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S438>/VariantSource6' */

    /* SystemInitialize for SignalConversion generated from: '<S438>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource6'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource7' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_kd = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_i0 = HTRR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S438>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S438>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_kd = HTRR_ac_B.Calib_g;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S438>/VariantSource7' */

    /* SystemInitialize for SignalConversion generated from: '<S439>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource1'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource2' */
    HTRR_ac_B.VariantMerge_For_Variant_S_hlr2 = HTRR_ac_B.Calib_g;

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cp = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_hlr2 = HTRR_ac_B.Calib_f;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S439>/VariantSource2' */

    /* SystemInitialize for SignalConversion generated from: '<S439>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource1'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource3' */
    HTRR_ac_B.VariantMerge_For_Variant_So_gvn = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sou_cp = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S439>/VariantSource3' */

    /* SystemInitialize for SignalConversion generated from: '<S439>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource3'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource4' */
    HTRR_ac_B.VariantMerge_For_Variant_S_a00k = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_gvn = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S439>/VariantSource4' */

    /* SystemInitialize for SignalConversion generated from: '<S439>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource4'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource5' */
    HTRR_ac_B.VariantMerge_For_Variant_So_ghj = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_a00k = HTRR_ac_B.Calib_g;

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_ghj = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S439>/VariantSource5' */

    /* SystemInitialize for SignalConversion generated from: '<S439>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource7'
     * */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource6' */
    HTRR_ac_B.VariantMerge_For_Variant_So_i0d = HTRR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource7' */
    HTRR_ac_B.VariantMerge_For_Variant_So_kdb = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_i0d = HTRR_ac_B.Calib_j;

    /* SystemInitialize for VariantMerge generated from: '<S439>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S439>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_kdb = HTRR_ac_B.Calib_g;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S439>/VariantSource6' */

    /* SystemInitialize for SignalConversion generated from: '<S440>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource1'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource2' */
    HTRR_ac_B.VariantMerge_For_Variant__hlr2o = HTRR_ac_B.Calib_g;

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_So_cpz = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant__hlr2o = HTRR_ac_B.Calib_f;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S440>/VariantSource2' */

    /* SystemInitialize for SignalConversion generated from: '<S440>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource1'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource3' */
    HTRR_ac_B.VariantMerge_For_Variant_S_gvng = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_cpz = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S440>/VariantSource3' */

    /* SystemInitialize for SignalConversion generated from: '<S440>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource3'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource5' */
    HTRR_ac_B.VariantMerge_For_Variant_S_ghjt = HTRR_ac_B.Calib_j;

#else

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource3'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_gvng = HTRR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource5'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_ghjt = HTRR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S440>/VariantSource5' */

    /* SystemInitialize for SignalConversion generated from: '<S440>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource6'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource4' */
    HTRR_ac_B.VariantMerge_For_Variant_So_a00 = HTRR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource6' */
    HTRR_ac_B.VariantMerge_For_Variant_S_i0dl = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource4'
     */
    HTRR_ac_B.VariantMerge_For_Variant_So_a00 = HTRR_ac_B.Calib_j;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S440>/VariantSource4' */

    /* SystemInitialize for SignalConversion generated from: '<S440>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource6'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource7' */
    HTRR_ac_B.VariantMerge_For_Variant_S_kdb3 = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource6'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_i0dl = HTRR_ac_B.Calib_g;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S440>/VariantSource7' */

    /* SystemInitialize for SignalConversion generated from: '<S436>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource7'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S436>/VariantSource2' */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_h = HTRR_ac_B.Calib;

#else

    /* SystemInitialize for VariantMerge generated from: '<S440>/VariantSource7' incorporates:
     *  SignalConversion generated from: '<S440>/VariantSource7'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_kdb3 = HTRR_ac_B.Calib_g;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S436>/VariantSource2' */

    /* SystemInitialize for SignalConversion generated from: '<S436>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S436>/VariantSource2'
     */
#if Rte_SysCon_Variant_HTRR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S436>/VariantSource1' */
    HTRR_ac_B.VariantMerge_For_Variant_S_cpz2 = HTRR_ac_B.Calib_f;

#else

    /* SystemInitialize for VariantMerge generated from: '<S436>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S436>/VariantSource2'
     */
    HTRR_ac_B.VariantMerge_For_Variant_Sour_h = HTRR_ac_B.Calib_j;

    /* SystemInitialize for VariantMerge generated from: '<S436>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S436>/VariantSource1'
     */
    HTRR_ac_B.VariantMerge_For_Variant_S_cpz2 = HTRR_ac_B.Calib_g;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S436>/VariantSource1' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_HTRR_FUNC_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/HTRR_FUNC_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Heater_Outputs'
     */
    /* SystemInitialize for Enabled SubSystem: '<S6>/Htr4_ECH' */
    /* SystemInitialize for SignalConversion generated from: '<S327>/Htr4_Unlock' incorporates:
     *  Constant: '<S399>/Calib'
     */
    HTRR_ac_B.OutportBufferForHtr4_Unlock = KeHTRR_b_Htr4_Unlock_Req;

    /* End of SystemInitialize for SubSystem: '<S6>/Htr4_ECH' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/HTRR_FUNC_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
