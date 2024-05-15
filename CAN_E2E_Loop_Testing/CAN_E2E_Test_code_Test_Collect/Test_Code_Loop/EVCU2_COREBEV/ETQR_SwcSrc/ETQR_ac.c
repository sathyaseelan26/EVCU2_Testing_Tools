/*
 * File: ETQR_ac.c
 *
 * Code generated for Simulink model 'ETQR_ac'.
 *
 * Model version                  : 9.75
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:40:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ETQR_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ETQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, ETQR_VAR_INIT) KaETQR_M_EngCapabilityMax_Dflt[16]
    =
{
    314.8F, 314.8F, 334.7F, 334.8F, 349.3F, 378.7F, 385.8F, 395.6F, 397.8F,
    402.7F, 409.8F, 412.1F, 421.4F, 423.9F, 398.5F, 290.4F
} ;                                    /* Referenced by:
                                        * '<S301>/Calib'
                                        * '<S321>/Calib'
                                        * '<S269>/Calib'
                                        */

static volatile CONST(float32, ETQR_VAR_INIT) KaETQR_M_EngCapabilityMinOff_Dflt
    [16] =
{
    -31.8F, -31.8F, -45.64F, -49.74F, -51.332F, -56.08F, -61.536F, -69.248F,
    -75.824F, -82.352F, -89.5733F, -97.2107F, -102.7F, -102.7F, -102.7F, -102.7F
} ;                                    /* Referenced by:
                                        * '<S302>/Calib'
                                        * '<S322>/Calib'
                                        * '<S276>/Calib'
                                        */

static volatile CONST(float32, ETQR_VAR_INIT) KaETQR_M_EngCapabilityMinRun_Dflt
    [16] =
{
    -31.8F, -31.8F, -45.64F, -49.74F, -51.332F, -56.08F, -61.536F, -69.248F,
    -75.824F, -82.352F, -89.5733F, -97.2107F, -102.7F, -102.7F, -102.7F, -102.7F
} ;                                    /* Referenced by: '<S323>/Calib' */

static volatile CONST(float32, ETQR_VAR_INIT)
    KaETQR_M_EngHalfCylCapabilityMax_Dflt[16] =
{
    314.8F, 314.8F, 334.7F, 334.8F, 349.3F, 378.7F, 385.8F, 395.6F, 397.8F,
    402.7F, 409.8F, 412.1F, 421.4F, 423.9F, 398.5F, 290.4F
} ;                                    /* Referenced by:
                                        * '<S303>/Calib'
                                        * '<S324>/Calib'
                                        * '<S283>/Calib'
                                        */

static volatile CONST(float32, ETQR_VAR_INIT)
    KaETQR_M_EngHalfCylCapabilityMinOff_Dflt[16] =
{
    -31.8F, -31.8F, -45.64F, -49.74F, -51.332F, -56.08F, -61.536F, -69.248F,
    -75.824F, -82.352F, -89.5733F, -97.2107F, -102.7F, -102.7F, -102.7F, -102.7F
} ;                                    /* Referenced by:
                                        * '<S304>/Calib'
                                        * '<S325>/Calib'
                                        * '<S291>/Calib'
                                        */

static volatile CONST(float32, ETQR_VAR_INIT)
    KaETQR_M_EngHalfCylCapabilityMinRun_Dflt[16] =
{
    -31.8F, -31.8F, -45.64F, -49.74F, -51.332F, -56.08F, -61.536F, -69.248F,
    -75.824F, -82.352F, -89.5733F, -97.2107F, -102.7F, -102.7F, -102.7F, -102.7F
} ;                                    /* Referenced by: '<S326>/Calib' */

static volatile CONST(float32, ETQR_VAR_INIT)
    KaETQR_M_HalfCylMinDragCapability_Dflt[16] =
{
    -31.8F, -31.8F, -45.64F, -49.74F, -51.332F, -56.08F, -61.536F, -69.248F,
    -75.824F, -82.352F, -89.5733F, -97.2107F, -102.7F, -102.7F, -102.7F, -102.7F
} ;                                    /* Referenced by: '<S327>/Calib' */

static volatile CONST(float32, ETQR_VAR_INIT) KaETQR_M_MinDragCapability_Dflt[16]
    =
{
    -31.8F, -31.8F, -45.64F, -49.74F, -51.332F, -56.08F, -61.536F, -69.248F,
    -75.824F, -82.352F, -89.5733F, -97.2107F, -102.7F, -102.7F, -102.7F, -102.7F
} ;                                    /* Referenced by: '<S328>/Calib' */

static volatile CONST(float32, ETQR_VAR_INIT) KaETQR_n_EngCapability_Dflt[16] =
{
    699.0F, 700.0F, 800.0F, 1000.0F, 1200.0F, 1400.0F, 1600.0F, 1800.0F, 2000.0F,
    2200.0F, 2400.0F, 2800.0F, 3200.0F, 3600.0F, 4800.0F, 6000.0F
} ;                                    /* Referenced by: '<S329>/Calib' */

static volatile CONST(float32, ETQR_VAR_INIT)
    KaETQR_n_EngHalfCylCapability_Dflt[16] =
{
    699.0F, 700.0F, 800.0F, 1000.0F, 1200.0F, 1400.0F, 1600.0F, 1800.0F, 2000.0F,
    2200.0F, 2400.0F, 2800.0F, 3200.0F, 3600.0F, 4800.0F, 6000.0F
} ;                                    /* Referenced by: '<S330>/Calib' */

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_EngCapacityMax_Dflt =
    300.0F;                            /* Referenced by:
                                        * '<S8>/FsftETQR_M_EngCapacityMaxChrt'
                                        * '<S305>/Calib'
                                        * '<S312>/Calib'
                                        * '<S93>/Calib'
                                        */
static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_EngCapacityMinOff_Dflt =
    -50.0F;                            /* Referenced by:
                                        * '<S9>/FsftETQR_M_EngCapacityMinOffChrt'
                                        * '<S20>/FsftETQR_M_MinAirFlowMinSparkCapacityChrt'
                                        * '<S22>/FsftETQR_M_MinDragCapacityChrt'
                                        * '<S306>/Calib'
                                        * '<S313>/Calib'
                                        * '<S94>/Calib'
                                        */
static volatile CONST(float32, ETQR_VAR_INIT)
    KeETQR_M_EngCapacityMinRunImmedNom_Dflt = 0.0F;/* Referenced by:
                                                    * '<S11>/FsftETQR_M_EngCapacityMinRunImmedNomChrt'
                                                    * '<S307>/Calib'
                                                    * '<S314>/Calib'
                                                    * '<S95>/Calib'
                                                    */
static volatile CONST(float32, ETQR_VAR_INIT)
    KeETQR_M_EngCapacityMinRunImmedRed_Dflt = -25.0F;/* Referenced by:
                                                      * '<S12>/FsftETQR_M_EngCapacityMinRunImmedRedChrt'
                                                      * '<S308>/Calib'
                                                      * '<S315>/Calib'
                                                      * '<S96>/Calib'
                                                      */
static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_EngCapacityMinRun_Dflt =
    -15.0F;                            /* Referenced by:
                                        * '<S10>/FsftETQR_M_EngCapacityMinRunChrt'
                                        * '<S309>/Calib'
                                        * '<S316>/Calib'
                                        * '<S97>/Calib'
                                        */

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_EngTrqAccsryDflt = 0.0F;
               /* Referenced by: '<S13>/FsftETQR_M_EngTorqACC4CapabilityChrt' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_EngTrqActualDflt = 0.0F;/* Referenced by: '<S61>/Calib' */

#endif

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_EngTrqFSO_CurrAir_Dflt =
    0.0F;                              /* Referenced by:
                                        * '<S17>/FsftETQR_M_EngTrqFSO_CurrAirChrt'
                                        * '<S317>/Calib'
                                        */

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_EngTrqResrvReqDflt = 0.0F;
                    /* Referenced by: '<S18>/FsftETQR_M_EngTrqReserveReqChrt' */

#endif

static volatile CONST(float32, ETQR_VAR_INIT)
    KeETQR_M_MinAirFlowMinSparkCapacity_Dflt = 0.0F;/* Referenced by:
                                                     * '<S310>/Calib'
                                                     * '<S318>/Calib'
                                                     * '<S99>/Calib'
                                                     */
static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_MinDragCapacity_Dflt =
    -50.0F;                            /* Referenced by:
                                        * '<S311>/Calib'
                                        * '<S319>/Calib'
                                        * '<S98>/Calib'
                                        */
static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_M_PnLimitMaxEngTrqCap_Dflt =
    0.0F;                              /* Referenced by: '<S331>/Calib' */

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_DsblEngTrqActual_w_CL = 0;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapabilityMax4StrtStp_Fix = 0;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapabilityMax_Fix = 0;/* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapabilityMinOff4StrtStp_Fix = 0;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapabilityMinOff_Fix = 0;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_EnableEngCapacityMax_Fix =
    0;                                 /* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapacityMinOff_Fix = 0;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapacityMinRunImmedNom_Fix = 0;/* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapacityMinRunImmedRed_Fix = 0;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngCapacityMinRun_Fix = 0;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngHalfCylCapabilityMax_Fix = 0;/* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableEngHalfCylCapabilityMinOff_Fix = 0;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableMinAirFlowCapacity_Fix = 0;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_EnableMinDragCapacity_Fix
    = 0;                               /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableUseCapbltyMinDrag4StrtStp_Fix = 0;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableUseCapbltyMinImmed4StrtStp_Fix = 0;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableUseCapbltyMinRun4StrtStp_Fix = 0;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EnableUseMinRun4StrtStp_MnAfMnSpk_Fix = 0;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_EnblTrqInstrumentation =
    0;                                 /* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_EngCapacityMax_OvrdEnbl =
    0;                                 /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EngCapacityMinDrag_OvrdEnbl = 0;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EngCapacityMinOff_OvrdEnbl = 0;/* Referenced by: '<S155>/Calib' */

#endif

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EngCapacityMinRunImmedRedAvail_Dflt = 0;/* Referenced by:
                                                      * '<S24>/FsftETQR_b_EngCapacityMinRunImmedRedAvailChrt'
                                                      * '<S320>/Calib'
                                                      */

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EngCapacityMinRunImmed_OvrdEnbl = 0;/* Referenced by:
                                                  * '<S166>/Calib'
                                                  * '<S249>/Calib'
                                                  */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_EngCapacityMinRun_OvrdEnbl = 0;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_UseCapbltyMax4StrtStp = 1;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_UseCapbltyMinDrag4StrtStp
    = 0;                               /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_UseCapbltyMinImmed4StrtStp = 0;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_UseCapbltyMinOff4StrtStp =
    1;                                 /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_UseCapbltyMinRun4StrtStp =
    0;                                 /* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT) KeETQR_b_UseCmndAsReplacement = 1;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(boolean, ETQR_VAR_INIT)
    KeETQR_b_UseMinRun4StrtStp_MnAfMnSpk = 0;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_k_EngTrqActualFilt = 0.001F;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_k_KfFiltSEMFA = 0.17F;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_n_EngCapacityMax_OvrdVal =
    0.0F;                              /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT)
    KeETQR_n_EngCapacityMinDrag_OvrdVal = 0.0F;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_n_EngCapacityMinOff_OvrdVal
    = 0.0F;                            /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT)
    KeETQR_n_EngCapacityMinRunImmed_OvrdVal = 0.0F;/* Referenced by:
                                                    * '<S167>/Calib'
                                                    * '<S250>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_ETQR_1

static volatile CONST(float32, ETQR_VAR_INIT) KeETQR_n_EngCapacityMinRun_OvrdVal
    = 0.0F;                            /* Referenced by: '<S178>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ETQR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_ETQR_1

static VAR(float32, ETQR_VAR_INIT) VeETQC_M_EngCapabilityMinOff;/* '<S80>/Merge1' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static VAR(float32, ETQR_VAR_INIT) VeETQR_M_EngCapabilityMinOff;/* '<S76>/Merge1' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static VAR(float32, ETQR_VAR_INIT) VeETQR_M_MinAirFlowMinSparkCapacity_out;/* '<S76>/Merge5' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static VAR(float32, ETQR_VAR_INIT) VeETQR_M_MinDragCapability;/* '<S79>/Merge1' */

#endif

#if Rte_SysCon_Variant_ETQR_1

static VAR(float32, ETQR_VAR_INIT) VeETQR_M_MinDragCapblty4StrtStp;/* '<S76>/Merge4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

VAR(B_ETQR_ac_T, ETQR_VAR_INIT) ETQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"

VAR(DW_ETQR_ac_T, ETQR_VAR_INIT) ETQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ETQR
#include "MemMap.h"
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_Faulted(VAR(float32, AUTOMATIC)
    rtu_EngTrqActual, P2VAR(float32, AUTOMATIC, ETQR_VAR_INIT)
    rty_EngTrqActual_out);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_Get_Data_Indexes(CONST(float32,
    AUTOMATIC) rtu_xdata[16], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_Get_Data_Indexes_ETQR_ac_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__UseHalfCylinderCapability(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_EngHalfCylCapabilityMax[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMax, P2VAR
    (B_UseHalfCylinderCapability_E_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__UseFullCylinderCapability(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_EngTrqCapbltyAllCylMax[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMax, P2VAR
    (B_UseFullCylinderCapability_E_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_EngCapacityMax_Faulted(VAR(float32,
    AUTOMATIC) rtu_EngCapacityMax, P2VAR(float32, AUTOMATIC, ETQR_VAR_INIT)
    rty_VeETQR_M_EngCapacityMax);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseHalfCylinderCapability_l(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_EngHalfCylCapabilityMinRun[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinOff, P2VAR
    (B_UseHalfCylinderCapability_d_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseFullCylinderCapability_j(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_EngCapabilityMinRun[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinRun, P2VAR
    (B_UseFullCylinderCapability_f_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseHalfCylinderCapability_j(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_HalfCylMinDragCapability[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_HalfCylMinDragCapability_ou, P2VAR
    (B_UseHalfCylinderCapabilit_dn_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseFullCylinderCapability_f(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_MinDragCapability[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_MinDragCapability_out, P2VAR
    (B_UseFullCylinderCapability_d_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseHalfCylinderCapability_a(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_EngHalfCylTrqCapabilityMinO[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinOff, P2VAR
    (B_UseHalfCylinderCapability_g_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseFullCylinderCapability_d(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_EngTrqCapabilityMinOff[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinOff, P2VAR
    (B_UseFullCylinderCapability_h_T, AUTOMATIC, ETQR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__EngCapacityMinOff_Faulted(VAR(float32,
    AUTOMATIC) rtu_EngCapacityMinOff, P2VAR(float32, AUTOMATIC, ETQR_VAR_INIT)
    rty_VeETQR_M_EngCapacityMinOff);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_First_element_increases(CONST(float32,
    AUTOMATIC) rtu_Current_Array[16], CONST(float32, AUTOMATIC)
    rtu_Previous_Array[16], VAR(float32, AUTOMATIC) rtu_Counter, VAR(float32,
    AUTOMATIC) rty_Capability_Array[16]);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) First_element_decreases_or_unch(CONST(float32,
    AUTOMATIC) rtu_Current_array[16], VAR(float32, AUTOMATIC)
    rty_Capability_Array[16]);

#endif

#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__First_element_increases_g(CONST(float32,
    AUTOMATIC) rtu_Current_Array[16], CONST(float32, AUTOMATIC)
    rtu_Previous_Array[16], VAR(float32, AUTOMATIC) rtu_Counter, VAR(float32,
    AUTOMATIC) rty_Capability_Array[16]);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_ETQR_1

static float32 ETQR_ac_fraction(float32 Upper, float32 Lower, float32 Input);

#endif

/*
 * Output and update for action system:
 *    '<S47>/Faulted'
 *    '<S47>/Faulted_w_CL'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_Faulted(VAR(float32, AUTOMATIC)
    rtu_EngTrqActual, P2VAR(float32, AUTOMATIC, ETQR_VAR_INIT)
    rty_EngTrqActual_out)
{
    /* Gain: '<S71>/Gain' */
    *rty_EngTrqActual_out = rtu_EngTrqActual;
}

#endif

/* Function for Chart: '<S220>/Get_Data_Indexes ' */
#if Rte_SysCon_Variant_ETQR_1

static float32 ETQR_ac_fraction(float32 Upper, float32 Lower, float32 Input)
{
    float32 g;

    /* Graphical Function 'fraction': '<S221>:1' */
    /* Transition: '<S221>:67' */
    if (Lower >= Upper)
    {
        /* Transition: '<S221>:71' */
        /* Transition: '<S221>:72' */
        g = 0.0F;

        /* Transition: '<S221>:73' */
    }
    else
    {
        /* Transition: '<S221>:12' */
        g = (Input - Lower) / (Upper - Lower);
    }

    /* Transition: '<S221>:70' */
    return g;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S220>/Get_Data_Indexes '
 *    '<S217>/Get_Data_Indexes '
 *    '<S244>/Get_Data_Indexes '
 *    '<S241>/Get_Data_Indexes '
 *    '<S255>/Get_Data_Indexes '
 *    '<S252>/Get_Data_Indexes '
 *    '<S199>/Get_Data_Indexes '
 *    '<S196>/Get_Data_Indexes '
 *    '<S210>/Get_Data_Indexes '
 *    '<S207>/Get_Data_Indexes '
 *    ...
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_Get_Data_Indexes(CONST(float32,
    AUTOMATIC) rtu_xdata[16], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_Get_Data_Indexes_ETQR_ac_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    /* Chart: '<S220>/Get_Data_Indexes ' */
    /* Gateway: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* During: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Entry Internal: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Transition: '<S221>:2' */
    if (rtu_value >= rtu_xdata[8])
    {
        /* Transition: '<S221>:4' */
        if (rtu_value >= rtu_xdata[12])
        {
            /* Transition: '<S221>:7' */
            if (rtu_value >= rtu_xdata[14])
            {
                /* Transition: '<S221>:13' */
                if (rtu_value >= rtu_xdata[15])
                {
                    /* Transition: '<S221>:68' */
                    /* Transition: '<S221>:69' */
                    localB->UpperIndex = 15.0F;
                    localB->LowerIndex = 14.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[15], rtu_xdata[14],
                        rtu_xdata[15]);
                }
                else
                {
                    /* Transition: '<S221>:63' */
                    localB->UpperIndex = 15.0F;
                    localB->LowerIndex = 14.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[15], rtu_xdata[14],
                        rtu_value);

                    /* Transition: '<S221>:66' */
                }

                /* Transition: '<S221>:65' */
                /* Transition: '<S221>:64' */
                /* Transition: '<S221>:33' */
            }
            else
            {
                /* Transition: '<S221>:28' */
                if (rtu_value >= rtu_xdata[13])
                {
                    /* Transition: '<S221>:29' */
                    localB->UpperIndex = 14.0F;
                    localB->LowerIndex = 13.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[14], rtu_xdata[13],
                        rtu_value);

                    /* Transition: '<S221>:6' */
                    /* Transition: '<S221>:32' */
                }
                else
                {
                    /* Transition: '<S221>:30' */
                    localB->UpperIndex = 13.0F;
                    localB->LowerIndex = 12.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[13], rtu_xdata[12],
                        rtu_value);
                }

                /* Transition: '<S221>:18' */
                /* Transition: '<S221>:9' */
                /* Transition: '<S221>:33' */
            }
        }
        else
        {
            /* Transition: '<S221>:15' */
            if (rtu_value >= rtu_xdata[10])
            {
                /* Transition: '<S221>:20' */
                if (rtu_value >= rtu_xdata[11])
                {
                    /* Transition: '<S221>:22' */
                    localB->UpperIndex = 12.0F;
                    localB->LowerIndex = 11.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[12], rtu_xdata[11],
                        rtu_value);

                    /* Transition: '<S221>:19' */
                    /* Transition: '<S221>:9' */
                    /* Transition: '<S221>:33' */
                }
                else
                {
                    /* Transition: '<S221>:23' */
                    localB->UpperIndex = 11.0F;
                    localB->LowerIndex = 10.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[11], rtu_xdata[10],
                        rtu_value);

                    /* Transition: '<S221>:25' */
                    /* Transition: '<S221>:9' */
                    /* Transition: '<S221>:33' */
                }
            }
            else
            {
                /* Transition: '<S221>:21' */
                if (rtu_value >= rtu_xdata[9])
                {
                    /* Transition: '<S221>:24' */
                    localB->UpperIndex = 10.0F;
                    localB->LowerIndex = 9.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[10], rtu_xdata[9],
                        rtu_value);

                    /* Transition: '<S221>:25' */
                    /* Transition: '<S221>:9' */
                    /* Transition: '<S221>:33' */
                }
                else
                {
                    /* Transition: '<S221>:59' */
                    localB->UpperIndex = 9.0F;
                    localB->LowerIndex = 8.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[9], rtu_xdata[8],
                        rtu_value);

                    /* Transition: '<S221>:44' */
                }
            }
        }

        /* Transition: '<S221>:14' */
        /* Transition: '<S221>:56' */
        /* Transition: '<S221>:47' */
    }
    else
    {
        /* Transition: '<S221>:16' */
        if (rtu_value >= rtu_xdata[4])
        {
            /* Transition: '<S221>:17' */
            if (rtu_value >= rtu_xdata[5])
            {
                /* Transition: '<S221>:39' */
                if (rtu_value >= rtu_xdata[6])
                {
                    /* Transition: '<S221>:41' */
                    localB->UpperIndex = 7.0F;
                    localB->LowerIndex = 6.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[7], rtu_xdata[6],
                        rtu_value);
                    if (rtu_value >= rtu_xdata[7])
                    {
                        /* Transition: '<S221>:58' */
                        localB->UpperIndex = 8.0F;
                        localB->LowerIndex = 7.0F;
                        localB->fract = ETQR_ac_fraction(rtu_xdata[8],
                            rtu_xdata[7], rtu_value);

                        /* Transition: '<S221>:55' */
                        /* Transition: '<S221>:53' */
                    }
                    else
                    {
                        /* Transition: '<S221>:3' */
                    }

                    /* Transition: '<S221>:43' */
                    /* Transition: '<S221>:10' */
                }
                else
                {
                    /* Transition: '<S221>:36' */
                    localB->UpperIndex = 6.0F;
                    localB->LowerIndex = 5.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[6], rtu_xdata[5],
                        rtu_value);

                    /* Transition: '<S221>:38' */
                    /* Transition: '<S221>:43' */
                    /* Transition: '<S221>:10' */
                }
            }
            else
            {
                /* Transition: '<S221>:37' */
                if (rtu_value >= rtu_xdata[4])
                {
                    /* Transition: '<S221>:40' */
                    localB->UpperIndex = 5.0F;
                    localB->LowerIndex = 4.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[5], rtu_xdata[4],
                        rtu_value);

                    /* Transition: '<S221>:38' */
                    /* Transition: '<S221>:43' */
                    /* Transition: '<S221>:10' */
                }
                else
                {
                    /* Transition: '<S221>:46' */
                    localB->UpperIndex = 4.0F;
                    localB->LowerIndex = 3.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[4], rtu_xdata[3],
                        rtu_value);

                    /* Transition: '<S221>:45' */
                }
            }

            /* Transition: '<S221>:42' */
            /* Transition: '<S221>:60' */
            /* Transition: '<S221>:61' */
            /* Transition: '<S221>:48' */
            /* Transition: '<S221>:56' */
            /* Transition: '<S221>:47' */
        }
        else
        {
            /* Transition: '<S221>:34' */
            if (rtu_value >= rtu_xdata[2])
            {
                /* Transition: '<S221>:49' */
                if (rtu_value >= rtu_xdata[3])
                {
                    /* Transition: '<S221>:54' */
                    /* Transition: '<S221>:52' */
                    localB->UpperIndex = 4.0F;
                    localB->LowerIndex = 3.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[4], rtu_xdata[3],
                        rtu_value);
                }
                else
                {
                    /* Transition: '<S221>:35' */
                    localB->UpperIndex = 3.0F;
                    localB->LowerIndex = 2.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[3], rtu_xdata[2],
                        rtu_value);

                    /* Transition: '<S221>:57' */
                }

                /* Transition: '<S221>:61' */
                /* Transition: '<S221>:48' */
                /* Transition: '<S221>:56' */
                /* Transition: '<S221>:47' */
            }
            else
            {
                /* Transition: '<S221>:50' */
                if (rtu_value >= rtu_xdata[1])
                {
                    /* Transition: '<S221>:51' */
                    localB->UpperIndex = 2.0F;
                    localB->LowerIndex = 1.0F;
                    localB->fract = ETQR_ac_fraction(rtu_xdata[2], rtu_xdata[1],
                        rtu_value);

                    /* Transition: '<S221>:26' */
                    /* Transition: '<S221>:8' */
                }
                else
                {
                    /* Transition: '<S221>:62' */
                    if (rtu_value >= rtu_xdata[0])
                    {
                        /* Transition: '<S221>:27' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fract = ETQR_ac_fraction(rtu_xdata[1],
                            rtu_xdata[0], rtu_value);

                        /* Transition: '<S221>:31' */
                        /* Transition: '<S221>:47' */
                    }
                    else
                    {
                        /* Transition: '<S221>:11' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fract = ETQR_ac_fraction(rtu_xdata[1],
                            rtu_xdata[0], rtu_xdata[0]);
                    }
                }
            }
        }
    }

    /* End of Chart: '<S220>/Get_Data_Indexes ' */
    /* Transition: '<S221>:5' */
}

#endif

/*
 * Output and update for action system:
 *    '<S124>/UseHalfCylinderCapability'
 *    '<S78>/UseHalfCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__UseHalfCylinderCapability(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_EngHalfCylCapabilityMax[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMax, P2VAR
    (B_UseHalfCylinderCapability_E_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S220>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngHalfCylSpdCapability, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S219>/Selector4' */
    tmp = rtu_EngHalfCylCapabilityMax[(sint32)
        localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S219>/Summation1' incorporates:
     *  Product: '<S219>/Multiplication'
     *  Selector: '<S219>/Selector3'
     *  Selector: '<S219>/Selector4'
     *  Sum: '<S219>/Summation'
     */
    *rty_VeETQR_M_EngCapacityMax = ((rtu_EngHalfCylCapabilityMax[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S124>/UseFullCylinderCapability'
 *    '<S78>/UseFullCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__UseFullCylinderCapability(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_EngTrqCapbltyAllCylMax[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMax, P2VAR
    (B_UseFullCylinderCapability_E_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S217>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngSpdCapbltyAllCyl, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S216>/Selector4' */
    tmp = rtu_EngTrqCapbltyAllCylMax[(sint32)
        localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S216>/Summation1' incorporates:
     *  Product: '<S216>/Multiplication'
     *  Selector: '<S216>/Selector3'
     *  Selector: '<S216>/Selector4'
     *  Sum: '<S216>/Summation'
     */
    *rty_VeETQR_M_EngCapacityMax = ((rtu_EngTrqCapbltyAllCylMax[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S76>/EngCapacityMax_Faulted'
 *    '<S76>/EngCapacityMaxNot_Faulted'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_EngCapacityMax_Faulted(VAR(float32,
    AUTOMATIC) rtu_EngCapacityMax, P2VAR(float32, AUTOMATIC, ETQR_VAR_INIT)
    rty_VeETQR_M_EngCapacityMax)
{
    /* Inport: '<S84>/EngCapacityMax' */
    *rty_VeETQR_M_EngCapacityMax = rtu_EngCapacityMax;
}

#endif

/*
 * Output and update for action system:
 *    '<S127>/UseHalfCylinderCapability'
 *    '<S128>/UseHalfCylinderCapability'
 *    '<S119>/UseHalfCylinderCapability'
 *    '<S82>/UseHalfCylinderCapability'
 *    '<S81>/UseHalfCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseHalfCylinderCapability_l(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_EngHalfCylCapabilityMinRun[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinOff, P2VAR
    (B_UseHalfCylinderCapability_d_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S244>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngHalfCylSpdCapability, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S243>/Selector4' */
    tmp = rtu_EngHalfCylCapabilityMinRun[(sint32)
        localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S243>/Summation1' incorporates:
     *  Product: '<S243>/Multiplication'
     *  Selector: '<S243>/Selector3'
     *  Selector: '<S243>/Selector4'
     *  Sum: '<S243>/Summation'
     */
    *rty_VeETQR_M_EngCapacityMinOff = ((rtu_EngHalfCylCapabilityMinRun[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S127>/UseFullCylinderCapability'
 *    '<S128>/UseFullCylinderCapability'
 *    '<S119>/UseFullCylinderCapability'
 *    '<S82>/UseFullCylinderCapability'
 *    '<S81>/UseFullCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseFullCylinderCapability_j(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_EngCapabilityMinRun[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinRun, P2VAR
    (B_UseFullCylinderCapability_f_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S241>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngSpdCapbltyAllCyl, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S240>/Selector4' */
    tmp = rtu_EngCapabilityMinRun[(sint32)localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S240>/Summation1' incorporates:
     *  Product: '<S240>/Multiplication'
     *  Selector: '<S240>/Selector3'
     *  Selector: '<S240>/Selector4'
     *  Sum: '<S240>/Summation'
     */
    *rty_VeETQR_M_EngCapacityMinRun = ((rtu_EngCapabilityMinRun[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S125>/UseHalfCylinderCapability'
 *    '<S79>/UseHalfCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseHalfCylinderCapability_j(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_HalfCylMinDragCapability[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_HalfCylMinDragCapability_ou, P2VAR
    (B_UseHalfCylinderCapabilit_dn_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S228>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngHalfCylSpdCapability, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S227>/Selector4' */
    tmp = rtu_HalfCylMinDragCapability[(sint32)
        localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S227>/Summation1' incorporates:
     *  Product: '<S227>/Multiplication'
     *  Selector: '<S227>/Selector3'
     *  Selector: '<S227>/Selector4'
     *  Sum: '<S227>/Summation'
     */
    *rty_HalfCylMinDragCapability_ou = ((rtu_HalfCylMinDragCapability[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S125>/UseFullCylinderCapability'
 *    '<S79>/UseFullCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseFullCylinderCapability_f(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_MinDragCapability[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_MinDragCapability_out, P2VAR
    (B_UseFullCylinderCapability_d_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S225>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngSpdCapbltyAllCyl, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S224>/Selector4' */
    tmp = rtu_MinDragCapability[(sint32)localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S224>/Summation1' incorporates:
     *  Product: '<S224>/Multiplication'
     *  Selector: '<S224>/Selector3'
     *  Selector: '<S224>/Selector4'
     *  Sum: '<S224>/Summation'
     */
    *rty_MinDragCapability_out = ((rtu_MinDragCapability[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S126>/UseHalfCylinderCapability'
 *    '<S80>/UseHalfCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseHalfCylinderCapability_a(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngHalfCylSpdCapability[16],
    CONST(float32, AUTOMATIC) rtu_EngHalfCylTrqCapabilityMinO[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinOff, P2VAR
    (B_UseHalfCylinderCapability_g_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S236>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngHalfCylSpdCapability, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S235>/Selector4' */
    tmp = rtu_EngHalfCylTrqCapabilityMinO[(sint32)
        localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S235>/Summation1' incorporates:
     *  Product: '<S235>/Multiplication'
     *  Selector: '<S235>/Selector3'
     *  Selector: '<S235>/Selector4'
     *  Sum: '<S235>/Summation'
     */
    *rty_VeETQR_M_EngCapacityMinOff = ((rtu_EngHalfCylTrqCapabilityMinO[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S126>/UseFullCylinderCapability'
 *    '<S80>/UseFullCylinderCapability'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQ_UseFullCylinderCapability_d(VAR(float32,
    AUTOMATIC) rtu_Ni, CONST(float32, AUTOMATIC) rtu_EngSpdCapbltyAllCyl[16],
    CONST(float32, AUTOMATIC) rtu_EngTrqCapabilityMinOff[16], P2VAR(float32,
    AUTOMATIC, ETQR_VAR_INIT) rty_VeETQR_M_EngCapacityMinOff, P2VAR
    (B_UseFullCylinderCapability_h_T, AUTOMATIC, ETQR_VAR_INIT) localB)
{
    float32 tmp;

    /* Chart: '<S233>/Get_Data_Indexes ' */
    ETQR_ac_Get_Data_Indexes(rtu_EngSpdCapbltyAllCyl, rtu_Ni,
        &localB->sf_Get_Data_Indexes);

    /* Selector: '<S232>/Selector4' */
    tmp = rtu_EngTrqCapabilityMinOff[(sint32)
        localB->sf_Get_Data_Indexes.LowerIndex];

    /* Sum: '<S232>/Summation1' incorporates:
     *  Product: '<S232>/Multiplication'
     *  Selector: '<S232>/Selector3'
     *  Selector: '<S232>/Selector4'
     *  Sum: '<S232>/Summation'
     */
    *rty_VeETQR_M_EngCapacityMinOff = ((rtu_EngTrqCapabilityMinOff[(sint32)
        localB->sf_Get_Data_Indexes.UpperIndex] - tmp) *
        localB->sf_Get_Data_Indexes.fract) + tmp;
}

#endif

/*
 * Output and update for action system:
 *    '<S76>/EngCapacityMinOff_Faulted'
 *    '<S76>/EngCapacityMinOffFaulted_NotFaulted'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__EngCapacityMinOff_Faulted(VAR(float32,
    AUTOMATIC) rtu_EngCapacityMinOff, P2VAR(float32, AUTOMATIC, ETQR_VAR_INIT)
    rty_VeETQR_M_EngCapacityMinOff)
{
    /* Inport: '<S86>/EngCapacityMinOff' */
    *rty_VeETQR_M_EngCapacityMinOff = rtu_EngCapacityMinOff;
}

#endif

/*
 * Output and update for action system:
 *    '<S262>/First_element_increases'
 *    '<S263>/First_element_decreases'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR_ac_First_element_increases(CONST(float32,
    AUTOMATIC) rtu_Current_Array[16], CONST(float32, AUTOMATIC)
    rtu_Previous_Array[16], VAR(float32, AUTOMATIC) rtu_Counter, VAR(float32,
    AUTOMATIC) rty_Capability_Array[16])
{
    boolean rtb_Comparison3;

    /* RelationalOperator: '<S268>/Comparison3' incorporates:
     *  Constant: '<S268>/Constant Value4'
     */
    rtb_Comparison3 = (rtu_Counter == 15.0F);

    /* Switch: '<S268>/Switch' */
    if (rtb_Comparison3)
    {
        memcpy(&rty_Capability_Array[0], &rtu_Current_Array[0], (sizeof(float32))
               << 4ULL);
    }
    else
    {
        memcpy(&rty_Capability_Array[0], &rtu_Previous_Array[0], (sizeof(float32))
               << 4ULL);
    }

    /* End of Switch: '<S268>/Switch' */
}

#endif

/*
 * Output and update for action system:
 *    '<S262>/First_element_decreases_or_unchanged'
 *    '<S263>/First_element_increases_or_unchanged'
 *    '<S264>/First_element_decreases_or_unchanged'
 *    '<S265>/First_element_increases_or_unchanged'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) First_element_decreases_or_unch(CONST(float32,
    AUTOMATIC) rtu_Current_array[16], VAR(float32, AUTOMATIC)
    rty_Capability_Array[16])
{
    /* Inport: '<S267>/Current_array' */
    memcpy(&rty_Capability_Array[0], &rtu_Current_array[0], (sizeof(float32)) <<
           4ULL);
}

#endif

/*
 * Output and update for action system:
 *    '<S264>/First_element_increases'
 *    '<S265>/First_element_decreases'
 */
#if Rte_SysCon_Variant_ETQR_1

static FUNC(void, ETQR_CODE_LOCAL) ETQR__First_element_increases_g(CONST(float32,
    AUTOMATIC) rtu_Current_Array[16], CONST(float32, AUTOMATIC)
    rtu_Previous_Array[16], VAR(float32, AUTOMATIC) rtu_Counter, VAR(float32,
    AUTOMATIC) rty_Capability_Array[16])
{
    boolean rtb_Comparison3;

    /* RelationalOperator: '<S282>/Comparison3' incorporates:
     *  Constant: '<S282>/Constant Value4'
     */
    rtb_Comparison3 = (rtu_Counter == 15.0F);

    /* Switch: '<S287>/Switch1' */
    if (rtb_Comparison3)
    {
        memcpy(&rty_Capability_Array[0], &rtu_Current_Array[0], (sizeof(float32))
               << 4ULL);
    }
    else
    {
        memcpy(&rty_Capability_Array[0], &rtu_Previous_Array[0], (sizeof(float32))
               << 4ULL);
    }

    /* End of Switch: '<S287>/Switch1' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) ETQR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_ETQR_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_ETQR_1

    TeDTRR_e_SumFWIDFst tmpRead_1;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeE_bz;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeE_c4;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeE_jp;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeE_k1;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Merge1;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Switch;

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* Outputs for Function Call SubSystem: '<Root>/ETQR_FastTEF' */
    /* SignalConversion generated from: '<S1>/VeETQR_M_EngTrqStaticSEM_read' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    rtb_TmpSignalConversionAtVeE_c4 =
        Rte_IrvRead_ETQR_FastTEF_VeETQI_M_EngTrqStaticSEM_write_IRV();

    /* SignalConversion generated from: '<S1>/VeETQR_b_EngTrqStaticSEMFA_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TmpSignalConversionAtVeE_jp =
        Rte_IrvRead_ETQR_FastTEF_VeETQI_b_EngTrqStaticSEM_FA_write_IRV();

    /* SignalConversion generated from: '<S1>/VeETQR_b_EngTorqueFA_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeE_k1 =
        Rte_IrvRead_ETQR_FastTEF_VeETQI_b_EngTorque_FA_write_IRV();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ETQC_ProcessEngTrq_5ms'
     */
    /* If: '<S50>/If' incorporates:
     *  Inport: '<Root>/VeTITR_M_SnsdEng_Flt'
     *  Inport: '<Root>/VeTITR_b_SnsdTi_notVld'
     *  Merge: '<Root>/Merge_6_Irv'
     *  SignalConversion generated from: '<S1>/VeETQR_b_EngTrqActualFA_read'
     */
    if (Rte_IrvRead_ETQR_FastTEF_VeETQI_b_EngTrqActual_FA_write_IRV())
    {
        (void)Rte_Read_VeTITR_b_SnsdTi_notVld_Value(&tmpRead);
        (void)Rte_Read_VeTITR_M_SnsdEng_Flt_Value(&rtb_Merge1);

        /* Outputs for IfAction SubSystem: '<S50>/Faulted' incorporates:
         *  ActionPort: '<S58>/Action Port'
         */
        /* Switch: '<S58>/Switch' incorporates:
         *  Constant: '<S61>/Calib'
         *  Inport: '<Root>/VeTITR_M_SnsdEng_Flt'
         *  Inport: '<Root>/VeTITR_b_SnsdTi_notVld'
         *  Logic: '<S58>/Logical'
         */
        if (tmpRead)
        {
            rtb_Merge1 = KeETQR_M_EngTrqActualDflt;
        }

        /* End of Switch: '<S58>/Switch' */

        /* Outputs for Atomic SubSystem: '<S58>/DigitalLowpassFilter' */
        /* Sum: '<S60>/Summation' incorporates:
         *  Constant: '<S62>/Calib'
         *  Product: '<S60>/Multiplication'
         *  Sum: '<S60>/Subtraction'
         *  UnitDelay: '<S60>/Unit Delay'
         */
        rtb_Merge1 = ((rtb_Merge1 - ETQR_ac_DW.UnitDelay_DSTATE_n) *
                      KeETQR_k_EngTrqActualFilt) + ETQR_ac_DW.UnitDelay_DSTATE_n;

        /* Update for UnitDelay: '<S60>/Unit Delay' */
        ETQR_ac_DW.UnitDelay_DSTATE_n = rtb_Merge1;

        /* End of Outputs for SubSystem: '<S58>/DigitalLowpassFilter' */
        /* End of Outputs for SubSystem: '<S50>/Faulted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S50>/NotFaulted' incorporates:
         *  ActionPort: '<S59>/Action Port'
         */
        /* Merge: '<S50>/Merge1' incorporates:
         *  Gain: '<S64>/Gain'
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S1>/VeETQR_M_EngTrqActual_read'
         */
        rtb_Merge1 = Rte_IrvRead_ETQR_FastTEF_VeETQI_M_EngTrqActual_write_IRV();

        /* End of Outputs for SubSystem: '<S50>/NotFaulted' */
    }

    /* End of If: '<S50>/If' */

    /* If: '<S47>/If' incorporates:
     *  Merge: '<Root>/Merge_7_Irv'
     *  SignalConversion generated from: '<S1>/VeETQR_b_EngTrqAirflowFA_read'
     */
    if (Rte_IrvRead_ETQR_FastTEF_VeETQI_b_EngTrqAirflow_FA_write_IRV())
    {
        /* Outputs for IfAction SubSystem: '<S47>/Faulted' incorporates:
         *  ActionPort: '<S52>/Action Port'
         */
        ETQR_ac_Faulted(rtb_Merge1, &ETQR_ac_B.Merge1_k);

        /* End of Outputs for SubSystem: '<S47>/Faulted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S47>/NotFaulted' incorporates:
         *  ActionPort: '<S55>/Action Port'
         */
        /* Merge: '<S47>/Merge1' incorporates:
         *  Gain: '<S73>/Gain'
         *  Merge: '<Root>/Merge_5'
         *  SignalConversion generated from: '<S1>/VeETQR_M_EngTrqAirflow_read'
         */
        ETQR_ac_B.Merge1_k =
            Rte_IrvRead_ETQR_FastTEF_VeETQI_M_EngTrqAirflow_write_IRV();

        /* End of Outputs for SubSystem: '<S47>/NotFaulted' */
    }

    /* End of If: '<S47>/If' */

    /* Outputs for Atomic SubSystem: '<S51>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S69>/EdgeFalling' */
    /* Logic: '<S70>/OR1' incorporates:
     *  Logic: '<S69>/AND'
     */
    tmpRead = !rtb_TmpSignalConversionAtVeE_jp;

    /* Logic: '<S70>/AND' incorporates:
     *  Logic: '<S70>/OR1'
     *  UnitDelay: '<S70>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeE_bz = (tmpRead &&
        (ETQR_ac_DW.UnitDelay_DSTATE_ge));

    /* Update for UnitDelay: '<S70>/Unit Delay' */
    ETQR_ac_DW.UnitDelay_DSTATE_ge = rtb_TmpSignalConversionAtVeE_jp;

    /* End of Outputs for SubSystem: '<S69>/EdgeFalling' */

    /* Switch: '<S69>/Switch' */
    if (rtb_TmpSignalConversionAtVeE_bz)
    {
        /* Switch: '<S69>/Switch' incorporates:
         *  Constant: '<S51>/UnSec'
         */
        rtb_Switch = 1.0F;
    }
    else
    {
        /* Switch: '<S69>/Switch' incorporates:
         *  Constant: '<S51>/DeltaT'
         *  Constant: '<S69>/Constant Value1'
         *  MinMax: '<S69>/Minimum'
         *  Sum: '<S69>/Summation'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        rtb_Switch = fmaxf(ETQR_ac_DW.UnitDelay_DSTATE_a - 0.00625F, 0.0F);
    }

    /* End of Switch: '<S69>/Switch' */

    /* Update for UnitDelay: '<S69>/Unit Delay' */
    ETQR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch;

    /* Outputs for Atomic SubSystem: '<S51>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S65>/Switch1' incorporates:
     *  Constant: '<S69>/Constant Value2'
     *  Logic: '<S51>/Logical Operator3'
     *  Logic: '<S69>/AND'
     *  RelationalOperator: '<S69>/Greater  Than'
     */
    if ((!tmpRead) || (rtb_Switch > 0.0F))
    {
        /* Switch: '<S51>/Switch2' incorporates:
         *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
         *  Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd'
         */
        if (rtb_TmpSignalConversionAtVeE_jp)
        {
            (void)Rte_Read_VeDTRR_e_SumFWIDSlw_Value(&tmpRead_1);
            (void)Rte_Read_VeTRAR_M_HybCmndEngTorqPrdtd_Value(&tmpRead_0);

            /* Switch: '<S51>/Switch1' incorporates:
             *  Constant: '<S66>/Constant'
             *  Constant: '<S67>/Calib'
             *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
             *  Inport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd'
             *  Logic: '<S51>/Logical Operator'
             *  RelationalOperator: '<S51>/Relational Operator'
             */
            if ((((uint32)tmpRead_1) == CeDTRR_e_Trans) ||
                    (KeETQR_b_UseCmndAsReplacement))
            {
                /* Switch: '<S51>/Switch2' */
                rtb_TmpSignalConversionAtVeE_c4 = tmpRead_0;
            }
            else
            {
                /* Switch: '<S51>/Switch2' */
                rtb_TmpSignalConversionAtVeE_c4 = ETQR_ac_B.Merge1_k;
            }

            /* End of Switch: '<S51>/Switch1' */
        }

        /* End of Switch: '<S51>/Switch2' */

        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S68>/Calib'
         *  Product: '<S65>/Multiplication'
         *  Sum: '<S65>/Subtraction'
         *  Sum: '<S65>/Summation'
         *  UnitDelay: '<S65>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeE_c4 = ((rtb_TmpSignalConversionAtVeE_c4 -
            ETQR_ac_DW.UnitDelay_DSTATE_h) * KeETQR_k_KfFiltSEMFA) +
            ETQR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S65>/Switch1' */
    /* End of Outputs for SubSystem: '<S51>/Turn Off Delay Time' */

    /* Update for UnitDelay: '<S65>/Unit Delay' */
    ETQR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtVeE_c4;

    /* End of Outputs for SubSystem: '<S51>/Digital Lowpass Reset Enabled1' */

    /* If: '<S47>/If1' incorporates:
     *  Constant: '<S54>/Calib'
     *  Logic: '<S47>/OR_w_CL'
     */
    if (rtb_TmpSignalConversionAtVeE_k1 || (KeETQR_b_DsblEngTrqActual_w_CL))
    {
        /* Outputs for IfAction SubSystem: '<S47>/Faulted_w_CL' incorporates:
         *  ActionPort: '<S53>/Action Port'
         */
        ETQR_ac_Faulted(rtb_Merge1, &ETQR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S47>/Faulted_w_CL' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S47>/NotFaulted_w_CL' incorporates:
         *  ActionPort: '<S56>/Action Port'
         */
        /* Merge: '<S47>/Merge2' incorporates:
         *  Gain: '<S74>/Gain'
         *  Merge: '<Root>/Merge_4'
         *  SignalConversion generated from: '<S1>/VeETQR_M_EngTorque_read'
         */
        ETQR_ac_B.Merge2 = Rte_IrvRead_ETQR_FastTEF_VeETQI_M_EngTorque_write_IRV
            ();

        /* End of Outputs for SubSystem: '<S47>/NotFaulted_w_CL' */
    }

    /* End of If: '<S47>/If1' */

    /* SignalConversion: '<S47>/Signal Conversion' */
    ETQR_ac_B.SignalConversion_h = ETQR_ac_B.Merge1_k;

    /* Outport: '<Root>/VeETQR_M_EngTrqActual' incorporates:
     *  Gain: '<S57>/Gain'
     *  SignalConversion generated from: '<S1>/EngTrqActual_out'
     */
    (void)Rte_Write_VeETQR_M_EngTrqActual_Value(rtb_Merge1);

    /* Outport: '<Root>/VeETQR_b_EngTrqActual_w_CL_FA' incorporates:
     *  Logic: '<S49>/AND'
     *  SignalConversion generated from: '<S1>/EngTrqActual_w_CL_FA_out'
     */
    (void)Rte_Write_VeETQR_b_EngTrqActual_w_CL_FA_Value
        (rtb_TmpSignalConversionAtVeE_k1);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeETQR_M_EngTrqActual_w_CL' incorporates:
     *  SignalConversion generated from: '<S1>/EngTrqActual_w_CL_out'
     */
    (void)Rte_Write_VeETQR_M_EngTrqActual_w_CL_Value(ETQR_ac_B.Merge2);

    /* Outport: '<Root>/VeETQR_M_EngTrqAirflow' incorporates:
     *  SignalConversion generated from: '<S1>/EngTrqAirflow_out'
     */
    (void)Rte_Write_VeETQR_M_EngTrqAirflow_Value(ETQR_ac_B.SignalConversion_h);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ETQC_ProcessEngTrq_5ms'
     */
    /* Outport: '<Root>/VeETQR_b_EngTrqStaticSEM_FA' incorporates:
     *  Logic: '<S48>/AND'
     *  SignalConversion generated from: '<S1>/EngTrqStatic_SEM_FA_Out'
     */
    (void)Rte_Write_VeETQR_b_EngTrqStaticSEM_FA_Value
        (rtb_TmpSignalConversionAtVeE_jp);

    /* Outport: '<Root>/VeETQR_M_EngTrqStaticSEM' incorporates:
     *  SignalConversion generated from: '<S1>/EngTrqStatic_SEM_Out'
     *  SignalConversion: '<S47>/Signal Conversion1'
     */
    (void)Rte_Write_VeETQR_M_EngTrqStaticSEM_Value
        (rtb_TmpSignalConversionAtVeE_c4);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ETQR_FastTEF' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) ETQR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtEngCap[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeETQR;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeET_i;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaET_d[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtEngC_i[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeTISR;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaET_a[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtEngHal[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaE_l5[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtEngH_g[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaE_a4[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaET_j[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaET_f[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeE_am;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeE_ma;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeET_l;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeE_kj;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeE_n3;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeET_f;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_OR1_f;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_TmpSignalConversionAtVeESSR;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_MinMax2;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Merge3;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Merge2;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Merge6;

#endif

#if Rte_SysCon_Variant_ETQR_1

    TeENGR_e_CylinderDeacModes rtb_TmpSignalConversionAtVeENGR;

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Outputs for Function Call SubSystem: '<Root>/ETQR_MedTEB' */
    /* SignalConversion generated from: '<S2>/VeETQR_b_EngCapacityMaxFA_read' incorporates:
     *  Merge: '<Root>/Merge_38_Irv'
     */
    rtb_TmpSignalConversionAtVeE_am =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_b_EngCapacityMax_FA_write_IRV();

    /* SignalConversion generated from: '<S2>/EngCapabilityMax_x10ms_Read' */
    Rte_IrvRead_ETQR_MedTEB_EngCapabilityMax_x10ms_write_IRV
        (rtb_TmpSignalConversionAtEngCap);

    /* SignalConversion generated from: '<S2>/VeETQR_M_EngCapacityMax_read' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    rtb_TmpSignalConversionAtVeETQR =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_M_EngCapacityMax_write_IRV();

    /* SignalConversion generated from: '<S2>/VeETQR_b_EngCapacityMinOffFA_read' incorporates:
     *  Merge: '<Root>/Merge_42_Irv'
     */
    rtb_TmpSignalConversionAtVeE_ma =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_b_EngCapacityMinOff_FA_write_IRV();

    /* SignalConversion generated from: '<S2>/VeETQR_b_EngCapacityMinRunImmedRedFA_read' incorporates:
     *  Merge: '<Root>/Merge_40_Irv'
     */
    rtb_TmpSignalConversionAtVeET_l =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_b_EngCapacityMinRunImmed_FA_write_IRV();

    /* SignalConversion generated from: '<S2>/VeETQR_b_EngCapacityMinRunFA_read' incorporates:
     *  Merge: '<Root>/Merge_39_Irv'
     */
    rtb_TmpSignalConversionAtVeE_kj =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_b_EngCapacityMinRun_FA_write_IRV();

    /* SignalConversion generated from: '<S2>/VeETQR_M_EngCapacityMinOff_read' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    rtb_TmpSignalConversionAtVeET_i =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_M_EngCapacityMinOff_write_IRV();

    /* SignalConversion generated from: '<S2>/VaETQI_M_EngCapabilityMinRun_Poke_read' */
    Rte_IrvRead_ETQR_MedTEB_VaETQI_M_EngCapabilityMinRun_write_IRV
        (rtb_TmpSignalConversionAtVaET_d);

    /* SignalConversion generated from: '<S2>/EngCapabilityMinOff_x10ms_Read' */
    Rte_IrvRead_ETQR_MedTEB_EngCapabilityMinOff_x10ms_write_IRV
        (rtb_TmpSignalConversionAtEngC_i);

    /* SignalConversion generated from: '<S2>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_TmpSignalConversionAtVeTISR);

    /* SignalConversion generated from: '<S2>/VaETQI_n_EngCapability_Poke_read' */
    Rte_IrvRead_ETQR_MedTEB_VaETQI_n_EngCapability_write_IRV
        (rtb_TmpSignalConversionAtVaET_a);

    /* SignalConversion generated from: '<S2>/VeENGR_e_CylinderDeacMode' incorporates:
     *  Inport: '<Root>/VeENGR_e_CylinderDeacMode'
     */
    (void)Rte_Read_VeENGR_e_CylinderDeacMode_Value
        (&rtb_TmpSignalConversionAtVeENGR);

    /* SignalConversion generated from: '<S2>/EngHalfCylCapabilityMax_x10ms_Read' */
    Rte_IrvRead_ETQR_MedTEB_EngHalfCylCapabilityMax_x10ms_write_IRV
        (rtb_TmpSignalConversionAtEngHal);

    /* SignalConversion generated from: '<S2>/VaETQI_M_EngHalfCylCapabilityMinRun_Poke_read' */
    Rte_IrvRead_ETQR_MedTEB_VaETQI_M_EngHalfCylCapabilityMinRun_write_IRV
        (rtb_TmpSignalConversionAtVaE_l5);

    /* SignalConversion generated from: '<S2>/EngHalfCylCapabilityMinOff_x12p5ms_Read' */
    Rte_IrvRead_ETQR_MedTEB_EngHalfCylCapabilityMinOff_x10ms_write_IRV
        (rtb_TmpSignalConversionAtEngH_g);

    /* SignalConversion generated from: '<S2>/VaETQI_n_EngHalfCylCapability_Poke_read' */
    Rte_IrvRead_ETQR_MedTEB_VaETQI_n_EngHalfCylCapability_write_IRV
        (rtb_TmpSignalConversionAtVaE_a4);

    /* SignalConversion generated from: '<S2>/VeESSR_b_InputTorqOverride' incorporates:
     *  Inport: '<Root>/VeESSR_b_InputTorqOverride'
     */
    (void)Rte_Read_VeESSR_b_InputTorqOverride_Value
        (&rtb_TmpSignalConversionAtVeESSR);

    /* SignalConversion generated from: '<S2>/VaETQI_M_MinDragCapability_Poke_read' */
    Rte_IrvRead_ETQR_MedTEB_VaETQI_M_MinDragCapability_write_IRV
        (rtb_TmpSignalConversionAtVaET_j);

    /* SignalConversion generated from: '<S2>/VaETQI_M_HalfCylMinDragCapability_Poke_read' */
    Rte_IrvRead_ETQR_MedTEB_VaETQI_M_HalfCylMinDragCapability_write_IRV
        (rtb_TmpSignalConversionAtVaET_f);

    /* SignalConversion generated from: '<S2>/VeETQR_M_EngCapacityMinRunImmedNom_read' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    rtb_TmpSignalConversionAtVeE_n3 =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_M_EngCapacityMinRunImmedNom_write_IRV();

    /* SignalConversion generated from: '<S2>/VeETQR_b_EngCapacityMinRunImmedNomFA_read' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    rtb_TmpSignalConversionAtVeET_f =
        Rte_IrvRead_ETQR_MedTEB_VeETQI_b_EngCapacityMinRunImmedNom_FA_write_IRV();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ETQCProcessEngTrqCapacity'
     */
    /* Logic: '<S77>/OR1' incorporates:
     *  Constant: '<S257>/Constant'
     *  Constant: '<S258>/Constant'
     *  Constant: '<S259>/Constant'
     *  Constant: '<S260>/Constant'
     *  RelationalOperator: '<S77>/Equal1'
     *  RelationalOperator: '<S77>/Equal2'
     *  RelationalOperator: '<S77>/Equal3'
     *  RelationalOperator: '<S77>/Equal4'
     */
    rtb_OR1_f = ((((((uint32)rtb_TmpSignalConversionAtVeENGR) ==
                    CeENGR_e_HalfCylindersActive) || (((uint32)
                     rtb_TmpSignalConversionAtVeENGR) == CeENGR_e_DeacInProgress))
                  || (((uint32)rtb_TmpSignalConversionAtVeENGR) ==
                      CeENGR_e_ReacInProgress)) || (((uint32)
                   rtb_TmpSignalConversionAtVeENGR) ==
                  CeENGR_e_OneCylinderDeactivated));

    /* Outputs for Atomic SubSystem: '<S75>/Dtrmn_Eng_Capacity' */
    /* If: '<S187>/If' incorporates:
     *  Constant: '<S192>/Calib'
     *  Logic: '<S187>/Logical1'
     *  RelationalOperator: '<S187>/Comparison1'
     *  RelationalOperator: '<S187>/Comparison4'
     */
    if (rtb_TmpSignalConversionAtVeE_am || (KeETQR_b_EnblTrqInstrumentation))
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapabilityMaxInterpolation' incorporates:
         *  ActionPort: '<S78>/Action Port'
         */
        /* If: '<S78>/If' incorporates:
         *  Constant: '<S132>/Calib'
         *  Logic: '<S129>/Logical'
         *  RelationalOperator: '<S129>/Comparison5'
         *  Switch: '<S129>/Switch1'
         */
        if (rtb_OR1_f)
        {
            /* Switch: '<S129>/Switch1' incorporates:
             *  Constant: '<S132>/Calib'
             *  Constant: '<S133>/Calib'
             *  Logic: '<S129>/Logical'
             *  RelationalOperator: '<S129>/Comparison5'
             */
            if ((KeETQR_b_EngCapacityMax_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeE_am))
            {
                rtb_Merge2 = KeETQR_n_EngCapacityMax_OvrdVal;
            }
            else
            {
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S78>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S131>/Action Port'
             */
            ETQR__UseHalfCylinderCapability(rtb_Merge2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtEngHal,
                &ETQR_ac_B.Merge1_l, &ETQR_ac_B.UseHalfCylinderCapability_p);

            /* End of Outputs for SubSystem: '<S78>/UseHalfCylinderCapability' */
        }
        else
        {
            if ((KeETQR_b_EngCapacityMax_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeE_am))
            {
                /* Switch: '<S129>/Switch1' incorporates:
                 *  Constant: '<S133>/Calib'
                 */
                rtb_Merge2 = KeETQR_n_EngCapacityMax_OvrdVal;
            }
            else
            {
                /* Switch: '<S129>/Switch1' */
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S78>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S130>/Action Port'
             */
            ETQR__UseFullCylinderCapability(rtb_Merge2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtEngCap,
                &ETQR_ac_B.Merge1_l, &ETQR_ac_B.UseFullCylinderCapability_mh);

            /* End of Outputs for SubSystem: '<S78>/UseFullCylinderCapability' */
        }

        /* End of If: '<S78>/If' */
        /* End of Outputs for SubSystem: '<S76>/EngCapabilityMaxInterpolation' */
    }

    /* End of If: '<S187>/If' */

    /* If: '<S188>/If' incorporates:
     *  Constant: '<S192>/Calib'
     *  RelationalOperator: '<S188>/Comparison4'
     */
    if (KeETQR_b_EnblTrqInstrumentation)
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapabilityMinDrag_Interpolation' incorporates:
         *  ActionPort: '<S79>/Action Port'
         */
        /* If: '<S79>/If' incorporates:
         *  Constant: '<S143>/Calib'
         *  Switch: '<S140>/Switch1'
         */
        if (rtb_OR1_f)
        {
            /* Switch: '<S140>/Switch1' incorporates:
             *  Constant: '<S143>/Calib'
             *  Constant: '<S144>/Calib'
             */
            if (KeETQR_b_EngCapacityMinDrag_OvrdEnbl)
            {
                rtb_Merge2 = KeETQR_n_EngCapacityMinDrag_OvrdVal;
            }
            else
            {
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S79>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S142>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_j(rtb_Merge2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtVaET_f,
                (&(VeETQR_M_MinDragCapability)),
                &ETQR_ac_B.UseHalfCylinderCapability_i);

            /* End of Outputs for SubSystem: '<S79>/UseHalfCylinderCapability' */
        }
        else
        {
            if (KeETQR_b_EngCapacityMinDrag_OvrdEnbl)
            {
                /* Switch: '<S140>/Switch1' incorporates:
                 *  Constant: '<S144>/Calib'
                 */
                rtb_Merge2 = KeETQR_n_EngCapacityMinDrag_OvrdVal;
            }
            else
            {
                /* Switch: '<S140>/Switch1' */
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S79>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S141>/Action Port'
             */
            ETQ_UseFullCylinderCapability_f(rtb_Merge2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtVaET_j,
                (&(VeETQR_M_MinDragCapability)),
                &ETQR_ac_B.UseFullCylinderCapability_n);

            /* End of Outputs for SubSystem: '<S79>/UseFullCylinderCapability' */
        }

        /* End of If: '<S79>/If' */
        /* End of Outputs for SubSystem: '<S76>/EngCapabilityMinDrag_Interpolation' */
    }

    /* End of If: '<S188>/If' */

    /* If: '<S189>/If' incorporates:
     *  Constant: '<S192>/Calib'
     *  Logic: '<S189>/Logical1'
     *  RelationalOperator: '<S189>/Comparison1'
     *  RelationalOperator: '<S189>/Comparison4'
     */
    if (rtb_TmpSignalConversionAtVeE_ma || (KeETQR_b_EnblTrqInstrumentation))
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapabilityMinOff_Interpolation' incorporates:
         *  ActionPort: '<S80>/Action Port'
         */
        /* If: '<S80>/If' incorporates:
         *  Constant: '<S155>/Calib'
         *  Logic: '<S151>/Logical'
         *  RelationalOperator: '<S151>/Comparison5'
         *  Switch: '<S151>/Switch1'
         */
        if (rtb_OR1_f)
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Constant: '<S155>/Calib'
             *  Constant: '<S156>/Calib'
             *  Logic: '<S151>/Logical'
             *  RelationalOperator: '<S151>/Comparison5'
             */
            if ((KeETQR_b_EngCapacityMinOff_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeE_ma))
            {
                rtb_Merge2 = KeETQR_n_EngCapacityMinOff_OvrdVal;
            }
            else
            {
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S80>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S154>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_a(rtb_Merge2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtEngH_g,
                (&(VeETQC_M_EngCapabilityMinOff)),
                &ETQR_ac_B.UseHalfCylinderCapability_pr);

            /* End of Outputs for SubSystem: '<S80>/UseHalfCylinderCapability' */
        }
        else
        {
            if ((KeETQR_b_EngCapacityMinOff_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeE_ma))
            {
                /* Switch: '<S151>/Switch1' incorporates:
                 *  Constant: '<S156>/Calib'
                 */
                rtb_Merge2 = KeETQR_n_EngCapacityMinOff_OvrdVal;
            }
            else
            {
                /* Switch: '<S151>/Switch1' */
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S80>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S153>/Action Port'
             */
            ETQ_UseFullCylinderCapability_d(rtb_Merge2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtEngC_i,
                (&(VeETQC_M_EngCapabilityMinOff)),
                &ETQR_ac_B.UseFullCylinderCapability_hy);

            /* End of Outputs for SubSystem: '<S80>/UseFullCylinderCapability' */
        }

        /* End of If: '<S80>/If' */

        /* Gain: '<S152>/Gain' */
        ETQR_ac_B.Gain = VeETQC_M_EngCapabilityMinOff;

        /* End of Outputs for SubSystem: '<S76>/EngCapabilityMinOff_Interpolation' */
    }

    /* End of If: '<S189>/If' */

    /* If: '<S191>/If' incorporates:
     *  Constant: '<S192>/Calib'
     *  Logic: '<S191>/Logical1'
     *  RelationalOperator: '<S191>/Comparison1'
     *  RelationalOperator: '<S191>/Comparison4'
     */
    if (rtb_TmpSignalConversionAtVeET_l || (KeETQR_b_EnblTrqInstrumentation))
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapabilityMinRunImmed_Interpolation' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* If: '<S81>/If' incorporates:
         *  Constant: '<S166>/Calib'
         *  Logic: '<S163>/Logical'
         *  RelationalOperator: '<S163>/Comparison5'
         *  Switch: '<S163>/Switch1'
         */
        if (rtb_OR1_f)
        {
            /* Switch: '<S163>/Switch1' incorporates:
             *  Constant: '<S166>/Calib'
             *  Constant: '<S167>/Calib'
             *  Logic: '<S163>/Logical'
             *  RelationalOperator: '<S163>/Comparison5'
             */
            if ((KeETQR_b_EngCapacityMinRunImmed_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeET_f))
            {
                rtb_Merge2 = KeETQR_n_EngCapacityMinRunImmed_OvrdVal;
            }
            else
            {
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S81>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S165>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_l(rtb_Merge2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtVaE_l5,
                &ETQR_ac_B.Merge1, &ETQR_ac_B.UseHalfCylinderCapability_ia);

            /* End of Outputs for SubSystem: '<S81>/UseHalfCylinderCapability' */
        }
        else
        {
            if ((KeETQR_b_EngCapacityMinRunImmed_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeET_f))
            {
                /* Switch: '<S163>/Switch1' incorporates:
                 *  Constant: '<S167>/Calib'
                 */
                rtb_Merge2 = KeETQR_n_EngCapacityMinRunImmed_OvrdVal;
            }
            else
            {
                /* Switch: '<S163>/Switch1' */
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S81>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S164>/Action Port'
             */
            ETQ_UseFullCylinderCapability_j(rtb_Merge2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtVaET_d,
                &ETQR_ac_B.Merge1, &ETQR_ac_B.UseFullCylinderCapability_ho);

            /* End of Outputs for SubSystem: '<S81>/UseFullCylinderCapability' */
        }

        /* End of If: '<S81>/If' */
        /* End of Outputs for SubSystem: '<S76>/EngCapabilityMinRunImmed_Interpolation' */
    }

    /* End of If: '<S191>/If' */

    /* If: '<S190>/If' incorporates:
     *  Constant: '<S192>/Calib'
     *  Logic: '<S190>/Logical1'
     *  RelationalOperator: '<S190>/Comparison1'
     *  RelationalOperator: '<S190>/Comparison4'
     */
    if (rtb_TmpSignalConversionAtVeE_kj || (KeETQR_b_EnblTrqInstrumentation))
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapabilityMinRun_Interpolation' incorporates:
         *  ActionPort: '<S82>/Action Port'
         */
        /* If: '<S82>/If' incorporates:
         *  Constant: '<S177>/Calib'
         *  Logic: '<S174>/Logical'
         *  RelationalOperator: '<S174>/Comparison5'
         *  Switch: '<S174>/Switch1'
         */
        if (rtb_OR1_f)
        {
            /* Switch: '<S174>/Switch1' incorporates:
             *  Constant: '<S177>/Calib'
             *  Constant: '<S178>/Calib'
             *  Logic: '<S174>/Logical'
             *  RelationalOperator: '<S174>/Comparison5'
             */
            if ((KeETQR_b_EngCapacityMinRun_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeE_kj))
            {
                rtb_Merge2 = KeETQR_n_EngCapacityMinRun_OvrdVal;
            }
            else
            {
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S82>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S176>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_l(rtb_Merge2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtVaE_l5,
                &ETQR_ac_B.Merge1_o, &ETQR_ac_B.UseHalfCylinderCapability_f);

            /* End of Outputs for SubSystem: '<S82>/UseHalfCylinderCapability' */
        }
        else
        {
            if ((KeETQR_b_EngCapacityMinRun_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeE_kj))
            {
                /* Switch: '<S174>/Switch1' incorporates:
                 *  Constant: '<S178>/Calib'
                 */
                rtb_Merge2 = KeETQR_n_EngCapacityMinRun_OvrdVal;
            }
            else
            {
                /* Switch: '<S174>/Switch1' */
                rtb_Merge2 = rtb_TmpSignalConversionAtVeTISR;
            }

            /* Outputs for IfAction SubSystem: '<S82>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S175>/Action Port'
             */
            ETQ_UseFullCylinderCapability_j(rtb_Merge2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtVaET_d,
                &ETQR_ac_B.Merge1_o, &ETQR_ac_B.UseFullCylinderCapability_o);

            /* End of Outputs for SubSystem: '<S82>/UseFullCylinderCapability' */
        }

        /* End of If: '<S82>/If' */
        /* End of Outputs for SubSystem: '<S76>/EngCapabilityMinRun_Interpolation' */
    }

    /* End of If: '<S190>/If' */
    /* End of Outputs for SubSystem: '<S75>/Dtrmn_Eng_Capacity' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ETQR_MedTEB' */

    /* Inport: '<Root>/VeOSMR_n_TransMinEngSpd' */
    (void)Rte_Read_VeOSMR_n_TransMinEngSpd_Value(&rtb_Merge6);

    /* Outputs for Function Call SubSystem: '<Root>/ETQR_MedTEB' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ETQCProcessEngTrqCapacity'
     */
    /* Outputs for Atomic SubSystem: '<S75>/Dtrmn_Eng_Capacity' */
    /* MinMax: '<S76>/MinMax2' */
    rtb_MinMax2 = fmaxf(rtb_TmpSignalConversionAtVeTISR, rtb_Merge6);

    /* If: '<S76>/If' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S113>/Calib'
     *  Logic: '<S76>/Logical'
     *  Logic: '<S76>/Logical7'
     */
    if ((rtb_TmpSignalConversionAtVeESSR && (KeETQR_b_UseCapbltyMax4StrtStp)) ||
        (KeETQR_b_EnableEngCapabilityMax4StrtStp_Fix))
    {
        /* Outputs for IfAction SubSystem: '<S76>/UseCapabltyMaxduringStrtStp' incorporates:
         *  ActionPort: '<S124>/Action Port'
         */
        /* If: '<S124>/If' */
        if (rtb_OR1_f)
        {
            /* Outputs for IfAction SubSystem: '<S124>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S215>/Action Port'
             */
            ETQR__UseHalfCylinderCapability(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtEngHal,
                &rtb_Merge6, &ETQR_ac_B.UseHalfCylinderCapability);

            /* End of Outputs for SubSystem: '<S124>/UseHalfCylinderCapability' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S124>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S214>/Action Port'
             */
            ETQR__UseFullCylinderCapability(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtEngCap,
                &rtb_Merge6, &ETQR_ac_B.UseFullCylinderCapability);

            /* End of Outputs for SubSystem: '<S124>/UseFullCylinderCapability' */
        }

        /* End of If: '<S124>/If' */
        /* End of Outputs for SubSystem: '<S76>/UseCapabltyMaxduringStrtStp' */
    }
    else if (rtb_TmpSignalConversionAtVeE_am)
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMax_Faulted' incorporates:
         *  ActionPort: '<S84>/Action Port'
         */
        ETQR_ac_EngCapacityMax_Faulted(ETQR_ac_B.Merge1_l, &rtb_Merge6);

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMax_Faulted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMaxNot_Faulted' incorporates:
         *  ActionPort: '<S83>/Action Port'
         */
        ETQR_ac_EngCapacityMax_Faulted(rtb_TmpSignalConversionAtVeETQR,
            &rtb_Merge6);

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMaxNot_Faulted' */
    }

    /* End of If: '<S76>/If' */

    /* If: '<S76>/If5' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S116>/Calib'
     *  Logic: '<S76>/Logical1'
     *  Logic: '<S76>/Logical8'
     */
    if ((rtb_TmpSignalConversionAtVeESSR && (KeETQR_b_UseCapbltyMinOff4StrtStp))
        || (KeETQR_b_EnableEngCapabilityMinOff4StrtStp_Fix))
    {
        /* Outputs for IfAction SubSystem: '<S76>/UseCapabltyMinOffduringStrtStp' incorporates:
         *  ActionPort: '<S126>/Action Port'
         */
        /* If: '<S126>/If' */
        if (rtb_OR1_f)
        {
            /* Outputs for IfAction SubSystem: '<S126>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S231>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_a(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtEngH_g,
                (&(VeETQR_M_EngCapabilityMinOff)),
                &ETQR_ac_B.UseHalfCylinderCapability_a);

            /* End of Outputs for SubSystem: '<S126>/UseHalfCylinderCapability' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S126>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S230>/Action Port'
             */
            ETQ_UseFullCylinderCapability_d(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtEngC_i,
                (&(VeETQR_M_EngCapabilityMinOff)),
                &ETQR_ac_B.UseFullCylinderCapability_d);

            /* End of Outputs for SubSystem: '<S126>/UseFullCylinderCapability' */
        }

        /* End of If: '<S126>/If' */
        /* End of Outputs for SubSystem: '<S76>/UseCapabltyMinOffduringStrtStp' */
    }
    else if (rtb_TmpSignalConversionAtVeE_ma)
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMinOff_Faulted' incorporates:
         *  ActionPort: '<S86>/Action Port'
         */
        ETQR__EngCapacityMinOff_Faulted(ETQR_ac_B.Gain,
            (&(VeETQR_M_EngCapabilityMinOff)));

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMinOff_Faulted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMinOffFaulted_NotFaulted' incorporates:
         *  ActionPort: '<S85>/Action Port'
         */
        ETQR__EngCapacityMinOff_Faulted(rtb_TmpSignalConversionAtVeET_i,
            (&(VeETQR_M_EngCapabilityMinOff)));

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMinOffFaulted_NotFaulted' */
    }

    /* End of If: '<S76>/If5' */

    /* Logic: '<S76>/Logical3' incorporates:
     *  Constant: '<S115>/Calib'
     *  Logic: '<S123>/Logical7'
     *  Switch: '<S76>/Switch4'
     */
    rtb_TmpSignalConversionAtVeE_am = (rtb_TmpSignalConversionAtVeESSR &&
        (KeETQR_b_UseCapbltyMinImmed4StrtStp));

    /* If: '<S76>/If2' incorporates:
     *  Constant: '<S110>/Calib'
     *  Logic: '<S76>/Logical10'
     *  Logic: '<S76>/Logical12'
     *  Logic: '<S76>/Logical3'
     */
    if (rtb_TmpSignalConversionAtVeE_am ||
            (KeETQR_b_EnableUseCapbltyMinImmed4StrtStp_Fix))
    {
        /* Outputs for IfAction SubSystem: '<S76>/UseCapabltyMinRunduringStrtStp_Immed' incorporates:
         *  ActionPort: '<S128>/Action Port'
         */
        /* If: '<S128>/If' incorporates:
         *  Constant: '<S249>/Calib'
         *  Logic: '<S246>/Logical'
         *  RelationalOperator: '<S246>/Comparison5'
         *  Switch: '<S246>/Switch1'
         */
        if (rtb_OR1_f)
        {
            /* Switch: '<S246>/Switch1' incorporates:
             *  Constant: '<S249>/Calib'
             *  Constant: '<S250>/Calib'
             *  Logic: '<S246>/Logical'
             *  RelationalOperator: '<S246>/Comparison5'
             */
            if ((KeETQR_b_EngCapacityMinRunImmed_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeET_f))
            {
                rtb_Merge2 = KeETQR_n_EngCapacityMinRunImmed_OvrdVal;
            }
            else
            {
                rtb_Merge2 = rtb_MinMax2;
            }

            /* Outputs for IfAction SubSystem: '<S128>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S248>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_l(rtb_Merge2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtVaE_l5,
                &rtb_Merge3, &ETQR_ac_B.UseHalfCylinderCapability_d);

            /* End of Outputs for SubSystem: '<S128>/UseHalfCylinderCapability' */
        }
        else
        {
            if ((KeETQR_b_EngCapacityMinRunImmed_OvrdEnbl) &&
                    (!rtb_TmpSignalConversionAtVeET_f))
            {
                /* Switch: '<S246>/Switch1' incorporates:
                 *  Constant: '<S250>/Calib'
                 */
                rtb_Merge2 = KeETQR_n_EngCapacityMinRunImmed_OvrdVal;
            }
            else
            {
                /* Switch: '<S246>/Switch1' */
                rtb_Merge2 = rtb_MinMax2;
            }

            /* Outputs for IfAction SubSystem: '<S128>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S247>/Action Port'
             */
            ETQ_UseFullCylinderCapability_j(rtb_Merge2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtVaET_d,
                &rtb_Merge3, &ETQR_ac_B.UseFullCylinderCapability_e);

            /* End of Outputs for SubSystem: '<S128>/UseFullCylinderCapability' */
        }

        /* End of If: '<S128>/If' */
        /* End of Outputs for SubSystem: '<S76>/UseCapabltyMinRunduringStrtStp_Immed' */
    }
    else if (rtb_TmpSignalConversionAtVeET_f && rtb_TmpSignalConversionAtVeET_l)
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMinRunImmed_Faulted' incorporates:
         *  ActionPort: '<S88>/Action Port'
         */
        /* Merge: '<S76>/Merge3' incorporates:
         *  Inport: '<S88>/EngCapacityMinRunImmedRed'
         */
        rtb_Merge3 = ETQR_ac_B.Merge1;

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMinRunImmed_Faulted' */
    }
    else if (rtb_TmpSignalConversionAtVeET_l)
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMinRunImmedNom_NotFaulted' incorporates:
         *  ActionPort: '<S87>/Action Port'
         */
        /* Merge: '<S76>/Merge3' incorporates:
         *  Inport: '<S87>/EngCapacityMinRunImmedNom_In'
         */
        rtb_Merge3 = rtb_TmpSignalConversionAtVeE_n3;

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMinRunImmedNom_NotFaulted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMinRunImmed_NotFaulted' incorporates:
         *  ActionPort: '<S89>/Action Port'
         */
        /* Merge: '<S76>/Merge3' incorporates:
         *  Gain: '<S185>/Gain'
         *  Merge: '<Root>/Merge_37'
         *  SignalConversion generated from: '<S2>/VeETQR_M_EngCapacityMinRunImmedRed_read'
         */
        rtb_Merge3 =
            Rte_IrvRead_ETQR_MedTEB_VeETQI_M_EngCapacityMinRunImmed_write_IRV();

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMinRunImmed_NotFaulted' */
    }

    /* End of If: '<S76>/If2' */

    /* If: '<S76>/If1' incorporates:
     *  Constant: '<S111>/Calib'
     *  Constant: '<S117>/Calib'
     *  Logic: '<S76>/Logical2'
     *  Logic: '<S76>/Logical9'
     */
    if ((rtb_TmpSignalConversionAtVeESSR && (KeETQR_b_UseCapbltyMinRun4StrtStp))
        || (KeETQR_b_EnableUseCapbltyMinRun4StrtStp_Fix))
    {
        /* Outputs for IfAction SubSystem: '<S76>/UseCapabltyMinRunduringStrtStp' incorporates:
         *  ActionPort: '<S127>/Action Port'
         */
        /* If: '<S127>/If' */
        if (rtb_OR1_f)
        {
            /* Outputs for IfAction SubSystem: '<S127>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S239>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_l(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtVaE_l5,
                &rtb_Merge2, &ETQR_ac_B.UseHalfCylinderCapability_l);

            /* End of Outputs for SubSystem: '<S127>/UseHalfCylinderCapability' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S127>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S238>/Action Port'
             */
            ETQ_UseFullCylinderCapability_j(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtVaET_d,
                &rtb_Merge2, &ETQR_ac_B.UseFullCylinderCapability_j);

            /* End of Outputs for SubSystem: '<S127>/UseFullCylinderCapability' */
        }

        /* End of If: '<S127>/If' */
        /* End of Outputs for SubSystem: '<S76>/UseCapabltyMinRunduringStrtStp' */
    }
    else if (rtb_TmpSignalConversionAtVeE_kj)
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMinRun_Faulted' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        /* Merge: '<S76>/Merge2' incorporates:
         *  Inport: '<S91>/EngCapacityMinRun'
         */
        rtb_Merge2 = ETQR_ac_B.Merge1_o;

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMinRun_Faulted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S76>/EngCapacityMinRunNot_Faulted' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        /* Merge: '<S76>/Merge2' incorporates:
         *  Gain: '<S186>/Gain'
         *  Merge: '<Root>/Merge_30'
         *  SignalConversion generated from: '<S2>/VeETQR_M_EngCapacityMinRun_read'
         */
        rtb_Merge2 =
            Rte_IrvRead_ETQR_MedTEB_VeETQI_M_EngCapacityMinRun_write_IRV();

        /* End of Outputs for SubSystem: '<S76>/EngCapacityMinRunNot_Faulted' */
    }

    /* End of If: '<S76>/If1' */

    /* If: '<S76>/If3' incorporates:
     *  Constant: '<S112>/Calib'
     *  Constant: '<S118>/Calib'
     *  Logic: '<S76>/Logical5'
     *  Logic: '<S76>/Logical6'
     *  Merge: '<Root>/Merge_32'
     *  SignalConversion generated from: '<S2>/VeETQR_b_MinAirFlowMinSparkCapacityFA_read'
     */
    if (((Rte_IrvRead_ETQR_MedTEB_VeETQI_b_MinAirFlowMinSparkCapacity_FA_write_IRV
            ()) || (rtb_TmpSignalConversionAtVeESSR &&
                    (KeETQR_b_UseMinRun4StrtStp_MnAfMnSpk))) ||
            (KeETQR_b_EnableUseMinRun4StrtStp_MnAfMnSpk_Fix))
    {
        /* Outputs for IfAction SubSystem: '<S76>/MinAirFlowMinSparkCapacity_Faulted' incorporates:
         *  ActionPort: '<S119>/Action Port'
         */
        /* If: '<S119>/If' */
        if (rtb_OR1_f)
        {
            /* Outputs for IfAction SubSystem: '<S119>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S194>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_l(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtVaE_l5,
                (&(VeETQR_M_MinAirFlowMinSparkCapacity_out)),
                &ETQR_ac_B.UseHalfCylinderCapability_c);

            /* End of Outputs for SubSystem: '<S119>/UseHalfCylinderCapability' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S119>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S193>/Action Port'
             */
            ETQ_UseFullCylinderCapability_j(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtVaET_d,
                (&(VeETQR_M_MinAirFlowMinSparkCapacity_out)),
                &ETQR_ac_B.UseFullCylinderCapability_m);

            /* End of Outputs for SubSystem: '<S119>/UseFullCylinderCapability' */
        }

        /* End of If: '<S119>/If' */
        /* End of Outputs for SubSystem: '<S76>/MinAirFlowMinSparkCapacity_Faulted' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S76>/MinAirFlowMinSpark_NotFaulted' incorporates:
         *  ActionPort: '<S120>/Action Port'
         */
        /* Merge: '<S76>/Merge5' incorporates:
         *  Gain: '<S201>/Gain'
         *  Merge: '<Root>/Merge_31'
         *  SignalConversion generated from: '<S2>/VeETQR_M_MinAirFlowMinSparkCapacity_read'
         */
        VeETQR_M_MinAirFlowMinSparkCapacity_out =
            Rte_IrvRead_ETQR_MedTEB_VeETQI_M_MinAirFlowMinSparkCapacity_write_IRV
            ();

        /* End of Outputs for SubSystem: '<S76>/MinAirFlowMinSpark_NotFaulted' */
    }

    /* End of If: '<S76>/If3' */

    /* If: '<S76>/If4' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S114>/Calib'
     *  Logic: '<S76>/Logical11'
     *  Logic: '<S76>/Logical4'
     *  Merge: '<Root>/Merge_44'
     *  SignalConversion generated from: '<S2>/VeETQR_b_MinDragCapacityFA_read'
     */
    if (Rte_IrvRead_ETQR_MedTEB_VeETQI_b_MinDragCapacity_FA_write_IRV())
    {
        /* Outputs for IfAction SubSystem: '<S76>/MinDragCapacity_Faulted' incorporates:
         *  ActionPort: '<S121>/Action Port'
         */
        /* If: '<S121>/If3' */
        if (rtb_TmpSignalConversionAtVeE_ma)
        {
            /* Outputs for IfAction SubSystem: '<S121>/MaxDragCapacity_Faulted' incorporates:
             *  ActionPort: '<S202>/Action Port'
             */
            /* If: '<S202>/If' */
            if (rtb_OR1_f)
            {
                /* Outputs for IfAction SubSystem: '<S202>/UseHalfCylinderCapability' incorporates:
                 *  ActionPort: '<S205>/Action Port'
                 */
                /* Chart: '<S210>/Get_Data_Indexes ' */
                ETQR_ac_Get_Data_Indexes(rtb_TmpSignalConversionAtVaE_a4,
                    rtb_TmpSignalConversionAtVeTISR,
                    &ETQR_ac_B.sf_Get_Data_Indexes);

                /* Selector: '<S209>/Selector4' incorporates:
                 *  SignalConversion generated from: '<S2>/EngHalfCylCapabilityMinOff_x12p5ms_Read'
                 */
                rtb_MinMax2 = rtb_TmpSignalConversionAtEngH_g[(sint32)
                    ETQR_ac_B.sf_Get_Data_Indexes.LowerIndex];

                /* Merge: '<S76>/Merge4' incorporates:
                 *  Product: '<S209>/Multiplication'
                 *  Selector: '<S209>/Selector3'
                 *  Selector: '<S209>/Selector4'
                 *  SignalConversion generated from: '<S2>/EngHalfCylCapabilityMinOff_x12p5ms_Read'
                 *  Sum: '<S209>/Summation'
                 *  Sum: '<S209>/Summation1'
                 */
                VeETQR_M_MinDragCapblty4StrtStp =
                    ((rtb_TmpSignalConversionAtEngH_g[(sint32)
                      ETQR_ac_B.sf_Get_Data_Indexes.UpperIndex] - rtb_MinMax2) *
                     ETQR_ac_B.sf_Get_Data_Indexes.fract) + rtb_MinMax2;

                /* End of Outputs for SubSystem: '<S202>/UseHalfCylinderCapability' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S202>/UseFullCylinderCapability' incorporates:
                 *  ActionPort: '<S204>/Action Port'
                 */
                /* Chart: '<S207>/Get_Data_Indexes ' */
                ETQR_ac_Get_Data_Indexes(rtb_TmpSignalConversionAtVaET_a,
                    rtb_TmpSignalConversionAtVeTISR,
                    &ETQR_ac_B.sf_Get_Data_Indexes_k);

                /* Selector: '<S206>/Selector4' incorporates:
                 *  SignalConversion generated from: '<S2>/EngCapabilityMinOff_x10ms_Read'
                 */
                rtb_MinMax2 = rtb_TmpSignalConversionAtEngC_i[(sint32)
                    ETQR_ac_B.sf_Get_Data_Indexes_k.LowerIndex];

                /* Merge: '<S76>/Merge4' incorporates:
                 *  Product: '<S206>/Multiplication'
                 *  Selector: '<S206>/Selector3'
                 *  Selector: '<S206>/Selector4'
                 *  SignalConversion generated from: '<S2>/EngCapabilityMinOff_x10ms_Read'
                 *  Sum: '<S206>/Summation'
                 *  Sum: '<S206>/Summation1'
                 */
                VeETQR_M_MinDragCapblty4StrtStp =
                    ((rtb_TmpSignalConversionAtEngC_i[(sint32)
                      ETQR_ac_B.sf_Get_Data_Indexes_k.UpperIndex] - rtb_MinMax2)
                     * ETQR_ac_B.sf_Get_Data_Indexes_k.fract) + rtb_MinMax2;

                /* End of Outputs for SubSystem: '<S202>/UseFullCylinderCapability' */
            }

            /* End of If: '<S202>/If' */
            /* End of Outputs for SubSystem: '<S121>/MaxDragCapacity_Faulted' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S121>/MaxDragCapacity_NotFaulted' incorporates:
             *  ActionPort: '<S203>/Action Port'
             */
            /* Merge: '<S76>/Merge4' incorporates:
             *  Gain: '<S212>/Gain'
             */
            VeETQR_M_MinDragCapblty4StrtStp = rtb_TmpSignalConversionAtVeET_i;

            /* End of Outputs for SubSystem: '<S121>/MaxDragCapacity_NotFaulted' */
        }

        /* End of If: '<S121>/If3' */
        /* End of Outputs for SubSystem: '<S76>/MinDragCapacity_Faulted' */
    }
    else if ((rtb_TmpSignalConversionAtVeESSR &&
              (KeETQR_b_UseCapbltyMinDrag4StrtStp)) ||
             (KeETQR_b_EnableUseCapbltyMinDrag4StrtStp_Fix))
    {
        /* Outputs for IfAction SubSystem: '<S76>/UseCapabltyMinDragduringStrtStp' incorporates:
         *  ActionPort: '<S125>/Action Port'
         */
        /* If: '<S125>/If' */
        if (rtb_OR1_f)
        {
            /* Outputs for IfAction SubSystem: '<S125>/UseHalfCylinderCapability' incorporates:
             *  ActionPort: '<S223>/Action Port'
             */
            ETQ_UseHalfCylinderCapability_j(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaE_a4, rtb_TmpSignalConversionAtVaET_f,
                (&(VeETQR_M_MinDragCapblty4StrtStp)),
                &ETQR_ac_B.UseHalfCylinderCapability_j);

            /* End of Outputs for SubSystem: '<S125>/UseHalfCylinderCapability' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S125>/UseFullCylinderCapability' incorporates:
             *  ActionPort: '<S222>/Action Port'
             */
            ETQ_UseFullCylinderCapability_f(rtb_MinMax2,
                rtb_TmpSignalConversionAtVaET_a, rtb_TmpSignalConversionAtVaET_j,
                (&(VeETQR_M_MinDragCapblty4StrtStp)),
                &ETQR_ac_B.UseFullCylinderCapability_f);

            /* End of Outputs for SubSystem: '<S125>/UseFullCylinderCapability' */
        }

        /* End of If: '<S125>/If' */
        /* End of Outputs for SubSystem: '<S76>/UseCapabltyMinDragduringStrtStp' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S76>/MinDragCapacity_NotFaulted' incorporates:
         *  ActionPort: '<S122>/Action Port'
         */
        /* Merge: '<S76>/Merge4' incorporates:
         *  Gain: '<S213>/Gain'
         *  Merge: '<Root>/Merge_43'
         *  SignalConversion generated from: '<S2>/VeETQR_M_MinDragCapacity_read'
         */
        VeETQR_M_MinDragCapblty4StrtStp =
            Rte_IrvRead_ETQR_MedTEB_VeETQI_M_MinDragCapacity_write_IRV();

        /* End of Outputs for SubSystem: '<S76>/MinDragCapacity_NotFaulted' */
    }

    /* End of If: '<S76>/If4' */

    /* Switch: '<S76>/Switch4' incorporates:
     *  Constant: '<S104>/Calib'
     *  Logic: '<S123>/Logical8'
     *  Switch: '<S123>/Switch1'
     */
    if (KeETQR_b_EnableEngCapacityMinRunImmedNom_Fix)
    {
        /* Switch: '<S76>/Switch4' incorporates:
         *  Constant: '<S95>/Calib'
         */
        rtb_TmpSignalConversionAtVeE_n3 =
            KeETQR_M_EngCapacityMinRunImmedNom_Dflt;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeE_am || rtb_TmpSignalConversionAtVeET_f)
        {
            /* Switch: '<S123>/Switch1' incorporates:
             *  Switch: '<S76>/Switch4'
             */
            rtb_TmpSignalConversionAtVeE_n3 = rtb_Merge3;
        }
    }

    /* Switch: '<S76>/Switch' incorporates:
     *  Constant: '<S102>/Calib'
     */
    if (KeETQR_b_EnableEngCapacityMax_Fix)
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMax' incorporates:
         *  Constant: '<S93>/Calib'
         *  SignalConversion generated from: '<S2>/EngCapacityMax_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMax_Value
            (KeETQR_M_EngCapacityMax_Dflt);
    }
    else
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMax' incorporates:
         *  SignalConversion generated from: '<S2>/EngCapacityMax_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMax_Value(rtb_Merge6);
    }

    /* End of Switch: '<S76>/Switch' */

    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S103>/Calib'
     */
    if (KeETQR_b_EnableEngCapacityMinOff_Fix)
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMinOff' incorporates:
         *  Constant: '<S94>/Calib'
         *  SignalConversion generated from: '<S2>/EngCapacityMinOff_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMinOff_Value
            (KeETQR_M_EngCapacityMinOff_Dflt);
    }
    else
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMinOff' incorporates:
         *  SignalConversion generated from: '<S2>/EngCapacityMinOff_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMinOff_Value
            (VeETQR_M_EngCapabilityMinOff);
    }

    /* End of Switch: '<S76>/Switch1' */
    /* End of Outputs for SubSystem: '<S75>/Dtrmn_Eng_Capacity' */

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedNom_FA' incorporates:
     *  SignalConversion generated from: '<S2>/EngCapacityMinRunImmedNom_FA_out'
     *  SignalConversion: '<S75>/Signal Conversion2'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedNom_FA_Value
        (rtb_TmpSignalConversionAtVeET_f);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeETQR_M_EngCapacityMinRunImmedNom' incorporates:
     *  SignalConversion generated from: '<S2>/EngCapacityMinRunImmedNom_out'
     */
    (void)Rte_Write_VeETQR_M_EngCapacityMinRunImmedNom_Value
        (rtb_TmpSignalConversionAtVeE_n3);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ETQCProcessEngTrqCapacity'
     */
    /* Outputs for Atomic SubSystem: '<S75>/Dtrmn_Eng_Capacity' */
    /* Switch: '<S76>/Switch3' incorporates:
     *  Constant: '<S105>/Calib'
     */
    if (KeETQR_b_EnableEngCapacityMinRunImmedRed_Fix)
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMinRunImmedRed' incorporates:
         *  Constant: '<S96>/Calib'
         *  SignalConversion generated from: '<S2>/EngCapacityMinRunImmedRed_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMinRunImmedRed_Value
            (KeETQR_M_EngCapacityMinRunImmedRed_Dflt);
    }
    else
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMinRunImmedRed' incorporates:
         *  SignalConversion generated from: '<S2>/EngCapacityMinRunImmedRed_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMinRunImmedRed_Value(rtb_Merge3);
    }

    /* End of Switch: '<S76>/Switch3' */

    /* Switch: '<S76>/Switch2' incorporates:
     *  Constant: '<S106>/Calib'
     */
    if (KeETQR_b_EnableEngCapacityMinRun_Fix)
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMinRun' incorporates:
         *  Constant: '<S97>/Calib'
         *  SignalConversion generated from: '<S2>/EngCapacityMinRun_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMinRun_Value
            (KeETQR_M_EngCapacityMinRun_Dflt);
    }
    else
    {
        /* Outport: '<Root>/VeETQR_M_EngCapacityMinRun' incorporates:
         *  SignalConversion generated from: '<S2>/EngCapacityMinRun_out'
         */
        (void)Rte_Write_VeETQR_M_EngCapacityMinRun_Value(rtb_Merge2);
    }

    /* End of Switch: '<S76>/Switch2' */

    /* Switch: '<S76>/Switch6' incorporates:
     *  Constant: '<S107>/Calib'
     */
    if (KeETQR_b_EnableMinAirFlowCapacity_Fix)
    {
        /* Outport: '<Root>/VeETQR_M_MinAirFlowMinSparkCapacity' incorporates:
         *  Constant: '<S99>/Calib'
         *  SignalConversion generated from: '<S2>/MinAirFlowMinSparkCapacity_out'
         */
        (void)Rte_Write_VeETQR_M_MinAirFlowMinSparkCapacity_Value
            (KeETQR_M_MinAirFlowMinSparkCapacity_Dflt);
    }
    else
    {
        /* Outport: '<Root>/VeETQR_M_MinAirFlowMinSparkCapacity' incorporates:
         *  SignalConversion generated from: '<S2>/MinAirFlowMinSparkCapacity_out'
         */
        (void)Rte_Write_VeETQR_M_MinAirFlowMinSparkCapacity_Value
            (VeETQR_M_MinAirFlowMinSparkCapacity_out);
    }

    /* End of Switch: '<S76>/Switch6' */

    /* Switch: '<S76>/Switch5' incorporates:
     *  Constant: '<S108>/Calib'
     */
    if (KeETQR_b_EnableMinDragCapacity_Fix)
    {
        /* Outport: '<Root>/VeETQR_M_MinDragCapacity' incorporates:
         *  Constant: '<S98>/Calib'
         *  SignalConversion generated from: '<S2>/MinDragCapacity_out'
         */
        (void)Rte_Write_VeETQR_M_MinDragCapacity_Value
            (KeETQR_M_MinDragCapacity_Dflt);
    }
    else
    {
        /* Outport: '<Root>/VeETQR_M_MinDragCapacity' incorporates:
         *  SignalConversion generated from: '<S2>/MinDragCapacity_out'
         */
        (void)Rte_Write_VeETQR_M_MinDragCapacity_Value
            (VeETQR_M_MinDragCapblty4StrtStp);
    }

    /* End of Switch: '<S76>/Switch5' */
    /* End of Outputs for SubSystem: '<S75>/Dtrmn_Eng_Capacity' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ETQR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Model step function for TID3 */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) ETQR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaETQI[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeETQI;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaET_i[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeET_k;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaET_l[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeET_c;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVaET_n[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_TmpSignalConversionAtVeE_ca;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_AND_a2;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_AND_h;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_AND_a;

#endif

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_AND;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Switch1[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Merge2[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Switch1_a[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Switch1_l[16];

#endif

#if Rte_SysCon_Variant_ETQR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 rtb_Merge2_a;

#endif

#if Rte_SysCon_Variant_ETQR_1

    float32 *rtb_Switch1_f_0;

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Outputs for Function Call SubSystem: '<Root>/ETQR_MedTEH' */
    /* SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMax_Poke_read' */
    Rte_IrvRead_ETQR_MedTEH_VaETQI_M_EngCapabilityMax_write_IRV
        (rtb_TmpSignalConversionAtVaETQI);

    /* SignalConversion generated from: '<S3>/VeETQI_Cnt_CapabilityFrame_Max_read' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    rtb_TmpSignalConversionAtVeETQI =
        Rte_IrvRead_ETQR_MedTEH_VeETQI_Cnt_CapabilityFrame_Max_write_IRV();

    /* SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMax_Poke_read' */
    Rte_IrvRead_ETQR_MedTEH_VaETQI_M_EngHalfCylCapabilityMax_write_IRV
        (rtb_TmpSignalConversionAtVaET_i);

    /* SignalConversion generated from: '<S3>/VeETQI_Cnt_CapabilityFrame_HalfCylMax_read' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    rtb_TmpSignalConversionAtVeET_k =
        Rte_IrvRead_ETQR_MedTEH_VeETQI_Cnt_CapabilityFrame_HalfCylMax_write_IRV();

    /* SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMinOff_Poke_read' */
    Rte_IrvRead_ETQR_MedTEH_VaETQI_M_EngCapabilityMinOff_write_IRV
        (rtb_TmpSignalConversionAtVaET_l);

    /* SignalConversion generated from: '<S3>/VeETQI_Cnt_CapabilityFrame_Min_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtVeET_c =
        Rte_IrvRead_ETQR_MedTEH_VeETQI_Cnt_CapabilityFrame_Min_write_IRV();

    /* SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMinOff_Poke_read' */
    Rte_IrvRead_ETQR_MedTEH_VaETQI_M_EngHalfCylCapabilityMinOff_write_IRV
        (rtb_TmpSignalConversionAtVaET_n);

    /* SignalConversion generated from: '<S3>/VeETQI_Cnt_CapabilityFrame_HalfCylMin_read' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    rtb_TmpSignalConversionAtVeE_ca =
        Rte_IrvRead_ETQR_MedTEH_VeETQI_Cnt_CapabilityFrame_HalfCylMin_write_IRV();

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Capability_ArraysProcessor'
     */
    /* Outputs for Atomic SubSystem: '<S266>/EdgeRising' */
    /* Logic: '<S271>/AND' incorporates:
     *  Logic: '<S271>/OR1'
     *  UnitDelay: '<S271>/Unit Delay'
     */
    rtb_AND_a2 = !ETQR_ac_DW.UnitDelay_DSTATE_hk;

    /* Update for UnitDelay: '<S271>/Unit Delay' incorporates:
     *  Constant: '<S266>/TRUE Constant'
     */
    ETQR_ac_DW.UnitDelay_DSTATE_hk = true;

    /* End of Outputs for SubSystem: '<S266>/EdgeRising' */

    /* Switch: '<S272>/Switch1' */
    if (rtb_AND_a2)
    {
        /* Switch: '<S272>/Switch1' incorporates:
         *  SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMax_Poke_read'
         */
        memcpy(&rtb_Switch1[0], &rtb_TmpSignalConversionAtVaETQI[0], (sizeof
                (float32)) << 4ULL);
    }
    else
    {
        /* Switch: '<S272>/Switch1' incorporates:
         *  UnitDelay: '<S272>/Unit Delay'
         */
        memcpy(&rtb_Switch1[0], &ETQR_ac_DW.UnitDelay_DSTATE[0], (sizeof(float32))
               << 4ULL);
    }

    /* End of Switch: '<S272>/Switch1' */

    /* If: '<S262>/If' incorporates:
     *  Constant: '<S262>/Constant Value2'
     *  Selector: '<S262>/Current_array_first_element'
     *  Selector: '<S262>/Previous_array_first_element'
     *  SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMax_Poke_read'
     *  Switch: '<S272>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVaETQI[0] > rtb_Switch1[0])
    {
        /* Outputs for IfAction SubSystem: '<S262>/First_element_increases' incorporates:
         *  ActionPort: '<S268>/Action Port'
         */
        ETQR_ac_First_element_increases(rtb_TmpSignalConversionAtVaETQI,
            rtb_Switch1, rtb_TmpSignalConversionAtVeETQI, rtb_Merge2);

        /* End of Outputs for SubSystem: '<S262>/First_element_increases' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S262>/First_element_decreases_or_unchanged' incorporates:
         *  ActionPort: '<S267>/Action Port'
         */
        First_element_decreases_or_unch(rtb_TmpSignalConversionAtVaETQI,
            rtb_Merge2);

        /* End of Outputs for SubSystem: '<S262>/First_element_decreases_or_unchanged' */
    }

    /* End of If: '<S262>/If' */

    /* Outputs for Atomic SubSystem: '<S273>/EdgeRising' */
    /* Logic: '<S278>/AND' incorporates:
     *  Logic: '<S278>/OR1'
     *  UnitDelay: '<S278>/Unit Delay'
     */
    rtb_AND_h = !ETQR_ac_DW.UnitDelay_DSTATE_i;

    /* Update for UnitDelay: '<S278>/Unit Delay' incorporates:
     *  Constant: '<S273>/TRUE Constant'
     */
    ETQR_ac_DW.UnitDelay_DSTATE_i = true;

    /* End of Outputs for SubSystem: '<S273>/EdgeRising' */

    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S270>/Calib'
     */
    if (KeETQR_b_EnableEngCapabilityMax_Fix)
    {
        /* Switch: '<S262>/Switch' incorporates:
         *  Constant: '<S269>/Calib'
         */
        memcpy(&rtb_Switch1[0], ((const float32 *)
                &(KaETQR_M_EngCapabilityMax_Dflt[0])), (sizeof(float32)) << 4ULL);
    }
    else
    {
        /* Switch: '<S262>/Switch' incorporates:
         *  Merge: '<S265>/Merge2'
         */
        memcpy(&rtb_Switch1[0], &rtb_Merge2[0], (sizeof(float32)) << 4ULL);
    }

    /* End of Switch: '<S262>/Switch' */

    /* Switch: '<S279>/Switch1' */
    if (rtb_AND_h)
    {
        /* Switch: '<S279>/Switch1' incorporates:
         *  SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMinOff_Poke_read'
         */
        memcpy(&rtb_Switch1_a[0], &rtb_TmpSignalConversionAtVaET_l[0], (sizeof
                (float32)) << 4ULL);
    }
    else
    {
        /* Switch: '<S279>/Switch1' incorporates:
         *  UnitDelay: '<S279>/Unit Delay'
         */
        memcpy(&rtb_Switch1_a[0], &ETQR_ac_DW.UnitDelay_DSTATE_d[0], (sizeof
                (float32)) << 4ULL);
    }

    /* End of Switch: '<S279>/Switch1' */

    /* If: '<S263>/If' incorporates:
     *  Constant: '<S263>/Constant Value2'
     *  Selector: '<S263>/Current_array_first_element'
     *  Selector: '<S263>/Previous_array_first_element'
     *  SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMinOff_Poke_read'
     *  Switch: '<S279>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVaET_l[0] < rtb_Switch1_a[0])
    {
        /* Outputs for IfAction SubSystem: '<S263>/First_element_decreases' incorporates:
         *  ActionPort: '<S274>/Action Port'
         */
        ETQR_ac_First_element_increases(rtb_TmpSignalConversionAtVaET_l,
            rtb_Switch1_a, rtb_TmpSignalConversionAtVeET_c, rtb_Merge2);

        /* End of Outputs for SubSystem: '<S263>/First_element_decreases' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S263>/First_element_increases_or_unchanged' incorporates:
         *  ActionPort: '<S275>/Action Port'
         */
        First_element_decreases_or_unch(rtb_TmpSignalConversionAtVaET_l,
            rtb_Merge2);

        /* End of Outputs for SubSystem: '<S263>/First_element_increases_or_unchanged' */
    }

    /* End of If: '<S263>/If' */

    /* Outputs for Atomic SubSystem: '<S280>/EdgeRising' */
    /* Logic: '<S285>/AND' incorporates:
     *  Logic: '<S285>/OR1'
     *  UnitDelay: '<S285>/Unit Delay'
     */
    rtb_AND_a = !ETQR_ac_DW.UnitDelay_DSTATE_g1;

    /* Update for UnitDelay: '<S285>/Unit Delay' incorporates:
     *  Constant: '<S280>/TRUE Constant'
     */
    ETQR_ac_DW.UnitDelay_DSTATE_g1 = true;

    /* End of Outputs for SubSystem: '<S280>/EdgeRising' */

    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S277>/Calib'
     */
    if (KeETQR_b_EnableEngCapabilityMinOff_Fix)
    {
        /* Switch: '<S263>/Switch' incorporates:
         *  Constant: '<S276>/Calib'
         */
        memcpy(&rtb_Switch1_a[0], ((const float32 *)
                &(KaETQR_M_EngCapabilityMinOff_Dflt[0])), (sizeof(float32)) <<
               4ULL);
    }
    else
    {
        /* Switch: '<S263>/Switch' incorporates:
         *  Merge: '<S265>/Merge2'
         */
        memcpy(&rtb_Switch1_a[0], &rtb_Merge2[0], (sizeof(float32)) << 4ULL);
    }

    /* End of Switch: '<S263>/Switch' */

    /* Switch: '<S286>/Switch1' */
    if (rtb_AND_a)
    {
        /* Switch: '<S286>/Switch1' incorporates:
         *  SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMax_Poke_read'
         */
        memcpy(&rtb_Switch1_l[0], &rtb_TmpSignalConversionAtVaET_i[0], (sizeof
                (float32)) << 4ULL);
    }
    else
    {
        /* Switch: '<S286>/Switch1' incorporates:
         *  UnitDelay: '<S286>/Unit Delay'
         */
        memcpy(&rtb_Switch1_l[0], &ETQR_ac_DW.UnitDelay_DSTATE_p[0], (sizeof
                (float32)) << 4ULL);
    }

    /* End of Switch: '<S286>/Switch1' */

    /* If: '<S264>/If' incorporates:
     *  Constant: '<S264>/Constant Value2'
     *  Selector: '<S264>/Current_array_first_element'
     *  Selector: '<S264>/Previous_array_first_element'
     *  SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMax_Poke_read'
     *  Switch: '<S286>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVaET_i[0] > rtb_Switch1_l[0])
    {
        /* Outputs for IfAction SubSystem: '<S264>/First_element_increases' incorporates:
         *  ActionPort: '<S282>/Action Port'
         */
        ETQR__First_element_increases_g(rtb_TmpSignalConversionAtVaET_i,
            rtb_Switch1_l, rtb_TmpSignalConversionAtVeET_k, rtb_Merge2);

        /* End of Outputs for SubSystem: '<S264>/First_element_increases' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S264>/First_element_decreases_or_unchanged' incorporates:
         *  ActionPort: '<S281>/Action Port'
         */
        First_element_decreases_or_unch(rtb_TmpSignalConversionAtVaET_i,
            rtb_Merge2);

        /* End of Outputs for SubSystem: '<S264>/First_element_decreases_or_unchanged' */
    }

    /* End of If: '<S264>/If' */

    /* Outputs for Atomic SubSystem: '<S288>/EdgeRising' */
    /* Logic: '<S293>/AND' incorporates:
     *  Logic: '<S293>/OR1'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_AND = !ETQR_ac_DW.UnitDelay_DSTATE_d4;

    /* Update for UnitDelay: '<S293>/Unit Delay' incorporates:
     *  Constant: '<S288>/TRUE Constant'
     */
    ETQR_ac_DW.UnitDelay_DSTATE_d4 = true;

    /* End of Outputs for SubSystem: '<S288>/EdgeRising' */

    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S284>/Calib'
     */
    if (KeETQR_b_EnableEngHalfCylCapabilityMax_Fix)
    {
        /* Switch: '<S264>/Switch' incorporates:
         *  Constant: '<S283>/Calib'
         */
        memcpy(&rtb_Switch1_l[0], ((const float32 *)
                &(KaETQR_M_EngHalfCylCapabilityMax_Dflt[0])), (sizeof(float32)) <<
               4ULL);
    }
    else
    {
        /* Switch: '<S264>/Switch' incorporates:
         *  Merge: '<S265>/Merge2'
         */
        memcpy(&rtb_Switch1_l[0], &rtb_Merge2[0], (sizeof(float32)) << 4ULL);
    }

    /* End of Switch: '<S264>/Switch' */

    /* Switch: '<S294>/Switch1' */
    if (rtb_AND)
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMinOff_Poke_read'
         */
        rtb_Switch1_f_0 = &rtb_TmpSignalConversionAtVaET_n[0];
    }
    else
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  UnitDelay: '<S294>/Unit Delay'
         */
        rtb_Switch1_f_0 = &ETQR_ac_DW.UnitDelay_DSTATE_g[0];
    }

    /* End of Switch: '<S294>/Switch1' */

    /* If: '<S265>/If' incorporates:
     *  Constant: '<S265>/Constant Value2'
     *  Selector: '<S265>/Current_array_first_element'
     *  Selector: '<S265>/Previous_array_first_element'
     *  SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMinOff_Poke_read'
     *  Switch: '<S294>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVaET_n[0] < rtb_Switch1_f_0[0])
    {
        /* Outputs for IfAction SubSystem: '<S265>/First_element_decreases' incorporates:
         *  ActionPort: '<S289>/Action Port'
         */
        ETQR__First_element_increases_g(rtb_TmpSignalConversionAtVaET_n,
            rtb_Switch1_f_0, rtb_TmpSignalConversionAtVeE_ca, rtb_Merge2);

        /* End of Outputs for SubSystem: '<S265>/First_element_decreases' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S265>/First_element_increases_or_unchanged' incorporates:
         *  ActionPort: '<S290>/Action Port'
         */
        First_element_decreases_or_unch(rtb_TmpSignalConversionAtVaET_n,
            rtb_Merge2);

        /* End of Outputs for SubSystem: '<S265>/First_element_increases_or_unchanged' */
    }

    /* End of If: '<S265>/If' */

    /* Switch: '<S272>/Switch3' */
    if (rtb_AND_a2)
    {
        /* Update for UnitDelay: '<S272>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMax_Poke_read'
         */
        memcpy(&ETQR_ac_DW.UnitDelay_DSTATE[0],
               &rtb_TmpSignalConversionAtVaETQI[0], (sizeof(float32)) << 4ULL);
    }
    else
    {
        /* Update for UnitDelay: '<S272>/Unit Delay' incorporates:
         *  Switch: '<S262>/Switch'
         */
        memcpy(&ETQR_ac_DW.UnitDelay_DSTATE[0], &rtb_Switch1[0], (sizeof(float32))
               << 4ULL);
    }

    /* End of Switch: '<S272>/Switch3' */

    /* Switch: '<S279>/Switch3' */
    if (rtb_AND_h)
    {
        /* Update for UnitDelay: '<S279>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<S3>/VaETQI_M_EngCapabilityMinOff_Poke_read'
         */
        memcpy(&ETQR_ac_DW.UnitDelay_DSTATE_d[0],
               &rtb_TmpSignalConversionAtVaET_l[0], (sizeof(float32)) << 4ULL);
    }
    else
    {
        /* Update for UnitDelay: '<S279>/Unit Delay' incorporates:
         *  Switch: '<S263>/Switch'
         */
        memcpy(&ETQR_ac_DW.UnitDelay_DSTATE_d[0], &rtb_Switch1_a[0], (sizeof
                (float32)) << 4ULL);
    }

    /* End of Switch: '<S279>/Switch3' */

    /* Switch: '<S286>/Switch3' */
    if (rtb_AND_a)
    {
        /* Update for UnitDelay: '<S286>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMax_Poke_read'
         */
        memcpy(&ETQR_ac_DW.UnitDelay_DSTATE_p[0],
               &rtb_TmpSignalConversionAtVaET_i[0], (sizeof(float32)) << 4ULL);
    }
    else
    {
        /* Update for UnitDelay: '<S286>/Unit Delay' incorporates:
         *  Switch: '<S264>/Switch'
         */
        memcpy(&ETQR_ac_DW.UnitDelay_DSTATE_p[0], &rtb_Switch1_l[0], (sizeof
                (float32)) << 4ULL);
    }

    /* End of Switch: '<S286>/Switch3' */
    for (i = 0; i < 16; i++)
    {
        /* Switch: '<S265>/Switch' incorporates:
         *  Constant: '<S291>/Calib'
         *  Constant: '<S292>/Calib'
         *  Merge: '<S265>/Merge2'
         */
        rtb_Merge2_a = rtb_Merge2[i];
        if (KeETQR_b_EnableEngHalfCylCapabilityMinOff_Fix)
        {
            /* Switch: '<S265>/Switch' */
            rtb_Merge2_a = KaETQR_M_EngHalfCylCapabilityMinOff_Dflt[(i)];
        }

        /* Switch: '<S294>/Switch3' */
        if (rtb_AND)
        {
            /* Update for UnitDelay: '<S294>/Unit Delay' incorporates:
             *  SignalConversion generated from: '<S3>/VaETQI_M_EngHalfCylCapabilityMinOff_Poke_read'
             */
            ETQR_ac_DW.UnitDelay_DSTATE_g[i] = rtb_TmpSignalConversionAtVaET_n[i];
        }
        else
        {
            /* Update for UnitDelay: '<S294>/Unit Delay' */
            ETQR_ac_DW.UnitDelay_DSTATE_g[i] = rtb_Merge2_a;
        }

        /* End of Switch: '<S294>/Switch3' */

        /* Switch: '<S265>/Switch' incorporates:
         *  Constant: '<S291>/Calib'
         */
        rtb_Merge2[i] = rtb_Merge2_a;
    }

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VaETQR_M_EngCapabilityMax' incorporates:
     *  SignalConversion generated from: '<S3>/EngCapabilityMax'
     */
    (void)Rte_Write_VaETQR_M_EngCapabilityMax_Value(rtb_Switch1);

    /* Outport: '<Root>/VaETQR_M_EngCapabilityMinOff' incorporates:
     *  SignalConversion generated from: '<S3>/EngCapabilityMinOff'
     */
    (void)Rte_Write_VaETQR_M_EngCapabilityMinOff_Value(rtb_Switch1_a);

    /* Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMax' incorporates:
     *  SignalConversion generated from: '<S3>/EngHalfCylCapabilityMax'
     */
    (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMax_Value(rtb_Switch1_l);

    /* Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMinOff' incorporates:
     *  SignalConversion generated from: '<S3>/EngHalfCylCapabilityMinOff'
     */
    (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMinOff_Value(rtb_Merge2);

    /* Merge: '<Root>/EngCapabilityMax_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/EngCapabilityMax_x10ms_write'
     */
    Rte_IrvWrite_ETQR_MedTEH_EngCapabilityMax_x10ms_write_IRV(rtb_Switch1);

    /* Merge: '<Root>/EngCapabilityMinOff_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/EngCapabilityMinOff_x10ms_write'
     */
    Rte_IrvWrite_ETQR_MedTEH_EngCapabilityMinOff_x10ms_write_IRV(rtb_Switch1_a);

    /* Merge: '<Root>/EngHalfCylCapabilityMax_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/EngHalfCylCapabilityMax_x10ms_write'
     */
    Rte_IrvWrite_ETQR_MedTEH_EngHalfCylCapabilityMax_x10ms_write_IRV
        (rtb_Switch1_l);

    /* Merge: '<Root>/EngHalfCylCapabilityMinOff_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/EngHalfCylCapabilityMinOff_x10ms_write'
     */
    Rte_IrvWrite_ETQR_MedTEH_EngHalfCylCapabilityMinOff_x10ms_write_IRV
        (rtb_Merge2);

    /* End of Outputs for SubSystem: '<Root>/ETQR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapabilityMax(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapabilityMinOff(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapabilityMinRun(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapacityMax(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngCapacityMax' */
    /* Outport: '<Root>/VeETQR_b_EngCapacityMax_FA' incorporates:
     *  Chart: '<S8>/FsftETQR_M_EngCapacityMaxChrt'
     *  SignalConversion generated from: '<S8>/VeETQR_b_EngCapacityMaxFA'
     */
    /* Gateway: FsftETQR_M_EngCapacityMax/FsftETQR_M_EngCapacityMaxChrt */
    /* During: FsftETQR_M_EngCapacityMax/FsftETQR_M_EngCapacityMaxChrt */
    /* Entry Internal: FsftETQR_M_EngCapacityMax/FsftETQR_M_EngCapacityMaxChrt */
    /* Transition: '<S335>:2' */
    (void)Rte_Write_VeETQR_b_EngCapacityMax_FA_Value(true);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S8>/FsftETQR_M_EngCapacityMaxChrt'
     *  SignalConversion generated from: '<S8>/VeETQR_M_EngCapacityMax_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMax_VeETQI_M_EngCapacityMax_write_IRV
        (KeETQR_M_EngCapacityMax_Dflt);

    /* Merge: '<Root>/Merge_38_Irv' incorporates:
     *  Chart: '<S8>/FsftETQR_M_EngCapacityMaxChrt'
     *  SignalConversion generated from: '<S8>/VeETQR_b_EngCapacityMaxFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMax_VeETQI_b_EngCapacityMax_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngCapacityMax' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapacityMinOff(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngCapacityMinOff' */
    /* Outport: '<Root>/VeETQR_b_EngCapacityMinOff_FA' incorporates:
     *  Chart: '<S9>/FsftETQR_M_EngCapacityMinOffChrt'
     *  SignalConversion generated from: '<S9>/VeETQR_b_EngCapacityMinOffFA'
     */
    /* Gateway: FsftETQR_M_EngCapacityMinOff/FsftETQR_M_EngCapacityMinOffChrt */
    /* During: FsftETQR_M_EngCapacityMinOff/FsftETQR_M_EngCapacityMinOffChrt */
    /* Entry Internal: FsftETQR_M_EngCapacityMinOff/FsftETQR_M_EngCapacityMinOffChrt */
    /* Transition: '<S336>:2' */
    (void)Rte_Write_VeETQR_b_EngCapacityMinOff_FA_Value(true);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S9>/FsftETQR_M_EngCapacityMinOffChrt'
     *  SignalConversion generated from: '<S9>/VeETQR_M_EngCapacityMinOff_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinOff_VeETQI_M_EngCapacityMinOff_write_IRV
        (KeETQR_M_EngCapacityMinOff_Dflt);

    /* Merge: '<Root>/Merge_42_Irv' incorporates:
     *  Chart: '<S9>/FsftETQR_M_EngCapacityMinOffChrt'
     *  SignalConversion generated from: '<S9>/VeETQR_b_EngCapacityMinOffFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinOff_VeETQI_b_EngCapacityMinOff_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngCapacityMinOff' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapacityMinRun(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngCapacityMinRun' */
    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRun_FA' incorporates:
     *  Chart: '<S10>/FsftETQR_M_EngCapacityMinRunChrt'
     *  SignalConversion generated from: '<S10>/VeETQR_b_EngCapacityMinRunFA'
     */
    /* Gateway: FsftETQR_M_EngCapacityMinRun/FsftETQR_M_EngCapacityMinRunChrt */
    /* During: FsftETQR_M_EngCapacityMinRun/FsftETQR_M_EngCapacityMinRunChrt */
    /* Entry Internal: FsftETQR_M_EngCapacityMinRun/FsftETQR_M_EngCapacityMinRunChrt */
    /* Transition: '<S337>:2' */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRun_FA_Value(true);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S10>/FsftETQR_M_EngCapacityMinRunChrt'
     *  SignalConversion generated from: '<S10>/VeETQR_M_EngCapacityMinRun_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinRun_VeETQI_M_EngCapacityMinRun_write_IRV
        (KeETQR_M_EngCapacityMinRun_Dflt);

    /* Merge: '<Root>/Merge_39_Irv' incorporates:
     *  Chart: '<S10>/FsftETQR_M_EngCapacityMinRunChrt'
     *  SignalConversion generated from: '<S10>/VeETQR_b_EngCapacityMinRunFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinRun_VeETQI_b_EngCapacityMinRun_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngCapacityMinRun' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapacityMinRunImmedNom(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngCapacityMinRunImmedNom' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S11>/FsftETQR_M_EngCapacityMinRunImmedNomChrt'
     *  SignalConversion generated from: '<S11>/VeETQR_M_EngCapacityMinRunImmedNom_write'
     */
    /* Gateway: FsftETQR_M_EngCapacityMinRunImmedNom/FsftETQR_M_EngCapacityMinRunImmedNomChrt */
    /* During: FsftETQR_M_EngCapacityMinRunImmedNom/FsftETQR_M_EngCapacityMinRunImmedNomChrt */
    /* Entry Internal: FsftETQR_M_EngCapacityMinRunImmedNom/FsftETQR_M_EngCapacityMinRunImmedNomChrt */
    /* Transition: '<S338>:2' */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinRunImmedNom_VeETQI_M_EngCapacityMinRunImmedNom_write_IRV
        (KeETQR_M_EngCapacityMinRunImmedNom_Dflt);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  Chart: '<S11>/FsftETQR_M_EngCapacityMinRunImmedNomChrt'
     *  SignalConversion generated from: '<S11>/VeETQR_b_EngCapacityMinRunImmedNomFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinRunImmedNom_VeETQI_b_EngCapacityMinRunImmedNom_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngCapacityMinRunImmedNom' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngCapacityMinRunImmedRed(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngCapacityMinRunImmedRed' */
    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRed_FA' incorporates:
     *  Chart: '<S12>/FsftETQR_M_EngCapacityMinRunImmedRedChrt'
     *  SignalConversion generated from: '<S12>/VeETQR_b_EngCapacityMinRunImmedRedFA'
     */
    /* Gateway: FsftETQR_M_EngCapacityMinRunImmedRed/FsftETQR_M_EngCapacityMinRunImmedRedChrt */
    /* During: FsftETQR_M_EngCapacityMinRunImmedRed/FsftETQR_M_EngCapacityMinRunImmedRedChrt */
    /* Entry Internal: FsftETQR_M_EngCapacityMinRunImmedRed/FsftETQR_M_EngCapacityMinRunImmedRedChrt */
    /* Transition: '<S339>:2' */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRed_FA_Value(true);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S12>/FsftETQR_M_EngCapacityMinRunImmedRedChrt'
     *  SignalConversion generated from: '<S12>/VeETQR_M_EngCapacityMinRunImmedRed_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinRunImmedRed_VeETQI_M_EngCapacityMinRunImmed_write_IRV
        (KeETQR_M_EngCapacityMinRunImmedRed_Dflt);

    /* Merge: '<Root>/Merge_40_Irv' incorporates:
     *  Chart: '<S12>/FsftETQR_M_EngCapacityMinRunImmedRedChrt'
     *  SignalConversion generated from: '<S12>/VeETQR_b_EngCapacityMinRunImmedRedFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngCapacityMinRunImmedRed_VeETQI_b_EngCapacityMinRunImmed_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngCapacityMinRunImmedRed' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngTorqACC4Capability(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngTorqACC4Capability' */
    /* Outport: '<Root>/VeETQR_M_EngTorqACC4Capability' incorporates:
     *  Chart: '<S13>/FsftETQR_M_EngTorqACC4CapabilityChrt'
     *  SignalConversion generated from: '<S13>/VeETQR_M_EngTorqACC4Capability'
     */
    /* Gateway: FsftETQR_M_EngTorqACC4Capability/FsftETQR_M_EngTorqACC4CapabilityChrt */
    /* During: FsftETQR_M_EngTorqACC4Capability/FsftETQR_M_EngTorqACC4CapabilityChrt */
    /* Entry Internal: FsftETQR_M_EngTorqACC4Capability/FsftETQR_M_EngTorqACC4CapabilityChrt */
    /* Transition: '<S340>:2' */
    (void)Rte_Write_VeETQR_M_EngTorqACC4Capability_Value
        (KeETQR_M_EngTrqAccsryDflt);

    /* Outport: '<Root>/VeETQR_b_EngTorqACC4Capability_FA' incorporates:
     *  Chart: '<S13>/FsftETQR_M_EngTorqACC4CapabilityChrt'
     *  SignalConversion generated from: '<S13>/VeETQR_b_EngTorqACC4CapabilityFA'
     */
    (void)Rte_Write_VeETQR_b_EngTorqACC4Capability_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngTorqACC4Capability' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngTorque(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngTorque' */
    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S14>/FsftETQR_M_EngTorqueChrt'
     *  SignalConversion generated from: '<S14>/VeETQR_b_EngTorqueFA_write'
     */
    /* Gateway: FsftETQR_M_EngTorque/FsftETQR_M_EngTorqueChrt */
    /* During: FsftETQR_M_EngTorque/FsftETQR_M_EngTorqueChrt */
    /* Entry Internal: FsftETQR_M_EngTorque/FsftETQR_M_EngTorqueChrt */
    /* Transition: '<S341>:2' */
    Rte_IrvWrite_FsftETQR_M_EngTorque_VeETQI_b_EngTorque_FA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngTorque' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngTrqActual(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngTrqActual' */
    /* Outport: '<Root>/VeETQR_b_EngTrqActual_FA' incorporates:
     *  Chart: '<S15>/FsftETQR_M_EngTrqActualChrt'
     *  SignalConversion generated from: '<S15>/VeETQR_b_EngTrqActualFA'
     */
    /* Gateway: FsftETQR_M_EngTrqActual/FsftETQR_M_EngTrqActualChrt */
    /* During: FsftETQR_M_EngTrqActual/FsftETQR_M_EngTrqActualChrt */
    /* Entry Internal: FsftETQR_M_EngTrqActual/FsftETQR_M_EngTrqActualChrt */
    /* Transition: '<S342>:2' */
    (void)Rte_Write_VeETQR_b_EngTrqActual_FA_Value(true);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  Chart: '<S15>/FsftETQR_M_EngTrqActualChrt'
     *  SignalConversion generated from: '<S15>/VeETQR_b_EngTrqActualFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngTrqActual_VeETQI_b_EngTrqActual_FA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngTrqActual' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngTrqAirflow(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngTrqAirflow' */
    /* Outport: '<Root>/VeETQR_b_EngTrqAirflow_FA' incorporates:
     *  Chart: '<S16>/FsftETQR_M_EngTrqAirflowChrt'
     *  SignalConversion generated from: '<S16>/VeETQR_b_EngTrqAirflowFA'
     */
    /* Gateway: FsftETQR_M_EngTrqAirflow/FsftETQR_M_EngTrqAirflowChrt */
    /* During: FsftETQR_M_EngTrqAirflow/FsftETQR_M_EngTrqAirflowChrt */
    /* Entry Internal: FsftETQR_M_EngTrqAirflow/FsftETQR_M_EngTrqAirflowChrt */
    /* Transition: '<S343>:2' */
    (void)Rte_Write_VeETQR_b_EngTrqAirflow_FA_Value(true);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  Chart: '<S16>/FsftETQR_M_EngTrqAirflowChrt'
     *  SignalConversion generated from: '<S16>/VeETQR_b_EngTrqAirflowFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_EngTrqAirflow_VeETQI_b_EngTrqAirflow_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngTrqAirflow' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngTrqFSO_CurrAir(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngTrqReserveReq(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngTrqReserveReq' */
    /* Outport: '<Root>/VeETQR_M_EngTrqReserveReq' incorporates:
     *  Chart: '<S18>/FsftETQR_M_EngTrqReserveReqChrt'
     *  SignalConversion generated from: '<S18>/VeETQR_M_EngTrqReserveReq'
     */
    /* Gateway: FsftETQR_M_EngTrqReserveReq/FsftETQR_M_EngTrqReserveReqChrt */
    /* During: FsftETQR_M_EngTrqReserveReq/FsftETQR_M_EngTrqReserveReqChrt */
    /* Entry Internal: FsftETQR_M_EngTrqReserveReq/FsftETQR_M_EngTrqReserveReqChrt */
    /* Transition: '<S345>:2' */
    (void)Rte_Write_VeETQR_M_EngTrqReserveReq_Value(KeETQR_M_EngTrqResrvReqDflt);

    /* Outport: '<Root>/VeETQR_b_EngTrqReserveReq_FA' incorporates:
     *  Chart: '<S18>/FsftETQR_M_EngTrqReserveReqChrt'
     *  SignalConversion generated from: '<S18>/VeETQR_b_EngTrqReserveReqFA'
     */
    (void)Rte_Write_VeETQR_b_EngTrqReserveReq_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngTrqReserveReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_EngTrqStaticSEM(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_EngTrqStaticSEM' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S19>/FsftETQR_M_EngTrqStaticSEMChrt'
     *  SignalConversion generated from: '<S19>/VeETQR_b_EngTrqStaticSEMFA_write'
     */
    /* Gateway: FsftETQR_M_EngTrqStaticSEM/FsftETQR_M_EngTrqStaticSEMChrt */
    /* During: FsftETQR_M_EngTrqStaticSEM/FsftETQR_M_EngTrqStaticSEMChrt */
    /* Entry Internal: FsftETQR_M_EngTrqStaticSEM/FsftETQR_M_EngTrqStaticSEMChrt */
    /* Transition: '<S346>:2' */
    Rte_IrvWrite_FsftETQR_M_EngTrqStaticSEM_VeETQI_b_EngTrqStaticSEM_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_EngTrqStaticSEM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_MinAirFlowMinSparkCapacity(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_MinAirFlowMinSparkCapacity' */
    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S20>/FsftETQR_M_MinAirFlowMinSparkCapacityChrt'
     *  SignalConversion generated from: '<S20>/VeETQR_M_MinAirFlowMinSparkCapacity_write'
     */
    /* Gateway: FsftETQR_M_MinAirFlowMinSparkCapacity/FsftETQR_M_MinAirFlowMinSparkCapacityChrt */
    /* During: FsftETQR_M_MinAirFlowMinSparkCapacity/FsftETQR_M_MinAirFlowMinSparkCapacityChrt */
    /* Entry Internal: FsftETQR_M_MinAirFlowMinSparkCapacity/FsftETQR_M_MinAirFlowMinSparkCapacityChrt */
    /* Transition: '<S347>:2' */
    Rte_IrvWrite_FsftETQR_M_MinAirFlowMinSparkCapacity_VeETQI_M_MinAirFlowMinSparkCapacity_write_IRV
        (KeETQR_M_EngCapacityMinOff_Dflt);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S20>/FsftETQR_M_MinAirFlowMinSparkCapacityChrt'
     *  SignalConversion generated from: '<S20>/VeETQR_b_MinAirFlowMinSparkCapacityFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_MinAirFlowMinSparkCapacity_VeETQI_b_MinAirFlowMinSparkCapacity_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_MinAirFlowMinSparkCapacity' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_MinDragCapability(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_MinDragCapacity(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_MinDragCapacity' */
    /* Merge: '<Root>/Merge_43' incorporates:
     *  Chart: '<S22>/FsftETQR_M_MinDragCapacityChrt'
     *  SignalConversion generated from: '<S22>/VeETQR_M_MinDragCapacity_write'
     */
    /* Gateway: FsftETQR_M_MinDragCapacity/FsftETQR_M_MinDragCapacityChrt */
    /* During: FsftETQR_M_MinDragCapacity/FsftETQR_M_MinDragCapacityChrt */
    /* Entry Internal: FsftETQR_M_MinDragCapacity/FsftETQR_M_MinDragCapacityChrt */
    /* Transition: '<S349>:2' */
    Rte_IrvWrite_FsftETQR_M_MinDragCapacity_VeETQI_M_MinDragCapacity_write_IRV
        (KeETQR_M_EngCapacityMinOff_Dflt);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S22>/FsftETQR_M_MinDragCapacityChrt'
     *  SignalConversion generated from: '<S22>/VeETQR_b_MinDragCapacityFA_write'
     */
    Rte_IrvWrite_FsftETQR_M_MinDragCapacity_VeETQI_b_MinDragCapacity_FA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_MinDragCapacity' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_M_PnLimitMaxEngTrqCap(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_M_PnLimitMaxEngTrqCap' */
    /* Outport: '<Root>/VeETQR_b_PnLimitMaxEngTrqCap_FA' incorporates:
     *  Chart: '<S23>/FsftETQR_M_PnLimitMaxEngTrqCapChrt'
     *  SignalConversion generated from: '<S23>/VeETQR_b_PnLimitMaxEngTrqCapFA'
     */
    /* Gateway: FsftETQR_M_PnLimitMaxEngTrqCap/FsftETQR_M_PnLimitMaxEngTrqCapChrt */
    /* During: FsftETQR_M_PnLimitMaxEngTrqCap/FsftETQR_M_PnLimitMaxEngTrqCapChrt */
    /* Entry Internal: FsftETQR_M_PnLimitMaxEngTrqCap/FsftETQR_M_PnLimitMaxEngTrqCapChrt */
    /* Transition: '<S350>:2' */
    (void)Rte_Write_VeETQR_b_PnLimitMaxEngTrqCap_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_M_PnLimitMaxEngTrqCap' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_b_EngCapacityMinRunImmedRedAvail(void)
{

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftETQR_b_EngCapacityMinRunImmedRedAvail' */
    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRedAvail' incorporates:
     *  Chart: '<S24>/FsftETQR_b_EngCapacityMinRunImmedRedAvailChrt'
     *  SignalConversion generated from: '<S24>/VeETQR_b_EngCapacityMinRunImmedRedAvail'
     */
    /* Gateway: FsftETQR_b_EngCapacityMinRunImmedRedAvail/FsftETQR_b_EngCapacityMinRunImmedRedAvailChrt */
    /* During: FsftETQR_b_EngCapacityMinRunImmedRedAvail/FsftETQR_b_EngCapacityMinRunImmedRedAvailChrt */
    /* Entry Internal: FsftETQR_b_EngCapacityMinRunImmedRedAvail/FsftETQR_b_EngCapacityMinRunImmedRedAvailChrt */
    /* Transition: '<S351>:2' */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRedAvail_Value
        (KeETQR_b_EngCapacityMinRunImmedRedAvail_Dflt);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRedAvail_FA' incorporates:
     *  Chart: '<S24>/FsftETQR_b_EngCapacityMinRunImmedRedAvailChrt'
     *  SignalConversion generated from: '<S24>/VeETQR_b_EngCapacityMinRunImmedRedAvailFA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRedAvail_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftETQR_b_EngCapacityMinRunImmedRedAvail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) FsftETQR_n_EngCapability(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapabilityMax(VAR(float32, AUTOMATIC)
    LeETQR_M_EngCapabilityMax, VAR(sint16, AUTOMATIC) LeETQR_Cnt_CapabilityFrame,
    VAR(boolean, AUTOMATIC) LeETQR_b_EngOpMode, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngCapabilityMaxFA)
{

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapabilityMax);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_Cnt_CapabilityFrame);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngOpMode);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapabilityMaxFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapabilityMax' */
    /* Chart: '<S26>/PokeETQR_M_EngCapabilityMaxChrt' incorporates:
     *  SignalConversion generated from: '<S26>/LeETQR_Cnt_CapabilityFrame'
     *  SignalConversion generated from: '<S26>/LeETQR_M_EngCapabilityMax'
     *  SignalConversion generated from: '<S26>/LeETQR_b_EngCapabilityMaxFA'
     *  SignalConversion generated from: '<S26>/LeETQR_b_EngOpMode'
     */
    /* Gateway: PokeETQR_M_EngCapabilityMax/PokeETQR_M_EngCapabilityMaxChrt */
    /* During: PokeETQR_M_EngCapabilityMax/PokeETQR_M_EngCapabilityMaxChrt */
    /* Entry Internal: PokeETQR_M_EngCapabilityMax/PokeETQR_M_EngCapabilityMaxChrt */
    /* Transition: '<S353>:2' */
    if (!LeETQR_b_EngCapabilityMaxFA)
    {
        /* Transition: '<S353>:51' */
        if (!LeETQR_b_EngOpMode)
        {
            /* Transition: '<S353>:32' */
            /* Transition: '<S353>:61' */
            ETQR_ac_B.VaETQI_M_EngCapabilityMax_Poke[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_EngCapabilityMax;
            ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Max = (float32)
                LeETQR_Cnt_CapabilityFrame;

            /* Transition: '<S353>:62' */
        }
        else
        {
            /* Transition: '<S353>:33' */
            ETQR_ac_B.VaETQI_M_EngHalfCylCapability_l[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_EngCapabilityMax;
            ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Ha_c = (float32)
                LeETQR_Cnt_CapabilityFrame;
        }

        /* Transition: '<S353>:63' */
    }
    else
    {
        /* Transition: '<S353>:57' */
    }

    /* End of Chart: '<S26>/PokeETQR_M_EngCapabilityMaxChrt' */

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S26>/VaETQI_M_EngCapabilityMax_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMax_VaETQI_M_EngCapabilityMax_write_IRV
        (ETQR_ac_B.VaETQI_M_EngCapabilityMax_Poke);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S26>/VaETQI_M_EngHalfCylCapabilityMax_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMax_VaETQI_M_EngHalfCylCapabilityMax_write_IRV
        (ETQR_ac_B.VaETQI_M_EngHalfCylCapability_l);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S26>/VeETQI_Cnt_CapabilityFrame_HalfCylMax_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMax_VeETQI_Cnt_CapabilityFrame_HalfCylMax_write_IRV
        (ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Ha_c);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S26>/VeETQI_Cnt_CapabilityFrame_Max_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMax_VeETQI_Cnt_CapabilityFrame_Max_write_IRV
        (ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Max);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapabilityMax' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapabilityMinOff(VAR(float32, AUTOMATIC)
    LeETQR_M_EngCapabilityMinOff, VAR(sint16, AUTOMATIC)
    LeETQR_Cnt_CapabilityFrame, VAR(boolean, AUTOMATIC) LeETQR_b_EngOpMode, VAR
    (boolean, AUTOMATIC) LeETQR_b_EngCapabilityMinOffFA)
{

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapabilityMinOff);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_Cnt_CapabilityFrame);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngOpMode);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapabilityMinOffFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapabilityMinOff' */
    /* Chart: '<S27>/PokeETQR_M_EngCapabilityMinOffChrt' incorporates:
     *  SignalConversion generated from: '<S27>/LeETQR_Cnt_CapabilityFrame'
     *  SignalConversion generated from: '<S27>/LeETQR_M_EngCapabilityMinOff'
     *  SignalConversion generated from: '<S27>/LeETQR_b_EngCapabilityMinOffFA'
     *  SignalConversion generated from: '<S27>/LeETQR_b_EngOpMode'
     */
    /* Gateway: PokeETQR_M_EngCapabilityMinOff/PokeETQR_M_EngCapabilityMinOffChrt */
    /* During: PokeETQR_M_EngCapabilityMinOff/PokeETQR_M_EngCapabilityMinOffChrt */
    /* Entry Internal: PokeETQR_M_EngCapabilityMinOff/PokeETQR_M_EngCapabilityMinOffChrt */
    /* Transition: '<S354>:2' */
    if (!LeETQR_b_EngCapabilityMinOffFA)
    {
        /* Transition: '<S354>:50' */
        if (!LeETQR_b_EngOpMode)
        {
            /* Transition: '<S354>:32' */
            /* Transition: '<S354>:56' */
            ETQR_ac_B.VaETQI_M_EngCapabilityMinOff_Po[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_EngCapabilityMinOff;
            ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Min = (float32)
                LeETQR_Cnt_CapabilityFrame;

            /* Transition: '<S354>:57' */
        }
        else
        {
            /* Transition: '<S354>:33' */
            ETQR_ac_B.VaETQI_M_EngHalfCylCapability_n[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_EngCapabilityMinOff;
            ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Ha_i = (float32)
                LeETQR_Cnt_CapabilityFrame;
        }

        /* Transition: '<S354>:58' */
    }
    else
    {
        /* Transition: '<S354>:51' */
    }

    /* End of Chart: '<S27>/PokeETQR_M_EngCapabilityMinOffChrt' */

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S27>/VaETQI_M_EngCapabilityMinOff_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMinOff_VaETQI_M_EngCapabilityMinOff_write_IRV
        (ETQR_ac_B.VaETQI_M_EngCapabilityMinOff_Po);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S27>/VaETQI_M_EngHalfCylCapabilityMinOff_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMinOff_VaETQI_M_EngHalfCylCapabilityMinOff_write_IRV
        (ETQR_ac_B.VaETQI_M_EngHalfCylCapability_n);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S27>/VeETQI_Cnt_CapabilityFrame_HalfCylMin_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMinOff_VeETQI_Cnt_CapabilityFrame_HalfCylMin_write_IRV
        (ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Ha_i);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S27>/VeETQI_Cnt_CapabilityFrame_Min_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMinOff_VeETQI_Cnt_CapabilityFrame_Min_write_IRV
        (ETQR_ac_B.VeETQI_Cnt_CapabilityFrame_Min);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapabilityMinOff' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapabilityMinRun(VAR(float32, AUTOMATIC)
    LeETQR_M_EngCapabilityMinRun, VAR(sint16, AUTOMATIC)
    LeETQR_Cnt_CapabilityFrame, VAR(boolean, AUTOMATIC) LeETQR_b_EngOpMode, VAR
    (boolean, AUTOMATIC) LeETQR_b_EngCapabilityMinRunFA)
{

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapabilityMinRun);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_Cnt_CapabilityFrame);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngOpMode);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapabilityMinRunFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapabilityMinRun' */
    /* Chart: '<S28>/PokeETQR_M_EngCapabilityMinRunChrt' incorporates:
     *  SignalConversion generated from: '<S28>/LeETQR_Cnt_CapabilityFrame'
     *  SignalConversion generated from: '<S28>/LeETQR_M_EngCapabilityMinRun'
     *  SignalConversion generated from: '<S28>/LeETQR_b_EngCapabilityMinRunFA'
     *  SignalConversion generated from: '<S28>/LeETQR_b_EngOpMode'
     */
    /* Gateway: PokeETQR_M_EngCapabilityMinRun/PokeETQR_M_EngCapabilityMinRunChrt */
    /* During: PokeETQR_M_EngCapabilityMinRun/PokeETQR_M_EngCapabilityMinRunChrt */
    /* Entry Internal: PokeETQR_M_EngCapabilityMinRun/PokeETQR_M_EngCapabilityMinRunChrt */
    /* Transition: '<S355>:2' */
    if (!LeETQR_b_EngCapabilityMinRunFA)
    {
        /* Transition: '<S355>:49' */
        if (!LeETQR_b_EngOpMode)
        {
            /* Transition: '<S355>:32' */
            /* Transition: '<S355>:55' */
            ETQR_ac_B.VaETQI_M_EngCapabilityMinRun_Po[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_EngCapabilityMinRun;

            /* Transition: '<S355>:56' */
        }
        else
        {
            /* Transition: '<S355>:33' */
            ETQR_ac_B.VaETQI_M_EngHalfCylCapability_i[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_EngCapabilityMinRun;
        }

        /* Transition: '<S355>:57' */
    }
    else
    {
        /* Transition: '<S355>:50' */
    }

    /* End of Chart: '<S28>/PokeETQR_M_EngCapabilityMinRunChrt' */

    /* Outport: '<Root>/VaETQR_M_EngCapabilityMinRun' incorporates:
     *  SignalConversion generated from: '<S28>/VaETQI_M_EngCapabilityMinRun_Poke'
     */
    (void)Rte_Write_VaETQR_M_EngCapabilityMinRun_Value
        (ETQR_ac_B.VaETQI_M_EngCapabilityMinRun_Po);

    /* Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMinRun' incorporates:
     *  SignalConversion generated from: '<S28>/VaETQI_M_EngHalfCylCapabilityMinRun_Poke'
     */
    (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMinRun_Value
        (ETQR_ac_B.VaETQI_M_EngHalfCylCapability_i);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S28>/VaETQI_M_EngCapabilityMinRun_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMinRun_VaETQI_M_EngCapabilityMinRun_write_IRV
        (ETQR_ac_B.VaETQI_M_EngCapabilityMinRun_Po);

    /* Merge: '<Root>/Merge_23_Irv' incorporates:
     *  SignalConversion generated from: '<S28>/VaETQI_M_EngHalfCylCapabilityMinRun_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_EngCapabilityMinRun_VaETQI_M_EngHalfCylCapabilityMinRun_write_IRV
        (ETQR_ac_B.VaETQI_M_EngHalfCylCapability_i);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapabilityMinRun' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapacityMax(VAR(float32, AUTOMATIC)
    LeETQR_M_EngCapacityMax, VAR(boolean, AUTOMATIC) LeETQR_b_EngCapacityMaxFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngCapacityMaxFA_o;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapacityMax);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapacityMaxFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapacityMax' */
    /* Chart: '<S29>/PokeETQR_M_EngCapacityMaxChrt' incorporates:
     *  SignalConversion generated from: '<S29>/LeETQR_M_EngCapacityMax'
     *  SignalConversion generated from: '<S29>/LeETQR_b_EngCapacityMaxFA'
     */
    /* Gateway: PokeETQR_M_EngCapacityMax/PokeETQR_M_EngCapacityMaxChrt */
    /* During: PokeETQR_M_EngCapacityMax/PokeETQR_M_EngCapacityMaxChrt */
    /* Entry Internal: PokeETQR_M_EngCapacityMax/PokeETQR_M_EngCapacityMaxChrt */
    /* Transition: '<S356>:2' */
    if (!LeETQR_b_EngCapacityMaxFA)
    {
        /* Transition: '<S356>:3' */
        /* Transition: '<S356>:15' */
        ETQR_ac_B.LeETQR_M_EngCapacityMax_out = LeETQR_M_EngCapacityMax;
        rtb_LeETQR_b_EngCapacityMaxFA_o = false;

        /* Transition: '<S356>:18' */
    }
    else
    {
        /* Transition: '<S356>:4' */
        rtb_LeETQR_b_EngCapacityMaxFA_o = true;
    }

    /* End of Chart: '<S29>/PokeETQR_M_EngCapacityMaxChrt' */

    /* Outport: '<Root>/VeETQR_b_EngCapacityMax_FA' incorporates:
     *  SignalConversion generated from: '<S29>/VeETQR_b_EngCapacityMaxFA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMax_FA_Value
        (rtb_LeETQR_b_EngCapacityMaxFA_o);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S29>/VeETQR_M_EngCapacityMax_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMax_VeETQI_M_EngCapacityMax_write_IRV
        (ETQR_ac_B.LeETQR_M_EngCapacityMax_out);

    /* Merge: '<Root>/Merge_38_Irv' incorporates:
     *  SignalConversion generated from: '<S29>/VeETQR_b_EngCapacityMaxFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMax_VeETQI_b_EngCapacityMax_FA_write_IRV
        (rtb_LeETQR_b_EngCapacityMaxFA_o);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapacityMax' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapacityMinOff(VAR(float32, AUTOMATIC)
    LeETQR_M_EngCapacityMinOff, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngCapacityMinOffFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngCapacityMinOf_g;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapacityMinOff);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapacityMinOffFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapacityMinOff' */
    /* Chart: '<S30>/PokeETQR_M_EngCapacityMinOffChrt' incorporates:
     *  SignalConversion generated from: '<S30>/LeETQR_M_EngCapacityMinOff'
     *  SignalConversion generated from: '<S30>/LeETQR_b_EngCapacityMinOffFA'
     */
    /* Gateway: PokeETQR_M_EngCapacityMinOff/PokeETQR_M_EngCapacityMinOffChrt */
    /* During: PokeETQR_M_EngCapacityMinOff/PokeETQR_M_EngCapacityMinOffChrt */
    /* Entry Internal: PokeETQR_M_EngCapacityMinOff/PokeETQR_M_EngCapacityMinOffChrt */
    /* Transition: '<S357>:2' */
    if (!LeETQR_b_EngCapacityMinOffFA)
    {
        /* Transition: '<S357>:3' */
        /* Transition: '<S357>:15' */
        ETQR_ac_B.LeETQR_M_EngCapacityMinOff_out = LeETQR_M_EngCapacityMinOff;
        rtb_LeETQR_b_EngCapacityMinOf_g = false;

        /* Transition: '<S357>:18' */
    }
    else
    {
        /* Transition: '<S357>:4' */
        rtb_LeETQR_b_EngCapacityMinOf_g = true;
    }

    /* End of Chart: '<S30>/PokeETQR_M_EngCapacityMinOffChrt' */

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinOff_FA' incorporates:
     *  SignalConversion generated from: '<S30>/VeETQR_b_EngCapacityMinOffFA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinOff_FA_Value
        (rtb_LeETQR_b_EngCapacityMinOf_g);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S30>/VeETQR_M_EngCapacityMinOff_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinOff_VeETQI_M_EngCapacityMinOff_write_IRV
        (ETQR_ac_B.LeETQR_M_EngCapacityMinOff_out);

    /* Merge: '<Root>/Merge_42_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeETQR_b_EngCapacityMinOffFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinOff_VeETQI_b_EngCapacityMinOff_FA_write_IRV
        (rtb_LeETQR_b_EngCapacityMinOf_g);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapacityMinOff' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapacityMinRun(VAR(float32, AUTOMATIC)
    LeETQR_M_EngCapacityMinRun, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngCapacityMinRunFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngCapacityMinR_f5;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapacityMinRun);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapacityMinRunFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapacityMinRun' */
    /* Chart: '<S31>/PokeETQR_M_EngCapacityMinRunChrt' incorporates:
     *  SignalConversion generated from: '<S31>/LeETQR_M_EngCapacityMinRun'
     *  SignalConversion generated from: '<S31>/LeETQR_b_EngCapacityMinRunFA'
     */
    /* Gateway: PokeETQR_M_EngCapacityMinRun/PokeETQR_M_EngCapacityMinRunChrt */
    /* During: PokeETQR_M_EngCapacityMinRun/PokeETQR_M_EngCapacityMinRunChrt */
    /* Entry Internal: PokeETQR_M_EngCapacityMinRun/PokeETQR_M_EngCapacityMinRunChrt */
    /* Transition: '<S358>:2' */
    if (!LeETQR_b_EngCapacityMinRunFA)
    {
        /* Transition: '<S358>:3' */
        /* Transition: '<S358>:15' */
        ETQR_ac_B.LeETQR_M_EngCapacityMinRun_out = LeETQR_M_EngCapacityMinRun;
        rtb_LeETQR_b_EngCapacityMinR_f5 = false;

        /* Transition: '<S358>:18' */
    }
    else
    {
        /* Transition: '<S358>:4' */
        rtb_LeETQR_b_EngCapacityMinR_f5 = true;
    }

    /* End of Chart: '<S31>/PokeETQR_M_EngCapacityMinRunChrt' */

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRun_FA' incorporates:
     *  SignalConversion generated from: '<S31>/VeETQR_b_EngCapacityMinRunFA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRun_FA_Value
        (rtb_LeETQR_b_EngCapacityMinR_f5);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S31>/VeETQR_M_EngCapacityMinRun_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinRun_VeETQI_M_EngCapacityMinRun_write_IRV
        (ETQR_ac_B.LeETQR_M_EngCapacityMinRun_out);

    /* Merge: '<Root>/Merge_39_Irv' incorporates:
     *  SignalConversion generated from: '<S31>/VeETQR_b_EngCapacityMinRunFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinRun_VeETQI_b_EngCapacityMinRun_FA_write_IRV
        (rtb_LeETQR_b_EngCapacityMinR_f5);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapacityMinRun' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapacityMinRunImmedNom(VAR(float32,
    AUTOMATIC) LeETQR_M_EngCapacityMinRunImmedNom, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngCapacityMinRunImmedNomFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngCapacityMinRu_b;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapacityMinRunImmedNom);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapacityMinRunImmedNomFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapacityMinRunImmedNom' */
    /* Chart: '<S32>/PokeETQR_M_EngCapacityMinRunImmedNomChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeETQR_M_EngCapacityMinRunImmedNom'
     *  SignalConversion generated from: '<S32>/LeETQR_b_EngCapacityMinRunImmedNomFA'
     */
    /* Gateway: PokeETQR_M_EngCapacityMinRunImmedNom/PokeETQR_M_EngCapacityMinRunImmedNomChrt */
    /* During: PokeETQR_M_EngCapacityMinRunImmedNom/PokeETQR_M_EngCapacityMinRunImmedNomChrt */
    /* Entry Internal: PokeETQR_M_EngCapacityMinRunImmedNom/PokeETQR_M_EngCapacityMinRunImmedNomChrt */
    /* Transition: '<S359>:2' */
    if (!LeETQR_b_EngCapacityMinRunImmedNomFA)
    {
        /* Transition: '<S359>:3' */
        /* Transition: '<S359>:15' */
        ETQR_ac_B.LeETQR_M_EngCapacityMinRunImm_h =
            LeETQR_M_EngCapacityMinRunImmedNom;
        rtb_LeETQR_b_EngCapacityMinRu_b = false;

        /* Transition: '<S359>:18' */
    }
    else
    {
        /* Transition: '<S359>:4' */
        rtb_LeETQR_b_EngCapacityMinRu_b = true;
    }

    /* End of Chart: '<S32>/PokeETQR_M_EngCapacityMinRunImmedNomChrt' */

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S32>/VeETQR_M_EngCapacityMinRunImmedNom_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinRunImmedNom_VeETQI_M_EngCapacityMinRunImmedNom_write_IRV
        (ETQR_ac_B.LeETQR_M_EngCapacityMinRunImm_h);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S32>/VeETQR_b_EngCapacityMinRunImmedNomFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinRunImmedNom_VeETQI_b_EngCapacityMinRunImmedNom_FA_write_IRV
        (rtb_LeETQR_b_EngCapacityMinRu_b);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapacityMinRunImmedNom' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngCapacityMinRunImmedRed(VAR(float32,
    AUTOMATIC) LeETQR_M_EngCapacityMinRunImmedRed, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngCapacityMinRunImmedRedFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngCapacityMinRu_o;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngCapacityMinRunImmedRed);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapacityMinRunImmedRedFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngCapacityMinRunImmedRed' */
    /* Chart: '<S33>/PokeETQR_M_EngCapacityMinRunImmedRedChrt' incorporates:
     *  SignalConversion generated from: '<S33>/LeETQR_M_EngCapacityMinRunImmedRed'
     *  SignalConversion generated from: '<S33>/LeETQR_b_EngCapacityMinRunImmedRedFA'
     */
    /* Gateway: PokeETQR_M_EngCapacityMinRunImmedRed/PokeETQR_M_EngCapacityMinRunImmedRedChrt */
    /* During: PokeETQR_M_EngCapacityMinRunImmedRed/PokeETQR_M_EngCapacityMinRunImmedRedChrt */
    /* Entry Internal: PokeETQR_M_EngCapacityMinRunImmedRed/PokeETQR_M_EngCapacityMinRunImmedRedChrt */
    /* Transition: '<S360>:2' */
    if (!LeETQR_b_EngCapacityMinRunImmedRedFA)
    {
        /* Transition: '<S360>:3' */
        /* Transition: '<S360>:15' */
        ETQR_ac_B.LeETQR_M_EngCapacityMinRunImmed =
            LeETQR_M_EngCapacityMinRunImmedRed;
        rtb_LeETQR_b_EngCapacityMinRu_o = false;

        /* Transition: '<S360>:18' */
    }
    else
    {
        /* Transition: '<S360>:4' */
        rtb_LeETQR_b_EngCapacityMinRu_o = true;
    }

    /* End of Chart: '<S33>/PokeETQR_M_EngCapacityMinRunImmedRedChrt' */

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRed_FA' incorporates:
     *  SignalConversion generated from: '<S33>/VeETQR_b_EngCapacityMinRunImmedRedFA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRed_FA_Value
        (rtb_LeETQR_b_EngCapacityMinRu_o);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S33>/VeETQR_M_EngCapacityMinRunImmedRed_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinRunImmedRed_VeETQI_M_EngCapacityMinRunImmed_write_IRV
        (ETQR_ac_B.LeETQR_M_EngCapacityMinRunImmed);

    /* Merge: '<Root>/Merge_40_Irv' incorporates:
     *  SignalConversion generated from: '<S33>/VeETQR_b_EngCapacityMinRunImmedRedFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngCapacityMinRunImmedRed_VeETQI_b_EngCapacityMinRunImmed_FA_write_IRV
        (rtb_LeETQR_b_EngCapacityMinRu_o);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngCapacityMinRunImmedRed' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngTorqACC4Capability(VAR(float32, AUTOMATIC)
    LeETQR_M_EngTorqACC4Capability, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngTorqACC4CapabilityFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngTorqACC4Capab_n;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngTorqACC4Capability);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngTorqACC4CapabilityFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngTorqACC4Capability' */
    /* Chart: '<S34>/PokeETQR_M_EngTorqACC4CapabilityChrt' incorporates:
     *  SignalConversion generated from: '<S34>/LeETQR_M_EngTorqACC4Capability'
     *  SignalConversion generated from: '<S34>/LeETQR_b_EngTorqACC4CapabilityFA'
     */
    /* Gateway: PokeETQR_M_EngTorqACC4Capability/PokeETQR_M_EngTorqACC4CapabilityChrt */
    /* During: PokeETQR_M_EngTorqACC4Capability/PokeETQR_M_EngTorqACC4CapabilityChrt */
    /* Entry Internal: PokeETQR_M_EngTorqACC4Capability/PokeETQR_M_EngTorqACC4CapabilityChrt */
    /* Transition: '<S361>:2' */
    if (!LeETQR_b_EngTorqACC4CapabilityFA)
    {
        /* Transition: '<S361>:3' */
        /* Transition: '<S361>:15' */
        ETQR_ac_B.LeETQR_M_EngTorqACC4Capability_ =
            LeETQR_M_EngTorqACC4Capability;
        rtb_LeETQR_b_EngTorqACC4Capab_n = false;

        /* Transition: '<S361>:18' */
    }
    else
    {
        /* Transition: '<S361>:4' */
        rtb_LeETQR_b_EngTorqACC4Capab_n = true;
    }

    /* End of Chart: '<S34>/PokeETQR_M_EngTorqACC4CapabilityChrt' */

    /* Outport: '<Root>/VeETQR_M_EngTorqACC4Capability' incorporates:
     *  SignalConversion generated from: '<S34>/VeETQR_M_EngTorqACC4Capability'
     */
    (void)Rte_Write_VeETQR_M_EngTorqACC4Capability_Value
        (ETQR_ac_B.LeETQR_M_EngTorqACC4Capability_);

    /* Outport: '<Root>/VeETQR_b_EngTorqACC4Capability_FA' incorporates:
     *  SignalConversion generated from: '<S34>/VeETQR_b_EngTorqACC4CapabilityFA'
     */
    (void)Rte_Write_VeETQR_b_EngTorqACC4Capability_FA_Value
        (rtb_LeETQR_b_EngTorqACC4Capab_n);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngTorqACC4Capability' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngTorque(VAR(float32, AUTOMATIC)
    LeETQR_M_EngTorque, VAR(boolean, AUTOMATIC) LeETQR_b_EngTorqueFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngTorqueFA_out;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngTorque);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngTorqueFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngTorque' */
    /* Chart: '<S35>/PokeETQR_M_EngTorqueChrt' incorporates:
     *  SignalConversion generated from: '<S35>/LeETQR_M_EngTorque'
     *  SignalConversion generated from: '<S35>/LeETQR_b_EngTorqueFA'
     */
    /* Gateway: PokeETQR_M_EngTorque/PokeETQR_M_EngTorqueChrt */
    /* During: PokeETQR_M_EngTorque/PokeETQR_M_EngTorqueChrt */
    /* Entry Internal: PokeETQR_M_EngTorque/PokeETQR_M_EngTorqueChrt */
    /* Transition: '<S362>:2' */
    if (!LeETQR_b_EngTorqueFA)
    {
        /* Transition: '<S362>:3' */
        /* Transition: '<S362>:15' */
        ETQR_ac_B.LeETQR_M_EngTorque_out = LeETQR_M_EngTorque;
        rtb_LeETQR_b_EngTorqueFA_out = false;

        /* Transition: '<S362>:18' */
    }
    else
    {
        /* Transition: '<S362>:4' */
        rtb_LeETQR_b_EngTorqueFA_out = true;
    }

    /* End of Chart: '<S35>/PokeETQR_M_EngTorqueChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S35>/VeETQR_M_EngTorque_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTorque_VeETQI_M_EngTorque_write_IRV
        (ETQR_ac_B.LeETQR_M_EngTorque_out);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S35>/VeETQR_b_EngTorqueFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTorque_VeETQI_b_EngTorque_FA_write_IRV
        (rtb_LeETQR_b_EngTorqueFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngTorque' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngTrqActual(VAR(float32, AUTOMATIC)
    LeETQR_M_EngTrqActual, VAR(boolean, AUTOMATIC) LeETQR_b_EngTrqActualFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngTrqActualFA_o_a;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngTrqActual);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngTrqActualFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngTrqActual' */
    /* Chart: '<S36>/PokeETQR_M_EngTrqActualChrt' incorporates:
     *  SignalConversion generated from: '<S36>/LeETQR_M_EngTrqActual'
     *  SignalConversion generated from: '<S36>/LeETQR_b_EngTrqActualFA'
     */
    /* Gateway: PokeETQR_M_EngTrqActual/PokeETQR_M_EngTrqActualChrt */
    /* During: PokeETQR_M_EngTrqActual/PokeETQR_M_EngTrqActualChrt */
    /* Entry Internal: PokeETQR_M_EngTrqActual/PokeETQR_M_EngTrqActualChrt */
    /* Transition: '<S363>:2' */
    if (!LeETQR_b_EngTrqActualFA)
    {
        /* Transition: '<S363>:3' */
        /* Transition: '<S363>:15' */
        ETQR_ac_B.LeETQR_M_EngTrqActual_out = LeETQR_M_EngTrqActual;
        rtb_LeETQR_b_EngTrqActualFA_o_a = false;

        /* Transition: '<S363>:18' */
    }
    else
    {
        /* Transition: '<S363>:4' */
        rtb_LeETQR_b_EngTrqActualFA_o_a = true;
    }

    /* End of Chart: '<S36>/PokeETQR_M_EngTrqActualChrt' */

    /* Outport: '<Root>/VeETQR_b_EngTrqActual_FA' incorporates:
     *  SignalConversion generated from: '<S36>/VeETQR_b_EngTrqActualFA'
     */
    (void)Rte_Write_VeETQR_b_EngTrqActual_FA_Value
        (rtb_LeETQR_b_EngTrqActualFA_o_a);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S36>/VeETQR_M_EngTrqActual_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTrqActual_VeETQI_M_EngTrqActual_write_IRV
        (ETQR_ac_B.LeETQR_M_EngTrqActual_out);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S36>/VeETQR_b_EngTrqActualFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTrqActual_VeETQI_b_EngTrqActual_FA_write_IRV
        (rtb_LeETQR_b_EngTrqActualFA_o_a);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngTrqActual' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngTrqAirflow(VAR(float32, AUTOMATIC)
    LeETQR_M_EngTrqAirflow, VAR(boolean, AUTOMATIC) LeETQR_b_EngTrqAirflowFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngTrqAirflowFA__b;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngTrqAirflow);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngTrqAirflowFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngTrqAirflow' */
    /* Chart: '<S37>/PokeETQR_M_EngTrqAirflowChrt' incorporates:
     *  SignalConversion generated from: '<S37>/LeETQR_M_EngTrqAirflow'
     *  SignalConversion generated from: '<S37>/LeETQR_b_EngTrqAirflowFA'
     */
    /* Gateway: PokeETQR_M_EngTrqAirflow/PokeETQR_M_EngTrqAirflowChrt */
    /* During: PokeETQR_M_EngTrqAirflow/PokeETQR_M_EngTrqAirflowChrt */
    /* Entry Internal: PokeETQR_M_EngTrqAirflow/PokeETQR_M_EngTrqAirflowChrt */
    /* Transition: '<S364>:2' */
    if (!LeETQR_b_EngTrqAirflowFA)
    {
        /* Transition: '<S364>:3' */
        /* Transition: '<S364>:15' */
        ETQR_ac_B.LeETQR_M_EngTrqAirflow_out = LeETQR_M_EngTrqAirflow;
        rtb_LeETQR_b_EngTrqAirflowFA__b = false;

        /* Transition: '<S364>:18' */
    }
    else
    {
        /* Transition: '<S364>:4' */
        rtb_LeETQR_b_EngTrqAirflowFA__b = true;
    }

    /* End of Chart: '<S37>/PokeETQR_M_EngTrqAirflowChrt' */

    /* Outport: '<Root>/VeETQR_b_EngTrqAirflow_FA' incorporates:
     *  SignalConversion generated from: '<S37>/VeETQR_b_EngTrqAirflowFA'
     */
    (void)Rte_Write_VeETQR_b_EngTrqAirflow_FA_Value
        (rtb_LeETQR_b_EngTrqAirflowFA__b);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S37>/VeETQR_M_EngTrqAirflow_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTrqAirflow_VeETQI_M_EngTrqAirflow_write_IRV
        (ETQR_ac_B.LeETQR_M_EngTrqAirflow_out);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S37>/VeETQR_b_EngTrqAirflowFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTrqAirflow_VeETQI_b_EngTrqAirflow_FA_write_IRV
        (rtb_LeETQR_b_EngTrqAirflowFA__b);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngTrqAirflow' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngTrqFSO_CurrAir(VAR(float32, AUTOMATIC)
    LeETQR_M_EngTrqFSO_CurrAir, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngTrqFSO_CurrAirFA)
{

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngTrqFSO_CurrAir);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngTrqFSO_CurrAirFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngTrqFSO_CurrAir' */
    /* Chart: '<S38>/PokeETQR_M_EngTrqFSO_CurrAirChrt' incorporates:
     *  SignalConversion generated from: '<S38>/LeETQR_b_EngCapacityMinRunImmedRedAvailFA'
     *  SignalConversion generated from: '<S38>/LeETQR_b_EngCapacityMinRunImmedRedAvail'
     */
    /* Gateway: PokeETQR_M_EngTrqFSO_CurrAir/PokeETQR_M_EngTrqFSO_CurrAirChrt */
    /* During: PokeETQR_M_EngTrqFSO_CurrAir/PokeETQR_M_EngTrqFSO_CurrAirChrt */
    /* Entry Internal: PokeETQR_M_EngTrqFSO_CurrAir/PokeETQR_M_EngTrqFSO_CurrAirChrt */
    /* Transition: '<S365>:2' */
    if (!LeETQR_b_EngTrqFSO_CurrAirFA)
    {
        /* Transition: '<S365>:3' */
        /* Transition: '<S365>:15' */
        ETQR_ac_B.LeETQR_M_EngTrqFSO_CurrAir_out = LeETQR_M_EngTrqFSO_CurrAir;

        /* Transition: '<S365>:18' */
    }
    else
    {
        /* Transition: '<S365>:4' */
    }

    /* End of Chart: '<S38>/PokeETQR_M_EngTrqFSO_CurrAirChrt' */

    /* Outport: '<Root>/VeETQR_M_EngTrqFSO_CurrAir' incorporates:
     *  SignalConversion generated from: '<S38>/VeETQR_M_EngTrqFSO_CurrAir'
     */
    (void)Rte_Write_VeETQR_M_EngTrqFSO_CurrAir_Value
        (ETQR_ac_B.LeETQR_M_EngTrqFSO_CurrAir_out);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngTrqFSO_CurrAir' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngTrqReserveReq(VAR(float32, AUTOMATIC)
    LeETQR_M_EngTrqReserveReq, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngTrqReserveReqFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngTrqReserveRe_iw;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngTrqReserveReq);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngTrqReserveReqFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngTrqReserveReq' */
    /* Chart: '<S39>/PokeETQR_M_EngTrqReserveReqChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeETQR_M_EngTrqReserveReq'
     *  SignalConversion generated from: '<S39>/LeETQR_b_EngTrqReserveReqFA'
     */
    /* Gateway: PokeETQR_M_EngTrqReserveReq/PokeETQR_M_EngTrqReserveReqChrt */
    /* During: PokeETQR_M_EngTrqReserveReq/PokeETQR_M_EngTrqReserveReqChrt */
    /* Entry Internal: PokeETQR_M_EngTrqReserveReq/PokeETQR_M_EngTrqReserveReqChrt */
    /* Transition: '<S366>:2' */
    if (!LeETQR_b_EngTrqReserveReqFA)
    {
        /* Transition: '<S366>:3' */
        /* Transition: '<S366>:15' */
        ETQR_ac_B.LeETQR_M_EngTrqReserveReq_out = LeETQR_M_EngTrqReserveReq;
        rtb_LeETQR_b_EngTrqReserveRe_iw = false;

        /* Transition: '<S366>:18' */
    }
    else
    {
        /* Transition: '<S366>:4' */
        rtb_LeETQR_b_EngTrqReserveRe_iw = true;
    }

    /* End of Chart: '<S39>/PokeETQR_M_EngTrqReserveReqChrt' */

    /* Outport: '<Root>/VeETQR_M_EngTrqReserveReq' incorporates:
     *  SignalConversion generated from: '<S39>/VeETQR_M_EngTrqReserveReq'
     */
    (void)Rte_Write_VeETQR_M_EngTrqReserveReq_Value
        (ETQR_ac_B.LeETQR_M_EngTrqReserveReq_out);

    /* Outport: '<Root>/VeETQR_b_EngTrqReserveReq_FA' incorporates:
     *  SignalConversion generated from: '<S39>/VeETQR_b_EngTrqReserveReqFA'
     */
    (void)Rte_Write_VeETQR_b_EngTrqReserveReq_FA_Value
        (rtb_LeETQR_b_EngTrqReserveRe_iw);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngTrqReserveReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_EngTrqStaticSEM(VAR(float32, AUTOMATIC)
    LeETQR_M_EngTrqStaticSEM, VAR(boolean, AUTOMATIC) LeETQR_b_EngTrqStaticSEMFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngTrqStaticSEMF_n;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_EngTrqStaticSEM);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngTrqStaticSEMFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_EngTrqStaticSEM' */
    /* Chart: '<S40>/PokeETQR_M_EngTrqStaticSEMChrt' incorporates:
     *  SignalConversion generated from: '<S40>/LeETQR_M_EngTrqStaticSEM'
     *  SignalConversion generated from: '<S40>/LeETQR_b_EngTrqStaticSEMFA'
     */
    /* Gateway: PokeETQR_M_EngTrqStaticSEM/PokeETQR_M_EngTrqStaticSEMChrt */
    /* During: PokeETQR_M_EngTrqStaticSEM/PokeETQR_M_EngTrqStaticSEMChrt */
    /* Entry Internal: PokeETQR_M_EngTrqStaticSEM/PokeETQR_M_EngTrqStaticSEMChrt */
    /* Transition: '<S367>:2' */
    if (!LeETQR_b_EngTrqStaticSEMFA)
    {
        /* Transition: '<S367>:3' */
        /* Transition: '<S367>:15' */
        ETQR_ac_B.LeETQR_M_EngTrqStaticSEM_out = LeETQR_M_EngTrqStaticSEM;
        rtb_LeETQR_b_EngTrqStaticSEMF_n = false;

        /* Transition: '<S367>:18' */
    }
    else
    {
        /* Transition: '<S367>:4' */
        rtb_LeETQR_b_EngTrqStaticSEMF_n = true;
    }

    /* End of Chart: '<S40>/PokeETQR_M_EngTrqStaticSEMChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S40>/VeETQR_M_EngTrqStaticSEM_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTrqStaticSEM_VeETQI_M_EngTrqStaticSEM_write_IRV
        (ETQR_ac_B.LeETQR_M_EngTrqStaticSEM_out);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S40>/VeETQR_b_EngTrqStaticSEMFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_EngTrqStaticSEM_VeETQI_b_EngTrqStaticSEM_FA_write_IRV
        (rtb_LeETQR_b_EngTrqStaticSEMF_n);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_EngTrqStaticSEM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_MinAirFlowMinSparkCapacity(VAR(float32,
    AUTOMATIC) LeETQR_M_MinAirFlowMinSparkCapacity, VAR(boolean, AUTOMATIC)
    LeETQR_b_MinAirFlowMinSparkCapacityFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_MinAirFlowMinSpa_a;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_MinAirFlowMinSparkCapacity);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_MinAirFlowMinSparkCapacityFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_MinAirFlowMinSparkCapacity' */
    /* Chart: '<S41>/PokeETQR_M_MinAirFlowMinSparkCapacityChrt' incorporates:
     *  SignalConversion generated from: '<S41>/LeETQR_M_MinAirFlowMinSparkCapacity'
     *  SignalConversion generated from: '<S41>/LeETQR_b_MinAirFlowMinSparkCapacityFA'
     */
    /* Gateway: PokeETQR_M_MinAirFlowMinSparkCapacity/PokeETQR_M_MinAirFlowMinSparkCapacityChrt */
    /* During: PokeETQR_M_MinAirFlowMinSparkCapacity/PokeETQR_M_MinAirFlowMinSparkCapacityChrt */
    /* Entry Internal: PokeETQR_M_MinAirFlowMinSparkCapacity/PokeETQR_M_MinAirFlowMinSparkCapacityChrt */
    /* Transition: '<S368>:2' */
    if (!LeETQR_b_MinAirFlowMinSparkCapacityFA)
    {
        /* Transition: '<S368>:3' */
        /* Transition: '<S368>:15' */
        ETQR_ac_B.LeETQR_M_MinAirFlowMinSparkCapa =
            LeETQR_M_MinAirFlowMinSparkCapacity;
        rtb_LeETQR_b_MinAirFlowMinSpa_a = false;

        /* Transition: '<S368>:18' */
    }
    else
    {
        /* Transition: '<S368>:4' */
        rtb_LeETQR_b_MinAirFlowMinSpa_a = true;
    }

    /* End of Chart: '<S41>/PokeETQR_M_MinAirFlowMinSparkCapacityChrt' */

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S41>/VeETQR_M_MinAirFlowMinSparkCapacity_write'
     * */
    Rte_IrvWrite_PokeETQR_M_MinAirFlowMinSparkCapacity_VeETQI_M_MinAirFlowMinSparkCapacity_write_IRV
        (ETQR_ac_B.LeETQR_M_MinAirFlowMinSparkCapa);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S41>/VeETQR_b_MinAirFlowMinSparkCapacityFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_MinAirFlowMinSparkCapacity_VeETQI_b_MinAirFlowMinSparkCapacity_FA_write_IRV
        (rtb_LeETQR_b_MinAirFlowMinSpa_a);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_MinAirFlowMinSparkCapacity' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_MinDragCapability(VAR(float32, AUTOMATIC)
    LeETQR_M_MinDragCapability, VAR(sint16, AUTOMATIC)
    LeETQR_Cnt_CapabilityFrame, VAR(boolean, AUTOMATIC) LeETQR_b_EngOpMode, VAR
    (boolean, AUTOMATIC) LeETQR_b_MinDragCapabilityFA)
{

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_MinDragCapability);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_Cnt_CapabilityFrame);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngOpMode);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_MinDragCapabilityFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_MinDragCapability' */
    /* Chart: '<S42>/PokeETQR_M_MinDragCapabilityChrt' incorporates:
     *  SignalConversion generated from: '<S42>/LeETQR_Cnt_CapabilityFrame'
     *  SignalConversion generated from: '<S42>/LeETQR_M_MinDragCapability'
     *  SignalConversion generated from: '<S42>/LeETQR_b_EngOpMode'
     *  SignalConversion generated from: '<S42>/LeETQR_b_MinDragCapabilityFA'
     */
    /* Gateway: PokeETQR_M_MinDragCapability/PokeETQR_M_MinDragCapabilityChrt */
    /* During: PokeETQR_M_MinDragCapability/PokeETQR_M_MinDragCapabilityChrt */
    /* Entry Internal: PokeETQR_M_MinDragCapability/PokeETQR_M_MinDragCapabilityChrt */
    /* Transition: '<S369>:2' */
    if (!LeETQR_b_MinDragCapabilityFA)
    {
        /* Transition: '<S369>:48' */
        if (!LeETQR_b_EngOpMode)
        {
            /* Transition: '<S369>:32' */
            /* Transition: '<S369>:60' */
            ETQR_ac_B.VaETQI_M_MinDragCapability_Poke[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_MinDragCapability;

            /* Transition: '<S369>:61' */
        }
        else
        {
            /* Transition: '<S369>:33' */
            ETQR_ac_B.VaETQI_M_HalfCylMinDragCapabi_a[LeETQR_Cnt_CapabilityFrame]
                = LeETQR_M_MinDragCapability;
        }

        /* Transition: '<S369>:62' */
    }
    else
    {
        /* Transition: '<S369>:49' */
    }

    /* End of Chart: '<S42>/PokeETQR_M_MinDragCapabilityChrt' */

    /* Outport: '<Root>/VaETQR_M_HalfCylMinDragCapability' incorporates:
     *  SignalConversion generated from: '<S42>/VaETQI_M_HalfCylMinDragCapability_Poke'
     */
    (void)Rte_Write_VaETQR_M_HalfCylMinDragCapability_Value
        (ETQR_ac_B.VaETQI_M_HalfCylMinDragCapabi_a);

    /* Outport: '<Root>/VaETQR_M_MinDragCapability' incorporates:
     *  SignalConversion generated from: '<S42>/VaETQI_M_MinDragCapability_Poke'
     */
    (void)Rte_Write_VaETQR_M_MinDragCapability_Value
        (ETQR_ac_B.VaETQI_M_MinDragCapability_Poke);

    /* Merge: '<Root>/Merge_28_Irv' incorporates:
     *  SignalConversion generated from: '<S42>/VaETQI_M_HalfCylMinDragCapability_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_MinDragCapability_VaETQI_M_HalfCylMinDragCapability_write_IRV
        (ETQR_ac_B.VaETQI_M_HalfCylMinDragCapabi_a);

    /* Merge: '<Root>/Merge_27_Irv' incorporates:
     *  SignalConversion generated from: '<S42>/VaETQI_M_MinDragCapability_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_M_MinDragCapability_VaETQI_M_MinDragCapability_write_IRV
        (ETQR_ac_B.VaETQI_M_MinDragCapability_Poke);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_MinDragCapability' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_MinDragCapacity(VAR(float32, AUTOMATIC)
    LeETQR_M_MinDragCapacity, VAR(boolean, AUTOMATIC) LeETQR_b_MinDragCapacityFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_MinDragCapacityF_a;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_MinDragCapacity);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_MinDragCapacityFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_MinDragCapacity' */
    /* Chart: '<S43>/PokeETQR_M_MinDragCapacityChrt' incorporates:
     *  SignalConversion generated from: '<S43>/LeETQR_M_MinDragCapacity'
     *  SignalConversion generated from: '<S43>/LeETQR_b_MinDragCapacityFA'
     */
    /* Gateway: PokeETQR_M_MinDragCapacity/PokeETQR_M_MinDragCapacityChrt */
    /* During: PokeETQR_M_MinDragCapacity/PokeETQR_M_MinDragCapacityChrt */
    /* Entry Internal: PokeETQR_M_MinDragCapacity/PokeETQR_M_MinDragCapacityChrt */
    /* Transition: '<S370>:2' */
    if (!LeETQR_b_MinDragCapacityFA)
    {
        /* Transition: '<S370>:3' */
        /* Transition: '<S370>:15' */
        ETQR_ac_B.LeETQR_M_MinDragCapacity_out = LeETQR_M_MinDragCapacity;
        rtb_LeETQR_b_MinDragCapacityF_a = false;

        /* Transition: '<S370>:18' */
    }
    else
    {
        /* Transition: '<S370>:4' */
        rtb_LeETQR_b_MinDragCapacityF_a = true;
    }

    /* End of Chart: '<S43>/PokeETQR_M_MinDragCapacityChrt' */

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S43>/VeETQR_M_MinDragCapacity_write'
     * */
    Rte_IrvWrite_PokeETQR_M_MinDragCapacity_VeETQI_M_MinDragCapacity_write_IRV
        (ETQR_ac_B.LeETQR_M_MinDragCapacity_out);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S43>/VeETQR_b_MinDragCapacityFA_write'
     * */
    Rte_IrvWrite_PokeETQR_M_MinDragCapacity_VeETQI_b_MinDragCapacity_FA_write_IRV
        (rtb_LeETQR_b_MinDragCapacityF_a);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_MinDragCapacity' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_M_PnLimitMaxEngTrqCap(VAR(float32, AUTOMATIC)
    LeETQR_M_PnLimitMaxEngTrqCap, VAR(boolean, AUTOMATIC)
    LeETQR_b_PnLimitMaxEngTrqCapFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_PnLimitMaxEngTrq_g;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_M_PnLimitMaxEngTrqCap);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_PnLimitMaxEngTrqCapFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_M_PnLimitMaxEngTrqCap' */
    /* Chart: '<S44>/PokeETQR_M_PnLimitMaxEngTrqCapChrt' incorporates:
     *  SignalConversion generated from: '<S44>/LeETQR_M_PnLimitMaxEngTrqCap'
     *  SignalConversion generated from: '<S44>/LeETQR_b_PnLimitMaxEngTrqCapFA'
     */
    /* Gateway: PokeETQR_M_PnLimitMaxEngTrqCap/PokeETQR_M_PnLimitMaxEngTrqCapChrt */
    /* During: PokeETQR_M_PnLimitMaxEngTrqCap/PokeETQR_M_PnLimitMaxEngTrqCapChrt */
    /* Entry Internal: PokeETQR_M_PnLimitMaxEngTrqCap/PokeETQR_M_PnLimitMaxEngTrqCapChrt */
    /* Transition: '<S371>:2' */
    if (!LeETQR_b_PnLimitMaxEngTrqCapFA)
    {
        /* Transition: '<S371>:3' */
        /* Transition: '<S371>:15' */
        ETQR_ac_B.LeETQR_M_PnLimitMaxEngTrqCap_ou = LeETQR_M_PnLimitMaxEngTrqCap;
        rtb_LeETQR_b_PnLimitMaxEngTrq_g = false;

        /* Transition: '<S371>:18' */
    }
    else
    {
        /* Transition: '<S371>:4' */
        rtb_LeETQR_b_PnLimitMaxEngTrq_g = true;
    }

    /* End of Chart: '<S44>/PokeETQR_M_PnLimitMaxEngTrqCapChrt' */

    /* Outport: '<Root>/VeETQR_M_PnLimitMaxEngTrqCap' incorporates:
     *  SignalConversion generated from: '<S44>/VeETQR_M_PnLimitMaxEngTrqCap'
     */
    (void)Rte_Write_VeETQR_M_PnLimitMaxEngTrqCap_Value
        (ETQR_ac_B.LeETQR_M_PnLimitMaxEngTrqCap_ou);

    /* Outport: '<Root>/VeETQR_b_PnLimitMaxEngTrqCap_FA' incorporates:
     *  SignalConversion generated from: '<S44>/VeETQR_b_PnLimitMaxEngTrqCapFA'
     */
    (void)Rte_Write_VeETQR_b_PnLimitMaxEngTrqCap_FA_Value
        (rtb_LeETQR_b_PnLimitMaxEngTrq_g);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_M_PnLimitMaxEngTrqCap' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_b_EngCapacityMinRunImmedRedAvail(VAR(boolean,
    AUTOMATIC) LeETQR_b_EngCapacityMinRunImmedRedAvail, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngCapacityMinRunImmedRedAvailFA)
{

#if Rte_SysCon_Variant_ETQR_1

    boolean rtb_LeETQR_b_EngCapacityMinRu_m;

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapacityMinRunImmedRedAvail);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngCapacityMinRunImmedRedAvailFA);

#endif

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_b_EngCapacityMinRunImmedRedAvail' */
    /* Chart: '<S45>/PokeETQR_b_EngCapacityMinRunImmedRedAvailChrt' incorporates:
     *  SignalConversion generated from: '<S45>/LeETQR_b_EngCapacityMinRunImmedRedAvailFA'
     *  SignalConversion generated from: '<S45>/LeETQR_b_EngCapacityMinRunImmedRedAvail'
     */
    /* Gateway: PokeETQR_b_EngCapacityMinRunImmedRedAvail/PokeETQR_b_EngCapacityMinRunImmedRedAvailChrt */
    /* During: PokeETQR_b_EngCapacityMinRunImmedRedAvail/PokeETQR_b_EngCapacityMinRunImmedRedAvailChrt */
    /* Entry Internal: PokeETQR_b_EngCapacityMinRunImmedRedAvail/PokeETQR_b_EngCapacityMinRunImmedRedAvailChrt */
    /* Transition: '<S372>:2' */
    if (!LeETQR_b_EngCapacityMinRunImmedRedAvailFA)
    {
        /* Transition: '<S372>:3' */
        /* Transition: '<S372>:15' */
        ETQR_ac_B.LeETQR_b_EngCapacityMinRunImmed =
            LeETQR_b_EngCapacityMinRunImmedRedAvail;
        rtb_LeETQR_b_EngCapacityMinRu_m = false;

        /* Transition: '<S372>:18' */
    }
    else
    {
        /* Transition: '<S372>:4' */
        rtb_LeETQR_b_EngCapacityMinRu_m = true;
    }

    /* End of Chart: '<S45>/PokeETQR_b_EngCapacityMinRunImmedRedAvailChrt' */

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRedAvail' incorporates:
     *  SignalConversion generated from: '<S45>/VeETQR_b_EngCapacityMinRunImmedRedAvail'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRedAvail_Value
        (ETQR_ac_B.LeETQR_b_EngCapacityMinRunImmed);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRedAvail_FA' incorporates:
     *  SignalConversion generated from: '<S45>/VeETQR_b_EngCapacityMinRunImmedRedAvailFA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRedAvail_FA_Value
        (rtb_LeETQR_b_EngCapacityMinRu_m);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_b_EngCapacityMinRunImmedRedAvail' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ETQR_1

FUNC(void, ETQR_CODE) PokeETQR_n_EngCapability(VAR(float32, AUTOMATIC)
    LeETQR_n_EngCapability, VAR(sint16, AUTOMATIC) LeETQR_Cnt_CapabilityFrame,
    VAR(boolean, AUTOMATIC) LeETQR_b_EngOpMode, VAR(boolean, AUTOMATIC)
    LeETQR_b_EngCapabilityFA)
{

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_n_EngCapability);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_Cnt_CapabilityFrame);

#endif

#if !Rte_SysCon_Variant_ETQR_1

    UNUSED_PARAMETER(LeETQR_b_EngOpMode);

#endif

    UNUSED_PARAMETER(LeETQR_b_EngCapabilityFA);

#if Rte_SysCon_Variant_ETQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeETQR_n_EngCapability' */
    /* Chart: '<S46>/PokeETQR_n_EngCapabilityChrt' incorporates:
     *  SignalConversion generated from: '<S46>/LeETQR_Cnt_CapabilityFrame'
     *  SignalConversion generated from: '<S46>/LeETQR_b_EngOpMode'
     *  SignalConversion generated from: '<S46>/LeETQR_n_EngCapability'
     */
    /* Gateway: PokeETQR_n_EngCapability/PokeETQR_n_EngCapabilityChrt */
    /* During: PokeETQR_n_EngCapability/PokeETQR_n_EngCapabilityChrt */
    /* Entry Internal: PokeETQR_n_EngCapability/PokeETQR_n_EngCapabilityChrt */
    /* Transition: '<S373>:2' */
    if (!LeETQR_b_EngOpMode)
    {
        /* Transition: '<S373>:32' */
        /* Transition: '<S373>:57' */
        ETQR_ac_B.VaETQI_n_EngCapability_Poke[LeETQR_Cnt_CapabilityFrame] =
            LeETQR_n_EngCapability;

        /* Transition: '<S373>:58' */
    }
    else
    {
        /* Transition: '<S373>:33' */
        ETQR_ac_B.VaETQI_n_EngHalfCylCapability_P[LeETQR_Cnt_CapabilityFrame] =
            LeETQR_n_EngCapability;
    }

    /* End of Chart: '<S46>/PokeETQR_n_EngCapabilityChrt' */

    /* Outport: '<Root>/VaETQR_n_EngCapability' incorporates:
     *  SignalConversion generated from: '<S46>/VaETQI_n_EngCapability_Poke'
     */
    (void)Rte_Write_VaETQR_n_EngCapability_Value
        (ETQR_ac_B.VaETQI_n_EngCapability_Poke);

    /* Outport: '<Root>/VaETQR_n_EngHalfCylCapability' incorporates:
     *  SignalConversion generated from: '<S46>/VaETQI_n_EngHalfCylCapability_Poke'
     */
    (void)Rte_Write_VaETQR_n_EngHalfCylCapability_Value
        (ETQR_ac_B.VaETQI_n_EngHalfCylCapability_P);

    /* Merge: '<Root>/Merge_25_Irv' incorporates:
     *  SignalConversion generated from: '<S46>/VaETQI_n_EngCapability_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_n_EngCapability_VaETQI_n_EngCapability_write_IRV
        (ETQR_ac_B.VaETQI_n_EngCapability_Poke);

    /* Merge: '<Root>/Merge_26_Irv' incorporates:
     *  SignalConversion generated from: '<S46>/VaETQI_n_EngHalfCylCapability_Poke_write'
     */
    Rte_IrvWrite_PokeETQR_n_EngCapability_VaETQI_n_EngHalfCylCapability_write_IRV
        (ETQR_ac_B.VaETQI_n_EngHalfCylCapability_P);

    /* End of Outputs for SubSystem: '<Root>/PokeETQR_n_EngCapability' */
#endif

}

#endif

/* Output function */
FUNC(void, ETQR_CODE) ETQR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ETQR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init ETQI Output'
     */
    /* SignalConversion generated from: '<S299>/VeETQI_Cnt_CapabilityFrame_Max' */
    ETQR_ac_B.OutportBufferForVeETQI_Cnt_Capa = 0.0F;

    /* SignalConversion generated from: '<S299>/VeETQI_Cnt_CapabilityFrame_HalfCylMax' */
    ETQR_ac_B.OutportBufferForVeETQI_Cnt_Ca_f = 0.0F;

    /* SignalConversion generated from: '<S299>/VeETQI_Cnt_CapabilityFrame_Min' */
    ETQR_ac_B.OutportBufferForVeETQI_Cnt_Ca_b = 0.0F;

    /* SignalConversion generated from: '<S299>/VeETQI_Cnt_CapabilityFrame_HalfCylMin' */
    ETQR_ac_B.OutportBufferForVeETQI_Cnt_Ca_k = 0.0F;

    /* SignalConversion generated from: '<S299>/VeETQR_M_PnLimitMaxEngTrqCap' incorporates:
     *  Constant: '<S331>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_PnLimi =
        KeETQR_M_PnLimitMaxEngTrqCap_Dflt;

    /* SignalConversion generated from: '<S299>/VeETQR_b_PnLimitMaxEngTrqCap_FA' */
    ETQR_ac_B.OutportBufferForVeETQR_b_PnLimi = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output'
     */
    /* SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMax' incorporates:
     *  Constant: '<S312>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngCap = KeETQR_M_EngCapacityMax_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMax_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngCap = false;

    /* SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinRun' incorporates:
     *  Constant: '<S316>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngC_o = KeETQR_M_EngCapacityMinRun_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMinRun_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngC_k = false;

    /* SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinRunImmed' incorporates:
     *  Constant: '<S315>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngC_e =
        KeETQR_M_EngCapacityMinRunImmedRed_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMinRunImmed_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngC_c = false;

    /* SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinOff' incorporates:
     *  Constant: '<S313>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_Eng_ox = KeETQR_M_EngCapacityMinOff_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMinOff_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngC_p = false;

    /* SignalConversion generated from: '<S298>/VeETQI_M_MinDragCapacity' incorporates:
     *  Constant: '<S319>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_MinDra = KeETQR_M_MinDragCapacity_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_MinDragCapacity_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_MinDra = false;

    /* SignalConversion generated from: '<S298>/VeETQI_M_MinAirFlowMinSparkCapacity' incorporates:
     *  Constant: '<S318>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_MinAir =
        KeETQR_M_MinAirFlowMinSparkCapacity_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_MinAirFlowMinSparkCapacity_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_MinAir = false;

    /* SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinRunImmedNom' incorporates:
     *  Constant: '<S314>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngC_g =
        KeETQR_M_EngCapacityMinRunImmedNom_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMinRunImmedNom_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngC_g = false;

    /* SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMinRunImmedRedAvail' incorporates:
     *  Constant: '<S320>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngC_o =
        KeETQR_b_EngCapacityMinRunImmedRedAvail_Dflt;

    /* SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMinRunImmedRedAvail_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngC_h = false;

    /* SignalConversion generated from: '<S298>/VeETQI_M_EngTrqFSO_CurrAir' incorporates:
     *  Constant: '<S317>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngT_h = KeETQR_M_EngTrqFSO_CurrAir_Dflt;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ETQI_ProcessEngineActualAirflowTorque__Init ETQI Output'
     */
    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTrqActual' */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngTrq = 0.0F;

    /* SignalConversion generated from: '<S297>/VeETQI_b_EngTrqActual_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngTrq = false;

    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTrqAirflow' */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngT_i = 0.0F;

    /* SignalConversion generated from: '<S297>/VeETQI_b_EngTrqAirflow_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngT_o = false;

    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTorqACC4Capability' */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngTor = 0.0F;

    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTorqACC4Capability_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_M_Eng_hs = false;

    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTrqReserveReq' */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngT_e = 0.0F;

    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTrqReserveReq_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_M_Eng_f1 = false;

    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTrqStaticSEM' */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngT_k = 0.0F;

    /* SignalConversion generated from: '<S297>/VeETQI_b_EngTrqStaticSEM_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngT_j = false;

    /* SignalConversion generated from: '<S297>/VeETQI_M_EngTorque' */
    ETQR_ac_B.OutportBufferForVeETQI_M_EngT_f = 0.0F;

    /* SignalConversion generated from: '<S297>/VeETQI_b_EngTorque_FA' */
    ETQR_ac_B.OutportBufferForVeETQI_b_EngTor = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ETQI_Out_Init'
     */
    /* SignalConversion generated from: '<S296>/VeETQR_M_EngTrqActual_Out_Init' */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngTrq = 0.0F;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngTrqAirflow_Out_Init' */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngT_l = 0.0F;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMax_Out_Init' incorporates:
     *  Constant: '<S305>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngCap = KeETQR_M_EngCapacityMax_Dflt;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinOff_Out_Init' incorporates:
     *  Constant: '<S306>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngC_c = KeETQR_M_EngCapacityMinOff_Dflt;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinRun_Out_Init' incorporates:
     *  Constant: '<S309>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngC_h = KeETQR_M_EngCapacityMinRun_Dflt;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinRunImmedRed_Out_Init' incorporates:
     *  Constant: '<S308>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngC_j =
        KeETQR_M_EngCapacityMinRunImmedRed_Dflt;

    /* SignalConversion generated from: '<S296>/VeETQR_M_MinDragCapacity_Out_Init' incorporates:
     *  Constant: '<S311>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_MinDra = KeETQR_M_MinDragCapacity_Dflt;

    /* SignalConversion generated from: '<S296>/VeETQR_M_MinAirFlowMinSparkCapacity_Out_Init' incorporates:
     *  Constant: '<S310>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_MinAir =
        KeETQR_M_MinAirFlowMinSparkCapacity_Dflt;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngTrqStaticSEM_Out_Init' */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngT_c = 0.0F;

    /* SignalConversion generated from: '<S296>/VeETQR_b_EngTrqStaticSEM_FA_Out_Init' */
    ETQR_ac_B.OutportBufferForVeETQR_b_EngTrq = false;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngTrqActual_w_CL_Out_Init' */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngT_g = 0.0F;

    /* SignalConversion generated from: '<S296>/VeETQR_b_EngTrqActual_w_CL_FA_Out_Init' */
    ETQR_ac_B.OutportBufferForVeETQR_b_EngT_k = false;

    /* SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinRunImmedNom_Out_Init' incorporates:
     *  Constant: '<S307>/Calib'
     */
    ETQR_ac_B.OutportBufferForVeETQR_M_EngC_d =
        KeETQR_M_EngCapacityMinRunImmedNom_Dflt;

    /* SignalConversion generated from: '<S296>/VeETQR_b_EngCapacityMinRunImmedNom_FA_Out_Init' */
    ETQR_ac_B.OutportBufferForVeETQR_b_EngCap = false;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init ETQI Output'
     */
    for (i = 0; i < 16; i++)
    {
        /* SignalConversion generated from: '<S299>/VaETQI_M_EngCapabilityMax' incorporates:
         *  Constant: '<S321>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_EngCap[i] =
            KaETQR_M_EngCapabilityMax_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_M_EngHalfCylCapabilityMax' incorporates:
         *  Constant: '<S324>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_EngHal[i] =
            KaETQR_M_EngHalfCylCapabilityMax_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_M_EngCapabilityMinRun' incorporates:
         *  Constant: '<S323>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_EngC_e[i] =
            KaETQR_M_EngCapabilityMinRun_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_M_EngHalfCylCapabilityMinRun' incorporates:
         *  Constant: '<S326>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_EngH_f[i] =
            KaETQR_M_EngHalfCylCapabilityMinRun_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_M_EngCapabilityMinOff' incorporates:
         *  Constant: '<S322>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_EngC_o[i] =
            KaETQR_M_EngCapabilityMinOff_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_M_EngHalfCylCapabilityMinOff' incorporates:
         *  Constant: '<S325>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_EngH_m[i] =
            KaETQR_M_EngHalfCylCapabilityMinOff_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_n_EngCapability' incorporates:
         *  Constant: '<S329>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_n_EngCap[i] =
            KaETQR_n_EngCapability_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_n_EngHalfCylCapability' incorporates:
         *  Constant: '<S330>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_n_EngHal[i] =
            KaETQR_n_EngHalfCylCapability_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_M_MinDragCapability' incorporates:
         *  Constant: '<S328>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_MinDra[i] =
            KaETQR_M_MinDragCapability_Dflt[(i)];

        /* SignalConversion generated from: '<S299>/VaETQI_M_HalfCylMinDragCapability' incorporates:
         *  Constant: '<S327>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQI_M_HalfCy[i] =
            KaETQR_M_HalfCylMinDragCapability_Dflt[(i)];

        /* SignalConversion generated from: '<S296>/VaETQR_M_EngCapabilityMax_Out_Init' incorporates:
         *  Constant: '<S301>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQR_M_EngCap[i] =
            KaETQR_M_EngCapabilityMax_Dflt[(i)];

        /* SignalConversion generated from: '<S296>/VaETQR_M_EngCapabilityMinOff_Out_Init' incorporates:
         *  Constant: '<S302>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQR_M_EngC_c[i] =
            KaETQR_M_EngCapabilityMinOff_Dflt[(i)];

        /* SignalConversion generated from: '<S296>/VaETQR_M_EngHalfCylCapabilityMax_Out_Init' incorporates:
         *  Constant: '<S303>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQR_M_EngHal[i] =
            KaETQR_M_EngHalfCylCapabilityMax_Dflt[(i)];

        /* SignalConversion generated from: '<S296>/VaETQR_M_EngHalfCylCapabilityMinOff_Out_Init' incorporates:
         *  Constant: '<S304>/Calib'
         */
        ETQR_ac_B.OutportBufferForVaETQR_M_EngH_o[i] =
            KaETQR_M_EngHalfCylCapabilityMinOff_Dflt[(i)];

        /* SignalConversion generated from: '<S300>/EngCapabilityMax_x10ms_write' */
        ETQR_ac_B.OutportBufferForEngCapabilityMa[i] = 0.0F;

        /* SignalConversion generated from: '<S300>/EngCapabilityMinOff_x10ms_write' */
        ETQR_ac_B.OutportBufferForEngCapabilityMi[i] = 0.0F;

        /* SignalConversion generated from: '<S300>/EngHalfCylCapabilityMax_x10ms_write' */
        ETQR_ac_B.OutportBufferForEngHalfCylCapab[i] = 0.0F;

        /* SignalConversion generated from: '<S300>/EngHalfCylCapabilityMinOff_x10ms_write' */
        ETQR_ac_B.OutportBufferForEngHalfCylCap_h[i] = 0.0F;
    }

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VaETQR_M_EngCapabilityMinRun' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngCapabilityMinRun'
     */
    (void)Rte_Write_VaETQR_M_EngCapabilityMinRun_Value
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngC_e);

    /* Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMinRun' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngHalfCylCapabilityMinRun'
     */
    (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMinRun_Value
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngH_f);

    /* Outport: '<Root>/VaETQR_M_HalfCylMinDragCapability' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_HalfCylMinDragCapability'
     */
    (void)Rte_Write_VaETQR_M_HalfCylMinDragCapability_Value
        (ETQR_ac_B.OutportBufferForVaETQI_M_HalfCy);

    /* Outport: '<Root>/VaETQR_M_MinDragCapability' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_MinDragCapability'
     */
    (void)Rte_Write_VaETQR_M_MinDragCapability_Value
        (ETQR_ac_B.OutportBufferForVaETQI_M_MinDra);

    /* Outport: '<Root>/VaETQR_n_EngCapability' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_n_EngCapability'
     */
    (void)Rte_Write_VaETQR_n_EngCapability_Value
        (ETQR_ac_B.OutportBufferForVaETQI_n_EngCap);

    /* Outport: '<Root>/VaETQR_n_EngHalfCylCapability' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_n_EngHalfCylCapability'
     */
    (void)Rte_Write_VaETQR_n_EngHalfCylCapability_Value
        (ETQR_ac_B.OutportBufferForVaETQI_n_EngHal);

    /* Outport: '<Root>/VaETQR_M_EngCapabilityMax' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQR_M_EngCapabilityMax_Out_Init'
     */
    (void)Rte_Write_VaETQR_M_EngCapabilityMax_Value
        (ETQR_ac_B.OutportBufferForVaETQR_M_EngCap);

    /* Outport: '<Root>/VaETQR_M_EngCapabilityMinOff' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQR_M_EngCapabilityMinOff_Out_Init'
     */
    (void)Rte_Write_VaETQR_M_EngCapabilityMinOff_Value
        (ETQR_ac_B.OutportBufferForVaETQR_M_EngC_c);

    /* Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMax' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQR_M_EngHalfCylCapabilityMax_Out_Init'
     */
    (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMax_Value
        (ETQR_ac_B.OutportBufferForVaETQR_M_EngHal);

    /* Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMinOff' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQR_M_EngHalfCylCapabilityMinOff_Out_Init'
     */
    (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMinOff_Value
        (ETQR_ac_B.OutportBufferForVaETQR_M_EngH_o);

    /* Outport: '<Root>/VeETQR_M_EngTorqACC4Capability' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTorqACC4Capability'
     */
    (void)Rte_Write_VeETQR_M_EngTorqACC4Capability_Value
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngTor);

    /* Outport: '<Root>/VeETQR_b_EngTorqACC4Capability_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTorqACC4Capability_FA'
     */
    (void)Rte_Write_VeETQR_b_EngTorqACC4Capability_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_M_Eng_hs);

    /* Outport: '<Root>/VeETQR_M_EngTrqFSO_CurrAir' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTrqFSO_CurrAir_write'
     */
    (void)Rte_Write_VeETQR_M_EngTrqFSO_CurrAir_Value
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngT_h);

    /* Outport: '<Root>/VeETQR_M_EngTrqReserveReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTrqReserveReq'
     */
    (void)Rte_Write_VeETQR_M_EngTrqReserveReq_Value
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngT_e);

    /* Outport: '<Root>/VeETQR_b_EngTrqReserveReq_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTrqReserveReq_FA'
     */
    (void)Rte_Write_VeETQR_b_EngTrqReserveReq_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_M_Eng_f1);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMax_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMax_FA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMax_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngCap);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinOff_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinOff_FA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinOff_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_p);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRedAvail' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinRunImmedRedAvail'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRedAvail_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_o);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRedAvail_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinRunImmedRedAvail_FA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRedAvail_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_h);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRed_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinRunImmed_FA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedRed_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_c);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRun_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinRun_FA'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRun_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_k);

    /* Outport: '<Root>/VeETQR_b_EngTrqActual_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngTrqActual_FA'
     */
    (void)Rte_Write_VeETQR_b_EngTrqActual_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngTrq);

    /* Outport: '<Root>/VeETQR_b_EngTrqAirflow_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngTrqAirflow_FA'
     */
    (void)Rte_Write_VeETQR_b_EngTrqAirflow_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngT_o);

    /* Outport: '<Root>/VeETQR_M_EngCapacityMax' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngCapacityMax_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngCapacityMax_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngCap);

    /* Outport: '<Root>/VeETQR_M_EngCapacityMinOff' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngCapacityMinOff_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngCapacityMinOff_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngC_c);

    /* Outport: '<Root>/VeETQR_M_EngCapacityMinRunImmedNom' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngCapacityMinRunImmedNom_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngCapacityMinRunImmedNom_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngC_d);

    /* Outport: '<Root>/VeETQR_M_EngCapacityMinRunImmedRed' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngCapacityMinRunImmedRed_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngCapacityMinRunImmedRed_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngC_j);

    /* Outport: '<Root>/VeETQR_M_EngCapacityMinRun' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngCapacityMinRun_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngCapacityMinRun_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngC_h);

    /* Outport: '<Root>/VeETQR_M_EngTrqActual' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngTrqActual_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngTrqActual_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngTrq);

    /* Outport: '<Root>/VeETQR_M_EngTrqActual_w_CL' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngTrqActual_w_CL_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngTrqActual_w_CL_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngT_g);

    /* Outport: '<Root>/VeETQR_M_EngTrqAirflow' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngTrqAirflow_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngTrqAirflow_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngT_l);

    /* Outport: '<Root>/VeETQR_M_EngTrqStaticSEM' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_EngTrqStaticSEM_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_EngTrqStaticSEM_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_EngT_c);

    /* Outport: '<Root>/VeETQR_M_MinAirFlowMinSparkCapacity' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_MinAirFlowMinSparkCapacity_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_MinAirFlowMinSparkCapacity_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_MinAir);

    /* Outport: '<Root>/VeETQR_M_MinDragCapacity' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_MinDragCapacity_Out_Init'
     */
    (void)Rte_Write_VeETQR_M_MinDragCapacity_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_MinDra);

    /* Outport: '<Root>/VeETQR_M_PnLimitMaxEngTrqCap' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_M_PnLimitMaxEngTrqCap'
     */
    (void)Rte_Write_VeETQR_M_PnLimitMaxEngTrqCap_Value
        (ETQR_ac_B.OutportBufferForVeETQR_M_PnLimi);

    /* Outport: '<Root>/VeETQR_b_EngCapacityMinRunImmedNom_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_b_EngCapacityMinRunImmedNom_FA_Out_Init'
     */
    (void)Rte_Write_VeETQR_b_EngCapacityMinRunImmedNom_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQR_b_EngCap);

    /* Outport: '<Root>/VeETQR_b_EngTrqActual_w_CL_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_b_EngTrqActual_w_CL_FA_Out_Init'
     */
    (void)Rte_Write_VeETQR_b_EngTrqActual_w_CL_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQR_b_EngT_k);

    /* Outport: '<Root>/VeETQR_b_EngTrqStaticSEM_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_b_EngTrqStaticSEM_FA_Out_Init'
     */
    (void)Rte_Write_VeETQR_b_EngTrqStaticSEM_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQR_b_EngTrq);

    /* Outport: '<Root>/VeETQR_b_PnLimitMaxEngTrqCap_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQR_b_PnLimitMaxEngTrqCap_FA'
     */
    (void)Rte_Write_VeETQR_b_PnLimitMaxEngTrqCap_FA_Value
        (ETQR_ac_B.OutportBufferForVeETQR_b_PnLimi);

    /* Merge: '<Root>/EngCapabilityMax_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngCapabilityMax_x10ms_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_EngCapabilityMax_x10ms_write_IRV
        (ETQR_ac_B.OutportBufferForEngCapabilityMa);

    /* Merge: '<Root>/EngCapabilityMinOff_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngCapabilityMinOff_x10ms_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_EngCapabilityMinOff_x10ms_write_IRV
        (ETQR_ac_B.OutportBufferForEngCapabilityMi);

    /* Merge: '<Root>/EngHalfCylCapabilityMax_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngHalfCylCapabilityMax_x10ms_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_EngHalfCylCapabilityMax_x10ms_write_IRV
        (ETQR_ac_B.OutportBufferForEngHalfCylCapab);

    /* Merge: '<Root>/EngHalfCylCapabilityMinOff_x10ms_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/EngHalfCylCapabilityMinOff_x10ms_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_EngHalfCylCapabilityMinOff_x10ms_write_IRV
        (ETQR_ac_B.OutportBufferForEngHalfCylCap_h);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngCapabilityMax_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_EngCapabilityMax_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngCap);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngCapabilityMinOff_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_EngCapabilityMinOff_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngC_o);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngCapabilityMinRun_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_EngCapabilityMinRun_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngC_e);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngHalfCylCapabilityMax_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_EngHalfCylCapabilityMax_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngHal);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngHalfCylCapabilityMinOff_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_EngHalfCylCapabilityMinOff_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngH_m);

    /* Merge: '<Root>/Merge_23_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_EngHalfCylCapabilityMinRun_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_EngHalfCylCapabilityMinRun_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_EngH_f);

    /* Merge: '<Root>/Merge_28_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_HalfCylMinDragCapability_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_HalfCylMinDragCapability_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_HalfCy);

    /* Merge: '<Root>/Merge_27_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_M_MinDragCapability_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_M_MinDragCapability_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_M_MinDra);

    /* Merge: '<Root>/Merge_25_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_n_EngCapability_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_n_EngCapability_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_n_EngCap);

    /* Merge: '<Root>/Merge_26_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VaETQI_n_EngHalfCylCapability_write'
     */
    Rte_IrvWrite_ETQR_PwrOn_VaETQI_n_EngHalfCylCapability_write_IRV
        (ETQR_ac_B.OutportBufferForVaETQI_n_EngHal);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_Cnt_CapabilityFrame_HalfCylMax_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_Cnt_CapabilityFrame_HalfCylMax_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_Cnt_Ca_f);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_Cnt_CapabilityFrame_HalfCylMin_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_Cnt_CapabilityFrame_HalfCylMin_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_Cnt_Ca_k);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_Cnt_CapabilityFrame_Max_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_Cnt_CapabilityFrame_Max_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_Cnt_Capa);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_Cnt_CapabilityFrame_Min_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_Cnt_CapabilityFrame_Min_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_Cnt_Ca_b);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngCapacityMax_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngCapacityMax_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngCap);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngCapacityMinOff_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngCapacityMinOff_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_Eng_ox);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngCapacityMinRunImmedNom_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngCapacityMinRunImmedNom_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngC_g);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngCapacityMinRunImmed_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngCapacityMinRunImmed_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngC_e);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngCapacityMinRun_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngCapacityMinRun_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngC_o);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTorque_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngTorque_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngT_f);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTrqActual_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngTrqActual_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngTrq);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTrqAirflow_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngTrqAirflow_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngT_i);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_EngTrqStaticSEM_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_EngTrqStaticSEM_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_EngT_k);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_MinAirFlowMinSparkCapacity_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_MinAirFlowMinSparkCapacity_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_MinAir);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_M_MinDragCapacity_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_M_MinDragCapacity_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_M_MinDra);

    /* Merge: '<Root>/Merge_38_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMax_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngCapacityMax_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngCap);

    /* Merge: '<Root>/Merge_42_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinOff_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngCapacityMinOff_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_p);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinRunImmedNom_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngCapacityMinRunImmedNom_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_g);

    /* Merge: '<Root>/Merge_40_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinRunImmed_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngCapacityMinRunImmed_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_c);

    /* Merge: '<Root>/Merge_39_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngCapacityMinRun_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngCapacityMinRun_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngC_k);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngTorque_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngTorque_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngTor);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngTrqActual_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngTrqActual_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngTrq);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngTrqAirflow_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngTrqAirflow_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngT_o);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_EngTrqStaticSEM_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_EngTrqStaticSEM_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_EngT_j);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_MinAirFlowMinSparkCapacity_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_MinAirFlowMinSparkCapacity_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_MinAir);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S4>/VeETQI_b_MinDragCapacity_FA_write'
     * */
    Rte_IrvWrite_ETQR_PwrOn_VeETQI_b_MinDragCapacity_FA_write_IRV
        (ETQR_ac_B.OutportBufferForVeETQI_b_MinDra);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ETQR_CODE) ETQR_ac_Init(void)
{
    {
        float32 tmp[16];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/ETQR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/Init ETQI Output'
         */
        /* SystemInitialize for SignalConversion generated from: '<S299>/VeETQR_M_PnLimitMaxEngTrqCap' incorporates:
         *  Constant: '<S331>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_PnLimi =
            KeETQR_M_PnLimitMaxEngTrqCap_Dflt;

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/ETQI_ProcessEngineTorqueCapacity__Init ETQI Output'
         */
        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMax' incorporates:
         *  Constant: '<S312>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_EngCap = KeETQR_M_EngCapacityMax_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinRun' incorporates:
         *  Constant: '<S316>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_EngC_o =
            KeETQR_M_EngCapacityMinRun_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinRunImmed' incorporates:
         *  Constant: '<S315>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_EngC_e =
            KeETQR_M_EngCapacityMinRunImmedRed_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinOff' incorporates:
         *  Constant: '<S313>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_Eng_ox =
            KeETQR_M_EngCapacityMinOff_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_MinDragCapacity' incorporates:
         *  Constant: '<S319>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_MinDra =
            KeETQR_M_MinDragCapacity_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_MinAirFlowMinSparkCapacity' incorporates:
         *  Constant: '<S318>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_MinAir =
            KeETQR_M_MinAirFlowMinSparkCapacity_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_EngCapacityMinRunImmedNom' incorporates:
         *  Constant: '<S314>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_EngC_g =
            KeETQR_M_EngCapacityMinRunImmedNom_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_b_EngCapacityMinRunImmedRedAvail' incorporates:
         *  Constant: '<S320>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_b_EngC_o =
            KeETQR_b_EngCapacityMinRunImmedRedAvail_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S298>/VeETQI_M_EngTrqFSO_CurrAir' incorporates:
         *  Constant: '<S317>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQI_M_EngT_h =
            KeETQR_M_EngTrqFSO_CurrAir_Dflt;

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/ETQI_Out_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMax_Out_Init' incorporates:
         *  Constant: '<S305>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_EngCap = KeETQR_M_EngCapacityMax_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinOff_Out_Init' incorporates:
         *  Constant: '<S306>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_EngC_c =
            KeETQR_M_EngCapacityMinOff_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinRun_Out_Init' incorporates:
         *  Constant: '<S309>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_EngC_h =
            KeETQR_M_EngCapacityMinRun_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinRunImmedRed_Out_Init' incorporates:
         *  Constant: '<S308>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_EngC_j =
            KeETQR_M_EngCapacityMinRunImmedRed_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S296>/VeETQR_M_MinDragCapacity_Out_Init' incorporates:
         *  Constant: '<S311>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_MinDra =
            KeETQR_M_MinDragCapacity_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S296>/VeETQR_M_MinAirFlowMinSparkCapacity_Out_Init' incorporates:
         *  Constant: '<S310>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_MinAir =
            KeETQR_M_MinAirFlowMinSparkCapacity_Dflt;

        /* SystemInitialize for SignalConversion generated from: '<S296>/VeETQR_M_EngCapacityMinRunImmedNom_Out_Init' incorporates:
         *  Constant: '<S307>/Calib'
         */
        ETQR_ac_B.OutportBufferForVeETQR_M_EngC_d =
            KeETQR_M_EngCapacityMinRunImmedNom_Dflt;

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/Init ETQI Output'
         */
        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_EngCapabilityMax' incorporates:
         *  Constant: '<S321>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_EngCap[0], ((const float32 *)
                &(KaETQR_M_EngCapabilityMax_Dflt[0])), (sizeof(float32)) << 4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_EngHalfCylCapabilityMax' incorporates:
         *  Constant: '<S324>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_EngHal[0], ((const float32 *)
                &(KaETQR_M_EngHalfCylCapabilityMax_Dflt[0])), (sizeof(float32)) <<
               4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_EngCapabilityMinRun' incorporates:
         *  Constant: '<S323>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_EngC_e[0], ((const float32 *)
                &(KaETQR_M_EngCapabilityMinRun_Dflt[0])), (sizeof(float32)) <<
               4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_EngHalfCylCapabilityMinRun' incorporates:
         *  Constant: '<S326>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_EngH_f[0], ((const float32 *)
                &(KaETQR_M_EngHalfCylCapabilityMinRun_Dflt[0])), (sizeof(float32))
               << 4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_EngCapabilityMinOff' incorporates:
         *  Constant: '<S322>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_EngC_o[0], ((const float32 *)
                &(KaETQR_M_EngCapabilityMinOff_Dflt[0])), (sizeof(float32)) <<
               4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_EngHalfCylCapabilityMinOff' incorporates:
         *  Constant: '<S325>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_EngH_m[0], ((const float32 *)
                &(KaETQR_M_EngHalfCylCapabilityMinOff_Dflt[0])), (sizeof(float32))
               << 4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_n_EngCapability' incorporates:
         *  Constant: '<S329>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_n_EngCap[0], ((const float32 *)
                &(KaETQR_n_EngCapability_Dflt[0])), (sizeof(float32)) << 4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_n_EngHalfCylCapability' incorporates:
         *  Constant: '<S330>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_n_EngHal[0], ((const float32 *)
                &(KaETQR_n_EngHalfCylCapability_Dflt[0])), (sizeof(float32)) <<
               4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_MinDragCapability' incorporates:
         *  Constant: '<S328>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_MinDra[0], ((const float32 *)
                &(KaETQR_M_MinDragCapability_Dflt[0])), (sizeof(float32)) <<
               4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S299>/VaETQI_M_HalfCylMinDragCapability' incorporates:
         *  Constant: '<S327>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQI_M_HalfCy[0], ((const float32 *)
                &(KaETQR_M_HalfCylMinDragCapability_Dflt[0])), (sizeof(float32))
               << 4ULL);

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/ETQI_Out_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S296>/VaETQR_M_EngCapabilityMax_Out_Init' incorporates:
         *  Constant: '<S301>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQR_M_EngCap[0], ((const float32 *)
                &(KaETQR_M_EngCapabilityMax_Dflt[0])), (sizeof(float32)) << 4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S296>/VaETQR_M_EngCapabilityMinOff_Out_Init' incorporates:
         *  Constant: '<S302>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQR_M_EngC_c[0], ((const float32 *)
                &(KaETQR_M_EngCapabilityMinOff_Dflt[0])), (sizeof(float32)) <<
               4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S296>/VaETQR_M_EngHalfCylCapabilityMax_Out_Init' incorporates:
         *  Constant: '<S303>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQR_M_EngHal[0], ((const float32 *)
                &(KaETQR_M_EngHalfCylCapabilityMax_Dflt[0])), (sizeof(float32)) <<
               4ULL);

        /* SystemInitialize for SignalConversion generated from: '<S296>/VaETQR_M_EngHalfCylCapabilityMinOff_Out_Init' incorporates:
         *  Constant: '<S304>/Calib'
         */
        memcpy(&ETQR_ac_B.OutportBufferForVaETQR_M_EngH_o[0], ((const float32 *)
                &(KaETQR_M_EngHalfCylCapabilityMinOff_Dflt[0])), (sizeof(float32))
               << 4ULL);

        /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_ETQR_1

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTorque' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTrqActual' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTrqAirflow' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTrqStaticSEM' */
        /* SystemInitialize for Function Call SubSystem: '<Root>/ETQR_FastTEF' */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/ETQC_ProcessEngTrq_5ms'
         */
        /* SystemInitialize for SignalConversion: '<S47>/Signal Conversion' */
        ETQR_ac_B.SignalConversion_h = ETQR_ac_B.Merge1_k;

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for SubSystem: '<Root>/ETQR_FastTEF' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTrqStaticSEM' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTrqAirflow' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTrqActual' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeETQR_M_EngTorque' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

        /* SystemInitialize for Merge: '<Root>/Merge_55' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_EngCapabilityMax' incorporates:
         *  Merge: '<Root>/Merge_55'
         */
        (void)Rte_Write_VaETQR_M_EngCapabilityMax_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_14' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_EngCapabilityMinRun' incorporates:
         *  Merge: '<Root>/Merge_14'
         */
        (void)Rte_Write_VaETQR_M_EngCapabilityMinRun_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_56' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_EngCapabilityMinOff' incorporates:
         *  Merge: '<Root>/Merge_56'
         */
        (void)Rte_Write_VaETQR_M_EngCapabilityMinOff_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_25' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_n_EngCapability' incorporates:
         *  Merge: '<Root>/Merge_25'
         */
        (void)Rte_Write_VaETQR_n_EngCapability_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_57' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMax' incorporates:
         *  Merge: '<Root>/Merge_57'
         */
        (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMax_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_23' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMinRun' incorporates:
         *  Merge: '<Root>/Merge_23'
         */
        (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMinRun_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_58' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_EngHalfCylCapabilityMinOff' incorporates:
         *  Merge: '<Root>/Merge_58'
         */
        (void)Rte_Write_VaETQR_M_EngHalfCylCapabilityMinOff_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_26' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_n_EngHalfCylCapability' incorporates:
         *  Merge: '<Root>/Merge_26'
         */
        (void)Rte_Write_VaETQR_n_EngHalfCylCapability_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_28' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_HalfCylMinDragCapability' incorporates:
         *  Merge: '<Root>/Merge_28'
         */
        (void)Rte_Write_VaETQR_M_HalfCylMinDragCapability_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_27' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4ULL);

        /* SystemInitialize for Outport: '<Root>/VaETQR_M_MinDragCapability' incorporates:
         *  Merge: '<Root>/Merge_27'
         */
        (void)Rte_Write_VaETQR_M_MinDragCapability_Value(tmp);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
