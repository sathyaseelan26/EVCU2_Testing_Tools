/*
 * File: ERER_ac.c
 *
 * Code generated for Simulink model 'ERER_ac'.
 *
 * Model version                  : 9.804
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:38:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ERER_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Auto                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_DRAG                ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Donut               ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Drift               ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Eco                 ((uint8)5U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Init                ((uint8)6U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_InitDelay           ((uint8)7U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Mud_Sand            ((uint8)8U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Rock                ((uint8)9U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Sand                ((uint8)10U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Snow                ((uint8)11U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Sport               ((uint8)12U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Tow                 ((uint8)13U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Track               ((uint8)14U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Valet               ((uint8)15U)
#endif

/* Named constants for Chart: '<S77>/DRM_Stateflow_M182' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Camel               ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_InitDelay_i         ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Init_l              ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Normal              ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Offroad             ((uint8)5U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Sport_h             ((uint8)6U)
#endif

/* Named constants for Chart: '<S78>/DRM_Stateflow_CityBEV' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Camel_or_Sport      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Normal_k            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Range               ((uint8)4U)
#endif

/* Named constants for Chart: '<S79>/DRM_Stateflow_LP3' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Corsa               ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Custom              ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Eco_b               ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_InitDelay_p         ((uint8)6U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Init_b              ((uint8)5U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_OffRoad             ((uint8)7U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Sport_l             ((uint8)8U)
#endif

/* Named constants for Chart: '<S222>/Stateflow Chart' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Dash                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Down                ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_SNA                 ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_UP                  ((uint8)4U)
#endif

/* Named constants for Chart: '<S191>/PSA_WhrpKMCalc' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_ConsumptionCalculation ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_OutputCalculation   ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_PartialOutputCalculation ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_PopulateArray       ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_UpdateArray         ((uint8)5U)
#endif

/* Named constants for Chart: '<S339>/Stateflow Chart1' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Entry_State         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Exit_State          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_s1                  ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_s2                  ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_s3                  ((uint8)5U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_s4                  ((uint8)6U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_s5                  ((uint8)7U)
#endif

/* Named constants for Chart: '<S13>/EstRange_State' */
#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Charging            ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_DetermineContactorsClosed ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_DetermineInitalizationMode ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Driving             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Idle                ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_InitalizeCapacity   ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_PSA                 ((uint8)5U)
#endif

#if Rte_SysCon_Variant_ERER_1
#define ERER_ac_IN_Zero_Speed          ((uint8)3U)
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
#define START_SEC_CALIB_UNSPECIFIED_ERER
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) HeERER_k_H2Unit_Convert = 0.0F;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_Cnt_CapacityInitDelayTrshld =
    2U;                                /* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_Cnt_DRM_InitDelay = 2U;/* Referenced by:
                                                                      * '<S91>/Calib'
                                                                      * '<S124>/Calib'
                                                                      * '<S172>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_Cnt_EngineON_Window = 50U;/* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_Cnt_PostChrg_Delay = 2U;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT)
    KeERER_Cnt_RangeInitalizationDelayTrshld = 2U;/* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_Cnt_UnitWin_total = 80U;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_Cnt_VehSpdChk_Delay = 50U;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_E_FuelEquEnergy = 32.75F;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_E_H2WhrMax = 100000.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_E_MaxWhr = 97800.0F;/* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_E_Whrpkm_Max = 600.0F;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_E_Whrpkm_Min = 30.0F;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_F_WHperKMinit = 130.0F;/* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_F_WHperKMinit_Ovrd = 200.0F;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_F_WhperKM_Max = 520.0F;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_F_WhperKM_Min = 116.0F;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_Pct_DispSOC_0Range = 0.1F;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_Pct_EngEfficiency = 60.0F;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_Pct_ZeroSOCDisplay = 5.0F;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_V_FuelMaxTankCap = 100.0F;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_Abarth = 0;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_AllowRangeImpact = 1;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_AllowRangeReset = 1;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_CapEstmLogic_Switch = 0;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_DRMEnable = 1;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S125>/Calib'
                                                                      * '<S146>/Calib'
                                                                      * '<S173>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_EnableFuelRange = 1;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_EstRangeTrend_OvrdEnbl =
    0;                                 /* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_EstRangeinit_OvrdEnbl = 0;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_HEV = 0;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_OutEstRangeinMiles = 0;/* Referenced by:
                                                                      * '<S298>/Calib'
                                                                      * '<S353>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_RangeRounding = 1;/* Referenced by:
                                                                      * '<S299>/Calib'
                                                                      * '<S354>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_UseAh_4WhrCal = 1;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_UseSpeedAdjPower = 0;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(boolean, ERER_VAR_INIT) KeERER_b_WHperKMinit_OvrdEnbl = 0;/* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(TeERER_e_DRMType, ERER_VAR_INIT) KeERER_e_DRMType =
    CeERER_e_DRMType1;                 /* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_f_WhrpKMResetVal = 150.0F;/* Referenced by:
                                                                      * '<S207>/Calib'
                                                                      * '<S373>/Calib'
                                                                      * '<S268>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_BlendFactor = 0.08F;/* Referenced by:
                                                                      * '<S93>/Calib'
                                                                      * '<S126>/Calib'
                                                                      * '<S147>/Calib'
                                                                      * '<S174>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_CapFiltCoef = 1.0F;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_DRDT_FiltCoef = 0.000166F;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_DRM_Modify_Factor_Max =
    0.15F;                             /* Referenced by:
                                        * '<S94>/Calib'
                                        * '<S127>/Calib'
                                        * '<S148>/Calib'
                                        * '<S175>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_DRM_Modify_Factor_Min =
    -0.15F;                            /* Referenced by:
                                        * '<S95>/Calib'
                                        * '<S128>/Calib'
                                        * '<S149>/Calib'
                                        * '<S176>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_EngineOff_UnitConvert =
    0.02642F;                          /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_EngineOn_UnitConvert =
    0.01F;                             /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_EstRangeEL = 0.03F;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_FuelEnergyFilter = 0.2F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_HVBat_trqpath_eff = 1.0F;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_ICE_trqpath_eff = 1.0F;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_MtrA_eff = 1.0F;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_PwrIntegratorMax =
    2.14748365E+9F;                    /* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_PwrIntegratorMin =
    -2.14748365E+9F;                   /* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_SchdChrgRangeEL = 0.01F;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_k_WhrpKM_FilterGain =
    2.1005E-5F;                        /* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_ACFAN_SNA_value = 1023.0F;/* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_Audio_SNA_value = 1023.0F;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_Defrost_SNA_value =
    511.0F;                            /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_EstRangeinit_Ovrd = 50.0F;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_HomologatedRangeThresh =
    390.0F;                            /* Referenced by:
                                        * '<S96>/Calib'
                                        * '<S129>/Calib'
                                        * '<S150>/Calib'
                                        * '<S177>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_Lights_SNA_value = 511.0F;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_MaxHomologatedRange =
    400.0F;                            /* Referenced by:
                                        * '<S97>/Calib'
                                        * '<S130>/Calib'
                                        * '<S151>/Calib'
                                        * '<S178>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_Other_SNA_value = 511.0F;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_SNA_value = 2047.0F;/* Referenced by:
                                                                      * '<S356>/Calib'
                                                                      * '<S347>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_Seatswhl_SNA_value =
    511.0F;                            /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_Total_SNA_value = 2047.0F;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_TurtleEntryThresh = 24.0F;/* Referenced by:
                                                                      * '<S98>/Calib'
                                                                      * '<S131>/Calib'
                                                                      * '<S152>/Calib'
                                                                      * '<S179>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_TurtleExitThresh = 30.0F;/* Referenced by:
                                                                      * '<S99>/Calib'
                                                                      * '<S132>/Calib'
                                                                      * '<S153>/Calib'
                                                                      * '<S180>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_VehDistanceMax = 800.0F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_max_range = 400.0F;/* Referenced by:
                                                                      * '<S301>/Calib'
                                                                      * '<S357>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_l_unit_DistWindow = 0.2F;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_n_Capacity_StorTime = 6000U;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_n_EEROMInitDelay = 0U;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_n_RTI_DebounceSamples =
    0.0F;                              /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_n_WHperKM_StorTime = 6000U;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_q_BattFullCapacity = 167.0F;/* Referenced by: '<S16>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_t_RngResetDuration = 50.0F;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(uint16, ERER_VAR_INIT) KeERER_t_ZeroSpdThrshld = 3U;/* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KeERER_v_VehSpdThrshld = 1.0F;/* Referenced by:
                                                                      * '<S380>/Calib'
                                                                      * '<S341>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_C_SOC_SOH_Ahr[96] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S62>/Vector'
                                        * '<S67>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_Cnt_UnitWin_fncSOC[13] =
{
    5.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.5F, 10.416667F, 11.25F, 12.083333F,
    12.916667F, 13.75F, 14.583333F, 15.0F
} ;                                    /* Referenced by: '<S219>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_E_SOC_SOH_Whr[96] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    200.0F, 400.0F, 600.0F, 800.0F, 1000.0F, 1200.0F, 1500.0F, 2000.0F, 2500.0F,
    3000.0F, 3500.0F, 4000.0F, 300.0F, 500.0F, 1500.0F, 2000.0F, 2500.0F,
    3000.0F, 3500.0F, 4000.0F, 4500.0F, 5000.0F, 5500.0F, 6000.0F, 400.0F,
    600.0F, 1000.0F, 3000.0F, 3500.0F, 4000.0F, 5500.0F, 6000.0F, 6500.0F,
    7000.0F, 7500.0F, 8000.0F, 500.0F, 800.0F, 1200.0F, 3500.0F, 5500.0F,
    6500.0F, 7000.0F, 7500.0F, 8000.0F, 8500.0F, 9000.0F, 10000.0F, 600.0F,
    900.0F, 1500.0F, 4000.0F, 6000.0F, 8000.0F, 9000.0F, 10000.0F, 11000.0F,
    12000.0F, 13000.0F, 14000.0F, 800.0F, 1000.0F, 2000.0F, 5000.0F, 7000.0F,
    9000.0F, 11000.0F, 13000.0F, 15000.0F, 16000.0F, 17000.0F, 18000.0F, 1000.0F,
    2000.0F, 3000.0F, 6000.0F, 8000.0F, 10000.0F, 12000.0F, 14000.0F, 16000.0F,
    18000.0F, 20000.0F, 22000.0F
} ;                                    /* Referenced by:
                                        * '<S61>/Vector'
                                        * '<S69>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_E_SOC_WHR[7] =
{
    1.0F, 16300.333F, 32599.666F, 48899.0F, 65198.332F, 81497.6641F, 97800.0F
} ;                                    /* Referenced by:
                                        * '<S54>/Vector'
                                        * '<S55>/Vector'
                                        * '<S56>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_E_Whr_SC[7] =
{
    1.0F, 16300.333F, 32599.666F, 48899.0F, 65198.332F, 81497.6641F, 97800.0F
} ;                                    /* Referenced by: '<S44>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_K_FullDH_Weight[3] =
{
    0.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S320>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_K_Init_Weight[3] =
{
    1.0F, 2.0F, 4.0F
} ;                                    /* Referenced by: '<S321>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_K_SOCDH_Weight[3] =
{
    0.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S322>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_V_SOC_SOH_OCV[96] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S63>/Vector'
                                        * '<S68>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_CamelMod_Perc[9] =
{
    0.15F, 0.15F, 0.15F, 0.15F, 0.1425F, 0.13125F, 0.12375F, 0.112500004F,
    0.075F
} ;                                    /* Referenced by:
                                        * '<S100>/Vector'
                                        * '<S133>/Vector'
                                        * '<S181>/Vector'
                                        * '<S161>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_CorsaMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.0375F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_CustomMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.0375F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S183>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_DonutMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.0375F, 0.0356F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_DragMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.0375F, 0.0356F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S102>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_DriftMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.0375F, 0.0356F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S103>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_KMtoEmpty_FiltCoef[13] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.01F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F
} ;                                    /* Referenced by: '<S232>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_KMtoEmpty_LowSOC[5] =
{
    0.0009F, 0.0008F, 0.0005F, 0.0001F, 0.0001F
} ;                                    /* Referenced by: '<S233>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_Mud_SandMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.0375F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S104>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_OffrdMod_Perc[9] =
{
    0.15F, 0.15F, 0.15F, 0.15F, 0.1425F, 0.1312F, 0.1238F, 0.1125F, 0.075F
} ;                                    /* Referenced by:
                                        * '<S134>/Vector'
                                        * '<S184>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_RangeMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.0375F, 0.035625F, 0.0328125F, 0.0309375F,
    0.0281250011F, 0.01875F
} ;                                    /* Referenced by: '<S154>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_RockMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.0375F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S105>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_SandMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.0375F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S106>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_SnowMod_Perc[9] =
{
    0.15F, 0.15F, 0.15F, 0.15F, 0.1425F, 0.1312F, 0.1238F, 0.1125F, 0.075F
} ;                                    /* Referenced by: '<S107>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_SportMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.0375F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by:
                                        * '<S108>/Vector'
                                        * '<S135>/Vector'
                                        * '<S185>/Vector'
                                        * '<S160>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_TowMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.0375F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S109>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_TrackMod_Perc[9] =
{
    0.075F, 0.075F, 0.075F, 0.0375F, 0.0356F, 0.0328F, 0.0309F, 0.0281F, 0.0188F
} ;                                    /* Referenced by: '<S110>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_k_ValetMod_Perc[9] =
{
    0.15F, 0.15F, 0.15F, 0.15F, 0.1425F, 0.1312F, 0.1238F, 0.1125F, 0.075F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_l_MaxRange[4] =
{
    0.0F, 2.5F, 190.0F, 360.0F
} ;                                    /* Referenced by:
                                        * '<S302>/Vector'
                                        * '<S358>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_l_MinRange[4] =
{
    0.0F, 45.0F, 103.5F, 293.0F
} ;                                    /* Referenced by:
                                        * '<S303>/Vector'
                                        * '<S359>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_l_RTI_Hys[5] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_l_RTI_Thrshld[5] =
{
    9999.0F, 9999.0F, 9999.0F, 9999.0F, 9999.0F
} ;                                    /* Referenced by: '<S262>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_r_CapacityTempRatio[7] =
{
    0.95F, 0.96F, 0.97F, 0.97F, 0.98F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KtERER_r_KMtoEmpty_RateLimit[5] =
{
    0.0F, 0.0F, 0.001F, 0.01F, 1.0F
} ;                                    /* Referenced by: '<S234>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_C_SOC_SOH_Ahr[8] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S62>/Vector'
                                        * '<S67>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_Cnt_UnitWin_fncSOC[13] =
{
    5.0F, 10.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F,
    90.0F, 95.0F
} ;                                    /* Referenced by: '<S219>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_E_SOC_SOH_Whr[8] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S61>/Vector'
                                        * '<S69>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_E_SOC_WHR[7] =
{
    5.0F, 20.333334F, 35.6666679F, 51.0F, 66.3333359F, 81.6666641F, 97.0F
} ;                                    /* Referenced by:
                                        * '<S54>/Vector'
                                        * '<S55>/Vector'
                                        * '<S56>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_E_Whr_SC[7] =
{
    5.0F, 20.333334F, 35.6666679F, 51.0F, 66.3333359F, 81.6666641F, 97.0F
} ;                                    /* Referenced by: '<S44>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_K_FullDH_Weight[3] =
{
    0.0F, 5.0F, 100.0F
} ;                                    /* Referenced by: '<S320>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_K_Init_Weight[3] =
{
    0.0F, 10.0F, 100.0F
} ;                                    /* Referenced by: '<S321>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_K_SOCDH_Weight[3] =
{
    0.0F, 2.0F, 100.0F
} ;                                    /* Referenced by: '<S322>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_V_SOC_SOH_OCV[8] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S63>/Vector'
                                        * '<S68>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_CamelMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by:
                                        * '<S100>/Vector'
                                        * '<S133>/Vector'
                                        * '<S181>/Vector'
                                        * '<S161>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_CorsaMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_CustomMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S183>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_DonutMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_DragMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S102>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_DriftMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S103>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_KMtoEmpty_FiltCoef[13] =
{
    -0.009F, -0.007F, -0.005F, -0.004F, -0.002F, -0.001F, 0.0F, 0.001F, 0.002F,
    0.004F, 0.005F, 0.007F, 0.009F
} ;                                    /* Referenced by: '<S232>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_KMtoEmpty_LowSOC[5] =
{
    25.0F, 50.0F, 65.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S233>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_Mud_SandMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S104>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_OffrdMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by:
                                        * '<S134>/Vector'
                                        * '<S184>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_RangeMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S154>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_RockMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S105>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_SandMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S106>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_SnowMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S107>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_SportMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by:
                                        * '<S108>/Vector'
                                        * '<S135>/Vector'
                                        * '<S185>/Vector'
                                        * '<S160>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_TowMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S109>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_TrackMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S110>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_k_ValetMod_Perc[9] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 250.0F, 300.0F, 325.0F, 350.0F, 400.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_l_MaxRange[4] =
{
    5.0F, 5.5F, 51.0F, 97.0F
} ;                                    /* Referenced by:
                                        * '<S302>/Vector'
                                        * '<S358>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_l_MinRange[4] =
{
    8.0F, 30.0F, 51.0F, 97.0F
} ;                                    /* Referenced by:
                                        * '<S303>/Vector'
                                        * '<S359>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_l_RTI_Hys[5] =
{
    5.0F, 10.0F, 20.0F, 30.0F, 100.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_l_RTI_Thrshld[5] =
{
    5.0F, 10.0F, 20.0F, 30.0F, 100.0F
} ;                                    /* Referenced by: '<S262>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_r_CapacityTempRatio[7] =
{
    -41.0F, -30.0F, -20.0F, -10.0F, 0.0F, 10.0F, 25.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KxERER_r_KMtoEmpty_RateLimit[5] =
{
    5.0F, 7.0F, 10.0F, 15.0F, 20.0F
} ;                                    /* Referenced by: '<S234>/Vector' */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KyERER_C_SOC_SOH_Ahr[12] =
{
    2.0F, 5.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F
} ;                                    /* Referenced by:
                                        * '<S62>/Vector'
                                        * '<S67>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KyERER_E_SOC_SOH_Whr[12] =
{
    2.0F, 5.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F
} ;                                    /* Referenced by:
                                        * '<S61>/Vector'
                                        * '<S69>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ERER_1

static volatile CONST(float32, ERER_VAR_INIT) KyERER_V_SOC_SOH_OCV[12] =
{
    2.0F, 5.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F
} ;                                    /* Referenced by:
                                        * '<S63>/Vector'
                                        * '<S68>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ERER
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, ERER_VAR_INIT) EeERER_F_EEPROM_WhperKM;/* '<Root>/DSM_4' */
static VAR(boolean, ERER_VAR_INIT) EeERER_b_EEPROM_EstRange;/* '<Root>/DSM_7' */
static VAR(boolean, ERER_VAR_INIT) EeERER_b_EEPROM_WhperKM;/* '<Root>/DSM_5' */
static VAR(sint16, ERER_VAR_INIT) EeERER_e_DriveMode;/* '<Root>/DSM_1' */
static VAR(sint16, ERER_VAR_INIT) EeERER_e_TurtleMode;/* '<Root>/Data Store Memory' */
static VAR(float32, ERER_VAR_INIT) EeERER_k_Modify_Factor;/* '<Root>/DSM_3' */
static VAR(float32, ERER_VAR_INIT) EeERER_l_EEPROM_EstRange;/* '<Root>/DSM_6' */
static VAR(float32, ERER_VAR_INIT) EeERER_l_VehDist_Delta;/* '<Root>/DSM_2' */

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeEREC_E_Base_SOC_AhrXOCV_Whr;/* '<S48>/Product' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeEREC_E_Current_SOC_AhrXOCV_Whr;/* '<S50>/Product' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(uint16, ERER_VAR_INIT) VeERER_Cnt_CapacityInitDelay;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(uint16, ERER_VAR_INIT) VeERER_Cnt_RangeInitalizationDelay;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(uint16, ERER_VAR_INIT) VeERER_Cnt_ZeroSpdCnt;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_SchChrgWh;/* '<S18>/Product2' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_VehEnWhr_Init;/* '<S191>/PSA_WhrpKMCalc' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_VehEnergyWhr;/* '<S220>/Product2' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_WhRemaining;/* '<S19>/Sum2' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_delta_VehEnergy;/* '<S191>/PSA_WhrpKMCalc' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_distFncSOC_avgWhrpkm;/* '<S191>/PSA_WhrpKMCalc' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_distFncSOC_avgWhrpkm_Fiilt;/* '<S265>/Switch1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_E_totaldist_avgWhrpkm;/* '<S191>/PSA_WhrpKMCalc' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_F_EEPROM_WhperKM_Write;/* '<S309>/Switch1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_F_WHperKM_DriveAvgStored;/* '<S335>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_F_WHrpKM_SOCDH;/* '<S226>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_P_BatPwrForRange;/* '<S221>/Switch2' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_P_Eng_MtrA_charging_pwr;/* '<S258>/Switch1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_P_Eng_propulsion_pwr;/* '<S251>/Sum2' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_P_Eng_total_pwr;/* '<S9>/Product1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_P_Eq_HVBat_propulsion_pwr;/* '<S251>/Product2' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_P_HVBat_propulsion_acc_pwr;/* '<S251>/Sum1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_P_MtrA_charging_pwr;/* '<S256>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_AllowRangeReset;/* '<S331>/Logical2' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_BatCntctrClosed;/* '<S4>/Equal3' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_KeyRunDetect;/* '<S77>/Unit Delay3' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_TurnOffDetect;/* '<S78>/Logical' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_TurnOffDetect_M182;/* '<S77>/Logical' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug4;/* '<S78>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug4LBBEV;/* '<S76>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug4_LP3;/* '<S79>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug4_M182;/* '<S77>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug5;/* '<S143>/Switch1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug5LBBEV;/* '<S89>/Switch1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug5_LP3;/* '<S170>/Switch1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_DRM_debug5_M182;/* '<S122>/Switch1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_ECOutputFlag;/* '<S191>/PSA_WhrpKMCalc' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EEPROM_EstRange_Write;/* '<S315>/Gain' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EEPROM_Init_Compleate;/* '<S334>/AND' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EEPROM_WhperKM_Write;/* '<S11>/Logical1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EVCUShtDwnStore;/* '<S310>/AND' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EstRangeCharge;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EstRangeInit;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EstRangePSA;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EstRangeSNA;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EstRange_Driving;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EstRange_Idle;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_EstRange_ZeroSpd;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_InitalizeCapacity;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_ResetRangeDisplay_Enable;/* '<S350>/OR1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_SetRangeto80miles;/* '<S339>/Stateflow Chart1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(boolean, ERER_VAR_INIT) VeERER_b_TransitionFromCharge;/* '<S13>/EstRange_State' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(TeDMDR_e_DrvMd, ERER_VAR_INIT) VeERER_e_DRM_DMdebug1;/* '<S78>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(TeDMDR_e_DrvMd, ERER_VAR_INIT) VeERER_e_DRM_DMdebug1_M182;/* '<S77>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(TeERER_e_EstRangeTrend, ERER_VAR_INIT) VeERER_e_RTI;/* '<S259>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_k_CamelModPerc;/* '<S157>/Merge1' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_k_DRM_Modify_Factor;/* '<S155>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_k_DRM_Modify_FactorLBBEV;/* '<S112>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_k_DRM_Modify_Factor_LP3;/* '<S186>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_k_DRM_Modify_Factor_M182;/* '<S136>/Switch' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_l_VehDist_Init;/* '<S191>/PSA_WhrpKMCalc' */

#endif

#if Rte_SysCon_Variant_ERER_1

static VAR(float32, ERER_VAR_INIT) VeERER_l_delta_VehDist;/* '<S191>/PSA_WhrpKMCalc' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ERER
#include "MemMap.h"

CONST(ConstB_ERER_ac_T, ERER_VAR_INIT) ERER_ac_ConstB =
{
    CeERER_e_SNA                       /* '<S384>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ERER
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ERER
#include "MemMap.h"

CONST(ConstP_ERER_ac_T, ERER_VAR_INIT) ERER_ac_ConstP =
{

#if Rte_SysCon_Variant_ERER_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S61>/Vector'
     *   '<S62>/Vector'
     *   '<S63>/Vector'
     *   '<S67>/Vector'
     *   '<S68>/Vector'
     *   '<S69>/Vector'
     */
    {
        7U, 11U
    },

#endif

#ifndef CONSTP_ERER_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_ERER
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

VAR(B_ERER_ac_T, ERER_VAR_INIT) ERER_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"

VAR(DW_ERER_ac_T, ERER_VAR_INIT) ERER_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ERER
#include "MemMap.h"
#if Rte_SysCon_Variant_ERER_1

static FUNC(void, ERER_CODE_LOCAL) ERER_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, VAR(TeDMDR_e_DrvMd, AUTOMATIC) rtu_In2, VAR(float32,
    AUTOMATIC) rtu_In3, VAR(TeDMDR_e_TurtleMdSts, AUTOMATIC) rtu_In4);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_enter_internal_OutputCalculation(const uint16 *FloatToFix);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Valet(const float32 *Vector_de, const float32 *Vector_a,
    const float32 *Vector_fz, const float32 *Vector_c, const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Auto(const float32 *Vector_de, const float32 *Vector_a,
    const float32 *Vector_fz, const float32 *Vector_c, const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_DRAG(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Donut(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Drift(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Eco(const float32 *Vector_m, const float32 *Vector_a, const
                        float32 *Vector_fz, const float32 *Vector_c, const
                        float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Mud_Sand(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Rock(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sand(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Snow(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sport(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Tow(const float32 *Vector_m, const float32 *Vector_de, const
                        float32 *Vector_a, const float32 *Vector_fz, const
                        float32 *Vector_c, const float32 *Vector_ow);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Track(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_c);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sport_j(const float32 *Vector_d, const float32 *Vector_n,
    const float32 *Vector_lt);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Offroad(const float32 *Vector_d, const float32 *Vector_n,
    const float32 *Vector_lt);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sport_l(const float32 *Vector_f, const float32 *Vector_h,
    const float32 *Vector_o);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Corsa(const float32 *Vector_h, const float32 *Vector_o,
    const float32 *Vector_l);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Custom(const float32 *Vector_h, const float32 *Vector_o,
    const float32 *Vector_ff);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Eco_p(const float32 *Vector_f, const float32 *Vector_h,
    const float32 *Vector_o, const float32 *Vector_l, const float32 *Vector_ff);

#endif

#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_OffRoad(const float32 *Vector_f, const float32 *Vector_h,
    const float32 *Vector_o, const float32 *Vector_l, const float32 *Vector_ff);

#endif

/*
 * Output and update for action system:
 *    '<S77>/If Action Subsystem'
 *    '<S78>/If Action Subsystem'
 */
#if Rte_SysCon_Variant_ERER_1

static FUNC(void, ERER_CODE_LOCAL) ERER_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, VAR(TeDMDR_e_DrvMd, AUTOMATIC) rtu_In2, VAR(float32,
    AUTOMATIC) rtu_In3, VAR(TeDMDR_e_TurtleMdSts, AUTOMATIC) rtu_In4)
{
    /* DataStoreWrite: '<S123>/Data Store Write1' */
    EeERER_l_VehDist_Delta = rtu_In1;

    /* DataTypeConversion: '<S123>/Data Type Conversion' incorporates:
     *  DataStoreWrite: '<S123>/Data Store Write'
     */
    EeERER_e_DriveMode = rtu_In2;

    /* DataStoreWrite: '<S123>/Data Store Write2' */
    EeERER_k_Modify_Factor = rtu_In3;

    /* DataTypeConversion: '<S123>/Data Type Conversion1' incorporates:
     *  DataStoreWrite: '<S123>/Data Store Write3'
     */
    EeERER_e_TurtleMode = rtu_In4;
}

#endif

/* Function for Chart: '<S191>/PSA_WhrpKMCalc' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_enter_internal_OutputCalculation(const uint16 *FloatToFix)
{
    float32 EC_out_prv;
    uint16 j;

    /* Entry Internal 'OutputCalculation': '<S223>:206' */
    /* Transition: '<S223>:220' */
    j = 0U;
    VeERER_E_distFncSOC_avgWhrpkm = 0.0F;
    EC_out_prv = 0.0F;

    /* Constant: '<S215>/Calib' */
    while (((sint32)j) <= (((sint32)KeERER_Cnt_UnitWin_total) - 1))
    {
        /* Constant: '<S216>/Calib' incorporates:
         *  Constant: '<S217>/Calib'
         */
        /* Transition: '<S223>:221' */
        /* Transition: '<S223>:224' */
        if (ERER_ac_DW.ECAry[j] > KeERER_E_Whrpkm_Max)
        {
            /* Transition: '<S223>:226' */
            /* Transition: '<S223>:229' */
            ERER_ac_DW.ECAry[j] = KeERER_E_Whrpkm_Max;

            /* Transition: '<S223>:231' */
        }
        else if (ERER_ac_DW.ECAry[j] < KeERER_E_Whrpkm_Min)
        {
            /* Constant: '<S217>/Calib' */
            /* Transition: '<S223>:225' */
            /* Transition: '<S223>:228' */
            ERER_ac_DW.ECAry[j] = KeERER_E_Whrpkm_Min;

            /* Transition: '<S223>:230' */
        }
        else
        {
            /* Transition: '<S223>:227' */
        }

        /* End of Constant: '<S216>/Calib' */
        /* Transition: '<S223>:232' */
        if (j < (KeERER_Cnt_UnitWin_total - (*FloatToFix)))
        {
            /* Transition: '<S223>:233' */
            /* Transition: '<S223>:235' */
            EC_out_prv += ERER_ac_DW.ECAry[j];
            j = (uint16)((sint32)(((sint32)j) + 1));

            /* Transition: '<S223>:236' */
        }
        else
        {
            /* Transition: '<S223>:234' */
            VeERER_E_distFncSOC_avgWhrpkm = ERER_ac_DW.ECAry[j] +
                VeERER_E_distFncSOC_avgWhrpkm;
            j = (uint16)((sint32)(((sint32)j) + 1));
        }

        /* Transition: '<S223>:222' */
    }

    /* Transition: '<S223>:223' */
    VeERER_E_totaldist_avgWhrpkm = (EC_out_prv + VeERER_E_distFncSOC_avgWhrpkm) /
        ((float32)KeERER_Cnt_UnitWin_total);

    /* End of Constant: '<S215>/Calib' */
    VeERER_E_distFncSOC_avgWhrpkm = VeERER_E_distFncSOC_avgWhrpkm / ((float32)
        (*FloatToFix));
    VeERER_b_ECOutputFlag = true;
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Valet(const float32 *Vector_de, const float32 *Vector_a,
    const float32 *Vector_fz, const float32 *Vector_c, const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Valet': '<S81>:322' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:792' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:793' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:843' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - (*Vector_de);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:844' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:846' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + (*Vector_a));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:848' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:850' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + ERER_ac_B.Vector_ou);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:851' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1038' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:1115' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + ERER_ac_B.Vector_e);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1116' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1258' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + ERER_ac_B.Vector_i);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1259' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1267' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + ERER_ac_B.Vector_j);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1268' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1276' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + ERER_ac_B.Vector_cs);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1277' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1576' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1577' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1579' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1580' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1584' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_de)
            + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1585' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_ValetStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1663' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                ((*Vector_de) + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1664' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Auto(const float32 *Vector_de, const float32 *Vector_a,
    const float32 *Vector_fz, const float32 *Vector_c, const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Auto': '<S81>:569' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:773' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:774' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:784' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - (*Vector_a);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:785' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:788' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g + (*Vector_de);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:789' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:809' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            ERER_ac_B.Vector_ou;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:810' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1061' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:1225' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            ERER_ac_B.Vector_e;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1226' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1228' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            ERER_ac_B.Vector_i;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1229' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1234' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            ERER_ac_B.Vector_j;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1235' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1237' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            ERER_ac_B.Vector_cs;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1238' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1556' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - (*Vector_fz);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1557' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1559' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - (*Vector_c);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1560' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1562' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - (*Vector_ow);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1563' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_AutoStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1651' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                ERER_ac_B.Vector_k;

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1652' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_DRAG(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz)
{
    float32 tmp;

    /* During 'DRAG': '<S81>:1280' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_DriftStat))
    {
        /* Transition: '<S81>:1323' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1324' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1326' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_fz) + ERER_ac_B.Vector_j) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1327' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1329' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_fz) + ERER_ac_B.Vector_i) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1330' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:1334' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_fz) + ERER_ac_B.Vector_e) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1335' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:1337' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_fz) + ERER_ac_B.Vector_ou) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1338' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:1341' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_fz) + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1342' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:1344' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g + (*Vector_fz);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1345' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:1353' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_fz) + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1354' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:1356' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_fz) + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1357' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1363' */
        /* Transition: '<S81>:1364' */
        /* Transition: '<S81>:1104' */
        /* Transition: '<S81>:1359' */
        /* Transition: '<S81>:1079' */
        /* Transition: '<S81>:1074' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1449' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1450' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1454' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1455' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DragStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1626' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1627' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Donut(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Donut': '<S81>:1308' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1404' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1405' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1411' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1412' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DriftStat))
    {
        /* Transition: '<S81>:1414' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1415' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1417' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_ow) + ERER_ac_B.Vector_j) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1418' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1420' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_ow) + ERER_ac_B.Vector_i) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1421' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:1423' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_ow) + ERER_ac_B.Vector_e) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1424' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:1426' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_ow) + ERER_ac_B.Vector_ou) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1427' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:1429' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_ow) + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1430' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:1432' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g + (*Vector_ow);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1433' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:1435' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_ow) + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1436' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:1440' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_ow) + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1441' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1443' */
        /* Transition: '<S81>:1444' */
        /* Transition: '<S81>:1402' */
        /* Transition: '<S81>:1364' */
        /* Transition: '<S81>:1104' */
        /* Transition: '<S81>:1359' */
        /* Transition: '<S81>:1079' */
        /* Transition: '<S81>:1074' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DonutStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1616' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1617' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Drift(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a)
{
    float32 tmp;

    /* During 'Drift': '<S81>:1589' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1613' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1614' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1669' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1670' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1672' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1673' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1675' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + ERER_ac_B.Vector_cs) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1676' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1678' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + ERER_ac_B.Vector_j) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1679' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1681' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + ERER_ac_B.Vector_i) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1682' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:1684' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + ERER_ac_B.Vector_e) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1685' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:1691' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + ERER_ac_B.Vector_ou) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1692' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:1700' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1701' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:1703' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g +
            ERER_ac_B.Vector_k;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1704' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:1708' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1709' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:1711' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_k + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1712' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else
    {
        if (ERER_ac_DW.UnitDelay4_DSTATE)
        {
            /* Transition: '<S81>:1714' */
            /* Transition: '<S81>:1715' */
            /* Transition: '<S81>:1444' */
            /* Transition: '<S81>:1402' */
            /* Transition: '<S81>:1364' */
            /* Transition: '<S81>:1104' */
            /* Transition: '<S81>:1359' */
            /* Transition: '<S81>:1079' */
            /* Transition: '<S81>:1074' */
            /* Transition: '<S81>:1071' */
            /* Transition: '<S81>:1066' */
            /* Transition: '<S81>:1063' */
            /* Transition: '<S81>:1049' */
            /* Transition: '<S81>:1039' */
            ERER_ac_B.Out_Modify_Factor_g = 0.0F;
            ERER_ac_B.Modify_Factor_j = 0.0F;

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
            ERER_ac_B.VehDist_Delta_j = 0.0F;
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

            /* Entry 'InitDelay': '<S81>:1028' */
            ERER_ac_DW.DRM_delay_f = 0U;
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Eco(const float32 *Vector_m, const float32 *Vector_a, const
                        float32 *Vector_fz, const float32 *Vector_c, const
                        float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Eco': '<S81>:336' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:770' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:771' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:776' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:777' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:826' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + (*Vector_a));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:827' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:829' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + ERER_ac_B.Vector_ou);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:830' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:840' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + ERER_ac_B.Vector_e);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:841' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1045' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1240' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + ERER_ac_B.Vector_i);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1241' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1248' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + ERER_ac_B.Vector_j);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1249' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1251' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + ERER_ac_B.Vector_cs);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1252' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1565' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1566' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1570' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1571' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1573' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_m)
            + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1574' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_EcoStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1658' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                ((*Vector_m) + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1659' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Mud_Sand(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Mud_Sand': '<S81>:512' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:882' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_i + ERER_ac_B.Vector_e) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:883' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:885' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_i + ERER_ac_B.Vector_ou) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:886' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:892' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_i + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:893' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:895' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g +
            ERER_ac_B.Vector_i;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:896' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:898' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_i + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:899' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:901' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_i + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:903' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1078' */
        /* Transition: '<S81>:1079' */
        /* Transition: '<S81>:1074' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1160' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1161' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1169' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1170' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1515' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_i + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1516' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1522' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_i + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1523' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1525' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_i + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1526' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_MudSandStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1635' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                (ERER_ac_B.Vector_i + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1636' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Rock(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Rock': '<S81>:540' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:953' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:954' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:956' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_j + ERER_ac_B.Vector_e) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:957' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:959' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_j + ERER_ac_B.Vector_ou) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:960' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:964' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_j + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:965' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:967' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g +
            ERER_ac_B.Vector_j;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:968' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:972' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_j + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:973' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:975' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_j + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:976' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:981' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:982' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1098' */
        /* Transition: '<S81>:1359' */
        /* Transition: '<S81>:1079' */
        /* Transition: '<S81>:1074' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1503' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_j + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1504' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1506' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_j + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1507' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1509' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_j + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1510' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_RockStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1632' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                (ERER_ac_B.Vector_j + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1633' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                    ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                    ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                        1.0F) <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sand(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Sand': '<S81>:526' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:978' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:979' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:987' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:988' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:990' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_cs + ERER_ac_B.Vector_e) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:991' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:993' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_cs + ERER_ac_B.Vector_ou)
            + ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:994' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:996' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_cs + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:997' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:999' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g +
            ERER_ac_B.Vector_cs;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1000' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:1002' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_cs + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1003' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:1009' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_cs + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1010' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1103' */
        /* Transition: '<S81>:1104' */
        /* Transition: '<S81>:1359' */
        /* Transition: '<S81>:1079' */
        /* Transition: '<S81>:1074' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1457' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_cs + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1458' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1462' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_cs + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1463' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1469' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_cs + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1470' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SandStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1629' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                (ERER_ac_B.Vector_cs + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1630' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Constant: '<S93>/Calib' */
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                    ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                    ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Snow(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Snow': '<S81>:382' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:781' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g + (*Vector_a);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:782' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:797' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_a) + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:798' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:803' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_a) + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:804' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:806' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + ERER_ac_B.Vector_ou);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:807' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1065' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:1200' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + ERER_ac_B.Vector_e);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1201' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1203' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + ERER_ac_B.Vector_i);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1204' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1217' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + ERER_ac_B.Vector_j);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1218' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1222' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + ERER_ac_B.Vector_cs);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1223' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1547' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1548' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1550' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1551' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1553' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g - ((*Vector_a)
            + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1554' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SnowStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1648' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                ((*Vector_a) + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1649' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sport(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_fz, const float32 *Vector_c,
    const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Sport': '<S81>:352' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:812' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_ou + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:813' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:818' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g +
            ERER_ac_B.Vector_ou;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:819' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:823' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_ou + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:824' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:837' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:838' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:859' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_ou + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:860' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1070' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1184' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_ou + ERER_ac_B.Vector_i);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1185' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1192' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_ou + ERER_ac_B.Vector_j);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1193' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1195' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_ou + ERER_ac_B.Vector_cs);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1196' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1538' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_ou + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1539' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1541' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_ou + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1542' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1544' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_ou + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1545' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_DriftStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DonutStat))
        {
            /* Transition: '<S81>:1643' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                (ERER_ac_B.Vector_ou + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1644' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Tow(const float32 *Vector_m, const float32 *Vector_de, const
                        float32 *Vector_a, const float32 *Vector_fz, const
                        float32 *Vector_c, const float32 *Vector_ow)
{
    float32 tmp;

    /* During 'Tow': '<S81>:368' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:815' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:816' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:856' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_e + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:857' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:862' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g +
            ERER_ac_B.Vector_e;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:863' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:868' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_e + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:870' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:874' */
        ERER_ac_B.Modify_Factor_j = (ERER_ac_B.Vector_e + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:875' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:877' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_e + ERER_ac_B.Vector_i);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:878' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1073' */
        /* Transition: '<S81>:1074' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1175' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_e + ERER_ac_B.Vector_j);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1176' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SandStat))
    {
        /* Transition: '<S81>:1178' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_e + ERER_ac_B.Vector_cs);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1179' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1528' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_e + (*Vector_fz));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1529' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TrackStat))
    {
        /* Transition: '<S81>:1531' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_e + (*Vector_c));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1532' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Track': '<S81>:1294' */
        /* Transition: '<S81>:1301' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1303' */
            /* Transition: '<S81>:1305' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1307' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1302' */
                /* Transition: '<S81>:1304' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1306' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1535' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
            (ERER_ac_B.Vector_e + (*Vector_ow));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1536' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TowStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1640' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g -
                (ERER_ac_B.Vector_e + ERER_ac_B.Vector_k);

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1641' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Track(const float32 *Vector_m, const float32 *Vector_de,
    const float32 *Vector_a, const float32 *Vector_c)
{
    float32 tmp;

    /* During 'Track': '<S81>:1294' */
    if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_DragStat))
    {
        /* Transition: '<S81>:1366' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1367' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'DRAG': '<S81>:1280' */
        /* Transition: '<S81>:1287' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:1289' */
            /* Transition: '<S81>:1291' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1293' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:1288' */
                /* Transition: '<S81>:1290' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1292' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DriftStat))
    {
        /* Transition: '<S81>:1369' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1370' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sand': '<S81>:526' */
        /* Transition: '<S81>:533' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:535' */
            /* Transition: '<S81>:537' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:539' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:534' */
                /* Transition: '<S81>:536' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:538' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_RockStat))
    {
        /* Transition: '<S81>:1372' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_c) + ERER_ac_B.Vector_j) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1373' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Rock': '<S81>:540' */
        /* Transition: '<S81>:547' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:549' */
            /* Transition: '<S81>:551' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:553' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:548' */
                /* Transition: '<S81>:550' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:552' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_MudSandStat))
    {
        /* Transition: '<S81>:1377' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_c) + ERER_ac_B.Vector_i) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1378' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Mud_Sand': '<S81>:512' */
        /* Transition: '<S81>:519' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:521' */
            /* Transition: '<S81>:523' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:525' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:520' */
                /* Transition: '<S81>:522' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:524' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_TowStat))
    {
        /* Transition: '<S81>:1380' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_c) + ERER_ac_B.Vector_e) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1381' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Tow': '<S81>:368' */
        /* Transition: '<S81>:375' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:377' */
            /* Transition: '<S81>:379' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:381' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:376' */
                /* Transition: '<S81>:378' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:380' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S81>:1385' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_c) + ERER_ac_B.Vector_ou) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1386' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S81>:352' */
        /* Transition: '<S81>:359' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:361' */
            /* Transition: '<S81>:363' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:365' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:360' */
                /* Transition: '<S81>:362' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:364' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SnowStat))
    {
        /* Transition: '<S81>:1388' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_c) + (*Vector_a)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1389' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Snow': '<S81>:382' */
        /* Transition: '<S81>:389' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:391' */
            /* Transition: '<S81>:393' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:395' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:390' */
                /* Transition: '<S81>:392' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:394' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S81>:1391' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g + (*Vector_c);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1392' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S81>:569' */
        /* Transition: '<S81>:576' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:578' */
            /* Transition: '<S81>:580' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:582' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:577' */
                /* Transition: '<S81>:579' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:581' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S81>:1394' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_c) + (*Vector_m)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1396' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Eco': '<S81>:336' */
        /* Transition: '<S81>:343' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S93>/Calib' */
            /* Transition: '<S81>:345' */
            /* Transition: '<S81>:347' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:349' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:344' */
                /* Transition: '<S81>:346' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:348' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_ValetStat))
    {
        /* Transition: '<S81>:1398' */
        ERER_ac_B.Modify_Factor_j = ((*Vector_c) + (*Vector_de)) +
            ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1399' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Valet': '<S81>:322' */
        /* Transition: '<S81>:329' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S81>:331' */
            /* Transition: '<S81>:333' */
            ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_j) + 1.0F) * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:335' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S81>:330' */
                /* Transition: '<S81>:332' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:334' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay4_DSTATE)
    {
        /* Transition: '<S81>:1401' */
        /* Transition: '<S81>:1402' */
        /* Transition: '<S81>:1364' */
        /* Transition: '<S81>:1104' */
        /* Transition: '<S81>:1359' */
        /* Transition: '<S81>:1079' */
        /* Transition: '<S81>:1074' */
        /* Transition: '<S81>:1071' */
        /* Transition: '<S81>:1066' */
        /* Transition: '<S81>:1063' */
        /* Transition: '<S81>:1049' */
        /* Transition: '<S81>:1039' */
        ERER_ac_B.Out_Modify_Factor_g = 0.0F;
        ERER_ac_B.Modify_Factor_j = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_j = 0.0F;
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

        /* Entry 'InitDelay': '<S81>:1028' */
        ERER_ac_DW.DRM_delay_f = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_DonutStat))
    {
        /* Transition: '<S81>:1446' */
        ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S81>:1447' */
        ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Donut': '<S81>:1308' */
        /* Transition: '<S81>:1315' */
        ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_g;

        /* Constant: '<S93>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S81>:1317' */
            /* Transition: '<S81>:1319' */
            ERER_ac_B.Out_Modify_Factor_g = tmp * ERER_ac_B.Modify_Factor_j;

            /* Transition: '<S81>:1321' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S81>:1316' */
                /* Transition: '<S81>:1318' */
                ERER_ac_B.Modify_Factor_j = 0.0F;
                ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                /* Transition: '<S81>:1320' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay2_DSTATE) == CeHMIR_e_TrackStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_DriftStat))
        {
            /* Transition: '<S81>:1623' */
            ERER_ac_B.Modify_Factor_j = ERER_ac_B.Out_Modify_Factor_g;

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S81>:1624' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Drift': '<S81>:1589' */
            /* Transition: '<S81>:1596' */
            ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init_g;

            /* Constant: '<S93>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Constant: '<S93>/Calib' */
                /* Transition: '<S81>:1598' */
                /* Transition: '<S81>:1600' */
                ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor) *
                    ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                    ERER_ac_B.Modify_Factor_j;

                /* Transition: '<S81>:1602' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S81>:1597' */
                    /* Transition: '<S81>:1599' */
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                    /* Transition: '<S81>:1601' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S77>/DRM_Stateflow_M182' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sport_j(const float32 *Vector_d, const float32 *Vector_n,
    const float32 *Vector_lt)
{
    float32 tmp;

    /* During 'Sport': '<S114>:189' */
    if (VeERER_b_DRM_KeyRunDetect)
    {
        /* Transition: '<S114>:262' */
        /* Transition: '<S114>:275' */
        /* Transition: '<S114>:175' */
        /* Transition: '<S114>:172' */
        ERER_ac_B.Out_Modify_Factor_p = 0.0F;
        ERER_ac_B.Modify_Factor_k = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_o = 0.0F;
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_InitDelay_i;

        /* Entry 'InitDelay': '<S114>:206' */
        ERER_ac_DW.DRM_delay_n = 0U;
    }
    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) == CeDMDR_e_SportBEV) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu) ==
              CeDMDR_e_OffRd))
    {
        /* Transition: '<S114>:274' */
        ERER_ac_B.Modify_Factor_k = ERER_ac_B.Out_Modify_Factor_p - ((*Vector_d)
            - (*Vector_lt));

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S114>:279' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Offroad;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Offroad': '<S114>:242' */
        /* Transition: '<S114>:249' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S114>:251' */
            /* Transition: '<S114>:253' */
            ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_o) + 1.0F) * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:255' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S114>:250' */
                /* Transition: '<S114>:252' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:254' */
            }
        }
    }
    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) == CeDMDR_e_SportBEV) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu) ==
              CeDMDR_e_Camel_Mode))
    {
        /* Transition: '<S114>:261' */
        ERER_ac_B.Modify_Factor_k = ((*Vector_lt) + (*Vector_n)) +
            ERER_ac_B.Out_Modify_Factor_p;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S114>:281' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Camel;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Camel': '<S114>:228' */
        /* Transition: '<S114>:235' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S126>/Calib' */
            /* Transition: '<S114>:237' */
            /* Transition: '<S114>:239' */
            ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_o) + 1.0F) * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:241' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S114>:236' */
                /* Transition: '<S114>:238' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:240' */
            }
        }
    }
    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) == CeDMDR_e_SportBEV) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu) ==
              CeDMDR_e_Normal_Mode))
    {
        /* Transition: '<S114>:265' */
        ERER_ac_B.Modify_Factor_k = ERER_ac_B.Out_Modify_Factor_p + (*Vector_lt);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S114>:258' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Normal;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Normal': '<S114>:158' */
        /* Transition: '<S114>:165' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S114>:167' */
            /* Transition: '<S114>:169' */
            ERER_ac_B.Out_Modify_Factor_p = tmp * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:171' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S114>:166' */
                /* Transition: '<S114>:168' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:170' */
            }
        }
    }
    else
    {
        /* Transition: '<S114>:259' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Sport_h;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S114>:189' */
        /* Transition: '<S114>:196' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S114>:198' */
            /* Transition: '<S114>:200' */
            ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_o) + 1.0F) * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:202' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S114>:197' */
                /* Transition: '<S114>:199' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:201' */
            }
        }
    }
}

#endif

/* Function for Chart: '<S77>/DRM_Stateflow_M182' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Offroad(const float32 *Vector_d, const float32 *Vector_n,
    const float32 *Vector_lt)
{
    float32 tmp;

    /* During 'Offroad': '<S114>:242' */
    if (VeERER_b_DRM_KeyRunDetect)
    {
        /* Transition: '<S114>:280' */
        /* Transition: '<S114>:264' */
        /* Transition: '<S114>:275' */
        /* Transition: '<S114>:175' */
        /* Transition: '<S114>:172' */
        ERER_ac_B.Out_Modify_Factor_p = 0.0F;
        ERER_ac_B.Modify_Factor_k = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta_o = 0.0F;
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_InitDelay_i;

        /* Entry 'InitDelay': '<S114>:206' */
        ERER_ac_DW.DRM_delay_n = 0U;
    }
    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) == CeDMDR_e_OffRd) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu) ==
              CeDMDR_e_Camel_Mode))
    {
        /* Transition: '<S114>:263' */
        ERER_ac_B.Modify_Factor_k = ((*Vector_d) + (*Vector_n)) +
            ERER_ac_B.Out_Modify_Factor_p;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S114>:272' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Camel;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Camel': '<S114>:228' */
        /* Transition: '<S114>:235' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S114>:237' */
            /* Transition: '<S114>:239' */
            ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_o) + 1.0F) * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:241' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S114>:236' */
                /* Transition: '<S114>:238' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:240' */
            }
        }
    }
    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) == CeDMDR_e_OffRd) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu) ==
              CeDMDR_e_Normal_Mode))
    {
        /* Transition: '<S114>:267' */
        ERER_ac_B.Modify_Factor_k = ERER_ac_B.Out_Modify_Factor_p + (*Vector_d);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S114>:260' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Normal;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Normal': '<S114>:158' */
        /* Transition: '<S114>:165' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S126>/Calib' */
            /* Transition: '<S114>:167' */
            /* Transition: '<S114>:169' */
            ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_o) + 1.0F) * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:171' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S114>:166' */
                /* Transition: '<S114>:168' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:170' */
            }
        }
    }
    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) == CeDMDR_e_OffRd) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu) ==
              CeDMDR_e_SportBEV))
    {
        /* Transition: '<S114>:270' */
        ERER_ac_B.Modify_Factor_k = ((*Vector_d) - (*Vector_lt)) +
            ERER_ac_B.Out_Modify_Factor_p;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S114>:269' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Sport_h;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S114>:189' */
        /* Transition: '<S114>:196' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S114>:198' */
            /* Transition: '<S114>:200' */
            ERER_ac_B.Out_Modify_Factor_p = tmp * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:202' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S114>:197' */
                /* Transition: '<S114>:199' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:201' */
            }
        }
    }
    else
    {
        /* Transition: '<S114>:283' */
        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Offroad;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Offroad': '<S114>:242' */
        /* Transition: '<S114>:249' */
        ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init_m;

        /* Constant: '<S126>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) >
                0.0F)
        {
            /* Transition: '<S114>:251' */
            /* Transition: '<S114>:253' */
            ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta_o) + 1.0F) * ERER_ac_B.Modify_Factor_k;

            /* Transition: '<S114>:255' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) + 1.0F) <=
                0.0F)
            {
                /* Transition: '<S114>:250' */
                /* Transition: '<S114>:252' */
                ERER_ac_B.Modify_Factor_k = 0.0F;
                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                /* Transition: '<S114>:254' */
            }
        }
    }
}

#endif

/* Function for Chart: '<S79>/DRM_Stateflow_LP3' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Sport_l(const float32 *Vector_f, const float32 *Vector_h,
    const float32 *Vector_o)
{
    float32 tmp;

    /* UnitDelay: '<S79>/Unit Delay3' incorporates:
     *  Constant: '<S174>/Calib'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    /* During 'Sport': '<S162>:242' */
    if (ERER_ac_DW.UnitDelay3_DSTATE)
    {
        /* Transition: '<S162>:280' */
        /* Transition: '<S162>:264' */
        /* Transition: '<S162>:275' */
        /* Transition: '<S162>:175' */
        /* Transition: '<S162>:172' */
        ERER_ac_B.Out_Modify_Factor = 0.0F;
        ERER_ac_B.Modify_Factor = 0.0F;
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta = 0.0F;
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_InitDelay_p;

        /* Entry 'InitDelay': '<S162>:206' */
        ERER_ac_DW.DRM_delay = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S162>:263' */
        ERER_ac_B.Modify_Factor = ((*Vector_f) + (*Vector_o)) +
            ERER_ac_B.Out_Modify_Factor;
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:272' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Eco_b;

        /* Entry Internal 'Eco': '<S162>:228' */
        /* Transition: '<S162>:235' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:237' */
            /* Transition: '<S162>:239' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:241' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:236' */
                /* Transition: '<S162>:238' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:240' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S162>:267' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor + (*Vector_f);
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:260' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Auto;

        /* Entry Internal 'Auto': '<S162>:158' */
        /* Transition: '<S162>:165' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:167' */
            /* Transition: '<S162>:169' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:171' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:166' */
                /* Transition: '<S162>:168' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:170' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_OffRoadStat))
    {
        /* Transition: '<S162>:270' */
        ERER_ac_B.Modify_Factor = ((*Vector_f) + (*Vector_h)) +
            ERER_ac_B.Out_Modify_Factor;
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:269' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_OffRoad;

        /* Entry Internal 'OffRoad': '<S162>:189' */
        /* Transition: '<S162>:196' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:198' */
            /* Transition: '<S162>:200' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:202' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:197' */
                /* Transition: '<S162>:199' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:201' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_SportStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_CorsaStat))
    {
        /* Transition: '<S162>:337' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor;
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:338' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Corsa;

        /* Entry Internal 'Corsa': '<S162>:306' */
        /* Transition: '<S162>:313' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S162>:315' */
            /* Transition: '<S162>:317' */
            ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:319' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S162>:314' */
                /* Transition: '<S162>:316' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:318' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_SportStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_CorsaStat))
        {
            /* Transition: '<S162>:351' */
            ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor;
            ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S162>:352' */
            ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Custom;

            /* Entry Internal 'Custom': '<S162>:320' */
            /* Transition: '<S162>:327' */
            ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init;
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S162>:329' */
                /* Transition: '<S162>:331' */
                ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

                /* Transition: '<S162>:333' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S162>:328' */
                    /* Transition: '<S162>:330' */
                    ERER_ac_B.Modify_Factor = 0.0F;
                    ERER_ac_B.Out_Modify_Factor = 0.0F;

                    /* Transition: '<S162>:332' */
                }
            }
        }
    }

    /* End of UnitDelay: '<S79>/Unit Delay3' */
}

#endif

/* Function for Chart: '<S79>/DRM_Stateflow_LP3' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Corsa(const float32 *Vector_h, const float32 *Vector_o,
    const float32 *Vector_l)
{
    float32 tmp;

    /* During 'Corsa': '<S162>:306' */
    if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CorsaStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_SportStat))
    {
        /* Transition: '<S162>:340' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:341' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Sport_l;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S162>:242' */
        /* Transition: '<S162>:249' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S174>/Calib' */
            /* Transition: '<S162>:251' */
            /* Transition: '<S162>:253' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:255' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S162>:250' */
                /* Transition: '<S162>:252' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:254' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CorsaStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_CustomStat))
    {
        /* Transition: '<S162>:354' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:355' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Custom;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Custom': '<S162>:320' */
        /* Transition: '<S162>:327' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:329' */
            /* Transition: '<S162>:331' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:333' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:328' */
                /* Transition: '<S162>:330' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:332' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay3_DSTATE)
    {
        /* Transition: '<S162>:395' */
        /* Transition: '<S162>:396' */
        /* Transition: '<S162>:264' */
        /* Transition: '<S162>:275' */
        /* Transition: '<S162>:175' */
        /* Transition: '<S162>:172' */
        ERER_ac_B.Out_Modify_Factor = 0.0F;
        ERER_ac_B.Modify_Factor = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta = 0.0F;
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_InitDelay_p;

        /* Entry 'InitDelay': '<S162>:206' */
        ERER_ac_DW.DRM_delay = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CorsaStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_OffRoadStat))
    {
        /* Transition: '<S162>:403' */
        ERER_ac_B.Modify_Factor = ((*Vector_l) + (*Vector_h)) +
            ERER_ac_B.Out_Modify_Factor;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:404' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_OffRoad;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'OffRoad': '<S162>:189' */
        /* Transition: '<S162>:196' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:198' */
            /* Transition: '<S162>:200' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:202' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:197' */
                /* Transition: '<S162>:199' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:201' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CorsaStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S162>:406' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor + (*Vector_l);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:407' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S162>:158' */
        /* Transition: '<S162>:165' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Constant: '<S174>/Calib' */
            /* Transition: '<S162>:167' */
            /* Transition: '<S162>:169' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:171' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S162>:166' */
                /* Transition: '<S162>:168' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:170' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CorsaStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_EcoStat))
        {
            /* Transition: '<S162>:409' */
            ERER_ac_B.Modify_Factor = ((*Vector_l) + (*Vector_o)) +
                ERER_ac_B.Out_Modify_Factor;

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S162>:410' */
            ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Eco_b;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Eco': '<S162>:228' */
            /* Transition: '<S162>:235' */
            ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init;

            /* Constant: '<S174>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S162>:237' */
                /* Transition: '<S162>:239' */
                ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

                /* Transition: '<S162>:241' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S162>:236' */
                    /* Transition: '<S162>:238' */
                    ERER_ac_B.Modify_Factor = 0.0F;
                    ERER_ac_B.Out_Modify_Factor = 0.0F;

                    /* Transition: '<S162>:240' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S79>/DRM_Stateflow_LP3' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Custom(const float32 *Vector_h, const float32 *Vector_o,
    const float32 *Vector_ff)
{
    float32 tmp;

    /* During 'Custom': '<S162>:320' */
    if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CustomStat) &&
            (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
             CeHMIR_e_CorsaStat))
    {
        /* Transition: '<S162>:357' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:358' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Corsa;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Corsa': '<S162>:306' */
        /* Transition: '<S162>:313' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:315' */
            /* Transition: '<S162>:317' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:319' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:314' */
                /* Transition: '<S162>:316' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:318' */
            }
        }
    }
    else if (ERER_ac_DW.UnitDelay3_DSTATE)
    {
        /* Transition: '<S162>:400' */
        /* Transition: '<S162>:401' */
        /* Transition: '<S162>:396' */
        /* Transition: '<S162>:264' */
        /* Transition: '<S162>:275' */
        /* Transition: '<S162>:175' */
        /* Transition: '<S162>:172' */
        ERER_ac_B.Out_Modify_Factor = 0.0F;
        ERER_ac_B.Modify_Factor = 0.0F;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta = 0.0F;
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_InitDelay_p;

        /* Entry 'InitDelay': '<S162>:206' */
        ERER_ac_DW.DRM_delay = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CustomStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S162>:412' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:413' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Sport_l;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Sport': '<S162>:242' */
        /* Transition: '<S162>:249' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:251' */
            /* Transition: '<S162>:253' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:255' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:250' */
                /* Transition: '<S162>:252' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:254' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CustomStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_OffRoadStat))
    {
        /* Transition: '<S162>:415' */
        ERER_ac_B.Modify_Factor = ((*Vector_ff) + (*Vector_h)) +
            ERER_ac_B.Out_Modify_Factor;

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:416' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_OffRoad;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'OffRoad': '<S162>:189' */
        /* Transition: '<S162>:196' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:198' */
            /* Transition: '<S162>:200' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:202' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:197' */
                /* Transition: '<S162>:199' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:201' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CustomStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S162>:420' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor + (*Vector_ff);

        /* UnitDelay: '<S202>/Unit Delay' */
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:421' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Auto;

        /* UnitDelay: '<S202>/Unit Delay' */
        /* Entry Internal 'Auto': '<S162>:158' */
        /* Transition: '<S162>:165' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;

        /* Constant: '<S174>/Calib' */
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S162>:167' */
            /* Transition: '<S162>:169' */
            ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:171' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S162>:166' */
                /* Transition: '<S162>:168' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:170' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_CustomStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_EcoStat))
        {
            /* Transition: '<S162>:423' */
            ERER_ac_B.Modify_Factor = ((*Vector_ff) + (*Vector_o)) +
                ERER_ac_B.Out_Modify_Factor;

            /* UnitDelay: '<S202>/Unit Delay' */
            ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S162>:424' */
            ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Eco_b;

            /* UnitDelay: '<S202>/Unit Delay' */
            /* Entry Internal 'Eco': '<S162>:228' */
            /* Transition: '<S162>:235' */
            ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init;

            /* Constant: '<S174>/Calib' */
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S162>:237' */
                /* Transition: '<S162>:239' */
                ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

                /* Transition: '<S162>:241' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S162>:236' */
                    /* Transition: '<S162>:238' */
                    ERER_ac_B.Modify_Factor = 0.0F;
                    ERER_ac_B.Out_Modify_Factor = 0.0F;

                    /* Transition: '<S162>:240' */
                }
            }
        }
    }
}

#endif

/* Function for Chart: '<S79>/DRM_Stateflow_LP3' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_Eco_p(const float32 *Vector_f, const float32 *Vector_h,
    const float32 *Vector_o, const float32 *Vector_l, const float32 *Vector_ff)
{
    float32 tmp;

    /* UnitDelay: '<S79>/Unit Delay3' incorporates:
     *  Constant: '<S174>/Calib'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    /* During 'Eco': '<S162>:228' */
    if (ERER_ac_DW.UnitDelay3_DSTATE)
    {
        /* Transition: '<S162>:214' */
        /* Transition: '<S162>:172' */
        ERER_ac_B.Out_Modify_Factor = 0.0F;
        ERER_ac_B.Modify_Factor = 0.0F;
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta = 0.0F;
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_InitDelay_p;

        /* Entry 'InitDelay': '<S162>:206' */
        ERER_ac_DW.DRM_delay = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S162>:211' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - ((*Vector_o) + (*
            Vector_f));
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:213' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Sport_l;

        /* Entry Internal 'Sport': '<S162>:242' */
        /* Transition: '<S162>:249' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:251' */
            /* Transition: '<S162>:253' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:255' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:250' */
                /* Transition: '<S162>:252' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:254' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_OffRoadStat))
    {
        /* Transition: '<S162>:177' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - ((*Vector_o) + (*
            Vector_h));
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:178' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_OffRoad;

        /* Entry Internal 'OffRoad': '<S162>:189' */
        /* Transition: '<S162>:196' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:198' */
            /* Transition: '<S162>:200' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:202' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:197' */
                /* Transition: '<S162>:199' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:201' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S162>:220' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - (*Vector_o);
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:224' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Auto;

        /* Entry Internal 'Auto': '<S162>:158' */
        /* Transition: '<S162>:165' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:167' */
            /* Transition: '<S162>:169' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:171' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:166' */
                /* Transition: '<S162>:168' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:170' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_EcoStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_CorsaStat))
    {
        /* Transition: '<S162>:387' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - ((*Vector_o) + (*
            Vector_l));
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:388' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Corsa;

        /* Entry Internal 'Corsa': '<S162>:306' */
        /* Transition: '<S162>:313' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S162>:315' */
            /* Transition: '<S162>:317' */
            ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:319' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S162>:314' */
                /* Transition: '<S162>:316' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:318' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_EcoStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_CustomStat))
        {
            /* Transition: '<S162>:392' */
            ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - ((*Vector_o)
                + (*Vector_ff));
            ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S162>:393' */
            ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Custom;

            /* Entry Internal 'Custom': '<S162>:320' */
            /* Transition: '<S162>:327' */
            ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init;
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S162>:329' */
                /* Transition: '<S162>:331' */
                ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

                /* Transition: '<S162>:333' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S162>:328' */
                    /* Transition: '<S162>:330' */
                    ERER_ac_B.Modify_Factor = 0.0F;
                    ERER_ac_B.Out_Modify_Factor = 0.0F;

                    /* Transition: '<S162>:332' */
                }
            }
        }
    }

    /* End of UnitDelay: '<S79>/Unit Delay3' */
}

#endif

/* Function for Chart: '<S79>/DRM_Stateflow_LP3' */
#if Rte_SysCon_Variant_ERER_1

static void ERER_ac_OffRoad(const float32 *Vector_f, const float32 *Vector_h,
    const float32 *Vector_o, const float32 *Vector_l, const float32 *Vector_ff)
{
    float32 tmp;

    /* UnitDelay: '<S79>/Unit Delay3' incorporates:
     *  Constant: '<S174>/Calib'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    /* During 'OffRoad': '<S162>:189' */
    if (ERER_ac_DW.UnitDelay3_DSTATE)
    {
        /* Transition: '<S162>:262' */
        /* Transition: '<S162>:275' */
        /* Transition: '<S162>:175' */
        /* Transition: '<S162>:172' */
        ERER_ac_B.Out_Modify_Factor = 0.0F;
        ERER_ac_B.Modify_Factor = 0.0F;
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
        ERER_ac_B.VehDist_Delta = 0.0F;
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_InitDelay_p;

        /* Entry 'InitDelay': '<S162>:206' */
        ERER_ac_DW.DRM_delay = 0U;
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_OffRoadStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_SportStat))
    {
        /* Transition: '<S162>:274' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - ((*Vector_h) + (*
            Vector_f));
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:279' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Sport_l;

        /* Entry Internal 'Sport': '<S162>:242' */
        /* Transition: '<S162>:249' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:251' */
            /* Transition: '<S162>:253' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:255' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:250' */
                /* Transition: '<S162>:252' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:254' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_OffRoadStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_EcoStat))
    {
        /* Transition: '<S162>:261' */
        ERER_ac_B.Modify_Factor = ((*Vector_h) + (*Vector_o)) +
            ERER_ac_B.Out_Modify_Factor;
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:281' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Eco_b;

        /* Entry Internal 'Eco': '<S162>:228' */
        /* Transition: '<S162>:235' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:237' */
            /* Transition: '<S162>:239' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:241' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:236' */
                /* Transition: '<S162>:238' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:240' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_OffRoadStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_AutoStat))
    {
        /* Transition: '<S162>:265' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor + (*Vector_h);
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:258' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Auto;

        /* Entry Internal 'Auto': '<S162>:158' */
        /* Transition: '<S162>:165' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) > 0.0F)
        {
            /* Transition: '<S162>:167' */
            /* Transition: '<S162>:169' */
            ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                ERER_ac_B.VehDist_Delta) + 1.0F) * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:171' */
        }
        else
        {
            if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F) <=
                    0.0F)
            {
                /* Transition: '<S162>:166' */
                /* Transition: '<S162>:168' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:170' */
            }
        }
    }
    else if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_OffRoadStat) &&
             (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
              CeHMIR_e_CorsaStat))
    {
        /* Transition: '<S162>:371' */
        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - ((*Vector_h) + (*
            Vector_l));
        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

        /* Transition: '<S162>:372' */
        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Corsa;

        /* Entry Internal 'Corsa': '<S162>:306' */
        /* Transition: '<S162>:313' */
        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
            ERER_ac_DW.VehDist_Init;
        tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
        if (tmp > 0.0F)
        {
            /* Transition: '<S162>:315' */
            /* Transition: '<S162>:317' */
            ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

            /* Transition: '<S162>:319' */
        }
        else
        {
            if (tmp <= 0.0F)
            {
                /* Transition: '<S162>:314' */
                /* Transition: '<S162>:316' */
                ERER_ac_B.Modify_Factor = 0.0F;
                ERER_ac_B.Out_Modify_Factor = 0.0F;

                /* Transition: '<S162>:318' */
            }
        }
    }
    else
    {
        if ((((uint32)ERER_ac_DW.UnitDelay5_DSTATE) == CeHMIR_e_OffRoadStat) &&
                (((uint32)ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                 CeHMIR_e_CustomStat))
        {
            /* Transition: '<S162>:374' */
            ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor - ((*Vector_h)
                + (*Vector_ff));
            ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

            /* Transition: '<S162>:375' */
            ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Custom;

            /* Entry Internal 'Custom': '<S162>:320' */
            /* Transition: '<S162>:327' */
            ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                ERER_ac_DW.VehDist_Init;
            tmp = ((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) + 1.0F;
            if (tmp > 0.0F)
            {
                /* Transition: '<S162>:329' */
                /* Transition: '<S162>:331' */
                ERER_ac_B.Out_Modify_Factor = tmp * ERER_ac_B.Modify_Factor;

                /* Transition: '<S162>:333' */
            }
            else
            {
                if (tmp <= 0.0F)
                {
                    /* Transition: '<S162>:328' */
                    /* Transition: '<S162>:330' */
                    ERER_ac_B.Modify_Factor = 0.0F;
                    ERER_ac_B.Out_Modify_Factor = 0.0F;

                    /* Transition: '<S162>:332' */
                }
            }
        }
    }

    /* End of UnitDelay: '<S79>/Unit Delay3' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ERER_1

FUNC(void, ERER_CODE) ERER_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_ERER_1

    uint16 j;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeHVTR_e_HV_BatCntctrStat tmpRead;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeBRKR_e_BrkPdl_Stat tmpRead_1;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeHMIR_e_VldtdTransRngSt_ShifterPOS tmpRead_2;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeOBCR_e_ChargingSystemSts tmpRead_7;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 tmpRead_9;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_b;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_d;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_f;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_h;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_i;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_j;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean tmpRead_k;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_l;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_m;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts tmpRead_n;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 tmpRead_o;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 tmpRead_p;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeERER_l_EstRan;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeBPCR_q_FullAm;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_AND_nv;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_Comparison4_d;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_AND_hl;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_AND_k1;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_TmpSignalConversionAtVePLTR_b_InFiel;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_Add;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_Sum_g;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_Switch12;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_Switch9;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_Sum1_i2;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_Sum2_p;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_Sum_l;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_Sum_pg;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_AND_cke;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_Switch_b;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_Switch1_i;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_Vector_px;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeENGR_Pct_Fuel;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeENGR_V_FuelCo;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_Sum2;

#endif

#if Rte_SysCon_Variant_ERER_1

    uint16 rtb_Summation_bp;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_Sum2_f;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_Vector_c;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeSCPR_Pct_Est_;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeHPMR_e_HybSysState rtb_TmpSignalConversionAtVeHPMR_e_HybSys;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeERER_e_EstRangeTrend rtb_VeERER_e_RTI;

#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTAIR_e_RearDefrostSts rtb_TmpSignalConversionAtVeTAIR_e_RearDe;

#endif

#if Rte_SysCon_Variant_ERER_1

    TePLTR_e_HiBmLvr_Stat rtb_TmpSignalConversionAtVePLTR_e_HiBmLv;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeTRIR_e_ClimateSts rtb_TmpSignalConversionAtVeTRIR_e_HSW_St;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 TmpSignalConversionAtVeERER_k_Modify_F_f;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 TmpSignalConversionAtVeERER_l_VehDist__a;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean Merge_1_d;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean Merge_8_d;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean Merge_4_n;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean Merge_10_n;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean Merge_12_g;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean Merge_6_p;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean Merge_14_c;

#endif

#if Rte_SysCon_Variant_ERER_1

    float32 Vector_de;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 rtb_TmpSignalConversionAtVeTRIR;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 tmpRead_q;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 tmpRead_r;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 tmpRead_s;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 tmpRead_t;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 tmpRead_u;

#endif

#if Rte_SysCon_Variant_ERER_1

    sint32 tmpRead_v;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeDMDR_e_DrvMd tmp;

#endif

#if Rte_SysCon_Variant_ERER_1

    TeHMIR_e_TerrainModeStat tmp_0;

#endif

#if Rte_SysCon_Variant_ERER_1

    TePMDR_e_PowerMode UnitDelay4_DSTATE_tmp;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_ERER_1

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_ERER_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Inport: '<Root>/VeHMIR_e_ShifterPOS' */
    (void)Rte_Read_VeHMIR_e_ShifterPOS_Value(&tmpRead_2);

    /* Outputs for Function Call SubSystem: '<Root>/ERER_MedTEH' */
    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_PropSy);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S1>/VeHPMR_e_HybSysSt' incorporates:
     *  Inport: '<Root>/VeHPMR_e_HybSysSt'
     */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value
        (&rtb_TmpSignalConversionAtVeHPMR_e_HybSys);

    /* SignalConversion generated from: '<S1>/VeBPCR_q_FullAmpHrCap' incorporates:
     *  Inport: '<Root>/VeBPCR_q_FullAmpHrCap'
     */
    (void)Rte_Read_VeBPCR_q_FullAmpHrCap_Value
        (&rtb_TmpSignalConversionAtVeBPCR_q_FullAm);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HVBatSOH' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HVBatSOH'
     */
    (void)Rte_Read_VeBPCR_Pct_HVBatSOH_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa);

    /* SignalConversion generated from: '<S1>/VePLTR_b_InFieldMode' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&rtb_TmpSignalConversionAtVePLTR_b_InFiel);

    /* SignalConversion generated from: '<S1>/VeERER_l_EstRange_EEPROM_Read_Read' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_EstRange_EEPROM_Read_write'
     */
    rtb_TmpSignalConversionAtVeERER_l_EstRan =
        Rte_IrvRead_ERER_MedTEH_VeERER_l_EstRange_EEPROM_Read_write_IRV();

    /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Est_SOC' incorporates:
     *  Inport: '<Root>/VeSCPR_Pct_Est_SOC'
     */
    (void)Rte_Read_VeSCPR_Pct_Est_SOC_Value
        (&rtb_TmpSignalConversionAtVeSCPR_Pct_Est_);

    /* SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value
        (&ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu);

    /* SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&rtb_TmpSignalConversionAtVePMDR_e_PMM_Po);

    /* SignalConversion generated from: '<S1>/VeERER_k_Modify_Factor_Wakeup_Read' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_k_Modify_Factor_Wakeup_write'
     */
    TmpSignalConversionAtVeERER_k_Modify_F_f =
        Rte_IrvRead_ERER_MedTEH_VeERER_k_Modify_Factor_Wakeup_write_IRV();

    /* SignalConversion generated from: '<S1>/VeERER_l_VehDist_Delta_Wakeup_Read' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_VehDist_Delta_Wakeup_write'
     */
    TmpSignalConversionAtVeERER_l_VehDist__a =
        Rte_IrvRead_ERER_MedTEH_VeERER_l_VehDist_Delta_Wakeup_write_IRV();

    /* SignalConversion generated from: '<S1>/VeHMIR_e_TerrainModeStat' incorporates:
     *  Inport: '<Root>/VeHMIR_e_TerrainModeStat'
     */
    (void)Rte_Read_VeHMIR_e_TerrainModeStat_Value
        (&ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod);

    /* SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts' incorporates:
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value
        (&ERER_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt);

    /* SignalConversion generated from: '<S1>/VeENGR_Pct_FuelLevel2' incorporates:
     *  Inport: '<Root>/VeENGR_Pct_FuelLevel2'
     */
    (void)Rte_Read_VeENGR_Pct_FuelLevel2_Value
        (&rtb_TmpSignalConversionAtVeENGR_Pct_Fuel);

    /* SignalConversion generated from: '<S1>/VeESSR_b_Hyb_ProducingTorque' incorporates:
     *  Inport: '<Root>/VeESSR_b_Hyb_ProducingTorque'
     */
    (void)Rte_Read_VeESSR_b_Hyb_ProducingTorque_Value
        (&rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr);

    /* SignalConversion generated from: '<S1>/VeENGR_V_FuelConsumption' incorporates:
     *  Inport: '<Root>/VeENGR_V_FuelConsumption'
     */
    (void)Rte_Read_VeENGR_V_FuelConsumption_Value
        (&rtb_TmpSignalConversionAtVeENGR_V_FuelCo);

    /* SignalConversion generated from: '<S1>/VeTRIR_e_HSW_Sts' incorporates:
     *  Inport: '<Root>/VeTRIR_e_HSW_Sts'
     */
    (void)Rte_Read_VeTRIR_e_HSW_Sts_Value
        (&rtb_TmpSignalConversionAtVeTRIR_e_HSW_St);

    /* SignalConversion generated from: '<S1>/VePLTR_e_HiBmLvr_Stat' incorporates:
     *  Inport: '<Root>/VePLTR_e_HiBmLvr_Stat'
     */
    (void)Rte_Read_VePLTR_e_HiBmLvr_Stat_Value
        (&rtb_TmpSignalConversionAtVePLTR_e_HiBmLv);

    /* SignalConversion generated from: '<S1>/VeTAIR_e_RearDefrostSts' incorporates:
     *  Inport: '<Root>/VeTAIR_e_RearDefrostSts'
     */
    (void)Rte_Read_VeTAIR_e_RearDefrostSts_Value
        (&rtb_TmpSignalConversionAtVeTAIR_e_RearDe);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Logic: '<S331>/Logical2' incorporates:
     *  Constant: '<S337>/Constant'
     *  Constant: '<S338>/Constant'
     *  Constant: '<S341>/Calib'
     *  Inport: '<Root>/VeHMIR_e_ShifterPOS'
     *  RelationalOperator: '<S331>/Comparison3'
     *  RelationalOperator: '<S331>/Comparison4'
     *  RelationalOperator: '<S331>/Comparison5'
     */
    VeERER_b_AllowRangeReset = (((((uint32)tmpRead_2) == CeHMIR_e_ShifterPosPark)
        && (((uint32)rtb_TmpSignalConversionAtVeHPMR_e_HybSys) ==
            CeHPMR_e_INV_ENABLED)) && (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd <=
        KeERER_v_VehSpdThrshld));

    /* Outputs for Atomic SubSystem: '<S331>/EdgeRising' */
    /* Logic: '<S336>/AND' incorporates:
     *  Logic: '<S336>/OR1'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    rtb_AND_nv = ((VeERER_b_AllowRangeReset) && (!ERER_ac_DW.UnitDelay_DSTATE_kj));

    /* Update for UnitDelay: '<S336>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_kj = VeERER_b_AllowRangeReset;

    /* End of Outputs for SubSystem: '<S331>/EdgeRising' */

    /* If: '<S331>/If2' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    if (VeERER_b_AllowRangeReset)
    {
        (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value(&tmpRead_1);

        /* Outputs for IfAction SubSystem: '<S331>/If Action Subsystem' incorporates:
         *  ActionPort: '<S339>/Action Port'
         */
        /* RelationalOperator: '<S339>/Comparison4' incorporates:
         *  Constant: '<S343>/Constant'
         *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
         */
        rtb_Comparison4_d = (((uint32)tmpRead_1) == CeBRKR_e_BrkApplied);

        /* Chart: '<S339>/Stateflow Chart1' */
        /* Gateway: ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/If Action
           Subsystem/Stateflow
           Chart1 */
        /* During: ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/If Action
           Subsystem/Stateflow
           Chart1 */
        if (((uint32)ERER_ac_DW.is_active_c1_ERER_ac) == 0U)
        {
            /* Entry: ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/If Action
               Subsystem/Stateflow
               Chart1 */
            ERER_ac_DW.is_active_c1_ERER_ac = 1U;

            /* Entry Internal: ERER_MedTEH/EREC/Inital_Outputs/Range_Reset_Logic/If Action
               Subsystem/Stateflow
               Chart1 */
            /* Transition: '<S344>:45' */
            ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Entry_State;
        }
        else
        {
            guard1 = false;
            guard2 = false;
            switch (ERER_ac_DW.is_c1_ERER_ac)
            {
              case ERER_ac_IN_Entry_State:
                /* During 'Entry_State': '<S344>:57' */
                if (rtb_Comparison4_d)
                {
                    /* Transition: '<S344>:48' */
                    ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_s1;
                }
                break;

              case ERER_ac_IN_Exit_State:
                VeERER_b_SetRangeto80miles = true;

                /* During 'Exit_State': '<S344>:32' */
                if (rtb_AND_nv)
                {
                    /* Transition: '<S344>:70' */
                    /* Transition: '<S344>:58' */
                    /* Transition: '<S344>:66' */
                    /* Transition: '<S344>:68' */
                    /* Transition: '<S344>:44' */
                    /* Transition: '<S344>:37' */
                    /* Transition: '<S344>:51' */
                    /* Transition: '<S344>:40' */
                    /* Transition: '<S344>:47' */
                    /* Transition: '<S344>:46' */
                    ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Entry_State;
                }
                break;

              case ERER_ac_IN_s1:
                /* During 's1': '<S344>:56' */
                if (rtb_AND_nv)
                {
                    /* Transition: '<S344>:41' */
                    /* Transition: '<S344>:47' */
                    /* Transition: '<S344>:46' */
                    ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Entry_State;
                }
                else
                {
                    if (!rtb_Comparison4_d)
                    {
                        /* Transition: '<S344>:39' */
                        ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_s2;

                        /* Entry 's2': '<S344>:33' */
                        ERER_ac_DW.s2_count = 1U;
                    }
                }
                break;

              case ERER_ac_IN_s2:
                /* During 's2': '<S344>:33' */
                if (rtb_AND_nv)
                {
                    /* Transition: '<S344>:49' */
                    /* Transition: '<S344>:51' */
                    guard1 = true;
                }
                else if (rtb_Comparison4_d && (((sint32)ERER_ac_DW.s2_count) >=
                          50))
                {
                    /* Transition: '<S344>:36' */
                    /* Exit 's2': '<S344>:33' */
                    ERER_ac_DW.s2_count = 0U;
                    ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_s3;
                }
                else if ((((sint32)ERER_ac_DW.s2_count) > 100) ||
                         (rtb_Comparison4_d && (((sint32)ERER_ac_DW.s2_count) <
                           50)))
                {
                    /* Transition: '<S344>:50' */
                    guard1 = true;
                }
                else
                {
                    ERER_ac_DW.s2_count = (uint16)((sint32)(((sint32)
                        ERER_ac_DW.s2_count) + 1));
                }
                break;

              case ERER_ac_IN_s3:
                /* During 's3': '<S344>:34' */
                if (rtb_AND_nv)
                {
                    /* Transition: '<S344>:43' */
                    /* Transition: '<S344>:37' */
                    /* Transition: '<S344>:51' */
                    /* Transition: '<S344>:40' */
                    /* Transition: '<S344>:47' */
                    /* Transition: '<S344>:46' */
                    ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Entry_State;
                }
                else
                {
                    if (!rtb_Comparison4_d)
                    {
                        /* Transition: '<S344>:64' */
                        ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_s4;

                        /* Entry 's4': '<S344>:35' */
                        ERER_ac_DW.s2_count = 1U;
                    }
                }
                break;

              case ERER_ac_IN_s4:
                /* During 's4': '<S344>:35' */
                if (rtb_AND_nv)
                {
                    /* Transition: '<S344>:67' */
                    /* Transition: '<S344>:68' */
                    guard2 = true;
                }
                else if (rtb_Comparison4_d && (((sint32)ERER_ac_DW.s2_count) >=
                          50))
                {
                    /* Transition: '<S344>:38' */
                    /* Exit 's4': '<S344>:35' */
                    ERER_ac_DW.s2_count = 0U;
                    ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_s5;
                }
                else if ((((sint32)ERER_ac_DW.s2_count) > 100) ||
                         (rtb_Comparison4_d && (((sint32)ERER_ac_DW.s2_count) <
                           50)))
                {
                    /* Transition: '<S344>:65' */
                    guard2 = true;
                }
                else
                {
                    ERER_ac_DW.s2_count = (uint16)((sint32)(((sint32)
                        ERER_ac_DW.s2_count) + 1));
                }
                break;

              default:
                /* During 's5': '<S344>:31' */
                if (rtb_AND_nv)
                {
                    /* Transition: '<S344>:42' */
                    /* Transition: '<S344>:66' */
                    /* Transition: '<S344>:68' */
                    /* Transition: '<S344>:44' */
                    /* Transition: '<S344>:37' */
                    /* Transition: '<S344>:51' */
                    /* Transition: '<S344>:40' */
                    /* Transition: '<S344>:47' */
                    /* Transition: '<S344>:46' */
                    ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Entry_State;
                }
                else
                {
                    if (!rtb_Comparison4_d)
                    {
                        /* Transition: '<S344>:69' */
                        ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Exit_State;

                        /* Entry 'Exit_State': '<S344>:32' */
                        VeERER_b_SetRangeto80miles = true;
                    }
                }
                break;
            }

            if (guard2)
            {
                /* Transition: '<S344>:44' */
                /* Transition: '<S344>:37' */
                /* Transition: '<S344>:51' */
                /* Transition: '<S344>:40' */
                /* Transition: '<S344>:47' */
                /* Transition: '<S344>:46' */
                /* Exit 's4': '<S344>:35' */
                ERER_ac_DW.s2_count = 0U;
                ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Entry_State;
            }

            if (guard1)
            {
                /* Transition: '<S344>:40' */
                /* Transition: '<S344>:47' */
                /* Transition: '<S344>:46' */
                /* Exit 's2': '<S344>:33' */
                ERER_ac_DW.s2_count = 0U;
                ERER_ac_DW.is_c1_ERER_ac = ERER_ac_IN_Entry_State;
            }
        }

        /* End of Chart: '<S339>/Stateflow Chart1' */
        /* End of Outputs for SubSystem: '<S331>/If Action Subsystem' */
    }

    /* End of If: '<S331>/If2' */

    /* Logic: '<S331>/Logical3' incorporates:
     *  Constant: '<S340>/Calib'
     */
    rtb_AND_nv = ((KeERER_b_AllowRangeReset) && (VeERER_b_SetRangeto80miles));

    /* Outputs for Atomic SubSystem: '<S335>/Signal Latch On' */
    /* Logic: '<S375>/OR2' incorporates:
     *  UnitDelay: '<S375>/Unit Delay'
     */
    ERER_ac_DW.UnitDelay_DSTATE_gx = (rtb_AND_nv ||
        (ERER_ac_DW.UnitDelay_DSTATE_gx));

    /* End of Outputs for SubSystem: '<S335>/Signal Latch On' */

    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S372>/Calib'
     *  Switch: '<S335>/Switch2'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    if (KeERER_b_WHperKMinit_OvrdEnbl)
    {
        /* Switch: '<S335>/Switch' incorporates:
         *  Constant: '<S371>/Calib'
         */
        VeERER_F_WHperKM_DriveAvgStored = KeERER_F_WHperKMinit_Ovrd;
    }
    else
    {
        if (ERER_ac_DW.UnitDelay_DSTATE_gx)
        {
            /* Switch: '<S335>/Switch2' incorporates:
             *  Constant: '<S373>/Calib'
             */
            VeERER_F_WHperKM_DriveAvgStored = KeERER_f_WhrpKMResetVal;
        }
        else
        {
            /* Switch: '<S335>/Switch2' incorporates:
             *  SignalConversion generated from: '<S1>/VeERER_F_WHrpKm_EEPROM_Read_Read'
             *  SignalConversion generated from: '<S3>/VeERER_F_WHrpKm_EEPROM_Read_write'
             */
            VeERER_F_WHperKM_DriveAvgStored =
                Rte_IrvRead_ERER_MedTEH_VeERER_F_WHrpKm_EEPROM_Read_write_IRV();
        }

        /* Outputs for Atomic SubSystem: '<S335>/OpenInterval' */
        /* Switch: '<S335>/Switch1' incorporates:
         *  Constant: '<S335>/Constant Value'
         *  Constant: '<S335>/Constant Value1'
         *  Logic: '<S374>/Logical Operator'
         *  RelationalOperator: '<S374>/Relatonal Operator'
         *  RelationalOperator: '<S374>/Relatonal Operator1'
         */
        if ((VeERER_F_WHperKM_DriveAvgStored <= 100.0F) ||
                (VeERER_F_WHperKM_DriveAvgStored >= 500.0F))
        {
            /* Switch: '<S335>/Switch' incorporates:
             *  Constant: '<S370>/Calib'
             */
            VeERER_F_WHperKM_DriveAvgStored = KeERER_F_WHperKMinit;
        }

        /* End of Switch: '<S335>/Switch1' */
        /* End of Outputs for SubSystem: '<S335>/OpenInterval' */
    }

    /* End of Switch: '<S335>/Switch' */

    /* Outputs for Atomic SubSystem: '<S188>/EdgeRising1' */
    /* Logic: '<S201>/OR1' incorporates:
     *  UnitDelay: '<S201>/Unit Delay'
     */
    rtb_Comparison4_d = !ERER_ac_DW.UnitDelay_DSTATE_ca;

    /* Update for UnitDelay: '<S201>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_ca = rtb_AND_nv;

    /* Outputs for Atomic SubSystem: '<S188>/IntegratorK Reset Enabled Limited' */
    /* Switch: '<S202>/Switch' incorporates:
     *  Logic: '<S201>/AND'
     */
    if (rtb_AND_nv && rtb_Comparison4_d)
    {
        /* Switch: '<S202>/Switch' incorporates:
         *  Constant: '<S188>/Constant Value2'
         */
        rtb_Sum2 = 0.0F;
    }
    else
    {
        /* Switch: '<S202>/Switch' incorporates:
         *  Constant: '<S188>/Constant Value1'
         *  Constant: '<S188>/Constant Value7'
         *  Product: '<S188>/Product3'
         *  Product: '<S202>/Multiplication'
         *  Sum: '<S202>/Sum//Sub'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        rtb_Sum2 = ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd / 3600.0F) * 0.1F)
            + ERER_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S202>/Switch' */
    /* End of Outputs for SubSystem: '<S188>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S202>/Limiter' */
    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S203>/Calib'
     *  RelationalOperator: '<S204>/Relational Operator'
     */
    if (KeERER_l_VehDistanceMax < rtb_Sum2)
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = KeERER_l_VehDistanceMax;
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S188>/Constant Value'
     *  RelationalOperator: '<S204>/Relational Operator1'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    if (rtb_Sum2 > -100.0F)
    {
        ERER_ac_DW.UnitDelay_DSTATE_h = rtb_Sum2;
    }
    else
    {
        ERER_ac_DW.UnitDelay_DSTATE_h = -100.0F;
    }

    /* End of Switch: '<S204>/Switch' */
    /* End of Outputs for SubSystem: '<S202>/Limiter' */
    /* End of Outputs for SubSystem: '<S188>/IntegratorK Reset Enabled Limited' */

    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S334>/EdgeRising' */
    /* Logic: '<S369>/AND' incorporates:
     *  Logic: '<S369>/OR1'
     *  UnitDelay: '<S369>/Unit Delay'
     */
    rtb_Comparison4_d = !ERER_ac_DW.UnitDelay_DSTATE_hk;

    /* Update for UnitDelay: '<S369>/Unit Delay' incorporates:
     *  Constant: '<S12>/TRUE Constant'
     */
    ERER_ac_DW.UnitDelay_DSTATE_hk = true;

    /* End of Outputs for SubSystem: '<S334>/EdgeRising' */

    /* Switch: '<S334>/Switch1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S334>/Constant Value'
     *  Constant: '<S334>/Constant Value1'
     *  Logic: '<S334>/OR'
     *  MinMax: '<S334>/Minimum'
     *  Sum: '<S334>/Summation'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    if (rtb_Comparison4_d)
    {
        ERER_ac_DW.UnitDelay_DSTATE_a = 0U;
    }
    else if (KeERER_n_EEROMInitDelay < ((uint16)(((uint32)
                ERER_ac_DW.UnitDelay_DSTATE_a) + 1U)))
    {
        /* MinMax: '<S334>/Minimum' incorporates:
         *  Constant: '<S330>/Calib'
         */
        ERER_ac_DW.UnitDelay_DSTATE_a = KeERER_n_EEROMInitDelay;
    }
    else
    {
        /* MinMax: '<S334>/Minimum' incorporates:
         *  Constant: '<S334>/Constant Value'
         *  Sum: '<S334>/Summation'
         *  UnitDelay: '<S334>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay_DSTATE_a = (uint16)(((uint32)
            ERER_ac_DW.UnitDelay_DSTATE_a) + 1U);
    }

    /* End of Switch: '<S334>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ERER_MedTEH' */

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_7);

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/ERER_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Outputs for Atomic SubSystem: '<S12>/Turn On Delay Sample' */
    /* Logic: '<S334>/AND' incorporates:
     *  Constant: '<S330>/Calib'
     *  RelationalOperator: '<S334>/Greater  Than'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    VeERER_b_EEPROM_Init_Compleate = (ERER_ac_DW.UnitDelay_DSTATE_a >=
        KeERER_n_EEROMInitDelay);

    /* End of Outputs for SubSystem: '<S12>/Turn On Delay Sample' */

    /* RelationalOperator: '<S4>/Equal3' incorporates:
     *  Constant: '<S6>/Constant'
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    VeERER_b_BatCntctrClosed = (((uint32)tmpRead) == CeHVTR_e_Closed);

    /* RelationalOperator: '<S4>/Equal1' incorporates:
     *  Constant: '<S7>/Constant'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     */
    rtb_Comparison4_d = (((uint32)tmpRead_7) == CeOBCR_e_ChargingSts_Charging);

    /* Outputs for Atomic SubSystem: '<S4>/State' */
    /* Chart: '<S13>/EstRange_State' incorporates:
     *  Constant: '<S13>/Constant Value'
     *  Constant: '<S377>/Calib'
     *  Constant: '<S378>/Calib'
     *  Constant: '<S379>/Calib'
     *  Constant: '<S380>/Calib'
     *  Product: '<S13>/Product1'
     */
    /* Gateway: ERER_MedTEH/EREC/State/EstRange_State */
    /* During: ERER_MedTEH/EREC/State/EstRange_State */
    if (((uint32)ERER_ac_DW.is_active_c35_ERER_ac) == 0U)
    {
        /* Entry: ERER_MedTEH/EREC/State/EstRange_State */
        ERER_ac_DW.is_active_c35_ERER_ac = 1U;

        /* Entry Internal: ERER_MedTEH/EREC/State/EstRange_State */
        /* Transition: '<S376>:15' */
        ERER_ac_DW.is_c35_ERER_ac = ERER_ac_IN_DetermineContactorsClosed;

        /* Entry 'DetermineContactorsClosed': '<S376>:8' */
        VeERER_b_EstRangeSNA = true;
        VeERER_b_EstRangePSA = false;
        VeERER_b_EstRangeCharge = false;
        VeERER_b_InitalizeCapacity = false;
        VeERER_b_EstRangeInit = false;
    }
    else
    {
        switch (ERER_ac_DW.is_c35_ERER_ac)
        {
          case ERER_ac_IN_Charging:
            VeERER_b_EstRangeCharge = true;
            VeERER_b_EstRangePSA = false;
            VeERER_b_EstRangeSNA = false;
            VeERER_b_EstRangeInit = true;

            /* During 'Charging': '<S376>:6' */
            if (!rtb_Comparison4_d)
            {
                /* Transition: '<S376>:22' */
                /* Exit 'Charging': '<S376>:6' */
                VeERER_b_TransitionFromCharge = true;
                ERER_ac_DW.is_c35_ERER_ac =
                    ERER_ac_IN_DetermineInitalizationMode;

                /* Entry 'DetermineInitalizationMode': '<S376>:7' */
                VeERER_Cnt_RangeInitalizationDelay = 0U;
                VeERER_b_EstRangeInit = true;
                VeERER_b_EstRangeSNA = false;
            }
            else
            {
                ERER_ac_B.VeERER_F_WHrpKM_ChargingSF =
                    VeERER_F_EEPROM_WhperKM_Write;
            }
            break;

          case ERER_ac_IN_DetermineContactorsClosed:
            VeERER_b_EstRangeSNA = true;
            VeERER_b_EstRangePSA = false;
            VeERER_b_EstRangeCharge = false;
            VeERER_b_InitalizeCapacity = false;
            VeERER_b_EstRangeInit = false;

            /* During 'DetermineContactorsClosed': '<S376>:8' */
            if ((VeERER_b_BatCntctrClosed) && (VeERER_b_EEPROM_Init_Compleate))
            {
                /* Transition: '<S376>:16' */
                ERER_ac_DW.is_c35_ERER_ac = ERER_ac_IN_InitalizeCapacity;

                /* Entry 'InitalizeCapacity': '<S376>:5' */
                VeERER_b_InitalizeCapacity = true;
                ERER_ac_B.VeERER_F_WHrpKM_ChargingSF =
                    VeERER_F_EEPROM_WhperKM_Write;
            }
            break;

          case ERER_ac_IN_DetermineInitalizationMode:
            VeERER_b_EstRangeInit = true;
            VeERER_b_EstRangeSNA = false;

            /* During 'DetermineInitalizationMode': '<S376>:7' */
            if (rtb_Comparison4_d)
            {
                /* Transition: '<S376>:18' */
                /* Exit 'DetermineInitalizationMode': '<S376>:7' */
                VeERER_Cnt_RangeInitalizationDelay = 0U;
                ERER_ac_DW.is_c35_ERER_ac = ERER_ac_IN_Charging;

                /* Entry 'Charging': '<S376>:6' */
                VeERER_b_TransitionFromCharge = false;
                VeERER_b_EstRangeCharge = true;
                VeERER_b_EstRangePSA = false;
                VeERER_b_EstRangeSNA = false;
                VeERER_b_EstRangeInit = true;
            }
            else
            {
                /* . */
                if (VeERER_Cnt_RangeInitalizationDelay >=
                        KeERER_Cnt_RangeInitalizationDelayTrshld)
                {
                    /* Transition: '<S376>:19' */
                    /* Exit 'DetermineInitalizationMode': '<S376>:7' */
                    VeERER_Cnt_RangeInitalizationDelay = 0U;
                    ERER_ac_DW.is_c35_ERER_ac = ERER_ac_IN_PSA;

                    /* Entry 'PSA': '<S376>:4' */
                    VeERER_b_EstRangePSA = true;
                    VeERER_b_EstRangeSNA = false;
                    VeERER_b_EstRangeCharge = false;
                    VeERER_b_EstRangeInit = true;
                    VeERER_b_TransitionFromCharge = false;

                    /* Entry Internal 'PSA': '<S376>:4' */
                    /* Transition: '<S376>:9' */
                    ERER_ac_DW.is_PSA = ERER_ac_IN_Idle;

                    /* Entry 'Idle': '<S376>:2' */
                    VeERER_b_EstRange_Idle = true;
                    VeERER_Cnt_ZeroSpdCnt = 1U;
                }
                else
                {
                    VeERER_Cnt_RangeInitalizationDelay = (uint16)((sint32)
                        (((sint32)VeERER_Cnt_RangeInitalizationDelay) + 1));
                }
            }
            break;

          case ERER_ac_IN_InitalizeCapacity:
            VeERER_b_InitalizeCapacity = true;

            /* During 'InitalizeCapacity': '<S376>:5' */
            if (VeERER_Cnt_CapacityInitDelay >
                    KeERER_Cnt_CapacityInitDelayTrshld)
            {
                /* Transition: '<S376>:17' */
                ERER_ac_DW.is_c35_ERER_ac =
                    ERER_ac_IN_DetermineInitalizationMode;

                /* Entry 'DetermineInitalizationMode': '<S376>:7' */
                VeERER_Cnt_RangeInitalizationDelay = 0U;
                VeERER_b_EstRangeInit = true;
                VeERER_b_EstRangeSNA = false;
            }
            else
            {
                /* Transition: '<S376>:21' */
                VeERER_Cnt_CapacityInitDelay = (uint16)((sint32)(((sint32)
                    VeERER_Cnt_CapacityInitDelay) + 1));
                ERER_ac_DW.is_c35_ERER_ac = ERER_ac_IN_InitalizeCapacity;

                /* Entry 'InitalizeCapacity': '<S376>:5' */
                VeERER_b_InitalizeCapacity = true;
                ERER_ac_B.VeERER_F_WHrpKM_ChargingSF =
                    VeERER_F_EEPROM_WhperKM_Write;
            }
            break;

          default:
            VeERER_b_EstRangePSA = true;
            VeERER_b_EstRangeSNA = false;
            VeERER_b_EstRangeCharge = false;
            VeERER_b_EstRangeInit = true;

            /* During 'PSA': '<S376>:4' */
            if (rtb_Comparison4_d)
            {
                /* Transition: '<S376>:20' */
                /* Exit Internal 'PSA': '<S376>:4' */
                switch (ERER_ac_DW.is_PSA)
                {
                  case ERER_ac_IN_Driving:
                    /* Exit 'Driving': '<S376>:3' */
                    VeERER_b_EstRange_Driving = false;
                    ERER_ac_DW.is_PSA = 0;
                    break;

                  case ERER_ac_IN_Idle:
                    /* Exit 'Idle': '<S376>:2' */
                    VeERER_b_EstRange_Idle = false;
                    ERER_ac_DW.is_PSA = 0;
                    break;

                  case ERER_ac_IN_Zero_Speed:
                    /* Exit 'Zero_Speed': '<S376>:1' */
                    VeERER_b_EstRange_ZeroSpd = false;
                    ERER_ac_DW.is_PSA = 0;
                    break;

                  default:
                    ERER_ac_DW.is_PSA = 0;
                    break;
                }

                ERER_ac_DW.is_c35_ERER_ac = ERER_ac_IN_Charging;

                /* Entry 'Charging': '<S376>:6' */
                VeERER_b_TransitionFromCharge = false;
                VeERER_b_EstRangeCharge = true;
                VeERER_b_EstRangePSA = false;
                VeERER_b_EstRangeSNA = false;
                VeERER_b_EstRangeInit = true;
            }
            else
            {
                switch (ERER_ac_DW.is_PSA)
                {
                  case ERER_ac_IN_Driving:
                    /* During 'Driving': '<S376>:3' */
                    if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd <=
                            KeERER_v_VehSpdThrshld)
                    {
                        /* Transition: '<S376>:11' */
                        /* Exit 'Driving': '<S376>:3' */
                        VeERER_b_EstRange_Driving = false;
                        ERER_ac_DW.is_PSA = ERER_ac_IN_Zero_Speed;

                        /* Entry 'Zero_Speed': '<S376>:1' */
                        VeERER_b_EstRange_ZeroSpd = true;
                    }
                    break;

                  case ERER_ac_IN_Idle:
                    /* During 'Idle': '<S376>:2' */
                    if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
                            KeERER_v_VehSpdThrshld)
                    {
                        /* Transition: '<S376>:10' */
                        /* Exit 'Idle': '<S376>:2' */
                        VeERER_b_EstRange_Idle = false;
                        ERER_ac_DW.is_PSA = ERER_ac_IN_Driving;

                        /* Entry 'Driving': '<S376>:3' */
                        VeERER_b_EstRange_Driving = true;
                        VeERER_Cnt_ZeroSpdCnt = 1U;
                    }
                    break;

                  default:
                    /* During 'Zero_Speed': '<S376>:1' */
                    if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
                            KeERER_v_VehSpdThrshld)
                    {
                        /* Transition: '<S376>:12' */
                        /* Exit 'Zero_Speed': '<S376>:1' */
                        VeERER_b_EstRange_ZeroSpd = false;
                        ERER_ac_DW.is_PSA = ERER_ac_IN_Driving;

                        /* Entry 'Driving': '<S376>:3' */
                        VeERER_b_EstRange_Driving = true;
                        VeERER_Cnt_ZeroSpdCnt = 1U;
                    }
                    else if ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd <=
                              KeERER_v_VehSpdThrshld) && (VeERER_Cnt_ZeroSpdCnt >=
                              ((uint16)(((uint32)KeERER_t_ZeroSpdThrshld) * 10U))))
                    {
                        /* Transition: '<S376>:13' */
                        /* Exit 'Zero_Speed': '<S376>:1' */
                        VeERER_b_EstRange_ZeroSpd = false;
                        ERER_ac_DW.is_PSA = ERER_ac_IN_Idle;

                        /* Entry 'Idle': '<S376>:2' */
                        VeERER_b_EstRange_Idle = true;
                        VeERER_Cnt_ZeroSpdCnt = 1U;
                    }
                    else
                    {
                        /* Transition: '<S376>:14' */
                        VeERER_Cnt_ZeroSpdCnt = (uint16)((sint32)(((sint32)
                            VeERER_Cnt_ZeroSpdCnt) + 1));

                        /* Exit 'Zero_Speed': '<S376>:1' */
                        ERER_ac_DW.is_PSA = ERER_ac_IN_Zero_Speed;

                        /* Entry 'Zero_Speed': '<S376>:1' */
                        VeERER_b_EstRange_ZeroSpd = true;
                    }
                    break;
                }
            }
            break;
        }
    }

    /* End of Chart: '<S13>/EstRange_State' */
    /* End of Outputs for SubSystem: '<S4>/State' */

    /* Switch: '<S309>/Switch1' incorporates:
     *  Logic: '<S309>/Logical'
     *  Logic: '<S309>/Logical2'
     */
    if ((VeERER_b_EstRangeInit) && (!VeERER_b_EstRangeSNA))
    {
        /* Lookup_n-D: '<S320>/Vector' incorporates:
         *  Switch: '<S204>/Switch'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_h, ((const float32 *)
              &(KxERER_K_FullDH_Weight[0])), ((const float32 *)
              &(KtERER_K_FullDH_Weight[0])), 2U);

        /* Lookup_n-D: '<S322>/Vector' incorporates:
         *  Switch: '<S204>/Switch'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        rtb_Vector_px = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_h, ((
            const float32 *)&(KxERER_K_SOCDH_Weight[0])), ((const float32 *)
            &(KtERER_K_SOCDH_Weight[0])), 2U);

        /* Switch: '<S323>/Switch1' incorporates:
         *  Lookup_n-D: '<S321>/Vector'
         *  Switch: '<S204>/Switch'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        VeERER_F_EEPROM_WhperKM_Write = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_h, ((const float32 *)
              &(KxERER_K_Init_Weight[0])), ((const float32 *)
              &(KtERER_K_Init_Weight[0])), 2U);

        /* Sum: '<S309>/Sum2' incorporates:
         *  Product: '<S309>/Product1'
         *  Product: '<S309>/Product2'
         *  Product: '<S309>/Product5'
         *  UnitDelay: '<S309>/Unit Delay'
         *  UnitDelay: '<S309>/Unit Delay1'
         */
        rtb_Sum2 = ((VeERER_F_WHperKM_DriveAvgStored *
                     VeERER_F_EEPROM_WhperKM_Write) + (VeERER_F_WHrpKM_SOCDH *
                     rtb_Vector_px)) + (ERER_ac_DW.UnitDelay1_DSTATE *
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

        /* Sum: '<S309>/Sum1' */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd +=
            VeERER_F_EEPROM_WhperKM_Write + rtb_Vector_px;

        /* Outputs for Atomic SubSystem: '<S309>/Protected Division' */
        /* Switch: '<S324>/Switch1' incorporates:
         *  Constant: '<S324>/Constant Value'
         *  Constant: '<S324>/Constant Value1'
         *  Constant: '<S324>/Constant Value2'
         *  Constant: '<S324>/Constant Value3'
         *  Logic: '<S324>/AND'
         *  RelationalOperator: '<S324>/Greater Than or Equal '
         *  RelationalOperator: '<S324>/Greater Than or Equal 1'
         *  RelationalOperator: '<S324>/Not Equal'
         *  RelationalOperator: '<S324>/Not Equal1'
         *  Switch: '<S324>/Switch2'
         *  Switch: '<S324>/Switch3'
         */
        if ((rtb_Sum2 != 0.0F) && (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd !=
                                   0.0F))
        {
            /* Switch: '<S324>/Switch1' incorporates:
             *  Product: '<S324>/Division'
             */
            VeERER_F_EEPROM_WhperKM_Write = rtb_Sum2 /
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
        }
        else if (rtb_Sum2 > 0.0F)
        {
            /* Switch: '<S324>/Switch2' incorporates:
             *  Constant: '<S324>/MAXFLOAT'
             *  Switch: '<S324>/Switch1'
             */
            VeERER_F_EEPROM_WhperKM_Write = 3.402823466E+38F;
        }
        else if (rtb_Sum2 < 0.0F)
        {
            /* Switch: '<S324>/Switch3' incorporates:
             *  Constant: '<S324>/MINFLOAT'
             *  Switch: '<S324>/Switch1'
             *  Switch: '<S324>/Switch2'
             */
            VeERER_F_EEPROM_WhperKM_Write = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S324>/Switch1' incorporates:
             *  Constant: '<S324>/Constant Value4'
             *  Switch: '<S324>/Switch2'
             *  Switch: '<S324>/Switch3'
             */
            VeERER_F_EEPROM_WhperKM_Write = 0.0F;
        }

        /* End of Switch: '<S324>/Switch1' */
        /* End of Outputs for SubSystem: '<S309>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S309>/Limiter' */
        /* Switch: '<S323>/Switch1' incorporates:
         *  Constant: '<S318>/Calib'
         *  RelationalOperator: '<S323>/Relational Operator'
         */
        if (KeERER_F_WhperKM_Max < VeERER_F_EEPROM_WhperKM_Write)
        {
            /* Switch: '<S323>/Switch1' */
            VeERER_F_EEPROM_WhperKM_Write = KeERER_F_WhperKM_Max;
        }

        /* End of Switch: '<S323>/Switch1' */

        /* Switch: '<S323>/Switch' incorporates:
         *  Constant: '<S319>/Calib'
         *  RelationalOperator: '<S323>/Relational Operator1'
         */
        if (VeERER_F_EEPROM_WhperKM_Write <= KeERER_F_WhperKM_Min)
        {
            /* Switch: '<S309>/Switch1' */
            VeERER_F_EEPROM_WhperKM_Write = KeERER_F_WhperKM_Min;
        }

        /* End of Switch: '<S323>/Switch' */
        /* End of Outputs for SubSystem: '<S309>/Limiter' */
    }
    else
    {
        /* Switch: '<S309>/Switch1' */
        VeERER_F_EEPROM_WhperKM_Write = VeERER_F_WHperKM_DriveAvgStored;
    }

    /* End of Switch: '<S309>/Switch1' */

    /* DataStoreWrite: '<S4>/Data Store Write' */
    EeERER_F_EEPROM_WhperKM = VeERER_F_EEPROM_WhperKM_Write;

    /* Outputs for Atomic SubSystem: '<S316>/Counter Reset  Enabled ' */
    /* Switch: '<S325>/Switch1' incorporates:
     *  Constant: '<S325>/Constant Value1'
     *  Constant: '<S325>/Constant Value2'
     *  Sum: '<S325>/Subtraction'
     *  UnitDelay: '<S316>/Unit Delay1'
     *  UnitDelay: '<S325>/Unit Delay'
     */
    if (ERER_ac_DW.UnitDelay1_DSTATE_p)
    {
        ERER_ac_DW.UnitDelay_DSTATE_pm = 0U;
    }
    else
    {
        ERER_ac_DW.UnitDelay_DSTATE_pm = (uint16)(((uint32)
            ERER_ac_DW.UnitDelay_DSTATE_pm) + 1U);
    }

    /* End of Switch: '<S325>/Switch1' */
    /* End of Outputs for SubSystem: '<S316>/Counter Reset  Enabled ' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ERER_MedTEH' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA' */
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_FA_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBPCR_b_PwrLimON' */
    (void)Rte_Read_VeBPCR_b_PwrLimON_Value(&tmpRead_6);

    /* Outputs for Function Call SubSystem: '<Root>/ERER_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* RelationalOperator: '<S316>/Comparison1' incorporates:
     *  Constant: '<S313>/Calib'
     *  UnitDelay: '<S316>/Unit Delay1'
     *  UnitDelay: '<S325>/Unit Delay'
     */
    ERER_ac_DW.UnitDelay1_DSTATE_p = (ERER_ac_DW.UnitDelay_DSTATE_pm ==
        KeERER_n_WHperKM_StorTime);

    /* RelationalOperator: '<S11>/Comparison8' incorporates:
     *  Constant: '<S311>/Constant'
     */
    rtb_Comparison4_d = (((uint32)rtb_TmpSignalConversionAtVeHPMR_e_HybSys) ==
                         CeHPMR_e_INIT_PWRDWN);

    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising2' */
    /* Logic: '<S310>/AND' incorporates:
     *  Logic: '<S310>/OR1'
     *  UnitDelay: '<S310>/Unit Delay'
     */
    VeERER_b_EVCUShtDwnStore = (rtb_Comparison4_d &&
        (!ERER_ac_DW.UnitDelay_DSTATE_ma));

    /* Update for UnitDelay: '<S310>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_ma = rtb_Comparison4_d;

    /* End of Outputs for SubSystem: '<S11>/EdgeRising2' */

    /* Logic: '<S11>/Logical1' incorporates:
     *  UnitDelay: '<S316>/Unit Delay1'
     */
    VeERER_b_EEPROM_WhperKM_Write = ((ERER_ac_DW.UnitDelay1_DSTATE_p) ||
        (VeERER_b_EVCUShtDwnStore));

    /* DataStoreWrite: '<S4>/Data Store Write1' */
    EeERER_b_EEPROM_WhperKM = VeERER_b_EEPROM_WhperKM_Write;

    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Logic: '<S346>/OR1' incorporates:
     *  UnitDelay: '<S346>/Unit Delay'
     */
    rtb_Comparison4_d = !ERER_ac_DW.UnitDelay_DSTATE_fi;

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_fi = rtb_AND_nv;

    /* Outputs for Atomic SubSystem: '<S342>/Signal Latch On With Reset' */
    /* Logic: '<S350>/OR1' incorporates:
     *  Logic: '<S346>/AND'
     *  Logic: '<S350>/NOT'
     *  Logic: '<S350>/OR'
     *  UnitDelay: '<S342>/Unit Delay'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    VeERER_b_ResetRangeDisplay_Enable = ((rtb_AND_nv && rtb_Comparison4_d) || ((
        !ERER_ac_DW.UnitDelay_DSTATE_ot) && (ERER_ac_DW.UnitDelay_DSTATE_m3)));

    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */

    /* Update for UnitDelay: '<S350>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_m3 = VeERER_b_ResetRangeDisplay_Enable;

    /* End of Outputs for SubSystem: '<S342>/Signal Latch On With Reset' */

    /* Lookup_n-D: '<S358>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    rtb_Vector_px = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
          &(KxERER_l_MaxRange[0])), ((const float32 *)&(KtERER_l_MaxRange[0])),
         3U);

    /* Lookup_n-D: '<S359>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
          &(KxERER_l_MinRange[0])), ((const float32 *)&(KtERER_l_MinRange[0])),
         3U);

    /* Outputs for Atomic SubSystem: '<S366>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S367>/EdgeRising' */
    /* Logic: '<S368>/AND' incorporates:
     *  Logic: '<S368>/OR1'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    rtb_Comparison4_d = !ERER_ac_DW.UnitDelay_DSTATE_lf;

    /* Update for UnitDelay: '<S368>/Unit Delay' incorporates:
     *  Constant: '<S366>/TRUE Constant1'
     */
    ERER_ac_DW.UnitDelay_DSTATE_lf = true;

    /* End of Outputs for SubSystem: '<S367>/EdgeRising' */

    /* Switch: '<S367>/Switch1' incorporates:
     *  Constant: '<S367>/Constant Value'
     *  Constant: '<S367>/Constant Value1'
     *  Logic: '<S367>/OR'
     *  MinMax: '<S367>/Minimum'
     *  Sum: '<S367>/Summation'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    if (rtb_Comparison4_d)
    {
        ERER_ac_DW.UnitDelay_DSTATE_f = 0U;
    }
    else if (1 < ((sint32)((uint16)(((uint32)ERER_ac_DW.UnitDelay_DSTATE_f) + 1U))))
    {
        /* MinMax: '<S367>/Minimum' */
        ERER_ac_DW.UnitDelay_DSTATE_f = 1U;
    }
    else
    {
        /* MinMax: '<S367>/Minimum' incorporates:
         *  Constant: '<S367>/Constant Value'
         *  Sum: '<S367>/Summation'
         *  UnitDelay: '<S367>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay_DSTATE_f = (uint16)(((uint32)
            ERER_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S367>/Switch1' */
    /* End of Outputs for SubSystem: '<S366>/Turn On Delay Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ERER_MedTEH' */

    /* Inport: '<Root>/VeETQR_M_EngTrqActual' */
    (void)Rte_Read_VeETQR_M_EngTrqActual_Value(&rtb_Switch_b);

    /* Inport: '<Root>/VeESPR_n_EngineSpeed' */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value(&tmpRead_3);

    /* Outputs for Function Call SubSystem: '<Root>/ERER_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Outputs for Atomic SubSystem: '<S366>/Turn On Delay Sample' */
    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S366>/Constant Value'
     *  RelationalOperator: '<S367>/Greater  Than'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    if (((sint32)ERER_ac_DW.UnitDelay_DSTATE_f) >= 1)
    {
        /* Switch: '<S304>/Switch1' incorporates:
         *  UnitDelay: '<S366>/Unit Delay1'
         */
        rtb_Sum2 = ERER_ac_DW.UnitDelay1_DSTATE_f;
    }
    else
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = rtb_TmpSignalConversionAtVeBPCR_q_FullAm;
    }

    /* End of Switch: '<S366>/Switch1' */
    /* End of Outputs for SubSystem: '<S366>/Turn On Delay Sample' */

    /* Sum: '<S363>/Subtraction1' incorporates:
     *  Constant: '<S365>/Calib'
     *  Product: '<S363>/Multiplication'
     *  Sum: '<S363>/Subtraction'
     *  UnitDelay: '<S366>/Unit Delay1'
     */
    ERER_ac_DW.UnitDelay1_DSTATE_f = ((rtb_TmpSignalConversionAtVeBPCR_q_FullAm
        - rtb_Sum2) * KeERER_k_CapFiltCoef) + rtb_Sum2;

    /* Product: '<S9>/Product1' incorporates:
     *  Constant: '<S9>/Constant Value'
     *  Constant: '<S9>/Constant Value3'
     *  Product: '<S9>/Product4'
     */
    VeERER_P_Eng_total_pwr = ((tmpRead_3 * rtb_Switch_b) * 6.28F) / 60.0F;

    /* Outputs for Atomic SubSystem: '<S4>/Capacity' */
    /* If: '<S14>/If' */
    if (rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr)
    {
        /* Outputs for IfAction SubSystem: '<S14>/EngineON_FuelWhrRemaining' incorporates:
         *  ActionPort: '<S21>/Action Port'
         */
        /* Product: '<S21>/Product' incorporates:
         *  Constant: '<S23>/Calib'
         *  Constant: '<S27>/Calib'
         */
        rtb_TmpSignalConversionAtVeENGR_Pct_Fuel =
            ((rtb_TmpSignalConversionAtVeENGR_Pct_Fuel * KeERER_V_FuelMaxTankCap)
             * VeERER_P_Eng_total_pwr) * KeERER_k_EngineOn_UnitConvert;

        /* Outputs for Atomic SubSystem: '<S21>/Protected Division' */
        /* Switch: '<S28>/Switch1' incorporates:
         *  Constant: '<S28>/Constant Value'
         *  Constant: '<S28>/Constant Value1'
         *  Constant: '<S28>/Constant Value2'
         *  Constant: '<S28>/Constant Value3'
         *  Logic: '<S28>/AND'
         *  RelationalOperator: '<S28>/Greater Than or Equal '
         *  RelationalOperator: '<S28>/Greater Than or Equal 1'
         *  RelationalOperator: '<S28>/Not Equal'
         *  RelationalOperator: '<S28>/Not Equal1'
         *  Switch: '<S28>/Switch2'
         *  Switch: '<S28>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeENGR_Pct_Fuel != 0.0F) &&
                (rtb_TmpSignalConversionAtVeENGR_V_FuelCo != 0.0F))
        {
            /* Switch: '<S28>/Switch1' incorporates:
             *  Product: '<S28>/Division'
             */
            ERER_ac_B.Switch1 = rtb_TmpSignalConversionAtVeENGR_Pct_Fuel /
                rtb_TmpSignalConversionAtVeENGR_V_FuelCo;
        }
        else if (rtb_TmpSignalConversionAtVeENGR_Pct_Fuel > 0.0F)
        {
            /* Switch: '<S28>/Switch2' incorporates:
             *  Constant: '<S28>/MAXFLOAT'
             *  Switch: '<S28>/Switch1'
             */
            ERER_ac_B.Switch1 = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeENGR_Pct_Fuel < 0.0F)
        {
            /* Switch: '<S28>/Switch3' incorporates:
             *  Constant: '<S28>/MINFLOAT'
             *  Switch: '<S28>/Switch1'
             *  Switch: '<S28>/Switch2'
             */
            ERER_ac_B.Switch1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S28>/Switch1' incorporates:
             *  Constant: '<S28>/Constant Value4'
             *  Switch: '<S28>/Switch2'
             *  Switch: '<S28>/Switch3'
             */
            ERER_ac_B.Switch1 = 0.0F;
        }

        /* End of Switch: '<S28>/Switch1' */
        /* End of Outputs for SubSystem: '<S21>/Protected Division' */
        /* End of Outputs for SubSystem: '<S14>/EngineON_FuelWhrRemaining' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S14>/EngineOFF_FuelWhrRemaining' incorporates:
         *  ActionPort: '<S20>/Action Port'
         */
        /* Product: '<S20>/Product2' incorporates:
         *  Constant: '<S23>/Calib'
         *  Constant: '<S24>/Calib'
         *  Constant: '<S25>/Calib'
         *  Constant: '<S26>/Calib'
         */
        ERER_ac_B.Product2 = (((rtb_TmpSignalConversionAtVeENGR_Pct_Fuel *
                                KeERER_V_FuelMaxTankCap) *
                               KeERER_E_FuelEquEnergy) *
                              KeERER_Pct_EngEfficiency) *
            KeERER_k_EngineOff_UnitConvert;

        /* End of Outputs for SubSystem: '<S14>/EngineOFF_FuelWhrRemaining' */
    }

    /* End of If: '<S14>/If' */

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising2' */
    /* Logic: '<S33>/OR1' incorporates:
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_Comparison4_d = !ERER_ac_DW.UnitDelay_DSTATE_km;

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_km = rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr;

    /* End of Outputs for SubSystem: '<S22>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S22>/Window Average' */
    /* Outputs for Atomic SubSystem: '<S38>/Limiter' */
    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S34>/Calib'
     *  Constant: '<S38>/Constant Value1'
     *  RelationalOperator: '<S43>/Relational Operator'
     */
    if (500 < ((sint32)KeERER_Cnt_EngineON_Window))
    {
        /* Switch: '<S37>/Switch1' */
        rtb_Summation_bp = 500U;
    }
    else
    {
        /* Switch: '<S37>/Switch1' */
        rtb_Summation_bp = KeERER_Cnt_EngineON_Window;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S38>/Constant Value'
     *  RelationalOperator: '<S43>/Relational Operator1'
     */
    if (((sint32)rtb_Summation_bp) <= 1)
    {
        /* Switch: '<S43>/Switch' */
        rtb_Summation_bp = 1U;
    }

    /* End of Switch: '<S43>/Switch' */
    /* End of Outputs for SubSystem: '<S38>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising2' */
    /* Chart: '<S38>/Chart' incorporates:
     *  Logic: '<S33>/AND'
     */
    /* Gateway: Filters/Moving Average/Windowed Average/Chart */
    /* During: Filters/Moving Average/Windowed Average/Chart */
    /* Entry Internal: Filters/Moving Average/Windowed Average/Chart */
    /* Transition: '<S42>:1' */
    if ((rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr && rtb_Comparison4_d) ||
            ((rtb_Summation_bp != ERER_ac_DW.prior_window_size) &&
             (ERER_ac_DW.first_pass_complete)))
    {
        /* Transition: '<S42>:2' */
        /* Transition: '<S42>:4' */
        ERER_ac_DW.count = 0U;
        ERER_ac_DW.sum = 0.0F;
        ERER_ac_DW.average = 0.0F;

        /* Transition: '<S42>:10' */
        /* Transition: '<S42>:7' */
    }
    else
    {
        /* Transition: '<S42>:9' */
        ERER_ac_DW.sum += ERER_ac_B.Switch1;
        ERER_ac_DW.count = (uint16)((sint32)(((sint32)ERER_ac_DW.count) + 1));
        if (ERER_ac_DW.count >= rtb_Summation_bp)
        {
            /* Transition: '<S42>:3' */
            /* Transition: '<S42>:5' */
            ERER_ac_DW.average = ERER_ac_DW.sum / ((float32)ERER_ac_DW.count);
            ERER_ac_DW.sum = 0.0F;
            ERER_ac_DW.count = 0U;

            /* Transition: '<S42>:7' */
        }
        else
        {
            /* Transition: '<S42>:6' */
        }
    }

    /* End of Outputs for SubSystem: '<S22>/EdgeRising2' */
    /* Transition: '<S42>:8' */
    ERER_ac_DW.prior_window_size = rtb_Summation_bp;
    ERER_ac_DW.first_pass_complete = true;

    /* End of Outputs for SubSystem: '<S22>/Window Average' */

    /* Outputs for Atomic SubSystem: '<S22>/Digital Lowpass Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S22>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S22>/Turn On Delay Sample Resetable Delay' */
    /* Logic: '<S22>/Logical2' incorporates:
     *  Logic: '<S22>/Logical4'
     *  Logic: '<S30>/OR1'
     *  Logic: '<S37>/OR1'
     *  Switch: '<S29>/Switch1'
     */
    rtb_Comparison4_d = !rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr;

    /* End of Outputs for SubSystem: '<S22>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S22>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S37>/EdgeRising with resetable delay' */
    /* Logic: '<S39>/AND' incorporates:
     *  Logic: '<S39>/OR1'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    rtb_AND_cke = (rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr &&
                   (!ERER_ac_DW.UnitDelay_DSTATE_og2));

    /* Switch: '<S41>/Switch1' incorporates:
     *  Logic: '<S22>/Logical2'
     */
    if (rtb_Comparison4_d)
    {
        /* Update for UnitDelay: '<S39>/Unit Delay' incorporates:
         *  Constant: '<S39>/Constant1'
         *  Switch: '<S41>/Switch1'
         */
        ERER_ac_DW.UnitDelay_DSTATE_og2 = false;
    }
    else
    {
        /* Update for UnitDelay: '<S39>/Unit Delay' incorporates:
         *  Switch: '<S41>/Switch1'
         *  UnitDelay: '<S41>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay_DSTATE_og2 = ERER_ac_DW.UnitDelay_DSTATE_ai;
    }

    /* End of Switch: '<S41>/Switch1' */

    /* Switch: '<S41>/Switch3' incorporates:
     *  Logic: '<S22>/Logical2'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    ERER_ac_DW.UnitDelay_DSTATE_ai = ((!rtb_Comparison4_d) &&
        rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr);

    /* End of Outputs for SubSystem: '<S37>/EdgeRising with resetable delay' */

    /* Switch: '<S37>/Switch1' incorporates:
     *  Logic: '<S22>/Logical2'
     *  Logic: '<S37>/OR'
     *  Switch: '<S40>/Switch1'
     */
    if (rtb_Comparison4_d || rtb_AND_cke)
    {
        /* Switch: '<S37>/Switch1' incorporates:
         *  Constant: '<S37>/Constant Value1'
         */
        rtb_Summation_bp = 0U;
    }
    else
    {
        if (rtb_Comparison4_d)
        {
            /* Switch: '<S40>/Switch1' incorporates:
             *  Constant: '<S37>/Constant Value'
             *  Constant: '<S37>/Constant1'
             *  Sum: '<S37>/Summation'
             */
            rtb_Summation_bp = 1U;
        }
        else
        {
            /* Sum: '<S37>/Summation' incorporates:
             *  Constant: '<S37>/Constant Value'
             *  Switch: '<S40>/Switch1'
             *  UnitDelay: '<S40>/Unit Delay'
             */
            rtb_Summation_bp = (uint16)(((uint32)ERER_ac_DW.UnitDelay_DSTATE_i)
                + 1U);
        }

        /* MinMax: '<S37>/Minimum' incorporates:
         *  Constant: '<S34>/Calib'
         */
        if (KeERER_Cnt_EngineON_Window < rtb_Summation_bp)
        {
            /* Switch: '<S37>/Switch1' */
            rtb_Summation_bp = KeERER_Cnt_EngineON_Window;
        }

        /* End of MinMax: '<S37>/Minimum' */
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Logic: '<S37>/AND' incorporates:
     *  Constant: '<S34>/Calib'
     *  RelationalOperator: '<S37>/Greater  Than'
     */
    rtb_AND_cke = (rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr && (rtb_Summation_bp
                    >= KeERER_Cnt_EngineON_Window));

    /* Switch: '<S40>/Switch3' incorporates:
     *  Constant: '<S37>/Constant1'
     *  Logic: '<S22>/Logical2'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    if (rtb_Comparison4_d)
    {
        ERER_ac_DW.UnitDelay_DSTATE_i = 0U;
    }
    else
    {
        ERER_ac_DW.UnitDelay_DSTATE_i = rtb_Summation_bp;
    }

    /* End of Switch: '<S40>/Switch3' */
    /* End of Outputs for SubSystem: '<S22>/Turn On Delay Sample Resetable Delay' */

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising1' */
    /* Logic: '<S32>/AND' incorporates:
     *  Logic: '<S32>/OR1'
     *  UnitDelay: '<S32>/Unit Delay'
     */
    rtb_AND_hl = (rtb_AND_cke && (!ERER_ac_DW.UnitDelay_DSTATE_d4));

    /* Update for UnitDelay: '<S32>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_d4 = rtb_AND_cke;

    /* End of Outputs for SubSystem: '<S22>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S22>/EdgeFalling' */
    /* Logic: '<S30>/AND' incorporates:
     *  UnitDelay: '<S30>/Unit Delay'
     */
    rtb_AND_k1 = (rtb_Comparison4_d && (ERER_ac_DW.UnitDelay_DSTATE_ek));

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_ek = rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr;

    /* End of Outputs for SubSystem: '<S22>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S22>/EdgeFalling1' */
    /* Logic: '<S31>/AND' incorporates:
     *  Logic: '<S31>/OR1'
     *  UnitDelay: '<S31>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr = ((!rtb_AND_cke) &&
        (ERER_ac_DW.UnitDelay_DSTATE_gl));

    /* Update for UnitDelay: '<S31>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_gl = rtb_AND_cke;

    /* End of Outputs for SubSystem: '<S22>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S22>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S29>/Switch1' incorporates:
     *  Constant: '<S36>/Calib'
     *  Logic: '<S22>/Logical3'
     *  Product: '<S29>/Multiplication'
     *  Sum: '<S29>/Subtraction'
     *  Sum: '<S29>/Summation'
     *  Switch: '<S22>/Switch'
     *  UnitDelay: '<S29>/Unit Delay'
     */
    if (rtb_AND_hl || rtb_AND_k1)
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Logic: '<S22>/Logical5'
         *  UnitDelay: '<S22>/Unit Delay'
         *  UnitDelay: '<S29>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr && rtb_Comparison4_d)
        {
            ERER_ac_DW.UnitDelay_DSTATE_m4 = ERER_ac_DW.UnitDelay_DSTATE_k;
        }
        else
        {
            ERER_ac_DW.UnitDelay_DSTATE_m4 = ERER_ac_B.Product2;
        }

        /* End of Switch: '<S22>/Switch1' */
    }
    else
    {
        if (rtb_AND_cke)
        {
            /* Outputs for Atomic SubSystem: '<S22>/Window Average' */
            /* Switch: '<S22>/Switch' incorporates:
             *  Chart: '<S38>/Chart'
             */
            rtb_TmpSignalConversionAtVeENGR_V_FuelCo = ERER_ac_DW.average;

            /* End of Outputs for SubSystem: '<S22>/Window Average' */
        }
        else
        {
            /* Switch: '<S22>/Switch' */
            rtb_TmpSignalConversionAtVeENGR_V_FuelCo = ERER_ac_B.Product2;
        }

        ERER_ac_DW.UnitDelay_DSTATE_m4 +=
            (rtb_TmpSignalConversionAtVeENGR_V_FuelCo -
             ERER_ac_DW.UnitDelay_DSTATE_m4) * KeERER_k_FuelEnergyFilter;
    }

    /* End of Outputs for SubSystem: '<S22>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S35>/Calib'
     */
    if (KeERER_b_EnableFuelRange)
    {
        /* Switch: '<S22>/Switch2' incorporates:
         *  UnitDelay: '<S29>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeENGR_Pct_Fuel =
            ERER_ac_DW.UnitDelay_DSTATE_m4;
    }
    else
    {
        /* Switch: '<S22>/Switch2' incorporates:
         *  Constant: '<S22>/Constant1'
         */
        rtb_TmpSignalConversionAtVeENGR_Pct_Fuel = 0.0F;
    }

    /* End of Switch: '<S22>/Switch2' */

    /* Product: '<S50>/Product' incorporates:
     *  Lookup_n-D: '<S67>/Vector'
     *  Lookup_n-D: '<S68>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HVBatSOH'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    VeEREC_E_Current_SOC_AhrXOCV_Whr = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
         rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa, ((const float32 *)
          &(KxERER_C_SOC_SOH_Ahr[0])), ((const float32 *)&(KyERER_C_SOC_SOH_Ahr
           [0])), ((const float32 *)&(KtERER_C_SOC_SOH_Ahr[0])),
         ERER_ac_ConstP.pooled9, 8U) * look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
         rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa, ((const float32 *)
          &(KxERER_V_SOC_SOH_OCV[0])), ((const float32 *)&(KyERER_V_SOC_SOH_OCV
           [0])), ((const float32 *)&(KtERER_V_SOC_SOH_OCV[0])),
         ERER_ac_ConstP.pooled9, 8U);

    /* Product: '<S48>/Product' incorporates:
     *  Constant: '<S364>/Calib'
     *  Lookup_n-D: '<S62>/Vector'
     *  Lookup_n-D: '<S63>/Vector'
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HVBatSOH'
     */
    VeEREC_E_Base_SOC_AhrXOCV_Whr = look2_iflf_binlca_16a
        (KeERER_Pct_ZeroSOCDisplay, rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa, ((
           const float32 *)&(KxERER_C_SOC_SOH_Ahr[0])), ((const float32 *)
          &(KyERER_C_SOC_SOH_Ahr[0])), ((const float32 *)&(KtERER_C_SOC_SOH_Ahr
           [0])), ERER_ac_ConstP.pooled9, 8U) * look2_iflf_binlca_16a
        (KeERER_Pct_ZeroSOCDisplay, rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa, ((
           const float32 *)&(KxERER_V_SOC_SOH_OCV[0])), ((const float32 *)
          &(KyERER_V_SOC_SOH_OCV[0])), ((const float32 *)&(KtERER_V_SOC_SOH_OCV
           [0])), ERER_ac_ConstP.pooled9, 8U);

    /* MinMax: '<S19>/MinMax' incorporates:
     *  Constant: '<S16>/Calib'
     *  MinMax: '<S18>/MinMax1'
     *  UnitDelay: '<S366>/Unit Delay1'
     */
    rtb_Sum2 = fminf(ERER_ac_DW.UnitDelay1_DSTATE_f, KeERER_q_BattFullCapacity);

    /* Outputs for Atomic SubSystem: '<S19>/Protected Division' */
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S16>/Calib'
     *  Constant: '<S60>/Constant Value'
     *  Constant: '<S60>/Constant Value1'
     *  Constant: '<S60>/Constant Value2'
     *  Constant: '<S60>/Constant Value3'
     *  Logic: '<S60>/AND'
     *  MinMax: '<S19>/MinMax'
     *  RelationalOperator: '<S60>/Greater Than or Equal '
     *  RelationalOperator: '<S60>/Greater Than or Equal 1'
     *  RelationalOperator: '<S60>/Not Equal'
     *  RelationalOperator: '<S60>/Not Equal1'
     *  Switch: '<S60>/Switch2'
     *  Switch: '<S60>/Switch3'
     */
    if ((rtb_Sum2 != 0.0F) && (KeERER_q_BattFullCapacity != 0.0F))
    {
        /* Switch: '<S60>/Switch1' incorporates:
         *  Product: '<S60>/Division'
         */
        rtb_TmpSignalConversionAtVeBPCR_q_FullAm = rtb_Sum2 /
            KeERER_q_BattFullCapacity;
    }
    else if (rtb_Sum2 > 0.0F)
    {
        /* Switch: '<S60>/Switch2' incorporates:
         *  Constant: '<S60>/MAXFLOAT'
         *  Switch: '<S60>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBPCR_q_FullAm = 3.402823466E+38F;
    }
    else if (rtb_Sum2 < 0.0F)
    {
        /* Switch: '<S60>/Switch3' incorporates:
         *  Constant: '<S60>/MINFLOAT'
         *  Switch: '<S60>/Switch1'
         *  Switch: '<S60>/Switch2'
         */
        rtb_TmpSignalConversionAtVeBPCR_q_FullAm = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S60>/Switch1' incorporates:
         *  Constant: '<S60>/Constant Value4'
         *  Switch: '<S60>/Switch2'
         *  Switch: '<S60>/Switch3'
         */
        rtb_TmpSignalConversionAtVeBPCR_q_FullAm = 0.0F;
    }

    /* End of Switch: '<S60>/Switch1' */
    /* End of Outputs for SubSystem: '<S19>/Protected Division' */

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S52>/Calib'
     *  Constant: '<S53>/Calib'
     *  Switch: '<S19>/Switch1'
     */
    if (KeERER_b_CapEstmLogic_Switch)
    {
        /* Switch: '<S19>/Switch' incorporates:
         *  Sum: '<S19>/Sum1'
         */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo =
            VeEREC_E_Current_SOC_AhrXOCV_Whr - VeEREC_E_Base_SOC_AhrXOCV_Whr;
    }
    else if (KeERER_b_UseAh_4WhrCal)
    {
        /* Switch: '<S19>/Switch1' incorporates:
         *  Lookup_n-D: '<S54>/Vector'
         *  Product: '<S19>/Product'
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  Switch: '<S19>/Switch'
         */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
              &(KxERER_E_SOC_WHR[0])), ((const float32 *)&(KtERER_E_SOC_WHR[0])),
             6U) * rtb_TmpSignalConversionAtVeBPCR_q_FullAm;
    }
    else
    {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S364>/Calib'
         *  Lookup_n-D: '<S61>/Vector'
         *  Lookup_n-D: '<S69>/Vector'
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HVBatSOH'
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  Sum: '<S19>/Sum3'
         *  Switch: '<S19>/Switch1'
         */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
             rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa, ((const float32 *)
              &(KxERER_E_SOC_SOH_Whr[0])), ((const float32 *)
              &(KyERER_E_SOC_SOH_Whr[0])), ((const float32 *)
              &(KtERER_E_SOC_SOH_Whr[0])), ERER_ac_ConstP.pooled9, 8U) -
            look2_iflf_binlca_16a(KeERER_Pct_ZeroSOCDisplay,
            rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa, ((const float32 *)
            &(KxERER_E_SOC_SOH_Whr[0])), ((const float32 *)
            &(KyERER_E_SOC_SOH_Whr[0])), ((const float32 *)
            &(KtERER_E_SOC_SOH_Whr[0])), ERER_ac_ConstP.pooled9, 8U);
    }

    /* End of Switch: '<S19>/Switch' */
    /* End of Outputs for SubSystem: '<S4>/Capacity' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ERER_MedTEH' */

    /* Inport: '<Root>/VeFCPR_E_FCPS_H2_EquivEgy' */
    (void)Rte_Read_VeFCPR_E_FCPS_H2_EquivEgy_Value(&rtb_Add);

    /* Inport: '<Root>/VeBPCR_T_HV_BatModTempMin' */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMin_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/ERER_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Outputs for Atomic SubSystem: '<S4>/Capacity' */
    /* Outputs for Atomic SubSystem: '<S19>/Limiter6' */
    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S15>/Calib'
     *  RelationalOperator: '<S59>/Relational Operator'
     */
    if (KeERER_E_MaxWhr < rtb_TmpSignalConversionAtVeENGR_V_FuelCo)
    {
        /* Switch: '<S58>/Switch1' */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = KeERER_E_MaxWhr;
    }

    /* End of Switch: '<S59>/Switch1' */

    /* Switch: '<S59>/Switch' incorporates:
     *  Constant: '<S19>/Constant Value7'
     *  RelationalOperator: '<S59>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeENGR_V_FuelCo > 0.0F)
    {
        /* Switch: '<S59>/Switch' */
        rtb_Switch_b = rtb_TmpSignalConversionAtVeENGR_V_FuelCo;
    }
    else
    {
        /* Switch: '<S59>/Switch' */
        rtb_Switch_b = 0.0F;
    }

    /* End of Switch: '<S59>/Switch' */
    /* End of Outputs for SubSystem: '<S19>/Limiter6' */

    /* Lookup_n-D: '<S17>/Vector' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMin'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa = look1_iflf_binlca_16a(tmpRead_0,
        ((const float32 *)&(KxERER_r_CapacityTempRatio[0])), ((const float32 *)
        &(KtERER_r_CapacityTempRatio[0])), 6U);

    /* Product: '<S49>/Product2' incorporates:
     *  Constant: '<S64>/Calib'
     */
    rtb_TmpSignalConversionAtVeENGR_V_FuelCo = rtb_Add * HeERER_k_H2Unit_Convert;

    /* Outputs for Atomic SubSystem: '<S49>/Limiter' */
    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S65>/Calib'
     *  RelationalOperator: '<S66>/Relational Operator'
     */
    if (KeERER_E_H2WhrMax < rtb_TmpSignalConversionAtVeENGR_V_FuelCo)
    {
        /* Switch: '<S58>/Switch1' */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = KeERER_E_H2WhrMax;
    }

    /* End of Switch: '<S66>/Switch1' */

    /* Switch: '<S66>/Switch' incorporates:
     *  Constant: '<S49>/Constant Value1'
     *  RelationalOperator: '<S66>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeENGR_V_FuelCo <= 0.0F)
    {
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = 0.0F;
    }

    /* End of Switch: '<S66>/Switch' */
    /* End of Outputs for SubSystem: '<S49>/Limiter' */

    /* Sum: '<S19>/Sum2' incorporates:
     *  Product: '<S19>/Product16'
     */
    VeERER_E_WhRemaining = (rtb_Switch_b *
                            rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa) +
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo;

    /* Sum: '<S5>/Add' */
    rtb_Add = rtb_TmpSignalConversionAtVeENGR_Pct_Fuel + VeERER_E_WhRemaining;

    /* Outputs for Atomic SubSystem: '<S18>/Protected Division1' */
    /* Switch: '<S46>/Switch1' incorporates:
     *  Constant: '<S16>/Calib'
     *  Constant: '<S46>/Constant Value'
     *  Constant: '<S46>/Constant Value1'
     *  Constant: '<S46>/Constant Value2'
     *  Constant: '<S46>/Constant Value3'
     *  Logic: '<S46>/AND'
     *  RelationalOperator: '<S46>/Greater Than or Equal '
     *  RelationalOperator: '<S46>/Greater Than or Equal 1'
     *  RelationalOperator: '<S46>/Not Equal'
     *  RelationalOperator: '<S46>/Not Equal1'
     *  Switch: '<S46>/Switch2'
     *  Switch: '<S46>/Switch3'
     */
    if ((rtb_Sum2 != 0.0F) && (KeERER_q_BattFullCapacity != 0.0F))
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Product: '<S46>/Division'
         */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = rtb_Sum2 /
            KeERER_q_BattFullCapacity;
    }
    else if (rtb_Sum2 > 0.0F)
    {
        /* Switch: '<S46>/Switch2' incorporates:
         *  Constant: '<S46>/MAXFLOAT'
         *  Switch: '<S46>/Switch1'
         */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = 3.402823466E+38F;
    }
    else if (rtb_Sum2 < 0.0F)
    {
        /* Switch: '<S46>/Switch3' incorporates:
         *  Constant: '<S46>/MINFLOAT'
         *  Switch: '<S46>/Switch1'
         *  Switch: '<S46>/Switch2'
         */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  Constant: '<S46>/Constant Value4'
         *  Switch: '<S46>/Switch2'
         *  Switch: '<S46>/Switch3'
         */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = 0.0F;
    }

    /* End of Switch: '<S46>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/Protected Division1' */
    /* End of Outputs for SubSystem: '<S4>/Capacity' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ERER_MedTEH' */

    /* Inport: '<Root>/VeVTLR_Pct_V2L_OB_RsrvBatt' */
    (void)Rte_Read_VeVTLR_Pct_V2L_OB_RsrvBatt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeCITR_Pct_V2VRsrvBatt' */
    (void)Rte_Read_VeCITR_Pct_V2VRsrvBatt_Value(&rtb_Switch1_i);

    /* Outputs for Function Call SubSystem: '<Root>/ERER_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Outputs for Atomic SubSystem: '<S4>/Capacity' */
    /* Product: '<S18>/Product3' incorporates:
     *  Lookup_n-D: '<S44>/Vector'
     *  SignalConversion generated from: '<S1>/VeSCPR_Pct_Est_SOC'
     */
    rtb_TmpSignalConversionAtVeENGR_V_FuelCo *= look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSCPR_Pct_Est_, ((const float32 *)
          &(KxERER_E_Whr_SC[0])), ((const float32 *)&(KtERER_E_Whr_SC[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S18>/Limiter2' */
    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S15>/Calib'
     *  RelationalOperator: '<S45>/Relational Operator'
     */
    if (KeERER_E_MaxWhr < rtb_TmpSignalConversionAtVeENGR_V_FuelCo)
    {
        /* Switch: '<S58>/Switch1' */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = KeERER_E_MaxWhr;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S18>/Constant Value4'
     *  RelationalOperator: '<S45>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeENGR_V_FuelCo <= 0.0F)
    {
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = 0.0F;
    }

    /* End of Switch: '<S45>/Switch' */
    /* End of Outputs for SubSystem: '<S18>/Limiter2' */

    /* Product: '<S18>/Product2' */
    VeERER_E_SchChrgWh = rtb_TmpSignalConversionAtVeENGR_V_FuelCo *
        rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa;

    /* Product: '<S19>/Product1' incorporates:
     *  Inport: '<Root>/VeCITR_Pct_V2VRsrvBatt'
     *  Lookup_n-D: '<S55>/Vector'
     */
    rtb_Sum2 = rtb_TmpSignalConversionAtVeBPCR_q_FullAm * look1_iflf_binlca_16a
        (rtb_Switch1_i, ((const float32 *)&(KxERER_E_SOC_WHR[0])), ((const
           float32 *)&(KtERER_E_SOC_WHR[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S19>/Limiter1' */
    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S15>/Calib'
     *  RelationalOperator: '<S57>/Relational Operator'
     */
    if (KeERER_E_MaxWhr < rtb_Sum2)
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = KeERER_E_MaxWhr;
    }

    /* End of Switch: '<S57>/Switch1' */
    /* End of Outputs for SubSystem: '<S19>/Limiter1' */

    /* Product: '<S19>/Product3' incorporates:
     *  Inport: '<Root>/VeVTLR_Pct_V2L_OB_RsrvBatt'
     *  Lookup_n-D: '<S56>/Vector'
     */
    rtb_TmpSignalConversionAtVeENGR_V_FuelCo =
        rtb_TmpSignalConversionAtVeBPCR_q_FullAm * look1_iflf_binlca_16a
        (tmpRead_9, ((const float32 *)&(KxERER_E_SOC_WHR[0])), ((const float32 *)
          &(KtERER_E_SOC_WHR[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S19>/Limiter2' */
    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S15>/Calib'
     *  RelationalOperator: '<S58>/Relational Operator'
     */
    if (KeERER_E_MaxWhr < rtb_TmpSignalConversionAtVeENGR_V_FuelCo)
    {
        /* Switch: '<S58>/Switch1' */
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = KeERER_E_MaxWhr;
    }

    /* End of Switch: '<S58>/Switch1' */
    /* End of Outputs for SubSystem: '<S19>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S19>/Limiter1' */
    /* Switch: '<S57>/Switch' incorporates:
     *  Constant: '<S19>/Constant Value1'
     *  RelationalOperator: '<S57>/Relational Operator1'
     */
    if (rtb_Sum2 > 0.0F)
    {
        tmpRead_9 = rtb_Sum2;
    }
    else
    {
        tmpRead_9 = 0.0F;
    }

    /* End of Switch: '<S57>/Switch' */
    /* End of Outputs for SubSystem: '<S19>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S22>/Window Average' */
    /* Update for UnitDelay: '<S22>/Unit Delay' incorporates:
     *  Chart: '<S38>/Chart'
     */
    ERER_ac_DW.UnitDelay_DSTATE_k = ERER_ac_DW.average;

    /* End of Outputs for SubSystem: '<S22>/Window Average' */
    /* End of Outputs for SubSystem: '<S4>/Capacity' */

    /* Outputs for IfAction SubSystem: '<S9>/EstRangeDTE_PSA' incorporates:
     *  ActionPort: '<S191>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S214>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S9>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S9>/EdgeFalling' */
    /* If: '<S9>/If' incorporates:
     *  Logic: '<S189>/OR1'
     *  Logic: '<S198>/NOT'
     *  Logic: '<S230>/OR1'
     */
    rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr = !VeERER_b_EstRangeCharge;

    /* End of Outputs for SubSystem: '<S9>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S214>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S9>/EstRangeDTE_PSA' */

    /* Logic: '<S189>/AND' incorporates:
     *  Logic: '<S189>/OR1'
     *  UnitDelay: '<S189>/Unit Delay'
     */
    rtb_Comparison4_d = (rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr &&
                         (ERER_ac_DW.UnitDelay_DSTATE_fj));

    /* Update for UnitDelay: '<S189>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_fj = VeERER_b_EstRangeCharge;

    /* End of Outputs for SubSystem: '<S9>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S9>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S199>/EdgeFalling' */
    /* Logic: '<S307>/AND' incorporates:
     *  Logic: '<S307>/OR1'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    rtb_AND_cke = ((!rtb_Comparison4_d) && (ERER_ac_DW.UnitDelay_DSTATE_od));

    /* Update for UnitDelay: '<S307>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_od = rtb_Comparison4_d;

    /* End of Outputs for SubSystem: '<S199>/EdgeFalling' */

    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S195>/Calib'
     *  Sum: '<S199>/Summation'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    if (rtb_AND_cke)
    {
        ERER_ac_DW.UnitDelay_DSTATE_ky = KeERER_Cnt_PostChrg_Delay;
    }
    else
    {
        /* Sum: '<S199>/Summation' incorporates:
         *  Constant: '<S199>/Constant Value'
         *  UnitDelay: '<S199>/Unit Delay'
         */
        rtb_Sum_g = ((sint32)ERER_ac_DW.UnitDelay_DSTATE_ky) - 1;
        if ((((sint32)ERER_ac_DW.UnitDelay_DSTATE_ky) - 1) < 0)
        {
            rtb_Sum_g = 0;
        }

        ERER_ac_DW.UnitDelay_DSTATE_ky = (uint16)rtb_Sum_g;
    }

    /* End of Switch: '<S199>/Switch' */

    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S199>/Constant Value2'
     *  Logic: '<S199>/AND'
     *  RelationalOperator: '<S199>/Greater  Than'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    if ((!rtb_Comparison4_d) && (((sint32)ERER_ac_DW.UnitDelay_DSTATE_ky) <= 0))
    {
        /* Switch: '<S9>/Switch' */
        ERER_ac_DW.UnitDelay1_DSTATE_o = VeERER_F_WHperKM_DriveAvgStored;
    }

    /* End of Switch: '<S9>/Switch' */
    /* End of Outputs for SubSystem: '<S9>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S9>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S200>/EdgeRising' */
    /* UnitDelay: '<S198>/Unit Delay' incorporates:
     *  UnitDelay: '<S308>/Unit Delay'
     */
    rtb_Comparison4_d = ERER_ac_DW.UnitDelay_DSTATE_if;

    /* Update for UnitDelay: '<S308>/Unit Delay' */
    ERER_ac_DW.UnitDelay_DSTATE_if = VeERER_b_EstRangePSA;

    /* End of Outputs for SubSystem: '<S200>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S9>/EstRangeDTE_Charge' incorporates:
     *  ActionPort: '<S190>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S190>/EdgeFalling' */
    /* If: '<S9>/If' incorporates:
     *  Logic: '<S200>/OR1'
     *  Logic: '<S206>/OR1'
     */
    rtb_AND_cke = !VeERER_b_EstRangePSA;

    /* End of Outputs for SubSystem: '<S190>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S9>/EstRangeDTE_Charge' */

    /* Outputs for Atomic SubSystem: '<S200>/EdgeRising' */
    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S196>/Calib'
     *  Constant: '<S200>/Constant Value'
     *  Constant: '<S200>/Constant Value1'
     *  Logic: '<S200>/OR'
     *  Logic: '<S200>/OR1'
     *  Logic: '<S308>/AND'
     *  Logic: '<S308>/OR1'
     *  MinMax: '<S200>/Minimum'
     *  Sum: '<S200>/Summation'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    if (rtb_AND_cke || ((VeERER_b_EstRangePSA) && (!rtb_Comparison4_d)))
    {
        ERER_ac_DW.UnitDelay_DSTATE_l = 0U;
    }
    else if (KeERER_Cnt_VehSpdChk_Delay < ((uint16)(((uint32)
                ERER_ac_DW.UnitDelay_DSTATE_l) + 1U)))
    {
        /* MinMax: '<S200>/Minimum' incorporates:
         *  Constant: '<S196>/Calib'
         */
        ERER_ac_DW.UnitDelay_DSTATE_l = KeERER_Cnt_VehSpdChk_Delay;
    }
    else
    {
        /* MinMax: '<S200>/Minimum' incorporates:
         *  Constant: '<S200>/Constant Value'
         *  Sum: '<S200>/Summation'
         *  UnitDelay: '<S200>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay_DSTATE_l = (uint16)(((uint32)
            ERER_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }

    /* End of Switch: '<S200>/Switch1' */
    /* End of Outputs for SubSystem: '<S200>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S9>/Signal Latch On With Reset' */
    /* Logic: '<S198>/OR1' incorporates:
     *  Constant: '<S196>/Calib'
     *  Logic: '<S198>/OR'
     *  Logic: '<S200>/AND'
     *  RelationalOperator: '<S200>/Greater  Than'
     *  UnitDelay: '<S198>/Unit Delay'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    ERER_ac_DW.UnitDelay_DSTATE_b = (((VeERER_b_EstRangePSA) &&
        (ERER_ac_DW.UnitDelay_DSTATE_l >= KeERER_Cnt_VehSpdChk_Delay)) ||
        (rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr &&
         (ERER_ac_DW.UnitDelay_DSTATE_b)));

    /* End of Outputs for SubSystem: '<S9>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S9>/Turn On Delay Sample' */

    /* If: '<S9>/If' incorporates:
     *  Inport: '<Root>/VeHVTR_I_HV_BatCurrArb'
     *  Inport: '<Root>/VeHVTR_U_HV_Volt'
     *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
     *  Inport: '<Root>/VeINVR_U_MtrA_DC_Volt'
     */
    rtPrevAction = ERER_ac_DW.If_ActiveSubsystem;
    ERER_ac_DW.If_ActiveSubsystem = -1;
    if (VeERER_b_EstRangePSA)
    {
        ERER_ac_DW.If_ActiveSubsystem = 0;
    }
    else
    {
        if (VeERER_b_EstRangeCharge)
        {
            ERER_ac_DW.If_ActiveSubsystem = 1;
        }
    }

    switch (ERER_ac_DW.If_ActiveSubsystem)
    {
      case 0:
        if (ERER_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S9>/EstRangeDTE_PSA' incorporates:
             *  ActionPort: '<S191>/Action Port'
             */
            /* InitializeConditions for If: '<S9>/If' incorporates:
             *  Switch: '<S235>/Switch1'
             *  UnitDelay: '<S214>/Unit Delay'
             *  UnitDelay: '<S229>/Unit Delay'
             *  UnitDelay: '<S235>/Unit Delay1'
             *  UnitDelay: '<S236>/Unit Delay1'
             *  UnitDelay: '<S259>/Unit Delay'
             *  UnitDelay: '<S259>/Unit Delay1'
             */
            ERER_ac_DW.UnitDelay1_DSTATE_a = 0.0F;
            ERER_ac_DW.UnitDelay_DSTATE_n = 0.0F;
            ERER_ac_DW.UnitDelay_DSTATE_d = 0.0F;
            ERER_ac_DW.UnitDelay1_DSTATE_f3 = 0.0F;
            ERER_ac_DW.UnitDelay_DSTATE_nk = CeERER_e_SNA;
            ERER_ac_DW.UnitDelay1_DSTATE_h = CeERER_e_SNA;

            /* End of InitializeConditions for SubSystem: '<S9>/EstRangeDTE_PSA' */

            /* SystemReset for IfAction SubSystem: '<S9>/EstRangeDTE_PSA' incorporates:
             *  ActionPort: '<S191>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S191>/EdgeRising2' */
            /* SystemReset for If: '<S9>/If' incorporates:
             *  Chart: '<S191>/PSA_WhrpKMCalc'
             *  Chart: '<S222>/Stateflow Chart'
             *  UnitDelay: '<S213>/Unit Delay'
             *  UnitDelay: '<S230>/Unit Delay'
             *  UnitDelay: '<S237>/Unit Delay'
             *  UnitDelay: '<S240>/Unit Delay'
             *  UnitDelay: '<S241>/Unit Delay'
             *  UnitDelay: '<S242>/Unit Delay'
             *  UnitDelay: '<S243>/Unit Delay'
             *  UnitDelay: '<S244>/Unit Delay'
             *  UnitDelay: '<S245>/Unit Delay'
             *  UnitDelay: '<S246>/Unit Delay'
             *  UnitDelay: '<S264>/Unit Delay'
             *  UnitDelay: '<S265>/Unit Delay'
             *  UnitDelay: '<S266>/Unit Delay'
             *  UnitDelay: '<S267>/Unit Delay'
             */
            ERER_ac_DW.UnitDelay_DSTATE_ej = false;

            /* End of SystemReset for SubSystem: '<S191>/EdgeRising2' */

            /* SystemReset for Atomic SubSystem: '<S220>/EdgeRising1' */
            ERER_ac_DW.UnitDelay_DSTATE_ju = false;

            /* End of SystemReset for SubSystem: '<S220>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S220>/EdgeRising' */
            ERER_ac_DW.UnitDelay_DSTATE_co = false;

            /* End of SystemReset for SubSystem: '<S220>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S220>/IntegratorK Reset Enabled Limited' */
            ERER_ac_DW.UnitDelay_DSTATE_g = 0.0F;

            /* End of SystemReset for SubSystem: '<S220>/IntegratorK Reset Enabled Limited' */
            ERER_ac_DW.is_active_c2_ERER_ac = 0U;
            ERER_ac_DW.is_c2_ERER_ac = 0;
            memset(&ERER_ac_DW.ECAry[0], 0, 100U * (sizeof(float32)));
            ERER_ac_DW.i = 0U;
            VeERER_E_distFncSOC_avgWhrpkm = 0.0F;
            VeERER_E_totaldist_avgWhrpkm = 0.0F;
            VeERER_b_ECOutputFlag = false;
            VeERER_l_VehDist_Init = 0.0F;
            VeERER_E_VehEnWhr_Init = 0.0F;
            VeERER_E_delta_VehEnergy = 0.0F;
            VeERER_l_delta_VehDist = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S226>/EdgeRising3' */
            ERER_ac_DW.UnitDelay_DSTATE_m5 = false;

            /* End of SystemReset for SubSystem: '<S226>/EdgeRising3' */

            /* SystemReset for Atomic SubSystem: '<S226>/EdgeRising4' */
            ERER_ac_DW.UnitDelay_DSTATE_pmm = false;

            /* End of SystemReset for SubSystem: '<S226>/EdgeRising4' */

            /* SystemReset for Atomic SubSystem: '<S226>/Digital Lowpass Reset Enabled' */
            ERER_ac_DW.UnitDelay_DSTATE_c = 0.0F;

            /* End of SystemReset for SubSystem: '<S226>/Digital Lowpass Reset Enabled' */

            /* SystemReset for Atomic SubSystem: '<S235>/Turn On Delay Sample' */
            ERER_ac_DW.UnitDelay_DSTATE_p2 = 0U;

            /* SystemReset for Atomic SubSystem: '<S240>/EdgeRising' */
            ERER_ac_DW.UnitDelay_DSTATE_fi2 = false;

            /* End of SystemReset for SubSystem: '<S240>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S235>/Turn On Delay Sample' */

            /* SystemReset for Atomic SubSystem: '<S229>/EdgeRising' */
            ERER_ac_DW.UnitDelay_DSTATE_ja = false;

            /* End of SystemReset for SubSystem: '<S229>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S214>/EdgeFalling' */
            ERER_ac_DW.UnitDelay_DSTATE_kq = false;

            /* End of SystemReset for SubSystem: '<S214>/EdgeFalling' */

            /* SystemReset for Atomic SubSystem: '<S236>/Turn On Delay Sample' */
            ERER_ac_DW.UnitDelay_DSTATE_nh = 0U;

            /* SystemReset for Atomic SubSystem: '<S242>/EdgeRising' */
            ERER_ac_DW.UnitDelay_DSTATE_e = false;

            /* End of SystemReset for SubSystem: '<S242>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S236>/Turn On Delay Sample' */
            ERER_ac_DW.is_active_c3_ERER_ac = 0U;
            ERER_ac_DW.is_c3_ERER_ac = 0;

            /* SystemReset for Atomic SubSystem: '<S259>/Counter Reset  Enabled ' */
            ERER_ac_DW.UnitDelay_DSTATE_kk = 0U;

            /* End of SystemReset for SubSystem: '<S259>/Counter Reset  Enabled ' */
            /* End of SystemReset for SubSystem: '<S9>/EstRangeDTE_PSA' */
        }

        (void)Rte_Read_VeINVR_U_MtrA_DC_Volt_Value(&tmpRead_5);
        (void)Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value(&tmpRead_4);

        /* Outputs for IfAction SubSystem: '<S9>/EstRangeDTE_PSA' incorporates:
         *  ActionPort: '<S191>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S191>/EdgeRising2' */
        /* Logic: '<S213>/AND' incorporates:
         *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
         *  Inport: '<Root>/VeINVR_U_MtrA_DC_Volt'
         *  Logic: '<S213>/OR1'
         *  UnitDelay: '<S213>/Unit Delay'
         */
        rtb_Comparison4_d = (rtb_AND_nv && (!ERER_ac_DW.UnitDelay_DSTATE_ej));

        /* Update for UnitDelay: '<S213>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_ej = rtb_AND_nv;

        /* End of Outputs for SubSystem: '<S191>/EdgeRising2' */

        /* DataTypeConversion: '<S191>/FloatToFix' incorporates:
         *  Lookup_n-D: '<S219>/Vector'
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        rtb_Summation_bp = (uint16)look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
              &(KxERER_Cnt_UnitWin_fncSOC[0])), ((const float32 *)
              &(KtERER_Cnt_UnitWin_fncSOC[0])), 12U);

        /* Product: '<S251>/Product5' */
        rtb_Sum2 = tmpRead_5 * tmpRead_4;

        /* Outputs for Atomic SubSystem: '<S251>/Limiter1' */
        /* Switch: '<S256>/Switch1' incorporates:
         *  Constant: '<S251>/Constant Value1'
         *  RelationalOperator: '<S256>/Relational Operator'
         */
        if (0.0F < rtb_Sum2)
        {
            /* Sum: '<S259>/Sum1' */
            rtb_Sum2 = 0.0F;
        }

        /* End of Switch: '<S256>/Switch1' */

        /* Switch: '<S256>/Switch' incorporates:
         *  Constant: '<S251>/Constant Value2'
         *  RelationalOperator: '<S256>/Relational Operator1'
         */
        if (rtb_Sum2 > -100000.0F)
        {
            /* Switch: '<S256>/Switch' */
            VeERER_P_MtrA_charging_pwr = rtb_Sum2;
        }
        else
        {
            /* Switch: '<S256>/Switch' */
            VeERER_P_MtrA_charging_pwr = -100000.0F;
        }

        /* End of Switch: '<S256>/Switch' */
        /* End of Outputs for SubSystem: '<S251>/Limiter1' */

        /* Outputs for Atomic SubSystem: '<S251>/Protected Division1' */
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S255>/Calib'
         *  Constant: '<S258>/Constant Value'
         *  Constant: '<S258>/Constant Value1'
         *  Constant: '<S258>/Constant Value2'
         *  Constant: '<S258>/Constant Value3'
         *  Logic: '<S258>/AND'
         *  RelationalOperator: '<S258>/Greater Than or Equal '
         *  RelationalOperator: '<S258>/Greater Than or Equal 1'
         *  RelationalOperator: '<S258>/Not Equal'
         *  RelationalOperator: '<S258>/Not Equal1'
         *  Switch: '<S258>/Switch2'
         *  Switch: '<S258>/Switch3'
         */
        if ((VeERER_P_MtrA_charging_pwr != 0.0F) && (KeERER_k_MtrA_eff != 0.0F))
        {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Product: '<S258>/Division'
             */
            VeERER_P_Eng_MtrA_charging_pwr = VeERER_P_MtrA_charging_pwr /
                KeERER_k_MtrA_eff;
        }
        else if (VeERER_P_MtrA_charging_pwr > 0.0F)
        {
            /* Switch: '<S258>/Switch2' incorporates:
             *  Constant: '<S258>/MAXFLOAT'
             *  Switch: '<S258>/Switch1'
             */
            VeERER_P_Eng_MtrA_charging_pwr = 3.402823466E+38F;
        }
        else if (VeERER_P_MtrA_charging_pwr < 0.0F)
        {
            /* Switch: '<S258>/Switch3' incorporates:
             *  Constant: '<S258>/MINFLOAT'
             *  Switch: '<S258>/Switch1'
             *  Switch: '<S258>/Switch2'
             */
            VeERER_P_Eng_MtrA_charging_pwr = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Constant: '<S258>/Constant Value4'
             *  Switch: '<S258>/Switch2'
             *  Switch: '<S258>/Switch3'
             */
            VeERER_P_Eng_MtrA_charging_pwr = 0.0F;
        }

        /* End of Switch: '<S258>/Switch1' */
        /* End of Outputs for SubSystem: '<S251>/Protected Division1' */

        /* Sum: '<S251>/Sum2' */
        VeERER_P_Eng_propulsion_pwr = VeERER_P_Eng_total_pwr +
            VeERER_P_Eng_MtrA_charging_pwr;

        /* Outputs for Atomic SubSystem: '<S251>/Protected Division' */
        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S253>/Calib'
         *  Constant: '<S254>/Calib'
         *  Constant: '<S257>/Constant Value'
         *  Constant: '<S257>/Constant Value1'
         *  Constant: '<S257>/Constant Value2'
         *  Constant: '<S257>/Constant Value3'
         *  Logic: '<S257>/AND'
         *  RelationalOperator: '<S257>/Greater Than or Equal '
         *  RelationalOperator: '<S257>/Greater Than or Equal 1'
         *  RelationalOperator: '<S257>/Not Equal'
         *  RelationalOperator: '<S257>/Not Equal1'
         *  Switch: '<S257>/Switch2'
         *  Switch: '<S257>/Switch3'
         */
        if ((KeERER_k_ICE_trqpath_eff != 0.0F) && (KeERER_k_HVBat_trqpath_eff !=
             0.0F))
        {
            /* Switch: '<S257>/Switch1' incorporates:
             *  Product: '<S257>/Division'
             */
            rtb_Switch1_i = KeERER_k_ICE_trqpath_eff /
                KeERER_k_HVBat_trqpath_eff;
        }
        else if (KeERER_k_ICE_trqpath_eff > 0.0F)
        {
            /* Switch: '<S257>/Switch2' incorporates:
             *  Constant: '<S257>/MAXFLOAT'
             *  Switch: '<S257>/Switch1'
             */
            rtb_Switch1_i = 3.402823466E+38F;
        }
        else if (KeERER_k_ICE_trqpath_eff < 0.0F)
        {
            /* Switch: '<S257>/Switch3' incorporates:
             *  Constant: '<S257>/MINFLOAT'
             *  Switch: '<S257>/Switch1'
             *  Switch: '<S257>/Switch2'
             */
            rtb_Switch1_i = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S257>/Switch1' incorporates:
             *  Constant: '<S257>/Constant Value4'
             *  Switch: '<S257>/Switch2'
             *  Switch: '<S257>/Switch3'
             */
            rtb_Switch1_i = 0.0F;
        }

        /* End of Switch: '<S257>/Switch1' */
        /* End of Outputs for SubSystem: '<S251>/Protected Division' */
        /* End of Outputs for SubSystem: '<S9>/EstRangeDTE_PSA' */
        (void)Rte_Read_VeHVTR_I_HV_BatCurrArb_Value(&rtb_Vector_c);
        (void)Rte_Read_VeHVTR_U_HV_Volt_Value(&rtb_Sum2_f);

        /* Outputs for IfAction SubSystem: '<S9>/EstRangeDTE_PSA' incorporates:
         *  ActionPort: '<S191>/Action Port'
         */
        /* Product: '<S251>/Product2' incorporates:
         *  Inport: '<Root>/VeHVTR_I_HV_BatCurrArb'
         *  Inport: '<Root>/VeHVTR_U_HV_Volt'
         */
        VeERER_P_Eq_HVBat_propulsion_pwr = VeERER_P_Eng_propulsion_pwr *
            rtb_Switch1_i;

        /* Switch: '<S251>/Switch' incorporates:
         *  Constant: '<S251>/Constant Value4'
         *  Constant: '<S252>/Calib'
         */
        if (KeERER_b_HEV)
        {
            rtb_Switch1_i = VeERER_P_MtrA_charging_pwr;
        }
        else
        {
            rtb_Switch1_i = 0.0F;
        }

        /* End of Switch: '<S251>/Switch' */

        /* Sum: '<S251>/Sum1' incorporates:
         *  Product: '<S251>/Product'
         */
        VeERER_P_HVBat_propulsion_acc_pwr = (rtb_Vector_c * rtb_Sum2_f) -
            rtb_Switch1_i;

        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S251>/Constant Value5'
         *  Constant: '<S252>/Calib'
         */
        if (KeERER_b_HEV)
        {
            rtb_Switch1_i = VeERER_P_Eq_HVBat_propulsion_pwr;
        }
        else
        {
            rtb_Switch1_i = 0.0F;
        }

        /* End of Switch: '<S251>/Switch1' */

        /* Sum: '<S251>/Sum' */
        rtb_Switch1_i += VeERER_P_HVBat_propulsion_acc_pwr;

        /* Switch: '<S221>/Switch2' */
        if (VeERER_b_EstRange_Idle)
        {
            /* Switch: '<S221>/Switch2' incorporates:
             *  Constant: '<S221>/Constant Value8'
             */
            VeERER_P_BatPwrForRange = 0.0F;
        }
        else
        {
            /* Switch: '<S221>/Switch2' */
            VeERER_P_BatPwrForRange = rtb_Switch1_i;
        }

        /* End of Switch: '<S221>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S220>/EdgeRising1' */
        /* Logic: '<S245>/AND' incorporates:
         *  Logic: '<S245>/OR1'
         *  UnitDelay: '<S245>/Unit Delay'
         */
        rtb_AND_cke = (rtb_TmpSignalConversionAtVeHPMR_b_PropSy &&
                       (!ERER_ac_DW.UnitDelay_DSTATE_ju));

        /* Update for UnitDelay: '<S245>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_ju =
            rtb_TmpSignalConversionAtVeHPMR_b_PropSy;

        /* End of Outputs for SubSystem: '<S220>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S220>/EdgeRising' */
        /* Logic: '<S244>/AND' incorporates:
         *  Logic: '<S244>/OR1'
         *  UnitDelay: '<S244>/Unit Delay'
         */
        rtb_AND_hl = (rtb_AND_nv && (!ERER_ac_DW.UnitDelay_DSTATE_co));

        /* Update for UnitDelay: '<S244>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_co = rtb_AND_nv;

        /* End of Outputs for SubSystem: '<S220>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S220>/IntegratorK Reset Enabled Limited' */
        /* Switch: '<S246>/Switch' incorporates:
         *  Logic: '<S220>/Logical1'
         *  Switch: '<S246>/Switch1'
         */
        if (rtb_AND_cke || rtb_AND_hl)
        {
            /* Switch: '<S246>/Switch' incorporates:
             *  Constant: '<S220>/Constant Value2'
             */
            ERER_ac_DW.UnitDelay_DSTATE_g = 0.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
            {
                /* Switch: '<S220>/Switch' incorporates:
                 *  Constant: '<S247>/Calib'
                 *  Switch: '<S246>/Switch1'
                 */
                if (KeERER_b_UseSpeedAdjPower)
                {
                    rtb_Switch1_i = VeERER_P_BatPwrForRange;
                }

                /* End of Switch: '<S220>/Switch' */

                /* Switch: '<S246>/Switch' incorporates:
                 *  Constant: '<S220>/Constant Value'
                 *  Product: '<S246>/Multiplication'
                 *  Sum: '<S246>/Sum//Sub'
                 *  Switch: '<S246>/Switch1'
                 *  UnitDelay: '<S246>/Unit Delay'
                 */
                ERER_ac_DW.UnitDelay_DSTATE_g += rtb_Switch1_i * 0.1F;
            }
        }

        /* End of Switch: '<S246>/Switch' */

        /* Outputs for Atomic SubSystem: '<S246>/Limiter' */
        /* Switch: '<S250>/Switch1' incorporates:
         *  Constant: '<S248>/Calib'
         *  RelationalOperator: '<S250>/Relational Operator'
         */
        if (KeERER_k_PwrIntegratorMax < ERER_ac_DW.UnitDelay_DSTATE_g)
        {
            /* Sum: '<S259>/Sum1' */
            rtb_Sum2 = KeERER_k_PwrIntegratorMax;
        }
        else
        {
            /* Sum: '<S259>/Sum1' */
            rtb_Sum2 = ERER_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S250>/Switch1' */

        /* Switch: '<S250>/Switch' incorporates:
         *  Constant: '<S249>/Calib'
         *  RelationalOperator: '<S250>/Relational Operator1'
         *  UnitDelay: '<S246>/Unit Delay'
         */
        if (rtb_Sum2 > KeERER_k_PwrIntegratorMin)
        {
            ERER_ac_DW.UnitDelay_DSTATE_g = rtb_Sum2;
        }
        else
        {
            ERER_ac_DW.UnitDelay_DSTATE_g = KeERER_k_PwrIntegratorMin;
        }

        /* End of Switch: '<S250>/Switch' */
        /* End of Outputs for SubSystem: '<S246>/Limiter' */
        /* End of Outputs for SubSystem: '<S220>/IntegratorK Reset Enabled Limited' */

        /* Product: '<S220>/Product2' incorporates:
         *  Constant: '<S220>/Constant Value8'
         *  UnitDelay: '<S246>/Unit Delay'
         */
        VeERER_E_VehEnergyWhr = ERER_ac_DW.UnitDelay_DSTATE_g / 3600.0F;

        /* Chart: '<S191>/PSA_WhrpKMCalc' incorporates:
         *  Constant: '<S215>/Calib'
         *  Constant: '<S216>/Calib'
         *  Constant: '<S217>/Calib'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        /* Gateway: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_WhrpKMCalc */
        /* During: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_WhrpKMCalc */
        if (((uint32)ERER_ac_DW.is_active_c2_ERER_ac) == 0U)
        {
            /* Entry: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_WhrpKMCalc */
            ERER_ac_DW.is_active_c2_ERER_ac = 1U;

            /* Entry Internal: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_WhrpKMCalc */
            /* Transition: '<S223>:308' */
            ERER_ac_DW.i = 0U;
            VeERER_l_VehDist_Init = 0.0F;
            VeERER_E_VehEnWhr_Init = 0.0F;
            VeERER_E_distFncSOC_avgWhrpkm = ERER_ac_DW.UnitDelay1_DSTATE_o;
            VeERER_E_totaldist_avgWhrpkm = ERER_ac_DW.UnitDelay1_DSTATE_o;
            ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_ConsumptionCalculation;

            /* Entry 'ConsumptionCalculation': '<S223>:312' */
            VeERER_l_delta_VehDist = ERER_ac_DW.UnitDelay_DSTATE_h -
                VeERER_l_VehDist_Init;
            VeERER_E_delta_VehEnergy = VeERER_E_VehEnergyWhr -
                VeERER_E_VehEnWhr_Init;
            VeERER_b_ECOutputFlag = false;
        }
        else
        {
            guard1 = false;
            guard2 = false;
            guard3 = false;
            switch (ERER_ac_DW.is_c2_ERER_ac)
            {
              case ERER_ac_IN_ConsumptionCalculation:
                /* During 'ConsumptionCalculation': '<S223>:312' */
                if (rtb_Comparison4_d)
                {
                    /* Transition: '<S223>:243' */
                    /* Transition: '<S223>:277' */
                    /* Transition: '<S223>:241' */
                    ERER_ac_DW.i = 0U;
                    VeERER_l_VehDist_Init = 0.0F;
                    VeERER_E_VehEnWhr_Init = 0.0F;
                    VeERER_E_distFncSOC_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    VeERER_E_totaldist_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    guard1 = true;
                }
                else if ((ERER_ac_DW.i < KeERER_Cnt_UnitWin_total) &&
                         (VeERER_l_delta_VehDist >= KeERER_l_unit_DistWindow))
                {
                    /* Transition: '<S223>:202' */
                    ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_PopulateArray;

                    /* Entry 'PopulateArray': '<S223>:274' */
                    ERER_ac_DW.ECAry[ERER_ac_DW.i] = VeERER_E_delta_VehEnergy /
                        VeERER_l_delta_VehDist;
                    VeERER_E_VehEnWhr_Init = VeERER_E_VehEnergyWhr;
                    VeERER_l_VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
                }
                else if ((ERER_ac_DW.i >= KeERER_Cnt_UnitWin_total) &&
                         (VeERER_l_delta_VehDist >= KeERER_l_unit_DistWindow))
                {
                    /* Transition: '<S223>:271' */
                    ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_UpdateArray;

                    /* Entry Internal 'UpdateArray': '<S223>:281' */
                    /* Transition: '<S223>:292' */
                    for (j = 0U; ((sint32)j) < (((sint32)
                            KeERER_Cnt_UnitWin_total) - 1); j = (uint16)((sint32)
                            (((sint32)j) + 1)))
                    {
                        /* Transition: '<S223>:293' */
                        /* Transition: '<S223>:296' */
                        ERER_ac_DW.ECAry[j] = ERER_ac_DW.ECAry[((sint32)j) + 1];

                        /* Transition: '<S223>:294' */
                    }

                    /* Transition: '<S223>:295' */
                    rtb_Switch1_i = VeERER_E_delta_VehEnergy /
                        VeERER_l_delta_VehDist;
                    if (rtb_Switch1_i > KeERER_E_Whrpkm_Max)
                    {
                        /* Transition: '<S223>:297' */
                        /* Transition: '<S223>:299' */
                        rtb_Switch1_i = KeERER_E_Whrpkm_Max;

                        /* Transition: '<S223>:302' */
                    }
                    else if (rtb_Switch1_i < KeERER_E_Whrpkm_Min)
                    {
                        /* Transition: '<S223>:298' */
                        /* Transition: '<S223>:301' */
                        rtb_Switch1_i = KeERER_E_Whrpkm_Min;

                        /* Transition: '<S223>:303' */
                    }
                    else
                    {
                        /* Transition: '<S223>:300' */
                    }

                    /* Transition: '<S223>:304' */
                    ERER_ac_DW.ECAry[((sint32)KeERER_Cnt_UnitWin_total) - 1] =
                        rtb_Switch1_i;
                    VeERER_E_VehEnWhr_Init = VeERER_E_VehEnergyWhr;
                    VeERER_l_VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
                }
                else
                {
                    /* Transition: '<S223>:311' */
                    guard1 = true;
                }
                break;

              case ERER_ac_IN_OutputCalculation:
                /* During 'OutputCalculation': '<S223>:206' */
                if (rtb_Comparison4_d)
                {
                    /* Transition: '<S223>:204' */
                    /* Transition: '<S223>:310' */
                    /* Transition: '<S223>:273' */
                    /* Transition: '<S223>:307' */
                    /* Transition: '<S223>:305' */
                    /* Transition: '<S223>:277' */
                    /* Transition: '<S223>:241' */
                    ERER_ac_DW.i = 0U;
                    VeERER_l_VehDist_Init = 0.0F;
                    VeERER_E_VehEnWhr_Init = 0.0F;
                    VeERER_E_distFncSOC_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    VeERER_E_totaldist_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                }
                else
                {
                    /* Transition: '<S223>:200' */
                    /* Transition: '<S223>:237' */
                }

                ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_ConsumptionCalculation;

                /* Entry 'ConsumptionCalculation': '<S223>:312' */
                VeERER_l_delta_VehDist = ERER_ac_DW.UnitDelay_DSTATE_h -
                    VeERER_l_VehDist_Init;
                VeERER_E_delta_VehEnergy = VeERER_E_VehEnergyWhr -
                    VeERER_E_VehEnWhr_Init;
                VeERER_b_ECOutputFlag = false;
                break;

              case ERER_ac_IN_PartialOutputCalculation:
                /* During 'PartialOutputCalculation': '<S223>:245' */
                if (rtb_Comparison4_d)
                {
                    /* Transition: '<S223>:203' */
                    /* Transition: '<S223>:307' */
                    /* Transition: '<S223>:305' */
                    /* Transition: '<S223>:277' */
                    /* Transition: '<S223>:241' */
                    ERER_ac_DW.i = 0U;
                    VeERER_l_VehDist_Init = 0.0F;
                    VeERER_E_VehEnWhr_Init = 0.0F;
                    VeERER_E_distFncSOC_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    VeERER_E_totaldist_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    guard2 = true;
                }
                else
                {
                    if (((sint32)ERER_ac_DW.i) < (((sint32)
                            KeERER_Cnt_UnitWin_total) - 1))
                    {
                        /* Transition: '<S223>:279' */
                        ERER_ac_DW.i = (uint16)((sint32)(((sint32)ERER_ac_DW.i)
                            + 1));
                        guard2 = true;
                    }
                }
                break;

              case ERER_ac_IN_PopulateArray:
                /* During 'PopulateArray': '<S223>:274' */
                if (rtb_Comparison4_d)
                {
                    /* Transition: '<S223>:270' */
                    /* Transition: '<S223>:273' */
                    /* Transition: '<S223>:307' */
                    /* Transition: '<S223>:305' */
                    /* Transition: '<S223>:277' */
                    /* Transition: '<S223>:241' */
                    ERER_ac_DW.i = 0U;
                    VeERER_l_VehDist_Init = 0.0F;
                    VeERER_E_VehEnWhr_Init = 0.0F;
                    VeERER_E_distFncSOC_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    VeERER_E_totaldist_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    guard3 = true;
                }
                else if ((((sint32)ERER_ac_DW.i) >= (((sint32)rtb_Summation_bp)
                           - 1)) && (((sint32)ERER_ac_DW.i) < (((sint32)
                            KeERER_Cnt_UnitWin_total) - 1)))
                {
                    /* Transition: '<S223>:239' */
                    ERER_ac_DW.is_c2_ERER_ac =
                        ERER_ac_IN_PartialOutputCalculation;

                    /* Entry Internal 'PartialOutputCalculation': '<S223>:245' */
                    /* Transition: '<S223>:256' */
                    j = (uint16)((sint32)((((sint32)ERER_ac_DW.i) - ((sint32)
                                    rtb_Summation_bp)) + 1));
                    VeERER_E_distFncSOC_avgWhrpkm = 0.0F;
                    while (j <= ERER_ac_DW.i)
                    {
                        /* Transition: '<S223>:257' */
                        /* Transition: '<S223>:260' */
                        if (ERER_ac_DW.ECAry[j] > KeERER_E_Whrpkm_Max)
                        {
                            /* Transition: '<S223>:262' */
                            /* Transition: '<S223>:265' */
                            rtb_Switch1_i = KeERER_E_Whrpkm_Max;

                            /* Transition: '<S223>:267' */
                        }
                        else if (ERER_ac_DW.ECAry[j] < KeERER_E_Whrpkm_Min)
                        {
                            /* Transition: '<S223>:261' */
                            /* Transition: '<S223>:263' */
                            rtb_Switch1_i = KeERER_E_Whrpkm_Min;

                            /* Transition: '<S223>:266' */
                        }
                        else
                        {
                            /* Transition: '<S223>:264' */
                            rtb_Switch1_i = ERER_ac_DW.ECAry[j];
                        }

                        /* Transition: '<S223>:268' */
                        VeERER_E_distFncSOC_avgWhrpkm = rtb_Switch1_i +
                            VeERER_E_distFncSOC_avgWhrpkm;
                        j = (uint16)((sint32)(((sint32)j) + 1));

                        /* Transition: '<S223>:258' */
                    }

                    /* Transition: '<S223>:259' */
                    VeERER_E_distFncSOC_avgWhrpkm =
                        VeERER_E_distFncSOC_avgWhrpkm / ((float32)
                        rtb_Summation_bp);
                    VeERER_b_ECOutputFlag = true;
                }
                else if (((sint32)ERER_ac_DW.i) < (((sint32)
                           KeERER_Cnt_UnitWin_total) - 1))
                {
                    /* Transition: '<S223>:238' */
                    ERER_ac_DW.i = (uint16)((sint32)(((sint32)ERER_ac_DW.i) + 1));
                    guard3 = true;
                }
                else
                {
                    if ((((sint32)KeERER_Cnt_UnitWin_total) - 1) == ((sint32)
                            ERER_ac_DW.i))
                    {
                        /* Transition: '<S223>:309' */
                        ERER_ac_DW.i = (uint16)((sint32)(((sint32)ERER_ac_DW.i)
                            + 1));
                        ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_OutputCalculation;
                        ERER_ac_enter_internal_OutputCalculation
                            (&rtb_Summation_bp);
                    }
                }
                break;

              default:
                /* During 'UpdateArray': '<S223>:281' */
                if (rtb_Comparison4_d)
                {
                    /* Transition: '<S223>:242' */
                    /* Transition: '<S223>:201' */
                    /* Transition: '<S223>:240' */
                    /* Transition: '<S223>:310' */
                    /* Transition: '<S223>:273' */
                    /* Transition: '<S223>:307' */
                    /* Transition: '<S223>:305' */
                    /* Transition: '<S223>:277' */
                    /* Transition: '<S223>:241' */
                    ERER_ac_DW.i = 0U;
                    VeERER_l_VehDist_Init = 0.0F;
                    VeERER_E_VehEnWhr_Init = 0.0F;
                    VeERER_E_distFncSOC_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    VeERER_E_totaldist_avgWhrpkm =
                        ERER_ac_DW.UnitDelay1_DSTATE_o;
                    ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_ConsumptionCalculation;

                    /* Entry 'ConsumptionCalculation': '<S223>:312' */
                    VeERER_l_delta_VehDist = ERER_ac_DW.UnitDelay_DSTATE_h -
                        VeERER_l_VehDist_Init;
                    VeERER_E_delta_VehEnergy = VeERER_E_VehEnergyWhr -
                        VeERER_E_VehEnWhr_Init;
                    VeERER_b_ECOutputFlag = false;
                }
                else
                {
                    /* Transition: '<S223>:306' */
                    ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_OutputCalculation;
                    ERER_ac_enter_internal_OutputCalculation(&rtb_Summation_bp);
                }
                break;
            }

            if (guard3)
            {
                ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_ConsumptionCalculation;

                /* Entry 'ConsumptionCalculation': '<S223>:312' */
                VeERER_l_delta_VehDist = ERER_ac_DW.UnitDelay_DSTATE_h -
                    VeERER_l_VehDist_Init;
                VeERER_E_delta_VehEnergy = VeERER_E_VehEnergyWhr -
                    VeERER_E_VehEnWhr_Init;
                VeERER_b_ECOutputFlag = false;
            }

            if (guard2)
            {
                ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_ConsumptionCalculation;

                /* Entry 'ConsumptionCalculation': '<S223>:312' */
                VeERER_l_delta_VehDist = ERER_ac_DW.UnitDelay_DSTATE_h -
                    VeERER_l_VehDist_Init;
                VeERER_E_delta_VehEnergy = VeERER_E_VehEnergyWhr -
                    VeERER_E_VehEnWhr_Init;
                VeERER_b_ECOutputFlag = false;
            }

            if (guard1)
            {
                ERER_ac_DW.is_c2_ERER_ac = ERER_ac_IN_ConsumptionCalculation;

                /* Entry 'ConsumptionCalculation': '<S223>:312' */
                VeERER_l_delta_VehDist = ERER_ac_DW.UnitDelay_DSTATE_h -
                    VeERER_l_VehDist_Init;
                VeERER_E_delta_VehEnergy = VeERER_E_VehEnergyWhr -
                    VeERER_E_VehEnWhr_Init;
                VeERER_b_ECOutputFlag = false;
            }
        }

        /* End of Chart: '<S191>/PSA_WhrpKMCalc' */

        /* Outputs for Atomic SubSystem: '<S226>/EdgeRising3' */
        /* Logic: '<S266>/AND' incorporates:
         *  Logic: '<S266>/OR1'
         *  UnitDelay: '<S266>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
            !ERER_ac_DW.UnitDelay_DSTATE_m5;

        /* Update for UnitDelay: '<S266>/Unit Delay' incorporates:
         *  Constant: '<S226>/Constant Value2'
         */
        ERER_ac_DW.UnitDelay_DSTATE_m5 = true;

        /* End of Outputs for SubSystem: '<S226>/EdgeRising3' */

        /* Outputs for Atomic SubSystem: '<S226>/EdgeRising4' */
        /* Logic: '<S267>/AND' incorporates:
         *  Logic: '<S267>/OR1'
         *  UnitDelay: '<S267>/Unit Delay'
         */
        rtb_Comparison4_d = (rtb_AND_nv && (!ERER_ac_DW.UnitDelay_DSTATE_pmm));

        /* Update for UnitDelay: '<S267>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_pmm = rtb_AND_nv;

        /* End of Outputs for SubSystem: '<S226>/EdgeRising4' */

        /* Outputs for Atomic SubSystem: '<S226>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S265>/Switch1' incorporates:
         *  Logic: '<S226>/Logical3'
         *  Switch: '<S226>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy || rtb_Comparison4_d)
        {
            /* Switch: '<S265>/Switch1' */
            VeERER_E_distFncSOC_avgWhrpkm_Fiilt = ERER_ac_DW.UnitDelay1_DSTATE_o;
        }
        else
        {
            if (ERER_ac_DW.UnitDelay_DSTATE_b)
            {
                /* Switch: '<S226>/Switch1' */
                rtb_Switch1_i = VeERER_E_distFncSOC_avgWhrpkm;
            }
            else
            {
                /* Switch: '<S226>/Switch1' */
                rtb_Switch1_i = ERER_ac_B.VeERER_F_WHrpKM_ChargingSF;
            }

            /* Switch: '<S265>/Switch1' incorporates:
             *  Constant: '<S269>/Calib'
             *  Product: '<S265>/Multiplication'
             *  Sum: '<S265>/Subtraction'
             *  Sum: '<S265>/Summation'
             *  UnitDelay: '<S265>/Unit Delay'
             */
            VeERER_E_distFncSOC_avgWhrpkm_Fiilt = ((rtb_Switch1_i -
                ERER_ac_DW.UnitDelay_DSTATE_c) * KeERER_k_WhrpKM_FilterGain) +
                ERER_ac_DW.UnitDelay_DSTATE_c;
        }

        /* End of Switch: '<S265>/Switch1' */

        /* Update for UnitDelay: '<S265>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_c = VeERER_E_distFncSOC_avgWhrpkm_Fiilt;

        /* End of Outputs for SubSystem: '<S226>/Digital Lowpass Reset Enabled' */

        /* Switch: '<S226>/Switch' incorporates:
         *  Logic: '<S226>/Logical2'
         */
        if (!rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* Switch: '<S226>/Switch' incorporates:
             *  Constant: '<S268>/Calib'
             */
            VeERER_F_WHrpKM_SOCDH = KeERER_f_WhrpKMResetVal;
        }
        else
        {
            /* Switch: '<S226>/Switch' */
            VeERER_F_WHrpKM_SOCDH = VeERER_E_distFncSOC_avgWhrpkm_Fiilt;
        }

        /* End of Switch: '<S226>/Switch' */

        /* Outputs for Atomic SubSystem: '<S191>/Protected Division' */
        /* Switch: '<S224>/Switch1' incorporates:
         *  Constant: '<S224>/Constant Value'
         *  Constant: '<S224>/Constant Value1'
         *  Constant: '<S224>/Constant Value2'
         *  Constant: '<S224>/Constant Value3'
         *  Logic: '<S224>/AND'
         *  RelationalOperator: '<S224>/Greater Than or Equal '
         *  RelationalOperator: '<S224>/Greater Than or Equal 1'
         *  RelationalOperator: '<S224>/Not Equal'
         *  RelationalOperator: '<S224>/Not Equal1'
         *  Switch: '<S224>/Switch2'
         *  Switch: '<S224>/Switch3'
         */
        if ((rtb_Add != 0.0F) && (VeERER_F_WHrpKM_SOCDH != 0.0F))
        {
            /* Switch: '<S224>/Switch1' incorporates:
             *  Product: '<S224>/Division'
             */
            rtb_Switch1_i = rtb_Add / VeERER_F_WHrpKM_SOCDH;
        }
        else if (rtb_Add > 0.0F)
        {
            /* Switch: '<S224>/Switch2' incorporates:
             *  Constant: '<S224>/MAXFLOAT'
             *  Switch: '<S224>/Switch1'
             */
            rtb_Switch1_i = 3.402823466E+38F;
        }
        else if (rtb_Add < 0.0F)
        {
            /* Switch: '<S224>/Switch3' incorporates:
             *  Constant: '<S224>/MINFLOAT'
             *  Switch: '<S224>/Switch1'
             *  Switch: '<S224>/Switch2'
             */
            rtb_Switch1_i = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S224>/Switch1' incorporates:
             *  Constant: '<S224>/Constant Value4'
             *  Switch: '<S224>/Switch2'
             *  Switch: '<S224>/Switch3'
             */
            rtb_Switch1_i = 0.0F;
        }

        /* End of Switch: '<S224>/Switch1' */
        /* End of Outputs for SubSystem: '<S191>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S235>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S240>/EdgeRising' */
        /* Logic: '<S241>/AND' incorporates:
         *  Logic: '<S241>/OR1'
         *  UnitDelay: '<S241>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel =
            !ERER_ac_DW.UnitDelay_DSTATE_fi2;

        /* Update for UnitDelay: '<S241>/Unit Delay' incorporates:
         *  Constant: '<S235>/TRUE Constant1'
         */
        ERER_ac_DW.UnitDelay_DSTATE_fi2 = true;

        /* End of Outputs for SubSystem: '<S240>/EdgeRising' */

        /* Switch: '<S240>/Switch1' incorporates:
         *  Constant: '<S240>/Constant Value'
         *  Constant: '<S240>/Constant Value1'
         *  Logic: '<S240>/OR'
         *  MinMax: '<S240>/Minimum'
         *  Sum: '<S240>/Summation'
         *  UnitDelay: '<S240>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            ERER_ac_DW.UnitDelay_DSTATE_p2 = 0U;
        }
        else if (1 < ((sint32)((uint16)(((uint32)ERER_ac_DW.UnitDelay_DSTATE_p2)
                    + 1U))))
        {
            /* MinMax: '<S240>/Minimum' */
            ERER_ac_DW.UnitDelay_DSTATE_p2 = 1U;
        }
        else
        {
            /* MinMax: '<S240>/Minimum' incorporates:
             *  Constant: '<S240>/Constant Value'
             *  Sum: '<S240>/Summation'
             *  UnitDelay: '<S240>/Unit Delay'
             */
            ERER_ac_DW.UnitDelay_DSTATE_p2 = (uint16)(((uint32)
                ERER_ac_DW.UnitDelay_DSTATE_p2) + 1U);
        }

        /* End of Switch: '<S240>/Switch1' */

        /* Switch: '<S235>/Switch1' incorporates:
         *  Constant: '<S235>/Constant Value'
         *  RelationalOperator: '<S240>/Greater  Than'
         *  UnitDelay: '<S240>/Unit Delay'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        if (((sint32)ERER_ac_DW.UnitDelay_DSTATE_p2) < 1)
        {
            ERER_ac_DW.UnitDelay1_DSTATE_a = ERER_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S235>/Switch1' */
        /* End of Outputs for SubSystem: '<S235>/Turn On Delay Sample' */

        /* Sum: '<S228>/Subtraction1' incorporates:
         *  Constant: '<S231>/Calib'
         *  Product: '<S228>/Multiplication'
         *  Sum: '<S214>/Sum1'
         *  Sum: '<S228>/Subtraction'
         *  UnitDelay: '<S214>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay_DSTATE_n += ((rtb_Switch1_i -
            ERER_ac_DW.UnitDelay1_DSTATE_a) - ERER_ac_DW.UnitDelay_DSTATE_n) *
            KeERER_k_DRDT_FiltCoef;

        /* Outputs for Atomic SubSystem: '<S229>/EdgeRising' */
        /* Logic: '<S237>/OR1' incorporates:
         *  UnitDelay: '<S237>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel =
            !ERER_ac_DW.UnitDelay_DSTATE_ja;

        /* Update for UnitDelay: '<S237>/Unit Delay' incorporates:
         *  Constant: '<S229>/TRUE Constant'
         */
        ERER_ac_DW.UnitDelay_DSTATE_ja = true;

        /* Switch: '<S238>/Switch1' incorporates:
         *  Logic: '<S237>/AND'
         *  Sum: '<S229>/Sum3'
         *  UnitDelay: '<S229>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            ERER_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_i;
        }
        else
        {
            /* Lookup_n-D: '<S234>/Vector' incorporates:
             *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
             */
            rtb_Vector_c = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
                  &(KxERER_r_KMtoEmpty_RateLimit[0])), ((const float32 *)
                  &(KtERER_r_KMtoEmpty_RateLimit[0])), 4U);

            /* Sum: '<S229>/Sum2' incorporates:
             *  UnitDelay: '<S229>/Unit Delay'
             */
            rtb_Sum2_f = rtb_Switch1_i - ERER_ac_DW.UnitDelay_DSTATE_d;

            /* Outputs for Atomic SubSystem: '<S229>/Limiter' */
            /* Switch: '<S239>/Switch1' incorporates:
             *  RelationalOperator: '<S239>/Relational Operator'
             */
            if (rtb_Vector_c < rtb_Sum2_f)
            {
                /* Switch: '<S239>/Switch1' */
                rtb_Sum2_f = rtb_Vector_c;
            }

            /* End of Switch: '<S239>/Switch1' */

            /* Switch: '<S239>/Switch' incorporates:
             *  Constant: '<S214>/Constant Value'
             *  RelationalOperator: '<S239>/Relational Operator1'
             */
            if (rtb_Sum2_f <= -1.0F)
            {
                rtb_Sum2_f = -1.0F;
            }

            /* End of Switch: '<S239>/Switch' */
            /* End of Outputs for SubSystem: '<S229>/Limiter' */
            ERER_ac_DW.UnitDelay_DSTATE_d += rtb_Sum2_f;
        }

        /* End of Switch: '<S238>/Switch1' */
        /* End of Outputs for SubSystem: '<S229>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S214>/EdgeFalling' */
        /* Logic: '<S230>/AND' incorporates:
         *  UnitDelay: '<S230>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel =
            (rtb_TmpSignalConversionAtVeESSR_b_Hyb_Pr &&
             (ERER_ac_DW.UnitDelay_DSTATE_kq));

        /* Update for UnitDelay: '<S230>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_kq = VeERER_b_EstRangeCharge;

        /* End of Outputs for SubSystem: '<S214>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S236>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S242>/EdgeRising' */
        /* Logic: '<S243>/AND' incorporates:
         *  Logic: '<S243>/OR1'
         *  UnitDelay: '<S243>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
            !ERER_ac_DW.UnitDelay_DSTATE_e;

        /* Update for UnitDelay: '<S243>/Unit Delay' incorporates:
         *  Constant: '<S236>/TRUE Constant1'
         */
        ERER_ac_DW.UnitDelay_DSTATE_e = true;

        /* End of Outputs for SubSystem: '<S242>/EdgeRising' */

        /* Switch: '<S242>/Switch1' incorporates:
         *  Constant: '<S242>/Constant Value'
         *  Constant: '<S242>/Constant Value1'
         *  Logic: '<S242>/OR'
         *  MinMax: '<S242>/Minimum'
         *  Sum: '<S242>/Summation'
         *  UnitDelay: '<S242>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
        {
            ERER_ac_DW.UnitDelay_DSTATE_nh = 0U;
        }
        else if (1 < ((sint32)((uint16)(((uint32)ERER_ac_DW.UnitDelay_DSTATE_nh)
                    + 1U))))
        {
            /* MinMax: '<S242>/Minimum' */
            ERER_ac_DW.UnitDelay_DSTATE_nh = 1U;
        }
        else
        {
            /* MinMax: '<S242>/Minimum' incorporates:
             *  Constant: '<S242>/Constant Value'
             *  Sum: '<S242>/Summation'
             *  UnitDelay: '<S242>/Unit Delay'
             */
            ERER_ac_DW.UnitDelay_DSTATE_nh = (uint16)(((uint32)
                ERER_ac_DW.UnitDelay_DSTATE_nh) + 1U);
        }

        /* End of Switch: '<S242>/Switch1' */
        /* End of Outputs for SubSystem: '<S236>/Turn On Delay Sample' */

        /* Switch: '<S214>/Switch1' incorporates:
         *  Constant: '<S236>/Constant Value'
         *  RelationalOperator: '<S242>/Greater  Than'
         *  Switch: '<S236>/Switch1'
         *  UnitDelay: '<S242>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* Sum: '<S259>/Sum1' incorporates:
             *  UnitDelay: '<S9>/Unit Delay'
             */
            rtb_Sum2 = ERER_ac_DW.UnitDelay_DSTATE_o;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S236>/Turn On Delay Sample' */
            if (((sint32)ERER_ac_DW.UnitDelay_DSTATE_nh) >= 1)
            {
                /* Switch: '<S236>/Switch1' incorporates:
                 *  Sum: '<S259>/Sum1'
                 *  UnitDelay: '<S236>/Unit Delay1'
                 */
                rtb_Sum2 = ERER_ac_DW.UnitDelay1_DSTATE_f3;
            }
            else
            {
                /* Sum: '<S259>/Sum1' incorporates:
                 *  UnitDelay: '<S9>/Unit Delay'
                 */
                rtb_Sum2 = ERER_ac_DW.UnitDelay_DSTATE_o;
            }

            /* End of Outputs for SubSystem: '<S236>/Turn On Delay Sample' */
        }

        /* End of Switch: '<S214>/Switch1' */

        /* Sum: '<S227>/Subtraction1' incorporates:
         *  Lookup_n-D: '<S232>/Vector'
         *  Lookup_n-D: '<S233>/Vector'
         *  MinMax: '<S214>/MinMax1'
         *  Product: '<S227>/Multiplication'
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  Sum: '<S227>/Subtraction'
         *  Sum: '<S228>/Subtraction1'
         *  UnitDelay: '<S214>/Unit Delay'
         *  UnitDelay: '<S229>/Unit Delay'
         *  UnitDelay: '<S236>/Unit Delay1'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_f3 = ((ERER_ac_DW.UnitDelay_DSTATE_d -
            rtb_Sum2) * fmaxf(look1_iflf_binlca_16a
                              (ERER_ac_DW.UnitDelay_DSTATE_n, ((const float32 *)
            &(KxERER_k_KMtoEmpty_FiltCoef[0])), ((const float32 *)
            &(KtERER_k_KMtoEmpty_FiltCoef[0])), 12U), look1_iflf_binlca_16a
                              (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const
            float32 *)&(KxERER_k_KMtoEmpty_LowSOC[0])), ((const float32 *)
            &(KtERER_k_KMtoEmpty_LowSOC[0])), 4U))) + rtb_Sum2;

        /* Outputs for Atomic SubSystem: '<S191>/Protected Division1' */
        /* Switch: '<S225>/Switch1' incorporates:
         *  Constant: '<S225>/Constant Value'
         *  Constant: '<S225>/Constant Value1'
         *  Constant: '<S225>/Constant Value2'
         *  Constant: '<S225>/Constant Value3'
         *  Logic: '<S225>/AND'
         *  RelationalOperator: '<S225>/Greater Than or Equal '
         *  RelationalOperator: '<S225>/Greater Than or Equal 1'
         *  RelationalOperator: '<S225>/Not Equal'
         *  RelationalOperator: '<S225>/Not Equal1'
         *  Switch: '<S225>/Switch2'
         *  Switch: '<S225>/Switch3'
         */
        if ((rtb_Add != 0.0F) && (VeERER_E_totaldist_avgWhrpkm != 0.0F))
        {
            /* Switch: '<S225>/Switch1' incorporates:
             *  Product: '<S225>/Division'
             */
            rtb_Vector_c = rtb_Add / VeERER_E_totaldist_avgWhrpkm;
        }
        else if (rtb_Add > 0.0F)
        {
            /* Switch: '<S225>/Switch2' incorporates:
             *  Constant: '<S225>/MAXFLOAT'
             *  Switch: '<S225>/Switch1'
             */
            rtb_Vector_c = 3.402823466E+38F;
        }
        else if (rtb_Add < 0.0F)
        {
            /* Switch: '<S225>/Switch3' incorporates:
             *  Constant: '<S225>/MINFLOAT'
             *  Switch: '<S225>/Switch1'
             *  Switch: '<S225>/Switch2'
             */
            rtb_Vector_c = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S225>/Switch1' incorporates:
             *  Constant: '<S225>/Constant Value4'
             *  Switch: '<S225>/Switch2'
             *  Switch: '<S225>/Switch3'
             */
            rtb_Vector_c = 0.0F;
        }

        /* End of Switch: '<S225>/Switch1' */
        /* End of Outputs for SubSystem: '<S191>/Protected Division1' */

        /* Sum: '<S222>/Sum1' incorporates:
         *  UnitDelay: '<S236>/Unit Delay1'
         */
        rtb_Vector_c -= ERER_ac_DW.UnitDelay1_DSTATE_f3;

        /* Lookup_n-D: '<S262>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        rtb_Sum2_f = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
              &(KxERER_l_RTI_Thrshld[0])), ((const float32 *)
              &(KtERER_l_RTI_Thrshld[0])), 4U);

        /* Lookup_n-D: '<S261>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, ((const float32 *)
              &(KxERER_l_RTI_Hys[0])), ((const float32 *)&(KtERER_l_RTI_Hys[0])),
             4U);

        /* Chart: '<S222>/Stateflow Chart' */
        /* Gateway: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/Stateflow
           Chart */
        /* During: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/Stateflow
           Chart */
        if (((uint32)ERER_ac_DW.is_active_c3_ERER_ac) == 0U)
        {
            /* Entry: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/Stateflow
               Chart */
            ERER_ac_DW.is_active_c3_ERER_ac = 1U;

            /* Entry Internal: ERER_MedTEH/EREC/DTE/EstRangeDTE_PSA/PSA_RTI/Stateflow
               Chart */
            /* Transition: '<S263>:5' */
            ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_SNA;

            /* Entry 'SNA': '<S263>:1' */
            rtb_VeERER_e_RTI = CeERER_e_SNA;
        }
        else
        {
            switch (ERER_ac_DW.is_c3_ERER_ac)
            {
              case ERER_ac_IN_Dash:
                rtb_VeERER_e_RTI = CeERER_e_Dash;

                /* During 'Dash': '<S263>:3' */
                if (rtb_Vector_c < (-rtb_Sum2_f))
                {
                    /* Transition: '<S263>:10' */
                    ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_UP;

                    /* Entry 'UP': '<S263>:2' */
                    rtb_VeERER_e_RTI = CeERER_e_ArrowUp;
                }
                else
                {
                    if (rtb_Vector_c > rtb_Sum2_f)
                    {
                        /* Transition: '<S263>:11' */
                        ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_Down;

                        /* Entry 'Down': '<S263>:4' */
                        rtb_VeERER_e_RTI = CeERER_e_ArrowDown;
                    }
                }
                break;

              case ERER_ac_IN_Down:
                rtb_VeERER_e_RTI = CeERER_e_ArrowDown;

                /* During 'Down': '<S263>:4' */
                if (rtb_Vector_c <= (rtb_Sum2_f -
                                     rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B))
                {
                    /* Transition: '<S263>:12' */
                    ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_Dash;

                    /* Entry 'Dash': '<S263>:3' */
                    rtb_VeERER_e_RTI = CeERER_e_Dash;
                }
                break;

              case ERER_ac_IN_SNA:
                rtb_VeERER_e_RTI = CeERER_e_SNA;

                /* During 'SNA': '<S263>:1' */
                if ((rtb_Vector_c >= (-rtb_Sum2_f)) && (rtb_Vector_c <=
                        rtb_Sum2_f))
                {
                    /* Transition: '<S263>:7' */
                    ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_Dash;

                    /* Entry 'Dash': '<S263>:3' */
                    rtb_VeERER_e_RTI = CeERER_e_Dash;
                }
                else if (rtb_Vector_c < (-rtb_Sum2_f))
                {
                    /* Transition: '<S263>:6' */
                    ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_UP;

                    /* Entry 'UP': '<S263>:2' */
                    rtb_VeERER_e_RTI = CeERER_e_ArrowUp;
                }
                else
                {
                    if (rtb_Vector_c > rtb_Sum2_f)
                    {
                        /* Transition: '<S263>:8' */
                        ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_Down;

                        /* Entry 'Down': '<S263>:4' */
                        rtb_VeERER_e_RTI = CeERER_e_ArrowDown;
                    }
                }
                break;

              default:
                rtb_VeERER_e_RTI = CeERER_e_ArrowUp;

                /* During 'UP': '<S263>:2' */
                if (rtb_Vector_c >= (-(rtb_Sum2_f -
                                       rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B)))
                {
                    /* Transition: '<S263>:9' */
                    ERER_ac_DW.is_c3_ERER_ac = ERER_ac_IN_Dash;

                    /* Entry 'Dash': '<S263>:3' */
                    rtb_VeERER_e_RTI = CeERER_e_Dash;
                }
                break;
            }
        }

        /* End of Chart: '<S222>/Stateflow Chart' */

        /* Outputs for Atomic SubSystem: '<S259>/Counter Reset  Enabled ' */
        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S264>/Constant Value1'
         *  Constant: '<S264>/Constant Value2'
         *  RelationalOperator: '<S259>/Comparison4'
         *  Sum: '<S264>/Subtraction'
         *  UnitDelay: '<S259>/Unit Delay'
         *  UnitDelay: '<S259>/Unit Delay1'
         *  UnitDelay: '<S264>/Unit Delay'
         */
        if (rtb_VeERER_e_RTI != ERER_ac_DW.UnitDelay_DSTATE_nk)
        {
            ERER_ac_DW.UnitDelay_DSTATE_kk = 0U;
        }
        else
        {
            ERER_ac_DW.UnitDelay_DSTATE_kk = (uint16)(((uint32)
                ERER_ac_DW.UnitDelay_DSTATE_kk) + 1U);
        }

        /* End of Switch: '<S264>/Switch1' */
        /* End of Outputs for SubSystem: '<S259>/Counter Reset  Enabled ' */

        /* UnitDelay: '<S259>/Unit Delay1' incorporates:
         *  UnitDelay: '<S259>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay_DSTATE_nk = ERER_ac_DW.UnitDelay1_DSTATE_h;

        /* Switch: '<S259>/Switch' incorporates:
         *  Constant: '<S259>/Constant Value'
         *  Constant: '<S260>/Calib'
         *  RelationalOperator: '<S259>/Comparison1'
         *  Sum: '<S259>/Sum1'
         *  UnitDelay: '<S264>/Unit Delay'
         */
        if (((float32)ERER_ac_DW.UnitDelay_DSTATE_kk) >=
                (KeERER_n_RTI_DebounceSamples - 1.0F))
        {
            /* Switch: '<S259>/Switch' */
            VeERER_e_RTI = rtb_VeERER_e_RTI;
        }
        else
        {
            /* Switch: '<S259>/Switch' incorporates:
             *  UnitDelay: '<S259>/Unit Delay'
             *  UnitDelay: '<S259>/Unit Delay1'
             */
            VeERER_e_RTI = ERER_ac_DW.UnitDelay_DSTATE_nk;
        }

        /* End of Switch: '<S259>/Switch' */

        /* Update for Switch: '<S235>/Switch1' incorporates:
         *  UnitDelay: '<S235>/Unit Delay1'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_a = rtb_Switch1_i;

        /* Update for UnitDelay: '<S259>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_nk = rtb_VeERER_e_RTI;

        /* Update for UnitDelay: '<S259>/Unit Delay1' incorporates:
         *  Switch: '<S259>/Switch'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_h = VeERER_e_RTI;

        /* End of Outputs for SubSystem: '<S9>/EstRangeDTE_PSA' */
        break;

      case 1:
        if (ERER_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S9>/EstRangeDTE_Charge' incorporates:
             *  ActionPort: '<S190>/Action Port'
             */
            /* InitializeConditions for If: '<S9>/If' incorporates:
             *  UnitDelay: '<S210>/Unit Delay1'
             */
            ERER_ac_DW.UnitDelay1_DSTATE_n = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S9>/EstRangeDTE_Charge' */

            /* SystemReset for IfAction SubSystem: '<S9>/EstRangeDTE_Charge' incorporates:
             *  ActionPort: '<S190>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S190>/EdgeFalling' */
            /* SystemReset for If: '<S9>/If' incorporates:
             *  UnitDelay: '<S206>/Unit Delay'
             *  UnitDelay: '<S211>/Unit Delay'
             *  UnitDelay: '<S212>/Unit Delay'
             */
            ERER_ac_DW.UnitDelay_DSTATE_ld = false;

            /* End of SystemReset for SubSystem: '<S190>/EdgeFalling' */

            /* SystemReset for Atomic SubSystem: '<S210>/Turn On Delay Sample' */
            ERER_ac_DW.UnitDelay_DSTATE_jv = 0U;

            /* SystemReset for Atomic SubSystem: '<S211>/EdgeRising' */
            ERER_ac_DW.UnitDelay_DSTATE_l5 = false;

            /* End of SystemReset for SubSystem: '<S211>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S210>/Turn On Delay Sample' */
            /* End of SystemReset for SubSystem: '<S9>/EstRangeDTE_Charge' */
        }

        /* Outputs for IfAction SubSystem: '<S9>/EstRangeDTE_Charge' incorporates:
         *  ActionPort: '<S190>/Action Port'
         */
        /* Switch: '<S190>/Switch' incorporates:
         *  Logic: '<S190>/Logical1'
         *  Logic: '<S190>/Logical2'
         */
        if ((!rtb_TmpSignalConversionAtVePLTR_b_InFiel) || rtb_AND_nv)
        {
            /* Switch: '<S190>/Switch' incorporates:
             *  Constant: '<S207>/Calib'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = KeERER_f_WhrpKMResetVal;
        }
        else
        {
            /* Switch: '<S190>/Switch' */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B =
                VeERER_F_EEPROM_WhperKM_Write;
        }

        /* End of Switch: '<S190>/Switch' */

        /* Outputs for Atomic SubSystem: '<S190>/Protected Division' */
        /* Switch: '<S209>/Switch1' incorporates:
         *  Constant: '<S209>/Constant Value'
         *  Constant: '<S209>/Constant Value1'
         *  Constant: '<S209>/Constant Value2'
         *  Constant: '<S209>/Constant Value3'
         *  Logic: '<S209>/AND'
         *  RelationalOperator: '<S209>/Greater Than or Equal '
         *  RelationalOperator: '<S209>/Greater Than or Equal 1'
         *  RelationalOperator: '<S209>/Not Equal'
         *  RelationalOperator: '<S209>/Not Equal1'
         *  Switch: '<S209>/Switch2'
         *  Switch: '<S209>/Switch3'
         */
        if ((rtb_Add != 0.0F) && (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B !=
                                  0.0F))
        {
            /* Switch: '<S209>/Switch1' incorporates:
             *  Product: '<S209>/Division'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = rtb_Add /
                rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
        }
        else if (rtb_Add > 0.0F)
        {
            /* Switch: '<S209>/Switch2' incorporates:
             *  Constant: '<S209>/MAXFLOAT'
             *  Switch: '<S209>/Switch1'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = 3.402823466E+38F;
        }
        else if (rtb_Add < 0.0F)
        {
            /* Switch: '<S209>/Switch3' incorporates:
             *  Constant: '<S209>/MINFLOAT'
             *  Switch: '<S209>/Switch1'
             *  Switch: '<S209>/Switch2'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S209>/Switch1' incorporates:
             *  Constant: '<S209>/Constant Value4'
             *  Switch: '<S209>/Switch2'
             *  Switch: '<S209>/Switch3'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = 0.0F;
        }

        /* End of Switch: '<S209>/Switch1' */
        /* End of Outputs for SubSystem: '<S190>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S190>/EdgeFalling' */
        /* Logic: '<S206>/AND' incorporates:
         *  UnitDelay: '<S206>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVePLTR_b_InFiel = (rtb_AND_cke &&
            (ERER_ac_DW.UnitDelay_DSTATE_ld));

        /* Update for UnitDelay: '<S206>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_ld = VeERER_b_EstRangePSA;

        /* End of Outputs for SubSystem: '<S190>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S210>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S211>/EdgeRising' */
        /* Logic: '<S212>/AND' incorporates:
         *  Logic: '<S212>/OR1'
         *  UnitDelay: '<S212>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_PropSy =
            !ERER_ac_DW.UnitDelay_DSTATE_l5;

        /* Update for UnitDelay: '<S212>/Unit Delay' incorporates:
         *  Constant: '<S210>/TRUE Constant'
         */
        ERER_ac_DW.UnitDelay_DSTATE_l5 = true;

        /* End of Outputs for SubSystem: '<S211>/EdgeRising' */

        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value'
         *  Constant: '<S211>/Constant Value1'
         *  Logic: '<S211>/OR'
         *  MinMax: '<S211>/Minimum'
         *  Sum: '<S211>/Summation'
         *  UnitDelay: '<S211>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeHPMR_b_PropSy)
        {
            ERER_ac_DW.UnitDelay_DSTATE_jv = 0U;
        }
        else if (1 < ((sint32)((uint16)(((uint32)ERER_ac_DW.UnitDelay_DSTATE_jv)
                    + 1U))))
        {
            /* MinMax: '<S211>/Minimum' */
            ERER_ac_DW.UnitDelay_DSTATE_jv = 1U;
        }
        else
        {
            /* MinMax: '<S211>/Minimum' incorporates:
             *  Constant: '<S211>/Constant Value'
             *  Sum: '<S211>/Summation'
             *  UnitDelay: '<S211>/Unit Delay'
             */
            ERER_ac_DW.UnitDelay_DSTATE_jv = (uint16)(((uint32)
                ERER_ac_DW.UnitDelay_DSTATE_jv) + 1U);
        }

        /* End of Switch: '<S211>/Switch1' */
        /* End of Outputs for SubSystem: '<S210>/Turn On Delay Sample' */

        /* Switch: '<S190>/Switch1' */
        if (!rtb_TmpSignalConversionAtVePLTR_b_InFiel)
        {
            /* Outputs for Atomic SubSystem: '<S210>/Turn On Delay Sample' */
            /* Switch: '<S210>/Switch1' incorporates:
             *  Constant: '<S210>/Constant Value'
             *  RelationalOperator: '<S211>/Greater  Than'
             *  UnitDelay: '<S211>/Unit Delay'
             */
            if (((sint32)ERER_ac_DW.UnitDelay_DSTATE_jv) >= 1)
            {
                /* Switch: '<S190>/Switch1' incorporates:
                 *  UnitDelay: '<S210>/Unit Delay1'
                 */
                ERER_ac_DW.UnitDelay_DSTATE_o = ERER_ac_DW.UnitDelay1_DSTATE_n;
            }

            /* End of Switch: '<S210>/Switch1' */
            /* End of Outputs for SubSystem: '<S210>/Turn On Delay Sample' */
        }

        /* End of Switch: '<S190>/Switch1' */

        /* Sum: '<S205>/Subtraction1' incorporates:
         *  Constant: '<S208>/Calib'
         *  Product: '<S205>/Multiplication'
         *  Sum: '<S205>/Subtraction'
         *  UnitDelay: '<S210>/Unit Delay1'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_n =
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B -
              ERER_ac_DW.UnitDelay_DSTATE_o) * KeERER_k_EstRangeEL) +
            ERER_ac_DW.UnitDelay_DSTATE_o;

        /* End of Outputs for SubSystem: '<S9>/EstRangeDTE_Charge' */
        break;

      default:
        /* no actions */
        break;
    }

    /* Switch: '<S332>/Switch2' incorporates:
     *  Constant: '<S352>/Calib'
     *  Switch: '<S332>/Switch1'
     *  Switch: '<S332>/Switch6'
     */
    if (VeERER_b_EstRangePSA)
    {
        /* Switch: '<S332>/Switch2' incorporates:
         *  UnitDelay: '<S236>/Unit Delay1'
         */
        rtb_Sum2 = ERER_ac_DW.UnitDelay1_DSTATE_f3;
    }
    else if (VeERER_b_EstRangeCharge)
    {
        /* Switch: '<S332>/Switch1' incorporates:
         *  Switch: '<S332>/Switch2'
         *  UnitDelay: '<S210>/Unit Delay1'
         */
        rtb_Sum2 = ERER_ac_DW.UnitDelay1_DSTATE_n;
    }
    else if (KeERER_b_EstRangeinit_OvrdEnbl)
    {
        /* Switch: '<S332>/Switch6' incorporates:
         *  Constant: '<S355>/Calib'
         *  Switch: '<S332>/Switch1'
         *  Switch: '<S332>/Switch2'
         */
        rtb_Sum2 = KeERER_l_EstRangeinit_Ovrd;
    }
    else
    {
        /* Switch: '<S332>/Switch2' incorporates:
         *  Switch: '<S332>/Switch1'
         *  Switch: '<S332>/Switch6'
         */
        rtb_Sum2 = rtb_TmpSignalConversionAtVeERER_l_EstRan;
    }

    /* End of Switch: '<S332>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S332>/Limiter1' */
    /* Switch: '<S361>/Switch1' incorporates:
     *  RelationalOperator: '<S361>/Relational Operator'
     */
    if (rtb_Vector_px < rtb_Sum2)
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = rtb_Vector_px;
    }

    /* End of Switch: '<S361>/Switch1' */
    /* End of Outputs for SubSystem: '<S332>/Limiter1' */

    /* Switch: '<S332>/Switch5' incorporates:
     *  Logic: '<S332>/Logical1'
     *  Switch: '<S332>/Switch13'
     */
    if (tmpRead_8 || tmpRead_6)
    {
        /* Switch: '<S332>/Switch5' incorporates:
         *  Constant: '<S356>/Calib'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = KeERER_l_SNA_value;
    }
    else if (VeERER_b_EstRangeInit)
    {
        /* Switch: '<S332>/Switch7' incorporates:
         *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
         *  Switch: '<S332>/Switch13'
         */
        if (VeERER_b_ResetRangeDisplay_Enable)
        {
            /* MinMax: '<S342>/MinMax1' incorporates:
             *  Constant: '<S342>/Constant Value1'
             *  Constant: '<S342>/Constant Value2'
             *  Constant: '<S348>/Calib'
             *  Product: '<S342>/Product2'
             */
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = fmaxf
                (KeERER_t_RngResetDuration / 5.0F, 0.0F);

            /* Outputs for Atomic SubSystem: '<S342>/Protected Division' */
            /* Switch: '<S349>/Switch1' incorporates:
             *  Constant: '<S349>/Constant Value'
             *  Constant: '<S349>/Constant Value1'
             *  Constant: '<S349>/Constant Value2'
             *  Constant: '<S349>/Constant Value3'
             *  Logic: '<S349>/AND'
             *  RelationalOperator: '<S349>/Greater Than or Equal '
             *  RelationalOperator: '<S349>/Greater Than or Equal 1'
             *  RelationalOperator: '<S349>/Not Equal'
             *  RelationalOperator: '<S349>/Not Equal1'
             *  Switch: '<S349>/Switch2'
             *  Switch: '<S349>/Switch3'
             *  UnitDelay: '<S342>/Unit Delay1'
             */
            if ((ERER_ac_DW.UnitDelay1_DSTATE_i != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd != 0.0F))
            {
                /* Switch: '<S349>/Switch1' incorporates:
                 *  Product: '<S349>/Division'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd =
                    ERER_ac_DW.UnitDelay1_DSTATE_i /
                    rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
            }
            else if (ERER_ac_DW.UnitDelay1_DSTATE_i > 0.0F)
            {
                /* Switch: '<S349>/Switch2' incorporates:
                 *  Constant: '<S349>/MAXFLOAT'
                 *  Switch: '<S349>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 3.402823466E+38F;
            }
            else if (ERER_ac_DW.UnitDelay1_DSTATE_i < 0.0F)
            {
                /* Switch: '<S349>/Switch3' incorporates:
                 *  Constant: '<S349>/MINFLOAT'
                 *  Switch: '<S349>/Switch1'
                 *  Switch: '<S349>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S349>/Switch1' incorporates:
                 *  Constant: '<S349>/Constant Value4'
                 *  Switch: '<S349>/Switch2'
                 *  Switch: '<S349>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 0.0F;
            }

            /* End of Switch: '<S349>/Switch1' */
            /* End of Outputs for SubSystem: '<S342>/Protected Division' */

            /* Rounding: '<S342>/Rounding' */
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = floorf
                (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

            /* Switch: '<S342>/Switch' incorporates:
             *  Constant: '<S342>/Constant Value3'
             *  Constant: '<S342>/Constant Value4'
             *  Logic: '<S342>/Logical1'
             *  RelationalOperator: '<S342>/Comparison1'
             *  RelationalOperator: '<S342>/Comparison2'
             */
            if ((1.0F == rtb_TmpSignalConversionAtVeCSVR_v_VehSpd) ||
                    (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd == 3.0F))
            {
                /* Switch: '<S332>/Switch5' incorporates:
                 *  Constant: '<S342>/Constant Value15'
                 *  Switch: '<S332>/Switch7'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 0.0F;
            }
            else
            {
                /* Switch: '<S332>/Switch5' incorporates:
                 *  Constant: '<S347>/Calib'
                 *  Switch: '<S332>/Switch7'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = KeERER_l_SNA_value;
            }

            /* End of Switch: '<S342>/Switch' */
        }
        else
        {
            (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value(&Vector_de);

            /* Switch: '<S332>/Switch8' incorporates:
             *  Constant: '<S351>/Calib'
             *  Constant: '<S353>/Calib'
             *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
             *  RelationalOperator: '<S332>/Comparison3'
             *  RelationalOperator: '<S361>/Relational Operator1'
             *  Switch: '<S332>/Switch3'
             *  Switch: '<S361>/Switch'
             */
            if (Vector_de <= KeERER_Pct_DispSOC_0Range)
            {
                /* Switch: '<S332>/Switch5' incorporates:
                 *  Constant: '<S332>/Constant Value4'
                 *  Switch: '<S332>/Switch7'
                 *  Switch: '<S332>/Switch8'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 0.0F;
            }
            else if (KeERER_b_OutEstRangeinMiles)
            {
                /* Outputs for Atomic SubSystem: '<S332>/Limiter1' */
                /* Switch: '<S361>/Switch' incorporates:
                 *  RelationalOperator: '<S361>/Relational Operator1'
                 */
                if (rtb_Sum2 > rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
                {
                    rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = rtb_Sum2;
                }

                /* End of Outputs for SubSystem: '<S332>/Limiter1' */

                /* Switch: '<S332>/Switch5' incorporates:
                 *  Constant: '<S332>/Constant Value2'
                 *  Product: '<S332>/Product'
                 *  Switch: '<S332>/Switch3'
                 *  Switch: '<S332>/Switch7'
                 */
                rtb_TmpSignalConversionAtVeCSVR_v_VehSpd *= 0.621371F;
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S332>/Limiter1' */
                if (rtb_Sum2 > rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
                {
                    /* Switch: '<S361>/Switch' incorporates:
                     *  Switch: '<S332>/Switch3'
                     *  Switch: '<S332>/Switch5'
                     *  Switch: '<S332>/Switch7'
                     */
                    rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = rtb_Sum2;
                }

                /* End of Outputs for SubSystem: '<S332>/Limiter1' */
            }

            /* End of Switch: '<S332>/Switch8' */
        }

        /* End of Switch: '<S332>/Switch7' */
    }
    else
    {
        /* Switch: '<S332>/Switch5' incorporates:
         *  Switch: '<S332>/Switch13'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd =
            rtb_TmpSignalConversionAtVeERER_l_EstRan;
    }

    /* End of Switch: '<S332>/Switch5' */

    /* Switch: '<S332>/Switch4' incorporates:
     *  Constant: '<S354>/Calib'
     */
    if (KeERER_b_RangeRounding)
    {
        /* Switch: '<S332>/Switch4' incorporates:
         *  Rounding: '<S332>/Rounding2'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = roundf
            (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);
    }

    /* End of Switch: '<S332>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S332>/Limiter' */
    /* Switch: '<S360>/Switch1' incorporates:
     *  Constant: '<S357>/Calib'
     *  RelationalOperator: '<S360>/Relational Operator'
     */
    if (KeERER_l_max_range < rtb_TmpSignalConversionAtVeCSVR_v_VehSpd)
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = KeERER_l_max_range;
    }
    else
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S360>/Switch1' */

    /* Switch: '<S360>/Switch' incorporates:
     *  Constant: '<S332>/Constant Value18'
     *  RelationalOperator: '<S360>/Relational Operator1'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    if (rtb_Sum2 > 0.0F)
    {
        ERER_ac_DW.UnitDelay_DSTATE_o = rtb_Sum2;
    }
    else
    {
        ERER_ac_DW.UnitDelay_DSTATE_o = 0.0F;
    }

    /* End of Switch: '<S360>/Switch' */
    /* End of Outputs for SubSystem: '<S332>/Limiter' */

    /* Switch: '<S11>/Switch1' incorporates:
     *  DataStoreWrite: '<S4>/Data Store Write14'
     *  Logic: '<S11>/Logical'
     *  Logic: '<S11>/Logical2'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    if ((VeERER_b_EstRangeInit) && (!VeERER_b_EstRangeSNA))
    {
        EeERER_l_EEPROM_EstRange = ERER_ac_DW.UnitDelay_DSTATE_o;
    }
    else
    {
        EeERER_l_EEPROM_EstRange = rtb_TmpSignalConversionAtVeERER_l_EstRan;
    }

    /* End of Switch: '<S11>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S317>/Counter Reset  Enabled ' */
    /* Switch: '<S326>/Switch1' incorporates:
     *  Constant: '<S326>/Constant Value1'
     *  Constant: '<S326>/Constant Value2'
     *  Sum: '<S326>/Subtraction'
     *  UnitDelay: '<S317>/Unit Delay1'
     *  UnitDelay: '<S326>/Unit Delay'
     */
    if (ERER_ac_DW.UnitDelay1_DSTATE_b)
    {
        ERER_ac_DW.UnitDelay_DSTATE_j = 0U;
    }
    else
    {
        ERER_ac_DW.UnitDelay_DSTATE_j = (uint16)(((uint32)
            ERER_ac_DW.UnitDelay_DSTATE_j) + 1U);
    }

    /* End of Switch: '<S326>/Switch1' */
    /* End of Outputs for SubSystem: '<S317>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S317>/Comparison1' incorporates:
     *  Constant: '<S312>/Calib'
     *  UnitDelay: '<S317>/Unit Delay1'
     *  UnitDelay: '<S326>/Unit Delay'
     */
    ERER_ac_DW.UnitDelay1_DSTATE_b = (ERER_ac_DW.UnitDelay_DSTATE_j ==
        KeERER_n_Capacity_StorTime);

    /* Gain: '<S315>/Gain' incorporates:
     *  Logic: '<S11>/Logical8'
     *  UnitDelay: '<S317>/Unit Delay1'
     */
    VeERER_b_EEPROM_EstRange_Write = ((ERER_ac_DW.UnitDelay1_DSTATE_b) ||
        (VeERER_b_EVCUShtDwnStore));

    /* DataStoreWrite: '<S4>/Data Store Write15' */
    EeERER_b_EEPROM_EstRange = VeERER_b_EEPROM_EstRange_Write;

    /* If: '<S8>/If1' incorporates:
     *  Constant: '<S70>/Constant'
     *  Constant: '<S71>/Constant'
     *  Constant: '<S72>/Constant'
     *  Constant: '<S73>/Constant'
     *  Constant: '<S74>/Calib'
     *  RelationalOperator: '<S8>/Relational Operator'
     *  RelationalOperator: '<S8>/Relational Operator1'
     *  RelationalOperator: '<S8>/Relational Operator2'
     *  RelationalOperator: '<S8>/Relational Operator3'
     */
    rtPrevAction = ERER_ac_DW.If1_ActiveSubsystem;
    ERER_ac_DW.If1_ActiveSubsystem = -1;
    if (((uint32)KeERER_e_DRMType) == CeERER_e_DRMType1)
    {
        ERER_ac_DW.If1_ActiveSubsystem = 0;
    }
    else if (((uint32)KeERER_e_DRMType) == CeERER_e_DRMType2)
    {
        ERER_ac_DW.If1_ActiveSubsystem = 1;
    }
    else if (((uint32)KeERER_e_DRMType) == CeERER_e_DRMType3)
    {
        ERER_ac_DW.If1_ActiveSubsystem = 2;
    }
    else
    {
        if (((uint32)KeERER_e_DRMType) == CeERER_e_DRMType4)
        {
            ERER_ac_DW.If1_ActiveSubsystem = 3;
        }
    }

    switch (ERER_ac_DW.If1_ActiveSubsystem)
    {
      case 0:
        if (ERER_ac_DW.If1_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S8>/Type 1' incorporates:
             *  ActionPort: '<S76>/Action Port'
             */
            /* InitializeConditions for If: '<S8>/If1' incorporates:
             *  UnitDelay: '<S76>/Unit Delay1'
             *  UnitDelay: '<S76>/Unit Delay2'
             *  UnitDelay: '<S76>/Unit Delay3'
             *  UnitDelay: '<S76>/Unit Delay4'
             */
            ERER_ac_DW.UnitDelay1_DSTATE_m = CePMDR_e_PowerMode_Off;
            ERER_ac_DW.UnitDelay2_DSTATE = CeHMIR_e_AutoStat;
            ERER_ac_DW.UnitDelay4_DSTATE = false;
            ERER_ac_DW.UnitDelay3_DSTATE_e = CePMDR_e_PowerMode_Off;

            /* End of InitializeConditions for SubSystem: '<S8>/Type 1' */

            /* SystemReset for IfAction SubSystem: '<S8>/Type 1' incorporates:
             *  ActionPort: '<S76>/Action Port'
             */
            /* SystemReset for If: '<S8>/If1' incorporates:
             *  Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV'
             *  UnitDelay: '<S89>/Unit Delay'
             */
            ERER_ac_DW.is_active_c8_ERER_ac = 0U;
            ERER_ac_DW.is_c8_ERER_ac = 0;
            ERER_ac_DW.VehDist_Init_g = 0.0F;
            ERER_ac_DW.DRM_delay_f = 0U;
            ERER_ac_B.Out_Modify_Factor_g = 0.0F;
            ERER_ac_B.VehDist_Delta_j = 0.0F;
            ERER_ac_B.Modify_Factor_j = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S76>/Hysteresis' */
            ERER_ac_DW.UnitDelay_DSTATE_ey = false;

            /* End of SystemReset for SubSystem: '<S76>/Hysteresis' */
            /* End of SystemReset for SubSystem: '<S8>/Type 1' */
        }

        /* Outputs for IfAction SubSystem: '<S8>/Type 1' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        /* Lookup_n-D: '<S100>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeERER_l_EstRan = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_CamelMod_Perc[0])), ((const float32 *)
              &(KtERER_k_CamelMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S111>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        Vector_de = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((const
            float32 *)&(KxERER_k_ValetMod_Perc[0])), ((const float32 *)
            &(KtERER_k_ValetMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S107>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_SnowMod_Perc[0])), ((const float32 *)
              &(KtERER_k_SnowMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S102>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_Vector_px = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((
            const float32 *)&(KxERER_k_DragMod_Perc[0])), ((const float32 *)
            &(KtERER_k_DragMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S110>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_Switch1_i = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((
            const float32 *)&(KxERER_k_TrackMod_Perc[0])), ((const float32 *)
            &(KtERER_k_TrackMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S101>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_Vector_c = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((
            const float32 *)&(KxERER_k_DonutMod_Perc[0])), ((const float32 *)
            &(KtERER_k_DonutMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S103>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        ERER_ac_B.Vector_k = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o,
            ((const float32 *)&(KxERER_k_DriftMod_Perc[0])), ((const float32 *)
            &(KtERER_k_DriftMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S108>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        ERER_ac_B.Vector_ou = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_SportMod_Perc[0])), ((const float32 *)
              &(KtERER_k_SportMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S105>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        ERER_ac_B.Vector_j = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o,
            ((const float32 *)&(KxERER_k_RockMod_Perc[0])), ((const float32 *)
            &(KtERER_k_RockMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S104>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        ERER_ac_B.Vector_i = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o,
            ((const float32 *)&(KxERER_k_Mud_SandMod_Perc[0])), ((const float32 *)
            &(KtERER_k_Mud_SandMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S109>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        ERER_ac_B.Vector_e = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o,
            ((const float32 *)&(KxERER_k_TowMod_Perc[0])), ((const float32 *)
            &(KtERER_k_TowMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S106>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        ERER_ac_B.Vector_cs = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_SandMod_Perc[0])), ((const float32 *)
              &(KtERER_k_SandMod_Perc[0])), 8U);

        /* Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' incorporates:
         *  Constant: '<S91>/Calib'
         *  Constant: '<S93>/Calib'
         *  SignalConversion generated from: '<S1>/VeHMIR_e_TerrainModeStat'
         *  UnitDelay: '<S202>/Unit Delay'
         *  UnitDelay: '<S76>/Unit Delay4'
         */
        /* Gateway: ERER_MedTEH/EREC/DRM/Type 1/DRM_Stateflow_LB//DT//EJ//KM BEV */
        /* During: ERER_MedTEH/EREC/DRM/Type 1/DRM_Stateflow_LB//DT//EJ//KM BEV */
        if (((uint32)ERER_ac_DW.is_active_c8_ERER_ac) == 0U)
        {
            /* Entry: ERER_MedTEH/EREC/DRM/Type 1/DRM_Stateflow_LB//DT//EJ//KM BEV */
            ERER_ac_DW.is_active_c8_ERER_ac = 1U;

            /* Entry Internal: ERER_MedTEH/EREC/DRM/Type 1/DRM_Stateflow_LB//DT//EJ//KM BEV */
            /* Transition: '<S81>:315' */
            ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Init;

            /* Entry 'Init': '<S81>:351' */
        }
        else
        {
            switch (ERER_ac_DW.is_c8_ERER_ac)
            {
              case ERER_ac_IN_Auto:
                ERER_ac_Auto(&Vector_de,
                             &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                             &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_DRAG:
                ERER_ac_DRAG(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                             &Vector_de,
                             &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                             &rtb_Vector_px);
                break;

              case ERER_ac_IN_Donut:
                ERER_ac_Donut(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                              &Vector_de,
                              &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                              &rtb_Vector_c);
                break;

              case ERER_ac_IN_Drift:
                ERER_ac_Drift(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                              &Vector_de,
                              &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);
                break;

              case ERER_ac_IN_Eco:
                ERER_ac_Eco(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                            &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                            &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_Init:
                /* During 'Init': '<S81>:351' */
                if (ERER_ac_DW.UnitDelay4_DSTATE)
                {
                    /* Transition: '<S81>:1037' */
                    /* Transition: '<S81>:1039' */
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;
                    ERER_ac_B.Modify_Factor_j = 0.0F;
                    ERER_ac_DW.VehDist_Init_g = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_B.VehDist_Delta_j = 0.0F;
                }
                else
                {
                    /* Transition: '<S81>:1278' */
                    ERER_ac_B.Out_Modify_Factor_g = 0.0F;
                    ERER_ac_B.Modify_Factor_j =
                        TmpSignalConversionAtVeERER_k_Modify_F_f;
                    ERER_ac_DW.VehDist_Init_g =
                        -TmpSignalConversionAtVeERER_l_VehDist__a;
                    ERER_ac_B.VehDist_Delta_j = 0.0F;

                    /* Transition: '<S81>:1035' */
                }

                ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_InitDelay;

                /* Entry 'InitDelay': '<S81>:1028' */
                ERER_ac_DW.DRM_delay_f = 0U;
                break;

              case ERER_ac_IN_InitDelay:
                /* During 'InitDelay': '<S81>:1028' */
                tmp_0 = ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod;
                if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                        (((uint32)tmp_0) == CeHMIR_e_ValetStat))
                {
                    /* Transition: '<S81>:1112' */
                    /* Transition: '<S81>:1113' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Valet;

                    /* Entry Internal 'Valet': '<S81>:322' */
                    /* Transition: '<S81>:329' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:331' */
                        /* Transition: '<S81>:333' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:335' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:330' */
                            /* Transition: '<S81>:332' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:334' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_SandStat))
                {
                    /* Transition: '<S81>:1120' */
                    /* Transition: '<S81>:1121' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sand;

                    /* Entry Internal 'Sand': '<S81>:526' */
                    /* Transition: '<S81>:533' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:535' */
                        /* Transition: '<S81>:537' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:539' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:534' */
                            /* Transition: '<S81>:536' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:538' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_EcoStat))
                {
                    /* Transition: '<S81>:1123' */
                    /* Transition: '<S81>:1124' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Eco;

                    /* Entry Internal 'Eco': '<S81>:336' */
                    /* Transition: '<S81>:343' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:345' */
                        /* Transition: '<S81>:347' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:349' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:344' */
                            /* Transition: '<S81>:346' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:348' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_AutoStat))
                {
                    /* Transition: '<S81>:1126' */
                    /* Transition: '<S81>:1127' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Auto;

                    /* Entry Internal 'Auto': '<S81>:569' */
                    /* Transition: '<S81>:576' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:578' */
                        /* Transition: '<S81>:580' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:582' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:577' */
                            /* Transition: '<S81>:579' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:581' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_SnowStat))
                {
                    /* Transition: '<S81>:1129' */
                    /* Transition: '<S81>:1130' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Snow;

                    /* Entry Internal 'Snow': '<S81>:382' */
                    /* Transition: '<S81>:389' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:391' */
                        /* Transition: '<S81>:393' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:395' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:390' */
                            /* Transition: '<S81>:392' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:394' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_SportStat))
                {
                    /* Transition: '<S81>:1132' */
                    /* Transition: '<S81>:1133' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Sport;

                    /* Entry Internal 'Sport': '<S81>:352' */
                    /* Transition: '<S81>:359' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:361' */
                        /* Transition: '<S81>:363' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:365' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:360' */
                            /* Transition: '<S81>:362' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:364' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_TowStat))
                {
                    /* Transition: '<S81>:1139' */
                    /* Transition: '<S81>:1140' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Tow;

                    /* Entry Internal 'Tow': '<S81>:368' */
                    /* Transition: '<S81>:375' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:377' */
                        /* Transition: '<S81>:379' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:381' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:376' */
                            /* Transition: '<S81>:378' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:380' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_MudSandStat))
                {
                    /* Transition: '<S81>:1142' */
                    /* Transition: '<S81>:1143' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Mud_Sand;

                    /* Entry Internal 'Mud_Sand': '<S81>:512' */
                    /* Transition: '<S81>:519' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:521' */
                        /* Transition: '<S81>:523' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:525' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:520' */
                            /* Transition: '<S81>:522' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:524' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_RockStat))
                {
                    /* Transition: '<S81>:1154' */
                    /* Transition: '<S81>:1155' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Rock;

                    /* Entry Internal 'Rock': '<S81>:540' */
                    /* Transition: '<S81>:547' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:549' */
                        /* Transition: '<S81>:551' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:553' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:548' */
                            /* Transition: '<S81>:550' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:552' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_DragStat))
                {
                    /* Transition: '<S81>:1472' */
                    /* Transition: '<S81>:1473' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_DRAG;

                    /* Entry Internal 'DRAG': '<S81>:1280' */
                    /* Transition: '<S81>:1287' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:1289' */
                        /* Transition: '<S81>:1291' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:1293' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:1288' */
                            /* Transition: '<S81>:1290' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:1292' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_TrackStat))
                {
                    /* Transition: '<S81>:1475' */
                    /* Transition: '<S81>:1476' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Track;

                    /* Entry Internal 'Track': '<S81>:1294' */
                    /* Transition: '<S81>:1301' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_j) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S81>:1303' */
                        /* Transition: '<S81>:1305' */
                        ERER_ac_B.Out_Modify_Factor_g = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_j) + 1.0F) *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:1307' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_j) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S81>:1302' */
                            /* Transition: '<S81>:1304' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:1306' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_DonutStat))
                {
                    /* Transition: '<S81>:1479' */
                    /* Transition: '<S81>:1480' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Donut;

                    /* Entry Internal 'Donut': '<S81>:1308' */
                    /* Transition: '<S81>:1315' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                     ERER_ac_B.VehDist_Delta_j) + 1.0F;
                    if (rtb_Switch1_i > 0.0F)
                    {
                        /* Transition: '<S81>:1317' */
                        /* Transition: '<S81>:1319' */
                        ERER_ac_B.Out_Modify_Factor_g = rtb_Switch1_i *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:1321' */
                    }
                    else
                    {
                        if (rtb_Switch1_i <= 0.0F)
                        {
                            /* Transition: '<S81>:1316' */
                            /* Transition: '<S81>:1318' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:1320' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_f >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_DriftStat))
                {
                    /* Transition: '<S81>:1666' */
                    /* Transition: '<S81>:1667' */
                    /* Exit 'InitDelay': '<S81>:1028' */
                    ERER_ac_DW.DRM_delay_f = 0U;
                    ERER_ac_DW.is_c8_ERER_ac = ERER_ac_IN_Drift;

                    /* Entry Internal 'Drift': '<S81>:1589' */
                    /* Transition: '<S81>:1596' */
                    ERER_ac_B.VehDist_Delta_j = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_g;
                    rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                     ERER_ac_B.VehDist_Delta_j) + 1.0F;
                    if (rtb_Switch1_i > 0.0F)
                    {
                        /* Transition: '<S81>:1598' */
                        /* Transition: '<S81>:1600' */
                        ERER_ac_B.Out_Modify_Factor_g = rtb_Switch1_i *
                            ERER_ac_B.Modify_Factor_j;

                        /* Transition: '<S81>:1602' */
                    }
                    else
                    {
                        if (rtb_Switch1_i <= 0.0F)
                        {
                            /* Transition: '<S81>:1597' */
                            /* Transition: '<S81>:1599' */
                            ERER_ac_B.Modify_Factor_j = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_g = 0.0F;

                            /* Transition: '<S81>:1601' */
                        }
                    }
                }
                else
                {
                    ERER_ac_DW.DRM_delay_f = (uint16)((sint32)(((sint32)
                        ERER_ac_DW.DRM_delay_f) + 1));
                }
                break;

              case ERER_ac_IN_Mud_Sand:
                ERER_ac_Mud_Sand(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                                 &Vector_de,
                                 &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                                 &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_Rock:
                ERER_ac_Rock(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                             &Vector_de,
                             &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                             &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_Sand:
                ERER_ac_Sand(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                             &Vector_de,
                             &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                             &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_Snow:
                ERER_ac_Snow(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                             &Vector_de,
                             &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                             &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_Sport:
                ERER_ac_Sport(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                              &Vector_de,
                              &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                              &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_Tow:
                ERER_ac_Tow(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                            &Vector_de,
                            &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                            &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;

              case ERER_ac_IN_Track:
                ERER_ac_Track(&rtb_TmpSignalConversionAtVeERER_l_EstRan,
                              &Vector_de,
                              &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                              &rtb_Switch1_i);
                break;

              default:
                ERER_ac_Valet(&Vector_de,
                              &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                              &rtb_Vector_px, &rtb_Switch1_i, &rtb_Vector_c);
                break;
            }
        }

        /* End of Chart: '<S76>/DRM_Stateflow_LB//DT//EJ//KM BEV' */

        /* If: '<S76>/If' incorporates:
         *  Constant: '<S83>/Constant'
         *  Constant: '<S84>/Constant'
         *  Constant: '<S85>/Constant'
         *  Logic: '<S76>/Logical'
         *  RelationalOperator: '<S76>/Comparison1'
         *  RelationalOperator: '<S76>/Comparison2'
         *  RelationalOperator: '<S76>/Comparison4'
         *  UnitDelay: '<S76>/Unit Delay1'
         */
        if (((((uint32)ERER_ac_DW.UnitDelay1_DSTATE_m) == CePMDR_e_PowerMode_Run)
             && (CePMDR_e_PowerMode_Crank != ((uint32)
                rtb_TmpSignalConversionAtVePMDR_e_PMM_Po))) && (((uint32)
                rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) !=
                CePMDR_e_PowerMode_Run))
        {
            /* Outputs for IfAction SubSystem: '<S76>/If Action Subsystem' incorporates:
             *  ActionPort: '<S90>/Action Port'
             */
            /* DataStoreWrite: '<S90>/Data Store Write1' */
            EeERER_l_VehDist_Delta = ERER_ac_B.VehDist_Delta_j;

            /* DataTypeConversion: '<S90>/Data Type Conversion' incorporates:
             *  DataStoreWrite: '<S90>/Data Store Write'
             *  SignalConversion generated from: '<S1>/VeHMIR_e_TerrainModeStat'
             */
            EeERER_e_DriveMode =
                ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod;

            /* DataStoreWrite: '<S90>/Data Store Write2' */
            EeERER_k_Modify_Factor = ERER_ac_B.Modify_Factor_j;

            /* End of Outputs for SubSystem: '<S76>/If Action Subsystem' */
        }

        /* End of If: '<S76>/If' */

        /* RelationalOperator: '<S76>/Comparison3' incorporates:
         *  Constant: '<S96>/Calib'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        VeERER_b_DRM_debug4LBBEV = (ERER_ac_DW.UnitDelay_DSTATE_o >=
            KeERER_l_HomologatedRangeThresh);

        /* Outputs for Atomic SubSystem: '<S76>/Limiter1' */
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S94>/Calib'
         *  RelationalOperator: '<S112>/Relational Operator'
         */
        if (KeERER_k_DRM_Modify_Factor_Max < ERER_ac_B.Out_Modify_Factor_g)
        {
            /* Switch: '<S76>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                KeERER_k_DRM_Modify_Factor_Max;
        }
        else
        {
            /* Switch: '<S76>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_B.Out_Modify_Factor_g;
        }

        /* End of Switch: '<S112>/Switch1' */

        /* Switch: '<S112>/Switch' incorporates:
         *  Constant: '<S95>/Calib'
         *  RelationalOperator: '<S112>/Relational Operator1'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f >
                KeERER_k_DRM_Modify_Factor_Min)
        {
            /* Switch: '<S112>/Switch' */
            VeERER_k_DRM_Modify_FactorLBBEV =
                TmpSignalConversionAtVeERER_k_Modify_F_f;
        }
        else
        {
            /* Switch: '<S112>/Switch' */
            VeERER_k_DRM_Modify_FactorLBBEV = KeERER_k_DRM_Modify_Factor_Min;
        }

        /* End of Switch: '<S112>/Switch' */
        /* End of Outputs for SubSystem: '<S76>/Limiter1' */

        /* Product: '<S76>/Product4' incorporates:
         *  Constant: '<S76>/Constant Value3'
         *  Sum: '<S76>/Sum2'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        TmpSignalConversionAtVeERER_k_Modify_F_f =
            (VeERER_k_DRM_Modify_FactorLBBEV + 1.0F) *
            ERER_ac_DW.UnitDelay_DSTATE_o;

        /* Outputs for Atomic SubSystem: '<S76>/Hysteresis' */
        /* Switch: '<S89>/Switch1' incorporates:
         *  Constant: '<S99>/Calib'
         *  RelationalOperator: '<S89>/Greater  Than'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f > KeERER_l_TurtleExitThresh)
        {
            /* Switch: '<S89>/Switch1' incorporates:
             *  Constant: '<S89>/Constant Value'
             */
            VeERER_b_DRM_debug5LBBEV = true;
        }
        else
        {
            /* Switch: '<S89>/Switch1' incorporates:
             *  Constant: '<S98>/Calib'
             *  RelationalOperator: '<S89>/Greater  Than1'
             *  UnitDelay: '<S89>/Unit Delay'
             */
            VeERER_b_DRM_debug5LBBEV =
                ((TmpSignalConversionAtVeERER_k_Modify_F_f >=
                  KeERER_l_TurtleEntryThresh) && (ERER_ac_DW.UnitDelay_DSTATE_ey));
        }

        /* End of Switch: '<S89>/Switch1' */

        /* Update for UnitDelay: '<S89>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_ey = VeERER_b_DRM_debug5LBBEV;

        /* End of Outputs for SubSystem: '<S76>/Hysteresis' */

        /* RelationalOperator: '<S76>/Comparison5' incorporates:
         *  RelationalOperator: '<S76>/Comparison7'
         *  UnitDelay: '<S76>/Unit Delay3'
         */
        UnitDelay4_DSTATE_tmp = ERER_ac_DW.UnitDelay3_DSTATE_e;

        /* Logic: '<S76>/Logical1' incorporates:
         *  Constant: '<S86>/Constant'
         *  Constant: '<S87>/Constant'
         *  Constant: '<S88>/Constant'
         *  RelationalOperator: '<S76>/Comparison5'
         *  RelationalOperator: '<S76>/Comparison6'
         *  RelationalOperator: '<S76>/Comparison7'
         *  UnitDelay: '<S76>/Unit Delay4'
         */
        ERER_ac_DW.UnitDelay4_DSTATE = (((CePMDR_e_PowerMode_Run != ((uint32)
            UnitDelay4_DSTATE_tmp)) && (((uint32)UnitDelay4_DSTATE_tmp) !=
            CePMDR_e_PowerMode_Crank)) && (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Run));

        /* Switch: '<S76>/Switch3' incorporates:
         *  Constant: '<S92>/Calib'
         */
        if (KeERER_b_DRMEnable)
        {
            /* Switch: '<S76>/Switch1' incorporates:
             *  Switch: '<S76>/Switch2'
             */
            if (VeERER_b_DRM_debug4LBBEV)
            {
                /* Switch: '<S76>/Switch1' incorporates:
                 *  UnitDelay: '<S9>/Unit Delay'
                 */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    ERER_ac_DW.UnitDelay_DSTATE_o;
            }
            else
            {
                if (!VeERER_b_DRM_debug5LBBEV)
                {
                    /* Switch: '<S76>/Switch1' incorporates:
                     *  Switch: '<S76>/Switch2'
                     *  UnitDelay: '<S9>/Unit Delay'
                     */
                    TmpSignalConversionAtVeERER_k_Modify_F_f =
                        ERER_ac_DW.UnitDelay_DSTATE_o;
                }
            }

            /* End of Switch: '<S76>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S76>/Limiter2' */
            /* Switch: '<S113>/Switch1' incorporates:
             *  Constant: '<S97>/Calib'
             *  RelationalOperator: '<S113>/Relational Operator'
             */
            if (KeERER_l_MaxHomologatedRange <
                    TmpSignalConversionAtVeERER_k_Modify_F_f)
            {
                /* Switch: '<S113>/Switch1' */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    KeERER_l_MaxHomologatedRange;
            }

            /* End of Switch: '<S113>/Switch1' */

            /* Switch: '<S113>/Switch' incorporates:
             *  Constant: '<S76>/Constant Value2'
             *  RelationalOperator: '<S113>/Relational Operator1'
             */
            if (TmpSignalConversionAtVeERER_k_Modify_F_f <= 0.0F)
            {
                /* Switch: '<S76>/Switch3' */
                TmpSignalConversionAtVeERER_k_Modify_F_f = 0.0F;
            }

            /* End of Switch: '<S113>/Switch' */
            /* End of Outputs for SubSystem: '<S76>/Limiter2' */
        }
        else
        {
            /* Switch: '<S76>/Switch3' incorporates:
             *  UnitDelay: '<S9>/Unit Delay'
             */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S76>/Switch3' */

        /* Merge: '<S8>/Merge' incorporates:
         *  Rounding: '<S76>/Rounding2'
         */
        ERER_ac_B.Merge = roundf(TmpSignalConversionAtVeERER_k_Modify_F_f);

        /* Update for UnitDelay: '<S76>/Unit Delay1' incorporates:
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_m =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* Update for UnitDelay: '<S76>/Unit Delay2' incorporates:
         *  SignalConversion generated from: '<S1>/VeHMIR_e_TerrainModeStat'
         */
        ERER_ac_DW.UnitDelay2_DSTATE =
            ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod;

        /* Update for UnitDelay: '<S76>/Unit Delay3' incorporates:
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        ERER_ac_DW.UnitDelay3_DSTATE_e =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* End of Outputs for SubSystem: '<S8>/Type 1' */
        break;

      case 1:
        if (ERER_ac_DW.If1_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S8>/Type 2' incorporates:
             *  ActionPort: '<S77>/Action Port'
             */
            /* InitializeConditions for If: '<S8>/If1' incorporates:
             *  UnitDelay: '<S77>/Unit Delay'
             *  UnitDelay: '<S77>/Unit Delay1'
             *  UnitDelay: '<S77>/Unit Delay2'
             *  UnitDelay: '<S77>/Unit Delay3'
             */
            ERER_ac_DW.UnitDelay1_DSTATE_d = CePMDR_e_PowerMode_Off;
            ERER_ac_DW.UnitDelay_DSTATE_ly = CeDMDR_e_NoDrvMd;
            ERER_ac_DW.UnitDelay3_DSTATE_d = false;
            ERER_ac_DW.UnitDelay2_DSTATE_i = CePMDR_e_PowerMode_Off;

            /* End of InitializeConditions for SubSystem: '<S8>/Type 2' */

            /* SystemReset for IfAction SubSystem: '<S8>/Type 2' incorporates:
             *  ActionPort: '<S77>/Action Port'
             */
            /* SystemReset for If: '<S8>/If1' incorporates:
             *  Chart: '<S77>/DRM_Stateflow_M182'
             *  UnitDelay: '<S122>/Unit Delay'
             */
            ERER_ac_DW.is_active_c5_ERER_ac = 0U;
            ERER_ac_DW.is_c5_ERER_ac = 0;
            ERER_ac_DW.VehDist_Init_m = 0.0F;
            ERER_ac_DW.DRM_delay_n = 0U;
            ERER_ac_B.Out_Modify_Factor_p = 0.0F;
            ERER_ac_B.VehDist_Delta_o = 0.0F;
            ERER_ac_B.Modify_Factor_k = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S77>/Hysteresis' */
            ERER_ac_DW.UnitDelay_DSTATE_og = false;

            /* End of SystemReset for SubSystem: '<S77>/Hysteresis' */
            /* End of SystemReset for SubSystem: '<S8>/Type 2' */
        }

        /* Outputs for IfAction SubSystem: '<S8>/Type 2' incorporates:
         *  ActionPort: '<S77>/Action Port'
         */
        /* Logic: '<S77>/Logical' incorporates:
         *  Constant: '<S116>/Constant'
         *  Constant: '<S117>/Constant'
         *  Constant: '<S118>/Constant'
         *  RelationalOperator: '<S77>/Comparison1'
         *  RelationalOperator: '<S77>/Comparison2'
         *  RelationalOperator: '<S77>/Comparison4'
         *  UnitDelay: '<S77>/Unit Delay1'
         */
        VeERER_b_DRM_TurnOffDetect_M182 = (((((uint32)
            ERER_ac_DW.UnitDelay1_DSTATE_d) == CePMDR_e_PowerMode_Run) &&
            (CePMDR_e_PowerMode_Crank != ((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po))) && (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) != CePMDR_e_PowerMode_Run));

        /* UnitDelay: '<S77>/Unit Delay' */
        VeERER_e_DRM_DMdebug1_M182 = ERER_ac_DW.UnitDelay_DSTATE_ly;

        /* Lookup_n-D: '<S133>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeERER_l_EstRan = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_CamelMod_Perc[0])), ((const float32 *)
              &(KtERER_k_CamelMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S134>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        Vector_de = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((const
            float32 *)&(KxERER_k_OffrdMod_Perc[0])), ((const float32 *)
            &(KtERER_k_OffrdMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S135>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_SportMod_Perc[0])), ((const float32 *)
              &(KtERER_k_SportMod_Perc[0])), 8U);

        /* UnitDelay: '<S77>/Unit Delay3' */
        VeERER_b_DRM_KeyRunDetect = ERER_ac_DW.UnitDelay3_DSTATE_d;

        /* Chart: '<S77>/DRM_Stateflow_M182' incorporates:
         *  Constant: '<S124>/Calib'
         *  Constant: '<S126>/Calib'
         *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
         *  SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts'
         *  UnitDelay: '<S202>/Unit Delay'
         *  UnitDelay: '<S77>/Unit Delay'
         */
        /* Gateway: ERER_MedTEH/EREC/DRM/Type 2/DRM_Stateflow_M182 */
        /* During: ERER_MedTEH/EREC/DRM/Type 2/DRM_Stateflow_M182 */
        if (((uint32)ERER_ac_DW.is_active_c5_ERER_ac) == 0U)
        {
            /* Entry: ERER_MedTEH/EREC/DRM/Type 2/DRM_Stateflow_M182 */
            ERER_ac_DW.is_active_c5_ERER_ac = 1U;

            /* Entry Internal: ERER_MedTEH/EREC/DRM/Type 2/DRM_Stateflow_M182 */
            /* Transition: '<S114>:210' */
            ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Init_l;
        }
        else
        {
            switch (ERER_ac_DW.is_c5_ERER_ac)
            {
              case ERER_ac_IN_Camel:
                /* During 'Camel': '<S114>:228' */
                if (VeERER_b_DRM_KeyRunDetect)
                {
                    /* Transition: '<S114>:214' */
                    /* Transition: '<S114>:172' */
                    ERER_ac_B.Out_Modify_Factor_p = 0.0F;
                    ERER_ac_B.Modify_Factor_k = 0.0F;
                    ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_B.VehDist_Delta_o = 0.0F;
                    ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_InitDelay_i;

                    /* Entry 'InitDelay': '<S114>:206' */
                    ERER_ac_DW.DRM_delay_n = 0U;
                }
                else
                {
                    tmp = ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;
                    if ((((uint32)VeERER_e_DRM_DMdebug1_M182) ==
                            CeDMDR_e_Camel_Mode) && (((uint32)tmp) ==
                            CeDMDR_e_OffRd))
                    {
                        /* Transition: '<S114>:211' */
                        ERER_ac_B.Modify_Factor_k =
                            ERER_ac_B.Out_Modify_Factor_p - (Vector_de +
                            rtb_TmpSignalConversionAtVeERER_l_EstRan);
                        ERER_ac_DW.VehDist_Init_m =
                            ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S114>:213' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Offroad;

                        /* Entry Internal 'Offroad': '<S114>:242' */
                        /* Transition: '<S114>:249' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S114>:251' */
                            /* Transition: '<S114>:253' */
                            ERER_ac_B.Out_Modify_Factor_p =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:255' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S114>:250' */
                                /* Transition: '<S114>:252' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:254' */
                            }
                        }
                    }
                    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) ==
                              CeDMDR_e_Camel_Mode) && (((uint32)tmp) ==
                              CeDMDR_e_SportBEV))
                    {
                        /* Transition: '<S114>:177' */
                        ERER_ac_B.Modify_Factor_k =
                            ERER_ac_B.Out_Modify_Factor_p -
                            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B +
                             rtb_TmpSignalConversionAtVeERER_l_EstRan);
                        ERER_ac_DW.VehDist_Init_m =
                            ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S114>:178' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Sport_h;

                        /* Entry Internal 'Sport': '<S114>:189' */
                        /* Transition: '<S114>:196' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S114>:198' */
                            /* Transition: '<S114>:200' */
                            ERER_ac_B.Out_Modify_Factor_p =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:202' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S114>:197' */
                                /* Transition: '<S114>:199' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:201' */
                            }
                        }
                    }
                    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) ==
                              CeDMDR_e_Camel_Mode) && (((uint32)tmp) ==
                              CeDMDR_e_Normal_Mode))
                    {
                        /* Transition: '<S114>:220' */
                        ERER_ac_B.Modify_Factor_k =
                            ERER_ac_B.Out_Modify_Factor_p -
                            rtb_TmpSignalConversionAtVeERER_l_EstRan;
                        ERER_ac_DW.VehDist_Init_m =
                            ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S114>:224' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Normal;

                        /* Entry Internal 'Normal': '<S114>:158' */
                        /* Transition: '<S114>:165' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                         ERER_ac_B.VehDist_Delta_o) + 1.0F;
                        if (rtb_Switch1_i > 0.0F)
                        {
                            /* Transition: '<S114>:167' */
                            /* Transition: '<S114>:169' */
                            ERER_ac_B.Out_Modify_Factor_p = rtb_Switch1_i *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:171' */
                        }
                        else
                        {
                            if (rtb_Switch1_i <= 0.0F)
                            {
                                /* Transition: '<S114>:166' */
                                /* Transition: '<S114>:168' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:170' */
                            }
                        }
                    }
                    else
                    {
                        /* Transition: '<S114>:218' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Camel;

                        /* Entry Internal 'Camel': '<S114>:228' */
                        /* Transition: '<S114>:235' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S114>:237' */
                            /* Transition: '<S114>:239' */
                            ERER_ac_B.Out_Modify_Factor_p =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:241' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S114>:236' */
                                /* Transition: '<S114>:238' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:240' */
                            }
                        }
                    }
                }
                break;

              case ERER_ac_IN_Init_l:
                /* During 'Init': '<S114>:155' */
                if (VeERER_b_DRM_KeyRunDetect)
                {
                    /* Transition: '<S114>:174' */
                    /* Transition: '<S114>:172' */
                    ERER_ac_B.Out_Modify_Factor_p = 0.0F;
                    ERER_ac_B.Modify_Factor_k = 0.0F;
                    ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_B.VehDist_Delta_o = 0.0F;
                }
                else
                {
                    /* Transition: '<S114>:176' */
                    /* Transition: '<S114>:188' */
                    ERER_ac_B.Out_Modify_Factor_p = 0.0F;
                    ERER_ac_B.Modify_Factor_k =
                        TmpSignalConversionAtVeERER_k_Modify_F_f;
                    ERER_ac_DW.VehDist_Init_m =
                        -TmpSignalConversionAtVeERER_l_VehDist__a;
                    ERER_ac_B.VehDist_Delta_o = 0.0F;
                }

                ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_InitDelay_i;

                /* Entry 'InitDelay': '<S114>:206' */
                ERER_ac_DW.DRM_delay_n = 0U;
                break;

              case ERER_ac_IN_InitDelay_i:
                /* During 'InitDelay': '<S114>:206' */
                tmp = ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;
                if ((ERER_ac_DW.DRM_delay_n >= KeERER_Cnt_DRM_InitDelay) &&
                        (((uint32)tmp) == CeDMDR_e_OffRd))
                {
                    /* Transition: '<S114>:215' */
                    /* Transition: '<S114>:208' */
                    /* Exit 'InitDelay': '<S114>:206' */
                    ERER_ac_DW.DRM_delay_n = 0U;
                    ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Offroad;

                    /* Entry Internal 'Offroad': '<S114>:242' */
                    /* Transition: '<S114>:249' */
                    ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_m;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S114>:251' */
                        /* Transition: '<S114>:253' */
                        ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                            ERER_ac_B.Modify_Factor_k;

                        /* Transition: '<S114>:255' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S114>:250' */
                            /* Transition: '<S114>:252' */
                            ERER_ac_B.Modify_Factor_k = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                            /* Transition: '<S114>:254' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_n >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp) == CeDMDR_e_SportBEV))
                {
                    /* Transition: '<S114>:157' */
                    /* Transition: '<S114>:223' */
                    /* Exit 'InitDelay': '<S114>:206' */
                    ERER_ac_DW.DRM_delay_n = 0U;
                    ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Sport_h;

                    /* Entry Internal 'Sport': '<S114>:189' */
                    /* Transition: '<S114>:196' */
                    ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_m;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S114>:198' */
                        /* Transition: '<S114>:200' */
                        ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                            ERER_ac_B.Modify_Factor_k;

                        /* Transition: '<S114>:202' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S114>:197' */
                            /* Transition: '<S114>:199' */
                            ERER_ac_B.Modify_Factor_k = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                            /* Transition: '<S114>:201' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_n >= KeERER_Cnt_DRM_InitDelay) &&
                         ((((uint32)tmp) == CeDMDR_e_Normal_Mode) || (((sint32)
                            ERER_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt) ==
                           1)))
                {
                    /* Transition: '<S114>:209' */
                    /* Transition: '<S114>:226' */
                    /* Exit 'InitDelay': '<S114>:206' */
                    ERER_ac_DW.DRM_delay_n = 0U;
                    ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Normal;

                    /* Entry Internal 'Normal': '<S114>:158' */
                    /* Transition: '<S114>:165' */
                    ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_m;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_o) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S114>:167' */
                        /* Transition: '<S114>:169' */
                        ERER_ac_B.Out_Modify_Factor_p = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                            ERER_ac_B.Modify_Factor_k;

                        /* Transition: '<S114>:171' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S114>:166' */
                            /* Transition: '<S114>:168' */
                            ERER_ac_B.Modify_Factor_k = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                            /* Transition: '<S114>:170' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay_n >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp) == CeDMDR_e_Camel_Mode))
                {
                    /* Transition: '<S114>:204' */
                    /* Transition: '<S114>:216' */
                    /* Exit 'InitDelay': '<S114>:206' */
                    ERER_ac_DW.DRM_delay_n = 0U;
                    ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Camel;

                    /* Entry Internal 'Camel': '<S114>:228' */
                    /* Transition: '<S114>:235' */
                    ERER_ac_B.VehDist_Delta_o = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_m;
                    rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                     ERER_ac_B.VehDist_Delta_o) + 1.0F;
                    if (rtb_Switch1_i > 0.0F)
                    {
                        /* Transition: '<S114>:237' */
                        /* Transition: '<S114>:239' */
                        ERER_ac_B.Out_Modify_Factor_p = rtb_Switch1_i *
                            ERER_ac_B.Modify_Factor_k;

                        /* Transition: '<S114>:241' */
                    }
                    else
                    {
                        if (rtb_Switch1_i <= 0.0F)
                        {
                            /* Transition: '<S114>:236' */
                            /* Transition: '<S114>:238' */
                            ERER_ac_B.Modify_Factor_k = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                            /* Transition: '<S114>:240' */
                        }
                    }
                }
                else
                {
                    ERER_ac_DW.DRM_delay_n = (uint16)((sint32)(((sint32)
                        ERER_ac_DW.DRM_delay_n) + 1));
                }
                break;

              case ERER_ac_IN_Normal:
                /* During 'Normal': '<S114>:158' */
                if (VeERER_b_DRM_KeyRunDetect)
                {
                    /* Transition: '<S114>:271' */
                    /* Transition: '<S114>:175' */
                    /* Transition: '<S114>:172' */
                    ERER_ac_B.Out_Modify_Factor_p = 0.0F;
                    ERER_ac_B.Modify_Factor_k = 0.0F;
                    ERER_ac_DW.VehDist_Init_m = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_B.VehDist_Delta_o = 0.0F;
                    ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_InitDelay_i;

                    /* Entry 'InitDelay': '<S114>:206' */
                    ERER_ac_DW.DRM_delay_n = 0U;
                }
                else
                {
                    tmp = ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;
                    if ((((uint32)VeERER_e_DRM_DMdebug1_M182) ==
                            CeDMDR_e_Normal_Mode) && (((uint32)tmp) ==
                            CeDMDR_e_OffRd))
                    {
                        /* Transition: '<S114>:277' */
                        ERER_ac_B.Modify_Factor_k =
                            ERER_ac_B.Out_Modify_Factor_p - Vector_de;
                        ERER_ac_DW.VehDist_Init_m =
                            ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S114>:268' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Offroad;

                        /* Entry Internal 'Offroad': '<S114>:242' */
                        /* Transition: '<S114>:249' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S114>:251' */
                            /* Transition: '<S114>:253' */
                            ERER_ac_B.Out_Modify_Factor_p =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:255' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S114>:250' */
                                /* Transition: '<S114>:252' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:254' */
                            }
                        }
                    }
                    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) ==
                              CeDMDR_e_Normal_Mode) && (((uint32)tmp) ==
                              CeDMDR_e_SportBEV))
                    {
                        /* Transition: '<S114>:273' */
                        ERER_ac_B.Modify_Factor_k =
                            ERER_ac_B.Out_Modify_Factor_p -
                            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
                        ERER_ac_DW.VehDist_Init_m =
                            ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S114>:278' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Sport_h;

                        /* Entry Internal 'Sport': '<S114>:189' */
                        /* Transition: '<S114>:196' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                         ERER_ac_B.VehDist_Delta_o) + 1.0F;
                        if (rtb_Switch1_i > 0.0F)
                        {
                            /* Transition: '<S114>:198' */
                            /* Transition: '<S114>:200' */
                            ERER_ac_B.Out_Modify_Factor_p = rtb_Switch1_i *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:202' */
                        }
                        else
                        {
                            if (rtb_Switch1_i <= 0.0F)
                            {
                                /* Transition: '<S114>:197' */
                                /* Transition: '<S114>:199' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:201' */
                            }
                        }
                    }
                    else if ((((uint32)VeERER_e_DRM_DMdebug1_M182) ==
                              CeDMDR_e_Normal_Mode) && (((uint32)tmp) ==
                              CeDMDR_e_Camel_Mode))
                    {
                        /* Transition: '<S114>:266' */
                        ERER_ac_B.Modify_Factor_k =
                            ERER_ac_B.Out_Modify_Factor_p +
                            rtb_TmpSignalConversionAtVeERER_l_EstRan;
                        ERER_ac_DW.VehDist_Init_m =
                            ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S114>:276' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Camel;

                        /* Entry Internal 'Camel': '<S114>:228' */
                        /* Transition: '<S114>:235' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                         ERER_ac_B.VehDist_Delta_o) + 1.0F;
                        if (rtb_Switch1_i > 0.0F)
                        {
                            /* Transition: '<S114>:237' */
                            /* Transition: '<S114>:239' */
                            ERER_ac_B.Out_Modify_Factor_p = rtb_Switch1_i *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:241' */
                        }
                        else
                        {
                            if (rtb_Switch1_i <= 0.0F)
                            {
                                /* Transition: '<S114>:236' */
                                /* Transition: '<S114>:238' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:240' */
                            }
                        }
                    }
                    else
                    {
                        /* Transition: '<S114>:282' */
                        ERER_ac_DW.is_c5_ERER_ac = ERER_ac_IN_Normal;

                        /* Entry Internal 'Normal': '<S114>:158' */
                        /* Transition: '<S114>:165' */
                        ERER_ac_B.VehDist_Delta_o =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_m;
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_o) + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S114>:167' */
                            /* Transition: '<S114>:169' */
                            ERER_ac_B.Out_Modify_Factor_p =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta_o) + 1.0F) *
                                ERER_ac_B.Modify_Factor_k;

                            /* Transition: '<S114>:171' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta_o) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S114>:166' */
                                /* Transition: '<S114>:168' */
                                ERER_ac_B.Modify_Factor_k = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_p = 0.0F;

                                /* Transition: '<S114>:170' */
                            }
                        }
                    }
                }
                break;

              case ERER_ac_IN_Offroad:
                ERER_ac_Offroad(&Vector_de,
                                &rtb_TmpSignalConversionAtVeERER_l_EstRan,
                                &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);
                break;

              default:
                ERER_ac_Sport_j(&Vector_de,
                                &rtb_TmpSignalConversionAtVeERER_l_EstRan,
                                &rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);
                break;
            }
        }

        /* End of Chart: '<S77>/DRM_Stateflow_M182' */

        /* If: '<S77>/If' */
        if (VeERER_b_DRM_TurnOffDetect_M182)
        {
            /* Outputs for IfAction SubSystem: '<S77>/If Action Subsystem' incorporates:
             *  ActionPort: '<S123>/Action Port'
             */
            ERER_ac_IfActionSubsystem(ERER_ac_B.VehDist_Delta_o,
                ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu,
                ERER_ac_B.Modify_Factor_k,
                ERER_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt);

            /* End of Outputs for SubSystem: '<S77>/If Action Subsystem' */
        }

        /* End of If: '<S77>/If' */

        /* RelationalOperator: '<S77>/Comparison3' incorporates:
         *  Constant: '<S129>/Calib'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        VeERER_b_DRM_debug4_M182 = (ERER_ac_DW.UnitDelay_DSTATE_o >=
            KeERER_l_HomologatedRangeThresh);

        /* Outputs for Atomic SubSystem: '<S77>/Limiter1' */
        /* Switch: '<S136>/Switch1' incorporates:
         *  Constant: '<S127>/Calib'
         *  RelationalOperator: '<S136>/Relational Operator'
         */
        if (KeERER_k_DRM_Modify_Factor_Max < ERER_ac_B.Out_Modify_Factor_p)
        {
            /* Switch: '<S77>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                KeERER_k_DRM_Modify_Factor_Max;
        }
        else
        {
            /* Switch: '<S77>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_B.Out_Modify_Factor_p;
        }

        /* End of Switch: '<S136>/Switch1' */

        /* Switch: '<S136>/Switch' incorporates:
         *  Constant: '<S128>/Calib'
         *  RelationalOperator: '<S136>/Relational Operator1'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f >
                KeERER_k_DRM_Modify_Factor_Min)
        {
            /* Switch: '<S136>/Switch' */
            VeERER_k_DRM_Modify_Factor_M182 =
                TmpSignalConversionAtVeERER_k_Modify_F_f;
        }
        else
        {
            /* Switch: '<S136>/Switch' */
            VeERER_k_DRM_Modify_Factor_M182 = KeERER_k_DRM_Modify_Factor_Min;
        }

        /* End of Switch: '<S136>/Switch' */
        /* End of Outputs for SubSystem: '<S77>/Limiter1' */

        /* Product: '<S77>/Product4' incorporates:
         *  Constant: '<S77>/Constant Value3'
         *  Sum: '<S77>/Sum2'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        TmpSignalConversionAtVeERER_k_Modify_F_f =
            (VeERER_k_DRM_Modify_Factor_M182 + 1.0F) *
            ERER_ac_DW.UnitDelay_DSTATE_o;

        /* Outputs for Atomic SubSystem: '<S77>/Hysteresis' */
        /* Switch: '<S122>/Switch1' incorporates:
         *  Constant: '<S132>/Calib'
         *  RelationalOperator: '<S122>/Greater  Than'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f > KeERER_l_TurtleExitThresh)
        {
            /* Switch: '<S122>/Switch1' incorporates:
             *  Constant: '<S122>/Constant Value'
             */
            VeERER_b_DRM_debug5_M182 = true;
        }
        else
        {
            /* Switch: '<S122>/Switch1' incorporates:
             *  Constant: '<S131>/Calib'
             *  RelationalOperator: '<S122>/Greater  Than1'
             *  UnitDelay: '<S122>/Unit Delay'
             */
            VeERER_b_DRM_debug5_M182 =
                ((TmpSignalConversionAtVeERER_k_Modify_F_f >=
                  KeERER_l_TurtleEntryThresh) && (ERER_ac_DW.UnitDelay_DSTATE_og));
        }

        /* End of Switch: '<S122>/Switch1' */

        /* Update for UnitDelay: '<S122>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_og = VeERER_b_DRM_debug5_M182;

        /* End of Outputs for SubSystem: '<S77>/Hysteresis' */

        /* Switch: '<S77>/Switch3' incorporates:
         *  Constant: '<S125>/Calib'
         */
        if (KeERER_b_DRMEnable)
        {
            /* Switch: '<S77>/Switch1' incorporates:
             *  Switch: '<S77>/Switch2'
             */
            if (VeERER_b_DRM_debug4_M182)
            {
                /* Switch: '<S77>/Switch1' incorporates:
                 *  UnitDelay: '<S9>/Unit Delay'
                 */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    ERER_ac_DW.UnitDelay_DSTATE_o;
            }
            else
            {
                if (!VeERER_b_DRM_debug5_M182)
                {
                    /* Switch: '<S77>/Switch1' incorporates:
                     *  Switch: '<S77>/Switch2'
                     *  UnitDelay: '<S9>/Unit Delay'
                     */
                    TmpSignalConversionAtVeERER_k_Modify_F_f =
                        ERER_ac_DW.UnitDelay_DSTATE_o;
                }
            }

            /* End of Switch: '<S77>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S77>/Limiter2' */
            /* Switch: '<S137>/Switch1' incorporates:
             *  Constant: '<S130>/Calib'
             *  RelationalOperator: '<S137>/Relational Operator'
             */
            if (KeERER_l_MaxHomologatedRange <
                    TmpSignalConversionAtVeERER_k_Modify_F_f)
            {
                /* Switch: '<S137>/Switch1' */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    KeERER_l_MaxHomologatedRange;
            }

            /* End of Switch: '<S137>/Switch1' */

            /* Switch: '<S137>/Switch' incorporates:
             *  Constant: '<S77>/Constant Value2'
             *  RelationalOperator: '<S137>/Relational Operator1'
             */
            if (TmpSignalConversionAtVeERER_k_Modify_F_f <= 0.0F)
            {
                /* Switch: '<S77>/Switch3' */
                TmpSignalConversionAtVeERER_k_Modify_F_f = 0.0F;
            }

            /* End of Switch: '<S137>/Switch' */
            /* End of Outputs for SubSystem: '<S77>/Limiter2' */
        }
        else
        {
            /* Switch: '<S77>/Switch3' incorporates:
             *  UnitDelay: '<S9>/Unit Delay'
             */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S77>/Switch3' */

        /* Merge: '<S8>/Merge' incorporates:
         *  Rounding: '<S77>/Rounding2'
         */
        ERER_ac_B.Merge = roundf(TmpSignalConversionAtVeERER_k_Modify_F_f);

        /* Update for UnitDelay: '<S77>/Unit Delay1' incorporates:
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_d =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* Update for UnitDelay: '<S77>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
         */
        ERER_ac_DW.UnitDelay_DSTATE_ly =
            ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;

        /* RelationalOperator: '<S77>/Comparison5' incorporates:
         *  RelationalOperator: '<S77>/Comparison7'
         *  UnitDelay: '<S77>/Unit Delay2'
         */
        UnitDelay4_DSTATE_tmp = ERER_ac_DW.UnitDelay2_DSTATE_i;

        /* Update for UnitDelay: '<S77>/Unit Delay3' incorporates:
         *  Constant: '<S119>/Constant'
         *  Constant: '<S120>/Constant'
         *  Constant: '<S121>/Constant'
         *  Logic: '<S77>/Logical1'
         *  RelationalOperator: '<S77>/Comparison5'
         *  RelationalOperator: '<S77>/Comparison6'
         *  RelationalOperator: '<S77>/Comparison7'
         */
        ERER_ac_DW.UnitDelay3_DSTATE_d = (((CePMDR_e_PowerMode_Run != ((uint32)
            UnitDelay4_DSTATE_tmp)) && (((uint32)UnitDelay4_DSTATE_tmp) !=
            CePMDR_e_PowerMode_Crank)) && (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Run));

        /* Update for UnitDelay: '<S77>/Unit Delay2' incorporates:
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        ERER_ac_DW.UnitDelay2_DSTATE_i =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* End of Outputs for SubSystem: '<S8>/Type 2' */
        break;

      case 2:
        if (ERER_ac_DW.If1_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S8>/Type 3' incorporates:
             *  ActionPort: '<S78>/Action Port'
             */
            /* InitializeConditions for If: '<S8>/If1' incorporates:
             *  UnitDelay: '<S78>/Unit Delay'
             *  UnitDelay: '<S78>/Unit Delay1'
             */
            ERER_ac_DW.UnitDelay1_DSTATE_fa = CePMDR_e_PowerMode_Off;
            ERER_ac_DW.UnitDelay_DSTATE_hr = CeDMDR_e_NoDrvMd;

            /* End of InitializeConditions for SubSystem: '<S8>/Type 3' */

            /* SystemReset for IfAction SubSystem: '<S8>/Type 3' incorporates:
             *  ActionPort: '<S78>/Action Port'
             */
            /* SystemReset for If: '<S8>/If1' incorporates:
             *  Chart: '<S78>/DRM_Stateflow_CityBEV'
             *  UnitDelay: '<S143>/Unit Delay'
             */
            ERER_ac_DW.is_active_c4_ERER_ac = 0U;
            ERER_ac_DW.is_c4_ERER_ac = 0;
            ERER_ac_DW.VehDist_Init_o = 0.0F;
            ERER_ac_B.Out_Modify_Factor_b = 0.0F;
            ERER_ac_B.VehDist_Delta_m = 0.0F;
            ERER_ac_B.Modify_Factor_m = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S78>/Hysteresis' */
            ERER_ac_DW.UnitDelay_DSTATE_dl = false;

            /* End of SystemReset for SubSystem: '<S78>/Hysteresis' */
            /* End of SystemReset for SubSystem: '<S8>/Type 3' */
        }

        /* Outputs for IfAction SubSystem: '<S8>/Type 3' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        /* Logic: '<S78>/Logical' incorporates:
         *  Constant: '<S140>/Constant'
         *  Constant: '<S141>/Constant'
         *  Constant: '<S142>/Constant'
         *  RelationalOperator: '<S78>/Comparison1'
         *  RelationalOperator: '<S78>/Comparison2'
         *  RelationalOperator: '<S78>/Comparison4'
         *  UnitDelay: '<S78>/Unit Delay1'
         */
        VeERER_b_DRM_TurnOffDetect = (((((uint32)ERER_ac_DW.UnitDelay1_DSTATE_fa)
            == CePMDR_e_PowerMode_Run) && (CePMDR_e_PowerMode_Crank != ((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po))) && (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) != CePMDR_e_PowerMode_Run));

        /* UnitDelay: '<S78>/Unit Delay' */
        VeERER_e_DRM_DMdebug1 = ERER_ac_DW.UnitDelay_DSTATE_hr;

        /* If: '<S157>/If' incorporates:
         *  Constant: '<S145>/Calib'
         */
        if (KeERER_b_Abarth)
        {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
             *  ActionPort: '<S158>/Action Port'
             */
            /* Merge: '<S157>/Merge' incorporates:
             *  Lookup_n-D: '<S160>/Vector'
             *  Switch: '<S360>/Switch'
             *  UnitDelay: '<S9>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeERER_l_EstRan = look1_iflf_binlca_16a
                (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
                  &(KxERER_k_SportMod_Perc[0])), ((const float32 *)
                  &(KtERER_k_SportMod_Perc[0])), 8U);

            /* Merge: '<S157>/Merge1' incorporates:
             *  Constant: '<S158>/Constant Value'
             *  SignalConversion generated from: '<S158>/CamelMod'
             */
            VeERER_k_CamelModPerc = 0.0F;

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S159>/Action Port'
             */
            /* Merge: '<S157>/Merge1' incorporates:
             *  Lookup_n-D: '<S161>/Vector'
             *  Switch: '<S360>/Switch'
             *  UnitDelay: '<S9>/Unit Delay'
             */
            VeERER_k_CamelModPerc = look1_iflf_binlca_16a
                (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
                  &(KxERER_k_CamelMod_Perc[0])), ((const float32 *)
                  &(KtERER_k_CamelMod_Perc[0])), 8U);

            /* Merge: '<S157>/Merge' incorporates:
             *  Constant: '<S159>/Constant Value'
             *  SignalConversion generated from: '<S159>/SportMod'
             */
            rtb_TmpSignalConversionAtVeERER_l_EstRan = 0.0F;

            /* End of Outputs for SubSystem: '<S157>/If Action Subsystem1' */
        }

        /* End of If: '<S157>/If' */

        /* Lookup_n-D: '<S154>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        Vector_de = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((const
            float32 *)&(KxERER_k_RangeMod_Perc[0])), ((const float32 *)
            &(KtERER_k_RangeMod_Perc[0])), 8U);

        /* Chart: '<S78>/DRM_Stateflow_CityBEV' incorporates:
         *  Constant: '<S147>/Calib'
         *  DataTypeConversion: '<S139>/DataTypeConversion'
         *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
         *  SignalConversion generated from: '<S1>/VeERER_e_DriveMode_Wakeup_Read'
         *  SignalConversion generated from: '<S1>/VeERER_e_TurtleMdSts_Wakeup'
         *  SignalConversion generated from: '<S3>/VeERER_e_DriveMode_Wakeup_write'
         *  SignalConversion generated from: '<S3>/VeERER_e_TurtleMdSts_Wakeup'
         *  UnitDelay: '<S202>/Unit Delay'
         *  UnitDelay: '<S78>/Unit Delay'
         */
        /* Gateway: ERER_MedTEH/EREC/DRM/Type 3/DRM_Stateflow_CityBEV */
        /* During: ERER_MedTEH/EREC/DRM/Type 3/DRM_Stateflow_CityBEV */
        if (((uint32)ERER_ac_DW.is_active_c4_ERER_ac) == 0U)
        {
            /* Entry: ERER_MedTEH/EREC/DRM/Type 3/DRM_Stateflow_CityBEV */
            ERER_ac_DW.is_active_c4_ERER_ac = 1U;

            /* Entry Internal: ERER_MedTEH/EREC/DRM/Type 3/DRM_Stateflow_CityBEV */
            /* Transition: '<S138>:315' */
            ERER_ac_B.Out_Modify_Factor_b = 0.0F;
            ERER_ac_B.Modify_Factor_m = TmpSignalConversionAtVeERER_k_Modify_F_f;
            ERER_ac_DW.VehDist_Init_o =
                -TmpSignalConversionAtVeERER_l_VehDist__a;
            ERER_ac_B.VehDist_Delta_m = 0.0F;
            ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Init_l;
        }
        else
        {
            switch (ERER_ac_DW.is_c4_ERER_ac)
            {
              case ERER_ac_IN_Camel_or_Sport:
                /* During 'Camel_or_Sport': '<S138>:336' */
                tmp = ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;
                if (((((uint32)VeERER_e_DRM_DMdebug1) == CeDMDR_e_Camel_Mode) ||
                     (((uint32)VeERER_e_DRM_DMdebug1) == CeDMDR_e_SportBEV)) &&
                        (((uint32)tmp) == CeDMDR_e_Normal_Mode))
                {
                    /* Transition: '<S138>:311' */
                    ERER_ac_B.Modify_Factor_m = (ERER_ac_B.Out_Modify_Factor_b -
                        VeERER_k_CamelModPerc) +
                        rtb_TmpSignalConversionAtVeERER_l_EstRan;
                    ERER_ac_DW.VehDist_Init_o = ERER_ac_DW.UnitDelay_DSTATE_h;

                    /* Transition: '<S138>:308' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Normal_k;

                    /* Entry Internal 'Normal': '<S138>:322' */
                    /* Transition: '<S138>:329' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:331' */
                        /* Transition: '<S138>:333' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:335' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:330' */
                            /* Transition: '<S138>:332' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:334' */
                        }
                    }
                }
                else if (((((uint32)VeERER_e_DRM_DMdebug1) ==
                           CeDMDR_e_Camel_Mode) || (((uint32)
                            VeERER_e_DRM_DMdebug1) == CeDMDR_e_SportBEV)) &&
                         (((uint32)tmp) == CeDMDR_e_Range_Mode))
                {
                    /* Transition: '<S138>:317' */
                    ERER_ac_B.Modify_Factor_m = ERER_ac_B.Out_Modify_Factor_b -
                        ((VeERER_k_CamelModPerc - Vector_de) -
                         rtb_TmpSignalConversionAtVeERER_l_EstRan);
                    ERER_ac_DW.VehDist_Init_o = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Range;

                    /* Entry Internal 'Range': '<S138>:352' */
                    /* Transition: '<S138>:359' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:361' */
                        /* Transition: '<S138>:363' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:365' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:360' */
                            /* Transition: '<S138>:362' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:364' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S138>:318' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Camel_or_Sport;

                    /* Entry Internal 'Camel_or_Sport': '<S138>:336' */
                    /* Transition: '<S138>:343' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:345' */
                        /* Transition: '<S138>:347' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:349' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:344' */
                            /* Transition: '<S138>:346' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:348' */
                        }
                    }
                }
                break;

              case ERER_ac_IN_Init_l:
                /* During 'Init': '<S138>:351' */
                tmp = (TeDMDR_e_DrvMd)
                    Rte_IrvRead_ERER_MedTEH_VeERER_e_DriveMode_Wakeup_write_IRV();
                if ((((uint32)tmp) == CeDMDR_e_Normal_Mode) ||
                        (Rte_IrvRead_ERER_MedTEH_VeERER_e_TurtleMdSts_Wakeup_IRV
                         () == 1))
                {
                    /* Transition: '<S138>:312' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Normal_k;

                    /* Entry Internal 'Normal': '<S138>:322' */
                    /* Transition: '<S138>:329' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:331' */
                        /* Transition: '<S138>:333' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:335' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:330' */
                            /* Transition: '<S138>:332' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:334' */
                        }
                    }
                }
                else if ((((uint32)tmp) == CeDMDR_e_Camel_Mode) || (((uint32)tmp)
                          == CeDMDR_e_SportBEV))
                {
                    /* Transition: '<S138>:319' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Camel_or_Sport;

                    /* Entry Internal 'Camel_or_Sport': '<S138>:336' */
                    /* Transition: '<S138>:343' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:345' */
                        /* Transition: '<S138>:347' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:349' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:344' */
                            /* Transition: '<S138>:346' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:348' */
                        }
                    }
                }
                else
                {
                    if (((uint32)tmp) == CeDMDR_e_Range_Mode)
                    {
                        /* Transition: '<S138>:320' */
                        ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Range;

                        /* Entry Internal 'Range': '<S138>:352' */
                        /* Transition: '<S138>:359' */
                        ERER_ac_B.VehDist_Delta_m =
                            ERER_ac_DW.UnitDelay_DSTATE_h -
                            ERER_ac_DW.VehDist_Init_o;
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S138>:361' */
                            /* Transition: '<S138>:363' */
                            ERER_ac_B.Out_Modify_Factor_b =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                                ERER_ac_B.Modify_Factor_m;

                            /* Transition: '<S138>:365' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S138>:360' */
                                /* Transition: '<S138>:362' */
                                ERER_ac_B.Modify_Factor_m = 0.0F;
                                ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                                /* Transition: '<S138>:364' */
                            }
                        }
                    }
                }
                break;

              case ERER_ac_IN_Normal_k:
                /* During 'Normal': '<S138>:322' */
                tmp = ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;
                if ((((uint32)VeERER_e_DRM_DMdebug1) == CeDMDR_e_Normal_Mode) &&
                    ((((uint32)tmp) == CeDMDR_e_Camel_Mode) || (((uint32)tmp) ==
                      CeDMDR_e_SportBEV)))
                {
                    /* Transition: '<S138>:313' */
                    ERER_ac_B.Modify_Factor_m = (ERER_ac_B.Out_Modify_Factor_b +
                        VeERER_k_CamelModPerc) -
                        rtb_TmpSignalConversionAtVeERER_l_EstRan;
                    ERER_ac_DW.VehDist_Init_o = ERER_ac_DW.UnitDelay_DSTATE_h;

                    /* Transition: '<S138>:314' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Camel_or_Sport;

                    /* Entry Internal 'Camel_or_Sport': '<S138>:336' */
                    /* Transition: '<S138>:343' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                     ERER_ac_B.VehDist_Delta_m) + 1.0F;
                    if (rtb_Switch1_i > 0.0F)
                    {
                        /* Transition: '<S138>:345' */
                        /* Transition: '<S138>:347' */
                        ERER_ac_B.Out_Modify_Factor_b = rtb_Switch1_i *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:349' */
                    }
                    else
                    {
                        if (rtb_Switch1_i <= 0.0F)
                        {
                            /* Transition: '<S138>:344' */
                            /* Transition: '<S138>:346' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:348' */
                        }
                    }
                }
                else if ((((uint32)VeERER_e_DRM_DMdebug1) ==
                          CeDMDR_e_Normal_Mode) && (((uint32)tmp) ==
                          CeDMDR_e_Range_Mode))
                {
                    /* Transition: '<S138>:306' */
                    ERER_ac_B.Modify_Factor_m = ERER_ac_B.Out_Modify_Factor_b +
                        Vector_de;
                    ERER_ac_DW.VehDist_Init_o = ERER_ac_DW.UnitDelay_DSTATE_h;

                    /* Transition: '<S138>:309' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Range;

                    /* Entry Internal 'Range': '<S138>:352' */
                    /* Transition: '<S138>:359' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                     ERER_ac_B.VehDist_Delta_m) + 1.0F;
                    if (rtb_Switch1_i > 0.0F)
                    {
                        /* Transition: '<S138>:361' */
                        /* Transition: '<S138>:363' */
                        ERER_ac_B.Out_Modify_Factor_b = rtb_Switch1_i *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:365' */
                    }
                    else
                    {
                        if (rtb_Switch1_i <= 0.0F)
                        {
                            /* Transition: '<S138>:360' */
                            /* Transition: '<S138>:362' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:364' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S138>:305' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Normal_k;

                    /* Entry Internal 'Normal': '<S138>:322' */
                    /* Transition: '<S138>:329' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:331' */
                        /* Transition: '<S138>:333' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:335' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:330' */
                            /* Transition: '<S138>:332' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:334' */
                        }
                    }
                }
                break;

              default:
                /* During 'Range': '<S138>:352' */
                tmp = ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;
                if ((((uint32)VeERER_e_DRM_DMdebug1) == CeDMDR_e_Range_Mode) &&
                        (((uint32)tmp) == CeDMDR_e_Normal_Mode))
                {
                    /* Transition: '<S138>:310' */
                    ERER_ac_B.Modify_Factor_m = ERER_ac_B.Out_Modify_Factor_b -
                        Vector_de;
                    ERER_ac_DW.VehDist_Init_o = ERER_ac_DW.UnitDelay_DSTATE_h;

                    /* Transition: '<S138>:307' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Normal_k;

                    /* Entry Internal 'Normal': '<S138>:322' */
                    /* Transition: '<S138>:329' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:331' */
                        /* Transition: '<S138>:333' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:335' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:330' */
                            /* Transition: '<S138>:332' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:334' */
                        }
                    }
                }
                else if ((((uint32)VeERER_e_DRM_DMdebug1) == CeDMDR_e_Range_Mode)
                         && ((((uint32)tmp) == CeDMDR_e_Camel_Mode) || (((uint32)
                            tmp) == CeDMDR_e_SportBEV)))
                {
                    /* Transition: '<S138>:316' */
                    ERER_ac_B.Modify_Factor_m = ((VeERER_k_CamelModPerc -
                        Vector_de) - rtb_TmpSignalConversionAtVeERER_l_EstRan) +
                        ERER_ac_B.Out_Modify_Factor_b;
                    ERER_ac_DW.VehDist_Init_o = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Camel_or_Sport;

                    /* Entry Internal 'Camel_or_Sport': '<S138>:336' */
                    /* Transition: '<S138>:343' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:345' */
                        /* Transition: '<S138>:347' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:349' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:344' */
                            /* Transition: '<S138>:346' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:348' */
                        }
                    }
                }
                else
                {
                    /* Transition: '<S138>:321' */
                    ERER_ac_DW.is_c4_ERER_ac = ERER_ac_IN_Range;

                    /* Entry Internal 'Range': '<S138>:352' */
                    /* Transition: '<S138>:359' */
                    ERER_ac_B.VehDist_Delta_m = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init_o;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta_m) +
                         1.0F) > 0.0F)
                    {
                        /* Transition: '<S138>:361' */
                        /* Transition: '<S138>:363' */
                        ERER_ac_B.Out_Modify_Factor_b = (((-KeERER_k_BlendFactor)
                            * ERER_ac_B.VehDist_Delta_m) + 1.0F) *
                            ERER_ac_B.Modify_Factor_m;

                        /* Transition: '<S138>:365' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) *
                                ERER_ac_B.VehDist_Delta_m) + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S138>:360' */
                            /* Transition: '<S138>:362' */
                            ERER_ac_B.Modify_Factor_m = 0.0F;
                            ERER_ac_B.Out_Modify_Factor_b = 0.0F;

                            /* Transition: '<S138>:364' */
                        }
                    }
                }
                break;
            }
        }

        /* End of Chart: '<S78>/DRM_Stateflow_CityBEV' */

        /* If: '<S78>/If' */
        if (VeERER_b_DRM_TurnOffDetect)
        {
            /* Outputs for IfAction SubSystem: '<S78>/If Action Subsystem' incorporates:
             *  ActionPort: '<S144>/Action Port'
             */
            ERER_ac_IfActionSubsystem(ERER_ac_B.VehDist_Delta_m,
                ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu,
                ERER_ac_B.Modify_Factor_m,
                ERER_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt);

            /* End of Outputs for SubSystem: '<S78>/If Action Subsystem' */
        }

        /* End of If: '<S78>/If' */

        /* RelationalOperator: '<S78>/Comparison3' incorporates:
         *  Constant: '<S150>/Calib'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        VeERER_b_DRM_debug4 = (ERER_ac_DW.UnitDelay_DSTATE_o >=
                               KeERER_l_HomologatedRangeThresh);

        /* Outputs for Atomic SubSystem: '<S78>/Limiter1' */
        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S148>/Calib'
         *  RelationalOperator: '<S155>/Relational Operator'
         */
        if (KeERER_k_DRM_Modify_Factor_Max < ERER_ac_B.Out_Modify_Factor_b)
        {
            /* Switch: '<S78>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                KeERER_k_DRM_Modify_Factor_Max;
        }
        else
        {
            /* Switch: '<S78>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_B.Out_Modify_Factor_b;
        }

        /* End of Switch: '<S155>/Switch1' */

        /* Switch: '<S155>/Switch' incorporates:
         *  Constant: '<S149>/Calib'
         *  RelationalOperator: '<S155>/Relational Operator1'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f >
                KeERER_k_DRM_Modify_Factor_Min)
        {
            /* Switch: '<S155>/Switch' */
            VeERER_k_DRM_Modify_Factor =
                TmpSignalConversionAtVeERER_k_Modify_F_f;
        }
        else
        {
            /* Switch: '<S155>/Switch' */
            VeERER_k_DRM_Modify_Factor = KeERER_k_DRM_Modify_Factor_Min;
        }

        /* End of Switch: '<S155>/Switch' */
        /* End of Outputs for SubSystem: '<S78>/Limiter1' */

        /* Product: '<S78>/Product4' incorporates:
         *  Constant: '<S78>/Constant Value3'
         *  Sum: '<S78>/Sum2'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        TmpSignalConversionAtVeERER_k_Modify_F_f = (VeERER_k_DRM_Modify_Factor +
            1.0F) * ERER_ac_DW.UnitDelay_DSTATE_o;

        /* Outputs for Atomic SubSystem: '<S78>/Hysteresis' */
        /* Switch: '<S143>/Switch1' incorporates:
         *  Constant: '<S153>/Calib'
         *  RelationalOperator: '<S143>/Greater  Than'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f > KeERER_l_TurtleExitThresh)
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Constant: '<S143>/Constant Value'
             */
            VeERER_b_DRM_debug5 = true;
        }
        else
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Constant: '<S152>/Calib'
             *  RelationalOperator: '<S143>/Greater  Than1'
             *  UnitDelay: '<S143>/Unit Delay'
             */
            VeERER_b_DRM_debug5 = ((TmpSignalConversionAtVeERER_k_Modify_F_f >=
                                    KeERER_l_TurtleEntryThresh) &&
                                   (ERER_ac_DW.UnitDelay_DSTATE_dl));
        }

        /* End of Switch: '<S143>/Switch1' */

        /* Update for UnitDelay: '<S143>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_dl = VeERER_b_DRM_debug5;

        /* End of Outputs for SubSystem: '<S78>/Hysteresis' */

        /* Switch: '<S78>/Switch3' incorporates:
         *  Constant: '<S146>/Calib'
         */
        if (KeERER_b_DRMEnable)
        {
            /* Switch: '<S78>/Switch1' incorporates:
             *  Switch: '<S78>/Switch2'
             */
            if (VeERER_b_DRM_debug4)
            {
                /* Switch: '<S78>/Switch1' incorporates:
                 *  UnitDelay: '<S9>/Unit Delay'
                 */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    ERER_ac_DW.UnitDelay_DSTATE_o;
            }
            else
            {
                if (!VeERER_b_DRM_debug5)
                {
                    /* Switch: '<S78>/Switch1' incorporates:
                     *  Switch: '<S78>/Switch2'
                     *  UnitDelay: '<S9>/Unit Delay'
                     */
                    TmpSignalConversionAtVeERER_k_Modify_F_f =
                        ERER_ac_DW.UnitDelay_DSTATE_o;
                }
            }

            /* End of Switch: '<S78>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S78>/Limiter2' */
            /* Switch: '<S156>/Switch1' incorporates:
             *  Constant: '<S151>/Calib'
             *  RelationalOperator: '<S156>/Relational Operator'
             */
            if (KeERER_l_MaxHomologatedRange <
                    TmpSignalConversionAtVeERER_k_Modify_F_f)
            {
                /* Switch: '<S156>/Switch1' */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    KeERER_l_MaxHomologatedRange;
            }

            /* End of Switch: '<S156>/Switch1' */

            /* Switch: '<S156>/Switch' incorporates:
             *  Constant: '<S78>/Constant Value2'
             *  RelationalOperator: '<S156>/Relational Operator1'
             */
            if (TmpSignalConversionAtVeERER_k_Modify_F_f <= 0.0F)
            {
                /* Switch: '<S78>/Switch3' */
                TmpSignalConversionAtVeERER_k_Modify_F_f = 0.0F;
            }

            /* End of Switch: '<S156>/Switch' */
            /* End of Outputs for SubSystem: '<S78>/Limiter2' */
        }
        else
        {
            /* Switch: '<S78>/Switch3' incorporates:
             *  UnitDelay: '<S9>/Unit Delay'
             */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S78>/Switch3' */

        /* Merge: '<S8>/Merge' incorporates:
         *  Rounding: '<S78>/Rounding2'
         */
        ERER_ac_B.Merge = roundf(TmpSignalConversionAtVeERER_k_Modify_F_f);

        /* Update for UnitDelay: '<S78>/Unit Delay1' incorporates:
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_fa =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* Update for UnitDelay: '<S78>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
         */
        ERER_ac_DW.UnitDelay_DSTATE_hr =
            ERER_ac_B.TmpSignalConversionAtVeDMDR_e_DrvMdArbOu;

        /* End of Outputs for SubSystem: '<S8>/Type 3' */
        break;

      case 3:
        if (ERER_ac_DW.If1_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S8>/Type 4' incorporates:
             *  ActionPort: '<S79>/Action Port'
             */
            /* InitializeConditions for If: '<S8>/If1' incorporates:
             *  UnitDelay: '<S79>/Unit Delay1'
             *  UnitDelay: '<S79>/Unit Delay2'
             *  UnitDelay: '<S79>/Unit Delay3'
             *  UnitDelay: '<S79>/Unit Delay5'
             */
            ERER_ac_DW.UnitDelay1_DSTATE_g = CePMDR_e_PowerMode_Off;
            ERER_ac_DW.UnitDelay5_DSTATE = CeHMIR_e_AutoStat;
            ERER_ac_DW.UnitDelay3_DSTATE = false;
            ERER_ac_DW.UnitDelay2_DSTATE_j = CePMDR_e_PowerMode_Off;

            /* End of InitializeConditions for SubSystem: '<S8>/Type 4' */

            /* SystemReset for IfAction SubSystem: '<S8>/Type 4' incorporates:
             *  ActionPort: '<S79>/Action Port'
             */
            /* SystemReset for If: '<S8>/If1' incorporates:
             *  Chart: '<S79>/DRM_Stateflow_LP3'
             *  UnitDelay: '<S170>/Unit Delay'
             */
            ERER_ac_DW.is_active_c7_ERER_ac = 0U;
            ERER_ac_DW.is_c7_ERER_ac = 0;
            ERER_ac_DW.VehDist_Init = 0.0F;
            ERER_ac_DW.DRM_delay = 0U;
            ERER_ac_B.Out_Modify_Factor = 0.0F;
            ERER_ac_B.VehDist_Delta = 0.0F;
            ERER_ac_B.Modify_Factor = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S79>/Hysteresis' */
            ERER_ac_DW.UnitDelay_DSTATE_ke = false;

            /* End of SystemReset for SubSystem: '<S79>/Hysteresis' */
            /* End of SystemReset for SubSystem: '<S8>/Type 4' */
        }

        /* Outputs for IfAction SubSystem: '<S8>/Type 4' incorporates:
         *  ActionPort: '<S79>/Action Port'
         */
        /* Lookup_n-D: '<S181>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeERER_l_EstRan = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_CamelMod_Perc[0])), ((const float32 *)
              &(KtERER_k_CamelMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S184>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        Vector_de = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((const
            float32 *)&(KxERER_k_OffrdMod_Perc[0])), ((const float32 *)
            &(KtERER_k_OffrdMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S185>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = look1_iflf_binlca_16a
            (ERER_ac_DW.UnitDelay_DSTATE_o, ((const float32 *)
              &(KxERER_k_SportMod_Perc[0])), ((const float32 *)
              &(KtERER_k_SportMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S182>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_Vector_px = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((
            const float32 *)&(KxERER_k_CorsaMod_Perc[0])), ((const float32 *)
            &(KtERER_k_CorsaMod_Perc[0])), 8U);

        /* Lookup_n-D: '<S183>/Vector' incorporates:
         *  Switch: '<S360>/Switch'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        rtb_Switch1_i = look1_iflf_binlca_16a(ERER_ac_DW.UnitDelay_DSTATE_o, ((
            const float32 *)&(KxERER_k_CustomMod_Perc[0])), ((const float32 *)
            &(KtERER_k_CustomMod_Perc[0])), 8U);

        /* Chart: '<S79>/DRM_Stateflow_LP3' incorporates:
         *  Constant: '<S172>/Calib'
         *  Constant: '<S174>/Calib'
         *  SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts'
         *  SignalConversion generated from: '<S1>/VeHMIR_e_TerrainModeStat'
         *  UnitDelay: '<S202>/Unit Delay'
         *  UnitDelay: '<S79>/Unit Delay3'
         *  UnitDelay: '<S79>/Unit Delay5'
         */
        /* Gateway: ERER_MedTEH/EREC/DRM/Type 4/DRM_Stateflow_LP3 */
        /* During: ERER_MedTEH/EREC/DRM/Type 4/DRM_Stateflow_LP3 */
        if (((uint32)ERER_ac_DW.is_active_c7_ERER_ac) == 0U)
        {
            /* Entry: ERER_MedTEH/EREC/DRM/Type 4/DRM_Stateflow_LP3 */
            ERER_ac_DW.is_active_c7_ERER_ac = 1U;

            /* Entry Internal: ERER_MedTEH/EREC/DRM/Type 4/DRM_Stateflow_LP3 */
            /* Transition: '<S162>:210' */
            ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Init_b;

            /* Entry 'Init': '<S162>:155' */
        }
        else
        {
            switch (ERER_ac_DW.is_c7_ERER_ac)
            {
              case ERER_ac_IN_Auto:
                /* During 'Auto': '<S162>:158' */
                if (ERER_ac_DW.UnitDelay3_DSTATE)
                {
                    /* Transition: '<S162>:271' */
                    /* Transition: '<S162>:175' */
                    /* Transition: '<S162>:172' */
                    ERER_ac_B.Out_Modify_Factor = 0.0F;
                    ERER_ac_B.Modify_Factor = 0.0F;
                    ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_B.VehDist_Delta = 0.0F;
                    ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_InitDelay_p;

                    /* Entry 'InitDelay': '<S162>:206' */
                    ERER_ac_DW.DRM_delay = 0U;
                }
                else
                {
                    tmp_0 = ERER_ac_DW.UnitDelay5_DSTATE;
                    if ((((uint32)tmp_0) == CeHMIR_e_AutoStat) && (((uint32)
                            ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod) ==
                         CeHMIR_e_SportStat))
                    {
                        /* Transition: '<S162>:277' */
                        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor -
                            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
                        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S162>:268' */
                        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Sport_l;

                        /* Entry Internal 'Sport': '<S162>:242' */
                        /* Transition: '<S162>:249' */
                        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h
                            - ERER_ac_DW.VehDist_Init;
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S162>:251' */
                            /* Transition: '<S162>:253' */
                            ERER_ac_B.Out_Modify_Factor =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta) + 1.0F) *
                                ERER_ac_B.Modify_Factor;

                            /* Transition: '<S162>:255' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S162>:250' */
                                /* Transition: '<S162>:252' */
                                ERER_ac_B.Modify_Factor = 0.0F;
                                ERER_ac_B.Out_Modify_Factor = 0.0F;

                                /* Transition: '<S162>:254' */
                            }
                        }
                    }
                    else if ((((uint32)tmp_0) == CeHMIR_e_AutoStat) && (((uint32)
                               ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod)
                              == CeHMIR_e_OffRoadStat))
                    {
                        /* Transition: '<S162>:273' */
                        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor -
                            Vector_de;
                        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S162>:278' */
                        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_OffRoad;

                        /* Entry Internal 'OffRoad': '<S162>:189' */
                        /* Transition: '<S162>:196' */
                        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h
                            - ERER_ac_DW.VehDist_Init;
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S162>:198' */
                            /* Transition: '<S162>:200' */
                            ERER_ac_B.Out_Modify_Factor =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta) + 1.0F) *
                                ERER_ac_B.Modify_Factor;

                            /* Transition: '<S162>:202' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S162>:197' */
                                /* Transition: '<S162>:199' */
                                ERER_ac_B.Modify_Factor = 0.0F;
                                ERER_ac_B.Out_Modify_Factor = 0.0F;

                                /* Transition: '<S162>:201' */
                            }
                        }
                    }
                    else if ((((uint32)tmp_0) == CeHMIR_e_AutoStat) && (((uint32)
                               ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod)
                              == CeHMIR_e_EcoStat))
                    {
                        /* Transition: '<S162>:266' */
                        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor +
                            rtb_TmpSignalConversionAtVeERER_l_EstRan;
                        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S162>:276' */
                        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Eco_b;

                        /* Entry Internal 'Eco': '<S162>:228' */
                        /* Transition: '<S162>:235' */
                        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h
                            - ERER_ac_DW.VehDist_Init;
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S162>:237' */
                            /* Transition: '<S162>:239' */
                            ERER_ac_B.Out_Modify_Factor =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta) + 1.0F) *
                                ERER_ac_B.Modify_Factor;

                            /* Transition: '<S162>:241' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S162>:236' */
                                /* Transition: '<S162>:238' */
                                ERER_ac_B.Modify_Factor = 0.0F;
                                ERER_ac_B.Out_Modify_Factor = 0.0F;

                                /* Transition: '<S162>:240' */
                            }
                        }
                    }
                    else if ((((uint32)tmp_0) == CeHMIR_e_AutoStat) && (((uint32)
                               ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod)
                              == CeHMIR_e_CorsaStat))
                    {
                        /* Transition: '<S162>:381' */
                        ERER_ac_B.Modify_Factor = ERER_ac_B.Out_Modify_Factor -
                            rtb_Vector_px;
                        ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;

                        /* Transition: '<S162>:382' */
                        ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Corsa;

                        /* Entry Internal 'Corsa': '<S162>:306' */
                        /* Transition: '<S162>:313' */
                        ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h
                            - ERER_ac_DW.VehDist_Init;
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) > 0.0F)
                        {
                            /* Transition: '<S162>:315' */
                            /* Transition: '<S162>:317' */
                            ERER_ac_B.Out_Modify_Factor =
                                (((-KeERER_k_BlendFactor) *
                                  ERER_ac_B.VehDist_Delta) + 1.0F) *
                                ERER_ac_B.Modify_Factor;

                            /* Transition: '<S162>:319' */
                        }
                        else
                        {
                            if ((((-KeERER_k_BlendFactor) *
                                    ERER_ac_B.VehDist_Delta) + 1.0F) <= 0.0F)
                            {
                                /* Transition: '<S162>:314' */
                                /* Transition: '<S162>:316' */
                                ERER_ac_B.Modify_Factor = 0.0F;
                                ERER_ac_B.Out_Modify_Factor = 0.0F;

                                /* Transition: '<S162>:318' */
                            }
                        }
                    }
                    else
                    {
                        if ((((uint32)tmp_0) == CeHMIR_e_AutoStat) && (((uint32)
                                ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod)
                             == CeHMIR_e_CustomStat))
                        {
                            /* Transition: '<S162>:384' */
                            ERER_ac_B.Modify_Factor =
                                ERER_ac_B.Out_Modify_Factor - rtb_Switch1_i;
                            ERER_ac_DW.VehDist_Init =
                                ERER_ac_DW.UnitDelay_DSTATE_h;

                            /* Transition: '<S162>:385' */
                            ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Custom;

                            /* Entry Internal 'Custom': '<S162>:320' */
                            /* Transition: '<S162>:327' */
                            ERER_ac_B.VehDist_Delta =
                                ERER_ac_DW.UnitDelay_DSTATE_h -
                                ERER_ac_DW.VehDist_Init;
                            rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                             ERER_ac_B.VehDist_Delta) + 1.0F;
                            if (rtb_Switch1_i > 0.0F)
                            {
                                /* Transition: '<S162>:329' */
                                /* Transition: '<S162>:331' */
                                ERER_ac_B.Out_Modify_Factor = rtb_Switch1_i *
                                    ERER_ac_B.Modify_Factor;

                                /* Transition: '<S162>:333' */
                            }
                            else
                            {
                                if (rtb_Switch1_i <= 0.0F)
                                {
                                    /* Transition: '<S162>:328' */
                                    /* Transition: '<S162>:330' */
                                    ERER_ac_B.Modify_Factor = 0.0F;
                                    ERER_ac_B.Out_Modify_Factor = 0.0F;

                                    /* Transition: '<S162>:332' */
                                }
                            }
                        }
                    }
                }
                break;

              case ERER_ac_IN_Corsa:
                ERER_ac_Corsa(&Vector_de,
                              &rtb_TmpSignalConversionAtVeERER_l_EstRan,
                              &rtb_Vector_px);
                break;

              case ERER_ac_IN_Custom:
                ERER_ac_Custom(&Vector_de,
                               &rtb_TmpSignalConversionAtVeERER_l_EstRan,
                               &rtb_Switch1_i);
                break;

              case ERER_ac_IN_Eco_b:
                ERER_ac_Eco_p(&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                              &Vector_de,
                              &rtb_TmpSignalConversionAtVeERER_l_EstRan,
                              &rtb_Vector_px, &rtb_Switch1_i);
                break;

              case ERER_ac_IN_Init_b:
                /* During 'Init': '<S162>:155' */
                if (ERER_ac_DW.UnitDelay3_DSTATE)
                {
                    /* Transition: '<S162>:174' */
                    /* Transition: '<S162>:172' */
                    ERER_ac_B.Out_Modify_Factor = 0.0F;
                    ERER_ac_B.Modify_Factor = 0.0F;
                    ERER_ac_DW.VehDist_Init = ERER_ac_DW.UnitDelay_DSTATE_h;
                    ERER_ac_B.VehDist_Delta = 0.0F;
                }
                else
                {
                    /* Transition: '<S162>:176' */
                    /* Transition: '<S162>:188' */
                    ERER_ac_B.Out_Modify_Factor = 0.0F;
                    ERER_ac_B.Modify_Factor =
                        TmpSignalConversionAtVeERER_k_Modify_F_f;
                    ERER_ac_DW.VehDist_Init =
                        -TmpSignalConversionAtVeERER_l_VehDist__a;
                    ERER_ac_B.VehDist_Delta = 0.0F;
                }

                ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_InitDelay_p;

                /* Entry 'InitDelay': '<S162>:206' */
                ERER_ac_DW.DRM_delay = 0U;
                break;

              case ERER_ac_IN_InitDelay_p:
                /* During 'InitDelay': '<S162>:206' */
                tmp_0 = ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod;
                if ((ERER_ac_DW.DRM_delay >= KeERER_Cnt_DRM_InitDelay) &&
                        (((uint32)tmp_0) == CeHMIR_e_SportStat))
                {
                    /* Transition: '<S162>:215' */
                    /* Transition: '<S162>:208' */
                    /* Exit 'InitDelay': '<S162>:206' */
                    ERER_ac_DW.DRM_delay = 0U;
                    ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Sport_l;

                    /* Entry Internal 'Sport': '<S162>:242' */
                    /* Transition: '<S162>:249' */
                    ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) +
                            1.0F) > 0.0F)
                    {
                        /* Transition: '<S162>:251' */
                        /* Transition: '<S162>:253' */
                        ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                            ERER_ac_B.VehDist_Delta) + 1.0F) *
                            ERER_ac_B.Modify_Factor;

                        /* Transition: '<S162>:255' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S162>:250' */
                            /* Transition: '<S162>:252' */
                            ERER_ac_B.Modify_Factor = 0.0F;
                            ERER_ac_B.Out_Modify_Factor = 0.0F;

                            /* Transition: '<S162>:254' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_OffRoadStat))
                {
                    /* Transition: '<S162>:157' */
                    /* Transition: '<S162>:223' */
                    /* Exit 'InitDelay': '<S162>:206' */
                    ERER_ac_DW.DRM_delay = 0U;
                    ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_OffRoad;

                    /* Entry Internal 'OffRoad': '<S162>:189' */
                    /* Transition: '<S162>:196' */
                    ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) +
                            1.0F) > 0.0F)
                    {
                        /* Transition: '<S162>:198' */
                        /* Transition: '<S162>:200' */
                        ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                            ERER_ac_B.VehDist_Delta) + 1.0F) *
                            ERER_ac_B.Modify_Factor;

                        /* Transition: '<S162>:202' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S162>:197' */
                            /* Transition: '<S162>:199' */
                            ERER_ac_B.Modify_Factor = 0.0F;
                            ERER_ac_B.Out_Modify_Factor = 0.0F;

                            /* Transition: '<S162>:201' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay >= KeERER_Cnt_DRM_InitDelay) &&
                         ((((uint32)tmp_0) == CeHMIR_e_AutoStat) || (((sint32)
                            ERER_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt) ==
                           1)))
                {
                    /* Transition: '<S162>:209' */
                    /* Transition: '<S162>:226' */
                    /* Exit 'InitDelay': '<S162>:206' */
                    ERER_ac_DW.DRM_delay = 0U;
                    ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Auto;

                    /* Entry Internal 'Auto': '<S162>:158' */
                    /* Transition: '<S162>:165' */
                    ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) +
                            1.0F) > 0.0F)
                    {
                        /* Transition: '<S162>:167' */
                        /* Transition: '<S162>:169' */
                        ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                            ERER_ac_B.VehDist_Delta) + 1.0F) *
                            ERER_ac_B.Modify_Factor;

                        /* Transition: '<S162>:171' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S162>:166' */
                            /* Transition: '<S162>:168' */
                            ERER_ac_B.Modify_Factor = 0.0F;
                            ERER_ac_B.Out_Modify_Factor = 0.0F;

                            /* Transition: '<S162>:170' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_EcoStat))
                {
                    /* Transition: '<S162>:204' */
                    /* Transition: '<S162>:216' */
                    /* Exit 'InitDelay': '<S162>:206' */
                    ERER_ac_DW.DRM_delay = 0U;
                    ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Eco_b;

                    /* Entry Internal 'Eco': '<S162>:228' */
                    /* Transition: '<S162>:235' */
                    ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init;
                    if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta) +
                            1.0F) > 0.0F)
                    {
                        /* Transition: '<S162>:237' */
                        /* Transition: '<S162>:239' */
                        ERER_ac_B.Out_Modify_Factor = (((-KeERER_k_BlendFactor) *
                            ERER_ac_B.VehDist_Delta) + 1.0F) *
                            ERER_ac_B.Modify_Factor;

                        /* Transition: '<S162>:241' */
                    }
                    else
                    {
                        if ((((-KeERER_k_BlendFactor) * ERER_ac_B.VehDist_Delta)
                             + 1.0F) <= 0.0F)
                        {
                            /* Transition: '<S162>:236' */
                            /* Transition: '<S162>:238' */
                            ERER_ac_B.Modify_Factor = 0.0F;
                            ERER_ac_B.Out_Modify_Factor = 0.0F;

                            /* Transition: '<S162>:240' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_CorsaStat))
                {
                    /* Transition: '<S162>:343' */
                    /* Transition: '<S162>:346' */
                    /* Exit 'InitDelay': '<S162>:206' */
                    ERER_ac_DW.DRM_delay = 0U;
                    ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Corsa;

                    /* Entry Internal 'Corsa': '<S162>:306' */
                    /* Transition: '<S162>:313' */
                    ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init;
                    rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                     ERER_ac_B.VehDist_Delta) + 1.0F;
                    if (rtb_Switch1_i > 0.0F)
                    {
                        /* Transition: '<S162>:315' */
                        /* Transition: '<S162>:317' */
                        ERER_ac_B.Out_Modify_Factor = rtb_Switch1_i *
                            ERER_ac_B.Modify_Factor;

                        /* Transition: '<S162>:319' */
                    }
                    else
                    {
                        if (rtb_Switch1_i <= 0.0F)
                        {
                            /* Transition: '<S162>:314' */
                            /* Transition: '<S162>:316' */
                            ERER_ac_B.Modify_Factor = 0.0F;
                            ERER_ac_B.Out_Modify_Factor = 0.0F;

                            /* Transition: '<S162>:318' */
                        }
                    }
                }
                else if ((ERER_ac_DW.DRM_delay >= KeERER_Cnt_DRM_InitDelay) &&
                         (((uint32)tmp_0) == CeHMIR_e_CustomStat))
                {
                    /* Transition: '<S162>:345' */
                    /* Transition: '<S162>:347' */
                    /* Exit 'InitDelay': '<S162>:206' */
                    ERER_ac_DW.DRM_delay = 0U;
                    ERER_ac_DW.is_c7_ERER_ac = ERER_ac_IN_Custom;

                    /* Entry Internal 'Custom': '<S162>:320' */
                    /* Transition: '<S162>:327' */
                    ERER_ac_B.VehDist_Delta = ERER_ac_DW.UnitDelay_DSTATE_h -
                        ERER_ac_DW.VehDist_Init;
                    rtb_Switch1_i = ((-KeERER_k_BlendFactor) *
                                     ERER_ac_B.VehDist_Delta) + 1.0F;
                    if (rtb_Switch1_i > 0.0F)
                    {
                        /* Transition: '<S162>:329' */
                        /* Transition: '<S162>:331' */
                        ERER_ac_B.Out_Modify_Factor = rtb_Switch1_i *
                            ERER_ac_B.Modify_Factor;

                        /* Transition: '<S162>:333' */
                    }
                    else
                    {
                        if (rtb_Switch1_i <= 0.0F)
                        {
                            /* Transition: '<S162>:328' */
                            /* Transition: '<S162>:330' */
                            ERER_ac_B.Modify_Factor = 0.0F;
                            ERER_ac_B.Out_Modify_Factor = 0.0F;

                            /* Transition: '<S162>:332' */
                        }
                    }
                }
                else
                {
                    ERER_ac_DW.DRM_delay = (uint16)((sint32)(((sint32)
                        ERER_ac_DW.DRM_delay) + 1));
                }
                break;

              case ERER_ac_IN_OffRoad:
                ERER_ac_OffRoad(&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                                &Vector_de,
                                &rtb_TmpSignalConversionAtVeERER_l_EstRan,
                                &rtb_Vector_px, &rtb_Switch1_i);
                break;

              default:
                ERER_ac_Sport_l(&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B,
                                &Vector_de,
                                &rtb_TmpSignalConversionAtVeERER_l_EstRan);
                break;
            }
        }

        /* End of Chart: '<S79>/DRM_Stateflow_LP3' */

        /* If: '<S79>/If' incorporates:
         *  Constant: '<S164>/Constant'
         *  Constant: '<S165>/Constant'
         *  Constant: '<S166>/Constant'
         *  Logic: '<S79>/Logical'
         *  RelationalOperator: '<S79>/Comparison1'
         *  RelationalOperator: '<S79>/Comparison2'
         *  RelationalOperator: '<S79>/Comparison4'
         *  UnitDelay: '<S79>/Unit Delay1'
         */
        if (((((uint32)ERER_ac_DW.UnitDelay1_DSTATE_g) == CePMDR_e_PowerMode_Run)
             && (CePMDR_e_PowerMode_Crank != ((uint32)
                rtb_TmpSignalConversionAtVePMDR_e_PMM_Po))) && (((uint32)
                rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) !=
                CePMDR_e_PowerMode_Run))
        {
            /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem' incorporates:
             *  ActionPort: '<S171>/Action Port'
             */
            /* DataStoreWrite: '<S171>/Data Store Write1' */
            EeERER_l_VehDist_Delta = ERER_ac_B.VehDist_Delta;

            /* DataTypeConversion: '<S171>/Data Type Conversion' incorporates:
             *  DataStoreWrite: '<S171>/Data Store Write'
             *  SignalConversion generated from: '<S1>/VeHMIR_e_TerrainModeStat'
             */
            EeERER_e_DriveMode =
                ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod;

            /* DataStoreWrite: '<S171>/Data Store Write2' */
            EeERER_k_Modify_Factor = ERER_ac_B.Modify_Factor;

            /* DataTypeConversion: '<S171>/Data Type Conversion1' incorporates:
             *  DataStoreWrite: '<S171>/Data Store Write3'
             *  SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts'
             */
            EeERER_e_TurtleMode =
                ERER_ac_B.TmpSignalConversionAtVeDMDR_e_TurtleMdSt;

            /* End of Outputs for SubSystem: '<S79>/If Action Subsystem' */
        }

        /* End of If: '<S79>/If' */

        /* RelationalOperator: '<S79>/Comparison3' incorporates:
         *  Constant: '<S177>/Calib'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        VeERER_b_DRM_debug4_LP3 = (ERER_ac_DW.UnitDelay_DSTATE_o >=
            KeERER_l_HomologatedRangeThresh);

        /* Outputs for Atomic SubSystem: '<S79>/Limiter1' */
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S175>/Calib'
         *  RelationalOperator: '<S186>/Relational Operator'
         */
        if (KeERER_k_DRM_Modify_Factor_Max < ERER_ac_B.Out_Modify_Factor)
        {
            /* Switch: '<S79>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                KeERER_k_DRM_Modify_Factor_Max;
        }
        else
        {
            /* Switch: '<S79>/Switch3' */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_B.Out_Modify_Factor;
        }

        /* End of Switch: '<S186>/Switch1' */

        /* Switch: '<S186>/Switch' incorporates:
         *  Constant: '<S176>/Calib'
         *  RelationalOperator: '<S186>/Relational Operator1'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f >
                KeERER_k_DRM_Modify_Factor_Min)
        {
            /* Switch: '<S186>/Switch' */
            VeERER_k_DRM_Modify_Factor_LP3 =
                TmpSignalConversionAtVeERER_k_Modify_F_f;
        }
        else
        {
            /* Switch: '<S186>/Switch' */
            VeERER_k_DRM_Modify_Factor_LP3 = KeERER_k_DRM_Modify_Factor_Min;
        }

        /* End of Switch: '<S186>/Switch' */
        /* End of Outputs for SubSystem: '<S79>/Limiter1' */

        /* Product: '<S79>/Product4' incorporates:
         *  Constant: '<S79>/Constant Value3'
         *  Sum: '<S79>/Sum2'
         *  UnitDelay: '<S9>/Unit Delay'
         */
        TmpSignalConversionAtVeERER_k_Modify_F_f =
            (VeERER_k_DRM_Modify_Factor_LP3 + 1.0F) *
            ERER_ac_DW.UnitDelay_DSTATE_o;

        /* Outputs for Atomic SubSystem: '<S79>/Hysteresis' */
        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S180>/Calib'
         *  RelationalOperator: '<S170>/Greater  Than'
         */
        if (TmpSignalConversionAtVeERER_k_Modify_F_f > KeERER_l_TurtleExitThresh)
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S170>/Constant Value'
             */
            VeERER_b_DRM_debug5_LP3 = true;
        }
        else
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S179>/Calib'
             *  RelationalOperator: '<S170>/Greater  Than1'
             *  UnitDelay: '<S170>/Unit Delay'
             */
            VeERER_b_DRM_debug5_LP3 = ((TmpSignalConversionAtVeERER_k_Modify_F_f
                >= KeERER_l_TurtleEntryThresh) &&
                (ERER_ac_DW.UnitDelay_DSTATE_ke));
        }

        /* End of Switch: '<S170>/Switch1' */

        /* Update for UnitDelay: '<S170>/Unit Delay' */
        ERER_ac_DW.UnitDelay_DSTATE_ke = VeERER_b_DRM_debug5_LP3;

        /* End of Outputs for SubSystem: '<S79>/Hysteresis' */

        /* RelationalOperator: '<S79>/Comparison5' incorporates:
         *  RelationalOperator: '<S79>/Comparison7'
         *  UnitDelay: '<S79>/Unit Delay2'
         */
        UnitDelay4_DSTATE_tmp = ERER_ac_DW.UnitDelay2_DSTATE_j;

        /* Logic: '<S79>/Logical1' incorporates:
         *  Constant: '<S167>/Constant'
         *  Constant: '<S168>/Constant'
         *  Constant: '<S169>/Constant'
         *  RelationalOperator: '<S79>/Comparison5'
         *  RelationalOperator: '<S79>/Comparison6'
         *  RelationalOperator: '<S79>/Comparison7'
         *  UnitDelay: '<S79>/Unit Delay3'
         */
        ERER_ac_DW.UnitDelay3_DSTATE = (((CePMDR_e_PowerMode_Run != ((uint32)
            UnitDelay4_DSTATE_tmp)) && (((uint32)UnitDelay4_DSTATE_tmp) !=
            CePMDR_e_PowerMode_Crank)) && (((uint32)
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) == CePMDR_e_PowerMode_Run));

        /* Switch: '<S79>/Switch3' incorporates:
         *  Constant: '<S173>/Calib'
         */
        if (KeERER_b_DRMEnable)
        {
            /* Switch: '<S79>/Switch1' incorporates:
             *  Switch: '<S79>/Switch2'
             */
            if (VeERER_b_DRM_debug4_LP3)
            {
                /* Switch: '<S79>/Switch1' incorporates:
                 *  UnitDelay: '<S9>/Unit Delay'
                 */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    ERER_ac_DW.UnitDelay_DSTATE_o;
            }
            else
            {
                if (!VeERER_b_DRM_debug5_LP3)
                {
                    /* Switch: '<S79>/Switch1' incorporates:
                     *  Switch: '<S79>/Switch2'
                     *  UnitDelay: '<S9>/Unit Delay'
                     */
                    TmpSignalConversionAtVeERER_k_Modify_F_f =
                        ERER_ac_DW.UnitDelay_DSTATE_o;
                }
            }

            /* End of Switch: '<S79>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S79>/Limiter2' */
            /* Switch: '<S187>/Switch1' incorporates:
             *  Constant: '<S178>/Calib'
             *  RelationalOperator: '<S187>/Relational Operator'
             */
            if (KeERER_l_MaxHomologatedRange <
                    TmpSignalConversionAtVeERER_k_Modify_F_f)
            {
                /* Switch: '<S187>/Switch1' */
                TmpSignalConversionAtVeERER_k_Modify_F_f =
                    KeERER_l_MaxHomologatedRange;
            }

            /* End of Switch: '<S187>/Switch1' */

            /* Switch: '<S187>/Switch' incorporates:
             *  Constant: '<S79>/Constant Value2'
             *  RelationalOperator: '<S187>/Relational Operator1'
             */
            if (TmpSignalConversionAtVeERER_k_Modify_F_f <= 0.0F)
            {
                /* Switch: '<S79>/Switch3' */
                TmpSignalConversionAtVeERER_k_Modify_F_f = 0.0F;
            }

            /* End of Switch: '<S187>/Switch' */
            /* End of Outputs for SubSystem: '<S79>/Limiter2' */
        }
        else
        {
            /* Switch: '<S79>/Switch3' incorporates:
             *  UnitDelay: '<S9>/Unit Delay'
             */
            TmpSignalConversionAtVeERER_k_Modify_F_f =
                ERER_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S79>/Switch3' */

        /* Merge: '<S8>/Merge' incorporates:
         *  Rounding: '<S79>/Rounding2'
         */
        ERER_ac_B.Merge = roundf(TmpSignalConversionAtVeERER_k_Modify_F_f);

        /* Update for UnitDelay: '<S79>/Unit Delay1' incorporates:
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_g =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* Update for UnitDelay: '<S79>/Unit Delay5' incorporates:
         *  SignalConversion generated from: '<S1>/VeHMIR_e_TerrainModeStat'
         */
        ERER_ac_DW.UnitDelay5_DSTATE =
            ERER_ac_B.TmpSignalConversionAtVeHMIR_e_TerrainMod;

        /* Update for UnitDelay: '<S79>/Unit Delay2' incorporates:
         *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
         */
        ERER_ac_DW.UnitDelay2_DSTATE_j =
            rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

        /* End of Outputs for SubSystem: '<S8>/Type 4' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of If: '<S8>/If1' */

    /* Outputs for Atomic SubSystem: '<S75>/Protected Division' */
    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S80>/Constant Value'
     *  Constant: '<S80>/Constant Value1'
     *  Constant: '<S80>/Constant Value2'
     *  Constant: '<S80>/Constant Value3'
     *  Logic: '<S80>/AND'
     *  RelationalOperator: '<S80>/Greater Than or Equal '
     *  RelationalOperator: '<S80>/Greater Than or Equal 1'
     *  RelationalOperator: '<S80>/Not Equal'
     *  RelationalOperator: '<S80>/Not Equal1'
     *  Switch: '<S80>/Switch2'
     *  Switch: '<S80>/Switch3'
     */
    if ((ERER_ac_B.Merge != 0.0F) && (rtb_Add != 0.0F))
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Product: '<S80>/Division'
         */
        TmpSignalConversionAtVeERER_l_VehDist__a = ERER_ac_B.Merge / rtb_Add;
    }
    else if (ERER_ac_B.Merge > 0.0F)
    {
        /* Switch: '<S80>/Switch2' incorporates:
         *  Constant: '<S80>/MAXFLOAT'
         *  Switch: '<S80>/Switch1'
         */
        TmpSignalConversionAtVeERER_l_VehDist__a = 3.402823466E+38F;
    }
    else if (ERER_ac_B.Merge < 0.0F)
    {
        /* Switch: '<S80>/Switch3' incorporates:
         *  Constant: '<S80>/MINFLOAT'
         *  Switch: '<S80>/Switch1'
         *  Switch: '<S80>/Switch2'
         */
        TmpSignalConversionAtVeERER_l_VehDist__a = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S80>/Switch1' incorporates:
         *  Constant: '<S80>/Constant Value4'
         *  Switch: '<S80>/Switch2'
         *  Switch: '<S80>/Switch3'
         */
        TmpSignalConversionAtVeERER_l_VehDist__a = 0.0F;
    }

    /* End of Switch: '<S80>/Switch1' */
    /* End of Outputs for SubSystem: '<S75>/Protected Division' */

    /* Rounding: '<S75>/Round' incorporates:
     *  Product: '<S75>/Product'
     */
    TmpSignalConversionAtVeERER_k_Modify_F_f = roundf(VeERER_E_WhRemaining *
        TmpSignalConversionAtVeERER_l_VehDist__a);

    /* Rounding: '<S75>/Round1' incorporates:
     *  Product: '<S75>/Product1'
     */
    TmpSignalConversionAtVeERER_l_VehDist__a = roundf
        (TmpSignalConversionAtVeERER_l_VehDist__a *
         rtb_TmpSignalConversionAtVeENGR_Pct_Fuel);

    /* Outputs for Atomic SubSystem: '<S197>/Protected Division1' */
    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S306>/Constant Value'
     *  Constant: '<S306>/Constant Value1'
     *  Constant: '<S306>/Constant Value2'
     *  Constant: '<S306>/Constant Value3'
     *  Logic: '<S306>/AND'
     *  RelationalOperator: '<S306>/Greater Than or Equal '
     *  RelationalOperator: '<S306>/Greater Than or Equal 1'
     *  RelationalOperator: '<S306>/Not Equal'
     *  RelationalOperator: '<S306>/Not Equal1'
     *  Switch: '<S306>/Switch2'
     *  Switch: '<S306>/Switch3'
     */
    if ((VeERER_E_SchChrgWh != 0.0F) && (VeERER_F_EEPROM_WhperKM_Write != 0.0F))
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Product: '<S306>/Division'
         */
        rtb_TmpSignalConversionAtVeENGR_Pct_Fuel = VeERER_E_SchChrgWh /
            VeERER_F_EEPROM_WhperKM_Write;
    }
    else if (VeERER_E_SchChrgWh > 0.0F)
    {
        /* Switch: '<S306>/Switch2' incorporates:
         *  Constant: '<S306>/MAXFLOAT'
         *  Switch: '<S306>/Switch1'
         */
        rtb_TmpSignalConversionAtVeENGR_Pct_Fuel = 3.402823466E+38F;
    }
    else if (VeERER_E_SchChrgWh < 0.0F)
    {
        /* Switch: '<S306>/Switch3' incorporates:
         *  Constant: '<S306>/MINFLOAT'
         *  Switch: '<S306>/Switch1'
         *  Switch: '<S306>/Switch2'
         */
        rtb_TmpSignalConversionAtVeENGR_Pct_Fuel = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S306>/Constant Value4'
         *  Switch: '<S306>/Switch2'
         *  Switch: '<S306>/Switch3'
         */
        rtb_TmpSignalConversionAtVeENGR_Pct_Fuel = 0.0F;
    }

    /* End of Switch: '<S306>/Switch1' */
    /* End of Outputs for SubSystem: '<S197>/Protected Division1' */

    /* Sum: '<S297>/Subtraction1' incorporates:
     *  Constant: '<S300>/Calib'
     *  Product: '<S297>/Multiplication'
     *  Sum: '<S297>/Subtraction'
     *  UnitDelay: '<S197>/Unit Delay1'
     */
    ERER_ac_DW.UnitDelay1_DSTATE_j += (rtb_TmpSignalConversionAtVeENGR_Pct_Fuel
        - ERER_ac_DW.UnitDelay1_DSTATE_j) * KeERER_k_SchdChrgRangeEL;

    /* Lookup_n-D: '<S302>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_Pct_Est_SOC'
     */
    rtb_Sum2 = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeSCPR_Pct_Est_,
        ((const float32 *)&(KxERER_l_MaxRange[0])), ((const float32 *)
        &(KtERER_l_MaxRange[0])), 3U);

    /* Lookup_n-D: '<S303>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_Pct_Est_SOC'
     */
    rtb_TmpSignalConversionAtVeSCPR_Pct_Est_ = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeSCPR_Pct_Est_, ((const float32 *)
          &(KxERER_l_MinRange[0])), ((const float32 *)&(KtERER_l_MinRange[0])),
         3U);

    /* Outputs for Atomic SubSystem: '<S197>/Limiter1' */
    /* Switch: '<S305>/Switch1' incorporates:
     *  RelationalOperator: '<S305>/Relational Operator'
     *  UnitDelay: '<S197>/Unit Delay1'
     */
    if (rtb_Sum2 >= ERER_ac_DW.UnitDelay1_DSTATE_j)
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = ERER_ac_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S305>/Switch1' */
    /* End of Outputs for SubSystem: '<S197>/Limiter1' */

    /* Switch: '<S197>/Switch3' incorporates:
     *  Constant: '<S298>/Calib'
     *  RelationalOperator: '<S305>/Relational Operator1'
     *  Switch: '<S305>/Switch'
     */
    if (KeERER_b_OutEstRangeinMiles)
    {
        /* Outputs for Atomic SubSystem: '<S197>/Limiter1' */
        /* Switch: '<S305>/Switch' incorporates:
         *  RelationalOperator: '<S305>/Relational Operator1'
         */
        if (rtb_Sum2 > rtb_TmpSignalConversionAtVeSCPR_Pct_Est_)
        {
            rtb_TmpSignalConversionAtVeSCPR_Pct_Est_ = rtb_Sum2;
        }

        /* End of Outputs for SubSystem: '<S197>/Limiter1' */

        /* Switch: '<S197>/Switch3' incorporates:
         *  Constant: '<S197>/Constant Value2'
         *  Product: '<S197>/Product'
         */
        rtb_TmpSignalConversionAtVeSCPR_Pct_Est_ *= 0.621371F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S197>/Limiter1' */
        if (rtb_Sum2 > rtb_TmpSignalConversionAtVeSCPR_Pct_Est_)
        {
            /* Switch: '<S305>/Switch' incorporates:
             *  Switch: '<S197>/Switch3'
             */
            rtb_TmpSignalConversionAtVeSCPR_Pct_Est_ = rtb_Sum2;
        }

        /* End of Outputs for SubSystem: '<S197>/Limiter1' */
    }

    /* End of Switch: '<S197>/Switch3' */

    /* Switch: '<S197>/Switch4' incorporates:
     *  Constant: '<S299>/Calib'
     */
    if (KeERER_b_RangeRounding)
    {
        /* Switch: '<S197>/Switch4' incorporates:
         *  Rounding: '<S197>/Rounding2'
         */
        rtb_TmpSignalConversionAtVeSCPR_Pct_Est_ = roundf
            (rtb_TmpSignalConversionAtVeSCPR_Pct_Est_);
    }

    /* End of Switch: '<S197>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S197>/Limiter' */
    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S301>/Calib'
     *  RelationalOperator: '<S304>/Relational Operator'
     */
    if (KeERER_l_max_range < rtb_TmpSignalConversionAtVeSCPR_Pct_Est_)
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = KeERER_l_max_range;
    }
    else
    {
        /* Switch: '<S304>/Switch1' */
        rtb_Sum2 = rtb_TmpSignalConversionAtVeSCPR_Pct_Est_;
    }

    /* End of Switch: '<S304>/Switch1' */
    /* End of Outputs for SubSystem: '<S197>/Limiter' */

    /* If: '<S9>/If1' incorporates:
     *  Constant: '<S192>/Calib'
     *  Inport: '<Root>/VeIDCR_I_APM_LV_Current'
     *  Inport: '<Root>/VeIDCR_U_APM_LV_Voltage'
     *  Inport: '<Root>/VePLTR_b_AUD_LVL_FA'
     *  Inport: '<Root>/VePLTR_b_RearFogLightSts'
     *  Inport: '<Root>/VeTAIR_b_RearCabinFanStsFA'
     *  Inport: '<Root>/VeTRIR_b_FL_HS_Fail'
     *  Inport: '<Root>/VeTRIR_b_FL_VS_Fail'
     *  Inport: '<Root>/VeTRIR_b_FR_HS_Fail'
     *  Inport: '<Root>/VeTRIR_b_FR_VS_Fail'
     *  Inport: '<Root>/VeTRIR_b_HSW_Fail'
     *  Inport: '<Root>/VeTRIR_b_RL_HS_Fail'
     *  Inport: '<Root>/VeTRIR_b_RL_VS_Fail'
     *  Inport: '<Root>/VeTRIR_b_RR_HS_Fail'
     *  Inport: '<Root>/VeTRIR_b_RR_VS_Fail'
     *  Inport: '<Root>/VeTRIR_e_FL_HS_Sts'
     *  Inport: '<Root>/VeTRIR_e_FL_VS_Sts'
     *  Inport: '<Root>/VeTRIR_e_FR_HS_Sts'
     *  Inport: '<Root>/VeTRIR_e_FR_VS_Sts'
     *  Inport: '<Root>/VeTRIR_e_RL_HS_Sts'
     *  Inport: '<Root>/VeTRIR_e_RL_VS_Sts'
     *  Inport: '<Root>/VeTRIR_e_RR_HS_Sts'
     *  Inport: '<Root>/VeTRIR_e_RR_VS_Sts'
     */
    if (KeERER_b_AllowRangeImpact)
    {
        (void)Rte_Read_VeTAIR_b_RearCabinFanStsFA_Value(&Merge_1_d);

        /* Outputs for IfAction SubSystem: '<S9>/Non Prop Power' incorporates:
         *  ActionPort: '<S193>/Action Port'
         */
        /* Switch: '<S278>/Switch11' incorporates:
         *  Inport: '<Root>/VeTAIR_b_RearCabinFanStsFA'
         */
        if (Merge_1_d)
        {
            /* Sum: '<S278>/Sum' incorporates:
             *  Constant: '<S278>/Constant Value27'
             */
            rtb_Sum_g = 2;
        }
        else
        {
            /* Sum: '<S278>/Sum' incorporates:
             *  Constant: '<S278>/Constant Value28'
             */
            rtb_Sum_g = 0;
        }

        /* End of Switch: '<S278>/Switch11' */

        /* SignalConversion generated from: '<S1>/VeERER_l_AC_Fan_Range' incorporates:
         *  Outport: '<Root>/VeERER_l_AC_Fan_Range'
         *  SignalConversion generated from: '<S193>/VeERER_l_AC_Fan_Range'
         */
        (void)Rte_Write_VeERER_l_AC_Fan_Range_Value((float32)rtb_Sum_g);

        /* End of Outputs for SubSystem: '<S9>/Non Prop Power' */
        (void)Rte_Read_VePLTR_b_AUD_LVL_FA_Value(&Merge_4_n);

        /* Outputs for IfAction SubSystem: '<S9>/Non Prop Power' incorporates:
         *  ActionPort: '<S193>/Action Port'
         */
        /* Switch: '<S280>/Switch12' incorporates:
         *  Inport: '<Root>/VePLTR_b_AUD_LVL_FA'
         *  Inport: '<Root>/VePRXR_b_CanNodeAMP'
         */
        if (Merge_4_n)
        {
            /* Switch: '<S280>/Switch12' incorporates:
             *  Constant: '<S280>/Constant Value22'
             */
            rtb_Switch12 = 0;
        }
        else
        {
            (void)Rte_Read_VePRXR_b_CanNodeAMP_Value(&Merge_6_p);

            /* Switch: '<S280>/Switch15' incorporates:
             *  Inport: '<Root>/VePRXR_b_CanNodeAMP'
             */
            if (Merge_6_p)
            {
                /* Switch: '<S280>/Switch12' incorporates:
                 *  Constant: '<S280>/Constant Value25'
                 */
                rtb_Switch12 = 4;
            }
            else
            {
                /* Switch: '<S280>/Switch12' incorporates:
                 *  Constant: '<S280>/Constant Value24'
                 */
                rtb_Switch12 = 2;
            }

            /* End of Switch: '<S280>/Switch15' */
        }

        /* End of Switch: '<S280>/Switch12' */
        /* End of Outputs for SubSystem: '<S9>/Non Prop Power' */
        (void)Rte_Read_VeIDCR_I_APM_LV_Current_Value(&tmpRead_p);
        (void)Rte_Read_VeIDCR_U_APM_LV_Voltage_Value(&tmpRead_o);
        (void)Rte_Read_VePLTR_b_RearFogLightSts_Value(&Merge_8_d);
        (void)Rte_Read_VeTRIR_b_RR_VS_Fail_Value(&Merge_10_n);
        (void)Rte_Read_VeTRIR_e_RR_VS_Sts_Value(&tmpRead_n);
        (void)Rte_Read_VeTRIR_b_RL_VS_Fail_Value(&Merge_12_g);
        (void)Rte_Read_VeTRIR_e_RL_VS_Sts_Value(&tmpRead_m);
        (void)Rte_Read_VeTRIR_b_FR_VS_Fail_Value(&Merge_14_c);
        (void)Rte_Read_VeTRIR_e_FR_VS_Sts_Value(&tmpRead_l);
        (void)Rte_Read_VeTRIR_b_FL_VS_Fail_Value(&tmpRead_k);
        (void)Rte_Read_VeTRIR_e_FL_VS_Sts_Value(&tmpRead_j);
        (void)Rte_Read_VeTRIR_b_RR_HS_Fail_Value(&tmpRead_i);
        (void)Rte_Read_VeTRIR_e_RR_HS_Sts_Value(&tmpRead_h);
        (void)Rte_Read_VeTRIR_b_RL_HS_Fail_Value(&tmpRead_g);
        (void)Rte_Read_VeTRIR_e_RL_HS_Sts_Value(&tmpRead_f);
        (void)Rte_Read_VeTRIR_b_FR_HS_Fail_Value(&tmpRead_e);
        (void)Rte_Read_VeTRIR_e_FR_HS_Sts_Value(&tmpRead_d);
        (void)Rte_Read_VeTRIR_b_FL_HS_Fail_Value(&tmpRead_c);
        (void)Rte_Read_VeTRIR_e_FL_HS_Sts_Value(&tmpRead_b);
        (void)Rte_Read_VeTRIR_b_HSW_Fail_Value(&tmpRead_a);

        /* Outputs for IfAction SubSystem: '<S9>/Non Prop Power' incorporates:
         *  ActionPort: '<S193>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeERER_l_Audio_Range' incorporates:
         *  Inport: '<Root>/VeIDCR_I_APM_LV_Current'
         *  Inport: '<Root>/VeIDCR_U_APM_LV_Voltage'
         *  Inport: '<Root>/VePLTR_b_RearFogLightSts'
         *  Inport: '<Root>/VeTRIR_b_FL_HS_Fail'
         *  Inport: '<Root>/VeTRIR_b_FL_VS_Fail'
         *  Inport: '<Root>/VeTRIR_b_FR_HS_Fail'
         *  Inport: '<Root>/VeTRIR_b_FR_VS_Fail'
         *  Inport: '<Root>/VeTRIR_b_HSW_Fail'
         *  Inport: '<Root>/VeTRIR_b_RL_HS_Fail'
         *  Inport: '<Root>/VeTRIR_b_RL_VS_Fail'
         *  Inport: '<Root>/VeTRIR_b_RR_HS_Fail'
         *  Inport: '<Root>/VeTRIR_b_RR_VS_Fail'
         *  Inport: '<Root>/VeTRIR_e_FL_HS_Sts'
         *  Inport: '<Root>/VeTRIR_e_FL_VS_Sts'
         *  Inport: '<Root>/VeTRIR_e_FR_HS_Sts'
         *  Inport: '<Root>/VeTRIR_e_FR_VS_Sts'
         *  Inport: '<Root>/VeTRIR_e_RL_HS_Sts'
         *  Inport: '<Root>/VeTRIR_e_RL_VS_Sts'
         *  Inport: '<Root>/VeTRIR_e_RR_HS_Sts'
         *  Inport: '<Root>/VeTRIR_e_RR_VS_Sts'
         *  Outport: '<Root>/VeERER_l_Audio_Range'
         *  SignalConversion generated from: '<S193>/VeERER_l_Audio_Range'
         */
        (void)Rte_Write_VeERER_l_Audio_Range_Value((float32)rtb_Switch12);

        /* Switch: '<S279>/Switch9' incorporates:
         *  Constant: '<S293>/Constant'
         *  Constant: '<S294>/Constant'
         *  Logic: '<S279>/Logical11'
         *  RelationalOperator: '<S279>/Relational Operator17'
         *  RelationalOperator: '<S279>/Relational Operator23'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeTAIR_e_RearDe) ==
                CeTAIR_e_RearDefrostSts_OFF) || (((uint32)
                rtb_TmpSignalConversionAtVeTAIR_e_RearDe) ==
                CeTAIR_e_RearDefrostSts_SNA))
        {
            /* Switch: '<S279>/Switch9' incorporates:
             *  Constant: '<S279>/Constant Value19'
             */
            rtb_Switch9 = 0;
        }
        else
        {
            /* Switch: '<S279>/Switch9' incorporates:
             *  Constant: '<S279>/Constant Value20'
             */
            rtb_Switch9 = 2;
        }

        /* End of Switch: '<S279>/Switch9' */

        /* SignalConversion generated from: '<S1>/VeERER_l_Defrost_Range' incorporates:
         *  Outport: '<Root>/VeERER_l_Defrost_Range'
         *  SignalConversion generated from: '<S193>/VeERER_l_Defrost_Range'
         */
        (void)Rte_Write_VeERER_l_Defrost_Range_Value((float32)rtb_Switch9);

        /* Switch: '<S281>/Switch10' incorporates:
         *  Constant: '<S281>/Constant Value27'
         *  Constant: '<S281>/Constant Value28'
         */
        if (Merge_8_d)
        {
            rtb_Sum_l = 2;
        }
        else
        {
            rtb_Sum_l = 0;
        }

        /* End of Switch: '<S281>/Switch10' */

        /* Switch: '<S281>/Switch11' incorporates:
         *  Constant: '<S281>/Constant Value29'
         *  Constant: '<S281>/Constant Value30'
         *  Constant: '<S295>/Constant'
         *  Constant: '<S296>/Constant'
         *  Logic: '<S281>/Logical3'
         *  RelationalOperator: '<S281>/Relational Operator21'
         *  RelationalOperator: '<S281>/Relational Operator22'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVePLTR_e_HiBmLv) ==
                CePLTR_e_HiBmLvr_Stat_Idle) || (((uint32)
                rtb_TmpSignalConversionAtVePLTR_e_HiBmLv) ==
                CePLTR_e_HiBmLvr_Stat_SNA))
        {
            rtb_Sum1_i2 = 0;
        }
        else
        {
            rtb_Sum1_i2 = 2;
        }

        /* End of Switch: '<S281>/Switch11' */

        /* Sum: '<S281>/Sum1' */
        rtb_Sum1_i2 += rtb_Sum_l;

        /* SignalConversion generated from: '<S1>/VeERER_l_Lights_Range' incorporates:
         *  Outport: '<Root>/VeERER_l_Lights_Range'
         *  SignalConversion generated from: '<S193>/VeERER_l_Lights_Range'
         */
        (void)Rte_Write_VeERER_l_Lights_Range_Value((float32)rtb_Sum1_i2);

        /* Switch: '<S282>/Switch13' incorporates:
         *  Constant: '<S282>/Constant Value23'
         *  Constant: '<S282>/Constant Value31'
         *  Constant: '<S282>/Constant Value32'
         *  RelationalOperator: '<S282>/Relational Operator18'
         */
        if (tmpRead_p == 314.898193F)
        {
            rtb_Sum_l = 0;
        }
        else
        {
            rtb_Sum_l = 2;
        }

        /* End of Switch: '<S282>/Switch13' */

        /* Switch: '<S282>/Switch14' incorporates:
         *  Constant: '<S282>/Constant Value33'
         *  Constant: '<S282>/Constant Value35'
         *  Constant: '<S282>/Constant Value36'
         *  RelationalOperator: '<S282>/Relational Operator19'
         */
        if (tmpRead_o == 37.4314423F)
        {
            rtb_Sum_pg = 0;
        }
        else
        {
            rtb_Sum_pg = 2;
        }

        /* End of Switch: '<S282>/Switch14' */

        /* Sum: '<S282>/Sum2' */
        rtb_Sum2_p = rtb_Sum_l + rtb_Sum_pg;

        /* SignalConversion generated from: '<S1>/VeERER_l_Other_Range' incorporates:
         *  Outport: '<Root>/VeERER_l_Other_Range'
         *  SignalConversion generated from: '<S193>/VeERER_l_Other_Range'
         */
        (void)Rte_Write_VeERER_l_Other_Range_Value((float32)rtb_Sum2_p);

        /* Switch: '<S277>/Switch' incorporates:
         *  Constant: '<S277>/Constant Value1'
         *  Constant: '<S277>/Constant Value3'
         *  Constant: '<S283>/Constant'
         *  Constant: '<S284>/Constant'
         *  Logic: '<S277>/Logical1'
         *  Logic: '<S277>/Logical13'
         *  RelationalOperator: '<S277>/Relational Operator'
         *  RelationalOperator: '<S277>/Relational Operator20'
         */
        if (((((uint32)rtb_TmpSignalConversionAtVeTRIR_e_HSW_St) ==
                CeTRIR_e_ModeOFF) || (((uint32)
                rtb_TmpSignalConversionAtVeTRIR_e_HSW_St) == CeTRIR_e_ModeSNA)) ||
            tmpRead_a)
        {
            rtb_TmpSignalConversionAtVeTRIR = 0;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTRIR = 2;
        }

        /* End of Switch: '<S277>/Switch' */

        /* Switch: '<S277>/Switch1' incorporates:
         *  Constant: '<S277>/Constant Value2'
         *  Constant: '<S277>/Constant Value4'
         *  Constant: '<S286>/Constant'
         *  Inport: '<Root>/VeTRIR_e_FL_HS_Sts'
         *  Logic: '<S277>/Logical2'
         *  RelationalOperator: '<S277>/Relational Operator2'
         */
        if ((((uint32)tmpRead_b) == CeTRIR_e_ModeOFF) || tmpRead_c)
        {
            rtb_Sum_l = 0;
        }
        else
        {
            rtb_Sum_l = 2;
        }

        /* End of Switch: '<S277>/Switch1' */

        /* Switch: '<S277>/Switch2' incorporates:
         *  Constant: '<S277>/Constant Value5'
         *  Constant: '<S277>/Constant Value6'
         *  Constant: '<S285>/Constant'
         *  Inport: '<Root>/VeTRIR_e_FR_HS_Sts'
         *  Logic: '<S277>/Logical4'
         *  RelationalOperator: '<S277>/Relational Operator1'
         */
        if ((((uint32)tmpRead_d) == CeTRIR_e_ModeOFF) || tmpRead_e)
        {
            rtb_Sum_pg = 0;
        }
        else
        {
            rtb_Sum_pg = 2;
        }

        /* End of Switch: '<S277>/Switch2' */

        /* Switch: '<S277>/Switch3' incorporates:
         *  Constant: '<S277>/Constant Value7'
         *  Constant: '<S277>/Constant Value8'
         *  Constant: '<S287>/Constant'
         *  Inport: '<Root>/VeTRIR_e_RL_HS_Sts'
         *  Logic: '<S277>/Logical5'
         *  RelationalOperator: '<S277>/Relational Operator3'
         */
        if ((((uint32)tmpRead_f) == CeTRIR_e_ModeOFF) || tmpRead_g)
        {
            tmpRead_q = 0;
        }
        else
        {
            tmpRead_q = 2;
        }

        /* End of Switch: '<S277>/Switch3' */

        /* Switch: '<S277>/Switch4' incorporates:
         *  Constant: '<S277>/Constant Value10'
         *  Constant: '<S277>/Constant Value9'
         *  Constant: '<S288>/Constant'
         *  Inport: '<Root>/VeTRIR_e_RR_HS_Sts'
         *  Logic: '<S277>/Logical6'
         *  RelationalOperator: '<S277>/Relational Operator4'
         */
        if ((((uint32)tmpRead_h) == CeTRIR_e_ModeOFF) || tmpRead_i)
        {
            tmpRead_r = 0;
        }
        else
        {
            tmpRead_r = 2;
        }

        /* End of Switch: '<S277>/Switch4' */

        /* Switch: '<S277>/Switch5' incorporates:
         *  Constant: '<S277>/Constant Value11'
         *  Constant: '<S277>/Constant Value12'
         *  Constant: '<S289>/Constant'
         *  Inport: '<Root>/VeTRIR_e_FL_VS_Sts'
         *  Logic: '<S277>/Logical7'
         *  RelationalOperator: '<S277>/Relational Operator5'
         */
        if ((((uint32)tmpRead_j) == CeTRIR_e_ModeOFF) || tmpRead_k)
        {
            tmpRead_s = 0;
        }
        else
        {
            tmpRead_s = 2;
        }

        /* End of Switch: '<S277>/Switch5' */

        /* Switch: '<S277>/Switch6' incorporates:
         *  Constant: '<S277>/Constant Value13'
         *  Constant: '<S277>/Constant Value14'
         *  Constant: '<S290>/Constant'
         *  Inport: '<Root>/VeTRIR_e_FR_VS_Sts'
         *  Logic: '<S277>/Logical8'
         *  RelationalOperator: '<S277>/Relational Operator6'
         */
        if ((((uint32)tmpRead_l) == CeTRIR_e_ModeOFF) || Merge_14_c)
        {
            tmpRead_t = 0;
        }
        else
        {
            tmpRead_t = 2;
        }

        /* End of Switch: '<S277>/Switch6' */

        /* Switch: '<S277>/Switch7' incorporates:
         *  Constant: '<S277>/Constant Value15'
         *  Constant: '<S277>/Constant Value16'
         *  Constant: '<S291>/Constant'
         *  Inport: '<Root>/VeTRIR_e_RL_VS_Sts'
         *  Logic: '<S277>/Logical9'
         *  RelationalOperator: '<S277>/Relational Operator7'
         */
        if ((((uint32)tmpRead_m) == CeTRIR_e_ModeOFF) || Merge_12_g)
        {
            tmpRead_u = 0;
        }
        else
        {
            tmpRead_u = 2;
        }

        /* End of Switch: '<S277>/Switch7' */

        /* Switch: '<S277>/Switch8' incorporates:
         *  Constant: '<S277>/Constant Value17'
         *  Constant: '<S277>/Constant Value18'
         *  Constant: '<S292>/Constant'
         *  Inport: '<Root>/VeTRIR_e_RR_VS_Sts'
         *  Logic: '<S277>/Logical10'
         *  RelationalOperator: '<S277>/Relational Operator8'
         */
        if ((((uint32)tmpRead_n) == CeTRIR_e_ModeOFF) || Merge_10_n)
        {
            tmpRead_v = 0;
        }
        else
        {
            tmpRead_v = 2;
        }

        /* End of Switch: '<S277>/Switch8' */

        /* Sum: '<S277>/Sum' */
        rtb_Sum_l = (((((((rtb_TmpSignalConversionAtVeTRIR + rtb_Sum_l) +
                          rtb_Sum_pg) + tmpRead_q) + tmpRead_r) + tmpRead_s) +
                      tmpRead_t) + tmpRead_u) + tmpRead_v;

        /* SignalConversion generated from: '<S1>/VeERER_l_Seatswhl_Range' incorporates:
         *  Outport: '<Root>/VeERER_l_Seatswhl_Range'
         *  SignalConversion generated from: '<S193>/VeERER_l_Seatswhl_Range'
         */
        (void)Rte_Write_VeERER_l_Seatswhl_Range_Value((float32)rtb_Sum_l);

        /* Sum: '<S193>/Sum' */
        rtb_Sum_pg = ((((rtb_Sum_g + rtb_Switch9) + rtb_Sum_l) + rtb_Switch12) +
                      rtb_Sum1_i2) + rtb_Sum2_p;

        /* SignalConversion generated from: '<S1>/VeERER_l_Total_Range' incorporates:
         *  Outport: '<Root>/VeERER_l_Total_Range'
         *  SignalConversion generated from: '<S193>/VeERER_l_Total_Range'
         */
        (void)Rte_Write_VeERER_l_Total_Range_Value((float32)rtb_Sum_pg);

        /* Merge: '<S9>/Merge_6' incorporates:
         *  Constant: '<S275>/Calib'
         *  RelationalOperator: '<S193>/Relational Operator10'
         */
        Merge_6_p = (((float32)rtb_Sum_l) == KeERER_l_Seatswhl_SNA_value);

        /* Merge: '<S9>/Merge_8' incorporates:
         *  Constant: '<S271>/Calib'
         *  RelationalOperator: '<S193>/Relational Operator11'
         */
        Merge_8_d = (((float32)rtb_Switch12) == KeERER_l_Audio_SNA_value);

        /* Merge: '<S9>/Merge_10' incorporates:
         *  Constant: '<S273>/Calib'
         *  RelationalOperator: '<S193>/Relational Operator12'
         */
        Merge_10_n = (((float32)rtb_Sum1_i2) == KeERER_l_Lights_SNA_value);

        /* Merge: '<S9>/Merge_12' incorporates:
         *  Constant: '<S274>/Calib'
         *  RelationalOperator: '<S193>/Relational Operator13'
         */
        Merge_12_g = (((float32)rtb_Sum2_p) == KeERER_l_Other_SNA_value);

        /* Merge: '<S9>/Merge_14' incorporates:
         *  Constant: '<S276>/Calib'
         *  RelationalOperator: '<S193>/Relational Operator14'
         */
        Merge_14_c = (((float32)rtb_Sum_pg) == KeERER_l_Total_SNA_value);

        /* Merge: '<S9>/Merge_4' incorporates:
         *  Constant: '<S272>/Calib'
         *  RelationalOperator: '<S193>/Relational Operator15'
         */
        Merge_4_n = (((float32)rtb_Switch9) == KeERER_l_Defrost_SNA_value);

        /* Merge: '<S9>/Merge_1' incorporates:
         *  Constant: '<S270>/Calib'
         *  RelationalOperator: '<S193>/Relational Operator9'
         */
        Merge_1_d = (((float32)rtb_Sum_g) == KeERER_l_ACFAN_SNA_value);

        /* End of Outputs for SubSystem: '<S9>/Non Prop Power' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/Non Prop Power Not Present' incorporates:
         *  ActionPort: '<S194>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeERER_l_AC_Fan_Range' incorporates:
         *  Constant: '<S194>/Constant Value5'
         *  Outport: '<Root>/VeERER_l_AC_Fan_Range'
         *  SignalConversion generated from: '<S194>/VeERER_l_AC_Fan_Range'
         */
        (void)Rte_Write_VeERER_l_AC_Fan_Range_Value(0.0F);

        /* Merge: '<S9>/Merge_1' incorporates:
         *  Constant: '<S194>/Constant Value14'
         *  SignalConversion generated from: '<S194>/VeERER_b_ACFanRange_SNA'
         */
        Merge_1_d = false;

        /* SignalConversion generated from: '<S1>/VeERER_l_Defrost_Range' incorporates:
         *  Constant: '<S194>/Constant Value1'
         *  Outport: '<Root>/VeERER_l_Defrost_Range'
         *  SignalConversion generated from: '<S194>/VeERER_l_Defrost_Range'
         */
        (void)Rte_Write_VeERER_l_Defrost_Range_Value(0.0F);

        /* Merge: '<S9>/Merge_4' incorporates:
         *  Constant: '<S194>/Constant Value13'
         *  SignalConversion generated from: '<S194>/VeERER_b_DefrostRange_SNA'
         */
        Merge_4_n = false;

        /* SignalConversion generated from: '<S1>/VeERER_l_Seatswhl_Range' incorporates:
         *  Constant: '<S194>/Constant Value2'
         *  Outport: '<Root>/VeERER_l_Seatswhl_Range'
         *  SignalConversion generated from: '<S194>/VeERER_l_Seatswhl_Range'
         */
        (void)Rte_Write_VeERER_l_Seatswhl_Range_Value(0.0F);

        /* Merge: '<S9>/Merge_6' incorporates:
         *  Constant: '<S194>/Constant Value12'
         *  SignalConversion generated from: '<S194>/VeERER_b_SeatswhlRange_SNA'
         */
        Merge_6_p = false;

        /* SignalConversion generated from: '<S1>/VeERER_l_Audio_Range' incorporates:
         *  Constant: '<S194>/Constant Value3'
         *  Outport: '<Root>/VeERER_l_Audio_Range'
         *  SignalConversion generated from: '<S194>/VeERER_l_Audio_Range'
         */
        (void)Rte_Write_VeERER_l_Audio_Range_Value(0.0F);

        /* Merge: '<S9>/Merge_8' incorporates:
         *  Constant: '<S194>/Constant Value11'
         *  SignalConversion generated from: '<S194>/VeERER_b_AudioRange_SNA'
         */
        Merge_8_d = false;

        /* SignalConversion generated from: '<S1>/VeERER_l_Lights_Range' incorporates:
         *  Constant: '<S194>/Constant Value4'
         *  Outport: '<Root>/VeERER_l_Lights_Range'
         *  SignalConversion generated from: '<S194>/VeERER_l_Lights_Range'
         */
        (void)Rte_Write_VeERER_l_Lights_Range_Value(0.0F);

        /* Merge: '<S9>/Merge_10' incorporates:
         *  Constant: '<S194>/Constant Value10'
         *  SignalConversion generated from: '<S194>/VeERER_b_LightsRange_SNA'
         */
        Merge_10_n = false;

        /* SignalConversion generated from: '<S1>/VeERER_l_Other_Range' incorporates:
         *  Constant: '<S194>/Constant Value6'
         *  Outport: '<Root>/VeERER_l_Other_Range'
         *  SignalConversion generated from: '<S194>/VeERER_l_Other_Range'
         */
        (void)Rte_Write_VeERER_l_Other_Range_Value(0.0F);

        /* Merge: '<S9>/Merge_12' incorporates:
         *  Constant: '<S194>/Constant Value9'
         *  SignalConversion generated from: '<S194>/VeERER_b_OtherRange_SNA'
         */
        Merge_12_g = false;

        /* SignalConversion generated from: '<S1>/VeERER_l_Total_Range' incorporates:
         *  Constant: '<S194>/Constant Value7'
         *  Outport: '<Root>/VeERER_l_Total_Range'
         *  SignalConversion generated from: '<S194>/VeERER_l_Total_Range'
         */
        (void)Rte_Write_VeERER_l_Total_Range_Value(0.0F);

        /* Merge: '<S9>/Merge_14' incorporates:
         *  Constant: '<S194>/Constant Value8'
         *  SignalConversion generated from: '<S194>/VeERER_b_TotalRange_SNA'
         */
        Merge_14_c = false;

        /* End of Outputs for SubSystem: '<S9>/Non Prop Power Not Present' */
    }

    /* End of If: '<S9>/If1' */

    /* Outputs for Atomic SubSystem: '<S342>/Counter Reset  Enabled ' */
    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S345>/Constant Value2'
     *  Switch: '<S345>/Switch2'
     *  UnitDelay: '<S342>/Unit Delay'
     *  UnitDelay: '<S342>/Unit Delay1'
     */
    if (ERER_ac_DW.UnitDelay_DSTATE_ot)
    {
        ERER_ac_DW.UnitDelay1_DSTATE_i = 0.0F;
    }
    else if (VeERER_b_ResetRangeDisplay_Enable)
    {
        /* Switch: '<S345>/Switch2' incorporates:
         *  Constant: '<S345>/Constant Value1'
         *  Sum: '<S345>/Subtraction'
         *  UnitDelay: '<S342>/Unit Delay1'
         *  UnitDelay: '<S345>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_i = ERER_ac_DW.UnitDelay_DSTATE_p + 1.0F;
    }
    else
    {
        /* UnitDelay: '<S342>/Unit Delay1' incorporates:
         *  Switch: '<S345>/Switch2'
         *  UnitDelay: '<S345>/Unit Delay'
         */
        ERER_ac_DW.UnitDelay1_DSTATE_i = ERER_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S345>/Switch1' */

    /* Update for UnitDelay: '<S345>/Unit Delay' incorporates:
     *  UnitDelay: '<S342>/Unit Delay1'
     */
    ERER_ac_DW.UnitDelay_DSTATE_p = ERER_ac_DW.UnitDelay1_DSTATE_i;

    /* End of Outputs for SubSystem: '<S342>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S342>/Comparison' incorporates:
     *  Constant: '<S348>/Calib'
     *  UnitDelay: '<S342>/Unit Delay'
     *  UnitDelay: '<S342>/Unit Delay1'
     */
    ERER_ac_DW.UnitDelay_DSTATE_ot = (ERER_ac_DW.UnitDelay1_DSTATE_i >=
        KeERER_t_RngResetDuration);

    /* Switch: '<S12>/Switch16' incorporates:
     *  Constant: '<S329>/Calib'
     *  Switch: '<S12>/Switch15'
     *  UnitDelay: '<S12>/Unit Delay6'
     */
    if (KeERER_b_EstRangeTrend_OvrdEnbl)
    {
        /* Switch: '<S12>/Switch16' incorporates:
         *  Constant: '<S328>/Constant'
         */
        rtb_VeERER_e_RTI = CeERER_e_SNA;
    }
    else if (ERER_ac_DW.UnitDelay6_DSTATE)
    {
        /* Switch: '<S12>/Switch15' incorporates:
         *  Switch: '<S12>/Switch16'
         *  Switch: '<S259>/Switch'
         */
        rtb_VeERER_e_RTI = VeERER_e_RTI;
    }
    else
    {
        /* Switch: '<S12>/Switch16' incorporates:
         *  Constant: '<S327>/Constant'
         *  Switch: '<S12>/Switch15'
         */
        rtb_VeERER_e_RTI = CeERER_e_SNA;
    }

    /* End of Switch: '<S12>/Switch16' */

    /* Update for UnitDelay: '<S309>/Unit Delay1' */
    ERER_ac_DW.UnitDelay1_DSTATE = VeERER_E_totaldist_avgWhrpkm;

    /* Update for UnitDelay: '<S9>/Unit Delay1' */
    ERER_ac_DW.UnitDelay1_DSTATE_o = VeERER_F_EEPROM_WhperKM_Write;

    /* Update for UnitDelay: '<S12>/Unit Delay6' */
    ERER_ac_DW.UnitDelay6_DSTATE = VeERER_b_EstRangePSA;

    /* Outputs for Atomic SubSystem: '<S4>/Capacity' */
    /* Outputs for Atomic SubSystem: '<S19>/Limiter2' */
    /* Switch: '<S58>/Switch' incorporates:
     *  Constant: '<S19>/Constant Value2'
     *  RelationalOperator: '<S58>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeENGR_V_FuelCo <= 0.0F)
    {
        rtb_TmpSignalConversionAtVeENGR_V_FuelCo = 0.0F;
    }

    /* End of Switch: '<S58>/Switch' */
    /* End of Outputs for SubSystem: '<S19>/Limiter2' */

    /* Outport: '<Root>/VeERER_E_WhRemaining_V2L' incorporates:
     *  Product: '<S19>/Product4'
     *  SignalConversion generated from: '<S1>/VeERER_E_WhRemaining_V2L_Fn'
     *  Sum: '<S19>/Sum4'
     */
    (void)Rte_Write_VeERER_E_WhRemaining_V2L_Value(VeERER_E_WhRemaining -
        (rtb_TmpSignalConversionAtVeENGR_V_FuelCo *
         rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa));

    /* Outport: '<Root>/VeERER_E_WhRemaining_V2V' incorporates:
     *  Product: '<S19>/Product2'
     *  SignalConversion generated from: '<S1>/VeERER_E_WhRemaining_V2V_Fn'
     *  Sum: '<S19>/Sum5'
     */
    (void)Rte_Write_VeERER_E_WhRemaining_V2V_Value(VeERER_E_WhRemaining -
        (tmpRead_9 * rtb_TmpSignalConversionAtVeBPCR_Pct_HVBa));

    /* End of Outputs for SubSystem: '<S4>/Capacity' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeERER_b_ACFanRange_SNA' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_b_ACFanRange_SNA'
     */
    (void)Rte_Write_VeERER_b_ACFanRange_SNA_Value(Merge_1_d);

    /* Outport: '<Root>/VeERER_b_AudioRange_SNA' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_b_AudioRange_SNA'
     */
    (void)Rte_Write_VeERER_b_AudioRange_SNA_Value(Merge_8_d);

    /* Outport: '<Root>/VeERER_b_DefrostRange_SNA' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_b_DefrostRange_SNA'
     */
    (void)Rte_Write_VeERER_b_DefrostRange_SNA_Value(Merge_4_n);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Outport: '<Root>/VeERER_b_EstRange_SNA' incorporates:
     *  Constant: '<S356>/Calib'
     *  RelationalOperator: '<S332>/Comparison1'
     *  SignalConversion generated from: '<S1>/VeERER_b_EstRange_SNA_Fn'
     */
    (void)Rte_Write_VeERER_b_EstRange_SNA_Value
        (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd == KeERER_l_SNA_value);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeERER_b_LightsRange_SNA' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_b_LightsRange_SNA'
     */
    (void)Rte_Write_VeERER_b_LightsRange_SNA_Value(Merge_10_n);

    /* Outport: '<Root>/VeERER_b_OtherRange_SNA' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_b_OtherRange_SNA'
     */
    (void)Rte_Write_VeERER_b_OtherRange_SNA_Value(Merge_12_g);

    /* Outport: '<Root>/VeERER_b_SeatswhlRange_SNA' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_b_SeatswhlRange_SNA'
     */
    (void)Rte_Write_VeERER_b_SeatswhlRange_SNA_Value(Merge_6_p);

    /* Outport: '<Root>/VeERER_b_TotalRange_SNA' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_b_TotalRange_SNA'
     */
    (void)Rte_Write_VeERER_b_TotalRange_SNA_Value(Merge_14_c);

    /* Outport: '<Root>/VeERER_e_EstRangeTrend' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_e_EstRangeTrend_Fn'
     *  Switch: '<S12>/Switch16'
     */
    (void)Rte_Write_VeERER_e_EstRangeTrend_Value(rtb_VeERER_e_RTI);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Outputs for Atomic SubSystem: '<S197>/Limiter' */
    /* Switch: '<S304>/Switch' incorporates:
     *  Constant: '<S197>/Constant Value18'
     *  RelationalOperator: '<S304>/Relational Operator1'
     */
    if (rtb_Sum2 <= 0.0F)
    {
        rtb_Sum2 = 0.0F;
    }

    /* End of Switch: '<S304>/Switch' */
    /* End of Outputs for SubSystem: '<S197>/Limiter' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeERER_l_EstRange_ChrgStpTime' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_l_EstRange_ChrgStpTime_Fn'
     */
    (void)Rte_Write_VeERER_l_EstRange_ChrgStpTime_Value(rtb_Sum2);

    /* Outport: '<Root>/VeERER_l_EstRange' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_l_EstRange_Fn'
     */
    (void)Rte_Write_VeERER_l_EstRange_Value
        (TmpSignalConversionAtVeERER_k_Modify_F_f);

    /* Outport: '<Root>/VeERER_l_EstRange_Fuel' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_l_EstRange_FuelFn'
     */
    (void)Rte_Write_VeERER_l_EstRange_Fuel_Value
        (TmpSignalConversionAtVeERER_l_VehDist__a);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Outport: '<Root>/VeERER_l_EstRange_Total' incorporates:
     *  SignalConversion generated from: '<S1>/VeERER_l_EstRange_TotalFn'
     *  Sum: '<S75>/Add'
     */
    (void)Rte_Write_VeERER_l_EstRange_Total_Value
        (TmpSignalConversionAtVeERER_k_Modify_F_f +
         TmpSignalConversionAtVeERER_l_VehDist__a);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ERER_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, ERER_CODE) ERER_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ERER_PwrOff'
     */
    /* Outport: '<Root>/EeERER_e_DriveMode_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_e_DriveMode'
     */
    (void)Rte_Write_EeERER_e_DriveMode_EeERER_e_DriveMode(EeERER_e_DriveMode);

    /* Outport: '<Root>/EeERER_l_VehDist_Delta_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_l_VehDist_Delta'
     */
    (void)Rte_Write_EeERER_l_VehDist_Delta_EeERER_l_VehDist_Delta
        (EeERER_l_VehDist_Delta);

    /* Outport: '<Root>/EeERER_k_Modify_Factor_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_k_Modify_Factor'
     */
    (void)Rte_Write_EeERER_k_Modify_Factor_EeERER_k_Modify_Factor
        (EeERER_k_Modify_Factor);

    /* Outport: '<Root>/EeERER_F_EEPROM_WhperKM_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_F_EEPROM_WhperKM'
     */
    (void)Rte_Write_EeERER_F_EEPROM_WhperKM_EeERER_F_EEPROM_WhperKM
        (EeERER_F_EEPROM_WhperKM);

    /* Outport: '<Root>/EeERER_b_EEPROM_WhperKM_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_b_EEPROM_WhperKM'
     */
    (void)Rte_Write_EeERER_b_EEPROM_WhperKM_EeERER_b_EEPROM_WhperKM
        (EeERER_b_EEPROM_WhperKM);

    /* Outport: '<Root>/EeERER_l_EEPROM_EstRange_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_l_EEPROM_EstRange'
     */
    (void)Rte_Write_EeERER_l_EEPROM_EstRange_EeERER_l_EEPROM_EstRange
        (EeERER_l_EEPROM_EstRange);

    /* Outport: '<Root>/EeERER_b_EEPROM_EstRange_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_b_EEPROM_EstRange'
     */
    (void)Rte_Write_EeERER_b_EEPROM_EstRange_EeERER_b_EEPROM_EstRange
        (EeERER_b_EEPROM_EstRange);

    /* Outport: '<Root>/EeERER_e_TurtleMode_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeERER_e_DriveMode1'
     */
    (void)Rte_Write_EeERER_e_TurtleMode_EeERER_e_TurtleMode(EeERER_e_TurtleMode);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, ERER_CODE) ERER_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ERER_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S381>/EeERER_e_DriveMode1' incorporates:
     *  Inport: '<Root>/EeERER_e_TurtleMode_PM_In'
     */
    (void)Rte_Read_EeERER_e_TurtleMode_Rx_EeERER_e_TurtleMode
        ((&(EeERER_e_TurtleMode)));

    /* DataStoreWrite: '<S381>/EeERER_b_EEPROM_EstRange' incorporates:
     *  Inport: '<Root>/EeERER_b_EEPROM_EstRange_PM_In'
     */
    (void)Rte_Read_EeERER_b_EEPROM_EstRange_Rx_EeERER_b_EEPROM_EstRange
        ((&(EeERER_b_EEPROM_EstRange)));

    /* DataStoreWrite: '<S381>/EeERER_l_EEPROM_EstRange' incorporates:
     *  Inport: '<Root>/EeERER_l_EEPROM_EstRange_PM_In'
     */
    (void)Rte_Read_EeERER_l_EEPROM_EstRange_Rx_EeERER_l_EEPROM_EstRange
        ((&(EeERER_l_EEPROM_EstRange)));

    /* DataStoreWrite: '<S381>/EeERER_b_EEPROM_WhperKM' incorporates:
     *  Inport: '<Root>/EeERER_b_EEPROM_WhperKM_PM_In'
     */
    (void)Rte_Read_EeERER_b_EEPROM_WhperKM_Rx_EeERER_b_EEPROM_WhperKM
        ((&(EeERER_b_EEPROM_WhperKM)));

    /* DataStoreWrite: '<S381>/EeERER_F_EEPROM_WhperKM' incorporates:
     *  Inport: '<Root>/EeERER_F_EEPROM_WhperKM_PM_In'
     */
    (void)Rte_Read_EeERER_F_EEPROM_WhperKM_Rx_EeERER_F_EEPROM_WhperKM
        ((&(EeERER_F_EEPROM_WhperKM)));

    /* DataStoreWrite: '<S381>/EeERER_k_Modify_Factor' incorporates:
     *  Inport: '<Root>/EeERER_k_Modify_Factor_PM_In'
     */
    (void)Rte_Read_EeERER_k_Modify_Factor_Rx_EeERER_k_Modify_Factor
        ((&(EeERER_k_Modify_Factor)));

    /* DataStoreWrite: '<S381>/EeERER_l_VehDist_Delta' incorporates:
     *  Inport: '<Root>/EeERER_l_VehDist_Delta_PM_In'
     */
    (void)Rte_Read_EeERER_l_VehDist_Delta_Rx_EeERER_l_VehDist_Delta
        ((&(EeERER_l_VehDist_Delta)));

    /* DataStoreWrite: '<S381>/EeERER_e_DriveMode' incorporates:
     *  Inport: '<Root>/EeERER_e_DriveMode_PM_In'
     */
    (void)Rte_Read_EeERER_e_DriveMode_Rx_EeERER_e_DriveMode
        ((&(EeERER_e_DriveMode)));

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ERER_NF'
     */
    /* DataStoreRead: '<S382>/Data Store Read' incorporates:
     *  SignalConversion generated from: '<S382>/VariantSource_EnableFUNC'
     */
#if Rte_SysCon_Variant_ERER_1

    /* VariantMerge generated from: '<S382>/VariantSource_EnableFUNC' */
    ERER_ac_B.VariantMerge_For_Variant_Source_VariantS =
        EeERER_l_EEPROM_EstRange;

#else

    /* VariantMerge generated from: '<S382>/VariantSource_EnableFUNC' incorporates:
     *  Constant: '<S382>/Constant Value'
     *  SignalConversion generated from: '<S382>/VariantSource_EnableFUNC'
     */
    ERER_ac_B.VariantMerge_For_Variant_Source_VariantS = 0.0F;

#endif

    /* End of DataStoreRead: '<S382>/Data Store Read' */

    /* SignalConversion generated from: '<S382>/VeERER_e_EstRangeTrend_NF' incorporates:
     *  Constant: '<S384>/Constant'
     */
    ERER_ac_B.VeERER_e_EstRangeTrend_NF = ERER_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S382>/VeERER_b_EstRange_SNA_NF' */
    ERER_ac_B.VeERER_b_EstRange_SNA_NF = false;

    /* SignalConversion generated from: '<S382>/VeERER_l_EstRange_ChrgStpTime_NF' */
    ERER_ac_B.VeERER_l_EstRange_ChrgStpTime_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_E_WhRemaining_V2L_NF' */
    ERER_ac_B.VeERER_E_WhRemaining_V2L_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_E_WhRemaining_V2V_NF' */
    ERER_ac_B.VeERER_E_WhRemaining_V2V_NF = 0.0F;

    /* DataStoreRead: '<S382>/Data Store Read1' incorporates:
     *  SignalConversion generated from: '<S382>/VariantSource_EnableFUNC1'
     */
#if Rte_SysCon_Variant_ERER_1

    /* VariantMerge generated from: '<S382>/VariantSource_EnableFUNC1' */
    ERER_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        EeERER_l_EEPROM_EstRange;

#else

    /* VariantMerge generated from: '<S382>/VariantSource_EnableFUNC1' incorporates:
     *  Constant: '<S382>/Constant Value5'
     *  SignalConversion generated from: '<S382>/VariantSource_EnableFUNC1'
     */
    ERER_ac_B.VariantMerge_For_Variant_Source_Varian_g = 0.0F;

#endif

    /* End of DataStoreRead: '<S382>/Data Store Read1' */

    /* SignalConversion generated from: '<S382>/VeERER_l_EstRange_Fuel_NF' */
    ERER_ac_B.VeERER_l_EstRange_Fuel_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_l_AC_Fan_Range_NF' */
    ERER_ac_B.VeERER_l_AC_Fan_Range_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_b_ACFanRange_SNA_NF' */
    ERER_ac_B.VeERER_b_ACFanRange_SNA_NF = false;

    /* SignalConversion generated from: '<S382>/VeERER_l_Defrost_Range_NF' */
    ERER_ac_B.VeERER_l_Defrost_Range_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_b_DefrostRange_SNA_NF' */
    ERER_ac_B.VeERER_b_DefrostRange_SNA_NF = false;

    /* SignalConversion generated from: '<S382>/VeERER_l_Seatswhl_Range_NF' */
    ERER_ac_B.VeERER_l_Seatswhl_Range_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_b_SeatswhlRange_SNA_NF' */
    ERER_ac_B.VeERER_b_SeatswhlRange_SNA_NF = false;

    /* SignalConversion generated from: '<S382>/VeERER_l_Audio_Range_NF' */
    ERER_ac_B.VeERER_l_Audio_Range_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_b_AudioRange_SNA_NF' */
    ERER_ac_B.VeERER_b_AudioRange_SNA_NF = false;

    /* SignalConversion generated from: '<S382>/VeERER_l_Lights_Range_NF' */
    ERER_ac_B.VeERER_l_Lights_Range_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_b_LightsRange_SNA_NF' */
    ERER_ac_B.VeERER_b_LightsRange_SNA_NF = false;

    /* SignalConversion generated from: '<S382>/VeERER_l_Other_Range_NF' */
    ERER_ac_B.VeERER_l_Other_Range_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_b_OtherRange_SNA_NF' */
    ERER_ac_B.VeERER_b_OtherRange_SNA_NF = false;

    /* SignalConversion generated from: '<S382>/VeERER_l_Total_Range_NF' */
    ERER_ac_B.VeERER_l_Total_Range_NF = 0.0F;

    /* SignalConversion generated from: '<S382>/VeERER_b_TotalRange_SNA_NF' */
    ERER_ac_B.VeERER_b_TotalRange_SNA_NF = false;

#if Rte_SysCon_Variant_ERER_1

    /* Outputs for Function Call SubSystem: '<S3>/ReadFromEEPROM' */
    /* DataStoreRead: '<S383>/Data Store Read2' */
    ERER_ac_B.DataStoreRead2 = EeERER_F_EEPROM_WhperKM;

    /* DataStoreRead: '<S383>/Data Store Read1' */
    ERER_ac_B.DataStoreRead1 = EeERER_l_EEPROM_EstRange;

    /* DataStoreRead: '<S383>/Data Store Read' */
    ERER_ac_B.DataStoreRead = EeERER_e_DriveMode;

    /* DataStoreRead: '<S383>/Data Store Read3' */
    ERER_ac_B.DataStoreRead3 = EeERER_k_Modify_Factor;

    /* DataStoreRead: '<S383>/Data Store Read4' */
    ERER_ac_B.DataStoreRead4 = EeERER_l_VehDist_Delta;

    /* DataStoreRead: '<S383>/Data Store Read5' */
    ERER_ac_B.DataStoreRead5 = EeERER_e_TurtleMode;

    /* End of Outputs for SubSystem: '<S3>/ReadFromEEPROM' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeERER_E_WhRemaining_V2L' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_E_WhRemaining_V2L_NF'
     */
    (void)Rte_Write_VeERER_E_WhRemaining_V2L_Value
        (ERER_ac_B.VeERER_E_WhRemaining_V2L_NF);

    /* Outport: '<Root>/VeERER_E_WhRemaining_V2V' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_E_WhRemaining_V2V_NF'
     */
    (void)Rte_Write_VeERER_E_WhRemaining_V2V_Value
        (ERER_ac_B.VeERER_E_WhRemaining_V2V_NF);

    /* Outport: '<Root>/VeERER_b_ACFanRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_ACFanRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_ACFanRange_SNA_Value
        (ERER_ac_B.VeERER_b_ACFanRange_SNA_NF);

    /* Outport: '<Root>/VeERER_b_AudioRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_AudioRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_AudioRange_SNA_Value
        (ERER_ac_B.VeERER_b_AudioRange_SNA_NF);

    /* Outport: '<Root>/VeERER_b_DefrostRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_DefrostRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_DefrostRange_SNA_Value
        (ERER_ac_B.VeERER_b_DefrostRange_SNA_NF);

    /* Outport: '<Root>/VeERER_b_EstRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_EstRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_EstRange_SNA_Value
        (ERER_ac_B.VeERER_b_EstRange_SNA_NF);

    /* Outport: '<Root>/VeERER_b_LightsRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_LightsRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_LightsRange_SNA_Value
        (ERER_ac_B.VeERER_b_LightsRange_SNA_NF);

    /* Outport: '<Root>/VeERER_b_OtherRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_OtherRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_OtherRange_SNA_Value
        (ERER_ac_B.VeERER_b_OtherRange_SNA_NF);

    /* Outport: '<Root>/VeERER_b_SeatswhlRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_SeatswhlRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_SeatswhlRange_SNA_Value
        (ERER_ac_B.VeERER_b_SeatswhlRange_SNA_NF);

    /* Outport: '<Root>/VeERER_b_TotalRange_SNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_b_TotalRange_SNA_NF'
     */
    (void)Rte_Write_VeERER_b_TotalRange_SNA_Value
        (ERER_ac_B.VeERER_b_TotalRange_SNA_NF);

    /* Outport: '<Root>/VeERER_e_EstRangeTrend' incorporates:
     *  SignalConversion generated from: '<S382>/VeERER_e_EstRangeTrend_NF'
     *  SignalConversion generated from: '<S3>/VeERER_e_EstRangeTrend_NF'
     */
    (void)Rte_Write_VeERER_e_EstRangeTrend_Value
        (ERER_ac_B.VeERER_e_EstRangeTrend_NF);

    /* Outport: '<Root>/VeERER_l_AC_Fan_Range' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_AC_Fan_Range_NF'
     */
    (void)Rte_Write_VeERER_l_AC_Fan_Range_Value
        (ERER_ac_B.VeERER_l_AC_Fan_Range_NF);

    /* Outport: '<Root>/VeERER_l_Audio_Range' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_Audio_Range_NF'
     */
    (void)Rte_Write_VeERER_l_Audio_Range_Value(ERER_ac_B.VeERER_l_Audio_Range_NF);

    /* Outport: '<Root>/VeERER_l_Defrost_Range' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_Defrost_Range_NF'
     */
    (void)Rte_Write_VeERER_l_Defrost_Range_Value
        (ERER_ac_B.VeERER_l_Defrost_Range_NF);

    /* Outport: '<Root>/VeERER_l_EstRange_ChrgStpTime' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_EstRange_ChrgStpTime_NF'
     */
    (void)Rte_Write_VeERER_l_EstRange_ChrgStpTime_Value
        (ERER_ac_B.VeERER_l_EstRange_ChrgStpTime_NF);

    /* Outport: '<Root>/VeERER_l_EstRange_Fuel' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_EstRange_Fuel_NF'
     */
    (void)Rte_Write_VeERER_l_EstRange_Fuel_Value
        (ERER_ac_B.VeERER_l_EstRange_Fuel_NF);

    /* Outport: '<Root>/VeERER_l_EstRange' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_EstRange_NF'
     */
    (void)Rte_Write_VeERER_l_EstRange_Value
        (ERER_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeERER_l_EstRange_Total' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_EstRange_Total_NF'
     */
    (void)Rte_Write_VeERER_l_EstRange_Total_Value
        (ERER_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeERER_l_Lights_Range' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_Lights_Range_NF'
     */
    (void)Rte_Write_VeERER_l_Lights_Range_Value
        (ERER_ac_B.VeERER_l_Lights_Range_NF);

    /* Outport: '<Root>/VeERER_l_Other_Range' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_Other_Range_NF'
     */
    (void)Rte_Write_VeERER_l_Other_Range_Value(ERER_ac_B.VeERER_l_Other_Range_NF);

    /* Outport: '<Root>/VeERER_l_Seatswhl_Range' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_Seatswhl_Range_NF'
     */
    (void)Rte_Write_VeERER_l_Seatswhl_Range_Value
        (ERER_ac_B.VeERER_l_Seatswhl_Range_NF);

    /* Outport: '<Root>/VeERER_l_Total_Range' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_l_Total_Range_NF'
     */
    (void)Rte_Write_VeERER_l_Total_Range_Value(ERER_ac_B.VeERER_l_Total_Range_NF);

    /* SignalConversion generated from: '<S3>/VeERER_F_WHrpKm_EEPROM_Read_write' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_e_DriveMode_Wakeup_write'
     *  SignalConversion generated from: '<S3>/VeERER_e_TurtleMdSts_Wakeup'
     *  SignalConversion generated from: '<S3>/VeERER_k_Modify_Factor_Wakeup_write'
     *  SignalConversion generated from: '<S3>/VeERER_l_EstRange_EEPROM_Read_write'
     *  SignalConversion generated from: '<S3>/VeERER_l_VehDist_Delta_Wakeup_write'
     */
#if Rte_SysCon_Variant_ERER_1

    /* SignalConversion generated from: '<S3>/VeERER_F_WHrpKm_EEPROM_Read_write' */
    Rte_IrvWrite_ERER_PwrOn_VeERER_F_WHrpKm_EEPROM_Read_write_IRV
        (ERER_ac_B.DataStoreRead2);

    /* SignalConversion generated from: '<S3>/VeERER_e_DriveMode_Wakeup_write' */
    Rte_IrvWrite_ERER_PwrOn_VeERER_e_DriveMode_Wakeup_write_IRV
        (ERER_ac_B.DataStoreRead);

    /* SignalConversion generated from: '<S3>/VeERER_e_TurtleMdSts_Wakeup' */
    Rte_IrvWrite_ERER_PwrOn_VeERER_e_TurtleMdSts_Wakeup_IRV
        (ERER_ac_B.DataStoreRead5);

    /* SignalConversion generated from: '<S3>/VeERER_k_Modify_Factor_Wakeup_write' */
    Rte_IrvWrite_ERER_PwrOn_VeERER_k_Modify_Factor_Wakeup_write_IRV
        (ERER_ac_B.DataStoreRead3);

    /* SignalConversion generated from: '<S3>/VeERER_l_EstRange_EEPROM_Read_write' */
    Rte_IrvWrite_ERER_PwrOn_VeERER_l_EstRange_EEPROM_Read_write_IRV
        (ERER_ac_B.DataStoreRead1);

    /* SignalConversion generated from: '<S3>/VeERER_l_VehDist_Delta_Wakeup_write' */
    Rte_IrvWrite_ERER_PwrOn_VeERER_l_VehDist_Delta_Wakeup_write_IRV
        (ERER_ac_B.DataStoreRead4);

#endif

    /* End of SignalConversion generated from: '<S3>/VeERER_F_WHrpKm_EEPROM_Read_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ERER_CODE) ERER_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ERER_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ERER_NF'
     */
    /* SystemInitialize for SignalConversion generated from: '<S382>/VeERER_e_EstRangeTrend_NF' incorporates:
     *  Constant: '<S384>/Constant'
     */
    ERER_ac_B.VeERER_e_EstRangeTrend_NF = ERER_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for SignalConversion generated from: '<S3>/VeERER_F_WHrpKm_EEPROM_Read_write' incorporates:
     *  SignalConversion generated from: '<S3>/VeERER_e_DriveMode_Wakeup_write'
     *  SignalConversion generated from: '<S3>/VeERER_e_TurtleMdSts_Wakeup'
     *  SignalConversion generated from: '<S3>/VeERER_k_Modify_Factor_Wakeup_write'
     *  SignalConversion generated from: '<S3>/VeERER_l_EstRange_EEPROM_Read_write'
     *  SignalConversion generated from: '<S3>/VeERER_l_VehDist_Delta_Wakeup_write'
     */
#if Rte_SysCon_Variant_ERER_1

    /* SystemInitialize for Function Call SubSystem: '<Root>/ERER_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EREC'
     */
    /* Start for If: '<S9>/If' */
    ERER_ac_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<S8>/If1' */
    ERER_ac_DW.If1_ActiveSubsystem = -1;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/ERER_MedTEH' */

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeERER_F_WHrpKm_EEPROM_Read_write' */
    Rte_IrvWrite_ERER_ac_Init_VeERER_F_WHrpKm_EEPROM_Read_write_IRV
        (ERER_ac_B.DataStoreRead2);

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeERER_e_DriveMode_Wakeup_write' */
    Rte_IrvWrite_ERER_ac_Init_VeERER_e_DriveMode_Wakeup_write_IRV
        (ERER_ac_B.DataStoreRead);

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeERER_e_TurtleMdSts_Wakeup' */
    Rte_IrvWrite_ERER_ac_Init_VeERER_e_TurtleMdSts_Wakeup_IRV
        (ERER_ac_B.DataStoreRead5);

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeERER_k_Modify_Factor_Wakeup_write' */
    Rte_IrvWrite_ERER_ac_Init_VeERER_k_Modify_Factor_Wakeup_write_IRV
        (ERER_ac_B.DataStoreRead3);

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeERER_l_EstRange_EEPROM_Read_write' */
    Rte_IrvWrite_ERER_ac_Init_VeERER_l_EstRange_EEPROM_Read_write_IRV
        (ERER_ac_B.DataStoreRead1);

    /* SystemInitialize for SignalConversion generated from: '<S3>/VeERER_l_VehDist_Delta_Wakeup_write' */
    Rte_IrvWrite_ERER_ac_Init_VeERER_l_VehDist_Delta_Wakeup_write_IRV
        (ERER_ac_B.DataStoreRead4);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S3>/VeERER_F_WHrpKm_EEPROM_Read_write' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeERER_e_EstRangeTrend' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeERER_e_EstRangeTrend_Value(CeERER_e_SNA);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
