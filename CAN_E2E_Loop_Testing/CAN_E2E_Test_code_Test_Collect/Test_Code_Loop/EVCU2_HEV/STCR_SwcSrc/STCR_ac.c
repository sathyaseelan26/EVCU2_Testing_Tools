/*
 * File: STCR_ac.c
 *
 * Code generated for Simulink model 'STCR_ac'.
 *
 * Model version                  : 9.527
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:07:50 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STCR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_STCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) HaSTCR_i_UpShftIdx[18] =
{
    12.0F, 23.0F, 34.0F, 45.0F, 56.0F, 67.0F, 78.0F, 89.0F, 0.0F, 13.0F, 24.0F,
    35.0F, 46.0F, 57.0F, 68.0F, 79.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S71>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) HeSTCR_b_EnblStrtTrgPRNDL = 1;/* Referenced by: '<S984>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) HeSTCR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S17>/Calib'
                                                                      * '<S125>/Calib'
                                                                      * '<S140>/Calib'
                                                                      * '<S105>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) HeSTCR_t_MedTEF_dT = 0.05F;/* Referenced by:
                                                                      * '<S272>/Calib'
                                                                      * '<S328>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) HeSTCR_t_MedTEH_dT = 0.1F;/* Referenced by:
                                                                      * '<S1000>/Calib'
                                                                      * '<S646>/Calib'
                                                                      * '<S656>/Calib'
                                                                      * '<S965>/Calib'
                                                                      * '<S985>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(uint16, STCR_VAR_INIT) HeSTCR_y_EnblFAVldtyChk = 0U;/* Referenced by: '<S628>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(boolean, STCR_VAR_INIT) KaSTCR_b_SelCANDly[30] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S52>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(boolean, STCR_VAR_INIT) KaSTCR_b_SelPrllRngSt[8] =
{
    0, 0, 1, 0, 0, 1, 0, 0
} ;                                    /* Referenced by: '<S88>/Calib' */

#endif

#if (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd)

static volatile CONST(boolean, STCR_VAR_INIT) KaSTCR_b_StrtRqAWDOff[60] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S976>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd

static volatile CONST(boolean, STCR_VAR_INIT) KaSTCR_b_StrtRqLockOn[60] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 1, 0, 1, 1, 1, 0, 0
} ;                                    /* Referenced by: '<S977>/Calib' */

#endif

#if (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd)

static volatile CONST(boolean, STCR_VAR_INIT) KaSTCR_b_StrtRqLowOn[60] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S978>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KaSTCR_k_SoftChkDbncFctrHi[21] =
{
    1.0F, 1.0F, 5.0F, 1.0F, 1.0F, 2.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S657>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KaSTCR_k_SoftChkDbncFctrLow[21] =
{
    1.0F, 1.0F, 3.0F, 1.0F, 1.0F, 5.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S658>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(uint16, STCR_VAR_INIT) KeSTCR_Cnt_AStrtAWDLockLowDly = 3U;/* Referenced by: '<S979>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(uint16, STCR_VAR_INIT) KeSTCR_Cnt_DbncStressFactorChk = 3U;/* Referenced by: '<S942>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_E_DCLoadIntgrlVal = 0.35F;/* Referenced by: '<S108>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_M_AStrtPN_MinBrkTrq = 99.0F;/* Referenced by: '<S329>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_M_BrakeThres_MildHyb = 0.0F;/* Referenced by: '<S1011>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_M_ILEBrakeThres_MildHyb =
    0.0F;                              /* Referenced by: '<S1012>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_M_ToReqMax_MildHyb = 350.0F;/* Referenced by: '<S1013>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_M_ToReqMin_MildHyb = -50.0F;/* Referenced by: '<S1014>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_P_AStopBatPwrDschrgMin =
    15.0F;                             /* Referenced by:
                                        * '<S1077>/Calib'
                                        * '<S1203>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_P_AStopBatPwrDschrgMin_DKCrnk = 12.0F;/* Referenced by: '<S1145>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_P_AStopBatPwrDschrgMin_MildHyb = 12.0F;/* Referenced by:
                                                   * '<S1037>/Calib'
                                                   * '<S1167>/Calib'
                                                   */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_P_AStrtBatPwrDschrgHyst =
    3.0F;                              /* Referenced by: '<S1204>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_P_AStrtBatPwrDschrgHyst_DKCrnk = 2.0F;/* Referenced by: '<S1146>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_P_AStrtBatPwrDschrgHyst_MildHyb = 2.0F;/* Referenced by: '<S1168>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_P_AStrtDCOverloadThrs =
    1.8F;                              /* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_P_DCLoadIntrglOFFThres =
    1.8F;                              /* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_P_DCLoadIntrglONThres =
    2.0F;                              /* Referenced by: '<S111>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_Pct_AStrtAccelThresinNeutral = 20.0F;/* Referenced by: '<S259>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_AccelPdlMax_MildHyb =
    2.0F;                              /* Referenced by: '<S1015>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_DfltVehSOCHyst = -10.0F;/* Referenced by:
                                                                      * '<S1124>/Calib'
                                                                      * '<S1065>/Calib'
                                                                      * '<S1078>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_FrstAStpTmr_SOCMax =
    99.9F;                             /* Referenced by: '<S1096>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_IBSBattSOCHyst = 5.0F;/* Referenced by: '<S1080>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_IBSBattSOCHyst_MildHyb =
    5.0F;                              /* Referenced by: '<S1038>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_IBSBattSOCMin = 20.0F;/* Referenced by:
                                                                      * '<S1079>/Calib'
                                                                      * '<S1205>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_IBSBattSOCMin_DKCrnk =
    20.0F;                             /* Referenced by: '<S1147>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_IBSBattSOCMin_MildHyb =
    20.0F;                             /* Referenced by:
                                        * '<S1039>/Calib'
                                        * '<S1169>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_Pct_PedalThresholdForDelayEngineOff = 20.0F;/* Referenced by: '<S1097>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_RmtStrtAStopVehSOCHyst =
    5.0F;                              /* Referenced by: '<S1081>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_Pct_RmtStrtAStopVehSOCHyst_MildHyb = 5.0F;/* Referenced by: '<S1066>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_SoftChkDeltaFromTgtSOC =
    -15.0F;                            /* Referenced by:
                                        * '<S1082>/Calib'
                                        * '<S1206>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_Pct_SoftChkDeltaFromTgtSOC_DKCrnk = -20.0F;/* Referenced by: '<S1148>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_Pct_SoftChkDeltaFromTgtSOC_MildHyb = -18.0F;/* Referenced by:
                                                        * '<S1040>/Calib'
                                                        * '<S1170>/Calib'
                                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_Pct_TgtSOC_D_Min = 16.0F;/* Referenced by: '<S467>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBatModTempMax =
    43.0F;                             /* Referenced by:
                                        * '<S1083>/Calib'
                                        * '<S1207>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBatModTempMax_DKCrnk
    = 40.0F;                           /* Referenced by: '<S1149>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStopBatModTempMax_MildHyb = 40.0F;/* Referenced by:
                                                 * '<S1041>/Calib'
                                                 * '<S1171>/Calib'
                                                 */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBatModTempMin =
    10.0F;                             /* Referenced by:
                                        * '<S1084>/Calib'
                                        * '<S1208>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBatModTempMin_DKCrnk
    = 15.0F;                           /* Referenced by: '<S1150>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStopBatModTempMin_MildHyb = 15.0F;/* Referenced by:
                                                 * '<S1042>/Calib'
                                                 * '<S1172>/Calib'
                                                 */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBeltTempMin = 10.0F;/* Referenced by: '<S938>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBstCnvLwrIGBT =
    170.0F;                            /* Referenced by:
                                        * '<S1023>/Calib'
                                        * '<S1129>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBstCnvLwrIGBTHyst =
    10.0F;                             /* Referenced by: '<S1125>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBstCnvReactor =
    170.0F;                            /* Referenced by:
                                        * '<S1024>/Calib'
                                        * '<S1130>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBstCnvReactorHyst =
    10.0F;                             /* Referenced by: '<S1126>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBstCnvUpprIGBT =
    170.0F;                            /* Referenced by:
                                        * '<S1025>/Calib'
                                        * '<S1127>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopBstCnvUpprIGBTHyst =
    10.0F;                             /* Referenced by: '<S1128>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopECTMax = 110.0F;/* Referenced by:
                                                                      * '<S1026>/Calib'
                                                                      * '<S1131>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopInvrtrATempMax =
    60.0F;                             /* Referenced by:
                                        * '<S1027>/Calib'
                                        * '<S1132>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopInvrtrBTempMax =
    60.0F;                             /* Referenced by:
                                        * '<S1028>/Calib'
                                        * '<S1133>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopMtrATempMax = 170.0F;/* Referenced by:
                                                                      * '<S1085>/Calib'
                                                                      * '<S1209>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopMtrATempMax_DKCrnk =
    120.0F;                            /* Referenced by: '<S1151>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopMtrATempMax_MildHyb =
    120.0F;                            /* Referenced by:
                                        * '<S1043>/Calib'
                                        * '<S1173>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopMtrA_CoolantTempMax =
    170.0F;                            /* Referenced by:
                                        * '<S1086>/Calib'
                                        * '<S1210>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStopMtrA_CoolantTempMax_DKCrnk = 120.0F;/* Referenced by: '<S1152>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStopMtrA_CoolantTempMax_MildHyb = 120.0F;/* Referenced by:
                                                        * '<S1044>/Calib'
                                                        * '<S1174>/Calib'
                                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopMtrBTempMax = 170.0F;/* Referenced by:
                                                                      * '<S1087>/Calib'
                                                                      * '<S1211>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopMtrBTempMax_DKCrnk =
    120.0F;                            /* Referenced by: '<S1153>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopMtrBTempMax_MildHyb =
    120.0F;                            /* Referenced by:
                                        * '<S1045>/Calib'
                                        * '<S1175>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopTransTempMax = 90.0F;/* Referenced by:
                                                                      * '<S1088>/Calib'
                                                                      * '<S1212>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopTransTempMax_DKCrnk =
    100.0F;                            /* Referenced by: '<S1154>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStopTransTempMax_MildHyb
    = 100.0F;                          /* Referenced by:
                                        * '<S1046>/Calib'
                                        * '<S1176>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtBatModTempHyst =
    3.0F;                              /* Referenced by: '<S1213>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStrtBatModTempHyst_DKCrnk = 2.0F;/* Referenced by: '<S1155>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStrtBatModTempHyst_MildHyb = 2.0F;/* Referenced by: '<S1177>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtBeltTempHyst = -5.0F;/* Referenced by: '<S939>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtECTHyst = 10.0F;/* Referenced by: '<S1134>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtInvrtrATempHyst =
    10.0F;                             /* Referenced by: '<S1135>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtInvrtrBTempHyst =
    10.0F;                             /* Referenced by: '<S1136>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtMtrATempHyst = 10.0F;/* Referenced by: '<S1214>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtMtrATempHyst_DKCrnk =
    10.0F;                             /* Referenced by: '<S1156>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtMtrATempHyst_MildHyb
    = 10.0F;                           /* Referenced by: '<S1178>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtMtrA_CoolantTempHyst
    = 10.0F;                           /* Referenced by: '<S1215>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStrtMtrA_CoolantTempHyst_DKCrnk = 10.0F;/* Referenced by: '<S1157>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStrtMtrA_CoolantTempHyst_MildHyb = 10.0F;/* Referenced by: '<S1179>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtMtrBTempHyst = 10.0F;/* Referenced by: '<S1216>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtMtrBTempHyst_DKCrnk =
    10.0F;                             /* Referenced by: '<S1158>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtMtrBTempHyst_MildHyb
    = 10.0F;                           /* Referenced by: '<S1180>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtTransTempHyst = 1.0F;/* Referenced by: '<S1217>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_AStrtTransTempHyst_DKCrnk
    = 5.0F;                            /* Referenced by: '<S1159>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_T_AStrtTransTempHyst_MildHyb = 5.0F;/* Referenced by: '<S1181>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_EngOffSlow_TOT_LSP =
    -9.0F;                             /* Referenced by: '<S468>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_EngOffSlow_TOT_RSP =
    -5.0F;                             /* Referenced by: '<S469>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_TempLmtChng_LD = -1000.0F;/* Referenced by: '<S1001>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_T_TempLmtChng_LU = 1000.0F;/* Referenced by: '<S1002>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_U_AStrtBatModVoltHyst =
    2.0F;                              /* Referenced by: '<S284>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_U_AStrtBatPackVoltHyst =
    20.0F;                             /* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_ABCRAccPwr = 0;/* Referenced by: '<S98>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_AStrtAWDLockLowEnbl = 1;/* Referenced by: '<S980>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_AStrtHoodEnbl = 1;/* Referenced by: '<S263>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_AllowM2Autostop = 0;/* Referenced by: '<S321>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_REEVEquipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_ByPassCatWrmUpSptMd = 0;/* Referenced by: '<S966>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_BypassDrvMd_MildHyb = 0;/* Referenced by: '<S1016>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_DCOverIntgrlTmrChk = 1;/* Referenced by: '<S112>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblAStrtAWDinN = 1;/* Referenced by: '<S986>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblDCOvrldChk = 1;/* Referenced by: '<S113>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && !Rte_SysCon_Variant_STCR_REEVEquipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblDrvMd_EngOn = 0;/* Referenced by: '<S967>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblDrvMd_MildHyb = 0;/* Referenced by: '<S1017>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblManMdSoftChk = 0;/* Referenced by: '<S612>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblSlntSrtChk = 0;/* Referenced by: '<S1166>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblStressFactorChk = 0;/* Referenced by: '<S943>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblThrmlEngOnReq = 0;/* Referenced by: '<S940>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblUpShftDly = 1;/* Referenced by: '<S89>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_EnblVehSOCSoftChk = 0;/* Referenced by: '<S993>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_FtrAStpDsalwNeutEnab = 0;/* Referenced by: '<S330>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_FtrAStpDsalwPrkEnab = 0;/* Referenced by: '<S331>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_FtrAStpDsalwRevEnab = 0;/* Referenced by: '<S339>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_FtrAStpDsalwRevHoldEnab =
    0;                                 /* Referenced by: '<S340>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_FtrAStrtAStpDurRemVhEnab =
    0;                                 /* Referenced by: '<S309>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_FtrAStrtKeyFrcdEnab = 0;/* Referenced by: '<S294>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_FtrEngOnTowHaulEnab = 0;/* Referenced by: '<S972>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_GrInRngDialDev = 1;/* Referenced by: '<S85>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_PwrLimONEnbl = 0;/* Referenced by: '<S342>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_RVSAstrtOvrrd = 0;/* Referenced by: '<S1003>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_SlntStrtSoftChkDbncEnbl =
    0;                                 /* Referenced by:
                                        * '<S24>/Calib'
                                        * '<S648>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_TCMEngONEnbl = 0;/* Referenced by: '<S311>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(boolean, STCR_VAR_INIT) KeSTCR_b_UseCltchStckOnFP = 1;/* Referenced by: '<S289>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_dn_StrtNiDot = 4500.0F;/* Referenced by: '<S72>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_dn_ToAccelThresholdForDelayEngineOff = 1000.0F;/* Referenced by: '<S1098>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(uint32, STCR_VAR_INIT) KeSTCR_g_AStrtFuelOnRsn = 8191U;/* Referenced by:
                                                                      * '<S302>/Calib'
                                                                      * '<S470>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_k_APMPwrFilt = 0.1F;/* Referenced by: '<S99>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_n_AStopPrimNoMax = 4000.0F;/* Referenced by:
                                                                      * '<S1029>/Calib'
                                                                      * '<S1137>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_n_AStopPrimNoNegMax =
    -2000.0F;                          /* Referenced by:
                                        * '<S1030>/Calib'
                                        * '<S1138>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_n_AStrtPrimNoHyst = 1000.0F;/* Referenced by: '<S1031>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation = 1500.0F;/* Referenced by: '<S303>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_r_StressFactorChkMax =
    0.95F;                             /* Referenced by: '<S944>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_AStrtAWDTOffDly = 0.0F;/* Referenced by: '<S987>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_AStrtAWDTOnDly = 0.0F;/* Referenced by: '<S988>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_AStrtPN_MinTime = 9999.0F;/* Referenced by: '<S332>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_CANDlyTm = 0.12F;/* Referenced by: '<S53>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_CountDwnPropActive =
    100.0F;                            /* Referenced by: '<S1112>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_DCLoadIntgrlTmr = 1.0F;/* Referenced by: '<S114>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_DelayEngOffAtGrade = 0.0F;/* Referenced by: '<S1099>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_DelayEngOffAtGradeEVMd =
    0.0F;                              /* Referenced by: '<S1100>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_REEVEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_EngOnSportTimer = 2.0F;/* Referenced by: '<S968>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_EngSoakTime_CATWarmUp =
    1.0F;                              /* Referenced by: '<S1101>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_EngStrtTmEstMn = 0.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_IgnrBatPwrAdj = 2.0F;/* Referenced by: '<S126>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_MinTmBetweenAStop = 8.0F;/* Referenced by: '<S1102>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_MinTmBfrFirstStp_Long =
    30.0F;                             /* Referenced by: '<S1103>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_MinTmBfrFirstStp_Short =
    20.0F;                             /* Referenced by: '<S1104>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_SlntStrtSoftChkDbnc =
    0.0F;                              /* Referenced by:
                                        * '<S25>/Calib'
                                        * '<S649>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_StgcStrtMxDbncTm = 8.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_UnderVoltageHoldTm = 0.0F;/* Referenced by: '<S273>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_t_V2LEngONMin = 5.0F;/* Referenced by: '<S141>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStopLowBatSOCinNeutral =
    5.0F;                              /* Referenced by: '<S260>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStopVehSpdMax = 50.0F;/* Referenced by:
                                                                      * '<S1139>/Calib'
                                                                      * '<S1061>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStopVehSpdMaxinNeutral =
    10.0F;                             /* Referenced by:
                                        * '<S1140>/Calib'
                                        * '<S1062>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStopVehSpdNegMax =
    -20.0F;                            /* Referenced by:
                                        * '<S1141>/Calib'
                                        * '<S1063>/Calib'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStrtHoodClosedSpdHys =
    4.0F;                              /* Referenced by: '<S264>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStrtHoodOpenSpdHys =
    4.0F;                              /* Referenced by: '<S265>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStrtHoodSpdThrsh = 2.0F;/* Referenced by: '<S266>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_AStrtVehSpdHyst = 10.0F;/* Referenced by: '<S1064>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_DCOverloadSpeedHys = 5.0F;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_DCOverloadSpeedMin =
    30.0F;                             /* Referenced by: '<S116>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2p5Equipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_SailOFFSpdHys = 2.0F;/* Referenced by: '<S959>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2p5Equipd

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_SailOFFSpdThresh = 15.0F;/* Referenced by: '<S960>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_v_SpeedHysteresisForDelayEngineOff = 5.0F;/* Referenced by: '<S1105>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KeSTCR_v_SpeedThresholdForDelayEngineOff = 10.0F;/* Referenced by: '<S1106>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_StressFactorRstVehSpd =
    10.0F;                             /* Referenced by: '<S945>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_VehSpdBsdBatMaxTemp =
    10.0F;                             /* Referenced by: '<S471>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_VehSpdBsdInvrtrMaxTemp =
    10.0F;                             /* Referenced by: '<S472>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_VehSpdBsdMtrMaxTemp =
    10.0F;                             /* Referenced by: '<S473>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_VehSpdMax_MildHyb = 10.0F;/* Referenced by: '<S1018>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KeSTCR_v_VehSpdMin_MildHyb = 10.0F;/* Referenced by: '<S1019>/Calib' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_M_MtrAMinCapEngOff[4] =
{
    -10.0F, -10.0F, -10.0F, -10.0F
} ;                                    /* Referenced by: '<S305>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_Pct_AStopBatSOCHyst[15] =
{
    0.75F, 0.75F, 1.0F, 1.5F, 2.0F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F,
    0.75F, 0.75F, 0.75F, 0.75F
} ;                                    /* Referenced by: '<S1089>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KtSTCR_Pct_AStopBatSOCHyst_MildHyb[15] =
{
    0.75F, 0.75F, 1.0F, 1.5F, 2.0F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F, 0.75F,
    0.75F, 0.75F, 0.75F, 0.75F
} ;                                    /* Referenced by: '<S1047>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_T_AStopECTMin[20] =
{
    56.0F, 56.0F, 87.0F, 87.0F, 56.0F, 56.0F, 87.0F, 87.0F, 56.0F, 56.0F, 66.0F,
    66.0F, 45.0F, 45.0F, 45.0F, 45.0F, 45.0F, 45.0F, 45.0F, 45.0F
} ;                                    /* Referenced by:
                                        * '<S1032>/Vector'
                                        * '<S1142>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_T_AStopTransTempMin[8] =
{
    200.0F, 40.0F, 30.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<S1090>/Vector'
                                        * '<S1218>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_T_AStopTransTempMin_DKCrnk
    [8] =
{
    200.0F, 40.0F, 30.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S1160>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KtSTCR_T_AStopTransTempMin_MildHyb[8] =
{
    200.0F, 40.0F, 30.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<S1048>/Vector'
                                        * '<S1182>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_U_AStopBatModVoltMin[3] =
{
    7.0F, 7.0F, 7.0F
} ;                                    /* Referenced by:
                                        * '<S277>/Vector'
                                        * '<S286>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_U_AStopBatPackVoltMin[3] =
{
    250.0F, 250.0F, 250.0F
} ;                                    /* Referenced by:
                                        * '<S278>/Vector'
                                        * '<S287>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_U_SltStrtEntBatModVoltMin[3]
    =
{
    7.0F, 7.0F, 7.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_U_SltStrtEntBatPackVoltMin
    [3] =
{
    250.0F, 250.0F, 250.0F
} ;                                    /* Referenced by: '<S283>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_k_PdlBsdGain[42] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S75>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_t_MinTmBfrFirstStp[15] =
{
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S1107>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_t_SoftChkEngOnHiTm[15] =
{
    1.0F, 2.0F, 4.0F, 2.5F, 2.0F, 1.0F, 1.0F, 2.0F, 1.0F, 5.0F, 1.0F, 1.0F, 1.0F,
    0.8F, 0.5F
} ;                                    /* Referenced by: '<S659>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_t_SoftChkEngOnLowTm[15] =
{
    10.0F, 0.5F, 0.2F, 0.2F, 0.2F, 10.0F, 1.0F, 0.5F, 0.5F, 0.5F, 10.0F, 5.0F,
    3.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S660>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KtSTCR_t_UpshftMaxTm[150] =
{
    1.391F, 1.0F, 1.699F, 1.0F, 1.197F, 1.0F, 1.471F, 1.0F, 1.197F, 1.0F, 1.197F,
    1.0F, 1.197F, 1.0F, 1.0F, 1.456F, 1.0F, 1.619F, 1.0F, 1.197F, 1.0F, 1.471F,
    1.0F, 1.197F, 1.0F, 1.197F, 1.0F, 1.197F, 1.0F, 1.0F, 1.571F, 1.0F, 1.637F,
    1.0F, 1.193F, 1.0F, 1.4F, 1.0F, 1.218F, 1.0F, 1.218F, 1.0F, 1.218F, 1.0F,
    1.0F, 1.568F, 1.0F, 1.535F, 1.0F, 1.076F, 1.0F, 1.325F, 1.0F, 1.171F, 1.0F,
    1.171F, 1.0F, 1.171F, 1.0F, 1.0F, 1.49F, 1.0F, 1.584F, 1.0F, 1.165F, 1.0F,
    1.303F, 1.0F, 1.165F, 1.0F, 1.165F, 1.0F, 1.165F, 1.0F, 1.0F, 1.49F, 1.0F,
    1.584F, 1.0F, 1.165F, 1.0F, 1.303F, 1.0F, 1.165F, 1.0F, 1.165F, 1.0F, 1.165F,
    1.0F, 1.0F, 1.49F, 1.0F, 1.584F, 1.0F, 1.165F, 1.0F, 1.303F, 1.0F, 1.165F,
    1.0F, 1.165F, 1.0F, 1.165F, 1.0F, 1.0F, 1.49F, 1.0F, 1.584F, 1.0F, 1.165F,
    1.0F, 1.303F, 1.0F, 1.165F, 1.0F, 1.165F, 1.0F, 1.165F, 1.0F, 1.0F, 1.49F,
    1.0F, 1.584F, 1.0F, 1.165F, 1.0F, 1.303F, 1.0F, 1.165F, 1.0F, 1.165F, 1.0F,
    1.165F, 1.0F, 1.0F, 1.49F, 1.0F, 1.584F, 1.0F, 1.165F, 1.0F, 1.303F, 1.0F,
    1.165F, 1.0F, 1.165F, 1.0F, 1.165F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S76>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_M_MtrAMinCapEngOff[4] =
{
    -20.0F, 0.0F, 11.0F, 50.0F
} ;                                    /* Referenced by: '<S305>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_Pct_AStopBatSOCHyst[5] =
{
    0.5F, 0.75F, 1.0F, 2.0F, 3.0F
} ;                                    /* Referenced by: '<S1089>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KxSTCR_Pct_AStopBatSOCHyst_MildHyb[5] =
{
    0.5F, 0.75F, 1.0F, 2.0F, 3.0F
} ;                                    /* Referenced by: '<S1047>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_T_AStopECTMin[4] =
{
    0.0F, 210.0F, 390.0F, 600.0F
} ;                                    /* Referenced by:
                                        * '<S1032>/Vector'
                                        * '<S1142>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_T_AStopTransTempMin[8] =
{
    -40.0F, -20.0F, 0.0F, 21.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S1090>/Vector'
                                        * '<S1218>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_T_AStopTransTempMin_DKCrnk
    [8] =
{
    -40.0F, -20.0F, 0.0F, 21.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S1160>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KxSTCR_T_AStopTransTempMin_MildHyb[8] =
{
    -40.0F, -20.0F, 0.0F, 21.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S1048>/Vector'
                                        * '<S1182>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_U_AStopBatModVoltMin[3] =
{
    -40.0F, 0.0F, 100.1F
} ;                                    /* Referenced by:
                                        * '<S277>/Vector'
                                        * '<S286>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_U_AStopBatPackVoltMin[3] =
{
    -40.0F, 0.0F, 100.1F
} ;                                    /* Referenced by:
                                        * '<S278>/Vector'
                                        * '<S287>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_U_SltStrtEntBatModVoltMin[3]
    =
{
    -40.0F, 0.0F, 100.1F
} ;                                    /* Referenced by: '<S282>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_U_SltStrtEntBatPackVoltMin
    [3] =
{
    -40.0F, 0.0F, 100.1F
} ;                                    /* Referenced by: '<S283>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_k_PdlBsdGain[7] =
{
    -30.0F, -10.0F, -5.0F, 0.0F, 10.0F, 20.0F, 90.0F
} ;                                    /* Referenced by: '<S75>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_t_MinTmBfrFirstStp[5] =
{
    0.0F, 10.0F, 30.0F, 70.0F, 100.0F
} ;                                    /* Referenced by: '<S1107>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_t_SoftChkEngOnHiTm[5] =
{
    -20.0F, 0.0F, 20.1F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S659>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_t_SoftChkEngOnLowTm[5] =
{
    -20.0F, 0.0F, 20.1F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S660>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KxSTCR_t_UpshftMaxTm[15] =
{
    12.0F, 13.0F, 23.0F, 24.0F, 34.0F, 35.0F, 45.0F, 46.0F, 56.0F, 57.0F, 67.0F,
    68.0F, 78.0F, 79.0F, 89.0F
} ;                                    /* Referenced by: '<S76>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KySTCR_Pct_AStopBatSOCHyst[3] =
{
    0.05F, 3.0F, 100.0F
} ;                                    /* Referenced by: '<S1089>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT)
    KySTCR_Pct_AStopBatSOCHyst_MildHyb[3] =
{
    0.05F, 3.0F, 100.0F
} ;                                    /* Referenced by: '<S1047>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KySTCR_T_AStopECTMin[5] =
{
    -38.0F, -21.0F, 0.0F, 22.0F, 39.0F
} ;                                    /* Referenced by:
                                        * '<S1032>/Vector'
                                        * '<S1142>/Vector'
                                        */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KySTCR_k_PdlBsdGain[6] =
{
    0.0F, 375.0F, 850.0F, 1225.0F, 1350.0F, 1510.0F
} ;                                    /* Referenced by: '<S75>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KySTCR_t_MinTmBfrFirstStp[3] =
{
    0.0F, 20.0F, 25.0F
} ;                                    /* Referenced by: '<S1107>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KySTCR_t_SoftChkEngOnHiTm[3] =
{
    -50.1F, 0.0F, 50.0F
} ;                                    /* Referenced by: '<S659>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static volatile CONST(float32, STCR_VAR_INIT) KySTCR_t_SoftChkEngOnLowTm[3] =
{
    -50.1F, 0.0F, 50.0F
} ;                                    /* Referenced by: '<S660>/Vector' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

static volatile CONST(float32, STCR_VAR_INIT) KySTCR_t_UpshftMaxTm[10] =
{
    10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S76>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_STCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if !Rte_SysCon_Variant_STCR_DsblFcn

static VAR(float32, STCR_VAR_INIT) VaSTCR_t_SoftChkDbncTm[23];/* '<S682>/Gain' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static VAR(float32, STCR_VAR_INIT) VeSTCC_M_OutTorqReq;/* '<S479>/Sum5' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static VAR(float32, STCR_VAR_INIT) VeSTCR_E_DCLoadIntgrlVal;/* '<S100>/Switch1' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static VAR(float32, STCR_VAR_INIT) VeSTCR_P_AccPwrModPwrFlt;/* '<S97>/Switch1' */

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

static VAR(float32, STCR_VAR_INIT) VeSTCR_P_AdjFrmHTDR;/* '<S122>/Switch10' */

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

static VAR(float32, STCR_VAR_INIT) VeSTCR_P_DeltaOverload;/* '<S96>/Sum1' */

#endif

static VAR(float32, STCR_VAR_INIT) VeSTCR_P_PBatLTMaxHH_DS;/* '<Root>/DSM_5' */
static VAR(boolean, STCR_VAR_INIT) VeSTCR_b_SoftChkEngOnRawDbnc_DS;/* '<Root>/DSM_6' */
static VAR(uint32, STCR_VAR_INIT) VeSTCR_g_AStpInhbtRsn1_DS;/* '<Root>/DSM_3' */
static VAR(uint32, STCR_VAR_INIT) VeSTCR_g_AStpInhbtRsn2_DS;/* '<Root>/DSM_4' */
static VAR(uint32, STCR_VAR_INIT) VeSTCR_g_EVModeInhbtRsn1_DS;/* '<Root>/DSM_1' */
static VAR(uint32, STCR_VAR_INIT) VeSTCR_g_EVModeInhbtRsn2_DS;/* '<Root>/DSM_2' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_STCR
#include "MemMap.h"

CONST(ConstP_STCR_ac_T, STCR_VAR_INIT) STCR_ac_ConstP =
{

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S75>/Vector'
     */
    {
        6U, 5U
    },

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    /* Computed Parameter: Vector_maxIndex_c
     * Referenced by: '<S76>/Vector'
     */
    {
        14U, 9U
    },

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S659>/Vector'
     *   '<S660>/Vector'
     *   '<S1047>/Vector'
     *   '<S1089>/Vector'
     *   '<S1107>/Vector'
     */
    {
        4U, 2U
    },

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S1032>/Vector'
     *   '<S1142>/Vector'
     */
    {
        3U, 4U
    },

#endif

#ifndef CONSTP_STCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_STCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STCR
#include "MemMap.h"

VAR(B_STCR_ac_T, STCR_VAR_INIT) STCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STCR
#include "MemMap.h"

VAR(DW_STCR_ac_T, STCR_VAR_INIT) STCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STCR
#include "MemMap.h"

/* Forward declaration for local functions */
#if !Rte_SysCon_Variant_STCR_DsblFcn

static float32 STCR_ac_fraction(float32 Upper, float32 Lower, float32 Input);

#endif

/* Function for Chart: '<S307>/Get_Data_Indexes ' */
#if !Rte_SysCon_Variant_STCR_DsblFcn

static float32 STCR_ac_fraction(float32 Upper, float32 Lower, float32 Input)
{
    float32 g;

    /* Graphical Function 'fraction': '<S308>:1' */
    /* Transition: '<S308>:67' */
    if (Lower >= Upper)
    {
        /* Transition: '<S308>:71' */
        /* Transition: '<S308>:72' */
        g = 0.0F;

        /* Transition: '<S308>:73' */
    }
    else
    {
        /* Transition: '<S308>:12' */
        g = (Input - Lower) / (Upper - Lower);
    }

    /* Transition: '<S308>:70' */
    return g;
}

#endif

/* Model step function for TID1 */
FUNC(void, STCR_CODE) STCR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_0;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    float32 tmpRead_1;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    TeOHSR_e_RngSel tmpRead_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TePMDR_e_PowerMode tmpRead_3;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeVTXR_e_PowerPanelMd tmpRead_4;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Equal1_j;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

    float32 rtb_TmpSignalConversionAtVeAB_m;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeHTDR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_AND_e1l;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_fg2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

    float32 rtb_TmpSignalConversionAtVeC_pj;

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd

    float32 rtb_Abs_b;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VariantMergeForOutportOptEn;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VariantMergeForOutportEngDs;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    sint8 rtPrevAction;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    sint8 rtAction;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

    boolean rtb_TmpSignalConversionAtVeOHSR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

    boolean rtb_TmpSignalConversionAtVeOH_b;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

    boolean rtb_Switch1_jc;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    boolean rtb_VeSTCR_b_OptAStrtUpShift;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    boolean rtb_AND_oi;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    sint8 rtb_LeSTCR_y_TgtDiff;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    sint8 rtb_LeSTCR_y_StgcDiff;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    boolean rtb_OR1_dc;

#endif

#if !Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    float32 rtb_MinMax1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

    float32 rtb_TmpSignalConversionAtVeESPR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    float32 rtb_TmpSignalConversionAtVeTF_b;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    float32 rtb_TmpSignalConversionAtVeA_nk;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTR_c;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeSTRR_e_SilentStrtChkMod rtb_TmpSignalConversionAtVeST_c;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    TeOHSR_e_OptGear_SG rtb_TmpSignalConversionAtVeOH_m;

#endif

#if Rte_SysCon_Variant_STCR_BSGEquipd || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd)

    TeSTRR_e_HybStrtrSt rtb_TmpSignalConversionAtVeS_d5;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/STCR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeHTDR_P_PBatMaxTotAdj' */
#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* SignalConversion generated from: '<S1>/VeHTDR_P_PBatMaxTotAdj' incorporates:
     *  Inport: '<Root>/VeHTDR_P_PBatMaxTotAdj'
     */
    (void)Rte_Read_VeHTDR_P_PBatMaxTotAdj_Value(&rtb_TmpSignalConversionAtVeHTDR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_P_PBatMaxTotAdj' */

    /* SignalConversion generated from: '<S1>/VeABCR_P_HV_AccPwr' */
#if !Rte_SysCon_Variant_STCR_DsblFcn || Rte_SysCon_Variant_STCR_BSGEquipd

    /* SignalConversion generated from: '<S1>/VeABCR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value(&rtb_TmpSignalConversionAtVeAB_m);

#endif

    /* End of SignalConversion generated from: '<S1>/VeABCR_P_HV_AccPwr' */

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' */
#if Rte_SysCon_Variant_STCR_BSGEquipd

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_TmpSignalConversionAtVeC_pj);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' */

    /* SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt' */
#if Rte_SysCon_Variant_STCR_BSGEquipd || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd)

    /* SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&rtb_TmpSignalConversionAtVeS_d5);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt' */

    /* SignalConversion generated from: '<S1>/VeOHSR_b_EngOnDsrdOpt' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_b_EngDsrd'
     */
#if (!Rte_SysCon_Variant_STCR_BSGEquipd && !Rte_SysCon_Variant_STCR_DsblFcn && !Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd)

    /* SignalConversion generated from: '<S1>/VeOHSR_b_EngOnDsrdOpt' incorporates:
     *  Inport: '<Root>/VeOHSR_b_EngOnDsrdOpt'
     */
    (void)Rte_Read_VeOHSR_b_EngOnDsrdOpt_Value(&rtb_TmpSignalConversionAtVeOHSR);

    /* SignalConversion generated from: '<S1>/VeOHSR_b_EngDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_b_EngDsrd'
     */
    (void)Rte_Read_VeOHSR_b_EngDsrd_Value(&rtb_TmpSignalConversionAtVeOH_b);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOHSR_b_EngOnDsrdOpt' */

    /* SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  SignalConversion generated from: '<S1>/VeESPR_n_TCMEngSpdReq'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
     */
#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd

    /* SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_e_SGrDsrd'
     */
    (void)Rte_Read_VeOHSR_e_SGrDsrd_Value(&rtb_TmpSignalConversionAtVeOH_m);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&rtb_TmpSignalConversionAtVeTR_c);

    /* SignalConversion generated from: '<S1>/VeESPR_n_TCMEngSpdReq' incorporates:
     *  Inport: '<Root>/VeESPR_n_TCMEngSpdReq'
     */
    (void)Rte_Read_VeESPR_n_TCMEngSpdReq_Value(&rtb_TmpSignalConversionAtVeESPR);

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeA_nk);

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&rtb_TmpSignalConversionAtVeTF_b);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd' */

    /* SignalConversion generated from: '<S1>/VeSTRR_e_StrtChkMod' */
#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* SignalConversion generated from: '<S1>/VeSTRR_e_StrtChkMod' incorporates:
     *  Inport: '<Root>/VeSTRR_e_StrtChkMod'
     */
    (void)Rte_Read_VeSTRR_e_StrtChkMod_Value(&rtb_TmpSignalConversionAtVeST_c);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTRR_e_StrtChkMod' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STCC_AutoStrtStpOptmizerChk'
     */
    /* Outputs for Atomic SubSystem: '<S5>/VaSS_OptimzerChk' */
#if Rte_SysCon_Variant_STCR_DsblFcn

    /* Outputs for Atomic SubSystem: '<S10>/DsblFcn' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STCC_PowerLimits'
     */
    /* Outputs for Atomic SubSystem: '<S7>/VarSS_STCCPowerLimits' */
    /* Outputs for Atomic SubSystem: '<S120>/DsblFcn' */
    /* DataStoreWrite: '<S121>/Data Store Write' incorporates:
     *  Constant: '<S121>/Constant1'
     */
    VeSTCR_P_PBatLTMaxHH_DS = 0.0F;

    /* VariantMerge generated from: '<S120>/PBatVolt_Max' incorporates:
     *  Constant: '<S121>/Constant5'
     */
    STCR_ac_B.VeSTCR_P_PBatSTMaxHH = 0.0F;

    /* S-Function (sfix_bitop): '<S13>/FixPt Bitwise Operator5' incorporates:
     *  DataStoreRead: '<S11>/Data Store Read'
     *  DataStoreWrite: '<S11>/Dsw_PID_AStrtEntry13'
     *  S-Function (sfix_bitop): '<S13>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S13>/FixPt Bitwise Operator4'
     */
    VeSTCR_g_AStpInhbtRsn1_DS = ~((~VeSTCR_g_AStpInhbtRsn1_DS) | 1048576U);

    /* S-Function (sfix_bitop): '<S14>/FixPt Bitwise Operator5' incorporates:
     *  DataStoreRead: '<S11>/Data Store Read1'
     *  DataStoreWrite: '<S11>/Dsw_PID_AStrtEntry5'
     *  S-Function (sfix_bitop): '<S14>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S14>/FixPt Bitwise Operator4'
     */
    VeSTCR_g_EVModeInhbtRsn1_DS = ~((~VeSTCR_g_EVModeInhbtRsn1_DS) | 1048576U);

    /* VariantMerge generated from: '<S10>/EngDsrdOptToECM' incorporates:
     *  Constant: '<S11>/Constant'
     */
    STCR_ac_B.VariantMergeForOutportEngDsrdOp = false;

    /* VariantMerge generated from: '<S10>/SoftChkEngOn' incorporates:
     *  Constant: '<S11>/Constant1'
     */
    STCR_ac_B.VariantMergeForOutportSoftChk_g = false;

    /* VariantMerge generated from: '<S10>/UpShftTrg' incorporates:
     *  Constant: '<S11>/Constant2'
     */
    STCR_ac_B.VariantMergeForOutportUpShftTrg = false;

    /* VariantMerge generated from: '<S10>/OHSREngDsrdOut' incorporates:
     *  Constant: '<S11>/Constant3'
     */
    STCR_ac_B.VariantMergeForOutportOHSREngDs = false;

    /* End of Outputs for SubSystem: '<S120>/DsblFcn' */
    /* End of Outputs for SubSystem: '<S7>/VarSS_STCCPowerLimits' */
    /* End of Outputs for SubSystem: '<S10>/DsblFcn' */
#else

    /* Outputs for Atomic SubSystem: '<S10>/EnblFcn' */
    /* Outputs for Atomic SubSystem: '<S120>/EnblFcn' */
    /* Inport: '<Root>/VePMDR_e_IgnInputsPowerMode' */
    (void)Rte_Read_VePMDR_e_IgnInputsPowerMode_Value(&tmpRead_3);

    /* RelationalOperator: '<S122>/Equal1' incorporates:
     *  Constant: '<S123>/Constant'
     *  Inport: '<Root>/VePMDR_e_IgnInputsPowerMode'
     */
    rtb_Equal1_j = (((uint32)tmpRead_3) != CePMDR_e_PowerMode_Off);

    /* Outputs for Atomic SubSystem: '<S122>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising' */
    /* Logic: '<S128>/AND' incorporates:
     *  Logic: '<S128>/OR1'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    rtb_AND_e1l = (rtb_Equal1_j && (!STCR_ac_DW.UnitDelay_DSTATE_g4));

    /* Update for UnitDelay: '<S128>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_g4 = rtb_Equal1_j;

    /* End of Outputs for SubSystem: '<S127>/EdgeRising' */

    /* Switch: '<S127>/Switch1' incorporates:
     *  Logic: '<S127>/OR'
     *  Logic: '<S127>/OR1'
     */
    if ((!rtb_Equal1_j) || rtb_AND_e1l)
    {
        /* Switch: '<S127>/Switch1' incorporates:
         *  Constant: '<S127>/Constant Value1'
         */
        rtb_Switch1_fg2 = 0.0F;
    }
    else
    {
        /* Switch: '<S127>/Switch1' incorporates:
         *  Constant: '<S125>/Calib'
         *  Constant: '<S126>/Calib'
         *  MinMax: '<S127>/Minimum'
         *  Sum: '<S127>/Summation'
         *  UnitDelay: '<S127>/Unit Delay'
         */
        rtb_Switch1_fg2 = fminf(KeSTCR_t_IgnrBatPwrAdj, HeSTCR_t_MedTEB_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_es);
    }

    /* End of Switch: '<S127>/Switch1' */
    /* End of Outputs for SubSystem: '<S122>/Turn On Delay Time' */

    /* Inport: '<Root>/VeESMR_P_BattLTMaxLim' */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&tmpRead_0);

    /* Inport: '<Root>/VeESMR_P_BatEstdVoltMaxLim' */
    (void)Rte_Read_VeESMR_P_BatEstdVoltMaxLim_Value(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S122>/Turn On Delay Time' */
    /* Update for UnitDelay: '<S127>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_es = rtb_Switch1_fg2;

    /* Switch: '<S122>/Switch10' incorporates:
     *  Constant: '<S126>/Calib'
     *  Logic: '<S127>/AND'
     *  RelationalOperator: '<S127>/Greater  Than'
     */
    if (rtb_Equal1_j && (rtb_Switch1_fg2 >= KeSTCR_t_IgnrBatPwrAdj))
    {
        /* Switch: '<S122>/Switch10' */
        VeSTCR_P_AdjFrmHTDR = rtb_TmpSignalConversionAtVeHTDR;
    }
    else
    {
        /* Switch: '<S122>/Switch10' incorporates:
         *  Constant: '<S122>/Constant5'
         */
        VeSTCR_P_AdjFrmHTDR = 0.0F;
    }

    /* End of Switch: '<S122>/Switch10' */
    /* End of Outputs for SubSystem: '<S122>/Turn On Delay Time' */

    /* Sum: '<S122>/Sum3' incorporates:
     *  DataStoreWrite: '<S122>/Data Store Write'
     */
    VeSTCR_P_PBatLTMaxHH_DS = (tmpRead_0 + VeSTCR_P_AdjFrmHTDR) -
        rtb_TmpSignalConversionAtVeAB_m;

    /* VariantMerge generated from: '<S120>/PBatVolt_Max' incorporates:
     *  Sum: '<S122>/Sum4'
     */
    STCR_ac_B.VeSTCR_P_PBatSTMaxHH = (rtb_TmpSignalConversionAtVeHTDR + tmpRead)
        - rtb_TmpSignalConversionAtVeAB_m;

    /* Outputs for Atomic SubSystem: '<S12>/VarSS_UpShift' */
#if Rte_SysCon_Variant_STCR_BSGEquipd

    /* Outputs for Atomic SubSystem: '<S18>/BSG' */
    /* VariantMerge generated from: '<S10>/UpShftTrg' incorporates:
     *  Constant: '<S34>/Constant2'
     */
    STCR_ac_B.VariantMergeForOutportUpShftTrg = false;

    /* VariantMerge generated from: '<S18>/OptEngOn' incorporates:
     *  Constant: '<S34>/Constant1'
     */
    rtb_VariantMergeForOutportOptEn = false;

    /* VariantMerge generated from: '<S18>/EngDsrdOn' incorporates:
     *  Constant: '<S34>/Constant3'
     */
    rtb_VariantMergeForOutportEngDs = false;

    /* End of Outputs for SubSystem: '<S18>/BSG' */
#elif Rte_SysCon_Variant_STCR_P2Equipd

    /* Outputs for Atomic SubSystem: '<S18>/UpShft' */
    /* Inport: '<Root>/VeTRNR_b_ActualGearFA' */
    (void)Rte_Read_VeTRNR_b_ActualGearFA_Value(&rtb_VeSTCR_b_OptAStrtUpShift);

    /* Inport: '<Root>/VeTRNR_b_TargetGearFA' */
    (void)Rte_Read_VeTRNR_b_TargetGearFA_Value(&rtb_OR1_dc);

    /* Inport: '<Root>/VeOSMR_b_EnblGearSlctn' */
    (void)Rte_Read_VeOSMR_b_EnblGearSlctn_Value(&rtb_AND_oi);

    /* Inport: '<Root>/VeOHSR_e_RngDsrd' */
    (void)Rte_Read_VeOHSR_e_RngDsrd_Value(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S36>/GrsInRng' */
    /* Outputs for Atomic SubSystem: '<S42>/OpenInterval2' */
    /* Outputs for Atomic SubSystem: '<S42>/OpenInterval1' */
    /* Outputs for Atomic SubSystem: '<S42>/OpenInterval3' */
    /* Logic: '<S42>/AND1' incorporates:
     *  Constant: '<S60>/Constant'
     *  Constant: '<S61>/Constant'
     *  Constant: '<S62>/Constant'
     *  Constant: '<S63>/Constant'
     *  Constant: '<S64>/Constant'
     *  Constant: '<S65>/Constant'
     *  Logic: '<S66>/Logical Operator'
     *  Logic: '<S67>/Logical Operator'
     *  Logic: '<S68>/Logical Operator'
     *  RelationalOperator: '<S66>/Relatonal Operator'
     *  RelationalOperator: '<S66>/Relatonal Operator1'
     *  RelationalOperator: '<S67>/Relatonal Operator'
     *  RelationalOperator: '<S67>/Relatonal Operator1'
     *  RelationalOperator: '<S68>/Relatonal Operator'
     *  RelationalOperator: '<S68>/Relatonal Operator1'
     */
    rtb_Equal1_j = ((((((uint32)rtb_TmpSignalConversionAtVeTR_c) >
                       CeTRNR_e_Neutral) && (((uint32)
                        rtb_TmpSignalConversionAtVeTR_c) < CeTRNR_e_Reverse)) &&
                     ((((uint32)rtb_TmpSignalConversionAtVeTRNR) >
                       CeTRNR_e_Neutral) && (((uint32)
                        rtb_TmpSignalConversionAtVeTRNR) < CeTRNR_e_Reverse))) &&
                    ((((uint32)rtb_TmpSignalConversionAtVeOH_m) >
                      CeOHSR_e_SG_Reverse) && (((uint32)
                       rtb_TmpSignalConversionAtVeOH_m) < CeOHSR_e_SG_8)));

    /* End of Outputs for SubSystem: '<S42>/OpenInterval3' */
    /* End of Outputs for SubSystem: '<S42>/OpenInterval1' */
    /* End of Outputs for SubSystem: '<S42>/OpenInterval2' */
    /* End of Outputs for SubSystem: '<S36>/GrsInRng' */

    /* Outputs for Atomic SubSystem: '<S36>/UpShftTrgger' */
    /* Merge: '<S36>/Merge1' incorporates:
     *  Constant: '<S87>/Constant'
     *  RelationalOperator: '<S48>/Comparison2'
     *  SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt'
     */
    rtb_VariantMergeForOutportEngDs = (CeSTRR_e_EngOffSt == ((uint32)
        rtb_TmpSignalConversionAtVeS_d5));

    /* Merge: '<S36>/Merge' incorporates:
     *  Constant: '<S88>/Calib'
     *  DataTypeConversion: '<S48>/Data Type Conversion'
     *  Inport: '<Root>/VeOHSR_e_RngDsrd'
     *  Logic: '<S48>/AND8'
     *  Selector: '<S48>/Selector3'
     */
    rtb_VariantMergeForOutportOptEn = (rtb_TmpSignalConversionAtVeOHSR &&
        (KaSTCR_b_SelPrllRngSt[(tmpRead_2)]));

    /* Outputs for Atomic SubSystem: '<S36>/UpShiftValidityRequest' */
    /* Logic: '<S48>/AND4' incorporates:
     *  Logic: '<S49>/AND1'
     *  Logic: '<S49>/AND9'
     *  RelationalOperator: '<S49>/Comparison1'
     *  RelationalOperator: '<S49>/Comparison6'
     */
    rtb_VeSTCR_b_OptAStrtUpShift = ((rtb_VariantMergeForOutportOptEn &&
        (((((rtb_TmpSignalConversionAtVeOH_m > ((TeOHSR_e_OptGear_SG)
        rtb_TmpSignalConversionAtVeTR_c)) && ((!rtb_VeSTCR_b_OptAStrtUpShift) &&
        (!rtb_OR1_dc))) && rtb_AND_oi) && rtb_Equal1_j) &&
         (rtb_TmpSignalConversionAtVeTR_c == rtb_TmpSignalConversionAtVeTRNR))) &&
        rtb_VariantMergeForOutportEngDs);

    /* End of Outputs for SubSystem: '<S36>/UpShiftValidityRequest' */

    /* Outputs for Atomic SubSystem: '<S48>/EdgeRising' */
    /* Logic: '<S86>/OR1' incorporates:
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_OR1_dc = !STCR_ac_DW.VeSTCR_b_OptAStrtUpShiftOld;

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    STCR_ac_DW.VeSTCR_b_OptAStrtUpShiftOld = rtb_VeSTCR_b_OptAStrtUpShift;

    /* Outputs for Atomic SubSystem: '<S48>/Signal Latch On With Reset' */
    /* Logic: '<S90>/OR1' incorporates:
     *  Logic: '<S48>/AND12'
     *  Logic: '<S86>/AND'
     *  Logic: '<S90>/NOT'
     *  Logic: '<S90>/OR'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_VariantMergeForOutportEngDs = ((rtb_VeSTCR_b_OptAStrtUpShift &&
        rtb_OR1_dc) || ((rtb_VariantMergeForOutportEngDs &&
                         rtb_VariantMergeForOutportOptEn) &&
                        (STCR_ac_DW.UnitDelay_DSTATE_kj)));

    /* End of Outputs for SubSystem: '<S48>/EdgeRising' */

    /* Update for UnitDelay: '<S90>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_kj = rtb_VariantMergeForOutportEngDs;

    /* End of Outputs for SubSystem: '<S48>/Signal Latch On With Reset' */

    /* Logic: '<S48>/Logical12' incorporates:
     *  Constant: '<S89>/Calib'
     */
    rtb_VariantMergeForOutportEngDs = ((KeSTCR_b_EnblUpShftDly) &&
        rtb_VariantMergeForOutportEngDs);

    /* End of Outputs for SubSystem: '<S36>/UpShftTrgger' */

    /* Outputs for Atomic SubSystem: '<S36>/UpShftDtct' */
    /* Switch: '<S47>/Switch3' incorporates:
     *  Constant: '<S85>/Calib'
     */
    if (KeSTCR_b_GrInRngDialDev)
    {
        /* Switch: '<S47>/Switch3' incorporates:
         *  Logic: '<S47>/AND6'
         *  Logic: '<S47>/Logical'
         *  RelationalOperator: '<S47>/Comparison3'
         */
        rtb_VeSTCR_b_OptAStrtUpShift = ((rtb_VariantMergeForOutportEngDs &&
            (rtb_TmpSignalConversionAtVeTRNR > rtb_TmpSignalConversionAtVeTR_c))
            && rtb_Equal1_j);
    }
    else
    {
        /* Switch: '<S47>/Switch3' incorporates:
         *  Logic: '<S47>/AND6'
         *  RelationalOperator: '<S47>/Comparison3'
         */
        rtb_VeSTCR_b_OptAStrtUpShift = (rtb_VariantMergeForOutportEngDs &&
            (rtb_TmpSignalConversionAtVeTRNR > rtb_TmpSignalConversionAtVeTR_c));
    }

    /* End of Switch: '<S47>/Switch3' */
    /* End of Outputs for SubSystem: '<S36>/UpShftDtct' */

    /* Logic: '<S36>/AND6' incorporates:
     *  Logic: '<S36>/NOT'
     */
    rtb_OR1_dc = (rtb_VariantMergeForOutportEngDs &&
                  (!rtb_VeSTCR_b_OptAStrtUpShift));

    /* VariantMerge generated from: '<S10>/UpShftTrg' incorporates:
     *  Logic: '<S37>/AND'
     */
    STCR_ac_B.VariantMergeForOutportUpShftTrg = rtb_VariantMergeForOutportEngDs;

    /* Outputs for Atomic SubSystem: '<S36>/CalcGearDiff' */
    /* Switch: '<S38>/Switch5' incorporates:
     *  Logic: '<S38>/AND2'
     *  Switch: '<S38>/Switch6'
     */
    if (rtb_VariantMergeForOutportEngDs && rtb_Equal1_j)
    {
        /* Sum: '<S38>/Sum1' incorporates:
         *  DataTypeConversion: '<S38>/DataTypeConversion2'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
         */
        rtb_LeSTCR_y_TgtDiff = (sint8)(((sint8)rtb_TmpSignalConversionAtVeTRNR)
            - ((sint8)rtb_TmpSignalConversionAtVeTR_c));

        /* Outputs for Atomic SubSystem: '<S38>/Limiter' */
        /* Switch: '<S50>/Switch1' incorporates:
         *  Constant: '<S38>/Constant Value1'
         *  RelationalOperator: '<S50>/Relational Operator'
         */
        if (2 < rtb_LeSTCR_y_TgtDiff)
        {
            /* Switch: '<S50>/Switch1' */
            rtb_LeSTCR_y_TgtDiff = 2;
        }

        /* End of Switch: '<S50>/Switch1' */

        /* Switch: '<S50>/Switch' incorporates:
         *  Constant: '<S38>/Constant Value4'
         *  RelationalOperator: '<S50>/Relational Operator1'
         */
        if (rtb_LeSTCR_y_TgtDiff <= 0)
        {
            /* Switch: '<S38>/Switch5' */
            rtb_LeSTCR_y_TgtDiff = 0;
        }

        /* End of Switch: '<S50>/Switch' */
        /* End of Outputs for SubSystem: '<S38>/Limiter' */

        /* Sum: '<S38>/Sum2' incorporates:
         *  DataTypeConversion: '<S38>/DataTypeConversion2'
         *  DataTypeConversion: '<S38>/DataTypeConversion3'
         *  SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
         *  Sum: '<S38>/Sum1'
         */
        rtb_LeSTCR_y_StgcDiff = (sint8)(((sint8)rtb_TmpSignalConversionAtVeOH_m)
            - ((sint8)rtb_TmpSignalConversionAtVeTR_c));

        /* Outputs for Atomic SubSystem: '<S38>/Limiter1' */
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S38>/Constant Value3'
         *  RelationalOperator: '<S51>/Relational Operator'
         */
        if (2 < rtb_LeSTCR_y_StgcDiff)
        {
            /* Switch: '<S51>/Switch1' */
            rtb_LeSTCR_y_StgcDiff = 2;
        }

        /* End of Switch: '<S51>/Switch1' */

        /* Switch: '<S51>/Switch' incorporates:
         *  Constant: '<S38>/Constant Value6'
         *  RelationalOperator: '<S51>/Relational Operator1'
         */
        if (rtb_LeSTCR_y_StgcDiff <= 0)
        {
            /* Switch: '<S38>/Switch6' */
            rtb_LeSTCR_y_StgcDiff = 0;
        }

        /* End of Switch: '<S51>/Switch' */
        /* End of Outputs for SubSystem: '<S38>/Limiter1' */
    }
    else
    {
        /* Switch: '<S38>/Switch5' incorporates:
         *  Constant: '<S38>/Constant Value5'
         */
        rtb_LeSTCR_y_TgtDiff = 0;

        /* Switch: '<S38>/Switch6' incorporates:
         *  Constant: '<S38>/Constant Value2'
         */
        rtb_LeSTCR_y_StgcDiff = 0;
    }

    /* End of Switch: '<S38>/Switch5' */
    /* End of Outputs for SubSystem: '<S36>/CalcGearDiff' */

    /* Outputs for Atomic SubSystem: '<S36>/EdgeRising' */
    /* Logic: '<S40>/AND' incorporates:
     *  Logic: '<S40>/OR1'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    rtb_Equal1_j = (rtb_VeSTCR_b_OptAStrtUpShift &&
                    (!STCR_ac_DW.UnitDelay_DSTATE_cy));

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_cy = rtb_VeSTCR_b_OptAStrtUpShift;

    /* End of Outputs for SubSystem: '<S36>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S36>/EdgeRising1' */
    /* Logic: '<S41>/AND' incorporates:
     *  Logic: '<S41>/OR1'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    rtb_AND_oi = (rtb_OR1_dc && (!STCR_ac_DW.UnitDelay_DSTATE_p5));

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_p5 = rtb_OR1_dc;

    /* End of Outputs for SubSystem: '<S36>/EdgeRising1' */

    /* If: '<S36>/If' incorporates:
     *  Inport: '<Root>/VeHSER_dn_NiDotMaxLm'
     *  Inport: '<Root>/VeHSER_dn_NiDotMinLm'
     */
    rtPrevAction = STCR_ac_DW.If_ActiveSubsystem;
    if (rtb_VeSTCR_b_OptAStrtUpShift)
    {
        rtAction = 0;
    }
    else if (rtb_OR1_dc)
    {
        rtAction = 1;
    }
    else
    {
        rtAction = 2;
    }

    STCR_ac_DW.If_ActiveSubsystem = rtAction;
    switch (rtAction)
    {
      case 0:
        if (rtAction != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S36>/StgcStrtDbncTmRawCalc' incorporates:
             *  ActionPort: '<S46>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S46>/Turn On Delay Time with Resetable delay' */
            /* SystemReset for If: '<S36>/If' incorporates:
             *  UnitDelay: '<S83>/Unit Delay'
             *  UnitDelay: '<S84>/Unit Delay'
             */
            STCR_ac_DW.UnitDelay_DSTATE_hd = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S81>/EdgeRising with resetable delay' */
            STCR_ac_DW.UnitDelay_DSTATE_cne = false;

            /* End of SystemReset for SubSystem: '<S81>/EdgeRising with resetable delay' */
            /* End of SystemReset for SubSystem: '<S46>/Turn On Delay Time with Resetable delay' */
            /* End of SystemReset for SubSystem: '<S36>/StgcStrtDbncTmRawCalc' */
        }

        (void)Rte_Read_VeHSER_dn_NiDotMinLm_Value(&rtb_MinMax1);
        (void)Rte_Read_VeHSER_dn_NiDotMaxLm_Value(&tmpRead_1);

        /* Outputs for IfAction SubSystem: '<S36>/StgcStrtDbncTmRawCalc' incorporates:
         *  ActionPort: '<S46>/Action Port'
         */
        /* Product: '<S46>/Product2' incorporates:
         *  Constant: '<S71>/Calib'
         *  DataTypeConversion: '<S46>/DataTypeConversion6'
         *  Inport: '<Root>/VeHSER_dn_NiDotMaxLm'
         *  Inport: '<Root>/VeHSER_dn_NiDotMinLm'
         *  Lookup_n-D: '<S75>/Vector'
         *  Lookup_n-D: '<S76>/Vector'
         *  Selector: '<S46>/MxSelector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  SignalConversion generated from: '<S1>/VeESPR_n_TCMEngSpdReq'
         *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
         */
        rtb_TmpSignalConversionAtVeHTDR = look2_iflf_binlcapw
            (HaSTCR_i_UpShftIdx[(((((sint32)rtb_LeSTCR_y_TgtDiff) - 1) * 9) +
              ((sint32)rtb_TmpSignalConversionAtVeTR_c)) - 1],
             rtb_TmpSignalConversionAtVeA_nk, ((const float32 *)
              &(KxSTCR_t_UpshftMaxTm[0])), ((const float32 *)
              &(KySTCR_t_UpshftMaxTm[0])), ((const float32 *)
              &(KtSTCR_t_UpshftMaxTm[0])), STCR_ac_ConstP.Vector_maxIndex_c, 15U)
            * look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeTF_b,
            rtb_TmpSignalConversionAtVeESPR, ((const float32 *)
            &(KxSTCR_k_PdlBsdGain[0])), ((const float32 *)&(KySTCR_k_PdlBsdGain
            [0])), ((const float32 *)&(KtSTCR_k_PdlBsdGain[0])),
            STCR_ac_ConstP.Vector_maxIndex, 7U);

        /* Outputs for Atomic SubSystem: '<S46>/Limiter' */
        /* Switch: '<S77>/Switch1' incorporates:
         *  Constant: '<S74>/Calib'
         *  RelationalOperator: '<S77>/Relational Operator'
         */
        if (KeSTCR_t_StgcStrtMxDbncTm < rtb_TmpSignalConversionAtVeHTDR)
        {
            /* Switch: '<S81>/Switch1' */
            rtb_TmpSignalConversionAtVeHTDR = KeSTCR_t_StgcStrtMxDbncTm;
        }

        /* End of Switch: '<S77>/Switch1' */
        /* End of Outputs for SubSystem: '<S46>/Limiter' */

        /* MinMax: '<S46>/MinMax1' incorporates:
         *  Constant: '<S72>/Calib'
         *  MinMax: '<S46>/MinMax'
         */
        rtb_MinMax1 = fmaxf(fminf(KeSTCR_dn_StrtNiDot, tmpRead_1), rtb_MinMax1);

        /* Outputs for Atomic SubSystem: '<S46>/Protected Division' */
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S78>/Constant Value'
         *  Constant: '<S78>/Constant Value1'
         *  Constant: '<S78>/Constant Value2'
         *  Constant: '<S78>/Constant Value3'
         *  Logic: '<S78>/AND'
         *  RelationalOperator: '<S78>/Greater Than or Equal '
         *  RelationalOperator: '<S78>/Greater Than or Equal 1'
         *  RelationalOperator: '<S78>/Not Equal'
         *  RelationalOperator: '<S78>/Not Equal1'
         *  Switch: '<S78>/Switch2'
         *  Switch: '<S78>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeESPR != 0.0F) && (rtb_MinMax1 != 0.0F))
        {
            /* Switch: '<S78>/Switch1' incorporates:
             *  Product: '<S78>/Division'
             */
            rtb_TmpSignalConversionAtVeESPR /= rtb_MinMax1;
        }
        else if (rtb_TmpSignalConversionAtVeESPR > 0.0F)
        {
            /* Switch: '<S78>/Switch2' incorporates:
             *  Constant: '<S78>/MAXFLOAT'
             *  Switch: '<S78>/Switch1'
             */
            rtb_TmpSignalConversionAtVeESPR = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeESPR < 0.0F)
        {
            /* Switch: '<S78>/Switch3' incorporates:
             *  Constant: '<S78>/MINFLOAT'
             *  Switch: '<S78>/Switch1'
             *  Switch: '<S78>/Switch2'
             */
            rtb_TmpSignalConversionAtVeESPR = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S78>/Switch1' incorporates:
             *  Constant: '<S78>/Constant Value4'
             *  Switch: '<S78>/Switch2'
             *  Switch: '<S78>/Switch3'
             */
            rtb_TmpSignalConversionAtVeESPR = 0.0F;
        }

        /* End of Switch: '<S78>/Switch1' */
        /* End of Outputs for SubSystem: '<S46>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S46>/Limiter' */
        /* Switch: '<S77>/Switch' incorporates:
         *  Constant: '<S46>/Constant Value1'
         *  RelationalOperator: '<S77>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHTDR <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeHTDR = 0.0F;
        }

        /* End of Switch: '<S77>/Switch' */
        /* End of Outputs for SubSystem: '<S46>/Limiter' */

        /* Sum: '<S46>/Sum3' incorporates:
         *  Constant: '<S73>/Calib'
         *  MinMax: '<S46>/MinMax2'
         */
        rtb_TmpSignalConversionAtVeESPR = rtb_TmpSignalConversionAtVeHTDR -
            fmaxf(KeSTCR_t_EngStrtTmEstMn, rtb_TmpSignalConversionAtVeESPR);

        /* Outputs for Atomic SubSystem: '<S46>/Turn On Delay Time with Resetable delay' */
        /* Outputs for Atomic SubSystem: '<S81>/EdgeRising with resetable delay' */
        /* Switch: '<S84>/Switch1' */
        if (rtb_Equal1_j)
        {
            /* Switch: '<S84>/Switch1' incorporates:
             *  Constant: '<S82>/Constant1'
             */
            rtb_VariantMergeForOutportOptEn = true;
        }
        else
        {
            /* Switch: '<S84>/Switch1' incorporates:
             *  UnitDelay: '<S84>/Unit Delay'
             */
            rtb_VariantMergeForOutportOptEn = STCR_ac_DW.UnitDelay_DSTATE_cne;
        }

        /* End of Switch: '<S84>/Switch1' */

        /* Update for UnitDelay: '<S84>/Unit Delay' incorporates:
         *  Switch: '<S84>/Switch3'
         */
        STCR_ac_DW.UnitDelay_DSTATE_cne = (rtb_Equal1_j ||
            rtb_TmpSignalConversionAtVeOHSR);

        /* Switch: '<S81>/Switch1' incorporates:
         *  Logic: '<S81>/OR'
         *  Logic: '<S81>/OR1'
         *  Logic: '<S82>/AND'
         *  Logic: '<S82>/OR1'
         *  Switch: '<S83>/Switch1'
         */
        if ((!rtb_TmpSignalConversionAtVeOHSR) ||
                (rtb_TmpSignalConversionAtVeOHSR &&
                 (!rtb_VariantMergeForOutportOptEn)))
        {
            /* Switch: '<S81>/Switch1' incorporates:
             *  Constant: '<S81>/Constant Value1'
             */
            rtb_TmpSignalConversionAtVeHTDR = 0.0F;
        }
        else
        {
            if (rtb_Equal1_j)
            {
                /* Switch: '<S83>/Switch1' incorporates:
                 *  Constant: '<S81>/Constant1'
                 */
                rtb_TmpSignalConversionAtVeHTDR = 0.0F;
            }
            else
            {
                /* Switch: '<S83>/Switch1' incorporates:
                 *  UnitDelay: '<S83>/Unit Delay'
                 */
                rtb_TmpSignalConversionAtVeHTDR = STCR_ac_DW.UnitDelay_DSTATE_hd;
            }

            /* Switch: '<S81>/Switch1' incorporates:
             *  Constant: '<S17>/Calib'
             *  MinMax: '<S81>/Minimum'
             *  Sum: '<S81>/Summation'
             */
            rtb_TmpSignalConversionAtVeHTDR = fminf
                (rtb_TmpSignalConversionAtVeESPR, HeSTCR_t_MedTEB_dT +
                 rtb_TmpSignalConversionAtVeHTDR);
        }

        /* End of Switch: '<S81>/Switch1' */
        /* End of Outputs for SubSystem: '<S81>/EdgeRising with resetable delay' */

        /* Logic: '<S81>/AND' incorporates:
         *  RelationalOperator: '<S81>/Greater  Than'
         */
        rtb_VariantMergeForOutportOptEn = (rtb_TmpSignalConversionAtVeOHSR &&
            (rtb_TmpSignalConversionAtVeHTDR >= rtb_TmpSignalConversionAtVeESPR));

        /* Switch: '<S83>/Switch3' */
        if (rtb_Equal1_j)
        {
            /* Update for UnitDelay: '<S83>/Unit Delay' incorporates:
             *  Constant: '<S81>/Constant1'
             */
            STCR_ac_DW.UnitDelay_DSTATE_hd = 0.0F;
        }
        else
        {
            /* Update for UnitDelay: '<S83>/Unit Delay' */
            STCR_ac_DW.UnitDelay_DSTATE_hd = rtb_TmpSignalConversionAtVeHTDR;
        }

        /* End of Switch: '<S83>/Switch3' */
        /* End of Outputs for SubSystem: '<S46>/Turn On Delay Time with Resetable delay' */

        /* Merge: '<S36>/Merge1' incorporates:
         *  Gain: '<S79>/Gain'
         */
        rtb_VariantMergeForOutportEngDs = rtb_VariantMergeForOutportOptEn;

        /* End of Outputs for SubSystem: '<S36>/StgcStrtDbncTmRawCalc' */
        break;

      case 1:
        if (rtAction != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S36>/CanDelyShifTime' incorporates:
             *  ActionPort: '<S39>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S39>/Turn On Delay Time with Resetable delay' */
            /* SystemReset for If: '<S36>/If' incorporates:
             *  UnitDelay: '<S58>/Unit Delay'
             *  UnitDelay: '<S59>/Unit Delay'
             */
            STCR_ac_DW.UnitDelay_DSTATE_auq = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S56>/EdgeRising with resetable delay' */
            STCR_ac_DW.UnitDelay_DSTATE_dm4 = false;

            /* End of SystemReset for SubSystem: '<S56>/EdgeRising with resetable delay' */
            /* End of SystemReset for SubSystem: '<S39>/Turn On Delay Time with Resetable delay' */
            /* End of SystemReset for SubSystem: '<S36>/CanDelyShifTime' */
        }

        /* Outputs for IfAction SubSystem: '<S36>/CanDelyShifTime' incorporates:
         *  ActionPort: '<S39>/Action Port'
         */
        /* Switch: '<S39>/Switch3' incorporates:
         *  Constant: '<S52>/Calib'
         *  DataTypeConversion: '<S39>/DataTypeConversion6'
         *  Selector: '<S39>/Selector'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
         */
        if (KaSTCR_b_SelCANDly[(10 * ((sint32)rtb_LeSTCR_y_StgcDiff)) + ((sint32)
                rtb_TmpSignalConversionAtVeTR_c)])
        {
            /* Switch: '<S39>/Switch3' incorporates:
             *  Constant: '<S53>/Calib'
             */
            rtb_TmpSignalConversionAtVeESPR = KeSTCR_t_CANDlyTm;
        }
        else
        {
            /* Switch: '<S39>/Switch3' incorporates:
             *  Constant: '<S39>/Constant Value1'
             */
            rtb_TmpSignalConversionAtVeESPR = 0.0F;
        }

        /* End of Switch: '<S39>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S39>/Turn On Delay Time with Resetable delay' */
        /* Outputs for Atomic SubSystem: '<S56>/EdgeRising with resetable delay' */
        /* Switch: '<S59>/Switch1' */
        if (rtb_AND_oi)
        {
            /* Switch: '<S59>/Switch1' incorporates:
             *  Constant: '<S57>/Constant1'
             */
            rtb_VariantMergeForOutportOptEn = true;
        }
        else
        {
            /* Switch: '<S59>/Switch1' incorporates:
             *  UnitDelay: '<S59>/Unit Delay'
             */
            rtb_VariantMergeForOutportOptEn = STCR_ac_DW.UnitDelay_DSTATE_dm4;
        }

        /* End of Switch: '<S59>/Switch1' */

        /* Update for UnitDelay: '<S59>/Unit Delay' incorporates:
         *  Switch: '<S59>/Switch3'
         */
        STCR_ac_DW.UnitDelay_DSTATE_dm4 = (rtb_AND_oi ||
            rtb_TmpSignalConversionAtVeOHSR);

        /* Switch: '<S56>/Switch1' incorporates:
         *  Logic: '<S56>/OR'
         *  Logic: '<S56>/OR1'
         *  Logic: '<S57>/AND'
         *  Logic: '<S57>/OR1'
         *  Switch: '<S58>/Switch1'
         */
        if ((!rtb_TmpSignalConversionAtVeOHSR) ||
                (rtb_TmpSignalConversionAtVeOHSR &&
                 (!rtb_VariantMergeForOutportOptEn)))
        {
            /* Switch: '<S56>/Switch1' incorporates:
             *  Constant: '<S56>/Constant Value1'
             */
            rtb_MinMax1 = 0.0F;
        }
        else
        {
            if (rtb_AND_oi)
            {
                /* Switch: '<S58>/Switch1' incorporates:
                 *  Constant: '<S56>/Constant1'
                 */
                rtb_TmpSignalConversionAtVeHTDR = 0.0F;
            }
            else
            {
                /* Switch: '<S58>/Switch1' incorporates:
                 *  UnitDelay: '<S58>/Unit Delay'
                 */
                rtb_TmpSignalConversionAtVeHTDR =
                    STCR_ac_DW.UnitDelay_DSTATE_auq;
            }

            /* Switch: '<S56>/Switch1' incorporates:
             *  Constant: '<S17>/Calib'
             *  MinMax: '<S56>/Minimum'
             *  Sum: '<S56>/Summation'
             */
            rtb_MinMax1 = fminf(rtb_TmpSignalConversionAtVeESPR,
                                HeSTCR_t_MedTEB_dT +
                                rtb_TmpSignalConversionAtVeHTDR);
        }

        /* End of Switch: '<S56>/Switch1' */
        /* End of Outputs for SubSystem: '<S56>/EdgeRising with resetable delay' */

        /* Logic: '<S56>/AND' incorporates:
         *  RelationalOperator: '<S56>/Greater  Than'
         */
        rtb_VariantMergeForOutportEngDs = (rtb_TmpSignalConversionAtVeOHSR &&
            (rtb_MinMax1 >= rtb_TmpSignalConversionAtVeESPR));

        /* Switch: '<S58>/Switch3' */
        if (rtb_AND_oi)
        {
            /* Update for UnitDelay: '<S58>/Unit Delay' incorporates:
             *  Constant: '<S56>/Constant1'
             */
            STCR_ac_DW.UnitDelay_DSTATE_auq = 0.0F;
        }
        else
        {
            /* Update for UnitDelay: '<S58>/Unit Delay' */
            STCR_ac_DW.UnitDelay_DSTATE_auq = rtb_MinMax1;
        }

        /* End of Switch: '<S58>/Switch3' */
        /* End of Outputs for SubSystem: '<S39>/Turn On Delay Time with Resetable delay' */

        /* Merge: '<S36>/Merge' incorporates:
         *  Gain: '<S54>/Gain'
         */
        rtb_VariantMergeForOutportOptEn = rtb_VariantMergeForOutportEngDs;

        /* End of Outputs for SubSystem: '<S36>/CanDelyShifTime' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S36>/NoDelay' incorporates:
         *  ActionPort: '<S43>/Action Port'
         */
        /* Merge: '<S36>/Merge' incorporates:
         *  Gain: '<S69>/Gain'
         */
        rtb_VariantMergeForOutportOptEn = rtb_TmpSignalConversionAtVeOHSR;

        /* Merge: '<S36>/Merge1' incorporates:
         *  Gain: '<S70>/Gain'
         */
        rtb_VariantMergeForOutportEngDs = rtb_TmpSignalConversionAtVeOH_b;

        /* End of Outputs for SubSystem: '<S36>/NoDelay' */
        break;
    }

    /* End of If: '<S36>/If' */
    /* End of Outputs for SubSystem: '<S18>/UpShft' */
#else

    /* Outputs for Atomic SubSystem: '<S18>/NoUpShft' */
    /* VariantMerge generated from: '<S10>/UpShftTrg' incorporates:
     *  Constant: '<S35>/Constant2'
     */
    STCR_ac_B.VariantMergeForOutportUpShftTrg = false;

    /* VariantMerge generated from: '<S18>/OptEngOn' incorporates:
     *  Inport: '<S35>/VeOHSR_b_EngOnDsrdOpt'
     */
    rtb_VariantMergeForOutportOptEn = rtb_TmpSignalConversionAtVeOHSR;

    /* VariantMerge generated from: '<S18>/EngDsrdOn' incorporates:
     *  Inport: '<S35>/VeOHSR_b_EngDsrd'
     */
    rtb_VariantMergeForOutportEngDs = rtb_TmpSignalConversionAtVeOH_b;

    /* End of Outputs for SubSystem: '<S18>/NoUpShft' */
#endif

    /* End of Outputs for SubSystem: '<S12>/VarSS_UpShift' */

    /* Outputs for Atomic SubSystem: '<S12>/Final' */
    /* RelationalOperator: '<S16>/Comparison4' incorporates:
     *  Constant: '<S23>/Constant'
     *  SignalConversion generated from: '<S1>/VeSTRR_e_StrtChkMod'
     */
    rtb_TmpSignalConversionAtVeOHSR = (CeSTRR_e_SilentStrtEntry == ((uint32)
        rtb_TmpSignalConversionAtVeST_c));

    /* Outputs for Atomic SubSystem: '<S16>/SilentStartOHSREngOnDbnc' */
    /* Outputs for Atomic SubSystem: '<S26>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S29>/EdgeFalling1' */
    /* Logic: '<S30>/AND' incorporates:
     *  Logic: '<S30>/OR1'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOH_b = ((!rtb_TmpSignalConversionAtVeOHSR) &&
        (STCR_ac_DW.UnitDelay_DSTATE_cs));

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_cs = rtb_TmpSignalConversionAtVeOHSR;

    /* End of Outputs for SubSystem: '<S29>/EdgeFalling1' */

    /* Switch: '<S29>/Switch' */
    if (rtb_TmpSignalConversionAtVeOH_b)
    {
        /* Switch: '<S29>/Switch' incorporates:
         *  Constant: '<S25>/Calib'
         */
        rtb_TmpSignalConversionAtVeESPR = KeSTCR_t_SlntStrtSoftChkDbnc;
    }
    else
    {
        /* Switch: '<S29>/Switch' incorporates:
         *  Constant: '<S17>/Calib'
         *  Constant: '<S29>/Constant Value1'
         *  MinMax: '<S29>/Minimum'
         *  Sum: '<S29>/Summation'
         *  UnitDelay: '<S29>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeESPR = fmaxf(STCR_ac_DW.UnitDelay_DSTATE_dc -
            HeSTCR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S29>/Switch' */

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_dc = rtb_TmpSignalConversionAtVeESPR;

    /* End of Outputs for SubSystem: '<S26>/Turn Off Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S16>/SilentStartOptEngOnDbnc' */
    /* Logic: '<S26>/Logical12' incorporates:
     *  Constant: '<S24>/Calib'
     *  Logic: '<S27>/Logical12'
     */
    rtb_Equal1_j = !KeSTCR_b_SlntStrtSoftChkDbncEnbl;

    /* End of Outputs for SubSystem: '<S16>/SilentStartOptEngOnDbnc' */

    /* Outputs for Atomic SubSystem: '<S26>/Turn Off Delay Time1' */
    /* VariantMerge generated from: '<S10>/OHSREngDsrdOut' incorporates:
     *  Constant: '<S29>/Constant Value2'
     *  Logic: '<S26>/Logical12'
     *  Logic: '<S29>/AND'
     *  RelationalOperator: '<S29>/Greater  Than'
     *  Switch: '<S28>/Switch1'
     */
    STCR_ac_B.VariantMergeForOutportOHSREngDs = ((rtb_Equal1_j ||
        ((!rtb_TmpSignalConversionAtVeOHSR) && (rtb_TmpSignalConversionAtVeESPR <=
        0.0F))) && rtb_VariantMergeForOutportEngDs);

    /* End of Outputs for SubSystem: '<S26>/Turn Off Delay Time1' */
    /* End of Outputs for SubSystem: '<S16>/SilentStartOHSREngOnDbnc' */

    /* Outputs for Atomic SubSystem: '<S16>/SilentStartOptEngOnDbnc' */
    /* Outputs for Atomic SubSystem: '<S27>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S32>/EdgeFalling1' */
    /* Logic: '<S33>/OR1' incorporates:
     *  Logic: '<S32>/AND'
     */
    rtb_VariantMergeForOutportEngDs = !rtb_TmpSignalConversionAtVeOHSR;

    /* Logic: '<S33>/AND' incorporates:
     *  Logic: '<S33>/OR1'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOH_b = (rtb_VariantMergeForOutportEngDs &&
        (STCR_ac_DW.UnitDelay_DSTATE_as));

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_as = rtb_TmpSignalConversionAtVeOHSR;

    /* End of Outputs for SubSystem: '<S32>/EdgeFalling1' */

    /* Switch: '<S32>/Switch' */
    if (rtb_TmpSignalConversionAtVeOH_b)
    {
        /* Switch: '<S32>/Switch' incorporates:
         *  Constant: '<S25>/Calib'
         */
        rtb_TmpSignalConversionAtVeESPR = KeSTCR_t_SlntStrtSoftChkDbnc;
    }
    else
    {
        /* Switch: '<S32>/Switch' incorporates:
         *  Constant: '<S17>/Calib'
         *  Constant: '<S32>/Constant Value1'
         *  MinMax: '<S32>/Minimum'
         *  Sum: '<S32>/Summation'
         *  UnitDelay: '<S32>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeESPR = fmaxf(STCR_ac_DW.UnitDelay_DSTATE_aq -
            HeSTCR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S32>/Switch' */
    /* End of Outputs for SubSystem: '<S27>/Turn Off Delay Time1' */
    /* End of Outputs for SubSystem: '<S16>/SilentStartOptEngOnDbnc' */
    /* End of Outputs for SubSystem: '<S12>/Final' */

    /* Inport: '<Root>/VeSTRR_b_EngOffAllowed' */
    (void)Rte_Read_VeSTRR_b_EngOffAllowed_Value(&rtb_Switch1_jc);

    /* Outputs for Atomic SubSystem: '<S12>/Final' */
    /* Outputs for Atomic SubSystem: '<S16>/SilentStartOptEngOnDbnc' */
    /* Outputs for Atomic SubSystem: '<S27>/Turn Off Delay Time1' */
    /* Update for UnitDelay: '<S32>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_aq = rtb_TmpSignalConversionAtVeESPR;

    /* VariantMerge generated from: '<S10>/EngDsrdOptToECM' incorporates:
     *  Constant: '<S32>/Constant Value2'
     *  Logic: '<S27>/Logical12'
     *  Logic: '<S32>/AND'
     *  RelationalOperator: '<S32>/Greater  Than'
     *  Switch: '<S31>/Switch1'
     */
    STCR_ac_B.VariantMergeForOutportEngDsrdOp = ((rtb_Equal1_j ||
        (rtb_VariantMergeForOutportEngDs && (rtb_TmpSignalConversionAtVeESPR <=
        0.0F))) && rtb_VariantMergeForOutportOptEn);

    /* End of Outputs for SubSystem: '<S27>/Turn Off Delay Time1' */
    /* End of Outputs for SubSystem: '<S16>/SilentStartOptEngOnDbnc' */
    /* End of Outputs for SubSystem: '<S12>/Final' */

    /* Outputs for Atomic SubSystem: '<S12>/AStpInhibitRsns' */
    /* Switch: '<S15>/Switch13' incorporates:
     *  DataStoreRead: '<S15>/Dsr_PID_AStrtEntry15'
     *  DataStoreRead: '<S15>/Dsr_PID_AStrtEntry16'
     *  DataStoreRead: '<S15>/Dsr_PID_AStrtEntry25'
     *  DataStoreRead: '<S15>/Dsr_PID_AStrtEntry26'
     *  DataStoreWrite: '<S15>/Dsw_PID_AStrtEntry13'
     *  DataStoreWrite: '<S15>/Dsw_PID_AStrtEntry5'
     *  Logic: '<S15>/Logical4'
     *  Logic: '<S15>/Logical5'
     *  S-Function (sfix_bitop): '<S19>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S19>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S19>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S20>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S20>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S20>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S21>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S22>/FixPt Bitwise Operator1'
     *  Switch: '<S15>/Switch1'
     */
    if ((STCR_ac_B.VariantMergeForOutportEngDsrdOp) ||
            ((STCR_ac_B.VariantMergeForOutportOHSREngDs) && rtb_Switch1_jc))
    {
        VeSTCR_g_AStpInhbtRsn1_DS = VeSTCR_g_AStpInhbtRsn1_DS | 1048576U;
        VeSTCR_g_EVModeInhbtRsn1_DS = VeSTCR_g_EVModeInhbtRsn1_DS | 1048576U;
    }
    else
    {
        VeSTCR_g_AStpInhbtRsn1_DS = ~((~VeSTCR_g_AStpInhbtRsn1_DS) | 1048576U);
        VeSTCR_g_EVModeInhbtRsn1_DS = ~((~VeSTCR_g_EVModeInhbtRsn1_DS) |
            1048576U);
    }

    /* End of Switch: '<S15>/Switch13' */
    /* End of Outputs for SubSystem: '<S12>/AStpInhibitRsns' */

    /* VariantMerge generated from: '<S10>/SoftChkEngOn' incorporates:
     *  DataStoreRead: '<S12>/Data Store Read1'
     *  Logic: '<S12>/Logical11'
     */
    STCR_ac_B.VariantMergeForOutportSoftChk_g =
        ((STCR_ac_B.VariantMergeForOutportOHSREngDs) ||
         (VeSTCR_b_SoftChkEngOnRawDbnc_DS));

    /* End of Outputs for SubSystem: '<S120>/EnblFcn' */
    /* End of Outputs for SubSystem: '<S10>/EnblFcn' */
#endif

    /* End of Outputs for SubSystem: '<S5>/VaSS_OptimzerChk' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STCC_DCOvrldCnfg'
     */
    /* Outputs for Atomic SubSystem: '<S6>/VarSS_DC_Ovrld' */
#if Rte_SysCon_Variant_STCR_BSGEquipd

    /* Outputs for Atomic SubSystem: '<S92>/BSG' */
    /* Inport: '<Root>/VeHVTR_P_AccPwrModPwrRaw' */
    (void)Rte_Read_VeHVTR_P_AccPwrModPwrRaw_Value(&rtb_Abs_b);

    /* Outputs for Atomic SubSystem: '<S95>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S97>/Switch2' incorporates:
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeESPR = STCR_ac_DW.UnitDelay_DSTATE_abu;

    /* Switch: '<S97>/Switch1' incorporates:
     *  Constant: '<S99>/Calib'
     *  Product: '<S97>/Multiplication'
     *  Sum: '<S97>/Subtraction'
     *  Sum: '<S97>/Summation'
     */
    VeSTCR_P_AccPwrModPwrFlt = ((rtb_Abs_b - rtb_TmpSignalConversionAtVeESPR) *
        KeSTCR_k_APMPwrFilt) + rtb_TmpSignalConversionAtVeESPR;

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_abu = VeSTCR_P_AccPwrModPwrFlt;

    /* End of Outputs for SubSystem: '<S95>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S95>/Switch' incorporates:
     *  Constant: '<S98>/Calib'
     */
    if (!KeSTCR_b_ABCRAccPwr)
    {
        /* Switch: '<S95>/Switch' */
        rtb_TmpSignalConversionAtVeAB_m = VeSTCR_P_AccPwrModPwrFlt;
    }

    /* End of Switch: '<S95>/Switch' */

    /* Outputs for Atomic SubSystem: '<S93>/STCC_DCOvrldEngON' */
    /* Abs: '<S96>/Abs' */
    rtb_Abs_b = fabsf(rtb_TmpSignalConversionAtVeC_pj);

    /* Sum: '<S96>/Sum1' incorporates:
     *  Constant: '<S109>/Calib'
     */
    VeSTCR_P_DeltaOverload = rtb_TmpSignalConversionAtVeAB_m -
        KeSTCR_P_AStrtDCOverloadThrs;

    /* Outputs for Atomic SubSystem: '<S96>/Hysteresis1' */
    /* Switch: '<S107>/Switch1' incorporates:
     *  Constant: '<S111>/Calib'
     *  RelationalOperator: '<S107>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeAB_m > KeSTCR_P_DCLoadIntrglONThres)
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S107>/Constant Value'
         */
        rtb_Switch1_jc = true;
    }
    else
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  RelationalOperator: '<S107>/Greater  Than1'
         *  UnitDelay: '<S107>/Unit Delay'
         */
        rtb_Switch1_jc = ((rtb_TmpSignalConversionAtVeAB_m >=
                           KeSTCR_P_DCLoadIntrglOFFThres) &&
                          (STCR_ac_DW.UnitDelay_DSTATE_li));
    }

    /* End of Switch: '<S107>/Switch1' */

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_li = rtb_Switch1_jc;

    /* End of Outputs for SubSystem: '<S96>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S96>/EdgeRising1' */
    /* Logic: '<S102>/AND' incorporates:
     *  Logic: '<S102>/OR1'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOHSR = (rtb_Switch1_jc &&
        (!STCR_ac_DW.UnitDelay_DSTATE_pv));

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pv = rtb_Switch1_jc;

    /* End of Outputs for SubSystem: '<S96>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S96>/EdgeRising' */
    /* Logic: '<S101>/OR1' incorporates:
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOH_b = !STCR_ac_DW.UnitDelay_DSTATE_jyv;

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jyv = rtb_Switch1_jc;

    /* Outputs for Atomic SubSystem: '<S96>/Stop Watch Reset Enabled' */
    /* Switch: '<S118>/Switch1' incorporates:
     *  Constant: '<S114>/Calib'
     *  Logic: '<S101>/AND'
     *  Logic: '<S96>/Logical6'
     *  RelationalOperator: '<S96>/Greater Than or Equal 5'
     *  Switch: '<S118>/Switch2'
     *  UnitDelay: '<S96>/Unit Delay1'
     */
    if (rtb_Switch1_jc && rtb_TmpSignalConversionAtVeOH_b)
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S118>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeC_pj = 0.0F;
    }
    else if ((STCR_ac_DW.VeSTCR_t_DCLoadIntgrlTmr < KeSTCR_t_DCLoadIntgrlTmr) &&
             rtb_Switch1_jc)
    {
        /* Switch: '<S118>/Switch2' incorporates:
         *  Constant: '<S105>/Calib'
         *  Sum: '<S118>/Subtraction'
         *  Switch: '<S118>/Switch1'
         *  UnitDelay: '<S118>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeC_pj = HeSTCR_t_MedTEB_dT +
            STCR_ac_DW.UnitDelay_DSTATE_np;
    }
    else
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Switch: '<S118>/Switch2'
         *  UnitDelay: '<S118>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeC_pj = STCR_ac_DW.UnitDelay_DSTATE_np;
    }

    /* End of Switch: '<S118>/Switch1' */
    /* End of Outputs for SubSystem: '<S96>/EdgeRising' */

    /* Update for UnitDelay: '<S118>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_np = rtb_TmpSignalConversionAtVeC_pj;

    /* End of Outputs for SubSystem: '<S96>/Stop Watch Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S96>/Hysteresis' */
    /* Switch: '<S106>/Switch1' incorporates:
     *  Constant: '<S115>/Calib'
     *  Constant: '<S116>/Calib'
     *  RelationalOperator: '<S106>/Greater  Than'
     *  Sum: '<S96>/Sum2'
     */
    if (rtb_Abs_b > (KeSTCR_v_DCOverloadSpeedMin + KeSTCR_v_DCOverloadSpeedHys))
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  Constant: '<S106>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeOH_b = true;
    }
    else
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  RelationalOperator: '<S106>/Greater  Than1'
         *  UnitDelay: '<S106>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeOH_b = ((rtb_Abs_b >=
            KeSTCR_v_DCOverloadSpeedMin) && (STCR_ac_DW.UnitDelay_DSTATE_d3));
    }

    /* End of Switch: '<S106>/Switch1' */

    /* Update for UnitDelay: '<S106>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_d3 = rtb_TmpSignalConversionAtVeOH_b;

    /* End of Outputs for SubSystem: '<S96>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S96>/Accumulator Reset Enabled Limited' */
    /* Switch: '<S100>/Switch1' incorporates:
     *  Constant: '<S112>/Calib'
     *  Constant: '<S114>/Calib'
     *  Logic: '<S96>/Logical1'
     *  Logic: '<S96>/Logical2'
     *  Logic: '<S96>/Logical4'
     *  RelationalOperator: '<S96>/Greater Than or Equal 4'
     *  Switch: '<S100>/Switch2'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeOHSR || (((KeSTCR_b_DCOverIntgrlTmrChk) && (
            !STCR_ac_DW.VeSTCR_b_DCOverload)) &&
            (rtb_TmpSignalConversionAtVeC_pj >= KeSTCR_t_DCLoadIntgrlTmr))) ||
            rtb_TmpSignalConversionAtVeOH_b)
    {
        /* Switch: '<S100>/Switch1' incorporates:
         *  Constant: '<S96>/Constant Value1'
         */
        VeSTCR_E_DCLoadIntgrlVal = 0.0F;
    }
    else if (rtb_Switch1_jc)
    {
        /* Sum: '<S100>/Summation' incorporates:
         *  Constant: '<S105>/Calib'
         *  Product: '<S96>/Product'
         *  Switch: '<S100>/Switch2'
         *  UnitDelay: '<S100>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAB_m = (VeSTCR_P_DeltaOverload *
            HeSTCR_t_MedTEB_dT) + STCR_ac_DW.UnitDelay_DSTATE_hz;

        /* Outputs for Atomic SubSystem: '<S100>/Limiter' */
        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S108>/Calib'
         *  RelationalOperator: '<S119>/Relational Operator'
         *  Switch: '<S100>/Switch2'
         */
        if (KeSTCR_E_DCLoadIntgrlVal < rtb_TmpSignalConversionAtVeAB_m)
        {
            /* Switch: '<S119>/Switch1' */
            rtb_TmpSignalConversionAtVeAB_m = KeSTCR_E_DCLoadIntgrlVal;
        }

        /* End of Switch: '<S119>/Switch1' */

        /* Switch: '<S119>/Switch' incorporates:
         *  Constant: '<S96>/Constant Value2'
         *  RelationalOperator: '<S119>/Relational Operator1'
         *  Switch: '<S100>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVeAB_m > 0.0F)
        {
            /* Switch: '<S100>/Switch1' incorporates:
             *  Switch: '<S100>/Switch2'
             */
            VeSTCR_E_DCLoadIntgrlVal = rtb_TmpSignalConversionAtVeAB_m;
        }
        else
        {
            /* Switch: '<S100>/Switch1' incorporates:
             *  Switch: '<S100>/Switch2'
             */
            VeSTCR_E_DCLoadIntgrlVal = 0.0F;
        }

        /* End of Switch: '<S119>/Switch' */
        /* End of Outputs for SubSystem: '<S100>/Limiter' */
    }
    else
    {
        /* Switch: '<S100>/Switch1' incorporates:
         *  Switch: '<S100>/Switch2'
         *  UnitDelay: '<S100>/Unit Delay'
         */
        VeSTCR_E_DCLoadIntgrlVal = STCR_ac_DW.UnitDelay_DSTATE_hz;
    }

    /* End of Switch: '<S100>/Switch1' */

    /* Update for UnitDelay: '<S100>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_hz = VeSTCR_E_DCLoadIntgrlVal;

    /* End of Outputs for SubSystem: '<S96>/Accumulator Reset Enabled Limited' */

    /* RelationalOperator: '<S96>/Greater Than or Equal 3' incorporates:
     *  Constant: '<S108>/Calib'
     */
    rtb_Switch1_jc = (VeSTCR_E_DCLoadIntgrlVal == KeSTCR_E_DCLoadIntgrlVal);

    /* Outputs for Atomic SubSystem: '<S96>/Signal Latch On With Reset' */
    /* Logic: '<S117>/OR1' incorporates:
     *  Logic: '<S117>/NOT'
     *  Logic: '<S117>/OR'
     *  UnitDelay: '<S117>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOHSR = (rtb_Switch1_jc ||
        ((!rtb_TmpSignalConversionAtVeOH_b) && (STCR_ac_DW.UnitDelay_DSTATE_lm)));

    /* Update for UnitDelay: '<S117>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_lm = rtb_TmpSignalConversionAtVeOHSR;

    /* End of Outputs for SubSystem: '<S96>/Signal Latch On With Reset' */

    /* VariantMerge generated from: '<S92>/DCOvrld_EngOn' incorporates:
     *  Constant: '<S103>/Constant'
     *  Constant: '<S104>/Constant'
     *  Constant: '<S113>/Calib'
     *  Logic: '<S96>/Logical21'
     *  Logic: '<S96>/Logical5'
     *  RelationalOperator: '<S96>/Greater Than or Equal 1'
     *  RelationalOperator: '<S96>/Greater Than or Equal 2'
     */
    STCR_ac_B.VariantMergeForOutportDCOvrld_E =
        ((rtb_TmpSignalConversionAtVeOHSR && ((CeSTRR_e_EngStartingSt ==
            ((uint32)rtb_TmpSignalConversionAtVeS_d5)) || (((uint32)
             rtb_TmpSignalConversionAtVeS_d5) == CeSTRR_e_EngRunningSt))) &&
         (KeSTCR_b_EnblDCOvrldChk));

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    STCR_ac_DW.VeSTCR_b_DCOverload = rtb_Switch1_jc;

    /* Update for UnitDelay: '<S96>/Unit Delay1' */
    STCR_ac_DW.VeSTCR_t_DCLoadIntgrlTmr = rtb_TmpSignalConversionAtVeC_pj;

    /* End of Outputs for SubSystem: '<S93>/STCC_DCOvrldEngON' */
    /* End of Outputs for SubSystem: '<S92>/BSG' */
#else

    /* Outputs for Atomic SubSystem: '<S92>/Non_BSG' */
    /* VariantMerge generated from: '<S92>/DCOvrld_EngOn' incorporates:
     *  Constant: '<S94>/FALSE Constant3'
     */
    STCR_ac_B.VariantMergeForOutportDCOvrld_E = false;

    /* End of Outputs for SubSystem: '<S92>/Non_BSG' */
#endif

    /* End of Outputs for SubSystem: '<S6>/VarSS_DC_Ovrld' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/V2L_PowerPanel'
     */
    /* Outputs for Atomic SubSystem: '<S9>/VarSS_PowerPanel' */
#if Rte_SysCon_Variant_STCR_DsblFcn

    /* Outputs for Atomic SubSystem: '<S129>/DsblFcn' */
    /* S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator5' incorporates:
     *  DataStoreRead: '<S130>/Dsr_PID_AStrtEntry1'
     *  DataStoreWrite: '<S130>/Dsw_PID_AStrtEntry13'
     *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator4'
     */
    VeSTCR_g_AStpInhbtRsn2_DS = ~((~VeSTCR_g_AStpInhbtRsn2_DS) | 1073741824U);

    /* S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator5' incorporates:
     *  DataStoreRead: '<S130>/Dsr_PID_AStrtEntry3'
     *  DataStoreWrite: '<S130>/Dsw_PID_AStrtEntry5'
     *  S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator4'
     */
    VeSTCR_g_EVModeInhbtRsn2_DS = ~((~VeSTCR_g_AStpInhbtRsn2_DS) | 1073741824U);

    /* VariantMerge generated from: '<S129>/V2L_EngON' incorporates:
     *  Constant: '<S130>/Constant'
     */
    STCR_ac_B.VariantMergeForOutportV2L_EngON = false;

    /* End of Outputs for SubSystem: '<S129>/DsblFcn' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#else

    /* Outputs for Atomic SubSystem: '<S129>/EnblFcn' */
    /* Inport: '<Root>/VeVTXR_e_PowerPanelMd' */
    (void)Rte_Read_VeVTXR_e_PowerPanelMd_Value(&tmpRead_4);

    /* RelationalOperator: '<S131>/Comparison4' incorporates:
     *  Constant: '<S139>/Constant'
     *  Inport: '<Root>/VeVTXR_e_PowerPanelMd'
     */
    rtb_Switch1_jc = (((uint32)tmpRead_4) == CeVTXR_e_HybridMd);

    /* Outputs for Atomic SubSystem: '<S131>/EdgeRising' */
    /* Logic: '<S138>/OR1' incorporates:
     *  UnitDelay: '<S138>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOHSR = !STCR_ac_DW.UnitDelay_DSTATE_ms;

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ms = rtb_Switch1_jc;

    /* Outputs for Atomic SubSystem: '<S131>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S142>/Switch1' incorporates:
     *  Logic: '<S138>/AND'
     *  Switch: '<S142>/Switch2'
     */
    if (rtb_Switch1_jc && rtb_TmpSignalConversionAtVeOHSR)
    {
        /* Switch: '<S142>/Switch1' incorporates:
         *  Constant: '<S141>/Calib'
         */
        rtb_TmpSignalConversionAtVeC_pj = KeSTCR_t_V2LEngONMin;
    }
    else if (rtb_Switch1_jc)
    {
        /* Switch: '<S142>/Switch2' incorporates:
         *  Constant: '<S140>/Calib'
         *  Constant: '<S142>/Constant Value4'
         *  MinMax: '<S142>/Maximum'
         *  Sum: '<S142>/Subtraction'
         *  Switch: '<S142>/Switch1'
         *  UnitDelay: '<S142>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeC_pj = fmaxf(STCR_ac_DW.UnitDelay_DSTATE_ab -
            HeSTCR_t_MedTEB_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S142>/Switch1' incorporates:
         *  Switch: '<S142>/Switch2'
         *  UnitDelay: '<S142>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeC_pj = STCR_ac_DW.UnitDelay_DSTATE_ab;
    }

    /* End of Switch: '<S142>/Switch1' */
    /* End of Outputs for SubSystem: '<S131>/EdgeRising' */

    /* Update for UnitDelay: '<S142>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ab = rtb_TmpSignalConversionAtVeC_pj;

    /* VariantMerge generated from: '<S129>/V2L_EngON' incorporates:
     *  Constant: '<S142>/Constant Value2'
     *  Logic: '<S131>/Logical'
     *  RelationalOperator: '<S142>/Greater  Than1'
     */
    STCR_ac_B.VariantMergeForOutportV2L_EngON =
        ((rtb_TmpSignalConversionAtVeC_pj > 0.0F) && rtb_Switch1_jc);

    /* End of Outputs for SubSystem: '<S131>/Timer Retrigger Reset Enabled' */

    /* Switch: '<S131>/Switch13' incorporates:
     *  DataStoreRead: '<S131>/Dsr_PID_AStrtEntry1'
     *  DataStoreRead: '<S131>/Dsr_PID_AStrtEntry2'
     *  DataStoreRead: '<S131>/Dsr_PID_AStrtEntry25'
     *  DataStoreRead: '<S131>/Dsr_PID_AStrtEntry3'
     *  DataStoreWrite: '<S131>/Dsw_PID_AStrtEntry13'
     *  DataStoreWrite: '<S131>/Dsw_PID_AStrtEntry5'
     *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S135>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S135>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S135>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S136>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S137>/FixPt Bitwise Operator1'
     *  Switch: '<S131>/Switch1'
     */
    if (STCR_ac_B.VariantMergeForOutportV2L_EngON)
    {
        VeSTCR_g_AStpInhbtRsn2_DS = VeSTCR_g_AStpInhbtRsn2_DS | 1073741824U;
        VeSTCR_g_EVModeInhbtRsn2_DS = VeSTCR_g_AStpInhbtRsn2_DS | 1073741824U;
    }
    else
    {
        VeSTCR_g_AStpInhbtRsn2_DS = ~((~VeSTCR_g_AStpInhbtRsn2_DS) | 1073741824U);
        VeSTCR_g_EVModeInhbtRsn2_DS = ~((~VeSTCR_g_AStpInhbtRsn2_DS) |
            1073741824U);
    }

    /* End of Switch: '<S131>/Switch13' */
    /* End of Outputs for SubSystem: '<S129>/EnblFcn' */
#endif

    /* End of Outputs for SubSystem: '<S9>/VarSS_PowerPanel' */

    /* Outport: '<Root>/VeSTCR_b_EngDsrdOptToECMFnl' incorporates:
     *  SignalConversion generated from: '<S1>/EngDsrdOptToECM'
     */
    (void)Rte_Write_VeSTCR_b_EngDsrdOptToECMFnl_Value
        (STCR_ac_B.VariantMergeForOutportEngDsrdOp);

    /* Outport: '<Root>/VeSTCR_b_OHSREngDsrdFnl' incorporates:
     *  SignalConversion generated from: '<S1>/OHSREngDsrdOut'
     */
    (void)Rte_Write_VeSTCR_b_OHSREngDsrdFnl_Value
        (STCR_ac_B.VariantMergeForOutportOHSREngDs);

    /* Outport: '<Root>/VeSTCR_P_PBatSTMaxHH' incorporates:
     *  SignalConversion generated from: '<S1>/PBatVolt_Max'
     */
    (void)Rte_Write_VeSTCR_P_PBatSTMaxHH_Value(STCR_ac_B.VeSTCR_P_PBatSTMaxHH);

    /* Outport: '<Root>/VeSTCR_b_SoftChkEngOn' incorporates:
     *  SignalConversion generated from: '<S1>/SoftChkEngOn'
     */
    (void)Rte_Write_VeSTCR_b_SoftChkEngOn_Value
        (STCR_ac_B.VariantMergeForOutportSoftChk_g);

    /* Outport: '<Root>/VeSTCR_b_AStrtUpShftTrg' incorporates:
     *  SignalConversion generated from: '<S1>/UpShftTrg'
     */
    (void)Rte_Write_VeSTCR_b_AStrtUpShftTrg_Value
        (STCR_ac_B.VariantMergeForOutportUpShftTrg);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STCO'
     */
    /* Outport: '<Root>/VeSTCR_b_EngOffAllwd' incorporates:
     *  Logic: '<S8>/AND'
     *  Merge: '<Root>/EngOffAlwdHardChk_IRV_Merge'
     *  Merge: '<Root>/EngOffAlwdSlow_IRV_Merge'
     *  SignalConversion generated from: '<S1>/VeSTCR_b_EngOffAllwd'
     *  SignalConversion generated from: '<S1>/EngOffAlwdHardChk_Read'
     *  SignalConversion generated from: '<S1>/EngOffAlwdSlow_Read'
     */
    (void)Rte_Write_VeSTCR_b_EngOffAllwd_Value
        ((Rte_IrvRead_STCR_MedTEB_VeSTCR_b_EngOffAlwdSlow_write_IRV()) &&
         (Rte_IrvRead_STCR_MedTEB_VeSTCR_b_EngOffAlwdHardChk_write_IRV()));

    /* Outport: '<Root>/VeSTCR_b_FuelOn' incorporates:
     *  Logic: '<S8>/OR'
     *  Merge: '<Root>/EngOnFuelOn_IRV_Merge'
     *  Merge: '<Root>/SoftChkEngOnFuelOn_IRV_Merge'
     *  SignalConversion generated from: '<S1>/VeSTCR_b_FuelOn'
     *  SignalConversion generated from: '<S1>/EngOnFuelOn_Read'
     *  SignalConversion generated from: '<S1>/SoftChkEngOnFuelOn_Read'
     */
    (void)Rte_Write_VeSTCR_b_FuelOn_Value
        ((Rte_IrvRead_STCR_MedTEB_VeSTCR_b_EngOnFuelOn_write_IRV()) ||
         (Rte_IrvRead_STCR_MedTEB_VeSTCR_b_SoftChkEngOnFuelOn_write_IRV()));

    /* Outport: '<Root>/VeSTCR_b_SoftChkEngOnRawDbncFnl' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read5'
     *  Logic: '<S8>/OR1'
     *  SignalConversion generated from: '<S1>/VeSTCR_b_SoftChkEngOnRawDbncFnl'
     */
    (void)Rte_Write_VeSTCR_b_SoftChkEngOnRawDbncFnl_Value
        ((STCR_ac_B.VariantMergeForOutportV2L_EngON) ||
         (VeSTCR_b_SoftChkEngOnRawDbnc_DS));

    /* Outport: '<Root>/VeSTCR_g_AStpInhbtRsn1' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read2'
     *  SignalConversion generated from: '<S1>/VeSTCR_g_AStpInhbtRsn1'
     */
    (void)Rte_Write_VeSTCR_g_AStpInhbtRsn1_Value(VeSTCR_g_AStpInhbtRsn1_DS);

    /* Outport: '<Root>/VeSTCR_g_AStpInhbtRsn2' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     *  SignalConversion generated from: '<S1>/VeSTCR_g_AStpInhbtRsn2'
     */
    (void)Rte_Write_VeSTCR_g_AStpInhbtRsn2_Value(VeSTCR_g_AStpInhbtRsn2_DS);

    /* Outport: '<Root>/VeSTCR_g_EVMdInhbtRsn1' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read3'
     *  SignalConversion generated from: '<S1>/VeSTCR_g_EVMdInhbtRsn1'
     */
    (void)Rte_Write_VeSTCR_g_EVMdInhbtRsn1_Value(VeSTCR_g_EVModeInhbtRsn1_DS);

    /* Outport: '<Root>/VeSTCR_g_EVMdInhbtRsn2' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read4'
     *  SignalConversion generated from: '<S1>/VeSTCR_g_EVMdInhbtRsn2'
     */
    (void)Rte_Write_VeSTCR_g_EVMdInhbtRsn2_Value(VeSTCR_g_EVModeInhbtRsn2_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/DCOvrld_EngOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeSTCR_b_DCOvrld_EngOn_write'
     * */
    Rte_IrvWrite_STCR_MedTEB_VeSTCR_b_DCOvrld_EngOn_write_IRV
        (STCR_ac_B.VariantMergeForOutportDCOvrld_E);

    /* Merge: '<Root>/V2L_EngON_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeSTCR_b_V2L_EngON_write'
     * */
    Rte_IrvWrite_STCR_MedTEB_VeSTCR_b_V2L_EngON_write_IRV
        (STCR_ac_B.VariantMergeForOutportV2L_EngON);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, STCR_CODE) STCR_MedTEF(void) /* Explicit Task: MedTEF */
{

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeHSWR_e_HCPHoodAjarSts tmpRead;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_0;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_2[16];

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_3[16];

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TePMDR_e_PowerMode tmpRead_4;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeSTRR_e_AutoStopStartOvrrd tmpRead_5;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeCS_b;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtCmndRemoteStr;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtPwrLimOn;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_AStrtMtrACap;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VariantMerge_For_Variant__e;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_KeyInCrank;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_TmpSignalConversionAtVeHP_g;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_OR1_ak4;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_f2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpBatVAlw;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_AND_hov;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeAP_h;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_UnitDelay_bf;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Comparison6_cf;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_AND_dh;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_h4;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    uint32 rtb_Switch5_p;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeEN_p;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeB_ip;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_BSGEquipd

    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTR_g;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeSTRR_e_HybStrtrSt rtb_TmpSignalConversionAtVeST_j;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeSTRR_e_SilentStrtChkMod rtb_TmpSignalConversionAtVeST_a;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/STCR_MedTEF'
     */
    /* SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition'
     *  SignalConversion generated from: '<S2>/VeBPCR_T_BatModTmp'
     *  SignalConversion generated from: '<S2>/VeCSVR_v_VehSpdSigned'
     *  SignalConversion generated from: '<S2>/VeENGR_T_EngCoolantTemp'
     *  SignalConversion generated from: '<S2>/VeHPMR_b_PropSysActv'
     *  SignalConversion generated from: '<S2>/VeSTRR_e_HybStrtrSt'
     *  SignalConversion generated from: '<S2>/VeSTRR_e_StrtChkMod'
     */
#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTR_g);

    /* SignalConversion generated from: '<S2>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_TmpSignalConversionAtVeCS_b);

    /* SignalConversion generated from: '<S2>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHP_g);

    /* SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAP_h);

    /* SignalConversion generated from: '<S2>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeB_ip);

    /* SignalConversion generated from: '<S2>/VeENGR_T_EngCoolantTemp' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&rtb_TmpSignalConversionAtVeEN_p);

    /* SignalConversion generated from: '<S2>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&rtb_TmpSignalConversionAtVeST_j);

    /* SignalConversion generated from: '<S2>/VeSTRR_e_StrtChkMod' incorporates:
     *  Inport: '<Root>/VeSTRR_e_StrtChkMod'
     */
    (void)Rte_Read_VeSTRR_e_StrtChkMod_Value(&rtb_TmpSignalConversionAtVeST_a);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' */

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' */
#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_BSGEquipd

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value(&rtb_TmpSignalConversionAtVeHSER);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHSER_e_RngSt' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/STCC_AutoStrtStpHardChk'
     */
    /* Outputs for Atomic SubSystem: '<S143>/VarSS_AutoStrtStpHardChk' */
#if Rte_SysCon_Variant_STCR_DsblFcn

    /* Outputs for Atomic SubSystem: '<S144>/DsblFcn' */
    /* VariantMerge generated from: '<S144>/HardChkEngOn' incorporates:
     *  Constant: '<S145>/Constant'
     */
    STCR_ac_B.VariantMergeForOutportHardChkEn = false;

    /* VariantMerge generated from: '<S144>/EngOffAlwdHardChk' incorporates:
     *  Constant: '<S145>/Constant1'
     */
    STCR_ac_B.VariantMergeForOutportEngOffA_i = false;

    /* VariantMerge generated from: '<S144>/HardChkEngOnForOHSR' incorporates:
     *  Constant: '<S145>/Constant2'
     */
    STCR_ac_B.VariantMergeForOutportHardChk_e = false;

    /* VariantMerge generated from: '<S144>/VeSTCR_b_EngOnFuelOn' incorporates:
     *  Constant: '<S145>/Constant3'
     */
    STCR_ac_B.VariantMergeForOutportVeSTCR_b_ = false;

    /* VariantMerge generated from: '<S144>/VeSTCR_M_MtrAMaxCapStrtSpd' incorporates:
     *  Constant: '<S145>/Constant4'
     */
    STCR_ac_B.VariantMergeForOutportVeSTCR_M_ = 0.0F;

    /* Outputs for Atomic SubSystem: '<S145>/STCC_AStpInhibitRsns' */
    /* Outputs for Atomic SubSystem: '<S147>/STCC_STCC_EVModeInhbtRsn1' */
    /* Switch: '<S150>/Switch2' incorporates:
     *  DataStoreRead: '<S147>/Dsr_PID_AStrtEntry17'
     *  DataStoreWrite: '<S147>/Dsw_PID_AStrtEntry9'
     *  S-Function (sfix_bitop): '<S174>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S174>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S174>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S175>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S175>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S175>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S178>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S178>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S178>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S179>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S179>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S179>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S180>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S180>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S180>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_EVModeInhbtRsn1_DS =
        ~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~VeSTCR_g_EVModeInhbtRsn1_DS) | 1U)))
                            | 4U))) | 16U))) | 32U))) | 2048U))) | 16777216U))) |
               67108864U))) | 536870912U);

    /* End of Outputs for SubSystem: '<S147>/STCC_STCC_EVModeInhbtRsn1' */

    /* Outputs for Atomic SubSystem: '<S147>/STCC_HardChk_AStpInhbtRsn1' */
    /* Switch: '<S148>/Switch2' incorporates:
     *  DataStoreRead: '<S147>/Dsr_PID_AStrtEntry20'
     *  DataStoreWrite: '<S147>/Dsw_PID_AStrtEntry10'
     *  S-Function (sfix_bitop): '<S152>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S152>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S152>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S157>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_AStpInhbtRsn1_DS =
        ~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~VeSTCR_g_AStpInhbtRsn1_DS) | 1U)))
                            | 4U))) | 16U))) | 32U))) | 2048U))) | 16777216U))) |
               67108864U))) | 536870912U);

    /* End of Outputs for SubSystem: '<S147>/STCC_HardChk_AStpInhbtRsn1' */

    /* Outputs for Atomic SubSystem: '<S147>/STCC_STCC_EVModeInhbtRsn2' */
    /* Switch: '<S151>/Switch1' incorporates:
     *  DataStoreRead: '<S147>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S147>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S190>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S190>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S190>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S191>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S191>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S191>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S192>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S192>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S192>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_EVModeInhbtRsn2_DS = ~((~(~((~(~((~VeSTCR_g_EVModeInhbtRsn2_DS) |
        2048U))) | 32768U))) | 262144U);

    /* End of Outputs for SubSystem: '<S147>/STCC_STCC_EVModeInhbtRsn2' */

    /* Outputs for Atomic SubSystem: '<S147>/STCC_HardChk_AStpInhbtRsn2' */
    /* Switch: '<S149>/Switch1' incorporates:
     *  DataStoreRead: '<S147>/Dsr_PID_AStrtEntry26'
     *  DataStoreWrite: '<S147>/Dsw_PID_AStrtEntry13'
     *  S-Function (sfix_bitop): '<S168>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S168>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S168>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S170>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S170>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S170>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_AStpInhbtRsn2_DS = ~((~(~((~(~((~VeSTCR_g_AStpInhbtRsn2_DS) | 2048U)))
        | 32768U))) | 262144U);

    /* End of Outputs for SubSystem: '<S147>/STCC_HardChk_AStpInhbtRsn2' */
    /* End of Outputs for SubSystem: '<S145>/STCC_AStpInhibitRsns' */
    /* End of Outputs for SubSystem: '<S144>/DsblFcn' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#else

    /* Outputs for Atomic SubSystem: '<S144>/EnblFcn' */
    /* Outputs for Atomic SubSystem: '<S146>/STCC_TransRange1' */
    /* Outputs for Atomic SubSystem: '<S207>/STCC_ChkMode' */
    /* RelationalOperator: '<S312>/Equal5' incorporates:
     *  Logic: '<S312>/AND1'
     *  Logic: '<S312>/AND2'
     *  Logic: '<S312>/AND3'
     *  Logic: '<S312>/OR4'
     *  RelationalOperator: '<S312>/Equal1'
     *  RelationalOperator: '<S312>/Equal17'
     *  RelationalOperator: '<S312>/Equal18'
     *  RelationalOperator: '<S312>/Equal2'
     *  RelationalOperator: '<S312>/Equal3'
     *  RelationalOperator: '<S312>/Equal4'
     *  SignalConversion generated from: '<S312>/VariantSource4'
     */
#if Rte_SysCon_Variant_STCR_BSGEquipd

    /* VariantMerge generated from: '<S312>/VariantSource4' incorporates:
     *  Constant: '<S314>/Constant'
     *  Constant: '<S315>/Constant'
     *  Constant: '<S316>/Constant'
     *  Constant: '<S317>/Constant'
     *  Constant: '<S318>/Constant'
     *  Constant: '<S319>/Constant'
     *  Constant: '<S320>/Constant'
     *  Constant: '<S321>/Calib'
     */
    rtb_VariantMerge_For_Variant__e = ((((((((uint32)
        rtb_TmpSignalConversionAtVeHSER) != CeHSER_e_M1) && (((uint32)
        rtb_TmpSignalConversionAtVeHSER) != CeHSER_e_NeutToM1)) && (((uint32)
        rtb_TmpSignalConversionAtVeHSER) != CeHSER_e_Neutral)) && (((uint32)
        rtb_TmpSignalConversionAtVeHSER) != CeHSER_e_ShiftToNeutEngOn)) &&
        ((((uint32)rtb_TmpSignalConversionAtVeHSER) != CeHSER_e_M2) ||
         (!KeSTCR_b_AllowM2Autostop))) && ((CeTRGR_e_TransRangePark != ((uint32)
        rtb_TmpSignalConversionAtVeTR_g)) && (((uint32)
        rtb_TmpSignalConversionAtVeTR_g) != CeTRGR_e_TransRangeNeutral)));

#else

    /* VariantMerge generated from: '<S312>/VariantSource4' incorporates:
     *  Constant: '<S312>/FALSE Constant'
     *  SignalConversion generated from: '<S312>/VariantSource4'
     */
    rtb_VariantMerge_For_Variant__e = false;

#endif

    /* End of RelationalOperator: '<S312>/Equal5' */
    /* End of Outputs for SubSystem: '<S207>/STCC_ChkMode' */
    /* End of Outputs for SubSystem: '<S146>/STCC_TransRange1' */

    /* Inport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA' */
    (void)Rte_Read_VeBTQR_b_DrvrIntndedTotBrkTrqFA_Value
        (&rtb_VeSTCR_b_KeyInCrank);

    /* Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq' */
    (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorq_Value(&rtb_Switch1_h4);

    /* Outputs for Atomic SubSystem: '<S146>/STCC_TransRange1' */
    /* Outputs for Atomic SubSystem: '<S207>/STCC_ChkPRND' */
    /* Merge: '<S291>/Merge' incorporates:
     *  Constant: '<S324>/Constant'
     *  Constant: '<S325>/Constant'
     *  Constant: '<S329>/Calib'
     *  Constant: '<S330>/Calib'
     *  Constant: '<S331>/Calib'
     *  Logic: '<S322>/AND2'
     *  Logic: '<S322>/OR1'
     *  Logic: '<S322>/OR2'
     *  Logic: '<S322>/OR3'
     *  Logic: '<S322>/OR7'
     *  RelationalOperator: '<S322>/Equal2'
     *  RelationalOperator: '<S322>/Equal20'
     *  RelationalOperator: '<S322>/Equal3'
     */
    rtb_VeSTCR_b_KeyInCrank = ((((KeSTCR_b_FtrAStpDsalwPrkEnab) &&
        (CeTRGR_e_TransRangePark == ((uint32)rtb_TmpSignalConversionAtVeTR_g))) ||
        ((((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
          CeTRGR_e_TransRangeNeutral) && (KeSTCR_b_FtrAStpDsalwNeutEnab))) &&
        ((rtb_Switch1_h4 > KeSTCR_M_AStrtPN_MinBrkTrq) ||
         rtb_VeSTCR_b_KeyInCrank));

    /* RelationalOperator: '<S322>/Comparison6' incorporates:
     *  Constant: '<S326>/Constant'
     */
    rtb_Comparison6_cf = (CeSTRR_e_EngStartingSt == ((uint32)
                           rtb_TmpSignalConversionAtVeST_j));

    /* Outputs for Atomic SubSystem: '<S322>/EdgeRising' */
    /* Logic: '<S327>/AND' incorporates:
     *  Logic: '<S327>/OR1'
     *  UnitDelay: '<S327>/Unit Delay'
     */
    rtb_AND_dh = (rtb_Comparison6_cf && (!STCR_ac_DW.UnitDelay_DSTATE_gr));

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_gr = rtb_Comparison6_cf;

    /* End of Outputs for SubSystem: '<S322>/EdgeRising' */

    /* Switch: '<S322>/Switch' incorporates:
     *  Logic: '<S322>/AND1'
     *  Logic: '<S322>/AND3'
     */
    rtb_VeSTCR_b_KeyInCrank = ((rtb_VeSTCR_b_KeyInCrank && (!rtb_AND_dh)) &&
        rtb_VeSTCR_b_KeyInCrank);

    /* Outputs for Atomic SubSystem: '<S322>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S333>/EdgeRising' */
    /* Logic: '<S334>/AND' incorporates:
     *  Logic: '<S334>/OR1'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    rtb_Comparison6_cf = (rtb_VeSTCR_b_KeyInCrank &&
                          (!STCR_ac_DW.UnitDelay_DSTATE_lv));

    /* Update for UnitDelay: '<S334>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_lv = rtb_VeSTCR_b_KeyInCrank;

    /* End of Outputs for SubSystem: '<S333>/EdgeRising' */

    /* Switch: '<S333>/Switch1' incorporates:
     *  Logic: '<S333>/OR'
     *  Logic: '<S333>/OR1'
     */
    if ((!rtb_VeSTCR_b_KeyInCrank) || rtb_Comparison6_cf)
    {
        /* Switch: '<S333>/Switch1' incorporates:
         *  Constant: '<S333>/Constant Value1'
         */
        rtb_Switch1_h4 = 0.0F;
    }
    else
    {
        /* Switch: '<S333>/Switch1' incorporates:
         *  Constant: '<S328>/Calib'
         *  Constant: '<S332>/Calib'
         *  MinMax: '<S333>/Minimum'
         *  Sum: '<S333>/Summation'
         *  UnitDelay: '<S333>/Unit Delay'
         */
        rtb_Switch1_h4 = fminf(KeSTCR_t_AStrtPN_MinTime, HeSTCR_t_MedTEF_dT +
                               STCR_ac_DW.UnitDelay_DSTATE_e5);
    }

    /* End of Switch: '<S333>/Switch1' */
    /* End of Outputs for SubSystem: '<S322>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S207>/STCC_ChkPRND' */
    /* End of Outputs for SubSystem: '<S146>/STCC_TransRange1' */

    /* Inport: '<Root>/VePMDR_e_IgnInputsPowerMode' */
    (void)Rte_Read_VePMDR_e_IgnInputsPowerMode_Value(&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S146>/STCC_TransRange1' */
    /* Outputs for Atomic SubSystem: '<S207>/STCC_ChkPRND' */
    /* Outputs for Atomic SubSystem: '<S322>/Turn On Delay Time' */
    /* Update for UnitDelay: '<S333>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_e5 = rtb_Switch1_h4;

    /* End of Outputs for SubSystem: '<S322>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S323>/Signal Latch On With Reset' */
    /* Logic: '<S341>/OR1' incorporates:
     *  Constant: '<S336>/Constant'
     *  Constant: '<S337>/Constant'
     *  Constant: '<S338>/Constant'
     *  Constant: '<S340>/Calib'
     *  Logic: '<S323>/AND1'
     *  Logic: '<S323>/Logical Operator3'
     *  Logic: '<S341>/NOT'
     *  Logic: '<S341>/OR'
     *  RelationalOperator: '<S323>/Comparison1'
     *  RelationalOperator: '<S323>/Comparison5'
     *  RelationalOperator: '<S323>/Comparison6'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    rtb_Comparison6_cf = (((KeSTCR_b_FtrAStpDsalwRevHoldEnab) &&
                           ((CeSTRR_e_EngStartingSt == ((uint32)
        rtb_TmpSignalConversionAtVeST_j)) || (((uint32)
        rtb_TmpSignalConversionAtVeST_j) == CeSTRR_e_EngRunningSt))) ||
                          ((CeSTRR_e_EngOffSt != ((uint32)
        rtb_TmpSignalConversionAtVeST_j)) && (STCR_ac_DW.UnitDelay_DSTATE_a3)));

    /* Update for UnitDelay: '<S341>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_a3 = rtb_Comparison6_cf;

    /* End of Outputs for SubSystem: '<S323>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S322>/Turn On Delay Time' */
    /* Logic: '<S207>/Logical2' incorporates:
     *  Constant: '<S332>/Calib'
     *  Constant: '<S335>/Constant'
     *  Constant: '<S339>/Calib'
     *  Logic: '<S313>/OR6'
     *  Logic: '<S323>/OR4'
     *  Logic: '<S323>/OR5'
     *  Logic: '<S333>/AND'
     *  RelationalOperator: '<S323>/Equal1'
     *  RelationalOperator: '<S333>/Greater  Than'
     */
    rtb_VariantMerge_For_Variant__e = (rtb_VariantMerge_For_Variant__e ||
        ((rtb_VeSTCR_b_KeyInCrank && (rtb_Switch1_h4 >= KeSTCR_t_AStrtPN_MinTime))
         || (((KeSTCR_b_FtrAStpDsalwRevEnab) || rtb_Comparison6_cf) && (((uint32)
        rtb_TmpSignalConversionAtVeTR_g) == CeTRGR_e_TransRangeReverse))));

    /* End of Outputs for SubSystem: '<S322>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S207>/STCC_ChkPRND' */
    /* End of Outputs for SubSystem: '<S146>/STCC_TransRange1' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_KeyAutoStart' */
    /* RelationalOperator: '<S291>/Comparison5' incorporates:
     *  Constant: '<S296>/Constant'
     */
    rtb_VeSTCR_b_KeyInCrank = (((uint32)rtb_TmpSignalConversionAtVeST_j) ==
        CeSTRR_e_KeyOffSt);

    /* Outputs for Atomic SubSystem: '<S291>/EdgeRising' */
    /* Logic: '<S297>/AND' incorporates:
     *  Logic: '<S297>/OR1'
     *  UnitDelay: '<S297>/Unit Delay'
     */
    rtb_Comparison6_cf = (rtb_VeSTCR_b_KeyInCrank &&
                          (!STCR_ac_DW.UnitDelay_DSTATE_dx));

    /* Update for UnitDelay: '<S297>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_dx = rtb_VeSTCR_b_KeyInCrank;

    /* End of Outputs for SubSystem: '<S291>/EdgeRising' */

    /* If: '<S291>/If' incorporates:
     *  Logic: '<S291>/Logical1'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    if ((STCR_ac_DW.VeSTCR_b_IgnPulsChkKey) || rtb_Comparison6_cf)
    {
        /* Outputs for IfAction SubSystem: '<S291>/IgnorePulse' incorporates:
         *  ActionPort: '<S298>/Action Port'
         */
        /* Switch: '<S300>/Switch1' incorporates:
         *  Constant: '<S295>/Constant'
         *  Inport: '<Root>/VePMDR_e_IgnInputsPowerMode'
         *  Logic: '<S298>/Logical2'
         *  RelationalOperator: '<S291>/Equal1'
         */
        STCR_ac_B.Switch1 = ((!rtb_TmpSignalConversionAtVeHP_g) || (((uint32)
                               tmpRead_4) == CePMDR_e_PowerMode_Crank));

        /* Merge: '<S291>/Merge' incorporates:
         *  Constant: '<S298>/FALSE Constant2'
         *  SignalConversion generated from: '<S298>/KeyInCrnk'
         */
        rtb_VeSTCR_b_KeyInCrank = false;

        /* End of Outputs for SubSystem: '<S291>/IgnorePulse' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S291>/SendPulse' incorporates:
         *  ActionPort: '<S299>/Action Port'
         */
        /* Merge: '<S291>/Merge' incorporates:
         *  Constant: '<S295>/Constant'
         *  Gain: '<S301>/Gain'
         *  Inport: '<Root>/VePMDR_e_IgnInputsPowerMode'
         *  RelationalOperator: '<S291>/Equal1'
         */
        rtb_VeSTCR_b_KeyInCrank = (((uint32)tmpRead_4) ==
            CePMDR_e_PowerMode_Crank);

        /* End of Outputs for SubSystem: '<S291>/SendPulse' */
    }

    /* End of If: '<S291>/If' */
    /* End of Outputs for SubSystem: '<S146>/STCC_KeyAutoStart' */

    /* Inport: '<Root>/VeESSR_b_CltchStckOn' */
    (void)Rte_Read_VeESSR_b_CltchStckOn_Value(&rtb_OR1_ak4);

    /* Outputs for Atomic SubSystem: '<S146>/STCC_KeyAutoStart' */
    /* Logic: '<S202>/AND' incorporates:
     *  Constant: '<S292>/Constant'
     *  Constant: '<S293>/Constant'
     *  Constant: '<S294>/Calib'
     *  Logic: '<S202>/Logical1'
     *  Logic: '<S202>/OR5'
     *  RelationalOperator: '<S202>/Equal10'
     *  RelationalOperator: '<S202>/Equal12'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    rtb_VeSTCR_b_KeyInCrank = (((((STCR_ac_DW.UnitDelay_DSTATE_j5) ||
        rtb_VeSTCR_b_KeyInCrank) && rtb_TmpSignalConversionAtVeHP_g) &&
        ((CeTRGR_e_TransRangePark == ((uint32)rtb_TmpSignalConversionAtVeTR_g)) ||
         (((uint32)rtb_TmpSignalConversionAtVeTR_g) ==
          CeTRGR_e_TransRangeNeutral))) && (KeSTCR_b_FtrAStrtKeyFrcdEnab));

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_j5 = rtb_VeSTCR_b_KeyInCrank;

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    STCR_ac_DW.VeSTCR_b_IgnPulsChkKey = STCR_ac_B.Switch1;

    /* End of Outputs for SubSystem: '<S146>/STCC_KeyAutoStart' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_CltchStckOn' */
    /* Outputs for Atomic SubSystem: '<S201>/Signal Latch On With Reset' */
    /* Logic: '<S290>/OR1' incorporates:
     *  Constant: '<S288>/Constant'
     *  Logic: '<S290>/NOT'
     *  Logic: '<S290>/OR'
     *  RelationalOperator: '<S201>/Comparison1'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_OR1_ak4 = (rtb_OR1_ak4 || ((((uint32)rtb_TmpSignalConversionAtVeST_j) !=
                     CeSTRR_e_KeyOffSt) && (STCR_ac_DW.UnitDelay_DSTATE_fde)));

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fde = rtb_OR1_ak4;

    /* End of Outputs for SubSystem: '<S201>/Signal Latch On With Reset' */

    /* Logic: '<S201>/Logical2' incorporates:
     *  Constant: '<S289>/Calib'
     *  Logic: '<S201>/NOT1'
     */
    rtb_OR1_ak4 = ((!KeSTCR_b_UseCltchStckOnFP) && rtb_OR1_ak4);

    /* End of Outputs for SubSystem: '<S146>/STCC_CltchStckOn' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_ChkVoltage' */
    /* If: '<S200>/If' incorporates:
     *  Constant: '<S269>/Constant'
     *  Constant: '<S270>/Constant'
     *  DataTypeConversion: '<S275>/Data Type Conversion1'
     *  If: '<S275>/If1'
     *  Logic: '<S200>/AND1'
     *  RelationalOperator: '<S200>/Comparison5'
     *  RelationalOperator: '<S200>/Comparison6'
     *  SignalConversion generated from: '<S2>/VeSTRR_e_StrtChkMod'
     */
    if ((CeSTRR_e_EngStartingSt == ((uint32)rtb_TmpSignalConversionAtVeST_j)) ||
        (((uint32)rtb_TmpSignalConversionAtVeST_j) == CeSTRR_e_EngRunningSt))
    {
        /* Outputs for IfAction SubSystem: '<S200>/STRC_AStpChkCalLoader' incorporates:
         *  ActionPort: '<S274>/Action Port'
         */
        /* Switch: '<S262>/Switch1' incorporates:
         *  Lookup_n-D: '<S277>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_BatModTmp'
         */
        rtb_Switch1_f2 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeB_ip, ((
            const float32 *)&(KxSTCR_U_AStopBatModVoltMin[0])), ((const float32 *)
            &(KtSTCR_U_AStopBatModVoltMin[0])), 2U);

        /* Lookup_n-D: '<S305>/Vector' incorporates:
         *  Lookup_n-D: '<S278>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_BatModTmp'
         */
        rtb_Switch1_h4 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeB_ip, ((
            const float32 *)&(KxSTCR_U_AStopBatPackVoltMin[0])), ((const float32
            *)&(KtSTCR_U_AStopBatPackVoltMin[0])), 2U);

        /* End of Outputs for SubSystem: '<S200>/STRC_AStpChkCalLoader' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S200>/STRC_AStrtChkCalLoader' incorporates:
         *  ActionPort: '<S275>/Action Port'
         */
        if (((sint32)rtb_TmpSignalConversionAtVeST_a) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S275>/STCR_SilentStrtEntry_Cals' incorporates:
             *  ActionPort: '<S280>/Action Port'
             */
            /* If: '<S275>/If1' incorporates:
             *  Lookup_n-D: '<S282>/Vector'
             *  Lookup_n-D: '<S283>/Vector'
             *  Lookup_n-D: '<S305>/Vector'
             *  SignalConversion generated from: '<S2>/VeBPCR_T_BatModTmp'
             *  Switch: '<S262>/Switch1'
             */
            rtb_Switch1_f2 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeB_ip,
                ((const float32 *)&(KxSTCR_U_SltStrtEntBatModVoltMin[0])), ((
                const float32 *)&(KtSTCR_U_SltStrtEntBatModVoltMin[0])), 2U);
            rtb_Switch1_h4 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeB_ip,
                ((const float32 *)&(KxSTCR_U_SltStrtEntBatPackVoltMin[0])), ((
                const float32 *)&(KtSTCR_U_SltStrtEntBatPackVoltMin[0])), 2U);

            /* End of Outputs for SubSystem: '<S275>/STCR_SilentStrtEntry_Cals' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S275>/STCR_SilentStrtExit_AutoStop_Cals' incorporates:
             *  ActionPort: '<S281>/Action Port'
             */
            /* If: '<S275>/If1' incorporates:
             *  Constant: '<S284>/Calib'
             *  Constant: '<S285>/Calib'
             *  Lookup_n-D: '<S286>/Vector'
             *  Lookup_n-D: '<S287>/Vector'
             *  Lookup_n-D: '<S305>/Vector'
             *  SignalConversion generated from: '<S2>/VeBPCR_T_BatModTmp'
             *  Sum: '<S281>/Sum3'
             *  Sum: '<S281>/Sum4'
             *  Switch: '<S262>/Switch1'
             */
            rtb_Switch1_h4 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeB_ip,
                ((const float32 *)&(KxSTCR_U_AStopBatPackVoltMin[0])), ((const
                float32 *)&(KtSTCR_U_AStopBatPackVoltMin[0])), 2U) -
                KeSTCR_U_AStrtBatPackVoltHyst;
            rtb_Switch1_f2 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeB_ip,
                ((const float32 *)&(KxSTCR_U_AStopBatModVoltMin[0])), ((const
                float32 *)&(KtSTCR_U_AStopBatModVoltMin[0])), 2U) -
                KeSTCR_U_AStrtBatModVoltHyst;

            /* End of Outputs for SubSystem: '<S275>/STCR_SilentStrtExit_AutoStop_Cals' */
        }

        /* End of Outputs for SubSystem: '<S200>/STRC_AStrtChkCalLoader' */
    }

    /* End of If: '<S200>/If' */
    /* End of Outputs for SubSystem: '<S146>/STCC_ChkVoltage' */

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMinArb_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHVTR_U_HV_Volt' */
    (void)Rte_Read_VeHVTR_U_HV_Volt_Value(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S146>/STCC_ChkVoltage' */
    /* RelationalOperator: '<S200>/Greater Than or Equal 5' */
    rtb_Comparison6_cf = (tmpRead_0 < rtb_Switch1_h4);

    /* RelationalOperator: '<S200>/Greater Than or Equal 1' */
    rtb_AND_dh = (tmpRead_1 < rtb_Switch1_f2);

    /* Logic: '<S200>/Logical1' */
    rtb_LeSTCR_b_AStrtStpBatVAlw = (rtb_Comparison6_cf || rtb_AND_dh);

    /* Outputs for Atomic SubSystem: '<S200>/EdgeRising1' */
    /* Logic: '<S271>/AND' incorporates:
     *  Logic: '<S271>/OR1'
     *  UnitDelay: '<S271>/Unit Delay'
     */
    rtb_AND_hov = (rtb_LeSTCR_b_AStrtStpBatVAlw &&
                   (!STCR_ac_DW.UnitDelay_DSTATE_mpx));

    /* Update for UnitDelay: '<S271>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_mpx = rtb_LeSTCR_b_AStrtStpBatVAlw;

    /* End of Outputs for SubSystem: '<S200>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S200>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S276>/Switch1' incorporates:
     *  Constant: '<S268>/Constant'
     *  Logic: '<S200>/Logical2'
     *  RelationalOperator: '<S200>/Comparison1'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeST_j) == CeSTRR_e_EngOffSt) &&
            rtb_AND_hov)
    {
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S273>/Calib'
         */
        rtb_TmpSignalConversionAtVeB_ip = KeSTCR_t_UnderVoltageHoldTm;
    }
    else
    {
        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S272>/Calib'
         *  Constant: '<S276>/Constant Value4'
         *  MinMax: '<S276>/Maximum'
         *  Sum: '<S276>/Subtraction'
         *  UnitDelay: '<S276>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeB_ip = fmaxf
            (STCR_ac_DW.VeSTCR_t_UnderVoltageHoldTm - HeSTCR_t_MedTEF_dT, 0.0F);
    }

    /* End of Switch: '<S276>/Switch1' */
    /* End of Outputs for SubSystem: '<S200>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S146>/STCC_ChkVoltage' */

    /* Inport: '<Root>/VeTINR_e_TCMStrtStpOvrrd' */
    (void)Rte_Read_VeTINR_e_TCMStrtStpOvrrd_Value(&tmpRead_5);

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReq' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReq_Value
        (&rtb_LeSTCR_b_AStrtCmndRemoteStr);

    /* Inport: '<Root>/VaMTQR_n_MtrACpbltyspd' */
    (void)Rte_Read_VaMTQR_n_MtrACpbltyspd_Value(tmpRead_2);

    /* Inport: '<Root>/VeHSWR_e_HCPHoodAjarSts' */
    (void)Rte_Read_VeHSWR_e_HCPHoodAjarSts_Value(&tmpRead);

    /* Inport: '<Root>/VeBPCR_b_PwrLimON' */
    (void)Rte_Read_VeBPCR_b_PwrLimON_Value(&rtb_LeSTCR_b_AStrtPwrLimOn);

    /* Outputs for Atomic SubSystem: '<S146>/STCC_ChkVoltage' */
    /* Outputs for Atomic SubSystem: '<S200>/Timer Retrigger Reset Enabled' */
    /* Update for UnitDelay: '<S276>/Unit Delay' */
    STCR_ac_DW.VeSTCR_t_UnderVoltageHoldTm = rtb_TmpSignalConversionAtVeB_ip;

    /* Logic: '<S200>/Logical3' incorporates:
     *  Constant: '<S276>/Constant Value2'
     *  RelationalOperator: '<S276>/Greater  Than1'
     */
    rtb_LeSTCR_b_AStrtStpBatVAlw = (rtb_LeSTCR_b_AStrtStpBatVAlw ||
        (rtb_TmpSignalConversionAtVeB_ip > 0.0F));

    /* End of Outputs for SubSystem: '<S200>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S146>/STCC_ChkVoltage' */

    /* Abs: '<S146>/Abs' */
    rtb_TmpSignalConversionAtVeCS_b = fabsf(rtb_TmpSignalConversionAtVeCS_b);

    /* Outputs for Atomic SubSystem: '<S146>/STCC_ChkAccelPedal' */
    /* Logic: '<S198>/Logical1' incorporates:
     *  Constant: '<S257>/Constant'
     *  Constant: '<S258>/Constant'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S260>/Calib'
     *  Logic: '<S198>/Logical5'
     *  Logic: '<S198>/Logical6'
     *  RelationalOperator: '<S198>/Comparison1'
     *  RelationalOperator: '<S198>/Comparison2'
     *  RelationalOperator: '<S198>/Comparison3'
     *  RelationalOperator: '<S198>/Comparison5'
     */
    rtb_AND_hov = ((rtb_TmpSignalConversionAtVeAP_h >
                    KeSTCR_Pct_AStrtAccelThresinNeutral) &&
                   ((CeTRGR_e_TransRangePark == ((uint32)
                      rtb_TmpSignalConversionAtVeTR_g)) || ((((uint32)
                       rtb_TmpSignalConversionAtVeTR_g) ==
                      CeTRGR_e_TransRangeNeutral) &&
                     (rtb_TmpSignalConversionAtVeCS_b <
                      KeSTCR_v_AStopLowBatSOCinNeutral))));

    /* End of Outputs for SubSystem: '<S146>/STCC_ChkAccelPedal' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_RemoteStrt' */
    /* Logic: '<S205>/Logical' incorporates:
     *  Constant: '<S309>/Calib'
     */
    rtb_LeSTCR_b_AStrtCmndRemoteStr = ((KeSTCR_b_FtrAStrtAStpDurRemVhEnab) &&
        rtb_LeSTCR_b_AStrtCmndRemoteStr);

    /* End of Outputs for SubSystem: '<S146>/STCC_RemoteStrt' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_ChkHood' */
    /* UnitDelay: '<S267>/Unit Delay' incorporates:
     *  Constant: '<S261>/Constant'
     *  Inport: '<Root>/VeHSWR_e_HCPHoodAjarSts'
     *  RelationalOperator: '<S199>/Equal3'
     */
    rtb_UnitDelay_bf = (((uint32)tmpRead) != CeHSWR_e_HCPHoodClosed);

    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     */
    if (rtb_UnitDelay_bf)
    {
        rtb_TmpSignalConversionAtVeAP_h = KeSTCR_v_AStrtHoodOpenSpdHys;
    }
    else
    {
        rtb_TmpSignalConversionAtVeAP_h = KeSTCR_v_AStrtHoodClosedSpdHys;
    }

    /* End of Switch: '<S262>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S199>/Signal Latch On With Reset' */
    /* Logic: '<S267>/OR1' incorporates:
     *  Constant: '<S263>/Calib'
     *  Constant: '<S266>/Calib'
     *  Logic: '<S199>/AND1'
     *  Logic: '<S199>/AND2'
     *  Logic: '<S199>/NOT'
     *  Logic: '<S267>/NOT'
     *  Logic: '<S267>/OR'
     *  RelationalOperator: '<S199>/Equal1'
     *  RelationalOperator: '<S199>/Equal2'
     *  Sum: '<S199>/Sum'
     *  UnitDelay: '<S267>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHP_g = ((((rtb_TmpSignalConversionAtVeHP_g &&
        (KeSTCR_b_AStrtHoodEnbl)) && (rtb_TmpSignalConversionAtVeCS_b <=
        KeSTCR_v_AStrtHoodSpdThrsh)) && rtb_UnitDelay_bf) ||
        (((rtb_TmpSignalConversionAtVeCS_b <= (rtb_TmpSignalConversionAtVeAP_h +
        KeSTCR_v_AStrtHoodSpdThrsh)) && rtb_TmpSignalConversionAtVeHP_g) &&
         (STCR_ac_DW.UnitDelay_DSTATE_hq)));

    /* Update for UnitDelay: '<S267>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_hq = rtb_TmpSignalConversionAtVeHP_g;

    /* End of Outputs for SubSystem: '<S199>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S146>/STCC_ChkHood' */

    /* Outputs for Atomic SubSystem: '<S146>/STRC_PwrLimON' */
    /* Logic: '<S208>/Logical6' incorporates:
     *  Constant: '<S342>/Calib'
     */
    rtb_LeSTCR_b_AStrtPwrLimOn = ((KeSTCR_b_PwrLimONEnbl) &&
        rtb_LeSTCR_b_AStrtPwrLimOn);

    /* End of Outputs for SubSystem: '<S146>/STRC_PwrLimON' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_TCMEngON' */
    /* Logic: '<S206>/Logical7' incorporates:
     *  Constant: '<S310>/Constant'
     *  Constant: '<S311>/Calib'
     *  Inport: '<Root>/VeTINR_e_TCMStrtStpOvrrd'
     *  RelationalOperator: '<S206>/Comparison2'
     */
    rtb_UnitDelay_bf = ((KeSTCR_b_TCMEngONEnbl) && (((uint32)tmpRead_5) ==
                         CeSTRR_e_OvrrdEngOn));

    /* End of Outputs for SubSystem: '<S146>/STCC_TCMEngON' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_MtrACap' */
    /* Chart: '<S307>/Get_Data_Indexes ' incorporates:
     *  Constant: '<S303>/Calib'
     *  SignalConversion: '<S204>/Signal Conversion3'
     */
    /* Gateway: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* During: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Entry Internal: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Transition: '<S308>:2' */
    if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[8])
    {
        /* Transition: '<S308>:4' */
        if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[12])
        {
            /* Transition: '<S308>:7' */
            if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[14])
            {
                /* Transition: '<S308>:13' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[15])
                {
                    /* Transition: '<S308>:68' */
                    /* Transition: '<S308>:69' */
                    rtb_TmpSignalConversionAtVeAP_h = 15.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 14.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[15], tmpRead_2[14], tmpRead_2[15]);
                }
                else
                {
                    /* Transition: '<S308>:63' */
                    rtb_TmpSignalConversionAtVeAP_h = 15.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 14.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[15], tmpRead_2[14],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:66' */
                }

                /* Transition: '<S308>:65' */
                /* Transition: '<S308>:64' */
                /* Transition: '<S308>:33' */
            }
            else
            {
                /* Transition: '<S308>:28' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[13])
                {
                    /* Transition: '<S308>:29' */
                    rtb_TmpSignalConversionAtVeAP_h = 14.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 13.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[14], tmpRead_2[13],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:6' */
                    /* Transition: '<S308>:32' */
                }
                else
                {
                    /* Transition: '<S308>:30' */
                    rtb_TmpSignalConversionAtVeAP_h = 13.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 12.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[13], tmpRead_2[12],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);
                }

                /* Transition: '<S308>:18' */
                /* Transition: '<S308>:9' */
                /* Transition: '<S308>:33' */
            }
        }
        else
        {
            /* Transition: '<S308>:15' */
            if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[10])
            {
                /* Transition: '<S308>:20' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[11])
                {
                    /* Transition: '<S308>:22' */
                    rtb_TmpSignalConversionAtVeAP_h = 12.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 11.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[12], tmpRead_2[11],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:19' */
                    /* Transition: '<S308>:9' */
                    /* Transition: '<S308>:33' */
                }
                else
                {
                    /* Transition: '<S308>:23' */
                    rtb_TmpSignalConversionAtVeAP_h = 11.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 10.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[11], tmpRead_2[10],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:25' */
                    /* Transition: '<S308>:9' */
                    /* Transition: '<S308>:33' */
                }
            }
            else
            {
                /* Transition: '<S308>:21' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[9])
                {
                    /* Transition: '<S308>:24' */
                    rtb_TmpSignalConversionAtVeAP_h = 10.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 9.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[10], tmpRead_2[9],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:25' */
                    /* Transition: '<S308>:9' */
                    /* Transition: '<S308>:33' */
                }
                else
                {
                    /* Transition: '<S308>:59' */
                    rtb_TmpSignalConversionAtVeAP_h = 9.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 8.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[9], tmpRead_2[8],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:44' */
                }
            }
        }

        /* Transition: '<S308>:14' */
        /* Transition: '<S308>:56' */
        /* Transition: '<S308>:47' */
    }
    else
    {
        /* Transition: '<S308>:16' */
        if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[4])
        {
            /* Transition: '<S308>:17' */
            if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[5])
            {
                /* Transition: '<S308>:39' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[6])
                {
                    /* Transition: '<S308>:41' */
                    rtb_TmpSignalConversionAtVeAP_h = 7.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 6.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[7], tmpRead_2[6],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);
                    if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2
                            [7])
                    {
                        /* Transition: '<S308>:58' */
                        rtb_TmpSignalConversionAtVeAP_h = 8.0F;
                        rtb_TmpSignalConversionAtVeCS_b = 7.0F;
                        rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                            (tmpRead_2[8], tmpRead_2[7],
                             KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                        /* Transition: '<S308>:55' */
                        /* Transition: '<S308>:53' */
                    }
                    else
                    {
                        /* Transition: '<S308>:3' */
                    }

                    /* Transition: '<S308>:43' */
                    /* Transition: '<S308>:10' */
                }
                else
                {
                    /* Transition: '<S308>:36' */
                    rtb_TmpSignalConversionAtVeAP_h = 6.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 5.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[6], tmpRead_2[5],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:38' */
                    /* Transition: '<S308>:43' */
                    /* Transition: '<S308>:10' */
                }
            }
            else
            {
                /* Transition: '<S308>:37' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[4])
                {
                    /* Transition: '<S308>:40' */
                    rtb_TmpSignalConversionAtVeAP_h = 5.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 4.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[5], tmpRead_2[4],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:38' */
                    /* Transition: '<S308>:43' */
                    /* Transition: '<S308>:10' */
                }
                else
                {
                    /* Transition: '<S308>:46' */
                    rtb_TmpSignalConversionAtVeAP_h = 4.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 3.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[4], tmpRead_2[3],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:45' */
                }
            }

            /* Transition: '<S308>:42' */
            /* Transition: '<S308>:60' */
            /* Transition: '<S308>:61' */
            /* Transition: '<S308>:48' */
            /* Transition: '<S308>:56' */
            /* Transition: '<S308>:47' */
        }
        else
        {
            /* Transition: '<S308>:34' */
            if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[2])
            {
                /* Transition: '<S308>:49' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[3])
                {
                    /* Transition: '<S308>:54' */
                    /* Transition: '<S308>:52' */
                    rtb_TmpSignalConversionAtVeAP_h = 4.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 3.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[4], tmpRead_2[3],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);
                }
                else
                {
                    /* Transition: '<S308>:35' */
                    rtb_TmpSignalConversionAtVeAP_h = 3.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 2.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[3], tmpRead_2[2],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:57' */
                }

                /* Transition: '<S308>:61' */
                /* Transition: '<S308>:48' */
                /* Transition: '<S308>:56' */
                /* Transition: '<S308>:47' */
            }
            else
            {
                /* Transition: '<S308>:50' */
                if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2[1])
                {
                    /* Transition: '<S308>:51' */
                    rtb_TmpSignalConversionAtVeAP_h = 2.0F;
                    rtb_TmpSignalConversionAtVeCS_b = 1.0F;
                    rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                        (tmpRead_2[2], tmpRead_2[1],
                         KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                    /* Transition: '<S308>:26' */
                    /* Transition: '<S308>:8' */
                }
                else
                {
                    /* Transition: '<S308>:62' */
                    if (KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation >= tmpRead_2
                            [0])
                    {
                        /* Transition: '<S308>:27' */
                        rtb_TmpSignalConversionAtVeAP_h = 1.0F;
                        rtb_TmpSignalConversionAtVeCS_b = 0.0F;
                        rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                            (tmpRead_2[1], tmpRead_2[0],
                             KeSTCR_n_MaxMtrASpeedForStartTrqEvaluation);

                        /* Transition: '<S308>:31' */
                        /* Transition: '<S308>:47' */
                    }
                    else
                    {
                        /* Transition: '<S308>:11' */
                        rtb_TmpSignalConversionAtVeAP_h = 1.0F;
                        rtb_TmpSignalConversionAtVeCS_b = 0.0F;
                        rtb_TmpSignalConversionAtVeB_ip = STCR_ac_fraction
                            (tmpRead_2[1], tmpRead_2[0], tmpRead_2[0]);
                    }
                }
            }
        }
    }

    /* End of Chart: '<S307>/Get_Data_Indexes ' */
    /* End of Outputs for SubSystem: '<S146>/STCC_MtrACap' */

    /* Inport: '<Root>/VaMTQR_M_MtrAMaxCpblty_ST' */
    (void)Rte_Read_VaMTQR_M_MtrAMaxCpblty_ST_Value(tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S146>/STCC_MtrACap' */
    /* Selector: '<S306>/Selector4' incorporates:
     *  SignalConversion: '<S204>/Signal Conversion5'
     */
    /* Transition: '<S308>:5' */
    rtb_TmpSignalConversionAtVeCS_b = tmpRead_3[(sint32)
        rtb_TmpSignalConversionAtVeCS_b];

    /* VariantMerge generated from: '<S144>/VeSTCR_M_MtrAMaxCapStrtSpd' incorporates:
     *  Constant: '<S304>/Calib'
     *  Product: '<S204>/Product'
     *  Product: '<S306>/Multiplication'
     *  Selector: '<S306>/Selector3'
     *  Selector: '<S306>/Selector4'
     *  SignalConversion: '<S204>/Signal Conversion5'
     *  Sum: '<S306>/Summation'
     *  Sum: '<S306>/Summation1'
     */
    STCR_ac_B.VariantMergeForOutportVeSTCR_M_ = (((tmpRead_3[(sint32)
        rtb_TmpSignalConversionAtVeAP_h] - rtb_TmpSignalConversionAtVeCS_b) *
        rtb_TmpSignalConversionAtVeB_ip) + rtb_TmpSignalConversionAtVeCS_b) *
        ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());

    /* RelationalOperator: '<S204>/Comparison3' incorporates:
     *  Lookup_n-D: '<S305>/Vector'
     *  SignalConversion generated from: '<S2>/VeENGR_T_EngCoolantTemp'
     */
    rtb_VeSTCR_b_AStrtMtrACap = (STCR_ac_B.VariantMergeForOutportVeSTCR_M_ <=
        look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeEN_p, ((const float32 *)
        &(KxSTCR_M_MtrAMinCapEngOff[0])), ((const float32 *)
        &(KtSTCR_M_MtrAMinCapEngOff[0])), 3U));

    /* End of Outputs for SubSystem: '<S146>/STCC_MtrACap' */

    /* Outputs for Atomic SubSystem: '<S146>/STCC_AStpInhibitRsns' */
    /* Outputs for Atomic SubSystem: '<S197>/STCC_HardChk_AStpInhbtRsn1' */
    /* Switch: '<S209>/Switch5' */
    if (rtb_Comparison6_cf)
    {
        /* Switch: '<S209>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry20'
         *  S-Function (sfix_bitop): '<S226>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p = VeSTCR_g_AStpInhbtRsn1_DS | 1U;
    }
    else
    {
        /* Switch: '<S209>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry20'
         *  S-Function (sfix_bitop): '<S218>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S218>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S218>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~VeSTCR_g_AStpInhbtRsn1_DS) | 1U);
    }

    /* End of Switch: '<S209>/Switch5' */

    /* Switch: '<S209>/Switch4' */
    if (rtb_AND_dh)
    {
        /* Switch: '<S209>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S221>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 4U;
    }
    else
    {
        /* Switch: '<S209>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S213>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S213>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S213>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 4U);
    }

    /* End of Switch: '<S209>/Switch4' */

    /* Switch: '<S209>/Switch1' */
    if (rtb_VariantMerge_For_Variant__e)
    {
        /* Switch: '<S209>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S223>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 16U;
    }
    else
    {
        /* Switch: '<S209>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 16U);
    }

    /* End of Switch: '<S209>/Switch1' */

    /* Switch: '<S209>/Switch11' */
    if (rtb_TmpSignalConversionAtVeHP_g)
    {
        /* Switch: '<S209>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S222>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 32U;
    }
    else
    {
        /* Switch: '<S209>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 32U);
    }

    /* End of Switch: '<S209>/Switch11' */

    /* Switch: '<S209>/Switch15' */
    if (rtb_VeSTCR_b_KeyInCrank)
    {
        /* Switch: '<S209>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 2048U;
    }
    else
    {
        /* Switch: '<S209>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S220>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S220>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S220>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 2048U);
    }

    /* End of Switch: '<S209>/Switch15' */

    /* Switch: '<S209>/Switch7' */
    if (rtb_OR1_ak4)
    {
        /* Switch: '<S209>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S227>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 16777216U;
    }
    else
    {
        /* Switch: '<S209>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S219>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S219>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S219>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 16777216U);
    }

    /* End of Switch: '<S209>/Switch7' */

    /* Switch: '<S209>/Switch8' */
    if (rtb_AND_hov)
    {
        /* Switch: '<S209>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S224>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 67108864U;
    }
    else
    {
        /* Switch: '<S209>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 67108864U);
    }

    /* End of Switch: '<S209>/Switch8' */

    /* Switch: '<S209>/Switch2' incorporates:
     *  DataStoreWrite: '<S197>/Dsw_PID_AStrtEntry10'
     *  S-Function (sfix_bitop): '<S217>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S217>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S217>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S225>/FixPt Bitwise Operator1'
     */
    if (rtb_LeSTCR_b_AStrtCmndRemoteStr)
    {
        VeSTCR_g_AStpInhbtRsn1_DS = rtb_Switch5_p | 536870912U;
    }
    else
    {
        VeSTCR_g_AStpInhbtRsn1_DS = ~((~rtb_Switch5_p) | 536870912U);
    }

    /* End of Switch: '<S209>/Switch2' */
    /* End of Outputs for SubSystem: '<S197>/STCC_HardChk_AStpInhbtRsn1' */

    /* Outputs for Atomic SubSystem: '<S197>/STCC_STCC_EVModeInhbtRsn2' */
    /* Switch: '<S212>/Switch5' */
    if (rtb_VeSTCR_b_AStrtMtrACap)
    {
        /* Switch: '<S212>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry24'
         *  S-Function (sfix_bitop): '<S254>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p = VeSTCR_g_EVModeInhbtRsn2_DS | 2048U;
    }
    else
    {
        /* Switch: '<S212>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry24'
         *  S-Function (sfix_bitop): '<S251>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S251>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S251>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~VeSTCR_g_EVModeInhbtRsn2_DS) | 2048U);
    }

    /* End of Switch: '<S212>/Switch5' */

    /* Switch: '<S212>/Switch4' */
    if (rtb_LeSTCR_b_AStrtPwrLimOn)
    {
        /* Switch: '<S212>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S256>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 32768U;
    }
    else
    {
        /* Switch: '<S212>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S253>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S253>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S253>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 32768U);
    }

    /* End of Switch: '<S212>/Switch4' */

    /* Switch: '<S212>/Switch1' incorporates:
     *  DataStoreWrite: '<S197>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S252>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S252>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S252>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S255>/FixPt Bitwise Operator1'
     */
    if (rtb_UnitDelay_bf)
    {
        VeSTCR_g_EVModeInhbtRsn2_DS = rtb_Switch5_p | 262144U;
    }
    else
    {
        VeSTCR_g_EVModeInhbtRsn2_DS = ~((~rtb_Switch5_p) | 262144U);
    }

    /* End of Switch: '<S212>/Switch1' */
    /* End of Outputs for SubSystem: '<S197>/STCC_STCC_EVModeInhbtRsn2' */

    /* Outputs for Atomic SubSystem: '<S197>/STCC_HardChk_AStpInhbtRsn2' */
    /* Switch: '<S210>/Switch5' */
    if (rtb_VeSTCR_b_AStrtMtrACap)
    {
        /* Switch: '<S210>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry26'
         *  S-Function (sfix_bitop): '<S234>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p = VeSTCR_g_AStpInhbtRsn2_DS | 2048U;
    }
    else
    {
        /* Switch: '<S210>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry26'
         *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~VeSTCR_g_AStpInhbtRsn2_DS) | 2048U);
    }

    /* End of Switch: '<S210>/Switch5' */

    /* Switch: '<S210>/Switch4' */
    if (rtb_LeSTCR_b_AStrtPwrLimOn)
    {
        /* Switch: '<S210>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S232>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 32768U;
    }
    else
    {
        /* Switch: '<S210>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 32768U);
    }

    /* End of Switch: '<S210>/Switch4' */

    /* Switch: '<S210>/Switch1' incorporates:
     *  DataStoreWrite: '<S197>/Dsw_PID_AStrtEntry13'
     *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S233>/FixPt Bitwise Operator1'
     */
    if (rtb_UnitDelay_bf)
    {
        VeSTCR_g_AStpInhbtRsn2_DS = rtb_Switch5_p | 262144U;
    }
    else
    {
        VeSTCR_g_AStpInhbtRsn2_DS = ~((~rtb_Switch5_p) | 262144U);
    }

    /* End of Switch: '<S210>/Switch1' */
    /* End of Outputs for SubSystem: '<S197>/STCC_HardChk_AStpInhbtRsn2' */

    /* Outputs for Atomic SubSystem: '<S197>/STCC_STCC_EVModeInhbtRsn1' */
    /* Switch: '<S211>/Switch5' */
    if (rtb_Comparison6_cf)
    {
        /* Switch: '<S211>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry17'
         *  S-Function (sfix_bitop): '<S247>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p = VeSTCR_g_EVModeInhbtRsn1_DS | 1U;
    }
    else
    {
        /* Switch: '<S211>/Switch5' incorporates:
         *  DataStoreRead: '<S197>/Dsr_PID_AStrtEntry17'
         *  S-Function (sfix_bitop): '<S239>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S239>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S239>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~VeSTCR_g_EVModeInhbtRsn1_DS) | 1U);
    }

    /* End of Switch: '<S211>/Switch5' */

    /* Switch: '<S211>/Switch4' */
    if (rtb_AND_dh)
    {
        /* Switch: '<S211>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S244>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 4U;
    }
    else
    {
        /* Switch: '<S211>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S236>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S236>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S236>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 4U);
    }

    /* End of Switch: '<S211>/Switch4' */

    /* Switch: '<S211>/Switch1' */
    if (rtb_VariantMerge_For_Variant__e)
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S249>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 16U;
    }
    else
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S241>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S241>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S241>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 16U);
    }

    /* End of Switch: '<S211>/Switch1' */

    /* Switch: '<S211>/Switch11' */
    if (rtb_TmpSignalConversionAtVeHP_g)
    {
        /* Switch: '<S211>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S250>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 32U;
    }
    else
    {
        /* Switch: '<S211>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S242>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S242>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S242>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 32U);
    }

    /* End of Switch: '<S211>/Switch11' */

    /* Switch: '<S211>/Switch15' */
    if (rtb_VeSTCR_b_KeyInCrank)
    {
        /* Switch: '<S211>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S248>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 2048U;
    }
    else
    {
        /* Switch: '<S211>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S240>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S240>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S240>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 2048U);
    }

    /* End of Switch: '<S211>/Switch15' */

    /* Switch: '<S211>/Switch7' */
    if (rtb_OR1_ak4)
    {
        /* Switch: '<S211>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S246>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 16777216U;
    }
    else
    {
        /* Switch: '<S211>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S238>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S238>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S238>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 16777216U);
    }

    /* End of Switch: '<S211>/Switch7' */

    /* Switch: '<S211>/Switch8' */
    if (rtb_AND_hov)
    {
        /* Switch: '<S211>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_p |= 67108864U;
    }
    else
    {
        /* Switch: '<S211>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S235>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S235>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S235>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_p = ~((~rtb_Switch5_p) | 67108864U);
    }

    /* End of Switch: '<S211>/Switch8' */

    /* Switch: '<S211>/Switch2' incorporates:
     *  DataStoreWrite: '<S197>/Dsw_PID_AStrtEntry9'
     *  S-Function (sfix_bitop): '<S237>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S237>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S237>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S245>/FixPt Bitwise Operator1'
     */
    if (rtb_LeSTCR_b_AStrtCmndRemoteStr)
    {
        VeSTCR_g_EVModeInhbtRsn1_DS = rtb_Switch5_p | 536870912U;
    }
    else
    {
        VeSTCR_g_EVModeInhbtRsn1_DS = ~((~rtb_Switch5_p) | 536870912U);
    }

    /* End of Switch: '<S211>/Switch2' */
    /* End of Outputs for SubSystem: '<S197>/STCC_STCC_EVModeInhbtRsn1' */
    /* End of Outputs for SubSystem: '<S146>/STCC_AStpInhibitRsns' */

    /* VariantMerge generated from: '<S144>/HardChkEngOn' incorporates:
     *  Logic: '<S146>/OR3'
     */
    STCR_ac_B.VariantMergeForOutportHardChkEn =
        (((((((((rtb_VariantMerge_For_Variant__e || rtb_VeSTCR_b_KeyInCrank) ||
                rtb_OR1_ak4) || rtb_LeSTCR_b_AStrtStpBatVAlw) || rtb_AND_hov) ||
             rtb_LeSTCR_b_AStrtCmndRemoteStr) || rtb_TmpSignalConversionAtVeHP_g)
           || rtb_LeSTCR_b_AStrtPwrLimOn) || rtb_UnitDelay_bf) ||
         rtb_VeSTCR_b_AStrtMtrACap);

    /* VariantMerge generated from: '<S144>/HardChkEngOnForOHSR' incorporates:
     *  Logic: '<S203>/Logical4'
     */
    STCR_ac_B.VariantMergeForOutportHardChk_e = ((((((((rtb_VeSTCR_b_KeyInCrank ||
        rtb_OR1_ak4) || rtb_LeSTCR_b_AStrtStpBatVAlw) || rtb_AND_hov) ||
        rtb_LeSTCR_b_AStrtCmndRemoteStr) || rtb_TmpSignalConversionAtVeHP_g) ||
        rtb_LeSTCR_b_AStrtPwrLimOn) || rtb_UnitDelay_bf) ||
        rtb_VeSTCR_b_AStrtMtrACap);

    /* VariantMerge generated from: '<S144>/EngOffAlwdHardChk' incorporates:
     *  Logic: '<S203>/NOT'
     */
    STCR_ac_B.VariantMergeForOutportEngOffA_i = !rtb_OR1_ak4;

    /* VariantMerge generated from: '<S144>/VeSTCR_b_EngOnFuelOn' incorporates:
     *  Constant: '<S203>/Constant Value'
     *  Constant: '<S203>/Constant Value1'
     *  Constant: '<S203>/Constant Value3'
     *  Constant: '<S302>/Calib'
     *  Logic: '<S203>/Logical5'
     *  Logic: '<S203>/Logical8'
     *  Logic: '<S203>/Logical9'
     *  Logic: '<S203>/OR1'
     *  RelationalOperator: '<S203>/Comparison3'
     *  RelationalOperator: '<S203>/Comparison4'
     *  RelationalOperator: '<S203>/Comparison5'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator5'
     */
    STCR_ac_B.VariantMergeForOutportVeSTCR_b_ = (((rtb_LeSTCR_b_AStrtStpBatVAlw &&
        ((KeSTCR_g_AStrtFuelOnRsn & 1024U) > 0U)) || (rtb_LeSTCR_b_AStrtPwrLimOn
        && ((KeSTCR_g_AStrtFuelOnRsn & 16384U) > 0U))) || (rtb_UnitDelay_bf &&
        ((KeSTCR_g_AStrtFuelOnRsn & 32768U) > 0U)));

    /* End of Outputs for SubSystem: '<S144>/EnblFcn' */
#endif

    /* End of Outputs for SubSystem: '<S143>/VarSS_AutoStrtStpHardChk' */

    /* Outport: '<Root>/VeSTCR_b_HardChkEngOn' incorporates:
     *  SignalConversion generated from: '<S2>/HardChkEngOn'
     */
    (void)Rte_Write_VeSTCR_b_HardChkEngOn_Value
        (STCR_ac_B.VariantMergeForOutportHardChkEn);

    /* Outport: '<Root>/VeSTCR_b_HardChkEngOnForOHSR' incorporates:
     *  SignalConversion generated from: '<S2>/HardChkEngOnForOHSR'
     */
    (void)Rte_Write_VeSTCR_b_HardChkEngOnForOHSR_Value
        (STCR_ac_B.VariantMergeForOutportHardChk_e);

    /* Outport: '<Root>/VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTCR_M_MtrAMaxCapStrtSpd'
     */
    (void)Rte_Write_VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft_Value
        (STCR_ac_B.VariantMergeForOutportVeSTCR_M_);

    /* Merge: '<Root>/EngOffAlwdHardChk_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTCR_b_EngOffAlwdHardChk_write'
     * */
    Rte_IrvWrite_STCR_MedTEF_VeSTCR_b_EngOffAlwdHardChk_write_IRV
        (STCR_ac_B.VariantMergeForOutportEngOffA_i);

    /* Merge: '<Root>/EngOnFuelOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTCR_b_EngOnFuelOn_write'
     * */
    Rte_IrvWrite_STCR_MedTEF_VeSTCR_b_EngOnFuelOn_write_IRV
        (STCR_ac_B.VariantMergeForOutportVeSTCR_b_);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
}

/* Model step function for TID3 */
FUNC(void, STCR_CODE) STCR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if !Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2p5Equipd

    TeDMDR_e_SailOffStat tmpRead;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_0;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TePLTR_e_Towing_MD_RQ tmpRead_3;

#endif

#if !(!Rte_SysCon_Variant_STCR_REEVEquipd) && !Rte_SysCon_Variant_STCR_DsblFcn

    TeTMDR_e_TrrnMd tmpRead_4;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 tmpRead_5;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_TmpSignalConversionAtDCOvrl;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_TmpSignalConversionAtV2L_En;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeCSVR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_AND2_p;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpBattPwrTrg;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwBatSOC;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtVehSOC;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwMtrATem;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwECT;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_AStrtStpAlwVldtyCh;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtVehSpd;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwMtrA_Co;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtTowHaul;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwBatTe_b;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpBoostCnvrt;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwThrml;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwTransTe;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_OR1_oc;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VariantMerge_For_Variant_So;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtAlwTransManMd;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Gain_d;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtPrimNo;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_BeltTempChk;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwBatTe_c;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_MildHybridCndtnsOK;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_MtrBTempMH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_P_BatPwrMH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeBPCR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_MtrATempMH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_BatTempMxMH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeBP_f;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_BatTempMnMH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_TransTempMxMH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeTFTR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_TransTempMnMH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_T_SoftChkMtrA_Cool_i;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_LeSTCR_b_AStrtStpAlwBatTemp;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeATRR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeAPSR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Switch1_gx;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_MildHybridEnbld;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Comparison2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_fy;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_v_SoftChkVehSpdNegMa;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_AStrtTmrEngOnDsrd;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_Pct_SoftChkVehSOCLim;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_T_SoftChkInvrtrATemp;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_T_SoftChkInvrtrBTemp;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_T_SoftChkTransTmpMin;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeESMR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Switch_pt;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_Pct_SoftChkBatSOCDel;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeENGR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_hy;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_n5;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_dp;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_n4;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_d;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_of;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_n;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_ay;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_m;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_c;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_fc;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_np;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_f;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_ek;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Compare_jh;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical_n3;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_lo;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_pd;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_i;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_c;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_k;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_oj;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_bf;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_i2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_p;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_b;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_n;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_ns;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_mqr;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_j;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_cp;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_ah;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_g;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_nn;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_bt;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_du;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Switch_ci;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Switch_ff;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_cf;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_i;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_MtrA_CoolantTempMa;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_P_BattPwrDMinCal_MH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_BatTempMaxCal_MH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_MtrBTempmMaxCal_MH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_TransTempMaxCal_MH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_TransTempMinCal_MH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCR_T_MtrATempMaxCal_MH;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_TmrFrstEngOnDsrdFn;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_VeSTCR_v_SoftChkVehSpdMaxCa;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeVSDR;

#endif

#if (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd)

    uint8 rtb_DataTypeConversion2;

#endif

#if (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd)

    uint8 rtb_TmpSignalConversionAtVeTMDR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_VeSTCR_b_StrtRqAWDOff;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Switch1_bd;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeUBTR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    uint32 rtb_Switch5_c1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_AND_po;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product1_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_k4;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_ay;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product2_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_fr;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_af;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_jx;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product10_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product10_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_p1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product11_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product11_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_pu;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product12_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product12_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_o;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product13_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product13_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_cy;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product14_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product14_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_op;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product15_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product15_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_du;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product16_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product16_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_eh;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product17_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product17_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_d;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product18_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product18_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_om;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product19_1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Product19_2;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_pm;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_AND_nhk;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch_o3;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_gk;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_Switch1_g1;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_AND_l50;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_TmpSignalConversionAtVeHPMR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    uint16 rtb_Switch1_df;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeAATR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_TmpSignalConversionAtVeABCR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeSTRR_e_HybStrtrSt rtb_TmpSignalConversionAtVeST_f;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeDMDR_e_DrvMd rtb_TmpSignalConversionAtVeDMDR;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    TeSTRR_e_SilentStrtChkMod rtb_TmpSignalConversionAtVeSTRR;

#endif

#if (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd)

    TeTMDR_e_LockLowSt rtb_TmpSignalConversionAtVeTM_l;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    float32 rtb_LeSTCC_v_VehSpdAbs_tmp;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    sint32 rtb_Switch1_ih_tmp;

#endif

#if !Rte_SysCon_Variant_STCR_DsblFcn

    boolean rtb_Logical2_cr_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/STCR_MedTEH'
     */
    /* SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
     *  SignalConversion generated from: '<S3>/VeAPSR_Pct_AccelPedalEffPosition'
     *  SignalConversion generated from: '<S3>/VeATRR_M_OutputTorqReqImmed'
     *  SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp'
     *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
     *  SignalConversion generated from: '<S3>/VeDMDR_e_DrvMdArb'
     *  SignalConversion generated from: '<S3>/VeENGR_T_EngCoolantTemp'
     *  SignalConversion generated from: '<S3>/VeHPMR_b_PropSysActv'
     *  SignalConversion generated from: '<S3>/VeSTRR_e_HybStrtrSt'
     *  SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp'
     *  SignalConversion generated from: '<S3>/VeTRGR_e_VldtdTransRngSt'
     */
#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeBP_f);

    /* SignalConversion generated from: '<S3>/VeENGR_T_EngCoolantTemp' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&rtb_TmpSignalConversionAtVeENGR);

    /* SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&rtb_TmpSignalConversionAtVeAATR);

    /* SignalConversion generated from: '<S3>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S3>/VeATRR_M_OutputTorqReqImmed' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmed'
     */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmed_Value
        (&rtb_TmpSignalConversionAtVeATRR);

    /* SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S3>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&rtb_TmpSignalConversionAtVeTFTR);

    /* SignalConversion generated from: '<S3>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR);

    /* SignalConversion generated from: '<S3>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S3>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&rtb_TmpSignalConversionAtVeST_f);

    /* SignalConversion generated from: '<S3>/VeDMDR_e_DrvMdArb' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value(&rtb_TmpSignalConversionAtVeDMDR);

#endif

    /* End of SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb' */

    /* SignalConversion generated from: '<S3>/VeTMDR_e_LockLowSt' */
#if (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd)

    /* SignalConversion generated from: '<S3>/VeTMDR_e_LockLowSt' incorporates:
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     */
    (void)Rte_Read_VeTMDR_e_LockLowSt_Value(&rtb_TmpSignalConversionAtVeTM_l);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTMDR_e_LockLowSt' */

    /* SignalConversion generated from: '<S3>/DCOvrld_EngOn_Read' incorporates:
     *  SignalConversion generated from: '<S3>/V2L_EngON_Read'
     *  SignalConversion generated from: '<S3>/VeABCR_P_HV_AccPwr'
     *  SignalConversion generated from: '<S3>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt'
     *  SignalConversion generated from: '<S3>/VeSTRR_e_StrtChkMod'
     *  SignalConversion generated from: '<S3>/VeUBTR_T_FEAD_EstBeltTemp'
     *  SignalConversion generated from: '<S3>/VeVSDR_n_PrimNoSgndFltrd'
     */
#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* SignalConversion generated from: '<S3>/DCOvrld_EngOn_Read' incorporates:
     *  Merge: '<Root>/DCOvrld_EngOn_IRV_Merge'
     */
    rtb_TmpSignalConversionAtDCOvrl =
        Rte_IrvRead_STCR_MedTEH_VeSTCR_b_DCOvrld_EngOn_write_IRV();

    /* SignalConversion generated from: '<S3>/VeSTRR_e_StrtChkMod' incorporates:
     *  Inport: '<Root>/VeSTRR_e_StrtChkMod'
     */
    (void)Rte_Read_VeSTRR_e_StrtChkMod_Value(&rtb_TmpSignalConversionAtVeSTRR);

    /* SignalConversion generated from: '<S3>/VeABCR_P_HV_AccPwr' incorporates:
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value(&rtb_TmpSignalConversionAtVeABCR);

    /* SignalConversion generated from: '<S3>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR);

    /* SignalConversion generated from: '<S3>/VeUBTR_T_FEAD_EstBeltTemp' incorporates:
     *  Inport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp'
     */
    (void)Rte_Read_VeUBTR_T_FEAD_EstBeltTemp_Value
        (&rtb_TmpSignalConversionAtVeUBTR);

    /* SignalConversion generated from: '<S3>/V2L_EngON_Read' incorporates:
     *  Merge: '<Root>/V2L_EngON_IRV_Merge'
     */
    rtb_TmpSignalConversionAtV2L_En =
        Rte_IrvRead_STCR_MedTEH_VeSTCR_b_V2L_EngON_write_IRV();

    /* SignalConversion generated from: '<S3>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt' incorporates:
     *  Inport: '<Root>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt'
     */
    (void)Rte_Read_VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Value
        (&rtb_TmpSignalConversionAtVeESMR);

#endif

    /* End of SignalConversion generated from: '<S3>/DCOvrld_EngOn_Read' */

    /* SignalConversion generated from: '<S3>/VeTMDR_i_TrueTrrnMd' */
#if (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P2Equipd) || (!Rte_SysCon_Variant_STCR_DsblFcn && Rte_SysCon_Variant_STCR_P4Equipd)

    /* SignalConversion generated from: '<S3>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  Inport: '<Root>/VeTMDR_i_TrueTrrnMd'
     */
    (void)Rte_Read_VeTMDR_i_TrueTrrnMd_Value(&rtb_TmpSignalConversionAtVeTMDR);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTMDR_i_TrueTrrnMd' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/STCC_SoftChkConfg'
     */
    /* Outputs for Atomic SubSystem: '<S343>/VarSS_AutpStrtStpSoftChk' */
#if Rte_SysCon_Variant_STCR_DsblFcn

    /* Outputs for Atomic SubSystem: '<S345>/DsblFcn' */
    /* Outputs for Atomic SubSystem: '<S346>/BitSetter' */
    /* Switch: '<S348>/Switch13' incorporates:
     *  DataStoreRead: '<S346>/Data Store Read1'
     *  DataStoreWrite: '<S346>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S352>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S352>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S352>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S353>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S353>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S353>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S354>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S354>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S354>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S355>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S355>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S355>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S356>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S356>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S356>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S357>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S357>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S357>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S358>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S358>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S358>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S359>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S359>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S359>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S360>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S360>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S360>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S361>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S361>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S361>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S362>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S362>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S362>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S363>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S363>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S363>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S364>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S364>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S364>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S365>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S365>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S365>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S366>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S366>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S366>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S367>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S367>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S367>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_AStpInhbtRsn1_DS = ~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((
        ~(~((~(~((~(~((~(~((~(~((~(~((~VeSTCR_g_AStpInhbtRsn1_DS) | 2U))) | 8U)))
        | 128U))) | 512U))) | 8192U))) | 16384U))) | 32768U))) | 131072U))) |
        262144U))) | 524288U))) | 2097152U))) | 4194304U))) | 8388608U))) |
        134217728U))) | 268435456U))) | 1073741824U);

    /* End of Outputs for SubSystem: '<S346>/BitSetter' */

    /* Outputs for Atomic SubSystem: '<S346>/BitSetter01' */
    /* Switch: '<S349>/Switch8' incorporates:
     *  DataStoreRead: '<S346>/Data Store Read'
     *  DataStoreWrite: '<S346>/Dsw_PID_AStrtEntry17'
     *  S-Function (sfix_bitop): '<S384>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S384>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S384>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S385>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S385>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S385>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S386>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S386>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S386>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S387>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S387>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S387>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S388>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S388>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S388>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S389>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S389>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S389>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S390>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S390>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S390>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S391>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S391>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S391>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S392>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S392>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S392>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S393>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S393>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S393>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S394>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S394>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S394>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S395>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S395>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S395>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_AStpInhbtRsn2_DS = ~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((
        ~(~((~(~((~VeSTCR_g_AStpInhbtRsn2_DS) | 512U))) | 16384U))) | 524288U)))
        | 1048576U))) | 2097152U))) | 4194304U))) | 8388608U))) | 33554432U))) |
        67108864U))) | 268435456U))) | 536870912U))) | 2147483648U);

    /* End of Outputs for SubSystem: '<S346>/BitSetter01' */

    /* Outputs for Atomic SubSystem: '<S346>/BitSetter02' */
    /* Switch: '<S350>/Switch2' incorporates:
     *  DataStoreRead: '<S346>/Data Store Read2'
     *  DataStoreWrite: '<S346>/Dsw_PID_AStrtEntry9'
     *  S-Function (sfix_bitop): '<S408>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S408>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S408>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S409>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S409>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S409>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S410>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S410>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S410>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S411>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S411>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S411>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S412>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S412>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S412>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S413>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S413>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S413>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S414>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S414>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S414>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S415>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S415>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S415>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S416>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S416>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S416>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S417>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S417>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S417>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S418>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S418>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S418>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_EVModeInhbtRsn1_DS =
        ~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~VeSTCR_g_EVModeInhbtRsn1_DS)
        | 128U))) | 512U))) | 8192U))) | 32768U))) | 131072U))) | 262144U))) |
                      524288U))) | 2097152U))) | 4194304U))) | 134217728U))) |
          268435456U);

    /* End of Outputs for SubSystem: '<S346>/BitSetter02' */

    /* Outputs for Atomic SubSystem: '<S346>/BitSetter03' */
    /* Switch: '<S351>/Switch10' incorporates:
     *  DataStoreRead: '<S346>/Data Store Read3'
     *  DataStoreWrite: '<S346>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S430>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S430>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S430>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S431>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S431>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S431>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S432>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S432>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S432>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S433>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S433>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S433>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S434>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S434>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S434>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S435>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S435>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S435>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S436>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S436>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S436>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S437>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S437>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S437>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S439>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S439>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S439>/FixPt Bitwise Operator5'
     */
    VeSTCR_g_EVModeInhbtRsn2_DS =
        ~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~(~((~VeSTCR_g_EVModeInhbtRsn2_DS)
        | 512U))) | 1048576U))) | 2097152U))) | 4194304U))) | 8388608U))) |
                      33554432U))) | 67108864U))) | 268435456U))) | 536870912U)))
          | 2147483648U);

    /* End of Outputs for SubSystem: '<S346>/BitSetter03' */

    /* VariantMerge generated from: '<S345>/BatSOCDelta4mArb' incorporates:
     *  Constant: '<S346>/Constant Value'
     */
    STCR_ac_B.VariantMergeForOutportBatSOCDel = 0.0F;

    /* VariantMerge generated from: '<S345>/EngOffAlwdSlow' incorporates:
     *  Constant: '<S346>/Constant'
     */
    STCR_ac_B.VariantMergeForOutportEngOffAlw = false;

    /* VariantMerge generated from: '<S345>/SoftChkEngOnFuelOn' incorporates:
     *  Constant: '<S346>/Constant1'
     */
    STCR_ac_B.VariantMergeForOutportSoftChkEn = false;

    /* End of Outputs for SubSystem: '<S345>/DsblFcn' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#else

    /* Outputs for Atomic SubSystem: '<S345>/EnblFcn' */
    /* Inport: '<Root>/VeTRAR_b_ThermalDerateEnbld' */
    (void)Rte_Read_VeTRAR_b_ThermalDerateEnbld_Value(&rtb_AND_l50);

    /* Inport: '<Root>/VeSTRR_b_EngOffAllwdECM' */
    (void)Rte_Read_VeSTRR_b_EngOffAllwdECM_Value
        (&rtb_LeSTCR_b_AStrtAlwTransManMd);

    /* Inport: '<Root>/VeSTRR_b_EngOffAllowed' */
    (void)Rte_Read_VeSTRR_b_EngOffAllowed_Value(&rtb_LeSTCR_b_AStrtStpAlwMtrA_Co);

    /* Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorqILE' */
    (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorqILE_Value(&rtb_Switch1_cf);

    /* Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq' */
    (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorq_Value
        (&rtb_VeSTCR_T_SoftChkMtrA_Cool_i);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ComboSoftChk' */
    /* Outputs for Atomic SubSystem: '<S451>/ThermalSystem_Chks' */
    /* Outputs for Atomic SubSystem: '<S480>/StressFactorChk' */
    /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
    /* Outputs for Atomic SubSystem: '<S481>/SailOFFChk' */
    /* Outputs for Atomic SubSystem: '<S347>/STCC_ProcessSoftChkCals' */
    /* Abs: '<S452>/Abs' incorporates:
     *  Abs: '<S451>/Abs'
     *  Abs: '<S451>/Abs1'
     *  Abs: '<S451>/Abs2'
     *  Abs: '<S941>/Abs'
     *  Abs: '<S950>/Abs'
     */
    rtb_LeSTCC_v_VehSpdAbs_tmp = fabsf(rtb_TmpSignalConversionAtVeCSVR);

    /* End of Outputs for SubSystem: '<S481>/SailOFFChk' */
    /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */
    /* End of Outputs for SubSystem: '<S480>/StressFactorChk' */
    /* End of Outputs for SubSystem: '<S451>/ThermalSystem_Chks' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ComboSoftChk' */

    /* Outputs for Atomic SubSystem: '<S452>/DtrmnMildHybridState' */
    /* Outputs for Atomic SubSystem: '<S997>/Hysteresis' */
    /* Switch: '<S1010>/Switch1' incorporates:
     *  Abs: '<S452>/Abs'
     *  Constant: '<S1018>/Calib'
     *  RelationalOperator: '<S1010>/Greater  Than'
     */
    if (rtb_LeSTCC_v_VehSpdAbs_tmp > KeSTCR_v_VehSpdMax_MildHyb)
    {
        /* Switch: '<S1010>/Switch1' incorporates:
         *  Constant: '<S1010>/Constant Value'
         */
        rtb_Switch1_gx = true;
    }
    else
    {
        /* Switch: '<S1010>/Switch1' incorporates:
         *  Constant: '<S1019>/Calib'
         *  RelationalOperator: '<S1010>/Greater  Than1'
         *  UnitDelay: '<S1010>/Unit Delay'
         */
        rtb_Switch1_gx = ((rtb_LeSTCC_v_VehSpdAbs_tmp >=
                           KeSTCR_v_VehSpdMin_MildHyb) &&
                          (STCR_ac_DW.UnitDelay_DSTATE_nk));
    }

    /* End of Switch: '<S1010>/Switch1' */
    /* End of Outputs for SubSystem: '<S997>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S452>/DtrmnMildHybridState' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ProcessSoftChkCals' */

    /* Inport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA' */
    (void)Rte_Read_VeBTQR_b_DrvrIntndedTotBrkTrqFA_Value
        (&rtb_VeSTCR_b_MildHybridCndtnsOK);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ProcessSoftChkCals' */
    /* Outputs for Atomic SubSystem: '<S452>/DtrmnMildHybridState' */
    /* Outputs for Atomic SubSystem: '<S997>/Hysteresis' */
    /* Update for UnitDelay: '<S1010>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_nk = rtb_Switch1_gx;

    /* End of Outputs for SubSystem: '<S997>/Hysteresis' */

    /* Logic: '<S451>/OR7' incorporates:
     *  Logic: '<S997>/Logical1'
     */
    rtb_Switch1_gx = !rtb_Switch1_gx;

    /* Logic: '<S997>/Logical5' incorporates:
     *  Constant: '<S1007>/Constant'
     *  Constant: '<S1008>/Constant'
     *  Constant: '<S1011>/Calib'
     *  Constant: '<S1012>/Calib'
     *  Constant: '<S1013>/Calib'
     *  Constant: '<S1014>/Calib'
     *  Constant: '<S1015>/Calib'
     *  Logic: '<S997>/Logical'
     *  Logic: '<S997>/Logical2'
     *  Logic: '<S997>/Logical3'
     *  Logic: '<S997>/Logical6'
     *  Logic: '<S997>/Logical8'
     *  Logic: '<S997>/Logical9'
     *  RelationalOperator: '<S997>/Comparison1'
     *  RelationalOperator: '<S997>/Comparison2'
     *  RelationalOperator: '<S997>/Comparison3'
     *  RelationalOperator: '<S997>/Comparison4'
     *  RelationalOperator: '<S997>/Comparison6'
     *  RelationalOperator: '<S997>/Comparison7'
     *  RelationalOperator: '<S997>/Comparison8'
     */
    rtb_VeSTCR_b_MildHybridCndtnsOK = (((((uint32)
        rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark) ||
        ((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
          CeTRGR_e_TransRangeNeutral) && rtb_Switch1_gx)) || ((rtb_Switch1_gx &&
        ((((rtb_VeSTCR_T_SoftChkMtrA_Cool_i > KeSTCR_M_BrakeThres_MildHyb) &&
           (!rtb_VeSTCR_b_MildHybridCndtnsOK)) || (rtb_Switch1_cf >
        KeSTCR_M_ILEBrakeThres_MildHyb)) || ((rtb_TmpSignalConversionAtVeATRR <
        KeSTCR_M_ToReqMax_MildHyb) && (rtb_TmpSignalConversionAtVeATRR >
        KeSTCR_M_ToReqMin_MildHyb)))) && (rtb_TmpSignalConversionAtVeAPSR <
        KeSTCR_Pct_AccelPdlMax_MildHyb)));

    /* Logic: '<S997>/Logical7' incorporates:
     *  Constant: '<S1009>/Constant'
     *  Constant: '<S1016>/Calib'
     *  Constant: '<S1017>/Calib'
     *  Logic: '<S997>/Logical10'
     *  Logic: '<S997>/Logical4'
     *  RelationalOperator: '<S997>/Comparison5'
     */
    rtb_VeSTCR_b_MildHybridEnbld = (rtb_VeSTCR_b_MildHybridCndtnsOK &&
        ((KeSTCR_b_BypassDrvMd_MildHyb) || ((KeSTCR_b_EnblDrvMd_MildHyb) &&
        (((uint32)rtb_TmpSignalConversionAtVeDMDR) == CeDMDR_e_EV))));

    /* End of Outputs for SubSystem: '<S452>/DtrmnMildHybridState' */

    /* Outputs for Atomic SubSystem: '<S452>/STCC_Tmrs' */
    /* RelationalOperator: '<S1006>/Comparison2' incorporates:
     *  Constant: '<S1221>/Constant'
     */
    rtb_Comparison2 = (((uint32)rtb_TmpSignalConversionAtVeST_f) ==
                       CeSTRR_e_KeyOffSt);

    /* Logic: '<S1006>/Logical2' incorporates:
     *  Constant: '<S1220>/Constant'
     *  Constant: '<S1223>/Constant'
     *  RelationalOperator: '<S1006>/Comparison5'
     *  RelationalOperator: '<S1006>/Comparison6'
     */
    rtb_Logical2_fy = ((CeSTRR_e_EngRunningSt == ((uint32)
                         rtb_TmpSignalConversionAtVeST_f)) ||
                       (CeSTRR_e_EngStartingSt == ((uint32)
                         rtb_TmpSignalConversionAtVeST_f)));

    /* Outputs for Atomic SubSystem: '<S1006>/Stop Watch Reset Enabled3' */
    /* Switch: '<S1227>/Switch1' incorporates:
     *  Constant: '<S1006>/Constant Value9'
     *  Logic: '<S1006>/Logical1'
     *  RelationalOperator: '<S1006>/Comparison7'
     *  Switch: '<S1227>/Switch2'
     *  UnitDelay: '<S1006>/Unit Delay'
     */
    if (rtb_Comparison2)
    {
        /* Switch: '<S1227>/Switch1' incorporates:
         *  Constant: '<S1227>/Constant Value2'
         */
        rtb_Switch1_cf = 0.0F;
    }
    else if ((STCR_ac_DW.VeSTCR_t_LtdSchkTmSinceEngRun > 3.0F) ||
             rtb_Logical2_fy)
    {
        /* Switch: '<S1227>/Switch2' incorporates:
         *  Constant: '<S1000>/Calib'
         *  Sum: '<S1227>/Subtraction'
         *  Switch: '<S1227>/Switch1'
         *  UnitDelay: '<S1227>/Unit Delay'
         */
        rtb_Switch1_cf = HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE;
    }
    else
    {
        /* Switch: '<S1227>/Switch1' incorporates:
         *  Switch: '<S1227>/Switch2'
         *  UnitDelay: '<S1227>/Unit Delay'
         */
        rtb_Switch1_cf = STCR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S1227>/Switch1' */

    /* Update for UnitDelay: '<S1227>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE = rtb_Switch1_cf;

    /* End of Outputs for SubSystem: '<S1006>/Stop Watch Reset Enabled3' */

    /* Outputs for Atomic SubSystem: '<S1006>/Limiter1' */
    /* Switch: '<S1224>/Switch1' incorporates:
     *  Constant: '<S1006>/Constant Value4'
     *  RelationalOperator: '<S1224>/Relational Operator'
     */
    if (900.0F < rtb_Switch1_cf)
    {
        /* Abs: '<S451>/Abs1' */
        rtb_Switch_i = 900.0F;
    }
    else
    {
        /* Abs: '<S451>/Abs1' */
        rtb_Switch_i = rtb_Switch1_cf;
    }

    /* End of Switch: '<S1224>/Switch1' */

    /* Switch: '<S1224>/Switch' incorporates:
     *  Constant: '<S1006>/Constant Value5'
     *  RelationalOperator: '<S1224>/Relational Operator1'
     */
    if (rtb_Switch_i <= 0.0F)
    {
        /* Switch: '<S1224>/Switch' */
        rtb_Switch_i = 0.0F;
    }

    /* End of Switch: '<S1224>/Switch' */
    /* End of Outputs for SubSystem: '<S1006>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S1006>/Stop Watch Reset Enabled1' */
    /* Switch: '<S1225>/Switch1' incorporates:
     *  Constant: '<S1222>/Constant'
     *  Logic: '<S1006>/Logical3'
     *  RelationalOperator: '<S1006>/Comparison1'
     *  Switch: '<S1225>/Switch2'
     */
    if (rtb_Comparison2 || (((uint32)rtb_TmpSignalConversionAtVeST_f) ==
                            CeSTRR_e_EngOffSt))
    {
        /* Switch: '<S1225>/Switch1' incorporates:
         *  Constant: '<S1225>/Constant Value2'
         */
        rtb_Switch1_gk = 0.0F;
    }
    else if (rtb_Logical2_fy)
    {
        /* Switch: '<S1225>/Switch2' incorporates:
         *  Constant: '<S1000>/Calib'
         *  Sum: '<S1225>/Subtraction'
         *  Switch: '<S1225>/Switch1'
         *  UnitDelay: '<S1225>/Unit Delay'
         */
        rtb_Switch1_gk = HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_c;
    }
    else
    {
        /* Switch: '<S1225>/Switch1' incorporates:
         *  Switch: '<S1225>/Switch2'
         *  UnitDelay: '<S1225>/Unit Delay'
         */
        rtb_Switch1_gk = STCR_ac_DW.UnitDelay_DSTATE_c;
    }

    /* End of Switch: '<S1225>/Switch1' */

    /* Update for UnitDelay: '<S1225>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_gk;

    /* End of Outputs for SubSystem: '<S1006>/Stop Watch Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S1006>/Stop Watch Reset Enabled2' */
    /* Switch: '<S1226>/Switch1' incorporates:
     *  Switch: '<S1226>/Switch2'
     */
    if (rtb_Comparison2)
    {
        /* Switch: '<S1226>/Switch1' incorporates:
         *  Constant: '<S1226>/Constant Value2'
         */
        rtb_Switch1_g1 = 0.0F;
    }
    else if (rtb_Logical2_fy)
    {
        /* Switch: '<S1226>/Switch2' incorporates:
         *  Constant: '<S1000>/Calib'
         *  Sum: '<S1226>/Subtraction'
         *  Switch: '<S1226>/Switch1'
         *  UnitDelay: '<S1226>/Unit Delay'
         */
        rtb_Switch1_g1 = HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_j;
    }
    else
    {
        /* Switch: '<S1226>/Switch1' incorporates:
         *  Switch: '<S1226>/Switch2'
         *  UnitDelay: '<S1226>/Unit Delay'
         */
        rtb_Switch1_g1 = STCR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S1226>/Switch1' */
    /* End of Outputs for SubSystem: '<S1006>/Stop Watch Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S452>/STCC_Tmrs' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ProcessSoftChkCals' */

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReq' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReq_Value(&rtb_LeSTCR_b_BeltTempChk);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ProcessSoftChkCals' */
    /* Outputs for Atomic SubSystem: '<S452>/STCC_Tmrs' */
    /* Outputs for Atomic SubSystem: '<S1006>/Stop Watch Reset Enabled2' */
    /* Update for UnitDelay: '<S1226>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_g1;

    /* End of Outputs for SubSystem: '<S1006>/Stop Watch Reset Enabled2' */

    /* Update for UnitDelay: '<S1006>/Unit Delay' */
    STCR_ac_DW.VeSTCR_t_LtdSchkTmSinceEngRun = rtb_Switch_i;

    /* End of Outputs for SubSystem: '<S452>/STCC_Tmrs' */

    /* If: '<S452>/If1' incorporates:
     *  Constant: '<S994>/Constant'
     *  Constant: '<S995>/Constant'
     *  Inport: '<Root>/VeCSVR_dn_TransOutSpddot'
     *  Inport: '<Root>/VeSTDR_b_DrvbltyEngOn'
     *  Inport: '<Root>/VeSTRR_b_MaxEngOff'
     *  Logic: '<S452>/AND1'
     *  Logic: '<S452>/AND2'
     *  Logic: '<S452>/AND3'
     *  Logic: '<S452>/AND4'
     *  Logic: '<S452>/Logical1'
     *  RelationalOperator: '<S452>/Comparison5'
     *  RelationalOperator: '<S452>/Comparison6'
     */
    if (((CeSTRR_e_EngStartingSt == ((uint32)rtb_TmpSignalConversionAtVeST_f)) ||
         ((((uint32)rtb_TmpSignalConversionAtVeST_f) == CeSTRR_e_EngRunningSt) &&
          ((!rtb_LeSTCR_b_AStrtStpAlwMtrA_Co) ||
            (!rtb_LeSTCR_b_AStrtAlwTransManMd)))) && (!rtb_AND_l50))
    {
        /* Outputs for IfAction SubSystem: '<S452>/STCC_AStpChkCalLoader' incorporates:
         *  ActionPort: '<S1004>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S1004>/EVInhibitMHCals' */
        /* Lookup_n-D: '<S1048>/Vector' incorporates:
         *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
         */
        rtb_LeSTCR_T_MtrBTempmMaxCal_MH = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAATR, ((const float32 *)
              &(KxSTCR_T_AStopTransTempMin_MildHyb[0])), ((const float32 *)
              &(KtSTCR_T_AStopTransTempMin_MildHyb[0])), 7U);

        /* Merge: '<S452>/Merge15' incorporates:
         *  Constant: '<S1037>/Calib'
         *  Gain: '<S1049>/Gain'
         */
        rtb_LeSTCR_P_BatPwrMH = KeSTCR_P_AStopBatPwrDschrgMin_MildHyb;

        /* Merge: '<S452>/Merge34' incorporates:
         *  Constant: '<S1044>/Calib'
         *  Gain: '<S1050>/Gain'
         */
        rtb_VeSTCR_T_SoftChkMtrA_Cool_i =
            KeSTCR_T_AStopMtrA_CoolantTempMax_MildHyb;

        /* Sum: '<S1022>/Sum1' incorporates:
         *  Abs: '<S452>/Abs'
         *  Constant: '<S1040>/Calib'
         *  Lookup_n-D: '<S1047>/Vector'
         *  SignalConversion generated from: '<S3>/VeABCR_P_HV_AccPwr'
         */
        rtb_VeSTCR_Pct_SoftChkBatSOCDel =
            KeSTCR_Pct_SoftChkDeltaFromTgtSOC_MildHyb + look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeABCR, rtb_LeSTCC_v_VehSpdAbs_tmp, ((
               const float32 *)&(KxSTCR_Pct_AStopBatSOCHyst_MildHyb[0])), ((
               const float32 *)&(KySTCR_Pct_AStopBatSOCHyst_MildHyb[0])), ((
               const float32 *)&(KtSTCR_Pct_AStopBatSOCHyst_MildHyb[0])),
             STCR_ac_ConstP.pooled33, 5U);

        /* Merge: '<S452>/Merge11' incorporates:
         *  Gain: '<S1051>/Gain'
         */
        rtb_Switch1_cf = rtb_VeSTCR_Pct_SoftChkBatSOCDel;

        /* Merge: '<S452>/Merge19' incorporates:
         *  Constant: '<S1041>/Calib'
         *  Gain: '<S1052>/Gain'
         */
        rtb_LeSTCR_T_BatTempMxMH = KeSTCR_T_AStopBatModTempMax_MildHyb;

        /* Merge: '<S452>/Merge20' incorporates:
         *  Constant: '<S1042>/Calib'
         *  Gain: '<S1053>/Gain'
         */
        rtb_LeSTCR_T_BatTempMnMH = KeSTCR_T_AStopBatModTempMin_MildHyb;

        /* Merge: '<S452>/Merge21' incorporates:
         *  Constant: '<S1043>/Calib'
         *  Gain: '<S1054>/Gain'
         */
        rtb_LeSTCR_T_MtrATempMH = KeSTCR_T_AStopMtrATempMax_MildHyb;

        /* Merge: '<S452>/Merge24' incorporates:
         *  Constant: '<S1045>/Calib'
         *  Gain: '<S1055>/Gain'
         */
        rtb_LeSTCR_T_MtrBTempMH = KeSTCR_T_AStopMtrBTempMax_MildHyb;

        /* Merge: '<S452>/Merge22' incorporates:
         *  Constant: '<S1046>/Calib'
         *  Gain: '<S1056>/Gain'
         */
        rtb_LeSTCR_T_TransTempMxMH = KeSTCR_T_AStopTransTempMax_MildHyb;

        /* Merge: '<S452>/Merge23' incorporates:
         *  Gain: '<S1057>/Gain'
         */
        rtb_LeSTCR_T_TransTempMnMH = rtb_LeSTCR_T_MtrBTempmMaxCal_MH;

        /* End of Outputs for SubSystem: '<S1004>/EVInhibitMHCals' */

        /* If: '<S1004>/If' */
        if (rtb_VeSTCR_b_MildHybridEnbld)
        {
            /* Outputs for IfAction SubSystem: '<S1004>/MildHybCals' incorporates:
             *  ActionPort: '<S1034>/Action Port'
             */
            /* Merge: '<S452>/Merge13' incorporates:
             *  Constant: '<S1037>/Calib'
             *  Gain: '<S1067>/Gain'
             */
            rtb_LeSTCR_P_BattPwrDMinCal_MH =
                KeSTCR_P_AStopBatPwrDschrgMin_MildHyb;

            /* Merge: '<S452>/Merge33' incorporates:
             *  Constant: '<S1044>/Calib'
             *  Gain: '<S1068>/Gain'
             */
            rtb_LeSTCR_T_MtrA_CoolantTempMa =
                KeSTCR_T_AStopMtrA_CoolantTempMax_MildHyb;

            /* Merge: '<S452>/Merge5' incorporates:
             *  Constant: '<S1041>/Calib'
             *  Gain: '<S1069>/Gain'
             */
            rtb_LeSTCR_T_BatTempMaxCal_MH = KeSTCR_T_AStopBatModTempMax_MildHyb;

            /* Merge: '<S452>/Merge17' incorporates:
             *  Constant: '<S1042>/Calib'
             *  Gain: '<S1070>/Gain'
             */
            rtb_TmpSignalConversionAtVeABCR =
                KeSTCR_T_AStopBatModTempMin_MildHyb;

            /* Merge: '<S452>/Merge8' incorporates:
             *  Constant: '<S1043>/Calib'
             *  Gain: '<S1071>/Gain'
             */
            rtb_LeSTCR_T_MtrATempMaxCal_MH = KeSTCR_T_AStopMtrATempMax_MildHyb;

            /* Merge: '<S452>/Merge1' incorporates:
             *  Constant: '<S1046>/Calib'
             *  Gain: '<S1072>/Gain'
             */
            rtb_LeSTCR_T_TransTempMaxCal_MH = KeSTCR_T_AStopTransTempMax_MildHyb;

            /* Merge: '<S452>/Merge18' incorporates:
             *  Gain: '<S1073>/Gain'
             */
            rtb_VeSTCR_T_SoftChkTransTmpMin = rtb_LeSTCR_T_MtrBTempmMaxCal_MH;

            /* Outputs for Atomic SubSystem: '<S1004>/EVInhibitMHCals' */
            /* Merge: '<S452>/Merge31' incorporates:
             *  Constant: '<S1038>/Calib'
             *  Constant: '<S1039>/Calib'
             *  Gain: '<S1074>/Gain'
             *  Sum: '<S1022>/Sum20'
             */
            rtb_LeSTCR_T_TransTempMinCal_MH = KeSTCR_Pct_IBSBattSOCMin_MildHyb +
                KeSTCR_Pct_IBSBattSOCHyst_MildHyb;

            /* End of Outputs for SubSystem: '<S1004>/EVInhibitMHCals' */

            /* Merge: '<S452>/Merge25' incorporates:
             *  Constant: '<S1045>/Calib'
             *  Gain: '<S1075>/Gain'
             */
            rtb_LeSTCR_T_MtrBTempmMaxCal_MH = KeSTCR_T_AStopMtrBTempMax_MildHyb;

            /* Switch: '<S1034>/Switch1' incorporates:
             *  Constant: '<S1003>/Calib'
             *  Logic: '<S452>/Logical2'
             */
            if ((KeSTCR_b_RVSAstrtOvrrd) || rtb_LeSTCR_b_BeltTempChk)
            {
                /* Merge: '<S452>/Merge3' incorporates:
                 *  Constant: '<S1066>/Calib'
                 */
                rtb_VeSTCR_Pct_SoftChkVehSOCLim =
                    KeSTCR_Pct_RmtStrtAStopVehSOCHyst_MildHyb;
            }
            else
            {
                /* Merge: '<S452>/Merge3' incorporates:
                 *  Constant: '<S1065>/Calib'
                 */
                rtb_VeSTCR_Pct_SoftChkVehSOCLim = KeSTCR_Pct_DfltVehSOCHyst;
            }

            /* End of Switch: '<S1034>/Switch1' */
            /* End of Outputs for SubSystem: '<S1004>/MildHybCals' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1004>/NormalCals' incorporates:
             *  ActionPort: '<S1035>/Action Port'
             */
            /* Merge: '<S452>/Merge2' incorporates:
             *  Abs: '<S452>/Abs'
             *  Constant: '<S1082>/Calib'
             *  Lookup_n-D: '<S1089>/Vector'
             *  SignalConversion generated from: '<S3>/VeABCR_P_HV_AccPwr'
             *  Sum: '<S1035>/Sum1'
             */
            rtb_VeSTCR_Pct_SoftChkBatSOCDel = KeSTCR_Pct_SoftChkDeltaFromTgtSOC
                + look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeABCR,
                rtb_LeSTCC_v_VehSpdAbs_tmp, ((const float32 *)
                &(KxSTCR_Pct_AStopBatSOCHyst[0])), ((const float32 *)
                &(KySTCR_Pct_AStopBatSOCHyst[0])), ((const float32 *)
                &(KtSTCR_Pct_AStopBatSOCHyst[0])), STCR_ac_ConstP.pooled33, 5U);

            /* Merge: '<S452>/Merge13' incorporates:
             *  Constant: '<S1077>/Calib'
             *  SignalConversion generated from: '<S1035>/BattPwrDMin'
             */
            rtb_LeSTCR_P_BattPwrDMinCal_MH = KeSTCR_P_AStopBatPwrDschrgMin;

            /* Merge: '<S452>/Merge5' incorporates:
             *  Constant: '<S1083>/Calib'
             *  SignalConversion generated from: '<S1035>/BattTempMax'
             */
            rtb_LeSTCR_T_BatTempMaxCal_MH = KeSTCR_T_AStopBatModTempMax;

            /* Merge: '<S452>/Merge17' incorporates:
             *  Constant: '<S1084>/Calib'
             *  SignalConversion generated from: '<S1035>/BattTempMin'
             */
            rtb_TmpSignalConversionAtVeABCR = KeSTCR_T_AStopBatModTempMin;

            /* Merge: '<S452>/Merge8' incorporates:
             *  Constant: '<S1085>/Calib'
             *  SignalConversion generated from: '<S1035>/MtrATempMax'
             */
            rtb_LeSTCR_T_MtrATempMaxCal_MH = KeSTCR_T_AStopMtrATempMax;

            /* Merge: '<S452>/Merge25' incorporates:
             *  Constant: '<S1087>/Calib'
             *  SignalConversion generated from: '<S1035>/MtrBTempMax'
             */
            rtb_LeSTCR_T_MtrBTempmMaxCal_MH = KeSTCR_T_AStopMtrBTempMax;

            /* Merge: '<S452>/Merge1' incorporates:
             *  Constant: '<S1088>/Calib'
             *  SignalConversion generated from: '<S1035>/TransTempMax'
             */
            rtb_LeSTCR_T_TransTempMaxCal_MH = KeSTCR_T_AStopTransTempMax;

            /* Merge: '<S452>/Merge18' incorporates:
             *  Lookup_n-D: '<S1090>/Vector'
             *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
             */
            rtb_VeSTCR_T_SoftChkTransTmpMin = look1_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeAATR, ((const float32 *)
                  &(KxSTCR_T_AStopTransTempMin[0])), ((const float32 *)
                  &(KtSTCR_T_AStopTransTempMin[0])), 7U);

            /* Switch: '<S1035>/Switch1' incorporates:
             *  Constant: '<S1003>/Calib'
             *  Logic: '<S452>/Logical2'
             */
            if ((KeSTCR_b_RVSAstrtOvrrd) || rtb_LeSTCR_b_BeltTempChk)
            {
                /* Merge: '<S452>/Merge3' incorporates:
                 *  Constant: '<S1081>/Calib'
                 */
                rtb_VeSTCR_Pct_SoftChkVehSOCLim =
                    KeSTCR_Pct_RmtStrtAStopVehSOCHyst;
            }
            else
            {
                /* Merge: '<S452>/Merge3' incorporates:
                 *  Constant: '<S1078>/Calib'
                 */
                rtb_VeSTCR_Pct_SoftChkVehSOCLim = KeSTCR_Pct_DfltVehSOCHyst;
            }

            /* End of Switch: '<S1035>/Switch1' */

            /* Merge: '<S452>/Merge31' incorporates:
             *  Constant: '<S1079>/Calib'
             *  Constant: '<S1080>/Calib'
             *  Sum: '<S1035>/Sum20'
             */
            rtb_LeSTCR_T_TransTempMinCal_MH = KeSTCR_Pct_IBSBattSOCMin +
                KeSTCR_Pct_IBSBattSOCHyst;

            /* Merge: '<S452>/Merge33' incorporates:
             *  Constant: '<S1086>/Calib'
             *  SignalConversion generated from: '<S1035>/MtrA_CoolantTempMax'
             */
            rtb_LeSTCR_T_MtrA_CoolantTempMa = KeSTCR_T_AStopMtrA_CoolantTempMax;

            /* End of Outputs for SubSystem: '<S1004>/NormalCals' */
        }

        /* End of If: '<S1004>/If' */
        /* End of Outputs for SubSystem: '<S452>/STCC_AStpChkCalLoader' */
        (void)Rte_Read_VeCSVR_dn_TransOutSpddot_Value
            (&rtb_VeSTCR_T_SoftChkInvrtrATemp);

        /* Outputs for IfAction SubSystem: '<S452>/STCC_AStpChkCalLoader' incorporates:
         *  ActionPort: '<S1004>/Action Port'
         */
        /* Merge: '<S452>/Merge7' incorporates:
         *  Inport: '<Root>/VeCSVR_dn_TransOutSpddot'
         *  Lookup_n-D: '<S1032>/Vector'
         *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
         *  Switch: '<S1224>/Switch'
         */
        rtb_TmpSignalConversionAtVeAATR = look2_iflf_binlcapw(rtb_Switch_i,
            rtb_TmpSignalConversionAtVeAATR, ((const float32 *)
            &(KxSTCR_T_AStopECTMin[0])), ((const float32 *)
            &(KySTCR_T_AStopECTMin[0])), ((const float32 *)
            &(KtSTCR_T_AStopECTMin[0])), STCR_ac_ConstP.pooled34, 4U);

        /* Outputs for Atomic SubSystem: '<S1004>/MaxVehicleSpeed' */
        /* Merge: '<S452>/Merge14' incorporates:
         *  Constant: '<S1063>/Calib'
         *  Constant: '<S1064>/Calib'
         *  Sum: '<S1033>/Sum10'
         */
        rtb_VeSTCR_v_SoftChkVehSpdNegMa = KeSTCR_v_AStrtVehSpdHyst +
            KeSTCR_v_AStopVehSpdNegMax;

        /* Switch: '<S1060>/Switch1' incorporates:
         *  Constant: '<S1059>/Constant'
         *  Constant: '<S1061>/Calib'
         *  Constant: '<S1062>/Calib'
         *  RelationalOperator: '<S1033>/Comparison6'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                CeTRGR_e_TransRangeNeutral)
        {
            rtb_Switch_i = KeSTCR_v_AStopVehSpdMaxinNeutral;
        }
        else
        {
            rtb_Switch_i = KeSTCR_v_AStopVehSpdMax;
        }

        /* End of Switch: '<S1060>/Switch1' */

        /* Merge: '<S452>/Merge12' incorporates:
         *  Constant: '<S1064>/Calib'
         *  Sum: '<S1033>/Sum9'
         */
        rtb_VeSTCR_v_SoftChkVehSpdMaxCa = rtb_Switch_i -
            KeSTCR_v_AStrtVehSpdHyst;

        /* End of Outputs for SubSystem: '<S1004>/MaxVehicleSpeed' */

        /* Outputs for Atomic SubSystem: '<S1004>/STCC_ChkRunTimes' */
        /* Outputs for Atomic SubSystem: '<S1036>/CountDownPropSysActive' */
        /* Outputs for Atomic SubSystem: '<S1092>/EdgeRising' */
        /* Logic: '<S1111>/AND' incorporates:
         *  Logic: '<S1111>/OR1'
         *  UnitDelay: '<S1111>/Unit Delay'
         */
        rtb_AND_l50 = (rtb_TmpSignalConversionAtVeHPMR &&
                       (!STCR_ac_DW.UnitDelay_DSTATE_bt));

        /* Update for UnitDelay: '<S1111>/Unit Delay' */
        STCR_ac_DW.UnitDelay_DSTATE_bt = rtb_TmpSignalConversionAtVeHPMR;

        /* End of Outputs for SubSystem: '<S1092>/EdgeRising' */

        /* Switch: '<S1092>/Switch1' incorporates:
         *  Constant: '<S1092>/Constant Value1'
         *  Logic: '<S1092>/AND2'
         *  RelationalOperator: '<S1092>/Greater  Than2'
         *  Switch: '<S1092>/Switch2'
         *  UnitDelay: '<S1092>/Unit Delay'
         */
        if (rtb_AND_l50 && (STCR_ac_DW.VeSTCR_t_CountDwnPropActv <= 0.0F))
        {
            /* Switch: '<S1092>/Switch1' incorporates:
             *  Constant: '<S1112>/Calib'
             */
            rtb_Switch_i = KeSTCR_t_CountDwnPropActive;
        }
        else if (rtb_TmpSignalConversionAtVeHPMR)
        {
            /* Switch: '<S1092>/Switch2' incorporates:
             *  Constant: '<S1000>/Calib'
             *  Constant: '<S1092>/Constant Value4'
             *  MinMax: '<S1092>/Maximum'
             *  Sum: '<S1092>/Subtraction'
             *  Switch: '<S1092>/Switch1'
             */
            rtb_Switch_i = fmaxf(STCR_ac_DW.VeSTCR_t_CountDwnPropActv -
                                 HeSTCR_t_MedTEH_dT, 0.0F);
        }
        else
        {
            /* Switch: '<S1092>/Switch1' incorporates:
             *  Switch: '<S1092>/Switch2'
             */
            rtb_Switch_i = STCR_ac_DW.VeSTCR_t_CountDwnPropActv;
        }

        /* End of Switch: '<S1092>/Switch1' */

        /* Update for UnitDelay: '<S1092>/Unit Delay' */
        STCR_ac_DW.VeSTCR_t_CountDwnPropActv = rtb_Switch_i;

        /* End of Outputs for SubSystem: '<S1036>/CountDownPropSysActive' */

        /* Outputs for Atomic SubSystem: '<S1036>/EdgeRising' */
        /* Logic: '<S1093>/AND' incorporates:
         *  Logic: '<S1093>/OR1'
         *  UnitDelay: '<S1093>/Unit Delay'
         */
        rtb_AND_l50 = (rtb_TmpSignalConversionAtVeHPMR &&
                       (!STCR_ac_DW.UnitDelay_DSTATE_oz));

        /* Update for UnitDelay: '<S1093>/Unit Delay' */
        STCR_ac_DW.UnitDelay_DSTATE_oz = rtb_TmpSignalConversionAtVeHPMR;

        /* End of Outputs for SubSystem: '<S1036>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S1004>/STCC_ChkRunTimes' */
        /* End of Outputs for SubSystem: '<S452>/STCC_AStpChkCalLoader' */
        (void)Rte_Read_VeSTRR_b_MaxEngOff_Value(&rtb_VeSTCR_b_AStrtTmrEngOnDsrd);

        /* Outputs for IfAction SubSystem: '<S452>/STCC_AStpChkCalLoader' incorporates:
         *  ActionPort: '<S1004>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S1004>/STCC_ChkRunTimes' */
        /* Switch: '<S1095>/Switch1' incorporates:
         *  Inport: '<Root>/VeENGR_t_EngOffTime'
         *  Inport: '<Root>/VeSTRR_b_MaxEngOff'
         */
        if (rtb_VeSTCR_b_AStrtTmrEngOnDsrd)
        {
            /* Switch: '<S1095>/Switch1' incorporates:
             *  Constant: '<S1103>/Calib'
             */
            rtb_Switch_i = KeSTCR_t_MinTmBfrFirstStp_Long;
        }
        else
        {
            (void)Rte_Read_VeENGR_t_EngOffTime_Value
                (&rtb_VeSTCR_T_SoftChkInvrtrBTemp);

            /* Switch: '<S1095>/Switch2' incorporates:
             *  Constant: '<S1096>/Calib'
             *  Constant: '<S1101>/Calib'
             *  Inport: '<Root>/VeENGR_t_EngOffTime'
             *  Logic: '<S1036>/Logical3'
             *  RelationalOperator: '<S1036>/Comparison6'
             *  RelationalOperator: '<S1036>/Comparison7'
             */
            if ((rtb_VeSTCR_T_SoftChkInvrtrBTemp >
                    KeSTCR_t_EngSoakTime_CATWarmUp) ||
                    (rtb_TmpSignalConversionAtVeBPCR <
                     KeSTCR_Pct_FrstAStpTmr_SOCMax))
            {
                /* Switch: '<S1095>/Switch1' incorporates:
                 *  Abs: '<S452>/Abs'
                 *  Lookup_n-D: '<S1107>/Vector'
                 *  Switch: '<S1092>/Switch1'
                 *  Switch: '<S1095>/Switch2'
                 */
                rtb_Switch_i = look2_iflf_binlcapw(rtb_Switch_i,
                    rtb_LeSTCC_v_VehSpdAbs_tmp, ((const float32 *)
                    &(KxSTCR_t_MinTmBfrFirstStp[0])), ((const float32 *)
                    &(KySTCR_t_MinTmBfrFirstStp[0])), ((const float32 *)
                    &(KtSTCR_t_MinTmBfrFirstStp[0])), STCR_ac_ConstP.pooled33,
                    5U);
            }
            else
            {
                /* Switch: '<S1095>/Switch1' incorporates:
                 *  Constant: '<S1104>/Calib'
                 *  Switch: '<S1095>/Switch2'
                 */
                rtb_Switch_i = KeSTCR_t_MinTmBfrFirstStp_Short;
            }

            /* End of Switch: '<S1095>/Switch2' */
        }

        /* End of Switch: '<S1095>/Switch1' */
        /* End of Outputs for SubSystem: '<S1004>/STCC_ChkRunTimes' */
        /* End of Outputs for SubSystem: '<S452>/STCC_AStpChkCalLoader' */
        (void)Rte_Read_VeSTDR_b_DrvbltyEngOn_Value
            (&rtb_VeSTCR_b_TmrFrstEngOnDsrdFn);

        /* Outputs for IfAction SubSystem: '<S452>/STCC_AStpChkCalLoader' incorporates:
         *  ActionPort: '<S1004>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S1004>/STCC_ChkRunTimes' */
        /* Outputs for Atomic SubSystem: '<S1036>/Limiter1' */
        /* Switch: '<S1109>/Switch1' incorporates:
         *  Inport: '<Root>/VeSTDR_b_DrvbltyEngOn'
         *  RelationalOperator: '<S1109>/Relational Operator'
         */
        if (rtb_Switch_i < rtb_Switch1_g1)
        {
            /* Switch: '<S1110>/Switch1' */
            rtb_VeSTCR_T_SoftChkInvrtrBTemp = rtb_Switch_i;
        }
        else
        {
            /* Switch: '<S1110>/Switch1' */
            rtb_VeSTCR_T_SoftChkInvrtrBTemp = rtb_Switch1_g1;
        }

        /* End of Switch: '<S1109>/Switch1' */

        /* Switch: '<S1109>/Switch' incorporates:
         *  Constant: '<S1036>/Constant Value17'
         *  RelationalOperator: '<S1109>/Relational Operator1'
         */
        if (rtb_VeSTCR_T_SoftChkInvrtrBTemp > 0.0F)
        {
            /* Switch: '<S1109>/Switch' */
            rtb_Switch1_g1 = rtb_VeSTCR_T_SoftChkInvrtrBTemp;
        }
        else
        {
            /* Switch: '<S1109>/Switch' */
            rtb_Switch1_g1 = 0.0F;
        }

        /* End of Switch: '<S1109>/Switch' */
        /* End of Outputs for SubSystem: '<S1036>/Limiter1' */

        /* Outputs for Atomic SubSystem: '<S1036>/Limiter3' */
        /* Switch: '<S1110>/Switch1' incorporates:
         *  Constant: '<S1102>/Calib'
         *  RelationalOperator: '<S1110>/Relational Operator'
         */
        if (KeSTCR_t_MinTmBetweenAStop < rtb_Switch1_gk)
        {
            /* Switch: '<S1110>/Switch1' */
            rtb_VeSTCR_T_SoftChkInvrtrBTemp = KeSTCR_t_MinTmBetweenAStop;
        }
        else
        {
            /* Switch: '<S1110>/Switch1' */
            rtb_VeSTCR_T_SoftChkInvrtrBTemp = rtb_Switch1_gk;
        }

        /* End of Switch: '<S1110>/Switch1' */
        /* End of Outputs for SubSystem: '<S1036>/Limiter3' */

        /* Switch: '<S1036>/Switch' incorporates:
         *  Constant: '<S1094>/Constant'
         *  RelationalOperator: '<S1036>/Comparison8'
         */
        if (CeDMDR_e_EV == ((uint32)rtb_TmpSignalConversionAtVeDMDR))
        {
            /* Switch: '<S1036>/Switch' incorporates:
             *  Constant: '<S1100>/Calib'
             */
            rtb_Switch1_gk = KeSTCR_t_DelayEngOffAtGradeEVMd;
        }
        else
        {
            /* Switch: '<S1036>/Switch' incorporates:
             *  Constant: '<S1099>/Calib'
             */
            rtb_Switch1_gk = KeSTCR_t_DelayEngOffAtGrade;
        }

        /* End of Switch: '<S1036>/Switch' */

        /* Logic: '<S1036>/Logical' incorporates:
         *  Abs: '<S1036>/Abs'
         *  Abs: '<S452>/Abs'
         *  Constant: '<S1097>/Calib'
         *  Constant: '<S1098>/Calib'
         *  Constant: '<S1106>/Calib'
         *  RelationalOperator: '<S1036>/Comparison1'
         *  RelationalOperator: '<S1036>/Comparison3'
         *  RelationalOperator: '<S1036>/Comparison4'
         */
        rtb_TmpSignalConversionAtVeHPMR = ((((rtb_LeSTCC_v_VehSpdAbs_tmp <
            KeSTCR_v_SpeedThresholdForDelayEngineOff) &&
            rtb_VeSTCR_b_TmrFrstEngOnDsrdFn) && (fabsf
            (rtb_VeSTCR_T_SoftChkInvrtrATemp) <
            KeSTCR_dn_ToAccelThresholdForDelayEngineOff)) &&
            (rtb_TmpSignalConversionAtVeAPSR >
             KeSTCR_Pct_PedalThresholdForDelayEngineOff));

        /* Outputs for Atomic SubSystem: '<S1036>/Latch' */
        /* Outputs for Atomic SubSystem: '<S1116>/EdgeFalling' */
        /* Logic: '<S1118>/AND' incorporates:
         *  Logic: '<S1118>/OR1'
         *  UnitDelay: '<S1118>/Unit Delay'
         */
        rtb_VeSTCR_b_AStrtTmrEngOnDsrd = ((!rtb_TmpSignalConversionAtVeHPMR) &&
            (STCR_ac_DW.UnitDelay_DSTATE_lw));

        /* Update for UnitDelay: '<S1118>/Unit Delay' */
        STCR_ac_DW.UnitDelay_DSTATE_lw = rtb_TmpSignalConversionAtVeHPMR;

        /* End of Outputs for SubSystem: '<S1116>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S1116>/Counter Reset  Enabled ' */
        /* Switch: '<S1117>/Switch1' incorporates:
         *  Logic: '<S1116>/Logical1'
         *  Switch: '<S1117>/Switch2'
         *  UnitDelay: '<S1108>/Unit Delay'
         *  UnitDelay: '<S1116>/Unit Delay1'
         */
        if (rtb_VeSTCR_b_AStrtTmrEngOnDsrd ||
                (STCR_ac_DW.VeSTCR_b_AStrtCmndGradeTmOut))
        {
            /* Switch: '<S1117>/Switch1' incorporates:
             *  Constant: '<S1117>/Constant Value2'
             */
            rtb_Switch1_df = 0U;
        }
        else if (STCR_ac_DW.VeSTCR_b_AStrtCmndGradeLatch)
        {
            /* Switch: '<S1117>/Switch2' incorporates:
             *  Constant: '<S1117>/Constant Value1'
             *  Sum: '<S1117>/Subtraction'
             *  Switch: '<S1117>/Switch1'
             *  UnitDelay: '<S1117>/Unit Delay'
             */
            rtb_Switch1_df = (uint16)(((uint32)STCR_ac_DW.UnitDelay_DSTATE_b) +
                1U);
        }
        else
        {
            /* Switch: '<S1117>/Switch1' incorporates:
             *  Switch: '<S1117>/Switch2'
             *  UnitDelay: '<S1117>/Unit Delay'
             */
            rtb_Switch1_df = STCR_ac_DW.UnitDelay_DSTATE_b;
        }

        /* End of Switch: '<S1117>/Switch1' */

        /* Update for UnitDelay: '<S1117>/Unit Delay' */
        STCR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch1_df;

        /* End of Outputs for SubSystem: '<S1116>/Counter Reset  Enabled ' */

        /* Outputs for Atomic SubSystem: '<S1108>/Protected Division' */
        /* Switch: '<S1114>/Switch1' incorporates:
         *  Constant: '<S1000>/Calib'
         *  Constant: '<S1114>/Constant Value'
         *  Constant: '<S1114>/Constant Value1'
         *  Constant: '<S1114>/Constant Value2'
         *  Constant: '<S1114>/Constant Value3'
         *  Logic: '<S1114>/AND'
         *  RelationalOperator: '<S1114>/Greater Than or Equal '
         *  RelationalOperator: '<S1114>/Greater Than or Equal 1'
         *  RelationalOperator: '<S1114>/Not Equal'
         *  RelationalOperator: '<S1114>/Not Equal1'
         *  Switch: '<S1114>/Switch2'
         *  Switch: '<S1114>/Switch3'
         */
        if ((rtb_Switch1_gk != 0.0F) && (HeSTCR_t_MedTEH_dT != 0.0F))
        {
            /* Switch: '<S1114>/Switch1' incorporates:
             *  Product: '<S1114>/Division'
             */
            rtb_TmpSignalConversionAtVeAPSR = rtb_Switch1_gk /
                HeSTCR_t_MedTEH_dT;
        }
        else if (rtb_Switch1_gk > 0.0F)
        {
            /* Switch: '<S1114>/Switch2' incorporates:
             *  Constant: '<S1114>/MAXFLOAT'
             *  Switch: '<S1114>/Switch1'
             */
            rtb_TmpSignalConversionAtVeAPSR = 3.402823466E+38F;
        }
        else if (rtb_Switch1_gk < 0.0F)
        {
            /* Switch: '<S1114>/Switch3' incorporates:
             *  Constant: '<S1114>/MINFLOAT'
             *  Switch: '<S1114>/Switch1'
             *  Switch: '<S1114>/Switch2'
             */
            rtb_TmpSignalConversionAtVeAPSR = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S1114>/Switch1' incorporates:
             *  Constant: '<S1114>/Constant Value4'
             *  Switch: '<S1114>/Switch2'
             *  Switch: '<S1114>/Switch3'
             */
            rtb_TmpSignalConversionAtVeAPSR = 0.0F;
        }

        /* End of Switch: '<S1114>/Switch1' */
        /* End of Outputs for SubSystem: '<S1108>/Protected Division' */

        /* RelationalOperator: '<S1116>/Comparison2' */
        rtb_VeSTCR_b_AStrtTmrEngOnDsrd = (((float32)rtb_Switch1_df) >=
            rtb_TmpSignalConversionAtVeAPSR);

        /* Outputs for Atomic SubSystem: '<S1108>/Signal Latch On With Reset1' */
        /* Logic: '<S1115>/OR1' incorporates:
         *  Abs: '<S452>/Abs'
         *  Constant: '<S1091>/Constant'
         *  Constant: '<S1105>/Calib'
         *  Constant: '<S1106>/Calib'
         *  Logic: '<S1036>/Logical1'
         *  Logic: '<S1108>/Logical1'
         *  Logic: '<S1115>/NOT'
         *  Logic: '<S1115>/OR'
         *  RelationalOperator: '<S1036>/Comparison2'
         *  RelationalOperator: '<S1036>/Comparison5'
         *  Sum: '<S1036>/Sum'
         *  UnitDelay: '<S1115>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHPMR = (rtb_TmpSignalConversionAtVeHPMR ||
            (((!rtb_VeSTCR_b_AStrtTmrEngOnDsrd) && ((rtb_LeSTCC_v_VehSpdAbs_tmp <=
            (KeSTCR_v_SpeedHysteresisForDelayEngineOff +
             KeSTCR_v_SpeedThresholdForDelayEngineOff)) && (((uint32)
            rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangePark))) &&
             (STCR_ac_DW.UnitDelay_DSTATE_km)));

        /* Update for UnitDelay: '<S1115>/Unit Delay' */
        STCR_ac_DW.UnitDelay_DSTATE_km = rtb_TmpSignalConversionAtVeHPMR;

        /* End of Outputs for SubSystem: '<S1108>/Signal Latch On With Reset1' */

        /* Update for UnitDelay: '<S1108>/Unit Delay' */
        STCR_ac_DW.VeSTCR_b_AStrtCmndGradeLatch =
            rtb_TmpSignalConversionAtVeHPMR;

        /* Update for UnitDelay: '<S1116>/Unit Delay1' */
        STCR_ac_DW.VeSTCR_b_AStrtCmndGradeTmOut = rtb_VeSTCR_b_AStrtTmrEngOnDsrd;

        /* End of Outputs for SubSystem: '<S1036>/Latch' */

        /* Logic: '<S1036>/Logical2' incorporates:
         *  RelationalOperator: '<S1036>/Greater Than or Equal 3'
         *  Switch: '<S1036>/Switch3'
         *  UnitDelay: '<S1036>/Unit Delay'
         */
        rtb_VeSTCR_b_TmrFrstEngOnDsrdFn = ((rtb_AND_l50 ||
            (STCR_ac_DW.VeSTCR_b_TmrFrstEngOnDsrdFnlPre)) && (rtb_Switch1_g1 <
            rtb_Switch_i));

        /* Outputs for Atomic SubSystem: '<S1036>/Limiter3' */
        /* Switch: '<S1110>/Switch' incorporates:
         *  Constant: '<S1036>/Constant Value6'
         *  RelationalOperator: '<S1110>/Relational Operator1'
         */
        if (rtb_VeSTCR_T_SoftChkInvrtrBTemp <= 0.0F)
        {
            rtb_VeSTCR_T_SoftChkInvrtrBTemp = 0.0F;
        }

        /* End of Switch: '<S1110>/Switch' */
        /* End of Outputs for SubSystem: '<S1036>/Limiter3' */

        /* Merge: '<S452>/Merge16' incorporates:
         *  Constant: '<S1102>/Calib'
         *  Logic: '<S1036>/OR'
         *  RelationalOperator: '<S1036>/Greater Than or Equal 6'
         */
        rtb_VeSTCR_b_AStrtTmrEngOnDsrd = (rtb_VeSTCR_b_TmrFrstEngOnDsrdFn ||
            (KeSTCR_t_MinTmBetweenAStop > rtb_VeSTCR_T_SoftChkInvrtrBTemp));

        /* Update for UnitDelay: '<S1036>/Unit Delay' */
        STCR_ac_DW.VeSTCR_b_TmrFrstEngOnDsrdFnlPre =
            rtb_VeSTCR_b_TmrFrstEngOnDsrdFn;

        /* End of Outputs for SubSystem: '<S1004>/STCC_ChkRunTimes' */

        /* Merge: '<S452>/Merge6' incorporates:
         *  Constant: '<S1026>/Calib'
         *  SignalConversion generated from: '<S1004>/ECTMaxCal'
         */
        rtb_TmpSignalConversionAtVeAPSR = KeSTCR_T_AStopECTMax;

        /* Merge: '<S452>/Merge9' incorporates:
         *  Constant: '<S1027>/Calib'
         *  SignalConversion generated from: '<S1004>/InvrtrATempCal'
         */
        rtb_VeSTCR_T_SoftChkInvrtrATemp = KeSTCR_T_AStopInvrtrATempMax;

        /* Merge: '<S452>/Merge26' incorporates:
         *  Constant: '<S1028>/Calib'
         *  SignalConversion generated from: '<S1004>/InvrtrBTempCal'
         */
        rtb_VeSTCR_T_SoftChkInvrtrBTemp = KeSTCR_T_AStopInvrtrBTempMax;

        /* Merge: '<S452>/Merge27' incorporates:
         *  Constant: '<S1030>/Calib'
         *  Constant: '<S1031>/Calib'
         *  Sum: '<S1004>/Sum1'
         */
        rtb_Switch1_g1 = KeSTCR_n_AStrtPrimNoHyst + KeSTCR_n_AStopPrimNoNegMax;

        /* Merge: '<S452>/Merge4' incorporates:
         *  Constant: '<S1029>/Calib'
         *  Constant: '<S1031>/Calib'
         *  Sum: '<S1004>/Sum9'
         */
        rtb_Switch1_gk = KeSTCR_n_AStopPrimNoMax - KeSTCR_n_AStrtPrimNoHyst;

        /* End of Outputs for SubSystem: '<S452>/STCC_AStpChkCalLoader' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S452>/STCC_AStrtChkCalLoader' incorporates:
         *  ActionPort: '<S1005>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S1005>/EVInhibit_MHCals' */
        /* Merge: '<S452>/Merge11' incorporates:
         *  Constant: '<S1170>/Calib'
         *  Gain: '<S1183>/Gain'
         */
        rtb_Switch1_cf = KeSTCR_Pct_SoftChkDeltaFromTgtSOC_MildHyb;

        /* Sum: '<S1122>/Sum3' incorporates:
         *  Constant: '<S1174>/Calib'
         *  Constant: '<S1179>/Calib'
         */
        rtb_LeSTCR_T_MtrA_CoolantTempMa =
            KeSTCR_T_AStopMtrA_CoolantTempMax_MildHyb +
            KeSTCR_T_AStrtMtrA_CoolantTempHyst_MildHyb;

        /* Merge: '<S452>/Merge34' incorporates:
         *  Gain: '<S1184>/Gain'
         */
        rtb_VeSTCR_T_SoftChkMtrA_Cool_i = rtb_LeSTCR_T_MtrA_CoolantTempMa;

        /* Sum: '<S1122>/Sum24' incorporates:
         *  Constant: '<S1167>/Calib'
         *  Constant: '<S1168>/Calib'
         */
        rtb_LeSTCR_P_BattPwrDMinCal_MH = KeSTCR_P_AStopBatPwrDschrgMin_MildHyb -
            KeSTCR_P_AStrtBatPwrDschrgHyst_MildHyb;

        /* Merge: '<S452>/Merge15' incorporates:
         *  Gain: '<S1185>/Gain'
         */
        rtb_LeSTCR_P_BatPwrMH = rtb_LeSTCR_P_BattPwrDMinCal_MH;

        /* Sum: '<S1122>/Sum18' incorporates:
         *  Constant: '<S1171>/Calib'
         *  Constant: '<S1177>/Calib'
         */
        rtb_LeSTCR_T_BatTempMaxCal_MH = KeSTCR_T_AStopBatModTempMax_MildHyb +
            KeSTCR_T_AStrtBatModTempHyst_MildHyb;

        /* Merge: '<S452>/Merge19' incorporates:
         *  Gain: '<S1186>/Gain'
         */
        rtb_LeSTCR_T_BatTempMxMH = rtb_LeSTCR_T_BatTempMaxCal_MH;

        /* Sum: '<S1122>/Sum1' incorporates:
         *  Constant: '<S1175>/Calib'
         *  Constant: '<S1180>/Calib'
         */
        rtb_LeSTCR_T_MtrBTempmMaxCal_MH = KeSTCR_T_AStopMtrBTempMax_MildHyb +
            KeSTCR_T_AStrtMtrBTempHyst_MildHyb;

        /* Merge: '<S452>/Merge24' incorporates:
         *  Gain: '<S1187>/Gain'
         */
        rtb_LeSTCR_T_MtrBTempMH = rtb_LeSTCR_T_MtrBTempmMaxCal_MH;

        /* Sum: '<S1122>/Sum19' incorporates:
         *  Constant: '<S1172>/Calib'
         *  Constant: '<S1177>/Calib'
         */
        rtb_TmpSignalConversionAtVeABCR = KeSTCR_T_AStopBatModTempMin_MildHyb -
            KeSTCR_T_AStrtBatModTempHyst_MildHyb;

        /* Merge: '<S452>/Merge20' incorporates:
         *  Gain: '<S1189>/Gain'
         */
        rtb_LeSTCR_T_BatTempMnMH = rtb_TmpSignalConversionAtVeABCR;

        /* Sum: '<S1122>/Sum20' incorporates:
         *  Constant: '<S1176>/Calib'
         *  Constant: '<S1181>/Calib'
         */
        rtb_LeSTCR_T_TransTempMaxCal_MH = KeSTCR_T_AStopTransTempMax_MildHyb +
            KeSTCR_T_AStrtTransTempHyst_MildHyb;

        /* Merge: '<S452>/Merge22' incorporates:
         *  Gain: '<S1190>/Gain'
         */
        rtb_LeSTCR_T_TransTempMxMH = rtb_LeSTCR_T_TransTempMaxCal_MH;

        /* Sum: '<S1122>/Sum23' incorporates:
         *  Constant: '<S1181>/Calib'
         *  Lookup_n-D: '<S1182>/Vector'
         *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
         */
        rtb_LeSTCR_T_TransTempMinCal_MH = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAATR, ((const float32 *)
              &(KxSTCR_T_AStopTransTempMin_MildHyb[0])), ((const float32 *)
              &(KtSTCR_T_AStopTransTempMin_MildHyb[0])), 7U) -
            KeSTCR_T_AStrtTransTempHyst_MildHyb;

        /* Merge: '<S452>/Merge23' incorporates:
         *  Gain: '<S1191>/Gain'
         */
        rtb_LeSTCR_T_TransTempMnMH = rtb_LeSTCR_T_TransTempMinCal_MH;

        /* Sum: '<S1122>/Sum22' incorporates:
         *  Constant: '<S1173>/Calib'
         *  Constant: '<S1178>/Calib'
         */
        rtb_LeSTCR_T_MtrATempMaxCal_MH = KeSTCR_T_AStopMtrATempMax_MildHyb +
            KeSTCR_T_AStrtMtrATempHyst_MildHyb;

        /* Merge: '<S452>/Merge21' incorporates:
         *  Gain: '<S1192>/Gain'
         */
        rtb_LeSTCR_T_MtrATempMH = rtb_LeSTCR_T_MtrATempMaxCal_MH;

        /* End of Outputs for SubSystem: '<S1005>/EVInhibit_MHCals' */

        /* Outputs for Atomic SubSystem: '<S1005>/DtrmnCalSelect' */
        /* If: '<S1005>/If' incorporates:
         *  Constant: '<S1163>/Constant'
         *  Constant: '<S1164>/Constant'
         *  Constant: '<S1165>/Constant'
         *  Constant: '<S1166>/Calib'
         *  Logic: '<S1121>/Logical1'
         *  Logic: '<S1121>/Logical4'
         *  Logic: '<S1121>/Logical5'
         *  RelationalOperator: '<S1121>/Comparison1'
         *  RelationalOperator: '<S1121>/Comparison2'
         *  RelationalOperator: '<S1121>/Comparison4'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeSTRR) ==
                CeSTRR_e_EvalDlydKeyCrank)
        {
            /* Outputs for IfAction SubSystem: '<S1005>/DelayedCrankCals' incorporates:
             *  ActionPort: '<S1120>/Action Port'
             */
            /* SignalConversion generated from: '<S1120>/SOCDeltaMin' incorporates:
             *  Constant: '<S1148>/Calib'
             */
            STCR_ac_B.OutportBufferForSOCDeltaMin_p =
                KeSTCR_Pct_SoftChkDeltaFromTgtSOC_DKCrnk;

            /* Merge: '<S452>/Merge2' incorporates:
             *  Constant: '<S1148>/Calib'
             *  Gain: '<S1161>/Gain'
             */
            rtb_VeSTCR_Pct_SoftChkBatSOCDel =
                KeSTCR_Pct_SoftChkDeltaFromTgtSOC_DKCrnk;

            /* Merge: '<S452>/Merge13' incorporates:
             *  Constant: '<S1145>/Calib'
             *  Constant: '<S1146>/Calib'
             *  Sum: '<S1120>/Sum4'
             */
            rtb_LeSTCR_P_BattPwrDMinCal_MH =
                KeSTCR_P_AStopBatPwrDschrgMin_DKCrnk -
                KeSTCR_P_AStrtBatPwrDschrgHyst_DKCrnk;

            /* Merge: '<S452>/Merge5' incorporates:
             *  Constant: '<S1149>/Calib'
             *  Constant: '<S1155>/Calib'
             *  Sum: '<S1120>/Sum14'
             */
            rtb_LeSTCR_T_BatTempMaxCal_MH = KeSTCR_T_AStopBatModTempMax_DKCrnk +
                KeSTCR_T_AStrtBatModTempHyst_DKCrnk;

            /* Merge: '<S452>/Merge17' incorporates:
             *  Constant: '<S1150>/Calib'
             *  Constant: '<S1155>/Calib'
             *  Sum: '<S1120>/Sum2'
             */
            rtb_TmpSignalConversionAtVeABCR = KeSTCR_T_AStopBatModTempMin_DKCrnk
                - KeSTCR_T_AStrtBatModTempHyst_DKCrnk;

            /* Merge: '<S452>/Merge8' incorporates:
             *  Constant: '<S1151>/Calib'
             *  Constant: '<S1156>/Calib'
             *  Sum: '<S1120>/Sum3'
             */
            rtb_LeSTCR_T_MtrATempMaxCal_MH = KeSTCR_T_AStopMtrATempMax_DKCrnk +
                KeSTCR_T_AStrtMtrATempHyst_DKCrnk;

            /* Merge: '<S452>/Merge25' incorporates:
             *  Constant: '<S1153>/Calib'
             *  Constant: '<S1158>/Calib'
             *  Sum: '<S1120>/Sum1'
             */
            rtb_LeSTCR_T_MtrBTempmMaxCal_MH = KeSTCR_T_AStopMtrBTempMax_DKCrnk +
                KeSTCR_T_AStrtMtrBTempHyst_DKCrnk;

            /* Merge: '<S452>/Merge18' incorporates:
             *  Constant: '<S1159>/Calib'
             *  Lookup_n-D: '<S1160>/Vector'
             *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
             *  Sum: '<S1120>/Sum15'
             */
            rtb_VeSTCR_T_SoftChkTransTmpMin = look1_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeAATR, ((const float32 *)
                  &(KxSTCR_T_AStopTransTempMin_DKCrnk[0])), ((const float32 *)
                  &(KtSTCR_T_AStopTransTempMin_DKCrnk[0])), 7U) -
                KeSTCR_T_AStrtTransTempHyst_DKCrnk;

            /* Merge: '<S452>/Merge1' incorporates:
             *  Constant: '<S1154>/Calib'
             *  Constant: '<S1159>/Calib'
             *  Sum: '<S1120>/Sum9'
             */
            rtb_LeSTCR_T_TransTempMaxCal_MH = KeSTCR_T_AStopTransTempMax_DKCrnk
                + KeSTCR_T_AStrtTransTempHyst_DKCrnk;

            /* Merge: '<S452>/Merge31' incorporates:
             *  Constant: '<S1147>/Calib'
             *  Gain: '<S1162>/Gain'
             */
            rtb_LeSTCR_T_TransTempMinCal_MH = KeSTCR_Pct_IBSBattSOCMin_DKCrnk;

            /* Merge: '<S452>/Merge33' incorporates:
             *  Constant: '<S1152>/Calib'
             *  Constant: '<S1157>/Calib'
             *  Sum: '<S1120>/Sum5'
             */
            rtb_LeSTCR_T_MtrA_CoolantTempMa =
                KeSTCR_T_AStopMtrA_CoolantTempMax_DKCrnk +
                KeSTCR_T_AStrtMtrA_CoolantTempHyst_DKCrnk;

            /* End of Outputs for SubSystem: '<S1005>/DelayedCrankCals' */
        }
        else if (rtb_VeSTCR_b_MildHybridEnbld || ((KeSTCR_b_EnblSlntSrtChk) &&
                  ((((uint32)rtb_TmpSignalConversionAtVeSTRR) ==
                    CeSTRR_e_SilentStrtEntry) || (((uint32)
                     rtb_TmpSignalConversionAtVeSTRR) == CeSTRR_e_SilentStrtExit))))
        {
            /* Outputs for IfAction SubSystem: '<S1005>/MildHybCals' incorporates:
             *  ActionPort: '<S1143>/Action Port'
             */
            /* SignalConversion generated from: '<S1143>/SOCDeltaMin' incorporates:
             *  Constant: '<S1170>/Calib'
             */
            STCR_ac_B.BufferToMakeInportVirtual_Inser =
                KeSTCR_Pct_SoftChkDeltaFromTgtSOC_MildHyb;

            /* Merge: '<S452>/Merge2' incorporates:
             *  Constant: '<S1170>/Calib'
             *  Gain: '<S1194>/Gain'
             */
            rtb_VeSTCR_Pct_SoftChkBatSOCDel =
                KeSTCR_Pct_SoftChkDeltaFromTgtSOC_MildHyb;

            /* Merge: '<S452>/Merge18' incorporates:
             *  Gain: '<S1200>/Gain'
             */
            rtb_VeSTCR_T_SoftChkTransTmpMin = rtb_LeSTCR_T_TransTempMinCal_MH;

            /* Merge: '<S452>/Merge31' incorporates:
             *  Constant: '<S1169>/Calib'
             *  Gain: '<S1201>/Gain'
             */
            rtb_LeSTCR_T_TransTempMinCal_MH = KeSTCR_Pct_IBSBattSOCMin_MildHyb;

            /* End of Outputs for SubSystem: '<S1005>/MildHybCals' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S1005>/NormalCals' incorporates:
             *  ActionPort: '<S1144>/Action Port'
             */
            /* SignalConversion generated from: '<S1144>/SOCDeltaMin' incorporates:
             *  Constant: '<S1206>/Calib'
             */
            STCR_ac_B.OutportBufferForSOCDeltaMin =
                KeSTCR_Pct_SoftChkDeltaFromTgtSOC;

            /* Merge: '<S452>/Merge2' incorporates:
             *  Constant: '<S1206>/Calib'
             *  Gain: '<S1219>/Gain'
             */
            rtb_VeSTCR_Pct_SoftChkBatSOCDel = KeSTCR_Pct_SoftChkDeltaFromTgtSOC;

            /* Merge: '<S452>/Merge13' incorporates:
             *  Constant: '<S1203>/Calib'
             *  Constant: '<S1204>/Calib'
             *  Sum: '<S1144>/Sum12'
             */
            rtb_LeSTCR_P_BattPwrDMinCal_MH = KeSTCR_P_AStopBatPwrDschrgMin -
                KeSTCR_P_AStrtBatPwrDschrgHyst;

            /* Merge: '<S452>/Merge17' incorporates:
             *  Constant: '<S1208>/Calib'
             *  Constant: '<S1213>/Calib'
             *  Sum: '<S1144>/Sum1'
             */
            rtb_TmpSignalConversionAtVeABCR = KeSTCR_T_AStopBatModTempMin -
                KeSTCR_T_AStrtBatModTempHyst;

            /* Merge: '<S452>/Merge5' incorporates:
             *  Constant: '<S1207>/Calib'
             *  Constant: '<S1213>/Calib'
             *  Sum: '<S1144>/Sum13'
             */
            rtb_LeSTCR_T_BatTempMaxCal_MH = KeSTCR_T_AStopBatModTempMax +
                KeSTCR_T_AStrtBatModTempHyst;

            /* Merge: '<S452>/Merge8' incorporates:
             *  Constant: '<S1209>/Calib'
             *  Constant: '<S1214>/Calib'
             *  Sum: '<S1144>/Sum3'
             */
            rtb_LeSTCR_T_MtrATempMaxCal_MH = KeSTCR_T_AStopMtrATempMax +
                KeSTCR_T_AStrtMtrATempHyst;

            /* Merge: '<S452>/Merge25' incorporates:
             *  Constant: '<S1211>/Calib'
             *  Constant: '<S1216>/Calib'
             *  Sum: '<S1144>/Sum2'
             */
            rtb_LeSTCR_T_MtrBTempmMaxCal_MH = KeSTCR_T_AStopMtrBTempMax +
                KeSTCR_T_AStrtMtrBTempHyst;

            /* Merge: '<S452>/Merge18' incorporates:
             *  Constant: '<S1217>/Calib'
             *  Lookup_n-D: '<S1218>/Vector'
             *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
             *  Sum: '<S1144>/Sum17'
             */
            rtb_VeSTCR_T_SoftChkTransTmpMin = look1_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeAATR, ((const float32 *)
                  &(KxSTCR_T_AStopTransTempMin[0])), ((const float32 *)
                  &(KtSTCR_T_AStopTransTempMin[0])), 7U) -
                KeSTCR_T_AStrtTransTempHyst;

            /* Merge: '<S452>/Merge1' incorporates:
             *  Constant: '<S1212>/Calib'
             *  Constant: '<S1217>/Calib'
             *  Sum: '<S1144>/Sum8'
             */
            rtb_LeSTCR_T_TransTempMaxCal_MH = KeSTCR_T_AStopTransTempMax +
                KeSTCR_T_AStrtTransTempHyst;

            /* Merge: '<S452>/Merge31' incorporates:
             *  Constant: '<S1205>/Calib'
             *  SignalConversion generated from: '<S1144>/IBS_SOCMin'
             */
            rtb_LeSTCR_T_TransTempMinCal_MH = KeSTCR_Pct_IBSBattSOCMin;

            /* Merge: '<S452>/Merge33' incorporates:
             *  Constant: '<S1210>/Calib'
             *  Constant: '<S1215>/Calib'
             *  Sum: '<S1144>/Sum4'
             */
            rtb_LeSTCR_T_MtrA_CoolantTempMa = KeSTCR_T_AStopMtrA_CoolantTempMax
                + KeSTCR_T_AStrtMtrA_CoolantTempHyst;

            /* End of Outputs for SubSystem: '<S1005>/NormalCals' */
        }

        /* End of If: '<S1005>/If' */
        /* End of Outputs for SubSystem: '<S1005>/DtrmnCalSelect' */

        /* VariantMerge generated from: '<S345>/BatSOCDelta4mArb' incorporates:
         *  Constant: '<S1005>/Constant Value'
         *  MinMax: '<S1005>/MinMax'
         */
        STCR_ac_B.VariantMergeForOutportBatSOCDel = fminf(fminf(fminf
            (STCR_ac_B.OutportBufferForSOCDeltaMin_p,
             STCR_ac_B.BufferToMakeInportVirtual_Inser),
            STCR_ac_B.OutportBufferForSOCDeltaMin), 0.0F);

        /* Merge: '<S452>/Merge6' incorporates:
         *  Constant: '<S1131>/Calib'
         *  Constant: '<S1134>/Calib'
         *  Sum: '<S1005>/Sum16'
         */
        rtb_TmpSignalConversionAtVeAPSR = KeSTCR_T_AStrtECTHyst +
            KeSTCR_T_AStopECTMax;

        /* Merge: '<S452>/Merge7' incorporates:
         *  Constant: '<S1134>/Calib'
         *  Lookup_n-D: '<S1142>/Vector'
         *  SignalConversion generated from: '<S3>/VeAATR_T_EstAmbAirTemp'
         *  Sum: '<S1005>/Sum6'
         *  Switch: '<S1224>/Switch'
         */
        rtb_TmpSignalConversionAtVeAATR = look2_iflf_binlcapw(rtb_Switch_i,
            rtb_TmpSignalConversionAtVeAATR, ((const float32 *)
            &(KxSTCR_T_AStopECTMin[0])), ((const float32 *)
            &(KySTCR_T_AStopECTMin[0])), ((const float32 *)
            &(KtSTCR_T_AStopECTMin[0])), STCR_ac_ConstP.pooled34, 4U) -
            KeSTCR_T_AStrtECTHyst;

        /* Merge: '<S452>/Merge9' incorporates:
         *  Constant: '<S1132>/Calib'
         *  Constant: '<S1135>/Calib'
         *  Sum: '<S1005>/Sum7'
         */
        rtb_VeSTCR_T_SoftChkInvrtrATemp = KeSTCR_T_AStopInvrtrATempMax +
            KeSTCR_T_AStrtInvrtrATempHyst;

        /* Merge: '<S452>/Merge26' incorporates:
         *  Constant: '<S1133>/Calib'
         *  Constant: '<S1136>/Calib'
         *  Sum: '<S1005>/Sum1'
         */
        rtb_VeSTCR_T_SoftChkInvrtrBTemp = KeSTCR_T_AStopInvrtrBTempMax +
            KeSTCR_T_AStrtInvrtrBTempHyst;

        /* Switch: '<S1123>/Switch1' incorporates:
         *  Constant: '<S1119>/Constant'
         *  RelationalOperator: '<S1005>/Comparison6'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                CeTRGR_e_TransRangeNeutral)
        {
            /* Merge: '<S452>/Merge12' incorporates:
             *  Constant: '<S1140>/Calib'
             */
            rtb_VeSTCR_v_SoftChkVehSpdMaxCa = KeSTCR_v_AStopVehSpdMaxinNeutral;
        }
        else
        {
            /* Merge: '<S452>/Merge12' incorporates:
             *  Constant: '<S1139>/Calib'
             */
            rtb_VeSTCR_v_SoftChkVehSpdMaxCa = KeSTCR_v_AStopVehSpdMax;
        }

        /* End of Switch: '<S1123>/Switch1' */

        /* Merge: '<S452>/Merge14' incorporates:
         *  Constant: '<S1141>/Calib'
         *  SignalConversion generated from: '<S1005>/VehSpdNegMaxCal'
         */
        rtb_VeSTCR_v_SoftChkVehSpdNegMa = KeSTCR_v_AStopVehSpdNegMax;

        /* Merge: '<S452>/Merge16' incorporates:
         *  Constant: '<S1005>/FALSE Constant5'
         *  SignalConversion generated from: '<S1005>/TmrEngOnDsrd'
         */
        rtb_VeSTCR_b_AStrtTmrEngOnDsrd = false;

        /* Merge: '<S452>/Merge3' incorporates:
         *  Constant: '<S1124>/Calib'
         *  SignalConversion generated from: '<S1005>/VehSOCLim'
         */
        rtb_VeSTCR_Pct_SoftChkVehSOCLim = KeSTCR_Pct_DfltVehSOCHyst;

        /* Merge: '<S452>/Merge10' incorporates:
         *  Constant: '<S1005>/FALSE Constant1'
         *  SignalConversion generated from: '<S1005>/GradeEngOnDsrd'
         */
        rtb_TmpSignalConversionAtVeHPMR = false;

        /* Merge: '<S452>/Merge4' incorporates:
         *  Constant: '<S1137>/Calib'
         *  SignalConversion generated from: '<S1005>/PrimNoMaxCal'
         */
        rtb_Switch1_gk = KeSTCR_n_AStopPrimNoMax;

        /* Merge: '<S452>/Merge27' incorporates:
         *  Constant: '<S1138>/Calib'
         *  SignalConversion generated from: '<S1005>/PrimNoNegMaxCal'
         */
        rtb_Switch1_g1 = KeSTCR_n_AStopPrimNoNegMax;

        /* End of Outputs for SubSystem: '<S452>/STCC_AStrtChkCalLoader' */
    }

    /* End of If: '<S452>/If1' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ProcessSoftChkCals' */

    /* Inport: '<Root>/VeIDCR_b_IBS_BattSOC_FA' */
    (void)Rte_Read_VeIDCR_b_IBS_BattSOC_FA_Value
        (&rtb_VeSTCR_b_AStrtStpAlwVldtyCh);

    /* Inport: '<Root>/VeINVR_b_BstCnvtrReactorTmpFA' */
    (void)Rte_Read_VeINVR_b_BstCnvtrReactorTmpFA_Value
        (&rtb_LeSTCR_b_AStrtTowHaul);

    /* Inport: '<Root>/VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA' */
    (void)Rte_Read_VeINVR_b_BstCnvtrUpprIGBT_TmpFltdFA_Value
        (&rtb_LeSTCR_b_AStrtVehSpd);

    /* Inport: '<Root>/VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA' */
    (void)Rte_Read_VeINVR_b_BstCnvtrLwrIGBT_TmpFltdFA_Value
        (&rtb_LeSTCR_b_AStrtPrimNo);

    /* Inport: '<Root>/VeTMIR_b_TransOilTempFA' */
    (void)Rte_Read_VeTMIR_b_TransOilTempFA_Value(&rtb_LeSTCR_b_AStrtVehSOC);

    /* Inport: '<Root>/VePMDR_b_RunCrankActive' */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value(&rtb_LeSTCR_b_AStrtStpAlwECT);

    /* Inport: '<Root>/VePLTR_e_TowHaulMode' */
    (void)Rte_Read_VePLTR_e_TowHaulMode_Value(&tmpRead_3);

    /* Inport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' */
    (void)Rte_Read_VeINVR_b_MtrB_InvrtrTempFA_Value
        (&rtb_LeSTCR_b_AStrtStpAlwTransTe);

    /* Inport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA' */
    (void)Rte_Read_VeINVR_b_MtrA_InvrtrTempFA_Value(&rtb_Gain_d);

    /* Inport: '<Root>/VeINVR_b_MtrB_TempFA' */
    (void)Rte_Read_VeINVR_b_MtrB_TempFA_Value(&rtb_LeSTCR_b_AStrtStpAlwBatTemp);

    /* Inport: '<Root>/VeINVR_b_MtrA_TempFA' */
    (void)Rte_Read_VeINVR_b_MtrA_TempFA_Value(&rtb_LeSTCR_b_AStrtStpAlwBatSOC);

    /* Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP' */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value(&rtb_Switch_jx);

    /* Inport: '<Root>/VeENGR_b_ECT_SnsrFA' */
    (void)Rte_Read_VeENGR_b_ECT_SnsrFA_Value(&rtb_LeSTCR_b_AStrtStpAlwBatTe_c);

    /* Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_SFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_SFA_Value
        (&rtb_LeSTCR_b_AStrtStpBattPwrTrg);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMinFA_Value
        (&rtb_LeSTCR_b_AStrtStpBoostCnvrt);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ProcessSoftChkCals' */
    /* Outputs for Atomic SubSystem: '<S452>/GradientLimiter' */
    /* Sum: '<S998>/Sum2' incorporates:
     *  UnitDelay: '<S998>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeABCR -=
        STCR_ac_DW.VeSTCR_T_SoftChkBatTempMinLimPr;

    /* Outputs for Atomic SubSystem: '<S998>/Limiter' */
    /* Switch: '<S1020>/Switch1' incorporates:
     *  Constant: '<S1002>/Calib'
     *  RelationalOperator: '<S1020>/Relational Operator'
     */
    if (KeSTCR_T_TempLmtChng_LU < rtb_TmpSignalConversionAtVeABCR)
    {
        /* Abs: '<S451>/Abs1' */
        rtb_Switch_i = KeSTCR_T_TempLmtChng_LU;
    }
    else
    {
        /* Abs: '<S451>/Abs1' */
        rtb_Switch_i = rtb_TmpSignalConversionAtVeABCR;
    }

    /* End of Switch: '<S1020>/Switch1' */

    /* Switch: '<S1020>/Switch' incorporates:
     *  Constant: '<S1001>/Calib'
     *  RelationalOperator: '<S1020>/Relational Operator1'
     */
    if (rtb_Switch_i <= KeSTCR_T_TempLmtChng_LD)
    {
        rtb_Switch_i = KeSTCR_T_TempLmtChng_LD;
    }

    /* End of Switch: '<S1020>/Switch' */
    /* End of Outputs for SubSystem: '<S998>/Limiter' */

    /* Sum: '<S998>/Sum3' incorporates:
     *  UnitDelay: '<S998>/Unit Delay'
     */
    rtb_Switch_i += STCR_ac_DW.VeSTCR_T_SoftChkBatTempMinLimPr;

    /* Update for UnitDelay: '<S998>/Unit Delay' */
    STCR_ac_DW.VeSTCR_T_SoftChkBatTempMinLimPr = rtb_Switch_i;

    /* End of Outputs for SubSystem: '<S452>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S452>/GradientLimiter1' */
    /* Sum: '<S999>/Sum2' incorporates:
     *  UnitDelay: '<S999>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeABCR = rtb_VeSTCR_T_SoftChkTransTmpMin -
        STCR_ac_DW.VeSTCR_T_SoftChkTransTmpMinLimP;

    /* Outputs for Atomic SubSystem: '<S999>/Limiter' */
    /* Switch: '<S1021>/Switch1' incorporates:
     *  Constant: '<S1002>/Calib'
     *  RelationalOperator: '<S1021>/Relational Operator'
     */
    if (KeSTCR_T_TempLmtChng_LU < rtb_TmpSignalConversionAtVeABCR)
    {
        /* Abs: '<S451>/Abs' */
        rtb_TmpSignalConversionAtVeABCR = KeSTCR_T_TempLmtChng_LU;
    }

    /* End of Switch: '<S1021>/Switch1' */

    /* Switch: '<S1021>/Switch' incorporates:
     *  Constant: '<S1001>/Calib'
     *  RelationalOperator: '<S1021>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeABCR <= KeSTCR_T_TempLmtChng_LD)
    {
        rtb_TmpSignalConversionAtVeABCR = KeSTCR_T_TempLmtChng_LD;
    }

    /* End of Switch: '<S1021>/Switch' */
    /* End of Outputs for SubSystem: '<S999>/Limiter' */

    /* Sum: '<S999>/Sum3' incorporates:
     *  UnitDelay: '<S999>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeABCR +=
        STCR_ac_DW.VeSTCR_T_SoftChkTransTmpMinLimP;

    /* Update for UnitDelay: '<S999>/Unit Delay' */
    STCR_ac_DW.VeSTCR_T_SoftChkTransTmpMinLimP = rtb_TmpSignalConversionAtVeABCR;

    /* End of Outputs for SubSystem: '<S452>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ProcessSoftChkCals' */

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ComboSoftChk' */
    /* Outputs for Atomic SubSystem: '<S451>/Sgnl_VldtyChk' */
    /* Logic: '<S477>/Logical' incorporates:
     *  Constant: '<S627>/Constant17'
     *  Constant: '<S627>/Constant18'
     *  Constant: '<S627>/Constant19'
     *  Constant: '<S627>/Constant20'
     *  Constant: '<S627>/Constant25'
     *  Constant: '<S627>/Constant26'
     *  Constant: '<S627>/Constant27'
     *  Constant: '<S627>/Constant28'
     *  Constant: '<S627>/Constant29'
     *  Constant: '<S627>/Constant30'
     *  Constant: '<S627>/Constant31'
     *  Constant: '<S627>/Constant32'
     *  Constant: '<S628>/Calib'
     *  Constant: '<S629>/Constant'
     *  Constant: '<S630>/Constant'
     *  Constant: '<S631>/Constant'
     *  Constant: '<S632>/Constant'
     *  Constant: '<S637>/Constant'
     *  Constant: '<S638>/Constant'
     *  Constant: '<S639>/Constant'
     *  Constant: '<S640>/Constant'
     *  Constant: '<S641>/Constant'
     *  Constant: '<S642>/Constant'
     *  Constant: '<S643>/Constant'
     *  Constant: '<S644>/Constant'
     *  Logic: '<S477>/Logical1'
     *  Logic: '<S477>/Logical10'
     *  Logic: '<S477>/Logical11'
     *  Logic: '<S477>/Logical12'
     *  Logic: '<S477>/Logical13'
     *  Logic: '<S477>/Logical2'
     *  Logic: '<S477>/Logical3'
     *  Logic: '<S477>/Logical4'
     *  Logic: '<S477>/Logical5'
     *  Logic: '<S477>/Logical6'
     *  Logic: '<S477>/Logical7'
     *  Logic: '<S477>/Logical8'
     *  Logic: '<S477>/Logical9'
     *  RelationalOperator: '<S629>/Compare'
     *  RelationalOperator: '<S630>/Compare'
     *  RelationalOperator: '<S631>/Compare'
     *  RelationalOperator: '<S632>/Compare'
     *  RelationalOperator: '<S637>/Compare'
     *  RelationalOperator: '<S638>/Compare'
     *  RelationalOperator: '<S639>/Compare'
     *  RelationalOperator: '<S640>/Compare'
     *  RelationalOperator: '<S641>/Compare'
     *  RelationalOperator: '<S642>/Compare'
     *  RelationalOperator: '<S643>/Compare'
     *  RelationalOperator: '<S644>/Compare'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator1'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator10'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator11'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator2'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator3'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator4'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator5'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator6'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator7'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator8'
     *  S-Function (sfix_bitop): '<S627>/Bitwise Logical Operator9'
     */
    rtb_VeSTCR_b_AStrtStpAlwVldtyCh =
        (((((((((((((rtb_LeSTCR_b_AStrtStpAlwBatTe_c && ((((sint32)
                        HeSTCR_y_EnblFAVldtyChk) & 1) > 0)) ||
                    (rtb_LeSTCR_b_AStrtStpBattPwrTrg && ((((sint32)
                        HeSTCR_y_EnblFAVldtyChk) & 2) > 0))) ||
                   (rtb_LeSTCR_b_AStrtStpBoostCnvrt && ((((sint32)
                       HeSTCR_y_EnblFAVldtyChk) & 4) > 0))) || (rtb_Gain_d &&
                   ((((sint32)HeSTCR_y_EnblFAVldtyChk) & 8) > 0))) ||
                 (rtb_LeSTCR_b_AStrtStpAlwTransTe && ((((sint32)
                     HeSTCR_y_EnblFAVldtyChk) & 16) > 0))) ||
                (rtb_LeSTCR_b_AStrtStpAlwBatSOC && ((((sint32)
                    HeSTCR_y_EnblFAVldtyChk) & 32) > 0))) ||
               (rtb_LeSTCR_b_AStrtStpAlwBatTemp && ((((sint32)
                   HeSTCR_y_EnblFAVldtyChk) & 64) > 0))) ||
              (rtb_LeSTCR_b_AStrtVehSOC && ((((sint32)HeSTCR_y_EnblFAVldtyChk) &
                 128) > 0))) || (rtb_LeSTCR_b_AStrtPrimNo && ((((sint32)
                 HeSTCR_y_EnblFAVldtyChk) & 256) > 0))) ||
            (rtb_LeSTCR_b_AStrtVehSpd && ((((sint32)HeSTCR_y_EnblFAVldtyChk) &
               512) > 0))) || (rtb_LeSTCR_b_AStrtTowHaul && ((((sint32)
               HeSTCR_y_EnblFAVldtyChk) & 1024) > 0))) ||
          (rtb_VeSTCR_b_AStrtStpAlwVldtyCh && ((((sint32)HeSTCR_y_EnblFAVldtyChk)
             & 2048) > 0))) && rtb_LeSTCR_b_AStrtStpAlwECT);

    /* End of Outputs for SubSystem: '<S451>/Sgnl_VldtyChk' */

    /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
    /* Outputs for Atomic SubSystem: '<S481>/TowHaul' */
    /* Logic: '<S953>/Logical2' incorporates:
     *  Constant: '<S971>/Constant'
     *  Constant: '<S972>/Calib'
     *  Inport: '<Root>/VePLTR_e_TowHaulMode'
     *  RelationalOperator: '<S953>/Comparison5'
     */
    rtb_LeSTCR_b_AStrtTowHaul = ((((uint32)tmpRead_3) ==
        CePLTR_e_Towing_MD_RQ_ON) && (KeSTCR_b_FtrEngOnTowHaulEnab));

    /* End of Outputs for SubSystem: '<S481>/TowHaul' */

    /* Outputs for Atomic SubSystem: '<S481>/VehSpeed' */
    /* Logic: '<S956>/Logical5' incorporates:
     *  RelationalOperator: '<S956>/Greater Than or Equal 10'
     *  RelationalOperator: '<S956>/Greater Than or Equal 9'
     */
    rtb_LeSTCR_b_AStrtVehSpd = ((rtb_TmpSignalConversionAtVeCSVR >
        rtb_VeSTCR_v_SoftChkVehSpdMaxCa) || (rtb_TmpSignalConversionAtVeCSVR <
        rtb_VeSTCR_v_SoftChkVehSpdNegMa));

    /* Logic: '<S956>/Logical1' incorporates:
     *  RelationalOperator: '<S956>/Greater Than or Equal 1'
     *  RelationalOperator: '<S956>/Greater Than or Equal 2'
     */
    rtb_LeSTCR_b_AStrtPrimNo = ((rtb_TmpSignalConversionAtVeVSDR >
        rtb_Switch1_gk) || (rtb_TmpSignalConversionAtVeVSDR < rtb_Switch1_g1));

    /* End of Outputs for SubSystem: '<S481>/VehSpeed' */

    /* Outputs for Atomic SubSystem: '<S481>/VehSOC' */
    /* Logic: '<S955>/Logical20' incorporates:
     *  Constant: '<S993>/Calib'
     *  RelationalOperator: '<S955>/Greater Than or Equal 11'
     */
    rtb_LeSTCR_b_AStrtVehSOC = ((KeSTCR_b_EnblVehSOCSoftChk) && (rtb_Switch_jx <
        rtb_VeSTCR_Pct_SoftChkVehSOCLim));

    /* End of Outputs for SubSystem: '<S481>/VehSOC' */

    /* Outputs for Atomic SubSystem: '<S481>/Timer' */
    /* Logic: '<S952>/Logical42' incorporates:
     *  Constant: '<S970>/Constant'
     *  Logic: '<S952>/Logical1'
     *  RelationalOperator: '<S952>/Comparison1'
     */
    rtb_TmpSignalConversionAtV2L_En = (((((uint32)
        rtb_TmpSignalConversionAtVeDMDR) != CeDMDR_e_EV) &&
        rtb_VeSTCR_b_AStrtTmrEngOnDsrd) && (!rtb_TmpSignalConversionAtV2L_En));

    /* End of Outputs for SubSystem: '<S481>/Timer' */

    /* Outputs for Atomic SubSystem: '<S481>/TrrnDrvMd_Eval' */
    /* DataTypeConversion: '<S954>/Data Type Conversion2' incorporates:
     *  Constant: '<S976>/Calib'
     *  Constant: '<S978>/Calib'
     *  RelationalOperator: '<S954>/Comparison4'
     *  Selector: '<S954>/Selector'
     *  Selector: '<S954>/Selector1'
     */
#if Rte_SysCon_Variant_STCR_P2Equipd || Rte_SysCon_Variant_STCR_P4Equipd

    /* DataTypeConversion: '<S954>/Data Type Conversion2' */
    rtb_DataTypeConversion2 = (uint8)rtb_TmpSignalConversionAtVeDMDR;
    rtb_Switch1_ih_tmp = (10 * ((sint32)rtb_TmpSignalConversionAtVeDMDR)) +
        ((sint32)rtb_TmpSignalConversionAtVeTMDR);

    /* Logic: '<S451>/OR7' incorporates:
     *  Constant: '<S976>/Calib'
     *  Constant: '<S978>/Calib'
     */
    rtb_Switch1_gx = KaSTCR_b_StrtRqLowOn[(rtb_Switch1_ih_tmp)];

    /* Switch: '<S673>/Switch' incorporates:
     *  Constant: '<S975>/Constant'
     *  SignalConversion generated from: '<S3>/VeTMDR_e_LockLowSt'
     */
    rtb_Switch_ff = (((uint32)rtb_TmpSignalConversionAtVeTM_l) ==
                     CeTMDR_e_AWD_Low);

    /* Selector: '<S954>/Selector1' incorporates:
     *  Constant: '<S976>/Calib'
     */
    rtb_VeSTCR_b_StrtRqAWDOff = KaSTCR_b_StrtRqAWDOff[(rtb_Switch1_ih_tmp)];

#endif

    /* End of DataTypeConversion: '<S954>/Data Type Conversion2' */

    /* Switch: '<S954>/Switch1' */
#if Rte_SysCon_Variant_STCR_P2Equipd

    if (rtb_Switch_ff)
    {
        /* Switch: '<S662>/Switch' */
        rtb_Switch_ci = rtb_Switch1_gx;
    }
    else
    {
        /* Switch: '<S662>/Switch' */
        rtb_Switch_ci = rtb_VeSTCR_b_StrtRqAWDOff;
    }

#endif

    /* End of Switch: '<S954>/Switch1' */

    /* Switch: '<S954>/Switch3' incorporates:
     *  Constant: '<S974>/Constant'
     *  RelationalOperator: '<S954>/Comparison3'
     *  SignalConversion generated from: '<S3>/VeTMDR_e_LockLowSt'
     *  SignalConversion generated from: '<S954>/VariantSource4'
     *  Switch: '<S954>/Switch2'
     */
#if Rte_SysCon_Variant_STCR_P4Equipd

    if (rtb_Switch_ff)
    {
        /* Switch: '<S662>/Switch' */
        rtb_Switch_ci = rtb_Switch1_gx;
    }
    else
    {
        if (CeTMDR_e_AWD_Lock == ((uint32)rtb_TmpSignalConversionAtVeTM_l))
        {
            /* Switch: '<S954>/Switch2' incorporates:
             *  Constant: '<S977>/Calib'
             *  Selector: '<S954>/Selector3'
             */
            rtb_VeSTCR_b_StrtRqAWDOff = KaSTCR_b_StrtRqLockOn[(10 * ((sint32)
                rtb_DataTypeConversion2)) + ((sint32)
                rtb_TmpSignalConversionAtVeTMDR)];
        }

        /* Switch: '<S662>/Switch' */
        rtb_Switch_ci = rtb_VeSTCR_b_StrtRqAWDOff;
    }

#elif !Rte_SysCon_Variant_STCR_P2Equipd && !Rte_SysCon_Variant_STCR_P4Equipd

    /* Switch: '<S662>/Switch' incorporates:
     *  Constant: '<S954>/FALSE Constant'
     *  SignalConversion generated from: '<S954>/VariantSource4'
     */
    rtb_Switch_ci = false;

#endif

    /* End of Switch: '<S954>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S954>/AWD_LowSlntStrt' */
    /* Logic: '<S973>/OR7' incorporates:
     *  Constant: '<S982>/Constant'
     *  Constant: '<S983>/Constant'
     *  Constant: '<S986>/Calib'
     *  Logic: '<S973>/OR1'
     *  RelationalOperator: '<S973>/Comparison1'
     *  RelationalOperator: '<S973>/Comparison2'
     */
    rtb_Switch_ff = (((CeTRGR_e_TransRangeNeutral != ((uint32)
                        rtb_TmpSignalConversionAtVeTRGR)) ||
                      (!KeSTCR_b_EnblAStrtAWDinN)) && (CeTRGR_e_TransRangePark
                      != ((uint32)rtb_TmpSignalConversionAtVeTRGR)));

    /* Outputs for Atomic SubSystem: '<S973>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S990>/EdgeRising' */
    /* Logic: '<S992>/AND' incorporates:
     *  Logic: '<S992>/OR1'
     *  UnitDelay: '<S992>/Unit Delay'
     */
    rtb_Switch1_gx = (rtb_Switch_ff && (!STCR_ac_DW.UnitDelay_DSTATE_hb));

    /* Update for UnitDelay: '<S992>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_hb = rtb_Switch_ff;

    /* End of Outputs for SubSystem: '<S990>/EdgeRising' */

    /* Switch: '<S990>/Switch1' incorporates:
     *  Logic: '<S990>/OR'
     *  Logic: '<S990>/OR1'
     */
    if ((!rtb_Switch_ff) || rtb_Switch1_gx)
    {
        /* Switch: '<S990>/Switch1' incorporates:
         *  Constant: '<S990>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeVSDR = 0.0F;
    }
    else
    {
        /* Switch: '<S990>/Switch1' incorporates:
         *  Constant: '<S985>/Calib'
         *  Constant: '<S988>/Calib'
         *  MinMax: '<S990>/Minimum'
         *  Sum: '<S990>/Summation'
         *  UnitDelay: '<S990>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVSDR = fminf(KeSTCR_t_AStrtAWDTOnDly,
            HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S990>/Switch1' */

    /* Logic: '<S990>/AND' incorporates:
     *  Constant: '<S988>/Calib'
     *  RelationalOperator: '<S990>/Greater  Than'
     */
    rtb_Switch_ff = (rtb_Switch_ff && (rtb_TmpSignalConversionAtVeVSDR >=
                      KeSTCR_t_AStrtAWDTOnDly));

    /* Update for UnitDelay: '<S990>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_i = rtb_TmpSignalConversionAtVeVSDR;

    /* End of Outputs for SubSystem: '<S973>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S973>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S989>/EdgeFalling' */
    /* Logic: '<S991>/AND' incorporates:
     *  Logic: '<S991>/OR1'
     *  UnitDelay: '<S991>/Unit Delay'
     */
    rtb_Switch1_gx = ((!rtb_Switch_ff) && (STCR_ac_DW.UnitDelay_DSTATE_ac));

    /* Update for UnitDelay: '<S991>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ac = rtb_Switch_ff;

    /* End of Outputs for SubSystem: '<S989>/EdgeFalling' */

    /* Switch: '<S989>/Switch' */
    if (rtb_Switch1_gx)
    {
        /* Switch: '<S989>/Switch' incorporates:
         *  Constant: '<S987>/Calib'
         */
        rtb_TmpSignalConversionAtVeVSDR = KeSTCR_t_AStrtAWDTOffDly;
    }
    else
    {
        /* Switch: '<S989>/Switch' incorporates:
         *  Constant: '<S985>/Calib'
         *  Constant: '<S989>/Constant Value1'
         *  MinMax: '<S989>/Minimum'
         *  Sum: '<S989>/Summation'
         *  UnitDelay: '<S989>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVSDR = fmaxf(STCR_ac_DW.UnitDelay_DSTATE_d -
            HeSTCR_t_MedTEH_dT, 0.0F);
    }

    /* End of Switch: '<S989>/Switch' */

    /* Update for UnitDelay: '<S989>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeVSDR;

    /* End of Outputs for SubSystem: '<S973>/Turn Off Delay Time' */

    /* Switch: '<S973>/Switch1' incorporates:
     *  Constant: '<S984>/Calib'
     */
    if (HeSTCR_b_EnblStrtTrgPRNDL)
    {
        /* Outputs for Atomic SubSystem: '<S973>/Turn Off Delay Time' */
        /* Switch: '<S973>/Switch1' incorporates:
         *  Constant: '<S989>/Constant Value2'
         *  Gain: '<S981>/Gain'
         *  Logic: '<S989>/AND'
         *  RelationalOperator: '<S989>/Greater  Than'
         */
        rtb_Switch_ff = ((rtb_Switch_ff || (rtb_TmpSignalConversionAtVeVSDR >
                           0.0F)) && rtb_Switch_ci);

        /* End of Outputs for SubSystem: '<S973>/Turn Off Delay Time' */
    }
    else
    {
        /* Switch: '<S973>/Switch1' incorporates:
         *  Gain: '<S981>/Gain'
         */
        rtb_Switch_ff = rtb_Switch_ci;
    }

    /* End of Switch: '<S973>/Switch1' */
    /* End of Outputs for SubSystem: '<S954>/AWD_LowSlntStrt' */

    /* Delay: '<S954>/IntegerDelay' incorporates:
     *  Constant: '<S979>/Calib'
     */
    if (((sint32)KeSTCR_Cnt_AStrtAWDLockLowDly) <= 0)
    {
        /* Switch: '<S662>/Switch' */
        rtb_Switch_ci = rtb_Switch_ff;
    }
    else
    {
        if (((sint32)KeSTCR_Cnt_AStrtAWDLockLowDly) > 4)
        {
            rtb_Switch1_df = 4U;
        }
        else
        {
            rtb_Switch1_df = KeSTCR_Cnt_AStrtAWDLockLowDly;
        }

        /* Switch: '<S662>/Switch' */
        rtb_Switch_ci = STCR_ac_DW.IntegerDelay_DSTATE[(uint16)(4U - ((uint32)
            rtb_Switch1_df))];
    }

    /* End of Delay: '<S954>/IntegerDelay' */

    /* Logic: '<S954>/Logical49' incorporates:
     *  Constant: '<S980>/Calib'
     */
    rtb_VeSTCR_b_StrtRqAWDOff = (rtb_Switch_ci && (KeSTCR_b_AStrtAWDLockLowEnbl));

    /* Update for Delay: '<S954>/IntegerDelay' */
    for (rtb_Switch1_ih_tmp = 0; rtb_Switch1_ih_tmp < 3; rtb_Switch1_ih_tmp++)
    {
        STCR_ac_DW.IntegerDelay_DSTATE[rtb_Switch1_ih_tmp] =
            STCR_ac_DW.IntegerDelay_DSTATE[rtb_Switch1_ih_tmp + 1];
    }

    STCR_ac_DW.IntegerDelay_DSTATE[3] = rtb_Switch_ff;

    /* End of Update for Delay: '<S954>/IntegerDelay' */
    /* End of Outputs for SubSystem: '<S481>/TrrnDrvMd_Eval' */

    /* Outputs for Atomic SubSystem: '<S481>/SportsMode' */
    /* RelationalOperator: '<S951>/Comparison6' incorporates:
     *  Inport: '<Root>/VeENGR_b_CatalystWarmUpEnabled'
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     *  Logic: '<S951>/AND2'
     *  Logic: '<S951>/AND3'
     *  Logic: '<S951>/AND4'
     *  Logic: '<S951>/AND5'
     *  RelationalOperator: '<S951>/Comparison1'
     */
#if !Rte_SysCon_Variant_STCR_REEVEquipd

    /* VariantMerge generated from: '<S951>/Variant Source' incorporates:
     *  Constant: '<S963>/Constant'
     *  Constant: '<S967>/Calib'
     */
    rtb_VariantMerge_For_Variant_So = ((KeSTCR_b_EnblDrvMd_EngOn) && (((uint32)
        rtb_TmpSignalConversionAtVeDMDR) == CeDMDR_e_Sport));

#else

    /* Outputs for Atomic SubSystem: '<S951>/Timer Retrigger Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S951>/EdgeRising' */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value(&tmpRead_4);
    (void)Rte_Read_VeENGR_b_CatalystWarmUpEnabled_Value
        (&rtb_LeSTCR_b_AStrtStpAlwBatTe_b);

    /* Logic: '<S951>/AND4' incorporates:
     *  Constant: '<S964>/Constant'
     *  Constant: '<S966>/Calib'
     *  Inport: '<Root>/VeENGR_b_CatalystWarmUpEnabled'
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     *  Logic: '<S951>/AND5'
     *  RelationalOperator: '<S951>/Comparison1'
     */
    rtb_VariantMerge_For_Variant_So = ((CeTMDR_e_Sport == ((uint32)tmpRead_4)) &&
        (rtb_LeSTCR_b_AStrtStpAlwBatTe_b || (KeSTCR_b_ByPassCatWrmUpSptMd)));

    /* Logic: '<S962>/AND' incorporates:
     *  Logic: '<S962>/OR1'
     *  UnitDelay: '<S962>/Unit Delay'
     */
    rtb_Switch_ci = (rtb_VariantMerge_For_Variant_So &&
                     (!STCR_ac_DW.UnitDelay_DSTATE_n2));

    /* Update for UnitDelay: '<S962>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_n2 = rtb_VariantMerge_For_Variant_So;

    /* Switch: '<S969>/Switch1' incorporates:
     *  Switch: '<S969>/Switch2'
     */
    if (rtb_Switch_ci)
    {
        /* Switch: '<S969>/Switch1' incorporates:
         *  Constant: '<S968>/Calib'
         */
        rtb_TmpSignalConversionAtVeVSDR = KeSTCR_t_EngOnSportTimer;
    }
    else if (rtb_VariantMerge_For_Variant_So)
    {
        /* Switch: '<S969>/Switch2' incorporates:
         *  Constant: '<S965>/Calib'
         *  Constant: '<S969>/Constant Value4'
         *  MinMax: '<S969>/Maximum'
         *  Sum: '<S969>/Subtraction'
         *  Switch: '<S969>/Switch1'
         *  UnitDelay: '<S969>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVSDR = fmaxf(STCR_ac_DW.UnitDelay_DSTATE_o -
            HeSTCR_t_MedTEH_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S969>/Switch1' incorporates:
         *  Switch: '<S969>/Switch2'
         *  UnitDelay: '<S969>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVSDR = STCR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S969>/Switch1' */

    /* Update for UnitDelay: '<S969>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeVSDR;

    /* VariantMerge generated from: '<S951>/Variant Source' incorporates:
     *  Constant: '<S969>/Constant Value2'
     *  Logic: '<S951>/AND3'
     *  RelationalOperator: '<S969>/Greater  Than1'
     */
    rtb_VariantMerge_For_Variant_So = (rtb_VariantMerge_For_Variant_So &&
        (rtb_TmpSignalConversionAtVeVSDR > 0.0F));

    /* End of Outputs for SubSystem: '<S951>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S951>/Timer Retrigger Reset Enabled' */
#endif

    /* End of RelationalOperator: '<S951>/Comparison6' */
    /* End of Outputs for SubSystem: '<S481>/SportsMode' */

    /* Outputs for Atomic SubSystem: '<S481>/SailOFFChk' */
    /* Abs: '<S950>/Abs' incorporates:
     *  Inport: '<Root>/VeDMIR_e_SailOffStatus_Internal'
     *  Logic: '<S950>/Logical'
     *  RelationalOperator: '<S950>/Comparison4'
     *  SignalConversion generated from: '<S950>/VariantSource4'
     */
#if Rte_SysCon_Variant_STCR_P2p5Equipd

    /* Outputs for Atomic SubSystem: '<S950>/Hysteresis' */
    (void)Rte_Read_VeDMIR_e_SailOffStatus_Internal_Value(&tmpRead);

    /* Switch: '<S958>/Switch1' incorporates:
     *  Constant: '<S960>/Calib'
     *  Inport: '<Root>/VeDMIR_e_SailOffStatus_Internal'
     *  RelationalOperator: '<S958>/Greater  Than'
     */
    if (rtb_LeSTCC_v_VehSpdAbs_tmp > KeSTCR_v_SailOFFSpdThresh)
    {
        /* Switch: '<S958>/Switch1' incorporates:
         *  Constant: '<S958>/Constant Value'
         */
        rtb_Switch1_bd = true;
    }
    else
    {
        /* Switch: '<S958>/Switch1' incorporates:
         *  Constant: '<S959>/Calib'
         *  RelationalOperator: '<S958>/Greater  Than1'
         *  Sum: '<S950>/Sum1'
         *  UnitDelay: '<S958>/Unit Delay'
         */
        rtb_Switch1_bd = ((rtb_LeSTCC_v_VehSpdAbs_tmp >=
                           (KeSTCR_v_SailOFFSpdThresh - KeSTCR_v_SailOFFSpdHys))
                          && (STCR_ac_DW.UnitDelay_DSTATE_fu));
    }

    /* End of Switch: '<S958>/Switch1' */

    /* Update for UnitDelay: '<S958>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fu = rtb_Switch1_bd;

    /* Switch: '<S661>/Switch' incorporates:
     *  Constant: '<S957>/Constant'
     *  Inport: '<Root>/VeDMIR_e_SailOffStatus_Internal'
     */
    rtb_Switch1_bd = ((((uint32)tmpRead) == CeDMDR_e_Active) && rtb_Switch1_bd);

    /* End of Outputs for SubSystem: '<S950>/Hysteresis' */
#else

    /* Switch: '<S661>/Switch' incorporates:
     *  Constant: '<S950>/FALSE Constant3'
     *  SignalConversion generated from: '<S950>/VariantSource4'
     */
    rtb_Switch1_bd = false;

#endif

    /* End of Outputs for SubSystem: '<S481>/SailOFFChk' */
    /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ComboSoftChk' */

    /* Inport: '<Root>/VeINVR_T_MtrA_CoolantTemp' */
    (void)Rte_Read_VeINVR_T_MtrA_CoolantTemp_Value(&tmpRead_5);

    /* Inport: '<Root>/VeIDCR_Pct_IBS_BattSOC' */
    (void)Rte_Read_VeIDCR_Pct_IBS_BattSOC_Value(&rtb_Product1_2);

    /* Inport: '<Root>/VeTRGR_b_ManualMode' */
    (void)Rte_Read_VeTRGR_b_ManualMode_Value(&rtb_LeSTCR_b_AStrtStpAlwMtrATem);

    /* Inport: '<Root>/VeTRAR_b_ThermSysStressed' */
    (void)Rte_Read_VeTRAR_b_ThermSysStressed_Value(&rtb_OR1_oc);

    /* Inport: '<Root>/VeTHMR_b_ThermSystEng_Req' */
    (void)Rte_Read_VeTHMR_b_ThermSystEng_Req_Value
        (&rtb_LeSTCR_b_AStrtStpAlwThrml);

    /* Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp' */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value(&rtb_Switch_k4);

    /* Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp' */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value(&rtb_Switch1_ay);

    /* Inport: '<Root>/VeINVR_T_MtrB_Temp' */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value(&tmpRead_2);

    /* Inport: '<Root>/VeINVR_T_MtrA_Temp' */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value(&tmpRead_1);

    /* Inport: '<Root>/VeHTDR_r_AHH_StressFactor' */
    (void)Rte_Read_VeHTDR_r_AHH_StressFactor_Value(&rtb_Product2_2);

    /* Inport: '<Root>/VeBACR_Pct_TargetSOC_StartStop' */
    (void)Rte_Read_VeBACR_Pct_TargetSOC_StartStop_Value(&rtb_Switch_fr);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ComboSoftChk' */
    /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
    /* Outputs for Atomic SubSystem: '<S481>/SailOFFChk' */
    /* Gain: '<S961>/Gain' */
    rtb_Gain_d = rtb_Switch1_bd;

    /* End of Outputs for SubSystem: '<S481>/SailOFFChk' */
    /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */

    /* Outputs for Atomic SubSystem: '<S451>/HVBatt_Chks' */
    /* UnitDelay: '<S651>/Unit Delay' incorporates:
     *  DataStoreRead: '<S451>/Data Store Read'
     *  MinMax: '<S465>/Min'
     *  RelationalOperator: '<S465>/Greater Than or Equal 1'
     */
    rtb_VeSTCR_b_MildHybridEnbld = (fminf(VeSTCR_P_PBatLTMaxHH_DS,
        rtb_TmpSignalConversionAtVeESMR) < rtb_LeSTCR_P_BattPwrDMinCal_MH);

    /* Switch: '<S672>/Switch' incorporates:
     *  DataStoreRead: '<S451>/Data Store Read'
     *  RelationalOperator: '<S465>/Greater Than or Equal 2'
     */
    rtb_Switch_pt = (VeSTCR_P_PBatLTMaxHH_DS <= rtb_TmpSignalConversionAtVeESMR);

    /* RelationalOperator: '<S465>/Greater Than or Equal 3' */
    rtb_LeSTCR_b_AStrtStpAlwBatTemp = (rtb_TmpSignalConversionAtVeBP_f >
        rtb_LeSTCR_T_BatTempMaxCal_MH);

    /* RelationalOperator: '<S465>/Greater Than or Equal 4' incorporates:
     *  Sum: '<S465>/Sum1'
     */
    rtb_LeSTCR_b_AStrtStpAlwBatSOC = (rtb_TmpSignalConversionAtVeBPCR <
        (rtb_Switch_fr + rtb_VeSTCR_Pct_SoftChkBatSOCDel));

    /* RelationalOperator: '<S465>/Greater Than or Equal 9' */
    rtb_LeSTCR_b_AStrtStpAlwBatTe_c = (rtb_Product1_2 <
        rtb_LeSTCR_T_TransTempMinCal_MH);

    /* Logic: '<S465>/Logical2' */
    rtb_LeSTCR_b_AStrtStpBattPwrTrg = (rtb_Switch_pt &&
        rtb_VeSTCR_b_MildHybridEnbld);

    /* Logic: '<S465>/Logical3' incorporates:
     *  Logic: '<S465>/NOT'
     */
    rtb_LeSTCR_b_AStrtStpBoostCnvrt = (rtb_VeSTCR_b_MildHybridEnbld &&
        (!rtb_Switch_pt));

    /* Logic: '<S465>/Logical6' incorporates:
     *  RelationalOperator: '<S465>/Greater Than or Equal 8'
     */
    rtb_LeSTCR_b_AStrtStpAlwBatTe_b = (rtb_LeSTCR_b_AStrtStpAlwBatTemp ||
        (rtb_TmpSignalConversionAtVeBP_f < rtb_Switch_i));

    /* End of Outputs for SubSystem: '<S451>/HVBatt_Chks' */

    /* Outputs for Atomic SubSystem: '<S451>/ECM_TCM_Chk' */
    /* Logic: '<S458>/Logical4' incorporates:
     *  RelationalOperator: '<S458>/Greater Than or Equal 1'
     *  RelationalOperator: '<S458>/Greater Than or Equal 6'
     */
    rtb_LeSTCR_b_AStrtStpAlwECT = ((rtb_TmpSignalConversionAtVeENGR >
        rtb_TmpSignalConversionAtVeAPSR) || (rtb_TmpSignalConversionAtVeENGR <
        rtb_TmpSignalConversionAtVeAATR));

    /* Logic: '<S458>/Logical3' incorporates:
     *  RelationalOperator: '<S458>/Greater Than or Equal 5'
     *  RelationalOperator: '<S458>/Greater Than or Equal 7'
     */
    rtb_LeSTCR_b_AStrtStpAlwTransTe = ((rtb_TmpSignalConversionAtVeTFTR >
        rtb_LeSTCR_T_TransTempMaxCal_MH) || (rtb_TmpSignalConversionAtVeTFTR <
        rtb_TmpSignalConversionAtVeABCR));

    /* Logic: '<S458>/Logical2' incorporates:
     *  Constant: '<S612>/Calib'
     */
    rtb_LeSTCR_b_AStrtAlwTransManMd = (rtb_LeSTCR_b_AStrtStpAlwMtrATem &&
        (KeSTCR_b_EnblManMdSoftChk));

    /* End of Outputs for SubSystem: '<S451>/ECM_TCM_Chk' */

    /* Outputs for Atomic SubSystem: '<S451>/MGUTempChk' */
    /* RelationalOperator: '<S474>/Comparison1' incorporates:
     *  Inport: '<S474>/MtrA_CoolantTemp'
     */
    rtb_LeSTCR_b_AStrtStpAlwMtrA_Co = (tmpRead_5 >
        rtb_LeSTCR_T_MtrA_CoolantTempMa);

    /* RelationalOperator: '<S474>/Comparison2' incorporates:
     *  Inport: '<S474>/MtrATemp'
     */
    rtb_LeSTCR_b_AStrtStpAlwMtrATem = (tmpRead_1 >
        rtb_LeSTCR_T_MtrATempMaxCal_MH);

    /* RelationalOperator: '<S474>/Comparison3' incorporates:
     *  Inport: '<S474>/MtrB_Temp'
     */
    rtb_VeSTCR_b_AStrtTmrEngOnDsrd = (tmpRead_2 >
        rtb_LeSTCR_T_MtrBTempmMaxCal_MH);

    /* RelationalOperator: '<S474>/Comparison4' */
    rtb_VeSTCR_b_TmrFrstEngOnDsrdFn = (rtb_Switch1_ay >
        rtb_VeSTCR_T_SoftChkInvrtrATemp);

    /* RelationalOperator: '<S474>/Comparison5' */
    rtb_AND_l50 = (rtb_Switch_k4 > rtb_VeSTCR_T_SoftChkInvrtrBTemp);

    /* End of Outputs for SubSystem: '<S451>/MGUTempChk' */

    /* Outputs for Atomic SubSystem: '<S451>/ThermalSystem_Chks' */
    /* Logic: '<S480>/Logical12' incorporates:
     *  Constant: '<S940>/Calib'
     */
    rtb_LeSTCR_b_AStrtStpAlwThrml = (rtb_LeSTCR_b_AStrtStpAlwThrml &&
        (KeSTCR_b_EnblThrmlEngOnReq));

    /* Outputs for Atomic SubSystem: '<S480>/StressFactorChk' */
    /* Logic: '<S941>/Logical21' incorporates:
     *  Constant: '<S943>/Calib'
     *  Constant: '<S944>/Calib'
     *  Logic: '<S941>/Logical5'
     *  RelationalOperator: '<S941>/Greater Than or Equal 12'
     */
    rtb_Switch1_bd = (((KeSTCR_b_EnblStressFactorChk) && (rtb_Product2_2 >=
                        KeSTCR_r_StressFactorChkMax)) && (!rtb_OR1_oc));

    /* Outputs for Atomic SubSystem: '<S941>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S947>/EdgeRising' */
    /* Logic: '<S948>/AND' incorporates:
     *  Logic: '<S948>/OR1'
     *  UnitDelay: '<S948>/Unit Delay'
     */
    rtb_Switch_ci = (rtb_Switch1_bd && (!STCR_ac_DW.UnitDelay_DSTATE_ar));

    /* Update for UnitDelay: '<S948>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ar = rtb_Switch1_bd;

    /* End of Outputs for SubSystem: '<S947>/EdgeRising' */

    /* Switch: '<S947>/Switch1' incorporates:
     *  Constant: '<S942>/Calib'
     *  Constant: '<S947>/Constant Value'
     *  Logic: '<S947>/OR'
     *  Logic: '<S947>/OR1'
     *  MinMax: '<S947>/Minimum'
     *  Sum: '<S947>/Summation'
     *  UnitDelay: '<S947>/Unit Delay'
     */
    if ((!rtb_Switch1_bd) || rtb_Switch_ci)
    {
        /* Switch: '<S947>/Switch1' incorporates:
         *  Constant: '<S947>/Constant Value1'
         */
        rtb_Switch1_df = 0U;
    }
    else if (KeSTCR_Cnt_DbncStressFactorChk < ((uint16)(((uint32)
                STCR_ac_DW.UnitDelay_DSTATE_nt) + 1U)))
    {
        /* MinMax: '<S947>/Minimum' incorporates:
         *  Constant: '<S942>/Calib'
         *  Switch: '<S947>/Switch1'
         */
        rtb_Switch1_df = KeSTCR_Cnt_DbncStressFactorChk;
    }
    else
    {
        /* Switch: '<S947>/Switch1' incorporates:
         *  Constant: '<S947>/Constant Value'
         *  MinMax: '<S947>/Minimum'
         *  Sum: '<S947>/Summation'
         *  UnitDelay: '<S947>/Unit Delay'
         */
        rtb_Switch1_df = (uint16)(((uint32)STCR_ac_DW.UnitDelay_DSTATE_nt) + 1U);
    }

    /* End of Switch: '<S947>/Switch1' */

    /* Update for UnitDelay: '<S947>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_nt = rtb_Switch1_df;

    /* Outputs for Atomic SubSystem: '<S941>/Signal Latch On With Reset' */
    /* Logic: '<S946>/OR1' incorporates:
     *  Constant: '<S942>/Calib'
     *  Constant: '<S945>/Calib'
     *  Logic: '<S946>/NOT'
     *  Logic: '<S946>/OR'
     *  Logic: '<S947>/AND'
     *  RelationalOperator: '<S941>/Greater Than or Equal 1'
     *  RelationalOperator: '<S947>/Greater  Than'
     *  UnitDelay: '<S946>/Unit Delay'
     */
    rtb_OR1_oc = ((rtb_Switch1_bd && (rtb_Switch1_df >=
                    KeSTCR_Cnt_DbncStressFactorChk)) ||
                  ((rtb_LeSTCC_v_VehSpdAbs_tmp < KeSTCR_v_StressFactorRstVehSpd)
                   && (STCR_ac_DW.UnitDelay_DSTATE_ln)));

    /* End of Outputs for SubSystem: '<S941>/Turn On Delay Sample' */

    /* Update for UnitDelay: '<S946>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ln = rtb_OR1_oc;

    /* End of Outputs for SubSystem: '<S941>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S480>/StressFactorChk' */

    /* Outputs for Atomic SubSystem: '<S480>/Hysteresis' */
    /* Switch: '<S937>/Switch1' incorporates:
     *  Constant: '<S938>/Calib'
     *  RelationalOperator: '<S937>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeUBTR > KeSTCR_T_AStopBeltTempMin)
    {
        /* Switch: '<S937>/Switch1' incorporates:
         *  Constant: '<S937>/Constant Value'
         */
        rtb_Switch1_bd = true;
    }
    else
    {
        /* Switch: '<S937>/Switch1' incorporates:
         *  Constant: '<S939>/Calib'
         *  RelationalOperator: '<S937>/Greater  Than1'
         *  Sum: '<S480>/Sum2'
         *  UnitDelay: '<S937>/Unit Delay'
         */
        rtb_Switch1_bd = ((rtb_TmpSignalConversionAtVeUBTR >=
                           (KeSTCR_T_AStrtBeltTempHyst +
                            KeSTCR_T_AStopBeltTempMin)) &&
                          (STCR_ac_DW.UnitDelay_DSTATE_af));
    }

    /* End of Switch: '<S937>/Switch1' */
    /* End of Outputs for SubSystem: '<S480>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S451>/ThermalSystem_Chks' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ComboSoftChk' */

    /* Inport: '<Root>/VeRTMR_b_InPlantMode' */
    (void)Rte_Read_VeRTMR_b_InPlantMode_Value(&rtb_AND2_p);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ComboSoftChk' */
    /* Outputs for Atomic SubSystem: '<S451>/ThermalSystem_Chks' */
    /* Outputs for Atomic SubSystem: '<S480>/Hysteresis' */
    /* Update for UnitDelay: '<S937>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_af = rtb_Switch1_bd;

    /* End of Outputs for SubSystem: '<S480>/Hysteresis' */

    /* Logic: '<S480>/Logical2' */
    rtb_LeSTCR_b_BeltTempChk = !rtb_Switch1_bd;

    /* End of Outputs for SubSystem: '<S451>/ThermalSystem_Chks' */

    /* RelationalOperator: '<S451>/Comparison6' incorporates:
     *  Constant: '<S462>/Constant'
     */
    rtb_VeSTCR_b_MildHybridEnbld = (((uint32)rtb_TmpSignalConversionAtVeST_f) ==
        CeSTRR_e_EngOffSt);

    /* Logic: '<S451>/AND2' */
    rtb_AND2_p = !rtb_AND2_p;

    /* Outputs for Atomic SubSystem: '<S451>/BitSetter' */
    /* Switch: '<S454>/Switch5' incorporates:
     *  Logic: '<S451>/Logical1'
     */
    if (rtb_LeSTCR_b_AStrtStpBattPwrTrg && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry9'
         *  S-Function (sfix_bitop): '<S541>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 = VeSTCR_g_AStpInhbtRsn1_DS | 2U;
    }
    else
    {
        /* Switch: '<S454>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry9'
         *  S-Function (sfix_bitop): '<S525>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S525>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S525>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~VeSTCR_g_AStpInhbtRsn1_DS) | 2U);
    }

    /* End of Switch: '<S454>/Switch5' */

    /* Switch: '<S454>/Switch4' incorporates:
     *  Logic: '<S451>/Logical3'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwBatSOC && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S530>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 8U;
    }
    else
    {
        /* Switch: '<S454>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S514>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S514>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S514>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 8U);
    }

    /* End of Switch: '<S454>/Switch4' */

    /* Switch: '<S454>/Switch1' incorporates:
     *  Logic: '<S451>/Logical4'
     */
    if (rtb_LeSTCR_b_AStrtVehSOC && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S536>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 128U;
    }
    else
    {
        /* Switch: '<S454>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 128U);
    }

    /* End of Switch: '<S454>/Switch1' */

    /* Switch: '<S454>/Switch11' incorporates:
     *  Logic: '<S451>/Logical5'
     */
    if (rtb_TmpSignalConversionAtV2L_En && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S532>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 512U;
    }
    else
    {
        /* Switch: '<S454>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S516>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S516>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S516>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 512U);
    }

    /* End of Switch: '<S454>/Switch11' */

    /* Switch: '<S454>/Switch15' incorporates:
     *  Logic: '<S451>/Logical6'
     */
    if (rtb_VeSTCR_b_TmrFrstEngOnDsrdFn && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S545>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 8192U;
    }
    else
    {
        /* Switch: '<S454>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S529>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S529>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S529>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 8192U);
    }

    /* End of Switch: '<S454>/Switch15' */

    /* Switch: '<S454>/Switch26' incorporates:
     *  Logic: '<S451>/Logical9'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwMtrATem && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch26' incorporates:
         *  S-Function (sfix_bitop): '<S544>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 16384U;
    }
    else
    {
        /* Switch: '<S454>/Switch26' incorporates:
         *  S-Function (sfix_bitop): '<S528>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S528>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S528>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 16384U);
    }

    /* End of Switch: '<S454>/Switch26' */

    /* Switch: '<S454>/Switch7' incorporates:
     *  Logic: '<S451>/Logical10'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwECT && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S543>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 32768U;
    }
    else
    {
        /* Switch: '<S454>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S527>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S527>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S527>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 32768U);
    }

    /* End of Switch: '<S454>/Switch7' */

    /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
    /* Switch: '<S454>/Switch8' incorporates:
     *  Inport: '<S481>/GradeEngOnDsrd'
     *  Logic: '<S451>/Logical11'
     */
    if (rtb_TmpSignalConversionAtVeHPMR && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S537>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 131072U;
    }
    else
    {
        /* Switch: '<S454>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 131072U);
    }

    /* End of Switch: '<S454>/Switch8' */
    /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */

    /* Switch: '<S454>/Switch9' incorporates:
     *  Logic: '<S451>/Logical12'
     */
    if (rtb_VeSTCR_b_AStrtStpAlwVldtyCh && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S533>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 262144U;
    }
    else
    {
        /* Switch: '<S454>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S517>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S517>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S517>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 262144U);
    }

    /* End of Switch: '<S454>/Switch9' */

    /* Switch: '<S454>/Switch2' incorporates:
     *  Logic: '<S451>/Logical13'
     */
    if (rtb_LeSTCR_b_AStrtVehSpd && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S538>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 524288U;
    }
    else
    {
        /* Switch: '<S454>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S522>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S522>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S522>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 524288U);
    }

    /* End of Switch: '<S454>/Switch2' */

    /* Switch: '<S454>/Switch3' incorporates:
     *  Logic: '<S451>/Logical14'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwMtrA_Co && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S539>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 2097152U;
    }
    else
    {
        /* Switch: '<S454>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S523>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S523>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S523>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 2097152U);
    }

    /* End of Switch: '<S454>/Switch3' */

    /* Switch: '<S454>/Switch6' incorporates:
     *  Logic: '<S451>/Logical15'
     */
    if (rtb_LeSTCR_b_AStrtTowHaul && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S540>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 4194304U;
    }
    else
    {
        /* Switch: '<S454>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S524>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S524>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S524>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 4194304U);
    }

    /* End of Switch: '<S454>/Switch6' */

    /* Switch: '<S454>/Switch14' incorporates:
     *  Logic: '<S451>/Logical16'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwBatTe_b && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S542>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 8388608U;
    }
    else
    {
        /* Switch: '<S454>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S526>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S526>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S526>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 8388608U);
    }

    /* End of Switch: '<S454>/Switch14' */

    /* Switch: '<S454>/Switch12' incorporates:
     *  Logic: '<S451>/Logical30'
     */
    if (rtb_LeSTCR_b_AStrtStpBoostCnvrt && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S534>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 134217728U;
    }
    else
    {
        /* Switch: '<S454>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S518>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S518>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S518>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 134217728U);
    }

    /* End of Switch: '<S454>/Switch12' */

    /* Switch: '<S454>/Switch10' incorporates:
     *  Logic: '<S451>/Logical17'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwThrml && rtb_AND2_p)
    {
        /* Switch: '<S454>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S531>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 268435456U;
    }
    else
    {
        /* Switch: '<S454>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 268435456U);
    }

    /* End of Switch: '<S454>/Switch10' */

    /* Switch: '<S454>/Switch13' incorporates:
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  Logic: '<S451>/Logical18'
     *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S535>/FixPt Bitwise Operator1'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwTransTe && rtb_AND2_p)
    {
        VeSTCR_g_AStpInhbtRsn1_DS = rtb_Switch5_c1 | 1073741824U;
    }
    else
    {
        VeSTCR_g_AStpInhbtRsn1_DS = ~((~rtb_Switch5_c1) | 1073741824U);
    }

    /* End of Switch: '<S454>/Switch13' */
    /* End of Outputs for SubSystem: '<S451>/BitSetter' */

    /* Outputs for Atomic SubSystem: '<S451>/BitSetter01' */
    /* Switch: '<S455>/Switch5' incorporates:
     *  Logic: '<S451>/Logical19'
     */
    if (rtb_OR1_oc && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry1'
         *  S-Function (sfix_bitop): '<S566>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 = VeSTCR_g_AStpInhbtRsn2_DS | 512U;
    }
    else
    {
        /* Switch: '<S455>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry1'
         *  S-Function (sfix_bitop): '<S554>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S554>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S554>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~VeSTCR_g_AStpInhbtRsn2_DS) | 512U);
    }

    /* End of Switch: '<S455>/Switch5' */

    /* Switch: '<S455>/Switch4' incorporates:
     *  Logic: '<S451>/Logical20'
     */
    if (rtb_VariantMerge_For_Variant_So && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S558>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 16384U;
    }
    else
    {
        /* Switch: '<S455>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S546>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S546>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S546>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 16384U);
    }

    /* End of Switch: '<S455>/Switch4' */

    /* Switch: '<S455>/Switch1' incorporates:
     *  Logic: '<S451>/Logical21'
     */
    if (rtb_VeSTCR_b_AStrtTmrEngOnDsrd && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S562>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 524288U;
    }
    else
    {
        /* Switch: '<S455>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S550>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S550>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S550>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 524288U);
    }

    /* End of Switch: '<S455>/Switch1' */

    /* Switch: '<S455>/Switch11' incorporates:
     *  Logic: '<S451>/Logical22'
     */
    if (rtb_AND_l50 && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S560>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 1048576U;
    }
    else
    {
        /* Switch: '<S455>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S548>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S548>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S548>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 1048576U);
    }

    /* End of Switch: '<S455>/Switch11' */

    /* Switch: '<S455>/Switch3' incorporates:
     *  Logic: '<S451>/Logical24'
     */
    if (rtb_VeSTCR_b_StrtRqAWDOff && rtb_AND2_p)
    {
        /* S-Function (sfix_bitop): '<S451>/Bitwise Logical Operator' incorporates:
         *  S-Function (sfix_bitop): '<S564>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 2097152U;
    }
    else
    {
        /* S-Function (sfix_bitop): '<S451>/Bitwise Logical Operator' incorporates:
         *  S-Function (sfix_bitop): '<S552>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S552>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S552>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 2097152U);
    }

    /* End of Switch: '<S455>/Switch3' */

    /* Switch: '<S455>/Switch14' incorporates:
     *  Logic: '<S451>/Logical25'
     */
    if (rtb_LeSTCR_b_AStrtAlwTransManMd && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S553>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S553>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S553>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S567>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 = (~((~rtb_Switch5_c1) | 4194304U)) | 8388608U;
    }
    else
    {
        /* Switch: '<S455>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S553>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S553>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S553>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S555>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S555>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S555>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~(~((~rtb_Switch5_c1) | 4194304U))) | 8388608U);
    }

    /* End of Switch: '<S455>/Switch14' */

    /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
    /* Outputs for Atomic SubSystem: '<S481>/DCLoad' */
    /* Switch: '<S455>/Switch10' incorporates:
     *  Inport: '<S949>/DCOvrld_EngOn'
     *  Logic: '<S451>/Logical27'
     */
    if (rtb_TmpSignalConversionAtDCOvrl && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S559>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 33554432U;
    }
    else
    {
        /* Switch: '<S455>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S547>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S547>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S547>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 33554432U);
    }

    /* End of Switch: '<S455>/Switch10' */
    /* End of Outputs for SubSystem: '<S481>/DCLoad' */
    /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */

    /* Switch: '<S455>/Switch12' incorporates:
     *  Logic: '<S451>/Logical29'
     */
    if (rtb_Gain_d && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S561>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 67108864U;
    }
    else
    {
        /* Switch: '<S455>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S549>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S549>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S549>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 67108864U);
    }

    /* End of Switch: '<S455>/Switch12' */

    /* Switch: '<S455>/Switch2' incorporates:
     *  Logic: '<S451>/Logical31'
     */
    if (rtb_LeSTCR_b_AStrtPrimNo && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S563>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 268435456U;
    }
    else
    {
        /* Switch: '<S455>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S551>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S551>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S551>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 268435456U);
    }

    /* End of Switch: '<S455>/Switch2' */

    /* Switch: '<S455>/Switch7' incorporates:
     *  Logic: '<S451>/Logical32'
     */
    if (rtb_LeSTCR_b_BeltTempChk && rtb_AND2_p)
    {
        /* Switch: '<S455>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S568>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 536870912U;
    }
    else
    {
        /* Switch: '<S455>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S556>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S556>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S556>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 536870912U);
    }

    /* End of Switch: '<S455>/Switch7' */

    /* Switch: '<S455>/Switch8' incorporates:
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
     *  Logic: '<S451>/Logical33'
     *  S-Function (sfix_bitop): '<S557>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S557>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S557>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S569>/FixPt Bitwise Operator1'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwBatTe_c && rtb_AND2_p)
    {
        VeSTCR_g_AStpInhbtRsn2_DS = rtb_Switch5_c1 | 2147483648U;
    }
    else
    {
        VeSTCR_g_AStpInhbtRsn2_DS = ~((~rtb_Switch5_c1) | 2147483648U);
    }

    /* End of Switch: '<S455>/Switch8' */
    /* End of Outputs for SubSystem: '<S451>/BitSetter01' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ComboSoftChk' */

    /* Inport: '<Root>/VeRGNR_M_RgnBrkOutTrq' */
    (void)Rte_Read_VeRGNR_M_RgnBrkOutTrq_Value(&rtb_Switch1_af);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ComboSoftChk' */
    /* Logic: '<S451>/Logical2' incorporates:
     *  Constant: '<S459>/Constant'
     *  Constant: '<S464>/Constant'
     *  RelationalOperator: '<S451>/Comparison5'
     *  RelationalOperator: '<S451>/Comparison8'
     */
    rtb_Logical2_fy = ((CeSTRR_e_EngRunningSt == ((uint32)
                         rtb_TmpSignalConversionAtVeST_f)) || (((uint32)
                         rtb_TmpSignalConversionAtVeST_f) ==
                        CeSTRR_e_EngStartingSt));

    /* Outputs for Atomic SubSystem: '<S451>/SoftChkDbnc' */
    /* RelationalOperator: '<S748>/Compare' incorporates:
     *  Constant: '<S654>/Constant2'
     *  Constant: '<S748>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator1'
     */
    rtb_Switch1_bd = ((VeSTCR_g_AStpInhbtRsn1_DS & 2U) > 0U);

    /* RelationalOperator: '<S751>/Compare' incorporates:
     *  Constant: '<S654>/Constant16'
     *  Constant: '<S751>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator15'
     */
    rtb_Compare_hy = ((VeSTCR_g_AStpInhbtRsn1_DS & 32768U) > 0U);

    /* RelationalOperator: '<S752>/Compare' incorporates:
     *  Constant: '<S654>/Constant15'
     *  Constant: '<S752>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator14'
     */
    rtb_Compare_n5 = ((VeSTCR_g_AStpInhbtRsn1_DS & 16384U) > 0U);

    /* RelationalOperator: '<S753>/Compare' incorporates:
     *  Constant: '<S654>/Constant14'
     *  Constant: '<S753>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator13'
     */
    rtb_Switch1_gx = ((VeSTCR_g_AStpInhbtRsn1_DS & 8192U) > 0U);

    /* RelationalOperator: '<S756>/Compare' incorporates:
     *  Constant: '<S654>/Constant25'
     *  Constant: '<S756>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator17'
     */
    rtb_Compare_dp = ((VeSTCR_g_AStpInhbtRsn1_DS & 131072U) > 0U);

    /* RelationalOperator: '<S758>/Compare' incorporates:
     *  Constant: '<S654>/Constant20'
     *  Constant: '<S758>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator19'
     */
    rtb_Comparison2 = ((VeSTCR_g_AStpInhbtRsn1_DS & 134217728U) > 0U);

    /* RelationalOperator: '<S761>/Compare' incorporates:
     *  Constant: '<S654>/Constant23'
     *  Constant: '<S761>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator22'
     */
    rtb_Compare_n4 = ((VeSTCR_g_AStpInhbtRsn1_DS & 1073741824U) > 0U);

    /* RelationalOperator: '<S763>/Compare' incorporates:
     *  Constant: '<S654>/Constant21'
     *  Constant: '<S763>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator20'
     */
    rtb_Compare_d = ((VeSTCR_g_AStpInhbtRsn1_DS & 268435456U) > 0U);

    /* RelationalOperator: '<S764>/Compare' incorporates:
     *  Constant: '<S654>/Constant26'
     *  Constant: '<S764>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator24'
     */
    rtb_Compare_of = ((VeSTCR_g_AStpInhbtRsn1_DS & 262144U) > 0U);

    /* RelationalOperator: '<S765>/Compare' incorporates:
     *  Constant: '<S654>/Constant27'
     *  Constant: '<S765>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator25'
     */
    rtb_Compare_n = ((VeSTCR_g_AStpInhbtRsn1_DS & 524288U) > 0U);

    /* RelationalOperator: '<S766>/Compare' incorporates:
     *  Constant: '<S654>/Constant31'
     *  Constant: '<S766>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator29'
     */
    rtb_Compare_ay = ((VeSTCR_g_AStpInhbtRsn1_DS & 8388608U) > 0U);

    /* RelationalOperator: '<S767>/Compare' incorporates:
     *  Constant: '<S654>/Constant30'
     *  Constant: '<S767>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator28'
     */
    rtb_Compare_m = ((VeSTCR_g_AStpInhbtRsn1_DS & 4194304U) > 0U);

    /* RelationalOperator: '<S768>/Compare' incorporates:
     *  Constant: '<S654>/Constant29'
     *  Constant: '<S768>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator27'
     */
    rtb_Compare_c = ((VeSTCR_g_AStpInhbtRsn1_DS & 2097152U) > 0U);

    /* RelationalOperator: '<S770>/Compare' incorporates:
     *  Constant: '<S654>/Constant4'
     *  Constant: '<S770>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator3'
     */
    rtb_Switch_ci = ((VeSTCR_g_AStpInhbtRsn1_DS & 8U) > 0U);

    /* RelationalOperator: '<S773>/Compare' incorporates:
     *  Constant: '<S654>/Constant8'
     *  Constant: '<S773>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
     *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator7'
     */
    rtb_Switch_ff = ((VeSTCR_g_AStpInhbtRsn1_DS & 128U) > 0U);

    /* RelationalOperator: '<S794>/Compare' incorporates:
     *  Constant: '<S655>/Constant22'
     *  Constant: '<S794>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
     *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator21'
     */
    rtb_Switch_pt = ((VeSTCR_g_AStpInhbtRsn2_DS & 536870912U) > 0U);

    /* RelationalOperator: '<S795>/Compare' incorporates:
     *  Constant: '<S655>/Constant21'
     *  Constant: '<S795>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
     *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator20'
     */
    rtb_Compare_fc = ((VeSTCR_g_AStpInhbtRsn2_DS & 268435456U) > 0U);

    /* RelationalOperator: '<S797>/Compare' incorporates:
     *  Constant: '<S655>/Constant27'
     *  Constant: '<S797>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
     *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator25'
     */
    rtb_Compare_np = ((VeSTCR_g_AStpInhbtRsn2_DS & 524288U) > 0U);

    /* RelationalOperator: '<S799>/Compare' incorporates:
     *  Constant: '<S655>/Constant30'
     *  Constant: '<S799>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
     *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator28'
     */
    rtb_Compare_f = ((VeSTCR_g_AStpInhbtRsn2_DS & 4194304U) > 0U);

    /* RelationalOperator: '<S801>/Compare' incorporates:
     *  Constant: '<S655>/Constant28'
     *  Constant: '<S801>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
     *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator26'
     */
    rtb_Compare_ek = ((VeSTCR_g_AStpInhbtRsn2_DS & 1048576U) > 0U);

    /* RelationalOperator: '<S810>/Compare' incorporates:
     *  Constant: '<S655>/Constant10'
     *  Constant: '<S810>/Constant'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
     *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator9'
     */
    rtb_Compare_jh = ((VeSTCR_g_AStpInhbtRsn2_DS & 512U) > 0U);

    /* Sum: '<S479>/Sum5' incorporates:
     *  Abs: '<S479>/Abs'
     */
    VeSTCC_M_OutTorqReq = rtb_TmpSignalConversionAtVeATRR + fabsf(rtb_Switch1_af);

    /* Abs: '<S451>/Abs2' incorporates:
     *  Lookup_n-D: '<S659>/Vector'
     *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
     *  Sum: '<S479>/Sum5'
     */
    rtb_TmpSignalConversionAtVeENGR = look2_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeCSVR, VeSTCC_M_OutTorqReq, ((const float32 *)
          &(KxSTCR_t_SoftChkEngOnHiTm[0])), ((const float32 *)
          &(KySTCR_t_SoftChkEngOnHiTm[0])), ((const float32 *)
          &(KtSTCR_t_SoftChkEngOnHiTm[0])), STCR_ac_ConstP.pooled33, 5U);

    /* Abs: '<S451>/Abs' incorporates:
     *  Lookup_n-D: '<S660>/Vector'
     *  SignalConversion generated from: '<S3>/VeCSVR_v_VehSpdSigned'
     *  Sum: '<S479>/Sum5'
     */
    rtb_TmpSignalConversionAtVeABCR = look2_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeCSVR, VeSTCC_M_OutTorqReq, ((const float32 *)
          &(KxSTCR_t_SoftChkEngOnLowTm[0])), ((const float32 *)
          &(KySTCR_t_SoftChkEngOnLowTm[0])), ((const float32 *)
          &(KtSTCR_t_SoftChkEngOnLowTm[0])), STCR_ac_ConstP.pooled33, 5U);

    /* Product: '<S479>/Product0_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[0] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S661>/Logical' */
    rtb_Logical_n3 = (rtb_Switch1_bd && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S661>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S814>/EdgeRising' */
    /* Logic: '<S816>/AND' incorporates:
     *  Logic: '<S816>/OR1'
     *  UnitDelay: '<S816>/Unit Delay'
     */
    rtb_AND_po = (rtb_Logical_n3 && (!STCR_ac_DW.UnitDelay_DSTATE_mn));

    /* Update for UnitDelay: '<S816>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_mn = rtb_Logical_n3;

    /* End of Outputs for SubSystem: '<S814>/EdgeRising' */

    /* Switch: '<S814>/Switch1' incorporates:
     *  Logic: '<S814>/OR'
     *  Logic: '<S814>/OR1'
     */
    if ((!rtb_Logical_n3) || rtb_AND_po)
    {
        /* Switch: '<S814>/Switch1' incorporates:
         *  Constant: '<S814>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeCSVR = 0.0F;
    }
    else
    {
        /* Switch: '<S814>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S814>/Minimum'
         *  Sum: '<S814>/Summation'
         *  UnitDelay: '<S814>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCSVR = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_au);
    }

    /* End of Switch: '<S814>/Switch1' */

    /* Update for UnitDelay: '<S814>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_au = rtb_TmpSignalConversionAtVeCSVR;

    /* End of Outputs for SubSystem: '<S661>/Turn On Delay Time' */

    /* Product: '<S479>/Product0_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_TmpSignalConversionAtVeATRR = KaSTCR_k_SoftChkDbncFctrLow[0] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S661>/Logical3' incorporates:
     *  Logic: '<S662>/Logical3'
     *  Logic: '<S663>/Logical3'
     *  Logic: '<S664>/Logical3'
     *  Logic: '<S665>/Logical3'
     *  Logic: '<S666>/Logical3'
     *  Logic: '<S667>/Logical3'
     *  Logic: '<S668>/Logical3'
     *  Logic: '<S669>/Logical3'
     *  Logic: '<S670>/Logical3'
     *  Logic: '<S671>/Logical3'
     *  Logic: '<S672>/Logical3'
     *  Logic: '<S673>/Logical3'
     *  Logic: '<S674>/Logical3'
     *  Logic: '<S675>/Logical3'
     *  Logic: '<S676>/Logical3'
     *  Logic: '<S677>/Logical3'
     *  Logic: '<S678>/Logical3'
     *  Logic: '<S679>/Logical3'
     *  Logic: '<S680>/Logical3'
     *  Logic: '<S681>/Logical3'
     */
    rtb_AND_nhk = !rtb_Logical2_fy;

    /* Logic: '<S661>/Logical2' incorporates:
     *  Logic: '<S661>/Logical3'
     */
    rtb_Logical2_lo = (rtb_AND_nhk || rtb_Switch1_bd);

    /* Outputs for Atomic SubSystem: '<S661>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S813>/EdgeFalling1' */
    /* Logic: '<S815>/AND' incorporates:
     *  Logic: '<S815>/OR1'
     *  UnitDelay: '<S815>/Unit Delay'
     */
    rtb_AND_po = ((!rtb_Logical2_lo) && (STCR_ac_DW.UnitDelay_DSTATE_iq));

    /* Update for UnitDelay: '<S815>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_iq = rtb_Logical2_lo;

    /* End of Outputs for SubSystem: '<S813>/EdgeFalling1' */

    /* Switch: '<S813>/Switch' incorporates:
     *  Logic: '<S813>/OR4'
     */
    if (rtb_Logical2_lo || rtb_AND_po)
    {
        /* Switch: '<S813>/Switch' incorporates:
         *  Constant: '<S813>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeUBTR = 0.0F;
    }
    else
    {
        /* Switch: '<S813>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S813>/Minimum'
         *  Sum: '<S813>/Summation'
         *  UnitDelay: '<S813>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeUBTR = fminf(rtb_TmpSignalConversionAtVeATRR,
            HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_my);
    }

    /* End of Switch: '<S813>/Switch' */

    /* Update for UnitDelay: '<S813>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_my = rtb_TmpSignalConversionAtVeUBTR;

    /* End of Outputs for SubSystem: '<S661>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S661>/EdgeFalling1' */
    /* Logic: '<S811>/OR1' incorporates:
     *  Logic: '<S661>/Logical4'
     */
    rtb_Logical2_pd = !rtb_Switch1_bd;

    /* Logic: '<S811>/AND' incorporates:
     *  Logic: '<S811>/OR1'
     *  UnitDelay: '<S811>/Unit Delay'
     */
    rtb_AND_po = (rtb_Logical2_pd && (STCR_ac_DW.UnitDelay_DSTATE_bs));

    /* Update for UnitDelay: '<S811>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_bs = rtb_Switch1_bd;

    /* End of Outputs for SubSystem: '<S661>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S661>/Signal Latch On With Reset' */
    /* Logic: '<S812>/OR1' incorporates:
     *  Logic: '<S661>/Logical1'
     *  Logic: '<S661>/Logical4'
     *  Logic: '<S661>/Logical5'
     *  Logic: '<S812>/NOT'
     *  Logic: '<S812>/OR'
     *  UnitDelay: '<S812>/Unit Delay'
     */
    rtb_AND_po = ((rtb_Logical2_fy && rtb_AND_po) || ((rtb_Logical2_fy &&
                    rtb_Logical2_pd) && (STCR_ac_DW.UnitDelay_DSTATE_h5)));

    /* Update for UnitDelay: '<S812>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_h5 = rtb_AND_po;

    /* End of Outputs for SubSystem: '<S661>/Signal Latch On With Reset' */

    /* Switch: '<S661>/Switch' incorporates:
     *  Switch: '<S661>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S661>/Turn On Delay Time' */
        /* Switch: '<S661>/Switch' incorporates:
         *  Logic: '<S814>/AND'
         *  RelationalOperator: '<S814>/Greater  Than'
         */
        rtb_Switch1_bd = (rtb_Logical_n3 && (rtb_TmpSignalConversionAtVeCSVR >=
                           rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S661>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_AND_po)
        {
            /* Outputs for Atomic SubSystem: '<S661>/Turn Off Delay Time' */
            /* Switch: '<S661>/Switch2' incorporates:
             *  Logic: '<S813>/AND'
             *  Logic: '<S813>/OR2'
             *  Logic: '<S813>/OR3'
             *  RelationalOperator: '<S813>/Greater  Than'
             *  Switch: '<S661>/Switch'
             */
            rtb_Switch1_bd = (rtb_Logical2_lo ||
                              (rtb_TmpSignalConversionAtVeUBTR <
                               rtb_TmpSignalConversionAtVeATRR));

            /* End of Outputs for SubSystem: '<S661>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S661>/Switch' */

    /* Product: '<S479>/Product1_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[1] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S662>/Logical' */
    rtb_Logical2_lo = (rtb_Switch_ci && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S662>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S820>/EdgeRising' */
    /* Logic: '<S822>/AND' incorporates:
     *  Logic: '<S822>/OR1'
     *  UnitDelay: '<S822>/Unit Delay'
     */
    rtb_Logical_n3 = (rtb_Logical2_lo && (!STCR_ac_DW.UnitDelay_DSTATE_h0));

    /* Update for UnitDelay: '<S822>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_h0 = rtb_Logical2_lo;

    /* End of Outputs for SubSystem: '<S820>/EdgeRising' */

    /* Switch: '<S820>/Switch1' incorporates:
     *  Logic: '<S820>/OR'
     *  Logic: '<S820>/OR1'
     */
    if ((!rtb_Logical2_lo) || rtb_Logical_n3)
    {
        /* Switch: '<S820>/Switch1' incorporates:
         *  Constant: '<S820>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeESMR = 0.0F;
    }
    else
    {
        /* Switch: '<S820>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S820>/Minimum'
         *  Sum: '<S820>/Summation'
         *  UnitDelay: '<S820>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeESMR = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_o4);
    }

    /* End of Switch: '<S820>/Switch1' */

    /* Update for UnitDelay: '<S820>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_o4 = rtb_TmpSignalConversionAtVeESMR;

    /* End of Outputs for SubSystem: '<S662>/Turn On Delay Time' */

    /* Product: '<S479>/Product1_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product1_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[1];

    /* Logic: '<S662>/Logical2' */
    rtb_Logical2_pd = (rtb_AND_nhk || rtb_Switch_ci);

    /* Outputs for Atomic SubSystem: '<S662>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S819>/EdgeFalling1' */
    /* Logic: '<S821>/AND' incorporates:
     *  Logic: '<S821>/OR1'
     *  UnitDelay: '<S821>/Unit Delay'
     */
    rtb_Logical_n3 = ((!rtb_Logical2_pd) && (STCR_ac_DW.UnitDelay_DSTATE_da));

    /* Update for UnitDelay: '<S821>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_da = rtb_Logical2_pd;

    /* End of Outputs for SubSystem: '<S819>/EdgeFalling1' */

    /* Switch: '<S819>/Switch' incorporates:
     *  Logic: '<S819>/OR4'
     */
    if (rtb_Logical2_pd || rtb_Logical_n3)
    {
        /* Switch: '<S819>/Switch' incorporates:
         *  Constant: '<S819>/Constant Value1'
         */
        rtb_Switch_k4 = 0.0F;
    }
    else
    {
        /* Switch: '<S819>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S819>/Minimum'
         *  Sum: '<S819>/Summation'
         *  UnitDelay: '<S819>/Unit Delay'
         */
        rtb_Switch_k4 = fminf(rtb_Product1_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_f5);
    }

    /* End of Switch: '<S819>/Switch' */

    /* Update for UnitDelay: '<S819>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_f5 = rtb_Switch_k4;

    /* End of Outputs for SubSystem: '<S662>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S662>/EdgeFalling1' */
    /* Logic: '<S817>/OR1' incorporates:
     *  Logic: '<S662>/Logical4'
     */
    rtb_Logical2_i = !rtb_Switch_ci;

    /* Logic: '<S817>/AND' incorporates:
     *  Logic: '<S817>/OR1'
     *  UnitDelay: '<S817>/Unit Delay'
     */
    rtb_Logical_n3 = (rtb_Logical2_i && (STCR_ac_DW.UnitDelay_DSTATE_a5));

    /* Update for UnitDelay: '<S817>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_a5 = rtb_Switch_ci;

    /* End of Outputs for SubSystem: '<S662>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S662>/Signal Latch On With Reset' */
    /* Logic: '<S818>/OR1' incorporates:
     *  Logic: '<S662>/Logical1'
     *  Logic: '<S662>/Logical4'
     *  Logic: '<S662>/Logical5'
     *  Logic: '<S818>/NOT'
     *  Logic: '<S818>/OR'
     *  UnitDelay: '<S818>/Unit Delay'
     */
    rtb_Logical_n3 = ((rtb_Logical2_fy && rtb_Logical_n3) || ((rtb_Logical2_fy &&
                        rtb_Logical2_i) && (STCR_ac_DW.UnitDelay_DSTATE_bky)));

    /* Update for UnitDelay: '<S818>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_bky = rtb_Logical_n3;

    /* End of Outputs for SubSystem: '<S662>/Signal Latch On With Reset' */

    /* Switch: '<S662>/Switch' incorporates:
     *  Switch: '<S662>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S662>/Turn On Delay Time' */
        /* Switch: '<S662>/Switch' incorporates:
         *  Logic: '<S820>/AND'
         *  RelationalOperator: '<S820>/Greater  Than'
         */
        rtb_Switch_ci = (rtb_Logical2_lo && (rtb_TmpSignalConversionAtVeESMR >=
                          rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S662>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical_n3)
        {
            /* Outputs for Atomic SubSystem: '<S662>/Turn Off Delay Time' */
            /* Switch: '<S662>/Switch2' incorporates:
             *  Logic: '<S819>/AND'
             *  Logic: '<S819>/OR2'
             *  Logic: '<S819>/OR3'
             *  RelationalOperator: '<S819>/Greater  Than'
             *  Switch: '<S662>/Switch'
             */
            rtb_Switch_ci = (rtb_Logical2_pd || (rtb_Switch_k4 < rtb_Product1_2));

            /* End of Outputs for SubSystem: '<S662>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S662>/Switch' */

    /* Product: '<S479>/Product2_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[2] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S673>/Logical' */
    rtb_Logical2_pd = (rtb_Switch_ff && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S673>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S886>/EdgeRising' */
    /* Logic: '<S888>/AND' incorporates:
     *  Logic: '<S888>/OR1'
     *  UnitDelay: '<S888>/Unit Delay'
     */
    rtb_Logical2_lo = (rtb_Logical2_pd && (!STCR_ac_DW.UnitDelay_DSTATE_ca));

    /* Update for UnitDelay: '<S888>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ca = rtb_Logical2_pd;

    /* End of Outputs for SubSystem: '<S886>/EdgeRising' */

    /* Switch: '<S886>/Switch1' incorporates:
     *  Logic: '<S886>/OR'
     *  Logic: '<S886>/OR1'
     */
    if ((!rtb_Logical2_pd) || rtb_Logical2_lo)
    {
        /* Switch: '<S886>/Switch1' incorporates:
         *  Constant: '<S886>/Constant Value1'
         */
        rtb_Switch1_ay = 0.0F;
    }
    else
    {
        /* Switch: '<S886>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S886>/Minimum'
         *  Sum: '<S886>/Summation'
         *  UnitDelay: '<S886>/Unit Delay'
         */
        rtb_Switch1_ay = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT +
                               STCR_ac_DW.UnitDelay_DSTATE_hc);
    }

    /* End of Switch: '<S886>/Switch1' */

    /* Update for UnitDelay: '<S886>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_hc = rtb_Switch1_ay;

    /* End of Outputs for SubSystem: '<S673>/Turn On Delay Time' */

    /* Product: '<S479>/Product2_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product2_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[2];

    /* Logic: '<S673>/Logical2' */
    rtb_Logical2_i = (rtb_AND_nhk || rtb_Switch_ff);

    /* Outputs for Atomic SubSystem: '<S673>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S885>/EdgeFalling1' */
    /* Logic: '<S887>/AND' incorporates:
     *  Logic: '<S887>/OR1'
     *  UnitDelay: '<S887>/Unit Delay'
     */
    rtb_Logical2_lo = ((!rtb_Logical2_i) && (STCR_ac_DW.UnitDelay_DSTATE_a2));

    /* Update for UnitDelay: '<S887>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_a2 = rtb_Logical2_i;

    /* End of Outputs for SubSystem: '<S885>/EdgeFalling1' */

    /* Switch: '<S885>/Switch' incorporates:
     *  Logic: '<S885>/OR4'
     */
    if (rtb_Logical2_i || rtb_Logical2_lo)
    {
        /* Switch: '<S885>/Switch' incorporates:
         *  Constant: '<S885>/Constant Value1'
         */
        rtb_Switch_fr = 0.0F;
    }
    else
    {
        /* Switch: '<S885>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S885>/Minimum'
         *  Sum: '<S885>/Summation'
         *  UnitDelay: '<S885>/Unit Delay'
         */
        rtb_Switch_fr = fminf(rtb_Product2_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_co);
    }

    /* End of Switch: '<S885>/Switch' */

    /* Update for UnitDelay: '<S885>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_co = rtb_Switch_fr;

    /* End of Outputs for SubSystem: '<S673>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S673>/EdgeFalling1' */
    /* Logic: '<S883>/OR1' incorporates:
     *  Logic: '<S673>/Logical4'
     */
    rtb_Logical2_c = !rtb_Switch_ff;

    /* Logic: '<S883>/AND' incorporates:
     *  Logic: '<S883>/OR1'
     *  UnitDelay: '<S883>/Unit Delay'
     */
    rtb_Logical2_lo = (rtb_Logical2_c && (STCR_ac_DW.UnitDelay_DSTATE_nf));

    /* Update for UnitDelay: '<S883>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_nf = rtb_Switch_ff;

    /* End of Outputs for SubSystem: '<S673>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S673>/Signal Latch On With Reset' */
    /* Logic: '<S884>/OR1' incorporates:
     *  Logic: '<S673>/Logical1'
     *  Logic: '<S673>/Logical4'
     *  Logic: '<S673>/Logical5'
     *  Logic: '<S884>/NOT'
     *  Logic: '<S884>/OR'
     *  UnitDelay: '<S884>/Unit Delay'
     */
    rtb_Logical2_lo = ((rtb_Logical2_fy && rtb_Logical2_lo) || ((rtb_Logical2_fy
                         && rtb_Logical2_c) && (STCR_ac_DW.UnitDelay_DSTATE_ly)));

    /* Update for UnitDelay: '<S884>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ly = rtb_Logical2_lo;

    /* End of Outputs for SubSystem: '<S673>/Signal Latch On With Reset' */

    /* Switch: '<S673>/Switch' incorporates:
     *  Switch: '<S673>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S673>/Turn On Delay Time' */
        /* Switch: '<S673>/Switch' incorporates:
         *  Logic: '<S886>/AND'
         *  RelationalOperator: '<S886>/Greater  Than'
         */
        rtb_Switch_ff = (rtb_Logical2_pd && (rtb_Switch1_ay >= rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S673>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_lo)
        {
            /* Outputs for Atomic SubSystem: '<S673>/Turn Off Delay Time' */
            /* Switch: '<S673>/Switch2' incorporates:
             *  Logic: '<S885>/AND'
             *  Logic: '<S885>/OR2'
             *  Logic: '<S885>/OR3'
             *  RelationalOperator: '<S885>/Greater  Than'
             *  Switch: '<S673>/Switch'
             */
            rtb_Switch_ff = (rtb_Logical2_i || (rtb_Switch_fr < rtb_Product2_2));

            /* End of Outputs for SubSystem: '<S673>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S673>/Switch' */

    /* Product: '<S479>/Product3_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[3] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S675>/Logical' */
    rtb_Logical2_i = (rtb_Switch1_gx && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S675>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S898>/EdgeRising' */
    /* Logic: '<S900>/AND' incorporates:
     *  Logic: '<S900>/OR1'
     *  UnitDelay: '<S900>/Unit Delay'
     */
    rtb_Logical2_pd = (rtb_Logical2_i && (!STCR_ac_DW.UnitDelay_DSTATE_ld));

    /* Update for UnitDelay: '<S900>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ld = rtb_Logical2_i;

    /* End of Outputs for SubSystem: '<S898>/EdgeRising' */

    /* Switch: '<S898>/Switch1' incorporates:
     *  Logic: '<S898>/OR'
     *  Logic: '<S898>/OR1'
     */
    if ((!rtb_Logical2_i) || rtb_Logical2_pd)
    {
        /* Switch: '<S898>/Switch1' incorporates:
         *  Constant: '<S898>/Constant Value1'
         */
        rtb_Switch1_af = 0.0F;
    }
    else
    {
        /* Switch: '<S898>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S898>/Minimum'
         *  Sum: '<S898>/Summation'
         *  UnitDelay: '<S898>/Unit Delay'
         */
        rtb_Switch1_af = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT +
                               STCR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S898>/Switch1' */

    /* Update for UnitDelay: '<S898>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_af;

    /* End of Outputs for SubSystem: '<S675>/Turn On Delay Time' */

    /* Product: '<S479>/Product3_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_TmpSignalConversionAtVeVSDR = KaSTCR_k_SoftChkDbncFctrLow[3] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S675>/Logical2' */
    rtb_Logical2_c = (rtb_AND_nhk || rtb_Switch1_gx);

    /* Outputs for Atomic SubSystem: '<S675>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S897>/EdgeFalling1' */
    /* Logic: '<S899>/AND' incorporates:
     *  Logic: '<S899>/OR1'
     *  UnitDelay: '<S899>/Unit Delay'
     */
    rtb_Logical2_pd = ((!rtb_Logical2_c) && (STCR_ac_DW.UnitDelay_DSTATE_myx));

    /* Update for UnitDelay: '<S899>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_myx = rtb_Logical2_c;

    /* End of Outputs for SubSystem: '<S897>/EdgeFalling1' */

    /* Switch: '<S897>/Switch' incorporates:
     *  Logic: '<S897>/OR4'
     */
    if (rtb_Logical2_c || rtb_Logical2_pd)
    {
        /* Switch: '<S897>/Switch' incorporates:
         *  Constant: '<S897>/Constant Value1'
         */
        rtb_Switch_jx = 0.0F;
    }
    else
    {
        /* Switch: '<S897>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S897>/Minimum'
         *  Sum: '<S897>/Summation'
         *  UnitDelay: '<S897>/Unit Delay'
         */
        rtb_Switch_jx = fminf(rtb_TmpSignalConversionAtVeVSDR,
                              HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_e);
    }

    /* End of Switch: '<S897>/Switch' */

    /* Update for UnitDelay: '<S897>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch_jx;

    /* End of Outputs for SubSystem: '<S675>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S675>/EdgeFalling1' */
    /* Logic: '<S895>/OR1' incorporates:
     *  Logic: '<S675>/Logical4'
     */
    rtb_Logical2_k = !rtb_Switch1_gx;

    /* Logic: '<S895>/AND' incorporates:
     *  Logic: '<S895>/OR1'
     *  UnitDelay: '<S895>/Unit Delay'
     */
    rtb_Logical2_pd = (rtb_Logical2_k && (STCR_ac_DW.UnitDelay_DSTATE_fd));

    /* Update for UnitDelay: '<S895>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fd = rtb_Switch1_gx;

    /* End of Outputs for SubSystem: '<S675>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S675>/Signal Latch On With Reset' */
    /* Logic: '<S896>/OR1' incorporates:
     *  Logic: '<S675>/Logical1'
     *  Logic: '<S675>/Logical4'
     *  Logic: '<S675>/Logical5'
     *  Logic: '<S896>/NOT'
     *  Logic: '<S896>/OR'
     *  UnitDelay: '<S896>/Unit Delay'
     */
    rtb_Logical2_pd = ((rtb_Logical2_fy && rtb_Logical2_pd) || ((rtb_Logical2_fy
                         && rtb_Logical2_k) && (STCR_ac_DW.UnitDelay_DSTATE_pg)));

    /* Update for UnitDelay: '<S896>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pg = rtb_Logical2_pd;

    /* End of Outputs for SubSystem: '<S675>/Signal Latch On With Reset' */

    /* Switch: '<S675>/Switch' incorporates:
     *  Switch: '<S675>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S675>/Turn On Delay Time' */
        /* Logic: '<S451>/OR7' incorporates:
         *  Logic: '<S898>/AND'
         *  RelationalOperator: '<S898>/Greater  Than'
         */
        rtb_Switch1_gx = (rtb_Logical2_i && (rtb_Switch1_af >= rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S675>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_pd)
        {
            /* Outputs for Atomic SubSystem: '<S675>/Turn Off Delay Time' */
            /* Switch: '<S675>/Switch2' incorporates:
             *  Logic: '<S451>/OR7'
             *  Logic: '<S897>/AND'
             *  Logic: '<S897>/OR2'
             *  Logic: '<S897>/OR3'
             *  RelationalOperator: '<S897>/Greater  Than'
             */
            rtb_Switch1_gx = (rtb_Logical2_c || (rtb_Switch_jx <
                               rtb_TmpSignalConversionAtVeVSDR));

            /* End of Outputs for SubSystem: '<S675>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S675>/Switch' */

    /* Product: '<S479>/Product4_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[4] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S676>/Logical' */
    rtb_Logical2_c = (rtb_Compare_n5 && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S676>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S904>/EdgeRising' */
    /* Logic: '<S906>/AND' incorporates:
     *  Logic: '<S906>/OR1'
     *  UnitDelay: '<S906>/Unit Delay'
     */
    rtb_Logical2_i = (rtb_Logical2_c && (!STCR_ac_DW.UnitDelay_DSTATE_go));

    /* Update for UnitDelay: '<S906>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_go = rtb_Logical2_c;

    /* End of Outputs for SubSystem: '<S904>/EdgeRising' */

    /* Switch: '<S904>/Switch1' incorporates:
     *  Logic: '<S904>/OR'
     *  Logic: '<S904>/OR1'
     */
    if ((!rtb_Logical2_c) || rtb_Logical2_i)
    {
        /* Switch: '<S904>/Switch1' incorporates:
         *  Constant: '<S904>/Constant Value1'
         */
        rtb_LeSTCR_P_BattPwrDMinCal_MH = 0.0F;
    }
    else
    {
        /* Switch: '<S904>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S904>/Minimum'
         *  Sum: '<S904>/Summation'
         *  UnitDelay: '<S904>/Unit Delay'
         */
        rtb_LeSTCR_P_BattPwrDMinCal_MH = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_og);
    }

    /* End of Switch: '<S904>/Switch1' */

    /* Update for UnitDelay: '<S904>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_og = rtb_LeSTCR_P_BattPwrDMinCal_MH;

    /* End of Outputs for SubSystem: '<S676>/Turn On Delay Time' */

    /* Product: '<S479>/Product4_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_LeSTCR_T_BatTempMaxCal_MH = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[4];

    /* Logic: '<S676>/Logical2' */
    rtb_Logical2_k = (rtb_AND_nhk || rtb_Compare_n5);

    /* Outputs for Atomic SubSystem: '<S676>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S903>/EdgeFalling1' */
    /* Logic: '<S905>/AND' incorporates:
     *  Logic: '<S905>/OR1'
     *  UnitDelay: '<S905>/Unit Delay'
     */
    rtb_Logical2_i = ((!rtb_Logical2_k) && (STCR_ac_DW.UnitDelay_DSTATE_pd));

    /* Update for UnitDelay: '<S905>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pd = rtb_Logical2_k;

    /* End of Outputs for SubSystem: '<S903>/EdgeFalling1' */

    /* Switch: '<S903>/Switch' incorporates:
     *  Logic: '<S903>/OR4'
     */
    if (rtb_Logical2_k || rtb_Logical2_i)
    {
        /* Switch: '<S903>/Switch' incorporates:
         *  Constant: '<S903>/Constant Value1'
         */
        rtb_VeSTCR_Pct_SoftChkBatSOCDel = 0.0F;
    }
    else
    {
        /* Switch: '<S903>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S903>/Minimum'
         *  Sum: '<S903>/Summation'
         *  UnitDelay: '<S903>/Unit Delay'
         */
        rtb_VeSTCR_Pct_SoftChkBatSOCDel = fminf(rtb_LeSTCR_T_BatTempMaxCal_MH,
            HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_ib);
    }

    /* End of Switch: '<S903>/Switch' */

    /* Update for UnitDelay: '<S903>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ib = rtb_VeSTCR_Pct_SoftChkBatSOCDel;

    /* End of Outputs for SubSystem: '<S676>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S676>/EdgeFalling1' */
    /* Logic: '<S901>/OR1' incorporates:
     *  Logic: '<S676>/Logical4'
     */
    rtb_Logical2_oj = !rtb_Compare_n5;

    /* Logic: '<S901>/AND' incorporates:
     *  Logic: '<S901>/OR1'
     *  UnitDelay: '<S901>/Unit Delay'
     */
    rtb_Logical2_i = (rtb_Logical2_oj && (STCR_ac_DW.UnitDelay_DSTATE_ml));

    /* Update for UnitDelay: '<S901>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ml = rtb_Compare_n5;

    /* End of Outputs for SubSystem: '<S676>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S676>/Signal Latch On With Reset' */
    /* Logic: '<S902>/OR1' incorporates:
     *  Logic: '<S676>/Logical1'
     *  Logic: '<S676>/Logical4'
     *  Logic: '<S676>/Logical5'
     *  Logic: '<S902>/NOT'
     *  Logic: '<S902>/OR'
     *  UnitDelay: '<S902>/Unit Delay'
     */
    rtb_Logical2_i = ((rtb_Logical2_fy && rtb_Logical2_i) || ((rtb_Logical2_fy &&
                        rtb_Logical2_oj) && (STCR_ac_DW.UnitDelay_DSTATE_jg2)));

    /* Update for UnitDelay: '<S902>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jg2 = rtb_Logical2_i;

    /* End of Outputs for SubSystem: '<S676>/Signal Latch On With Reset' */

    /* Switch: '<S676>/Switch' incorporates:
     *  Switch: '<S676>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S676>/Turn On Delay Time' */
        /* Switch: '<S676>/Switch' incorporates:
         *  Logic: '<S904>/AND'
         *  RelationalOperator: '<S904>/Greater  Than'
         */
        rtb_Compare_n5 = (rtb_Logical2_c && (rtb_LeSTCR_P_BattPwrDMinCal_MH >=
                           rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S676>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_i)
        {
            /* Outputs for Atomic SubSystem: '<S676>/Turn Off Delay Time' */
            /* Switch: '<S676>/Switch2' incorporates:
             *  Logic: '<S903>/AND'
             *  Logic: '<S903>/OR2'
             *  Logic: '<S903>/OR3'
             *  RelationalOperator: '<S903>/Greater  Than'
             *  Switch: '<S676>/Switch'
             */
            rtb_Compare_n5 = (rtb_Logical2_k || (rtb_VeSTCR_Pct_SoftChkBatSOCDel
                               < rtb_LeSTCR_T_BatTempMaxCal_MH));

            /* End of Outputs for SubSystem: '<S676>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S676>/Switch' */

    /* Product: '<S479>/Product5_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[5] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S677>/Logical' */
    rtb_Logical2_k = (rtb_Compare_hy && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S677>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S910>/EdgeRising' */
    /* Logic: '<S912>/AND' incorporates:
     *  Logic: '<S912>/OR1'
     *  UnitDelay: '<S912>/Unit Delay'
     */
    rtb_Logical2_c = (rtb_Logical2_k && (!STCR_ac_DW.UnitDelay_DSTATE_br));

    /* Update for UnitDelay: '<S912>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_br = rtb_Logical2_k;

    /* End of Outputs for SubSystem: '<S910>/EdgeRising' */

    /* Switch: '<S910>/Switch1' incorporates:
     *  Logic: '<S910>/OR'
     *  Logic: '<S910>/OR1'
     */
    if ((!rtb_Logical2_k) || rtb_Logical2_c)
    {
        /* Switch: '<S910>/Switch1' incorporates:
         *  Constant: '<S910>/Constant Value1'
         */
        rtb_LeSTCR_T_MtrATempMaxCal_MH = 0.0F;
    }
    else
    {
        /* Switch: '<S910>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S910>/Minimum'
         *  Sum: '<S910>/Summation'
         *  UnitDelay: '<S910>/Unit Delay'
         */
        rtb_LeSTCR_T_MtrATempMaxCal_MH = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_cn);
    }

    /* End of Switch: '<S910>/Switch1' */

    /* Update for UnitDelay: '<S910>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_cn = rtb_LeSTCR_T_MtrATempMaxCal_MH;

    /* End of Outputs for SubSystem: '<S677>/Turn On Delay Time' */

    /* Product: '<S479>/Product5_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_LeSTCR_T_MtrBTempmMaxCal_MH = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[5];

    /* Logic: '<S677>/Logical2' */
    rtb_Logical2_oj = (rtb_AND_nhk || rtb_Compare_hy);

    /* Outputs for Atomic SubSystem: '<S677>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S909>/EdgeFalling1' */
    /* Logic: '<S911>/AND' incorporates:
     *  Logic: '<S911>/OR1'
     *  UnitDelay: '<S911>/Unit Delay'
     */
    rtb_Logical2_c = ((!rtb_Logical2_oj) && (STCR_ac_DW.UnitDelay_DSTATE_md));

    /* Update for UnitDelay: '<S911>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_md = rtb_Logical2_oj;

    /* End of Outputs for SubSystem: '<S909>/EdgeFalling1' */

    /* Switch: '<S909>/Switch' incorporates:
     *  Logic: '<S909>/OR4'
     */
    if (rtb_Logical2_oj || rtb_Logical2_c)
    {
        /* Switch: '<S909>/Switch' incorporates:
         *  Constant: '<S909>/Constant Value1'
         */
        rtb_LeSTCR_T_TransTempMaxCal_MH = 0.0F;
    }
    else
    {
        /* Switch: '<S909>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S909>/Minimum'
         *  Sum: '<S909>/Summation'
         *  UnitDelay: '<S909>/Unit Delay'
         */
        rtb_LeSTCR_T_TransTempMaxCal_MH = fminf(rtb_LeSTCR_T_MtrBTempmMaxCal_MH,
            HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_h);
    }

    /* End of Switch: '<S909>/Switch' */

    /* Update for UnitDelay: '<S909>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_h = rtb_LeSTCR_T_TransTempMaxCal_MH;

    /* End of Outputs for SubSystem: '<S677>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S677>/EdgeFalling1' */
    /* Logic: '<S907>/OR1' incorporates:
     *  Logic: '<S677>/Logical4'
     */
    rtb_Logical2_bf = !rtb_Compare_hy;

    /* Logic: '<S907>/AND' incorporates:
     *  Logic: '<S907>/OR1'
     *  UnitDelay: '<S907>/Unit Delay'
     */
    rtb_Logical2_c = (rtb_Logical2_bf && (STCR_ac_DW.UnitDelay_DSTATE_ih));

    /* Update for UnitDelay: '<S907>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ih = rtb_Compare_hy;

    /* End of Outputs for SubSystem: '<S677>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S677>/Signal Latch On With Reset' */
    /* Logic: '<S908>/OR1' incorporates:
     *  Logic: '<S677>/Logical1'
     *  Logic: '<S677>/Logical4'
     *  Logic: '<S677>/Logical5'
     *  Logic: '<S908>/NOT'
     *  Logic: '<S908>/OR'
     *  UnitDelay: '<S908>/Unit Delay'
     */
    rtb_Logical2_c = ((rtb_Logical2_fy && rtb_Logical2_c) || ((rtb_Logical2_fy &&
                        rtb_Logical2_bf) && (STCR_ac_DW.UnitDelay_DSTATE_myi)));

    /* Update for UnitDelay: '<S908>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_myi = rtb_Logical2_c;

    /* End of Outputs for SubSystem: '<S677>/Signal Latch On With Reset' */

    /* Switch: '<S677>/Switch' incorporates:
     *  Switch: '<S677>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S677>/Turn On Delay Time' */
        /* Switch: '<S677>/Switch' incorporates:
         *  Logic: '<S910>/AND'
         *  RelationalOperator: '<S910>/Greater  Than'
         */
        rtb_Compare_hy = (rtb_Logical2_k && (rtb_LeSTCR_T_MtrATempMaxCal_MH >=
                           rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S677>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_c)
        {
            /* Outputs for Atomic SubSystem: '<S677>/Turn Off Delay Time' */
            /* Switch: '<S677>/Switch2' incorporates:
             *  Logic: '<S909>/AND'
             *  Logic: '<S909>/OR2'
             *  Logic: '<S909>/OR3'
             *  RelationalOperator: '<S909>/Greater  Than'
             *  Switch: '<S677>/Switch'
             */
            rtb_Compare_hy = (rtb_Logical2_oj ||
                              (rtb_LeSTCR_T_TransTempMaxCal_MH <
                               rtb_LeSTCR_T_MtrBTempmMaxCal_MH));

            /* End of Outputs for SubSystem: '<S677>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S677>/Switch' */

    /* Product: '<S479>/Product6_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[6] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S678>/Logical' */
    rtb_Logical2_oj = (rtb_Compare_dp && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S678>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S916>/EdgeRising' */
    /* Logic: '<S918>/AND' incorporates:
     *  Logic: '<S918>/OR1'
     *  UnitDelay: '<S918>/Unit Delay'
     */
    rtb_Logical2_k = (rtb_Logical2_oj && (!STCR_ac_DW.UnitDelay_DSTATE_av));

    /* Update for UnitDelay: '<S918>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_av = rtb_Logical2_oj;

    /* End of Outputs for SubSystem: '<S916>/EdgeRising' */

    /* Switch: '<S916>/Switch1' incorporates:
     *  Logic: '<S916>/OR'
     *  Logic: '<S916>/OR1'
     */
    if ((!rtb_Logical2_oj) || rtb_Logical2_k)
    {
        /* Switch: '<S916>/Switch1' incorporates:
         *  Constant: '<S916>/Constant Value1'
         */
        rtb_LeSTCR_T_TransTempMinCal_MH = 0.0F;
    }
    else
    {
        /* Switch: '<S916>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S916>/Minimum'
         *  Sum: '<S916>/Summation'
         *  UnitDelay: '<S916>/Unit Delay'
         */
        rtb_LeSTCR_T_TransTempMinCal_MH = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_jm);
    }

    /* End of Switch: '<S916>/Switch1' */

    /* Update for UnitDelay: '<S916>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jm = rtb_LeSTCR_T_TransTempMinCal_MH;

    /* End of Outputs for SubSystem: '<S678>/Turn On Delay Time' */

    /* Product: '<S479>/Product6_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_LeSTCR_T_MtrA_CoolantTempMa = KaSTCR_k_SoftChkDbncFctrLow[6] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S678>/Logical2' */
    rtb_Logical2_bf = (rtb_AND_nhk || rtb_Compare_dp);

    /* Outputs for Atomic SubSystem: '<S678>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S915>/EdgeFalling1' */
    /* Logic: '<S917>/AND' incorporates:
     *  Logic: '<S917>/OR1'
     *  UnitDelay: '<S917>/Unit Delay'
     */
    rtb_Logical2_k = ((!rtb_Logical2_bf) && (STCR_ac_DW.UnitDelay_DSTATE_mm));

    /* Update for UnitDelay: '<S917>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_mm = rtb_Logical2_bf;

    /* End of Outputs for SubSystem: '<S915>/EdgeFalling1' */

    /* Switch: '<S915>/Switch' incorporates:
     *  Logic: '<S915>/OR4'
     */
    if (rtb_Logical2_bf || rtb_Logical2_k)
    {
        /* Switch: '<S915>/Switch' incorporates:
         *  Constant: '<S915>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeAATR = 0.0F;
    }
    else
    {
        /* Switch: '<S915>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S915>/Minimum'
         *  Sum: '<S915>/Summation'
         *  UnitDelay: '<S915>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAATR = fminf(rtb_LeSTCR_T_MtrA_CoolantTempMa,
            HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_ga);
    }

    /* End of Switch: '<S915>/Switch' */

    /* Update for UnitDelay: '<S915>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ga = rtb_TmpSignalConversionAtVeAATR;

    /* End of Outputs for SubSystem: '<S678>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S678>/EdgeFalling1' */
    /* Logic: '<S913>/OR1' incorporates:
     *  Logic: '<S678>/Logical4'
     */
    rtb_Logical2_i2 = !rtb_Compare_dp;

    /* Logic: '<S913>/AND' incorporates:
     *  Logic: '<S913>/OR1'
     *  UnitDelay: '<S913>/Unit Delay'
     */
    rtb_Logical2_k = (rtb_Logical2_i2 && (STCR_ac_DW.UnitDelay_DSTATE_eo));

    /* Update for UnitDelay: '<S913>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_eo = rtb_Compare_dp;

    /* End of Outputs for SubSystem: '<S678>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S678>/Signal Latch On With Reset' */
    /* Logic: '<S914>/OR1' incorporates:
     *  Logic: '<S678>/Logical1'
     *  Logic: '<S678>/Logical4'
     *  Logic: '<S678>/Logical5'
     *  Logic: '<S914>/NOT'
     *  Logic: '<S914>/OR'
     *  UnitDelay: '<S914>/Unit Delay'
     */
    rtb_Logical2_k = ((rtb_Logical2_fy && rtb_Logical2_k) || ((rtb_Logical2_fy &&
                        rtb_Logical2_i2) && (STCR_ac_DW.UnitDelay_DSTATE_kc)));

    /* Update for UnitDelay: '<S914>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_kc = rtb_Logical2_k;

    /* End of Outputs for SubSystem: '<S678>/Signal Latch On With Reset' */

    /* Switch: '<S678>/Switch' incorporates:
     *  Switch: '<S678>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S678>/Turn On Delay Time' */
        /* Switch: '<S678>/Switch' incorporates:
         *  Logic: '<S916>/AND'
         *  RelationalOperator: '<S916>/Greater  Than'
         */
        rtb_Compare_dp = (rtb_Logical2_oj && (rtb_LeSTCR_T_TransTempMinCal_MH >=
                           rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S678>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_k)
        {
            /* Outputs for Atomic SubSystem: '<S678>/Turn Off Delay Time' */
            /* Switch: '<S678>/Switch2' incorporates:
             *  Logic: '<S915>/AND'
             *  Logic: '<S915>/OR2'
             *  Logic: '<S915>/OR3'
             *  RelationalOperator: '<S915>/Greater  Than'
             *  Switch: '<S678>/Switch'
             */
            rtb_Compare_dp = (rtb_Logical2_bf ||
                              (rtb_TmpSignalConversionAtVeAATR <
                               rtb_LeSTCR_T_MtrA_CoolantTempMa));

            /* End of Outputs for SubSystem: '<S678>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S678>/Switch' */

    /* Product: '<S479>/Product7_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[7] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S679>/Logical' */
    rtb_Logical2_bf = (rtb_Compare_of && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S679>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S922>/EdgeRising' */
    /* Logic: '<S924>/AND' incorporates:
     *  Logic: '<S924>/OR1'
     *  UnitDelay: '<S924>/Unit Delay'
     */
    rtb_Logical2_oj = (rtb_Logical2_bf && (!STCR_ac_DW.UnitDelay_DSTATE_po));

    /* Update for UnitDelay: '<S924>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_po = rtb_Logical2_bf;

    /* End of Outputs for SubSystem: '<S922>/EdgeRising' */

    /* Switch: '<S922>/Switch1' incorporates:
     *  Logic: '<S922>/OR'
     *  Logic: '<S922>/OR1'
     */
    if ((!rtb_Logical2_bf) || rtb_Logical2_oj)
    {
        /* Switch: '<S922>/Switch1' incorporates:
         *  Constant: '<S922>/Constant Value1'
         */
        rtb_VeSTCR_Pct_SoftChkVehSOCLim = 0.0F;
    }
    else
    {
        /* Switch: '<S922>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S922>/Minimum'
         *  Sum: '<S922>/Summation'
         *  UnitDelay: '<S922>/Unit Delay'
         */
        rtb_VeSTCR_Pct_SoftChkVehSOCLim = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_ik);
    }

    /* End of Switch: '<S922>/Switch1' */

    /* Update for UnitDelay: '<S922>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ik = rtb_VeSTCR_Pct_SoftChkVehSOCLim;

    /* End of Outputs for SubSystem: '<S679>/Turn On Delay Time' */

    /* Product: '<S479>/Product7_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_VeSTCR_T_SoftChkTransTmpMin = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[7];

    /* Logic: '<S679>/Logical2' */
    rtb_Logical2_i2 = (rtb_AND_nhk || rtb_Compare_of);

    /* Outputs for Atomic SubSystem: '<S679>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S921>/EdgeFalling1' */
    /* Logic: '<S923>/AND' incorporates:
     *  Logic: '<S923>/OR1'
     *  UnitDelay: '<S923>/Unit Delay'
     */
    rtb_Logical2_oj = ((!rtb_Logical2_i2) && (STCR_ac_DW.UnitDelay_DSTATE_btz));

    /* Update for UnitDelay: '<S923>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_btz = rtb_Logical2_i2;

    /* End of Outputs for SubSystem: '<S921>/EdgeFalling1' */

    /* Switch: '<S921>/Switch' incorporates:
     *  Logic: '<S921>/OR4'
     */
    if (rtb_Logical2_i2 || rtb_Logical2_oj)
    {
        /* Switch: '<S921>/Switch' incorporates:
         *  Constant: '<S921>/Constant Value1'
         */
        rtb_VeSTCR_v_SoftChkVehSpdMaxCa = 0.0F;
    }
    else
    {
        /* Switch: '<S921>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S921>/Minimum'
         *  Sum: '<S921>/Summation'
         *  UnitDelay: '<S921>/Unit Delay'
         */
        rtb_VeSTCR_v_SoftChkVehSpdMaxCa = fminf(rtb_VeSTCR_T_SoftChkTransTmpMin,
            HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_ft);
    }

    /* End of Switch: '<S921>/Switch' */

    /* Update for UnitDelay: '<S921>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ft = rtb_VeSTCR_v_SoftChkVehSpdMaxCa;

    /* End of Outputs for SubSystem: '<S679>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S679>/EdgeFalling1' */
    /* Logic: '<S919>/OR1' incorporates:
     *  Logic: '<S679>/Logical4'
     */
    rtb_Logical2_p = !rtb_Compare_of;

    /* Logic: '<S919>/AND' incorporates:
     *  Logic: '<S919>/OR1'
     *  UnitDelay: '<S919>/Unit Delay'
     */
    rtb_Logical2_oj = (rtb_Logical2_p && (STCR_ac_DW.UnitDelay_DSTATE_bk));

    /* Update for UnitDelay: '<S919>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_bk = rtb_Compare_of;

    /* End of Outputs for SubSystem: '<S679>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S679>/Signal Latch On With Reset' */
    /* Logic: '<S920>/OR1' incorporates:
     *  Logic: '<S679>/Logical1'
     *  Logic: '<S679>/Logical4'
     *  Logic: '<S679>/Logical5'
     *  Logic: '<S920>/NOT'
     *  Logic: '<S920>/OR'
     *  UnitDelay: '<S920>/Unit Delay'
     */
    rtb_Logical2_oj = ((rtb_Logical2_fy && rtb_Logical2_oj) || ((rtb_Logical2_fy
                         && rtb_Logical2_p) && (STCR_ac_DW.UnitDelay_DSTATE_jx)));

    /* Update for UnitDelay: '<S920>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jx = rtb_Logical2_oj;

    /* End of Outputs for SubSystem: '<S679>/Signal Latch On With Reset' */

    /* Switch: '<S679>/Switch' incorporates:
     *  Switch: '<S679>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S679>/Turn On Delay Time' */
        /* Switch: '<S679>/Switch' incorporates:
         *  Logic: '<S922>/AND'
         *  RelationalOperator: '<S922>/Greater  Than'
         */
        rtb_Compare_of = (rtb_Logical2_bf && (rtb_VeSTCR_Pct_SoftChkVehSOCLim >=
                           rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S679>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_oj)
        {
            /* Outputs for Atomic SubSystem: '<S679>/Turn Off Delay Time' */
            /* Switch: '<S679>/Switch2' incorporates:
             *  Logic: '<S921>/AND'
             *  Logic: '<S921>/OR2'
             *  Logic: '<S921>/OR3'
             *  RelationalOperator: '<S921>/Greater  Than'
             *  Switch: '<S679>/Switch'
             */
            rtb_Compare_of = (rtb_Logical2_i2 ||
                              (rtb_VeSTCR_v_SoftChkVehSpdMaxCa <
                               rtb_VeSTCR_T_SoftChkTransTmpMin));

            /* End of Outputs for SubSystem: '<S679>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S679>/Switch' */

    /* Product: '<S479>/Product8_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[8] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S680>/Logical' */
    rtb_Logical2_i2 = (rtb_Compare_n && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S680>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S928>/EdgeRising' */
    /* Logic: '<S930>/AND' incorporates:
     *  Logic: '<S930>/OR1'
     *  UnitDelay: '<S930>/Unit Delay'
     */
    rtb_Logical2_bf = (rtb_Logical2_i2 && (!STCR_ac_DW.UnitDelay_DSTATE_fa));

    /* Update for UnitDelay: '<S930>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fa = rtb_Logical2_i2;

    /* End of Outputs for SubSystem: '<S928>/EdgeRising' */

    /* Switch: '<S928>/Switch1' incorporates:
     *  Logic: '<S928>/OR'
     *  Logic: '<S928>/OR1'
     */
    if ((!rtb_Logical2_i2) || rtb_Logical2_bf)
    {
        /* Switch: '<S928>/Switch1' incorporates:
         *  Constant: '<S928>/Constant Value1'
         */
        rtb_VeSTCR_v_SoftChkVehSpdNegMa = 0.0F;
    }
    else
    {
        /* Switch: '<S928>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S928>/Minimum'
         *  Sum: '<S928>/Summation'
         *  UnitDelay: '<S928>/Unit Delay'
         */
        rtb_VeSTCR_v_SoftChkVehSpdNegMa = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_a);
    }

    /* End of Switch: '<S928>/Switch1' */

    /* Update for UnitDelay: '<S928>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_a = rtb_VeSTCR_v_SoftChkVehSpdNegMa;

    /* End of Outputs for SubSystem: '<S680>/Turn On Delay Time' */

    /* Product: '<S479>/Product8_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_TmpSignalConversionAtVeAPSR = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[8];

    /* Logic: '<S680>/Logical2' */
    rtb_Logical2_p = (rtb_AND_nhk || rtb_Compare_n);

    /* Outputs for Atomic SubSystem: '<S680>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S927>/EdgeFalling1' */
    /* Logic: '<S929>/AND' incorporates:
     *  Logic: '<S929>/OR1'
     *  UnitDelay: '<S929>/Unit Delay'
     */
    rtb_Logical2_bf = ((!rtb_Logical2_p) && (STCR_ac_DW.UnitDelay_DSTATE_fq));

    /* Update for UnitDelay: '<S929>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fq = rtb_Logical2_p;

    /* End of Outputs for SubSystem: '<S927>/EdgeFalling1' */

    /* Switch: '<S927>/Switch' incorporates:
     *  Logic: '<S927>/OR4'
     */
    if (rtb_Logical2_p || rtb_Logical2_bf)
    {
        /* Switch: '<S927>/Switch' incorporates:
         *  Constant: '<S927>/Constant Value1'
         */
        rtb_VeSTCR_T_SoftChkInvrtrATemp = 0.0F;
    }
    else
    {
        /* Switch: '<S927>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S927>/Minimum'
         *  Sum: '<S927>/Summation'
         *  UnitDelay: '<S927>/Unit Delay'
         */
        rtb_VeSTCR_T_SoftChkInvrtrATemp = fminf(rtb_TmpSignalConversionAtVeAPSR,
            HeSTCR_t_MedTEH_dT + STCR_ac_DW.UnitDelay_DSTATE_p);
    }

    /* End of Switch: '<S927>/Switch' */

    /* Update for UnitDelay: '<S927>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_p = rtb_VeSTCR_T_SoftChkInvrtrATemp;

    /* End of Outputs for SubSystem: '<S680>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S680>/EdgeFalling1' */
    /* Logic: '<S925>/OR1' incorporates:
     *  Logic: '<S680>/Logical4'
     */
    rtb_Logical2_b = !rtb_Compare_n;

    /* Logic: '<S925>/AND' incorporates:
     *  Logic: '<S925>/OR1'
     *  UnitDelay: '<S925>/Unit Delay'
     */
    rtb_Logical2_bf = (rtb_Logical2_b && (STCR_ac_DW.UnitDelay_DSTATE_do));

    /* Update for UnitDelay: '<S925>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_do = rtb_Compare_n;

    /* End of Outputs for SubSystem: '<S680>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S680>/Signal Latch On With Reset' */
    /* Logic: '<S926>/OR1' incorporates:
     *  Logic: '<S680>/Logical1'
     *  Logic: '<S680>/Logical4'
     *  Logic: '<S680>/Logical5'
     *  Logic: '<S926>/NOT'
     *  Logic: '<S926>/OR'
     *  UnitDelay: '<S926>/Unit Delay'
     */
    rtb_Logical2_bf = ((rtb_Logical2_fy && rtb_Logical2_bf) || ((rtb_Logical2_fy
                         && rtb_Logical2_b) && (STCR_ac_DW.UnitDelay_DSTATE_jg)));

    /* Update for UnitDelay: '<S926>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jg = rtb_Logical2_bf;

    /* End of Outputs for SubSystem: '<S680>/Signal Latch On With Reset' */

    /* Switch: '<S680>/Switch' incorporates:
     *  Switch: '<S680>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S680>/Turn On Delay Time' */
        /* Switch: '<S680>/Switch' incorporates:
         *  Logic: '<S928>/AND'
         *  RelationalOperator: '<S928>/Greater  Than'
         */
        rtb_Compare_n = (rtb_Logical2_i2 && (rtb_VeSTCR_v_SoftChkVehSpdNegMa >=
                          rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S680>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_bf)
        {
            /* Outputs for Atomic SubSystem: '<S680>/Turn Off Delay Time' */
            /* Switch: '<S680>/Switch2' incorporates:
             *  Logic: '<S927>/AND'
             *  Logic: '<S927>/OR2'
             *  Logic: '<S927>/OR3'
             *  RelationalOperator: '<S927>/Greater  Than'
             *  Switch: '<S680>/Switch'
             */
            rtb_Compare_n = (rtb_Logical2_p || (rtb_VeSTCR_T_SoftChkInvrtrATemp <
                              rtb_TmpSignalConversionAtVeAPSR));

            /* End of Outputs for SubSystem: '<S680>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S680>/Switch' */

    /* Product: '<S479>/Product9_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Switch_i = KaSTCR_k_SoftChkDbncFctrHi[9] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S681>/Logical' */
    rtb_Logical2_p = (rtb_Compare_c && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S681>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S934>/EdgeRising' */
    /* Logic: '<S936>/AND' incorporates:
     *  Logic: '<S936>/OR1'
     *  UnitDelay: '<S936>/Unit Delay'
     */
    rtb_Logical2_i2 = (rtb_Logical2_p && (!STCR_ac_DW.UnitDelay_DSTATE_hts));

    /* Update for UnitDelay: '<S936>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_hts = rtb_Logical2_p;

    /* End of Outputs for SubSystem: '<S934>/EdgeRising' */

    /* Switch: '<S934>/Switch1' incorporates:
     *  Logic: '<S934>/OR'
     *  Logic: '<S934>/OR1'
     */
    if ((!rtb_Logical2_p) || rtb_Logical2_i2)
    {
        /* Switch: '<S934>/Switch1' incorporates:
         *  Constant: '<S934>/Constant Value1'
         */
        rtb_VeSTCR_T_SoftChkInvrtrBTemp = 0.0F;
    }
    else
    {
        /* Switch: '<S934>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S934>/Minimum'
         *  Sum: '<S934>/Summation'
         *  UnitDelay: '<S934>/Unit Delay'
         */
        rtb_VeSTCR_T_SoftChkInvrtrBTemp = fminf(rtb_Switch_i, HeSTCR_t_MedTEH_dT
            + STCR_ac_DW.UnitDelay_DSTATE_f);
    }

    /* End of Switch: '<S934>/Switch1' */

    /* Update for UnitDelay: '<S934>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_f = rtb_VeSTCR_T_SoftChkInvrtrBTemp;

    /* End of Outputs for SubSystem: '<S681>/Turn On Delay Time' */

    /* Product: '<S479>/Product9_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Switch1_gk = KaSTCR_k_SoftChkDbncFctrLow[9] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S681>/Logical2' */
    rtb_Logical2_b = (rtb_AND_nhk || rtb_Compare_c);

    /* Outputs for Atomic SubSystem: '<S681>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S933>/EdgeFalling1' */
    /* Logic: '<S935>/AND' incorporates:
     *  Logic: '<S935>/OR1'
     *  UnitDelay: '<S935>/Unit Delay'
     */
    rtb_Logical2_i2 = ((!rtb_Logical2_b) && (STCR_ac_DW.UnitDelay_DSTATE_gy));

    /* Update for UnitDelay: '<S935>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_gy = rtb_Logical2_b;

    /* End of Outputs for SubSystem: '<S933>/EdgeFalling1' */

    /* Switch: '<S933>/Switch' incorporates:
     *  Logic: '<S933>/OR4'
     */
    if (rtb_Logical2_b || rtb_Logical2_i2)
    {
        /* Switch: '<S933>/Switch' incorporates:
         *  Constant: '<S933>/Constant Value1'
         */
        rtb_Switch1_g1 = 0.0F;
    }
    else
    {
        /* Switch: '<S933>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S933>/Minimum'
         *  Sum: '<S933>/Summation'
         *  UnitDelay: '<S933>/Unit Delay'
         */
        rtb_Switch1_g1 = fminf(rtb_Switch1_gk, HeSTCR_t_MedTEH_dT +
                               STCR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S933>/Switch' */

    /* Update for UnitDelay: '<S933>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_g1;

    /* End of Outputs for SubSystem: '<S681>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S681>/EdgeFalling1' */
    /* Logic: '<S931>/OR1' incorporates:
     *  Logic: '<S681>/Logical4'
     */
    rtb_Logical2_n = !rtb_Compare_c;

    /* Logic: '<S931>/AND' incorporates:
     *  Logic: '<S931>/OR1'
     *  UnitDelay: '<S931>/Unit Delay'
     */
    rtb_Logical2_i2 = (rtb_Logical2_n && (STCR_ac_DW.UnitDelay_DSTATE_nkq));

    /* Update for UnitDelay: '<S931>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_nkq = rtb_Compare_c;

    /* End of Outputs for SubSystem: '<S681>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S681>/Signal Latch On With Reset' */
    /* Logic: '<S932>/OR1' incorporates:
     *  Logic: '<S681>/Logical1'
     *  Logic: '<S681>/Logical4'
     *  Logic: '<S681>/Logical5'
     *  Logic: '<S932>/NOT'
     *  Logic: '<S932>/OR'
     *  UnitDelay: '<S932>/Unit Delay'
     */
    rtb_Logical2_i2 = ((rtb_Logical2_fy && rtb_Logical2_i2) || ((rtb_Logical2_fy
                         && rtb_Logical2_n) && (STCR_ac_DW.UnitDelay_DSTATE_jy)));

    /* Update for UnitDelay: '<S932>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jy = rtb_Logical2_i2;

    /* End of Outputs for SubSystem: '<S681>/Signal Latch On With Reset' */

    /* Switch: '<S681>/Switch' incorporates:
     *  Switch: '<S681>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S681>/Turn On Delay Time' */
        /* Switch: '<S681>/Switch' incorporates:
         *  Logic: '<S934>/AND'
         *  RelationalOperator: '<S934>/Greater  Than'
         */
        rtb_Compare_c = (rtb_Logical2_p && (rtb_VeSTCR_T_SoftChkInvrtrBTemp >=
                          rtb_Switch_i));

        /* End of Outputs for SubSystem: '<S681>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_i2)
        {
            /* Outputs for Atomic SubSystem: '<S681>/Turn Off Delay Time' */
            /* Switch: '<S681>/Switch2' incorporates:
             *  Logic: '<S933>/AND'
             *  Logic: '<S933>/OR2'
             *  Logic: '<S933>/OR3'
             *  RelationalOperator: '<S933>/Greater  Than'
             *  Switch: '<S681>/Switch'
             */
            rtb_Compare_c = (rtb_Logical2_b || (rtb_Switch1_g1 < rtb_Switch1_gk));

            /* End of Outputs for SubSystem: '<S681>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S681>/Switch' */

    /* Product: '<S479>/Product10_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product10_1 = KaSTCR_k_SoftChkDbncFctrHi[10] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S663>/Logical' */
    rtb_Logical2_b = (rtb_Compare_m && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S663>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S826>/EdgeRising' */
    /* Logic: '<S828>/AND' incorporates:
     *  Logic: '<S828>/OR1'
     *  UnitDelay: '<S828>/Unit Delay'
     */
    rtb_Logical2_p = (rtb_Logical2_b && (!STCR_ac_DW.UnitDelay_DSTATE_ep));

    /* Update for UnitDelay: '<S828>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ep = rtb_Logical2_b;

    /* End of Outputs for SubSystem: '<S826>/EdgeRising' */

    /* Switch: '<S826>/Switch1' incorporates:
     *  Logic: '<S826>/OR'
     *  Logic: '<S826>/OR1'
     */
    if ((!rtb_Logical2_b) || rtb_Logical2_p)
    {
        /* Switch: '<S826>/Switch1' incorporates:
         *  Constant: '<S826>/Constant Value1'
         */
        rtb_Switch_i = 0.0F;
    }
    else
    {
        /* Switch: '<S826>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S826>/Minimum'
         *  Sum: '<S826>/Summation'
         *  UnitDelay: '<S826>/Unit Delay'
         */
        rtb_Switch_i = fminf(rtb_Product10_1, HeSTCR_t_MedTEH_dT +
                             STCR_ac_DW.UnitDelay_DSTATE_je);
    }

    /* End of Switch: '<S826>/Switch1' */

    /* Update for UnitDelay: '<S826>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_je = rtb_Switch_i;

    /* End of Outputs for SubSystem: '<S663>/Turn On Delay Time' */

    /* Product: '<S479>/Product10_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product10_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[10];

    /* Logic: '<S663>/Logical2' */
    rtb_Logical2_n = (rtb_AND_nhk || rtb_Compare_m);

    /* Outputs for Atomic SubSystem: '<S663>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S825>/EdgeFalling1' */
    /* Logic: '<S827>/AND' incorporates:
     *  Logic: '<S827>/OR1'
     *  UnitDelay: '<S827>/Unit Delay'
     */
    rtb_Logical2_p = ((!rtb_Logical2_n) && (STCR_ac_DW.UnitDelay_DSTATE_d2));

    /* Update for UnitDelay: '<S827>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_d2 = rtb_Logical2_n;

    /* End of Outputs for SubSystem: '<S825>/EdgeFalling1' */

    /* Switch: '<S825>/Switch' incorporates:
     *  Logic: '<S825>/OR4'
     */
    if (rtb_Logical2_n || rtb_Logical2_p)
    {
        /* Switch: '<S825>/Switch' incorporates:
         *  Constant: '<S825>/Constant Value1'
         */
        rtb_Switch_p1 = 0.0F;
    }
    else
    {
        /* Switch: '<S825>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S825>/Minimum'
         *  Sum: '<S825>/Summation'
         *  UnitDelay: '<S825>/Unit Delay'
         */
        rtb_Switch_p1 = fminf(rtb_Product10_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_d4);
    }

    /* End of Switch: '<S825>/Switch' */

    /* Update for UnitDelay: '<S825>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_d4 = rtb_Switch_p1;

    /* End of Outputs for SubSystem: '<S663>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S663>/EdgeFalling1' */
    /* Logic: '<S823>/OR1' incorporates:
     *  Logic: '<S663>/Logical4'
     */
    rtb_Logical2_ns = !rtb_Compare_m;

    /* Logic: '<S823>/AND' incorporates:
     *  Logic: '<S823>/OR1'
     *  UnitDelay: '<S823>/Unit Delay'
     */
    rtb_Logical2_p = (rtb_Logical2_ns && (STCR_ac_DW.UnitDelay_DSTATE_dz));

    /* Update for UnitDelay: '<S823>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_dz = rtb_Compare_m;

    /* End of Outputs for SubSystem: '<S663>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S663>/Signal Latch On With Reset' */
    /* Logic: '<S824>/OR1' incorporates:
     *  Logic: '<S663>/Logical1'
     *  Logic: '<S663>/Logical4'
     *  Logic: '<S663>/Logical5'
     *  Logic: '<S824>/NOT'
     *  Logic: '<S824>/OR'
     *  UnitDelay: '<S824>/Unit Delay'
     */
    rtb_Logical2_p = ((rtb_Logical2_fy && rtb_Logical2_p) || ((rtb_Logical2_fy &&
                        rtb_Logical2_ns) && (STCR_ac_DW.UnitDelay_DSTATE_nz)));

    /* Update for UnitDelay: '<S824>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_nz = rtb_Logical2_p;

    /* End of Outputs for SubSystem: '<S663>/Signal Latch On With Reset' */

    /* Switch: '<S663>/Switch' incorporates:
     *  Switch: '<S663>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S663>/Turn On Delay Time' */
        /* Switch: '<S663>/Switch' incorporates:
         *  Logic: '<S826>/AND'
         *  RelationalOperator: '<S826>/Greater  Than'
         */
        rtb_Compare_m = (rtb_Logical2_b && (rtb_Switch_i >= rtb_Product10_1));

        /* End of Outputs for SubSystem: '<S663>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_p)
        {
            /* Outputs for Atomic SubSystem: '<S663>/Turn Off Delay Time' */
            /* Switch: '<S663>/Switch2' incorporates:
             *  Logic: '<S825>/AND'
             *  Logic: '<S825>/OR2'
             *  Logic: '<S825>/OR3'
             *  RelationalOperator: '<S825>/Greater  Than'
             *  Switch: '<S663>/Switch'
             */
            rtb_Compare_m = (rtb_Logical2_n || (rtb_Switch_p1 < rtb_Product10_2));

            /* End of Outputs for SubSystem: '<S663>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S663>/Switch' */

    /* Product: '<S479>/Product11_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product11_1 = KaSTCR_k_SoftChkDbncFctrHi[11] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S664>/Logical' */
    rtb_Logical2_n = (rtb_Compare_ay && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S664>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S832>/EdgeRising' */
    /* Logic: '<S834>/AND' incorporates:
     *  Logic: '<S834>/OR1'
     *  UnitDelay: '<S834>/Unit Delay'
     */
    rtb_Logical2_b = (rtb_Logical2_n && (!STCR_ac_DW.UnitDelay_DSTATE_p4));

    /* Update for UnitDelay: '<S834>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_p4 = rtb_Logical2_n;

    /* End of Outputs for SubSystem: '<S832>/EdgeRising' */

    /* Switch: '<S832>/Switch1' incorporates:
     *  Logic: '<S832>/OR'
     *  Logic: '<S832>/OR1'
     */
    if ((!rtb_Logical2_n) || rtb_Logical2_b)
    {
        /* Switch: '<S832>/Switch1' incorporates:
         *  Constant: '<S832>/Constant Value1'
         */
        rtb_Product10_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S832>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S832>/Minimum'
         *  Sum: '<S832>/Summation'
         *  UnitDelay: '<S832>/Unit Delay'
         */
        rtb_Product10_1 = fminf(rtb_Product11_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_ku);
    }

    /* End of Switch: '<S832>/Switch1' */

    /* Update for UnitDelay: '<S832>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ku = rtb_Product10_1;

    /* End of Outputs for SubSystem: '<S664>/Turn On Delay Time' */

    /* Product: '<S479>/Product11_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product11_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[11];

    /* Logic: '<S664>/Logical2' */
    rtb_Logical2_ns = (rtb_AND_nhk || rtb_Compare_ay);

    /* Outputs for Atomic SubSystem: '<S664>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S831>/EdgeFalling1' */
    /* Logic: '<S833>/AND' incorporates:
     *  Logic: '<S833>/OR1'
     *  UnitDelay: '<S833>/Unit Delay'
     */
    rtb_Logical2_b = ((!rtb_Logical2_ns) && (STCR_ac_DW.UnitDelay_DSTATE_k2));

    /* Update for UnitDelay: '<S833>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_k2 = rtb_Logical2_ns;

    /* End of Outputs for SubSystem: '<S831>/EdgeFalling1' */

    /* Switch: '<S831>/Switch' incorporates:
     *  Logic: '<S831>/OR4'
     */
    if (rtb_Logical2_ns || rtb_Logical2_b)
    {
        /* Switch: '<S831>/Switch' incorporates:
         *  Constant: '<S831>/Constant Value1'
         */
        rtb_Switch_pu = 0.0F;
    }
    else
    {
        /* Switch: '<S831>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S831>/Minimum'
         *  Sum: '<S831>/Summation'
         *  UnitDelay: '<S831>/Unit Delay'
         */
        rtb_Switch_pu = fminf(rtb_Product11_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_ht);
    }

    /* End of Switch: '<S831>/Switch' */

    /* Update for UnitDelay: '<S831>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ht = rtb_Switch_pu;

    /* End of Outputs for SubSystem: '<S664>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S664>/EdgeFalling1' */
    /* Logic: '<S829>/OR1' incorporates:
     *  Logic: '<S664>/Logical4'
     */
    rtb_Logical2_mqr = !rtb_Compare_ay;

    /* Logic: '<S829>/AND' incorporates:
     *  Logic: '<S829>/OR1'
     *  UnitDelay: '<S829>/Unit Delay'
     */
    rtb_Logical2_b = (rtb_Logical2_mqr && (STCR_ac_DW.UnitDelay_DSTATE_on));

    /* Update for UnitDelay: '<S829>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_on = rtb_Compare_ay;

    /* End of Outputs for SubSystem: '<S664>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S664>/Signal Latch On With Reset' */
    /* Logic: '<S830>/OR1' incorporates:
     *  Logic: '<S664>/Logical1'
     *  Logic: '<S664>/Logical4'
     *  Logic: '<S664>/Logical5'
     *  Logic: '<S830>/NOT'
     *  Logic: '<S830>/OR'
     *  UnitDelay: '<S830>/Unit Delay'
     */
    rtb_Logical2_b = ((rtb_Logical2_fy && rtb_Logical2_b) || ((rtb_Logical2_fy &&
                        rtb_Logical2_mqr) && (STCR_ac_DW.UnitDelay_DSTATE_fn)));

    /* Update for UnitDelay: '<S830>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fn = rtb_Logical2_b;

    /* End of Outputs for SubSystem: '<S664>/Signal Latch On With Reset' */

    /* Switch: '<S664>/Switch' incorporates:
     *  Switch: '<S664>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S664>/Turn On Delay Time' */
        /* Switch: '<S664>/Switch' incorporates:
         *  Logic: '<S832>/AND'
         *  RelationalOperator: '<S832>/Greater  Than'
         */
        rtb_Compare_ay = (rtb_Logical2_n && (rtb_Product10_1 >= rtb_Product11_1));

        /* End of Outputs for SubSystem: '<S664>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_b)
        {
            /* Outputs for Atomic SubSystem: '<S664>/Turn Off Delay Time' */
            /* Switch: '<S664>/Switch2' incorporates:
             *  Logic: '<S831>/AND'
             *  Logic: '<S831>/OR2'
             *  Logic: '<S831>/OR3'
             *  RelationalOperator: '<S831>/Greater  Than'
             *  Switch: '<S664>/Switch'
             */
            rtb_Compare_ay = (rtb_Logical2_ns || (rtb_Switch_pu <
                               rtb_Product11_2));

            /* End of Outputs for SubSystem: '<S664>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S664>/Switch' */

    /* Product: '<S479>/Product12_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product12_1 = KaSTCR_k_SoftChkDbncFctrHi[12] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S665>/Logical' */
    rtb_Logical2_ns = (rtb_Compare_d && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S665>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S838>/EdgeRising' */
    /* Logic: '<S840>/AND' incorporates:
     *  Logic: '<S840>/OR1'
     *  UnitDelay: '<S840>/Unit Delay'
     */
    rtb_Logical2_n = (rtb_Logical2_ns && (!STCR_ac_DW.UnitDelay_DSTATE_fx));

    /* Update for UnitDelay: '<S840>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fx = rtb_Logical2_ns;

    /* End of Outputs for SubSystem: '<S838>/EdgeRising' */

    /* Switch: '<S838>/Switch1' incorporates:
     *  Logic: '<S838>/OR'
     *  Logic: '<S838>/OR1'
     */
    if ((!rtb_Logical2_ns) || rtb_Logical2_n)
    {
        /* Switch: '<S838>/Switch1' incorporates:
         *  Constant: '<S838>/Constant Value1'
         */
        rtb_Product11_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S838>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S838>/Minimum'
         *  Sum: '<S838>/Summation'
         *  UnitDelay: '<S838>/Unit Delay'
         */
        rtb_Product11_1 = fminf(rtb_Product12_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S838>/Switch1' */

    /* Update for UnitDelay: '<S838>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_m = rtb_Product11_1;

    /* End of Outputs for SubSystem: '<S665>/Turn On Delay Time' */

    /* Product: '<S479>/Product12_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product12_2 = KaSTCR_k_SoftChkDbncFctrLow[12] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S665>/Logical2' */
    rtb_Logical2_mqr = (rtb_AND_nhk || rtb_Compare_d);

    /* Outputs for Atomic SubSystem: '<S665>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S837>/EdgeFalling1' */
    /* Logic: '<S839>/AND' incorporates:
     *  Logic: '<S839>/OR1'
     *  UnitDelay: '<S839>/Unit Delay'
     */
    rtb_Logical2_n = ((!rtb_Logical2_mqr) && (STCR_ac_DW.UnitDelay_DSTATE_gv));

    /* Update for UnitDelay: '<S839>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_gv = rtb_Logical2_mqr;

    /* End of Outputs for SubSystem: '<S837>/EdgeFalling1' */

    /* Switch: '<S837>/Switch' incorporates:
     *  Logic: '<S837>/OR4'
     */
    if (rtb_Logical2_mqr || rtb_Logical2_n)
    {
        /* Switch: '<S837>/Switch' incorporates:
         *  Constant: '<S837>/Constant Value1'
         */
        rtb_Switch_o = 0.0F;
    }
    else
    {
        /* Switch: '<S837>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S837>/Minimum'
         *  Sum: '<S837>/Summation'
         *  UnitDelay: '<S837>/Unit Delay'
         */
        rtb_Switch_o = fminf(rtb_Product12_2, HeSTCR_t_MedTEH_dT +
                             STCR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S837>/Switch' */

    /* Update for UnitDelay: '<S837>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch_o;

    /* End of Outputs for SubSystem: '<S665>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S665>/EdgeFalling1' */
    /* Logic: '<S835>/OR1' incorporates:
     *  Logic: '<S665>/Logical4'
     */
    rtb_Logical2_j = !rtb_Compare_d;

    /* Logic: '<S835>/AND' incorporates:
     *  Logic: '<S835>/OR1'
     *  UnitDelay: '<S835>/Unit Delay'
     */
    rtb_Logical2_n = (rtb_Logical2_j && (STCR_ac_DW.UnitDelay_DSTATE_mp));

    /* Update for UnitDelay: '<S835>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_mp = rtb_Compare_d;

    /* End of Outputs for SubSystem: '<S665>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S665>/Signal Latch On With Reset' */
    /* Logic: '<S836>/OR1' incorporates:
     *  Logic: '<S665>/Logical1'
     *  Logic: '<S665>/Logical4'
     *  Logic: '<S665>/Logical5'
     *  Logic: '<S836>/NOT'
     *  Logic: '<S836>/OR'
     *  UnitDelay: '<S836>/Unit Delay'
     */
    rtb_Logical2_n = ((rtb_Logical2_fy && rtb_Logical2_n) || ((rtb_Logical2_fy &&
                        rtb_Logical2_j) && (STCR_ac_DW.UnitDelay_DSTATE_jk)));

    /* Update for UnitDelay: '<S836>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jk = rtb_Logical2_n;

    /* End of Outputs for SubSystem: '<S665>/Signal Latch On With Reset' */

    /* Switch: '<S665>/Switch' incorporates:
     *  Switch: '<S665>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S665>/Turn On Delay Time' */
        /* Switch: '<S665>/Switch' incorporates:
         *  Logic: '<S838>/AND'
         *  RelationalOperator: '<S838>/Greater  Than'
         */
        rtb_Compare_d = (rtb_Logical2_ns && (rtb_Product11_1 >= rtb_Product12_1));

        /* End of Outputs for SubSystem: '<S665>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_n)
        {
            /* Outputs for Atomic SubSystem: '<S665>/Turn Off Delay Time' */
            /* Switch: '<S665>/Switch2' incorporates:
             *  Logic: '<S837>/AND'
             *  Logic: '<S837>/OR2'
             *  Logic: '<S837>/OR3'
             *  RelationalOperator: '<S837>/Greater  Than'
             *  Switch: '<S665>/Switch'
             */
            rtb_Compare_d = (rtb_Logical2_mqr || (rtb_Switch_o < rtb_Product12_2));

            /* End of Outputs for SubSystem: '<S665>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S665>/Switch' */

    /* Product: '<S479>/Product13_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product13_1 = KaSTCR_k_SoftChkDbncFctrHi[13] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S666>/Logical' */
    rtb_Logical2_mqr = (rtb_Compare_n4 && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S666>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S844>/EdgeRising' */
    /* Logic: '<S846>/AND' incorporates:
     *  Logic: '<S846>/OR1'
     *  UnitDelay: '<S846>/Unit Delay'
     */
    rtb_Logical2_ns = (rtb_Logical2_mqr && (!STCR_ac_DW.UnitDelay_DSTATE_j0));

    /* Update for UnitDelay: '<S846>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_j0 = rtb_Logical2_mqr;

    /* End of Outputs for SubSystem: '<S844>/EdgeRising' */

    /* Switch: '<S844>/Switch1' incorporates:
     *  Logic: '<S844>/OR'
     *  Logic: '<S844>/OR1'
     */
    if ((!rtb_Logical2_mqr) || rtb_Logical2_ns)
    {
        /* Switch: '<S844>/Switch1' incorporates:
         *  Constant: '<S844>/Constant Value1'
         */
        rtb_Product12_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S844>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S844>/Minimum'
         *  Sum: '<S844>/Summation'
         *  UnitDelay: '<S844>/Unit Delay'
         */
        rtb_Product12_1 = fminf(rtb_Product13_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_j3);
    }

    /* End of Switch: '<S844>/Switch1' */

    /* Update for UnitDelay: '<S844>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_j3 = rtb_Product12_1;

    /* End of Outputs for SubSystem: '<S666>/Turn On Delay Time' */

    /* Product: '<S479>/Product13_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product13_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[13];

    /* Logic: '<S666>/Logical2' */
    rtb_Logical2_j = (rtb_AND_nhk || rtb_Compare_n4);

    /* Outputs for Atomic SubSystem: '<S666>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S843>/EdgeFalling1' */
    /* Logic: '<S845>/AND' incorporates:
     *  Logic: '<S845>/OR1'
     *  UnitDelay: '<S845>/Unit Delay'
     */
    rtb_Logical2_ns = ((!rtb_Logical2_j) && (STCR_ac_DW.UnitDelay_DSTATE_jf));

    /* Update for UnitDelay: '<S845>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jf = rtb_Logical2_j;

    /* End of Outputs for SubSystem: '<S843>/EdgeFalling1' */

    /* Switch: '<S843>/Switch' incorporates:
     *  Logic: '<S843>/OR4'
     */
    if (rtb_Logical2_j || rtb_Logical2_ns)
    {
        /* Switch: '<S843>/Switch' incorporates:
         *  Constant: '<S843>/Constant Value1'
         */
        rtb_Switch_cy = 0.0F;
    }
    else
    {
        /* Switch: '<S843>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S843>/Minimum'
         *  Sum: '<S843>/Summation'
         *  UnitDelay: '<S843>/Unit Delay'
         */
        rtb_Switch_cy = fminf(rtb_Product13_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_gs);
    }

    /* End of Switch: '<S843>/Switch' */

    /* Update for UnitDelay: '<S843>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_gs = rtb_Switch_cy;

    /* End of Outputs for SubSystem: '<S666>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S666>/EdgeFalling1' */
    /* Logic: '<S841>/OR1' incorporates:
     *  Logic: '<S666>/Logical4'
     */
    rtb_Logical2_cp = !rtb_Compare_n4;

    /* Logic: '<S841>/AND' incorporates:
     *  Logic: '<S841>/OR1'
     *  UnitDelay: '<S841>/Unit Delay'
     */
    rtb_Logical2_ns = (rtb_Logical2_cp && (STCR_ac_DW.UnitDelay_DSTATE_m0));

    /* Update for UnitDelay: '<S841>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_m0 = rtb_Compare_n4;

    /* End of Outputs for SubSystem: '<S666>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S666>/Signal Latch On With Reset' */
    /* Logic: '<S842>/OR1' incorporates:
     *  Logic: '<S666>/Logical1'
     *  Logic: '<S666>/Logical4'
     *  Logic: '<S666>/Logical5'
     *  Logic: '<S842>/NOT'
     *  Logic: '<S842>/OR'
     *  UnitDelay: '<S842>/Unit Delay'
     */
    rtb_Logical2_ns = ((rtb_Logical2_fy && rtb_Logical2_ns) || ((rtb_Logical2_fy
                         && rtb_Logical2_cp) && (STCR_ac_DW.UnitDelay_DSTATE_ih2)));

    /* Update for UnitDelay: '<S842>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ih2 = rtb_Logical2_ns;

    /* End of Outputs for SubSystem: '<S666>/Signal Latch On With Reset' */

    /* Switch: '<S666>/Switch' incorporates:
     *  Switch: '<S666>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S666>/Turn On Delay Time' */
        /* Switch: '<S666>/Switch' incorporates:
         *  Logic: '<S844>/AND'
         *  RelationalOperator: '<S844>/Greater  Than'
         */
        rtb_Compare_n4 = (rtb_Logical2_mqr && (rtb_Product12_1 >=
                           rtb_Product13_1));

        /* End of Outputs for SubSystem: '<S666>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_ns)
        {
            /* Outputs for Atomic SubSystem: '<S666>/Turn Off Delay Time' */
            /* Switch: '<S666>/Switch2' incorporates:
             *  Logic: '<S843>/AND'
             *  Logic: '<S843>/OR2'
             *  Logic: '<S843>/OR3'
             *  RelationalOperator: '<S843>/Greater  Than'
             *  Switch: '<S666>/Switch'
             */
            rtb_Compare_n4 = (rtb_Logical2_j || (rtb_Switch_cy < rtb_Product13_2));

            /* End of Outputs for SubSystem: '<S666>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S666>/Switch' */

    /* Product: '<S479>/Product14_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product14_1 = KaSTCR_k_SoftChkDbncFctrHi[14] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S667>/Logical' */
    rtb_Logical2_j = (rtb_Compare_jh && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S667>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S850>/EdgeRising' */
    /* Logic: '<S852>/AND' incorporates:
     *  Logic: '<S852>/OR1'
     *  UnitDelay: '<S852>/Unit Delay'
     */
    rtb_Logical2_mqr = (rtb_Logical2_j && (!STCR_ac_DW.UnitDelay_DSTATE_ci));

    /* Update for UnitDelay: '<S852>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ci = rtb_Logical2_j;

    /* End of Outputs for SubSystem: '<S850>/EdgeRising' */

    /* Switch: '<S850>/Switch1' incorporates:
     *  Logic: '<S850>/OR'
     *  Logic: '<S850>/OR1'
     */
    if ((!rtb_Logical2_j) || rtb_Logical2_mqr)
    {
        /* Switch: '<S850>/Switch1' incorporates:
         *  Constant: '<S850>/Constant Value1'
         */
        rtb_Product13_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S850>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S850>/Minimum'
         *  Sum: '<S850>/Summation'
         *  UnitDelay: '<S850>/Unit Delay'
         */
        rtb_Product13_1 = fminf(rtb_Product14_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_dm);
    }

    /* End of Switch: '<S850>/Switch1' */

    /* Update for UnitDelay: '<S850>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_dm = rtb_Product13_1;

    /* End of Outputs for SubSystem: '<S667>/Turn On Delay Time' */

    /* Product: '<S479>/Product14_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product14_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[14];

    /* Logic: '<S667>/Logical2' */
    rtb_Logical2_cp = (rtb_AND_nhk || rtb_Compare_jh);

    /* Outputs for Atomic SubSystem: '<S667>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S849>/EdgeFalling1' */
    /* Logic: '<S851>/AND' incorporates:
     *  Logic: '<S851>/OR1'
     *  UnitDelay: '<S851>/Unit Delay'
     */
    rtb_Logical2_mqr = ((!rtb_Logical2_cp) && (STCR_ac_DW.UnitDelay_DSTATE_mb));

    /* Update for UnitDelay: '<S851>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_mb = rtb_Logical2_cp;

    /* End of Outputs for SubSystem: '<S849>/EdgeFalling1' */

    /* Switch: '<S849>/Switch' incorporates:
     *  Logic: '<S849>/OR4'
     */
    if (rtb_Logical2_cp || rtb_Logical2_mqr)
    {
        /* Switch: '<S849>/Switch' incorporates:
         *  Constant: '<S849>/Constant Value1'
         */
        rtb_Switch_op = 0.0F;
    }
    else
    {
        /* Switch: '<S849>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S849>/Minimum'
         *  Sum: '<S849>/Summation'
         *  UnitDelay: '<S849>/Unit Delay'
         */
        rtb_Switch_op = fminf(rtb_Product14_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_pc);
    }

    /* End of Switch: '<S849>/Switch' */

    /* Update for UnitDelay: '<S849>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pc = rtb_Switch_op;

    /* End of Outputs for SubSystem: '<S667>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S667>/EdgeFalling1' */
    /* Logic: '<S847>/OR1' incorporates:
     *  Logic: '<S667>/Logical4'
     */
    rtb_Logical2_ah = !rtb_Compare_jh;

    /* Logic: '<S847>/AND' incorporates:
     *  Logic: '<S847>/OR1'
     *  UnitDelay: '<S847>/Unit Delay'
     */
    rtb_Logical2_mqr = (rtb_Logical2_ah && (STCR_ac_DW.UnitDelay_DSTATE_oau));

    /* Update for UnitDelay: '<S847>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_oau = rtb_Compare_jh;

    /* End of Outputs for SubSystem: '<S667>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S667>/Signal Latch On With Reset' */
    /* Logic: '<S848>/OR1' incorporates:
     *  Logic: '<S667>/Logical1'
     *  Logic: '<S667>/Logical4'
     *  Logic: '<S667>/Logical5'
     *  Logic: '<S848>/NOT'
     *  Logic: '<S848>/OR'
     *  UnitDelay: '<S848>/Unit Delay'
     */
    rtb_Logical2_mqr = ((rtb_Logical2_fy && rtb_Logical2_mqr) ||
                        ((rtb_Logical2_fy && rtb_Logical2_ah) &&
                         (STCR_ac_DW.UnitDelay_DSTATE_h1e)));

    /* Update for UnitDelay: '<S848>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_h1e = rtb_Logical2_mqr;

    /* End of Outputs for SubSystem: '<S667>/Signal Latch On With Reset' */

    /* Switch: '<S667>/Switch' incorporates:
     *  Switch: '<S667>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S667>/Turn On Delay Time' */
        /* Switch: '<S667>/Switch' incorporates:
         *  Logic: '<S850>/AND'
         *  RelationalOperator: '<S850>/Greater  Than'
         */
        rtb_Compare_jh = (rtb_Logical2_j && (rtb_Product13_1 >= rtb_Product14_1));

        /* End of Outputs for SubSystem: '<S667>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_mqr)
        {
            /* Outputs for Atomic SubSystem: '<S667>/Turn Off Delay Time' */
            /* Switch: '<S667>/Switch2' incorporates:
             *  Logic: '<S849>/AND'
             *  Logic: '<S849>/OR2'
             *  Logic: '<S849>/OR3'
             *  RelationalOperator: '<S849>/Greater  Than'
             *  Switch: '<S667>/Switch'
             */
            rtb_Compare_jh = (rtb_Logical2_cp || (rtb_Switch_op <
                               rtb_Product14_2));

            /* End of Outputs for SubSystem: '<S667>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S667>/Switch' */

    /* Product: '<S479>/Product15_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product15_1 = KaSTCR_k_SoftChkDbncFctrHi[15] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S668>/Logical' */
    rtb_Logical2_cp = (rtb_Compare_np && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S668>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S856>/EdgeRising' */
    /* Logic: '<S858>/AND' incorporates:
     *  Logic: '<S858>/OR1'
     *  UnitDelay: '<S858>/Unit Delay'
     */
    rtb_Logical2_j = (rtb_Logical2_cp && (!STCR_ac_DW.UnitDelay_DSTATE_dl));

    /* Update for UnitDelay: '<S858>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_dl = rtb_Logical2_cp;

    /* End of Outputs for SubSystem: '<S856>/EdgeRising' */

    /* Switch: '<S856>/Switch1' incorporates:
     *  Logic: '<S856>/OR'
     *  Logic: '<S856>/OR1'
     */
    if ((!rtb_Logical2_cp) || rtb_Logical2_j)
    {
        /* Switch: '<S856>/Switch1' incorporates:
         *  Constant: '<S856>/Constant Value1'
         */
        rtb_Product14_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S856>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S856>/Minimum'
         *  Sum: '<S856>/Summation'
         *  UnitDelay: '<S856>/Unit Delay'
         */
        rtb_Product14_1 = fminf(rtb_Product15_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_ju);
    }

    /* End of Switch: '<S856>/Switch1' */

    /* Update for UnitDelay: '<S856>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ju = rtb_Product14_1;

    /* End of Outputs for SubSystem: '<S668>/Turn On Delay Time' */

    /* Product: '<S479>/Product15_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product15_2 = KaSTCR_k_SoftChkDbncFctrLow[15] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S668>/Logical2' */
    rtb_Logical2_ah = (rtb_AND_nhk || rtb_Compare_np);

    /* Outputs for Atomic SubSystem: '<S668>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S855>/EdgeFalling1' */
    /* Logic: '<S857>/AND' incorporates:
     *  Logic: '<S857>/OR1'
     *  UnitDelay: '<S857>/Unit Delay'
     */
    rtb_Logical2_j = ((!rtb_Logical2_ah) && (STCR_ac_DW.UnitDelay_DSTATE_pk));

    /* Update for UnitDelay: '<S857>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pk = rtb_Logical2_ah;

    /* End of Outputs for SubSystem: '<S855>/EdgeFalling1' */

    /* Switch: '<S855>/Switch' incorporates:
     *  Logic: '<S855>/OR4'
     */
    if (rtb_Logical2_ah || rtb_Logical2_j)
    {
        /* Switch: '<S855>/Switch' incorporates:
         *  Constant: '<S855>/Constant Value1'
         */
        rtb_Switch_du = 0.0F;
    }
    else
    {
        /* Switch: '<S855>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S855>/Minimum'
         *  Sum: '<S855>/Summation'
         *  UnitDelay: '<S855>/Unit Delay'
         */
        rtb_Switch_du = fminf(rtb_Product15_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_l);
    }

    /* End of Switch: '<S855>/Switch' */

    /* Update for UnitDelay: '<S855>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch_du;

    /* End of Outputs for SubSystem: '<S668>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S668>/EdgeFalling1' */
    /* Logic: '<S853>/OR1' incorporates:
     *  Logic: '<S668>/Logical4'
     */
    rtb_Logical2_g = !rtb_Compare_np;

    /* Logic: '<S853>/AND' incorporates:
     *  Logic: '<S853>/OR1'
     *  UnitDelay: '<S853>/Unit Delay'
     */
    rtb_Logical2_j = (rtb_Logical2_g && (STCR_ac_DW.UnitDelay_DSTATE_jo));

    /* Update for UnitDelay: '<S853>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_jo = rtb_Compare_np;

    /* End of Outputs for SubSystem: '<S668>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S668>/Signal Latch On With Reset' */
    /* Logic: '<S854>/OR1' incorporates:
     *  Logic: '<S668>/Logical1'
     *  Logic: '<S668>/Logical4'
     *  Logic: '<S668>/Logical5'
     *  Logic: '<S854>/NOT'
     *  Logic: '<S854>/OR'
     *  UnitDelay: '<S854>/Unit Delay'
     */
    rtb_Logical2_j = ((rtb_Logical2_fy && rtb_Logical2_j) || ((rtb_Logical2_fy &&
                        rtb_Logical2_g) && (STCR_ac_DW.UnitDelay_DSTATE_gsf)));

    /* Update for UnitDelay: '<S854>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_gsf = rtb_Logical2_j;

    /* End of Outputs for SubSystem: '<S668>/Signal Latch On With Reset' */

    /* Switch: '<S668>/Switch' incorporates:
     *  Switch: '<S668>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S668>/Turn On Delay Time' */
        /* Switch: '<S668>/Switch' incorporates:
         *  Logic: '<S856>/AND'
         *  RelationalOperator: '<S856>/Greater  Than'
         */
        rtb_Compare_np = (rtb_Logical2_cp && (rtb_Product14_1 >= rtb_Product15_1));

        /* End of Outputs for SubSystem: '<S668>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_j)
        {
            /* Outputs for Atomic SubSystem: '<S668>/Turn Off Delay Time' */
            /* Switch: '<S668>/Switch2' incorporates:
             *  Logic: '<S855>/AND'
             *  Logic: '<S855>/OR2'
             *  Logic: '<S855>/OR3'
             *  RelationalOperator: '<S855>/Greater  Than'
             *  Switch: '<S668>/Switch'
             */
            rtb_Compare_np = (rtb_Logical2_ah || (rtb_Switch_du <
                               rtb_Product15_2));

            /* End of Outputs for SubSystem: '<S668>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S668>/Switch' */

    /* Product: '<S479>/Product16_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product16_1 = KaSTCR_k_SoftChkDbncFctrHi[16] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S669>/Logical' */
    rtb_Logical2_ah = (rtb_Compare_ek && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S669>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S862>/EdgeRising' */
    /* Logic: '<S864>/AND' incorporates:
     *  Logic: '<S864>/OR1'
     *  UnitDelay: '<S864>/Unit Delay'
     */
    rtb_Logical2_cp = (rtb_Logical2_ah && (!STCR_ac_DW.UnitDelay_DSTATE_b4));

    /* Update for UnitDelay: '<S864>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_b4 = rtb_Logical2_ah;

    /* End of Outputs for SubSystem: '<S862>/EdgeRising' */

    /* Switch: '<S862>/Switch1' incorporates:
     *  Logic: '<S862>/OR'
     *  Logic: '<S862>/OR1'
     */
    if ((!rtb_Logical2_ah) || rtb_Logical2_cp)
    {
        /* Switch: '<S862>/Switch1' incorporates:
         *  Constant: '<S862>/Constant Value1'
         */
        rtb_Product15_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S862>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S862>/Minimum'
         *  Sum: '<S862>/Summation'
         *  UnitDelay: '<S862>/Unit Delay'
         */
        rtb_Product15_1 = fminf(rtb_Product16_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_hc3);
    }

    /* End of Switch: '<S862>/Switch1' */

    /* Update for UnitDelay: '<S862>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_hc3 = rtb_Product15_1;

    /* End of Outputs for SubSystem: '<S669>/Turn On Delay Time' */

    /* Product: '<S479>/Product16_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product16_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[16];

    /* Logic: '<S669>/Logical2' */
    rtb_Logical2_g = (rtb_AND_nhk || rtb_Compare_ek);

    /* Outputs for Atomic SubSystem: '<S669>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S861>/EdgeFalling1' */
    /* Logic: '<S863>/AND' incorporates:
     *  Logic: '<S863>/OR1'
     *  UnitDelay: '<S863>/Unit Delay'
     */
    rtb_Logical2_cp = ((!rtb_Logical2_g) && (STCR_ac_DW.UnitDelay_DSTATE_ap));

    /* Update for UnitDelay: '<S863>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ap = rtb_Logical2_g;

    /* End of Outputs for SubSystem: '<S861>/EdgeFalling1' */

    /* Switch: '<S861>/Switch' incorporates:
     *  Logic: '<S861>/OR4'
     */
    if (rtb_Logical2_g || rtb_Logical2_cp)
    {
        /* Switch: '<S861>/Switch' incorporates:
         *  Constant: '<S861>/Constant Value1'
         */
        rtb_Switch_eh = 0.0F;
    }
    else
    {
        /* Switch: '<S861>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S861>/Minimum'
         *  Sum: '<S861>/Summation'
         *  UnitDelay: '<S861>/Unit Delay'
         */
        rtb_Switch_eh = fminf(rtb_Product16_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_h1);
    }

    /* End of Switch: '<S861>/Switch' */

    /* Update for UnitDelay: '<S861>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_h1 = rtb_Switch_eh;

    /* End of Outputs for SubSystem: '<S669>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S669>/EdgeFalling1' */
    /* Logic: '<S859>/OR1' incorporates:
     *  Logic: '<S669>/Logical4'
     */
    rtb_Logical2_nn = !rtb_Compare_ek;

    /* Logic: '<S859>/AND' incorporates:
     *  Logic: '<S859>/OR1'
     *  UnitDelay: '<S859>/Unit Delay'
     */
    rtb_Logical2_cp = (rtb_Logical2_nn && (STCR_ac_DW.UnitDelay_DSTATE_em));

    /* Update for UnitDelay: '<S859>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_em = rtb_Compare_ek;

    /* End of Outputs for SubSystem: '<S669>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S669>/Signal Latch On With Reset' */
    /* Logic: '<S860>/OR1' incorporates:
     *  Logic: '<S669>/Logical1'
     *  Logic: '<S669>/Logical4'
     *  Logic: '<S669>/Logical5'
     *  Logic: '<S860>/NOT'
     *  Logic: '<S860>/OR'
     *  UnitDelay: '<S860>/Unit Delay'
     */
    rtb_Logical2_cp = ((rtb_Logical2_fy && rtb_Logical2_cp) || ((rtb_Logical2_fy
                         && rtb_Logical2_nn) && (STCR_ac_DW.UnitDelay_DSTATE_bu)));

    /* Update for UnitDelay: '<S860>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_bu = rtb_Logical2_cp;

    /* End of Outputs for SubSystem: '<S669>/Signal Latch On With Reset' */

    /* Switch: '<S669>/Switch' incorporates:
     *  Switch: '<S669>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S669>/Turn On Delay Time' */
        /* Switch: '<S669>/Switch' incorporates:
         *  Logic: '<S862>/AND'
         *  RelationalOperator: '<S862>/Greater  Than'
         */
        rtb_Compare_ek = (rtb_Logical2_ah && (rtb_Product15_1 >= rtb_Product16_1));

        /* End of Outputs for SubSystem: '<S669>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_cp)
        {
            /* Outputs for Atomic SubSystem: '<S669>/Turn Off Delay Time' */
            /* Switch: '<S669>/Switch2' incorporates:
             *  Logic: '<S861>/AND'
             *  Logic: '<S861>/OR2'
             *  Logic: '<S861>/OR3'
             *  RelationalOperator: '<S861>/Greater  Than'
             *  Switch: '<S669>/Switch'
             */
            rtb_Compare_ek = (rtb_Logical2_g || (rtb_Switch_eh < rtb_Product16_2));

            /* End of Outputs for SubSystem: '<S669>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S669>/Switch' */

    /* Product: '<S479>/Product17_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product17_1 = KaSTCR_k_SoftChkDbncFctrHi[17] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S670>/Logical' */
    rtb_Logical2_g = (rtb_Compare_f && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S670>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S868>/EdgeRising' */
    /* Logic: '<S870>/AND' incorporates:
     *  Logic: '<S870>/OR1'
     *  UnitDelay: '<S870>/Unit Delay'
     */
    rtb_Logical2_ah = (rtb_Logical2_g && (!STCR_ac_DW.UnitDelay_DSTATE_pgo));

    /* Update for UnitDelay: '<S870>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pgo = rtb_Logical2_g;

    /* End of Outputs for SubSystem: '<S868>/EdgeRising' */

    /* Switch: '<S868>/Switch1' incorporates:
     *  Logic: '<S868>/OR'
     *  Logic: '<S868>/OR1'
     */
    if ((!rtb_Logical2_g) || rtb_Logical2_ah)
    {
        /* Switch: '<S868>/Switch1' incorporates:
         *  Constant: '<S868>/Constant Value1'
         */
        rtb_Product16_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S868>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S868>/Minimum'
         *  Sum: '<S868>/Summation'
         *  UnitDelay: '<S868>/Unit Delay'
         */
        rtb_Product16_1 = fminf(rtb_Product17_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_fj);
    }

    /* End of Switch: '<S868>/Switch1' */

    /* Update for UnitDelay: '<S868>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fj = rtb_Product16_1;

    /* End of Outputs for SubSystem: '<S670>/Turn On Delay Time' */

    /* Product: '<S479>/Product17_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product17_2 = rtb_TmpSignalConversionAtVeABCR *
        KaSTCR_k_SoftChkDbncFctrLow[17];

    /* Logic: '<S670>/Logical2' */
    rtb_Logical2_nn = (rtb_AND_nhk || rtb_Compare_f);

    /* Outputs for Atomic SubSystem: '<S670>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S867>/EdgeFalling1' */
    /* Logic: '<S869>/AND' incorporates:
     *  Logic: '<S869>/OR1'
     *  UnitDelay: '<S869>/Unit Delay'
     */
    rtb_Logical2_ah = ((!rtb_Logical2_nn) && (STCR_ac_DW.UnitDelay_DSTATE_lf));

    /* Update for UnitDelay: '<S869>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_lf = rtb_Logical2_nn;

    /* End of Outputs for SubSystem: '<S867>/EdgeFalling1' */

    /* Switch: '<S867>/Switch' incorporates:
     *  Logic: '<S867>/OR4'
     */
    if (rtb_Logical2_nn || rtb_Logical2_ah)
    {
        /* Switch: '<S867>/Switch' incorporates:
         *  Constant: '<S867>/Constant Value1'
         */
        rtb_Switch_d = 0.0F;
    }
    else
    {
        /* Switch: '<S867>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S867>/Minimum'
         *  Sum: '<S867>/Summation'
         *  UnitDelay: '<S867>/Unit Delay'
         */
        rtb_Switch_d = fminf(rtb_Product17_2, HeSTCR_t_MedTEH_dT +
                             STCR_ac_DW.UnitDelay_DSTATE_j1);
    }

    /* End of Switch: '<S867>/Switch' */

    /* Update for UnitDelay: '<S867>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_j1 = rtb_Switch_d;

    /* End of Outputs for SubSystem: '<S670>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S670>/EdgeFalling1' */
    /* Logic: '<S865>/OR1' incorporates:
     *  Logic: '<S670>/Logical4'
     */
    rtb_Logical2_bt = !rtb_Compare_f;

    /* Logic: '<S865>/AND' incorporates:
     *  Logic: '<S865>/OR1'
     *  UnitDelay: '<S865>/Unit Delay'
     */
    rtb_Logical2_ah = (rtb_Logical2_bt && (STCR_ac_DW.UnitDelay_DSTATE_ck));

    /* Update for UnitDelay: '<S865>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ck = rtb_Compare_f;

    /* End of Outputs for SubSystem: '<S670>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S670>/Signal Latch On With Reset' */
    /* Logic: '<S866>/OR1' incorporates:
     *  Logic: '<S670>/Logical1'
     *  Logic: '<S670>/Logical4'
     *  Logic: '<S670>/Logical5'
     *  Logic: '<S866>/NOT'
     *  Logic: '<S866>/OR'
     *  UnitDelay: '<S866>/Unit Delay'
     */
    rtb_Logical2_ah = ((rtb_Logical2_fy && rtb_Logical2_ah) || ((rtb_Logical2_fy
                         && rtb_Logical2_bt) && (STCR_ac_DW.UnitDelay_DSTATE_nu)));

    /* Update for UnitDelay: '<S866>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_nu = rtb_Logical2_ah;

    /* End of Outputs for SubSystem: '<S670>/Signal Latch On With Reset' */

    /* Switch: '<S670>/Switch' incorporates:
     *  Switch: '<S670>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S670>/Turn On Delay Time' */
        /* Switch: '<S670>/Switch' incorporates:
         *  Logic: '<S868>/AND'
         *  RelationalOperator: '<S868>/Greater  Than'
         */
        rtb_Compare_f = (rtb_Logical2_g && (rtb_Product16_1 >= rtb_Product17_1));

        /* End of Outputs for SubSystem: '<S670>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_ah)
        {
            /* Outputs for Atomic SubSystem: '<S670>/Turn Off Delay Time' */
            /* Switch: '<S670>/Switch2' incorporates:
             *  Logic: '<S867>/AND'
             *  Logic: '<S867>/OR2'
             *  Logic: '<S867>/OR3'
             *  RelationalOperator: '<S867>/Greater  Than'
             *  Switch: '<S670>/Switch'
             */
            rtb_Compare_f = (rtb_Logical2_nn || (rtb_Switch_d < rtb_Product17_2));

            /* End of Outputs for SubSystem: '<S670>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S670>/Switch' */

    /* Product: '<S479>/Product18_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product18_1 = KaSTCR_k_SoftChkDbncFctrHi[18] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S671>/Logical' */
    rtb_Logical2_nn = (rtb_Compare_fc && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S671>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S874>/EdgeRising' */
    /* Logic: '<S876>/AND' incorporates:
     *  Logic: '<S876>/OR1'
     *  UnitDelay: '<S876>/Unit Delay'
     */
    rtb_Logical2_g = (rtb_Logical2_nn && (!STCR_ac_DW.UnitDelay_DSTATE_kn));

    /* Update for UnitDelay: '<S876>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_kn = rtb_Logical2_nn;

    /* End of Outputs for SubSystem: '<S874>/EdgeRising' */

    /* Switch: '<S874>/Switch1' incorporates:
     *  Logic: '<S874>/OR'
     *  Logic: '<S874>/OR1'
     */
    if ((!rtb_Logical2_nn) || rtb_Logical2_g)
    {
        /* Switch: '<S874>/Switch1' incorporates:
         *  Constant: '<S874>/Constant Value1'
         */
        rtb_Product17_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S874>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S874>/Minimum'
         *  Sum: '<S874>/Summation'
         *  UnitDelay: '<S874>/Unit Delay'
         */
        rtb_Product17_1 = fminf(rtb_Product18_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_at);
    }

    /* End of Switch: '<S874>/Switch1' */

    /* Update for UnitDelay: '<S874>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_at = rtb_Product17_1;

    /* End of Outputs for SubSystem: '<S671>/Turn On Delay Time' */

    /* Product: '<S479>/Product18_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product18_2 = KaSTCR_k_SoftChkDbncFctrLow[18] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S671>/Logical2' */
    rtb_Logical2_bt = (rtb_AND_nhk || rtb_Compare_fc);

    /* Outputs for Atomic SubSystem: '<S671>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S873>/EdgeFalling1' */
    /* Logic: '<S875>/AND' incorporates:
     *  Logic: '<S875>/OR1'
     *  UnitDelay: '<S875>/Unit Delay'
     */
    rtb_Logical2_g = ((!rtb_Logical2_bt) && (STCR_ac_DW.UnitDelay_DSTATE_bx));

    /* Update for UnitDelay: '<S875>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_bx = rtb_Logical2_bt;

    /* End of Outputs for SubSystem: '<S873>/EdgeFalling1' */

    /* Switch: '<S873>/Switch' incorporates:
     *  Logic: '<S873>/OR4'
     */
    if (rtb_Logical2_bt || rtb_Logical2_g)
    {
        /* Switch: '<S873>/Switch' incorporates:
         *  Constant: '<S873>/Constant Value1'
         */
        rtb_Switch_om = 0.0F;
    }
    else
    {
        /* Switch: '<S873>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S873>/Minimum'
         *  Sum: '<S873>/Summation'
         *  UnitDelay: '<S873>/Unit Delay'
         */
        rtb_Switch_om = fminf(rtb_Product18_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_f1);
    }

    /* End of Switch: '<S873>/Switch' */

    /* Update for UnitDelay: '<S873>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_f1 = rtb_Switch_om;

    /* End of Outputs for SubSystem: '<S671>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S671>/EdgeFalling1' */
    /* Logic: '<S871>/OR1' incorporates:
     *  Logic: '<S671>/Logical4'
     */
    rtb_Logical2_du = !rtb_Compare_fc;

    /* Logic: '<S871>/AND' incorporates:
     *  Logic: '<S871>/OR1'
     *  UnitDelay: '<S871>/Unit Delay'
     */
    rtb_Logical2_g = (rtb_Logical2_du && (STCR_ac_DW.UnitDelay_DSTATE_esn));

    /* Update for UnitDelay: '<S871>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_esn = rtb_Compare_fc;

    /* End of Outputs for SubSystem: '<S671>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S671>/Signal Latch On With Reset' */
    /* Logic: '<S872>/OR1' incorporates:
     *  Logic: '<S671>/Logical1'
     *  Logic: '<S671>/Logical4'
     *  Logic: '<S671>/Logical5'
     *  Logic: '<S872>/NOT'
     *  Logic: '<S872>/OR'
     *  UnitDelay: '<S872>/Unit Delay'
     */
    rtb_Logical2_g = ((rtb_Logical2_fy && rtb_Logical2_g) || ((rtb_Logical2_fy &&
                        rtb_Logical2_du) && (STCR_ac_DW.UnitDelay_DSTATE_mo)));

    /* Update for UnitDelay: '<S872>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_mo = rtb_Logical2_g;

    /* End of Outputs for SubSystem: '<S671>/Signal Latch On With Reset' */

    /* Switch: '<S671>/Switch' incorporates:
     *  Switch: '<S671>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S671>/Turn On Delay Time' */
        /* Switch: '<S671>/Switch' incorporates:
         *  Logic: '<S874>/AND'
         *  RelationalOperator: '<S874>/Greater  Than'
         */
        rtb_Compare_fc = (rtb_Logical2_nn && (rtb_Product17_1 >= rtb_Product18_1));

        /* End of Outputs for SubSystem: '<S671>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_g)
        {
            /* Outputs for Atomic SubSystem: '<S671>/Turn Off Delay Time' */
            /* Switch: '<S671>/Switch2' incorporates:
             *  Logic: '<S873>/AND'
             *  Logic: '<S873>/OR2'
             *  Logic: '<S873>/OR3'
             *  RelationalOperator: '<S873>/Greater  Than'
             *  Switch: '<S671>/Switch'
             */
            rtb_Compare_fc = (rtb_Logical2_bt || (rtb_Switch_om <
                               rtb_Product18_2));

            /* End of Outputs for SubSystem: '<S671>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S671>/Switch' */

    /* Product: '<S479>/Product19_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_Product19_1 = KaSTCR_k_SoftChkDbncFctrHi[19] *
        rtb_TmpSignalConversionAtVeENGR;

    /* Logic: '<S672>/Logical' */
    rtb_Logical2_bt = (rtb_Switch_pt && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S672>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S880>/EdgeRising' */
    /* Logic: '<S882>/AND' incorporates:
     *  Logic: '<S882>/OR1'
     *  UnitDelay: '<S882>/Unit Delay'
     */
    rtb_Logical2_nn = (rtb_Logical2_bt && (!STCR_ac_DW.UnitDelay_DSTATE_gu));

    /* Update for UnitDelay: '<S882>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_gu = rtb_Logical2_bt;

    /* End of Outputs for SubSystem: '<S880>/EdgeRising' */

    /* Switch: '<S880>/Switch1' incorporates:
     *  Logic: '<S880>/OR'
     *  Logic: '<S880>/OR1'
     */
    if ((!rtb_Logical2_bt) || rtb_Logical2_nn)
    {
        /* Switch: '<S880>/Switch1' incorporates:
         *  Constant: '<S880>/Constant Value1'
         */
        rtb_Product18_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S880>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S880>/Minimum'
         *  Sum: '<S880>/Summation'
         *  UnitDelay: '<S880>/Unit Delay'
         */
        rtb_Product18_1 = fminf(rtb_Product19_1, HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_kb);
    }

    /* End of Switch: '<S880>/Switch1' */

    /* Update for UnitDelay: '<S880>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_kb = rtb_Product18_1;

    /* End of Outputs for SubSystem: '<S672>/Turn On Delay Time' */

    /* Product: '<S479>/Product19_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_Product19_2 = KaSTCR_k_SoftChkDbncFctrLow[19] *
        rtb_TmpSignalConversionAtVeABCR;

    /* Logic: '<S672>/Logical2' */
    rtb_Logical2_du = (rtb_AND_nhk || rtb_Switch_pt);

    /* Outputs for Atomic SubSystem: '<S672>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S879>/EdgeFalling1' */
    /* Logic: '<S881>/AND' incorporates:
     *  Logic: '<S881>/OR1'
     *  UnitDelay: '<S881>/Unit Delay'
     */
    rtb_Logical2_nn = ((!rtb_Logical2_du) && (STCR_ac_DW.UnitDelay_DSTATE_pob));

    /* Update for UnitDelay: '<S881>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pob = rtb_Logical2_du;

    /* End of Outputs for SubSystem: '<S879>/EdgeFalling1' */

    /* Switch: '<S879>/Switch' incorporates:
     *  Logic: '<S879>/OR4'
     */
    if (rtb_Logical2_du || rtb_Logical2_nn)
    {
        /* Switch: '<S879>/Switch' incorporates:
         *  Constant: '<S879>/Constant Value1'
         */
        rtb_Switch_pm = 0.0F;
    }
    else
    {
        /* Switch: '<S879>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S879>/Minimum'
         *  Sum: '<S879>/Summation'
         *  UnitDelay: '<S879>/Unit Delay'
         */
        rtb_Switch_pm = fminf(rtb_Product19_2, HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_hi);
    }

    /* End of Switch: '<S879>/Switch' */

    /* Update for UnitDelay: '<S879>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_hi = rtb_Switch_pm;

    /* End of Outputs for SubSystem: '<S672>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S672>/EdgeFalling1' */
    /* Logic: '<S877>/OR1' incorporates:
     *  Logic: '<S672>/Logical4'
     */
    rtb_Logical2_cr_tmp = !rtb_Switch_pt;

    /* Logic: '<S877>/AND' incorporates:
     *  Logic: '<S877>/OR1'
     *  UnitDelay: '<S877>/Unit Delay'
     */
    rtb_Logical2_nn = (rtb_Logical2_cr_tmp && (STCR_ac_DW.UnitDelay_DSTATE_fu2));

    /* Update for UnitDelay: '<S877>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_fu2 = rtb_Switch_pt;

    /* End of Outputs for SubSystem: '<S672>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S672>/Signal Latch On With Reset' */
    /* Logic: '<S878>/OR1' incorporates:
     *  Logic: '<S672>/Logical1'
     *  Logic: '<S672>/Logical4'
     *  Logic: '<S672>/Logical5'
     *  Logic: '<S878>/NOT'
     *  Logic: '<S878>/OR'
     *  UnitDelay: '<S878>/Unit Delay'
     */
    rtb_Logical2_nn = ((rtb_Logical2_fy && rtb_Logical2_nn) || ((rtb_Logical2_fy
                         && rtb_Logical2_cr_tmp) &&
                        (STCR_ac_DW.UnitDelay_DSTATE_ilk)));

    /* Update for UnitDelay: '<S878>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_ilk = rtb_Logical2_nn;

    /* End of Outputs for SubSystem: '<S672>/Signal Latch On With Reset' */

    /* Switch: '<S672>/Switch' incorporates:
     *  Switch: '<S672>/Switch2'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S672>/Turn On Delay Time' */
        /* Switch: '<S672>/Switch' incorporates:
         *  Logic: '<S880>/AND'
         *  RelationalOperator: '<S880>/Greater  Than'
         */
        rtb_Switch_pt = (rtb_Logical2_bt && (rtb_Product18_1 >= rtb_Product19_1));

        /* End of Outputs for SubSystem: '<S672>/Turn On Delay Time' */
    }
    else
    {
        if (rtb_Logical2_nn)
        {
            /* Outputs for Atomic SubSystem: '<S672>/Turn Off Delay Time' */
            /* Switch: '<S672>/Switch2' incorporates:
             *  Logic: '<S879>/AND'
             *  Logic: '<S879>/OR2'
             *  Logic: '<S879>/OR3'
             *  RelationalOperator: '<S879>/Greater  Than'
             *  Switch: '<S672>/Switch'
             */
            rtb_Switch_pt = (rtb_Logical2_du || (rtb_Switch_pm < rtb_Product19_2));

            /* End of Outputs for SubSystem: '<S672>/Turn Off Delay Time' */
        }
    }

    /* End of Switch: '<S672>/Switch' */

    /* Product: '<S479>/Product20_1' incorporates:
     *  Constant: '<S657>/Calib'
     */
    rtb_TmpSignalConversionAtVeENGR *= KaSTCR_k_SoftChkDbncFctrHi[20];

    /* Logic: '<S674>/Logical' */
    rtb_Logical2_bt = (rtb_Comparison2 && rtb_VeSTCR_b_MildHybridEnbld);

    /* Outputs for Atomic SubSystem: '<S674>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S892>/EdgeRising' */
    /* Logic: '<S894>/AND' incorporates:
     *  Logic: '<S894>/OR1'
     *  UnitDelay: '<S894>/Unit Delay'
     */
    rtb_Logical2_du = (rtb_Logical2_bt && (!STCR_ac_DW.UnitDelay_DSTATE_pdr));

    /* Update for UnitDelay: '<S894>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pdr = rtb_Logical2_bt;

    /* End of Outputs for SubSystem: '<S892>/EdgeRising' */

    /* Switch: '<S892>/Switch1' incorporates:
     *  Logic: '<S892>/OR'
     *  Logic: '<S892>/OR1'
     */
    if ((!rtb_Logical2_bt) || rtb_Logical2_du)
    {
        /* Switch: '<S892>/Switch1' incorporates:
         *  Constant: '<S892>/Constant Value1'
         */
        rtb_Product19_1 = 0.0F;
    }
    else
    {
        /* Switch: '<S892>/Switch1' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S892>/Minimum'
         *  Sum: '<S892>/Summation'
         *  UnitDelay: '<S892>/Unit Delay'
         */
        rtb_Product19_1 = fminf(rtb_TmpSignalConversionAtVeENGR,
                                HeSTCR_t_MedTEH_dT +
                                STCR_ac_DW.UnitDelay_DSTATE_oa);
    }

    /* End of Switch: '<S892>/Switch1' */

    /* Update for UnitDelay: '<S892>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_oa = rtb_Product19_1;

    /* End of Outputs for SubSystem: '<S674>/Turn On Delay Time' */

    /* Product: '<S479>/Product20_2' incorporates:
     *  Constant: '<S658>/Calib'
     */
    rtb_TmpSignalConversionAtVeABCR *= KaSTCR_k_SoftChkDbncFctrLow[20];

    /* Logic: '<S674>/Logical2' */
    rtb_Logical2_du = (rtb_AND_nhk || rtb_Comparison2);

    /* Outputs for Atomic SubSystem: '<S674>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S891>/EdgeFalling1' */
    /* Logic: '<S893>/AND' incorporates:
     *  Logic: '<S893>/OR1'
     *  UnitDelay: '<S893>/Unit Delay'
     */
    rtb_AND_nhk = ((!rtb_Logical2_du) && (STCR_ac_DW.UnitDelay_DSTATE_pl));

    /* Update for UnitDelay: '<S893>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_pl = rtb_Logical2_du;

    /* End of Outputs for SubSystem: '<S891>/EdgeFalling1' */

    /* Switch: '<S891>/Switch' incorporates:
     *  Logic: '<S891>/OR4'
     */
    if (rtb_Logical2_du || rtb_AND_nhk)
    {
        /* Switch: '<S891>/Switch' incorporates:
         *  Constant: '<S891>/Constant Value1'
         */
        rtb_Switch_o3 = 0.0F;
    }
    else
    {
        /* Switch: '<S891>/Switch' incorporates:
         *  Constant: '<S656>/Calib'
         *  MinMax: '<S891>/Minimum'
         *  Sum: '<S891>/Summation'
         *  UnitDelay: '<S891>/Unit Delay'
         */
        rtb_Switch_o3 = fminf(rtb_TmpSignalConversionAtVeABCR,
                              HeSTCR_t_MedTEH_dT +
                              STCR_ac_DW.UnitDelay_DSTATE_cp);
    }

    /* End of Switch: '<S891>/Switch' */

    /* Update for UnitDelay: '<S891>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_cp = rtb_Switch_o3;

    /* End of Outputs for SubSystem: '<S674>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S674>/EdgeFalling1' */
    /* Logic: '<S889>/OR1' incorporates:
     *  Logic: '<S674>/Logical4'
     */
    rtb_Logical2_cr_tmp = !rtb_Comparison2;

    /* Logic: '<S889>/AND' incorporates:
     *  Logic: '<S889>/OR1'
     *  UnitDelay: '<S889>/Unit Delay'
     */
    rtb_AND_nhk = (rtb_Logical2_cr_tmp && (STCR_ac_DW.UnitDelay_DSTATE_mde));

    /* Update for UnitDelay: '<S889>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_mde = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S674>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S674>/Signal Latch On With Reset' */
    /* Logic: '<S890>/OR1' incorporates:
     *  Logic: '<S674>/Logical1'
     *  Logic: '<S674>/Logical4'
     *  Logic: '<S674>/Logical5'
     *  Logic: '<S890>/NOT'
     *  Logic: '<S890>/OR'
     *  UnitDelay: '<S890>/Unit Delay'
     */
    rtb_Logical2_fy = ((rtb_Logical2_fy && rtb_AND_nhk) || ((rtb_Logical2_fy &&
                         rtb_Logical2_cr_tmp) && (STCR_ac_DW.UnitDelay_DSTATE_il)));

    /* Update for UnitDelay: '<S890>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_il = rtb_Logical2_fy;

    /* End of Outputs for SubSystem: '<S674>/Signal Latch On With Reset' */

    /* Switch: '<S674>/Switch' incorporates:
     *  Switch: '<S661>/Switch1'
     *  Switch: '<S662>/Switch1'
     *  Switch: '<S663>/Switch1'
     *  Switch: '<S664>/Switch1'
     *  Switch: '<S665>/Switch1'
     *  Switch: '<S666>/Switch1'
     *  Switch: '<S667>/Switch1'
     *  Switch: '<S668>/Switch1'
     *  Switch: '<S669>/Switch1'
     *  Switch: '<S670>/Switch1'
     *  Switch: '<S671>/Switch1'
     *  Switch: '<S672>/Switch1'
     *  Switch: '<S673>/Switch1'
     *  Switch: '<S674>/Switch1'
     *  Switch: '<S674>/Switch2'
     *  Switch: '<S675>/Switch1'
     *  Switch: '<S676>/Switch1'
     *  Switch: '<S677>/Switch1'
     *  Switch: '<S678>/Switch1'
     *  Switch: '<S679>/Switch1'
     *  Switch: '<S680>/Switch1'
     *  Switch: '<S681>/Switch1'
     */
    if (rtb_VeSTCR_b_MildHybridEnbld)
    {
        /* Outputs for Atomic SubSystem: '<S674>/Turn On Delay Time' */
        /* UnitDelay: '<S651>/Unit Delay' incorporates:
         *  Logic: '<S892>/AND'
         *  RelationalOperator: '<S892>/Greater  Than'
         */
        rtb_VeSTCR_b_MildHybridEnbld = (rtb_Logical2_bt && (rtb_Product19_1 >=
            rtb_TmpSignalConversionAtVeENGR));

        /* End of Outputs for SubSystem: '<S674>/Turn On Delay Time' */

        /* Gain: '<S682>/Gain' incorporates:
         *  Abs: '<S451>/Abs'
         *  Abs: '<S451>/Abs2'
         */
        VaSTCR_t_SoftChkDbncTm[0] = rtb_TmpSignalConversionAtVeCSVR;
        VaSTCR_t_SoftChkDbncTm[1] = rtb_TmpSignalConversionAtVeESMR;
    }
    else
    {
        if (rtb_Logical2_fy)
        {
            /* Outputs for Atomic SubSystem: '<S674>/Turn Off Delay Time' */
            /* Switch: '<S674>/Switch2' incorporates:
             *  Logic: '<S891>/AND'
             *  Logic: '<S891>/OR2'
             *  Logic: '<S891>/OR3'
             *  RelationalOperator: '<S891>/Greater  Than'
             *  UnitDelay: '<S651>/Unit Delay'
             */
            rtb_VeSTCR_b_MildHybridEnbld = (rtb_Logical2_du || (rtb_Switch_o3 <
                rtb_TmpSignalConversionAtVeABCR));

            /* End of Outputs for SubSystem: '<S674>/Turn Off Delay Time' */
        }
        else
        {
            /* UnitDelay: '<S651>/Unit Delay' incorporates:
             *  Switch: '<S674>/Switch2'
             */
            rtb_VeSTCR_b_MildHybridEnbld = rtb_Comparison2;
        }

        /* Switch: '<S661>/Switch3' */
        if (rtb_AND_po)
        {
            /* Outputs for Atomic SubSystem: '<S661>/Turn Off Delay Time' */
            /* Gain: '<S682>/Gain' incorporates:
             *  Abs: '<S451>/Abs2'
             *  Constant: '<S813>/Constant Value2'
             *  MinMax: '<S813>/Minimum1'
             *  Sum: '<S813>/Summation1'
             */
            VaSTCR_t_SoftChkDbncTm[0] = fmaxf(0.0F,
                rtb_TmpSignalConversionAtVeATRR -
                rtb_TmpSignalConversionAtVeUBTR);

            /* End of Outputs for SubSystem: '<S661>/Turn Off Delay Time' */
        }
        else
        {
            /* Gain: '<S682>/Gain' incorporates:
             *  Abs: '<S451>/Abs2'
             *  Constant: '<S661>/NoDbnc'
             */
            VaSTCR_t_SoftChkDbncTm[0] = 0.0F;
        }

        /* End of Switch: '<S661>/Switch3' */

        /* Switch: '<S662>/Switch3' */
        if (rtb_Logical_n3)
        {
            /* Outputs for Atomic SubSystem: '<S662>/Turn Off Delay Time' */
            /* Gain: '<S682>/Gain' incorporates:
             *  Abs: '<S451>/Abs'
             *  Constant: '<S819>/Constant Value2'
             *  MinMax: '<S819>/Minimum1'
             *  Sum: '<S819>/Summation1'
             */
            VaSTCR_t_SoftChkDbncTm[1] = fmaxf(0.0F, rtb_Product1_2 -
                rtb_Switch_k4);

            /* End of Outputs for SubSystem: '<S662>/Turn Off Delay Time' */
        }
        else
        {
            /* Gain: '<S682>/Gain' incorporates:
             *  Abs: '<S451>/Abs'
             *  Constant: '<S662>/NoDbnc'
             */
            VaSTCR_t_SoftChkDbncTm[1] = 0.0F;
        }

        /* End of Switch: '<S662>/Switch3' */

        /* Switch: '<S663>/Switch3' */
        if (rtb_Logical2_p)
        {
            /* Outputs for Atomic SubSystem: '<S663>/Turn Off Delay Time' */
            /* Abs: '<S451>/Abs1' incorporates:
             *  Constant: '<S825>/Constant Value2'
             *  MinMax: '<S825>/Minimum1'
             *  Sum: '<S825>/Summation1'
             */
            rtb_Switch_i = fmaxf(0.0F, rtb_Product10_2 - rtb_Switch_p1);

            /* End of Outputs for SubSystem: '<S663>/Turn Off Delay Time' */
        }
        else
        {
            /* Abs: '<S451>/Abs1' incorporates:
             *  Constant: '<S663>/NoDbnc'
             */
            rtb_Switch_i = 0.0F;
        }

        /* End of Switch: '<S663>/Switch3' */

        /* Switch: '<S664>/Switch3' */
        if (rtb_Logical2_b)
        {
            /* Outputs for Atomic SubSystem: '<S664>/Turn Off Delay Time' */
            /* Switch: '<S664>/Switch1' incorporates:
             *  Constant: '<S831>/Constant Value2'
             *  MinMax: '<S831>/Minimum1'
             *  Sum: '<S831>/Summation1'
             */
            rtb_Product10_1 = fmaxf(0.0F, rtb_Product11_2 - rtb_Switch_pu);

            /* End of Outputs for SubSystem: '<S664>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S664>/Switch1' incorporates:
             *  Constant: '<S664>/NoDbnc'
             */
            rtb_Product10_1 = 0.0F;
        }

        /* End of Switch: '<S664>/Switch3' */

        /* Switch: '<S665>/Switch3' */
        if (rtb_Logical2_n)
        {
            /* Outputs for Atomic SubSystem: '<S665>/Turn Off Delay Time' */
            /* Switch: '<S665>/Switch1' incorporates:
             *  Constant: '<S837>/Constant Value2'
             *  MinMax: '<S837>/Minimum1'
             *  Sum: '<S837>/Summation1'
             */
            rtb_Product11_1 = fmaxf(0.0F, rtb_Product12_2 - rtb_Switch_o);

            /* End of Outputs for SubSystem: '<S665>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S665>/Switch1' incorporates:
             *  Constant: '<S665>/NoDbnc'
             */
            rtb_Product11_1 = 0.0F;
        }

        /* End of Switch: '<S665>/Switch3' */

        /* Switch: '<S666>/Switch3' */
        if (rtb_Logical2_ns)
        {
            /* Outputs for Atomic SubSystem: '<S666>/Turn Off Delay Time' */
            /* Switch: '<S666>/Switch1' incorporates:
             *  Constant: '<S843>/Constant Value2'
             *  MinMax: '<S843>/Minimum1'
             *  Sum: '<S843>/Summation1'
             */
            rtb_Product12_1 = fmaxf(0.0F, rtb_Product13_2 - rtb_Switch_cy);

            /* End of Outputs for SubSystem: '<S666>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S666>/Switch1' incorporates:
             *  Constant: '<S666>/NoDbnc'
             */
            rtb_Product12_1 = 0.0F;
        }

        /* End of Switch: '<S666>/Switch3' */

        /* Switch: '<S667>/Switch3' */
        if (rtb_Logical2_mqr)
        {
            /* Outputs for Atomic SubSystem: '<S667>/Turn Off Delay Time' */
            /* Switch: '<S667>/Switch1' incorporates:
             *  Constant: '<S849>/Constant Value2'
             *  MinMax: '<S849>/Minimum1'
             *  Sum: '<S849>/Summation1'
             */
            rtb_Product13_1 = fmaxf(0.0F, rtb_Product14_2 - rtb_Switch_op);

            /* End of Outputs for SubSystem: '<S667>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S667>/Switch1' incorporates:
             *  Constant: '<S667>/NoDbnc'
             */
            rtb_Product13_1 = 0.0F;
        }

        /* End of Switch: '<S667>/Switch3' */

        /* Switch: '<S668>/Switch3' */
        if (rtb_Logical2_j)
        {
            /* Outputs for Atomic SubSystem: '<S668>/Turn Off Delay Time' */
            /* Switch: '<S668>/Switch1' incorporates:
             *  Constant: '<S855>/Constant Value2'
             *  MinMax: '<S855>/Minimum1'
             *  Sum: '<S855>/Summation1'
             */
            rtb_Product14_1 = fmaxf(0.0F, rtb_Product15_2 - rtb_Switch_du);

            /* End of Outputs for SubSystem: '<S668>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S668>/Switch1' incorporates:
             *  Constant: '<S668>/NoDbnc'
             */
            rtb_Product14_1 = 0.0F;
        }

        /* End of Switch: '<S668>/Switch3' */

        /* Switch: '<S669>/Switch3' */
        if (rtb_Logical2_cp)
        {
            /* Outputs for Atomic SubSystem: '<S669>/Turn Off Delay Time' */
            /* Switch: '<S669>/Switch1' incorporates:
             *  Constant: '<S861>/Constant Value2'
             *  MinMax: '<S861>/Minimum1'
             *  Sum: '<S861>/Summation1'
             */
            rtb_Product15_1 = fmaxf(0.0F, rtb_Product16_2 - rtb_Switch_eh);

            /* End of Outputs for SubSystem: '<S669>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S669>/Switch1' incorporates:
             *  Constant: '<S669>/NoDbnc'
             */
            rtb_Product15_1 = 0.0F;
        }

        /* End of Switch: '<S669>/Switch3' */

        /* Switch: '<S670>/Switch3' */
        if (rtb_Logical2_ah)
        {
            /* Outputs for Atomic SubSystem: '<S670>/Turn Off Delay Time' */
            /* Switch: '<S670>/Switch1' incorporates:
             *  Constant: '<S867>/Constant Value2'
             *  MinMax: '<S867>/Minimum1'
             *  Sum: '<S867>/Summation1'
             */
            rtb_Product16_1 = fmaxf(0.0F, rtb_Product17_2 - rtb_Switch_d);

            /* End of Outputs for SubSystem: '<S670>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S670>/Switch1' incorporates:
             *  Constant: '<S670>/NoDbnc'
             */
            rtb_Product16_1 = 0.0F;
        }

        /* End of Switch: '<S670>/Switch3' */

        /* Switch: '<S671>/Switch3' */
        if (rtb_Logical2_g)
        {
            /* Outputs for Atomic SubSystem: '<S671>/Turn Off Delay Time' */
            /* Switch: '<S671>/Switch1' incorporates:
             *  Constant: '<S873>/Constant Value2'
             *  MinMax: '<S873>/Minimum1'
             *  Sum: '<S873>/Summation1'
             */
            rtb_Product17_1 = fmaxf(0.0F, rtb_Product18_2 - rtb_Switch_om);

            /* End of Outputs for SubSystem: '<S671>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S671>/Switch1' incorporates:
             *  Constant: '<S671>/NoDbnc'
             */
            rtb_Product17_1 = 0.0F;
        }

        /* End of Switch: '<S671>/Switch3' */

        /* Switch: '<S672>/Switch3' */
        if (rtb_Logical2_nn)
        {
            /* Outputs for Atomic SubSystem: '<S672>/Turn Off Delay Time' */
            /* Switch: '<S672>/Switch1' incorporates:
             *  Constant: '<S879>/Constant Value2'
             *  MinMax: '<S879>/Minimum1'
             *  Sum: '<S879>/Summation1'
             */
            rtb_Product18_1 = fmaxf(0.0F, rtb_Product19_2 - rtb_Switch_pm);

            /* End of Outputs for SubSystem: '<S672>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S672>/Switch1' incorporates:
             *  Constant: '<S672>/NoDbnc'
             */
            rtb_Product18_1 = 0.0F;
        }

        /* End of Switch: '<S672>/Switch3' */

        /* Switch: '<S673>/Switch3' */
        if (rtb_Logical2_lo)
        {
            /* Outputs for Atomic SubSystem: '<S673>/Turn Off Delay Time' */
            /* Switch: '<S673>/Switch1' incorporates:
             *  Constant: '<S885>/Constant Value2'
             *  MinMax: '<S885>/Minimum1'
             *  Sum: '<S885>/Summation1'
             */
            rtb_Switch1_ay = fmaxf(0.0F, rtb_Product2_2 - rtb_Switch_fr);

            /* End of Outputs for SubSystem: '<S673>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S673>/Switch1' incorporates:
             *  Constant: '<S673>/NoDbnc'
             */
            rtb_Switch1_ay = 0.0F;
        }

        /* End of Switch: '<S673>/Switch3' */

        /* Switch: '<S674>/Switch3' */
        if (rtb_Logical2_fy)
        {
            /* Outputs for Atomic SubSystem: '<S674>/Turn Off Delay Time' */
            /* Switch: '<S674>/Switch1' incorporates:
             *  Constant: '<S891>/Constant Value2'
             *  MinMax: '<S891>/Minimum1'
             *  Sum: '<S891>/Summation1'
             */
            rtb_Product19_1 = fmaxf(0.0F, rtb_TmpSignalConversionAtVeABCR -
                                    rtb_Switch_o3);

            /* End of Outputs for SubSystem: '<S674>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S674>/Switch1' incorporates:
             *  Constant: '<S674>/NoDbnc'
             */
            rtb_Product19_1 = 0.0F;
        }

        /* End of Switch: '<S674>/Switch3' */

        /* Switch: '<S675>/Switch3' */
        if (rtb_Logical2_pd)
        {
            /* Outputs for Atomic SubSystem: '<S675>/Turn Off Delay Time' */
            /* Switch: '<S675>/Switch1' incorporates:
             *  Constant: '<S897>/Constant Value2'
             *  MinMax: '<S897>/Minimum1'
             *  Sum: '<S897>/Summation1'
             */
            rtb_Switch1_af = fmaxf(0.0F, rtb_TmpSignalConversionAtVeVSDR -
                                   rtb_Switch_jx);

            /* End of Outputs for SubSystem: '<S675>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S675>/Switch1' incorporates:
             *  Constant: '<S675>/NoDbnc'
             */
            rtb_Switch1_af = 0.0F;
        }

        /* End of Switch: '<S675>/Switch3' */

        /* Switch: '<S676>/Switch3' */
        if (rtb_Logical2_i)
        {
            /* Outputs for Atomic SubSystem: '<S676>/Turn Off Delay Time' */
            /* Switch: '<S676>/Switch1' incorporates:
             *  Constant: '<S903>/Constant Value2'
             *  MinMax: '<S903>/Minimum1'
             *  Sum: '<S903>/Summation1'
             */
            rtb_LeSTCR_P_BattPwrDMinCal_MH = fmaxf(0.0F,
                rtb_LeSTCR_T_BatTempMaxCal_MH - rtb_VeSTCR_Pct_SoftChkBatSOCDel);

            /* End of Outputs for SubSystem: '<S676>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S676>/Switch1' incorporates:
             *  Constant: '<S676>/NoDbnc'
             */
            rtb_LeSTCR_P_BattPwrDMinCal_MH = 0.0F;
        }

        /* End of Switch: '<S676>/Switch3' */

        /* Switch: '<S677>/Switch3' */
        if (rtb_Logical2_c)
        {
            /* Outputs for Atomic SubSystem: '<S677>/Turn Off Delay Time' */
            /* Switch: '<S677>/Switch1' incorporates:
             *  Constant: '<S909>/Constant Value2'
             *  MinMax: '<S909>/Minimum1'
             *  Sum: '<S909>/Summation1'
             */
            rtb_LeSTCR_T_MtrATempMaxCal_MH = fmaxf(0.0F,
                rtb_LeSTCR_T_MtrBTempmMaxCal_MH -
                rtb_LeSTCR_T_TransTempMaxCal_MH);

            /* End of Outputs for SubSystem: '<S677>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S677>/Switch1' incorporates:
             *  Constant: '<S677>/NoDbnc'
             */
            rtb_LeSTCR_T_MtrATempMaxCal_MH = 0.0F;
        }

        /* End of Switch: '<S677>/Switch3' */

        /* Switch: '<S678>/Switch3' */
        if (rtb_Logical2_k)
        {
            /* Outputs for Atomic SubSystem: '<S678>/Turn Off Delay Time' */
            /* Switch: '<S678>/Switch1' incorporates:
             *  Constant: '<S915>/Constant Value2'
             *  MinMax: '<S915>/Minimum1'
             *  Sum: '<S915>/Summation1'
             */
            rtb_LeSTCR_T_TransTempMinCal_MH = fmaxf(0.0F,
                rtb_LeSTCR_T_MtrA_CoolantTempMa -
                rtb_TmpSignalConversionAtVeAATR);

            /* End of Outputs for SubSystem: '<S678>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S678>/Switch1' incorporates:
             *  Constant: '<S678>/NoDbnc'
             */
            rtb_LeSTCR_T_TransTempMinCal_MH = 0.0F;
        }

        /* End of Switch: '<S678>/Switch3' */

        /* Switch: '<S679>/Switch3' */
        if (rtb_Logical2_oj)
        {
            /* Outputs for Atomic SubSystem: '<S679>/Turn Off Delay Time' */
            /* Switch: '<S679>/Switch1' incorporates:
             *  Constant: '<S921>/Constant Value2'
             *  MinMax: '<S921>/Minimum1'
             *  Sum: '<S921>/Summation1'
             */
            rtb_VeSTCR_Pct_SoftChkVehSOCLim = fmaxf(0.0F,
                rtb_VeSTCR_T_SoftChkTransTmpMin -
                rtb_VeSTCR_v_SoftChkVehSpdMaxCa);

            /* End of Outputs for SubSystem: '<S679>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S679>/Switch1' incorporates:
             *  Constant: '<S679>/NoDbnc'
             */
            rtb_VeSTCR_Pct_SoftChkVehSOCLim = 0.0F;
        }

        /* End of Switch: '<S679>/Switch3' */

        /* Switch: '<S680>/Switch3' */
        if (rtb_Logical2_bf)
        {
            /* Outputs for Atomic SubSystem: '<S680>/Turn Off Delay Time' */
            /* Switch: '<S680>/Switch1' incorporates:
             *  Constant: '<S927>/Constant Value2'
             *  MinMax: '<S927>/Minimum1'
             *  Sum: '<S927>/Summation1'
             */
            rtb_VeSTCR_v_SoftChkVehSpdNegMa = fmaxf(0.0F,
                rtb_TmpSignalConversionAtVeAPSR -
                rtb_VeSTCR_T_SoftChkInvrtrATemp);

            /* End of Outputs for SubSystem: '<S680>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S680>/Switch1' incorporates:
             *  Constant: '<S680>/NoDbnc'
             */
            rtb_VeSTCR_v_SoftChkVehSpdNegMa = 0.0F;
        }

        /* End of Switch: '<S680>/Switch3' */

        /* Switch: '<S681>/Switch3' */
        if (rtb_Logical2_i2)
        {
            /* Outputs for Atomic SubSystem: '<S681>/Turn Off Delay Time' */
            /* Switch: '<S681>/Switch1' incorporates:
             *  Constant: '<S933>/Constant Value2'
             *  MinMax: '<S933>/Minimum1'
             *  Sum: '<S933>/Summation1'
             */
            rtb_VeSTCR_T_SoftChkInvrtrBTemp = fmaxf(0.0F, rtb_Switch1_gk -
                rtb_Switch1_g1);

            /* End of Outputs for SubSystem: '<S681>/Turn Off Delay Time' */
        }
        else
        {
            /* Switch: '<S681>/Switch1' incorporates:
             *  Constant: '<S681>/NoDbnc'
             */
            rtb_VeSTCR_T_SoftChkInvrtrBTemp = 0.0F;
        }

        /* End of Switch: '<S681>/Switch3' */
    }

    /* End of Switch: '<S674>/Switch' */

    /* Gain: '<S682>/Gain' incorporates:
     *  Constant: '<S479>/ZeroFfctr'
     */
    VaSTCR_t_SoftChkDbncTm[2] = rtb_Switch1_ay;
    VaSTCR_t_SoftChkDbncTm[3] = rtb_Switch1_af;
    VaSTCR_t_SoftChkDbncTm[4] = rtb_LeSTCR_P_BattPwrDMinCal_MH;
    VaSTCR_t_SoftChkDbncTm[5] = rtb_LeSTCR_T_MtrATempMaxCal_MH;
    VaSTCR_t_SoftChkDbncTm[6] = rtb_LeSTCR_T_TransTempMinCal_MH;
    VaSTCR_t_SoftChkDbncTm[7] = rtb_VeSTCR_Pct_SoftChkVehSOCLim;
    VaSTCR_t_SoftChkDbncTm[8] = rtb_VeSTCR_v_SoftChkVehSpdNegMa;
    VaSTCR_t_SoftChkDbncTm[9] = rtb_VeSTCR_T_SoftChkInvrtrBTemp;
    VaSTCR_t_SoftChkDbncTm[10] = rtb_Switch_i;
    VaSTCR_t_SoftChkDbncTm[11] = rtb_Product10_1;
    VaSTCR_t_SoftChkDbncTm[12] = rtb_Product11_1;
    VaSTCR_t_SoftChkDbncTm[13] = rtb_Product12_1;
    VaSTCR_t_SoftChkDbncTm[14] = rtb_Product13_1;
    VaSTCR_t_SoftChkDbncTm[15] = rtb_Product14_1;
    VaSTCR_t_SoftChkDbncTm[16] = rtb_Product15_1;
    VaSTCR_t_SoftChkDbncTm[17] = rtb_Product16_1;
    VaSTCR_t_SoftChkDbncTm[18] = rtb_Product17_1;
    VaSTCR_t_SoftChkDbncTm[19] = rtb_Product18_1;
    VaSTCR_t_SoftChkDbncTm[20] = rtb_Product19_1;
    VaSTCR_t_SoftChkDbncTm[21] = 0.0F;
    VaSTCR_t_SoftChkDbncTm[22] = 0.0F;

    /* End of Outputs for SubSystem: '<S451>/SoftChkDbnc' */

    /* Outputs for Atomic SubSystem: '<S451>/SlntStrtEngOnDbnc' */
    /* RelationalOperator: '<S478>/Comparison4' incorporates:
     *  Constant: '<S645>/Constant'
     *  SignalConversion generated from: '<S3>/VeSTRR_e_StrtChkMod'
     */
    rtb_Comparison2 = (((uint32)rtb_TmpSignalConversionAtVeSTRR) ==
                       CeSTRR_e_SilentStrtEntry);

    /* Outputs for Atomic SubSystem: '<S478>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S650>/EdgeFalling1' */
    /* Logic: '<S651>/AND' incorporates:
     *  Logic: '<S651>/OR1'
     *  UnitDelay: '<S651>/Unit Delay'
     */
    rtb_Logical2_fy = ((!rtb_Comparison2) && (STCR_ac_DW.UnitDelay_DSTATE_bq));

    /* Update for UnitDelay: '<S651>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_bq = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S650>/EdgeFalling1' */

    /* Switch: '<S650>/Switch' */
    if (rtb_Logical2_fy)
    {
        /* Switch: '<S650>/Switch' incorporates:
         *  Constant: '<S649>/Calib'
         */
        rtb_TmpSignalConversionAtVeABCR = KeSTCR_t_SlntStrtSoftChkDbnc;
    }
    else
    {
        /* Switch: '<S650>/Switch' incorporates:
         *  Constant: '<S646>/Calib'
         *  Constant: '<S650>/Constant Value1'
         *  MinMax: '<S650>/Minimum'
         *  Sum: '<S650>/Summation'
         *  UnitDelay: '<S650>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeABCR = fmaxf
            (STCR_ac_DW.VeSTCR_t_SlntStrtSoftChkDbncTm - HeSTCR_t_MedTEH_dT,
             0.0F);
    }

    /* End of Switch: '<S650>/Switch' */

    /* Update for UnitDelay: '<S650>/Unit Delay' */
    STCR_ac_DW.VeSTCR_t_SlntStrtSoftChkDbncTm = rtb_TmpSignalConversionAtVeABCR;

    /* Switch: '<S647>/Switch1' incorporates:
     *  Constant: '<S463>/Constant'
     *  Constant: '<S478>/Constant Value'
     *  Constant: '<S648>/Calib'
     *  Constant: '<S650>/Constant Value2'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry1'
     *  Logic: '<S451>/AND1'
     *  Logic: '<S478>/Logical12'
     *  Logic: '<S650>/AND'
     *  RelationalOperator: '<S451>/Comparison7'
     *  RelationalOperator: '<S650>/Greater  Than'
     *  Switch: '<S451>/Switch'
     */
    if ((KeSTCR_b_SlntStrtSoftChkDbncEnbl) && (rtb_Comparison2 ||
            (rtb_TmpSignalConversionAtVeABCR > 0.0F)))
    {
        VeSTCR_b_SoftChkEngOnRawDbnc_DS = false;
    }
    else
    {
        if (CeSTRR_e_KeyOffSt == ((uint32)rtb_TmpSignalConversionAtVeST_f))
        {
            /* Outputs for Atomic SubSystem: '<S451>/HVBatt_Chks' */
            /* Outputs for Atomic SubSystem: '<S451>/ECM_TCM_Chk' */
            /* Outputs for Atomic SubSystem: '<S451>/MGUTempChk' */
            /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
            /* Outputs for Atomic SubSystem: '<S481>/DCLoad' */
            /* Outputs for Atomic SubSystem: '<S451>/ThermalSystem_Chks' */
            /* Switch: '<S451>/Switch' incorporates:
             *  Inport: '<S481>/GradeEngOnDsrd'
             *  Inport: '<S949>/DCOvrld_EngOn'
             *  Logic: '<S451>/AND'
             *  Logic: '<S458>/Logical1'
             *  Logic: '<S465>/Logical1'
             *  Logic: '<S474>/Logical3'
             *  Logic: '<S480>/Logical1'
             *  Logic: '<S481>/Logical6'
             */
            rtb_Switch1_bd = (((((((((rtb_LeSTCR_b_AStrtStpAlwBatSOC ||
                rtb_LeSTCR_b_AStrtStpBattPwrTrg) ||
                rtb_LeSTCR_b_AStrtStpBoostCnvrt) ||
                                    rtb_LeSTCR_b_AStrtStpAlwBatTe_b) ||
                                   rtb_LeSTCR_b_AStrtStpAlwBatTe_c) ||
                                  ((rtb_LeSTCR_b_AStrtStpAlwECT ||
                                    rtb_LeSTCR_b_AStrtStpAlwTransTe) ||
                                   rtb_LeSTCR_b_AStrtAlwTransManMd)) ||
                                 ((((rtb_LeSTCR_b_AStrtStpAlwMtrATem ||
                rtb_VeSTCR_b_AStrtTmrEngOnDsrd) ||
                                    rtb_VeSTCR_b_TmrFrstEngOnDsrdFn) ||
                                   rtb_AND_l50) ||
                                  rtb_LeSTCR_b_AStrtStpAlwMtrA_Co)) ||
                                rtb_VeSTCR_b_AStrtStpAlwVldtyCh) ||
                               (((((((((rtb_LeSTCR_b_AStrtTowHaul ||
                rtb_LeSTCR_b_AStrtVehSpd) || rtb_LeSTCR_b_AStrtPrimNo) ||
                rtb_TmpSignalConversionAtDCOvrl) || rtb_LeSTCR_b_AStrtVehSOC) ||
                                    rtb_TmpSignalConversionAtVeHPMR) ||
                                   rtb_TmpSignalConversionAtV2L_En) ||
                                  rtb_VeSTCR_b_StrtRqAWDOff) ||
                                 rtb_VariantMerge_For_Variant_So) || rtb_Gain_d))
                              || (rtb_LeSTCR_b_AStrtStpAlwThrml || rtb_OR1_oc));

            /* End of Outputs for SubSystem: '<S451>/ThermalSystem_Chks' */
            /* End of Outputs for SubSystem: '<S481>/DCLoad' */
            /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */
            /* End of Outputs for SubSystem: '<S451>/MGUTempChk' */
            /* End of Outputs for SubSystem: '<S451>/ECM_TCM_Chk' */
            /* End of Outputs for SubSystem: '<S451>/HVBatt_Chks' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S451>/SoftChkDbnc' */
            /* Switch: '<S451>/Switch' incorporates:
             *  Constant: '<S654>/Constant10'
             *  Constant: '<S655>/Constant15'
             *  Constant: '<S655>/Constant18'
             *  Constant: '<S655>/Constant19'
             *  Constant: '<S655>/Constant24'
             *  Constant: '<S655>/Constant29'
             *  Constant: '<S655>/Constant31'
             *  Constant: '<S778>/Constant'
             *  Constant: '<S784>/Constant'
             *  Constant: '<S789>/Constant'
             *  Constant: '<S792>/Constant'
             *  Constant: '<S798>/Constant'
             *  Constant: '<S800>/Constant'
             *  Constant: '<S804>/Constant'
             *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry17'
             *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry18'
             *  Logic: '<S479>/LogicalOR'
             *  RelationalOperator: '<S778>/Compare'
             *  RelationalOperator: '<S784>/Compare'
             *  RelationalOperator: '<S789>/Compare'
             *  RelationalOperator: '<S792>/Compare'
             *  RelationalOperator: '<S798>/Compare'
             *  RelationalOperator: '<S800>/Compare'
             *  RelationalOperator: '<S804>/Compare'
             *  S-Function (sfix_bitop): '<S654>/Bitwise Logical Operator9'
             *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator14'
             *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator18'
             *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator23'
             *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator27'
             *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator29'
             *  S-Function (sfix_bitop): '<S655>/Bitwise Logical Operator31'
             */
            rtb_Switch1_bd = (((((((((((((((((((((((((((rtb_Switch1_bd ||
                rtb_Switch_ci) || rtb_Switch_ff) || ((VeSTCR_g_AStpInhbtRsn1_DS
                & 512U) > 0U)) || rtb_Switch1_gx) || rtb_Compare_n5) ||
                rtb_Compare_hy) || rtb_Compare_dp) || rtb_Compare_of) ||
                rtb_Compare_n) || rtb_Compare_c) || rtb_Compare_m) ||
                rtb_Compare_ay) || rtb_Compare_d) || rtb_Compare_n4) ||
                rtb_Compare_jh) || rtb_Compare_np) ||
                ((VeSTCR_g_AStpInhbtRsn2_DS & 16384U) > 0U)) || rtb_Compare_ek) ||
                rtb_Compare_f) || ((VeSTCR_g_AStpInhbtRsn2_DS & 2097152U) > 0U))
                                    || ((VeSTCR_g_AStpInhbtRsn2_DS & 8388608U) >
                0U)) || ((VeSTCR_g_AStpInhbtRsn2_DS & 33554432U) > 0U)) ||
                                  ((VeSTCR_g_AStpInhbtRsn2_DS & 67108864U) > 0U))
                                 || rtb_Compare_fc) || rtb_Switch_pt) ||
                               rtb_VeSTCR_b_MildHybridEnbld) ||
                              ((VeSTCR_g_AStpInhbtRsn2_DS & 2147483648U) > 0U));

            /* End of Outputs for SubSystem: '<S451>/SoftChkDbnc' */
        }

        VeSTCR_b_SoftChkEngOnRawDbnc_DS = (rtb_Switch1_bd && rtb_AND2_p);
    }

    /* End of Switch: '<S647>/Switch1' */
    /* End of Outputs for SubSystem: '<S478>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S451>/SlntStrtEngOnDbnc' */

    /* Outputs for Atomic SubSystem: '<S451>/BitSetter03' */
    /* Switch: '<S457>/Switch5' */
    if (rtb_OR1_oc)
    {
        /* Switch: '<S457>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry24'
         *  S-Function (sfix_bitop): '<S607>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 = VeSTCR_g_EVModeInhbtRsn2_DS | 512U;
    }
    else
    {
        /* Switch: '<S457>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry24'
         *  S-Function (sfix_bitop): '<S597>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S597>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S597>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~VeSTCR_g_EVModeInhbtRsn2_DS) | 512U);
    }

    /* End of Switch: '<S457>/Switch5' */

    /* Switch: '<S457>/Switch4' */
    if (rtb_AND_l50)
    {
        /* Switch: '<S457>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S602>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 1048576U;
    }
    else
    {
        /* Switch: '<S457>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S592>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S592>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S592>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 1048576U);
    }

    /* End of Switch: '<S457>/Switch4' */

    /* Switch: '<S457>/Switch1' */
    if (rtb_VeSTCR_b_StrtRqAWDOff)
    {
        /* S-Function (sfix_bitop): '<S451>/Bitwise Logical Operator' incorporates:
         *  S-Function (sfix_bitop): '<S603>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 2097152U;
    }
    else
    {
        /* S-Function (sfix_bitop): '<S451>/Bitwise Logical Operator' incorporates:
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S593>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 2097152U);
    }

    /* End of Switch: '<S457>/Switch1' */

    /* Switch: '<S457>/Switch3' */
    if (rtb_LeSTCR_b_AStrtAlwTransManMd)
    {
        /* Switch: '<S457>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S604>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 = (~((~rtb_Switch5_c1) | 4194304U)) | 8388608U;
    }
    else
    {
        /* Switch: '<S457>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S594>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S596>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~(~((~rtb_Switch5_c1) | 4194304U))) | 8388608U);
    }

    /* End of Switch: '<S457>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
    /* Outputs for Atomic SubSystem: '<S481>/DCLoad' */
    /* Switch: '<S457>/Switch2' incorporates:
     *  Inport: '<S949>/DCOvrld_EngOn'
     */
    if (rtb_TmpSignalConversionAtDCOvrl)
    {
        /* Switch: '<S457>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S605>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 33554432U;
    }
    else
    {
        /* Switch: '<S457>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S595>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S595>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S595>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 33554432U);
    }

    /* End of Switch: '<S457>/Switch2' */
    /* End of Outputs for SubSystem: '<S481>/DCLoad' */
    /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */

    /* Switch: '<S457>/Switch7' */
    if (rtb_Gain_d)
    {
        /* Switch: '<S457>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S608>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 67108864U;
    }
    else
    {
        /* Switch: '<S457>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S598>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S598>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S598>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 67108864U);
    }

    /* End of Switch: '<S457>/Switch7' */

    /* Switch: '<S457>/Switch8' */
    if (rtb_LeSTCR_b_AStrtPrimNo)
    {
        /* Switch: '<S457>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S609>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 268435456U;
    }
    else
    {
        /* Switch: '<S457>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S599>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S599>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S599>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 268435456U);
    }

    /* End of Switch: '<S457>/Switch8' */

    /* Switch: '<S457>/Switch9' */
    if (rtb_LeSTCR_b_BeltTempChk)
    {
        /* Switch: '<S457>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S610>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 536870912U;
    }
    else
    {
        /* Switch: '<S457>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S600>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S600>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S600>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 536870912U);
    }

    /* End of Switch: '<S457>/Switch9' */

    /* Switch: '<S457>/Switch10' incorporates:
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S601>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S601>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S601>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S611>/FixPt Bitwise Operator1'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwBatTe_c)
    {
        VeSTCR_g_EVModeInhbtRsn2_DS = rtb_Switch5_c1 | 2147483648U;
    }
    else
    {
        VeSTCR_g_EVModeInhbtRsn2_DS = ~((~rtb_Switch5_c1) | 2147483648U);
    }

    /* End of Switch: '<S457>/Switch10' */
    /* End of Outputs for SubSystem: '<S451>/BitSetter03' */

    /* Logic: '<S451>/OR7' incorporates:
     *  Logic: '<S451>/Logical37'
     */
    rtb_Switch1_gx = !rtb_VeSTCR_b_MildHybridCndtnsOK;

    /* Outputs for Atomic SubSystem: '<S451>/STCC_EVModeInhbtRsn2_MH' */
    /* Outputs for Atomic SubSystem: '<S451>/MGUTempChk' */
    /* Switch: '<S476>/Switch9' incorporates:
     *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry5'
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry2'
     *  Inport: '<S474>/MtrB_Temp'
     *  Logic: '<S451>/Logical44'
     *  RelationalOperator: '<S451>/Greater Than or Equal 22'
     *  S-Function (sfix_bitop): '<S625>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S625>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S625>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S626>/FixPt Bitwise Operator1'
     */
    if (rtb_Switch1_gx || (tmpRead_2 > rtb_LeSTCR_T_MtrBTempMH))
    {
        VeSTCR_g_EVModeInhbtRsn2_DS = VeSTCR_g_EVModeInhbtRsn2_DS | 524288U;
    }
    else
    {
        VeSTCR_g_EVModeInhbtRsn2_DS = ~((~VeSTCR_g_EVModeInhbtRsn2_DS) | 524288U);
    }

    /* End of Switch: '<S476>/Switch9' */
    /* End of Outputs for SubSystem: '<S451>/MGUTempChk' */
    /* End of Outputs for SubSystem: '<S451>/STCC_EVModeInhbtRsn2_MH' */
    /* End of Outputs for SubSystem: '<S347>/STCC_ComboSoftChk' */

    /* Inport: '<Root>/VeESMR_Pct_CS_SOCSetPt' */
    (void)Rte_Read_VeESMR_Pct_CS_SOCSetPt_Value(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S347>/STCC_ComboSoftChk' */
    /* Outputs for Atomic SubSystem: '<S451>/STCC_EVModeInhbtRsn1_MH' */
    /* Switch: '<S475>/Switch9' incorporates:
     *  DataStoreRead: '<S451>/Data Store Read'
     *  Logic: '<S451>/Logical38'
     *  RelationalOperator: '<S451>/Greater Than or Equal 16'
     */
    if (rtb_Switch1_gx || (VeSTCR_P_PBatLTMaxHH_DS < rtb_LeSTCR_P_BatPwrMH))
    {
        /* Switch: '<S475>/Switch9' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry8'
         *  S-Function (sfix_bitop): '<S621>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 = VeSTCR_g_EVModeInhbtRsn1_DS | 2U;
    }
    else
    {
        /* Switch: '<S475>/Switch9' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry8'
         *  S-Function (sfix_bitop): '<S615>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S615>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S615>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~VeSTCR_g_EVModeInhbtRsn1_DS) | 2U);
    }

    /* End of Switch: '<S475>/Switch9' */

    /* Switch: '<S475>/Switch8' incorporates:
     *  Constant: '<S467>/Calib'
     *  Logic: '<S451>/Logical36'
     *  MinMax: '<S451>/MinMax1'
     *  RelationalOperator: '<S451>/Greater Than or Equal 15'
     *  Sum: '<S451>/Sum2'
     */
    if (rtb_Switch1_gx || (rtb_TmpSignalConversionAtVeBPCR < (fmaxf(tmpRead_0,
            KeSTCR_Pct_TgtSOC_D_Min) + rtb_Switch1_cf)))
    {
        /* Switch: '<S475>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S622>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 8U;
    }
    else
    {
        /* Switch: '<S475>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S616>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S616>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S616>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 8U);
    }

    /* End of Switch: '<S475>/Switch8' */

    /* Outputs for Atomic SubSystem: '<S451>/MGUTempChk' */
    /* Switch: '<S475>/Switch5' incorporates:
     *  Inport: '<S474>/MtrATemp'
     *  Logic: '<S451>/Logical40'
     *  RelationalOperator: '<S451>/Greater Than or Equal 18'
     */
    if (rtb_Switch1_gx || (tmpRead_1 > rtb_LeSTCR_T_MtrATempMH))
    {
        /* Switch: '<S475>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S620>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 16384U;
    }
    else
    {
        /* Switch: '<S475>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S614>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S614>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S614>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 16384U);
    }

    /* End of Switch: '<S475>/Switch5' */
    /* End of Outputs for SubSystem: '<S451>/MGUTempChk' */

    /* Switch: '<S475>/Switch7' incorporates:
     *  Logic: '<S451>/Logical34'
     *  Logic: '<S451>/Logical39'
     *  RelationalOperator: '<S451>/Greater Than or Equal 19'
     *  RelationalOperator: '<S451>/Greater Than or Equal 20'
     */
    if (rtb_Switch1_gx || ((rtb_TmpSignalConversionAtVeBP_f >
                            rtb_LeSTCR_T_BatTempMxMH) ||
                           (rtb_TmpSignalConversionAtVeBP_f <
                            rtb_LeSTCR_T_BatTempMnMH)))
    {
        /* Switch: '<S475>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S623>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 8388608U;
    }
    else
    {
        /* Switch: '<S475>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S617>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S617>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S617>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 8388608U);
    }

    /* End of Switch: '<S475>/Switch7' */

    /* Switch: '<S475>/Switch6' incorporates:
     *  Logic: '<S451>/Logical35'
     *  Logic: '<S451>/Logical41'
     *  RelationalOperator: '<S451>/Greater Than or Equal 17'
     *  RelationalOperator: '<S451>/Greater Than or Equal 21'
     */
    if (rtb_Switch1_gx || ((rtb_TmpSignalConversionAtVeTFTR >
                            rtb_LeSTCR_T_TransTempMxMH) ||
                           (rtb_TmpSignalConversionAtVeTFTR <
                            rtb_LeSTCR_T_TransTempMnMH)))
    {
        /* Switch: '<S475>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S624>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 1073741824U;
    }
    else
    {
        /* Switch: '<S475>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S618>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S618>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S618>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 1073741824U);
    }

    /* End of Switch: '<S475>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S451>/MGUTempChk' */
    /* Switch: '<S475>/Switch1' incorporates:
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry4'
     *  Inport: '<S474>/MtrA_CoolantTemp'
     *  Logic: '<S451>/Logical42'
     *  RelationalOperator: '<S451>/Greater Than or Equal 1'
     *  S-Function (sfix_bitop): '<S613>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S613>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S613>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S619>/FixPt Bitwise Operator1'
     */
    if (rtb_Switch1_gx || (tmpRead_5 > rtb_VeSTCR_T_SoftChkMtrA_Cool_i))
    {
        VeSTCR_g_EVModeInhbtRsn1_DS = rtb_Switch5_c1 | 2097152U;
    }
    else
    {
        VeSTCR_g_EVModeInhbtRsn1_DS = ~((~rtb_Switch5_c1) | 2097152U);
    }

    /* End of Switch: '<S475>/Switch1' */
    /* End of Outputs for SubSystem: '<S451>/MGUTempChk' */
    /* End of Outputs for SubSystem: '<S451>/STCC_EVModeInhbtRsn1_MH' */

    /* Outputs for Atomic SubSystem: '<S451>/BitSetter02' */
    /* Switch: '<S456>/Switch5' */
    if (rtb_LeSTCR_b_AStrtVehSOC)
    {
        /* Switch: '<S456>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry17'
         *  S-Function (sfix_bitop): '<S588>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 = VeSTCR_g_EVModeInhbtRsn1_DS | 128U;
    }
    else
    {
        /* Switch: '<S456>/Switch5' incorporates:
         *  DataStoreRead: '<S451>/Dsr_PID_AStrtEntry17'
         *  S-Function (sfix_bitop): '<S577>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S577>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S577>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~VeSTCR_g_EVModeInhbtRsn1_DS) | 128U);
    }

    /* End of Switch: '<S456>/Switch5' */

    /* Switch: '<S456>/Switch4' */
    if (rtb_TmpSignalConversionAtV2L_En)
    {
        /* Switch: '<S456>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S581>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 512U;
    }
    else
    {
        /* Switch: '<S456>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S570>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S570>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S570>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 512U);
    }

    /* End of Switch: '<S456>/Switch4' */

    /* Switch: '<S456>/Switch1' */
    if (rtb_VeSTCR_b_TmrFrstEngOnDsrdFn)
    {
        /* Switch: '<S456>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S584>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 8192U;
    }
    else
    {
        /* Switch: '<S456>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S573>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S573>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S573>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 8192U);
    }

    /* End of Switch: '<S456>/Switch1' */

    /* Switch: '<S456>/Switch11' */
    if (rtb_LeSTCR_b_AStrtStpAlwECT)
    {
        /* Switch: '<S456>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S582>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 32768U;
    }
    else
    {
        /* Switch: '<S456>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S571>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S571>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S571>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 32768U);
    }

    /* End of Switch: '<S456>/Switch11' */

    /* Outputs for Atomic SubSystem: '<S451>/VehBasedChks' */
    /* Switch: '<S456>/Switch15' incorporates:
     *  Inport: '<S481>/GradeEngOnDsrd'
     */
    if (rtb_TmpSignalConversionAtVeHPMR)
    {
        /* Switch: '<S456>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S591>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 131072U;
    }
    else
    {
        /* Switch: '<S456>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S580>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S580>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S580>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 131072U);
    }

    /* End of Switch: '<S456>/Switch15' */
    /* End of Outputs for SubSystem: '<S451>/VehBasedChks' */

    /* Switch: '<S456>/Switch26' */
    if (rtb_VeSTCR_b_AStrtStpAlwVldtyCh)
    {
        /* Switch: '<S456>/Switch26' incorporates:
         *  S-Function (sfix_bitop): '<S590>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 262144U;
    }
    else
    {
        /* Switch: '<S456>/Switch26' incorporates:
         *  S-Function (sfix_bitop): '<S579>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S579>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S579>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 262144U);
    }

    /* End of Switch: '<S456>/Switch26' */

    /* Switch: '<S456>/Switch7' */
    if (rtb_LeSTCR_b_AStrtVehSpd)
    {
        /* Switch: '<S456>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S589>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 524288U;
    }
    else
    {
        /* Switch: '<S456>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S578>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 524288U);
    }

    /* End of Switch: '<S456>/Switch7' */

    /* Switch: '<S456>/Switch6' */
    if (rtb_LeSTCR_b_AStrtStpAlwMtrA_Co)
    {
        /* Switch: '<S456>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S587>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 2097152U;
    }
    else
    {
        /* Switch: '<S456>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S576>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S576>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S576>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 2097152U);
    }

    /* End of Switch: '<S456>/Switch6' */

    /* Switch: '<S456>/Switch9' */
    if (rtb_LeSTCR_b_AStrtTowHaul)
    {
        /* Switch: '<S456>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S583>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 4194304U;
    }
    else
    {
        /* Switch: '<S456>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S572>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S572>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S572>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 4194304U);
    }

    /* End of Switch: '<S456>/Switch9' */

    /* Switch: '<S456>/Switch3' */
    if (rtb_LeSTCR_b_AStrtStpBoostCnvrt)
    {
        /* Switch: '<S456>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S586>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 134217728U;
    }
    else
    {
        /* Switch: '<S456>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S575>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S575>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S575>/FixPt Bitwise Operator5'
         */
        rtb_Switch5_c1 = ~((~rtb_Switch5_c1) | 134217728U);
    }

    /* End of Switch: '<S456>/Switch3' */

    /* Switch: '<S456>/Switch2' incorporates:
     *  DataStoreWrite: '<S451>/Dsw_PID_AStrtEntry9'
     *  S-Function (sfix_bitop): '<S574>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S574>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S574>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S585>/FixPt Bitwise Operator1'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwThrml)
    {
        VeSTCR_g_EVModeInhbtRsn1_DS = rtb_Switch5_c1 | 268435456U;
    }
    else
    {
        VeSTCR_g_EVModeInhbtRsn1_DS = ~((~rtb_Switch5_c1) | 268435456U);
    }

    /* End of Switch: '<S456>/Switch2' */
    /* End of Outputs for SubSystem: '<S451>/BitSetter02' */

    /* Switch: '<S453>/Switch1' */
    if (rtb_LeSTCR_b_AStrtStpBattPwrTrg)
    {
        /* Switch: '<S453>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S483>/FixPt Bitwise Operator1'
         *  Switch: '<S453>/Switch'
         */
        rtb_Switch5_c1 = (rtb_LeSTCR_b_AStrtStpAlwBatSOC ? 1U : 0U) | 2U;
    }
    else
    {
        /* Switch: '<S453>/Switch1' incorporates:
         *  Switch: '<S453>/Switch'
         */
        rtb_Switch5_c1 = rtb_LeSTCR_b_AStrtStpAlwBatSOC ? 1U : 0U;
    }

    /* End of Switch: '<S453>/Switch1' */

    /* Switch: '<S453>/Switch2' incorporates:
     *  Constant: '<S471>/Calib'
     *  Logic: '<S451>/Logical23'
     *  RelationalOperator: '<S451>/Greater Than or Equal 12'
     */
    if (rtb_LeSTCR_b_AStrtStpAlwBatTemp && (rtb_LeSTCC_v_VehSpdAbs_tmp >
            KeSTCR_v_VehSpdBsdBatMaxTemp))
    {
        /* Switch: '<S453>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S494>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 4U;
    }

    /* End of Switch: '<S453>/Switch2' */

    /* Logic: '<S451>/OR7' incorporates:
     *  Constant: '<S460>/Constant'
     *  Constant: '<S461>/Constant'
     *  RelationalOperator: '<S451>/Equal2'
     *  RelationalOperator: '<S451>/Equal3'
     */
    rtb_Switch1_gx = ((CeTRGR_e_TransRangePark != ((uint32)
                        rtb_TmpSignalConversionAtVeTRGR)) && (((uint32)
                        rtb_TmpSignalConversionAtVeTRGR) !=
                       CeTRGR_e_TransRangeNeutral));

    /* Switch: '<S453>/Switch3' incorporates:
     *  Constant: '<S473>/Calib'
     *  Logic: '<S451>/Logical26'
     *  Logic: '<S451>/Logical47'
     *  RelationalOperator: '<S451>/Greater Than or Equal 13'
     */
    if ((((rtb_LeSTCR_b_AStrtStpAlwMtrATem || rtb_VeSTCR_b_AStrtTmrEngOnDsrd) ||
          rtb_LeSTCR_b_AStrtStpAlwMtrA_Co) && (rtb_LeSTCC_v_VehSpdAbs_tmp >
            KeSTCR_v_VehSpdBsdMtrMaxTemp)) && rtb_Switch1_gx)
    {
        /* Switch: '<S453>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S505>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 8U;
    }

    /* End of Switch: '<S453>/Switch3' */

    /* Switch: '<S453>/Switch4' incorporates:
     *  Constant: '<S472>/Calib'
     *  Logic: '<S451>/Logical28'
     *  Logic: '<S451>/Logical45'
     *  RelationalOperator: '<S451>/Greater Than or Equal 14'
     */
    if ((rtb_Switch1_gx && (rtb_VeSTCR_b_TmrFrstEngOnDsrdFn || rtb_AND_l50)) &&
            (rtb_LeSTCC_v_VehSpdAbs_tmp > KeSTCR_v_VehSpdBsdInvrtrMaxTemp))
    {
        /* Switch: '<S453>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S508>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 16U;
    }

    /* End of Switch: '<S453>/Switch4' */

    /* Switch: '<S453>/Switch12' */
    if (rtb_LeSTCR_b_AStrtVehSpd)
    {
        /* Switch: '<S453>/Switch23' incorporates:
         *  S-Function (sfix_bitop): '<S486>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 32U;
    }

    /* End of Switch: '<S453>/Switch12' */

    /* Switch: '<S453>/Switch6' */
    if (rtb_LeSTCR_b_AStrtStpAlwThrml)
    {
        /* Switch: '<S453>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S510>/FixPt Bitwise Operator1'
         *  Switch: '<S453>/Switch5'
         */
        rtb_Switch5_c1 |= 128U;
    }

    /* End of Switch: '<S453>/Switch6' */

    /* Switch: '<S453>/Switch7' */
    if (rtb_LeSTCR_b_AStrtVehSOC)
    {
        /* Switch: '<S453>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S511>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 256U;
    }

    /* End of Switch: '<S453>/Switch7' */

    /* Switch: '<S453>/Switch8' */
    if (rtb_OR1_oc)
    {
        /* Switch: '<S453>/Switch23' incorporates:
         *  S-Function (sfix_bitop): '<S512>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 512U;
    }

    /* End of Switch: '<S453>/Switch8' */

    /* Switch: '<S453>/Switch9' */
    if (rtb_VariantMerge_For_Variant_So)
    {
        /* Switch: '<S453>/Switch23' incorporates:
         *  S-Function (sfix_bitop): '<S513>/FixPt Bitwise Operator1'
         *  Switch: '<S453>/Switch13'
         */
        rtb_Switch5_c1 |= 8192U;
    }

    /* End of Switch: '<S453>/Switch9' */

    /* Switch: '<S453>/Switch16' */
    if (rtb_VeSTCR_b_StrtRqAWDOff)
    {
        /* Switch: '<S453>/Switch16' incorporates:
         *  S-Function (sfix_bitop): '<S490>/FixPt Bitwise Operator1'
         *  Switch: '<S453>/Switch15'
         */
        rtb_Switch5_c1 |= 65536U;
    }

    /* End of Switch: '<S453>/Switch16' */

    /* Switch: '<S453>/Switch17' */
    if (rtb_LeSTCR_b_AStrtAlwTransManMd)
    {
        /* Switch: '<S453>/Switch17' incorporates:
         *  S-Function (sfix_bitop): '<S491>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 131072U;
    }

    /* End of Switch: '<S453>/Switch17' */

    /* Switch: '<S453>/Switch24' */
    if (rtb_LeSTCR_b_AStrtPrimNo)
    {
        /* Switch: '<S453>/Switch24' incorporates:
         *  S-Function (sfix_bitop): '<S499>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 262144U;
    }

    /* End of Switch: '<S453>/Switch24' */

    /* Switch: '<S453>/Switch25' */
    if (rtb_LeSTCR_b_AStrtStpAlwBatTe_c)
    {
        /* Switch: '<S453>/Switch23' incorporates:
         *  S-Function (sfix_bitop): '<S500>/FixPt Bitwise Operator1'
         */
        rtb_Switch5_c1 |= 524288U;
    }

    /* End of Switch: '<S453>/Switch25' */

    /* VariantMerge generated from: '<S345>/SoftChkEngOnFuelOn' incorporates:
     *  Constant: '<S470>/Calib'
     *  RelationalOperator: '<S451>/Comparison4'
     *  S-Function (sfix_bitop): '<S451>/Bitwise Logical Operator'
     */
    STCR_ac_B.VariantMergeForOutportSoftChkEn = ((KeSTCR_g_AStrtFuelOnRsn &
        rtb_Switch5_c1) > 0U);

    /* Outputs for Atomic SubSystem: '<S451>/Hysteresis' */
    /* Switch: '<S466>/Switch1' incorporates:
     *  Constant: '<S469>/Calib'
     *  RelationalOperator: '<S466>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeTFTR > KeSTCR_T_EngOffSlow_TOT_RSP)
    {
        /* Switch: '<S466>/Switch1' incorporates:
         *  Constant: '<S466>/Constant Value'
         */
        rtb_TmpSignalConversionAtDCOvrl = true;
    }
    else
    {
        /* Switch: '<S466>/Switch1' incorporates:
         *  Constant: '<S468>/Calib'
         *  RelationalOperator: '<S466>/Greater  Than1'
         *  UnitDelay: '<S466>/Unit Delay'
         */
        rtb_TmpSignalConversionAtDCOvrl = ((rtb_TmpSignalConversionAtVeTFTR >=
            KeSTCR_T_EngOffSlow_TOT_LSP) && (STCR_ac_DW.UnitDelay_DSTATE_m0c));
    }

    /* End of Switch: '<S466>/Switch1' */

    /* Update for UnitDelay: '<S466>/Unit Delay' */
    STCR_ac_DW.UnitDelay_DSTATE_m0c = rtb_TmpSignalConversionAtDCOvrl;

    /* End of Outputs for SubSystem: '<S451>/Hysteresis' */

    /* VariantMerge generated from: '<S345>/EngOffAlwdSlow' incorporates:
     *  Logic: '<S451>/Logical7'
     *  Logic: '<S451>/Logical8'
     */
    STCR_ac_B.VariantMergeForOutportEngOffAlw =
        ((((((((!rtb_LeSTCR_b_AStrtStpAlwTransTe) &&
               (!rtb_LeSTCR_b_AStrtStpAlwBatTe_b)) &&
              (!rtb_LeSTCR_b_AStrtStpAlwECT)) &&
             (!rtb_LeSTCR_b_AStrtStpAlwMtrATem)) &&
            (!rtb_VeSTCR_b_AStrtTmrEngOnDsrd)) &&
           (!rtb_VeSTCR_b_TmrFrstEngOnDsrdFn)) && (!rtb_AND_l50)) &&
         rtb_TmpSignalConversionAtDCOvrl);

    /* End of Outputs for SubSystem: '<S347>/STCC_ComboSoftChk' */
    /* End of Outputs for SubSystem: '<S345>/EnblFcn' */
#endif

    /* End of Outputs for SubSystem: '<S343>/VarSS_AutpStrtStpSoftChk' */

    /* Outport: '<Root>/VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb' incorporates:
     *  SignalConversion generated from: '<S3>/BatSOCDelta4mArb'
     */
    (void)Rte_Write_VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb_Value
        (STCR_ac_B.VariantMergeForOutportBatSOCDel);

    /* Merge: '<Root>/EngOffAlwdSlow_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeSTCR_b_EngOffAlwdSlow_write'
     * */
    Rte_IrvWrite_STCR_MedTEH_VeSTCR_b_EngOffAlwdSlow_write_IRV
        (STCR_ac_B.VariantMergeForOutportEngOffAlw);

    /* Merge: '<Root>/SoftChkEngOnFuelOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeSTCR_b_SoftChkEngOnFuelOn_write'
     * */
    Rte_IrvWrite_STCR_MedTEH_VeSTCR_b_SoftChkEngOnFuelOn_write_IRV
        (STCR_ac_B.VariantMergeForOutportSoftChkEn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, STCR_CODE) STCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STCR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1228>/VeSTCR_b_EngDsrdOptToECMFnl_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_EngDsr = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_AStrtUpShftTrg_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_AStrtU = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_OHSREngDsrdFnl_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_OHSREn = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_SoftChkEngOn_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_SoftCh = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_HardChkEngOn_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_HardCh = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_HardChkEngOnForOHSR_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_Hard_h = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_SoftChkEngOnRawDbncFnl_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_Soft_f = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_Pct_AStr = 0.0F;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_EngOffAllwd_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_EngOff = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_b_FuelOn_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_b_FuelOn = false;

    /* SignalConversion generated from: '<S1228>/VeSTCR_g_AStpInhbtRsn1_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_g_AStpIn = 0U;

    /* SignalConversion generated from: '<S1228>/VeSTCR_g_AStpInhbtRsn2_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_g_AStp_o = 0U;

    /* SignalConversion generated from: '<S1228>/VeSTCR_g_EVMdInhbtRsn1_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_g_EVMdIn = 0U;

    /* SignalConversion generated from: '<S1228>/VeSTCR_g_EVMdInhbtRsn2_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_g_EVMd_e = 0U;

    /* SignalConversion generated from: '<S1228>/VeSTCR_P_PBatSTMaxHH_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_P_PBatST = 0.0F;

    /* SignalConversion generated from: '<S1228>/VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft_Out_Init' */
    STCR_ac_B.OutportBufferForVeSTCR_M_MtrAMa = 0.0F;

    /* SignalConversion generated from: '<S1228>/DCOvrld_EngOn_write' */
    STCR_ac_B.OutportBufferForDCOvrld_EngOn_w = false;

    /* SignalConversion generated from: '<S1228>/V2L_EngON_write' */
    STCR_ac_B.OutportBufferForV2L_EngON_write = false;

    /* SignalConversion generated from: '<S1228>/EngOffAlwdHardChk_write' */
    STCR_ac_B.OutportBufferForEngOffAlwdHardC = false;

    /* SignalConversion generated from: '<S1228>/EngOnFuelOn_write' */
    STCR_ac_B.OutportBufferForEngOnFuelOn_wri = false;

    /* SignalConversion generated from: '<S1228>/EngOffAlwdSlow_write' */
    STCR_ac_B.OutportBufferForEngOffAlwdSlow_ = false;

    /* SignalConversion generated from: '<S1228>/SoftChkEngOnFuelOn_write' */
    STCR_ac_B.OutportBufferForSoftChkEngOnFue = false;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft_Out_Init'
     */
    (void)Rte_Write_VeSTCR_M_MtrAMaxCapStrtSpdCrnkShft_Value
        (STCR_ac_B.OutportBufferForVeSTCR_M_MtrAMa);

    /* Outport: '<Root>/VeSTCR_P_PBatSTMaxHH' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_P_PBatSTMaxHH_Out_Init'
     */
    (void)Rte_Write_VeSTCR_P_PBatSTMaxHH_Value
        (STCR_ac_B.OutportBufferForVeSTCR_P_PBatST);

    /* Outport: '<Root>/VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb_Out_Init'
     */
    (void)Rte_Write_VeSTCR_Pct_AStrtBatSOCDeltaFromTgtArb_Value
        (STCR_ac_B.OutportBufferForVeSTCR_Pct_AStr);

    /* Outport: '<Root>/VeSTCR_b_AStrtUpShftTrg' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_AStrtUpShftTrg_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_AStrtUpShftTrg_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_AStrtU);

    /* Outport: '<Root>/VeSTCR_b_EngDsrdOptToECMFnl' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_EngDsrdOptToECMFnl_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_EngDsrdOptToECMFnl_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_EngDsr);

    /* Outport: '<Root>/VeSTCR_b_EngOffAllwd' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_EngOffAllwd_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_EngOffAllwd_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_EngOff);

    /* Outport: '<Root>/VeSTCR_b_FuelOn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_FuelOn_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_FuelOn_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_FuelOn);

    /* Outport: '<Root>/VeSTCR_b_HardChkEngOnForOHSR' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_HardChkEngOnForOHSR_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_HardChkEngOnForOHSR_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_Hard_h);

    /* Outport: '<Root>/VeSTCR_b_HardChkEngOn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_HardChkEngOn_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_HardChkEngOn_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_HardCh);

    /* Outport: '<Root>/VeSTCR_b_OHSREngDsrdFnl' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_OHSREngDsrdFnl_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_OHSREngDsrdFnl_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_OHSREn);

    /* Outport: '<Root>/VeSTCR_b_SoftChkEngOnRawDbncFnl' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_SoftChkEngOnRawDbncFnl_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_SoftChkEngOnRawDbncFnl_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_Soft_f);

    /* Outport: '<Root>/VeSTCR_b_SoftChkEngOn' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_SoftChkEngOn_Out_Init'
     */
    (void)Rte_Write_VeSTCR_b_SoftChkEngOn_Value
        (STCR_ac_B.OutportBufferForVeSTCR_b_SoftCh);

    /* Outport: '<Root>/VeSTCR_g_AStpInhbtRsn1' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_g_AStpInhbtRsn1_Out_Init'
     */
    (void)Rte_Write_VeSTCR_g_AStpInhbtRsn1_Value
        (STCR_ac_B.OutportBufferForVeSTCR_g_AStpIn);

    /* Outport: '<Root>/VeSTCR_g_AStpInhbtRsn2' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_g_AStpInhbtRsn2_Out_Init'
     */
    (void)Rte_Write_VeSTCR_g_AStpInhbtRsn2_Value
        (STCR_ac_B.OutportBufferForVeSTCR_g_AStp_o);

    /* Outport: '<Root>/VeSTCR_g_EVMdInhbtRsn1' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_g_EVMdInhbtRsn1_Out_Init'
     */
    (void)Rte_Write_VeSTCR_g_EVMdInhbtRsn1_Value
        (STCR_ac_B.OutportBufferForVeSTCR_g_EVMdIn);

    /* Outport: '<Root>/VeSTCR_g_EVMdInhbtRsn2' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_g_EVMdInhbtRsn2_Out_Init'
     */
    (void)Rte_Write_VeSTCR_g_EVMdInhbtRsn2_Value
        (STCR_ac_B.OutportBufferForVeSTCR_g_EVMd_e);

    /* Merge: '<Root>/DCOvrld_EngOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_DCOvrld_EngOn_write'
     * */
    Rte_IrvWrite_STCR_PwrOn_VeSTCR_b_DCOvrld_EngOn_write_IRV
        (STCR_ac_B.OutportBufferForDCOvrld_EngOn_w);

    /* Merge: '<Root>/EngOffAlwdHardChk_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_EngOffAlwdHardChk_write'
     * */
    Rte_IrvWrite_STCR_PwrOn_VeSTCR_b_EngOffAlwdHardChk_write_IRV
        (STCR_ac_B.OutportBufferForEngOffAlwdHardC);

    /* Merge: '<Root>/EngOffAlwdSlow_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_EngOffAlwdSlow_write'
     * */
    Rte_IrvWrite_STCR_PwrOn_VeSTCR_b_EngOffAlwdSlow_write_IRV
        (STCR_ac_B.OutportBufferForEngOffAlwdSlow_);

    /* Merge: '<Root>/EngOnFuelOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_EngOnFuelOn_write'
     * */
    Rte_IrvWrite_STCR_PwrOn_VeSTCR_b_EngOnFuelOn_write_IRV
        (STCR_ac_B.OutportBufferForEngOnFuelOn_wri);

    /* Merge: '<Root>/SoftChkEngOnFuelOn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_SoftChkEngOnFuelOn_write'
     * */
    Rte_IrvWrite_STCR_PwrOn_VeSTCR_b_SoftChkEngOnFuelOn_write_IRV
        (STCR_ac_B.OutportBufferForSoftChkEngOnFue);

    /* Merge: '<Root>/V2L_EngON_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeSTCR_b_V2L_EngON_write'
     * */
    Rte_IrvWrite_STCR_PwrOn_VeSTCR_b_V2L_EngON_write_IRV
        (STCR_ac_B.OutportBufferForV2L_EngON_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, STCR_CODE) STCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/STCR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STCC_AutoStrtStpOptmizerChk'
     */
    /* SystemInitialize for Atomic SubSystem: '<S5>/VaSS_OptimzerChk' */
#if !Rte_SysCon_Variant_STCR_DsblFcn

    /* SystemInitialize for Atomic SubSystem: '<S10>/EnblFcn' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/STCR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/STCC_SoftChkConfg'
     */
    /* SystemInitialize for Atomic SubSystem: '<S343>/VarSS_AutpStrtStpSoftChk' */
    /* SystemInitialize for Atomic SubSystem: '<S345>/EnblFcn' */
    /* SystemInitialize for Atomic SubSystem: '<S347>/STCC_ProcessSoftChkCals' */
    /* SystemInitialize for IfAction SubSystem: '<S452>/STCC_AStrtChkCalLoader' */
    /* SystemInitialize for IfAction SubSystem: '<S1005>/DelayedCrankCals' */
    /* SystemInitialize for SignalConversion generated from: '<S1120>/SOCDeltaMin' incorporates:
     *  Constant: '<S1148>/Calib'
     */
    STCR_ac_B.OutportBufferForSOCDeltaMin_p =
        KeSTCR_Pct_SoftChkDeltaFromTgtSOC_DKCrnk;

    /* End of SystemInitialize for SubSystem: '<S1005>/DelayedCrankCals' */

    /* SystemInitialize for IfAction SubSystem: '<S1005>/NormalCals' */
    /* SystemInitialize for SignalConversion generated from: '<S1144>/SOCDeltaMin' incorporates:
     *  Constant: '<S1206>/Calib'
     */
    STCR_ac_B.OutportBufferForSOCDeltaMin = KeSTCR_Pct_SoftChkDeltaFromTgtSOC;

    /* End of SystemInitialize for SubSystem: '<S1005>/NormalCals' */
    /* End of SystemInitialize for SubSystem: '<S452>/STCC_AStrtChkCalLoader' */
    /* End of SystemInitialize for SubSystem: '<S347>/STCC_ProcessSoftChkCals' */

    /* SystemInitialize for Atomic SubSystem: '<S12>/VarSS_UpShift' */
#if Rte_SysCon_Variant_STCR_P2Equipd

    /* SystemInitialize for Atomic SubSystem: '<S18>/UpShft' */
    /* Start for If: '<S36>/If' */
    STCR_ac_DW.If_ActiveSubsystem = -1;

    /* End of SystemInitialize for SubSystem: '<S18>/UpShft' */
#endif

    /* End of SystemInitialize for SubSystem: '<S12>/VarSS_UpShift' */
    /* End of SystemInitialize for SubSystem: '<S345>/EnblFcn' */
    /* End of SystemInitialize for SubSystem: '<S343>/VarSS_AutpStrtStpSoftChk' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<S10>/EnblFcn' */
    /* End of SystemInitialize for SubSystem: '<S5>/VaSS_OptimzerChk' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
