/*
 * File: ADAR_ac.c
 *
 * Code generated for Simulink model 'ADAR_ac'.
 *
 * Model version                  : 9.319
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:03:46 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADAR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S232>/Chart' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_AfterTAUnwind       ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_Pos_Profile         ((uint8)2U)
#endif

/* Named constants for Chart: '<S24>/OverCurrentProtection' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_Idle                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_NO_ACTIVE_CHILD_d   ((uint8)0U)
#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_NormalOperation     ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_OverHeatingProtection ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define ADAR_ac_IN_UpdateOverCurrentTimer ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl
#define AD_IN_CoolDownPeriodAfterSuccessfulShift ((uint8)1U)
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
#define START_SEC_CALIB_UNSPECIFIED_ADAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(boolean, ADAR_VAR_INIT) HeADAR_b_EnableCurrentPID = 0;/* Referenced by:
                                                                      * '<S110>/Calib'
                                                                      * '<S527>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(boolean, ADAR_VAR_INIT) HeADAR_b_UseLearnedTAValue = 1;/* Referenced by:
                                                                      * '<S166>/Calib'
                                                                      * '<S583>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(boolean, ADAR_VAR_INIT) HeADAR_b_UseLearnedTbl4StrayFlux =
    1;                                 /* Referenced by:
                                        * '<S314>/Calib'
                                        * '<S324>/Calib'
                                        * '<S731>/Calib'
                                        * '<S741>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(boolean, ADAR_VAR_INIT) HeADAR_b_UsePosCntrl = 1;/* Referenced by:
                                                                      * '<S21>/Calib'
                                                                      * '<S438>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(boolean, ADAR_VAR_INIT) HeADAR_b_UsePosCurrntForEngage = 1;/* Referenced by:
                                                                      * '<S36>/Calib'
                                                                      * '<S453>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) HeADAR_t_FastTEA_dT = 0.0005F;/* Referenced by:
                                                                      * '<S15>/Calib'
                                                                      * '<S432>/Calib'
                                                                      * '<S22>/Calib'
                                                                      * '<S439>/Calib'
                                                                      * '<S111>/Calib'
                                                                      * '<S139>/Calib'
                                                                      * '<S156>/Calib'
                                                                      * '<S528>/Calib'
                                                                      * '<S556>/Calib'
                                                                      * '<S573>/Calib'
                                                                      * '<S59>/Calib'
                                                                      * '<S373>/Calib'
                                                                      * '<S397>/Calib'
                                                                      * '<S476>/Calib'
                                                                      * '<S790>/Calib'
                                                                      * '<S814>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KaADAR_L_StrayFlux[3] =
{
    -7.0F, 0.0F, 7.0F
} ;                                    /* Referenced by:
                                        * '<S315>/Calib'
                                        * '<S325>/Calib'
                                        * '<S732>/Calib'
                                        * '<S742>/Calib'
                                        */

#endif

static volatile CONST(float32, ADAR_VAR_INIT) KaADAR_Pct_EndStpInitValue[4] =
{
    80.0F, 80.0F, 20.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<Root>/Data Store Memory'
                                        * '<Root>/Data Store Memory1'
                                        */

static volatile CONST(float32, ADAR_VAR_INIT) KaADAR_k_LftEndStpOffsetInit[3] =
{
    6.5267F, 6.5267F, 6.5267F
} ;                                    /* Referenced by: '<S847>/Calib' */

static volatile CONST(float32, ADAR_VAR_INIT) KaADAR_k_LftEndStpSlopeInit[3] =
{
    -0.0816F, -0.0816F, -0.0816F
} ;                                    /* Referenced by: '<S848>/Calib' */

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(boolean, ADAR_VAR_INIT) KeADAC_b_StopCmndAtShtDwn = 0;/* Referenced by:
                                                                      * '<S104>/Calib'
                                                                      * '<S521>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_CoolDownCrntCmnd = 0.0F;/* Referenced by:
                                                                      * '<S72>/Calib'
                                                                      * '<S489>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_DeenergizedCrrtThrsh =
    0.1F;                              /* Referenced by:
                                        * '<S374>/Calib'
                                        * '<S398>/Calib'
                                        * '<S791>/Calib'
                                        * '<S815>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_EnergizedCrrtThrsh = 6.9F;/* Referenced by:
                                                                      * '<S362>/Calib'
                                                                      * '<S386>/Calib'
                                                                      * '<S779>/Calib'
                                                                      * '<S803>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_OvrCrntThrshLSP = 3.0F;/* Referenced by:
                                                                      * '<S73>/Calib'
                                                                      * '<S490>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_OvrCrntThrshRSP = 6.0F;/* Referenced by:
                                                                      * '<S74>/Calib'
                                                                      * '<S491>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_PositionPIDUnwind = 1.0F;/* Referenced by:
                                                                      * '<S250>/Calib'
                                                                      * '<S667>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_StaticFric = 0.0F;/* Referenced by:
                                                                      * '<S53>/Calib'
                                                                      * '<S470>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_WEDClosingCurrent = 7.0F;/* Referenced by:
                                                                      * '<S33>/Calib'
                                                                      * '<S450>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_WEDClsngEoSCrrnt = 7.0F;/* Referenced by:
                                                                      * '<S45>/Calib'
                                                                      * '<S462>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_WEDOpeningCurrent = -7.0F;/* Referenced by:
                                                                      * '<S32>/Calib'
                                                                      * '<S449>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_I_WEDOpngEoSCrrnt = -7.0F;/* Referenced by:
                                                                      * '<S46>/Calib'
                                                                      * '<S463>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_L_DengageProfileMinOffst4PID = 0.0F;/* Referenced by:
                                                * '<S171>/Calib'
                                                * '<S588>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_DengagePstTorqTrapEndPos =
    0.3F;                              /* Referenced by:
                                        * '<S172>/Calib'
                                        * '<S589>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_DengageTorqTrapEndPos =
    3.5F;                              /* Referenced by:
                                        * '<S173>/Calib'
                                        * '<S590>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_DisengageEndStopEndPos =
    0.0F;                              /* Referenced by:
                                        * '<S174>/Calib'
                                        * '<S222>/Calib'
                                        * '<S316>/Calib'
                                        * '<S326>/Calib'
                                        * '<S591>/Calib'
                                        * '<S639>/Calib'
                                        * '<S733>/Calib'
                                        * '<S743>/Calib'
                                        * '<S285>/Calib'
                                        * '<S289>/Calib'
                                        * '<S702>/Calib'
                                        * '<S706>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_DisengageSftLndngEndPos =
    0.05F;                             /* Referenced by:
                                        * '<S175>/Calib'
                                        * '<S592>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_EligibleTAMaxOffset =
    0.7F;                              /* Referenced by:
                                        * '<S336>/Calib'
                                        * '<S753>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_EngageEndStopEndPos =
    4.895F;                            /* Referenced by:
                                        * '<S176>/Calib'
                                        * '<S223>/Calib'
                                        * '<S317>/Calib'
                                        * '<S327>/Calib'
                                        * '<S593>/Calib'
                                        * '<S640>/Calib'
                                        * '<S734>/Calib'
                                        * '<S744>/Calib'
                                        * '<S283>/Calib'
                                        * '<S287>/Calib'
                                        * '<S308>/Calib'
                                        * '<S309>/Calib'
                                        * '<S310>/Calib'
                                        * '<S700>/Calib'
                                        * '<S704>/Calib'
                                        * '<S725>/Calib'
                                        * '<S726>/Calib'
                                        * '<S727>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_EngageProfileMaxOffst4PID
    = 0.0F;                            /* Referenced by:
                                        * '<S224>/Calib'
                                        * '<S641>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_EngageTrqTrapEndPos =
    4.695F;                            /* Referenced by:
                                        * '<S225>/Calib'
                                        * '<S642>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_EngageTrqTrpStrtOffst =
    0.2F;                              /* Referenced by:
                                        * '<S226>/Calib'
                                        * '<S643>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_L_EngageTrqTrpStrtOffstAftrRatio = 1.27F;/* Referenced by:
                                                     * '<S227>/Calib'
                                                     * '<S644>/Calib'
                                                     */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_EngageTthAbtmntStrtOffst =
    0.75F;                             /* Referenced by:
                                        * '<S228>/Calib'
                                        * '<S645>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_LftTAValue = 2.5F;/* Referenced by: '<S19>/Calib' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_PosCntrHystrsisDelta =
    0.01F;                             /* Referenced by:
                                        * '<S177>/Calib'
                                        * '<S229>/Calib'
                                        * '<S594>/Calib'
                                        * '<S646>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_PosPIDTT = 0.2F;/* Referenced by:
                                                                      * '<S251>/Calib'
                                                                      * '<S668>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_RtTAValue = 2.5F;/* Referenced by: '<S436>/Calib' */

#endif

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_SlndPosInit = 0.0F;/* Referenced by: '<S849>/Calib' */

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_SolnStuckThrsh = 0.01F;/* Referenced by:
                                                                      * '<S54>/Calib'
                                                                      * '<S471>/Calib'
                                                                      */

#endif

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_TAInitValue = 0.0F;/* Referenced by:
                                                                      * '<Root>/Data Store Memory4'
                                                                      * '<Root>/Data Store Memory5'
                                                                      * '<S850>/Calib'
                                                                      * '<S851>/Calib'
                                                                      */

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_TAMax = 4.0F;/* Referenced by:
                                                                     * '<S409>/Calib'
                                                                     * '<S826>/Calib'
                                                                     * '<S337>/Calib'
                                                                     * '<S754>/Calib'
                                                                     */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_TAMin = 0.2F;/* Referenced by:
                                                                     * '<S410>/Calib'
                                                                     * '<S827>/Calib'
                                                                     * '<S338>/Calib'
                                                                     * '<S755>/Calib'
                                                                     */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_WEDActuation_ClsdThr =
    4.7F;                              /* Referenced by:
                                        * '<S121>/Calib'
                                        * '<S538>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_L_WEDActuation_OpenThr =
    0.1F;                              /* Referenced by:
                                        * '<S122>/Calib'
                                        * '<S539>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_Pct_CloseThrshDeenergizedMax = 23.92F;/* Referenced by:
                                                  * '<S375>/Calib'
                                                  * '<S792>/Calib'
                                                  */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_Pct_CloseThrshDeenergizedMin = 19.12F;/* Referenced by:
                                                  * '<S376>/Calib'
                                                  * '<S793>/Calib'
                                                  */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_Pct_CloseThrshEnergizedMax =
    21.51F;                            /* Referenced by:
                                        * '<S363>/Calib'
                                        * '<S780>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_Pct_CloseThrshEnergizedMin =
    15.91F;                            /* Referenced by:
                                        * '<S364>/Calib'
                                        * '<S781>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_Pct_OpenThrshDeenergizedMax
    = 82.65F;                          /* Referenced by:
                                        * '<S399>/Calib'
                                        * '<S816>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_Pct_OpenThrshDeenergizedMin
    = 73.74F;                          /* Referenced by:
                                        * '<S400>/Calib'
                                        * '<S817>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_Pct_OpenThrshEnergizedMax =
    82.11F;                            /* Referenced by:
                                        * '<S387>/Calib'
                                        * '<S804>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_Pct_OpenThrshEnergizedMin =
    21.51F;                            /* Referenced by:
                                        * '<S388>/Calib'
                                        * '<S805>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_Pct_WEDStopThresh = 0.001F;/* Referenced by:
                                                                      * '<S140>/Calib'
                                                                      * '<S157>/Calib'
                                                                      * '<S557>/Calib'
                                                                      * '<S574>/Calib'
                                                                      * '<S365>/Calib'
                                                                      * '<S389>/Calib'
                                                                      * '<S782>/Calib'
                                                                      * '<S806>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(boolean, ADAR_VAR_INIT) KeADAR_b_LearningActiveOvrd = 0;/* Referenced by:
                                                                      * '<S422>/Calib'
                                                                      * '<S839>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_dI_RtLim_Decr = -20.0F;/* Referenced by:
                                                                      * '<S75>/Calib'
                                                                      * '<S492>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_dI_RtLim_Incr = 20.0F;/* Referenced by:
                                                                      * '<S76>/Calib'
                                                                      * '<S493>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_dI_StaticFric_Decr = -0.1F;/* Referenced by:
                                                                      * '<S55>/Calib'
                                                                      * '<S472>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_dI_StaticFric_Incr = 20.0F;/* Referenced by:
                                                                      * '<S56>/Calib'
                                                                      * '<S473>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_DTerm_Diseng = 0.0F;/* Referenced by:
                                                                      * '<S92>/Calib'
                                                                      * '<S509>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_DTerm_Engage = 0.0F;/* Referenced by:
                                                                      * '<S98>/Calib'
                                                                      * '<S515>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_DTerm_PreTthAbtmntEngage =
    0.0F;                              /* Referenced by:
                                        * '<S237>/Calib'
                                        * '<S654>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_k_DTerm_PstTorqTrapDisengage = 0.0F;/* Referenced by:
                                                * '<S184>/Calib'
                                                * '<S601>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_DTerm_SftLndngDisengage =
    0.0F;                              /* Referenced by:
                                        * '<S197>/Calib'
                                        * '<S614>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_DTerm_TorqTrapDisengage =
    0.0F;                              /* Referenced by:
                                        * '<S212>/Calib'
                                        * '<S629>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_DTerm_TorqTrapEngage =
    0.0F;                              /* Referenced by:
                                        * '<S252>/Calib'
                                        * '<S669>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_DTerm_TthAbtmntEngage =
    0.0F;                              /* Referenced by:
                                        * '<S265>/Calib'
                                        * '<S682>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_IMax = 7.0F;/* Referenced by:
                                                                    * '<S60>/Calib'
                                                                    * '<S477>/Calib'
                                                                    */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_IMin = -7.0F;/* Referenced by:
                                                                     * '<S61>/Calib'
                                                                     * '<S478>/Calib'
                                                                     */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_ITerm_Diseng = 0.0F;/* Referenced by:
                                                                      * '<S93>/Calib'
                                                                      * '<S510>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_ITerm_Engage = 0.0F;/* Referenced by:
                                                                      * '<S99>/Calib'
                                                                      * '<S516>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_ITerm_PreTthAbtmntEngage =
    500.0F;                            /* Referenced by:
                                        * '<S238>/Calib'
                                        * '<S655>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_k_ITerm_PstTorqTrapDisengage = 25.0F;/* Referenced by:
                                                 * '<S185>/Calib'
                                                 * '<S602>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_ITerm_SftLndngDisengage =
    500.0F;                            /* Referenced by:
                                        * '<S198>/Calib'
                                        * '<S615>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_ITerm_TorqTrapDisengage =
    25.0F;                             /* Referenced by:
                                        * '<S211>/Calib'
                                        * '<S628>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_ITerm_TorqTrapEngage =
    700.0F;                            /* Referenced by:
                                        * '<S253>/Calib'
                                        * '<S670>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_ITerm_TthAbtmntEngage =
    400.0F;                            /* Referenced by:
                                        * '<S266>/Calib'
                                        * '<S683>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PIDInitial = 0.0F;/* Referenced by:
                                                                      * '<S62>/Calib'
                                                                      * '<S479>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PTerm_Diseng = 0.0F;/* Referenced by:
                                                                      * '<S94>/Calib'
                                                                      * '<S511>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PTerm_Engage = 0.0F;/* Referenced by:
                                                                      * '<S100>/Calib'
                                                                      * '<S517>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PTerm_PreTthAbtmntEngage =
    3.0F;                              /* Referenced by:
                                        * '<S239>/Calib'
                                        * '<S656>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_k_PTerm_PstTorqTrapDisengage = 1.0F;/* Referenced by:
                                                * '<S186>/Calib'
                                                * '<S603>/Calib'
                                                */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PTerm_SftLndngDisengage =
    3.0F;                              /* Referenced by:
                                        * '<S199>/Calib'
                                        * '<S616>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PTerm_TorqTrapDisengage =
    1.0F;                              /* Referenced by:
                                        * '<S210>/Calib'
                                        * '<S627>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PTerm_TorqTrapEngage =
    4.0F;                              /* Referenced by:
                                        * '<S254>/Calib'
                                        * '<S671>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_k_PTerm_TthAbtmntEngage =
    5.0F;                              /* Referenced by:
                                        * '<S267>/Calib'
                                        * '<S684>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_k_SoftLandingFilterCoefficient = 0.25F;/* Referenced by:
                                                   * '<S200>/Calib'
                                                   * '<S617>/Calib'
                                                   */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT)
    KeADAR_k_TthAbtmntFilterCoefficient = 0.25F;/* Referenced by:
                                                 * '<S268>/Calib'
                                                 * '<S685>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(sint8, ADAR_VAR_INIT) KeADAR_n_WEDStopEndStopCnt = 50;/* Referenced by:
                                                                      * '<S411>/Calib'
                                                                      * '<S828>/Calib'
                                                                      * '<S366>/Calib'
                                                                      * '<S390>/Calib'
                                                                      * '<S783>/Calib'
                                                                      * '<S807>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_r_EngageTrqTrpStrtRatio =
    0.56F;                             /* Referenced by:
                                        * '<S230>/Calib'
                                        * '<S647>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_r_PositionConvRat = 0.45F;/* Referenced by:
                                                                      * '<S303>/Calib'
                                                                      * '<S307>/Calib'
                                                                      * '<S720>/Calib'
                                                                      * '<S724>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_t_CoolDownCrntTmLmt = 3.0F;/* Referenced by:
                                                                      * '<S77>/Calib'
                                                                      * '<S494>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_t_OvrCrntTmLmt = 1.0F;/* Referenced by:
                                                                      * '<S78>/Calib'
                                                                      * '<S495>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_t_SSCloseTmr4Learning =
    0.01F;                             /* Referenced by:
                                        * '<S377>/Calib'
                                        * '<S794>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_t_SSOpenTmr4Learning =
    0.01F;                             /* Referenced by:
                                        * '<S401>/Calib'
                                        * '<S818>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_t_WEDRingingClosingTmr =
    0.05F;                             /* Referenced by:
                                        * '<S141>/Calib'
                                        * '<S558>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_t_WEDRingingOpeningTmr =
    0.05F;                             /* Referenced by:
                                        * '<S158>/Calib'
                                        * '<S575>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_v_ClsngPreTthAbtmnt = 50.0F;/* Referenced by:
                                                                      * '<S240>/Calib'
                                                                      * '<S657>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_v_ClsngTorqTrap = 50.0F;/* Referenced by:
                                                                      * '<S255>/Calib'
                                                                      * '<S672>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_v_OpngPstTorqTrap = -50.0F;/* Referenced by:
                                                                      * '<S187>/Calib'
                                                                      * '<S604>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_v_OpngTorqTrap = -200.0F;/* Referenced by:
                                                                      * '<S209>/Calib'
                                                                      * '<S626>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KeADAR_v_TASolSpdThrsh = 5.0F;/* Referenced by:
                                                                      * '<S412>/Calib'
                                                                      * '<S829>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KtADAR_I_CurrLimit[14] =
{
    7.0F, 7.0F, 7.0F, 6.9F, 6.72F, 6.48F, 6.19F, 5.81F, 4.69F, 3.84F, 2.7F, 6.9F,
    7.0F, 7.0F
} ;                                    /* Referenced by:
                                        * '<S38>/Vector'
                                        * '<S455>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KtADAR_I_OLCurrCmnd_MgntcFild[8] =
{
    4.32F, 1.2F, 0.51F, 0.08F, -0.14F, -0.65F, -1.24F, -2.7F
} ;                                    /* Referenced by:
                                        * '<S49>/Vector'
                                        * '<S466>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KtADAR_L_LftStrayFlux[6] =
{
    4.895F, 0.0F, 4.895F, 0.0F, 4.895F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S318>/Vector'
                                        * '<S735>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KtADAR_L_RtStrayFlux[6] =
{
    4.895F, 0.0F, 4.895F, 0.0F, 4.895F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S328>/Vector'
                                        * '<S745>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KtADAR_Pct_SlndDC_Base[6] =
{
    -100.0F, -90.0F, -60.0F, 0.0F, 60.0F, 90.0F
} ;                                    /* Referenced by:
                                        * '<S107>/Vector'
                                        * '<S524>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KtADAR_Pct_SlndDC_VoltTempMod[9] =
{
    1.28F, 1.0F, 0.8F, 1.28F, 1.0F, 0.8F, 1.28F, 1.0F, 0.8F
} ;                                    /* Referenced by:
                                        * '<S108>/Vector'
                                        * '<S525>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KxADAR_I_CurrLimit[14] =
{
    0.0F, 2.145F, 2.395F, 2.645F, 2.895F, 3.145F, 3.395F, 3.645F, 3.895F, 4.145F,
    4.395F, 4.645F, 4.695F, 4.895F
} ;                                    /* Referenced by:
                                        * '<S38>/Vector'
                                        * '<S455>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KxADAR_I_OLCurrCmnd_MgntcFild[8] =
{
    0.0F, 0.5F, 1.0F, 2.0F, 3.0F, 4.0F, 4.395F, 4.895F
} ;                                    /* Referenced by:
                                        * '<S49>/Vector'
                                        * '<S466>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KxADAR_L_StrayFlux[2] =
{
    20.0F, 80.0F
} ;                                    /* Referenced by:
                                        * '<S318>/Vector'
                                        * '<S328>/Vector'
                                        * '<S735>/Vector'
                                        * '<S745>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KxADAR_Pct_SlndDC_Base[6] =
{
    -15.0F, -10.0F, -7.0F, 0.0F, 7.0F, 10.0F
} ;                                    /* Referenced by:
                                        * '<S107>/Vector'
                                        * '<S524>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KxADAR_Pct_SlndDC_VoltTempMod[3] =
{
    10.0F, 12.8F, 16.0F
} ;                                    /* Referenced by:
                                        * '<S108>/Vector'
                                        * '<S525>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KyADAR_L_StrayFlux[3] =
{
    -7.0F, 0.0F, 7.0F
} ;                                    /* Referenced by:
                                        * '<S318>/Vector'
                                        * '<S328>/Vector'
                                        * '<S735>/Vector'
                                        * '<S745>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static volatile CONST(float32, ADAR_VAR_INIT) KyADAR_Pct_SlndDC_VoltTempMod[3] =
{
    -40.0F, 0.0F, 40.0F
} ;                                    /* Referenced by:
                                        * '<S108>/Vector'
                                        * '<S525>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ADAR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, ADAR_VAR_INIT) NaADAR_Pct_LftEndStp[4];/* '<Root>/Data Store Memory' */
static VAR(float32, ADAR_VAR_INIT) NaADAR_Pct_RtEndStp[4];/* '<Root>/Data Store Memory1' */
static VAR(float32, ADAR_VAR_INIT) NeADAR_L_LftTAPos;/* '<Root>/Data Store Memory4' */
static VAR(float32, ADAR_VAR_INIT) NeADAR_L_RtTAPos;/* '<Root>/Data Store Memory5' */
static VAR(sint8, ADAR_VAR_INIT) VaADAR_Cnt_LftEndStpLearning_DS[4];/* '<Root>/Data Store Memory2' */
static VAR(sint8, ADAR_VAR_INIT) VaADAR_Cnt_RtEndStpLearning_DS[4];/* '<Root>/Data Store Memory3' */
static VAR(float32, ADAR_VAR_INIT) VaADAR_L_LftEndStpOffset_DS[3];/* '<Root>/Data Store Memory11' */
static VAR(float32, ADAR_VAR_INIT) VaADAR_L_LftTAPos_DS[10];/* '<Root>/Data Store Memory8' */
static VAR(float32, ADAR_VAR_INIT) VaADAR_L_RtEndStpOffset_DS[3];/* '<Root>/Data Store Memory13' */
static VAR(float32, ADAR_VAR_INIT) VaADAR_L_RtTAPos_DS[10];/* '<Root>/Data Store Memory9' */
static VAR(float32, ADAR_VAR_INIT) VaADAR_k_LftEndStpSlope_DS[3];/* '<Root>/Data Store Memory10' */
static VAR(float32, ADAR_VAR_INIT) VaADAR_k_RtEndStpSlope_DS[3];/* '<Root>/Data Store Memory12' */

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_LftCLCmnd;/* '<S112>/Switch' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_LftDTermCrrnt;/* '<S109>/Product2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_LftITermCrrnt;/* '<S113>/Switch' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_LftOLCmnd;/* '<S83>/Product' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_LftPTermCrrnt;/* '<S109>/Product' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_LftPWMCmnd;/* '<S106>/Gain' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_RtCLCmnd;/* '<S529>/Switch' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_RtDTermCrrnt;/* '<S526>/Product2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_RtITermCrrnt;/* '<S530>/Switch' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_RtOLCmnd;/* '<S500>/Product' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_RtPTermCrrnt;/* '<S526>/Product' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_DC_RtPWMCmnd;/* '<S523>/Gain' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_LftCrrntCmnd;/* '<S70>/Sum3' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_LftDTermPos;/* '<S6>/Merge4' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_LftITermPos;/* '<S6>/Merge3' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_LftPIDPos;/* '<S6>/Merge1' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_LftPTermPos;/* '<S6>/Merge2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_RtCrrntCmnd;/* '<S487>/Sum3' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_RtDTermPos;/* '<S423>/Merge4' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_RtITermPos;/* '<S423>/Merge3' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_RtPIDPos;/* '<S423>/Merge1' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_I_RtPTermPos;/* '<S423>/Merge2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_L_LftPosAct;/* '<S10>/Merge' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_L_LftProfilePosition;/* '<S9>/Merge1' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_L_RtPosAct;/* '<S427>/Merge' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_L_RtProfilePosition;/* '<S426>/Merge1' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(boolean, ADAR_VAR_INIT) VeADAC_b_LftPIDReset;/* '<S6>/Merge5' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(boolean, ADAR_VAR_INIT) VeADAC_b_RtPIDReset;/* '<S423>/Merge5' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(TeADAR_e_ActuationStages, ADAR_VAR_INIT) VeADAC_e_LftActuationStage;/* '<S9>/Merge' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(TeADAR_e_CurrntProtectionStatus, ADAR_VAR_INIT)
    VeADAC_e_LftCrrntPrtctnSt;         /* '<S24>/OverCurrentProtection' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(TeADAR_e_ActuationCmndStates, ADAR_VAR_INIT) VeADAC_e_LftCtrlCmnd;/* '<S8>/Merge4' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(TeADAR_e_ActuationStages, ADAR_VAR_INIT) VeADAC_e_RtActuationStage;/* '<S426>/Merge' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(TeADAR_e_CurrntProtectionStatus, ADAR_VAR_INIT)
    VeADAC_e_RtCrrntPrtctnSt;          /* '<S441>/OverCurrentProtection' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(TeADAR_e_ActuationCmndStates, ADAR_VAR_INIT) VeADAC_e_RtCtrlCmnd;/* '<S425>/Merge4' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_LftDGainCrrnt;/* '<S81>/Merge2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_LftDGainPos;/* '<S9>/Merge4' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_LftIGainCrrnt;/* '<S81>/Merge1' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_LftIGainPos;/* '<S9>/Merge2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_LftPGainCrrnt;/* '<S81>/Merge' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_LftPGainPos;/* '<S9>/Merge3' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_RtDGainCrrnt;/* '<S498>/Merge2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_RtDGainPos;/* '<S426>/Merge4' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_RtIGainCrrnt;/* '<S498>/Merge1' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_RtIGainPos;/* '<S426>/Merge2' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_RtPGainCrrnt;/* '<S498>/Merge' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_k_RtPGainPos;/* '<S426>/Merge3' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_r_LftHeatingTmrRatio;/* '<S24>/OverCurrentProtection' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_r_RtHeatingTmrRatio;/* '<S441>/OverCurrentProtection' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_t_LftWEDCoolDownTmr;/* '<S24>/OverCurrentProtection' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_t_LftWEDHeatingTmr;/* '<S24>/OverCurrentProtection' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_t_RtWEDCoolDownTmr;/* '<S441>/OverCurrentProtection' */

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static VAR(float32, ADAR_VAR_INIT) VeADAC_t_RtWEDHeatingTmr;/* '<S441>/OverCurrentProtection' */

#endif

static VAR(sint8, ADAR_VAR_INIT) VeADAR_Cnt_LftTAPosLearning_DS;/* '<Root>/Data Store Memory6' */
static VAR(sint8, ADAR_VAR_INIT) VeADAR_Cnt_RtTAPosLearning_DS;/* '<Root>/Data Store Memory7' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADAR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ADAR
#include "MemMap.h"

CONST(ConstB_ADAR_ac_T, ADAR_VAR_INIT) ADAR_ac_ConstB =
{
    CeADAR_e_SS_Indeterminate,         /* '<S844>/Constant' */
    CeADAR_e_SS_Indeterminate,         /* '<S845>/Constant' */
    CeADAR_e_Indeterminate,            /* '<S843>/Constant' */
    CeADAR_e_Indeterminate             /* '<S842>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ADAR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ADAR
#include "MemMap.h"

CONST(ConstP_ADAR_ac_T, ADAR_VAR_INIT) ADAR_ac_ConstP =
{

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S318>/Vector'
     *   '<S328>/Vector'
     *   '<S735>/Vector'
     *   '<S745>/Vector'
     */
    {
        1U, 2U
    },

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S108>/Vector'
     *   '<S525>/Vector'
     */
    {
        2U, 2U
    },

#endif

#ifndef CONSTP_ADAR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_ADAR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADAR
#include "MemMap.h"

VAR(B_ADAR_ac_T, ADAR_VAR_INIT) ADAR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADAR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADAR
#include "MemMap.h"

VAR(DW_ADAR_ac_T, ADAR_VAR_INIT) ADAR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADAR
#include "MemMap.h"
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_EndStop_Process(VAR(boolean,
    AUTOMATIC) rtu_Enable, VAR(float32, AUTOMATIC) rtu_VeADAC_Pct_OpnEnergized,
    VAR(float32, AUTOMATIC) rtu_VeADAC_Pct_OpnNonEnergized, VAR(float32,
    AUTOMATIC) rtu_VeADAC_Pct_ClsdNonEnergized, VAR(float32, AUTOMATIC)
    rtu_VeADAC_Pct_ClsdEnergized, VAR(TeADAR_e_WEDID, AUTOMATIC)
    rtu_VeADAR_e_WEDID);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Index_Search(VAR(float32, AUTOMATIC)
    rtu_Value, CONST(float32, AUTOMATIC) rtu_Vector[3], P2VAR
    (B_Index_Search_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_LeftWED(VAR(float32, AUTOMATIC)
    rtu_ADAI_Pct_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_ADAI_I_WEDSlndCurrAct, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAI_L_WEDSlndPosAct, P2VAR(B_LeftWED_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_RightWED(VAR(float32, AUTOMATIC)
    rtu_ADAI_Pct_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_ADAI_I_WEDSlndCurrAct, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAI_L_WEDSlndPosAct, P2VAR(B_RightWED_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_TA_Processing(VAR(boolean, AUTOMATIC)
    rtu_Enable, CONST(float32, AUTOMATIC) rtu_TA_Array[10], VAR(TeADAR_e_WEDID,
    AUTOMATIC) rtu_VeADAR_e_WEDID);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_Status(VAR
    (TeADAR_e_ActuationStatus, AUTOMATIC) rtu_ThisWED_e_LastReportedStatus,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_TimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_WithHold_Reset(P2VAR
    (DW_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_WithHold_Update(VAR
    (float32, AUTOMATIC) rtu_ADAC_Pct_WEDPosition, P2VAR
    (B_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_WithHold(VAR(boolean,
    AUTOMATIC) rtu_ADAC_b_WEDTimerFreeze, VAR(float32, AUTOMATIC)
    rtu_ADAC_Pct_WEDPosition, VAR(boolean, AUTOMATIC) rtu_RTMRLearningActive,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_TimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State, P2VAR
    (B_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_Status(VAR
    (TeADAR_e_ActuationStatus, AUTOMATIC) rtu_ThisWED_e_LastReportedStatus,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_TimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_WithHold_Reset(P2VAR
    (DW_Write_Closing_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_WithHold_Update(VAR
    (float32, AUTOMATIC) rtu_ADAC_Pct_WEDPosition, P2VAR
    (B_Write_Closing_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Write_Closing_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_WithHold(VAR(boolean,
    AUTOMATIC) rtu_ADAC_b_WEDTimerFreeze, VAR(float32, AUTOMATIC)
    rtu_ADAC_Pct_WEDPosition, VAR(boolean, AUTOMATIC) rtu_RTMRLearningActive,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC, ADAR_VAR_INIT) rty_DtrmnActnSts_State, P2VAR(boolean, AUTOMATIC,
    ADAR_VAR_INIT) rty_TimerIsActive, P2VAR(B_Write_Closing_WithHold_ADAR_ac_T,
    AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR(DW_Write_Closing_WithHold_ADAR_ac_T,
    AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Open_Status(VAR(boolean,
    AUTOMATIC) rtu_RTMRLearningActive, VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC) rtu_CmndWEDActnState_z, VAR(sint8, AUTOMATIC) rtu_P2LearningCount,
    VAR(sint8, AUTOMATIC) rtu_P1LearningCount, P2VAR(TeADAR_e_ActuationStatus,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean,
    AUTOMATIC, ADAR_VAR_INIT) rty_TimerIsActive, P2VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC, ADAR_VAR_INIT)
    rty_DtrmnActnSts_State, P2VAR(B_Write_Open_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Write_Open_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closed_Status(VAR(boolean,
    AUTOMATIC) rtu_RTMRLearningActive, VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC) rtu_CmndWEDActnState_z, VAR(sint8, AUTOMATIC) rtu_P5LearningCount,
    VAR(sint8, AUTOMATIC) rtu_P6LearningCount, P2VAR(TeADAR_e_ActuationStatus,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean,
    AUTOMATIC, ADAR_VAR_INIT) rty_TimerIsActive, P2VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC, ADAR_VAR_INIT)
    rty_DtrmnActnSts_State, P2VAR(B_Write_Closed_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Write_Closed_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Indeterminate_Status(P2VAR
    (TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_OpenTimerIsActive, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_ClosedTimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Init(P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Reset(P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Disable(P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Update(P2VAR
    (B_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement(VAR(float32, AUTOMATIC)
    rtu_ADAC_L_ActPos, VAR(float32, AUTOMATIC) rtu_dT, VAR(float32, AUTOMATIC)
    rtu_ADAC_I_ITermPos, VAR(boolean, AUTOMATIC) rtu_ADAC_b_CoolDownActive, VAR
    (float32, AUTOMATIC) rtu_ADAC_L_TAPos, P2VAR(TeADAR_e_ActuationStages,
    AUTOMATIC, ADAR_VAR_INIT) rty_ActacnStage, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_PositionProfile, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PTerm, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ITerm, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_DTerm, P2VAR(B_Engagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Engagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Init(P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Reset(P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Disable(P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Update(P2VAR
    (B_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement(VAR(float32, AUTOMATIC)
    rtu_ADAC_L_ActPos, VAR(float32, AUTOMATIC) rtu_dT, VAR(boolean, AUTOMATIC)
    rtu_ADAC_b_CoolDownActive, P2VAR(TeADAR_e_ActuationStages, AUTOMATIC,
    ADAR_VAR_INIT) rty_ActacnStage, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PositionProfile, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_PTerm,
    P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ITerm, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_DTerm, P2VAR(B_Disengagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Disengagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Idle(VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC) rtu_ADAC_e_SolenoidCtrlCmnd, P2VAR(TeADAR_e_ActuationStages,
    AUTOMATIC, ADAR_VAR_INIT) rty_ActacnStage, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_PositionProfile, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PTerm, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ITerm, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_DTerm);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_PositionControl_Init(P2VAR
    (DW_PositionControl_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_PositionControl_Reset(P2VAR
    (DW_PositionControl_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_PositionControl(VAR(float32,
    AUTOMATIC) rtu_ADAC_L_ProfPos, VAR(float32, AUTOMATIC)
    rtu_ADAC_k_ProfPosPTerm, VAR(float32, AUTOMATIC) rtu_ADAC_k_ProfPosITerm,
    VAR(float32, AUTOMATIC) rtu_ADAC_k_ProfPosDTerm, VAR(float32, AUTOMATIC)
    rtu_VeADAI_L_ActPos, VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC)
    rtu_ADAC_e_ActuationStatus, VAR(boolean, AUTOMATIC)
    rtu_VeADAR_b_CoolDownActiveWED, VAR(boolean, AUTOMATIC)
    rtu_VeADAC_b_WEDLearningActive, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_I_SlndCurrCmdt, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PIDCntrlCmd, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_PTerm,
    P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_ITerm, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_DTerm, P2VAR(boolean, AUTOMATIC,
    ADAR_VAR_INIT) rty_ADAC_b_PIDResetAll, P2VAR(DW_PositionControl_ADAR_ac_T,
    AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_ConstanCurrentControl(VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC) rtu_ADAC_e_CmndWEDActn_State,
    P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_SlndCurrCmdt, P2VAR
    (float32, AUTOMATIC, ADAR_VAR_INIT) rty_PIDCntrlCmd, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_PTerm, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_ADAC_I_ITerm, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_I_DTerm, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_b_PIDResetAll);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_EngagingGains(P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_PTerm_Engage, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_ITerm_Engage, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_DTerm_Engage);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_DisengagingGains(P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_PTerm_Diseng, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_ITerm_Diseng, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_DTerm_Diseng);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_IdleGains(P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_PTerm_Idle, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ITerm_Idle, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_DTerm_Idle);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_ADAR_LearningProcedure_Init(P2VAR
    (DW_ADAR_LearningProcedure_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_ADAR_LearningProcedure(VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC) rtu_VeADAR_e_ActuationStates, VAR
    (float32, AUTOMATIC) rtu_VeADAR_Pct_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_VeADAR_L_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_ADAI_I_WEDSlndCurrAct, VAR(boolean, AUTOMATIC) rtu_OpenTimerActive, VAR
    (boolean, AUTOMATIC) rtu_CloseTimerActive, VAR(TeADAR_e_WEDID, AUTOMATIC)
    rtu_VeADAR_e_WEDID, P2VAR(DW_ADAR_LearningProcedure_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW);

#endif

/*
 * Output and update for enable system:
 *    '<S10>/EndStop_Process'
 *    '<S427>/EndStop_Process'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_EndStop_Process(VAR(boolean,
    AUTOMATIC) rtu_Enable, VAR(float32, AUTOMATIC) rtu_VeADAC_Pct_OpnEnergized,
    VAR(float32, AUTOMATIC) rtu_VeADAC_Pct_OpnNonEnergized, VAR(float32,
    AUTOMATIC) rtu_VeADAC_Pct_ClsdNonEnergized, VAR(float32, AUTOMATIC)
    rtu_VeADAC_Pct_ClsdEnergized, VAR(TeADAR_e_WEDID, AUTOMATIC)
    rtu_VeADAR_e_WEDID)
{
    float32 rtb_Add;
    float32 rtb_Add1;
    float32 rtb_Add2;
    float32 rtb_Add4;
    float32 rtb_Product2;
    float32 rtb_Product3;

    /* Outputs for Enabled SubSystem: '<S10>/EndStop_Process' incorporates:
     *  EnablePort: '<S292>/Enable'
     */
    if (rtu_Enable)
    {
        /* Sum: '<S302>/Add4' incorporates:
         *  Constant: '<S303>/Calib'
         *  Product: '<S302>/Product'
         *  Sum: '<S302>/Add3'
         */
        rtb_Add4 = rtu_VeADAC_Pct_OpnNonEnergized -
            ((rtu_VeADAC_Pct_OpnEnergized - rtu_VeADAC_Pct_OpnNonEnergized) *
             KeADAR_r_PositionConvRat);

        /* Sum: '<S302>/Add2' */
        rtb_Add2 = rtu_VeADAC_Pct_ClsdEnergized - rtb_Add4;

        /* Outputs for Atomic SubSystem: '<S302>/Protected Division2' */
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S306>/Constant Value'
         *  Constant: '<S306>/Constant Value1'
         *  Constant: '<S306>/Constant Value2'
         *  Constant: '<S306>/Constant Value3'
         *  Constant: '<S310>/Calib'
         *  Logic: '<S306>/AND'
         *  RelationalOperator: '<S306>/Greater Than or Equal '
         *  RelationalOperator: '<S306>/Greater Than or Equal 1'
         *  RelationalOperator: '<S306>/Not Equal'
         *  RelationalOperator: '<S306>/Not Equal1'
         *  Switch: '<S306>/Switch2'
         *  Switch: '<S306>/Switch3'
         */
        if ((KeADAR_L_EngageEndStopEndPos != 0.0F) && (rtb_Add2 != 0.0F))
        {
            /* Switch: '<S306>/Switch1' incorporates:
             *  Product: '<S306>/Division'
             */
            rtb_Add2 = KeADAR_L_EngageEndStopEndPos / rtb_Add2;
        }
        else if (KeADAR_L_EngageEndStopEndPos > 0.0F)
        {
            /* Switch: '<S306>/Switch2' incorporates:
             *  Constant: '<S306>/MAXFLOAT'
             *  Switch: '<S306>/Switch1'
             */
            rtb_Add2 = 3.402823466E+38F;
        }
        else if (KeADAR_L_EngageEndStopEndPos < 0.0F)
        {
            /* Switch: '<S306>/Switch3' incorporates:
             *  Constant: '<S306>/MINFLOAT'
             *  Switch: '<S306>/Switch1'
             *  Switch: '<S306>/Switch2'
             */
            rtb_Add2 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S306>/Switch1' incorporates:
             *  Constant: '<S306>/Constant Value4'
             *  Switch: '<S306>/Switch2'
             *  Switch: '<S306>/Switch3'
             */
            rtb_Add2 = 0.0F;
        }

        /* End of Switch: '<S306>/Switch1' */
        /* End of Outputs for SubSystem: '<S302>/Protected Division2' */

        /* Sum: '<S302>/Add1' */
        rtb_Add1 = rtu_VeADAC_Pct_ClsdNonEnergized -
            rtu_VeADAC_Pct_OpnNonEnergized;

        /* Outputs for Atomic SubSystem: '<S302>/Protected Division1' */
        /* Switch: '<S305>/Switch1' incorporates:
         *  Constant: '<S305>/Constant Value'
         *  Constant: '<S305>/Constant Value1'
         *  Constant: '<S305>/Constant Value2'
         *  Constant: '<S305>/Constant Value3'
         *  Constant: '<S309>/Calib'
         *  Logic: '<S305>/AND'
         *  RelationalOperator: '<S305>/Greater Than or Equal '
         *  RelationalOperator: '<S305>/Greater Than or Equal 1'
         *  RelationalOperator: '<S305>/Not Equal'
         *  RelationalOperator: '<S305>/Not Equal1'
         *  Switch: '<S305>/Switch2'
         *  Switch: '<S305>/Switch3'
         */
        if ((KeADAR_L_EngageEndStopEndPos != 0.0F) && (rtb_Add1 != 0.0F))
        {
            /* Switch: '<S305>/Switch1' incorporates:
             *  Product: '<S305>/Division'
             */
            rtb_Add1 = KeADAR_L_EngageEndStopEndPos / rtb_Add1;
        }
        else if (KeADAR_L_EngageEndStopEndPos > 0.0F)
        {
            /* Switch: '<S305>/Switch2' incorporates:
             *  Constant: '<S305>/MAXFLOAT'
             *  Switch: '<S305>/Switch1'
             */
            rtb_Add1 = 3.402823466E+38F;
        }
        else if (KeADAR_L_EngageEndStopEndPos < 0.0F)
        {
            /* Switch: '<S305>/Switch3' incorporates:
             *  Constant: '<S305>/MINFLOAT'
             *  Switch: '<S305>/Switch1'
             *  Switch: '<S305>/Switch2'
             */
            rtb_Add1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S305>/Switch1' incorporates:
             *  Constant: '<S305>/Constant Value4'
             *  Switch: '<S305>/Switch2'
             *  Switch: '<S305>/Switch3'
             */
            rtb_Add1 = 0.0F;
        }

        /* End of Switch: '<S305>/Switch1' */
        /* End of Outputs for SubSystem: '<S302>/Protected Division1' */

        /* Sum: '<S302>/Add' incorporates:
         *  Constant: '<S307>/Calib'
         *  Product: '<S302>/Product1'
         *  Sum: '<S302>/Add5'
         *  Sum: '<S302>/Add6'
         */
        rtb_Add = (rtu_VeADAC_Pct_ClsdNonEnergized -
                   ((rtu_VeADAC_Pct_ClsdEnergized -
                     rtu_VeADAC_Pct_ClsdNonEnergized) * KeADAR_r_PositionConvRat))
            - rtu_VeADAC_Pct_OpnEnergized;

        /* Outputs for Atomic SubSystem: '<S302>/Protected Division' */
        /* Switch: '<S304>/Switch1' incorporates:
         *  Constant: '<S304>/Constant Value'
         *  Constant: '<S304>/Constant Value1'
         *  Constant: '<S304>/Constant Value2'
         *  Constant: '<S304>/Constant Value3'
         *  Constant: '<S308>/Calib'
         *  Logic: '<S304>/AND'
         *  RelationalOperator: '<S304>/Greater Than or Equal '
         *  RelationalOperator: '<S304>/Greater Than or Equal 1'
         *  RelationalOperator: '<S304>/Not Equal'
         *  RelationalOperator: '<S304>/Not Equal1'
         *  Switch: '<S304>/Switch2'
         *  Switch: '<S304>/Switch3'
         */
        if ((KeADAR_L_EngageEndStopEndPos != 0.0F) && (rtb_Add != 0.0F))
        {
            /* Switch: '<S304>/Switch1' incorporates:
             *  Product: '<S304>/Division'
             */
            rtb_Add = KeADAR_L_EngageEndStopEndPos / rtb_Add;
        }
        else if (KeADAR_L_EngageEndStopEndPos > 0.0F)
        {
            /* Switch: '<S304>/Switch2' incorporates:
             *  Constant: '<S304>/MAXFLOAT'
             *  Switch: '<S304>/Switch1'
             */
            rtb_Add = 3.402823466E+38F;
        }
        else if (KeADAR_L_EngageEndStopEndPos < 0.0F)
        {
            /* Switch: '<S304>/Switch3' incorporates:
             *  Constant: '<S304>/MINFLOAT'
             *  Switch: '<S304>/Switch1'
             *  Switch: '<S304>/Switch2'
             */
            rtb_Add = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S304>/Switch1' incorporates:
             *  Constant: '<S304>/Constant Value4'
             *  Switch: '<S304>/Switch2'
             *  Switch: '<S304>/Switch3'
             */
            rtb_Add = 0.0F;
        }

        /* End of Switch: '<S304>/Switch1' */
        /* End of Outputs for SubSystem: '<S302>/Protected Division' */

        /* Product: '<S302>/Product4' */
        rtb_Add4 = (-rtb_Add4) * rtb_Add2;

        /* Product: '<S302>/Product3' */
        rtb_Product3 = (-rtu_VeADAC_Pct_OpnNonEnergized) * rtb_Add1;

        /* Product: '<S302>/Product2' */
        rtb_Product2 = (-rtu_VeADAC_Pct_OpnEnergized) * rtb_Add;

        /* If: '<S292>/If' incorporates:
         *  Constant: '<S298>/Constant'
         *  Constant: '<S299>/Constant'
         *  RelationalOperator: '<S292>/Comparison1'
         *  RelationalOperator: '<S292>/Comparison6'
         */
        if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_LeftWED)
        {
            /* Outputs for IfAction SubSystem: '<S292>/LeftWED' incorporates:
             *  ActionPort: '<S300>/Action Port'
             */
            /* DataStoreWrite: '<S300>/Data Store Write' */
            VaADAR_k_LftEndStpSlope_DS[0] = rtb_Add;
            VaADAR_k_LftEndStpSlope_DS[1] = rtb_Add1;
            VaADAR_k_LftEndStpSlope_DS[2] = rtb_Add2;

            /* DataStoreWrite: '<S300>/Data Store Write1' */
            VaADAR_L_LftEndStpOffset_DS[0] = rtb_Product2;
            VaADAR_L_LftEndStpOffset_DS[1] = rtb_Product3;
            VaADAR_L_LftEndStpOffset_DS[2] = rtb_Add4;

            /* End of Outputs for SubSystem: '<S292>/LeftWED' */
        }
        else
        {
            if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_RightWED)
            {
                /* Outputs for IfAction SubSystem: '<S292>/RightWED' incorporates:
                 *  ActionPort: '<S301>/Action Port'
                 */
                /* DataStoreWrite: '<S301>/Data Store Write' */
                VaADAR_k_RtEndStpSlope_DS[0] = rtb_Add;
                VaADAR_k_RtEndStpSlope_DS[1] = rtb_Add1;
                VaADAR_k_RtEndStpSlope_DS[2] = rtb_Add2;

                /* DataStoreWrite: '<S301>/Data Store Write1' */
                VaADAR_L_RtEndStpOffset_DS[0] = rtb_Product2;
                VaADAR_L_RtEndStpOffset_DS[1] = rtb_Product3;
                VaADAR_L_RtEndStpOffset_DS[2] = rtb_Add4;

                /* End of Outputs for SubSystem: '<S292>/RightWED' */
            }
        }

        /* End of If: '<S292>/If' */
    }

    /* End of Outputs for SubSystem: '<S10>/EndStop_Process' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S313>/Index_Search'
 *    '<S323>/Index_Search'
 *    '<S730>/Index_Search'
 *    '<S740>/Index_Search'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Index_Search(VAR(float32, AUTOMATIC)
    rtu_Value, CONST(float32, AUTOMATIC) rtu_Vector[3], P2VAR
    (B_Index_Search_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB)
{
    float32 Denominator;

    /* Chart: '<S313>/Index_Search' */
    /* Gateway: ADAC_IndexSearch1D3Point/Index_Search */
    /* During: ADAC_IndexSearch1D3Point/Index_Search */
    /* Entry Internal: ADAC_IndexSearch1D3Point/Index_Search */
    /* Transition: '<S320>:17' */
    if (rtu_Value >= rtu_Vector[1])
    {
        /* Transition: '<S320>:9' */
        /* Transition: '<S320>:5' */
        localB->IndexUpper = 2;
        localB->IndexLower = 1;

        /* Transition: '<S320>:64' */
    }
    else
    {
        /* Transition: '<S320>:19' */
        localB->IndexUpper = 1;
        localB->IndexLower = 0;
    }

    /* Transition: '<S320>:1' */
    Denominator = rtu_Vector[localB->IndexUpper] - rtu_Vector[localB->IndexLower];
    if (Denominator <= 0.0F)
    {
        /* Transition: '<S320>:4' */
        /* Transition: '<S320>:20' */
        /* Transition: '<S320>:15' */
        localB->Fraction = 0.0F;

        /* Transition: '<S320>:3' */
    }
    else
    {
        /* Transition: '<S320>:29' */
        localB->Fraction = (rtu_Value - rtu_Vector[localB->IndexLower]) /
            Denominator;
        if (localB->Fraction < 0.0F)
        {
            /* Transition: '<S320>:25' */
            /* Transition: '<S320>:15' */
            localB->Fraction = 0.0F;

            /* Transition: '<S320>:3' */
        }
        else
        {
            /* Transition: '<S320>:27' */
            if (localB->Fraction > 1.0F)
            {
                /* Transition: '<S320>:24' */
                /* Transition: '<S320>:10' */
                localB->Fraction = 1.0F;

                /* Transition: '<S320>:3' */
            }
            else
            {
                /* Transition: '<S320>:22' */
            }
        }
    }

    /* End of Chart: '<S313>/Index_Search' */
}

#endif

/*
 * Output and update for action system:
 *    '<S10>/LeftWED'
 *    '<S427>/LeftWED'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_LeftWED(VAR(float32, AUTOMATIC)
    rtu_ADAI_Pct_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_ADAI_I_WEDSlndCurrAct, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAI_L_WEDSlndPosAct, P2VAR(B_LeftWED_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB)
{
    float32 rtb_Switch_db;
    float32 rtb_Switch_p_tmp;

    /* Chart: '<S313>/Index_Search' incorporates:
     *  Constant: '<S315>/Calib'
     */
    ADAR_ac_Index_Search(rtu_ADAI_I_WEDSlndCurrAct, ((const float32 *)
                          &(KaADAR_L_StrayFlux[0])), &localB->sf_Index_Search);

    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S314>/Calib'
     */
    if (HeADAR_b_UseLearnedTbl4StrayFlux)
    {
        /* Selector: '<S311>/Selector1' incorporates:
         *  DataStoreRead: '<S295>/Data Store Read'
         */
        rtb_Switch_db = VaADAR_k_LftEndStpSlope_DS
            [(localB->sf_Index_Search.IndexLower)];

        /* Selector: '<S312>/Selector1' incorporates:
         *  DataStoreRead: '<S295>/Data Store Read1'
         */
        rtb_Switch_p_tmp = VaADAR_L_LftEndStpOffset_DS
            [(localB->sf_Index_Search.IndexLower)];

        /* Switch: '<S295>/Switch' incorporates:
         *  DataStoreRead: '<S295>/Data Store Read'
         *  DataStoreRead: '<S295>/Data Store Read1'
         *  Product: '<S295>/Product5'
         *  Product: '<S311>/Multiplication'
         *  Product: '<S312>/Multiplication'
         *  Selector: '<S311>/Selector1'
         *  Selector: '<S311>/Selector3'
         *  Selector: '<S312>/Selector1'
         *  Selector: '<S312>/Selector3'
         *  Sum: '<S295>/Add7'
         *  Sum: '<S311>/Summation'
         *  Sum: '<S311>/Summation4'
         *  Sum: '<S312>/Summation'
         *  Sum: '<S312>/Summation4'
         */
        rtb_Switch_db = ((((VaADAR_k_LftEndStpSlope_DS
                            [(localB->sf_Index_Search.IndexUpper)] -
                            rtb_Switch_db) * localB->sf_Index_Search.Fraction) +
                          rtb_Switch_db) * rtu_ADAI_Pct_WEDSlndPosAct) +
            (((VaADAR_L_LftEndStpOffset_DS[(localB->sf_Index_Search.IndexUpper)]
               - rtb_Switch_p_tmp) * localB->sf_Index_Search.Fraction) +
             rtb_Switch_p_tmp);
    }
    else
    {
        /* Switch: '<S295>/Switch' incorporates:
         *  Lookup_n-D: '<S318>/Vector'
         */
        rtb_Switch_db = look2_iflf_binlca_16a(rtu_ADAI_Pct_WEDSlndPosAct,
            rtu_ADAI_I_WEDSlndCurrAct, ((const float32 *)&(KxADAR_L_StrayFlux[0])),
            ((const float32 *)&(KyADAR_L_StrayFlux[0])), ((const float32 *)
            &(KtADAR_L_LftStrayFlux[0])), ADAR_ac_ConstP.pooled12, 2U);
    }

    /* End of Switch: '<S295>/Switch' */

    /* Outputs for Atomic SubSystem: '<S295>/Limiter1' */
    /* Switch: '<S319>/Switch1' incorporates:
     *  Constant: '<S317>/Calib'
     *  RelationalOperator: '<S319>/Relational Operator'
     */
    if (KeADAR_L_EngageEndStopEndPos < rtb_Switch_db)
    {
        /* Switch: '<S319>/Switch1' */
        rtb_Switch_db = KeADAR_L_EngageEndStopEndPos;
    }

    /* End of Switch: '<S319>/Switch1' */

    /* Switch: '<S319>/Switch' incorporates:
     *  Constant: '<S316>/Calib'
     *  RelationalOperator: '<S319>/Relational Operator1'
     */
    if (rtb_Switch_db > KeADAR_L_DisengageEndStopEndPos)
    {
        *rty_ADAI_L_WEDSlndPosAct = rtb_Switch_db;
    }
    else
    {
        *rty_ADAI_L_WEDSlndPosAct = KeADAR_L_DisengageEndStopEndPos;
    }

    /* End of Switch: '<S319>/Switch' */
    /* End of Outputs for SubSystem: '<S295>/Limiter1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S10>/RightWED'
 *    '<S427>/RightWED'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_RightWED(VAR(float32, AUTOMATIC)
    rtu_ADAI_Pct_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_ADAI_I_WEDSlndCurrAct, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAI_L_WEDSlndPosAct, P2VAR(B_RightWED_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB)
{
    float32 rtb_Switch_ek_tmp;
    float32 rtb_Switch_lx;

    /* Chart: '<S323>/Index_Search' incorporates:
     *  Constant: '<S325>/Calib'
     */
    ADAR_ac_Index_Search(rtu_ADAI_I_WEDSlndCurrAct, ((const float32 *)
                          &(KaADAR_L_StrayFlux[0])), &localB->sf_Index_Search);

    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S324>/Calib'
     */
    if (HeADAR_b_UseLearnedTbl4StrayFlux)
    {
        /* Selector: '<S321>/Selector1' incorporates:
         *  DataStoreRead: '<S296>/Data Store Read'
         */
        rtb_Switch_lx = VaADAR_k_RtEndStpSlope_DS
            [(localB->sf_Index_Search.IndexLower)];

        /* Selector: '<S322>/Selector1' incorporates:
         *  DataStoreRead: '<S296>/Data Store Read1'
         */
        rtb_Switch_ek_tmp = VaADAR_L_RtEndStpOffset_DS
            [(localB->sf_Index_Search.IndexLower)];

        /* Switch: '<S296>/Switch' incorporates:
         *  DataStoreRead: '<S296>/Data Store Read'
         *  DataStoreRead: '<S296>/Data Store Read1'
         *  Product: '<S296>/Product5'
         *  Product: '<S321>/Multiplication'
         *  Product: '<S322>/Multiplication'
         *  Selector: '<S321>/Selector1'
         *  Selector: '<S321>/Selector3'
         *  Selector: '<S322>/Selector1'
         *  Selector: '<S322>/Selector3'
         *  Sum: '<S296>/Add7'
         *  Sum: '<S321>/Summation'
         *  Sum: '<S321>/Summation4'
         *  Sum: '<S322>/Summation'
         *  Sum: '<S322>/Summation4'
         */
        rtb_Switch_lx = ((((VaADAR_k_RtEndStpSlope_DS
                            [(localB->sf_Index_Search.IndexUpper)] -
                            rtb_Switch_lx) * localB->sf_Index_Search.Fraction) +
                          rtb_Switch_lx) * rtu_ADAI_Pct_WEDSlndPosAct) +
            (((VaADAR_L_RtEndStpOffset_DS[(localB->sf_Index_Search.IndexUpper)]
               - rtb_Switch_ek_tmp) * localB->sf_Index_Search.Fraction) +
             rtb_Switch_ek_tmp);
    }
    else
    {
        /* Switch: '<S296>/Switch' incorporates:
         *  Lookup_n-D: '<S328>/Vector'
         */
        rtb_Switch_lx = look2_iflf_binlca_16a(rtu_ADAI_Pct_WEDSlndPosAct,
            rtu_ADAI_I_WEDSlndCurrAct, ((const float32 *)&(KxADAR_L_StrayFlux[0])),
            ((const float32 *)&(KyADAR_L_StrayFlux[0])), ((const float32 *)
            &(KtADAR_L_RtStrayFlux[0])), ADAR_ac_ConstP.pooled12, 2U);
    }

    /* End of Switch: '<S296>/Switch' */

    /* Outputs for Atomic SubSystem: '<S296>/Limiter1' */
    /* Switch: '<S329>/Switch1' incorporates:
     *  Constant: '<S327>/Calib'
     *  RelationalOperator: '<S329>/Relational Operator'
     */
    if (KeADAR_L_EngageEndStopEndPos < rtb_Switch_lx)
    {
        /* Switch: '<S329>/Switch1' */
        rtb_Switch_lx = KeADAR_L_EngageEndStopEndPos;
    }

    /* End of Switch: '<S329>/Switch1' */

    /* Switch: '<S329>/Switch' incorporates:
     *  Constant: '<S326>/Calib'
     *  RelationalOperator: '<S329>/Relational Operator1'
     */
    if (rtb_Switch_lx > KeADAR_L_DisengageEndStopEndPos)
    {
        *rty_ADAI_L_WEDSlndPosAct = rtb_Switch_lx;
    }
    else
    {
        *rty_ADAI_L_WEDSlndPosAct = KeADAR_L_DisengageEndStopEndPos;
    }

    /* End of Switch: '<S329>/Switch' */
    /* End of Outputs for SubSystem: '<S296>/Limiter1' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S10>/TA_Processing'
 *    '<S427>/TA_Processing'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_TA_Processing(VAR(boolean, AUTOMATIC)
    rtu_Enable, CONST(float32, AUTOMATIC) rtu_TA_Array[10], VAR(TeADAR_e_WEDID,
    AUTOMATIC) rtu_VeADAR_e_WEDID)
{
    float32 rtb_Product1_n;
    float32 rtb_Product2;
    float32 rtb_Product3;
    float32 rtb_Product4_k;
    float32 rtb_Product5_k;
    float32 rtb_Product6;
    float32 rtb_Product7;
    float32 rtb_Product8;
    float32 rtb_Product9;
    float32 rtb_Switch8;
    float32 rtb_Switch9;
    boolean rtb_RelationalOperator10;
    boolean rtb_RelationalOperator1_ja;
    boolean rtb_RelationalOperator2_ci;
    boolean rtb_RelationalOperator3_eq;
    boolean rtb_RelationalOperator4_p;
    boolean rtb_RelationalOperator5;
    boolean rtb_RelationalOperator6;
    boolean rtb_RelationalOperator7;
    boolean rtb_RelationalOperator8;
    boolean rtb_RelationalOperator9;

    /* Outputs for Enabled SubSystem: '<S10>/TA_Processing' incorporates:
     *  EnablePort: '<S297>/Enable'
     */
    if (rtu_Enable)
    {
        /* Switch: '<S335>/Switch' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator'
         *  RelationalOperator: '<S335>/Relational Operator11'
         *  RelationalOperator: '<S335>/Relational Operator13'
         */
        if ((rtu_TA_Array[0] <= KeADAR_L_TAMax) && (rtu_TA_Array[0] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product1' */
            rtb_Product1_n = rtu_TA_Array[0];
        }
        else
        {
            /* Product: '<S335>/Product1' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product1_n = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch' */

        /* Switch: '<S335>/Switch1' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator1'
         *  RelationalOperator: '<S335>/Relational Operator12'
         *  RelationalOperator: '<S335>/Relational Operator14'
         */
        if ((rtu_TA_Array[1] <= KeADAR_L_TAMax) && (rtu_TA_Array[1] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product2' */
            rtb_Product2 = rtu_TA_Array[1];
        }
        else
        {
            /* Product: '<S335>/Product2' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product2 = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch1' */

        /* Switch: '<S335>/Switch2' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator2'
         *  RelationalOperator: '<S335>/Relational Operator15'
         *  RelationalOperator: '<S335>/Relational Operator16'
         */
        if ((rtu_TA_Array[2] <= KeADAR_L_TAMax) && (rtu_TA_Array[2] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product3' */
            rtb_Product3 = rtu_TA_Array[2];
        }
        else
        {
            /* Product: '<S335>/Product3' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product3 = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch2' */

        /* Switch: '<S335>/Switch3' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator3'
         *  RelationalOperator: '<S335>/Relational Operator17'
         *  RelationalOperator: '<S335>/Relational Operator18'
         */
        if ((rtu_TA_Array[3] <= KeADAR_L_TAMax) && (rtu_TA_Array[3] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product4' */
            rtb_Product4_k = rtu_TA_Array[3];
        }
        else
        {
            /* Product: '<S335>/Product4' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product4_k = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch3' */

        /* Switch: '<S335>/Switch4' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator4'
         *  RelationalOperator: '<S335>/Relational Operator19'
         *  RelationalOperator: '<S335>/Relational Operator20'
         */
        if ((rtu_TA_Array[4] <= KeADAR_L_TAMax) && (rtu_TA_Array[4] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product5' */
            rtb_Product5_k = rtu_TA_Array[4];
        }
        else
        {
            /* Product: '<S335>/Product5' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product5_k = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch4' */

        /* Switch: '<S335>/Switch5' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator5'
         *  RelationalOperator: '<S335>/Relational Operator21'
         *  RelationalOperator: '<S335>/Relational Operator23'
         */
        if ((rtu_TA_Array[5] <= KeADAR_L_TAMax) && (rtu_TA_Array[5] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product6' */
            rtb_Product6 = rtu_TA_Array[5];
        }
        else
        {
            /* Product: '<S335>/Product6' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product6 = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch5' */

        /* Switch: '<S335>/Switch6' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator6'
         *  RelationalOperator: '<S335>/Relational Operator22'
         *  RelationalOperator: '<S335>/Relational Operator24'
         */
        if ((rtu_TA_Array[6] <= KeADAR_L_TAMax) && (rtu_TA_Array[6] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product7' */
            rtb_Product7 = rtu_TA_Array[6];
        }
        else
        {
            /* Product: '<S335>/Product7' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product7 = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch6' */

        /* Switch: '<S335>/Switch7' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator7'
         *  RelationalOperator: '<S335>/Relational Operator25'
         *  RelationalOperator: '<S335>/Relational Operator26'
         */
        if ((rtu_TA_Array[7] <= KeADAR_L_TAMax) && (rtu_TA_Array[7] >=
                KeADAR_L_TAMin))
        {
            /* Product: '<S335>/Product8' */
            rtb_Product8 = rtu_TA_Array[7];
        }
        else
        {
            /* Product: '<S335>/Product8' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Product8 = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch7' */

        /* Switch: '<S335>/Switch8' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator8'
         *  RelationalOperator: '<S335>/Relational Operator27'
         *  RelationalOperator: '<S335>/Relational Operator28'
         */
        if ((rtu_TA_Array[8] <= KeADAR_L_TAMax) && (rtu_TA_Array[8] >=
                KeADAR_L_TAMin))
        {
            /* Switch: '<S335>/Switch8' */
            rtb_Switch8 = rtu_TA_Array[8];
        }
        else
        {
            /* Switch: '<S335>/Switch8' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Switch8 = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch8' */

        /* Switch: '<S335>/Switch9' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S338>/Calib'
         *  Logic: '<S335>/Logical Operator9'
         *  RelationalOperator: '<S335>/Relational Operator29'
         *  RelationalOperator: '<S335>/Relational Operator30'
         */
        if ((rtu_TA_Array[9] <= KeADAR_L_TAMax) && (rtu_TA_Array[9] >=
                KeADAR_L_TAMin))
        {
            /* Switch: '<S335>/Switch9' */
            rtb_Switch9 = rtu_TA_Array[9];
        }
        else
        {
            /* Switch: '<S335>/Switch9' incorporates:
             *  Constant: '<S335>/Constant'
             */
            rtb_Switch9 = 9999.0F;
        }

        /* End of Switch: '<S335>/Switch9' */

        /* Product: '<S335>/Product9' incorporates:
         *  Constant: '<S336>/Calib'
         *  MinMax: '<S335>/Min of Elements'
         *  Sum: '<S335>/Add'
         */
        rtb_Product9 = fminf(fminf(fminf(fminf(fminf(fminf(fminf(fminf(fminf
            (rtb_Product1_n, rtb_Product2), rtb_Product3), rtb_Product4_k),
            rtb_Product5_k), rtb_Product6), rtb_Product7), rtb_Product8),
                              rtb_Switch8), rtb_Switch9) +
            KeADAR_L_EligibleTAMaxOffset;

        /* RelationalOperator: '<S335>/Relational Operator6' */
        rtb_RelationalOperator6 = (rtb_Product1_n <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator1' */
        rtb_RelationalOperator1_ja = (rtb_Product2 <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator3' */
        rtb_RelationalOperator3_eq = (rtb_Product3 <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator2' */
        rtb_RelationalOperator2_ci = (rtb_Product4_k <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator8' */
        rtb_RelationalOperator8 = (rtb_Product5_k <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator4' */
        rtb_RelationalOperator4_p = (rtb_Product6 <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator7' */
        rtb_RelationalOperator7 = (rtb_Product7 <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator5' */
        rtb_RelationalOperator5 = (rtb_Product8 <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator10' */
        rtb_RelationalOperator10 = (rtb_Switch8 <= rtb_Product9);

        /* RelationalOperator: '<S335>/Relational Operator9' */
        rtb_RelationalOperator9 = (rtb_Switch9 <= rtb_Product9);

        /* Sum: '<S335>/Add2' incorporates:
         *  Product: '<S335>/Product'
         *  Product: '<S335>/Product1'
         *  Product: '<S335>/Product2'
         *  Product: '<S335>/Product3'
         *  Product: '<S335>/Product4'
         *  Product: '<S335>/Product5'
         *  Product: '<S335>/Product6'
         *  Product: '<S335>/Product7'
         *  Product: '<S335>/Product8'
         *  Product: '<S335>/Product9'
         */
        rtb_Product1_n = (((((((((rtb_RelationalOperator6 ? rtb_Product1_n :
            0.0F) + (rtb_RelationalOperator1_ja ? rtb_Product2 : 0.0F)) +
                                (rtb_RelationalOperator3_eq ? rtb_Product3 :
            0.0F)) + (rtb_RelationalOperator2_ci ? rtb_Product4_k : 0.0F)) +
                              (rtb_RelationalOperator8 ? rtb_Product5_k : 0.0F))
                             + (rtb_RelationalOperator4_p ? rtb_Product6 : 0.0F))
                            + (rtb_RelationalOperator7 ? rtb_Product7 : 0.0F)) +
                           (rtb_RelationalOperator5 ? rtb_Product8 : 0.0F)) +
                          (rtb_RelationalOperator10 ? rtb_Switch8 : 0.0F)) +
            (rtb_RelationalOperator9 ? rtb_Switch9 : 0.0F);

        /* Outputs for Atomic SubSystem: '<S335>/Protected Division1' */
        /* Switch: '<S339>/Switch1' incorporates:
         *  Constant: '<S339>/Constant Value'
         *  Constant: '<S339>/Constant Value1'
         *  Constant: '<S339>/Constant Value2'
         *  Constant: '<S339>/Constant Value3'
         *  DataTypeConversion: '<S335>/Data Type Conversion'
         *  Logic: '<S339>/AND'
         *  RelationalOperator: '<S339>/Greater Than or Equal '
         *  RelationalOperator: '<S339>/Greater Than or Equal 1'
         *  RelationalOperator: '<S339>/Not Equal'
         *  RelationalOperator: '<S339>/Not Equal1'
         *  Sum: '<S335>/Add1'
         *  Switch: '<S339>/Switch2'
         *  Switch: '<S339>/Switch3'
         */
        if ((rtb_Product1_n != 0.0F) && (((sint32)((uint32)(((((((((((uint32)
                         (rtb_RelationalOperator6 ? 1U : 0U)) +
                        (rtb_RelationalOperator1_ja ? 1U : 0U)) +
                       (rtb_RelationalOperator3_eq ? 1U : 0U)) +
                      (rtb_RelationalOperator2_ci ? 1U : 0U)) +
                     (rtb_RelationalOperator8 ? 1U : 0U)) +
                    (rtb_RelationalOperator4_p ? 1U : 0U)) +
                   (rtb_RelationalOperator7 ? 1U : 0U)) +
                  (rtb_RelationalOperator5 ? 1U : 0U)) +
                 (rtb_RelationalOperator10 ? 1U : 0U)) +
                (rtb_RelationalOperator9 ? 1U : 0U)))) != 0))
        {
            /* Switch: '<S339>/Switch1' incorporates:
             *  Product: '<S339>/Division'
             */
            rtb_Product1_n /= ((((((((((float32)(rtb_RelationalOperator6 ? 1.0F :
                0.0F)) + ((float32)(rtb_RelationalOperator1_ja ? 1.0F : 0.0F)))
                + ((float32)(rtb_RelationalOperator3_eq ? 1.0F : 0.0F))) +
                                    ((float32)(rtb_RelationalOperator2_ci ? 1.0F
                : 0.0F))) + ((float32)(rtb_RelationalOperator8 ? 1.0F : 0.0F)))
                                  + ((float32)(rtb_RelationalOperator4_p ? 1.0F :
                                    0.0F))) + ((float32)(rtb_RelationalOperator7
                                   ? 1.0F : 0.0F))) + ((float32)
                                 (rtb_RelationalOperator5 ? 1.0F : 0.0F))) +
                               ((float32)(rtb_RelationalOperator10 ? 1.0F : 0.0F)))
                + ((float32)(rtb_RelationalOperator9 ? 1.0F : 0.0F));
        }
        else if (rtb_Product1_n > 0.0F)
        {
            /* Switch: '<S339>/Switch2' incorporates:
             *  Constant: '<S339>/MAXFLOAT'
             *  Switch: '<S339>/Switch1'
             */
            rtb_Product1_n = 3.402823466E+38F;
        }
        else if (rtb_Product1_n < 0.0F)
        {
            /* Switch: '<S339>/Switch3' incorporates:
             *  Constant: '<S339>/MINFLOAT'
             *  Switch: '<S339>/Switch1'
             *  Switch: '<S339>/Switch2'
             */
            rtb_Product1_n = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S339>/Switch1' incorporates:
             *  Constant: '<S339>/Constant Value4'
             *  Switch: '<S339>/Switch2'
             *  Switch: '<S339>/Switch3'
             */
            rtb_Product1_n = 0.0F;
        }

        /* End of Switch: '<S339>/Switch1' */
        /* End of Outputs for SubSystem: '<S335>/Protected Division1' */

        /* If: '<S297>/If' incorporates:
         *  Constant: '<S331>/Constant'
         *  Constant: '<S332>/Constant'
         *  RelationalOperator: '<S297>/Comparison1'
         *  RelationalOperator: '<S297>/Comparison6'
         */
        if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_LeftWED)
        {
            /* Outputs for IfAction SubSystem: '<S297>/LeftWED' incorporates:
             *  ActionPort: '<S333>/Action Port'
             */
            /* DataStoreWrite: '<S333>/Data Store Write2' */
            NeADAR_L_LftTAPos = rtb_Product1_n;

            /* End of Outputs for SubSystem: '<S297>/LeftWED' */
        }
        else
        {
            if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_RightWED)
            {
                /* Outputs for IfAction SubSystem: '<S297>/RightWED' incorporates:
                 *  ActionPort: '<S334>/Action Port'
                 */
                /* DataStoreWrite: '<S334>/Data Store Write2' */
                NeADAR_L_RtTAPos = rtb_Product1_n;

                /* End of Outputs for SubSystem: '<S297>/RightWED' */
            }
        }

        /* End of If: '<S297>/If' */
    }

    /* End of Outputs for SubSystem: '<S10>/TA_Processing' */
}

#endif

/*
 * Output and update for action system:
 *    '<S8>/Write_Opening_Status'
 *    '<S425>/Write_Opening_Status'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_Status(VAR
    (TeADAR_e_ActuationStatus, AUTOMATIC) rtu_ThisWED_e_LastReportedStatus,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_TimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State)
{
    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S151>/Constant'
     *  Constant: '<S152>/Constant'
     *  RelationalOperator: '<S128>/Comparison11'
     */
    if (((uint32)rtu_ThisWED_e_LastReportedStatus) == CeADAR_e_SS_Open)
    {
        *rty_ADAC_e_ReportedActuationStatus = rtu_ThisWED_e_LastReportedStatus;
    }
    else
    {
        *rty_ADAC_e_ReportedActuationStatus = CeADAR_e_WEDOpening;
    }

    /* End of Switch: '<S128>/Switch' */

    /* SignalConversion generated from: '<S128>/TimerIsActive' incorporates:
     *  Constant: '<S128>/TRUE Constant'
     */
    *rty_TimerIsActive = true;

    /* SignalConversion generated from: '<S128>/DtrmnActnSts_State' incorporates:
     *  Constant: '<S153>/Constant'
     */
    *rty_DtrmnActnSts_State = CeADAR_e_ActuateOpening;
}

#endif

/*
 * System reset for action system:
 *    '<S8>/Write_Opening_WithHold'
 *    '<S425>/Write_Opening_WithHold'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_WithHold_Reset(P2VAR
    (DW_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* InitializeConditions for UnitDelay: '<S129>/Unit Delay' */
    localDW->UnitDelay_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S129>/Unit Delay2' */
    localDW->UnitDelay2_DSTATE = false;

    /* SystemReset for Atomic SubSystem: '<S129>/Timer Reset Trigger Enabled' */
    /* InitializeConditions for UnitDelay: '<S159>/Unit Delay' */
    localDW->UnitDelay_DSTATE_n = 0.0F;

    /* SystemReset for Atomic SubSystem: '<S159>/EdgeRising_F2T' */
    /* InitializeConditions for UnitDelay: '<S160>/Unit Delay' */
    localDW->UnitDelay_DSTATE_o = false;

    /* End of SystemReset for SubSystem: '<S159>/EdgeRising_F2T' */
    /* End of SystemReset for SubSystem: '<S129>/Timer Reset Trigger Enabled' */
}

#endif

/*
 * Outputs for action system:
 *    '<S8>/Write_Opening_WithHold'
 *    '<S425>/Write_Opening_WithHold'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_WithHold(VAR(boolean,
    AUTOMATIC) rtu_ADAC_b_WEDTimerFreeze, VAR(float32, AUTOMATIC)
    rtu_ADAC_Pct_WEDPosition, VAR(boolean, AUTOMATIC) rtu_RTMRLearningActive,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_TimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State, P2VAR
    (B_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    boolean Logical3;

    /* SignalConversion generated from: '<S129>/ADAC_e_ReportedActuationStatus' incorporates:
     *  Constant: '<S154>/Constant'
     */
    *rty_ADAC_e_ReportedActuationStatus = CeADAR_e_SS_Open;

    /* Logic: '<S129>/Logical3' incorporates:
     *  UnitDelay: '<S129>/Unit Delay2'
     */
    Logical3 = !localDW->UnitDelay2_DSTATE;

    /* Outputs for Atomic SubSystem: '<S129>/Timer Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S159>/EdgeRising_F2T' */
    /* UnitDelay: '<S160>/Unit Delay' incorporates:
     *  UnitDelay: '<S129>/Unit Delay2'
     */
    localDW->UnitDelay2_DSTATE = localDW->UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    localDW->UnitDelay_DSTATE_o = Logical3;

    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S159>/Constant Value3'
     *  Logic: '<S159>/AND1'
     *  Logic: '<S160>/AND'
     *  Logic: '<S160>/OR1'
     *  RelationalOperator: '<S159>/Greater  Than2'
     *  Switch: '<S129>/Switch'
     *  UnitDelay: '<S129>/Unit Delay2'
     *  UnitDelay: '<S159>/Unit Delay'
     */
    if ((Logical3 && (!localDW->UnitDelay2_DSTATE)) &&
            (localDW->UnitDelay_DSTATE_n <= 0.0F))
    {
        /* Switch: '<S159>/Switch1' incorporates:
         *  Constant: '<S158>/Calib'
         */
        localB->Switch1 = KeADAR_t_WEDRingingOpeningTmr;
    }
    else
    {
        if (rtu_RTMRLearningActive)
        {
            /* Switch: '<S129>/Switch' incorporates:
             *  Abs: '<S129>/Abs'
             *  Constant: '<S157>/Calib'
             *  RelationalOperator: '<S129>/Relational Operator'
             *  Sum: '<S129>/Sum'
             *  UnitDelay: '<S129>/Unit Delay'
             */
            Logical3 = (fabsf(rtu_ADAC_Pct_WEDPosition -
                              localDW->UnitDelay_DSTATE) >=
                        KeADAR_Pct_WEDStopThresh);
        }
        else
        {
            /* Switch: '<S129>/Switch' incorporates:
             *  Constant: '<S129>/TRUE Constant1'
             */
            Logical3 = false;
        }

        /* Switch: '<S159>/Switch2' incorporates:
         *  Logic: '<S129>/Logical Operator'
         *  Logic: '<S129>/Logical1'
         */
        if ((!Logical3) && (!rtu_ADAC_b_WEDTimerFreeze))
        {
            /* Switch: '<S159>/Switch1' incorporates:
             *  Constant: '<S156>/Calib'
             *  Constant: '<S159>/Constant Value4'
             *  MinMax: '<S159>/Maximum'
             *  Sum: '<S159>/Subtraction'
             *  Switch: '<S159>/Switch2'
             */
            localB->Switch1 = fmaxf(localDW->UnitDelay_DSTATE_n -
                                    HeADAR_t_FastTEA_dT, 0.0F);
        }
        else
        {
            /* Switch: '<S159>/Switch1' incorporates:
             *  Switch: '<S159>/Switch2'
             */
            localB->Switch1 = localDW->UnitDelay_DSTATE_n;
        }

        /* End of Switch: '<S159>/Switch2' */
    }

    /* End of Switch: '<S159>/Switch1' */
    /* End of Outputs for SubSystem: '<S159>/EdgeRising_F2T' */

    /* RelationalOperator: '<S159>/Greater  Than1' incorporates:
     *  Constant: '<S159>/Constant Value2'
     */
    *rty_TimerIsActive = (localB->Switch1 > 0.0F);

    /* End of Outputs for SubSystem: '<S129>/Timer Reset Trigger Enabled' */

    /* SignalConversion generated from: '<S129>/DtrmnActnSts_State' incorporates:
     *  Constant: '<S155>/Constant'
     */
    *rty_DtrmnActnSts_State = CeADAR_e_OpeningWithHold;
}

#endif

/*
 * Update for action system:
 *    '<S8>/Write_Opening_WithHold'
 *    '<S425>/Write_Opening_WithHold'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Opening_WithHold_Update(VAR
    (float32, AUTOMATIC) rtu_ADAC_Pct_WEDPosition, P2VAR
    (B_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Write_Opening_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Update for UnitDelay: '<S129>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtu_ADAC_Pct_WEDPosition;

    /* Update for UnitDelay: '<S129>/Unit Delay2' incorporates:
     *  Constant: '<S129>/TRUE Constant'
     */
    localDW->UnitDelay2_DSTATE = true;

    /* Update for Atomic SubSystem: '<S129>/Timer Reset Trigger Enabled' */
    /* Update for UnitDelay: '<S159>/Unit Delay' */
    localDW->UnitDelay_DSTATE_n = localB->Switch1;

    /* End of Update for SubSystem: '<S129>/Timer Reset Trigger Enabled' */
}

#endif

/*
 * Output and update for action system:
 *    '<S8>/Write_Closing_Status'
 *    '<S425>/Write_Closing_Status'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_Status(VAR
    (TeADAR_e_ActuationStatus, AUTOMATIC) rtu_ThisWED_e_LastReportedStatus,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_TimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State)
{
    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S134>/Constant'
     *  Constant: '<S135>/Constant'
     *  RelationalOperator: '<S124>/Comparison11'
     */
    if (((uint32)rtu_ThisWED_e_LastReportedStatus) == CeADAR_e_SS_Closed)
    {
        *rty_ADAC_e_ReportedActuationStatus = rtu_ThisWED_e_LastReportedStatus;
    }
    else
    {
        *rty_ADAC_e_ReportedActuationStatus = CeADAR_e_WEDClosing;
    }

    /* End of Switch: '<S124>/Switch' */

    /* SignalConversion generated from: '<S124>/TimerIsActive' incorporates:
     *  Constant: '<S124>/TRUE Constant1'
     */
    *rty_TimerIsActive = true;

    /* SignalConversion generated from: '<S124>/DtrmnActnSts_State' incorporates:
     *  Constant: '<S136>/Constant'
     */
    *rty_DtrmnActnSts_State = CeADAR_e_ActuateClosing;
}

#endif

/*
 * System reset for action system:
 *    '<S8>/Write_Closing_WithHold'
 *    '<S425>/Write_Closing_WithHold'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_WithHold_Reset(P2VAR
    (DW_Write_Closing_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* InitializeConditions for UnitDelay: '<S125>/Unit Delay' */
    localDW->UnitDelay_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S125>/Unit Delay2' */
    localDW->UnitDelay2_DSTATE = false;

    /* SystemReset for Atomic SubSystem: '<S125>/Timer Reset Trigger Enabled1' */
    /* InitializeConditions for UnitDelay: '<S143>/Unit Delay' */
    localDW->UnitDelay_DSTATE_j = 0.0F;

    /* SystemReset for Atomic SubSystem: '<S143>/EdgeRising_F2T' */
    /* InitializeConditions for UnitDelay: '<S144>/Unit Delay' */
    localDW->UnitDelay_DSTATE_c = false;

    /* End of SystemReset for SubSystem: '<S143>/EdgeRising_F2T' */
    /* End of SystemReset for SubSystem: '<S125>/Timer Reset Trigger Enabled1' */
}

#endif

/*
 * Outputs for action system:
 *    '<S8>/Write_Closing_WithHold'
 *    '<S425>/Write_Closing_WithHold'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_WithHold(VAR(boolean,
    AUTOMATIC) rtu_ADAC_b_WEDTimerFreeze, VAR(float32, AUTOMATIC)
    rtu_ADAC_Pct_WEDPosition, VAR(boolean, AUTOMATIC) rtu_RTMRLearningActive,
    P2VAR(TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC, ADAR_VAR_INIT) rty_DtrmnActnSts_State, P2VAR(boolean, AUTOMATIC,
    ADAR_VAR_INIT) rty_TimerIsActive, P2VAR(B_Write_Closing_WithHold_ADAR_ac_T,
    AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR(DW_Write_Closing_WithHold_ADAR_ac_T,
    AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    boolean Logical3;

    /* SignalConversion generated from: '<S125>/ADAC_e_ReportedActuationStatus' incorporates:
     *  Constant: '<S138>/Constant'
     */
    *rty_ADAC_e_ReportedActuationStatus = CeADAR_e_SS_Closed;

    /* SignalConversion generated from: '<S125>/DtrmnActnSts_State' incorporates:
     *  Constant: '<S137>/Constant'
     */
    *rty_DtrmnActnSts_State = CeADAR_e_ClosingWithHold;

    /* Logic: '<S125>/Logical3' incorporates:
     *  UnitDelay: '<S125>/Unit Delay2'
     */
    Logical3 = !localDW->UnitDelay2_DSTATE;

    /* Outputs for Atomic SubSystem: '<S125>/Timer Reset Trigger Enabled1' */
    /* Outputs for Atomic SubSystem: '<S143>/EdgeRising_F2T' */
    /* UnitDelay: '<S144>/Unit Delay' incorporates:
     *  UnitDelay: '<S125>/Unit Delay2'
     */
    localDW->UnitDelay2_DSTATE = localDW->UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S144>/Unit Delay' */
    localDW->UnitDelay_DSTATE_c = Logical3;

    /* Switch: '<S143>/Switch1' incorporates:
     *  Constant: '<S143>/Constant Value3'
     *  Logic: '<S143>/AND1'
     *  Logic: '<S144>/AND'
     *  Logic: '<S144>/OR1'
     *  RelationalOperator: '<S143>/Greater  Than2'
     *  Switch: '<S125>/Switch'
     *  UnitDelay: '<S125>/Unit Delay2'
     *  UnitDelay: '<S143>/Unit Delay'
     */
    if ((Logical3 && (!localDW->UnitDelay2_DSTATE)) &&
            (localDW->UnitDelay_DSTATE_j <= 0.0F))
    {
        /* Switch: '<S143>/Switch1' incorporates:
         *  Constant: '<S141>/Calib'
         */
        localB->Switch1 = KeADAR_t_WEDRingingClosingTmr;
    }
    else
    {
        if (rtu_RTMRLearningActive)
        {
            /* Switch: '<S125>/Switch' incorporates:
             *  Abs: '<S125>/Abs'
             *  Constant: '<S140>/Calib'
             *  RelationalOperator: '<S125>/Relational Operator'
             *  Sum: '<S125>/Sum'
             *  UnitDelay: '<S125>/Unit Delay'
             */
            Logical3 = (fabsf(rtu_ADAC_Pct_WEDPosition -
                              localDW->UnitDelay_DSTATE) >=
                        KeADAR_Pct_WEDStopThresh);
        }
        else
        {
            /* Switch: '<S125>/Switch' incorporates:
             *  Constant: '<S125>/TRUE Constant1'
             */
            Logical3 = false;
        }

        /* Switch: '<S143>/Switch2' incorporates:
         *  Logic: '<S125>/Logical Operator'
         *  Logic: '<S125>/Logical2'
         */
        if ((!rtu_ADAC_b_WEDTimerFreeze) && (!Logical3))
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Constant: '<S139>/Calib'
             *  Constant: '<S143>/Constant Value4'
             *  MinMax: '<S143>/Maximum'
             *  Sum: '<S143>/Subtraction'
             *  Switch: '<S143>/Switch2'
             */
            localB->Switch1 = fmaxf(localDW->UnitDelay_DSTATE_j -
                                    HeADAR_t_FastTEA_dT, 0.0F);
        }
        else
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Switch: '<S143>/Switch2'
             */
            localB->Switch1 = localDW->UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S143>/Switch2' */
    }

    /* End of Switch: '<S143>/Switch1' */
    /* End of Outputs for SubSystem: '<S143>/EdgeRising_F2T' */

    /* Gain: '<S142>/Gain' incorporates:
     *  Constant: '<S143>/Constant Value2'
     *  RelationalOperator: '<S143>/Greater  Than1'
     */
    *rty_TimerIsActive = (localB->Switch1 > 0.0F);

    /* End of Outputs for SubSystem: '<S125>/Timer Reset Trigger Enabled1' */
}

#endif

/*
 * Update for action system:
 *    '<S8>/Write_Closing_WithHold'
 *    '<S425>/Write_Closing_WithHold'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closing_WithHold_Update(VAR
    (float32, AUTOMATIC) rtu_ADAC_Pct_WEDPosition, P2VAR
    (B_Write_Closing_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Write_Closing_WithHold_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Update for UnitDelay: '<S125>/Unit Delay' */
    localDW->UnitDelay_DSTATE = rtu_ADAC_Pct_WEDPosition;

    /* Update for UnitDelay: '<S125>/Unit Delay2' incorporates:
     *  Constant: '<S125>/TRUE Constant'
     */
    localDW->UnitDelay2_DSTATE = true;

    /* Update for Atomic SubSystem: '<S125>/Timer Reset Trigger Enabled1' */
    /* Update for UnitDelay: '<S143>/Unit Delay' */
    localDW->UnitDelay_DSTATE_j = localB->Switch1;

    /* End of Update for SubSystem: '<S125>/Timer Reset Trigger Enabled1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S8>/Write_Open_Status'
 *    '<S425>/Write_Open_Status'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Open_Status(VAR(boolean,
    AUTOMATIC) rtu_RTMRLearningActive, VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC) rtu_CmndWEDActnState_z, VAR(sint8, AUTOMATIC) rtu_P2LearningCount,
    VAR(sint8, AUTOMATIC) rtu_P1LearningCount, P2VAR(TeADAR_e_ActuationStatus,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean,
    AUTOMATIC, ADAR_VAR_INIT) rty_TimerIsActive, P2VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC, ADAR_VAR_INIT)
    rty_DtrmnActnSts_State, P2VAR(B_Write_Open_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Write_Open_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW)
{
    /* SignalConversion generated from: '<S127>/ADAC_e_ReportedActuationStatus' incorporates:
     *  Constant: '<S148>/Constant'
     */
    *rty_ADAC_e_ReportedActuationStatus = CeADAR_e_SS_Open;

    /* SignalConversion generated from: '<S127>/TimerIsActive' incorporates:
     *  Constant: '<S127>/FALSE Constant'
     */
    *rty_TimerIsActive = false;

    /* SignalConversion generated from: '<S127>/DtrmnActnSts_State' incorporates:
     *  Constant: '<S147>/Constant'
     */
    *rty_DtrmnActnSts_State = CeADAR_e_SSOpened;

    /* Outputs for Atomic SubSystem: '<S127>/Signal Latch On With Reset' */
    /* Logic: '<S150>/OR1' incorporates:
     *  Constant: '<S149>/Constant'
     *  Logic: '<S127>/Logical3'
     *  Logic: '<S150>/OR'
     *  RelationalOperator: '<S127>/Comparison4'
     *  UnitDelay: '<S127>/Unit Delay2'
     *  UnitDelay: '<S150>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE = ((((uint32)rtu_CmndWEDActnState_z) ==
        CeADAR_e_OpeningWithHold) || ((localDW->UnitDelay2_DSTATE) &&
        (localDW->UnitDelay_DSTATE)));

    /* End of Outputs for SubSystem: '<S127>/Signal Latch On With Reset' */

    /* RelationalOperator: '<S127>/Relational Operator1' incorporates:
     *  Constant: '<S127>/Constant'
     *  UnitDelay: '<S127>/Unit Delay2'
     */
    localDW->UnitDelay2_DSTATE = (rtu_P2LearningCount == 0);

    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S127>/Constant'
     *  Logic: '<S127>/Logical1'
     *  Logic: '<S127>/Logical2'
     *  RelationalOperator: '<S127>/Relational Operator2'
     *  UnitDelay: '<S127>/Unit Delay2'
     *  UnitDelay: '<S150>/Unit Delay'
     */
    localB->Switch = (((localDW->UnitDelay_DSTATE) && rtu_RTMRLearningActive) &&
                      ((localDW->UnitDelay2_DSTATE) && (0 == rtu_P1LearningCount)));

    /* Update for UnitDelay: '<S127>/Unit Delay2' incorporates:
     *  Constant: '<S127>/TRUE Constant'
     */
    localDW->UnitDelay2_DSTATE = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S8>/Write_Closed_Status'
 *    '<S425>/Write_Closed_Status'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Closed_Status(VAR(boolean,
    AUTOMATIC) rtu_RTMRLearningActive, VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC) rtu_CmndWEDActnState_z, VAR(sint8, AUTOMATIC) rtu_P5LearningCount,
    VAR(sint8, AUTOMATIC) rtu_P6LearningCount, P2VAR(TeADAR_e_ActuationStatus,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean,
    AUTOMATIC, ADAR_VAR_INIT) rty_TimerIsActive, P2VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC, ADAR_VAR_INIT)
    rty_DtrmnActnSts_State, P2VAR(B_Write_Closed_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Write_Closed_Status_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW)
{
    /* SignalConversion generated from: '<S123>/ADAC_e_ReportedActuationStatus' incorporates:
     *  Constant: '<S131>/Constant'
     */
    *rty_ADAC_e_ReportedActuationStatus = CeADAR_e_SS_Closed;

    /* SignalConversion generated from: '<S123>/TimerIsActive' incorporates:
     *  Constant: '<S123>/FALSE Constant'
     */
    *rty_TimerIsActive = false;

    /* SignalConversion generated from: '<S123>/DtrmnActnSts_State' incorporates:
     *  Constant: '<S130>/Constant'
     */
    *rty_DtrmnActnSts_State = CeADAR_e_SSClosed;

    /* Outputs for Atomic SubSystem: '<S123>/Signal Latch On With Reset' */
    /* Logic: '<S133>/OR1' incorporates:
     *  Constant: '<S132>/Constant'
     *  Logic: '<S133>/OR'
     *  RelationalOperator: '<S123>/Comparison4'
     *  UnitDelay: '<S123>/Unit Delay2'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE = ((((uint32)rtu_CmndWEDActnState_z) ==
        CeADAR_e_ClosingWithHold) || ((localDW->UnitDelay2_DSTATE) &&
        (localDW->UnitDelay_DSTATE)));

    /* End of Outputs for SubSystem: '<S123>/Signal Latch On With Reset' */

    /* Switch: '<S123>/Switch1' incorporates:
     *  Constant: '<S123>/Constant'
     *  Logic: '<S123>/Logical1'
     *  Logic: '<S123>/Logical2'
     *  RelationalOperator: '<S123>/Relational Operator1'
     *  RelationalOperator: '<S123>/Relational Operator2'
     */
    localB->Switch1 = (((localDW->UnitDelay_DSTATE) && rtu_RTMRLearningActive) &&
                       ((rtu_P5LearningCount == 0) || (0 == rtu_P6LearningCount)));

    /* Update for UnitDelay: '<S123>/Unit Delay2' incorporates:
     *  Constant: '<S123>/TRUE Constant'
     */
    localDW->UnitDelay2_DSTATE = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S8>/Write_Indeterminate_Status'
 *    '<S425>/Write_Indeterminate_Status'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Write_Indeterminate_Status(P2VAR
    (TeADAR_e_ActuationStatus, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_e_ReportedActuationStatus, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_OpenTimerIsActive, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_ClosedTimerIsActive, P2VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC,
    ADAR_VAR_INIT) rty_DtrmnActnSts_State)
{
    /* SignalConversion generated from: '<S126>/ADAC_e_ReportedActuationStatus' incorporates:
     *  Constant: '<S145>/Constant'
     */
    *rty_ADAC_e_ReportedActuationStatus = CeADAR_e_SS_Indeterminate;

    /* SignalConversion generated from: '<S126>/OpenTimerIsActive' incorporates:
     *  Constant: '<S126>/FALSE Constant'
     */
    *rty_OpenTimerIsActive = false;

    /* SignalConversion generated from: '<S126>/ClosedTimerIsActive' incorporates:
     *  Constant: '<S126>/FALSE Constant1'
     */
    *rty_ClosedTimerIsActive = false;

    /* SignalConversion generated from: '<S126>/DtrmnActnSts_State' incorporates:
     *  Constant: '<S146>/Constant'
     */
    *rty_DtrmnActnSts_State = CeADAR_e_Indeterminate;
}

#endif

/*
 * System initialize for action system:
 *    '<S9>/Engagement'
 *    '<S426>/Engagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Init(P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Start for If: '<S162>/If' */
    localDW->If_ActiveSubsystem = -1;
}

#endif

/*
 * System reset for action system:
 *    '<S9>/Engagement'
 *    '<S426>/Engagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Reset(P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* SystemReset for Atomic SubSystem: '<S162>/Hysteresis_1' */
    /* InitializeConditions for UnitDelay: '<S219>/Unit Delay' */
    localDW->UnitDelay_DSTATE_a = false;

    /* End of SystemReset for SubSystem: '<S162>/Hysteresis_1' */

    /* SystemReset for Atomic SubSystem: '<S162>/Hysteresis_2' */
    /* InitializeConditions for UnitDelay: '<S220>/Unit Delay' */
    localDW->UnitDelay_DSTATE_m = false;

    /* End of SystemReset for SubSystem: '<S162>/Hysteresis_2' */

    /* SystemReset for Atomic SubSystem: '<S162>/Hysteresis_3' */
    /* InitializeConditions for UnitDelay: '<S221>/Unit Delay' */
    localDW->UnitDelay_DSTATE_o = false;

    /* End of SystemReset for SubSystem: '<S162>/Hysteresis_3' */
}

#endif

/*
 * Disable for action system:
 *    '<S9>/Engagement'
 *    '<S426>/Engagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Disable(P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Disable for If: '<S162>/If' */
    localDW->If_ActiveSubsystem = -1;
}

#endif

/*
 * Outputs for action system:
 *    '<S9>/Engagement'
 *    '<S426>/Engagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement(VAR(float32, AUTOMATIC)
    rtu_ADAC_L_ActPos, VAR(float32, AUTOMATIC) rtu_dT, VAR(float32, AUTOMATIC)
    rtu_ADAC_I_ITermPos, VAR(boolean, AUTOMATIC) rtu_ADAC_b_CoolDownActive, VAR
    (float32, AUTOMATIC) rtu_ADAC_L_TAPos, P2VAR(TeADAR_e_ActuationStages,
    AUTOMATIC, ADAR_VAR_INIT) rty_ActacnStage, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_PositionProfile, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PTerm, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ITerm, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_DTerm, P2VAR(B_Engagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Engagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW)
{
    float32 rtb_MinMax;
    float32 rtb_MinMax1;
    float32 rtb_Sum11;
    sint8 rtPrevAction;
    boolean rtb_AND_d0;

    /* MinMax: '<S162>/MinMax' incorporates:
     *  Constant: '<S222>/Calib'
     *  Constant: '<S228>/Calib'
     *  Sum: '<S162>/Sum6'
     */
    rtb_MinMax = fmaxf(KeADAR_L_DisengageEndStopEndPos, rtu_ADAC_L_TAPos -
                       KeADAR_L_EngageTthAbtmntStrtOffst);

    /* Outputs for Atomic SubSystem: '<S162>/Hysteresis_1' */
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S229>/Calib'
     *  RelationalOperator: '<S219>/Greater  Than'
     *  Sum: '<S162>/Sum1'
     */
    if (rtu_ADAC_L_ActPos >= (KeADAR_L_PosCntrHystrsisDelta + rtb_MinMax))
    {
        /* Switch: '<S219>/Switch1' incorporates:
         *  Constant: '<S219>/Constant Value'
         */
        localDW->UnitDelay_DSTATE_a = true;
    }
    else
    {
        /* Switch: '<S219>/Switch1' incorporates:
         *  RelationalOperator: '<S219>/Greater  Than1'
         *  Sum: '<S162>/Sum'
         *  UnitDelay: '<S219>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_a = ((rtu_ADAC_L_ActPos > (rtb_MinMax -
            KeADAR_L_PosCntrHystrsisDelta)) && (localDW->UnitDelay_DSTATE_a));
    }

    /* End of Switch: '<S219>/Switch1' */
    /* End of Outputs for SubSystem: '<S162>/Hysteresis_1' */

    /* MinMax: '<S162>/MinMax1' incorporates:
     *  Constant: '<S226>/Calib'
     *  Constant: '<S227>/Calib'
     *  Constant: '<S230>/Calib'
     *  Product: '<S162>/Product'
     *  Sum: '<S162>/Sum7'
     *  Sum: '<S162>/Sum8'
     */
    rtb_MinMax1 = fmaxf((KeADAR_r_EngageTrqTrpStrtRatio * rtu_ADAC_L_TAPos) +
                        KeADAR_L_EngageTrqTrpStrtOffstAftrRatio,
                        rtu_ADAC_L_TAPos + KeADAR_L_EngageTrqTrpStrtOffst);

    /* Outputs for Atomic SubSystem: '<S162>/Hysteresis_2' */
    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S229>/Calib'
     *  RelationalOperator: '<S220>/Greater  Than'
     *  Sum: '<S162>/Sum3'
     */
    if (rtu_ADAC_L_ActPos >= (KeADAR_L_PosCntrHystrsisDelta + rtb_MinMax1))
    {
        /* Switch: '<S220>/Switch1' incorporates:
         *  Constant: '<S220>/Constant Value'
         */
        localDW->UnitDelay_DSTATE_m = true;
    }
    else
    {
        /* Switch: '<S220>/Switch1' incorporates:
         *  RelationalOperator: '<S220>/Greater  Than1'
         *  Sum: '<S162>/Sum2'
         *  UnitDelay: '<S220>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_m = ((rtu_ADAC_L_ActPos > (rtb_MinMax1 -
            KeADAR_L_PosCntrHystrsisDelta)) && (localDW->UnitDelay_DSTATE_m));
    }

    /* End of Switch: '<S220>/Switch1' */
    /* End of Outputs for SubSystem: '<S162>/Hysteresis_2' */

    /* Outputs for Atomic SubSystem: '<S162>/Hysteresis_3' */
    /* Switch: '<S221>/Switch1' incorporates:
     *  Constant: '<S225>/Calib'
     *  Constant: '<S229>/Calib'
     *  RelationalOperator: '<S221>/Greater  Than'
     *  Sum: '<S162>/Sum5'
     */
    if (rtu_ADAC_L_ActPos >= (KeADAR_L_PosCntrHystrsisDelta +
                              KeADAR_L_EngageTrqTrapEndPos))
    {
        /* Switch: '<S221>/Switch1' incorporates:
         *  Constant: '<S221>/Constant Value'
         */
        localDW->UnitDelay_DSTATE_o = true;
    }
    else
    {
        /* Switch: '<S221>/Switch1' incorporates:
         *  RelationalOperator: '<S221>/Greater  Than1'
         *  Sum: '<S162>/Sum4'
         *  UnitDelay: '<S221>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_o = ((rtu_ADAC_L_ActPos >
            (KeADAR_L_EngageTrqTrapEndPos - KeADAR_L_PosCntrHystrsisDelta)) &&
            (localDW->UnitDelay_DSTATE_o));
    }

    /* End of Switch: '<S221>/Switch1' */
    /* End of Outputs for SubSystem: '<S162>/Hysteresis_3' */

    /* Sum: '<S162>/Sum11' incorporates:
     *  Constant: '<S224>/Calib'
     *  Constant: '<S225>/Calib'
     */
    rtb_Sum11 = KeADAR_L_EngageProfileMaxOffst4PID +
        KeADAR_L_EngageTrqTrapEndPos;

    /* Sum: '<S162>/Sum9' incorporates:
     *  Constant: '<S224>/Calib'
     */
    rtb_MinMax += KeADAR_L_EngageProfileMaxOffst4PID;

    /* If: '<S162>/If' incorporates:
     *  Constant: '<S223>/Calib'
     *  Inport: '<S218>/StageMaxBound'
     *  Logic: '<S162>/Logical Operator'
     *  Logic: '<S162>/Logical Operator1'
     *  Logic: '<S162>/Logical Operator2'
     */
    rtPrevAction = localDW->If_ActiveSubsystem;
    if (!localDW->UnitDelay_DSTATE_a)
    {
        localDW->If_ActiveSubsystem = 0;
    }
    else if (!localDW->UnitDelay_DSTATE_m)
    {
        localDW->If_ActiveSubsystem = 1;
    }
    else if (!localDW->UnitDelay_DSTATE_o)
    {
        localDW->If_ActiveSubsystem = 2;
    }
    else
    {
        localDW->If_ActiveSubsystem = 3;
    }

    switch (localDW->If_ActiveSubsystem)
    {
      case 0:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S162>/PreTthAbtmntEngagingProfile' incorporates:
             *  ActionPort: '<S231>/Action Port'
             */
            /* InitializeConditions for If: '<S162>/If' incorporates:
             *  UnitDelay: '<S246>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_jb = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S162>/PreTthAbtmntEngagingProfile' */

            /* SystemReset for IfAction SubSystem: '<S162>/PreTthAbtmntEngagingProfile' incorporates:
             *  ActionPort: '<S231>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S231>/EdgeRising' */
            /* SystemReset for If: '<S162>/If' incorporates:
             *  UnitDelay: '<S235>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_p = false;

            /* End of SystemReset for SubSystem: '<S231>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S162>/PreTthAbtmntEngagingProfile' */
        }

        /* Outputs for IfAction SubSystem: '<S162>/PreTthAbtmntEngagingProfile' incorporates:
         *  ActionPort: '<S231>/Action Port'
         */
        /* SignalConversion generated from: '<S231>/ActanStage' incorporates:
         *  Constant: '<S236>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_ClsngPreTthAbtmnt;

        /* Outputs for Atomic SubSystem: '<S231>/EdgeRising' */
        /* Logic: '<S235>/AND' incorporates:
         *  Logic: '<S235>/OR1'
         *  UnitDelay: '<S235>/Unit Delay'
         */
        rtb_AND_d0 = !localDW->UnitDelay_DSTATE_p;

        /* Update for UnitDelay: '<S235>/Unit Delay' incorporates:
         *  Constant: '<S231>/Constant1'
         */
        localDW->UnitDelay_DSTATE_p = true;

        /* End of Outputs for SubSystem: '<S231>/EdgeRising' */

        /* Switch: '<S231>/Switch' incorporates:
         *  Switch: '<S246>/Switch1'
         */
        if (rtu_ADAC_b_CoolDownActive)
        {
            /* Switch: '<S246>/Switch1' */
            if (rtb_AND_d0)
            {
                /* Switch: '<S231>/Switch' */
                localB->Switch3_l = rtu_ADAC_L_ActPos;
            }
            else
            {
                /* Switch: '<S231>/Switch' incorporates:
                 *  UnitDelay: '<S246>/Unit Delay'
                 */
                localB->Switch3_l = localDW->UnitDelay_DSTATE_jb;
            }
        }
        else
        {
            if (rtb_AND_d0)
            {
                /* Switch: '<S246>/Switch1' */
                rtb_MinMax1 = rtu_ADAC_L_ActPos;
            }
            else
            {
                /* Switch: '<S246>/Switch1' incorporates:
                 *  UnitDelay: '<S246>/Unit Delay'
                 */
                rtb_MinMax1 = localDW->UnitDelay_DSTATE_jb;
            }

            /* Sum: '<S231>/Sum' incorporates:
             *  Constant: '<S240>/Calib'
             *  Product: '<S231>/Product'
             */
            localB->Switch3_l = (KeADAR_v_ClsngPreTthAbtmnt * rtu_dT) +
                rtb_MinMax1;

            /* Outputs for Atomic SubSystem: '<S231>/Limiter1' */
            /* Switch: '<S241>/Switch1' incorporates:
             *  RelationalOperator: '<S241>/Relational Operator'
             */
            if (rtb_MinMax < localB->Switch3_l)
            {
                /* Switch: '<S241>/Switch1' */
                localB->Switch3_l = rtb_MinMax;
            }

            /* End of Switch: '<S241>/Switch1' */

            /* Switch: '<S241>/Switch' incorporates:
             *  Constant: '<S222>/Calib'
             *  RelationalOperator: '<S241>/Relational Operator1'
             */
            if (localB->Switch3_l <= KeADAR_L_DisengageEndStopEndPos)
            {
                /* Switch: '<S231>/Switch' */
                localB->Switch3_l = KeADAR_L_DisengageEndStopEndPos;
            }

            /* End of Switch: '<S241>/Switch' */
            /* End of Outputs for SubSystem: '<S231>/Limiter1' */
        }

        /* End of Switch: '<S231>/Switch' */

        /* Gain: '<S245>/Gain' */
        *rty_PositionProfile = localB->Switch3_l;

        /* Switch: '<S246>/Switch3' */
        if (rtb_AND_d0)
        {
            /* Switch: '<S246>/Switch3' */
            localB->Switch3_l = rtu_ADAC_L_ActPos;
        }

        /* End of Switch: '<S246>/Switch3' */

        /* Gain: '<S242>/Gain' incorporates:
         *  Constant: '<S239>/Calib'
         */
        *rty_PTerm = KeADAR_k_PTerm_PreTthAbtmntEngage;

        /* Gain: '<S243>/Gain' incorporates:
         *  Constant: '<S238>/Calib'
         */
        *rty_ITerm = KeADAR_k_ITerm_PreTthAbtmntEngage;

        /* Gain: '<S244>/Gain' incorporates:
         *  Constant: '<S237>/Calib'
         */
        *rty_DTerm = KeADAR_k_DTerm_PreTthAbtmntEngage;

        /* End of Outputs for SubSystem: '<S162>/PreTthAbtmntEngagingProfile' */
        break;

      case 1:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S162>/TthAbtmntEngagingProfile' incorporates:
             *  ActionPort: '<S233>/Action Port'
             */
            /* InitializeConditions for If: '<S162>/If' incorporates:
             *  UnitDelay: '<S273>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_j = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S162>/TthAbtmntEngagingProfile' */

            /* SystemReset for IfAction SubSystem: '<S162>/TthAbtmntEngagingProfile' incorporates:
             *  ActionPort: '<S233>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S233>/EdgeRising' */
            /* SystemReset for If: '<S162>/If' incorporates:
             *  UnitDelay: '<S262>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_i = false;

            /* End of SystemReset for SubSystem: '<S233>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S162>/TthAbtmntEngagingProfile' */
        }

        /* Outputs for IfAction SubSystem: '<S162>/TthAbtmntEngagingProfile' incorporates:
         *  ActionPort: '<S233>/Action Port'
         */
        /* SignalConversion generated from: '<S233>/ActacnStage' incorporates:
         *  Constant: '<S263>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_ClsngTthAbtmnt;

        /* Outputs for Atomic SubSystem: '<S233>/EdgeRising' */
        /* Logic: '<S262>/AND' incorporates:
         *  Logic: '<S262>/OR1'
         *  UnitDelay: '<S262>/Unit Delay'
         */
        rtb_AND_d0 = !localDW->UnitDelay_DSTATE_i;

        /* Update for UnitDelay: '<S262>/Unit Delay' incorporates:
         *  Constant: '<S233>/Constant1'
         */
        localDW->UnitDelay_DSTATE_i = true;

        /* End of Outputs for SubSystem: '<S233>/EdgeRising' */

        /* Switch: '<S273>/Switch1' */
        if (rtb_AND_d0)
        {
            /* Switch: '<S233>/Switch' */
            rtb_Sum11 = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S233>/Switch' incorporates:
             *  UnitDelay: '<S273>/Unit Delay'
             */
            rtb_Sum11 = localDW->UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S273>/Switch1' */

        /* Sum: '<S264>/Subtraction1' incorporates:
         *  Constant: '<S224>/Calib'
         *  Constant: '<S268>/Calib'
         *  Product: '<S264>/Multiplication'
         *  Sum: '<S162>/Sum10'
         *  Sum: '<S264>/Subtraction'
         */
        localB->Switch3_k = (((KeADAR_L_EngageProfileMaxOffst4PID + rtb_MinMax1)
                              - rtb_Sum11) * KeADAR_k_TthAbtmntFilterCoefficient)
            + rtb_Sum11;

        /* Switch: '<S233>/Switch' */
        if (!rtu_ADAC_b_CoolDownActive)
        {
            /* Switch: '<S233>/Switch' */
            rtb_Sum11 = localB->Switch3_k;
        }

        /* End of Switch: '<S233>/Switch' */

        /* Gain: '<S269>/Gain' */
        *rty_PositionProfile = rtb_Sum11;

        /* Switch: '<S273>/Switch3' */
        if (rtb_AND_d0)
        {
            /* Switch: '<S273>/Switch3' */
            localB->Switch3_k = rtu_ADAC_L_ActPos;
        }

        /* End of Switch: '<S273>/Switch3' */

        /* Gain: '<S270>/Gain' incorporates:
         *  Constant: '<S267>/Calib'
         */
        *rty_PTerm = KeADAR_k_PTerm_TthAbtmntEngage;

        /* Gain: '<S271>/Gain' incorporates:
         *  Constant: '<S266>/Calib'
         */
        *rty_ITerm = KeADAR_k_ITerm_TthAbtmntEngage;

        /* Gain: '<S272>/Gain' incorporates:
         *  Constant: '<S265>/Calib'
         */
        *rty_DTerm = KeADAR_k_DTerm_TthAbtmntEngage;

        /* End of Outputs for SubSystem: '<S162>/TthAbtmntEngagingProfile' */
        break;

      case 2:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S162>/TorqTrapEngagingProfile' incorporates:
             *  ActionPort: '<S232>/Action Port'
             */
            /* InitializeConditions for If: '<S162>/If' incorporates:
             *  UnitDelay: '<S261>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S162>/TorqTrapEngagingProfile' */

            /* SystemReset for IfAction SubSystem: '<S162>/TorqTrapEngagingProfile' incorporates:
             *  ActionPort: '<S232>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S232>/EdgeRising' */
            /* SystemReset for If: '<S162>/If' incorporates:
             *  Chart: '<S232>/Chart'
             *  UnitDelay: '<S248>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_e = false;

            /* End of SystemReset for SubSystem: '<S232>/EdgeRising' */
            localDW->is_active_c1_ADAC_PosProf_Lib = 0U;
            localDW->is_c1_ADAC_PosProf_Lib = ADAR_ac_IN_NO_ACTIVE_CHILD;
            localB->LeADAR_L_Profile = 0.0F;

            /* End of SystemReset for SubSystem: '<S162>/TorqTrapEngagingProfile' */
        }

        /* Outputs for IfAction SubSystem: '<S162>/TorqTrapEngagingProfile' incorporates:
         *  ActionPort: '<S232>/Action Port'
         */
        /* SignalConversion generated from: '<S232>/ActacnStage' incorporates:
         *  Constant: '<S249>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_ClsngTorqTrap;

        /* Outputs for Atomic SubSystem: '<S232>/EdgeRising' */
        /* Logic: '<S248>/AND' incorporates:
         *  Logic: '<S248>/OR1'
         *  UnitDelay: '<S248>/Unit Delay'
         */
        rtb_AND_d0 = !localDW->UnitDelay_DSTATE_e;

        /* Update for UnitDelay: '<S248>/Unit Delay' incorporates:
         *  Constant: '<S232>/Constant'
         */
        localDW->UnitDelay_DSTATE_e = true;

        /* End of Outputs for SubSystem: '<S232>/EdgeRising' */

        /* Switch: '<S261>/Switch1' */
        if (rtb_AND_d0)
        {
            /* Switch: '<S261>/Switch1' */
            rtb_MinMax = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S261>/Switch1' incorporates:
             *  UnitDelay: '<S261>/Unit Delay'
             */
            rtb_MinMax = localDW->UnitDelay_DSTATE;
        }

        /* End of Switch: '<S261>/Switch1' */

        /* Chart: '<S232>/Chart' incorporates:
         *  Constant: '<S250>/Calib'
         *  Constant: '<S251>/Calib'
         *  Constant: '<S255>/Calib'
         */
        /* Gateway: ADAC_PosProf/Engagement/TorqTrapEngagingProfile/Chart */
        /* During: ADAC_PosProf/Engagement/TorqTrapEngagingProfile/Chart */
        if (((uint32)localDW->is_active_c1_ADAC_PosProf_Lib) == 0U)
        {
            /* Entry: ADAC_PosProf/Engagement/TorqTrapEngagingProfile/Chart */
            localDW->is_active_c1_ADAC_PosProf_Lib = 1U;

            /* Entry Internal: ADAC_PosProf/Engagement/TorqTrapEngagingProfile/Chart */
            /* Transition: '<S247>:4' */
            localDW->is_c1_ADAC_PosProf_Lib = ADAR_ac_IN_Pos_Profile;

            /* Entry 'Pos_Profile': '<S247>:3' */
            localB->LeADAR_L_Profile = rtb_MinMax;
        }
        else if (((uint32)localDW->is_c1_ADAC_PosProf_Lib) ==
                 ADAR_ac_IN_AfterTAUnwind)
        {
            /* During 'AfterTAUnwind': '<S247>:5' */
            if (rtu_ADAC_I_ITermPos < KeADAR_I_PositionPIDUnwind)
            {
                /* Transition: '<S247>:12' */
                localDW->is_c1_ADAC_PosProf_Lib = ADAR_ac_IN_Pos_Profile;

                /* Entry 'Pos_Profile': '<S247>:3' */
                localB->LeADAR_L_Profile = rtb_MinMax;
            }
        }
        else
        {
            /* During 'Pos_Profile': '<S247>:3' */
            /* Transition: '<S247>:7' */
            if ((localB->LeADAR_L_Profile - rtu_ADAC_L_ActPos) >
                    KeADAR_L_PosPIDTT)
            {
                /* Transition: '<S247>:9' */
                /* Transition: '<S247>:10' */
                localDW->is_c1_ADAC_PosProf_Lib = ADAR_ac_IN_AfterTAUnwind;

                /* Entry 'AfterTAUnwind': '<S247>:5' */
                localB->LeADAR_L_Profile = rtb_MinMax;
            }
            else
            {
                localB->LeADAR_L_Profile = (rtu_dT * KeADAR_v_ClsngTorqTrap) +
                    rtb_MinMax;
            }
        }

        /* End of Chart: '<S232>/Chart' */

        /* Outputs for Atomic SubSystem: '<S232>/Limiter1' */
        /* Switch: '<S256>/Switch1' incorporates:
         *  RelationalOperator: '<S256>/Relational Operator'
         */
        if (rtb_Sum11 >= localB->LeADAR_L_Profile)
        {
            /* Switch: '<S232>/Switch' */
            rtb_Sum11 = localB->LeADAR_L_Profile;
        }

        /* End of Switch: '<S256>/Switch1' */

        /* Switch: '<S256>/Switch' incorporates:
         *  RelationalOperator: '<S256>/Relational Operator1'
         */
        if (rtb_Sum11 > rtb_MinMax1)
        {
            /* Switch: '<S256>/Switch' */
            rtb_MinMax1 = rtb_Sum11;
        }

        /* End of Switch: '<S256>/Switch' */
        /* End of Outputs for SubSystem: '<S232>/Limiter1' */

        /* Switch: '<S232>/Switch' */
        if (rtu_ADAC_b_CoolDownActive)
        {
            /* Gain: '<S257>/Gain' */
            *rty_PositionProfile = rtb_MinMax;
        }
        else
        {
            /* Gain: '<S257>/Gain' */
            *rty_PositionProfile = rtb_MinMax1;
        }

        /* End of Switch: '<S232>/Switch' */

        /* Switch: '<S261>/Switch3' */
        if (rtb_AND_d0)
        {
            /* Switch: '<S261>/Switch3' */
            localB->Switch3 = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S261>/Switch3' */
            localB->Switch3 = rtb_MinMax1;
        }

        /* End of Switch: '<S261>/Switch3' */

        /* Gain: '<S258>/Gain' incorporates:
         *  Constant: '<S254>/Calib'
         */
        *rty_PTerm = KeADAR_k_PTerm_TorqTrapEngage;

        /* Gain: '<S259>/Gain' incorporates:
         *  Constant: '<S253>/Calib'
         */
        *rty_ITerm = KeADAR_k_ITerm_TorqTrapEngage;

        /* Gain: '<S260>/Gain' incorporates:
         *  Constant: '<S252>/Calib'
         */
        *rty_DTerm = KeADAR_k_DTerm_TorqTrapEngage;

        /* End of Outputs for SubSystem: '<S162>/TorqTrapEngagingProfile' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S162>/HldAtEndStpEngagingProfile' incorporates:
         *  ActionPort: '<S218>/Action Port'
         */
        /* SignalConversion generated from: '<S218>/ActacnStage' incorporates:
         *  Constant: '<S234>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_ClsngHldAtEndStp;
        *rty_PositionProfile = KeADAR_L_EngageEndStopEndPos;

        /* SignalConversion generated from: '<S218>/PTerm_Engage' incorporates:
         *  Constant: '<S218>/Constant2'
         *  Constant: '<S223>/Calib'
         *  Inport: '<S218>/StageMaxBound'
         */
        *rty_PTerm = 0.0F;

        /* SignalConversion generated from: '<S218>/ITerm_Engage' incorporates:
         *  Constant: '<S218>/Constant1'
         */
        *rty_ITerm = 0.0F;

        /* SignalConversion generated from: '<S218>/DTerm_Engage' incorporates:
         *  Constant: '<S218>/Constant'
         */
        *rty_DTerm = 0.0F;

        /* End of Outputs for SubSystem: '<S162>/HldAtEndStpEngagingProfile' */
        break;
    }

    /* End of If: '<S162>/If' */
}

#endif

/*
 * Update for action system:
 *    '<S9>/Engagement'
 *    '<S426>/Engagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Engagement_Update(P2VAR
    (B_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Engagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Update for If: '<S162>/If' */
    switch (localDW->If_ActiveSubsystem)
    {
      case 0:
        /* Update for IfAction SubSystem: '<S162>/PreTthAbtmntEngagingProfile' incorporates:
         *  ActionPort: '<S231>/Action Port'
         */
        /* Update for UnitDelay: '<S246>/Unit Delay' */
        localDW->UnitDelay_DSTATE_jb = localB->Switch3_l;

        /* End of Update for SubSystem: '<S162>/PreTthAbtmntEngagingProfile' */
        break;

      case 1:
        /* Update for IfAction SubSystem: '<S162>/TthAbtmntEngagingProfile' incorporates:
         *  ActionPort: '<S233>/Action Port'
         */
        /* Update for UnitDelay: '<S273>/Unit Delay' */
        localDW->UnitDelay_DSTATE_j = localB->Switch3_k;

        /* End of Update for SubSystem: '<S162>/TthAbtmntEngagingProfile' */
        break;

      case 2:
        /* Update for IfAction SubSystem: '<S162>/TorqTrapEngagingProfile' incorporates:
         *  ActionPort: '<S232>/Action Port'
         */
        /* Update for UnitDelay: '<S261>/Unit Delay' */
        localDW->UnitDelay_DSTATE = localB->Switch3;

        /* End of Update for SubSystem: '<S162>/TorqTrapEngagingProfile' */
        break;

      case 3:
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Update for If: '<S162>/If' */
}

#endif

/*
 * System initialize for action system:
 *    '<S9>/Disengagement'
 *    '<S426>/Disengagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Init(P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Start for If: '<S161>/If' */
    localDW->If_ActiveSubsystem = -1;
}

#endif

/*
 * System reset for action system:
 *    '<S9>/Disengagement'
 *    '<S426>/Disengagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Reset(P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* SystemReset for Atomic SubSystem: '<S161>/Hysteresis_1' */
    /* InitializeConditions for UnitDelay: '<S168>/Unit Delay' */
    localDW->UnitDelay_DSTATE_c = false;

    /* End of SystemReset for SubSystem: '<S161>/Hysteresis_1' */

    /* SystemReset for Atomic SubSystem: '<S161>/Hysteresis_2' */
    /* InitializeConditions for UnitDelay: '<S169>/Unit Delay' */
    localDW->UnitDelay_DSTATE_m = false;

    /* End of SystemReset for SubSystem: '<S161>/Hysteresis_2' */

    /* SystemReset for Atomic SubSystem: '<S161>/Hysteresis_3' */
    /* InitializeConditions for UnitDelay: '<S170>/Unit Delay' */
    localDW->UnitDelay_DSTATE_fj = false;

    /* End of SystemReset for SubSystem: '<S161>/Hysteresis_3' */
}

#endif

/*
 * Disable for action system:
 *    '<S9>/Disengagement'
 *    '<S426>/Disengagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Disable(P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Disable for If: '<S161>/If' */
    localDW->If_ActiveSubsystem = -1;
}

#endif

/*
 * Outputs for action system:
 *    '<S9>/Disengagement'
 *    '<S426>/Disengagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement(VAR(float32, AUTOMATIC)
    rtu_ADAC_L_ActPos, VAR(float32, AUTOMATIC) rtu_dT, VAR(boolean, AUTOMATIC)
    rtu_ADAC_b_CoolDownActive, P2VAR(TeADAR_e_ActuationStages, AUTOMATIC,
    ADAR_VAR_INIT) rty_ActacnStage, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PositionProfile, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_PTerm,
    P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ITerm, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_DTerm, P2VAR(B_Disengagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localB, P2VAR(DW_Disengagement_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW)
{
    float32 rtb_Sum6;
    float32 rtb_Sum7_c;
    float32 rtb_Sum_il;
    sint8 rtPrevAction;
    boolean rtb_AND_bd;

    /* Outputs for Atomic SubSystem: '<S161>/Hysteresis_1' */
    /* Switch: '<S168>/Switch1' incorporates:
     *  Constant: '<S173>/Calib'
     *  Constant: '<S177>/Calib'
     *  RelationalOperator: '<S168>/Greater  Than'
     *  Sum: '<S161>/Sum1'
     */
    if (rtu_ADAC_L_ActPos >= (KeADAR_L_PosCntrHystrsisDelta +
                              KeADAR_L_DengageTorqTrapEndPos))
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Constant: '<S168>/Constant Value'
         */
        localDW->UnitDelay_DSTATE_c = true;
    }
    else
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  RelationalOperator: '<S168>/Greater  Than1'
         *  Sum: '<S161>/Sum'
         *  UnitDelay: '<S168>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_c = ((rtu_ADAC_L_ActPos >
            (KeADAR_L_DengageTorqTrapEndPos - KeADAR_L_PosCntrHystrsisDelta)) &&
            (localDW->UnitDelay_DSTATE_c));
    }

    /* End of Switch: '<S168>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S161>/Hysteresis_2' */
    /* Switch: '<S169>/Switch1' incorporates:
     *  Constant: '<S172>/Calib'
     *  Constant: '<S177>/Calib'
     *  RelationalOperator: '<S169>/Greater  Than'
     *  Sum: '<S161>/Sum3'
     */
    if (rtu_ADAC_L_ActPos >= (KeADAR_L_PosCntrHystrsisDelta +
                              KeADAR_L_DengagePstTorqTrapEndPos))
    {
        /* Switch: '<S169>/Switch1' incorporates:
         *  Constant: '<S169>/Constant Value'
         */
        localDW->UnitDelay_DSTATE_m = true;
    }
    else
    {
        /* Switch: '<S169>/Switch1' incorporates:
         *  RelationalOperator: '<S169>/Greater  Than1'
         *  Sum: '<S161>/Sum2'
         *  UnitDelay: '<S169>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_m = ((rtu_ADAC_L_ActPos >
            (KeADAR_L_DengagePstTorqTrapEndPos - KeADAR_L_PosCntrHystrsisDelta))
            && (localDW->UnitDelay_DSTATE_m));
    }

    /* End of Switch: '<S169>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Hysteresis_2' */

    /* Outputs for Atomic SubSystem: '<S161>/Hysteresis_3' */
    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S175>/Calib'
     *  Constant: '<S177>/Calib'
     *  RelationalOperator: '<S170>/Greater  Than'
     *  Sum: '<S161>/Sum5'
     */
    if (rtu_ADAC_L_ActPos >= (KeADAR_L_PosCntrHystrsisDelta +
                              KeADAR_L_DisengageSftLndngEndPos))
    {
        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S170>/Constant Value'
         */
        localDW->UnitDelay_DSTATE_fj = true;
    }
    else
    {
        /* Switch: '<S170>/Switch1' incorporates:
         *  RelationalOperator: '<S170>/Greater  Than1'
         *  Sum: '<S161>/Sum4'
         *  UnitDelay: '<S170>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_fj = ((rtu_ADAC_L_ActPos >
            (KeADAR_L_DisengageSftLndngEndPos - KeADAR_L_PosCntrHystrsisDelta)) &&
            (localDW->UnitDelay_DSTATE_fj));
    }

    /* End of Switch: '<S170>/Switch1' */
    /* End of Outputs for SubSystem: '<S161>/Hysteresis_3' */

    /* Sum: '<S161>/Sum6' incorporates:
     *  Constant: '<S171>/Calib'
     *  Constant: '<S173>/Calib'
     */
    rtb_Sum6 = KeADAR_L_DengageTorqTrapEndPos -
        KeADAR_L_DengageProfileMinOffst4PID;

    /* Sum: '<S161>/Sum7' incorporates:
     *  Constant: '<S171>/Calib'
     *  Constant: '<S172>/Calib'
     */
    rtb_Sum7_c = KeADAR_L_DengagePstTorqTrapEndPos -
        KeADAR_L_DengageProfileMinOffst4PID;

    /* If: '<S161>/If' incorporates:
     *  Constant: '<S174>/Calib'
     *  Inport: '<S167>/StageMinBound'
     */
    rtPrevAction = localDW->If_ActiveSubsystem;
    if (localDW->UnitDelay_DSTATE_c)
    {
        localDW->If_ActiveSubsystem = 0;
    }
    else if (localDW->UnitDelay_DSTATE_m)
    {
        localDW->If_ActiveSubsystem = 1;
    }
    else if (localDW->UnitDelay_DSTATE_fj)
    {
        localDW->If_ActiveSubsystem = 2;
    }
    else
    {
        localDW->If_ActiveSubsystem = 3;
    }

    switch (localDW->If_ActiveSubsystem)
    {
      case 0:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S161>/TorqTrapDisengage' incorporates:
             *  ActionPort: '<S180>/Action Port'
             */
            /* InitializeConditions for If: '<S161>/If' incorporates:
             *  UnitDelay: '<S217>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_f = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S161>/TorqTrapDisengage' */

            /* SystemReset for IfAction SubSystem: '<S161>/TorqTrapDisengage' incorporates:
             *  ActionPort: '<S180>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S180>/EdgeRising' */
            /* SystemReset for If: '<S161>/If' incorporates:
             *  UnitDelay: '<S206>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_p = false;

            /* End of SystemReset for SubSystem: '<S180>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S161>/TorqTrapDisengage' */
        }

        /* Outputs for IfAction SubSystem: '<S161>/TorqTrapDisengage' incorporates:
         *  ActionPort: '<S180>/Action Port'
         */
        /* SignalConversion generated from: '<S180>/ActacnStage' incorporates:
         *  Constant: '<S207>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_OpngTorqTrap;

        /* Outputs for Atomic SubSystem: '<S180>/EdgeRising' */
        /* Logic: '<S206>/AND' incorporates:
         *  Logic: '<S206>/OR1'
         *  UnitDelay: '<S206>/Unit Delay'
         */
        rtb_AND_bd = !localDW->UnitDelay_DSTATE_p;

        /* Update for UnitDelay: '<S206>/Unit Delay' incorporates:
         *  Constant: '<S180>/Constant2'
         */
        localDW->UnitDelay_DSTATE_p = true;

        /* End of Outputs for SubSystem: '<S180>/EdgeRising' */

        /* Switch: '<S217>/Switch1' */
        if (rtb_AND_bd)
        {
            /* Switch: '<S180>/Switch' */
            rtb_Sum7_c = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S180>/Switch' incorporates:
             *  UnitDelay: '<S217>/Unit Delay'
             */
            rtb_Sum7_c = localDW->UnitDelay_DSTATE_f;
        }

        /* End of Switch: '<S217>/Switch1' */

        /* Sum: '<S180>/Sum' incorporates:
         *  Constant: '<S209>/Calib'
         *  Product: '<S180>/Product'
         */
        rtb_Sum_il = (KeADAR_v_OpngTorqTrap * rtu_dT) + rtb_Sum7_c;

        /* Outputs for Atomic SubSystem: '<S180>/Limiter1' */
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S176>/Calib'
         *  RelationalOperator: '<S208>/Relational Operator'
         */
        if (KeADAR_L_EngageEndStopEndPos < rtb_Sum_il)
        {
            /* Switch: '<S208>/Switch1' */
            rtb_Sum_il = KeADAR_L_EngageEndStopEndPos;
        }

        /* End of Switch: '<S208>/Switch1' */

        /* Switch: '<S208>/Switch' incorporates:
         *  RelationalOperator: '<S208>/Relational Operator1'
         */
        if (rtb_Sum_il > rtb_Sum6)
        {
            /* Switch: '<S208>/Switch' */
            rtb_Sum6 = rtb_Sum_il;
        }

        /* End of Switch: '<S208>/Switch' */
        /* End of Outputs for SubSystem: '<S180>/Limiter1' */

        /* Switch: '<S180>/Switch' */
        if (!rtu_ADAC_b_CoolDownActive)
        {
            /* Switch: '<S180>/Switch' */
            rtb_Sum7_c = rtb_Sum6;
        }

        /* End of Switch: '<S180>/Switch' */

        /* Gain: '<S213>/Gain' */
        *rty_PositionProfile = rtb_Sum7_c;

        /* Switch: '<S217>/Switch3' */
        if (rtb_AND_bd)
        {
            /* Switch: '<S217>/Switch3' */
            localB->Switch3_n = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S217>/Switch3' */
            localB->Switch3_n = rtb_Sum6;
        }

        /* End of Switch: '<S217>/Switch3' */

        /* Gain: '<S214>/Gain' incorporates:
         *  Constant: '<S210>/Calib'
         */
        *rty_PTerm = KeADAR_k_PTerm_TorqTrapDisengage;

        /* Gain: '<S215>/Gain' incorporates:
         *  Constant: '<S211>/Calib'
         */
        *rty_ITerm = KeADAR_k_ITerm_TorqTrapDisengage;

        /* Gain: '<S216>/Gain' incorporates:
         *  Constant: '<S212>/Calib'
         */
        *rty_DTerm = KeADAR_k_DTerm_TorqTrapDisengage;

        /* End of Outputs for SubSystem: '<S161>/TorqTrapDisengage' */
        break;

      case 1:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S161>/PstTorqTrapDisengage' incorporates:
             *  ActionPort: '<S178>/Action Port'
             */
            /* InitializeConditions for If: '<S161>/If' incorporates:
             *  UnitDelay: '<S193>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_d = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S161>/PstTorqTrapDisengage' */

            /* SystemReset for IfAction SubSystem: '<S161>/PstTorqTrapDisengage' incorporates:
             *  ActionPort: '<S178>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S178>/EdgeRising' */
            /* SystemReset for If: '<S161>/If' incorporates:
             *  UnitDelay: '<S182>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_j = false;

            /* End of SystemReset for SubSystem: '<S178>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S161>/PstTorqTrapDisengage' */
        }

        /* Outputs for IfAction SubSystem: '<S161>/PstTorqTrapDisengage' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        /* SignalConversion generated from: '<S178>/ActacnStage' incorporates:
         *  Constant: '<S183>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_OpngPstTorqTrap;

        /* Outputs for Atomic SubSystem: '<S178>/EdgeRising' */
        /* Logic: '<S182>/AND' incorporates:
         *  Logic: '<S182>/OR1'
         *  UnitDelay: '<S182>/Unit Delay'
         */
        rtb_AND_bd = !localDW->UnitDelay_DSTATE_j;

        /* Update for UnitDelay: '<S182>/Unit Delay' incorporates:
         *  Constant: '<S178>/Constant1'
         */
        localDW->UnitDelay_DSTATE_j = true;

        /* End of Outputs for SubSystem: '<S178>/EdgeRising' */

        /* Switch: '<S193>/Switch1' */
        if (rtb_AND_bd)
        {
            /* Switch: '<S178>/Switch' */
            rtb_Sum6 = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S178>/Switch' incorporates:
             *  UnitDelay: '<S193>/Unit Delay'
             */
            rtb_Sum6 = localDW->UnitDelay_DSTATE_d;
        }

        /* End of Switch: '<S193>/Switch1' */

        /* Sum: '<S178>/Sum' incorporates:
         *  Constant: '<S187>/Calib'
         *  Product: '<S178>/Product'
         */
        rtb_Sum_il = (KeADAR_v_OpngPstTorqTrap * rtu_dT) + rtb_Sum6;

        /* Outputs for Atomic SubSystem: '<S178>/Limiter1' */
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S173>/Calib'
         *  RelationalOperator: '<S188>/Relational Operator'
         */
        if (KeADAR_L_DengageTorqTrapEndPos < rtb_Sum_il)
        {
            /* Switch: '<S188>/Switch1' */
            rtb_Sum_il = KeADAR_L_DengageTorqTrapEndPos;
        }

        /* End of Switch: '<S188>/Switch1' */

        /* Switch: '<S188>/Switch' incorporates:
         *  RelationalOperator: '<S188>/Relational Operator1'
         */
        if (rtb_Sum_il > rtb_Sum7_c)
        {
            /* Switch: '<S188>/Switch' */
            rtb_Sum7_c = rtb_Sum_il;
        }

        /* End of Switch: '<S188>/Switch' */
        /* End of Outputs for SubSystem: '<S178>/Limiter1' */

        /* Switch: '<S178>/Switch' */
        if (!rtu_ADAC_b_CoolDownActive)
        {
            /* Switch: '<S178>/Switch' */
            rtb_Sum6 = rtb_Sum7_c;
        }

        /* End of Switch: '<S178>/Switch' */

        /* Gain: '<S189>/Gain' */
        *rty_PositionProfile = rtb_Sum6;

        /* Switch: '<S193>/Switch3' */
        if (rtb_AND_bd)
        {
            /* Switch: '<S193>/Switch3' */
            localB->Switch3_e = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S193>/Switch3' */
            localB->Switch3_e = rtb_Sum7_c;
        }

        /* End of Switch: '<S193>/Switch3' */

        /* Gain: '<S190>/Gain' incorporates:
         *  Constant: '<S186>/Calib'
         */
        *rty_PTerm = KeADAR_k_PTerm_PstTorqTrapDisengage;

        /* Gain: '<S191>/Gain' incorporates:
         *  Constant: '<S185>/Calib'
         */
        *rty_ITerm = KeADAR_k_ITerm_PstTorqTrapDisengage;

        /* Gain: '<S192>/Gain' incorporates:
         *  Constant: '<S184>/Calib'
         */
        *rty_DTerm = KeADAR_k_DTerm_PstTorqTrapDisengage;

        /* End of Outputs for SubSystem: '<S161>/PstTorqTrapDisengage' */
        break;

      case 2:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S161>/SftLndngDisengageProfile' incorporates:
             *  ActionPort: '<S179>/Action Port'
             */
            /* InitializeConditions for If: '<S161>/If' incorporates:
             *  UnitDelay: '<S205>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S161>/SftLndngDisengageProfile' */

            /* SystemReset for IfAction SubSystem: '<S161>/SftLndngDisengageProfile' incorporates:
             *  ActionPort: '<S179>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S179>/EdgeRising' */
            /* SystemReset for If: '<S161>/If' incorporates:
             *  UnitDelay: '<S194>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_b = false;

            /* End of SystemReset for SubSystem: '<S179>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S161>/SftLndngDisengageProfile' */
        }

        /* Outputs for IfAction SubSystem: '<S161>/SftLndngDisengageProfile' incorporates:
         *  ActionPort: '<S179>/Action Port'
         */
        /* SignalConversion generated from: '<S179>/ActacnStage' incorporates:
         *  Constant: '<S195>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_OpngSoftLanding;

        /* Outputs for Atomic SubSystem: '<S179>/EdgeRising' */
        /* Logic: '<S194>/AND' incorporates:
         *  Logic: '<S194>/OR1'
         *  UnitDelay: '<S194>/Unit Delay'
         */
        rtb_AND_bd = !localDW->UnitDelay_DSTATE_b;

        /* Update for UnitDelay: '<S194>/Unit Delay' incorporates:
         *  Constant: '<S179>/Constant1'
         */
        localDW->UnitDelay_DSTATE_b = true;

        /* End of Outputs for SubSystem: '<S179>/EdgeRising' */

        /* Switch: '<S205>/Switch1' */
        if (rtb_AND_bd)
        {
            /* Switch: '<S179>/Switch' */
            rtb_Sum6 = rtu_ADAC_L_ActPos;
        }
        else
        {
            /* Switch: '<S179>/Switch' incorporates:
             *  UnitDelay: '<S205>/Unit Delay'
             */
            rtb_Sum6 = localDW->UnitDelay_DSTATE;
        }

        /* End of Switch: '<S205>/Switch1' */

        /* Sum: '<S196>/Subtraction1' incorporates:
         *  Constant: '<S171>/Calib'
         *  Constant: '<S175>/Calib'
         *  Constant: '<S200>/Calib'
         *  Product: '<S196>/Multiplication'
         *  Sum: '<S161>/Sum8'
         *  Sum: '<S196>/Subtraction'
         */
        localB->Switch3 = (((KeADAR_L_DisengageSftLndngEndPos -
                             KeADAR_L_DengageProfileMinOffst4PID) - rtb_Sum6) *
                           KeADAR_k_SoftLandingFilterCoefficient) + rtb_Sum6;

        /* Switch: '<S179>/Switch' */
        if (!rtu_ADAC_b_CoolDownActive)
        {
            /* Switch: '<S179>/Switch' */
            rtb_Sum6 = localB->Switch3;
        }

        /* End of Switch: '<S179>/Switch' */

        /* Gain: '<S201>/Gain' */
        *rty_PositionProfile = rtb_Sum6;

        /* Switch: '<S205>/Switch3' */
        if (rtb_AND_bd)
        {
            /* Switch: '<S205>/Switch3' */
            localB->Switch3 = rtu_ADAC_L_ActPos;
        }

        /* End of Switch: '<S205>/Switch3' */

        /* Gain: '<S202>/Gain' incorporates:
         *  Constant: '<S199>/Calib'
         */
        *rty_PTerm = KeADAR_k_PTerm_SftLndngDisengage;

        /* Gain: '<S203>/Gain' incorporates:
         *  Constant: '<S198>/Calib'
         */
        *rty_ITerm = KeADAR_k_ITerm_SftLndngDisengage;

        /* Gain: '<S204>/Gain' incorporates:
         *  Constant: '<S197>/Calib'
         */
        *rty_DTerm = KeADAR_k_DTerm_SftLndngDisengage;

        /* End of Outputs for SubSystem: '<S161>/SftLndngDisengageProfile' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S161>/DisengageHldAtEndStop' incorporates:
         *  ActionPort: '<S167>/Action Port'
         */
        /* SignalConversion generated from: '<S167>/ActacnStage' incorporates:
         *  Constant: '<S181>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_OpngHldAtEndStp;
        *rty_PositionProfile = KeADAR_L_DisengageEndStopEndPos;

        /* SignalConversion generated from: '<S167>/PTerm_Disengage' incorporates:
         *  Constant: '<S167>/Constant'
         *  Constant: '<S174>/Calib'
         *  Inport: '<S167>/StageMinBound'
         */
        *rty_PTerm = 0.0F;

        /* SignalConversion generated from: '<S167>/ITerm_Disengage' incorporates:
         *  Constant: '<S167>/Constant1'
         */
        *rty_ITerm = 0.0F;

        /* SignalConversion generated from: '<S167>/DTerm_Disengage' incorporates:
         *  Constant: '<S167>/Constant2'
         */
        *rty_DTerm = 0.0F;

        /* End of Outputs for SubSystem: '<S161>/DisengageHldAtEndStop' */
        break;
    }

    /* End of If: '<S161>/If' */
}

#endif

/*
 * Update for action system:
 *    '<S9>/Disengagement'
 *    '<S426>/Disengagement'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Disengagement_Update(P2VAR
    (B_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localB, P2VAR
    (DW_Disengagement_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Update for If: '<S161>/If' */
    switch (localDW->If_ActiveSubsystem)
    {
      case 0:
        /* Update for IfAction SubSystem: '<S161>/TorqTrapDisengage' incorporates:
         *  ActionPort: '<S180>/Action Port'
         */
        /* Update for UnitDelay: '<S217>/Unit Delay' */
        localDW->UnitDelay_DSTATE_f = localB->Switch3_n;

        /* End of Update for SubSystem: '<S161>/TorqTrapDisengage' */
        break;

      case 1:
        /* Update for IfAction SubSystem: '<S161>/PstTorqTrapDisengage' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        /* Update for UnitDelay: '<S193>/Unit Delay' */
        localDW->UnitDelay_DSTATE_d = localB->Switch3_e;

        /* End of Update for SubSystem: '<S161>/PstTorqTrapDisengage' */
        break;

      case 2:
        /* Update for IfAction SubSystem: '<S161>/SftLndngDisengageProfile' incorporates:
         *  ActionPort: '<S179>/Action Port'
         */
        /* Update for UnitDelay: '<S205>/Unit Delay' */
        localDW->UnitDelay_DSTATE = localB->Switch3;

        /* End of Update for SubSystem: '<S161>/SftLndngDisengageProfile' */
        break;

      case 3:
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Update for If: '<S161>/If' */
}

#endif

/*
 * Output and update for action system:
 *    '<S9>/Idle'
 *    '<S426>/Idle'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_Idle(VAR(TeADAR_e_ActuationCmndStates,
    AUTOMATIC) rtu_ADAC_e_SolenoidCtrlCmnd, P2VAR(TeADAR_e_ActuationStages,
    AUTOMATIC, ADAR_VAR_INIT) rty_ActacnStage, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_PositionProfile, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PTerm, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ITerm, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_DTerm)
{
    /* If: '<S165>/If' incorporates:
     *  Constant: '<S275>/Constant'
     *  Constant: '<S276>/Constant'
     *  Constant: '<S277>/Constant'
     *  Constant: '<S278>/Constant'
     *  RelationalOperator: '<S165>/Relational Operator'
     *  RelationalOperator: '<S165>/Relational Operator1'
     *  RelationalOperator: '<S165>/Relational Operator2'
     *  RelationalOperator: '<S165>/Relational Operator4'
     */
    if (((uint32)rtu_ADAC_e_SolenoidCtrlCmnd) == CeADAR_e_SSClosed)
    {
        /* Outputs for IfAction SubSystem: '<S165>/SS_Closed' incorporates:
         *  ActionPort: '<S280>/Action Port'
         */
        /* SignalConversion generated from: '<S280>/ActacnStage' incorporates:
         *  Constant: '<S286>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_ClsdAtEndStp;

        /* SignalConversion generated from: '<S280>/PositionProf' incorporates:
         *  Constant: '<S287>/Calib'
         */
        *rty_PositionProfile = KeADAR_L_EngageEndStopEndPos;

        /* End of Outputs for SubSystem: '<S165>/SS_Closed' */
    }
    else if (((uint32)rtu_ADAC_e_SolenoidCtrlCmnd) == CeADAR_e_SSOpened)
    {
        /* Outputs for IfAction SubSystem: '<S165>/SS_Opened' incorporates:
         *  ActionPort: '<S281>/Action Port'
         */
        /* SignalConversion generated from: '<S281>/ActacnStage' incorporates:
         *  Constant: '<S288>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_OpnAtEndStp;

        /* SignalConversion generated from: '<S281>/PositionProf' incorporates:
         *  Constant: '<S289>/Calib'
         */
        *rty_PositionProfile = KeADAR_L_DisengageEndStopEndPos;

        /* End of Outputs for SubSystem: '<S165>/SS_Opened' */
    }
    else if (((uint32)rtu_ADAC_e_SolenoidCtrlCmnd) == CeADAR_e_ClosingWithHold)
    {
        /* Outputs for IfAction SubSystem: '<S165>/ClosingWithHold' incorporates:
         *  ActionPort: '<S274>/Action Port'
         */
        /* SignalConversion generated from: '<S274>/ActacnStage' incorporates:
         *  Constant: '<S282>/Constant'
         */
        *rty_ActacnStage = CeADAR_e_ClsngHldAtEndStp;

        /* SignalConversion generated from: '<S274>/PositionProf' incorporates:
         *  Constant: '<S283>/Calib'
         */
        *rty_PositionProfile = KeADAR_L_EngageEndStopEndPos;

        /* End of Outputs for SubSystem: '<S165>/ClosingWithHold' */
    }
    else
    {
        if (((uint32)rtu_ADAC_e_SolenoidCtrlCmnd) == CeADAR_e_OpeningWithHold)
        {
            /* Outputs for IfAction SubSystem: '<S165>/OpeningWithHold' incorporates:
             *  ActionPort: '<S279>/Action Port'
             */
            /* SignalConversion generated from: '<S279>/ActacnStage' incorporates:
             *  Constant: '<S284>/Constant'
             */
            *rty_ActacnStage = CeADAR_e_OpngHldAtEndStp;

            /* SignalConversion generated from: '<S279>/PositionProf' incorporates:
             *  Constant: '<S285>/Calib'
             */
            *rty_PositionProfile = KeADAR_L_DisengageEndStopEndPos;

            /* End of Outputs for SubSystem: '<S165>/OpeningWithHold' */
        }
    }

    /* End of If: '<S165>/If' */

    /* SignalConversion generated from: '<S165>/PTerm' incorporates:
     *  Constant: '<S165>/Constant'
     */
    *rty_PTerm = 0.0F;

    /* SignalConversion generated from: '<S165>/ITerm' incorporates:
     *  Constant: '<S165>/Constant1'
     */
    *rty_ITerm = 0.0F;

    /* SignalConversion generated from: '<S165>/DTerm' incorporates:
     *  Constant: '<S165>/Constant2'
     */
    *rty_DTerm = 0.0F;
}

#endif

/*
 * System initialize for action system:
 *    '<S6>/PositionControl'
 *    '<S423>/PositionControl'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_PositionControl_Init(P2VAR
    (DW_PositionControl_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* InitializeConditions for UnitDelay: '<S63>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE_g = CeADAR_e_Indeterminate;
}

#endif

/*
 * System reset for action system:
 *    '<S6>/PositionControl'
 *    '<S423>/PositionControl'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_PositionControl_Reset(P2VAR
    (DW_PositionControl_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* InitializeConditions for UnitDelay: '<S63>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE_g = CeADAR_e_Indeterminate;

    /* InitializeConditions for UnitDelay: '<S63>/Unit Delay2' */
    localDW->UnitDelay2_DSTATE = false;

    /* InitializeConditions for UnitDelay: '<S58>/Unit Delay' */
    localDW->UnitDelay_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
    localDW->UnitDelay_DSTATE_en = false;

    /* InitializeConditions for UnitDelay: '<S58>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE = 0.0F;

    /* InitializeConditions for UnitDelay: '<S42>/Unit Delay' */
    localDW->UnitDelay_DSTATE_e = 0.0F;

    /* SystemReset for Atomic SubSystem: '<S42>/GradientLimiter' */
    /* InitializeConditions for UnitDelay: '<S52>/Unit Delay' */
    localDW->UnitDelay_DSTATE_c = 0.0F;

    /* End of SystemReset for SubSystem: '<S42>/GradientLimiter' */
}

#endif

/*
 * Output and update for action system:
 *    '<S6>/PositionControl'
 *    '<S423>/PositionControl'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_PositionControl(VAR(float32,
    AUTOMATIC) rtu_ADAC_L_ProfPos, VAR(float32, AUTOMATIC)
    rtu_ADAC_k_ProfPosPTerm, VAR(float32, AUTOMATIC) rtu_ADAC_k_ProfPosITerm,
    VAR(float32, AUTOMATIC) rtu_ADAC_k_ProfPosDTerm, VAR(float32, AUTOMATIC)
    rtu_VeADAI_L_ActPos, VAR(TeADAR_e_ActuationCmndStates, AUTOMATIC)
    rtu_ADAC_e_ActuationStatus, VAR(boolean, AUTOMATIC)
    rtu_VeADAR_b_CoolDownActiveWED, VAR(boolean, AUTOMATIC)
    rtu_VeADAC_b_WEDLearningActive, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_I_SlndCurrCmdt, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_PIDCntrlCmd, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_PTerm,
    P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_ITerm, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_DTerm, P2VAR(boolean, AUTOMATIC,
    ADAR_VAR_INIT) rty_ADAC_b_PIDResetAll, P2VAR(DW_PositionControl_ADAR_ac_T,
    AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    sint32 tmp;
    float32 rtb_Product2;
    float32 rtb_Product_d;
    float32 rtb_Sum2_bd;
    float32 rtb_Sum2_f;
    float32 rtb_Sum_b;
    float32 rtb_Sum_li;
    float32 rtb_Vector_o;
    boolean rtb_LogicalOperator_ng;

    /* Lookup_n-D: '<S38>/Vector' */
    rtb_Vector_o = look1_iflf_binlca_16a(rtu_VeADAI_L_ActPos, ((const float32 *)
        &(KxADAR_I_CurrLimit[0])), ((const float32 *)&(KtADAR_I_CurrLimit[0])),
        13U);

    /* Logic: '<S63>/Logical Operator' incorporates:
     *  Constant: '<S66>/Constant'
     *  Constant: '<S67>/Constant'
     *  Constant: '<S68>/Constant'
     *  Constant: '<S69>/Constant'
     *  RelationalOperator: '<S63>/Relational Operator'
     *  RelationalOperator: '<S63>/Relational Operator1'
     *  RelationalOperator: '<S63>/Relational Operator2'
     *  RelationalOperator: '<S63>/Relational Operator3'
     *  RelationalOperator: '<S63>/Relational Operator4'
     *  RelationalOperator: '<S63>/Relational Operator5'
     *  UnitDelay: '<S63>/Unit Delay1'
     *  UnitDelay: '<S63>/Unit Delay2'
     */
    rtb_LogicalOperator_ng = ((((((((uint32)rtu_ADAC_e_ActuationStatus) ==
        CeADAR_e_SSClosed) || (((uint32)rtu_ADAC_e_ActuationStatus) ==
        CeADAR_e_SSOpened)) || (((uint32)rtu_ADAC_e_ActuationStatus) ==
        CeADAR_e_OpeningWithHold)) || (((uint32)rtu_ADAC_e_ActuationStatus) ==
        CeADAR_e_ClosingWithHold)) || (rtu_ADAC_e_ActuationStatus !=
        localDW->UnitDelay1_DSTATE_g)) || (rtu_VeADAC_b_WEDLearningActive !=
        localDW->UnitDelay2_DSTATE));

    /* Sum: '<S23>/Sum' */
    rtb_Sum_li = rtu_ADAC_L_ProfPos - rtu_VeADAI_L_ActPos;

    /* Product: '<S58>/Product' */
    rtb_Product_d = rtb_Sum_li * rtu_ADAC_k_ProfPosPTerm;

    /* UnitDelay: '<S23>/Unit Delay' incorporates:
     *  UnitDelay: '<S63>/Unit Delay2'
     */
    localDW->UnitDelay2_DSTATE = localDW->UnitDelay_DSTATE_en;

    /* Switch: '<S58>/Switch' incorporates:
     *  Logic: '<S23>/Logical Operator'
     *  UnitDelay: '<S63>/Unit Delay2'
     */
    if ((!localDW->UnitDelay2_DSTATE) && (!rtu_VeADAR_b_CoolDownActiveWED))
    {
        /* Switch: '<S58>/Switch1' */
        if (rtb_LogicalOperator_ng)
        {
            /* Switch: '<S58>/Switch' incorporates:
             *  Constant: '<S62>/Calib'
             *  Switch: '<S58>/Switch1'
             */
            localDW->UnitDelay_DSTATE = KeADAR_k_PIDInitial;
        }
        else
        {
            /* Switch: '<S58>/Switch' incorporates:
             *  Constant: '<S59>/Calib'
             *  Product: '<S58>/Product1'
             *  Sum: '<S58>/Sum1'
             *  Switch: '<S58>/Switch1'
             *  UnitDelay: '<S58>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE += (rtb_Sum_li * rtu_ADAC_k_ProfPosITerm) *
                HeADAR_t_FastTEA_dT;
        }

        /* End of Switch: '<S58>/Switch1' */
    }

    /* End of Switch: '<S58>/Switch' */

    /* Outputs for Atomic SubSystem: '<S58>/Limiter1' */
    /* Switch: '<S64>/Switch1' incorporates:
     *  Constant: '<S60>/Calib'
     *  RelationalOperator: '<S64>/Relational Operator'
     */
    if (KeADAR_k_IMax < localDW->UnitDelay_DSTATE)
    {
        /* UnitDelay: '<S52>/Unit Delay' */
        localDW->UnitDelay_DSTATE = KeADAR_k_IMax;
    }

    /* End of Switch: '<S64>/Switch1' */

    /* Switch: '<S64>/Switch' incorporates:
     *  Constant: '<S61>/Calib'
     *  RelationalOperator: '<S64>/Relational Operator1'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    if (localDW->UnitDelay_DSTATE <= KeADAR_k_IMin)
    {
        localDW->UnitDelay_DSTATE = KeADAR_k_IMin;
    }

    /* End of Switch: '<S64>/Switch' */
    /* End of Outputs for SubSystem: '<S58>/Limiter1' */

    /* Sum: '<S58>/Sum2' incorporates:
     *  UnitDelay: '<S58>/Unit Delay1'
     */
    rtb_Sum2_f = rtb_Sum_li - localDW->UnitDelay1_DSTATE;

    /* Outputs for Atomic SubSystem: '<S58>/Protected Division' */
    /* Switch: '<S65>/Switch1' incorporates:
     *  Constant: '<S59>/Calib'
     *  Constant: '<S65>/Constant Value'
     *  Constant: '<S65>/Constant Value1'
     *  Constant: '<S65>/Constant Value2'
     *  Constant: '<S65>/Constant Value3'
     *  Logic: '<S65>/AND'
     *  RelationalOperator: '<S65>/Greater Than or Equal '
     *  RelationalOperator: '<S65>/Greater Than or Equal 1'
     *  RelationalOperator: '<S65>/Not Equal'
     *  RelationalOperator: '<S65>/Not Equal1'
     *  Switch: '<S65>/Switch2'
     *  Switch: '<S65>/Switch3'
     */
    if ((rtb_Sum2_f != 0.0F) && (HeADAR_t_FastTEA_dT != 0.0F))
    {
        /* Switch: '<S65>/Switch1' incorporates:
         *  Product: '<S65>/Division'
         */
        rtb_Sum2_f /= HeADAR_t_FastTEA_dT;
    }
    else if (rtb_Sum2_f > 0.0F)
    {
        /* Switch: '<S65>/Switch2' incorporates:
         *  Constant: '<S65>/MAXFLOAT'
         *  Switch: '<S65>/Switch1'
         */
        rtb_Sum2_f = 3.402823466E+38F;
    }
    else if (rtb_Sum2_f < 0.0F)
    {
        /* Switch: '<S65>/Switch3' incorporates:
         *  Constant: '<S65>/MINFLOAT'
         *  Switch: '<S65>/Switch1'
         *  Switch: '<S65>/Switch2'
         */
        rtb_Sum2_f = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S65>/Constant Value4'
         *  Switch: '<S65>/Switch2'
         *  Switch: '<S65>/Switch3'
         */
        rtb_Sum2_f = 0.0F;
    }

    /* End of Switch: '<S65>/Switch1' */
    /* End of Outputs for SubSystem: '<S58>/Protected Division' */

    /* Product: '<S58>/Product2' */
    rtb_Product2 = rtb_Sum2_f * rtu_ADAC_k_ProfPosDTerm;

    /* Switch: '<S58>/Switch3' */
    if (rtb_LogicalOperator_ng)
    {
        /* Switch: '<S58>/Switch3' incorporates:
         *  Constant: '<S58>/Constant'
         */
        rtb_Sum2_f = 0.0F;
    }
    else
    {
        /* Switch: '<S58>/Switch3' incorporates:
         *  Sum: '<S58>/Sum'
         *  UnitDelay: '<S58>/Unit Delay'
         */
        rtb_Sum2_f = (rtb_Product_d + localDW->UnitDelay_DSTATE) + rtb_Product2;
    }

    /* End of Switch: '<S58>/Switch3' */

    /* Switch: '<S42>/Switch3' incorporates:
     *  Abs: '<S42>/Abs'
     *  Constant: '<S42>/Constant5'
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Calib'
     *  RelationalOperator: '<S42>/Relational Operator5'
     *  Sum: '<S42>/Sum1'
     *  UnitDelay: '<S42>/Unit Delay'
     */
    if (fabsf(rtu_VeADAI_L_ActPos - localDW->UnitDelay_DSTATE_e) <=
            KeADAR_L_SolnStuckThrsh)
    {
        rtb_Sum2_bd = KeADAR_I_StaticFric;
    }
    else
    {
        rtb_Sum2_bd = 0.0F;
    }

    /* End of Switch: '<S42>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S42>/GradientLimiter' */
    /* Sum: '<S52>/Sum2' incorporates:
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_Sum2_bd -= localDW->UnitDelay_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S52>/Limiter' */
    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S56>/Calib'
     *  RelationalOperator: '<S57>/Relational Operator'
     */
    if (KeADAR_dI_StaticFric_Incr < rtb_Sum2_bd)
    {
        /* Switch: '<S39>/Switch1' */
        rtb_Sum2_bd = KeADAR_dI_StaticFric_Incr;
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Switch: '<S57>/Switch' incorporates:
     *  Constant: '<S55>/Calib'
     *  RelationalOperator: '<S57>/Relational Operator1'
     */
    if (rtb_Sum2_bd <= KeADAR_dI_StaticFric_Decr)
    {
        rtb_Sum2_bd = KeADAR_dI_StaticFric_Decr;
    }

    /* End of Switch: '<S57>/Switch' */
    /* End of Outputs for SubSystem: '<S52>/Limiter' */

    /* Sum: '<S52>/Sum3' incorporates:
     *  UnitDelay: '<S52>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_c += rtb_Sum2_bd;

    /* End of Outputs for SubSystem: '<S42>/GradientLimiter' */

    /* Switch: '<S40>/Switch4' incorporates:
     *  Constant: '<S40>/Constant2'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S48>/Constant'
     *  Logic: '<S40>/Logical Operator'
     *  Lookup_n-D: '<S49>/Vector'
     *  RelationalOperator: '<S40>/Relational Operator1'
     *  RelationalOperator: '<S40>/Relational Operator6'
     */
    if ((CeADAR_e_ActuateClosing == ((uint32)rtu_ADAC_e_ActuationStatus)) ||
            (((uint32)rtu_ADAC_e_ActuationStatus) == CeADAR_e_ActuateOpening))
    {
        rtb_Sum2_bd = look1_iflf_binlca_16a(rtu_VeADAI_L_ActPos, ((const float32
            *)&(KxADAR_I_OLCurrCmnd_MgntcFild[0])), ((const float32 *)
            &(KtADAR_I_OLCurrCmnd_MgntcFild[0])), 7U);
    }
    else
    {
        rtb_Sum2_bd = 0.0F;
    }

    /* End of Switch: '<S40>/Switch4' */

    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S37>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Calib'
     *  RelationalOperator: '<S37>/Relational Operator'
     *  RelationalOperator: '<S37>/Relational Operator1'
     *  Switch: '<S37>/Switch2'
     */
    if (((uint32)rtu_ADAC_e_ActuationStatus) == CeADAR_e_ClosingWithHold)
    {
        rtb_Sum_b = KeADAR_I_WEDClsngEoSCrrnt;
    }
    else if (((uint32)rtu_ADAC_e_ActuationStatus) == CeADAR_e_OpeningWithHold)
    {
        /* Switch: '<S37>/Switch2' incorporates:
         *  Constant: '<S46>/Calib'
         */
        rtb_Sum_b = KeADAR_I_WEDOpngEoSCrrnt;
    }
    else
    {
        rtb_Sum_b = 0.0F;
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Switch: '<S42>/Switch4' incorporates:
     *  Constant: '<S42>/Constant2'
     *  Constant: '<S42>/Constant3'
     *  Constant: '<S50>/Constant'
     *  Constant: '<S51>/Constant'
     *  RelationalOperator: '<S42>/Relational Operator1'
     *  RelationalOperator: '<S42>/Relational Operator6'
     *  Switch: '<S42>/Switch1'
     */
    if (CeADAR_e_ActuateClosing == ((uint32)rtu_ADAC_e_ActuationStatus))
    {
        tmp = 1;
    }
    else if (((uint32)rtu_ADAC_e_ActuationStatus) == CeADAR_e_ActuateOpening)
    {
        /* Switch: '<S42>/Switch1' incorporates:
         *  Constant: '<S42>/Constant4'
         */
        tmp = -1;
    }
    else
    {
        tmp = 0;
    }

    /* End of Switch: '<S42>/Switch4' */

    /* Sum: '<S34>/Sum' incorporates:
     *  Product: '<S42>/Product'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_Sum_b = ((rtb_Sum2_f + rtb_Sum2_bd) + rtb_Sum_b) + (((float32)tmp) *
        localDW->UnitDelay_DSTATE_c);

    /* Outputs for Atomic SubSystem: '<S34>/Limiter1' */
    /* Switch: '<S39>/Switch1' incorporates:
     *  RelationalOperator: '<S39>/Relational Operator'
     */
    if (rtb_Vector_o < rtb_Sum_b)
    {
        /* Switch: '<S39>/Switch1' */
        rtb_Sum2_bd = rtb_Vector_o;
    }
    else
    {
        /* Switch: '<S39>/Switch1' */
        rtb_Sum2_bd = rtb_Sum_b;
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Switch: '<S39>/Switch' incorporates:
     *  Constant: '<S34>/Constant1'
     *  RelationalOperator: '<S39>/Relational Operator1'
     */
    if (rtb_Sum2_bd <= -7.0F)
    {
        /* Switch: '<S39>/Switch' */
        rtb_Sum2_bd = -7.0F;
    }

    /* End of Switch: '<S39>/Switch' */
    /* End of Outputs for SubSystem: '<S34>/Limiter1' */

    /* RelationalOperator: '<S34>/Relational Operator2' incorporates:
     *  UnitDelay: '<S23>/Unit Delay'
     */
    localDW->UnitDelay_DSTATE_en = (rtb_Sum2_bd != rtb_Sum_b);

    /* SignalConversion generated from: '<S23>/ADAC_I_DTerm' */
    *rty_ADAC_I_DTerm = rtb_Product2;

    /* SignalConversion generated from: '<S23>/ADAC_I_ITerm' incorporates:
     *  UnitDelay: '<S58>/Unit Delay'
     */
    *rty_ADAC_I_ITerm = localDW->UnitDelay_DSTATE;

    /* SignalConversion generated from: '<S23>/ADAC_I_PTerm' */
    *rty_ADAC_I_PTerm = rtb_Product_d;

    /* SignalConversion generated from: '<S23>/ADAC_b_PIDResetAll' */
    *rty_ADAC_b_PIDResetAll = rtb_LogicalOperator_ng;

    /* SignalConversion generated from: '<S23>/PIDCntrlCmd' */
    *rty_PIDCntrlCmd = rtb_Sum2_f;

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S36>/Calib'
     *  Product: '<S23>/Product'
     */
    if (HeADAR_b_UsePosCurrntForEngage)
    {
        *rty_ADAC_I_SlndCurrCmdt = rtb_Sum2_bd;
    }
    else
    {
        *rty_ADAC_I_SlndCurrCmdt = -rtb_Sum2_bd;
    }

    /* End of Switch: '<S23>/Switch1' */

    /* Update for UnitDelay: '<S63>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE_g = rtu_ADAC_e_ActuationStatus;

    /* Update for UnitDelay: '<S63>/Unit Delay2' */
    localDW->UnitDelay2_DSTATE = rtu_VeADAC_b_WEDLearningActive;

    /* Update for UnitDelay: '<S58>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE = rtb_Sum_li;

    /* Update for UnitDelay: '<S42>/Unit Delay' */
    localDW->UnitDelay_DSTATE_e = rtu_VeADAI_L_ActPos;
}

#endif

/*
 * Output and update for action system:
 *    '<S6>/ConstanCurrentControl'
 *    '<S423>/ConstanCurrentControl'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_ConstanCurrentControl(VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC) rtu_ADAC_e_CmndWEDActn_State,
    P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_SlndCurrCmdt, P2VAR
    (float32, AUTOMATIC, ADAR_VAR_INIT) rty_PIDCntrlCmd, P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_ADAC_I_PTerm, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_ADAC_I_ITerm, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_I_DTerm, P2VAR(boolean, AUTOMATIC, ADAR_VAR_INIT)
    rty_ADAC_b_PIDResetAll)
{
    /* If: '<S20>/If' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Logic: '<S20>/Logical Operator'
     *  Logic: '<S20>/Logical Operator1'
     *  RelationalOperator: '<S20>/Relational Operator'
     *  RelationalOperator: '<S20>/Relational Operator1'
     *  RelationalOperator: '<S20>/Relational Operator2'
     *  RelationalOperator: '<S20>/Relational Operator3'
     */
    if ((((uint32)rtu_ADAC_e_CmndWEDActn_State) == CeADAR_e_ActuateOpening) ||
            (((uint32)rtu_ADAC_e_CmndWEDActn_State) == CeADAR_e_OpeningWithHold))
    {
        /* Outputs for IfAction SubSystem: '<S20>/DisengagingProfile' incorporates:
         *  ActionPort: '<S25>/Action Port'
         */
        /* SignalConversion generated from: '<S25>/Out1' incorporates:
         *  Constant: '<S32>/Calib'
         */
        *rty_ADAC_I_SlndCurrCmdt = KeADAR_I_WEDOpeningCurrent;

        /* End of Outputs for SubSystem: '<S20>/DisengagingProfile' */
    }
    else if ((((uint32)rtu_ADAC_e_CmndWEDActn_State) == CeADAR_e_ActuateClosing)
             || (((uint32)rtu_ADAC_e_CmndWEDActn_State) ==
                 CeADAR_e_ClosingWithHold))
    {
        /* Outputs for IfAction SubSystem: '<S20>/EngagingProfile' incorporates:
         *  ActionPort: '<S26>/Action Port'
         */
        /* SignalConversion generated from: '<S26>/Out1' incorporates:
         *  Constant: '<S33>/Calib'
         */
        *rty_ADAC_I_SlndCurrCmdt = KeADAR_I_WEDClosingCurrent;

        /* End of Outputs for SubSystem: '<S20>/EngagingProfile' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S20>/No_Change' incorporates:
         *  ActionPort: '<S31>/Action Port'
         */
        /* SignalConversion generated from: '<S31>/Out1' incorporates:
         *  Constant: '<S31>/Constant'
         */
        *rty_ADAC_I_SlndCurrCmdt = 0.0F;

        /* End of Outputs for SubSystem: '<S20>/No_Change' */
    }

    /* End of If: '<S20>/If' */

    /* SignalConversion generated from: '<S20>/PIDCntrlCmd' incorporates:
     *  Constant: '<S20>/Constant4'
     */
    *rty_PIDCntrlCmd = 0.0F;

    /* SignalConversion generated from: '<S20>/ADAC_I_PTerm' incorporates:
     *  Constant: '<S20>/Constant3'
     */
    *rty_ADAC_I_PTerm = 0.0F;

    /* SignalConversion generated from: '<S20>/ADAC_I_ITerm' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    *rty_ADAC_I_ITerm = 0.0F;

    /* SignalConversion generated from: '<S20>/ADAC_I_DTerm' incorporates:
     *  Constant: '<S20>/Constant1'
     */
    *rty_ADAC_I_DTerm = 0.0F;

    /* SignalConversion generated from: '<S20>/ADAC_b_PIDResetAll' incorporates:
     *  Constant: '<S20>/Constant'
     */
    *rty_ADAC_b_PIDResetAll = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S81>/EngagingGains'
 *    '<S498>/EngagingGains'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_EngagingGains(P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_PTerm_Engage, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_ITerm_Engage, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_DTerm_Engage)
{
    /* Gain: '<S101>/Gain' incorporates:
     *  Constant: '<S100>/Calib'
     */
    *rty_PTerm_Engage = KeADAR_k_PTerm_Engage;

    /* Gain: '<S102>/Gain' incorporates:
     *  Constant: '<S99>/Calib'
     */
    *rty_ITerm_Engage = KeADAR_k_ITerm_Engage;

    /* Gain: '<S103>/Gain' incorporates:
     *  Constant: '<S98>/Calib'
     */
    *rty_DTerm_Engage = KeADAR_k_DTerm_Engage;
}

#endif

/*
 * Output and update for action system:
 *    '<S81>/DisengagingGains'
 *    '<S498>/DisengagingGains'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_DisengagingGains(P2VAR(float32,
    AUTOMATIC, ADAR_VAR_INIT) rty_PTerm_Diseng, P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_ITerm_Diseng, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_DTerm_Diseng)
{
    /* Gain: '<S95>/Gain' incorporates:
     *  Constant: '<S94>/Calib'
     */
    *rty_PTerm_Diseng = KeADAR_k_PTerm_Diseng;

    /* Gain: '<S96>/Gain' incorporates:
     *  Constant: '<S93>/Calib'
     */
    *rty_ITerm_Diseng = KeADAR_k_ITerm_Diseng;

    /* Gain: '<S97>/Gain' incorporates:
     *  Constant: '<S92>/Calib'
     */
    *rty_DTerm_Diseng = KeADAR_k_DTerm_Diseng;
}

#endif

/*
 * Output and update for action system:
 *    '<S81>/IdleGains'
 *    '<S498>/IdleGains'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_IdleGains(P2VAR(float32, AUTOMATIC,
    ADAR_VAR_INIT) rty_PTerm_Idle, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT)
    rty_ITerm_Idle, P2VAR(float32, AUTOMATIC, ADAR_VAR_INIT) rty_DTerm_Idle)
{
    /* SignalConversion generated from: '<S91>/PTerm_Idle' incorporates:
     *  Constant: '<S91>/Constant'
     */
    *rty_PTerm_Idle = 0.0F;

    /* SignalConversion generated from: '<S91>/ITerm_Idle' incorporates:
     *  Constant: '<S91>/Constant1'
     */
    *rty_ITerm_Idle = 0.0F;

    /* SignalConversion generated from: '<S91>/DTerm_Idle' incorporates:
     *  Constant: '<S91>/Constant2'
     */
    *rty_DTerm_Idle = 0.0F;
}

#endif

/*
 * System initialize for function-call system:
 *    '<S4>/ADAR_LearningProcedure'
 *    '<S5>/ADAR_LearningProcedure1'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_ADAR_LearningProcedure_Init(P2VAR
    (DW_ADAR_LearningProcedure_ADAR_ac_T, AUTOMATIC, ADAR_VAR_INIT) localDW)
{
    /* Start for If: '<S11>/If' */
    localDW->If_ActiveSubsystem = -1;

    /* SystemInitialize for IfAction SubSystem: '<S11>/EndStopLearning' */
    /* Start for If: '<S345>/If' */
    localDW->If_ActiveSubsystem_i = -1;

    /* InitializeConditions for UnitDelay: '<S345>/Unit Delay2' */
    localDW->UnitDelay2_DSTATE = CeADAR_e_Indeterminate;

    /* InitializeConditions for UnitDelay: '<S345>/Unit Delay1' */
    localDW->UnitDelay1_DSTATE_c = CeADAR_e_Indeterminate;

    /* End of SystemInitialize for SubSystem: '<S11>/EndStopLearning' */
}

#endif

/*
 * Output and update for function-call system:
 *    '<S4>/ADAR_LearningProcedure'
 *    '<S5>/ADAR_LearningProcedure1'
 */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

static FUNC(void, ADAR_CODE_LOCAL) ADAR_ac_ADAR_LearningProcedure(VAR
    (TeADAR_e_ActuationCmndStates, AUTOMATIC) rtu_VeADAR_e_ActuationStates, VAR
    (float32, AUTOMATIC) rtu_VeADAR_Pct_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_VeADAR_L_WEDSlndPosAct, VAR(float32, AUTOMATIC)
    rtu_ADAI_I_WEDSlndCurrAct, VAR(boolean, AUTOMATIC) rtu_OpenTimerActive, VAR
    (boolean, AUTOMATIC) rtu_CloseTimerActive, VAR(TeADAR_e_WEDID, AUTOMATIC)
    rtu_VeADAR_e_WEDID, P2VAR(DW_ADAR_LearningProcedure_ADAR_ac_T, AUTOMATIC,
    ADAR_VAR_INIT) localDW)
{
    sint32 i;
    float32 tmp[10];
    sint8 rtPrevAction;
    boolean rtb_Comparison2_p;
    boolean rtb_Logical2_i;

    /* If: '<S11>/If' incorporates:
     *  Constant: '<S340>/Constant'
     *  Constant: '<S341>/Constant'
     *  Constant: '<S342>/Constant'
     *  Constant: '<S343>/Constant'
     *  Constant: '<S344>/Constant'
     *  Logic: '<S11>/Logical3'
     *  Logic: '<S408>/AND'
     *  RelationalOperator: '<S11>/Comparison'
     *  RelationalOperator: '<S11>/Comparison1'
     *  RelationalOperator: '<S11>/Comparison2'
     *  RelationalOperator: '<S11>/Comparison3'
     *  RelationalOperator: '<S11>/Comparison4'
     */
    rtPrevAction = localDW->If_ActiveSubsystem;
    localDW->If_ActiveSubsystem = -1;
    if ((((((uint32)rtu_VeADAR_e_ActuationStates) == CeADAR_e_ClosingWithHold) ||
          (((uint32)rtu_VeADAR_e_ActuationStates) == CeADAR_e_OpeningWithHold)) ||
         (((uint32)rtu_VeADAR_e_ActuationStates) == CeADAR_e_SSOpened)) ||
            (((uint32)rtu_VeADAR_e_ActuationStates) == CeADAR_e_SSClosed))
    {
        localDW->If_ActiveSubsystem = 0;
    }
    else
    {
        if (((uint32)rtu_VeADAR_e_ActuationStates) == CeADAR_e_ActuateClosing)
        {
            localDW->If_ActiveSubsystem = 1;
        }
    }

    if ((rtPrevAction != localDW->If_ActiveSubsystem) && (rtPrevAction == 0))
    {
        /* Disable for If: '<S345>/If' */
        localDW->If_ActiveSubsystem_i = -1;
    }

    switch (localDW->If_ActiveSubsystem)
    {
      case 0:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S11>/EndStopLearning' incorporates:
             *  ActionPort: '<S345>/Action Port'
             */
            /* InitializeConditions for If: '<S11>/If' incorporates:
             *  UnitDelay: '<S345>/Unit Delay1'
             *  UnitDelay: '<S345>/Unit Delay2'
             */
            localDW->UnitDelay2_DSTATE = CeADAR_e_Indeterminate;
            localDW->UnitDelay1_DSTATE_c = CeADAR_e_Indeterminate;

            /* End of InitializeConditions for SubSystem: '<S11>/EndStopLearning' */

            /* SystemReset for IfAction SubSystem: '<S11>/EndStopLearning' incorporates:
             *  ActionPort: '<S345>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S345>/Signal Latch On With Reset1' */
            /* SystemReset for If: '<S11>/If' incorporates:
             *  UnitDelay: '<S357>/Unit Delay'
             *  UnitDelay: '<S358>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_c = false;

            /* End of SystemReset for SubSystem: '<S345>/Signal Latch On With Reset1' */

            /* SystemReset for Atomic SubSystem: '<S345>/Signal Latch On With Reset' */
            localDW->UnitDelay_DSTATE_nc = false;

            /* End of SystemReset for SubSystem: '<S345>/Signal Latch On With Reset' */
            /* End of SystemReset for SubSystem: '<S11>/EndStopLearning' */
        }

        /* Outputs for IfAction SubSystem: '<S11>/EndStopLearning' incorporates:
         *  ActionPort: '<S345>/Action Port'
         */
        /* RelationalOperator: '<S345>/Comparison2' incorporates:
         *  Constant: '<S350>/Constant'
         *  RelationalOperator: '<S345>/Comparison3'
         */
        rtb_Comparison2_p = (((uint32)rtu_VeADAR_e_ActuationStates) ==
                             CeADAR_e_SSClosed);

        /* Outputs for Atomic SubSystem: '<S345>/Signal Latch On With Reset1' */
        /* Logic: '<S358>/OR1' incorporates:
         *  Constant: '<S352>/Constant'
         *  Logic: '<S345>/Logical5'
         *  Logic: '<S358>/OR'
         *  RelationalOperator: '<S345>/Comparison5'
         *  UnitDelay: '<S345>/Unit Delay2'
         *  UnitDelay: '<S358>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_c = ((((uint32)localDW->UnitDelay2_DSTATE) ==
            CeADAR_e_ClosingWithHold) || (rtb_Comparison2_p &&
            (localDW->UnitDelay_DSTATE_c)));

        /* End of Outputs for SubSystem: '<S345>/Signal Latch On With Reset1' */

        /* Logic: '<S345>/Logical2' incorporates:
         *  UnitDelay: '<S358>/Unit Delay'
         */
        rtb_Logical2_i = ((localDW->UnitDelay_DSTATE_c) && rtb_Comparison2_p);

        /* RelationalOperator: '<S345>/Comparison2' incorporates:
         *  Constant: '<S349>/Constant'
         */
        rtb_Comparison2_p = (((uint32)rtu_VeADAR_e_ActuationStates) ==
                             CeADAR_e_SSOpened);

        /* Outputs for Atomic SubSystem: '<S345>/Signal Latch On With Reset' */
        /* Logic: '<S357>/OR1' incorporates:
         *  Constant: '<S351>/Constant'
         *  Logic: '<S345>/Logical4'
         *  Logic: '<S357>/OR'
         *  RelationalOperator: '<S345>/Comparison4'
         *  UnitDelay: '<S345>/Unit Delay1'
         *  UnitDelay: '<S357>/Unit Delay'
         */
        localDW->UnitDelay_DSTATE_nc = ((((uint32)localDW->UnitDelay1_DSTATE_c) ==
            CeADAR_e_OpeningWithHold) || (rtb_Comparison2_p &&
            (localDW->UnitDelay_DSTATE_nc)));

        /* End of Outputs for SubSystem: '<S345>/Signal Latch On With Reset' */

        /* If: '<S345>/If' incorporates:
         *  Constant: '<S347>/Constant'
         *  Constant: '<S348>/Constant'
         *  Logic: '<S345>/Logical3'
         *  RelationalOperator: '<S345>/Comparison'
         *  RelationalOperator: '<S345>/Comparison1'
         */
        rtPrevAction = localDW->If_ActiveSubsystem_i;
        localDW->If_ActiveSubsystem_i = -1;
        if (((uint32)rtu_VeADAR_e_ActuationStates) == CeADAR_e_ClosingWithHold)
        {
            localDW->If_ActiveSubsystem_i = 0;
        }
        else if (rtb_Logical2_i)
        {
            localDW->If_ActiveSubsystem_i = 1;
        }
        else if ((localDW->UnitDelay_DSTATE_nc) && rtb_Comparison2_p)
        {
            localDW->If_ActiveSubsystem_i = 2;
        }
        else
        {
            if (((uint32)rtu_VeADAR_e_ActuationStates) ==
                    CeADAR_e_OpeningWithHold)
            {
                localDW->If_ActiveSubsystem_i = 3;
            }
        }

        switch (localDW->If_ActiveSubsystem_i)
        {
          case 0:
            if (localDW->If_ActiveSubsystem_i != rtPrevAction)
            {
                /* InitializeConditions for IfAction SubSystem: '<S345>/LearningCloseEndP6' incorporates:
                 *  ActionPort: '<S353>/Action Port'
                 */
                /* InitializeConditions for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S353>/Unit Delay'
                 */
                localDW->UnitDelay_DSTATE_d = 0.0F;

                /* End of InitializeConditions for SubSystem: '<S345>/LearningCloseEndP6' */

                /* SystemReset for IfAction SubSystem: '<S345>/LearningCloseEndP6' incorporates:
                 *  ActionPort: '<S353>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S353>/Counter Reset Enabled ' */
                /* SystemReset for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S359>/Unit Delay'
                 *  UnitDelay: '<S360>/Unit Delay'
                 */
                localDW->UnitDelay_DSTATE_ny = 0U;

                /* End of SystemReset for SubSystem: '<S353>/Counter Reset Enabled ' */

                /* SystemReset for Atomic SubSystem: '<S353>/EdgeFalling' */
                localDW->UnitDelay_DSTATE_es = false;

                /* End of SystemReset for SubSystem: '<S353>/EdgeFalling' */
                /* End of SystemReset for SubSystem: '<S345>/LearningCloseEndP6' */
            }

            /* Outputs for IfAction SubSystem: '<S345>/LearningCloseEndP6' incorporates:
             *  ActionPort: '<S353>/Action Port'
             */
            /* Sum: '<S353>/Sum' incorporates:
             *  UnitDelay: '<S353>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_d = rtu_VeADAR_Pct_WEDSlndPosAct -
                localDW->UnitDelay_DSTATE_d;

            /* Abs: '<S353>/Abs' incorporates:
             *  UnitDelay: '<S353>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_d = fabsf(localDW->UnitDelay_DSTATE_d);

            /* Outputs for Atomic SubSystem: '<S353>/Counter Reset Enabled ' */
            /* Switch: '<S359>/Switch2' incorporates:
             *  Constant: '<S359>/Constant Value2'
             *  Constant: '<S365>/Calib'
             *  Logic: '<S353>/Logical Operator'
             *  RelationalOperator: '<S353>/Relational Operator'
             *  Switch: '<S359>/Switch'
             *  UnitDelay: '<S353>/Unit Delay'
             *  UnitDelay: '<S359>/Unit Delay'
             */
            if (localDW->UnitDelay_DSTATE_d > KeADAR_Pct_WEDStopThresh)
            {
                localDW->UnitDelay_DSTATE_ny = 0U;
            }
            else
            {
                /* UnitDelay: '<S359>/Unit Delay' incorporates:
                 *  Constant: '<S359>/Constant Value1'
                 *  Sum: '<S359>/Subtraction'
                 *  Switch: '<S359>/Switch2'
                 */
                localDW->UnitDelay_DSTATE_ny = (uint16)(((uint32)
                    localDW->UnitDelay_DSTATE_ny) + 1U);
            }

            /* End of Switch: '<S359>/Switch2' */
            /* End of Outputs for SubSystem: '<S353>/Counter Reset Enabled ' */

            /* Abs: '<S353>/Abs1' incorporates:
             *  UnitDelay: '<S353>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_d = fabsf(rtu_ADAI_I_WEDSlndCurrAct);

            /* Outputs for Atomic SubSystem: '<S353>/EdgeFalling' */
            /* Logic: '<S360>/AND' incorporates:
             *  Logic: '<S360>/OR1'
             *  UnitDelay: '<S360>/Unit Delay'
             */
            rtb_Comparison2_p = ((!rtu_CloseTimerActive) &&
                                 (localDW->UnitDelay_DSTATE_es));

            /* Update for UnitDelay: '<S360>/Unit Delay' */
            localDW->UnitDelay_DSTATE_es = rtu_CloseTimerActive;

            /* End of Outputs for SubSystem: '<S353>/EdgeFalling' */

            /* If: '<S353>/If' incorporates:
             *  Constant: '<S362>/Calib'
             *  Constant: '<S363>/Calib'
             *  Constant: '<S364>/Calib'
             *  Constant: '<S366>/Calib'
             *  Logic: '<S353>/Logical Operator1'
             *  RelationalOperator: '<S353>/Relational Operator1'
             *  RelationalOperator: '<S353>/Relational Operator2'
             *  RelationalOperator: '<S353>/Relational Operator3'
             *  RelationalOperator: '<S353>/Relational Operator4'
             *  UnitDelay: '<S353>/Unit Delay'
             *  UnitDelay: '<S359>/Unit Delay'
             */
            if (((((((sint32)localDW->UnitDelay_DSTATE_ny) >= ((sint32)
                     KeADAR_n_WEDStopEndStopCnt)) &&
                    (rtu_VeADAR_Pct_WEDSlndPosAct <=
                     KeADAR_Pct_CloseThrshEnergizedMax)) &&
                    (rtu_VeADAR_Pct_WEDSlndPosAct >=
                     KeADAR_Pct_CloseThrshEnergizedMin)) &&
                    (localDW->UnitDelay_DSTATE_d >= KeADAR_I_EnergizedCrrtThrsh))
                && rtb_Comparison2_p)
            {
                /* Outputs for IfAction SubSystem: '<S353>/EndStopLearned' incorporates:
                 *  ActionPort: '<S361>/Action Port'
                 */
                /* If: '<S361>/If' incorporates:
                 *  Constant: '<S367>/Constant'
                 *  Constant: '<S368>/Constant'
                 *  RelationalOperator: '<S361>/Comparison1'
                 *  RelationalOperator: '<S361>/Comparison6'
                 */
                if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_LeftWED)
                {
                    /* Outputs for IfAction SubSystem: '<S361>/LeftWED' incorporates:
                     *  ActionPort: '<S369>/Action Port'
                     */
                    /* Sum: '<S369>/Sum' incorporates:
                     *  Constant: '<S369>/Constant'
                     *  Constant: '<S369>/Constant1'
                     *  DataStoreRead: '<S369>/Data Store Read2'
                     */
                    VaADAR_Cnt_LftEndStpLearning_DS[3] = (sint8)
                        (VaADAR_Cnt_LftEndStpLearning_DS[3] + 1);

                    /* Assignment: '<S369>/Assignment' incorporates:
                     *  Constant: '<S369>/Constant1'
                     *  DataStoreWrite: '<S369>/Data Store Write2'
                     */
                    NaADAR_Pct_LftEndStp[3] = rtu_VeADAR_Pct_WEDSlndPosAct;

                    /* End of Outputs for SubSystem: '<S361>/LeftWED' */
                }
                else
                {
                    if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_RightWED)
                    {
                        /* Outputs for IfAction SubSystem: '<S361>/RightWED' incorporates:
                         *  ActionPort: '<S370>/Action Port'
                         */
                        /* Sum: '<S370>/Sum' incorporates:
                         *  Constant: '<S370>/Constant1'
                         *  Constant: '<S370>/Constant2'
                         *  DataStoreRead: '<S370>/Data Store Read2'
                         */
                        VaADAR_Cnt_RtEndStpLearning_DS[3] = (sint8)
                            (VaADAR_Cnt_RtEndStpLearning_DS[3] + 1);

                        /* Assignment: '<S370>/Assignment' incorporates:
                         *  Constant: '<S370>/Constant1'
                         *  DataStoreWrite: '<S370>/Data Store Write2'
                         */
                        NaADAR_Pct_RtEndStp[3] = rtu_VeADAR_Pct_WEDSlndPosAct;

                        /* End of Outputs for SubSystem: '<S361>/RightWED' */
                    }
                }

                /* End of If: '<S361>/If' */
                /* End of Outputs for SubSystem: '<S353>/EndStopLearned' */
            }

            /* End of If: '<S353>/If' */

            /* Update for UnitDelay: '<S353>/Unit Delay' */
            localDW->UnitDelay_DSTATE_d = rtu_VeADAR_Pct_WEDSlndPosAct;

            /* End of Outputs for SubSystem: '<S345>/LearningCloseEndP6' */
            break;

          case 1:
            if (localDW->If_ActiveSubsystem_i != rtPrevAction)
            {
                /* InitializeConditions for IfAction SubSystem: '<S345>/LearningCloseP5' incorporates:
                 *  ActionPort: '<S354>/Action Port'
                 */
                /* InitializeConditions for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S354>/Unit Delay1'
                 */
                localDW->UnitDelay1_DSTATE = false;

                /* End of InitializeConditions for SubSystem: '<S345>/LearningCloseP5' */

                /* SystemReset for IfAction SubSystem: '<S345>/LearningCloseP5' incorporates:
                 *  ActionPort: '<S354>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S354>/Stop Watch Reset Enabled' */
                /* SystemReset for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S371>/Unit Delay'
                 *  UnitDelay: '<S378>/Unit Delay'
                 */
                localDW->UnitDelay_DSTATE_f = 0.0F;

                /* End of SystemReset for SubSystem: '<S354>/Stop Watch Reset Enabled' */

                /* SystemReset for Atomic SubSystem: '<S354>/EdgeRising' */
                localDW->UnitDelay_DSTATE_a = false;

                /* End of SystemReset for SubSystem: '<S354>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S345>/LearningCloseP5' */
            }

            /* Outputs for IfAction SubSystem: '<S345>/LearningCloseP5' incorporates:
             *  ActionPort: '<S354>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S354>/Stop Watch Reset Enabled' */
            /* Switch: '<S378>/Switch' incorporates:
             *  Constant: '<S373>/Calib'
             *  Constant: '<S378>/Constant Value2'
             *  Logic: '<S354>/Logical Operator2'
             *  Sum: '<S378>/Subtraction'
             *  UnitDelay: '<S354>/Unit Delay1'
             *  UnitDelay: '<S378>/Unit Delay'
             */
            if (!localDW->UnitDelay1_DSTATE)
            {
                localDW->UnitDelay_DSTATE_f = 0.0F;
            }
            else
            {
                localDW->UnitDelay_DSTATE_f += HeADAR_t_FastTEA_dT;
            }

            /* End of Switch: '<S378>/Switch' */
            /* End of Outputs for SubSystem: '<S354>/Stop Watch Reset Enabled' */

            /* RelationalOperator: '<S354>/Relational Operator1' incorporates:
             *  Constant: '<S377>/Calib'
             *  UnitDelay: '<S378>/Unit Delay'
             */
            rtb_Comparison2_p = (localDW->UnitDelay_DSTATE_f >=
                                 KeADAR_t_SSCloseTmr4Learning);

            /* Outputs for Atomic SubSystem: '<S354>/EdgeRising' */
            /* Logic: '<S371>/AND' incorporates:
             *  Logic: '<S371>/OR1'
             *  UnitDelay: '<S371>/Unit Delay'
             */
            rtb_Logical2_i = (rtb_Comparison2_p && (!localDW->UnitDelay_DSTATE_a));

            /* Update for UnitDelay: '<S371>/Unit Delay' */
            localDW->UnitDelay_DSTATE_a = rtb_Comparison2_p;

            /* End of Outputs for SubSystem: '<S354>/EdgeRising' */

            /* If: '<S354>/If' incorporates:
             *  Abs: '<S354>/Abs1'
             *  Constant: '<S374>/Calib'
             *  Constant: '<S375>/Calib'
             *  Constant: '<S376>/Calib'
             *  Logic: '<S354>/Logical Operator1'
             *  RelationalOperator: '<S354>/Relational Operator2'
             *  RelationalOperator: '<S354>/Relational Operator3'
             *  RelationalOperator: '<S354>/Relational Operator4'
             */
            if ((((rtu_VeADAR_Pct_WEDSlndPosAct <=
                    KeADAR_Pct_CloseThrshDeenergizedMax) &&
                    (rtu_VeADAR_Pct_WEDSlndPosAct >=
                     KeADAR_Pct_CloseThrshDeenergizedMin)) && rtb_Logical2_i) &&
                (fabsf(rtu_ADAI_I_WEDSlndCurrAct) <=
                    KeADAR_I_DeenergizedCrrtThrsh))
            {
                /* Outputs for IfAction SubSystem: '<S354>/EndStopLearned' incorporates:
                 *  ActionPort: '<S372>/Action Port'
                 */
                /* If: '<S372>/If' incorporates:
                 *  Constant: '<S379>/Constant'
                 *  Constant: '<S380>/Constant'
                 *  RelationalOperator: '<S372>/Comparison1'
                 *  RelationalOperator: '<S372>/Comparison6'
                 */
                if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_LeftWED)
                {
                    /* Outputs for IfAction SubSystem: '<S372>/LeftWED' incorporates:
                     *  ActionPort: '<S381>/Action Port'
                     */
                    /* Sum: '<S381>/Sum' incorporates:
                     *  Constant: '<S381>/Constant'
                     *  Constant: '<S381>/Constant1'
                     *  DataStoreRead: '<S381>/Data Store Read2'
                     */
                    VaADAR_Cnt_LftEndStpLearning_DS[2] = (sint8)
                        (VaADAR_Cnt_LftEndStpLearning_DS[2] + 1);

                    /* Assignment: '<S381>/Assignment' incorporates:
                     *  Constant: '<S381>/Constant1'
                     *  DataStoreWrite: '<S381>/Data Store Write2'
                     */
                    NaADAR_Pct_LftEndStp[2] = rtu_VeADAR_Pct_WEDSlndPosAct;

                    /* End of Outputs for SubSystem: '<S372>/LeftWED' */
                }
                else
                {
                    if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_RightWED)
                    {
                        /* Outputs for IfAction SubSystem: '<S372>/RightWED' incorporates:
                         *  ActionPort: '<S382>/Action Port'
                         */
                        /* Sum: '<S382>/Sum' incorporates:
                         *  Constant: '<S382>/Constant1'
                         *  Constant: '<S382>/Constant3'
                         *  DataStoreRead: '<S382>/Data Store Read2'
                         */
                        VaADAR_Cnt_RtEndStpLearning_DS[2] = (sint8)
                            (VaADAR_Cnt_RtEndStpLearning_DS[2] + 1);

                        /* Assignment: '<S382>/Assignment' incorporates:
                         *  Constant: '<S382>/Constant1'
                         *  DataStoreWrite: '<S382>/Data Store Write2'
                         */
                        NaADAR_Pct_RtEndStp[2] = rtu_VeADAR_Pct_WEDSlndPosAct;

                        /* End of Outputs for SubSystem: '<S372>/RightWED' */
                    }
                }

                /* End of If: '<S372>/If' */
                /* End of Outputs for SubSystem: '<S354>/EndStopLearned' */
            }

            /* End of If: '<S354>/If' */

            /* Update for UnitDelay: '<S354>/Unit Delay1' incorporates:
             *  Constant: '<S354>/Constant1'
             */
            localDW->UnitDelay1_DSTATE = true;

            /* End of Outputs for SubSystem: '<S345>/LearningCloseP5' */
            break;

          case 2:
            if (localDW->If_ActiveSubsystem_i != rtPrevAction)
            {
                /* InitializeConditions for IfAction SubSystem: '<S345>/LearningOpenP2' incorporates:
                 *  ActionPort: '<S356>/Action Port'
                 */
                /* InitializeConditions for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S356>/Unit Delay'
                 */
                localDW->UnitDelay_DSTATE_p = false;

                /* End of InitializeConditions for SubSystem: '<S345>/LearningOpenP2' */

                /* SystemReset for IfAction SubSystem: '<S345>/LearningOpenP2' incorporates:
                 *  ActionPort: '<S356>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S356>/Stop Watch Reset Enabled' */
                /* SystemReset for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S395>/Unit Delay'
                 *  UnitDelay: '<S402>/Unit Delay'
                 */
                localDW->UnitDelay_DSTATE_j = 0.0F;

                /* End of SystemReset for SubSystem: '<S356>/Stop Watch Reset Enabled' */

                /* SystemReset for Atomic SubSystem: '<S356>/EdgeRising' */
                localDW->UnitDelay_DSTATE_bs = false;

                /* End of SystemReset for SubSystem: '<S356>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S345>/LearningOpenP2' */
            }

            /* Outputs for IfAction SubSystem: '<S345>/LearningOpenP2' incorporates:
             *  ActionPort: '<S356>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S356>/Stop Watch Reset Enabled' */
            /* Switch: '<S402>/Switch' incorporates:
             *  Constant: '<S397>/Calib'
             *  Constant: '<S402>/Constant Value2'
             *  Logic: '<S356>/Logical Operator'
             *  Sum: '<S402>/Subtraction'
             *  UnitDelay: '<S356>/Unit Delay'
             *  UnitDelay: '<S402>/Unit Delay'
             */
            if (!localDW->UnitDelay_DSTATE_p)
            {
                localDW->UnitDelay_DSTATE_j = 0.0F;
            }
            else
            {
                localDW->UnitDelay_DSTATE_j += HeADAR_t_FastTEA_dT;
            }

            /* End of Switch: '<S402>/Switch' */
            /* End of Outputs for SubSystem: '<S356>/Stop Watch Reset Enabled' */

            /* RelationalOperator: '<S356>/Relational Operator1' incorporates:
             *  Constant: '<S401>/Calib'
             *  UnitDelay: '<S402>/Unit Delay'
             */
            rtb_Comparison2_p = (localDW->UnitDelay_DSTATE_j >=
                                 KeADAR_t_SSOpenTmr4Learning);

            /* Outputs for Atomic SubSystem: '<S356>/EdgeRising' */
            /* Logic: '<S395>/AND' incorporates:
             *  Logic: '<S395>/OR1'
             *  UnitDelay: '<S395>/Unit Delay'
             */
            rtb_Logical2_i = (rtb_Comparison2_p &&
                              (!localDW->UnitDelay_DSTATE_bs));

            /* Update for UnitDelay: '<S395>/Unit Delay' */
            localDW->UnitDelay_DSTATE_bs = rtb_Comparison2_p;

            /* End of Outputs for SubSystem: '<S356>/EdgeRising' */

            /* If: '<S356>/If' incorporates:
             *  Abs: '<S356>/Abs1'
             *  Constant: '<S398>/Calib'
             *  Constant: '<S399>/Calib'
             *  Constant: '<S400>/Calib'
             *  Logic: '<S356>/Logical Operator1'
             *  RelationalOperator: '<S356>/Relational Operator2'
             *  RelationalOperator: '<S356>/Relational Operator3'
             *  RelationalOperator: '<S356>/Relational Operator4'
             */
            if ((((rtu_VeADAR_Pct_WEDSlndPosAct <=
                    KeADAR_Pct_OpenThrshDeenergizedMax) &&
                    (rtu_VeADAR_Pct_WEDSlndPosAct >=
                     KeADAR_Pct_OpenThrshDeenergizedMin)) && rtb_Logical2_i) &&
                    (fabsf(rtu_ADAI_I_WEDSlndCurrAct) <=
                     KeADAR_I_DeenergizedCrrtThrsh))
            {
                /* Outputs for IfAction SubSystem: '<S356>/EndStopLearned' incorporates:
                 *  ActionPort: '<S396>/Action Port'
                 */
                /* If: '<S396>/If' incorporates:
                 *  Constant: '<S403>/Constant'
                 *  Constant: '<S404>/Constant'
                 *  RelationalOperator: '<S396>/Comparison1'
                 *  RelationalOperator: '<S396>/Comparison6'
                 */
                if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_LeftWED)
                {
                    /* Outputs for IfAction SubSystem: '<S396>/LeftWED' incorporates:
                     *  ActionPort: '<S405>/Action Port'
                     */
                    /* Sum: '<S405>/Sum' incorporates:
                     *  Constant: '<S405>/Constant'
                     *  Constant: '<S405>/Constant2'
                     *  DataStoreRead: '<S405>/Data Store Read2'
                     */
                    VaADAR_Cnt_LftEndStpLearning_DS[1] = (sint8)
                        (VaADAR_Cnt_LftEndStpLearning_DS[1] + 1);

                    /* Assignment: '<S405>/Assignment' incorporates:
                     *  Constant: '<S405>/Constant2'
                     *  DataStoreWrite: '<S405>/Data Store Write2'
                     */
                    NaADAR_Pct_LftEndStp[1] = rtu_VeADAR_Pct_WEDSlndPosAct;

                    /* End of Outputs for SubSystem: '<S396>/LeftWED' */
                }
                else
                {
                    if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_RightWED)
                    {
                        /* Outputs for IfAction SubSystem: '<S396>/RightWED' incorporates:
                         *  ActionPort: '<S406>/Action Port'
                         */
                        /* Sum: '<S406>/Sum' incorporates:
                         *  Constant: '<S406>/Constant2'
                         *  Constant: '<S406>/Constant3'
                         *  DataStoreRead: '<S406>/Data Store Read2'
                         */
                        VaADAR_Cnt_RtEndStpLearning_DS[1] = (sint8)
                            (VaADAR_Cnt_RtEndStpLearning_DS[1] + 1);

                        /* Assignment: '<S406>/Assignment' incorporates:
                         *  Constant: '<S406>/Constant2'
                         *  DataStoreWrite: '<S406>/Data Store Write2'
                         */
                        NaADAR_Pct_RtEndStp[1] = rtu_VeADAR_Pct_WEDSlndPosAct;

                        /* End of Outputs for SubSystem: '<S396>/RightWED' */
                    }
                }

                /* End of If: '<S396>/If' */
                /* End of Outputs for SubSystem: '<S356>/EndStopLearned' */
            }

            /* End of If: '<S356>/If' */

            /* Update for UnitDelay: '<S356>/Unit Delay' incorporates:
             *  Constant: '<S356>/Constant'
             */
            localDW->UnitDelay_DSTATE_p = true;

            /* End of Outputs for SubSystem: '<S345>/LearningOpenP2' */
            break;

          case 3:
            if (localDW->If_ActiveSubsystem_i != rtPrevAction)
            {
                /* InitializeConditions for IfAction SubSystem: '<S345>/LearningOpenP1' incorporates:
                 *  ActionPort: '<S355>/Action Port'
                 */
                /* InitializeConditions for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S355>/Unit Delay'
                 */
                localDW->UnitDelay_DSTATE_e = 0.0F;

                /* End of InitializeConditions for SubSystem: '<S345>/LearningOpenP1' */

                /* SystemReset for IfAction SubSystem: '<S345>/LearningOpenP1' incorporates:
                 *  ActionPort: '<S355>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S355>/Counter Reset Enabled ' */
                /* SystemReset for If: '<S345>/If' incorporates:
                 *  UnitDelay: '<S383>/Unit Delay'
                 *  UnitDelay: '<S384>/Unit Delay'
                 */
                localDW->UnitDelay_DSTATE_b = 0U;

                /* End of SystemReset for SubSystem: '<S355>/Counter Reset Enabled ' */

                /* SystemReset for Atomic SubSystem: '<S355>/EdgeFalling' */
                localDW->UnitDelay_DSTATE_l = false;

                /* End of SystemReset for SubSystem: '<S355>/EdgeFalling' */
                /* End of SystemReset for SubSystem: '<S345>/LearningOpenP1' */
            }

            /* Outputs for IfAction SubSystem: '<S345>/LearningOpenP1' incorporates:
             *  ActionPort: '<S355>/Action Port'
             */
            /* Sum: '<S355>/Sum' incorporates:
             *  UnitDelay: '<S355>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_e = rtu_VeADAR_Pct_WEDSlndPosAct -
                localDW->UnitDelay_DSTATE_e;

            /* Abs: '<S355>/Abs' incorporates:
             *  UnitDelay: '<S355>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_e = fabsf(localDW->UnitDelay_DSTATE_e);

            /* Outputs for Atomic SubSystem: '<S355>/Counter Reset Enabled ' */
            /* Switch: '<S383>/Switch2' incorporates:
             *  Constant: '<S383>/Constant Value2'
             *  Constant: '<S389>/Calib'
             *  Logic: '<S355>/Logical Operator'
             *  RelationalOperator: '<S355>/Relational Operator'
             *  Switch: '<S383>/Switch'
             *  UnitDelay: '<S355>/Unit Delay'
             *  UnitDelay: '<S383>/Unit Delay'
             */
            if (localDW->UnitDelay_DSTATE_e > KeADAR_Pct_WEDStopThresh)
            {
                localDW->UnitDelay_DSTATE_b = 0U;
            }
            else
            {
                /* UnitDelay: '<S383>/Unit Delay' incorporates:
                 *  Constant: '<S383>/Constant Value1'
                 *  Sum: '<S383>/Subtraction'
                 *  Switch: '<S383>/Switch2'
                 */
                localDW->UnitDelay_DSTATE_b = (uint16)(((uint32)
                    localDW->UnitDelay_DSTATE_b) + 1U);
            }

            /* End of Switch: '<S383>/Switch2' */
            /* End of Outputs for SubSystem: '<S355>/Counter Reset Enabled ' */

            /* Abs: '<S355>/Abs1' incorporates:
             *  UnitDelay: '<S355>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_e = fabsf(rtu_ADAI_I_WEDSlndCurrAct);

            /* Outputs for Atomic SubSystem: '<S355>/EdgeFalling' */
            /* Logic: '<S384>/AND' incorporates:
             *  Logic: '<S384>/OR1'
             *  UnitDelay: '<S384>/Unit Delay'
             */
            rtb_Comparison2_p = ((!rtu_OpenTimerActive) &&
                                 (localDW->UnitDelay_DSTATE_l));

            /* Update for UnitDelay: '<S384>/Unit Delay' */
            localDW->UnitDelay_DSTATE_l = rtu_OpenTimerActive;

            /* End of Outputs for SubSystem: '<S355>/EdgeFalling' */

            /* If: '<S355>/If' incorporates:
             *  Constant: '<S386>/Calib'
             *  Constant: '<S387>/Calib'
             *  Constant: '<S388>/Calib'
             *  Constant: '<S390>/Calib'
             *  Logic: '<S355>/Logical Operator1'
             *  RelationalOperator: '<S355>/Relational Operator1'
             *  RelationalOperator: '<S355>/Relational Operator2'
             *  RelationalOperator: '<S355>/Relational Operator3'
             *  RelationalOperator: '<S355>/Relational Operator4'
             *  UnitDelay: '<S355>/Unit Delay'
             *  UnitDelay: '<S383>/Unit Delay'
             */
            if (((((((sint32)localDW->UnitDelay_DSTATE_b) >= ((sint32)
                     KeADAR_n_WEDStopEndStopCnt)) &&
                    (rtu_VeADAR_Pct_WEDSlndPosAct <=
                     KeADAR_Pct_OpenThrshEnergizedMax)) &&
                    (rtu_VeADAR_Pct_WEDSlndPosAct >=
                     KeADAR_Pct_OpenThrshEnergizedMin)) &&
                    (localDW->UnitDelay_DSTATE_e >= KeADAR_I_EnergizedCrrtThrsh))
                && rtb_Comparison2_p)
            {
                /* Outputs for IfAction SubSystem: '<S355>/EndStopLearned' incorporates:
                 *  ActionPort: '<S385>/Action Port'
                 */
                /* If: '<S385>/If' incorporates:
                 *  Constant: '<S391>/Constant'
                 *  Constant: '<S392>/Constant'
                 *  RelationalOperator: '<S385>/Comparison1'
                 *  RelationalOperator: '<S385>/Comparison6'
                 */
                if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_LeftWED)
                {
                    /* Outputs for IfAction SubSystem: '<S385>/LeftWED' incorporates:
                     *  ActionPort: '<S393>/Action Port'
                     */
                    /* Sum: '<S393>/Sum' incorporates:
                     *  Constant: '<S393>/Constant'
                     *  Constant: '<S393>/Constant2'
                     *  DataStoreRead: '<S393>/Data Store Read2'
                     */
                    VaADAR_Cnt_LftEndStpLearning_DS[0] = (sint8)
                        (VaADAR_Cnt_LftEndStpLearning_DS[0] + 1);

                    /* Assignment: '<S393>/Assignment' incorporates:
                     *  Constant: '<S393>/Constant2'
                     *  DataStoreWrite: '<S393>/Data Store Write2'
                     */
                    NaADAR_Pct_LftEndStp[0] = rtu_VeADAR_Pct_WEDSlndPosAct;

                    /* End of Outputs for SubSystem: '<S385>/LeftWED' */
                }
                else
                {
                    if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_RightWED)
                    {
                        /* Outputs for IfAction SubSystem: '<S385>/RightWED' incorporates:
                         *  ActionPort: '<S394>/Action Port'
                         */
                        /* Sum: '<S394>/Sum' incorporates:
                         *  Constant: '<S394>/Constant2'
                         *  Constant: '<S394>/Constant3'
                         *  DataStoreRead: '<S394>/Data Store Read2'
                         */
                        VaADAR_Cnt_RtEndStpLearning_DS[0] = (sint8)
                            (VaADAR_Cnt_RtEndStpLearning_DS[0] + 1);

                        /* Assignment: '<S394>/Assignment' incorporates:
                         *  Constant: '<S394>/Constant2'
                         *  DataStoreWrite: '<S394>/Data Store Write2'
                         */
                        NaADAR_Pct_RtEndStp[0] = rtu_VeADAR_Pct_WEDSlndPosAct;

                        /* End of Outputs for SubSystem: '<S385>/RightWED' */
                    }
                }

                /* End of If: '<S385>/If' */
                /* End of Outputs for SubSystem: '<S355>/EndStopLearned' */
            }

            /* End of If: '<S355>/If' */

            /* Update for UnitDelay: '<S355>/Unit Delay' */
            localDW->UnitDelay_DSTATE_e = rtu_VeADAR_Pct_WEDSlndPosAct;

            /* End of Outputs for SubSystem: '<S345>/LearningOpenP1' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of If: '<S345>/If' */

        /* Update for UnitDelay: '<S345>/Unit Delay2' */
        localDW->UnitDelay2_DSTATE = rtu_VeADAR_e_ActuationStates;

        /* Update for UnitDelay: '<S345>/Unit Delay1' */
        localDW->UnitDelay1_DSTATE_c = rtu_VeADAR_e_ActuationStates;

        /* End of Outputs for SubSystem: '<S11>/EndStopLearning' */
        break;

      case 1:
        if (localDW->If_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S11>/TA_Learning' incorporates:
             *  ActionPort: '<S346>/Action Port'
             */
            /* InitializeConditions for If: '<S11>/If' incorporates:
             *  UnitDelay: '<S346>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S11>/TA_Learning' */

            /* SystemReset for IfAction SubSystem: '<S11>/TA_Learning' incorporates:
             *  ActionPort: '<S346>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S346>/Counter Reset Enabled 1' */
            /* SystemReset for If: '<S11>/If' incorporates:
             *  UnitDelay: '<S407>/Unit Delay'
             *  UnitDelay: '<S408>/Unit Delay'
             */
            localDW->UnitDelay_DSTATE_n = 0U;

            /* End of SystemReset for SubSystem: '<S346>/Counter Reset Enabled 1' */

            /* SystemReset for Atomic SubSystem: '<S346>/EdgeRising' */
            localDW->UnitDelay_DSTATE_o = false;

            /* End of SystemReset for SubSystem: '<S346>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S11>/TA_Learning' */
        }

        /* Outputs for IfAction SubSystem: '<S11>/TA_Learning' incorporates:
         *  ActionPort: '<S346>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S346>/Counter Reset Enabled 1' */
        /* Switch: '<S407>/Switch2' incorporates:
         *  Abs: '<S346>/Abs'
         *  Constant: '<S407>/Constant Value2'
         *  Constant: '<S409>/Calib'
         *  Constant: '<S410>/Calib'
         *  Constant: '<S412>/Calib'
         *  Logic: '<S346>/Logical Operator'
         *  Logic: '<S346>/Logical Operator1'
         *  RelationalOperator: '<S346>/Relational Operator2'
         *  RelationalOperator: '<S346>/Relational Operator3'
         *  RelationalOperator: '<S346>/Relational Operator5'
         *  Sum: '<S346>/Add'
         *  Switch: '<S407>/Switch'
         *  UnitDelay: '<S346>/Unit Delay'
         *  UnitDelay: '<S407>/Unit Delay'
         */
        if (((fabsf(rtu_VeADAR_L_WEDSlndPosAct - localDW->UnitDelay_DSTATE) >
                KeADAR_v_TASolSpdThrsh) || (rtu_VeADAR_L_WEDSlndPosAct <
                KeADAR_L_TAMin)) || (rtu_VeADAR_L_WEDSlndPosAct > KeADAR_L_TAMax))
        {
            localDW->UnitDelay_DSTATE_n = 0U;
        }
        else
        {
            /* UnitDelay: '<S407>/Unit Delay' incorporates:
             *  Constant: '<S407>/Constant Value1'
             *  Sum: '<S407>/Subtraction'
             *  Switch: '<S407>/Switch2'
             */
            localDW->UnitDelay_DSTATE_n = (uint16)(((uint32)
                localDW->UnitDelay_DSTATE_n) + 1U);
        }

        /* End of Switch: '<S407>/Switch2' */
        /* End of Outputs for SubSystem: '<S346>/Counter Reset Enabled 1' */

        /* RelationalOperator: '<S346>/Relational Operator4' incorporates:
         *  Constant: '<S411>/Calib'
         *  UnitDelay: '<S407>/Unit Delay'
         */
        rtb_Comparison2_p = (((sint32)localDW->UnitDelay_DSTATE_n) >= ((sint32)
                              KeADAR_n_WEDStopEndStopCnt));

        /* Outputs for Atomic SubSystem: '<S346>/EdgeRising' */
        /* Logic: '<S408>/OR1' incorporates:
         *  UnitDelay: '<S408>/Unit Delay'
         */
        rtb_Logical2_i = !localDW->UnitDelay_DSTATE_o;

        /* Update for UnitDelay: '<S408>/Unit Delay' */
        localDW->UnitDelay_DSTATE_o = rtb_Comparison2_p;

        /* Outputs for Enabled SubSystem: '<S346>/TA Update' incorporates:
         *  EnablePort: '<S413>/Enable'
         */
        if (rtb_Comparison2_p && rtb_Logical2_i)
        {
            /* If: '<S413>/If' incorporates:
             *  Constant: '<S414>/Constant'
             *  Constant: '<S415>/Constant'
             *  RelationalOperator: '<S413>/Comparison1'
             *  RelationalOperator: '<S413>/Comparison6'
             */
            if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_LeftWED)
            {
                /* Outputs for IfAction SubSystem: '<S413>/LeftWED' incorporates:
                 *  ActionPort: '<S416>/Action Port'
                 */
                /* DataStoreWrite: '<S416>/Data Store Write' incorporates:
                 *  DataStoreRead: '<S416>/Data Store Read'
                 */
                for (i = 0; i < 9; i++)
                {
                    tmp[i] = VaADAR_L_LftTAPos_DS[i + 1];
                }

                tmp[9] = rtu_VeADAR_L_WEDSlndPosAct;
                for (i = 0; i < 10; i++)
                {
                    VaADAR_L_LftTAPos_DS[(i)] = tmp[i];
                }

                /* End of DataStoreWrite: '<S416>/Data Store Write' */

                /* DataStoreWrite: '<S416>/Data Store Write1' incorporates:
                 *  Constant: '<S416>/Constant'
                 *  DataStoreRead: '<S416>/Data Store Read2'
                 *  Sum: '<S416>/Sum'
                 */
                VeADAR_Cnt_LftTAPosLearning_DS = (sint8)
                    (VeADAR_Cnt_LftTAPosLearning_DS + 1);

                /* End of Outputs for SubSystem: '<S413>/LeftWED' */
            }
            else
            {
                if (((uint32)rtu_VeADAR_e_WEDID) == CeADAR_e_RightWED)
                {
                    /* Outputs for IfAction SubSystem: '<S413>/RightWED' incorporates:
                     *  ActionPort: '<S417>/Action Port'
                     */
                    /* DataStoreWrite: '<S417>/Data Store Write' incorporates:
                     *  DataStoreRead: '<S417>/Data Store Read'
                     */
                    for (i = 0; i < 9; i++)
                    {
                        tmp[i] = VaADAR_L_RtTAPos_DS[i + 1];
                    }

                    tmp[9] = rtu_VeADAR_L_WEDSlndPosAct;
                    for (i = 0; i < 10; i++)
                    {
                        VaADAR_L_RtTAPos_DS[(i)] = tmp[i];
                    }

                    /* End of DataStoreWrite: '<S417>/Data Store Write' */

                    /* DataStoreWrite: '<S417>/Data Store Write1' incorporates:
                     *  Constant: '<S417>/Constant'
                     *  DataStoreRead: '<S417>/Data Store Read2'
                     *  Sum: '<S417>/Sum'
                     */
                    VeADAR_Cnt_RtTAPosLearning_DS = (sint8)
                        (VeADAR_Cnt_RtTAPosLearning_DS + 1);

                    /* End of Outputs for SubSystem: '<S413>/RightWED' */
                }
            }

            /* End of If: '<S413>/If' */
        }

        /* End of Outputs for SubSystem: '<S346>/TA Update' */
        /* End of Outputs for SubSystem: '<S346>/EdgeRising' */

        /* Update for UnitDelay: '<S346>/Unit Delay' incorporates:
         *  Logic: '<S408>/AND'
         */
        localDW->UnitDelay_DSTATE = rtu_VeADAR_L_WEDSlndPosAct;

        /* End of Outputs for SubSystem: '<S11>/TA_Learning' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of If: '<S11>/If' */
}

#endif

/* Model step function for TID1 */
FUNC(void, ADAR_CODE) ADAR_FastTEA(void) /* Explicit Task: FastTEA */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    float32 rtb_TmpSignalConversionAtVeADIB_I_WEDRig;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    float32 rtb_TmpSignalConversionAtVeADIB_I_WEDLef;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    float32 rtb_DataStoreRead_dy[10];

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    sint8 rtb_DataStoreRead5_f[4];

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    boolean rtb_RelationalOperator3_b;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    boolean rtb_RelationalOperator4_hx;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    boolean rtb_OR1_a;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    float32 rtb_Merge_a;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    float32 rtb_Sum2_h;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    float32 rtb_TmpSignalConversionAtVePMDR_U_HB_Sys;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    float32 rtb_TmpSignalConversionAtVeAATR_T_EstAmb;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    TeRTMR_e_WEDLearningProcedure rtb_TmpSignalConversionAtVeRTMR_e_WEDLea;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    TeADCR_e_WEDActnCmnd rtb_TmpSignalConversionAtVeADCR_e_WEDLft;

#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    TeADCR_e_WEDActnCmnd rtb_TmpSignalConversionAtVeADCR_e_WEDRtC;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    sint32 i;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' incorporates:
     *  SubSystem: '<Root>/ADAR_FastTEA'
     */
    /* SignalConversion generated from: '<S1>/VePMDR_U_HB_SysVolt' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* SignalConversion generated from: '<S1>/VePMDR_U_HB_SysVolt' incorporates:
     *  Inport: '<Root>/VePMDR_U_HB_SysVolt'
     */
    (void)Rte_Read_VePMDR_U_HB_SysVolt_Value
        (&rtb_TmpSignalConversionAtVePMDR_U_HB_Sys);

    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&rtb_TmpSignalConversionAtVeAATR_T_EstAmb);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMDR_U_HB_SysVolt' */

    /* SignalConversion generated from: '<S1>/VeADIB_I_WEDRightCurrAct' incorporates:
     *  SignalConversion generated from: '<S1>/VeADCR_e_WEDRtCmndStat'
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns1_DC'
     */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* SignalConversion generated from: '<S1>/VeADIB_I_WEDRightCurrAct' incorporates:
     *  Inport: '<Root>/VeADIB_I_WEDRightCurrAct'
     */
    (void)Rte_Read_VeADIB_I_WEDRightCurrAct_Value
        (&rtb_TmpSignalConversionAtVeADIB_I_WEDRig);

    /* SignalConversion generated from: '<S1>/VeADCR_e_WEDRtCmndStat' incorporates:
     *  Inport: '<Root>/VeADCR_e_WEDRtCmndStat'
     */
    (void)Rte_Read_VeADCR_e_WEDRtCmndStat_Value
        (&rtb_TmpSignalConversionAtVeADCR_e_WEDRtC);

    /* SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns1_DC' incorporates:
     *  Inport: '<Root>/VeADIB_Pct_WED_Pwm_PosnSns1_DC'
     */
    (void)Rte_Read_VeADIB_Pct_WED_Pwm_PosnSns1_DC_Value
        (&ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pwm_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADIB_I_WEDRightCurrAct' */

    /* SignalConversion generated from: '<S1>/VeRTMR_e_WEDLearningProcedure' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* SignalConversion generated from: '<S1>/VeRTMR_e_WEDLearningProcedure' incorporates:
     *  Inport: '<Root>/VeRTMR_e_WEDLearningProcedure'
     */
    (void)Rte_Read_VeRTMR_e_WEDLearningProcedure_Value
        (&rtb_TmpSignalConversionAtVeRTMR_e_WEDLea);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRTMR_e_WEDLearningProcedure' */

    /* SignalConversion generated from: '<S1>/VeADIB_I_WEDLeftCurrAct' incorporates:
     *  SignalConversion generated from: '<S1>/VeADCR_e_WEDLftCmndStat'
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns2_DC'
     */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    /* SignalConversion generated from: '<S1>/VeADIB_I_WEDLeftCurrAct' incorporates:
     *  Inport: '<Root>/VeADIB_I_WEDLeftCurrAct'
     */
    (void)Rte_Read_VeADIB_I_WEDLeftCurrAct_Value
        (&rtb_TmpSignalConversionAtVeADIB_I_WEDLef);

    /* SignalConversion generated from: '<S1>/VeADCR_e_WEDLftCmndStat' incorporates:
     *  Inport: '<Root>/VeADCR_e_WEDLftCmndStat'
     */
    (void)Rte_Read_VeADCR_e_WEDLftCmndStat_Value
        (&rtb_TmpSignalConversionAtVeADCR_e_WEDLft);

    /* SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns2_DC' incorporates:
     *  Inport: '<Root>/VeADIB_Pct_WED_Pwm_PosnSns2_DC'
     */
    (void)Rte_Read_VeADIB_Pct_WED_Pwm_PosnSns2_DC_Value
        (&ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pw_p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADIB_I_WEDLeftCurrAct' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    /* Outputs for Function Call SubSystem: '<S1>/Left_WED' */
    for (i = 0; i < 10; i++)
    {
        /* DataStoreRead: '<S4>/Data Store Read' */
        rtb_DataStoreRead_dy[i] = VaADAR_L_LftTAPos_DS[(i)];
    }

    for (i = 0; i < 4; i++)
    {
        /* DataStoreRead: '<S4>/Data Store Read5' */
        rtb_DataStoreRead5_f[i] = VaADAR_Cnt_LftEndStpLearning_DS[(i)];
    }

    /* DataStoreRead: '<S4>/Data Store Read4' */
    ADAR_ac_B.Switch_h = NeADAR_L_LftTAPos;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/RTMRLearningRequired'
     */
    /* Logic: '<S16>/Logical4' incorporates:
     *  Constant: '<S420>/Constant'
     *  Constant: '<S422>/Calib'
     *  RelationalOperator: '<S16>/Comparison2'
     *  SignalConversion generated from: '<S1>/VeRTMR_e_WEDLearningProcedure'
     */
    ADAR_ac_B.AND_l = ((((uint32)rtb_TmpSignalConversionAtVeRTMR_e_WEDLea) ==
                        CeRTMR_e_WED_Active) || (KeADAR_b_LearningActiveOvrd));

    /* Outputs for Atomic SubSystem: '<S16>/EdgeRising' */
    /* Logic: '<S419>/OR1' incorporates:
     *  UnitDelay: '<S419>/Unit Delay'
     */
    rtb_OR1_a = !ADAR_ac_DW.UnitDelay_DSTATE_k;

    /* Update for UnitDelay: '<S419>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_k = ADAR_ac_B.AND_l;

    /* Outputs for Enabled SubSystem: '<S16>/If Action Subsystem' incorporates:
     *  EnablePort: '<S421>/Enable'
     */
    /* Logic: '<S419>/AND' */
    if ((ADAR_ac_B.AND_l) && rtb_OR1_a)
    {
        /* DataStoreWrite: '<S421>/Data Store Write1' */
        for (i = 0; i < 4; i++)
        {
            VaADAR_Cnt_LftEndStpLearning_DS[(i)] = 0;
        }

        /* End of DataStoreWrite: '<S421>/Data Store Write1' */

        /* DataStoreWrite: '<S421>/Data Store Write2' */
        for (i = 0; i < 10; i++)
        {
            VaADAR_L_LftTAPos_DS[(i)] = 0.0F;
        }

        /* End of DataStoreWrite: '<S421>/Data Store Write2' */
    }

    /* End of Logic: '<S419>/AND' */
    /* End of Outputs for SubSystem: '<S16>/If Action Subsystem' */
    /* End of Outputs for SubSystem: '<S16>/EdgeRising' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ADAC_Preprocessing'
     */
    /* RelationalOperator: '<S10>/Relational Operator2' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    rtb_OR1_a = (rtb_DataStoreRead5_f[0] != ADAR_ac_DW.UnitDelay2_DSTATE_p);

    /* UnitDelay: '<S10>/Unit Delay3' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    ADAR_ac_DW.UnitDelay2_DSTATE_p = ADAR_ac_DW.UnitDelay3_DSTATE_d;

    /* RelationalOperator: '<S10>/Relational Operator3' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    rtb_RelationalOperator3_b = (rtb_DataStoreRead5_f[1] !=
        ADAR_ac_DW.UnitDelay2_DSTATE_p);

    /* UnitDelay: '<S10>/Unit Delay4' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    ADAR_ac_DW.UnitDelay2_DSTATE_p = ADAR_ac_DW.UnitDelay4_DSTATE_d;

    /* RelationalOperator: '<S10>/Relational Operator4' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    rtb_RelationalOperator4_hx = (rtb_DataStoreRead5_f[2] !=
        ADAR_ac_DW.UnitDelay2_DSTATE_p);

    /* UnitDelay: '<S10>/Unit Delay5' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    ADAR_ac_DW.UnitDelay2_DSTATE_p = ADAR_ac_DW.UnitDelay5_DSTATE_p;

    /* Logic: '<S10>/Logical14' incorporates:
     *  RelationalOperator: '<S10>/Relational Operator5'
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    rtb_OR1_a = (((rtb_OR1_a || rtb_RelationalOperator3_b) ||
                  rtb_RelationalOperator4_hx) || (rtb_DataStoreRead5_f[3] !=
                  ADAR_ac_DW.UnitDelay2_DSTATE_p));

    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising1' */
    /* Logic: '<S291>/OR1' incorporates:
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_RelationalOperator3_b = !ADAR_ac_DW.UnitDelay_DSTATE_o1;

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_o1 = rtb_OR1_a;

    /* Outputs for Enabled SubSystem: '<S10>/EndStop_Process' */
    /* Logic: '<S291>/AND' incorporates:
     *  Constant: '<S14>/Constant'
     *  DataStoreRead: '<S4>/Data Store Read1'
     */
    ADAR_ac_EndStop_Process(rtb_OR1_a && rtb_RelationalOperator3_b,
                            NaADAR_Pct_LftEndStp[0], NaADAR_Pct_LftEndStp[1],
                            NaADAR_Pct_LftEndStp[2], NaADAR_Pct_LftEndStp[3],
                            CeADAR_e_LeftWED);

    /* End of Outputs for SubSystem: '<S10>/EndStop_Process' */
    /* End of Outputs for SubSystem: '<S10>/EdgeRising1' */

    /* RelationalOperator: '<S10>/Relational Operator' incorporates:
     *  DataStoreRead: '<S4>/Data Store Read3'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    rtb_OR1_a = (VeADAR_Cnt_LftTAPosLearning_DS != ADAR_ac_DW.UnitDelay_DSTATE_d);

    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising' */
    /* Logic: '<S290>/OR1' incorporates:
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_RelationalOperator3_b = !ADAR_ac_DW.UnitDelay_DSTATE_fu;

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_fu = rtb_OR1_a;

    /* Outputs for Enabled SubSystem: '<S10>/TA_Processing' */
    /* Logic: '<S290>/AND' incorporates:
     *  Constant: '<S14>/Constant'
     */
    ADAR_ac_TA_Processing(rtb_OR1_a && rtb_RelationalOperator3_b,
                          rtb_DataStoreRead_dy, CeADAR_e_LeftWED);

    /* End of Outputs for SubSystem: '<S10>/TA_Processing' */
    /* End of Outputs for SubSystem: '<S10>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S10>/LeftWED' incorporates:
     *  ActionPort: '<S295>/Action Port'
     */
    /* If: '<S10>/If' */
    ADAR_ac_LeftWED(ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pw_p,
                    rtb_TmpSignalConversionAtVeADIB_I_WEDLef,
                    (&(VeADAC_L_LftPosAct)), &ADAR_ac_B.LeftWED);

    /* End of Outputs for SubSystem: '<S10>/LeftWED' */

    /* Update for UnitDelay: '<S10>/Unit Delay2' */
    ADAR_ac_DW.UnitDelay2_DSTATE_p = rtb_DataStoreRead5_f[0];

    /* Update for UnitDelay: '<S10>/Unit Delay3' */
    ADAR_ac_DW.UnitDelay3_DSTATE_d = rtb_DataStoreRead5_f[1];

    /* Update for UnitDelay: '<S10>/Unit Delay4' */
    ADAR_ac_DW.UnitDelay4_DSTATE_d = rtb_DataStoreRead5_f[2];

    /* Update for UnitDelay: '<S10>/Unit Delay5' */
    ADAR_ac_DW.UnitDelay5_DSTATE_p = rtb_DataStoreRead5_f[3];

    /* Update for UnitDelay: '<S10>/Unit Delay' incorporates:
     *  DataStoreRead: '<S4>/Data Store Read3'
     */
    ADAR_ac_DW.UnitDelay_DSTATE_d = VeADAR_Cnt_LftTAPosLearning_DS;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ADAC_DtrmnActnSts'
     */
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S117>/Constant'
     *  Constant: '<S119>/Constant'
     *  Logic: '<S8>/Logical10'
     *  Logic: '<S8>/Logical4'
     *  Logic: '<S8>/Logical6'
     *  Logic: '<S8>/Logical8'
     *  RelationalOperator: '<S8>/Comparison6'
     *  RelationalOperator: '<S8>/Comparison7'
     *  Switch: '<S8>/Switch1'
     *  UnitDelay: '<S8>/Unit Delay1'
     *  UnitDelay: '<S8>/Unit Delay2'
     *  UnitDelay: '<S8>/Unit Delay3'
     *  UnitDelay: '<S8>/Unit Delay8'
     */
    if (((((uint32)rtb_TmpSignalConversionAtVeADCR_e_WEDLft) ==
            CeADCR_e_CmndOpen) && ((ADAR_ac_DW.UnitDelay1_DSTATE_p) ||
            (ADAR_ac_DW.UnitDelay3_DSTATE_e))) && (ADAR_ac_B.AND_l))
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S118>/Constant'
         */
        rtb_TmpSignalConversionAtVeADCR_e_WEDLft = CeADCR_e_CmndClsd;
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeADCR_e_WEDLft) ==
                CeADCR_e_CmndClsd) && ((ADAR_ac_DW.UnitDelay2_DSTATE_b) ||
                (ADAR_ac_DW.UnitDelay8_DSTATE_n4))) && (ADAR_ac_B.AND_l))
        {
            /* Switch: '<S8>/Switch1' incorporates:
             *  Constant: '<S120>/Constant'
             *  Switch: '<S8>/Switch'
             */
            rtb_TmpSignalConversionAtVeADCR_e_WEDLft = CeADCR_e_CmndOpen;
        }
    }

    /* End of Switch: '<S8>/Switch' */

    /* RelationalOperator: '<S8>/Comparison10' incorporates:
     *  Constant: '<S115>/Constant'
     */
    rtb_OR1_a = (((uint32)rtb_TmpSignalConversionAtVeADCR_e_WEDLft) ==
                 CeADCR_e_CmndOpen);

    /* RelationalOperator: '<S8>/Comparison13' incorporates:
     *  Constant: '<S116>/Constant'
     */
    rtb_RelationalOperator3_b = (((uint32)
        rtb_TmpSignalConversionAtVeADCR_e_WEDLft) == CeADCR_e_CmndClsd);

    /* If: '<S8>/If' incorporates:
     *  Constant: '<S121>/Calib'
     *  Constant: '<S122>/Calib'
     *  Logic: '<S8>/Logical1'
     *  Logic: '<S8>/Logical14'
     *  Logic: '<S8>/Logical7'
     *  Logic: '<S8>/Logical9'
     *  RelationalOperator: '<S8>/Comparison'
     *  RelationalOperator: '<S8>/Comparison1'
     *  RelationalOperator: '<S8>/Comparison3'
     *  RelationalOperator: '<S8>/Comparison4'
     *  UnitDelay: '<S4>/Unit Delay1'
     *  UnitDelay: '<S4>/Unit Delay3'
     *  UnitDelay: '<S4>/Unit Delay7'
     *  UnitDelay: '<S4>/Unit Delay8'
     */
    rtPrevAction = ADAR_ac_DW.If_ActiveSubsystem_l;
    if (rtb_OR1_a && (VeADAC_L_LftPosAct > KeADAR_L_WEDActuation_OpenThr))
    {
        ADAR_ac_DW.If_ActiveSubsystem_l = 0;
    }
    else if ((ADAR_ac_DW.UnitDelay7_DSTATE) && rtb_OR1_a)
    {
        ADAR_ac_DW.If_ActiveSubsystem_l = 1;
    }
    else if (rtb_RelationalOperator3_b && (VeADAC_L_LftPosAct <
              KeADAR_L_WEDActuation_ClsdThr))
    {
        ADAR_ac_DW.If_ActiveSubsystem_l = 2;
    }
    else if (rtb_RelationalOperator3_b && (ADAR_ac_DW.UnitDelay8_DSTATE_n))
    {
        ADAR_ac_DW.If_ActiveSubsystem_l = 3;
    }
    else if (VeADAC_L_LftPosAct <= KeADAR_L_WEDActuation_OpenThr)
    {
        ADAR_ac_DW.If_ActiveSubsystem_l = 4;
    }
    else if (VeADAC_L_LftPosAct >= KeADAR_L_WEDActuation_ClsdThr)
    {
        ADAR_ac_DW.If_ActiveSubsystem_l = 5;
    }
    else
    {
        ADAR_ac_DW.If_ActiveSubsystem_l = 6;
    }

    switch (ADAR_ac_DW.If_ActiveSubsystem_l)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S8>/Write_Opening_Status' incorporates:
         *  ActionPort: '<S128>/Action Port'
         */
        ADAR_ac_Write_Opening_Status(ADAR_ac_DW.UnitDelay3_DSTATE_j,
            &ADAR_ac_B.Merge_k, &ADAR_ac_B.Merge1_e, (&(VeADAC_e_LftCtrlCmnd)));

        /* End of Outputs for SubSystem: '<S8>/Write_Opening_Status' */
        break;

      case 1:
        if (ADAR_ac_DW.If_ActiveSubsystem_l != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S8>/Write_Opening_WithHold' incorporates:
             *  ActionPort: '<S129>/Action Port'
             */
            /* SystemReset for If: '<S8>/If' */
            ADAR_ac_Write_Opening_WithHold_Reset
                (&ADAR_ac_DW.Write_Opening_WithHold);

            /* End of SystemReset for SubSystem: '<S8>/Write_Opening_WithHold' */
        }

        /* Outputs for IfAction SubSystem: '<S8>/Write_Opening_WithHold' incorporates:
         *  ActionPort: '<S129>/Action Port'
         */
        ADAR_ac_Write_Opening_WithHold(ADAR_ac_B.UnitDelay2_j,
            ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pw_p, ADAR_ac_B.AND_l,
            &ADAR_ac_B.Merge_k, &ADAR_ac_B.Merge1_e, (&(VeADAC_e_LftCtrlCmnd)),
            &ADAR_ac_B.Write_Opening_WithHold,
            &ADAR_ac_DW.Write_Opening_WithHold);

        /* End of Outputs for SubSystem: '<S8>/Write_Opening_WithHold' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S8>/Write_Closing_Status' incorporates:
         *  ActionPort: '<S124>/Action Port'
         */
        ADAR_ac_Write_Closing_Status(ADAR_ac_DW.UnitDelay3_DSTATE_j,
            &ADAR_ac_B.Merge_k, &ADAR_ac_B.Merge3_d, (&(VeADAC_e_LftCtrlCmnd)));

        /* End of Outputs for SubSystem: '<S8>/Write_Closing_Status' */
        break;

      case 3:
        if (ADAR_ac_DW.If_ActiveSubsystem_l != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S8>/Write_Closing_WithHold' incorporates:
             *  ActionPort: '<S125>/Action Port'
             */
            /* SystemReset for If: '<S8>/If' */
            ADAR_ac_Write_Closing_WithHold_Reset
                (&ADAR_ac_DW.Write_Closing_WithHold);

            /* End of SystemReset for SubSystem: '<S8>/Write_Closing_WithHold' */
        }

        /* Outputs for IfAction SubSystem: '<S8>/Write_Closing_WithHold' incorporates:
         *  ActionPort: '<S125>/Action Port'
         */
        ADAR_ac_Write_Closing_WithHold(ADAR_ac_B.UnitDelay2_j,
            ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pw_p, ADAR_ac_B.AND_l,
            &ADAR_ac_B.Merge_k, (&(VeADAC_e_LftCtrlCmnd)), &ADAR_ac_B.Merge3_d,
            &ADAR_ac_B.Write_Closing_WithHold,
            &ADAR_ac_DW.Write_Closing_WithHold);

        /* End of Outputs for SubSystem: '<S8>/Write_Closing_WithHold' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S8>/Write_Open_Status' incorporates:
         *  ActionPort: '<S127>/Action Port'
         */
        ADAR_ac_Write_Open_Status(ADAR_ac_B.AND_l,
            ADAR_ac_DW.UnitDelay1_DSTATE_d, rtb_DataStoreRead5_f[1],
            rtb_DataStoreRead5_f[0], &ADAR_ac_B.Merge_k, &ADAR_ac_B.Merge1_e,
            (&(VeADAC_e_LftCtrlCmnd)), &ADAR_ac_B.Write_Open_Status,
            &ADAR_ac_DW.Write_Open_Status);

        /* End of Outputs for SubSystem: '<S8>/Write_Open_Status' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S8>/Write_Closed_Status' incorporates:
         *  ActionPort: '<S123>/Action Port'
         */
        ADAR_ac_Write_Closed_Status(ADAR_ac_B.AND_l,
            ADAR_ac_DW.UnitDelay1_DSTATE_d, rtb_DataStoreRead5_f[2],
            rtb_DataStoreRead5_f[3], &ADAR_ac_B.Merge_k, &ADAR_ac_B.Merge3_d,
            (&(VeADAC_e_LftCtrlCmnd)), &ADAR_ac_B.Write_Closed_Status,
            &ADAR_ac_DW.Write_Closed_Status);

        /* End of Outputs for SubSystem: '<S8>/Write_Closed_Status' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S8>/Write_Indeterminate_Status' incorporates:
         *  ActionPort: '<S126>/Action Port'
         */
        ADAR_ac_Write_Indeterminate_Status(&ADAR_ac_B.Merge_k,
            &ADAR_ac_B.Merge1_e, &ADAR_ac_B.Merge3_d, (&(VeADAC_e_LftCtrlCmnd)));

        /* End of Outputs for SubSystem: '<S8>/Write_Indeterminate_Status' */
        break;
    }

    /* End of If: '<S8>/If' */

    /* Update for UnitDelay: '<S8>/Unit Delay1' */
    ADAR_ac_DW.UnitDelay1_DSTATE_p = ADAR_ac_B.Merge3_d;

    /* Update for UnitDelay: '<S8>/Unit Delay3' */
    ADAR_ac_DW.UnitDelay3_DSTATE_e = ADAR_ac_B.Write_Closed_Status.Switch1;

    /* Update for UnitDelay: '<S8>/Unit Delay2' */
    ADAR_ac_DW.UnitDelay2_DSTATE_b = ADAR_ac_B.Write_Open_Status.Switch;

    /* Update for UnitDelay: '<S8>/Unit Delay8' */
    ADAR_ac_DW.UnitDelay8_DSTATE_n4 = ADAR_ac_B.Merge1_e;

    /* Update for If: '<S8>/If' */
    switch (ADAR_ac_DW.If_ActiveSubsystem_l)
    {
      case 0:
      case 2:
      case 4:
      case 5:
      case 6:
        break;

      case 1:
        /* Update for IfAction SubSystem: '<S8>/Write_Opening_WithHold' incorporates:
         *  ActionPort: '<S129>/Action Port'
         */
        ADAR_ac_Write_Opening_WithHold_Update
            (ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pw_p,
             &ADAR_ac_B.Write_Opening_WithHold,
             &ADAR_ac_DW.Write_Opening_WithHold);

        /* End of Update for SubSystem: '<S8>/Write_Opening_WithHold' */
        break;

      case 3:
        /* Update for IfAction SubSystem: '<S8>/Write_Closing_WithHold' incorporates:
         *  ActionPort: '<S125>/Action Port'
         */
        ADAR_ac_Write_Closing_WithHold_Update
            (ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pw_p,
             &ADAR_ac_B.Write_Closing_WithHold,
             &ADAR_ac_DW.Write_Closing_WithHold);

        /* End of Update for SubSystem: '<S8>/Write_Closing_WithHold' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Update for If: '<S8>/If' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ADAC_PosProf'
     */
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S166>/Calib'
     */
    if (!HeADAR_b_UseLearnedTAValue)
    {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S19>/Calib'
         */
        ADAR_ac_B.Switch_h = KeADAR_L_LftTAValue;
    }

    /* End of Switch: '<S9>/Switch' */

    /* If: '<S9>/If' incorporates:
     *  Constant: '<S15>/Calib'
     *  Constant: '<S163>/Constant'
     *  Constant: '<S164>/Constant'
     *  Merge: '<S8>/Merge4'
     *  RelationalOperator: '<S9>/Relational Operator'
     *  RelationalOperator: '<S9>/Relational Operator1'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    rtPrevAction = ADAR_ac_DW.If_ActiveSubsystem_i;
    if (((uint32)VeADAC_e_LftCtrlCmnd) == CeADAR_e_ActuateClosing)
    {
        ADAR_ac_DW.If_ActiveSubsystem_i = 0;
    }
    else if (((uint32)VeADAC_e_LftCtrlCmnd) == CeADAR_e_ActuateOpening)
    {
        ADAR_ac_DW.If_ActiveSubsystem_i = 1;
    }
    else
    {
        ADAR_ac_DW.If_ActiveSubsystem_i = 2;
    }

    if (rtPrevAction != ADAR_ac_DW.If_ActiveSubsystem_i)
    {
        switch (rtPrevAction)
        {
          case 0:
            ADAR_ac_Engagement_Disable(&ADAR_ac_DW.Engagement);
            break;

          case 1:
            ADAR_ac_Disengagement_Disable(&ADAR_ac_DW.Disengagement);
            break;

          case 2:
            break;

          default:
            /* no actions */
            break;
        }
    }

    switch (ADAR_ac_DW.If_ActiveSubsystem_i)
    {
      case 0:
        if (ADAR_ac_DW.If_ActiveSubsystem_i != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S9>/Engagement' incorporates:
             *  ActionPort: '<S162>/Action Port'
             */
            /* SystemReset for If: '<S9>/If' */
            ADAR_ac_Engagement_Reset(&ADAR_ac_DW.Engagement);

            /* End of SystemReset for SubSystem: '<S9>/Engagement' */
        }

        /* Outputs for IfAction SubSystem: '<S9>/Engagement' incorporates:
         *  ActionPort: '<S162>/Action Port'
         */
        ADAR_ac_Engagement(VeADAC_L_LftPosAct, HeADAR_t_FastTEA_dT,
                           ADAR_ac_DW.UnitDelay_DSTATE_e, ADAR_ac_B.UnitDelay2_j,
                           ADAR_ac_B.Switch_h, (&(VeADAC_e_LftActuationStage)),
                           (&(VeADAC_L_LftProfilePosition)),
                           (&(VeADAC_k_LftPGainPos)), (&(VeADAC_k_LftIGainPos)),
                           (&(VeADAC_k_LftDGainPos)), &ADAR_ac_B.Engagement,
                           &ADAR_ac_DW.Engagement);

        /* End of Outputs for SubSystem: '<S9>/Engagement' */
        break;

      case 1:
        if (ADAR_ac_DW.If_ActiveSubsystem_i != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S9>/Disengagement' incorporates:
             *  ActionPort: '<S161>/Action Port'
             */
            /* SystemReset for If: '<S9>/If' */
            ADAR_ac_Disengagement_Reset(&ADAR_ac_DW.Disengagement);

            /* End of SystemReset for SubSystem: '<S9>/Disengagement' */
        }

        /* Outputs for IfAction SubSystem: '<S9>/Disengagement' incorporates:
         *  ActionPort: '<S161>/Action Port'
         */
        ADAR_ac_Disengagement(VeADAC_L_LftPosAct, HeADAR_t_FastTEA_dT,
                              ADAR_ac_B.UnitDelay2_j,
                              (&(VeADAC_e_LftActuationStage)),
                              (&(VeADAC_L_LftProfilePosition)),
                              (&(VeADAC_k_LftPGainPos)), (&(VeADAC_k_LftIGainPos)),
                              (&(VeADAC_k_LftDGainPos)),
                              &ADAR_ac_B.Disengagement,
                              &ADAR_ac_DW.Disengagement);

        /* End of Outputs for SubSystem: '<S9>/Disengagement' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S9>/Idle' incorporates:
         *  ActionPort: '<S165>/Action Port'
         */
        ADAR_ac_Idle(VeADAC_e_LftCtrlCmnd, (&(VeADAC_e_LftActuationStage)),
                     (&(VeADAC_L_LftProfilePosition)), (&(VeADAC_k_LftPGainPos)),
                     (&(VeADAC_k_LftIGainPos)), (&(VeADAC_k_LftDGainPos)));

        /* End of Outputs for SubSystem: '<S9>/Idle' */
        break;
    }

    /* End of If: '<S9>/If' */

    /* Update for UnitDelay: '<S9>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_e = VeADAC_I_LftITermPos;

    /* Update for If: '<S9>/If' */
    switch (ADAR_ac_DW.If_ActiveSubsystem_i)
    {
      case 0:
        /* Update for IfAction SubSystem: '<S9>/Engagement' incorporates:
         *  ActionPort: '<S162>/Action Port'
         */
        ADAR_ac_Engagement_Update(&ADAR_ac_B.Engagement, &ADAR_ac_DW.Engagement);

        /* End of Update for SubSystem: '<S9>/Engagement' */
        break;

      case 1:
        /* Update for IfAction SubSystem: '<S9>/Disengagement' incorporates:
         *  ActionPort: '<S161>/Action Port'
         */
        ADAR_ac_Disengagement_Update(&ADAR_ac_B.Disengagement,
            &ADAR_ac_DW.Disengagement);

        /* End of Update for SubSystem: '<S9>/Disengagement' */
        break;

      case 2:
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Update for If: '<S9>/If' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ADAC_CalcCurrCmnd'
     */
    /* UnitDelay: '<S6>/Unit Delay2' */
    ADAR_ac_B.UnitDelay2_j = ADAR_ac_DW.UnitDelay2_DSTATE_g;

    /* If: '<S6>/If' incorporates:
     *  Constant: '<S21>/Calib'
     *  Logic: '<S6>/Logical Operator'
     *  Logic: '<S6>/Logical Operator1'
     */
    rtPrevAction = ADAR_ac_DW.If_ActiveSubsystem_d5;
    ADAR_ac_DW.If_ActiveSubsystem_d5 = (sint8)(((!HeADAR_b_UsePosCntrl) ||
        (ADAR_ac_B.AND_l)) ? 1 : 0);
    if (ADAR_ac_DW.If_ActiveSubsystem_d5 == 0)
    {
        if (0 != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S6>/PositionControl' incorporates:
             *  ActionPort: '<S23>/Action Port'
             */
            /* SystemReset for If: '<S6>/If' */
            ADAR_ac_PositionControl_Reset(&ADAR_ac_DW.PositionControl);

            /* End of SystemReset for SubSystem: '<S6>/PositionControl' */
        }

        /* Outputs for IfAction SubSystem: '<S6>/PositionControl' incorporates:
         *  ActionPort: '<S23>/Action Port'
         */
        ADAR_ac_PositionControl(VeADAC_L_LftProfilePosition,
                                VeADAC_k_LftPGainPos, VeADAC_k_LftIGainPos,
                                VeADAC_k_LftDGainPos, VeADAC_L_LftPosAct,
                                VeADAC_e_LftCtrlCmnd, ADAR_ac_B.UnitDelay2_j,
                                ADAR_ac_B.AND_l, &rtb_Merge_a,
                                (&(VeADAC_I_LftPIDPos)), (&(VeADAC_I_LftPTermPos)),
                                (&(VeADAC_I_LftITermPos)),
                                (&(VeADAC_I_LftDTermPos)),
                                (&(VeADAC_b_LftPIDReset)),
                                &ADAR_ac_DW.PositionControl);

        /* End of Outputs for SubSystem: '<S6>/PositionControl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S6>/ConstanCurrentControl' incorporates:
         *  ActionPort: '<S20>/Action Port'
         */
        ADAR_ac_ConstanCurrentControl(VeADAC_e_LftCtrlCmnd, &rtb_Merge_a,
            (&(VeADAC_I_LftPIDPos)), (&(VeADAC_I_LftPTermPos)),
            (&(VeADAC_I_LftITermPos)), (&(VeADAC_I_LftDTermPos)),
            (&(VeADAC_b_LftPIDReset)));

        /* End of Outputs for SubSystem: '<S6>/ConstanCurrentControl' */
    }

    /* End of If: '<S6>/If' */

    /* Outputs for Atomic SubSystem: '<S6>/RateLimitWithOvrCrrntPrtctn' */
    /* Abs: '<S24>/Abs' incorporates:
     *  Abs: '<S24>/Abs1'
     */
    rtb_Sum2_h = fabsf(rtb_Merge_a);

    /* Outputs for Atomic SubSystem: '<S24>/Hysteresis' */
    /* Switch: '<S71>/Switch1' incorporates:
     *  Abs: '<S24>/Abs'
     *  Constant: '<S71>/Constant Value'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S74>/Calib'
     *  RelationalOperator: '<S71>/Greater  Than'
     *  RelationalOperator: '<S71>/Greater  Than1'
     *  UnitDelay: '<S71>/Unit Delay'
     */
    if (rtb_Sum2_h > KeADAR_I_OvrCrntThrshRSP)
    {
        ADAR_ac_DW.UnitDelay_DSTATE_m = true;
    }
    else
    {
        ADAR_ac_DW.UnitDelay_DSTATE_m = ((rtb_Sum2_h >= KeADAR_I_OvrCrntThrshLSP)
            && (ADAR_ac_DW.UnitDelay_DSTATE_m));
    }

    /* End of Switch: '<S71>/Switch1' */
    /* End of Outputs for SubSystem: '<S24>/Hysteresis' */

    /* Chart: '<S24>/OverCurrentProtection' incorporates:
     *  Constant: '<S22>/Calib'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S77>/Calib'
     *  Constant: '<S78>/Calib'
     *  Merge: '<S8>/Merge4'
     *  RelationalOperator: '<S9>/Relational Operator'
     *  UnitDelay: '<S71>/Unit Delay'
     */
    /* Gateway: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
    /* During: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
    if (((uint32)ADAR_ac_DW.is_active_c4_ADAC_CalcCurrCmnd_Lib_k) == 0U)
    {
        /* Entry: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
        ADAR_ac_DW.is_active_c4_ADAC_CalcCurrCmnd_Lib_k = 1U;

        /* Entry Internal: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
        /* Transition: '<S79>:2' */
        VeADAC_t_LftWEDHeatingTmr = 0.0F;
        VeADAC_t_LftWEDCoolDownTmr = 0.0F;
        VeADAC_r_LftHeatingTmrRatio = 0.001F;
        ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib_l = ADAR_ac_IN_NormalOperation;

        /* Entry Internal 'NormalOperation': '<S79>:3' */
        /* Transition: '<S79>:41' */
        ADAR_ac_DW.is_NormalOperation_a = ADAR_ac_IN_Idle;

        /* Entry 'Idle': '<S79>:40' */
        ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = rtb_Sum2_h;
        ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = false;
        VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_NormalActuation;
    }
    else
    {
        switch (ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib_l)
        {
          case AD_IN_CoolDownPeriodAfterSuccessfulShift:
            VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_CoolDownSteadyStates;

            /* Outputs for Function Call SubSystem: '<S4>/ADAC_PosProf' */
            /* During 'CoolDownPeriodAfterSuccessfulShift': '<S79>:24' */
            if ((((uint32)VeADAC_e_LftCtrlCmnd) != CeADAR_e_SSClosed) &&
                    (((uint32)VeADAC_e_LftCtrlCmnd) != CeADAR_e_SSOpened))
            {
                /* Transition: '<S79>:29' */
                if (VeADAC_t_LftWEDCoolDownTmr >= (KeADAR_t_CoolDownCrntTmLmt *
                        VeADAC_r_LftHeatingTmrRatio))
                {
                    /* Transition: '<S79>:8' */
                    /* Transition: '<S79>:34' */
                    VeADAC_t_LftWEDHeatingTmr = 0.0F;
                    VeADAC_r_LftHeatingTmrRatio = 0.001F;
                }
                else
                {
                    /* Transition: '<S79>:53' */
                }

                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib_l =
                    ADAR_ac_IN_NormalOperation;

                /* Entry Internal 'NormalOperation': '<S79>:3' */
                /* Transition: '<S79>:41' */
                ADAR_ac_DW.is_NormalOperation_a = ADAR_ac_IN_Idle;

                /* Entry 'Idle': '<S79>:40' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = rtb_Sum2_h;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = false;
                VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_NormalActuation;
            }
            else
            {
                /*  Update state timer */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = rtb_Sum2_h;
                VeADAC_t_LftWEDCoolDownTmr = VeADAC_t_LftWEDCoolDownTmr +
                    HeADAR_t_FastTEA_dT;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = true;
            }

            /* End of Outputs for SubSystem: '<S4>/ADAC_PosProf' */
            break;

          case ADAR_ac_IN_NormalOperation:
            /* Outputs for Function Call SubSystem: '<S4>/ADAC_PosProf' */
            /* During 'NormalOperation': '<S79>:3' */
            if ((((uint32)VeADAC_e_LftCtrlCmnd) == CeADAR_e_SSOpened) ||
                    (((uint32)VeADAC_e_LftCtrlCmnd) == CeADAR_e_SSClosed))
            {
                /* Transition: '<S79>:30' */
                /* Exit Internal 'NormalOperation': '<S79>:3' */
                ADAR_ac_DW.is_NormalOperation_a = ADAR_ac_IN_NO_ACTIVE_CHILD_d;
                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib_l =
                    AD_IN_CoolDownPeriodAfterSuccessfulShift;

                /* Entry 'CoolDownPeriodAfterSuccessfulShift': '<S79>:24' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = rtb_Sum2_h;
                VeADAC_t_LftWEDCoolDownTmr = 0.0F;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = true;
                VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_CoolDownSteadyStates;
            }
            else if (VeADAC_t_LftWEDHeatingTmr >= KeADAR_t_OvrCrntTmLmt)
            {
                /* Transition: '<S79>:5' */
                /* Exit Internal 'NormalOperation': '<S79>:3' */
                ADAR_ac_DW.is_NormalOperation_a = ADAR_ac_IN_NO_ACTIVE_CHILD_d;
                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib_l =
                    ADAR_ac_IN_OverHeatingProtection;

                /* Entry 'OverHeatingProtection': '<S79>:4' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = KeADAR_I_CoolDownCrntCmnd;
                VeADAC_t_LftWEDCoolDownTmr = 0.0F;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = true;
                VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_CoolDownActuation;
            }
            else if (((sint32)ADAR_ac_DW.is_NormalOperation_a) == 1)
            {
                VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_NormalActuation;

                /* During 'Idle': '<S79>:40' */
                if (ADAR_ac_DW.UnitDelay_DSTATE_m)
                {
                    /* Transition: '<S79>:43' */
                    ADAR_ac_DW.is_NormalOperation_a =
                        ADAR_ac_IN_UpdateOverCurrentTimer;

                    /* Entry 'UpdateOverCurrentTimer': '<S79>:42' */
                    VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_NormalActuation;
                }
                else
                {
                    ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = rtb_Sum2_h;
                    ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = false;
                }
            }
            else
            {
                VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_NormalActuation;

                /* During 'UpdateOverCurrentTimer': '<S79>:42' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = rtb_Sum2_h;
                VeADAC_t_LftWEDHeatingTmr = VeADAC_t_LftWEDHeatingTmr +
                    HeADAR_t_FastTEA_dT;
                VeADAC_r_LftHeatingTmrRatio = VeADAC_t_LftWEDHeatingTmr /
                    (KeADAR_t_OvrCrntTmLmt + 0.0001F);
                ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = false;
            }

            /* End of Outputs for SubSystem: '<S4>/ADAC_PosProf' */
            break;

          default:
            VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_CoolDownActuation;

            /* During 'OverHeatingProtection': '<S79>:4' */
            if (VeADAC_t_LftWEDCoolDownTmr >= KeADAR_t_CoolDownCrntTmLmt)
            {
                /* Transition: '<S79>:46' */
                /* Transition: '<S79>:34' */
                VeADAC_t_LftWEDHeatingTmr = 0.0F;
                VeADAC_r_LftHeatingTmrRatio = 0.001F;
                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib_l =
                    ADAR_ac_IN_NormalOperation;

                /* Entry Internal 'NormalOperation': '<S79>:3' */
                /* Transition: '<S79>:41' */
                ADAR_ac_DW.is_NormalOperation_a = ADAR_ac_IN_Idle;

                /* Entry 'Idle': '<S79>:40' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = rtb_Sum2_h;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = false;
                VeADAC_e_LftCrrntPrtctnSt = CeADAR_e_NormalActuation;
            }
            else
            {
                /*  Update state timer */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i = KeADAR_I_CoolDownCrntCmnd;
                VeADAC_t_LftWEDCoolDownTmr = VeADAC_t_LftWEDCoolDownTmr +
                    HeADAR_t_FastTEA_dT;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator_g = true;
            }
            break;
        }
    }

    /* End of Chart: '<S24>/OverCurrentProtection' */

    /* Signum: '<S24>/Sign' */
    if (rtb_Merge_a < 0.0F)
    {
        rtb_Merge_a = -1.0F;
    }
    else
    {
        if (rtb_Merge_a > 0.0F)
        {
            rtb_Merge_a = 1.0F;
        }
    }

    /* End of Signum: '<S24>/Sign' */

    /* Outputs for Atomic SubSystem: '<S24>/GradientLimiter1' */
    /* Sum: '<S70>/Sum2' incorporates:
     *  Product: '<S24>/Product'
     */
    rtb_Merge_a = (ADAR_ac_B.LeADAC_I_WEDCmndCrnt_i * rtb_Merge_a) -
        VeADAC_I_LftCrrntCmnd;

    /* Outputs for Atomic SubSystem: '<S70>/Limiter' */
    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S76>/Calib'
     *  RelationalOperator: '<S80>/Relational Operator'
     */
    if (KeADAR_dI_RtLim_Incr < rtb_Merge_a)
    {
        /* Switch: '<S80>/Switch1' */
        rtb_Merge_a = KeADAR_dI_RtLim_Incr;
    }

    /* End of Switch: '<S80>/Switch1' */

    /* Switch: '<S80>/Switch' incorporates:
     *  Constant: '<S75>/Calib'
     *  RelationalOperator: '<S80>/Relational Operator1'
     */
    if (rtb_Merge_a <= KeADAR_dI_RtLim_Decr)
    {
        rtb_Merge_a = KeADAR_dI_RtLim_Decr;
    }

    /* End of Switch: '<S80>/Switch' */
    /* End of Outputs for SubSystem: '<S70>/Limiter' */

    /* Sum: '<S70>/Sum3' */
    VeADAC_I_LftCrrntCmnd = rtb_Merge_a + VeADAC_I_LftCrrntCmnd;

    /* End of Outputs for SubSystem: '<S24>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S6>/RateLimitWithOvrCrrntPrtctn' */

    /* Update for UnitDelay: '<S6>/Unit Delay2' */
    ADAR_ac_DW.UnitDelay2_DSTATE_g = ADAR_ac_B.LeADAC_b_FreezeIntegrator_g;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ADAC_CalcHBrdgPWM1'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ADAC_PosProf'
     */
    /* If: '<S81>/If' incorporates:
     *  Constant: '<S87>/Constant'
     *  Constant: '<S88>/Constant'
     *  Constant: '<S89>/Constant'
     *  Constant: '<S90>/Constant'
     *  Logic: '<S81>/Logical Operator'
     *  Logic: '<S81>/Logical Operator1'
     *  Merge: '<S8>/Merge4'
     *  RelationalOperator: '<S81>/Relational Operator'
     *  RelationalOperator: '<S81>/Relational Operator1'
     *  RelationalOperator: '<S81>/Relational Operator2'
     *  RelationalOperator: '<S81>/Relational Operator3'
     *  RelationalOperator: '<S9>/Relational Operator'
     */
    if ((((uint32)VeADAC_e_LftCtrlCmnd) == CeADAR_e_ActuateOpening) || (((uint32)
            VeADAC_e_LftCtrlCmnd) == CeADAR_e_OpeningWithHold))
    {
        /* Outputs for IfAction SubSystem: '<S81>/EngagingGains' incorporates:
         *  ActionPort: '<S86>/Action Port'
         */
        ADAR_ac_EngagingGains((&(VeADAC_k_LftPGainCrrnt)),
                              (&(VeADAC_k_LftIGainCrrnt)),
                              (&(VeADAC_k_LftDGainCrrnt)));

        /* End of Outputs for SubSystem: '<S81>/EngagingGains' */
    }
    else if ((((uint32)VeADAC_e_LftCtrlCmnd) == CeADAR_e_ActuateClosing) ||
             (((uint32)VeADAC_e_LftCtrlCmnd) == CeADAR_e_ClosingWithHold))
    {
        /* Outputs for IfAction SubSystem: '<S81>/DisengagingGains' incorporates:
         *  ActionPort: '<S85>/Action Port'
         */
        ADAR_ac_DisengagingGains((&(VeADAC_k_LftPGainCrrnt)),
            (&(VeADAC_k_LftIGainCrrnt)), (&(VeADAC_k_LftDGainCrrnt)));

        /* End of Outputs for SubSystem: '<S81>/DisengagingGains' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S81>/IdleGains' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        ADAR_ac_IdleGains((&(VeADAC_k_LftPGainCrrnt)), (&(VeADAC_k_LftIGainCrrnt)),
                          (&(VeADAC_k_LftDGainCrrnt)));

        /* End of Outputs for SubSystem: '<S81>/IdleGains' */
    }

    /* End of If: '<S81>/If' */

    /* Sum: '<S7>/Sum' */
    rtb_Merge_a = VeADAC_I_LftCrrntCmnd -
        rtb_TmpSignalConversionAtVeADIB_I_WEDLef;

    /* Product: '<S109>/Product' */
    VeADAC_DC_LftPTermCrrnt = rtb_Merge_a * VeADAC_k_LftPGainCrrnt;

    /* Switch: '<S109>/Switch' incorporates:
     *  UnitDelay: '<S7>/Unit Delay'
     */
    if (!ADAR_ac_DW.UnitDelay_DSTATE_hu)
    {
        /* Switch: '<S109>/Switch1' */
        if (VeADAC_b_LftPIDReset)
        {
            /* Switch: '<S109>/Switch' incorporates:
             *  Constant: '<S84>/Constant3'
             *  Switch: '<S109>/Switch1'
             */
            VeADAC_DC_LftITermCrrnt = 0.0F;
        }
        else
        {
            /* Switch: '<S109>/Switch' incorporates:
             *  Constant: '<S111>/Calib'
             *  Product: '<S109>/Product1'
             *  Sum: '<S109>/Sum1'
             *  Switch: '<S109>/Switch1'
             *  UnitDelay: '<S109>/Unit Delay'
             */
            VeADAC_DC_LftITermCrrnt = ((rtb_Merge_a * VeADAC_k_LftIGainCrrnt) *
                HeADAR_t_FastTEA_dT) + VeADAC_DC_LftITermCrrnt;
        }

        /* End of Switch: '<S109>/Switch1' */
    }

    /* End of Switch: '<S109>/Switch' */

    /* Outputs for Atomic SubSystem: '<S109>/Limiter1' */
    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S84>/Constant'
     *  RelationalOperator: '<S113>/Relational Operator'
     */
    if (100.0F < VeADAC_DC_LftITermCrrnt)
    {
        /* Switch: '<S105>/Switch1' */
        VeADAC_DC_LftPWMCmnd = 100.0F;
    }
    else
    {
        /* Switch: '<S105>/Switch1' */
        VeADAC_DC_LftPWMCmnd = VeADAC_DC_LftITermCrrnt;
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Switch: '<S113>/Switch' incorporates:
     *  Constant: '<S84>/Constant2'
     *  RelationalOperator: '<S113>/Relational Operator1'
     */
    if (VeADAC_DC_LftPWMCmnd > -100.0F)
    {
        /* Switch: '<S113>/Switch' */
        VeADAC_DC_LftITermCrrnt = VeADAC_DC_LftPWMCmnd;
    }
    else
    {
        /* Switch: '<S113>/Switch' */
        VeADAC_DC_LftITermCrrnt = -100.0F;
    }

    /* End of Switch: '<S113>/Switch' */
    /* End of Outputs for SubSystem: '<S109>/Limiter1' */

    /* Sum: '<S109>/Sum2' incorporates:
     *  UnitDelay: '<S109>/Unit Delay1'
     */
    rtb_Sum2_h = rtb_Merge_a - ADAR_ac_DW.UnitDelay1_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S109>/Protected Division' */
    /* Switch: '<S114>/Switch1' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S114>/Constant Value'
     *  Constant: '<S114>/Constant Value1'
     *  Constant: '<S114>/Constant Value2'
     *  Constant: '<S114>/Constant Value3'
     *  Logic: '<S114>/AND'
     *  RelationalOperator: '<S114>/Greater Than or Equal '
     *  RelationalOperator: '<S114>/Greater Than or Equal 1'
     *  RelationalOperator: '<S114>/Not Equal'
     *  RelationalOperator: '<S114>/Not Equal1'
     *  Switch: '<S114>/Switch2'
     *  Switch: '<S114>/Switch3'
     */
    if ((rtb_Sum2_h != 0.0F) && (HeADAR_t_FastTEA_dT != 0.0F))
    {
        /* Switch: '<S114>/Switch1' incorporates:
         *  Product: '<S114>/Division'
         */
        rtb_Sum2_h /= HeADAR_t_FastTEA_dT;
    }
    else if (rtb_Sum2_h > 0.0F)
    {
        /* Switch: '<S114>/Switch2' incorporates:
         *  Constant: '<S114>/MAXFLOAT'
         *  Switch: '<S114>/Switch1'
         */
        rtb_Sum2_h = 3.402823466E+38F;
    }
    else if (rtb_Sum2_h < 0.0F)
    {
        /* Switch: '<S114>/Switch3' incorporates:
         *  Constant: '<S114>/MINFLOAT'
         *  Switch: '<S114>/Switch1'
         *  Switch: '<S114>/Switch2'
         */
        rtb_Sum2_h = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S114>/Switch1' incorporates:
         *  Constant: '<S114>/Constant Value4'
         *  Switch: '<S114>/Switch2'
         *  Switch: '<S114>/Switch3'
         */
        rtb_Sum2_h = 0.0F;
    }

    /* End of Switch: '<S114>/Switch1' */
    /* End of Outputs for SubSystem: '<S109>/Protected Division' */

    /* Product: '<S109>/Product2' */
    VeADAC_DC_LftDTermCrrnt = rtb_Sum2_h * VeADAC_k_LftDGainCrrnt;

    /* Switch: '<S84>/Switch' incorporates:
     *  Constant: '<S110>/Calib'
     */
    if (HeADAR_b_EnableCurrentPID)
    {
        /* Switch: '<S109>/Switch3' */
        if (VeADAC_b_LftPIDReset)
        {
            /* Switch: '<S84>/Switch' incorporates:
             *  Constant: '<S109>/Constant'
             *  Switch: '<S109>/Switch3'
             */
            VeADAC_DC_LftPWMCmnd = 0.0F;
        }
        else
        {
            /* Switch: '<S84>/Switch' incorporates:
             *  Sum: '<S109>/Sum'
             *  Switch: '<S109>/Switch3'
             */
            VeADAC_DC_LftPWMCmnd = (VeADAC_DC_LftPTermCrrnt +
                                    VeADAC_DC_LftITermCrrnt) +
                VeADAC_DC_LftDTermCrrnt;
        }

        /* End of Switch: '<S109>/Switch3' */
    }
    else
    {
        /* Switch: '<S84>/Switch' incorporates:
         *  Constant: '<S84>/Constant6'
         */
        VeADAC_DC_LftPWMCmnd = 0.0F;
    }

    /* End of Switch: '<S84>/Switch' */

    /* Outputs for Atomic SubSystem: '<S84>/Limiter1' */
    /* Switch: '<S112>/Switch1' incorporates:
     *  Constant: '<S84>/Constant4'
     *  RelationalOperator: '<S112>/Relational Operator'
     */
    if (100.0F < VeADAC_DC_LftPWMCmnd)
    {
        /* Switch: '<S105>/Switch1' */
        VeADAC_DC_LftPWMCmnd = 100.0F;
    }

    /* End of Switch: '<S112>/Switch1' */

    /* Switch: '<S112>/Switch' incorporates:
     *  Constant: '<S84>/Constant5'
     *  RelationalOperator: '<S112>/Relational Operator1'
     */
    if (VeADAC_DC_LftPWMCmnd > -100.0F)
    {
        /* Switch: '<S112>/Switch' */
        VeADAC_DC_LftCLCmnd = VeADAC_DC_LftPWMCmnd;
    }
    else
    {
        /* Switch: '<S112>/Switch' */
        VeADAC_DC_LftCLCmnd = -100.0F;
    }

    /* End of Switch: '<S112>/Switch' */
    /* End of Outputs for SubSystem: '<S84>/Limiter1' */

    /* Product: '<S83>/Product' incorporates:
     *  Lookup_n-D: '<S107>/Vector'
     *  Lookup_n-D: '<S108>/Vector'
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     *  SignalConversion generated from: '<S1>/VePMDR_U_HB_SysVolt'
     *  Sum: '<S70>/Sum3'
     */
    VeADAC_DC_LftOLCmnd = look1_iflf_binlca_16a(VeADAC_I_LftCrrntCmnd, ((const
        float32 *)&(KxADAR_Pct_SlndDC_Base[0])), ((const float32 *)
        &(KtADAR_Pct_SlndDC_Base[0])), 5U) * look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVePMDR_U_HB_Sys,
         rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const float32 *)
          &(KxADAR_Pct_SlndDC_VoltTempMod[0])), ((const float32 *)
          &(KyADAR_Pct_SlndDC_VoltTempMod[0])), ((const float32 *)
          &(KtADAR_Pct_SlndDC_VoltTempMod[0])), ADAR_ac_ConstP.pooled13, 3U);

    /* Switch: '<S82>/Switch2' incorporates:
     *  Sum: '<S82>/Sum'
     */
    rtb_Sum2_h = VeADAC_DC_LftCLCmnd + VeADAC_DC_LftOLCmnd;

    /* Outputs for Atomic SubSystem: '<S82>/Limiter1' */
    /* Switch: '<S105>/Switch1' incorporates:
     *  Constant: '<S82>/Constant2'
     *  RelationalOperator: '<S105>/Relational Operator'
     */
    if (100.0F < rtb_Sum2_h)
    {
        /* Switch: '<S105>/Switch1' */
        VeADAC_DC_LftPWMCmnd = 100.0F;
    }
    else
    {
        /* Switch: '<S105>/Switch1' */
        VeADAC_DC_LftPWMCmnd = rtb_Sum2_h;
    }

    /* End of Switch: '<S105>/Switch1' */

    /* Switch: '<S105>/Switch' incorporates:
     *  Constant: '<S82>/Constant3'
     *  RelationalOperator: '<S105>/Relational Operator1'
     */
    if (VeADAC_DC_LftPWMCmnd <= -100.0F)
    {
        /* Switch: '<S105>/Switch' */
        VeADAC_DC_LftPWMCmnd = -100.0F;
    }

    /* End of Switch: '<S105>/Switch' */
    /* End of Outputs for SubSystem: '<S82>/Limiter1' */

    /* RelationalOperator: '<S82>/Relational Operator' incorporates:
     *  UnitDelay: '<S7>/Unit Delay'
     */
    ADAR_ac_DW.UnitDelay_DSTATE_hu = (VeADAC_DC_LftPWMCmnd != rtb_Sum2_h);

    /* Update for UnitDelay: '<S109>/Unit Delay1' */
    ADAR_ac_DW.UnitDelay1_DSTATE_n = rtb_Merge_a;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ADAR_LearningProcedure'
     */
    /* Constant: '<S14>/Constant' */
    ADAR_ac_ADAR_LearningProcedure(VeADAC_e_LftCtrlCmnd,
        ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pw_p, VeADAC_L_LftPosAct,
        rtb_TmpSignalConversionAtVeADIB_I_WEDLef, ADAR_ac_B.Merge1_e,
        ADAR_ac_B.Merge3_d, CeADAR_e_LeftWED, &ADAR_ac_DW.ADAR_LearningProcedure);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* DataTypeConversion: '<S12>/DataTypeConversion' incorporates:
     *  Merge: '<S8>/Merge'
     */
    ADAR_ac_B.DataTypeConversion_d = ADAR_ac_B.Merge_k;

    /* DataTypeConversion: '<S13>/DataTypeConversion' incorporates:
     *  Merge: '<S8>/Merge4'
     */
    ADAR_ac_B.DataTypeConversion_e5 = VeADAC_e_LftCtrlCmnd;

    /* Gain: '<S17>/Gain' */
    ADAR_ac_B.Gain_i = ADAR_ac_B.UnitDelay2_j;

    /* Gain: '<S18>/Gain' */
    ADAR_ac_B.Gain_g = VeADAC_L_LftPosAct;

    /* Update for UnitDelay: '<S4>/Unit Delay3' incorporates:
     *  Merge: '<S8>/Merge'
     */
    ADAR_ac_DW.UnitDelay3_DSTATE_j = ADAR_ac_B.Merge_k;

    /* Update for UnitDelay: '<S4>/Unit Delay8' */
    ADAR_ac_DW.UnitDelay8_DSTATE_n = ADAR_ac_B.Merge3_d;

    /* Update for UnitDelay: '<S4>/Unit Delay7' */
    ADAR_ac_DW.UnitDelay7_DSTATE = ADAR_ac_B.Merge1_e;

    /* Update for UnitDelay: '<S4>/Unit Delay1' incorporates:
     *  Merge: '<S8>/Merge4'
     */
    ADAR_ac_DW.UnitDelay1_DSTATE_d = VeADAC_e_LftCtrlCmnd;

    /* End of Outputs for SubSystem: '<S1>/Left_WED' */
#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Outputs for Function Call SubSystem: '<S1>/Right_WED' */
    for (i = 0; i < 10; i++)
    {
        /* DataStoreRead: '<S5>/Data Store Read5' */
        rtb_DataStoreRead_dy[i] = VaADAR_L_RtTAPos_DS[(i)];
    }

    for (i = 0; i < 4; i++)
    {
        /* DataStoreRead: '<S5>/Data Store Read8' */
        rtb_DataStoreRead5_f[i] = VaADAR_Cnt_RtEndStpLearning_DS[(i)];
    }

    /* DataStoreRead: '<S5>/Data Store Read9' */
    ADAR_ac_B.Switch = NeADAR_L_RtTAPos;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/RTMRLearningRequired'
     */
    /* Logic: '<S433>/Logical4' incorporates:
     *  Constant: '<S837>/Constant'
     *  Constant: '<S839>/Calib'
     *  RelationalOperator: '<S433>/Comparison2'
     *  SignalConversion generated from: '<S1>/VeRTMR_e_WEDLearningProcedure'
     */
    ADAR_ac_B.AND_c = ((((uint32)rtb_TmpSignalConversionAtVeRTMR_e_WEDLea) ==
                        CeRTMR_e_WED_Active) || (KeADAR_b_LearningActiveOvrd));

    /* Outputs for Atomic SubSystem: '<S433>/EdgeRising' */
    /* Logic: '<S836>/OR1' incorporates:
     *  UnitDelay: '<S836>/Unit Delay'
     */
    rtb_OR1_a = !ADAR_ac_DW.UnitDelay_DSTATE_l;

    /* Update for UnitDelay: '<S836>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_l = ADAR_ac_B.AND_c;

    /* Outputs for Enabled SubSystem: '<S433>/If Action Subsystem' incorporates:
     *  EnablePort: '<S838>/Enable'
     */
    /* Logic: '<S836>/AND' */
    if ((ADAR_ac_B.AND_c) && rtb_OR1_a)
    {
        /* DataStoreWrite: '<S838>/Data Store Write1' */
        for (i = 0; i < 4; i++)
        {
            VaADAR_Cnt_RtEndStpLearning_DS[(i)] = 0;
        }

        /* End of DataStoreWrite: '<S838>/Data Store Write1' */

        /* DataStoreWrite: '<S838>/Data Store Write2' */
        for (i = 0; i < 10; i++)
        {
            VaADAR_L_RtTAPos_DS[(i)] = 0.0F;
        }

        /* End of DataStoreWrite: '<S838>/Data Store Write2' */
    }

    /* End of Logic: '<S836>/AND' */
    /* End of Outputs for SubSystem: '<S433>/If Action Subsystem' */
    /* End of Outputs for SubSystem: '<S433>/EdgeRising' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADAC_Preprocessing'
     */
    /* RelationalOperator: '<S427>/Relational Operator2' incorporates:
     *  UnitDelay: '<S427>/Unit Delay2'
     */
    rtb_OR1_a = (rtb_DataStoreRead5_f[0] != ADAR_ac_DW.UnitDelay2_DSTATE);

    /* UnitDelay: '<S427>/Unit Delay3' incorporates:
     *  UnitDelay: '<S427>/Unit Delay2'
     */
    ADAR_ac_DW.UnitDelay2_DSTATE = ADAR_ac_DW.UnitDelay3_DSTATE;

    /* RelationalOperator: '<S427>/Relational Operator3' incorporates:
     *  UnitDelay: '<S427>/Unit Delay2'
     */
    rtb_RelationalOperator3_b = (rtb_DataStoreRead5_f[1] !=
        ADAR_ac_DW.UnitDelay2_DSTATE);

    /* UnitDelay: '<S427>/Unit Delay4' incorporates:
     *  UnitDelay: '<S427>/Unit Delay2'
     */
    ADAR_ac_DW.UnitDelay2_DSTATE = ADAR_ac_DW.UnitDelay4_DSTATE;

    /* RelationalOperator: '<S427>/Relational Operator4' incorporates:
     *  UnitDelay: '<S427>/Unit Delay2'
     */
    rtb_RelationalOperator4_hx = (rtb_DataStoreRead5_f[2] !=
        ADAR_ac_DW.UnitDelay2_DSTATE);

    /* UnitDelay: '<S427>/Unit Delay5' incorporates:
     *  UnitDelay: '<S427>/Unit Delay2'
     */
    ADAR_ac_DW.UnitDelay2_DSTATE = ADAR_ac_DW.UnitDelay5_DSTATE;

    /* Logic: '<S427>/Logical14' incorporates:
     *  RelationalOperator: '<S427>/Relational Operator5'
     *  UnitDelay: '<S427>/Unit Delay2'
     */
    rtb_OR1_a = (((rtb_OR1_a || rtb_RelationalOperator3_b) ||
                  rtb_RelationalOperator4_hx) || (rtb_DataStoreRead5_f[3] !=
                  ADAR_ac_DW.UnitDelay2_DSTATE));

    /* Outputs for Atomic SubSystem: '<S427>/EdgeRising1' */
    /* Logic: '<S708>/OR1' incorporates:
     *  UnitDelay: '<S708>/Unit Delay'
     */
    rtb_RelationalOperator3_b = !ADAR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S708>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_f = rtb_OR1_a;

    /* Outputs for Enabled SubSystem: '<S427>/EndStop_Process' */
    /* Logic: '<S708>/AND' incorporates:
     *  Constant: '<S431>/Constant'
     *  DataStoreRead: '<S5>/Data Store Read6'
     */
    ADAR_ac_EndStop_Process(rtb_OR1_a && rtb_RelationalOperator3_b,
                            NaADAR_Pct_RtEndStp[0], NaADAR_Pct_RtEndStp[1],
                            NaADAR_Pct_RtEndStp[2], NaADAR_Pct_RtEndStp[3],
                            CeADAR_e_RightWED);

    /* End of Outputs for SubSystem: '<S427>/EndStop_Process' */
    /* End of Outputs for SubSystem: '<S427>/EdgeRising1' */

    /* RelationalOperator: '<S427>/Relational Operator' incorporates:
     *  DataStoreRead: '<S5>/Data Store Read7'
     *  UnitDelay: '<S427>/Unit Delay'
     */
    rtb_OR1_a = (VeADAR_Cnt_RtTAPosLearning_DS != ADAR_ac_DW.UnitDelay_DSTATE_p);

    /* Outputs for Atomic SubSystem: '<S427>/EdgeRising' */
    /* Logic: '<S707>/OR1' incorporates:
     *  UnitDelay: '<S707>/Unit Delay'
     */
    rtb_RelationalOperator3_b = !ADAR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S707>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_o = rtb_OR1_a;

    /* Outputs for Enabled SubSystem: '<S427>/TA_Processing' */
    /* Logic: '<S707>/AND' incorporates:
     *  Constant: '<S431>/Constant'
     */
    ADAR_ac_TA_Processing(rtb_OR1_a && rtb_RelationalOperator3_b,
                          rtb_DataStoreRead_dy, CeADAR_e_RightWED);

    /* End of Outputs for SubSystem: '<S427>/TA_Processing' */
    /* End of Outputs for SubSystem: '<S427>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S427>/RightWED' incorporates:
     *  ActionPort: '<S713>/Action Port'
     */
    /* If: '<S427>/If' */
    ADAR_ac_RightWED(ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pwm_,
                     rtb_TmpSignalConversionAtVeADIB_I_WEDRig,
                     (&(VeADAC_L_RtPosAct)), &ADAR_ac_B.RightWED_c);

    /* End of Outputs for SubSystem: '<S427>/RightWED' */

    /* Update for UnitDelay: '<S427>/Unit Delay2' */
    ADAR_ac_DW.UnitDelay2_DSTATE = rtb_DataStoreRead5_f[0];

    /* Update for UnitDelay: '<S427>/Unit Delay3' */
    ADAR_ac_DW.UnitDelay3_DSTATE = rtb_DataStoreRead5_f[1];

    /* Update for UnitDelay: '<S427>/Unit Delay4' */
    ADAR_ac_DW.UnitDelay4_DSTATE = rtb_DataStoreRead5_f[2];

    /* Update for UnitDelay: '<S427>/Unit Delay5' */
    ADAR_ac_DW.UnitDelay5_DSTATE = rtb_DataStoreRead5_f[3];

    /* Update for UnitDelay: '<S427>/Unit Delay' incorporates:
     *  DataStoreRead: '<S5>/Data Store Read7'
     */
    ADAR_ac_DW.UnitDelay_DSTATE_p = VeADAR_Cnt_RtTAPosLearning_DS;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADAC_DtrmnActnSts1'
     */
    /* Switch: '<S425>/Switch' incorporates:
     *  Constant: '<S534>/Constant'
     *  Constant: '<S536>/Constant'
     *  Logic: '<S425>/Logical10'
     *  Logic: '<S425>/Logical4'
     *  Logic: '<S425>/Logical6'
     *  Logic: '<S425>/Logical8'
     *  RelationalOperator: '<S425>/Comparison6'
     *  RelationalOperator: '<S425>/Comparison7'
     *  SignalConversion generated from: '<S1>/VeADCR_e_WEDRtCmndStat'
     *  Switch: '<S425>/Switch1'
     *  UnitDelay: '<S425>/Unit Delay1'
     *  UnitDelay: '<S425>/Unit Delay2'
     *  UnitDelay: '<S425>/Unit Delay3'
     *  UnitDelay: '<S425>/Unit Delay8'
     */
    if (((((uint32)rtb_TmpSignalConversionAtVeADCR_e_WEDRtC) ==
            CeADCR_e_CmndOpen) && ((ADAR_ac_DW.UnitDelay1_DSTATE_j) ||
            (ADAR_ac_DW.UnitDelay3_DSTATE_d4))) && (ADAR_ac_B.AND_c))
    {
        /* Switch: '<S425>/Switch' incorporates:
         *  Constant: '<S535>/Constant'
         */
        rtb_TmpSignalConversionAtVeADCR_e_WEDRtC = CeADCR_e_CmndClsd;
    }
    else
    {
        if (((((uint32)rtb_TmpSignalConversionAtVeADCR_e_WEDRtC) ==
                CeADCR_e_CmndClsd) && ((ADAR_ac_DW.UnitDelay2_DSTATE_m) ||
                (ADAR_ac_DW.UnitDelay8_DSTATE))) && (ADAR_ac_B.AND_c))
        {
            /* Switch: '<S425>/Switch1' incorporates:
             *  Constant: '<S537>/Constant'
             *  Switch: '<S425>/Switch'
             */
            rtb_TmpSignalConversionAtVeADCR_e_WEDRtC = CeADCR_e_CmndOpen;
        }
    }

    /* End of Switch: '<S425>/Switch' */

    /* RelationalOperator: '<S425>/Comparison10' incorporates:
     *  Constant: '<S532>/Constant'
     *  Switch: '<S425>/Switch'
     */
    rtb_OR1_a = (((uint32)rtb_TmpSignalConversionAtVeADCR_e_WEDRtC) ==
                 CeADCR_e_CmndOpen);

    /* RelationalOperator: '<S425>/Comparison13' incorporates:
     *  Constant: '<S533>/Constant'
     *  RelationalOperator: '<S425>/Comparison10'
     *  Switch: '<S425>/Switch'
     */
    rtb_RelationalOperator3_b = (((uint32)
        rtb_TmpSignalConversionAtVeADCR_e_WEDRtC) == CeADCR_e_CmndClsd);

    /* If: '<S425>/If' incorporates:
     *  Constant: '<S538>/Calib'
     *  Constant: '<S539>/Calib'
     *  Logic: '<S425>/Logical1'
     *  Logic: '<S425>/Logical14'
     *  Logic: '<S425>/Logical7'
     *  Logic: '<S425>/Logical9'
     *  RelationalOperator: '<S425>/Comparison'
     *  RelationalOperator: '<S425>/Comparison1'
     *  RelationalOperator: '<S425>/Comparison3'
     *  RelationalOperator: '<S425>/Comparison4'
     *  UnitDelay: '<S5>/Unit Delay1'
     *  UnitDelay: '<S5>/Unit Delay4'
     *  UnitDelay: '<S5>/Unit Delay6'
     *  UnitDelay: '<S5>/Unit Delay7'
     */
    rtPrevAction = ADAR_ac_DW.If_ActiveSubsystem_d;
    if (rtb_OR1_a && (VeADAC_L_RtPosAct > KeADAR_L_WEDActuation_OpenThr))
    {
        ADAR_ac_DW.If_ActiveSubsystem_d = 0;
    }
    else if ((ADAR_ac_DW.UnitDelay6_DSTATE) && rtb_OR1_a)
    {
        ADAR_ac_DW.If_ActiveSubsystem_d = 1;
    }
    else if (rtb_RelationalOperator3_b && (VeADAC_L_RtPosAct <
              KeADAR_L_WEDActuation_ClsdThr))
    {
        ADAR_ac_DW.If_ActiveSubsystem_d = 2;
    }
    else if (rtb_RelationalOperator3_b && (ADAR_ac_DW.UnitDelay4_DSTATE_k))
    {
        ADAR_ac_DW.If_ActiveSubsystem_d = 3;
    }
    else if (VeADAC_L_RtPosAct <= KeADAR_L_WEDActuation_OpenThr)
    {
        ADAR_ac_DW.If_ActiveSubsystem_d = 4;
    }
    else if (VeADAC_L_RtPosAct >= KeADAR_L_WEDActuation_ClsdThr)
    {
        ADAR_ac_DW.If_ActiveSubsystem_d = 5;
    }
    else
    {
        ADAR_ac_DW.If_ActiveSubsystem_d = 6;
    }

    switch (ADAR_ac_DW.If_ActiveSubsystem_d)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S425>/Write_Opening_Status' incorporates:
         *  ActionPort: '<S545>/Action Port'
         */
        ADAR_ac_Write_Opening_Status(ADAR_ac_DW.UnitDelay7_DSTATE_l,
            &ADAR_ac_B.Merge, &ADAR_ac_B.Merge1, (&(VeADAC_e_RtCtrlCmnd)));

        /* End of Outputs for SubSystem: '<S425>/Write_Opening_Status' */
        break;

      case 1:
        if (ADAR_ac_DW.If_ActiveSubsystem_d != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S425>/Write_Opening_WithHold' incorporates:
             *  ActionPort: '<S546>/Action Port'
             */
            /* SystemReset for If: '<S425>/If' */
            ADAR_ac_Write_Opening_WithHold_Reset
                (&ADAR_ac_DW.Write_Opening_WithHold_g);

            /* End of SystemReset for SubSystem: '<S425>/Write_Opening_WithHold' */
        }

        /* Outputs for IfAction SubSystem: '<S425>/Write_Opening_WithHold' incorporates:
         *  ActionPort: '<S546>/Action Port'
         */
        ADAR_ac_Write_Opening_WithHold(ADAR_ac_B.UnitDelay2,
            ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pwm_, ADAR_ac_B.AND_c,
            &ADAR_ac_B.Merge, &ADAR_ac_B.Merge1, (&(VeADAC_e_RtCtrlCmnd)),
            &ADAR_ac_B.Write_Opening_WithHold_g,
            &ADAR_ac_DW.Write_Opening_WithHold_g);

        /* End of Outputs for SubSystem: '<S425>/Write_Opening_WithHold' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S425>/Write_Closing_Status' incorporates:
         *  ActionPort: '<S541>/Action Port'
         */
        ADAR_ac_Write_Closing_Status(ADAR_ac_DW.UnitDelay7_DSTATE_l,
            &ADAR_ac_B.Merge, &ADAR_ac_B.Merge3, (&(VeADAC_e_RtCtrlCmnd)));

        /* End of Outputs for SubSystem: '<S425>/Write_Closing_Status' */
        break;

      case 3:
        if (ADAR_ac_DW.If_ActiveSubsystem_d != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S425>/Write_Closing_WithHold' incorporates:
             *  ActionPort: '<S542>/Action Port'
             */
            /* SystemReset for If: '<S425>/If' */
            ADAR_ac_Write_Closing_WithHold_Reset
                (&ADAR_ac_DW.Write_Closing_WithHold_g);

            /* End of SystemReset for SubSystem: '<S425>/Write_Closing_WithHold' */
        }

        /* Outputs for IfAction SubSystem: '<S425>/Write_Closing_WithHold' incorporates:
         *  ActionPort: '<S542>/Action Port'
         */
        ADAR_ac_Write_Closing_WithHold(ADAR_ac_B.UnitDelay2,
            ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pwm_, ADAR_ac_B.AND_c,
            &ADAR_ac_B.Merge, (&(VeADAC_e_RtCtrlCmnd)), &ADAR_ac_B.Merge3,
            &ADAR_ac_B.Write_Closing_WithHold_g,
            &ADAR_ac_DW.Write_Closing_WithHold_g);

        /* End of Outputs for SubSystem: '<S425>/Write_Closing_WithHold' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S425>/Write_Open_Status' incorporates:
         *  ActionPort: '<S544>/Action Port'
         */
        ADAR_ac_Write_Open_Status(ADAR_ac_B.AND_c,
            ADAR_ac_DW.UnitDelay1_DSTATE_po, rtb_DataStoreRead5_f[1],
            rtb_DataStoreRead5_f[0], &ADAR_ac_B.Merge, &ADAR_ac_B.Merge1,
            (&(VeADAC_e_RtCtrlCmnd)), &ADAR_ac_B.Write_Open_Status_p,
            &ADAR_ac_DW.Write_Open_Status_p);

        /* End of Outputs for SubSystem: '<S425>/Write_Open_Status' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S425>/Write_Closed_Status' incorporates:
         *  ActionPort: '<S540>/Action Port'
         */
        ADAR_ac_Write_Closed_Status(ADAR_ac_B.AND_c,
            ADAR_ac_DW.UnitDelay1_DSTATE_po, rtb_DataStoreRead5_f[2],
            rtb_DataStoreRead5_f[3], &ADAR_ac_B.Merge, &ADAR_ac_B.Merge3,
            (&(VeADAC_e_RtCtrlCmnd)), &ADAR_ac_B.Write_Closed_Status_c,
            &ADAR_ac_DW.Write_Closed_Status_c);

        /* End of Outputs for SubSystem: '<S425>/Write_Closed_Status' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S425>/Write_Indeterminate_Status' incorporates:
         *  ActionPort: '<S543>/Action Port'
         */
        ADAR_ac_Write_Indeterminate_Status(&ADAR_ac_B.Merge, &ADAR_ac_B.Merge1,
            &ADAR_ac_B.Merge3, (&(VeADAC_e_RtCtrlCmnd)));

        /* End of Outputs for SubSystem: '<S425>/Write_Indeterminate_Status' */
        break;
    }

    /* End of If: '<S425>/If' */

    /* Update for UnitDelay: '<S425>/Unit Delay1' */
    ADAR_ac_DW.UnitDelay1_DSTATE_j = ADAR_ac_B.Merge3;

    /* Update for UnitDelay: '<S425>/Unit Delay3' */
    ADAR_ac_DW.UnitDelay3_DSTATE_d4 = ADAR_ac_B.Write_Closed_Status_c.Switch1;

    /* Update for UnitDelay: '<S425>/Unit Delay2' */
    ADAR_ac_DW.UnitDelay2_DSTATE_m = ADAR_ac_B.Write_Open_Status_p.Switch;

    /* Update for UnitDelay: '<S425>/Unit Delay8' */
    ADAR_ac_DW.UnitDelay8_DSTATE = ADAR_ac_B.Merge1;

    /* Update for If: '<S425>/If' */
    switch (ADAR_ac_DW.If_ActiveSubsystem_d)
    {
      case 0:
      case 2:
      case 4:
      case 5:
      case 6:
        break;

      case 1:
        /* Update for IfAction SubSystem: '<S425>/Write_Opening_WithHold' incorporates:
         *  ActionPort: '<S546>/Action Port'
         */
        ADAR_ac_Write_Opening_WithHold_Update
            (ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pwm_,
             &ADAR_ac_B.Write_Opening_WithHold_g,
             &ADAR_ac_DW.Write_Opening_WithHold_g);

        /* End of Update for SubSystem: '<S425>/Write_Opening_WithHold' */
        break;

      case 3:
        /* Update for IfAction SubSystem: '<S425>/Write_Closing_WithHold' incorporates:
         *  ActionPort: '<S542>/Action Port'
         */
        ADAR_ac_Write_Closing_WithHold_Update
            (ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pwm_,
             &ADAR_ac_B.Write_Closing_WithHold_g,
             &ADAR_ac_DW.Write_Closing_WithHold_g);

        /* End of Update for SubSystem: '<S425>/Write_Closing_WithHold' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Update for If: '<S425>/If' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADAC_PosProf'
     */
    /* Switch: '<S426>/Switch' incorporates:
     *  Constant: '<S583>/Calib'
     */
    if (!HeADAR_b_UseLearnedTAValue)
    {
        /* Switch: '<S426>/Switch' incorporates:
         *  Constant: '<S436>/Calib'
         */
        ADAR_ac_B.Switch = KeADAR_L_RtTAValue;
    }

    /* End of Switch: '<S426>/Switch' */

    /* If: '<S426>/If' incorporates:
     *  Constant: '<S432>/Calib'
     *  Constant: '<S580>/Constant'
     *  Constant: '<S581>/Constant'
     *  Merge: '<S425>/Merge4'
     *  RelationalOperator: '<S426>/Relational Operator'
     *  RelationalOperator: '<S426>/Relational Operator1'
     *  UnitDelay: '<S426>/Unit Delay'
     */
    rtPrevAction = ADAR_ac_DW.If_ActiveSubsystem_g;
    if (((uint32)VeADAC_e_RtCtrlCmnd) == CeADAR_e_ActuateClosing)
    {
        ADAR_ac_DW.If_ActiveSubsystem_g = 0;
    }
    else if (((uint32)VeADAC_e_RtCtrlCmnd) == CeADAR_e_ActuateOpening)
    {
        ADAR_ac_DW.If_ActiveSubsystem_g = 1;
    }
    else
    {
        ADAR_ac_DW.If_ActiveSubsystem_g = 2;
    }

    if (rtPrevAction != ADAR_ac_DW.If_ActiveSubsystem_g)
    {
        switch (rtPrevAction)
        {
          case 0:
            ADAR_ac_Engagement_Disable(&ADAR_ac_DW.Engagement_a);
            break;

          case 1:
            ADAR_ac_Disengagement_Disable(&ADAR_ac_DW.Disengagement_n);
            break;

          case 2:
            break;

          default:
            /* no actions */
            break;
        }
    }

    switch (ADAR_ac_DW.If_ActiveSubsystem_g)
    {
      case 0:
        if (ADAR_ac_DW.If_ActiveSubsystem_g != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S426>/Engagement' incorporates:
             *  ActionPort: '<S579>/Action Port'
             */
            /* SystemReset for If: '<S426>/If' */
            ADAR_ac_Engagement_Reset(&ADAR_ac_DW.Engagement_a);

            /* End of SystemReset for SubSystem: '<S426>/Engagement' */
        }

        /* Outputs for IfAction SubSystem: '<S426>/Engagement' incorporates:
         *  ActionPort: '<S579>/Action Port'
         */
        ADAR_ac_Engagement(VeADAC_L_RtPosAct, HeADAR_t_FastTEA_dT,
                           ADAR_ac_DW.UnitDelay_DSTATE_i, ADAR_ac_B.UnitDelay2,
                           ADAR_ac_B.Switch, (&(VeADAC_e_RtActuationStage)),
                           (&(VeADAC_L_RtProfilePosition)),
                           (&(VeADAC_k_RtPGainPos)), (&(VeADAC_k_RtIGainPos)), (
                            &(VeADAC_k_RtDGainPos)), &ADAR_ac_B.Engagement_a,
                           &ADAR_ac_DW.Engagement_a);

        /* End of Outputs for SubSystem: '<S426>/Engagement' */
        break;

      case 1:
        if (ADAR_ac_DW.If_ActiveSubsystem_g != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S426>/Disengagement' incorporates:
             *  ActionPort: '<S578>/Action Port'
             */
            /* SystemReset for If: '<S426>/If' */
            ADAR_ac_Disengagement_Reset(&ADAR_ac_DW.Disengagement_n);

            /* End of SystemReset for SubSystem: '<S426>/Disengagement' */
        }

        /* Outputs for IfAction SubSystem: '<S426>/Disengagement' incorporates:
         *  ActionPort: '<S578>/Action Port'
         */
        ADAR_ac_Disengagement(VeADAC_L_RtPosAct, HeADAR_t_FastTEA_dT,
                              ADAR_ac_B.UnitDelay2, (&(VeADAC_e_RtActuationStage)),
                              (&(VeADAC_L_RtProfilePosition)),
                              (&(VeADAC_k_RtPGainPos)), (&(VeADAC_k_RtIGainPos)),
                              (&(VeADAC_k_RtDGainPos)),
                              &ADAR_ac_B.Disengagement_n,
                              &ADAR_ac_DW.Disengagement_n);

        /* End of Outputs for SubSystem: '<S426>/Disengagement' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S426>/Idle' incorporates:
         *  ActionPort: '<S582>/Action Port'
         */
        ADAR_ac_Idle(VeADAC_e_RtCtrlCmnd, (&(VeADAC_e_RtActuationStage)),
                     (&(VeADAC_L_RtProfilePosition)), (&(VeADAC_k_RtPGainPos)),
                     (&(VeADAC_k_RtIGainPos)), (&(VeADAC_k_RtDGainPos)));

        /* End of Outputs for SubSystem: '<S426>/Idle' */
        break;
    }

    /* End of If: '<S426>/If' */

    /* Update for UnitDelay: '<S426>/Unit Delay' */
    ADAR_ac_DW.UnitDelay_DSTATE_i = VeADAC_I_RtITermPos;

    /* Update for If: '<S426>/If' */
    switch (ADAR_ac_DW.If_ActiveSubsystem_g)
    {
      case 0:
        /* Update for IfAction SubSystem: '<S426>/Engagement' incorporates:
         *  ActionPort: '<S579>/Action Port'
         */
        ADAR_ac_Engagement_Update(&ADAR_ac_B.Engagement_a,
            &ADAR_ac_DW.Engagement_a);

        /* End of Update for SubSystem: '<S426>/Engagement' */
        break;

      case 1:
        /* Update for IfAction SubSystem: '<S426>/Disengagement' incorporates:
         *  ActionPort: '<S578>/Action Port'
         */
        ADAR_ac_Disengagement_Update(&ADAR_ac_B.Disengagement_n,
            &ADAR_ac_DW.Disengagement_n);

        /* End of Update for SubSystem: '<S426>/Disengagement' */
        break;

      case 2:
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Update for If: '<S426>/If' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADAC_CalcCurrCmnd'
     */
    /* UnitDelay: '<S423>/Unit Delay2' */
    ADAR_ac_B.UnitDelay2 = ADAR_ac_DW.UnitDelay2_DSTATE_d;

    /* If: '<S423>/If' incorporates:
     *  Constant: '<S438>/Calib'
     *  Logic: '<S423>/Logical Operator'
     *  Logic: '<S423>/Logical Operator1'
     */
    rtPrevAction = ADAR_ac_DW.If_ActiveSubsystem;
    ADAR_ac_DW.If_ActiveSubsystem = (sint8)(((!HeADAR_b_UsePosCntrl) ||
        (ADAR_ac_B.AND_c)) ? 1 : 0);
    if (ADAR_ac_DW.If_ActiveSubsystem == 0)
    {
        if (0 != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S423>/PositionControl' incorporates:
             *  ActionPort: '<S440>/Action Port'
             */
            /* SystemReset for If: '<S423>/If' */
            ADAR_ac_PositionControl_Reset(&ADAR_ac_DW.PositionControl_m);

            /* End of SystemReset for SubSystem: '<S423>/PositionControl' */
        }

        /* Outputs for IfAction SubSystem: '<S423>/PositionControl' incorporates:
         *  ActionPort: '<S440>/Action Port'
         */
        ADAR_ac_PositionControl(VeADAC_L_RtProfilePosition, VeADAC_k_RtPGainPos,
                                VeADAC_k_RtIGainPos, VeADAC_k_RtDGainPos,
                                VeADAC_L_RtPosAct, VeADAC_e_RtCtrlCmnd,
                                ADAR_ac_B.UnitDelay2, ADAR_ac_B.AND_c,
                                &rtb_Merge_a, (&(VeADAC_I_RtPIDPos)),
                                (&(VeADAC_I_RtPTermPos)), (&(VeADAC_I_RtITermPos)),
                                (&(VeADAC_I_RtDTermPos)), (&(VeADAC_b_RtPIDReset)),
                                &ADAR_ac_DW.PositionControl_m);

        /* End of Outputs for SubSystem: '<S423>/PositionControl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S423>/ConstanCurrentControl' incorporates:
         *  ActionPort: '<S437>/Action Port'
         */
        ADAR_ac_ConstanCurrentControl(VeADAC_e_RtCtrlCmnd, &rtb_Merge_a,
            (&(VeADAC_I_RtPIDPos)), (&(VeADAC_I_RtPTermPos)),
            (&(VeADAC_I_RtITermPos)), (&(VeADAC_I_RtDTermPos)),
            (&(VeADAC_b_RtPIDReset)));

        /* End of Outputs for SubSystem: '<S423>/ConstanCurrentControl' */
    }

    /* End of If: '<S423>/If' */

    /* Outputs for Atomic SubSystem: '<S423>/RateLimitWithOvrCrrntPrtctn' */
    /* Abs: '<S441>/Abs' incorporates:
     *  Abs: '<S441>/Abs1'
     */
    rtb_Sum2_h = fabsf(rtb_Merge_a);

    /* Outputs for Atomic SubSystem: '<S441>/Hysteresis' */
    /* Switch: '<S488>/Switch1' incorporates:
     *  Abs: '<S441>/Abs'
     *  Constant: '<S488>/Constant Value'
     *  Constant: '<S490>/Calib'
     *  Constant: '<S491>/Calib'
     *  RelationalOperator: '<S488>/Greater  Than'
     *  RelationalOperator: '<S488>/Greater  Than1'
     *  UnitDelay: '<S488>/Unit Delay'
     */
    if (rtb_Sum2_h > KeADAR_I_OvrCrntThrshRSP)
    {
        ADAR_ac_DW.UnitDelay_DSTATE_h = true;
    }
    else
    {
        ADAR_ac_DW.UnitDelay_DSTATE_h = ((rtb_Sum2_h >= KeADAR_I_OvrCrntThrshLSP)
            && (ADAR_ac_DW.UnitDelay_DSTATE_h));
    }

    /* End of Switch: '<S488>/Switch1' */
    /* End of Outputs for SubSystem: '<S441>/Hysteresis' */

    /* Chart: '<S441>/OverCurrentProtection' incorporates:
     *  Constant: '<S439>/Calib'
     *  Constant: '<S489>/Calib'
     *  Constant: '<S494>/Calib'
     *  Constant: '<S495>/Calib'
     *  Merge: '<S425>/Merge4'
     *  RelationalOperator: '<S426>/Relational Operator'
     *  UnitDelay: '<S488>/Unit Delay'
     */
    /* Gateway: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
    /* During: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
    if (((uint32)ADAR_ac_DW.is_active_c4_ADAC_CalcCurrCmnd_Lib) == 0U)
    {
        /* Entry: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
        ADAR_ac_DW.is_active_c4_ADAC_CalcCurrCmnd_Lib = 1U;

        /* Entry Internal: ADAC_CalcCurrCmnd/RateLimitWithOvrCrrntPrtctn/OverCurrentProtection */
        /* Transition: '<S496>:2' */
        VeADAC_t_RtWEDHeatingTmr = 0.0F;
        VeADAC_t_RtWEDCoolDownTmr = 0.0F;
        VeADAC_r_RtHeatingTmrRatio = 0.001F;
        ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib = ADAR_ac_IN_NormalOperation;

        /* Entry Internal 'NormalOperation': '<S496>:3' */
        /* Transition: '<S496>:41' */
        ADAR_ac_DW.is_NormalOperation = ADAR_ac_IN_Idle;

        /* Entry 'Idle': '<S496>:40' */
        ADAR_ac_B.LeADAC_I_WEDCmndCrnt = rtb_Sum2_h;
        ADAR_ac_B.LeADAC_b_FreezeIntegrator = false;
        VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_NormalActuation;
    }
    else
    {
        switch (ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib)
        {
          case AD_IN_CoolDownPeriodAfterSuccessfulShift:
            VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_CoolDownSteadyStates;

            /* Outputs for Function Call SubSystem: '<S5>/ADAC_PosProf' */
            /* During 'CoolDownPeriodAfterSuccessfulShift': '<S496>:24' */
            if ((((uint32)VeADAC_e_RtCtrlCmnd) != CeADAR_e_SSClosed) &&
                    (((uint32)VeADAC_e_RtCtrlCmnd) != CeADAR_e_SSOpened))
            {
                /* Transition: '<S496>:29' */
                if (VeADAC_t_RtWEDCoolDownTmr >= (KeADAR_t_CoolDownCrntTmLmt *
                        VeADAC_r_RtHeatingTmrRatio))
                {
                    /* Transition: '<S496>:8' */
                    /* Transition: '<S496>:34' */
                    VeADAC_t_RtWEDHeatingTmr = 0.0F;
                    VeADAC_r_RtHeatingTmrRatio = 0.001F;
                }
                else
                {
                    /* Transition: '<S496>:53' */
                }

                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib =
                    ADAR_ac_IN_NormalOperation;

                /* Entry Internal 'NormalOperation': '<S496>:3' */
                /* Transition: '<S496>:41' */
                ADAR_ac_DW.is_NormalOperation = ADAR_ac_IN_Idle;

                /* Entry 'Idle': '<S496>:40' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt = rtb_Sum2_h;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator = false;
                VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_NormalActuation;
            }
            else
            {
                /*  Update state timer */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt = rtb_Sum2_h;
                VeADAC_t_RtWEDCoolDownTmr = VeADAC_t_RtWEDCoolDownTmr +
                    HeADAR_t_FastTEA_dT;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator = true;
            }

            /* End of Outputs for SubSystem: '<S5>/ADAC_PosProf' */
            break;

          case ADAR_ac_IN_NormalOperation:
            /* Outputs for Function Call SubSystem: '<S5>/ADAC_PosProf' */
            /* During 'NormalOperation': '<S496>:3' */
            if ((((uint32)VeADAC_e_RtCtrlCmnd) == CeADAR_e_SSOpened) ||
                    (((uint32)VeADAC_e_RtCtrlCmnd) == CeADAR_e_SSClosed))
            {
                /* Transition: '<S496>:30' */
                /* Exit Internal 'NormalOperation': '<S496>:3' */
                ADAR_ac_DW.is_NormalOperation = ADAR_ac_IN_NO_ACTIVE_CHILD_d;
                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib =
                    AD_IN_CoolDownPeriodAfterSuccessfulShift;

                /* Entry 'CoolDownPeriodAfterSuccessfulShift': '<S496>:24' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt = rtb_Sum2_h;
                VeADAC_t_RtWEDCoolDownTmr = 0.0F;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator = true;
                VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_CoolDownSteadyStates;
            }
            else if (VeADAC_t_RtWEDHeatingTmr >= KeADAR_t_OvrCrntTmLmt)
            {
                /* Transition: '<S496>:5' */
                /* Exit Internal 'NormalOperation': '<S496>:3' */
                ADAR_ac_DW.is_NormalOperation = ADAR_ac_IN_NO_ACTIVE_CHILD_d;
                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib =
                    ADAR_ac_IN_OverHeatingProtection;

                /* Entry 'OverHeatingProtection': '<S496>:4' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt = KeADAR_I_CoolDownCrntCmnd;
                VeADAC_t_RtWEDCoolDownTmr = 0.0F;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator = true;
                VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_CoolDownActuation;
            }
            else if (((sint32)ADAR_ac_DW.is_NormalOperation) == 1)
            {
                VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_NormalActuation;

                /* During 'Idle': '<S496>:40' */
                if (ADAR_ac_DW.UnitDelay_DSTATE_h)
                {
                    /* Transition: '<S496>:43' */
                    ADAR_ac_DW.is_NormalOperation =
                        ADAR_ac_IN_UpdateOverCurrentTimer;

                    /* Entry 'UpdateOverCurrentTimer': '<S496>:42' */
                    VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_NormalActuation;
                }
                else
                {
                    ADAR_ac_B.LeADAC_I_WEDCmndCrnt = rtb_Sum2_h;
                    ADAR_ac_B.LeADAC_b_FreezeIntegrator = false;
                }
            }
            else
            {
                VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_NormalActuation;

                /* During 'UpdateOverCurrentTimer': '<S496>:42' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt = rtb_Sum2_h;
                VeADAC_t_RtWEDHeatingTmr = VeADAC_t_RtWEDHeatingTmr +
                    HeADAR_t_FastTEA_dT;
                VeADAC_r_RtHeatingTmrRatio = VeADAC_t_RtWEDHeatingTmr /
                    (KeADAR_t_OvrCrntTmLmt + 0.0001F);
                ADAR_ac_B.LeADAC_b_FreezeIntegrator = false;
            }

            /* End of Outputs for SubSystem: '<S5>/ADAC_PosProf' */
            break;

          default:
            VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_CoolDownActuation;

            /* During 'OverHeatingProtection': '<S496>:4' */
            if (VeADAC_t_RtWEDCoolDownTmr >= KeADAR_t_CoolDownCrntTmLmt)
            {
                /* Transition: '<S496>:46' */
                /* Transition: '<S496>:34' */
                VeADAC_t_RtWEDHeatingTmr = 0.0F;
                VeADAC_r_RtHeatingTmrRatio = 0.001F;
                ADAR_ac_DW.is_c4_ADAC_CalcCurrCmnd_Lib =
                    ADAR_ac_IN_NormalOperation;

                /* Entry Internal 'NormalOperation': '<S496>:3' */
                /* Transition: '<S496>:41' */
                ADAR_ac_DW.is_NormalOperation = ADAR_ac_IN_Idle;

                /* Entry 'Idle': '<S496>:40' */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt = rtb_Sum2_h;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator = false;
                VeADAC_e_RtCrrntPrtctnSt = CeADAR_e_NormalActuation;
            }
            else
            {
                /*  Update state timer */
                ADAR_ac_B.LeADAC_I_WEDCmndCrnt = KeADAR_I_CoolDownCrntCmnd;
                VeADAC_t_RtWEDCoolDownTmr = VeADAC_t_RtWEDCoolDownTmr +
                    HeADAR_t_FastTEA_dT;
                ADAR_ac_B.LeADAC_b_FreezeIntegrator = true;
            }
            break;
        }
    }

    /* End of Chart: '<S441>/OverCurrentProtection' */

    /* Signum: '<S441>/Sign' */
    if (rtb_Merge_a < 0.0F)
    {
        rtb_Merge_a = -1.0F;
    }
    else
    {
        if (rtb_Merge_a > 0.0F)
        {
            rtb_Merge_a = 1.0F;
        }
    }

    /* End of Signum: '<S441>/Sign' */

    /* Outputs for Atomic SubSystem: '<S441>/GradientLimiter1' */
    /* Sum: '<S487>/Sum2' incorporates:
     *  Product: '<S441>/Product'
     */
    rtb_Merge_a = (ADAR_ac_B.LeADAC_I_WEDCmndCrnt * rtb_Merge_a) -
        VeADAC_I_RtCrrntCmnd;

    /* Outputs for Atomic SubSystem: '<S487>/Limiter' */
    /* Switch: '<S497>/Switch1' incorporates:
     *  Constant: '<S493>/Calib'
     *  RelationalOperator: '<S497>/Relational Operator'
     */
    if (KeADAR_dI_RtLim_Incr < rtb_Merge_a)
    {
        /* Switch: '<S497>/Switch1' */
        rtb_Merge_a = KeADAR_dI_RtLim_Incr;
    }

    /* End of Switch: '<S497>/Switch1' */

    /* Switch: '<S497>/Switch' incorporates:
     *  Constant: '<S492>/Calib'
     *  RelationalOperator: '<S497>/Relational Operator1'
     */
    if (rtb_Merge_a <= KeADAR_dI_RtLim_Decr)
    {
        rtb_Merge_a = KeADAR_dI_RtLim_Decr;
    }

    /* End of Switch: '<S497>/Switch' */
    /* End of Outputs for SubSystem: '<S487>/Limiter' */

    /* Sum: '<S487>/Sum3' */
    VeADAC_I_RtCrrntCmnd = rtb_Merge_a + VeADAC_I_RtCrrntCmnd;

    /* End of Outputs for SubSystem: '<S441>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S423>/RateLimitWithOvrCrrntPrtctn' */

    /* Update for UnitDelay: '<S423>/Unit Delay2' */
    ADAR_ac_DW.UnitDelay2_DSTATE_d = ADAR_ac_B.LeADAC_b_FreezeIntegrator;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADAC_CalcHBrdgPWM1'
     */
    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADAC_PosProf'
     */
    /* If: '<S498>/If' incorporates:
     *  Constant: '<S504>/Constant'
     *  Constant: '<S505>/Constant'
     *  Constant: '<S506>/Constant'
     *  Constant: '<S507>/Constant'
     *  Logic: '<S498>/Logical Operator'
     *  Logic: '<S498>/Logical Operator1'
     *  Merge: '<S425>/Merge4'
     *  RelationalOperator: '<S426>/Relational Operator'
     *  RelationalOperator: '<S498>/Relational Operator'
     *  RelationalOperator: '<S498>/Relational Operator1'
     *  RelationalOperator: '<S498>/Relational Operator2'
     *  RelationalOperator: '<S498>/Relational Operator3'
     */
    if ((((uint32)VeADAC_e_RtCtrlCmnd) == CeADAR_e_ActuateOpening) || (((uint32)
            VeADAC_e_RtCtrlCmnd) == CeADAR_e_OpeningWithHold))
    {
        /* Outputs for IfAction SubSystem: '<S498>/EngagingGains' incorporates:
         *  ActionPort: '<S503>/Action Port'
         */
        ADAR_ac_EngagingGains((&(VeADAC_k_RtPGainCrrnt)),
                              (&(VeADAC_k_RtIGainCrrnt)),
                              (&(VeADAC_k_RtDGainCrrnt)));

        /* End of Outputs for SubSystem: '<S498>/EngagingGains' */
    }
    else if ((((uint32)VeADAC_e_RtCtrlCmnd) == CeADAR_e_ActuateClosing) ||
             (((uint32)VeADAC_e_RtCtrlCmnd) == CeADAR_e_ClosingWithHold))
    {
        /* Outputs for IfAction SubSystem: '<S498>/DisengagingGains' incorporates:
         *  ActionPort: '<S502>/Action Port'
         */
        ADAR_ac_DisengagingGains((&(VeADAC_k_RtPGainCrrnt)),
            (&(VeADAC_k_RtIGainCrrnt)), (&(VeADAC_k_RtDGainCrrnt)));

        /* End of Outputs for SubSystem: '<S498>/DisengagingGains' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S498>/IdleGains' incorporates:
         *  ActionPort: '<S508>/Action Port'
         */
        ADAR_ac_IdleGains((&(VeADAC_k_RtPGainCrrnt)), (&(VeADAC_k_RtIGainCrrnt)),
                          (&(VeADAC_k_RtDGainCrrnt)));

        /* End of Outputs for SubSystem: '<S498>/IdleGains' */
    }

    /* End of If: '<S498>/If' */

    /* Sum: '<S424>/Sum' */
    rtb_Merge_a = VeADAC_I_RtCrrntCmnd -
        rtb_TmpSignalConversionAtVeADIB_I_WEDRig;

    /* Product: '<S526>/Product' */
    VeADAC_DC_RtPTermCrrnt = rtb_Merge_a * VeADAC_k_RtPGainCrrnt;

    /* Switch: '<S526>/Switch' incorporates:
     *  UnitDelay: '<S424>/Unit Delay'
     */
    if (!ADAR_ac_DW.UnitDelay_DSTATE_n)
    {
        /* Switch: '<S526>/Switch1' */
        if (VeADAC_b_RtPIDReset)
        {
            /* Switch: '<S526>/Switch' incorporates:
             *  Constant: '<S501>/Constant3'
             *  Switch: '<S526>/Switch1'
             */
            VeADAC_DC_RtITermCrrnt = 0.0F;
        }
        else
        {
            /* Switch: '<S526>/Switch' incorporates:
             *  Constant: '<S528>/Calib'
             *  Product: '<S526>/Product1'
             *  Sum: '<S526>/Sum1'
             *  Switch: '<S526>/Switch1'
             *  UnitDelay: '<S526>/Unit Delay'
             */
            VeADAC_DC_RtITermCrrnt = ((rtb_Merge_a * VeADAC_k_RtIGainCrrnt) *
                HeADAR_t_FastTEA_dT) + VeADAC_DC_RtITermCrrnt;
        }

        /* End of Switch: '<S526>/Switch1' */
    }

    /* End of Switch: '<S526>/Switch' */

    /* Outputs for Atomic SubSystem: '<S526>/Limiter1' */
    /* Switch: '<S530>/Switch1' incorporates:
     *  Constant: '<S501>/Constant'
     *  RelationalOperator: '<S530>/Relational Operator'
     */
    if (100.0F < VeADAC_DC_RtITermCrrnt)
    {
        /* Switch: '<S522>/Switch1' */
        VeADAC_DC_RtPWMCmnd = 100.0F;
    }
    else
    {
        /* Switch: '<S522>/Switch1' */
        VeADAC_DC_RtPWMCmnd = VeADAC_DC_RtITermCrrnt;
    }

    /* End of Switch: '<S530>/Switch1' */

    /* Switch: '<S530>/Switch' incorporates:
     *  Constant: '<S501>/Constant2'
     *  RelationalOperator: '<S530>/Relational Operator1'
     */
    if (VeADAC_DC_RtPWMCmnd > -100.0F)
    {
        /* Switch: '<S530>/Switch' */
        VeADAC_DC_RtITermCrrnt = VeADAC_DC_RtPWMCmnd;
    }
    else
    {
        /* Switch: '<S530>/Switch' */
        VeADAC_DC_RtITermCrrnt = -100.0F;
    }

    /* End of Switch: '<S530>/Switch' */
    /* End of Outputs for SubSystem: '<S526>/Limiter1' */

    /* Sum: '<S526>/Sum2' incorporates:
     *  UnitDelay: '<S526>/Unit Delay1'
     */
    rtb_Sum2_h = rtb_Merge_a - ADAR_ac_DW.UnitDelay1_DSTATE;

    /* Outputs for Atomic SubSystem: '<S526>/Protected Division' */
    /* Switch: '<S531>/Switch1' incorporates:
     *  Constant: '<S528>/Calib'
     *  Constant: '<S531>/Constant Value'
     *  Constant: '<S531>/Constant Value1'
     *  Constant: '<S531>/Constant Value2'
     *  Constant: '<S531>/Constant Value3'
     *  Logic: '<S531>/AND'
     *  RelationalOperator: '<S531>/Greater Than or Equal '
     *  RelationalOperator: '<S531>/Greater Than or Equal 1'
     *  RelationalOperator: '<S531>/Not Equal'
     *  RelationalOperator: '<S531>/Not Equal1'
     *  Switch: '<S531>/Switch2'
     *  Switch: '<S531>/Switch3'
     */
    if ((rtb_Sum2_h != 0.0F) && (HeADAR_t_FastTEA_dT != 0.0F))
    {
        /* Switch: '<S531>/Switch1' incorporates:
         *  Product: '<S531>/Division'
         */
        rtb_Sum2_h /= HeADAR_t_FastTEA_dT;
    }
    else if (rtb_Sum2_h > 0.0F)
    {
        /* Switch: '<S531>/Switch2' incorporates:
         *  Constant: '<S531>/MAXFLOAT'
         *  Switch: '<S531>/Switch1'
         */
        rtb_Sum2_h = 3.402823466E+38F;
    }
    else if (rtb_Sum2_h < 0.0F)
    {
        /* Switch: '<S531>/Switch3' incorporates:
         *  Constant: '<S531>/MINFLOAT'
         *  Switch: '<S531>/Switch1'
         *  Switch: '<S531>/Switch2'
         */
        rtb_Sum2_h = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S531>/Switch1' incorporates:
         *  Constant: '<S531>/Constant Value4'
         *  Switch: '<S531>/Switch2'
         *  Switch: '<S531>/Switch3'
         */
        rtb_Sum2_h = 0.0F;
    }

    /* End of Switch: '<S531>/Switch1' */
    /* End of Outputs for SubSystem: '<S526>/Protected Division' */

    /* Product: '<S526>/Product2' */
    VeADAC_DC_RtDTermCrrnt = rtb_Sum2_h * VeADAC_k_RtDGainCrrnt;

    /* Switch: '<S501>/Switch' incorporates:
     *  Constant: '<S527>/Calib'
     */
    if (HeADAR_b_EnableCurrentPID)
    {
        /* Switch: '<S526>/Switch3' */
        if (VeADAC_b_RtPIDReset)
        {
            /* Switch: '<S501>/Switch' incorporates:
             *  Constant: '<S526>/Constant'
             *  Switch: '<S526>/Switch3'
             */
            VeADAC_DC_RtPWMCmnd = 0.0F;
        }
        else
        {
            /* Switch: '<S501>/Switch' incorporates:
             *  Sum: '<S526>/Sum'
             *  Switch: '<S526>/Switch3'
             */
            VeADAC_DC_RtPWMCmnd = (VeADAC_DC_RtPTermCrrnt +
                                   VeADAC_DC_RtITermCrrnt) +
                VeADAC_DC_RtDTermCrrnt;
        }

        /* End of Switch: '<S526>/Switch3' */
    }
    else
    {
        /* Switch: '<S501>/Switch' incorporates:
         *  Constant: '<S501>/Constant6'
         */
        VeADAC_DC_RtPWMCmnd = 0.0F;
    }

    /* End of Switch: '<S501>/Switch' */

    /* Outputs for Atomic SubSystem: '<S501>/Limiter1' */
    /* Switch: '<S529>/Switch1' incorporates:
     *  Constant: '<S501>/Constant4'
     *  RelationalOperator: '<S529>/Relational Operator'
     */
    if (100.0F < VeADAC_DC_RtPWMCmnd)
    {
        /* Switch: '<S522>/Switch1' */
        VeADAC_DC_RtPWMCmnd = 100.0F;
    }

    /* End of Switch: '<S529>/Switch1' */

    /* Switch: '<S529>/Switch' incorporates:
     *  Constant: '<S501>/Constant5'
     *  RelationalOperator: '<S529>/Relational Operator1'
     */
    if (VeADAC_DC_RtPWMCmnd > -100.0F)
    {
        /* Switch: '<S529>/Switch' */
        VeADAC_DC_RtCLCmnd = VeADAC_DC_RtPWMCmnd;
    }
    else
    {
        /* Switch: '<S529>/Switch' */
        VeADAC_DC_RtCLCmnd = -100.0F;
    }

    /* End of Switch: '<S529>/Switch' */
    /* End of Outputs for SubSystem: '<S501>/Limiter1' */

    /* Product: '<S500>/Product' incorporates:
     *  Lookup_n-D: '<S524>/Vector'
     *  Lookup_n-D: '<S525>/Vector'
     *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
     *  SignalConversion generated from: '<S1>/VePMDR_U_HB_SysVolt'
     *  Sum: '<S487>/Sum3'
     */
    VeADAC_DC_RtOLCmnd = look1_iflf_binlca_16a(VeADAC_I_RtCrrntCmnd, ((const
        float32 *)&(KxADAR_Pct_SlndDC_Base[0])), ((const float32 *)
        &(KtADAR_Pct_SlndDC_Base[0])), 5U) * look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVePMDR_U_HB_Sys,
         rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const float32 *)
          &(KxADAR_Pct_SlndDC_VoltTempMod[0])), ((const float32 *)
          &(KyADAR_Pct_SlndDC_VoltTempMod[0])), ((const float32 *)
          &(KtADAR_Pct_SlndDC_VoltTempMod[0])), ADAR_ac_ConstP.pooled13, 3U);

    /* Switch: '<S499>/Switch2' incorporates:
     *  Sum: '<S499>/Sum'
     */
    rtb_TmpSignalConversionAtVePMDR_U_HB_Sys = VeADAC_DC_RtCLCmnd +
        VeADAC_DC_RtOLCmnd;

    /* Outputs for Atomic SubSystem: '<S499>/Limiter1' */
    /* Switch: '<S522>/Switch1' incorporates:
     *  Constant: '<S499>/Constant2'
     *  RelationalOperator: '<S522>/Relational Operator'
     */
    if (100.0F < rtb_TmpSignalConversionAtVePMDR_U_HB_Sys)
    {
        /* Switch: '<S522>/Switch1' */
        VeADAC_DC_RtPWMCmnd = 100.0F;
    }
    else
    {
        /* Switch: '<S522>/Switch1' */
        VeADAC_DC_RtPWMCmnd = rtb_TmpSignalConversionAtVePMDR_U_HB_Sys;
    }

    /* End of Switch: '<S522>/Switch1' */

    /* Switch: '<S522>/Switch' incorporates:
     *  Constant: '<S499>/Constant3'
     *  RelationalOperator: '<S522>/Relational Operator1'
     */
    if (VeADAC_DC_RtPWMCmnd <= -100.0F)
    {
        /* Switch: '<S522>/Switch' */
        VeADAC_DC_RtPWMCmnd = -100.0F;
    }

    /* End of Switch: '<S522>/Switch' */
    /* End of Outputs for SubSystem: '<S499>/Limiter1' */

    /* RelationalOperator: '<S499>/Relational Operator' incorporates:
     *  UnitDelay: '<S424>/Unit Delay'
     */
    ADAR_ac_DW.UnitDelay_DSTATE_n = (VeADAC_DC_RtPWMCmnd !=
        rtb_TmpSignalConversionAtVePMDR_U_HB_Sys);

    /* Update for UnitDelay: '<S526>/Unit Delay1' */
    ADAR_ac_DW.UnitDelay1_DSTATE = rtb_Merge_a;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADAR_LearningProcedure1'
     */
    /* Constant: '<S431>/Constant' */
    ADAR_ac_ADAR_LearningProcedure(VeADAC_e_RtCtrlCmnd,
        ADAR_ac_B.TmpSignalConversionAtVeADIB_Pct_WED_Pwm_, VeADAC_L_RtPosAct,
        rtb_TmpSignalConversionAtVeADIB_I_WEDRig, ADAR_ac_B.Merge1,
        ADAR_ac_B.Merge3, CeADAR_e_RightWED, &ADAR_ac_DW.ADAR_LearningProcedure1);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* DataTypeConversion: '<S429>/DataTypeConversion' incorporates:
     *  Merge: '<S425>/Merge'
     */
    ADAR_ac_B.DataTypeConversion = ADAR_ac_B.Merge;

    /* DataTypeConversion: '<S430>/DataTypeConversion' incorporates:
     *  Merge: '<S425>/Merge4'
     */
    ADAR_ac_B.DataTypeConversion_e = VeADAC_e_RtCtrlCmnd;

    /* Gain: '<S434>/Gain' */
    ADAR_ac_B.Gain_n = ADAR_ac_B.UnitDelay2;

    /* Gain: '<S435>/Gain' */
    ADAR_ac_B.Gain = VeADAC_L_RtPosAct;

    /* Update for UnitDelay: '<S5>/Unit Delay7' incorporates:
     *  Merge: '<S425>/Merge'
     */
    ADAR_ac_DW.UnitDelay7_DSTATE_l = ADAR_ac_B.Merge;

    /* Update for UnitDelay: '<S5>/Unit Delay4' */
    ADAR_ac_DW.UnitDelay4_DSTATE_k = ADAR_ac_B.Merge3;

    /* Update for UnitDelay: '<S5>/Unit Delay6' */
    ADAR_ac_DW.UnitDelay6_DSTATE = ADAR_ac_B.Merge1;

    /* Update for UnitDelay: '<S5>/Unit Delay1' incorporates:
     *  Merge: '<S425>/Merge4'
     */
    ADAR_ac_DW.UnitDelay1_DSTATE_po = VeADAC_e_RtCtrlCmnd;

    /* End of Outputs for SubSystem: '<S1>/Right_WED' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S1>/ADAC_e_ReportedActuationStatus_Lft' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    /* Outport: '<Root>/VeADAR_e_LeftActuationStatus' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     */
    (void)Rte_Write_VeADAR_e_LeftActuationStatus_Value
        (ADAR_ac_B.DataTypeConversion_d);

#endif

    /* End of SignalConversion generated from: '<S1>/ADAC_e_ReportedActuationStatus_Lft' */

    /* SignalConversion generated from: '<S1>/ADAC_e_ReportedActuationStatus_Rt' */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Outport: '<Root>/VeADAR_e_RightActuationStatus' incorporates:
     *  DataTypeConversion: '<S429>/DataTypeConversion'
     */
    (void)Rte_Write_VeADAR_e_RightActuationStatus_Value
        (ADAR_ac_B.DataTypeConversion);

#endif

    /* End of SignalConversion generated from: '<S1>/ADAC_e_ReportedActuationStatus_Rt' */

    /* SignalConversion generated from: '<S1>/ADAR_DC_SlndPWMCmd_Lft' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    /* Outport: '<Root>/VeADAR_DC_LeftSlndPWMCmd' */
    (void)Rte_Write_VeADAR_DC_LeftSlndPWMCmd_Value(VeADAC_DC_LftPWMCmnd);

#endif

    /* End of SignalConversion generated from: '<S1>/ADAR_DC_SlndPWMCmd_Lft' */

    /* SignalConversion generated from: '<S1>/ADAR_DC_SlndPWMCmd_Rt' */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Outport: '<Root>/VeADAR_DC_RightSlndPWMCmd' */
    (void)Rte_Write_VeADAR_DC_RightSlndPWMCmd_Value(VeADAC_DC_RtPWMCmnd);

#endif

    /* End of SignalConversion generated from: '<S1>/ADAR_DC_SlndPWMCmd_Rt' */

    /* SignalConversion generated from: '<S1>/VeADAR_L_LftSlndPos' incorporates:
     *  SignalConversion generated from: '<S1>/VeADAR_L_LftTAPos'
     */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    /* Outport: '<Root>/VeADAR_L_LftSlndPos' */
    (void)Rte_Write_VeADAR_L_LftSlndPos_Value(ADAR_ac_B.Gain_g);

    /* Outport: '<Root>/VeADAR_L_LftTAPos' */
    (void)Rte_Write_VeADAR_L_LftTAPos_Value(ADAR_ac_B.Switch_h);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADAR_L_LftSlndPos' */

    /* SignalConversion generated from: '<S1>/VeADAR_L_RtSlndPos' incorporates:
     *  SignalConversion generated from: '<S1>/VeADAR_L_RtTAPos'
     */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Outport: '<Root>/VeADAR_L_RtSlndPos' */
    (void)Rte_Write_VeADAR_L_RtSlndPos_Value(ADAR_ac_B.Gain);

    /* Outport: '<Root>/VeADAR_L_RtTAPos' */
    (void)Rte_Write_VeADAR_L_RtTAPos_Value(ADAR_ac_B.Switch);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADAR_L_RtSlndPos' */

    /* SignalConversion generated from: '<S1>/WEDActn_State_Lft' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    /* Outport: '<Root>/VeADAR_e_LeftWEDActn_State' incorporates:
     *  DataTypeConversion: '<S13>/DataTypeConversion'
     */
    (void)Rte_Write_VeADAR_e_LeftWEDActn_State_Value
        (ADAR_ac_B.DataTypeConversion_e5);

#endif

    /* End of SignalConversion generated from: '<S1>/WEDActn_State_Lft' */

    /* SignalConversion generated from: '<S1>/WEDActn_State_Rt' */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Outport: '<Root>/VeADAR_e_RightWEDActn_State' incorporates:
     *  DataTypeConversion: '<S430>/DataTypeConversion'
     */
    (void)Rte_Write_VeADAR_e_RightWEDActn_State_Value
        (ADAR_ac_B.DataTypeConversion_e);

#endif

    /* End of SignalConversion generated from: '<S1>/WEDActn_State_Rt' */

    /* SignalConversion generated from: '<S1>/WED_CoolDownActive_Lft' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    /* Outport: '<Root>/VeADAR_b_CoolDownActiveLftWED' */
    (void)Rte_Write_VeADAR_b_CoolDownActiveLftWED_Value(ADAR_ac_B.Gain_i);

#endif

    /* End of SignalConversion generated from: '<S1>/WED_CoolDownActive_Lft' */

    /* SignalConversion generated from: '<S1>/WED_CoolDownActive_Rt' */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    /* Outport: '<Root>/VeADAR_b_CoolDownActiveRtWED' */
    (void)Rte_Write_VeADAR_b_CoolDownActiveRtWED_Value(ADAR_ac_B.Gain_n);

#endif

    /* End of SignalConversion generated from: '<S1>/WED_CoolDownActive_Rt' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' */
}

/* Output function */
FUNC(void, ADAR_CODE) ADAR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIR_PwrOff'
     */
    /* Outport: '<Root>/NaADAR_Pct_LftEndStp_PM_out' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read'
     */
    (void)Rte_Write_NaADAR_Pct_LftEndStp_NaADAR_Pct_LftEndStp
        ((&(NaADAR_Pct_LftEndStp[0])));

    /* Outport: '<Root>/NaADAR_Pct_RtEndStp_PM_out' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read1'
     */
    (void)Rte_Write_NaADAR_Pct_RtEndStp_NaADAR_Pct_RtEndStp
        ((&(NaADAR_Pct_RtEndStp[0])));

    /* Outport: '<Root>/NeADAR_L_LftTAPos_PM_out' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read2'
     */
    (void)Rte_Write_NeADAR_L_LftTAPos_NeADAR_L_LftTAPos(NeADAR_L_LftTAPos);

    /* Outport: '<Root>/NeADAR_L_RtTAPos_PM_out' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read3'
     */
    (void)Rte_Write_NeADAR_L_RtTAPos_NeADAR_L_RtTAPos(NeADAR_L_RtTAPos);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, ADAR_CODE) ADAR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ADAR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ADCO_Init_Outputs'
     */
    /* DataStoreWrite: '<S840>/Data Store Write3' incorporates:
     *  Inport: '<Root>/NeADAR_L_RtTAPos_PM_In'
     */
    (void)Rte_Read_NeADAR_L_RtTAPos_Rx_NeADAR_L_RtTAPos((&(NeADAR_L_RtTAPos)));

    /* DataStoreWrite: '<S840>/Data Store Write2' incorporates:
     *  Inport: '<Root>/NeADAR_L_LftTAPos_PM_In'
     */
    (void)Rte_Read_NeADAR_L_LftTAPos_Rx_NeADAR_L_LftTAPos((&(NeADAR_L_LftTAPos)));

    /* DataStoreWrite: '<S840>/Data Store Write1' incorporates:
     *  Inport: '<Root>/NaADAR_Pct_RtEndStp_PM_In'
     */
    (void)Rte_Read_NaADAR_Pct_RtEndStp_Rx_NaADAR_Pct_RtEndStp
        ((&(NaADAR_Pct_RtEndStp[0])));

    /* DataStoreWrite: '<S840>/Data Store Write' incorporates:
     *  Inport: '<Root>/NaADAR_Pct_LftEndStp_PM_In'
     */
    (void)Rte_Read_NaADAR_Pct_LftEndStp_Rx_NaADAR_Pct_LftEndStp
        ((&(NaADAR_Pct_LftEndStp[0])));

    /* DataStoreWrite: '<S840>/Data Store Write7' incorporates:
     *  Constant: '<S840>/Constant Value11'
     */
    VeADAR_Cnt_RtTAPosLearning_DS = 0;

    /* DataStoreWrite: '<S840>/Data Store Write6' incorporates:
     *  Constant: '<S840>/Constant Value12'
     */
    VeADAR_Cnt_LftTAPosLearning_DS = 0;

    /* DataStoreWrite: '<S840>/Data Store Write5' */
    for (i = 0; i < 4; i++)
    {
        VaADAR_Cnt_RtEndStpLearning_DS[(i)] = 0;
    }

    /* End of DataStoreWrite: '<S840>/Data Store Write5' */

    /* DataStoreWrite: '<S840>/Data Store Write4' */
    for (i = 0; i < 4; i++)
    {
        VaADAR_Cnt_LftEndStpLearning_DS[(i)] = 0;
    }

    /* End of DataStoreWrite: '<S840>/Data Store Write4' */

    /* DataStoreWrite: '<S840>/Data Store Write10' incorporates:
     *  Constant: '<S848>/Calib'
     */
    for (i = 0; i < 3; i++)
    {
        VaADAR_k_RtEndStpSlope_DS[(i)] = KaADAR_k_LftEndStpSlopeInit[(i)];
    }

    /* End of DataStoreWrite: '<S840>/Data Store Write10' */

    /* DataStoreWrite: '<S840>/Data Store Write8' incorporates:
     *  Constant: '<S848>/Calib'
     */
    for (i = 0; i < 3; i++)
    {
        VaADAR_k_LftEndStpSlope_DS[(i)] = KaADAR_k_LftEndStpSlopeInit[(i)];
    }

    /* End of DataStoreWrite: '<S840>/Data Store Write8' */

    /* DataStoreWrite: '<S840>/Data Store Write11' incorporates:
     *  Constant: '<S847>/Calib'
     */
    for (i = 0; i < 3; i++)
    {
        VaADAR_L_RtEndStpOffset_DS[(i)] = KaADAR_k_LftEndStpOffsetInit[(i)];
    }

    /* End of DataStoreWrite: '<S840>/Data Store Write11' */

    /* DataStoreWrite: '<S840>/Data Store Write9' incorporates:
     *  Constant: '<S847>/Calib'
     */
    for (i = 0; i < 3; i++)
    {
        VaADAR_L_LftEndStpOffset_DS[(i)] = KaADAR_k_LftEndStpOffsetInit[(i)];
    }

    /* End of DataStoreWrite: '<S840>/Data Store Write9' */

    /* SignalConversion generated from: '<S840>/VeADAR_DC_SlndPWMCmd_Out_Init' */
    ADAR_ac_B.OutportBufferForVeADAR_DC_SlndPWMCmd_Out = 0.0F;

    /* SignalConversion generated from: '<S840>/VeADAR_e_ActuationStatus_Out_Init' incorporates:
     *  Constant: '<S844>/Constant'
     */
    ADAR_ac_B.OutportBufferForVeADAR_e_ActuationStatus = ADAR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S840>/VeADAR_DC_RightSlndPWMCmd_Out_Init' */
    ADAR_ac_B.OutportBufferForVeADAR_DC_RightSlndPWMCm = 0.0F;

    /* SignalConversion generated from: '<S840>/VeADAR_e_RightActuationStatus_Out_Init' incorporates:
     *  Constant: '<S845>/Constant'
     */
    ADAR_ac_B.OutportBufferForVeADAR_e_RightActuationS =
        ADAR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S840>/VeADAR_e_LeftWEDActn_State_Out_Init' incorporates:
     *  Constant: '<S843>/Constant'
     */
    ADAR_ac_B.OutportBufferForVeADAR_e_LeftWEDActn_Sta =
        ADAR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S840>/VeADAR_e_RightWEDActn_State_Out_Init' incorporates:
     *  Constant: '<S842>/Constant'
     */
    ADAR_ac_B.OutportBufferForVeADAR_e_RightWEDActn_St =
        ADAR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S840>/VeADAR_b_CoolDownActiveLftWED_Out_Init' */
    ADAR_ac_B.OutportBufferForVeADAR_b_CoolDownActiveL = false;

    /* SignalConversion generated from: '<S840>/VeADAR_b_CoolDownActiveRtWED_Out_Init' */
    ADAR_ac_B.OutportBufferForVeADAR_b_CoolDownActiveR = false;

    /* SignalConversion generated from: '<S840>/VeADAR_L_LftSlndPos' incorporates:
     *  Constant: '<S849>/Calib'
     */
    ADAR_ac_B.OutportBufferForVeADAR_L_LftSlndPos = KeADAR_L_SlndPosInit;

    /* SignalConversion generated from: '<S840>/VeADAR_L_RtSlndPos' incorporates:
     *  Constant: '<S849>/Calib'
     */
    ADAR_ac_B.OutportBufferForVeADAR_L_RtSlndPos = KeADAR_L_SlndPosInit;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TADataStoreUpdate'
     */
    /* DataStoreWrite: '<S841>/Data Store Write' incorporates:
     *  Constant: '<S850>/Calib'
     *  DataStoreRead: '<S841>/Data Store Read'
     */
    VaADAR_L_LftTAPos_DS[0] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[1] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[2] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[3] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[4] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[5] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[6] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[7] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[8] = KeADAR_L_TAInitValue;
    VaADAR_L_LftTAPos_DS[9] = NeADAR_L_LftTAPos;

    /* DataStoreWrite: '<S841>/Data Store Write1' incorporates:
     *  Constant: '<S851>/Calib'
     *  DataStoreRead: '<S841>/Data Store Read1'
     */
    VaADAR_L_RtTAPos_DS[0] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[1] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[2] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[3] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[4] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[5] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[6] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[7] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[8] = KeADAR_L_TAInitValue;
    VaADAR_L_RtTAPos_DS[9] = NeADAR_L_RtTAPos;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeADAR_DC_RightSlndPWMCmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_DC_RightSlndPWMCmd_Out_Init'
     */
    (void)Rte_Write_VeADAR_DC_RightSlndPWMCmd_Value
        (ADAR_ac_B.OutportBufferForVeADAR_DC_RightSlndPWMCm);

    /* Outport: '<Root>/VeADAR_DC_LeftSlndPWMCmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_DC_SlndPWMCmd_Out_Init'
     */
    (void)Rte_Write_VeADAR_DC_LeftSlndPWMCmd_Value
        (ADAR_ac_B.OutportBufferForVeADAR_DC_SlndPWMCmd_Out);

    /* Outport: '<Root>/VeADAR_L_LftSlndPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_L_LftSlndPos'
     */
    (void)Rte_Write_VeADAR_L_LftSlndPos_Value
        (ADAR_ac_B.OutportBufferForVeADAR_L_LftSlndPos);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TADataStoreUpdate'
     */
    /* Outport: '<Root>/VeADAR_L_LftTAPos' incorporates:
     *  DataStoreRead: '<S841>/Data Store Read2'
     *  SignalConversion generated from: '<S2>/VeADAR_L_LftTAPos_Out_Init'
     */
    (void)Rte_Write_VeADAR_L_LftTAPos_Value(NeADAR_L_LftTAPos);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeADAR_L_RtSlndPos' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_L_RtSlndPos'
     */
    (void)Rte_Write_VeADAR_L_RtSlndPos_Value
        (ADAR_ac_B.OutportBufferForVeADAR_L_RtSlndPos);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TADataStoreUpdate'
     */
    /* Outport: '<Root>/VeADAR_L_RtTAPos' incorporates:
     *  DataStoreRead: '<S841>/Data Store Read3'
     *  SignalConversion generated from: '<S2>/VeADAR_L_RtTAPos_Out_Init'
     */
    (void)Rte_Write_VeADAR_L_RtTAPos_Value(NeADAR_L_RtTAPos);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeADAR_b_CoolDownActiveLftWED' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_b_CoolDownActiveLftWED_Out_Init'
     */
    (void)Rte_Write_VeADAR_b_CoolDownActiveLftWED_Value
        (ADAR_ac_B.OutportBufferForVeADAR_b_CoolDownActiveL);

    /* Outport: '<Root>/VeADAR_b_CoolDownActiveRtWED' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_b_CoolDownActiveRtWED_Out_Init'
     */
    (void)Rte_Write_VeADAR_b_CoolDownActiveRtWED_Value
        (ADAR_ac_B.OutportBufferForVeADAR_b_CoolDownActiveR);

    /* Outport: '<Root>/VeADAR_e_LeftActuationStatus' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_e_ActuationStatus_Out_Init'
     *  SignalConversion generated from: '<S840>/VeADAR_e_ActuationStatus_Out_Init'
     */
    (void)Rte_Write_VeADAR_e_LeftActuationStatus_Value
        (ADAR_ac_B.OutportBufferForVeADAR_e_ActuationStatus);

    /* Outport: '<Root>/VeADAR_e_LeftWEDActn_State' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_e_LeftWEDActn_State_Out_Init'
     *  SignalConversion generated from: '<S840>/VeADAR_e_LeftWEDActn_State_Out_Init'
     */
    (void)Rte_Write_VeADAR_e_LeftWEDActn_State_Value
        (ADAR_ac_B.OutportBufferForVeADAR_e_LeftWEDActn_Sta);

    /* Outport: '<Root>/VeADAR_e_RightActuationStatus' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_e_RightActuationStatus_Out_Init'
     *  SignalConversion generated from: '<S840>/VeADAR_e_RightActuationStatus_Out_Init'
     */
    (void)Rte_Write_VeADAR_e_RightActuationStatus_Value
        (ADAR_ac_B.OutportBufferForVeADAR_e_RightActuationS);

    /* Outport: '<Root>/VeADAR_e_RightWEDActn_State' incorporates:
     *  SignalConversion generated from: '<S2>/VeADAR_e_RightWEDActn_State_Out_Init'
     *  SignalConversion generated from: '<S840>/VeADAR_e_RightWEDActn_State_Out_Init'
     */
    (void)Rte_Write_VeADAR_e_RightWEDActn_State_Value
        (ADAR_ac_B.OutportBufferForVeADAR_e_RightWEDActn_St);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ADAR_CODE) ADAR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        ADAR_ac_B.OutportBufferForVeADAR_e_LeftWEDActn_Sta =
            CeADAR_e_Indeterminate;
        ADAR_ac_B.OutportBufferForVeADAR_e_RightWEDActn_St =
            CeADAR_e_Indeterminate;

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

        ADAR_ac_B.DataTypeConversion_e = CeADAR_e_Indeterminate;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

        ADAR_ac_B.DataTypeConversion_e5 = CeADAR_e_Indeterminate;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

    VeADAC_e_RtCtrlCmnd = CeADAR_e_Indeterminate;

#endif

#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

    VeADAC_e_LftCtrlCmnd = CeADAR_e_Indeterminate;

#endif

    {
        sint32 i;

        /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
        for (i = 0; i < 4; i++)
        {
            NaADAR_Pct_LftEndStp[(i)] = KaADAR_Pct_EndStpInitValue[(i)];
        }

        /* End of Start for DataStoreMemory: '<Root>/Data Store Memory' */

        /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
        for (i = 0; i < 4; i++)
        {
            NaADAR_Pct_RtEndStp[(i)] = KaADAR_Pct_EndStpInitValue[(i)];
        }

        /* End of Start for DataStoreMemory: '<Root>/Data Store Memory1' */

        /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
        for (i = 0; i < 3; i++)
        {
            VaADAR_k_LftEndStpSlope_DS[(i)] = 0.5F;
        }

        /* End of Start for DataStoreMemory: '<Root>/Data Store Memory10' */

        /* Start for DataStoreMemory: '<Root>/Data Store Memory11' */
        for (i = 0; i < 3; i++)
        {
            VaADAR_L_LftEndStpOffset_DS[(i)] = 0.5F;
        }

        /* End of Start for DataStoreMemory: '<Root>/Data Store Memory11' */

        /* Start for DataStoreMemory: '<Root>/Data Store Memory12' */
        for (i = 0; i < 3; i++)
        {
            VaADAR_k_RtEndStpSlope_DS[(i)] = 0.5F;
        }

        /* End of Start for DataStoreMemory: '<Root>/Data Store Memory12' */

        /* Start for DataStoreMemory: '<Root>/Data Store Memory13' */
        for (i = 0; i < 3; i++)
        {
            VaADAR_L_RtEndStpOffset_DS[(i)] = 0.5F;
        }

        /* End of Start for DataStoreMemory: '<Root>/Data Store Memory13' */

        /* Start for DataStoreMemory: '<Root>/Data Store Memory4' */
        NeADAR_L_LftTAPos = KeADAR_L_TAInitValue;

        /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
        NeADAR_L_RtTAPos = KeADAR_L_TAInitValue;

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/ADAR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
         *  SubSystem: '<S2>/ADCO_Init_Outputs'
         */
        /* SystemInitialize for SignalConversion generated from: '<S840>/VeADAR_e_ActuationStatus_Out_Init' incorporates:
         *  Constant: '<S844>/Constant'
         */
        ADAR_ac_B.OutportBufferForVeADAR_e_ActuationStatus =
            ADAR_ac_ConstB.Constant;

        /* SystemInitialize for SignalConversion generated from: '<S840>/VeADAR_e_RightActuationStatus_Out_Init' incorporates:
         *  Constant: '<S845>/Constant'
         */
        ADAR_ac_B.OutportBufferForVeADAR_e_RightActuationS =
            ADAR_ac_ConstB.Constant_p;

        /* SystemInitialize for SignalConversion generated from: '<S840>/VeADAR_e_LeftWEDActn_State_Out_Init' incorporates:
         *  Constant: '<S843>/Constant'
         */
        ADAR_ac_B.OutportBufferForVeADAR_e_LeftWEDActn_Sta =
            ADAR_ac_ConstB.Constant_l;

        /* SystemInitialize for SignalConversion generated from: '<S840>/VeADAR_e_RightWEDActn_State_Out_Init' incorporates:
         *  Constant: '<S842>/Constant'
         */
        ADAR_ac_B.OutportBufferForVeADAR_e_RightWEDActn_St =
            ADAR_ac_ConstB.Constant_g;

        /* SystemInitialize for SignalConversion generated from: '<S840>/VeADAR_L_LftSlndPos' incorporates:
         *  Constant: '<S849>/Calib'
         */
        ADAR_ac_B.OutportBufferForVeADAR_L_LftSlndPos = KeADAR_L_SlndPosInit;

        /* SystemInitialize for SignalConversion generated from: '<S840>/VeADAR_L_RtSlndPos' incorporates:
         *  Constant: '<S849>/Calib'
         */
        ADAR_ac_B.OutportBufferForVeADAR_L_RtSlndPos = KeADAR_L_SlndPosInit;

        /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' incorporates:
         *  SubSystem: '<Root>/ADAR_FastTEA'
         */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl || Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_ADAR_EnblLftWEDActnCtrl

        /* SystemInitialize for Function Call SubSystem: '<S1>/Left_WED' */
        /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
        ADAR_ac_DW.UnitDelay1_DSTATE_d = CeADAR_e_Indeterminate;

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/ADAC_DtrmnActnSts'
         */
        /* Start for If: '<S8>/If' */
        ADAR_ac_DW.If_ActiveSubsystem_l = -1;

        /* SystemInitialize for Merge: '<S8>/Merge4' */
        VeADAC_e_LftCtrlCmnd = CeADAR_e_Indeterminate;

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/ADAC_PosProf'
         */
        /* Start for If: '<S9>/If' */
        ADAR_ac_DW.If_ActiveSubsystem_i = -1;

        /* SystemInitialize for IfAction SubSystem: '<S9>/Disengagement' */
        ADAR_ac_Disengagement_Init(&ADAR_ac_DW.Disengagement);

        /* End of SystemInitialize for SubSystem: '<S9>/Disengagement' */

        /* SystemInitialize for IfAction SubSystem: '<S9>/Engagement' */
        ADAR_ac_Engagement_Init(&ADAR_ac_DW.Engagement);

        /* End of SystemInitialize for SubSystem: '<S9>/Engagement' */

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/ADAC_CalcCurrCmnd'
         */
        /* Start for If: '<S6>/If' */
        ADAR_ac_DW.If_ActiveSubsystem_d5 = -1;

        /* SystemInitialize for IfAction SubSystem: '<S6>/PositionControl' */
        ADAR_ac_PositionControl_Init(&ADAR_ac_DW.PositionControl);

        /* End of SystemInitialize for SubSystem: '<S6>/PositionControl' */

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/ADAR_LearningProcedure'
         */
        ADAR_ac_ADAR_LearningProcedure_Init(&ADAR_ac_DW.ADAR_LearningProcedure);

        /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */

        /* SystemInitialize for DataTypeConversion: '<S13>/DataTypeConversion' incorporates:
         *  Outport: '<S4>/WEDActn_State'
         */
        ADAR_ac_B.DataTypeConversion_e5 = CeADAR_e_Indeterminate;

        /* End of SystemInitialize for SubSystem: '<S1>/Left_WED' */
#endif

#if Rte_SysCon_Variant_ADAR_EnblRtWEDActnCtrl

        /* SystemInitialize for Function Call SubSystem: '<S1>/Right_WED' */
        /* InitializeConditions for UnitDelay: '<S5>/Unit Delay1' */
        ADAR_ac_DW.UnitDelay1_DSTATE_po = CeADAR_e_Indeterminate;

        /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
         *  SubSystem: '<S5>/ADAC_DtrmnActnSts1'
         */
        /* Start for If: '<S425>/If' */
        ADAR_ac_DW.If_ActiveSubsystem_d = -1;

        /* SystemInitialize for Merge: '<S425>/Merge4' */
        VeADAC_e_RtCtrlCmnd = CeADAR_e_Indeterminate;

        /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
         *  SubSystem: '<S5>/ADAC_PosProf'
         */
        /* Start for If: '<S426>/If' */
        ADAR_ac_DW.If_ActiveSubsystem_g = -1;

        /* SystemInitialize for IfAction SubSystem: '<S426>/Disengagement' */
        ADAR_ac_Disengagement_Init(&ADAR_ac_DW.Disengagement_n);

        /* End of SystemInitialize for SubSystem: '<S426>/Disengagement' */

        /* SystemInitialize for IfAction SubSystem: '<S426>/Engagement' */
        ADAR_ac_Engagement_Init(&ADAR_ac_DW.Engagement_a);

        /* End of SystemInitialize for SubSystem: '<S426>/Engagement' */

        /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
         *  SubSystem: '<S5>/ADAC_CalcCurrCmnd'
         */
        /* Start for If: '<S423>/If' */
        ADAR_ac_DW.If_ActiveSubsystem = -1;

        /* SystemInitialize for IfAction SubSystem: '<S423>/PositionControl' */
        ADAR_ac_PositionControl_Init(&ADAR_ac_DW.PositionControl_m);

        /* End of SystemInitialize for SubSystem: '<S423>/PositionControl' */

        /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
         *  SubSystem: '<S5>/ADAR_LearningProcedure1'
         */
        ADAR_ac_ADAR_LearningProcedure_Init(&ADAR_ac_DW.ADAR_LearningProcedure1);

        /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */

        /* SystemInitialize for DataTypeConversion: '<S430>/DataTypeConversion' incorporates:
         *  Outport: '<S5>/WEDActn_State'
         */
        ADAR_ac_B.DataTypeConversion_e = CeADAR_e_Indeterminate;

        /* End of SystemInitialize for SubSystem: '<S1>/Right_WED' */
#endif

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' */

        /* SystemInitialize for Outport: '<Root>/VeADAR_e_LeftActuationStatus' incorporates:
         *  Merge: '<Root>/Merge_1'
         */
        (void)Rte_Write_VeADAR_e_LeftActuationStatus_Value
            (CeADAR_e_SS_Indeterminate);

        /* SystemInitialize for Outport: '<Root>/VeADAR_e_RightActuationStatus' incorporates:
         *  Merge: '<Root>/Merge_3'
         */
        (void)Rte_Write_VeADAR_e_RightActuationStatus_Value
            (CeADAR_e_SS_Indeterminate);

        /* SystemInitialize for Outport: '<Root>/VeADAR_e_LeftWEDActn_State' incorporates:
         *  Merge: '<Root>/Merge_Outport_7'
         */
        (void)Rte_Write_VeADAR_e_LeftWEDActn_State_Value(CeADAR_e_Indeterminate);

        /* SystemInitialize for Outport: '<Root>/VeADAR_e_RightWEDActn_State' incorporates:
         *  Merge: '<Root>/Merge_Outport_8'
         */
        (void)Rte_Write_VeADAR_e_RightWEDActn_State_Value(CeADAR_e_Indeterminate);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
