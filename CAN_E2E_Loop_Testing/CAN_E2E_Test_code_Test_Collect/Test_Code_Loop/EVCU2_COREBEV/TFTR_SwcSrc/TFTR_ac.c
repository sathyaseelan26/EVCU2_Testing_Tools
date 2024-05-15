/*
 * File: TFTR_ac.c
 *
 * Code generated for Simulink model 'TFTR_ac'.
 *
 * Model version                  : 9.84
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:28:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TFTR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TFTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_Cf_TransClntPmpVolFlow =
    1000.0F;                           /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(uint16, TFTR_VAR_INIT) KeTFTR_Cnt_DlySmpl_MtrATmp = 20U;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(uint16, TFTR_VAR_INIT) KeTFTR_Cnt_DlySmpl_MtrBTmp = 20U;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_Cnt_TempAvgDivFact_MtrBHeatLossHi = 3.0F;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_Cnt_TempAvgDivideFact =
    2.0F;                              /* Referenced by:
                                        * '<S388>/Calib'
                                        * '<S198>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_Cnt_TempAvgDivideFact_AHeatLossHi = 3.0F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_Cnt_TempAvgDivideFact_MtrAFA_ColdBias = 3.0F;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_Cnt_TempAvgDivideFact_MtrATmpFA = 3.0F;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_Cnt_TempAvgDivideFact_MtrBFA_ColdBias = 3.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_Cnt_TempAvgDivideFact_MtrBTmpFA = 3.0F;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_E_MaxTransClntHeatLoss =
    9.999999E+6F;                      /* Referenced by: '<S356>/Calib' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_I_MtrADCCrntOvrdVal = 0.0F;/* Referenced by: '<S22>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_I_MtrBDCCrntOvrdVal = 0.0F;/* Referenced by: '<S23>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_M_MtrATorqAchvdOvrdVal =
    0.0F;                              /* Referenced by: '<S24>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_M_MtrBTorqAchvdOvrdVal =
    0.0F;                              /* Referenced by: '<S25>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_Pct_AGSPosOvrdVal = 0.0F;/* Referenced by: '<S26>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_Pct_AGS_ON_Max = 85.0F;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_Pct_AGS_ON_Min = 15.0F;/* Referenced by: '<S329>/Calib' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_Pct_RadFanCmdOvrdVal = 0.0F;/* Referenced by: '<S27>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_S_MtrAHeatLoss_ThrmCap =
    0.3F;                              /* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_S_MtrBHeatLoss_ThrmCap =
    0.3F;                              /* Referenced by: '<S248>/Calib' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_AmbTempOvrdVal = 0.0F;/* Referenced by: '<S28>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_AuxPumpTempOvrdVal = 0.0F;/* Referenced by: '<S29>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_ClntPmpInletTmpOvrdVal =
    0.0F;                              /* Referenced by: '<S30>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_DfltTmp_WhenFlt = 25.0F;/* Referenced by:
                                                                      * '<S152>/Calib'
                                                                      * '<S229>/Calib'
                                                                      * '<S189>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_HiNeuralTemp_High_Range =
    110.0F;                            /* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_HiNeuralTemp_Low_range =
    -39.0F;                            /* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4 || Rte_SysCon_Variant_TFTR_5

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_HiTransOilTemp = 138.0F;/* Referenced by:
                                                                      * '<S13>/Calib'
                                                                      * '<S161>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_LoNeuralTemp_High_Range =
    112.0F;                            /* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_LoNeuralTemp_Low_range =
    -41.0F;                            /* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4 || Rte_SysCon_Variant_TFTR_5

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_LoTransOilTemp = 132.0F;/* Referenced by:
                                                                      * '<S14>/Calib'
                                                                      * '<S162>/Calib'
                                                                      */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_MtrATempOvrdVal = 0.0F;/* Referenced by: '<S31>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_MtrBTempOvrdVal = 0.0F;/* Referenced by: '<S32>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_NeuralTmp_Cmp = 30.0F;/* Referenced by: '<S142>/Calib' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_OBCMTemp1OvrdVal = 0.0F;/* Referenced by: '<S33>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_OBC_ClntTmpInOvrdVal =
    0.0F;                              /* Referenced by: '<S34>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_TempEstShift = 1.5F;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_TransOilTempOvrdVal =
    0.0F;                              /* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_6

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_T_TransOilTemp_NF_Dial =
    50.0F;                             /* Referenced by: '<S401>/Calib' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_U_MtrADCVoltOvrdVal = 0.0F;/* Referenced by: '<S35>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_U_MtrBDCVoltOvrdVal = 0.0F;/* Referenced by: '<S36>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AGSPosOvrdEnbl = 0;/* Referenced by: '<S37>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AmbFA_SetTransOilFA = 0;/* Referenced by: '<S230>/Calib' */

#endif

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AmbTempFAOvrdEnbl = 0;/* Referenced by: '<S38>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AmbTempFAOvrdVal = 0;/* Referenced by: '<S39>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AmbTempOvrdEnbl = 0;/* Referenced by: '<S40>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AmbTemp_Cnst = 1;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AuxPmpTemp_Cnst = 1;/* Referenced by: '<S137>/Calib' */

#endif

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AuxPumpTempFAOvrdEnbl = 0;/* Referenced by: '<S41>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AuxPumpTempFAOvrdVal = 0;/* Referenced by: '<S42>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_AuxPumpTempOvrdEnbl = 0;/* Referenced by: '<S43>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_ClntPmpFlowOvrdEnbl = 0;/* Referenced by: '<S44>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_ClntPmpInletTmpOvrdEnbl =
    0;                                 /* Referenced by: '<S45>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrAFA_AHeatLossHi =
    1;                                 /* Referenced by:
                                        * '<S190>/Calib'
                                        * '<S279>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrAFA_ColdBiasChk =
    0;                                 /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrAFA_MtrBFAChk = 1;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrAFA_NormChk = 0;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrAFac = 0;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrA_MechLoss = 1;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrBFA_BHeatLossHi =
    1;                                 /* Referenced by:
                                        * '<S194>/Calib'
                                        * '<S272>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrBFA_ColdBiasChk =
    0;                                 /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrBFA_NormChk = 0;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrBFac = 0;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_EnblMtrB_MechLoss = 1;/* Referenced by: '<S249>/Calib' */

#endif

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_InputSpeedOvrdEnbl = 0;/* Referenced by: '<S46>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrADCCrntOvrdEnbl = 0;/* Referenced by: '<S47>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrADCVoltOvrdEnbl = 0;/* Referenced by: '<S48>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrASpeedOvrdEnbl = 0;/* Referenced by: '<S49>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrATempFAOvrdEnbl = 0;/* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrATempFAOvrdVal = 0;/* Referenced by: '<S51>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrATempOvrdEnbl = 0;/* Referenced by: '<S52>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrATemp_Cnst = 1;/* Referenced by: '<S138>/Calib' */

#endif

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrATorqAchvdOvrdEnbl = 0;/* Referenced by: '<S53>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBDCCrntOvrdEnbl = 0;/* Referenced by: '<S54>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBDCVoltOvrdEnbl = 0;/* Referenced by: '<S55>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBSpeedOvrdEnbl = 0;/* Referenced by: '<S56>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBTempFAOvrdEnbl = 0;/* Referenced by: '<S57>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBTempFAOvrdVal = 0;/* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBTempOvrdEnbl = 0;/* Referenced by: '<S59>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBTemp_Cnst = 1;/* Referenced by: '<S139>/Calib' */

#endif

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_MtrBTorqAchvdOvrdEnbl = 0;/* Referenced by: '<S60>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_NeuralAvg_Cnst = 0;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_NeuralHys_Cnst = 0;/* Referenced by: '<S151>/Calib' */

#endif

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_OBCMTemp1OvrdEnbl = 0;/* Referenced by: '<S61>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_OBC_ClntTmpInOvrdEnbl = 0;/* Referenced by: '<S62>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_OutputSpdOvrdEnbl = 0;/* Referenced by: '<S63>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_RTC_CurrentTimeFAOvrdEnbl
    = 0;                               /* Referenced by: '<S64>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_RTC_CurrentTimeFAOvrdVal =
    0;                                 /* Referenced by: '<S65>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_RTC_SleepTimeOvrdEnbl = 0;/* Referenced by: '<S66>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_RadFanCmdOvrdEnbl = 0;/* Referenced by: '<S67>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_RealTimeOvrdEnbl = 0;/* Referenced by: '<S68>/Calib' */
static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_TOT_ColdBiasSel_Dial = 0;/* Referenced by: '<S69>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_TempWghtdAvgEnbl = 0;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT)
    KeTFTR_b_TempWghtdAvgEnbl_AHeatLossHi = 1;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT)
    KeTFTR_b_TempWghtdAvgEnbl_MtrAFA_ColdBias = 0;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT)
    KeTFTR_b_TempWghtdAvgEnbl_MtrATmpFA = 1;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT)
    KeTFTR_b_TempWghtdAvgEnbl_MtrBFA_ColdBias = 0;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT)
    KeTFTR_b_TempWghtdAvgEnbl_MtrBHeatLossHi = 1;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT)
    KeTFTR_b_TempWghtdAvgEnbl_MtrBTmpFA = 1;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_6

static volatile CONST(boolean, TFTR_VAR_INIT)
    KeTFTR_b_TransOilTempExcess_NF_Dial = 0;/* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_TransOilTempFAOvrdEnbl =
    0;                                 /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_TransOilTempFAOvrdVal = 0;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_TransOilTempOvrdEnbl = 0;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_6

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_TransOilTemp_FA_NF_Dial =
    0;                                 /* Referenced by: '<S403>/Calib' */

#endif

static volatile CONST(boolean, TFTR_VAR_INIT) KeTFTR_b_VehicleSpdOvrdEnbl = 0;/* Referenced by: '<S70>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_dV_ClntPmpFlowOvrdVal =
    0.0F;                              /* Referenced by: '<S71>/Calib' */
static volatile CONST(TeTAPR_e_TransAuxPmp_FalseTrueSNA, TFTR_VAR_INIT)
    KeTFTR_e_TOT_ColdBiasStsDial = CeTAPR_e_TAP_FalseTrueSNA_False;/* Referenced by: '<S72>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_AuxPmpTemp_FltCoeff =
    0.0F;                              /* Referenced by: '<S166>/Calib' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_ClntPump_InletTempFac =
    0.35F;                             /* Referenced by: '<S73>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_Convct_FltCoeff = 0.02F;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_HeatGainTerm_FltCoeff =
    0.85F;                             /* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_MtrAHeatLoss_FltCoeff =
    0.1F;                              /* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_MtrATemp_FltCoeff = 0.0F;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_MtrBHeatLoss_FltCoeff =
    0.1F;                              /* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_MtrBTemp_FltCoeff = 0.0F;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_MtrHeatLoss_FctrMtrAFA =
    0.3F;                              /* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_MtrHeatLoss_FctrMtrBFA =
    0.3F;                              /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_k_MtrHeatLoss_Fctr_AHeatLossHi = 0.3F;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT)
    KeTFTR_k_MtrHeatLoss_Fctr_BHeatLossHi = 0.3F;/* Referenced by: '<S221>/Calib' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_k_OnBrdChrg_ClntTmpInFac =
    0.65F;                             /* Referenced by: '<S74>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_n_InputSpeedOvrdVal = 0.0F;/* Referenced by: '<S75>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_n_MtrASpeedOvrdVal = 0.0F;/* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_n_MtrBSpeedOvrdVal = 0.0F;/* Referenced by: '<S77>/Calib' */
static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_n_OutputSpdOvrdVal = 0.0F;/* Referenced by: '<S78>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_t_InitTempAvg_IV = 7.0F;/* Referenced by: '<S382>/Calib' */

#endif

static volatile CONST(uint32, TFTR_VAR_INIT) KeTFTR_t_RTC_SleepTimeOvrdVal = 0U;/* Referenced by: '<S79>/Calib' */
static volatile CONST(uint32, TFTR_VAR_INIT) KeTFTR_t_RealTimeOvrdVal = 0U;/* Referenced by: '<S80>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_t_dT = 0.05F;/* Referenced by:
                                                                   * '<S383>/Calib'
                                                                   * '<S240>/Calib'
                                                                   * '<S251>/Calib'
                                                                   * '<S320>/Calib'
                                                                   * '<S368>/Calib'
                                                                   * '<S370>/Calib'
                                                                   */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KeTFTR_v_VehicleSpdOvrdVal = 0.0F;/* Referenced by: '<S81>/Calib' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_A_AmbHeatLoss_Area[13] =
{
    0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F, 0.55F,
    0.55F, 0.55F
} ;                                    /* Referenced by: '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_Cf_CoefOfConvection[9] =
{
    10.0F, 21.0F, 32.0F, 43.0F, 54.0F, 65.0F, 76.0F, 87.0F, 100.0F
} ;                                    /* Referenced by: '<S324>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_P_MtrA_HeatLoss_ToClnt[364]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    129.00856F, 328.738037F, 545.509705F, 641.101196F, 625.863098F, 538.7547F,
    609.930847F, 671.14209F, 617.208862F, 529.76709F, 490.469299F, 441.569489F,
    252.738174F, 36.7252235F, 117.414345F, 211.160828F, 126.405357F, 31.1229515F,
    17.3402615F, 1.47289312F, 1.56494951F, 1.65705299F, 71.762764F, 150.439377F,
    287.939F, 440.416473F, 203.403854F, 513.812256F, 804.888245F, 916.38208F,
    1109.03345F, 1306.83789F, 1464.44641F, 1612.8374F, 1741.42566F, 1849.27612F,
    1981.92249F, 2124.51221F, 2211.7627F, 2263.76099F, 2371.27734F, 2476.24219F,
    2583.84912F, 2709.02319F, 2891.8479F, 3103.90088F, 3219.84033F, 3299.75586F,
    3444.72876F, 3601.43872F, 3744.44678F, 3914.24756F, 187.271133F, 442.664063F,
    737.78833F, 920.317871F, 1112.80042F, 1210.02478F, 1373.83215F, 1507.03345F,
    1660.88379F, 1768.61597F, 1951.39063F, 2124.01F, 2279.2832F, 2408.76294F,
    2571.72803F, 2757.97949F, 2947.1875F, 3090.24634F, 3308.23901F, 3487.14429F,
    3672.41284F, 3900.55688F, 4139.60059F, 4346.40918F, 4503.20068F, 4699.40625F,
    176.169312F, 387.576599F, 643.756592F, 797.421143F, 990.308472F, 1111.17761F,
    1309.53809F, 1452.82544F, 1640.86707F, 1756.82483F, 1879.83289F, 2070.68774F,
    2226.55566F, 2392.71655F, 2550.9126F, 2705.80103F, 2898.44165F, 3102.57495F,
    3318.52661F, 3563.09985F, 3738.41431F, 3886.2959F, 4115.24512F, 4326.15625F,
    4540.96387F, 4540.96387F, 206.165817F, 444.562317F, 737.734375F, 911.098083F,
    1135.30066F, 1308.12366F, 1440.96143F, 1538.86047F, 1678.98364F, 1805.97961F,
    1879.31091F, 1918.74011F, 2019.62463F, 2110.29785F, 2233.35693F, 2349.57324F,
    2468.05908F, 2594.02612F, 2769.93384F, 2981.44482F, 3111.44116F, 3292.59351F,
    3487.47095F, 3669.17896F, 3870.11255F, 3870.11255F, 223.542206F, 461.566132F,
    703.763672F, 789.534302F, 878.657F, 935.180481F, 1092.40576F, 1230.76697F,
    1383.94165F, 1516.70081F, 1685.96289F, 1905.83325F, 2045.17017F, 2219.48657F,
    2388.44092F, 2563.9248F, 2749.07861F, 2988.12622F, 3166.0957F, 3360.24585F,
    3490.4043F, 3715.32861F, 3947.9043F, 4240.00781F, 4470.93262F, 4470.93262F,
    202.759918F, 370.638214F, 540.396484F, 683.332275F, 748.282715F, 878.674316F,
    977.099365F, 1061.06567F, 1118.69F, 1183.34961F, 1229.76282F, 1251.21191F,
    1256.14954F, 1311.08752F, 1343.68445F, 1374.22253F, 1393.62183F, 1540.58154F,
    1689.67957F, 1920.27771F, 2150.86743F, 2385.33594F, 2683.12915F, 2988.97925F,
    2988.97925F, 2988.97925F, 250.313889F, 465.739502F, 378.213715F, 454.410126F,
    470.637238F, 308.896362F, 48.0695076F, 192.956375F, 377.842285F, 507.319153F,
    660.621155F, 805.777527F, 973.551575F, 1164.59961F, 1350.48877F, 1665.98596F,
    1831.93225F, 2133.70166F, 2434.11768F, 2708.91528F, 2992.24023F, 2992.24023F,
    2992.24023F, 2992.24023F, 2992.24023F, 2992.24023F, 267.286865F, 485.174103F,
    254.878586F, 222.011444F, 98.1720123F, 120.720505F, 145.408798F, 283.987488F,
    449.517029F, 603.222107F, 787.668579F, 988.074829F, 1222.44519F, 1453.61133F,
    1698.39795F, 1845.03162F, 2003.41211F, 2330.76318F, 2567.48291F, 2567.48291F,
    2567.48291F, 2567.48291F, 2567.48291F, 2567.48291F, 2567.48291F, 2567.48291F,
    273.06076F, 462.697754F, 56.3200874F, 68.5289383F, 75.3435135F, 214.192139F,
    397.218567F, 560.163513F, 731.343628F, 933.240723F, 1173.75696F, 1369.9657F,
    1589.64832F, 1813.92078F, 2049.0376F, 2292.34277F, 2292.34277F, 2292.34277F,
    2292.34277F, 2292.34277F, 2292.34277F, 2292.34277F, 2292.34277F, 2292.34277F,
    2292.34277F, 2292.34277F, 276.034821F, 447.776093F, 50.3044167F, 126.062904F,
    234.697556F, 383.354645F, 570.474365F, 761.736145F, 983.896912F, 1235.29663F,
    1510.32275F, 1701.98254F, 1899.84387F, 2144.62354F, 2374.37061F, 2374.37061F,
    2374.37061F, 2374.37061F, 2374.37061F, 2374.37061F, 2374.37061F, 2374.37061F,
    2374.37061F, 2374.37061F, 2374.37061F, 2374.37061F, 316.631683F, 505.859192F,
    106.249916F, 213.833298F, 370.218384F, 520.466553F, 713.305664F, 944.773865F,
    1240.48584F, 1447.99609F, 1693.96558F, 1948.87512F, 2268.38647F, 2268.38647F,
    2268.38647F, 2268.38647F, 2268.38647F, 2268.38647F, 2268.38647F, 2268.38647F,
    2268.38647F, 2268.38647F, 2268.38647F, 2268.38647F, 2268.38647F, 2268.38647F,
    319.833191F, 520.436523F, 196.448822F, 310.797699F, 449.556488F, 631.018921F,
    840.74762F, 1063.97546F, 1311.12109F, 1572.26184F, 1819.83496F, 2047.92358F,
    2047.92358F, 2047.92358F, 2047.92358F, 2047.92358F, 2047.92358F, 2047.92358F,
    2047.92358F, 2047.92358F, 2047.92358F, 2047.92358F, 2047.92358F, 2047.92358F,
    2047.92358F, 2047.92358F
} ;                                    /* Referenced by: '<S242>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_P_MtrB_HeatLoss_ToClnt[434]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 69.0168915F, 350.371094F, 700.742188F,
    825.619629F, 851.070618F, 781.125061F, 641.575562F, 702.636536F, 751.710327F,
    676.408936F, 573.08844F, 526.764893F, 464.182648F, 263.717163F, 38.1982422F,
    120.785973F, 217.20755F, 130.051102F, 31.7590752F, 17.5994167F, 1.48353016F,
    1.56811833F, 1.65384471F, 71.458313F, 149.931351F, 287.208588F, 441.536591F,
    629.364563F, 837.958618F, 1010.54871F, 1197.995F, 109.704353F, 551.936462F,
    1103.87292F, 1269.92505F, 1256.59912F, 1445.3595F, 1589.45386F, 1738.23767F,
    1857.13708F, 1981.8551F, 2084.31763F, 2218.80957F, 2340.48755F, 2407.22119F,
    2455.70215F, 2553.90234F, 2642.19653F, 2762.36035F, 2876.98F, 3070.05835F,
    3266.88696F, 3369.30518F, 3465.72437F, 3612.52612F, 3758.33105F, 3897.38159F,
    4034.94312F, 4322.17432F, 4623.01074F, 4818.45117F, 5015.98145F, 124.920891F,
    590.546631F, 1181.09326F, 1490.16821F, 1642.677F, 1831.92371F, 1943.03296F,
    2132.53687F, 2286.52344F, 2469.94F, 2631.66577F, 2875.69751F, 3116.26318F,
    3278.62109F, 3426.49927F, 3647.85254F, 3866.02686F, 4076.61597F, 4283.57324F,
    4555.85742F, 4831.97705F, 5085.03467F, 5339.24561F, 5605.07129F, 5873.05957F,
    6143.82666F, 6416.81396F, 6726.43506F, 7041.16F, 7321.78F, 7604.65576F,
    125.801659F, 554.998352F, 1109.9967F, 1426.81226F, 1596.01782F, 1827.13525F,
    1996.49292F, 2247.08057F, 2475.03589F, 2691.03174F, 2886.99658F, 3103.16968F,
    3306.49268F, 3567.66895F, 3826.59692F, 4043.31274F, 4252.46826F, 4536.97607F,
    4823.69922F, 5150.72656F, 5484.23828F, 5736.8623F, 5987.3667F, 6290.35693F,
    6596.15869F, 6909.80029F, 7226.83887F, 7524.92432F, 7824.57227F, 8190.30762F,
    8562.56152F, 166.612534F, 718.139526F, 1436.27905F, 1803.91589F, 1974.17761F,
    2265.31738F, 2481.34375F, 2667.21216F, 2792.53369F, 2992.85645F, 3162.04858F,
    3253.87671F, 3306.73975F, 3448.40942F, 3570.57324F, 3751.73291F, 3923.3811F,
    4123.21436F, 4317.49121F, 4586.95215F, 4859.58154F, 5136.01F, 5415.75684F,
    5698.25439F, 5984.00439F, 6298.56836F, 6618.70313F, 6939.27295F, 7265.15918F,
    7265.15918F, 7265.15918F, 181.254272F, 749.651611F, 1499.30322F, 1761.33948F,
    1751.29297F, 1851.8457F, 1829.88245F, 2061.45166F, 2272.73657F, 2515.18F,
    2748.72925F, 3059.90967F, 3377.79785F, 3645.06128F, 3910.09863F, 4198.45068F,
    4488.01123F, 4834.49951F, 5189.21094F, 5496.37451F, 5805.60791F, 6273.02344F,
    6759.13721F, 6759.13721F, 6759.13721F, 6759.13721F, 6759.13721F, 6759.13721F,
    6759.13721F, 6759.13721F, 6759.13721F, 160.581253F, 589.677551F, 1179.3551F,
    1349.45239F, 1270.02429F, 1386.00183F, 1426.69299F, 1454.6156F, 1426.16602F,
    1463.25854F, 1470.26489F, 1744.02454F, 2042.07874F, 2351.11572F, 2682.33765F,
    3095.52173F, 3540.70288F, 3540.70288F, 3540.70288F, 3540.70288F, 3540.70288F,
    3540.70288F, 3540.70288F, 3540.70288F, 3540.70288F, 3540.70288F, 3540.70288F,
    3540.70288F, 3540.70288F, 3540.70288F, 3540.70288F, 168.404F, 561.33667F,
    632.418945F, 607.701782F, 55.4248581F, 409.148926F, 685.227234F, 987.262634F,
    1339.18066F, 1731.17957F, 1997.81873F, 2376.25244F, 2837.28857F, 3223.3042F,
    3672.854F, 3672.854F, 3672.854F, 3672.854F, 3672.854F, 3672.854F, 3672.854F,
    3672.854F, 3672.854F, 3672.854F, 3672.854F, 3672.854F, 3672.854F, 3672.854F,
    3672.854F, 3672.854F, 3672.854F, 148.555588F, 407.188171F, 436.028503F,
    127.703415F, 169.277084F, 494.620697F, 836.504456F, 1255.3418F, 1733.81787F,
    2007.71631F, 2488.927F, 2488.927F, 2488.927F, 2488.927F, 2488.927F,
    2488.927F, 2488.927F, 2488.927F, 2488.927F, 2488.927F, 2488.927F, 2488.927F,
    2488.927F, 2488.927F, 2488.927F, 2488.927F, 2488.927F, 2488.927F, 2488.927F,
    2488.927F, 2488.927F, 96.3936539F, 64.6965332F, 98.4028625F, 100.015327F,
    476.281525F, 827.043518F, 1259.08972F, 1678.02832F, 2111.12744F, 2604.71094F,
    3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F,
    3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F,
    3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F, 3203.27832F,
    3203.27832F, 3203.27832F, 3203.27832F, 107.730469F, 46.1720581F, 88.5101547F,
    322.600403F, 688.506958F, 1126.16528F, 1657.69653F, 2018.71509F, 2460.94604F,
    2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F,
    2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F,
    2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F,
    2460.94604F, 2460.94604F, 2460.94604F, 2460.94604F, 115.096336F, 26.1651688F,
    192.739822F, 504.062653F, 889.464539F, 1427.65698F, 1859.55383F, 2462.21606F,
    2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F,
    2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F,
    2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F,
    2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 2462.21606F, 115.413155F,
    33.3453102F, 344.85907F, 648.777466F, 1095.05725F, 1576.51721F, 2143.66211F,
    2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F,
    2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F,
    2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F,
    2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F, 2143.66211F
} ;                                    /* Referenced by: '<S253>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_P_TransInternals_HeatLoss
    [25] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 30.7403126F, 74.7613678F, 266.124451F,
    533.728271F, 533.728271F, 257.936462F, 243.898163F, 301.731873F, 492.408173F,
    492.408173F, 674.065613F, 579.18927F, 517.064636F, 601.677917F, 601.677917F,
    1228.23511F, 1063.4032F, 911.645203F, 891.836121F, 891.836121F
} ;                                    /* Referenced by: '<S396>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_Pct_MtrA_InvEfficiency[364]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.7257F, 0.7774F, 0.8036F, 0.7903F, 0.8108F, 0.8161F, 0.8065F, 0.8151F,
    0.8213F, 0.8284F, 0.8181F, 0.8189F, 0.8164F, 0.8105F, 0.821F, 0.824F,
    0.8164F, 0.8211F, 0.8201F, 0.8166F, 0.8193F, 0.8158F, 0.8164F, 0.8167F,
    0.8181F, 0.0F, 0.8295F, 0.8544F, 0.8874F, 0.9027F, 0.8909F, 0.8862F, 0.8922F,
    0.8991F, 0.8957F, 0.8925F, 0.8897F, 0.8907F, 0.8966F, 0.8958F, 0.8956F,
    0.8911F, 0.8886F, 0.8927F, 0.8909F, 0.8916F, 0.8906F, 0.882F, 0.8823F,
    0.8837F, 0.8812F, 0.0F, 0.8423F, 0.9129F, 0.9032F, 0.9216F, 0.9328F, 0.9296F,
    0.9264F, 0.9244F, 0.9308F, 0.9272F, 0.9318F, 0.9322F, 0.9284F, 0.9278F,
    0.9247F, 0.9221F, 0.9262F, 0.9233F, 0.9229F, 0.9201F, 0.9183F, 0.9165F,
    0.9137F, 0.9128F, 0.9111F, 0.0F, 0.9199F, 0.9142F, 0.9348F, 0.9209F, 0.9337F,
    0.9401F, 0.9422F, 0.9462F, 0.9423F, 0.9416F, 0.9414F, 0.9436F, 0.9415F,
    0.9432F, 0.9384F, 0.9411F, 0.9405F, 0.9414F, 0.9393F, 0.9363F, 0.9371F,
    0.9347F, 0.9346F, 0.931F, 0.9326F, 0.0F, 0.938F, 0.9508F, 0.9481F, 0.9504F,
    0.9608F, 0.9529F, 0.9552F, 0.9494F, 0.9524F, 0.9561F, 0.9511F, 0.9545F,
    0.952F, 0.952F, 0.9524F, 0.9515F, 0.9519F, 0.9483F, 0.9471F, 0.9476F,
    0.9464F, 0.9456F, 0.946F, 0.9424F, 0.9465F, 0.0F, 0.9344F, 0.9445F, 0.9507F,
    0.9496F, 0.9552F, 0.9561F, 0.9569F, 0.959F, 0.9658F, 0.9654F, 0.965F,
    0.9608F, 0.9606F, 0.959F, 0.958F, 0.9591F, 0.959F, 0.9568F, 0.9549F, 0.9548F,
    0.9534F, 0.952F, 0.9541F, 0.9519F, 0.9523F, 0.0F, 0.9511F, 0.963F, 0.9614F,
    0.9621F, 0.9667F, 0.9664F, 0.9686F, 0.9682F, 0.9683F, 0.9672F, 0.9655F,
    0.966F, 0.966F, 0.9663F, 0.9657F, 0.9664F, 0.9667F, 0.9672F, 0.9667F, 0.966F,
    0.9644F, 0.9646F, 0.9642F, 0.9623F, 0.0F, 0.0F, 0.9515F, 0.9602F, 0.963F,
    0.9633F, 0.9703F, 0.97F, 0.97F, 0.9712F, 0.9732F, 0.9698F, 0.9726F, 0.9723F,
    0.973F, 0.9745F, 0.9726F, 0.9732F, 0.9745F, 0.9715F, 0.972F, 0.9745F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9635F, 0.973F, 0.973F, 0.9713F, 0.9733F,
    0.9762F, 0.977F, 0.9773F, 0.9768F, 0.9756F, 0.979F, 0.9772F, 0.9771F,
    0.9775F, 0.9756F, 0.97F, 0.9749F, 0.9695F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.9547F, 0.9745F, 0.9778F, 0.9741F, 0.979F, 0.9769F,
    0.9797F, 0.9796F, 0.98F, 0.9806F, 0.9793F, 0.9771F, 0.9745F, 0.9715F,
    0.9709F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.9654F, 0.9778F, 0.9758F, 0.9808F, 0.9794F, 0.981F, 0.9808F, 0.9794F,
    0.9798F, 0.978F, 0.9765F, 0.9742F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9772F, 0.9702F, 0.9749F, 0.9828F,
    0.9811F, 0.9817F, 0.9845F, 0.9813F, 0.9789F, 0.9797F, 0.976F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.9769F, 0.978F, 0.9775F, 0.9799F, 0.9818F, 0.9814F, 0.9823F, 0.981F, 0.981F,
    0.9747F, 0.9751F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S353>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_Pct_MtrB_InvEfficiency[462]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.6948F, 0.7137F, 0.7331F,
    0.7525F, 0.7619F, 0.7712F, 0.7789F, 0.7865F, 0.7956F, 0.8046F, 0.8254F,
    0.8462F, 0.8479F, 0.8496F, 0.8556F, 0.8617F, 0.8642F, 0.8667F, 0.8699F,
    0.8731F, 0.8753F, 0.8775F, 0.879F, 0.8805F, 0.8813F, 0.8821F, 0.883F,
    0.8839F, 0.8836F, 0.8834F, 0.8838F, 0.8842F, 0.0F, 0.9049F, 0.8983F, 0.8919F,
    0.8854F, 0.8907F, 0.896F, 0.8961F, 0.8962F, 0.9008F, 0.9054F, 0.9064F,
    0.9074F, 0.9083F, 0.9091F, 0.9109F, 0.9128F, 0.9135F, 0.9143F, 0.9149F,
    0.9156F, 0.9162F, 0.9168F, 0.9173F, 0.9178F, 0.9175F, 0.9173F, 0.9169F,
    0.9164F, 0.9162F, 0.916F, 0.9159F, 0.9158F, 0.0F, 0.9639F, 0.9586F, 0.9533F,
    0.948F, 0.9476F, 0.9472F, 0.9477F, 0.9482F, 0.9481F, 0.9481F, 0.9489F,
    0.9497F, 0.9497F, 0.9497F, 0.9499F, 0.9501F, 0.9496F, 0.9492F, 0.9492F,
    0.9492F, 0.9491F, 0.9489F, 0.9486F, 0.9482F, 0.9479F, 0.9477F, 0.9474F,
    0.9472F, 0.9467F, 0.9462F, 0.9456F, 0.9451F, 0.0F, 0.9836F, 0.9766F, 0.9697F,
    0.9627F, 0.9628F, 0.9629F, 0.9626F, 0.9622F, 0.9621F, 0.9621F, 0.9622F,
    0.9623F, 0.9619F, 0.9615F, 0.9614F, 0.9614F, 0.9615F, 0.9616F, 0.9614F,
    0.9613F, 0.9613F, 0.9614F, 0.9613F, 0.9313F, 0.961F, 0.9607F, 0.963F,
    0.9652F, 0.9654F, 0.9656F, 0.9654F, 0.9653F, 0.0F, 0.9869F, 0.9814F, 0.976F,
    0.9705F, 0.9701F, 0.9696F, 0.969F, 0.9683F, 0.9682F, 0.9681F, 0.9683F,
    0.9685F, 0.9693F, 0.9702F, 0.9704F, 0.9705F, 0.971F, 0.9715F, 0.9713F,
    0.9712F, 0.9692F, 0.9673F, 0.9671F, 0.967F, 0.9671F, 0.9671F, 0.967F, 0.967F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9886F, 0.9813F, 0.9741F, 0.9669F, 0.9686F,
    0.9702F, 0.9711F, 0.9721F, 0.9727F, 0.9733F, 0.9733F, 0.9732F, 0.9733F,
    0.9734F, 0.9734F, 0.9735F, 0.9732F, 0.9728F, 0.971F, 0.9691F, 0.969F,
    0.9689F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.9726F, 0.9717F, 0.9708F, 0.9699F, 0.9718F, 0.9738F, 0.9745F, 0.9752F,
    0.9749F, 0.9747F, 0.9746F, 0.9745F, 0.9742F, 0.974F, 0.9728F, 0.9716F,
    0.9714F, 0.9713F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9722F, 0.9722F, 0.9723F, 0.9724F, 0.9736F,
    0.9749F, 0.9751F, 0.9754F, 0.9752F, 0.975F, 0.9748F, 0.9746F, 0.9738F,
    0.9731F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9523F, 0.9601F, 0.9662F,
    0.9697F, 0.9717F, 0.9729F, 0.9732F, 0.9731F, 0.9736F, 0.9734F, 0.9731F,
    0.9729F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9597F, 0.9625F,
    0.968F, 0.9708F, 0.9723F, 0.9731F, 0.9733F, 0.9735F, 0.9736F, 0.9727F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9434F, 0.9623F,
    0.9675F, 0.9707F, 0.9719F, 0.9734F, 0.9736F, 0.9739F, 0.9741F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.8908F, 0.9622F,
    0.9685F, 0.9713F, 0.9726F, 0.9734F, 0.9738F, 0.9737F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.9241F, 0.9632F, 0.9691F,
    0.9715F, 0.9733F, 0.973F, 0.9747F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S354>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_S_TransClntSpecificHeat[19]
    =
{
    3285.5F, 3318.5F, 3335.0F, 3351.5F, 3368.0F, 3384.5F, 3401.0F, 3417.5F,
    3434.0F, 3450.5F, 3467.0F, 3483.5F, 3500.0F, 3516.5F, 3533.0F, 3549.5F,
    3566.0F, 3582.5F, 3599.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_S_TransOil_HeatCapacity[6] =
{
    4720.0F, 5015.0F, 5605.0F, 6195.0F, 6490.0F, 6785.0F
} ;                                    /* Referenced by: '<S372>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_dV_RadFanOFF_CFM[45] =
{
    123.0F, 312.0F, 412.0F, 721.0F, 947.0F, 1173.0F, 1313.0F, 1673.0F, 2159.0F,
    123.0F, 312.0F, 412.0F, 721.0F, 947.0F, 1173.0F, 1313.0F, 1673.0F, 2159.0F,
    123.0F, 312.0F, 412.0F, 721.0F, 947.0F, 1173.0F, 1313.0F, 1673.0F, 2159.0F,
    123.0F, 312.0F, 412.0F, 721.0F, 947.0F, 1173.0F, 1313.0F, 1673.0F, 2159.0F,
    123.0F, 312.0F, 412.0F, 721.0F, 947.0F, 1173.0F, 1313.0F, 1673.0F, 2159.0F
} ;                                    /* Referenced by: '<S331>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_dV_RadFanON_CFM[20] =
{
    0.0F, 156.0F, 1007.0F, 1908.0F, 2796.0F, 433.0F, 901.0F, 1619.0F, 2403.0F,
    3218.0F, 1210.0F, 1533.0F, 2107.0F, 2797.0F, 3538.0F, 2069.0F, 2335.0F,
    2781.0F, 3343.0F, 4011.0F
} ;                                    /* Referenced by: '<S333>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_AmbientTempFac[119] =
{
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F
} ;                                    /* Referenced by:
                                        * '<S197>/Vector'
                                        * '<S389>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_AuxPmp_TempFact[18] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S176>/Vector'
                                        * '<S390>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_MtrA_HeatTrnsfCoeff[5] =
{
    26.0F, 32.0F, 45.0F, 60.0F, 60.0F
} ;                                    /* Referenced by: '<S336>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_MtrA_TempFact[18] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S177>/Vector'
                                        * '<S391>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_MtrB_HeatTrnsfCoeff[8] =
{
    0.0F, 14.0F, 18.0F, 22.0F, 26.0F, 38.0F, 52.0F, 70.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_MtrB_TempFact[17] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S178>/Vector'
                                        * '<S392>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_TransClntPredFactor[18] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.15F, 0.2F, 0.25F, 0.3F,
    0.35F, 0.4F, 0.45F, 0.5F, 0.55F, 0.8F
} ;                                    /* Referenced by: '<S357>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_k_TransOil_CoolDwnFrac[6] =
{
    0.1F, 0.3F, 0.5F, 0.7F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S384>/Vector' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_n_RadFan_Spd[15] =
{
    675.0F, 820.0F, 964.0F, 1109.0F, 1254.0F, 1398.0F, 1543.0F, 1688.0F, 1832.0F,
    1977.0F, 2121.0F, 2266.0F, 2411.0F, 2555.0F, 2700.0F
} ;                                    /* Referenced by: '<S82>/Vector' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KtTFTR_rho_TransClntDensity[19] =
{
    1086.94F, 1082.4104F, 1080.01013F, 1077.52087F, 1074.94434F, 1072.28149F,
    1069.53406F, 1066.70313F, 1063.79028F, 1060.79712F, 1057.72485F, 1054.57507F,
    1051.34949F, 1048.04956F, 1044.67676F, 1041.23279F, 1037.71936F, 1034.13794F,
    1030.49036F
} ;                                    /* Referenced by: '<S347>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_A_AmbHeatLoss_Area[13] =
{
    -20.0F, 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F, 120.0F
} ;                                    /* Referenced by: '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_Cf_CoefOfConvection[9] =
{
    0.0F, 901.0F, 1210.0F, 1619.0F, 2069.0F, 2335.0F, 2781.0F, 3343.0F, 4011.0F
} ;                                    /* Referenced by: '<S324>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_P_MtrA_HeatLoss_ToClnt[26] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    55.0F, 60.0F, 65.0F, 70.0F, 75.0F, 80.0F, 85.0F, 90.0F, 95.0F, 100.0F,
    105.0F, 110.0F, 115.0F, 120.0F, 126.0F
} ;                                    /* Referenced by: '<S242>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_P_MtrB_HeatLoss_ToClnt[31] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F, 170.0F, 180.0F, 190.0F,
    200.0F, 210.0F, 220.0F, 230.0F, 240.0F, 250.0F, 260.0F, 270.0F, 280.0F,
    290.0F, 301.0F
} ;                                    /* Referenced by: '<S253>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_P_TransInternals_HeatLoss[5]
    =
{
    0.0F, 398.0F, 1191.0F, 1984.0F, 2778.0F
} ;                                    /* Referenced by: '<S396>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_Pct_MtrA_InvEfficiency[26] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    55.0F, 60.0F, 65.0F, 70.0F, 75.0F, 80.0F, 85.0F, 90.0F, 95.0F, 100.0F,
    105.0F, 111.0F, 115.0F, 121.0F, 126.0F
} ;                                    /* Referenced by: '<S353>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_Pct_MtrB_InvEfficiency[33] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F, 170.0F, 180.0F, 190.0F,
    200.0F, 210.0F, 220.0F, 230.0F, 240.0F, 250.0F, 260.0F, 270.0F, 281.0F,
    290.0F, 301.0F, 310.0F, 321.0F
} ;                                    /* Referenced by: '<S354>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_S_TransClntSpecificHeat[19]
    =
{
    -10.0F, 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 55.0F, 60.0F, 65.0F, 70.0F, 75.0F, 80.0F, 85.0F
} ;                                    /* Referenced by: '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_S_TransOil_HeatCapacity[6] =
{
    -20.0F, 0.0F, 40.0F, 100.0F, 130.0F, 160.0F
} ;                                    /* Referenced by: '<S372>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_dV_RadFanOFF_CFM[9] =
{
    10.0F, 20.0F, 25.0F, 40.0F, 49.0F, 59.0F, 65.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S331>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_dV_RadFanON_CFM[5] =
{
    0.0F, 20.0F, 50.0F, 75.0F, 100.0F
} ;                                    /* Referenced by: '<S333>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_AmbientTempFac[17] =
{
    -30.0F, -20.0F, -9.0F, 10.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 85.0F,
    90.0F, 100.0F, 110.0F, 125.0F, 130.0F, 142.0F, 150.0F
} ;                                    /* Referenced by:
                                        * '<S197>/Vector'
                                        * '<S389>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_AuxPmp_TempFact[18] =
{
    -40.0F, -35.0F, -25.0F, -10.0F, 0.0F, 10.0F, 25.0F, 35.0F, 42.0F, 55.0F,
    60.0F, 70.0F, 80.0F, 90.0F, 110.0F, 120.0F, 150.0F, 180.0F
} ;                                    /* Referenced by:
                                        * '<S176>/Vector'
                                        * '<S390>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_MtrA_HeatTrnsfCoeff[5] =
{
    1000.0F, 3000.0F, 5000.0F, 7000.0F, 9100.0F
} ;                                    /* Referenced by: '<S336>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_MtrA_TempFact[18] =
{
    -40.0F, -35.0F, -25.0F, -10.0F, 0.0F, 10.0F, 25.0F, 35.0F, 42.0F, 55.0F,
    60.0F, 70.0F, 80.0F, 90.0F, 110.0F, 120.0F, 150.0F, 180.0F
} ;                                    /* Referenced by:
                                        * '<S177>/Vector'
                                        * '<S391>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_MtrB_HeatTrnsfCoeff[8] =
{
    600.0F, 1500.0F, 3000.0F, 4500.0F, 6000.0F, 7500.0F, 9000.0F, 11000.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_MtrB_TempFact[17] =
{
    -40.0F, -35.0F, -25.0F, -10.0F, 0.0F, 10.0F, 25.0F, 35.0F, 42.0F, 55.0F,
    60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 120.0F, 130.0F
} ;                                    /* Referenced by:
                                        * '<S178>/Vector'
                                        * '<S392>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_TransClntPredFactor[18] =
{
    -10.0F, 0.0F, 70.0F, 71.0F, 72.0F, 73.0F, 74.0F, 75.0F, 76.0F, 77.0F, 78.0F,
    79.0F, 80.0F, 81.0F, 82.0F, 83.0F, 84.0F, 85.0F
} ;                                    /* Referenced by: '<S357>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_k_TransOil_CoolDwnFrac[6] =
{
    1200.0F, 3600.0F, 5400.0F, 7200.0F, 9000.0F, 10800.0F
} ;                                    /* Referenced by: '<S384>/Vector' */

#endif

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_n_RadFan_Spd[15] =
{
    15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F,
    70.0F, 75.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S82>/Vector' */

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KxTFTR_rho_TransClntDensity[19] =
{
    -10.0F, 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 55.0F, 60.0F, 65.0F, 70.0F, 75.0F, 80.0F, 85.0F
} ;                                    /* Referenced by: '<S347>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_P_MtrA_HeatLoss_ToClnt[14] =
{
    0.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F, 7000.0F, 8000.0F,
    9000.0F, 10000.0F, 11000.0F, 12000.0F, 12500.0F
} ;                                    /* Referenced by: '<S242>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_P_MtrB_HeatLoss_ToClnt[14] =
{
    0.0F, 500.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F, 7000.0F,
    8000.0F, 9000.0F, 10000.0F, 11000.0F, 12000.0F
} ;                                    /* Referenced by: '<S253>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_P_TransInternals_HeatLoss[5]
    =
{
    0.0F, 516.96F, 1547.29F, 2577.62F, 3607.95F
} ;                                    /* Referenced by: '<S396>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_Pct_MtrA_InvEfficiency[14] =
{
    0.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F, 7000.0F, 8000.0F,
    9000.0F, 10000.0F, 11000.0F, 12000.0F, 12500.0F
} ;                                    /* Referenced by: '<S353>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_Pct_MtrB_InvEfficiency[14] =
{
    0.0F, 500.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F, 7000.0F,
    8000.0F, 9000.0F, 10000.0F, 11000.0F, 12000.0F
} ;                                    /* Referenced by: '<S354>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_dV_RadFanOFF_CFM[5] =
{
    0.0F, 15.0F, 50.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S331>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_dV_RadFanON_CFM[4] =
{
    0.0F, 900.0F, 1800.0F, 2705.0F
} ;                                    /* Referenced by: '<S333>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static volatile CONST(float32, TFTR_VAR_INIT) KyTFTR_k_AmbientTempFac[7] =
{
    -30.0F, -20.0F, -10.0F, 0.0F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by:
                                        * '<S197>/Vector'
                                        * '<S389>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TFTR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TFTR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_A_AmbHeatLoss_Area;/* '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_Cf_CoefOfConvection;/* '<S324>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_E_TransOil_HeatGainTerm;/* '<S360>/Product' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_E_TransOil_HeatGainTermFlt;/* '<S365>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_E_TransOil_HeatLossTerm;/* '<S361>/Product' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_E_TransOil_TotalHeat;/* '<S364>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_I_MtrA_Current;/* '<S102>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_I_MtrB_Current;/* '<S119>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_M_MtrA_Trq;/* '<S113>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_M_MtrB_Trq;/* '<S95>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_CalcTransClnt_HeatLoss;/* '<S344>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_ChangelnClntTemp;/* '<S344>/Product' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrAStord_HeatLoss;/* '<S233>/Product3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrA_HeatLoss;/* '<S171>/Merge' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrA_HeatLossCalc;/* '<S233>/Abs5' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrA_HeatLossCalc_Filt;/* '<S241>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrA_HeatLossHTC;/* '<S302>/Product1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrA_RawHeatLossCalc;/* '<S233>/Abs2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrBStord_HeatLoss;/* '<S244>/Product3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrB_HeatLoss;/* '<S172>/Merge' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrB_HeatLossCalc;/* '<S244>/Abs5' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrB_HeatLossCalc_Filt;/* '<S252>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrB_HeatLossHTC;/* '<S303>/Product1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_MtrB_RawHeatLossCalc;/* '<S244>/Abs4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_PIM_HeatLoss_ToClnt;/* '<S343>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_TransAmbient_HeatLoss;/* '<S313>/Product' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_TransClnt_HeatLoss;/* '<S344>/Product1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_TransInternals_HeatLoss;/* '<S396>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_TransOil_HeatGainTerm;/* '<S360>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_P_TransOil_HeatLossTerm;/* '<S361>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_Pct_AGS_Pos;/* '<S111>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_Pct_MtrA_InvEfficiency;/* '<S343>/Sum2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_Pct_MtrB_InvEfficiency;/* '<S343>/Sum3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_S_TransClntSpecificHeat;/* '<S351>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_S_TransOil_HeatCapacity;/* '<S372>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_AmbFactor;/* '<S197>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_Amb_Temp;/* '<S106>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_AuxPmp_Temp_Fltd;/* '<S165>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_AuxPump_Temp;/* '<S103>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_AvgTransOilTemp;/* '<S175>/Merge' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_ClntPump_InletTemp;/* '<S104>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_ClntPump_OutletTemp;/* '<S100>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_MtrATempDiff;/* '<S302>/Sum2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_MtrA_Temp;/* '<S117>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_MtrA_Temp_Fltd;/* '<S163>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_MtrBTempDiff;/* '<S303>/Sum2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_MtrB_Temp;/* '<S97>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_MtrB_Temp_Fltd;/* '<S164>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_NaturalConvDeltaTemp;/* '<S311>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_NaturalConvTemp;/* '<S316>/Subtraction1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_StoredTempDiff_MtrA;/* '<S233>/Sum3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_StoredTempDiff_MtrB;/* '<S244>/Sum3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TOTAvgMaxLimit;/* '<S170>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TOTNeuralMaxLimit;/* '<S127>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TOTempNeural;/* '<S153>/Switch' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TOTempNeuralOrgnl;/* '<S155>/Sum4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TOTempNeuralPre;/* '<S130>/Sum' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TempAvgIV_prelatch;/* '<S385>/Sum2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransClntMeasTempIn;/* '<S340>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvg;/* '<S170>/Switch' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvgPre;/* '<S200>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvgPre_MtrAFA;/* '<S209>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT)
    VeTFTC_T_TransOilTempAvgPre_MtrAFA_AHeatLossHi;/* '<S210>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvgPre_MtrAFA_ColdBias;/* '<S214>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvgPre_MtrBFA;/* '<S222>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvgPre_MtrBFA_ColdBias;/* '<S227>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT)
    VeTFTC_T_TransOilTempAvgPre_MtrBFA_MtrBHeatLossHi;/* '<S223>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvg_Neural;/* '<S127>/Switch' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvg_Raw;/* '<S231>/Switch' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTempAvg_b4Limiter;/* '<S170>/Switch2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_AvgFin;/* '<S175>/Switch5' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_AvgSum;/* '<S179>/Sum4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_AvgSum_MtrAFA;/* '<S181>/Sum4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT)
    VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_AHeatLossHi;/* '<S181>/Sum9' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_ColdBias;/* '<S182>/Sum4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_AvgSum_MtrBFA;/* '<S183>/Sum4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_ColdBias;/* '<S184>/Sum4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT)
    VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_MtrBHeatLossHi;/* '<S183>/Sum9' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_Dlta;/* '<S306>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_Frac;/* '<S306>/Product1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_IV;/* '<S306>/Sum3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_Pred;/* '<S376>/Switch' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOilTemp_Saved;/* '<S398>/DataStoreRead' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOil_TempPred;/* '<S374>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOil_TempPredPrev;/* '<S308>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_T_TransOil_TotalHeatTemp;/* '<S377>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_U_MtrA_Voltage;/* '<S94>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_U_MtrB_Voltage;/* '<S118>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_AuxPump_TempFA;/* '<S105>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_EnblMtrAFA_ColdBiasChk;/* '<S175>/Logical3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_EnblMtrAFA_MtrBFAChk;/* '<S175>/Logical7' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_EnblMtrAFA_NormChk;/* '<S175>/Logical4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_EnblMtrBFA_ColdBiasChk;/* '<S175>/Logical2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_EnblMtrBFA_NormChk;/* '<S175>/Logical1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_InitValueTrig;/* '<S387>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_MtrAFac_MtrAFA;/* '<S258>/Logical1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_MtrA_TempFA;/* '<S109>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_MtrBFac_MtrBFA;/* '<S257>/Logical1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_MtrB_TempFA;/* '<S112>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TOTAvg_FA;/* '<S170>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_b_TO_TmpAvgForRat;/* '<S144>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TO_TmpNeural_FA;/* '<S126>/Logical4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TO_TmpNeural_OoR_FA;/* '<S141>/Logical7' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TO_TmpNeural_RatCheckRaw0_FA;/* '<S140>/Comparison' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TO_TmpNeural_RatCheckRaw_FA;/* '<S140>/Logical9' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TO_TmpNeural_RatCheck_FA;/* '<S140>/Logical8' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TransOilTempAvg_FA;/* '<S173>/Merge3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TransOilTemp_PredFA;/* '<S116>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TransOilTemp_PredMaxRng;/* '<S364>/Comparison' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTC_b_TransOilTemp_PredMinRng;/* '<S364>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_dV_RadFan_CFM;/* '<S312>/Merge' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_dV_TransClntPmp_FlwRt;/* '<S101>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_dm_ExternalClntMassFlow;/* '<S339>/Product' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_AuxPmp_TempFact;/* '<S174>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_MtrA_HeatTrnsfCoeff;/* '<S336>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_MtrA_TempFact;/* '<S174>/Switch2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_MtrB_HeatTrnsfCoeff;/* '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_MtrB_TempFact;/* '<S174>/Switch4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_TempWghtdAvgFact;/* '<S179>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_TempWghtdAvgFact_MtrAFA;/* '<S181>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_TempWghtdAvgFact_MtrAFA_AHeatLossHi;/* '<S181>/Sum6' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_TempWghtdAvgFact_MtrAFA_ColdBias;/* '<S182>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_TempWghtdAvgFact_MtrBFA;/* '<S183>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_k_TempWghtdAvgFact_MtrBFA_ColdBias;/* '<S184>/Sum1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT)
    VeTFTC_k_TempWghtdAvgFact_MtrBFA_MtrBHeatLossHi;/* '<S183>/Sum6' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_n_MtrA_Speed;/* '<S115>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_n_MtrB_Speed;/* '<S96>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_n_RadFan_Spd;/* '<S110>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_n_TransInputSpeed;/* '<S98>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_n_TransOutput_Spd;/* '<S99>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(uint32, TFTR_VAR_INIT) VeTFTC_t_RealTime;/* '<S108>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(uint32, TFTR_VAR_INIT) VeTFTC_t_RealTime_Saved;/* '<S398>/DataStoreRead1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTC_v_VehSpd;/* '<S107>/Gain' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTD_b_TransOilTemp_PredFA;/* '<S90>/AND' */

#endif

static VAR(float32, TFTR_VAR_INIT) VeTFTI_I_MtrA_DCCrnt;/* '<S17>/Switch14' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_I_MtrB_DCCrnt;/* '<S17>/Switch10' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_M_MtrA_TorqAchieved;/* '<S17>/Switch23' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_M_MtrB_TorqAchieved;/* '<S17>/Switch20' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_Pct_AGS_Pos;/* '<S17>/Switch12' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_Pct_RadFan_Cmd;/* '<S17>/Switch11' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_Amb_Temp;/* '<S17>/Switch15' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_AuxPump_Temp;/* '<S17>/Switch3' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_ClntPump_InletTemp;/* '<S17>/Switch1' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_ClntPump_OutletTemp;/* '<S83>/Switch1' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_MtrA_Temp;/* '<S17>/Switch36' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_MtrB_Temp;/* '<S17>/Switch43' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_OBCM_Temp1;/* '<S17>/Switch5' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_T_OnBrdChrg_ClntTmpIn;/* '<S17>/Switch4' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_U_MtrA_DCVolt;/* '<S17>/Switch17' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_U_MtrB_DCVolt;/* '<S17>/Switch38' */
static VAR(boolean, TFTR_VAR_INIT) VeTFTI_b_Amb_TempFA;/* '<S17>/Switch21' */
static VAR(boolean, TFTR_VAR_INIT) VeTFTI_b_AuxPump_TempFA;/* '<S17>/Switch18' */
static VAR(boolean, TFTR_VAR_INIT) VeTFTI_b_MtrA_TempFA;/* '<S17>/Switch6' */
static VAR(boolean, TFTR_VAR_INIT) VeTFTI_b_MtrB_TempFA;/* '<S17>/Switch13' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_dV_TransClntPmp_FlwRt;/* '<S17>/Switch2' */
static VAR(TeTAPR_e_TransAuxPmp_FalseTrueSNA, TFTR_VAR_INIT)
    VeTFTI_e_TOT_ColdBiasSts;          /* '<S17>/Switch19' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_n_Input_Spd;/* '<S17>/Switch35' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_n_MtrA_Spd;/* '<S17>/Switch9' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_n_MtrB_Spd;/* '<S17>/Switch32' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_n_Output_Spd;/* '<S17>/Switch28' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_n_RadFanSpd;/* '<S82>/Vector' */
static VAR(boolean, TFTR_VAR_INIT) VeTFTI_t_RTC_CurrentTimeFA;/* '<S17>/Switch22' */
static VAR(uint32, TFTR_VAR_INIT) VeTFTI_t_RTC_SleepTime;/* '<S17>/Switch16' */
static VAR(uint32, TFTR_VAR_INIT) VeTFTI_t_RealTimeClock;/* '<S17>/Switch8' */
static VAR(float32, TFTR_VAR_INIT) VeTFTI_v_Vehicle_Signed;/* '<S17>/Switch7' */

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_T_MtrBTmp_CalcWith_MtrATmpFA;/* '<S181>/Product3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT)
    VeTFTR_T_MtrBTmp_CalcWith_MtrATmpFA_AHeatLossHi;/* '<S181>/Product7' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_T_MtrBTmp_CalcWith_MtrBTmpFA;/* '<S183>/Product3' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT)
    VeTFTR_T_MtrBTmp_CalcWith_MtrBTmpFA_MtrBHeatLossHi;/* '<S183>/Product7' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_T_TempAvgIV;/* '<S306>/Switch' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_T_TempAvgIVLatch;/* '<S386>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_T_TempSumIV;/* '<S385>/Sum4' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTR_b_AuxPmpFac_gama_Enbl;/* '<S173>/Merge' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTR_b_MtrAFac_alpha_Enbl;/* '<S173>/Merge1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTR_b_MtrBFac_beta_Enbl;/* '<S173>/Merge2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(boolean, TFTR_VAR_INIT) VeTFTR_b_TransOilTemp_Reset;/* '<S380>/AND' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_k_TestSignal2;/* '<S389>/Vector' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_k_TestSignal3;/* '<S393>/Switch1' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(uint32, TFTR_VAR_INIT) VeTFTR_t_RealTimeDiff;/* '<S306>/Sum2' */

#endif

#if Rte_SysCon_Variant_TFTR_4

static VAR(float32, TFTR_VAR_INIT) VeTFTR_t_RealTimeDiff_conv;/* '<S306>/DataTypeConversion' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TFTR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TFTR
#include "MemMap.h"

CONST(ConstP_TFTR_ac_T, TFTR_VAR_INIT) TFTR_ac_ConstP =
{

#if Rte_SysCon_Variant_TFTR_4

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S242>/Vector'
     *   '<S353>/Vector'
     */
    {
        25U, 13U
    },

#endif

#if Rte_SysCon_Variant_TFTR_4

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S253>/Vector'
     */
    {
        30U, 13U
    },

#endif

#if Rte_SysCon_Variant_TFTR_4

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S197>/Vector'
     *   '<S389>/Vector'
     */
    {
        16U, 6U
    },

#endif

#if Rte_SysCon_Variant_TFTR_4

    /* Computed Parameter: Vector_maxIndex_c
     * Referenced by: '<S333>/Vector'
     */
    {
        4U, 3U
    },

#endif

#if Rte_SysCon_Variant_TFTR_4

    /* Computed Parameter: Vector_maxIndex_k
     * Referenced by: '<S331>/Vector'
     */
    {
        8U, 4U
    },

#endif

#if Rte_SysCon_Variant_TFTR_4

    /* Computed Parameter: Vector_maxIndex_n
     * Referenced by: '<S354>/Vector'
     */
    {
        32U, 13U
    },

#endif

#if Rte_SysCon_Variant_TFTR_4

    /* Computed Parameter: Vector_maxIndex_l
     * Referenced by: '<S396>/Vector'
     */
    {
        4U, 4U
    },

#endif

#ifndef CONSTP_TFTR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TFTR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TFTR
#include "MemMap.h"

VAR(B_TFTR_ac_T, TFTR_VAR_INIT) TFTR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TFTR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TFTR
#include "MemMap.h"

VAR(DW_TFTR_ac_T, TFTR_VAR_INIT) TFTR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TFTR
#include "MemMap.h"
#if Rte_SysCon_Variant_TFTR_4

static FUNC(void, TFTR_CODE_LOCAL) TFTR_ac_Subsystem5(P2VAR(boolean, AUTOMATIC,
    TFTR_VAR_INIT) rty_AuxPmpFac_Enbl, P2VAR(boolean, AUTOMATIC, TFTR_VAR_INIT)
    rty_MtrAFac_Enbl, P2VAR(boolean, AUTOMATIC, TFTR_VAR_INIT) rty_MtrBFac_Enbl,
    P2VAR(boolean, AUTOMATIC, TFTR_VAR_INIT) rty_TFT_FA);

#endif

/*
 * Output and update for action system:
 *    '<S173>/Subsystem5'
 *    '<S173>/Subsystem6'
 *    '<S173>/Subsystem8'
 */
#if Rte_SysCon_Variant_TFTR_4

static FUNC(void, TFTR_CODE_LOCAL) TFTR_ac_Subsystem5(P2VAR(boolean, AUTOMATIC,
    TFTR_VAR_INIT) rty_AuxPmpFac_Enbl, P2VAR(boolean, AUTOMATIC, TFTR_VAR_INIT)
    rty_MtrAFac_Enbl, P2VAR(boolean, AUTOMATIC, TFTR_VAR_INIT) rty_MtrBFac_Enbl,
    P2VAR(boolean, AUTOMATIC, TFTR_VAR_INIT) rty_TFT_FA)
{
    /* Gain: '<S285>/Gain' incorporates:
     *  Constant: '<S259>/FALSEConstant'
     */
    *rty_AuxPmpFac_Enbl = ((true) && (false));

    /* Gain: '<S287>/Gain' incorporates:
     *  Constant: '<S259>/FALSEConstant1'
     */
    *rty_MtrAFac_Enbl = ((true) && (false));

    /* Gain: '<S288>/Gain' incorporates:
     *  Constant: '<S259>/FALSEConstant2'
     */
    *rty_MtrBFac_Enbl = ((true) && (false));

    /* Gain: '<S286>/Gain' */
    *rty_TFT_FA = true;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_TFTR_5

FUNC(void, TFTR_CODE) TFTR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_TFTR_5

    float32 rtb_TFTC_T_TransOilTemp_write_IRV_i;

#endif

#if Rte_SysCon_Variant_TFTR_5

    boolean rtb_TFTC_b_TransOilTempFA_write_IRV_o;

#endif

#if Rte_SysCon_Variant_TFTR_5

    boolean rtb_TFTC_b_TransOilTempExcess_write_IR_m;

#endif

#if Rte_SysCon_Variant_TFTR_5

    float32 rtb_TmpSignalConversionAtVeTMIR_T_TransO;

#endif

#if Rte_SysCon_Variant_TFTR_5

    boolean rtb_TmpSignalConversionAtVeTMIR_b_TransO;

#endif

#if Rte_SysCon_Variant_TFTR_5

    float32 Gain;

#endif

#if Rte_SysCon_Variant_TFTR_5

    boolean Gain_o;

#endif

#if Rte_SysCon_Variant_TFTR_5

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Outputs for Function Call SubSystem: '<Root>/TFTR_MedTEB' */
    /* SignalConversion generated from: '<S1>/TFTC_T_TransOilTemp_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TFTC_T_TransOilTemp_write_IRV_i =
        Rte_IrvRead_TFTR_MedTEB_TFTC_T_TransOilTemp_write_IRV();

    /* SignalConversion generated from: '<S1>/TFTC_b_TransOilTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TFTC_b_TransOilTempFA_write_IRV_o =
        Rte_IrvRead_TFTR_MedTEB_TFTC_b_TransOilTempFA_write_IRV();

    /* SignalConversion generated from: '<S1>/TFTC_b_TransOilTempExcess_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TFTC_b_TransOilTempExcess_write_IR_m =
        Rte_IrvRead_TFTR_MedTEB_TFTC_b_TransOilTempExcess_write_IRV();

    /* SignalConversion generated from: '<S1>/VeTMIR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTMIR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTMIR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTMIR_T_TransO);

    /* SignalConversion generated from: '<S1>/VeTMIR_b_TransOilTempFA' incorporates:
     *  Inport: '<Root>/VeTMIR_b_TransOilTempFA'
     */
    (void)Rte_Read_VeTMIR_b_TransOilTempFA_Value
        (&rtb_TmpSignalConversionAtVeTMIR_b_TransO);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Trans_Oil_Temp_MSG'
     */
    /* Outputs for Atomic SubSystem: '<S11>/Hysteresis' */
    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S12>/ConstantValue'
     *  Constant: '<S13>/Calib'
     *  Constant: '<S14>/Calib'
     *  RelationalOperator: '<S12>/GreaterThan'
     *  RelationalOperator: '<S12>/GreaterThan1'
     *  Switch: '<S12>/Switch2'
     *  UnitDelay: '<S12>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeTMIR_T_TransO > KeTFTR_T_HiTransOilTemp)
    {
        TFTR_ac_DW.UnitDelay_DSTATE_gv = true;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTMIR_T_TransO < KeTFTR_T_LoTransOilTemp)
        {
            /* Switch: '<S12>/Switch2' incorporates:
             *  Constant: '<S12>/ConstantValue1'
             *  UnitDelay: '<S12>/UnitDelay'
             */
            TFTR_ac_DW.UnitDelay_DSTATE_gv = false;
        }
    }

    /* End of Switch: '<S12>/Switch1' */
    /* End of Outputs for SubSystem: '<S11>/Hysteresis' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcessOutputs'
     */
    /* Gain: '<S9>/Gain' */
    Gain = 1.0F * rtb_TFTC_T_TransOilTemp_write_IRV_i;

    /* Gain: '<S7>/Gain' */
    Gain_o = ((true) && rtb_TFTC_b_TransOilTempFA_write_IRV_o);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeTFTR_T_TransOilTemp' incorporates:
     *  SignalConversion generated from: '<S1>/TFTR_TransOilTemp'
     */
    (void)Rte_Write_VeTFTR_T_TransOilTemp_Value(Gain);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ProcessOutputs'
     */
    /* Outport: '<Root>/VeTFTR_b_TransOilTempExcess' incorporates:
     *  Gain: '<S8>/Gain'
     *  SignalConversion generated from: '<S1>/TFTR_TransOilTempExcess'
     */
    (void)Rte_Write_VeTFTR_b_TransOilTempExcess_Value((true) &&
        rtb_TFTC_b_TransOilTempExcess_write_IR_m);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeTFTR_b_TransOilTempFA' incorporates:
     *  SignalConversion generated from: '<S1>/TFTR_TransOilTempFA'
     */
    (void)Rte_Write_VeTFTR_b_TransOilTempFA_Value(Gain_o);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Trans_Oil_Temp_MSG'
     */
    /* Merge: '<Root>/Merge_1' incorporates:
     *  Gain: '<S15>/Gain'
     *  SignalConversion generated from: '<S1>/TFTC_T_TransOilTemp_write'
     */
    Rte_IrvWrite_TFTR_MedTEB_TFTC_T_TransOilTemp_write_IRV(1.0F *
        rtb_TmpSignalConversionAtVeTMIR_T_TransO);

    /* Switch: '<S11>/Switch' */
    if (rtb_TmpSignalConversionAtVeTMIR_b_TransO)
    {
        /* Merge: '<Root>/Merge_3' incorporates:
         *  Constant: '<S11>/FALSEConstant'
         *  SignalConversion generated from: '<S1>/TFTC_b_TransOilTempExcess_write'
         */
        Rte_IrvWrite_TFTR_MedTEB_TFTC_b_TransOilTempExcess_write_IRV(false);
    }
    else
    {
        /* Merge: '<Root>/Merge_3' incorporates:
         *  SignalConversion generated from: '<S1>/TFTC_b_TransOilTempExcess_write'
         *  UnitDelay: '<S12>/UnitDelay'
         */
        Rte_IrvWrite_TFTR_MedTEB_TFTC_b_TransOilTempExcess_write_IRV
            (TFTR_ac_DW.UnitDelay_DSTATE_gv);
    }

    /* End of Switch: '<S11>/Switch' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  Gain: '<S16>/Gain'
     *  SignalConversion generated from: '<S1>/TFTC_b_TransOilTempFA_write'
     */
    Rte_IrvWrite_TFTR_MedTEB_TFTC_b_TransOilTempFA_write_IRV((true) &&
        rtb_TmpSignalConversionAtVeTMIR_b_TransO);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Merge_5_Irv' incorporates:
     *  SignalConversion generated from: '<S1>/TFTR_TransOilTempFA_write'
     * */
    Rte_IrvWrite_TFTR_MedTEB_TFTR_TransOilTempFA_write_IRV(Gain_o);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S1>/TFTR_TransOilTemp_write'
     * */
    Rte_IrvWrite_TFTR_MedTEB_TFTR_TransOilTemp_write_IRV(Gain);

    /* End of Outputs for SubSystem: '<Root>/TFTR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Model step function for TID2 */
FUNC(void, TFTR_CODE) TFTR_MedTEF(void) /* Explicit Task: MedTEF */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_TFTR_4

    float32 rtb_TFTR_TransOilTemp_write_IRV;

#endif

#if Rte_SysCon_Variant_TFTR_4

    float32 rtb_TFTC_T_TransOilTemp_write_IRV;

#endif

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_TFTR_TransOilTempFA_write_IRV;

#endif

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_TFTC_b_TransOilTempFA_write_IRV;

#endif

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_TFTC_b_TransOilTempExcess_write_IRV;

#endif

#if Rte_SysCon_Variant_TFTR_4

    sint32 idxDelay;

#endif

    uint32 tmpRead;

#if Rte_SysCon_Variant_TFTR_4

    float32 rtb_TmpSignalConversionAtTransOilTemp_Sa;

#endif

#if Rte_SysCon_Variant_TFTR_4

    uint32 rtb_TmpSignalConversionAtRealTime_Saved_;

#endif

    boolean rtb_Gain;

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_VariantMerge_For_Variant_Source_Va_n;

#endif

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_VariantMerge_For_Variant_Source_Va_j;

#endif

    float32 rtb_Sum2_f;
    float32 rtb_Sum4_b;

#if Rte_SysCon_Variant_TFTR_4

    float32 rtb_Sum2_o;

#endif

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_VariantMerge_For_Variant_Source_Va_a;

#endif

#if Rte_SysCon_Variant_TFTR_4

    boolean rtb_VariantMerge_For_Variant_Source_Va_f;

#endif

#if Rte_SysCon_Variant_TFTR_4

    float32 tmp;

#endif

#if Rte_SysCon_Variant_TFTR_4

    float32 tmp_0;

#endif

#if Rte_SysCon_Variant_TFTR_4

    uint16 tmp_1;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/TFTR_MedTEF'
     */
    /* SignalConversion generated from: '<S2>/TFTR_TransOilTemp_read' incorporates:
     *  SignalConversion generated from: '<S2>/TFTC_T_TransOilTemp_read'
     *  SignalConversion generated from: '<S2>/TFTC_b_TransOilTempExcess_read'
     *  SignalConversion generated from: '<S2>/TFTC_b_TransOilTempFA_read'
     *  SignalConversion generated from: '<S2>/TFTR_TransOilTempFA_read'
     *  SignalConversion generated from: '<S2>/RealTime_Saved_Read'
     *  SignalConversion generated from: '<S2>/TransOilTemp_Saved_Read'
     */
#if Rte_SysCon_Variant_TFTR_4

    /* SignalConversion generated from: '<S2>/TFTR_TransOilTemp_read' incorporates:
     *  Merge: '<Root>/Merge_4_Irv'
     */
    rtb_TFTR_TransOilTemp_write_IRV =
        Rte_IrvRead_TFTR_MedTEF_TFTR_TransOilTemp_write_IRV();

    /* SignalConversion generated from: '<S2>/TFTR_TransOilTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_5_Irv'
     */
    rtb_TFTR_TransOilTempFA_write_IRV =
        Rte_IrvRead_TFTR_MedTEF_TFTR_TransOilTempFA_write_IRV();

    /* SignalConversion generated from: '<S2>/TFTC_T_TransOilTemp_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TFTC_T_TransOilTemp_write_IRV =
        Rte_IrvRead_TFTR_MedTEF_TFTC_T_TransOilTemp_write_IRV();

    /* SignalConversion generated from: '<S2>/TFTC_b_TransOilTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TFTC_b_TransOilTempFA_write_IRV =
        Rte_IrvRead_TFTR_MedTEF_TFTC_b_TransOilTempFA_write_IRV();

    /* SignalConversion generated from: '<S2>/TFTC_b_TransOilTempExcess_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TFTC_b_TransOilTempExcess_write_IRV =
        Rte_IrvRead_TFTR_MedTEF_TFTC_b_TransOilTempExcess_write_IRV();

    /* SignalConversion generated from: '<S2>/TransOilTemp_Saved_Read' incorporates:
     *  SignalConversion generated from: '<S4>/TransOilTemp_Saved_write'
     */
    rtb_TmpSignalConversionAtTransOilTemp_Sa =
        Rte_IrvRead_TFTR_MedTEF_TransOilTemp_Saved_write_IRV();

    /* SignalConversion generated from: '<S2>/RealTime_Saved_Read' incorporates:
     *  SignalConversion generated from: '<S4>/RealTime_Saved_write'
     */
    rtb_TmpSignalConversionAtRealTime_Saved_ =
        Rte_IrvRead_TFTR_MedTEF_RealTime_Saved_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S2>/TFTR_TransOilTemp_read' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VePMIR_b_TransAuxPumpTemp_FA' */
    (void)Rte_Read_VePMIR_b_TransAuxPumpTemp_FA_Value((&(VeTFTI_b_AuxPump_TempFA)));

    /* Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn' */
    (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value
        ((&(VeTFTI_T_ClntPump_InletTemp)));

    /* Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn' */
    (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value
        ((&(VeTFTI_T_OnBrdChrg_ClntTmpIn)));

    /* Inport: '<Root>/VeTHMR_dV_LT_PsvPmpFlow' */
    (void)Rte_Read_VeTHMR_dV_LT_PsvPmpFlow_Value((&(VeTFTI_dV_TransClntPmp_FlwRt)));

    /* Inport: '<Root>/VePMIR_T_TransAuxPumpTemp' */
    (void)Rte_Read_VePMIR_T_TransAuxPumpTemp_Value((&(VeTFTI_T_AuxPump_Temp)));

    /* Inport: '<Root>/VeAATR_T_EstAmbAirTemp' */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value((&(VeTFTI_T_Amb_Temp)));

    /* Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos' */
    (void)Rte_Read_VeTAIR_Pct_AGS_CurrPos_Value((&(VeTFTI_Pct_AGS_Pos)));

    /* Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved' */
    (void)Rte_Read_VeMTIR_M_MtrB_TorqAchieved_Value
        ((&(VeTFTI_M_MtrB_TorqAchieved)));

    /* Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved' */
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value
        ((&(VeTFTI_M_MtrA_TorqAchieved)));

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value((&(VeTFTI_n_MtrB_Spd)));

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value((&(VeTFTI_n_MtrA_Spd)));

    /* Inport: '<Root>/VeINVR_U_MtrB_DC_Volt' */
    (void)Rte_Read_VeINVR_U_MtrB_DC_Volt_Value((&(VeTFTI_U_MtrB_DCVolt)));

    /* Inport: '<Root>/VeINVR_U_MtrA_DC_Volt' */
    (void)Rte_Read_VeINVR_U_MtrA_DC_Volt_Value((&(VeTFTI_U_MtrA_DCVolt)));

    /* Inport: '<Root>/VeINVR_b_MtrB_TempFA' */
    (void)Rte_Read_VeINVR_b_MtrB_TempFA_Value((&(VeTFTI_b_MtrB_TempFA)));

    /* Inport: '<Root>/VeINVR_T_MtrB_Temp' */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value((&(VeTFTI_T_MtrB_Temp)));

    /* Inport: '<Root>/VeINVR_b_MtrA_TempFA' */
    (void)Rte_Read_VeINVR_b_MtrA_TempFA_Value((&(VeTFTI_b_MtrA_TempFA)));

    /* Inport: '<Root>/VeINVR_T_MtrA_Temp' */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value((&(VeTFTI_T_MtrA_Temp)));

    /* Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrB_DC_Crnt_Value((&(VeTFTI_I_MtrB_DCCrnt)));

    /* Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value((&(VeTFTI_I_MtrA_DCCrnt)));

    /* Inport: '<Root>/VeFSCR_Pct_RadFanCmd' */
    (void)Rte_Read_VeFSCR_Pct_RadFanCmd_Value((&(VeTFTI_Pct_RadFan_Cmd)));

    /* Inport: '<Root>/VePLTR_t_RTC_CurrentTime' */
    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value((&(VeTFTI_t_RealTimeClock)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/TFTR_MedTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/InternalInputs'
     */
    /* Switch: '<S17>/Switch8' incorporates:
     *  Constant: '<S68>/Calib'
     */
    if (KeTFTR_b_RealTimeOvrdEnbl)
    {
        /* Switch: '<S17>/Switch8' incorporates:
         *  Constant: '<S80>/Calib'
         *  Inport: '<Root>/VePLTR_t_RTC_CurrentTime'
         */
        VeTFTI_t_RealTimeClock = KeTFTR_t_RealTimeOvrdVal;
    }

    /* End of Switch: '<S17>/Switch8' */

    /* Switch: '<S17>/Switch11' incorporates:
     *  Constant: '<S67>/Calib'
     */
    if (KeTFTR_b_RadFanCmdOvrdEnbl)
    {
        /* Switch: '<S17>/Switch11' incorporates:
         *  Constant: '<S27>/Calib'
         *  Inport: '<Root>/VeFSCR_Pct_RadFanCmd'
         */
        VeTFTI_Pct_RadFan_Cmd = KeTFTR_Pct_RadFanCmdOvrdVal;
    }

    /* End of Switch: '<S17>/Switch11' */

    /* Lookup_n-D: '<S82>/Vector' incorporates:
     *  Switch: '<S17>/Switch11'
     */
    VeTFTI_n_RadFanSpd = look1_iflf_binlca_16a(VeTFTI_Pct_RadFan_Cmd, ((const
        float32 *)&(KxTFTR_n_RadFan_Spd[0])), ((const float32 *)
        &(KtTFTR_n_RadFan_Spd[0])), 14U);

    /* Switch: '<S17>/Switch14' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeTFTR_b_MtrADCCrntOvrdEnbl)
    {
        /* Switch: '<S17>/Switch14' incorporates:
         *  Constant: '<S22>/Calib'
         *  Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt'
         */
        VeTFTI_I_MtrA_DCCrnt = KeTFTR_I_MtrADCCrntOvrdVal;
    }

    /* End of Switch: '<S17>/Switch14' */

    /* Switch: '<S17>/Switch10' incorporates:
     *  Constant: '<S54>/Calib'
     */
    if (KeTFTR_b_MtrBDCCrntOvrdEnbl)
    {
        /* Switch: '<S17>/Switch10' incorporates:
         *  Constant: '<S23>/Calib'
         *  Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt'
         */
        VeTFTI_I_MtrB_DCCrnt = KeTFTR_I_MtrBDCCrntOvrdVal;
    }

    /* End of Switch: '<S17>/Switch10' */

    /* Switch: '<S17>/Switch36' incorporates:
     *  Constant: '<S52>/Calib'
     */
    if (KeTFTR_b_MtrATempOvrdEnbl)
    {
        /* Switch: '<S17>/Switch36' incorporates:
         *  Constant: '<S31>/Calib'
         *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
         */
        VeTFTI_T_MtrA_Temp = KeTFTR_T_MtrATempOvrdVal;
    }

    /* End of Switch: '<S17>/Switch36' */

    /* Switch: '<S17>/Switch6' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KeTFTR_b_MtrATempFAOvrdEnbl)
    {
        /* Switch: '<S17>/Switch6' incorporates:
         *  Constant: '<S51>/Calib'
         *  Inport: '<Root>/VeINVR_b_MtrA_TempFA'
         */
        VeTFTI_b_MtrA_TempFA = KeTFTR_b_MtrATempFAOvrdVal;
    }

    /* End of Switch: '<S17>/Switch6' */

    /* Switch: '<S17>/Switch43' incorporates:
     *  Constant: '<S59>/Calib'
     */
    if (KeTFTR_b_MtrBTempOvrdEnbl)
    {
        /* Switch: '<S17>/Switch43' incorporates:
         *  Constant: '<S32>/Calib'
         *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
         */
        VeTFTI_T_MtrB_Temp = KeTFTR_T_MtrBTempOvrdVal;
    }

    /* End of Switch: '<S17>/Switch43' */

    /* Switch: '<S17>/Switch13' incorporates:
     *  Constant: '<S57>/Calib'
     */
    if (KeTFTR_b_MtrBTempFAOvrdEnbl)
    {
        /* Switch: '<S17>/Switch13' incorporates:
         *  Constant: '<S58>/Calib'
         *  Inport: '<Root>/VeINVR_b_MtrB_TempFA'
         */
        VeTFTI_b_MtrB_TempFA = KeTFTR_b_MtrBTempFAOvrdVal;
    }

    /* End of Switch: '<S17>/Switch13' */

    /* Switch: '<S17>/Switch17' incorporates:
     *  Constant: '<S48>/Calib'
     */
    if (KeTFTR_b_MtrADCVoltOvrdEnbl)
    {
        /* Switch: '<S17>/Switch17' incorporates:
         *  Constant: '<S35>/Calib'
         *  Inport: '<Root>/VeINVR_U_MtrA_DC_Volt'
         */
        VeTFTI_U_MtrA_DCVolt = KeTFTR_U_MtrADCVoltOvrdVal;
    }

    /* End of Switch: '<S17>/Switch17' */

    /* Switch: '<S17>/Switch38' incorporates:
     *  Constant: '<S55>/Calib'
     */
    if (KeTFTR_b_MtrBDCVoltOvrdEnbl)
    {
        /* Switch: '<S17>/Switch38' incorporates:
         *  Constant: '<S36>/Calib'
         *  Inport: '<Root>/VeINVR_U_MtrB_DC_Volt'
         */
        VeTFTI_U_MtrB_DCVolt = KeTFTR_U_MtrBDCVoltOvrdVal;
    }

    /* End of Switch: '<S17>/Switch38' */

    /* Switch: '<S17>/Switch9' incorporates:
     *  Constant: '<S49>/Calib'
     */
    if (KeTFTR_b_MtrASpeedOvrdEnbl)
    {
        /* Switch: '<S17>/Switch9' incorporates:
         *  Constant: '<S76>/Calib'
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        VeTFTI_n_MtrA_Spd = KeTFTR_n_MtrASpeedOvrdVal;
    }

    /* End of Switch: '<S17>/Switch9' */

    /* Switch: '<S17>/Switch32' incorporates:
     *  Constant: '<S56>/Calib'
     */
    if (KeTFTR_b_MtrBSpeedOvrdEnbl)
    {
        /* Switch: '<S17>/Switch32' incorporates:
         *  Constant: '<S77>/Calib'
         *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
         */
        VeTFTI_n_MtrB_Spd = KeTFTR_n_MtrBSpeedOvrdVal;
    }

    /* End of Switch: '<S17>/Switch32' */

    /* Switch: '<S17>/Switch23' incorporates:
     *  Constant: '<S53>/Calib'
     */
    if (KeTFTR_b_MtrATorqAchvdOvrdEnbl)
    {
        /* Switch: '<S17>/Switch23' incorporates:
         *  Constant: '<S24>/Calib'
         *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
         */
        VeTFTI_M_MtrA_TorqAchieved = KeTFTR_M_MtrATorqAchvdOvrdVal;
    }

    /* End of Switch: '<S17>/Switch23' */

    /* Switch: '<S17>/Switch20' incorporates:
     *  Constant: '<S60>/Calib'
     */
    if (KeTFTR_b_MtrBTorqAchvdOvrdEnbl)
    {
        /* Switch: '<S17>/Switch20' incorporates:
         *  Constant: '<S25>/Calib'
         *  Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved'
         */
        VeTFTI_M_MtrB_TorqAchieved = KeTFTR_M_MtrBTorqAchvdOvrdVal;
    }

    /* End of Switch: '<S17>/Switch20' */

    /* Switch: '<S17>/Switch12' incorporates:
     *  Constant: '<S37>/Calib'
     */
    if (KeTFTR_b_AGSPosOvrdEnbl)
    {
        /* Switch: '<S17>/Switch12' incorporates:
         *  Constant: '<S26>/Calib'
         *  Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos'
         */
        VeTFTI_Pct_AGS_Pos = KeTFTR_Pct_AGSPosOvrdVal;
    }

    /* End of Switch: '<S17>/Switch12' */

    /* Switch: '<S17>/Switch15' incorporates:
     *  Constant: '<S40>/Calib'
     */
    if (KeTFTR_b_AmbTempOvrdEnbl)
    {
        /* Switch: '<S17>/Switch15' incorporates:
         *  Constant: '<S28>/Calib'
         *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
         */
        VeTFTI_T_Amb_Temp = KeTFTR_T_AmbTempOvrdVal;
    }

    /* End of Switch: '<S17>/Switch15' */

    /* Switch: '<S17>/Switch3' incorporates:
     *  Constant: '<S43>/Calib'
     */
    if (KeTFTR_b_AuxPumpTempOvrdEnbl)
    {
        /* Switch: '<S17>/Switch3' incorporates:
         *  Constant: '<S29>/Calib'
         *  Inport: '<Root>/VePMIR_T_TransAuxPumpTemp'
         */
        VeTFTI_T_AuxPump_Temp = KeTFTR_T_AuxPumpTempOvrdVal;
    }

    /* End of Switch: '<S17>/Switch3' */

    /* Switch: '<S17>/Switch18' incorporates:
     *  Constant: '<S41>/Calib'
     */
    if (KeTFTR_b_AuxPumpTempFAOvrdEnbl)
    {
        /* Switch: '<S17>/Switch18' incorporates:
         *  Constant: '<S42>/Calib'
         *  Inport: '<Root>/VePMIR_b_TransAuxPumpTemp_FA'
         */
        VeTFTI_b_AuxPump_TempFA = KeTFTR_b_AuxPumpTempFAOvrdVal;
    }

    /* End of Switch: '<S17>/Switch18' */

    /* Switch: '<S17>/Switch2' incorporates:
     *  Constant: '<S44>/Calib'
     */
    if (KeTFTR_b_ClntPmpFlowOvrdEnbl)
    {
        /* Switch: '<S17>/Switch2' incorporates:
         *  Constant: '<S71>/Calib'
         *  Inport: '<Root>/VeTHMR_dV_LT_PsvPmpFlow'
         */
        VeTFTI_dV_TransClntPmp_FlwRt = KeTFTR_dV_ClntPmpFlowOvrdVal;
    }

    /* End of Switch: '<S17>/Switch2' */

    /* Switch: '<S17>/Switch1' incorporates:
     *  Constant: '<S45>/Calib'
     */
    if (KeTFTR_b_ClntPmpInletTmpOvrdEnbl)
    {
        /* Switch: '<S17>/Switch1' incorporates:
         *  Constant: '<S30>/Calib'
         *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
         */
        VeTFTI_T_ClntPump_InletTemp = KeTFTR_T_ClntPmpInletTmpOvrdVal;
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S17>/Switch4' incorporates:
     *  Constant: '<S62>/Calib'
     */
    if (KeTFTR_b_OBC_ClntTmpInOvrdEnbl)
    {
        /* Switch: '<S17>/Switch4' incorporates:
         *  Constant: '<S34>/Calib'
         *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
         */
        VeTFTI_T_OnBrdChrg_ClntTmpIn = KeTFTR_T_OBC_ClntTmpInOvrdVal;
    }

    /* End of Switch: '<S17>/Switch4' */

    /* Sum: '<S17>/Sum2' incorporates:
     *  Constant: '<S73>/Calib'
     *  Product: '<S17>/Product1'
     */
    rtb_Sum2_f = VeTFTI_T_OnBrdChrg_ClntTmpIn - (VeTFTI_T_ClntPump_InletTemp *
        KeTFTR_k_ClntPump_InletTempFac);

    /* Outputs for Atomic SubSystem: '<S17>/ProtectedDivision' */
    /* Switch: '<S83>/Switch1' incorporates:
     *  Constant: '<S74>/Calib'
     *  Constant: '<S83>/ConstantValue'
     *  Constant: '<S83>/ConstantValue1'
     *  Constant: '<S83>/ConstantValue2'
     *  Constant: '<S83>/ConstantValue3'
     *  Logic: '<S83>/AND'
     *  RelationalOperator: '<S83>/GreaterThanorEqual'
     *  RelationalOperator: '<S83>/GreaterThanorEqual1'
     *  RelationalOperator: '<S83>/NotEqual'
     *  RelationalOperator: '<S83>/NotEqual1'
     *  Switch: '<S83>/Switch2'
     *  Switch: '<S83>/Switch3'
     */
    if ((rtb_Sum2_f != 0.0F) && (KeTFTR_k_OnBrdChrg_ClntTmpInFac != 0.0F))
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Product: '<S83>/Division'
         */
        VeTFTI_T_ClntPump_OutletTemp = rtb_Sum2_f /
            KeTFTR_k_OnBrdChrg_ClntTmpInFac;
    }
    else if (rtb_Sum2_f > 0.0F)
    {
        /* Switch: '<S83>/Switch2' incorporates:
         *  Constant: '<S83>/MAXFLOAT'
         *  Switch: '<S83>/Switch1'
         */
        VeTFTI_T_ClntPump_OutletTemp = 3.402823466E+38F;
    }
    else if (rtb_Sum2_f < 0.0F)
    {
        /* Switch: '<S83>/Switch3' incorporates:
         *  Constant: '<S83>/MINFLOAT'
         *  Switch: '<S83>/Switch1'
         *  Switch: '<S83>/Switch2'
         */
        VeTFTI_T_ClntPump_OutletTemp = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S83>/ConstantValue4'
         *  Switch: '<S83>/Switch2'
         *  Switch: '<S83>/Switch3'
         */
        VeTFTI_T_ClntPump_OutletTemp = 0.0F;
    }

    /* End of Switch: '<S83>/Switch1' */
    /* End of Outputs for SubSystem: '<S17>/ProtectedDivision' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */

    /* Inport: '<Root>/VePLTR_b_RTC_CurrentTimeFA' */
    (void)Rte_Read_VePLTR_b_RTC_CurrentTimeFA_Value(&rtb_Gain);

    /* Inport: '<Root>/VePLTR_t_RTC_SleepTime' */
    (void)Rte_Read_VePLTR_t_RTC_SleepTime_Value(&tmpRead);

    /* Inport: '<Root>/VeAATR_b_EstAmbAirTempFA' */
    (void)Rte_Read_VeAATR_b_EstAmbAirTempFA_Value((&(VeTFTI_b_Amb_TempFA)));

    /* Inport: '<Root>/VePMIR_e_TAP_ColdBiasSts' */
    (void)Rte_Read_VePMIR_e_TAP_ColdBiasSts_Value((&(VeTFTI_e_TOT_ColdBiasSts)));

    /* Inport: '<Root>/VeCSVR_v_VehSpd' */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value((&(VeTFTI_v_Vehicle_Signed)));

    /* Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd' */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value((&(VeTFTI_n_Output_Spd)));

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value((&(VeTFTI_n_Input_Spd)));

    /* Inport: '<Root>/VeTMIR_T_OBCMTemp1' */
    (void)Rte_Read_VeTMIR_T_OBCMTemp1_Value(&rtb_Sum4_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/TFTR_MedTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/InternalInputs'
     */
    /* Switch: '<S17>/Switch35' incorporates:
     *  Constant: '<S46>/Calib'
     */
    if (KeTFTR_b_InputSpeedOvrdEnbl)
    {
        /* Switch: '<S17>/Switch35' incorporates:
         *  Constant: '<S75>/Calib'
         *  Inport: '<Root>/VeTISR_n_InputSpeed'
         */
        VeTFTI_n_Input_Spd = KeTFTR_n_InputSpeedOvrdVal;
    }

    /* End of Switch: '<S17>/Switch35' */

    /* Switch: '<S17>/Switch28' incorporates:
     *  Constant: '<S63>/Calib'
     */
    if (KeTFTR_b_OutputSpdOvrdEnbl)
    {
        /* Switch: '<S17>/Switch28' incorporates:
         *  Constant: '<S78>/Calib'
         *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
         */
        VeTFTI_n_Output_Spd = KeTFTR_n_OutputSpdOvrdVal;
    }

    /* End of Switch: '<S17>/Switch28' */

    /* Switch: '<S17>/Switch7' incorporates:
     *  Constant: '<S70>/Calib'
     */
    if (KeTFTR_b_VehicleSpdOvrdEnbl)
    {
        /* Switch: '<S17>/Switch7' incorporates:
         *  Constant: '<S81>/Calib'
         *  Inport: '<Root>/VeCSVR_v_VehSpd'
         */
        VeTFTI_v_Vehicle_Signed = KeTFTR_v_VehicleSpdOvrdVal;
    }

    /* End of Switch: '<S17>/Switch7' */

    /* Switch: '<S17>/Switch19' incorporates:
     *  Constant: '<S69>/Calib'
     */
    if (KeTFTR_b_TOT_ColdBiasSel_Dial)
    {
        /* Switch: '<S17>/Switch19' incorporates:
         *  Constant: '<S72>/Calib'
         *  Inport: '<Root>/VePMIR_e_TAP_ColdBiasSts'
         */
        VeTFTI_e_TOT_ColdBiasSts = KeTFTR_e_TOT_ColdBiasStsDial;
    }

    /* End of Switch: '<S17>/Switch19' */

    /* Switch: '<S17>/Switch21' incorporates:
     *  Constant: '<S38>/Calib'
     */
    if (KeTFTR_b_AmbTempFAOvrdEnbl)
    {
        /* Switch: '<S17>/Switch21' incorporates:
         *  Constant: '<S39>/Calib'
         *  Inport: '<Root>/VeAATR_b_EstAmbAirTempFA'
         */
        VeTFTI_b_Amb_TempFA = KeTFTR_b_AmbTempFAOvrdVal;
    }

    /* End of Switch: '<S17>/Switch21' */

    /* Switch: '<S17>/Switch16' incorporates:
     *  Constant: '<S66>/Calib'
     */
    if (KeTFTR_b_RTC_SleepTimeOvrdEnbl)
    {
        /* Switch: '<S17>/Switch16' incorporates:
         *  Constant: '<S79>/Calib'
         */
        VeTFTI_t_RTC_SleepTime = KeTFTR_t_RTC_SleepTimeOvrdVal;
    }
    else
    {
        /* Switch: '<S17>/Switch16' */
        VeTFTI_t_RTC_SleepTime = tmpRead;
    }

    /* End of Switch: '<S17>/Switch16' */

    /* Switch: '<S17>/Switch22' incorporates:
     *  Constant: '<S64>/Calib'
     */
    if (KeTFTR_b_RTC_CurrentTimeFAOvrdEnbl)
    {
        /* Switch: '<S17>/Switch22' incorporates:
         *  Constant: '<S65>/Calib'
         */
        VeTFTI_t_RTC_CurrentTimeFA = KeTFTR_b_RTC_CurrentTimeFAOvrdVal;
    }
    else
    {
        /* Switch: '<S17>/Switch22' */
        VeTFTI_t_RTC_CurrentTimeFA = rtb_Gain;
    }

    /* End of Switch: '<S17>/Switch22' */

    /* Switch: '<S17>/Switch5' incorporates:
     *  Constant: '<S61>/Calib'
     */
    if (KeTFTR_b_OBCMTemp1OvrdEnbl)
    {
        /* Switch: '<S17>/Switch5' incorporates:
         *  Constant: '<S33>/Calib'
         */
        VeTFTI_T_OBCM_Temp1 = KeTFTR_T_OBCMTemp1OvrdVal;
    }
    else
    {
        /* Switch: '<S17>/Switch5' */
        VeTFTI_T_OBCM_Temp1 = rtb_Sum4_b;
    }

    /* End of Switch: '<S17>/Switch5' */

    /* SignalConversion generated from: '<S2>/OutputsUpdate_TransOilTempExcess' incorporates:
     *  SignalConversion generated from: '<S2>/TransOilTemp'
     *  SignalConversion generated from: '<S2>/TransOilTempExcess_write'
     *  SignalConversion generated from: '<S2>/TransOilTempFA'
     *  SignalConversion generated from: '<S2>/TransOilTempFA_write'
     *  SignalConversion generated from: '<S2>/TransOilTempFin_write'
     *  SignalConversion generated from: '<S2>/TransOilTemp_FA_write'
     *  SignalConversion generated from: '<S2>/TransOilTemp_write'
     * */
#if Rte_SysCon_Variant_TFTR_4

    /* Outputs for Function Call SubSystem: '<S2>/Trans_Oil_Temp' */
    /* Gain: '<S117>/Gain' */
    VeTFTC_T_MtrA_Temp = 1.0F * VeTFTI_T_MtrA_Temp;

    /* Gain: '<S97>/Gain' */
    VeTFTC_T_MtrB_Temp = 1.0F * VeTFTI_T_MtrB_Temp;

    /* Outputs for Atomic SubSystem: '<S121>/DigitalLowpassResetEnabled' */
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S121>/FALSEConstant1'
     *  Constant: '<S121>/TRUEConstant1'
     *  Switch: '<S163>/Switch2'
     */
    if (false)
    {
        /* Switch: '<S163>/Switch1' */
        VeTFTC_T_MtrA_Temp_Fltd = VeTFTC_T_MtrA_Temp;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S163>/Switch1' incorporates:
             *  Constant: '<S167>/Calib'
             *  Product: '<S163>/Multiplication'
             *  Sum: '<S163>/Subtraction'
             *  Sum: '<S163>/Summation'
             *  Switch: '<S163>/Switch2'
             *  UnitDelay: '<S163>/UnitDelay'
             */
            VeTFTC_T_MtrA_Temp_Fltd = ((VeTFTC_T_MtrA_Temp -
                VeTFTC_T_MtrA_Temp_Fltd) * KeTFTR_k_MtrATemp_FltCoeff) +
                VeTFTC_T_MtrA_Temp_Fltd;
        }
    }

    /* End of Switch: '<S163>/Switch1' */
    /* End of Outputs for SubSystem: '<S121>/DigitalLowpassResetEnabled' */

    /* Gain: '<S103>/Gain' */
    VeTFTC_T_AuxPump_Temp = 1.0F * VeTFTI_T_AuxPump_Temp;

    /* Outputs for Atomic SubSystem: '<S121>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S121>/DigitalLowpassResetEnabled1' */
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S121>/FALSEConstant2'
     *  Constant: '<S121>/TRUEConstant2'
     *  Switch: '<S164>/Switch2'
     *  Switch: '<S165>/Switch1'
     */
    if (false)
    {
        /* Switch: '<S164>/Switch1' */
        VeTFTC_T_MtrB_Temp_Fltd = VeTFTC_T_MtrB_Temp;

        /* Switch: '<S165>/Switch1' */
        VeTFTC_T_AuxPmp_Temp_Fltd = VeTFTC_T_AuxPump_Temp;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S164>/Switch1' incorporates:
             *  Constant: '<S168>/Calib'
             *  Product: '<S164>/Multiplication'
             *  Sum: '<S164>/Subtraction'
             *  Sum: '<S164>/Summation'
             *  Switch: '<S164>/Switch2'
             *  UnitDelay: '<S164>/UnitDelay'
             */
            VeTFTC_T_MtrB_Temp_Fltd = ((VeTFTC_T_MtrB_Temp -
                VeTFTC_T_MtrB_Temp_Fltd) * KeTFTR_k_MtrBTemp_FltCoeff) +
                VeTFTC_T_MtrB_Temp_Fltd;
        }

        /* Switch: '<S165>/Switch2' incorporates:
         *  Constant: '<S121>/TRUEConstant3'
         */
        if (true)
        {
            /* Switch: '<S165>/Switch1' incorporates:
             *  Constant: '<S166>/Calib'
             *  Product: '<S165>/Multiplication'
             *  Sum: '<S165>/Subtraction'
             *  Sum: '<S165>/Summation'
             *  Switch: '<S165>/Switch2'
             *  UnitDelay: '<S165>/UnitDelay'
             */
            VeTFTC_T_AuxPmp_Temp_Fltd = ((VeTFTC_T_AuxPump_Temp -
                VeTFTC_T_AuxPmp_Temp_Fltd) * KeTFTR_k_AuxPmpTemp_FltCoeff) +
                VeTFTC_T_AuxPmp_Temp_Fltd;
        }

        /* End of Switch: '<S165>/Switch2' */
    }

    /* End of Switch: '<S164>/Switch1' */
    /* End of Outputs for SubSystem: '<S121>/DigitalLowpassResetEnabled1' */
    /* End of Outputs for SubSystem: '<S121>/DigitalLowpassResetEnabled2' */

    /* Gain: '<S106>/Gain' */
    VeTFTC_T_Amb_Temp = 1.0F * VeTFTI_T_Amb_Temp;

    /* Gain: '<S105>/Gain' */
    VeTFTC_b_AuxPump_TempFA = ((true) && (VeTFTI_b_AuxPump_TempFA));

    /* Gain: '<S109>/Gain' */
    VeTFTC_b_MtrA_TempFA = ((true) && (VeTFTI_b_MtrA_TempFA));

    /* Gain: '<S112>/Gain' */
    VeTFTC_b_MtrB_TempFA = ((true) && (VeTFTI_b_MtrB_TempFA));

    /* Gain: '<S114>/Gain' */
    rtb_Gain = ((true) && (VeTFTI_b_Amb_TempFA));

    /* SignalConversion generated from: '<S20>/VariantSource2' */
#if Rte_SysCon_Variant_TFTR_3

    /* VariantMerge generated from: '<S20>/VariantSource2' incorporates:
     *  Constant: '<S20>/Constant6'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = true;

#else

    /* VariantMerge generated from: '<S20>/VariantSource2' incorporates:
     *  Constant: '<S20>/Constant2'
     *  SignalConversion generated from: '<S20>/VariantSource2'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = false;

#endif

    /* End of SignalConversion generated from: '<S20>/VariantSource2' */

    /* Outputs for Enabled SubSystem: '<S20>/Neural_Network' incorporates:
     *  EnablePort: '<S93>/Enable'
     */
    if (rtb_VariantMerge_For_Variant_Source_Vari)
    {
        /* Sum: '<S132>/Sum4' incorporates:
         *  Constant: '<S124>/ConstantValue3'
         *  Constant: '<S131>/ConstantValue'
         *  Constant: '<S131>/ConstantValue1'
         *  Constant: '<S131>/ConstantValue2'
         *  Constant: '<S131>/ConstantValue3'
         *  Constant: '<S132>/ConstantValue'
         *  Constant: '<S132>/ConstantValue2'
         *  Constant: '<S154>/ConstantValue'
         *  Constant: '<S154>/ConstantValue1'
         *  Constant: '<S154>/ConstantValue10'
         *  Constant: '<S154>/ConstantValue11'
         *  Constant: '<S154>/ConstantValue2'
         *  Constant: '<S154>/ConstantValue3'
         *  Constant: '<S154>/ConstantValue4'
         *  Constant: '<S154>/ConstantValue5'
         *  Constant: '<S154>/ConstantValue6'
         *  Constant: '<S154>/ConstantValue7'
         *  Constant: '<S154>/ConstantValue8'
         *  Constant: '<S154>/ConstantValue9'
         *  Math: '<S133>/MathFunction'
         *  Product: '<S131>/Product'
         *  Product: '<S131>/Product1'
         *  Product: '<S131>/Product2'
         *  Product: '<S131>/Product3'
         *  Product: '<S132>/Product'
         *  Product: '<S154>/Product'
         *  Product: '<S154>/Product1'
         *  Product: '<S154>/Product2'
         *  Product: '<S154>/Product3'
         *  Sum: '<S124>/Sum'
         *  Sum: '<S131>/Sum'
         *  Sum: '<S154>/Sum'
         *  Sum: '<S154>/Sum1'
         *  Sum: '<S154>/Sum2'
         *  Sum: '<S154>/Sum3'
         *  Sum: '<S154>/Sum4'
         *  Sum: '<S154>/Sum5'
         *  Sum: '<S154>/Sum6'
         *  Sum: '<S154>/Sum7'
         *
         * About '<S133>/MathFunction':
         *  Operator: exp
         */
        rtb_Sum4_b = expf(((((((((VeTFTC_T_MtrA_Temp_Fltd + 12.0034428F) *
            0.0150926663F) + (-1.0F)) * 0.0696526915F) +
                              ((((VeTFTC_T_MtrB_Temp_Fltd + 18.5838184F) *
            0.0152004464F) + (-1.0F)) * 0.0334963724F)) +
                             ((((VeTFTC_T_AuxPmp_Temp_Fltd + 0.0F) *
                                0.00980392192F) + (-1.0F)) * 0.0457860604F)) +
                            ((((VeTFTC_T_Amb_Temp + 11.0F) * 0.0327868834F) +
                              (-1.0F)) * 0.00517707784F)) + 1.80277F) * (-2.0F))
            + 1.0F;

        /* Switch: '<S134>/Switch' incorporates:
         *  Constant: '<S134>/Constant'
         *  RelationalOperator: '<S134>/RelationalOperator'
         */
        if (rtb_Sum4_b > 0.0F)
        {
            /* Math: '<S134>/MathFunction' incorporates:
             *  Constant: '<S132>/ConstantValue3'
             */
            if ((rtb_Sum4_b < 0.0F) && ((-1.0F) > floorf(-1.0F)))
            {
                /* Switch: '<S140>/Switch2' */
                rtb_Sum2_f = -powf(-rtb_Sum4_b, -1.0F);
            }
            else
            {
                /* Switch: '<S140>/Switch2' */
                rtb_Sum2_f = powf(rtb_Sum4_b, -1.0F);
            }

            /* End of Math: '<S134>/MathFunction' */
        }
        else
        {
            /* Switch: '<S140>/Switch2' incorporates:
             *  Constant: '<S134>/Constant1'
             */
            rtb_Sum2_f = 0.0F;
        }

        /* End of Switch: '<S134>/Switch' */

        /* Outputs for Atomic SubSystem: '<S141>/Hysteresis' */
        /* Switch: '<S145>/Switch1' incorporates:
         *  Constant: '<S145>/ConstantValue'
         *  Constant: '<S147>/Calib'
         *  Constant: '<S149>/Calib'
         *  RelationalOperator: '<S145>/GreaterThan'
         *  RelationalOperator: '<S145>/GreaterThan1'
         *  Switch: '<S145>/Switch2'
         *  UnitDelay: '<S145>/UnitDelay'
         *  UnitDelay: '<S93>/UnitDelay'
         */
        if (TFTR_ac_DW.UnitDelay_DSTATE_c > KeTFTR_T_HiNeuralTemp_High_Range)
        {
            TFTR_ac_DW.UnitDelay_DSTATE_dy = true;
        }
        else
        {
            if (TFTR_ac_DW.UnitDelay_DSTATE_c < KeTFTR_T_LoNeuralTemp_High_Range)
            {
                /* Switch: '<S145>/Switch2' incorporates:
                 *  Constant: '<S145>/ConstantValue1'
                 *  UnitDelay: '<S145>/UnitDelay'
                 */
                TFTR_ac_DW.UnitDelay_DSTATE_dy = false;
            }
        }

        /* End of Switch: '<S145>/Switch1' */
        /* End of Outputs for SubSystem: '<S141>/Hysteresis' */

        /* Outputs for Atomic SubSystem: '<S141>/Hysteresis1' */
        /* Switch: '<S146>/Switch1' incorporates:
         *  Constant: '<S146>/ConstantValue'
         *  Constant: '<S148>/Calib'
         *  Constant: '<S150>/Calib'
         *  RelationalOperator: '<S146>/GreaterThan'
         *  RelationalOperator: '<S146>/GreaterThan1'
         *  Switch: '<S146>/Switch2'
         *  UnitDelay: '<S146>/UnitDelay'
         *  UnitDelay: '<S93>/UnitDelay'
         */
        if (TFTR_ac_DW.UnitDelay_DSTATE_c > KeTFTR_T_HiNeuralTemp_Low_range)
        {
            TFTR_ac_DW.UnitDelay_DSTATE_hk = true;
        }
        else
        {
            if (TFTR_ac_DW.UnitDelay_DSTATE_c < KeTFTR_T_LoNeuralTemp_Low_range)
            {
                /* Switch: '<S146>/Switch2' incorporates:
                 *  Constant: '<S146>/ConstantValue1'
                 *  UnitDelay: '<S146>/UnitDelay'
                 */
                TFTR_ac_DW.UnitDelay_DSTATE_hk = false;
            }
        }

        /* End of Switch: '<S146>/Switch1' */
        /* End of Outputs for SubSystem: '<S141>/Hysteresis1' */

        /* Logic: '<S141>/Logical7' incorporates:
         *  Constant: '<S151>/Calib'
         *  Logic: '<S141>/Logical10'
         *  Logic: '<S141>/Logical6'
         *  UnitDelay: '<S145>/UnitDelay'
         *  UnitDelay: '<S146>/UnitDelay'
         */
        VeTFTC_b_TO_TmpNeural_OoR_FA = ((KeTFTR_b_NeuralHys_Cnst) &&
            ((TFTR_ac_DW.UnitDelay_DSTATE_dy) ||
             (!TFTR_ac_DW.UnitDelay_DSTATE_hk)));

        /* Switch: '<S140>/Switch8' incorporates:
         *  Constant: '<S140>/ConstantValue4'
         *  Constant: '<S140>/ConstantValue5'
         */
        if (VeTFTC_b_MtrA_TempFA)
        {
            rtb_Sum4_b = 0.0F;
        }
        else
        {
            rtb_Sum4_b = 1.0F;
        }

        /* End of Switch: '<S140>/Switch8' */

        /* Switch: '<S140>/Switch6' incorporates:
         *  Constant: '<S140>/ConstantValue6'
         *  Constant: '<S140>/ConstantValue7'
         */
        if (VeTFTC_b_MtrB_TempFA)
        {
            tmp = 0.0F;
        }
        else
        {
            tmp = 1.0F;
        }

        /* End of Switch: '<S140>/Switch6' */

        /* Switch: '<S140>/Switch9' incorporates:
         *  Constant: '<S140>/ConstantValue8'
         *  Constant: '<S140>/ConstantValue9'
         */
        if (VeTFTC_b_AuxPump_TempFA)
        {
            tmp_0 = 0.0F;
        }
        else
        {
            tmp_0 = 1.0F;
        }

        /* End of Switch: '<S140>/Switch9' */

        /* Sum: '<S140>/Sum2' */
        rtb_Sum2_o = (rtb_Sum4_b + tmp) + tmp_0;

        /* Switch: '<S140>/Switch' incorporates:
         *  Constant: '<S140>/ConstantValue1'
         */
        if (VeTFTC_b_MtrA_TempFA)
        {
            rtb_Sum4_b = 0.0F;
        }
        else
        {
            rtb_Sum4_b = VeTFTC_T_MtrA_Temp_Fltd;
        }

        /* End of Switch: '<S140>/Switch' */

        /* Switch: '<S140>/Switch1' incorporates:
         *  Constant: '<S140>/ConstantValue2'
         */
        if (VeTFTC_b_MtrB_TempFA)
        {
            tmp = 0.0F;
        }
        else
        {
            tmp = VeTFTC_T_MtrB_Temp_Fltd;
        }

        /* End of Switch: '<S140>/Switch1' */

        /* Switch: '<S140>/Switch2' incorporates:
         *  Constant: '<S140>/ConstantValue3'
         */
        if (VeTFTC_b_AuxPump_TempFA)
        {
            tmp_0 = 0.0F;
        }
        else
        {
            tmp_0 = VeTFTC_T_AuxPmp_Temp_Fltd;
        }

        /* End of Switch: '<S140>/Switch2' */

        /* Sum: '<S140>/Sum' */
        rtb_Sum4_b = (rtb_Sum4_b + tmp) + tmp_0;

        /* Outputs for Atomic SubSystem: '<S140>/ProtectedDivision' */
        /* Switch: '<S144>/Switch1' incorporates:
         *  Constant: '<S144>/ConstantValue'
         *  Constant: '<S144>/ConstantValue1'
         *  Constant: '<S144>/ConstantValue2'
         *  Constant: '<S144>/ConstantValue3'
         *  Logic: '<S144>/AND'
         *  RelationalOperator: '<S144>/GreaterThanorEqual'
         *  RelationalOperator: '<S144>/GreaterThanorEqual1'
         *  RelationalOperator: '<S144>/NotEqual'
         *  RelationalOperator: '<S144>/NotEqual1'
         *  Switch: '<S144>/Switch2'
         *  Switch: '<S144>/Switch3'
         */
        if ((rtb_Sum4_b != 0.0F) && (rtb_Sum2_o != 0.0F))
        {
            /* Switch: '<S144>/Switch1' incorporates:
             *  Product: '<S144>/Division'
             */
            VeTFTC_b_TO_TmpAvgForRat = rtb_Sum4_b / rtb_Sum2_o;
        }
        else if (rtb_Sum4_b > 0.0F)
        {
            /* Switch: '<S144>/Switch2' incorporates:
             *  Constant: '<S144>/MAXFLOAT'
             *  Switch: '<S144>/Switch1'
             */
            VeTFTC_b_TO_TmpAvgForRat = 3.402823466E+38F;
        }
        else if (rtb_Sum4_b < 0.0F)
        {
            /* Switch: '<S144>/Switch3' incorporates:
             *  Constant: '<S144>/MINFLOAT'
             *  Switch: '<S144>/Switch1'
             *  Switch: '<S144>/Switch2'
             */
            VeTFTC_b_TO_TmpAvgForRat = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S144>/Switch1' incorporates:
             *  Constant: '<S144>/ConstantValue4'
             *  Switch: '<S144>/Switch2'
             *  Switch: '<S144>/Switch3'
             */
            VeTFTC_b_TO_TmpAvgForRat = 0.0F;
        }

        /* End of Switch: '<S144>/Switch1' */
        /* End of Outputs for SubSystem: '<S140>/ProtectedDivision' */

        /* RelationalOperator: '<S140>/Comparison' incorporates:
         *  Abs: '<S140>/Abs'
         *  Constant: '<S142>/Calib'
         *  Sum: '<S140>/Sum1'
         *  UnitDelay: '<S93>/UnitDelay'
         */
        VeTFTC_b_TO_TmpNeural_RatCheckRaw0_FA = (fabsf(VeTFTC_b_TO_TmpAvgForRat
            - TFTR_ac_DW.UnitDelay_DSTATE_c) > KeTFTR_T_NeuralTmp_Cmp);

        /* Logic: '<S140>/Logical9' incorporates:
         *  Constant: '<S140>/ConstantValue10'
         *  RelationalOperator: '<S140>/Comparison5'
         */
        VeTFTC_b_TO_TmpNeural_RatCheckRaw_FA = ((rtb_Sum2_o == 0.0F) ||
            (VeTFTC_b_TO_TmpNeural_RatCheckRaw0_FA));

        /* Switch: '<S140>/Switch7' incorporates:
         *  Constant: '<S140>/FALSEConstant3'
         *  Constant: '<S140>/TRUEConstant4'
         */
        if (VeTFTC_b_TO_TmpNeural_RatCheckRaw_FA)
        {
            rtb_VariantMerge_For_Variant_Source_Vari = true;
        }
        else
        {
            rtb_VariantMerge_For_Variant_Source_Vari = false;
        }

        /* End of Switch: '<S140>/Switch7' */

        /* Logic: '<S140>/Logical8' incorporates:
         *  Constant: '<S143>/Calib'
         */
        VeTFTC_b_TO_TmpNeural_RatCheck_FA = ((KeTFTR_b_NeuralAvg_Cnst) &&
            rtb_VariantMerge_For_Variant_Source_Vari);

        /* Logic: '<S126>/Logical4' incorporates:
         *  Constant: '<S136>/Calib'
         *  Constant: '<S137>/Calib'
         *  Constant: '<S138>/Calib'
         *  Constant: '<S139>/Calib'
         *  Logic: '<S126>/Logical'
         *  Logic: '<S126>/Logical1'
         *  Logic: '<S126>/Logical2'
         *  Logic: '<S126>/Logical3'
         */
        VeTFTC_b_TO_TmpNeural_FA = (((((((VeTFTC_b_AuxPump_TempFA) &&
            (KeTFTR_b_AuxPmpTemp_Cnst)) || ((VeTFTC_b_MtrA_TempFA) &&
            (KeTFTR_b_MtrATemp_Cnst))) || ((VeTFTC_b_MtrB_TempFA) &&
            (KeTFTR_b_MtrBTemp_Cnst))) || (rtb_Gain && (KeTFTR_b_AmbTemp_Cnst)))
            || (VeTFTC_b_TO_TmpNeural_OoR_FA)) ||
            (VeTFTC_b_TO_TmpNeural_RatCheck_FA));

        /* MinMax: '<S127>/MinMax1' */
        VeTFTC_T_TOTNeuralMaxLimit = fmaxf(fmaxf(VeTFTC_T_AuxPmp_Temp_Fltd,
            VeTFTC_T_MtrA_Temp_Fltd), VeTFTC_T_MtrB_Temp_Fltd);

        /* Sum: '<S155>/Sum4' incorporates:
         *  Constant: '<S125>/ConstantValue'
         *  Constant: '<S132>/ConstantValue1'
         *  Constant: '<S132>/ConstantValue4'
         *  Constant: '<S135>/ConstantValue'
         *  Constant: '<S155>/ConstantValue'
         *  Constant: '<S155>/ConstantValue4'
         *  Constant: '<S155>/ConstantValue8'
         *  Product: '<S132>/Product1'
         *  Product: '<S135>/Product'
         *  Product: '<S155>/Product'
         *  Sum: '<S125>/Sum'
         *  Sum: '<S132>/Sum3'
         *  Sum: '<S155>/Sum'
         */
        VeTFTC_T_TOTempNeuralOrgnl = ((((((rtb_Sum2_f * 2.0F) - 1.0F) *
            68.3692245F) + (-64.4300919F)) + 1.0F) * 61.4745F) + (-26.23F);

        /* Sum: '<S130>/Sum' incorporates:
         *  Constant: '<S156>/Calib'
         */
        VeTFTC_T_TOTempNeuralPre = VeTFTC_T_TOTempNeuralOrgnl +
            KeTFTR_T_TempEstShift;

        /* Switch: '<S127>/Switch2' incorporates:
         *  SignalConversion: '<S126>/SignalConversion'
         */
        if (VeTFTC_b_TO_TmpNeural_FA)
        {
            /* Switch: '<S127>/Switch2' incorporates:
             *  Constant: '<S152>/Calib'
             */
            VeTFTC_T_TransOilTempAvg_Neural = KeTFTR_T_DfltTmp_WhenFlt;
        }
        else
        {
            /* Switch: '<S127>/Switch2' */
            VeTFTC_T_TransOilTempAvg_Neural = VeTFTC_T_TOTempNeuralPre;
        }

        /* End of Switch: '<S127>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S127>/Limiter1' */
        /* Switch: '<S153>/Switch1' incorporates:
         *  RelationalOperator: '<S153>/RelationalOperator'
         */
        if (VeTFTC_T_TOTNeuralMaxLimit < VeTFTC_T_TransOilTempAvg_Neural)
        {
            /* Switch: '<S153>/Switch1' */
            VeTFTC_T_TOTempNeural = VeTFTC_T_TOTNeuralMaxLimit;
        }
        else
        {
            /* Switch: '<S153>/Switch1' */
            VeTFTC_T_TOTempNeural = VeTFTC_T_TransOilTempAvg_Neural;
        }

        /* End of Switch: '<S153>/Switch1' */

        /* Switch: '<S153>/Switch' incorporates:
         *  RelationalOperator: '<S153>/RelationalOperator1'
         */
        if (VeTFTC_T_TOTempNeural <= VeTFTC_T_Amb_Temp)
        {
            /* Switch: '<S153>/Switch' */
            VeTFTC_T_TOTempNeural = VeTFTC_T_Amb_Temp;
        }

        /* End of Switch: '<S153>/Switch' */
        /* End of Outputs for SubSystem: '<S127>/Limiter1' */

        /* Switch: '<S127>/Switch' */
        if (!rtb_Gain)
        {
            /* Switch: '<S127>/Switch' */
            VeTFTC_T_TransOilTempAvg_Neural = VeTFTC_T_TOTempNeural;
        }

        /* End of Switch: '<S127>/Switch' */

        /* SignalConversion: '<S127>/SignalConversion' incorporates:
         *  UnitDelay: '<S93>/UnitDelay'
         */
        TFTR_ac_DW.UnitDelay_DSTATE_c = VeTFTC_T_TransOilTempAvg_Neural;

        /* Merge: '<S158>/Merge' incorporates:
         *  SignalConversion generated from: '<S93>/TOTempNeural'
         *  UnitDelay: '<S93>/UnitDelay'
         */
        TFTR_ac_B.VeTFTC_T_TransOilTempFin = TFTR_ac_DW.UnitDelay_DSTATE_c;

        /* Merge: '<S158>/Merge1' incorporates:
         *  SignalConversion: '<S126>/SignalConversion'
         *  SignalConversion generated from: '<S93>/TOTempNeural_FA'
         */
        TFTR_ac_B.VeTFTC_b_TransOilTemp_FA = VeTFTC_b_TO_TmpNeural_FA;
    }

    /* End of Outputs for SubSystem: '<S20>/Neural_Network' */

    /* Gain: '<S94>/Gain' */
    VeTFTC_U_MtrA_Voltage = 1.0F * VeTFTI_U_MtrA_DCVolt;

    /* Gain: '<S95>/Gain' */
    VeTFTC_M_MtrB_Trq = 1.0F * VeTFTI_M_MtrB_TorqAchieved;

    /* Gain: '<S96>/Gain' */
    VeTFTC_n_MtrB_Speed = 1.0F * VeTFTI_n_MtrB_Spd;

    /* Gain: '<S98>/Gain' */
    VeTFTC_n_TransInputSpeed = 1.0F * VeTFTI_n_Input_Spd;

    /* Gain: '<S99>/Gain' */
    VeTFTC_n_TransOutput_Spd = 1.0F * VeTFTI_n_Output_Spd;

    /* Gain: '<S100>/Gain' */
    VeTFTC_T_ClntPump_OutletTemp = 1.0F * VeTFTI_T_ClntPump_OutletTemp;

    /* Gain: '<S101>/Gain' */
    VeTFTC_dV_TransClntPmp_FlwRt = 1.0F * VeTFTI_dV_TransClntPmp_FlwRt;

    /* Gain: '<S102>/Gain' */
    VeTFTC_I_MtrA_Current = 1.0F * VeTFTI_I_MtrA_DCCrnt;

    /* Gain: '<S104>/Gain' */
    VeTFTC_T_ClntPump_InletTemp = 1.0F * VeTFTI_T_ClntPump_InletTemp;

    /* Gain: '<S107>/Gain' */
    VeTFTC_v_VehSpd = 1.0F * VeTFTI_v_Vehicle_Signed;

    /* Gain: '<S108>/Gain' */
    VeTFTC_t_RealTime = 1U * VeTFTI_t_RealTimeClock;

    /* Gain: '<S110>/Gain' */
    VeTFTC_n_RadFan_Spd = 1.0F * VeTFTI_n_RadFanSpd;

    /* Gain: '<S111>/Gain' */
    VeTFTC_Pct_AGS_Pos = 1.0F * VeTFTI_Pct_AGS_Pos;

    /* Gain: '<S113>/Gain' */
    VeTFTC_M_MtrA_Trq = 1.0F * VeTFTI_M_MtrA_TorqAchieved;

    /* Gain: '<S115>/Gain' */
    VeTFTC_n_MtrA_Speed = 1.0F * VeTFTI_n_MtrA_Spd;

    /* Gain: '<S116>/Gain' */
    VeTFTC_b_TransOilTemp_PredFA = ((true) && (VeTFTD_b_TransOilTemp_PredFA));

    /* Gain: '<S118>/Gain' */
    VeTFTC_U_MtrB_Voltage = 1.0F * VeTFTI_U_MtrB_DCVolt;

    /* Gain: '<S119>/Gain' */
    VeTFTC_I_MtrB_Current = 1.0F * VeTFTI_I_MtrB_DCCrnt;

    /* Outputs for Atomic SubSystem: '<S159>/Hysteresis' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  Constant: '<S160>/ConstantValue'
     *  Constant: '<S161>/Calib'
     *  Constant: '<S162>/Calib'
     *  RelationalOperator: '<S160>/GreaterThan'
     *  RelationalOperator: '<S160>/GreaterThan1'
     *  Switch: '<S160>/Switch2'
     *  UnitDelay: '<S160>/UnitDelay'
     */
    if (rtb_TFTR_TransOilTemp_write_IRV > KeTFTR_T_HiTransOilTemp)
    {
        TFTR_ac_DW.UnitDelay_DSTATE_a4 = true;
    }
    else
    {
        if (rtb_TFTR_TransOilTemp_write_IRV < KeTFTR_T_LoTransOilTemp)
        {
            /* Switch: '<S160>/Switch2' incorporates:
             *  Constant: '<S160>/ConstantValue1'
             *  UnitDelay: '<S160>/UnitDelay'
             */
            TFTR_ac_DW.UnitDelay_DSTATE_a4 = false;
        }
    }

    /* End of Switch: '<S160>/Switch1' */
    /* End of Outputs for SubSystem: '<S159>/Hysteresis' */

    /* SignalConversion generated from: '<S20>/VariantSource' */
#if Rte_SysCon_Variant_TFTR_1

    /* VariantMerge generated from: '<S20>/VariantSource' incorporates:
     *  Constant: '<S20>/Constant4'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n = true;

#else

    /* VariantMerge generated from: '<S20>/VariantSource' incorporates:
     *  Constant: '<S20>/Constant1'
     *  SignalConversion generated from: '<S20>/VariantSource'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n = false;

#endif

    /* End of SignalConversion generated from: '<S20>/VariantSource' */

    /* Outputs for Enabled SubSystem: '<S20>/TransOil_HeatLoss' incorporates:
     *  EnablePort: '<S123>/Enable'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_n)
    {
        /* Outputs for Atomic SubSystem: '<S306>/EdgeRising5' */
        /* Logic: '<S379>/OR1' incorporates:
         *  UnitDelay: '<S379>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_Source_Vari =
            !TFTR_ac_DW.UnitDelay_DSTATE_e;

        /* Update for UnitDelay: '<S379>/UnitDelay' incorporates:
         *  Constant: '<S306>/TRUEConstant4'
         */
        TFTR_ac_DW.UnitDelay_DSTATE_e = true;

        /* Outputs for Atomic SubSystem: '<S306>/TimeSignal_Timer' */
        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S306>/TRUEConstant4'
         *  Constant: '<S382>/Calib'
         *  Logic: '<S379>/AND'
         *  Switch: '<S387>/Switch2'
         *  UnitDelay: '<S387>/UnitDelay'
         */
        if ((true) && rtb_VariantMerge_For_Variant_Source_Vari)
        {
            TFTR_ac_DW.UnitDelay_DSTATE_h = KeTFTR_t_InitTempAvg_IV;
        }
        else
        {
            if (true)
            {
                /* UnitDelay: '<S387>/UnitDelay' incorporates:
                 *  Constant: '<S383>/Calib'
                 *  Constant: '<S387>/ConstantValue4'
                 *  MinMax: '<S387>/Maximum'
                 *  Sum: '<S387>/Subtraction'
                 *  Switch: '<S387>/Switch2'
                 */
                TFTR_ac_DW.UnitDelay_DSTATE_h = fmaxf
                    (TFTR_ac_DW.UnitDelay_DSTATE_h - KeTFTR_t_dT, 0.0F);
            }
        }

        /* End of Switch: '<S387>/Switch1' */
        /* End of Outputs for SubSystem: '<S306>/EdgeRising5' */

        /* RelationalOperator: '<S387>/GreaterThan1' incorporates:
         *  Constant: '<S387>/ConstantValue2'
         *  UnitDelay: '<S387>/UnitDelay'
         */
        VeTFTC_b_InitValueTrig = (TFTR_ac_DW.UnitDelay_DSTATE_h > 0.0F);

        /* End of Outputs for SubSystem: '<S306>/TimeSignal_Timer' */

        /* Logic: '<S306>/Logical3' */
        rtb_VariantMerge_For_Variant_Source_Vari = !VeTFTC_b_InitValueTrig;

        /* Outputs for Atomic SubSystem: '<S306>/EdgeRising6' */
        /* Logic: '<S380>/AND' incorporates:
         *  Logic: '<S380>/OR1'
         *  UnitDelay: '<S380>/UnitDelay'
         */
        VeTFTR_b_TransOilTemp_Reset = (rtb_VariantMerge_For_Variant_Source_Vari &&
            (!TFTR_ac_DW.UnitDelay_DSTATE_i));

        /* Update for UnitDelay: '<S380>/UnitDelay' */
        TFTR_ac_DW.UnitDelay_DSTATE_i = rtb_VariantMerge_For_Variant_Source_Vari;

        /* End of Outputs for SubSystem: '<S306>/EdgeRising6' */

        /* Outputs for Atomic SubSystem: '<S306>/EdgeRising7' */
        /* Logic: '<S381>/OR1' incorporates:
         *  UnitDelay: '<S381>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n =
            !TFTR_ac_DW.UnitDelay_DSTATE_cl;

        /* Update for UnitDelay: '<S381>/UnitDelay' incorporates:
         *  Constant: '<S306>/TRUEConstant5'
         */
        TFTR_ac_DW.UnitDelay_DSTATE_cl = true;

        /* Outputs for Atomic SubSystem: '<S386>/SignalLatchOnWithReset' */
        /* Logic: '<S394>/OR1' incorporates:
         *  Constant: '<S306>/TRUEConstant5'
         *  Logic: '<S381>/AND'
         *  Logic: '<S394>/NOT'
         *  Logic: '<S394>/OR'
         *  UnitDelay: '<S394>/UnitDelay'
         */
        TFTR_ac_DW.UnitDelay_DSTATE_g = ((VeTFTR_b_TransOilTemp_Reset) ||
            (((!true) || (!rtb_VariantMerge_For_Variant_Source_Va_n)) &&
             (TFTR_ac_DW.UnitDelay_DSTATE_g)));

        /* End of Outputs for SubSystem: '<S386>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S306>/EdgeRising7' */

        /* If: '<S306>/If1' */
        if (VeTFTC_b_InitValueTrig)
        {
            /* Outputs for IfAction SubSystem: '<S306>/Subsystem' incorporates:
             *  ActionPort: '<S385>/ActionPort'
             */
            /* Sum: '<S385>/Sum4' incorporates:
             *  Gain: '<S103>/Gain'
             *  Gain: '<S117>/Gain'
             *  Gain: '<S97>/Gain'
             *  Lookup_n-D: '<S390>/Vector'
             *  Lookup_n-D: '<S391>/Vector'
             *  Lookup_n-D: '<S392>/Vector'
             *  Product: '<S385>/Product1'
             *  Product: '<S385>/Product2'
             *  Product: '<S385>/Product3'
             */
            VeTFTR_T_TempSumIV = ((VeTFTC_T_AuxPump_Temp * look1_iflf_binlca_16a
                                   (VeTFTC_T_AuxPump_Temp, ((const float32 *)
                &(KxTFTR_k_AuxPmp_TempFact[0])), ((const float32 *)
                &(KtTFTR_k_AuxPmp_TempFact[0])), 17U)) + (VeTFTC_T_MtrA_Temp *
                                   look1_iflf_binlca_16a(VeTFTC_T_MtrA_Temp, ((
                const float32 *)&(KxTFTR_k_MtrA_TempFact[0])), ((const float32 *)
                &(KtTFTR_k_MtrA_TempFact[0])), 17U))) + (VeTFTC_T_MtrB_Temp *
                look1_iflf_binlca_16a(VeTFTC_T_MtrB_Temp, ((const float32 *)
                &(KxTFTR_k_MtrB_TempFact[0])), ((const float32 *)
                &(KtTFTR_k_MtrB_TempFact[0])), 16U));

            /* Outputs for Atomic SubSystem: '<S385>/ProtectedDivision' */
            /* Switch: '<S393>/Switch1' incorporates:
             *  Constant: '<S388>/Calib'
             *  Constant: '<S393>/ConstantValue'
             *  Constant: '<S393>/ConstantValue1'
             *  Constant: '<S393>/ConstantValue2'
             *  Constant: '<S393>/ConstantValue3'
             *  Logic: '<S393>/AND'
             *  RelationalOperator: '<S393>/GreaterThanorEqual'
             *  RelationalOperator: '<S393>/GreaterThanorEqual1'
             *  RelationalOperator: '<S393>/NotEqual'
             *  RelationalOperator: '<S393>/NotEqual1'
             *  Switch: '<S393>/Switch2'
             *  Switch: '<S393>/Switch3'
             */
            if ((VeTFTR_T_TempSumIV != 0.0F) && (KeTFTR_Cnt_TempAvgDivideFact !=
                 0.0F))
            {
                /* Switch: '<S393>/Switch1' incorporates:
                 *  Product: '<S393>/Division'
                 */
                VeTFTR_k_TestSignal3 = VeTFTR_T_TempSumIV /
                    KeTFTR_Cnt_TempAvgDivideFact;
            }
            else if (VeTFTR_T_TempSumIV > 0.0F)
            {
                /* Switch: '<S393>/Switch2' incorporates:
                 *  Constant: '<S393>/MAXFLOAT'
                 *  Switch: '<S393>/Switch1'
                 */
                VeTFTR_k_TestSignal3 = 3.402823466E+38F;
            }
            else if (VeTFTR_T_TempSumIV < 0.0F)
            {
                /* Switch: '<S393>/Switch3' incorporates:
                 *  Constant: '<S393>/MINFLOAT'
                 *  Switch: '<S393>/Switch1'
                 *  Switch: '<S393>/Switch2'
                 */
                VeTFTR_k_TestSignal3 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S393>/Switch1' incorporates:
                 *  Constant: '<S393>/ConstantValue4'
                 *  Switch: '<S393>/Switch2'
                 *  Switch: '<S393>/Switch3'
                 */
                VeTFTR_k_TestSignal3 = 0.0F;
            }

            /* End of Switch: '<S393>/Switch1' */
            /* End of Outputs for SubSystem: '<S385>/ProtectedDivision' */

            /* Lookup_n-D: '<S389>/Vector' incorporates:
             *  Gain: '<S106>/Gain'
             *  Switch: '<S393>/Switch1'
             */
            VeTFTR_k_TestSignal2 = look2_iflf_binlca_16a(VeTFTR_k_TestSignal3,
                VeTFTC_T_Amb_Temp, ((const float32 *)&(KxTFTR_k_AmbientTempFac[0])),
                ((const float32 *)&(KyTFTR_k_AmbientTempFac[0])), ((const
                float32 *)&(KtTFTR_k_AmbientTempFac[0])), (const uint32*)
                TFTR_ac_ConstP.pooled8, 17U);

            /* Sum: '<S385>/Sum2' */
            VeTFTC_T_TempAvgIV_prelatch = VeTFTR_k_TestSignal3 +
                VeTFTR_k_TestSignal2;

            /* End of Outputs for SubSystem: '<S306>/Subsystem' */
        }

        /* End of If: '<S306>/If1' */

        /* Switch: '<S386>/Switch1' incorporates:
         *  UnitDelay: '<S394>/UnitDelay'
         */
        if (!TFTR_ac_DW.UnitDelay_DSTATE_g)
        {
            /* Switch: '<S386>/Switch1' */
            VeTFTR_T_TempAvgIVLatch = VeTFTC_T_TempAvgIV_prelatch;
        }

        /* End of Switch: '<S386>/Switch1' */

        /* Sum: '<S306>/Sum1' */
        VeTFTC_T_TransOilTemp_Dlta = rtb_TmpSignalConversionAtTransOilTemp_Sa -
            VeTFTC_T_AuxPump_Temp;

        /* Sum: '<S306>/Sum2' */
        VeTFTR_t_RealTimeDiff = VeTFTC_t_RealTime -
            rtb_TmpSignalConversionAtRealTime_Saved_;

        /* DataTypeConversion: '<S306>/DataTypeConversion' */
        VeTFTR_t_RealTimeDiff_conv = (float32)VeTFTR_t_RealTimeDiff;

        /* Product: '<S306>/Product1' incorporates:
         *  DataTypeConversion: '<S306>/DataTypeConversion'
         *  Lookup_n-D: '<S384>/Vector'
         */
        VeTFTC_T_TransOilTemp_Frac = VeTFTC_T_TransOilTemp_Dlta *
            look1_iflf_binlca_16a(VeTFTR_t_RealTimeDiff_conv, ((const float32 *)
            &(KxTFTR_k_TransOil_CoolDwnFrac[0])), ((const float32 *)
            &(KtTFTR_k_TransOil_CoolDwnFrac[0])), 5U);

        /* Sum: '<S306>/Sum3' */
        VeTFTC_T_TransOilTemp_IV = rtb_TmpSignalConversionAtTransOilTemp_Sa -
            VeTFTC_T_TransOilTemp_Frac;

        /* Switch: '<S306>/Switch' */
        if (rtb_VariantMerge_For_Variant_Source_Vari)
        {
            /* Switch: '<S306>/Switch' */
            VeTFTR_T_TempAvgIV = VeTFTR_T_TempAvgIVLatch;
        }
        else
        {
            /* Switch: '<S306>/Switch' */
            VeTFTR_T_TempAvgIV = VeTFTC_T_TransOilTemp_IV;
        }

        /* End of Switch: '<S306>/Switch' */

        /* Switch: '<S308>/Switch1' incorporates:
         *  Constant: '<S123>/TRUEConstant'
         *  Switch: '<S308>/Switch2'
         */
        if (VeTFTC_b_InitValueTrig)
        {
            /* Switch: '<S308>/Switch1' */
            VeTFTC_T_TransOil_TempPredPrev = VeTFTR_T_TempAvgIV;
        }
        else
        {
            if (true)
            {
                /* Switch: '<S308>/Switch2' incorporates:
                 *  Switch: '<S308>/Switch1'
                 *  UnitDelay: '<S308>/UnitDelay'
                 */
                VeTFTC_T_TransOil_TempPredPrev = TFTR_ac_DW.UnitDelay_DSTATE;
            }
        }

        /* End of Switch: '<S308>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S123>/Amb_HeatLss' */
        /* Outputs for Atomic SubSystem: '<S301>/Ambient_HL_Area' */
        /* Lookup_n-D: '<S315>/Vector' incorporates:
         *  Gain: '<S106>/Gain'
         */
        VeTFTC_A_AmbHeatLoss_Area = look1_iflf_binlca_16a(VeTFTC_T_Amb_Temp, ((
            const float32 *)&(KxTFTR_A_AmbHeatLoss_Area[0])), ((const float32 *)
            &(KtTFTR_A_AmbHeatLoss_Area[0])), 12U);

        /* End of Outputs for SubSystem: '<S301>/Ambient_HL_Area' */

        /* Outputs for Atomic SubSystem: '<S301>/NaturalConv_dT' */
        /* Sum: '<S316>/Subtraction1' incorporates:
         *  Constant: '<S319>/Calib'
         *  Product: '<S316>/Multiplication'
         *  Sum: '<S316>/Subtraction'
         *  UnitDelay: '<S311>/UnitDelay'
         */
        VeTFTC_T_NaturalConvTemp = ((VeTFTC_T_Amb_Temp -
            TFTR_ac_DW.UnitDelay_DSTATE_f) * KeTFTR_k_Convct_FltCoeff) +
            TFTR_ac_DW.UnitDelay_DSTATE_f;

        /* Outputs for Atomic SubSystem: '<S311>/EdgeRising' */
        /* Logic: '<S318>/OR1' incorporates:
         *  UnitDelay: '<S318>/UnitDelay'
         */
        rtb_VariantMerge_For_Variant_Source_Vari =
            !TFTR_ac_DW.UnitDelay_DSTATE_gn;

        /* Update for UnitDelay: '<S318>/UnitDelay' incorporates:
         *  Constant: '<S311>/TRUEConstant'
         */
        TFTR_ac_DW.UnitDelay_DSTATE_gn = true;

        /* Outputs for Atomic SubSystem: '<S311>/LowpassTResetEnabled' */
        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S311>/TRUEConstant'
         *  Logic: '<S318>/AND'
         *  Switch: '<S321>/Switch2'
         *  UnitDelay: '<S311>/UnitDelay'
         */
        if ((true) && rtb_VariantMerge_For_Variant_Source_Vari)
        {
            TFTR_ac_DW.UnitDelay_DSTATE_f = VeTFTC_T_Amb_Temp;
        }
        else if (true)
        {
            /* UnitDelay: '<S311>/UnitDelay' incorporates:
             *  Constant: '<S319>/Calib'
             *  Constant: '<S320>/Calib'
             *  MinMax: '<S321>/Maximum'
             *  Product: '<S321>/Multiplication'
             *  Product: '<S321>/Multiplication1'
             *  Sum: '<S321>/Subtraction'
             *  Sum: '<S321>/Summation'
             *  Switch: '<S321>/Switch2'
             *  UnitDelay: '<S321>/UnitDelay'
             */
            TFTR_ac_DW.UnitDelay_DSTATE_f = (((VeTFTC_T_Amb_Temp -
                TFTR_ac_DW.UnitDelay_DSTATE_o) * KeTFTR_t_dT) * (1.0F / fmaxf
                (KeTFTR_k_Convct_FltCoeff, KeTFTR_t_dT))) +
                TFTR_ac_DW.UnitDelay_DSTATE_o;
        }
        else
        {
            /* UnitDelay: '<S311>/UnitDelay' incorporates:
             *  Switch: '<S321>/Switch2'
             *  UnitDelay: '<S321>/UnitDelay'
             */
            TFTR_ac_DW.UnitDelay_DSTATE_f = TFTR_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S321>/Switch1' */
        /* End of Outputs for SubSystem: '<S311>/EdgeRising' */

        /* Update for UnitDelay: '<S321>/UnitDelay' incorporates:
         *  UnitDelay: '<S311>/UnitDelay'
         */
        TFTR_ac_DW.UnitDelay_DSTATE_o = TFTR_ac_DW.UnitDelay_DSTATE_f;

        /* End of Outputs for SubSystem: '<S311>/LowpassTResetEnabled' */

        /* Sum: '<S311>/Sum1' */
        VeTFTC_T_NaturalConvDeltaTemp = VeTFTC_T_TransOil_TempPredPrev -
            VeTFTC_T_NaturalConvTemp;

        /* End of Outputs for SubSystem: '<S301>/NaturalConv_dT' */

        /* Outputs for Atomic SubSystem: '<S301>/TFTC_Process_CFM' */
        /* If: '<S322>/If' incorporates:
         *  Constant: '<S328>/Calib'
         *  Constant: '<S329>/Calib'
         *  Logic: '<S322>/Logical'
         *  RelationalOperator: '<S322>/Comparison'
         *  RelationalOperator: '<S322>/Comparison2'
         */
        if ((VeTFTC_Pct_AGS_Pos >= KeTFTR_Pct_AGS_ON_Min) && (VeTFTC_Pct_AGS_Pos
             <= KeTFTR_Pct_AGS_ON_Max))
        {
            /* Outputs for IfAction SubSystem: '<S312>/TFTC_AGSON_VolumetricCapacity' incorporates:
             *  ActionPort: '<S326>/ActionPort'
             */
            /* Merge: '<S312>/Merge' incorporates:
             *  Gain: '<S107>/Gain'
             *  Gain: '<S110>/Gain'
             *  Lookup_n-D: '<S333>/Vector'
             */
            VeTFTC_dV_RadFan_CFM = look2_iflf_binlca_16a(VeTFTC_v_VehSpd,
                VeTFTC_n_RadFan_Spd, ((const float32 *)&(KxTFTR_dV_RadFanON_CFM
                [0])), ((const float32 *)&(KyTFTR_dV_RadFanON_CFM[0])), ((const
                float32 *)&(KtTFTR_dV_RadFanON_CFM[0])), (const uint32*)
                TFTR_ac_ConstP.Vector_maxIndex_c, 5U);

            /* End of Outputs for SubSystem: '<S312>/TFTC_AGSON_VolumetricCapacity' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S312>/TFTC_AGSOFF_VolumetricCapacity' incorporates:
             *  ActionPort: '<S325>/ActionPort'
             */
            /* Merge: '<S312>/Merge' incorporates:
             *  Gain: '<S107>/Gain'
             *  Gain: '<S111>/Gain'
             *  Lookup_n-D: '<S331>/Vector'
             */
            VeTFTC_dV_RadFan_CFM = look2_iflf_binlca_16a(VeTFTC_v_VehSpd,
                VeTFTC_Pct_AGS_Pos, ((const float32 *)&(KxTFTR_dV_RadFanOFF_CFM
                [0])), ((const float32 *)&(KyTFTR_dV_RadFanOFF_CFM[0])), ((const
                float32 *)&(KtTFTR_dV_RadFanOFF_CFM[0])), (const uint32*)
                TFTR_ac_ConstP.Vector_maxIndex_k, 9U);

            /* End of Outputs for SubSystem: '<S312>/TFTC_AGSOFF_VolumetricCapacity' */
        }

        /* End of If: '<S322>/If' */

        /* Lookup_n-D: '<S324>/Vector' incorporates:
         *  Merge: '<S312>/Merge'
         */
        VeTFTC_Cf_CoefOfConvection = look1_iflf_binlca_16a(VeTFTC_dV_RadFan_CFM,
            ((const float32 *)&(KxTFTR_Cf_CoefOfConvection[0])), ((const float32
            *)&(KtTFTR_Cf_CoefOfConvection[0])), 8U);

        /* End of Outputs for SubSystem: '<S301>/TFTC_Process_CFM' */

        /* Product: '<S313>/Product' */
        VeTFTC_P_TransAmbient_HeatLoss = (VeTFTC_Cf_CoefOfConvection *
            VeTFTC_A_AmbHeatLoss_Area) * VeTFTC_T_NaturalConvDeltaTemp;

        /* End of Outputs for SubSystem: '<S123>/Amb_HeatLss' */

        /* Outputs for Atomic SubSystem: '<S123>/OilClnt_HeatLoss' */
        /* Outputs for Atomic SubSystem: '<S304>/PIM_HL' */
        /* Outputs for Atomic SubSystem: '<S123>/MtrA_HeatLoss' */
        /* Abs: '<S302>/Abs1' incorporates:
         *  Abs: '<S343>/Abs3'
         */
        rtb_Sum4_b = fabsf(VeTFTC_n_MtrA_Speed);

        /* End of Outputs for SubSystem: '<S304>/PIM_HL' */
        /* End of Outputs for SubSystem: '<S123>/OilClnt_HeatLoss' */

        /* Lookup_n-D: '<S336>/Vector' incorporates:
         *  Abs: '<S302>/Abs1'
         */
        VeTFTC_k_MtrA_HeatTrnsfCoeff = look1_iflf_binlca_16a(rtb_Sum4_b, ((const
            float32 *)&(KxTFTR_k_MtrA_HeatTrnsfCoeff[0])), ((const float32 *)
            &(KtTFTR_k_MtrA_HeatTrnsfCoeff[0])), 4U);

        /* Sum: '<S302>/Sum2' */
        VeTFTC_T_MtrATempDiff = VeTFTC_T_MtrA_Temp -
            VeTFTC_T_TransOil_TempPredPrev;

        /* Product: '<S302>/Product1' */
        VeTFTC_P_MtrA_HeatLossHTC = VeTFTC_k_MtrA_HeatTrnsfCoeff *
            VeTFTC_T_MtrATempDiff;

        /* End of Outputs for SubSystem: '<S123>/MtrA_HeatLoss' */

        /* Outputs for Atomic SubSystem: '<S123>/OilClnt_HeatLoss' */
        /* Outputs for Atomic SubSystem: '<S304>/PIM_HL' */
        /* Outputs for Atomic SubSystem: '<S123>/MtrB_HeatLoss' */
        /* Abs: '<S303>/Abs1' incorporates:
         *  Abs: '<S343>/Abs5'
         */
        rtb_TmpSignalConversionAtTransOilTemp_Sa = fabsf(VeTFTC_n_MtrB_Speed);

        /* End of Outputs for SubSystem: '<S304>/PIM_HL' */
        /* End of Outputs for SubSystem: '<S123>/OilClnt_HeatLoss' */

        /* Lookup_n-D: '<S338>/Vector' incorporates:
         *  Abs: '<S303>/Abs1'
         */
        VeTFTC_k_MtrB_HeatTrnsfCoeff = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtTransOilTemp_Sa, ((const float32 *)
              &(KxTFTR_k_MtrB_HeatTrnsfCoeff[0])), ((const float32 *)
              &(KtTFTR_k_MtrB_HeatTrnsfCoeff[0])), 7U);

        /* Sum: '<S303>/Sum2' */
        VeTFTC_T_MtrBTempDiff = VeTFTC_T_MtrB_Temp -
            VeTFTC_T_TransOil_TempPredPrev;

        /* Product: '<S303>/Product1' */
        VeTFTC_P_MtrB_HeatLossHTC = VeTFTC_k_MtrB_HeatTrnsfCoeff *
            VeTFTC_T_MtrBTempDiff;

        /* End of Outputs for SubSystem: '<S123>/MtrB_HeatLoss' */

        /* Outputs for Atomic SubSystem: '<S123>/OilClnt_HeatLoss' */
        /* Outputs for Atomic SubSystem: '<S304>/ClntFlowRate' */
        /* Outputs for Atomic SubSystem: '<S339>/ProtectedDivision' */
        /* Switch: '<S348>/Switch1' incorporates:
         *  Constant: '<S346>/Calib'
         *  Constant: '<S348>/ConstantValue'
         *  Constant: '<S348>/ConstantValue1'
         *  Constant: '<S348>/ConstantValue2'
         *  Constant: '<S348>/ConstantValue3'
         *  Logic: '<S348>/AND'
         *  RelationalOperator: '<S348>/GreaterThanorEqual'
         *  RelationalOperator: '<S348>/GreaterThanorEqual1'
         *  RelationalOperator: '<S348>/NotEqual'
         *  RelationalOperator: '<S348>/NotEqual1'
         *  Switch: '<S348>/Switch2'
         *  Switch: '<S348>/Switch3'
         */
        if ((VeTFTC_dV_TransClntPmp_FlwRt != 0.0F) &&
                (KeTFTR_Cf_TransClntPmpVolFlow != 0.0F))
        {
            /* Switch: '<S348>/Switch1' incorporates:
             *  Product: '<S348>/Division'
             */
            rtb_Sum2_f = VeTFTC_dV_TransClntPmp_FlwRt /
                KeTFTR_Cf_TransClntPmpVolFlow;
        }
        else if (VeTFTC_dV_TransClntPmp_FlwRt > 0.0F)
        {
            /* Switch: '<S348>/Switch2' incorporates:
             *  Constant: '<S348>/MAXFLOAT'
             *  Switch: '<S348>/Switch1'
             */
            rtb_Sum2_f = 3.402823466E+38F;
        }
        else if (VeTFTC_dV_TransClntPmp_FlwRt < 0.0F)
        {
            /* Switch: '<S348>/Switch3' incorporates:
             *  Constant: '<S348>/MINFLOAT'
             *  Switch: '<S348>/Switch1'
             *  Switch: '<S348>/Switch2'
             */
            rtb_Sum2_f = (-3.402823466E+38F);
        }
        else
        {
            /* Switch: '<S348>/Switch1' incorporates:
             *  Constant: '<S348>/ConstantValue4'
             *  Switch: '<S348>/Switch2'
             *  Switch: '<S348>/Switch3'
             */
            rtb_Sum2_f = 0.0F;
        }

        /* End of Switch: '<S348>/Switch1' */
        /* End of Outputs for SubSystem: '<S339>/ProtectedDivision' */

        /* Product: '<S339>/Product' incorporates:
         *  Gain: '<S104>/Gain'
         *  Lookup_n-D: '<S347>/Vector'
         */
        VeTFTC_dm_ExternalClntMassFlow = rtb_Sum2_f * look1_iflf_binlca_16a
            (VeTFTC_T_ClntPump_InletTemp, ((const float32 *)
              &(KxTFTR_rho_TransClntDensity[0])), ((const float32 *)
              &(KtTFTR_rho_TransClntDensity[0])), 18U);

        /* End of Outputs for SubSystem: '<S304>/ClntFlowRate' */

        /* Outputs for Atomic SubSystem: '<S304>/Clnt_MeasTemp' */
        /* Sum: '<S340>/Sum1' */
        VeTFTC_T_TransClntMeasTempIn = VeTFTC_T_ClntPump_OutletTemp -
            VeTFTC_T_ClntPump_InletTemp;

        /* End of Outputs for SubSystem: '<S304>/Clnt_MeasTemp' */

        /* Outputs for Atomic SubSystem: '<S304>/Clnt_SpecificHeat' */
        /* Lookup_n-D: '<S351>/Vector' incorporates:
         *  Gain: '<S104>/Gain'
         */
        VeTFTC_S_TransClntSpecificHeat = look1_iflf_binlca_16a
            (VeTFTC_T_ClntPump_InletTemp, ((const float32 *)
              &(KxTFTR_S_TransClntSpecificHeat[0])), ((const float32 *)
              &(KtTFTR_S_TransClntSpecificHeat[0])), 18U);

        /* End of Outputs for SubSystem: '<S304>/Clnt_SpecificHeat' */

        /* Outputs for Atomic SubSystem: '<S304>/PIM_HL' */
        /* Sum: '<S343>/Sum2' incorporates:
         *  Abs: '<S343>/Abs2'
         *  Constant: '<S343>/ConstantValue1'
         *  Lookup_n-D: '<S353>/Vector'
         */
        VeTFTC_Pct_MtrA_InvEfficiency = 1.0F - look2_iflf_binlca_16a(fabsf
            (VeTFTC_M_MtrA_Trq), rtb_Sum4_b, ((const float32 *)
            &(KxTFTR_Pct_MtrA_InvEfficiency[0])), ((const float32 *)
            &(KyTFTR_Pct_MtrA_InvEfficiency[0])), ((const float32 *)
            &(KtTFTR_Pct_MtrA_InvEfficiency[0])), (const uint32*)
            TFTR_ac_ConstP.pooled7, 26U);

        /* Sum: '<S343>/Sum3' incorporates:
         *  Abs: '<S343>/Abs4'
         *  Constant: '<S343>/ConstantValue2'
         *  Lookup_n-D: '<S354>/Vector'
         */
        VeTFTC_Pct_MtrB_InvEfficiency = 1.0F - look2_iflf_binlca_16a(fabsf
            (VeTFTC_M_MtrB_Trq), rtb_TmpSignalConversionAtTransOilTemp_Sa, ((
            const float32 *)&(KxTFTR_Pct_MtrB_InvEfficiency[0])), ((const
            float32 *)&(KyTFTR_Pct_MtrB_InvEfficiency[0])), ((const float32 *)
            &(KtTFTR_Pct_MtrB_InvEfficiency[0])), (const uint32*)
            TFTR_ac_ConstP.Vector_maxIndex_n, 33U);

        /* Sum: '<S343>/Sum1' incorporates:
         *  Abs: '<S343>/Abs'
         *  Abs: '<S343>/Abs1'
         *  Product: '<S343>/Product1'
         *  Product: '<S343>/Product2'
         */
        VeTFTC_P_PIM_HeatLoss_ToClnt = ((VeTFTC_U_MtrA_Voltage * fabsf
            (VeTFTC_I_MtrA_Current)) * VeTFTC_Pct_MtrA_InvEfficiency) +
            ((VeTFTC_U_MtrB_Voltage * fabsf(VeTFTC_I_MtrB_Current)) *
             VeTFTC_Pct_MtrB_InvEfficiency);

        /* End of Outputs for SubSystem: '<S304>/PIM_HL' */

        /* Product: '<S344>/Product' */
        VeTFTC_P_ChangelnClntTemp = (VeTFTC_dm_ExternalClntMassFlow *
            VeTFTC_S_TransClntSpecificHeat) * VeTFTC_T_TransClntMeasTempIn;

        /* Sum: '<S344>/Sum1' */
        VeTFTC_P_CalcTransClnt_HeatLoss = VeTFTC_P_ChangelnClntTemp -
            VeTFTC_P_PIM_HeatLoss_ToClnt;

        /* Outputs for Atomic SubSystem: '<S344>/Limiter' */
        /* Switch: '<S358>/Switch1' incorporates:
         *  Constant: '<S356>/Calib'
         *  RelationalOperator: '<S358>/RelationalOperator'
         */
        if (KeTFTR_E_MaxTransClntHeatLoss < VeTFTC_P_CalcTransClnt_HeatLoss)
        {
            /* Switch: '<S358>/Switch1' */
            rtb_TmpSignalConversionAtTransOilTemp_Sa =
                KeTFTR_E_MaxTransClntHeatLoss;
        }
        else
        {
            /* Switch: '<S358>/Switch1' */
            rtb_TmpSignalConversionAtTransOilTemp_Sa =
                VeTFTC_P_CalcTransClnt_HeatLoss;
        }

        /* End of Switch: '<S358>/Switch1' */

        /* Switch: '<S358>/Switch' incorporates:
         *  Constant: '<S344>/ConstantValue4'
         *  RelationalOperator: '<S358>/RelationalOperator1'
         */
        if (rtb_TmpSignalConversionAtTransOilTemp_Sa <= 0.0F)
        {
            rtb_TmpSignalConversionAtTransOilTemp_Sa = 0.0F;
        }

        /* End of Switch: '<S358>/Switch' */
        /* End of Outputs for SubSystem: '<S344>/Limiter' */

        /* Product: '<S344>/Product1' incorporates:
         *  Lookup_n-D: '<S357>/Vector'
         *  Switch: '<S308>/Switch1'
         */
        VeTFTC_P_TransClnt_HeatLoss = rtb_TmpSignalConversionAtTransOilTemp_Sa *
            look1_iflf_binlca_16a(VeTFTC_T_TransOil_TempPredPrev, ((const
            float32 *)&(KxTFTR_k_TransClntPredFactor[0])), ((const float32 *)
            &(KtTFTR_k_TransClntPredFactor[0])), 17U);

        /* End of Outputs for SubSystem: '<S123>/OilClnt_HeatLoss' */

        /* Outputs for Atomic SubSystem: '<S123>/TransIntr_HeatLoss' */
        /* Lookup_n-D: '<S396>/Vector' incorporates:
         *  Abs: '<S307>/Abs'
         *  Gain: '<S98>/Gain'
         */
        VeTFTC_P_TransInternals_HeatLoss = look2_iflf_binlca_16a
            (VeTFTC_n_TransInputSpeed, fabsf(VeTFTC_n_TransOutput_Spd), ((const
               float32 *)&(KxTFTR_P_TransInternals_HeatLoss[0])), ((const
               float32 *)&(KyTFTR_P_TransInternals_HeatLoss[0])), ((const
               float32 *)&(KtTFTR_P_TransInternals_HeatLoss[0])), (const uint32*)
             TFTR_ac_ConstP.Vector_maxIndex_l, 5U);

        /* End of Outputs for SubSystem: '<S123>/TransIntr_HeatLoss' */

        /* Outputs for Atomic SubSystem: '<S123>/Stored_HeatLoss' */
        /* DataStoreWrite: '<S363>/DataStoreWrite1' */
        TFTR_ac_DW.NeTFTR_t_RealTime_Prev = VeTFTC_t_RealTime;

        /* Outputs for Atomic SubSystem: '<S305>/HeatGainTerm' */
        /* Sum: '<S360>/Sum1' */
        VeTFTC_P_TransOil_HeatGainTerm = (VeTFTC_P_MtrA_HeatLossHTC +
            VeTFTC_P_MtrB_HeatLossHTC) + VeTFTC_P_TransInternals_HeatLoss;

        /* Product: '<S360>/Product' incorporates:
         *  Constant: '<S368>/Calib'
         */
        VeTFTC_E_TransOil_HeatGainTerm = VeTFTC_P_TransOil_HeatGainTerm *
            KeTFTR_t_dT;

        /* Outputs for Atomic SubSystem: '<S360>/DigitalLowpassResetEnabled' */
        /* Switch: '<S365>/Switch1' incorporates:
         *  Constant: '<S360>/FALSEConstant1'
         *  Constant: '<S360>/TRUEConstant1'
         *  Switch: '<S365>/Switch2'
         */
        if (false)
        {
            /* Switch: '<S365>/Switch1' */
            VeTFTC_E_TransOil_HeatGainTermFlt = VeTFTC_E_TransOil_HeatGainTerm;
        }
        else
        {
            if (true)
            {
                /* Switch: '<S365>/Switch1' incorporates:
                 *  Constant: '<S367>/Calib'
                 *  Product: '<S365>/Multiplication'
                 *  Sum: '<S365>/Subtraction'
                 *  Sum: '<S365>/Summation'
                 *  Switch: '<S365>/Switch2'
                 *  UnitDelay: '<S365>/UnitDelay'
                 */
                VeTFTC_E_TransOil_HeatGainTermFlt =
                    ((VeTFTC_E_TransOil_HeatGainTerm -
                      VeTFTC_E_TransOil_HeatGainTermFlt) *
                     KeTFTR_k_HeatGainTerm_FltCoeff) +
                    VeTFTC_E_TransOil_HeatGainTermFlt;
            }
        }

        /* End of Switch: '<S365>/Switch1' */
        /* End of Outputs for SubSystem: '<S360>/DigitalLowpassResetEnabled' */
        /* End of Outputs for SubSystem: '<S305>/HeatGainTerm' */

        /* Outputs for Atomic SubSystem: '<S305>/HeatLossTerm' */
        /* Sum: '<S361>/Sum1' */
        VeTFTC_P_TransOil_HeatLossTerm = VeTFTC_P_TransClnt_HeatLoss +
            VeTFTC_P_TransAmbient_HeatLoss;

        /* Product: '<S361>/Product' incorporates:
         *  Constant: '<S370>/Calib'
         */
        VeTFTC_E_TransOil_HeatLossTerm = VeTFTC_P_TransOil_HeatLossTerm *
            KeTFTR_t_dT;

        /* End of Outputs for SubSystem: '<S305>/HeatLossTerm' */

        /* Outputs for Atomic SubSystem: '<S305>/SpecificHeat' */
        /* Lookup_n-D: '<S372>/Vector' incorporates:
         *  Switch: '<S308>/Switch1'
         */
        VeTFTC_S_TransOil_HeatCapacity = look1_iflf_binlca_16a
            (VeTFTC_T_TransOil_TempPredPrev, ((const float32 *)
              &(KxTFTR_S_TransOil_HeatCapacity[0])), ((const float32 *)
              &(KtTFTR_S_TransOil_HeatCapacity[0])), 5U);

        /* End of Outputs for SubSystem: '<S305>/SpecificHeat' */

        /* Outputs for Atomic SubSystem: '<S305>/TrnsOilTemp_Pred' */
        /* MinMax: '<S364>/MinMax1' incorporates:
         *  MinMax: '<S364>/MinMax2'
         */
        rtb_TmpSignalConversionAtTransOilTemp_Sa = fmaxf(VeTFTC_T_MtrA_Temp,
            VeTFTC_T_MtrB_Temp);

        /* Sum: '<S364>/Sum1' */
        VeTFTC_E_TransOil_TotalHeat = VeTFTC_E_TransOil_HeatGainTermFlt -
            VeTFTC_E_TransOil_HeatLossTerm;

        /* Outputs for Atomic SubSystem: '<S364>/ProtectedDivision' */
        /* Switch: '<S377>/Switch1' incorporates:
         *  Constant: '<S377>/ConstantValue'
         *  Constant: '<S377>/ConstantValue1'
         *  Constant: '<S377>/ConstantValue2'
         *  Constant: '<S377>/ConstantValue3'
         *  Logic: '<S377>/AND'
         *  RelationalOperator: '<S377>/GreaterThanorEqual'
         *  RelationalOperator: '<S377>/GreaterThanorEqual1'
         *  RelationalOperator: '<S377>/NotEqual'
         *  RelationalOperator: '<S377>/NotEqual1'
         *  Switch: '<S377>/Switch2'
         *  Switch: '<S377>/Switch3'
         */
        if ((VeTFTC_E_TransOil_TotalHeat != 0.0F) &&
                (VeTFTC_S_TransOil_HeatCapacity != 0.0F))
        {
            /* Switch: '<S377>/Switch1' incorporates:
             *  Product: '<S377>/Division'
             */
            VeTFTC_T_TransOil_TotalHeatTemp = VeTFTC_E_TransOil_TotalHeat /
                VeTFTC_S_TransOil_HeatCapacity;
        }
        else if (VeTFTC_E_TransOil_TotalHeat > 0.0F)
        {
            /* Switch: '<S377>/Switch2' incorporates:
             *  Constant: '<S377>/MAXFLOAT'
             *  Switch: '<S377>/Switch1'
             */
            VeTFTC_T_TransOil_TotalHeatTemp = 3.402823466E+38F;
        }
        else if (VeTFTC_E_TransOil_TotalHeat < 0.0F)
        {
            /* Switch: '<S377>/Switch3' incorporates:
             *  Constant: '<S377>/MINFLOAT'
             *  Switch: '<S377>/Switch1'
             *  Switch: '<S377>/Switch2'
             */
            VeTFTC_T_TransOil_TotalHeatTemp = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S377>/Switch1' incorporates:
             *  Constant: '<S377>/ConstantValue4'
             *  Switch: '<S377>/Switch2'
             *  Switch: '<S377>/Switch3'
             */
            VeTFTC_T_TransOil_TotalHeatTemp = 0.0F;
        }

        /* End of Switch: '<S377>/Switch1' */
        /* End of Outputs for SubSystem: '<S364>/ProtectedDivision' */

        /* Outputs for Atomic SubSystem: '<S364>/AccumulatorReset' */
        /* Switch: '<S374>/Switch1' */
        if (VeTFTC_b_InitValueTrig)
        {
            /* Switch: '<S374>/Switch1' */
            VeTFTC_T_TransOil_TempPred = VeTFTR_T_TempAvgIV;
        }
        else
        {
            /* Switch: '<S374>/Switch1' incorporates:
             *  Sum: '<S374>/Summation'
             *  UnitDelay: '<S374>/UnitDelay'
             */
            VeTFTC_T_TransOil_TempPred = VeTFTC_T_TransOil_TotalHeatTemp +
                VeTFTC_T_TransOil_TempPred;
        }

        /* End of Switch: '<S374>/Switch1' */
        /* End of Outputs for SubSystem: '<S364>/AccumulatorReset' */

        /* Outputs for Atomic SubSystem: '<S364>/Limiter' */
        /* Switch: '<S376>/Switch1' incorporates:
         *  MinMax: '<S364>/MinMax1'
         *  RelationalOperator: '<S376>/RelationalOperator'
         */
        if (rtb_TmpSignalConversionAtTransOilTemp_Sa <
                VeTFTC_T_TransOil_TempPred)
        {
            /* Switch: '<S376>/Switch1' */
            VeTFTC_T_TransOilTemp_Pred =
                rtb_TmpSignalConversionAtTransOilTemp_Sa;
        }
        else
        {
            /* Switch: '<S376>/Switch1' */
            VeTFTC_T_TransOilTemp_Pred = VeTFTC_T_TransOil_TempPred;
        }

        /* End of Switch: '<S376>/Switch1' */

        /* Switch: '<S376>/Switch' incorporates:
         *  RelationalOperator: '<S376>/RelationalOperator1'
         */
        if (VeTFTC_T_TransOilTemp_Pred <= VeTFTC_T_Amb_Temp)
        {
            /* Switch: '<S376>/Switch' */
            VeTFTC_T_TransOilTemp_Pred = VeTFTC_T_Amb_Temp;
        }

        /* End of Switch: '<S376>/Switch' */
        /* End of Outputs for SubSystem: '<S364>/Limiter' */

        /* DataStoreWrite: '<S364>/DataStoreWrite' */
        TFTR_ac_DW.NeTFTR_T_TransOilTempPred_Prev = VeTFTC_T_TransOilTemp_Pred;

        /* RelationalOperator: '<S364>/Comparison' */
        VeTFTC_b_TransOilTemp_PredMaxRng = (VeTFTC_T_TransOil_TempPred >=
            rtb_TmpSignalConversionAtTransOilTemp_Sa);

        /* RelationalOperator: '<S364>/Comparison2' */
        VeTFTC_b_TransOilTemp_PredMinRng = (VeTFTC_T_TransOil_TempPred <=
            VeTFTC_T_Amb_Temp);

        /* Merge: '<S158>/Merge' incorporates:
         *  SignalConversion generated from: '<S123>/TransOilTemp_Pred'
         *  SignalConversion: '<S364>/SignalConversion'
         */
        TFTR_ac_B.VeTFTC_T_TransOilTempFin = VeTFTC_T_TransOilTemp_Pred;

        /* End of Outputs for SubSystem: '<S305>/TrnsOilTemp_Pred' */
        /* End of Outputs for SubSystem: '<S123>/Stored_HeatLoss' */

        /* Switch: '<S308>/Switch3' incorporates:
         *  SignalConversion: '<S364>/SignalConversion'
         *  UnitDelay: '<S308>/UnitDelay'
         */
        if (VeTFTC_b_InitValueTrig)
        {
            TFTR_ac_DW.UnitDelay_DSTATE = VeTFTR_T_TempAvgIV;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S123>/Stored_HeatLoss' */
            /* Outputs for Atomic SubSystem: '<S305>/TrnsOilTemp_Pred' */
            TFTR_ac_DW.UnitDelay_DSTATE = VeTFTC_T_TransOilTemp_Pred;

            /* End of Outputs for SubSystem: '<S305>/TrnsOilTemp_Pred' */
            /* End of Outputs for SubSystem: '<S123>/Stored_HeatLoss' */
        }

        /* End of Switch: '<S308>/Switch3' */

        /* Merge: '<S158>/Merge1' incorporates:
         *  Inport: '<S123>/TransOilTemp_PredFA'
         */
        TFTR_ac_B.VeTFTC_b_TransOilTemp_FA = VeTFTC_b_TransOilTemp_PredFA;
    }

    /* End of Outputs for SubSystem: '<S20>/TransOil_HeatLoss' */

    /* SignalConversion generated from: '<S20>/VariantSource1' */
#if Rte_SysCon_Variant_TFTR_2

    /* VariantMerge generated from: '<S20>/VariantSource1' incorporates:
     *  Constant: '<S20>/Constant5'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j = true;

#else

    /* VariantMerge generated from: '<S20>/VariantSource1' incorporates:
     *  Constant: '<S20>/Constant3'
     *  SignalConversion generated from: '<S20>/VariantSource1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j = false;

#endif

    /* End of SignalConversion generated from: '<S20>/VariantSource1' */

    /* Outputs for Enabled SubSystem: '<S20>/TransOilTemp_Avg' incorporates:
     *  EnablePort: '<S122>/Enable'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_j)
    {
        /* Outputs for Atomic SubSystem: '<S122>/MtrA_HeatLoss' */
        /* SignalConversion generated from: '<S171>/VariantSource' */
#if Rte_SysCon_Variant_TFTR_7

        /* VariantMerge generated from: '<S171>/VariantSource' incorporates:
         *  Constant: '<S171>/Constant'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = true;

#else

        /* VariantMerge generated from: '<S171>/VariantSource' incorporates:
         *  Constant: '<S171>/Constant1'
         *  SignalConversion generated from: '<S171>/VariantSource'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = false;

#endif

        /* End of SignalConversion generated from: '<S171>/VariantSource' */

        /* Outputs for Enabled SubSystem: '<S171>/MtrA_FrmCalc' incorporates:
         *  EnablePort: '<S233>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S171>/MtrA_FrmTNTable' incorporates:
         *  EnablePort: '<S234>/Enable'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_a)
        {
            /* Abs: '<S233>/Abs2' incorporates:
             *  Product: '<S233>/Product'
             *  Product: '<S233>/Product2'
             *  Sum: '<S233>/Sum1'
             */
            VeTFTC_P_MtrA_RawHeatLossCalc = fabsf((VeTFTC_I_MtrA_Current *
                VeTFTC_U_MtrA_Voltage) - (VeTFTC_M_MtrA_Trq *
                VeTFTC_n_MtrA_Speed));

            /* Outputs for Atomic SubSystem: '<S233>/EdgeRising' */
            /* Logic: '<S235>/OR1' incorporates:
             *  UnitDelay: '<S235>/UnitDelay'
             */
            rtb_VariantMerge_For_Variant_Source_Va_j =
                !TFTR_ac_DW.UnitDelay_DSTATE_a;

            /* Update for UnitDelay: '<S235>/UnitDelay' incorporates:
             *  Constant: '<S233>/TRUEConstant'
             */
            TFTR_ac_DW.UnitDelay_DSTATE_a = true;

            /* Outputs for Atomic SubSystem: '<S233>/LowpassTResetEnabled' */
            /* Switch: '<S241>/Switch1' incorporates:
             *  Constant: '<S233>/TRUEConstant'
             *  Logic: '<S235>/AND'
             *  Switch: '<S241>/Switch2'
             */
            if ((true) && rtb_VariantMerge_For_Variant_Source_Va_j)
            {
                /* Switch: '<S241>/Switch1' */
                VeTFTC_P_MtrA_HeatLossCalc_Filt = VeTFTC_P_MtrA_RawHeatLossCalc;
            }
            else
            {
                if (true)
                {
                    /* Switch: '<S241>/Switch1' incorporates:
                     *  Constant: '<S239>/Calib'
                     *  Constant: '<S240>/Calib'
                     *  MinMax: '<S241>/Maximum'
                     *  Product: '<S241>/Multiplication'
                     *  Product: '<S241>/Multiplication1'
                     *  Sum: '<S241>/Subtraction'
                     *  Sum: '<S241>/Summation'
                     *  Switch: '<S241>/Switch2'
                     *  UnitDelay: '<S241>/UnitDelay'
                     */
                    VeTFTC_P_MtrA_HeatLossCalc_Filt =
                        (((VeTFTC_P_MtrA_RawHeatLossCalc -
                           VeTFTC_P_MtrA_HeatLossCalc_Filt) * KeTFTR_t_dT) *
                         (1.0F / fmaxf(KeTFTR_k_MtrAHeatLoss_FltCoeff,
                                       KeTFTR_t_dT))) +
                        VeTFTC_P_MtrA_HeatLossCalc_Filt;
                }
            }

            /* End of Switch: '<S241>/Switch1' */
            /* End of Outputs for SubSystem: '<S233>/LowpassTResetEnabled' */
            /* End of Outputs for SubSystem: '<S233>/EdgeRising' */

            /* Delay: '<S233>/Integer_Delay' incorporates:
             *  Constant: '<S236>/Calib'
             */
            if (((sint32)KeTFTR_Cnt_DlySmpl_MtrATmp) <= 0)
            {
                /* Delay: '<S233>/Integer_Delay' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    VeTFTC_T_MtrA_Temp_Fltd;
            }
            else
            {
                if (((sint32)KeTFTR_Cnt_DlySmpl_MtrATmp) > 100)
                {
                    tmp_1 = 100U;
                }
                else
                {
                    tmp_1 = KeTFTR_Cnt_DlySmpl_MtrATmp;
                }

                /* Delay: '<S233>/Integer_Delay' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    TFTR_ac_DW.Integer_Delay_DSTATE_c[(uint16)(100U - ((uint32)
                    tmp_1))];
            }

            /* End of Delay: '<S233>/Integer_Delay' */

            /* Sum: '<S233>/Sum3' */
            VeTFTC_T_StoredTempDiff_MtrA = VeTFTC_T_MtrA_Temp_Fltd -
                rtb_TmpSignalConversionAtTransOilTemp_Sa;

            /* Product: '<S233>/Product3' incorporates:
             *  Constant: '<S237>/Calib'
             */
            VeTFTC_P_MtrAStord_HeatLoss = VeTFTC_T_StoredTempDiff_MtrA *
                KeTFTR_S_MtrAHeatLoss_ThrmCap;

            /* Abs: '<S233>/Abs5' incorporates:
             *  Sum: '<S233>/Sum4'
             */
            VeTFTC_P_MtrA_HeatLossCalc = fabsf(VeTFTC_P_MtrA_HeatLossCalc_Filt -
                VeTFTC_P_MtrAStord_HeatLoss);

            /* Switch: '<S233>/Switch1' incorporates:
             *  Constant: '<S238>/Calib'
             */
            if (KeTFTR_b_EnblMtrA_MechLoss)
            {
                /* Merge: '<S171>/Merge' */
                VeTFTC_P_MtrA_HeatLoss = VeTFTC_P_MtrA_HeatLossCalc_Filt;
            }
            else
            {
                /* Merge: '<S171>/Merge' */
                VeTFTC_P_MtrA_HeatLoss = VeTFTC_P_MtrA_HeatLossCalc;
            }

            /* End of Switch: '<S233>/Switch1' */

            /* Update for Delay: '<S233>/Integer_Delay' */
            for (idxDelay = 0; idxDelay < 99; idxDelay++)
            {
                TFTR_ac_DW.Integer_Delay_DSTATE_c[idxDelay] =
                    TFTR_ac_DW.Integer_Delay_DSTATE_c[idxDelay + 1];
            }

            TFTR_ac_DW.Integer_Delay_DSTATE_c[99] = VeTFTC_T_MtrA_Temp_Fltd;

            /* End of Update for Delay: '<S233>/Integer_Delay' */
        }
        else
        {
            /* Merge: '<S171>/Merge' incorporates:
             *  Abs: '<S171>/Abs'
             *  Abs: '<S171>/Abs1'
             *  Lookup_n-D: '<S242>/Vector'
             */
            VeTFTC_P_MtrA_HeatLoss = look2_iflf_binlca_16a(fabsf
                (VeTFTC_M_MtrA_Trq), fabsf(VeTFTC_n_MtrA_Speed), ((const float32
                *)&(KxTFTR_P_MtrA_HeatLoss_ToClnt[0])), ((const float32 *)
                &(KyTFTR_P_MtrA_HeatLoss_ToClnt[0])), ((const float32 *)
                &(KtTFTR_P_MtrA_HeatLoss_ToClnt[0])), (const uint32*)
                TFTR_ac_ConstP.pooled7, 26U);
        }

        /* End of Outputs for SubSystem: '<S171>/MtrA_FrmTNTable' */
        /* End of Outputs for SubSystem: '<S171>/MtrA_FrmCalc' */
        /* End of Outputs for SubSystem: '<S122>/MtrA_HeatLoss' */

        /* Outputs for Atomic SubSystem: '<S122>/MtrB_HeatLoss' */
        /* SignalConversion generated from: '<S172>/VariantSource' */
#if Rte_SysCon_Variant_TFTR_8

        /* VariantMerge generated from: '<S172>/VariantSource' incorporates:
         *  Constant: '<S172>/Constant1'
         */
        rtb_VariantMerge_For_Variant_Source_Va_f = true;

#else

        /* VariantMerge generated from: '<S172>/VariantSource' incorporates:
         *  Constant: '<S172>/Constant2'
         *  SignalConversion generated from: '<S172>/VariantSource'
         */
        rtb_VariantMerge_For_Variant_Source_Va_f = false;

#endif

        /* End of SignalConversion generated from: '<S172>/VariantSource' */

        /* Outputs for Enabled SubSystem: '<S172>/MtrB_FrmCalc' incorporates:
         *  EnablePort: '<S244>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S172>/MtrB_FrmTNTable' incorporates:
         *  EnablePort: '<S245>/Enable'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_f)
        {
            /* Abs: '<S244>/Abs4' incorporates:
             *  Product: '<S244>/Product'
             *  Product: '<S244>/Product2'
             *  Sum: '<S244>/Sum1'
             */
            VeTFTC_P_MtrB_RawHeatLossCalc = fabsf((VeTFTC_I_MtrB_Current *
                VeTFTC_U_MtrB_Voltage) - (VeTFTC_M_MtrB_Trq *
                VeTFTC_n_MtrB_Speed));

            /* Outputs for Atomic SubSystem: '<S244>/EdgeRising' */
            /* Logic: '<S246>/OR1' incorporates:
             *  UnitDelay: '<S246>/UnitDelay'
             */
            rtb_VariantMerge_For_Variant_Source_Va_j =
                !TFTR_ac_DW.UnitDelay_DSTATE_ob;

            /* Update for UnitDelay: '<S246>/UnitDelay' incorporates:
             *  Constant: '<S244>/TRUEConstant'
             */
            TFTR_ac_DW.UnitDelay_DSTATE_ob = true;

            /* Outputs for Atomic SubSystem: '<S244>/LowpassTResetEnabled' */
            /* Switch: '<S252>/Switch1' incorporates:
             *  Constant: '<S244>/TRUEConstant'
             *  Logic: '<S246>/AND'
             *  Switch: '<S252>/Switch2'
             */
            if ((true) && rtb_VariantMerge_For_Variant_Source_Va_j)
            {
                /* Switch: '<S252>/Switch1' */
                VeTFTC_P_MtrB_HeatLossCalc_Filt = VeTFTC_P_MtrB_RawHeatLossCalc;
            }
            else
            {
                if (true)
                {
                    /* Switch: '<S252>/Switch1' incorporates:
                     *  Constant: '<S250>/Calib'
                     *  Constant: '<S251>/Calib'
                     *  MinMax: '<S252>/Maximum'
                     *  Product: '<S252>/Multiplication'
                     *  Product: '<S252>/Multiplication1'
                     *  Sum: '<S252>/Subtraction'
                     *  Sum: '<S252>/Summation'
                     *  Switch: '<S252>/Switch2'
                     *  UnitDelay: '<S252>/UnitDelay'
                     */
                    VeTFTC_P_MtrB_HeatLossCalc_Filt =
                        (((VeTFTC_P_MtrB_RawHeatLossCalc -
                           VeTFTC_P_MtrB_HeatLossCalc_Filt) * KeTFTR_t_dT) *
                         (1.0F / fmaxf(KeTFTR_k_MtrBHeatLoss_FltCoeff,
                                       KeTFTR_t_dT))) +
                        VeTFTC_P_MtrB_HeatLossCalc_Filt;
                }
            }

            /* End of Switch: '<S252>/Switch1' */
            /* End of Outputs for SubSystem: '<S244>/LowpassTResetEnabled' */
            /* End of Outputs for SubSystem: '<S244>/EdgeRising' */

            /* Delay: '<S244>/Integer_Delay' incorporates:
             *  Constant: '<S247>/Calib'
             */
            if (((sint32)KeTFTR_Cnt_DlySmpl_MtrBTmp) <= 0)
            {
                /* Delay: '<S244>/Integer_Delay' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    VeTFTC_T_MtrB_Temp_Fltd;
            }
            else
            {
                if (((sint32)KeTFTR_Cnt_DlySmpl_MtrBTmp) > 100)
                {
                    tmp_1 = 100U;
                }
                else
                {
                    tmp_1 = KeTFTR_Cnt_DlySmpl_MtrBTmp;
                }

                /* Delay: '<S244>/Integer_Delay' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    TFTR_ac_DW.Integer_Delay_DSTATE[(uint16)(100U - ((uint32)
                    tmp_1))];
            }

            /* End of Delay: '<S244>/Integer_Delay' */

            /* Sum: '<S244>/Sum3' */
            VeTFTC_T_StoredTempDiff_MtrB = VeTFTC_T_MtrB_Temp_Fltd -
                rtb_TmpSignalConversionAtTransOilTemp_Sa;

            /* Product: '<S244>/Product3' incorporates:
             *  Constant: '<S248>/Calib'
             */
            VeTFTC_P_MtrBStord_HeatLoss = VeTFTC_T_StoredTempDiff_MtrB *
                KeTFTR_S_MtrBHeatLoss_ThrmCap;

            /* Abs: '<S244>/Abs5' incorporates:
             *  Sum: '<S244>/Sum4'
             */
            VeTFTC_P_MtrB_HeatLossCalc = fabsf(VeTFTC_P_MtrB_HeatLossCalc_Filt -
                VeTFTC_P_MtrBStord_HeatLoss);

            /* Switch: '<S244>/Switch1' incorporates:
             *  Constant: '<S249>/Calib'
             */
            if (KeTFTR_b_EnblMtrB_MechLoss)
            {
                /* Merge: '<S172>/Merge' */
                VeTFTC_P_MtrB_HeatLoss = VeTFTC_P_MtrB_HeatLossCalc_Filt;
            }
            else
            {
                /* Merge: '<S172>/Merge' */
                VeTFTC_P_MtrB_HeatLoss = VeTFTC_P_MtrB_HeatLossCalc;
            }

            /* End of Switch: '<S244>/Switch1' */

            /* Update for Delay: '<S244>/Integer_Delay' */
            for (idxDelay = 0; idxDelay < 99; idxDelay++)
            {
                TFTR_ac_DW.Integer_Delay_DSTATE[idxDelay] =
                    TFTR_ac_DW.Integer_Delay_DSTATE[idxDelay + 1];
            }

            TFTR_ac_DW.Integer_Delay_DSTATE[99] = VeTFTC_T_MtrB_Temp_Fltd;

            /* End of Update for Delay: '<S244>/Integer_Delay' */
        }
        else
        {
            /* Merge: '<S172>/Merge' incorporates:
             *  Abs: '<S172>/Abs'
             *  Abs: '<S172>/Abs1'
             *  Lookup_n-D: '<S253>/Vector'
             */
            VeTFTC_P_MtrB_HeatLoss = look2_iflf_binlca_16a(fabsf
                (VeTFTC_M_MtrB_Trq), fabsf(VeTFTC_n_MtrB_Speed), ((const float32
                *)&(KxTFTR_P_MtrB_HeatLoss_ToClnt[0])), ((const float32 *)
                &(KyTFTR_P_MtrB_HeatLoss_ToClnt[0])), ((const float32 *)
                &(KtTFTR_P_MtrB_HeatLoss_ToClnt[0])), (const uint32*)
                TFTR_ac_ConstP.Vector_maxIndex, 31U);
        }

        /* End of Outputs for SubSystem: '<S172>/MtrB_FrmTNTable' */
        /* End of Outputs for SubSystem: '<S172>/MtrB_FrmCalc' */
        /* End of Outputs for SubSystem: '<S122>/MtrB_HeatLoss' */

        /* Logic: '<S254>/Logical3' incorporates:
         *  Logic: '<S175>/Logical5'
         *  Logic: '<S175>/Logical6'
         *  Logic: '<S254>/Logical7'
         */
        rtb_VariantMerge_For_Variant_Source_Vari = !VeTFTC_b_MtrA_TempFA;

        /* Logic: '<S254>/Logical4' incorporates:
         *  Logic: '<S175>/Logical8'
         *  Logic: '<S175>/Logical9'
         *  Logic: '<S254>/Logical13'
         *  Logic: '<S254>/Logical2'
         *  Logic: '<S254>/Logical8'
         */
        rtb_VariantMerge_For_Variant_Source_Va_j = !VeTFTC_b_MtrB_TempFA;

        /* Logic: '<S254>/Logical1' incorporates:
         *  Logic: '<S254>/Logical11'
         */
        rtb_VariantMerge_For_Variant_Source_Va_n = !VeTFTC_b_AuxPump_TempFA;

        /* Logic: '<S254>/Logical' incorporates:
         *  Logic: '<S254>/Logical1'
         *  Logic: '<S254>/Logical3'
         *  Logic: '<S254>/Logical6'
         */
        rtb_VariantMerge_For_Variant_Source_Va_f =
            (rtb_VariantMerge_For_Variant_Source_Va_n &&
             rtb_VariantMerge_For_Variant_Source_Vari);

        /* If: '<S173>/If' incorporates:
         *  Logic: '<S254>/Logical'
         *  Logic: '<S254>/Logical12'
         *  Logic: '<S254>/Logical15'
         *  Logic: '<S254>/Logical17'
         *  Logic: '<S254>/Logical18'
         *  Logic: '<S254>/Logical4'
         *  Logic: '<S254>/Logical5'
         *  Logic: '<S254>/Logical6'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_f &&
                rtb_VariantMerge_For_Variant_Source_Va_j)
        {
            /* Outputs for IfAction SubSystem: '<S173>/Subsystem1' incorporates:
             *  ActionPort: '<S255>/ActionPort'
             */
            /* Merge: '<S173>/Merge' incorporates:
             *  Gain: '<S263>/Gain'
             */
            VeTFTR_b_AuxPmpFac_gama_Enbl = true;

            /* Merge: '<S173>/Merge1' incorporates:
             *  Gain: '<S265>/Gain'
             */
            VeTFTR_b_MtrAFac_alpha_Enbl = true;

            /* Merge: '<S173>/Merge2' incorporates:
             *  Gain: '<S266>/Gain'
             */
            VeTFTR_b_MtrBFac_beta_Enbl = true;

            /* Merge: '<S173>/Merge3' incorporates:
             *  Constant: '<S255>/FALSEConstant'
             *  Gain: '<S264>/Gain'
             */
            VeTFTC_b_TransOilTempAvg_FA = ((true) && (false));

            /* End of Outputs for SubSystem: '<S173>/Subsystem1' */
        }
        else
        {
            /* Logic: '<S254>/Logical5' incorporates:
             *  Logic: '<S254>/Logical17'
             */
            rtb_VariantMerge_For_Variant_Source_Va_a = ((VeTFTC_b_AuxPump_TempFA)
                && rtb_VariantMerge_For_Variant_Source_Vari);
            if (rtb_VariantMerge_For_Variant_Source_Va_a &&
                    rtb_VariantMerge_For_Variant_Source_Va_j)
            {
                /* Outputs for IfAction SubSystem: '<S173>/Subsystem2' incorporates:
                 *  ActionPort: '<S256>/ActionPort'
                 */
                /* Gain: '<S268>/Gain' incorporates:
                 *  Constant: '<S256>/FALSEConstant'
                 *  Gain: '<S269>/Gain'
                 */
                rtb_VariantMerge_For_Variant_Source_Va_n = ((true) && (false));

                /* Merge: '<S173>/Merge' incorporates:
                 *  Gain: '<S268>/Gain'
                 */
                VeTFTR_b_AuxPmpFac_gama_Enbl =
                    rtb_VariantMerge_For_Variant_Source_Va_n;

                /* Merge: '<S173>/Merge1' incorporates:
                 *  Gain: '<S267>/Gain'
                 */
                VeTFTR_b_MtrAFac_alpha_Enbl = true;

                /* Merge: '<S173>/Merge2' incorporates:
                 *  Gain: '<S270>/Gain'
                 */
                VeTFTR_b_MtrBFac_beta_Enbl = true;

                /* Merge: '<S173>/Merge3' incorporates:
                 *  Gain: '<S269>/Gain'
                 */
                VeTFTC_b_TransOilTempAvg_FA =
                    rtb_VariantMerge_For_Variant_Source_Va_n;

                /* End of Outputs for SubSystem: '<S173>/Subsystem2' */
            }
            else if (rtb_VariantMerge_For_Variant_Source_Va_f &&
                     (VeTFTC_b_MtrB_TempFA))
            {
                /* Outputs for IfAction SubSystem: '<S173>/Subsystem3' incorporates:
                 *  ActionPort: '<S257>/ActionPort'
                 */
                /* Merge: '<S173>/Merge' incorporates:
                 *  Gain: '<S274>/Gain'
                 */
                VeTFTR_b_AuxPmpFac_gama_Enbl = true;

                /* Merge: '<S173>/Merge1' incorporates:
                 *  Gain: '<S277>/Gain'
                 */
                VeTFTR_b_MtrAFac_alpha_Enbl = true;

                /* Logic: '<S257>/Logical1' incorporates:
                 *  Constant: '<S271>/Constant'
                 *  Constant: '<S272>/Calib'
                 *  Logic: '<S257>/Logical11'
                 *  RelationalOperator: '<S257>/Comparison'
                 *  RelationalOperator: '<S257>/Comparison2'
                 *  RelationalOperator: '<S257>/RelationalOperator1'
                 *  Switch: '<S17>/Switch19'
                 */
                VeTFTC_b_MtrBFac_MtrBFA = (((VeTFTI_e_TOT_ColdBiasSts ==
                    CeTAPR_e_TAP_FalseTrueSNA_True) || (VeTFTC_P_MtrA_HeatLoss >
                    VeTFTC_P_MtrB_HeatLoss)) || ((VeTFTC_P_MtrA_HeatLoss <=
                    VeTFTC_P_MtrB_HeatLoss) && (KeTFTR_b_EnblMtrBFA_BHeatLossHi)));

                /* Switch: '<S257>/Switch' incorporates:
                 *  Constant: '<S257>/FALSEConstant2'
                 *  Constant: '<S273>/Calib'
                 */
                if (KeTFTR_b_EnblMtrBFac)
                {
                    rtb_VariantMerge_For_Variant_Source_Va_n =
                        VeTFTC_b_MtrBFac_MtrBFA;
                }
                else
                {
                    rtb_VariantMerge_For_Variant_Source_Va_n = false;
                }

                /* End of Switch: '<S257>/Switch' */

                /* Merge: '<S173>/Merge2' incorporates:
                 *  Gain: '<S275>/Gain'
                 */
                VeTFTR_b_MtrBFac_beta_Enbl = ((true) &&
                    rtb_VariantMerge_For_Variant_Source_Va_n);

                /* Merge: '<S173>/Merge3' incorporates:
                 *  Constant: '<S257>/FALSEConstant1'
                 *  Gain: '<S276>/Gain'
                 */
                VeTFTC_b_TransOilTempAvg_FA = ((true) && (false));

                /* End of Outputs for SubSystem: '<S173>/Subsystem3' */
            }
            else
            {
                /* Logic: '<S254>/Logical12' incorporates:
                 *  Logic: '<S254>/Logical15'
                 */
                rtb_VariantMerge_For_Variant_Source_Va_n =
                    (rtb_VariantMerge_For_Variant_Source_Va_n &&
                     (VeTFTC_b_MtrA_TempFA));
                if (rtb_VariantMerge_For_Variant_Source_Va_n &&
                        rtb_VariantMerge_For_Variant_Source_Va_j)
                {
                    /* Outputs for IfAction SubSystem: '<S173>/Subsystem4' incorporates:
                     *  ActionPort: '<S258>/ActionPort'
                     */
                    /* Merge: '<S173>/Merge' incorporates:
                     *  Gain: '<S281>/Gain'
                     */
                    VeTFTR_b_AuxPmpFac_gama_Enbl = true;

                    /* Logic: '<S258>/Logical1' incorporates:
                     *  Constant: '<S278>/Constant'
                     *  Constant: '<S279>/Calib'
                     *  Logic: '<S258>/Logical13'
                     *  RelationalOperator: '<S258>/Comparison'
                     *  RelationalOperator: '<S258>/Comparison4'
                     *  RelationalOperator: '<S258>/RelationalOperator1'
                     *  Switch: '<S17>/Switch19'
                     */
                    VeTFTC_b_MtrAFac_MtrAFA = (((VeTFTI_e_TOT_ColdBiasSts ==
                        CeTAPR_e_TAP_FalseTrueSNA_True) ||
                        (VeTFTC_P_MtrA_HeatLoss < VeTFTC_P_MtrB_HeatLoss)) ||
                        ((VeTFTC_P_MtrA_HeatLoss >= VeTFTC_P_MtrB_HeatLoss) &&
                         (KeTFTR_b_EnblMtrAFA_AHeatLossHi)));

                    /* Switch: '<S258>/Switch' incorporates:
                     *  Constant: '<S258>/FALSEConstant2'
                     *  Constant: '<S280>/Calib'
                     */
                    if (KeTFTR_b_EnblMtrAFac)
                    {
                        rtb_VariantMerge_For_Variant_Source_Va_n =
                            VeTFTC_b_MtrAFac_MtrAFA;
                    }
                    else
                    {
                        rtb_VariantMerge_For_Variant_Source_Va_n = false;
                    }

                    /* End of Switch: '<S258>/Switch' */

                    /* Merge: '<S173>/Merge1' incorporates:
                     *  Gain: '<S284>/Gain'
                     */
                    VeTFTR_b_MtrAFac_alpha_Enbl = ((true) &&
                        rtb_VariantMerge_For_Variant_Source_Va_n);

                    /* Merge: '<S173>/Merge2' incorporates:
                     *  Gain: '<S283>/Gain'
                     */
                    VeTFTR_b_MtrBFac_beta_Enbl = true;

                    /* Merge: '<S173>/Merge3' incorporates:
                     *  Constant: '<S258>/FALSEConstant1'
                     *  Gain: '<S282>/Gain'
                     */
                    VeTFTC_b_TransOilTempAvg_FA = ((true) && (false));

                    /* End of Outputs for SubSystem: '<S173>/Subsystem4' */
                }
                else if (rtb_VariantMerge_For_Variant_Source_Va_a &&
                         (VeTFTC_b_MtrB_TempFA))
                {
                    /* Outputs for IfAction SubSystem: '<S173>/Subsystem5' incorporates:
                     *  ActionPort: '<S259>/ActionPort'
                     */
                    TFTR_ac_Subsystem5((&(VeTFTR_b_AuxPmpFac_gama_Enbl)),
                                       (&(VeTFTR_b_MtrAFac_alpha_Enbl)),
                                       (&(VeTFTR_b_MtrBFac_beta_Enbl)),
                                       (&(VeTFTC_b_TransOilTempAvg_FA)));

                    /* End of Outputs for SubSystem: '<S173>/Subsystem5' */
                }
                else if (((VeTFTC_b_AuxPump_TempFA) && (VeTFTC_b_MtrA_TempFA)) &&
                         rtb_VariantMerge_For_Variant_Source_Va_j)
                {
                    /* Outputs for IfAction SubSystem: '<S173>/Subsystem6' incorporates:
                     *  ActionPort: '<S260>/ActionPort'
                     */
                    TFTR_ac_Subsystem5((&(VeTFTR_b_AuxPmpFac_gama_Enbl)),
                                       (&(VeTFTR_b_MtrAFac_alpha_Enbl)),
                                       (&(VeTFTR_b_MtrBFac_beta_Enbl)),
                                       (&(VeTFTC_b_TransOilTempAvg_FA)));

                    /* End of Outputs for SubSystem: '<S173>/Subsystem6' */
                }
                else if (rtb_VariantMerge_For_Variant_Source_Va_n &&
                         (VeTFTC_b_MtrB_TempFA))
                {
                    /* Outputs for IfAction SubSystem: '<S173>/Subsystem7' incorporates:
                     *  ActionPort: '<S261>/ActionPort'
                     */
                    /* Merge: '<S173>/Merge' incorporates:
                     *  Gain: '<S294>/Gain'
                     */
                    VeTFTR_b_AuxPmpFac_gama_Enbl = true;

                    /* Merge: '<S173>/Merge1' incorporates:
                     *  Constant: '<S261>/FALSEConstant'
                     *  Gain: '<S293>/Gain'
                     */
                    VeTFTR_b_MtrAFac_alpha_Enbl = ((true) && (false));

                    /* Merge: '<S173>/Merge2' incorporates:
                     *  Constant: '<S261>/FALSEConstant2'
                     *  Gain: '<S296>/Gain'
                     */
                    VeTFTR_b_MtrBFac_beta_Enbl = ((true) && (false));

                    /* Merge: '<S173>/Merge3' incorporates:
                     *  Constant: '<S261>/FALSEConstant1'
                     *  Gain: '<S295>/Gain'
                     */
                    VeTFTC_b_TransOilTempAvg_FA = ((true) && (false));

                    /* End of Outputs for SubSystem: '<S173>/Subsystem7' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S173>/Subsystem8' incorporates:
                     *  ActionPort: '<S262>/ActionPort'
                     */
                    TFTR_ac_Subsystem5((&(VeTFTR_b_AuxPmpFac_gama_Enbl)),
                                       (&(VeTFTR_b_MtrAFac_alpha_Enbl)),
                                       (&(VeTFTR_b_MtrBFac_beta_Enbl)),
                                       (&(VeTFTC_b_TransOilTempAvg_FA)));

                    /* End of Outputs for SubSystem: '<S173>/Subsystem8' */
                }
            }
        }

        /* End of If: '<S173>/If' */

        /* Switch: '<S174>/Switch1' */
        if (VeTFTR_b_AuxPmpFac_gama_Enbl)
        {
            /* Switch: '<S174>/Switch1' incorporates:
             *  Lookup_n-D: '<S176>/Vector'
             *  Switch: '<S165>/Switch1'
             */
            VeTFTC_k_AuxPmp_TempFact = look1_iflf_binlca_16a
                (VeTFTC_T_AuxPmp_Temp_Fltd, ((const float32 *)
                  &(KxTFTR_k_AuxPmp_TempFact[0])), ((const float32 *)
                  &(KtTFTR_k_AuxPmp_TempFact[0])), 17U);
        }
        else
        {
            /* Switch: '<S174>/Switch1' incorporates:
             *  Constant: '<S174>/ConstantValue'
             */
            VeTFTC_k_AuxPmp_TempFact = 0.0F;
        }

        /* End of Switch: '<S174>/Switch1' */

        /* Switch: '<S174>/Switch2' */
        if (VeTFTR_b_MtrAFac_alpha_Enbl)
        {
            /* Switch: '<S174>/Switch7' */
            if (VeTFTC_b_MtrA_TempFA)
            {
                rtb_Sum4_b = VeTFTC_T_MtrB_Temp_Fltd;
            }
            else
            {
                rtb_Sum4_b = VeTFTC_T_MtrA_Temp_Fltd;
            }

            /* End of Switch: '<S174>/Switch7' */

            /* Switch: '<S174>/Switch2' incorporates:
             *  Lookup_n-D: '<S177>/Vector'
             */
            VeTFTC_k_MtrA_TempFact = look1_iflf_binlca_16a(rtb_Sum4_b, ((const
                float32 *)&(KxTFTR_k_MtrA_TempFact[0])), ((const float32 *)
                &(KtTFTR_k_MtrA_TempFact[0])), 17U);
        }
        else
        {
            /* Switch: '<S174>/Switch2' incorporates:
             *  Constant: '<S174>/ConstantValue1'
             */
            VeTFTC_k_MtrA_TempFact = 0.0F;
        }

        /* End of Switch: '<S174>/Switch2' */

        /* Switch: '<S174>/Switch4' */
        if (VeTFTR_b_MtrBFac_beta_Enbl)
        {
            /* Switch: '<S174>/Switch6' */
            if (VeTFTC_b_MtrB_TempFA)
            {
                rtb_Sum4_b = VeTFTC_T_MtrA_Temp_Fltd;
            }
            else
            {
                rtb_Sum4_b = VeTFTC_T_MtrB_Temp_Fltd;
            }

            /* End of Switch: '<S174>/Switch6' */

            /* Switch: '<S174>/Switch4' incorporates:
             *  Lookup_n-D: '<S178>/Vector'
             */
            VeTFTC_k_MtrB_TempFact = look1_iflf_binlca_16a(rtb_Sum4_b, ((const
                float32 *)&(KxTFTR_k_MtrB_TempFact[0])), ((const float32 *)
                &(KtTFTR_k_MtrB_TempFact[0])), 16U);
        }
        else
        {
            /* Switch: '<S174>/Switch4' incorporates:
             *  Constant: '<S174>/ConstantValue2'
             */
            VeTFTC_k_MtrB_TempFact = 0.0F;
        }

        /* End of Switch: '<S174>/Switch4' */

        /* Logic: '<S175>/Logical1' incorporates:
         *  Constant: '<S188>/Constant'
         *  Constant: '<S194>/Calib'
         *  Constant: '<S196>/Calib'
         *  Logic: '<S175>/Logical11'
         *  RelationalOperator: '<S175>/Comparison'
         *  RelationalOperator: '<S175>/RelationalOperator'
         */
        VeTFTC_b_EnblMtrBFA_NormChk = (((((VeTFTC_b_MtrB_TempFA) &&
            (VeTFTI_e_TOT_ColdBiasSts == CeTAPR_e_TAP_FalseTrueSNA_False)) &&
            ((VeTFTC_P_MtrA_HeatLoss > VeTFTC_P_MtrB_HeatLoss) ||
             (KeTFTR_b_EnblMtrBFA_BHeatLossHi))) &&
            rtb_VariantMerge_For_Variant_Source_Vari) &&
            (KeTFTR_b_EnblMtrBFA_NormChk));

        /* Logic: '<S175>/Logical2' incorporates:
         *  Constant: '<S185>/Constant'
         *  Constant: '<S195>/Calib'
         *  RelationalOperator: '<S175>/RelationalOperator1'
         */
        VeTFTC_b_EnblMtrBFA_ColdBiasChk = ((((VeTFTC_b_MtrB_TempFA) &&
            (VeTFTI_e_TOT_ColdBiasSts == CeTAPR_e_TAP_FalseTrueSNA_True)) &&
            rtb_VariantMerge_For_Variant_Source_Vari) &&
            (KeTFTR_b_EnblMtrBFA_ColdBiasChk));

        /* Logic: '<S175>/Logical4' incorporates:
         *  Constant: '<S190>/Calib'
         *  Constant: '<S193>/Calib'
         *  Logic: '<S175>/Logical13'
         *  RelationalOperator: '<S175>/Comparison1'
         *  RelationalOperator: '<S175>/RelationalOperator2'
         */
        VeTFTC_b_EnblMtrAFA_NormChk = (((((VeTFTC_b_MtrA_TempFA) &&
            (VeTFTI_e_TOT_ColdBiasSts == CeTAPR_e_TAP_FalseTrueSNA_False)) &&
            ((VeTFTC_P_MtrA_HeatLoss < VeTFTC_P_MtrB_HeatLoss) ||
             (KeTFTR_b_EnblMtrAFA_AHeatLossHi))) &&
            rtb_VariantMerge_For_Variant_Source_Va_j) &&
            (KeTFTR_b_EnblMtrAFA_NormChk));

        /* Logic: '<S175>/Logical3' incorporates:
         *  Constant: '<S191>/Calib'
         *  RelationalOperator: '<S175>/RelationalOperator3'
         */
        VeTFTC_b_EnblMtrAFA_ColdBiasChk = ((((VeTFTC_b_MtrA_TempFA) &&
            (VeTFTI_e_TOT_ColdBiasSts == CeTAPR_e_TAP_FalseTrueSNA_True)) &&
            rtb_VariantMerge_For_Variant_Source_Va_j) &&
            (KeTFTR_b_EnblMtrAFA_ColdBiasChk));

        /* Logic: '<S175>/Logical7' incorporates:
         *  Constant: '<S192>/Calib'
         */
        VeTFTC_b_EnblMtrAFA_MtrBFAChk = (((VeTFTC_b_MtrB_TempFA) &&
            (VeTFTC_b_MtrA_TempFA)) && (KeTFTR_b_EnblMtrAFA_MtrBFAChk));

        /* If: '<S175>/If1' */
        if (VeTFTC_b_EnblMtrBFA_NormChk)
        {
            /* Outputs for IfAction SubSystem: '<S175>/AvgTmp_WhenMtrBTmpFA' incorporates:
             *  ActionPort: '<S183>/ActionPort'
             */
            /* Product: '<S183>/Product3' incorporates:
             *  Constant: '<S220>/Calib'
             *  Product: '<S183>/Product4'
             *  Sum: '<S183>/Sum3'
             *  Sum: '<S183>/Sum5'
             */
            VeTFTR_T_MtrBTmp_CalcWith_MtrBTmpFA = (VeTFTC_T_MtrA_Temp_Fltd -
                ((VeTFTC_P_MtrA_HeatLoss - VeTFTC_P_MtrB_HeatLoss) *
                 KeTFTR_k_MtrHeatLoss_FctrMtrBFA)) * VeTFTC_k_MtrB_TempFact;

            /* Product: '<S183>/Product7' incorporates:
             *  Constant: '<S221>/Calib'
             *  Product: '<S183>/Product8'
             *  Sum: '<S183>/Sum10'
             *  Sum: '<S183>/Sum8'
             */
            VeTFTR_T_MtrBTmp_CalcWith_MtrBTmpFA_MtrBHeatLossHi =
                (((VeTFTC_P_MtrB_HeatLoss - VeTFTC_P_MtrA_HeatLoss) *
                  KeTFTR_k_MtrHeatLoss_Fctr_BHeatLossHi) +
                 VeTFTC_T_MtrA_Temp_Fltd) * VeTFTC_k_MtrB_TempFact;

            /* Sum: '<S183>/Sum4' incorporates:
             *  Product: '<S183>/Product1'
             *  Product: '<S183>/Product2'
             *  Sum: '<S183>/Sum9'
             */
            rtb_TmpSignalConversionAtTransOilTemp_Sa =
                (VeTFTC_T_AuxPmp_Temp_Fltd * VeTFTC_k_AuxPmp_TempFact) +
                (VeTFTC_T_MtrA_Temp_Fltd * VeTFTC_k_MtrA_TempFact);

            /* Sum: '<S183>/Sum4' */
            VeTFTC_T_TransOilTemp_AvgSum_MtrBFA =
                rtb_TmpSignalConversionAtTransOilTemp_Sa +
                VeTFTR_T_MtrBTmp_CalcWith_MtrBTmpFA;

            /* Sum: '<S183>/Sum1' incorporates:
             *  Sum: '<S183>/Sum6'
             */
            VeTFTC_k_TempWghtdAvgFact_MtrBFA = (VeTFTC_k_AuxPmp_TempFact +
                VeTFTC_k_MtrA_TempFact) + VeTFTC_k_MtrB_TempFact;

            /* Switch: '<S183>/Switch1' incorporates:
             *  Constant: '<S219>/Calib'
             */
            if (KeTFTR_b_TempWghtdAvgEnbl_MtrBTmpFA)
            {
                /* Switch: '<S183>/Switch1' incorporates:
                 *  Constant: '<S217>/Calib'
                 */
                rtb_Sum4_b = KeTFTR_Cnt_TempAvgDivideFact_MtrBTmpFA;
            }
            else
            {
                /* Switch: '<S183>/Switch1' */
                rtb_Sum4_b = VeTFTC_k_TempWghtdAvgFact_MtrBFA;
            }

            /* End of Switch: '<S183>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S183>/ProtectedDivision' */
            /* Switch: '<S222>/Switch1' incorporates:
             *  Constant: '<S222>/ConstantValue'
             *  Constant: '<S222>/ConstantValue1'
             *  Constant: '<S222>/ConstantValue2'
             *  Constant: '<S222>/ConstantValue3'
             *  Logic: '<S222>/AND'
             *  RelationalOperator: '<S222>/GreaterThanorEqual'
             *  RelationalOperator: '<S222>/GreaterThanorEqual1'
             *  RelationalOperator: '<S222>/NotEqual'
             *  RelationalOperator: '<S222>/NotEqual1'
             *  Switch: '<S222>/Switch2'
             *  Switch: '<S222>/Switch3'
             */
            if ((VeTFTC_T_TransOilTemp_AvgSum_MtrBFA != 0.0F) && (rtb_Sum4_b !=
                    0.0F))
            {
                /* Switch: '<S222>/Switch1' incorporates:
                 *  Product: '<S222>/Division'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA =
                    VeTFTC_T_TransOilTemp_AvgSum_MtrBFA / rtb_Sum4_b;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrBFA > 0.0F)
            {
                /* Switch: '<S222>/Switch2' incorporates:
                 *  Constant: '<S222>/MAXFLOAT'
                 *  Switch: '<S222>/Switch1'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA = 3.402823466E+38F;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrBFA < 0.0F)
            {
                /* Switch: '<S222>/Switch3' incorporates:
                 *  Constant: '<S222>/MINFLOAT'
                 *  Switch: '<S222>/Switch1'
                 *  Switch: '<S222>/Switch2'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S222>/Switch1' incorporates:
                 *  Constant: '<S222>/ConstantValue4'
                 *  Switch: '<S222>/Switch2'
                 *  Switch: '<S222>/Switch3'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA = 0.0F;
            }

            /* End of Switch: '<S222>/Switch1' */
            /* End of Outputs for SubSystem: '<S183>/ProtectedDivision' */

            /* Sum: '<S183>/Sum9' */
            VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_MtrBHeatLossHi =
                rtb_TmpSignalConversionAtTransOilTemp_Sa +
                VeTFTR_T_MtrBTmp_CalcWith_MtrBTmpFA_MtrBHeatLossHi;

            /* Sum: '<S183>/Sum6' */
            VeTFTC_k_TempWghtdAvgFact_MtrBFA_MtrBHeatLossHi =
                VeTFTC_k_TempWghtdAvgFact_MtrBFA;

            /* Switch: '<S183>/Switch2' incorporates:
             *  Constant: '<S218>/Calib'
             */
            if (KeTFTR_b_TempWghtdAvgEnbl_MtrBHeatLossHi)
            {
                /* Switch: '<S183>/Switch2' incorporates:
                 *  Constant: '<S216>/Calib'
                 */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    KeTFTR_Cnt_TempAvgDivFact_MtrBHeatLossHi;
            }
            else
            {
                /* Switch: '<S183>/Switch2' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    VeTFTC_k_TempWghtdAvgFact_MtrBFA_MtrBHeatLossHi;
            }

            /* End of Switch: '<S183>/Switch2' */

            /* Outputs for Atomic SubSystem: '<S183>/ProtectedDivision1' */
            /* Switch: '<S223>/Switch1' incorporates:
             *  Constant: '<S223>/ConstantValue'
             *  Constant: '<S223>/ConstantValue1'
             *  Constant: '<S223>/ConstantValue2'
             *  Constant: '<S223>/ConstantValue3'
             *  Logic: '<S223>/AND'
             *  RelationalOperator: '<S223>/GreaterThanorEqual'
             *  RelationalOperator: '<S223>/GreaterThanorEqual1'
             *  RelationalOperator: '<S223>/NotEqual'
             *  RelationalOperator: '<S223>/NotEqual1'
             *  Switch: '<S223>/Switch2'
             *  Switch: '<S223>/Switch3'
             */
            if ((VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_MtrBHeatLossHi != 0.0F) &&
                    (rtb_TmpSignalConversionAtTransOilTemp_Sa != 0.0F))
            {
                /* Switch: '<S223>/Switch1' incorporates:
                 *  Product: '<S223>/Division'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_MtrBHeatLossHi =
                    VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_MtrBHeatLossHi /
                    rtb_TmpSignalConversionAtTransOilTemp_Sa;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_MtrBHeatLossHi > 0.0F)
            {
                /* Switch: '<S223>/Switch2' incorporates:
                 *  Constant: '<S223>/MAXFLOAT'
                 *  Switch: '<S223>/Switch1'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_MtrBHeatLossHi =
                    3.402823466E+38F;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_MtrBHeatLossHi < 0.0F)
            {
                /* Switch: '<S223>/Switch3' incorporates:
                 *  Constant: '<S223>/MINFLOAT'
                 *  Switch: '<S223>/Switch1'
                 *  Switch: '<S223>/Switch2'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_MtrBHeatLossHi =
                    -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S223>/Switch1' incorporates:
                 *  Constant: '<S223>/ConstantValue4'
                 *  Switch: '<S223>/Switch2'
                 *  Switch: '<S223>/Switch3'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_MtrBHeatLossHi = 0.0F;
            }

            /* End of Switch: '<S223>/Switch1' */
            /* End of Outputs for SubSystem: '<S183>/ProtectedDivision1' */

            /* Switch: '<S183>/Switch' incorporates:
             *  RelationalOperator: '<S183>/Comparison'
             */
            if (VeTFTC_P_MtrA_HeatLoss > VeTFTC_P_MtrB_HeatLoss)
            {
                rtb_Sum4_b = VeTFTC_T_TransOilTempAvgPre_MtrBFA;
            }
            else
            {
                rtb_Sum4_b = VeTFTC_T_TransOilTempAvgPre_MtrBFA_MtrBHeatLossHi;
            }

            /* End of Switch: '<S183>/Switch' */

            /* Merge: '<S175>/Merge' incorporates:
             *  Gain: '<S224>/Gain'
             */
            VeTFTC_T_AvgTransOilTemp = 1.0F * rtb_Sum4_b;

            /* End of Outputs for SubSystem: '<S175>/AvgTmp_WhenMtrBTmpFA' */
        }
        else if (VeTFTC_b_EnblMtrBFA_ColdBiasChk)
        {
            /* Outputs for IfAction SubSystem: '<S175>/AvgTmp_WhenMtrBTmpFA_ColdBias' incorporates:
             *  ActionPort: '<S184>/ActionPort'
             */
            /* Sum: '<S184>/Sum4' incorporates:
             *  Product: '<S184>/Product1'
             *  Product: '<S184>/Product2'
             *  Product: '<S184>/Product3'
             */
            VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_ColdBias =
                ((VeTFTC_T_AuxPmp_Temp_Fltd * VeTFTC_k_AuxPmp_TempFact) +
                 (VeTFTC_T_MtrA_Temp_Fltd * VeTFTC_k_MtrA_TempFact)) +
                (VeTFTC_T_MtrA_Temp_Fltd * VeTFTC_k_MtrB_TempFact);

            /* Sum: '<S184>/Sum1' */
            VeTFTC_k_TempWghtdAvgFact_MtrBFA_ColdBias =
                (VeTFTC_k_AuxPmp_TempFact + VeTFTC_k_MtrA_TempFact) +
                VeTFTC_k_MtrB_TempFact;

            /* Switch: '<S184>/Switch1' incorporates:
             *  Constant: '<S226>/Calib'
             */
            if (KeTFTR_b_TempWghtdAvgEnbl_MtrBFA_ColdBias)
            {
                /* Switch: '<S184>/Switch1' incorporates:
                 *  Constant: '<S225>/Calib'
                 */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    KeTFTR_Cnt_TempAvgDivideFact_MtrBFA_ColdBias;
            }
            else
            {
                /* Switch: '<S184>/Switch1' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    VeTFTC_k_TempWghtdAvgFact_MtrBFA_ColdBias;
            }

            /* End of Switch: '<S184>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S184>/ProtectedDivision' */
            /* Switch: '<S227>/Switch1' incorporates:
             *  Constant: '<S227>/ConstantValue'
             *  Constant: '<S227>/ConstantValue1'
             *  Constant: '<S227>/ConstantValue2'
             *  Constant: '<S227>/ConstantValue3'
             *  Logic: '<S227>/AND'
             *  RelationalOperator: '<S227>/GreaterThanorEqual'
             *  RelationalOperator: '<S227>/GreaterThanorEqual1'
             *  RelationalOperator: '<S227>/NotEqual'
             *  RelationalOperator: '<S227>/NotEqual1'
             *  Switch: '<S227>/Switch2'
             *  Switch: '<S227>/Switch3'
             */
            if ((VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_ColdBias != 0.0F) &&
                    (rtb_TmpSignalConversionAtTransOilTemp_Sa != 0.0F))
            {
                /* Switch: '<S227>/Switch1' incorporates:
                 *  Product: '<S227>/Division'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_ColdBias =
                    VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_ColdBias /
                    rtb_TmpSignalConversionAtTransOilTemp_Sa;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_ColdBias > 0.0F)
            {
                /* Switch: '<S227>/Switch2' incorporates:
                 *  Constant: '<S227>/MAXFLOAT'
                 *  Switch: '<S227>/Switch1'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_ColdBias = 3.402823466E+38F;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrBFA_ColdBias < 0.0F)
            {
                /* Switch: '<S227>/Switch3' incorporates:
                 *  Constant: '<S227>/MINFLOAT'
                 *  Switch: '<S227>/Switch1'
                 *  Switch: '<S227>/Switch2'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_ColdBias = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S227>/Switch1' incorporates:
                 *  Constant: '<S227>/ConstantValue4'
                 *  Switch: '<S227>/Switch2'
                 *  Switch: '<S227>/Switch3'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_ColdBias = 0.0F;
            }

            /* End of Switch: '<S227>/Switch1' */
            /* End of Outputs for SubSystem: '<S184>/ProtectedDivision' */

            /* Merge: '<S175>/Merge' incorporates:
             *  Gain: '<S228>/Gain'
             */
            VeTFTC_T_AvgTransOilTemp = 1.0F *
                VeTFTC_T_TransOilTempAvgPre_MtrBFA_ColdBias;

            /* End of Outputs for SubSystem: '<S175>/AvgTmp_WhenMtrBTmpFA_ColdBias' */
        }
        else if (VeTFTC_b_EnblMtrAFA_NormChk)
        {
            /* Outputs for IfAction SubSystem: '<S175>/AvgTmp_WhenMtrATmpFA' incorporates:
             *  ActionPort: '<S181>/ActionPort'
             */
            /* Product: '<S181>/Product3' incorporates:
             *  Constant: '<S207>/Calib'
             *  Product: '<S181>/Product4'
             *  Sum: '<S181>/Sum3'
             *  Sum: '<S181>/Sum5'
             */
            VeTFTR_T_MtrBTmp_CalcWith_MtrATmpFA = (VeTFTC_T_MtrB_Temp_Fltd -
                ((VeTFTC_P_MtrB_HeatLoss - VeTFTC_P_MtrA_HeatLoss) *
                 KeTFTR_k_MtrHeatLoss_FctrMtrAFA)) * VeTFTC_k_MtrA_TempFact;

            /* Product: '<S181>/Product7' incorporates:
             *  Constant: '<S208>/Calib'
             *  Product: '<S181>/Product8'
             *  Sum: '<S181>/Sum10'
             *  Sum: '<S181>/Sum8'
             */
            VeTFTR_T_MtrBTmp_CalcWith_MtrATmpFA_AHeatLossHi =
                (((VeTFTC_P_MtrA_HeatLoss - VeTFTC_P_MtrB_HeatLoss) *
                  KeTFTR_k_MtrHeatLoss_Fctr_AHeatLossHi) +
                 VeTFTC_T_MtrB_Temp_Fltd) * VeTFTC_k_MtrA_TempFact;

            /* Sum: '<S181>/Sum4' incorporates:
             *  Product: '<S181>/Product1'
             *  Product: '<S181>/Product2'
             *  Sum: '<S181>/Sum9'
             */
            rtb_TmpSignalConversionAtTransOilTemp_Sa =
                (VeTFTC_T_AuxPmp_Temp_Fltd * VeTFTC_k_AuxPmp_TempFact) +
                (VeTFTC_k_MtrB_TempFact * VeTFTC_k_MtrB_TempFact);

            /* Sum: '<S181>/Sum4' */
            VeTFTC_T_TransOilTemp_AvgSum_MtrAFA =
                rtb_TmpSignalConversionAtTransOilTemp_Sa +
                VeTFTR_T_MtrBTmp_CalcWith_MtrATmpFA;

            /* Sum: '<S181>/Sum1' */
            VeTFTC_k_TempWghtdAvgFact_MtrAFA = (VeTFTC_k_AuxPmp_TempFact +
                VeTFTC_k_MtrA_TempFact) + VeTFTC_k_MtrB_TempFact;

            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S206>/Calib'
             */
            if (KeTFTR_b_TempWghtdAvgEnbl_MtrATmpFA)
            {
                /* Switch: '<S181>/Switch1' incorporates:
                 *  Constant: '<S204>/Calib'
                 */
                rtb_Sum4_b = KeTFTR_Cnt_TempAvgDivideFact_MtrATmpFA;
            }
            else
            {
                /* Switch: '<S181>/Switch1' */
                rtb_Sum4_b = VeTFTC_k_TempWghtdAvgFact_MtrAFA;
            }

            /* End of Switch: '<S181>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S181>/ProtectedDivision' */
            /* Switch: '<S209>/Switch1' incorporates:
             *  Constant: '<S209>/ConstantValue'
             *  Constant: '<S209>/ConstantValue1'
             *  Constant: '<S209>/ConstantValue2'
             *  Constant: '<S209>/ConstantValue3'
             *  Logic: '<S209>/AND'
             *  RelationalOperator: '<S209>/GreaterThanorEqual'
             *  RelationalOperator: '<S209>/GreaterThanorEqual1'
             *  RelationalOperator: '<S209>/NotEqual'
             *  RelationalOperator: '<S209>/NotEqual1'
             *  Switch: '<S209>/Switch2'
             *  Switch: '<S209>/Switch3'
             */
            if ((VeTFTC_T_TransOilTemp_AvgSum_MtrAFA != 0.0F) && (rtb_Sum4_b !=
                    0.0F))
            {
                /* Switch: '<S209>/Switch1' incorporates:
                 *  Product: '<S209>/Division'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA =
                    VeTFTC_T_TransOilTemp_AvgSum_MtrAFA / rtb_Sum4_b;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrAFA > 0.0F)
            {
                /* Switch: '<S209>/Switch2' incorporates:
                 *  Constant: '<S209>/MAXFLOAT'
                 *  Switch: '<S209>/Switch1'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA = 3.402823466E+38F;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrAFA < 0.0F)
            {
                /* Switch: '<S209>/Switch3' incorporates:
                 *  Constant: '<S209>/MINFLOAT'
                 *  Switch: '<S209>/Switch1'
                 *  Switch: '<S209>/Switch2'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S209>/Switch1' incorporates:
                 *  Constant: '<S209>/ConstantValue4'
                 *  Switch: '<S209>/Switch2'
                 *  Switch: '<S209>/Switch3'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA = 0.0F;
            }

            /* End of Switch: '<S209>/Switch1' */
            /* End of Outputs for SubSystem: '<S181>/ProtectedDivision' */

            /* Sum: '<S181>/Sum9' */
            VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_AHeatLossHi =
                rtb_TmpSignalConversionAtTransOilTemp_Sa +
                VeTFTR_T_MtrBTmp_CalcWith_MtrATmpFA_AHeatLossHi;

            /* Sum: '<S181>/Sum6' */
            VeTFTC_k_TempWghtdAvgFact_MtrAFA_AHeatLossHi =
                (VeTFTC_k_AuxPmp_TempFact + VeTFTC_k_MtrA_TempFact) +
                VeTFTC_k_MtrB_TempFact;

            /* Switch: '<S181>/Switch2' incorporates:
             *  Constant: '<S205>/Calib'
             */
            if (KeTFTR_b_TempWghtdAvgEnbl_AHeatLossHi)
            {
                /* Switch: '<S181>/Switch2' incorporates:
                 *  Constant: '<S203>/Calib'
                 */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    KeTFTR_Cnt_TempAvgDivideFact_AHeatLossHi;
            }
            else
            {
                /* Switch: '<S181>/Switch2' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    VeTFTC_k_TempWghtdAvgFact_MtrAFA_AHeatLossHi;
            }

            /* End of Switch: '<S181>/Switch2' */

            /* Outputs for Atomic SubSystem: '<S181>/ProtectedDivision1' */
            /* Switch: '<S210>/Switch1' incorporates:
             *  Constant: '<S210>/ConstantValue'
             *  Constant: '<S210>/ConstantValue1'
             *  Constant: '<S210>/ConstantValue2'
             *  Constant: '<S210>/ConstantValue3'
             *  Logic: '<S210>/AND'
             *  RelationalOperator: '<S210>/GreaterThanorEqual'
             *  RelationalOperator: '<S210>/GreaterThanorEqual1'
             *  RelationalOperator: '<S210>/NotEqual'
             *  RelationalOperator: '<S210>/NotEqual1'
             *  Switch: '<S210>/Switch2'
             *  Switch: '<S210>/Switch3'
             */
            if ((VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_AHeatLossHi != 0.0F) &&
                    (rtb_TmpSignalConversionAtTransOilTemp_Sa != 0.0F))
            {
                /* Switch: '<S210>/Switch1' incorporates:
                 *  Product: '<S210>/Division'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_AHeatLossHi =
                    VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_AHeatLossHi /
                    rtb_TmpSignalConversionAtTransOilTemp_Sa;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_AHeatLossHi > 0.0F)
            {
                /* Switch: '<S210>/Switch2' incorporates:
                 *  Constant: '<S210>/MAXFLOAT'
                 *  Switch: '<S210>/Switch1'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_AHeatLossHi =
                    3.402823466E+38F;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_AHeatLossHi < 0.0F)
            {
                /* Switch: '<S210>/Switch3' incorporates:
                 *  Constant: '<S210>/MINFLOAT'
                 *  Switch: '<S210>/Switch1'
                 *  Switch: '<S210>/Switch2'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_AHeatLossHi =
                    -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S210>/Switch1' incorporates:
                 *  Constant: '<S210>/ConstantValue4'
                 *  Switch: '<S210>/Switch2'
                 *  Switch: '<S210>/Switch3'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_AHeatLossHi = 0.0F;
            }

            /* End of Switch: '<S210>/Switch1' */
            /* End of Outputs for SubSystem: '<S181>/ProtectedDivision1' */

            /* Switch: '<S181>/Switch' incorporates:
             *  RelationalOperator: '<S181>/Comparison'
             */
            if (VeTFTC_P_MtrA_HeatLoss < VeTFTC_P_MtrB_HeatLoss)
            {
                rtb_Sum4_b = VeTFTC_T_TransOilTempAvgPre_MtrAFA;
            }
            else
            {
                rtb_Sum4_b = VeTFTC_T_TransOilTempAvgPre_MtrAFA_AHeatLossHi;
            }

            /* End of Switch: '<S181>/Switch' */

            /* Merge: '<S175>/Merge' incorporates:
             *  Gain: '<S211>/Gain'
             */
            VeTFTC_T_AvgTransOilTemp = 1.0F * rtb_Sum4_b;

            /* End of Outputs for SubSystem: '<S175>/AvgTmp_WhenMtrATmpFA' */
        }
        else if (VeTFTC_b_EnblMtrAFA_ColdBiasChk)
        {
            /* Outputs for IfAction SubSystem: '<S175>/AvgTmp_WhenMtrATmpFA_ColdBias' incorporates:
             *  ActionPort: '<S182>/ActionPort'
             */
            /* Sum: '<S182>/Sum4' incorporates:
             *  Product: '<S182>/Product1'
             *  Product: '<S182>/Product2'
             *  Product: '<S182>/Product3'
             */
            VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_ColdBias =
                ((VeTFTC_T_AuxPmp_Temp_Fltd * VeTFTC_k_AuxPmp_TempFact) +
                 (VeTFTC_T_MtrB_Temp_Fltd * VeTFTC_k_MtrA_TempFact)) +
                (VeTFTC_T_MtrB_Temp_Fltd * VeTFTC_k_MtrB_TempFact);

            /* Sum: '<S182>/Sum1' */
            VeTFTC_k_TempWghtdAvgFact_MtrAFA_ColdBias =
                (VeTFTC_k_AuxPmp_TempFact + VeTFTC_k_MtrA_TempFact) +
                VeTFTC_k_MtrB_TempFact;

            /* Switch: '<S182>/Switch1' incorporates:
             *  Constant: '<S213>/Calib'
             */
            if (KeTFTR_b_TempWghtdAvgEnbl_MtrAFA_ColdBias)
            {
                /* Switch: '<S182>/Switch1' incorporates:
                 *  Constant: '<S212>/Calib'
                 */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    KeTFTR_Cnt_TempAvgDivideFact_MtrAFA_ColdBias;
            }
            else
            {
                /* Switch: '<S182>/Switch1' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    VeTFTC_k_TempWghtdAvgFact_MtrAFA_ColdBias;
            }

            /* End of Switch: '<S182>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S182>/ProtectedDivision' */
            /* Switch: '<S214>/Switch1' incorporates:
             *  Constant: '<S214>/ConstantValue'
             *  Constant: '<S214>/ConstantValue1'
             *  Constant: '<S214>/ConstantValue2'
             *  Constant: '<S214>/ConstantValue3'
             *  Logic: '<S214>/AND'
             *  RelationalOperator: '<S214>/GreaterThanorEqual'
             *  RelationalOperator: '<S214>/GreaterThanorEqual1'
             *  RelationalOperator: '<S214>/NotEqual'
             *  RelationalOperator: '<S214>/NotEqual1'
             *  Switch: '<S214>/Switch2'
             *  Switch: '<S214>/Switch3'
             */
            if ((VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_ColdBias != 0.0F) &&
                    (rtb_TmpSignalConversionAtTransOilTemp_Sa != 0.0F))
            {
                /* Switch: '<S214>/Switch1' incorporates:
                 *  Product: '<S214>/Division'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_ColdBias =
                    VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_ColdBias /
                    rtb_TmpSignalConversionAtTransOilTemp_Sa;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_ColdBias > 0.0F)
            {
                /* Switch: '<S214>/Switch2' incorporates:
                 *  Constant: '<S214>/MAXFLOAT'
                 *  Switch: '<S214>/Switch1'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_ColdBias = 3.402823466E+38F;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum_MtrAFA_ColdBias < 0.0F)
            {
                /* Switch: '<S214>/Switch3' incorporates:
                 *  Constant: '<S214>/MINFLOAT'
                 *  Switch: '<S214>/Switch1'
                 *  Switch: '<S214>/Switch2'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_ColdBias = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S214>/Switch1' incorporates:
                 *  Constant: '<S214>/ConstantValue4'
                 *  Switch: '<S214>/Switch2'
                 *  Switch: '<S214>/Switch3'
                 */
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_ColdBias = 0.0F;
            }

            /* End of Switch: '<S214>/Switch1' */
            /* End of Outputs for SubSystem: '<S182>/ProtectedDivision' */

            /* Merge: '<S175>/Merge' incorporates:
             *  Gain: '<S215>/Gain'
             */
            VeTFTC_T_AvgTransOilTemp = 1.0F *
                VeTFTC_T_TransOilTempAvgPre_MtrAFA_ColdBias;

            /* End of Outputs for SubSystem: '<S175>/AvgTmp_WhenMtrATmpFA_ColdBias' */
        }
        else if (VeTFTC_b_EnblMtrAFA_MtrBFAChk)
        {
            /* Outputs for IfAction SubSystem: '<S175>/AvgTmp_WhenMtrAMtrB_FA' incorporates:
             *  ActionPort: '<S180>/ActionPort'
             */
            /* Merge: '<S175>/Merge' incorporates:
             *  Gain: '<S202>/Gain'
             */
            VeTFTC_T_AvgTransOilTemp = 1.0F * VeTFTC_T_AuxPmp_Temp_Fltd;

            /* End of Outputs for SubSystem: '<S175>/AvgTmp_WhenMtrAMtrB_FA' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S175>/AvgTmp_Else' incorporates:
             *  ActionPort: '<S179>/ActionPort'
             */
            /* Sum: '<S179>/Sum4' incorporates:
             *  Product: '<S179>/Product1'
             *  Product: '<S179>/Product2'
             *  Product: '<S179>/Product3'
             */
            VeTFTC_T_TransOilTemp_AvgSum = ((VeTFTC_T_AuxPmp_Temp_Fltd *
                VeTFTC_k_AuxPmp_TempFact) + (VeTFTC_T_MtrA_Temp_Fltd *
                VeTFTC_k_MtrA_TempFact)) + (VeTFTC_T_MtrB_Temp_Fltd *
                VeTFTC_k_MtrB_TempFact);

            /* Sum: '<S179>/Sum1' */
            VeTFTC_k_TempWghtdAvgFact = (VeTFTC_k_AuxPmp_TempFact +
                VeTFTC_k_MtrA_TempFact) + VeTFTC_k_MtrB_TempFact;

            /* Switch: '<S179>/Switch1' incorporates:
             *  Constant: '<S199>/Calib'
             */
            if (KeTFTR_b_TempWghtdAvgEnbl)
            {
                /* Switch: '<S179>/Switch1' incorporates:
                 *  Constant: '<S198>/Calib'
                 */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    KeTFTR_Cnt_TempAvgDivideFact;
            }
            else
            {
                /* Switch: '<S179>/Switch1' */
                rtb_TmpSignalConversionAtTransOilTemp_Sa =
                    VeTFTC_k_TempWghtdAvgFact;
            }

            /* End of Switch: '<S179>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S179>/ProtectedDivision' */
            /* Switch: '<S200>/Switch1' incorporates:
             *  Constant: '<S200>/ConstantValue'
             *  Constant: '<S200>/ConstantValue1'
             *  Constant: '<S200>/ConstantValue2'
             *  Constant: '<S200>/ConstantValue3'
             *  Logic: '<S200>/AND'
             *  RelationalOperator: '<S200>/GreaterThanorEqual'
             *  RelationalOperator: '<S200>/GreaterThanorEqual1'
             *  RelationalOperator: '<S200>/NotEqual'
             *  RelationalOperator: '<S200>/NotEqual1'
             *  Switch: '<S200>/Switch2'
             *  Switch: '<S200>/Switch3'
             */
            if ((VeTFTC_T_TransOilTemp_AvgSum != 0.0F) &&
                    (rtb_TmpSignalConversionAtTransOilTemp_Sa != 0.0F))
            {
                /* Switch: '<S200>/Switch1' incorporates:
                 *  Product: '<S200>/Division'
                 */
                VeTFTC_T_TransOilTempAvgPre = VeTFTC_T_TransOilTemp_AvgSum /
                    rtb_TmpSignalConversionAtTransOilTemp_Sa;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum > 0.0F)
            {
                /* Switch: '<S200>/Switch2' incorporates:
                 *  Constant: '<S200>/MAXFLOAT'
                 *  Switch: '<S200>/Switch1'
                 */
                VeTFTC_T_TransOilTempAvgPre = 3.402823466E+38F;
            }
            else if (VeTFTC_T_TransOilTemp_AvgSum < 0.0F)
            {
                /* Switch: '<S200>/Switch3' incorporates:
                 *  Constant: '<S200>/MINFLOAT'
                 *  Switch: '<S200>/Switch1'
                 *  Switch: '<S200>/Switch2'
                 */
                VeTFTC_T_TransOilTempAvgPre = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S200>/Switch1' incorporates:
                 *  Constant: '<S200>/ConstantValue4'
                 *  Switch: '<S200>/Switch2'
                 *  Switch: '<S200>/Switch3'
                 */
                VeTFTC_T_TransOilTempAvgPre = 0.0F;
            }

            /* End of Switch: '<S200>/Switch1' */
            /* End of Outputs for SubSystem: '<S179>/ProtectedDivision' */

            /* Merge: '<S175>/Merge' incorporates:
             *  Gain: '<S201>/Gain'
             */
            VeTFTC_T_AvgTransOilTemp = 1.0F * VeTFTC_T_TransOilTempAvgPre;

            /* End of Outputs for SubSystem: '<S175>/AvgTmp_Else' */
        }

        /* End of If: '<S175>/If1' */

        /* Lookup_n-D: '<S197>/Vector' incorporates:
         *  Gain: '<S106>/Gain'
         *  Merge: '<S175>/Merge'
         */
        VeTFTC_T_AmbFactor = look2_iflf_binlca_16a(VeTFTC_T_AvgTransOilTemp,
            VeTFTC_T_Amb_Temp, ((const float32 *)&(KxTFTR_k_AmbientTempFac[0])),
            ((const float32 *)&(KyTFTR_k_AmbientTempFac[0])), ((const float32 *)
            &(KtTFTR_k_AmbientTempFac[0])), (const uint32*)
            TFTR_ac_ConstP.pooled8, 17U);

        /* Switch: '<S175>/Switch5' */
        if (VeTFTC_b_TransOilTempAvg_FA)
        {
            /* Switch: '<S175>/Switch5' incorporates:
             *  Constant: '<S189>/Calib'
             */
            VeTFTC_T_TransOilTemp_AvgFin = KeTFTR_T_DfltTmp_WhenFlt;
        }
        else
        {
            /* Switch: '<S175>/Switch5' incorporates:
             *  Sum: '<S175>/Sum2'
             */
            VeTFTC_T_TransOilTemp_AvgFin = VeTFTC_T_AvgTransOilTemp +
                VeTFTC_T_AmbFactor;
        }

        /* End of Switch: '<S175>/Switch5' */

        /* MinMax: '<S170>/MinMax1' */
        VeTFTC_T_TOTAvgMaxLimit = fmaxf(fmaxf(VeTFTC_T_AuxPmp_Temp_Fltd,
            VeTFTC_T_MtrA_Temp_Fltd), VeTFTC_T_MtrB_Temp_Fltd);

        /* Switch: '<S170>/Switch2' incorporates:
         *  Constant: '<S230>/Calib'
         *  Logic: '<S170>/Logical3'
         */
        if (rtb_Gain && (KeTFTR_b_AmbFA_SetTransOilFA))
        {
            /* Switch: '<S170>/Switch2' incorporates:
             *  Constant: '<S229>/Calib'
             */
            VeTFTC_T_TransOilTempAvg_b4Limiter = KeTFTR_T_DfltTmp_WhenFlt;
        }
        else
        {
            /* Switch: '<S170>/Switch2' */
            VeTFTC_T_TransOilTempAvg_b4Limiter = VeTFTC_T_TransOilTemp_AvgFin;
        }

        /* End of Switch: '<S170>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S170>/Limiter1' */
        /* Switch: '<S231>/Switch1' incorporates:
         *  RelationalOperator: '<S231>/RelationalOperator'
         */
        if (VeTFTC_T_TOTAvgMaxLimit < VeTFTC_T_TransOilTempAvg_b4Limiter)
        {
            /* Switch: '<S231>/Switch1' */
            VeTFTC_T_TransOilTempAvg_Raw = VeTFTC_T_TOTAvgMaxLimit;
        }
        else
        {
            /* Switch: '<S231>/Switch1' */
            VeTFTC_T_TransOilTempAvg_Raw = VeTFTC_T_TransOilTempAvg_b4Limiter;
        }

        /* End of Switch: '<S231>/Switch1' */

        /* Switch: '<S231>/Switch' incorporates:
         *  RelationalOperator: '<S231>/RelationalOperator1'
         */
        if (VeTFTC_T_TransOilTempAvg_Raw <= VeTFTC_T_Amb_Temp)
        {
            /* Switch: '<S231>/Switch' */
            VeTFTC_T_TransOilTempAvg_Raw = VeTFTC_T_Amb_Temp;
        }

        /* End of Switch: '<S231>/Switch' */
        /* End of Outputs for SubSystem: '<S170>/Limiter1' */

        /* Switch: '<S170>/Switch' incorporates:
         *  Constant: '<S230>/Calib'
         *  Logic: '<S170>/Logical1'
         *  Logic: '<S170>/Logical2'
         */
        if (rtb_Gain && (!KeTFTR_b_AmbFA_SetTransOilFA))
        {
            /* Switch: '<S170>/Switch' */
            VeTFTC_T_TransOilTempAvg = VeTFTC_T_TransOilTempAvg_b4Limiter;
        }
        else
        {
            /* Switch: '<S170>/Switch' */
            VeTFTC_T_TransOilTempAvg = VeTFTC_T_TransOilTempAvg_Raw;
        }

        /* End of Switch: '<S170>/Switch' */

        /* Merge: '<S158>/Merge' incorporates:
         *  SignalConversion: '<S170>/SignalConversion'
         */
        TFTR_ac_B.VeTFTC_T_TransOilTempFin = VeTFTC_T_TransOilTempAvg;

        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S230>/Calib'
         *  Logic: '<S170>/Logical'
         */
        if (rtb_Gain && (KeTFTR_b_AmbFA_SetTransOilFA))
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S170>/TRUEConstant'
             */
            VeTFTC_b_TOTAvg_FA = true;
        }
        else
        {
            /* Switch: '<S170>/Switch1' */
            VeTFTC_b_TOTAvg_FA = VeTFTC_b_TransOilTempAvg_FA;
        }

        /* End of Switch: '<S170>/Switch1' */

        /* Merge: '<S158>/Merge1' incorporates:
         *  SignalConversion: '<S170>/SignalConversion1'
         */
        TFTR_ac_B.VeTFTC_b_TransOilTemp_FA = VeTFTC_b_TOTAvg_FA;
    }

    /* End of Outputs for SubSystem: '<S20>/TransOilTemp_Avg' */
    /* End of Outputs for SubSystem: '<S2>/Trans_Oil_Temp' */

    /* Outputs for Function Call SubSystem: '<S2>/ProcDiagnostics' */
    /* Logic: '<S90>/AND' incorporates:
     *  Constant: '<S19>/FALSEConstant'
     */
    VeTFTD_b_TransOilTemp_PredFA = false;

    /* End of Outputs for SubSystem: '<S2>/ProcDiagnostics' */

    /* Outputs for Function Call SubSystem: '<S2>/OutputsUpdate' */
    /* Switch: '<S18>/Switch43' incorporates:
     *  Constant: '<S89>/Calib'
     */
    if (KeTFTR_b_TransOilTempOvrdEnbl)
    {
        /* Switch: '<S18>/Switch43' incorporates:
         *  Constant: '<S86>/Calib'
         */
        rtb_TmpSignalConversionAtTransOilTemp_Sa = KeTFTR_T_TransOilTempOvrdVal;
    }
    else
    {
        /* Switch: '<S18>/Switch43' */
        rtb_TmpSignalConversionAtTransOilTemp_Sa =
            rtb_TFTC_T_TransOilTemp_write_IRV;
    }

    /* End of Switch: '<S18>/Switch43' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S87>/Calib'
     */
    if (KeTFTR_b_TransOilTempFAOvrdEnbl)
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Constant: '<S88>/Calib'
         */
        rtb_Gain = KeTFTR_b_TransOilTempFAOvrdVal;
    }
    else
    {
        /* Switch: '<S18>/Switch1' */
        rtb_Gain = rtb_TFTC_b_TransOilTempFA_write_IRV;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Outport: '<Root>/VeTFTR_b_TransOilTempExcess' incorporates:
     *  Logic: '<S84>/AND'
     */
    (void)Rte_Write_VeTFTR_b_TransOilTempExcess_Value
        (rtb_TFTC_b_TransOilTempExcess_write_IRV);

    /* End of Outputs for SubSystem: '<S2>/OutputsUpdate' */

    /* Outport: '<Root>/VeTFTR_T_TransOilTemp' */
    (void)Rte_Write_VeTFTR_T_TransOilTemp_Value
        (rtb_TmpSignalConversionAtTransOilTemp_Sa);

    /* Outport: '<Root>/VeTFTR_b_TransOilTempFA' */
    (void)Rte_Write_VeTFTR_b_TransOilTempFA_Value(rtb_Gain);

    /* Outputs for Function Call SubSystem: '<S2>/Trans_Oil_Temp' */
    /* Switch: '<S159>/Switch' */
    if (rtb_TFTR_TransOilTempFA_write_IRV)
    {
        /* Merge: '<Root>/Merge_3' incorporates:
         *  Constant: '<S159>/FALSEConstant'
         */
        Rte_IrvWrite_TFTR_MedTEF_TFTC_b_TransOilTempExcess_write_IRV(false);
    }
    else
    {
        /* Merge: '<Root>/Merge_3' incorporates:
         *  UnitDelay: '<S160>/UnitDelay'
         */
        Rte_IrvWrite_TFTR_MedTEF_TFTC_b_TransOilTempExcess_write_IRV
            (TFTR_ac_DW.UnitDelay_DSTATE_a4);
    }

    /* End of Switch: '<S159>/Switch' */
    /* End of Outputs for SubSystem: '<S2>/Trans_Oil_Temp' */

    /* Merge: '<Root>/Merge_5_Irv' */
    Rte_IrvWrite_TFTR_MedTEF_TFTR_TransOilTempFA_write_IRV(rtb_Gain);

    /* Merge: '<Root>/Merge_1' */
    Rte_IrvWrite_TFTR_MedTEF_TFTC_T_TransOilTemp_write_IRV
        (TFTR_ac_B.VeTFTC_T_TransOilTempFin);

    /* Merge: '<Root>/Merge_2' */
    Rte_IrvWrite_TFTR_MedTEF_TFTC_b_TransOilTempFA_write_IRV
        (TFTR_ac_B.VeTFTC_b_TransOilTemp_FA);

    /* Merge: '<Root>/Merge_4_Irv' */
    Rte_IrvWrite_TFTR_MedTEF_TFTR_TransOilTemp_write_IRV
        (rtb_TmpSignalConversionAtTransOilTemp_Sa);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S2>/OutputsUpdate_TransOilTempExcess' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
}

/* Output function */
FUNC(void, TFTR_CODE) TFTR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/TFTR_PwrOff'
     */
    /* Outport: '<Root>/NeTFTR_T_TransOilTempPred_Prev_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeTFTR_T_TransOilTempPred_Prev'
     */
    (void)
        Rte_Write_NeTFTR_T_TransOilTempPred_Prev_NeTFTR_T_TransOilTempPred_Prev
        (TFTR_ac_DW.NeTFTR_T_TransOilTempPred_Prev);

    /* Outport: '<Root>/NeTFTR_t_RealTime_Prev_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeTFTR_t_RealTime_Prev'
     */
    (void)Rte_Write_NeTFTR_t_RealTime_Prev_NeTFTR_t_RealTime_Prev
        (TFTR_ac_DW.NeTFTR_t_RealTime_Prev);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, TFTR_CODE) TFTR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TFTR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S397>/NeTFTR_t_RealTime_Prev' incorporates:
     *  Inport: '<Root>/NeTFTR_t_RealTime_Prev_PM_In'
     */
    (void)Rte_Read_NeTFTR_t_RealTime_Prev_Rx_NeTFTR_t_RealTime_Prev
        (&TFTR_ac_DW.NeTFTR_t_RealTime_Prev);

    /* DataStoreWrite: '<S397>/NeTFTR_T_TransOilTempPred_Prev' incorporates:
     *  Inport: '<Root>/NeTFTR_T_TransOilTempPred_Prev_PM_In'
     */
    (void)
        Rte_Read_NeTFTR_T_TransOilTempPred_Prev_Rx_NeTFTR_T_TransOilTempPred_Prev
        (&TFTR_ac_DW.NeTFTR_T_TransOilTempPred_Prev);

#if Rte_SysCon_Variant_TFTR_4

    /* Outputs for Function Call SubSystem: '<S4>/TFTC_Initialize_TransOilTemp_Data' */
    /* DataStoreRead: '<S398>/DataStoreRead' */
    VeTFTC_T_TransOilTemp_Saved = TFTR_ac_DW.NeTFTR_T_TransOilTempPred_Prev;

    /* DataStoreRead: '<S398>/DataStoreRead1' */
    VeTFTC_t_RealTime_Saved = TFTR_ac_DW.NeTFTR_t_RealTime_Prev;

    /* End of Outputs for SubSystem: '<S4>/TFTC_Initialize_TransOilTemp_Data' */
#endif

    /* SignalConversion generated from: '<S4>/TransOilTemp' incorporates:
     *  SignalConversion generated from: '<S4>/TransOilTempExcess'
     *  SignalConversion generated from: '<S4>/TransOilTempFA'
     *  SignalConversion generated from: '<S4>/TransOilTempFA_write'
     *  SignalConversion generated from: '<S4>/TransOilTemp_write'
     */
#if Rte_SysCon_Variant_TFTR_6

    /* Outputs for Function Call SubSystem: '<S4>/TFTR_NF_DIAL' */
    /* SignalConversion generated from: '<S399>/TransOilTemp' incorporates:
     *  Constant: '<S401>/Calib'
     */
    TFTR_ac_B.OutportBufferForTransOilTemp = KeTFTR_T_TransOilTemp_NF_Dial;

    /* SignalConversion generated from: '<S399>/TransOilTempFA' incorporates:
     *  Constant: '<S403>/Calib'
     */
    TFTR_ac_B.OutportBufferForTransOilTempFA = KeTFTR_b_TransOilTemp_FA_NF_Dial;

    /* SignalConversion generated from: '<S399>/TransOilTempExcess' incorporates:
     *  Constant: '<S402>/Calib'
     */
    TFTR_ac_B.OutportBufferForTransOilTempExcess =
        KeTFTR_b_TransOilTempExcess_NF_Dial;

    /* End of Outputs for SubSystem: '<S4>/TFTR_NF_DIAL' */

    /* Outport: '<Root>/VeTFTR_T_TransOilTemp' */
    (void)Rte_Write_VeTFTR_T_TransOilTemp_Value
        (TFTR_ac_B.OutportBufferForTransOilTemp);

    /* Outport: '<Root>/VeTFTR_b_TransOilTempExcess' */
    (void)Rte_Write_VeTFTR_b_TransOilTempExcess_Value
        (TFTR_ac_B.OutportBufferForTransOilTempExcess);

    /* Outport: '<Root>/VeTFTR_b_TransOilTempFA' */
    (void)Rte_Write_VeTFTR_b_TransOilTempFA_Value
        (TFTR_ac_B.OutportBufferForTransOilTempFA);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S4>/TransOilTemp' */

    /* SignalConversion generated from: '<S4>/RealTime_Saved_write' */
#if Rte_SysCon_Variant_TFTR_4

    /* SignalConversion generated from: '<S4>/RealTime_Saved_write' */
    Rte_IrvWrite_TFTR_PwrOn_RealTime_Saved_write_IRV(VeTFTC_t_RealTime_Saved);

#endif

    /* End of SignalConversion generated from: '<S4>/RealTime_Saved_write' */

    /* SignalConversion generated from: '<S4>/TransOilTempFA_write' */
#if Rte_SysCon_Variant_TFTR_6

    /* Merge: '<Root>/Merge_5_Irv' */
    Rte_IrvWrite_TFTR_PwrOn_TFTR_TransOilTempFA_write_IRV
        (TFTR_ac_B.OutportBufferForTransOilTempFA);

#endif

    /* End of SignalConversion generated from: '<S4>/TransOilTempFA_write' */

    /* SignalConversion generated from: '<S4>/TransOilTemp_Saved_write' */
#if Rte_SysCon_Variant_TFTR_4

    /* SignalConversion generated from: '<S4>/TransOilTemp_Saved_write' */
    Rte_IrvWrite_TFTR_PwrOn_TransOilTemp_Saved_write_IRV
        (VeTFTC_T_TransOilTemp_Saved);

#endif

    /* End of SignalConversion generated from: '<S4>/TransOilTemp_Saved_write' */

    /* SignalConversion generated from: '<S4>/TransOilTemp_write' */
#if Rte_SysCon_Variant_TFTR_6

    /* Merge: '<Root>/Merge_4_Irv' */
    Rte_IrvWrite_TFTR_PwrOn_TFTR_TransOilTemp_write_IRV
        (TFTR_ac_B.OutportBufferForTransOilTemp);

#endif

    /* End of SignalConversion generated from: '<S4>/TransOilTemp_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TFTR_CODE) TFTR_ac_Init(void)
{
    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    TFTR_ac_DW.NeTFTR_T_TransOilTempPred_Prev = 25.0F;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TFTR_PwrOn'
     */
#if Rte_SysCon_Variant_TFTR_6

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S4>/TFTR_NF_DIAL' */
    /* SystemInitialize for SignalConversion generated from: '<S399>/TransOilTemp' incorporates:
     *  Constant: '<S401>/Calib'
     */
    TFTR_ac_B.OutportBufferForTransOilTemp = KeTFTR_T_TransOilTemp_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S399>/TransOilTempFA' incorporates:
     *  Constant: '<S403>/Calib'
     */
    TFTR_ac_B.OutportBufferForTransOilTempFA = KeTFTR_b_TransOilTemp_FA_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S399>/TransOilTempExcess' incorporates:
     *  Constant: '<S402>/Calib'
     */
    TFTR_ac_B.OutportBufferForTransOilTempExcess =
        KeTFTR_b_TransOilTempExcess_NF_Dial;

    /* End of SystemInitialize for SubSystem: '<S4>/TFTR_NF_DIAL' */
    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
     *  SubSystem: '<Root>/TFTR_MedTEF'
     */
    /* SystemInitialize for SignalConversion generated from: '<S4>/RealTime_Saved_write' incorporates:
     *  SignalConversion generated from: '<S4>/TransOilTemp_Saved_write'
     */
#if Rte_SysCon_Variant_TFTR_4

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* SystemInitialize for SignalConversion generated from: '<S4>/RealTime_Saved_write' */
    Rte_IrvWrite_TFTR_ac_Init_RealTime_Saved_write_IRV(VeTFTC_t_RealTime_Saved);

    /* SystemInitialize for SignalConversion generated from: '<S4>/TransOilTemp_Saved_write' */
    Rte_IrvWrite_TFTR_ac_Init_TransOilTemp_Saved_write_IRV
        (VeTFTC_T_TransOilTemp_Saved);

    /* SystemInitialize for Function Call SubSystem: '<S2>/Trans_Oil_Temp' */
    /* SystemInitialize for Merge: '<S158>/Merge' */
    TFTR_ac_B.VeTFTC_T_TransOilTempFin = 0.0F;

    /* SystemInitialize for Merge: '<S158>/Merge1' */
    TFTR_ac_B.VeTFTC_b_TransOilTemp_FA = false;

    /* End of SystemInitialize for SubSystem: '<S2>/Trans_Oil_Temp' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S4>/RealTime_Saved_write' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Merge: '<Root>/Merge_4' incorporates:
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     */
#if Rte_SysCon_Variant_TFTR_4 || Rte_SysCon_Variant_TFTR_5 || Rte_SysCon_Variant_TFTR_6

    /* SystemInitialize for Outport: '<Root>/VeTFTR_T_TransOilTemp' */
    (void)Rte_Write_VeTFTR_T_TransOilTemp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeTFTR_b_TransOilTempFA' */
    (void)Rte_Write_VeTFTR_b_TransOilTempFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeTFTR_b_TransOilTempExcess' */
    (void)Rte_Write_VeTFTR_b_TransOilTempExcess_Value(false);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_4' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
