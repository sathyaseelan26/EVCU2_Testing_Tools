/*
 * File: BTRR_ac.c
 *
 * Code generated for Simulink model 'BTRR_ac'.
 *
 * Model version                  : 9.228
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:12:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BTRR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_BTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KaBTRR_b_HoodKeyStat[7] =
{
    1, 0, 1, 0, 0, 1, 0
} ;                                    /* Referenced by: '<S707>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOffDly_BTIS2FA_WL =
    600U;                              /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOffDly_BTISFA_WL =
    600U;                              /* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOff_B4SwToBTOS =
    600U;                              /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOff_B4SwToBTOS_EVA =
    600U;                              /* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOff_B4SwToBTOS_RU =
    600U;                              /* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOnDly_BTIS2FA_WL =
    600U;                              /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOnDly_BTISFA_WL =
    600U;                              /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT)
    KeBTRR_Cnt_LTAPOnDly_BothBattInFA_BTIS = 600U;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT)
    KeBTRR_Cnt_LTAPOnDly_BothBattInFA_WL = 600U;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOnDly_SDSOff = 600U;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOnDly_SDSOn = 600U;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOnDly_SDSSNA_Cool =
    600U;                              /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOnDly_SDSSNA_NoCool =
    600U;                              /* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOn_ActvCool = 600U;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOn_B4SwToBHOS = 600U;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_Cnt_LTAPOn_NoActvCool = 600U;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BatHeatPwr_NeedLimtd_D =
    0.0F;                              /* Referenced by: '<S806>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_P_BatHeatPwr_NeedLimtd_NF_Dial = 0.0F;/* Referenced by: '<S1039>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BatHeatPwr_Need_NoBatReq =
    0.0F;                              /* Referenced by: '<S655>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BattCoolPwrNeedLim_D =
    0.0F;                              /* Referenced by: '<S808>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_P_BattCoolPwrNeedLim_NF_Dial = 0.0F;/* Referenced by: '<S1040>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_P_BattCoolPwr_OV_AmbNotChill = 0.0F;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BattCool_Pwr_MaxLim =
    7000.0F;                           /* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BattCool_Pwr_MinLim =
    0.0F;                              /* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BattCool_Pwr_dflt = 0.0F;/* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BattHeatPwr_NeedMax =
    1400.0F;                           /* Referenced by: '<S656>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BattHeatPwr_NeedMin =
    0.0F;                              /* Referenced by: '<S657>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_P_BattMaxCoolin_Pwr =
    7000.0F;                           /* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_APMTemp1_D = 0.0F;/* Referenced by: '<S1033>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_APMTemp2_D = 0.0F;/* Referenced by: '<S1035>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_APMTmp1Ofst_RecircLSP =
    3.0F;                              /* Referenced by: '<S745>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_APMTmp1Ofst_RecircRSP =
    3.0F;                              /* Referenced by: '<S746>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BTISBTIS2Max_D = 25.0F;/* Referenced by: '<S889>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BTISBTIS2Max_NF_Dial =
    25.0F;                             /* Referenced by: '<S1041>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BatClntTmp_Cool_MaxAllwdHi = 60.0F;/* Referenced by: '<S548>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BatClntTmp_Cool_MaxAllwdLo = 48.0F;/* Referenced by: '<S549>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatClntTmp_MaxAllwdHi =
    60.0F;                             /* Referenced by:
                                        * '<S778>/Calib'
                                        * '<S525>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatClntTmp_MaxAllwdLo =
    58.0F;                             /* Referenced by:
                                        * '<S779>/Calib'
                                        * '<S526>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatColdHeat_ReqMin =
    -25.0F;                            /* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatColdTmp_PerWkUp =
    -5.0F;                             /* Referenced by: '<S528>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatCondPlug_InRqTmp =
    0.0F;                              /* Referenced by: '<S684>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatCondPlug_InRq_HotTmp =
    55.0F;                             /* Referenced by: '<S685>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatHeat_MaxReq = 38.0F;/* Referenced by: '<S529>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatHotTmp_PerWkUp = 35.0F;/* Referenced by: '<S550>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatHot_CoolReq = 50.0F;/* Referenced by: '<S551>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpCold_RgHgh = -30.0F;/* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpCold_RgLw = -31.0F;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpHot_RgHgh = 52.0F;/* Referenced by: '<S561>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpHot_RgLw = 51.0F;/* Referenced by: '<S562>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpHys_ColdRgHgh =
    -33.0F;                            /* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpHys_ColdRgLw =
    -34.0F;                            /* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpHys_HotRgHgh =
    55.0F;                             /* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpHys_HotRgLow =
    54.0F;                             /* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpOoR_ColdHgh =
    -40.0F;                            /* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpOoR_ColdLw = -41.0F;/* Referenced by: '<S566>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpOoR_HotHgh = 65.0F;/* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BatTmpOoR_HotLow = 64.0F;/* Referenced by: '<S568>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BattCellTemp_DeltaMax_HysHi = 14.0F;/* Referenced by: '<S780>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BattCellTemp_DeltaMax_HysLo = 10.0F;/* Referenced by: '<S781>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattHeating_MaxTemp =
    20.0F;                             /* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BattHeating_MaxTemp_NF_Dial = 20.0F;/* Referenced by: '<S1042>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattHeating_Thrshld =
    -10.0F;                            /* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BattHeating_Thrshld_NF_Dial = 20.0F;/* Referenced by: '<S1043>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattHighTmp_Thrshld =
    55.0F;                             /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BattHighTmp_Thrshld_NF_Dial = 20.0F;/* Referenced by: '<S1044>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattLowTmp_Thrshld =
    -30.0F;                            /* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BattLowTmp_Thrshld_NF_Dial = 20.0F;/* Referenced by: '<S1045>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattPwrDerate_TmpThrshld =
    50.0F;                             /* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_BattPwrDerate_TmpThrshld_NF_Dial = 20.0F;/* Referenced by: '<S1046>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattTempDisp_D = 20.0F;/* Referenced by: '<S866>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattTempDisp_SNA = 255.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattTmpDeltaThrshld =
    25.0F;                             /* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattTmpMaxCmfrt_D = 20.0F;/* Referenced by: '<S867>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattTmpMaxDerate_D =
    20.0F;                             /* Referenced by: '<S868>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattTmpMinCmfrt_D = 20.0F;/* Referenced by: '<S869>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_BattTmpMinDerate_D =
    20.0F;                             /* Referenced by: '<S870>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellAvgAllwdSafeVal =
    25.0F;                             /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellAvgUsed_NF_Dial =
    0.0F;                              /* Referenced by: '<S1047>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellMaxAllwdSafeVal =
    25.0F;                             /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellMaxThHi_HybAltMd =
    50.0F;                             /* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellMaxThHi_Msg2 = 37.0F;/* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellMaxThLo_HybAltMd =
    45.0F;                             /* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellMaxThLo_Msg2 = 10.0F;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellMinAllwdSafeVal =
    25.0F;                             /* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellTempAvgUsed_D = 0.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellTempMaxUsed_D = 0.0F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellTempMaxUsed_NF_Dial =
    0.0F;                              /* Referenced by: '<S1048>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellTempMinUsed_D = 0.0F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_CellTempMinUsed_NF_Dial =
    0.0F;                              /* Referenced by: '<S1049>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMaxLSP_BattPriorityCold = -10.5F;/* Referenced by: '<S632>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMaxLSP_BattPriorityHot = 55.5F;/* Referenced by: '<S633>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMaxRSP_BattPriorityCold = -10.0F;/* Referenced by: '<S634>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMaxRSP_BattPriorityHot = 54.0F;/* Referenced by: '<S635>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMinLSP_BattPriorityCold = -31.5F;/* Referenced by: '<S636>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMinLSP_BattPriorityHot = 49.5F;/* Referenced by: '<S637>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMinRSP_BattPriorityCold = -31.0F;/* Referenced by: '<S638>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_CellTmpMinRSP_BattPriorityHot = 49.0F;/* Referenced by: '<S639>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_ClntTempConst_BattHeatPwr
    = 20.0F;                           /* Referenced by: '<S658>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_Dflt_BTIS2Tmp = 25.0F;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_Dflt_BTISTmp = 25.0F;/* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HT_AuxPmpTemp_D = 0.0F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HVBR_Ovrd_MinTemp =
    -20.0F;                            /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HVBR_Ovrd_MinTemp_AuxPmp =
    -20.0F;                            /* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HVBR_Ovrd_MinTemp_LTPP =
    -20.0F;                            /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_HV_BatAvgModTmp_B4thmcINIT = 25.0F;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_HV_BatMaxModTmp_B4thmcINIT = 25.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_HV_BatMinModTmp_B4thmcINIT = 25.0F;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HV_BatModAvg_Tmp_Dial =
    25.0F;                             /* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HV_BatModMaxTmp_D = 25.0F;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HV_BatModMax_Tmp_Dial =
    25.0F;                             /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HV_BatModMinTmp_D = 25.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HV_BatModMin_Tmp_Dial =
    25.0F;                             /* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HV_BatModTempMax_NF_Dial =
    25.0F;                             /* Referenced by: '<S1050>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_HV_BatModTempMin_NF_Dial =
    25.0F;                             /* Referenced by: '<S1051>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_LTAPTmpDelta_BTIS_RA =
    3.0F;                              /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_LTAPTmpDelta_SDSSNA =
    3.0F;                              /* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_LTActPumpTemp_D = 0.0F;/* Referenced by: '<S1020>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_T_LTCLTgt_BattActvPsvHeating_D = 0.0F;/* Referenced by: '<S1009>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_LTPsvPumpTemp_Dial = 0.0F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_MaxBattAllowPsv_D = 0.0F;/* Referenced by: '<S975>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_MaxBattAllow_D = 0.0F;/* Referenced by: '<S969>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_MinBattAllowPsv_D = 0.0F;/* Referenced by: '<S971>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_MinBattAllow_D = 0.0F;/* Referenced by: '<S967>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_SDSOffTmpDelta_BTIS_RA =
    1.0F;                              /* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_SDSOnTmpDelta_BTIS_RA =
    3.0F;                              /* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_T_SDS_ClntTmpIn_Dial = 0.0F;/* Referenced by: '<S952>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_APMTemp1_SD = 0;/* Referenced by: '<S1034>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_APMTemp2_SD = 0;/* Referenced by: '<S1036>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_AlternatorMd_SD = 0;/* Referenced by: '<S1007>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BPCMLINLOC_FA_D = 0;/* Referenced by: '<S981>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BPCMLINLOC_FA_SD = 0;/* Referenced by: '<S982>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BPCMLIN_LOC_SD = 0;/* Referenced by: '<S983>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BTISBTIS2Max_SD = 0;/* Referenced by: '<S890>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BaTmpNot_Opt_SD = 1;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BatCntctrStat_SelDial = 0;/* Referenced by: '<S924>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_BatCondPlug_InRq_HotTmpEnbl = 1;/* Referenced by: '<S686>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BatCondPriority_SD = 0;/* Referenced by: '<S832>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BatCritChk_Msg7 = 1;/* Referenced by: '<S708>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BatHeatPwr_NeedLimtd_SD =
    0;                                 /* Referenced by: '<S807>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_BatHeatReq_BatThrmState_Enb = 0;/* Referenced by: '<S530>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BatOVChkMsg7 = 1;/* Referenced by: '<S709>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCPVStuckSt_SD = 0;/* Referenced by: '<S914>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCellBalancing_D = 0;/* Referenced by: '<S850>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCellBalancing_NF_Dial
    = 0;                               /* Referenced by: '<S1052>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCellBalancing_SD = 0;/* Referenced by: '<S851>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCondFlt_D = 0;/* Referenced by: '<S895>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCondFlt_NF_Dial = 0;/* Referenced by: '<S1053>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCondFlt_SD = 0;/* Referenced by: '<S896>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCondPlugin_Rq_D = 0;/* Referenced by: '<S854>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCondPlugin_Rq_NF_Dial
    = 0;                               /* Referenced by: '<S1054>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCondPlugin_Rq_SD = 0;/* Referenced by: '<S855>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolFlt_D = 0;/* Referenced by: '<S893>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolFlt_SD = 0;/* Referenced by: '<S894>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolFlts_D = 0;/* Referenced by: '<S838>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolFlts_NF_Dial = 0;/* Referenced by: '<S1055>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolFlts_SD = 0;/* Referenced by: '<S839>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolPwrNeedLim_SD = 0;/* Referenced by: '<S809>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolPwr_Slct = 0;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_BattCoolReq_CPV_RA_NF_Dial = 0;/* Referenced by: '<S1056>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolReq_D = 0;/* Referenced by: '<S844>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolReq_NF_Dial = 0;/* Referenced by: '<S1057>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolReq_RA_D = 0;/* Referenced by: '<S845>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolReq_RA_SD = 0;/* Referenced by: '<S846>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCoolReq_SD = 0;/* Referenced by: '<S847>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattCool_Pwr_dflt_Slct =
    0;                                 /* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHeatFlts_D = 0;/* Referenced by: '<S840>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHeatFlts_NF_Dial = 0;/* Referenced by: '<S1058>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHeatFlts_SD = 0;/* Referenced by: '<S841>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_BattHeatPwr_OVorEPD_OrrdEnbl = 1;/* Referenced by: '<S659>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHeatReq_D = 0;/* Referenced by: '<S848>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHeatReq_NF_Dial = 0;/* Referenced by: '<S1059>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHeatReq_SD = 0;/* Referenced by: '<S849>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHtrLOC_FA_D = 0;/* Referenced by: '<S989>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHtrLOC_FA_SD = 0;/* Referenced by: '<S990>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattHtr_LOC_SD = 0;/* Referenced by: '<S991>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattPriority_D = 0;/* Referenced by: '<S864>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattPriority_SD = 0;/* Referenced by: '<S865>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattPsvHeatReq_D = 0;/* Referenced by: '<S858>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattPsvHeatReq_NF_Dial =
    0;                                 /* Referenced by: '<S1060>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattPsvHeatReq_SD = 0;/* Referenced by: '<S859>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTempDisp_SD = 0;/* Referenced by: '<S871>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTempNot_Optml = 1;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTempNot_Optml_D = 0;/* Referenced by: '<S834>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTempNot_Optml_NF_Dial
    = 0;                               /* Referenced by: '<S1061>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTempNot_Optml_SD = 0;/* Referenced by: '<S835>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTmpMaxCmfrt_SD = 0;/* Referenced by: '<S872>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTmpMaxDerate_SD = 0;/* Referenced by: '<S873>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTmpMinCmfrt_SD = 0;/* Referenced by: '<S874>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_BattTmpMinDerate_SD = 0;/* Referenced by: '<S875>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Batt_CritOrMarg_D = 0;/* Referenced by: '<S830>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Batt_CritOrMarg_NF_Dial =
    0;                                 /* Referenced by: '<S1062>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Batt_CritOrMarg_SD = 0;/* Referenced by: '<S831>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Batt_PsvCoolReq_D = 0;/* Referenced by: '<S860>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Batt_PsvCoolReq_NF_Dial =
    0;                                 /* Referenced by: '<S1063>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Batt_PsvCoolReq_SD = 0;/* Referenced by: '<S861>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CabHeatThermalState_SD =
    0;                                 /* Referenced by: '<S1011>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellAvgUsedFA_NF_Dial = 0;/* Referenced by: '<S1064>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellMaxUsedFA_NF_Dial = 0;/* Referenced by: '<S1065>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellMinUsedFA_NF_Dial = 0;/* Referenced by: '<S1066>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellOverTempPsv_ReqEnable
    = 1;                               /* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellOverTempPsv_SD = 0;/* Referenced by: '<S887>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellOverTemp_SD = 0;/* Referenced by: '<S883>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempAvgUsedFA_D = 0;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempAvgUsedFA_SD = 0;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempAvgUsed_SD = 0;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempDelta_SD = 0;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempMaxUsedFA_D = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempMaxUsedFA_SD = 0;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempMaxUsed_SD = 0;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempMinUsedFA_D = 0;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempMinUsedFA_SD = 0;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellTempMinUsed_SD = 0;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_CellUnderTemp_SD = 0;/* Referenced by: '<S881>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_CellunderTempPsv_ReqEnable = 1;/* Referenced by: '<S531>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Charg_PlgdIn_Sel = 0;/* Referenced by: '<S668>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_ChargingSystemSts_SD = 0;/* Referenced by: '<S922>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DisableDebounceRST = 1;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DispStChk1_Msg7 = 0;/* Referenced by: '<S710>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DispStChk2_Msg7 = 1;/* Referenced by: '<S711>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DsblMsg2_AmbLow = 1;/* Referenced by: '<S687>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DsblMsg2_KeyChk = 1;/* Referenced by: '<S698>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DsblMsg2_OOR = 0;/* Referenced by: '<S699>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DsblPSAChk_Recirc = 1;/* Referenced by: '<S747>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_DsblPlgIn_Msg7 = 1;/* Referenced by: '<S712>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_DsblThrmlFltsChk_KeyOffMsg2 = 1;/* Referenced by: '<S688>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_DsblThrmlFltsChk_OOR_KeyOffMsg2 = 1;/* Referenced by: '<S700>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_AlternatorMd = 0;/* Referenced by: '<S618>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_BPCM_CANC11_Flt = 1;/* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_BTIS2RA = 0;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_BTISRA = 0;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_CommBus_B_Off_Flt =
    1;                                 /* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_PlugAltMd_ColdRng =
    0;                                 /* Referenced by: '<S624>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_PlugAltMd_HotRng = 0;/* Referenced by: '<S612>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Dsbl_PlugAltMd_OOR = 0;/* Referenced by: '<S619>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EXV_PerfDiag_FltDtct_D =
    0;                                 /* Referenced by: '<S941>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EXV_PerfDiag_FltDtct_SD =
    0;                                 /* Referenced by: '<S942>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_EXV_PressElctrFlt_FltDtct_D = 0;/* Referenced by: '<S943>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_EXV_PressElctrFlt_FltDtct_SD = 0;/* Referenced by: '<S944>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EXV_PressSens_FltDtct_D =
    0;                                 /* Referenced by: '<S945>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EXV_PressSens_FltDtct_SD =
    0;                                 /* Referenced by: '<S946>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_EXV_TempElctrFlt_FltDtct_D = 0;/* Referenced by: '<S947>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_EXV_TempElctrFlt_FltDtct_SD = 0;/* Referenced by: '<S948>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EXV_TempSens_FltDtct_D =
    0;                                 /* Referenced by: '<S949>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EXV_TempSens_FltDtct_SD =
    0;                                 /* Referenced by: '<S950>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblBTIS2FA_ContinueCond =
    0;                                 /* Referenced by: '<S532>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblBTISFA_ContinueCond =
    0;                                 /* Referenced by: '<S533>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblBatCold_MinTmpHyst =
    1;                                 /* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblBatCritChk_Msg7 = 1;/* Referenced by: '<S713>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblBattPsv_CoolReq = 1;/* Referenced by: '<S782>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblBattPsv_HeatReq = 1;/* Referenced by: '<S783>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblCellOverTempToFlow =
    1;                                 /* Referenced by: '<S734>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblClntTmp_PmpReq = 0;/* Referenced by: '<S784>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblEburnHyst = 1;/* Referenced by: '<S792>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblHeatOrCool_PmpReq = 1;/* Referenced by: '<S785>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblNoCondChk_PmpFlw = 0;/* Referenced by: '<S735>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblPSAChk_Recirc = 1;/* Referenced by: '<S748>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_EnblPmpFlwNCoolPwr_Max_CPVRA = 0;/* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblTempRatFlts = 0;/* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblThrmFltsRst_Msg2 = 1;/* Referenced by: '<S689>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_EnblThrmlHybAltMd = 1;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_AlternatorMd = 1;/* Referenced by:
                                                                      * '<S613>/Calib'
                                                                      * '<S625>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_AlternatorMd_OOR = 1;/* Referenced by: '<S620>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BCH_LOC = 1;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BCH_PerfFlt = 1;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BHOS_Flt = 1;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BPCM_LOC = 1;/* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTBV_LOC_Flt = 0;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTIS2_Flt = 1;/* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTISRA_BEV = 0;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTISRA_EVA = 0;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTISRA_RU = 0;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTISRA_WL = 0;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTIS_Flt = 1;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTL_CPVFlt = 1;/* Referenced by: '<S554>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTOS2_Flt = 1;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BTOS_Flt = 1;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BatHeat_MaxReq = 0;/* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_Enbl_BattCPV_StuckOpenOrSNA = 1;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BattHeat_BTISRA = 0;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BattHeating_Flt = 1;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BtlClntLvlLo_Flt = 1;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_BtlSnsr_SG = 1;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_CEXV_LIN1BusOff_Flt =
    0;                                 /* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_CEXV_LIN2BusOff_Flt =
    0;                                 /* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_CEXV_LIN3BusOff_Flt =
    0;                                 /* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ChlrVlv_OC = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ChlrVlv_SB = 1;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ChlrVlv_SG = 0;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_CoolPerfFlt = 1;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EAC_LIN1BusOff_Flt =
    1;                                 /* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EAC_LIN2BusOff_Flt =
    1;                                 /* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EAC_LIN3BusOff_Flt =
    1;                                 /* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EAC_LOC = 1;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EAC_PerfFlt = 1;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ECHIn_Flt = 1;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ECHOut_Flt = 1;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ECHTIS_Flt = 1;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ECH_PerfFlt = 1;/* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EEXV_ACRefVlvFlt = 1;/* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EEXV_LIN1BusFlt = 1;/* Referenced by: '<S390>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EEXV_LIN2BusFlt = 1;/* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EEXV_LIN3BusFlt = 1;/* Referenced by: '<S392>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EEXV_PressSens_Flt =
    1;                                 /* Referenced by: '<S393>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EEXV_RefTmpSnrFlt =
    1;                                 /* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EEXV_TempSens_Flt =
    1;                                 /* Referenced by: '<S395>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EXV_PerfDiag_FltDtct
    = 0;                               /* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_Enbl_EXV_PressSens_FltDtct = 0;/* Referenced by: '<S406>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_EXV_TempSens_FltDtct
    = 0;                               /* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HAM_CellMaxFA = 1;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HEP_Flt = 1;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTAPDryRunFA_Flt = 0;/* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTAPDryRun_Flt = 0;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTAP_PerfFlt = 1;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTAP_TmpFlt = 1;/* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTCV_PinFlts = 1;/* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTCV_StckFlt = 1;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTSOV_PinFlts = 0;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_HTSOV_StkClose = 0;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_Htr4Sts_Flt = 0;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LIN1BusOff_Flt = 1;/* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LIN2BusOff_Flt = 1;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LINBusOff = 1;/* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LOC_ECH = 1;/* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LOC_EXV = 0;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LOC_HTAP = 1;/* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOffDly = 0;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_Enbl_LTAPOffDly_BTIS2FA_WL = 1;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOffDly_BTISFA_WL
    = 1;                               /* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOffDly_EVA = 0;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOffDly_RU = 0;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOnDly_BTIS2FA_WL
    = 1;                               /* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOnDly_BTISFA_WL =
    1;                                 /* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_Enbl_LTAPOnDly_BothBattInFA_BTIS = 1;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_Enbl_LTAPOnDly_BothBattInFA_WL = 1;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOnDly_SDSOff = 1;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOnDly_SDSOn = 1;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAPOnDly_SDSSNA = 1;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_Enbl_LTAPOnDly_SDSSNA_NoCool = 1;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_ClPmpFlt = 1;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_DryRun_FA = 1;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_LIN1BusOff_Flt =
    1;                                 /* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_LIN2BusOff_Flt =
    1;                                 /* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_LIN3BusOff_Flt =
    1;                                 /* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_LOC = 1;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_OvSpFlt = 1;/* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_PerfFlt = 1;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTAP_TmpFlt = 1;/* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTCPVFlt_RA = 1;/* Referenced by: '<S555>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_LTL_CPVFlt = 1;/* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_Enbl_LT_CPV_StuckClsdOrSNA = 1;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_ACRefVlvFlt = 0;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_ACTmpSnr4Flt =
    0;                                 /* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_ACTmpSnr5Flt =
    0;                                 /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_LIN1BusFlt = 0;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_LIN2BusFlt = 0;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_LIN3BusFlt = 0;/* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_PerfDiagFlt = 0;/* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_PressElctFlt =
    0;                                 /* Referenced by: '<S475>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_PressSensFlt =
    0;                                 /* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_RefSnrBFlt = 0;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OEXV_RefSnrGFlt = 0;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_OORNoPlug = 1;/* Referenced by: '<S621>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_PresElectr_Flt = 1;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_PresSensHi = 1;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_PresSensLo = 1;/* Referenced by: '<S491>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_PresSensPerfFlt = 1;/* Referenced by: '<S492>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_PressSnsrThChk = 1;/* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_RadFanFlts_HybAltMd =
    1;                                 /* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_RadFan_FltDtct = 0;/* Referenced by: '<S496>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_TempElectr_Flt = 1;/* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_TempFlts_CellMax = 0;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ThrmlRly = 1;/* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Enbl_ePTBusOff_Flt = 1;/* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HTCL_Heat_Distrib_SD = 0;/* Referenced by: '<S1002>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HT_AuxPmpTemp_FA_D = 0;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HT_AuxPmpTemp_FA_SD = 0;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HT_AuxPmpTemp_SD = 0;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVBR_ChkSensTemp_Sel = 0;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVBR_OvrdReq_D = 0;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVBR_OvrdReq_NF_Dial = 0;/* Referenced by: '<S1067>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVBR_OvrdReq_SD = 0;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVBR_UsgEnb_D = 0;/* Referenced by: '<S973>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVBR_UsgEnb_SD = 0;/* Referenced by: '<S974>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVBattPriority_NF_Dial =
    0;                                 /* Referenced by: '<S1068>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVOVFail1_Msg7 = 1;/* Referenced by: '<S714>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVOVFail2_Msg7 = 1;/* Referenced by: '<S715>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HVOverVoltFailure_SD = 0;/* Referenced by: '<S928>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BTIS2_FltDtct_D = 0;/* Referenced by: '<S935>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BTIS2_FltDtct_SD = 0;/* Referenced by: '<S936>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BTIS_FltDtct_D = 0;/* Referenced by: '<S937>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BTIS_FltDtct_SD = 0;/* Referenced by: '<S938>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BTOS2_FltDtct_D = 0;/* Referenced by: '<S939>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BTOS2_FltDtct_SD = 0;/* Referenced by: '<S940>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModAvg_TmpV_Dial =
    0;                                 /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModAvg_TmpV_SelDial
    = 0;                               /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModAvg_Tmp_SelDial =
    0;                                 /* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMaxTmp_SD = 0;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMax_TmpV_Dial =
    0;                                 /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMax_TmpV_SelDial
    = 0;                               /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMax_Tmp_SelDial =
    0;                                 /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMinTmp_SD = 0;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMin_TmpV_Dial =
    0;                                 /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMin_TmpV_SelDial
    = 0;                               /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatModMin_Tmp_SelDial =
    0;                                 /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatRdy_D = 0;/* Referenced by: '<S963>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatRdy_SD = 0;/* Referenced by: '<S964>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_HV_BatTempCrit_CondState_New_SD = 0;/* Referenced by: '<S828>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatTempCrit_Cond_D = 0;/* Referenced by: '<S826>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_HV_BatTempCrit_Cond_NF_Dial = 0;/* Referenced by: '<S1069>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatTempCrit_Cond_SD =
    0;                                 /* Referenced by: '<S827>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_BatTmpRng_SD = 0;/* Referenced by: '<S862>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_Bat_OverVltg_D = 0;/* Referenced by: '<S965>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_Bat_OverVltg_SD = 0;/* Referenced by: '<S966>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_PropSysActv_Dial = 0;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HV_PropSysActv_SelDial =
    0;                                 /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HghRfrgtPres_SD = 0;/* Referenced by: '<S1031>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HoodAjar_D = 0;/* Referenced by: '<S926>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HoodAjar_SD = 0;/* Referenced by: '<S927>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_HtrSts = 1;/* Referenced by: '<S977>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_KeyRun_OV_BattCrit_D = 0;/* Referenced by: '<S842>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_KeyRun_OV_BattCrit_NF_Dial = 0;/* Referenced by: '<S1070>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_KeyRun_OV_BattCrit_SD = 0;/* Referenced by: '<S843>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAPLOC_FA_D = 0;/* Referenced by: '<S985>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAPLOC_FA_SD = 0;/* Referenced by: '<S986>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAP_LOC_SD = 0;/* Referenced by: '<S987>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAP_LoLvl_Diag_D = 0;/* Referenced by: '<S933>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAP_LoLvl_Diag_SD = 0;/* Referenced by: '<S934>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAP_Off_D = 0;/* Referenced by: '<S1026>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAP_Off_SD = 0;/* Referenced by: '<S1027>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTAP_Req_CellBalancing =
    1;                                 /* Referenced by: '<S786>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTActPumpDryRun_FA_D = 0;/* Referenced by: '<S1024>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTActPumpDryRun_FA_SD = 0;/* Referenced by: '<S1025>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTActPumpDryRun_SD = 0;/* Referenced by: '<S1022>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTActPumpTemp_SD = 0;/* Referenced by: '<S1021>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTActvPmp_InptSelect = 0;/* Referenced by: '<S736>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_LTCLTgt_BattActvPsvHeating_SD = 0;/* Referenced by: '<S1010>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTCPVStuckSt_SD = 0;/* Referenced by: '<S915>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LTPsvPumpTemp_SD = 0;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LT_ActPmpFlw_SD = 0;/* Referenced by: '<S899>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_LT_ActvPmpRq_BatThrmState_Enb = 0;/* Referenced by: '<S787>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_LT_ActvPmpRq_Disable = 0;/* Referenced by: '<S788>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_MaxBattAllowPsv_SD = 0;/* Referenced by: '<S976>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_MaxBattAllow_SD = 0;/* Referenced by: '<S970>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Message2_LatchPlugRst = 1;/* Referenced by: '<S690>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_MinBattAllowPsv_SD = 0;/* Referenced by: '<S972>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_MinBattAllow_SD = 0;/* Referenced by: '<S968>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_Msg7_BattFlts_Dsbl = 1;/* Referenced by: '<S716>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_OV_SelBTOS = 1;/* Referenced by: '<S660>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_OV_SelECHTIS = 1;/* Referenced by: '<S661>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_OoR_Recoverable_D = 0;/* Referenced by: '<S885>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_OoR_Recoverable_NF_Dial =
    0;                                 /* Referenced by: '<S1071>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_OoR_Recoverable_SD = 0;/* Referenced by: '<S886>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_PerWup_BatToCond_D = 0;/* Referenced by: '<S901>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_PerWup_BatToCond_NF_Dial =
    0;                                 /* Referenced by: '<S1072>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_PerWup_BatToCond_SD = 0;/* Referenced by: '<S902>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_PlugdIn_Or_Chrg_D = 0;/* Referenced by: '<S856>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_PlugdIn_Or_Chrg_NF_Dial =
    0;                                 /* Referenced by: '<S1073>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_PlugdIn_Or_Chrg_SD = 0;/* Referenced by: '<S857>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_RS_N_Or_NrmlPerWp_D = 0;/* Referenced by: '<S1014>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_RS_N_Or_NrmlPerWp_SD = 0;/* Referenced by: '<S1015>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_SDS_ActSt_Sel = 0;/* Referenced by: '<S953>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_SDS_ClntTmpIn_Sel = 0;/* Referenced by: '<S954>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_SSDR_KeySts_SD = 0;/* Referenced by: '<S1000>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT)
    KeBTRR_b_ThrmlBatCoolingFlt_NF_Dial = 0;/* Referenced by: '<S1074>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_VehThermSt_SD = 0;/* Referenced by: '<S1005>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_VhclPlgdIn_D = 0;/* Referenced by: '<S836>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_VhclPlgdIn_NF_Dial = 0;/* Referenced by: '<S1075>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_VhclPlgdIn_SD = 0;/* Referenced by: '<S837>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_isCharging_D = 0;/* Referenced by: '<S852>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_isCharging_NF_Dial = 0;/* Referenced by: '<S1076>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(boolean, BTRR_VAR_INIT) KeBTRR_b_isCharging_SD = 0;/* Referenced by: '<S853>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellOverTempPsv_D = 0.0F;/* Referenced by: '<S888>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellOverTempPsv_NF_Dial =
    0.0F;                              /* Referenced by: '<S1077>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellOverTemp_D = 0.0F;/* Referenced by: '<S884>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellOverTemp_NF_Dial =
    0.0F;                              /* Referenced by: '<S1078>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellTempDelta_D = 0.0F;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellTempDelta_NF_Dial =
    0.0F;                              /* Referenced by: '<S1079>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellUnderTemp_D = 0.0F;/* Referenced by: '<S882>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dT_CellUnderTemp_NF_Dial =
    0.0F;                              /* Referenced by: '<S1080>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dV_LTAPMaxFlow_CPV_RA =
    0.0F;                              /* Referenced by: '<S737>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dV_LTAP_Rqt_BattEmgncyCool =
    1.0F;                              /* Referenced by: '<S768>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dV_LTAP_Rqt_LoLv_Diag_Dial =
    0.0F;                              /* Referenced by: '<S769>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_dV_LT_ActPmpFlw_BatClg_OV_Dial = 70.0F;/* Referenced by: '<S770>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dV_LT_ActPmpFlw_D = 0.0F;/* Referenced by: '<S900>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KeBTRR_dV_LT_ActPmpFlw_EVA_Balancing = 0.075F;/* Referenced by: '<S771>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_dV_LT_ActPmpFlw_NF_Dial =
    0.0F;                              /* Referenced by: '<S1081>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeHPMR_e_HybSysState, BTRR_VAR_INIT)
    KeBTRR_e_AlternatorMd_D = CeHPMR_e_POWERUP;/* Referenced by: '<S1008>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeBPCR_e_LIN_BusOff, BTRR_VAR_INIT) KeBTRR_e_BPCMLIN_LOC_D
    = CeBPCR_e_LIN_BusOff_Disabled;    /* Referenced by: '<S984>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeHVTR_e_HV_BatCntctrStat, BTRR_VAR_INIT)
    KeBTRR_e_BatCntctrStat_Dial = CeHVTR_e_Closed;/* Referenced by: '<S925>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeBTRR_e_BatCondPriority, BTRR_VAR_INIT)
    KeBTRR_e_BatCondPriority_D = CeBTRR_e_BatCond_NoPriority;/* Referenced by: '<S833>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(TeBTRR_e_BatCondPriority, BTRR_VAR_INIT)
    KeBTRR_e_BatCondPriority_NF_Dial = CeBTRR_e_BatCond_NoPriority;/* Referenced by: '<S1082>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeRCVR_e_Valve_Stuck_Status, BTRR_VAR_INIT)
    KeBTRR_e_BattCPVStuckSt_D = CeRCVR_e_Closed;/* Referenced by: '<S916>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeBPCR_e_LOC_BatClntHtr, BTRR_VAR_INIT)
    KeBTRR_e_BattHtr_LOC_D = CeBPCR_e_LOC_BatClntHtr_False;/* Referenced by: '<S992>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeTHMR_e_CabHeatThrmlState, BTRR_VAR_INIT)
    KeBTRR_e_CabHeatThermalState_D = CeTHMR_e_CabinActivePassiveHeating;/* Referenced by: '<S1012>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeOBCR_e_ChargingSystemSts, BTRR_VAR_INIT)
    KeBTRR_e_ChargingSystemSts_D = CeOBCR_e_NotCharging;/* Referenced by: '<S923>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeTHMR_e_HTCL_Heat_Distrib, BTRR_VAR_INIT)
    KeBTRR_e_HTCL_Heat_Distrib_D = CeTHMR_e_NoHeating;/* Referenced by: '<S1003>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeHVTR_e_HVOverVoltFailure, BTRR_VAR_INIT)
    KeBTRR_e_HVOverVoltFailure_D = CeHVTR_e_HVOverVoltPass;/* Referenced by: '<S929>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeBTRR_e_BatCritCondSt, BTRR_VAR_INIT)
    KeBTRR_e_HV_BatTempCrit_CondState_New_D = CeBTRR_e_BatNotCrit;/* Referenced by: '<S829>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(TeBTRR_e_BatCritCondSt, BTRR_VAR_INIT)
    KeBTRR_e_HV_BatTempCrit_CondState_New_NF_Dial = CeBTRR_e_BatNotCrit;/* Referenced by: '<S1083>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeBTRR_e_BatTmpRng, BTRR_VAR_INIT) KeBTRR_e_HV_BatTmpRng_D
    = CeBTRR_e_BatTmpDfltRng;          /* Referenced by: '<S863>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_5

static volatile CONST(TeBTRR_e_BatTmpRng, BTRR_VAR_INIT)
    KeBTRR_e_HV_BatTmpRng_NF_Dial = CeBTRR_e_BatTmpDfltRng;/* Referenced by: '<S1084>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeBPCR_e_LOC_BCP, BTRR_VAR_INIT) KeBTRR_e_LTAP_LOC_D =
    CeBPCR_e_LOC_BCP_False;            /* Referenced by: '<S988>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TePMPR_e_FTSNA, BTRR_VAR_INIT) KeBTRR_e_LTActPumpDryRun_D =
    CePMPR_e_FTSNA_False;              /* Referenced by: '<S1023>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeRCVR_e_Valve_Stuck_Status, BTRR_VAR_INIT)
    KeBTRR_e_LTCPVStuckSt_D = CeRCVR_e_Closed;/* Referenced by: '<S917>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeTRIR_e_SDS_ActualState, BTRR_VAR_INIT)
    KeBTRR_e_SDS_ActSt_Dial = CeTRIR_e_SDS_OFF;/* Referenced by: '<S955>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeSSDR_e_KeySts, BTRR_VAR_INIT) KeBTRR_e_SSDR_KeySts_D =
    CeSSDR_e_KeyOff;                   /* Referenced by: '<S1001>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(TeTHMR_e_VehThermSt, BTRR_VAR_INIT) KeBTRR_e_VehThermSt_D =
    CeTHMR_e_TempAllowBattCoolNHeatOV; /* Referenced by: '<S1006>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_p_HghRfrgtPres_D = 0.0F;/* Referenced by: '<S1032>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_p_PressSnsrThHi_HybAltMd =
    2000.0F;                           /* Referenced by: '<S497>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_p_PressSnsrThLo_HybAltMd =
    2000.0F;                           /* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_t_BPCMdebounce = 6.0F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_t_HVBR_OvrChckPmp_TmpTim =
    1U;                                /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(uint16, BTRR_VAR_INIT) KeBTRR_t_HVBR_OvrTotMasq_Tim = 2U;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_t_INITValuesWaittime = 5.0F;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_t_Msg7delay = 1.0F;/* Referenced by: '<S717>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KeBTRR_t_Msg7delay_dT = 0.1F;/* Referenced by: '<S718>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_P_BattCoolPwrLookup[11] =
{
    0.0F, 520.0F, 1040.0F, 1560.0F, 2080.0F, 2600.0F, 3120.0F, 3640.0F, 4160.0F,
    4680.0F, 5200.0F
} ;                                    /* Referenced by: '<S512>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_P_BattCoolPwrNeed_PerWup[8]
    =
{
    0.0F, 1500.0F, 3000.0F, 3500.0F, 4500.0F, 6000.0F, 7500.0F, 9000.0F
} ;                                    /* Referenced by: '<S513>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_P_BattHeatPwrNeed_LookUp[8]
    =
{
    0.0F, 1500.0F, 3000.0F, 3500.0F, 4500.0F, 6000.0F, 7500.0F, 9000.0F
} ;                                    /* Referenced by: '<S662>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_P_BattHeatPwrNeed_PerWup[8]
    =
{
    0.0F, 1500.0F, 3000.0F, 3500.0F, 4500.0F, 6000.0F, 7500.0F, 9000.0F
} ;                                    /* Referenced by: '<S663>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_P_BattHeatPwr_OVorEPD[9] =
{
    3800.0F, 3800.0F, 3700.0F, 3500.0F, 3000.0F, 2500.0F, 300.0F, 100.0F, 0.0F
} ;                                    /* Referenced by: '<S664>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_P_EVA_BattCoolPwrLookup[11]
    =
{
    2080.0F, 2080.0F, 2080.0F, 2080.0F, 2080.0F, 2600.0F, 3120.0F, 3640.0F,
    4160.0F, 4680.0F, 5200.0F
} ;                                    /* Referenced by: '<S514>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KtBTRR_P_EVA_BattHeatPwrNeed_LookUp[8] =
{
    3000.0F, 3000.0F, 5250.0F, 5250.0F, 5250.0F, 5250.0F, 5250.0F, 5250.0F
} ;                                    /* Referenced by: '<S665>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_T_CellTempCoolReq_Hys[2] =
{
    2.0F, 10.0F
} ;                                    /* Referenced by: '<S557>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_T_CellTempHeatReq_Hys[2] =
{
    2.0F, 10.0F
} ;                                    /* Referenced by: '<S537>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_T_CellTempPsvCool_Hys[2] =
{
    2.0F, 10.0F
} ;                                    /* Referenced by: '<S558>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_T_CellTempPsvHeatReq_Hys[2]
    =
{
    2.0F, 10.0F
} ;                                    /* Referenced by: '<S538>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_dV_LT_ActPmpFlw[7] =
{
    0.0F, 1025.0F, 1400.0F, 2050.0F, 4200.0F, 6500.0F, 8000.0F
} ;                                    /* Referenced by: '<S738>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KtBTRR_dV_LT_ActPmpFlw_ActvPassiveHeat[5] =
{
    0.166F, 0.19F, 0.21F, 0.24F, 0.3F
} ;                                    /* Referenced by: '<S772>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KtBTRR_dV_LT_ActPmpFlw_BalcingOnly[7] =
{
    0.0F, 1025.0F, 1400.0F, 2050.0F, 4200.0F, 6500.0F, 8000.0F
} ;                                    /* Referenced by: '<S773>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_dV_LT_ActPmpFlw_Passive[7] =
{
    0.0F, 0.1F, 0.15F, 0.15F, 0.2F, 0.2F, 0.21F
} ;                                    /* Referenced by: '<S739>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_dV_LT_ActPmpFlw_PerWp[7] =
{
    0.0F, 1025.0F, 1400.0F, 2050.0F, 4200.0F, 6500.0F, 8000.0F
} ;                                    /* Referenced by: '<S774>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KtBTRR_dV_LT_ClntTmpIn_ActPmpFlw[7]
    =
{
    0.2F, 0.18F, 0.0F, 0.15F, 0.17F, 0.18F, 0.2F
} ;                                    /* Referenced by: '<S741>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_K_CellTempHeatReq_Hys[2] =
{
    0.0F, 1.0F
} ;                                    /* Referenced by: '<S537>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_P_BattCoolPwrLookup[11] =
{
    0.0001F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S512>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_P_BattCoolPwrNeed_PerWup[8]
    =
{
    0.001F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F
} ;                                    /* Referenced by: '<S513>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_P_BattHeatPwrNeed_LookUp[8]
    =
{
    0.001F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F
} ;                                    /* Referenced by: '<S662>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_P_BattHeatPwrNeed_PerWup[8]
    =
{
    0.001F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F
} ;                                    /* Referenced by: '<S663>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_P_BattHeatPwr_OVorEPD[9] =
{
    10.0F, 20.0F, 30.0F, 40.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S664>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_P_EVA_BattCoolPwrLookup[11]
    =
{
    0.001F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S514>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KxBTRR_P_EVA_BattHeatPwrNeed_LookUp[8] =
{
    0.001F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F
} ;                                    /* Referenced by: '<S665>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_T_CellTempCoolReq_Hys[2] =
{
    0.0F, 1.0F
} ;                                    /* Referenced by: '<S557>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_T_CellTempPsvCool_Hys[2] =
{
    0.0F, 1.0F
} ;                                    /* Referenced by: '<S558>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_T_CellTempPsvHeatReq_Hys[2]
    =
{
    0.0F, 1.0F
} ;                                    /* Referenced by: '<S538>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_dV_LT_ActPmpFlw[7] =
{
    0.001F, 0.8F, 1.5F, 2.2F, 4.0F, 5.5F, 7.0F
} ;                                    /* Referenced by: '<S738>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KxBTRR_dV_LT_ActPmpFlw_ActvPassiveHeat[5] =
{
    0.0F, 4.0F, 7.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S772>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT)
    KxBTRR_dV_LT_ActPmpFlw_BalcingOnly[7] =
{
    0.001F, 0.8F, 1.5F, 2.2F, 4.0F, 5.5F, 7.0F
} ;                                    /* Referenced by: '<S773>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_dV_LT_ActPmpFlw_Passive[7] =
{
    25.0F, 30.0F, 32.0F, 36.0F, 38.0F, 40.0F, 42.0F
} ;                                    /* Referenced by: '<S739>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_dV_LT_ActPmpFlw_PerWp[7] =
{
    0.001F, 0.8F, 1.5F, 2.2F, 4.0F, 5.5F, 7.0F
} ;                                    /* Referenced by: '<S774>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static volatile CONST(float32, BTRR_VAR_INIT) KxBTRR_dV_LT_ClntTmpIn_ActPmpFlw[7]
    =
{
    -10.0F, -5.0F, 0.0F, 10.0F, 30.0F, 50.0F, 55.0F
} ;                                    /* Referenced by: '<S741>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_BTRR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_K_ehThermSt_OvAct;/* '<S163>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_BatCoolPwr_PerWupNeed;/* '<S513>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_BatHeatPwr_NeedLimtd_BD;/* '<S666>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_BatHeatPwr_NeedRaw;/* '<S157>/Switch2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_BatHeatPwr_NeedRaw2;/* '<S662>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_BatHeatPwr_PerWupNeed;/* '<S663>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_BattCoolPwrNeed;/* '<S153>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_BattCoolPwrNeedLim_BD;/* '<S515>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_P_EVA_BatHeatPwr_NeedRaw1;/* '<S665>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_APMTemp1;/* '<S1029>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_APMTemp2;/* '<S1030>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_ArbBattClntTmp2In_WL;/* '<S271>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_ArbBattClntTmpIn_BEV;/* '<S193>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_ArbBattClntTmpIn_EVA;/* '<S221>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_ArbBattClntTmpIn_RU;/* '<S248>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_ArbBattClntTmpIn_WL;/* '<S270>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_Arb_BTISBTIS2_Max;/* '<S151>/MinMax' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_Arb_BattClntTmp2In;/* '<S151>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_Arb_BattClntTmpIn;/* '<S151>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_T_BattCabPriority;/* '<S606>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_T_BattCabPriority_ColdHi;/* '<S606>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_T_BattCabPriority_ColdLow;/* '<S630>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_T_BattCabPriority_HotHi;/* '<S606>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_T_BattCabPriority_HotLow;/* '<S628>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_BattDispTmp;/* '<S164>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_BattDisplayTemp_BD;
                                /* '<S149>/SigConvForSigProp_VariantSource_0' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_CellTempMaxUsed_BD;/* '<S38>/Gain' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_CellTempMinUsed_BD;/* '<S39>/Gain' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_CellTempPsvCool_Hys;/* '<S558>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HT_AuxPmpTemp_AD;/* '<S73>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempAvg;/* '<S120>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempAvg_B4D;/* '<S100>/Gain' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempAvg_B4Deb;/* '<S88>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempAvg_INIT;/* '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMax_AD;/* '<S126>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMax_B4D;/* '<S105>/Gain' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMax_B4Deb;/* '<S86>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMax_INIT;/* '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMin_AD;/* '<S132>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMin_B4D;/* '<S95>/Gain' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMin_B4Deb;/* '<S87>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_HV_BatModTempMin_INIT;/* '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_LTActPumpTemp_AD;/* '<S1016>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_LTCLTgt_BattActvPsvHeating_AD;/* '<S998>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_T_LTL_CoolantTemp;/* '<S546>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_LTPsvPumpTemp_AD;/* '<S75>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_MaxBattAllow;/* '<S959>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_MaxBattAllowPsv;/* '<S962>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_MinBattAllow;/* '<S958>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_MinBattAllowPsv;/* '<S960>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_T_SDS_ClntTmpIn;/* '<S951>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BCH_LOC_Flts;/* '<S296>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BHOSFlt;/* '<S296>/Logical8' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeBPCR_e_LIN_BusOff, BTRR_VAR_INIT) VeBTRR_b_BPCM_LIN_LOC;/* '<S978>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BPCM_LIN_LOC_FA;/* '<S978>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BPCM_LOC_Flt;/* '<S310>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BTIS2Flt;/* '<S298>/Logical9' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BTIS2_FltDtct_AD;/* '<S931>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BTISFlt;/* '<S298>/Logical7' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BTIS_FltDtct_AD;/* '<S931>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BTOS2Flt;/* '<S298>/Logical10' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BTOS2_FltDtct_AD;/* '<S931>/Switch2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BTOSFlt;/* '<S298>/Logical8' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatCPV_StuckOpenOrSNA;/* '<S300>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatClntTmpIn_StopHtReq;/* '<S518>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatCritCond_ToState;/* '<S582>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatMargCond_ToState;/* '<S583>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatOofR_Recover;/* '<S603>/Logical8' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatTmpCold_Rng;/* '<S604>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatTmpCrit_CondB4D_New;/* '<S569>/Comparison4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatTmpHot_Rng;/* '<S602>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatTmpHys_HotRng;/* '<S601>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatTmpNormal_Rng;/* '<S605>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BatTmpOut_OfRng;/* '<S603>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Bat_OofR_NoRecovery;/* '<S603>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCPVOpn_LTCPV_RA;/* '<S155>/Logical7' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCellBalancing_B4D;/* '<S162>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCondFlts;/* '<S432>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCondPlugin_Rq_0;/* '<S158>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCondPlugin_Rq_KeyOff;/* '<S691>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCondPlugin_Rq_OofR;/* '<S670>/Logical11' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCoolFlt_CellMaxErr;/* '<S309>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCoolFlt_CompErr;/* '<S309>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCoolReq_BD;/* '<S155>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCoolReq_CPV_RA_BD;/* '<S155>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCoolRequest_Raw;/* '<S155>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCool_Flts;/* '<S309>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCoolingFlt;/* '<S309>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattCritic_Msg7;/* '<S671>/LogicalOperator16' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattHeatFlt;/* '<S296>/Logical20' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattHeatFlts;/* '<S309>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattHeatReq_BD;/* '<S518>/Switch2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattHeatRequest;/* '<S518>/Logical14' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattHeaterFlts;/* '<S296>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattHtrPerf_Flt;/* '<S296>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeBPCR_e_LOC_BatClntHtr, BTRR_VAR_INIT) VeBTRR_b_BattHtr_LOC;/* '<S980>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattHtr_LOC_FA;/* '<S980>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattOvrVltg_AD;/* '<S957>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BattTempNot_Optml_B4D;/* '<S150>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Batt_CritOrMarg_B4D;/* '<S573>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BottleSnsr_Flts;/* '<S299>/Logical22' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BtlClntLvlLo_Flt;/* '<S299>/Logical20' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_BtlSnsr_SG_Flt;/* '<S299>/Logical21' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_CPVFailures;/* '<S300>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_CellMaxTh_HybAltMd;/* '<S431>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_CellTempMin_HeatReq;/* '<S518>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_CelltempMax_HtReq;/* '<S518>/Logical' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ChillerFlts;/* '<S301>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ChillerPerfFlt;/* '<S301>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ChlrVlvOC_Flt;/* '<S301>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ChlrVlvSB_Flt;/* '<S301>/Logical8' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ChlrVlvSG_Flt;/* '<S301>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EAC_Flts;/* '<S303>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EAC_LOC;/* '<S303>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EAC_PerfFlt;/* '<S303>/Logical21' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ECHTIS_PinDiag;/* '<S304>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ECH_InFlt;/* '<S304>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ECH_OutFlt;/* '<S304>/Logical6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ECH_PerfFlt;/* '<S304>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_Faults;/* '<S306>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_PerfDiag_FltDtct;/* '<S306>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_PerfDiag_FltDtct_AD;/* '<S932>/Switch2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_PressElctrFlt_FltDtct_AD;/* '<S932>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_PressSens_FltDtct;/* '<S306>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_PressSens_FltDtct_AD;/* '<S932>/Switch4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_TempElctrFlt_FltDtct_AD;/* '<S932>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_TempSens_FltDtct;/* '<S306>/Logical6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EXV_TempSens_FltDtct_AD;/* '<S932>/Switch6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_EnblTHMCINITTimer;/* '<S112>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Enbl_StopHeating;/* '<S518>/Logical18' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HTAPDryRun;/* '<S307>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HTAPDryRunFA;/* '<S307>/Logical6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HTAP_PerfFlt;/* '<S307>/Logical20' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HTAP_TmpFlt;/* '<S304>/Logical7' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HTCV_PinFlts;/* '<S308>/Logical20' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HTCV_StckFlt;/* '<S308>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HT_AuxPmpTemp_FA_AD;/* '<S73>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_ChkSensTemp;/* '<S29>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_ChkSensTemp_0;/* '<S18>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_ChkSensTemp_1;/* '<S18>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_ChkSensTemp_B4Ltch;/* '<S18>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_OvrTmpRng;/* '<S17>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_OvrdReq_B4D;/* '<S5>/Merge' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_TotlMsqTim;/* '<S18>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HVBR_UsgEnb;/* '<S961>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HV_BatModAvg_TmpV;/* '<S119>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HV_BatModMax_TmpV;/* '<S125>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HV_BatModMin_TmpV;/* '<S131>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HV_BatRdy_True_AD;/* '<S956>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_HoodAjar_AD;/* '<S920>/Switch21' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LIN1_BusOff;/* '<S307>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LIN2_BusOff;/* '<S307>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LINBusOff_Flt;/* '<S310>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LOC_ECH;/* '<S304>/Logical20' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LOC_Flts;/* '<S310>/Logical22' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LOC_HTAP;/* '<S307>/Logical5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffAftDbnc_BEV;/* '<S175>/Logical14' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffAftDbnc_EVA;/* '<S176>/Logical14' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffAftDbnc_RU;/* '<S177>/Logical14' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffAftDbnc_WL;/* '<S178>/Logical18' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffAftDbnc_WL_BTIS2;/* '<S178>/Logical39' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffDly_EVA;/* '<S202>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffDly_RU;/* '<S242>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffDly_WL;/* '<S260>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffDly_WL_BTIS2;/* '<S262>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffLtch_BEV;/* '<S200>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffLtch_EVA;/* '<S237>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffLtch_RU;/* '<S256>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffLtch_WL;/* '<S288>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOffLtch_WL_BTIS2;/* '<S290>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOff_AD;/* '<S1019>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOff_BEV;/* '<S175>/Logical9' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOff_EVA;/* '<S176>/Logical26' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOff_RU;/* '<S177>/Logical26' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOff_WL;/* '<S178>/Logical9' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnActvCool_AftrDbnc_RU;/* '<S243>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnActvCool_RU;/* '<S177>/Logical9' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftDbnc_BEV;/* '<S175>/Logical8' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDbnc_BothClntInFlt;/* '<S263>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDbnc_BothClntInFlt_BTIS2;/* '<S259>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDbnc_WL;/* '<S258>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDbnc_WL_BTIS2;/* '<S261>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDly_BothClntInFlt;/* '<S178>/Logical47' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDly_BothClntInFlt_BTIS2;/* '<S178>/Logical14' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDly_WL;/* '<S178>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnAftrDly_WL_BTIS2;/* '<S178>/Logical30' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnDlyActvCool_RU;/* '<S177>/Logical20' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnDlyNoActvCool_RU;/* '<S177>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchActvCool_RU;/* '<S257>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchNoActvCool_RU;/* '<S255>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSOff;/* '<S238>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSOffDbnc;/* '<S176>/Logical18' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSOffDly;/* '<S203>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSOn;/* '<S236>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSOnDly;/* '<S201>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSOn_AftDbnc;/* '<S176>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSSNADly_ActvCool;/* '<S204>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSSNADly_NoActvCool;/* '<S205>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSSNA_ActvCool;/* '<S239>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSSNA_ActvCoolAftDbnc;/* '<S176>/Logical30' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCool;/* '<S240>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCoolAftDbnc;/* '<S176>/Logical39' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtch_BEV;/* '<S199>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtch_BothClntInFlt;/* '<S291>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtch_BothClntInFlt_BTIS2;/* '<S287>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtch_WL;/* '<S286>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnLtch_WL_BTIS2;/* '<S289>/OR1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnNoActvCool_AftrDbnc_RU;/* '<S241>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnNoActvCool_RU;/* '<S177>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnSDSOff;/* '<S176>/Logical9' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnSDSOn;/* '<S176>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnSDSSNA_ActvCool;/* '<S176>/Logical36' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOnSDSSNA_NoActvCool;/* '<S176>/Logical47' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOn_BEV;/* '<S175>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOn_BothClntInFlt;/* '<S178>/Logical51' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOn_BothClntInFlt_BTIS2;/* '<S178>/Logical26' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOn_WL;/* '<S178>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAPOn_WL_BTIS2;/* '<S178>/Logical36' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAP_DryRun_Flts;/* '<S311>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAP_Flts;/* '<S311>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeBPCR_e_LOC_BCP, BTRR_VAR_INIT) VeBTRR_b_LTAP_LOC;/* '<S979>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAP_LOC_FA;/* '<S979>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAP_LOC_Flts;/* '<S311>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAP_PerfFlt;/* '<S311>/Logical20' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTAP_Rqt_LoLvDiag_AD;/* '<S930>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LTActPumpDryRun_FA_AD;/* '<S1018>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LT_ActvPmpReq;/* '<S162>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LT_CPV_StuckClsdOrSNA;/* '<S300>/Logical6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_LatchRST4THMCinit;/* '<S109>/AND' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Msg7Request_BD;/* '<S720>/AND' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_NotCritical_ToState;/* '<S593>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_OV1_Msg7;/* '<S671>/LogicalOperator3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_OV2_Msg7;/* '<S671>/LogicalOperator10' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_OutOfRange_ToState;/* '<S594>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PerWup_BatToCond_BD;/* '<S729>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PlugdIn_Or_Chrg_BD;/* '<S158>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PowerUp4THMCinit;/* '<S110>/AND' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PresElectrFlt;/* '<S306>/Logical9' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PressSnsrHi_Flt;/* '<S313>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PressSnsrLo_Flt;/* '<S313>/Logical9' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PressSnsrTh_HybAltMd;/* '<S314>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PressSnsr_Flts;/* '<S313>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PressSnsr_Perf_Flt;/* '<S313>/Logical22' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_PropSysActv;/* '<S74>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Psv_BattCoolReq_BD;/* '<S155>/Logical6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Psv_BattHeatReq_BD;/* '<S518>/Switch3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Psv_BattHeatReq_Raw;/* '<S518>/Logical19' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_RS_N_Or_NrmlPerWp_AD;/* '<S1013>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_RadFan_FltDtct;/* '<S314>/Logical8' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_RadFan_Flts;/* '<S314>/Logical1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Rly_Cmnd_AD;
                                /* '<S995>/SigConvForSigProp_VariantSource_0' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_Switch2ActValue;/* '<S113>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_TempElectrFlt;/* '<S306>/Logical10' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_TempSnsrRat_Faulty;/* '<S519>/Logical2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ThrmlRlyFlt;/* '<S310>/Logical4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_VhclPlgdIn_B4D;/* '<S672>/Logical3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_ePTBusOff_Flt;/* '<S310>/Logical7' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(boolean, BTRR_VAR_INIT) VeBTRR_b_isCharging_B4D;/* '<S158>/Comparison2' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_AbsMaxTmpDlt;/* '<S149>/Abs1' */

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_AbsMinTmpDlt;/* '<S149>/Abs' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellOverTempPassive;/* '<S793>/Sum1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellOverTempPassive_BD;/* '<S796>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellOverTempRaw;/* '<S793>/Sum3' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellOverTemp_BD;/* '<S795>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellTempDeltaRaw;/* '<S6>/Sum1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellTempDelta_BD;/* '<S37>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellUnderTempPassive;/* '<S793>/Sum4' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellUnderTempPassive_BD;/* '<S797>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellUnderTempRaw;/* '<S793>/Sum2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dT_CellUnderTemp_BD;/* '<S794>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dV_ClntTmp_PmpFlow;/* '<S741>/Vector' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dV_LT_ActPmpFlw_B4D;/* '<S729>/Switch2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dV_LT_ActPmpFlw_Raw;/* '<S727>/Switch2' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_dV_LT_ActPmpFlw_raw_B4;/* '<S766>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeHVTR_e_HV_BatCntctrStat, BTRR_VAR_INIT) VeBTRR_e_BatCntctrStat;/* '<S919>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeBTRR_e_BatCondPriority, BTRR_VAR_INIT) VeBTRR_e_BatCondPriority_B4D;/* '<S570>/Switch6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeRCVR_e_Valve_Stuck_Status, BTRR_VAR_INIT) VeBTRR_e_BattCPV_StuckSts;/* '<S903>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeTHMR_e_CabHeatThrmlState, BTRR_VAR_INIT)
    VeBTRR_e_CabHeatThermalState;      /* '<S999>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeOBCR_e_ChargingSystemSts, BTRR_VAR_INIT) VeBTRR_e_ChargingSystemSts;/* '<S918>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeTHMR_e_HTCL_Heat_Distrib, BTRR_VAR_INIT) VeBTRR_e_HTCL_Heat_Distrib;/* '<S994>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeHVTR_e_HVOverVoltFailure, BTRR_VAR_INIT)
    VeBTRR_e_HVOverVoltFailure_AD;     /* '<S921>/Switch5' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeBTRR_e_BatCritCondSt, BTRR_VAR_INIT)
    VeBTRR_e_HV_BatTempCrit_CondState_New_BD;/* '<S591>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeBTRR_e_BatTmpRng, BTRR_VAR_INIT) VeBTRR_e_HV_BatTmpRng_B4D;/* '<S607>/Switch6' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeHPMR_e_HybSysState, BTRR_VAR_INIT) VeBTRR_e_HybSysState;/* '<S997>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TePMPR_e_FTSNA, BTRR_VAR_INIT) VeBTRR_e_LTActPumpDryRun_AD;/* '<S1017>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeRCVR_e_Valve_Stuck_Status, BTRR_VAR_INIT) VeBTRR_e_LTCPV_StuckSts;/* '<S903>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeTRIR_e_SDS_ActualState, BTRR_VAR_INIT) VeBTRR_e_SDS_ActSt;/* '<S951>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeSSDR_e_KeySts, BTRR_VAR_INIT) VeBTRR_e_SSDR_KeySts;/* '<S993>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(TeTHMR_e_VehThermSt, BTRR_VAR_INIT) VeBTRR_e_VehThermSt_AD;/* '<S996>/Switch' */

#endif

#if Rte_SysCon_Variant_BTRR_2

static VAR(float32, BTRR_VAR_INIT) VeBTRR_p_HghRfrgtPres;/* '<S1028>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTRR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTRR
#include "MemMap.h"

VAR(B_BTRR_ac_T, BTRR_VAR_INIT) BTRR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTRR
#include "MemMap.h"

VAR(DW_BTRR_ac_T, BTRR_VAR_INIT) BTRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTRR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_BTRR_2

FUNC(void, BTRR_CODE) BTRR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_BTRR_2

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_AND_i3;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_UnitDelay_hf;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_Switch1_c4;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_Switch1_ntn;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_Switch1_av;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint16 rtb_Switch1_hs;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_OR1_lt;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_OR1_j;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* Outputs for Function Call SubSystem: '<Root>/BTRR_FastTEF' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf_Value
        (&BTRR_ac_DW.StatusByte_MtrElect_CoolPmpATem);

    /* End of Outputs for SubSystem: '<Root>/BTRR_FastTEF' */

    /* Inport: '<Root>/VeTRIR_T_HV_BatClntTmp_In' */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmp_In_Value(&tmpRead_6);

    /* Outputs for Function Call SubSystem: '<Root>/BTRR_FastTEF' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Constant: '<S81>/Calib' */
    VeBTRR_T_HV_BatModTempMin_INIT = KeBTRR_T_HV_BatMinModTmp_B4thmcINIT;

    /* Outputs for Atomic SubSystem: '<S78>/EdgeRising' */
    /* Logic: '<S110>/AND' incorporates:
     *  Logic: '<S110>/OR1'
     *  UnitDelay: '<S110>/UnitDelay'
     */
    VeBTRR_b_PowerUp4THMCinit = !BTRR_ac_DW.UnitDelay_DSTATE_ks;

    /* Update for UnitDelay: '<S110>/UnitDelay' incorporates:
     *  Constant: '<S78>/TRUEConstant'
     */
    BTRR_ac_DW.UnitDelay_DSTATE_ks = true;

    /* End of Outputs for SubSystem: '<S78>/EdgeRising' */

    /* UnitDelay: '<S78>/UnitDelay' */
    rtb_UnitDelay_hf = BTRR_ac_DW.UnitDelay_DSTATE_bg;

    /* Outputs for Atomic SubSystem: '<S78>/EdgeFalling' */
    /* Logic: '<S109>/AND' incorporates:
     *  Logic: '<S109>/OR1'
     *  UnitDelay: '<S109>/UnitDelay'
     */
    VeBTRR_b_LatchRST4THMCinit = ((!rtb_UnitDelay_hf) &&
        (BTRR_ac_DW.UnitDelay_DSTATE_li));

    /* Update for UnitDelay: '<S109>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_li = rtb_UnitDelay_hf;

    /* End of Outputs for SubSystem: '<S78>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S78>/SignalLatchOnWithReset1' */
    /* Logic: '<S112>/OR1' incorporates:
     *  Logic: '<S112>/NOT'
     *  Logic: '<S112>/OR'
     *  UnitDelay: '<S112>/UnitDelay'
     */
    VeBTRR_b_EnblTHMCINITTimer = ((VeBTRR_b_PowerUp4THMCinit) ||
        ((!VeBTRR_b_LatchRST4THMCinit) && (BTRR_ac_DW.UnitDelay_DSTATE_kt)));

    /* Update for UnitDelay: '<S112>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_kt = VeBTRR_b_EnblTHMCINITTimer;

    /* End of Outputs for SubSystem: '<S78>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S78>/EdgeRising1' */
    /* Logic: '<S111>/OR1' incorporates:
     *  UnitDelay: '<S111>/UnitDelay'
     */
    rtb_UnitDelay_hf = !BTRR_ac_DW.UnitDelay_DSTATE_dg1;

    /* Update for UnitDelay: '<S111>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_dg1 = VeBTRR_b_EnblTHMCINITTimer;

    /* Outputs for Atomic SubSystem: '<S78>/TimerRetriggerResetEnabled' */
    /* Switch: '<S113>/Switch1' incorporates:
     *  Logic: '<S111>/AND'
     *  Switch: '<S113>/Switch2'
     */
    if ((VeBTRR_b_EnblTHMCINITTimer) && rtb_UnitDelay_hf)
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S82>/Calib'
         */
        rtb_Switch1_c4 = KeBTRR_t_INITValuesWaittime;
    }
    else if (VeBTRR_b_EnblTHMCINITTimer)
    {
        /* Switch: '<S113>/Switch2' incorporates:
         *  Constant: '<S113>/ConstantValue4'
         *  Constant: '<S78>/ConstantValue4'
         *  MinMax: '<S113>/Maximum'
         *  Sum: '<S113>/Subtraction'
         *  Switch: '<S113>/Switch1'
         *  UnitDelay: '<S113>/UnitDelay'
         */
        rtb_Switch1_c4 = fmaxf(BTRR_ac_DW.UnitDelay_DSTATE_ej - 0.1F, 0.0F);
    }
    else
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Switch: '<S113>/Switch2'
         *  UnitDelay: '<S113>/UnitDelay'
         */
        rtb_Switch1_c4 = BTRR_ac_DW.UnitDelay_DSTATE_ej;
    }

    /* End of Switch: '<S113>/Switch1' */
    /* End of Outputs for SubSystem: '<S78>/TimerRetriggerResetEnabled' */
    /* End of Outputs for SubSystem: '<S78>/EdgeRising1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/BTRR_FastTEF' */

    /* Inport: '<Root>/VeBPCR_T_HV_BatModTempMin' */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMin_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/BTRR_FastTEF' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S78>/TimerRetriggerResetEnabled' */
    /* RelationalOperator: '<S113>/GreaterThan1' incorporates:
     *  Constant: '<S113>/ConstantValue2'
     */
    VeBTRR_b_Switch2ActValue = (rtb_Switch1_c4 > 0.0F);

    /* Update for UnitDelay: '<S113>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_ej = rtb_Switch1_c4;

    /* End of Outputs for SubSystem: '<S78>/TimerRetriggerResetEnabled' */

    /* Switch: '<S87>/Switch1' */
    if (VeBTRR_b_Switch2ActValue)
    {
        /* Switch: '<S87>/Switch1' */
        VeBTRR_T_HV_BatModTempMin_B4Deb = VeBTRR_T_HV_BatModTempMin_INIT;
    }
    else
    {
        /* Switch: '<S87>/Switch1' */
        VeBTRR_T_HV_BatModTempMin_B4Deb = tmpRead;
    }

    /* End of Switch: '<S87>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S83>/CountDown_ResetEnabled' */
    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S91>/ConstantValue'
     *  Logic: '<S83>/Logical2'
     *  RelationalOperator: '<S83>/Comparison4'
     *  RelationalOperator: '<S91>/GreaterThan'
     *  Switch: '<S91>/Switch2'
     *  UnitDelay: '<S83>/UnitDelay'
     *  UnitDelay: '<S91>/UnitDelay'
     */
    if (VeBTRR_T_HV_BatModTempMin_B4Deb != BTRR_ac_DW.UnitDelay_DSTATE_g)
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S83>/ConstantValue'
         *  Constant: '<S90>/Calib'
         *  Product: '<S83>/Product'
         */
        rtb_Switch1_c4 = KeBTRR_t_BPCMdebounce * 10.0F;
    }
    else if (BTRR_ac_DW.UnitDelay_DSTATE_b > 0.0F)
    {
        /* Switch: '<S91>/Switch2' incorporates:
         *  Constant: '<S91>/ConstantValue1'
         *  Sum: '<S91>/Subtraction'
         *  Switch: '<S91>/Switch1'
         *  UnitDelay: '<S91>/UnitDelay'
         */
        rtb_Switch1_c4 = BTRR_ac_DW.UnitDelay_DSTATE_b - 1.0F;
    }
    else
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Switch: '<S91>/Switch2'
         *  UnitDelay: '<S91>/UnitDelay'
         */
        rtb_Switch1_c4 = BTRR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S91>/Switch1' */

    /* RelationalOperator: '<S91>/GreaterThan1' incorporates:
     *  Constant: '<S91>/ConstantValue2'
     */
    rtb_UnitDelay_hf = (rtb_Switch1_c4 > 0.0F);

    /* Update for UnitDelay: '<S91>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch1_c4;

    /* End of Outputs for SubSystem: '<S83>/CountDown_ResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S83>/EdgeFalling' */
    /* Logic: '<S92>/AND' incorporates:
     *  Logic: '<S92>/OR1'
     *  UnitDelay: '<S92>/UnitDelay'
     */
    rtb_AND_i3 = ((!rtb_UnitDelay_hf) && (BTRR_ac_DW.UnitDelay_DSTATE_bv));

    /* Update for UnitDelay: '<S92>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_bv = rtb_UnitDelay_hf;

    /* End of Outputs for SubSystem: '<S83>/EdgeFalling' */

    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S89>/Calib'
     */
    tmp = !KeBTRR_b_DisableDebounceRST;

    /* Outputs for Enabled SubSystem: '<S83>/Enabled_Subsystem' incorporates:
     *  EnablePort: '<S93>/Enable'
     */
    /* Logic: '<S83>/Logical1' incorporates:
     *  UnitDelay: '<S83>/UnitDelay2'
     */
    if (rtb_AND_i3 || (tmp && (BTRR_ac_DW.UnitDelay2_DSTATE_o)))
    {
        /* SignalConversion generated from: '<S93>/Out1' incorporates:
         *  Constant: '<S93>/ConstantValue1'
         */
        BTRR_ac_B.OutportBufferForOut1_bp = false;

        /* Gain: '<S95>/Gain' */
        VeBTRR_T_HV_BatModTempMin_B4D = VeBTRR_T_HV_BatModTempMin_B4Deb;
    }

    /* End of Logic: '<S83>/Logical1' */
    /* End of Outputs for SubSystem: '<S83>/Enabled_Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/BTRR_FastTEF' */

    /* Inport: '<Root>/VeBPCR_T_HV_BatModTempAvg' */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempAvg_Value(&rtb_Switch1_ntn);

    /* Outputs for Function Call SubSystem: '<Root>/BTRR_FastTEF' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Constant: '<S79>/Calib' */
    VeBTRR_T_HV_BatModTempAvg_INIT = KeBTRR_T_HV_BatAvgModTmp_B4thmcINIT;

    /* Switch: '<S88>/Switch1' */
    if (VeBTRR_b_Switch2ActValue)
    {
        /* Switch: '<S88>/Switch1' */
        VeBTRR_T_HV_BatModTempAvg_B4Deb = VeBTRR_T_HV_BatModTempAvg_INIT;
    }
    else
    {
        /* Switch: '<S88>/Switch1' */
        VeBTRR_T_HV_BatModTempAvg_B4Deb = rtb_Switch1_ntn;
    }

    /* End of Switch: '<S88>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S84>/CountDown_ResetEnabled' */
    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S96>/ConstantValue'
     *  Logic: '<S84>/Logical2'
     *  RelationalOperator: '<S84>/Comparison4'
     *  RelationalOperator: '<S96>/GreaterThan'
     *  Switch: '<S96>/Switch2'
     *  UnitDelay: '<S84>/UnitDelay'
     *  UnitDelay: '<S96>/UnitDelay'
     */
    if (VeBTRR_T_HV_BatModTempAvg_B4Deb != BTRR_ac_DW.UnitDelay_DSTATE_ci)
    {
        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S84>/ConstantValue'
         *  Constant: '<S90>/Calib'
         *  Product: '<S84>/Product'
         */
        rtb_Switch1_ntn = KeBTRR_t_BPCMdebounce * 10.0F;
    }
    else if (BTRR_ac_DW.UnitDelay_DSTATE_p > 0.0F)
    {
        /* Switch: '<S96>/Switch2' incorporates:
         *  Constant: '<S96>/ConstantValue1'
         *  Sum: '<S96>/Subtraction'
         *  Switch: '<S96>/Switch1'
         *  UnitDelay: '<S96>/UnitDelay'
         */
        rtb_Switch1_ntn = BTRR_ac_DW.UnitDelay_DSTATE_p - 1.0F;
    }
    else
    {
        /* Switch: '<S96>/Switch1' incorporates:
         *  Switch: '<S96>/Switch2'
         *  UnitDelay: '<S96>/UnitDelay'
         */
        rtb_Switch1_ntn = BTRR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S96>/Switch1' */

    /* RelationalOperator: '<S96>/GreaterThan1' incorporates:
     *  Constant: '<S96>/ConstantValue2'
     */
    rtb_UnitDelay_hf = (rtb_Switch1_ntn > 0.0F);

    /* Update for UnitDelay: '<S96>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_ntn;

    /* End of Outputs for SubSystem: '<S84>/CountDown_ResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S84>/EdgeFalling' */
    /* Logic: '<S97>/AND' incorporates:
     *  Logic: '<S97>/OR1'
     *  UnitDelay: '<S97>/UnitDelay'
     */
    rtb_AND_i3 = ((!rtb_UnitDelay_hf) && (BTRR_ac_DW.UnitDelay_DSTATE_md));

    /* Update for UnitDelay: '<S97>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_md = rtb_UnitDelay_hf;

    /* End of Outputs for SubSystem: '<S84>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S84>/Enabled_Subsystem' incorporates:
     *  EnablePort: '<S98>/Enable'
     */
    /* Logic: '<S84>/Logical1' incorporates:
     *  UnitDelay: '<S84>/UnitDelay2'
     */
    if (rtb_AND_i3 || (tmp && (BTRR_ac_DW.UnitDelay2_DSTATE_e)))
    {
        /* SignalConversion generated from: '<S98>/Out1' incorporates:
         *  Constant: '<S98>/ConstantValue1'
         */
        BTRR_ac_B.OutportBufferForOut1_b = false;

        /* Gain: '<S100>/Gain' */
        VeBTRR_T_HV_BatModTempAvg_B4D = VeBTRR_T_HV_BatModTempAvg_B4Deb;
    }

    /* End of Logic: '<S84>/Logical1' */
    /* End of Outputs for SubSystem: '<S84>/Enabled_Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/BTRR_FastTEF' */

    /* Inport: '<Root>/VeBPCR_T_HV_BatModTempMax' */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMax_Value(&rtb_Switch1_av);

    /* Outputs for Function Call SubSystem: '<Root>/BTRR_FastTEF' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Constant: '<S80>/Calib' */
    VeBTRR_T_HV_BatModTempMax_INIT = KeBTRR_T_HV_BatMaxModTmp_B4thmcINIT;

    /* Switch: '<S86>/Switch1' */
    if (VeBTRR_b_Switch2ActValue)
    {
        /* Switch: '<S86>/Switch1' */
        VeBTRR_T_HV_BatModTempMax_B4Deb = VeBTRR_T_HV_BatModTempMax_INIT;
    }
    else
    {
        /* Switch: '<S86>/Switch1' */
        VeBTRR_T_HV_BatModTempMax_B4Deb = rtb_Switch1_av;
    }

    /* End of Switch: '<S86>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S85>/CountDown_ResetEnabled' */
    /* Switch: '<S101>/Switch1' incorporates:
     *  Constant: '<S101>/ConstantValue'
     *  Logic: '<S85>/Logical2'
     *  RelationalOperator: '<S101>/GreaterThan'
     *  RelationalOperator: '<S85>/Comparison4'
     *  Switch: '<S101>/Switch2'
     *  UnitDelay: '<S101>/UnitDelay'
     *  UnitDelay: '<S85>/UnitDelay'
     */
    if (VeBTRR_T_HV_BatModTempMax_B4Deb != BTRR_ac_DW.UnitDelay_DSTATE_l)
    {
        /* Switch: '<S101>/Switch1' incorporates:
         *  Constant: '<S85>/ConstantValue'
         *  Constant: '<S90>/Calib'
         *  Product: '<S85>/Product'
         */
        rtb_Switch1_av = KeBTRR_t_BPCMdebounce * 10.0F;
    }
    else if (BTRR_ac_DW.UnitDelay_DSTATE_gi > 0.0F)
    {
        /* Switch: '<S101>/Switch2' incorporates:
         *  Constant: '<S101>/ConstantValue1'
         *  Sum: '<S101>/Subtraction'
         *  Switch: '<S101>/Switch1'
         *  UnitDelay: '<S101>/UnitDelay'
         */
        rtb_Switch1_av = BTRR_ac_DW.UnitDelay_DSTATE_gi - 1.0F;
    }
    else
    {
        /* Switch: '<S101>/Switch1' incorporates:
         *  Switch: '<S101>/Switch2'
         *  UnitDelay: '<S101>/UnitDelay'
         */
        rtb_Switch1_av = BTRR_ac_DW.UnitDelay_DSTATE_gi;
    }

    /* End of Switch: '<S101>/Switch1' */

    /* RelationalOperator: '<S101>/GreaterThan1' incorporates:
     *  Constant: '<S101>/ConstantValue2'
     */
    rtb_UnitDelay_hf = (rtb_Switch1_av > 0.0F);

    /* Update for UnitDelay: '<S101>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_gi = rtb_Switch1_av;

    /* End of Outputs for SubSystem: '<S85>/CountDown_ResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S85>/EdgeFalling' */
    /* Logic: '<S102>/AND' incorporates:
     *  Logic: '<S102>/OR1'
     *  UnitDelay: '<S102>/UnitDelay'
     */
    rtb_AND_i3 = ((!rtb_UnitDelay_hf) && (BTRR_ac_DW.UnitDelay_DSTATE_da));

    /* Update for UnitDelay: '<S102>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_da = rtb_UnitDelay_hf;

    /* End of Outputs for SubSystem: '<S85>/EdgeFalling' */

    /* Outputs for Enabled SubSystem: '<S85>/Enabled_Subsystem' incorporates:
     *  EnablePort: '<S103>/Enable'
     */
    /* Logic: '<S85>/Logical1' incorporates:
     *  UnitDelay: '<S85>/UnitDelay2'
     */
    if (rtb_AND_i3 || (tmp && (BTRR_ac_DW.UnitDelay2_DSTATE_i)))
    {
        /* SignalConversion generated from: '<S103>/Out1' incorporates:
         *  Constant: '<S103>/ConstantValue1'
         */
        BTRR_ac_B.OutportBufferForOut1 = false;

        /* Gain: '<S105>/Gain' */
        VeBTRR_T_HV_BatModTempMax_B4D = VeBTRR_T_HV_BatModTempMax_B4Deb;
    }

    /* End of Logic: '<S85>/Logical1' */
    /* End of Outputs for SubSystem: '<S85>/Enabled_Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/BTRR_FastTEF' */

    /* Inport: '<Root>/VePMIR_T_LTPsvPumpTemp' */
    (void)Rte_Read_VePMIR_T_LTPsvPumpTemp_Value(&tmpRead_5);

    /* Inport: '<Root>/VePMIR_b_HTAuxPumpTemp_FA' */
    (void)Rte_Read_VePMIR_b_HTAuxPumpTemp_FA_Value(&rtb_OR1_j);

    /* Inport: '<Root>/VePMIR_T_HTAuxPumpTemp' */
    (void)Rte_Read_VePMIR_T_HTAuxPumpTemp_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_OR1_lt);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMinFA_Value(&tmpRead_2);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMaxFA_Value(&tmpRead_1);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempAvgFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempAvgFA_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/BTRR_FastTEF' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S124>/Calib'
     */
    if (KeBTRR_b_HV_BatModAvg_Tmp_SelDial)
    {
        /* Switch: '<S120>/Switch' incorporates:
         *  Constant: '<S123>/Calib'
         */
        VeBTRR_T_HV_BatModTempAvg = KeBTRR_T_HV_BatModAvg_Tmp_Dial;
    }
    else
    {
        /* Switch: '<S120>/Switch' */
        VeBTRR_T_HV_BatModTempAvg = VeBTRR_T_HV_BatModTempAvg_B4D;
    }

    /* End of Switch: '<S120>/Switch' */

    /* Switch: '<S119>/Switch' incorporates:
     *  Constant: '<S122>/Calib'
     */
    if (KeBTRR_b_HV_BatModAvg_TmpV_SelDial)
    {
        /* Switch: '<S119>/Switch' incorporates:
         *  Constant: '<S121>/Calib'
         */
        VeBTRR_b_HV_BatModAvg_TmpV = KeBTRR_b_HV_BatModAvg_TmpV_Dial;
    }
    else
    {
        /* Switch: '<S119>/Switch' */
        VeBTRR_b_HV_BatModAvg_TmpV = tmpRead_0;
    }

    /* End of Switch: '<S119>/Switch' */

    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S130>/Calib'
     */
    if (KeBTRR_b_HV_BatModMax_Tmp_SelDial)
    {
        /* Switch: '<S126>/Switch' incorporates:
         *  Constant: '<S129>/Calib'
         */
        VeBTRR_T_HV_BatModTempMax_AD = KeBTRR_T_HV_BatModMax_Tmp_Dial;
    }
    else
    {
        /* Switch: '<S126>/Switch' */
        VeBTRR_T_HV_BatModTempMax_AD = VeBTRR_T_HV_BatModTempMax_B4D;
    }

    /* End of Switch: '<S126>/Switch' */

    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     */
    if (KeBTRR_b_HV_BatModMax_TmpV_SelDial)
    {
        /* Switch: '<S125>/Switch' incorporates:
         *  Constant: '<S127>/Calib'
         */
        VeBTRR_b_HV_BatModMax_TmpV = KeBTRR_b_HV_BatModMax_TmpV_Dial;
    }
    else
    {
        /* Switch: '<S125>/Switch' */
        VeBTRR_b_HV_BatModMax_TmpV = tmpRead_1;
    }

    /* End of Switch: '<S125>/Switch' */

    /* Switch: '<S132>/Switch' incorporates:
     *  Constant: '<S136>/Calib'
     */
    if (KeBTRR_b_HV_BatModMin_Tmp_SelDial)
    {
        /* Switch: '<S132>/Switch' incorporates:
         *  Constant: '<S135>/Calib'
         */
        VeBTRR_T_HV_BatModTempMin_AD = KeBTRR_T_HV_BatModMin_Tmp_Dial;
    }
    else
    {
        /* Switch: '<S132>/Switch' */
        VeBTRR_T_HV_BatModTempMin_AD = VeBTRR_T_HV_BatModTempMin_B4D;
    }

    /* End of Switch: '<S132>/Switch' */

    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S134>/Calib'
     */
    if (KeBTRR_b_HV_BatModMin_TmpV_SelDial)
    {
        /* Switch: '<S131>/Switch' incorporates:
         *  Constant: '<S133>/Calib'
         */
        VeBTRR_b_HV_BatModMin_TmpV = KeBTRR_b_HV_BatModMin_TmpV_Dial;
    }
    else
    {
        /* Switch: '<S131>/Switch' */
        VeBTRR_b_HV_BatModMin_TmpV = tmpRead_2;
    }

    /* End of Switch: '<S131>/Switch' */

    /* Switch: '<S74>/Switch' incorporates:
     *  Constant: '<S142>/Calib'
     */
    if (KeBTRR_b_HV_PropSysActv_SelDial)
    {
        /* Switch: '<S74>/Switch' incorporates:
         *  Constant: '<S141>/Calib'
         */
        VeBTRR_b_PropSysActv = KeBTRR_b_HV_PropSysActv_Dial;
    }
    else
    {
        /* Switch: '<S74>/Switch' */
        VeBTRR_b_PropSysActv = rtb_OR1_lt;
    }

    /* End of Switch: '<S74>/Switch' */

    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S140>/Calib'
     */
    if (KeBTRR_b_HT_AuxPmpTemp_SD)
    {
        /* Switch: '<S73>/Switch' incorporates:
         *  Constant: '<S137>/Calib'
         */
        VeBTRR_T_HT_AuxPmpTemp_AD = KeBTRR_T_HT_AuxPmpTemp_D;
    }
    else
    {
        /* Switch: '<S73>/Switch' */
        VeBTRR_T_HT_AuxPmpTemp_AD = tmpRead_4;
    }

    /* End of Switch: '<S73>/Switch' */

    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S139>/Calib'
     */
    if (KeBTRR_b_HT_AuxPmpTemp_FA_SD)
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  Constant: '<S138>/Calib'
         */
        VeBTRR_b_HT_AuxPmpTemp_FA_AD = KeBTRR_b_HT_AuxPmpTemp_FA_D;
    }
    else
    {
        /* Switch: '<S73>/Switch1' */
        VeBTRR_b_HT_AuxPmpTemp_FA_AD = rtb_OR1_j;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Switch: '<S75>/Switch' incorporates:
     *  Constant: '<S144>/Calib'
     */
    if (KeBTRR_b_LTPsvPumpTemp_SD)
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Constant: '<S143>/Calib'
         */
        VeBTRR_T_LTPsvPumpTemp_AD = KeBTRR_T_LTPsvPumpTemp_Dial;
    }
    else
    {
        /* Switch: '<S75>/Switch' */
        VeBTRR_T_LTPsvPumpTemp_AD = tmpRead_5;
    }

    /* End of Switch: '<S75>/Switch' */

    /* Update for UnitDelay: '<S78>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_bg = VeBTRR_b_Switch2ActValue;

    /* Update for UnitDelay: '<S83>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_g = VeBTRR_T_HV_BatModTempMin_B4Deb;

    /* Update for UnitDelay: '<S83>/UnitDelay2' */
    BTRR_ac_DW.UnitDelay2_DSTATE_o = BTRR_ac_B.OutportBufferForOut1_bp;

    /* Update for UnitDelay: '<S84>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_ci = VeBTRR_T_HV_BatModTempAvg_B4Deb;

    /* Update for UnitDelay: '<S84>/UnitDelay2' */
    BTRR_ac_DW.UnitDelay2_DSTATE_e = BTRR_ac_B.OutportBufferForOut1_b;

    /* Update for UnitDelay: '<S85>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_l = VeBTRR_T_HV_BatModTempMax_B4Deb;

    /* Update for UnitDelay: '<S85>/UnitDelay2' */
    BTRR_ac_DW.UnitDelay2_DSTATE_i = BTRR_ac_B.OutportBufferForOut1;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MinMaxTempUsed'
     */
    /* Sum: '<S6>/Sum1' */
    VeBTRR_dT_CellTempDeltaRaw = VeBTRR_T_HV_BatModTempMax_AD -
        VeBTRR_T_HV_BatModTempMin_AD;

    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S37>/ConstantValue2'
     *  RelationalOperator: '<S37>/Comparison1'
     */
    if (VeBTRR_dT_CellTempDeltaRaw >= 0.0F)
    {
        /* Switch: '<S37>/Switch1' */
        VeBTRR_dT_CellTempDelta_BD = VeBTRR_dT_CellTempDeltaRaw;
    }
    else
    {
        /* Switch: '<S37>/Switch1' incorporates:
         *  Constant: '<S37>/ConstantValue1'
         */
        VeBTRR_dT_CellTempDelta_BD = 0.0F;
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Switch: '<S36>/Switch' incorporates:
     *  Inport: '<S6>/HV_BatModMax_TmpV_AftDial'
     */
    if (VeBTRR_b_HV_BatModMax_TmpV)
    {
        /* Gain: '<S38>/Gain' incorporates:
         *  Constant: '<S41>/Calib'
         */
        VeBTRR_T_CellTempMaxUsed_BD = KeBTRR_T_CellMaxAllwdSafeVal;
    }
    else
    {
        /* Gain: '<S38>/Gain' */
        VeBTRR_T_CellTempMaxUsed_BD = VeBTRR_T_HV_BatModTempMax_AD;
    }

    /* End of Switch: '<S36>/Switch' */

    /* Switch: '<S36>/Switch1' incorporates:
     *  Inport: '<S6>/HV_BatModMin_TmpV_AftDial'
     */
    if (VeBTRR_b_HV_BatModMin_TmpV)
    {
        /* Gain: '<S39>/Gain' incorporates:
         *  Constant: '<S42>/Calib'
         */
        VeBTRR_T_CellTempMinUsed_BD = KeBTRR_T_CellMinAllwdSafeVal;
    }
    else
    {
        /* Gain: '<S39>/Gain' */
        VeBTRR_T_CellTempMinUsed_BD = VeBTRR_T_HV_BatModTempMin_AD;
    }

    /* End of Switch: '<S36>/Switch1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Calibrations1'
     */
    /* SignalConversion generated from: '<S4>/BatTmpHys_ColdRgLw_D' incorporates:
     *  Constant: '<S12>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgLw_D = KeBTRR_T_BatTmpHys_ColdRgLw;

    /* SignalConversion generated from: '<S4>/BatTmpHys_ColdRgHgh_D' incorporates:
     *  Constant: '<S11>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgHgh_D = KeBTRR_T_BatTmpHys_ColdRgHgh;

    /* SignalConversion generated from: '<S4>/BatTmpCold_RgLw_D' incorporates:
     *  Constant: '<S10>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpCold_RgLw_D = KeBTRR_T_BatTmpCold_RgLw;

    /* SignalConversion generated from: '<S4>/BatTmpCold_RgHgh_D' incorporates:
     *  Constant: '<S9>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpCold_RgHgh_D = KeBTRR_T_BatTmpCold_RgHgh;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HVBR_Ovrd'
     */
    /* Outputs for Atomic SubSystem: '<S18>/CountDownResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising' */
    /* Logic: '<S34>/OR1' incorporates:
     *  UnitDelay: '<S34>/UnitDelay'
     */
    rtb_OR1_j = !BTRR_ac_DW.UnitDelay_DSTATE_bi;

    /* Update for UnitDelay: '<S34>/UnitDelay' incorporates:
     *  Constant: '<S18>/TRUEConstant3'
     */
    BTRR_ac_DW.UnitDelay_DSTATE_bi = true;

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S22>/ConstantValue'
     *  Logic: '<S34>/AND'
     *  RelationalOperator: '<S22>/GreaterThan'
     *  Switch: '<S22>/Switch2'
     *  UnitDelay: '<S22>/UnitDelay'
     */
    if (rtb_OR1_j)
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Constant: '<S27>/Calib'
         */
        rtb_Switch1_hs = KeBTRR_t_HVBR_OvrChckPmp_TmpTim;
    }
    else if (((sint32)BTRR_ac_DW.UnitDelay_DSTATE_px) > 0)
    {
        /* Switch: '<S22>/Switch2' incorporates:
         *  Constant: '<S22>/ConstantValue1'
         *  Sum: '<S22>/Subtraction'
         *  Switch: '<S22>/Switch1'
         *  UnitDelay: '<S22>/UnitDelay'
         */
        rtb_Switch1_hs = (uint16)((sint32)(((sint32)
            BTRR_ac_DW.UnitDelay_DSTATE_px) - 1));
    }
    else
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Switch: '<S22>/Switch2'
         *  UnitDelay: '<S22>/UnitDelay'
         */
        rtb_Switch1_hs = BTRR_ac_DW.UnitDelay_DSTATE_px;
    }

    /* End of Switch: '<S22>/Switch1' */
    /* End of Outputs for SubSystem: '<S22>/EdgeRising' */

    /* Update for UnitDelay: '<S22>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_px = rtb_Switch1_hs;

    /* Logic: '<S18>/Logical2' incorporates:
     *  Constant: '<S22>/ConstantValue2'
     *  RelationalOperator: '<S22>/GreaterThan1'
     */
    VeBTRR_b_HVBR_ChkSensTemp_0 = (((sint32)rtb_Switch1_hs) <= 0);

    /* End of Outputs for SubSystem: '<S18>/CountDownResetTriggerEnabled' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S26>/Calib'
     *  Constant: '<S30>/Constant1'
     *  Constant: '<S30>/Constant2'
     *  DataStoreRead: '<S30>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     *  Logic: '<S21>/Logical1'
     *  Logic: '<S21>/Logical5'
     *  Logic: '<S30>/LogicalOperator'
     *  RelationalOperator: '<S30>/RelationalOperator1'
     *  RelationalOperator: '<S30>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S30>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S30>/BitwiseOperator2'
     *  Switch: '<S31>/Switch1'
     *  Switch: '<S31>/Switch2'
     */
    if (KeBTRR_b_HVBR_ChkSensTemp_Sel)
    {
        (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value(&tmpRead_3);

        /* Switch: '<S18>/Switch' incorporates:
         *  Constant: '<S25>/Calib'
         *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
         *  RelationalOperator: '<S18>/Comparison2'
         */
        VeBTRR_b_HVBR_ChkSensTemp_1 = (tmpRead_3 >= KeBTRR_T_HVBR_Ovrd_MinTemp);
    }
    else if (((((sint32)BTRR_ac_DW.StatusByte_MtrElect_CoolPmpATem) & 1) <= 0) ||
             ((((uint32)BTRR_ac_DW.StatusByte_MtrElect_CoolPmpATem) & 64U) != 0U))
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S33>/Calib'
         *  RelationalOperator: '<S21>/Comparison1'
         *  Switch: '<S18>/Switch'
         */
        VeBTRR_b_HVBR_ChkSensTemp_1 = (VeBTRR_T_LTPsvPumpTemp_AD >=
            KeBTRR_T_HVBR_Ovrd_MinTemp_LTPP);
    }
    else if (!VeBTRR_b_HT_AuxPmpTemp_FA_AD)
    {
        /* Switch: '<S31>/Switch2' incorporates:
         *  Constant: '<S32>/Calib'
         *  RelationalOperator: '<S21>/Comparison2'
         *  Switch: '<S18>/Switch'
         *  Switch: '<S31>/Switch1'
         */
        VeBTRR_b_HVBR_ChkSensTemp_1 = (VeBTRR_T_HT_AuxPmpTemp_AD >=
            KeBTRR_T_HVBR_Ovrd_MinTemp_AuxPmp);
    }
    else
    {
        /* Switch: '<S18>/Switch' incorporates:
         *  Constant: '<S21>/FALSEConstant'
         *  Switch: '<S31>/Switch1'
         *  Switch: '<S31>/Switch2'
         */
        VeBTRR_b_HVBR_ChkSensTemp_1 = false;
    }

    /* End of Switch: '<S18>/Switch' */

    /* Outputs for Atomic SubSystem: '<S18>/CountDownResetTriggerEnabled1' */
    /* Outputs for Atomic SubSystem: '<S23>/EdgeRising' */
    /* Logic: '<S35>/OR1' incorporates:
     *  UnitDelay: '<S35>/UnitDelay'
     */
    rtb_OR1_j = !BTRR_ac_DW.UnitDelay_DSTATE_is;

    /* Update for UnitDelay: '<S35>/UnitDelay' incorporates:
     *  Constant: '<S18>/TRUEConstant5'
     */
    BTRR_ac_DW.UnitDelay_DSTATE_is = true;

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S23>/ConstantValue'
     *  Logic: '<S35>/AND'
     *  RelationalOperator: '<S23>/GreaterThan'
     *  Switch: '<S23>/Switch2'
     *  UnitDelay: '<S23>/UnitDelay'
     */
    if (rtb_OR1_j)
    {
        /* Switch: '<S23>/Switch1' incorporates:
         *  Constant: '<S27>/Calib'
         *  Constant: '<S28>/Calib'
         *  Sum: '<S18>/Sum'
         */
        rtb_Switch1_hs = (uint16)(((uint32)KeBTRR_t_HVBR_OvrTotMasq_Tim) +
            ((uint32)KeBTRR_t_HVBR_OvrChckPmp_TmpTim));
    }
    else if (((sint32)BTRR_ac_DW.UnitDelay_DSTATE_ey) > 0)
    {
        /* Switch: '<S23>/Switch2' incorporates:
         *  Constant: '<S23>/ConstantValue1'
         *  Sum: '<S23>/Subtraction'
         *  Switch: '<S23>/Switch1'
         *  UnitDelay: '<S23>/UnitDelay'
         */
        rtb_Switch1_hs = (uint16)((sint32)(((sint32)
            BTRR_ac_DW.UnitDelay_DSTATE_ey) - 1));
    }
    else
    {
        /* Switch: '<S23>/Switch1' incorporates:
         *  Switch: '<S23>/Switch2'
         *  UnitDelay: '<S23>/UnitDelay'
         */
        rtb_Switch1_hs = BTRR_ac_DW.UnitDelay_DSTATE_ey;
    }

    /* End of Switch: '<S23>/Switch1' */
    /* End of Outputs for SubSystem: '<S23>/EdgeRising' */

    /* RelationalOperator: '<S23>/GreaterThan1' incorporates:
     *  Constant: '<S23>/ConstantValue2'
     */
    rtb_OR1_j = (((sint32)rtb_Switch1_hs) > 0);

    /* Update for UnitDelay: '<S23>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_ey = rtb_Switch1_hs;

    /* End of Outputs for SubSystem: '<S18>/CountDownResetTriggerEnabled1' */

    /* Logic: '<S18>/Logical3' */
    VeBTRR_b_HVBR_ChkSensTemp_B4Ltch = (((VeBTRR_b_HVBR_ChkSensTemp_0) &&
        (VeBTRR_b_HVBR_ChkSensTemp_1)) && rtb_OR1_j);

    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising2' */
    /* Logic: '<S24>/OR1' incorporates:
     *  UnitDelay: '<S24>/UnitDelay'
     */
    rtb_OR1_lt = !BTRR_ac_DW.UnitDelay_DSTATE_j4;

    /* Update for UnitDelay: '<S24>/UnitDelay' incorporates:
     *  Constant: '<S18>/TRUEConstant2'
     */
    BTRR_ac_DW.UnitDelay_DSTATE_j4 = true;

    /* Outputs for Atomic SubSystem: '<S18>/SignalLatchOnWithReset1' */
    /* Logic: '<S29>/OR1' incorporates:
     *  Logic: '<S24>/AND'
     *  Logic: '<S29>/OR'
     *  UnitDelay: '<S29>/UnitDelay'
     */
    VeBTRR_b_HVBR_ChkSensTemp = ((VeBTRR_b_HVBR_ChkSensTemp_B4Ltch) ||
        ((!rtb_OR1_lt) && (BTRR_ac_DW.UnitDelay_DSTATE_n1)));

    /* End of Outputs for SubSystem: '<S18>/EdgeRising2' */

    /* Update for UnitDelay: '<S29>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_n1 = VeBTRR_b_HVBR_ChkSensTemp;

    /* End of Outputs for SubSystem: '<S18>/SignalLatchOnWithReset1' */

    /* Logic: '<S18>/Logical4' */
    VeBTRR_b_HVBR_TotlMsqTim = !rtb_OR1_j;

    /* Outputs for Atomic SubSystem: '<S17>/Hysteresis2' */
    /* Switch: '<S19>/Switch1' incorporates:
     *  RelationalOperator: '<S19>/GreaterThan'
     */
    if (VeBTRR_T_CellTempMinUsed_BD > BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgHgh_D)
    {
        /* Switch: '<S19>/Switch1' incorporates:
         *  Constant: '<S19>/ConstantValue'
         */
        rtb_OR1_j = true;
    }
    else
    {
        /* Switch: '<S19>/Switch1' incorporates:
         *  RelationalOperator: '<S19>/GreaterThan1'
         *  UnitDelay: '<S19>/UnitDelay'
         */
        rtb_OR1_j = ((VeBTRR_T_CellTempMinUsed_BD >=
                      BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgLw_D) &&
                     (BTRR_ac_DW.UnitDelay_DSTATE_ek));
    }

    /* End of Switch: '<S19>/Switch1' */

    /* Update for UnitDelay: '<S19>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_ek = rtb_OR1_j;

    /* End of Outputs for SubSystem: '<S17>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S17>/Hysteresis3' */
    /* Switch: '<S20>/Switch1' incorporates:
     *  RelationalOperator: '<S20>/GreaterThan'
     */
    if (VeBTRR_T_CellTempMinUsed_BD > BTRR_ac_B.VeBTRR_T_BatTmpCold_RgHgh_D)
    {
        /* Switch: '<S20>/Switch1' incorporates:
         *  Constant: '<S20>/ConstantValue'
         */
        rtb_OR1_lt = true;
    }
    else
    {
        /* Switch: '<S20>/Switch1' incorporates:
         *  RelationalOperator: '<S20>/GreaterThan1'
         *  UnitDelay: '<S20>/UnitDelay'
         */
        rtb_OR1_lt = ((VeBTRR_T_CellTempMinUsed_BD >=
                       BTRR_ac_B.VeBTRR_T_BatTmpCold_RgLw_D) &&
                      (BTRR_ac_DW.UnitDelay_DSTATE_ko));
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Update for UnitDelay: '<S20>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_ko = rtb_OR1_lt;

    /* End of Outputs for SubSystem: '<S17>/Hysteresis3' */

    /* Logic: '<S17>/Logical1' incorporates:
     *  Logic: '<S17>/Logical2'
     */
    VeBTRR_b_HVBR_OvrTmpRng = (rtb_OR1_j && (!rtb_OR1_lt));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for IfAction SubSystem: '<S5>/Action4' incorporates:
     *  ActionPort: '<S16>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S5>/Action3' incorporates:
     *  ActionPort: '<S15>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S5>/Action2' incorporates:
     *  ActionPort: '<S14>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S5>/Action1' incorporates:
     *  ActionPort: '<S13>/ActionPort'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* If: '<S5>/If' incorporates:
     *  Inport: '<S16>/HVBR_Ovr_Temp_Range'
     *  Logic: '<S5>/Logical4'
     *  Merge: '<S5>/Merge'
     *  SignalConversion generated from: '<S13>/Skip_All_Case'
     *  SignalConversion generated from: '<S14>/Masq_invalid_Temps_Case'
     *  SignalConversion generated from: '<S15>/Reset_All_PSA_Set_Case'
     *  SignalConversion: '<S74>/SignalConversion'
     */
    VeBTRR_b_HVBR_OvrdReq_B4D = ((!VeBTRR_b_HVBR_ChkSensTemp) &&
        ((!VeBTRR_b_HVBR_TotlMsqTim) || ((!VeBTRR_b_PropSysActv) &&
        (VeBTRR_b_HVBR_OvrTmpRng))));

    /* End of Outputs for SubSystem: '<S5>/Action1' */
    /* End of Outputs for SubSystem: '<S5>/Action2' */
    /* End of Outputs for SubSystem: '<S5>/Action3' */
    /* End of Outputs for SubSystem: '<S5>/Action4' */

    /* SignalConversion: '<S5>/SignalConversion' */
    BTRR_ac_B.SignalConversion = VeBTRR_b_HVBR_OvrdReq_B4D;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overrides_6p25ms'
     */
    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Inport: '<S6>/HV_BatModAvg_TmpV_AftDial'
     *  Switch: '<S36>/Switch2'
     */
    if (KeBTRR_b_CellTempAvgUsed_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_CellTempAvgUsed' incorporates:
         *  Constant: '<S60>/Calib'
         *  SignalConversion generated from: '<S1>/CellTempAvgUsed_AD'
         */
        (void)Rte_Write_VeBTRR_T_CellTempAvgUsed_Value
            (KeBTRR_T_CellTempAvgUsed_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/MinMaxTempUsed' */
        if (VeBTRR_b_HV_BatModAvg_TmpV)
        {
            /* Outport: '<Root>/VeBTRR_T_CellTempAvgUsed' incorporates:
             *  Constant: '<S40>/Calib'
             *  SignalConversion generated from: '<S1>/CellTempAvgUsed_AD'
             *  Switch: '<S36>/Switch2'
             */
            (void)Rte_Write_VeBTRR_T_CellTempAvgUsed_Value
                (KeBTRR_T_CellAvgAllwdSafeVal);
        }
        else
        {
            /* Outport: '<Root>/VeBTRR_T_CellTempAvgUsed' incorporates:
             *  SignalConversion generated from: '<S1>/CellTempAvgUsed_AD'
             *  Switch: '<S36>/Switch2'
             */
            (void)Rte_Write_VeBTRR_T_CellTempAvgUsed_Value
                (VeBTRR_T_HV_BatModTempAvg);
        }

        /* End of Outputs for SubSystem: '<S1>/MinMaxTempUsed' */
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Switch: '<S48>/Switch2' incorporates:
     *  Constant: '<S62>/Calib'
     */
    if (KeBTRR_b_CellTempAvgUsedFA_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_CellTempAvgUsedFA' incorporates:
         *  Constant: '<S61>/Calib'
         *  SignalConversion generated from: '<S1>/CellTempAvgUsed_FA'
         */
        (void)Rte_Write_VeBTRR_b_CellTempAvgUsedFA_Value
            (KeBTRR_b_CellTempAvgUsedFA_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/MinMaxTempUsed' */
        /* Outport: '<Root>/VeBTRR_b_CellTempAvgUsedFA' incorporates:
         *  Inport: '<S6>/HV_BatModAvg_TmpV_AftDial'
         *  SignalConversion generated from: '<S1>/CellTempAvgUsed_FA'
         */
        (void)Rte_Write_VeBTRR_b_CellTempAvgUsedFA_Value
            (VeBTRR_b_HV_BatModAvg_TmpV);

        /* End of Outputs for SubSystem: '<S1>/MinMaxTempUsed' */
    }

    /* End of Switch: '<S48>/Switch2' */

    /* Switch: '<S47>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     */
    if (KeBTRR_b_CellTempDelta_SD)
    {
        /* Outport: '<Root>/VeBTRR_dT_CellTempDelta' incorporates:
         *  Constant: '<S59>/Calib'
         *  SignalConversion generated from: '<S1>/CellTempDelta_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellTempDelta_Value(KeBTRR_dT_CellTempDelta_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_dT_CellTempDelta' incorporates:
         *  SignalConversion generated from: '<S1>/CellTempDelta_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellTempDelta_Value(VeBTRR_dT_CellTempDelta_BD);
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S53>/Calib'
     */
    if (KeBTRR_b_CellTempMaxUsed_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_CellTempMaxUsed' incorporates:
         *  Constant: '<S50>/Calib'
         *  SignalConversion generated from: '<S1>/CellTempMaxUsed_AD'
         */
        (void)Rte_Write_VeBTRR_T_CellTempMaxUsed_Value
            (KeBTRR_T_CellTempMaxUsed_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_CellTempMaxUsed' incorporates:
         *  SignalConversion generated from: '<S1>/CellTempMaxUsed_AD'
         */
        (void)Rte_Write_VeBTRR_T_CellTempMaxUsed_Value
            (VeBTRR_T_CellTempMaxUsed_BD);
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S45>/Switch2' incorporates:
     *  Constant: '<S52>/Calib'
     */
    if (KeBTRR_b_CellTempMaxUsedFA_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_CellTempMaxUsedFA' incorporates:
         *  Constant: '<S51>/Calib'
         *  SignalConversion generated from: '<S1>/CellTempMaxUsed_FA'
         */
        (void)Rte_Write_VeBTRR_b_CellTempMaxUsedFA_Value
            (KeBTRR_b_CellTempMaxUsedFA_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/MinMaxTempUsed' */
        /* Outport: '<Root>/VeBTRR_b_CellTempMaxUsedFA' incorporates:
         *  Inport: '<S6>/HV_BatModMax_TmpV_AftDial'
         *  SignalConversion generated from: '<S1>/CellTempMaxUsed_FA'
         */
        (void)Rte_Write_VeBTRR_b_CellTempMaxUsedFA_Value
            (VeBTRR_b_HV_BatModMax_TmpV);

        /* End of Outputs for SubSystem: '<S1>/MinMaxTempUsed' */
    }

    /* End of Switch: '<S45>/Switch2' */

    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S57>/Calib'
     */
    if (KeBTRR_b_CellTempMinUsed_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_CellTempMinUsed' incorporates:
         *  Constant: '<S54>/Calib'
         *  SignalConversion generated from: '<S1>/CellTempMinUsed_AD'
         */
        (void)Rte_Write_VeBTRR_T_CellTempMinUsed_Value
            (KeBTRR_T_CellTempMinUsed_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_CellTempMinUsed' incorporates:
         *  SignalConversion generated from: '<S1>/CellTempMinUsed_AD'
         */
        (void)Rte_Write_VeBTRR_T_CellTempMinUsed_Value
            (VeBTRR_T_CellTempMinUsed_BD);
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Switch: '<S46>/Switch2' incorporates:
     *  Constant: '<S56>/Calib'
     */
    if (KeBTRR_b_CellTempMinUsedFA_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_CellTempMinUsedFA' incorporates:
         *  Constant: '<S55>/Calib'
         *  SignalConversion generated from: '<S1>/CellTempMinUsed_FA'
         */
        (void)Rte_Write_VeBTRR_b_CellTempMinUsedFA_Value
            (KeBTRR_b_CellTempMinUsedFA_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/MinMaxTempUsed' */
        /* Outport: '<Root>/VeBTRR_b_CellTempMinUsedFA' incorporates:
         *  Inport: '<S6>/HV_BatModMin_TmpV_AftDial'
         *  SignalConversion generated from: '<S1>/CellTempMinUsed_FA'
         */
        (void)Rte_Write_VeBTRR_b_CellTempMinUsedFA_Value
            (VeBTRR_b_HV_BatModMin_TmpV);

        /* End of Outputs for SubSystem: '<S1>/MinMaxTempUsed' */
    }

    /* End of Switch: '<S46>/Switch2' */

    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S70>/Calib'
     */
    if (KeBTRR_b_HVBR_OvrdReq_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_HVBR_OvrdReq' incorporates:
         *  Constant: '<S69>/Calib'
         *  SignalConversion generated from: '<S1>/HVBR_Ovrd_Req_AD'
         */
        (void)Rte_Write_VeBTRR_b_HVBR_OvrdReq_Value(KeBTRR_b_HVBR_OvrdReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_HVBR_OvrdReq' incorporates:
         *  SignalConversion generated from: '<S1>/HVBR_Ovrd_Req_AD'
         */
        (void)Rte_Write_VeBTRR_b_HVBR_OvrdReq_Value(BTRR_ac_B.SignalConversion);
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S66>/Calib'
     */
    if (KeBTRR_b_HV_BatModMaxTmp_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_HV_BatModTempMax' incorporates:
         *  Constant: '<S64>/Calib'
         *  SignalConversion generated from: '<S1>/HV_BatMod_MaxTmp_AD'
         */
        (void)Rte_Write_VeBTRR_T_HV_BatModTempMax_Value
            (KeBTRR_T_HV_BatModMaxTmp_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_HV_BatModTempMax' incorporates:
         *  SignalConversion generated from: '<S1>/HV_BatMod_MaxTmp_AD'
         */
        (void)Rte_Write_VeBTRR_T_HV_BatModTempMax_Value
            (VeBTRR_T_HV_BatModTempMax_AD);
    }

    /* End of Switch: '<S49>/Switch' */

    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S67>/Calib'
     */
    if (KeBTRR_b_HV_BatModMinTmp_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_HV_BatModTempMin' incorporates:
         *  Constant: '<S65>/Calib'
         *  SignalConversion generated from: '<S1>/HV_BatMod_MinTmp_AD'
         */
        (void)Rte_Write_VeBTRR_T_HV_BatModTempMin_Value
            (KeBTRR_T_HV_BatModMinTmp_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_HV_BatModTempMin' incorporates:
         *  SignalConversion generated from: '<S1>/HV_BatMod_MinTmp_AD'
         */
        (void)Rte_Write_VeBTRR_T_HV_BatModTempMin_Value
            (VeBTRR_T_HV_BatModTempMin_AD);
    }

    /* End of Switch: '<S49>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/BatTmpCold_RgHgh_D_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BatTmpCold_RgHgh_D_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_BatTmpCold_RgHgh_D_write_IRV
        (BTRR_ac_B.VeBTRR_T_BatTmpCold_RgHgh_D);

    /* Merge: '<Root>/BatTmpCold_RgLw_D_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BatTmpCold_RgLw_D_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_BatTmpCold_RgLw_D_write_IRV
        (BTRR_ac_B.VeBTRR_T_BatTmpCold_RgLw_D);

    /* Merge: '<Root>/BatTmpHys_ColdRgHgh_D_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BatTmpHys_ColdRgHgh_D_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_BatTmpHys_ColdRgHgh_D_write_IRV
        (BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgHgh_D);

    /* Merge: '<Root>/BatTmpHys_ColdRgLw_D_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/BatTmpHys_ColdRgLw_D_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_BatTmpHys_ColdRgLw_D_write_IRV
        (BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgLw_D);

    /* Merge: '<Root>/CellTempDelta_Raw_IRV_Merge' incorporates:
     *  SignalConversion: '<S1>/SignalConversion'
     *  SignalConversion generated from: '<S1>/CellTempDelta_Raw_write'
     */
    Rte_IrvWrite_BTRR_FastTEF_CellTempDelta_Raw_write_IRV
        (VeBTRR_dT_CellTempDeltaRaw);

    /* Merge: '<Root>/CellTempDelta_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/CellTempDelta_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_CellTempDelta_write_IRV(VeBTRR_dT_CellTempDelta_BD);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MinMaxTempUsed'
     */
    /* Merge: '<Root>/CellTempMaxFA_IRV_Merge' incorporates:
     *  Inport: '<S6>/HV_BatModMax_TmpV_AftDial'
     *  SignalConversion generated from: '<S1>/CellTempMaxFA_write'
     */
    Rte_IrvWrite_BTRR_FastTEF_CellTempMaxFA_write_IRV(VeBTRR_b_HV_BatModMax_TmpV);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/CellTempMaxUsed_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/CellTempMaxUsed_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_CellTempMaxUsed_write_IRV
        (VeBTRR_T_CellTempMaxUsed_BD);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MinMaxTempUsed'
     */
    /* Merge: '<Root>/CellTempMinFA_IRV_Merge' incorporates:
     *  Inport: '<S6>/HV_BatModMin_TmpV_AftDial'
     *  SignalConversion generated from: '<S1>/CellTempMinFA_write'
     */
    Rte_IrvWrite_BTRR_FastTEF_CellTempMinFA_write_IRV(VeBTRR_b_HV_BatModMin_TmpV);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/CellTempMinUsed_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/CellTempMinUsed_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_CellTempMinUsed_write_IRV
        (VeBTRR_T_CellTempMinUsed_BD);

    /* Merge: '<Root>/HVBR_Ovrd_Req_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/HVBR_Ovrd_Req_write'
     * */
    Rte_IrvWrite_BTRR_FastTEF_HVBR_Ovrd_Req_write_IRV(BTRR_ac_B.SignalConversion);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Merge: '<Root>/HV_BatClntTmp_In_AftDial_IRV_Merge' incorporates:
     *  Inport: '<S8>/HV_BatClntTmp_In'
     *  SignalConversion generated from: '<S1>/HV_BatClntTmp_In_AftDial_write'
     */
    Rte_IrvWrite_BTRR_FastTEF_HV_BatClntTmp_In_AftDial_write_IRV(tmpRead_6);

    /* Merge: '<Root>/PropSysActv_AftDial_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/PropSysActv_BTRR_AftDial_write'
     *  SignalConversion: '<S74>/SignalConversion'
     */
    Rte_IrvWrite_BTRR_FastTEF_PropSysActv_BTRR_AftDial_write_IRV
        (VeBTRR_b_PropSysActv);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/BTRR_FastTEF' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_BTRR_2

FUNC(void, BTRR_CODE) BTRR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_LogicalOperator_kx;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_VariantMerge_For_Variant_So;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_Switch1_ln;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_Switch1_bl;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_Switch1_pz;

#endif

#if Rte_SysCon_Variant_BTRR_2

    sint16 rtb_VeBTRR_K_HoodKeyIndex;

#endif

#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

    float32 rtb_Switch6;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_UnitDelay_p0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_UnitDelay_do;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_OR1_a2;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint16 rtb_Switch1_mu;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint16 rtb_Switch1_je;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeHTIR_e_HVC_HtrSts Switch_j;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 TmpSignalConversionAtTmpVM_F_j3;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 TmpSignalConversionAtTmpVM_F_m4;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 TmpSignalConversionAtTmpVM_Fc_h;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 TmpSignalConversionAtTmpVM_Fc_c;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 TmpSignalConversionAtTmpVM_Fc_p;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean TmpSignalConversionAtTmpVM_F_ib;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean TmpSignalConversionAtTmpVM_F_pq;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 TmpSignalConversionAtTmpVM_Fc_a;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeBTRR_e_BatCondPriority tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeOBCR_e_ChargingLevel VeBTRR_b_VhclPlgdIn_B4D_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeBTRR_e_BatTmpRng VeBTRR_b_BatCritCond_ToState_tm;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean VeBTRR_b_LTAPOnLtch_WL_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeTHMR_e_BatThrmlSt VeBTRR_b_LTAPOn_BEV_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeRCVR_e_Valve_Stuck_Status VeBTRR_b_BatCPV_StuckOpenOrSNA_;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeAVTR_e_EVA_ThermalState rtb_Switch1_mmr_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_EAC_Flts_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_EAC_Flts_tmp_0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_EAC_Flts_tmp_1;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_EAC_Flts_tmp_2;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_EAC_Flts_tmp_3;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_EAC_Flts_tmp_4;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean VeBTRR_b_LTAPOnLtch_BothClntInF;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeTPCR_e_PerWup_BattEngCond VeBTRR_b_PerWup_BatToCond_BD_tm;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TeBTRR_e_BatCritCondSt VeBTRR_b_Batt_CritOrMarg_B4D_tm;

#endif

#if Rte_SysCon_Variant_BTRR_2

    TePDTR_e_BattDischg_State tmp_0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    sint32 VeBTRR_b_BHOSFlt_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_BHOSFlt_tmp_0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    sint32 VeBTRR_b_BTISFlt_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_BTISFlt_tmp_0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    sint32 VeBTRR_b_LTAP_Flts_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_LTAP_Flts_tmp_0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    sint32 VeBTRR_b_BTOSFlt_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    uint32 VeBTRR_b_BTOSFlt_tmp_0;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_LogicalOperator_bx_tmp;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean VeBTRR_b_BatMargCond_ToState_tm;

#endif

#if Rte_SysCon_Variant_BTRR_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__lgb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_b_HV_BatRdyLocal_True'
     */
    (void)Rte_Read_VeTHMR_b_HV_BatRdyLocal_True_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_OVActv'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_OVActv_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__eke);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_T_MinBattAllow'
     */
    (void)Rte_Read_VeTHMR_T_MinBattAllow_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_FcnC);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_T_MaxBattAllow'
     */
    (void)Rte_Read_VeTHMR_T_MaxBattAllow_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_b_HVBR_UsgEnb'
     */
    (void)Rte_Read_VeTHMR_b_HVBR_UsgEnb_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_b_RS_N_Or_NrmlPerWp'
     */
    (void)Rte_Read_VeTHMR_b_RS_N_Or_NrmlPerWp_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__fl5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeSSDR_e_KeySts'
     */
    (void)Rte_Read_VeSSDR_e_KeySts_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__oca);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_e_HTCL_Heat_Distrib'
     */
    (void)Rte_Read_VeTHMR_e_HTCL_Heat_Distrib_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_nm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePMIR_T_LTActvPumpTemp'
     */
    (void)Rte_Read_VePMIR_T_LTActvPumpTemp_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePMIR_e_LTActvPumpDryRun'
     */
    (void)Rte_Read_VePMIR_e_LTActvPumpDryRun_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__kny);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePMIR_b_LTActvPumpDryRun_FA'
     */
    (void)Rte_Read_VePMIR_b_LTActvPumpDryRun_FA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__g3m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
     */
    (void)Rte_Read_VeBPCR_e_BPCM_LIN_BusOff_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
     */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BCP_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__oyx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr'
     */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BatClntHtr_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_en);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_FA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_FA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ll);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__dcy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_T_MaxBattAllowPsv'
     */
    (void)Rte_Read_VeTHMR_T_MaxBattAllowPsv_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTAIR_p_HghRfrgtPres'
     */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeHPMR_e_HybSysSt'
     */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeAVTR_e_SDS_Actual_State'
     */
    (void)Rte_Read_VeAVTR_e_SDS_Actual_State_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_j1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeAVTR_T_SDS_Clnt_TmpIn_Act'
     */
    (void)Rte_Read_VeAVTR_T_SDS_Clnt_TmpIn_Act_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_b_LTAP_ExpctdOff'
     */
    (void)Rte_Read_VeTHMR_b_LTAP_ExpctdOff_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_c5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__k1h);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeIDCR_T_APMTemp1'
     */
    (void)Rte_Read_VeIDCR_T_APMTemp1_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeIDCR_T_APMTemp2'
     */
    (void)Rte_Read_VeIDCR_T_APMTemp2_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr4_Sts_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr3_Sts_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBRDR_b_LTAP_Rqt_LoLv_Diag'
     */
    (void)Rte_Read_VeBRDR_b_LTAP_Rqt_LoLv_Diag_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBRDR_b_HV_BTIS_FltDtct'
     */
    (void)Rte_Read_VeBRDR_b_HV_BTIS_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ab);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBRDR_b_HV_BTIS2_FltDtct'
     */
    (void)Rte_Read_VeBRDR_b_HV_BTIS2_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBRDR_b_HV_BTOS2_FltDtct'
     */
    (void)Rte_Read_VeBRDR_b_HV_BTOS2_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PressElctrFlt_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PressElctrFlt_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_TempElctrFlt_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_TempElctrFlt_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_e1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_T_MinBattAllowPsv'
     */
    (void)Rte_Read_VeTHMR_T_MinBattAllowPsv_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeHSWR_b_HoodOpen'
     */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePWDR_e_HVOverVoltFailure'
     */
    (void)Rte_Read_VePWDR_e_HVOverVoltFailure_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_js);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PerfDiag_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PerfDiag_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ls);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_PressSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_PressSens_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_iv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EXV_TempSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EXV_TempSens_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_je);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeRCVR_e_CPV_Valve_Stuck_State'
     */
    (void)Rte_Read_VeRCVR_e_CPV_Valve_Stuck_State_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_iw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeRCVR_e_LTR_Valve_Stuck_State'
     */
    (void)Rte_Read_VeRCVR_e_LTR_Valve_Stuck_State_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_km);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
#if Rte_SysCon_Variant_BTRR_2 && Rte_SysCon_Variant_BTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTMIR_b_MainRly_CmdReq'
     */
    (void)Rte_Read_VeTMIR_b_MainRly_CmdReq_Value
        (&BTRR_ac_B.VM_Conditional_Signal_TmpVM_Fcn);

#elif !Rte_SysCon_Variant_BTRR_3 && Rte_SysCon_Variant_BTRR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM_Fcn = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
     */
    (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
        (&BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_g);

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
#if !(!Rte_SysCon_Variant_BTRR_3) && Rte_SysCon_Variant_BTRR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_g = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
#if Rte_SysCon_Variant_BTRR_2 && Rte_SysCon_Variant_BTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd_Value
        (&BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_c);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt_Value
        (&BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_b);

#elif !Rte_SysCon_Variant_BTRR_3 && Rte_SysCon_Variant_BTRR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_c = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
#if Rte_SysCon_Variant_BTRR_2 && Rte_SysCon_Variant_BTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktHi_Value
        (&BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_i);

#elif !Rte_SysCon_Variant_BTRR_3 && Rte_SysCon_Variant_BTRR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_b = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
#if Rte_SysCon_Variant_BTRR_2 && Rte_SysCon_Variant_BTRR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     */
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktLo_Value
        (&BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_d);

#elif !Rte_SysCon_Variant_BTRR_3 && Rte_SysCon_Variant_BTRR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_i = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_d = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/CellTempMinUsed_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_F_j3 =
        Rte_IrvRead_BTRR_MedTEH_CellTempMinUsed_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/CellTempMaxUsed_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_F_m4 =
        Rte_IrvRead_BTRR_MedTEH_CellTempMaxUsed_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/HV_BatClntTmp_In_AftDial_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_Fc_h =
        Rte_IrvRead_BTRR_MedTEH_HV_BatClntTmp_In_AftDial_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
     */
    (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePDTR_e_EngOrBattPwrDschg_State'
     */
    (void)Rte_Read_VePDTR_e_EngOrBattPwrDschg_State_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oe);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTPCR_e_PerWup_BattEngCond_State'
     */
    (void)Rte_Read_VeTPCR_e_PerWup_BattEngCond_State_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_c0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTPCR_dT_PerWpCond_BatTmpErr'
     */
    (void)Rte_Read_VeTPCR_dT_PerWpCond_BatTmpErr_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/BatTmpHys_ColdRgHgh_D_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_Fc_c =
        Rte_IrvRead_BTRR_MedTEH_BatTmpHys_ColdRgHgh_D_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/BatTmpHys_ColdRgLw_D_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_Fc_p =
        Rte_IrvRead_BTRR_MedTEH_BatTmpHys_ColdRgLw_D_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/PropSysActv_AftDial_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_F_ib =
        Rte_IrvRead_BTRR_MedTEH_PropSysActv_BTRR_AftDial_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__nlu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ht);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeAVTR_e_EVA_ThrmlState'
     */
    (void)Rte_Read_VeAVTR_e_EVA_ThrmlState_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__mt3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeAVTR_dT_SDS_ClntTempErr'
     */
    (void)Rte_Read_VeAVTR_dT_SDS_ClntTempErr_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmp2_In'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmp2_In_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     */
    (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__bgo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     */
    (void)Rte_Read_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeFSCR_b_RadFan_FltDtct'
     */
    (void)Rte_Read_VeFSCR_b_RadFan_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_h4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/CellTempMaxFA_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_F_pq =
        Rte_IrvRead_BTRR_MedTEH_CellTempMaxFA_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeHTIR_T_HVC_Htr4ClntOut_Temp'
     */
    (void)Rte_Read_VeHTIR_T_HVC_Htr4ClntOut_Temp_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut2'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut2_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_md);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePMIR_e_HTAuxPumpDryRun'
     */
    (void)Rte_Read_VePMIR_e_HTAuxPumpDryRun_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__loe);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VePMIR_b_HTAuxPumpDryRun_FA'
     */
    (void)Rte_Read_VePMIR_b_HTAuxPumpDryRun_FA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
#if Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/CellTempMinFA_IRV_Merge'
     */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM__bn =
        Rte_IrvRead_BTRR_MedTEH_CellTempMinFA_write_IRV();

#elif !Rte_SysCon_Variant_BTRR_1 && Rte_SysCon_Variant_BTRR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' */
    BTRR_ac_B.VM_Conditional_Signal_TmpVM__bn = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_T_AHPInletTempArb'
     */
    (void)Rte_Read_VeTHMR_T_AHPInletTempArb_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Merge: '<Root>/CellTempDelta_Raw_IRV_Merge'
     */
    TmpSignalConversionAtTmpVM_Fc_a =
        Rte_IrvRead_BTRR_MedTEH_CellTempDelta_Raw_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpHtrBTempSnsrPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattHeat'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattHeat_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantHeaterBPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantHeaterBPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HeatingElmntPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HeatingElmntPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolOutTempSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolOutTempSnsCkt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_el);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_CT_SnsrPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ly);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlLow'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlLow_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlSnsCkt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCool'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCool_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_d5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EACPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EACPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__gwc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEAC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEAC_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktHi_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_al);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktLo_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ms);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolHeaterAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolHeaterAPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_fl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolPmpATempSnsrPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ek);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktHi_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ja);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktLo_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_Ckt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_StkClsd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_StkClsd_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECH_TempIn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECH_TempIn_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECH_TempOut'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECH_TempOut_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_eo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolHtrA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolHtrA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHighVolCabinAirHtr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHighVolCabinAirHtr_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_nl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_m5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__als);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolPmpA_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_f4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_CktHi_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_CktLo_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Ckt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvA_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvA_Perf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ot);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_iy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpATempSnsrPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_px);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oi);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_do);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_e_VehThermSt'
     */
    (void)Rte_Read_VeTHMR_e_VehThermSt_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ah);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_T_LTCLTgt_BattActvPsvHeating'
     */
    (void)Rte_Read_VeTHMR_T_LTCLTgt_BattActvPsvHeating_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeTHMR_e_CabHeatThermalState'
     */
    (void)Rte_Read_VeTHMR_e_CabHeatThermalState_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_CoolPmp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_CoolPmp_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_k1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpOveSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpOveSpd_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ld);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsrCPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pa);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActC_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EEXV_PressSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EEXV_PressSens_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_EEXV_PerfDiag_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_EEXV_PerfDiag_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActD'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommACRefrigExpVlvActD_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr4CktPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_nf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktPerf_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_df);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_OEXV_PressSens_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_OEXV_PressSens_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_fh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_OEXV_PerfDiag_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_OEXV_PerfDiag_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeVLDR_b_OEXV_PressElctrFlt_FltDtct'
     */
    (void)Rte_Read_VeVLDR_b_OEXV_PressElctrFlt_FltDtct_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM__nlx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146' incorporates:
     *  Inport: '<Root>/VeRCVR_e_HTL_Valve_Stuck_State'
     */
    (void)Rte_Read_VeRCVR_e_HTL_Valve_Stuck_State_Value
        (&BTRR_ac_B.TmpSignalConversionAtTmpVM_F_l4);

    /* Outputs for Function Call SubSystem: '<Root>/BTRR_MedTEH' */
    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolPmpHtrBTempSnsrPerf' */
    BTRR_ac_DW.StatusByte_BattCoolPmpHtrBTempS =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_n;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattHeat' */
    BTRR_ac_DW.StatusByte_BattHeat = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_e;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantHeaterBPerf' */
    BTRR_ac_DW.StatusByte_CoolantHeaterBPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oy;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HeatingElmntPerf' */
    BTRR_ac_DW.StatusByte_HeatingElmntPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lg;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolOutTempSnsCkt' */
    BTRR_ac_DW.StatusByte_CoolOutTempSnsCkt =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_el;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_HB_CT_SnsrPerf' */
    BTRR_ac_DW.StatusByte_HB_CT_SnsrPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ly;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolLvlLow' */
    BTRR_ac_DW.StatusByte_BattCoolLvlLow =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mr;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolLvlSnsCkt' */
    BTRR_ac_DW.StatusByte_BattCoolLvlSnsCkt =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lq;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCool' */
    BTRR_ac_DW.StatusByte_BattCool = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_d5;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolCtrlVlv1CktHi' */
    BTRR_ac_DW.StatusByte_CoolCtrlVlv1CktHi =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dc;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolCtrlVlv1CktLo' */
    BTRR_ac_DW.StatusByte_CoolCtrlVlv1CktLo =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bt;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolCtrlVlv1Ckt' */
    BTRR_ac_DW.StatusByte_CoolCtrlVlv1Ckt =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hn;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_EACPerf' */
    BTRR_ac_DW.StatusByte_EACPerf = BTRR_ac_B.TmpSignalConversionAtTmpVM__gwc;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommEAC' */
    BTRR_ac_DW.StatusByte_LostCommEAC =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g0;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CT2_SnsrCktHi' */
    BTRR_ac_DW.StatusByte_CT2_SnsrCktHi =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_al;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CT2_SnsrCktLo' */
    BTRR_ac_DW.StatusByte_CT2_SnsrCktLo =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ms;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CT2_SnsrPerf' */
    BTRR_ac_DW.StatusByte_CT2_SnsrPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_i;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolHeaterAPerf' */
    BTRR_ac_DW.StatusByte_CoolHeaterAPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_fl;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolPmpATempSnsrPerf' */
    BTRR_ac_DW.StatusByte_CoolPmpATempSnsrPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ek;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvB_CktHi' */
    BTRR_ac_DW.StatusByte_CoolantVlvB_CktHi =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ja;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvB_CktLo' */
    BTRR_ac_DW.StatusByte_CoolantVlvB_CktLo =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bu;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvB_Ckt' */
    BTRR_ac_DW.StatusByte_CoolantVlvB_Ckt =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jc;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvB_StkClsd' */
    BTRR_ac_DW.StatusByte_CoolantVlvB_StkClsd =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mq;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_ECH_TempIn' */
    BTRR_ac_DW.StatusByte_ECH_TempIn = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dl;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_ECH_TempOut' */
    BTRR_ac_DW.StatusByte_ECH_TempOut =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_eo;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommCoolHtrA' */
    BTRR_ac_DW.StatusByte_LostCommCoolHtrA =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lb;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommHighVolCabinAirHtr' */
    BTRR_ac_DW.StatusByte_LostCommHighVolCabin =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bm;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommACRefrigExpVlvActA' */
    BTRR_ac_DW.StatusByte_LostCommACRefrigExpV =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_nl;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolPmpACtrlCktPerf' */
    BTRR_ac_DW.StatusByte_CoolPmpACtrlCktPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_m5;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN1_BusOff' */
    BTRR_ac_DW.StatusByte_LIN1_BusOff =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mt;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN2_BusOff' */
    BTRR_ac_DW.StatusByte_LIN2_BusOff =
        BTRR_ac_B.TmpSignalConversionAtTmpVM__als;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommCoolPmpA' */
    BTRR_ac_DW.StatusByte_LostCommCoolPmpA =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_f4;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvA_CktHi' */
    BTRR_ac_DW.StatusByte_CoolantVlvA_CktHi =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gz;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvA_CktLo' */
    BTRR_ac_DW.StatusByte_CoolantVlvA_CktLo =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kw;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvA_Ckt' */
    BTRR_ac_DW.StatusByte_CoolantVlvA_Ckt =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hu;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CoolantVlvA_Perf' */
    BTRR_ac_DW.StatusByte_CoolantVlvA_Perf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ot;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CommBusOff' */
    BTRR_ac_DW.StatusByte_CommBusOff = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oj;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_CommBus_B_Off' */
    BTRR_ac_DW.StatusByte_CommBus_B_Off =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bo;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A_CANC11' */
    BTRR_ac_DW.StatusByte_LosCommBECM_A_CANC11 =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bp;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A' */
    BTRR_ac_DW.StatusByte_LosCommBECM_A =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_iy;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolPmpATempSnsrPerf' */
    BTRR_ac_DW.StatusByte_BattCoolPmpATempSnsr =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_px;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolPmpPerf' */
    BTRR_ac_DW.StatusByte_BattCoolPmpPerf =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lj;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigPresSnsrAHi' */
    BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lo;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigPresSnsrALo' */
    BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrALo =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oi;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigPresSnsrAPerf' */
    BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_do;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_ThrmlRlyCtrlCkt' */
    BTRR_ac_DW.StatusByte_ThrmlRlyCtrlCkt =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lt;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LIN3_BusOff' */
    BTRR_ac_DW.StatusByte_LIN3_BusOff =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bf;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommHB_CoolPmp' */
    BTRR_ac_DW.StatusByte_LostCommHB_CoolPmp =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_k1;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_BattCoolPmpOveSpd' */
    BTRR_ac_DW.StatusByte_BattCoolPmpOveSpd =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ld;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigTempSnsrCPerf' */
    BTRR_ac_DW.StatusByte_AC_RefrigTempSnsrCPe =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pa;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommACRefrigExpVlvActC' */
    BTRR_ac_DW.StatusByte_LostCommACRefrigEx_n =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kp;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LostCommACRefrigExpVlvActD' */
    BTRR_ac_DW.StatusByte_LostCommACRefrigEx_e =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hr;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigTempSnsr4CktPerf' */
    BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr4Ck =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_nf;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigTempSnsr5CktPerf' */
    BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5_n =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_df;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigTempSnsr5CktShotoGro' */
    BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5_o =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mv;

    /* DataStoreWrite: '<S2>/DSW_StatusByte_AC_RefrigTempSnsr5CktShotoBat' */
    BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5Ck =
        BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kx;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Subsystem1'
     */
    /* Switch: '<S918>/Switch' incorporates:
     *  Constant: '<S922>/Calib'
     */
    if (KeBTRR_b_ChargingSystemSts_SD)
    {
        /* Switch: '<S918>/Switch' incorporates:
         *  Constant: '<S923>/Calib'
         */
        VeBTRR_e_ChargingSystemSts = KeBTRR_e_ChargingSystemSts_D;
    }
    else
    {
        /* Switch: '<S918>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_ChargingSystemSts = BTRR_ac_B.TmpSignalConversionAtTmpVM__lgb;
    }

    /* End of Switch: '<S918>/Switch' */

    /* Switch: '<S919>/Switch' incorporates:
     *  Constant: '<S924>/Calib'
     */
    if (KeBTRR_b_BatCntctrStat_SelDial)
    {
        /* Switch: '<S919>/Switch' incorporates:
         *  Constant: '<S925>/Calib'
         */
        VeBTRR_e_BatCntctrStat = KeBTRR_e_BatCntctrStat_Dial;
    }
    else
    {
        /* Switch: '<S919>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_BatCntctrStat = BTRR_ac_B.TmpSignalConversionAtTmpVM__k1h;
    }

    /* End of Switch: '<S919>/Switch' */

    /* Switch: '<S920>/Switch21' incorporates:
     *  Constant: '<S927>/Calib'
     */
    if (KeBTRR_b_HoodAjar_SD)
    {
        /* Switch: '<S920>/Switch21' incorporates:
         *  Constant: '<S926>/Calib'
         */
        VeBTRR_b_HoodAjar_AD = KeBTRR_b_HoodAjar_D;
    }
    else
    {
        /* Switch: '<S920>/Switch21' */
        VeBTRR_b_HoodAjar_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_mc;
    }

    /* End of Switch: '<S920>/Switch21' */

    /* Switch: '<S921>/Switch5' incorporates:
     *  Constant: '<S928>/Calib'
     */
    if (KeBTRR_b_HVOverVoltFailure_SD)
    {
        /* Switch: '<S921>/Switch5' incorporates:
         *  Constant: '<S929>/Calib'
         */
        VeBTRR_e_HVOverVoltFailure_AD = KeBTRR_e_HVOverVoltFailure_D;
    }
    else
    {
        /* Switch: '<S921>/Switch5' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_HVOverVoltFailure_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_js;
    }

    /* End of Switch: '<S921>/Switch5' */

    /* Switch: '<S956>/Switch' incorporates:
     *  Constant: '<S964>/Calib'
     */
    if (KeBTRR_b_HV_BatRdy_SD)
    {
        /* Switch: '<S956>/Switch' incorporates:
         *  Constant: '<S963>/Calib'
         */
        VeBTRR_b_HV_BatRdy_True_AD = KeBTRR_b_HV_BatRdy_D;
    }
    else
    {
        /* Switch: '<S956>/Switch' */
        VeBTRR_b_HV_BatRdy_True_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pn;
    }

    /* End of Switch: '<S956>/Switch' */

    /* Switch: '<S957>/Switch' incorporates:
     *  Constant: '<S966>/Calib'
     */
    if (KeBTRR_b_HV_Bat_OverVltg_SD)
    {
        /* Switch: '<S957>/Switch' incorporates:
         *  Constant: '<S965>/Calib'
         */
        VeBTRR_b_BattOvrVltg_AD = KeBTRR_b_HV_Bat_OverVltg_D;
    }
    else
    {
        /* Switch: '<S957>/Switch' */
        VeBTRR_b_BattOvrVltg_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM__eke;
    }

    /* End of Switch: '<S957>/Switch' */

    /* Switch: '<S958>/Switch' incorporates:
     *  Constant: '<S968>/Calib'
     */
    if (KeBTRR_b_MinBattAllow_SD)
    {
        /* Switch: '<S958>/Switch' incorporates:
         *  Constant: '<S967>/Calib'
         */
        VeBTRR_T_MinBattAllow = KeBTRR_T_MinBattAllow_D;
    }
    else
    {
        /* Switch: '<S958>/Switch' */
        VeBTRR_T_MinBattAllow = BTRR_ac_B.TmpSignalConversionAtTmpVM_FcnC;
    }

    /* End of Switch: '<S958>/Switch' */

    /* Switch: '<S959>/Switch' incorporates:
     *  Constant: '<S970>/Calib'
     */
    if (KeBTRR_b_MaxBattAllow_SD)
    {
        /* Switch: '<S959>/Switch' incorporates:
         *  Constant: '<S969>/Calib'
         */
        VeBTRR_T_MaxBattAllow = KeBTRR_T_MaxBattAllow_D;
    }
    else
    {
        /* Switch: '<S959>/Switch' */
        VeBTRR_T_MaxBattAllow = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_o;
    }

    /* End of Switch: '<S959>/Switch' */

    /* Switch: '<S961>/Switch' incorporates:
     *  Constant: '<S974>/Calib'
     */
    if (KeBTRR_b_HVBR_UsgEnb_SD)
    {
        /* Switch: '<S961>/Switch' incorporates:
         *  Constant: '<S973>/Calib'
         */
        VeBTRR_b_HVBR_UsgEnb = KeBTRR_b_HVBR_UsgEnb_D;
    }
    else
    {
        /* Switch: '<S961>/Switch' */
        VeBTRR_b_HVBR_UsgEnb = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dm;
    }

    /* End of Switch: '<S961>/Switch' */

    /* Switch: '<S962>/Switch' incorporates:
     *  Constant: '<S976>/Calib'
     */
    if (KeBTRR_b_MaxBattAllowPsv_SD)
    {
        /* Switch: '<S962>/Switch' incorporates:
         *  Constant: '<S975>/Calib'
         */
        VeBTRR_T_MaxBattAllowPsv = KeBTRR_T_MaxBattAllowPsv_D;
    }
    else
    {
        /* Switch: '<S962>/Switch' */
        VeBTRR_T_MaxBattAllowPsv = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_g;
    }

    /* End of Switch: '<S962>/Switch' */

    /* Switch: '<S960>/Switch' incorporates:
     *  Constant: '<S972>/Calib'
     */
    if (KeBTRR_b_MinBattAllowPsv_SD)
    {
        /* Switch: '<S960>/Switch' incorporates:
         *  Constant: '<S971>/Calib'
         */
        VeBTRR_T_MinBattAllowPsv = KeBTRR_T_MinBattAllowPsv_D;
    }
    else
    {
        /* Switch: '<S960>/Switch' */
        VeBTRR_T_MinBattAllowPsv = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_m;
    }

    /* End of Switch: '<S960>/Switch' */

    /* Switch: '<S1013>/Switch' incorporates:
     *  Constant: '<S1015>/Calib'
     */
    if (KeBTRR_b_RS_N_Or_NrmlPerWp_SD)
    {
        /* Switch: '<S1013>/Switch' incorporates:
         *  Constant: '<S1014>/Calib'
         */
        VeBTRR_b_RS_N_Or_NrmlPerWp_AD = KeBTRR_b_RS_N_Or_NrmlPerWp_D;
    }
    else
    {
        /* Switch: '<S1013>/Switch' */
        VeBTRR_b_RS_N_Or_NrmlPerWp_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM__fl5;
    }

    /* End of Switch: '<S1013>/Switch' */

    /* Switch: '<S993>/Switch' incorporates:
     *  Constant: '<S1000>/Calib'
     */
    if (KeBTRR_b_SSDR_KeySts_SD)
    {
        /* Switch: '<S993>/Switch' incorporates:
         *  Constant: '<S1001>/Calib'
         */
        VeBTRR_e_SSDR_KeySts = KeBTRR_e_SSDR_KeySts_D;
    }
    else
    {
        /* Switch: '<S993>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_SSDR_KeySts = BTRR_ac_B.TmpSignalConversionAtTmpVM__oca;
    }

    /* End of Switch: '<S993>/Switch' */

    /* Switch: '<S994>/Switch' incorporates:
     *  Constant: '<S1002>/Calib'
     */
    if (KeBTRR_b_HTCL_Heat_Distrib_SD)
    {
        /* Switch: '<S994>/Switch' incorporates:
         *  Constant: '<S1003>/Calib'
         */
        VeBTRR_e_HTCL_Heat_Distrib = KeBTRR_e_HTCL_Heat_Distrib_D;
    }
    else
    {
        /* Switch: '<S994>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_HTCL_Heat_Distrib = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_nm;
    }

    /* End of Switch: '<S994>/Switch' */

    /* Switch: '<S997>/Switch' incorporates:
     *  Constant: '<S1007>/Calib'
     */
    if (KeBTRR_b_AlternatorMd_SD)
    {
        /* Switch: '<S997>/Switch' incorporates:
         *  Constant: '<S1008>/Calib'
         */
        VeBTRR_e_HybSysState = KeBTRR_e_AlternatorMd_D;
    }
    else
    {
        /* Switch: '<S997>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_HybSysState = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_lw;
    }

    /* End of Switch: '<S997>/Switch' */

    /* Logic: '<S995>/LogicalOperator3' incorporates:
     *  Logic: '<S1004>/LogicalOperator'
     *  Logic: '<S995>/LogicalOperator'
     *  Logic: '<S995>/LogicalOperator1'
     *  Logic: '<S995>/LogicalOperator2'
     *  Logic: '<S995>/LogicalOperator4'
     *  Logic: '<S995>/LogicalOperator5'
     *  Logic: '<S995>/LogicalOperator6'
     *  RelationalOperator: '<S1004>/RelationalOperator1'
     *  RelationalOperator: '<S1004>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1004>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1004>/BitwiseOperator2'
     */
#if Rte_SysCon_Variant_BTRR_3

    /* VariantMerge generated from: '<S995>/VariantSource' */
    rtb_VariantMerge_For_Variant_So =
        (((((!BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_c) &&
            (!BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_b)) &&
           (!BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_i)) &&
          (!BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_d)) &&
         (BTRR_ac_B.VM_Conditional_Signal_TmpVM_Fcn));

#else

    /* Logic: '<S1004>/LogicalOperator' incorporates:
     *  Constant: '<S1004>/Constant1'
     *  Constant: '<S1004>/Constant2'
     *  DataStoreRead: '<S1004>/StatusByte_ThrmlRlyCtrlCkt'
     *  RelationalOperator: '<S1004>/RelationalOperator1'
     *  RelationalOperator: '<S1004>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S1004>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S1004>/BitwiseOperator2'
     */
    rtb_LogicalOperator_kx = (((((sint32)BTRR_ac_DW.StatusByte_ThrmlRlyCtrlCkt)
        & 1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) ==
                      0U));

    /* VariantMerge generated from: '<S995>/VariantSource' incorporates:
     *  Logic: '<S995>/LogicalOperator1'
     *  Logic: '<S995>/LogicalOperator6'
     */
    rtb_VariantMerge_For_Variant_So =
        ((BTRR_ac_B.VM_Conditional_Signal_TmpVM_F_g) && (!rtb_LogicalOperator_kx));

#endif

    /* End of Logic: '<S995>/LogicalOperator3' */

    /* SignalConversion generated from: '<S995>/VariantSource' */
    VeBTRR_b_Rly_Cmnd_AD = rtb_VariantMerge_For_Variant_So;

    /* Switch: '<S996>/Switch' incorporates:
     *  Constant: '<S1005>/Calib'
     */
    if (KeBTRR_b_VehThermSt_SD)
    {
        /* Switch: '<S996>/Switch' incorporates:
         *  Constant: '<S1006>/Calib'
         */
        VeBTRR_e_VehThermSt_AD = KeBTRR_e_VehThermSt_D;
    }
    else
    {
        /* Switch: '<S996>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_VehThermSt_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ah;
    }

    /* End of Switch: '<S996>/Switch' */

    /* Switch: '<S998>/Switch' incorporates:
     *  Constant: '<S1010>/Calib'
     */
    if (KeBTRR_b_LTCLTgt_BattActvPsvHeating_SD)
    {
        /* Switch: '<S998>/Switch' incorporates:
         *  Constant: '<S1009>/Calib'
         */
        VeBTRR_T_LTCLTgt_BattActvPsvHeating_AD =
            KeBTRR_T_LTCLTgt_BattActvPsvHeating_D;
    }
    else
    {
        /* Switch: '<S998>/Switch' */
        VeBTRR_T_LTCLTgt_BattActvPsvHeating_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gw;
    }

    /* End of Switch: '<S998>/Switch' */

    /* Switch: '<S999>/Switch' incorporates:
     *  Constant: '<S1011>/Calib'
     */
    if (KeBTRR_b_CabHeatThermalState_SD)
    {
        /* Switch: '<S999>/Switch' incorporates:
         *  Constant: '<S1012>/Calib'
         */
        VeBTRR_e_CabHeatThermalState = KeBTRR_e_CabHeatThermalState_D;
    }
    else
    {
        /* Switch: '<S999>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_CabHeatThermalState = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jp;
    }

    /* End of Switch: '<S999>/Switch' */

    /* Switch: '<S1016>/Switch' incorporates:
     *  Constant: '<S1021>/Calib'
     */
    if (KeBTRR_b_LTActPumpTemp_SD)
    {
        /* Switch: '<S1016>/Switch' incorporates:
         *  Constant: '<S1020>/Calib'
         */
        VeBTRR_T_LTActPumpTemp_AD = KeBTRR_T_LTActPumpTemp_D;
    }
    else
    {
        /* Switch: '<S1016>/Switch' */
        VeBTRR_T_LTActPumpTemp_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_k;
    }

    /* End of Switch: '<S1016>/Switch' */

    /* Switch: '<S1017>/Switch' incorporates:
     *  Constant: '<S1022>/Calib'
     */
    if (KeBTRR_b_LTActPumpDryRun_SD)
    {
        /* Switch: '<S1017>/Switch' incorporates:
         *  Constant: '<S1023>/Calib'
         */
        VeBTRR_e_LTActPumpDryRun_AD = KeBTRR_e_LTActPumpDryRun_D;
    }
    else
    {
        /* Switch: '<S1017>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_LTActPumpDryRun_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM__kny;
    }

    /* End of Switch: '<S1017>/Switch' */

    /* Switch: '<S1018>/Switch' incorporates:
     *  Constant: '<S1025>/Calib'
     */
    if (KeBTRR_b_LTActPumpDryRun_FA_SD)
    {
        /* Switch: '<S1018>/Switch' incorporates:
         *  Constant: '<S1024>/Calib'
         */
        VeBTRR_b_LTActPumpDryRun_FA_AD = KeBTRR_b_LTActPumpDryRun_FA_D;
    }
    else
    {
        /* Switch: '<S1018>/Switch' */
        VeBTRR_b_LTActPumpDryRun_FA_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM__g3m;
    }

    /* End of Switch: '<S1018>/Switch' */

    /* Switch: '<S1019>/Switch' incorporates:
     *  Constant: '<S1027>/Calib'
     */
    if (KeBTRR_b_LTAP_Off_SD)
    {
        /* Switch: '<S1019>/Switch' incorporates:
         *  Constant: '<S1026>/Calib'
         */
        VeBTRR_b_LTAPOff_AD = KeBTRR_b_LTAP_Off_D;
    }
    else
    {
        /* Switch: '<S1019>/Switch' */
        VeBTRR_b_LTAPOff_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_c5;
    }

    /* End of Switch: '<S1019>/Switch' */

    /* Switch: '<S978>/Switch' incorporates:
     *  Constant: '<S983>/Calib'
     */
    if (KeBTRR_b_BPCMLIN_LOC_SD)
    {
        /* Switch: '<S978>/Switch' incorporates:
         *  Constant: '<S984>/Calib'
         */
        VeBTRR_b_BPCM_LIN_LOC = KeBTRR_e_BPCMLIN_LOC_D;
    }
    else
    {
        /* Switch: '<S978>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_b_BPCM_LIN_LOC = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jm;
    }

    /* End of Switch: '<S978>/Switch' */

    /* Switch: '<S978>/Switch1' incorporates:
     *  Constant: '<S982>/Calib'
     */
    if (KeBTRR_b_BPCMLINLOC_FA_SD)
    {
        /* Switch: '<S978>/Switch1' incorporates:
         *  Constant: '<S981>/Calib'
         */
        VeBTRR_b_BPCM_LIN_LOC_FA = KeBTRR_b_BPCMLINLOC_FA_D;
    }
    else
    {
        /* Switch: '<S978>/Switch1' */
        VeBTRR_b_BPCM_LIN_LOC_FA = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pp;
    }

    /* End of Switch: '<S978>/Switch1' */

    /* Switch: '<S979>/Switch' incorporates:
     *  Constant: '<S987>/Calib'
     */
    if (KeBTRR_b_LTAP_LOC_SD)
    {
        /* Switch: '<S979>/Switch' incorporates:
         *  Constant: '<S988>/Calib'
         */
        VeBTRR_b_LTAP_LOC = KeBTRR_e_LTAP_LOC_D;
    }
    else
    {
        /* Switch: '<S979>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_b_LTAP_LOC = BTRR_ac_B.TmpSignalConversionAtTmpVM__oyx;
    }

    /* End of Switch: '<S979>/Switch' */

    /* Switch: '<S979>/Switch1' incorporates:
     *  Constant: '<S986>/Calib'
     */
    if (KeBTRR_b_LTAPLOC_FA_SD)
    {
        /* Switch: '<S979>/Switch1' incorporates:
         *  Constant: '<S985>/Calib'
         */
        VeBTRR_b_LTAP_LOC_FA = KeBTRR_b_LTAPLOC_FA_D;
    }
    else
    {
        /* Switch: '<S979>/Switch1' */
        VeBTRR_b_LTAP_LOC_FA = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ll;
    }

    /* End of Switch: '<S979>/Switch1' */

    /* Switch: '<S980>/Switch' incorporates:
     *  Constant: '<S991>/Calib'
     */
    if (KeBTRR_b_BattHtr_LOC_SD)
    {
        /* Switch: '<S980>/Switch' incorporates:
         *  Constant: '<S992>/Calib'
         */
        VeBTRR_b_BattHtr_LOC = KeBTRR_e_BattHtr_LOC_D;
    }
    else
    {
        /* Switch: '<S980>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_b_BattHtr_LOC = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_en;
    }

    /* End of Switch: '<S980>/Switch' */

    /* Switch: '<S980>/Switch1' incorporates:
     *  Constant: '<S990>/Calib'
     */
    if (KeBTRR_b_BattHtrLOC_FA_SD)
    {
        /* Switch: '<S980>/Switch1' incorporates:
         *  Constant: '<S989>/Calib'
         */
        VeBTRR_b_BattHtr_LOC_FA = KeBTRR_b_BattHtrLOC_FA_D;
    }
    else
    {
        /* Switch: '<S980>/Switch1' */
        VeBTRR_b_BattHtr_LOC_FA = BTRR_ac_B.TmpSignalConversionAtTmpVM__dcy;
    }

    /* End of Switch: '<S980>/Switch1' */

    /* Switch: '<S1028>/Switch' incorporates:
     *  Constant: '<S1031>/Calib'
     */
    if (KeBTRR_b_HghRfrgtPres_SD)
    {
        /* Switch: '<S1028>/Switch' incorporates:
         *  Constant: '<S1032>/Calib'
         */
        VeBTRR_p_HghRfrgtPres = KeBTRR_p_HghRfrgtPres_D;
    }
    else
    {
        /* Switch: '<S1028>/Switch' */
        VeBTRR_p_HghRfrgtPres = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_b;
    }

    /* End of Switch: '<S1028>/Switch' */

    /* Switch: '<S1029>/Switch' incorporates:
     *  Constant: '<S1034>/Calib'
     */
    if (KeBTRR_b_APMTemp1_SD)
    {
        /* Switch: '<S1029>/Switch' incorporates:
         *  Constant: '<S1033>/Calib'
         */
        VeBTRR_T_APMTemp1 = KeBTRR_T_APMTemp1_D;
    }
    else
    {
        /* Switch: '<S1029>/Switch' */
        VeBTRR_T_APMTemp1 = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bg;
    }

    /* End of Switch: '<S1029>/Switch' */

    /* Switch: '<S1030>/Switch' incorporates:
     *  Constant: '<S1036>/Calib'
     */
    if (KeBTRR_b_APMTemp2_SD)
    {
        /* Switch: '<S1030>/Switch' incorporates:
         *  Constant: '<S1035>/Calib'
         */
        VeBTRR_T_APMTemp2 = KeBTRR_T_APMTemp2_D;
    }
    else
    {
        /* Switch: '<S1030>/Switch' */
        VeBTRR_T_APMTemp2 = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_d;
    }

    /* End of Switch: '<S1030>/Switch' */

    /* Switch: '<S951>/Switch' incorporates:
     *  Constant: '<S953>/Calib'
     */
    if (KeBTRR_b_SDS_ActSt_Sel)
    {
        /* Switch: '<S951>/Switch' incorporates:
         *  Constant: '<S955>/Calib'
         */
        VeBTRR_e_SDS_ActSt = KeBTRR_e_SDS_ActSt_Dial;
    }
    else
    {
        /* Switch: '<S951>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_SDS_ActSt = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_j1;
    }

    /* End of Switch: '<S951>/Switch' */

    /* Switch: '<S951>/Switch1' incorporates:
     *  Constant: '<S954>/Calib'
     */
    if (KeBTRR_b_SDS_ClntTmpIn_Sel)
    {
        /* Switch: '<S951>/Switch1' incorporates:
         *  Constant: '<S952>/Calib'
         */
        VeBTRR_T_SDS_ClntTmpIn = KeBTRR_T_SDS_ClntTmpIn_Dial;
    }
    else
    {
        /* Switch: '<S951>/Switch1' */
        VeBTRR_T_SDS_ClntTmpIn = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_j;
    }

    /* End of Switch: '<S951>/Switch1' */

    /* Switch: '<S908>/Switch' incorporates:
     *  Constant: '<S977>/Calib'
     */
    if (KeBTRR_b_HtrSts)
    {
        /* Switch: '<S908>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        Switch_j = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_pb;
    }
    else
    {
        /* Switch: '<S908>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        Switch_j = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gh;
    }

    /* End of Switch: '<S908>/Switch' */

    /* Switch: '<S930>/Switch' incorporates:
     *  Constant: '<S934>/Calib'
     */
    if (KeBTRR_b_LTAP_LoLvl_Diag_SD)
    {
        /* Switch: '<S930>/Switch' incorporates:
         *  Constant: '<S933>/Calib'
         */
        VeBTRR_b_LTAP_Rqt_LoLvDiag_AD = KeBTRR_b_LTAP_LoLvl_Diag_D;
    }
    else
    {
        /* Switch: '<S930>/Switch' */
        VeBTRR_b_LTAP_Rqt_LoLvDiag_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_jj;
    }

    /* End of Switch: '<S930>/Switch' */

    /* Switch: '<S931>/Switch' incorporates:
     *  Constant: '<S938>/Calib'
     */
    if (KeBTRR_b_HV_BTIS_FltDtct_SD)
    {
        /* Switch: '<S931>/Switch' incorporates:
         *  Constant: '<S937>/Calib'
         */
        VeBTRR_b_BTIS_FltDtct_AD = KeBTRR_b_HV_BTIS_FltDtct_D;
    }
    else
    {
        /* Switch: '<S931>/Switch' */
        VeBTRR_b_BTIS_FltDtct_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ab;
    }

    /* End of Switch: '<S931>/Switch' */

    /* Switch: '<S931>/Switch1' incorporates:
     *  Constant: '<S936>/Calib'
     */
    if (KeBTRR_b_HV_BTIS2_FltDtct_SD)
    {
        /* Switch: '<S931>/Switch1' incorporates:
         *  Constant: '<S935>/Calib'
         */
        VeBTRR_b_BTIS2_FltDtct_AD = KeBTRR_b_HV_BTIS2_FltDtct_D;
    }
    else
    {
        /* Switch: '<S931>/Switch1' */
        VeBTRR_b_BTIS2_FltDtct_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b2;
    }

    /* End of Switch: '<S931>/Switch1' */

    /* Switch: '<S931>/Switch2' incorporates:
     *  Constant: '<S940>/Calib'
     */
    if (KeBTRR_b_HV_BTOS2_FltDtct_SD)
    {
        /* Switch: '<S931>/Switch2' incorporates:
         *  Constant: '<S939>/Calib'
         */
        VeBTRR_b_BTOS2_FltDtct_AD = KeBTRR_b_HV_BTOS2_FltDtct_D;
    }
    else
    {
        /* Switch: '<S931>/Switch2' */
        VeBTRR_b_BTOS2_FltDtct_AD = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_bj;
    }

    /* End of Switch: '<S931>/Switch2' */

    /* Switch: '<S932>/Switch' incorporates:
     *  Constant: '<S944>/Calib'
     */
    if (KeBTRR_b_EXV_PressElctrFlt_FltDtct_SD)
    {
        /* Switch: '<S932>/Switch' incorporates:
         *  Constant: '<S943>/Calib'
         */
        VeBTRR_b_EXV_PressElctrFlt_FltDtct_AD =
            KeBTRR_b_EXV_PressElctrFlt_FltDtct_D;
    }
    else
    {
        /* Switch: '<S932>/Switch' */
        VeBTRR_b_EXV_PressElctrFlt_FltDtct_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gj;
    }

    /* End of Switch: '<S932>/Switch' */

    /* Switch: '<S932>/Switch1' incorporates:
     *  Constant: '<S948>/Calib'
     */
    if (KeBTRR_b_EXV_TempElctrFlt_FltDtct_SD)
    {
        /* Switch: '<S932>/Switch1' incorporates:
         *  Constant: '<S947>/Calib'
         */
        VeBTRR_b_EXV_TempElctrFlt_FltDtct_AD =
            KeBTRR_b_EXV_TempElctrFlt_FltDtct_D;
    }
    else
    {
        /* Switch: '<S932>/Switch1' */
        VeBTRR_b_EXV_TempElctrFlt_FltDtct_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_e1;
    }

    /* End of Switch: '<S932>/Switch1' */

    /* Switch: '<S932>/Switch2' incorporates:
     *  Constant: '<S942>/Calib'
     */
    if (KeBTRR_b_EXV_PerfDiag_FltDtct_SD)
    {
        /* Switch: '<S932>/Switch2' incorporates:
         *  Constant: '<S941>/Calib'
         */
        VeBTRR_b_EXV_PerfDiag_FltDtct_AD = KeBTRR_b_EXV_PerfDiag_FltDtct_D;
    }
    else
    {
        /* Switch: '<S932>/Switch2' */
        VeBTRR_b_EXV_PerfDiag_FltDtct_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ls;
    }

    /* End of Switch: '<S932>/Switch2' */

    /* Switch: '<S932>/Switch4' incorporates:
     *  Constant: '<S946>/Calib'
     */
    if (KeBTRR_b_EXV_PressSens_FltDtct_SD)
    {
        /* Switch: '<S932>/Switch4' incorporates:
         *  Constant: '<S945>/Calib'
         */
        VeBTRR_b_EXV_PressSens_FltDtct_AD = KeBTRR_b_EXV_PressSens_FltDtct_D;
    }
    else
    {
        /* Switch: '<S932>/Switch4' */
        VeBTRR_b_EXV_PressSens_FltDtct_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_iv;
    }

    /* End of Switch: '<S932>/Switch4' */

    /* Switch: '<S932>/Switch6' incorporates:
     *  Constant: '<S950>/Calib'
     */
    if (KeBTRR_b_EXV_TempSens_FltDtct_SD)
    {
        /* Switch: '<S932>/Switch6' incorporates:
         *  Constant: '<S949>/Calib'
         */
        VeBTRR_b_EXV_TempSens_FltDtct_AD = KeBTRR_b_EXV_TempSens_FltDtct_D;
    }
    else
    {
        /* Switch: '<S932>/Switch6' */
        VeBTRR_b_EXV_TempSens_FltDtct_AD =
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_je;
    }

    /* End of Switch: '<S932>/Switch6' */

    /* Switch: '<S903>/Switch' incorporates:
     *  Constant: '<S914>/Calib'
     */
    if (KeBTRR_b_BattCPVStuckSt_SD)
    {
        /* Switch: '<S903>/Switch' incorporates:
         *  Constant: '<S916>/Calib'
         */
        VeBTRR_e_BattCPV_StuckSts = KeBTRR_e_BattCPVStuckSt_D;
    }
    else
    {
        /* Switch: '<S903>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_BattCPV_StuckSts = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_iw;
    }

    /* End of Switch: '<S903>/Switch' */

    /* Switch: '<S903>/Switch1' incorporates:
     *  Constant: '<S915>/Calib'
     */
    if (KeBTRR_b_LTCPVStuckSt_SD)
    {
        /* Switch: '<S903>/Switch1' incorporates:
         *  Constant: '<S917>/Calib'
         */
        VeBTRR_e_LTCPV_StuckSts = KeBTRR_e_LTCPVStuckSt_D;
    }
    else
    {
        /* Switch: '<S903>/Switch1' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_e_LTCPV_StuckSts = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_km;
    }

    /* End of Switch: '<S903>/Switch1' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MinMaxAllowTmp'
     */
    /* Sum: '<S793>/Sum2' */
    VeBTRR_dT_CellUnderTempRaw = VeBTRR_T_MinBattAllow -
        TmpSignalConversionAtTmpVM_F_j3;

    /* Switch: '<S794>/Switch1' incorporates:
     *  Constant: '<S794>/ConstantValue2'
     *  RelationalOperator: '<S794>/Comparison1'
     */
    if (VeBTRR_dT_CellUnderTempRaw >= 0.0F)
    {
        /* Switch: '<S794>/Switch1' */
        VeBTRR_dT_CellUnderTemp_BD = VeBTRR_dT_CellUnderTempRaw;
    }
    else
    {
        /* Switch: '<S794>/Switch1' incorporates:
         *  Constant: '<S794>/ConstantValue1'
         */
        VeBTRR_dT_CellUnderTemp_BD = 0.0F;
    }

    /* End of Switch: '<S794>/Switch1' */

    /* Sum: '<S793>/Sum4' */
    VeBTRR_dT_CellUnderTempPassive = VeBTRR_T_MinBattAllowPsv -
        TmpSignalConversionAtTmpVM_F_j3;

    /* Switch: '<S797>/Switch1' incorporates:
     *  Constant: '<S797>/ConstantValue2'
     *  RelationalOperator: '<S797>/Comparison1'
     */
    if (VeBTRR_dT_CellUnderTempPassive >= 0.0F)
    {
        /* Switch: '<S797>/Switch1' */
        VeBTRR_dT_CellUnderTempPassive_BD = VeBTRR_dT_CellUnderTempPassive;
    }
    else
    {
        /* Switch: '<S797>/Switch1' incorporates:
         *  Constant: '<S797>/ConstantValue1'
         */
        VeBTRR_dT_CellUnderTempPassive_BD = 0.0F;
    }

    /* End of Switch: '<S797>/Switch1' */

    /* Sum: '<S793>/Sum3' */
    VeBTRR_dT_CellOverTempRaw = TmpSignalConversionAtTmpVM_F_m4 -
        VeBTRR_T_MaxBattAllow;

    /* Switch: '<S795>/Switch1' incorporates:
     *  Constant: '<S795>/ConstantValue2'
     *  RelationalOperator: '<S795>/Comparison1'
     */
    if (VeBTRR_dT_CellOverTempRaw >= 0.0F)
    {
        /* Switch: '<S795>/Switch1' */
        VeBTRR_dT_CellOverTemp_BD = VeBTRR_dT_CellOverTempRaw;
    }
    else
    {
        /* Switch: '<S795>/Switch1' incorporates:
         *  Constant: '<S795>/ConstantValue1'
         */
        VeBTRR_dT_CellOverTemp_BD = 0.0F;
    }

    /* End of Switch: '<S795>/Switch1' */

    /* Sum: '<S793>/Sum1' */
    VeBTRR_dT_CellOverTempPassive = TmpSignalConversionAtTmpVM_F_m4 -
        VeBTRR_T_MaxBattAllowPsv;

    /* Switch: '<S796>/Switch1' incorporates:
     *  Constant: '<S796>/ConstantValue2'
     *  RelationalOperator: '<S796>/Comparison1'
     */
    if (VeBTRR_dT_CellOverTempPassive >= 0.0F)
    {
        /* Switch: '<S796>/Switch1' */
        VeBTRR_dT_CellOverTempPassive_BD = VeBTRR_dT_CellOverTempPassive;
    }
    else
    {
        /* Switch: '<S796>/Switch1' incorporates:
         *  Constant: '<S796>/ConstantValue1'
         */
        VeBTRR_dT_CellOverTempPassive_BD = 0.0F;
    }

    /* End of Switch: '<S796>/Switch1' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/BattLoop_Requests'
     */
    /* Sum: '<S149>/Sum1' incorporates:
     *  Abs: '<S149>/Abs'
     *  Abs: '<S149>/Abs1'
     *  Constant: '<S149>/Constant1'
     *  Constant: '<S165>/Calib'
     *  Constant: '<S169>/Calib'
     *  Constant: '<S171>/Calib'
     *  Logic: '<S149>/Logical1'
     *  Logic: '<S149>/Logical2'
     *  RelationalOperator: '<S149>/Comparison1'
     *  RelationalOperator: '<S149>/Comparison2'
     *  RelationalOperator: '<S149>/Comparison3'
     *  RelationalOperator: '<S149>/Comparison4'
     *  RelationalOperator: '<S149>/Comparison5'
     *  RelationalOperator: '<S149>/Comparison6'
     *  RelationalOperator: '<S149>/Comparison7'
     *  SignalConversion generated from: '<S149>/VariantSource'
     *  Sum: '<S149>/Sum2'
     *  Switch: '<S149>/Switch'
     *  Switch: '<S164>/Switch1'
     *  Switch: '<S164>/Switch2'
     *  Switch: '<S164>/Switch3'
     *  Switch: '<S164>/Switch4'
     *  Switch: '<S164>/Switch5'
     *  Switch: '<S164>/Switch6'
     *  UnitDelay: '<S164>/UnitDelay'
     */
#if Rte_SysCon_Variant_BTRR_1

    /* Abs: '<S149>/Abs' incorporates:
     *  Constant: '<S165>/Calib'
     */
    VeBTRR_dT_AbsMinTmpDlt = fabsf(KeBTRR_T_BattHeating_MaxTemp -
        TmpSignalConversionAtTmpVM_F_j3);

    /* Abs: '<S149>/Abs1' incorporates:
     *  Constant: '<S165>/Calib'
     */
    VeBTRR_dT_AbsMaxTmpDlt = fabsf(TmpSignalConversionAtTmpVM_F_m4 -
        KeBTRR_T_BattHeating_MaxTemp);
    if (VeBTRR_dT_AbsMinTmpDlt == VeBTRR_dT_AbsMaxTmpDlt)
    {
        /* Switch: '<S164>/Switch6' */
        rtb_Switch6 = KeBTRR_T_BattHeating_MaxTemp;
    }
    else
    {
        /* Switch: '<S164>/Switch6' */
        rtb_Switch6 = BTRR_ac_DW.UnitDelay_DSTATE;
    }

    if (TmpSignalConversionAtTmpVM_F_m4 < KeBTRR_T_BattHeating_MaxTemp)
    {
        /* Switch: '<S164>/Switch1' */
        VeBTRR_T_BattDispTmp = TmpSignalConversionAtTmpVM_F_j3;
    }
    else if (TmpSignalConversionAtTmpVM_F_j3 >= KeBTRR_T_BattHeating_MaxTemp)
    {
        /* Switch: '<S164>/Switch2' incorporates:
         *  Switch: '<S164>/Switch1'
         */
        VeBTRR_T_BattDispTmp = TmpSignalConversionAtTmpVM_F_m4;
    }
    else if ((VeBTRR_dT_AbsMinTmpDlt > KeBTRR_T_BattTmpDeltaThrshld) ||
             (VeBTRR_dT_AbsMaxTmpDlt > KeBTRR_T_BattTmpDeltaThrshld))
    {
        /* Switch: '<S164>/Switch3' incorporates:
         *  Constant: '<S170>/Calib'
         *  Switch: '<S164>/Switch1'
         *  Switch: '<S164>/Switch2'
         */
        VeBTRR_T_BattDispTmp = KeBTRR_T_BattTempDisp_SNA;
    }
    else if (VeBTRR_dT_AbsMinTmpDlt > VeBTRR_dT_AbsMaxTmpDlt)
    {
        /* Switch: '<S164>/Switch4' incorporates:
         *  Switch: '<S164>/Switch1'
         *  Switch: '<S164>/Switch2'
         *  Switch: '<S164>/Switch3'
         */
        VeBTRR_T_BattDispTmp = TmpSignalConversionAtTmpVM_F_j3;
    }
    else if (VeBTRR_dT_AbsMinTmpDlt < VeBTRR_dT_AbsMaxTmpDlt)
    {
        /* Switch: '<S164>/Switch5' incorporates:
         *  Switch: '<S164>/Switch1'
         *  Switch: '<S164>/Switch2'
         *  Switch: '<S164>/Switch3'
         *  Switch: '<S164>/Switch4'
         */
        VeBTRR_T_BattDispTmp = TmpSignalConversionAtTmpVM_F_m4;
    }
    else
    {
        /* Switch: '<S164>/Switch1' incorporates:
         *  Switch: '<S164>/Switch2'
         *  Switch: '<S164>/Switch3'
         *  Switch: '<S164>/Switch4'
         *  Switch: '<S164>/Switch5'
         */
        VeBTRR_T_BattDispTmp = rtb_Switch6;
    }

    if (TmpSignalConversionAtTmpVM_F_pq ||
            (BTRR_ac_B.VM_Conditional_Signal_TmpVM__bn))
    {
        /* Switch: '<S666>/Switch1' incorporates:
         *  Constant: '<S170>/Calib'
         */
        rtb_Switch1_ln = KeBTRR_T_BattTempDisp_SNA;
    }
    else
    {
        /* Switch: '<S666>/Switch1' */
        rtb_Switch1_ln = VeBTRR_T_BattDispTmp;
    }

#else

    /* Switch: '<S666>/Switch1' incorporates:
     *  Constant: '<S149>/Constant5'
     *  SignalConversion generated from: '<S149>/VariantSource'
     */
    rtb_Switch1_ln = 0.0F;
    BTRR_ac_B.Calib_lh = 0.0F;

#endif

    /* End of Sum: '<S149>/Sum1' */

    /* SignalConversion generated from: '<S149>/VariantSource' */
    VeBTRR_T_BattDisplayTemp_BD = rtb_Switch1_ln;

    /* SignalConversion generated from: '<S149>/VariantSource1' incorporates:
     *  Constant: '<S149>/Constant2'
     *  Constant: '<S149>/Constant4'
     *  Constant: '<S167>/Calib'
     */
#if Rte_SysCon_Variant_BTRR_1

    BTRR_ac_B.Constant4 = KeBTRR_T_BattHighTmp_Thrshld;

    /* VariantMerge generated from: '<S149>/VariantSource1' incorporates:
     *  Constant: '<S149>/Constant4'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Source = BTRR_ac_B.Constant4;

#else

    /* VariantMerge generated from: '<S149>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource1'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Source = BTRR_ac_B.Calib_lh;
    BTRR_ac_B.Constant4 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S149>/VariantSource1' */

    /* SignalConversion generated from: '<S149>/VariantSource2' incorporates:
     *  Constant: '<S149>/Constant3'
     *  Constant: '<S149>/Constant4'
     *  Constant: '<S166>/Calib'
     *  Constant: '<S168>/Calib'
     *  Constant: '<S169>/Calib'
     *  SignalConversion generated from: '<S149>/VariantSource3'
     */
#if Rte_SysCon_Variant_BTRR_1

    BTRR_ac_B.Calib_lh = KeBTRR_T_BattLowTmp_Thrshld;

    /* VariantMerge generated from: '<S149>/VariantSource2' incorporates:
     *  Constant: '<S169>/Calib'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_h = BTRR_ac_B.Calib_lh;
    BTRR_ac_B.Calib_lh = KeBTRR_T_BattHeating_Thrshld;

    /* VariantMerge generated from: '<S149>/VariantSource3' incorporates:
     *  Constant: '<S169>/Calib'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_g = BTRR_ac_B.Calib_lh;

#else

    /* VariantMerge generated from: '<S149>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource2'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_h = BTRR_ac_B.Constant4;
    BTRR_ac_B.Constant4 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S149>/VariantSource2' */

    /* SignalConversion generated from: '<S149>/VariantSource4' incorporates:
     *  Constant: '<S149>/Constant4'
     *  Constant: '<S169>/Calib'
     *  SignalConversion generated from: '<S149>/VariantSource3'
     */
#if Rte_SysCon_Variant_BTRR_1

    BTRR_ac_B.Calib_lh = KeBTRR_T_BattPwrDerate_TmpThrshld;

    /* VariantMerge generated from: '<S149>/VariantSource4' incorporates:
     *  Constant: '<S169>/Calib'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_a = BTRR_ac_B.Calib_lh;

#else

    /* VariantMerge generated from: '<S149>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource3'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_g = BTRR_ac_B.Constant4;
    BTRR_ac_B.Constant4 = 0.0F;

    /* VariantMerge generated from: '<S149>/VariantSource4' incorporates:
     *  Constant: '<S149>/Constant4'
     *  SignalConversion generated from: '<S149>/VariantSource4'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_a = BTRR_ac_B.Constant4;

#endif

    /* End of SignalConversion generated from: '<S149>/VariantSource4' */

    /* Outputs for Atomic SubSystem: '<S603>/Hysteresis3' */
    /* Switch: '<S616>/Switch1' incorporates:
     *  Constant: '<S567>/Calib'
     *  RelationalOperator: '<S616>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatTmpOoR_HotHgh)
    {
        /* Switch: '<S616>/Switch1' incorporates:
         *  Constant: '<S616>/ConstantValue'
         */
        rtb_LogicalOperator_kx = true;
    }
    else
    {
        /* Switch: '<S616>/Switch1' incorporates:
         *  Constant: '<S568>/Calib'
         *  RelationalOperator: '<S616>/GreaterThan1'
         *  UnitDelay: '<S616>/UnitDelay'
         */
        rtb_LogicalOperator_kx = ((TmpSignalConversionAtTmpVM_F_m4 >=
            KeBTRR_T_BatTmpOoR_HotLow) && (BTRR_ac_DW.UnitDelay_DSTATE_le));
    }

    /* End of Switch: '<S616>/Switch1' */

    /* Update for UnitDelay: '<S616>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_le = rtb_LogicalOperator_kx;

    /* End of Outputs for SubSystem: '<S603>/Hysteresis3' */

    /* Outputs for Atomic SubSystem: '<S603>/Hysteresis1' */
    /* Switch: '<S614>/Switch1' incorporates:
     *  Constant: '<S565>/Calib'
     *  RelationalOperator: '<S614>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 > KeBTRR_T_BatTmpOoR_ColdHgh)
    {
        /* Switch: '<S614>/Switch1' incorporates:
         *  Constant: '<S614>/ConstantValue'
         */
        rtb_VariantMerge_For_Variant_So = true;
    }
    else
    {
        /* Switch: '<S614>/Switch1' incorporates:
         *  Constant: '<S566>/Calib'
         *  RelationalOperator: '<S614>/GreaterThan1'
         *  UnitDelay: '<S614>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_So = ((TmpSignalConversionAtTmpVM_F_j3 >=
            KeBTRR_T_BatTmpOoR_ColdLw) && (BTRR_ac_DW.UnitDelay_DSTATE_fd));
    }

    /* End of Switch: '<S614>/Switch1' */

    /* Update for UnitDelay: '<S614>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_fd = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S603>/Hysteresis1' */

    /* Logic: '<S603>/Logical2' incorporates:
     *  Logic: '<S603>/Logical6'
     */
    VeBTRR_b_Bat_OofR_NoRecovery = (rtb_LogicalOperator_kx ||
        (!rtb_VariantMerge_For_Variant_So));

    /* RelationalOperator: '<S672>/Comparison1' incorporates:
     *  RelationalOperator: '<S672>/Comparison2'
     *  RelationalOperator: '<S672>/Comparison3'
     *  RelationalOperator: '<S672>/Comparison4'
     *  RelationalOperator: '<S672>/Comparison5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    VeBTRR_b_VhclPlgdIn_B4D_tmp = BTRR_ac_B.TmpSignalConversionAtTmpVM__nlu;

    /* Logic: '<S672>/Logical3' incorporates:
     *  Constant: '<S722>/Constant'
     *  Constant: '<S723>/Constant'
     *  Constant: '<S724>/Constant'
     *  Constant: '<S725>/Constant'
     *  Constant: '<S726>/Constant'
     *  RelationalOperator: '<S672>/Comparison1'
     *  RelationalOperator: '<S672>/Comparison2'
     *  RelationalOperator: '<S672>/Comparison3'
     *  RelationalOperator: '<S672>/Comparison4'
     *  RelationalOperator: '<S672>/Comparison5'
     */
    VeBTRR_b_VhclPlgdIn_B4D = (((((((uint32)VeBTRR_b_VhclPlgdIn_B4D_tmp) ==
        CeOBCR_e_ChargingLvlAC1) || (((uint32)VeBTRR_b_VhclPlgdIn_B4D_tmp) ==
        CeOBCR_e_ChargingLvlAC2)) || (((uint32)VeBTRR_b_VhclPlgdIn_B4D_tmp) ==
        CeOBCR_e_ChargingLvlAC3)) || (((uint32)VeBTRR_b_VhclPlgdIn_B4D_tmp) ==
        CeOBCR_e_ChargingLvlDC1)) || (((uint32)VeBTRR_b_VhclPlgdIn_B4D_tmp) ==
        CeOBCR_e_ChargingLvlDC2));

    /* Switch: '<S518>/Switch1' incorporates:
     *  Constant: '<S160>/Constant'
     *  RelationalOperator: '<S145>/Comparison8'
     *  Switch: '<S997>/Switch'
     */
    rtb_VariantMerge_For_Variant_So = (((uint32)VeBTRR_e_HybSysState) ==
        CeHPMR_e_OPERATIONAL_ALTERNATOR);

    /* Outputs for Atomic SubSystem: '<S603>/Hysteresis4' */
    /* Switch: '<S617>/Switch1' incorporates:
     *  Constant: '<S563>/Calib'
     *  RelationalOperator: '<S617>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatTmpHys_HotRgHgh)
    {
        /* Switch: '<S617>/Switch1' incorporates:
         *  Constant: '<S617>/ConstantValue'
         */
        rtb_LogicalOperator_kx = true;
    }
    else
    {
        /* Switch: '<S617>/Switch1' incorporates:
         *  Constant: '<S564>/Calib'
         *  RelationalOperator: '<S617>/GreaterThan1'
         *  UnitDelay: '<S617>/UnitDelay'
         */
        rtb_LogicalOperator_kx = ((TmpSignalConversionAtTmpVM_F_m4 >=
            KeBTRR_T_BatTmpHys_HotRgLow) && (BTRR_ac_DW.UnitDelay_DSTATE_et));
    }

    /* End of Switch: '<S617>/Switch1' */

    /* Update for UnitDelay: '<S617>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_et = rtb_LogicalOperator_kx;

    /* End of Outputs for SubSystem: '<S603>/Hysteresis4' */

    /* Outputs for Atomic SubSystem: '<S603>/Hysteresis2' */
    /* Switch: '<S615>/Switch1' incorporates:
     *  RelationalOperator: '<S615>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 > TmpSignalConversionAtTmpVM_Fc_c)
    {
        /* Switch: '<S615>/Switch1' incorporates:
         *  Constant: '<S615>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S615>/Switch1' incorporates:
         *  RelationalOperator: '<S615>/GreaterThan1'
         *  UnitDelay: '<S615>/UnitDelay'
         */
        rtb_Switch1_bl = ((TmpSignalConversionAtTmpVM_F_j3 >=
                           TmpSignalConversionAtTmpVM_Fc_p) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_fw));
    }

    /* End of Switch: '<S615>/Switch1' */

    /* Update for UnitDelay: '<S615>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_fw = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S603>/Hysteresis2' */

    /* Logic: '<S603>/Logical10' incorporates:
     *  Logic: '<S669>/Logical6'
     *  Logic: '<S671>/LogicalOperator12'
     */
    rtb_LogicalOperator_bx_tmp = !VeBTRR_b_VhclPlgdIn_B4D;

    /* Logic: '<S603>/Logical3' incorporates:
     *  Constant: '<S618>/Calib'
     *  Constant: '<S621>/Calib'
     *  Logic: '<S603>/Logical10'
     *  Logic: '<S603>/Logical11'
     *  Logic: '<S603>/Logical12'
     *  Logic: '<S603>/Logical4'
     *  Logic: '<S603>/Logical7'
     */
    rtb_LogicalOperator_kx = (((((!rtb_VariantMerge_For_Variant_So) ||
        (KeBTRR_b_Dsbl_AlternatorMd)) && rtb_LogicalOperator_bx_tmp) &&
        (rtb_LogicalOperator_kx || (!rtb_Switch1_bl))) &&
        (KeBTRR_b_Enbl_OORNoPlug));

    /* Logic: '<S603>/Logical5' incorporates:
     *  Constant: '<S619>/Calib'
     *  Constant: '<S620>/Calib'
     *  Logic: '<S603>/Logical1'
     *  Logic: '<S603>/Logical13'
     *  Logic: '<S603>/Logical14'
     */
    VeBTRR_b_BatTmpOut_OfRng = (((VeBTRR_b_Bat_OofR_NoRecovery) &&
        (((VeBTRR_b_VhclPlgdIn_B4D) || (rtb_VariantMerge_For_Variant_So &&
        (KeBTRR_b_Enbl_AlternatorMd_OOR))) || (KeBTRR_b_Dsbl_PlugAltMd_OOR))) ||
        rtb_LogicalOperator_kx);

    /* Outputs for Atomic SubSystem: '<S605>/Hysteresis3' */
    /* Switch: '<S627>/Switch1' incorporates:
     *  Constant: '<S561>/Calib'
     *  RelationalOperator: '<S627>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatTmpHot_RgHgh)
    {
        /* Switch: '<S627>/Switch1' incorporates:
         *  Constant: '<S627>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S627>/Switch1' incorporates:
         *  Constant: '<S562>/Calib'
         *  RelationalOperator: '<S627>/GreaterThan1'
         *  UnitDelay: '<S627>/UnitDelay'
         */
        rtb_Switch1_bl = ((TmpSignalConversionAtTmpVM_F_m4 >=
                           KeBTRR_T_BatTmpHot_RgLw) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_gq));
    }

    /* End of Switch: '<S627>/Switch1' */

    /* Update for UnitDelay: '<S627>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_gq = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S605>/Hysteresis3' */

    /* Outputs for Atomic SubSystem: '<S605>/Hysteresis2' */
    /* Switch: '<S626>/Switch1' incorporates:
     *  Merge: '<Root>/BatTmpCold_RgHgh_D_IRV_Merge'
     *  RelationalOperator: '<S626>/GreaterThan'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 >
            Rte_IrvRead_BTRR_MedTEH_BatTmpCold_RgHgh_D_write_IRV())
    {
        /* Switch: '<S626>/Switch1' incorporates:
         *  Constant: '<S626>/ConstantValue'
         */
        rtb_Switch1_pz = true;
    }
    else
    {
        /* Switch: '<S626>/Switch1' incorporates:
         *  Merge: '<Root>/BatTmpCold_RgLw_D_IRV_Merge'
         *  RelationalOperator: '<S626>/GreaterThan1'
         *  UnitDelay: '<S626>/UnitDelay'
         */
        rtb_Switch1_pz = ((TmpSignalConversionAtTmpVM_F_j3 >=
                           Rte_IrvRead_BTRR_MedTEH_BatTmpCold_RgLw_D_write_IRV())
                          && (BTRR_ac_DW.UnitDelay_DSTATE_oe));
    }

    /* End of Switch: '<S626>/Switch1' */

    /* Update for UnitDelay: '<S626>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_oe = rtb_Switch1_pz;

    /* End of Outputs for SubSystem: '<S605>/Hysteresis2' */

    /* Logic: '<S605>/Logical5' incorporates:
     *  Logic: '<S605>/Logical1'
     */
    VeBTRR_b_BatTmpNormal_Rng = ((!rtb_Switch1_bl) && rtb_Switch1_pz);

    /* Outputs for Atomic SubSystem: '<S604>/Hysteresis1' */
    /* Switch: '<S622>/Switch1' incorporates:
     *  Constant: '<S565>/Calib'
     *  RelationalOperator: '<S622>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 > KeBTRR_T_BatTmpOoR_ColdHgh)
    {
        /* Switch: '<S622>/Switch1' incorporates:
         *  Constant: '<S622>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S622>/Switch1' incorporates:
         *  Constant: '<S566>/Calib'
         *  RelationalOperator: '<S622>/GreaterThan1'
         *  UnitDelay: '<S622>/UnitDelay'
         */
        rtb_Switch1_bl = ((TmpSignalConversionAtTmpVM_F_j3 >=
                           KeBTRR_T_BatTmpOoR_ColdLw) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_hv));
    }

    /* End of Switch: '<S622>/Switch1' */

    /* Update for UnitDelay: '<S622>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_hv = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S604>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S604>/Hysteresis2' */
    /* Switch: '<S623>/Switch1' incorporates:
     *  RelationalOperator: '<S623>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 > TmpSignalConversionAtTmpVM_Fc_c)
    {
        /* Switch: '<S623>/Switch1' incorporates:
         *  Constant: '<S623>/ConstantValue'
         */
        rtb_Switch1_pz = true;
    }
    else
    {
        /* Switch: '<S623>/Switch1' incorporates:
         *  RelationalOperator: '<S623>/GreaterThan1'
         *  UnitDelay: '<S623>/UnitDelay'
         */
        rtb_Switch1_pz = ((TmpSignalConversionAtTmpVM_F_j3 >=
                           TmpSignalConversionAtTmpVM_Fc_p) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_lw));
    }

    /* End of Switch: '<S623>/Switch1' */

    /* Update for UnitDelay: '<S623>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_lw = rtb_Switch1_pz;

    /* End of Outputs for SubSystem: '<S604>/Hysteresis2' */

    /* Logic: '<S604>/Logical1' incorporates:
     *  Constant: '<S625>/Calib'
     *  Logic: '<S602>/Logical2'
     *  Logic: '<S604>/Logical3'
     */
    rtb_VariantMerge_For_Variant_So = ((rtb_VariantMerge_For_Variant_So &&
        (KeBTRR_b_Enbl_AlternatorMd)) || (VeBTRR_b_VhclPlgdIn_B4D));

    /* Logic: '<S604>/Logical5' incorporates:
     *  Constant: '<S624>/Calib'
     *  Logic: '<S604>/Logical1'
     *  Logic: '<S604>/Logical2'
     */
    VeBTRR_b_BatTmpCold_Rng = (((rtb_VariantMerge_For_Variant_So ||
        (KeBTRR_b_Dsbl_PlugAltMd_ColdRng)) && rtb_Switch1_bl) &&
        (!rtb_Switch1_pz));

    /* Outputs for Atomic SubSystem: '<S602>/Hysteresis1' */
    /* Switch: '<S610>/Switch1' incorporates:
     *  Constant: '<S568>/Calib'
     *  RelationalOperator: '<S610>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatTmpOoR_HotLow)
    {
        /* Switch: '<S610>/Switch1' incorporates:
         *  Constant: '<S610>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S610>/Switch1' incorporates:
         *  Constant: '<S567>/Calib'
         *  RelationalOperator: '<S610>/GreaterThan1'
         *  UnitDelay: '<S610>/UnitDelay'
         */
        rtb_Switch1_bl = ((TmpSignalConversionAtTmpVM_F_m4 >=
                           KeBTRR_T_BatTmpOoR_HotHgh) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_nf));
    }

    /* End of Switch: '<S610>/Switch1' */

    /* Update for UnitDelay: '<S610>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_nf = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S602>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S602>/Hysteresis2' */
    /* Switch: '<S611>/Switch1' incorporates:
     *  Constant: '<S564>/Calib'
     *  RelationalOperator: '<S611>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatTmpHys_HotRgLow)
    {
        /* Switch: '<S611>/Switch1' incorporates:
         *  Constant: '<S611>/ConstantValue'
         */
        rtb_Switch1_pz = true;
    }
    else
    {
        /* Switch: '<S611>/Switch1' incorporates:
         *  Constant: '<S563>/Calib'
         *  RelationalOperator: '<S611>/GreaterThan1'
         *  UnitDelay: '<S611>/UnitDelay'
         */
        rtb_Switch1_pz = ((TmpSignalConversionAtTmpVM_F_m4 >=
                           KeBTRR_T_BatTmpHys_HotRgHgh) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_fz));
    }

    /* End of Switch: '<S611>/Switch1' */

    /* Update for UnitDelay: '<S611>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_fz = rtb_Switch1_pz;

    /* End of Outputs for SubSystem: '<S602>/Hysteresis2' */

    /* Logic: '<S602>/Logical5' incorporates:
     *  Constant: '<S612>/Calib'
     *  Logic: '<S602>/Logical1'
     *  Logic: '<S602>/Logical2'
     */
    VeBTRR_b_BatTmpHot_Rng = (((rtb_VariantMerge_For_Variant_So ||
        (KeBTRR_b_Dsbl_PlugAltMd_HotRng)) && (!rtb_Switch1_bl)) &&
        rtb_Switch1_pz);

    /* Outputs for Atomic SubSystem: '<S601>/Hysteresis2' */
    /* Switch: '<S608>/Switch1' incorporates:
     *  Constant: '<S562>/Calib'
     *  RelationalOperator: '<S608>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatTmpHot_RgLw)
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S608>/ConstantValue'
         */
        rtb_VariantMerge_For_Variant_So = true;
    }
    else
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S561>/Calib'
         *  RelationalOperator: '<S608>/GreaterThan1'
         *  UnitDelay: '<S608>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_So = ((TmpSignalConversionAtTmpVM_F_m4 >=
            KeBTRR_T_BatTmpHot_RgHgh) && (BTRR_ac_DW.UnitDelay_DSTATE_la));
    }

    /* End of Switch: '<S608>/Switch1' */

    /* Update for UnitDelay: '<S608>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_la = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S601>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S601>/Hysteresis3' */
    /* Switch: '<S609>/Switch1' incorporates:
     *  Constant: '<S564>/Calib'
     *  RelationalOperator: '<S609>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatTmpHys_HotRgLow)
    {
        /* Switch: '<S609>/Switch1' incorporates:
         *  Constant: '<S609>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S609>/Switch1' incorporates:
         *  Constant: '<S563>/Calib'
         *  RelationalOperator: '<S609>/GreaterThan1'
         *  UnitDelay: '<S609>/UnitDelay'
         */
        rtb_Switch1_bl = ((TmpSignalConversionAtTmpVM_F_m4 >=
                           KeBTRR_T_BatTmpHys_HotRgHgh) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_dg));
    }

    /* End of Switch: '<S609>/Switch1' */

    /* Update for UnitDelay: '<S609>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_dg = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S601>/Hysteresis3' */

    /* Logic: '<S601>/Logical1' incorporates:
     *  Logic: '<S601>/Logical2'
     */
    VeBTRR_b_BatTmpHys_HotRng = (rtb_VariantMerge_For_Variant_So &&
        (!rtb_Switch1_bl));

    /* Switch: '<S607>/Switch6' incorporates:
     *  Merge: '<Root>/HVBR_Ovrd_Req_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     *  Switch: '<S607>/Switch1'
     *  Switch: '<S607>/Switch2'
     *  Switch: '<S607>/Switch3'
     *  Switch: '<S607>/Switch4'
     *  Switch: '<S607>/Switch5'
     */
    if (VeBTRR_b_BatTmpOut_OfRng)
    {
        /* Switch: '<S607>/Switch6' incorporates:
         *  Constant: '<S640>/Constant'
         */
        VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpOutOfRng;
    }
    else if (VeBTRR_b_BatTmpNormal_Rng)
    {
        /* Switch: '<S607>/Switch5' incorporates:
         *  Constant: '<S641>/Constant'
         *  Switch: '<S607>/Switch6'
         */
        VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpNormalRng;
    }
    else if (VeBTRR_b_BatTmpCold_Rng)
    {
        /* Switch: '<S607>/Switch4' incorporates:
         *  Constant: '<S642>/Constant'
         *  Switch: '<S607>/Switch5'
         *  Switch: '<S607>/Switch6'
         */
        VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpColdRng;
    }
    else if (Rte_IrvRead_BTRR_MedTEH_HVBR_Ovrd_Req_write_IRV())
    {
        /* Switch: '<S607>/Switch1' incorporates:
         *  Constant: '<S643>/Constant'
         *  Switch: '<S607>/Switch4'
         *  Switch: '<S607>/Switch5'
         *  Switch: '<S607>/Switch6'
         */
        VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpHysColdRng;
    }
    else if (VeBTRR_b_BatTmpHot_Rng)
    {
        /* Switch: '<S607>/Switch2' incorporates:
         *  Constant: '<S644>/Constant'
         *  Switch: '<S607>/Switch1'
         *  Switch: '<S607>/Switch4'
         *  Switch: '<S607>/Switch5'
         *  Switch: '<S607>/Switch6'
         */
        VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpHotRng;
    }
    else if (VeBTRR_b_BatTmpHys_HotRng)
    {
        /* Switch: '<S607>/Switch3' incorporates:
         *  Constant: '<S645>/Constant'
         *  Switch: '<S607>/Switch1'
         *  Switch: '<S607>/Switch2'
         *  Switch: '<S607>/Switch4'
         *  Switch: '<S607>/Switch5'
         *  Switch: '<S607>/Switch6'
         */
        VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpHysHotRng;
    }
    else
    {
        /* Switch: '<S607>/Switch6' incorporates:
         *  Constant: '<S646>/Constant'
         *  Switch: '<S607>/Switch1'
         *  Switch: '<S607>/Switch2'
         *  Switch: '<S607>/Switch3'
         *  Switch: '<S607>/Switch4'
         *  Switch: '<S607>/Switch5'
         */
        VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpDfltRng;
    }

    /* End of Switch: '<S607>/Switch6' */

    /* Logic: '<S582>/Logical2' incorporates:
     *  Logic: '<S583>/Logical3'
     *  Logic: '<S594>/Logical2'
     */
    rtb_Switch1_bl = !VeBTRR_b_HV_BatRdy_True_AD;

    /* Logic: '<S582>/Logical5' incorporates:
     *  Constant: '<S595>/Constant'
     *  Constant: '<S596>/Constant'
     *  Constant: '<S597>/Constant'
     *  Logic: '<S582>/Logical1'
     *  Logic: '<S582>/Logical2'
     *  RelationalOperator: '<S582>/Comparison4'
     *  RelationalOperator: '<S582>/Comparison5'
     *  RelationalOperator: '<S582>/Comparison7'
     *  Switch: '<S607>/Switch6'
     */
    VeBTRR_b_BatCritCond_ToState = (((VeBTRR_b_HVBR_UsgEnb) &&
        (((CeBTRR_e_BatTmpHysColdRng == ((uint32)VeBTRR_e_HV_BatTmpRng_B4D)) ||
          (((uint32)VeBTRR_e_HV_BatTmpRng_B4D) == CeBTRR_e_BatTmpColdRng)) ||
         (((uint32)VeBTRR_e_HV_BatTmpRng_B4D) == CeBTRR_e_BatTmpHotRng))) &&
        rtb_Switch1_bl);

    /* Logic: '<S583>/Logical8' incorporates:
     *  Logic: '<S671>/LogicalOperator3'
     */
    VeBTRR_b_BatMargCond_ToState_tm = ((VeBTRR_b_BattOvrVltg_AD) &&
        rtb_Switch1_bl);

    /* Logic: '<S583>/Logical7' incorporates:
     *  Logic: '<S583>/Logical2'
     *  Logic: '<S583>/Logical6'
     *  Logic: '<S583>/Logical8'
     *  Logic: '<S593>/Logical7'
     */
    rtb_VariantMerge_For_Variant_So = (((VeBTRR_b_HV_BatRdy_True_AD) &&
        (!VeBTRR_b_BattOvrVltg_AD)) || VeBTRR_b_BatMargCond_ToState_tm);

    /* Logic: '<S583>/Logical1' incorporates:
     *  Constant: '<S598>/Constant'
     *  Logic: '<S583>/Logical7'
     *  RelationalOperator: '<S583>/Comparison2'
     *  Switch: '<S607>/Switch6'
     */
    VeBTRR_b_BatMargCond_ToState = (((VeBTRR_b_HVBR_UsgEnb) && (((uint32)
        VeBTRR_e_HV_BatTmpRng_B4D) == CeBTRR_e_BatTmpHysHotRng)) &&
        rtb_VariantMerge_For_Variant_So);

    /* Logic: '<S593>/Logical1' incorporates:
     *  Constant: '<S599>/Constant'
     *  RelationalOperator: '<S593>/Comparison2'
     *  Switch: '<S607>/Switch6'
     */
    VeBTRR_b_NotCritical_ToState = (((VeBTRR_b_HVBR_UsgEnb) && (((uint32)
        VeBTRR_e_HV_BatTmpRng_B4D) == CeBTRR_e_BatTmpNormalRng)) &&
        rtb_VariantMerge_For_Variant_So);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Overrides_100ms'
     */
    /* RelationalOperator: '<S594>/Comparison2' incorporates:
     *  Switch: '<S607>/Switch6'
     *  Switch: '<S824>/Switch1'
     */
    VeBTRR_b_BatCritCond_ToState_tm = VeBTRR_e_HV_BatTmpRng_B4D;

    /* Logic: '<S594>/Logical1' incorporates:
     *  Constant: '<S600>/Constant'
     *  RelationalOperator: '<S594>/Comparison2'
     *  Switch: '<S607>/Switch6'
     */
    VeBTRR_b_OutOfRange_ToState = (((VeBTRR_b_HVBR_UsgEnb) && (((uint32)
        VeBTRR_e_HV_BatTmpRng_B4D) == CeBTRR_e_BatTmpOutOfRng)) &&
        rtb_Switch1_bl);

    /* Switch: '<S591>/Switch1' incorporates:
     *  Switch: '<S589>/Switch1'
     *  Switch: '<S590>/Switch1'
     *  Switch: '<S592>/Switch1'
     */
    if (VeBTRR_b_BatCritCond_ToState)
    {
        /* Switch: '<S591>/Switch1' incorporates:
         *  Constant: '<S584>/Constant'
         */
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD = CeBTRR_e_BatCrit;
    }
    else if (VeBTRR_b_BatMargCond_ToState)
    {
        /* Switch: '<S589>/Switch1' incorporates:
         *  Constant: '<S585>/Constant'
         *  Switch: '<S591>/Switch1'
         */
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD = CeBTRR_e_BatMarginal;
    }
    else if (VeBTRR_b_NotCritical_ToState)
    {
        /* Switch: '<S590>/Switch1' incorporates:
         *  Constant: '<S586>/Constant'
         *  Switch: '<S589>/Switch1'
         *  Switch: '<S591>/Switch1'
         */
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD = CeBTRR_e_BatNotCrit;
    }
    else if (VeBTRR_b_OutOfRange_ToState)
    {
        /* Switch: '<S592>/Switch1' incorporates:
         *  Constant: '<S587>/Constant'
         *  Switch: '<S589>/Switch1'
         *  Switch: '<S590>/Switch1'
         *  Switch: '<S591>/Switch1'
         */
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD = CeBTRR_e_BatOutOfRng;
    }
    else
    {
        /* Switch: '<S591>/Switch1' incorporates:
         *  Constant: '<S588>/Constant'
         *  Switch: '<S589>/Switch1'
         *  Switch: '<S590>/Switch1'
         *  Switch: '<S592>/Switch1'
         */
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD = CeBTRR_e_BatCritErrSt;
    }

    /* End of Switch: '<S591>/Switch1' */

    /* Switch: '<S150>/Switch1' incorporates:
     *  Constant: '<S173>/Calib'
     */
    if (KeBTRR_b_BaTmpNot_Opt_SD)
    {
        /* Switch: '<S150>/Switch1' incorporates:
         *  Constant: '<S150>/ConstantValue1'
         *  Constant: '<S172>/Constant'
         *  Logic: '<S150>/Logical1'
         *  Logic: '<S150>/Logical2'
         *  RelationalOperator: '<S150>/Comparison2'
         *  RelationalOperator: '<S150>/Comparison3'
         *  RelationalOperator: '<S150>/Comparison4'
         *  Switch: '<S591>/Switch1'
         */
        VeBTRR_b_BattTempNot_Optml_B4D = (((VeBTRR_dT_CellUnderTemp_BD > 0.0F) ||
            (0.0F < VeBTRR_dT_CellOverTemp_BD)) && (((uint32)
            VeBTRR_e_HV_BatTempCrit_CondState_New_BD) == CeBTRR_e_BatNotCrit));
    }
    else
    {
        /* Switch: '<S150>/Switch1' incorporates:
         *  Constant: '<S174>/Calib'
         */
        VeBTRR_b_BattTempNot_Optml_B4D = KeBTRR_b_BattTempNot_Optml;
    }

    /* End of Switch: '<S150>/Switch1' */

    /* Logic: '<S151>/Logical6' */
    rtb_VariantMerge_For_Variant_So = !VeBTRR_b_LTAPOff_AD;

    /* If: '<S151>/If' incorporates:
     *  Constant: '<S182>/Calib'
     *  Constant: '<S183>/Calib'
     *  Constant: '<S184>/Calib'
     *  Constant: '<S185>/Calib'
     */
    if (KeBTRR_b_Enbl_BTISRA_BEV)
    {
        /* Outputs for IfAction SubSystem: '<S151>/BTIS_FA_RA_BEV' incorporates:
         *  ActionPort: '<S175>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S175>/EdgeRising' */
        /* Logic: '<S189>/AND' incorporates:
         *  Logic: '<S189>/OR1'
         *  UnitDelay: '<S189>/UnitDelay'
         */
        rtb_Switch1_bl = (rtb_VariantMerge_For_Variant_So &&
                          (!BTRR_ac_DW.UnitDelay_DSTATE_dh));

        /* Update for UnitDelay: '<S189>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_dh = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S175>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S175>/SignalLatchOnWithReset' */
        /* Logic: '<S199>/OR1' incorporates:
         *  Logic: '<S175>/Logical'
         *  Logic: '<S175>/Logical4'
         *  Logic: '<S175>/Logical5'
         *  Logic: '<S175>/Logical6'
         *  Logic: '<S199>/NOT'
         *  Logic: '<S199>/OR'
         *  UnitDelay: '<S199>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtch_BEV = (((VeBTRR_b_BTIS_FltDtct_AD) && rtb_Switch1_bl)
            || ((rtb_VariantMerge_For_Variant_So && (VeBTRR_b_BTIS_FltDtct_AD)) &&
                (BTRR_ac_DW.UnitDelay_DSTATE_aip)));

        /* Update for UnitDelay: '<S199>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_aip = VeBTRR_b_LTAPOnLtch_BEV;

        /* End of Outputs for SubSystem: '<S175>/SignalLatchOnWithReset' */

        /* Outputs for Atomic SubSystem: '<S175>/CountDownResetEnabled' */
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S186>/ConstantValue'
         *  Logic: '<S175>/Logical7'
         *  Logic: '<S186>/AND'
         *  RelationalOperator: '<S186>/GreaterThan'
         *  Switch: '<S186>/Switch2'
         *  UnitDelay: '<S186>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtch_BEV)
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S195>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOn_B4SwToBHOS;
        }
        else if ((VeBTRR_b_LTAPOnLtch_BEV) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_ou) > 0))
        {
            /* Switch: '<S186>/Switch2' incorporates:
             *  Constant: '<S186>/ConstantValue1'
             *  Sum: '<S186>/Subtraction'
             *  Switch: '<S186>/Switch1'
             *  UnitDelay: '<S186>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_ou) - 1));
        }
        else
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Switch: '<S186>/Switch2'
             *  UnitDelay: '<S186>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_ou;
        }

        /* End of Switch: '<S186>/Switch1' */

        /* Update for UnitDelay: '<S186>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ou = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S175>/CountDownResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S175>/EdgeFalling' */
        /* Logic: '<S188>/OR1' incorporates:
         *  Logic: '<S175>/Logical12'
         */
        rtb_UnitDelay_p0 = !rtb_VariantMerge_For_Variant_So;

        /* Logic: '<S188>/AND' incorporates:
         *  Logic: '<S188>/OR1'
         *  UnitDelay: '<S188>/UnitDelay'
         */
        rtb_Switch1_bl = (rtb_UnitDelay_p0 && (BTRR_ac_DW.UnitDelay_DSTATE_ol));

        /* Update for UnitDelay: '<S188>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ol = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S175>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S175>/SignalLatchOnWithReset1' */
        /* Logic: '<S200>/NOT' incorporates:
         *  Logic: '<S175>/Logical12'
         *  Logic: '<S175>/Logical13'
         *  Logic: '<S175>/Logical9'
         */
        rtb_VariantMerge_For_Variant_So = (rtb_UnitDelay_p0 &&
            (VeBTRR_b_BTIS_FltDtct_AD));

        /* Logic: '<S200>/OR1' incorporates:
         *  Logic: '<S175>/Logical12'
         *  Logic: '<S175>/Logical3'
         *  Logic: '<S200>/NOT'
         *  Logic: '<S200>/OR'
         *  UnitDelay: '<S200>/UnitDelay'
         */
        VeBTRR_b_LTAPOffLtch_BEV = (((VeBTRR_b_BTIS_FltDtct_AD) &&
            rtb_Switch1_bl) || (rtb_VariantMerge_For_Variant_So &&
                                (BTRR_ac_DW.UnitDelay_DSTATE_nl)));

        /* Update for UnitDelay: '<S200>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_nl = VeBTRR_b_LTAPOffLtch_BEV;

        /* End of Outputs for SubSystem: '<S175>/SignalLatchOnWithReset1' */

        /* Outputs for Atomic SubSystem: '<S175>/CountDownResetEnabled1' */
        /* Switch: '<S187>/Switch1' incorporates:
         *  Constant: '<S187>/ConstantValue'
         *  Logic: '<S175>/Logical15'
         *  Logic: '<S187>/AND'
         *  RelationalOperator: '<S187>/GreaterThan'
         *  Switch: '<S187>/Switch2'
         *  UnitDelay: '<S187>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOffLtch_BEV)
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Constant: '<S194>/Calib'
             */
            rtb_Switch1_je = KeBTRR_Cnt_LTAPOff_B4SwToBTOS;
        }
        else if ((VeBTRR_b_LTAPOffLtch_BEV) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_j) > 0))
        {
            /* Switch: '<S187>/Switch2' incorporates:
             *  Constant: '<S187>/ConstantValue1'
             *  Sum: '<S187>/Subtraction'
             *  Switch: '<S187>/Switch1'
             *  UnitDelay: '<S187>/UnitDelay'
             */
            rtb_Switch1_je = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_j) - 1));
        }
        else
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Switch: '<S187>/Switch2'
             *  UnitDelay: '<S187>/UnitDelay'
             */
            rtb_Switch1_je = BTRR_ac_DW.UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S187>/Switch1' */

        /* Update for UnitDelay: '<S187>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_je;

        /* End of Outputs for SubSystem: '<S175>/CountDownResetEnabled1' */

        /* Outputs for Atomic SubSystem: '<S175>/CountDownResetEnabled' */
        /* Logic: '<S175>/Logical8' incorporates:
         *  Constant: '<S186>/ConstantValue2'
         *  RelationalOperator: '<S186>/GreaterThan1'
         */
        VeBTRR_b_LTAPOnAftDbnc_BEV = (((sint32)rtb_Switch1_mu) <= 0);

        /* End of Outputs for SubSystem: '<S175>/CountDownResetEnabled' */

        /* RelationalOperator: '<S175>/Comparison4' incorporates:
         *  RelationalOperator: '<S175>/Comparison1'
         *  RelationalOperator: '<S175>/Comparison2'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        VeBTRR_b_LTAPOn_BEV_tmp = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dj;

        /* Logic: '<S175>/Logical2' incorporates:
         *  Constant: '<S190>/Constant'
         *  Constant: '<S191>/Constant'
         *  Constant: '<S192>/Constant'
         *  Constant: '<S196>/Calib'
         *  Logic: '<S175>/Logical1'
         *  Logic: '<S175>/Logical11'
         *  Logic: '<S175>/Logical17'
         *  RelationalOperator: '<S175>/Comparison1'
         *  RelationalOperator: '<S175>/Comparison2'
         *  RelationalOperator: '<S175>/Comparison4'
         */
        VeBTRR_b_LTAPOn_BEV = (((((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) ==
            CeTHMR_e_ActiveCooling) || (((uint32)VeBTRR_b_LTAPOn_BEV_tmp) ==
            CeTHMR_e_Balancing)) || ((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) ==
            CeTHMR_e_Heating) && (KeBTRR_b_Enbl_BattHeat_BTISRA))) &&
                                (VeBTRR_b_BTIS_FltDtct_AD)) &&
                               (!VeBTRR_b_LTAPOnLtch_BEV));

        /* Outputs for Atomic SubSystem: '<S175>/CountDownResetEnabled1' */
        /* Logic: '<S175>/Logical14' incorporates:
         *  Constant: '<S187>/ConstantValue2'
         *  Constant: '<S197>/Calib'
         *  Logic: '<S175>/Logical16'
         *  RelationalOperator: '<S187>/GreaterThan1'
         */
        VeBTRR_b_LTAPOffAftDbnc_BEV = ((((sint32)rtb_Switch1_je) <= 0) &&
            (KeBTRR_b_Enbl_LTAPOffDly));

        /* End of Outputs for SubSystem: '<S175>/CountDownResetEnabled1' */

        /* Switch: '<S175>/Switch' incorporates:
         *  Constant: '<S175>/TRUEConstant'
         *  Constant: '<S197>/Calib'
         *  Logic: '<S175>/Logical18'
         */
        if (KeBTRR_b_Enbl_LTAPOffDly)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOffLtch_BEV;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S175>/Switch' */

        /* Logic: '<S175>/Logical9' */
        VeBTRR_b_LTAPOff_BEV = (rtb_VariantMerge_For_Variant_So &&
                                rtb_UnitDelay_do);

        /* Switch: '<S193>/Switch1' incorporates:
         *  Switch: '<S193>/Switch2'
         *  Switch: '<S193>/Switch3'
         *  Switch: '<S193>/Switch4'
         */
        if (VeBTRR_b_LTAPOnAftDbnc_BEV)
        {
            /* Switch: '<S193>/Switch1' */
            VeBTRR_T_ArbBattClntTmpIn_BEV =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b0;
        }
        else if (VeBTRR_b_LTAPOn_BEV)
        {
            /* Switch: '<S193>/Switch2' incorporates:
             *  Switch: '<S193>/Switch1'
             */
            VeBTRR_T_ArbBattClntTmpIn_BEV =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b0;
        }
        else if (VeBTRR_b_LTAPOffAftDbnc_BEV)
        {
            /* Switch: '<S193>/Switch3' incorporates:
             *  Switch: '<S193>/Switch1'
             *  Switch: '<S193>/Switch2'
             */
            VeBTRR_T_ArbBattClntTmpIn_BEV =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else if (VeBTRR_b_LTAPOff_BEV)
        {
            /* Switch: '<S193>/Switch4' incorporates:
             *  Switch: '<S193>/Switch1'
             *  Switch: '<S193>/Switch2'
             *  Switch: '<S193>/Switch3'
             */
            VeBTRR_T_ArbBattClntTmpIn_BEV =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else
        {
            /* Switch: '<S193>/Switch1' incorporates:
             *  Switch: '<S193>/Switch2'
             *  Switch: '<S193>/Switch3'
             *  UnitDelay: '<S175>/UnitDelay'
             */
            VeBTRR_T_ArbBattClntTmpIn_BEV = BTRR_ac_DW.UnitDelay_DSTATE_n;
        }

        /* End of Switch: '<S193>/Switch1' */

        /* Switch: '<S666>/Switch1' incorporates:
         *  Gain: '<S198>/Gain'
         */
        rtb_Switch1_ln = VeBTRR_T_ArbBattClntTmpIn_BEV;

        /* Update for UnitDelay: '<S175>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_n = VeBTRR_T_ArbBattClntTmpIn_BEV;

        /* End of Outputs for SubSystem: '<S151>/BTIS_FA_RA_BEV' */
    }
    else if (KeBTRR_b_Enbl_BTISRA_RU)
    {
        /* Outputs for IfAction SubSystem: '<S151>/BTIS_FA_RA_RU_K8' incorporates:
         *  ActionPort: '<S177>/ActionPort'
         */
        /* Switch: '<S177>/Switch' incorporates:
         *  Constant: '<S247>/Constant'
         *  RelationalOperator: '<S177>/Comparison4'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        rtb_Switch1_bl = (((uint32)BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dj) ==
                          CeTHMR_e_ActiveCooling);

        /* Outputs for Atomic SubSystem: '<S177>/EdgeRising' */
        /* Logic: '<S245>/AND' incorporates:
         *  Logic: '<S245>/OR1'
         *  UnitDelay: '<S245>/UnitDelay'
         */
        rtb_Switch1_pz = (rtb_VariantMerge_For_Variant_So &&
                          (!BTRR_ac_DW.UnitDelay_DSTATE_fu));

        /* Update for UnitDelay: '<S245>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_fu = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S177>/EdgeRising' */

        /* Logic: '<S177>/Logical4' incorporates:
         *  Logic: '<S177>/Logical21'
         *  Logic: '<S177>/Logical5'
         *  Logic: '<S177>/Logical6'
         */
        rtb_UnitDelay_do = (rtb_VariantMerge_For_Variant_So &&
                            (VeBTRR_b_BTIS_FltDtct_AD));

        /* Outputs for Atomic SubSystem: '<S177>/SignalLatchOnWithReset' */
        /* Logic: '<S255>/OR1' incorporates:
         *  Logic: '<S177>/Logical'
         *  Logic: '<S177>/Logical4'
         *  Logic: '<S255>/NOT'
         *  Logic: '<S255>/OR'
         *  UnitDelay: '<S255>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtchNoActvCool_RU = (((VeBTRR_b_BTIS_FltDtct_AD) &&
            rtb_Switch1_pz) || ((rtb_UnitDelay_do && (!rtb_Switch1_bl)) &&
                                (BTRR_ac_DW.UnitDelay_DSTATE_jn)));

        /* Update for UnitDelay: '<S255>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_jn = VeBTRR_b_LTAPOnLtchNoActvCool_RU;

        /* End of Outputs for SubSystem: '<S177>/SignalLatchOnWithReset' */

        /* Outputs for Atomic SubSystem: '<S177>/CountDownResetEnabled' */
        /* Switch: '<S241>/Switch1' incorporates:
         *  Constant: '<S241>/ConstantValue'
         *  Logic: '<S177>/Logical7'
         *  Logic: '<S241>/AND'
         *  RelationalOperator: '<S241>/GreaterThan'
         *  Switch: '<S241>/Switch2'
         *  UnitDelay: '<S241>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtchNoActvCool_RU)
        {
            /* Switch: '<S241>/Switch1' incorporates:
             *  Constant: '<S251>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOn_NoActvCool;
        }
        else if ((VeBTRR_b_LTAPOnLtchNoActvCool_RU) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_gd) > 0))
        {
            /* Switch: '<S241>/Switch2' incorporates:
             *  Constant: '<S241>/ConstantValue1'
             *  Sum: '<S241>/Subtraction'
             *  Switch: '<S241>/Switch1'
             *  UnitDelay: '<S241>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_gd) - 1));
        }
        else
        {
            /* Switch: '<S241>/Switch1' incorporates:
             *  Switch: '<S241>/Switch2'
             *  UnitDelay: '<S241>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_gd;
        }

        /* End of Switch: '<S241>/Switch1' */

        /* RelationalOperator: '<S241>/GreaterThan1' incorporates:
         *  Constant: '<S241>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnNoActvCool_AftrDbnc_RU = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S241>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_gd = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S177>/CountDownResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S177>/EdgeFalling' */
        /* Logic: '<S244>/AND' incorporates:
         *  Logic: '<S244>/OR1'
         *  UnitDelay: '<S244>/UnitDelay'
         */
        rtb_Switch1_pz = ((!rtb_VariantMerge_For_Variant_So) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_bs));

        /* Update for UnitDelay: '<S244>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_bs = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S177>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S177>/SignalLatchOnWithReset1' */
        /* Logic: '<S256>/OR1' incorporates:
         *  Logic: '<S177>/Logical12'
         *  Logic: '<S177>/Logical13'
         *  Logic: '<S177>/Logical19'
         *  Logic: '<S256>/NOT'
         *  Logic: '<S256>/OR'
         *  UnitDelay: '<S256>/UnitDelay'
         */
        VeBTRR_b_LTAPOffLtch_RU = (((VeBTRR_b_BTIS_FltDtct_AD) && rtb_Switch1_pz)
            || (((!rtb_VariantMerge_For_Variant_So) && (VeBTRR_b_BTIS_FltDtct_AD))
                && (BTRR_ac_DW.UnitDelay_DSTATE_io)));

        /* Update for UnitDelay: '<S256>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_io = VeBTRR_b_LTAPOffLtch_RU;

        /* End of Outputs for SubSystem: '<S177>/SignalLatchOnWithReset1' */

        /* Outputs for Atomic SubSystem: '<S177>/CountDownResetEnabled1' */
        /* Switch: '<S242>/Switch1' incorporates:
         *  Constant: '<S242>/ConstantValue'
         *  Logic: '<S177>/Logical15'
         *  Logic: '<S242>/AND'
         *  RelationalOperator: '<S242>/GreaterThan'
         *  Switch: '<S242>/Switch2'
         *  UnitDelay: '<S242>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOffLtch_RU)
        {
            /* Switch: '<S242>/Switch1' incorporates:
             *  Constant: '<S249>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOff_B4SwToBTOS_RU;
        }
        else if ((VeBTRR_b_LTAPOffLtch_RU) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_p2) > 0))
        {
            /* Switch: '<S242>/Switch2' incorporates:
             *  Constant: '<S242>/ConstantValue1'
             *  Sum: '<S242>/Subtraction'
             *  Switch: '<S242>/Switch1'
             *  UnitDelay: '<S242>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_p2) - 1));
        }
        else
        {
            /* Switch: '<S242>/Switch1' incorporates:
             *  Switch: '<S242>/Switch2'
             *  UnitDelay: '<S242>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_p2;
        }

        /* End of Switch: '<S242>/Switch1' */

        /* RelationalOperator: '<S242>/GreaterThan1' incorporates:
         *  Constant: '<S242>/ConstantValue2'
         */
        VeBTRR_b_LTAPOffDly_RU = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S242>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_p2 = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S177>/CountDownResetEnabled1' */

        /* Outputs for Atomic SubSystem: '<S177>/EdgeRising1' */
        /* Logic: '<S246>/AND' incorporates:
         *  Logic: '<S246>/OR1'
         *  UnitDelay: '<S246>/UnitDelay'
         */
        rtb_Switch1_pz = (rtb_VariantMerge_For_Variant_So &&
                          (!BTRR_ac_DW.UnitDelay_DSTATE_bm));

        /* Update for UnitDelay: '<S246>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_bm = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S177>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S177>/SignalLatchOnWithReset2' */
        /* Logic: '<S257>/OR1' incorporates:
         *  Logic: '<S177>/Logical10'
         *  Logic: '<S177>/Logical17'
         *  Logic: '<S177>/Logical21'
         *  Logic: '<S257>/NOT'
         *  Logic: '<S257>/OR'
         *  UnitDelay: '<S257>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtchActvCool_RU = (((VeBTRR_b_BTIS_FltDtct_AD) &&
            rtb_Switch1_pz) || ((rtb_UnitDelay_do && rtb_Switch1_bl) &&
                                (BTRR_ac_DW.UnitDelay_DSTATE_ak)));

        /* Update for UnitDelay: '<S257>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ak = VeBTRR_b_LTAPOnLtchActvCool_RU;

        /* End of Outputs for SubSystem: '<S177>/SignalLatchOnWithReset2' */

        /* Outputs for Atomic SubSystem: '<S177>/CountDownResetEnabled2' */
        /* Switch: '<S243>/Switch1' incorporates:
         *  Constant: '<S243>/ConstantValue'
         *  Logic: '<S177>/Logical24'
         *  Logic: '<S243>/AND'
         *  RelationalOperator: '<S243>/GreaterThan'
         *  Switch: '<S243>/Switch2'
         *  UnitDelay: '<S243>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtchActvCool_RU)
        {
            /* Switch: '<S243>/Switch1' incorporates:
             *  Constant: '<S250>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOn_ActvCool;
        }
        else if ((VeBTRR_b_LTAPOnLtchActvCool_RU) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_dr) > 0))
        {
            /* Switch: '<S243>/Switch2' incorporates:
             *  Constant: '<S243>/ConstantValue1'
             *  Sum: '<S243>/Subtraction'
             *  Switch: '<S243>/Switch1'
             *  UnitDelay: '<S243>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_dr) - 1));
        }
        else
        {
            /* Switch: '<S243>/Switch1' incorporates:
             *  Switch: '<S243>/Switch2'
             *  UnitDelay: '<S243>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_dr;
        }

        /* End of Switch: '<S243>/Switch1' */

        /* RelationalOperator: '<S243>/GreaterThan1' incorporates:
         *  Constant: '<S243>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnActvCool_AftrDbnc_RU = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S243>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_dr = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S177>/CountDownResetEnabled2' */

        /* Logic: '<S177>/Logical3' incorporates:
         *  Logic: '<S177>/Logical18'
         *  Logic: '<S177>/Logical8'
         */
        VeBTRR_b_LTAPOnDlyNoActvCool_RU =
            ((!VeBTRR_b_LTAPOnNoActvCool_AftrDbnc_RU) && (!rtb_Switch1_bl));

        /* Logic: '<S177>/Logical2' incorporates:
         *  Logic: '<S177>/Logical9'
         */
        rtb_UnitDelay_do = (rtb_VariantMerge_For_Variant_So &&
                            (VeBTRR_b_BTIS_FltDtct_AD));

        /* Logic: '<S177>/Logical2' incorporates:
         *  Logic: '<S177>/Logical1'
         *  Logic: '<S177>/Logical11'
         */
        VeBTRR_b_LTAPOnNoActvCool_RU = ((rtb_UnitDelay_do && (!rtb_Switch1_bl)) &&
            (!VeBTRR_b_LTAPOnLtchNoActvCool_RU));

        /* Sum: '<S177>/Sum1' incorporates:
         *  Constant: '<S252>/Calib'
         */
        TmpSignalConversionAtTmpVM_Fc_c = VeBTRR_T_LTActPumpTemp_AD -
            KeBTRR_T_LTAPTmpDelta_BTIS_RA;

        /* Logic: '<S177>/Logical20' incorporates:
         *  Logic: '<S177>/Logical25'
         */
        VeBTRR_b_LTAPOnDlyActvCool_RU = ((!VeBTRR_b_LTAPOnActvCool_AftrDbnc_RU) &&
            rtb_Switch1_bl);

        /* Logic: '<S177>/Logical9' incorporates:
         *  Logic: '<S177>/Logical28'
         */
        VeBTRR_b_LTAPOnActvCool_RU = ((rtb_UnitDelay_do && rtb_Switch1_bl) &&
            (!VeBTRR_b_LTAPOnLtchActvCool_RU));

        /* Logic: '<S177>/Logical14' incorporates:
         *  Constant: '<S253>/Calib'
         *  Logic: '<S177>/Logical16'
         */
        VeBTRR_b_LTAPOffAftDbnc_RU = ((!VeBTRR_b_LTAPOffDly_RU) &&
            (KeBTRR_b_Enbl_LTAPOffDly_RU));

        /* Switch: '<S177>/Switch' incorporates:
         *  Constant: '<S177>/TRUEConstant'
         *  Constant: '<S253>/Calib'
         *  Logic: '<S177>/Logical29'
         */
        if (KeBTRR_b_Enbl_LTAPOffDly_RU)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOffLtch_RU;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S177>/Switch' */

        /* Logic: '<S177>/Logical26' incorporates:
         *  Logic: '<S177>/Logical27'
         */
        VeBTRR_b_LTAPOff_RU = (((!rtb_VariantMerge_For_Variant_So) &&
                                (VeBTRR_b_BTIS_FltDtct_AD)) && rtb_UnitDelay_do);

        /* Switch: '<S248>/Switch1' incorporates:
         *  Switch: '<S248>/Switch2'
         *  Switch: '<S248>/Switch3'
         *  Switch: '<S248>/Switch4'
         *  Switch: '<S248>/Switch5'
         *  Switch: '<S248>/Switch6'
         */
        if (VeBTRR_b_LTAPOnDlyNoActvCool_RU)
        {
            /* Switch: '<S248>/Switch1' */
            VeBTRR_T_ArbBattClntTmpIn_RU = VeBTRR_T_LTActPumpTemp_AD;
        }
        else if (VeBTRR_b_LTAPOnNoActvCool_RU)
        {
            /* Switch: '<S248>/Switch2' incorporates:
             *  Switch: '<S248>/Switch1'
             */
            VeBTRR_T_ArbBattClntTmpIn_RU = VeBTRR_T_LTActPumpTemp_AD;
        }
        else if (VeBTRR_b_LTAPOnDlyActvCool_RU)
        {
            /* Switch: '<S248>/Switch3' incorporates:
             *  Switch: '<S248>/Switch1'
             *  Switch: '<S248>/Switch2'
             */
            VeBTRR_T_ArbBattClntTmpIn_RU = TmpSignalConversionAtTmpVM_Fc_c;
        }
        else if (VeBTRR_b_LTAPOnActvCool_RU)
        {
            /* Switch: '<S248>/Switch4' incorporates:
             *  Switch: '<S248>/Switch1'
             *  Switch: '<S248>/Switch2'
             *  Switch: '<S248>/Switch3'
             */
            VeBTRR_T_ArbBattClntTmpIn_RU = TmpSignalConversionAtTmpVM_Fc_c;
        }
        else if (VeBTRR_b_LTAPOffAftDbnc_RU)
        {
            /* Switch: '<S248>/Switch5' incorporates:
             *  Switch: '<S248>/Switch1'
             *  Switch: '<S248>/Switch2'
             *  Switch: '<S248>/Switch3'
             *  Switch: '<S248>/Switch4'
             */
            VeBTRR_T_ArbBattClntTmpIn_RU =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else if (VeBTRR_b_LTAPOff_RU)
        {
            /* Switch: '<S248>/Switch6' incorporates:
             *  Switch: '<S248>/Switch1'
             *  Switch: '<S248>/Switch2'
             *  Switch: '<S248>/Switch3'
             *  Switch: '<S248>/Switch4'
             *  Switch: '<S248>/Switch5'
             */
            VeBTRR_T_ArbBattClntTmpIn_RU =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else
        {
            /* Switch: '<S248>/Switch1' incorporates:
             *  Switch: '<S248>/Switch2'
             *  Switch: '<S248>/Switch3'
             *  Switch: '<S248>/Switch4'
             *  Switch: '<S248>/Switch5'
             *  UnitDelay: '<S177>/UnitDelay'
             */
            VeBTRR_T_ArbBattClntTmpIn_RU = BTRR_ac_DW.UnitDelay_DSTATE_e1;
        }

        /* End of Switch: '<S248>/Switch1' */

        /* Switch: '<S666>/Switch1' incorporates:
         *  Gain: '<S254>/Gain'
         */
        rtb_Switch1_ln = VeBTRR_T_ArbBattClntTmpIn_RU;

        /* Update for UnitDelay: '<S177>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_e1 = VeBTRR_T_ArbBattClntTmpIn_RU;

        /* End of Outputs for SubSystem: '<S151>/BTIS_FA_RA_RU_K8' */
    }
    else if (KeBTRR_b_Enbl_BTISRA_EVA)
    {
        /* Outputs for IfAction SubSystem: '<S151>/BTIS_FA_RA_EVA' incorporates:
         *  ActionPort: '<S176>/ActionPort'
         */
        /* UnitDelay: '<S209>/UnitDelay' incorporates:
         *  Constant: '<S213>/Constant'
         *  RelationalOperator: '<S176>/Comparison2'
         *  Switch: '<S951>/Switch'
         */
        rtb_UnitDelay_p0 = (((uint32)VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_ON);

        /* Logic: '<S176>/Logical29' incorporates:
         *  Constant: '<S215>/Constant'
         *  RelationalOperator: '<S176>/Comparison2'
         *  RelationalOperator: '<S176>/Comparison5'
         *  Switch: '<S951>/Switch'
         */
        rtb_Switch1_bl = (((uint32)VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_OFF);

        /* UnitDelay: '<S210>/UnitDelay' incorporates:
         *  Constant: '<S217>/Constant'
         *  RelationalOperator: '<S176>/Comparison2'
         *  RelationalOperator: '<S176>/Comparison7'
         *  Switch: '<S951>/Switch'
         */
        rtb_UnitDelay_do = (((uint32)VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_SNA);

        /* Switch: '<S176>/Switch4' incorporates:
         *  Constant: '<S219>/Constant'
         *  RelationalOperator: '<S176>/Comparison2'
         *  RelationalOperator: '<S176>/Comparison9'
         *  Switch: '<S951>/Switch'
         */
        rtb_Switch1_pz = (((uint32)VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_SNA);

        /* Outputs for Atomic SubSystem: '<S176>/EdgeRising' */
        /* Logic: '<S207>/OR1' incorporates:
         *  UnitDelay: '<S207>/UnitDelay'
         */
        rtb_OR1_a2 = !BTRR_ac_DW.UnitDelay_DSTATE_f5;

        /* Update for UnitDelay: '<S207>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_f5 = rtb_VariantMerge_For_Variant_So;

        /* Outputs for Atomic SubSystem: '<S176>/SignalLatchOnWithReset' */
        /* Logic: '<S236>/OR1' incorporates:
         *  Logic: '<S176>/Logical'
         *  Logic: '<S176>/Logical28'
         *  Logic: '<S176>/Logical4'
         *  Logic: '<S176>/Logical5'
         *  Logic: '<S176>/Logical6'
         *  Logic: '<S207>/AND'
         *  Logic: '<S236>/NOT'
         *  Logic: '<S236>/OR'
         *  UnitDelay: '<S236>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtchSDSOn = (((rtb_UnitDelay_p0 &&
            (VeBTRR_b_BTIS_FltDtct_AD)) && (rtb_VariantMerge_For_Variant_So &&
            rtb_OR1_a2)) || (((rtb_VariantMerge_For_Variant_So &&
                               (VeBTRR_b_BTIS_FltDtct_AD)) && rtb_UnitDelay_p0) &&
                             (BTRR_ac_DW.UnitDelay_DSTATE_d0)));

        /* End of Outputs for SubSystem: '<S176>/EdgeRising' */

        /* Update for UnitDelay: '<S236>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_d0 = VeBTRR_b_LTAPOnLtchSDSOn;

        /* End of Outputs for SubSystem: '<S176>/SignalLatchOnWithReset' */

        /* Outputs for Atomic SubSystem: '<S176>/CountDownResetEnabled' */
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S201>/ConstantValue'
         *  Logic: '<S176>/Logical7'
         *  Logic: '<S201>/AND'
         *  RelationalOperator: '<S201>/GreaterThan'
         *  Switch: '<S201>/Switch2'
         *  UnitDelay: '<S201>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtchSDSOn)
        {
            /* Switch: '<S201>/Switch1' incorporates:
             *  Constant: '<S224>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_SDSOn;
        }
        else if ((VeBTRR_b_LTAPOnLtchSDSOn) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_kl) > 0))
        {
            /* Switch: '<S201>/Switch2' incorporates:
             *  Constant: '<S201>/ConstantValue1'
             *  Sum: '<S201>/Subtraction'
             *  Switch: '<S201>/Switch1'
             *  UnitDelay: '<S201>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_kl) - 1));
        }
        else
        {
            /* Switch: '<S201>/Switch1' incorporates:
             *  Switch: '<S201>/Switch2'
             *  UnitDelay: '<S201>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_kl;
        }

        /* End of Switch: '<S201>/Switch1' */

        /* RelationalOperator: '<S201>/GreaterThan1' incorporates:
         *  Constant: '<S201>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnLtchSDSOnDly = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S201>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_kl = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S176>/CountDownResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S176>/EdgeFalling' */
        /* Logic: '<S206>/AND' incorporates:
         *  Logic: '<S206>/OR1'
         *  UnitDelay: '<S206>/UnitDelay'
         */
        rtb_UnitDelay_p0 = ((!rtb_VariantMerge_For_Variant_So) &&
                            (BTRR_ac_DW.UnitDelay_DSTATE_fr));

        /* Update for UnitDelay: '<S206>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_fr = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S176>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S176>/SignalLatchOnWithReset1' */
        /* Logic: '<S237>/OR1' incorporates:
         *  Logic: '<S176>/Logical12'
         *  Logic: '<S176>/Logical13'
         *  Logic: '<S176>/Logical19'
         *  Logic: '<S237>/NOT'
         *  Logic: '<S237>/OR'
         *  UnitDelay: '<S237>/UnitDelay'
         */
        VeBTRR_b_LTAPOffLtch_EVA = (((VeBTRR_b_BTIS_FltDtct_AD) &&
            rtb_UnitDelay_p0) || (((!rtb_VariantMerge_For_Variant_So) &&
            (VeBTRR_b_BTIS_FltDtct_AD)) && (BTRR_ac_DW.UnitDelay_DSTATE_p0p)));

        /* Update for UnitDelay: '<S237>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_p0p = VeBTRR_b_LTAPOffLtch_EVA;

        /* End of Outputs for SubSystem: '<S176>/SignalLatchOnWithReset1' */

        /* Outputs for Atomic SubSystem: '<S176>/CountDownResetEnabled1' */
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S202>/ConstantValue'
         *  Logic: '<S176>/Logical15'
         *  Logic: '<S202>/AND'
         *  RelationalOperator: '<S202>/GreaterThan'
         *  Switch: '<S202>/Switch2'
         *  UnitDelay: '<S202>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOffLtch_EVA)
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Constant: '<S222>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOff_B4SwToBTOS_EVA;
        }
        else if ((VeBTRR_b_LTAPOffLtch_EVA) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_ef) > 0))
        {
            /* Switch: '<S202>/Switch2' incorporates:
             *  Constant: '<S202>/ConstantValue1'
             *  Sum: '<S202>/Subtraction'
             *  Switch: '<S202>/Switch1'
             *  UnitDelay: '<S202>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_ef) - 1));
        }
        else
        {
            /* Switch: '<S202>/Switch1' incorporates:
             *  Switch: '<S202>/Switch2'
             *  UnitDelay: '<S202>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_ef;
        }

        /* End of Switch: '<S202>/Switch1' */

        /* RelationalOperator: '<S202>/GreaterThan1' incorporates:
         *  Constant: '<S202>/ConstantValue2'
         */
        VeBTRR_b_LTAPOffDly_EVA = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S202>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ef = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S176>/CountDownResetEnabled1' */

        /* Outputs for Atomic SubSystem: '<S176>/EdgeRising1' */
        /* Logic: '<S208>/OR1' incorporates:
         *  UnitDelay: '<S208>/UnitDelay'
         */
        rtb_UnitDelay_p0 = !BTRR_ac_DW.UnitDelay_DSTATE_lp;

        /* Update for UnitDelay: '<S208>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_lp = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S176>/EdgeRising1' */

        /* Logic: '<S176>/Logical20' incorporates:
         *  Logic: '<S176>/Logical2'
         *  Logic: '<S176>/Logical21'
         *  Logic: '<S176>/Logical22'
         *  Logic: '<S176>/Logical31'
         *  Logic: '<S176>/Logical36'
         *  Logic: '<S176>/Logical40'
         *  Logic: '<S176>/Logical47'
         *  Logic: '<S176>/Logical9'
         */
        VeBTRR_b_LTAPOnLtch_WL_tmp = (rtb_VariantMerge_For_Variant_So &&
            (VeBTRR_b_BTIS_FltDtct_AD));

        /* Outputs for Atomic SubSystem: '<S176>/SignalLatchOnWithReset2' */
        /* Outputs for Atomic SubSystem: '<S176>/EdgeRising1' */
        /* Logic: '<S238>/OR1' incorporates:
         *  Logic: '<S176>/Logical10'
         *  Logic: '<S176>/Logical17'
         *  Logic: '<S176>/Logical20'
         *  Logic: '<S208>/AND'
         *  Logic: '<S238>/NOT'
         *  Logic: '<S238>/OR'
         *  UnitDelay: '<S238>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtchSDSOff = (((rtb_Switch1_bl &&
            (VeBTRR_b_BTIS_FltDtct_AD)) && (rtb_VariantMerge_For_Variant_So &&
            rtb_UnitDelay_p0)) || ((VeBTRR_b_LTAPOnLtch_WL_tmp && rtb_Switch1_bl)
            && (BTRR_ac_DW.UnitDelay_DSTATE_cb)));

        /* End of Outputs for SubSystem: '<S176>/EdgeRising1' */

        /* Update for UnitDelay: '<S238>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_cb = VeBTRR_b_LTAPOnLtchSDSOff;

        /* End of Outputs for SubSystem: '<S176>/SignalLatchOnWithReset2' */

        /* Outputs for Atomic SubSystem: '<S176>/CountDownResetEnabled2' */
        /* Switch: '<S203>/Switch1' incorporates:
         *  Constant: '<S203>/ConstantValue'
         *  Logic: '<S176>/Logical23'
         *  Logic: '<S203>/AND'
         *  RelationalOperator: '<S203>/GreaterThan'
         *  Switch: '<S203>/Switch2'
         *  UnitDelay: '<S203>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtchSDSOff)
        {
            /* Switch: '<S203>/Switch1' incorporates:
             *  Constant: '<S223>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_SDSOff;
        }
        else if ((VeBTRR_b_LTAPOnLtchSDSOff) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_k) > 0))
        {
            /* Switch: '<S203>/Switch2' incorporates:
             *  Constant: '<S203>/ConstantValue1'
             *  Sum: '<S203>/Subtraction'
             *  Switch: '<S203>/Switch1'
             *  UnitDelay: '<S203>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_k) - 1));
        }
        else
        {
            /* Switch: '<S203>/Switch1' incorporates:
             *  Switch: '<S203>/Switch2'
             *  UnitDelay: '<S203>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_k;
        }

        /* End of Switch: '<S203>/Switch1' */

        /* RelationalOperator: '<S203>/GreaterThan1' incorporates:
         *  Constant: '<S203>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnLtchSDSOffDly = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S203>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S176>/CountDownResetEnabled2' */

        /* RelationalOperator: '<S176>/Comparison4' incorporates:
         *  RelationalOperator: '<S176>/Comparison3'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         */
        rtb_Switch1_mmr_tmp = BTRR_ac_B.TmpSignalConversionAtTmpVM__mt3;

        /* Logic: '<S176>/Logical29' incorporates:
         *  Constant: '<S211>/Constant'
         *  Constant: '<S212>/Constant'
         *  RelationalOperator: '<S176>/Comparison3'
         *  RelationalOperator: '<S176>/Comparison4'
         */
        rtb_Switch1_bl = ((((uint32)rtb_Switch1_mmr_tmp) == CeAVTR_e_EVA_Cool) ||
                          (((uint32)rtb_Switch1_mmr_tmp) == CeAVTR_e_EVA_MaxCool));

        /* Outputs for Atomic SubSystem: '<S176>/EdgeRising2' */
        /* Logic: '<S209>/OR1' incorporates:
         *  UnitDelay: '<S209>/UnitDelay'
         */
        rtb_UnitDelay_p0 = !BTRR_ac_DW.UnitDelay_DSTATE_mv;

        /* Update for UnitDelay: '<S209>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_mv = rtb_VariantMerge_For_Variant_So;

        /* Outputs for Atomic SubSystem: '<S176>/SignalLatchOnWithReset3' */
        /* Logic: '<S239>/OR1' incorporates:
         *  Logic: '<S176>/Logical1'
         *  Logic: '<S176>/Logical25'
         *  Logic: '<S176>/Logical31'
         *  Logic: '<S176>/Logical46'
         *  Logic: '<S209>/AND'
         *  Logic: '<S239>/NOT'
         *  Logic: '<S239>/OR'
         *  UnitDelay: '<S239>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtchSDSSNA_ActvCool = ((((rtb_Switch1_bl &&
            rtb_UnitDelay_do) && (VeBTRR_b_BTIS_FltDtct_AD)) &&
            (rtb_VariantMerge_For_Variant_So && rtb_UnitDelay_p0)) ||
            (((VeBTRR_b_LTAPOnLtch_WL_tmp && rtb_UnitDelay_do) && rtb_Switch1_bl)
             && (BTRR_ac_DW.UnitDelay_DSTATE_pk)));

        /* End of Outputs for SubSystem: '<S176>/EdgeRising2' */

        /* Update for UnitDelay: '<S239>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_pk = VeBTRR_b_LTAPOnLtchSDSSNA_ActvCool;

        /* End of Outputs for SubSystem: '<S176>/SignalLatchOnWithReset3' */

        /* Outputs for Atomic SubSystem: '<S176>/CountDownResetEnabled3' */
        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S204>/ConstantValue'
         *  Logic: '<S176>/Logical34'
         *  Logic: '<S204>/AND'
         *  RelationalOperator: '<S204>/GreaterThan'
         *  Switch: '<S204>/Switch2'
         *  UnitDelay: '<S204>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtchSDSSNA_ActvCool)
        {
            /* Switch: '<S204>/Switch1' incorporates:
             *  Constant: '<S225>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_SDSSNA_Cool;
        }
        else if ((VeBTRR_b_LTAPOnLtchSDSSNA_ActvCool) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_cu) > 0))
        {
            /* Switch: '<S204>/Switch2' incorporates:
             *  Constant: '<S204>/ConstantValue1'
             *  Sum: '<S204>/Subtraction'
             *  Switch: '<S204>/Switch1'
             *  UnitDelay: '<S204>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_cu) - 1));
        }
        else
        {
            /* Switch: '<S204>/Switch1' incorporates:
             *  Switch: '<S204>/Switch2'
             *  UnitDelay: '<S204>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_cu;
        }

        /* End of Switch: '<S204>/Switch1' */

        /* RelationalOperator: '<S204>/GreaterThan1' incorporates:
         *  Constant: '<S204>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnLtchSDSSNADly_ActvCool = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S204>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_cu = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S176>/CountDownResetEnabled3' */

        /* Outputs for Atomic SubSystem: '<S176>/EdgeRising3' */
        /* Logic: '<S210>/OR1' incorporates:
         *  UnitDelay: '<S210>/UnitDelay'
         */
        rtb_UnitDelay_do = !BTRR_ac_DW.UnitDelay_DSTATE_g3;

        /* Update for UnitDelay: '<S210>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_g3 = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S176>/EdgeRising3' */

        /* Logic: '<S176>/Logical45' incorporates:
         *  Logic: '<S176>/Logical40'
         */
        rtb_UnitDelay_p0 = !rtb_Switch1_bl;

        /* Outputs for Atomic SubSystem: '<S176>/SignalLatchOnWithReset4' */
        /* Outputs for Atomic SubSystem: '<S176>/EdgeRising3' */
        /* Logic: '<S240>/OR1' incorporates:
         *  Logic: '<S176>/Logical37'
         *  Logic: '<S176>/Logical38'
         *  Logic: '<S176>/Logical40'
         *  Logic: '<S176>/Logical45'
         *  Logic: '<S210>/AND'
         *  Logic: '<S240>/NOT'
         *  Logic: '<S240>/OR'
         *  UnitDelay: '<S240>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCool = ((((rtb_UnitDelay_p0 &&
            rtb_Switch1_pz) && (VeBTRR_b_BTIS_FltDtct_AD)) &&
            (rtb_VariantMerge_For_Variant_So && rtb_UnitDelay_do)) ||
            (((VeBTRR_b_LTAPOnLtch_WL_tmp && rtb_Switch1_pz) && rtb_UnitDelay_p0)
             && (BTRR_ac_DW.UnitDelay_DSTATE_gz)));

        /* End of Outputs for SubSystem: '<S176>/EdgeRising3' */

        /* Update for UnitDelay: '<S240>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_gz = VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCool;

        /* End of Outputs for SubSystem: '<S176>/SignalLatchOnWithReset4' */

        /* Outputs for Atomic SubSystem: '<S176>/CountDownResetEnabled4' */
        /* Switch: '<S205>/Switch1' incorporates:
         *  Constant: '<S205>/ConstantValue'
         *  Logic: '<S176>/Logical43'
         *  Logic: '<S205>/AND'
         *  RelationalOperator: '<S205>/GreaterThan'
         *  Switch: '<S205>/Switch2'
         *  UnitDelay: '<S205>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCool)
        {
            /* Switch: '<S205>/Switch1' incorporates:
             *  Constant: '<S226>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_SDSSNA_NoCool;
        }
        else if ((VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCool) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_d) > 0))
        {
            /* Switch: '<S205>/Switch2' incorporates:
             *  Constant: '<S205>/ConstantValue1'
             *  Sum: '<S205>/Subtraction'
             *  Switch: '<S205>/Switch1'
             *  UnitDelay: '<S205>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_d) - 1));
        }
        else
        {
            /* Switch: '<S205>/Switch1' incorporates:
             *  Switch: '<S205>/Switch2'
             *  UnitDelay: '<S205>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_d;
        }

        /* End of Switch: '<S205>/Switch1' */

        /* RelationalOperator: '<S205>/GreaterThan1' incorporates:
         *  Constant: '<S205>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnLtchSDSSNADly_NoActvCool = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S205>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S176>/CountDownResetEnabled4' */

        /* Sum: '<S176>/Sum2' incorporates:
         *  Constant: '<S229>/Calib'
         */
        TmpSignalConversionAtTmpVM_Fc_c = VeBTRR_T_SDS_ClntTmpIn +
            KeBTRR_T_SDSOnTmpDelta_BTIS_RA;

        /* Logic: '<S176>/Logical3' incorporates:
         *  Constant: '<S232>/Calib'
         *  Logic: '<S176>/Logical8'
         */
        VeBTRR_b_LTAPOnLtchSDSOn_AftDbnc = ((!VeBTRR_b_LTAPOnLtchSDSOnDly) &&
            (KeBTRR_b_Enbl_LTAPOnDly_SDSOn));

        /* Switch: '<S176>/Switch' incorporates:
         *  Constant: '<S176>/TRUEConstant'
         *  Constant: '<S232>/Calib'
         *  Logic: '<S176>/Logical11'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_SDSOn)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtchSDSOn;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S176>/Switch' */

        /* Logic: '<S176>/Logical2' incorporates:
         *  Constant: '<S214>/Constant'
         *  RelationalOperator: '<S176>/Comparison1'
         *  RelationalOperator: '<S176>/Comparison2'
         *  Switch: '<S951>/Switch'
         */
        VeBTRR_b_LTAPOnSDSOn = ((VeBTRR_b_LTAPOnLtch_WL_tmp && (((uint32)
            VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_ON)) && rtb_UnitDelay_do);

        /* Sum: '<S176>/Sum1' incorporates:
         *  Constant: '<S228>/Calib'
         */
        rtb_Switch1_ln = VeBTRR_T_SDS_ClntTmpIn +
            KeBTRR_T_SDSOffTmpDelta_BTIS_RA;

        /* Logic: '<S176>/Logical18' incorporates:
         *  Constant: '<S231>/Calib'
         *  Logic: '<S176>/Logical24'
         */
        VeBTRR_b_LTAPOnLtchSDSOffDbnc = ((!VeBTRR_b_LTAPOnLtchSDSOffDly) &&
            (KeBTRR_b_Enbl_LTAPOnDly_SDSOff));

        /* Switch: '<S176>/Switch1' incorporates:
         *  Constant: '<S176>/TRUEConstant1'
         *  Constant: '<S231>/Calib'
         *  Logic: '<S176>/Logical49'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_SDSOff)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtchSDSOff;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S176>/Switch1' */

        /* Logic: '<S176>/Logical9' incorporates:
         *  Constant: '<S216>/Constant'
         *  RelationalOperator: '<S176>/Comparison2'
         *  RelationalOperator: '<S176>/Comparison6'
         *  Switch: '<S951>/Switch'
         */
        VeBTRR_b_LTAPOnSDSOff = ((VeBTRR_b_LTAPOnLtch_WL_tmp && (((uint32)
            VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_OFF)) && rtb_UnitDelay_do);

        /* Sum: '<S176>/Sum3' incorporates:
         *  Constant: '<S227>/Calib'
         */
        TmpSignalConversionAtTmpVM_Fc_p = VeBTRR_T_LTActPumpTemp_AD -
            KeBTRR_T_LTAPTmpDelta_SDSSNA;

        /* Logic: '<S176>/Logical30' incorporates:
         *  Constant: '<S233>/Calib'
         *  Logic: '<S176>/Logical35'
         */
        VeBTRR_b_LTAPOnLtchSDSSNA_ActvCoolAftDbnc =
            ((!VeBTRR_b_LTAPOnLtchSDSSNADly_ActvCool) &&
             (KeBTRR_b_Enbl_LTAPOnDly_SDSSNA));

        /* Switch: '<S176>/Switch2' incorporates:
         *  Constant: '<S176>/TRUEConstant2'
         *  Constant: '<S233>/Calib'
         *  Logic: '<S176>/Logical50'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_SDSSNA)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtchSDSSNA_ActvCool;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S176>/Switch2' */

        /* Logic: '<S176>/Logical36' incorporates:
         *  Constant: '<S218>/Constant'
         *  RelationalOperator: '<S176>/Comparison2'
         *  RelationalOperator: '<S176>/Comparison8'
         *  Switch: '<S951>/Switch'
         */
        VeBTRR_b_LTAPOnSDSSNA_ActvCool = (((VeBTRR_b_LTAPOnLtch_WL_tmp &&
            (((uint32)VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_SNA)) &&
            rtb_Switch1_bl) && rtb_UnitDelay_do);

        /* Logic: '<S176>/Logical39' incorporates:
         *  Constant: '<S234>/Calib'
         *  Logic: '<S176>/Logical44'
         */
        VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCoolAftDbnc =
            ((!VeBTRR_b_LTAPOnLtchSDSSNADly_NoActvCool) &&
             (KeBTRR_b_Enbl_LTAPOnDly_SDSSNA_NoCool));

        /* Switch: '<S176>/Switch3' incorporates:
         *  Constant: '<S176>/TRUEConstant3'
         *  Constant: '<S234>/Calib'
         *  Logic: '<S176>/Logical51'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_SDSSNA_NoCool)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCool;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S176>/Switch3' */

        /* Logic: '<S176>/Logical47' incorporates:
         *  Constant: '<S220>/Constant'
         *  Logic: '<S176>/Logical48'
         *  RelationalOperator: '<S176>/Comparison10'
         *  RelationalOperator: '<S176>/Comparison2'
         *  Switch: '<S951>/Switch'
         */
        VeBTRR_b_LTAPOnSDSSNA_NoActvCool = (((VeBTRR_b_LTAPOnLtch_WL_tmp &&
            (((uint32)VeBTRR_e_SDS_ActSt) == CeTRIR_e_SDS_SNA)) &&
            (!rtb_Switch1_bl)) && rtb_UnitDelay_do);

        /* Logic: '<S176>/Logical14' incorporates:
         *  Constant: '<S230>/Calib'
         *  Logic: '<S176>/Logical16'
         */
        VeBTRR_b_LTAPOffAftDbnc_EVA = ((!VeBTRR_b_LTAPOffDly_EVA) &&
            (KeBTRR_b_Enbl_LTAPOffDly_EVA));

        /* Switch: '<S176>/Switch4' incorporates:
         *  Constant: '<S176>/TRUEConstant4'
         *  Constant: '<S230>/Calib'
         *  Logic: '<S176>/Logical52'
         */
        if (KeBTRR_b_Enbl_LTAPOffDly_EVA)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOffLtch_EVA;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S176>/Switch4' */

        /* Logic: '<S176>/Logical26' incorporates:
         *  Logic: '<S176>/Logical27'
         */
        VeBTRR_b_LTAPOff_EVA = (((!rtb_VariantMerge_For_Variant_So) &&
            (VeBTRR_b_BTIS_FltDtct_AD)) && rtb_UnitDelay_do);

        /* Switch: '<S221>/Switch1' incorporates:
         *  Switch: '<S221>/Switch10'
         *  Switch: '<S221>/Switch2'
         *  Switch: '<S221>/Switch3'
         *  Switch: '<S221>/Switch4'
         *  Switch: '<S221>/Switch5'
         *  Switch: '<S221>/Switch6'
         *  Switch: '<S221>/Switch7'
         *  Switch: '<S221>/Switch8'
         *  Switch: '<S221>/Switch9'
         */
        if (VeBTRR_b_LTAPOnLtchSDSOn_AftDbnc)
        {
            /* Switch: '<S221>/Switch1' */
            VeBTRR_T_ArbBattClntTmpIn_EVA = TmpSignalConversionAtTmpVM_Fc_c;
        }
        else if (VeBTRR_b_LTAPOnSDSOn)
        {
            /* Switch: '<S221>/Switch2' incorporates:
             *  Switch: '<S221>/Switch1'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = TmpSignalConversionAtTmpVM_Fc_c;
        }
        else if (VeBTRR_b_LTAPOnLtchSDSOffDbnc)
        {
            /* Switch: '<S221>/Switch3' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = rtb_Switch1_ln;
        }
        else if (VeBTRR_b_LTAPOnSDSOff)
        {
            /* Switch: '<S221>/Switch4' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = rtb_Switch1_ln;
        }
        else if (VeBTRR_b_LTAPOnLtchSDSSNA_ActvCoolAftDbnc)
        {
            /* Switch: '<S221>/Switch5' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             *  Switch: '<S221>/Switch4'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = TmpSignalConversionAtTmpVM_Fc_p;
        }
        else if (VeBTRR_b_LTAPOnSDSSNA_ActvCool)
        {
            /* Switch: '<S221>/Switch6' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             *  Switch: '<S221>/Switch4'
             *  Switch: '<S221>/Switch5'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = TmpSignalConversionAtTmpVM_Fc_p;
        }
        else if (VeBTRR_b_LTAPOnLtchSDSSNA_NoActvCoolAftDbnc)
        {
            /* Switch: '<S221>/Switch7' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             *  Switch: '<S221>/Switch4'
             *  Switch: '<S221>/Switch5'
             *  Switch: '<S221>/Switch6'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = VeBTRR_T_LTActPumpTemp_AD;
        }
        else if (VeBTRR_b_LTAPOnSDSSNA_NoActvCool)
        {
            /* Switch: '<S221>/Switch8' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             *  Switch: '<S221>/Switch4'
             *  Switch: '<S221>/Switch5'
             *  Switch: '<S221>/Switch6'
             *  Switch: '<S221>/Switch7'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = VeBTRR_T_LTActPumpTemp_AD;
        }
        else if (VeBTRR_b_LTAPOffAftDbnc_EVA)
        {
            /* Switch: '<S221>/Switch9' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             *  Switch: '<S221>/Switch4'
             *  Switch: '<S221>/Switch5'
             *  Switch: '<S221>/Switch6'
             *  Switch: '<S221>/Switch7'
             *  Switch: '<S221>/Switch8'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else if (VeBTRR_b_LTAPOff_EVA)
        {
            /* Switch: '<S221>/Switch10' incorporates:
             *  Switch: '<S221>/Switch1'
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             *  Switch: '<S221>/Switch4'
             *  Switch: '<S221>/Switch5'
             *  Switch: '<S221>/Switch6'
             *  Switch: '<S221>/Switch7'
             *  Switch: '<S221>/Switch8'
             *  Switch: '<S221>/Switch9'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else
        {
            /* Switch: '<S221>/Switch1' incorporates:
             *  Switch: '<S221>/Switch2'
             *  Switch: '<S221>/Switch3'
             *  Switch: '<S221>/Switch4'
             *  Switch: '<S221>/Switch5'
             *  Switch: '<S221>/Switch6'
             *  Switch: '<S221>/Switch7'
             *  Switch: '<S221>/Switch8'
             *  Switch: '<S221>/Switch9'
             *  UnitDelay: '<S176>/UnitDelay'
             */
            VeBTRR_T_ArbBattClntTmpIn_EVA = BTRR_ac_DW.UnitDelay_DSTATE_e;
        }

        /* End of Switch: '<S221>/Switch1' */

        /* Switch: '<S666>/Switch1' incorporates:
         *  Gain: '<S235>/Gain'
         */
        rtb_Switch1_ln = VeBTRR_T_ArbBattClntTmpIn_EVA;

        /* Update for UnitDelay: '<S176>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_e = VeBTRR_T_ArbBattClntTmpIn_EVA;

        /* End of Outputs for SubSystem: '<S151>/BTIS_FA_RA_EVA' */
    }
    else if (KeBTRR_b_Enbl_BTISRA_WL)
    {
        /* Outputs for IfAction SubSystem: '<S151>/BTIS_FA_RA_WL' incorporates:
         *  ActionPort: '<S178>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S178>/EdgeRising' */
        /* Logic: '<S266>/AND' incorporates:
         *  Logic: '<S266>/OR1'
         *  UnitDelay: '<S266>/UnitDelay'
         */
        rtb_Switch1_bl = (rtb_VariantMerge_For_Variant_So &&
                          (!BTRR_ac_DW.UnitDelay_DSTATE_nk));

        /* Update for UnitDelay: '<S266>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_nk = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S178>/EdgeRising' */

        /* Logic: '<S178>/Logical11' incorporates:
         *  Logic: '<S178>/Logical28'
         *  Logic: '<S178>/Logical4'
         */
        rtb_Switch1_pz = !VeBTRR_b_BTIS2_FltDtct_AD;

        /* Logic: '<S178>/Logical4' incorporates:
         *  Logic: '<S178>/Logical19'
         *  Logic: '<S178>/Logical5'
         *  Logic: '<S178>/Logical6'
         */
        VeBTRR_b_LTAPOnLtch_WL_tmp = (rtb_VariantMerge_For_Variant_So &&
            (VeBTRR_b_BTIS_FltDtct_AD));

        /* Outputs for Atomic SubSystem: '<S178>/SignalLatchOnWithReset' */
        /* Logic: '<S286>/OR1' incorporates:
         *  Logic: '<S178>/Logical'
         *  Logic: '<S178>/Logical11'
         *  Logic: '<S178>/Logical4'
         *  Logic: '<S286>/NOT'
         *  Logic: '<S286>/OR'
         *  UnitDelay: '<S286>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtch_WL = (((rtb_Switch1_pz && (VeBTRR_b_BTIS_FltDtct_AD))
            && rtb_Switch1_bl) || ((VeBTRR_b_LTAPOnLtch_WL_tmp && rtb_Switch1_pz)
            && (BTRR_ac_DW.UnitDelay_DSTATE_ml)));

        /* Update for UnitDelay: '<S286>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ml = VeBTRR_b_LTAPOnLtch_WL;

        /* End of Outputs for SubSystem: '<S178>/SignalLatchOnWithReset' */

        /* Outputs for Atomic SubSystem: '<S178>/CountDownResetEnabled' */
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S258>/ConstantValue'
         *  Logic: '<S178>/Logical7'
         *  Logic: '<S258>/AND'
         *  RelationalOperator: '<S258>/GreaterThan'
         *  Switch: '<S258>/Switch2'
         *  UnitDelay: '<S258>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtch_WL)
        {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Constant: '<S275>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_BTISFA_WL;
        }
        else if ((VeBTRR_b_LTAPOnLtch_WL) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_ow) > 0))
        {
            /* Switch: '<S258>/Switch2' incorporates:
             *  Constant: '<S258>/ConstantValue1'
             *  Sum: '<S258>/Subtraction'
             *  Switch: '<S258>/Switch1'
             *  UnitDelay: '<S258>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_ow) - 1));
        }
        else
        {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Switch: '<S258>/Switch2'
             *  UnitDelay: '<S258>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_ow;
        }

        /* End of Switch: '<S258>/Switch1' */

        /* RelationalOperator: '<S258>/GreaterThan1' incorporates:
         *  Constant: '<S258>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnAftrDbnc_WL = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S258>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ow = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S178>/CountDownResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S178>/EdgeRising2' */
        /* Logic: '<S268>/AND' incorporates:
         *  Logic: '<S268>/OR1'
         *  UnitDelay: '<S268>/UnitDelay'
         */
        rtb_Switch1_bl = (rtb_VariantMerge_For_Variant_So &&
                          (!BTRR_ac_DW.UnitDelay_DSTATE_ai));

        /* Update for UnitDelay: '<S268>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ai = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S178>/EdgeRising2' */

        /* Logic: '<S178>/Logical12' incorporates:
         *  Logic: '<S178>/Logical27'
         */
        rtb_UnitDelay_do = ((VeBTRR_b_BTIS2_FltDtct_AD) &&
                            (VeBTRR_b_BTIS_FltDtct_AD));

        /* Outputs for Atomic SubSystem: '<S178>/SignalLatchOnWithReset1' */
        /* Logic: '<S287>/OR1' incorporates:
         *  Logic: '<S178>/Logical12'
         *  Logic: '<S178>/Logical13'
         *  Logic: '<S178>/Logical19'
         *  Logic: '<S287>/NOT'
         *  Logic: '<S287>/OR'
         *  UnitDelay: '<S287>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtch_BothClntInFlt_BTIS2 = ((rtb_UnitDelay_do &&
            rtb_Switch1_bl) || ((VeBTRR_b_LTAPOnLtch_WL_tmp &&
            (VeBTRR_b_BTIS2_FltDtct_AD)) && (BTRR_ac_DW.UnitDelay_DSTATE_hx)));

        /* Update for UnitDelay: '<S287>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_hx = VeBTRR_b_LTAPOnLtch_BothClntInFlt_BTIS2;

        /* End of Outputs for SubSystem: '<S178>/SignalLatchOnWithReset1' */

        /* Outputs for Atomic SubSystem: '<S178>/CountDownResetEnabled1' */
        /* Switch: '<S259>/Switch1' incorporates:
         *  Constant: '<S259>/ConstantValue'
         *  Logic: '<S178>/Logical15'
         *  Logic: '<S259>/AND'
         *  RelationalOperator: '<S259>/GreaterThan'
         *  Switch: '<S259>/Switch2'
         *  UnitDelay: '<S259>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtch_BothClntInFlt_BTIS2)
        {
            /* Switch: '<S259>/Switch1' incorporates:
             *  Constant: '<S277>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_BothBattInFA_WL;
        }
        else if ((VeBTRR_b_LTAPOnLtch_BothClntInFlt_BTIS2) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_f) > 0))
        {
            /* Switch: '<S259>/Switch2' incorporates:
             *  Constant: '<S259>/ConstantValue1'
             *  Sum: '<S259>/Subtraction'
             *  Switch: '<S259>/Switch1'
             *  UnitDelay: '<S259>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_f) - 1));
        }
        else
        {
            /* Switch: '<S259>/Switch1' incorporates:
             *  Switch: '<S259>/Switch2'
             *  UnitDelay: '<S259>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_f;
        }

        /* End of Switch: '<S259>/Switch1' */

        /* RelationalOperator: '<S259>/GreaterThan1' incorporates:
         *  Constant: '<S259>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnAftrDbnc_BothClntInFlt_BTIS2 = (((sint32)rtb_Switch1_mu) >
            0);

        /* Update for UnitDelay: '<S259>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S178>/CountDownResetEnabled1' */

        /* Outputs for Atomic SubSystem: '<S178>/EdgeFalling1' */
        /* Logic: '<S264>/AND' incorporates:
         *  Logic: '<S264>/OR1'
         *  UnitDelay: '<S264>/UnitDelay'
         */
        rtb_Switch1_bl = ((!rtb_VariantMerge_For_Variant_So) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_ouf));

        /* Update for UnitDelay: '<S264>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ouf = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S178>/EdgeFalling1' */

        /* Outputs for Atomic SubSystem: '<S178>/SignalLatchOnWithReset2' */
        /* Logic: '<S288>/OR1' incorporates:
         *  Logic: '<S178>/Logical10'
         *  Logic: '<S178>/Logical20'
         *  Logic: '<S178>/Logical21'
         *  Logic: '<S288>/NOT'
         *  Logic: '<S288>/OR'
         *  UnitDelay: '<S288>/UnitDelay'
         */
        VeBTRR_b_LTAPOffLtch_WL = (((VeBTRR_b_BTIS_FltDtct_AD) && rtb_Switch1_bl)
            || (((!rtb_VariantMerge_For_Variant_So) && (VeBTRR_b_BTIS_FltDtct_AD))
                && (BTRR_ac_DW.UnitDelay_DSTATE_c2)));

        /* Update for UnitDelay: '<S288>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_c2 = VeBTRR_b_LTAPOffLtch_WL;

        /* End of Outputs for SubSystem: '<S178>/SignalLatchOnWithReset2' */

        /* Outputs for Atomic SubSystem: '<S178>/CountDownResetEnabled2' */
        /* Switch: '<S260>/Switch1' incorporates:
         *  Constant: '<S260>/ConstantValue'
         *  Logic: '<S178>/Logical23'
         *  Logic: '<S260>/AND'
         *  RelationalOperator: '<S260>/GreaterThan'
         *  Switch: '<S260>/Switch2'
         *  UnitDelay: '<S260>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOffLtch_WL)
        {
            /* Switch: '<S260>/Switch1' incorporates:
             *  Constant: '<S273>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOffDly_BTISFA_WL;
        }
        else if ((VeBTRR_b_LTAPOffLtch_WL) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_hy) > 0))
        {
            /* Switch: '<S260>/Switch2' incorporates:
             *  Constant: '<S260>/ConstantValue1'
             *  Sum: '<S260>/Subtraction'
             *  Switch: '<S260>/Switch1'
             *  UnitDelay: '<S260>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_hy) - 1));
        }
        else
        {
            /* Switch: '<S260>/Switch1' incorporates:
             *  Switch: '<S260>/Switch2'
             *  UnitDelay: '<S260>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_hy;
        }

        /* End of Switch: '<S260>/Switch1' */

        /* RelationalOperator: '<S260>/GreaterThan1' incorporates:
         *  Constant: '<S260>/ConstantValue2'
         */
        VeBTRR_b_LTAPOffDly_WL = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S260>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_hy = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S178>/CountDownResetEnabled2' */

        /* Outputs for Atomic SubSystem: '<S178>/EdgeRising1' */
        /* Logic: '<S267>/AND' incorporates:
         *  Logic: '<S267>/OR1'
         *  UnitDelay: '<S267>/UnitDelay'
         */
        rtb_Switch1_bl = (rtb_VariantMerge_For_Variant_So &&
                          (!BTRR_ac_DW.UnitDelay_DSTATE_gs));

        /* Update for UnitDelay: '<S267>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_gs = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S178>/EdgeRising1' */

        /* Logic: '<S178>/Logical22' incorporates:
         *  Logic: '<S178>/Logical25'
         */
        rtb_UnitDelay_p0 = !VeBTRR_b_BTIS_FltDtct_AD;

        /* Outputs for Atomic SubSystem: '<S178>/SignalLatchOnWithReset3' */
        /* Logic: '<S289>/NOT' incorporates:
         *  Logic: '<S178>/Logical25'
         *  Logic: '<S178>/Logical31'
         *  Logic: '<S178>/Logical32'
         *  Logic: '<S178>/Logical36'
         */
        VeBTRR_b_LTAPOnLtch_WL_tmp = ((rtb_VariantMerge_For_Variant_So &&
            rtb_UnitDelay_p0) && (VeBTRR_b_BTIS2_FltDtct_AD));

        /* Logic: '<S289>/OR1' incorporates:
         *  Logic: '<S178>/Logical1'
         *  Logic: '<S178>/Logical22'
         *  Logic: '<S178>/Logical25'
         *  Logic: '<S289>/NOT'
         *  Logic: '<S289>/OR'
         *  UnitDelay: '<S289>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtch_WL_BTIS2 = ((((VeBTRR_b_BTIS2_FltDtct_AD) &&
            rtb_UnitDelay_p0) && rtb_Switch1_bl) || (VeBTRR_b_LTAPOnLtch_WL_tmp &&
            (BTRR_ac_DW.UnitDelay_DSTATE_el)));

        /* Update for UnitDelay: '<S289>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_el = VeBTRR_b_LTAPOnLtch_WL_BTIS2;

        /* End of Outputs for SubSystem: '<S178>/SignalLatchOnWithReset3' */

        /* Outputs for Atomic SubSystem: '<S178>/CountDownResetEnabled3' */
        /* Switch: '<S261>/Switch1' incorporates:
         *  Constant: '<S261>/ConstantValue'
         *  Logic: '<S178>/Logical34'
         *  Logic: '<S261>/AND'
         *  RelationalOperator: '<S261>/GreaterThan'
         *  Switch: '<S261>/Switch2'
         *  UnitDelay: '<S261>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtch_WL_BTIS2)
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  Constant: '<S274>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_BTIS2FA_WL;
        }
        else if ((VeBTRR_b_LTAPOnLtch_WL_BTIS2) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_h) > 0))
        {
            /* Switch: '<S261>/Switch2' incorporates:
             *  Constant: '<S261>/ConstantValue1'
             *  Sum: '<S261>/Subtraction'
             *  Switch: '<S261>/Switch1'
             *  UnitDelay: '<S261>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_h) - 1));
        }
        else
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  Switch: '<S261>/Switch2'
             *  UnitDelay: '<S261>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_h;
        }

        /* End of Switch: '<S261>/Switch1' */

        /* RelationalOperator: '<S261>/GreaterThan1' incorporates:
         *  Constant: '<S261>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnAftrDbnc_WL_BTIS2 = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S261>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S178>/CountDownResetEnabled3' */

        /* Outputs for Atomic SubSystem: '<S178>/EdgeFalling2' */
        /* Logic: '<S265>/OR1' incorporates:
         *  Logic: '<S178>/Logical38'
         */
        rtb_UnitDelay_p0 = !rtb_VariantMerge_For_Variant_So;

        /* Logic: '<S265>/AND' incorporates:
         *  Logic: '<S265>/OR1'
         *  UnitDelay: '<S265>/UnitDelay'
         */
        rtb_Switch1_bl = (rtb_UnitDelay_p0 && (BTRR_ac_DW.UnitDelay_DSTATE_c1));

        /* Update for UnitDelay: '<S265>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_c1 = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S178>/EdgeFalling2' */

        /* Outputs for Atomic SubSystem: '<S178>/SignalLatchOnWithReset4' */
        /* Logic: '<S290>/NOT' incorporates:
         *  Logic: '<S178>/Logical38'
         *  Logic: '<S178>/Logical40'
         *  Logic: '<S178>/Logical42'
         *  Switch: '<S271>/Switch1'
         *  Switch: '<S271>/Switch2'
         *  Switch: '<S271>/Switch3'
         */
        rtb_UnitDelay_p0 = (rtb_UnitDelay_p0 && (VeBTRR_b_BTIS2_FltDtct_AD));

        /* Logic: '<S290>/OR1' incorporates:
         *  Logic: '<S178>/Logical37'
         *  Logic: '<S178>/Logical38'
         *  Logic: '<S290>/NOT'
         *  Logic: '<S290>/OR'
         *  UnitDelay: '<S290>/UnitDelay'
         */
        VeBTRR_b_LTAPOffLtch_WL_BTIS2 = (((VeBTRR_b_BTIS2_FltDtct_AD) &&
            rtb_Switch1_bl) || (rtb_UnitDelay_p0 &&
                                (BTRR_ac_DW.UnitDelay_DSTATE_en)));

        /* Update for UnitDelay: '<S290>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_en = VeBTRR_b_LTAPOffLtch_WL_BTIS2;

        /* End of Outputs for SubSystem: '<S178>/SignalLatchOnWithReset4' */

        /* Outputs for Atomic SubSystem: '<S178>/CountDownResetEnabled4' */
        /* Switch: '<S262>/Switch1' incorporates:
         *  Constant: '<S262>/ConstantValue'
         *  Logic: '<S178>/Logical43'
         *  Logic: '<S262>/AND'
         *  RelationalOperator: '<S262>/GreaterThan'
         *  Switch: '<S262>/Switch2'
         *  UnitDelay: '<S262>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOffLtch_WL_BTIS2)
        {
            /* Switch: '<S262>/Switch1' incorporates:
             *  Constant: '<S272>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOffDly_BTIS2FA_WL;
        }
        else if ((VeBTRR_b_LTAPOffLtch_WL_BTIS2) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_ld) > 0))
        {
            /* Switch: '<S262>/Switch2' incorporates:
             *  Constant: '<S262>/ConstantValue1'
             *  Sum: '<S262>/Subtraction'
             *  Switch: '<S262>/Switch1'
             *  UnitDelay: '<S262>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_ld) - 1));
        }
        else
        {
            /* Switch: '<S262>/Switch1' incorporates:
             *  Switch: '<S262>/Switch2'
             *  UnitDelay: '<S262>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_ld;
        }

        /* End of Switch: '<S262>/Switch1' */

        /* RelationalOperator: '<S262>/GreaterThan1' incorporates:
         *  Constant: '<S262>/ConstantValue2'
         */
        VeBTRR_b_LTAPOffDly_WL_BTIS2 = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S262>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_ld = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S178>/CountDownResetEnabled4' */

        /* Outputs for Atomic SubSystem: '<S178>/EdgeRising3' */
        /* Logic: '<S269>/AND' incorporates:
         *  Logic: '<S269>/OR1'
         *  UnitDelay: '<S269>/UnitDelay'
         */
        rtb_Switch1_bl = (rtb_VariantMerge_For_Variant_So &&
                          (!BTRR_ac_DW.UnitDelay_DSTATE_hq));

        /* Update for UnitDelay: '<S269>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_hq = rtb_VariantMerge_For_Variant_So;

        /* End of Outputs for SubSystem: '<S178>/EdgeRising3' */

        /* Logic: '<S178>/Logical50' incorporates:
         *  Logic: '<S178>/Logical2'
         *  Logic: '<S178>/Logical52'
         *  Logic: '<S178>/Logical53'
         */
        rtb_OR1_a2 = (rtb_VariantMerge_For_Variant_So &&
                      (VeBTRR_b_BTIS_FltDtct_AD));

        /* Outputs for Atomic SubSystem: '<S178>/SignalLatchOnWithReset5' */
        /* Logic: '<S291>/NOT' incorporates:
         *  Logic: '<S178>/Logical26'
         *  Logic: '<S178>/Logical29'
         *  Logic: '<S178>/Logical50'
         *  Logic: '<S178>/Logical51'
         */
        VeBTRR_b_LTAPOnLtch_BothClntInF = (rtb_OR1_a2 &&
            (VeBTRR_b_BTIS2_FltDtct_AD));

        /* Logic: '<S291>/OR1' incorporates:
         *  Logic: '<S178>/Logical27'
         *  Logic: '<S178>/Logical50'
         *  Logic: '<S291>/NOT'
         *  Logic: '<S291>/OR'
         *  UnitDelay: '<S291>/UnitDelay'
         */
        VeBTRR_b_LTAPOnLtch_BothClntInFlt = ((rtb_UnitDelay_do && rtb_Switch1_bl)
            || (VeBTRR_b_LTAPOnLtch_BothClntInF &&
                (BTRR_ac_DW.UnitDelay_DSTATE_dz)));

        /* Update for UnitDelay: '<S291>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_dz = VeBTRR_b_LTAPOnLtch_BothClntInFlt;

        /* End of Outputs for SubSystem: '<S178>/SignalLatchOnWithReset5' */

        /* Outputs for Atomic SubSystem: '<S178>/CountDownResetEnabled5' */
        /* Switch: '<S263>/Switch1' incorporates:
         *  Constant: '<S263>/ConstantValue'
         *  Logic: '<S178>/Logical48'
         *  Logic: '<S263>/AND'
         *  RelationalOperator: '<S263>/GreaterThan'
         *  Switch: '<S263>/Switch2'
         *  UnitDelay: '<S263>/UnitDelay'
         */
        if (!VeBTRR_b_LTAPOnLtch_BothClntInFlt)
        {
            /* Switch: '<S263>/Switch1' incorporates:
             *  Constant: '<S276>/Calib'
             */
            rtb_Switch1_mu = KeBTRR_Cnt_LTAPOnDly_BothBattInFA_BTIS;
        }
        else if ((VeBTRR_b_LTAPOnLtch_BothClntInFlt) && (((sint32)
                   BTRR_ac_DW.UnitDelay_DSTATE_p0) > 0))
        {
            /* Switch: '<S263>/Switch2' incorporates:
             *  Constant: '<S263>/ConstantValue1'
             *  Sum: '<S263>/Subtraction'
             *  Switch: '<S263>/Switch1'
             *  UnitDelay: '<S263>/UnitDelay'
             */
            rtb_Switch1_mu = (uint16)((sint32)(((sint32)
                BTRR_ac_DW.UnitDelay_DSTATE_p0) - 1));
        }
        else
        {
            /* Switch: '<S263>/Switch1' incorporates:
             *  Switch: '<S263>/Switch2'
             *  UnitDelay: '<S263>/UnitDelay'
             */
            rtb_Switch1_mu = BTRR_ac_DW.UnitDelay_DSTATE_p0;
        }

        /* End of Switch: '<S263>/Switch1' */

        /* RelationalOperator: '<S263>/GreaterThan1' incorporates:
         *  Constant: '<S263>/ConstantValue2'
         */
        VeBTRR_b_LTAPOnAftrDbnc_BothClntInFlt = (((sint32)rtb_Switch1_mu) > 0);

        /* Update for UnitDelay: '<S263>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_p0 = rtb_Switch1_mu;

        /* End of Outputs for SubSystem: '<S178>/CountDownResetEnabled5' */

        /* Logic: '<S178>/Logical3' incorporates:
         *  Constant: '<S281>/Calib'
         *  Logic: '<S178>/Logical8'
         */
        VeBTRR_b_LTAPOnAftrDly_WL = ((!VeBTRR_b_LTAPOnAftrDbnc_WL) &&
            (KeBTRR_b_Enbl_LTAPOnDly_BTISFA_WL));

        /* Switch: '<S178>/Switch' incorporates:
         *  Constant: '<S178>/TRUEConstant'
         *  Constant: '<S281>/Calib'
         *  Logic: '<S178>/Logical54'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_BTISFA_WL)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtch_WL;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S178>/Switch' */

        /* Logic: '<S178>/Logical2' */
        VeBTRR_b_LTAPOn_WL = ((rtb_OR1_a2 && rtb_Switch1_pz) && rtb_UnitDelay_do);

        /* Logic: '<S178>/Logical18' incorporates:
         *  Constant: '<S279>/Calib'
         *  Logic: '<S178>/Logical24'
         */
        VeBTRR_b_LTAPOffAftDbnc_WL = ((!VeBTRR_b_LTAPOffDly_WL) &&
            (KeBTRR_b_Enbl_LTAPOffDly_BTISFA_WL));

        /* Switch: '<S178>/Switch1' incorporates:
         *  Constant: '<S178>/TRUEConstant1'
         *  Constant: '<S279>/Calib'
         *  Logic: '<S178>/Logical55'
         */
        if (KeBTRR_b_Enbl_LTAPOffDly_BTISFA_WL)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOffLtch_WL;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S178>/Switch1' */

        /* Logic: '<S178>/Logical9' incorporates:
         *  Logic: '<S178>/Logical17'
         */
        VeBTRR_b_LTAPOff_WL = (((!rtb_VariantMerge_For_Variant_So) &&
                                (VeBTRR_b_BTIS_FltDtct_AD)) && rtb_UnitDelay_do);

        /* Logic: '<S178>/Logical47' incorporates:
         *  Constant: '<S282>/Calib'
         *  Logic: '<S178>/Logical49'
         */
        VeBTRR_b_LTAPOnAftrDly_BothClntInFlt =
            ((!VeBTRR_b_LTAPOnAftrDbnc_BothClntInFlt) &&
             (KeBTRR_b_Enbl_LTAPOnDly_BothBattInFA_BTIS));

        /* Switch: '<S178>/Switch2' incorporates:
         *  Constant: '<S178>/TRUEConstant2'
         *  Constant: '<S282>/Calib'
         *  Logic: '<S178>/Logical56'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_BothBattInFA_BTIS)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtch_BothClntInFlt;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S178>/Switch2' */

        /* Logic: '<S178>/Logical51' */
        VeBTRR_b_LTAPOn_BothClntInFlt = (VeBTRR_b_LTAPOnLtch_BothClntInF &&
            rtb_UnitDelay_do);

        /* Switch: '<S270>/Switch1' incorporates:
         *  Switch: '<S270>/Switch2'
         *  Switch: '<S270>/Switch3'
         *  Switch: '<S270>/Switch4'
         *  Switch: '<S270>/Switch5'
         *  Switch: '<S270>/Switch6'
         */
        if (VeBTRR_b_LTAPOnAftrDly_WL)
        {
            /* Switch: '<S270>/Switch1' */
            VeBTRR_T_ArbBattClntTmpIn_WL =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_f;
        }
        else if (VeBTRR_b_LTAPOn_WL)
        {
            /* Switch: '<S270>/Switch2' incorporates:
             *  Switch: '<S270>/Switch1'
             */
            VeBTRR_T_ArbBattClntTmpIn_WL =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_f;
        }
        else if (VeBTRR_b_LTAPOffAftDbnc_WL)
        {
            /* Switch: '<S270>/Switch3' incorporates:
             *  Switch: '<S270>/Switch1'
             *  Switch: '<S270>/Switch2'
             */
            VeBTRR_T_ArbBattClntTmpIn_WL =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else if (VeBTRR_b_LTAPOff_WL)
        {
            /* Switch: '<S270>/Switch4' incorporates:
             *  Switch: '<S270>/Switch1'
             *  Switch: '<S270>/Switch2'
             *  Switch: '<S270>/Switch3'
             */
            VeBTRR_T_ArbBattClntTmpIn_WL =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else if (VeBTRR_b_LTAPOnAftrDly_BothClntInFlt)
        {
            /* Switch: '<S270>/Switch5' incorporates:
             *  Switch: '<S270>/Switch1'
             *  Switch: '<S270>/Switch2'
             *  Switch: '<S270>/Switch3'
             *  Switch: '<S270>/Switch4'
             */
            VeBTRR_T_ArbBattClntTmpIn_WL =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b0;
        }
        else if (VeBTRR_b_LTAPOn_BothClntInFlt)
        {
            /* Switch: '<S270>/Switch6' incorporates:
             *  Switch: '<S270>/Switch1'
             *  Switch: '<S270>/Switch2'
             *  Switch: '<S270>/Switch3'
             *  Switch: '<S270>/Switch4'
             *  Switch: '<S270>/Switch5'
             */
            VeBTRR_T_ArbBattClntTmpIn_WL =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b0;
        }
        else
        {
            /* Switch: '<S270>/Switch1' incorporates:
             *  Switch: '<S270>/Switch2'
             *  Switch: '<S270>/Switch3'
             *  Switch: '<S270>/Switch4'
             *  Switch: '<S270>/Switch5'
             *  UnitDelay: '<S178>/UnitDelay'
             */
            VeBTRR_T_ArbBattClntTmpIn_WL = BTRR_ac_DW.UnitDelay_DSTATE_c;
        }

        /* End of Switch: '<S270>/Switch1' */

        /* Logic: '<S178>/Logical30' incorporates:
         *  Constant: '<S280>/Calib'
         *  Logic: '<S178>/Logical35'
         */
        VeBTRR_b_LTAPOnAftrDly_WL_BTIS2 = ((!VeBTRR_b_LTAPOnAftrDbnc_WL_BTIS2) &&
            (KeBTRR_b_Enbl_LTAPOnDly_BTIS2FA_WL));

        /* Switch: '<S178>/Switch3' incorporates:
         *  Constant: '<S178>/TRUEConstant3'
         *  Constant: '<S280>/Calib'
         *  Logic: '<S178>/Logical57'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_BTIS2FA_WL)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtch_WL_BTIS2;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S178>/Switch3' */

        /* Logic: '<S178>/Logical36' */
        VeBTRR_b_LTAPOn_WL_BTIS2 = (VeBTRR_b_LTAPOnLtch_WL_tmp &&
            rtb_UnitDelay_do);

        /* Logic: '<S178>/Logical39' incorporates:
         *  Constant: '<S278>/Calib'
         *  Logic: '<S178>/Logical44'
         */
        VeBTRR_b_LTAPOffAftDbnc_WL_BTIS2 = ((!VeBTRR_b_LTAPOffDly_WL_BTIS2) &&
            (KeBTRR_b_Enbl_LTAPOffDly_BTIS2FA_WL));

        /* Logic: '<S178>/Logical14' incorporates:
         *  Constant: '<S283>/Calib'
         *  Logic: '<S178>/Logical16'
         */
        VeBTRR_b_LTAPOnAftrDly_BothClntInFlt_BTIS2 =
            ((!VeBTRR_b_LTAPOnAftrDbnc_BothClntInFlt_BTIS2) &&
             (KeBTRR_b_Enbl_LTAPOnDly_BothBattInFA_WL));

        /* Switch: '<S178>/Switch5' incorporates:
         *  Constant: '<S178>/TRUEConstant5'
         *  Constant: '<S283>/Calib'
         *  Logic: '<S178>/Logical59'
         */
        if (KeBTRR_b_Enbl_LTAPOnDly_BothBattInFA_WL)
        {
            rtb_UnitDelay_do = !VeBTRR_b_LTAPOnLtch_BothClntInFlt_BTIS2;
        }
        else
        {
            rtb_UnitDelay_do = true;
        }

        /* End of Switch: '<S178>/Switch5' */

        /* Logic: '<S178>/Logical26' */
        VeBTRR_b_LTAPOn_BothClntInFlt_BTIS2 = (VeBTRR_b_LTAPOnLtch_BothClntInF &&
            rtb_UnitDelay_do);

        /* Switch: '<S271>/Switch1' incorporates:
         *  Constant: '<S278>/Calib'
         *  Switch: '<S178>/Switch4'
         *  Switch: '<S271>/Switch2'
         *  Switch: '<S271>/Switch3'
         */
        if (VeBTRR_b_LTAPOnAftrDly_WL_BTIS2)
        {
            /* Switch: '<S271>/Switch1' */
            VeBTRR_T_ArbBattClntTmp2In_WL = TmpSignalConversionAtTmpVM_Fc_h;
        }
        else if (VeBTRR_b_LTAPOn_WL_BTIS2)
        {
            /* Switch: '<S271>/Switch1' incorporates:
             *  Switch: '<S271>/Switch2'
             */
            VeBTRR_T_ArbBattClntTmp2In_WL = TmpSignalConversionAtTmpVM_Fc_h;
        }
        else if (VeBTRR_b_LTAPOffAftDbnc_WL_BTIS2)
        {
            /* Switch: '<S271>/Switch1' incorporates:
             *  Switch: '<S271>/Switch2'
             *  Switch: '<S271>/Switch3'
             */
            VeBTRR_T_ArbBattClntTmp2In_WL =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_F_md;
        }
        else
        {
            if (KeBTRR_b_Enbl_LTAPOffDly_BTIS2FA_WL)
            {
                /* Switch: '<S178>/Switch4' incorporates:
                 *  Logic: '<S178>/Logical58'
                 *  Switch: '<S271>/Switch2'
                 *  Switch: '<S271>/Switch3'
                 */
                rtb_UnitDelay_do = !VeBTRR_b_LTAPOffLtch_WL_BTIS2;
            }
            else
            {
                /* Switch: '<S178>/Switch4' incorporates:
                 *  Constant: '<S178>/TRUEConstant4'
                 *  Switch: '<S271>/Switch2'
                 *  Switch: '<S271>/Switch3'
                 */
                rtb_UnitDelay_do = true;
            }

            /* Switch: '<S271>/Switch4' incorporates:
             *  Logic: '<S178>/Logical42'
             *  Switch: '<S271>/Switch2'
             *  Switch: '<S271>/Switch3'
             *  Switch: '<S271>/Switch5'
             *  Switch: '<S271>/Switch6'
             */
            if (rtb_UnitDelay_p0 && rtb_UnitDelay_do)
            {
                /* Switch: '<S271>/Switch1' incorporates:
                 *  Switch: '<S271>/Switch3'
                 *  Switch: '<S271>/Switch4'
                 */
                VeBTRR_T_ArbBattClntTmp2In_WL =
                    BTRR_ac_B.TmpSignalConversionAtTmpVM_F_md;
            }
            else if (VeBTRR_b_LTAPOnAftrDly_BothClntInFlt_BTIS2)
            {
                /* Switch: '<S271>/Switch5' incorporates:
                 *  Switch: '<S271>/Switch1'
                 */
                VeBTRR_T_ArbBattClntTmp2In_WL =
                    BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b0;
            }
            else if (VeBTRR_b_LTAPOn_BothClntInFlt_BTIS2)
            {
                /* Switch: '<S271>/Switch6' incorporates:
                 *  Switch: '<S271>/Switch1'
                 *  Switch: '<S271>/Switch5'
                 */
                VeBTRR_T_ArbBattClntTmp2In_WL =
                    BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b0;
            }
            else
            {
                /* Switch: '<S271>/Switch1' incorporates:
                 *  Switch: '<S271>/Switch5'
                 *  UnitDelay: '<S178>/UnitDelay1'
                 */
                VeBTRR_T_ArbBattClntTmp2In_WL = BTRR_ac_DW.UnitDelay1_DSTATE;
            }

            /* End of Switch: '<S271>/Switch4' */
        }

        /* Switch: '<S666>/Switch1' incorporates:
         *  Gain: '<S284>/Gain'
         */
        rtb_Switch1_ln = VeBTRR_T_ArbBattClntTmpIn_WL;

        /* Merge: '<S151>/Merge1' incorporates:
         *  Gain: '<S285>/Gain'
         */
        BTRR_ac_B.Merge1 = VeBTRR_T_ArbBattClntTmp2In_WL;

        /* Update for UnitDelay: '<S178>/UnitDelay' */
        BTRR_ac_DW.UnitDelay_DSTATE_c = VeBTRR_T_ArbBattClntTmpIn_WL;

        /* Update for UnitDelay: '<S178>/UnitDelay1' */
        BTRR_ac_DW.UnitDelay1_DSTATE = VeBTRR_T_ArbBattClntTmp2In_WL;

        /* End of Outputs for SubSystem: '<S151>/BTIS_FA_RA_WL' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S151>/Dflt_Tmp' incorporates:
         *  ActionPort: '<S179>/ActionPort'
         */
        /* Switch: '<S666>/Switch1' incorporates:
         *  Constant: '<S293>/Calib'
         *  Gain: '<S294>/Gain'
         */
        rtb_Switch1_ln = KeBTRR_T_Dflt_BTISTmp;

        /* Merge: '<S151>/Merge1' incorporates:
         *  Constant: '<S292>/Calib'
         *  Gain: '<S295>/Gain'
         */
        BTRR_ac_B.Merge1 = KeBTRR_T_Dflt_BTIS2Tmp;

        /* End of Outputs for SubSystem: '<S151>/Dflt_Tmp' */
    }

    /* End of If: '<S151>/If' */

    /* Switch: '<S151>/Switch' incorporates:
     *  Constant: '<S181>/Calib'
     *  Logic: '<S151>/Logical18'
     *  Logic: '<S151>/Logical3'
     */
    if ((!VeBTRR_b_BTIS_FltDtct_AD) || (KeBTRR_b_Dsbl_BTISRA))
    {
        /* Switch: '<S151>/Switch' */
        VeBTRR_T_Arb_BattClntTmpIn = TmpSignalConversionAtTmpVM_Fc_h;
    }
    else
    {
        /* Switch: '<S151>/Switch' */
        VeBTRR_T_Arb_BattClntTmpIn = rtb_Switch1_ln;
    }

    /* End of Switch: '<S151>/Switch' */

    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S180>/Calib'
     *  Logic: '<S151>/Logical1'
     *  Logic: '<S151>/Logical2'
     */
    if ((!VeBTRR_b_BTIS2_FltDtct_AD) || (KeBTRR_b_Dsbl_BTIS2RA))
    {
        /* Switch: '<S151>/Switch1' */
        VeBTRR_T_Arb_BattClntTmp2In = BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_f;
    }
    else
    {
        /* Switch: '<S151>/Switch1' */
        VeBTRR_T_Arb_BattClntTmp2In = BTRR_ac_B.Merge1;
    }

    /* End of Switch: '<S151>/Switch1' */

    /* MinMax: '<S151>/MinMax' */
    VeBTRR_T_Arb_BTISBTIS2_Max = fmaxf(VeBTRR_T_Arb_BattClntTmpIn,
        VeBTRR_T_Arb_BattClntTmp2In);

    /* Logic: '<S296>/Logical2' incorporates:
     *  Constant: '<S317>/Constant'
     *  Constant: '<S323>/Calib'
     *  Logic: '<S296>/Logical26'
     *  RelationalOperator: '<S296>/Comparison1'
     *  Switch: '<S980>/Switch'
     */
    VeBTRR_b_BCH_LOC_Flts = (((((uint32)VeBTRR_b_BattHtr_LOC) !=
        CeBPCR_e_LOC_BatClntHtr_False) || (VeBTRR_b_BattHtr_LOC_FA)) &&
        (KeBTRR_b_Enbl_BCH_LOC));

    /* Logic: '<S296>/Logical20' incorporates:
     *  Constant: '<S320>/Constant1'
     *  Constant: '<S320>/Constant2'
     *  Constant: '<S326>/Calib'
     *  DataStoreRead: '<S320>/StatusByte_BattHeat'
     *  Logic: '<S320>/LogicalOperator'
     *  RelationalOperator: '<S320>/RelationalOperator1'
     *  RelationalOperator: '<S320>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S320>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S320>/BitwiseOperator2'
     */
    VeBTRR_b_BattHeatFlt = ((((((sint32)BTRR_ac_DW.StatusByte_BattHeat) & 1) > 0)
        && ((((uint32)BTRR_ac_DW.StatusByte_BattHeat) & 64U) == 0U)) &&
                            (KeBTRR_b_Enbl_BattHeating_Flt));

    /* Logic: '<S296>/Logical5' incorporates:
     *  Constant: '<S321>/Constant1'
     *  Constant: '<S321>/Constant2'
     *  Constant: '<S324>/Calib'
     *  DataStoreRead: '<S321>/StatusByte_CoolantHeaterBPerf'
     *  Logic: '<S321>/LogicalOperator'
     *  RelationalOperator: '<S321>/RelationalOperator1'
     *  RelationalOperator: '<S321>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S321>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S321>/BitwiseOperator2'
     */
    VeBTRR_b_BattHtrPerf_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_BCH_PerfFlt));

    /* S-Function (sfix_bitop): '<S319>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S319>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  S-Function (sfix_bitop): '<S540>/BitwiseOperator2'
     */
    VeBTRR_b_BHOSFlt_tmp = ((sint32)BTRR_ac_DW.StatusByte_BattCoolPmpHtrBTempS)
        & 1;

    /* S-Function (sfix_bitop): '<S319>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S319>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     *  S-Function (sfix_bitop): '<S540>/BitwiseOperator1'
     */
    VeBTRR_b_BHOSFlt_tmp_0 = ((uint32)BTRR_ac_DW.StatusByte_BattCoolPmpHtrBTempS)
        & 64U;

    /* Logic: '<S296>/Logical8' incorporates:
     *  Constant: '<S319>/Constant1'
     *  Constant: '<S319>/Constant2'
     *  Constant: '<S325>/Calib'
     *  Logic: '<S319>/LogicalOperator'
     *  RelationalOperator: '<S319>/RelationalOperator1'
     *  RelationalOperator: '<S319>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S319>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S319>/BitwiseOperator2'
     */
    VeBTRR_b_BHOSFlt = (((VeBTRR_b_BHOSFlt_tmp > 0) && (VeBTRR_b_BHOSFlt_tmp_0 ==
                          0U)) && (KeBTRR_b_Enbl_BHOS_Flt));

    /* Logic: '<S296>/Logical3' incorporates:
     *  Constant: '<S315>/Constant'
     *  Constant: '<S316>/Constant'
     *  Constant: '<S318>/Constant'
     *  Constant: '<S322>/Constant1'
     *  Constant: '<S322>/Constant2'
     *  Constant: '<S327>/Calib'
     *  Constant: '<S328>/Calib'
     *  DataStoreRead: '<S322>/StatusByte_HeatingElmntPerf'
     *  Logic: '<S296>/Logical1'
     *  Logic: '<S296>/Logical4'
     *  Logic: '<S296>/Logical6'
     *  Logic: '<S322>/LogicalOperator'
     *  RelationalOperator: '<S296>/Comparison11'
     *  RelationalOperator: '<S296>/Comparison2'
     *  RelationalOperator: '<S296>/Comparison3'
     *  RelationalOperator: '<S322>/RelationalOperator1'
     *  RelationalOperator: '<S322>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S322>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S322>/BitwiseOperator2'
     */
    VeBTRR_b_BattHeaterFlts = ((((((VeBTRR_b_BattHeatFlt) ||
        (VeBTRR_b_BCH_LOC_Flts)) || (VeBTRR_b_BattHtrPerf_Flt)) ||
        (VeBTRR_b_BHOSFlt)) || ((((((sint32)
        BTRR_ac_DW.StatusByte_HeatingElmntPerf) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_HeatingElmntPerf) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_HEP_Flt))) || ((((((uint32)Switch_j) ==
        CeHTIR_e_HtrSts_LockedUntilNextStart) || (((uint32)Switch_j) ==
        CeHTIR_e_HtrSts_LockedUntilService)) || (((uint32)Switch_j) ==
        CeHTIR_e_HtrSts_LockedPermanent)) && (KeBTRR_b_Enbl_Htr4Sts_Flt)));

    /* S-Function (sfix_bitop): '<S333>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S333>/StatusByte_HB_CT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S542>/BitwiseOperator2'
     */
    VeBTRR_b_BTISFlt_tmp = ((sint32)BTRR_ac_DW.StatusByte_HB_CT_SnsrPerf) & 1;

    /* S-Function (sfix_bitop): '<S333>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S333>/StatusByte_HB_CT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S542>/BitwiseOperator1'
     */
    VeBTRR_b_BTISFlt_tmp_0 = ((uint32)BTRR_ac_DW.StatusByte_HB_CT_SnsrPerf) &
        64U;

    /* Logic: '<S298>/Logical7' incorporates:
     *  Constant: '<S333>/Constant1'
     *  Constant: '<S333>/Constant2'
     *  Constant: '<S335>/Calib'
     *  Logic: '<S333>/LogicalOperator'
     *  RelationalOperator: '<S333>/RelationalOperator1'
     *  RelationalOperator: '<S333>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S333>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S333>/BitwiseOperator2'
     */
    VeBTRR_b_BTISFlt = (((VeBTRR_b_BTISFlt_tmp > 0) && (VeBTRR_b_BTISFlt_tmp_0 ==
                          0U)) && (KeBTRR_b_Enbl_BTIS_Flt));

    /* S-Function (sfix_bitop): '<S332>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S332>/StatusByte_CoolOutTempSnsCkt'
     *  S-Function (sfix_bitop): '<S541>/BitwiseOperator2'
     */
    VeBTRR_b_BTOSFlt_tmp = ((sint32)BTRR_ac_DW.StatusByte_CoolOutTempSnsCkt) & 1;

    /* S-Function (sfix_bitop): '<S332>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S332>/StatusByte_CoolOutTempSnsCkt'
     *  S-Function (sfix_bitop): '<S541>/BitwiseOperator1'
     */
    VeBTRR_b_BTOSFlt_tmp_0 = ((uint32)BTRR_ac_DW.StatusByte_CoolOutTempSnsCkt) &
        64U;

    /* Logic: '<S298>/Logical8' incorporates:
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S332>/Constant2'
     *  Constant: '<S337>/Calib'
     *  Logic: '<S332>/LogicalOperator'
     *  RelationalOperator: '<S332>/RelationalOperator1'
     *  RelationalOperator: '<S332>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S332>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S332>/BitwiseOperator2'
     */
    VeBTRR_b_BTOSFlt = (((VeBTRR_b_BTOSFlt_tmp > 0) && (VeBTRR_b_BTOSFlt_tmp_0 ==
                          0U)) && (KeBTRR_b_Enbl_BTOS_Flt));

    /* Logic: '<S298>/Logical9' incorporates:
     *  Constant: '<S334>/Calib'
     */
    VeBTRR_b_BTIS2Flt = ((VeBTRR_b_BTIS2_FltDtct_AD) && (KeBTRR_b_Enbl_BTIS2_Flt));

    /* Logic: '<S298>/Logical10' incorporates:
     *  Constant: '<S336>/Calib'
     */
    VeBTRR_b_BTOS2Flt = ((VeBTRR_b_BTOS2_FltDtct_AD) && (KeBTRR_b_Enbl_BTOS2_Flt));

    /* Switch: '<S518>/Switch1' incorporates:
     *  Logic: '<S298>/Logical1'
     */
    rtb_VariantMerge_For_Variant_So = ((((VeBTRR_b_BTISFlt) || (VeBTRR_b_BTOSFlt))
        || (VeBTRR_b_BTIS2Flt)) || (VeBTRR_b_BTOS2Flt));

    /* Logic: '<S299>/Logical20' incorporates:
     *  Constant: '<S338>/Constant1'
     *  Constant: '<S338>/Constant2'
     *  Constant: '<S340>/Calib'
     *  DataStoreRead: '<S338>/StatusByte_BattCoolLvlLow'
     *  Logic: '<S338>/LogicalOperator'
     *  RelationalOperator: '<S338>/RelationalOperator1'
     *  RelationalOperator: '<S338>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S338>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S338>/BitwiseOperator2'
     */
    VeBTRR_b_BtlClntLvlLo_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_BattCoolLvlLow) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_BtlClntLvlLo_Flt));

    /* Logic: '<S299>/Logical21' incorporates:
     *  Constant: '<S339>/Constant1'
     *  Constant: '<S339>/Constant2'
     *  Constant: '<S341>/Calib'
     *  DataStoreRead: '<S339>/StatusByte_BattCoolLvlSnsCkt'
     *  Logic: '<S339>/LogicalOperator'
     *  RelationalOperator: '<S339>/RelationalOperator1'
     *  RelationalOperator: '<S339>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S339>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S339>/BitwiseOperator2'
     */
    VeBTRR_b_BtlSnsr_SG_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_BtlSnsr_SG));

    /* Logic: '<S299>/Logical22' */
    VeBTRR_b_BottleSnsr_Flts = ((VeBTRR_b_BtlClntLvlLo_Flt) ||
        (VeBTRR_b_BtlSnsr_SG_Flt));

    /* Logic: '<S300>/Logical4' incorporates:
     *  Constant: '<S342>/Constant'
     *  Constant: '<S343>/Constant'
     *  Constant: '<S344>/Constant'
     *  Constant: '<S348>/Calib'
     *  Logic: '<S300>/Logical2'
     *  RelationalOperator: '<S300>/Comparison1'
     *  RelationalOperator: '<S300>/Comparison4'
     *  RelationalOperator: '<S300>/Comparison5'
     *  Switch: '<S903>/Switch'
     */
    VeBTRR_b_BatCPV_StuckOpenOrSNA = ((((((uint32)VeBTRR_e_BattCPV_StuckSts) ==
        CeRCVR_e_Faulty_Open) || (((uint32)VeBTRR_e_BattCPV_StuckSts) ==
        CeRCVR_e_SNA)) || (((uint32)VeBTRR_e_BattCPV_StuckSts) ==
                           CeRCVR_e_Faulty_Open_Bypass)) &&
        (KeBTRR_b_Enbl_BattCPV_StuckOpenOrSNA));

    /* Logic: '<S300>/Logical6' incorporates:
     *  Constant: '<S345>/Constant'
     *  Constant: '<S346>/Constant'
     *  Constant: '<S347>/Constant'
     *  Constant: '<S349>/Calib'
     *  Logic: '<S300>/Logical5'
     *  RelationalOperator: '<S300>/Comparison2'
     *  RelationalOperator: '<S300>/Comparison3'
     *  RelationalOperator: '<S300>/Comparison6'
     *  Switch: '<S903>/Switch1'
     */
    VeBTRR_b_LT_CPV_StuckClsdOrSNA = ((((((uint32)VeBTRR_e_LTCPV_StuckSts) ==
        CeRCVR_e_Faulty_Open) || (((uint32)VeBTRR_e_LTCPV_StuckSts) ==
        CeRCVR_e_SNA)) || (((uint32)VeBTRR_e_LTCPV_StuckSts) ==
                           CeRCVR_e_Faulty_Open_Bypass)) &&
        (KeBTRR_b_Enbl_LT_CPV_StuckClsdOrSNA));

    /* Logic: '<S300>/Logical1' */
    VeBTRR_b_CPVFailures = ((VeBTRR_b_BatCPV_StuckOpenOrSNA) ||
                            (VeBTRR_b_LT_CPV_StuckClsdOrSNA));

    /* Logic: '<S301>/Logical1' incorporates:
     *  Constant: '<S352>/Constant1'
     *  Constant: '<S352>/Constant2'
     *  Constant: '<S356>/Calib'
     *  DataStoreRead: '<S352>/StatusByte_CoolCtrlVlv1CktLo'
     *  Logic: '<S352>/LogicalOperator'
     *  RelationalOperator: '<S352>/RelationalOperator1'
     *  RelationalOperator: '<S352>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S352>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S352>/BitwiseOperator2'
     */
    VeBTRR_b_ChlrVlvSG_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolCtrlVlv1CktLo) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_ChlrVlv_SG));

    /* Logic: '<S301>/Logical2' incorporates:
     *  Constant: '<S353>/Constant1'
     *  Constant: '<S353>/Constant2'
     *  Constant: '<S354>/Calib'
     *  DataStoreRead: '<S353>/StatusByte_CoolCtrlVlv1Ckt'
     *  Logic: '<S353>/LogicalOperator'
     *  RelationalOperator: '<S353>/RelationalOperator1'
     *  RelationalOperator: '<S353>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S353>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S353>/BitwiseOperator2'
     */
    VeBTRR_b_ChlrVlvOC_Flt = ((((((sint32)BTRR_ac_DW.StatusByte_CoolCtrlVlv1Ckt)
        & 1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_CoolCtrlVlv1Ckt) & 64U) ==
                      0U)) && (KeBTRR_b_Enbl_ChlrVlv_OC));

    /* Logic: '<S301>/Logical8' incorporates:
     *  Constant: '<S351>/Constant1'
     *  Constant: '<S351>/Constant2'
     *  Constant: '<S355>/Calib'
     *  DataStoreRead: '<S351>/StatusByte_CoolCtrlVlv1CktHi'
     *  Logic: '<S351>/LogicalOperator'
     *  RelationalOperator: '<S351>/RelationalOperator1'
     *  RelationalOperator: '<S351>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S351>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S351>/BitwiseOperator2'
     */
    VeBTRR_b_ChlrVlvSB_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_ChlrVlv_SB));

    /* Logic: '<S301>/Logical4' incorporates:
     *  Constant: '<S350>/Constant1'
     *  Constant: '<S350>/Constant2'
     *  Constant: '<S357>/Calib'
     *  DataStoreRead: '<S350>/StatusByte_BattCool'
     *  Logic: '<S350>/LogicalOperator'
     *  RelationalOperator: '<S350>/RelationalOperator1'
     *  RelationalOperator: '<S350>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S350>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S350>/BitwiseOperator2'
     */
    VeBTRR_b_ChillerPerfFlt = ((((((sint32)BTRR_ac_DW.StatusByte_BattCool) & 1) >
        0) && ((((uint32)BTRR_ac_DW.StatusByte_BattCool) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_CoolPerfFlt));

    /* Logic: '<S301>/Logical3' */
    VeBTRR_b_ChillerFlts = ((((VeBTRR_b_ChlrVlvOC_Flt) ||
        (VeBTRR_b_ChlrVlvSG_Flt)) || (VeBTRR_b_ChlrVlvSB_Flt)) ||
                            (VeBTRR_b_ChillerPerfFlt));

    /* Logic: '<S303>/Logical1' incorporates:
     *  Constant: '<S359>/Constant1'
     *  Constant: '<S359>/Constant2'
     *  Constant: '<S363>/Calib'
     *  DataStoreRead: '<S359>/StatusByte_LostCommEAC'
     *  Logic: '<S359>/LogicalOperator'
     *  RelationalOperator: '<S359>/RelationalOperator1'
     *  RelationalOperator: '<S359>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S359>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S359>/BitwiseOperator2'
     */
    VeBTRR_b_EAC_LOC = ((((((sint32)BTRR_ac_DW.StatusByte_LostCommEAC) & 1) > 0)
                         && ((((uint32)BTRR_ac_DW.StatusByte_LostCommEAC) & 64U)
                          == 0U)) && (KeBTRR_b_Enbl_EAC_LOC));

    /* Logic: '<S303>/Logical21' incorporates:
     *  Constant: '<S358>/Constant1'
     *  Constant: '<S358>/Constant2'
     *  Constant: '<S364>/Calib'
     *  DataStoreRead: '<S358>/StatusByte_EACPerf'
     *  Logic: '<S358>/LogicalOperator'
     *  RelationalOperator: '<S358>/RelationalOperator1'
     *  RelationalOperator: '<S358>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S358>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S358>/BitwiseOperator2'
     */
    VeBTRR_b_EAC_PerfFlt = ((((((sint32)BTRR_ac_DW.StatusByte_EACPerf) & 1) > 0)
        && ((((uint32)BTRR_ac_DW.StatusByte_EACPerf) & 64U) == 0U)) &&
                            (KeBTRR_b_Enbl_EAC_PerfFlt));

    /* S-Function (sfix_bitop): '<S365>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S365>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S464>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator2'
     */
    VeBTRR_b_EAC_Flts_tmp = ((uint32)BTRR_ac_DW.StatusByte_LIN1_BusOff) & 1U;

    /* S-Function (sfix_bitop): '<S365>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S365>/StatusByte_LIN1_BusOff'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S411>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S416>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S464>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator1'
     */
    VeBTRR_b_EAC_Flts_tmp_0 = ((uint32)BTRR_ac_DW.StatusByte_LIN1_BusOff) & 64U;

    /* S-Function (sfix_bitop): '<S366>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S366>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S396>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S465>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S479>/Bitwise Operator2'
     */
    VeBTRR_b_EAC_Flts_tmp_1 = ((uint32)BTRR_ac_DW.StatusByte_LIN2_BusOff) & 1U;

    /* S-Function (sfix_bitop): '<S366>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S366>/StatusByte_LIN2_BusOff'
     *  S-Function (sfix_bitop): '<S396>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S417>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S465>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S479>/Bitwise Operator1'
     */
    VeBTRR_b_EAC_Flts_tmp_2 = ((uint32)BTRR_ac_DW.StatusByte_LIN2_BusOff) & 64U;

    /* S-Function (sfix_bitop): '<S367>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S367>/StatusByte_LIN3_BusOff'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S466>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S480>/Bitwise Operator2'
     */
    VeBTRR_b_EAC_Flts_tmp_3 = ((uint32)BTRR_ac_DW.StatusByte_LIN3_BusOff) & 1U;

    /* S-Function (sfix_bitop): '<S367>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S367>/StatusByte_LIN3_BusOff'
     *  S-Function (sfix_bitop): '<S397>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S466>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S480>/Bitwise Operator1'
     */
    VeBTRR_b_EAC_Flts_tmp_4 = ((uint32)BTRR_ac_DW.StatusByte_LIN3_BusOff) & 64U;

    /* Logic: '<S303>/Logical2' incorporates:
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Calib'
     *  Constant: '<S362>/Calib'
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant2'
     *  Constant: '<S366>/Constant1'
     *  Constant: '<S366>/Constant2'
     *  Constant: '<S367>/Constant1'
     *  Constant: '<S367>/Constant2'
     *  Logic: '<S303>/Logical Operator'
     *  Logic: '<S303>/Logical Operator1'
     *  Logic: '<S303>/Logical Operator2'
     *  Logic: '<S303>/Logical Operator3'
     *  Logic: '<S365>/Logical Operator'
     *  Logic: '<S366>/Logical Operator'
     *  Logic: '<S367>/Logical Operator'
     *  RelationalOperator: '<S365>/Relational Operator1'
     *  RelationalOperator: '<S365>/Relational Operator2'
     *  RelationalOperator: '<S366>/Relational Operator1'
     *  RelationalOperator: '<S366>/Relational Operator2'
     *  RelationalOperator: '<S367>/Relational Operator1'
     *  RelationalOperator: '<S367>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S365>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S365>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator2'
     */
    VeBTRR_b_EAC_Flts = (((VeBTRR_b_EAC_LOC) || (VeBTRR_b_EAC_PerfFlt)) ||
                         (((((VeBTRR_b_EAC_Flts_tmp != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_0 == 0U)) && (KeBTRR_b_Enbl_EAC_LIN1BusOff_Flt)) ||
                           (((VeBTRR_b_EAC_Flts_tmp_1 != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_2 == 0U)) && (KeBTRR_b_Enbl_EAC_LIN2BusOff_Flt)))
                          || (((VeBTRR_b_EAC_Flts_tmp_3 != 0U) &&
                            (VeBTRR_b_EAC_Flts_tmp_4 == 0U)) &&
                           (KeBTRR_b_Enbl_EAC_LIN3BusOff_Flt))));

    /* Logic: '<S304>/Logical1' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Constant: '<S368>/Constant2'
     *  Constant: '<S369>/Constant1'
     *  Constant: '<S369>/Constant2'
     *  Constant: '<S370>/Constant1'
     *  Constant: '<S370>/Constant2'
     *  Constant: '<S383>/Calib'
     *  DataStoreRead: '<S368>/StatusByte_CT2_SnsrCktHi'
     *  DataStoreRead: '<S369>/StatusByte_CT2_SnsrCktLo'
     *  DataStoreRead: '<S370>/StatusByte_CT2_SnsrPerf'
     *  Logic: '<S304>/Logical2'
     *  Logic: '<S368>/LogicalOperator'
     *  Logic: '<S369>/LogicalOperator'
     *  Logic: '<S370>/LogicalOperator'
     *  RelationalOperator: '<S368>/RelationalOperator1'
     *  RelationalOperator: '<S368>/RelationalOperator2'
     *  RelationalOperator: '<S369>/RelationalOperator1'
     *  RelationalOperator: '<S369>/RelationalOperator2'
     *  RelationalOperator: '<S370>/RelationalOperator1'
     *  RelationalOperator: '<S370>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S368>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S368>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S369>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S369>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S370>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S370>/BitwiseOperator2'
     */
    VeBTRR_b_ECHTIS_PinDiag = ((((((((sint32)BTRR_ac_DW.StatusByte_CT2_SnsrCktLo)
        & 1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_CT2_SnsrCktLo) & 64U) ==
                      0U)) || (((((sint32)BTRR_ac_DW.StatusByte_CT2_SnsrCktHi) &
        1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_CT2_SnsrCktHi) & 64U) == 0U)))
        || (((((sint32)BTRR_ac_DW.StatusByte_CT2_SnsrPerf) & 1) > 0) &&
            ((((uint32)BTRR_ac_DW.StatusByte_CT2_SnsrPerf) & 64U) == 0U))) &&
        (KeBTRR_b_Enbl_ECHTIS_Flt));

    /* Logic: '<S304>/Logical20' incorporates:
     *  Constant: '<S379>/Constant1'
     *  Constant: '<S379>/Constant2'
     *  Constant: '<S380>/Constant1'
     *  Constant: '<S380>/Constant2'
     *  Constant: '<S388>/Calib'
     *  DataStoreRead: '<S379>/StatusByte_LostCommCoolHtrA'
     *  DataStoreRead: '<S380>/StatusByte_LostCommHighVolCabinAirHtr'
     *  Logic: '<S304>/Logical11'
     *  Logic: '<S379>/LogicalOperator'
     *  Logic: '<S380>/LogicalOperator'
     *  RelationalOperator: '<S379>/RelationalOperator1'
     *  RelationalOperator: '<S379>/RelationalOperator2'
     *  RelationalOperator: '<S380>/RelationalOperator1'
     *  RelationalOperator: '<S380>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S379>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S379>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S380>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S380>/BitwiseOperator2'
     */
    VeBTRR_b_LOC_ECH = (((((((sint32)BTRR_ac_DW.StatusByte_LostCommCoolHtrA) & 1)
                           > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_LostCommCoolHtrA) & 64U) == 0U)) || (((((sint32)
        BTRR_ac_DW.StatusByte_LostCommHighVolCabin) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_LostCommHighVolCabin) & 64U) == 0U))) &&
                        (KeBTRR_b_Enbl_LOC_ECH));

    /* Logic: '<S304>/Logical5' incorporates:
     *  Constant: '<S371>/Constant1'
     *  Constant: '<S371>/Constant2'
     *  Constant: '<S384>/Calib'
     *  DataStoreRead: '<S371>/StatusByte_CoolHeaterAPerf'
     *  Logic: '<S371>/LogicalOperator'
     *  RelationalOperator: '<S371>/RelationalOperator1'
     *  RelationalOperator: '<S371>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S371>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S371>/BitwiseOperator2'
     */
    VeBTRR_b_ECH_PerfFlt = ((((((sint32)BTRR_ac_DW.StatusByte_CoolHeaterAPerf) &
        1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_CoolHeaterAPerf) & 64U) ==
                    0U)) && (KeBTRR_b_Enbl_ECH_PerfFlt));

    /* Logic: '<S304>/Logical4' incorporates:
     *  Constant: '<S377>/Constant1'
     *  Constant: '<S377>/Constant2'
     *  Constant: '<S381>/Calib'
     *  DataStoreRead: '<S377>/StatusByte_ECH_TempIn'
     *  Logic: '<S377>/LogicalOperator'
     *  RelationalOperator: '<S377>/RelationalOperator1'
     *  RelationalOperator: '<S377>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S377>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S377>/BitwiseOperator2'
     */
    VeBTRR_b_ECH_InFlt = ((((((sint32)BTRR_ac_DW.StatusByte_ECH_TempIn) & 1) > 0)
                           && ((((uint32)BTRR_ac_DW.StatusByte_ECH_TempIn) & 64U)
                            == 0U)) && (KeBTRR_b_Enbl_ECHIn_Flt));

    /* Logic: '<S304>/Logical6' incorporates:
     *  Constant: '<S378>/Constant1'
     *  Constant: '<S378>/Constant2'
     *  Constant: '<S382>/Calib'
     *  DataStoreRead: '<S378>/StatusByte_ECH_TempOut'
     *  Logic: '<S378>/LogicalOperator'
     *  RelationalOperator: '<S378>/RelationalOperator1'
     *  RelationalOperator: '<S378>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S378>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S378>/BitwiseOperator2'
     */
    VeBTRR_b_ECH_OutFlt = ((((((sint32)BTRR_ac_DW.StatusByte_ECH_TempOut) & 1) >
        0) && ((((uint32)BTRR_ac_DW.StatusByte_ECH_TempOut) & 64U) == 0U)) &&
                           (KeBTRR_b_Enbl_ECHOut_Flt));

    /* Logic: '<S304>/Logical7' incorporates:
     *  Constant: '<S372>/Constant1'
     *  Constant: '<S372>/Constant2'
     *  Constant: '<S385>/Calib'
     *  DataStoreRead: '<S372>/StatusByte_CoolPmpATempSnsrPerf'
     *  Logic: '<S372>/LogicalOperator'
     *  RelationalOperator: '<S372>/RelationalOperator1'
     *  RelationalOperator: '<S372>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S372>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S372>/BitwiseOperator2'
     */
    VeBTRR_b_HTAP_TmpFlt = ((((((sint32)
        BTRR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolPmpATempSnsrPerf) & 64U) == 0U)) &&
                            (KeBTRR_b_Enbl_HTAP_TmpFlt));

    /* Logic: '<S306>/Logical9' incorporates:
     *  Constant: '<S409>/Calib'
     */
    VeBTRR_b_PresElectrFlt = ((VeBTRR_b_EXV_PressElctrFlt_FltDtct_AD) &&
        (KeBTRR_b_Enbl_PresElectr_Flt));

    /* Logic: '<S306>/Logical10' incorporates:
     *  Constant: '<S410>/Calib'
     */
    VeBTRR_b_TempElectrFlt = ((VeBTRR_b_EXV_TempElctrFlt_FltDtct_AD) &&
        (KeBTRR_b_Enbl_TempElectr_Flt));

    /* Logic: '<S306>/Logical2' incorporates:
     *  Constant: '<S405>/Calib'
     */
    VeBTRR_b_EXV_PerfDiag_FltDtct = ((VeBTRR_b_EXV_PerfDiag_FltDtct_AD) &&
        (KeBTRR_b_Enbl_EXV_PerfDiag_FltDtct));

    /* Logic: '<S306>/Logical4' incorporates:
     *  Constant: '<S406>/Calib'
     */
    VeBTRR_b_EXV_PressSens_FltDtct = ((VeBTRR_b_EXV_PressSens_FltDtct_AD) &&
        (KeBTRR_b_Enbl_EXV_PressSens_FltDtct));

    /* Logic: '<S306>/Logical6' incorporates:
     *  Constant: '<S407>/Calib'
     */
    VeBTRR_b_EXV_TempSens_FltDtct = ((VeBTRR_b_EXV_TempSens_FltDtct_AD) &&
        (KeBTRR_b_Enbl_EXV_TempSens_FltDtct));

    /* Logic: '<S306>/Logical1' incorporates:
     *  Constant: '<S401>/Constant1'
     *  Constant: '<S401>/Constant2'
     *  Constant: '<S402>/Calib'
     *  Constant: '<S403>/Calib'
     *  Constant: '<S404>/Calib'
     *  Constant: '<S408>/Calib'
     *  Constant: '<S411>/Constant1'
     *  Constant: '<S411>/Constant2'
     *  Constant: '<S412>/Constant1'
     *  Constant: '<S412>/Constant2'
     *  Constant: '<S413>/Constant1'
     *  Constant: '<S413>/Constant2'
     *  DataStoreRead: '<S401>/StatusByte_LostCommACRefrigExpVlvActA'
     *  Logic: '<S306>/Logical Operator'
     *  Logic: '<S306>/Logical Operator1'
     *  Logic: '<S306>/Logical Operator2'
     *  Logic: '<S306>/Logical Operator3'
     *  Logic: '<S306>/Logical22'
     *  Logic: '<S401>/LogicalOperator'
     *  Logic: '<S411>/Logical Operator'
     *  Logic: '<S412>/Logical Operator'
     *  Logic: '<S413>/Logical Operator'
     *  RelationalOperator: '<S401>/RelationalOperator1'
     *  RelationalOperator: '<S401>/RelationalOperator2'
     *  RelationalOperator: '<S411>/Relational Operator1'
     *  RelationalOperator: '<S411>/Relational Operator2'
     *  RelationalOperator: '<S412>/Relational Operator1'
     *  RelationalOperator: '<S412>/Relational Operator2'
     *  RelationalOperator: '<S413>/Relational Operator1'
     *  RelationalOperator: '<S413>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S401>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S401>/BitwiseOperator2'
     */
    VeBTRR_b_EXV_Faults = ((((((((((((sint32)
        BTRR_ac_DW.StatusByte_LostCommACRefrigExpV) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_LostCommACRefrigExpV) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_LOC_EXV)) || (VeBTRR_b_PresElectrFlt)) ||
        (VeBTRR_b_TempElectrFlt)) || (VeBTRR_b_EXV_PerfDiag_FltDtct)) ||
        (VeBTRR_b_EXV_PressSens_FltDtct)) || (VeBTRR_b_EXV_TempSens_FltDtct)) ||
                           (((((VeBTRR_b_EAC_Flts_tmp != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_0 == 0U)) && (KeBTRR_b_Enbl_CEXV_LIN1BusOff_Flt))
        || (((VeBTRR_b_EAC_Flts_tmp_1 != 0U) && (VeBTRR_b_EAC_Flts_tmp_2 == 0U))
            && (KeBTRR_b_Enbl_CEXV_LIN2BusOff_Flt))) ||
                            (((VeBTRR_b_EAC_Flts_tmp_3 != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_4 == 0U)) && (KeBTRR_b_Enbl_CEXV_LIN3BusOff_Flt))));

    /* Logic: '<S307>/Logical1' incorporates:
     *  Constant: '<S417>/Constant1'
     *  Constant: '<S417>/Constant2'
     *  Constant: '<S423>/Calib'
     *  DataStoreRead: '<S417>/StatusByte_LIN2_BusOff'
     *  Logic: '<S417>/LogicalOperator'
     *  RelationalOperator: '<S417>/RelationalOperator1'
     *  RelationalOperator: '<S417>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S417>/BitwiseOperator2'
     */
    VeBTRR_b_LIN2_BusOff = ((((((sint32)BTRR_ac_DW.StatusByte_LIN2_BusOff) & 1) >
        0) && (VeBTRR_b_EAC_Flts_tmp_2 == 0U)) && (KeBTRR_b_Enbl_LIN2BusOff_Flt));

    /* Logic: '<S307>/Logical2' incorporates:
     *  Constant: '<S416>/Constant1'
     *  Constant: '<S416>/Constant2'
     *  Constant: '<S422>/Calib'
     *  DataStoreRead: '<S416>/StatusByte_LIN1_BusOff'
     *  Logic: '<S416>/LogicalOperator'
     *  RelationalOperator: '<S416>/RelationalOperator1'
     *  RelationalOperator: '<S416>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S416>/BitwiseOperator2'
     */
    VeBTRR_b_LIN1_BusOff = ((((((sint32)BTRR_ac_DW.StatusByte_LIN1_BusOff) & 1) >
        0) && (VeBTRR_b_EAC_Flts_tmp_0 == 0U)) && (KeBTRR_b_Enbl_LIN1BusOff_Flt));

    /* Logic: '<S307>/Logical20' incorporates:
     *  Constant: '<S415>/Constant1'
     *  Constant: '<S415>/Constant2'
     *  Constant: '<S421>/Calib'
     *  DataStoreRead: '<S415>/StatusByte_CoolPmpACtrlCktPerf'
     *  Logic: '<S415>/LogicalOperator'
     *  RelationalOperator: '<S415>/RelationalOperator1'
     *  RelationalOperator: '<S415>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S415>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S415>/BitwiseOperator2'
     */
    VeBTRR_b_HTAP_PerfFlt = ((((((sint32)
        BTRR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_HTAP_PerfFlt));

    /* Logic: '<S307>/Logical5' incorporates:
     *  Constant: '<S418>/Constant1'
     *  Constant: '<S418>/Constant2'
     *  Constant: '<S424>/Calib'
     *  DataStoreRead: '<S418>/StatusByte_LostCommCoolPmpA'
     *  Logic: '<S418>/LogicalOperator'
     *  RelationalOperator: '<S418>/RelationalOperator1'
     *  RelationalOperator: '<S418>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S418>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S418>/BitwiseOperator2'
     */
    VeBTRR_b_LOC_HTAP = ((((((sint32)BTRR_ac_DW.StatusByte_LostCommCoolPmpA) & 1)
                           > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_LostCommCoolPmpA) & 64U) == 0U)) &&
                         (KeBTRR_b_Enbl_LOC_HTAP));

    /* Logic: '<S307>/Logical4' incorporates:
     *  Constant: '<S414>/Constant'
     *  Constant: '<S420>/Calib'
     *  RelationalOperator: '<S307>/Comparison5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    VeBTRR_b_HTAPDryRun = ((((uint32)BTRR_ac_B.TmpSignalConversionAtTmpVM__loe)
                            != CePMPR_e_FTSNA_False) &&
                           (KeBTRR_b_Enbl_HTAPDryRun_Flt));

    /* Logic: '<S307>/Logical6' incorporates:
     *  Constant: '<S419>/Calib'
     */
    VeBTRR_b_HTAPDryRunFA = ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kn) &&
        (KeBTRR_b_Enbl_HTAPDryRunFA_Flt));

    /* Logic: '<S308>/Logical20' incorporates:
     *  Constant: '<S425>/Constant1'
     *  Constant: '<S425>/Constant2'
     *  Constant: '<S426>/Constant1'
     *  Constant: '<S426>/Constant2'
     *  Constant: '<S427>/Constant1'
     *  Constant: '<S427>/Constant2'
     *  Constant: '<S429>/Calib'
     *  DataStoreRead: '<S425>/StatusByte_CoolantVlvA_CktHi'
     *  DataStoreRead: '<S426>/StatusByte_CoolantVlvA_CktLo'
     *  DataStoreRead: '<S427>/StatusByte_CoolantVlvA_Ckt'
     *  Logic: '<S308>/Logical8'
     *  Logic: '<S425>/LogicalOperator'
     *  Logic: '<S426>/LogicalOperator'
     *  Logic: '<S427>/LogicalOperator'
     *  RelationalOperator: '<S425>/RelationalOperator1'
     *  RelationalOperator: '<S425>/RelationalOperator2'
     *  RelationalOperator: '<S426>/RelationalOperator1'
     *  RelationalOperator: '<S426>/RelationalOperator2'
     *  RelationalOperator: '<S427>/RelationalOperator1'
     *  RelationalOperator: '<S427>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S425>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S425>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S426>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S426>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S427>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S427>/BitwiseOperator2'
     */
    VeBTRR_b_HTCV_PinFlts = ((((((((sint32)BTRR_ac_DW.StatusByte_CoolantVlvA_Ckt)
        & 1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_CoolantVlvA_Ckt) & 64U) ==
                      0U)) || (((((sint32)
        BTRR_ac_DW.StatusByte_CoolantVlvA_CktLo) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolantVlvA_CktLo) & 64U) == 0U))) || (((((sint32)
        BTRR_ac_DW.StatusByte_CoolantVlvA_CktHi) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolantVlvA_CktHi) & 64U) == 0U))) &&
        (KeBTRR_b_Enbl_HTCV_PinFlts));

    /* Logic: '<S308>/Logical5' incorporates:
     *  Constant: '<S428>/Constant1'
     *  Constant: '<S428>/Constant2'
     *  Constant: '<S430>/Calib'
     *  DataStoreRead: '<S428>/StatusByte_CoolantVlvA_Perf'
     *  Logic: '<S428>/LogicalOperator'
     *  RelationalOperator: '<S428>/RelationalOperator1'
     *  RelationalOperator: '<S428>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S428>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S428>/BitwiseOperator2'
     */
    VeBTRR_b_HTCV_StckFlt = ((((((sint32)BTRR_ac_DW.StatusByte_CoolantVlvA_Perf)
        & 1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_CoolantVlvA_Perf) & 64U) ==
                      0U)) && (KeBTRR_b_Enbl_HTCV_StckFlt));

    /* Outputs for Atomic SubSystem: '<S309>/Hysteresis3' */
    /* Switch: '<S431>/Switch1' incorporates:
     *  Constant: '<S433>/Calib'
     *  RelationalOperator: '<S431>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_CellMaxThHi_HybAltMd)
    {
        /* Switch: '<S431>/Switch1' incorporates:
         *  Constant: '<S431>/ConstantValue'
         */
        VeBTRR_b_CellMaxTh_HybAltMd = true;
    }
    else
    {
        /* Switch: '<S431>/Switch1' incorporates:
         *  Constant: '<S435>/Calib'
         *  RelationalOperator: '<S431>/GreaterThan1'
         *  UnitDelay: '<S431>/UnitDelay'
         */
        VeBTRR_b_CellMaxTh_HybAltMd = ((TmpSignalConversionAtTmpVM_F_m4 >=
            KeBTRR_T_CellMaxThLo_HybAltMd) && (BTRR_ac_DW.UnitDelay_DSTATE_br));
    }

    /* End of Switch: '<S431>/Switch1' */

    /* Update for UnitDelay: '<S431>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_br = VeBTRR_b_CellMaxTh_HybAltMd;

    /* End of Outputs for SubSystem: '<S309>/Hysteresis3' */

    /* Logic: '<S311>/Logical20' incorporates:
     *  Constant: '<S454>/Constant1'
     *  Constant: '<S454>/Constant2'
     *  Constant: '<S462>/Calib'
     *  DataStoreRead: '<S454>/StatusByte_BattCoolPmpPerf'
     *  Logic: '<S454>/LogicalOperator'
     *  RelationalOperator: '<S454>/RelationalOperator1'
     *  RelationalOperator: '<S454>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S454>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S454>/BitwiseOperator2'
     */
    VeBTRR_b_LTAP_PerfFlt = ((((((sint32)BTRR_ac_DW.StatusByte_BattCoolPmpPerf)
        & 1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) ==
                      0U)) && (KeBTRR_b_Enbl_LTAP_PerfFlt));

    /* Logic: '<S311>/Logical1' incorporates:
     *  Constant: '<S451>/Constant'
     *  Constant: '<S456>/Calib'
     *  Logic: '<S311>/Logical4'
     *  RelationalOperator: '<S311>/Comparison4'
     *  Switch: '<S1017>/Switch'
     */
    VeBTRR_b_LTAP_DryRun_Flts = (((CePMPR_e_FTSNA_False != ((uint32)
        VeBTRR_e_LTActPumpDryRun_AD)) || (VeBTRR_b_LTActPumpDryRun_FA_AD)) &&
        (KeBTRR_b_Enbl_LTAP_DryRun_FA));

    /* Logic: '<S311>/Logical2' incorporates:
     *  Constant: '<S452>/Constant'
     *  Constant: '<S460>/Calib'
     *  Logic: '<S311>/Logical26'
     *  RelationalOperator: '<S311>/Comparison1'
     *  Switch: '<S979>/Switch'
     */
    VeBTRR_b_LTAP_LOC_Flts = (((((uint32)VeBTRR_b_LTAP_LOC) !=
        CeBPCR_e_LOC_BCP_False) || (VeBTRR_b_LTAP_LOC_FA)) &&
        (KeBTRR_b_Enbl_LTAP_LOC));

    /* S-Function (sfix_bitop): '<S453>/BitwiseOperator2' incorporates:
     *  DataStoreRead: '<S453>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  S-Function (sfix_bitop): '<S539>/BitwiseOperator2'
     */
    VeBTRR_b_LTAP_Flts_tmp = ((sint32)BTRR_ac_DW.StatusByte_BattCoolPmpATempSnsr)
        & 1;

    /* S-Function (sfix_bitop): '<S453>/BitwiseOperator1' incorporates:
     *  DataStoreRead: '<S453>/StatusByte_BattCoolPmpATempSnsrPerf'
     *  S-Function (sfix_bitop): '<S539>/BitwiseOperator1'
     */
    VeBTRR_b_LTAP_Flts_tmp_0 = ((uint32)
        BTRR_ac_DW.StatusByte_BattCoolPmpATempSnsr) & 64U;

    /* Logic: '<S311>/Logical3' incorporates:
     *  Constant: '<S450>/Constant1'
     *  Constant: '<S450>/Constant2'
     *  Constant: '<S453>/Constant1'
     *  Constant: '<S453>/Constant2'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S457>/Calib'
     *  Constant: '<S458>/Calib'
     *  Constant: '<S459>/Calib'
     *  Constant: '<S461>/Calib'
     *  Constant: '<S463>/Calib'
     *  Constant: '<S464>/Constant1'
     *  Constant: '<S464>/Constant2'
     *  Constant: '<S465>/Constant1'
     *  Constant: '<S465>/Constant2'
     *  Constant: '<S466>/Constant1'
     *  Constant: '<S466>/Constant2'
     *  Constant: '<S467>/Constant1'
     *  Constant: '<S467>/Constant2'
     *  DataStoreRead: '<S450>/StatusByte_BattCoolPmpOveSpd'
     *  DataStoreRead: '<S467>/StatusByte_LostCommHB_CoolPmp'
     *  Logic: '<S311>/Logical Operator'
     *  Logic: '<S311>/Logical10'
     *  Logic: '<S311>/Logical5'
     *  Logic: '<S311>/Logical6'
     *  Logic: '<S311>/Logical7'
     *  Logic: '<S311>/Logical8'
     *  Logic: '<S311>/Logical9'
     *  Logic: '<S450>/Logical Operator'
     *  Logic: '<S453>/LogicalOperator'
     *  Logic: '<S464>/Logical Operator'
     *  Logic: '<S465>/Logical Operator'
     *  Logic: '<S466>/Logical Operator'
     *  Logic: '<S467>/Logical Operator'
     *  RelationalOperator: '<S450>/Relational Operator1'
     *  RelationalOperator: '<S450>/Relational Operator2'
     *  RelationalOperator: '<S453>/RelationalOperator1'
     *  RelationalOperator: '<S453>/RelationalOperator2'
     *  RelationalOperator: '<S464>/Relational Operator1'
     *  RelationalOperator: '<S464>/Relational Operator2'
     *  RelationalOperator: '<S465>/Relational Operator1'
     *  RelationalOperator: '<S465>/Relational Operator2'
     *  RelationalOperator: '<S466>/Relational Operator1'
     *  RelationalOperator: '<S466>/Relational Operator2'
     *  RelationalOperator: '<S467>/Relational Operator1'
     *  RelationalOperator: '<S467>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S453>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S453>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S467>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S467>/Bitwise Operator2'
     */
    VeBTRR_b_LTAP_Flts = (((((((VeBTRR_b_LTAP_PerfFlt) || ((((((uint32)
        BTRR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1U) != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_LTAP_OvSpFlt))) || (VeBTRR_b_LTAP_DryRun_Flts)) ||
        (VeBTRR_b_LTAP_LOC_Flts)) || (((VeBTRR_b_LTAP_Flts_tmp > 0) &&
        (VeBTRR_b_LTAP_Flts_tmp_0 == 0U)) && (KeBTRR_b_Enbl_LTAP_TmpFlt))) ||
                           ((((((uint32)BTRR_ac_DW.StatusByte_LostCommHB_CoolPmp)
        & 1U) != 0U) && ((((uint32)BTRR_ac_DW.StatusByte_LostCommHB_CoolPmp) &
                          64U) == 0U)) && (KeBTRR_b_Enbl_LTAP_ClPmpFlt))) ||
                          (((((VeBTRR_b_EAC_Flts_tmp != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_0 == 0U)) && (KeBTRR_b_Enbl_LTAP_LIN1BusOff_Flt))
                            || (((VeBTRR_b_EAC_Flts_tmp_1 != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_2 == 0U)) && (KeBTRR_b_Enbl_LTAP_LIN2BusOff_Flt)))
                           || (((VeBTRR_b_EAC_Flts_tmp_3 != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_4 == 0U)) && (KeBTRR_b_Enbl_LTAP_LIN3BusOff_Flt))));

    /* Logic: '<S313>/Logical22' incorporates:
     *  Constant: '<S489>/Constant1'
     *  Constant: '<S489>/Constant2'
     *  Constant: '<S492>/Calib'
     *  DataStoreRead: '<S489>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  Logic: '<S489>/LogicalOperator'
     *  RelationalOperator: '<S489>/RelationalOperator1'
     *  RelationalOperator: '<S489>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S489>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S489>/BitwiseOperator2'
     */
    VeBTRR_b_PressSnsr_Perf_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrAPe) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_PresSensPerfFlt));

    /* Logic: '<S313>/Logical9' incorporates:
     *  Constant: '<S488>/Constant1'
     *  Constant: '<S488>/Constant2'
     *  Constant: '<S491>/Calib'
     *  DataStoreRead: '<S488>/StatusByte_AC_RefrigPresSnsrALo'
     *  Logic: '<S488>/LogicalOperator'
     *  RelationalOperator: '<S488>/RelationalOperator1'
     *  RelationalOperator: '<S488>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S488>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S488>/BitwiseOperator2'
     */
    VeBTRR_b_PressSnsrLo_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_PresSensLo));

    /* Logic: '<S313>/Logical4' incorporates:
     *  Constant: '<S487>/Constant1'
     *  Constant: '<S487>/Constant2'
     *  Constant: '<S490>/Calib'
     *  DataStoreRead: '<S487>/StatusByte_AC_RefrigPresSnsrAHi'
     *  Logic: '<S487>/LogicalOperator'
     *  RelationalOperator: '<S487>/RelationalOperator1'
     *  RelationalOperator: '<S487>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S487>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S487>/BitwiseOperator2'
     */
    VeBTRR_b_PressSnsrHi_Flt = ((((((sint32)
        BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_PresSensHi));

    /* Logic: '<S313>/Logical1' */
    VeBTRR_b_PressSnsr_Flts = (((VeBTRR_b_PressSnsr_Perf_Flt) ||
        (VeBTRR_b_PressSnsrLo_Flt)) || (VeBTRR_b_PressSnsrHi_Flt));

    /* Logic: '<S310>/Logical7' incorporates:
     *  Constant: '<S440>/Constant1'
     *  Constant: '<S440>/Constant2'
     *  Constant: '<S441>/Constant1'
     *  Constant: '<S441>/Constant2'
     *  Constant: '<S445>/Calib'
     *  Constant: '<S449>/Calib'
     *  DataStoreRead: '<S440>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S441>/StatusByte_CommBus_B_Off'
     *  Logic: '<S310>/Logical20'
     *  Logic: '<S310>/Logical8'
     *  Logic: '<S440>/LogicalOperator'
     *  Logic: '<S441>/LogicalOperator'
     *  RelationalOperator: '<S440>/RelationalOperator1'
     *  RelationalOperator: '<S440>/RelationalOperator2'
     *  RelationalOperator: '<S441>/RelationalOperator1'
     *  RelationalOperator: '<S441>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S440>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S440>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S441>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S441>/BitwiseOperator2'
     */
    VeBTRR_b_ePTBusOff_Flt = (((((((sint32)BTRR_ac_DW.StatusByte_CommBusOff) & 1)
        > 0) && ((((uint32)BTRR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_ePTBusOff_Flt)) && ((((((sint32)
        BTRR_ac_DW.StatusByte_CommBus_B_Off) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CommBus_B_Off) & 64U) == 0U)) ||
        (KeBTRR_b_Dsbl_CommBus_B_Off_Flt)));

    /* Logic: '<S310>/Logical3' incorporates:
     *  Constant: '<S442>/Constant1'
     *  Constant: '<S442>/Constant2'
     *  Constant: '<S443>/Constant1'
     *  Constant: '<S443>/Constant2'
     *  Constant: '<S444>/Calib'
     *  Constant: '<S446>/Calib'
     *  DataStoreRead: '<S442>/StatusByte_LosCommBECM_A_CANC11'
     *  DataStoreRead: '<S443>/StatusByte_LosCommBECM_A'
     *  Logic: '<S310>/Logical21'
     *  Logic: '<S310>/Logical5'
     *  Logic: '<S442>/LogicalOperator'
     *  Logic: '<S443>/LogicalOperator'
     *  RelationalOperator: '<S442>/RelationalOperator1'
     *  RelationalOperator: '<S442>/RelationalOperator2'
     *  RelationalOperator: '<S443>/RelationalOperator1'
     *  RelationalOperator: '<S443>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S442>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S442>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S443>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S443>/BitwiseOperator2'
     */
    VeBTRR_b_BPCM_LOC_Flt = (((((((sint32)BTRR_ac_DW.StatusByte_LosCommBECM_A) &
        1) > 0) && ((((uint32)BTRR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U))
        && (KeBTRR_b_Enbl_BPCM_LOC)) && ((((((sint32)
        BTRR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) == 0U)) ||
        (KeBTRR_b_Dsbl_BPCM_CANC11_Flt)));

    /* Logic: '<S310>/Logical1' incorporates:
     *  Constant: '<S439>/Constant'
     *  Constant: '<S447>/Calib'
     *  Logic: '<S310>/Logical11'
     *  RelationalOperator: '<S310>/Comparison3'
     *  Switch: '<S978>/Switch'
     */
    VeBTRR_b_LINBusOff_Flt = (((((uint32)VeBTRR_b_BPCM_LIN_LOC) !=
        CeBPCR_e_LIN_BusOff_Disabled) || (VeBTRR_b_BPCM_LIN_LOC_FA)) &&
        (KeBTRR_b_Enbl_LINBusOff));

    /* Logic: '<S310>/Logical4' incorporates:
     *  Constant: '<S448>/Calib'
     *  Logic: '<S310>/Logical2'
     */
    VeBTRR_b_ThrmlRlyFlt = ((!VeBTRR_b_Rly_Cmnd_AD) && (KeBTRR_b_Enbl_ThrmlRly));

    /* Logic: '<S310>/Logical22' */
    VeBTRR_b_LOC_Flts = ((((VeBTRR_b_ePTBusOff_Flt) || (VeBTRR_b_BPCM_LOC_Flt)) ||
                          (VeBTRR_b_LINBusOff_Flt)) || (VeBTRR_b_ThrmlRlyFlt));

    /* Outputs for Atomic SubSystem: '<S314>/Hysteresis3' */
    /* Switch: '<S493>/Switch1' incorporates:
     *  Constant: '<S497>/Calib'
     *  RelationalOperator: '<S493>/GreaterThan'
     */
    if (VeBTRR_p_HghRfrgtPres > KeBTRR_p_PressSnsrThHi_HybAltMd)
    {
        /* Switch: '<S493>/Switch1' incorporates:
         *  Constant: '<S493>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S493>/Switch1' incorporates:
         *  Constant: '<S498>/Calib'
         *  RelationalOperator: '<S493>/GreaterThan1'
         *  UnitDelay: '<S493>/UnitDelay'
         */
        rtb_Switch1_bl = ((VeBTRR_p_HghRfrgtPres >=
                           KeBTRR_p_PressSnsrThLo_HybAltMd) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_mq));
    }

    /* End of Switch: '<S493>/Switch1' */

    /* Update for UnitDelay: '<S493>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_mq = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S314>/Hysteresis3' */

    /* Logic: '<S314>/Logical2' incorporates:
     *  Constant: '<S494>/Calib'
     */
    VeBTRR_b_PressSnsrTh_HybAltMd = (rtb_Switch1_bl ||
        (KeBTRR_b_Enbl_PressSnsrThChk));

    /* Logic: '<S314>/Logical8' incorporates:
     *  Constant: '<S496>/Calib'
     */
    VeBTRR_b_RadFan_FltDtct = ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_h4) ||
        (KeBTRR_b_Enbl_RadFan_FltDtct));

    /* Logic: '<S314>/Logical1' incorporates:
     *  Constant: '<S495>/Calib'
     */
    VeBTRR_b_RadFan_Flts = (((VeBTRR_b_PressSnsrTh_HybAltMd) &&
        (VeBTRR_b_RadFan_FltDtct)) && (KeBTRR_b_Enbl_RadFanFlts_HybAltMd));

    /* RelationalOperator: '<S297>/Comparison5' incorporates:
     *  RelationalOperator: '<S297>/Comparison1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    VeBTRR_b_BatCPV_StuckOpenOrSNA_ = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_l4;

    /* Logic: '<S309>/Logical3' incorporates:
     *  Constant: '<S329>/Constant'
     *  Constant: '<S330>/Constant'
     *  Constant: '<S331>/Calib'
     *  Constant: '<S389>/Calib'
     *  Constant: '<S390>/Calib'
     *  Constant: '<S391>/Calib'
     *  Constant: '<S392>/Calib'
     *  Constant: '<S393>/Calib'
     *  Constant: '<S394>/Calib'
     *  Constant: '<S395>/Calib'
     *  Constant: '<S396>/Constant1'
     *  Constant: '<S396>/Constant2'
     *  Constant: '<S397>/Constant1'
     *  Constant: '<S397>/Constant2'
     *  Constant: '<S398>/Constant1'
     *  Constant: '<S398>/Constant2'
     *  Constant: '<S399>/Constant1'
     *  Constant: '<S399>/Constant2'
     *  Constant: '<S400>/Constant1'
     *  Constant: '<S400>/Constant2'
     *  Constant: '<S468>/Calib'
     *  Constant: '<S469>/Calib'
     *  Constant: '<S470>/Calib'
     *  Constant: '<S471>/Calib'
     *  Constant: '<S472>/Calib'
     *  Constant: '<S473>/Calib'
     *  Constant: '<S474>/Calib'
     *  Constant: '<S475>/Calib'
     *  Constant: '<S476>/Calib'
     *  Constant: '<S477>/Calib'
     *  Constant: '<S478>/Calib'
     *  Constant: '<S479>/Constant1'
     *  Constant: '<S479>/Constant2'
     *  Constant: '<S480>/Constant1'
     *  Constant: '<S480>/Constant2'
     *  Constant: '<S481>/Constant1'
     *  Constant: '<S481>/Constant2'
     *  Constant: '<S482>/Constant1'
     *  Constant: '<S482>/Constant2'
     *  Constant: '<S483>/Constant1'
     *  Constant: '<S483>/Constant2'
     *  Constant: '<S484>/Constant1'
     *  Constant: '<S484>/Constant2'
     *  Constant: '<S485>/Constant1'
     *  Constant: '<S485>/Constant2'
     *  Constant: '<S486>/Constant1'
     *  Constant: '<S486>/Constant2'
     *  DataStoreRead: '<S398>/StatusByte_AC_RefrigTempSnsrCPerf'
     *  DataStoreRead: '<S400>/StatusByte_LostCommACRefrigExpVlvActC'
     *  DataStoreRead: '<S481>/StatusByte_LostCommACRefrigExpVlvActD'
     *  DataStoreRead: '<S483>/StatusByte_AC_RefrigTempSnsr4CktPerf'
     *  DataStoreRead: '<S484>/StatusByte_AC_RefrigTempSnsr5CktPerf'
     *  DataStoreRead: '<S485>/StatusByte_AC_RefrigTempSnsr5CktShotoGro'
     *  DataStoreRead: '<S486>/StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     *  Logic: '<S297>/Logical Operator3'
     *  Logic: '<S297>/Logical Operator4'
     *  Logic: '<S305>/Logical Operator'
     *  Logic: '<S305>/Logical Operator1'
     *  Logic: '<S305>/Logical Operator2'
     *  Logic: '<S305>/Logical Operator3'
     *  Logic: '<S305>/Logical Operator4'
     *  Logic: '<S305>/Logical Operator5'
     *  Logic: '<S305>/Logical Operator6'
     *  Logic: '<S305>/Logical1'
     *  Logic: '<S305>/Logical2'
     *  Logic: '<S312>/Logical Operator'
     *  Logic: '<S312>/Logical Operator1'
     *  Logic: '<S312>/Logical Operator10'
     *  Logic: '<S312>/Logical Operator2'
     *  Logic: '<S312>/Logical Operator3'
     *  Logic: '<S312>/Logical Operator4'
     *  Logic: '<S312>/Logical Operator5'
     *  Logic: '<S312>/Logical Operator6'
     *  Logic: '<S312>/Logical Operator7'
     *  Logic: '<S312>/Logical Operator8'
     *  Logic: '<S312>/Logical Operator9'
     *  Logic: '<S312>/Logical1'
     *  Logic: '<S312>/Logical2'
     *  Logic: '<S396>/Logical Operator'
     *  Logic: '<S397>/Logical Operator'
     *  Logic: '<S398>/Logical Operator'
     *  Logic: '<S399>/Logical Operator'
     *  Logic: '<S400>/Logical Operator'
     *  Logic: '<S479>/Logical Operator'
     *  Logic: '<S480>/Logical Operator'
     *  Logic: '<S481>/Logical Operator'
     *  Logic: '<S482>/Logical Operator'
     *  Logic: '<S483>/Logical Operator'
     *  Logic: '<S484>/Logical Operator'
     *  Logic: '<S485>/Logical Operator'
     *  Logic: '<S486>/Logical Operator'
     *  RelationalOperator: '<S297>/Comparison1'
     *  RelationalOperator: '<S297>/Comparison5'
     *  RelationalOperator: '<S396>/Relational Operator1'
     *  RelationalOperator: '<S396>/Relational Operator2'
     *  RelationalOperator: '<S397>/Relational Operator1'
     *  RelationalOperator: '<S397>/Relational Operator2'
     *  RelationalOperator: '<S398>/Relational Operator1'
     *  RelationalOperator: '<S398>/Relational Operator2'
     *  RelationalOperator: '<S399>/Relational Operator1'
     *  RelationalOperator: '<S399>/Relational Operator2'
     *  RelationalOperator: '<S400>/Relational Operator1'
     *  RelationalOperator: '<S400>/Relational Operator2'
     *  RelationalOperator: '<S479>/Relational Operator1'
     *  RelationalOperator: '<S479>/Relational Operator2'
     *  RelationalOperator: '<S480>/Relational Operator1'
     *  RelationalOperator: '<S480>/Relational Operator2'
     *  RelationalOperator: '<S481>/Relational Operator1'
     *  RelationalOperator: '<S481>/Relational Operator2'
     *  RelationalOperator: '<S482>/Relational Operator1'
     *  RelationalOperator: '<S482>/Relational Operator2'
     *  RelationalOperator: '<S483>/Relational Operator1'
     *  RelationalOperator: '<S483>/Relational Operator2'
     *  RelationalOperator: '<S484>/Relational Operator1'
     *  RelationalOperator: '<S484>/Relational Operator2'
     *  RelationalOperator: '<S485>/Relational Operator1'
     *  RelationalOperator: '<S485>/Relational Operator2'
     *  RelationalOperator: '<S486>/Relational Operator1'
     *  RelationalOperator: '<S486>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S398>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S398>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S400>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S400>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S481>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S481>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S483>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S483>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S484>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S484>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S485>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S485>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S486>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S486>/Bitwise Operator2'
     */
    VeBTRR_b_BattCool_Flts = (((((((((((((VeBTRR_b_ChillerFlts) ||
        (VeBTRR_b_LTAP_Flts)) || (VeBTRR_b_EAC_Flts)) ||
        (VeBTRR_b_PressSnsr_Flts)) || (VeBTRR_b_BottleSnsr_Flts)) ||
        (VeBTRR_b_LOC_Flts)) || (VeBTRR_b_RadFan_Flts)) ||
        rtb_VariantMerge_For_Variant_So) || (VeBTRR_b_EXV_Faults)) ||
        (VeBTRR_b_CPVFailures)) || (((((uint32)VeBTRR_b_BatCPV_StuckOpenOrSNA_) ==
        CeRCVR_e_Faulty_Open) || (((uint32)VeBTRR_b_BatCPV_StuckOpenOrSNA_) ==
        CeRCVR_e_SNA)) && (KeBTRR_b_Enbl_BTBV_LOC_Flt))) || ((((((((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsrCPe) & 1U) != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsrCPe) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_EEXV_RefTmpSnrFlt)) || ((((((uint32)
        BTRR_ac_DW.StatusByte_LostCommACRefrigEx_n) & 1U) != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_LostCommACRefrigEx_n) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_EEXV_ACRefVlvFlt))) ||
        ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oc) &&
         (KeBTRR_b_Enbl_EEXV_PressSens_Flt))) ||
        ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dg) &&
         (KeBTRR_b_Enbl_EEXV_TempSens_Flt))) || (((((VeBTRR_b_EAC_Flts_tmp != 0U)
        && (VeBTRR_b_EAC_Flts_tmp_0 == 0U)) && (KeBTRR_b_Enbl_EEXV_LIN1BusFlt)) ||
        (((VeBTRR_b_EAC_Flts_tmp_1 != 0U) && (VeBTRR_b_EAC_Flts_tmp_2 == 0U)) &&
         (KeBTRR_b_Enbl_EEXV_LIN2BusFlt))) || (((VeBTRR_b_EAC_Flts_tmp_3 != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_4 == 0U)) && (KeBTRR_b_Enbl_EEXV_LIN3BusFlt))))) ||
        ((((((((((((((uint32)BTRR_ac_DW.StatusByte_LostCommACRefrigEx_e) & 1U)
                   != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_LostCommACRefrigEx_e) & 64U) == 0U)) &&
                 (KeBTRR_b_Enbl_OEXV_ACRefVlvFlt)) || ((((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr4Ck) & 1U) != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr4Ck) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_OEXV_ACTmpSnr4Flt))) || ((((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5_n) & 1U) != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5_n) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_OEXV_ACTmpSnr5Flt))) || ((((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5_o) & 1U) != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5_o) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_OEXV_RefSnrGFlt))) || ((((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5Ck) & 1U) != 0U) && ((((uint32)
        BTRR_ac_DW.StatusByte_AC_RefrigTempSnsr5Ck) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_OEXV_RefSnrBFlt))) ||
            ((BTRR_ac_B.TmpSignalConversionAtTmpVM__nlx) &&
             (KeBTRR_b_Enbl_OEXV_PressElctFlt))) ||
           ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_fh) &&
            (KeBTRR_b_Enbl_OEXV_PressSensFlt))) ||
          ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_kq) &&
           (KeBTRR_b_Enbl_OEXV_PerfDiagFlt))) || (((((VeBTRR_b_EAC_Flts_tmp !=
        0U) && (VeBTRR_b_EAC_Flts_tmp_0 == 0U)) &&
        (KeBTRR_b_Enbl_OEXV_LIN1BusFlt)) || (((VeBTRR_b_EAC_Flts_tmp_1 != 0U) &&
        (VeBTRR_b_EAC_Flts_tmp_2 == 0U)) && (KeBTRR_b_Enbl_OEXV_LIN2BusFlt))) ||
        (((VeBTRR_b_EAC_Flts_tmp_3 != 0U) && (VeBTRR_b_EAC_Flts_tmp_4 == 0U)) &&
         (KeBTRR_b_Enbl_OEXV_LIN3BusFlt)))));

    /* Logic: '<S309>/Logical5' incorporates:
     *  Constant: '<S373>/Constant1'
     *  Constant: '<S373>/Constant2'
     *  Constant: '<S374>/Constant1'
     *  Constant: '<S374>/Constant2'
     *  Constant: '<S375>/Constant1'
     *  Constant: '<S375>/Constant2'
     *  Constant: '<S376>/Constant1'
     *  Constant: '<S376>/Constant2'
     *  Constant: '<S386>/Calib'
     *  Constant: '<S387>/Calib'
     *  DataStoreRead: '<S373>/StatusByte_CoolantVlvB_CktHi'
     *  DataStoreRead: '<S374>/StatusByte_CoolantVlvB_CktLo'
     *  DataStoreRead: '<S375>/StatusByte_CoolantVlvB_Ckt'
     *  DataStoreRead: '<S376>/StatusByte_CoolantVlvB_StkClsd'
     *  Logic: '<S304>/Logical10'
     *  Logic: '<S304>/Logical3'
     *  Logic: '<S304>/Logical8'
     *  Logic: '<S304>/Logical9'
     *  Logic: '<S307>/Logical3'
     *  Logic: '<S308>/Logical3'
     *  Logic: '<S373>/LogicalOperator'
     *  Logic: '<S374>/LogicalOperator'
     *  Logic: '<S375>/LogicalOperator'
     *  Logic: '<S376>/LogicalOperator'
     *  RelationalOperator: '<S373>/RelationalOperator1'
     *  RelationalOperator: '<S373>/RelationalOperator2'
     *  RelationalOperator: '<S374>/RelationalOperator1'
     *  RelationalOperator: '<S374>/RelationalOperator2'
     *  RelationalOperator: '<S375>/RelationalOperator1'
     *  RelationalOperator: '<S375>/RelationalOperator2'
     *  RelationalOperator: '<S376>/RelationalOperator1'
     *  RelationalOperator: '<S376>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S373>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S373>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S374>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S374>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S375>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S375>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S376>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S376>/BitwiseOperator2'
     */
    VeBTRR_b_BattHeatFlts = ((((((((VeBTRR_b_BattHeaterFlts) ||
        ((((((VeBTRR_b_HTAP_PerfFlt) || (VeBTRR_b_LOC_HTAP)) ||
            (VeBTRR_b_LIN2_BusOff)) || (VeBTRR_b_LIN1_BusOff)) ||
          (VeBTRR_b_HTAPDryRun)) || (VeBTRR_b_HTAPDryRunFA))) ||
        ((((((((VeBTRR_b_LOC_ECH) || (VeBTRR_b_ECH_PerfFlt)) ||
              (VeBTRR_b_ECHTIS_PinDiag)) || (VeBTRR_b_ECH_InFlt)) ||
            (VeBTRR_b_ECH_OutFlt)) || (VeBTRR_b_HTAP_TmpFlt)) || ((((((sint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 64U) == 0U)) &&
        (KeBTRR_b_Enbl_HTSOV_StkClose))) || ((((((((sint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 64U) == 0U)) || (((((sint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 64U) == 0U))) || (((((sint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 1) > 0) && ((((uint32)
        BTRR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 64U) == 0U))) &&
        (KeBTRR_b_Enbl_HTSOV_PinFlts)))) || ((VeBTRR_b_HTCV_PinFlts) ||
        (VeBTRR_b_HTCV_StckFlt))) || (VeBTRR_b_LTAP_Flts)) ||
        (VeBTRR_b_BottleSnsr_Flts)) || (VeBTRR_b_LOC_Flts)) ||
        rtb_VariantMerge_For_Variant_So);

    /* Switch: '<S432>/Switch1' incorporates:
     *  Constant: '<S434>/Calib'
     *  RelationalOperator: '<S309>/Comparison1'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 >= KeBTRR_T_CellMaxThHi_Msg2)
    {
        /* Switch: '<S432>/Switch1' */
        VeBTRR_b_BattCondFlts = VeBTRR_b_BattCool_Flts;
    }
    else
    {
        /* Switch: '<S432>/Switch1' incorporates:
         *  Constant: '<S436>/Calib'
         *  RelationalOperator: '<S309>/Comparison2'
         *  Switch: '<S432>/Switch2'
         */
        VeBTRR_b_BattCondFlts = ((TmpSignalConversionAtTmpVM_F_j3 <=
            KeBTRR_T_CellMaxThLo_Msg2) && (VeBTRR_b_BattHeatFlts));
    }

    /* End of Switch: '<S432>/Switch1' */

    /* Logic: '<S309>/Logical1' incorporates:
     *  Constant: '<S437>/Calib'
     */
    VeBTRR_b_BattCoolFlt_CompErr = (((VeBTRR_b_CellMaxTh_HybAltMd) &&
        (VeBTRR_b_BattCool_Flts)) && (KeBTRR_b_EnblThrmlHybAltMd));

    /* Logic: '<S309>/Logical2' incorporates:
     *  Constant: '<S438>/Calib'
     */
    VeBTRR_b_BattCoolFlt_CellMaxErr = (TmpSignalConversionAtTmpVM_F_pq &&
        (KeBTRR_b_Enbl_HAM_CellMaxFA));

    /* Logic: '<S309>/Logical4' */
    VeBTRR_b_BattCoolingFlt = ((VeBTRR_b_BattCoolFlt_CompErr) ||
        (VeBTRR_b_BattCoolFlt_CellMaxErr));

    /* Lookup_n-D: '<S514>/Vector' incorporates:
     *  MinMax: '<S153>/MinMax2'
     */
    TmpSignalConversionAtTmpVM_Fc_c = look1_iflf_binlcapw(fmaxf
        (BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gm, VeBTRR_dT_CellOverTemp_BD),
        ((const float32 *)&(KxBTRR_P_EVA_BattCoolPwrLookup[0])), ((const float32
        *)&(KtBTRR_P_EVA_BattCoolPwrLookup[0])), 10U);

    /* Outputs for Atomic SubSystem: '<S155>/Hysteresis2' */
    /* Switch: '<S546>/Switch1' incorporates:
     *  Constant: '<S548>/Calib'
     *  RelationalOperator: '<S546>/GreaterThan'
     */
    if (BTRR_ac_B.TmpSignalConversionAtTmpVM__bgo >
            KeBTRR_T_BatClntTmp_Cool_MaxAllwdHi)
    {
        /* Switch: '<S546>/Switch1' incorporates:
         *  Constant: '<S546>/ConstantValue'
         */
        VeBTRR_T_LTL_CoolantTemp = true;
    }
    else
    {
        /* Switch: '<S546>/Switch1' incorporates:
         *  Constant: '<S549>/Calib'
         *  RelationalOperator: '<S546>/GreaterThan1'
         *  UnitDelay: '<S546>/UnitDelay'
         */
        VeBTRR_T_LTL_CoolantTemp = ((BTRR_ac_B.TmpSignalConversionAtTmpVM__bgo >=
            KeBTRR_T_BatClntTmp_Cool_MaxAllwdLo) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_lr));
    }

    /* End of Switch: '<S546>/Switch1' */

    /* Update for UnitDelay: '<S546>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_lr = VeBTRR_T_LTL_CoolantTemp;

    /* End of Outputs for SubSystem: '<S155>/Hysteresis2' */

    /* Logic: '<S155>/Logical7' incorporates:
     *  Constant: '<S155>/ConstantValue1'
     *  Constant: '<S155>/ConstantValue2'
     *  Logic: '<S155>/Logical10'
     *  Logic: '<S155>/Logical8'
     *  Logic: '<S155>/Logical9'
     *  RelationalOperator: '<S155>/Comparison2'
     *  RelationalOperator: '<S155>/Comparison3'
     */
    VeBTRR_b_BattCPVOpn_LTCPV_RA = (((VeBTRR_b_LT_CPV_StuckClsdOrSNA) &&
        ((VeBTRR_dT_CellUnderTemp_BD <= 0.0F) &&
         (VeBTRR_dT_CellUnderTempPassive_BD <= 0.0F))) &&
        (!VeBTRR_T_LTL_CoolantTemp));

    /* Switch: '<S155>/Switch' incorporates:
     *  Constant: '<S555>/Calib'
     */
    if (KeBTRR_b_Enbl_LTCPVFlt_RA)
    {
        /* Switch: '<S155>/Switch' */
        VeBTRR_b_BattCoolReq_CPV_RA_BD = VeBTRR_b_BattCPVOpn_LTCPV_RA;
    }
    else
    {
        /* Switch: '<S155>/Switch' incorporates:
         *  Constant: '<S554>/Calib'
         *  Constant: '<S556>/Calib'
         *  Logic: '<S155>/Logical11'
         *  Logic: '<S155>/Logical12'
         *  Logic: '<S155>/Logical13'
         *  Logic: '<S155>/Logical4'
         */
        VeBTRR_b_BattCoolReq_CPV_RA_BD = ((VeBTRR_T_LTL_CoolantTemp) &&
            (((VeBTRR_b_CPVFailures) && (KeBTRR_b_Enbl_BTL_CPVFlt)) ||
             ((VeBTRR_b_LT_CPV_StuckClsdOrSNA) && (KeBTRR_b_Enbl_LTL_CPVFlt))));
    }

    /* End of Switch: '<S155>/Switch' */

    /* Lookup_n-D: '<S513>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    VeBTRR_P_BatCoolPwr_PerWupNeed = look1_iflf_binlcapw
        (BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g3, ((const float32 *)
          &(KxBTRR_P_BattCoolPwrNeed_PerWup[0])), ((const float32 *)
          &(KtBTRR_P_BattCoolPwrNeed_PerWup[0])), 7U);

    /* RelationalOperator: '<S729>/Comparison4' incorporates:
     *  RelationalOperator: '<S729>/Comparison5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    VeBTRR_b_PerWup_BatToCond_BD_tm = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_c0;

    /* Logic: '<S729>/Logical3' incorporates:
     *  Constant: '<S754>/Constant'
     *  Constant: '<S755>/Constant'
     *  Logic: '<S729>/Logical2'
     *  RelationalOperator: '<S729>/Comparison4'
     *  RelationalOperator: '<S729>/Comparison5'
     */
    VeBTRR_b_PerWup_BatToCond_BD = ((VeBTRR_b_RS_N_Or_NrmlPerWp_AD) &&
        ((CeTPCR_e_BattOnly_Cond == ((uint32)VeBTRR_b_PerWup_BatToCond_BD_tm)) ||
         (((uint32)VeBTRR_b_PerWup_BatToCond_BD_tm) ==
          CeTPCR_e_Both_Eng_N_Bat_Cond)));

    /* RelationalOperator: '<S153>/Comparison1' incorporates:
     *  RelationalOperator: '<S155>/Comparison9'
     *  RelationalOperator: '<S157>/Comparison8'
     *  RelationalOperator: '<S518>/Comparison9'
     *  RelationalOperator: '<S671>/RelationalOperator2'
     *  RelationalOperator: '<S729>/Comparison8'
     *  RelationalOperator: '<S729>/Comparison9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    tmp_0 = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_oe;

    /* Logic: '<S153>/Logical1' incorporates:
     *  Constant: '<S553>/Calib'
     *  Logic: '<S155>/Logical1'
     */
    rtb_UnitDelay_do = ((VeBTRR_b_BattCoolReq_CPV_RA_BD) &&
                        (KeBTRR_b_EnblPmpFlwNCoolPwr_Max_CPVRA));

    /* Switch: '<S502>/Switch1' incorporates:
     *  Constant: '<S499>/Constant'
     *  Logic: '<S153>/Logical1'
     *  Logic: '<S153>/Logical9'
     *  RelationalOperator: '<S153>/Comparison1'
     */
    if ((((uint32)tmp_0) == CePDTR_e_Dischrg_ForcBatCool_Hys) ||
            rtb_UnitDelay_do)
    {
        /* Switch: '<S502>/Switch1' incorporates:
         *  Constant: '<S505>/Calib'
         *  MinMax: '<S153>/MinMax1'
         */
        TmpSignalConversionAtTmpVM_Fc_c = fmaxf
            (KeBTRR_P_BattCoolPwr_OV_AmbNotChill,
             TmpSignalConversionAtTmpVM_Fc_c);
    }
    else
    {
        /* RelationalOperator: '<S153>/Comparison5' incorporates:
         *  RelationalOperator: '<S153>/Comparison2'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
         *  Switch: '<S153>/Switch1'
         */
        rtb_Switch1_mmr_tmp = BTRR_ac_B.TmpSignalConversionAtTmpVM__mt3;

        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S500>/Constant'
         *  RelationalOperator: '<S153>/Comparison5'
         */
        if (CeAVTR_e_EVA_Cool != ((uint32)rtb_Switch1_mmr_tmp))
        {
            /* Switch: '<S153>/Switch2' incorporates:
             *  Constant: '<S501>/Constant'
             *  RelationalOperator: '<S153>/Comparison2'
             *  Switch: '<S153>/Switch3'
             */
            if (CeAVTR_e_EVA_MaxCool == ((uint32)rtb_Switch1_mmr_tmp))
            {
                /* Switch: '<S502>/Switch1' incorporates:
                 *  Constant: '<S509>/Calib'
                 *  Switch: '<S153>/Switch2'
                 */
                TmpSignalConversionAtTmpVM_Fc_c = KeBTRR_P_BattMaxCoolin_Pwr;
            }
            else if (VeBTRR_b_PerWup_BatToCond_BD)
            {
                /* Switch: '<S153>/Switch3' incorporates:
                 *  Switch: '<S153>/Switch2'
                 *  Switch: '<S502>/Switch1'
                 */
                TmpSignalConversionAtTmpVM_Fc_c = VeBTRR_P_BatCoolPwr_PerWupNeed;
            }
            else
            {
                /* Switch: '<S502>/Switch1' incorporates:
                 *  Lookup_n-D: '<S512>/Vector'
                 *  Switch: '<S153>/Switch2'
                 *  Switch: '<S153>/Switch3'
                 *  Switch: '<S795>/Switch1'
                 */
                TmpSignalConversionAtTmpVM_Fc_c = look1_iflf_binlcapw
                    (VeBTRR_dT_CellOverTemp_BD, ((const float32 *)
                      &(KxBTRR_P_BattCoolPwrLookup[0])), ((const float32 *)
                      &(KtBTRR_P_BattCoolPwrLookup[0])), 10U);
            }

            /* End of Switch: '<S153>/Switch2' */
        }
    }

    /* End of Switch: '<S502>/Switch1' */

    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S789>/Constant'
     *  Constant: '<S790>/Constant'
     *  Constant: '<S791>/Constant'
     *  Constant: '<S792>/Calib'
     *  Logic: '<S163>/LogicalOperator'
     *  Logic: '<S163>/LogicalOperator1'
     *  RelationalOperator: '<S163>/RelationalOperator'
     *  RelationalOperator: '<S163>/RelationalOperator1'
     *  RelationalOperator: '<S163>/RelationalOperator2'
     *  Switch: '<S996>/Switch'
     */
    VeBTRR_K_ehThermSt_OvAct = (float32)(((((((uint32)VeBTRR_e_VehThermSt_AD) ==
        CeTHMR_e_TempAllowBattCoolOV) || (((uint32)VeBTRR_e_VehThermSt_AD) ==
        CeTHMR_e_TempAllowBattHeatOV)) || (((uint32)VeBTRR_e_VehThermSt_AD) ==
        CeTHMR_e_TempAllowBattCoolNHeatOV)) && (KeBTRR_b_EnblEburnHyst)) ? 1 : 0);

    /* Outputs for Atomic SubSystem: '<S155>/Hysteresis3' */
    /* Switch: '<S547>/Switch1' incorporates:
     *  RelationalOperator: '<S547>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > VeBTRR_T_MaxBattAllow)
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  Constant: '<S547>/ConstantValue'
         */
        rtb_VariantMerge_For_Variant_So = true;
    }
    else
    {
        /* Switch: '<S547>/Switch1' incorporates:
         *  Lookup_n-D: '<S557>/Vector'
         *  RelationalOperator: '<S547>/GreaterThan1'
         *  Sum: '<S155>/Sum1'
         *  Switch: '<S163>/Switch'
         *  UnitDelay: '<S547>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_So = ((TmpSignalConversionAtTmpVM_F_m4 >=
            (VeBTRR_T_MaxBattAllow - look1_iflf_binlcapw
             (VeBTRR_K_ehThermSt_OvAct, ((const float32 *)
            &(KxBTRR_T_CellTempCoolReq_Hys[0])), ((const float32 *)
            &(KtBTRR_T_CellTempCoolReq_Hys[0])), 1U))) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_du));
    }

    /* End of Switch: '<S547>/Switch1' */

    /* Update for UnitDelay: '<S547>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_du = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S155>/Hysteresis3' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Overrides_100ms'
     */
    /* RelationalOperator: '<S573>/Comparison4' incorporates:
     *  RelationalOperator: '<S569>/Comparison4'
     *  RelationalOperator: '<S570>/Comparison1'
     *  RelationalOperator: '<S570>/Comparison3'
     *  RelationalOperator: '<S573>/Comparison11'
     *  RelationalOperator: '<S671>/RelationalOperator4'
     *  RelationalOperator: '<S671>/RelationalOperator5'
     *  Switch: '<S570>/Switch6'
     *  Switch: '<S591>/Switch1'
     *  Switch: '<S811>/Switch1'
     */
    VeBTRR_b_Batt_CritOrMarg_B4D_tm = VeBTRR_e_HV_BatTempCrit_CondState_New_BD;

    /* Logic: '<S573>/Logical5' incorporates:
     *  Constant: '<S575>/Constant'
     *  Constant: '<S576>/Constant'
     *  RelationalOperator: '<S573>/Comparison11'
     *  RelationalOperator: '<S573>/Comparison4'
     *  Switch: '<S591>/Switch1'
     */
    VeBTRR_b_Batt_CritOrMarg_B4D = ((((uint32)
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD) == CeBTRR_e_BatMarginal) ||
        (((uint32)VeBTRR_e_HV_BatTempCrit_CondState_New_BD) == CeBTRR_e_BatCrit));

    /* Logic: '<S155>/Logical2' incorporates:
     *  Constant: '<S155>/ConstantValue5'
     *  Constant: '<S544>/Constant'
     *  Constant: '<S550>/Calib'
     *  Constant: '<S551>/Calib'
     *  Logic: '<S155>/Logical17'
     *  Logic: '<S155>/Logical5'
     *  RelationalOperator: '<S155>/Comparison1'
     *  RelationalOperator: '<S155>/Comparison4'
     *  RelationalOperator: '<S155>/Comparison5'
     *  RelationalOperator: '<S155>/Comparison9'
     */
    VeBTRR_b_BattCoolRequest_Raw = (((rtb_VariantMerge_For_Variant_So ||
        ((VeBTRR_b_Batt_CritOrMarg_B4D) && (TmpSignalConversionAtTmpVM_F_m4 >
        KeBTRR_T_BatHot_CoolReq))) ||
        ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g3 > 0.0F) &&
         (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_BatHotTmp_PerWkUp))) ||
        (((uint32)tmp_0) == CePDTR_e_Dischrg_ForcBatCool_Hys));

    /* Logic: '<S155>/Logical3' */
    VeBTRR_b_BattCoolReq_BD = (rtb_UnitDelay_do || (VeBTRR_b_BattCoolRequest_Raw));

    /* Switch: '<S153>/Switch' incorporates:
     *  Constant: '<S510>/Calib'
     *  Constant: '<S511>/Calib'
     *  Switch: '<S503>/Switch1'
     *  Switch: '<S504>/Switch1'
     */
    if (KeBTRR_b_BattCool_Pwr_dflt_Slct)
    {
        /* Switch: '<S153>/Switch' incorporates:
         *  Constant: '<S508>/Calib'
         */
        VeBTRR_P_BattCoolPwrNeed = KeBTRR_P_BattCool_Pwr_dflt;
    }
    else if (KeBTRR_b_BattCoolPwr_Slct)
    {
        /* Switch: '<S504>/Switch1' incorporates:
         *  Switch: '<S153>/Switch'
         */
        VeBTRR_P_BattCoolPwrNeed = TmpSignalConversionAtTmpVM_Fc_c;
    }
    else if (VeBTRR_b_BattCoolReq_BD)
    {
        /* Switch: '<S503>/Switch1' incorporates:
         *  Switch: '<S153>/Switch'
         *  Switch: '<S504>/Switch1'
         */
        VeBTRR_P_BattCoolPwrNeed = TmpSignalConversionAtTmpVM_Fc_c;
    }
    else
    {
        /* Switch: '<S153>/Switch' incorporates:
         *  Constant: '<S153>/ConstantValue3'
         *  Switch: '<S503>/Switch1'
         *  Switch: '<S504>/Switch1'
         */
        VeBTRR_P_BattCoolPwrNeed = 0.0F;
    }

    /* End of Switch: '<S153>/Switch' */

    /* Outputs for Atomic SubSystem: '<S153>/Limiter' */
    /* Switch: '<S515>/Switch1' incorporates:
     *  Constant: '<S506>/Calib'
     *  RelationalOperator: '<S515>/RelationalOperator'
     */
    if (KeBTRR_P_BattCool_Pwr_MaxLim < VeBTRR_P_BattCoolPwrNeed)
    {
        /* Switch: '<S666>/Switch1' */
        rtb_Switch1_ln = KeBTRR_P_BattCool_Pwr_MaxLim;
    }
    else
    {
        /* Switch: '<S666>/Switch1' */
        rtb_Switch1_ln = VeBTRR_P_BattCoolPwrNeed;
    }

    /* End of Switch: '<S515>/Switch1' */

    /* Switch: '<S515>/Switch' incorporates:
     *  Constant: '<S507>/Calib'
     *  RelationalOperator: '<S515>/RelationalOperator1'
     */
    if (rtb_Switch1_ln > KeBTRR_P_BattCool_Pwr_MinLim)
    {
        /* Switch: '<S515>/Switch' */
        VeBTRR_P_BattCoolPwrNeedLim_BD = rtb_Switch1_ln;
    }
    else
    {
        /* Switch: '<S515>/Switch' */
        VeBTRR_P_BattCoolPwrNeedLim_BD = KeBTRR_P_BattCool_Pwr_MinLim;
    }

    /* End of Switch: '<S515>/Switch' */
    /* End of Outputs for SubSystem: '<S153>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S518>/Hysteresis1' */
    /* Switch: '<S522>/Switch1' incorporates:
     *  Lookup_n-D: '<S537>/Vector'
     *  RelationalOperator: '<S522>/GreaterThan'
     *  Sum: '<S518>/Sum'
     *  Switch: '<S163>/Switch'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 > (look1_iflf_binlcapw
            (VeBTRR_K_ehThermSt_OvAct, ((const float32 *)
            &(KxBTRR_K_CellTempHeatReq_Hys[0])), ((const float32 *)
            &(KtBTRR_T_CellTempHeatReq_Hys[0])), 1U) + VeBTRR_T_MinBattAllow))
    {
        /* Switch: '<S522>/Switch1' incorporates:
         *  Constant: '<S522>/ConstantValue'
         */
        rtb_VariantMerge_For_Variant_So = true;
    }
    else
    {
        /* Switch: '<S522>/Switch1' incorporates:
         *  RelationalOperator: '<S522>/GreaterThan1'
         *  UnitDelay: '<S522>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_So = ((TmpSignalConversionAtTmpVM_F_j3 >=
            VeBTRR_T_MinBattAllow) && (BTRR_ac_DW.UnitDelay_DSTATE_jb));
    }

    /* End of Switch: '<S522>/Switch1' */

    /* Update for UnitDelay: '<S522>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_jb = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S518>/Hysteresis1' */

    /* UnitDelay: '<S145>/UnitDelay2' */
    TmpSignalConversionAtTmpVM_Fc_c = BTRR_ac_DW.UnitDelay2_DSTATE;

    /* Outputs for Atomic SubSystem: '<S518>/Hysteresis2' */
    /* Switch: '<S523>/Switch1' incorporates:
     *  Constant: '<S525>/Calib'
     *  RelationalOperator: '<S523>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_Fc_c > KeBTRR_T_BatClntTmp_MaxAllwdHi)
    {
        /* Switch: '<S523>/Switch1' incorporates:
         *  Constant: '<S523>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S523>/Switch1' incorporates:
         *  Constant: '<S526>/Calib'
         *  RelationalOperator: '<S523>/GreaterThan1'
         *  UnitDelay: '<S523>/UnitDelay'
         */
        rtb_Switch1_bl = ((TmpSignalConversionAtTmpVM_Fc_c >=
                           KeBTRR_T_BatClntTmp_MaxAllwdLo) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_dre));
    }

    /* End of Switch: '<S523>/Switch1' */

    /* Update for UnitDelay: '<S523>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_dre = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S518>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S518>/Hysteresis3' */
    /* Switch: '<S524>/Switch1' incorporates:
     *  Lookup_n-D: '<S538>/Vector'
     *  RelationalOperator: '<S524>/GreaterThan'
     *  Sum: '<S518>/Sum1'
     *  Switch: '<S163>/Switch'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 > (look1_iflf_binlcapw
            (VeBTRR_K_ehThermSt_OvAct, ((const float32 *)
            &(KxBTRR_T_CellTempPsvHeatReq_Hys[0])), ((const float32 *)
            &(KtBTRR_T_CellTempPsvHeatReq_Hys[0])), 1U) +
            VeBTRR_T_MinBattAllowPsv))
    {
        /* Switch: '<S524>/Switch1' incorporates:
         *  Constant: '<S524>/ConstantValue'
         */
        rtb_Switch1_pz = true;
    }
    else
    {
        /* Switch: '<S524>/Switch1' incorporates:
         *  RelationalOperator: '<S524>/GreaterThan1'
         *  UnitDelay: '<S524>/UnitDelay'
         */
        rtb_Switch1_pz = ((TmpSignalConversionAtTmpVM_F_j3 >=
                           VeBTRR_T_MinBattAllowPsv) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_i));
    }

    /* End of Switch: '<S524>/Switch1' */

    /* Update for UnitDelay: '<S524>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_pz;

    /* End of Outputs for SubSystem: '<S518>/Hysteresis3' */

    /* Logic: '<S518>/Logical' incorporates:
     *  Constant: '<S529>/Calib'
     *  Constant: '<S535>/Calib'
     *  RelationalOperator: '<S518>/Comparison2'
     */
    VeBTRR_b_CelltempMax_HtReq = ((TmpSignalConversionAtTmpVM_F_m4 >
        KeBTRR_T_BatHeat_MaxReq) && (KeBTRR_b_Enbl_BatHeat_MaxReq));

    /* Logic: '<S518>/Logical1' incorporates:
     *  Constant: '<S534>/Calib'
     *  Logic: '<S518>/Logical7'
     */
    VeBTRR_b_CellTempMin_HeatReq = ((!rtb_VariantMerge_For_Variant_So) &&
        (KeBTRR_b_EnblBatCold_MinTmpHyst));

    /* Switch: '<S518>/Switch1' incorporates:
     *  Logic: '<S518>/Logical6'
     */
    rtb_VariantMerge_For_Variant_So = !rtb_Switch1_bl;

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S533>/Calib'
     *  Logic: '<S518>/Logical15'
     *  Switch: '<S518>/Switch'
     */
    rtb_Switch1_bl = (((VeBTRR_b_BTIS_FltDtct_AD) &&
                       (KeBTRR_b_EnblBTISFA_ContinueCond)) ||
                      rtb_VariantMerge_For_Variant_So);

    /* Switch: '<S518>/Switch1' incorporates:
     *  Constant: '<S532>/Calib'
     *  Logic: '<S518>/Logical16'
     */
    rtb_VariantMerge_For_Variant_So = (((VeBTRR_b_BTIS2_FltDtct_AD) &&
        (KeBTRR_b_EnblBTIS2FA_ContinueCond)) || rtb_VariantMerge_For_Variant_So);

    /* Logic: '<S518>/Logical4' */
    VeBTRR_b_BatClntTmpIn_StopHtReq = (rtb_Switch1_bl &&
        rtb_VariantMerge_For_Variant_So);

    /* RelationalOperator: '<S518>/Comparison3' incorporates:
     *  RelationalOperator: '<S162>/Comparison3'
     *  RelationalOperator: '<S727>/Comparison1'
     *  RelationalOperator: '<S727>/Comparison2'
     *  RelationalOperator: '<S727>/Comparison3'
     *  RelationalOperator: '<S727>/Comparison6'
     *  RelationalOperator: '<S728>/Comparison7'
     *  RelationalOperator: '<S729>/Comparison11'
     *  RelationalOperator: '<S729>/Comparison2'
     *  RelationalOperator: '<S729>/Comparison6'
     *  RelationalOperator: '<S729>/Comparison7'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     *  Switch: '<S162>/Switch'
     *  Switch: '<S727>/Switch'
     *  Switch: '<S727>/Switch2'
     *  Switch: '<S727>/Switch3'
     *  Switch: '<S761>/Switch1'
     *  Switch: '<S762>/Switch1'
     *  Switch: '<S763>/Switch1'
     *  Switch: '<S764>/Switch1'
     *  Switch: '<S765>/Switch1'
     *  Switch: '<S766>/Switch1'
     */
    VeBTRR_b_LTAPOn_BEV_tmp = BTRR_ac_B.TmpSignalConversionAtTmpVM_F_dj;

    /* Logic: '<S518>/Logical14' incorporates:
     *  Constant: '<S518>/ConstantValue5'
     *  Constant: '<S520>/Constant'
     *  Constant: '<S521>/Constant'
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Constant: '<S530>/Calib'
     *  Logic: '<S518>/Logical17'
     *  Logic: '<S518>/Logical2'
     *  Logic: '<S518>/Logical3'
     *  Logic: '<S518>/Logical5'
     *  RelationalOperator: '<S518>/Comparison1'
     *  RelationalOperator: '<S518>/Comparison3'
     *  RelationalOperator: '<S518>/Comparison4'
     *  RelationalOperator: '<S518>/Comparison5'
     *  RelationalOperator: '<S518>/Comparison9'
     */
    VeBTRR_b_BattHeatRequest = ((VeBTRR_b_BatClntTmpIn_StopHtReq) &&
        (((((VeBTRR_b_CellTempMin_HeatReq) ||
            ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g3 > 0.0F) &&
             (TmpSignalConversionAtTmpVM_F_j3 < KeBTRR_T_BatColdTmp_PerWkUp))) ||
           ((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_Heating) &&
            (KeBTRR_b_BatHeatReq_BatThrmState_Enb))) ||
          ((VeBTRR_b_Batt_CritOrMarg_B4D) && (TmpSignalConversionAtTmpVM_F_j3 <
        KeBTRR_T_BatColdHeat_ReqMin))) || (((uint32)tmp_0) ==
        CePDTR_e_Dischrg_ForcBatHeat_Hys)));

    /* Logic: '<S519>/Logical2' incorporates:
     *  Constant: '<S539>/Constant1'
     *  Constant: '<S539>/Constant2'
     *  Constant: '<S540>/Constant1'
     *  Constant: '<S540>/Constant2'
     *  Constant: '<S541>/Constant1'
     *  Constant: '<S541>/Constant2'
     *  Constant: '<S542>/Constant1'
     *  Constant: '<S542>/Constant2'
     *  Constant: '<S543>/Calib'
     *  Logic: '<S519>/Logical1'
     *  Logic: '<S539>/LogicalOperator'
     *  Logic: '<S540>/LogicalOperator'
     *  Logic: '<S541>/LogicalOperator'
     *  Logic: '<S542>/LogicalOperator'
     *  RelationalOperator: '<S539>/RelationalOperator1'
     *  RelationalOperator: '<S539>/RelationalOperator2'
     *  RelationalOperator: '<S540>/RelationalOperator1'
     *  RelationalOperator: '<S540>/RelationalOperator2'
     *  RelationalOperator: '<S541>/RelationalOperator1'
     *  RelationalOperator: '<S541>/RelationalOperator2'
     *  RelationalOperator: '<S542>/RelationalOperator1'
     *  RelationalOperator: '<S542>/RelationalOperator2'
     */
    VeBTRR_b_TempSnsrRat_Faulty = ((((((VeBTRR_b_BHOSFlt_tmp > 0) &&
        (VeBTRR_b_BHOSFlt_tmp_0 == 0U)) || ((VeBTRR_b_BTISFlt_tmp > 0) &&
        (VeBTRR_b_BTISFlt_tmp_0 == 0U))) || ((VeBTRR_b_LTAP_Flts_tmp > 0) &&
        (VeBTRR_b_LTAP_Flts_tmp_0 == 0U))) || ((VeBTRR_b_BTOSFlt_tmp > 0) &&
        (VeBTRR_b_BTOSFlt_tmp_0 == 0U))) && (KeBTRR_b_EnblTempRatFlts));

    /* Logic: '<S518>/Logical18' incorporates:
     *  Constant: '<S536>/Calib'
     */
    VeBTRR_b_Enbl_StopHeating = ((VeBTRR_b_TempSnsrRat_Faulty) ||
        (KeBTRR_b_Enbl_TempFlts_CellMax));

    /* Logic: '<S518>/Logical19' incorporates:
     *  Constant: '<S531>/Calib'
     *  Logic: '<S518>/Logical8'
     */
    VeBTRR_b_Psv_BattHeatReq_Raw = ((!rtb_Switch1_pz) &&
        (KeBTRR_b_CellunderTempPsv_ReqEnable));

    /* Switch: '<S162>/Switch' incorporates:
     *  Logic: '<S518>/Logical20'
     */
    rtb_Switch1_bl = ((VeBTRR_b_CelltempMax_HtReq) && (VeBTRR_b_Enbl_StopHeating));

    /* Switch: '<S518>/Switch2' */
    VeBTRR_b_BattHeatReq_BD = ((!rtb_Switch1_bl) && (VeBTRR_b_BattHeatRequest));

    /* Switch: '<S518>/Switch3' */
    if (rtb_Switch1_bl)
    {
        /* Switch: '<S518>/Switch3' incorporates:
         *  Constant: '<S518>/FALSEConstant1'
         */
        VeBTRR_b_Psv_BattHeatReq_BD = false;
    }
    else
    {
        /* Switch: '<S518>/Switch3' incorporates:
         *  Logic: '<S518>/Logical21'
         */
        VeBTRR_b_Psv_BattHeatReq_BD = ((VeBTRR_b_Psv_BattHeatReq_Raw) &&
            (VeBTRR_b_BatClntTmpIn_StopHtReq));
    }

    /* End of Switch: '<S518>/Switch3' */

    /* Lookup_n-D: '<S558>/Vector' incorporates:
     *  Switch: '<S163>/Switch'
     */
    VeBTRR_T_CellTempPsvCool_Hys = look1_iflf_binlcapw(VeBTRR_K_ehThermSt_OvAct,
        ((const float32 *)&(KxBTRR_T_CellTempPsvCool_Hys[0])), ((const float32 *)
        &(KtBTRR_T_CellTempPsvCool_Hys[0])), 1U);

    /* Outputs for Atomic SubSystem: '<S155>/Hysteresis1' */
    /* Switch: '<S545>/Switch1' incorporates:
     *  RelationalOperator: '<S545>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > VeBTRR_T_MaxBattAllowPsv)
    {
        /* Switch: '<S545>/Switch1' incorporates:
         *  Constant: '<S545>/ConstantValue'
         */
        rtb_VariantMerge_For_Variant_So = true;
    }
    else
    {
        /* Switch: '<S545>/Switch1' incorporates:
         *  RelationalOperator: '<S545>/GreaterThan1'
         *  Sum: '<S155>/Sum'
         *  UnitDelay: '<S545>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_So = ((TmpSignalConversionAtTmpVM_F_m4 >=
            (VeBTRR_T_MaxBattAllowPsv - VeBTRR_T_CellTempPsvCool_Hys)) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_co));
    }

    /* End of Switch: '<S545>/Switch1' */

    /* Update for UnitDelay: '<S545>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_co = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S155>/Hysteresis1' */

    /* Logic: '<S155>/Logical6' incorporates:
     *  Constant: '<S552>/Calib'
     */
    VeBTRR_b_Psv_BattCoolReq_BD = (rtb_VariantMerge_For_Variant_So &&
        (KeBTRR_b_CellOverTempPsv_ReqEnable));

    /* RelationalOperator: '<S569>/Comparison4' incorporates:
     *  Constant: '<S574>/Constant'
     *  RelationalOperator: '<S573>/Comparison4'
     *  Switch: '<S591>/Switch1'
     */
    VeBTRR_b_BatTmpCrit_CondB4D_New = (((uint32)
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD) == CeBTRR_e_BatCrit);

    /* Switch: '<S570>/Switch6' incorporates:
     *  Constant: '<S577>/Constant'
     *  Constant: '<S578>/Constant'
     *  RelationalOperator: '<S570>/Comparison1'
     *  RelationalOperator: '<S570>/Comparison3'
     *  RelationalOperator: '<S573>/Comparison4'
     *  Switch: '<S570>/Switch1'
     *  Switch: '<S591>/Switch1'
     */
    if (((uint32)VeBTRR_e_HV_BatTempCrit_CondState_New_BD) == CeBTRR_e_BatCrit)
    {
        /* Switch: '<S570>/Switch6' incorporates:
         *  Constant: '<S579>/Constant'
         */
        VeBTRR_e_BatCondPriority_B4D = CeBTRR_e_BatCond_HiPriority;
    }
    else if (((uint32)VeBTRR_e_HV_BatTempCrit_CondState_New_BD) ==
             CeBTRR_e_BatMarginal)
    {
        /* Switch: '<S570>/Switch1' incorporates:
         *  Constant: '<S580>/Constant'
         *  Switch: '<S570>/Switch6'
         */
        VeBTRR_e_BatCondPriority_B4D = CeBTRR_e_BatCond_LoPriority;
    }
    else
    {
        /* Switch: '<S570>/Switch6' incorporates:
         *  Constant: '<S581>/Constant'
         *  Switch: '<S570>/Switch1'
         */
        VeBTRR_e_BatCondPriority_B4D = CeBTRR_e_BatCond_NoPriority;
    }

    /* Logic: '<S603>/Logical8' incorporates:
     *  Logic: '<S603>/Logical9'
     */
    VeBTRR_b_BatOofR_Recover = (rtb_LogicalOperator_kx &&
        (!VeBTRR_b_Bat_OofR_NoRecovery));

    /* Outputs for Atomic SubSystem: '<S606>/Hysteresis' */
    /* Switch: '<S628>/Switch1' incorporates:
     *  Constant: '<S639>/Calib'
     *  RelationalOperator: '<S628>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_CellTmpMinRSP_BattPriorityHot)
    {
        /* Switch: '<S628>/Switch1' incorporates:
         *  Constant: '<S628>/ConstantValue'
         */
        VeBTRR_T_BattCabPriority_HotLow = true;
    }
    else
    {
        /* Switch: '<S628>/Switch1' incorporates:
         *  Constant: '<S637>/Calib'
         *  RelationalOperator: '<S628>/GreaterThan1'
         *  UnitDelay: '<S628>/UnitDelay'
         */
        VeBTRR_T_BattCabPriority_HotLow = ((TmpSignalConversionAtTmpVM_F_m4 >=
            KeBTRR_T_CellTmpMinLSP_BattPriorityHot) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_gp));
    }

    /* End of Switch: '<S628>/Switch1' */

    /* Update for UnitDelay: '<S628>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_gp = VeBTRR_T_BattCabPriority_HotLow;

    /* End of Outputs for SubSystem: '<S606>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S606>/Hysteresis1' */
    /* Switch: '<S629>/Switch1' incorporates:
     *  Constant: '<S635>/Calib'
     *  RelationalOperator: '<S629>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > KeBTRR_T_CellTmpMaxRSP_BattPriorityHot)
    {
        /* Switch: '<S629>/Switch1' incorporates:
         *  Constant: '<S629>/ConstantValue'
         */
        rtb_LogicalOperator_kx = true;
    }
    else
    {
        /* Switch: '<S629>/Switch1' incorporates:
         *  Constant: '<S633>/Calib'
         *  RelationalOperator: '<S629>/GreaterThan1'
         *  UnitDelay: '<S629>/UnitDelay'
         */
        rtb_LogicalOperator_kx = ((TmpSignalConversionAtTmpVM_F_m4 >=
            KeBTRR_T_CellTmpMaxLSP_BattPriorityHot) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_hl));
    }

    /* End of Switch: '<S629>/Switch1' */

    /* Update for UnitDelay: '<S629>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_hl = rtb_LogicalOperator_kx;

    /* End of Outputs for SubSystem: '<S606>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S606>/Hysteresis2' */
    /* Switch: '<S630>/Switch1' incorporates:
     *  Constant: '<S638>/Calib'
     *  RelationalOperator: '<S630>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 >
            KeBTRR_T_CellTmpMinRSP_BattPriorityCold)
    {
        /* Switch: '<S630>/Switch1' incorporates:
         *  Constant: '<S630>/ConstantValue'
         */
        VeBTRR_T_BattCabPriority_ColdLow = true;
    }
    else
    {
        /* Switch: '<S630>/Switch1' incorporates:
         *  Constant: '<S636>/Calib'
         *  RelationalOperator: '<S630>/GreaterThan1'
         *  UnitDelay: '<S630>/UnitDelay'
         */
        VeBTRR_T_BattCabPriority_ColdLow = ((TmpSignalConversionAtTmpVM_F_j3 >=
            KeBTRR_T_CellTmpMinLSP_BattPriorityCold) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_aa));
    }

    /* End of Switch: '<S630>/Switch1' */

    /* Update for UnitDelay: '<S630>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_aa = VeBTRR_T_BattCabPriority_ColdLow;

    /* End of Outputs for SubSystem: '<S606>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S606>/Hysteresis3' */
    /* Switch: '<S631>/Switch1' incorporates:
     *  Constant: '<S634>/Calib'
     *  RelationalOperator: '<S631>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_F_j3 >
            KeBTRR_T_CellTmpMaxRSP_BattPriorityCold)
    {
        /* Switch: '<S631>/Switch1' incorporates:
         *  Constant: '<S631>/ConstantValue'
         */
        rtb_VariantMerge_For_Variant_So = true;
    }
    else
    {
        /* Switch: '<S631>/Switch1' incorporates:
         *  Constant: '<S632>/Calib'
         *  RelationalOperator: '<S631>/GreaterThan1'
         *  UnitDelay: '<S631>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_So = ((TmpSignalConversionAtTmpVM_F_j3 >=
            KeBTRR_T_CellTmpMaxLSP_BattPriorityCold) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_cj));
    }

    /* End of Switch: '<S631>/Switch1' */

    /* Update for UnitDelay: '<S631>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_cj = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S606>/Hysteresis3' */

    /* Logic: '<S606>/Logical2' */
    VeBTRR_T_BattCabPriority_ColdHi = !rtb_VariantMerge_For_Variant_So;

    /* Logic: '<S606>/Logical4' */
    VeBTRR_T_BattCabPriority_HotHi = !rtb_LogicalOperator_kx;

    /* Logic: '<S606>/Logical5' incorporates:
     *  Logic: '<S606>/Logical1'
     *  Logic: '<S606>/Logical3'
     */
    VeBTRR_T_BattCabPriority = (((VeBTRR_T_BattCabPriority_HotLow) &&
        (VeBTRR_T_BattCabPriority_HotHi)) || ((VeBTRR_T_BattCabPriority_ColdLow)
        && (VeBTRR_T_BattCabPriority_ColdHi)));

    /* Lookup_n-D: '<S663>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     */
    VeBTRR_P_BatHeatPwr_PerWupNeed = look1_iflf_binlcapw
        (BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g3, ((const float32 *)
          &(KxBTRR_P_BattHeatPwrNeed_PerWup[0])), ((const float32 *)
          &(KtBTRR_P_BattHeatPwrNeed_PerWup[0])), 7U);

    /* Lookup_n-D: '<S665>/Vector' incorporates:
     *  MinMax: '<S157>/MinMax2'
     */
    VeBTRR_P_EVA_BatHeatPwr_NeedRaw1 = look1_iflf_binlcapw(fmaxf
        (VeBTRR_dT_CellUnderTemp_BD, BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gm),
        ((const float32 *)&(KxBTRR_P_EVA_BattHeatPwrNeed_LookUp[0])), ((const
        float32 *)&(KtBTRR_P_EVA_BattHeatPwrNeed_LookUp[0])), 7U);

    /* Lookup_n-D: '<S662>/Vector' incorporates:
     *  Switch: '<S794>/Switch1'
     */
    VeBTRR_P_BatHeatPwr_NeedRaw2 = look1_iflf_binlcapw
        (VeBTRR_dT_CellUnderTemp_BD, ((const float32 *)
          &(KxBTRR_P_BattHeatPwrNeed_LookUp[0])), ((const float32 *)
          &(KtBTRR_P_BattHeatPwrNeed_LookUp[0])), 7U);

    /* RelationalOperator: '<S157>/Comparison4' incorporates:
     *  RelationalOperator: '<S729>/Comparison1'
     *  RelationalOperator: '<S729>/Comparison10'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
     *  Switch: '<S761>/Switch1'
     *  Switch: '<S762>/Switch1'
     *  Switch: '<S763>/Switch1'
     *  Switch: '<S764>/Switch1'
     *  Switch: '<S765>/Switch1'
     *  Switch: '<S766>/Switch1'
     */
    rtb_Switch1_mmr_tmp = BTRR_ac_B.TmpSignalConversionAtTmpVM__mt3;

    /* Switch: '<S157>/Switch2' incorporates:
     *  Constant: '<S650>/Constant'
     *  RelationalOperator: '<S157>/Comparison4'
     */
    if (((uint32)rtb_Switch1_mmr_tmp) == CeAVTR_e_EVA_Heat)
    {
        /* Switch: '<S157>/Switch2' */
        VeBTRR_P_BatHeatPwr_NeedRaw = VeBTRR_P_EVA_BatHeatPwr_NeedRaw1;
    }
    else
    {
        /* Switch: '<S157>/Switch2' */
        VeBTRR_P_BatHeatPwr_NeedRaw = VeBTRR_P_BatHeatPwr_NeedRaw2;
    }

    /* End of Switch: '<S157>/Switch2' */

    /* Switch: '<S652>/Switch1' incorporates:
     *  Constant: '<S647>/Constant'
     *  Constant: '<S648>/Constant'
     *  Constant: '<S649>/Constant'
     *  Constant: '<S659>/Calib'
     *  Logic: '<S157>/Logical1'
     *  Logic: '<S157>/Logical2'
     *  Logic: '<S157>/Logical3'
     *  Logic: '<S157>/Logical4'
     *  Logic: '<S157>/Logical5'
     *  Logic: '<S157>/Logical6'
     *  Logic: '<S157>/Logical8'
     *  RelationalOperator: '<S157>/Comparison1'
     *  RelationalOperator: '<S157>/Comparison6'
     *  RelationalOperator: '<S157>/Comparison8'
     *  Switch: '<S651>/Switch1'
     *  Switch: '<S653>/Switch1'
     *  Switch: '<S654>/Switch1'
     *  Switch: '<S994>/Switch'
     */
    if ((((uint32)tmp_0) == CePDTR_e_Dischrg_ForcBatHeat_Hys) &&
            (KeBTRR_b_BattHeatPwr_OVorEPD_OrrdEnbl))
    {
        /* Switch: '<S157>/Switch' incorporates:
         *  Constant: '<S658>/Calib'
         *  Constant: '<S660>/Calib'
         *  Constant: '<S661>/Calib'
         *  Switch: '<S157>/Switch1'
         */
        if (KeBTRR_b_OV_SelECHTIS)
        {
            TmpSignalConversionAtTmpVM_F_j3 =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_F_hy;
        }
        else if (KeBTRR_b_OV_SelBTOS)
        {
            /* Switch: '<S157>/Switch1' */
            TmpSignalConversionAtTmpVM_F_j3 =
                BTRR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;
        }
        else
        {
            TmpSignalConversionAtTmpVM_F_j3 = KeBTRR_T_ClntTempConst_BattHeatPwr;
        }

        /* End of Switch: '<S157>/Switch' */

        /* Switch: '<S652>/Switch1' incorporates:
         *  Lookup_n-D: '<S664>/Vector'
         */
        rtb_Switch1_ln = look1_iflf_binlcapw(TmpSignalConversionAtTmpVM_F_j3, ((
            const float32 *)&(KxBTRR_P_BattHeatPwr_OVorEPD[0])), ((const float32
            *)&(KtBTRR_P_BattHeatPwr_OVorEPD[0])), 8U);
    }
    else if (((CeTHMR_e_NoHeating == ((uint32)VeBTRR_e_HTCL_Heat_Distrib)) ||
              (((uint32)VeBTRR_e_HTCL_Heat_Distrib) == CeTHMR_e_CabinHeating)) &&
             (!VeBTRR_b_BattHeatReq_BD))
    {
        /* Switch: '<S654>/Switch1' incorporates:
         *  Constant: '<S655>/Calib'
         *  Switch: '<S652>/Switch1'
         */
        rtb_Switch1_ln = KeBTRR_P_BatHeatPwr_Need_NoBatReq;
    }
    else if ((VeBTRR_b_BattHeatReq_BD) && (VeBTRR_b_PerWup_BatToCond_BD))
    {
        /* Switch: '<S651>/Switch1' incorporates:
         *  Switch: '<S652>/Switch1'
         *  Switch: '<S654>/Switch1'
         */
        rtb_Switch1_ln = VeBTRR_P_BatHeatPwr_PerWupNeed;
    }
    else if ((VeBTRR_b_BattHeatReq_BD) && (!VeBTRR_b_PerWup_BatToCond_BD))
    {
        /* Switch: '<S653>/Switch1' incorporates:
         *  Switch: '<S651>/Switch1'
         *  Switch: '<S652>/Switch1'
         *  Switch: '<S654>/Switch1'
         */
        rtb_Switch1_ln = VeBTRR_P_BatHeatPwr_NeedRaw;
    }
    else
    {
        /* Switch: '<S652>/Switch1' incorporates:
         *  Constant: '<S157>/ConstantValue4'
         *  Switch: '<S651>/Switch1'
         *  Switch: '<S653>/Switch1'
         *  Switch: '<S654>/Switch1'
         */
        rtb_Switch1_ln = 0.0F;
    }

    /* End of Switch: '<S652>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S157>/Limiter' */
    /* Switch: '<S666>/Switch1' incorporates:
     *  Constant: '<S656>/Calib'
     *  RelationalOperator: '<S666>/RelationalOperator'
     */
    if (KeBTRR_P_BattHeatPwr_NeedMax < rtb_Switch1_ln)
    {
        /* Switch: '<S666>/Switch1' */
        rtb_Switch1_ln = KeBTRR_P_BattHeatPwr_NeedMax;
    }

    /* End of Switch: '<S666>/Switch1' */

    /* Switch: '<S666>/Switch' incorporates:
     *  Constant: '<S657>/Calib'
     *  RelationalOperator: '<S666>/RelationalOperator1'
     */
    if (rtb_Switch1_ln > KeBTRR_P_BattHeatPwr_NeedMin)
    {
        /* Switch: '<S666>/Switch' */
        VeBTRR_P_BatHeatPwr_NeedLimtd_BD = rtb_Switch1_ln;
    }
    else
    {
        /* Switch: '<S666>/Switch' */
        VeBTRR_P_BatHeatPwr_NeedLimtd_BD = KeBTRR_P_BattHeatPwr_NeedMin;
    }

    /* End of Switch: '<S666>/Switch' */
    /* End of Outputs for SubSystem: '<S157>/Limiter' */

    /* RelationalOperator: '<S158>/Comparison2' incorporates:
     *  Constant: '<S667>/Constant'
     *  Switch: '<S918>/Switch'
     */
    VeBTRR_b_isCharging_B4D = (((uint32)VeBTRR_e_ChargingSystemSts) ==
        CeOBCR_e_ChargingSts_Charging);

    /* Logic: '<S670>/Logical12' incorporates:
     *  Logic: '<S669>/Logical10'
     *  Logic: '<S671>/LogicalOperator1'
     */
    TmpSignalConversionAtTmpVM_F_pq = !VeBTRR_b_BattCondFlts;

    /* Logic: '<S670>/Logical16' incorporates:
     *  Logic: '<S671>/LogicalOperator'
     */
    VeBTRR_b_LTAPOnLtch_WL_tmp = !TmpSignalConversionAtTmpVM_F_ib;

    /* Logic: '<S670>/Logical11' incorporates:
     *  Constant: '<S692>/Constant'
     *  Constant: '<S693>/Constant'
     *  Constant: '<S694>/Constant'
     *  Constant: '<S695>/Constant'
     *  Constant: '<S696>/Constant'
     *  Constant: '<S697>/Constant'
     *  Constant: '<S698>/Calib'
     *  Constant: '<S699>/Calib'
     *  Constant: '<S700>/Calib'
     *  Logic: '<S670>/Logical1'
     *  Logic: '<S670>/Logical12'
     *  Logic: '<S670>/Logical13'
     *  Logic: '<S670>/Logical14'
     *  Logic: '<S670>/Logical15'
     *  Logic: '<S670>/Logical16'
     *  RelationalOperator: '<S670>/Comparison10'
     *  RelationalOperator: '<S670>/Comparison11'
     *  RelationalOperator: '<S670>/Comparison12'
     *  RelationalOperator: '<S670>/Comparison13'
     *  RelationalOperator: '<S670>/Comparison14'
     *  RelationalOperator: '<S670>/Comparison9'
     *  Switch: '<S919>/Switch'
     *  Switch: '<S993>/Switch'
     */
    VeBTRR_b_BattCondPlugin_Rq_OofR = (((((VeBTRR_b_BatOofR_Recover) &&
        (TmpSignalConversionAtTmpVM_F_pq ||
         (KeBTRR_b_DsblThrmlFltsChk_OOR_KeyOffMsg2))) && (((uint32)
        VeBTRR_e_BatCntctrStat) == CeHVTR_e_Closed)) && ((((((uint32)
        VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyAccy) || (((uint32)
        VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyPostRunAccy)) || ((((((uint32)
        VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyRun) || (((uint32)
        VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyCrank)) || (((uint32)
        VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyPostCrnk)) &&
        VeBTRR_b_LTAPOnLtch_WL_tmp)) || (KeBTRR_b_DsblMsg2_KeyChk))) &&
        (KeBTRR_b_DsblMsg2_OOR));

    /* RelationalOperator: '<S669>/Comparison5' incorporates:
     *  Constant: '<S679>/Constant'
     *  RelationalOperator: '<S670>/Comparison10'
     *  Switch: '<S993>/Switch'
     */
    rtb_LogicalOperator_kx = (((uint32)VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyOff);

    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising' */
    /* Logic: '<S673>/OR1' incorporates:
     *  UnitDelay: '<S673>/UnitDelay'
     */
    rtb_VariantMerge_For_Variant_So = !BTRR_ac_DW.UnitDelay_DSTATE_ly;

    /* Update for UnitDelay: '<S673>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_ly = rtb_LogicalOperator_kx;

    /* End of Outputs for SubSystem: '<S669>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising1' */
    /* Logic: '<S674>/AND' incorporates:
     *  Logic: '<S674>/OR1'
     *  UnitDelay: '<S674>/UnitDelay'
     */
    rtb_Switch1_bl = !BTRR_ac_DW.UnitDelay_DSTATE_bu;

    /* Update for UnitDelay: '<S674>/UnitDelay' incorporates:
     *  Constant: '<S669>/TRUEConstant1'
     */
    BTRR_ac_DW.UnitDelay_DSTATE_bu = true;

    /* End of Outputs for SubSystem: '<S669>/EdgeRising1' */

    /* Logic: '<S669>/Logical4' incorporates:
     *  Constant: '<S680>/Constant'
     *  Constant: '<S681>/Constant'
     *  Constant: '<S682>/Constant'
     *  RelationalOperator: '<S669>/Comparison6'
     *  RelationalOperator: '<S669>/Comparison7'
     *  RelationalOperator: '<S669>/Comparison8'
     *  RelationalOperator: '<S670>/Comparison10'
     *  Switch: '<S993>/Switch'
     */
    rtb_UnitDelay_do = (((((uint32)VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyAccy) ||
                         (((uint32)VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyRun)) ||
                        (((uint32)VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyCrank));

    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising2' */
    /* Logic: '<S675>/AND' incorporates:
     *  Logic: '<S675>/OR1'
     *  UnitDelay: '<S675>/UnitDelay'
     */
    rtb_Switch1_pz = (rtb_UnitDelay_do && (!BTRR_ac_DW.UnitDelay_DSTATE_jy));

    /* Update for UnitDelay: '<S675>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_jy = rtb_UnitDelay_do;

    /* End of Outputs for SubSystem: '<S669>/EdgeRising2' */

    /* Logic: '<S669>/Logical7' incorporates:
     *  Constant: '<S690>/Calib'
     */
    rtb_UnitDelay_p0 = ((VeBTRR_b_VhclPlgdIn_B4D) &&
                        (KeBTRR_b_Message2_LatchPlugRst));

    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising3' */
    /* Logic: '<S676>/AND' incorporates:
     *  Logic: '<S676>/OR1'
     *  UnitDelay: '<S676>/UnitDelay'
     */
    rtb_UnitDelay_do = (rtb_UnitDelay_p0 && (!BTRR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S676>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_m = rtb_UnitDelay_p0;

    /* End of Outputs for SubSystem: '<S669>/EdgeRising3' */

    /* Logic: '<S669>/Logical5' incorporates:
     *  Constant: '<S689>/Calib'
     */
    rtb_UnitDelay_p0 = ((VeBTRR_b_BattCondFlts) &&
                        (KeBTRR_b_EnblThrmFltsRst_Msg2));

    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising4' */
    /* Logic: '<S677>/AND' incorporates:
     *  Logic: '<S677>/OR1'
     *  UnitDelay: '<S677>/UnitDelay'
     */
    rtb_OR1_a2 = (rtb_UnitDelay_p0 && (!BTRR_ac_DW.UnitDelay_DSTATE_ke));

    /* Update for UnitDelay: '<S677>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_ke = rtb_UnitDelay_p0;

    /* End of Outputs for SubSystem: '<S669>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S669>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S669>/EdgeRising' */
    /* Logic: '<S691>/OR1' incorporates:
     *  Constant: '<S683>/Constant'
     *  Constant: '<S684>/Calib'
     *  Constant: '<S685>/Calib'
     *  Constant: '<S686>/Calib'
     *  Constant: '<S687>/Calib'
     *  Constant: '<S688>/Calib'
     *  Logic: '<S669>/Logical1'
     *  Logic: '<S669>/Logical11'
     *  Logic: '<S669>/Logical2'
     *  Logic: '<S669>/Logical3'
     *  Logic: '<S669>/Logical8'
     *  Logic: '<S669>/Logical9'
     *  Logic: '<S673>/AND'
     *  Logic: '<S691>/NOT'
     *  Logic: '<S691>/OR'
     *  RelationalOperator: '<S669>/Comparison1'
     *  RelationalOperator: '<S669>/Comparison2'
     *  RelationalOperator: '<S669>/Comparison3'
     *  RelationalOperator: '<S670>/Comparison9'
     *  Switch: '<S919>/Switch'
     *  UnitDelay: '<S669>/UnitDelay'
     *  UnitDelay: '<S691>/UnitDelay'
     */
    VeBTRR_b_BattCondPlugin_Rq_KeyOff = (((((((TmpSignalConversionAtTmpVM_F_pq ||
        (KeBTRR_b_DsblThrmlFltsChk_KeyOffMsg2)) && (((uint32)
        VeBTRR_e_BatCntctrStat) == CeHVTR_e_Closed)) &&
        rtb_LogicalOperator_bx_tmp) &&
        ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ht <=
          KeBTRR_T_BatCondPlug_InRqTmp) ||
         ((BTRR_ac_B.TmpSignalConversionAtTmpVM_F_ht >=
           KeBTRR_T_BatCondPlug_InRq_HotTmp) &&
          (KeBTRR_b_BatCondPlug_InRq_HotTmpEnbl)))) &&
        ((BTRR_ac_DW.UnitDelay_DSTATE_a) && (rtb_LogicalOperator_kx &&
        rtb_VariantMerge_For_Variant_So))) && (KeBTRR_b_DsblMsg2_AmbLow)) ||
        (((((!rtb_Switch1_bl) && (!rtb_Switch1_pz)) && (!rtb_UnitDelay_do)) && (
        !rtb_OR1_a2)) && (BTRR_ac_DW.UnitDelay_DSTATE_jo)));

    /* End of Outputs for SubSystem: '<S669>/EdgeRising' */

    /* Update for UnitDelay: '<S691>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_jo = VeBTRR_b_BattCondPlugin_Rq_KeyOff;

    /* End of Outputs for SubSystem: '<S669>/SignalLatchOnWithReset' */

    /* Logic: '<S158>/Logical5' */
    VeBTRR_b_BattCondPlugin_Rq_0 = ((VeBTRR_b_BattCondPlugin_Rq_OofR) ||
        (VeBTRR_b_BattCondPlugin_Rq_KeyOff));

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S701>/Constant'
     *  RelationalOperator: '<S671>/RelationalOperator2'
     */
    rtb_Switch1_bl = (((uint32)tmp_0) != CePDTR_e_No_Dischrg);

    /* Logic: '<S671>/LogicalOperator10' incorporates:
     *  Constant: '<S703>/Constant'
     *  Constant: '<S704>/Constant'
     *  Constant: '<S711>/Calib'
     *  Constant: '<S714>/Calib'
     *  Constant: '<S715>/Calib'
     *  Logic: '<S671>/LogicalOperator5'
     *  Logic: '<S671>/LogicalOperator6'
     *  Logic: '<S671>/LogicalOperator7'
     *  Logic: '<S671>/LogicalOperator9'
     *  RelationalOperator: '<S671>/RelationalOperator1'
     *  RelationalOperator: '<S671>/RelationalOperator3'
     *  Switch: '<S921>/Switch5'
     */
    VeBTRR_b_OV2_Msg7 = ((((KeBTRR_b_HVOVFail1_Msg7) &&
                           (CeHVTR_e_HVOverVoltFailureNoRegenLimp == ((uint32)
        VeBTRR_e_HVOverVoltFailure_AD))) || ((((uint32)
        VeBTRR_e_HVOverVoltFailure_AD) ==
                            CeHVTR_e_HVOverVoltFailureLimVehicleSpd) &&
                           (KeBTRR_b_HVOVFail2_Msg7))) && (rtb_Switch1_bl ||
                          (KeBTRR_b_DispStChk2_Msg7)));

    /* Logic: '<S671>/LogicalOperator3' incorporates:
     *  Constant: '<S709>/Calib'
     *  Constant: '<S710>/Calib'
     *  Logic: '<S671>/LogicalOperator8'
     */
    VeBTRR_b_OV1_Msg7 = ((VeBTRR_b_BatMargCond_ToState_tm && (rtb_Switch1_bl ||
                           (KeBTRR_b_DispStChk1_Msg7))) &&
                         (KeBTRR_b_BatOVChkMsg7));

    /* Logic: '<S671>/LogicalOperator16' incorporates:
     *  Constant: '<S705>/Constant'
     *  Constant: '<S706>/Constant'
     *  Constant: '<S708>/Calib'
     *  Constant: '<S712>/Calib'
     *  Constant: '<S713>/Calib'
     *  Logic: '<S671>/LogicalOperator13'
     *  Logic: '<S671>/LogicalOperator14'
     *  Logic: '<S671>/LogicalOperator15'
     *  RelationalOperator: '<S573>/Comparison4'
     *  RelationalOperator: '<S671>/RelationalOperator4'
     *  RelationalOperator: '<S671>/RelationalOperator5'
     *  Switch: '<S591>/Switch1'
     */
    VeBTRR_b_BattCritic_Msg7 = (((KeBTRR_b_EnblBatCritChk_Msg7) &&
        ((CeBTRR_e_BatMarginal == ((uint32)
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD)) || ((((uint32)
        VeBTRR_e_HV_BatTempCrit_CondState_New_BD) == CeBTRR_e_BatCrit) &&
        (KeBTRR_b_BatCritChk_Msg7)))) && (rtb_LogicalOperator_bx_tmp ||
        (KeBTRR_b_DsblPlgIn_Msg7)));

    /* Truth Table: '<S671>/TruthTable' incorporates:
     *  RelationalOperator: '<S670>/Comparison10'
     *  Switch: '<S993>/Switch'
     */
    /* Truth Table Function 'BTRR_MedTEH/BattLoop_Requests/Charging/Msg7_LeaveKeyInRUN/TruthTable': '<S719>:1' */
    /*  Hood Open */
    /*  Key in Run Pre-Start */
    /* Condition '#2': '<S719>:1:15' */
    rtb_LogicalOperator_kx = (((uint32)VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyRun);

    /*  Key in Crank */
    /* Condition '#3': '<S719>:1:19' */
    rtb_VariantMerge_For_Variant_So = (((uint32)VeBTRR_e_SSDR_KeySts) ==
        CeSSDR_e_KeyCrank);

    /*  Key in Run Post-Start */
    /* Condition '#4': '<S719>:1:23' */
    rtb_Switch1_bl = (((uint32)VeBTRR_e_SSDR_KeySts) == CeSSDR_e_KeyPostCrnk);
    rtb_UnitDelay_do = !VeBTRR_b_HoodAjar_AD;
    rtb_LogicalOperator_bx_tmp = !rtb_Switch1_bl;
    VeBTRR_b_BatMargCond_ToState_tm = !rtb_VariantMerge_For_Variant_So;
    if (((rtb_UnitDelay_do && rtb_LogicalOperator_kx) &&
            VeBTRR_b_BatMargCond_ToState_tm) && rtb_LogicalOperator_bx_tmp)
    {
        /* Decision 'D1': '<S719>:1:25' */
        /*  Hood Closed, Key in Run Pre-Start */
        /* Action '1': '<S719>:1:45' */
        rtb_VeBTRR_K_HoodKeyIndex = 1;
    }
    else
    {
        rtb_Switch1_pz = !rtb_LogicalOperator_kx;
        rtb_UnitDelay_do = (rtb_UnitDelay_do && rtb_Switch1_pz);
        if ((rtb_UnitDelay_do && rtb_VariantMerge_For_Variant_So) &&
                rtb_LogicalOperator_bx_tmp)
        {
            /* Decision 'D2': '<S719>:1:27' */
            /*  Hood Closed, Key in Crank */
            /* Action '2': '<S719>:1:51' */
            rtb_VeBTRR_K_HoodKeyIndex = 2;
        }
        else if ((rtb_UnitDelay_do && VeBTRR_b_BatMargCond_ToState_tm) &&
                 rtb_Switch1_bl)
        {
            /* Decision 'D3': '<S719>:1:29' */
            /*  Hood Closed, Key in Run Post-Start */
            /* Action '3': '<S719>:1:57' */
            rtb_VeBTRR_K_HoodKeyIndex = 3;
        }
        else if ((((VeBTRR_b_HoodAjar_AD) && rtb_LogicalOperator_kx) &&
                  VeBTRR_b_BatMargCond_ToState_tm) && rtb_LogicalOperator_bx_tmp)
        {
            /* Condition '#1': '<S719>:1:11' */
            /* Decision 'D4': '<S719>:1:31' */
            /*  Hood Open, Key in Run Pre-Start */
            /* Action '4': '<S719>:1:63' */
            rtb_VeBTRR_K_HoodKeyIndex = 4;
        }
        else
        {
            rtb_UnitDelay_do = ((VeBTRR_b_HoodAjar_AD) && rtb_Switch1_pz);
            if ((rtb_UnitDelay_do && rtb_VariantMerge_For_Variant_So) &&
                    rtb_LogicalOperator_bx_tmp)
            {
                /* Condition '#1': '<S719>:1:11' */
                /* Decision 'D5': '<S719>:1:33' */
                /*  Hood Open, Key in Crank */
                /* Action '5': '<S719>:1:69' */
                rtb_VeBTRR_K_HoodKeyIndex = 5;
            }
            else if ((rtb_UnitDelay_do && VeBTRR_b_BatMargCond_ToState_tm) &&
                     rtb_Switch1_bl)
            {
                /* Condition '#1': '<S719>:1:11' */
                /* Decision 'D6': '<S719>:1:35' */
                /*  Hood Open, Key in Run Post-Start */
                /* Action '6': '<S719>:1:75' */
                rtb_VeBTRR_K_HoodKeyIndex = 6;
            }
            else
            {
                /* Decision 'D7': '<S719>:1:37' */
                /*  Default */
                /*  Default */
                /* Action '7': '<S719>:1:81' */
                rtb_VeBTRR_K_HoodKeyIndex = 7;
            }
        }
    }

    /* End of Truth Table: '<S671>/TruthTable' */

    /* Logic: '<S671>/LogicalOperator2' incorporates:
     *  Constant: '<S702>/Constant'
     *  Constant: '<S707>/Calib'
     *  Constant: '<S716>/Calib'
     *  Logic: '<S671>/LogicalOperator11'
     *  Logic: '<S671>/LogicalOperator17'
     *  RelationalOperator: '<S670>/Comparison9'
     *  RelationalOperator: '<S671>/RelationalOperator'
     *  Selector: '<S671>/Selector'
     *  Switch: '<S919>/Switch'
     */
    rtb_LogicalOperator_kx = (((((((uint32)VeBTRR_e_BatCntctrStat) ==
        CeHVTR_e_Closed) && VeBTRR_b_LTAPOnLtch_WL_tmp) &&
        (TmpSignalConversionAtTmpVM_F_pq || (KeBTRR_b_Msg7_BattFlts_Dsbl))) &&
        (((VeBTRR_b_OV1_Msg7) || (VeBTRR_b_OV2_Msg7)) ||
         (VeBTRR_b_BattCritic_Msg7))) &&
        (KaBTRR_b_HoodKeyStat[rtb_VeBTRR_K_HoodKeyIndex - 1]));

    /* Outputs for Atomic SubSystem: '<S671>/TurnOnDelayTime1' */
    /* Outputs for Atomic SubSystem: '<S720>/EdgeRising' */
    /* Logic: '<S721>/AND' incorporates:
     *  Logic: '<S721>/OR1'
     *  UnitDelay: '<S721>/UnitDelay'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_LogicalOperator_kx &&
        (!BTRR_ac_DW.UnitDelay_DSTATE_hp));

    /* Update for UnitDelay: '<S721>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_hp = rtb_LogicalOperator_kx;

    /* End of Outputs for SubSystem: '<S720>/EdgeRising' */

    /* Switch: '<S720>/Switch1' incorporates:
     *  Logic: '<S720>/OR'
     *  Logic: '<S720>/OR1'
     */
    if ((!rtb_LogicalOperator_kx) || rtb_VariantMerge_For_Variant_So)
    {
        /* Switch: '<S720>/Switch1' incorporates:
         *  Constant: '<S720>/ConstantValue1'
         */
        rtb_Switch1_ln = 0.0F;
    }
    else
    {
        /* Switch: '<S720>/Switch1' incorporates:
         *  Constant: '<S717>/Calib'
         *  Constant: '<S718>/Calib'
         *  MinMax: '<S720>/Minimum'
         *  Sum: '<S720>/Summation'
         *  UnitDelay: '<S720>/UnitDelay'
         */
        rtb_Switch1_ln = fminf(KeBTRR_t_Msg7delay, KeBTRR_t_Msg7delay_dT +
                               BTRR_ac_DW.UnitDelay_DSTATE_o);
    }

    /* End of Switch: '<S720>/Switch1' */

    /* Logic: '<S720>/AND' incorporates:
     *  Constant: '<S717>/Calib'
     *  RelationalOperator: '<S720>/GreaterThan'
     */
    VeBTRR_b_Msg7Request_BD = (rtb_LogicalOperator_kx && (rtb_Switch1_ln >=
        KeBTRR_t_Msg7delay));

    /* Update for UnitDelay: '<S720>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch1_ln;

    /* End of Outputs for SubSystem: '<S671>/TurnOnDelayTime1' */

    /* Switch: '<S158>/Switch' incorporates:
     *  Constant: '<S668>/Calib'
     */
    if (KeBTRR_b_Charg_PlgdIn_Sel)
    {
        /* Switch: '<S158>/Switch' */
        VeBTRR_b_PlugdIn_Or_Chrg_BD = VeBTRR_b_isCharging_B4D;
    }
    else
    {
        /* Switch: '<S158>/Switch' */
        VeBTRR_b_PlugdIn_Or_Chrg_BD = VeBTRR_b_VhclPlgdIn_B4D;
    }

    /* End of Switch: '<S158>/Switch' */

    /* Lookup_n-D: '<S741>/Vector' incorporates:
     *  UnitDelay: '<S145>/UnitDelay2'
     */
    VeBTRR_dV_ClntTmp_PmpFlow = look1_iflf_binlcapw
        (TmpSignalConversionAtTmpVM_Fc_c, ((const float32 *)
          &(KxBTRR_dV_LT_ClntTmpIn_ActPmpFlw[0])), ((const float32 *)
          &(KtBTRR_dV_LT_ClntTmpIn_ActPmpFlw[0])), 6U);

    /* Switch: '<S727>/Switch2' incorporates:
     *  Constant: '<S553>/Calib'
     *  Constant: '<S730>/Constant'
     *  Constant: '<S731>/Constant'
     *  Constant: '<S732>/Constant'
     *  Constant: '<S733>/Constant'
     *  Constant: '<S735>/Calib'
     *  Constant: '<S736>/Calib'
     *  Logic: '<S727>/Logical2'
     *  Logic: '<S727>/Logical3'
     *  Logic: '<S727>/Logical4'
     *  RelationalOperator: '<S727>/Comparison1'
     *  RelationalOperator: '<S727>/Comparison2'
     *  RelationalOperator: '<S727>/Comparison3'
     *  RelationalOperator: '<S727>/Comparison6'
     *  Switch: '<S727>/Switch'
     *  Switch: '<S727>/Switch3'
     *  Switch: '<S727>/Switch4'
     */
    if (((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_PassiveCooling) ||
            (((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_PassiveHeating)) ||
            (((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_BTLActvWasteHeatRcvry))
    {
        /* Switch: '<S727>/Switch1' incorporates:
         *  Constant: '<S734>/Calib'
         *  Logic: '<S727>/Logical1'
         *  MinMax: '<S727>/MinMax'
         */
        if ((KeBTRR_b_EnblCellOverTempToFlow) ||
                (BTRR_ac_B.TmpSignalConversionAtTmpVM_F_b3))
        {
            TmpSignalConversionAtTmpVM_F_j3 = fmaxf
                (VeBTRR_dT_CellOverTempPassive_BD,
                 VeBTRR_dT_CellUnderTempPassive_BD);
        }
        else
        {
            TmpSignalConversionAtTmpVM_F_j3 =
                BTRR_ac_B.TmpSignalConversionAtTmpVM__bgo;
        }

        /* End of Switch: '<S727>/Switch1' */

        /* Switch: '<S727>/Switch2' incorporates:
         *  Lookup_n-D: '<S739>/Vector'
         */
        VeBTRR_dV_LT_ActPmpFlw_Raw = look1_iflf_binlcapw
            (TmpSignalConversionAtTmpVM_F_j3, ((const float32 *)
              &(KxBTRR_dV_LT_ActPmpFlw_Passive[0])), ((const float32 *)
              &(KtBTRR_dV_LT_ActPmpFlw_Passive[0])), 6U);
    }
    else if ((VeBTRR_b_BattCoolReq_CPV_RA_BD) &&
             (KeBTRR_b_EnblPmpFlwNCoolPwr_Max_CPVRA))
    {
        /* Switch: '<S727>/Switch3' incorporates:
         *  Constant: '<S737>/Calib'
         *  Switch: '<S727>/Switch2'
         */
        VeBTRR_dV_LT_ActPmpFlw_Raw = KeBTRR_dV_LTAPMaxFlow_CPV_RA;
    }
    else if (KeBTRR_b_LTActvPmp_InptSelect)
    {
        /* Switch: '<S727>/Switch' incorporates:
         *  Switch: '<S727>/Switch2'
         *  Switch: '<S727>/Switch3'
         */
        VeBTRR_dV_LT_ActPmpFlw_Raw = VeBTRR_dV_ClntTmp_PmpFlow;
    }
    else if ((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_NoConditioning) &&
             (KeBTRR_b_EnblNoCondChk_PmpFlw))
    {
        /* Switch: '<S727>/Switch4' incorporates:
         *  Constant: '<S727>/ConstantValue4'
         *  Switch: '<S727>/Switch'
         *  Switch: '<S727>/Switch2'
         *  Switch: '<S727>/Switch3'
         */
        VeBTRR_dV_LT_ActPmpFlw_Raw = 0.0F;
    }
    else
    {
        /* Switch: '<S727>/Switch2' incorporates:
         *  Lookup_n-D: '<S738>/Vector'
         *  MinMax: '<S727>/MinMax2'
         *  Switch: '<S727>/Switch'
         *  Switch: '<S727>/Switch3'
         *  Switch: '<S727>/Switch4'
         */
        VeBTRR_dV_LT_ActPmpFlw_Raw = look1_iflf_binlcapw(fmaxf(fmaxf
            (VeBTRR_dT_CellUnderTemp_BD, VeBTRR_dT_CellOverTemp_BD),
            BTRR_ac_B.TmpSignalConversionAtTmpVM_F_gm), ((const float32 *)
            &(KxBTRR_dV_LT_ActPmpFlw[0])), ((const float32 *)
            &(KtBTRR_dV_LT_ActPmpFlw[0])), 6U);
    }

    /* Outputs for Atomic SubSystem: '<S728>/Hysteresis' */
    /* Switch: '<S743>/Switch1' incorporates:
     *  Constant: '<S746>/Calib'
     *  RelationalOperator: '<S743>/GreaterThan'
     *  Sum: '<S728>/Sum'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > (VeBTRR_T_APMTemp1 +
            KeBTRR_T_APMTmp1Ofst_RecircRSP))
    {
        /* Switch: '<S743>/Switch1' incorporates:
         *  Constant: '<S743>/ConstantValue'
         */
        rtb_LogicalOperator_kx = true;
    }
    else
    {
        /* Switch: '<S743>/Switch1' incorporates:
         *  Constant: '<S745>/Calib'
         *  RelationalOperator: '<S743>/GreaterThan1'
         *  Sum: '<S728>/Sum3'
         *  UnitDelay: '<S743>/UnitDelay'
         */
        rtb_LogicalOperator_kx = ((TmpSignalConversionAtTmpVM_F_m4 >=
            (VeBTRR_T_APMTemp1 - KeBTRR_T_APMTmp1Ofst_RecircLSP)) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_dp));
    }

    /* End of Switch: '<S743>/Switch1' */

    /* Update for UnitDelay: '<S743>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_dp = rtb_LogicalOperator_kx;

    /* End of Outputs for SubSystem: '<S728>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S728>/Hysteresis1' */
    /* Switch: '<S744>/Switch1' incorporates:
     *  Constant: '<S746>/Calib'
     *  RelationalOperator: '<S744>/GreaterThan'
     *  Sum: '<S728>/Sum1'
     */
    if (TmpSignalConversionAtTmpVM_F_m4 > (VeBTRR_T_APMTemp2 +
            KeBTRR_T_APMTmp1Ofst_RecircRSP))
    {
        /* Switch: '<S744>/Switch1' incorporates:
         *  Constant: '<S744>/ConstantValue'
         */
        rtb_VariantMerge_For_Variant_So = true;
    }
    else
    {
        /* Switch: '<S744>/Switch1' incorporates:
         *  Constant: '<S745>/Calib'
         *  RelationalOperator: '<S744>/GreaterThan1'
         *  Sum: '<S728>/Sum4'
         *  UnitDelay: '<S744>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_So = ((TmpSignalConversionAtTmpVM_F_m4 >=
            (VeBTRR_T_APMTemp2 - KeBTRR_T_APMTmp1Ofst_RecircLSP)) &&
            (BTRR_ac_DW.UnitDelay_DSTATE_j1));
    }

    /* End of Switch: '<S744>/Switch1' */

    /* Update for UnitDelay: '<S744>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_j1 = rtb_VariantMerge_For_Variant_So;

    /* End of Outputs for SubSystem: '<S728>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S162>/Hysteresis1' */
    /* Switch: '<S776>/Switch1' incorporates:
     *  Constant: '<S780>/Calib'
     *  RelationalOperator: '<S776>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_Fc_a > KeBTRR_T_BattCellTemp_DeltaMax_HysHi)
    {
        /* Switch: '<S776>/Switch1' incorporates:
         *  Constant: '<S776>/ConstantValue'
         */
        rtb_Switch1_bl = true;
    }
    else
    {
        /* Switch: '<S776>/Switch1' incorporates:
         *  Constant: '<S781>/Calib'
         *  RelationalOperator: '<S776>/GreaterThan1'
         *  UnitDelay: '<S776>/UnitDelay'
         */
        rtb_Switch1_bl = ((TmpSignalConversionAtTmpVM_Fc_a >=
                           KeBTRR_T_BattCellTemp_DeltaMax_HysLo) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_pm));
    }

    /* End of Switch: '<S776>/Switch1' */

    /* Update for UnitDelay: '<S776>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_pm = rtb_Switch1_bl;

    /* End of Outputs for SubSystem: '<S162>/Hysteresis1' */

    /* Logic: '<S162>/Logical4' incorporates:
     *  Constant: '<S786>/Calib'
     */
    VeBTRR_b_BattCellBalancing_B4D = (rtb_Switch1_bl &&
        (KeBTRR_b_LTAP_Req_CellBalancing));

    /* Outputs for Atomic SubSystem: '<S162>/Hysteresis2' */
    /* Switch: '<S777>/Switch1' incorporates:
     *  Constant: '<S778>/Calib'
     *  RelationalOperator: '<S777>/GreaterThan'
     */
    if (TmpSignalConversionAtTmpVM_Fc_c > KeBTRR_T_BatClntTmp_MaxAllwdHi)
    {
        /* Switch: '<S777>/Switch1' incorporates:
         *  Constant: '<S777>/ConstantValue'
         */
        rtb_Switch1_pz = true;
    }
    else
    {
        /* Switch: '<S777>/Switch1' incorporates:
         *  Constant: '<S779>/Calib'
         *  RelationalOperator: '<S777>/GreaterThan1'
         *  UnitDelay: '<S777>/UnitDelay'
         */
        rtb_Switch1_pz = ((TmpSignalConversionAtTmpVM_Fc_c >=
                           KeBTRR_T_BatClntTmp_MaxAllwdLo) &&
                          (BTRR_ac_DW.UnitDelay_DSTATE_c4));
    }

    /* End of Switch: '<S777>/Switch1' */

    /* Update for UnitDelay: '<S777>/UnitDelay' */
    BTRR_ac_DW.UnitDelay_DSTATE_c4 = rtb_Switch1_pz;

    /* End of Outputs for SubSystem: '<S162>/Hysteresis2' */

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S775>/Constant'
     *  Constant: '<S787>/Calib'
     *  Constant: '<S788>/Calib'
     *  RelationalOperator: '<S162>/Comparison3'
     */
    if (KeBTRR_b_LT_ActvPmpRq_BatThrmState_Enb)
    {
        rtb_UnitDelay_do = (((uint32)VeBTRR_b_LTAPOn_BEV_tmp) !=
                            CeTHMR_e_NoConditioning);
    }
    else
    {
        rtb_UnitDelay_do = KeBTRR_b_LT_ActvPmpRq_Disable;
    }

    /* Logic: '<S162>/Logical2' incorporates:
     *  Constant: '<S782>/Calib'
     *  Constant: '<S783>/Calib'
     *  Constant: '<S784>/Calib'
     *  Constant: '<S785>/Calib'
     *  Logic: '<S162>/Logical10'
     *  Logic: '<S162>/Logical11'
     *  Logic: '<S162>/Logical12'
     *  Logic: '<S162>/Logical6'
     *  Logic: '<S162>/Logical9'
     */
    VeBTRR_b_LT_ActvPmpReq = ((((((((VeBTRR_b_BattHeatReq_BD) ||
        (VeBTRR_b_BattCoolReq_BD)) || ((VeBTRR_b_Psv_BattHeatReq_BD) &&
        (KeBTRR_b_EnblBattPsv_HeatReq))) || ((VeBTRR_b_Psv_BattCoolReq_BD) &&
        (KeBTRR_b_EnblBattPsv_CoolReq))) && (KeBTRR_b_EnblHeatOrCool_PmpReq)) ||
        (VeBTRR_b_BattCellBalancing_B4D)) || (rtb_Switch1_pz &&
        (KeBTRR_b_EnblClntTmp_PmpReq))) || rtb_UnitDelay_do);

    /* Switch: '<S766>/Switch1' incorporates:
     *  Constant: '<S749>/Constant'
     *  Constant: '<S750>/Constant'
     *  Constant: '<S756>/Constant'
     *  Constant: '<S757>/Constant'
     *  Logic: '<S729>/Logical1'
     *  Logic: '<S729>/Logical4'
     *  Logic: '<S729>/Logical6'
     *  RelationalOperator: '<S729>/Comparison2'
     *  RelationalOperator: '<S729>/Comparison6'
     *  RelationalOperator: '<S729>/Comparison8'
     *  RelationalOperator: '<S729>/Comparison9'
     *  Switch: '<S728>/Switch'
     *  Switch: '<S761>/Switch1'
     *  Switch: '<S763>/Switch1'
     *  Switch: '<S764>/Switch1'
     */
    if ((((uint32)tmp_0) == CePDTR_e_Dischrg_ForcBatHeat_Hys) || (((uint32)tmp_0)
         == CePDTR_e_Dischrg_ForcBatCool_Hys))
    {
        /* Switch: '<S766>/Switch1' incorporates:
         *  Constant: '<S770>/Calib'
         */
        VeBTRR_dV_LT_ActPmpFlw_raw_B4 = KeBTRR_dV_LT_ActPmpFlw_BatClg_OV_Dial;
    }
    else if (VeBTRR_b_LTAP_Rqt_LoLvDiag_AD)
    {
        /* Switch: '<S766>/Switch1' incorporates:
         *  Constant: '<S769>/Calib'
         *  Switch: '<S764>/Switch1'
         */
        VeBTRR_dV_LT_ActPmpFlw_raw_B4 = KeBTRR_dV_LTAP_Rqt_LoLv_Diag_Dial;
    }
    else if (((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_EmergencyCooling)
    {
        /* Switch: '<S766>/Switch1' incorporates:
         *  Constant: '<S768>/Calib'
         *  Switch: '<S761>/Switch1'
         *  Switch: '<S764>/Switch1'
         */
        VeBTRR_dV_LT_ActPmpFlw_raw_B4 = KeBTRR_dV_LTAP_Rqt_BattEmgncyCool;
    }
    else if (((VeBTRR_b_LT_ActvPmpReq) && (!VeBTRR_b_PerWup_BatToCond_BD)) &&
             (((uint32)VeBTRR_b_LTAPOn_BEV_tmp) != CeTHMR_e_Balancing))
    {
        /* Switch: '<S766>/Switch1' incorporates:
         *  Switch: '<S761>/Switch1'
         *  Switch: '<S763>/Switch1'
         *  Switch: '<S764>/Switch1'
         */
        VeBTRR_dV_LT_ActPmpFlw_raw_B4 = VeBTRR_dV_LT_ActPmpFlw_Raw;
    }
    else
    {
        if (TmpSignalConversionAtTmpVM_F_ib)
        {
            /* Switch: '<S728>/Switch' incorporates:
             *  Constant: '<S728>/TRUEConstant'
             *  Switch: '<S761>/Switch1'
             *  Switch: '<S763>/Switch1'
             *  Switch: '<S764>/Switch1'
             */
            rtb_LogicalOperator_kx = true;
        }
        else
        {
            /* Switch: '<S728>/Switch' incorporates:
             *  Constant: '<S748>/Calib'
             *  Logic: '<S728>/Logical1'
             *  Logic: '<S728>/Logical4'
             *  Switch: '<S761>/Switch1'
             *  Switch: '<S763>/Switch1'
             *  Switch: '<S764>/Switch1'
             */
            rtb_LogicalOperator_kx = (((!rtb_LogicalOperator_kx) &&
                (!rtb_VariantMerge_For_Variant_So)) &&
                (KeBTRR_b_EnblPSAChk_Recirc));
        }

        /* Switch: '<S762>/Switch1' incorporates:
         *  Constant: '<S742>/Constant'
         *  Constant: '<S747>/Calib'
         *  Constant: '<S758>/Constant'
         *  Constant: '<S759>/Constant'
         *  Constant: '<S760>/Constant'
         *  Logic: '<S728>/Logical3'
         *  Logic: '<S728>/Logical7'
         *  Logic: '<S729>/Logical5'
         *  Logic: '<S729>/Logical7'
         *  Logic: '<S729>/Logical8'
         *  RelationalOperator: '<S728>/Comparison7'
         *  RelationalOperator: '<S729>/Comparison1'
         *  RelationalOperator: '<S729>/Comparison10'
         *  RelationalOperator: '<S729>/Comparison11'
         *  Switch: '<S761>/Switch1'
         *  Switch: '<S763>/Switch1'
         *  Switch: '<S764>/Switch1'
         *  Switch: '<S765>/Switch1'
         *  Switch: '<S767>/Switch1'
         */
        if (((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_Balancing) &&
                (rtb_LogicalOperator_kx || (KeBTRR_b_DsblPSAChk_Recirc))) &&
                (((uint32)rtb_Switch1_mmr_tmp) != CeAVTR_e_EVA_Balancing))
        {
            /* Switch: '<S766>/Switch1' incorporates:
             *  Lookup_n-D: '<S773>/Vector'
             *  Merge: '<Root>/CellTempDelta_IRV_Merge'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
             *  Switch: '<S762>/Switch1'
             */
            VeBTRR_dV_LT_ActPmpFlw_raw_B4 = look1_iflf_binlcapw
                (Rte_IrvRead_BTRR_MedTEH_CellTempDelta_write_IRV(), ((const
                   float32 *)&(KxBTRR_dV_LT_ActPmpFlw_BalcingOnly[0])), ((const
                   float32 *)&(KtBTRR_dV_LT_ActPmpFlw_BalcingOnly[0])), 6U);
        }
        else if ((VeBTRR_b_PerWup_BatToCond_BD) && (VeBTRR_b_LT_ActvPmpReq))
        {
            /* Switch: '<S765>/Switch1' incorporates:
             *  Lookup_n-D: '<S774>/Vector'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTRR_MedTEHInport146'
             *  Switch: '<S762>/Switch1'
             *  Switch: '<S766>/Switch1'
             */
            VeBTRR_dV_LT_ActPmpFlw_raw_B4 = look1_iflf_binlcapw
                (BTRR_ac_B.TmpSignalConversionAtTmpVM_F_g3, ((const float32 *)
                  &(KxBTRR_dV_LT_ActPmpFlw_PerWp[0])), ((const float32 *)
                  &(KtBTRR_dV_LT_ActPmpFlw_PerWp[0])), 6U);
        }
        else if ((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_Balancing) &&
                 (((uint32)rtb_Switch1_mmr_tmp) == CeAVTR_e_EVA_Balancing))
        {
            /* Switch: '<S767>/Switch1' incorporates:
             *  Constant: '<S771>/Calib'
             *  Switch: '<S762>/Switch1'
             *  Switch: '<S765>/Switch1'
             *  Switch: '<S766>/Switch1'
             */
            VeBTRR_dV_LT_ActPmpFlw_raw_B4 = KeBTRR_dV_LT_ActPmpFlw_EVA_Balancing;
        }
        else
        {
            /* Switch: '<S766>/Switch1' incorporates:
             *  Constant: '<S729>/ConstantValue4'
             *  Switch: '<S762>/Switch1'
             *  Switch: '<S765>/Switch1'
             *  Switch: '<S767>/Switch1'
             */
            VeBTRR_dV_LT_ActPmpFlw_raw_B4 = 0.0F;
        }
    }

    /* Switch: '<S729>/Switch2' incorporates:
     *  Constant: '<S751>/Constant'
     *  Constant: '<S752>/Constant'
     *  Constant: '<S753>/Constant'
     *  Logic: '<S729>/Logical14'
     *  Logic: '<S729>/Logical9'
     *  RelationalOperator: '<S729>/Comparison12'
     *  RelationalOperator: '<S729>/Comparison3'
     *  RelationalOperator: '<S729>/Comparison7'
     *  Switch: '<S999>/Switch'
     */
    if ((((uint32)VeBTRR_b_LTAPOn_BEV_tmp) == CeTHMR_e_ActvPsvHeating) &&
            ((CeTHMR_e_CabinActiveHeating == ((uint32)
            VeBTRR_e_CabHeatThermalState)) || (((uint32)
            VeBTRR_e_CabHeatThermalState) == CeTHMR_e_CabinActivePassiveHeating)))
    {
        /* Switch: '<S729>/Switch2' incorporates:
         *  Lookup_n-D: '<S772>/Vector'
         *  Sum: '<S729>/Sum'
         */
        VeBTRR_dV_LT_ActPmpFlw_B4D = look1_iflf_binlcapw
            (BTRR_ac_B.TmpSignalConversionAtTmpVM__bgo -
             VeBTRR_T_LTCLTgt_BattActvPsvHeating_AD, ((const float32 *)
              &(KxBTRR_dV_LT_ActPmpFlw_ActvPassiveHeat[0])), ((const float32 *)
              &(KtBTRR_dV_LT_ActPmpFlw_ActvPassiveHeat[0])), 4U);
    }
    else
    {
        /* Switch: '<S729>/Switch2' */
        VeBTRR_dV_LT_ActPmpFlw_B4D = VeBTRR_dV_LT_ActPmpFlw_raw_B4;
    }

    /* End of Switch: '<S729>/Switch2' */

    /* Update for UnitDelay: '<S164>/UnitDelay' */
#if Rte_SysCon_Variant_BTRR_1

    BTRR_ac_DW.UnitDelay_DSTATE = rtb_Switch6;

#endif

    /* End of Update for UnitDelay: '<S164>/UnitDelay' */

    /* Update for UnitDelay: '<S145>/UnitDelay2' */
    BTRR_ac_DW.UnitDelay2_DSTATE = VeBTRR_T_Arb_BTISBTIS2_Max;

    /* Update for UnitDelay: '<S669>/UnitDelay' incorporates:
     *  Constant: '<S678>/Constant'
     *  RelationalOperator: '<S669>/Comparison4'
     *  RelationalOperator: '<S670>/Comparison10'
     *  Switch: '<S993>/Switch'
     */
    BTRR_ac_DW.UnitDelay_DSTATE_a = (((uint32)VeBTRR_e_SSDR_KeySts) !=
        CeSSDR_e_KeyOff);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Overrides_100ms'
     */
    /* Switch: '<S880>/Switch1' incorporates:
     *  Constant: '<S890>/Calib'
     */
    if (KeBTRR_b_BTISBTIS2Max_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_BTISBTIS2_Max' incorporates:
         *  Constant: '<S889>/Calib'
         *  SignalConversion generated from: '<S2>/BTISBTIS2_Max_AD'
         */
        (void)Rte_Write_VeBTRR_T_BTISBTIS2_Max_Value(KeBTRR_T_BTISBTIS2Max_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_BTISBTIS2_Max' incorporates:
         *  SignalConversion generated from: '<S2>/BTISBTIS2_Max_AD'
         */
        (void)Rte_Write_VeBTRR_T_BTISBTIS2_Max_Value
            (TmpSignalConversionAtTmpVM_Fc_c);
    }

    /* End of Switch: '<S880>/Switch1' */

    /* Switch: '<S813>/Switch1' incorporates:
     *  Constant: '<S832>/Calib'
     *  Constant: '<S833>/Calib'
     *  Switch: '<S570>/Switch6'
     */
    if (KeBTRR_b_BatCondPriority_SD)
    {
        tmp = KeBTRR_e_BatCondPriority_D;
    }
    else
    {
        tmp = VeBTRR_e_BatCondPriority_B4D;
    }

    /* Outport: '<Root>/VeBTRR_e_BatCondPriority' incorporates:
     *  SignalConversion generated from: '<S2>/BatCondPriority_AD'
     *  Switch: '<S813>/Switch1'
     */
    (void)Rte_Write_VeBTRR_e_BatCondPriority_Value(tmp);

    /* Switch: '<S804>/Switch1' incorporates:
     *  Constant: '<S807>/Calib'
     */
    if (KeBTRR_b_BatHeatPwr_NeedLimtd_SD)
    {
        /* Outport: '<Root>/VeBTRR_P_BatHeatPwr_NeedLimtd' incorporates:
         *  Constant: '<S806>/Calib'
         *  SignalConversion generated from: '<S2>/BatHeatPwr_NeedLimtd_AD'
         */
        (void)Rte_Write_VeBTRR_P_BatHeatPwr_NeedLimtd_Value
            (KeBTRR_P_BatHeatPwr_NeedLimtd_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_P_BatHeatPwr_NeedLimtd' incorporates:
         *  SignalConversion generated from: '<S2>/BatHeatPwr_NeedLimtd_AD'
         */
        (void)Rte_Write_VeBTRR_P_BatHeatPwr_NeedLimtd_Value
            (VeBTRR_P_BatHeatPwr_NeedLimtd_BD);
    }

    /* End of Switch: '<S804>/Switch1' */

    /* Switch: '<S811>/Switch1' incorporates:
     *  Constant: '<S828>/Calib'
     *  Constant: '<S829>/Calib'
     */
    if (KeBTRR_b_HV_BatTempCrit_CondState_New_SD)
    {
        VeBTRR_b_Batt_CritOrMarg_B4D_tm =
            KeBTRR_e_HV_BatTempCrit_CondState_New_D;
    }

    /* Outport: '<Root>/VeBTRR_e_HV_BatTempCrit_CondState_New' incorporates:
     *  SignalConversion generated from: '<S2>/BatTempCrit_CondState_New_AD'
     *  Switch: '<S811>/Switch1'
     */
    (void)Rte_Write_VeBTRR_e_HV_BatTempCrit_CondState_New_Value
        (VeBTRR_b_Batt_CritOrMarg_B4D_tm);

    /* Switch: '<S819>/Switch1' incorporates:
     *  Constant: '<S851>/Calib'
     */
    if (KeBTRR_b_BattCellBalancing_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattCellBalancing' incorporates:
         *  Constant: '<S850>/Calib'
         *  SignalConversion generated from: '<S2>/BattCellBalancing_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCellBalancing_Value
            (KeBTRR_b_BattCellBalancing_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattCellBalancing' incorporates:
         *  SignalConversion generated from: '<S2>/BattCellBalancing_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCellBalancing_Value
            (VeBTRR_b_BattCellBalancing_B4D);
    }

    /* End of Switch: '<S819>/Switch1' */

    /* Switch: '<S821>/Switch1' incorporates:
     *  Constant: '<S855>/Calib'
     */
    if (KeBTRR_b_BattCondPlugin_Rq_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattCondPlugin_Rq' incorporates:
         *  Constant: '<S854>/Calib'
         *  SignalConversion generated from: '<S2>/BattCondPlugin_Rq_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCondPlugin_Rq_Value
            (KeBTRR_b_BattCondPlugin_Rq_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattCondPlugin_Rq' incorporates:
         *  SignalConversion generated from: '<S2>/BattCondPlugin_Rq_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCondPlugin_Rq_Value
            (VeBTRR_b_BattCondPlugin_Rq_0);
    }

    /* End of Switch: '<S821>/Switch1' */

    /* Switch: '<S805>/Switch1' incorporates:
     *  Constant: '<S809>/Calib'
     */
    if (KeBTRR_b_BattCoolPwrNeedLim_SD)
    {
        /* Outport: '<Root>/VeBTRR_P_BattCoolPwrNeedLim' incorporates:
         *  Constant: '<S808>/Calib'
         *  SignalConversion generated from: '<S2>/BattCoolPwrNeedLim_AD'
         */
        (void)Rte_Write_VeBTRR_P_BattCoolPwrNeedLim_Value
            (KeBTRR_P_BattCoolPwrNeedLim_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_P_BattCoolPwrNeedLim' incorporates:
         *  SignalConversion generated from: '<S2>/BattCoolPwrNeedLim_AD'
         */
        (void)Rte_Write_VeBTRR_P_BattCoolPwrNeedLim_Value
            (VeBTRR_P_BattCoolPwrNeedLim_BD);
    }

    /* End of Switch: '<S805>/Switch1' */

    /* Switch: '<S818>/Switch3' incorporates:
     *  Constant: '<S846>/Calib'
     */
    if (KeBTRR_b_BattCoolReq_RA_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattCoolReq_CPV_RA' incorporates:
         *  Constant: '<S845>/Calib'
         *  SignalConversion generated from: '<S2>/BattCoolReq_RA_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCoolReq_CPV_RA_Value
            (KeBTRR_b_BattCoolReq_RA_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattCoolReq_CPV_RA' incorporates:
         *  SignalConversion generated from: '<S2>/BattCoolReq_RA_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCoolReq_CPV_RA_Value
            (VeBTRR_b_BattCoolReq_CPV_RA_BD);
    }

    /* End of Switch: '<S818>/Switch3' */

    /* Switch: '<S816>/Switch2' incorporates:
     *  Constant: '<S841>/Calib'
     */
    if (KeBTRR_b_BattHeatFlts_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattHeatingFlts' incorporates:
         *  Constant: '<S840>/Calib'
         *  SignalConversion generated from: '<S2>/BattHeatFlts_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattHeatingFlts_Value(KeBTRR_b_BattHeatFlts_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattHeatingFlts' incorporates:
         *  SignalConversion generated from: '<S2>/BattHeatFlts_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattHeatingFlts_Value(VeBTRR_b_BattHeatFlts);
    }

    /* End of Switch: '<S816>/Switch2' */

    /* Switch: '<S818>/Switch1' incorporates:
     *  Constant: '<S849>/Calib'
     */
    if (KeBTRR_b_BattHeatReq_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattHeatReq' incorporates:
         *  Constant: '<S848>/Calib'
         *  SignalConversion generated from: '<S2>/BattHeatReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattHeatReq_Value(KeBTRR_b_BattHeatReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattHeatReq' incorporates:
         *  SignalConversion generated from: '<S2>/BattHeatReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattHeatReq_Value(VeBTRR_b_BattHeatReq_BD);
    }

    /* End of Switch: '<S818>/Switch1' */

    /* Switch: '<S814>/Switch1' incorporates:
     *  Constant: '<S835>/Calib'
     */
    if (KeBTRR_b_BattTempNot_Optml_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattTempNot_Optml' incorporates:
         *  Constant: '<S834>/Calib'
         *  SignalConversion generated from: '<S2>/BattTempNot_Optml_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattTempNot_Optml_Value
            (KeBTRR_b_BattTempNot_Optml_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattTempNot_Optml' incorporates:
         *  SignalConversion generated from: '<S2>/BattTempNot_Optml_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattTempNot_Optml_Value
            (VeBTRR_b_BattTempNot_Optml_B4D);
    }

    /* End of Switch: '<S814>/Switch1' */

    /* Switch: '<S812>/Switch1' incorporates:
     *  Constant: '<S831>/Calib'
     */
    if (KeBTRR_b_Batt_CritOrMarg_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_Batt_CritOrMarg' incorporates:
         *  Constant: '<S830>/Calib'
         *  SignalConversion generated from: '<S2>/Batt_CritOrMarg_AD'
         */
        (void)Rte_Write_VeBTRR_b_Batt_CritOrMarg_Value
            (KeBTRR_b_Batt_CritOrMarg_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_Batt_CritOrMarg' incorporates:
         *  SignalConversion generated from: '<S2>/Batt_CritOrMarg_AD'
         */
        (void)Rte_Write_VeBTRR_b_Batt_CritOrMarg_Value
            (VeBTRR_b_Batt_CritOrMarg_B4D);
    }

    /* End of Switch: '<S812>/Switch1' */

    /* Switch: '<S879>/Switch1' incorporates:
     *  Constant: '<S887>/Calib'
     */
    if (KeBTRR_b_CellOverTempPsv_SD)
    {
        /* Outport: '<Root>/VeBTRR_dT_CellOverTempPsv' incorporates:
         *  Constant: '<S888>/Calib'
         *  SignalConversion generated from: '<S2>/CellOverTempPsv_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellOverTempPsv_Value
            (KeBTRR_dT_CellOverTempPsv_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_dT_CellOverTempPsv' incorporates:
         *  SignalConversion generated from: '<S2>/CellOverTempPsv_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellOverTempPsv_Value
            (VeBTRR_dT_CellOverTempPassive_BD);
    }

    /* End of Switch: '<S879>/Switch1' */

    /* Switch: '<S877>/Switch1' incorporates:
     *  Constant: '<S883>/Calib'
     */
    if (KeBTRR_b_CellOverTemp_SD)
    {
        /* Outport: '<Root>/VeBTRR_dT_CellOverTemp' incorporates:
         *  Constant: '<S884>/Calib'
         *  SignalConversion generated from: '<S2>/CellOverTemp_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellOverTemp_Value(KeBTRR_dT_CellOverTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_dT_CellOverTemp' incorporates:
         *  SignalConversion generated from: '<S2>/CellOverTemp_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellOverTemp_Value(VeBTRR_dT_CellOverTemp_BD);
    }

    /* End of Switch: '<S877>/Switch1' */

    /* Switch: '<S876>/Switch1' incorporates:
     *  Constant: '<S881>/Calib'
     */
    if (KeBTRR_b_CellUnderTemp_SD)
    {
        /* Outport: '<Root>/VeBTRR_dT_CellUnderTemp' incorporates:
         *  Constant: '<S882>/Calib'
         *  SignalConversion generated from: '<S2>/CellUnderTemp_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellUnderTemp_Value(KeBTRR_dT_CellUnderTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_dT_CellUnderTemp' incorporates:
         *  SignalConversion generated from: '<S2>/CellUnderTemp_AD'
         */
        (void)Rte_Write_VeBTRR_dT_CellUnderTemp_Value(VeBTRR_dT_CellUnderTemp_BD);
    }

    /* End of Switch: '<S876>/Switch1' */

    /* Switch: '<S818>/Switch2' incorporates:
     *  Constant: '<S847>/Calib'
     */
    if (KeBTRR_b_BattCoolReq_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattCoolReq' incorporates:
         *  Constant: '<S844>/Calib'
         *  SignalConversion generated from: '<S2>/CoolReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCoolReq_Value(KeBTRR_b_BattCoolReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattCoolReq' incorporates:
         *  SignalConversion generated from: '<S2>/CoolReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_BattCoolReq_Value(VeBTRR_b_BattCoolReq_BD);
    }

    /* End of Switch: '<S818>/Switch2' */

    /* Switch: '<S810>/Switch1' incorporates:
     *  Constant: '<S827>/Calib'
     */
    if (KeBTRR_b_HV_BatTempCrit_Cond_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_HV_BatTempCrit_Cond' incorporates:
         *  Constant: '<S826>/Calib'
         *  SignalConversion generated from: '<S2>/HV_BatTempCrit_Cond_AD'
         */
        (void)Rte_Write_VeBTRR_b_HV_BatTempCrit_Cond_Value
            (KeBTRR_b_HV_BatTempCrit_Cond_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_HV_BatTempCrit_Cond' incorporates:
         *  SignalConversion generated from: '<S2>/HV_BatTempCrit_Cond_AD'
         */
        (void)Rte_Write_VeBTRR_b_HV_BatTempCrit_Cond_Value
            (VeBTRR_b_BatTmpCrit_CondB4D_New);
    }

    /* End of Switch: '<S810>/Switch1' */

    /* Switch: '<S824>/Switch1' incorporates:
     *  Constant: '<S862>/Calib'
     *  Constant: '<S863>/Calib'
     */
    if (KeBTRR_b_HV_BatTmpRng_SD)
    {
        VeBTRR_b_BatCritCond_ToState_tm = KeBTRR_e_HV_BatTmpRng_D;
    }

    /* Outport: '<Root>/VeBTRR_e_HV_BatTmpRng' incorporates:
     *  SignalConversion generated from: '<S2>/HV_BatTmpRng_AD'
     *  Switch: '<S824>/Switch1'
     */
    (void)Rte_Write_VeBTRR_e_HV_BatTmpRng_Value(VeBTRR_b_BatCritCond_ToState_tm);

    /* Switch: '<S897>/Switch1' incorporates:
     *  Constant: '<S899>/Calib'
     */
    if (KeBTRR_b_LT_ActPmpFlw_SD)
    {
        /* Outport: '<Root>/VeBTRR_dV_LT_ActPmpFlw' incorporates:
         *  Constant: '<S900>/Calib'
         *  SignalConversion generated from: '<S2>/LT_ActPmpFlw_AD'
         */
        (void)Rte_Write_VeBTRR_dV_LT_ActPmpFlw_Value(KeBTRR_dV_LT_ActPmpFlw_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_dV_LT_ActPmpFlw' incorporates:
         *  SignalConversion generated from: '<S2>/LT_ActPmpFlw_AD'
         */
        (void)Rte_Write_VeBTRR_dV_LT_ActPmpFlw_Value(VeBTRR_dV_LT_ActPmpFlw_B4D);
    }

    /* End of Switch: '<S897>/Switch1' */

    /* Switch: '<S878>/Switch1' incorporates:
     *  Constant: '<S886>/Calib'
     */
    if (KeBTRR_b_OoR_Recoverable_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_OoR_Recoverable' incorporates:
         *  Constant: '<S885>/Calib'
         *  SignalConversion generated from: '<S2>/OoR_Recoverable_AD'
         */
        (void)Rte_Write_VeBTRR_b_OoR_Recoverable_Value
            (KeBTRR_b_OoR_Recoverable_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_OoR_Recoverable' incorporates:
         *  SignalConversion generated from: '<S2>/OoR_Recoverable_AD'
         */
        (void)Rte_Write_VeBTRR_b_OoR_Recoverable_Value(VeBTRR_b_BatOofR_Recover);
    }

    /* End of Switch: '<S878>/Switch1' */

    /* Switch: '<S898>/Switch1' incorporates:
     *  Constant: '<S902>/Calib'
     */
    if (KeBTRR_b_PerWup_BatToCond_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_PerWup_BatToCond' incorporates:
         *  Constant: '<S901>/Calib'
         *  SignalConversion generated from: '<S2>/PerWup_BatToCond_AD'
         */
        (void)Rte_Write_VeBTRR_b_PerWup_BatToCond_Value
            (KeBTRR_b_PerWup_BatToCond_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_PerWup_BatToCond' incorporates:
         *  SignalConversion generated from: '<S2>/PerWup_BatToCond_AD'
         */
        (void)Rte_Write_VeBTRR_b_PerWup_BatToCond_Value
            (VeBTRR_b_PerWup_BatToCond_BD);
    }

    /* End of Switch: '<S898>/Switch1' */

    /* Switch: '<S822>/Switch1' incorporates:
     *  Constant: '<S857>/Calib'
     */
    if (KeBTRR_b_PlugdIn_Or_Chrg_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_PlugdIn_Or_Chrg' incorporates:
         *  Constant: '<S856>/Calib'
         *  SignalConversion generated from: '<S2>/PlugdIn_Or_Chrg_AD'
         */
        (void)Rte_Write_VeBTRR_b_PlugdIn_Or_Chrg_Value
            (KeBTRR_b_PlugdIn_Or_Chrg_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_PlugdIn_Or_Chrg' incorporates:
         *  SignalConversion generated from: '<S2>/PlugdIn_Or_Chrg_AD'
         */
        (void)Rte_Write_VeBTRR_b_PlugdIn_Or_Chrg_Value
            (VeBTRR_b_PlugdIn_Or_Chrg_BD);
    }

    /* End of Switch: '<S822>/Switch1' */

    /* Switch: '<S823>/Switch2' incorporates:
     *  Constant: '<S861>/Calib'
     */
    if (KeBTRR_b_Batt_PsvCoolReq_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_Batt_PsvCoolReq' incorporates:
         *  Constant: '<S860>/Calib'
         *  SignalConversion generated from: '<S2>/PsvCoolReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_Batt_PsvCoolReq_Value
            (KeBTRR_b_Batt_PsvCoolReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_Batt_PsvCoolReq' incorporates:
         *  SignalConversion generated from: '<S2>/PsvCoolReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_Batt_PsvCoolReq_Value
            (VeBTRR_b_Psv_BattCoolReq_BD);
    }

    /* End of Switch: '<S823>/Switch2' */

    /* Switch: '<S823>/Switch1' incorporates:
     *  Constant: '<S859>/Calib'
     */
    if (KeBTRR_b_BattPsvHeatReq_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_Psv_BattHeatReq' incorporates:
         *  Constant: '<S858>/Calib'
         *  SignalConversion generated from: '<S2>/PsvHtReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_Psv_BattHeatReq_Value(KeBTRR_b_BattPsvHeatReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_Psv_BattHeatReq' incorporates:
         *  SignalConversion generated from: '<S2>/PsvHtReq_AD'
         */
        (void)Rte_Write_VeBTRR_b_Psv_BattHeatReq_Value
            (VeBTRR_b_Psv_BattHeatReq_BD);
    }

    /* End of Switch: '<S823>/Switch1' */

    /* Switch: '<S800>/Switch1' incorporates:
     *  Constant: '<S871>/Calib'
     */
    if (KeBTRR_b_BattTempDisp_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_BattDisplayTemp' incorporates:
         *  Constant: '<S866>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattDisplayTemp'
         */
        (void)Rte_Write_VeBTRR_T_BattDisplayTemp_Value(KeBTRR_T_BattTempDisp_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_BattDisplayTemp' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattDisplayTemp'
         */
        (void)Rte_Write_VeBTRR_T_BattDisplayTemp_Value
            (VeBTRR_T_BattDisplayTemp_BD);
    }

    /* End of Switch: '<S800>/Switch1' */

    /* Switch: '<S800>/Switch5' incorporates:
     *  Constant: '<S872>/Calib'
     */
    if (KeBTRR_b_BattTmpMaxCmfrt_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MaxCmfrtZone' incorporates:
         *  Constant: '<S867>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MaxCmfrtZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MaxCmfrtZone_Value
            (KeBTRR_T_BattTmpMaxCmfrt_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MaxCmfrtZone' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MaxCmfrtZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MaxCmfrtZone_Value
            (BTRR_ac_B.VariantMerge_For_Variant_Sour_a);
    }

    /* End of Switch: '<S800>/Switch5' */

    /* Switch: '<S800>/Switch2' incorporates:
     *  Constant: '<S873>/Calib'
     */
    if (KeBTRR_b_BattTmpMaxDerate_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MaxDerateZone' incorporates:
         *  Constant: '<S868>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MaxDerateZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MaxDerateZone_Value
            (KeBTRR_T_BattTmpMaxDerate_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MaxDerateZone' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MaxDerateZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MaxDerateZone_Value
            (BTRR_ac_B.VariantMerge_For_Variant_Source);
    }

    /* End of Switch: '<S800>/Switch2' */

    /* Switch: '<S800>/Switch4' incorporates:
     *  Constant: '<S874>/Calib'
     */
    if (KeBTRR_b_BattTmpMinCmfrt_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MinCmfrtZone' incorporates:
         *  Constant: '<S869>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MinCmfrtZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MinCmfrtZone_Value
            (KeBTRR_T_BattTmpMinCmfrt_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MinCmfrtZone' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MinCmfrtZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MinCmfrtZone_Value
            (BTRR_ac_B.VariantMerge_For_Variant_Sour_g);
    }

    /* End of Switch: '<S800>/Switch4' */

    /* Switch: '<S800>/Switch3' incorporates:
     *  Constant: '<S875>/Calib'
     */
    if (KeBTRR_b_BattTmpMinDerate_SD)
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MinDerateZone' incorporates:
         *  Constant: '<S870>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MinDerateZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MinDerateZone_Value
            (KeBTRR_T_BattTmpMinDerate_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_T_BattTmp_MinDerateZone' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_T_BattTmp_MinDerateZone'
         */
        (void)Rte_Write_VeBTRR_T_BattTmp_MinDerateZone_Value
            (BTRR_ac_B.VariantMerge_For_Variant_Sour_h);
    }

    /* End of Switch: '<S800>/Switch3' */

    /* Switch: '<S892>/Switch1' incorporates:
     *  Constant: '<S896>/Calib'
     */
    if (KeBTRR_b_BattCondFlt_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattCondFlt' incorporates:
         *  Constant: '<S895>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_b_BattCondFlt'
         */
        (void)Rte_Write_VeBTRR_b_BattCondFlt_Value(KeBTRR_b_BattCondFlt_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattCondFlt' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_b_BattCondFlt'
         */
        (void)Rte_Write_VeBTRR_b_BattCondFlt_Value(VeBTRR_b_BattCondFlts);
    }

    /* End of Switch: '<S892>/Switch1' */

    /* Switch: '<S816>/Switch1' incorporates:
     *  Constant: '<S839>/Calib'
     */
    if (KeBTRR_b_BattCoolFlts_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_BattCoolFlts' incorporates:
         *  Constant: '<S838>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_b_BattCoolFlts'
         */
        (void)Rte_Write_VeBTRR_b_BattCoolFlts_Value(KeBTRR_b_BattCoolFlts_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_BattCoolFlts' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_b_BattCoolFlts'
         */
        (void)Rte_Write_VeBTRR_b_BattCoolFlts_Value(VeBTRR_b_BattCool_Flts);
    }

    /* End of Switch: '<S816>/Switch1' */

    /* Switch: '<S825>/Switch1' incorporates:
     *  Constant: '<S865>/Calib'
     */
    if (KeBTRR_b_BattPriority_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_HVBattPriority' incorporates:
         *  Constant: '<S864>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_b_HVBattPriority'
         */
        (void)Rte_Write_VeBTRR_b_HVBattPriority_Value(KeBTRR_b_BattPriority_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_HVBattPriority' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_b_HVBattPriority'
         */
        (void)Rte_Write_VeBTRR_b_HVBattPriority_Value(VeBTRR_T_BattCabPriority);
    }

    /* End of Switch: '<S825>/Switch1' */

    /* Switch: '<S817>/Switch' incorporates:
     *  Constant: '<S843>/Calib'
     */
    if (KeBTRR_b_KeyRun_OV_BattCrit_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_KeyRun_OV_BattCrit' incorporates:
         *  Constant: '<S842>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_b_KeyRun_OV_BattCrit'
         */
        (void)Rte_Write_VeBTRR_b_KeyRun_OV_BattCrit_Value
            (KeBTRR_b_KeyRun_OV_BattCrit_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_KeyRun_OV_BattCrit' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_b_KeyRun_OV_BattCrit'
         */
        (void)Rte_Write_VeBTRR_b_KeyRun_OV_BattCrit_Value
            (VeBTRR_b_Msg7Request_BD);
    }

    /* End of Switch: '<S817>/Switch' */

    /* Switch: '<S891>/Switch1' incorporates:
     *  Constant: '<S894>/Calib'
     */
    if (KeBTRR_b_BattCoolFlt_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_ThrmlBatCoolingFlt' incorporates:
         *  Constant: '<S893>/Calib'
         *  SignalConversion generated from: '<S2>/VeBTRR_b_ThrmlBatCoolingFlt'
         */
        (void)Rte_Write_VeBTRR_b_ThrmlBatCoolingFlt_Value(KeBTRR_b_BattCoolFlt_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_ThrmlBatCoolingFlt' incorporates:
         *  SignalConversion generated from: '<S2>/VeBTRR_b_ThrmlBatCoolingFlt'
         */
        (void)Rte_Write_VeBTRR_b_ThrmlBatCoolingFlt_Value
            (VeBTRR_b_BattCoolingFlt);
    }

    /* End of Switch: '<S891>/Switch1' */

    /* Switch: '<S815>/Switch1' incorporates:
     *  Constant: '<S837>/Calib'
     */
    if (KeBTRR_b_VhclPlgdIn_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_VhclPlgdIn' incorporates:
         *  Constant: '<S836>/Calib'
         *  SignalConversion generated from: '<S2>/VhclPlgdIn_AD'
         */
        (void)Rte_Write_VeBTRR_b_VhclPlgdIn_Value(KeBTRR_b_VhclPlgdIn_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_VhclPlgdIn' incorporates:
         *  SignalConversion generated from: '<S2>/VhclPlgdIn_AD'
         */
        (void)Rte_Write_VeBTRR_b_VhclPlgdIn_Value(VeBTRR_b_VhclPlgdIn_B4D);
    }

    /* End of Switch: '<S815>/Switch1' */

    /* Switch: '<S820>/Switch1' incorporates:
     *  Constant: '<S853>/Calib'
     */
    if (KeBTRR_b_isCharging_SD)
    {
        /* Outport: '<Root>/VeBTRR_b_isCharging' incorporates:
         *  Constant: '<S852>/Calib'
         *  SignalConversion generated from: '<S2>/isCharging_AD'
         */
        (void)Rte_Write_VeBTRR_b_isCharging_Value(KeBTRR_b_isCharging_D);
    }
    else
    {
        /* Outport: '<Root>/VeBTRR_b_isCharging' incorporates:
         *  SignalConversion generated from: '<S2>/isCharging_AD'
         */
        (void)Rte_Write_VeBTRR_b_isCharging_Value(VeBTRR_b_isCharging_B4D);
    }

    /* End of Switch: '<S820>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/BTRR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, BTRR_CODE) BTRR_PwrOn(void)
{

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForBatTmpCold_;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForBatTmpCol_k;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForBatTmpHys_C;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForBatTmpHys_i;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForCellTempDel;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForCellTempD_l;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_OutportBufferForCellTemp_ae;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForCellTempMax;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_OutportBufferForCellTempM_a;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForCellTempMin;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_OutportBufferForHVBR_Ovrd_R;

#endif

#if Rte_SysCon_Variant_BTRR_2

    float32 rtb_OutportBufferForHV_BatClntT;

#endif

#if Rte_SysCon_Variant_BTRR_2

    boolean rtb_OutportBufferForPropSysActv;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BTRR_PwrOn'
     */
#if Rte_SysCon_Variant_BTRR_2 || Rte_SysCon_Variant_BTRR_5

    /* S-Function (fcgen): '<S3>/FcnCallGen' */
#if Rte_SysCon_Variant_BTRR_5

    /* Outputs for Function Call SubSystem: '<S3>/BTRO_NF' */
    /* SignalConversion generated from: '<S1037>/CellTempMaxUsed_NF' incorporates:
     *  Constant: '<S1048>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMaxUs_e = KeBTRR_T_CellTempMaxUsed_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellTempMinUsed_NF' incorporates:
     *  Constant: '<S1049>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMinUs_o = KeBTRR_T_CellTempMinUsed_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellTempDelta_NF' incorporates:
     *  Constant: '<S1079>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempDelta_N = KeBTRR_dT_CellTempDelta_NF_Dial;

    /* SignalConversion generated from: '<S1037>/HVBR_OvrdReq_NF' incorporates:
     *  Constant: '<S1067>/Calib'
     */
    BTRR_ac_B.OutportBufferForHVBR_OvrdReq_NF = KeBTRR_b_HVBR_OvrdReq_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellTempAvgUsed_NF' incorporates:
     *  Constant: '<S1047>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempAvgUsed = KeBTRR_T_CellAvgUsed_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellOverTemp_NF' incorporates:
     *  Constant: '<S1078>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellOverTemp_NF = KeBTRR_dT_CellOverTemp_NF_Dial;

    /* SignalConversion generated from: '<S1037>/LT_ActPmpFlw_NF' incorporates:
     *  Constant: '<S1081>/Calib'
     */
    BTRR_ac_B.OutportBufferForLT_ActPmpFlw_NF = KeBTRR_dV_LT_ActPmpFlw_NF_Dial;

    /* SignalConversion generated from: '<S1037>/PerWup_BatToCond_NF' incorporates:
     *  Constant: '<S1072>/Calib'
     */
    BTRR_ac_B.OutportBufferForPerWup_BatToCon =
        KeBTRR_b_PerWup_BatToCond_NF_Dial;

    /* SignalConversion generated from: '<S1037>/HV_BatTempCrit_Cond_NF' incorporates:
     *  Constant: '<S1069>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatTempCrit_ =
        KeBTRR_b_HV_BatTempCrit_Cond_NF_Dial;

    /* SignalConversion generated from: '<S1037>/HV_BatTempCrit_CondState_New_NF' incorporates:
     *  Constant: '<S1083>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatTempCri_d =
        KeBTRR_e_HV_BatTempCrit_CondState_New_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattHeatReq_NF' incorporates:
     *  Constant: '<S1059>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattHeatReq_NF = KeBTRR_b_BattHeatReq_NF_Dial;

    /* SignalConversion generated from: '<S1037>/isCharging_NF' incorporates:
     *  Constant: '<S1076>/Calib'
     */
    BTRR_ac_B.OutportBufferForisCharging_NF = KeBTRR_b_isCharging_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattCondPlugin_Rq_NF' incorporates:
     *  Constant: '<S1054>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCondPlugin_ =
        KeBTRR_b_BattCondPlugin_Rq_NF_Dial;

    /* SignalConversion generated from: '<S1037>/PlugdIn_Or_Chrg_NF' incorporates:
     *  Constant: '<S1073>/Calib'
     */
    BTRR_ac_B.OutportBufferForPlugdIn_Or_Chrg = KeBTRR_b_PlugdIn_Or_Chrg_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattCellBalancing_NF' incorporates:
     *  Constant: '<S1052>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCellBalanci =
        KeBTRR_b_BattCellBalancing_NF_Dial;

    /* SignalConversion generated from: '<S1037>/HV_BatTmpRng_NF' incorporates:
     *  Constant: '<S1084>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatTmpRng_NF = KeBTRR_e_HV_BatTmpRng_NF_Dial;

    /* SignalConversion generated from: '<S1037>/Batt_CritOrMarg_NF' incorporates:
     *  Constant: '<S1062>/Calib'
     */
    BTRR_ac_B.OutportBufferForBatt_CritOrMarg = KeBTRR_b_Batt_CritOrMarg_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BatCondPriority_NF' incorporates:
     *  Constant: '<S1082>/Calib'
     */
    BTRR_ac_B.OutportBufferForBatCondPriority = KeBTRR_e_BatCondPriority_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattTempNot_Optml_NF' incorporates:
     *  Constant: '<S1061>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTempNot_Opt =
        KeBTRR_b_BattTempNot_Optml_NF_Dial;

    /* SignalConversion generated from: '<S1037>/VhclPlgdIn_NF' incorporates:
     *  Constant: '<S1075>/Calib'
     */
    BTRR_ac_B.OutportBufferForVhclPlgdIn_NF = KeBTRR_b_VhclPlgdIn_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BatHeatPwr_NeedLimtd_NF' incorporates:
     *  Constant: '<S1039>/Calib'
     */
    BTRR_ac_B.OutportBufferForBatHeatPwr_Need =
        KeBTRR_P_BatHeatPwr_NeedLimtd_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattCoolPwrNeedLim_NF' incorporates:
     *  Constant: '<S1040>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCoolPwrNeed =
        KeBTRR_P_BattCoolPwrNeedLim_NF_Dial;

    /* SignalConversion generated from: '<S1037>/OoR_Recoverable_NF' incorporates:
     *  Constant: '<S1071>/Calib'
     */
    BTRR_ac_B.OutportBufferForOoR_Recoverable = KeBTRR_b_OoR_Recoverable_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellOverTempPsv_NF' incorporates:
     *  Constant: '<S1077>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellOverTempPsv =
        KeBTRR_dT_CellOverTempPsv_NF_Dial;

    /* SignalConversion generated from: '<S1037>/ThrmlBatCoolingFlt_NF' incorporates:
     *  Constant: '<S1074>/Calib'
     */
    BTRR_ac_B.OutportBufferForThrmlBatCooling =
        KeBTRR_b_ThrmlBatCoolingFlt_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellTempMaxUsedFA_NF' incorporates:
     *  Constant: '<S1065>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMaxUs_g = KeBTRR_b_CellMaxUsedFA_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellTempMinUsedFA_NF' incorporates:
     *  Constant: '<S1066>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMinUs_b = KeBTRR_b_CellMinUsedFA_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellTempAvgUsedFA_NF' incorporates:
     *  Constant: '<S1064>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempAvgUs_i = KeBTRR_b_CellAvgUsedFA_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattCondFlt_NF' incorporates:
     *  Constant: '<S1053>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCondFlt_NF = KeBTRR_b_BattCondFlt_NF_Dial;

    /* SignalConversion generated from: '<S1037>/HVBattPriority_NF' incorporates:
     *  Constant: '<S1068>/Calib'
     */
    BTRR_ac_B.OutportBufferForHVBattPriority_ = KeBTRR_b_HVBattPriority_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattCoolFlts_NF' incorporates:
     *  Constant: '<S1055>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCoolFlts_NF = KeBTRR_b_BattCoolFlts_NF_Dial;

    /* SignalConversion generated from: '<S1037>/HV_BatModTempMax_NF' incorporates:
     *  Constant: '<S1050>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatModTempMa =
        KeBTRR_T_HV_BatModTempMax_NF_Dial;

    /* SignalConversion generated from: '<S1037>/HV_BatModTempMin_NF' incorporates:
     *  Constant: '<S1051>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatModTempMi =
        KeBTRR_T_HV_BatModTempMin_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BTISBTIS2_Max_NF' incorporates:
     *  Constant: '<S1041>/Calib'
     */
    BTRR_ac_B.OutportBufferForBTISBTIS2_Max_N = KeBTRR_T_BTISBTIS2Max_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattDisplayTemp_NF' incorporates:
     *  Constant: '<S1042>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattDisplayTemp =
        KeBTRR_T_BattHeating_MaxTemp_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattTmp_MaxDerateZone_NF' incorporates:
     *  Constant: '<S1044>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MaxDera =
        KeBTRR_T_BattHighTmp_Thrshld_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattTmp_MinDerateZone_NF' incorporates:
     *  Constant: '<S1045>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MinDera =
        KeBTRR_T_BattLowTmp_Thrshld_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattTmp_MinCmfrtZone_NF' incorporates:
     *  Constant: '<S1043>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MinCmfr =
        KeBTRR_T_BattHeating_Thrshld_NF_Dial;

    /* SignalConversion generated from: '<S1037>/BattTmp_MaxCmfrtZone_NF' incorporates:
     *  Constant: '<S1046>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MaxCmfr =
        KeBTRR_T_BattPwrDerate_TmpThrshld_NF_Dial;

    /* SignalConversion generated from: '<S1037>/VeBTRR_b_KeyRun_OV_BattCrit_NF' incorporates:
     *  Constant: '<S1070>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_KeyRun =
        KeBTRR_b_KeyRun_OV_BattCrit_NF_Dial;

    /* SignalConversion generated from: '<S1037>/VeBTRR_b_Psv_BattHeatReq_NF' incorporates:
     *  Constant: '<S1060>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_Psv_Ba = KeBTRR_b_BattPsvHeatReq_NF_Dial;

    /* SignalConversion generated from: '<S1037>/VeBTRR_b_BattCoolReq_NF' incorporates:
     *  Constant: '<S1057>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_BattCo = KeBTRR_b_BattCoolReq_NF_Dial;

    /* SignalConversion generated from: '<S1037>/VeBTRR_b_Batt_PsvCoolReq_NF' incorporates:
     *  Constant: '<S1063>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_Batt_P = KeBTRR_b_Batt_PsvCoolReq_NF_Dial;

    /* SignalConversion generated from: '<S1037>/VeBTRR_b_BattCoolReq_CPV_RA_NF' incorporates:
     *  Constant: '<S1056>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_Batt_n =
        KeBTRR_b_BattCoolReq_CPV_RA_NF_Dial;

    /* SignalConversion generated from: '<S1037>/VeBTRR_b_BattHeatingFlts_NF' incorporates:
     *  Constant: '<S1058>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_BattHe = KeBTRR_b_BattHeatFlts_NF_Dial;

    /* SignalConversion generated from: '<S1037>/CellUnderTemp_NF' incorporates:
     *  Constant: '<S1080>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellUnderTemp_N = KeBTRR_dT_CellUnderTemp_NF_Dial;

    /* End of Outputs for SubSystem: '<S3>/BTRO_NF' */
#endif

#if Rte_SysCon_Variant_BTRR_2

    /* Outputs for Function Call SubSystem: '<S3>/Sub_Out_Init' */
    /* SignalConversion generated from: '<S1038>/HV_BatClntTmp_In_AftDial_write' */
    BTRR_ac_B.OutportBufferForHV_BatClntTmp_I = 0.0F;

    /* SignalConversion generated from: '<S1038>/PropSysActv_BTRR_AftDial_write' */
    BTRR_ac_B.OutportBufferForPropSysActv_BTR = false;

    /* SignalConversion generated from: '<S1038>/CellTempMinUsed_write' */
    BTRR_ac_B.OutportBufferForCellTempMinUsed = 0.0F;

    /* SignalConversion generated from: '<S1038>/CellTempMaxUsed_write' */
    BTRR_ac_B.OutportBufferForCellTempMaxUsed = 0.0F;

    /* SignalConversion generated from: '<S1038>/CellTempDelta_write' */
    BTRR_ac_B.OutportBufferForCellTempDelta_w = 0.0F;

    /* SignalConversion generated from: '<S1038>/CellTempMaxFA_write' */
    BTRR_ac_B.OutportBufferForCellTempMaxFA_w = false;

    /* SignalConversion generated from: '<S1038>/CellTempMinFA_write' */
    BTRR_ac_B.OutportBufferForCellTempMinFA_w = false;

    /* SignalConversion generated from: '<S1038>/CellTempDelta_Raw_write' */
    BTRR_ac_B.OutportBufferForCellTempDelta_R = 0.0F;

    /* SignalConversion generated from: '<S1038>/BatTmpHys_ColdRgHgh_D_write' */
    BTRR_ac_B.OutportBufferForBatTmpHys_ColdR = 0.0F;

    /* SignalConversion generated from: '<S1038>/BatTmpHys_ColdRgLw_D_write' */
    BTRR_ac_B.OutportBufferForBatTmpHys_Col_l = 0.0F;

    /* SignalConversion generated from: '<S1038>/BatTmpCold_RgHgh_D_write' */
    BTRR_ac_B.OutportBufferForBatTmpCold_RgHg = 0.0F;

    /* SignalConversion generated from: '<S1038>/BatTmpCold_RgLw_D_write' */
    BTRR_ac_B.OutportBufferForBatTmpCold_RgLw = 0.0F;

    /* SignalConversion generated from: '<S1038>/HVBR_Ovrd_Req_write' */
    BTRR_ac_B.OutportBufferForHVBR_Ovrd_Req_w = false;

    /* End of Outputs for SubSystem: '<S3>/Sub_Out_Init' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S3>/BTISBTIS2_Max_NF' incorporates:
     *  SignalConversion generated from: '<S3>/BatCondPriority_NF'
     *  SignalConversion generated from: '<S3>/BatHeatPwr_NeedLimtd_NF'
     */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_T_BTISBTIS2_Max' */
    (void)Rte_Write_VeBTRR_T_BTISBTIS2_Max_Value
        (BTRR_ac_B.OutportBufferForBTISBTIS2_Max_N);

    /* Outport: '<Root>/VeBTRR_e_BatCondPriority' incorporates:
     *  SignalConversion generated from: '<S1037>/BatCondPriority_NF'
     */
    (void)Rte_Write_VeBTRR_e_BatCondPriority_Value
        (BTRR_ac_B.OutportBufferForBatCondPriority);

    /* Outport: '<Root>/VeBTRR_P_BatHeatPwr_NeedLimtd' */
    (void)Rte_Write_VeBTRR_P_BatHeatPwr_NeedLimtd_Value
        (BTRR_ac_B.OutportBufferForBatHeatPwr_Need);

#endif

    /* End of SignalConversion generated from: '<S3>/BTISBTIS2_Max_NF' */

    /* SignalConversion generated from: '<S3>/BatTmpCold_RgHgh_D_write' incorporates:
     *  SignalConversion generated from: '<S3>/BatTmpCold_RgLw_D_write'
     *  SignalConversion generated from: '<S3>/BatTmpHys_ColdRgHgh_D_write'
     *  SignalConversion generated from: '<S3>/BatTmpHys_ColdRgLw_D_write'
     */
#if Rte_SysCon_Variant_BTRR_2

    /* SignalConversion generated from: '<S3>/BatTmpCold_RgHgh_D_write' */
    rtb_OutportBufferForBatTmpCold_ = BTRR_ac_B.OutportBufferForBatTmpCold_RgHg;

    /* SignalConversion generated from: '<S3>/BatTmpCold_RgLw_D_write' */
    rtb_OutportBufferForBatTmpCol_k = BTRR_ac_B.OutportBufferForBatTmpCold_RgLw;

    /* SignalConversion generated from: '<S3>/BatTmpHys_ColdRgHgh_D_write' */
    rtb_OutportBufferForBatTmpHys_C = BTRR_ac_B.OutportBufferForBatTmpHys_ColdR;

    /* SignalConversion generated from: '<S3>/BatTmpHys_ColdRgLw_D_write' */
    rtb_OutportBufferForBatTmpHys_i = BTRR_ac_B.OutportBufferForBatTmpHys_Col_l;

#endif

    /* End of SignalConversion generated from: '<S3>/BatTmpCold_RgHgh_D_write' */

    /* SignalConversion generated from: '<S3>/BattCellBalancing_NF' incorporates:
     *  SignalConversion generated from: '<S3>/BattCondFlt_NF'
     *  SignalConversion generated from: '<S3>/BattCondPlugin_Rq_NF'
     *  SignalConversion generated from: '<S3>/BattCoolFlts_NF'
     *  SignalConversion generated from: '<S3>/BattCoolPwrNeedLim_NF'
     *  SignalConversion generated from: '<S3>/BattDisplayTemp_NF'
     *  SignalConversion generated from: '<S3>/BattHeatReq_NF'
     *  SignalConversion generated from: '<S3>/BattTempNot_Optml_NF'
     *  SignalConversion generated from: '<S3>/BattTmp_MaxCmfrtZone_NF'
     *  SignalConversion generated from: '<S3>/BattTmp_MaxDerateZone_NF'
     *  SignalConversion generated from: '<S3>/BattTmp_MinCmfrtZone_NF'
     *  SignalConversion generated from: '<S3>/BattTmp_MinDerateZone_NF'
     *  SignalConversion generated from: '<S3>/Batt_CritOrMarg_NF'
     *  SignalConversion generated from: '<S3>/CellOverTempPsv_NF'
     *  SignalConversion generated from: '<S3>/CellOverTemp_NF'
     *  SignalConversion generated from: '<S3>/CellTempAvgUsedFA_NF'
     *  SignalConversion generated from: '<S3>/CellTempAvgUsed_NF'
     *  SignalConversion generated from: '<S3>/CellTempDelta_NF'
     */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_b_BattCellBalancing' */
    (void)Rte_Write_VeBTRR_b_BattCellBalancing_Value
        (BTRR_ac_B.OutportBufferForBattCellBalanci);

    /* Outport: '<Root>/VeBTRR_b_BattCondFlt' */
    (void)Rte_Write_VeBTRR_b_BattCondFlt_Value
        (BTRR_ac_B.OutportBufferForBattCondFlt_NF);

    /* Outport: '<Root>/VeBTRR_b_BattCondPlugin_Rq' */
    (void)Rte_Write_VeBTRR_b_BattCondPlugin_Rq_Value
        (BTRR_ac_B.OutportBufferForBattCondPlugin_);

    /* Outport: '<Root>/VeBTRR_b_BattCoolFlts' */
    (void)Rte_Write_VeBTRR_b_BattCoolFlts_Value
        (BTRR_ac_B.OutportBufferForBattCoolFlts_NF);

    /* Outport: '<Root>/VeBTRR_P_BattCoolPwrNeedLim' */
    (void)Rte_Write_VeBTRR_P_BattCoolPwrNeedLim_Value
        (BTRR_ac_B.OutportBufferForBattCoolPwrNeed);

    /* Outport: '<Root>/VeBTRR_T_BattDisplayTemp' */
    (void)Rte_Write_VeBTRR_T_BattDisplayTemp_Value
        (BTRR_ac_B.OutportBufferForBattDisplayTemp);

    /* Outport: '<Root>/VeBTRR_b_BattHeatReq' */
    (void)Rte_Write_VeBTRR_b_BattHeatReq_Value
        (BTRR_ac_B.OutportBufferForBattHeatReq_NF);

    /* Outport: '<Root>/VeBTRR_b_BattTempNot_Optml' */
    (void)Rte_Write_VeBTRR_b_BattTempNot_Optml_Value
        (BTRR_ac_B.OutportBufferForBattTempNot_Opt);

    /* Outport: '<Root>/VeBTRR_T_BattTmp_MaxCmfrtZone' */
    (void)Rte_Write_VeBTRR_T_BattTmp_MaxCmfrtZone_Value
        (BTRR_ac_B.OutportBufferForBattTmp_MaxCmfr);

    /* Outport: '<Root>/VeBTRR_T_BattTmp_MaxDerateZone' */
    (void)Rte_Write_VeBTRR_T_BattTmp_MaxDerateZone_Value
        (BTRR_ac_B.OutportBufferForBattTmp_MaxDera);

    /* Outport: '<Root>/VeBTRR_T_BattTmp_MinCmfrtZone' */
    (void)Rte_Write_VeBTRR_T_BattTmp_MinCmfrtZone_Value
        (BTRR_ac_B.OutportBufferForBattTmp_MinCmfr);

    /* Outport: '<Root>/VeBTRR_T_BattTmp_MinDerateZone' */
    (void)Rte_Write_VeBTRR_T_BattTmp_MinDerateZone_Value
        (BTRR_ac_B.OutportBufferForBattTmp_MinDera);

    /* Outport: '<Root>/VeBTRR_b_Batt_CritOrMarg' */
    (void)Rte_Write_VeBTRR_b_Batt_CritOrMarg_Value
        (BTRR_ac_B.OutportBufferForBatt_CritOrMarg);

    /* Outport: '<Root>/VeBTRR_dT_CellOverTempPsv' */
    (void)Rte_Write_VeBTRR_dT_CellOverTempPsv_Value
        (BTRR_ac_B.OutportBufferForCellOverTempPsv);

    /* Outport: '<Root>/VeBTRR_dT_CellOverTemp' */
    (void)Rte_Write_VeBTRR_dT_CellOverTemp_Value
        (BTRR_ac_B.OutportBufferForCellOverTemp_NF);

    /* Outport: '<Root>/VeBTRR_b_CellTempAvgUsedFA' */
    (void)Rte_Write_VeBTRR_b_CellTempAvgUsedFA_Value
        (BTRR_ac_B.OutportBufferForCellTempAvgUs_i);

    /* Outport: '<Root>/VeBTRR_T_CellTempAvgUsed' */
    (void)Rte_Write_VeBTRR_T_CellTempAvgUsed_Value
        (BTRR_ac_B.OutportBufferForCellTempAvgUsed);

    /* Outport: '<Root>/VeBTRR_dT_CellTempDelta' */
    (void)Rte_Write_VeBTRR_dT_CellTempDelta_Value
        (BTRR_ac_B.OutportBufferForCellTempDelta_N);

#endif

    /* End of SignalConversion generated from: '<S3>/BattCellBalancing_NF' */

    /* SignalConversion generated from: '<S3>/CellTempDelta_Raw_write' incorporates:
     *  SignalConversion generated from: '<S3>/CellTempDelta_write'
     *  SignalConversion generated from: '<S3>/CellTempMaxFA_write'
     */
#if Rte_SysCon_Variant_BTRR_2

    /* SignalConversion generated from: '<S3>/CellTempDelta_Raw_write' */
    rtb_OutportBufferForCellTempDel = BTRR_ac_B.OutportBufferForCellTempDelta_R;

    /* SignalConversion generated from: '<S3>/CellTempDelta_write' */
    rtb_OutportBufferForCellTempD_l = BTRR_ac_B.OutportBufferForCellTempDelta_w;

    /* SignalConversion generated from: '<S3>/CellTempMaxFA_write' */
    rtb_OutportBufferForCellTemp_ae = BTRR_ac_B.OutportBufferForCellTempMaxFA_w;

#endif

    /* End of SignalConversion generated from: '<S3>/CellTempDelta_Raw_write' */

    /* SignalConversion generated from: '<S3>/CellTempMaxUsedFA_NF' incorporates:
     *  SignalConversion generated from: '<S3>/CellTempMaxUsed_NF'
     */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_b_CellTempMaxUsedFA' */
    (void)Rte_Write_VeBTRR_b_CellTempMaxUsedFA_Value
        (BTRR_ac_B.OutportBufferForCellTempMaxUs_g);

    /* Outport: '<Root>/VeBTRR_T_CellTempMaxUsed' */
    (void)Rte_Write_VeBTRR_T_CellTempMaxUsed_Value
        (BTRR_ac_B.OutportBufferForCellTempMaxUs_e);

#endif

    /* End of SignalConversion generated from: '<S3>/CellTempMaxUsedFA_NF' */

    /* SignalConversion generated from: '<S3>/CellTempMaxUsed_write' incorporates:
     *  SignalConversion generated from: '<S3>/CellTempMinFA_write'
     */
#if Rte_SysCon_Variant_BTRR_2

    /* SignalConversion generated from: '<S3>/CellTempMaxUsed_write' */
    rtb_OutportBufferForCellTempMax = BTRR_ac_B.OutportBufferForCellTempMaxUsed;

    /* SignalConversion generated from: '<S3>/CellTempMinFA_write' */
    rtb_OutportBufferForCellTempM_a = BTRR_ac_B.OutportBufferForCellTempMinFA_w;

#endif

    /* End of SignalConversion generated from: '<S3>/CellTempMaxUsed_write' */

    /* SignalConversion generated from: '<S3>/CellTempMinUsedFA_NF' incorporates:
     *  SignalConversion generated from: '<S3>/CellTempMinUsed_NF'
     */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_b_CellTempMinUsedFA' */
    (void)Rte_Write_VeBTRR_b_CellTempMinUsedFA_Value
        (BTRR_ac_B.OutportBufferForCellTempMinUs_b);

    /* Outport: '<Root>/VeBTRR_T_CellTempMinUsed' */
    (void)Rte_Write_VeBTRR_T_CellTempMinUsed_Value
        (BTRR_ac_B.OutportBufferForCellTempMinUs_o);

#endif

    /* End of SignalConversion generated from: '<S3>/CellTempMinUsedFA_NF' */

    /* SignalConversion generated from: '<S3>/CellTempMinUsed_write' */
#if Rte_SysCon_Variant_BTRR_2

    /* SignalConversion generated from: '<S3>/CellTempMinUsed_write' */
    rtb_OutportBufferForCellTempMin = BTRR_ac_B.OutportBufferForCellTempMinUsed;

#endif

    /* End of SignalConversion generated from: '<S3>/CellTempMinUsed_write' */

    /* SignalConversion generated from: '<S3>/CellUnderTemp_NF' incorporates:
     *  SignalConversion generated from: '<S3>/HVBR_OvrdReq_NF'
     */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_dT_CellUnderTemp' */
    (void)Rte_Write_VeBTRR_dT_CellUnderTemp_Value
        (BTRR_ac_B.OutportBufferForCellUnderTemp_N);

    /* Outport: '<Root>/VeBTRR_b_HVBR_OvrdReq' */
    (void)Rte_Write_VeBTRR_b_HVBR_OvrdReq_Value
        (BTRR_ac_B.OutportBufferForHVBR_OvrdReq_NF);

#endif

    /* End of SignalConversion generated from: '<S3>/CellUnderTemp_NF' */

    /* SignalConversion generated from: '<S3>/HVBR_Ovrd_Req_write' */
#if Rte_SysCon_Variant_BTRR_2

    /* SignalConversion generated from: '<S3>/HVBR_Ovrd_Req_write' */
    rtb_OutportBufferForHVBR_Ovrd_R = BTRR_ac_B.OutportBufferForHVBR_Ovrd_Req_w;

#endif

    /* End of SignalConversion generated from: '<S3>/HVBR_Ovrd_Req_write' */

    /* SignalConversion generated from: '<S3>/HVBattPriority_NF' */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_b_HVBattPriority' */
    (void)Rte_Write_VeBTRR_b_HVBattPriority_Value
        (BTRR_ac_B.OutportBufferForHVBattPriority_);

#endif

    /* End of SignalConversion generated from: '<S3>/HVBattPriority_NF' */

    /* SignalConversion generated from: '<S3>/HV_BatClntTmp_In_AftDial_write' */
#if Rte_SysCon_Variant_BTRR_2

    /* SignalConversion generated from: '<S3>/HV_BatClntTmp_In_AftDial_write' */
    rtb_OutportBufferForHV_BatClntT = BTRR_ac_B.OutportBufferForHV_BatClntTmp_I;

#endif

    /* End of SignalConversion generated from: '<S3>/HV_BatClntTmp_In_AftDial_write' */

    /* SignalConversion generated from: '<S3>/HV_BatModTempMax_NF' incorporates:
     *  SignalConversion generated from: '<S3>/HV_BatModTempMin_NF'
     *  SignalConversion generated from: '<S3>/HV_BatTempCrit_CondState_New_NF'
     *  SignalConversion generated from: '<S3>/HV_BatTempCrit_Cond_NF'
     *  SignalConversion generated from: '<S3>/HV_BatTmpRng_NF'
     *  SignalConversion generated from: '<S3>/LT_ActPmpFlw_NF'
     *  SignalConversion generated from: '<S3>/OoR_Recoverable_NF'
     *  SignalConversion generated from: '<S3>/PerWup_BatToCond_NF'
     *  SignalConversion generated from: '<S3>/PlugdIn_Or_Chrg_NF'
     */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_T_HV_BatModTempMax' */
    (void)Rte_Write_VeBTRR_T_HV_BatModTempMax_Value
        (BTRR_ac_B.OutportBufferForHV_BatModTempMa);

    /* Outport: '<Root>/VeBTRR_T_HV_BatModTempMin' */
    (void)Rte_Write_VeBTRR_T_HV_BatModTempMin_Value
        (BTRR_ac_B.OutportBufferForHV_BatModTempMi);

    /* Outport: '<Root>/VeBTRR_e_HV_BatTempCrit_CondState_New' incorporates:
     *  SignalConversion generated from: '<S1037>/HV_BatTempCrit_CondState_New_NF'
     */
    (void)Rte_Write_VeBTRR_e_HV_BatTempCrit_CondState_New_Value
        (BTRR_ac_B.OutportBufferForHV_BatTempCri_d);

    /* Outport: '<Root>/VeBTRR_b_HV_BatTempCrit_Cond' */
    (void)Rte_Write_VeBTRR_b_HV_BatTempCrit_Cond_Value
        (BTRR_ac_B.OutportBufferForHV_BatTempCrit_);

    /* Outport: '<Root>/VeBTRR_e_HV_BatTmpRng' incorporates:
     *  SignalConversion generated from: '<S1037>/HV_BatTmpRng_NF'
     */
    (void)Rte_Write_VeBTRR_e_HV_BatTmpRng_Value
        (BTRR_ac_B.OutportBufferForHV_BatTmpRng_NF);

    /* Outport: '<Root>/VeBTRR_dV_LT_ActPmpFlw' */
    (void)Rte_Write_VeBTRR_dV_LT_ActPmpFlw_Value
        (BTRR_ac_B.OutportBufferForLT_ActPmpFlw_NF);

    /* Outport: '<Root>/VeBTRR_b_OoR_Recoverable' */
    (void)Rte_Write_VeBTRR_b_OoR_Recoverable_Value
        (BTRR_ac_B.OutportBufferForOoR_Recoverable);

    /* Outport: '<Root>/VeBTRR_b_PerWup_BatToCond' */
    (void)Rte_Write_VeBTRR_b_PerWup_BatToCond_Value
        (BTRR_ac_B.OutportBufferForPerWup_BatToCon);

    /* Outport: '<Root>/VeBTRR_b_PlugdIn_Or_Chrg' */
    (void)Rte_Write_VeBTRR_b_PlugdIn_Or_Chrg_Value
        (BTRR_ac_B.OutportBufferForPlugdIn_Or_Chrg);

#endif

    /* End of SignalConversion generated from: '<S3>/HV_BatModTempMax_NF' */

    /* SignalConversion generated from: '<S3>/PropSysActv_BTRR_AftDial_write' */
#if Rte_SysCon_Variant_BTRR_2

    /* SignalConversion generated from: '<S3>/PropSysActv_BTRR_AftDial_write' */
    rtb_OutportBufferForPropSysActv = BTRR_ac_B.OutportBufferForPropSysActv_BTR;

#endif

    /* End of SignalConversion generated from: '<S3>/PropSysActv_BTRR_AftDial_write' */

    /* SignalConversion generated from: '<S3>/ThrmlBatCoolingFlt_NF' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTRR_b_BattCoolReq_CPV_RA_NF'
     *  SignalConversion generated from: '<S3>/VeBTRR_b_BattCoolReq_NF'
     *  SignalConversion generated from: '<S3>/VeBTRR_b_BattHeatingFlts_NF'
     *  SignalConversion generated from: '<S3>/VeBTRR_b_Batt_PsvCoolReq_NF'
     *  SignalConversion generated from: '<S3>/VeBTRR_b_KeyRun_OV_BattCrit_NF'
     *  SignalConversion generated from: '<S3>/VeBTRR_b_Psv_BattHeatReq_NF'
     *  SignalConversion generated from: '<S3>/VhclPlgdIn_NF'
     *  SignalConversion generated from: '<S3>/isCharging_NF'
     */
#if Rte_SysCon_Variant_BTRR_5

    /* Outport: '<Root>/VeBTRR_b_ThrmlBatCoolingFlt' */
    (void)Rte_Write_VeBTRR_b_ThrmlBatCoolingFlt_Value
        (BTRR_ac_B.OutportBufferForThrmlBatCooling);

    /* Outport: '<Root>/VeBTRR_b_BattCoolReq_CPV_RA' */
    (void)Rte_Write_VeBTRR_b_BattCoolReq_CPV_RA_Value
        (BTRR_ac_B.OutportBufferForVeBTRR_b_Batt_n);

    /* Outport: '<Root>/VeBTRR_b_BattCoolReq' */
    (void)Rte_Write_VeBTRR_b_BattCoolReq_Value
        (BTRR_ac_B.OutportBufferForVeBTRR_b_BattCo);

    /* Outport: '<Root>/VeBTRR_b_BattHeatingFlts' */
    (void)Rte_Write_VeBTRR_b_BattHeatingFlts_Value
        (BTRR_ac_B.OutportBufferForVeBTRR_b_BattHe);

    /* Outport: '<Root>/VeBTRR_b_Batt_PsvCoolReq' */
    (void)Rte_Write_VeBTRR_b_Batt_PsvCoolReq_Value
        (BTRR_ac_B.OutportBufferForVeBTRR_b_Batt_P);

    /* Outport: '<Root>/VeBTRR_b_KeyRun_OV_BattCrit' */
    (void)Rte_Write_VeBTRR_b_KeyRun_OV_BattCrit_Value
        (BTRR_ac_B.OutportBufferForVeBTRR_b_KeyRun);

    /* Outport: '<Root>/VeBTRR_b_Psv_BattHeatReq' */
    (void)Rte_Write_VeBTRR_b_Psv_BattHeatReq_Value
        (BTRR_ac_B.OutportBufferForVeBTRR_b_Psv_Ba);

    /* Outport: '<Root>/VeBTRR_b_VhclPlgdIn' */
    (void)Rte_Write_VeBTRR_b_VhclPlgdIn_Value
        (BTRR_ac_B.OutportBufferForVhclPlgdIn_NF);

    /* Outport: '<Root>/VeBTRR_b_isCharging' */
    (void)Rte_Write_VeBTRR_b_isCharging_Value
        (BTRR_ac_B.OutportBufferForisCharging_NF);

#endif

    /* End of SignalConversion generated from: '<S3>/ThrmlBatCoolingFlt_NF' */

    /* SignalConversion generated from: '<S3>/BatTmpCold_RgHgh_D_write' incorporates:
     *  SignalConversion generated from: '<S3>/BatTmpCold_RgLw_D_write'
     *  SignalConversion generated from: '<S3>/BatTmpHys_ColdRgHgh_D_write'
     *  SignalConversion generated from: '<S3>/BatTmpHys_ColdRgLw_D_write'
     *  SignalConversion generated from: '<S3>/CellTempDelta_Raw_write'
     *  SignalConversion generated from: '<S3>/CellTempDelta_write'
     *  SignalConversion generated from: '<S3>/CellTempMaxFA_write'
     *  SignalConversion generated from: '<S3>/CellTempMaxUsed_write'
     *  SignalConversion generated from: '<S3>/CellTempMinFA_write'
     *  SignalConversion generated from: '<S3>/CellTempMinUsed_write'
     *  SignalConversion generated from: '<S3>/HVBR_Ovrd_Req_write'
     *  SignalConversion generated from: '<S3>/HV_BatClntTmp_In_AftDial_write'
     *  SignalConversion generated from: '<S3>/PropSysActv_BTRR_AftDial_write'
     */
#if Rte_SysCon_Variant_BTRR_2

    /* Merge: '<Root>/BatTmpCold_RgHgh_D_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_BatTmpCold_RgHgh_D_write_IRV
        (rtb_OutportBufferForBatTmpCold_);

    /* Merge: '<Root>/BatTmpCold_RgLw_D_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_BatTmpCold_RgLw_D_write_IRV
        (rtb_OutportBufferForBatTmpCol_k);

    /* Merge: '<Root>/BatTmpHys_ColdRgHgh_D_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_BatTmpHys_ColdRgHgh_D_write_IRV
        (rtb_OutportBufferForBatTmpHys_C);

    /* Merge: '<Root>/BatTmpHys_ColdRgLw_D_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_BatTmpHys_ColdRgLw_D_write_IRV
        (rtb_OutportBufferForBatTmpHys_i);

    /* Merge: '<Root>/CellTempDelta_Raw_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_CellTempDelta_Raw_write_IRV
        (rtb_OutportBufferForCellTempDel);

    /* Merge: '<Root>/CellTempDelta_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_CellTempDelta_write_IRV
        (rtb_OutportBufferForCellTempD_l);

    /* Merge: '<Root>/CellTempMaxFA_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_CellTempMaxFA_write_IRV
        (rtb_OutportBufferForCellTemp_ae);

    /* Merge: '<Root>/CellTempMaxUsed_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_CellTempMaxUsed_write_IRV
        (rtb_OutportBufferForCellTempMax);

    /* Merge: '<Root>/CellTempMinFA_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_CellTempMinFA_write_IRV
        (rtb_OutportBufferForCellTempM_a);

    /* Merge: '<Root>/CellTempMinUsed_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_CellTempMinUsed_write_IRV
        (rtb_OutportBufferForCellTempMin);

    /* Merge: '<Root>/HVBR_Ovrd_Req_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_HVBR_Ovrd_Req_write_IRV
        (rtb_OutportBufferForHVBR_Ovrd_R);

    /* Merge: '<Root>/HV_BatClntTmp_In_AftDial_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_HV_BatClntTmp_In_AftDial_write_IRV
        (rtb_OutportBufferForHV_BatClntT);

    /* Merge: '<Root>/PropSysActv_AftDial_IRV_Merge' */
    Rte_IrvWrite_BTRR_PwrOn_PropSysActv_BTRR_AftDial_write_IRV
        (rtb_OutportBufferForPropSysActv);

#endif

    /* End of SignalConversion generated from: '<S3>/BatTmpCold_RgHgh_D_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BTRR_CODE) BTRR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_BTRR_5

        BTRR_ac_B.OutportBufferForHV_BatTmpRng_NF = CeBTRR_e_BatTmpDfltRng;

#endif

#if Rte_SysCon_Variant_BTRR_2

        BTRR_ac_B.TmpSignalConversionAtTmpVM__mt3 = CeAVTR_e_NoEVACond;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_BTRR_2

    VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpDfltRng;

#endif

#if Rte_SysCon_Variant_BTRR_2

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/BTRR_FastTEF' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* SystemInitialize for Enabled SubSystem: '<S83>/Enabled_Subsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S93>/Out1' incorporates:
     *  Outport: '<S93>/Out1'
     */
    BTRR_ac_B.OutportBufferForOut1_bp = true;

    /* SystemInitialize for Gain: '<S95>/Gain' incorporates:
     *  Outport: '<S93>/Signal_Out'
     */
    VeBTRR_T_HV_BatModTempMin_B4D = 25.0F;

    /* End of SystemInitialize for SubSystem: '<S83>/Enabled_Subsystem' */

    /* SystemInitialize for Enabled SubSystem: '<S84>/Enabled_Subsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S98>/Out1' incorporates:
     *  Outport: '<S98>/Out1'
     */
    BTRR_ac_B.OutportBufferForOut1_b = true;

    /* SystemInitialize for Gain: '<S100>/Gain' incorporates:
     *  Outport: '<S98>/Signal_Out'
     */
    VeBTRR_T_HV_BatModTempAvg_B4D = 25.0F;

    /* End of SystemInitialize for SubSystem: '<S84>/Enabled_Subsystem' */

    /* SystemInitialize for Enabled SubSystem: '<S85>/Enabled_Subsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S103>/Out1' incorporates:
     *  Outport: '<S103>/Out1'
     */
    BTRR_ac_B.OutportBufferForOut1 = true;

    /* SystemInitialize for Gain: '<S105>/Gain' incorporates:
     *  Outport: '<S103>/Signal_Out'
     */
    VeBTRR_T_HV_BatModTempMax_B4D = 25.0F;

    /* End of SystemInitialize for SubSystem: '<S85>/Enabled_Subsystem' */

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Calibrations1'
     */
    /* SystemInitialize for SignalConversion generated from: '<S4>/BatTmpHys_ColdRgLw_D' incorporates:
     *  Constant: '<S12>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgLw_D = KeBTRR_T_BatTmpHys_ColdRgLw;

    /* SystemInitialize for SignalConversion generated from: '<S4>/BatTmpHys_ColdRgHgh_D' incorporates:
     *  Constant: '<S11>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpHys_ColdRgHgh_D = KeBTRR_T_BatTmpHys_ColdRgHgh;

    /* SystemInitialize for SignalConversion generated from: '<S4>/BatTmpCold_RgLw_D' incorporates:
     *  Constant: '<S10>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpCold_RgLw_D = KeBTRR_T_BatTmpCold_RgLw;

    /* SystemInitialize for SignalConversion generated from: '<S4>/BatTmpCold_RgHgh_D' incorporates:
     *  Constant: '<S9>/Calib'
     */
    BTRR_ac_B.VeBTRR_T_BatTmpCold_RgHgh_D = KeBTRR_T_BatTmpCold_RgHgh;

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HVBR_Ovrd'
     */
    /* SystemInitialize for SignalConversion: '<S5>/SignalConversion' */
    BTRR_ac_B.SignalConversion = VeBTRR_b_HVBR_OvrdReq_B4D;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/BTRR_FastTEF' */

    /* SystemInitialize for Function Call SubSystem: '<Root>/BTRR_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/BattLoop_Requests'
     */
    /* Start for Constant: '<S167>/Calib' incorporates:
     *  Constant: '<S149>/Constant1'
     *  Constant: '<S149>/Constant2'
     *  Constant: '<S149>/Constant3'
     */
#if Rte_SysCon_Variant_BTRR_1

    /* Start for Constant: '<S149>/Constant4' */
    BTRR_ac_B.Constant4 = KeBTRR_T_BattHighTmp_Thrshld;

#else

    /* Start for Constant: '<S169>/Calib' incorporates:
     *  Constant: '<S149>/Constant1'
     */
    BTRR_ac_B.Calib_lh = 0.0F;

    /* Start for Constant: '<S149>/Constant4' incorporates:
     *  Constant: '<S149>/Constant3'
     */
    BTRR_ac_B.Constant4 = 0.0F;

#endif

    /* End of Start for Constant: '<S167>/Calib' */

    /* Start for Constant: '<S168>/Calib' incorporates:
     *  Constant: '<S149>/Constant4'
     */
#if Rte_SysCon_Variant_BTRR_1

    /* Start for Constant: '<S169>/Calib' */
    BTRR_ac_B.Calib_lh = KeBTRR_T_BattLowTmp_Thrshld;

#else

    /* Start for Constant: '<S149>/Constant4' */
    BTRR_ac_B.Constant4 = 0.0F;

#endif

    /* End of Start for Constant: '<S168>/Calib' */

    /* SystemInitialize for SignalConversion generated from: '<S149>/VariantSource1' incorporates:
     *  Constant: '<S166>/Calib'
     *  Constant: '<S169>/Calib'
     */
#if Rte_SysCon_Variant_BTRR_1

    BTRR_ac_B.Calib_lh = KeBTRR_T_BattPwrDerate_TmpThrshld;

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource1' incorporates:
     *  Constant: '<S169>/Calib'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Source = BTRR_ac_B.Constant4;

#else

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource1'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Source = BTRR_ac_B.Calib_lh;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S149>/VariantSource1' */

    /* SystemInitialize for SignalConversion generated from: '<S149>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource3'
     */
#if Rte_SysCon_Variant_BTRR_1

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource2' */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_h = BTRR_ac_B.Calib_lh;

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource3' */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_g = BTRR_ac_B.Calib_lh;

#else

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource2'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_h = BTRR_ac_B.Constant4;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S149>/VariantSource2' */

    /* SystemInitialize for SignalConversion generated from: '<S149>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource3'
     */
#if Rte_SysCon_Variant_BTRR_1

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource4' */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_a = BTRR_ac_B.Calib_lh;

#else

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource3'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_g = BTRR_ac_B.Constant4;

    /* SystemInitialize for VariantMerge generated from: '<S149>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S149>/VariantSource4'
     */
    BTRR_ac_B.VariantMerge_For_Variant_Sour_a = BTRR_ac_B.Constant4;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S149>/VariantSource4' */

    /* SystemInitialize for Switch: '<S607>/Switch6' incorporates:
     *  Outport: '<S145>/HV_BatTmpRng'
     */
    VeBTRR_e_HV_BatTmpRng_B4D = CeBTRR_e_BatTmpDfltRng;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/BTRR_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

    /* SystemInitialize for Merge: '<Root>/Merge_1' incorporates:
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_11'
     *  Merge: '<Root>/Merge_12'
     *  Merge: '<Root>/Merge_13'
     *  Merge: '<Root>/Merge_14'
     *  Merge: '<Root>/Merge_15'
     *  Merge: '<Root>/Merge_16'
     *  Merge: '<Root>/Merge_17'
     *  Merge: '<Root>/Merge_18'
     *  Merge: '<Root>/Merge_19'
     *  Merge: '<Root>/Merge_2'
     *  Merge: '<Root>/Merge_20'
     *  Merge: '<Root>/Merge_21'
     *  Merge: '<Root>/Merge_22'
     *  Merge: '<Root>/Merge_23'
     *  Merge: '<Root>/Merge_24'
     *  Merge: '<Root>/Merge_25'
     *  Merge: '<Root>/Merge_26'
     *  Merge: '<Root>/Merge_27'
     *  Merge: '<Root>/Merge_28'
     *  Merge: '<Root>/Merge_29'
     *  Merge: '<Root>/Merge_3'
     *  Merge: '<Root>/Merge_30'
     *  Merge: '<Root>/Merge_31'
     *  Merge: '<Root>/Merge_32'
     *  Merge: '<Root>/Merge_33'
     *  Merge: '<Root>/Merge_34'
     *  Merge: '<Root>/Merge_35'
     *  Merge: '<Root>/Merge_36'
     *  Merge: '<Root>/Merge_37'
     *  Merge: '<Root>/Merge_38'
     *  Merge: '<Root>/Merge_39'
     *  Merge: '<Root>/Merge_4'
     *  Merge: '<Root>/Merge_40'
     *  Merge: '<Root>/Merge_41'
     *  Merge: '<Root>/Merge_42'
     *  Merge: '<Root>/Merge_43'
     *  Merge: '<Root>/Merge_44'
     *  Merge: '<Root>/Merge_45'
     *  Merge: '<Root>/Merge_46'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7'
     *  Merge: '<Root>/Merge_8'
     *  Merge: '<Root>/Merge_9'
     */
#if Rte_SysCon_Variant_BTRR_2 || Rte_SysCon_Variant_BTRR_5

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BTRR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#if Rte_SysCon_Variant_BTRR_5

    /* SystemInitialize for Function Call SubSystem: '<S3>/BTRO_NF' */
    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellTempMaxUsed_NF' incorporates:
     *  Constant: '<S1048>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMaxUs_e = KeBTRR_T_CellTempMaxUsed_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellTempMinUsed_NF' incorporates:
     *  Constant: '<S1049>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMinUs_o = KeBTRR_T_CellTempMinUsed_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellTempDelta_NF' incorporates:
     *  Constant: '<S1079>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempDelta_N = KeBTRR_dT_CellTempDelta_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/HVBR_OvrdReq_NF' incorporates:
     *  Constant: '<S1067>/Calib'
     */
    BTRR_ac_B.OutportBufferForHVBR_OvrdReq_NF = KeBTRR_b_HVBR_OvrdReq_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellTempAvgUsed_NF' incorporates:
     *  Constant: '<S1047>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempAvgUsed = KeBTRR_T_CellAvgUsed_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellOverTemp_NF' incorporates:
     *  Constant: '<S1078>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellOverTemp_NF = KeBTRR_dT_CellOverTemp_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/LT_ActPmpFlw_NF' incorporates:
     *  Constant: '<S1081>/Calib'
     */
    BTRR_ac_B.OutportBufferForLT_ActPmpFlw_NF = KeBTRR_dV_LT_ActPmpFlw_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/PerWup_BatToCond_NF' incorporates:
     *  Constant: '<S1072>/Calib'
     */
    BTRR_ac_B.OutportBufferForPerWup_BatToCon =
        KeBTRR_b_PerWup_BatToCond_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/HV_BatTempCrit_Cond_NF' incorporates:
     *  Constant: '<S1069>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatTempCrit_ =
        KeBTRR_b_HV_BatTempCrit_Cond_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/HV_BatTempCrit_CondState_New_NF' incorporates:
     *  Constant: '<S1083>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatTempCri_d =
        KeBTRR_e_HV_BatTempCrit_CondState_New_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattHeatReq_NF' incorporates:
     *  Constant: '<S1059>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattHeatReq_NF = KeBTRR_b_BattHeatReq_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/isCharging_NF' incorporates:
     *  Constant: '<S1076>/Calib'
     */
    BTRR_ac_B.OutportBufferForisCharging_NF = KeBTRR_b_isCharging_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattCondPlugin_Rq_NF' incorporates:
     *  Constant: '<S1054>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCondPlugin_ =
        KeBTRR_b_BattCondPlugin_Rq_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/PlugdIn_Or_Chrg_NF' incorporates:
     *  Constant: '<S1073>/Calib'
     */
    BTRR_ac_B.OutportBufferForPlugdIn_Or_Chrg = KeBTRR_b_PlugdIn_Or_Chrg_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattCellBalancing_NF' incorporates:
     *  Constant: '<S1052>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCellBalanci =
        KeBTRR_b_BattCellBalancing_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/HV_BatTmpRng_NF' incorporates:
     *  Constant: '<S1084>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatTmpRng_NF = KeBTRR_e_HV_BatTmpRng_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/Batt_CritOrMarg_NF' incorporates:
     *  Constant: '<S1062>/Calib'
     */
    BTRR_ac_B.OutportBufferForBatt_CritOrMarg = KeBTRR_b_Batt_CritOrMarg_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BatCondPriority_NF' incorporates:
     *  Constant: '<S1082>/Calib'
     */
    BTRR_ac_B.OutportBufferForBatCondPriority = KeBTRR_e_BatCondPriority_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattTempNot_Optml_NF' incorporates:
     *  Constant: '<S1061>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTempNot_Opt =
        KeBTRR_b_BattTempNot_Optml_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/VhclPlgdIn_NF' incorporates:
     *  Constant: '<S1075>/Calib'
     */
    BTRR_ac_B.OutportBufferForVhclPlgdIn_NF = KeBTRR_b_VhclPlgdIn_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BatHeatPwr_NeedLimtd_NF' incorporates:
     *  Constant: '<S1039>/Calib'
     */
    BTRR_ac_B.OutportBufferForBatHeatPwr_Need =
        KeBTRR_P_BatHeatPwr_NeedLimtd_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattCoolPwrNeedLim_NF' incorporates:
     *  Constant: '<S1040>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCoolPwrNeed =
        KeBTRR_P_BattCoolPwrNeedLim_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/OoR_Recoverable_NF' incorporates:
     *  Constant: '<S1071>/Calib'
     */
    BTRR_ac_B.OutportBufferForOoR_Recoverable = KeBTRR_b_OoR_Recoverable_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellOverTempPsv_NF' incorporates:
     *  Constant: '<S1077>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellOverTempPsv =
        KeBTRR_dT_CellOverTempPsv_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/ThrmlBatCoolingFlt_NF' incorporates:
     *  Constant: '<S1074>/Calib'
     */
    BTRR_ac_B.OutportBufferForThrmlBatCooling =
        KeBTRR_b_ThrmlBatCoolingFlt_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellTempMaxUsedFA_NF' incorporates:
     *  Constant: '<S1065>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMaxUs_g = KeBTRR_b_CellMaxUsedFA_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellTempMinUsedFA_NF' incorporates:
     *  Constant: '<S1066>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempMinUs_b = KeBTRR_b_CellMinUsedFA_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellTempAvgUsedFA_NF' incorporates:
     *  Constant: '<S1064>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellTempAvgUs_i = KeBTRR_b_CellAvgUsedFA_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattCondFlt_NF' incorporates:
     *  Constant: '<S1053>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCondFlt_NF = KeBTRR_b_BattCondFlt_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/HVBattPriority_NF' incorporates:
     *  Constant: '<S1068>/Calib'
     */
    BTRR_ac_B.OutportBufferForHVBattPriority_ = KeBTRR_b_HVBattPriority_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattCoolFlts_NF' incorporates:
     *  Constant: '<S1055>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattCoolFlts_NF = KeBTRR_b_BattCoolFlts_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/HV_BatModTempMax_NF' incorporates:
     *  Constant: '<S1050>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatModTempMa =
        KeBTRR_T_HV_BatModTempMax_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/HV_BatModTempMin_NF' incorporates:
     *  Constant: '<S1051>/Calib'
     */
    BTRR_ac_B.OutportBufferForHV_BatModTempMi =
        KeBTRR_T_HV_BatModTempMin_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BTISBTIS2_Max_NF' incorporates:
     *  Constant: '<S1041>/Calib'
     */
    BTRR_ac_B.OutportBufferForBTISBTIS2_Max_N = KeBTRR_T_BTISBTIS2Max_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattDisplayTemp_NF' incorporates:
     *  Constant: '<S1042>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattDisplayTemp =
        KeBTRR_T_BattHeating_MaxTemp_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattTmp_MaxDerateZone_NF' incorporates:
     *  Constant: '<S1044>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MaxDera =
        KeBTRR_T_BattHighTmp_Thrshld_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattTmp_MinDerateZone_NF' incorporates:
     *  Constant: '<S1045>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MinDera =
        KeBTRR_T_BattLowTmp_Thrshld_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattTmp_MinCmfrtZone_NF' incorporates:
     *  Constant: '<S1043>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MinCmfr =
        KeBTRR_T_BattHeating_Thrshld_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/BattTmp_MaxCmfrtZone_NF' incorporates:
     *  Constant: '<S1046>/Calib'
     */
    BTRR_ac_B.OutportBufferForBattTmp_MaxCmfr =
        KeBTRR_T_BattPwrDerate_TmpThrshld_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/VeBTRR_b_KeyRun_OV_BattCrit_NF' incorporates:
     *  Constant: '<S1070>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_KeyRun =
        KeBTRR_b_KeyRun_OV_BattCrit_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/VeBTRR_b_Psv_BattHeatReq_NF' incorporates:
     *  Constant: '<S1060>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_Psv_Ba = KeBTRR_b_BattPsvHeatReq_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/VeBTRR_b_BattCoolReq_NF' incorporates:
     *  Constant: '<S1057>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_BattCo = KeBTRR_b_BattCoolReq_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/VeBTRR_b_Batt_PsvCoolReq_NF' incorporates:
     *  Constant: '<S1063>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_Batt_P = KeBTRR_b_Batt_PsvCoolReq_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/VeBTRR_b_BattCoolReq_CPV_RA_NF' incorporates:
     *  Constant: '<S1056>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_Batt_n =
        KeBTRR_b_BattCoolReq_CPV_RA_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/VeBTRR_b_BattHeatingFlts_NF' incorporates:
     *  Constant: '<S1058>/Calib'
     */
    BTRR_ac_B.OutportBufferForVeBTRR_b_BattHe = KeBTRR_b_BattHeatFlts_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S1037>/CellUnderTemp_NF' incorporates:
     *  Constant: '<S1080>/Calib'
     */
    BTRR_ac_B.OutportBufferForCellUnderTemp_N = KeBTRR_dT_CellUnderTemp_NF_Dial;

    /* End of SystemInitialize for SubSystem: '<S3>/BTRO_NF' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeBTRR_e_HV_BatTmpRng' */
    (void)Rte_Write_VeBTRR_e_HV_BatTmpRng_Value(CeBTRR_e_BatTmpDfltRng);

    /* SystemInitialize for Outport: '<Root>/VeBTRR_e_BatCondPriority' */
    (void)Rte_Write_VeBTRR_e_BatCondPriority_Value(CeBTRR_e_BatCond_NoPriority);

    /* SystemInitialize for Outport: '<Root>/VeBTRR_e_HV_BatTempCrit_CondState_New' */
    (void)Rte_Write_VeBTRR_e_HV_BatTempCrit_CondState_New_Value
        (CeBTRR_e_BatNotCrit);

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
