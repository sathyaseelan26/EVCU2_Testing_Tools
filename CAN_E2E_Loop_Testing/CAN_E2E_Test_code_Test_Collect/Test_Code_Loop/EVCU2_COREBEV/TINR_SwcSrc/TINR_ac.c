/*
 * File: TINR_ac.c
 *
 * Code generated for Simulink model 'TINR_ac'.
 *
 * Model version                  : 9.88
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:40:21 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TINR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_TINR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HaTINR_e_Synchro1Gear[8] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HaTINR_e_Synchro2Gear[8] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMNeutPhsZeroTrqReq, TINR_VAR_INIT)
    HaTINR_e_TCMNeutPhsZeroTrqReq_CANC[4] =
{
    CeTINR_e_LimpInactive, CeTINR_e_LimpInactive, CeTINR_e_LimpInactive,
    CeTINR_e_LimpInactive
};                                     /* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMNeutPhsZeroTrqReq, TINR_VAR_INIT)
    HaTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN[4] =
{
    CeTINR_e_LimpInactive, CeTINR_e_LimpInactive, CeTINR_e_LimpInactive,
    CeTINR_e_LimpInactive
};                                     /* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMShftType, TINR_VAR_INIT) HaTINR_e_TCMShftType
    [89] =
{
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState
};                                     /* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMShftTypeTLF, TINR_VAR_INIT)
    HaTINR_e_TCMShftType2[123] =
{
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT
};                                     /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HaTINR_e_TCM_ActiveEVGear[16] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HaTINR_e_TCM_ActiveHybridGear[16] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HaTINR_e_TCM_ActiveXNGear[16] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HaTINR_e_TCM_ClutchStartGear[16] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HaTINR_e_TCM_PassiveHybridGear[16] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S327>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) HeTINR_b_GearShftType2InitFA = 0;/* Referenced by: '<S494>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) HeTINR_b_GearShftTypeInitFA = 0;/* Referenced by: '<S495>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) HeTINR_b_TCMTransTrqRatioMgu = 0;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) HeTINR_b_TCM_ASCReqDflt = 0;/* Referenced by:
                                                                      * '<S30>/FsftTINR_b_TCM_ASCReqChrt'
                                                                      * '<S109>/PokeTINR_b_TCM_ASCReqChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) HeTINR_d_EngStrtTypAvblDflt = 0;/* Referenced by:
                                                                      * '<S31>/FsftTINR_d_EngStrtTypAvblChrt'
                                                                      * '<S110>/PokeTINR_d_EngStrtTypAvblChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(uint16, TINR_VAR_INIT) HeTINR_d_TCMMechD6 = 0U;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMShftTypeTLF, TINR_VAR_INIT)
    HeTINR_e_GearShftType2Dflt = CeTRNR_e_SteadyStateDCT;/* Referenced by:
                                                          * '<S41>/FsftTINR_e_GearShftType2Chrt'
                                                          * '<S120>/PokeTINR_e_GearShftType2Chrt'
                                                          */

#endif

static volatile CONST(TeTRNR_e_TCMShftTypeTLF, TINR_VAR_INIT)
    HeTINR_e_GearShftType2Init = CeTRNR_e_SteadyStateDCT;/* Referenced by: '<S496>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMShftType, TINR_VAR_INIT)
    HeTINR_e_GearShftTypeDflt = CeTRNR_e_SteadyState;/* Referenced by:
                                                      * '<S40>/FsftTINR_e_GearShftTypeChrt'
                                                      * '<S119>/PokeTINR_e_GearShftTypeChrt'
                                                      */

#endif

static volatile CONST(TeTRNR_e_TCMShftType, TINR_VAR_INIT)
    HeTINR_e_GearShftTypeInit = CeTRNR_e_SteadyState;/* Referenced by: '<S497>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HeTINR_e_Synchro1GearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                  * '<S47>/FsftTINR_e_Synchro1GearChrt'
                                                  * '<S126>/PokeTINR_e_Synchro1GearChrt'
                                                  */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HeTINR_e_Synchro2GearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                  * '<S49>/FsftTINR_e_Synchro2GearChrt'
                                                  * '<S128>/PokeTINR_e_Synchro2GearChrt'
                                                  */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMNeutPhsZeroTrqReq, TINR_VAR_INIT)
    HeTINR_e_TCMNeutPhsZeroTrqReq_CANCDflt = CeTINR_e_LimpInactive;/* Referenced by:
                                                                    * '<S53>/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt'
                                                                    * '<S132>/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt'
                                                                    */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMNeutPhsZeroTrqReq, TINR_VAR_INIT)
    HeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANDflt = CeTINR_e_LimpInactive;/* Referenced by:
                                                                      * '<S54>/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt'
                                                                      * '<S133>/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HeTINR_e_TCM_ActiveEVGearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                      * '<S59>/FsftTINR_e_TCM_ActiveEVGearChrt'
                                                      * '<S138>/PokeTINR_e_TCM_ActiveEVGearChrt'
                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HeTINR_e_TCM_ActiveHybridGearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                          * '<S60>/FsftTINR_e_TCM_ActiveHybridGearChrt'
                                                          * '<S139>/PokeTINR_e_TCM_ActiveHybridGearChrt'
                                                          */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HeTINR_e_TCM_ActiveXNGearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                      * '<S61>/FsftTINR_e_TCM_ActiveXNGearChrt'
                                                      * '<S140>/PokeTINR_e_TCM_ActiveXNGearChrt'
                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HeTINR_e_TCM_ClutchStartGearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                         * '<S62>/FsftTINR_e_TCM_ClutchStartGearChrt'
                                                         * '<S141>/PokeTINR_e_TCM_ClutchStartGearChrt'
                                                         */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    HeTINR_e_TCM_PassiveHybridGearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                           * '<S63>/FsftTINR_e_TCM_PassiveHybridGearChrt'
                                                           * '<S142>/PokeTINR_e_TCM_PassiveHybridGearChrt'
                                                           */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) HeTINR_r_TCMTransTrqRatioMax =
    1.0E+8F;                           /* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) HeTINR_r_TCMTransTrqRatioMin =
    -1.0E+8F;                          /* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) HeTINR_t_MedTEB = 0.01F;/* Referenced by: '<S366>/Calib' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_M_ClchTorqInitVal_DCT[4] =
{
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S498>/Calib'
                                        * '<S588>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_M_ClchTorqOvrdVal_DCT[4] =
{
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S462>/Calib' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_M_ClchTrqInit[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S499>/Calib'
                                        * '<S589>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_M_ClchTrqOvrdVal[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S463>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchStFAInit_DCT[2] =
{
    0, 0
} ;                                    /* Referenced by: '<S500>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchStFAOvrdEnbl_DCT[2] =
{
    0, 0
} ;                                    /* Referenced by: '<S464>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchStFAOvrdVal_DCT[2] =
{
    0, 0
} ;                                    /* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchStOvrdEnbl_DCT[2] =
{
    0, 0
} ;                                    /* Referenced by: '<S466>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchTorqFAInit_DCT[4] =
{
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S501>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchTorqFAOvrdVal_DCT[4] =
{
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S467>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchTrqFAInit[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S502>/Calib'
                                        * '<S590>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchTrqFAOvrdEnbl[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchTrqFAOvrdVal[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_ClchTrqOvrdEnbl[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_DsblTCMNiMinForLockUp[9] =
{
    1, 0, 0, 0, 0, 0, 0, 1, 1
} ;                                    /* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT)
    KaTINR_b_DsblTCMNiMinForLockUp_Coast[9] =
{
    1, 0, 0, 0, 0, 0, 0, 1, 1
} ;                                    /* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_DsblTCMNiMinToOpen[9] =
{
    1, 0, 0, 0, 0, 0, 0, 1, 1
} ;                                    /* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_DsblTCMNiMinToOpen_Coast
    [9] =
{
    1, 0, 0, 0, 0, 0, 0, 1, 1
} ;                                    /* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_PwrFlowStClchLrnType[5] =
{
    1, 0, 1, 1, 1
} ;                                    /* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KaTINR_b_PwrFlowStTransAdpSts[11] =
{
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S424>/Calib' */

#endif

static volatile CONST(TeTMMR_e_ClchStat_DCT, TINR_VAR_INIT)
    KaTINR_e_ClchStInit_DCT[2] =
{
    CeTMMR_e_ClchReleased, CeTMMR_e_ClchReleased
};                                     /* Referenced by:
                                        * '<S503>/Calib'
                                        * '<S591>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTMMR_e_ClchStat_DCT, TINR_VAR_INIT)
    KaTINR_e_ClchStOvrdVal_DCT[2] =
{
    CeTMMR_e_ClchReleased, CeTMMR_e_ClchReleased
};                                     /* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT) KaTINR_e_HASK0Stat[8]
    =
{
    CeHCCR_e_ClReleased, CeHCCR_e_ClActuated, CeHCCR_e_ClActuated,
    CeHCCR_e_ClActuated, CeHCCR_e_ClLocked, CeHCCR_e_ClLocked,
    CeHCCR_e_ClReleased, CeHCCR_e_ClReleased
};                                     /* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT) KaTINR_e_K1Status[8]
    =
{
    CeHCCR_e_ClReleased, CeHCCR_e_ClActuated, CeHCCR_e_ClActuated,
    CeHCCR_e_ClActuated, CeHCCR_e_ClLocked, CeHCCR_e_ClLocked,
    CeHCCR_e_ClReleased, CeHCCR_e_ClReleased
};                                     /* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KaTINR_e_Synchro1Sts[4] =
{
    CeHCCR_e_ClReleased, CeHCCR_e_ClLocked, CeHCCR_e_ClInvalid,
    CeHCCR_e_ClInvalid
};                                     /* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KaTINR_e_Synchro2Sts[4] =
{
    CeHCCR_e_ClReleased, CeHCCR_e_ClLocked, CeHCCR_e_ClInvalid,
    CeHCCR_e_ClInvalid
};                                     /* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMComFail_C1CAN, TINR_VAR_INIT)
    KaTINR_e_TCMComFail_C1[8] =
{
    CeTINR_e_NoFaultTCM_C1, CeTINR_e_LoC_HCP_TCM_C1, CeTINR_e_LoC_ECM_TCM_C1,
    CeTINR_e_LoC_ECM_HCP_TCM_C1, CeTINR_e_undefine4TCM_C1,
    CeTINR_e_undefine5TCM_C1, CeTINR_e_undefine6TCM_C1,
    CeTINR_e_BusFailTCM_C1CAN
};                                     /* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMComFail_ePTCAN, TINR_VAR_INIT)
    KaTINR_e_TCMComFail_ePT[8] =
{
    CeTINR_e_NoFaultTCM_ePT, CeTINR_e_LoC_HCP_TCM_ePT, CeTINR_e_LoC_ECM_TCM_ePT,
    CeTINR_e_LoC_ECM_HCP_TCM_ePT, CeTINR_e_undefine4TCM_ePT,
    CeTINR_e_undefine5TCM_ePT, CeTINR_e_undefine6TCM_ePT,
    CeTINR_e_BusFailTCM_ePTCAN
};                                     /* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT) KaTINR_e_TCMGearStat
    [16] =
{
    CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_D2, CeTRNR_e_D3, CeTRNR_e_D4,
    CeTRNR_e_D5, CeTRNR_e_D6, CeTRNR_e_D7, CeTRNR_e_D8, CeTRNR_e_D9,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Reverse, CeTRNR_e_Neutral
};                                     /* Referenced by:
                                        * '<S276>/Calib'
                                        * '<S329>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMTgtMdReq, TINR_VAR_INIT)
    KaTINR_e_TCMHASActMode[4] =
{
    CeTRNR_e_SerEngOff, CeTRNR_e_SerEngOn, CeTRNR_e_PrllEngOn,
    CeTRNR_e_PrllEngOff
};                                     /* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeOHSR_e_RngSel, TINR_VAR_INIT) KaTINR_e_TCMModeReq[8] =
{
    CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M1,
    CeOHSR_e_RngSel_G2, CeOHSR_e_RngSel_G3, CeOHSR_e_RngSel_G3,
    CeOHSR_e_RngSel_G3, CeOHSR_e_RngSel_G3
};                                     /* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, TINR_VAR_INIT)
    KaTINR_e_TCMStrtStpOvrrd[5] =
{
    CeSTRR_e_NoOvrrd, CeSTRR_e_OvrrdEngOff, CeSTRR_e_OvrrdEngOn,
    CeSTRR_e_OvrrdInvalid, CeSTRR_e_OvrrdImmedStop
};                                     /* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeOHSR_e_VLE_DriveStat, TINR_VAR_INIT)
    KaTINR_e_TCM_ILEStat[3] =
{
    CeOHSR_e_NeutralState, CeOHSR_e_CreepState, CeOHSR_e_LaunchState
};                                     /* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCM_TrqCntrlModeReq, TINR_VAR_INIT)
    KaTINR_e_TCM_TrqCntrlMdReq[3] =
{
    CeTINR_e_None, CeTINR_e_TrqInc, CeTINR_e_TrqDec
};                                     /* Referenced by:
                                        * '<S315>/Calib'
                                        * '<S317>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TransAdaptStatus, TINR_VAR_INIT)
    KaTINR_e_TransAdpStat[11] =
{
    CeTINR_e_No_Routine_Running, CeTINR_e_ShftCltchsPulseAdapt_EngOn,
    CeTINR_e_ShftCltchsPulseAdapt_EV_Md, CeTINR_e_K0_PulseAdapt,
    CeTINR_e_ILE_Adapt, CeTINR_e_STADA_ShftCltchsAdapt, CeTINR_e_STADA_K0_Adapt,
    CeTINR_e_STADA_ILE_Adapt, CeTINR_e_EOLAD_ShftCltchsAdapt,
    CeTINR_e_EOLAD_K0_Adapt, CeTINR_e_Start_Adapt
};                                     /* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KaTINR_i_ActGrMinGrMap[13] =
{
    1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 0, 1
} ;                                    /* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KaTINR_i_TCM_MaxGrAllwd[16] =
{
    3, 1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 3, 3, 3, 3, 3
} ;                                    /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KaTINR_i_TCM_MinGrAllwd[16] =
{
    1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KaTINR_i_TgtGrMaxGrMap[13] =
{
    5, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5, 0, 5
} ;                                    /* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_k_ClchTrqFiltCnst[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_ILELockUpOpenOffset[9] =
{
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F
} ;                                    /* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_ILEOpenIdleOffset[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinForLockUp[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinForLockUpCoastDflt[9]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;              /* Referenced by: '<S71>/FsftTINR_n_NiMinForLockUpCoastChrt' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinForLockUpCoastInit[9]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S504>/Calib'
                                        * '<S592>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinForLockUpDflt[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                   /* Referenced by: '<S70>/FsftTINR_n_NiMinForLockUpChrt' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinForLockUpInit[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S505>/Calib'
                                        * '<S593>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinForLockUp_Coast[9] =
{
    1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F, 1000.0F,
    1000.0F
} ;                                    /* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinToOpen[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinToOpenCoastDflt[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                 /* Referenced by: '<S73>/FsftTINR_n_NiMinToOpenCoastChrt' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinToOpenCoastInit[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S506>/Calib'
                                        * '<S594>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinToOpenDflt[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                      /* Referenced by: '<S72>/FsftTINR_n_NiMinToOpenChrt' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinToOpenInit[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S507>/Calib'
                                        * '<S595>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KaTINR_n_NiMinToOpen_Coast[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_Cnt_InitCompVal = 8.0F;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_Cnt_TCM_DriverTypeDflt = 0;/* Referenced by:
                                                                      * '<S1>/FsftTINR_Cnt_TCM_DriverTypeChrt'
                                                                      * '<S80>/PokeTINR_Cnt_TCM_DriverTypeChrt'
                                                                      */

#endif

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_Cnt_TCM_DriverTypeInit = 0;/* Referenced by: '<S508>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ActualClch1TorqueAtDflt =
    0.0F;                              /* Referenced by:
                                        * '<S2>/FsftTINR_M_ActualClutch1_TCMChrt'
                                        * '<S81>/PokeTINR_M_ActualClutch1_TCMChrt'
                                        */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ActualClch3TorqueAtDflt =
    0.0F;                              /* Referenced by:
                                        * '<S3>/FsftTINR_M_ActualClutch3_TCMChrt'
                                        * '<S82>/PokeTINR_M_ActualClutch3_TCMChrt'
                                        */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ClchTrqADflt = 0.0F;/* Referenced by:
                                                                      * '<S4>/FsftTINR_M_ClchTrqAChrt'
                                                                      * '<S83>/PokeTINR_M_ClchTrqAChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ClchTrqBDflt = 0.0F;/* Referenced by:
                                                                      * '<S5>/FsftTINR_M_ClchTrqBChrt'
                                                                      * '<S84>/PokeTINR_M_ClchTrqBChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ClchTrqCDflt = 0.0F;/* Referenced by:
                                                                      * '<S6>/FsftTINR_M_ClchTrqCChrt'
                                                                      * '<S85>/PokeTINR_M_ClchTrqCChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ClchTrqDDflt = 0.0F;/* Referenced by:
                                                                      * '<S7>/FsftTINR_M_ClchTrqDChrt'
                                                                      * '<S86>/PokeTINR_M_ClchTrqDChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ClchTrqEDflt = 0.0F;/* Referenced by:
                                                                      * '<S8>/FsftTINR_M_ClchTrqEChrt'
                                                                      * '<S87>/PokeTINR_M_ClchTrqEChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_ClchTrqFDflt = 0.0F;/* Referenced by:
                                                                      * '<S9>/FsftTINR_M_ClchTrqFChrt'
                                                                      * '<S88>/PokeTINR_M_ClchTrqFChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_DrvLnTrqRq_Axle_Dflt =
    0.0F;                              /* Referenced by:
                                        * '<S14>/FsftTINR_b_DrvLnTrqRq_AxleChrt'
                                        * '<S89>/PokeTINR_M_DrvLnTrqRq_AxleChrt'
                                        */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_DrvLnTrqRq_Axle_Init =
    0.0F;                              /* Referenced by: '<S509>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_DrvLnTrqRq_Axle_Max =
    6535.0F;                           /* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_DrvLnTrqRq_Axle_Min =
    0.0F;                              /* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_LeadClch1TorqueAtDflt =
    0.0F;                              /* Referenced by:
                                        * '<S10>/FsftTINR_M_LeadClutch1_TCMChrt'
                                        * '<S90>/PokeTINR_M_LeadClutch1_TCMChrt'
                                        */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_M_LeadClch3TorqueAtDflt =
    0.0F;                              /* Referenced by:
                                        * '<S11>/FsftTINR_M_LeadClutch3_TCMChrt'
                                        * '<S91>/PokeTINR_M_LeadClutch3_TCMChrt'
                                        */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_Pct_TransStrssFctrDflt =
    0.0F;                              /* Referenced by:
                                        * '<S12>/FsftTINR_Pct_TransStrssFctrChrt'
                                        * '<S92>/PokeTINR_Pct_TransStrssFctrChrt'
                                        */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_Pct_TransStrssFctrInit =
    0.0F;                              /* Referenced by: '<S510>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_ActualClch1TrqFAOvrdEnbl =
    0;                                 /* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_ActualClch1TrqOvrdEnbl =
    0;                                 /* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_ActualClch3TrqFAOvrdEnbl =
    0;                                 /* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_ActualClch3TrqOvrdEnbl =
    0;                                 /* Referenced by: '<S475>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_ActualGearInitFA = 0;/* Referenced by: '<S511>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_DrvLnMinTrqMd_Init = 0;/* Referenced by:
                                                                      * '<S512>/Calib'
                                                                      * '<S596>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_DsblAEMD4TCM = 0;
                        /* Referenced by: '<S15>/FsftTINR_b_DsblAEMD4TCMChrt' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_EnableInitCompVal = 1;/* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_ILE_STO_Stat = 0;
                        /* Referenced by: '<S16>/FsftTINR_b_ILE_STO_StatChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_ILE_STO_StatInit = 0;/* Referenced by: '<S515>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear1Dflt = 0;
                       /* Referenced by: '<S17>/FsftTINR_b_Inhibit_Gear1Chrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear1Init = 0;/* Referenced by: '<S516>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear2Dflt = 0;
                       /* Referenced by: '<S18>/FsftTINR_b_Inhibit_Gear2Chrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear2Init = 0;/* Referenced by: '<S517>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear3Dflt = 0;
                       /* Referenced by: '<S19>/FsftTINR_b_Inhibit_Gear3Chrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear3Init = 0;/* Referenced by: '<S518>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear4Dflt = 0;
                       /* Referenced by: '<S20>/FsftTINR_b_Inhibit_Gear4Chrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Gear4Init = 0;/* Referenced by: '<S519>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Mode1Dflt = 0;
                       /* Referenced by: '<S21>/FsftTINR_b_Inhibit_Mode1Chrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Mode1Init = 0;/* Referenced by: '<S520>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Mode2Dflt = 0;
                       /* Referenced by: '<S22>/FsftTINR_b_Inhibit_Mode2Chrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_Mode2Init = 0;/* Referenced by: '<S521>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_NeutralDflt = 0;
                     /* Referenced by: '<S23>/FsftTINR_b_Inhibit_NeutralChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_Inhibit_NeutralInit = 0;/* Referenced by: '<S522>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_InternalHillModeSlct = 1;/* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_KGB = 0;
                                 /* Referenced by: '<S24>/FsftTINR_b_KGBChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_KGBInit = 0;/* Referenced by: '<S524>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_KOB = 0;
                                 /* Referenced by: '<S25>/FsftTINR_b_KOBChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_KOBInit = 0;/* Referenced by: '<S525>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_KSB = 0;
                                 /* Referenced by: '<S26>/FsftTINR_b_KSBChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_KSBInit = 0;/* Referenced by: '<S526>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_MtrBDynFctrOvrdEnbl = 0;/* Referenced by: '<S480>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_NiMinForLockUpInitCoastFA
    = 1;                               /* Referenced by: '<S527>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_NiMinForLockUpInitFA = 1;/* Referenced by: '<S528>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_NiMinToOpenCoastInitFA =
    1;                                 /* Referenced by: '<S529>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_NiMinToOpenInitFA = 1;/* Referenced by: '<S530>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_OvrdNiMinForLockUp = 1;/* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_OvrdNiMinForLockUp_Coast =
    1;                                 /* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_OvrdNiMinToOpen = 1;/* Referenced by: '<S406>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_OvrdNiMinToOpen_Coast = 1;/* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_PwrFlowStatus = 0;
                       /* Referenced by: '<S27>/FsftTINR_b_PwrFlowStatusChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_PwrFlowStatusInit = 0;/* Referenced by:
                                                                      * '<S531>/Calib'
                                                                      * '<S597>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_PwrFlowStatusOvrrdEnbl =
    1;                                 /* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_PwrFlowStatusOvrrdVal = 0;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_SlctClchLrn_TransAdp = 0;/* Referenced by: '<S427>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCMHASActModeInitFA = 0;/* Referenced by: '<S532>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCMLimphomeFaultsInitFA =
    0;                                 /* Referenced by:
                                        * '<S533>/Calib'
                                        * '<S598>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT)
    KeTINR_b_TCMLimphomeFaultsOvrrdEnbl = 0;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT)
    KeTINR_b_TCMNeutPhsZeroTrqReqCANSlct = 0;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCMSpdCtrlCapableDflt = 0;
                   /* Referenced by: '<S28>/FsftTINR_b_TCMSpdCtrlCapableChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCMSpdCtrlCapableInit = 0;/* Referenced by: '<S535>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCMTransReqFuelONDflt = 0;
                  /* Referenced by: '<S108>/PokeTINR_b_TCMTransReqFuelONChrt' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCMTransReqFuelONInit = 0;/* Referenced by: '<S536>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCM_MaxGearAllwdInitFA =
    1;                                 /* Referenced by: '<S542>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TCM_MinGearAllwdInitFA =
    1;                                 /* Referenced by: '<S543>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT)
    KeTINR_b_TCM_TCCPreventionIDOvrrdEnbl = 0;/* Referenced by: '<S481>/Calib' */

#endif

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TargetGearInitFA = 0;/* Referenced by: '<S545>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TransTrqRatioInitFA = 0;/* Referenced by: '<S546>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TrqCntrlMdFstInitFA = 0;/* Referenced by: '<S547>/Calib' */
static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_TrqCntrlMdSlwInitFA = 0;/* Referenced by: '<S548>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(boolean, TINR_VAR_INIT) KeTINR_b_UseTransTrqRatio = 1;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(uint16, TINR_VAR_INIT) KeTINR_d_TCMFailuresDflt = 0U;
                         /* Referenced by: '<S32>/FsftTINR_d_TCMFailuresChrt' */

#endif

static volatile CONST(uint16, TINR_VAR_INIT) KeTINR_d_TCMFailures_Init = 0U;/* Referenced by:
                                                                      * '<S549>/Calib'
                                                                      * '<S599>/Calib'
                                                                      */
static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_d_TCMLimphomeFaultsInit = 0;/* Referenced by:
                                                                      * '<S550>/Calib'
                                                                      * '<S600>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_d_TCMLimphomeFaultsOvrrdVal =
    0;                                 /* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_ActualGearDflt = CeTRNR_e_Neutral;/* Referenced by:
                                                * '<S35>/FsftTINR_e_ActualGearChrt'
                                                * '<S114>/PokeTINR_e_ActualGearChrt'
                                                */

#endif

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_ActualGearInit = CeTRNR_e_Park;/* Referenced by: '<S551>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTMMR_e_ClchStat_DCT, TINR_VAR_INIT)
    KeTINR_e_Clch1StsAtDflt = CeTMMR_e_ClchReleased;/* Referenced by:
                                                     * '<S36>/FsftTINR_e_Clch1StsChrt'
                                                     * '<S115>/PokeTINR_e_Clch1StsChrt'
                                                     */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTMMR_e_ClchStat_DCT, TINR_VAR_INIT)
    KeTINR_e_Clch3StsAtDflt = CeTMMR_e_ClchReleased;/* Referenced by:
                                                     * '<S37>/FsftTINR_e_Clch3StsChrt'
                                                     * '<S116>/PokeTINR_e_Clch3StsChrt'
                                                     */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMComFail_C1CAN, TINR_VAR_INIT)
    KeTINR_e_ComFailDflt_C1CAN = CeTINR_e_NoFaultTCM_C1;/* Referenced by:
                                                         * '<S38>/FsftTINR_e_ComFailDflt_C1CANChrt'
                                                         * '<S117>/PokeTINR_e_ComFail_C1CANChrt'
                                                         */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMComFail_ePTCAN, TINR_VAR_INIT)
    KeTINR_e_ComFailDflt_ePTCAN = CeTINR_e_NoFaultTCM_ePT;/* Referenced by:
                                                           * '<S39>/FsftTINR_e_ComFailDflt_ePTCANChrt'
                                                           * '<S118>/PokeTINR_e_ComFail_ePTCANChrt'
                                                           */

#endif

static volatile CONST(TeTINR_e_TCMComFail_C1CAN, TINR_VAR_INIT)
    KeTINR_e_ComFailInit_C1CAN = CeTINR_e_NoFaultTCM_C1;/* Referenced by: '<S552>/Calib' */
static volatile CONST(TeTINR_e_TCMComFail_ePTCAN, TINR_VAR_INIT)
    KeTINR_e_ComFailInit_ePTCAN = CeTINR_e_NoFaultTCM_ePT;/* Referenced by: '<S553>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_HASStatusK0Dflt = CeHCCR_e_ClReleased;/* Referenced by:
                                                    * '<S42>/FsftTINR_e_HASStatusK0Chrt'
                                                    * '<S121>/PokeTINR_e_HASStatusK0Chrt'
                                                    */

#endif

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_HASStatusK0Init = CeHCCR_e_ClReleased;/* Referenced by: '<S554>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeOHSR_e_VLE_DriveStat, TINR_VAR_INIT)
    KeTINR_e_ILEStatDflt = CeOHSR_e_NeutralState;/* Referenced by:
                                                  * '<S43>/FsftTINR_e_ILEStatChrt'
                                                  * '<S122>/PokeTINR_e_ILEStatChrt'
                                                  */

#endif

static volatile CONST(TeOHSR_e_VLE_DriveStat, TINR_VAR_INIT)
    KeTINR_e_ILEStatInit = CeOHSR_e_NeutralState;/* Referenced by: '<S555>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_K1StatusDflt = CeHCCR_e_ClReleased;/* Referenced by:
                                                 * '<S44>/FsftTINR_e_K1StatusChrt'
                                                 * '<S123>/PokeTINR_e_K1StatusChrt'
                                                 */

#endif

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_K1StatusInit = CeHCCR_e_ClReleased;/* Referenced by: '<S556>/Calib' */
static volatile CONST(TeTMMR_e_MtrBDynFctr, TINR_VAR_INIT)
    KeTINR_e_MtrBDynFctrDflt = CeTMMR_e_MtrBDynFctr_Inactive;/* Referenced by:
                                                              * '<S45>/FsftTINR_e_MtrBDynFctrChrt'
                                                              * '<S124>/PokeTINR_e_MtrBDynFctrChrt'
                                                              * '<S557>/Calib'
                                                              * '<S601>/Calib'
                                                              */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTMMR_e_MtrBDynFctr, TINR_VAR_INIT)
    KeTINR_e_MtrBDynFctrOvrdVal = CeTMMR_e_MtrBDynFctr_Inactive;/* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_P2SpdCntrlReq, TINR_VAR_INIT)
    KeTINR_e_P2SpdCntrlReqDflt = CeTINR_e_Inactive;/* Referenced by:
                                                    * '<S46>/FsftTINR_e_P2SpdCntrlReqChrt'
                                                    * '<S125>/PokeTINR_e_P2SpdCntrlReqChrt'
                                                    */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_Synchro1StsDflt = CeHCCR_e_ClReleased;/* Referenced by:
                                                    * '<S48>/FsftTINR_e_Synchro1StsChrt'
                                                    * '<S127>/PokeTINR_e_Synchro1StsChrt'
                                                    */

#endif

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_Synchro1StsInit = CeHCCR_e_ClReleased;/* Referenced by: '<S558>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_Synchro2StsDflt = CeHCCR_e_ClReleased;/* Referenced by:
                                                    * '<S50>/FsftTINR_e_Synchro2StsChrt'
                                                    * '<S129>/PokeTINR_e_Synchro2StsChrt'
                                                    */

#endif

static volatile CONST(TeHCCR_e_ClutchStatus, TINR_VAR_INIT)
    KeTINR_e_Synchro2StsInit = CeHCCR_e_ClReleased;/* Referenced by: '<S559>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMTgtMdReq, TINR_VAR_INIT)
    KeTINR_e_TCMHASActModeDflt = CeTRNR_e_SerEngOff;/* Referenced by:
                                                     * '<S51>/FsftTINR_e_TCMHASActModeChrt'
                                                     * '<S130>/PokeTINR_e_TCMHASActModeChrt'
                                                     */

#endif

static volatile CONST(TeTRNR_e_TCMTgtMdReq, TINR_VAR_INIT)
    KeTINR_e_TCMHASActModeInit = CeTRNR_e_SerEngOff;/* Referenced by: '<S560>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeOHSR_e_RngSel, TINR_VAR_INIT) KeTINR_e_TCMModeReqDflt =
    CeOHSR_e_RngSel_N;                 /* Referenced by:
                                        * '<S52>/FsftTINR_e_TCMModeReqChrt'
                                        * '<S131>/PokeTINR_e_TCMModeReqChrt'
                                        */

#endif

static volatile CONST(TeOHSR_e_RngSel, TINR_VAR_INIT) KeTINR_e_TCMModeReqInit =
    CeOHSR_e_RngSel_N;                 /* Referenced by: '<S561>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, TINR_VAR_INIT)
    KeTINR_e_TCMStrtStpOvrrd_Dflt = CeSTRR_e_NoOvrrd;/* Referenced by:
                                                      * '<S55>/FsftTINR_e_TCMStrtStpOvrrdChrt'
                                                      * '<S134>/PokeTINR_e_TCMStrtStpOvrrdChrt'
                                                      */

#endif

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, TINR_VAR_INIT)
    KeTINR_e_TCMStrtStpOvrrd_Init = CeSTRR_e_NoOvrrd;/* Referenced by: '<S562>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMTCCPreventionID, TINR_VAR_INIT)
    KeTINR_e_TCMTCCPreventionIDDflt = CeTINR_e_TCCPreventID_SNA;/* Referenced by:
                                                                 * '<S56>/FsftTINR_e_TCMTCCPreventionIDChrt'
                                                                 * '<S135>/PokeTINR_e_TCMTCCPreventionIDChrt'
                                                                 */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCM_TrqCntrlModeReq, TINR_VAR_INIT)
    KeTINR_e_TCMTrqCntrlMdFstDflt = CeTINR_e_None;/* Referenced by:
                                                   * '<S57>/FsftTINR_e_TCMTrqCntrlModeFastChrt'
                                                   * '<S136>/PokeTINR_e_TCMTrqCntrlModeFastChrt'
                                                   */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCM_TrqCntrlModeReq, TINR_VAR_INIT)
    KeTINR_e_TCMTrqCntrlMdSlwDflt = CeTINR_e_None;/* Referenced by:
                                                   * '<S58>/FsftTINR_e_TCMTrqCntrlModeSlowChrt'
                                                   * '<S137>/PokeTINR_e_TCMTrqCntrlModeSlowChrt'
                                                   */

#endif

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_TCM_ActiveEVGearInit = CeTRNR_e_D2;/* Referenced by: '<S563>/Calib' */
static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_TCM_ActiveHybridGearInit = CeTRNR_e_Neutral;/* Referenced by: '<S564>/Calib' */
static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_TCM_ActiveXNGearInit = CeTRNR_e_D1;/* Referenced by: '<S565>/Calib' */
static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_TCM_ClutchStartGearInit = CeTRNR_e_Neutral;/* Referenced by: '<S566>/Calib' */
static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_TCM_PassiveHybridGearInit = CeTRNR_e_D2;/* Referenced by: '<S567>/Calib' */
static volatile CONST(TeTINR_e_TCMTCCPreventionID, TINR_VAR_INIT)
    KeTINR_e_TCM_TCCPreventionIDInit = CeTINR_e_TCCPreventIdInit;/* Referenced by:
                                                                  * '<S568>/Calib'
                                                                  * '<S602>/Calib'
                                                                  */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TCMTCCPreventionID, TINR_VAR_INIT)
    KeTINR_e_TCM_TCCPreventionIDOvrrdVal = CeTINR_e_TCCPreventIdInit;/* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_TargetGearDflt = CeTRNR_e_Park;/* Referenced by:
                                             * '<S64>/FsftTINR_e_TargetGearChrt'
                                             * '<S143>/PokeTINR_e_TargetGearChrt'
                                             */

#endif

static volatile CONST(TeTRNR_e_TCMGearStat, TINR_VAR_INIT)
    KeTINR_e_TargetGearInit = CeTRNR_e_Park;/* Referenced by: '<S569>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(TeTINR_e_TransAdaptStatus, TINR_VAR_INIT)
    KeTINR_e_TransAdpStsDflt = CeTINR_e_No_Routine_Running;/* Referenced by:
                                                            * '<S65>/FsftTINR_e_TransAdpStatusChrt'
                                                            * '<S144>/PokeTINR_e_TransAdpStatusChrt'
                                                            */

#endif

static volatile CONST(TeTINR_e_TCM_TrqCntrlModeReq, TINR_VAR_INIT)
    KeTINR_e_TrqCntrlMdFstInit = CeTINR_e_None;/* Referenced by: '<S570>/Calib' */
static volatile CONST(TeTINR_e_TCM_TrqCntrlModeReq, TINR_VAR_INIT)
    KeTINR_e_TrqCntrlMdSlwInit = CeTINR_e_None;/* Referenced by: '<S571>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_i_GearMaxAvl = 8;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_i_GearMinAvl = 1;/* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(uint16, TINR_VAR_INIT) KeTINR_i_TCM_DriveProgramDflt = 1U;/* Referenced by:
                                                                      * '<S66>/FsftTINR_i_TCM_DriveProgramChrt'
                                                                      * '<S145>/PokeTINR_i_TCM_DriveProgramChrt'
                                                                      */

#endif

static volatile CONST(uint16, TINR_VAR_INIT) KeTINR_i_TCM_DriveProgramInit = 0U;/* Referenced by: '<S572>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_i_TCM_MaxGearAllwdDflt = 1;/* Referenced by:
                                                                      * '<S67>/FsftTINR_i_TCM_MaxGearAllwdChrt'
                                                                      * '<S146>/PokeTINR_i_TCM_MaxGearAllwdChrt'
                                                                      */

#endif

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_i_TCM_MaxGearAllwdInit = 1;/* Referenced by:
                                                                      * '<S573>/Calib'
                                                                      * '<S603>/Calib'
                                                                      * '<S385>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_i_TCM_MinGearAllwdDflt = 1;/* Referenced by:
                                                                      * '<S68>/FsftTINR_i_TCM_MinGearAllwdChrt'
                                                                      * '<S147>/PokeTINR_i_TCM_MinGearAllwdChrt'
                                                                      */

#endif

static volatile CONST(sint16, TINR_VAR_INIT) KeTINR_i_TCM_MinGearAllwdInit = 1;/* Referenced by:
                                                                      * '<S574>/Calib'
                                                                      * '<S604>/Calib'
                                                                      * '<S386>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_i_ValFramCnter = 8.0F;/* Referenced by:
                                                                      * '<S339>/Calib'
                                                                      * '<S341>/Calib'
                                                                      * '<S343>/Calib'
                                                                      * '<S345>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_k_EstSlopeAngMax = 25.0F;/* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_k_EstSlopeAngMin = -25.0F;/* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_k_EstSlopeAng_Flt = 0.5F;/* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_n_DisengageILE_Dflt =
    1500.0F;                           /* Referenced by:
                                        * '<S69>/FsftTINR_n_DisengageILEChrt'
                                        * '<S148>/PokeTINR_n_DisengageILEChrt'
                                        */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_n_DisengageILE_Init =
    2550.0F;                           /* Referenced by: '<S575>/Calib' */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_DfltHillMode = 1.0F;/* Referenced by: '<S377>/Calib' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_DriveLineRatioInit = 0.0F;/* Referenced by:
                                                                      * '<S74>/FsftTINR_r_DriveLineRatioCanCChrt'
                                                                      * '<S75>/FsftTINR_r_DriveLineRatioEptChrt'
                                                                      * '<S153>/PokeTINR_r_DriveLineRatioCanCChrt'
                                                                      * '<S154>/PokeTINR_r_DriveLineRatioEptChrt'
                                                                      * '<S576>/Calib'
                                                                      */
static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_MechDrivelineRatioInit =
    0.0F;                              /* Referenced by:
                                        * '<S76>/FsftTINR_r_MechDrivelineRatioChrt'
                                        * '<S155>/PokeTINR_r_MechDrivelineRatioChrt'
                                        * '<S577>/Calib'
                                        */
static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_TCC_TRInit = 0.0F;/* Referenced by:
                                                                      * '<S77>/FsftTINR_r_TCC_TRChrt'
                                                                      * '<S156>/PokeTINR_r_TCC_TRChrt'
                                                                      * '<S578>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_TCM_HillModeDflt = 0.0F;/* Referenced by:
                                                                      * '<S78>/FsftTINR_r_TCM_HillModeChrt'
                                                                      * '<S157>/PokeTINR_r_TCM_HillModeChrt'
                                                                      */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_TCM_HillModeInit = 0.0F;/* Referenced by:
                                                                      * '<S579>/Calib'
                                                                      * '<S605>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_TCM_TransTrqRatioDflt =
    0.0F;                              /* Referenced by:
                                        * '<S79>/FsftTINR_r_TransTrqRatioChrt'
                                        * '<S158>/PokeTINR_r_TransTrqRatioChrt'
                                        */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_r_TransTrqRatioInit = 0.0F;/* Referenced by:
                                                                      * '<S580>/Calib'
                                                                      * '<S606>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_t_DrvLnTrqRq_Axle_OOR_Tmr =
    2.0F;                              /* Referenced by: '<S369>/Calib' */

#endif

static volatile CONST(float32, TINR_VAR_INIT) KeTINR_t_TCM_TimeToSpeedChange =
    0.0F;                              /* Referenced by:
                                        * '<S581>/Calib'
                                        * '<S607>/Calib'
                                        */

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KtTINR_r_HillMd[40] =
{
    0.0001F, 0.001F, 1.0E-5F, 0.0001F, 0.5F, 0.6F, 0.7F, 0.7F, 0.8F, 0.8F, 0.8F,
    0.8F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.2F, 1.4F,
    1.1F, 1.2F, 1.3F, 1.5F, 1.5F, 2.0F, 2.5F, 3.0F, 2.5F, 3.0F, 3.5F, 3.8F, 4.0F,
    4.0F, 4.0F, 4.0F
} ;                                    /* Referenced by: '<S380>/Vector' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KxTINR_r_HillMd[4] =
{
    200.0F, 400.0F, 800.0F, 1600.0F
} ;                                    /* Referenced by: '<S380>/Vector' */

#endif

#if Rte_SysCon_Variant_TINR_1

static volatile CONST(float32, TINR_VAR_INIT) KyTINR_r_HillMd[10] =
{
    -25.0F, -10.0F, -4.0F, -2.0F, 0.0F, 2.0F, 4.0F, 8.0F, 15.0F, 25.0F
} ;                                    /* Referenced by: '<S380>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TINR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_M_ClchTrqA;/* '<S451>/Switch' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_M_ClchTrqB;/* '<S451>/Switch1' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_M_ClchTrqC;/* '<S451>/Switch2' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_M_ClchTrqD;/* '<S451>/Switch3' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_M_ClchTrqE;/* '<S451>/Switch4' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_M_ClchTrqF;/* '<S451>/Switch5' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ActualClch1_TCMFA;/* '<S451>/Switch22' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ActualClch3_TCMFA;/* '<S451>/Switch23' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_Clch1StsFA;/* '<S451>/Switch20' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_Clch3StsFA;/* '<S451>/Switch21' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ClchTrqAFA;/* '<S451>/Switch6' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ClchTrqBFA;/* '<S451>/Switch7' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ClchTrqCFA;/* '<S451>/Switch8' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ClchTrqDFA;/* '<S451>/Switch9' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ClchTrqEFA;/* '<S451>/Switch10' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_ClchTrqFFA;/* '<S451>/Switch11' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_EstSlopeAngleFA;/* '<S433>/AND' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(boolean, TINR_VAR_INIT) VeTINC_b_PrimNoFA;/* '<S434>/AND' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(sint16, TINR_VAR_INIT) VeTINC_d_TCMLimphomeFaults;/* '<S356>/Switch' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(sint16, TINR_VAR_INIT) VeTINC_d_TCMLimphomeFaultsC1CAN;/* '<S356>/Switch1' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(TeTRNR_e_TCMGearStat, TINR_VAR_INIT) VeTINC_e_ActualGear;/* '<S437>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(TeRTMR_e_ClutchLrnType, TINR_VAR_INIT) VeTINC_e_ClutchLrnType;/* '<S436>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(TeTRNR_e_TCMGearStat, TINR_VAR_INIT) VeTINC_e_TargetGear;/* '<S438>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_n_PrimNoSgndFltrd;/* '<S444>/Gain' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_n_TransMinEngSpd;/* '<S447>/Gain' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_phi_EstSlopeAngle;/* '<S448>/Gain' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_phi_SlopeAngFiltd;/* '<S379>/Switch' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_r_Axle_Ratio;/* '<S446>/Gain' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_r_DrvLineRatio;/* '<S365>/Switch2' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_r_TCMTransTrqRatioRaw;/* '<S365>/Product' */

#endif

#if Rte_SysCon_Variant_TINR_1

static VAR(float32, TINR_VAR_INIT) VeTINC_r_TCaseRatio;/* '<S445>/Gain' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TINR
#include "MemMap.h"

CONST(ConstB_TINR_ac_T, TINR_VAR_INIT) TINR_ac_ConstB =
{
    CeTRNR_e_Neutral,                  /* '<S491>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S486>/Constant' */
    CeTINR_e_No_Routine_Running,       /* '<S586>/Constant' */
    CeTINR_e_No_Routine_Running,       /* '<S487>/Constant' */
    CeTINR_e_LimpInactive,             /* '<S587>/Constant' */
    CeTINR_e_LimpInactive,             /* '<S488>/Constant' */
    CeTINR_e_LimpInactive,             /* '<S489>/Constant' */
    CeTINR_e_Inactive                  /* '<S490>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TINR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TINR
#include "MemMap.h"

CONST(ConstP_TINR_ac_T, TINR_VAR_INIT) TINR_ac_ConstP =
{

#if Rte_SysCon_Variant_TINR_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S380>/Vector'
     */
    {
        3U, 9U
    },

#endif

#ifndef CONSTP_TINR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TINR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

VAR(B_TINR_ac_T, TINR_VAR_INIT) TINR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

VAR(DW_TINR_ac_T, TINR_VAR_INIT) TINR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TINR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) TINR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_TINR_1

    sint16 rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi;

#endif

#if Rte_SysCon_Variant_TINR_1

    sint16 rtb_TmpSignalConversionAtVeTINR_i_TCM_Ma;

#endif

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_TmpSignalConversionAtVeTINR_b_TCMLim;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVeTINR_r_TransT;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVeTINR_b_DrvLnT;

#endif

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_Logical2_j;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_Sum1[9];

#endif

#if Rte_SysCon_Variant_TINR_1

    sint16 rtb_Selector1_j;

#endif

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_OR1;

#endif

#if Rte_SysCon_Variant_TINR_1

    sint16 rtb_Merge1;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCMNeutPhsZeroTrqReq rtb_TmpSignalConversionAtVeTINR_e_TCMNeu;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TransAdaptStatus rtb_TmpSignalConversionAtVeTINR_e_TransA;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVaTINR_n_NiMinT[9];

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVaTINR_n_NiM_em[9];

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVaTINR_n_NiMi_c[9];

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVaTINR_n_NiMinF[9];

#endif

#if Rte_SysCon_Variant_TINR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_TINR_1

    uint16 tmp;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_Sum1_c;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_Sum;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVaTINR_n_NiMi_g;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_TmpSignalConversionAtVaTINR_n_NiM_hi;

#endif

#if Rte_SysCon_Variant_TINR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* DataTypeConversion: '<S437>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value((&(VeTINC_e_ActualGear)));

    /* DataTypeConversion: '<S438>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value((&(VeTINC_e_TargetGear)));

    /* DataTypeConversion: '<S436>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeRTMR_e_ClutchLrnType'
     */
    (void)Rte_Read_VeRTMR_e_ClutchLrnType_Value((&(VeTINC_e_ClutchLrnType)));

    /* Gain: '<S446>/Gain' incorporates:
     *  Inport: '<Root>/VeFWDR_r_Axle_Ratio'
     */
    (void)Rte_Read_VeFWDR_r_Axle_Ratio_Value((&(VeTINC_r_Axle_Ratio)));

    /* Gain: '<S445>/Gain' incorporates:
     *  Inport: '<Root>/VeFWDR_r_TCaseRatio'
     */
    (void)Rte_Read_VeFWDR_r_TCaseRatio_Value((&(VeTINC_r_TCaseRatio)));

    /* Logic: '<S434>/AND' incorporates:
     *  Inport: '<Root>/VeVSDR_b_PrimNoFA'
     */
    (void)Rte_Read_VeVSDR_b_PrimNoFA_Value((&(VeTINC_b_PrimNoFA)));

    /* Logic: '<S433>/AND' incorporates:
     *  Inport: '<Root>/VePLTR_b_EstSlopeAngleFA'
     */
    (void)Rte_Read_VePLTR_b_EstSlopeAngleFA_Value((&(VeTINC_b_EstSlopeAngleFA)));

    /* Gain: '<S448>/Gain' incorporates:
     *  Inport: '<Root>/VePLTR_phi_EstSlopeAngle'
     */
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value((&(VeTINC_phi_EstSlopeAngle)));

    /* Gain: '<S447>/Gain' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransMinEngSpd'
     */
    (void)Rte_Read_VeOSMR_n_TransMinEngSpd_Value((&(VeTINC_n_TransMinEngSpd)));

    /* Gain: '<S444>/Gain' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value((&(VeTINC_n_PrimNoSgndFltrd)));

    /* Outputs for Function Call SubSystem: '<Root>/TINR_MedTEB' */
    /* SignalConversion generated from: '<S160>/VeTINR_e_TCMNeutPhsZeroTrqReq_CANC_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeTINR_e_TCMNeu =
        Rte_IrvRead_TINR_MedTEB_VeTINR_e_TCMNeutPhsZeroTrqReq_CANC_write_IRV();

    /* SignalConversion generated from: '<S160>/VeTINR_i_TCM_MinGearAllwd_read' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi =
        Rte_IrvRead_TINR_MedTEB_VeTINR_i_TCM_MinGearAllwd_write_IRV();

    /* SignalConversion generated from: '<S160>/VeTINR_i_TCM_MaxGearAllwd_read' incorporates:
     *  Merge: '<Root>/Merge_63'
     */
    rtb_TmpSignalConversionAtVeTINR_i_TCM_Ma =
        Rte_IrvRead_TINR_MedTEB_VeTINR_i_TCM_MaxGearAllwd_write_IRV();

    /* SignalConversion generated from: '<S160>/VaTINR_n_NiMinForLockUp_read' */
    Rte_IrvRead_TINR_MedTEB_VaTINR_n_NiMinForLockUp_write_IRV
        (rtb_TmpSignalConversionAtVaTINR_n_NiMinF);

    /* SignalConversion generated from: '<S160>/VaTINR_n_NiMinToOpen_read' */
    Rte_IrvRead_TINR_MedTEB_VaTINR_n_NiMinToOpen_write_IRV
        (rtb_TmpSignalConversionAtVaTINR_n_NiMinT);

    /* SignalConversion generated from: '<S160>/VaTINR_n_NiMinForLockUpCoast_read' */
    Rte_IrvRead_TINR_MedTEB_VaTINR_n_NiMinForLockUpCoast_write_IRV
        (rtb_TmpSignalConversionAtVaTINR_n_NiMi_c);

    /* SignalConversion generated from: '<S160>/VaTINR_n_NiMinToOpenCoast_read' */
    Rte_IrvRead_TINR_MedTEB_VaTINR_n_NiMinToOpenCoast_write_IRV
        (rtb_TmpSignalConversionAtVaTINR_n_NiM_em);

    /* SignalConversion generated from: '<S160>/VeTINR_b_TCMLimphomeFaultsFA_read' incorporates:
     *  Merge: '<Root>/Merge_59'
     */
    rtb_TmpSignalConversionAtVeTINR_b_TCMLim =
        Rte_IrvRead_TINR_MedTEB_VeTINR_b_TCMLimphomeFaultsFA_write_IRV();

    /* SignalConversion generated from: '<S160>/VeTINR_e_TransAdpStatus_read' incorporates:
     *  Merge: '<Root>/Merge_112'
     */
    rtb_TmpSignalConversionAtVeTINR_e_TransA =
        Rte_IrvRead_TINR_MedTEB_VeTINR_e_TransAdpStatus_write_IRV();

    /* SignalConversion generated from: '<S160>/VeTINR_r_TransTrqRatio_read' incorporates:
     *  Merge: '<Root>/Merge_101'
     */
    rtb_TmpSignalConversionAtVeTINR_r_TransT =
        Rte_IrvRead_TINR_MedTEB_VeTINR_r_TransTrqRatio_write_IRV();

    /* SignalConversion generated from: '<S160>/VeTINR_b_DrvLnTrqRq_Axle_read' incorporates:
     *  Merge: '<Root>/Merge_99_Irv'
     */
    rtb_TmpSignalConversionAtVeTINR_b_DrvLnT =
        Rte_IrvRead_TINR_MedTEB_VeTINR_b_DrvLnTrqRq_Axle_write_IRV();

    /* S-Function (fcgen): '<S160>/FcnCallGen' incorporates:
     *  SubSystem: '<S160>/TINC_MedTEB'
     */
    /* Switch: '<S356>/Switch' incorporates:
     *  Constant: '<S441>/Calib'
     *  Switch: '<S356>/Switch1'
     */
    if (KeTINR_b_TCMLimphomeFaultsOvrrdEnbl)
    {
        /* Switch: '<S356>/Switch' incorporates:
         *  Constant: '<S443>/Calib'
         */
        VeTINC_d_TCMLimphomeFaults = KeTINR_d_TCMLimphomeFaultsOvrrdVal;

        /* Switch: '<S356>/Switch1' incorporates:
         *  Constant: '<S443>/Calib'
         */
        VeTINC_d_TCMLimphomeFaultsC1CAN = KeTINR_d_TCMLimphomeFaultsOvrrdVal;
    }
    else
    {
        /* Switch: '<S356>/Switch' incorporates:
         *  Merge: '<Root>/Merge_54'
         *  SignalConversion generated from: '<S160>/VeTINR_d_TCMLimphomeFaults_read'
         */
        VeTINC_d_TCMLimphomeFaults =
            Rte_IrvRead_TINR_MedTEB_VeTINR_d_TCMLimphomeFaults_write_IRV();

        /* Switch: '<S356>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_92'
         *  SignalConversion generated from: '<S160>/VeTINR_d_TCMLimphomeFaultsC1CAN_read'
         */
        VeTINC_d_TCMLimphomeFaultsC1CAN =
            Rte_IrvRead_TINR_MedTEB_VeTINR_d_TCMLimphomeFaultsC1CAN_write_IRV();
    }

    /* End of Switch: '<S356>/Switch' */

    /* Outputs for Atomic SubSystem: '<S354>/TINC_Cntrls_Input' */
    /* Logic: '<S362>/Logical2' incorporates:
     *  Merge: '<Root>/Merge_57'
     *  Merge: '<Root>/Merge_72'
     *  Merge: '<Root>/Merge_75'
     *  Merge: '<Root>/Merge_77'
     *  SignalConversion generated from: '<S160>/VeTINR_b_NiMinForLockUpCoastFA_read'
     *  SignalConversion generated from: '<S160>/VeTINR_b_NiMinForLockUpFA_read'
     *  SignalConversion generated from: '<S160>/VeTINR_b_NiMinToOpenCoastFA_read'
     *  SignalConversion generated from: '<S160>/VeTINR_b_NiMinToOpenFA_read'
     */
    rtb_Logical2_j =
        ((((Rte_IrvRead_TINR_MedTEB_VeTINR_b_NiMinForLockUpFA_write_IRV()) ||
           (Rte_IrvRead_TINR_MedTEB_VeTINR_b_NiMinToOpenFA_write_IRV())) ||
          (Rte_IrvRead_TINR_MedTEB_VeTINR_b_NiMinForLockUpCoastFA_write_IRV())) ||
         (Rte_IrvRead_TINR_MedTEB_VeTINR_b_NiMinToOpenCoastFA_write_IRV()));

    /* Sum: '<S362>/Sum1' incorporates:
     *  Constant: '<S399>/Calib'
     */
    rtb_Sum1[0] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[0];
    rtb_Sum1[1] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[1];
    rtb_Sum1[2] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[2];
    rtb_Sum1[3] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[3];
    rtb_Sum1[4] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[4];
    rtb_Sum1[5] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[5];
    rtb_Sum1[6] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[6];
    rtb_Sum1[7] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[7];
    rtb_Sum1[8] = VeTINC_n_TransMinEngSpd + KaTINR_n_ILEOpenIdleOffset[8];

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising' */
    /* Logic: '<S395>/OR1' incorporates:
     *  UnitDelay: '<S395>/Unit Delay'
     */
    rtb_OR1 = !TINR_ac_DW.UnitDelay_DSTATE_iv;

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    TINR_ac_DW.UnitDelay_DSTATE_iv = rtb_Logical2_j;

    /* End of Outputs for SubSystem: '<S362>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S362>/Gear' incorporates:
     *  ActionPort: '<S396>/Action Port'
     */
    for (i = 0; i < 9; i++)
    {
        /* Sum: '<S362>/Sum' */
        rtb_Sum1_c = rtb_Sum1[i];

        /* Sum: '<S362>/Sum' incorporates:
         *  Constant: '<S398>/Calib'
         */
        rtb_Sum = rtb_Sum1_c + KaTINR_n_ILELockUpOpenOffset[(i)];

        /* If: '<S362>/If' incorporates:
         *  Constant: '<S410>/Calib'
         *  Switch: '<S418>/Switch1'
         */
        if (rtb_Logical2_j)
        {
            /* Outputs for IfAction SubSystem: '<S362>/Init_SNA' incorporates:
             *  ActionPort: '<S397>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S397>/CounterResetEnabled' */
            /* Outputs for Atomic SubSystem: '<S362>/EdgeRising' */
            /* Switch: '<S420>/Switch' incorporates:
             *  Constant: '<S420>/Constant Value1'
             *  Constant: '<S420>/Constant Value2'
             *  Logic: '<S395>/AND'
             *  Sum: '<S420>/Subtraction'
             *  UnitDelay: '<S420>/Unit Delay'
             */
            if (rtb_OR1)
            {
                TINR_ac_DW.UnitDelay_DSTATE_b[i] = 0U;
            }
            else
            {
                TINR_ac_DW.UnitDelay_DSTATE_b[i] = (uint16)(((uint32)
                    TINR_ac_DW.UnitDelay_DSTATE_b[i]) + 1U);
            }

            /* End of Switch: '<S420>/Switch' */
            /* End of Outputs for SubSystem: '<S362>/EdgeRising' */
            /* End of Outputs for SubSystem: '<S397>/CounterResetEnabled' */

            /* Switch: '<S397>/Switch' incorporates:
             *  Constant: '<S421>/Calib'
             *  Constant: '<S422>/Calib'
             *  Logic: '<S397>/Logical'
             *  RelationalOperator: '<S397>/Comparison6'
             *  Switch: '<S397>/Switch5'
             *  Switch: '<S397>/Switch6'
             *  Switch: '<S397>/Switch7'
             *  Switch: '<S420>/Switch'
             *  UnitDelay: '<S420>/Unit Delay'
             */
            if ((((float32)TINR_ac_DW.UnitDelay_DSTATE_b[i]) >=
                    KeTINR_Cnt_InitCompVal) && (KeTINR_b_EnableInitCompVal))
            {
                /* Merge: '<S362>/Merge' incorporates:
                 *  Logic: '<S397>/Logical'
                 */
                TINR_ac_DW.VaTINC_n_NiMinToOpen_DS[i] = rtb_Sum1_c;

                /* Merge: '<S362>/Merge1' incorporates:
                 *  Logic: '<S397>/Logical'
                 */
                TINR_ac_DW.VaTINC_n_NiMinForLockUp_DS[i] = rtb_Sum;

                /* Merge: '<S362>/Merge2' incorporates:
                 *  Logic: '<S397>/Logical'
                 */
                TINR_ac_DW.VaTINC_n_NiMinToOpenCoast_DS[i] = rtb_Sum1_c;

                /* Merge: '<S362>/Merge3' incorporates:
                 *  Logic: '<S397>/Logical'
                 */
                TINR_ac_DW.VaTINC_n_NiMinForLockUpCoast_DS[i] = rtb_Sum;
            }

            /* End of Switch: '<S397>/Switch' */
            /* End of Outputs for SubSystem: '<S362>/Init_SNA' */
        }
        else
        {
            if (KaTINR_b_DsblTCMNiMinToOpen[(i)])
            {
                /* Switch: '<S418>/Switch1' incorporates:
                 *  Merge: '<S362>/Merge'
                 */
                TINR_ac_DW.VaTINC_n_NiMinToOpen_DS[i] = rtb_Sum1_c;
            }
            else
            {
                /* Merge: '<S362>/Merge' incorporates:
                 *  SignalConversion generated from: '<S160>/VaTINR_n_NiMinToOpen_read'
                 *  Switch: '<S418>/Switch1'
                 */
                TINR_ac_DW.VaTINC_n_NiMinToOpen_DS[i] =
                    rtb_TmpSignalConversionAtVaTINR_n_NiMinT[i];
            }

            /* Switch: '<S419>/Switch1' incorporates:
             *  Constant: '<S411>/Calib'
             */
            if (KaTINR_b_DsblTCMNiMinToOpen_Coast[(i)])
            {
                /* Merge: '<S362>/Merge2' */
                TINR_ac_DW.VaTINC_n_NiMinToOpenCoast_DS[i] = rtb_Sum1_c;
            }
            else
            {
                /* Merge: '<S362>/Merge2' incorporates:
                 *  SignalConversion generated from: '<S160>/VaTINR_n_NiMinToOpenCoast_read'
                 */
                TINR_ac_DW.VaTINC_n_NiMinToOpenCoast_DS[i] =
                    rtb_TmpSignalConversionAtVaTINR_n_NiM_em[i];
            }

            /* End of Switch: '<S419>/Switch1' */

            /* Switch: '<S416>/Switch1' incorporates:
             *  Constant: '<S409>/Calib'
             */
            if (KaTINR_b_DsblTCMNiMinForLockUp_Coast[(i)])
            {
                /* Merge: '<S362>/Merge3' */
                TINR_ac_DW.VaTINC_n_NiMinForLockUpCoast_DS[i] = rtb_Sum;
            }
            else
            {
                /* Merge: '<S362>/Merge3' incorporates:
                 *  SignalConversion generated from: '<S160>/VaTINR_n_NiMinForLockUpCoast_read'
                 */
                TINR_ac_DW.VaTINC_n_NiMinForLockUpCoast_DS[i] =
                    rtb_TmpSignalConversionAtVaTINR_n_NiMi_c[i];
            }

            /* End of Switch: '<S416>/Switch1' */

            /* Switch: '<S417>/Switch1' incorporates:
             *  Constant: '<S408>/Calib'
             */
            if (KaTINR_b_DsblTCMNiMinForLockUp[(i)])
            {
                /* Merge: '<S362>/Merge1' */
                TINR_ac_DW.VaTINC_n_NiMinForLockUp_DS[i] = rtb_Sum;
            }
            else
            {
                /* Merge: '<S362>/Merge1' incorporates:
                 *  SignalConversion generated from: '<S160>/VaTINR_n_NiMinForLockUp_read'
                 */
                TINR_ac_DW.VaTINC_n_NiMinForLockUp_DS[i] =
                    rtb_TmpSignalConversionAtVaTINR_n_NiMinF[i];
            }

            /* End of Switch: '<S417>/Switch1' */
        }

        /* End of If: '<S362>/If' */

        /* Switch: '<S362>/Switch1' incorporates:
         *  Constant: '<S404>/Calib'
         */
        if (KeTINR_b_OvrdNiMinForLockUp)
        {
            /* Switch: '<S362>/Switch1' incorporates:
             *  Constant: '<S400>/Calib'
             */
            rtb_Sum1_c = KaTINR_n_NiMinForLockUp[(i)];
        }
        else
        {
            /* Switch: '<S362>/Switch1' incorporates:
             *  Merge: '<S362>/Merge1'
             */
            rtb_Sum1_c = TINR_ac_DW.VaTINC_n_NiMinForLockUp_DS[i];
        }

        /* End of Switch: '<S362>/Switch1' */

        /* Switch: '<S362>/Switch2' incorporates:
         *  Constant: '<S407>/Calib'
         */
        if (KeTINR_b_OvrdNiMinToOpen_Coast)
        {
            /* Switch: '<S362>/Switch2' incorporates:
             *  Constant: '<S403>/Calib'
             */
            rtb_Sum = KaTINR_n_NiMinToOpen_Coast[(i)];
        }
        else
        {
            /* Switch: '<S362>/Switch2' incorporates:
             *  Merge: '<S362>/Merge2'
             */
            rtb_Sum = TINR_ac_DW.VaTINC_n_NiMinToOpenCoast_DS[i];
        }

        /* End of Switch: '<S362>/Switch2' */

        /* Switch: '<S362>/Switch3' incorporates:
         *  Constant: '<S406>/Calib'
         */
        if (KeTINR_b_OvrdNiMinToOpen)
        {
            /* Switch: '<S362>/Switch3' incorporates:
             *  Constant: '<S402>/Calib'
             */
            rtb_TmpSignalConversionAtVaTINR_n_NiM_hi = KaTINR_n_NiMinToOpen[(i)];
        }
        else
        {
            /* Switch: '<S362>/Switch3' incorporates:
             *  Merge: '<S362>/Merge'
             */
            rtb_TmpSignalConversionAtVaTINR_n_NiM_hi =
                TINR_ac_DW.VaTINC_n_NiMinToOpen_DS[i];
        }

        /* End of Switch: '<S362>/Switch3' */

        /* Switch: '<S362>/Switch4' incorporates:
         *  Constant: '<S405>/Calib'
         */
        if (KeTINR_b_OvrdNiMinForLockUp_Coast)
        {
            /* Switch: '<S362>/Switch4' incorporates:
             *  Constant: '<S401>/Calib'
             */
            rtb_TmpSignalConversionAtVaTINR_n_NiMi_g =
                KaTINR_n_NiMinForLockUp_Coast[(i)];
        }
        else
        {
            /* Switch: '<S362>/Switch4' incorporates:
             *  Merge: '<S362>/Merge3'
             */
            rtb_TmpSignalConversionAtVaTINR_n_NiMi_g =
                TINR_ac_DW.VaTINC_n_NiMinForLockUpCoast_DS[i];
        }

        /* End of Switch: '<S362>/Switch4' */

        /* Switch: '<S362>/Switch2' */
        rtb_TmpSignalConversionAtVaTINR_n_NiMinT[i] = rtb_Sum;

        /* Switch: '<S362>/Switch4' */
        rtb_TmpSignalConversionAtVaTINR_n_NiM_em[i] =
            rtb_TmpSignalConversionAtVaTINR_n_NiMi_g;

        /* Switch: '<S362>/Switch3' */
        rtb_TmpSignalConversionAtVaTINR_n_NiMi_c[i] =
            rtb_TmpSignalConversionAtVaTINR_n_NiM_hi;

        /* Switch: '<S362>/Switch1' */
        rtb_TmpSignalConversionAtVaTINR_n_NiMinF[i] = rtb_Sum1_c;
    }

    /* End of Outputs for SubSystem: '<S362>/Gear' */

    /* Logic: '<S361>/Logical4' incorporates:
     *  Constant: '<S385>/Calib'
     *  Logic: '<S361>/Logical5'
     *  Merge: '<Root>/Merge_65'
     *  RelationalOperator: '<S361>/Comparison1'
     *  SignalConversion generated from: '<S160>/VeTINR_b_TCM_MaxGearAllwdFA_read'
     */
    rtb_OR1 = ((!Rte_IrvRead_TINR_MedTEB_VeTINR_b_TCM_MaxGearAllwdFA_write_IRV())
               && (rtb_TmpSignalConversionAtVeTINR_i_TCM_Ma !=
                   KeTINR_i_TCM_MaxGearAllwdInit));

    /* UnitDelay: '<S372>/Unit Delay' incorporates:
     *  Constant: '<S386>/Calib'
     *  Logic: '<S361>/Logical1'
     *  Logic: '<S361>/Logical3'
     *  Merge: '<Root>/Merge_58'
     *  RelationalOperator: '<S361>/Comparison4'
     *  SignalConversion generated from: '<S160>/VeTINR_b_TCM_MinGearAllwdFA_read'
     */
    rtb_Logical2_j =
        ((!Rte_IrvRead_TINR_MedTEB_VeTINR_b_TCM_MinGearAllwdFA_write_IRV()) &&
         (rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi !=
          KeTINR_i_TCM_MinGearAllwdInit));

    /* Outputs for IfAction SubSystem: '<S361>/MaxMinGearFA' incorporates:
     *  ActionPort: '<S390>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S361>/MaxGearFA' incorporates:
     *  ActionPort: '<S389>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S361>/MinMaxGearFA' incorporates:
     *  ActionPort: '<S392>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S361>/MinGearFA' incorporates:
     *  ActionPort: '<S391>/Action Port'
     */
    /* If: '<S361>/If1' incorporates:
     *  Constant: '<S382>/Calib'
     *  Constant: '<S389>/Constant Value'
     *  Constant: '<S390>/Constant Value'
     *  Constant: '<S391>/Constant Value'
     *  Constant: '<S392>/Constant Value'
     *  DataTypeConversion: '<S361>/Data Type Conversion1'
     *  DataTypeConversion: '<S438>/DataTypeConversion'
     *  If: '<S361>/If2'
     *  Selector: '<S361>/Selector1'
     *  Sum: '<S389>/Sum'
     *  Sum: '<S390>/Sum'
     *  Sum: '<S391>/Sum1'
     *  Sum: '<S392>/Sum1'
     */
    rtb_Selector1_j = (sint16)(KaTINR_i_TgtGrMaxGrMap[(VeTINC_e_TargetGear)] - 1);

    /* End of Outputs for SubSystem: '<S361>/MinGearFA' */
    /* End of Outputs for SubSystem: '<S361>/MinMaxGearFA' */
    /* End of Outputs for SubSystem: '<S361>/MaxGearFA' */
    /* End of Outputs for SubSystem: '<S361>/MaxMinGearFA' */
    if (rtb_OR1)
    {
        /* Outputs for IfAction SubSystem: '<S361>/PassThrough2' incorporates:
         *  ActionPort: '<S394>/Action Port'
         */
        /* Merge: '<S361>/Merge1' incorporates:
         *  Inport: '<S394>/VeTINI_i_TCM_MaxGearAllwd'
         */
        rtb_Merge1 = rtb_TmpSignalConversionAtVeTINR_i_TCM_Ma;

        /* End of Outputs for SubSystem: '<S361>/PassThrough2' */
    }
    else if (rtb_Logical2_j)
    {
        /* Selector: '<S361>/Selector2' incorporates:
         *  Constant: '<S381>/Calib'
         *  DataTypeConversion: '<S361>/Data Type Conversion'
         *  DataTypeConversion: '<S437>/DataTypeConversion'
         */
        rtb_Merge1 = KaTINR_i_ActGrMinGrMap[(sint16)VeTINC_e_ActualGear];

        /* Outputs for IfAction SubSystem: '<S361>/MaxGearFA' incorporates:
         *  ActionPort: '<S389>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S361>/MaxMinGearFA' incorporates:
         *  ActionPort: '<S390>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S361>/MinMaxGearFA' incorporates:
         *  ActionPort: '<S392>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S361>/MinGearFA' incorporates:
         *  ActionPort: '<S391>/Action Port'
         */
        /* MinMax: '<S389>/MinMax2' */
        if (rtb_Merge1 <= ((sint16)(rtb_Selector1_j + 2)))
        {
            rtb_Merge1 = (sint16)(rtb_Selector1_j + 2);
        }

        /* End of Outputs for SubSystem: '<S361>/MinGearFA' */
        /* End of Outputs for SubSystem: '<S361>/MinMaxGearFA' */
        /* End of Outputs for SubSystem: '<S361>/MaxMinGearFA' */
        if (rtb_Merge1 <= rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi)
        {
            /* Merge: '<S361>/Merge1' */
            rtb_Merge1 = rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi;
        }

        /* End of MinMax: '<S389>/MinMax2' */
        /* End of Outputs for SubSystem: '<S361>/MaxGearFA' */
    }
    else
    {
        /* Selector: '<S361>/Selector2' incorporates:
         *  Constant: '<S381>/Calib'
         *  DataTypeConversion: '<S361>/Data Type Conversion'
         *  DataTypeConversion: '<S437>/DataTypeConversion'
         */
        rtb_Merge1 = KaTINR_i_ActGrMinGrMap[(sint16)VeTINC_e_ActualGear];

        /* Outputs for IfAction SubSystem: '<S361>/MaxMinGearFA' incorporates:
         *  ActionPort: '<S390>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S361>/MaxGearFA' incorporates:
         *  ActionPort: '<S389>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S361>/MinMaxGearFA' incorporates:
         *  ActionPort: '<S392>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S361>/MinGearFA' incorporates:
         *  ActionPort: '<S391>/Action Port'
         */
        /* MinMax: '<S390>/MinMax2' */
        if (rtb_Merge1 <= ((sint16)(rtb_Selector1_j + 2)))
        {
            /* Merge: '<S361>/Merge1' */
            rtb_Merge1 = (sint16)(rtb_Selector1_j + 2);
        }

        /* End of MinMax: '<S390>/MinMax2' */
        /* End of Outputs for SubSystem: '<S361>/MinGearFA' */
        /* End of Outputs for SubSystem: '<S361>/MinMaxGearFA' */
        /* End of Outputs for SubSystem: '<S361>/MaxGearFA' */
        /* End of Outputs for SubSystem: '<S361>/MaxMinGearFA' */
    }

    /* End of If: '<S361>/If1' */

    /* If: '<S361>/If2' */
    if (rtb_Logical2_j)
    {
        /* Outputs for IfAction SubSystem: '<S361>/PassThrough' incorporates:
         *  ActionPort: '<S393>/Action Port'
         */
        /* Merge: '<S361>/Merge' incorporates:
         *  Inport: '<S393>/VeTINI_i_TCM_MinGearAllwd'
         */
        rtb_Selector1_j = rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi;

        /* End of Outputs for SubSystem: '<S361>/PassThrough' */
    }
    else if (rtb_OR1)
    {
        /* Selector: '<S361>/Selector2' incorporates:
         *  Constant: '<S381>/Calib'
         *  DataTypeConversion: '<S361>/Data Type Conversion'
         *  DataTypeConversion: '<S437>/DataTypeConversion'
         */
        rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi = KaTINR_i_ActGrMinGrMap
            [(sint16)VeTINC_e_ActualGear];

        /* Outputs for IfAction SubSystem: '<S361>/MinGearFA' incorporates:
         *  ActionPort: '<S391>/Action Port'
         */
        /* MinMax: '<S391>/MinMax2' incorporates:
         *  Sum: '<S391>/Sum1'
         */
        if (rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi < rtb_Selector1_j)
        {
            rtb_Selector1_j = rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi;
        }

        if (rtb_Selector1_j >= rtb_TmpSignalConversionAtVeTINR_i_TCM_Ma)
        {
            /* Merge: '<S361>/Merge' */
            rtb_Selector1_j = rtb_TmpSignalConversionAtVeTINR_i_TCM_Ma;
        }

        /* End of MinMax: '<S391>/MinMax2' */
        /* End of Outputs for SubSystem: '<S361>/MinGearFA' */
    }
    else
    {
        /* Selector: '<S361>/Selector2' incorporates:
         *  Constant: '<S381>/Calib'
         *  DataTypeConversion: '<S361>/Data Type Conversion'
         *  DataTypeConversion: '<S437>/DataTypeConversion'
         */
        rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi = KaTINR_i_ActGrMinGrMap
            [(sint16)VeTINC_e_ActualGear];

        /* Outputs for IfAction SubSystem: '<S361>/MinMaxGearFA' incorporates:
         *  ActionPort: '<S392>/Action Port'
         */
        /* MinMax: '<S392>/MinMax2' incorporates:
         *  Sum: '<S392>/Sum1'
         */
        if (rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi < rtb_Selector1_j)
        {
            /* Merge: '<S361>/Merge' */
            rtb_Selector1_j = rtb_TmpSignalConversionAtVeTINR_i_TCM_Mi;
        }

        /* End of MinMax: '<S392>/MinMax2' */
        /* End of Outputs for SubSystem: '<S361>/MinMaxGearFA' */
    }

    /* Outputs for Atomic SubSystem: '<S361>/Limiter' */
    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S383>/Calib'
     *  RelationalOperator: '<S387>/Relational Operator'
     */
    if (KeTINR_i_GearMaxAvl < rtb_Selector1_j)
    {
        /* Switch: '<S388>/Switch1' */
        rtb_Selector1_j = KeTINR_i_GearMaxAvl;
    }

    /* End of Switch: '<S387>/Switch1' */

    /* Switch: '<S387>/Switch' incorporates:
     *  Constant: '<S384>/Calib'
     *  RelationalOperator: '<S387>/Relational Operator1'
     */
    if (rtb_Selector1_j > KeTINR_i_GearMinAvl)
    {
        /* SignalConversion generated from: '<S160>/LeTINC_i_MinGearAllwd' incorporates:
         *  Outport: '<Root>/VeTINR_i_MinGearAllwd'
         */
        (void)Rte_Write_VeTINR_i_MinGearAllwd_Value(rtb_Selector1_j);
    }
    else
    {
        /* SignalConversion generated from: '<S160>/LeTINC_i_MinGearAllwd' incorporates:
         *  Outport: '<Root>/VeTINR_i_MinGearAllwd'
         */
        (void)Rte_Write_VeTINR_i_MinGearAllwd_Value(KeTINR_i_GearMinAvl);
    }

    /* End of Switch: '<S387>/Switch' */
    /* End of Outputs for SubSystem: '<S361>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S361>/Limiter1' */
    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S383>/Calib'
     *  RelationalOperator: '<S388>/Relational Operator'
     */
    if (KeTINR_i_GearMaxAvl < rtb_Merge1)
    {
        /* Switch: '<S388>/Switch1' */
        rtb_Selector1_j = KeTINR_i_GearMaxAvl;
    }
    else
    {
        /* Switch: '<S388>/Switch1' */
        rtb_Selector1_j = rtb_Merge1;
    }

    /* End of Switch: '<S388>/Switch1' */
    /* End of Outputs for SubSystem: '<S361>/Limiter1' */

    /* Switch: '<S363>/Switch' incorporates:
     *  Constant: '<S425>/Calib'
     *  Constant: '<S427>/Calib'
     *  Switch: '<S363>/Switch1'
     */
    if (KeTINR_b_PwrFlowStatusOvrrdEnbl)
    {
        /* Switch: '<S363>/Switch' incorporates:
         *  Constant: '<S426>/Calib'
         */
        rtb_OR1 = KeTINR_b_PwrFlowStatusOvrrdVal;
    }
    else
    {
        if (KeTINR_b_SlctClchLrn_TransAdp)
        {
            /* Switch: '<S363>/Switch1' incorporates:
             *  Constant: '<S423>/Calib'
             *  DataTypeConversion: '<S363>/Data Type Conversion'
             *  DataTypeConversion: '<S436>/DataTypeConversion'
             *  Selector: '<S363>/Selector'
             */
            rtb_Logical2_j = KaTINR_b_PwrFlowStClchLrnType
                [(VeTINC_e_ClutchLrnType)];
        }
        else
        {
            /* Switch: '<S363>/Switch1' incorporates:
             *  Constant: '<S424>/Calib'
             *  DataTypeConversion: '<S363>/Data Type Conversion1'
             *  Selector: '<S363>/Selector1'
             *  SignalConversion generated from: '<S160>/VeTINR_e_TransAdpStatus_read'
             */
            rtb_Logical2_j = KaTINR_b_PwrFlowStTransAdpSts
                [(rtb_TmpSignalConversionAtVeTINR_e_TransA)];
        }

        /* Switch: '<S363>/Switch' incorporates:
         *  Logic: '<S363>/Logical'
         *  Merge: '<Root>/Merge_79'
         *  SignalConversion generated from: '<S160>/VeTINR_b_PwrFlowStatus_read'
         */
        rtb_OR1 = (rtb_Logical2_j ||
                   (Rte_IrvRead_TINR_MedTEB_VeTINR_b_PwrFlowStatus_write_IRV()));
    }

    /* End of Switch: '<S363>/Switch' */

    /* Outputs for Atomic SubSystem: '<S360>/EdgeFalling' */
    /* UnitDelay: '<S372>/Unit Delay' */
    rtb_Logical2_j = TINR_ac_DW.UnitDelay_DSTATE_ih;

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    TINR_ac_DW.UnitDelay_DSTATE_ih = VeTINC_b_EstSlopeAngleFA;

    /* Outputs for Atomic SubSystem: '<S360>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S371>/Switch1' incorporates:
     *  Logic: '<S360>/Logical2'
     *  Logic: '<S372>/AND'
     *  Logic: '<S372>/OR1'
     *  Switch: '<S371>/Switch2'
     */
    if ((!VeTINC_b_EstSlopeAngleFA) && rtb_Logical2_j)
    {
        /* Switch: '<S371>/Switch1' */
        VeTINC_phi_SlopeAngFiltd = VeTINC_phi_EstSlopeAngle;
    }
    else
    {
        if (!VeTINC_b_EstSlopeAngleFA)
        {
            /* Switch: '<S371>/Switch2' incorporates:
             *  Constant: '<S376>/Calib'
             *  Product: '<S371>/Multiplication'
             *  Sum: '<S371>/Subtraction'
             *  Sum: '<S371>/Summation'
             *  Switch: '<S371>/Switch1'
             *  UnitDelay: '<S371>/Unit Delay'
             */
            VeTINC_phi_SlopeAngFiltd = ((VeTINC_phi_EstSlopeAngle -
                VeTINC_phi_SlopeAngFiltd) * KeTINR_k_EstSlopeAng_Flt) +
                VeTINC_phi_SlopeAngFiltd;
        }
    }

    /* End of Switch: '<S371>/Switch1' */
    /* End of Outputs for SubSystem: '<S360>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S371>/Limiter' */
    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S374>/Calib'
     *  RelationalOperator: '<S379>/Relational Operator'
     */
    if (KeTINR_k_EstSlopeAngMax < VeTINC_phi_SlopeAngFiltd)
    {
        /* Switch: '<S379>/Switch1' */
        VeTINC_phi_SlopeAngFiltd = KeTINR_k_EstSlopeAngMax;
    }

    /* End of Switch: '<S379>/Switch1' */

    /* Switch: '<S379>/Switch' incorporates:
     *  Constant: '<S375>/Calib'
     *  RelationalOperator: '<S379>/Relational Operator1'
     */
    if (VeTINC_phi_SlopeAngFiltd <= KeTINR_k_EstSlopeAngMin)
    {
        /* Switch: '<S379>/Switch' */
        VeTINC_phi_SlopeAngFiltd = KeTINR_k_EstSlopeAngMin;
    }

    /* End of Switch: '<S379>/Switch' */
    /* End of Outputs for SubSystem: '<S371>/Limiter' */
    /* End of Outputs for SubSystem: '<S360>/DigitalLowpassResetEnabled2' */

    /* Product: '<S365>/Product' */
    VeTINC_r_TCMTransTrqRatioRaw = (VeTINC_r_TCaseRatio * VeTINC_r_Axle_Ratio) *
        rtb_TmpSignalConversionAtVeTINR_r_TransT;

    /* Switch: '<S365>/Switch2' incorporates:
     *  Logic: '<S365>/Logical1'
     *  Logic: '<S365>/Logical2'
     *  Merge: '<Root>/Merge_88'
     *  Merge: '<Root>/Merge_91'
     *  SignalConversion generated from: '<S160>/VeTINR_b_DriveLineRatioCanCFA_read'
     *  SignalConversion generated from: '<S160>/VeTINR_b_DriveLineRatioEptFA_read'
     *  Switch: '<S365>/Switch3'
     */
    if (!Rte_IrvRead_TINR_MedTEB_VeTINR_b_DriveLineRatioEptFA_write_IRV())
    {
        /* Switch: '<S365>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_87'
         *  SignalConversion generated from: '<S160>/VeTINR_r_DriveLineRatioEpt_read'
         */
        VeTINC_r_DrvLineRatio =
            Rte_IrvRead_TINR_MedTEB_VeTINR_r_DriveLineRatioEpt_write_IRV();
    }
    else if (!Rte_IrvRead_TINR_MedTEB_VeTINR_b_DriveLineRatioCanCFA_write_IRV())
    {
        /* Switch: '<S365>/Switch3' incorporates:
         *  Merge: '<Root>/Merge_89'
         *  SignalConversion generated from: '<S160>/VeTINR_r_DriveLineRatioCanC_read'
         *  Switch: '<S365>/Switch2'
         */
        VeTINC_r_DrvLineRatio =
            Rte_IrvRead_TINR_MedTEB_VeTINR_r_DriveLineRatioCanC_write_IRV();
    }
    else
    {
        /* Switch: '<S365>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_87'
         *  SignalConversion generated from: '<S160>/VeTINR_r_DriveLineRatioEpt_read'
         */
        VeTINC_r_DrvLineRatio =
            Rte_IrvRead_TINR_MedTEB_VeTINR_r_DriveLineRatioEpt_write_IRV();
    }

    /* End of Switch: '<S365>/Switch2' */

    /* Switch: '<S365>/Switch4' incorporates:
     *  Constant: '<S428>/Calib'
     *  Constant: '<S431>/Calib'
     *  Switch: '<S365>/Switch1'
     */
    if (HeTINR_b_TCMTransTrqRatioMgu)
    {
        /* SignalConversion generated from: '<S160>/LeTINC_r_TCMTransTrqRatio' incorporates:
         *  Outport: '<Root>/VeTINR_r_TCMTransTrqRatio'
         */
        (void)Rte_Write_VeTINR_r_TCMTransTrqRatio_Value
            (rtb_TmpSignalConversionAtVeTINR_r_TransT);
    }
    else
    {
        if (KeTINR_b_UseTransTrqRatio)
        {
            /* Switch: '<S365>/Switch1' */
            rtb_TmpSignalConversionAtVeTINR_r_TransT =
                VeTINC_r_TCMTransTrqRatioRaw;
        }
        else
        {
            /* Switch: '<S365>/Switch1' */
            rtb_TmpSignalConversionAtVeTINR_r_TransT = VeTINC_r_DrvLineRatio;
        }

        /* Outputs for Atomic SubSystem: '<S365>/Limiter' */
        /* Switch: '<S432>/Switch1' incorporates:
         *  Constant: '<S429>/Calib'
         *  RelationalOperator: '<S432>/Relational Operator'
         */
        if (HeTINR_r_TCMTransTrqRatioMax <
                rtb_TmpSignalConversionAtVeTINR_r_TransT)
        {
            /* Switch: '<S432>/Switch1' */
            rtb_TmpSignalConversionAtVeTINR_r_TransT =
                HeTINR_r_TCMTransTrqRatioMax;
        }

        /* End of Switch: '<S432>/Switch1' */

        /* Switch: '<S432>/Switch' incorporates:
         *  Constant: '<S430>/Calib'
         *  RelationalOperator: '<S432>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTINR_r_TransT >
                HeTINR_r_TCMTransTrqRatioMin)
        {
            /* SignalConversion generated from: '<S160>/LeTINC_r_TCMTransTrqRatio' incorporates:
             *  Outport: '<Root>/VeTINR_r_TCMTransTrqRatio'
             */
            (void)Rte_Write_VeTINR_r_TCMTransTrqRatio_Value
                (rtb_TmpSignalConversionAtVeTINR_r_TransT);
        }
        else
        {
            /* SignalConversion generated from: '<S160>/LeTINC_r_TCMTransTrqRatio' incorporates:
             *  Outport: '<Root>/VeTINR_r_TCMTransTrqRatio'
             */
            (void)Rte_Write_VeTINR_r_TCMTransTrqRatio_Value
                (HeTINR_r_TCMTransTrqRatioMin);
        }

        /* End of Switch: '<S432>/Switch' */
        /* End of Outputs for SubSystem: '<S365>/Limiter' */
    }

    /* End of Switch: '<S365>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S359>/TimerRetriggerResetEnabled' */
    /* Switch: '<S370>/Switch2' incorporates:
     *  Constant: '<S367>/Calib'
     *  Constant: '<S368>/Calib'
     *  Constant: '<S369>/Calib'
     *  Logic: '<S359>/LogicalOperator'
     *  Logic: '<S359>/LogicalOperator1'
     *  RelationalOperator: '<S359>/RelationalOperator'
     *  RelationalOperator: '<S359>/RelationalOperator1'
     *  Switch: '<S370>/Switch1'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeTINR_b_DrvLnT < KeTINR_M_DrvLnTrqRq_Axle_Max)
        && (rtb_TmpSignalConversionAtVeTINR_b_DrvLnT >
            KeTINR_M_DrvLnTrqRq_Axle_Min))
    {
        TINR_ac_DW.UnitDelay_DSTATE_d = KeTINR_t_DrvLnTrqRq_Axle_OOR_Tmr;
    }
    else
    {
        /* UnitDelay: '<S370>/Unit Delay' incorporates:
         *  Constant: '<S366>/Calib'
         *  Constant: '<S370>/Constant Value4'
         *  MinMax: '<S370>/Maximum'
         *  Sum: '<S370>/Subtraction'
         *  Switch: '<S370>/Switch2'
         */
        TINR_ac_DW.UnitDelay_DSTATE_d = fmaxf(TINR_ac_DW.UnitDelay_DSTATE_d -
            HeTINR_t_MedTEB, 0.0F);
    }

    /* End of Switch: '<S370>/Switch2' */
    /* End of Outputs for SubSystem: '<S359>/TimerRetriggerResetEnabled' */
    /* End of Outputs for SubSystem: '<S354>/TINC_Cntrls_Input' */

    /* Switch: '<S356>/Switch2' incorporates:
     *  Constant: '<S442>/Calib'
     */
    if (KeTINR_b_TCMNeutPhsZeroTrqReqCANSlct)
    {
        /* Switch: '<S356>/Switch7' incorporates:
         *  Merge: '<Root>/Merge_116'
         *  SignalConversion generated from: '<S160>/VeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA_read'
         */
        if (Rte_IrvRead_TINR_MedTEB_VeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA_write_IRV
                ())
        {
            /* Switch: '<S356>/Switch6' incorporates:
             *  Merge: '<Root>/Merge_35'
             *  SignalConversion generated from: '<S160>/VeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA_read'
             */
            if (Rte_IrvRead_TINR_MedTEB_VeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA_write_IRV
                    ())
            {
                /* Switch: '<S356>/Switch2' incorporates:
                 *  Merge: '<Root>/Merge_115'
                 *  SignalConversion generated from: '<S160>/VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_read'
                 *  Switch: '<S356>/Switch7'
                 */
                rtb_TmpSignalConversionAtVeTINR_e_TCMNeu =
                    Rte_IrvRead_TINR_MedTEB_VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_write_IRV
                    ();
            }

            /* End of Switch: '<S356>/Switch6' */
        }
        else
        {
            /* Switch: '<S356>/Switch2' incorporates:
             *  Merge: '<Root>/Merge_115'
             *  SignalConversion generated from: '<S160>/VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_read'
             *  Switch: '<S356>/Switch7'
             */
            rtb_TmpSignalConversionAtVeTINR_e_TCMNeu =
                Rte_IrvRead_TINR_MedTEB_VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_write_IRV
                ();
        }

        /* End of Switch: '<S356>/Switch7' */
    }

    /* End of Switch: '<S356>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S160>/FcnCallGen' */

    /* Outport: '<Root>/VaTINR_n_NiMinForLockUp' incorporates:
     *  SignalConversion generated from: '<S160>/LaTINC_n_NiMinForLockUp'
     */
    (void)Rte_Write_VaTINR_n_NiMinForLockUp_Value
        (rtb_TmpSignalConversionAtVaTINR_n_NiMinF);

    /* Outport: '<Root>/VaTINR_n_NiMinForLockUpCoast' incorporates:
     *  SignalConversion generated from: '<S160>/LaTINC_n_NiMinForLockUp_Coast'
     */
    (void)Rte_Write_VaTINR_n_NiMinForLockUpCoast_Value
        (rtb_TmpSignalConversionAtVaTINR_n_NiM_em);

    /* Outport: '<Root>/VaTINR_n_NiMinToOpen' incorporates:
     *  SignalConversion generated from: '<S160>/LaTINC_n_NiMinToOpen'
     */
    (void)Rte_Write_VaTINR_n_NiMinToOpen_Value
        (rtb_TmpSignalConversionAtVaTINR_n_NiMi_c);

    /* Outport: '<Root>/VaTINR_n_NiMinToOpenCoast' incorporates:
     *  SignalConversion generated from: '<S160>/LaTINC_n_NiMinToOpen_Coast'
     */
    (void)Rte_Write_VaTINR_n_NiMinToOpenCoast_Value
        (rtb_TmpSignalConversionAtVaTINR_n_NiMinT);

    /* S-Function (fcgen): '<S160>/FcnCallGen' incorporates:
     *  SubSystem: '<S160>/TINC_MedTEB'
     */
    /* Outputs for Atomic SubSystem: '<S354>/TINC_Cntrls_Input' */
    /* Outputs for Atomic SubSystem: '<S359>/TimerRetriggerResetEnabled' */
    /* Outport: '<Root>/VeTINR_b_DrvLnMinTrqMd' incorporates:
     *  Constant: '<S370>/Constant Value2'
     *  Logic: '<S359>/LogicalOperator2'
     *  Logic: '<S359>/LogicalOperator3'
     *  Merge: '<Root>/Merge_7_Irv'
     *  Merge: '<Root>/Merge_9'
     *  RelationalOperator: '<S370>/Greater  Than1'
     *  SignalConversion generated from: '<S160>/LeTINC_b_DrvLnMinTrqMd'
     *  SignalConversion generated from: '<S160>/VeTINR_b_DrvLnMinTrqMd_read'
     *  SignalConversion generated from: '<S160>/VeTINR_b_DrvLnTrqRq_AxleFA_read'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    (void)Rte_Write_VeTINR_b_DrvLnMinTrqMd_Value(((TINR_ac_DW.UnitDelay_DSTATE_d
        > 0.0F) &&
        (!Rte_IrvRead_TINR_MedTEB_VeTINR_b_DrvLnTrqRq_AxleFA_write_IRV())) &&
        (Rte_IrvRead_TINR_MedTEB_VeTINR_b_DrvLnMinTrqMd_write_IRV()));

    /* End of Outputs for SubSystem: '<S359>/TimerRetriggerResetEnabled' */
    /* End of Outputs for SubSystem: '<S354>/TINC_Cntrls_Input' */
    /* End of Outputs for S-Function (fcgen): '<S160>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_b_PwrFlowStatus' incorporates:
     *  SignalConversion generated from: '<S160>/LeTINC_b_PwrFlowStatus'
     */
    (void)Rte_Write_VeTINR_b_PwrFlowStatus_Value(rtb_OR1);

    /* S-Function (fcgen): '<S160>/FcnCallGen' incorporates:
     *  SubSystem: '<S160>/TINC_MedTEB'
     */
    /* Outputs for Atomic SubSystem: '<S354>/TINC_Cntrls_Input' */
    /* Outport: '<Root>/VeTINR_b_TCMLimphomeFaultsFA' incorporates:
     *  Merge: '<Root>/Merge_93'
     *  SignalConversion generated from: '<S160>/LeTINC_b_TCMLimphomeFaultsFA'
     *  SignalConversion generated from: '<S160>/VeTINR_b_TCMLimphomeFaultsC1CANFA_read'
     *  Switch: '<S364>/Switch1'
     */
    (void)Rte_Write_VeTINR_b_TCMLimphomeFaultsFA_Value
        (rtb_TmpSignalConversionAtVeTINR_b_TCMLim &&
         (Rte_IrvRead_TINR_MedTEB_VeTINR_b_TCMLimphomeFaultsC1CANFA_write_IRV()));

    /* End of Outputs for SubSystem: '<S354>/TINC_Cntrls_Input' */

    /* Switch: '<S356>/Switch5' incorporates:
     *  Constant: '<S439>/Constant'
     *  Constant: '<S440>/Calib'
     *  Merge: '<Root>/Merge_53'
     *  RelationalOperator: '<S356>/RelationalOperator'
     *  S-Function (sfix_bitop): '<S356>/BitwiseLogicalOperator'
     *  SignalConversion generated from: '<S160>/VeTINR_d_TCMFailures_read'
     *  Switch: '<S356>/Switch2'
     */
    if (CeTINR_e_LimpMechD6 == ((uint32)rtb_TmpSignalConversionAtVeTINR_e_TCMNeu))
    {
        tmp = (uint16)(HeTINR_d_TCMMechD6 |
                       Rte_IrvRead_TINR_MedTEB_VeTINR_d_TCMFailures_write_IRV());
    }
    else
    {
        tmp = Rte_IrvRead_TINR_MedTEB_VeTINR_d_TCMFailures_write_IRV();
    }

    /* End of Switch: '<S356>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S160>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_d_TCMFailures' incorporates:
     *  SignalConversion generated from: '<S160>/LeTINC_d_TCMFailures'
     */
    (void)Rte_Write_VeTINR_d_TCMFailures_Value(tmp);

    /* S-Function (fcgen): '<S160>/FcnCallGen' incorporates:
     *  SubSystem: '<S160>/TINC_MedTEB'
     */
    /* Outputs for Atomic SubSystem: '<S354>/TINC_Cntrls_Input' */
    /* Switch: '<S364>/Switch' */
    if (rtb_TmpSignalConversionAtVeTINR_b_TCMLim)
    {
        /* Outport: '<Root>/VeTINR_d_TCMLimphomeFaults' incorporates:
         *  SignalConversion generated from: '<S160>/LeTINC_d_TCMLimphomeFaults'
         */
        (void)Rte_Write_VeTINR_d_TCMLimphomeFaults_Value
            (VeTINC_d_TCMLimphomeFaultsC1CAN);
    }
    else
    {
        /* Outport: '<Root>/VeTINR_d_TCMLimphomeFaults' incorporates:
         *  SignalConversion generated from: '<S160>/LeTINC_d_TCMLimphomeFaults'
         */
        (void)Rte_Write_VeTINR_d_TCMLimphomeFaults_Value
            (VeTINC_d_TCMLimphomeFaults);
    }

    /* End of Switch: '<S364>/Switch' */

    /* Outport: '<Root>/VeTINR_e_TransAdpSts' incorporates:
     *  DataTypeConversion: '<S358>/DataTypeConversion'
     *  SignalConversion generated from: '<S160>/LeTINC_e_TransAdpSts'
     *  SignalConversion generated from: '<S160>/VeTINR_e_TransAdpStatus_read'
     */
    (void)Rte_Write_VeTINR_e_TransAdpSts_Value
        (rtb_TmpSignalConversionAtVeTINR_e_TransA);

    /* End of Outputs for SubSystem: '<S354>/TINC_Cntrls_Input' */

    /* Outport: '<Root>/VeTINR_e_TransLimpRequest' incorporates:
     *  DataTypeConversion: '<S435>/DataTypeConversion'
     *  SignalConversion generated from: '<S160>/LeTINC_e_TransLimpRequest'
     *  Switch: '<S356>/Switch2'
     */
    (void)Rte_Write_VeTINR_e_TransLimpRequest_Value
        (rtb_TmpSignalConversionAtVeTINR_e_TCMNeu);

    /* Outputs for Atomic SubSystem: '<S354>/TINC_Cntrls_Input' */
    /* Outputs for Atomic SubSystem: '<S361>/Limiter1' */
    /* Switch: '<S388>/Switch' incorporates:
     *  Constant: '<S384>/Calib'
     *  RelationalOperator: '<S388>/Relational Operator1'
     */
    if (rtb_Selector1_j > KeTINR_i_GearMinAvl)
    {
        /* Outport: '<Root>/VeTINR_i_MaxGearAllwd' incorporates:
         *  SignalConversion generated from: '<S160>/LeTINC_i_MaxGearAllwd'
         */
        (void)Rte_Write_VeTINR_i_MaxGearAllwd_Value(rtb_Selector1_j);
    }
    else
    {
        /* Outport: '<Root>/VeTINR_i_MaxGearAllwd' incorporates:
         *  SignalConversion generated from: '<S160>/LeTINC_i_MaxGearAllwd'
         */
        (void)Rte_Write_VeTINR_i_MaxGearAllwd_Value(KeTINR_i_GearMinAvl);
    }

    /* End of Switch: '<S388>/Switch' */
    /* End of Outputs for SubSystem: '<S361>/Limiter1' */

    /* Switch: '<S360>/Switch' incorporates:
     *  Constant: '<S373>/Calib'
     *  Merge: '<Root>/Merge_61'
     *  SignalConversion generated from: '<S160>/VeTINR_r_TCM_HillMode_read'
     */
    if (KeTINR_b_InternalHillModeSlct)
    {
        /* Switch: '<S360>/Switch1' incorporates:
         *  Abs: '<S378>/Abs'
         *  Constant: '<S377>/Calib'
         *  Logic: '<S360>/Logical1'
         *  Lookup_n-D: '<S380>/Vector'
         *  Switch: '<S379>/Switch'
         */
        if ((VeTINC_b_EstSlopeAngleFA) || (VeTINC_b_PrimNoFA))
        {
            rtb_TmpSignalConversionAtVeTINR_b_DrvLnT = KeTINR_r_DfltHillMode;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTINR_b_DrvLnT = look2_iflf_binlca_16a
                (fabsf(VeTINC_n_PrimNoSgndFltrd), VeTINC_phi_SlopeAngFiltd, ((
                   const float32 *)&(KxTINR_r_HillMd[0])), ((const float32 *)
                  &(KyTINR_r_HillMd[0])), ((const float32 *)&(KtTINR_r_HillMd[0])),
                 TINR_ac_ConstP.Vector_maxIndex, 4U);
        }

        /* End of Switch: '<S360>/Switch1' */
    }
    else
    {
        rtb_TmpSignalConversionAtVeTINR_b_DrvLnT =
            Rte_IrvRead_TINR_MedTEB_VeTINR_r_TCM_HillMode_write_IRV();
    }

    /* End of Switch: '<S360>/Switch' */
    /* End of Outputs for SubSystem: '<S354>/TINC_Cntrls_Input' */
    /* End of Outputs for S-Function (fcgen): '<S160>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_r_TCM_HillMode' incorporates:
     *  SignalConversion generated from: '<S160>/LeTINC_r_TCM_HillMode'
     */
    (void)Rte_Write_VeTINR_r_TCM_HillMode_Value
        (rtb_TmpSignalConversionAtVeTINR_b_DrvLnT);

    /* S-Function (fcgen): '<S160>/FcnCallGen' incorporates:
     *  SubSystem: '<S160>/TINC_MedTEB'
     */
    /* Outport: '<Root>/VeTINR_t_TCM_TimeToSpeedChange' incorporates:
     *  Constant: '<S356>/ConstantValue'
     *  Merge: '<Root>/Merge_110'
     *  Product: '<S356>/Product'
     *  SignalConversion generated from: '<S160>/LeTINC_t_TCM_TimeToSpeedChange'
     *  SignalConversion generated from: '<S160>/VeTINR_t_TCM_TimeToSpeedChange_read'
     */
    (void)Rte_Write_VeTINR_t_TCM_TimeToSpeedChange_Value(0.001F *
        Rte_IrvRead_TINR_MedTEB_VeTINR_t_TCM_TimeToSpeedChange_write_IRV());

    /* End of Outputs for S-Function (fcgen): '<S160>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TINR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) TINR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_TINR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_TINR_1

    float32 tmp;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTMMR_e_ClchStat_DCT tmp_0;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTMMR_e_MtrBDynFctr tmp_1;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCMTCCPreventionID tmp_2;

#endif

#if Rte_SysCon_Variant_TINR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Outputs for Function Call SubSystem: '<Root>/TINR_MedTED' */
    /* S-Function (fcgen): '<S161>/FcnCallGen' incorporates:
     *  SubSystem: '<S161>/TINC_MedTED'
     */
    /* Switch: '<S451>/Switch6' incorporates:
     *  Constant: '<S451>/Constant Value22'
     *  Constant: '<S468>/Calib'
     *  Selector: '<S451>/Selector21'
     */
    if (KaTINR_b_ClchTrqFAOvrdEnbl[0])
    {
        /* Switch: '<S451>/Switch6' incorporates:
         *  Constant: '<S451>/Constant Value19'
         *  Constant: '<S469>/Calib'
         *  Selector: '<S451>/Selector18'
         */
        VeTINC_b_ClchTrqAFA = KaTINR_b_ClchTrqFAOvrdVal[0];
    }
    else
    {
        /* Switch: '<S451>/Switch6' incorporates:
         *  Merge: '<Root>/Merge_12'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ClchTrqAFA_read'
         */
        VeTINC_b_ClchTrqAFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ClchTrqAFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch6' */

    /* Switch: '<S451>/Switch7' incorporates:
     *  Constant: '<S451>/Constant Value23'
     *  Constant: '<S468>/Calib'
     *  Selector: '<S451>/Selector22'
     */
    if (KaTINR_b_ClchTrqFAOvrdEnbl[1])
    {
        /* Switch: '<S451>/Switch7' incorporates:
         *  Constant: '<S451>/Constant Value20'
         *  Constant: '<S469>/Calib'
         *  Selector: '<S451>/Selector19'
         */
        VeTINC_b_ClchTrqBFA = KaTINR_b_ClchTrqFAOvrdVal[1];
    }
    else
    {
        /* Switch: '<S451>/Switch7' incorporates:
         *  Merge: '<Root>/Merge_17'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ClchTrqBFA_read'
         */
        VeTINC_b_ClchTrqBFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ClchTrqBFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch7' */

    /* Switch: '<S451>/Switch8' incorporates:
     *  Constant: '<S451>/Constant Value24'
     *  Constant: '<S468>/Calib'
     *  Selector: '<S451>/Selector23'
     */
    if (KaTINR_b_ClchTrqFAOvrdEnbl[2])
    {
        /* Switch: '<S451>/Switch8' incorporates:
         *  Constant: '<S451>/Constant Value21'
         *  Constant: '<S469>/Calib'
         *  Selector: '<S451>/Selector20'
         */
        VeTINC_b_ClchTrqCFA = KaTINR_b_ClchTrqFAOvrdVal[2];
    }
    else
    {
        /* Switch: '<S451>/Switch8' incorporates:
         *  Merge: '<Root>/Merge_19'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ClchTrqCFA_read'
         */
        VeTINC_b_ClchTrqCFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ClchTrqCFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch8' */

    /* Switch: '<S451>/Switch9' incorporates:
     *  Constant: '<S451>/Constant Value14'
     *  Constant: '<S468>/Calib'
     *  Selector: '<S451>/Selector24'
     */
    if (KaTINR_b_ClchTrqFAOvrdEnbl[3])
    {
        /* Switch: '<S451>/Switch9' incorporates:
         *  Constant: '<S451>/Constant Value13'
         *  Constant: '<S469>/Calib'
         *  Selector: '<S451>/Selector16'
         */
        VeTINC_b_ClchTrqDFA = KaTINR_b_ClchTrqFAOvrdVal[3];
    }
    else
    {
        /* Switch: '<S451>/Switch9' incorporates:
         *  Merge: '<Root>/Merge_21'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ClchTrqDFA_read'
         */
        VeTINC_b_ClchTrqDFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ClchTrqDFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch9' */

    /* Switch: '<S451>/Switch10' incorporates:
     *  Constant: '<S451>/Constant Value15'
     *  Constant: '<S468>/Calib'
     *  Selector: '<S451>/Selector14'
     */
    if (KaTINR_b_ClchTrqFAOvrdEnbl[4])
    {
        /* Switch: '<S451>/Switch10' incorporates:
         *  Constant: '<S451>/Constant Value17'
         *  Constant: '<S469>/Calib'
         *  Selector: '<S451>/Selector13'
         */
        VeTINC_b_ClchTrqEFA = KaTINR_b_ClchTrqFAOvrdVal[4];
    }
    else
    {
        /* Switch: '<S451>/Switch10' incorporates:
         *  Merge: '<Root>/Merge_23'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ClchTrqEFA_read'
         */
        VeTINC_b_ClchTrqEFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ClchTrqEFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch10' */

    /* Switch: '<S451>/Switch11' incorporates:
     *  Constant: '<S451>/Constant Value16'
     *  Constant: '<S468>/Calib'
     *  Selector: '<S451>/Selector15'
     */
    if (KaTINR_b_ClchTrqFAOvrdEnbl[5])
    {
        /* Switch: '<S451>/Switch11' incorporates:
         *  Constant: '<S451>/Constant Value18'
         *  Constant: '<S469>/Calib'
         *  Selector: '<S451>/Selector17'
         */
        VeTINC_b_ClchTrqFFA = KaTINR_b_ClchTrqFAOvrdVal[5];
    }
    else
    {
        /* Switch: '<S451>/Switch11' incorporates:
         *  Merge: '<Root>/Merge_15'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ClchTrqFFA_read'
         */
        VeTINC_b_ClchTrqFFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ClchTrqFFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch11' */

    /* Switch: '<S451>/Switch22' incorporates:
     *  Constant: '<S472>/Calib'
     */
    if (KeTINR_b_ActualClch1TrqFAOvrdEnbl)
    {
        /* Switch: '<S451>/Switch22' incorporates:
         *  Constant: '<S451>/Constant Value27'
         *  Constant: '<S467>/Calib'
         *  Selector: '<S451>/Selector27'
         */
        VeTINC_b_ActualClch1_TCMFA = KaTINR_b_ClchTorqFAOvrdVal_DCT[0];
    }
    else
    {
        /* Switch: '<S451>/Switch22' incorporates:
         *  Merge: '<Root>/Merge_26'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ActualClutch1_TCMFA_read'
         */
        VeTINC_b_ActualClch1_TCMFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ActualClutch1_TCMFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch22' */

    /* Switch: '<S451>/Switch23' incorporates:
     *  Constant: '<S474>/Calib'
     */
    if (KeTINR_b_ActualClch3TrqFAOvrdEnbl)
    {
        /* Switch: '<S451>/Switch23' incorporates:
         *  Constant: '<S451>/Constant Value28'
         *  Constant: '<S467>/Calib'
         *  Selector: '<S451>/Selector28'
         */
        VeTINC_b_ActualClch3_TCMFA = KaTINR_b_ClchTorqFAOvrdVal_DCT[1];
    }
    else
    {
        /* Switch: '<S451>/Switch23' incorporates:
         *  Merge: '<Root>/Merge_32'
         *  SignalConversion generated from: '<S161>/VeTINR_b_ActualClutch3_TCMFA_read'
         */
        VeTINC_b_ActualClch3_TCMFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_ActualClutch3_TCMFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch23' */

    /* Switch: '<S451>/Switch20' incorporates:
     *  Constant: '<S451>/Constant Value39'
     *  Constant: '<S464>/Calib'
     *  Selector: '<S451>/Selector38'
     */
    if (KaTINR_b_ClchStFAOvrdEnbl_DCT[0])
    {
        /* Switch: '<S451>/Switch20' incorporates:
         *  Constant: '<S451>/Constant Value35'
         *  Constant: '<S465>/Calib'
         *  Selector: '<S451>/Selector34'
         */
        VeTINC_b_Clch1StsFA = KaTINR_b_ClchStFAOvrdVal_DCT[0];
    }
    else
    {
        /* Switch: '<S451>/Switch20' incorporates:
         *  Merge: '<Root>/Merge_28'
         *  SignalConversion generated from: '<S161>/VeTINR_b_Clch1StsFA_read'
         */
        VeTINC_b_Clch1StsFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_Clch1StsFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch20' */

    /* Switch: '<S451>/Switch21' incorporates:
     *  Constant: '<S451>/Constant Value40'
     *  Constant: '<S464>/Calib'
     *  Selector: '<S451>/Selector39'
     */
    if (KaTINR_b_ClchStFAOvrdEnbl_DCT[1])
    {
        /* Switch: '<S451>/Switch21' incorporates:
         *  Constant: '<S451>/Constant Value37'
         *  Constant: '<S465>/Calib'
         *  Selector: '<S451>/Selector35'
         */
        VeTINC_b_Clch3StsFA = KaTINR_b_ClchStFAOvrdVal_DCT[1];
    }
    else
    {
        /* Switch: '<S451>/Switch21' incorporates:
         *  Merge: '<Root>/Merge_30'
         *  SignalConversion generated from: '<S161>/VeTINR_b_Clch3StsFA_read'
         */
        VeTINC_b_Clch3StsFA =
            Rte_IrvRead_TINR_MedTED_VeTINR_b_Clch3StsFA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch21' */

    /* Switch: '<S451>/Switch' incorporates:
     *  Constant: '<S451>/Constant Value7'
     *  Constant: '<S470>/Calib'
     *  Selector: '<S451>/Selector6'
     */
    if (KaTINR_b_ClchTrqOvrdEnbl[0])
    {
        /* Switch: '<S451>/Switch' incorporates:
         *  Constant: '<S451>/Constant Value4'
         *  Constant: '<S463>/Calib'
         *  Selector: '<S451>/Selector3'
         */
        VeTINC_M_ClchTrqA = KaTINR_M_ClchTrqOvrdVal[0];
    }
    else
    {
        /* Switch: '<S451>/Switch' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S161>/VeTINR_M_ClchTrqA_read'
         */
        VeTINC_M_ClchTrqA = Rte_IrvRead_TINR_MedTED_VeTINR_M_ClchTrqA_write_IRV();
    }

    /* End of Switch: '<S451>/Switch' */

    /* Outputs for Atomic SubSystem: '<S450>/DigitalLowpassResetEnabled' */
    /* Switch: '<S452>/Switch1' incorporates:
     *  Constant: '<S450>/Constant Value46'
     *  Constant: '<S458>/Calib'
     *  Product: '<S452>/Multiplication'
     *  Selector: '<S450>/Selector45'
     *  Sum: '<S452>/Subtraction'
     *  Sum: '<S452>/Summation'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    TINR_ac_DW.UnitDelay_DSTATE_k += (VeTINC_M_ClchTrqA -
        TINR_ac_DW.UnitDelay_DSTATE_k) * KaTINR_k_ClchTrqFiltCnst[0];

    /* End of Outputs for SubSystem: '<S450>/DigitalLowpassResetEnabled' */

    /* Assignment: '<S450>/ArrayAssignment' incorporates:
     *  Constant: '<S450>/Constant Value1'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    TINR_ac_B.ArrayAssignment[0] = TINR_ac_DW.UnitDelay_DSTATE_k;

    /* Switch: '<S451>/Switch1' incorporates:
     *  Constant: '<S451>/Constant Value8'
     *  Constant: '<S470>/Calib'
     *  Selector: '<S451>/Selector7'
     */
    if (KaTINR_b_ClchTrqOvrdEnbl[1])
    {
        /* Switch: '<S451>/Switch1' incorporates:
         *  Constant: '<S451>/Constant Value5'
         *  Constant: '<S463>/Calib'
         *  Selector: '<S451>/Selector4'
         */
        VeTINC_M_ClchTrqB = KaTINR_M_ClchTrqOvrdVal[1];
    }
    else
    {
        /* Switch: '<S451>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_16'
         *  SignalConversion generated from: '<S161>/VeTINR_M_ClchTrqB_read'
         */
        VeTINC_M_ClchTrqB = Rte_IrvRead_TINR_MedTED_VeTINR_M_ClchTrqB_write_IRV();
    }

    /* End of Switch: '<S451>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S450>/DigitalLowpassResetEnabled5' */
    /* Switch: '<S457>/Switch1' incorporates:
     *  Constant: '<S450>/Constant Value47'
     *  Constant: '<S458>/Calib'
     *  Product: '<S457>/Multiplication'
     *  Selector: '<S450>/Selector46'
     *  Sum: '<S457>/Subtraction'
     *  Sum: '<S457>/Summation'
     *  UnitDelay: '<S457>/Unit Delay'
     */
    TINR_ac_DW.UnitDelay_DSTATE += (VeTINC_M_ClchTrqB -
        TINR_ac_DW.UnitDelay_DSTATE) * KaTINR_k_ClchTrqFiltCnst[1];

    /* End of Outputs for SubSystem: '<S450>/DigitalLowpassResetEnabled5' */
    for (i = 0; i < 6; i++)
    {
        /* Assignment: '<S450>/ArrayAssignment5' incorporates:
         *  Assignment: '<S450>/ArrayAssignment1'
         */
        TINR_ac_B.LaTINC_M_ClchTrq[i] = TINR_ac_B.ArrayAssignment[i];
    }

    /* Assignment: '<S450>/ArrayAssignment1' incorporates:
     *  Constant: '<S450>/Constant Value2'
     *  UnitDelay: '<S457>/Unit Delay'
     */
    TINR_ac_B.LaTINC_M_ClchTrq[1] = TINR_ac_DW.UnitDelay_DSTATE;

    /* Switch: '<S451>/Switch2' incorporates:
     *  Constant: '<S451>/Constant Value9'
     *  Constant: '<S470>/Calib'
     *  Selector: '<S451>/Selector8'
     */
    if (KaTINR_b_ClchTrqOvrdEnbl[2])
    {
        /* Switch: '<S451>/Switch2' incorporates:
         *  Constant: '<S451>/Constant Value6'
         *  Constant: '<S463>/Calib'
         *  Selector: '<S451>/Selector5'
         */
        VeTINC_M_ClchTrqC = KaTINR_M_ClchTrqOvrdVal[2];
    }
    else
    {
        /* Switch: '<S451>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_18'
         *  SignalConversion generated from: '<S161>/VeTINR_M_ClchTrqC_read'
         */
        VeTINC_M_ClchTrqC = Rte_IrvRead_TINR_MedTED_VeTINR_M_ClchTrqC_write_IRV();
    }

    /* End of Switch: '<S451>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S450>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S455>/Switch1' incorporates:
     *  Constant: '<S450>/Constant Value48'
     *  Constant: '<S458>/Calib'
     *  Product: '<S455>/Multiplication'
     *  Selector: '<S450>/Selector47'
     *  Sum: '<S455>/Subtraction'
     *  Sum: '<S455>/Summation'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    TINR_ac_DW.UnitDelay_DSTATE_i += (VeTINC_M_ClchTrqC -
        TINR_ac_DW.UnitDelay_DSTATE_i) * KaTINR_k_ClchTrqFiltCnst[2];

    /* End of Outputs for SubSystem: '<S450>/DigitalLowpassResetEnabled3' */

    /* Assignment: '<S450>/ArrayAssignment2' incorporates:
     *  Constant: '<S450>/Constant Value3'
     *  UnitDelay: '<S455>/Unit Delay'
     */
    TINR_ac_B.LaTINC_M_ClchTrq[2] = TINR_ac_DW.UnitDelay_DSTATE_i;

    /* Switch: '<S451>/Switch3' incorporates:
     *  Constant: '<S451>/Constant Value10'
     *  Constant: '<S470>/Calib'
     *  Selector: '<S451>/Selector9'
     */
    if (KaTINR_b_ClchTrqOvrdEnbl[3])
    {
        /* Switch: '<S451>/Switch3' incorporates:
         *  Constant: '<S451>/Constant Value1'
         *  Constant: '<S463>/Calib'
         *  Selector: '<S451>/Selector12'
         */
        VeTINC_M_ClchTrqD = KaTINR_M_ClchTrqOvrdVal[3];
    }
    else
    {
        /* Switch: '<S451>/Switch3' incorporates:
         *  Merge: '<Root>/Merge_20'
         *  SignalConversion generated from: '<S161>/VeTINR_M_ClchTrqD_read'
         */
        VeTINC_M_ClchTrqD = Rte_IrvRead_TINR_MedTED_VeTINR_M_ClchTrqD_write_IRV();
    }

    /* End of Switch: '<S451>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S450>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S456>/Switch1' incorporates:
     *  Constant: '<S450>/Constant Value26'
     *  Constant: '<S458>/Calib'
     *  Product: '<S456>/Multiplication'
     *  Selector: '<S450>/Selector48'
     *  Sum: '<S456>/Subtraction'
     *  Sum: '<S456>/Summation'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    TINR_ac_DW.UnitDelay_DSTATE_a += (VeTINC_M_ClchTrqD -
        TINR_ac_DW.UnitDelay_DSTATE_a) * KaTINR_k_ClchTrqFiltCnst[3];

    /* End of Outputs for SubSystem: '<S450>/DigitalLowpassResetEnabled4' */

    /* Assignment: '<S450>/ArrayAssignment3' incorporates:
     *  Constant: '<S450>/Constant Value4'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    TINR_ac_B.LaTINC_M_ClchTrq[3] = TINR_ac_DW.UnitDelay_DSTATE_a;

    /* Switch: '<S451>/Switch4' incorporates:
     *  Constant: '<S451>/Constant Value11'
     *  Constant: '<S470>/Calib'
     *  Selector: '<S451>/Selector10'
     */
    if (KaTINR_b_ClchTrqOvrdEnbl[4])
    {
        /* Switch: '<S451>/Switch4' incorporates:
         *  Constant: '<S451>/Constant Value2'
         *  Constant: '<S463>/Calib'
         *  Selector: '<S451>/Selector1'
         */
        VeTINC_M_ClchTrqE = KaTINR_M_ClchTrqOvrdVal[4];
    }
    else
    {
        /* Switch: '<S451>/Switch4' incorporates:
         *  Merge: '<Root>/Merge_22'
         *  SignalConversion generated from: '<S161>/VeTINR_M_ClchTrqE_read'
         */
        VeTINC_M_ClchTrqE = Rte_IrvRead_TINR_MedTED_VeTINR_M_ClchTrqE_write_IRV();
    }

    /* End of Switch: '<S451>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S450>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S454>/Switch1' incorporates:
     *  Constant: '<S450>/Constant Value27'
     *  Constant: '<S458>/Calib'
     *  Product: '<S454>/Multiplication'
     *  Selector: '<S450>/Selector26'
     *  Sum: '<S454>/Subtraction'
     *  Sum: '<S454>/Summation'
     *  UnitDelay: '<S454>/Unit Delay'
     */
    TINR_ac_DW.UnitDelay_DSTATE_o += (VeTINC_M_ClchTrqE -
        TINR_ac_DW.UnitDelay_DSTATE_o) * KaTINR_k_ClchTrqFiltCnst[4];

    /* End of Outputs for SubSystem: '<S450>/DigitalLowpassResetEnabled2' */

    /* Assignment: '<S450>/ArrayAssignment4' incorporates:
     *  Constant: '<S450>/Constant Value5'
     *  UnitDelay: '<S454>/Unit Delay'
     */
    TINR_ac_B.LaTINC_M_ClchTrq[4] = TINR_ac_DW.UnitDelay_DSTATE_o;

    /* Switch: '<S451>/Switch5' incorporates:
     *  Constant: '<S451>/Constant Value12'
     *  Constant: '<S470>/Calib'
     *  Selector: '<S451>/Selector11'
     */
    if (KaTINR_b_ClchTrqOvrdEnbl[5])
    {
        /* Switch: '<S451>/Switch5' incorporates:
         *  Constant: '<S451>/Constant Value3'
         *  Constant: '<S463>/Calib'
         *  Selector: '<S451>/Selector2'
         */
        VeTINC_M_ClchTrqF = KaTINR_M_ClchTrqOvrdVal[5];
    }
    else
    {
        /* Switch: '<S451>/Switch5' incorporates:
         *  Merge: '<Root>/Merge_14'
         *  SignalConversion generated from: '<S161>/VeTINR_M_ClchTrqF_read'
         */
        VeTINC_M_ClchTrqF = Rte_IrvRead_TINR_MedTED_VeTINR_M_ClchTrqF_write_IRV();
    }

    /* End of Switch: '<S451>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S450>/DigitalLowpassResetEnabled1' */
    /* Sum: '<S453>/Summation' incorporates:
     *  Constant: '<S450>/Constant Value28'
     *  Constant: '<S458>/Calib'
     *  Product: '<S453>/Multiplication'
     *  Selector: '<S450>/Selector27'
     *  Sum: '<S453>/Subtraction'
     *  UnitDelay: '<S453>/Unit Delay'
     */
    TINR_ac_DW.UnitDelay_DSTATE_o0 += (VeTINC_M_ClchTrqF -
        TINR_ac_DW.UnitDelay_DSTATE_o0) * KaTINR_k_ClchTrqFiltCnst[5];

    /* Assignment: '<S450>/ArrayAssignment5' incorporates:
     *  Constant: '<S450>/Constant Value6'
     *  Switch: '<S453>/Switch2'
     */
    TINR_ac_B.LaTINC_M_ClchTrq[5] = TINR_ac_DW.UnitDelay_DSTATE_o0;

    /* End of Outputs for SubSystem: '<S450>/DigitalLowpassResetEnabled1' */
    /* End of Outputs for S-Function (fcgen): '<S161>/FcnCallGen' */

    /* Outport: '<Root>/VaTINR_M_ClchTrq' incorporates:
     *  SignalConversion generated from: '<S161>/LaTINC_M_ClchTrq'
     */
    (void)Rte_Write_VaTINR_M_ClchTrq_Value(TINR_ac_B.LaTINC_M_ClchTrq);

    /* S-Function (fcgen): '<S161>/FcnCallGen' incorporates:
     *  SubSystem: '<S161>/TINC_MedTED'
     */
    /* Switch: '<S451>/Switch13' incorporates:
     *  Constant: '<S451>/Constant Value31'
     *  Constant: '<S462>/Calib'
     *  Constant: '<S475>/Calib'
     *  Merge: '<Root>/Merge_31'
     *  Selector: '<S451>/Selector31'
     *  SignalConversion generated from: '<S161>/VeTINR_M_ActualClutch3_TCM_read'
     */
    if (KeTINR_b_ActualClch3TrqOvrdEnbl)
    {
        tmp = KaTINR_M_ClchTorqOvrdVal_DCT[1];
    }
    else
    {
        tmp = Rte_IrvRead_TINR_MedTED_VeTINR_M_ActualClutch3_TCM_write_IRV();
    }

    /* End of Switch: '<S451>/Switch13' */
    /* End of Outputs for S-Function (fcgen): '<S161>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_M_ActualClch3_TCM' incorporates:
     *  SignalConversion generated from: '<S161>/LeTINC_M_ActualClch3_TCM'
     */
    (void)Rte_Write_VeTINR_M_ActualClch3_TCM_Value(tmp);

    /* S-Function (fcgen): '<S161>/FcnCallGen' incorporates:
     *  SubSystem: '<S161>/TINC_MedTED'
     */
    /* Switch: '<S451>/Switch12' incorporates:
     *  Constant: '<S451>/Constant Value30'
     *  Constant: '<S462>/Calib'
     *  Constant: '<S473>/Calib'
     *  Merge: '<Root>/Merge_25'
     *  Selector: '<S451>/Selector30'
     *  SignalConversion generated from: '<S161>/VeTINR_M_ActualClutch1_TCM_read'
     */
    if (KeTINR_b_ActualClch1TrqOvrdEnbl)
    {
        tmp = KaTINR_M_ClchTorqOvrdVal_DCT[0];
    }
    else
    {
        tmp = Rte_IrvRead_TINR_MedTED_VeTINR_M_ActualClutch1_TCM_write_IRV();
    }

    /* End of Switch: '<S451>/Switch12' */
    /* End of Outputs for S-Function (fcgen): '<S161>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_M_ActualClch1_TCM' incorporates:
     *  SignalConversion generated from: '<S161>/LeTINC_M_ActualClutch1_TCM'
     */
    (void)Rte_Write_VeTINR_M_ActualClch1_TCM_Value(tmp);

    /* S-Function (fcgen): '<S161>/FcnCallGen' incorporates:
     *  SubSystem: '<S161>/TINC_MedTED'
     */
    /* Outport: '<Root>/VeTINR_b_ClchFaultActv' incorporates:
     *  Logic: '<S450>/Logical2'
     *  Logic: '<S450>/Logical3'
     *  SignalConversion generated from: '<S161>/LeTINC_b_ClchFaultActv'
     */
    (void)Rte_Write_VeTINR_b_ClchFaultActv_Value((((VeTINC_b_ActualClch1_TCMFA) ||
        (VeTINC_b_ActualClch3_TCMFA)) || (VeTINC_b_Clch1StsFA)) ||
        (VeTINC_b_Clch3StsFA));

    /* Outport: '<Root>/VeTINR_b_ClchTrqFA' incorporates:
     *  Logic: '<S450>/Logical1'
     *  SignalConversion generated from: '<S161>/LeTINC_b_ClchTrqFA'
     */
    (void)Rte_Write_VeTINR_b_ClchTrqFA_Value((((((((VeTINC_b_ClchTrqAFA) ||
        (VeTINC_b_ClchTrqBFA)) || (VeTINC_b_ClchTrqCFA)) || (VeTINC_b_ClchTrqDFA))
        || (VeTINC_b_ClchTrqEFA)) || (VeTINC_b_ClchTrqFFA)) ||
        (VeTINC_b_ActualClch1_TCMFA)) || (VeTINC_b_ActualClch3_TCMFA));

    /* Switch: '<S451>/Switch15' incorporates:
     *  Constant: '<S451>/Constant Value43'
     *  Constant: '<S451>/Constant Value46'
     *  Constant: '<S466>/Calib'
     *  Constant: '<S471>/Calib'
     *  Merge: '<Root>/Merge_27'
     *  Selector: '<S451>/Selector42'
     *  Selector: '<S451>/Selector45'
     *  SignalConversion generated from: '<S161>/VeTINR_e_Clch1Sts_read'
     */
    if (KaTINR_b_ClchStOvrdEnbl_DCT[0])
    {
        tmp_0 = KaTINR_e_ClchStOvrdVal_DCT[0];
    }
    else
    {
        tmp_0 = Rte_IrvRead_TINR_MedTED_VeTINR_e_Clch1Sts_write_IRV();
    }

    /* End of Switch: '<S451>/Switch15' */
    /* End of Outputs for S-Function (fcgen): '<S161>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_e_Clch1Sts' incorporates:
     *  SignalConversion generated from: '<S161>/LeTINC_e_Clch1Sts'
     */
    (void)Rte_Write_VeTINR_e_Clch1Sts_Value(tmp_0);

    /* S-Function (fcgen): '<S161>/FcnCallGen' incorporates:
     *  SubSystem: '<S161>/TINC_MedTED'
     */
    /* Switch: '<S451>/Switch16' incorporates:
     *  Constant: '<S451>/Constant Value44'
     *  Constant: '<S451>/Constant Value47'
     *  Constant: '<S466>/Calib'
     *  Constant: '<S471>/Calib'
     *  Merge: '<Root>/Merge_29'
     *  Selector: '<S451>/Selector43'
     *  Selector: '<S451>/Selector46'
     *  SignalConversion generated from: '<S161>/VeTINR_e_Clch3Sts_read'
     */
    if (KaTINR_b_ClchStOvrdEnbl_DCT[1])
    {
        tmp_0 = KaTINR_e_ClchStOvrdVal_DCT[1];
    }
    else
    {
        tmp_0 = Rte_IrvRead_TINR_MedTED_VeTINR_e_Clch3Sts_write_IRV();
    }

    /* End of Switch: '<S451>/Switch16' */
    /* End of Outputs for S-Function (fcgen): '<S161>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_e_Clch3Sts' incorporates:
     *  SignalConversion generated from: '<S161>/LeTINC_e_Clch3Sts'
     */
    (void)Rte_Write_VeTINR_e_Clch3Sts_Value(tmp_0);

    /* S-Function (fcgen): '<S161>/FcnCallGen' incorporates:
     *  SubSystem: '<S161>/TINC_MedTED'
     */
    /* Switch: '<S451>/Switch19' incorporates:
     *  Constant: '<S480>/Calib'
     *  Constant: '<S482>/Calib'
     *  Merge: '<Root>/Merge_38'
     *  SignalConversion generated from: '<S161>/VeTINR_e_MtrBDynFctr_read'
     */
    if (KeTINR_b_MtrBDynFctrOvrdEnbl)
    {
        tmp_1 = KeTINR_e_MtrBDynFctrOvrdVal;
    }
    else
    {
        tmp_1 = Rte_IrvRead_TINR_MedTED_VeTINR_e_MtrBDynFctr_write_IRV();
    }

    /* Outport: '<Root>/VeTINR_e_MtrBDynFctr' incorporates:
     *  SignalConversion generated from: '<S161>/LeTINC_e_MtrBDynFctr'
     *  Switch: '<S451>/Switch19'
     */
    (void)Rte_Write_VeTINR_e_MtrBDynFctr_Value(tmp_1);

    /* Switch: '<S451>/Switch14' incorporates:
     *  Constant: '<S481>/Calib'
     *  Constant: '<S483>/Calib'
     *  Merge: '<Root>/Merge_10'
     *  SignalConversion generated from: '<S161>/VeTINR_e_TCMTCCPreventionID_read'
     */
    if (KeTINR_b_TCM_TCCPreventionIDOvrrdEnbl)
    {
        tmp_2 = KeTINR_e_TCM_TCCPreventionIDOvrrdVal;
    }
    else
    {
        tmp_2 = Rte_IrvRead_TINR_MedTED_VeTINR_e_TCMTCCPreventionID_write_IRV();
    }

    /* Outport: '<Root>/VeTINR_e_TCMTCCPreventionID' incorporates:
     *  SignalConversion generated from: '<S161>/LeTINC_e_TCMTCCPreventionID'
     *  Switch: '<S451>/Switch14'
     */
    (void)Rte_Write_VeTINR_e_TCMTCCPreventionID_Value(tmp_2);

    /* End of Outputs for S-Function (fcgen): '<S161>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TINR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_Cnt_TCM_DriverType(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_Cnt_TCM_DriverType' */
    /* Outport: '<Root>/VeTINR_Cnt_TCM_DriverType' incorporates:
     *  Chart: '<S1>/FsftTINR_Cnt_TCM_DriverTypeChrt'
     *  SignalConversion generated from: '<S1>/VeTINR_Cnt_TCM_DriverType'
     */
    /* Gateway: FsftTINR_Cnt_TCM_DriverType/FsftTINR_Cnt_TCM_DriverTypeChrt */
    /* During: FsftTINR_Cnt_TCM_DriverType/FsftTINR_Cnt_TCM_DriverTypeChrt */
    /* Entry Internal: FsftTINR_Cnt_TCM_DriverType/FsftTINR_Cnt_TCM_DriverTypeChrt */
    /* Transition: '<S163>:2' */
    (void)Rte_Write_VeTINR_Cnt_TCM_DriverType_Value
        (KeTINR_Cnt_TCM_DriverTypeDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_Cnt_TCM_DriverType' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ActualClutch1_TCM(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ActualClutch1_TCM' */
    /* Merge: '<Root>/Merge_25' incorporates:
     *  Chart: '<S2>/FsftTINR_M_ActualClutch1_TCMChrt'
     *  SignalConversion generated from: '<S2>/VeTINR_M_ActualClutch1_TCM_write'
     */
    /* Gateway: FsftTINR_M_ActualClutch1_TCM/FsftTINR_M_ActualClutch1_TCMChrt */
    /* During: FsftTINR_M_ActualClutch1_TCM/FsftTINR_M_ActualClutch1_TCMChrt */
    /* Entry Internal: FsftTINR_M_ActualClutch1_TCM/FsftTINR_M_ActualClutch1_TCMChrt */
    /* Transition: '<S164>:2' */
    Rte_IrvWrite_FsftTINR_M_ActualClutch1_TCM_VeTINR_M_ActualClutch1_TCM_write_IRV
        (KeTINR_M_ActualClch1TorqueAtDflt);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S2>/FsftTINR_M_ActualClutch1_TCMChrt'
     *  SignalConversion generated from: '<S2>/VeTINR_b_ActualClutch1_TCMFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ActualClutch1_TCM_VeTINR_b_ActualClutch1_TCMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ActualClutch1_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ActualClutch3_TCM(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ActualClutch3_TCM' */
    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S3>/FsftTINR_M_ActualClutch3_TCMChrt'
     *  SignalConversion generated from: '<S3>/VeTINR_M_ActualClutch3_TCM_write'
     */
    /* Gateway: FsftTINR_M_ActualClutch3_TCM/FsftTINR_M_ActualClutch3_TCMChrt */
    /* During: FsftTINR_M_ActualClutch3_TCM/FsftTINR_M_ActualClutch3_TCMChrt */
    /* Entry Internal: FsftTINR_M_ActualClutch3_TCM/FsftTINR_M_ActualClutch3_TCMChrt */
    /* Transition: '<S165>:2' */
    Rte_IrvWrite_FsftTINR_M_ActualClutch3_TCM_VeTINR_M_ActualClutch3_TCM_write_IRV
        (KeTINR_M_ActualClch3TorqueAtDflt);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S3>/FsftTINR_M_ActualClutch3_TCMChrt'
     *  SignalConversion generated from: '<S3>/VeTINR_b_ActualClutch3_TCMFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ActualClutch3_TCM_VeTINR_b_ActualClutch3_TCMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ActualClutch3_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ClchTrqA(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ClchTrqA' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S4>/FsftTINR_M_ClchTrqAChrt'
     *  SignalConversion generated from: '<S4>/VeTINR_M_ClchTrqA_write'
     */
    /* Gateway: FsftTINR_M_ClchTrqA/FsftTINR_M_ClchTrqAChrt */
    /* During: FsftTINR_M_ClchTrqA/FsftTINR_M_ClchTrqAChrt */
    /* Entry Internal: FsftTINR_M_ClchTrqA/FsftTINR_M_ClchTrqAChrt */
    /* Transition: '<S166>:2' */
    Rte_IrvWrite_FsftTINR_M_ClchTrqA_VeTINR_M_ClchTrqA_write_IRV
        (KeTINR_M_ClchTrqADflt);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S4>/FsftTINR_M_ClchTrqAChrt'
     *  SignalConversion generated from: '<S4>/VeTINR_b_ClchTrqAFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ClchTrqA_VeTINR_b_ClchTrqAFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ClchTrqA' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ClchTrqB(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ClchTrqB' */
    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S5>/FsftTINR_M_ClchTrqBChrt'
     *  SignalConversion generated from: '<S5>/VeTINR_M_ClchTrqB_write'
     */
    /* Gateway: FsftTINR_M_ClchTrqB/FsftTINR_M_ClchTrqBChrt */
    /* During: FsftTINR_M_ClchTrqB/FsftTINR_M_ClchTrqBChrt */
    /* Entry Internal: FsftTINR_M_ClchTrqB/FsftTINR_M_ClchTrqBChrt */
    /* Transition: '<S167>:2' */
    Rte_IrvWrite_FsftTINR_M_ClchTrqB_VeTINR_M_ClchTrqB_write_IRV
        (KeTINR_M_ClchTrqBDflt);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S5>/FsftTINR_M_ClchTrqBChrt'
     *  SignalConversion generated from: '<S5>/VeTINR_b_ClchTrqBFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ClchTrqB_VeTINR_b_ClchTrqBFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ClchTrqB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ClchTrqC(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ClchTrqC' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S6>/FsftTINR_M_ClchTrqCChrt'
     *  SignalConversion generated from: '<S6>/VeTINR_M_ClchTrqC_write'
     */
    /* Gateway: FsftTINR_M_ClchTrqC/FsftTINR_M_ClchTrqCChrt */
    /* During: FsftTINR_M_ClchTrqC/FsftTINR_M_ClchTrqCChrt */
    /* Entry Internal: FsftTINR_M_ClchTrqC/FsftTINR_M_ClchTrqCChrt */
    /* Transition: '<S168>:2' */
    Rte_IrvWrite_FsftTINR_M_ClchTrqC_VeTINR_M_ClchTrqC_write_IRV
        (KeTINR_M_ClchTrqCDflt);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S6>/FsftTINR_M_ClchTrqCChrt'
     *  SignalConversion generated from: '<S6>/VeTINR_b_ClchTrqCFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ClchTrqC_VeTINR_b_ClchTrqCFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ClchTrqC' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ClchTrqD(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ClchTrqD' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S7>/FsftTINR_M_ClchTrqDChrt'
     *  SignalConversion generated from: '<S7>/VeTINR_M_ClchTrqD_write'
     */
    /* Gateway: FsftTINR_M_ClchTrqD/FsftTINR_M_ClchTrqDChrt */
    /* During: FsftTINR_M_ClchTrqD/FsftTINR_M_ClchTrqDChrt */
    /* Entry Internal: FsftTINR_M_ClchTrqD/FsftTINR_M_ClchTrqDChrt */
    /* Transition: '<S169>:2' */
    Rte_IrvWrite_FsftTINR_M_ClchTrqD_VeTINR_M_ClchTrqD_write_IRV
        (KeTINR_M_ClchTrqDDflt);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S7>/FsftTINR_M_ClchTrqDChrt'
     *  SignalConversion generated from: '<S7>/VeTINR_b_ClchTrqDFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ClchTrqD_VeTINR_b_ClchTrqDFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ClchTrqD' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ClchTrqE(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ClchTrqE' */
    /* Merge: '<Root>/Merge_22' incorporates:
     *  Chart: '<S8>/FsftTINR_M_ClchTrqEChrt'
     *  SignalConversion generated from: '<S8>/VeTINR_M_ClchTrqE_write'
     */
    /* Gateway: FsftTINR_M_ClchTrqE/FsftTINR_M_ClchTrqEChrt */
    /* During: FsftTINR_M_ClchTrqE/FsftTINR_M_ClchTrqEChrt */
    /* Entry Internal: FsftTINR_M_ClchTrqE/FsftTINR_M_ClchTrqEChrt */
    /* Transition: '<S170>:2' */
    Rte_IrvWrite_FsftTINR_M_ClchTrqE_VeTINR_M_ClchTrqE_write_IRV
        (KeTINR_M_ClchTrqEDflt);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S8>/FsftTINR_M_ClchTrqEChrt'
     *  SignalConversion generated from: '<S8>/VeTINR_b_ClchTrqEFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ClchTrqE_VeTINR_b_ClchTrqEFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ClchTrqE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_ClchTrqF(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_ClchTrqF' */
    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S9>/FsftTINR_M_ClchTrqFChrt'
     *  SignalConversion generated from: '<S9>/VeTINR_M_ClchTrqF_write'
     */
    /* Gateway: FsftTINR_M_ClchTrqF/FsftTINR_M_ClchTrqFChrt */
    /* During: FsftTINR_M_ClchTrqF/FsftTINR_M_ClchTrqFChrt */
    /* Entry Internal: FsftTINR_M_ClchTrqF/FsftTINR_M_ClchTrqFChrt */
    /* Transition: '<S171>:2' */
    Rte_IrvWrite_FsftTINR_M_ClchTrqF_VeTINR_M_ClchTrqF_write_IRV
        (KeTINR_M_ClchTrqFDflt);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  Chart: '<S9>/FsftTINR_M_ClchTrqFChrt'
     *  SignalConversion generated from: '<S9>/VeTINR_b_ClchTrqFFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_ClchTrqF_VeTINR_b_ClchTrqFFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_ClchTrqF' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_LeadClutch1_TCM(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_LeadClutch1_TCM' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S10>/FsftTINR_M_LeadClutch1_TCMChrt'
     *  SignalConversion generated from: '<S10>/VeTINR_M_LeadClutch1_TCM_write'
     */
    /* Gateway: FsftTINR_M_LeadClutch1_TCM/FsftTINR_M_LeadClutch1_TCMChrt */
    /* During: FsftTINR_M_LeadClutch1_TCM/FsftTINR_M_LeadClutch1_TCMChrt */
    /* Entry Internal: FsftTINR_M_LeadClutch1_TCM/FsftTINR_M_LeadClutch1_TCMChrt */
    /* Transition: '<S172>:2' */
    Rte_IrvWrite_FsftTINR_M_LeadClutch1_TCM_VeTINR_M_LeadClutch1_TCM_write_IRV
        (KeTINR_M_LeadClch1TorqueAtDflt);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  Chart: '<S10>/FsftTINR_M_LeadClutch1_TCMChrt'
     *  SignalConversion generated from: '<S10>/VeTINR_b_LeadClutch1_TCMFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_LeadClutch1_TCM_VeTINR_b_LeadClutch1_TCMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_LeadClutch1_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_M_LeadClutch3_TCM(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_M_LeadClutch3_TCM' */
    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S11>/FsftTINR_M_LeadClutch3_TCMChrt'
     *  SignalConversion generated from: '<S11>/VeTINR_M_LeadClutch3_TCM_write'
     */
    /* Gateway: FsftTINR_M_LeadClutch3_TCM/FsftTINR_M_LeadClutch3_TCMChrt */
    /* During: FsftTINR_M_LeadClutch3_TCM/FsftTINR_M_LeadClutch3_TCMChrt */
    /* Entry Internal: FsftTINR_M_LeadClutch3_TCM/FsftTINR_M_LeadClutch3_TCMChrt */
    /* Transition: '<S173>:2' */
    Rte_IrvWrite_FsftTINR_M_LeadClutch3_TCM_VeTINR_M_LeadClutch3_TCM_write_IRV
        (KeTINR_M_LeadClch3TorqueAtDflt);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S11>/FsftTINR_M_LeadClutch3_TCMChrt'
     *  SignalConversion generated from: '<S11>/VeTINR_b_LeadClutch3_TCMFA_write'
     */
    Rte_IrvWrite_FsftTINR_M_LeadClutch3_TCM_VeTINR_b_LeadClutch3_TCMFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_M_LeadClutch3_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_Pct_TransStrssFctr(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_Pct_TransStrssFctr' */
    /* Outport: '<Root>/VeTINR_Pct_TransStrssFctr' incorporates:
     *  Chart: '<S12>/FsftTINR_Pct_TransStrssFctrChrt'
     *  SignalConversion generated from: '<S12>/VeTINR_Pct_TransStrssFctr'
     */
    /* Gateway: FsftTINR_Pct_TransStrssFctr/FsftTINR_Pct_TransStrssFctrChrt */
    /* During: FsftTINR_Pct_TransStrssFctr/FsftTINR_Pct_TransStrssFctrChrt */
    /* Entry Internal: FsftTINR_Pct_TransStrssFctr/FsftTINR_Pct_TransStrssFctrChrt */
    /* Transition: '<S174>:2' */
    (void)Rte_Write_VeTINR_Pct_TransStrssFctr_Value
        (KeTINR_Pct_TransStrssFctrDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_Pct_TransStrssFctr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_DrvLnMinTrqMd(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_DrvLnMinTrqMd' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S13>/FsftTINR_b_DrvLnMinTrqMdChrt'
     *  SignalConversion generated from: '<S13>/VeTINR_b_DrvLnMinTrqMd_write'
     */
    /* Gateway: FsftTINR_b_DrvLnMinTrqMd/FsftTINR_b_DrvLnMinTrqMdChrt */
    /* During: FsftTINR_b_DrvLnMinTrqMd/FsftTINR_b_DrvLnMinTrqMdChrt */
    /* Entry Internal: FsftTINR_b_DrvLnMinTrqMd/FsftTINR_b_DrvLnMinTrqMdChrt */
    /* Transition: '<S175>:2' */
    Rte_IrvWrite_FsftTINR_b_DrvLnMinTrqMd_VeTINR_b_DrvLnMinTrqMd_write_IRV(false);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_DrvLnMinTrqMd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_DrvLnTrqRq_Axle(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_DrvLnTrqRq_Axle' */
    /* Outport: '<Root>/VeTINR_M_DrvLnTrqRq_Axle' incorporates:
     *  Chart: '<S14>/FsftTINR_b_DrvLnTrqRq_AxleChrt'
     *  SignalConversion generated from: '<S14>/VeTINR_b_DrvLnTrqRq_Axle'
     */
    /* Gateway: FsftTINR_b_DrvLnTrqRq_Axle/FsftTINR_b_DrvLnTrqRq_AxleChrt */
    /* During: FsftTINR_b_DrvLnTrqRq_Axle/FsftTINR_b_DrvLnTrqRq_AxleChrt */
    /* Entry Internal: FsftTINR_b_DrvLnTrqRq_Axle/FsftTINR_b_DrvLnTrqRq_AxleChrt */
    /* Transition: '<S176>:2' */
    (void)Rte_Write_VeTINR_M_DrvLnTrqRq_Axle_Value(KeTINR_M_DrvLnTrqRq_Axle_Dflt);

    /* Outport: '<Root>/VeTINR_b_DrvLnTrqRq_Axle_FA' incorporates:
     *  Chart: '<S14>/FsftTINR_b_DrvLnTrqRq_AxleChrt'
     *  SignalConversion generated from: '<S14>/VeTINR_b_DrvLnTrqRq_AxleFA'
     */
    (void)Rte_Write_VeTINR_b_DrvLnTrqRq_Axle_FA_Value(true);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  Chart: '<S14>/FsftTINR_b_DrvLnTrqRq_AxleChrt'
     *  SignalConversion generated from: '<S14>/VeTINR_b_DrvLnTrqRq_AxleFA_write'
     */
    Rte_IrvWrite_FsftTINR_b_DrvLnTrqRq_Axle_VeTINR_b_DrvLnTrqRq_AxleFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_99_Irv' incorporates:
     *  Chart: '<S14>/FsftTINR_b_DrvLnTrqRq_AxleChrt'
     *  SignalConversion generated from: '<S14>/VeTINR_b_DrvLnTrqRq_Axle_write'
     */
    Rte_IrvWrite_FsftTINR_b_DrvLnTrqRq_Axle_VeTINR_b_DrvLnTrqRq_Axle_write_IRV
        (KeTINR_M_DrvLnTrqRq_Axle_Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_DrvLnTrqRq_Axle' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_DsblAEMD4TCM(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_DsblAEMD4TCM' */
    /* Outport: '<Root>/VeTINR_b_DsblAEMD4TCM' incorporates:
     *  Chart: '<S15>/FsftTINR_b_DsblAEMD4TCMChrt'
     *  SignalConversion generated from: '<S15>/VeTINR_b_DsblAEMD4TCM'
     */
    /* Gateway: FsftTINR_b_DsblAEMD4TCM/FsftTINR_b_DsblAEMD4TCMChrt */
    /* During: FsftTINR_b_DsblAEMD4TCM/FsftTINR_b_DsblAEMD4TCMChrt */
    /* Entry Internal: FsftTINR_b_DsblAEMD4TCM/FsftTINR_b_DsblAEMD4TCMChrt */
    /* Transition: '<S177>:2' */
    (void)Rte_Write_VeTINR_b_DsblAEMD4TCM_Value(KeTINR_b_DsblAEMD4TCM);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_DsblAEMD4TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_ILE_STO_Stat(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_ILE_STO_Stat' */
    /* Outport: '<Root>/VeTINR_b_ILE_STO_Stat' incorporates:
     *  Chart: '<S16>/FsftTINR_b_ILE_STO_StatChrt'
     *  SignalConversion generated from: '<S16>/VeTINR_b_ILE_STO_Stat'
     */
    /* Gateway: FsftTINR_b_ILE_STO_Stat/FsftTINR_b_ILE_STO_StatChrt */
    /* During: FsftTINR_b_ILE_STO_Stat/FsftTINR_b_ILE_STO_StatChrt */
    /* Entry Internal: FsftTINR_b_ILE_STO_Stat/FsftTINR_b_ILE_STO_StatChrt */
    /* Transition: '<S178>:2' */
    (void)Rte_Write_VeTINR_b_ILE_STO_Stat_Value(KeTINR_b_ILE_STO_Stat);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_ILE_STO_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_Inhibit_Gear1(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear1' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear1' incorporates:
     *  Chart: '<S17>/FsftTINR_b_Inhibit_Gear1Chrt'
     *  SignalConversion generated from: '<S17>/VeTINR_b_Inhibit_Gear1'
     */
    /* Gateway: FsftTINR_b_Inhibit_Gear1/FsftTINR_b_Inhibit_Gear1Chrt */
    /* During: FsftTINR_b_Inhibit_Gear1/FsftTINR_b_Inhibit_Gear1Chrt */
    /* Entry Internal: FsftTINR_b_Inhibit_Gear1/FsftTINR_b_Inhibit_Gear1Chrt */
    /* Transition: '<S179>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear1_Value(KeTINR_b_Inhibit_Gear1Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_Inhibit_Gear2(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear2' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear2' incorporates:
     *  Chart: '<S18>/FsftTINR_b_Inhibit_Gear2Chrt'
     *  SignalConversion generated from: '<S18>/VeTINR_b_Inhibit_Gear2'
     */
    /* Gateway: FsftTINR_b_Inhibit_Gear2/FsftTINR_b_Inhibit_Gear2Chrt */
    /* During: FsftTINR_b_Inhibit_Gear2/FsftTINR_b_Inhibit_Gear2Chrt */
    /* Entry Internal: FsftTINR_b_Inhibit_Gear2/FsftTINR_b_Inhibit_Gear2Chrt */
    /* Transition: '<S180>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear2_Value(KeTINR_b_Inhibit_Gear2Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_Inhibit_Gear3(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear3' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear3' incorporates:
     *  Chart: '<S19>/FsftTINR_b_Inhibit_Gear3Chrt'
     *  SignalConversion generated from: '<S19>/VeTINR_b_Inhibit_Gear3'
     */
    /* Gateway: FsftTINR_b_Inhibit_Gear3/FsftTINR_b_Inhibit_Gear3Chrt */
    /* During: FsftTINR_b_Inhibit_Gear3/FsftTINR_b_Inhibit_Gear3Chrt */
    /* Entry Internal: FsftTINR_b_Inhibit_Gear3/FsftTINR_b_Inhibit_Gear3Chrt */
    /* Transition: '<S181>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear3_Value(KeTINR_b_Inhibit_Gear3Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear3' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_Inhibit_Gear4(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear4' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear4' incorporates:
     *  Chart: '<S20>/FsftTINR_b_Inhibit_Gear4Chrt'
     *  SignalConversion generated from: '<S20>/VeTINR_b_Inhibit_Gear4'
     */
    /* Gateway: FsftTINR_b_Inhibit_Gear4/FsftTINR_b_Inhibit_Gear4Chrt */
    /* During: FsftTINR_b_Inhibit_Gear4/FsftTINR_b_Inhibit_Gear4Chrt */
    /* Entry Internal: FsftTINR_b_Inhibit_Gear4/FsftTINR_b_Inhibit_Gear4Chrt */
    /* Transition: '<S182>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear4_Value(KeTINR_b_Inhibit_Gear4Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_Inhibit_Gear4' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_Inhibit_Mode1(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_Inhibit_Mode1' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Mode1' incorporates:
     *  Chart: '<S21>/FsftTINR_b_Inhibit_Mode1Chrt'
     *  SignalConversion generated from: '<S21>/VeTINR_b_Inhibit_Mode1'
     */
    /* Gateway: FsftTINR_b_Inhibit_Mode1/FsftTINR_b_Inhibit_Mode1Chrt */
    /* During: FsftTINR_b_Inhibit_Mode1/FsftTINR_b_Inhibit_Mode1Chrt */
    /* Entry Internal: FsftTINR_b_Inhibit_Mode1/FsftTINR_b_Inhibit_Mode1Chrt */
    /* Transition: '<S183>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Mode1_Value(KeTINR_b_Inhibit_Mode1Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_Inhibit_Mode1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_Inhibit_Mode2(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_Inhibit_Mode2' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Mode2' incorporates:
     *  Chart: '<S22>/FsftTINR_b_Inhibit_Mode2Chrt'
     *  SignalConversion generated from: '<S22>/VeTINR_b_Inhibit_Mode2'
     */
    /* Gateway: FsftTINR_b_Inhibit_Mode2/FsftTINR_b_Inhibit_Mode2Chrt */
    /* During: FsftTINR_b_Inhibit_Mode2/FsftTINR_b_Inhibit_Mode2Chrt */
    /* Entry Internal: FsftTINR_b_Inhibit_Mode2/FsftTINR_b_Inhibit_Mode2Chrt */
    /* Transition: '<S184>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Mode2_Value(KeTINR_b_Inhibit_Mode2Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_Inhibit_Mode2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_Inhibit_Neutral(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_Inhibit_Neutral' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Neutral' incorporates:
     *  Chart: '<S23>/FsftTINR_b_Inhibit_NeutralChrt'
     *  SignalConversion generated from: '<S23>/VeTINR_b_Inhibit_Neutral'
     */
    /* Gateway: FsftTINR_b_Inhibit_Neutral/FsftTINR_b_Inhibit_NeutralChrt */
    /* During: FsftTINR_b_Inhibit_Neutral/FsftTINR_b_Inhibit_NeutralChrt */
    /* Entry Internal: FsftTINR_b_Inhibit_Neutral/FsftTINR_b_Inhibit_NeutralChrt */
    /* Transition: '<S185>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Neutral_Value(KeTINR_b_Inhibit_NeutralDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_Inhibit_Neutral' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_KGB(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_KGB' */
    /* Outport: '<Root>/VeTINR_b_KGB' incorporates:
     *  Chart: '<S24>/FsftTINR_b_KGBChrt'
     *  SignalConversion generated from: '<S24>/VeTINR_b_KGB'
     */
    /* Gateway: FsftTINR_b_KGB/FsftTINR_b_KGBChrt */
    /* During: FsftTINR_b_KGB/FsftTINR_b_KGBChrt */
    /* Entry Internal: FsftTINR_b_KGB/FsftTINR_b_KGBChrt */
    /* Transition: '<S186>:2' */
    (void)Rte_Write_VeTINR_b_KGB_Value(KeTINR_b_KGB);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_KGB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_KOB(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_KOB' */
    /* Outport: '<Root>/VeTINR_b_KOB' incorporates:
     *  Chart: '<S25>/FsftTINR_b_KOBChrt'
     *  SignalConversion generated from: '<S25>/VeTINR_b_KOB'
     */
    /* Gateway: FsftTINR_b_KOB/FsftTINR_b_KOBChrt */
    /* During: FsftTINR_b_KOB/FsftTINR_b_KOBChrt */
    /* Entry Internal: FsftTINR_b_KOB/FsftTINR_b_KOBChrt */
    /* Transition: '<S187>:2' */
    (void)Rte_Write_VeTINR_b_KOB_Value(KeTINR_b_KOB);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_KOB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_KSB(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_KSB' */
    /* Outport: '<Root>/VeTINR_b_KSB' incorporates:
     *  Chart: '<S26>/FsftTINR_b_KSBChrt'
     *  SignalConversion generated from: '<S26>/VeTINR_b_KSB'
     */
    /* Gateway: FsftTINR_b_KSB/FsftTINR_b_KSBChrt */
    /* During: FsftTINR_b_KSB/FsftTINR_b_KSBChrt */
    /* Entry Internal: FsftTINR_b_KSB/FsftTINR_b_KSBChrt */
    /* Transition: '<S188>:2' */
    (void)Rte_Write_VeTINR_b_KSB_Value(KeTINR_b_KSB);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_KSB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_PwrFlowStatus(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_PwrFlowStatus' */
    /* Merge: '<Root>/Merge_79' incorporates:
     *  Chart: '<S27>/FsftTINR_b_PwrFlowStatusChrt'
     *  SignalConversion generated from: '<S27>/VeTINR_b_PwrFlowStatus_write'
     */
    /* Gateway: FsftTINR_b_PwrFlowStatus/FsftTINR_b_PwrFlowStatusChrt */
    /* During: FsftTINR_b_PwrFlowStatus/FsftTINR_b_PwrFlowStatusChrt */
    /* Entry Internal: FsftTINR_b_PwrFlowStatus/FsftTINR_b_PwrFlowStatusChrt */
    /* Transition: '<S189>:2' */
    Rte_IrvWrite_FsftTINR_b_PwrFlowStatus_VeTINR_b_PwrFlowStatus_write_IRV
        (KeTINR_b_PwrFlowStatus);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_PwrFlowStatus' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_TCMSpdCtrlCapable(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_TCMSpdCtrlCapable' */
    /* Outport: '<Root>/VeTINR_b_TCMSpdCtrlCapable' incorporates:
     *  Chart: '<S28>/FsftTINR_b_TCMSpdCtrlCapableChrt'
     *  SignalConversion generated from: '<S28>/VeTINR_b_TCMSpdCtrlCapable'
     */
    /* Gateway: FsftTINR_b_TCMSpdCtrlCapable/FsftTINR_b_TCMSpdCtrlCapableChrt */
    /* During: FsftTINR_b_TCMSpdCtrlCapable/FsftTINR_b_TCMSpdCtrlCapableChrt */
    /* Entry Internal: FsftTINR_b_TCMSpdCtrlCapable/FsftTINR_b_TCMSpdCtrlCapableChrt */
    /* Transition: '<S190>:2' */
    (void)Rte_Write_VeTINR_b_TCMSpdCtrlCapable_Value
        (KeTINR_b_TCMSpdCtrlCapableDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_TCMSpdCtrlCapable' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_TCMTransReqFuelON(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_TCMTransReqFuelON' */
    /* Outport: '<Root>/VeTINR_b_TCMTransReqFuelON' incorporates:
     *  Chart: '<S29>/FsftTINR_b_TCMTransReqFuelONChrt'
     *  SignalConversion generated from: '<S29>/VeTINR_b_TCMTransReqFuelON'
     */
    /* Gateway: FsftTINR_b_TCMTransReqFuelON/FsftTINR_b_TCMTransReqFuelONChrt */
    /* During: FsftTINR_b_TCMTransReqFuelON/FsftTINR_b_TCMTransReqFuelONChrt */
    /* Entry Internal: FsftTINR_b_TCMTransReqFuelON/FsftTINR_b_TCMTransReqFuelONChrt */
    /* Transition: '<S191>:2' */
    (void)Rte_Write_VeTINR_b_TCMTransReqFuelON_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_TCMTransReqFuelON' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_b_TCM_ASCReq(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_b_TCM_ASCReq' */
    /* Outport: '<Root>/VeTINR_b_TCM_ASCReq' incorporates:
     *  Chart: '<S30>/FsftTINR_b_TCM_ASCReqChrt'
     *  SignalConversion generated from: '<S30>/VeTINR_b_TCM_ASCReq'
     */
    /* Gateway: FsftTINR_b_TCM_ASCReq/FsftTINR_b_TCM_ASCReqChrt */
    /* During: FsftTINR_b_TCM_ASCReq/FsftTINR_b_TCM_ASCReqChrt */
    /* Entry Internal: FsftTINR_b_TCM_ASCReq/FsftTINR_b_TCM_ASCReqChrt */
    /* Transition: '<S192>:2' */
    (void)Rte_Write_VeTINR_b_TCM_ASCReq_Value(HeTINR_b_TCM_ASCReqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_b_TCM_ASCReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_d_EngStrtTypAvbl(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_d_EngStrtTypAvbl' */
    /* Outport: '<Root>/VeTINR_b_EngStrtTypAvblFA' incorporates:
     *  Chart: '<S31>/FsftTINR_d_EngStrtTypAvblChrt'
     *  SignalConversion generated from: '<S31>/VeTINR_b_EngStrtTypAvblFA'
     */
    /* Gateway: FsftTINR_d_EngStrtTypAvbl/FsftTINR_d_EngStrtTypAvblChrt */
    /* During: FsftTINR_d_EngStrtTypAvbl/FsftTINR_d_EngStrtTypAvblChrt */
    /* Entry Internal: FsftTINR_d_EngStrtTypAvbl/FsftTINR_d_EngStrtTypAvblChrt */
    /* Transition: '<S193>:2' */
    (void)Rte_Write_VeTINR_b_EngStrtTypAvblFA_Value(true);

    /* Outport: '<Root>/VeTINR_d_EngStrtTypAvbl' incorporates:
     *  Chart: '<S31>/FsftTINR_d_EngStrtTypAvblChrt'
     *  SignalConversion generated from: '<S31>/VeTINR_d_EngStrtTypAvbl'
     */
    (void)Rte_Write_VeTINR_d_EngStrtTypAvbl_Value(HeTINR_d_EngStrtTypAvblDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_d_EngStrtTypAvbl' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_d_TCMFailures(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_d_TCMFailures' */
    /* Merge: '<Root>/Merge_53' incorporates:
     *  Chart: '<S32>/FsftTINR_d_TCMFailuresChrt'
     *  SignalConversion generated from: '<S32>/VeTINR_d_TCMFailures_write'
     */
    /* Gateway: FsftTINR_d_TCMFailures/FsftTINR_d_TCMFailuresChrt */
    /* During: FsftTINR_d_TCMFailures/FsftTINR_d_TCMFailuresChrt */
    /* Entry Internal: FsftTINR_d_TCMFailures/FsftTINR_d_TCMFailuresChrt */
    /* Transition: '<S194>:2' */
    Rte_IrvWrite_FsftTINR_d_TCMFailures_VeTINR_d_TCMFailures_write_IRV
        (KeTINR_d_TCMFailuresDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_d_TCMFailures' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_d_TCMLimphomeFaults(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_d_TCMLimphomeFaults' */
    /* Merge: '<Root>/Merge_59' incorporates:
     *  Chart: '<S33>/FsftTINR_d_TCMLimphomeFaultsChrt'
     *  SignalConversion generated from: '<S33>/VeTINR_b_TCMLimphomeFaultsFA_write'
     */
    /* Gateway: FsftTINR_d_TCMLimphomeFaults/FsftTINR_d_TCMLimphomeFaultsChrt */
    /* During: FsftTINR_d_TCMLimphomeFaults/FsftTINR_d_TCMLimphomeFaultsChrt */
    /* Entry Internal: FsftTINR_d_TCMLimphomeFaults/FsftTINR_d_TCMLimphomeFaultsChrt */
    /* Transition: '<S195>:2' */
    Rte_IrvWrite_FsftTINR_d_TCMLimphomeFaults_VeTINR_b_TCMLimphomeFaultsFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_d_TCMLimphomeFaults' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_d_TCMLimphomeFaultsC1CAN(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_d_TCMLimphomeFaultsC1CAN' */
    /* Merge: '<Root>/Merge_93' incorporates:
     *  Chart: '<S34>/FsftTINR_d_TCMLimphomeFaultsC1CANChrt'
     *  SignalConversion generated from: '<S34>/VeTINR_b_TCMLimphomeFaultsC1CANFA_write'
     */
    /* Gateway: FsftTINR_d_TCMLimphomeFaultsC1CAN/FsftTINR_d_TCMLimphomeFaultsC1CANChrt */
    /* During: FsftTINR_d_TCMLimphomeFaultsC1CAN/FsftTINR_d_TCMLimphomeFaultsC1CANChrt */
    /* Entry Internal: FsftTINR_d_TCMLimphomeFaultsC1CAN/FsftTINR_d_TCMLimphomeFaultsC1CANChrt */
    /* Transition: '<S196>:2' */
    Rte_IrvWrite_FsftTINR_d_TCMLimphomeFaultsC1CAN_VeTINR_b_TCMLimphomeFaultsC1CANFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_d_TCMLimphomeFaultsC1CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_ActualGear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_ActualGear' */
    /* Outport: '<Root>/VeTINR_b_ActualGearFA' incorporates:
     *  Chart: '<S35>/FsftTINR_e_ActualGearChrt'
     *  SignalConversion generated from: '<S35>/VeTINR_b_ActualGearFA'
     */
    /* Gateway: FsftTINR_e_ActualGear/FsftTINR_e_ActualGearChrt */
    /* During: FsftTINR_e_ActualGear/FsftTINR_e_ActualGearChrt */
    /* Entry Internal: FsftTINR_e_ActualGear/FsftTINR_e_ActualGearChrt */
    /* Transition: '<S197>:2' */
    (void)Rte_Write_VeTINR_b_ActualGearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_ActualGear' incorporates:
     *  Chart: '<S35>/FsftTINR_e_ActualGearChrt'
     *  SignalConversion generated from: '<S35>/VeTINR_e_ActualGear'
     */
    (void)Rte_Write_VeTINR_e_ActualGear_Value(KeTINR_e_ActualGearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_ActualGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_Clch1Sts(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_Clch1Sts' */
    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S36>/FsftTINR_e_Clch1StsChrt'
     *  SignalConversion generated from: '<S36>/VeTINR_b_Clch1StsFA_write'
     */
    /* Gateway: FsftTINR_e_Clch1Sts/FsftTINR_e_Clch1StsChrt */
    /* During: FsftTINR_e_Clch1Sts/FsftTINR_e_Clch1StsChrt */
    /* Entry Internal: FsftTINR_e_Clch1Sts/FsftTINR_e_Clch1StsChrt */
    /* Transition: '<S198>:2' */
    Rte_IrvWrite_FsftTINR_e_Clch1Sts_VeTINR_b_Clch1StsFA_write_IRV(true);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S36>/FsftTINR_e_Clch1StsChrt'
     *  SignalConversion generated from: '<S36>/VeTINR_e_Clch1Sts_write'
     */
    Rte_IrvWrite_FsftTINR_e_Clch1Sts_VeTINR_e_Clch1Sts_write_IRV
        (KeTINR_e_Clch1StsAtDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_Clch1Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_Clch3Sts(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_Clch3Sts' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S37>/FsftTINR_e_Clch3StsChrt'
     *  SignalConversion generated from: '<S37>/VeTINR_b_Clch3StsFA_write'
     */
    /* Gateway: FsftTINR_e_Clch3Sts/FsftTINR_e_Clch3StsChrt */
    /* During: FsftTINR_e_Clch3Sts/FsftTINR_e_Clch3StsChrt */
    /* Entry Internal: FsftTINR_e_Clch3Sts/FsftTINR_e_Clch3StsChrt */
    /* Transition: '<S199>:2' */
    Rte_IrvWrite_FsftTINR_e_Clch3Sts_VeTINR_b_Clch3StsFA_write_IRV(true);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  Chart: '<S37>/FsftTINR_e_Clch3StsChrt'
     *  SignalConversion generated from: '<S37>/VeTINR_e_Clch3Sts_write'
     */
    Rte_IrvWrite_FsftTINR_e_Clch3Sts_VeTINR_e_Clch3Sts_write_IRV
        (KeTINR_e_Clch3StsAtDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_Clch3Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_ComFailDflt_C1CAN(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_ComFailDflt_C1CAN' */
    /* Outport: '<Root>/VeTINR_e_ComFailTCM_C1CAN' incorporates:
     *  Chart: '<S38>/FsftTINR_e_ComFailDflt_C1CANChrt'
     *  SignalConversion generated from: '<S38>/VeTINR_e_ComFailDflt_C1CAN'
     */
    /* Gateway: FsftTINR_e_ComFailDflt_C1CAN/FsftTINR_e_ComFailDflt_C1CANChrt */
    /* During: FsftTINR_e_ComFailDflt_C1CAN/FsftTINR_e_ComFailDflt_C1CANChrt */
    /* Entry Internal: FsftTINR_e_ComFailDflt_C1CAN/FsftTINR_e_ComFailDflt_C1CANChrt */
    /* Transition: '<S200>:2' */
    (void)Rte_Write_VeTINR_e_ComFailTCM_C1CAN_Value(KeTINR_e_ComFailDflt_C1CAN);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_ComFailDflt_C1CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_ComFailDflt_ePTCAN(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_ComFailDflt_ePTCAN' */
    /* Outport: '<Root>/VeTINR_e_ComFailTCM_ePtCAN' incorporates:
     *  Chart: '<S39>/FsftTINR_e_ComFailDflt_ePTCANChrt'
     *  SignalConversion generated from: '<S39>/VeTINR_e_ComFailDflt_ePTCAN'
     */
    /* Gateway: FsftTINR_e_ComFailDflt_ePTCAN/FsftTINR_e_ComFailDflt_ePTCANChrt */
    /* During: FsftTINR_e_ComFailDflt_ePTCAN/FsftTINR_e_ComFailDflt_ePTCANChrt */
    /* Entry Internal: FsftTINR_e_ComFailDflt_ePTCAN/FsftTINR_e_ComFailDflt_ePTCANChrt */
    /* Transition: '<S201>:2' */
    (void)Rte_Write_VeTINR_e_ComFailTCM_ePtCAN_Value(KeTINR_e_ComFailDflt_ePTCAN);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_ComFailDflt_ePTCAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_GearShftType(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_GearShftType' */
    /* Outport: '<Root>/VeTINR_b_ShftTypeFA' incorporates:
     *  Chart: '<S40>/FsftTINR_e_GearShftTypeChrt'
     *  SignalConversion generated from: '<S40>/VeTINR_b_GearShftTypeFA'
     */
    /* Gateway: FsftTINR_e_GearShftType/FsftTINR_e_GearShftTypeChrt */
    /* During: FsftTINR_e_GearShftType/FsftTINR_e_GearShftTypeChrt */
    /* Entry Internal: FsftTINR_e_GearShftType/FsftTINR_e_GearShftTypeChrt */
    /* Transition: '<S202>:2' */
    (void)Rte_Write_VeTINR_b_ShftTypeFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_ShftType' incorporates:
     *  Chart: '<S40>/FsftTINR_e_GearShftTypeChrt'
     *  SignalConversion generated from: '<S40>/VeTINR_e_GearShftType'
     */
    (void)Rte_Write_VeTINR_e_ShftType_Value(HeTINR_e_GearShftTypeDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_GearShftType' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_GearShftType2(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_GearShftType2' */
    /* Outport: '<Root>/VeTINR_b_ShftTypeTLFFA' incorporates:
     *  Chart: '<S41>/FsftTINR_e_GearShftType2Chrt'
     *  SignalConversion generated from: '<S41>/VeTINR_b_GearShftType2FA'
     */
    /* Gateway: FsftTINR_e_GearShftType2/FsftTINR_e_GearShftType2Chrt */
    /* During: FsftTINR_e_GearShftType2/FsftTINR_e_GearShftType2Chrt */
    /* Entry Internal: FsftTINR_e_GearShftType2/FsftTINR_e_GearShftType2Chrt */
    /* Transition: '<S203>:2' */
    (void)Rte_Write_VeTINR_b_ShftTypeTLFFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_ShftTypeTLF' incorporates:
     *  Chart: '<S41>/FsftTINR_e_GearShftType2Chrt'
     *  SignalConversion generated from: '<S41>/VeTINR_e_GearShftType2'
     */
    (void)Rte_Write_VeTINR_e_ShftTypeTLF_Value(HeTINR_e_GearShftType2Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_GearShftType2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_HASStatusK0(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_HASStatusK0' */
    /* Outport: '<Root>/VeTINR_e_HASStatusK0' incorporates:
     *  Chart: '<S42>/FsftTINR_e_HASStatusK0Chrt'
     *  SignalConversion generated from: '<S42>/VeTINR_e_HASStatusK0'
     */
    /* Gateway: FsftTINR_e_HASStatusK0/FsftTINR_e_HASStatusK0Chrt */
    /* During: FsftTINR_e_HASStatusK0/FsftTINR_e_HASStatusK0Chrt */
    /* Entry Internal: FsftTINR_e_HASStatusK0/FsftTINR_e_HASStatusK0Chrt */
    /* Transition: '<S204>:2' */
    (void)Rte_Write_VeTINR_e_HASStatusK0_Value(KeTINR_e_HASStatusK0Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_HASStatusK0' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_ILEStat(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_ILEStat' */
    /* Outport: '<Root>/VeTINR_e_ILEStat' incorporates:
     *  Chart: '<S43>/FsftTINR_e_ILEStatChrt'
     *  SignalConversion generated from: '<S43>/VeTINR_e_ILEStat'
     */
    /* Gateway: FsftTINR_e_ILEStat/FsftTINR_e_ILEStatChrt */
    /* During: FsftTINR_e_ILEStat/FsftTINR_e_ILEStatChrt */
    /* Entry Internal: FsftTINR_e_ILEStat/FsftTINR_e_ILEStatChrt */
    /* Transition: '<S205>:2' */
    (void)Rte_Write_VeTINR_e_ILEStat_Value(KeTINR_e_ILEStatDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_ILEStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_K1Status(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_K1Status' */
    /* Outport: '<Root>/VeTINR_e_K1Status' incorporates:
     *  Chart: '<S44>/FsftTINR_e_K1StatusChrt'
     *  SignalConversion generated from: '<S44>/VeTINR_e_K1Status'
     */
    /* Gateway: FsftTINR_e_K1Status/FsftTINR_e_K1StatusChrt */
    /* During: FsftTINR_e_K1Status/FsftTINR_e_K1StatusChrt */
    /* Entry Internal: FsftTINR_e_K1Status/FsftTINR_e_K1StatusChrt */
    /* Transition: '<S206>:2' */
    (void)Rte_Write_VeTINR_e_K1Status_Value(KeTINR_e_K1StatusDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_K1Status' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_MtrBDynFctr(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_MtrBDynFctr' */
    /* Merge: '<Root>/Merge_38' incorporates:
     *  Chart: '<S45>/FsftTINR_e_MtrBDynFctrChrt'
     *  SignalConversion generated from: '<S45>/VeTINR_e_MtrBDynFctr_write'
     */
    /* Gateway: FsftTINR_e_MtrBDynFctr/FsftTINR_e_MtrBDynFctrChrt */
    /* During: FsftTINR_e_MtrBDynFctr/FsftTINR_e_MtrBDynFctrChrt */
    /* Entry Internal: FsftTINR_e_MtrBDynFctr/FsftTINR_e_MtrBDynFctrChrt */
    /* Transition: '<S207>:2' */
    Rte_IrvWrite_FsftTINR_e_MtrBDynFctr_VeTINR_e_MtrBDynFctr_write_IRV
        (KeTINR_e_MtrBDynFctrDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_MtrBDynFctr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_P2SpdCntrlReq(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_P2SpdCntrlReq' */
    /* Outport: '<Root>/VeTINR_e_P2SpdCntrlReq' incorporates:
     *  Chart: '<S46>/FsftTINR_e_P2SpdCntrlReqChrt'
     *  SignalConversion generated from: '<S46>/VeTINR_e_P2SpdCntrlReq'
     */
    /* Gateway: FsftTINR_e_P2SpdCntrlReq/FsftTINR_e_P2SpdCntrlReqChrt */
    /* During: FsftTINR_e_P2SpdCntrlReq/FsftTINR_e_P2SpdCntrlReqChrt */
    /* Entry Internal: FsftTINR_e_P2SpdCntrlReq/FsftTINR_e_P2SpdCntrlReqChrt */
    /* Transition: '<S208>:2' */
    (void)Rte_Write_VeTINR_e_P2SpdCntrlReq_Value(KeTINR_e_P2SpdCntrlReqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_P2SpdCntrlReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_Synchro1Gear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_Synchro1Gear' */
    /* Outport: '<Root>/VeTINR_b_Synchro1GearFA' incorporates:
     *  Chart: '<S47>/FsftTINR_e_Synchro1GearChrt'
     *  SignalConversion generated from: '<S47>/VeTINR_b_Synchro1GearFA'
     */
    /* Gateway: FsftTINR_e_Synchro1Gear/FsftTINR_e_Synchro1GearChrt */
    /* During: FsftTINR_e_Synchro1Gear/FsftTINR_e_Synchro1GearChrt */
    /* Entry Internal: FsftTINR_e_Synchro1Gear/FsftTINR_e_Synchro1GearChrt */
    /* Transition: '<S209>:2' */
    (void)Rte_Write_VeTINR_b_Synchro1GearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_Synchro1Gear' incorporates:
     *  Chart: '<S47>/FsftTINR_e_Synchro1GearChrt'
     *  SignalConversion generated from: '<S47>/VeTINR_e_Synchro1Gear'
     */
    (void)Rte_Write_VeTINR_e_Synchro1Gear_Value(HeTINR_e_Synchro1GearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_Synchro1Gear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_Synchro1Sts(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_Synchro1Sts' */
    /* Outport: '<Root>/VeTINR_e_Synchro1Sts' incorporates:
     *  Chart: '<S48>/FsftTINR_e_Synchro1StsChrt'
     *  SignalConversion generated from: '<S48>/VeTINR_e_Synchro1Sts'
     */
    /* Gateway: FsftTINR_e_Synchro1Sts/FsftTINR_e_Synchro1StsChrt */
    /* During: FsftTINR_e_Synchro1Sts/FsftTINR_e_Synchro1StsChrt */
    /* Entry Internal: FsftTINR_e_Synchro1Sts/FsftTINR_e_Synchro1StsChrt */
    /* Transition: '<S210>:2' */
    (void)Rte_Write_VeTINR_e_Synchro1Sts_Value(KeTINR_e_Synchro1StsDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_Synchro1Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_Synchro2Gear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_Synchro2Gear' */
    /* Outport: '<Root>/VeTINR_b_Synchro2GearFA' incorporates:
     *  Chart: '<S49>/FsftTINR_e_Synchro2GearChrt'
     *  SignalConversion generated from: '<S49>/VeTINR_b_Synchro2GearFA'
     */
    /* Gateway: FsftTINR_e_Synchro2Gear/FsftTINR_e_Synchro2GearChrt */
    /* During: FsftTINR_e_Synchro2Gear/FsftTINR_e_Synchro2GearChrt */
    /* Entry Internal: FsftTINR_e_Synchro2Gear/FsftTINR_e_Synchro2GearChrt */
    /* Transition: '<S211>:2' */
    (void)Rte_Write_VeTINR_b_Synchro2GearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_Synchro2Gear' incorporates:
     *  Chart: '<S49>/FsftTINR_e_Synchro2GearChrt'
     *  SignalConversion generated from: '<S49>/VeTINR_e_Synchro2Gear'
     */
    (void)Rte_Write_VeTINR_e_Synchro2Gear_Value(HeTINR_e_Synchro2GearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_Synchro2Gear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_Synchro2Sts(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_Synchro2Sts' */
    /* Outport: '<Root>/VeTINR_e_Synchro2Sts' incorporates:
     *  Chart: '<S50>/FsftTINR_e_Synchro2StsChrt'
     *  SignalConversion generated from: '<S50>/VeTINR_e_Synchro2Sts'
     */
    /* Gateway: FsftTINR_e_Synchro2Sts/FsftTINR_e_Synchro2StsChrt */
    /* During: FsftTINR_e_Synchro2Sts/FsftTINR_e_Synchro2StsChrt */
    /* Entry Internal: FsftTINR_e_Synchro2Sts/FsftTINR_e_Synchro2StsChrt */
    /* Transition: '<S212>:2' */
    (void)Rte_Write_VeTINR_e_Synchro2Sts_Value(KeTINR_e_Synchro2StsDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_Synchro2Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMHASActMode(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMHASActMode' */
    /* Outport: '<Root>/VeTINR_b_TCMActModeFA' incorporates:
     *  Chart: '<S51>/FsftTINR_e_TCMHASActModeChrt'
     *  SignalConversion generated from: '<S51>/VeTINR_b_TCMHASActModeFA'
     */
    /* Gateway: FsftTINR_e_TCMHASActMode/FsftTINR_e_TCMHASActModeChrt */
    /* During: FsftTINR_e_TCMHASActMode/FsftTINR_e_TCMHASActModeChrt */
    /* Entry Internal: FsftTINR_e_TCMHASActMode/FsftTINR_e_TCMHASActModeChrt */
    /* Transition: '<S213>:2' */
    (void)Rte_Write_VeTINR_b_TCMActModeFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TCMActMode' incorporates:
     *  Chart: '<S51>/FsftTINR_e_TCMHASActModeChrt'
     *  SignalConversion generated from: '<S51>/VeTINR_e_TCMHASActMode'
     */
    (void)Rte_Write_VeTINR_e_TCMActMode_Value(KeTINR_e_TCMHASActModeDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMHASActMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMModeReq(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMModeReq' */
    /* Outport: '<Root>/VeTINR_e_TCMModeReq' incorporates:
     *  Chart: '<S52>/FsftTINR_e_TCMModeReqChrt'
     *  SignalConversion generated from: '<S52>/VeTINR_e_TCMModeReq'
     */
    /* Gateway: FsftTINR_e_TCMModeReq/FsftTINR_e_TCMModeReqChrt */
    /* During: FsftTINR_e_TCMModeReq/FsftTINR_e_TCMModeReqChrt */
    /* Entry Internal: FsftTINR_e_TCMModeReq/FsftTINR_e_TCMModeReqChrt */
    /* Transition: '<S214>:2' */
    (void)Rte_Write_VeTINR_e_TCMModeReq_Value(KeTINR_e_TCMModeReqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMModeReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S53>/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt'
     *  SignalConversion generated from: '<S53>/VeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA_write'
     */
    /* Gateway: FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt */
    /* During: FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt */
    /* Entry Internal: FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt */
    /* Transition: '<S215>:2' */
    Rte_IrvWrite_FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC_VeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S53>/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt'
     *  SignalConversion generated from: '<S53>/VeTINR_e_TCMNeutPhsZeroTrqReq_CANC_write'
     */
    Rte_IrvWrite_FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC_VeTINR_e_TCMNeutPhsZeroTrqReq_CANC_write_IRV
        (HeTINR_e_TCMNeutPhsZeroTrqReq_CANCDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMNeutPhsZeroTrqReq_CANC' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN' */
    /* Merge: '<Root>/Merge_116' incorporates:
     *  Chart: '<S54>/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt'
     *  SignalConversion generated from: '<S54>/VeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA_write'
     */
    /* Gateway: FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt */
    /* During: FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt */
    /* Entry Internal: FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt */
    /* Transition: '<S216>:2' */
    Rte_IrvWrite_FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_VeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  Chart: '<S54>/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt'
     *  SignalConversion generated from: '<S54>/VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_write'
     */
    Rte_IrvWrite_FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_write_IRV
        (HeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMStrtStpOvrrd(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMStrtStpOvrrd' */
    /* Outport: '<Root>/VeTINR_e_TCMStrtStpOvrrd' incorporates:
     *  Chart: '<S55>/FsftTINR_e_TCMStrtStpOvrrdChrt'
     *  SignalConversion generated from: '<S55>/VeTINR_e_TCMStrtStpOvrrd'
     */
    /* Gateway: FsftTINR_e_TCMStrtStpOvrrd/FsftTINR_e_TCMStrtStpOvrrdChrt */
    /* During: FsftTINR_e_TCMStrtStpOvrrd/FsftTINR_e_TCMStrtStpOvrrdChrt */
    /* Entry Internal: FsftTINR_e_TCMStrtStpOvrrd/FsftTINR_e_TCMStrtStpOvrrdChrt */
    /* Transition: '<S217>:2' */
    (void)Rte_Write_VeTINR_e_TCMStrtStpOvrrd_Value(KeTINR_e_TCMStrtStpOvrrd_Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMStrtStpOvrrd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMTCCPreventionID(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMTCCPreventionID' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S56>/FsftTINR_e_TCMTCCPreventionIDChrt'
     *  SignalConversion generated from: '<S56>/VeTINR_e_TCMTCCPreventionID_write'
     */
    /* Gateway: FsftTINR_e_TCMTCCPreventionID/FsftTINR_e_TCMTCCPreventionIDChrt */
    /* During: FsftTINR_e_TCMTCCPreventionID/FsftTINR_e_TCMTCCPreventionIDChrt */
    /* Entry Internal: FsftTINR_e_TCMTCCPreventionID/FsftTINR_e_TCMTCCPreventionIDChrt */
    /* Transition: '<S218>:2' */
    Rte_IrvWrite_FsftTINR_e_TCMTCCPreventionID_VeTINR_e_TCMTCCPreventionID_write_IRV
        (KeTINR_e_TCMTCCPreventionIDDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMTCCPreventionID' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMTrqCntrlModeFast(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMTrqCntrlModeFast' */
    /* Outport: '<Root>/VeTINR_b_TCMTrqCntrlMdFstFA' incorporates:
     *  Chart: '<S57>/FsftTINR_e_TCMTrqCntrlModeFastChrt'
     *  SignalConversion generated from: '<S57>/VeTINR_b_TCMTrqCntrlModeFastFA'
     */
    /* Gateway: FsftTINR_e_TCMTrqCntrlModeFast/FsftTINR_e_TCMTrqCntrlModeFastChrt */
    /* During: FsftTINR_e_TCMTrqCntrlModeFast/FsftTINR_e_TCMTrqCntrlModeFastChrt */
    /* Entry Internal: FsftTINR_e_TCMTrqCntrlModeFast/FsftTINR_e_TCMTrqCntrlModeFastChrt */
    /* Transition: '<S219>:2' */
    (void)Rte_Write_VeTINR_b_TCMTrqCntrlMdFstFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst' incorporates:
     *  Chart: '<S57>/FsftTINR_e_TCMTrqCntrlModeFastChrt'
     *  SignalConversion generated from: '<S57>/VeTINR_e_TCMTrqCntrlModeFast'
     */
    (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdFst_Value
        (KeTINR_e_TCMTrqCntrlMdFstDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMTrqCntrlModeFast' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCMTrqCntrlModeSlow(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCMTrqCntrlModeSlow' */
    /* Outport: '<Root>/VeTINR_b_TCMTrqCntrlMdSlwFA' incorporates:
     *  Chart: '<S58>/FsftTINR_e_TCMTrqCntrlModeSlowChrt'
     *  SignalConversion generated from: '<S58>/VeTINR_b_TCMTrqCntrlModeSlowFA'
     */
    /* Gateway: FsftTINR_e_TCMTrqCntrlModeSlow/FsftTINR_e_TCMTrqCntrlModeSlowChrt */
    /* During: FsftTINR_e_TCMTrqCntrlModeSlow/FsftTINR_e_TCMTrqCntrlModeSlowChrt */
    /* Entry Internal: FsftTINR_e_TCMTrqCntrlModeSlow/FsftTINR_e_TCMTrqCntrlModeSlowChrt */
    /* Transition: '<S220>:2' */
    (void)Rte_Write_VeTINR_b_TCMTrqCntrlMdSlwFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdSlw' incorporates:
     *  Chart: '<S58>/FsftTINR_e_TCMTrqCntrlModeSlowChrt'
     *  SignalConversion generated from: '<S58>/VeTINR_e_TCMTrqCntrlModeSlow'
     */
    (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdSlw_Value
        (KeTINR_e_TCMTrqCntrlMdSlwDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCMTrqCntrlModeSlow' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCM_ActiveEVGear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCM_ActiveEVGear' */
    /* Outport: '<Root>/VeTINR_b_TCM_ActiveEVGearFA' incorporates:
     *  Chart: '<S59>/FsftTINR_e_TCM_ActiveEVGearChrt'
     *  SignalConversion generated from: '<S59>/VeTINR_b_TCM_ActiveEVGearFA'
     */
    /* Gateway: FsftTINR_e_TCM_ActiveEVGear/FsftTINR_e_TCM_ActiveEVGearChrt */
    /* During: FsftTINR_e_TCM_ActiveEVGear/FsftTINR_e_TCM_ActiveEVGearChrt */
    /* Entry Internal: FsftTINR_e_TCM_ActiveEVGear/FsftTINR_e_TCM_ActiveEVGearChrt */
    /* Transition: '<S221>:2' */
    (void)Rte_Write_VeTINR_b_TCM_ActiveEVGearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveEVGear' incorporates:
     *  Chart: '<S59>/FsftTINR_e_TCM_ActiveEVGearChrt'
     *  SignalConversion generated from: '<S59>/VeTINR_e_TCM_ActiveEVGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveEVGear_Value
        (HeTINR_e_TCM_ActiveEVGearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCM_ActiveEVGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCM_ActiveHybridGear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCM_ActiveHybridGear' */
    /* Outport: '<Root>/VeTINR_b_TCM_ActiveHybridGearFA' incorporates:
     *  Chart: '<S60>/FsftTINR_e_TCM_ActiveHybridGearChrt'
     *  SignalConversion generated from: '<S60>/VeTINR_b_TCM_ActiveHybridGearFA'
     */
    /* Gateway: FsftTINR_e_TCM_ActiveHybridGear/FsftTINR_e_TCM_ActiveHybridGearChrt */
    /* During: FsftTINR_e_TCM_ActiveHybridGear/FsftTINR_e_TCM_ActiveHybridGearChrt */
    /* Entry Internal: FsftTINR_e_TCM_ActiveHybridGear/FsftTINR_e_TCM_ActiveHybridGearChrt */
    /* Transition: '<S222>:2' */
    (void)Rte_Write_VeTINR_b_TCM_ActiveHybridGearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveHybridGear' incorporates:
     *  Chart: '<S60>/FsftTINR_e_TCM_ActiveHybridGearChrt'
     *  SignalConversion generated from: '<S60>/VeTINR_e_TCM_ActiveHybridGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveHybridGear_Value
        (HeTINR_e_TCM_ActiveHybridGearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCM_ActiveHybridGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCM_ActiveXNGear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCM_ActiveXNGear' */
    /* Outport: '<Root>/VeTINR_b_TCM_ActiveXNGearFA' incorporates:
     *  Chart: '<S61>/FsftTINR_e_TCM_ActiveXNGearChrt'
     *  SignalConversion generated from: '<S61>/VeTINR_b_TCM_ActiveXNGearFA'
     */
    /* Gateway: FsftTINR_e_TCM_ActiveXNGear/FsftTINR_e_TCM_ActiveXNGearChrt */
    /* During: FsftTINR_e_TCM_ActiveXNGear/FsftTINR_e_TCM_ActiveXNGearChrt */
    /* Entry Internal: FsftTINR_e_TCM_ActiveXNGear/FsftTINR_e_TCM_ActiveXNGearChrt */
    /* Transition: '<S223>:2' */
    (void)Rte_Write_VeTINR_b_TCM_ActiveXNGearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveXNGear' incorporates:
     *  Chart: '<S61>/FsftTINR_e_TCM_ActiveXNGearChrt'
     *  SignalConversion generated from: '<S61>/VeTINR_e_TCM_ActiveXNGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveXNGear_Value
        (HeTINR_e_TCM_ActiveXNGearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCM_ActiveXNGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCM_ClutchStartGear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCM_ClutchStartGear' */
    /* Outport: '<Root>/VeTINR_e_TCM_ClutchStartGear' incorporates:
     *  Chart: '<S62>/FsftTINR_e_TCM_ClutchStartGearChrt'
     *  SignalConversion generated from: '<S62>/VeTINR_e_TCM_ClutchStartGear'
     */
    /* Gateway: FsftTINR_e_TCM_ClutchStartGear/FsftTINR_e_TCM_ClutchStartGearChrt */
    /* During: FsftTINR_e_TCM_ClutchStartGear/FsftTINR_e_TCM_ClutchStartGearChrt */
    /* Entry Internal: FsftTINR_e_TCM_ClutchStartGear/FsftTINR_e_TCM_ClutchStartGearChrt */
    /* Transition: '<S224>:2' */
    (void)Rte_Write_VeTINR_e_TCM_ClutchStartGear_Value
        (HeTINR_e_TCM_ClutchStartGearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCM_ClutchStartGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TCM_PassiveHybridGear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TCM_PassiveHybridGear' */
    /* Outport: '<Root>/VeTINR_b_TCM_PassiveHybridGearFA' incorporates:
     *  Chart: '<S63>/FsftTINR_e_TCM_PassiveHybridGearChrt'
     *  SignalConversion generated from: '<S63>/VeTINR_b_TCM_PassiveHybridGearFA'
     */
    /* Gateway: FsftTINR_e_TCM_PassiveHybridGear/FsftTINR_e_TCM_PassiveHybridGearChrt */
    /* During: FsftTINR_e_TCM_PassiveHybridGear/FsftTINR_e_TCM_PassiveHybridGearChrt */
    /* Entry Internal: FsftTINR_e_TCM_PassiveHybridGear/FsftTINR_e_TCM_PassiveHybridGearChrt */
    /* Transition: '<S225>:2' */
    (void)Rte_Write_VeTINR_b_TCM_PassiveHybridGearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TCM_PassiveHybridGear' incorporates:
     *  Chart: '<S63>/FsftTINR_e_TCM_PassiveHybridGearChrt'
     *  SignalConversion generated from: '<S63>/VeTINR_e_TCM_PassiveHybridGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_PassiveHybridGear_Value
        (HeTINR_e_TCM_PassiveHybridGearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TCM_PassiveHybridGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TargetGear(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TargetGear' */
    /* Outport: '<Root>/VeTINR_b_TargetGearFA' incorporates:
     *  Chart: '<S64>/FsftTINR_e_TargetGearChrt'
     *  SignalConversion generated from: '<S64>/VeTINR_b_TargetGearFA'
     */
    /* Gateway: FsftTINR_e_TargetGear/FsftTINR_e_TargetGearChrt */
    /* During: FsftTINR_e_TargetGear/FsftTINR_e_TargetGearChrt */
    /* Entry Internal: FsftTINR_e_TargetGear/FsftTINR_e_TargetGearChrt */
    /* Transition: '<S226>:2' */
    (void)Rte_Write_VeTINR_b_TargetGearFA_Value(true);

    /* Outport: '<Root>/VeTINR_e_TargetGear' incorporates:
     *  Chart: '<S64>/FsftTINR_e_TargetGearChrt'
     *  SignalConversion generated from: '<S64>/VeTINR_e_TargetGear'
     */
    (void)Rte_Write_VeTINR_e_TargetGear_Value(KeTINR_e_TargetGearDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TargetGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_e_TransAdpStatus(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_e_TransAdpStatus' */
    /* Merge: '<Root>/Merge_112' incorporates:
     *  Chart: '<S65>/FsftTINR_e_TransAdpStatusChrt'
     *  SignalConversion generated from: '<S65>/VeTINR_e_TransAdpStatus_write'
     */
    /* Gateway: FsftTINR_e_TransAdpStatus/FsftTINR_e_TransAdpStatusChrt */
    /* During: FsftTINR_e_TransAdpStatus/FsftTINR_e_TransAdpStatusChrt */
    /* Entry Internal: FsftTINR_e_TransAdpStatus/FsftTINR_e_TransAdpStatusChrt */
    /* Transition: '<S227>:2' */
    Rte_IrvWrite_FsftTINR_e_TransAdpStatus_VeTINR_e_TransAdpStatus_write_IRV
        (KeTINR_e_TransAdpStsDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_e_TransAdpStatus' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_i_TCM_DriveProgram(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_i_TCM_DriveProgram' */
    /* Outport: '<Root>/VeTINR_i_TCM_DriveProgram' incorporates:
     *  Chart: '<S66>/FsftTINR_i_TCM_DriveProgramChrt'
     *  SignalConversion generated from: '<S66>/VeTINR_i_TCM_DriveProgram'
     */
    /* Gateway: FsftTINR_i_TCM_DriveProgram/FsftTINR_i_TCM_DriveProgramChrt */
    /* During: FsftTINR_i_TCM_DriveProgram/FsftTINR_i_TCM_DriveProgramChrt */
    /* Entry Internal: FsftTINR_i_TCM_DriveProgram/FsftTINR_i_TCM_DriveProgramChrt */
    /* Transition: '<S228>:2' */
    (void)Rte_Write_VeTINR_i_TCM_DriveProgram_Value
        (KeTINR_i_TCM_DriveProgramDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_i_TCM_DriveProgram' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_i_TCM_MaxGearAllwd(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_i_TCM_MaxGearAllwd' */
    /* Merge: '<Root>/Merge_65' incorporates:
     *  Chart: '<S67>/FsftTINR_i_TCM_MaxGearAllwdChrt'
     *  SignalConversion generated from: '<S67>/VeTINR_b_TCM_MaxGearAllwdFA_write'
     */
    /* Gateway: FsftTINR_i_TCM_MaxGearAllwd/FsftTINR_i_TCM_MaxGearAllwdChrt */
    /* During: FsftTINR_i_TCM_MaxGearAllwd/FsftTINR_i_TCM_MaxGearAllwdChrt */
    /* Entry Internal: FsftTINR_i_TCM_MaxGearAllwd/FsftTINR_i_TCM_MaxGearAllwdChrt */
    /* Transition: '<S229>:2' */
    Rte_IrvWrite_FsftTINR_i_TCM_MaxGearAllwd_VeTINR_b_TCM_MaxGearAllwdFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_63' incorporates:
     *  Chart: '<S67>/FsftTINR_i_TCM_MaxGearAllwdChrt'
     *  SignalConversion generated from: '<S67>/VeTINR_i_TCM_MaxGearAllwd_write'
     */
    Rte_IrvWrite_FsftTINR_i_TCM_MaxGearAllwd_VeTINR_i_TCM_MaxGearAllwd_write_IRV
        (KeTINR_i_TCM_MaxGearAllwdDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_i_TCM_MaxGearAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_i_TCM_MinGearAllwd(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_i_TCM_MinGearAllwd' */
    /* Merge: '<Root>/Merge_58' incorporates:
     *  Chart: '<S68>/FsftTINR_i_TCM_MinGearAllwdChrt'
     *  SignalConversion generated from: '<S68>/VeTINR_b_TCM_MinGearAllwdFA_write'
     */
    /* Gateway: FsftTINR_i_TCM_MinGearAllwd/FsftTINR_i_TCM_MinGearAllwdChrt */
    /* During: FsftTINR_i_TCM_MinGearAllwd/FsftTINR_i_TCM_MinGearAllwdChrt */
    /* Entry Internal: FsftTINR_i_TCM_MinGearAllwd/FsftTINR_i_TCM_MinGearAllwdChrt */
    /* Transition: '<S230>:2' */
    Rte_IrvWrite_FsftTINR_i_TCM_MinGearAllwd_VeTINR_b_TCM_MinGearAllwdFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  Chart: '<S68>/FsftTINR_i_TCM_MinGearAllwdChrt'
     *  SignalConversion generated from: '<S68>/VeTINR_i_TCM_MinGearAllwd_write'
     */
    Rte_IrvWrite_FsftTINR_i_TCM_MinGearAllwd_VeTINR_i_TCM_MinGearAllwd_write_IRV
        (KeTINR_i_TCM_MinGearAllwdDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_i_TCM_MinGearAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_n_DisengageILE(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_n_DisengageILE' */
    /* Outport: '<Root>/VeTINR_n_DisengageILE' incorporates:
     *  Chart: '<S69>/FsftTINR_n_DisengageILEChrt'
     *  SignalConversion generated from: '<S69>/VeTINR_n_DisengageILE'
     */
    /* Gateway: FsftTINR_n_DisengageILE/FsftTINR_n_DisengageILEChrt */
    /* During: FsftTINR_n_DisengageILE/FsftTINR_n_DisengageILEChrt */
    /* Entry Internal: FsftTINR_n_DisengageILE/FsftTINR_n_DisengageILEChrt */
    /* Transition: '<S231>:2' */
    (void)Rte_Write_VeTINR_n_DisengageILE_Value(KeTINR_n_DisengageILE_Dflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_n_DisengageILE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_n_NiMinForLockUp(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_n_NiMinForLockUp' */
    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S70>/VaTINR_n_NiMinForLockUp_write'
     */
    /* Gateway: FsftTINR_n_NiMinForLockUp/FsftTINR_n_NiMinForLockUpChrt */
    /* During: FsftTINR_n_NiMinForLockUp/FsftTINR_n_NiMinForLockUpChrt */
    /* Entry Internal: FsftTINR_n_NiMinForLockUp/FsftTINR_n_NiMinForLockUpChrt */
    /* Transition: '<S232>:3' */
    Rte_IrvWrite_FsftTINR_n_NiMinForLockUp_VaTINR_n_NiMinForLockUp_write_IRV(((
        const float32 *)&(KaTINR_n_NiMinForLockUpDflt[0])));

    /* Merge: '<Root>/Merge_72' incorporates:
     *  Chart: '<S70>/FsftTINR_n_NiMinForLockUpChrt'
     *  SignalConversion generated from: '<S70>/VeTINR_b_NiMinForLockUpFA_write'
     */
    Rte_IrvWrite_FsftTINR_n_NiMinForLockUp_VeTINR_b_NiMinForLockUpFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_n_NiMinForLockUp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_n_NiMinForLockUpCoast(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_n_NiMinForLockUpCoast' */
    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S71>/VaTINR_n_NiMinForLockUpCoast_write'
     */
    /* Gateway: FsftTINR_n_NiMinForLockUpCoast/FsftTINR_n_NiMinForLockUpCoastChrt */
    /* During: FsftTINR_n_NiMinForLockUpCoast/FsftTINR_n_NiMinForLockUpCoastChrt */
    /* Entry Internal: FsftTINR_n_NiMinForLockUpCoast/FsftTINR_n_NiMinForLockUpCoastChrt */
    /* Transition: '<S233>:3' */
    Rte_IrvWrite_FsftTINR_n_NiMinForLockUpCoast_VaTINR_n_NiMinForLockUpCoast_write_IRV
        (((const float32 *)&(KaTINR_n_NiMinForLockUpCoastDflt[0])));

    /* Merge: '<Root>/Merge_77' incorporates:
     *  Chart: '<S71>/FsftTINR_n_NiMinForLockUpCoastChrt'
     *  SignalConversion generated from: '<S71>/VeTINR_b_NiMinForLockUpCoastFA_write'
     */
    Rte_IrvWrite_FsftTINR_n_NiMinForLockUpCoast_VeTINR_b_NiMinForLockUpCoastFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_n_NiMinForLockUpCoast' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_n_NiMinToOpen(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_n_NiMinToOpen' */
    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S72>/VaTINR_n_NiMinToOpen_write'
     */
    /* Gateway: FsftTINR_n_NiMinToOpen/FsftTINR_n_NiMinToOpenChrt */
    /* During: FsftTINR_n_NiMinToOpen/FsftTINR_n_NiMinToOpenChrt */
    /* Entry Internal: FsftTINR_n_NiMinToOpen/FsftTINR_n_NiMinToOpenChrt */
    /* Transition: '<S234>:3' */
    Rte_IrvWrite_FsftTINR_n_NiMinToOpen_VaTINR_n_NiMinToOpen_write_IRV(((const
        float32 *)&(KaTINR_n_NiMinToOpenDflt[0])));

    /* Merge: '<Root>/Merge_57' incorporates:
     *  Chart: '<S72>/FsftTINR_n_NiMinToOpenChrt'
     *  SignalConversion generated from: '<S72>/VeTINR_b_NiMinToOpenFA_write'
     */
    Rte_IrvWrite_FsftTINR_n_NiMinToOpen_VeTINR_b_NiMinToOpenFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_n_NiMinToOpen' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_n_NiMinToOpenCoast(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_n_NiMinToOpenCoast' */
    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S73>/VaTINR_n_NiMinToOpenCoast_write'
     */
    /* Gateway: FsftTINR_n_NiMinToOpenCoast/FsftTINR_n_NiMinToOpenCoastChrt */
    /* During: FsftTINR_n_NiMinToOpenCoast/FsftTINR_n_NiMinToOpenCoastChrt */
    /* Entry Internal: FsftTINR_n_NiMinToOpenCoast/FsftTINR_n_NiMinToOpenCoastChrt */
    /* Transition: '<S235>:3' */
    Rte_IrvWrite_FsftTINR_n_NiMinToOpenCoast_VaTINR_n_NiMinToOpenCoast_write_IRV
        (((const float32 *)&(KaTINR_n_NiMinToOpenCoastDflt[0])));

    /* Merge: '<Root>/Merge_75' incorporates:
     *  Chart: '<S73>/FsftTINR_n_NiMinToOpenCoastChrt'
     *  SignalConversion generated from: '<S73>/VeTINR_b_NiMinToOpenCoastFA_write'
     */
    Rte_IrvWrite_FsftTINR_n_NiMinToOpenCoast_VeTINR_b_NiMinToOpenCoastFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_n_NiMinToOpenCoast' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_r_DriveLineRatioCanC(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_r_DriveLineRatioCanC' */
    /* Merge: '<Root>/Merge_91' incorporates:
     *  Chart: '<S74>/FsftTINR_r_DriveLineRatioCanCChrt'
     *  SignalConversion generated from: '<S74>/VeTINR_b_DriveLineRatioCanCFA_write'
     */
    /* Gateway: FsftTINR_r_DriveLineRatioCanC/FsftTINR_r_DriveLineRatioCanCChrt */
    /* During: FsftTINR_r_DriveLineRatioCanC/FsftTINR_r_DriveLineRatioCanCChrt */
    /* Entry Internal: FsftTINR_r_DriveLineRatioCanC/FsftTINR_r_DriveLineRatioCanCChrt */
    /* Transition: '<S236>:2' */
    Rte_IrvWrite_FsftTINR_r_DriveLineRatioCanC_VeTINR_b_DriveLineRatioCanCFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_89' incorporates:
     *  Chart: '<S74>/FsftTINR_r_DriveLineRatioCanCChrt'
     *  SignalConversion generated from: '<S74>/VeTINR_r_DriveLineRatioCanC_write'
     */
    Rte_IrvWrite_FsftTINR_r_DriveLineRatioCanC_VeTINR_r_DriveLineRatioCanC_write_IRV
        (KeTINR_r_DriveLineRatioInit);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_r_DriveLineRatioCanC' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_r_DriveLineRatioEpt(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_r_DriveLineRatioEpt' */
    /* Merge: '<Root>/Merge_88' incorporates:
     *  Chart: '<S75>/FsftTINR_r_DriveLineRatioEptChrt'
     *  SignalConversion generated from: '<S75>/VeTINR_b_DriveLineRatioEptFA_write'
     */
    /* Gateway: FsftTINR_r_DriveLineRatioEpt/FsftTINR_r_DriveLineRatioEptChrt */
    /* During: FsftTINR_r_DriveLineRatioEpt/FsftTINR_r_DriveLineRatioEptChrt */
    /* Entry Internal: FsftTINR_r_DriveLineRatioEpt/FsftTINR_r_DriveLineRatioEptChrt */
    /* Transition: '<S237>:2' */
    Rte_IrvWrite_FsftTINR_r_DriveLineRatioEpt_VeTINR_b_DriveLineRatioEptFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  Chart: '<S75>/FsftTINR_r_DriveLineRatioEptChrt'
     *  SignalConversion generated from: '<S75>/VeTINR_r_DriveLineRatioEpt_write'
     */
    Rte_IrvWrite_FsftTINR_r_DriveLineRatioEpt_VeTINR_r_DriveLineRatioEpt_write_IRV
        (KeTINR_r_DriveLineRatioInit);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_r_DriveLineRatioEpt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_r_MechDrivelineRatio(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_r_MechDrivelineRatio' */
    /* Outport: '<Root>/VeTINR_b_Mech_DrivelineRatioFA' incorporates:
     *  Chart: '<S76>/FsftTINR_r_MechDrivelineRatioChrt'
     *  SignalConversion generated from: '<S76>/VeTINR_b_MechDrivelineRatioFA_write'
     */
    /* Gateway: FsftTINR_r_MechDrivelineRatio/FsftTINR_r_MechDrivelineRatioChrt */
    /* During: FsftTINR_r_MechDrivelineRatio/FsftTINR_r_MechDrivelineRatioChrt */
    /* Entry Internal: FsftTINR_r_MechDrivelineRatio/FsftTINR_r_MechDrivelineRatioChrt */
    /* Transition: '<S238>:2' */
    (void)Rte_Write_VeTINR_b_Mech_DrivelineRatioFA_Value(true);

    /* Outport: '<Root>/VeTINR_r_Mech_DrivelineRatio' incorporates:
     *  Chart: '<S76>/FsftTINR_r_MechDrivelineRatioChrt'
     *  SignalConversion generated from: '<S76>/VeTINR_r_MechDrivelineRatio_write'
     */
    (void)Rte_Write_VeTINR_r_Mech_DrivelineRatio_Value
        (KeTINR_r_MechDrivelineRatioInit);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_r_MechDrivelineRatio' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_r_TCC_TR(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_r_TCC_TR' */
    /* Outport: '<Root>/VeTINR_b_TCC_TR_Gen4FA' incorporates:
     *  Chart: '<S77>/FsftTINR_r_TCC_TRChrt'
     *  SignalConversion generated from: '<S77>/VeTINR_b_TCC_TRFA_write'
     */
    /* Gateway: FsftTINR_r_TCC_TR/FsftTINR_r_TCC_TRChrt */
    /* During: FsftTINR_r_TCC_TR/FsftTINR_r_TCC_TRChrt */
    /* Entry Internal: FsftTINR_r_TCC_TR/FsftTINR_r_TCC_TRChrt */
    /* Transition: '<S239>:2' */
    (void)Rte_Write_VeTINR_b_TCC_TR_Gen4FA_Value(true);

    /* Outport: '<Root>/VeTINR_r_TCC_TR_Gen4' incorporates:
     *  Chart: '<S77>/FsftTINR_r_TCC_TRChrt'
     *  SignalConversion generated from: '<S77>/VeTINR_r_TCC_TR_write'
     */
    (void)Rte_Write_VeTINR_r_TCC_TR_Gen4_Value(KeTINR_r_TCC_TRInit);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_r_TCC_TR' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_r_TCM_HillMode(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_r_TCM_HillMode' */
    /* Merge: '<Root>/Merge_61' incorporates:
     *  Chart: '<S78>/FsftTINR_r_TCM_HillModeChrt'
     *  SignalConversion generated from: '<S78>/VeTINR_r_TCM_HillMode_write'
     */
    /* Gateway: FsftTINR_r_TCM_HillMode/FsftTINR_r_TCM_HillModeChrt */
    /* During: FsftTINR_r_TCM_HillMode/FsftTINR_r_TCM_HillModeChrt */
    /* Entry Internal: FsftTINR_r_TCM_HillMode/FsftTINR_r_TCM_HillModeChrt */
    /* Transition: '<S240>:2' */
    Rte_IrvWrite_FsftTINR_r_TCM_HillMode_VeTINR_r_TCM_HillMode_write_IRV
        (KeTINR_r_TCM_HillModeDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_r_TCM_HillMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) FsftTINR_r_TransTrqRatio(void)
{

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/FsftTINR_r_TransTrqRatio' */
    /* Outport: '<Root>/VeTINR_b_TCMTransTrqRatioFA' incorporates:
     *  Chart: '<S79>/FsftTINR_r_TransTrqRatioChrt'
     *  SignalConversion generated from: '<S79>/VeTINR_b_TransTrqRatioFA'
     */
    /* Gateway: FsftTINR_r_TransTrqRatio/FsftTINR_r_TransTrqRatioChrt */
    /* During: FsftTINR_r_TransTrqRatio/FsftTINR_r_TransTrqRatioChrt */
    /* Entry Internal: FsftTINR_r_TransTrqRatio/FsftTINR_r_TransTrqRatioChrt */
    /* Transition: '<S241>:2' */
    (void)Rte_Write_VeTINR_b_TCMTransTrqRatioFA_Value(true);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  Chart: '<S79>/FsftTINR_r_TransTrqRatioChrt'
     *  SignalConversion generated from: '<S79>/VeTINR_r_TransTrqRatio_write'
     */
    Rte_IrvWrite_FsftTINR_r_TransTrqRatio_VeTINR_r_TransTrqRatio_write_IRV
        (KeTINR_r_TCM_TransTrqRatioDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTINR_r_TransTrqRatio' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_Cnt_TCM_DriverType(VAR(sint16, AUTOMATIC)
    LeTINR_Cnt_TCM_DriverType, VAR(boolean, AUTOMATIC) LeTINR_b_TCM_DriverTypeFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_Cnt_TCM_DriverType);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_DriverTypeFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_Cnt_TCM_DriverType' */
    /* Chart: '<S80>/PokeTINR_Cnt_TCM_DriverTypeChrt' incorporates:
     *  SignalConversion generated from: '<S80>/LeTINR_b_TCM_DriverTypeFA'
     */
    /* Gateway: PokeTINR_Cnt_TCM_DriverType/PokeTINR_Cnt_TCM_DriverTypeChrt */
    /* During: PokeTINR_Cnt_TCM_DriverType/PokeTINR_Cnt_TCM_DriverTypeChrt */
    /* Entry Internal: PokeTINR_Cnt_TCM_DriverType/PokeTINR_Cnt_TCM_DriverTypeChrt */
    /* Transition: '<S242>:2' */
    if (!LeTINR_b_TCM_DriverTypeFA)
    {
        /* SignalConversion generated from: '<S80>/VeTINR_Cnt_TCM_DriverType' incorporates:
         *  Outport: '<Root>/VeTINR_Cnt_TCM_DriverType'
         *  SignalConversion generated from: '<S80>/LeTINR_Cnt_TCM_DriverType'
         */
        /* Transition: '<S242>:3' */
        /* Transition: '<S242>:15' */
        (void)Rte_Write_VeTINR_Cnt_TCM_DriverType_Value
            (LeTINR_Cnt_TCM_DriverType);

        /* Transition: '<S242>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S80>/VeTINR_Cnt_TCM_DriverType' incorporates:
         *  Outport: '<Root>/VeTINR_Cnt_TCM_DriverType'
         */
        /* Transition: '<S242>:4' */
        (void)Rte_Write_VeTINR_Cnt_TCM_DriverType_Value
            (KeTINR_Cnt_TCM_DriverTypeDflt);
    }

    /* End of Chart: '<S80>/PokeTINR_Cnt_TCM_DriverTypeChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_Cnt_TCM_DriverType' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ActualClutch1_TCM(VAR(float32, AUTOMATIC)
    LeTINR_M_ActualClutch1_TCM, VAR(boolean, AUTOMATIC)
    LeTINR_b_ActualClutch1_TCMFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ActualClutch1_TCMFA_out_p;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ActualClutch1_TCM);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ActualClutch1_TCMFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ActualClutch1_TCM' */
    /* Chart: '<S81>/PokeTINR_M_ActualClutch1_TCMChrt' incorporates:
     *  SignalConversion generated from: '<S81>/LeTINR_b_ActualClutch1_TCMFA'
     */
    /* Gateway: PokeTINR_M_ActualClutch1_TCM/PokeTINR_M_ActualClutch1_TCMChrt */
    /* During: PokeTINR_M_ActualClutch1_TCM/PokeTINR_M_ActualClutch1_TCMChrt */
    /* Entry Internal: PokeTINR_M_ActualClutch1_TCM/PokeTINR_M_ActualClutch1_TCMChrt */
    /* Transition: '<S243>:2' */
    if (!LeTINR_b_ActualClutch1_TCMFA)
    {
        /* SignalConversion generated from: '<S81>/VeTINR_M_ActualClutch1_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_25'
         *  SignalConversion generated from: '<S81>/LeTINR_M_ActualClutch1_TCM'
         */
        /* Transition: '<S243>:3' */
        /* Transition: '<S243>:15' */
        Rte_IrvWrite_PokeTINR_M_ActualClutch1_TCM_VeTINR_M_ActualClutch1_TCM_write_IRV
            (LeTINR_M_ActualClutch1_TCM);
        rtb_LeTINR_b_ActualClutch1_TCMFA_out_p = false;

        /* Transition: '<S243>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S81>/VeTINR_M_ActualClutch1_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_25'
         */
        /* Transition: '<S243>:4' */
        Rte_IrvWrite_PokeTINR_M_ActualClutch1_TCM_VeTINR_M_ActualClutch1_TCM_write_IRV
            (KeTINR_M_ActualClch1TorqueAtDflt);
        rtb_LeTINR_b_ActualClutch1_TCMFA_out_p = true;
    }

    /* End of Chart: '<S81>/PokeTINR_M_ActualClutch1_TCMChrt' */

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S81>/VeTINR_b_ActualClutch1_TCMFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ActualClutch1_TCM_VeTINR_b_ActualClutch1_TCMFA_write_IRV
        (rtb_LeTINR_b_ActualClutch1_TCMFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ActualClutch1_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ActualClutch3_TCM(VAR(float32, AUTOMATIC)
    LeTINR_M_ActualClutch3_TCM, VAR(boolean, AUTOMATIC)
    LeTINR_b_ActualClutch3_TCMFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ActualClutch3_TCMFA_out_p;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ActualClutch3_TCM);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ActualClutch3_TCMFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ActualClutch3_TCM' */
    /* Chart: '<S82>/PokeTINR_M_ActualClutch3_TCMChrt' incorporates:
     *  SignalConversion generated from: '<S82>/LeTINR_b_ActualClutch3_TCMFA'
     */
    /* Gateway: PokeTINR_M_ActualClutch3_TCM/PokeTINR_M_ActualClutch3_TCMChrt */
    /* During: PokeTINR_M_ActualClutch3_TCM/PokeTINR_M_ActualClutch3_TCMChrt */
    /* Entry Internal: PokeTINR_M_ActualClutch3_TCM/PokeTINR_M_ActualClutch3_TCMChrt */
    /* Transition: '<S244>:2' */
    if (!LeTINR_b_ActualClutch3_TCMFA)
    {
        /* SignalConversion generated from: '<S82>/VeTINR_M_ActualClutch3_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_31'
         *  SignalConversion generated from: '<S82>/LeTINR_M_ActualClutch3_TCM'
         */
        /* Transition: '<S244>:3' */
        /* Transition: '<S244>:15' */
        Rte_IrvWrite_PokeTINR_M_ActualClutch3_TCM_VeTINR_M_ActualClutch3_TCM_write_IRV
            (LeTINR_M_ActualClutch3_TCM);
        rtb_LeTINR_b_ActualClutch3_TCMFA_out_p = false;

        /* Transition: '<S244>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S82>/VeTINR_M_ActualClutch3_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_31'
         */
        /* Transition: '<S244>:4' */
        Rte_IrvWrite_PokeTINR_M_ActualClutch3_TCM_VeTINR_M_ActualClutch3_TCM_write_IRV
            (KeTINR_M_ActualClch3TorqueAtDflt);
        rtb_LeTINR_b_ActualClutch3_TCMFA_out_p = true;
    }

    /* End of Chart: '<S82>/PokeTINR_M_ActualClutch3_TCMChrt' */

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S82>/VeTINR_b_ActualClutch3_TCMFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ActualClutch3_TCM_VeTINR_b_ActualClutch3_TCMFA_write_IRV
        (rtb_LeTINR_b_ActualClutch3_TCMFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ActualClutch3_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ClchTrqA(VAR(float32, AUTOMATIC)
    LeTINR_M_ClchTrqA, VAR(boolean, AUTOMATIC) LeTINR_b_ClchTrqAFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ClchTrqAFA_out_c;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ClchTrqA);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ClchTrqAFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ClchTrqA' */
    /* Chart: '<S83>/PokeTINR_M_ClchTrqAChrt' incorporates:
     *  SignalConversion generated from: '<S83>/LeTINR_b_ClchTrqAFA'
     */
    /* Gateway: PokeTINR_M_ClchTrqA/PokeTINR_M_ClchTrqAChrt */
    /* During: PokeTINR_M_ClchTrqA/PokeTINR_M_ClchTrqAChrt */
    /* Entry Internal: PokeTINR_M_ClchTrqA/PokeTINR_M_ClchTrqAChrt */
    /* Transition: '<S245>:2' */
    if (!LeTINR_b_ClchTrqAFA)
    {
        /* SignalConversion generated from: '<S83>/VeTINR_M_ClchTrqA_write' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S83>/LeTINR_M_ClchTrqA'
         */
        /* Transition: '<S245>:3' */
        /* Transition: '<S245>:15' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqA_VeTINR_M_ClchTrqA_write_IRV
            (LeTINR_M_ClchTrqA);
        rtb_LeTINR_b_ClchTrqAFA_out_c = false;

        /* Transition: '<S245>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S83>/VeTINR_M_ClchTrqA_write' incorporates:
         *  Merge: '<Root>/Merge_11'
         */
        /* Transition: '<S245>:4' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqA_VeTINR_M_ClchTrqA_write_IRV
            (KeTINR_M_ClchTrqADflt);
        rtb_LeTINR_b_ClchTrqAFA_out_c = true;
    }

    /* End of Chart: '<S83>/PokeTINR_M_ClchTrqAChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S83>/VeTINR_b_ClchTrqAFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ClchTrqA_VeTINR_b_ClchTrqAFA_write_IRV
        (rtb_LeTINR_b_ClchTrqAFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ClchTrqA' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ClchTrqB(VAR(float32, AUTOMATIC)
    LeTINR_M_ClchTrqB, VAR(boolean, AUTOMATIC) LeTINR_b_ClchTrqBFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ClchTrqBFA_out_l;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ClchTrqB);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ClchTrqBFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ClchTrqB' */
    /* Chart: '<S84>/PokeTINR_M_ClchTrqBChrt' incorporates:
     *  SignalConversion generated from: '<S84>/LeTINR_b_ClchTrqBFA'
     */
    /* Gateway: PokeTINR_M_ClchTrqB/PokeTINR_M_ClchTrqBChrt */
    /* During: PokeTINR_M_ClchTrqB/PokeTINR_M_ClchTrqBChrt */
    /* Entry Internal: PokeTINR_M_ClchTrqB/PokeTINR_M_ClchTrqBChrt */
    /* Transition: '<S246>:2' */
    if (!LeTINR_b_ClchTrqBFA)
    {
        /* SignalConversion generated from: '<S84>/VeTINR_M_ClchTrqB_write' incorporates:
         *  Merge: '<Root>/Merge_16'
         *  SignalConversion generated from: '<S84>/LeTINR_M_ClchTrqB'
         */
        /* Transition: '<S246>:3' */
        /* Transition: '<S246>:15' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqB_VeTINR_M_ClchTrqB_write_IRV
            (LeTINR_M_ClchTrqB);
        rtb_LeTINR_b_ClchTrqBFA_out_l = false;

        /* Transition: '<S246>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S84>/VeTINR_M_ClchTrqB_write' incorporates:
         *  Merge: '<Root>/Merge_16'
         */
        /* Transition: '<S246>:4' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqB_VeTINR_M_ClchTrqB_write_IRV
            (KeTINR_M_ClchTrqBDflt);
        rtb_LeTINR_b_ClchTrqBFA_out_l = true;
    }

    /* End of Chart: '<S84>/PokeTINR_M_ClchTrqBChrt' */

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S84>/VeTINR_b_ClchTrqBFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ClchTrqB_VeTINR_b_ClchTrqBFA_write_IRV
        (rtb_LeTINR_b_ClchTrqBFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ClchTrqB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ClchTrqC(VAR(float32, AUTOMATIC)
    LeTINR_M_ClchTrqC, VAR(boolean, AUTOMATIC) LeTINR_b_ClchTrqCFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ClchTrqCFA_out_k;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ClchTrqC);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ClchTrqCFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ClchTrqC' */
    /* Chart: '<S85>/PokeTINR_M_ClchTrqCChrt' incorporates:
     *  SignalConversion generated from: '<S85>/LeTINR_b_ClchTrqCFA'
     */
    /* Gateway: PokeTINR_M_ClchTrqC/PokeTINR_M_ClchTrqCChrt */
    /* During: PokeTINR_M_ClchTrqC/PokeTINR_M_ClchTrqCChrt */
    /* Entry Internal: PokeTINR_M_ClchTrqC/PokeTINR_M_ClchTrqCChrt */
    /* Transition: '<S247>:2' */
    if (!LeTINR_b_ClchTrqCFA)
    {
        /* SignalConversion generated from: '<S85>/VeTINR_M_ClchTrqC_write' incorporates:
         *  Merge: '<Root>/Merge_18'
         *  SignalConversion generated from: '<S85>/LeTINR_M_ClchTrqC'
         */
        /* Transition: '<S247>:3' */
        /* Transition: '<S247>:15' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqC_VeTINR_M_ClchTrqC_write_IRV
            (LeTINR_M_ClchTrqC);
        rtb_LeTINR_b_ClchTrqCFA_out_k = false;

        /* Transition: '<S247>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S85>/VeTINR_M_ClchTrqC_write' incorporates:
         *  Merge: '<Root>/Merge_18'
         */
        /* Transition: '<S247>:4' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqC_VeTINR_M_ClchTrqC_write_IRV
            (KeTINR_M_ClchTrqCDflt);
        rtb_LeTINR_b_ClchTrqCFA_out_k = true;
    }

    /* End of Chart: '<S85>/PokeTINR_M_ClchTrqCChrt' */

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S85>/VeTINR_b_ClchTrqCFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ClchTrqC_VeTINR_b_ClchTrqCFA_write_IRV
        (rtb_LeTINR_b_ClchTrqCFA_out_k);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ClchTrqC' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ClchTrqD(VAR(float32, AUTOMATIC)
    LeTINR_M_ClchTrqD, VAR(boolean, AUTOMATIC) LeTINR_b_ClchTrqDFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ClchTrqDFA_out_a;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ClchTrqD);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ClchTrqDFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ClchTrqD' */
    /* Chart: '<S86>/PokeTINR_M_ClchTrqDChrt' incorporates:
     *  SignalConversion generated from: '<S86>/LeTINR_b_ClchTrqDFA'
     */
    /* Gateway: PokeTINR_M_ClchTrqD/PokeTINR_M_ClchTrqDChrt */
    /* During: PokeTINR_M_ClchTrqD/PokeTINR_M_ClchTrqDChrt */
    /* Entry Internal: PokeTINR_M_ClchTrqD/PokeTINR_M_ClchTrqDChrt */
    /* Transition: '<S248>:2' */
    if (!LeTINR_b_ClchTrqDFA)
    {
        /* SignalConversion generated from: '<S86>/VeTINR_M_ClchTrqD_write' incorporates:
         *  Merge: '<Root>/Merge_20'
         *  SignalConversion generated from: '<S86>/LeTINR_M_ClchTrqD'
         */
        /* Transition: '<S248>:3' */
        /* Transition: '<S248>:15' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqD_VeTINR_M_ClchTrqD_write_IRV
            (LeTINR_M_ClchTrqD);
        rtb_LeTINR_b_ClchTrqDFA_out_a = false;

        /* Transition: '<S248>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S86>/VeTINR_M_ClchTrqD_write' incorporates:
         *  Merge: '<Root>/Merge_20'
         */
        /* Transition: '<S248>:4' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqD_VeTINR_M_ClchTrqD_write_IRV
            (KeTINR_M_ClchTrqDDflt);
        rtb_LeTINR_b_ClchTrqDFA_out_a = true;
    }

    /* End of Chart: '<S86>/PokeTINR_M_ClchTrqDChrt' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S86>/VeTINR_b_ClchTrqDFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ClchTrqD_VeTINR_b_ClchTrqDFA_write_IRV
        (rtb_LeTINR_b_ClchTrqDFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ClchTrqD' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ClchTrqE(VAR(float32, AUTOMATIC)
    LeTINR_M_ClchTrqE, VAR(boolean, AUTOMATIC) LeTINR_b_ClchTrqEFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ClchTrqEFA_out_m;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ClchTrqE);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ClchTrqEFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ClchTrqE' */
    /* Chart: '<S87>/PokeTINR_M_ClchTrqEChrt' incorporates:
     *  SignalConversion generated from: '<S87>/LeTINR_b_ClchTrqEFA'
     */
    /* Gateway: PokeTINR_M_ClchTrqE/PokeTINR_M_ClchTrqEChrt */
    /* During: PokeTINR_M_ClchTrqE/PokeTINR_M_ClchTrqEChrt */
    /* Entry Internal: PokeTINR_M_ClchTrqE/PokeTINR_M_ClchTrqEChrt */
    /* Transition: '<S249>:2' */
    if (!LeTINR_b_ClchTrqEFA)
    {
        /* SignalConversion generated from: '<S87>/VeTINR_M_ClchTrqE_write' incorporates:
         *  Merge: '<Root>/Merge_22'
         *  SignalConversion generated from: '<S87>/LeTINR_M_ClchTrqE'
         */
        /* Transition: '<S249>:3' */
        /* Transition: '<S249>:15' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqE_VeTINR_M_ClchTrqE_write_IRV
            (LeTINR_M_ClchTrqE);
        rtb_LeTINR_b_ClchTrqEFA_out_m = false;

        /* Transition: '<S249>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S87>/VeTINR_M_ClchTrqE_write' incorporates:
         *  Merge: '<Root>/Merge_22'
         */
        /* Transition: '<S249>:4' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqE_VeTINR_M_ClchTrqE_write_IRV
            (KeTINR_M_ClchTrqEDflt);
        rtb_LeTINR_b_ClchTrqEFA_out_m = true;
    }

    /* End of Chart: '<S87>/PokeTINR_M_ClchTrqEChrt' */

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S87>/VeTINR_b_ClchTrqEFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ClchTrqE_VeTINR_b_ClchTrqEFA_write_IRV
        (rtb_LeTINR_b_ClchTrqEFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ClchTrqE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_ClchTrqF(VAR(float32, AUTOMATIC)
    LeTINR_M_ClchTrqF, VAR(boolean, AUTOMATIC) LeTINR_b_ClchTrqFFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ClchTrqFFA_out_d;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_ClchTrqF);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ClchTrqFFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_ClchTrqF' */
    /* Chart: '<S88>/PokeTINR_M_ClchTrqFChrt' incorporates:
     *  SignalConversion generated from: '<S88>/LeTINR_b_ClchTrqFFA'
     */
    /* Gateway: PokeTINR_M_ClchTrqF/PokeTINR_M_ClchTrqFChrt */
    /* During: PokeTINR_M_ClchTrqF/PokeTINR_M_ClchTrqFChrt */
    /* Entry Internal: PokeTINR_M_ClchTrqF/PokeTINR_M_ClchTrqFChrt */
    /* Transition: '<S250>:2' */
    if (!LeTINR_b_ClchTrqFFA)
    {
        /* SignalConversion generated from: '<S88>/VeTINR_M_ClchTrqF_write' incorporates:
         *  Merge: '<Root>/Merge_14'
         *  SignalConversion generated from: '<S88>/LeTINR_M_ClchTrqF'
         */
        /* Transition: '<S250>:3' */
        /* Transition: '<S250>:15' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqF_VeTINR_M_ClchTrqF_write_IRV
            (LeTINR_M_ClchTrqF);
        rtb_LeTINR_b_ClchTrqFFA_out_d = false;

        /* Transition: '<S250>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S88>/VeTINR_M_ClchTrqF_write' incorporates:
         *  Merge: '<Root>/Merge_14'
         */
        /* Transition: '<S250>:4' */
        Rte_IrvWrite_PokeTINR_M_ClchTrqF_VeTINR_M_ClchTrqF_write_IRV
            (KeTINR_M_ClchTrqFDflt);
        rtb_LeTINR_b_ClchTrqFFA_out_d = true;
    }

    /* End of Chart: '<S88>/PokeTINR_M_ClchTrqFChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S88>/VeTINR_b_ClchTrqFFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_ClchTrqF_VeTINR_b_ClchTrqFFA_write_IRV
        (rtb_LeTINR_b_ClchTrqFFA_out_d);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_ClchTrqF' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_DrvLnTrqRq_Axle(VAR(float32, AUTOMATIC)
    LeTINR_M_DrvLnTrqRq_Axle, VAR(boolean, AUTOMATIC) LeTINR_b_DrvLnTrqRq_AxleFA)
{

#if Rte_SysCon_Variant_TINR_1

    float32 rtb_LeTINR_M_DrvLnTrqRq_Axle_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_DrvLnTrqRq_AxleFA_out_h;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_DrvLnTrqRq_Axle);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_DrvLnTrqRq_AxleFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_DrvLnTrqRq_Axle' */
    /* Chart: '<S89>/PokeTINR_M_DrvLnTrqRq_AxleChrt' incorporates:
     *  SignalConversion generated from: '<S89>/LeTINR_M_DrvLnTrqRq_Axle'
     *  SignalConversion generated from: '<S89>/LeTINR_b_DrvLnTrqRq_AxleFA'
     */
    /* Gateway: PokeTINR_M_DrvLnTrqRq_Axle/PokeTINR_M_DrvLnTrqRq_AxleChrt */
    /* During: PokeTINR_M_DrvLnTrqRq_Axle/PokeTINR_M_DrvLnTrqRq_AxleChrt */
    /* Entry Internal: PokeTINR_M_DrvLnTrqRq_Axle/PokeTINR_M_DrvLnTrqRq_AxleChrt */
    /* Transition: '<S251>:2' */
    if (!LeTINR_b_DrvLnTrqRq_AxleFA)
    {
        /* Transition: '<S251>:3' */
        /* Transition: '<S251>:15' */
        rtb_LeTINR_M_DrvLnTrqRq_Axle_out = LeTINR_M_DrvLnTrqRq_Axle;
        rtb_LeTINR_b_DrvLnTrqRq_AxleFA_out_h = false;

        /* Transition: '<S251>:18' */
    }
    else
    {
        /* Transition: '<S251>:4' */
        rtb_LeTINR_M_DrvLnTrqRq_Axle_out = KeTINR_M_DrvLnTrqRq_Axle_Dflt;
        rtb_LeTINR_b_DrvLnTrqRq_AxleFA_out_h = true;
    }

    /* End of Chart: '<S89>/PokeTINR_M_DrvLnTrqRq_AxleChrt' */

    /* Outport: '<Root>/VeTINR_M_DrvLnTrqRq_Axle' incorporates:
     *  SignalConversion generated from: '<S89>/VeTINR_M_DrvLnTrqRq_Axle'
     */
    (void)Rte_Write_VeTINR_M_DrvLnTrqRq_Axle_Value
        (rtb_LeTINR_M_DrvLnTrqRq_Axle_out);

    /* Outport: '<Root>/VeTINR_b_DrvLnTrqRq_Axle_FA' incorporates:
     *  SignalConversion generated from: '<S89>/VeTINR_b_DrvLnTrqRq_AxleFA'
     */
    (void)Rte_Write_VeTINR_b_DrvLnTrqRq_Axle_FA_Value
        (rtb_LeTINR_b_DrvLnTrqRq_AxleFA_out_h);

    /* Merge: '<Root>/Merge_99_Irv' incorporates:
     *  SignalConversion generated from: '<S89>/VeTINR_M_DrvLnTrqRq_Axle_write'
     * */
    Rte_IrvWrite_PokeTINR_M_DrvLnTrqRq_Axle_VeTINR_b_DrvLnTrqRq_Axle_write_IRV
        (rtb_LeTINR_M_DrvLnTrqRq_Axle_out);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S89>/VeTINR_b_DrvLnTrqRq_AxleFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_DrvLnTrqRq_Axle_VeTINR_b_DrvLnTrqRq_AxleFA_write_IRV
        (rtb_LeTINR_b_DrvLnTrqRq_AxleFA_out_h);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_DrvLnTrqRq_Axle' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_LeadClutch1_TCM(VAR(float32, AUTOMATIC)
    LeTINR_M_LeadClutch1_TCM, VAR(boolean, AUTOMATIC) LeTINR_b_LeadClutch1_TCMFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_LeadClutch1_TCMFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_LeadClutch1_TCM);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_LeadClutch1_TCMFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_LeadClutch1_TCM' */
    /* Chart: '<S90>/PokeTINR_M_LeadClutch1_TCMChrt' incorporates:
     *  SignalConversion generated from: '<S90>/LeTINR_b_LeadClutch1_TCMFA'
     */
    /* Gateway: PokeTINR_M_LeadClutch1_TCM/PokeTINR_M_LeadClutch1_TCMChrt */
    /* During: PokeTINR_M_LeadClutch1_TCM/PokeTINR_M_LeadClutch1_TCMChrt */
    /* Entry Internal: PokeTINR_M_LeadClutch1_TCM/PokeTINR_M_LeadClutch1_TCMChrt */
    /* Transition: '<S252>:2' */
    if (!LeTINR_b_LeadClutch1_TCMFA)
    {
        /* SignalConversion generated from: '<S90>/VeTINR_M_LeadClutch1_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_33'
         *  SignalConversion generated from: '<S90>/LeTINR_M_LeadClutch1_TCM'
         */
        /* Transition: '<S252>:3' */
        /* Transition: '<S252>:15' */
        Rte_IrvWrite_PokeTINR_M_LeadClutch1_TCM_VeTINR_M_LeadClutch1_TCM_write_IRV
            (LeTINR_M_LeadClutch1_TCM);
        rtb_LeTINR_b_LeadClutch1_TCMFA_out = false;

        /* Transition: '<S252>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S90>/VeTINR_M_LeadClutch1_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_33'
         */
        /* Transition: '<S252>:4' */
        Rte_IrvWrite_PokeTINR_M_LeadClutch1_TCM_VeTINR_M_LeadClutch1_TCM_write_IRV
            (KeTINR_M_LeadClch1TorqueAtDflt);
        rtb_LeTINR_b_LeadClutch1_TCMFA_out = true;
    }

    /* End of Chart: '<S90>/PokeTINR_M_LeadClutch1_TCMChrt' */

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S90>/VeTINR_b_LeadClutch1_TCMFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_LeadClutch1_TCM_VeTINR_b_LeadClutch1_TCMFA_write_IRV
        (rtb_LeTINR_b_LeadClutch1_TCMFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_LeadClutch1_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_M_LeadClutch3_TCM(VAR(float32, AUTOMATIC)
    LeTINR_M_LeadClutch3_TCM, VAR(boolean, AUTOMATIC) LeTINR_b_LeadClutch3_TCMFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_LeadClutch3_TCMFA_out_p;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_M_LeadClutch3_TCM);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_LeadClutch3_TCMFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_M_LeadClutch3_TCM' */
    /* Chart: '<S91>/PokeTINR_M_LeadClutch3_TCMChrt' incorporates:
     *  SignalConversion generated from: '<S91>/LeTINR_b_LeadClutch3_TCMFA'
     */
    /* Gateway: PokeTINR_M_LeadClutch3_TCM/PokeTINR_M_LeadClutch3_TCMChrt */
    /* During: PokeTINR_M_LeadClutch3_TCM/PokeTINR_M_LeadClutch3_TCMChrt */
    /* Entry Internal: PokeTINR_M_LeadClutch3_TCM/PokeTINR_M_LeadClutch3_TCMChrt */
    /* Transition: '<S253>:2' */
    if (!LeTINR_b_LeadClutch3_TCMFA)
    {
        /* SignalConversion generated from: '<S91>/VeTINR_M_LeadClutch3_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_36'
         *  SignalConversion generated from: '<S91>/LeTINR_M_LeadClutch3_TCM'
         */
        /* Transition: '<S253>:3' */
        /* Transition: '<S253>:15' */
        Rte_IrvWrite_PokeTINR_M_LeadClutch3_TCM_VeTINR_M_LeadClutch3_TCM_write_IRV
            (LeTINR_M_LeadClutch3_TCM);
        rtb_LeTINR_b_LeadClutch3_TCMFA_out_p = false;

        /* Transition: '<S253>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S91>/VeTINR_M_LeadClutch3_TCM_write' incorporates:
         *  Merge: '<Root>/Merge_36'
         */
        /* Transition: '<S253>:4' */
        Rte_IrvWrite_PokeTINR_M_LeadClutch3_TCM_VeTINR_M_LeadClutch3_TCM_write_IRV
            (KeTINR_M_LeadClch3TorqueAtDflt);
        rtb_LeTINR_b_LeadClutch3_TCMFA_out_p = true;
    }

    /* End of Chart: '<S91>/PokeTINR_M_LeadClutch3_TCMChrt' */

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S91>/VeTINR_b_LeadClutch3_TCMFA_write'
     * */
    Rte_IrvWrite_PokeTINR_M_LeadClutch3_TCM_VeTINR_b_LeadClutch3_TCMFA_write_IRV
        (rtb_LeTINR_b_LeadClutch3_TCMFA_out_p);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_M_LeadClutch3_TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_Pct_TransStrssFctr(VAR(float32, AUTOMATIC)
    LeTINR_Pct_TransStrssFctr, VAR(boolean, AUTOMATIC) LeTINR_b_TransStrssFctrFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_Pct_TransStrssFctr);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TransStrssFctrFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_Pct_TransStrssFctr' */
    /* Chart: '<S92>/PokeTINR_Pct_TransStrssFctrChrt' incorporates:
     *  SignalConversion generated from: '<S92>/LeTINR_b_TransStrssFctrFA'
     */
    /* Gateway: PokeTINR_Pct_TransStrssFctr/PokeTINR_Pct_TransStrssFctrChrt */
    /* During: PokeTINR_Pct_TransStrssFctr/PokeTINR_Pct_TransStrssFctrChrt */
    /* Entry Internal: PokeTINR_Pct_TransStrssFctr/PokeTINR_Pct_TransStrssFctrChrt */
    /* Transition: '<S254>:2' */
    if (!LeTINR_b_TransStrssFctrFA)
    {
        /* SignalConversion generated from: '<S92>/VeTINR_Pct_TransStrssFctr' incorporates:
         *  Outport: '<Root>/VeTINR_Pct_TransStrssFctr'
         *  SignalConversion generated from: '<S92>/LeTINR_Pct_TransStrssFctr'
         */
        /* Transition: '<S254>:3' */
        /* Transition: '<S254>:15' */
        (void)Rte_Write_VeTINR_Pct_TransStrssFctr_Value
            (LeTINR_Pct_TransStrssFctr);

        /* Transition: '<S254>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S92>/VeTINR_Pct_TransStrssFctr' incorporates:
         *  Outport: '<Root>/VeTINR_Pct_TransStrssFctr'
         */
        /* Transition: '<S254>:4' */
        (void)Rte_Write_VeTINR_Pct_TransStrssFctr_Value
            (KeTINR_Pct_TransStrssFctrDflt);
    }

    /* End of Chart: '<S92>/PokeTINR_Pct_TransStrssFctrChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_Pct_TransStrssFctr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_DrvLnMinTrqMd(VAR(boolean, AUTOMATIC)
    LeTINR_b_DrvLnMinTrqMd)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_DrvLnMinTrqMd);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_DrvLnMinTrqMd' */
    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S93>/LeTINR_b_DrvLnMinTrqMd'
     *  SignalConversion generated from: '<S93>/VeTINR_b_DrvLnMinTrqMd_write'
     */
    /* Gateway: PokeTINR_b_DrvLnMinTrqMd/PokeTINR_b_DrvLnMinTrqMdChrt */
    /* During: PokeTINR_b_DrvLnMinTrqMd/PokeTINR_b_DrvLnMinTrqMdChrt */
    /* Entry Internal: PokeTINR_b_DrvLnMinTrqMd/PokeTINR_b_DrvLnMinTrqMdChrt */
    /* Transition: '<S255>:2' */
    Rte_IrvWrite_PokeTINR_b_DrvLnMinTrqMd_VeTINR_b_DrvLnMinTrqMd_write_IRV
        (LeTINR_b_DrvLnMinTrqMd);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_DrvLnMinTrqMd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_DsblAEMD4TCM(VAR(boolean, AUTOMATIC)
    LeTINR_b_DsblAEMD4TCM)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_DsblAEMD4TCM);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_DsblAEMD4TCM' */
    /* Outport: '<Root>/VeTINR_b_DsblAEMD4TCM' incorporates:
     *  SignalConversion generated from: '<S94>/VeTINR_b_DsblAEMD4TCM'
     *  SignalConversion generated from: '<S94>/LeTINR_b_DsblAEMD4TCM'
     */
    /* Gateway: PokeTINR_b_DsblAEMD4TCM/PokeTINR_b_DsblAEMD4TCMChrt */
    /* During: PokeTINR_b_DsblAEMD4TCM/PokeTINR_b_DsblAEMD4TCMChrt */
    /* Entry Internal: PokeTINR_b_DsblAEMD4TCM/PokeTINR_b_DsblAEMD4TCMChrt */
    /* Transition: '<S256>:2' */
    (void)Rte_Write_VeTINR_b_DsblAEMD4TCM_Value(LeTINR_b_DsblAEMD4TCM);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_DsblAEMD4TCM' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_ILE_STO_Stat(VAR(boolean, AUTOMATIC)
    LeTINR_b_ILE_STO_Stat)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ILE_STO_Stat);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_ILE_STO_Stat' */
    /* Outport: '<Root>/VeTINR_b_ILE_STO_Stat' incorporates:
     *  SignalConversion generated from: '<S95>/VeTINR_b_ILE_STO_Stat'
     *  SignalConversion generated from: '<S95>/LeTINR_b_ILE_STO_Stat'
     */
    /* Gateway: PokeTINR_b_ILE_STO_Stat/PokeTINR_b_ILE_STO_StatChrt */
    /* During: PokeTINR_b_ILE_STO_Stat/PokeTINR_b_ILE_STO_StatChrt */
    /* Entry Internal: PokeTINR_b_ILE_STO_Stat/PokeTINR_b_ILE_STO_StatChrt */
    /* Transition: '<S257>:2' */
    (void)Rte_Write_VeTINR_b_ILE_STO_Stat_Value(LeTINR_b_ILE_STO_Stat);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_ILE_STO_Stat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_Inhibit_Gear1(VAR(boolean, AUTOMATIC)
    LeTINR_b_Inhibit_Gear1)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Inhibit_Gear1);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear1' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear1' incorporates:
     *  SignalConversion generated from: '<S96>/VeTINR_b_Inhibit_Gear1'
     *  SignalConversion generated from: '<S96>/LeTINR_b_Inhibit_Gear1'
     */
    /* Gateway: PokeTINR_b_Inhibit_Gear1/PokeTINR_b_Inhibit_Gear1Chrt */
    /* During: PokeTINR_b_Inhibit_Gear1/PokeTINR_b_Inhibit_Gear1Chrt */
    /* Entry Internal: PokeTINR_b_Inhibit_Gear1/PokeTINR_b_Inhibit_Gear1Chrt */
    /* Transition: '<S258>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear1_Value(LeTINR_b_Inhibit_Gear1);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_Inhibit_Gear2(VAR(boolean, AUTOMATIC)
    LeTINR_b_Inhibit_Gear2)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Inhibit_Gear2);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear2' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear2' incorporates:
     *  SignalConversion generated from: '<S97>/VeTINR_b_Inhibit_Gear2'
     *  SignalConversion generated from: '<S97>/LeTINR_b_Inhibit_Gear2'
     */
    /* Gateway: PokeTINR_b_Inhibit_Gear2/PokeTINR_b_Inhibit_Gear2Chrt */
    /* During: PokeTINR_b_Inhibit_Gear2/PokeTINR_b_Inhibit_Gear2Chrt */
    /* Entry Internal: PokeTINR_b_Inhibit_Gear2/PokeTINR_b_Inhibit_Gear2Chrt */
    /* Transition: '<S259>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear2_Value(LeTINR_b_Inhibit_Gear2);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_Inhibit_Gear3(VAR(boolean, AUTOMATIC)
    LeTINR_b_Inhibit_Gear3)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Inhibit_Gear3);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear3' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear3' incorporates:
     *  SignalConversion generated from: '<S98>/VeTINR_b_Inhibit_Gear3'
     *  SignalConversion generated from: '<S98>/LeTINR_b_Inhibit_Gear3'
     */
    /* Gateway: PokeTINR_b_Inhibit_Gear3/PokeTINR_b_Inhibit_Gear3Chrt */
    /* During: PokeTINR_b_Inhibit_Gear3/PokeTINR_b_Inhibit_Gear3Chrt */
    /* Entry Internal: PokeTINR_b_Inhibit_Gear3/PokeTINR_b_Inhibit_Gear3Chrt */
    /* Transition: '<S260>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear3_Value(LeTINR_b_Inhibit_Gear3);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear3' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_Inhibit_Gear4(VAR(boolean, AUTOMATIC)
    LeTINR_b_Inhibit_Gear4)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Inhibit_Gear4);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear4' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear4' incorporates:
     *  SignalConversion generated from: '<S99>/VeTINR_b_Inhibit_Gear4'
     *  SignalConversion generated from: '<S99>/LeTINR_b_Inhibit_Gear4'
     */
    /* Gateway: PokeTINR_b_Inhibit_Gear4/PokeTINR_b_Inhibit_Gear4Chrt */
    /* During: PokeTINR_b_Inhibit_Gear4/PokeTINR_b_Inhibit_Gear4Chrt */
    /* Entry Internal: PokeTINR_b_Inhibit_Gear4/PokeTINR_b_Inhibit_Gear4Chrt */
    /* Transition: '<S261>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear4_Value(LeTINR_b_Inhibit_Gear4);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_Inhibit_Gear4' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_Inhibit_Mode1(VAR(boolean, AUTOMATIC)
    LeTINR_b_Inhibit_Mode1)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Inhibit_Mode1);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_Inhibit_Mode1' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Mode1' incorporates:
     *  SignalConversion generated from: '<S100>/VeTINR_b_Inhibit_Mode1'
     *  SignalConversion generated from: '<S100>/LeTINR_b_Inhibit_Mode1'
     */
    /* Gateway: PokeTINR_b_Inhibit_Mode1/PokeTINR_b_Inhibit_Mode1Chrt */
    /* During: PokeTINR_b_Inhibit_Mode1/PokeTINR_b_Inhibit_Mode1Chrt */
    /* Entry Internal: PokeTINR_b_Inhibit_Mode1/PokeTINR_b_Inhibit_Mode1Chrt */
    /* Transition: '<S262>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Mode1_Value(LeTINR_b_Inhibit_Mode1);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_Inhibit_Mode1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_Inhibit_Mode2(VAR(boolean, AUTOMATIC)
    LeTINR_b_Inhibit_Mode2)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Inhibit_Mode2);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_Inhibit_Mode2' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Mode2' incorporates:
     *  SignalConversion generated from: '<S101>/VeTINR_b_Inhibit_Mode2'
     *  SignalConversion generated from: '<S101>/LeTINR_b_Inhibit_Mode2'
     */
    /* Gateway: PokeTINR_b_Inhibit_Mode2/PokeTINR_b_Inhibit_Mode2Chrt */
    /* During: PokeTINR_b_Inhibit_Mode2/PokeTINR_b_Inhibit_Mode2Chrt */
    /* Entry Internal: PokeTINR_b_Inhibit_Mode2/PokeTINR_b_Inhibit_Mode2Chrt */
    /* Transition: '<S263>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Mode2_Value(LeTINR_b_Inhibit_Mode2);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_Inhibit_Mode2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_Inhibit_Neutral(VAR(boolean, AUTOMATIC)
    LeTINR_b_Inhibit_Neutral)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Inhibit_Neutral);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_Inhibit_Neutral' */
    /* Outport: '<Root>/VeTINR_b_Inhibit_Neutral' incorporates:
     *  SignalConversion generated from: '<S102>/VeTINR_b_Inhibit_Neutral'
     *  SignalConversion generated from: '<S102>/LeTINR_b_Inhibit_Neutral'
     */
    /* Gateway: PokeTINR_b_Inhibit_Neutral/PokeTINR_b_Inhibit_NeutralChrt */
    /* During: PokeTINR_b_Inhibit_Neutral/PokeTINR_b_Inhibit_NeutralChrt */
    /* Entry Internal: PokeTINR_b_Inhibit_Neutral/PokeTINR_b_Inhibit_NeutralChrt */
    /* Transition: '<S264>:2' */
    (void)Rte_Write_VeTINR_b_Inhibit_Neutral_Value(LeTINR_b_Inhibit_Neutral);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_Inhibit_Neutral' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_KGB(VAR(boolean, AUTOMATIC) LeTINR_b_KGB)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_KGB);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_KGB' */
    /* Outport: '<Root>/VeTINR_b_KGB' incorporates:
     *  SignalConversion generated from: '<S103>/VeTINR_b_KGB'
     *  SignalConversion generated from: '<S103>/LeTINR_b_KGB'
     */
    /* Gateway: PokeTINR_b_KGB/PokeTINR_b_KGBChrt */
    /* During: PokeTINR_b_KGB/PokeTINR_b_KGBChrt */
    /* Entry Internal: PokeTINR_b_KGB/PokeTINR_b_KGBChrt */
    /* Transition: '<S265>:2' */
    (void)Rte_Write_VeTINR_b_KGB_Value(LeTINR_b_KGB);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_KGB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_KOB(VAR(boolean, AUTOMATIC) LeTINR_b_KOB)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_KOB);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_KOB' */
    /* Outport: '<Root>/VeTINR_b_KOB' incorporates:
     *  SignalConversion generated from: '<S104>/VeTINR_b_KOB'
     *  SignalConversion generated from: '<S104>/LeTINR_b_KOB'
     */
    /* Gateway: PokeTINR_b_KOB/PokeTINR_b_KOBChrt */
    /* During: PokeTINR_b_KOB/PokeTINR_b_KOBChrt */
    /* Entry Internal: PokeTINR_b_KOB/PokeTINR_b_KOBChrt */
    /* Transition: '<S266>:2' */
    (void)Rte_Write_VeTINR_b_KOB_Value(LeTINR_b_KOB);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_KOB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_KSB(VAR(boolean, AUTOMATIC) LeTINR_b_KSB)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_KSB);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_KSB' */
    /* Outport: '<Root>/VeTINR_b_KSB' incorporates:
     *  SignalConversion generated from: '<S105>/VeTINR_b_KSB'
     *  SignalConversion generated from: '<S105>/LeTINR_b_KSB'
     */
    /* Gateway: PokeTINR_b_KSB/PokeTINR_b_KSBChrt */
    /* During: PokeTINR_b_KSB/PokeTINR_b_KSBChrt */
    /* Entry Internal: PokeTINR_b_KSB/PokeTINR_b_KSBChrt */
    /* Transition: '<S267>:2' */
    (void)Rte_Write_VeTINR_b_KSB_Value(LeTINR_b_KSB);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_KSB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_PwrFlowStatus(VAR(boolean, AUTOMATIC)
    LeTINR_b_PwrFlowStatus)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_PwrFlowStatus);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_PwrFlowStatus' */
    /* Merge: '<Root>/Merge_79' incorporates:
     *  SignalConversion generated from: '<S106>/LeTINR_b_PwrFlowStatus'
     *  SignalConversion generated from: '<S106>/VeTINR_b_PwrFlowStatus_write'
     */
    /* Gateway: PokeTINR_b_PwrFlowStatus/PokeTINR_b_PwrFlowStatusChrt */
    /* During: PokeTINR_b_PwrFlowStatus/PokeTINR_b_PwrFlowStatusChrt */
    /* Entry Internal: PokeTINR_b_PwrFlowStatus/PokeTINR_b_PwrFlowStatusChrt */
    /* Transition: '<S268>:2' */
    Rte_IrvWrite_PokeTINR_b_PwrFlowStatus_VeTINR_b_PwrFlowStatus_write_IRV
        (LeTINR_b_PwrFlowStatus);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_PwrFlowStatus' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_TCMSpdCtrlCapable(VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMSpdCtrlCapable)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMSpdCtrlCapable);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_TCMSpdCtrlCapable' */
    /* Outport: '<Root>/VeTINR_b_TCMSpdCtrlCapable' incorporates:
     *  SignalConversion generated from: '<S107>/VeTINR_b_TCMSpdCtrlCapable'
     *  SignalConversion generated from: '<S107>/LeTINR_b_TCMSpdCtrlCapable'
     */
    /* Gateway: PokeTINR_b_TCMSpdCtrlCapable/PokeTINR_b_TCMSpdCtrlCapableChrt */
    /* During: PokeTINR_b_TCMSpdCtrlCapable/PokeTINR_b_TCMSpdCtrlCapableChrt */
    /* Entry Internal: PokeTINR_b_TCMSpdCtrlCapable/PokeTINR_b_TCMSpdCtrlCapableChrt */
    /* Transition: '<S269>:2' */
    (void)Rte_Write_VeTINR_b_TCMSpdCtrlCapable_Value(LeTINR_b_TCMSpdCtrlCapable);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_TCMSpdCtrlCapable' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_TCMTransReqFuelON(VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMTransReqFuelON, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMTransReqFuelONFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMTransReqFuelON);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMTransReqFuelONFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_TCMTransReqFuelON' */
    /* Chart: '<S108>/PokeTINR_b_TCMTransReqFuelONChrt' incorporates:
     *  SignalConversion generated from: '<S108>/LeTINR_b_TCMTransReqFuelONFA'
     */
    /* Gateway: PokeTINR_b_TCMTransReqFuelON/PokeTINR_b_TCMTransReqFuelONChrt */
    /* During: PokeTINR_b_TCMTransReqFuelON/PokeTINR_b_TCMTransReqFuelONChrt */
    /* Entry Internal: PokeTINR_b_TCMTransReqFuelON/PokeTINR_b_TCMTransReqFuelONChrt */
    /* Transition: '<S270>:2' */
    if (!LeTINR_b_TCMTransReqFuelONFA)
    {
        /* SignalConversion generated from: '<S108>/VeTINR_b_TCMTransReqFuelON' incorporates:
         *  Outport: '<Root>/VeTINR_b_TCMTransReqFuelON'
         *  SignalConversion generated from: '<S108>/LeTINR_b_TCMTransReqFuelON'
         */
        /* Transition: '<S270>:3' */
        /* Transition: '<S270>:15' */
        (void)Rte_Write_VeTINR_b_TCMTransReqFuelON_Value
            (LeTINR_b_TCMTransReqFuelON);

        /* Transition: '<S270>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S108>/VeTINR_b_TCMTransReqFuelON' incorporates:
         *  Outport: '<Root>/VeTINR_b_TCMTransReqFuelON'
         */
        /* Transition: '<S270>:4' */
        (void)Rte_Write_VeTINR_b_TCMTransReqFuelON_Value
            (KeTINR_b_TCMTransReqFuelONDflt);
    }

    /* End of Chart: '<S108>/PokeTINR_b_TCMTransReqFuelONChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_TCMTransReqFuelON' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_b_TCM_ASCReq(VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_ASCReq, VAR(boolean, AUTOMATIC) LeTINR_b_TCM_ASCReqFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_ASCReq);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_ASCReqFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_b_TCM_ASCReq' */
    /* Chart: '<S109>/PokeTINR_b_TCM_ASCReqChrt' incorporates:
     *  SignalConversion generated from: '<S109>/LeTINR_b_TCM_ASCReqFA'
     */
    /* Gateway: PokeTINR_b_TCM_ASCReq/PokeTINR_b_TCM_ASCReqChrt */
    /* During: PokeTINR_b_TCM_ASCReq/PokeTINR_b_TCM_ASCReqChrt */
    /* Entry Internal: PokeTINR_b_TCM_ASCReq/PokeTINR_b_TCM_ASCReqChrt */
    /* Transition: '<S271>:2' */
    if (!LeTINR_b_TCM_ASCReqFA)
    {
        /* SignalConversion generated from: '<S109>/VeTINR_b_TCM_ASCReq' incorporates:
         *  Outport: '<Root>/VeTINR_b_TCM_ASCReq'
         *  SignalConversion generated from: '<S109>/LeTINR_b_TCM_ASCReq'
         */
        /* Transition: '<S271>:3' */
        /* Transition: '<S271>:15' */
        (void)Rte_Write_VeTINR_b_TCM_ASCReq_Value(LeTINR_b_TCM_ASCReq);

        /* Transition: '<S271>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S109>/VeTINR_b_TCM_ASCReq' incorporates:
         *  Outport: '<Root>/VeTINR_b_TCM_ASCReq'
         */
        /* Transition: '<S271>:4' */
        (void)Rte_Write_VeTINR_b_TCM_ASCReq_Value(HeTINR_b_TCM_ASCReqDflt);
    }

    /* End of Chart: '<S109>/PokeTINR_b_TCM_ASCReqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_b_TCM_ASCReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_d_EngStrtTypAvbl(VAR(sint16, AUTOMATIC)
    LeTINR_d_EngStrtTypAvbl, VAR(boolean, AUTOMATIC) LeTINR_b_EngStrtTypAvblFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_EngStrtTypAvblFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_d_EngStrtTypAvbl);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_EngStrtTypAvblFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_d_EngStrtTypAvbl' */
    /* Chart: '<S110>/PokeTINR_d_EngStrtTypAvblChrt' incorporates:
     *  SignalConversion generated from: '<S110>/LeTINR_b_EngStrtTypAvblFA'
     */
    /* Gateway: PokeTINR_d_EngStrtTypAvbl/PokeTINR_d_EngStrtTypAvblChrt */
    /* During: PokeTINR_d_EngStrtTypAvbl/PokeTINR_d_EngStrtTypAvblChrt */
    /* Entry Internal: PokeTINR_d_EngStrtTypAvbl/PokeTINR_d_EngStrtTypAvblChrt */
    /* Transition: '<S272>:2' */
    if (!LeTINR_b_EngStrtTypAvblFA)
    {
        /* SignalConversion generated from: '<S110>/VeTINR_d_EngStrtTypAvbl' incorporates:
         *  Outport: '<Root>/VeTINR_d_EngStrtTypAvbl'
         *  SignalConversion generated from: '<S110>/LeTINR_d_EngStrtTypAvbl'
         */
        /* Transition: '<S272>:3' */
        /* Transition: '<S272>:15' */
        (void)Rte_Write_VeTINR_d_EngStrtTypAvbl_Value(LeTINR_d_EngStrtTypAvbl);
        rtb_LeTINR_b_EngStrtTypAvblFA_out = false;

        /* Transition: '<S272>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S110>/VeTINR_d_EngStrtTypAvbl' incorporates:
         *  Outport: '<Root>/VeTINR_d_EngStrtTypAvbl'
         */
        /* Transition: '<S272>:4' */
        (void)Rte_Write_VeTINR_d_EngStrtTypAvbl_Value
            (HeTINR_d_EngStrtTypAvblDflt);
        rtb_LeTINR_b_EngStrtTypAvblFA_out = true;
    }

    /* End of Chart: '<S110>/PokeTINR_d_EngStrtTypAvblChrt' */

    /* Outport: '<Root>/VeTINR_b_EngStrtTypAvblFA' incorporates:
     *  SignalConversion generated from: '<S110>/VeTINR_b_EngStrtTypAvblFA'
     */
    (void)Rte_Write_VeTINR_b_EngStrtTypAvblFA_Value
        (rtb_LeTINR_b_EngStrtTypAvblFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_d_EngStrtTypAvbl' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_d_TCMFailures(VAR(uint16, AUTOMATIC)
    LeTINR_d_TCMFailures)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_d_TCMFailures);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_d_TCMFailures' */
    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S111>/LeTINR_d_TCMFailures'
     *  SignalConversion generated from: '<S111>/VeTINR_d_TCMFailures_write'
     */
    /* Gateway: PokeTINR_d_TCMFailures/PokeTINR_d_TCMFailuresChrt */
    /* During: PokeTINR_d_TCMFailures/PokeTINR_d_TCMFailuresChrt */
    /* Entry Internal: PokeTINR_d_TCMFailures/PokeTINR_d_TCMFailuresChrt */
    /* Transition: '<S273>:2' */
    Rte_IrvWrite_PokeTINR_d_TCMFailures_VeTINR_d_TCMFailures_write_IRV
        (LeTINR_d_TCMFailures);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_d_TCMFailures' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_d_TCMLimphomeFaults(VAR(sint16, AUTOMATIC)
    LeTINR_d_TCMLimphomeFaults, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMLimphomeFaultsFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCMLimphomeFaultsFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_d_TCMLimphomeFaults);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMLimphomeFaultsFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_d_TCMLimphomeFaults' */
    /* Chart: '<S112>/PokeTINR_d_TCMLimphomeFaultsChrt' incorporates:
     *  SignalConversion generated from: '<S112>/LeTINR_b_TCMLimphomeFaultsFA'
     *  SignalConversion generated from: '<S112>/LeTINR_d_TCMLimphomeFaults'
     */
    /* Gateway: PokeTINR_d_TCMLimphomeFaults/PokeTINR_d_TCMLimphomeFaultsChrt */
    /* During: PokeTINR_d_TCMLimphomeFaults/PokeTINR_d_TCMLimphomeFaultsChrt */
    /* Entry Internal: PokeTINR_d_TCMLimphomeFaults/PokeTINR_d_TCMLimphomeFaultsChrt */
    /* Transition: '<S274>:2' */
    if (!LeTINR_b_TCMLimphomeFaultsFA)
    {
        /* Transition: '<S274>:3' */
        /* Transition: '<S274>:15' */
        TINR_ac_B.LeTINR_d_TCMLimphomeFaults_out = LeTINR_d_TCMLimphomeFaults;
        rtb_LeTINR_b_TCMLimphomeFaultsFA_out = false;

        /* Transition: '<S274>:18' */
    }
    else
    {
        /* Transition: '<S274>:4' */
        rtb_LeTINR_b_TCMLimphomeFaultsFA_out = true;
    }

    /* End of Chart: '<S112>/PokeTINR_d_TCMLimphomeFaultsChrt' */

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S112>/VeTINR_b_TCMLimphomeFaultsFA_write'
     * */
    Rte_IrvWrite_PokeTINR_d_TCMLimphomeFaults_VeTINR_b_TCMLimphomeFaultsFA_write_IRV
        (rtb_LeTINR_b_TCMLimphomeFaultsFA_out);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S112>/VeTINR_d_TCMLimphomeFaults_write'
     * */
    Rte_IrvWrite_PokeTINR_d_TCMLimphomeFaults_VeTINR_d_TCMLimphomeFaults_write_IRV
        (TINR_ac_B.LeTINR_d_TCMLimphomeFaults_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_d_TCMLimphomeFaults' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_d_TCMLimphomeFaultsC1CAN(VAR(sint16, AUTOMATIC)
    LeTINR_d_TCMLimphomeFaultsC1CAN, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMLimphomeFaultsC1CANFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCMLimphomeFaultsC1CANFA_ou;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_d_TCMLimphomeFaultsC1CAN);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMLimphomeFaultsC1CANFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_d_TCMLimphomeFaultsC1CAN' */
    /* Chart: '<S113>/PokeTINR_d_TCMLimphomeFaultsC1CANChrt' incorporates:
     *  SignalConversion generated from: '<S113>/LeTINR_b_TCMLimphomeFaultsC1CANFA'
     *  SignalConversion generated from: '<S113>/LeTINR_d_TCMLimphomeFaultsC1CAN'
     */
    /* Gateway: PokeTINR_d_TCMLimphomeFaultsC1CAN/PokeTINR_d_TCMLimphomeFaultsC1CANChrt */
    /* During: PokeTINR_d_TCMLimphomeFaultsC1CAN/PokeTINR_d_TCMLimphomeFaultsC1CANChrt */
    /* Entry Internal: PokeTINR_d_TCMLimphomeFaultsC1CAN/PokeTINR_d_TCMLimphomeFaultsC1CANChrt */
    /* Transition: '<S275>:2' */
    if (!LeTINR_b_TCMLimphomeFaultsC1CANFA)
    {
        /* Transition: '<S275>:3' */
        /* Transition: '<S275>:15' */
        TINR_ac_B.LeTINR_d_TCMLimphomeFaultsC1CAN_out =
            LeTINR_d_TCMLimphomeFaultsC1CAN;
        rtb_LeTINR_b_TCMLimphomeFaultsC1CANFA_ou = false;

        /* Transition: '<S275>:18' */
    }
    else
    {
        /* Transition: '<S275>:4' */
        rtb_LeTINR_b_TCMLimphomeFaultsC1CANFA_ou = true;
    }

    /* End of Chart: '<S113>/PokeTINR_d_TCMLimphomeFaultsC1CANChrt' */

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S113>/VeTINR_b_TCMLimphomeFaultsC1CANFA_write'
     * */
    Rte_IrvWrite_PokeTINR_d_TCMLimphomeFaultsC1CAN_VeTINR_b_TCMLimphomeFaultsC1CANFA_write_IRV
        (rtb_LeTINR_b_TCMLimphomeFaultsC1CANFA_ou);

    /* Merge: '<Root>/Merge_92' incorporates:
     *  SignalConversion generated from: '<S113>/VeTINR_d_TCMLimphomeFaultsC1CAN_write'
     * */
    Rte_IrvWrite_PokeTINR_d_TCMLimphomeFaultsC1CAN_VeTINR_d_TCMLimphomeFaultsC1CAN_write_IRV
        (TINR_ac_B.LeTINR_d_TCMLimphomeFaultsC1CAN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_d_TCMLimphomeFaultsC1CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_ActualGear(VAR(sint16, AUTOMATIC)
    LeTINR_e_ActualGear, VAR(boolean, AUTOMATIC) LeTINR_b_ActualGearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_ActualGearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_ActualGear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_ActualGear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ActualGearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_ActualGear' */
    /* Chart: '<S114>/PokeTINR_e_ActualGearChrt' incorporates:
     *  Constant: '<S276>/Calib'
     *  SignalConversion generated from: '<S114>/LeTINR_b_ActualGearFA'
     *  SignalConversion generated from: '<S114>/LeTINR_e_ActualGear'
     */
    /* Gateway: PokeTINR_e_ActualGear/PokeTINR_e_ActualGearChrt */
    /* During: PokeTINR_e_ActualGear/PokeTINR_e_ActualGearChrt */
    /* Entry Internal: PokeTINR_e_ActualGear/PokeTINR_e_ActualGearChrt */
    /* Transition: '<S277>:2' */
    if (!LeTINR_b_ActualGearFA)
    {
        /* Transition: '<S277>:3' */
        /* Transition: '<S277>:15' */
        rtb_LeTINR_e_ActualGear_out = KaTINR_e_TCMGearStat[(LeTINR_e_ActualGear)];
        rtb_LeTINR_b_ActualGearFA_out = false;

        /* Transition: '<S277>:18' */
    }
    else
    {
        /* Transition: '<S277>:4' */
        rtb_LeTINR_e_ActualGear_out = KeTINR_e_ActualGearDflt;
        rtb_LeTINR_b_ActualGearFA_out = true;
    }

    /* End of Chart: '<S114>/PokeTINR_e_ActualGearChrt' */

    /* Outport: '<Root>/VeTINR_b_ActualGearFA' incorporates:
     *  SignalConversion generated from: '<S114>/VeTINR_b_ActualGearFA'
     */
    (void)Rte_Write_VeTINR_b_ActualGearFA_Value(rtb_LeTINR_b_ActualGearFA_out);

    /* Outport: '<Root>/VeTINR_e_ActualGear' incorporates:
     *  SignalConversion generated from: '<S114>/VeTINR_e_ActualGear'
     */
    (void)Rte_Write_VeTINR_e_ActualGear_Value(rtb_LeTINR_e_ActualGear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_ActualGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_Clch1Sts(VAR(TeTMMR_e_ClchStat_DCT, AUTOMATIC)
    LeTINR_e_Clch1Sts, VAR(boolean, AUTOMATIC) LeTINR_b_Clch1StsFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_Clch1StsFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_Clch1Sts);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Clch1StsFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_Clch1Sts' */
    /* Chart: '<S115>/PokeTINR_e_Clch1StsChrt' incorporates:
     *  SignalConversion generated from: '<S115>/LeTINR_b_Clch1StsFA'
     */
    /* Gateway: PokeTINR_e_Clch1Sts/PokeTINR_e_Clch1StsChrt */
    /* During: PokeTINR_e_Clch1Sts/PokeTINR_e_Clch1StsChrt */
    /* Entry Internal: PokeTINR_e_Clch1Sts/PokeTINR_e_Clch1StsChrt */
    /* Transition: '<S278>:2' */
    if (!LeTINR_b_Clch1StsFA)
    {
        /* SignalConversion generated from: '<S115>/VeTINR_e_Clch1Sts_write' incorporates:
         *  Merge: '<Root>/Merge_27'
         *  SignalConversion generated from: '<S115>/LeTINR_e_Clch1Sts'
         */
        /* Transition: '<S278>:3' */
        /* Transition: '<S278>:15' */
        Rte_IrvWrite_PokeTINR_e_Clch1Sts_VeTINR_e_Clch1Sts_write_IRV
            (LeTINR_e_Clch1Sts);
        rtb_LeTINR_b_Clch1StsFA_out = false;

        /* Transition: '<S278>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S115>/VeTINR_e_Clch1Sts_write' incorporates:
         *  Merge: '<Root>/Merge_27'
         */
        /* Transition: '<S278>:4' */
        Rte_IrvWrite_PokeTINR_e_Clch1Sts_VeTINR_e_Clch1Sts_write_IRV
            (KeTINR_e_Clch1StsAtDflt);
        rtb_LeTINR_b_Clch1StsFA_out = true;
    }

    /* End of Chart: '<S115>/PokeTINR_e_Clch1StsChrt' */

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S115>/VeTINR_b_Clch1StsFA_write'
     * */
    Rte_IrvWrite_PokeTINR_e_Clch1Sts_VeTINR_b_Clch1StsFA_write_IRV
        (rtb_LeTINR_b_Clch1StsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_Clch1Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_Clch3Sts(VAR(TeTMMR_e_ClchStat_DCT, AUTOMATIC)
    LeTINR_e_Clch3Sts, VAR(boolean, AUTOMATIC) LeTINR_b_Clch3StsFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_Clch3StsFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_Clch3Sts);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Clch3StsFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_Clch3Sts' */
    /* Chart: '<S116>/PokeTINR_e_Clch3StsChrt' incorporates:
     *  SignalConversion generated from: '<S116>/LeTINR_b_Clch3StsFA'
     */
    /* Gateway: PokeTINR_e_Clch3Sts/PokeTINR_e_Clch3StsChrt */
    /* During: PokeTINR_e_Clch3Sts/PokeTINR_e_Clch3StsChrt */
    /* Entry Internal: PokeTINR_e_Clch3Sts/PokeTINR_e_Clch3StsChrt */
    /* Transition: '<S279>:2' */
    if (!LeTINR_b_Clch3StsFA)
    {
        /* SignalConversion generated from: '<S116>/VeTINR_e_Clch3Sts_write' incorporates:
         *  Merge: '<Root>/Merge_29'
         *  SignalConversion generated from: '<S116>/LeTINR_e_Clch3Sts'
         */
        /* Transition: '<S279>:3' */
        /* Transition: '<S279>:15' */
        Rte_IrvWrite_PokeTINR_e_Clch3Sts_VeTINR_e_Clch3Sts_write_IRV
            (LeTINR_e_Clch3Sts);
        rtb_LeTINR_b_Clch3StsFA_out = false;

        /* Transition: '<S279>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S116>/VeTINR_e_Clch3Sts_write' incorporates:
         *  Merge: '<Root>/Merge_29'
         */
        /* Transition: '<S279>:4' */
        Rte_IrvWrite_PokeTINR_e_Clch3Sts_VeTINR_e_Clch3Sts_write_IRV
            (KeTINR_e_Clch3StsAtDflt);
        rtb_LeTINR_b_Clch3StsFA_out = true;
    }

    /* End of Chart: '<S116>/PokeTINR_e_Clch3StsChrt' */

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S116>/VeTINR_b_Clch3StsFA_write'
     * */
    Rte_IrvWrite_PokeTINR_e_Clch3Sts_VeTINR_b_Clch3StsFA_write_IRV
        (rtb_LeTINR_b_Clch3StsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_Clch3Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_ComFail_C1CAN(VAR(sint16, AUTOMATIC)
    LeTINR_e_ComFail_C1CAN, VAR(boolean, AUTOMATIC) LeTINR_b_ComFail_C1CANFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCMComFail_C1CAN rtb_LeTINR_e_ComFail_C1CAN_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_ComFail_C1CAN);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ComFail_C1CANFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_ComFail_C1CAN' */
    /* Chart: '<S117>/PokeTINR_e_ComFail_C1CANChrt' incorporates:
     *  Constant: '<S280>/Calib'
     *  SignalConversion generated from: '<S117>/LeTINR_b_ComFail_C1CANFA'
     *  SignalConversion generated from: '<S117>/LeTINR_e_ComFail_C1CAN'
     */
    /* Gateway: PokeTINR_e_ComFail_C1CAN/PokeTINR_e_ComFail_C1CANChrt */
    /* During: PokeTINR_e_ComFail_C1CAN/PokeTINR_e_ComFail_C1CANChrt */
    /* Entry Internal: PokeTINR_e_ComFail_C1CAN/PokeTINR_e_ComFail_C1CANChrt */
    /* Transition: '<S281>:2' */
    if (!LeTINR_b_ComFail_C1CANFA)
    {
        /* Transition: '<S281>:3' */
        /* Transition: '<S281>:15' */
        rtb_LeTINR_e_ComFail_C1CAN_out = KaTINR_e_TCMComFail_C1
            [(LeTINR_e_ComFail_C1CAN)];

        /* Transition: '<S281>:18' */
    }
    else
    {
        /* Transition: '<S281>:4' */
        rtb_LeTINR_e_ComFail_C1CAN_out = KeTINR_e_ComFailDflt_C1CAN;
    }

    /* End of Chart: '<S117>/PokeTINR_e_ComFail_C1CANChrt' */

    /* Outport: '<Root>/VeTINR_e_ComFailTCM_C1CAN' incorporates:
     *  SignalConversion generated from: '<S117>/VeTINR_e_ComFail_C1CAN'
     */
    (void)Rte_Write_VeTINR_e_ComFailTCM_C1CAN_Value
        (rtb_LeTINR_e_ComFail_C1CAN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_ComFail_C1CAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_ComFail_ePTCAN(VAR(sint16, AUTOMATIC)
    LeTINR_e_ComFail_ePTCAN, VAR(boolean, AUTOMATIC) LeTINR_b_ComFail_ePTCANFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCMComFail_ePTCAN rtb_LeTINR_e_ComFail_ePTCAN_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_ComFail_ePTCAN);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ComFail_ePTCANFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_ComFail_ePTCAN' */
    /* Chart: '<S118>/PokeTINR_e_ComFail_ePTCANChrt' incorporates:
     *  Constant: '<S282>/Calib'
     *  SignalConversion generated from: '<S118>/LeTINR_b_ComFail_ePTCANFA'
     *  SignalConversion generated from: '<S118>/LeTINR_e_ComFail_ePTCAN'
     */
    /* Gateway: PokeTINR_e_ComFail_ePTCAN/PokeTINR_e_ComFail_ePTCANChrt */
    /* During: PokeTINR_e_ComFail_ePTCAN/PokeTINR_e_ComFail_ePTCANChrt */
    /* Entry Internal: PokeTINR_e_ComFail_ePTCAN/PokeTINR_e_ComFail_ePTCANChrt */
    /* Transition: '<S283>:2' */
    if (!LeTINR_b_ComFail_ePTCANFA)
    {
        /* Transition: '<S283>:3' */
        /* Transition: '<S283>:15' */
        rtb_LeTINR_e_ComFail_ePTCAN_out = KaTINR_e_TCMComFail_ePT
            [(LeTINR_e_ComFail_ePTCAN)];

        /* Transition: '<S283>:18' */
    }
    else
    {
        /* Transition: '<S283>:4' */
        rtb_LeTINR_e_ComFail_ePTCAN_out = KeTINR_e_ComFailDflt_ePTCAN;
    }

    /* End of Chart: '<S118>/PokeTINR_e_ComFail_ePTCANChrt' */

    /* Outport: '<Root>/VeTINR_e_ComFailTCM_ePtCAN' incorporates:
     *  SignalConversion generated from: '<S118>/VeTINR_e_ComFail_ePTCAN'
     */
    (void)Rte_Write_VeTINR_e_ComFailTCM_ePtCAN_Value
        (rtb_LeTINR_e_ComFail_ePTCAN_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_ComFail_ePTCAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_GearShftType(VAR(sint16, AUTOMATIC)
    LeTINR_e_GearShftType, VAR(boolean, AUTOMATIC) LeTINR_b_GearShftTypeFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_GearShftTypeFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMShftType rtb_LeTINR_e_GearShftType_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_GearShftType);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_GearShftTypeFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_GearShftType' */
    /* Chart: '<S119>/PokeTINR_e_GearShftTypeChrt' incorporates:
     *  Constant: '<S284>/Calib'
     *  SignalConversion generated from: '<S119>/LeTINR_b_GearShftTypeFA'
     *  SignalConversion generated from: '<S119>/LeTINR_e_GearShftType'
     */
    /* Gateway: PokeTINR_e_GearShftType/PokeTINR_e_GearShftTypeChrt */
    /* During: PokeTINR_e_GearShftType/PokeTINR_e_GearShftTypeChrt */
    /* Entry Internal: PokeTINR_e_GearShftType/PokeTINR_e_GearShftTypeChrt */
    /* Transition: '<S285>:2' */
    if (!LeTINR_b_GearShftTypeFA)
    {
        /* Transition: '<S285>:3' */
        /* Transition: '<S285>:15' */
        rtb_LeTINR_e_GearShftType_out = HaTINR_e_TCMShftType
            [(LeTINR_e_GearShftType)];
        rtb_LeTINR_b_GearShftTypeFA_out = false;

        /* Transition: '<S285>:18' */
    }
    else
    {
        /* Transition: '<S285>:4' */
        rtb_LeTINR_e_GearShftType_out = HeTINR_e_GearShftTypeDflt;
        rtb_LeTINR_b_GearShftTypeFA_out = true;
    }

    /* End of Chart: '<S119>/PokeTINR_e_GearShftTypeChrt' */

    /* Outport: '<Root>/VeTINR_b_ShftTypeFA' incorporates:
     *  SignalConversion generated from: '<S119>/VeTINR_b_GearShftTypeFA'
     */
    (void)Rte_Write_VeTINR_b_ShftTypeFA_Value(rtb_LeTINR_b_GearShftTypeFA_out);

    /* Outport: '<Root>/VeTINR_e_ShftType' incorporates:
     *  SignalConversion generated from: '<S119>/VeTINR_e_GearShftType'
     */
    (void)Rte_Write_VeTINR_e_ShftType_Value(rtb_LeTINR_e_GearShftType_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_GearShftType' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_GearShftType2(VAR(sint16, AUTOMATIC)
    LeTINR_e_GearShftType2, VAR(boolean, AUTOMATIC) LeTINR_b_GearShftType2FA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_GearShftType2FA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMShftTypeTLF rtb_LeTINR_e_GearShftType2_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_GearShftType2);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_GearShftType2FA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_GearShftType2' */
    /* Chart: '<S120>/PokeTINR_e_GearShftType2Chrt' incorporates:
     *  Constant: '<S286>/Calib'
     *  SignalConversion generated from: '<S120>/LeTINR_b_GearShftType2FA'
     *  SignalConversion generated from: '<S120>/LeTINR_e_GearShftType2'
     */
    /* Gateway: PokeTINR_e_GearShftType2/PokeTINR_e_GearShftType2Chrt */
    /* During: PokeTINR_e_GearShftType2/PokeTINR_e_GearShftType2Chrt */
    /* Entry Internal: PokeTINR_e_GearShftType2/PokeTINR_e_GearShftType2Chrt */
    /* Transition: '<S287>:4' */
    if (!LeTINR_b_GearShftType2FA)
    {
        /* Transition: '<S287>:8' */
        /* Transition: '<S287>:10' */
        rtb_LeTINR_e_GearShftType2_out = HaTINR_e_TCMShftType2
            [(LeTINR_e_GearShftType2)];
        rtb_LeTINR_b_GearShftType2FA_out = false;

        /* Transition: '<S287>:12' */
    }
    else
    {
        /* Transition: '<S287>:13' */
        rtb_LeTINR_e_GearShftType2_out = HeTINR_e_GearShftType2Dflt;
        rtb_LeTINR_b_GearShftType2FA_out = true;
    }

    /* End of Chart: '<S120>/PokeTINR_e_GearShftType2Chrt' */

    /* Outport: '<Root>/VeTINR_b_ShftTypeTLFFA' incorporates:
     *  SignalConversion generated from: '<S120>/VeTINR_b_GearShftType2FA'
     */
    (void)Rte_Write_VeTINR_b_ShftTypeTLFFA_Value
        (rtb_LeTINR_b_GearShftType2FA_out);

    /* Outport: '<Root>/VeTINR_e_ShftTypeTLF' incorporates:
     *  SignalConversion generated from: '<S120>/VeTINR_e_GearShftType2'
     */
    (void)Rte_Write_VeTINR_e_ShftTypeTLF_Value(rtb_LeTINR_e_GearShftType2_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_GearShftType2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_HASStatusK0(VAR(sint16, AUTOMATIC)
    LeTINR_e_HASStatusK0, VAR(boolean, AUTOMATIC) LeTINR_b_HASStatusK0FA)
{

#if Rte_SysCon_Variant_TINR_1

    TeHCCR_e_ClutchStatus rtb_LeTINR_e_HASStatusK0_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_HASStatusK0);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_HASStatusK0FA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_HASStatusK0' */
    /* Chart: '<S121>/PokeTINR_e_HASStatusK0Chrt' incorporates:
     *  Constant: '<S288>/Calib'
     *  SignalConversion generated from: '<S121>/LeTINR_b_HASStatusK0FA'
     *  SignalConversion generated from: '<S121>/LeTINR_e_HASStatusK0'
     */
    /* Gateway: PokeTINR_e_HASStatusK0/PokeTINR_e_HASStatusK0Chrt */
    /* During: PokeTINR_e_HASStatusK0/PokeTINR_e_HASStatusK0Chrt */
    /* Entry Internal: PokeTINR_e_HASStatusK0/PokeTINR_e_HASStatusK0Chrt */
    /* Transition: '<S289>:2' */
    if (!LeTINR_b_HASStatusK0FA)
    {
        /* Transition: '<S289>:3' */
        /* Transition: '<S289>:15' */
        rtb_LeTINR_e_HASStatusK0_out = KaTINR_e_HASK0Stat[(LeTINR_e_HASStatusK0)];

        /* Transition: '<S289>:18' */
    }
    else
    {
        /* Transition: '<S289>:4' */
        rtb_LeTINR_e_HASStatusK0_out = KeTINR_e_HASStatusK0Dflt;
    }

    /* End of Chart: '<S121>/PokeTINR_e_HASStatusK0Chrt' */

    /* Outport: '<Root>/VeTINR_e_HASStatusK0' incorporates:
     *  SignalConversion generated from: '<S121>/VeTINR_e_HASStatusK0'
     */
    (void)Rte_Write_VeTINR_e_HASStatusK0_Value(rtb_LeTINR_e_HASStatusK0_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_HASStatusK0' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_ILEStat(VAR(sint16, AUTOMATIC) LeTINR_e_ILEStat,
    VAR(boolean, AUTOMATIC) LeTINR_b_ILEStatFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeOHSR_e_VLE_DriveStat rtb_LeTINR_e_ILEStat_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_ILEStat);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_ILEStatFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_ILEStat' */
    /* Chart: '<S122>/PokeTINR_e_ILEStatChrt' incorporates:
     *  Constant: '<S290>/Calib'
     *  SignalConversion generated from: '<S122>/LeTINR_b_ILEStatFA'
     *  SignalConversion generated from: '<S122>/LeTINR_e_ILEStat'
     */
    /* Gateway: PokeTINR_e_ILEStat/PokeTINR_e_ILEStatChrt */
    /* During: PokeTINR_e_ILEStat/PokeTINR_e_ILEStatChrt */
    /* Entry Internal: PokeTINR_e_ILEStat/PokeTINR_e_ILEStatChrt */
    /* Transition: '<S291>:2' */
    if (!LeTINR_b_ILEStatFA)
    {
        /* Transition: '<S291>:3' */
        /* Transition: '<S291>:15' */
        rtb_LeTINR_e_ILEStat_out = KaTINR_e_TCM_ILEStat[(LeTINR_e_ILEStat)];

        /* Transition: '<S291>:18' */
    }
    else
    {
        /* Transition: '<S291>:4' */
        rtb_LeTINR_e_ILEStat_out = KeTINR_e_ILEStatDflt;
    }

    /* End of Chart: '<S122>/PokeTINR_e_ILEStatChrt' */

    /* Outport: '<Root>/VeTINR_e_ILEStat' incorporates:
     *  SignalConversion generated from: '<S122>/VeTINR_e_ILEStat'
     */
    (void)Rte_Write_VeTINR_e_ILEStat_Value(rtb_LeTINR_e_ILEStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_ILEStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_K1Status(VAR(sint16, AUTOMATIC)
    LeTINR_e_K1Status, VAR(boolean, AUTOMATIC) LeTINR_b_K1StatusFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeHCCR_e_ClutchStatus rtb_LeTINR_e_K1Status_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_K1Status);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_K1StatusFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_K1Status' */
    /* Chart: '<S123>/PokeTINR_e_K1StatusChrt' incorporates:
     *  Constant: '<S292>/Calib'
     *  SignalConversion generated from: '<S123>/LeTINR_b_K1StatusFA'
     *  SignalConversion generated from: '<S123>/LeTINR_e_K1Status'
     */
    /* Gateway: PokeTINR_e_K1Status/PokeTINR_e_K1StatusChrt */
    /* During: PokeTINR_e_K1Status/PokeTINR_e_K1StatusChrt */
    /* Entry Internal: PokeTINR_e_K1Status/PokeTINR_e_K1StatusChrt */
    /* Transition: '<S293>:2' */
    if (!LeTINR_b_K1StatusFA)
    {
        /* Transition: '<S293>:3' */
        /* Transition: '<S293>:15' */
        rtb_LeTINR_e_K1Status_out = KaTINR_e_K1Status[(LeTINR_e_K1Status)];

        /* Transition: '<S293>:18' */
    }
    else
    {
        /* Transition: '<S293>:4' */
        rtb_LeTINR_e_K1Status_out = KeTINR_e_K1StatusDflt;
    }

    /* End of Chart: '<S123>/PokeTINR_e_K1StatusChrt' */

    /* Outport: '<Root>/VeTINR_e_K1Status' incorporates:
     *  SignalConversion generated from: '<S123>/VeTINR_e_K1Status'
     */
    (void)Rte_Write_VeTINR_e_K1Status_Value(rtb_LeTINR_e_K1Status_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_K1Status' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_MtrBDynFctr(VAR(TeTMMR_e_MtrBDynFctr, AUTOMATIC)
    LeTINR_e_MtrBDynFctr, VAR(boolean, AUTOMATIC) LeTINR_b_MtrBDynFctrFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_MtrBDynFctr);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_MtrBDynFctrFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_MtrBDynFctr' */
    /* Chart: '<S124>/PokeTINR_e_MtrBDynFctrChrt' incorporates:
     *  SignalConversion generated from: '<S124>/LeTINR_b_MtrBDynFctrFA'
     */
    /* Gateway: PokeTINR_e_MtrBDynFctr/PokeTINR_e_MtrBDynFctrChrt */
    /* During: PokeTINR_e_MtrBDynFctr/PokeTINR_e_MtrBDynFctrChrt */
    /* Entry Internal: PokeTINR_e_MtrBDynFctr/PokeTINR_e_MtrBDynFctrChrt */
    /* Transition: '<S294>:2' */
    if (!LeTINR_b_MtrBDynFctrFA)
    {
        /* SignalConversion generated from: '<S124>/VeTINR_e_MtrBDynFctr_write' incorporates:
         *  Merge: '<Root>/Merge_38'
         *  SignalConversion generated from: '<S124>/LeTINR_e_MtrBDynFctr'
         */
        /* Transition: '<S294>:3' */
        /* Transition: '<S294>:15' */
        Rte_IrvWrite_PokeTINR_e_MtrBDynFctr_VeTINR_e_MtrBDynFctr_write_IRV
            (LeTINR_e_MtrBDynFctr);

        /* Transition: '<S294>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S124>/VeTINR_e_MtrBDynFctr_write' incorporates:
         *  Merge: '<Root>/Merge_38'
         */
        /* Transition: '<S294>:4' */
        Rte_IrvWrite_PokeTINR_e_MtrBDynFctr_VeTINR_e_MtrBDynFctr_write_IRV
            (KeTINR_e_MtrBDynFctrDflt);
    }

    /* End of Chart: '<S124>/PokeTINR_e_MtrBDynFctrChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_MtrBDynFctr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_P2SpdCntrlReq(VAR(TeTINR_e_P2SpdCntrlReq,
    AUTOMATIC) LeTINR_e_P2SpdCntrlReq, VAR(boolean, AUTOMATIC)
    LeTINR_b_P2SpdCntrlReqFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_P2SpdCntrlReq);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_P2SpdCntrlReqFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_P2SpdCntrlReq' */
    /* Chart: '<S125>/PokeTINR_e_P2SpdCntrlReqChrt' incorporates:
     *  SignalConversion generated from: '<S125>/LeTINR_b_P2SpdCntrlReqFA'
     */
    /* Gateway: PokeTINR_e_P2SpdCntrlReq/PokeTINR_e_P2SpdCntrlReqChrt */
    /* During: PokeTINR_e_P2SpdCntrlReq/PokeTINR_e_P2SpdCntrlReqChrt */
    /* Entry Internal: PokeTINR_e_P2SpdCntrlReq/PokeTINR_e_P2SpdCntrlReqChrt */
    /* Transition: '<S295>:2' */
    if (!LeTINR_b_P2SpdCntrlReqFA)
    {
        /* SignalConversion generated from: '<S125>/VeTINR_e_P2SpdCntrlReq' incorporates:
         *  Outport: '<Root>/VeTINR_e_P2SpdCntrlReq'
         *  SignalConversion generated from: '<S125>/LeTINR_e_P2SpdCntrlReq'
         */
        /* Transition: '<S295>:3' */
        /* Transition: '<S295>:15' */
        (void)Rte_Write_VeTINR_e_P2SpdCntrlReq_Value(LeTINR_e_P2SpdCntrlReq);

        /* Transition: '<S295>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S125>/VeTINR_e_P2SpdCntrlReq' incorporates:
         *  Outport: '<Root>/VeTINR_e_P2SpdCntrlReq'
         */
        /* Transition: '<S295>:4' */
        (void)Rte_Write_VeTINR_e_P2SpdCntrlReq_Value(KeTINR_e_P2SpdCntrlReqDflt);
    }

    /* End of Chart: '<S125>/PokeTINR_e_P2SpdCntrlReqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_P2SpdCntrlReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_Synchro1Gear(VAR(sint16, AUTOMATIC)
    LeTINR_e_Synchro1Gear, VAR(boolean, AUTOMATIC) LeTINR_b_Synchro1GearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_Synchro1GearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_Synchro1Gear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_Synchro1Gear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Synchro1GearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_Synchro1Gear' */
    /* Chart: '<S126>/PokeTINR_e_Synchro1GearChrt' incorporates:
     *  Constant: '<S296>/Calib'
     *  SignalConversion generated from: '<S126>/LeTINR_b_Synchro1GearFA'
     *  SignalConversion generated from: '<S126>/LeTINR_e_Synchro1Gear'
     */
    /* Gateway: PokeTINR_e_Synchro1Gear/PokeTINR_e_Synchro1GearChrt */
    /* During: PokeTINR_e_Synchro1Gear/PokeTINR_e_Synchro1GearChrt */
    /* Entry Internal: PokeTINR_e_Synchro1Gear/PokeTINR_e_Synchro1GearChrt */
    /* Transition: '<S297>:3' */
    if (!LeTINR_b_Synchro1GearFA)
    {
        /* Transition: '<S297>:7' */
        /* Transition: '<S297>:9' */
        rtb_LeTINR_e_Synchro1Gear_out = HaTINR_e_Synchro1Gear
            [(LeTINR_e_Synchro1Gear)];
        rtb_LeTINR_b_Synchro1GearFA_out = false;

        /* Transition: '<S297>:11' */
    }
    else
    {
        /* Transition: '<S297>:12' */
        rtb_LeTINR_e_Synchro1Gear_out = HeTINR_e_Synchro1GearDflt;
        rtb_LeTINR_b_Synchro1GearFA_out = true;
    }

    /* End of Chart: '<S126>/PokeTINR_e_Synchro1GearChrt' */

    /* Outport: '<Root>/VeTINR_b_Synchro1GearFA' incorporates:
     *  SignalConversion generated from: '<S126>/VeTINR_b_Synchro1GearFA'
     */
    (void)Rte_Write_VeTINR_b_Synchro1GearFA_Value
        (rtb_LeTINR_b_Synchro1GearFA_out);

    /* Outport: '<Root>/VeTINR_e_Synchro1Gear' incorporates:
     *  SignalConversion generated from: '<S126>/VeTINR_e_Synchro1Gear'
     */
    (void)Rte_Write_VeTINR_e_Synchro1Gear_Value(rtb_LeTINR_e_Synchro1Gear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_Synchro1Gear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_Synchro1Sts(VAR(sint16, AUTOMATIC)
    LeTINR_e_Synchro1Sts, VAR(boolean, AUTOMATIC) LeTINR_b_Synchro1StsFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeHCCR_e_ClutchStatus rtb_LeTINR_e_Synchro1Sts_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_Synchro1Sts);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Synchro1StsFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_Synchro1Sts' */
    /* Chart: '<S127>/PokeTINR_e_Synchro1StsChrt' incorporates:
     *  Constant: '<S298>/Calib'
     *  SignalConversion generated from: '<S127>/LeTINR_b_Synchro1StsFA'
     *  SignalConversion generated from: '<S127>/LeTINR_e_Synchro1Sts'
     */
    /* Gateway: PokeTINR_e_Synchro1Sts/PokeTINR_e_Synchro1StsChrt */
    /* During: PokeTINR_e_Synchro1Sts/PokeTINR_e_Synchro1StsChrt */
    /* Entry Internal: PokeTINR_e_Synchro1Sts/PokeTINR_e_Synchro1StsChrt */
    /* Transition: '<S299>:3' */
    if (!LeTINR_b_Synchro1StsFA)
    {
        /* Transition: '<S299>:7' */
        /* Transition: '<S299>:9' */
        rtb_LeTINR_e_Synchro1Sts_out = KaTINR_e_Synchro1Sts
            [(LeTINR_e_Synchro1Sts)];

        /* Transition: '<S299>:11' */
    }
    else
    {
        /* Transition: '<S299>:12' */
        rtb_LeTINR_e_Synchro1Sts_out = KeTINR_e_Synchro1StsDflt;
    }

    /* End of Chart: '<S127>/PokeTINR_e_Synchro1StsChrt' */

    /* Outport: '<Root>/VeTINR_e_Synchro1Sts' incorporates:
     *  SignalConversion generated from: '<S127>/VeTINR_e_Synchro1Sts'
     */
    (void)Rte_Write_VeTINR_e_Synchro1Sts_Value(rtb_LeTINR_e_Synchro1Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_Synchro1Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_Synchro2Gear(VAR(sint16, AUTOMATIC)
    LeTINR_e_Synchro2Gear, VAR(boolean, AUTOMATIC) LeTINR_b_Synchro2GearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_Synchro2GearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_Synchro2Gear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_Synchro2Gear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Synchro2GearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_Synchro2Gear' */
    /* Chart: '<S128>/PokeTINR_e_Synchro2GearChrt' incorporates:
     *  Constant: '<S300>/Calib'
     *  SignalConversion generated from: '<S128>/LeTINR_b_Synchro2GearFA'
     *  SignalConversion generated from: '<S128>/LeTINR_e_Synchro2Gear'
     */
    /* Gateway: PokeTINR_e_Synchro2Gear/PokeTINR_e_Synchro2GearChrt */
    /* During: PokeTINR_e_Synchro2Gear/PokeTINR_e_Synchro2GearChrt */
    /* Entry Internal: PokeTINR_e_Synchro2Gear/PokeTINR_e_Synchro2GearChrt */
    /* Transition: '<S301>:3' */
    if (!LeTINR_b_Synchro2GearFA)
    {
        /* Transition: '<S301>:7' */
        /* Transition: '<S301>:9' */
        rtb_LeTINR_e_Synchro2Gear_out = HaTINR_e_Synchro2Gear
            [(LeTINR_e_Synchro2Gear)];
        rtb_LeTINR_b_Synchro2GearFA_out = false;

        /* Transition: '<S301>:11' */
    }
    else
    {
        /* Transition: '<S301>:12' */
        rtb_LeTINR_e_Synchro2Gear_out = HeTINR_e_Synchro2GearDflt;
        rtb_LeTINR_b_Synchro2GearFA_out = true;
    }

    /* End of Chart: '<S128>/PokeTINR_e_Synchro2GearChrt' */

    /* Outport: '<Root>/VeTINR_b_Synchro2GearFA' incorporates:
     *  SignalConversion generated from: '<S128>/VeTINR_b_Synchro2GearFA'
     */
    (void)Rte_Write_VeTINR_b_Synchro2GearFA_Value
        (rtb_LeTINR_b_Synchro2GearFA_out);

    /* Outport: '<Root>/VeTINR_e_Synchro2Gear' incorporates:
     *  SignalConversion generated from: '<S128>/VeTINR_e_Synchro2Gear'
     */
    (void)Rte_Write_VeTINR_e_Synchro2Gear_Value(rtb_LeTINR_e_Synchro2Gear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_Synchro2Gear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_Synchro2Sts(VAR(sint16, AUTOMATIC)
    LeTINR_e_Synchro2Sts, VAR(boolean, AUTOMATIC) LeTINR_b_Synchro2StsFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeHCCR_e_ClutchStatus rtb_LeTINR_e_Synchro2Sts_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_Synchro2Sts);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_Synchro2StsFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_Synchro2Sts' */
    /* Chart: '<S129>/PokeTINR_e_Synchro2StsChrt' incorporates:
     *  Constant: '<S302>/Calib'
     *  SignalConversion generated from: '<S129>/LeTINR_b_Synchro2StsFA'
     *  SignalConversion generated from: '<S129>/LeTINR_e_Synchro2Sts'
     */
    /* Gateway: PokeTINR_e_Synchro2Sts/PokeTINR_e_Synchro2StsChrt */
    /* During: PokeTINR_e_Synchro2Sts/PokeTINR_e_Synchro2StsChrt */
    /* Entry Internal: PokeTINR_e_Synchro2Sts/PokeTINR_e_Synchro2StsChrt */
    /* Transition: '<S303>:3' */
    if (!LeTINR_b_Synchro2StsFA)
    {
        /* Transition: '<S303>:7' */
        /* Transition: '<S303>:9' */
        rtb_LeTINR_e_Synchro2Sts_out = KaTINR_e_Synchro2Sts
            [(LeTINR_e_Synchro2Sts)];

        /* Transition: '<S303>:11' */
    }
    else
    {
        /* Transition: '<S303>:12' */
        rtb_LeTINR_e_Synchro2Sts_out = KeTINR_e_Synchro2StsDflt;
    }

    /* End of Chart: '<S129>/PokeTINR_e_Synchro2StsChrt' */

    /* Outport: '<Root>/VeTINR_e_Synchro2Sts' incorporates:
     *  SignalConversion generated from: '<S129>/VeTINR_e_Synchro2Sts'
     */
    (void)Rte_Write_VeTINR_e_Synchro2Sts_Value(rtb_LeTINR_e_Synchro2Sts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_Synchro2Sts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMHASActMode(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCMHASActMode, VAR(boolean, AUTOMATIC) LeTINR_b_TCMHASActModeFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCMHASActModeFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMTgtMdReq rtb_LeTINR_e_TCMHASActMode_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMHASActMode);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMHASActModeFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMHASActMode' */
    /* Chart: '<S130>/PokeTINR_e_TCMHASActModeChrt' incorporates:
     *  Constant: '<S304>/Calib'
     *  SignalConversion generated from: '<S130>/LeTINR_b_TCMHASActModeFA'
     *  SignalConversion generated from: '<S130>/LeTINR_e_TCMHASActMode'
     */
    /* Gateway: PokeTINR_e_TCMHASActMode/PokeTINR_e_TCMHASActModeChrt */
    /* During: PokeTINR_e_TCMHASActMode/PokeTINR_e_TCMHASActModeChrt */
    /* Entry Internal: PokeTINR_e_TCMHASActMode/PokeTINR_e_TCMHASActModeChrt */
    /* Transition: '<S305>:2' */
    if (!LeTINR_b_TCMHASActModeFA)
    {
        /* Transition: '<S305>:3' */
        /* Transition: '<S305>:15' */
        rtb_LeTINR_e_TCMHASActMode_out = KaTINR_e_TCMHASActMode
            [(LeTINR_e_TCMHASActMode)];
        rtb_LeTINR_b_TCMHASActModeFA_out = false;

        /* Transition: '<S305>:18' */
    }
    else
    {
        /* Transition: '<S305>:4' */
        rtb_LeTINR_e_TCMHASActMode_out = KeTINR_e_TCMHASActModeDflt;
        rtb_LeTINR_b_TCMHASActModeFA_out = true;
    }

    /* End of Chart: '<S130>/PokeTINR_e_TCMHASActModeChrt' */

    /* Outport: '<Root>/VeTINR_b_TCMActModeFA' incorporates:
     *  SignalConversion generated from: '<S130>/VeTINR_b_TCMHASActModeFA'
     */
    (void)Rte_Write_VeTINR_b_TCMActModeFA_Value(rtb_LeTINR_b_TCMHASActModeFA_out);

    /* Outport: '<Root>/VeTINR_e_TCMActMode' incorporates:
     *  SignalConversion generated from: '<S130>/VeTINR_e_TCMHASActMode'
     */
    (void)Rte_Write_VeTINR_e_TCMActMode_Value(rtb_LeTINR_e_TCMHASActMode_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMHASActMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMModeReq(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCMModeReq, VAR(boolean, AUTOMATIC) LeTINR_b_TCMModeReqFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeOHSR_e_RngSel rtb_LeTINR_e_TCMModeReq_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMModeReq);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMModeReqFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMModeReq' */
    /* Chart: '<S131>/PokeTINR_e_TCMModeReqChrt' incorporates:
     *  Constant: '<S306>/Calib'
     *  SignalConversion generated from: '<S131>/LeTINR_b_TCMModeReqFA'
     *  SignalConversion generated from: '<S131>/LeTINR_e_TCMModeReq'
     */
    /* Gateway: PokeTINR_e_TCMModeReq/PokeTINR_e_TCMModeReqChrt */
    /* During: PokeTINR_e_TCMModeReq/PokeTINR_e_TCMModeReqChrt */
    /* Entry Internal: PokeTINR_e_TCMModeReq/PokeTINR_e_TCMModeReqChrt */
    /* Transition: '<S307>:2' */
    if (!LeTINR_b_TCMModeReqFA)
    {
        /* Transition: '<S307>:3' */
        /* Transition: '<S307>:15' */
        rtb_LeTINR_e_TCMModeReq_out = KaTINR_e_TCMModeReq[(LeTINR_e_TCMModeReq)];

        /* Transition: '<S307>:18' */
    }
    else
    {
        /* Transition: '<S307>:4' */
        rtb_LeTINR_e_TCMModeReq_out = KeTINR_e_TCMModeReqDflt;
    }

    /* End of Chart: '<S131>/PokeTINR_e_TCMModeReqChrt' */

    /* Outport: '<Root>/VeTINR_e_TCMModeReq' incorporates:
     *  SignalConversion generated from: '<S131>/VeTINR_e_TCMModeReq'
     */
    (void)Rte_Write_VeTINR_e_TCMModeReq_Value(rtb_LeTINR_e_TCMModeReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMModeReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCMNeutPhsZeroTrqReq_CANC, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_CANC_o;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCMNeutPhsZeroTrqReq rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_CANC_o;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMNeutPhsZeroTrqReq_CANC);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC' */
    /* Chart: '<S132>/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt' incorporates:
     *  Constant: '<S308>/Calib'
     *  SignalConversion generated from: '<S132>/LeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA'
     *  SignalConversion generated from: '<S132>/LeTINR_e_TCMNeutPhsZeroTrqReq_CANC'
     */
    /* Gateway: PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt */
    /* During: PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt */
    /* Entry Internal: PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt */
    /* Transition: '<S309>:2' */
    if (!LeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA)
    {
        /* Transition: '<S309>:3' */
        /* Transition: '<S309>:15' */
        rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_CANC_o =
            HaTINR_e_TCMNeutPhsZeroTrqReq_CANC
            [(LeTINR_e_TCMNeutPhsZeroTrqReq_CANC)];
        rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_CANC_o = false;

        /* Transition: '<S309>:18' */
    }
    else
    {
        /* Transition: '<S309>:4' */
        rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_CANC_o =
            HeTINR_e_TCMNeutPhsZeroTrqReq_CANCDflt;
        rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_CANC_o = true;
    }

    /* End of Chart: '<S132>/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANCChrt' */

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S132>/VeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA_write'
     * */
    Rte_IrvWrite_PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC_VeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA_write_IRV
        (rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_CANC_o);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S132>/VeTINR_e_TCMNeutPhsZeroTrqReq_CANC_write'
     * */
    Rte_IrvWrite_PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC_VeTINR_e_TCMNeutPhsZeroTrqReq_CANC_write_IRV
        (rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_CANC_o);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMNeutPhsZeroTrqReq_CANC' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN(VAR(sint16,
    AUTOMATIC) LeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_ePTC_p;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCMNeutPhsZeroTrqReq rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_ePTC_i;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN' */
    /* Chart: '<S133>/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt' incorporates:
     *  Constant: '<S310>/Calib'
     *  SignalConversion generated from: '<S133>/LeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA'
     *  SignalConversion generated from: '<S133>/LeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN'
     */
    /* Gateway: PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt */
    /* During: PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt */
    /* Entry Internal: PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt */
    /* Transition: '<S311>:2' */
    if (!LeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA)
    {
        /* Transition: '<S311>:3' */
        /* Transition: '<S311>:15' */
        rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_ePTC_i =
            HaTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN
            [(LeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN)];
        rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_ePTC_p = false;

        /* Transition: '<S311>:18' */
    }
    else
    {
        /* Transition: '<S311>:4' */
        rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_ePTC_i =
            HeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANDflt;
        rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_ePTC_p = true;
    }

    /* End of Chart: '<S133>/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCANChrt' */

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S133>/VeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA_write'
     * */
    Rte_IrvWrite_PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_VeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA_write_IRV
        (rtb_LeTINR_b_TCMNeutPhsZeroTrqReq_ePTC_p);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S133>/VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_write'
     * */
    Rte_IrvWrite_PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_write_IRV
        (rtb_LeTINR_e_TCMNeutPhsZeroTrqReq_ePTC_i);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMStrtStpOvrrd(VAR(TeSTRR_e_AutoStopStartOvrrd,
    AUTOMATIC) LeTINR_e_TCMStrtStpOvrrd, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMStrtStpOvrrdFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeSTRR_e_AutoStopStartOvrrd rtb_LeTINR_e_TCMStrtStpOvrrd_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMStrtStpOvrrd);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMStrtStpOvrrdFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMStrtStpOvrrd' */
    /* Chart: '<S134>/PokeTINR_e_TCMStrtStpOvrrdChrt' incorporates:
     *  Constant: '<S312>/Calib'
     *  SignalConversion generated from: '<S134>/LeTINR_b_TCMStrtStpOvrrdFA'
     *  SignalConversion generated from: '<S134>/LeTINR_e_TCMStrtStpOvrrd'
     */
    /* Gateway: PokeTINR_e_TCMStrtStpOvrrd/PokeTINR_e_TCMStrtStpOvrrdChrt */
    /* During: PokeTINR_e_TCMStrtStpOvrrd/PokeTINR_e_TCMStrtStpOvrrdChrt */
    /* Entry Internal: PokeTINR_e_TCMStrtStpOvrrd/PokeTINR_e_TCMStrtStpOvrrdChrt */
    /* Transition: '<S313>:2' */
    if (!LeTINR_b_TCMStrtStpOvrrdFA)
    {
        /* Transition: '<S313>:3' */
        /* Transition: '<S313>:15' */
        rtb_LeTINR_e_TCMStrtStpOvrrd_out = KaTINR_e_TCMStrtStpOvrrd
            [(LeTINR_e_TCMStrtStpOvrrd)];

        /* Transition: '<S313>:18' */
    }
    else
    {
        /* Transition: '<S313>:4' */
        rtb_LeTINR_e_TCMStrtStpOvrrd_out = KeTINR_e_TCMStrtStpOvrrd_Dflt;
    }

    /* End of Chart: '<S134>/PokeTINR_e_TCMStrtStpOvrrdChrt' */

    /* Outport: '<Root>/VeTINR_e_TCMStrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S134>/VeTINR_e_TCMStrtStpOvrrd'
     */
    (void)Rte_Write_VeTINR_e_TCMStrtStpOvrrd_Value
        (rtb_LeTINR_e_TCMStrtStpOvrrd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMStrtStpOvrrd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMTCCPreventionID(VAR
    (TeTINR_e_TCMTCCPreventionID, AUTOMATIC) LeTINR_e_TCMTCCPreventionID, VAR
    (boolean, AUTOMATIC) LeTINR_b_TCMTCCPreventionIDFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMTCCPreventionID);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMTCCPreventionIDFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMTCCPreventionID' */
    /* Chart: '<S135>/PokeTINR_e_TCMTCCPreventionIDChrt' incorporates:
     *  SignalConversion generated from: '<S135>/LeTINR_b_TCMTCCPreventionIDFA'
     */
    /* Gateway: PokeTINR_e_TCMTCCPreventionID/PokeTINR_e_TCMTCCPreventionIDChrt */
    /* During: PokeTINR_e_TCMTCCPreventionID/PokeTINR_e_TCMTCCPreventionIDChrt */
    /* Entry Internal: PokeTINR_e_TCMTCCPreventionID/PokeTINR_e_TCMTCCPreventionIDChrt */
    /* Transition: '<S314>:2' */
    if (!LeTINR_b_TCMTCCPreventionIDFA)
    {
        /* SignalConversion generated from: '<S135>/VeTINR_e_TCMTCCPreventionID_write' incorporates:
         *  Merge: '<Root>/Merge_10'
         *  SignalConversion generated from: '<S135>/LeTINR_e_TCMTCCPreventionID'
         */
        /* Transition: '<S314>:3' */
        /* Transition: '<S314>:15' */
        Rte_IrvWrite_PokeTINR_e_TCMTCCPreventionID_VeTINR_e_TCMTCCPreventionID_write_IRV
            (LeTINR_e_TCMTCCPreventionID);

        /* Transition: '<S314>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S135>/VeTINR_e_TCMTCCPreventionID_write' incorporates:
         *  Merge: '<Root>/Merge_10'
         */
        /* Transition: '<S314>:4' */
        Rte_IrvWrite_PokeTINR_e_TCMTCCPreventionID_VeTINR_e_TCMTCCPreventionID_write_IRV
            (KeTINR_e_TCMTCCPreventionIDDflt);
    }

    /* End of Chart: '<S135>/PokeTINR_e_TCMTCCPreventionIDChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMTCCPreventionID' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMTrqCntrlModeFast(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCMTrqCntrlModeFast, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMTrqCntrlModeFastFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCMTrqCntrlModeFastFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCM_TrqCntrlModeReq rtb_LeTINR_e_TCMTrqCntrlModeFast_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMTrqCntrlModeFast);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMTrqCntrlModeFastFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMTrqCntrlModeFast' */
    /* Chart: '<S136>/PokeTINR_e_TCMTrqCntrlModeFastChrt' incorporates:
     *  Constant: '<S315>/Calib'
     *  SignalConversion generated from: '<S136>/LeTINR_b_TCMTrqCntrlModeFastFA'
     *  SignalConversion generated from: '<S136>/LeTINR_e_TCMTrqCntrlModeFast'
     */
    /* Gateway: PokeTINR_e_TCMTrqCntrlModeFast/PokeTINR_e_TCMTrqCntrlModeFastChrt */
    /* During: PokeTINR_e_TCMTrqCntrlModeFast/PokeTINR_e_TCMTrqCntrlModeFastChrt */
    /* Entry Internal: PokeTINR_e_TCMTrqCntrlModeFast/PokeTINR_e_TCMTrqCntrlModeFastChrt */
    /* Transition: '<S316>:2' */
    if (!LeTINR_b_TCMTrqCntrlModeFastFA)
    {
        /* Transition: '<S316>:3' */
        /* Transition: '<S316>:15' */
        rtb_LeTINR_e_TCMTrqCntrlModeFast_out = KaTINR_e_TCM_TrqCntrlMdReq
            [(LeTINR_e_TCMTrqCntrlModeFast)];
        rtb_LeTINR_b_TCMTrqCntrlModeFastFA_out = false;

        /* Transition: '<S316>:18' */
    }
    else
    {
        /* Transition: '<S316>:4' */
        rtb_LeTINR_e_TCMTrqCntrlModeFast_out = KeTINR_e_TCMTrqCntrlMdFstDflt;
        rtb_LeTINR_b_TCMTrqCntrlModeFastFA_out = true;
    }

    /* End of Chart: '<S136>/PokeTINR_e_TCMTrqCntrlModeFastChrt' */

    /* Outport: '<Root>/VeTINR_b_TCMTrqCntrlMdFstFA' incorporates:
     *  SignalConversion generated from: '<S136>/VeTINR_b_TCMTrqCntrlModeFastFA'
     */
    (void)Rte_Write_VeTINR_b_TCMTrqCntrlMdFstFA_Value
        (rtb_LeTINR_b_TCMTrqCntrlModeFastFA_out);

    /* Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst' incorporates:
     *  SignalConversion generated from: '<S136>/VeTINR_e_TCMTrqCntrlModeFast'
     */
    (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdFst_Value
        (rtb_LeTINR_e_TCMTrqCntrlModeFast_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMTrqCntrlModeFast' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCMTrqCntrlModeSlow(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCMTrqCntrlModeSlow, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCMTrqCntrlModeSlowFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCMTrqCntrlModeSlowFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TCM_TrqCntrlModeReq rtb_LeTINR_e_TCMTrqCntrlModeSlow_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCMTrqCntrlModeSlow);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCMTrqCntrlModeSlowFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCMTrqCntrlModeSlow' */
    /* Chart: '<S137>/PokeTINR_e_TCMTrqCntrlModeSlowChrt' incorporates:
     *  Constant: '<S317>/Calib'
     *  SignalConversion generated from: '<S137>/LeTINR_b_TCMTrqCntrlModeSlowFA'
     *  SignalConversion generated from: '<S137>/LeTINR_e_TCMTrqCntrlModeSlow'
     */
    /* Gateway: PokeTINR_e_TCMTrqCntrlModeSlow/PokeTINR_e_TCMTrqCntrlModeSlowChrt */
    /* During: PokeTINR_e_TCMTrqCntrlModeSlow/PokeTINR_e_TCMTrqCntrlModeSlowChrt */
    /* Entry Internal: PokeTINR_e_TCMTrqCntrlModeSlow/PokeTINR_e_TCMTrqCntrlModeSlowChrt */
    /* Transition: '<S318>:2' */
    if (!LeTINR_b_TCMTrqCntrlModeSlowFA)
    {
        /* Transition: '<S318>:3' */
        /* Transition: '<S318>:15' */
        rtb_LeTINR_e_TCMTrqCntrlModeSlow_out = KaTINR_e_TCM_TrqCntrlMdReq
            [(LeTINR_e_TCMTrqCntrlModeSlow)];
        rtb_LeTINR_b_TCMTrqCntrlModeSlowFA_out = false;

        /* Transition: '<S318>:18' */
    }
    else
    {
        /* Transition: '<S318>:4' */
        rtb_LeTINR_e_TCMTrqCntrlModeSlow_out = KeTINR_e_TCMTrqCntrlMdSlwDflt;
        rtb_LeTINR_b_TCMTrqCntrlModeSlowFA_out = true;
    }

    /* End of Chart: '<S137>/PokeTINR_e_TCMTrqCntrlModeSlowChrt' */

    /* Outport: '<Root>/VeTINR_b_TCMTrqCntrlMdSlwFA' incorporates:
     *  SignalConversion generated from: '<S137>/VeTINR_b_TCMTrqCntrlModeSlowFA'
     */
    (void)Rte_Write_VeTINR_b_TCMTrqCntrlMdSlwFA_Value
        (rtb_LeTINR_b_TCMTrqCntrlModeSlowFA_out);

    /* Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdSlw' incorporates:
     *  SignalConversion generated from: '<S137>/VeTINR_e_TCMTrqCntrlModeSlow'
     */
    (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdSlw_Value
        (rtb_LeTINR_e_TCMTrqCntrlModeSlow_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCMTrqCntrlModeSlow' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCM_ActiveEVGear(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCM_ActiveEVGear, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_ActiveEVGearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCM_ActiveEVGearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_TCM_ActiveEVGear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCM_ActiveEVGear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_ActiveEVGearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCM_ActiveEVGear' */
    /* Chart: '<S138>/PokeTINR_e_TCM_ActiveEVGearChrt' incorporates:
     *  Constant: '<S319>/Calib'
     *  SignalConversion generated from: '<S138>/LeTINR_b_TCM_ActiveEVGearFA'
     *  SignalConversion generated from: '<S138>/LeTINR_e_TCM_ActiveEVGear'
     */
    /* Gateway: PokeTINR_e_TCM_ActiveEVGear/PokeTINR_e_TCM_ActiveEVGearChrt */
    /* During: PokeTINR_e_TCM_ActiveEVGear/PokeTINR_e_TCM_ActiveEVGearChrt */
    /* Entry Internal: PokeTINR_e_TCM_ActiveEVGear/PokeTINR_e_TCM_ActiveEVGearChrt */
    /* Transition: '<S320>:2' */
    if (!LeTINR_b_TCM_ActiveEVGearFA)
    {
        /* Transition: '<S320>:3' */
        /* Transition: '<S320>:15' */
        rtb_LeTINR_e_TCM_ActiveEVGear_out = HaTINR_e_TCM_ActiveEVGear
            [(LeTINR_e_TCM_ActiveEVGear)];
        rtb_LeTINR_b_TCM_ActiveEVGearFA_out = false;

        /* Transition: '<S320>:18' */
    }
    else
    {
        /* Transition: '<S320>:4' */
        rtb_LeTINR_e_TCM_ActiveEVGear_out = HeTINR_e_TCM_ActiveEVGearDflt;
        rtb_LeTINR_b_TCM_ActiveEVGearFA_out = true;
    }

    /* End of Chart: '<S138>/PokeTINR_e_TCM_ActiveEVGearChrt' */

    /* Outport: '<Root>/VeTINR_b_TCM_ActiveEVGearFA' incorporates:
     *  SignalConversion generated from: '<S138>/VeTINR_b_TCM_ActiveEVGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_ActiveEVGearFA_Value
        (rtb_LeTINR_b_TCM_ActiveEVGearFA_out);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveEVGear' incorporates:
     *  SignalConversion generated from: '<S138>/VeTINR_e_TCM_ActiveEVGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveEVGear_Value
        (rtb_LeTINR_e_TCM_ActiveEVGear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCM_ActiveEVGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCM_ActiveHybridGear(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCM_ActiveHybridGear, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_ActiveHybridGearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCM_ActiveHybridGearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_TCM_ActiveHybridGear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCM_ActiveHybridGear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_ActiveHybridGearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCM_ActiveHybridGear' */
    /* Chart: '<S139>/PokeTINR_e_TCM_ActiveHybridGearChrt' incorporates:
     *  Constant: '<S321>/Calib'
     *  SignalConversion generated from: '<S139>/LeTINR_b_TCM_ActiveHybridGearFA'
     *  SignalConversion generated from: '<S139>/LeTINR_e_TCM_ActiveHybridGear'
     */
    /* Gateway: PokeTINR_e_TCM_ActiveHybridGear/PokeTINR_e_TCM_ActiveHybridGearChrt */
    /* During: PokeTINR_e_TCM_ActiveHybridGear/PokeTINR_e_TCM_ActiveHybridGearChrt */
    /* Entry Internal: PokeTINR_e_TCM_ActiveHybridGear/PokeTINR_e_TCM_ActiveHybridGearChrt */
    /* Transition: '<S322>:2' */
    if (!LeTINR_b_TCM_ActiveHybridGearFA)
    {
        /* Transition: '<S322>:3' */
        /* Transition: '<S322>:15' */
        rtb_LeTINR_e_TCM_ActiveHybridGear_out = HaTINR_e_TCM_ActiveHybridGear
            [(LeTINR_e_TCM_ActiveHybridGear)];
        rtb_LeTINR_b_TCM_ActiveHybridGearFA_out = false;

        /* Transition: '<S322>:18' */
    }
    else
    {
        /* Transition: '<S322>:4' */
        rtb_LeTINR_e_TCM_ActiveHybridGear_out =
            HeTINR_e_TCM_ActiveHybridGearDflt;
        rtb_LeTINR_b_TCM_ActiveHybridGearFA_out = true;
    }

    /* End of Chart: '<S139>/PokeTINR_e_TCM_ActiveHybridGearChrt' */

    /* Outport: '<Root>/VeTINR_b_TCM_ActiveHybridGearFA' incorporates:
     *  SignalConversion generated from: '<S139>/VeTINR_b_TCM_ActiveHybridGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_ActiveHybridGearFA_Value
        (rtb_LeTINR_b_TCM_ActiveHybridGearFA_out);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveHybridGear' incorporates:
     *  SignalConversion generated from: '<S139>/VeTINR_e_TCM_ActiveHybridGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveHybridGear_Value
        (rtb_LeTINR_e_TCM_ActiveHybridGear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCM_ActiveHybridGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCM_ActiveXNGear(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCM_ActiveXNGear, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_ActiveXNGearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCM_ActiveXNGearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_TCM_ActiveXNGear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCM_ActiveXNGear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_ActiveXNGearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCM_ActiveXNGear' */
    /* Chart: '<S140>/PokeTINR_e_TCM_ActiveXNGearChrt' incorporates:
     *  Constant: '<S323>/Calib'
     *  SignalConversion generated from: '<S140>/LeTINR_b_TCM_ActiveXNGearFA'
     *  SignalConversion generated from: '<S140>/LeTINR_e_TCM_ActiveXNGear'
     */
    /* Gateway: PokeTINR_e_TCM_ActiveXNGear/PokeTINR_e_TCM_ActiveXNGearChrt */
    /* During: PokeTINR_e_TCM_ActiveXNGear/PokeTINR_e_TCM_ActiveXNGearChrt */
    /* Entry Internal: PokeTINR_e_TCM_ActiveXNGear/PokeTINR_e_TCM_ActiveXNGearChrt */
    /* Transition: '<S324>:2' */
    if (!LeTINR_b_TCM_ActiveXNGearFA)
    {
        /* Transition: '<S324>:3' */
        /* Transition: '<S324>:15' */
        rtb_LeTINR_e_TCM_ActiveXNGear_out = HaTINR_e_TCM_ActiveXNGear
            [(LeTINR_e_TCM_ActiveXNGear)];
        rtb_LeTINR_b_TCM_ActiveXNGearFA_out = false;

        /* Transition: '<S324>:18' */
    }
    else
    {
        /* Transition: '<S324>:4' */
        rtb_LeTINR_e_TCM_ActiveXNGear_out = HeTINR_e_TCM_ActiveXNGearDflt;
        rtb_LeTINR_b_TCM_ActiveXNGearFA_out = true;
    }

    /* End of Chart: '<S140>/PokeTINR_e_TCM_ActiveXNGearChrt' */

    /* Outport: '<Root>/VeTINR_b_TCM_ActiveXNGearFA' incorporates:
     *  SignalConversion generated from: '<S140>/VeTINR_b_TCM_ActiveXNGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_ActiveXNGearFA_Value
        (rtb_LeTINR_b_TCM_ActiveXNGearFA_out);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveXNGear' incorporates:
     *  SignalConversion generated from: '<S140>/VeTINR_e_TCM_ActiveXNGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveXNGear_Value
        (rtb_LeTINR_e_TCM_ActiveXNGear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCM_ActiveXNGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCM_ClutchStartGear(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCM_ClutchStartGear, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_ClutchStartGearFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_TCM_ClutchStartGear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCM_ClutchStartGear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_ClutchStartGearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCM_ClutchStartGear' */
    /* Chart: '<S141>/PokeTINR_e_TCM_ClutchStartGearChrt' incorporates:
     *  Constant: '<S325>/Calib'
     *  SignalConversion generated from: '<S141>/LeTINR_b_TCM_ClutchStartGearFA'
     *  SignalConversion generated from: '<S141>/LeTINR_e_TCM_ClutchStartGear'
     */
    /* Gateway: PokeTINR_e_TCM_ClutchStartGear/PokeTINR_e_TCM_ClutchStartGearChrt */
    /* During: PokeTINR_e_TCM_ClutchStartGear/PokeTINR_e_TCM_ClutchStartGearChrt */
    /* Entry Internal: PokeTINR_e_TCM_ClutchStartGear/PokeTINR_e_TCM_ClutchStartGearChrt */
    /* Transition: '<S326>:2' */
    if (!LeTINR_b_TCM_ClutchStartGearFA)
    {
        /* Transition: '<S326>:3' */
        /* Transition: '<S326>:15' */
        rtb_LeTINR_e_TCM_ClutchStartGear_out = HaTINR_e_TCM_ClutchStartGear
            [(LeTINR_e_TCM_ClutchStartGear)];

        /* Transition: '<S326>:18' */
    }
    else
    {
        /* Transition: '<S326>:4' */
        rtb_LeTINR_e_TCM_ClutchStartGear_out = HeTINR_e_TCM_ClutchStartGearDflt;
    }

    /* End of Chart: '<S141>/PokeTINR_e_TCM_ClutchStartGearChrt' */

    /* Outport: '<Root>/VeTINR_e_TCM_ClutchStartGear' incorporates:
     *  SignalConversion generated from: '<S141>/VeTINR_e_TCM_ClutchStartGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ClutchStartGear_Value
        (rtb_LeTINR_e_TCM_ClutchStartGear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCM_ClutchStartGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TCM_PassiveHybridGear(VAR(sint16, AUTOMATIC)
    LeTINR_e_TCM_PassiveHybridGear, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_PassiveHybridGearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCM_PassiveHybridGearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_TCM_PassiveHybridGear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TCM_PassiveHybridGear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_PassiveHybridGearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TCM_PassiveHybridGear' */
    /* Chart: '<S142>/PokeTINR_e_TCM_PassiveHybridGearChrt' incorporates:
     *  Constant: '<S327>/Calib'
     *  SignalConversion generated from: '<S142>/LeTINR_b_TCM_PassiveHybridGearFA'
     *  SignalConversion generated from: '<S142>/LeTINR_e_TCM_PassiveHybridGear'
     */
    /* Gateway: PokeTINR_e_TCM_PassiveHybridGear/PokeTINR_e_TCM_PassiveHybridGearChrt */
    /* During: PokeTINR_e_TCM_PassiveHybridGear/PokeTINR_e_TCM_PassiveHybridGearChrt */
    /* Entry Internal: PokeTINR_e_TCM_PassiveHybridGear/PokeTINR_e_TCM_PassiveHybridGearChrt */
    /* Transition: '<S328>:2' */
    if (!LeTINR_b_TCM_PassiveHybridGearFA)
    {
        /* Transition: '<S328>:3' */
        /* Transition: '<S328>:15' */
        rtb_LeTINR_e_TCM_PassiveHybridGear_out = HaTINR_e_TCM_PassiveHybridGear
            [(LeTINR_e_TCM_PassiveHybridGear)];
        rtb_LeTINR_b_TCM_PassiveHybridGearFA_out = false;

        /* Transition: '<S328>:18' */
    }
    else
    {
        /* Transition: '<S328>:4' */
        rtb_LeTINR_e_TCM_PassiveHybridGear_out =
            HeTINR_e_TCM_PassiveHybridGearDflt;
        rtb_LeTINR_b_TCM_PassiveHybridGearFA_out = true;
    }

    /* End of Chart: '<S142>/PokeTINR_e_TCM_PassiveHybridGearChrt' */

    /* Outport: '<Root>/VeTINR_b_TCM_PassiveHybridGearFA' incorporates:
     *  SignalConversion generated from: '<S142>/VeTINR_b_TCM_PassiveHybridGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_PassiveHybridGearFA_Value
        (rtb_LeTINR_b_TCM_PassiveHybridGearFA_out);

    /* Outport: '<Root>/VeTINR_e_TCM_PassiveHybridGear' incorporates:
     *  SignalConversion generated from: '<S142>/VeTINR_e_TCM_PassiveHybridGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_PassiveHybridGear_Value
        (rtb_LeTINR_e_TCM_PassiveHybridGear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TCM_PassiveHybridGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TargetGear(VAR(sint16, AUTOMATIC)
    LeTINR_e_TargetGear, VAR(boolean, AUTOMATIC) LeTINR_b_TargetGearFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TargetGearFA_out;

#endif

#if Rte_SysCon_Variant_TINR_1

    TeTRNR_e_TCMGearStat rtb_LeTINR_e_TargetGear_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TargetGear);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TargetGearFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TargetGear' */
    /* Chart: '<S143>/PokeTINR_e_TargetGearChrt' incorporates:
     *  Constant: '<S329>/Calib'
     *  SignalConversion generated from: '<S143>/LeTINR_b_TargetGearFA'
     *  SignalConversion generated from: '<S143>/LeTINR_e_TargetGear'
     */
    /* Gateway: PokeTINR_e_TargetGear/PokeTINR_e_TargetGearChrt */
    /* During: PokeTINR_e_TargetGear/PokeTINR_e_TargetGearChrt */
    /* Entry Internal: PokeTINR_e_TargetGear/PokeTINR_e_TargetGearChrt */
    /* Transition: '<S330>:2' */
    if (!LeTINR_b_TargetGearFA)
    {
        /* Transition: '<S330>:3' */
        /* Transition: '<S330>:15' */
        rtb_LeTINR_e_TargetGear_out = KaTINR_e_TCMGearStat[(LeTINR_e_TargetGear)];
        rtb_LeTINR_b_TargetGearFA_out = false;

        /* Transition: '<S330>:18' */
    }
    else
    {
        /* Transition: '<S330>:4' */
        rtb_LeTINR_e_TargetGear_out = KeTINR_e_TargetGearDflt;
        rtb_LeTINR_b_TargetGearFA_out = true;
    }

    /* End of Chart: '<S143>/PokeTINR_e_TargetGearChrt' */

    /* Outport: '<Root>/VeTINR_b_TargetGearFA' incorporates:
     *  SignalConversion generated from: '<S143>/VeTINR_b_TargetGearFA'
     */
    (void)Rte_Write_VeTINR_b_TargetGearFA_Value(rtb_LeTINR_b_TargetGearFA_out);

    /* Outport: '<Root>/VeTINR_e_TargetGear' incorporates:
     *  SignalConversion generated from: '<S143>/VeTINR_e_TargetGear'
     */
    (void)Rte_Write_VeTINR_e_TargetGear_Value(rtb_LeTINR_e_TargetGear_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TargetGear' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_e_TransAdpStatus(VAR(sint16, AUTOMATIC)
    LeTINR_e_TransAdpSts, VAR(boolean, AUTOMATIC) LeTINR_b_TransAdpStsFA)
{

#if Rte_SysCon_Variant_TINR_1

    TeTINR_e_TransAdaptStatus rtb_LeTINR_e_TransAdpSts_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_e_TransAdpSts);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TransAdpStsFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_e_TransAdpStatus' */
    /* Chart: '<S144>/PokeTINR_e_TransAdpStatusChrt' incorporates:
     *  Constant: '<S331>/Calib'
     *  SignalConversion generated from: '<S144>/LeTINR_b_TransAdpStsFA'
     *  SignalConversion generated from: '<S144>/LeTINR_e_TransAdpSts'
     */
    /* Gateway: PokeTINR_e_TransAdpStatus/PokeTINR_e_TransAdpStatusChrt */
    /* During: PokeTINR_e_TransAdpStatus/PokeTINR_e_TransAdpStatusChrt */
    /* Entry Internal: PokeTINR_e_TransAdpStatus/PokeTINR_e_TransAdpStatusChrt */
    /* Transition: '<S332>:2' */
    if (!LeTINR_b_TransAdpStsFA)
    {
        /* Transition: '<S332>:3' */
        /* Transition: '<S332>:15' */
        rtb_LeTINR_e_TransAdpSts_out = KaTINR_e_TransAdpStat
            [(LeTINR_e_TransAdpSts)];

        /* Transition: '<S332>:18' */
    }
    else
    {
        /* Transition: '<S332>:4' */
        rtb_LeTINR_e_TransAdpSts_out = KeTINR_e_TransAdpStsDflt;
    }

    /* End of Chart: '<S144>/PokeTINR_e_TransAdpStatusChrt' */

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S144>/VeTINR_e_TransAdpSts_write'
     * */
    Rte_IrvWrite_PokeTINR_e_TransAdpStatus_VeTINR_e_TransAdpStatus_write_IRV
        (rtb_LeTINR_e_TransAdpSts_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_e_TransAdpStatus' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_i_TCM_DriveProgram(VAR(uint16, AUTOMATIC)
    LeTINR_i_TCM_DriveProgram, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_DriveProgramFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_i_TCM_DriveProgram);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_DriveProgramFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_i_TCM_DriveProgram' */
    /* Chart: '<S145>/PokeTINR_i_TCM_DriveProgramChrt' incorporates:
     *  SignalConversion generated from: '<S145>/LeTINR_b_TCM_DriveProgramFA'
     */
    /* Gateway: PokeTINR_i_TCM_DriveProgram/PokeTINR_i_TCM_DriveProgramChrt */
    /* During: PokeTINR_i_TCM_DriveProgram/PokeTINR_i_TCM_DriveProgramChrt */
    /* Entry Internal: PokeTINR_i_TCM_DriveProgram/PokeTINR_i_TCM_DriveProgramChrt */
    /* Transition: '<S333>:2' */
    if (!LeTINR_b_TCM_DriveProgramFA)
    {
        /* SignalConversion generated from: '<S145>/VeTINR_i_TCM_DriveProgram' incorporates:
         *  Outport: '<Root>/VeTINR_i_TCM_DriveProgram'
         *  SignalConversion generated from: '<S145>/LeTINR_i_TCM_DriveProgram'
         */
        /* Transition: '<S333>:3' */
        /* Transition: '<S333>:15' */
        (void)Rte_Write_VeTINR_i_TCM_DriveProgram_Value
            (LeTINR_i_TCM_DriveProgram);

        /* Transition: '<S333>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S145>/VeTINR_i_TCM_DriveProgram' incorporates:
         *  Outport: '<Root>/VeTINR_i_TCM_DriveProgram'
         */
        /* Transition: '<S333>:4' */
        (void)Rte_Write_VeTINR_i_TCM_DriveProgram_Value
            (KeTINR_i_TCM_DriveProgramDflt);
    }

    /* End of Chart: '<S145>/PokeTINR_i_TCM_DriveProgramChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_i_TCM_DriveProgram' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_i_TCM_MaxGearAllwd(VAR(sint16, AUTOMATIC)
    LeTINR_i_TCM_MaxGearAllwd, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_MaxGearAllwdFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCM_MaxGearAllwdFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_i_TCM_MaxGearAllwd);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_MaxGearAllwdFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_i_TCM_MaxGearAllwd' */
    /* Chart: '<S146>/PokeTINR_i_TCM_MaxGearAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S146>/LeTINR_b_TCM_MaxGearAllwdFA'
     */
    /* Gateway: PokeTINR_i_TCM_MaxGearAllwd/PokeTINR_i_TCM_MaxGearAllwdChrt */
    /* During: PokeTINR_i_TCM_MaxGearAllwd/PokeTINR_i_TCM_MaxGearAllwdChrt */
    /* Entry Internal: PokeTINR_i_TCM_MaxGearAllwd/PokeTINR_i_TCM_MaxGearAllwdChrt */
    /* Transition: '<S335>:2' */
    if (!LeTINR_b_TCM_MaxGearAllwdFA)
    {
        /* SignalConversion generated from: '<S146>/VeTINR_i_TCM_MaxGearAllwd_write' incorporates:
         *  Constant: '<S334>/Calib'
         *  Merge: '<Root>/Merge_63'
         *  SignalConversion generated from: '<S146>/LeTINR_i_TCM_MaxGearAllwd'
         */
        /* Transition: '<S335>:3' */
        /* Transition: '<S335>:15' */
        Rte_IrvWrite_PokeTINR_i_TCM_MaxGearAllwd_VeTINR_i_TCM_MaxGearAllwd_write_IRV
            (KaTINR_i_TCM_MaxGrAllwd[(LeTINR_i_TCM_MaxGearAllwd)]);
        rtb_LeTINR_b_TCM_MaxGearAllwdFA_out = false;

        /* Transition: '<S335>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S146>/VeTINR_i_TCM_MaxGearAllwd_write' incorporates:
         *  Merge: '<Root>/Merge_63'
         */
        /* Transition: '<S335>:4' */
        Rte_IrvWrite_PokeTINR_i_TCM_MaxGearAllwd_VeTINR_i_TCM_MaxGearAllwd_write_IRV
            (KeTINR_i_TCM_MaxGearAllwdDflt);
        rtb_LeTINR_b_TCM_MaxGearAllwdFA_out = true;
    }

    /* End of Chart: '<S146>/PokeTINR_i_TCM_MaxGearAllwdChrt' */

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S146>/VeTINR_b_TCM_MaxGearAllwdFA_write'
     * */
    Rte_IrvWrite_PokeTINR_i_TCM_MaxGearAllwd_VeTINR_b_TCM_MaxGearAllwdFA_write_IRV
        (rtb_LeTINR_b_TCM_MaxGearAllwdFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_i_TCM_MaxGearAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_i_TCM_MinGearAllwd(VAR(sint16, AUTOMATIC)
    LeTINR_i_TCM_MinGearAllwd, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_MinGearAllwdFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCM_MinGearAllwdFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_i_TCM_MinGearAllwd);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_MinGearAllwdFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_i_TCM_MinGearAllwd' */
    /* Chart: '<S147>/PokeTINR_i_TCM_MinGearAllwdChrt' incorporates:
     *  SignalConversion generated from: '<S147>/LeTINR_b_TCM_MinGearAllwdFA'
     */
    /* Gateway: PokeTINR_i_TCM_MinGearAllwd/PokeTINR_i_TCM_MinGearAllwdChrt */
    /* During: PokeTINR_i_TCM_MinGearAllwd/PokeTINR_i_TCM_MinGearAllwdChrt */
    /* Entry Internal: PokeTINR_i_TCM_MinGearAllwd/PokeTINR_i_TCM_MinGearAllwdChrt */
    /* Transition: '<S337>:2' */
    if (!LeTINR_b_TCM_MinGearAllwdFA)
    {
        /* SignalConversion generated from: '<S147>/VeTINR_i_TCM_MinGearAllwd_write' incorporates:
         *  Constant: '<S336>/Calib'
         *  Merge: '<Root>/Merge_69'
         *  SignalConversion generated from: '<S147>/LeTINR_i_TCM_MinGearAllwd'
         */
        /* Transition: '<S337>:3' */
        /* Transition: '<S337>:15' */
        Rte_IrvWrite_PokeTINR_i_TCM_MinGearAllwd_VeTINR_i_TCM_MinGearAllwd_write_IRV
            (KaTINR_i_TCM_MinGrAllwd[(LeTINR_i_TCM_MinGearAllwd)]);
        rtb_LeTINR_b_TCM_MinGearAllwdFA_out = false;

        /* Transition: '<S337>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S147>/VeTINR_i_TCM_MinGearAllwd_write' incorporates:
         *  Merge: '<Root>/Merge_69'
         */
        /* Transition: '<S337>:4' */
        Rte_IrvWrite_PokeTINR_i_TCM_MinGearAllwd_VeTINR_i_TCM_MinGearAllwd_write_IRV
            (KeTINR_i_TCM_MinGearAllwdDflt);
        rtb_LeTINR_b_TCM_MinGearAllwdFA_out = true;
    }

    /* End of Chart: '<S147>/PokeTINR_i_TCM_MinGearAllwdChrt' */

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S147>/VeTINR_b_TCM_MinGearAllwdFA_write'
     * */
    Rte_IrvWrite_PokeTINR_i_TCM_MinGearAllwd_VeTINR_b_TCM_MinGearAllwdFA_write_IRV
        (rtb_LeTINR_b_TCM_MinGearAllwdFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_i_TCM_MinGearAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_n_DisengageILE(VAR(float32, AUTOMATIC)
    LeTINR_n_DisengageILE, VAR(boolean, AUTOMATIC) LeTINR_b_DisengageILEFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_n_DisengageILE);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_DisengageILEFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_n_DisengageILE' */
    /* Chart: '<S148>/PokeTINR_n_DisengageILEChrt' incorporates:
     *  SignalConversion generated from: '<S148>/LeTINR_b_DisengageILEFA'
     */
    /* Gateway: PokeTINR_n_DisengageILE/PokeTINR_n_DisengageILEChrt */
    /* During: PokeTINR_n_DisengageILE/PokeTINR_n_DisengageILEChrt */
    /* Entry Internal: PokeTINR_n_DisengageILE/PokeTINR_n_DisengageILEChrt */
    /* Transition: '<S338>:2' */
    if (!LeTINR_b_DisengageILEFA)
    {
        /* SignalConversion generated from: '<S148>/VeTINR_n_DisengageILE' incorporates:
         *  Outport: '<Root>/VeTINR_n_DisengageILE'
         *  SignalConversion generated from: '<S148>/LeTINR_n_DisengageILE'
         */
        /* Transition: '<S338>:3' */
        /* Transition: '<S338>:15' */
        (void)Rte_Write_VeTINR_n_DisengageILE_Value(LeTINR_n_DisengageILE);

        /* Transition: '<S338>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S148>/VeTINR_n_DisengageILE' incorporates:
         *  Outport: '<Root>/VeTINR_n_DisengageILE'
         */
        /* Transition: '<S338>:4' */
        (void)Rte_Write_VeTINR_n_DisengageILE_Value(KeTINR_n_DisengageILE_Dflt);
    }

    /* End of Chart: '<S148>/PokeTINR_n_DisengageILEChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_n_DisengageILE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_n_NiMinForLockUp(VAR(float32, AUTOMATIC)
    LeTINR_n_NiMinForLockUp, VAR(float32, AUTOMATIC) LeTINR_i_TCM_NiFrameCnter,
    VAR(boolean, AUTOMATIC) LeTINR_b_NiMinForLockUpFA, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_NiFrameCnterFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_NiMinForLockUpFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_n_NiMinForLockUp);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_i_TCM_NiFrameCnter);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_NiMinForLockUpFA);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_NiFrameCnterFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_n_NiMinForLockUp' */
    /* Chart: '<S149>/PokeTINR_n_NiMinForLockUpChrt' incorporates:
     *  Constant: '<S339>/Calib'
     *  SignalConversion generated from: '<S149>/LeTINR_b_NiMinForLockUpFA'
     *  SignalConversion generated from: '<S149>/LeTINR_b_TCM_NiFrameCnterFA'
     *  SignalConversion generated from: '<S149>/LeTINR_i_TCM_NiFrameCnter'
     *  SignalConversion generated from: '<S149>/LeTINR_n_NiMinForLockUp'
     */
    /* Gateway: PokeTINR_n_NiMinForLockUp/PokeTINR_n_NiMinForLockUpChrt */
    /* During: PokeTINR_n_NiMinForLockUp/PokeTINR_n_NiMinForLockUpChrt */
    /* Entry Internal: PokeTINR_n_NiMinForLockUp/PokeTINR_n_NiMinForLockUpChrt */
    /* Transition: '<S340>:6' */
    if (((!LeTINR_b_NiMinForLockUpFA) && (!LeTINR_b_TCM_NiFrameCnterFA)) &&
            (LeTINR_i_TCM_NiFrameCnter < KeTINR_i_ValFramCnter))
    {
        /* Transition: '<S340>:53' */
        /* Transition: '<S340>:57' */
        TINR_ac_B.LaTINR_n_NiMinForLockUp_out[(sint32)LeTINR_i_TCM_NiFrameCnter]
            = LeTINR_n_NiMinForLockUp;
        rtb_LeTINR_b_NiMinForLockUpFA_out = false;

        /* Transition: '<S340>:62' */
    }
    else
    {
        /* Transition: '<S340>:56' */
        rtb_LeTINR_b_NiMinForLockUpFA_out = true;
    }

    /* End of Chart: '<S149>/PokeTINR_n_NiMinForLockUpChrt' */

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S149>/VaTINR_n_NiMinForLockUp_write'
     */
    Rte_IrvWrite_PokeTINR_n_NiMinForLockUp_VaTINR_n_NiMinForLockUp_write_IRV
        (TINR_ac_B.LaTINR_n_NiMinForLockUp_out);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S149>/VeTINR_b_NiMinForLockUpFA_write'
     * */
    Rte_IrvWrite_PokeTINR_n_NiMinForLockUp_VeTINR_b_NiMinForLockUpFA_write_IRV
        (rtb_LeTINR_b_NiMinForLockUpFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_n_NiMinForLockUp' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_n_NiMinForLockUpCoast(VAR(float32, AUTOMATIC)
    LeTINR_n_NiMinForLockUpCoast, VAR(float32, AUTOMATIC)
    LeTINR_i_TCM_NiFrameCnter, VAR(boolean, AUTOMATIC)
    LeTINR_b_NiMinForLockUpCoastFA, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_NiFrameCnterFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_NiMinForLockUpCoastFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_n_NiMinForLockUpCoast);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_i_TCM_NiFrameCnter);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_NiMinForLockUpCoastFA);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_NiFrameCnterFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_n_NiMinForLockUpCoast' */
    /* Chart: '<S150>/PokeTINR_n_NiMinForLockUpCoastChrt' incorporates:
     *  Constant: '<S341>/Calib'
     *  SignalConversion generated from: '<S150>/LeTINR_b_NiMinForLockUpCoastFA'
     *  SignalConversion generated from: '<S150>/LeTINR_b_TCM_NiFrameCnterFA'
     *  SignalConversion generated from: '<S150>/LeTINR_i_TCM_NiFrameCnter'
     *  SignalConversion generated from: '<S150>/LeTINR_n_NiMinForLockUpCoast'
     */
    /* Gateway: PokeTINR_n_NiMinForLockUpCoast/PokeTINR_n_NiMinForLockUpCoastChrt */
    /* During: PokeTINR_n_NiMinForLockUpCoast/PokeTINR_n_NiMinForLockUpCoastChrt */
    /* Entry Internal: PokeTINR_n_NiMinForLockUpCoast/PokeTINR_n_NiMinForLockUpCoastChrt */
    /* Transition: '<S342>:21' */
    if (((!LeTINR_b_NiMinForLockUpCoastFA) && (!LeTINR_b_TCM_NiFrameCnterFA)) &&
        (LeTINR_i_TCM_NiFrameCnter < KeTINR_i_ValFramCnter))
    {
        /* Transition: '<S342>:26' */
        /* Transition: '<S342>:24' */
        TINR_ac_B.LaTINR_n_NiMinForLockUpCoast_out[(sint32)
            LeTINR_i_TCM_NiFrameCnter] = LeTINR_n_NiMinForLockUpCoast;
        rtb_LeTINR_b_NiMinForLockUpCoastFA_out = false;

        /* Transition: '<S342>:33' */
    }
    else
    {
        /* Transition: '<S342>:31' */
        rtb_LeTINR_b_NiMinForLockUpCoastFA_out = true;
    }

    /* End of Chart: '<S150>/PokeTINR_n_NiMinForLockUpCoastChrt' */

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S150>/VaTINR_n_NiMinForLockUpCoast_write'
     */
    Rte_IrvWrite_PokeTINR_n_NiMinForLockUpCoast_VaTINR_n_NiMinForLockUpCoast_write_IRV
        (TINR_ac_B.LaTINR_n_NiMinForLockUpCoast_out);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S150>/VeTINR_b_NiMinForLockUpCoastFA_write'
     * */
    Rte_IrvWrite_PokeTINR_n_NiMinForLockUpCoast_VeTINR_b_NiMinForLockUpCoastFA_write_IRV
        (rtb_LeTINR_b_NiMinForLockUpCoastFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_n_NiMinForLockUpCoast' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_n_NiMinToOpen(VAR(float32, AUTOMATIC)
    LeTINR_n_NiMinToOpen, VAR(float32, AUTOMATIC) LeTINR_i_TCM_NiFrameCnter, VAR
    (boolean, AUTOMATIC) LeTINR_b_NiMinToOpenFA, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_NiFrameCnterFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_NiMinToOpenFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_n_NiMinToOpen);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_i_TCM_NiFrameCnter);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_NiMinToOpenFA);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_NiFrameCnterFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_n_NiMinToOpen' */
    /* Chart: '<S151>/PokeTINR_n_NiMinToOpenChrt' incorporates:
     *  Constant: '<S343>/Calib'
     *  SignalConversion generated from: '<S151>/LeTINR_b_NiMinToOpenFA'
     *  SignalConversion generated from: '<S151>/LeTINR_b_TCM_NiFrameCnterFA'
     *  SignalConversion generated from: '<S151>/LeTINR_i_TCM_NiFrameCnter'
     *  SignalConversion generated from: '<S151>/LeTINR_n_NiMinToOpen'
     */
    /* Gateway: PokeTINR_n_NiMinToOpen/PokeTINR_n_NiMinToOpenChrt */
    /* During: PokeTINR_n_NiMinToOpen/PokeTINR_n_NiMinToOpenChrt */
    /* Entry Internal: PokeTINR_n_NiMinToOpen/PokeTINR_n_NiMinToOpenChrt */
    /* Transition: '<S344>:40' */
    if (((!LeTINR_b_NiMinToOpenFA) && (!LeTINR_b_TCM_NiFrameCnterFA)) &&
            (LeTINR_i_TCM_NiFrameCnter < KeTINR_i_ValFramCnter))
    {
        /* Transition: '<S344>:45' */
        /* Transition: '<S344>:43' */
        TINR_ac_B.LaTINR_n_NiMinToOpen_out[(sint32)LeTINR_i_TCM_NiFrameCnter] =
            LeTINR_n_NiMinToOpen;
        rtb_LeTINR_b_NiMinToOpenFA_out = false;

        /* Transition: '<S344>:52' */
    }
    else
    {
        /* Transition: '<S344>:47' */
        rtb_LeTINR_b_NiMinToOpenFA_out = true;
    }

    /* End of Chart: '<S151>/PokeTINR_n_NiMinToOpenChrt' */

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S151>/VaTINR_n_NiMinToOpen_write'
     */
    Rte_IrvWrite_PokeTINR_n_NiMinToOpen_VaTINR_n_NiMinToOpen_write_IRV
        (TINR_ac_B.LaTINR_n_NiMinToOpen_out);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S151>/VeTINR_b_NiMinToOpenFA_write'
     * */
    Rte_IrvWrite_PokeTINR_n_NiMinToOpen_VeTINR_b_NiMinToOpenFA_write_IRV
        (rtb_LeTINR_b_NiMinToOpenFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_n_NiMinToOpen' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_n_NiMinToOpenCoast(VAR(float32, AUTOMATIC)
    LeTINR_n_NiMinToOpenCoast, VAR(float32, AUTOMATIC) LeTINR_i_TCM_NiFrameCnter,
    VAR(boolean, AUTOMATIC) LeTINR_b_NiMinToOpenCoastFA, VAR(boolean, AUTOMATIC)
    LeTINR_b_TCM_NiFrameCnterFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_NiMinToOpenCoastFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_n_NiMinToOpenCoast);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_i_TCM_NiFrameCnter);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_NiMinToOpenCoastFA);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_NiFrameCnterFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_n_NiMinToOpenCoast' */
    /* Chart: '<S152>/PokeTINR_n_NiMinToOpenCoastChrt' incorporates:
     *  Constant: '<S345>/Calib'
     *  SignalConversion generated from: '<S152>/LeTINR_b_NiMinToOpenCoastFA'
     *  SignalConversion generated from: '<S152>/LeTINR_b_TCM_NiFrameCnterFA'
     *  SignalConversion generated from: '<S152>/LeTINR_i_TCM_NiFrameCnter'
     *  SignalConversion generated from: '<S152>/LeTINR_n_NiMinToOpenCoast'
     */
    /* Gateway: PokeTINR_n_NiMinToOpenCoast/PokeTINR_n_NiMinToOpenCoastChrt */
    /* During: PokeTINR_n_NiMinToOpenCoast/PokeTINR_n_NiMinToOpenCoastChrt */
    /* Entry Internal: PokeTINR_n_NiMinToOpenCoast/PokeTINR_n_NiMinToOpenCoastChrt */
    /* Transition: '<S346>:22' */
    if (((!LeTINR_b_NiMinToOpenCoastFA) && (!LeTINR_b_TCM_NiFrameCnterFA)) &&
            (LeTINR_i_TCM_NiFrameCnter < KeTINR_i_ValFramCnter))
    {
        /* Transition: '<S346>:27' */
        /* Transition: '<S346>:25' */
        TINR_ac_B.LaTINR_n_NiMinToOpenCoast_out[(sint32)
            LeTINR_i_TCM_NiFrameCnter] = LeTINR_n_NiMinToOpenCoast;
        rtb_LeTINR_b_NiMinToOpenCoastFA_out = false;

        /* Transition: '<S346>:34' */
    }
    else
    {
        /* Transition: '<S346>:32' */
        rtb_LeTINR_b_NiMinToOpenCoastFA_out = true;
    }

    /* End of Chart: '<S152>/PokeTINR_n_NiMinToOpenCoastChrt' */

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S152>/VaTINR_n_NiMinToOpenCoast_write'
     */
    Rte_IrvWrite_PokeTINR_n_NiMinToOpenCoast_VaTINR_n_NiMinToOpenCoast_write_IRV
        (TINR_ac_B.LaTINR_n_NiMinToOpenCoast_out);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S152>/VeTINR_b_NiMinToOpenCoastFA_write'
     * */
    Rte_IrvWrite_PokeTINR_n_NiMinToOpenCoast_VeTINR_b_NiMinToOpenCoastFA_write_IRV
        (rtb_LeTINR_b_NiMinToOpenCoastFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_n_NiMinToOpenCoast' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_r_DriveLineRatioCanC(VAR(float32, AUTOMATIC)
    LeTINR_r_DriveLineRatioCanC, VAR(boolean, AUTOMATIC)
    LeTINR_b_DriveLineRatioCanCFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_DriveLineRatioCanCFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_r_DriveLineRatioCanC);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_DriveLineRatioCanCFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_r_DriveLineRatioCanC' */
    /* Chart: '<S153>/PokeTINR_r_DriveLineRatioCanCChrt' incorporates:
     *  SignalConversion generated from: '<S153>/LeTINR_b_DriveLineRatioCanCFA'
     */
    /* Gateway: PokeTINR_r_DriveLineRatioCanC/PokeTINR_r_DriveLineRatioCanCChrt */
    /* During: PokeTINR_r_DriveLineRatioCanC/PokeTINR_r_DriveLineRatioCanCChrt */
    /* Entry Internal: PokeTINR_r_DriveLineRatioCanC/PokeTINR_r_DriveLineRatioCanCChrt */
    /* Transition: '<S347>:2' */
    if (!LeTINR_b_DriveLineRatioCanCFA)
    {
        /* SignalConversion generated from: '<S153>/VeTINR_r_DriveLineRatioCanC_write' incorporates:
         *  Merge: '<Root>/Merge_89'
         *  SignalConversion generated from: '<S153>/LeTINR_r_DriveLineRatioCanC'
         */
        /* Transition: '<S347>:3' */
        /* Transition: '<S347>:15' */
        Rte_IrvWrite_PokeTINR_r_DriveLineRatioCanC_VeTINR_r_DriveLineRatioCanC_write_IRV
            (LeTINR_r_DriveLineRatioCanC);
        rtb_LeTINR_b_DriveLineRatioCanCFA_out = false;

        /* Transition: '<S347>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S153>/VeTINR_r_DriveLineRatioCanC_write' incorporates:
         *  Merge: '<Root>/Merge_89'
         */
        /* Transition: '<S347>:4' */
        Rte_IrvWrite_PokeTINR_r_DriveLineRatioCanC_VeTINR_r_DriveLineRatioCanC_write_IRV
            (KeTINR_r_DriveLineRatioInit);
        rtb_LeTINR_b_DriveLineRatioCanCFA_out = true;
    }

    /* End of Chart: '<S153>/PokeTINR_r_DriveLineRatioCanCChrt' */

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S153>/VeTINR_b_DriveLineRatioCanCFA_write'
     * */
    Rte_IrvWrite_PokeTINR_r_DriveLineRatioCanC_VeTINR_b_DriveLineRatioCanCFA_write_IRV
        (rtb_LeTINR_b_DriveLineRatioCanCFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_r_DriveLineRatioCanC' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_r_DriveLineRatioEpt(VAR(float32, AUTOMATIC)
    LeTINR_r_DriveLineRatioEpt, VAR(boolean, AUTOMATIC)
    LeTINR_b_DriveLineRatioEptFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_DriveLineRatioEptFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_r_DriveLineRatioEpt);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_DriveLineRatioEptFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_r_DriveLineRatioEpt' */
    /* Chart: '<S154>/PokeTINR_r_DriveLineRatioEptChrt' incorporates:
     *  SignalConversion generated from: '<S154>/LeTINR_b_DriveLineRatioEptFA'
     */
    /* Gateway: PokeTINR_r_DriveLineRatioEpt/PokeTINR_r_DriveLineRatioEptChrt */
    /* During: PokeTINR_r_DriveLineRatioEpt/PokeTINR_r_DriveLineRatioEptChrt */
    /* Entry Internal: PokeTINR_r_DriveLineRatioEpt/PokeTINR_r_DriveLineRatioEptChrt */
    /* Transition: '<S348>:2' */
    if (!LeTINR_b_DriveLineRatioEptFA)
    {
        /* SignalConversion generated from: '<S154>/VeTINR_r_DriveLineRatioEpt_write' incorporates:
         *  Merge: '<Root>/Merge_87'
         *  SignalConversion generated from: '<S154>/LeTINR_r_DriveLineRatioEpt'
         */
        /* Transition: '<S348>:3' */
        /* Transition: '<S348>:15' */
        Rte_IrvWrite_PokeTINR_r_DriveLineRatioEpt_VeTINR_r_DriveLineRatioEpt_write_IRV
            (LeTINR_r_DriveLineRatioEpt);
        rtb_LeTINR_b_DriveLineRatioEptFA_out = false;

        /* Transition: '<S348>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S154>/VeTINR_r_DriveLineRatioEpt_write' incorporates:
         *  Merge: '<Root>/Merge_87'
         */
        /* Transition: '<S348>:4' */
        Rte_IrvWrite_PokeTINR_r_DriveLineRatioEpt_VeTINR_r_DriveLineRatioEpt_write_IRV
            (KeTINR_r_DriveLineRatioInit);
        rtb_LeTINR_b_DriveLineRatioEptFA_out = true;
    }

    /* End of Chart: '<S154>/PokeTINR_r_DriveLineRatioEptChrt' */

    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S154>/VeTINR_b_DriveLineRatioEptFA_write'
     * */
    Rte_IrvWrite_PokeTINR_r_DriveLineRatioEpt_VeTINR_b_DriveLineRatioEptFA_write_IRV
        (rtb_LeTINR_b_DriveLineRatioEptFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_r_DriveLineRatioEpt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_r_MechDrivelineRatio(VAR(float32, AUTOMATIC)
    LeTINR_r_MechDrivelineRatio, VAR(boolean, AUTOMATIC)
    LeTINR_b_MechDrivelineRatioFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_MechDrivelineRatioFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_r_MechDrivelineRatio);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_MechDrivelineRatioFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_r_MechDrivelineRatio' */
    /* Chart: '<S155>/PokeTINR_r_MechDrivelineRatioChrt' incorporates:
     *  SignalConversion generated from: '<S155>/LeTINR_b_DriveLineRatioCanCFA'
     */
    /* Gateway: PokeTINR_r_MechDrivelineRatio/PokeTINR_r_MechDrivelineRatioChrt */
    /* During: PokeTINR_r_MechDrivelineRatio/PokeTINR_r_MechDrivelineRatioChrt */
    /* Entry Internal: PokeTINR_r_MechDrivelineRatio/PokeTINR_r_MechDrivelineRatioChrt */
    /* Transition: '<S349>:2' */
    if (!LeTINR_b_MechDrivelineRatioFA)
    {
        /* SignalConversion generated from: '<S155>/VeTINR_r_MechDrivelineRatio_write' incorporates:
         *  Outport: '<Root>/VeTINR_r_Mech_DrivelineRatio'
         *  SignalConversion generated from: '<S155>/LeTINR_r_DriveLineRatioCanC'
         */
        /* Transition: '<S349>:3' */
        /* Transition: '<S349>:15' */
        (void)Rte_Write_VeTINR_r_Mech_DrivelineRatio_Value
            (LeTINR_r_MechDrivelineRatio);
        rtb_LeTINR_b_MechDrivelineRatioFA_out = false;

        /* Transition: '<S349>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S155>/VeTINR_r_MechDrivelineRatio_write' incorporates:
         *  Outport: '<Root>/VeTINR_r_Mech_DrivelineRatio'
         */
        /* Transition: '<S349>:4' */
        (void)Rte_Write_VeTINR_r_Mech_DrivelineRatio_Value
            (KeTINR_r_MechDrivelineRatioInit);
        rtb_LeTINR_b_MechDrivelineRatioFA_out = true;
    }

    /* End of Chart: '<S155>/PokeTINR_r_MechDrivelineRatioChrt' */

    /* Outport: '<Root>/VeTINR_b_Mech_DrivelineRatioFA' incorporates:
     *  SignalConversion generated from: '<S155>/VeTINR_b_MechDrivelineRatioFA_write'
     */
    (void)Rte_Write_VeTINR_b_Mech_DrivelineRatioFA_Value
        (rtb_LeTINR_b_MechDrivelineRatioFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_r_MechDrivelineRatio' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_r_TCC_TR(VAR(float32, AUTOMATIC) LeTINR_r_TCC_TR,
    VAR(boolean, AUTOMATIC) LeTINR_b_TCC_TR)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TCC_TRFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_r_TCC_TR);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCC_TR);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_r_TCC_TR' */
    /* Chart: '<S156>/PokeTINR_r_TCC_TRChrt' incorporates:
     *  SignalConversion generated from: '<S156>/LeTINR_b_DriveLineRatioCanCFA'
     */
    /* Gateway: PokeTINR_r_TCC_TR/PokeTINR_r_TCC_TRChrt */
    /* During: PokeTINR_r_TCC_TR/PokeTINR_r_TCC_TRChrt */
    /* Entry Internal: PokeTINR_r_TCC_TR/PokeTINR_r_TCC_TRChrt */
    /* Transition: '<S350>:2' */
    if (!LeTINR_b_TCC_TR)
    {
        /* SignalConversion generated from: '<S156>/VeTINR_r_TCC_TR_write' incorporates:
         *  Outport: '<Root>/VeTINR_r_TCC_TR_Gen4'
         *  SignalConversion generated from: '<S156>/LeTINR_r_DriveLineRatioCanC'
         */
        /* Transition: '<S350>:3' */
        /* Transition: '<S350>:15' */
        (void)Rte_Write_VeTINR_r_TCC_TR_Gen4_Value(LeTINR_r_TCC_TR);
        rtb_LeTINR_b_TCC_TRFA_out = false;

        /* Transition: '<S350>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S156>/VeTINR_r_TCC_TR_write' incorporates:
         *  Outport: '<Root>/VeTINR_r_TCC_TR_Gen4'
         */
        /* Transition: '<S350>:4' */
        (void)Rte_Write_VeTINR_r_TCC_TR_Gen4_Value(KeTINR_r_TCC_TRInit);
        rtb_LeTINR_b_TCC_TRFA_out = true;
    }

    /* End of Chart: '<S156>/PokeTINR_r_TCC_TRChrt' */

    /* Outport: '<Root>/VeTINR_b_TCC_TR_Gen4FA' incorporates:
     *  SignalConversion generated from: '<S156>/VeTINR_b_TCC_TRFA_write'
     */
    (void)Rte_Write_VeTINR_b_TCC_TR_Gen4FA_Value(rtb_LeTINR_b_TCC_TRFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_r_TCC_TR' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_r_TCM_HillMode(VAR(float32, AUTOMATIC)
    LeTINR_r_TCM_HillMode, VAR(boolean, AUTOMATIC) LeTINR_b_TCM_HillModeFA)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_r_TCM_HillMode);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TCM_HillModeFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_r_TCM_HillMode' */
    /* Chart: '<S157>/PokeTINR_r_TCM_HillModeChrt' incorporates:
     *  SignalConversion generated from: '<S157>/LeTINR_b_TCM_HillModeFA'
     */
    /* Gateway: PokeTINR_r_TCM_HillMode/PokeTINR_r_TCM_HillModeChrt */
    /* During: PokeTINR_r_TCM_HillMode/PokeTINR_r_TCM_HillModeChrt */
    /* Entry Internal: PokeTINR_r_TCM_HillMode/PokeTINR_r_TCM_HillModeChrt */
    /* Transition: '<S351>:2' */
    if (!LeTINR_b_TCM_HillModeFA)
    {
        /* SignalConversion generated from: '<S157>/VeTINR_r_TCM_HillMode_write' incorporates:
         *  Merge: '<Root>/Merge_61'
         *  SignalConversion generated from: '<S157>/LeTINR_r_TCM_HillMode'
         */
        /* Transition: '<S351>:3' */
        /* Transition: '<S351>:15' */
        Rte_IrvWrite_PokeTINR_r_TCM_HillMode_VeTINR_r_TCM_HillMode_write_IRV
            (LeTINR_r_TCM_HillMode);

        /* Transition: '<S351>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S157>/VeTINR_r_TCM_HillMode_write' incorporates:
         *  Merge: '<Root>/Merge_61'
         */
        /* Transition: '<S351>:4' */
        Rte_IrvWrite_PokeTINR_r_TCM_HillMode_VeTINR_r_TCM_HillMode_write_IRV
            (KeTINR_r_TCM_HillModeDflt);
    }

    /* End of Chart: '<S157>/PokeTINR_r_TCM_HillModeChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTINR_r_TCM_HillMode' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_r_TransTrqRatio(VAR(float32, AUTOMATIC)
    LeTINR_r_TransTrqRatio, VAR(boolean, AUTOMATIC) LeTINR_b_TransTrqRatioFA)
{

#if Rte_SysCon_Variant_TINR_1

    boolean rtb_LeTINR_b_TransTrqRatioFA_out;

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_r_TransTrqRatio);

#endif

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_b_TransTrqRatioFA);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_r_TransTrqRatio' */
    /* Chart: '<S158>/PokeTINR_r_TransTrqRatioChrt' incorporates:
     *  SignalConversion generated from: '<S158>/LeTINR_b_TransTrqRatioFA'
     */
    /* Gateway: PokeTINR_r_TransTrqRatio/PokeTINR_r_TransTrqRatioChrt */
    /* During: PokeTINR_r_TransTrqRatio/PokeTINR_r_TransTrqRatioChrt */
    /* Entry Internal: PokeTINR_r_TransTrqRatio/PokeTINR_r_TransTrqRatioChrt */
    /* Transition: '<S352>:2' */
    if (!LeTINR_b_TransTrqRatioFA)
    {
        /* SignalConversion generated from: '<S158>/VeTINR_r_TransTrqRatio_write' incorporates:
         *  Merge: '<Root>/Merge_101'
         *  SignalConversion generated from: '<S158>/LeTINR_r_TransTrqRatio'
         */
        /* Transition: '<S352>:3' */
        /* Transition: '<S352>:15' */
        Rte_IrvWrite_PokeTINR_r_TransTrqRatio_VeTINR_r_TransTrqRatio_write_IRV
            (LeTINR_r_TransTrqRatio);
        rtb_LeTINR_b_TransTrqRatioFA_out = false;

        /* Transition: '<S352>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S158>/VeTINR_r_TransTrqRatio_write' incorporates:
         *  Merge: '<Root>/Merge_101'
         */
        /* Transition: '<S352>:4' */
        Rte_IrvWrite_PokeTINR_r_TransTrqRatio_VeTINR_r_TransTrqRatio_write_IRV
            (KeTINR_r_TCM_TransTrqRatioDflt);
        rtb_LeTINR_b_TransTrqRatioFA_out = true;
    }

    /* End of Chart: '<S158>/PokeTINR_r_TransTrqRatioChrt' */

    /* Outport: '<Root>/VeTINR_b_TCMTransTrqRatioFA' incorporates:
     *  SignalConversion generated from: '<S158>/VeTINR_b_TransTrqRatioFA'
     */
    (void)Rte_Write_VeTINR_b_TCMTransTrqRatioFA_Value
        (rtb_LeTINR_b_TransTrqRatioFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_r_TransTrqRatio' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TINR_1

FUNC(void, TINR_CODE) PokeTINR_t_TCM_TimeToSpeedChange(VAR(float32, AUTOMATIC)
    LeTINR_t_TCM_TimeToSpeedChange)
{

#if !Rte_SysCon_Variant_TINR_1

    UNUSED_PARAMETER(LeTINR_t_TCM_TimeToSpeedChange);

#endif

#if Rte_SysCon_Variant_TINR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeTINR_t_TCM_TimeToSpeedChange' */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  SignalConversion generated from: '<S159>/LeTINR_t_TCM_TimeToSpeedChange'
     *  SignalConversion generated from: '<S159>/VeTINR_t_TCM_TimeToSpeedChange_write'
     */
    /* Gateway: PokeTINR_t_TCM_TimeToSpeedChange/PokeTINR_t_TCM_TimeToSpeedChangeChrt */
    /* During: PokeTINR_t_TCM_TimeToSpeedChange/PokeTINR_t_TCM_TimeToSpeedChangeChrt */
    /* Entry Internal: PokeTINR_t_TCM_TimeToSpeedChange/PokeTINR_t_TCM_TimeToSpeedChangeChrt */
    /* Transition: '<S353>:2' */
    Rte_IrvWrite_PokeTINR_t_TCM_TimeToSpeedChange_VeTINR_t_TCM_TimeToSpeedChange_write_IRV
        (LeTINR_t_TCM_TimeToSpeedChange);

    /* End of Outputs for SubSystem: '<Root>/PokeTINR_t_TCM_TimeToSpeedChange' */
#endif

}

#endif

/* Output function */
FUNC(void, TINR_CODE) TINR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TINR_PwrOn'
     */
    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINI_Init_Inputs'
     */
    /* SignalConversion generated from: '<S484>/Comm_e_TargetGear_Init' incorporates:
     *  Constant: '<S569>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TargetGear_Init = KeTINR_e_TargetGearInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TargetGearFA_Init' incorporates:
     *  Constant: '<S545>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TargetGearFA_Init =
        KeTINR_b_TargetGearInitFA;

    /* SignalConversion generated from: '<S484>/Comm_e_ActualGear_Init' incorporates:
     *  Constant: '<S551>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_ActualGear_Init = KeTINR_e_ActualGearInit;

    /* SignalConversion generated from: '<S484>/Comm_b_ActualGearFA_Init' incorporates:
     *  Constant: '<S511>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_ActualGearFA_Init =
        KeTINR_b_ActualGearInitFA;

    /* SignalConversion generated from: '<S484>/Comm_e_TCMTrqCntrlMdFst_Init' incorporates:
     *  Constant: '<S570>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCMTrqCntrlMdFst_ =
        KeTINR_e_TrqCntrlMdFstInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMTrqCntrlMdFstFA_Init' incorporates:
     *  Constant: '<S547>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCMTrqCntrlMdFstF =
        KeTINR_b_TrqCntrlMdFstInitFA;

    /* SignalConversion generated from: '<S484>/Comm_e_ILEStat_Init' incorporates:
     *  Constant: '<S555>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_ILEStat_Init = KeTINR_e_ILEStatInit;

    /* SignalConversion generated from: '<S484>/Comm_e_TCMTrqCntrlMdSlw_Init' incorporates:
     *  Constant: '<S571>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCMTrqCntrlMdSlw_ =
        KeTINR_e_TrqCntrlMdSlwInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMTrqCntrlMdSlwFA_Init' incorporates:
     *  Constant: '<S548>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCMTrqCntrlMdSlwF =
        KeTINR_b_TrqCntrlMdSlwInitFA;

    /* SignalConversion generated from: '<S484>/Comm_e_HASStatusK0_Init' incorporates:
     *  Constant: '<S554>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_HASStatusK0_Init = KeTINR_e_HASStatusK0Init;

    /* SignalConversion generated from: '<S484>/Comm_r_TransTrqRatio_Init' incorporates:
     *  Constant: '<S580>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_r_TransTrqRatio_Ini =
        KeTINR_r_TransTrqRatioInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TransTrqRatioFA_Init' incorporates:
     *  Constant: '<S546>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TransTrqRatioFA_I =
        KeTINR_b_TransTrqRatioInitFA;

    /* SignalConversion generated from: '<S484>/Comm_b_Inhibit_Mode1_Init' incorporates:
     *  Constant: '<S520>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_Inhibit_Mode1_Ini =
        KeTINR_b_Inhibit_Mode1Init;

    /* SignalConversion generated from: '<S484>/Comm_b_Inhibit_Mode2_Init' incorporates:
     *  Constant: '<S521>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_Inhibit_Mode2_Ini =
        KeTINR_b_Inhibit_Mode2Init;

    /* SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear1_Init' incorporates:
     *  Constant: '<S516>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear1_Ini =
        KeTINR_b_Inhibit_Gear1Init;

    /* SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear2_Init' incorporates:
     *  Constant: '<S517>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear2_Ini =
        KeTINR_b_Inhibit_Gear2Init;

    /* SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear3_Init' incorporates:
     *  Constant: '<S518>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear3_Ini =
        KeTINR_b_Inhibit_Gear3Init;

    /* SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear4_Init' incorporates:
     *  Constant: '<S519>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear4_Ini =
        KeTINR_b_Inhibit_Gear4Init;

    /* SignalConversion generated from: '<S484>/Comm_b_Inhibit_Neutral_Init' incorporates:
     *  Constant: '<S522>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_Inhibit_Neutral_I =
        KeTINR_b_Inhibit_NeutralInit;

    /* SignalConversion generated from: '<S484>/Comm_b_KGB_Init' incorporates:
     *  Constant: '<S524>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_KGB_Init = KeTINR_b_KGBInit;

    /* SignalConversion generated from: '<S484>/Comm_b_KOB_Init' incorporates:
     *  Constant: '<S525>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_KOB_Init = KeTINR_b_KOBInit;

    /* SignalConversion generated from: '<S484>/Comm_b_KSB_Init' incorporates:
     *  Constant: '<S526>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_KSB_Init = KeTINR_b_KSBInit;

    /* SignalConversion generated from: '<S484>/Comm_b_ILE_STO_Stat_Init' incorporates:
     *  Constant: '<S515>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_ILE_STO_Stat_Init =
        KeTINR_b_ILE_STO_StatInit;

    /* SignalConversion generated from: '<S484>/Comm_e_P2SpdCntrlReq_Init' incorporates:
     *  Constant: '<S490>/Constant'
     */
    TINR_ac_B.OutportBufferForComm_e_P2SpdCntrlReq_Ini =
        TINR_ac_ConstB.Constant_md;

    /* SignalConversion generated from: '<S484>/Comm_d_TCMFailures_Init' incorporates:
     *  Constant: '<S549>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_d_TCMFailures_Init =
        KeTINR_d_TCMFailures_Init;

    /* SignalConversion generated from: '<S484>/Comm_i_TCM_MinGearAllwd_Init' incorporates:
     *  Constant: '<S574>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_i_TCM_MinGearAllwd_ =
        KeTINR_i_TCM_MinGearAllwdInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCM_MinGearAllwdFA_Init' incorporates:
     *  Constant: '<S543>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCM_MinGearAllwdF =
        KeTINR_b_TCM_MinGearAllwdInitFA;

    /* SignalConversion generated from: '<S484>/Comm_i_TCM_MaxGearAllwd_Init' incorporates:
     *  Constant: '<S573>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_i_TCM_MaxGearAllwd_ =
        KeTINR_i_TCM_MaxGearAllwdInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCM_MaxGearAllwdFA_Init' incorporates:
     *  Constant: '<S542>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCM_MaxGearAllwdF =
        KeTINR_b_TCM_MaxGearAllwdInitFA;

    /* SignalConversion generated from: '<S484>/Comm_b_NiMinForLockUpFA_Init' incorporates:
     *  Constant: '<S528>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_NiMinForLockUpFA_ =
        KeTINR_b_NiMinForLockUpInitFA;

    /* SignalConversion generated from: '<S484>/Comm_b_NiMinToOpenFA_Init' incorporates:
     *  Constant: '<S530>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_NiMinToOpenFA_Ini =
        KeTINR_b_NiMinToOpenInitFA;

    /* SignalConversion generated from: '<S484>/Comm_b_NiMinForLockUpCoastFA_Init' incorporates:
     *  Constant: '<S527>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_NiMinForLockUpCoa =
        KeTINR_b_NiMinForLockUpInitCoastFA;

    /* SignalConversion generated from: '<S484>/Comm_b_NiMinToOpenCoastFA_Init' incorporates:
     *  Constant: '<S529>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_NiMinToOpenCoastF =
        KeTINR_b_NiMinToOpenCoastInitFA;

    /* SignalConversion generated from: '<S484>/Comm_i_TCM_DriveProgram_Init' incorporates:
     *  Constant: '<S572>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_i_TCM_DriveProgram_ =
        KeTINR_i_TCM_DriveProgramInit;

    /* SignalConversion generated from: '<S484>/Comm_r_TCM_HillMode_Init' incorporates:
     *  Constant: '<S579>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_r_TCM_HillMode_Init =
        KeTINR_r_TCM_HillModeInit;

    /* SignalConversion generated from: '<S484>/Comm_Cnt_TCM_DriverType_Init' incorporates:
     *  Constant: '<S508>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_Cnt_TCM_DriverType_ =
        KeTINR_Cnt_TCM_DriverTypeInit;

    /* SignalConversion generated from: '<S484>/Comm_e_TCMHASActMode' incorporates:
     *  Constant: '<S560>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCMHASActMode = KeTINR_e_TCMHASActModeInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMHASActModeFA' incorporates:
     *  Constant: '<S532>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCMHASActModeFA =
        KeTINR_b_TCMHASActModeInitFA;

    /* SignalConversion generated from: '<S484>/Comm_e_TCMStrtStpOvrrd_Init' incorporates:
     *  Constant: '<S562>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCMStrtStpOvrrd_I =
        KeTINR_e_TCMStrtStpOvrrd_Init;

    /* SignalConversion generated from: '<S484>/Comm_e_GearShftType_Init' incorporates:
     *  Constant: '<S497>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_GearShftType_Init =
        HeTINR_e_GearShftTypeInit;

    /* SignalConversion generated from: '<S484>/Comm_b_GearShftTypeFA_Init' incorporates:
     *  Constant: '<S495>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_GearShftTypeFA_In =
        HeTINR_b_GearShftTypeInitFA;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMTransReqFuelON_Init' incorporates:
     *  Constant: '<S536>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCMTransReqFuelON =
        KeTINR_b_TCMTransReqFuelONInit;

    /* SignalConversion generated from: '<S484>/Comm_b_PwrFlowStatus_Init' incorporates:
     *  Constant: '<S531>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_PwrFlowStatus_Ini =
        KeTINR_b_PwrFlowStatusInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMSpdCtrlCapable_Init' incorporates:
     *  Constant: '<S535>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCMSpdCtrlCapable =
        KeTINR_b_TCMSpdCtrlCapableInit;

    /* SignalConversion generated from: '<S484>/Comm_e_K1Status_Init' incorporates:
     *  Constant: '<S556>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_K1Status_Init = KeTINR_e_K1StatusInit;

    /* SignalConversion generated from: '<S484>/Comm_e_TCMModeReq_Init' incorporates:
     *  Constant: '<S561>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCMModeReq_Init = KeTINR_e_TCMModeReqInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMLimphomeFaultsFA' incorporates:
     *  Constant: '<S533>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_TCMLimphomeFaults =
        KeTINR_b_TCMLimphomeFaultsInitFA;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMLimphomeFaultsC1CANFA' */
    TINR_ac_B.OutportBufferForComm_b_TCMLimphomeFaul_p = false;

    /* SignalConversion generated from: '<S484>/Comm_e_ComFailTCM_C1CAN' incorporates:
     *  Constant: '<S552>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_ComFailTCM_C1CAN =
        KeTINR_e_ComFailInit_C1CAN;

    /* SignalConversion generated from: '<S484>/Comm_e_ComFailTCM_ePtCAN' incorporates:
     *  Constant: '<S553>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_ComFailTCM_ePtCAN =
        KeTINR_e_ComFailInit_ePTCAN;

    /* SignalConversion generated from: '<S484>/Comm_n_DisengageILE' incorporates:
     *  Constant: '<S575>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_n_DisengageILE = KeTINR_n_DisengageILE_Init;

    /* SignalConversion generated from: '<S484>/Comm_b_DriveLineRatioEptFA_Init' */
    TINR_ac_B.OutportBufferForComm_b_DriveLineRatioEpt = false;

    /* SignalConversion generated from: '<S484>/Comm_b_DriveLineRatioCanCFA_Init' */
    TINR_ac_B.OutportBufferForComm_b_DriveLineRatioCan = false;

    /* SignalConversion generated from: '<S484>/Comm_e_GearShftType2_Init' incorporates:
     *  Constant: '<S496>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_GearShftType2_Ini =
        HeTINR_e_GearShftType2Init;

    /* SignalConversion generated from: '<S484>/Comm_b_GearShftType2FA_Init' incorporates:
     *  Constant: '<S494>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_b_GearShftType2FA_I =
        HeTINR_b_GearShftType2InitFA;

    /* SignalConversion generated from: '<S484>/Comm_e_Synchro2Sts_Init' incorporates:
     *  Constant: '<S559>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_Synchro2Sts_Init = KeTINR_e_Synchro2StsInit;

    /* SignalConversion generated from: '<S484>/Comm_e_TCM_ClutchStartGear_Init' incorporates:
     *  Constant: '<S566>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCM_ClutchStartGe =
        KeTINR_e_TCM_ClutchStartGearInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCM_ASCReq' */
    TINR_ac_B.OutportBufferForComm_b_TCM_ASCReq = false;

    /* SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveEVGear' incorporates:
     *  Constant: '<S563>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCM_ActiveEVGear =
        KeTINR_e_TCM_ActiveEVGearInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCM_ActiveEVGearFA' */
    TINR_ac_B.OutportBufferForComm_b_TCM_ActiveEVGearF = false;

    /* SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveXNGear' incorporates:
     *  Constant: '<S565>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCM_ActiveXNGear =
        KeTINR_e_TCM_ActiveXNGearInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCM_ActiveXNGearFA' */
    TINR_ac_B.OutportBufferForComm_b_TCM_ActiveXNGearF = false;

    /* SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveHybridGear' incorporates:
     *  Constant: '<S564>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCM_ActiveHybridG =
        KeTINR_e_TCM_ActiveHybridGearInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCM_ActiveHybridGearFA' */
    TINR_ac_B.OutportBufferForComm_b_TCM_ActiveHybridG = false;

    /* SignalConversion generated from: '<S484>/Comm_e_TCM_PassiveHybridGear' incorporates:
     *  Constant: '<S567>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_TCM_PassiveHybrid =
        KeTINR_e_TCM_PassiveHybridGearInit;

    /* SignalConversion generated from: '<S484>/Comm_b_TCM_PassiveHybridGearFA' */
    TINR_ac_B.OutportBufferForComm_b_TCM_PassiveHybrid = false;

    /* SignalConversion generated from: '<S484>/Comm_e_TransAdpSts' incorporates:
     *  Constant: '<S487>/Constant'
     */
    TINR_ac_B.OutportBufferForComm_e_TransAdpSts = TINR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S484>/Comm_d_EngStrtTypAvbl' */
    TINR_ac_B.OutportBufferForComm_d_EngStrtTypAvbl = 0;

    /* SignalConversion generated from: '<S484>/Comm_b_EngStrtTypAvblFA' */
    TINR_ac_B.OutportBufferForComm_b_EngStrtTypAvblFA = false;

    /* SignalConversion generated from: '<S484>/Comm_e_TCMNeutPhsZeroTrqReq_CANC_Init' incorporates:
     *  Constant: '<S488>/Constant'
     */
    TINR_ac_B.OutportBufferForComm_e_TCMNeutPhsZeroTrq =
        TINR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMNeutPhsZeroTrqReq_CANCFA_Init' */
    TINR_ac_B.OutportBufferForComm_b_TCMNeutPhsZeroTrq = false;

    /* SignalConversion generated from: '<S484>/Comm_e_TCMNeutPhsZeroTrqReq_ePTCAN_Init' incorporates:
     *  Constant: '<S489>/Constant'
     */
    TINR_ac_B.OutportBufferForComm_e_TCMNeutPhsZeroT_m =
        TINR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S484>/Comm_b_TCMNeutPhsZeroTrqReq_ePTCANFA_Init' */
    TINR_ac_B.OutportBufferForComm_b_TCMNeutPhsZeroT_k = false;

    /* SignalConversion generated from: '<S484>/Comm_e_SynchroGearInit' incorporates:
     *  Constant: '<S491>/Constant'
     */
    TINR_ac_B.OutportBufferForComm_e_SynchroGearInit = TINR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S484>/Comm_b_SynchroGearInitFA' */
    TINR_ac_B.OutportBufferForComm_b_SynchroGearInitFA = false;

    /* SignalConversion generated from: '<S484>/Comm_e_Synchro2GearInit' incorporates:
     *  Constant: '<S486>/Constant'
     */
    TINR_ac_B.OutportBufferForComm_e_Synchro2GearInit =
        TINR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S484>/Comm_b_Synchro2GearInitFA' */
    TINR_ac_B.OutportBufferForComm_b_Synchro2GearInitF = false;

    /* SignalConversion generated from: '<S484>/Comm_Pct_TransStrssFctrInit' incorporates:
     *  Constant: '<S510>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_Pct_TransStrssFctrI =
        KeTINR_Pct_TransStrssFctrInit;

    /* SignalConversion generated from: '<S484>/Comm_e_Synchro1Sts_Init' incorporates:
     *  Constant: '<S558>/Calib'
     */
    TINR_ac_B.OutportBufferForComm_e_Synchro1Sts_Init = KeTINR_e_Synchro1StsInit;

    /* SignalConversion generated from: '<S484>/TCM_TCCPreventionID_Init' incorporates:
     *  Constant: '<S568>/Calib'
     */
    TINR_ac_B.OutportBufferForTCM_TCCPreventionID_Init =
        KeTINR_e_TCM_TCCPreventionIDInit;

    /* SignalConversion generated from: '<S484>/MtrBDynFctr_Init' incorporates:
     *  Constant: '<S557>/Calib'
     */
    TINR_ac_B.OutportBufferForMtrBDynFctr_Init = KeTINR_e_MtrBDynFctrDflt;

    /* SignalConversion generated from: '<S484>/DsblAEMD4TCM_Init' */
    TINR_ac_B.OutportBufferForDsblAEMD4TCM_Init = false;

    /* SignalConversion generated from: '<S484>/M_DrvLnTrqRq_Axle_Init' incorporates:
     *  Constant: '<S509>/Calib'
     */
    TINR_ac_B.OutportBufferForM_DrvLnTrqRq_Axle_Init =
        KeTINR_M_DrvLnTrqRq_Axle_Init;

    /* SignalConversion generated from: '<S484>/b_DrvLnTrqRq_Axle_FA_Init' */
    TINR_ac_B.OutportBufferForb_DrvLnTrqRq_Axle_FA_Ini = false;

    /* SignalConversion generated from: '<S484>/b_DrvLnMinTrqMd_Init' incorporates:
     *  Constant: '<S512>/Calib'
     */
    TINR_ac_B.OutportBufferForb_DrvLnMinTrqMd_Init = KeTINR_b_DrvLnMinTrqMd_Init;

    /* SignalConversion generated from: '<S484>/r_MechDrivelineRatio_Init' incorporates:
     *  Constant: '<S577>/Calib'
     */
    TINR_ac_B.OutportBufferForr_MechDrivelineRatio_Ini =
        KeTINR_r_MechDrivelineRatioInit;

    /* SignalConversion generated from: '<S484>/b_MechDrivelineRatioFA_Init' */
    TINR_ac_B.OutportBufferForb_MechDrivelineRatioFA_I = false;

    /* SignalConversion generated from: '<S484>/r_TCC_TR_Init' incorporates:
     *  Constant: '<S578>/Calib'
     */
    TINR_ac_B.OutportBufferForr_TCC_TR_Init = KeTINR_r_TCC_TRInit;

    /* SignalConversion generated from: '<S484>/b_r_TCC_TRFA_Init' */
    TINR_ac_B.OutportBufferForb_r_TCC_TRFA_Init = false;

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINO_Init'
     */
    /* SignalConversion generated from: '<S485>/LeTINR_r_TCMTransTrqRatio_Init' incorporates:
     *  Constant: '<S606>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_r_TCMTransTrqRati =
        KeTINR_r_TransTrqRatioInit;

    /* SignalConversion generated from: '<S485>/LeTINR_r_TCM_HillMode_Init' incorporates:
     *  Constant: '<S605>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_r_TCM_HillMode_In =
        KeTINR_r_TCM_HillModeInit;

    /* SignalConversion generated from: '<S485>/LeTINR_b_PwrFlowStatus_Init' incorporates:
     *  Constant: '<S597>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_b_PwrFlowStatus_I =
        KeTINR_b_PwrFlowStatusInit;

    /* SignalConversion generated from: '<S485>/LeTINR_d_TCMLimphomeFaults_Init' incorporates:
     *  Constant: '<S600>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_d_TCMLimphomeFaul =
        KeTINR_d_TCMLimphomeFaultsInit;

    /* SignalConversion generated from: '<S485>/LeTINR_b_TCMLimphomeFaultsFA_Init' incorporates:
     *  Constant: '<S598>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_b_TCMLimphomeFaul =
        KeTINR_b_TCMLimphomeFaultsInitFA;

    /* SignalConversion generated from: '<S485>/LeTINR_i_MinGearAllwd_Init' incorporates:
     *  Constant: '<S604>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_i_MinGearAllwd_In =
        KeTINR_i_TCM_MinGearAllwdInit;

    /* SignalConversion generated from: '<S485>/LeTINR_i_MaxGearAllwd_Init' incorporates:
     *  Constant: '<S603>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_i_MaxGearAllwd_In =
        KeTINR_i_TCM_MaxGearAllwdInit;

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINI_Init_Inputs'
     */
    for (i = 0; i < 9; i++)
    {
        /* SignalConversion generated from: '<S484>/Comm_n_NiMinForLockUp_Init' incorporates:
         *  Constant: '<S505>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_n_NiMinForLockUp_In[i] =
            KaTINR_n_NiMinForLockUpInit[(i)];

        /* SignalConversion generated from: '<S484>/Comm_n_NiMinToOpen_Init' incorporates:
         *  Constant: '<S507>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_n_NiMinToOpen_Init[i] =
            KaTINR_n_NiMinToOpenInit[(i)];

        /* SignalConversion generated from: '<S484>/Comm_n_NiMinForLockUpCoast_Init' incorporates:
         *  Constant: '<S504>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_n_NiMinForLockUpCoa[i] =
            KaTINR_n_NiMinForLockUpCoastInit[(i)];

        /* SignalConversion generated from: '<S484>/Comm_n_NiMinToOpenCoast_Init' incorporates:
         *  Constant: '<S506>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_n_NiMinToOpenCoast_[i] =
            KaTINR_n_NiMinToOpenCoastInit[(i)];

        /* SignalConversion generated from: '<S485>/LaTINR_n_NiMinForLockUp_Init' incorporates:
         *  Constant: '<S593>/Calib'
         */
        TINR_ac_B.OutportBufferForLaTINR_n_NiMinForLockUp_[i] =
            KaTINR_n_NiMinForLockUpInit[(i)];

        /* SignalConversion generated from: '<S485>/LaTINR_n_NiMinToOpen_Init' incorporates:
         *  Constant: '<S595>/Calib'
         */
        TINR_ac_B.OutportBufferForLaTINR_n_NiMinToOpen_Ini[i] =
            KaTINR_n_NiMinToOpenInit[(i)];

        /* SignalConversion generated from: '<S485>/LaTINR_n_NiMinToOpenCoast_Init' incorporates:
         *  Constant: '<S594>/Calib'
         */
        TINR_ac_B.OutportBufferForLaTINR_n_NiMinToOpenCoas[i] =
            KaTINR_n_NiMinToOpenCoastInit[(i)];

        /* SignalConversion generated from: '<S485>/LaTINR_n_NiMinForLockUpCoast_Init' incorporates:
         *  Constant: '<S592>/Calib'
         */
        TINR_ac_B.OutportBufferForLaTINR_n_NiMinForLockUpC[i] =
            KaTINR_n_NiMinForLockUpCoastInit[(i)];
    }

    /* SignalConversion generated from: '<S485>/LeTINR_e_TransAdpSts_Init' incorporates:
     *  Constant: '<S586>/Constant'
     */
    TINR_ac_B.OutportBufferForLeTINR_e_TransAdpSts_Ini =
        TINR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S485>/LeTINR_d_TCMFailures_Init' incorporates:
     *  Constant: '<S599>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_d_TCMFailures_Ini =
        KeTINR_d_TCMFailures_Init;

    /* SignalConversion generated from: '<S485>/LeTINR_e_TCMTCCPreventionID_Init' incorporates:
     *  Constant: '<S602>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_e_TCMTCCPreventio =
        KeTINR_e_TCM_TCCPreventionIDInit;
    for (i = 0; i < 6; i++)
    {
        /* SignalConversion generated from: '<S485>/LaTINR_M_ClchTrq_Init' incorporates:
         *  Constant: '<S589>/Calib'
         */
        TINR_ac_B.OutportBufferForLaTINR_M_ClchTrq_Init[i] =
            KaTINR_M_ClchTrqInit[(i)];
    }

    /* SignalConversion generated from: '<S485>/LeTINR_e_MtrBDynFctr_Init' incorporates:
     *  Constant: '<S601>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_e_MtrBDynFctr_Ini =
        KeTINR_e_MtrBDynFctrDflt;

    /* SignalConversion generated from: '<S485>/LeTINR_b_ClchFaultActv_Init' */
    TINR_ac_B.OutportBufferForLeTINR_b_ClchFaultActv_I = false;

    /* SignalConversion generated from: '<S485>/LeTINR_t_TCM_TimeToSpeedChange_Init' incorporates:
     *  Constant: '<S607>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_t_TCM_TimeToSpeed =
        KeTINR_t_TCM_TimeToSpeedChange;

    /* SignalConversion generated from: '<S485>/LeTINR_e_TransLimpRequest_Init' incorporates:
     *  Constant: '<S587>/Constant'
     */
    TINR_ac_B.OutportBufferForLeTINR_e_TransLimpReques =
        TINR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S485>/LeTINR_b_DrvLnMinTrqMd_Init' incorporates:
     *  Constant: '<S596>/Calib'
     */
    TINR_ac_B.OutportBufferForLeTINR_b_DrvLnMinTrqMd_I =
        KeTINR_b_DrvLnMinTrqMd_Init;

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_Cnt_TCM_DriverType' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_Cnt_TCM_DriverType_Init'
     */
    (void)Rte_Write_VeTINR_Cnt_TCM_DriverType_Value
        (TINR_ac_B.OutportBufferForComm_Cnt_TCM_DriverType_);

    /* Outport: '<Root>/VeTINR_Pct_TransStrssFctr' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_Pct_TransStrssFctrInit'
     */
    (void)Rte_Write_VeTINR_Pct_TransStrssFctr_Value
        (TINR_ac_B.OutportBufferForComm_Pct_TransStrssFctrI);

    /* Outport: '<Root>/VeTINR_b_ActualGearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_ActualGearFA_Init'
     */
    (void)Rte_Write_VeTINR_b_ActualGearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_ActualGearFA_Init);

    /* Outport: '<Root>/VeTINR_b_EngStrtTypAvblFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_EngStrtTypAvblFA'
     */
    (void)Rte_Write_VeTINR_b_EngStrtTypAvblFA_Value
        (TINR_ac_B.OutportBufferForComm_b_EngStrtTypAvblFA);

    /* Outport: '<Root>/VeTINR_b_ShftTypeTLFFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_GearShftType2FA_Init'
     */
    (void)Rte_Write_VeTINR_b_ShftTypeTLFFA_Value
        (TINR_ac_B.OutportBufferForComm_b_GearShftType2FA_I);

    /* Outport: '<Root>/VeTINR_b_ShftTypeFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_GearShftTypeFA_Init'
     */
    (void)Rte_Write_VeTINR_b_ShftTypeFA_Value
        (TINR_ac_B.OutportBufferForComm_b_GearShftTypeFA_In);

    /* Outport: '<Root>/VeTINR_b_ILE_STO_Stat' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_ILE_STO_Stat_Init'
     */
    (void)Rte_Write_VeTINR_b_ILE_STO_Stat_Value
        (TINR_ac_B.OutportBufferForComm_b_ILE_STO_Stat_Init);

    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear1' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Inhibit_Gear1_Init'
     */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear1_Value
        (TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear1_Ini);

    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear2' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Inhibit_Gear2_Init'
     */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear2_Value
        (TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear2_Ini);

    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear3' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Inhibit_Gear3_Init'
     */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear3_Value
        (TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear3_Ini);

    /* Outport: '<Root>/VeTINR_b_Inhibit_Gear4' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Inhibit_Gear4_Init'
     */
    (void)Rte_Write_VeTINR_b_Inhibit_Gear4_Value
        (TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear4_Ini);

    /* Outport: '<Root>/VeTINR_b_Inhibit_Mode1' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Inhibit_Mode1_Init'
     */
    (void)Rte_Write_VeTINR_b_Inhibit_Mode1_Value
        (TINR_ac_B.OutportBufferForComm_b_Inhibit_Mode1_Ini);

    /* Outport: '<Root>/VeTINR_b_Inhibit_Mode2' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Inhibit_Mode2_Init'
     */
    (void)Rte_Write_VeTINR_b_Inhibit_Mode2_Value
        (TINR_ac_B.OutportBufferForComm_b_Inhibit_Mode2_Ini);

    /* Outport: '<Root>/VeTINR_b_Inhibit_Neutral' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Inhibit_Neutral_Init'
     */
    (void)Rte_Write_VeTINR_b_Inhibit_Neutral_Value
        (TINR_ac_B.OutportBufferForComm_b_Inhibit_Neutral_I);

    /* Outport: '<Root>/VeTINR_b_KGB' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_KGB_Init'
     */
    (void)Rte_Write_VeTINR_b_KGB_Value(TINR_ac_B.OutportBufferForComm_b_KGB_Init);

    /* Outport: '<Root>/VeTINR_b_KOB' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_KOB_Init'
     */
    (void)Rte_Write_VeTINR_b_KOB_Value(TINR_ac_B.OutportBufferForComm_b_KOB_Init);

    /* Outport: '<Root>/VeTINR_b_KSB' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_KSB_Init'
     */
    (void)Rte_Write_VeTINR_b_KSB_Value(TINR_ac_B.OutportBufferForComm_b_KSB_Init);

    /* Outport: '<Root>/VeTINR_b_Synchro2GearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_Synchro2GearInitFA'
     */
    (void)Rte_Write_VeTINR_b_Synchro2GearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_Synchro2GearInitF);

    /* Outport: '<Root>/VeTINR_b_Synchro1GearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_SynchroGearInitFA'
     */
    (void)Rte_Write_VeTINR_b_Synchro1GearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_SynchroGearInitFA);

    /* Outport: '<Root>/VeTINR_b_TCMActModeFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMHASActModeFA'
     */
    (void)Rte_Write_VeTINR_b_TCMActModeFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TCMHASActModeFA);

    /* Outport: '<Root>/VeTINR_b_TCMSpdCtrlCapable' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMSpdCtrlCapable_Init'
     */
    (void)Rte_Write_VeTINR_b_TCMSpdCtrlCapable_Value
        (TINR_ac_B.OutportBufferForComm_b_TCMSpdCtrlCapable);

    /* Outport: '<Root>/VeTINR_b_TCMTransReqFuelON' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMTransReqFuelON_Init'
     */
    (void)Rte_Write_VeTINR_b_TCMTransReqFuelON_Value
        (TINR_ac_B.OutportBufferForComm_b_TCMTransReqFuelON);

    /* Outport: '<Root>/VeTINR_b_TCMTrqCntrlMdFstFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMTrqCntrlMdFstFA_Init'
     */
    (void)Rte_Write_VeTINR_b_TCMTrqCntrlMdFstFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TCMTrqCntrlMdFstF);

    /* Outport: '<Root>/VeTINR_b_TCMTrqCntrlMdSlwFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMTrqCntrlMdSlwFA_Init'
     */
    (void)Rte_Write_VeTINR_b_TCMTrqCntrlMdSlwFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TCMTrqCntrlMdSlwF);

    /* Outport: '<Root>/VeTINR_b_TCM_ASCReq' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCM_ASCReq'
     */
    (void)Rte_Write_VeTINR_b_TCM_ASCReq_Value
        (TINR_ac_B.OutportBufferForComm_b_TCM_ASCReq);

    /* Outport: '<Root>/VeTINR_b_TCM_ActiveEVGearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCM_ActiveEVGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_ActiveEVGearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TCM_ActiveEVGearF);

    /* Outport: '<Root>/VeTINR_b_TCM_ActiveHybridGearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCM_ActiveHybridGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_ActiveHybridGearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TCM_ActiveHybridG);

    /* Outport: '<Root>/VeTINR_b_TCM_ActiveXNGearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCM_ActiveXNGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_ActiveXNGearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TCM_ActiveXNGearF);

    /* Outport: '<Root>/VeTINR_b_TCM_PassiveHybridGearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCM_PassiveHybridGearFA'
     */
    (void)Rte_Write_VeTINR_b_TCM_PassiveHybridGearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TCM_PassiveHybrid);

    /* Outport: '<Root>/VeTINR_b_TargetGearFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TargetGearFA_Init'
     */
    (void)Rte_Write_VeTINR_b_TargetGearFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TargetGearFA_Init);

    /* Outport: '<Root>/VeTINR_b_TCMTransTrqRatioFA' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TransTrqRatioFA_Init'
     */
    (void)Rte_Write_VeTINR_b_TCMTransTrqRatioFA_Value
        (TINR_ac_B.OutportBufferForComm_b_TransTrqRatioFA_I);

    /* Outport: '<Root>/VeTINR_d_EngStrtTypAvbl' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_d_EngStrtTypAvbl'
     */
    (void)Rte_Write_VeTINR_d_EngStrtTypAvbl_Value
        (TINR_ac_B.OutportBufferForComm_d_EngStrtTypAvbl);

    /* Outport: '<Root>/VeTINR_e_ActualGear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_ActualGear_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_ActualGear_Init'
     */
    (void)Rte_Write_VeTINR_e_ActualGear_Value
        (TINR_ac_B.OutportBufferForComm_e_ActualGear_Init);

    /* Outport: '<Root>/VeTINR_e_ComFailTCM_C1CAN' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_ComFailTCM_C1CAN'
     *  SignalConversion generated from: '<S484>/Comm_e_ComFailTCM_C1CAN'
     */
    (void)Rte_Write_VeTINR_e_ComFailTCM_C1CAN_Value
        (TINR_ac_B.OutportBufferForComm_e_ComFailTCM_C1CAN);

    /* Outport: '<Root>/VeTINR_e_ComFailTCM_ePtCAN' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_ComFailTCM_ePtCAN'
     *  SignalConversion generated from: '<S484>/Comm_e_ComFailTCM_ePtCAN'
     */
    (void)Rte_Write_VeTINR_e_ComFailTCM_ePtCAN_Value
        (TINR_ac_B.OutportBufferForComm_e_ComFailTCM_ePtCAN);

    /* Outport: '<Root>/VeTINR_e_ShftTypeTLF' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_GearShftType2_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_GearShftType2_Init'
     */
    (void)Rte_Write_VeTINR_e_ShftTypeTLF_Value
        (TINR_ac_B.OutportBufferForComm_e_GearShftType2_Ini);

    /* Outport: '<Root>/VeTINR_e_ShftType' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_GearShftType_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_GearShftType_Init'
     */
    (void)Rte_Write_VeTINR_e_ShftType_Value
        (TINR_ac_B.OutportBufferForComm_e_GearShftType_Init);

    /* Outport: '<Root>/VeTINR_e_HASStatusK0' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_HASStatusK0_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_HASStatusK0_Init'
     */
    (void)Rte_Write_VeTINR_e_HASStatusK0_Value
        (TINR_ac_B.OutportBufferForComm_e_HASStatusK0_Init);

    /* Outport: '<Root>/VeTINR_e_ILEStat' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_ILEStat_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_ILEStat_Init'
     */
    (void)Rte_Write_VeTINR_e_ILEStat_Value
        (TINR_ac_B.OutportBufferForComm_e_ILEStat_Init);

    /* Outport: '<Root>/VeTINR_e_K1Status' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_K1Status_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_K1Status_Init'
     */
    (void)Rte_Write_VeTINR_e_K1Status_Value
        (TINR_ac_B.OutportBufferForComm_e_K1Status_Init);

    /* Outport: '<Root>/VeTINR_e_P2SpdCntrlReq' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_P2SpdCntrlReq_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_P2SpdCntrlReq_Init'
     */
    (void)Rte_Write_VeTINR_e_P2SpdCntrlReq_Value
        (TINR_ac_B.OutportBufferForComm_e_P2SpdCntrlReq_Ini);

    /* Outport: '<Root>/VeTINR_e_Synchro1Sts' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_Synchro1Sts_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_Synchro1Sts_Init'
     */
    (void)Rte_Write_VeTINR_e_Synchro1Sts_Value
        (TINR_ac_B.OutportBufferForComm_e_Synchro1Sts_Init);

    /* Outport: '<Root>/VeTINR_e_Synchro2Gear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_Synchro2GearInit'
     *  SignalConversion generated from: '<S484>/Comm_e_Synchro2GearInit'
     */
    (void)Rte_Write_VeTINR_e_Synchro2Gear_Value
        (TINR_ac_B.OutportBufferForComm_e_Synchro2GearInit);

    /* Outport: '<Root>/VeTINR_e_Synchro2Sts' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_Synchro2Sts_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_Synchro2Sts_Init'
     */
    (void)Rte_Write_VeTINR_e_Synchro2Sts_Value
        (TINR_ac_B.OutportBufferForComm_e_Synchro2Sts_Init);

    /* Outport: '<Root>/VeTINR_e_Synchro1Gear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_SynchroGearInit'
     *  SignalConversion generated from: '<S484>/Comm_e_SynchroGearInit'
     */
    (void)Rte_Write_VeTINR_e_Synchro1Gear_Value
        (TINR_ac_B.OutportBufferForComm_e_SynchroGearInit);

    /* Outport: '<Root>/VeTINR_e_TCMActMode' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCMHASActMode'
     *  SignalConversion generated from: '<S484>/Comm_e_TCMHASActMode'
     */
    (void)Rte_Write_VeTINR_e_TCMActMode_Value
        (TINR_ac_B.OutportBufferForComm_e_TCMHASActMode);

    /* Outport: '<Root>/VeTINR_e_TCMModeReq' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCMModeReq_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_TCMModeReq_Init'
     */
    (void)Rte_Write_VeTINR_e_TCMModeReq_Value
        (TINR_ac_B.OutportBufferForComm_e_TCMModeReq_Init);

    /* Outport: '<Root>/VeTINR_e_TCMStrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCMStrtStpOvrrd_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_TCMStrtStpOvrrd_Init'
     */
    (void)Rte_Write_VeTINR_e_TCMStrtStpOvrrd_Value
        (TINR_ac_B.OutportBufferForComm_e_TCMStrtStpOvrrd_I);

    /* Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCMTrqCntrlMdFst_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_TCMTrqCntrlMdFst_Init'
     */
    (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdFst_Value
        (TINR_ac_B.OutportBufferForComm_e_TCMTrqCntrlMdFst_);

    /* Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdSlw' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCMTrqCntrlMdSlw_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_TCMTrqCntrlMdSlw_Init'
     */
    (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdSlw_Value
        (TINR_ac_B.OutportBufferForComm_e_TCMTrqCntrlMdSlw_);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveEVGear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCM_ActiveEVGear'
     *  SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveEVGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveEVGear_Value
        (TINR_ac_B.OutportBufferForComm_e_TCM_ActiveEVGear);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveHybridGear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCM_ActiveHybridGear'
     *  SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveHybridGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveHybridGear_Value
        (TINR_ac_B.OutportBufferForComm_e_TCM_ActiveHybridG);

    /* Outport: '<Root>/VeTINR_e_TCM_ActiveXNGear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCM_ActiveXNGear'
     *  SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveXNGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_ActiveXNGear_Value
        (TINR_ac_B.OutportBufferForComm_e_TCM_ActiveXNGear);

    /* Outport: '<Root>/VeTINR_e_TCM_ClutchStartGear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCM_ClutchStartGear_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_TCM_ClutchStartGear_Init'
     */
    (void)Rte_Write_VeTINR_e_TCM_ClutchStartGear_Value
        (TINR_ac_B.OutportBufferForComm_e_TCM_ClutchStartGe);

    /* Outport: '<Root>/VeTINR_e_TCM_PassiveHybridGear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCM_PassiveHybridGear'
     *  SignalConversion generated from: '<S484>/Comm_e_TCM_PassiveHybridGear'
     */
    (void)Rte_Write_VeTINR_e_TCM_PassiveHybridGear_Value
        (TINR_ac_B.OutportBufferForComm_e_TCM_PassiveHybrid);

    /* Outport: '<Root>/VeTINR_e_TargetGear' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TargetGear_Init'
     *  SignalConversion generated from: '<S484>/Comm_e_TargetGear_Init'
     */
    (void)Rte_Write_VeTINR_e_TargetGear_Value
        (TINR_ac_B.OutportBufferForComm_e_TargetGear_Init);

    /* Outport: '<Root>/VeTINR_i_TCM_DriveProgram' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_i_TCM_DriveProgram_Init'
     */
    (void)Rte_Write_VeTINR_i_TCM_DriveProgram_Value
        (TINR_ac_B.OutportBufferForComm_i_TCM_DriveProgram_);

    /* Outport: '<Root>/VeTINR_n_DisengageILE' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_n_DisengageILE'
     */
    (void)Rte_Write_VeTINR_n_DisengageILE_Value
        (TINR_ac_B.OutportBufferForComm_n_DisengageILE);

    /* Outport: '<Root>/VeTINR_b_DsblAEMD4TCM' incorporates:
     *  SignalConversion generated from: '<S162>/DsblAEMD4TCM_Init'
     */
    (void)Rte_Write_VeTINR_b_DsblAEMD4TCM_Value
        (TINR_ac_B.OutportBufferForDsblAEMD4TCM_Init);

    /* Outport: '<Root>/VaTINR_M_ClchTrq' incorporates:
     *  SignalConversion generated from: '<S162>/LaTINR_M_ClchTrq_Init'
     */
    (void)Rte_Write_VaTINR_M_ClchTrq_Value
        (TINR_ac_B.OutportBufferForLaTINR_M_ClchTrq_Init);

    /* Outport: '<Root>/VaTINR_n_NiMinForLockUpCoast' incorporates:
     *  SignalConversion generated from: '<S162>/LaTINR_n_NiMinForLockUpCoast_Init'
     */
    (void)Rte_Write_VaTINR_n_NiMinForLockUpCoast_Value
        (TINR_ac_B.OutportBufferForLaTINR_n_NiMinForLockUpC);

    /* Outport: '<Root>/VaTINR_n_NiMinForLockUp' incorporates:
     *  SignalConversion generated from: '<S162>/LaTINR_n_NiMinForLockUp_Init'
     */
    (void)Rte_Write_VaTINR_n_NiMinForLockUp_Value
        (TINR_ac_B.OutportBufferForLaTINR_n_NiMinForLockUp_);

    /* Outport: '<Root>/VaTINR_n_NiMinToOpenCoast' incorporates:
     *  SignalConversion generated from: '<S162>/LaTINR_n_NiMinToOpenCoast_Init'
     */
    (void)Rte_Write_VaTINR_n_NiMinToOpenCoast_Value
        (TINR_ac_B.OutportBufferForLaTINR_n_NiMinToOpenCoas);

    /* Outport: '<Root>/VaTINR_n_NiMinToOpen' incorporates:
     *  SignalConversion generated from: '<S162>/LaTINR_n_NiMinToOpen_Init'
     */
    (void)Rte_Write_VaTINR_n_NiMinToOpen_Value
        (TINR_ac_B.OutportBufferForLaTINR_n_NiMinToOpen_Ini);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINO_Init'
     */
    /* Outport: '<Root>/VeTINR_M_ActualClch1_TCM' incorporates:
     *  Constant: '<S485>/Constant Value15'
     *  Constant: '<S588>/Calib'
     *  Selector: '<S485>/Selector12'
     *  SignalConversion generated from: '<S162>/LeTINR_M_ActualClch1_TCM_Init'
     */
    (void)Rte_Write_VeTINR_M_ActualClch1_TCM_Value(KaTINR_M_ClchTorqInitVal_DCT
        [0]);

    /* Outport: '<Root>/VeTINR_M_ActualClch3_TCM' incorporates:
     *  Constant: '<S485>/Constant Value19'
     *  Constant: '<S588>/Calib'
     *  Selector: '<S485>/Selector13'
     *  SignalConversion generated from: '<S162>/LeTINR_M_ActualClch3_TCM_Init'
     */
    (void)Rte_Write_VeTINR_M_ActualClch3_TCM_Value(KaTINR_M_ClchTorqInitVal_DCT
        [1]);

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_b_ClchFaultActv' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_b_ClchFaultActv_Init'
     */
    (void)Rte_Write_VeTINR_b_ClchFaultActv_Value
        (TINR_ac_B.OutportBufferForLeTINR_b_ClchFaultActv_I);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINO_Init'
     */
    /* Outport: '<Root>/VeTINR_b_ClchTrqFA' incorporates:
     *  Constant: '<S485>/Constant Value10'
     *  Constant: '<S485>/Constant Value11'
     *  Constant: '<S485>/Constant Value12'
     *  Constant: '<S485>/Constant Value13'
     *  Constant: '<S485>/Constant Value14'
     *  Constant: '<S485>/Constant Value9'
     *  Constant: '<S590>/Calib'
     *  Logic: '<S485>/LogicalOperator'
     *  Selector: '<S485>/Selector10'
     *  Selector: '<S485>/Selector11'
     *  Selector: '<S485>/Selector6'
     *  Selector: '<S485>/Selector7'
     *  Selector: '<S485>/Selector8'
     *  Selector: '<S485>/Selector9'
     *  SignalConversion generated from: '<S162>/LeTINR_b_ClchTrqFA_Init'
     */
    (void)Rte_Write_VeTINR_b_ClchTrqFA_Value((((((KaTINR_b_ClchTrqFAInit[0]) ||
        (KaTINR_b_ClchTrqFAInit[1])) || (KaTINR_b_ClchTrqFAInit[2])) ||
        (KaTINR_b_ClchTrqFAInit[3])) || (KaTINR_b_ClchTrqFAInit[4])) ||
        (KaTINR_b_ClchTrqFAInit[5]));

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_b_DrvLnMinTrqMd' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_b_DrvLnMinTrqMd_Init'
     */
    (void)Rte_Write_VeTINR_b_DrvLnMinTrqMd_Value
        (TINR_ac_B.OutportBufferForLeTINR_b_DrvLnMinTrqMd_I);

    /* Outport: '<Root>/VeTINR_b_PwrFlowStatus' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_b_PwrFlowStatus_Init'
     */
    (void)Rte_Write_VeTINR_b_PwrFlowStatus_Value
        (TINR_ac_B.OutportBufferForLeTINR_b_PwrFlowStatus_I);

    /* Outport: '<Root>/VeTINR_b_TCMLimphomeFaultsFA' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_b_TCMLimphomeFaultsFA_Init'
     */
    (void)Rte_Write_VeTINR_b_TCMLimphomeFaultsFA_Value
        (TINR_ac_B.OutportBufferForLeTINR_b_TCMLimphomeFaul);

    /* Outport: '<Root>/VeTINR_d_TCMFailures' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_d_TCMFailures_Init'
     */
    (void)Rte_Write_VeTINR_d_TCMFailures_Value
        (TINR_ac_B.OutportBufferForLeTINR_d_TCMFailures_Ini);

    /* Outport: '<Root>/VeTINR_d_TCMLimphomeFaults' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_d_TCMLimphomeFaults_Init'
     */
    (void)Rte_Write_VeTINR_d_TCMLimphomeFaults_Value
        (TINR_ac_B.OutportBufferForLeTINR_d_TCMLimphomeFaul);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINO_Init'
     */
    /* Outport: '<Root>/VeTINR_e_Clch1Sts' incorporates:
     *  Constant: '<S485>/Constant Value17'
     *  Constant: '<S591>/Calib'
     *  Selector: '<S485>/Selector14'
     *  SignalConversion generated from: '<S162>/LeTINR_e_Clch1Sts_Init'
     */
    (void)Rte_Write_VeTINR_e_Clch1Sts_Value(KaTINR_e_ClchStInit_DCT[0]);

    /* Outport: '<Root>/VeTINR_e_Clch3Sts' incorporates:
     *  Constant: '<S485>/Constant Value18'
     *  Constant: '<S591>/Calib'
     *  Selector: '<S485>/Selector15'
     *  SignalConversion generated from: '<S162>/LeTINR_e_Clch3Sts_Init'
     */
    (void)Rte_Write_VeTINR_e_Clch3Sts_Value(KaTINR_e_ClchStInit_DCT[1]);

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Outport: '<Root>/VeTINR_e_MtrBDynFctr' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_e_MtrBDynFctr_Init'
     *  SignalConversion generated from: '<S485>/LeTINR_e_MtrBDynFctr_Init'
     */
    (void)Rte_Write_VeTINR_e_MtrBDynFctr_Value
        (TINR_ac_B.OutportBufferForLeTINR_e_MtrBDynFctr_Ini);

    /* Outport: '<Root>/VeTINR_e_TCMTCCPreventionID' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_e_TCMTCCPreventionID_Init'
     *  SignalConversion generated from: '<S485>/LeTINR_e_TCMTCCPreventionID_Init'
     */
    (void)Rte_Write_VeTINR_e_TCMTCCPreventionID_Value
        (TINR_ac_B.OutportBufferForLeTINR_e_TCMTCCPreventio);

    /* Outport: '<Root>/VeTINR_e_TransAdpSts' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_e_TransAdpSts_Init'
     *  SignalConversion generated from: '<S485>/LeTINR_e_TransAdpSts_Init'
     */
    (void)Rte_Write_VeTINR_e_TransAdpSts_Value
        (TINR_ac_B.OutportBufferForLeTINR_e_TransAdpSts_Ini);

    /* Outport: '<Root>/VeTINR_e_TransLimpRequest' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_e_TransLimpRequest_Init'
     *  SignalConversion generated from: '<S485>/LeTINR_e_TransLimpRequest_Init'
     */
    (void)Rte_Write_VeTINR_e_TransLimpRequest_Value
        (TINR_ac_B.OutportBufferForLeTINR_e_TransLimpReques);

    /* Outport: '<Root>/VeTINR_i_MaxGearAllwd' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_i_MaxGearAllwd_Init'
     */
    (void)Rte_Write_VeTINR_i_MaxGearAllwd_Value
        (TINR_ac_B.OutportBufferForLeTINR_i_MaxGearAllwd_In);

    /* Outport: '<Root>/VeTINR_i_MinGearAllwd' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_i_MinGearAllwd_Init'
     */
    (void)Rte_Write_VeTINR_i_MinGearAllwd_Value
        (TINR_ac_B.OutportBufferForLeTINR_i_MinGearAllwd_In);

    /* Outport: '<Root>/VeTINR_r_TCMTransTrqRatio' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_r_TCMTransTrqRatio_Init'
     */
    (void)Rte_Write_VeTINR_r_TCMTransTrqRatio_Value
        (TINR_ac_B.OutportBufferForLeTINR_r_TCMTransTrqRati);

    /* Outport: '<Root>/VeTINR_r_TCM_HillMode' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_r_TCM_HillMode_Init'
     */
    (void)Rte_Write_VeTINR_r_TCM_HillMode_Value
        (TINR_ac_B.OutportBufferForLeTINR_r_TCM_HillMode_In);

    /* Outport: '<Root>/VeTINR_t_TCM_TimeToSpeedChange' incorporates:
     *  SignalConversion generated from: '<S162>/LeTINR_t_TCM_TimeToSpeedChange_Init'
     */
    (void)Rte_Write_VeTINR_t_TCM_TimeToSpeedChange_Value
        (TINR_ac_B.OutportBufferForLeTINR_t_TCM_TimeToSpeed);

    /* Outport: '<Root>/VeTINR_M_DrvLnTrqRq_Axle' incorporates:
     *  SignalConversion generated from: '<S162>/M_DrvLnTrqRq_Axle_Init'
     */
    (void)Rte_Write_VeTINR_M_DrvLnTrqRq_Axle_Value
        (TINR_ac_B.OutportBufferForM_DrvLnTrqRq_Axle_Init);

    /* Outport: '<Root>/VeTINR_b_DrvLnTrqRq_Axle_FA' incorporates:
     *  SignalConversion generated from: '<S162>/b_DrvLnTrqRq_Axle_FA_Init'
     */
    (void)Rte_Write_VeTINR_b_DrvLnTrqRq_Axle_FA_Value
        (TINR_ac_B.OutportBufferForb_DrvLnTrqRq_Axle_FA_Ini);

    /* Outport: '<Root>/VeTINR_b_Mech_DrivelineRatioFA' incorporates:
     *  SignalConversion generated from: '<S162>/b_MechDrivelineRatioFA_Init_write'
     */
    (void)Rte_Write_VeTINR_b_Mech_DrivelineRatioFA_Value
        (TINR_ac_B.OutportBufferForb_MechDrivelineRatioFA_I);

    /* Outport: '<Root>/VeTINR_b_TCC_TR_Gen4FA' incorporates:
     *  SignalConversion generated from: '<S162>/b_TCC_TRFA_Init_write'
     */
    (void)Rte_Write_VeTINR_b_TCC_TR_Gen4FA_Value
        (TINR_ac_B.OutportBufferForb_r_TCC_TRFA_Init);

    /* Outport: '<Root>/VeTINR_r_Mech_DrivelineRatio' incorporates:
     *  SignalConversion generated from: '<S162>/r_MechDrivelineRatio_Init_write'
     */
    (void)Rte_Write_VeTINR_r_Mech_DrivelineRatio_Value
        (TINR_ac_B.OutportBufferForr_MechDrivelineRatio_Ini);

    /* Outport: '<Root>/VeTINR_r_TCC_TR_Gen4' incorporates:
     *  SignalConversion generated from: '<S162>/r_TCC_TR_Init_write'
     */
    (void)Rte_Write_VeTINR_r_TCC_TR_Gen4_Value
        (TINR_ac_B.OutportBufferForr_TCC_TR_Init);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINI_Init_Inputs'
     */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Constant: '<S484>/Constant Value24'
     *  Constant: '<S501>/Calib'
     *  Selector: '<S484>/Selector18'
     *  SignalConversion generated from: '<S162>/ActualClch1_TCMFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ActualClutch1_TCMFA_write_IRV
        (KaTINR_b_ClchTorqFAInit_DCT[0]);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  Constant: '<S484>/Constant Value25'
     *  Constant: '<S501>/Calib'
     *  Selector: '<S484>/Selector19'
     *  SignalConversion generated from: '<S162>/ActualClch3_TCMFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ActualClutch3_TCMFA_write_IRV
        (KaTINR_b_ClchTorqFAInit_DCT[1]);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  Constant: '<S484>/Constant Value15'
     *  Constant: '<S498>/Calib'
     *  Selector: '<S484>/Selector12'
     *  SignalConversion generated from: '<S162>/ActualClutch1_TCM_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ActualClutch1_TCM_write_IRV
        (KaTINR_M_ClchTorqInitVal_DCT[0]);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  Constant: '<S484>/Constant Value19'
     *  Constant: '<S498>/Calib'
     *  Selector: '<S484>/Selector13'
     *  SignalConversion generated from: '<S162>/ActualClutch3_TCM_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ActualClutch3_TCM_write_IRV
        (KaTINR_M_ClchTorqInitVal_DCT[1]);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Constant: '<S484>/Constant Value22'
     *  Constant: '<S500>/Calib'
     *  Selector: '<S484>/Selector20'
     *  SignalConversion generated from: '<S162>/ClchStAFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_Clch1StsFA_write_IRV
        (KaTINR_b_ClchStFAInit_DCT[0]);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Constant: '<S484>/Constant Value17'
     *  Constant: '<S503>/Calib'
     *  Selector: '<S484>/Selector14'
     *  SignalConversion generated from: '<S162>/ClchStA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_e_Clch1Sts_write_IRV(KaTINR_e_ClchStInit_DCT
        [0]);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  Constant: '<S484>/Constant Value23'
     *  Constant: '<S500>/Calib'
     *  Selector: '<S484>/Selector21'
     *  SignalConversion generated from: '<S162>/ClchStBFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_Clch3StsFA_write_IRV
        (KaTINR_b_ClchStFAInit_DCT[1]);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  Constant: '<S484>/Constant Value18'
     *  Constant: '<S503>/Calib'
     *  Selector: '<S484>/Selector15'
     *  SignalConversion generated from: '<S162>/ClchStB_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_e_Clch3Sts_write_IRV(KaTINR_e_ClchStInit_DCT
        [1]);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  Constant: '<S484>/Constant Value9'
     *  Constant: '<S502>/Calib'
     *  Selector: '<S484>/Selector6'
     *  SignalConversion generated from: '<S162>/ClchTrqAFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ClchTrqAFA_write_IRV
        (KaTINR_b_ClchTrqFAInit[0]);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  Constant: '<S484>/Constant Value1'
     *  Constant: '<S499>/Calib'
     *  Selector: '<S484>/Selector'
     *  SignalConversion generated from: '<S162>/ClchTrqA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ClchTrqA_write_IRV(KaTINR_M_ClchTrqInit[0]);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  Constant: '<S484>/Constant Value13'
     *  Constant: '<S502>/Calib'
     *  Selector: '<S484>/Selector7'
     *  SignalConversion generated from: '<S162>/ClchTrqBFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ClchTrqBFA_write_IRV
        (KaTINR_b_ClchTrqFAInit[1]);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  Constant: '<S484>/Constant Value2'
     *  Constant: '<S499>/Calib'
     *  Selector: '<S484>/Selector1'
     *  SignalConversion generated from: '<S162>/ClchTrqB_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ClchTrqB_write_IRV(KaTINR_M_ClchTrqInit[1]);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  Constant: '<S484>/Constant Value14'
     *  Constant: '<S502>/Calib'
     *  Selector: '<S484>/Selector8'
     *  SignalConversion generated from: '<S162>/ClchTrqCFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ClchTrqCFA_write_IRV
        (KaTINR_b_ClchTrqFAInit[2]);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  Constant: '<S484>/Constant Value3'
     *  Constant: '<S499>/Calib'
     *  Selector: '<S484>/Selector2'
     *  SignalConversion generated from: '<S162>/ClchTrqC_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ClchTrqC_write_IRV(KaTINR_M_ClchTrqInit[2]);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  Constant: '<S484>/Constant Value10'
     *  Constant: '<S502>/Calib'
     *  Selector: '<S484>/Selector9'
     *  SignalConversion generated from: '<S162>/ClchTrqDFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ClchTrqDFA_write_IRV
        (KaTINR_b_ClchTrqFAInit[3]);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  Constant: '<S484>/Constant Value5'
     *  Constant: '<S499>/Calib'
     *  Selector: '<S484>/Selector3'
     *  SignalConversion generated from: '<S162>/ClchTrqD_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ClchTrqD_write_IRV(KaTINR_M_ClchTrqInit[3]);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  Constant: '<S484>/Constant Value11'
     *  Constant: '<S502>/Calib'
     *  Selector: '<S484>/Selector10'
     *  SignalConversion generated from: '<S162>/ClchTrqEFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ClchTrqEFA_write_IRV
        (KaTINR_b_ClchTrqFAInit[4]);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  Constant: '<S484>/Constant Value7'
     *  Constant: '<S499>/Calib'
     *  Selector: '<S484>/Selector4'
     *  SignalConversion generated from: '<S162>/ClchTrqE_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ClchTrqE_write_IRV(KaTINR_M_ClchTrqInit[4]);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  Constant: '<S484>/Constant Value12'
     *  Constant: '<S502>/Calib'
     *  Selector: '<S484>/Selector11'
     *  SignalConversion generated from: '<S162>/ClchTrqFFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_ClchTrqFFA_write_IRV
        (KaTINR_b_ClchTrqFAInit[5]);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  Constant: '<S484>/Constant Value8'
     *  Constant: '<S499>/Calib'
     *  Selector: '<S484>/Selector5'
     *  SignalConversion generated from: '<S162>/ClchTrqF_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_ClchTrqF_write_IRV(KaTINR_M_ClchTrqInit[5]);

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Merge: '<Root>/Merge_91' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_DriveLineRatioCanCFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_DriveLineRatioCanCFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_DriveLineRatioCan);

    /* Merge: '<Root>/Merge_88' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_DriveLineRatioEptFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_DriveLineRatioEptFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_DriveLineRatioEpt);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_NiMinForLockUpCoastFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_NiMinForLockUpCoastFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_NiMinForLockUpCoa);

    /* Merge: '<Root>/Merge_72' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_NiMinForLockUpFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_NiMinForLockUpFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_NiMinForLockUpFA_);

    /* Merge: '<Root>/Merge_75' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_NiMinToOpenCoastFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_NiMinToOpenCoastFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_NiMinToOpenCoastF);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_NiMinToOpenFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_NiMinToOpenFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_NiMinToOpenFA_Ini);

    /* Merge: '<Root>/Merge_79' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_PwrFlowStatus_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_PwrFlowStatus_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_PwrFlowStatus_Ini);

    /* Merge: '<Root>/Merge_93' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMLimphomeFaultsC1CANFA_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_TCMLimphomeFaultsC1CANFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_TCMLimphomeFaul_p);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMLimphomeFaultsFA_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_TCMLimphomeFaultsFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_TCMLimphomeFaults);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMNeutPhsZeroTrqReq_CANCFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_TCMNeutPhsZeroTrqReq_CANCFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_TCMNeutPhsZeroTrq);

    /* Merge: '<Root>/Merge_116' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCMNeutPhsZeroTrqReq_ePTCANFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_TCMNeutPhsZeroTrqReq_ePTCANFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_TCMNeutPhsZeroT_k);

    /* Merge: '<Root>/Merge_65' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCM_MaxGearAllwdFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_TCM_MaxGearAllwdFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_TCM_MaxGearAllwdF);

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_b_TCM_MinGearAllwdFA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_TCM_MinGearAllwdFA_write_IRV
        (TINR_ac_B.OutportBufferForComm_b_TCM_MinGearAllwdF);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_d_TCMFailures_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_d_TCMFailures_write_IRV
        (TINR_ac_B.OutportBufferForComm_d_TCMFailures_Init);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINI_Init_Inputs'
     */
    /* Merge: '<Root>/Merge_92' incorporates:
     *  Constant: '<S550>/Calib'
     *  Gain: '<S585>/Gain'
     *  SignalConversion generated from: '<S162>/Comm_d_TCMLimphomeFaultsC1CAN_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_d_TCMLimphomeFaultsC1CAN_write_IRV
        (KeTINR_d_TCMLimphomeFaultsInit);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  Constant: '<S550>/Calib'
     *  Gain: '<S584>/Gain'
     *  SignalConversion generated from: '<S162>/Comm_d_TCMLimphomeFaults_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_d_TCMLimphomeFaults_write_IRV
        (KeTINR_d_TCMLimphomeFaultsInit);

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCMNeutPhsZeroTrqReq_CANC_Init_write'
     *  SignalConversion generated from: '<S484>/Comm_e_TCMNeutPhsZeroTrqReq_CANC_Init'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_e_TCMNeutPhsZeroTrqReq_CANC_write_IRV
        (TINR_ac_B.OutportBufferForComm_e_TCMNeutPhsZeroTrq);

    /* Merge: '<Root>/Merge_115' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TCMNeutPhsZeroTrqReq_ePTCAN_Init_write'
     *  SignalConversion generated from: '<S484>/Comm_e_TCMNeutPhsZeroTrqReq_ePTCAN_Init'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_e_TCMNeutPhsZeroTrqReq_ePTCAN_write_IRV
        (TINR_ac_B.OutportBufferForComm_e_TCMNeutPhsZeroT_m);

    /* Merge: '<Root>/Merge_112' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_e_TransAdpSts_write'
     *  SignalConversion generated from: '<S484>/Comm_e_TransAdpSts'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_e_TransAdpStatus_write_IRV
        (TINR_ac_B.OutportBufferForComm_e_TransAdpSts);

    /* Merge: '<Root>/Merge_63' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_i_TCM_MaxGearAllwd_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_i_TCM_MaxGearAllwd_write_IRV
        (TINR_ac_B.OutportBufferForComm_i_TCM_MaxGearAllwd_);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_i_TCM_MinGearAllwd_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_i_TCM_MinGearAllwd_write_IRV
        (TINR_ac_B.OutportBufferForComm_i_TCM_MinGearAllwd_);

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_n_NiMinForLockUpCoast_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VaTINR_n_NiMinForLockUpCoast_write_IRV
        (TINR_ac_B.OutportBufferForComm_n_NiMinForLockUpCoa);

    /* Merge: '<Root>/Merge_71' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_n_NiMinForLockUp_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VaTINR_n_NiMinForLockUp_write_IRV
        (TINR_ac_B.OutportBufferForComm_n_NiMinForLockUp_In);

    /* Merge: '<Root>/Merge_73' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_n_NiMinToOpenCoast_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VaTINR_n_NiMinToOpenCoast_write_IRV
        (TINR_ac_B.OutportBufferForComm_n_NiMinToOpenCoast_);

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_n_NiMinToOpen_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VaTINR_n_NiMinToOpen_write_IRV
        (TINR_ac_B.OutportBufferForComm_n_NiMinToOpen_Init);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINI_Init_Inputs'
     */
    /* Merge: '<Root>/Merge_89' incorporates:
     *  Constant: '<S576>/Calib'
     *  Gain: '<S583>/Gain'
     *  SignalConversion generated from: '<S162>/Comm_r_DriveLineRatioCanC_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_r_DriveLineRatioCanC_write_IRV
        (KeTINR_r_DriveLineRatioInit);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  Constant: '<S576>/Calib'
     *  Gain: '<S582>/Gain'
     *  SignalConversion generated from: '<S162>/Comm_r_DriveLineRatioEpt_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_r_DriveLineRatioEpt_write_IRV
        (KeTINR_r_DriveLineRatioInit);

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Merge: '<Root>/Merge_61' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_r_TCM_HillMode_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_r_TCM_HillMode_write_IRV
        (TINR_ac_B.OutportBufferForComm_r_TCM_HillMode_Init);

    /* Merge: '<Root>/Merge_101' incorporates:
     *  SignalConversion generated from: '<S162>/Comm_r_TransTrqRatio_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_r_TransTrqRatio_write_IRV
        (TINR_ac_B.OutportBufferForComm_r_TransTrqRatio_Ini);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINI_Init_Inputs'
     */
    /* Merge: '<Root>/Merge_34' incorporates:
     *  Constant: '<S484>/Constant Value26'
     *  Constant: '<S501>/Calib'
     *  Selector: '<S484>/Selector22'
     *  SignalConversion generated from: '<S162>/LeadClch1_TCMFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_LeadClutch1_TCMFA_write_IRV
        (KaTINR_b_ClchTorqFAInit_DCT[2]);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  Constant: '<S484>/Constant Value20'
     *  Constant: '<S498>/Calib'
     *  Selector: '<S484>/Selector16'
     *  SignalConversion generated from: '<S162>/LeadClch1_TCM_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_LeadClutch1_TCM_write_IRV
        (KaTINR_M_ClchTorqInitVal_DCT[2]);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  Constant: '<S484>/Constant Value16'
     *  Constant: '<S501>/Calib'
     *  Selector: '<S484>/Selector23'
     *  SignalConversion generated from: '<S162>/LeadClch3_TCMFA_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_LeadClutch3_TCMFA_write_IRV
        (KaTINR_b_ClchTorqFAInit_DCT[3]);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  Constant: '<S484>/Constant Value21'
     *  Constant: '<S498>/Calib'
     *  Selector: '<S484>/Selector17'
     *  SignalConversion generated from: '<S162>/LeadClch3_TCM_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_M_LeadClutch3_TCM_write_IRV
        (KaTINR_M_ClchTorqInitVal_DCT[3]);

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */

    /* Merge: '<Root>/Merge_99_Irv' incorporates:
     *  SignalConversion generated from: '<S162>/M_DrvLnTrqRq_Axle_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_DrvLnTrqRq_Axle_write_IRV
        (TINR_ac_B.OutportBufferForM_DrvLnTrqRq_Axle_Init);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S162>/MtrBDynFctr_Init_write'
     *  SignalConversion generated from: '<S484>/MtrBDynFctr_Init'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_e_MtrBDynFctr_write_IRV
        (TINR_ac_B.OutportBufferForMtrBDynFctr_Init);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S162>/TCM_TCCPreventionID_Init_write'
     *  SignalConversion generated from: '<S484>/TCM_TCCPreventionID_Init'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_e_TCMTCCPreventionID_write_IRV
        (TINR_ac_B.OutportBufferForTCM_TCCPreventionID_Init);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S162>/b_DrvLnMinTrqMd_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_DrvLnMinTrqMd_write_IRV
        (TINR_ac_B.OutportBufferForb_DrvLnMinTrqMd_Init);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S162>/b_DrvLnTrqRq_Axle_FA_Init_write'
     * */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_b_DrvLnTrqRq_AxleFA_write_IRV
        (TINR_ac_B.OutportBufferForb_DrvLnTrqRq_Axle_FA_Ini);

    /* S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
     *  SubSystem: '<S162>/TINI_Init_Inputs'
     */
    /* Merge: '<Root>/Merge_110' incorporates:
     *  Constant: '<S484>/Constant Value'
     *  Constant: '<S581>/Calib'
     *  Product: '<S484>/Product'
     *  SignalConversion generated from: '<S162>/ms_TCM_TimeToSpeedChange_Init_write'
     */
    Rte_IrvWrite_TINR_PwrOn_VeTINR_t_TCM_TimeToSpeedChange_write_IRV(1000.0F *
        KeTINR_t_TCM_TimeToSpeedChange);

    /* End of Outputs for S-Function (fcgen): '<S162>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TINR_CODE) TINR_ac_Init(void)
{
    {
        sint32 i;
        float32 tmp[9];
        float32 tmp_0[6];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/TINR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
         *  SubSystem: '<S162>/TINI_Init_Inputs'
         */
        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TargetGear_Init' incorporates:
         *  Constant: '<S569>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TargetGear_Init =
            KeTINR_e_TargetGearInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TargetGearFA_Init' incorporates:
         *  Constant: '<S545>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TargetGearFA_Init =
            KeTINR_b_TargetGearInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_ActualGear_Init' incorporates:
         *  Constant: '<S551>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_ActualGear_Init =
            KeTINR_e_ActualGearInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_ActualGearFA_Init' incorporates:
         *  Constant: '<S511>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_ActualGearFA_Init =
            KeTINR_b_ActualGearInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCMTrqCntrlMdFst_Init' incorporates:
         *  Constant: '<S570>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCMTrqCntrlMdFst_ =
            KeTINR_e_TrqCntrlMdFstInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCMTrqCntrlMdFstFA_Init' incorporates:
         *  Constant: '<S547>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCMTrqCntrlMdFstF =
            KeTINR_b_TrqCntrlMdFstInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_ILEStat_Init' incorporates:
         *  Constant: '<S555>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_ILEStat_Init = KeTINR_e_ILEStatInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCMTrqCntrlMdSlw_Init' incorporates:
         *  Constant: '<S571>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCMTrqCntrlMdSlw_ =
            KeTINR_e_TrqCntrlMdSlwInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCMTrqCntrlMdSlwFA_Init' incorporates:
         *  Constant: '<S548>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCMTrqCntrlMdSlwF =
            KeTINR_b_TrqCntrlMdSlwInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_HASStatusK0_Init' incorporates:
         *  Constant: '<S554>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_HASStatusK0_Init =
            KeTINR_e_HASStatusK0Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_r_TransTrqRatio_Init' incorporates:
         *  Constant: '<S580>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_r_TransTrqRatio_Ini =
            KeTINR_r_TransTrqRatioInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TransTrqRatioFA_Init' incorporates:
         *  Constant: '<S546>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TransTrqRatioFA_I =
            KeTINR_b_TransTrqRatioInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_Inhibit_Mode1_Init' incorporates:
         *  Constant: '<S520>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_Inhibit_Mode1_Ini =
            KeTINR_b_Inhibit_Mode1Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_Inhibit_Mode2_Init' incorporates:
         *  Constant: '<S521>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_Inhibit_Mode2_Ini =
            KeTINR_b_Inhibit_Mode2Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear1_Init' incorporates:
         *  Constant: '<S516>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear1_Ini =
            KeTINR_b_Inhibit_Gear1Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear2_Init' incorporates:
         *  Constant: '<S517>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear2_Ini =
            KeTINR_b_Inhibit_Gear2Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear3_Init' incorporates:
         *  Constant: '<S518>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear3_Ini =
            KeTINR_b_Inhibit_Gear3Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_Inhibit_Gear4_Init' incorporates:
         *  Constant: '<S519>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_Inhibit_Gear4_Ini =
            KeTINR_b_Inhibit_Gear4Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_Inhibit_Neutral_Init' incorporates:
         *  Constant: '<S522>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_Inhibit_Neutral_I =
            KeTINR_b_Inhibit_NeutralInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_KGB_Init' incorporates:
         *  Constant: '<S524>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_KGB_Init = KeTINR_b_KGBInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_KOB_Init' incorporates:
         *  Constant: '<S525>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_KOB_Init = KeTINR_b_KOBInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_KSB_Init' incorporates:
         *  Constant: '<S526>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_KSB_Init = KeTINR_b_KSBInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_ILE_STO_Stat_Init' incorporates:
         *  Constant: '<S515>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_ILE_STO_Stat_Init =
            KeTINR_b_ILE_STO_StatInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_P2SpdCntrlReq_Init' incorporates:
         *  Constant: '<S490>/Constant'
         */
        TINR_ac_B.OutportBufferForComm_e_P2SpdCntrlReq_Ini =
            TINR_ac_ConstB.Constant_md;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_d_TCMFailures_Init' incorporates:
         *  Constant: '<S549>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_d_TCMFailures_Init =
            KeTINR_d_TCMFailures_Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_i_TCM_MinGearAllwd_Init' incorporates:
         *  Constant: '<S574>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_i_TCM_MinGearAllwd_ =
            KeTINR_i_TCM_MinGearAllwdInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCM_MinGearAllwdFA_Init' incorporates:
         *  Constant: '<S543>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCM_MinGearAllwdF =
            KeTINR_b_TCM_MinGearAllwdInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_i_TCM_MaxGearAllwd_Init' incorporates:
         *  Constant: '<S573>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_i_TCM_MaxGearAllwd_ =
            KeTINR_i_TCM_MaxGearAllwdInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCM_MaxGearAllwdFA_Init' incorporates:
         *  Constant: '<S542>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCM_MaxGearAllwdF =
            KeTINR_b_TCM_MaxGearAllwdInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_NiMinForLockUpFA_Init' incorporates:
         *  Constant: '<S528>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_NiMinForLockUpFA_ =
            KeTINR_b_NiMinForLockUpInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_NiMinToOpenFA_Init' incorporates:
         *  Constant: '<S530>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_NiMinToOpenFA_Ini =
            KeTINR_b_NiMinToOpenInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_NiMinForLockUpCoastFA_Init' incorporates:
         *  Constant: '<S527>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_NiMinForLockUpCoa =
            KeTINR_b_NiMinForLockUpInitCoastFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_NiMinToOpenCoastFA_Init' incorporates:
         *  Constant: '<S529>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_NiMinToOpenCoastF =
            KeTINR_b_NiMinToOpenCoastInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_i_TCM_DriveProgram_Init' incorporates:
         *  Constant: '<S572>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_i_TCM_DriveProgram_ =
            KeTINR_i_TCM_DriveProgramInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_r_TCM_HillMode_Init' incorporates:
         *  Constant: '<S579>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_r_TCM_HillMode_Init =
            KeTINR_r_TCM_HillModeInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_Cnt_TCM_DriverType_Init' incorporates:
         *  Constant: '<S508>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_Cnt_TCM_DriverType_ =
            KeTINR_Cnt_TCM_DriverTypeInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCMHASActMode' incorporates:
         *  Constant: '<S560>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCMHASActMode =
            KeTINR_e_TCMHASActModeInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCMHASActModeFA' incorporates:
         *  Constant: '<S532>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCMHASActModeFA =
            KeTINR_b_TCMHASActModeInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCMStrtStpOvrrd_Init' incorporates:
         *  Constant: '<S562>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCMStrtStpOvrrd_I =
            KeTINR_e_TCMStrtStpOvrrd_Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_GearShftType_Init' incorporates:
         *  Constant: '<S497>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_GearShftType_Init =
            HeTINR_e_GearShftTypeInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_GearShftTypeFA_Init' incorporates:
         *  Constant: '<S495>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_GearShftTypeFA_In =
            HeTINR_b_GearShftTypeInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCMTransReqFuelON_Init' incorporates:
         *  Constant: '<S536>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCMTransReqFuelON =
            KeTINR_b_TCMTransReqFuelONInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_PwrFlowStatus_Init' incorporates:
         *  Constant: '<S531>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_PwrFlowStatus_Ini =
            KeTINR_b_PwrFlowStatusInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCMSpdCtrlCapable_Init' incorporates:
         *  Constant: '<S535>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCMSpdCtrlCapable =
            KeTINR_b_TCMSpdCtrlCapableInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_K1Status_Init' incorporates:
         *  Constant: '<S556>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_K1Status_Init = KeTINR_e_K1StatusInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCMModeReq_Init' incorporates:
         *  Constant: '<S561>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCMModeReq_Init =
            KeTINR_e_TCMModeReqInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_TCMLimphomeFaultsFA' incorporates:
         *  Constant: '<S533>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_TCMLimphomeFaults =
            KeTINR_b_TCMLimphomeFaultsInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_ComFailTCM_C1CAN' incorporates:
         *  Constant: '<S552>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_ComFailTCM_C1CAN =
            KeTINR_e_ComFailInit_C1CAN;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_ComFailTCM_ePtCAN' incorporates:
         *  Constant: '<S553>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_ComFailTCM_ePtCAN =
            KeTINR_e_ComFailInit_ePTCAN;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_n_DisengageILE' incorporates:
         *  Constant: '<S575>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_n_DisengageILE =
            KeTINR_n_DisengageILE_Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_GearShftType2_Init' incorporates:
         *  Constant: '<S496>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_GearShftType2_Ini =
            HeTINR_e_GearShftType2Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_b_GearShftType2FA_Init' incorporates:
         *  Constant: '<S494>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_b_GearShftType2FA_I =
            HeTINR_b_GearShftType2InitFA;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_Synchro2Sts_Init' incorporates:
         *  Constant: '<S559>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_Synchro2Sts_Init =
            KeTINR_e_Synchro2StsInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCM_ClutchStartGear_Init' incorporates:
         *  Constant: '<S566>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCM_ClutchStartGe =
            KeTINR_e_TCM_ClutchStartGearInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveEVGear' incorporates:
         *  Constant: '<S563>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCM_ActiveEVGear =
            KeTINR_e_TCM_ActiveEVGearInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveXNGear' incorporates:
         *  Constant: '<S565>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCM_ActiveXNGear =
            KeTINR_e_TCM_ActiveXNGearInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCM_ActiveHybridGear' incorporates:
         *  Constant: '<S564>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCM_ActiveHybridG =
            KeTINR_e_TCM_ActiveHybridGearInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCM_PassiveHybridGear' incorporates:
         *  Constant: '<S567>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_TCM_PassiveHybrid =
            KeTINR_e_TCM_PassiveHybridGearInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TransAdpSts' incorporates:
         *  Constant: '<S487>/Constant'
         */
        TINR_ac_B.OutportBufferForComm_e_TransAdpSts = TINR_ac_ConstB.Constant_d;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCMNeutPhsZeroTrqReq_CANC_Init' incorporates:
         *  Constant: '<S488>/Constant'
         */
        TINR_ac_B.OutportBufferForComm_e_TCMNeutPhsZeroTrq =
            TINR_ac_ConstB.Constant_n;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_TCMNeutPhsZeroTrqReq_ePTCAN_Init' incorporates:
         *  Constant: '<S489>/Constant'
         */
        TINR_ac_B.OutportBufferForComm_e_TCMNeutPhsZeroT_m =
            TINR_ac_ConstB.Constant_o;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_SynchroGearInit' incorporates:
         *  Constant: '<S491>/Constant'
         */
        TINR_ac_B.OutportBufferForComm_e_SynchroGearInit =
            TINR_ac_ConstB.Constant;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_Synchro2GearInit' incorporates:
         *  Constant: '<S486>/Constant'
         */
        TINR_ac_B.OutportBufferForComm_e_Synchro2GearInit =
            TINR_ac_ConstB.Constant_i;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_Pct_TransStrssFctrInit' incorporates:
         *  Constant: '<S510>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_Pct_TransStrssFctrI =
            KeTINR_Pct_TransStrssFctrInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_e_Synchro1Sts_Init' incorporates:
         *  Constant: '<S558>/Calib'
         */
        TINR_ac_B.OutportBufferForComm_e_Synchro1Sts_Init =
            KeTINR_e_Synchro1StsInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/TCM_TCCPreventionID_Init' incorporates:
         *  Constant: '<S568>/Calib'
         */
        TINR_ac_B.OutportBufferForTCM_TCCPreventionID_Init =
            KeTINR_e_TCM_TCCPreventionIDInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/MtrBDynFctr_Init' incorporates:
         *  Constant: '<S557>/Calib'
         */
        TINR_ac_B.OutportBufferForMtrBDynFctr_Init = KeTINR_e_MtrBDynFctrDflt;

        /* SystemInitialize for SignalConversion generated from: '<S484>/M_DrvLnTrqRq_Axle_Init' incorporates:
         *  Constant: '<S509>/Calib'
         */
        TINR_ac_B.OutportBufferForM_DrvLnTrqRq_Axle_Init =
            KeTINR_M_DrvLnTrqRq_Axle_Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/b_DrvLnMinTrqMd_Init' incorporates:
         *  Constant: '<S512>/Calib'
         */
        TINR_ac_B.OutportBufferForb_DrvLnMinTrqMd_Init =
            KeTINR_b_DrvLnMinTrqMd_Init;

        /* SystemInitialize for SignalConversion generated from: '<S484>/r_MechDrivelineRatio_Init' incorporates:
         *  Constant: '<S577>/Calib'
         */
        TINR_ac_B.OutportBufferForr_MechDrivelineRatio_Ini =
            KeTINR_r_MechDrivelineRatioInit;

        /* SystemInitialize for SignalConversion generated from: '<S484>/r_TCC_TR_Init' incorporates:
         *  Constant: '<S578>/Calib'
         */
        TINR_ac_B.OutportBufferForr_TCC_TR_Init = KeTINR_r_TCC_TRInit;

        /* SystemInitialize for S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
         *  SubSystem: '<S162>/TINO_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_r_TCMTransTrqRatio_Init' incorporates:
         *  Constant: '<S606>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_r_TCMTransTrqRati =
            KeTINR_r_TransTrqRatioInit;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_r_TCM_HillMode_Init' incorporates:
         *  Constant: '<S605>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_r_TCM_HillMode_In =
            KeTINR_r_TCM_HillModeInit;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_b_PwrFlowStatus_Init' incorporates:
         *  Constant: '<S597>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_b_PwrFlowStatus_I =
            KeTINR_b_PwrFlowStatusInit;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_d_TCMLimphomeFaults_Init' incorporates:
         *  Constant: '<S600>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_d_TCMLimphomeFaul =
            KeTINR_d_TCMLimphomeFaultsInit;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_b_TCMLimphomeFaultsFA_Init' incorporates:
         *  Constant: '<S598>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_b_TCMLimphomeFaul =
            KeTINR_b_TCMLimphomeFaultsInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_i_MinGearAllwd_Init' incorporates:
         *  Constant: '<S604>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_i_MinGearAllwd_In =
            KeTINR_i_TCM_MinGearAllwdInit;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_i_MaxGearAllwd_Init' incorporates:
         *  Constant: '<S603>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_i_MaxGearAllwd_In =
            KeTINR_i_TCM_MaxGearAllwdInit;

        /* End of SystemInitialize for S-Function (fcgen): '<S162>/FcnCallGen' */

        /* SystemInitialize for S-Function (fcgen): '<S162>/FcnCallGen' incorporates:
         *  SubSystem: '<S162>/TINI_Init_Inputs'
         */
        for (i = 0; i < 9; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_n_NiMinForLockUp_Init' incorporates:
             *  Constant: '<S505>/Calib'
             */
            TINR_ac_B.OutportBufferForComm_n_NiMinForLockUp_In[i] =
                KaTINR_n_NiMinForLockUpInit[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_n_NiMinToOpen_Init' incorporates:
             *  Constant: '<S507>/Calib'
             */
            TINR_ac_B.OutportBufferForComm_n_NiMinToOpen_Init[i] =
                KaTINR_n_NiMinToOpenInit[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_n_NiMinForLockUpCoast_Init' incorporates:
             *  Constant: '<S504>/Calib'
             */
            TINR_ac_B.OutportBufferForComm_n_NiMinForLockUpCoa[i] =
                KaTINR_n_NiMinForLockUpCoastInit[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S484>/Comm_n_NiMinToOpenCoast_Init' incorporates:
             *  Constant: '<S506>/Calib'
             */
            TINR_ac_B.OutportBufferForComm_n_NiMinToOpenCoast_[i] =
                KaTINR_n_NiMinToOpenCoastInit[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S485>/LaTINR_n_NiMinForLockUp_Init' incorporates:
             *  Constant: '<S593>/Calib'
             */
            TINR_ac_B.OutportBufferForLaTINR_n_NiMinForLockUp_[i] =
                KaTINR_n_NiMinForLockUpInit[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S485>/LaTINR_n_NiMinToOpen_Init' incorporates:
             *  Constant: '<S595>/Calib'
             */
            TINR_ac_B.OutportBufferForLaTINR_n_NiMinToOpen_Ini[i] =
                KaTINR_n_NiMinToOpenInit[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S485>/LaTINR_n_NiMinToOpenCoast_Init' incorporates:
             *  Constant: '<S594>/Calib'
             */
            TINR_ac_B.OutportBufferForLaTINR_n_NiMinToOpenCoas[i] =
                KaTINR_n_NiMinToOpenCoastInit[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S485>/LaTINR_n_NiMinForLockUpCoast_Init' incorporates:
             *  Constant: '<S592>/Calib'
             */
            TINR_ac_B.OutportBufferForLaTINR_n_NiMinForLockUpC[i] =
                KaTINR_n_NiMinForLockUpCoastInit[(i)];
        }

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_e_TransAdpSts_Init' incorporates:
         *  Constant: '<S586>/Constant'
         */
        TINR_ac_B.OutportBufferForLeTINR_e_TransAdpSts_Ini =
            TINR_ac_ConstB.Constant_e;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_d_TCMFailures_Init' incorporates:
         *  Constant: '<S599>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_d_TCMFailures_Ini =
            KeTINR_d_TCMFailures_Init;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_e_TCMTCCPreventionID_Init' incorporates:
         *  Constant: '<S602>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_e_TCMTCCPreventio =
            KeTINR_e_TCM_TCCPreventionIDInit;
        for (i = 0; i < 6; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S485>/LaTINR_M_ClchTrq_Init' incorporates:
             *  Constant: '<S589>/Calib'
             */
            TINR_ac_B.OutportBufferForLaTINR_M_ClchTrq_Init[i] =
                KaTINR_M_ClchTrqInit[(i)];
        }

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_e_MtrBDynFctr_Init' incorporates:
         *  Constant: '<S601>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_e_MtrBDynFctr_Ini =
            KeTINR_e_MtrBDynFctrDflt;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_t_TCM_TimeToSpeedChange_Init' incorporates:
         *  Constant: '<S607>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_t_TCM_TimeToSpeed =
            KeTINR_t_TCM_TimeToSpeedChange;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_e_TransLimpRequest_Init' incorporates:
         *  Constant: '<S587>/Constant'
         */
        TINR_ac_B.OutportBufferForLeTINR_e_TransLimpReques =
            TINR_ac_ConstB.Constant_m;

        /* SystemInitialize for SignalConversion generated from: '<S485>/LeTINR_b_DrvLnMinTrqMd_Init' incorporates:
         *  Constant: '<S596>/Calib'
         */
        TINR_ac_B.OutportBufferForLeTINR_b_DrvLnMinTrqMd_I =
            KeTINR_b_DrvLnMinTrqMd_Init;

        /* End of SystemInitialize for S-Function (fcgen): '<S162>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst' incorporates:
         *  Merge: '<Root>/Merge_74'
         */
        (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdFst_Value(CeTINR_e_None);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCMTrqCntrlMdSlw' incorporates:
         *  Merge: '<Root>/Merge_64'
         */
        (void)Rte_Write_VeTINR_e_TCMTrqCntrlMdSlw_Value(CeTINR_e_None);

        /* SystemInitialize for Merge: '<Root>/Merge_241' */
        for (i = 0; i < 9; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaTINR_n_NiMinForLockUp' incorporates:
         *  Merge: '<Root>/Merge_241'
         */
        (void)Rte_Write_VaTINR_n_NiMinForLockUp_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_242' */
        for (i = 0; i < 9; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaTINR_n_NiMinToOpen' incorporates:
         *  Merge: '<Root>/Merge_242'
         */
        (void)Rte_Write_VaTINR_n_NiMinToOpen_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_243' */
        for (i = 0; i < 9; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaTINR_n_NiMinToOpenCoast' incorporates:
         *  Merge: '<Root>/Merge_243'
         */
        (void)Rte_Write_VaTINR_n_NiMinToOpenCoast_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_244' */
        for (i = 0; i < 9; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaTINR_n_NiMinForLockUpCoast' incorporates:
         *  Merge: '<Root>/Merge_244'
         */
        (void)Rte_Write_VaTINR_n_NiMinForLockUpCoast_Value(tmp);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCMActMode' incorporates:
         *  Merge: '<Root>/Merge_1'
         */
        (void)Rte_Write_VeTINR_e_TCMActMode_Value(CeTRNR_e_SerEngOff);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCMStrtStpOvrrd' incorporates:
         *  Merge: '<Root>/Merge_70'
         */
        (void)Rte_Write_VeTINR_e_TCMStrtStpOvrrd_Value(CeSTRR_e_NoOvrrd);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCMModeReq' incorporates:
         *  Merge: '<Root>/Merge_84'
         */
        (void)Rte_Write_VeTINR_e_TCMModeReq_Value(CeOHSR_e_RngSel_N);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_ComFailTCM_C1CAN' incorporates:
         *  Merge: '<Root>/Merge_81'
         */
        (void)Rte_Write_VeTINR_e_ComFailTCM_C1CAN_Value(CeTINR_e_NoFaultTCM_C1);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_ComFailTCM_ePtCAN' incorporates:
         *  Merge: '<Root>/Merge_85'
         */
        (void)Rte_Write_VeTINR_e_ComFailTCM_ePtCAN_Value(CeTINR_e_NoFaultTCM_ePT);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_ShftTypeTLF' incorporates:
         *  Merge: '<Root>/Merge_94'
         */
        (void)Rte_Write_VeTINR_e_ShftTypeTLF_Value(CeTRNR_e_SteadyStateDCT);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TransAdpSts' incorporates:
         *  Merge: '<Root>/Merge_245'
         */
        (void)Rte_Write_VeTINR_e_TransAdpSts_Value(CeTINR_e_No_Routine_Running);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_ILEStat' incorporates:
         *  Merge: '<Root>/Merge_13'
         */
        (void)Rte_Write_VeTINR_e_ILEStat_Value(CeOHSR_e_NeutralState);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_P2SpdCntrlReq' incorporates:
         *  Merge: '<Root>/Merge_98'
         */
        (void)Rte_Write_VeTINR_e_P2SpdCntrlReq_Value(CeTINR_e_Inactive);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_K1Status' incorporates:
         *  Merge: '<Root>/Merge_82'
         */
        (void)Rte_Write_VeTINR_e_K1Status_Value(CeHCCR_e_ClInvalid);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_HASStatusK0' incorporates:
         *  Merge: '<Root>/Merge_49'
         */
        (void)Rte_Write_VeTINR_e_HASStatusK0_Value(CeHCCR_e_ClInvalid);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_Synchro2Sts' incorporates:
         *  Merge: '<Root>/Merge_96'
         */
        (void)Rte_Write_VeTINR_e_Synchro2Sts_Value(CeHCCR_e_ClInvalid);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_ActualGear' incorporates:
         *  Merge: '<Root>/Merge_55'
         */
        (void)Rte_Write_VeTINR_e_ActualGear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_ShftType' incorporates:
         *  Merge: '<Root>/Merge_67'
         */
        (void)Rte_Write_VeTINR_e_ShftType_Value(CeTRNR_e_SteadyState);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCM_ActiveEVGear' incorporates:
         *  Merge: '<Root>/Merge_103'
         */
        (void)Rte_Write_VeTINR_e_TCM_ActiveEVGear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCM_ActiveXNGear' incorporates:
         *  Merge: '<Root>/Merge_105'
         */
        (void)Rte_Write_VeTINR_e_TCM_ActiveXNGear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCM_ActiveHybridGear' incorporates:
         *  Merge: '<Root>/Merge_107'
         */
        (void)Rte_Write_VeTINR_e_TCM_ActiveHybridGear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCM_PassiveHybridGear' incorporates:
         *  Merge: '<Root>/Merge_109'
         */
        (void)Rte_Write_VeTINR_e_TCM_PassiveHybridGear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TargetGear' incorporates:
         *  Merge: '<Root>/Merge_45'
         */
        (void)Rte_Write_VeTINR_e_TargetGear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCM_ClutchStartGear' incorporates:
         *  Merge: '<Root>/Merge_100'
         */
        (void)Rte_Write_VeTINR_e_TCM_ClutchStartGear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TransLimpRequest' incorporates:
         *  Merge: '<Root>/Merge_257'
         */
        (void)Rte_Write_VeTINR_e_TransLimpRequest_Value(CeTINR_e_LimpInactive);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_Synchro1Gear' incorporates:
         *  Merge: '<Root>/Merge_117'
         */
        (void)Rte_Write_VeTINR_e_Synchro1Gear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_Synchro2Gear' incorporates:
         *  Merge: '<Root>/Merge_4'
         */
        (void)Rte_Write_VeTINR_e_Synchro2Gear_Value(CeTRNR_e_Neutral);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_Synchro1Sts' incorporates:
         *  Merge: '<Root>/Merge_8'
         */
        (void)Rte_Write_VeTINR_e_Synchro1Sts_Value(CeHCCR_e_ClInvalid);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_TCMTCCPreventionID' incorporates:
         *  Merge: '<Root>/Merge_247'
         */
        (void)Rte_Write_VeTINR_e_TCMTCCPreventionID_Value
            (CeTINR_e_TCCPreventIdInit);

        /* SystemInitialize for Merge: '<Root>/Merge_248' */
        for (i = 0; i < 6; i++)
        {
            tmp_0[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaTINR_M_ClchTrq' incorporates:
         *  Merge: '<Root>/Merge_248'
         */
        (void)Rte_Write_VaTINR_M_ClchTrq_Value(tmp_0);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_Clch1Sts' incorporates:
         *  Merge: '<Root>/Merge_252'
         */
        (void)Rte_Write_VeTINR_e_Clch1Sts_Value(CeTMMR_e_ClchReleased);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_Clch3Sts' incorporates:
         *  Merge: '<Root>/Merge_253'
         */
        (void)Rte_Write_VeTINR_e_Clch3Sts_Value(CeTMMR_e_ClchReleased);

        /* SystemInitialize for Outport: '<Root>/VeTINR_e_MtrBDynFctr' incorporates:
         *  Merge: '<Root>/Merge_254'
         */
        (void)Rte_Write_VeTINR_e_MtrBDynFctr_Value(CeTMMR_e_MtrBDynFctr_Inactive);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
