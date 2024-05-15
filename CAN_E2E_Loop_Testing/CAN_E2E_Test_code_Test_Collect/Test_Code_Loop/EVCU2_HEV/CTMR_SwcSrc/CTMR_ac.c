/*
 * File: CTMR_ac.c
 *
 * Code generated for Simulink model 'CTMR_ac'.
 *
 * Model version                  : 9.242
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:20:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CTMR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CTMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KaCTMR_T_MtrAConTmpsLim_NF[4] =
{
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KaCTMR_T_MtrAConTmps_NF[4] =
{
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KaCTMR_T_MtrBConTmpsLim_NF[2] =
{
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KaCTMR_T_MtrBConTmps_NF[2] =
{
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KaCTMR_T_MtrCConTmpsLim_NF[2] =
{
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KaCTMR_T_MtrCConTmps_NF[2] =
{
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_I_ACCElecCurr_D = 0.0F;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_I_APM_HV_Current_D = 0.0F;/* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_I_HVC_Htr2_HV_CrntAct_D =
    0.0F;                              /* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_I_HVC_Htr_HV_CrntAct_D =
    0.0F;                              /* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_I_MtrACurrent_D = 0.0F;/* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_I_MtrBCurrent_D = 0.0F;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_I_MtrCCurrent_D = 0.0F;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_FedmBusAdjCoef = 0.0F;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_FedmExhRadThmr = 0.00014F;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_GenBusAdjCoef = 0.002F;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_GenExhTherm = 0.00014F;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_GpimAcBusAdjCoef = 0.002F;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_GpimAcExhRadTherm =
    0.00014F;                          /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_GpimDcBusAdjCoef =
    0.0002F;                           /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_GpimDcExhRadTherm =
    0.00014F;                          /* Referenced by: '<S168>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_HvbpFedmBusTempCoeff =
    0.0F;                              /* Referenced by:
                                        * '<S28>/Calib'
                                        * '<S53>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_HvbpRedmBusTempCoeff =
    0.0F;                              /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_PdcExhRadThmr = 0.00014F;/* Referenced by: '<S393>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_PdcIntTmpThermRespCoef =
    0.0F;                              /* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_PdcSurTempRespCoef =
    0.014F;                            /* Referenced by: '<S395>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_PdcSurThmrRespCoef =
    0.00014F;                          /* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_ReevBusAdjCoef = 0.002F;/* Referenced by: '<S237>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_ReevBusTempCoeff = 0.0F;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_K_ReevExhThmr = 0.00014F;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_M_GenTorque_D = 0.0F;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_Pct_AADRetreatPosition =
    0.0F;                              /* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_EstAmbAirTemp_D = 0.0F;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_ExhTemp_D = 0.0F;/* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_FEDMExhSurfTempInit =
    0.0F;                              /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_FedmConClmpInitTempMtrA =
    0.0F;                              /* Referenced by: '<S90>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_FedmConCmpTempLim = 0.0F;/* Referenced by:
                                                                      * '<S301>/Calib'
                                                                      * '<S102>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_FedmMtraLim1 = 0.0F;/* Referenced by: '<S103>/Calib' */

#endif

#if (!Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_FedmMtraLim2 = 0.0F;/* Referenced by:
                                                                      * '<S104>/Calib'
                                                                      * '<S263>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_FedmMtraTemp1 = 0.0F;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_FedmMtraTemp2 = 0.0F;/* Referenced by: '<S106>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GenBusbarTempInit = 0.0F;/* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GenConCmpTempLim = 0.0F;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GenExhSurfTempInit = 0.0F;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GenWindTemp_D = 0.0F;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GpimAcBusTemp_D = 0.0F;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GpimAcConCmpTempLim =
    0.0F;                              /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GpimDcBusTemp_D = 0.0F;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_GpimDcConCmpTempLim =
    0.0F;                              /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HVBPBusTemp_D = 0.0F;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HVBPBusbarTempPegasusInit
    = 0.0F;                            /* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HVBPFEDMBusbarTempInitBev
    = 0.0F;                            /* Referenced by: '<S29>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HVBPREDMBusbarTempInit =
    0.0F;                              /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HVBPReevConCmpTempLim =
    0.0F;                              /* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HVC_Htr4ClntOut_Temp_D =
    0.0F;                              /* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HvbpBduBusTemp_D = 0.0F;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HvbpFedmBusAdjCoef =
    0.002F;                            /* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_HvbpFedmConClmpInitTempMtrA = 0.0F;/* Referenced by: '<S97>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HvbpFedmConCmpTempLim =
    0.0F;                              /* Referenced by:
                                        * '<S302>/Calib'
                                        * '<S107>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HvbpFedmExhRadThmr =
    0.00014F;                          /* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_HvbpRedmConClmpInitTempMtrB = 0.0F;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_HvbpRedmConCmpTempLim =
    0.0F;                              /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrAExhSurfaceTemp_NF =
    0.0F;                              /* Referenced by: '<S485>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrAUHoodTmp_D = 0.0F;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrBBusBarTemp_D = 0.0F;/* Referenced by: '<S437>/Calib' */

#endif

#if (!Rte_SysCon_Variant_CTMR_3 && Rte_SysCon_Variant_CTMR_1) || (!Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrBDefValTemp1 = 0.0F;/* Referenced by:
                                                                      * '<S291>/Calib'
                                                                      * '<S381>/Calib'
                                                                      */

#endif

#if (!Rte_SysCon_Variant_CTMR_3 && Rte_SysCon_Variant_CTMR_1) || (!Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrBDefValTemp1Lim = 0.0F;/* Referenced by:
                                                                      * '<S292>/Calib'
                                                                      * '<S382>/Calib'
                                                                      */

#endif

#if (!Rte_SysCon_Variant_CTMR_3 && Rte_SysCon_Variant_CTMR_1) || (!Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrBDefValTemp2 = 0.0F;/* Referenced by:
                                                                      * '<S293>/Calib'
                                                                      * '<S383>/Calib'
                                                                      */

#endif

#if (!Rte_SysCon_Variant_CTMR_3 && Rte_SysCon_Variant_CTMR_1) || (!Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrBDefValTemp2Lim = 0.0F;/* Referenced by:
                                                                      * '<S294>/Calib'
                                                                      * '<S384>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrBUHoodTmp_D = 0.0F;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrCBusBarTemp_D = 0.0F;/* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrCExhSurfaceTemp_NF =
    0.0F;                              /* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtrCUHoodTmp_D = 0.0F;/* Referenced by: '<S440>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtraDefValTemp1 = 0.0F;/* Referenced by: '<S264>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtraDefValTemp1Lim = 0.0F;/* Referenced by: '<S265>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtraDefValTemp2 = 0.0F;/* Referenced by: '<S266>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtraDefValTemp2Lim = 0.0F;/* Referenced by: '<S267>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtraDefValTemp3 = 0.0F;/* Referenced by: '<S268>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtraDefValTemp3Lim = 0.0F;/* Referenced by: '<S269>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_MtraDefValTemp4 = 0.0F;/* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PDCSurfTempLim = 0.0F;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PDCSurfTempLim_NF = 0.0F;/* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_2

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PDCSurfTemp_NF = 0.0F;/* Referenced by: '<S488>/Calib' */

#endif

#if !Rte_SysCon_Variant_CTMR_5 && Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PDC_Default = 0.0F;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcExhRadThmrInit = 30.0F;/* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcExhRadThmrMax = 200.0F;/* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcExhRadThmrMin = -20.0F;/* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcExhSurfTempInit = 0.0F;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcSurfTempInit = 30.0F;/* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcSurfTempMax = 200.0F;/* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcSurfTempMin = -20.0F;/* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcSurfTempUhoodInit =
    30.0F;                             /* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcSurfTempUhoodMax =
    200.0F;                            /* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcSurfTempUhoodMin =
    -20.0F;                            /* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcTmpThermRespCoefInit =
    30.0F;                             /* Referenced by: '<S406>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcTmpThermRespMax =
    200.0F;                            /* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_PdcTmpThermRespMin =
    -20.0F;                            /* Referenced by: '<S408>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_REEVBusbarTempInit = 0.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RedmConClmpInitTempMtrB =
    0.0F;                              /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RedmConCmpTempLim = 0.0F;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepFedmExhAdjInit = 0.0F;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepHvbpFedmExhAdjInit =
    0.0F;                              /* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepHvbpReevConClmpInit =
    0.0F;                              /* Referenced by:
                                        * '<S221>/Calib'
                                        * '<S239>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepHvbpReevConCmpShPrevInit = 0.0F;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepHvbpReevExhAdjInit =
    0.0F;                              /* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbFedmConClmpInit =
    0.0F;                              /* Referenced by:
                                        * '<S309>/Calib'
                                        * '<S327>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbFedmConCmpShPrevInit =
    0.0F;                              /* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbFedmConHldrSh1Init =
    0.0F;                              /* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbFedmConHldrSh2Init =
    0.0F;                              /* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGenConClmpInit = 0.0F;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGenConCmpShPrevInit =
    0.0F;                              /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGenConHldrSh1Init =
    0.0F;                              /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGenConHldrSh2Init =
    0.0F;                              /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGenExhAdjInit = 0.0F;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimAcConClmpInit =
    0.0F;                              /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepbGpimAcConClmpShPrevInit = 0.0F;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimAcConHldrSh1Init =
    0.0F;                              /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimAcConHldrSh2Init =
    0.0F;                              /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimAcExhAdjInit =
    0.0F;                              /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimDcConClmpInit =
    0.0F;                              /* Referenced by:
                                        * '<S151>/Calib'
                                        * '<S170>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepbGpimDcConClmpShPrevInit = 0.0F;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimDcConHldrSh1Init =
    0.0F;                              /* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimDcConHldrSh2Init =
    0.0F;                              /* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbGpimDcExhAdjInit =
    0.0F;                              /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_T_RepbHvbpFedmConClmpInit =
    0.0F;                              /* Referenced by:
                                        * '<S346>/Calib'
                                        * '<S364>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepbHvbpFedmConCmpShPrevInit = 0.0F;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepbHvbpFedmConHldrSh1Init = 0.0F;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepbHvbpFedmConHldrSh2Init = 0.0F;/* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepbHvbpReevConHldrSh1Init = 0.0F;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT)
    KeCTMR_T_RepbHvbpReevConHldrSh2Init = 0.0F;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_ACCElecCurr_SD = 0;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_APM_HV_Current_SD = 0;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_AadPos_SD = 0;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_EngineSpeed_SD = 0;/* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_EstAmbAirTemp_SD = 0;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_ExhTemp_SD = 0;/* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_FEDMHarnessShield = 0;/* Referenced by:
                                                                      * '<S303>/Calib'
                                                                      * '<S304>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_GPIMBattHarnessShield = 0;/* Referenced by:
                                                                      * '<S112>/Calib'
                                                                      * '<S117>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_GenTorque_SD = 0;/* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_GenWindTemp_SD = 0;/* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_GpimAcBusTemp_SD = 0;/* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_GpimDcBusTemp_SD = 0;/* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_HVBPBusTemp_SD = 0;/* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_HVC_Htr4ClntOut_Temp_SD =
    0;                                 /* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_HVC_Htr_2_HV_CrntAct_SD =
    0;                                 /* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_HVC_Htr_HV_CrntAct_SD = 0;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_HvbpBduBusTemp_SD = 0;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrACurrent_SD = 0;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrAUHoodTmp_SD = 0;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrBBusBarTemp_SD = 0;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrBCurrent_SD = 0;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrBUHoodTmp_SD = 0;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrCBusBarTemp_SD = 0;/* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrCCurrent_SD = 0;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_MtrCUHoodTmp_SD = 0;/* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(boolean, CTMR_VAR_INIT) KeCTMR_b_VehSpd_SD = 0;/* Referenced by: '<S464>/Calib' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_k_GenBusTempCoef = 0.0F;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_n_EngineSpeed_D = 0.0F;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_v_VehSpd_D = 0.0F;/* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KeCTMR_x_AadPos_D = 0.0F;/* Referenced by: '<S467>/Calib' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_K_GenExhSufThermalCoeff[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S71>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_K_GpimAcCmpShThermCoef[7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S135>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_K_GpimAcEleEmcssConCmpSh[49]
    =
{
    35.0516586F, 50.1033287F, 60.1377792F, 70.1722412F, 80.2067F, 90.2411F,
    100.275574F, 40.0344505F, 55.0861F, 65.1205673F, 75.155F, 85.1894531F,
    95.2239F, 105.258362F, 45.0172F, 60.0689F, 70.1033325F, 80.1377792F,
    90.1722412F, 100.206703F, 110.241096F, 54.9827805F, 70.0344467F, 80.0689F,
    90.1033325F, 100.137779F, 110.172241F, 120.206703F, 64.9483337F, 80.0F,
    90.0344467F, 100.068871F, 110.103333F, 120.137779F, 130.172241F, 74.9138718F,
    89.965538F, 100.0F, 110.034447F, 120.068901F, 130.103333F, 140.137787F,
    84.8794174F, 99.9311218F, 109.965538F, 120.0F, 130.034454F, 140.068863F,
    150.103333F
} ;                                    /* Referenced by: '<S136>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_K_GpimDcEleEmcssConCmpSh[49]
    =
{
    35.0516586F, 50.1033287F, 60.1377792F, 70.1722412F, 80.2067F, 90.2411F,
    100.275574F, 40.0344505F, 55.0861F, 65.1205673F, 75.155F, 85.1894531F,
    95.2239F, 105.258362F, 45.0172F, 60.0689F, 70.1033325F, 80.1377792F,
    90.1722412F, 100.206703F, 110.241096F, 54.9827805F, 70.0344467F, 80.0689F,
    90.1033325F, 100.137779F, 110.172241F, 120.206703F, 64.9483337F, 80.0F,
    90.0344467F, 100.068871F, 110.103333F, 120.137779F, 130.172241F, 74.9138718F,
    89.965538F, 100.0F, 110.034447F, 120.068901F, 130.103333F, 140.137787F,
    84.8794174F, 99.9311218F, 109.965538F, 120.0F, 130.034454F, 140.068863F,
    150.103333F
} ;                                    /* Referenced by: '<S174>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_BusTempOffSet[9] =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S48>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ConCmpShThmrCoef[7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S331>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_EleTempSSConCmp[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S205>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmCoClmpThrmCoeffMtrA[6]
    =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S91>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmConClmpBBusAdjMtrA[7]
    =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S92>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmConCmpBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S305>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmConCmpThmrCoef[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S332>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmConCmpThmrCoefNS[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S310>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmConCmpTmpSS[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by:
                                        * '<S311>/Vector'
                                        * '<S333>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmConHoShBusAdj[7] =
{
    -9.3F, -6.2F, -3.1F, 0.0F, 3.1F, 6.2F, 9.3F
} ;                                    /* Referenced by: '<S334>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmConHoShThmrCoef[7] =
{
    0.0027F, 0.0027F, 0.0027F, 0.0027F, 0.0027F, 0.0027F, 0.0027F
} ;                                    /* Referenced by: '<S335>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmEleConHoShSS[20] =
{
    90.2066803F, 91.4030228F, 92.9917908F, 95.0156326F, 100.621239F, 97.4664307F,
    98.6825638F, 100.297752F, 102.355522F, 108.056778F, 104.728867F, 105.964798F,
    107.606453F, 109.698242F, 115.49514F, 111.994087F, 113.249825F, 114.917961F,
    117.043732F, 122.93634F
} ;                                    /* Referenced by: '<S336>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmEleTmpSSConCmpSh[49] =
{
    35.0516586F, 50.1033287F, 60.1377792F, 70.1722412F, 80.2067F, 90.2411F,
    100.275574F, 40.0344505F, 55.0861F, 65.1205673F, 75.155F, 85.1894531F,
    95.2239F, 105.258362F, 45.0172F, 60.0689F, 70.1033325F, 80.1377792F,
    90.1722412F, 100.206703F, 110.241096F, 54.9827805F, 70.0344467F, 80.0689F,
    90.1033325F, 100.137779F, 110.172241F, 120.206703F, 64.9483337F, 80.0F,
    90.0344467F, 100.068871F, 110.103333F, 120.137779F, 130.172241F, 74.9138718F,
    89.965538F, 100.0F, 110.034447F, 120.068901F, 130.103333F, 140.137787F,
    84.8794174F, 99.9311218F, 109.965538F, 120.0F, 130.034454F, 140.068863F,
    150.103333F
} ;                                    /* Referenced by: '<S337>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmEleTmpSSConnClmpMtrA
    [42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmExhRadSS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmExhRadSSNS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by:
                                        * '<S312>/Vector'
                                        * '<S347>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmExhSS[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S65>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_FedmExhThermCoeff[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S66>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenBusTempOffset[9] =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S36>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenConCmpBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S206>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenConCmpShThermCoef[7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S207>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenConCmpThermCoef[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S208>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenConHoShThermCoef[7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S209>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenEleEcmssConHoSh[20] =
{
    90.2066803F, 91.4030228F, 92.9917908F, 95.0156326F, 100.621239F, 97.4664307F,
    98.6825638F, 100.297752F, 102.355522F, 108.056778F, 104.728867F, 105.964798F,
    107.606453F, 109.698242F, 115.49514F, 111.994087F, 113.249825F, 114.917961F,
    117.043732F, 122.93634F
} ;                                    /* Referenced by: '<S210>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenEleEmcssConCmpSh[49] =
{
    35.0516586F, 50.1033287F, 60.1377792F, 70.1722412F, 80.2067F, 90.2411F,
    100.275574F, 40.0344505F, 55.0861F, 65.1205673F, 75.155F, 85.1894531F,
    95.2239F, 105.258362F, 45.0172F, 60.0689F, 70.1033325F, 80.1377792F,
    90.1722412F, 100.206703F, 110.241096F, 54.9827805F, 70.0344467F, 80.0689F,
    90.1033325F, 100.137779F, 110.172241F, 120.206703F, 64.9483337F, 80.0F,
    90.0344467F, 100.068871F, 110.103333F, 120.137779F, 130.172241F, 74.9138718F,
    89.965538F, 100.0F, 110.034447F, 120.068901F, 130.103333F, 140.137787F,
    84.8794174F, 99.9311218F, 109.965538F, 120.0F, 130.034454F, 140.068863F,
    150.103333F
} ;                                    /* Referenced by: '<S211>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenExhRadSS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S212>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenExhSurfaceSS[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S72>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GenHoShBusAdj[7] =
{
    -9.3F, -6.2F, -3.1F, 0.0F, 3.1F, 6.2F, 9.3F
} ;                                    /* Referenced by: '<S213>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimAcConCmpBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S137>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimAcConCmpThermCoef[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S138>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimAcConHoShBusAdj[7] =
{
    -9.3F, -6.2F, -3.1F, 0.0F, 3.1F, 6.2F, 9.3F
} ;                                    /* Referenced by: '<S139>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimAcConHoShThermCoef[7]
    =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S140>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimAcEleEmcssConHoSh[20]
    =
{
    90.2066803F, 91.4030228F, 92.9917908F, 95.0156326F, 100.621239F, 97.4664307F,
    98.6825638F, 100.297752F, 102.355522F, 108.056778F, 104.728867F, 105.964798F,
    107.606453F, 109.698242F, 115.49514F, 111.994087F, 113.249825F, 114.917961F,
    117.043732F, 122.93634F
} ;                                    /* Referenced by: '<S141>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimAcEleTempSSConCmp[42]
    =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S142>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimAcExhRadSS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S143>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDCExhRadSS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S175>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDCExhRadSSNS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S152>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcConCmpBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by:
                                        * '<S153>/Vector'
                                        * '<S176>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcConCmpShThrmrCoef[7]
    =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S177>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcConCmpThermCoef[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S178>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcConCmpThermCoefNS[6]
    =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S154>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcConHoShBusAdj[7] =
{
    -9.3F, -6.2F, -3.1F, 0.0F, 3.1F, 6.2F, 9.3F
} ;                                    /* Referenced by: '<S179>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcConHoShThrmCoef[7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S180>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcEleEmcssConHoSh[20]
    =
{
    90.2066803F, 91.4030228F, 92.9917908F, 95.0156326F, 100.621239F, 97.4664307F,
    98.6825638F, 100.297752F, 102.355522F, 108.056778F, 104.728867F, 105.964798F,
    107.606453F, 109.698242F, 115.49514F, 111.994087F, 113.249825F, 114.917961F,
    117.043732F, 122.93634F
} ;                                    /* Referenced by: '<S181>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_GpimDcEleTempSSConCmp[42]
    =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by:
                                        * '<S155>/Vector'
                                        * '<S182>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmBusTmpOffset[9] =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S55>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmBusTmpOffsetBev[9]
    =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S30>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmCOnHoShBusAdj[7] =
{
    -9.3F, -6.2F, -3.1F, 0.0F, 3.1F, 6.2F, 9.3F
} ;                                    /* Referenced by: '<S368>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmConCmpBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S306>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmConCmpShThmrCoef
    [7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S369>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmConCmpThmrCoef[6]
    =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S370>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmConCmpThmrCoefNS
    [6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S348>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT)
    KtCTMR_T_HvbpFedmConCmpThrmCoefMtrA[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S98>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmConHoShThrmCoef[7]
    =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S371>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmEleConHoShSS[20] =
{
    90.2066803F, 91.4030228F, 92.9917908F, 95.0156326F, 100.621239F, 97.4664307F,
    98.6825638F, 100.297752F, 102.355522F, 108.056778F, 104.728867F, 105.964798F,
    107.606453F, 109.698242F, 115.49514F, 111.994087F, 113.249825F, 114.917961F,
    117.043732F, 122.93634F
} ;                                    /* Referenced by: '<S372>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmEleSSConCmpSh[49]
    =
{
    35.0516586F, 50.1033287F, 60.1377792F, 70.1722412F, 80.2067F, 90.2411F,
    100.275574F, 40.0344505F, 55.0861F, 65.1205673F, 75.155F, 85.1894531F,
    95.2239F, 105.258362F, 45.0172F, 60.0689F, 70.1033325F, 80.1377792F,
    90.1722412F, 100.206703F, 110.241096F, 54.9827805F, 70.0344467F, 80.0689F,
    90.1033325F, 100.137779F, 110.172241F, 120.206703F, 64.9483337F, 80.0F,
    90.0344467F, 100.068871F, 110.103333F, 120.137779F, 130.172241F, 74.9138718F,
    89.965538F, 100.0F, 110.034447F, 120.068901F, 130.103333F, 140.137787F,
    84.8794174F, 99.9311218F, 109.965538F, 120.0F, 130.034454F, 140.068863F,
    150.103333F
} ;                                    /* Referenced by: '<S373>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmEleTmpSSConCmp[42]
    =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by:
                                        * '<S349>/Vector'
                                        * '<S374>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT)
    KtCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S99>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpFedmExhRadSS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S375>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpRedmBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S280>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpRedmBusTmpOffset[9] =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S42>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpRedmConCmpThmrCoef[6]
    =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S281>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvbpRedmEleTmpSSConCmp[42]
    =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S282>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_HvpbFedmConCmpBusAdjMtrA
    [7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S100>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_PdcExhRadSS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S409>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_PdcExhSurSSAadDeploy[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S78>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_PdcExhSurSSAadRetreat[42]
    =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S79>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_PdcIntTempSS[9] =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S410>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_PdcSurTempAadAdj[9] =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S411>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_PdcSurTempSS[9] =
{
    -0.34128F, -0.834645F, 0.30394F, -2.77449F, -3.33067489F, -1.26673F,
    -6.76519489F, -7.50011492F, -3.85492492F
} ;                                    /* Referenced by: '<S412>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_PdcSurfThmrCoef[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S80>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_RedmCOnCmpBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S287>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_RedmConCmpThmrCoef[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S288>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_RedmEleTmpSSConCmp[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevConCmpShThmrCoef[7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S244>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevConCmpThmrCoef[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S245>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevConCmpThmrCoefNS[6] =
{
    0.00117647101F, 0.00117647101F, 0.00114705903F, 0.00111764704F,
    0.00105882401F, 0.000941176F
} ;                                    /* Referenced by: '<S222>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevConHoShBusAdj[7] =
{
    -9.3F, -6.2F, -3.1F, 0.0F, 3.1F, 6.2F, 9.3F
} ;                                    /* Referenced by: '<S246>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevConHoShThmrCoef[7] =
{
    0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F, 0.0017F
} ;                                    /* Referenced by: '<S247>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevEleConHoShSS[20] =
{
    90.2066803F, 91.4030228F, 92.9917908F, 95.0156326F, 100.621239F, 97.4664307F,
    98.6825638F, 100.297752F, 102.355522F, 108.056778F, 104.728867F, 105.964798F,
    107.606453F, 109.698242F, 115.49514F, 111.994087F, 113.249825F, 114.917961F,
    117.043732F, 122.93634F
} ;                                    /* Referenced by: '<S248>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevEleEmcssPbt[49] =
{
    35.0516586F, 50.1033287F, 60.1377792F, 70.1722412F, 80.2067F, 90.2411F,
    100.275574F, 40.0344505F, 55.0861F, 65.1205673F, 75.155F, 85.1894531F,
    95.2239F, 105.258362F, 45.0172F, 60.0689F, 70.1033325F, 80.1377792F,
    90.1722412F, 100.206703F, 110.241096F, 54.9827805F, 70.0344467F, 80.0689F,
    90.1033325F, 100.137779F, 110.172241F, 120.206703F, 64.9483337F, 80.0F,
    90.0344467F, 100.068871F, 110.103333F, 120.137779F, 130.172241F, 74.9138718F,
    89.965538F, 100.0F, 110.034447F, 120.068901F, 130.103333F, 140.137787F,
    84.8794174F, 99.9311218F, 109.965538F, 120.0F, 130.034454F, 140.068863F,
    150.103333F
} ;                                    /* Referenced by: '<S249>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevExhRadSS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S250>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_ReevExhRadSSNS[48] =
{
    0.97442019F, 1.70403445F, 2.41784048F, 3.32567739F, 4.45986319F, 5.85512686F,
    7.5487F, 9.58013344F, 0.943384F, 1.67241895F, 2.38561392F, 3.29271889F,
    4.42592812F, 5.82000208F, 7.5120182F, 9.54159F, 0.90545F, 1.63381195F,
    2.34633589F, 3.25255609F, 4.38469696F, 5.77736712F, 7.46767378F, 9.49511F,
    0.859642F, 1.58724201F, 2.29903412F, 3.20427704F, 4.33517F, 5.72631F,
    7.41469622F, 9.43972F, 0.804985F, 1.53173F, 2.24267F, 3.14684F, 4.27636F,
    5.66576385F, 7.35201F, 9.37435F, 0.74044F, 1.46624F, 2.17626F, 3.079216F,
    4.20721F, 5.59469F, 7.27856F, 9.297966F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_RevConCmpBusAdj[7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by:
                                        * '<S224>/Vector'
                                        * '<S251>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KtCTMR_T_RevEleTmpSSConCmp[42] =
{
    81.7791367F, 86.3900681F, 92.5481796F, 100.4487F, 122.643578F, 156.493927F,
    94.8628464F, 99.6566696F, 106.059319F, 114.273979F, 137.353622F, 172.560547F,
    107.948853F, 112.925621F, 119.572868F, 128.101685F, 152.066284F, 188.629898F,
    121.037163F, 126.197F, 133.088837F, 141.931854F, 166.781494F, 204.702103F,
    134.127655F, 139.470413F, 146.606873F, 155.764053F, 181.498764F, 220.776413F,
    147.217422F, 152.743256F, 159.961044F, 169.595856F, 196.215836F, 236.850815F,
    160.307175F, 166.016052F, 173.641876F, 183.427643F, 210.932922F, 252.925262F
} ;                                    /* Referenced by:
                                        * '<S225>/Vector'
                                        * '<S252>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_K_GenExhSufThermalCoeff[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S71>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_K_GpimAcCmpShThermCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S135>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_K_GpimAcEleEmcssConCmpSh[7]
    =
{
    50.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S136>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_K_GpimDcEleEmcssConCmpSh[7]
    =
{
    50.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S174>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_BusTempOffSet[3] =
{
    2000.0F, 4000.0F, 5000.0F
} ;                                    /* Referenced by: '<S48>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ConCmpShThmrCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S331>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_EleTempSSConCmp[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S205>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmCoClmpThrmCoeffMtrA[6]
    =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S91>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmConClmpBBusAdjMtrA[7]
    =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S92>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmConCmpBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S305>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmConCmpThmrCoef[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S332>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmConCmpThmrCoefNS[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S310>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmConCmpTmpSS[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by:
                                        * '<S311>/Vector'
                                        * '<S333>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmConHoShBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S334>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmConHoShThmrCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S335>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmEleConHoShSS[5] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F
} ;                                    /* Referenced by: '<S336>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmEleTmpSSConCmpSh[7] =
{
    20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S337>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmEleTmpSSConnClmpMtrA
    [6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmExhRadSS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmExhRadSSNS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by:
                                        * '<S312>/Vector'
                                        * '<S347>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmExhSS[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_FedmExhThermCoeff[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S66>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenBusTempOffset[3] =
{
    2000.0F, 4000.0F, 5500.0F
} ;                                    /* Referenced by: '<S36>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenConCmpBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S206>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenConCmpShThermCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S207>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenConCmpThermCoef[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S208>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenConHoShThermCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S209>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenEleEcmssConHoSh[5] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F
} ;                                    /* Referenced by: '<S210>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenEleEmcssConCmpSh[7] =
{
    50.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S211>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenExhRadSS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S212>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenExhSurfaceSS[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S72>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GenHoShBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S213>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimAcConCmpBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S137>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimAcConCmpThermCoef[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S138>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimAcConHoShBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S139>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimAcConHoShThermCoef[7]
    =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S140>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimAcEleEmcssConHoSh[5] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F
} ;                                    /* Referenced by: '<S141>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimAcEleTempSSConCmp[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S142>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimAcExhRadSS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S143>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDCExhRadSS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S175>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDCExhRadSSNS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S152>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcConCmpBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by:
                                        * '<S153>/Vector'
                                        * '<S176>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcConCmpShThrmrCoef[7]
    =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S177>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcConCmpThermCoef[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S178>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcConCmpThermCoefNS[6]
    =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S154>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcConHoShBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S179>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcConHoShThrmCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S180>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcEleEmcssConHoSh[5] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F
} ;                                    /* Referenced by: '<S181>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_GpimDcEleTempSSConCmp[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by:
                                        * '<S155>/Vector'
                                        * '<S182>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmBusTmpOffset[3] =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S55>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmBusTmpOffsetBev[3]
    =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S30>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmCOnHoShBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S368>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmConCmpBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S306>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmConCmpShThmrCoef
    [7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S369>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmConCmpThmrCoef[6]
    =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S370>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmConCmpThmrCoefNS
    [6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S348>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT)
    KxCTMR_T_HvbpFedmConCmpThrmCoefMtrA[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S98>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmConHoShThrmCoef[7]
    =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S371>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmEleConHoShSS[5] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F
} ;                                    /* Referenced by: '<S372>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmEleSSConCmpSh[7] =
{
    20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S373>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmEleTmpSSConCmp[6]
    =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by:
                                        * '<S349>/Vector'
                                        * '<S374>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT)
    KxCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S99>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpFedmExhRadSS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S375>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpRedmBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S280>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpRedmBusTmpOffset[3] =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S42>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpRedmConCmpThmrCoef[6]
    =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S281>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_HvbpRedmEleTmpSSConCmp[6]
    =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_PdcExhRadSS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S409>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_PdcExhSurSSAadDeploy[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S78>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_PdcExhSurSSAadRetreat[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S79>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_PdcIntTempSS[3] =
{
    2000.0F, 4000.0F, 5500.0F
} ;                                    /* Referenced by: '<S410>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_PdcSurTempAadAdj[3] =
{
    2000.0F, 4000.0F, 5500.0F
} ;                                    /* Referenced by: '<S411>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_PdcSurTempSS[3] =
{
    2000.0F, 4000.0F, 5500.0F
} ;                                    /* Referenced by: '<S412>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_PdcSurfThmrCoef[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S80>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_RedmCOnCmpBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S287>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_RedmConCmpThmrCoef[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S288>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_RedmEleTmpSSConCmp[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevConCmpShThmrCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S244>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevConCmpThmrCoef[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S245>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevConCmpThmrCoefNS[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S222>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevConHoShBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S246>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevConHoShThmrCoef[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by: '<S247>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevEleConHoShSS[5] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F
} ;                                    /* Referenced by: '<S248>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevEleEmcssPbt[7] =
{
    50.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S249>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevExhRadSS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S250>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_ReevExhRadSSNS[8] =
{
    230.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_RevConCmpBusAdj[7] =
{
    90.0F, 95.0F, 100.0F, 105.0F, 110.0F, 115.0F, 120.0F
} ;                                    /* Referenced by:
                                        * '<S224>/Vector'
                                        * '<S251>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KxCTMR_T_RevEleTmpSSConCmp[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by:
                                        * '<S225>/Vector'
                                        * '<S252>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_K_GpimAcEleEmcssConCmpSh[7]
    =
{
    20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S136>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_K_GpimDcEleEmcssConCmpSh[7]
    =
{
    20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S174>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_BusTempOffSet[3] =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S48>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_EleTempSSConCmp[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S205>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_FedmConCmpTmpSS[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by:
                                        * '<S311>/Vector'
                                        * '<S333>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_FedmEleConHoShSS[4] =
{
    60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S336>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_FedmEleTmpSSConCmpSh[7] =
{
    50.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S337>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_FedmEleTmpSSConnClmpMtrA
    [7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_FedmExhRadSS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_FedmExhRadSSNS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S312>/Vector'
                                        * '<S347>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_FedmExhSS[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GenBusTempOffset[3] =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S36>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GenEleEcmssConHoSh[4] =
{
    60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S210>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GenEleEmcssConCmpSh[7] =
{
    20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S211>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GenExhRadSS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S212>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GenExhSurfaceSS[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S72>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GpimAcEleEmcssConHoSh[4] =
{
    60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S141>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GpimAcEleTempSSConCmp[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S142>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GpimAcExhRadSS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S143>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GpimDCExhRadSS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S175>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GpimDCExhRadSSNS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S152>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GpimDcEleEmcssConHoSh[4] =
{
    60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S181>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_GpimDcEleTempSSConCmp[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by:
                                        * '<S155>/Vector'
                                        * '<S182>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpFedmBusTmpOffset[3] =
{
    2000.0F, 4000.0F, 5500.0F
} ;                                    /* Referenced by: '<S55>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpFedmBusTmpOffsetBev[3]
    =
{
    2000.0F, 4000.0F, 5500.0F
} ;                                    /* Referenced by: '<S30>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpFedmEleConHoShSS[4] =
{
    60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S372>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpFedmEleSSConCmpSh[7] =
{
    50.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S373>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpFedmEleTmpSSConCmp[7]
    =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by:
                                        * '<S349>/Vector'
                                        * '<S374>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT)
    KyCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[6] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 400.0F, 500.0F
} ;                                    /* Referenced by: '<S99>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpFedmExhRadSS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S375>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpRedmBusTmpOffset[3] =
{
    2000.0F, 4000.0F, 5500.0F
} ;                                    /* Referenced by: '<S42>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvbpRedmEleTmpSSConCmp[7]
    =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_HvpbFedmConCmpBusAdjMtrA
    [7] =
{
    -4.35F, -2.9F, -1.45F, 0.0F, 1.45F, 2.9F, 4.35F
} ;                                    /* Referenced by: '<S100>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_PdcExhRadSS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S409>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_PdcExhSurSSAadDeploy[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S78>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_PdcExhSurSSAadRetreat[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S79>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_PdcIntTempSS[3] =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S410>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_PdcSurTempAadAdj[3] =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S411>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_PdcSurTempSS[3] =
{
    100.0F, 200.0F, 300.0F
} ;                                    /* Referenced by: '<S412>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_RedmEleTmpSSConCmp[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_ReevEleConHoShSS[4] =
{
    60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S248>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_ReevEleEmcssPbt[7] =
{
    20.0F, 30.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S249>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_ReevExhRadSS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S250>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_ReevExhRadSSNS[6] =
{
    0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static volatile CONST(float32, CTMR_VAR_INIT) KyCTMR_T_RevEleTmpSSConCmp[7] =
{
    60.0F, 80.0F, 100.0F, 120.0F, 140.0F, 160.0F, 180.0F
} ;                                    /* Referenced by:
                                        * '<S225>/Vector'
                                        * '<S252>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CTMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VaCTMR_T_MtrAConTmpsFunc[4];
                                /* '<S12>/SigConvForSigProp_VariantSource4_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VaCTMR_T_MtrAConTmpsLimFunc[4];
                                /* '<S12>/SigConvForSigProp_VariantSource5_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_ACCElecCurr_AD;/* '<S4>/Switch24' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_APM_HV_Current_AD;/* '<S4>/Switch25' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_FedmCurrent;
                                 /* '<S9>/SigConvForSigProp_VariantSource6_0' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_GenCurrent;
                                 /* '<S9>/SigConvForSigProp_VariantSource4_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_HVC_Htr2_HV_CrntAct_AD;/* '<S4>/Switch23' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_HVC_Htr_HV_CrntAct_AD;/* '<S4>/Switch26' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_MtrACurrent_AD;/* '<S4>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_MtrBCurrent_AD;/* '<S4>/Switch16' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_MtrCCurrent_AD;/* '<S4>/Switch17' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_I_RedmCurrent;
                                 /* '<S9>/SigConvForSigProp_VariantSource5_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_K_PdcSurThmrRespSS;/* '<S15>/Product' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_M_GenTorque_AD;/* '<S4>/Switch4' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_AmbTemp_AD;/* '<S4>/Switch9' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_ConnClampShieldTempPrev;/* '<S111>/UnitDelay2' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_ConnClampTempPrevNoShRepb;/* '<S110>/UnitDelay1' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_ExhTemp_AD;/* '<S4>/Switch11' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_FEDMConnClampShieldTempPrev;/* '<S298>/UnitDelay1' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_FEDMConnHolderShieldTemp;/* '<S298>/Sum24' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_FEDMExhTempADJ;/* '<S339>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_FEDM_Exh_Surf_Temp;/* '<S67>/Switch' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_FedmBusbar;
                                 /* '<S7>/SigConvForSigProp_VariantSource5_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_FedmUnderhoodAirTemp;
                                /* '<S17>/SigConvForSigProp_VariantSource6_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GPIMACConnClampShieldTempPrev;/* '<S114>/UnitDelay1' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GPIMACConnHolderShieldTemp;/* '<S114>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GPIMACExhTempADJ;/* '<S144>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GPIMDCConnClampShieldTempPrev;/* '<S116>/UnitDelay3' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GPIMDCConnHolderShieldTemp;/* '<S116>/Sum1' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GPIMDCExhTempADJ;/* '<S183>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenConCmpShThermCoefRepb;/* '<S207>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenConCmpThermCoefRepb;/* '<S208>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenConHoShThermCoefRepb;/* '<S209>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenConnClampShieldTempPrev;/* '<S109>/UnitDelay1' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenConnClampTempSSRepb;/* '<S109>/Sum25' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenConnHolderShieldTemp;/* '<S109>/Sum24' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenEleEcmssConHoSSRepb;/* '<S210>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenEleEmcssConCmpShRepb;/* '<S211>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenExh_empADJ;/* '<S218>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenHoShBusAdjSSRepb;/* '<S213>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenUnderhoodAirTemp;
                                /* '<S17>/SigConvForSigProp_VariantSource4_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GenWindTemp_AD;/* '<S4>/Switch5' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_Gen_Busbar_Temp;/* '<S37>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_Gen_Conn_Clamp_Temp_Repb;/* '<S214>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_Gen_Exh_Surf_Temp;/* '<S73>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GpimAcBusTemp_AD;/* '<S4>/Switch14' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_GpimDcBusTemp_AD;/* '<S4>/Switch15' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_HVBPBusTemp_AD;/* '<S4>/Switch13' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_HVBPFEDMConnHolderShieldTemp;/* '<S300>/Sum24' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_HVBPFEDMExhTempADJ;/* '<S376>/Switch' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_HVBP_REDM_Busbar_Temp;/* '<S43>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_HVC_Htr4ClntOut_Temp_AD;/* '<S4>/Switch12' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_HvbpBduBusTemp_AD;/* '<S4>/Switch18' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_HvbpRedmSS;/* '<S273>/Sum25' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_MtrAUHoodTmp_AD;/* '<S4>/Switch3' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_MtrBBusBarTemp_AD;/* '<S4>/Switch20' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_MtrBUHoodTmp_AD;/* '<S4>/Switch7' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_MtrCBusBarTemp_AD;/* '<S4>/Switch19' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_MtrCUHoodTmp_AD;/* '<S4>/Switch6' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_PDC_Exh_Surf_Temp;/* '<S81>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_PDC_Exh_Surf_TempSS;/* '<S61>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_PDC_Surf_TempSS;/* '<S15>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_PdcExhRadThmr;/* '<S415>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_PdcExhRadThmrSS;/* '<S409>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_PdcIntTemp;/* '<S414>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_PdcSurThmrResp;/* '<S416>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_REEVConnClampTempNoShCoefRepb;/* '<S222>/Vector' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_REEVConnClampTempNoShRepb;/* '<S226>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_REEVConnClampTempNoShSSRepb;/* '<S110>/Sum25' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_REEVConnHolderShieldTemp;/* '<S111>/Sum24' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_REEVExhTempADJ;/* '<S255>/Switch' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_REEV_Busbar_Temp;/* '<S49>/Switch' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_REPBGenExhTempSS;/* '<S212>/Vector' */

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_RedmBusbar;
                                 /* '<S7>/SigConvForSigProp_VariantSource4_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_RedmConTempSS;/* '<S276>/Sum25' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_RedmUnderhoodAirTemp;
                                /* '<S17>/SigConvForSigProp_VariantSource5_0' */

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

static VAR(float32, CTMR_VAR_INIT) VeCTMR_T_THVBPFEDMConnClampShieldTempPrev;/* '<S300>/UnitDelay1' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_n_EngineSpeed_AD;/* '<S4>/Switch2' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_v_VehSpd_AD;/* '<S4>/Switch8' */

#endif

#if Rte_SysCon_Variant_CTMR_1

static VAR(float32, CTMR_VAR_INIT) VeCTMR_x_AadPos_AD;/* '<S4>/Switch10' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CTMR
#include "MemMap.h"

CONST(ConstP_CTMR_ac_T, CTMR_VAR_INIT) CTMR_ac_ConstP =
{

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S410>/Vector'
     *   '<S411>/Vector'
     *   '<S412>/Vector'
     *   '<S36>/Vector'
     *   '<S42>/Vector'
     *   '<S48>/Vector'
     *   '<S30>/Vector'
     *   '<S55>/Vector'
     */
    {
        2U, 2U
    },

#endif

#if Rte_SysCon_Variant_CTMR_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S65>/Vector'
     *   '<S72>/Vector'
     *   '<S78>/Vector'
     *   '<S79>/Vector'
     *   '<S93>/Vector'
     *   '<S99>/Vector'
     *   '<S205>/Vector'
     *   '<S225>/Vector'
     *   '<S252>/Vector'
     *   '<S282>/Vector'
     *   '<S289>/Vector'
     *   '<S311>/Vector'
     *   '<S333>/Vector'
     *   '<S349>/Vector'
     *   '<S374>/Vector'
     *   '<S142>/Vector'
     *   '<S155>/Vector'
     *   '<S182>/Vector'
     */
    {
        5U, 6U
    },

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S409>/Vector'
     *   '<S212>/Vector'
     *   '<S223>/Vector'
     *   '<S250>/Vector'
     *   '<S312>/Vector'
     *   '<S338>/Vector'
     *   '<S347>/Vector'
     *   '<S375>/Vector'
     *   '<S143>/Vector'
     *   '<S152>/Vector'
     *   '<S175>/Vector'
     */
    {
        7U, 5U
    },

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S210>/Vector'
     *   '<S248>/Vector'
     *   '<S336>/Vector'
     *   '<S372>/Vector'
     *   '<S141>/Vector'
     *   '<S181>/Vector'
     */
    {
        4U, 3U
    },

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S211>/Vector'
     *   '<S249>/Vector'
     *   '<S337>/Vector'
     *   '<S373>/Vector'
     *   '<S136>/Vector'
     *   '<S174>/Vector'
     */
    {
        6U, 6U
    },

#endif

#ifndef CONSTP_CTMR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_CTMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTMR
#include "MemMap.h"

VAR(B_CTMR_ac_T, CTMR_VAR_INIT) CTMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTMR
#include "MemMap.h"

VAR(DW_CTMR_ac_T, CTMR_VAR_INIT) CTMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTMR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CTMR_1

FUNC(void, CTMR_CODE) CTMR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_8;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_9;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_a;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_b;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_c;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_d;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_e;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_f;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_g;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_h;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_i;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 tmpRead_j;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

    float32 rtb_MtrBBusBarTmp_p;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    float32 rtb_MtrCBusBarTmp;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

    float32 rtb_GpimDcBusTemp;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_MtrB_Current_e;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_MtrB_Current;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_MtrA_Current_c;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_MtrA_Current;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_SigConvForSigProp_VariantSo;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_Switch1_cy;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_MtrAUHoodTmp_c;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_VariantMerge_For_Variant_So[4];

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    float32 rtb_MtrBUHoodTmp_b;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_MtrBUHoodTmp;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_VariantMerge_For_Variant__b[2];

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_Switch1_jc;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_Switch1_hx;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_Switch_cz;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_Switch_g5;

#endif

#if Rte_SysCon_Variant_CTMR_1

    boolean rtb_OR1_ex;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    float32 rtb_UnitDelay_bg;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 rtb_Switch1_ey;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

    float32 rtb_Switch1_fc;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_4

    float32 rtb_Switch1_gs;

#endif

#if (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_3) || (Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5)

    float32 rtb_Switch_c0;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    float32 rtb_Switch1_cf;

#endif

#if Rte_SysCon_Variant_CTMR_1 && Rte_SysCon_Variant_CTMR_5

    float32 rtb_Switch1_hr;

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 Gain_e[4];

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 Gain_em[2];

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 Gain_o[2];

#endif

#if Rte_SysCon_Variant_CTMR_1

    float32 VaCTMR_T_MtrBConTmps[2];

#endif

#if Rte_SysCon_Variant_CTMR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_CTMR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Inport: '<Root>/VeIDCR_I_APM_HV_Current' */
    (void)Rte_Read_VeIDCR_I_APM_HV_Current_Value(&rtb_Switch1_jc);

    /* Inport: '<Root>/VeTAIR_I_ACCElecCurr' */
    (void)Rte_Read_VeTAIR_I_ACCElecCurr_Value(&rtb_Switch_cz);

    /* Inport: '<Root>/VeHTIR_I_HVC_Htr2_HV_CrntAct' */
    (void)Rte_Read_VeHTIR_I_HVC_Htr2_HV_CrntAct_Value(&rtb_Switch_g5);

    /* Inport: '<Root>/VeHTIR_I_HVC_Htr_HV_CrntAct' */
    (void)Rte_Read_VeHTIR_I_HVC_Htr_HV_CrntAct_Value(&tmpRead_j);

    /* Inport: '<Root>/VeAATR_T_EstAmbAirTemp' */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&tmpRead_i);

    /* Inport: '<Root>/VeUBTR_T_MtrBAirTemp' */
    (void)Rte_Read_VeUBTR_T_MtrBAirTemp_Value(&tmpRead_h);

    /* Inport: '<Root>/VeUBTR_T_MtrCAirTemp' */
    (void)Rte_Read_VeUBTR_T_MtrCAirTemp_Value(&tmpRead_g);

    /* Inport: '<Root>/VeUBTR_T_MtrAAirTemp' */
    (void)Rte_Read_VeUBTR_T_MtrAAirTemp_Value(&tmpRead_f);

    /* Inport: '<Root>/VeINVR_T_MtrBBusBarTemp' */
    (void)Rte_Read_VeINVR_T_MtrBBusBarTemp_Value(&tmpRead_e);

    /* Inport: '<Root>/VeINVR_T_MtrCBusBarTemp' */
    (void)Rte_Read_VeINVR_T_MtrCBusBarTemp_Value(&tmpRead_d);

    /* Inport: '<Root>/VeBPCR_T_BDUBusBarTemp' */
    (void)Rte_Read_VeBPCR_T_BDUBusBarTemp_Value(&tmpRead_c);

    /* Inport: '<Root>/VeINVR_I_MtrC_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrC_DC_Crnt_Value(&tmpRead_b);

    /* Inport: '<Root>/VeINVR_I_MtrB_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrB_DC_Crnt_Value(&tmpRead_a);

    /* Inport: '<Root>/VeINVR_T_GPIMDCBusBarTemp' */
    (void)Rte_Read_VeINVR_T_GPIMDCBusBarTemp_Value(&tmpRead_9);

    /* Inport: '<Root>/VeINVR_T_GPIMACBusBarTemp' */
    (void)Rte_Read_VeINVR_T_GPIMACBusBarTemp_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBPCR_T_BusBarTemp' */
    (void)Rte_Read_VeBPCR_T_BusBarTemp_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut' */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut_Value(&tmpRead_6);

    /* Inport: '<Root>/VeENGR_T_ExhaustGasTemp' */
    (void)Rte_Read_VeENGR_T_ExhaustGasTemp_Value(&tmpRead_5);

    /* Inport: '<Root>/VeAADR_Pct_AAD_CurrPos' */
    (void)Rte_Read_VeAADR_Pct_AAD_CurrPos_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCSVR_v_VehSpd' */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value(&tmpRead_3);

    /* Inport: '<Root>/VeINVR_T_MtrA_Temp' */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value(&tmpRead_2);

    /* Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved' */
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value(&tmpRead_1);

    /* Inport: '<Root>/VeESPR_n_EngineSpeed' */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value(&tmpRead_0);

    /* Inport: '<Root>/VeINVR_I_MtrA_DC_Crnt' */
    (void)Rte_Read_VeINVR_I_MtrA_DC_Crnt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/CTMR_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Conversion_Factor'
     */
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S456>/Calib'
     */
    if (KeCTMR_b_MtrACurrent_SD)
    {
        /* Switch: '<S4>/Switch1' incorporates:
         *  Constant: '<S424>/Calib'
         */
        VeCTMR_I_MtrACurrent_AD = KeCTMR_I_MtrACurrent_D;
    }
    else
    {
        /* Switch: '<S4>/Switch1' */
        VeCTMR_I_MtrACurrent_AD = tmpRead;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S444>/Calib'
     */
    if (KeCTMR_b_EngineSpeed_SD)
    {
        /* Switch: '<S4>/Switch2' incorporates:
         *  Constant: '<S465>/Calib'
         */
        VeCTMR_n_EngineSpeed_AD = KeCTMR_n_EngineSpeed_D;
    }
    else
    {
        /* Switch: '<S4>/Switch2' */
        VeCTMR_n_EngineSpeed_AD = tmpRead_0;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S447>/Calib'
     */
    if (KeCTMR_b_GenTorque_SD)
    {
        /* Switch: '<S4>/Switch4' incorporates:
         *  Constant: '<S427>/Calib'
         */
        VeCTMR_M_GenTorque_AD = KeCTMR_M_GenTorque_D;
    }
    else
    {
        /* Switch: '<S4>/Switch4' */
        VeCTMR_M_GenTorque_AD = tmpRead_1;
    }

    /* End of Switch: '<S4>/Switch4' */

    /* Switch: '<S4>/Switch5' incorporates:
     *  Constant: '<S448>/Calib'
     */
    if (KeCTMR_b_GenWindTemp_SD)
    {
        /* Switch: '<S4>/Switch5' incorporates:
         *  Constant: '<S430>/Calib'
         */
        VeCTMR_T_GenWindTemp_AD = KeCTMR_T_GenWindTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch5' */
        VeCTMR_T_GenWindTemp_AD = tmpRead_2;
    }

    /* End of Switch: '<S4>/Switch5' */

    /* Switch: '<S4>/Switch8' incorporates:
     *  Constant: '<S464>/Calib'
     */
    if (KeCTMR_b_VehSpd_SD)
    {
        /* Switch: '<S4>/Switch8' incorporates:
         *  Constant: '<S466>/Calib'
         */
        VeCTMR_v_VehSpd_AD = KeCTMR_v_VehSpd_D;
    }
    else
    {
        /* Switch: '<S4>/Switch8' */
        VeCTMR_v_VehSpd_AD = tmpRead_3;
    }

    /* End of Switch: '<S4>/Switch8' */

    /* Switch: '<S4>/Switch10' incorporates:
     *  Constant: '<S443>/Calib'
     */
    if (KeCTMR_b_AadPos_SD)
    {
        /* Switch: '<S4>/Switch10' incorporates:
         *  Constant: '<S467>/Calib'
         */
        VeCTMR_x_AadPos_AD = KeCTMR_x_AadPos_D;
    }
    else
    {
        /* Switch: '<S4>/Switch10' */
        VeCTMR_x_AadPos_AD = tmpRead_4;
    }

    /* End of Switch: '<S4>/Switch10' */

    /* Switch: '<S4>/Switch11' incorporates:
     *  Constant: '<S446>/Calib'
     */
    if (KeCTMR_b_ExhTemp_SD)
    {
        /* Switch: '<S4>/Switch11' incorporates:
         *  Constant: '<S429>/Calib'
         */
        VeCTMR_T_ExhTemp_AD = KeCTMR_T_ExhTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch11' */
        VeCTMR_T_ExhTemp_AD = tmpRead_5;
    }

    /* End of Switch: '<S4>/Switch11' */

    /* Switch: '<S4>/Switch12' incorporates:
     *  Constant: '<S452>/Calib'
     */
    if (KeCTMR_b_HVC_Htr4ClntOut_Temp_SD)
    {
        /* Switch: '<S4>/Switch12' incorporates:
         *  Constant: '<S434>/Calib'
         */
        VeCTMR_T_HVC_Htr4ClntOut_Temp_AD = KeCTMR_T_HVC_Htr4ClntOut_Temp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch12' */
        VeCTMR_T_HVC_Htr4ClntOut_Temp_AD = tmpRead_6;
    }

    /* End of Switch: '<S4>/Switch12' */

    /* Switch: '<S4>/Switch13' incorporates:
     *  Constant: '<S451>/Calib'
     */
    if (KeCTMR_b_HVBPBusTemp_SD)
    {
        /* Switch: '<S4>/Switch13' incorporates:
         *  Constant: '<S433>/Calib'
         */
        VeCTMR_T_HVBPBusTemp_AD = KeCTMR_T_HVBPBusTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch13' */
        VeCTMR_T_HVBPBusTemp_AD = tmpRead_7;
    }

    /* End of Switch: '<S4>/Switch13' */

    /* Switch: '<S4>/Switch14' incorporates:
     *  Constant: '<S449>/Calib'
     */
    if (KeCTMR_b_GpimAcBusTemp_SD)
    {
        /* Switch: '<S4>/Switch14' incorporates:
         *  Constant: '<S431>/Calib'
         */
        VeCTMR_T_GpimAcBusTemp_AD = KeCTMR_T_GpimAcBusTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch14' */
        VeCTMR_T_GpimAcBusTemp_AD = tmpRead_8;
    }

    /* End of Switch: '<S4>/Switch14' */

    /* Switch: '<S4>/Switch15' incorporates:
     *  Constant: '<S450>/Calib'
     */
    if (KeCTMR_b_GpimDcBusTemp_SD)
    {
        /* Switch: '<S4>/Switch15' incorporates:
         *  Constant: '<S432>/Calib'
         */
        VeCTMR_T_GpimDcBusTemp_AD = KeCTMR_T_GpimDcBusTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch15' */
        VeCTMR_T_GpimDcBusTemp_AD = tmpRead_9;
    }

    /* End of Switch: '<S4>/Switch15' */

    /* Switch: '<S4>/Switch16' incorporates:
     *  Constant: '<S459>/Calib'
     */
    if (KeCTMR_b_MtrBCurrent_SD)
    {
        /* Switch: '<S4>/Switch16' incorporates:
         *  Constant: '<S425>/Calib'
         */
        VeCTMR_I_MtrBCurrent_AD = KeCTMR_I_MtrBCurrent_D;
    }
    else
    {
        /* Switch: '<S4>/Switch16' */
        VeCTMR_I_MtrBCurrent_AD = tmpRead_a;
    }

    /* End of Switch: '<S4>/Switch16' */

    /* Switch: '<S4>/Switch17' incorporates:
     *  Constant: '<S462>/Calib'
     */
    if (KeCTMR_b_MtrCCurrent_SD)
    {
        /* Switch: '<S4>/Switch17' incorporates:
         *  Constant: '<S426>/Calib'
         */
        VeCTMR_I_MtrCCurrent_AD = KeCTMR_I_MtrCCurrent_D;
    }
    else
    {
        /* Switch: '<S4>/Switch17' */
        VeCTMR_I_MtrCCurrent_AD = tmpRead_b;
    }

    /* End of Switch: '<S4>/Switch17' */

    /* Switch: '<S4>/Switch18' incorporates:
     *  Constant: '<S455>/Calib'
     */
    if (KeCTMR_b_HvbpBduBusTemp_SD)
    {
        /* Switch: '<S4>/Switch18' incorporates:
         *  Constant: '<S435>/Calib'
         */
        VeCTMR_T_HvbpBduBusTemp_AD = KeCTMR_T_HvbpBduBusTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch18' */
        VeCTMR_T_HvbpBduBusTemp_AD = tmpRead_c;
    }

    /* End of Switch: '<S4>/Switch18' */

    /* Switch: '<S4>/Switch19' incorporates:
     *  Constant: '<S461>/Calib'
     */
    if (KeCTMR_b_MtrCBusBarTemp_SD)
    {
        /* Switch: '<S4>/Switch19' incorporates:
         *  Constant: '<S439>/Calib'
         */
        VeCTMR_T_MtrCBusBarTemp_AD = KeCTMR_T_MtrCBusBarTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch19' */
        VeCTMR_T_MtrCBusBarTemp_AD = tmpRead_d;
    }

    /* End of Switch: '<S4>/Switch19' */

    /* Switch: '<S4>/Switch20' incorporates:
     *  Constant: '<S458>/Calib'
     */
    if (KeCTMR_b_MtrBBusBarTemp_SD)
    {
        /* Switch: '<S4>/Switch20' incorporates:
         *  Constant: '<S437>/Calib'
         */
        VeCTMR_T_MtrBBusBarTemp_AD = KeCTMR_T_MtrBBusBarTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch20' */
        VeCTMR_T_MtrBBusBarTemp_AD = tmpRead_e;
    }

    /* End of Switch: '<S4>/Switch20' */

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S457>/Calib'
     */
    if (KeCTMR_b_MtrAUHoodTmp_SD)
    {
        /* Switch: '<S4>/Switch3' incorporates:
         *  Constant: '<S436>/Calib'
         */
        VeCTMR_T_MtrAUHoodTmp_AD = KeCTMR_T_MtrAUHoodTmp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch3' */
        VeCTMR_T_MtrAUHoodTmp_AD = tmpRead_f;
    }

    /* End of Switch: '<S4>/Switch3' */

    /* Switch: '<S4>/Switch6' incorporates:
     *  Constant: '<S463>/Calib'
     */
    if (KeCTMR_b_MtrCUHoodTmp_SD)
    {
        /* Switch: '<S4>/Switch6' incorporates:
         *  Constant: '<S440>/Calib'
         */
        VeCTMR_T_MtrCUHoodTmp_AD = KeCTMR_T_MtrCUHoodTmp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch6' */
        VeCTMR_T_MtrCUHoodTmp_AD = tmpRead_g;
    }

    /* End of Switch: '<S4>/Switch6' */

    /* Switch: '<S4>/Switch7' incorporates:
     *  Constant: '<S460>/Calib'
     */
    if (KeCTMR_b_MtrBUHoodTmp_SD)
    {
        /* Switch: '<S4>/Switch7' incorporates:
         *  Constant: '<S438>/Calib'
         */
        VeCTMR_T_MtrBUHoodTmp_AD = KeCTMR_T_MtrBUHoodTmp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch7' */
        VeCTMR_T_MtrBUHoodTmp_AD = tmpRead_h;
    }

    /* End of Switch: '<S4>/Switch7' */

    /* Switch: '<S4>/Switch9' incorporates:
     *  Constant: '<S445>/Calib'
     */
    if (KeCTMR_b_EstAmbAirTemp_SD)
    {
        /* Switch: '<S4>/Switch9' incorporates:
         *  Constant: '<S428>/Calib'
         */
        VeCTMR_T_AmbTemp_AD = KeCTMR_T_EstAmbAirTemp_D;
    }
    else
    {
        /* Switch: '<S4>/Switch9' */
        VeCTMR_T_AmbTemp_AD = tmpRead_i;
    }

    /* End of Switch: '<S4>/Switch9' */

    /* Switch: '<S4>/Switch26' incorporates:
     *  Constant: '<S454>/Calib'
     */
    if (KeCTMR_b_HVC_Htr_HV_CrntAct_SD)
    {
        /* Switch: '<S4>/Switch26' incorporates:
         *  Constant: '<S423>/Calib'
         */
        VeCTMR_I_HVC_Htr_HV_CrntAct_AD = KeCTMR_I_HVC_Htr_HV_CrntAct_D;
    }
    else
    {
        /* Switch: '<S4>/Switch26' */
        VeCTMR_I_HVC_Htr_HV_CrntAct_AD = tmpRead_j;
    }

    /* End of Switch: '<S4>/Switch26' */

    /* Switch: '<S4>/Switch23' incorporates:
     *  Constant: '<S453>/Calib'
     */
    if (KeCTMR_b_HVC_Htr_2_HV_CrntAct_SD)
    {
        /* Switch: '<S4>/Switch23' incorporates:
         *  Constant: '<S422>/Calib'
         */
        VeCTMR_I_HVC_Htr2_HV_CrntAct_AD = KeCTMR_I_HVC_Htr2_HV_CrntAct_D;
    }
    else
    {
        /* Switch: '<S4>/Switch23' */
        VeCTMR_I_HVC_Htr2_HV_CrntAct_AD = rtb_Switch_g5;
    }

    /* End of Switch: '<S4>/Switch23' */

    /* Switch: '<S4>/Switch24' incorporates:
     *  Constant: '<S441>/Calib'
     */
    if (KeCTMR_b_ACCElecCurr_SD)
    {
        /* Switch: '<S4>/Switch24' incorporates:
         *  Constant: '<S420>/Calib'
         */
        VeCTMR_I_ACCElecCurr_AD = KeCTMR_I_ACCElecCurr_D;
    }
    else
    {
        /* Switch: '<S4>/Switch24' */
        VeCTMR_I_ACCElecCurr_AD = rtb_Switch_cz;
    }

    /* End of Switch: '<S4>/Switch24' */

    /* Switch: '<S4>/Switch25' incorporates:
     *  Constant: '<S442>/Calib'
     */
    if (KeCTMR_b_APM_HV_Current_SD)
    {
        /* Switch: '<S4>/Switch25' incorporates:
         *  Constant: '<S421>/Calib'
         */
        VeCTMR_I_APM_HV_Current_AD = KeCTMR_I_APM_HV_Current_D;
    }
    else
    {
        /* Switch: '<S4>/Switch25' */
        VeCTMR_I_APM_HV_Current_AD = rtb_Switch1_jc;
    }

    /* End of Switch: '<S4>/Switch25' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Control_100ms'
     */
#if Rte_SysCon_Variant_CTMR_4

    /* Outputs for Atomic SubSystem: '<S7>/EnabledSubsystem2' */
    /* Inport: '<S18>/MtrBBusBarTmp' */
    rtb_MtrBBusBarTmp_p = VeCTMR_T_MtrBBusBarTemp_AD;

    /* Inport: '<S18>/GpimDcBusTemp' */
    rtb_GpimDcBusTemp = VeCTMR_T_GpimDcBusTemp_AD;

    /* End of Outputs for SubSystem: '<S7>/EnabledSubsystem2' */
#endif

    /* SignalConversion generated from: '<S7>/VariantSource4' incorporates:
     *  Inport: '<S19>/MtrCBusBarTmp'
     */
#if Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S7>/Enabled_Subsystem1' */
    rtb_MtrCBusBarTmp = VeCTMR_T_MtrCBusBarTemp_AD;

    /* VariantMerge generated from: '<S7>/VariantSource4' incorporates:
     *  Inport: '<S19>/MtrBBusBarTmp'
     *  Inport: '<S19>/MtrCBusBarTmp'
     */
    CTMR_ac_B.VariantMerge_For_Variant_Sour_a = VeCTMR_T_MtrBBusBarTemp_AD;

    /* End of Outputs for SubSystem: '<S7>/Enabled_Subsystem1' */
#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource4' */

    /* SignalConversion generated from: '<S7>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_4

    /* VariantMerge generated from: '<S7>/VariantSource4' */
    CTMR_ac_B.VariantMerge_For_Variant_Sour_a = rtb_MtrBBusBarTmp_p;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource4' */

    /* SignalConversion generated from: '<S7>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_3 || Rte_SysCon_Variant_CTMR_4 || Rte_SysCon_Variant_CTMR_5

    /* SignalConversion generated from: '<S7>/VariantSource4' */
    VeCTMR_T_RedmBusbar = CTMR_ac_B.VariantMerge_For_Variant_Sour_a;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource4' */

    /* SignalConversion generated from: '<S7>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_5

    /* VariantMerge generated from: '<S7>/VariantSource5' */
    CTMR_ac_B.VariantMerge_For_Variant_Sour_g = rtb_MtrCBusBarTmp;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource5' */

    /* SignalConversion generated from: '<S7>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_4

    /* VariantMerge generated from: '<S7>/VariantSource5' */
    CTMR_ac_B.VariantMerge_For_Variant_Sour_g = rtb_GpimDcBusTemp;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource5' */

    /* SignalConversion generated from: '<S7>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_3 || Rte_SysCon_Variant_CTMR_4 || Rte_SysCon_Variant_CTMR_5

    /* SignalConversion generated from: '<S7>/VariantSource5' */
    VeCTMR_T_FedmBusbar = CTMR_ac_B.VariantMerge_For_Variant_Sour_g;

#endif

    /* End of SignalConversion generated from: '<S7>/VariantSource5' */

    /* SignalConversion generated from: '<S9>/VariantSource6' incorporates:
     *  Inport: '<S57>/MtrA_Current'
     *  Inport: '<S57>/MtrB_Current'
     */
#if Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S9>/EnabledSubsystem1' */
    rtb_MtrA_Current_c = VeCTMR_I_MtrACurrent_AD;
    rtb_MtrB_Current_e = VeCTMR_I_MtrBCurrent_AD;

    /* VariantMerge generated from: '<S9>/VariantSource6' incorporates:
     *  Inport: '<S57>/MtrA_Current'
     *  Inport: '<S57>/MtrB_Current'
     *  Inport: '<S57>/MtrC_Current'
     */
    CTMR_ac_B.VariantMerge_For_Variant_Sour_i = VeCTMR_I_MtrCCurrent_AD;

    /* End of Outputs for SubSystem: '<S9>/EnabledSubsystem1' */
#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource6' */

    /* SignalConversion generated from: '<S9>/VariantSource6' incorporates:
     *  Inport: '<S58>/MtrA_Current'
     *  Inport: '<S58>/MtrB_Current'
     */
#if Rte_SysCon_Variant_CTMR_4

    /* Outputs for Atomic SubSystem: '<S9>/EnabledSubsystem2' */
    rtb_MtrA_Current = VeCTMR_I_MtrACurrent_AD;
    rtb_MtrB_Current = VeCTMR_I_MtrBCurrent_AD;

    /* VariantMerge generated from: '<S9>/VariantSource6' incorporates:
     *  Constant: '<S58>/Constant'
     *  Inport: '<S58>/MtrA_Current'
     *  Inport: '<S58>/MtrB_Current'
     */
    CTMR_ac_B.VariantMerge_For_Variant_Sour_i = 0.0F;

    /* End of Outputs for SubSystem: '<S9>/EnabledSubsystem2' */
#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource6' */

    /* SignalConversion generated from: '<S9>/VariantSource6' */
#if Rte_SysCon_Variant_CTMR_3 || Rte_SysCon_Variant_CTMR_4 || Rte_SysCon_Variant_CTMR_5

    /* SignalConversion generated from: '<S9>/VariantSource6' */
    VeCTMR_I_FedmCurrent = CTMR_ac_B.VariantMerge_For_Variant_Sour_i;

#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource6' */

    /* SignalConversion generated from: '<S9>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_5

    /* VariantMerge generated from: '<S9>/VariantSource5' */
    CTMR_ac_B.VariantMerge_For_Variant_Sou_gh = rtb_MtrB_Current_e;

#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource5' */

    /* Outputs for Atomic SubSystem: '<S8>/EnabledSubsystem' */
    /* SignalConversion generated from: '<S9>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_4

    /* Outputs for Atomic SubSystem: '<S25>/EdgeRising2' */
    /* Logic: '<S27>/OR1' incorporates:
     *  UnitDelay: '<S27>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_go;

    /* Update for UnitDelay: '<S27>/Unit Delay' incorporates:
     *  Constant: '<S25>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_go = true;

    /* Outputs for Atomic SubSystem: '<S25>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S26>/Switch1' incorporates:
     *  Logic: '<S27>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S26>/Switch1' incorporates:
         *  Constant: '<S29>/Calib'
         *  Lookup_n-D: '<S30>/Vector'
         *  MinMax: '<S25>/Max2'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S25>/Sum3'
         *  Switch: '<S4>/Switch12'
         */
        rtb_Switch1_ey = fmaxf(look2_iflf_binlcapw
                               (VeCTMR_T_HVC_Htr4ClntOut_Temp_AD,
                                VeCTMR_I_FedmCurrent, ((const float32 *)
            &(KxCTMR_T_HvbpFedmBusTmpOffsetBev[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmBusTmpOffsetBev[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmBusTmpOffsetBev[0])), CTMR_ac_ConstP.pooled5, 3U)
                               + VeCTMR_T_HvbpBduBusTemp_AD,
                               KeCTMR_T_HVBPFEDMBusbarTempInitBev);
    }
    else
    {
        /* Switch: '<S26>/Switch1' incorporates:
         *  Constant: '<S28>/Calib'
         *  Lookup_n-D: '<S30>/Vector'
         *  Product: '<S26>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S25>/Sum3'
         *  Sum: '<S26>/Subtraction'
         *  Sum: '<S26>/Summation'
         *  Switch: '<S4>/Switch12'
         *  UnitDelay: '<S26>/UnitDelay'
         */
        rtb_Switch1_ey = (((look2_iflf_binlcapw(VeCTMR_T_HVC_Htr4ClntOut_Temp_AD,
                             VeCTMR_I_FedmCurrent, ((const float32 *)
                              &(KxCTMR_T_HvbpFedmBusTmpOffsetBev[0])), ((const
                               float32 *)&(KyCTMR_T_HvbpFedmBusTmpOffsetBev[0])),
                             ((const float32 *)
                              &(KtCTMR_T_HvbpFedmBusTmpOffsetBev[0])),
                             CTMR_ac_ConstP.pooled5, 3U) +
                            VeCTMR_T_HvbpBduBusTemp_AD) -
                           CTMR_ac_DW.UnitDelay_DSTATE_mm) *
                          KeCTMR_K_HvbpFedmBusTempCoeff) +
            CTMR_ac_DW.UnitDelay_DSTATE_mm;
    }

    /* End of Switch: '<S26>/Switch1' */
    /* End of Outputs for SubSystem: '<S25>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S26>/Limiter' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S25>/Constant_Value3'
     *  RelationalOperator: '<S31>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_ey)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_Switch1_ey;
    }

    /* End of Switch: '<S31>/Switch1' */

    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S25>/ConstantValue4'
     *  RelationalOperator: '<S31>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S31>/Switch' */
        rtb_Switch1_ey = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S31>/Switch' */
        rtb_Switch1_ey = -10000.0F;
    }

    /* End of Switch: '<S31>/Switch' */
    /* End of Outputs for SubSystem: '<S26>/Limiter' */

    /* Update for UnitDelay: '<S26>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_mm = rtb_Switch1_ey;

    /* End of Outputs for SubSystem: '<S25>/DigitalLowpassResetEnabled2' */

    /* VariantMerge generated from: '<S9>/VariantSource5' */
    CTMR_ac_B.VariantMerge_For_Variant_Sou_gh = rtb_MtrB_Current;

#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource5' */
    /* End of Outputs for SubSystem: '<S8>/EnabledSubsystem' */

    /* SignalConversion generated from: '<S9>/VariantSource5' incorporates:
     *  Lookup_n-D: '<S42>/Vector'
     *  Sum: '<S22>/Sum3'
     */
#if Rte_SysCon_Variant_CTMR_3 || Rte_SysCon_Variant_CTMR_4 || Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S22>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising2' */
    /* SignalConversion generated from: '<S9>/VariantSource5' */
    VeCTMR_I_RedmCurrent = CTMR_ac_B.VariantMerge_For_Variant_Sou_gh;

    /* Logic: '<S39>/AND' incorporates:
     *  Logic: '<S39>/OR1'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ic;

    /* Update for UnitDelay: '<S39>/Unit Delay' incorporates:
     *  Constant: '<S22>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ic = true;

    /* UnitDelay: '<S38>/UnitDelay' */
    rtb_MtrB_Current_e = CTMR_ac_DW.UnitDelay_DSTATE_oy;

    /* Switch: '<S38>/Switch1' */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S41>/Calib'
         *  MinMax: '<S22>/Max2'
         *  SignalConversion generated from: '<S9>/VariantSource5'
         *  Switch: '<S4>/Switch12'
         */
        rtb_MtrB_Current_e = fmaxf(look2_iflf_binlcapw
            (VeCTMR_T_HVC_Htr4ClntOut_Temp_AD, VeCTMR_I_RedmCurrent, ((const
            float32 *)&(KxCTMR_T_HvbpRedmBusTmpOffset[0])), ((const float32 *)
            &(KyCTMR_T_HvbpRedmBusTmpOffset[0])), ((const float32 *)
            &(KtCTMR_T_HvbpRedmBusTmpOffset[0])), CTMR_ac_ConstP.pooled5, 3U) +
            VeCTMR_T_HvbpBduBusTemp_AD, KeCTMR_T_HVBPREDMBusbarTempInit);
    }
    else
    {
        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S40>/Calib'
         *  Product: '<S38>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource5'
         *  Sum: '<S38>/Subtraction'
         *  Sum: '<S38>/Summation'
         *  Switch: '<S4>/Switch12'
         */
        rtb_MtrB_Current_e += ((look2_iflf_binlcapw
                                (VeCTMR_T_HVC_Htr4ClntOut_Temp_AD,
            VeCTMR_I_RedmCurrent, ((const float32 *)
            &(KxCTMR_T_HvbpRedmBusTmpOffset[0])), ((const float32 *)
            &(KyCTMR_T_HvbpRedmBusTmpOffset[0])), ((const float32 *)
            &(KtCTMR_T_HvbpRedmBusTmpOffset[0])), CTMR_ac_ConstP.pooled5, 3U) +
                                VeCTMR_T_HvbpBduBusTemp_AD) - rtb_MtrB_Current_e)
            * KeCTMR_K_HvbpRedmBusTempCoeff;
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S38>/Limiter' */
    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S22>/ConstantValue3'
     *  RelationalOperator: '<S43>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrB_Current_e)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrB_Current_e;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S22>/ConstantValue4'
     *  RelationalOperator: '<S43>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S43>/Switch' */
        VeCTMR_T_HVBP_REDM_Busbar_Temp = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S43>/Switch' */
        VeCTMR_T_HVBP_REDM_Busbar_Temp = -10000.0F;
    }

    /* End of Switch: '<S43>/Switch' */
    /* End of Outputs for SubSystem: '<S38>/Limiter' */

    /* Update for UnitDelay: '<S38>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_oy = VeCTMR_T_HVBP_REDM_Busbar_Temp;

    /* End of Outputs for SubSystem: '<S22>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S22>/DigitalLowpassResetEnabled2' */
#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource5' */

    /* SignalConversion generated from: '<S9>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_5

    /* VariantMerge generated from: '<S9>/VariantSource4' */
    CTMR_ac_B.VariantMerge_For_Variant_Sou_a0 = rtb_MtrA_Current_c;

#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource4' */

    /* SignalConversion generated from: '<S9>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_4

    /* VariantMerge generated from: '<S9>/VariantSource4' */
    CTMR_ac_B.VariantMerge_For_Variant_Sou_a0 = rtb_MtrA_Current;

#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource4' */

    /* SignalConversion generated from: '<S9>/VariantSource4' incorporates:
     *  Lookup_n-D: '<S48>/Vector'
     *  Sum: '<S23>/Sum3'
     */
#if Rte_SysCon_Variant_CTMR_3 || Rte_SysCon_Variant_CTMR_4 || Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S23>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S23>/EdgeRising2' */
    /* SignalConversion generated from: '<S9>/VariantSource4' */
    VeCTMR_I_GenCurrent = CTMR_ac_B.VariantMerge_For_Variant_Sou_a0;

    /* Logic: '<S45>/AND' incorporates:
     *  Logic: '<S45>/OR1'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ofo;

    /* Update for UnitDelay: '<S45>/Unit Delay' incorporates:
     *  Constant: '<S23>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ofo = true;

    /* UnitDelay: '<S44>/UnitDelay' */
    rtb_MtrA_Current_c = CTMR_ac_DW.UnitDelay_DSTATE_bk;

    /* Switch: '<S44>/Switch1' */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S44>/Switch1' incorporates:
         *  Constant: '<S47>/Calib'
         *  MinMax: '<S23>/Max2'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Switch: '<S4>/Switch12'
         */
        rtb_MtrA_Current_c = fmaxf(look2_iflf_binlcapw
            (VeCTMR_T_HVC_Htr4ClntOut_Temp_AD, VeCTMR_I_GenCurrent, ((const
            float32 *)&(KxCTMR_T_BusTempOffSet[0])), ((const float32 *)
            &(KyCTMR_T_BusTempOffSet[0])), ((const float32 *)
            &(KtCTMR_T_BusTempOffSet[0])), CTMR_ac_ConstP.pooled5, 3U) +
            VeCTMR_T_HVBPBusTemp_AD, KeCTMR_T_REEVBusbarTempInit);
    }
    else
    {
        /* Switch: '<S44>/Switch1' incorporates:
         *  Constant: '<S46>/Calib'
         *  Product: '<S44>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S44>/Subtraction'
         *  Sum: '<S44>/Summation'
         *  Switch: '<S4>/Switch12'
         */
        rtb_MtrA_Current_c += ((look2_iflf_binlcapw
                                (VeCTMR_T_HVC_Htr4ClntOut_Temp_AD,
            VeCTMR_I_GenCurrent, ((const float32 *)&(KxCTMR_T_BusTempOffSet[0])),
            ((const float32 *)&(KyCTMR_T_BusTempOffSet[0])), ((const float32 *)
            &(KtCTMR_T_BusTempOffSet[0])), CTMR_ac_ConstP.pooled5, 3U) +
                                VeCTMR_T_HVBPBusTemp_AD) - rtb_MtrA_Current_c) *
            KeCTMR_K_ReevBusTempCoeff;
    }

    /* End of Switch: '<S44>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S44>/Limiter' */
    /* Switch: '<S49>/Switch1' incorporates:
     *  Constant: '<S23>/ConstantValue3'
     *  RelationalOperator: '<S49>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrA_Current_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrA_Current_c;
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S23>/ConstantValue4'
     *  RelationalOperator: '<S49>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S49>/Switch' */
        VeCTMR_T_REEV_Busbar_Temp = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S49>/Switch' */
        VeCTMR_T_REEV_Busbar_Temp = -10000.0F;
    }

    /* End of Switch: '<S49>/Switch' */
    /* End of Outputs for SubSystem: '<S44>/Limiter' */

    /* Update for UnitDelay: '<S44>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_bk = VeCTMR_T_REEV_Busbar_Temp;

    /* End of Outputs for SubSystem: '<S23>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S23>/DigitalLowpassResetEnabled2' */
#endif

    /* End of SignalConversion generated from: '<S9>/VariantSource4' */

    /* SignalConversion generated from: '<S8>/VariantSource3' */
#if Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S8>/Subsystem1' */
    /* Outputs for Atomic SubSystem: '<S50>/EdgeRising2' */
    /* Logic: '<S52>/OR1' incorporates:
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_pr;

    /* Update for UnitDelay: '<S52>/Unit Delay' incorporates:
     *  Constant: '<S50>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_pr = true;

    /* Outputs for Atomic SubSystem: '<S50>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S51>/Switch1' incorporates:
     *  Logic: '<S52>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S54>/Calib'
         *  Lookup_n-D: '<S55>/Vector'
         *  MinMax: '<S50>/Max2'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S50>/Sum3'
         *  Switch: '<S4>/Switch12'
         */
        rtb_MtrA_Current_c = fmaxf(look2_iflf_binlcapw
            (VeCTMR_T_HVC_Htr4ClntOut_Temp_AD, VeCTMR_I_FedmCurrent, ((const
            float32 *)&(KxCTMR_T_HvbpFedmBusTmpOffset[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmBusTmpOffset[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmBusTmpOffset[0])), CTMR_ac_ConstP.pooled5, 3U) +
            VeCTMR_T_HVBPBusTemp_AD, KeCTMR_T_HVBPBusbarTempPegasusInit);
    }
    else
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S53>/Calib'
         *  Lookup_n-D: '<S55>/Vector'
         *  Product: '<S51>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S50>/Sum3'
         *  Sum: '<S51>/Subtraction'
         *  Sum: '<S51>/Summation'
         *  Switch: '<S4>/Switch12'
         *  UnitDelay: '<S51>/UnitDelay'
         */
        rtb_MtrA_Current_c = (((look2_iflf_binlcapw
                                (VeCTMR_T_HVC_Htr4ClntOut_Temp_AD,
            VeCTMR_I_FedmCurrent, ((const float32 *)
            &(KxCTMR_T_HvbpFedmBusTmpOffset[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmBusTmpOffset[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmBusTmpOffset[0])), CTMR_ac_ConstP.pooled5, 3U) +
                                VeCTMR_T_HVBPBusTemp_AD) -
                               CTMR_ac_DW.UnitDelay_DSTATE_j2) *
                              KeCTMR_K_HvbpFedmBusTempCoeff) +
            CTMR_ac_DW.UnitDelay_DSTATE_j2;
    }

    /* End of Switch: '<S51>/Switch1' */
    /* End of Outputs for SubSystem: '<S50>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S51>/Limiter' */
    /* Switch: '<S56>/Switch1' incorporates:
     *  Constant: '<S50>/ConstantValue3'
     *  RelationalOperator: '<S56>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrA_Current_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrA_Current_c;
    }

    /* End of Switch: '<S56>/Switch1' */

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S50>/ConstantValue4'
     *  RelationalOperator: '<S56>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S56>/Switch' */
        rtb_MtrA_Current_c = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S56>/Switch' */
        rtb_MtrA_Current_c = -10000.0F;
    }

    /* End of Switch: '<S56>/Switch' */
    /* End of Outputs for SubSystem: '<S51>/Limiter' */

    /* Update for UnitDelay: '<S51>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_j2 = rtb_MtrA_Current_c;

    /* End of Outputs for SubSystem: '<S50>/DigitalLowpassResetEnabled2' */

    /* VariantMerge generated from: '<S8>/VariantSource3' */
    CTMR_ac_B.VariantMerge_For_Variant_Sou_gv = rtb_MtrA_Current_c;

    /* End of Outputs for SubSystem: '<S8>/Subsystem1' */
#endif

    /* End of SignalConversion generated from: '<S8>/VariantSource3' */

    /* SignalConversion generated from: '<S8>/VariantSource3' */
#if Rte_SysCon_Variant_CTMR_4

    /* VariantMerge generated from: '<S8>/VariantSource3' */
    CTMR_ac_B.VariantMerge_For_Variant_Sou_gv = rtb_Switch1_ey;

#endif

    /* End of SignalConversion generated from: '<S8>/VariantSource3' */

    /* SignalConversion generated from: '<S8>/VariantSource3' incorporates:
     *  Lookup_n-D: '<S36>/Vector'
     *  Sum: '<S21>/Sum3'
     */
#if Rte_SysCon_Variant_CTMR_3 || Rte_SysCon_Variant_CTMR_4 || Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S21>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising2' */
    /* SignalConversion generated from: '<S8>/VariantSource3' */
    rtb_SigConvForSigProp_VariantSo = CTMR_ac_B.VariantMerge_For_Variant_Sou_gv;

    /* Logic: '<S33>/AND' incorporates:
     *  Logic: '<S33>/OR1'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_fh;

    /* Update for UnitDelay: '<S33>/Unit Delay' incorporates:
     *  Constant: '<S21>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_fh = true;

    /* UnitDelay: '<S32>/UnitDelay' */
    rtb_Switch1_ey = CTMR_ac_DW.UnitDelay_DSTATE_ab;

    /* Switch: '<S32>/Switch1' */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S34>/Calib'
         *  MinMax: '<S21>/Max2'
         *  Switch: '<S4>/Switch2'
         *  Switch: '<S4>/Switch4'
         */
        rtb_Switch1_ey = fmaxf(look2_iflf_binlcapw(VeCTMR_n_EngineSpeed_AD,
                                VeCTMR_M_GenTorque_AD, ((const float32 *)
            &(KxCTMR_T_GenBusTempOffset[0])), ((const float32 *)
            &(KyCTMR_T_GenBusTempOffset[0])), ((const float32 *)
            &(KtCTMR_T_GenBusTempOffset[0])), CTMR_ac_ConstP.pooled5, 3U) +
                               VeCTMR_T_GenWindTemp_AD,
                               KeCTMR_T_GenBusbarTempInit);
    }
    else
    {
        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S35>/Calib'
         *  Product: '<S32>/Multiplication'
         *  Sum: '<S32>/Subtraction'
         *  Sum: '<S32>/Summation'
         *  Switch: '<S4>/Switch2'
         *  Switch: '<S4>/Switch4'
         */
        rtb_Switch1_ey += ((look2_iflf_binlcapw(VeCTMR_n_EngineSpeed_AD,
                             VeCTMR_M_GenTorque_AD, ((const float32 *)
                              &(KxCTMR_T_GenBusTempOffset[0])), ((const float32 *)
                              &(KyCTMR_T_GenBusTempOffset[0])), ((const float32 *)
                              &(KtCTMR_T_GenBusTempOffset[0])),
                             CTMR_ac_ConstP.pooled5, 3U) +
                            VeCTMR_T_GenWindTemp_AD) - rtb_Switch1_ey) *
            KeCTMR_k_GenBusTempCoef;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S32>/Limiter' */
    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S21>/ConstantValue3'
     *  RelationalOperator: '<S37>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_ey)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_Switch1_ey;
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Switch: '<S37>/Switch' incorporates:
     *  Constant: '<S21>/ConstantValue4'
     *  RelationalOperator: '<S37>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S37>/Switch' */
        VeCTMR_T_Gen_Busbar_Temp = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S37>/Switch' */
        VeCTMR_T_Gen_Busbar_Temp = -10000.0F;
    }

    /* End of Switch: '<S37>/Switch' */
    /* End of Outputs for SubSystem: '<S32>/Limiter' */

    /* Update for UnitDelay: '<S32>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_ab = VeCTMR_T_Gen_Busbar_Temp;

    /* End of Outputs for SubSystem: '<S21>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S21>/DigitalLowpassResetEnabled2' */
#endif

    /* End of SignalConversion generated from: '<S8>/VariantSource3' */

    /* SignalConversion generated from: '<S17>/VariantSource6' incorporates:
     *  Inport: '<S417>/MtrAUHoodTmp'
     *  Inport: '<S417>/MtrBUHoodTmp'
     */
#if Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S17>/EnabledSubsystem1' */
    rtb_MtrAUHoodTmp_c = VeCTMR_T_MtrAUHoodTmp_AD;
    rtb_MtrBUHoodTmp_b = VeCTMR_T_MtrBUHoodTmp_AD;

    /* Switch: '<S413>/Switch1' incorporates:
     *  Inport: '<S417>/MtrAUHoodTmp'
     *  Inport: '<S417>/MtrBUHoodTmp'
     *  Inport: '<S417>/MtrCUHoodTmp'
     */
    rtb_Switch1_cy = VeCTMR_T_MtrCUHoodTmp_AD;

    /* End of Outputs for SubSystem: '<S17>/EnabledSubsystem1' */
#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource6' */

    /* SignalConversion generated from: '<S17>/VariantSource6' incorporates:
     *  Inport: '<S418>/MtrBUHoodTmp'
     */
#if Rte_SysCon_Variant_CTMR_4

    /* Outputs for Atomic SubSystem: '<S17>/EnabledSubsystem2' */
    rtb_MtrBUHoodTmp = VeCTMR_T_MtrBUHoodTmp_AD;

    /* Switch: '<S413>/Switch1' incorporates:
     *  Inport: '<S418>/MtrAUHoodTmp'
     *  Inport: '<S418>/MtrBUHoodTmp'
     */
    rtb_Switch1_cy = VeCTMR_T_MtrAUHoodTmp_AD;

    /* End of Outputs for SubSystem: '<S17>/EnabledSubsystem2' */
#elif !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5

    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S419>/Constant2'
     *  SignalConversion generated from: '<S17>/VariantSource6'
     */
    rtb_Switch1_cy = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource6' */

    /* SignalConversion generated from: '<S17>/VariantSource6' */
    VeCTMR_T_FedmUnderhoodAirTemp = rtb_Switch1_cy;

    /* Outputs for Atomic SubSystem: '<S59>/EdgeRising2' */
    /* Logic: '<S63>/OR1' incorporates:
     *  UnitDelay: '<S63>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_a2;

    /* Update for UnitDelay: '<S63>/Unit Delay' incorporates:
     *  Constant: '<S59>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_a2 = true;

    /* End of Outputs for SubSystem: '<S59>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S59>/DigitalLowpassResetEnabled2' */
    /* UnitDelay: '<S62>/UnitDelay' */
    rtb_Switch1_ey = CTMR_ac_DW.UnitDelay_DSTATE_ka;

    /* Outputs for Atomic SubSystem: '<S59>/EdgeRising2' */
    /* Switch: '<S62>/Switch1' incorporates:
     *  Logic: '<S63>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Constant: '<S64>/Calib'
         *  Lookup_n-D: '<S65>/Vector'
         *  MinMax: '<S59>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Switch: '<S4>/Switch11'
         */
        rtb_Switch1_ey = fmaxf(look2_iflf_binlcapw(VeCTMR_T_ExhTemp_AD,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_FedmExhSS[0])), ((const float32 *)&(KyCTMR_T_FedmExhSS[0])),
                                ((const float32 *)&(KtCTMR_T_FedmExhSS[0])),
                                CTMR_ac_ConstP.pooled6, 6U),
                               KeCTMR_T_FEDMExhSurfTempInit);
    }
    else
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Lookup_n-D: '<S65>/Vector'
         *  Lookup_n-D: '<S66>/Vector'
         *  Product: '<S62>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Sum: '<S62>/Subtraction'
         *  Sum: '<S62>/Summation'
         *  Switch: '<S4>/Switch11'
         *  Switch: '<S4>/Switch8'
         */
        rtb_Switch1_ey += (look2_iflf_binlcapw(VeCTMR_T_ExhTemp_AD,
                            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                             &(KxCTMR_T_FedmExhSS[0])), ((const float32 *)
                             &(KyCTMR_T_FedmExhSS[0])), ((const float32 *)
                             &(KtCTMR_T_FedmExhSS[0])), CTMR_ac_ConstP.pooled6,
                            6U) - rtb_Switch1_ey) * look1_iflf_binlcapw
            (VeCTMR_v_VehSpd_AD, ((const float32 *)&(KxCTMR_T_FedmExhThermCoeff
               [0])), ((const float32 *)&(KtCTMR_T_FedmExhThermCoeff[0])), 5U);
    }

    /* End of Switch: '<S62>/Switch1' */
    /* End of Outputs for SubSystem: '<S59>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S62>/Limiter' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S59>/ConstantValue3'
     *  RelationalOperator: '<S67>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_ey)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_Switch1_ey;
    }

    /* End of Switch: '<S67>/Switch1' */

    /* Switch: '<S67>/Switch' incorporates:
     *  Constant: '<S59>/ConstantValue4'
     *  RelationalOperator: '<S67>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S67>/Switch' */
        VeCTMR_T_FEDM_Exh_Surf_Temp = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S67>/Switch' */
        VeCTMR_T_FEDM_Exh_Surf_Temp = -10000.0F;
    }

    /* End of Switch: '<S67>/Switch' */
    /* End of Outputs for SubSystem: '<S62>/Limiter' */

    /* Update for UnitDelay: '<S62>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_ka = VeCTMR_T_FEDM_Exh_Surf_Temp;

    /* End of Outputs for SubSystem: '<S59>/DigitalLowpassResetEnabled2' */

    /* SignalConversion generated from: '<S17>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_5

    /* Switch: '<S413>/Switch1' */
    rtb_Switch1_cy = rtb_MtrAUHoodTmp_c;

#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource4' */

    /* SignalConversion generated from: '<S17>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_4

    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S418>/Constant2'
     */
    rtb_Switch1_cy = 0.0F;

#elif !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5

    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S419>/Constant'
     *  SignalConversion generated from: '<S17>/VariantSource4'
     */
    rtb_Switch1_cy = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource4' */

    /* SignalConversion generated from: '<S17>/VariantSource4' */
    VeCTMR_T_GenUnderhoodAirTemp = rtb_Switch1_cy;

    /* Outputs for Atomic SubSystem: '<S60>/EdgeRising2' */
    /* Logic: '<S69>/OR1' incorporates:
     *  UnitDelay: '<S69>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_jv;

    /* Update for UnitDelay: '<S69>/Unit Delay' incorporates:
     *  Constant: '<S60>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_jv = true;

    /* End of Outputs for SubSystem: '<S60>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S60>/DigitalLowpassResetEnabled2' */
    /* UnitDelay: '<S68>/UnitDelay' */
    rtb_MtrAUHoodTmp_c = CTMR_ac_DW.UnitDelay_DSTATE_iu;

    /* Outputs for Atomic SubSystem: '<S60>/EdgeRising2' */
    /* Switch: '<S68>/Switch1' incorporates:
     *  Logic: '<S69>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Constant: '<S70>/Calib'
         *  Lookup_n-D: '<S72>/Vector'
         *  MinMax: '<S60>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Switch: '<S4>/Switch11'
         */
        rtb_MtrAUHoodTmp_c = fmaxf(look2_iflf_binlcapw(VeCTMR_T_ExhTemp_AD,
            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_GenExhSurfaceSS[0])), ((const float32 *)
            &(KyCTMR_T_GenExhSurfaceSS[0])), ((const float32 *)
            &(KtCTMR_T_GenExhSurfaceSS[0])), CTMR_ac_ConstP.pooled6, 6U),
            KeCTMR_T_GenExhSurfTempInit);
    }
    else
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Lookup_n-D: '<S71>/Vector'
         *  Lookup_n-D: '<S72>/Vector'
         *  Product: '<S68>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Sum: '<S68>/Subtraction'
         *  Sum: '<S68>/Summation'
         *  Switch: '<S4>/Switch11'
         *  Switch: '<S4>/Switch8'
         */
        rtb_MtrAUHoodTmp_c += (look2_iflf_binlcapw(VeCTMR_T_ExhTemp_AD,
                                VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_GenExhSurfaceSS[0])), ((const float32 *)
            &(KyCTMR_T_GenExhSurfaceSS[0])), ((const float32 *)
            &(KtCTMR_T_GenExhSurfaceSS[0])), CTMR_ac_ConstP.pooled6, 6U) -
                               rtb_MtrAUHoodTmp_c) * look1_iflf_binlcapw
            (VeCTMR_v_VehSpd_AD, ((const float32 *)
              &(KxCTMR_K_GenExhSufThermalCoeff[0])), ((const float32 *)
              &(KtCTMR_K_GenExhSufThermalCoeff[0])), 5U);
    }

    /* End of Switch: '<S68>/Switch1' */
    /* End of Outputs for SubSystem: '<S60>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S68>/Limiter' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S60>/ConstantValue3'
     *  RelationalOperator: '<S73>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrAUHoodTmp_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrAUHoodTmp_c;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S60>/ConstantValue4'
     *  RelationalOperator: '<S73>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S73>/Switch' */
        VeCTMR_T_Gen_Exh_Surf_Temp = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S73>/Switch' */
        VeCTMR_T_Gen_Exh_Surf_Temp = -10000.0F;
    }

    /* End of Switch: '<S73>/Switch' */
    /* End of Outputs for SubSystem: '<S68>/Limiter' */

    /* Update for UnitDelay: '<S68>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_iu = VeCTMR_T_Gen_Exh_Surf_Temp;

    /* End of Outputs for SubSystem: '<S60>/DigitalLowpassResetEnabled2' */

    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S76>/Calib'
     *  RelationalOperator: '<S61>/Comparison'
     */
    if (VeCTMR_x_AadPos_AD > KeCTMR_Pct_AADRetreatPosition)
    {
        /* Switch: '<S61>/Switch' incorporates:
         *  Lookup_n-D: '<S78>/Vector'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Switch: '<S4>/Switch11'
         */
        VeCTMR_T_PDC_Exh_Surf_TempSS = look2_iflf_binlcapw(VeCTMR_T_ExhTemp_AD,
            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_PdcExhSurSSAadDeploy[0])), ((const float32 *)
            &(KyCTMR_T_PdcExhSurSSAadDeploy[0])), ((const float32 *)
            &(KtCTMR_T_PdcExhSurSSAadDeploy[0])), CTMR_ac_ConstP.pooled6, 6U);
    }
    else
    {
        /* Switch: '<S61>/Switch' incorporates:
         *  Lookup_n-D: '<S79>/Vector'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Switch: '<S4>/Switch11'
         */
        VeCTMR_T_PDC_Exh_Surf_TempSS = look2_iflf_binlcapw(VeCTMR_T_ExhTemp_AD,
            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_PdcExhSurSSAadRetreat[0])), ((const float32 *)
            &(KyCTMR_T_PdcExhSurSSAadRetreat[0])), ((const float32 *)
            &(KtCTMR_T_PdcExhSurSSAadRetreat[0])), CTMR_ac_ConstP.pooled6, 6U);
    }

    /* End of Switch: '<S61>/Switch' */

    /* Outputs for Atomic SubSystem: '<S61>/EdgeRising2' */
    /* Logic: '<S75>/OR1' incorporates:
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_cx;

    /* Update for UnitDelay: '<S75>/Unit Delay' incorporates:
     *  Constant: '<S61>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_cx = true;

    /* End of Outputs for SubSystem: '<S61>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S61>/DigitalLowpassResetEnabled2' */
    /* UnitDelay: '<S74>/UnitDelay' */
    rtb_MtrAUHoodTmp_c = CTMR_ac_DW.UnitDelay_DSTATE_mb;

    /* Outputs for Atomic SubSystem: '<S61>/EdgeRising2' */
    /* Switch: '<S74>/Switch1' incorporates:
     *  Logic: '<S75>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S74>/Switch1' incorporates:
         *  Constant: '<S77>/Calib'
         *  MinMax: '<S61>/Max2'
         */
        rtb_MtrAUHoodTmp_c = fmaxf(VeCTMR_T_PDC_Exh_Surf_TempSS,
            KeCTMR_T_PdcExhSurfTempInit);
    }
    else
    {
        /* Switch: '<S74>/Switch1' incorporates:
         *  Lookup_n-D: '<S80>/Vector'
         *  Product: '<S74>/Multiplication'
         *  Sum: '<S74>/Subtraction'
         *  Sum: '<S74>/Summation'
         *  Switch: '<S4>/Switch8'
         */
        rtb_MtrAUHoodTmp_c += (VeCTMR_T_PDC_Exh_Surf_TempSS - rtb_MtrAUHoodTmp_c)
            * look1_iflf_binlcapw(VeCTMR_v_VehSpd_AD, ((const float32 *)
            &(KxCTMR_T_PdcSurfThmrCoef[0])), ((const float32 *)
            &(KtCTMR_T_PdcSurfThmrCoef[0])), 5U);
    }

    /* End of Switch: '<S74>/Switch1' */
    /* End of Outputs for SubSystem: '<S61>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S74>/Limiter' */
    /* Switch: '<S81>/Switch1' incorporates:
     *  Constant: '<S61>/ConstantValue3'
     *  RelationalOperator: '<S81>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrAUHoodTmp_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrAUHoodTmp_c;
    }

    /* End of Switch: '<S81>/Switch1' */

    /* Switch: '<S81>/Switch' incorporates:
     *  Constant: '<S61>/ConstantValue4'
     *  RelationalOperator: '<S81>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S81>/Switch' */
        VeCTMR_T_PDC_Exh_Surf_Temp = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S81>/Switch' */
        VeCTMR_T_PDC_Exh_Surf_Temp = -10000.0F;
    }

    /* End of Switch: '<S81>/Switch' */
    /* End of Outputs for SubSystem: '<S74>/Limiter' */

    /* Update for UnitDelay: '<S74>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_mb = VeCTMR_T_PDC_Exh_Surf_Temp;

    /* End of Outputs for SubSystem: '<S61>/DigitalLowpassResetEnabled2' */
#if Rte_SysCon_Variant_CTMR_4

    /* Outputs for Atomic SubSystem: '<S12>/FEDM_BEV' */
    /* Outputs for Atomic SubSystem: '<S85>/EdgeRising' */
    /* Logic: '<S89>/OR1' incorporates:
     *  UnitDelay: '<S89>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_jn;

    /* Update for UnitDelay: '<S89>/Unit Delay' incorporates:
     *  Constant: '<S85>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_jn = true;

    /* Outputs for Atomic SubSystem: '<S85>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S88>/Switch1' incorporates:
     *  Logic: '<S89>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Constant: '<S90>/Calib'
         *  Lookup_n-D: '<S92>/Vector'
         *  Lookup_n-D: '<S93>/Vector'
         *  MinMax: '<S85>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S7>/VariantSource5'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S85>/Sum25'
         */
        rtb_Switch1_fc = fmaxf(look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_FedmEleTmpSSConnClmpMtrA[0])), ((const float32 *)
            &(KyCTMR_T_FedmEleTmpSSConnClmpMtrA[0])), ((const float32 *)
            &(KtCTMR_T_FedmEleTmpSSConnClmpMtrA[0])), CTMR_ac_ConstP.pooled6, 6U)
                               + look1_iflf_binlcapw(VeCTMR_T_FedmBusbar, ((
            const float32 *)&(KxCTMR_T_FedmConClmpBBusAdjMtrA[0])), ((const
            float32 *)&(KtCTMR_T_FedmConClmpBBusAdjMtrA[0])), 6U),
                               KeCTMR_T_FedmConClmpInitTempMtrA);
    }
    else
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Lookup_n-D: '<S91>/Vector'
         *  Lookup_n-D: '<S92>/Vector'
         *  Lookup_n-D: '<S93>/Vector'
         *  Product: '<S88>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S7>/VariantSource5'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S85>/Sum25'
         *  Sum: '<S88>/Subtraction'
         *  Sum: '<S88>/Summation'
         *  UnitDelay: '<S88>/UnitDelay'
         */
        rtb_Switch1_fc = (((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                             VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                              &(KxCTMR_T_FedmEleTmpSSConnClmpMtrA[0])), ((const
                               float32 *)&(KyCTMR_T_FedmEleTmpSSConnClmpMtrA[0])),
                             ((const float32 *)
                              &(KtCTMR_T_FedmEleTmpSSConnClmpMtrA[0])),
                             CTMR_ac_ConstP.pooled6, 6U) + look1_iflf_binlcapw
                            (VeCTMR_T_FedmBusbar, ((const float32 *)
                              &(KxCTMR_T_FedmConClmpBBusAdjMtrA[0])), ((const
                               float32 *)&(KtCTMR_T_FedmConClmpBBusAdjMtrA[0])),
                             6U)) - CTMR_ac_DW.UnitDelay_DSTATE_nx) *
                          look1_iflf_binlcapw(VeCTMR_I_FedmCurrent, ((const
                             float32 *)&(KxCTMR_T_FedmCoClmpThrmCoeffMtrA[0])),
                           ((const float32 *)&(KtCTMR_T_FedmCoClmpThrmCoeffMtrA
                             [0])), 5U)) + CTMR_ac_DW.UnitDelay_DSTATE_nx;
    }

    /* End of Switch: '<S88>/Switch1' */
    /* End of Outputs for SubSystem: '<S85>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S88>/Limiter' */
    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S85>/ConstantValue3'
     *  RelationalOperator: '<S94>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_fc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_Switch1_fc;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S85>/ConstantValue4'
     *  RelationalOperator: '<S94>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S94>/Switch' */
        rtb_Switch1_fc = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S94>/Switch' */
        rtb_Switch1_fc = -10000.0F;
    }

    /* End of Switch: '<S94>/Switch' */
    /* End of Outputs for SubSystem: '<S88>/Limiter' */

    /* Update for UnitDelay: '<S88>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_nx = rtb_Switch1_fc;

    /* End of Outputs for SubSystem: '<S85>/DigitalLowpassResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S86>/EdgeRising' */
    /* Logic: '<S96>/OR1' incorporates:
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_b0;

    /* Update for UnitDelay: '<S96>/Unit Delay' incorporates:
     *  Constant: '<S86>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_b0 = true;

    /* Outputs for Atomic SubSystem: '<S86>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Logic: '<S96>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S97>/Calib'
         *  Lookup_n-D: '<S100>/Vector'
         *  Lookup_n-D: '<S99>/Vector'
         *  MinMax: '<S86>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S8>/VariantSource3'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S86>/Sum1'
         */
        rtb_Switch1_gs = fmaxf(look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KyCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[0])), ((const float32 *)
            &(KxCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[0])), CTMR_ac_ConstP.pooled6,
                                6U) + look1_iflf_binlcapw
                               (rtb_SigConvForSigProp_VariantSo, ((const float32
            *)&(KyCTMR_T_HvpbFedmConCmpBusAdjMtrA[0])), ((const float32 *)
            &(KtCTMR_T_HvpbFedmConCmpBusAdjMtrA[0])), 6U),
                               KeCTMR_T_HvbpFedmConClmpInitTempMtrA);
    }
    else
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Lookup_n-D: '<S100>/Vector'
         *  Lookup_n-D: '<S98>/Vector'
         *  Lookup_n-D: '<S99>/Vector'
         *  Product: '<S95>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S8>/VariantSource3'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S86>/Sum1'
         *  Sum: '<S95>/Subtraction'
         *  Sum: '<S95>/Summation'
         *  UnitDelay: '<S95>/UnitDelay'
         */
        rtb_Switch1_gs = (((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                             VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                              &(KyCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[0])), ((
                               const float32 *)
                              &(KxCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[0])), ((
                               const float32 *)
                              &(KtCTMR_T_HvbpFedmEleTmpSSConCmpMtrA[0])),
                             CTMR_ac_ConstP.pooled6, 6U) + look1_iflf_binlcapw
                            (rtb_SigConvForSigProp_VariantSo, ((const float32 *)
                              &(KyCTMR_T_HvpbFedmConCmpBusAdjMtrA[0])), ((const
                               float32 *)&(KtCTMR_T_HvpbFedmConCmpBusAdjMtrA[0])),
                             6U)) - CTMR_ac_DW.UnitDelay_DSTATE_pw) *
                          look1_iflf_binlcapw(VeCTMR_I_FedmCurrent, ((const
                             float32 *)&(KxCTMR_T_HvbpFedmConCmpThrmCoefMtrA[0])),
                           ((const float32 *)
                            &(KtCTMR_T_HvbpFedmConCmpThrmCoefMtrA[0])), 5U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_pw;
    }

    /* End of Switch: '<S95>/Switch1' */
    /* End of Outputs for SubSystem: '<S86>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S95>/Limiter' */
    /* Switch: '<S101>/Switch1' incorporates:
     *  Constant: '<S86>/ConstantValue3'
     *  RelationalOperator: '<S101>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_gs)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_Switch1_gs;
    }

    /* End of Switch: '<S101>/Switch1' */

    /* Switch: '<S101>/Switch' incorporates:
     *  Constant: '<S86>/ConstantValue4'
     *  RelationalOperator: '<S101>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S101>/Switch' */
        rtb_Switch1_gs = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S101>/Switch' */
        rtb_Switch1_gs = -10000.0F;
    }

    /* End of Switch: '<S101>/Switch' */
    /* End of Outputs for SubSystem: '<S95>/Limiter' */

    /* Update for UnitDelay: '<S95>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_pw = rtb_Switch1_gs;

    /* End of Outputs for SubSystem: '<S86>/DigitalLowpassResetEnabled2' */
    /* End of Outputs for SubSystem: '<S12>/FEDM_BEV' */
#endif

    /* SignalConversion generated from: '<S12>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S12>/Gen_REPB' */
    /* UnitDelay: '<S114>/UnitDelay1' */
    VeCTMR_T_GPIMACConnClampShieldTempPrev = CTMR_ac_DW.UnitDelay1_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising1' */
    /* Logic: '<S124>/OR1' incorporates:
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_nxb;

    /* Update for UnitDelay: '<S124>/Unit Delay' incorporates:
     *  Constant: '<S114>/TRUEConstant1'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_nxb = true;

    /* End of Outputs for SubSystem: '<S114>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S114>/DigitalLowpassResetEnabled1' */
    /* UnitDelay: '<S118>/UnitDelay' */
    rtb_MtrAUHoodTmp_c = CTMR_ac_DW.UnitDelay_DSTATE_gn;

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising1' */
    /* Switch: '<S118>/Switch1' incorporates:
     *  Logic: '<S124>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S134>/Calib'
         *  Lookup_n-D: '<S143>/Vector'
         *  MinMax: '<S114>/Max1'
         *  Switch: '<S73>/Switch'
         *  UnitDelay: '<S114>/UnitDelay1'
         */
        rtb_MtrAUHoodTmp_c = fmaxf(look2_iflf_binlcapw
            (VeCTMR_T_Gen_Exh_Surf_Temp, VeCTMR_T_GPIMACConnClampShieldTempPrev,
             ((const float32 *)&(KxCTMR_T_GpimAcExhRadSS[0])), ((const float32 *)
            &(KyCTMR_T_GpimAcExhRadSS[0])), ((const float32 *)
            &(KtCTMR_T_GpimAcExhRadSS[0])), CTMR_ac_ConstP.pooled7, 8U),
            KeCTMR_T_RepbGpimAcExhAdjInit);
    }
    else
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S129>/Calib'
         *  Lookup_n-D: '<S143>/Vector'
         *  Product: '<S118>/Multiplication'
         *  Sum: '<S118>/Subtraction'
         *  Sum: '<S118>/Summation'
         *  Switch: '<S73>/Switch'
         *  UnitDelay: '<S114>/UnitDelay1'
         */
        rtb_MtrAUHoodTmp_c += (look2_iflf_binlcapw(VeCTMR_T_Gen_Exh_Surf_Temp,
                                VeCTMR_T_GPIMACConnClampShieldTempPrev, ((const
            float32 *)&(KxCTMR_T_GpimAcExhRadSS[0])), ((const float32 *)
            &(KyCTMR_T_GpimAcExhRadSS[0])), ((const float32 *)
            &(KtCTMR_T_GpimAcExhRadSS[0])), CTMR_ac_ConstP.pooled7, 8U) -
                               rtb_MtrAUHoodTmp_c) * KeCTMR_K_GpimAcExhRadTherm;
    }

    /* End of Switch: '<S118>/Switch1' */
    /* End of Outputs for SubSystem: '<S114>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S118>/Limiter' */
    /* Switch: '<S144>/Switch1' incorporates:
     *  Constant: '<S114>/ConstantValue1'
     *  RelationalOperator: '<S144>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrAUHoodTmp_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrAUHoodTmp_c;
    }

    /* End of Switch: '<S144>/Switch1' */

    /* Switch: '<S144>/Switch' incorporates:
     *  Constant: '<S114>/ConstantValue2'
     *  RelationalOperator: '<S144>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S144>/Switch' */
        VeCTMR_T_GPIMACExhTempADJ = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S144>/Switch' */
        VeCTMR_T_GPIMACExhTempADJ = -10000.0F;
    }

    /* End of Switch: '<S144>/Switch' */
    /* End of Outputs for SubSystem: '<S118>/Limiter' */

    /* Update for UnitDelay: '<S118>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_gn = VeCTMR_T_GPIMACExhTempADJ;

    /* End of Outputs for SubSystem: '<S114>/DigitalLowpassResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising' */
    /* Logic: '<S123>/OR1' incorporates:
     *  UnitDelay: '<S123>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ou;

    /* Update for UnitDelay: '<S123>/Unit Delay' incorporates:
     *  Constant: '<S114>/TRUEConstant6'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ou = true;

    /* Outputs for Atomic SubSystem: '<S114>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S119>/Switch1' incorporates:
     *  Logic: '<S123>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S130>/Calib'
         *  Lookup_n-D: '<S137>/Vector'
         *  Lookup_n-D: '<S142>/Vector'
         *  MinMax: '<S114>/Max4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S114>/Sum4'
         *  Switch: '<S4>/Switch14'
         *  UnitDelay: '<S114>/UnitDelay1'
         */
        rtb_MtrAUHoodTmp_c = fmaxf(look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
            VeCTMR_T_GPIMACConnClampShieldTempPrev, ((const float32 *)
            &(KxCTMR_T_GpimAcEleTempSSConCmp[0])), ((const float32 *)
            &(KyCTMR_T_GpimAcEleTempSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_GpimAcEleTempSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
            look1_iflf_binlcapw(VeCTMR_T_GpimAcBusTemp_AD, ((const float32 *)
            &(KxCTMR_T_GpimAcConCmpBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_GpimAcConCmpBusAdj[0])), 6U),
            KeCTMR_T_RepbGpimAcConClmpInit);
    }
    else
    {
        /* Switch: '<S119>/Switch1' incorporates:
         *  Lookup_n-D: '<S137>/Vector'
         *  Lookup_n-D: '<S138>/Vector'
         *  Lookup_n-D: '<S142>/Vector'
         *  Product: '<S119>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S114>/Sum4'
         *  Sum: '<S119>/Subtraction'
         *  Sum: '<S119>/Summation'
         *  Switch: '<S4>/Switch14'
         *  UnitDelay: '<S114>/UnitDelay1'
         *  UnitDelay: '<S119>/UnitDelay'
         */
        rtb_MtrAUHoodTmp_c = (((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
            VeCTMR_T_GPIMACConnClampShieldTempPrev, ((const float32 *)
            &(KxCTMR_T_GpimAcEleTempSSConCmp[0])), ((const float32 *)
            &(KyCTMR_T_GpimAcEleTempSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_GpimAcEleTempSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
                                look1_iflf_binlcapw(VeCTMR_T_GpimAcBusTemp_AD,
            ((const float32 *)&(KxCTMR_T_GpimAcConCmpBusAdj[0])), ((const
            float32 *)&(KtCTMR_T_GpimAcConCmpBusAdj[0])), 6U)) -
                               CTMR_ac_DW.UnitDelay_DSTATE_b) *
                              look1_iflf_binlcapw(VeCTMR_I_GenCurrent, ((const
            float32 *)&(KxCTMR_T_GpimAcConCmpThermCoef[0])), ((const float32 *)
                                &(KtCTMR_T_GpimAcConCmpThermCoef[0])), 5U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S119>/Switch1' */
    /* End of Outputs for SubSystem: '<S114>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S119>/Limiter' */
    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<S114>/ConstantValue3'
     *  RelationalOperator: '<S145>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrAUHoodTmp_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrAUHoodTmp_c;
    }

    /* End of Switch: '<S145>/Switch1' */

    /* Switch: '<S145>/Switch' incorporates:
     *  Constant: '<S114>/ConstantValue4'
     *  RelationalOperator: '<S145>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S145>/Switch' */
        rtb_MtrAUHoodTmp_c = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S145>/Switch' */
        rtb_MtrAUHoodTmp_c = -10000.0F;
    }

    /* End of Switch: '<S145>/Switch' */
    /* End of Outputs for SubSystem: '<S119>/Limiter' */

    /* Update for UnitDelay: '<S119>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_b = rtb_MtrAUHoodTmp_c;

    /* End of Outputs for SubSystem: '<S114>/DigitalLowpassResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising3' */
    /* Logic: '<S126>/OR1' incorporates:
     *  UnitDelay: '<S126>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_la;

    /* Update for UnitDelay: '<S126>/Unit Delay' incorporates:
     *  Constant: '<S114>/TRUEConstant3'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_la = true;

    /* Outputs for Atomic SubSystem: '<S114>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S121>/Switch1' incorporates:
     *  Logic: '<S126>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S121>/Switch1' incorporates:
         *  Constant: '<S132>/Calib'
         *  Lookup_n-D: '<S139>/Vector'
         *  MinMax: '<S114>/Max3'
         *  Switch: '<S4>/Switch14'
         */
        rtb_Switch1_ey = fmaxf(look1_iflf_binlcapw(VeCTMR_T_GpimAcBusTemp_AD, ((
            const float32 *)&(KxCTMR_T_GpimAcConHoShBusAdj[0])), ((const float32
            *)&(KtCTMR_T_GpimAcConHoShBusAdj[0])), 6U),
                               KeCTMR_T_RepbGpimAcConHldrSh1Init);
    }
    else
    {
        /* Switch: '<S121>/Switch1' incorporates:
         *  Constant: '<S128>/Calib'
         *  Lookup_n-D: '<S139>/Vector'
         *  Product: '<S121>/Multiplication'
         *  Sum: '<S121>/Subtraction'
         *  Sum: '<S121>/Summation'
         *  Switch: '<S4>/Switch14'
         *  UnitDelay: '<S121>/UnitDelay'
         */
        rtb_Switch1_ey = ((look1_iflf_binlcapw(VeCTMR_T_GpimAcBusTemp_AD, ((
                              const float32 *)&(KxCTMR_T_GpimAcConHoShBusAdj[0])),
                            ((const float32 *)&(KtCTMR_T_GpimAcConHoShBusAdj[0])),
                            6U) - CTMR_ac_DW.UnitDelay_DSTATE_ja) *
                          KeCTMR_K_GpimAcBusAdjCoef) +
            CTMR_ac_DW.UnitDelay_DSTATE_ja;
    }

    /* End of Switch: '<S121>/Switch1' */
    /* End of Outputs for SubSystem: '<S114>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S121>/Limiter' */
    /* Switch: '<S147>/Switch1' incorporates:
     *  Constant: '<S114>/ConstantValue10'
     *  RelationalOperator: '<S147>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_ey)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_Switch1_ey;
    }

    /* End of Switch: '<S147>/Switch1' */

    /* Switch: '<S147>/Switch' incorporates:
     *  Constant: '<S114>/ConstantValue11'
     *  RelationalOperator: '<S147>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S147>/Switch' */
        rtb_Switch1_ey = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S147>/Switch' */
        rtb_Switch1_ey = -10000.0F;
    }

    /* End of Switch: '<S147>/Switch' */
    /* End of Outputs for SubSystem: '<S121>/Limiter' */

    /* Update for UnitDelay: '<S121>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_ja = rtb_Switch1_ey;

    /* End of Outputs for SubSystem: '<S114>/DigitalLowpassResetEnabled4' */

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising4' */
    /* Logic: '<S127>/OR1' incorporates:
     *  UnitDelay: '<S127>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_fp;

    /* Update for UnitDelay: '<S127>/Unit Delay' incorporates:
     *  Constant: '<S114>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_fp = true;

    /* Outputs for Atomic SubSystem: '<S114>/DigitalLowpassResetEnabled5' */
    /* Switch: '<S122>/Switch1' incorporates:
     *  Logic: '<S127>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S122>/Switch1' incorporates:
         *  Constant: '<S133>/Calib'
         *  Lookup_n-D: '<S141>/Vector'
         *  MinMax: '<S114>/Max5'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         */
        rtb_MtrA_Current_c = fmaxf(look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_GpimAcEleEmcssConHoSh[0])), ((const float32 *)
            &(KyCTMR_T_GpimAcEleEmcssConHoSh[0])), ((const float32 *)
            &(KtCTMR_T_GpimAcEleEmcssConHoSh[0])), CTMR_ac_ConstP.pooled8, 5U),
            KeCTMR_T_RepbGpimAcConHldrSh2Init);
    }
    else
    {
        /* Switch: '<S122>/Switch1' incorporates:
         *  Lookup_n-D: '<S140>/Vector'
         *  Lookup_n-D: '<S141>/Vector'
         *  Product: '<S122>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S122>/Subtraction'
         *  Sum: '<S122>/Summation'
         *  UnitDelay: '<S122>/UnitDelay'
         */
        rtb_MtrA_Current_c = ((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
                                VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_GpimAcEleEmcssConHoSh[0])), ((const float32 *)
            &(KyCTMR_T_GpimAcEleEmcssConHoSh[0])), ((const float32 *)
            &(KtCTMR_T_GpimAcEleEmcssConHoSh[0])), CTMR_ac_ConstP.pooled8, 5U) -
                               CTMR_ac_DW.UnitDelay_DSTATE_hh) *
                              look1_iflf_binlcapw(VeCTMR_I_GenCurrent, ((const
            float32 *)&(KxCTMR_T_GpimAcConHoShThermCoef[0])), ((const float32 *)
                                &(KtCTMR_T_GpimAcConHoShThermCoef[0])), 6U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_hh;
    }

    /* End of Switch: '<S122>/Switch1' */
    /* End of Outputs for SubSystem: '<S114>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S122>/Limiter' */
    /* Switch: '<S148>/Switch1' incorporates:
     *  Constant: '<S114>/ConstantValue13'
     *  RelationalOperator: '<S148>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrA_Current_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrA_Current_c;
    }

    /* End of Switch: '<S148>/Switch1' */

    /* Switch: '<S148>/Switch' incorporates:
     *  Constant: '<S114>/ConstantValue14'
     *  RelationalOperator: '<S148>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S148>/Switch' */
        rtb_MtrA_Current_c = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S148>/Switch' */
        rtb_MtrA_Current_c = -10000.0F;
    }

    /* End of Switch: '<S148>/Switch' */
    /* End of Outputs for SubSystem: '<S122>/Limiter' */

    /* Update for UnitDelay: '<S122>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_hh = rtb_MtrA_Current_c;

    /* End of Outputs for SubSystem: '<S114>/DigitalLowpassResetEnabled5' */

    /* Sum: '<S114>/Sum3' */
    VeCTMR_T_GPIMACConnHolderShieldTemp = (rtb_Switch1_ey +
        VeCTMR_T_GPIMACExhTempADJ) + rtb_MtrA_Current_c;

    /* Outputs for Atomic SubSystem: '<S114>/EdgeRising2' */
    /* Logic: '<S125>/OR1' incorporates:
     *  UnitDelay: '<S125>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_l5;

    /* Update for UnitDelay: '<S125>/Unit Delay' incorporates:
     *  Constant: '<S114>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_l5 = true;

    /* Outputs for Atomic SubSystem: '<S114>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S120>/Switch1' incorporates:
     *  Logic: '<S125>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S120>/Switch1' incorporates:
         *  Constant: '<S131>/Calib'
         *  Lookup_n-D: '<S136>/Vector'
         *  MinMax: '<S114>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Sum: '<S114>/Sum3'
         */
        rtb_Switch1_ey = fmaxf(look2_iflf_binlcapw
                               (VeCTMR_T_GPIMACConnHolderShieldTemp,
                                VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_K_GpimAcEleEmcssConCmpSh[0])), ((const float32 *)
            &(KyCTMR_K_GpimAcEleEmcssConCmpSh[0])), ((const float32 *)
            &(KtCTMR_K_GpimAcEleEmcssConCmpSh[0])), CTMR_ac_ConstP.pooled9, 7U),
                               KeCTMR_T_RepbGpimAcConClmpShPrevInit);
    }
    else
    {
        /* Switch: '<S120>/Switch1' incorporates:
         *  Lookup_n-D: '<S135>/Vector'
         *  Lookup_n-D: '<S136>/Vector'
         *  Product: '<S120>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Sum: '<S114>/Sum3'
         *  Sum: '<S120>/Subtraction'
         *  Sum: '<S120>/Summation'
         *  UnitDelay: '<S120>/UnitDelay'
         */
        rtb_Switch1_ey = ((look2_iflf_binlcapw
                           (VeCTMR_T_GPIMACConnHolderShieldTemp,
                            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
                             &(KxCTMR_K_GpimAcEleEmcssConCmpSh[0])), ((const
                              float32 *)&(KyCTMR_K_GpimAcEleEmcssConCmpSh[0])),
                            ((const float32 *)&(KtCTMR_K_GpimAcEleEmcssConCmpSh
                              [0])), CTMR_ac_ConstP.pooled9, 7U) -
                           CTMR_ac_DW.UnitDelay_DSTATE_ke) * look1_iflf_binlcapw
                          (VeCTMR_T_GPIMACConnHolderShieldTemp, ((const float32 *)
                            &(KxCTMR_K_GpimAcCmpShThermCoef[0])), ((const
                             float32 *)&(KtCTMR_K_GpimAcCmpShThermCoef[0])), 6U))
            + CTMR_ac_DW.UnitDelay_DSTATE_ke;
    }

    /* End of Switch: '<S120>/Switch1' */
    /* End of Outputs for SubSystem: '<S114>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S120>/Limiter' */
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S114>/ConstantValue7'
     *  RelationalOperator: '<S146>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_ey)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_Switch1_ey;
    }

    /* End of Switch: '<S146>/Switch1' */

    /* Switch: '<S146>/Switch' incorporates:
     *  Constant: '<S114>/ConstantValue8'
     *  RelationalOperator: '<S146>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S146>/Switch' */
        rtb_Switch1_ey = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S146>/Switch' */
        rtb_Switch1_ey = -10000.0F;
    }

    /* End of Switch: '<S146>/Switch' */
    /* End of Outputs for SubSystem: '<S120>/Limiter' */

    /* Update for UnitDelay: '<S120>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_ke = rtb_Switch1_ey;

    /* End of Outputs for SubSystem: '<S114>/DigitalLowpassResetEnabled3' */

    /* Outputs for Atomic SubSystem: '<S115>/EdgeRising' */
    /* Logic: '<S150>/OR1' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_hb;

    /* Update for UnitDelay: '<S150>/Unit Delay' incorporates:
     *  Constant: '<S115>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_hb = true;

    /* Outputs for Atomic SubSystem: '<S115>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S149>/Switch1' incorporates:
     *  Logic: '<S150>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Lookup_n-D: '<S152>/Vector'
         *  Lookup_n-D: '<S153>/Vector'
         *  Lookup_n-D: '<S155>/Vector'
         *  MinMax: '<S115>/Max4'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S115>/Sum2'
         *  Switch: '<S4>/Switch15'
         *  Switch: '<S73>/Switch'
         *  UnitDelay: '<S115>/UnitDelay1'
         */
        rtb_MtrA_Current_c = fmaxf((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_GpimDcEleTempSSConCmp[0])), ((const float32 *)
            &(KyCTMR_T_GpimDcEleTempSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_GpimDcEleTempSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
            look1_iflf_binlcapw(VeCTMR_T_GpimDcBusTemp_AD, ((const float32 *)
            &(KxCTMR_T_GpimDcConCmpBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_GpimDcConCmpBusAdj[0])), 6U)) + look2_iflf_binlcapw
            (VeCTMR_T_Gen_Exh_Surf_Temp, CTMR_ac_DW.UnitDelay1_DSTATE_p, ((const
            float32 *)&(KxCTMR_T_GpimDCExhRadSSNS[0])), ((const float32 *)
            &(KyCTMR_T_GpimDCExhRadSSNS[0])), ((const float32 *)
            &(KtCTMR_T_GpimDCExhRadSSNS[0])), CTMR_ac_ConstP.pooled7, 8U),
            KeCTMR_T_RepbGpimDcConClmpInit);
    }
    else
    {
        /* Switch: '<S149>/Switch1' incorporates:
         *  Lookup_n-D: '<S152>/Vector'
         *  Lookup_n-D: '<S153>/Vector'
         *  Lookup_n-D: '<S154>/Vector'
         *  Lookup_n-D: '<S155>/Vector'
         *  Product: '<S149>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S115>/Sum2'
         *  Sum: '<S149>/Subtraction'
         *  Sum: '<S149>/Summation'
         *  Switch: '<S4>/Switch15'
         *  Switch: '<S73>/Switch'
         *  UnitDelay: '<S115>/UnitDelay1'
         *  UnitDelay: '<S149>/UnitDelay'
         */
        rtb_MtrA_Current_c = ((((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_GpimDcEleTempSSConCmp[0])), ((const float32 *)
            &(KyCTMR_T_GpimDcEleTempSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_GpimDcEleTempSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
            look1_iflf_binlcapw(VeCTMR_T_GpimDcBusTemp_AD, ((const float32 *)
            &(KxCTMR_T_GpimDcConCmpBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_GpimDcConCmpBusAdj[0])), 6U)) + look2_iflf_binlcapw
                                (VeCTMR_T_Gen_Exh_Surf_Temp,
            CTMR_ac_DW.UnitDelay1_DSTATE_p, ((const float32 *)
            &(KxCTMR_T_GpimDCExhRadSSNS[0])), ((const float32 *)
            &(KyCTMR_T_GpimDCExhRadSSNS[0])), ((const float32 *)
            &(KtCTMR_T_GpimDCExhRadSSNS[0])), CTMR_ac_ConstP.pooled7, 8U)) -
                               CTMR_ac_DW.UnitDelay_DSTATE_f) *
                              look1_iflf_binlcapw(VeCTMR_I_GenCurrent, ((const
            float32 *)&(KxCTMR_T_GpimDcConCmpThermCoefNS[0])), ((const float32 *)
                                &(KtCTMR_T_GpimDcConCmpThermCoefNS[0])), 5U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S149>/Switch1' */
    /* End of Outputs for SubSystem: '<S115>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S149>/Limiter' */
    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S115>/ConstantValue3'
     *  RelationalOperator: '<S156>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrA_Current_c)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrA_Current_c;
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Switch: '<S156>/Switch' incorporates:
     *  Constant: '<S115>/ConstantValue4'
     *  RelationalOperator: '<S156>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S156>/Switch' */
        rtb_MtrA_Current_c = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S156>/Switch' */
        rtb_MtrA_Current_c = -10000.0F;
    }

    /* End of Switch: '<S156>/Switch' */
    /* End of Outputs for SubSystem: '<S149>/Limiter' */

    /* Update for UnitDelay: '<S149>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_f = rtb_MtrA_Current_c;

    /* End of Outputs for SubSystem: '<S115>/DigitalLowpassResetEnabled2' */

    /* UnitDelay: '<S116>/UnitDelay3' */
    VeCTMR_T_GPIMDCConnClampShieldTempPrev = CTMR_ac_DW.UnitDelay3_DSTATE_f;

    /* Outputs for Atomic SubSystem: '<S116>/EdgeRising1' */
    /* Logic: '<S163>/OR1' incorporates:
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ll;

    /* Update for UnitDelay: '<S163>/Unit Delay' incorporates:
     *  Constant: '<S116>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ll = true;

    /* End of Outputs for SubSystem: '<S116>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S116>/DigitalLowpassResetEnabled1' */
    /* UnitDelay: '<S157>/UnitDelay' */
    rtb_MtrA_Current = CTMR_ac_DW.UnitDelay_DSTATE_k;

    /* Outputs for Atomic SubSystem: '<S116>/EdgeRising1' */
    /* Switch: '<S157>/Switch1' incorporates:
     *  Logic: '<S163>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S157>/Switch1' incorporates:
         *  Constant: '<S173>/Calib'
         *  Lookup_n-D: '<S175>/Vector'
         *  MinMax: '<S116>/Max2'
         *  Switch: '<S73>/Switch'
         *  UnitDelay: '<S116>/UnitDelay3'
         */
        rtb_MtrA_Current = fmaxf(look2_iflf_binlcapw(VeCTMR_T_Gen_Exh_Surf_Temp,
            VeCTMR_T_GPIMDCConnClampShieldTempPrev, ((const float32 *)
            &(KxCTMR_T_GpimDCExhRadSS[0])), ((const float32 *)
            &(KyCTMR_T_GpimDCExhRadSS[0])), ((const float32 *)
            &(KtCTMR_T_GpimDCExhRadSS[0])), CTMR_ac_ConstP.pooled7, 8U),
            KeCTMR_T_RepbGpimDcExhAdjInit);
    }
    else
    {
        /* Switch: '<S157>/Switch1' incorporates:
         *  Constant: '<S168>/Calib'
         *  Lookup_n-D: '<S175>/Vector'
         *  Product: '<S157>/Multiplication'
         *  Sum: '<S157>/Subtraction'
         *  Sum: '<S157>/Summation'
         *  Switch: '<S73>/Switch'
         *  UnitDelay: '<S116>/UnitDelay3'
         */
        rtb_MtrA_Current += (look2_iflf_binlcapw(VeCTMR_T_Gen_Exh_Surf_Temp,
                              VeCTMR_T_GPIMDCConnClampShieldTempPrev, ((const
                                float32 *)&(KxCTMR_T_GpimDCExhRadSS[0])), ((
                                const float32 *)&(KyCTMR_T_GpimDCExhRadSS[0])),
                              ((const float32 *)&(KtCTMR_T_GpimDCExhRadSS[0])),
                              CTMR_ac_ConstP.pooled7, 8U) - rtb_MtrA_Current) *
            KeCTMR_K_GpimDcExhRadTherm;
    }

    /* End of Switch: '<S157>/Switch1' */
    /* End of Outputs for SubSystem: '<S116>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S157>/Limiter' */
    /* Switch: '<S183>/Switch1' incorporates:
     *  Constant: '<S116>/ConstantValue1'
     *  RelationalOperator: '<S183>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrA_Current)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrA_Current;
    }

    /* End of Switch: '<S183>/Switch1' */

    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S116>/ConstantValue2'
     *  RelationalOperator: '<S183>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S183>/Switch' */
        VeCTMR_T_GPIMDCExhTempADJ = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S183>/Switch' */
        VeCTMR_T_GPIMDCExhTempADJ = -10000.0F;
    }

    /* End of Switch: '<S183>/Switch' */
    /* End of Outputs for SubSystem: '<S157>/Limiter' */

    /* Update for UnitDelay: '<S157>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_k = VeCTMR_T_GPIMDCExhTempADJ;

    /* End of Outputs for SubSystem: '<S116>/DigitalLowpassResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S116>/EdgeRising' */
    /* Logic: '<S162>/OR1' incorporates:
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_hz;

    /* Update for UnitDelay: '<S162>/Unit Delay' incorporates:
     *  Constant: '<S116>/TRUEConstant1'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_hz = true;

    /* Outputs for Atomic SubSystem: '<S116>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S158>/Switch1' incorporates:
     *  Logic: '<S162>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S158>/Switch1' incorporates:
         *  Constant: '<S170>/Calib'
         *  Lookup_n-D: '<S176>/Vector'
         *  Lookup_n-D: '<S182>/Vector'
         *  MinMax: '<S116>/Max1'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S116>/Sum2'
         *  Switch: '<S4>/Switch15'
         *  UnitDelay: '<S116>/UnitDelay3'
         */
        rtb_MtrA_Current = fmaxf(look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
            VeCTMR_T_GPIMDCConnClampShieldTempPrev, ((const float32 *)
            &(KxCTMR_T_GpimDcEleTempSSConCmp[0])), ((const float32 *)
            &(KyCTMR_T_GpimDcEleTempSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_GpimDcEleTempSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
            look1_iflf_binlcapw(VeCTMR_T_GpimDcBusTemp_AD, ((const float32 *)
            &(KxCTMR_T_GpimDcConCmpBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_GpimDcConCmpBusAdj[0])), 6U),
            KeCTMR_T_RepbGpimDcConClmpInit);
    }
    else
    {
        /* Switch: '<S158>/Switch1' incorporates:
         *  Lookup_n-D: '<S176>/Vector'
         *  Lookup_n-D: '<S178>/Vector'
         *  Lookup_n-D: '<S182>/Vector'
         *  Product: '<S158>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S116>/Sum2'
         *  Sum: '<S158>/Subtraction'
         *  Sum: '<S158>/Summation'
         *  Switch: '<S4>/Switch15'
         *  UnitDelay: '<S116>/UnitDelay3'
         *  UnitDelay: '<S158>/UnitDelay'
         */
        rtb_MtrA_Current = (((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
                               VeCTMR_T_GPIMDCConnClampShieldTempPrev, ((const
            float32 *)&(KxCTMR_T_GpimDcEleTempSSConCmp[0])), ((const float32 *)
                                &(KyCTMR_T_GpimDcEleTempSSConCmp[0])), ((const
            float32 *)&(KtCTMR_T_GpimDcEleTempSSConCmp[0])),
                               CTMR_ac_ConstP.pooled6, 6U) + look1_iflf_binlcapw
                              (VeCTMR_T_GpimDcBusTemp_AD, ((const float32 *)
                                &(KxCTMR_T_GpimDcConCmpBusAdj[0])), ((const
            float32 *)&(KtCTMR_T_GpimDcConCmpBusAdj[0])), 6U)) -
                             CTMR_ac_DW.UnitDelay_DSTATE_nc) *
                            look1_iflf_binlcapw(VeCTMR_I_GenCurrent, ((const
                               float32 *)&(KxCTMR_T_GpimDcConCmpThermCoef[0])),
                             ((const float32 *)&(KtCTMR_T_GpimDcConCmpThermCoef
                               [0])), 5U)) + CTMR_ac_DW.UnitDelay_DSTATE_nc;
    }

    /* End of Switch: '<S158>/Switch1' */
    /* End of Outputs for SubSystem: '<S116>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S158>/Limiter' */
    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S116>/ConstantValue3'
     *  RelationalOperator: '<S184>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrA_Current)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrA_Current;
    }

    /* End of Switch: '<S184>/Switch1' */

    /* Switch: '<S184>/Switch' incorporates:
     *  Constant: '<S116>/ConstantValue4'
     *  RelationalOperator: '<S184>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S184>/Switch' */
        rtb_MtrA_Current = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S184>/Switch' */
        rtb_MtrA_Current = -10000.0F;
    }

    /* End of Switch: '<S184>/Switch' */
    /* End of Outputs for SubSystem: '<S158>/Limiter' */

    /* Update for UnitDelay: '<S158>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_nc = rtb_MtrA_Current;

    /* End of Outputs for SubSystem: '<S116>/DigitalLowpassResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S116>/EdgeRising3' */
    /* Logic: '<S165>/OR1' incorporates:
     *  UnitDelay: '<S165>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ljr;

    /* Update for UnitDelay: '<S165>/Unit Delay' incorporates:
     *  Constant: '<S116>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ljr = true;

    /* Outputs for Atomic SubSystem: '<S116>/DigitalLowpassResetEnabled5' */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Logic: '<S165>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S171>/Calib'
         *  Lookup_n-D: '<S179>/Vector'
         *  MinMax: '<S116>/Max4'
         *  Switch: '<S4>/Switch15'
         */
        rtb_MtrB_Current_e = fmaxf(look1_iflf_binlcapw(VeCTMR_T_GpimDcBusTemp_AD,
            ((const float32 *)&(KxCTMR_T_GpimDcConHoShBusAdj[0])), ((const
            float32 *)&(KtCTMR_T_GpimDcConHoShBusAdj[0])), 6U),
            KeCTMR_T_RepbGpimDcConHldrSh1Init);
    }
    else
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S167>/Calib'
         *  Lookup_n-D: '<S179>/Vector'
         *  Product: '<S161>/Multiplication'
         *  Sum: '<S161>/Subtraction'
         *  Sum: '<S161>/Summation'
         *  Switch: '<S4>/Switch15'
         *  UnitDelay: '<S161>/UnitDelay'
         */
        rtb_MtrB_Current_e = ((look1_iflf_binlcapw(VeCTMR_T_GpimDcBusTemp_AD, ((
            const float32 *)&(KxCTMR_T_GpimDcConHoShBusAdj[0])), ((const float32
            *)&(KtCTMR_T_GpimDcConHoShBusAdj[0])), 6U) -
                               CTMR_ac_DW.UnitDelay_DSTATE_mq) *
                              KeCTMR_K_GpimDcBusAdjCoef) +
            CTMR_ac_DW.UnitDelay_DSTATE_mq;
    }

    /* End of Switch: '<S161>/Switch1' */
    /* End of Outputs for SubSystem: '<S116>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S161>/Limiter' */
    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S116>/ConstantValue13'
     *  RelationalOperator: '<S187>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrB_Current_e)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrB_Current_e;
    }

    /* End of Switch: '<S187>/Switch1' */

    /* Switch: '<S187>/Switch' incorporates:
     *  Constant: '<S116>/ConstantValue14'
     *  RelationalOperator: '<S187>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S187>/Switch' */
        rtb_MtrB_Current_e = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S187>/Switch' */
        rtb_MtrB_Current_e = -10000.0F;
    }

    /* End of Switch: '<S187>/Switch' */
    /* End of Outputs for SubSystem: '<S161>/Limiter' */

    /* Update for UnitDelay: '<S161>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_mq = rtb_MtrB_Current_e;

    /* End of Outputs for SubSystem: '<S116>/DigitalLowpassResetEnabled5' */

    /* Outputs for Atomic SubSystem: '<S116>/EdgeRising4' */
    /* Logic: '<S166>/OR1' incorporates:
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_cm;

    /* Update for UnitDelay: '<S166>/Unit Delay' incorporates:
     *  Constant: '<S116>/TRUEConstant4'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_cm = true;

    /* Outputs for Atomic SubSystem: '<S116>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  Logic: '<S166>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S172>/Calib'
         *  Lookup_n-D: '<S181>/Vector'
         *  MinMax: '<S116>/Max5'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         */
        rtb_MtrB_Current = fmaxf(look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
            VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_GpimDcEleEmcssConHoSh[0])), ((const float32 *)
            &(KyCTMR_T_GpimDcEleEmcssConHoSh[0])), ((const float32 *)
            &(KtCTMR_T_GpimDcEleEmcssConHoSh[0])), CTMR_ac_ConstP.pooled8, 5U),
            KeCTMR_T_RepbGpimDcConHldrSh2Init);
    }
    else
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Lookup_n-D: '<S180>/Vector'
         *  Lookup_n-D: '<S181>/Vector'
         *  Product: '<S160>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S160>/Subtraction'
         *  Sum: '<S160>/Summation'
         *  UnitDelay: '<S160>/UnitDelay'
         */
        rtb_MtrB_Current = ((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
                              VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
                               &(KxCTMR_T_GpimDcEleEmcssConHoSh[0])), ((const
                                float32 *)&(KyCTMR_T_GpimDcEleEmcssConHoSh[0])),
                              ((const float32 *)
                               &(KtCTMR_T_GpimDcEleEmcssConHoSh[0])),
                              CTMR_ac_ConstP.pooled8, 5U) -
                             CTMR_ac_DW.UnitDelay_DSTATE_ci) *
                            look1_iflf_binlcapw(VeCTMR_I_GenCurrent, ((const
                               float32 *)&(KxCTMR_T_GpimDcConHoShThrmCoef[0])),
                             ((const float32 *)&(KtCTMR_T_GpimDcConHoShThrmCoef
                               [0])), 6U)) + CTMR_ac_DW.UnitDelay_DSTATE_ci;
    }

    /* End of Switch: '<S160>/Switch1' */
    /* End of Outputs for SubSystem: '<S116>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S160>/Limiter' */
    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S116>/ConstantValue10'
     *  RelationalOperator: '<S186>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrB_Current)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrB_Current;
    }

    /* End of Switch: '<S186>/Switch1' */

    /* Switch: '<S186>/Switch' incorporates:
     *  Constant: '<S116>/ConstantValue11'
     *  RelationalOperator: '<S186>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S186>/Switch' */
        rtb_MtrB_Current = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S186>/Switch' */
        rtb_MtrB_Current = -10000.0F;
    }

    /* End of Switch: '<S186>/Switch' */
    /* End of Outputs for SubSystem: '<S160>/Limiter' */

    /* Update for UnitDelay: '<S160>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_ci = rtb_MtrB_Current;

    /* End of Outputs for SubSystem: '<S116>/DigitalLowpassResetEnabled4' */

    /* Sum: '<S116>/Sum1' */
    VeCTMR_T_GPIMDCConnHolderShieldTemp = (rtb_MtrB_Current_e +
        VeCTMR_T_GPIMDCExhTempADJ) + rtb_MtrB_Current;

    /* Outputs for Atomic SubSystem: '<S116>/EdgeRising2' */
    /* Logic: '<S164>/OR1' incorporates:
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_cq;

    /* Update for UnitDelay: '<S164>/Unit Delay' incorporates:
     *  Constant: '<S116>/TRUEConstant3'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_cq = true;

    /* Outputs for Atomic SubSystem: '<S116>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S159>/Switch1' incorporates:
     *  Logic: '<S164>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S159>/Switch1' incorporates:
         *  Constant: '<S169>/Calib'
         *  Lookup_n-D: '<S174>/Vector'
         *  MinMax: '<S116>/Max3'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Sum: '<S116>/Sum1'
         */
        rtb_MtrB_Current_e = fmaxf(look2_iflf_binlcapw
            (VeCTMR_T_GPIMDCConnHolderShieldTemp, VeCTMR_T_GenUnderhoodAirTemp,
             ((const float32 *)&(KxCTMR_K_GpimDcEleEmcssConCmpSh[0])), ((const
            float32 *)&(KyCTMR_K_GpimDcEleEmcssConCmpSh[0])), ((const float32 *)
            &(KtCTMR_K_GpimDcEleEmcssConCmpSh[0])), CTMR_ac_ConstP.pooled9, 7U),
            KeCTMR_T_RepbGpimDcConClmpShPrevInit);
    }
    else
    {
        /* Switch: '<S159>/Switch1' incorporates:
         *  Lookup_n-D: '<S174>/Vector'
         *  Lookup_n-D: '<S177>/Vector'
         *  Product: '<S159>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource4'
         *  Sum: '<S116>/Sum1'
         *  Sum: '<S159>/Subtraction'
         *  Sum: '<S159>/Summation'
         *  UnitDelay: '<S159>/UnitDelay'
         */
        rtb_MtrB_Current_e = ((look2_iflf_binlcapw
                               (VeCTMR_T_GPIMDCConnHolderShieldTemp,
                                VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_K_GpimDcEleEmcssConCmpSh[0])), ((const float32 *)
            &(KyCTMR_K_GpimDcEleEmcssConCmpSh[0])), ((const float32 *)
            &(KtCTMR_K_GpimDcEleEmcssConCmpSh[0])), CTMR_ac_ConstP.pooled9, 7U)
                               - CTMR_ac_DW.UnitDelay_DSTATE_dh) *
                              look1_iflf_binlcapw
                              (VeCTMR_T_GPIMDCConnHolderShieldTemp, ((const
            float32 *)&(KxCTMR_T_GpimDcConCmpShThrmrCoef[0])), ((const float32 *)
                                &(KtCTMR_T_GpimDcConCmpShThrmrCoef[0])), 6U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_dh;
    }

    /* End of Switch: '<S159>/Switch1' */
    /* End of Outputs for SubSystem: '<S116>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S159>/Limiter' */
    /* Switch: '<S185>/Switch1' incorporates:
     *  Constant: '<S116>/ConstantValue7'
     *  RelationalOperator: '<S185>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrB_Current_e)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrB_Current_e;
    }

    /* End of Switch: '<S185>/Switch1' */

    /* Switch: '<S185>/Switch' incorporates:
     *  Constant: '<S116>/ConstantValue8'
     *  RelationalOperator: '<S185>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S185>/Switch' */
        rtb_MtrB_Current_e = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S185>/Switch' */
        rtb_MtrB_Current_e = -10000.0F;
    }

    /* End of Switch: '<S185>/Switch' */
    /* End of Outputs for SubSystem: '<S159>/Limiter' */

    /* Update for UnitDelay: '<S159>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_dh = rtb_MtrB_Current_e;

    /* End of Outputs for SubSystem: '<S116>/DigitalLowpassResetEnabled3' */

    /* Lookup_n-D: '<S208>/Vector' incorporates:
     *  SignalConversion generated from: '<S9>/VariantSource4'
     */
    VeCTMR_T_GenConCmpThermCoefRepb = look1_iflf_binlcapw(VeCTMR_I_GenCurrent,
        ((const float32 *)&(KxCTMR_T_GenConCmpThermCoef[0])), ((const float32 *)
        &(KtCTMR_T_GenConCmpThermCoef[0])), 5U);

    /* UnitDelay: '<S109>/UnitDelay1' */
    VeCTMR_T_GenConnClampShieldTempPrev = CTMR_ac_DW.UnitDelay1_DSTATE_j;

    /* Sum: '<S109>/Sum25' incorporates:
     *  Lookup_n-D: '<S205>/Vector'
     *  Lookup_n-D: '<S206>/Vector'
     *  SignalConversion generated from: '<S9>/VariantSource4'
     *  Switch: '<S37>/Switch'
     *  UnitDelay: '<S109>/UnitDelay1'
     */
    VeCTMR_T_GenConnClampTempSSRepb = look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
        VeCTMR_T_GenConnClampShieldTempPrev, ((const float32 *)
        &(KxCTMR_T_EleTempSSConCmp[0])), ((const float32 *)
        &(KyCTMR_T_EleTempSSConCmp[0])), ((const float32 *)
        &(KtCTMR_T_EleTempSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
        look1_iflf_binlcapw(VeCTMR_T_Gen_Busbar_Temp, ((const float32 *)
        &(KxCTMR_T_GenConCmpBusAdj[0])), ((const float32 *)
        &(KtCTMR_T_GenConCmpBusAdj[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising2' */
    /* Logic: '<S195>/OR1' incorporates:
     *  UnitDelay: '<S195>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_p4;

    /* Update for UnitDelay: '<S195>/Unit Delay' incorporates:
     *  Constant: '<S109>/TRUEConstant4'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_p4 = true;

    /* End of Outputs for SubSystem: '<S109>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S109>/DigitalLowpassResetEnabled1' */
    /* UnitDelay: '<S188>/UnitDelay' */
    rtb_MtrB_Current = CTMR_ac_DW.UnitDelay_DSTATE_eh;

    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising2' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  Logic: '<S195>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S200>/Calib'
         *  MinMax: '<S109>/Max1'
         */
        rtb_MtrB_Current = fmaxf(VeCTMR_T_GenConnClampTempSSRepb,
            KeCTMR_T_RepbGenConClmpInit);
    }
    else
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  Product: '<S188>/Multiplication'
         *  Sum: '<S188>/Subtraction'
         *  Sum: '<S188>/Summation'
         */
        rtb_MtrB_Current += (VeCTMR_T_GenConnClampTempSSRepb - rtb_MtrB_Current)
            * VeCTMR_T_GenConCmpThermCoefRepb;
    }

    /* End of Switch: '<S188>/Switch1' */
    /* End of Outputs for SubSystem: '<S109>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S188>/Limiter' */
    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S109>/ConstantValue'
     *  RelationalOperator: '<S214>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrB_Current)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrB_Current;
    }

    /* End of Switch: '<S214>/Switch1' */

    /* Switch: '<S214>/Switch' incorporates:
     *  Constant: '<S109>/ConstantValue1'
     *  RelationalOperator: '<S214>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S214>/Switch' */
        VeCTMR_T_Gen_Conn_Clamp_Temp_Repb = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S214>/Switch' */
        VeCTMR_T_Gen_Conn_Clamp_Temp_Repb = -10000.0F;
    }

    /* End of Switch: '<S214>/Switch' */
    /* End of Outputs for SubSystem: '<S188>/Limiter' */

    /* Update for UnitDelay: '<S188>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_eh = VeCTMR_T_Gen_Conn_Clamp_Temp_Repb;

    /* End of Outputs for SubSystem: '<S109>/DigitalLowpassResetEnabled1' */

    /* Lookup_n-D: '<S213>/Vector' incorporates:
     *  Switch: '<S37>/Switch'
     */
    VeCTMR_T_GenHoShBusAdjSSRepb = look1_iflf_binlcapw(VeCTMR_T_Gen_Busbar_Temp,
        ((const float32 *)&(KxCTMR_T_GenHoShBusAdj[0])), ((const float32 *)
        &(KtCTMR_T_GenHoShBusAdj[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising3' */
    /* Logic: '<S196>/OR1' incorporates:
     *  UnitDelay: '<S196>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_i0;

    /* Update for UnitDelay: '<S196>/Unit Delay' incorporates:
     *  Constant: '<S109>/TRUEConstant1'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_i0 = true;

    /* Outputs for Atomic SubSystem: '<S109>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S189>/Switch1' incorporates:
     *  Logic: '<S196>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S202>/Calib'
         *  MinMax: '<S109>/Max4'
         */
        rtb_MtrB_Current = fmaxf(VeCTMR_T_GenHoShBusAdjSSRepb,
            KeCTMR_T_RepbGenConHldrSh1Init);
    }
    else
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S198>/Calib'
         *  Product: '<S189>/Multiplication'
         *  Sum: '<S189>/Subtraction'
         *  Sum: '<S189>/Summation'
         *  UnitDelay: '<S189>/UnitDelay'
         */
        rtb_MtrB_Current = ((VeCTMR_T_GenHoShBusAdjSSRepb -
                             CTMR_ac_DW.UnitDelay_DSTATE_hjk) *
                            KeCTMR_K_GenBusAdjCoef) +
            CTMR_ac_DW.UnitDelay_DSTATE_hjk;
    }

    /* End of Switch: '<S189>/Switch1' */
    /* End of Outputs for SubSystem: '<S109>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S189>/Limiter' */
    /* Switch: '<S215>/Switch1' incorporates:
     *  Constant: '<S109>/ConstantValue3'
     *  RelationalOperator: '<S215>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrB_Current)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrB_Current;
    }

    /* End of Switch: '<S215>/Switch1' */

    /* Switch: '<S215>/Switch' incorporates:
     *  Constant: '<S109>/ConstantValue4'
     *  RelationalOperator: '<S215>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S215>/Switch' */
        rtb_MtrB_Current = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S215>/Switch' */
        rtb_MtrB_Current = -10000.0F;
    }

    /* End of Switch: '<S215>/Switch' */
    /* End of Outputs for SubSystem: '<S189>/Limiter' */

    /* Update for UnitDelay: '<S189>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_hjk = rtb_MtrB_Current;

    /* End of Outputs for SubSystem: '<S109>/DigitalLowpassResetEnabled2' */

    /* Lookup_n-D: '<S209>/Vector' incorporates:
     *  SignalConversion generated from: '<S9>/VariantSource4'
     */
    VeCTMR_T_GenConHoShThermCoefRepb = look1_iflf_binlcapw(VeCTMR_I_GenCurrent,
        ((const float32 *)&(KxCTMR_T_GenConHoShThermCoef[0])), ((const float32 *)
        &(KtCTMR_T_GenConHoShThermCoef[0])), 6U);

    /* Lookup_n-D: '<S210>/Vector' incorporates:
     *  SignalConversion generated from: '<S17>/VariantSource4'
     *  SignalConversion generated from: '<S9>/VariantSource4'
     */
    VeCTMR_T_GenEleEcmssConHoSSRepb = look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
        VeCTMR_T_GenUnderhoodAirTemp, ((const float32 *)
        &(KxCTMR_T_GenEleEcmssConHoSh[0])), ((const float32 *)
        &(KyCTMR_T_GenEleEcmssConHoSh[0])), ((const float32 *)
        &(KtCTMR_T_GenEleEcmssConHoSh[0])), CTMR_ac_ConstP.pooled8, 5U);

    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising4' */
    /* Logic: '<S197>/OR1' incorporates:
     *  UnitDelay: '<S197>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_im;

    /* Update for UnitDelay: '<S197>/Unit Delay' incorporates:
     *  Constant: '<S109>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_im = true;

    /* Outputs for Atomic SubSystem: '<S109>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S190>/Switch1' incorporates:
     *  Logic: '<S197>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S190>/Switch1' incorporates:
         *  Constant: '<S203>/Calib'
         *  MinMax: '<S109>/Max2'
         */
        rtb_Switch1_jc = fmaxf(VeCTMR_T_GenEleEcmssConHoSSRepb,
                               KeCTMR_T_RepbGenConHldrSh2Init);
    }
    else
    {
        /* Switch: '<S190>/Switch1' incorporates:
         *  Product: '<S190>/Multiplication'
         *  Sum: '<S190>/Subtraction'
         *  Sum: '<S190>/Summation'
         *  UnitDelay: '<S190>/UnitDelay'
         */
        rtb_Switch1_jc = ((VeCTMR_T_GenEleEcmssConHoSSRepb -
                           CTMR_ac_DW.UnitDelay_DSTATE_p5) *
                          VeCTMR_T_GenConHoShThermCoefRepb) +
            CTMR_ac_DW.UnitDelay_DSTATE_p5;
    }

    /* End of Switch: '<S190>/Switch1' */
    /* End of Outputs for SubSystem: '<S109>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S190>/Limiter' */
    /* Switch: '<S216>/Switch1' incorporates:
     *  Constant: '<S109>/ConstantValue6'
     *  RelationalOperator: '<S216>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S216>/Switch1' */

    /* Switch: '<S216>/Switch' incorporates:
     *  Constant: '<S109>/ConstantValue7'
     *  RelationalOperator: '<S216>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S216>/Switch' */
        rtb_Switch_cz = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S216>/Switch' */
        rtb_Switch_cz = -10000.0F;
    }

    /* End of Switch: '<S216>/Switch' */
    /* End of Outputs for SubSystem: '<S190>/Limiter' */

    /* Update for UnitDelay: '<S190>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_p5 = rtb_Switch_cz;

    /* End of Outputs for SubSystem: '<S109>/DigitalLowpassResetEnabled3' */

    /* Lookup_n-D: '<S212>/Vector' incorporates:
     *  Switch: '<S73>/Switch'
     *  UnitDelay: '<S109>/UnitDelay1'
     */
    VeCTMR_T_REPBGenExhTempSS = look2_iflf_binlcapw(VeCTMR_T_Gen_Exh_Surf_Temp,
        VeCTMR_T_GenConnClampShieldTempPrev, ((const float32 *)
        &(KxCTMR_T_GenExhRadSS[0])), ((const float32 *)&(KyCTMR_T_GenExhRadSS[0])),
        ((const float32 *)&(KtCTMR_T_GenExhRadSS[0])), CTMR_ac_ConstP.pooled7,
        8U);

    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising' */
    /* Logic: '<S193>/OR1' incorporates:
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_m0;

    /* Update for UnitDelay: '<S193>/Unit Delay' incorporates:
     *  Constant: '<S109>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_m0 = true;

    /* End of Outputs for SubSystem: '<S109>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S109>/DigitalLowpassResetEnabled5' */
    /* UnitDelay: '<S192>/UnitDelay' */
    rtb_Switch1_jc = CTMR_ac_DW.UnitDelay_DSTATE_mk;

    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising' */
    /* Switch: '<S192>/Switch1' incorporates:
     *  Logic: '<S193>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S204>/Calib'
         *  MinMax: '<S109>/Max3'
         */
        rtb_Switch1_jc = fmaxf(VeCTMR_T_REPBGenExhTempSS,
                               KeCTMR_T_RepbGenExhAdjInit);
    }
    else
    {
        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S199>/Calib'
         *  Product: '<S192>/Multiplication'
         *  Sum: '<S192>/Subtraction'
         *  Sum: '<S192>/Summation'
         */
        rtb_Switch1_jc += (VeCTMR_T_REPBGenExhTempSS - rtb_Switch1_jc) *
            KeCTMR_K_GenExhTherm;
    }

    /* End of Switch: '<S192>/Switch1' */
    /* End of Outputs for SubSystem: '<S109>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S192>/Limiter' */
    /* Switch: '<S218>/Switch1' incorporates:
     *  Constant: '<S109>/ConstantValue12'
     *  RelationalOperator: '<S218>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S218>/Switch1' */

    /* Switch: '<S218>/Switch' incorporates:
     *  Constant: '<S109>/ConstantValue13'
     *  RelationalOperator: '<S218>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S218>/Switch' */
        VeCTMR_T_GenExh_empADJ = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S218>/Switch' */
        VeCTMR_T_GenExh_empADJ = -10000.0F;
    }

    /* End of Switch: '<S218>/Switch' */
    /* End of Outputs for SubSystem: '<S192>/Limiter' */

    /* Update for UnitDelay: '<S192>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_mk = VeCTMR_T_GenExh_empADJ;

    /* End of Outputs for SubSystem: '<S109>/DigitalLowpassResetEnabled5' */

    /* Sum: '<S109>/Sum24' */
    VeCTMR_T_GenConnHolderShieldTemp = (rtb_MtrB_Current +
        VeCTMR_T_GenExh_empADJ) + rtb_Switch_cz;

    /* Lookup_n-D: '<S207>/Vector' incorporates:
     *  Sum: '<S109>/Sum24'
     */
    VeCTMR_T_GenConCmpShThermCoefRepb = look1_iflf_binlcapw
        (VeCTMR_T_GenConnHolderShieldTemp, ((const float32 *)
          &(KxCTMR_T_GenConCmpShThermCoef[0])), ((const float32 *)
          &(KtCTMR_T_GenConCmpShThermCoef[0])), 6U);

    /* Lookup_n-D: '<S211>/Vector' incorporates:
     *  SignalConversion generated from: '<S17>/VariantSource4'
     *  Sum: '<S109>/Sum24'
     */
    VeCTMR_T_GenEleEmcssConCmpShRepb = look2_iflf_binlcapw
        (VeCTMR_T_GenConnHolderShieldTemp, VeCTMR_T_GenUnderhoodAirTemp, ((const
           float32 *)&(KxCTMR_T_GenEleEmcssConCmpSh[0])), ((const float32 *)
          &(KyCTMR_T_GenEleEmcssConCmpSh[0])), ((const float32 *)
          &(KtCTMR_T_GenEleEmcssConCmpSh[0])), CTMR_ac_ConstP.pooled9, 7U);

    /* Outputs for Atomic SubSystem: '<S109>/EdgeRising1' */
    /* Logic: '<S194>/OR1' incorporates:
     *  UnitDelay: '<S194>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_es;

    /* Update for UnitDelay: '<S194>/Unit Delay' incorporates:
     *  Constant: '<S109>/TRUEConstant3'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_es = true;

    /* Outputs for Atomic SubSystem: '<S109>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S191>/Switch1' incorporates:
     *  Logic: '<S194>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S191>/Switch1' incorporates:
         *  Constant: '<S201>/Calib'
         *  MinMax: '<S109>/Max5'
         */
        rtb_MtrB_Current = fmaxf(VeCTMR_T_GenEleEmcssConCmpShRepb,
            KeCTMR_T_RepbGenConCmpShPrevInit);
    }
    else
    {
        /* Switch: '<S191>/Switch1' incorporates:
         *  Product: '<S191>/Multiplication'
         *  Sum: '<S191>/Subtraction'
         *  Sum: '<S191>/Summation'
         *  UnitDelay: '<S191>/UnitDelay'
         */
        rtb_MtrB_Current = ((VeCTMR_T_GenEleEmcssConCmpShRepb -
                             CTMR_ac_DW.UnitDelay_DSTATE_auh) *
                            VeCTMR_T_GenConCmpShThermCoefRepb) +
            CTMR_ac_DW.UnitDelay_DSTATE_auh;
    }

    /* End of Switch: '<S191>/Switch1' */
    /* End of Outputs for SubSystem: '<S109>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S191>/Limiter' */
    /* Switch: '<S217>/Switch1' incorporates:
     *  Constant: '<S109>/ConstantValue9'
     *  RelationalOperator: '<S217>/RelationalOperator'
     */
    if (10000.0F < rtb_MtrB_Current)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }
    else
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = rtb_MtrB_Current;
    }

    /* End of Switch: '<S217>/Switch1' */

    /* Switch: '<S217>/Switch' incorporates:
     *  Constant: '<S109>/ConstantValue10'
     *  RelationalOperator: '<S217>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S217>/Switch' */
        rtb_MtrB_Current = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S217>/Switch' */
        rtb_MtrB_Current = -10000.0F;
    }

    /* End of Switch: '<S217>/Switch' */
    /* End of Outputs for SubSystem: '<S191>/Limiter' */

    /* Update for UnitDelay: '<S191>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_auh = rtb_MtrB_Current;

    /* End of Outputs for SubSystem: '<S109>/DigitalLowpassResetEnabled4' */

    /* Lookup_n-D: '<S222>/Vector' incorporates:
     *  SignalConversion generated from: '<S9>/VariantSource4'
     */
    VeCTMR_T_REEVConnClampTempNoShCoefRepb = look1_iflf_binlcapw
        (VeCTMR_I_GenCurrent, ((const float32 *)&(KxCTMR_T_ReevConCmpThmrCoefNS
           [0])), ((const float32 *)&(KtCTMR_T_ReevConCmpThmrCoefNS[0])), 5U);

    /* UnitDelay: '<S110>/UnitDelay1' */
    VeCTMR_T_ConnClampTempPrevNoShRepb = CTMR_ac_DW.UnitDelay1_DSTATE_k;

    /* Lookup_n-D: '<S224>/Vector' incorporates:
     *  Lookup_n-D: '<S251>/Vector'
     *  Switch: '<S49>/Switch'
     */
    rtb_Switch_cz = look1_iflf_binlcapw(VeCTMR_T_REEV_Busbar_Temp, ((const
        float32 *)&(KxCTMR_T_RevConCmpBusAdj[0])), ((const float32 *)
        &(KtCTMR_T_RevConCmpBusAdj[0])), 6U);

    /* Sum: '<S110>/Sum25' incorporates:
     *  Lookup_n-D: '<S223>/Vector'
     *  Lookup_n-D: '<S224>/Vector'
     *  Lookup_n-D: '<S225>/Vector'
     *  SignalConversion generated from: '<S17>/VariantSource6'
     *  SignalConversion generated from: '<S9>/VariantSource4'
     *  Switch: '<S67>/Switch'
     *  UnitDelay: '<S110>/UnitDelay1'
     */
    VeCTMR_T_REEVConnClampTempNoShSSRepb = (look2_iflf_binlcapw
        (VeCTMR_I_GenCurrent, VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
        &(KxCTMR_T_RevEleTmpSSConCmp[0])), ((const float32 *)
        &(KyCTMR_T_RevEleTmpSSConCmp[0])), ((const float32 *)
        &(KtCTMR_T_RevEleTmpSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
        rtb_Switch_cz) + look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
        VeCTMR_T_ConnClampTempPrevNoShRepb, ((const float32 *)
        &(KxCTMR_T_ReevExhRadSSNS[0])), ((const float32 *)
        &(KyCTMR_T_ReevExhRadSSNS[0])), ((const float32 *)
        &(KtCTMR_T_ReevExhRadSSNS[0])), CTMR_ac_ConstP.pooled7, 8U);

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising' */
    /* Logic: '<S220>/OR1' incorporates:
     *  UnitDelay: '<S220>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_iy;

    /* Update for UnitDelay: '<S220>/Unit Delay' incorporates:
     *  Constant: '<S110>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_iy = true;

    /* End of Outputs for SubSystem: '<S110>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S110>/DigitalLowpassResetEnabled2' */
    /* UnitDelay: '<S219>/UnitDelay' */
    rtb_Switch1_jc = CTMR_ac_DW.UnitDelay_DSTATE_cl;

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising' */
    /* Switch: '<S219>/Switch1' incorporates:
     *  Logic: '<S220>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S219>/Switch1' incorporates:
         *  Constant: '<S221>/Calib'
         *  MinMax: '<S110>/Max2'
         */
        rtb_Switch1_jc = fmaxf(VeCTMR_T_REEVConnClampTempNoShSSRepb,
                               KeCTMR_T_RepHvbpReevConClmpInit);
    }
    else
    {
        /* Switch: '<S219>/Switch1' incorporates:
         *  Product: '<S219>/Multiplication'
         *  Sum: '<S219>/Subtraction'
         *  Sum: '<S219>/Summation'
         */
        rtb_Switch1_jc += (VeCTMR_T_REEVConnClampTempNoShSSRepb - rtb_Switch1_jc)
            * VeCTMR_T_REEVConnClampTempNoShCoefRepb;
    }

    /* End of Switch: '<S219>/Switch1' */
    /* End of Outputs for SubSystem: '<S110>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S219>/Limiter' */
    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S110>/ConstantValue3'
     *  RelationalOperator: '<S226>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S226>/Switch1' */

    /* Switch: '<S226>/Switch' incorporates:
     *  Constant: '<S110>/ConstantValue4'
     *  RelationalOperator: '<S226>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S226>/Switch' */
        VeCTMR_T_REEVConnClampTempNoShRepb = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S226>/Switch' */
        VeCTMR_T_REEVConnClampTempNoShRepb = -10000.0F;
    }

    /* End of Switch: '<S226>/Switch' */
    /* End of Outputs for SubSystem: '<S219>/Limiter' */

    /* Update for UnitDelay: '<S219>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_cl = VeCTMR_T_REEVConnClampTempNoShRepb;

    /* End of Outputs for SubSystem: '<S110>/DigitalLowpassResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising3' */
    /* Logic: '<S235>/OR1' incorporates:
     *  UnitDelay: '<S235>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_of;

    /* Update for UnitDelay: '<S235>/Unit Delay' incorporates:
     *  Constant: '<S111>/TRUEConstant4'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_of = true;

    /* Outputs for Atomic SubSystem: '<S111>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S230>/Switch1' incorporates:
     *  Logic: '<S235>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S230>/Switch1' incorporates:
         *  Constant: '<S242>/Calib'
         *  Lookup_n-D: '<S246>/Vector'
         *  MinMax: '<S111>/Max3'
         *  Switch: '<S49>/Switch'
         */
        rtb_Switch1_jc = fmaxf(look1_iflf_binlcapw(VeCTMR_T_REEV_Busbar_Temp, ((
            const float32 *)&(KxCTMR_T_ReevConHoShBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_ReevConHoShBusAdj[0])), 6U),
                               KeCTMR_T_RepbHvbpReevConHldrSh1Init);
    }
    else
    {
        /* Switch: '<S230>/Switch1' incorporates:
         *  Constant: '<S237>/Calib'
         *  Lookup_n-D: '<S246>/Vector'
         *  Product: '<S230>/Multiplication'
         *  Sum: '<S230>/Subtraction'
         *  Sum: '<S230>/Summation'
         *  Switch: '<S49>/Switch'
         *  UnitDelay: '<S230>/UnitDelay'
         */
        rtb_Switch1_jc = ((look1_iflf_binlcapw(VeCTMR_T_REEV_Busbar_Temp, ((
                              const float32 *)&(KxCTMR_T_ReevConHoShBusAdj[0])),
                            ((const float32 *)&(KtCTMR_T_ReevConHoShBusAdj[0])),
                            6U) - CTMR_ac_DW.UnitDelay_DSTATE_jm) *
                          KeCTMR_K_ReevBusAdjCoef) +
            CTMR_ac_DW.UnitDelay_DSTATE_jm;
    }

    /* End of Switch: '<S230>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S230>/Limiter' */
    /* Switch: '<S256>/Switch1' incorporates:
     *  Constant: '<S111>/ConstantValue10'
     *  RelationalOperator: '<S256>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S256>/Switch1' */

    /* Switch: '<S256>/Switch' incorporates:
     *  Constant: '<S111>/ConstantValue11'
     *  RelationalOperator: '<S256>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S256>/Switch' */
        rtb_Switch_g5 = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S256>/Switch' */
        rtb_Switch_g5 = -10000.0F;
    }

    /* End of Switch: '<S256>/Switch' */
    /* End of Outputs for SubSystem: '<S230>/Limiter' */

    /* Update for UnitDelay: '<S230>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_jm = rtb_Switch_g5;

    /* End of Outputs for SubSystem: '<S111>/DigitalLowpassResetEnabled4' */

    /* UnitDelay: '<S111>/UnitDelay2' */
    VeCTMR_T_ConnClampShieldTempPrev = CTMR_ac_DW.UnitDelay2_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising1' */
    /* Logic: '<S233>/OR1' incorporates:
     *  UnitDelay: '<S233>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_nz;

    /* Update for UnitDelay: '<S233>/Unit Delay' incorporates:
     *  Constant: '<S111>/TRUEConstant3'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_nz = true;

    /* End of Outputs for SubSystem: '<S111>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S111>/DigitalLowpassResetEnabled3' */
    /* UnitDelay: '<S229>/UnitDelay' */
    rtb_Switch1_jc = CTMR_ac_DW.UnitDelay_DSTATE_af;

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising1' */
    /* Switch: '<S229>/Switch1' incorporates:
     *  Logic: '<S233>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S241>/Calib'
         *  Lookup_n-D: '<S250>/Vector'
         *  MinMax: '<S111>/Max1'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S111>/UnitDelay2'
         */
        rtb_Switch1_jc = fmaxf(look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                                VeCTMR_T_ConnClampShieldTempPrev, ((const
            float32 *)&(KxCTMR_T_ReevExhRadSS[0])), ((const float32 *)
            &(KyCTMR_T_ReevExhRadSS[0])), ((const float32 *)
            &(KtCTMR_T_ReevExhRadSS[0])), CTMR_ac_ConstP.pooled7, 8U),
                               KeCTMR_T_RepHvbpReevExhAdjInit);
    }
    else
    {
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S238>/Calib'
         *  Lookup_n-D: '<S250>/Vector'
         *  Product: '<S229>/Multiplication'
         *  Sum: '<S229>/Subtraction'
         *  Sum: '<S229>/Summation'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S111>/UnitDelay2'
         */
        rtb_Switch1_jc += (look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                            VeCTMR_T_ConnClampShieldTempPrev, ((const float32 *)
                             &(KxCTMR_T_ReevExhRadSS[0])), ((const float32 *)
                             &(KyCTMR_T_ReevExhRadSS[0])), ((const float32 *)
                             &(KtCTMR_T_ReevExhRadSS[0])),
                            CTMR_ac_ConstP.pooled7, 8U) - rtb_Switch1_jc) *
            KeCTMR_K_ReevExhThmr;
    }

    /* End of Switch: '<S229>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S229>/Limiter' */
    /* Switch: '<S255>/Switch1' incorporates:
     *  Constant: '<S111>/ConstantValue7'
     *  RelationalOperator: '<S255>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S255>/Switch1' */

    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S111>/ConstantValue8'
     *  RelationalOperator: '<S255>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S255>/Switch' */
        VeCTMR_T_REEVExhTempADJ = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S255>/Switch' */
        VeCTMR_T_REEVExhTempADJ = -10000.0F;
    }

    /* End of Switch: '<S255>/Switch' */
    /* End of Outputs for SubSystem: '<S229>/Limiter' */

    /* Update for UnitDelay: '<S229>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_af = VeCTMR_T_REEVExhTempADJ;

    /* End of Outputs for SubSystem: '<S111>/DigitalLowpassResetEnabled3' */

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising4' */
    /* Logic: '<S236>/OR1' incorporates:
     *  UnitDelay: '<S236>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ki;

    /* Update for UnitDelay: '<S236>/Unit Delay' incorporates:
     *  Constant: '<S111>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ki = true;

    /* Outputs for Atomic SubSystem: '<S111>/DigitalLowpassResetEnabled5' */
    /* Switch: '<S231>/Switch1' incorporates:
     *  Logic: '<S236>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S231>/Switch1' incorporates:
         *  Constant: '<S243>/Calib'
         *  Lookup_n-D: '<S248>/Vector'
         *  MinMax: '<S111>/Max5'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         */
        rtb_Switch1_jc = fmaxf(look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_ReevEleConHoShSS[0])), ((const float32 *)
            &(KyCTMR_T_ReevEleConHoShSS[0])), ((const float32 *)
            &(KtCTMR_T_ReevEleConHoShSS[0])), CTMR_ac_ConstP.pooled8, 5U),
                               KeCTMR_T_RepbHvbpReevConHldrSh2Init);
    }
    else
    {
        /* Switch: '<S231>/Switch1' incorporates:
         *  Lookup_n-D: '<S247>/Vector'
         *  Lookup_n-D: '<S248>/Vector'
         *  Product: '<S231>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S231>/Subtraction'
         *  Sum: '<S231>/Summation'
         *  UnitDelay: '<S231>/UnitDelay'
         */
        rtb_Switch1_jc = ((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
                            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                             &(KxCTMR_T_ReevEleConHoShSS[0])), ((const float32 *)
                             &(KyCTMR_T_ReevEleConHoShSS[0])), ((const float32 *)
                             &(KtCTMR_T_ReevEleConHoShSS[0])),
                            CTMR_ac_ConstP.pooled8, 5U) -
                           CTMR_ac_DW.UnitDelay_DSTATE_hl) * look1_iflf_binlcapw
                          (VeCTMR_I_GenCurrent, ((const float32 *)
                            &(KxCTMR_T_ReevConHoShThmrCoef[0])), ((const float32
                             *)&(KtCTMR_T_ReevConHoShThmrCoef[0])), 6U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_hl;
    }

    /* End of Switch: '<S231>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S231>/Limiter' */
    /* Switch: '<S257>/Switch1' incorporates:
     *  Constant: '<S111>/ConstantValue13'
     *  RelationalOperator: '<S257>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S257>/Switch1' */

    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S111>/ConstantValue14'
     *  RelationalOperator: '<S257>/RelationalOperator1'
     */
    if (rtb_Switch1_jc <= -10000.0F)
    {
        /* Switch: '<S257>/Switch' */
        rtb_Switch1_jc = -10000.0F;
    }

    /* End of Switch: '<S257>/Switch' */
    /* End of Outputs for SubSystem: '<S231>/Limiter' */

    /* Update for UnitDelay: '<S231>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_hl = rtb_Switch1_jc;

    /* End of Outputs for SubSystem: '<S111>/DigitalLowpassResetEnabled5' */

    /* Sum: '<S111>/Sum24' */
    VeCTMR_T_REEVConnHolderShieldTemp = (rtb_Switch_g5 + VeCTMR_T_REEVExhTempADJ)
        + rtb_Switch1_jc;

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising2' */
    /* Logic: '<S234>/OR1' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_jo;

    /* Update for UnitDelay: '<S234>/Unit Delay' incorporates:
     *  Constant: '<S111>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_jo = true;

    /* Outputs for Atomic SubSystem: '<S111>/DigitalLowpassResetEnabled1' */
    /* Switch: '<S227>/Switch1' incorporates:
     *  Logic: '<S234>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S227>/Switch1' incorporates:
         *  Constant: '<S240>/Calib'
         *  Lookup_n-D: '<S249>/Vector'
         *  MinMax: '<S111>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Sum: '<S111>/Sum24'
         */
        rtb_Switch1_jc = fmaxf(look2_iflf_binlcapw
                               (VeCTMR_T_REEVConnHolderShieldTemp,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_ReevEleEmcssPbt[0])), ((const float32 *)
            &(KyCTMR_T_ReevEleEmcssPbt[0])), ((const float32 *)
            &(KtCTMR_T_ReevEleEmcssPbt[0])), CTMR_ac_ConstP.pooled9, 7U),
                               KeCTMR_T_RepHvbpReevConCmpShPrevInit);
    }
    else
    {
        /* Switch: '<S227>/Switch1' incorporates:
         *  Lookup_n-D: '<S244>/Vector'
         *  Lookup_n-D: '<S249>/Vector'
         *  Product: '<S227>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Sum: '<S111>/Sum24'
         *  Sum: '<S227>/Subtraction'
         *  Sum: '<S227>/Summation'
         *  UnitDelay: '<S227>/UnitDelay'
         */
        rtb_Switch1_jc = ((look2_iflf_binlcapw(VeCTMR_T_REEVConnHolderShieldTemp,
                            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                             &(KxCTMR_T_ReevEleEmcssPbt[0])), ((const float32 *)
                             &(KyCTMR_T_ReevEleEmcssPbt[0])), ((const float32 *)
                             &(KtCTMR_T_ReevEleEmcssPbt[0])),
                            CTMR_ac_ConstP.pooled9, 7U) -
                           CTMR_ac_DW.UnitDelay_DSTATE_lj) * look1_iflf_binlcapw
                          (VeCTMR_T_REEVConnHolderShieldTemp, ((const float32 *)
                            &(KxCTMR_T_ReevConCmpShThmrCoef[0])), ((const
                             float32 *)&(KtCTMR_T_ReevConCmpShThmrCoef[0])), 6U))
            + CTMR_ac_DW.UnitDelay_DSTATE_lj;
    }

    /* End of Switch: '<S227>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S227>/Limiter' */
    /* Switch: '<S253>/Switch1' incorporates:
     *  Constant: '<S111>/ConstantValue1'
     *  RelationalOperator: '<S253>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S253>/Switch1' */

    /* Switch: '<S253>/Switch' incorporates:
     *  Constant: '<S111>/ConstantValue2'
     *  RelationalOperator: '<S253>/RelationalOperator1'
     */
    if (rtb_Switch1_jc > -10000.0F)
    {
        /* Switch: '<S253>/Switch' */
        rtb_Switch_g5 = rtb_Switch1_jc;
    }
    else
    {
        /* Switch: '<S253>/Switch' */
        rtb_Switch_g5 = -10000.0F;
    }

    /* End of Switch: '<S253>/Switch' */
    /* End of Outputs for SubSystem: '<S227>/Limiter' */

    /* Update for UnitDelay: '<S227>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_lj = rtb_Switch_g5;

    /* End of Outputs for SubSystem: '<S111>/DigitalLowpassResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S111>/EdgeRising' */
    /* Logic: '<S232>/OR1' incorporates:
     *  UnitDelay: '<S232>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_he;

    /* Update for UnitDelay: '<S232>/Unit Delay' incorporates:
     *  Constant: '<S111>/TRUEConstant1'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_he = true;

    /* Outputs for Atomic SubSystem: '<S111>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S228>/Switch1' incorporates:
     *  Logic: '<S232>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S228>/Switch1' incorporates:
         *  Constant: '<S239>/Calib'
         *  Lookup_n-D: '<S251>/Vector'
         *  Lookup_n-D: '<S252>/Vector'
         *  MinMax: '<S111>/Max4'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S111>/Sum25'
         *  Switch: '<S49>/Switch'
         *  UnitDelay: '<S111>/UnitDelay2'
         */
        rtb_Switch1_jc = fmaxf(look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
                                VeCTMR_T_ConnClampShieldTempPrev, ((const
            float32 *)&(KxCTMR_T_RevEleTmpSSConCmp[0])), ((const float32 *)
            &(KyCTMR_T_RevEleTmpSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_RevEleTmpSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
                               look1_iflf_binlcapw(VeCTMR_T_REEV_Busbar_Temp, ((
            const float32 *)&(KxCTMR_T_RevConCmpBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_RevConCmpBusAdj[0])), 6U),
                               KeCTMR_T_RepHvbpReevConClmpInit);
    }
    else
    {
        /* Switch: '<S228>/Switch1' incorporates:
         *  Lookup_n-D: '<S245>/Vector'
         *  Lookup_n-D: '<S252>/Vector'
         *  Product: '<S228>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource4'
         *  Sum: '<S111>/Sum25'
         *  Sum: '<S228>/Subtraction'
         *  Sum: '<S228>/Summation'
         *  UnitDelay: '<S111>/UnitDelay2'
         *  UnitDelay: '<S228>/UnitDelay'
         */
        rtb_Switch1_jc = (((look2_iflf_binlcapw(VeCTMR_I_GenCurrent,
                             VeCTMR_T_ConnClampShieldTempPrev, ((const float32 *)
                              &(KxCTMR_T_RevEleTmpSSConCmp[0])), ((const float32
                               *)&(KyCTMR_T_RevEleTmpSSConCmp[0])), ((const
                               float32 *)&(KtCTMR_T_RevEleTmpSSConCmp[0])),
                             CTMR_ac_ConstP.pooled6, 6U) + rtb_Switch_cz) -
                           CTMR_ac_DW.UnitDelay_DSTATE_d) * look1_iflf_binlcapw
                          (VeCTMR_I_GenCurrent, ((const float32 *)
                            &(KxCTMR_T_ReevConCmpThmrCoef[0])), ((const float32 *)
                            &(KtCTMR_T_ReevConCmpThmrCoef[0])), 5U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S228>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S228>/Limiter' */
    /* Switch: '<S254>/Switch1' incorporates:
     *  Constant: '<S111>/ConstantValue3'
     *  RelationalOperator: '<S254>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_jc)
    {
        /* Switch: '<S254>/Switch1' */
        rtb_Switch1_jc = 10000.0F;
    }

    /* End of Switch: '<S254>/Switch1' */

    /* Switch: '<S254>/Switch' incorporates:
     *  Constant: '<S111>/ConstantValue4'
     *  RelationalOperator: '<S254>/RelationalOperator1'
     */
    if (rtb_Switch1_jc <= -10000.0F)
    {
        /* Switch: '<S254>/Switch' */
        rtb_Switch1_jc = -10000.0F;
    }

    /* End of Switch: '<S254>/Switch' */
    /* End of Outputs for SubSystem: '<S228>/Limiter' */

    /* Update for UnitDelay: '<S228>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_jc;

    /* End of Outputs for SubSystem: '<S111>/DigitalLowpassResetEnabled2' */

    /* Update for UnitDelay: '<S114>/UnitDelay1' incorporates:
     *  Sum: '<S114>/Sum6'
     */
    CTMR_ac_DW.UnitDelay1_DSTATE_m = VeCTMR_T_GPIMACExhTempADJ + rtb_Switch1_ey;

    /* Update for UnitDelay: '<S115>/UnitDelay1' */
    CTMR_ac_DW.UnitDelay1_DSTATE_p = rtb_MtrA_Current_c;

    /* Update for UnitDelay: '<S116>/UnitDelay3' incorporates:
     *  Sum: '<S116>/Sum5'
     */
    CTMR_ac_DW.UnitDelay3_DSTATE_f = VeCTMR_T_GPIMDCExhTempADJ +
        rtb_MtrB_Current_e;

    /* Update for UnitDelay: '<S109>/UnitDelay1' incorporates:
     *  Sum: '<S109>/Sum8'
     */
    CTMR_ac_DW.UnitDelay1_DSTATE_j = VeCTMR_T_GenExh_empADJ + rtb_MtrB_Current;

    /* Update for UnitDelay: '<S110>/UnitDelay1' */
    CTMR_ac_DW.UnitDelay1_DSTATE_k = VeCTMR_T_REEVConnClampTempNoShRepb;

    /* Update for UnitDelay: '<S111>/UnitDelay2' incorporates:
     *  Sum: '<S111>/Sum8'
     */
    CTMR_ac_DW.UnitDelay2_DSTATE_p = VeCTMR_T_REEVExhTempADJ + rtb_Switch_g5;

    /* VariantMerge generated from: '<S12>/VariantSource4' */
    rtb_VariantMerge_For_Variant_So[0] = VeCTMR_T_Gen_Conn_Clamp_Temp_Repb;
    rtb_VariantMerge_For_Variant_So[1] = rtb_MtrAUHoodTmp_c;

    /* Switch: '<S108>/Switch1' incorporates:
     *  Constant: '<S117>/Calib'
     *  Switch: '<S83>/Switch1'
     */
    if (KeCTMR_b_GPIMBattHarnessShield)
    {
        /* VariantMerge generated from: '<S12>/VariantSource4' */
        rtb_VariantMerge_For_Variant_So[2] = rtb_MtrA_Current;
        rtb_VariantMerge_For_Variant_So[3] = rtb_Switch1_jc;
    }
    else
    {
        /* VariantMerge generated from: '<S12>/VariantSource4' */
        rtb_VariantMerge_For_Variant_So[2] = rtb_MtrA_Current_c;
        rtb_VariantMerge_For_Variant_So[3] = VeCTMR_T_REEVConnClampTempNoShRepb;
    }

    /* End of Switch: '<S108>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Gen_REPB' */
#endif

    /* End of SignalConversion generated from: '<S12>/VariantSource4' */

    /* SignalConversion generated from: '<S12>/VariantSource4' */
#if Rte_SysCon_Variant_CTMR_4

    /* VariantMerge generated from: '<S12>/VariantSource4' incorporates:
     *  Constant: '<S105>/Calib'
     *  Constant: '<S106>/Calib'
     */
    rtb_VariantMerge_For_Variant_So[0] = rtb_Switch1_fc;
    rtb_VariantMerge_For_Variant_So[1] = rtb_Switch1_gs;
    rtb_VariantMerge_For_Variant_So[2] = KeCTMR_T_FedmMtraTemp1;
    rtb_VariantMerge_For_Variant_So[3] = KeCTMR_T_FedmMtraTemp2;

#elif !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5

    /* VariantMerge generated from: '<S12>/VariantSource4' incorporates:
     *  Constant: '<S264>/Calib'
     *  Constant: '<S266>/Calib'
     *  Constant: '<S268>/Calib'
     *  Constant: '<S270>/Calib'
     *  SignalConversion generated from: '<S12>/VariantSource4'
     */
    rtb_VariantMerge_For_Variant_So[0] = KeCTMR_T_MtraDefValTemp1;
    rtb_VariantMerge_For_Variant_So[1] = KeCTMR_T_MtraDefValTemp2;
    rtb_VariantMerge_For_Variant_So[2] = KeCTMR_T_MtraDefValTemp3;
    rtb_VariantMerge_For_Variant_So[3] = KeCTMR_T_MtraDefValTemp4;

#endif

    /* End of SignalConversion generated from: '<S12>/VariantSource4' */
    for (i = 0; i < 4; i++)
    {
        /* SignalConversion generated from: '<S12>/VariantSource4' */
        VaCTMR_T_MtrAConTmpsFunc[(i)] = rtb_VariantMerge_For_Variant_So[i];
    }

    /* SignalConversion generated from: '<S12>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_5

    /* VariantMerge generated from: '<S12>/VariantSource5' incorporates:
     *  Constant: '<S258>/Calib'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S260>/Calib'
     *  Constant: '<S261>/Calib'
     */
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[0] = KeCTMR_T_GenConCmpTempLim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[1] = KeCTMR_T_GpimAcConCmpTempLim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[2] = KeCTMR_T_GpimDcConCmpTempLim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[3] =
        KeCTMR_T_HVBPReevConCmpTempLim;

#endif

    /* End of SignalConversion generated from: '<S12>/VariantSource5' */

    /* SignalConversion generated from: '<S12>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_4

    /* VariantMerge generated from: '<S12>/VariantSource5' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S107>/Calib'
     */
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[0] = KeCTMR_T_FedmConCmpTempLim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[1] =
        KeCTMR_T_HvbpFedmConCmpTempLim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[2] = KeCTMR_T_FedmMtraLim1;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[3] = KeCTMR_T_FedmMtraLim2;

#elif !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5

    /* VariantMerge generated from: '<S12>/VariantSource5' incorporates:
     *  Constant: '<S263>/Calib'
     *  Constant: '<S265>/Calib'
     *  Constant: '<S267>/Calib'
     *  Constant: '<S269>/Calib'
     *  SignalConversion generated from: '<S12>/VariantSource5'
     */
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[0] = KeCTMR_T_MtraDefValTemp1Lim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[1] = KeCTMR_T_MtraDefValTemp2Lim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[2] = KeCTMR_T_MtraDefValTemp3Lim;
    CTMR_ac_B.VariantMerge_For_Variant_So_ghj[3] = KeCTMR_T_FedmMtraLim2;

#endif

    /* End of SignalConversion generated from: '<S12>/VariantSource5' */
    for (i = 0; i < 4; i++)
    {
        /* SignalConversion generated from: '<S12>/VariantSource5' */
        VaCTMR_T_MtrAConTmpsLimFunc[(i)] =
            CTMR_ac_B.VariantMerge_For_Variant_So_ghj[i];
    }

    /* SignalConversion generated from: '<S17>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_5

    /* Switch: '<S413>/Switch1' */
    rtb_Switch1_cy = rtb_MtrBUHoodTmp_b;

#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource5' */

    /* SignalConversion generated from: '<S17>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_4

    /* Switch: '<S413>/Switch1' */
    rtb_Switch1_cy = rtb_MtrBUHoodTmp;

#elif !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5

    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S419>/Constant1'
     *  SignalConversion generated from: '<S17>/VariantSource5'
     */
    rtb_Switch1_cy = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S17>/VariantSource5' */

    /* SignalConversion generated from: '<S17>/VariantSource5' */
    VeCTMR_T_RedmUnderhoodAirTemp = rtb_Switch1_cy;

    /* SignalConversion generated from: '<S13>/VariantSource2' incorporates:
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/Calib'
     *  Constant: '<S292>/Calib'
     *  Constant: '<S294>/Calib'
     *  Constant: '<S301>/Calib'
     *  Constant: '<S302>/Calib'
     *  Constant: '<S382>/Calib'
     *  Constant: '<S384>/Calib'
     */
#if Rte_SysCon_Variant_CTMR_3

    /* Outputs for Atomic SubSystem: '<S13>/EnabledSubsystem' */
    /* Sum: '<S273>/Sum25' incorporates:
     *  Lookup_n-D: '<S280>/Vector'
     *  Lookup_n-D: '<S282>/Vector'
     *  SignalConversion generated from: '<S17>/VariantSource5'
     *  SignalConversion generated from: '<S9>/VariantSource5'
     *  Switch: '<S43>/Switch'
     */
    VeCTMR_T_HvbpRedmSS = look2_iflf_binlcapw(VeCTMR_I_RedmCurrent,
        VeCTMR_T_RedmUnderhoodAirTemp, ((const float32 *)
        &(KxCTMR_T_HvbpRedmEleTmpSSConCmp[0])), ((const float32 *)
        &(KyCTMR_T_HvbpRedmEleTmpSSConCmp[0])), ((const float32 *)
        &(KtCTMR_T_HvbpRedmEleTmpSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
        look1_iflf_binlcapw(VeCTMR_T_HVBP_REDM_Busbar_Temp, ((const float32 *)
        &(KxCTMR_T_HvbpRedmBusAdj[0])), ((const float32 *)
        &(KtCTMR_T_HvbpRedmBusAdj[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S273>/EdgeRising' */
    /* Logic: '<S278>/OR1' incorporates:
     *  UnitDelay: '<S278>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_nk;

    /* Update for UnitDelay: '<S278>/Unit Delay' incorporates:
     *  Constant: '<S273>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_nk = true;

    /* Outputs for Atomic SubSystem: '<S273>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S277>/Switch1' incorporates:
     *  Logic: '<S278>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S277>/Switch1' incorporates:
         *  Constant: '<S279>/Calib'
         *  MinMax: '<S273>/Max2'
         */
        rtb_Switch1_cy = fmaxf(VeCTMR_T_HvbpRedmSS,
                               KeCTMR_T_HvbpRedmConClmpInitTempMtrB);
    }
    else
    {
        /* Switch: '<S277>/Switch1' incorporates:
         *  Lookup_n-D: '<S281>/Vector'
         *  Product: '<S277>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource5'
         *  Sum: '<S277>/Subtraction'
         *  Sum: '<S277>/Summation'
         *  UnitDelay: '<S277>/UnitDelay'
         */
        rtb_Switch1_cy = ((VeCTMR_T_HvbpRedmSS - CTMR_ac_DW.UnitDelay_DSTATE_ho)
                          * look1_iflf_binlcapw(VeCTMR_I_RedmCurrent, ((const
                             float32 *)&(KxCTMR_T_HvbpRedmConCmpThmrCoef[0])),
                           ((const float32 *)&(KtCTMR_T_HvbpRedmConCmpThmrCoef[0])),
                           5U)) + CTMR_ac_DW.UnitDelay_DSTATE_ho;
    }

    /* End of Switch: '<S277>/Switch1' */
    /* End of Outputs for SubSystem: '<S273>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S277>/Limiter' */
    /* Switch: '<S283>/Switch1' incorporates:
     *  Constant: '<S273>/ConstantValue3'
     *  RelationalOperator: '<S283>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cy)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cy;
    }

    /* End of Switch: '<S283>/Switch1' */

    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S273>/ConstantValue4'
     *  RelationalOperator: '<S283>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S283>/Switch' */
        rtb_Switch_c0 = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S283>/Switch' */
        rtb_Switch_c0 = -10000.0F;
    }

    /* End of Switch: '<S283>/Switch' */
    /* End of Outputs for SubSystem: '<S277>/Limiter' */

    /* Update for UnitDelay: '<S277>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_ho = rtb_Switch_c0;

    /* End of Outputs for SubSystem: '<S273>/DigitalLowpassResetEnabled2' */

    /* Sum: '<S276>/Sum25' incorporates:
     *  Lookup_n-D: '<S287>/Vector'
     *  Lookup_n-D: '<S289>/Vector'
     *  SignalConversion generated from: '<S17>/VariantSource5'
     *  SignalConversion generated from: '<S7>/VariantSource4'
     *  SignalConversion generated from: '<S9>/VariantSource5'
     */
    VeCTMR_T_RedmConTempSS = look2_iflf_binlcapw(VeCTMR_I_RedmCurrent,
        VeCTMR_T_RedmUnderhoodAirTemp, ((const float32 *)
        &(KxCTMR_T_RedmEleTmpSSConCmp[0])), ((const float32 *)
        &(KyCTMR_T_RedmEleTmpSSConCmp[0])), ((const float32 *)
        &(KtCTMR_T_RedmEleTmpSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U) +
        look1_iflf_binlcapw(VeCTMR_T_RedmBusbar, ((const float32 *)
        &(KxCTMR_T_RedmCOnCmpBusAdj[0])), ((const float32 *)
        &(KtCTMR_T_RedmCOnCmpBusAdj[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S276>/EdgeRising' */
    /* Logic: '<S285>/OR1' incorporates:
     *  UnitDelay: '<S285>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_lk;

    /* Update for UnitDelay: '<S285>/Unit Delay' incorporates:
     *  Constant: '<S276>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_lk = true;

    /* Outputs for Atomic SubSystem: '<S276>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S284>/Switch1' incorporates:
     *  Logic: '<S285>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  Constant: '<S286>/Calib'
         *  MinMax: '<S276>/Max2'
         */
        rtb_Switch1_cy = fmaxf(VeCTMR_T_RedmConTempSS,
                               KeCTMR_T_RedmConClmpInitTempMtrB);
    }
    else
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  Lookup_n-D: '<S288>/Vector'
         *  Product: '<S284>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource5'
         *  Sum: '<S284>/Subtraction'
         *  Sum: '<S284>/Summation'
         *  UnitDelay: '<S284>/UnitDelay'
         */
        rtb_Switch1_cy = ((VeCTMR_T_RedmConTempSS -
                           CTMR_ac_DW.UnitDelay_DSTATE_p) * look1_iflf_binlcapw
                          (VeCTMR_I_RedmCurrent, ((const float32 *)
                            &(KxCTMR_T_RedmConCmpThmrCoef[0])), ((const float32 *)
                            &(KtCTMR_T_RedmConCmpThmrCoef[0])), 5U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S284>/Switch1' */
    /* End of Outputs for SubSystem: '<S276>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S284>/Limiter' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S276>/ConstantValue7'
     *  RelationalOperator: '<S290>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cy)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cy;
    }

    /* End of Switch: '<S290>/Switch1' */

    /* Switch: '<S290>/Switch' incorporates:
     *  Constant: '<S276>/ConstantValue8'
     *  RelationalOperator: '<S290>/RelationalOperator1'
     */
    if (rtb_Switch1_hx <= -10000.0F)
    {
        /* Switch: '<S290>/Switch' */
        rtb_Switch1_hx = -10000.0F;
    }

    /* End of Switch: '<S290>/Switch' */
    /* End of Outputs for SubSystem: '<S284>/Limiter' */

    /* Update for UnitDelay: '<S284>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_hx;

    /* End of Outputs for SubSystem: '<S276>/DigitalLowpassResetEnabled3' */
    CTMR_ac_B.Calib_au = KeCTMR_T_RedmConCmpTempLim;
    CTMR_ac_B.Calib_n = KeCTMR_T_HvbpRedmConCmpTempLim;

    /* SignalConversion generated from: '<S13>/VariantSource2' incorporates:
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/Calib'
     *  Constant: '<S382>/Calib'
     *  Constant: '<S384>/Calib'
     */
    CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[0] = CTMR_ac_B.Calib_au;
    CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[1] = CTMR_ac_B.Calib_n;

    /* End of Outputs for SubSystem: '<S13>/EnabledSubsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S13>/EnabledSubsystem1' */
    CTMR_ac_B.Calib_p = KeCTMR_T_MtrBDefValTemp1Lim;
    CTMR_ac_B.Calib_mp = KeCTMR_T_MtrBDefValTemp2Lim;

    /* End of Outputs for SubSystem: '<S13>/EnabledSubsystem1' */
#endif

    /* End of SignalConversion generated from: '<S13>/VariantSource2' */

    /* SignalConversion generated from: '<S13>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S13>/VariantSource2'
     */
#if Rte_SysCon_Variant_CTMR_3

    /* VariantMerge generated from: '<S14>/VariantSource4' */
    rtb_VariantMerge_For_Variant__b[0] = rtb_Switch1_hx;
    rtb_VariantMerge_For_Variant__b[1] = rtb_Switch_c0;

#else

    /* SignalConversion generated from: '<S13>/VariantSource2' */
    CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[0] = CTMR_ac_B.Calib_p;
    CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[1] = CTMR_ac_B.Calib_mp;

    /* VariantMerge generated from: '<S14>/VariantSource4' incorporates:
     *  Constant: '<S291>/Calib'
     *  Constant: '<S293>/Calib'
     *  SignalConversion generated from: '<S13>/VariantSource4'
     */
    rtb_VariantMerge_For_Variant__b[0] = KeCTMR_T_MtrBDefValTemp1;
    rtb_VariantMerge_For_Variant__b[1] = KeCTMR_T_MtrBDefValTemp2;

#endif

    /* End of SignalConversion generated from: '<S13>/VariantSource4' */
    for (i = 0; i < 2; i++)
    {
        /* SignalConversion generated from: '<S13>/VariantSource4' */
        VaCTMR_T_MtrBConTmps[i] = rtb_VariantMerge_For_Variant__b[i];
    }

    /* SignalConversion generated from: '<S14>/VariantSource3' incorporates:
     *  Constant: '<S301>/Calib'
     *  Constant: '<S302>/Calib'
     *  Constant: '<S382>/Calib'
     *  Constant: '<S384>/Calib'
     */
#if Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S14>/EnabledSubsystem' */
    CTMR_ac_B.Calib_mp = KeCTMR_T_HvbpFedmConCmpTempLim;
    CTMR_ac_B.Calib_p = KeCTMR_T_FedmConCmpTempLim;

    /* Lookup_n-D: '<S411>/Vector' incorporates:
     *  Constant: '<S301>/Calib'
     *  Constant: '<S302>/Calib'
     *  Lookup_n-D: '<S305>/Vector'
     *  SignalConversion generated from: '<S7>/VariantSource5'
     */
    rtb_Switch1_cy = look1_iflf_binlcapw(VeCTMR_T_FedmBusbar, ((const float32 *)
        &(KxCTMR_T_FedmConCmpBusAdj[0])), ((const float32 *)
        &(KtCTMR_T_FedmConCmpBusAdj[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S297>/EdgeRising' */
    /* Logic: '<S308>/OR1' incorporates:
     *  UnitDelay: '<S308>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_fc;

    /* Update for UnitDelay: '<S308>/Unit Delay' incorporates:
     *  Constant: '<S297>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_fc = true;

    /* Outputs for Atomic SubSystem: '<S297>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S307>/Switch1' incorporates:
     *  Logic: '<S308>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S307>/Switch1' incorporates:
         *  Constant: '<S309>/Calib'
         *  Lookup_n-D: '<S311>/Vector'
         *  Lookup_n-D: '<S312>/Vector'
         *  MinMax: '<S297>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S297>/Sum25'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S297>/UnitDelay2'
         */
        rtb_Switch1_cf = fmaxf((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_FedmConCmpTmpSS[0])), ((const float32 *)
            &(KyCTMR_T_FedmConCmpTmpSS[0])), ((const float32 *)
            &(KtCTMR_T_FedmConCmpTmpSS[0])), CTMR_ac_ConstP.pooled6, 6U) +
                                rtb_Switch1_cy) + look2_iflf_binlcapw
                               (VeCTMR_T_FEDM_Exh_Surf_Temp,
                                CTMR_ac_DW.UnitDelay2_DSTATE, ((const float32 *)
            &(KxCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
            &(KyCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
            &(KtCTMR_T_FedmExhRadSSNS[0])), CTMR_ac_ConstP.pooled7, 8U),
                               KeCTMR_T_RepbFedmConClmpInit);
    }
    else
    {
        /* Switch: '<S307>/Switch1' incorporates:
         *  Lookup_n-D: '<S310>/Vector'
         *  Lookup_n-D: '<S311>/Vector'
         *  Lookup_n-D: '<S312>/Vector'
         *  Product: '<S307>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S297>/Sum25'
         *  Sum: '<S307>/Subtraction'
         *  Sum: '<S307>/Summation'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S297>/UnitDelay2'
         *  UnitDelay: '<S307>/UnitDelay'
         */
        rtb_Switch1_cf = ((((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                              VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                               &(KxCTMR_T_FedmConCmpTmpSS[0])), ((const float32 *)
                               &(KyCTMR_T_FedmConCmpTmpSS[0])), ((const float32 *)
                               &(KtCTMR_T_FedmConCmpTmpSS[0])),
                              CTMR_ac_ConstP.pooled6, 6U) + rtb_Switch1_cy) +
                            look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                             CTMR_ac_DW.UnitDelay2_DSTATE, ((const float32 *)
                              &(KxCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
                              &(KyCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
                              &(KtCTMR_T_FedmExhRadSSNS[0])),
                             CTMR_ac_ConstP.pooled7, 8U)) -
                           CTMR_ac_DW.UnitDelay_DSTATE_j) * look1_iflf_binlcapw
                          (VeCTMR_I_FedmCurrent, ((const float32 *)
                            &(KxCTMR_T_FedmConCmpThmrCoefNS[0])), ((const
                             float32 *)&(KtCTMR_T_FedmConCmpThmrCoefNS[0])), 5U))
            + CTMR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S307>/Switch1' */
    /* End of Outputs for SubSystem: '<S297>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S307>/Limiter' */
    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S297>/ConstantValue7'
     *  RelationalOperator: '<S313>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cf)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cf;
    }

    /* End of Switch: '<S313>/Switch1' */

    /* Switch: '<S313>/Switch' incorporates:
     *  Constant: '<S297>/ConstantValue8'
     *  RelationalOperator: '<S313>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S313>/Switch' */
        rtb_Switch_c0 = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S313>/Switch' */
        rtb_Switch_c0 = -10000.0F;
    }

    /* End of Switch: '<S313>/Switch' */
    /* End of Outputs for SubSystem: '<S307>/Limiter' */

    /* Update for UnitDelay: '<S307>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch_c0;

    /* End of Outputs for SubSystem: '<S297>/DigitalLowpassResetEnabled3' */

    /* UnitDelay: '<S298>/UnitDelay1' */
    VeCTMR_T_FEDMConnClampShieldTempPrev = CTMR_ac_DW.UnitDelay1_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising' */
    /* Logic: '<S319>/OR1' incorporates:
     *  UnitDelay: '<S319>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_pwr;

    /* Update for UnitDelay: '<S319>/Unit Delay' incorporates:
     *  Constant: '<S298>/TRUEConstant1'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_pwr = true;

    /* End of Outputs for SubSystem: '<S298>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S298>/DigitalLowpassResetEnabled1' */
    /* UnitDelay: '<S314>/UnitDelay' */
    rtb_Switch1_cf = CTMR_ac_DW.UnitDelay_DSTATE_au;

    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising' */
    /* Switch: '<S314>/Switch1' incorporates:
     *  Logic: '<S319>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S314>/Switch1' incorporates:
         *  Constant: '<S326>/Calib'
         *  Lookup_n-D: '<S338>/Vector'
         *  MinMax: '<S298>/Max1'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S298>/UnitDelay1'
         */
        rtb_Switch1_cf = fmaxf(look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                                VeCTMR_T_FEDMConnClampShieldTempPrev, ((const
            float32 *)&(KxCTMR_T_FedmExhRadSS[0])), ((const float32 *)
            &(KyCTMR_T_FedmExhRadSS[0])), ((const float32 *)
            &(KtCTMR_T_FedmExhRadSS[0])), CTMR_ac_ConstP.pooled7, 8U),
                               KeCTMR_T_RepFedmExhAdjInit);
    }
    else
    {
        /* Switch: '<S314>/Switch1' incorporates:
         *  Constant: '<S325>/Calib'
         *  Lookup_n-D: '<S338>/Vector'
         *  Product: '<S314>/Multiplication'
         *  Sum: '<S314>/Subtraction'
         *  Sum: '<S314>/Summation'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S298>/UnitDelay1'
         */
        rtb_Switch1_cf += (look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                            VeCTMR_T_FEDMConnClampShieldTempPrev, ((const
                              float32 *)&(KxCTMR_T_FedmExhRadSS[0])), ((const
                              float32 *)&(KyCTMR_T_FedmExhRadSS[0])), ((const
                              float32 *)&(KtCTMR_T_FedmExhRadSS[0])),
                            CTMR_ac_ConstP.pooled7, 8U) - rtb_Switch1_cf) *
            KeCTMR_K_FedmExhRadThmr;
    }

    /* End of Switch: '<S314>/Switch1' */
    /* End of Outputs for SubSystem: '<S298>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S314>/Limiter' */
    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S298>/ConstantValue1'
     *  RelationalOperator: '<S339>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cf)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cf;
    }

    /* End of Switch: '<S339>/Switch1' */

    /* Switch: '<S339>/Switch' incorporates:
     *  Constant: '<S298>/ConstantValue2'
     *  RelationalOperator: '<S339>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S339>/Switch' */
        VeCTMR_T_FEDMExhTempADJ = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S339>/Switch' */
        VeCTMR_T_FEDMExhTempADJ = -10000.0F;
    }

    /* End of Switch: '<S339>/Switch' */
    /* End of Outputs for SubSystem: '<S314>/Limiter' */

    /* Update for UnitDelay: '<S314>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_au = VeCTMR_T_FEDMExhTempADJ;

    /* End of Outputs for SubSystem: '<S298>/DigitalLowpassResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising2' */
    /* Logic: '<S321>/OR1' incorporates:
     *  UnitDelay: '<S321>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_bf;

    /* Update for UnitDelay: '<S321>/Unit Delay' incorporates:
     *  Constant: '<S298>/TRUEConstant4'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_bf = true;

    /* Outputs for Atomic SubSystem: '<S298>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S317>/Switch1' incorporates:
     *  Logic: '<S321>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S329>/Calib'
         *  Lookup_n-D: '<S334>/Vector'
         *  MinMax: '<S298>/Max4'
         *  SignalConversion generated from: '<S7>/VariantSource5'
         */
        rtb_Switch1_cf = fmaxf(look1_iflf_binlcapw(VeCTMR_T_FedmBusbar, ((const
            float32 *)&(KxCTMR_T_FedmConHoShBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_FedmConHoShBusAdj[0])), 6U),
                               KeCTMR_T_RepbFedmConHldrSh1Init);
    }
    else
    {
        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S324>/Calib'
         *  Lookup_n-D: '<S334>/Vector'
         *  Product: '<S317>/Multiplication'
         *  SignalConversion generated from: '<S7>/VariantSource5'
         *  Sum: '<S317>/Subtraction'
         *  Sum: '<S317>/Summation'
         *  UnitDelay: '<S317>/UnitDelay'
         */
        rtb_Switch1_cf = ((look1_iflf_binlcapw(VeCTMR_T_FedmBusbar, ((const
                              float32 *)&(KxCTMR_T_FedmConHoShBusAdj[0])), ((
                              const float32 *)&(KtCTMR_T_FedmConHoShBusAdj[0])),
                            6U) - CTMR_ac_DW.UnitDelay_DSTATE_hu) *
                          KeCTMR_K_FedmBusAdjCoef) +
            CTMR_ac_DW.UnitDelay_DSTATE_hu;
    }

    /* End of Switch: '<S317>/Switch1' */
    /* End of Outputs for SubSystem: '<S298>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S317>/Limiter' */
    /* Switch: '<S342>/Switch1' incorporates:
     *  Constant: '<S298>/ConstantValue10'
     *  RelationalOperator: '<S342>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cf)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cf;
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Switch: '<S342>/Switch' incorporates:
     *  Constant: '<S298>/ConstantValue11'
     *  RelationalOperator: '<S342>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S342>/Switch' */
        rtb_Switch1_cf = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S342>/Switch' */
        rtb_Switch1_cf = -10000.0F;
    }

    /* End of Switch: '<S342>/Switch' */
    /* End of Outputs for SubSystem: '<S317>/Limiter' */

    /* Update for UnitDelay: '<S317>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_hu = rtb_Switch1_cf;

    /* End of Outputs for SubSystem: '<S298>/DigitalLowpassResetEnabled4' */

    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising3' */
    /* Logic: '<S322>/OR1' incorporates:
     *  UnitDelay: '<S322>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_hc;

    /* Update for UnitDelay: '<S322>/Unit Delay' incorporates:
     *  Constant: '<S298>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_hc = true;

    /* Outputs for Atomic SubSystem: '<S298>/DigitalLowpassResetEnabled5' */
    /* Switch: '<S318>/Switch1' incorporates:
     *  Logic: '<S322>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S318>/Switch1' incorporates:
         *  Constant: '<S330>/Calib'
         *  Lookup_n-D: '<S336>/Vector'
         *  MinMax: '<S298>/Max5'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         */
        rtb_Switch1_hr = fmaxf(look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_FedmEleConHoShSS[0])), ((const float32 *)
            &(KyCTMR_T_FedmEleConHoShSS[0])), ((const float32 *)
            &(KtCTMR_T_FedmEleConHoShSS[0])), CTMR_ac_ConstP.pooled8, 5U),
                               KeCTMR_T_RepbFedmConHldrSh2Init);
    }
    else
    {
        /* Switch: '<S318>/Switch1' incorporates:
         *  Lookup_n-D: '<S335>/Vector'
         *  Lookup_n-D: '<S336>/Vector'
         *  Product: '<S318>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S318>/Subtraction'
         *  Sum: '<S318>/Summation'
         *  UnitDelay: '<S318>/UnitDelay'
         */
        rtb_Switch1_hr = ((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                             &(KxCTMR_T_FedmEleConHoShSS[0])), ((const float32 *)
                             &(KyCTMR_T_FedmEleConHoShSS[0])), ((const float32 *)
                             &(KtCTMR_T_FedmEleConHoShSS[0])),
                            CTMR_ac_ConstP.pooled8, 5U) -
                           CTMR_ac_DW.UnitDelay_DSTATE_h) * look1_iflf_binlcapw
                          (VeCTMR_I_FedmCurrent, ((const float32 *)
                            &(KxCTMR_T_FedmConHoShThmrCoef[0])), ((const float32
                             *)&(KtCTMR_T_FedmConHoShThmrCoef[0])), 6U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S318>/Switch1' */
    /* End of Outputs for SubSystem: '<S298>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S318>/Limiter' */
    /* Switch: '<S343>/Switch1' incorporates:
     *  Constant: '<S298>/ConstantValue13'
     *  RelationalOperator: '<S343>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_hr)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_hr;
    }

    /* End of Switch: '<S343>/Switch1' */

    /* Switch: '<S343>/Switch' incorporates:
     *  Constant: '<S298>/ConstantValue14'
     *  RelationalOperator: '<S343>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S343>/Switch' */
        rtb_Switch1_hr = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S343>/Switch' */
        rtb_Switch1_hr = -10000.0F;
    }

    /* End of Switch: '<S343>/Switch' */
    /* End of Outputs for SubSystem: '<S318>/Limiter' */

    /* Update for UnitDelay: '<S318>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_hr;

    /* End of Outputs for SubSystem: '<S298>/DigitalLowpassResetEnabled5' */

    /* Sum: '<S298>/Sum24' */
    VeCTMR_T_FEDMConnHolderShieldTemp = (rtb_Switch1_cf +
        VeCTMR_T_FEDMExhTempADJ) + rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising1' */
    /* Logic: '<S320>/OR1' incorporates:
     *  UnitDelay: '<S320>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_g2;

    /* Update for UnitDelay: '<S320>/Unit Delay' incorporates:
     *  Constant: '<S298>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_g2 = true;

    /* Outputs for Atomic SubSystem: '<S298>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S315>/Switch1' incorporates:
     *  Logic: '<S320>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S315>/Switch1' incorporates:
         *  Constant: '<S328>/Calib'
         *  Lookup_n-D: '<S337>/Vector'
         *  MinMax: '<S298>/Max3'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Sum: '<S298>/Sum24'
         */
        rtb_Switch1_cf = fmaxf(look2_iflf_binlcapw
                               (VeCTMR_T_FEDMConnHolderShieldTemp,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_FedmEleTmpSSConCmpSh[0])), ((const float32 *)
            &(KyCTMR_T_FedmEleTmpSSConCmpSh[0])), ((const float32 *)
            &(KtCTMR_T_FedmEleTmpSSConCmpSh[0])), CTMR_ac_ConstP.pooled9, 7U),
                               KeCTMR_T_RepbFedmConCmpShPrevInit);
    }
    else
    {
        /* Switch: '<S315>/Switch1' incorporates:
         *  Lookup_n-D: '<S331>/Vector'
         *  Lookup_n-D: '<S337>/Vector'
         *  Product: '<S315>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Sum: '<S298>/Sum24'
         *  Sum: '<S315>/Subtraction'
         *  Sum: '<S315>/Summation'
         *  UnitDelay: '<S315>/UnitDelay'
         */
        rtb_Switch1_cf = ((look2_iflf_binlcapw(VeCTMR_T_FEDMConnHolderShieldTemp,
                            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                             &(KxCTMR_T_FedmEleTmpSSConCmpSh[0])), ((const
                              float32 *)&(KyCTMR_T_FedmEleTmpSSConCmpSh[0])), ((
                              const float32 *)&(KtCTMR_T_FedmEleTmpSSConCmpSh[0])),
                            CTMR_ac_ConstP.pooled9, 7U) -
                           CTMR_ac_DW.UnitDelay_DSTATE_g) * look1_iflf_binlcapw
                          (VeCTMR_T_FEDMConnHolderShieldTemp, ((const float32 *)
                            &(KxCTMR_T_ConCmpShThmrCoef[0])), ((const float32 *)
                            &(KtCTMR_T_ConCmpShThmrCoef[0])), 6U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S315>/Switch1' */
    /* End of Outputs for SubSystem: '<S298>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S315>/Limiter' */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S298>/ConstantValue4'
     *  RelationalOperator: '<S340>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cf)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cf;
    }

    /* End of Switch: '<S340>/Switch1' */

    /* Switch: '<S340>/Switch' incorporates:
     *  Constant: '<S298>/ConstantValue5'
     *  RelationalOperator: '<S340>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S340>/Switch' */
        rtb_MtrBUHoodTmp_b = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S340>/Switch' */
        rtb_MtrBUHoodTmp_b = -10000.0F;
    }

    /* End of Switch: '<S340>/Switch' */
    /* End of Outputs for SubSystem: '<S315>/Limiter' */

    /* Update for UnitDelay: '<S315>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_g = rtb_MtrBUHoodTmp_b;

    /* End of Outputs for SubSystem: '<S298>/DigitalLowpassResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising4' */
    /* Logic: '<S323>/OR1' incorporates:
     *  UnitDelay: '<S323>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_m25;

    /* Update for UnitDelay: '<S323>/Unit Delay' incorporates:
     *  Constant: '<S298>/TRUEConstant3'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_m25 = true;

    /* Outputs for Atomic SubSystem: '<S298>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S316>/Switch1' incorporates:
     *  Logic: '<S323>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S316>/Switch1' incorporates:
         *  Constant: '<S327>/Calib'
         *  Lookup_n-D: '<S333>/Vector'
         *  MinMax: '<S298>/Max2'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S298>/Sum25'
         *  UnitDelay: '<S298>/UnitDelay1'
         */
        rtb_Switch1_cy = fmaxf(look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                                VeCTMR_T_FEDMConnClampShieldTempPrev, ((const
            float32 *)&(KxCTMR_T_FedmConCmpTmpSS[0])), ((const float32 *)
            &(KyCTMR_T_FedmConCmpTmpSS[0])), ((const float32 *)
            &(KtCTMR_T_FedmConCmpTmpSS[0])), CTMR_ac_ConstP.pooled6, 6U) +
                               rtb_Switch1_cy, KeCTMR_T_RepbFedmConClmpInit);
    }
    else
    {
        /* Switch: '<S316>/Switch1' incorporates:
         *  Lookup_n-D: '<S332>/Vector'
         *  Lookup_n-D: '<S333>/Vector'
         *  Product: '<S316>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S298>/Sum25'
         *  Sum: '<S316>/Subtraction'
         *  Sum: '<S316>/Summation'
         *  UnitDelay: '<S298>/UnitDelay1'
         *  UnitDelay: '<S316>/UnitDelay'
         */
        rtb_Switch1_cy = (((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                             VeCTMR_T_FEDMConnClampShieldTempPrev, ((const
                               float32 *)&(KxCTMR_T_FedmConCmpTmpSS[0])), ((
                               const float32 *)&(KyCTMR_T_FedmConCmpTmpSS[0])),
                             ((const float32 *)&(KtCTMR_T_FedmConCmpTmpSS[0])),
                             CTMR_ac_ConstP.pooled6, 6U) + rtb_Switch1_cy) -
                           CTMR_ac_DW.UnitDelay_DSTATE_hj) * look1_iflf_binlcapw
                          (VeCTMR_I_FedmCurrent, ((const float32 *)
                            &(KxCTMR_T_FedmConCmpThmrCoef[0])), ((const float32 *)
                            &(KtCTMR_T_FedmConCmpThmrCoef[0])), 5U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_hj;
    }

    /* End of Switch: '<S316>/Switch1' */
    /* End of Outputs for SubSystem: '<S298>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S316>/Limiter' */
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S298>/ConstantValue7'
     *  RelationalOperator: '<S341>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cy)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cy;
    }

    /* End of Switch: '<S341>/Switch1' */

    /* Switch: '<S341>/Switch' incorporates:
     *  Constant: '<S298>/ConstantValue8'
     *  RelationalOperator: '<S341>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S341>/Switch' */
        rtb_Switch1_cf = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S341>/Switch' */
        rtb_Switch1_cf = -10000.0F;
    }

    /* End of Switch: '<S341>/Switch' */
    /* End of Outputs for SubSystem: '<S316>/Limiter' */

    /* Update for UnitDelay: '<S316>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_hj = rtb_Switch1_cf;

    /* End of Outputs for SubSystem: '<S298>/DigitalLowpassResetEnabled3' */

    /* Switch: '<S413>/Switch1' incorporates:
     *  Lookup_n-D: '<S306>/Vector'
     *  SignalConversion generated from: '<S8>/VariantSource3'
     */
    rtb_Switch1_cy = look1_iflf_binlcapw(rtb_SigConvForSigProp_VariantSo, ((
        const float32 *)&(KxCTMR_T_HvbpFedmConCmpBusAdj[0])), ((const float32 *)
        &(KtCTMR_T_HvbpFedmConCmpBusAdj[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S299>/EdgeRising' */
    /* Logic: '<S345>/OR1' incorporates:
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ij;

    /* Update for UnitDelay: '<S345>/Unit Delay' incorporates:
     *  Constant: '<S299>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ij = true;

    /* Outputs for Atomic SubSystem: '<S299>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S344>/Switch1' incorporates:
     *  Logic: '<S345>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S344>/Switch1' incorporates:
         *  Constant: '<S346>/Calib'
         *  Lookup_n-D: '<S347>/Vector'
         *  Lookup_n-D: '<S349>/Vector'
         *  MinMax: '<S299>/Max2'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S299>/Sum25'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S299>/UnitDelay3'
         */
        rtb_Switch1_hr = fmaxf((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_HvbpFedmEleTmpSSConCmp[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmEleTmpSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmEleTmpSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U)
                                + rtb_Switch1_cy) + look2_iflf_binlcapw
                               (VeCTMR_T_FEDM_Exh_Surf_Temp,
                                CTMR_ac_DW.UnitDelay3_DSTATE, ((const float32 *)
            &(KxCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
            &(KyCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
            &(KtCTMR_T_FedmExhRadSSNS[0])), CTMR_ac_ConstP.pooled7, 8U),
                               KeCTMR_T_RepbHvbpFedmConClmpInit);
    }
    else
    {
        /* Switch: '<S344>/Switch1' incorporates:
         *  Lookup_n-D: '<S347>/Vector'
         *  Lookup_n-D: '<S348>/Vector'
         *  Lookup_n-D: '<S349>/Vector'
         *  Product: '<S344>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S299>/Sum25'
         *  Sum: '<S344>/Subtraction'
         *  Sum: '<S344>/Summation'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S299>/UnitDelay3'
         *  UnitDelay: '<S344>/UnitDelay'
         */
        rtb_Switch1_hr = ((((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                              VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                               &(KxCTMR_T_HvbpFedmEleTmpSSConCmp[0])), ((const
                                float32 *)&(KyCTMR_T_HvbpFedmEleTmpSSConCmp[0])),
                              ((const float32 *)
                               &(KtCTMR_T_HvbpFedmEleTmpSSConCmp[0])),
                              CTMR_ac_ConstP.pooled6, 6U) + rtb_Switch1_cy) +
                            look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                             CTMR_ac_DW.UnitDelay3_DSTATE, ((const float32 *)
                              &(KxCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
                              &(KyCTMR_T_FedmExhRadSSNS[0])), ((const float32 *)
                              &(KtCTMR_T_FedmExhRadSSNS[0])),
                             CTMR_ac_ConstP.pooled7, 8U)) -
                           CTMR_ac_DW.UnitDelay_DSTATE_e) * look1_iflf_binlcapw
                          (VeCTMR_I_FedmCurrent, ((const float32 *)
                            &(KxCTMR_T_HvbpFedmConCmpThmrCoefNS[0])), ((const
                             float32 *)&(KtCTMR_T_HvbpFedmConCmpThmrCoefNS[0])),
                           5U)) + CTMR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S344>/Switch1' */
    /* End of Outputs for SubSystem: '<S299>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S344>/Limiter' */
    /* Switch: '<S350>/Switch1' incorporates:
     *  Constant: '<S299>/ConstantValue3'
     *  RelationalOperator: '<S350>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_hr)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_hr;
    }

    /* End of Switch: '<S350>/Switch1' */

    /* Switch: '<S350>/Switch' incorporates:
     *  Constant: '<S299>/ConstantValue4'
     *  RelationalOperator: '<S350>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S350>/Switch' */
        rtb_MtrBUHoodTmp = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S350>/Switch' */
        rtb_MtrBUHoodTmp = -10000.0F;
    }

    /* End of Switch: '<S350>/Switch' */
    /* End of Outputs for SubSystem: '<S344>/Limiter' */

    /* Update for UnitDelay: '<S344>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_e = rtb_MtrBUHoodTmp;

    /* End of Outputs for SubSystem: '<S299>/DigitalLowpassResetEnabled2' */

    /* UnitDelay: '<S300>/UnitDelay1' */
    VeCTMR_T_THVBPFEDMConnClampShieldTempPrev = CTMR_ac_DW.UnitDelay1_DSTATE_i;

    /* Outputs for Atomic SubSystem: '<S300>/EdgeRising' */
    /* Logic: '<S356>/OR1' incorporates:
     *  UnitDelay: '<S356>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_bb;

    /* Update for UnitDelay: '<S356>/Unit Delay' incorporates:
     *  Constant: '<S300>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_bb = true;

    /* End of Outputs for SubSystem: '<S300>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S300>/DigitalLowpassResetEnabled1' */
    /* UnitDelay: '<S351>/UnitDelay' */
    rtb_Switch1_hr = CTMR_ac_DW.UnitDelay_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S300>/EdgeRising' */
    /* Switch: '<S351>/Switch1' incorporates:
     *  Logic: '<S356>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S351>/Switch1' incorporates:
         *  Constant: '<S363>/Calib'
         *  Lookup_n-D: '<S375>/Vector'
         *  MinMax: '<S300>/Max1'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S300>/UnitDelay1'
         */
        rtb_Switch1_hr = fmaxf(look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                                VeCTMR_T_THVBPFEDMConnClampShieldTempPrev, ((
            const float32 *)&(KxCTMR_T_HvbpFedmExhRadSS[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmExhRadSS[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmExhRadSS[0])), CTMR_ac_ConstP.pooled7, 8U),
                               KeCTMR_T_RepHvbpFedmExhAdjInit);
    }
    else
    {
        /* Switch: '<S351>/Switch1' incorporates:
         *  Constant: '<S362>/Calib'
         *  Lookup_n-D: '<S375>/Vector'
         *  Product: '<S351>/Multiplication'
         *  Sum: '<S351>/Subtraction'
         *  Sum: '<S351>/Summation'
         *  Switch: '<S67>/Switch'
         *  UnitDelay: '<S300>/UnitDelay1'
         */
        rtb_Switch1_hr += (look2_iflf_binlcapw(VeCTMR_T_FEDM_Exh_Surf_Temp,
                            VeCTMR_T_THVBPFEDMConnClampShieldTempPrev, ((const
                              float32 *)&(KxCTMR_T_HvbpFedmExhRadSS[0])), ((
                              const float32 *)&(KyCTMR_T_HvbpFedmExhRadSS[0])),
                            ((const float32 *)&(KtCTMR_T_HvbpFedmExhRadSS[0])),
                            CTMR_ac_ConstP.pooled7, 8U) - rtb_Switch1_hr) *
            KeCTMR_T_HvbpFedmExhRadThmr;
    }

    /* End of Switch: '<S351>/Switch1' */
    /* End of Outputs for SubSystem: '<S300>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S351>/Limiter' */
    /* Switch: '<S376>/Switch1' incorporates:
     *  Constant: '<S300>/ConstantValue1'
     *  RelationalOperator: '<S376>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_hr)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_hr;
    }

    /* End of Switch: '<S376>/Switch1' */

    /* Switch: '<S376>/Switch' incorporates:
     *  Constant: '<S300>/ConstantValue2'
     *  RelationalOperator: '<S376>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S376>/Switch' */
        VeCTMR_T_HVBPFEDMExhTempADJ = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S376>/Switch' */
        VeCTMR_T_HVBPFEDMExhTempADJ = -10000.0F;
    }

    /* End of Switch: '<S376>/Switch' */
    /* End of Outputs for SubSystem: '<S351>/Limiter' */

    /* Update for UnitDelay: '<S351>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_n = VeCTMR_T_HVBPFEDMExhTempADJ;

    /* End of Outputs for SubSystem: '<S300>/DigitalLowpassResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S300>/EdgeRising4' */
    /* Logic: '<S360>/OR1' incorporates:
     *  UnitDelay: '<S360>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_m3;

    /* Update for UnitDelay: '<S360>/Unit Delay' incorporates:
     *  Constant: '<S300>/TRUEConstant1'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_m3 = true;

    /* Outputs for Atomic SubSystem: '<S300>/DigitalLowpassResetEnabled2' */
    /* Switch: '<S352>/Switch1' incorporates:
     *  Logic: '<S360>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S352>/Switch1' incorporates:
         *  Constant: '<S364>/Calib'
         *  Lookup_n-D: '<S374>/Vector'
         *  MinMax: '<S300>/Max2'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S300>/Sum25'
         *  UnitDelay: '<S300>/UnitDelay1'
         */
        rtb_Switch1_cy = fmaxf(look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                                VeCTMR_T_THVBPFEDMConnClampShieldTempPrev, ((
            const float32 *)&(KxCTMR_T_HvbpFedmEleTmpSSConCmp[0])), ((const
            float32 *)&(KyCTMR_T_HvbpFedmEleTmpSSConCmp[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmEleTmpSSConCmp[0])), CTMR_ac_ConstP.pooled6, 6U)
                               + rtb_Switch1_cy,
                               KeCTMR_T_RepbHvbpFedmConClmpInit);
    }
    else
    {
        /* Switch: '<S352>/Switch1' incorporates:
         *  Lookup_n-D: '<S370>/Vector'
         *  Lookup_n-D: '<S374>/Vector'
         *  Product: '<S352>/Multiplication'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S300>/Sum25'
         *  Sum: '<S352>/Subtraction'
         *  Sum: '<S352>/Summation'
         *  UnitDelay: '<S300>/UnitDelay1'
         *  UnitDelay: '<S352>/UnitDelay'
         */
        rtb_Switch1_cy = (((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                             VeCTMR_T_THVBPFEDMConnClampShieldTempPrev, ((const
                               float32 *)&(KxCTMR_T_HvbpFedmEleTmpSSConCmp[0])),
                             ((const float32 *)
                              &(KyCTMR_T_HvbpFedmEleTmpSSConCmp[0])), ((const
                               float32 *)&(KtCTMR_T_HvbpFedmEleTmpSSConCmp[0])),
                             CTMR_ac_ConstP.pooled6, 6U) + rtb_Switch1_cy) -
                           CTMR_ac_DW.UnitDelay_DSTATE_a) * look1_iflf_binlcapw
                          (VeCTMR_I_FedmCurrent, ((const float32 *)
                            &(KxCTMR_T_HvbpFedmConCmpThmrCoef[0])), ((const
                             float32 *)&(KtCTMR_T_HvbpFedmConCmpThmrCoef[0])),
                           5U)) + CTMR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* End of Switch: '<S352>/Switch1' */
    /* End of Outputs for SubSystem: '<S300>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S352>/Limiter' */
    /* Switch: '<S377>/Switch1' incorporates:
     *  Constant: '<S300>/ConstantValue3'
     *  RelationalOperator: '<S377>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_cy)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_cy;
    }

    /* End of Switch: '<S377>/Switch1' */

    /* Switch: '<S377>/Switch' incorporates:
     *  Constant: '<S300>/ConstantValue4'
     *  RelationalOperator: '<S377>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S377>/Switch' */
        rtb_Switch1_cy = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S377>/Switch' */
        rtb_Switch1_cy = -10000.0F;
    }

    /* End of Switch: '<S377>/Switch' */
    /* End of Outputs for SubSystem: '<S352>/Limiter' */

    /* Update for UnitDelay: '<S352>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch1_cy;

    /* End of Outputs for SubSystem: '<S300>/DigitalLowpassResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S300>/EdgeRising2' */
    /* Logic: '<S358>/OR1' incorporates:
     *  UnitDelay: '<S358>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ow;

    /* Update for UnitDelay: '<S358>/Unit Delay' incorporates:
     *  Constant: '<S300>/TRUEConstant4'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ow = true;

    /* Outputs for Atomic SubSystem: '<S300>/DigitalLowpassResetEnabled4' */
    /* Switch: '<S354>/Switch1' incorporates:
     *  Logic: '<S358>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S354>/Switch1' incorporates:
         *  Constant: '<S366>/Calib'
         *  Lookup_n-D: '<S368>/Vector'
         *  MinMax: '<S300>/Max4'
         *  SignalConversion generated from: '<S8>/VariantSource3'
         */
        rtb_SigConvForSigProp_VariantSo = fmaxf(look1_iflf_binlcapw
            (rtb_SigConvForSigProp_VariantSo, ((const float32 *)
            &(KxCTMR_T_HvbpFedmCOnHoShBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmCOnHoShBusAdj[0])), 6U),
            KeCTMR_T_RepbHvbpFedmConHldrSh1Init);
    }
    else
    {
        /* Switch: '<S354>/Switch1' incorporates:
         *  Constant: '<S361>/Calib'
         *  Lookup_n-D: '<S368>/Vector'
         *  Product: '<S354>/Multiplication'
         *  SignalConversion generated from: '<S8>/VariantSource3'
         *  Sum: '<S354>/Subtraction'
         *  Sum: '<S354>/Summation'
         *  UnitDelay: '<S354>/UnitDelay'
         */
        rtb_SigConvForSigProp_VariantSo = ((look1_iflf_binlcapw
            (rtb_SigConvForSigProp_VariantSo, ((const float32 *)
            &(KxCTMR_T_HvbpFedmCOnHoShBusAdj[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmCOnHoShBusAdj[0])), 6U) -
            CTMR_ac_DW.UnitDelay_DSTATE_i) * KeCTMR_T_HvbpFedmBusAdjCoef) +
            CTMR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* End of Switch: '<S354>/Switch1' */
    /* End of Outputs for SubSystem: '<S300>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S354>/Limiter' */
    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S300>/ConstantValue10'
     *  RelationalOperator: '<S379>/RelationalOperator'
     */
    if (10000.0F < rtb_SigConvForSigProp_VariantSo)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_SigConvForSigProp_VariantSo;
    }

    /* End of Switch: '<S379>/Switch1' */

    /* Switch: '<S379>/Switch' incorporates:
     *  Constant: '<S300>/ConstantValue11'
     *  RelationalOperator: '<S379>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S379>/Switch' */
        rtb_SigConvForSigProp_VariantSo = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S379>/Switch' */
        rtb_SigConvForSigProp_VariantSo = -10000.0F;
    }

    /* End of Switch: '<S379>/Switch' */
    /* End of Outputs for SubSystem: '<S354>/Limiter' */

    /* Update for UnitDelay: '<S354>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_i = rtb_SigConvForSigProp_VariantSo;

    /* End of Outputs for SubSystem: '<S300>/DigitalLowpassResetEnabled4' */

    /* Outputs for Atomic SubSystem: '<S300>/EdgeRising3' */
    /* Logic: '<S359>/OR1' incorporates:
     *  UnitDelay: '<S359>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_jj;

    /* Update for UnitDelay: '<S359>/Unit Delay' incorporates:
     *  Constant: '<S300>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_jj = true;

    /* Outputs for Atomic SubSystem: '<S300>/DigitalLowpassResetEnabled5' */
    /* Switch: '<S355>/Switch1' incorporates:
     *  Logic: '<S359>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S355>/Switch1' incorporates:
         *  Constant: '<S367>/Calib'
         *  Lookup_n-D: '<S372>/Vector'
         *  MinMax: '<S300>/Max5'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         */
        rtb_Switch1_hr = fmaxf(look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                                VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_HvbpFedmEleConHoShSS[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmEleConHoShSS[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmEleConHoShSS[0])), CTMR_ac_ConstP.pooled8, 5U),
                               KeCTMR_T_RepbHvbpFedmConHldrSh2Init);
    }
    else
    {
        /* Switch: '<S355>/Switch1' incorporates:
         *  Lookup_n-D: '<S371>/Vector'
         *  Lookup_n-D: '<S372>/Vector'
         *  Product: '<S355>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  SignalConversion generated from: '<S9>/VariantSource6'
         *  Sum: '<S355>/Subtraction'
         *  Sum: '<S355>/Summation'
         *  UnitDelay: '<S355>/UnitDelay'
         */
        rtb_Switch1_hr = ((look2_iflf_binlcapw(VeCTMR_I_FedmCurrent,
                            VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
                             &(KxCTMR_T_HvbpFedmEleConHoShSS[0])), ((const
                              float32 *)&(KyCTMR_T_HvbpFedmEleConHoShSS[0])), ((
                              const float32 *)&(KtCTMR_T_HvbpFedmEleConHoShSS[0])),
                            CTMR_ac_ConstP.pooled8, 5U) -
                           CTMR_ac_DW.UnitDelay_DSTATE_l) * look1_iflf_binlcapw
                          (VeCTMR_I_FedmCurrent, ((const float32 *)
                            &(KxCTMR_T_HvbpFedmConHoShThrmCoef[0])), ((const
                             float32 *)&(KtCTMR_T_HvbpFedmConHoShThrmCoef[0])),
                           6U)) + CTMR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* End of Switch: '<S355>/Switch1' */
    /* End of Outputs for SubSystem: '<S300>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S355>/Limiter' */
    /* Switch: '<S380>/Switch1' incorporates:
     *  Constant: '<S300>/ConstantValue13'
     *  RelationalOperator: '<S380>/RelationalOperator'
     */
    if (10000.0F < rtb_Switch1_hr)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_Switch1_hr;
    }

    /* End of Switch: '<S380>/Switch1' */

    /* Switch: '<S380>/Switch' incorporates:
     *  Constant: '<S300>/ConstantValue14'
     *  RelationalOperator: '<S380>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S380>/Switch' */
        rtb_Switch1_hr = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S380>/Switch' */
        rtb_Switch1_hr = -10000.0F;
    }

    /* End of Switch: '<S380>/Switch' */
    /* End of Outputs for SubSystem: '<S355>/Limiter' */

    /* Update for UnitDelay: '<S355>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_hr;

    /* End of Outputs for SubSystem: '<S300>/DigitalLowpassResetEnabled5' */

    /* Sum: '<S300>/Sum24' */
    VeCTMR_T_HVBPFEDMConnHolderShieldTemp = (rtb_SigConvForSigProp_VariantSo +
        VeCTMR_T_HVBPFEDMExhTempADJ) + rtb_Switch1_hr;

    /* Outputs for Atomic SubSystem: '<S300>/EdgeRising1' */
    /* Logic: '<S357>/OR1' incorporates:
     *  UnitDelay: '<S357>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_hoc;

    /* Update for UnitDelay: '<S357>/Unit Delay' incorporates:
     *  Constant: '<S300>/TRUEConstant3'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_hoc = true;

    /* Outputs for Atomic SubSystem: '<S300>/DigitalLowpassResetEnabled3' */
    /* Switch: '<S353>/Switch1' incorporates:
     *  Logic: '<S357>/AND'
     */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S353>/Switch1' incorporates:
         *  Constant: '<S365>/Calib'
         *  Lookup_n-D: '<S373>/Vector'
         *  MinMax: '<S300>/Max3'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Sum: '<S300>/Sum24'
         */
        rtb_SigConvForSigProp_VariantSo = fmaxf(look2_iflf_binlcapw
            (VeCTMR_T_HVBPFEDMConnHolderShieldTemp,
             VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_HvbpFedmEleSSConCmpSh[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmEleSSConCmpSh[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmEleSSConCmpSh[0])), CTMR_ac_ConstP.pooled9, 7U),
            KeCTMR_T_RepbHvbpFedmConCmpShPrevInit);
    }
    else
    {
        /* Switch: '<S353>/Switch1' incorporates:
         *  Lookup_n-D: '<S369>/Vector'
         *  Lookup_n-D: '<S373>/Vector'
         *  Product: '<S353>/Multiplication'
         *  SignalConversion generated from: '<S17>/VariantSource6'
         *  Sum: '<S300>/Sum24'
         *  Sum: '<S353>/Subtraction'
         *  Sum: '<S353>/Summation'
         *  UnitDelay: '<S353>/UnitDelay'
         */
        rtb_SigConvForSigProp_VariantSo = ((look2_iflf_binlcapw
            (VeCTMR_T_HVBPFEDMConnHolderShieldTemp,
             VeCTMR_T_FedmUnderhoodAirTemp, ((const float32 *)
            &(KxCTMR_T_HvbpFedmEleSSConCmpSh[0])), ((const float32 *)
            &(KyCTMR_T_HvbpFedmEleSSConCmpSh[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmEleSSConCmpSh[0])), CTMR_ac_ConstP.pooled9, 7U) -
            CTMR_ac_DW.UnitDelay_DSTATE_m2) * look1_iflf_binlcapw
            (VeCTMR_T_HVBPFEDMConnHolderShieldTemp, ((const float32 *)
            &(KxCTMR_T_HvbpFedmConCmpShThmrCoef[0])), ((const float32 *)
            &(KtCTMR_T_HvbpFedmConCmpShThmrCoef[0])), 6U)) +
            CTMR_ac_DW.UnitDelay_DSTATE_m2;
    }

    /* End of Switch: '<S353>/Switch1' */
    /* End of Outputs for SubSystem: '<S300>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S353>/Limiter' */
    /* Switch: '<S378>/Switch1' incorporates:
     *  Constant: '<S300>/ConstantValue7'
     *  RelationalOperator: '<S378>/RelationalOperator'
     */
    if (10000.0F < rtb_SigConvForSigProp_VariantSo)
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = 10000.0F;
    }
    else
    {
        /* Switch: '<S378>/Switch1' */
        rtb_Switch1_hx = rtb_SigConvForSigProp_VariantSo;
    }

    /* End of Switch: '<S378>/Switch1' */

    /* Switch: '<S378>/Switch' incorporates:
     *  Constant: '<S300>/ConstantValue8'
     *  RelationalOperator: '<S378>/RelationalOperator1'
     */
    if (rtb_Switch1_hx > -10000.0F)
    {
        /* Switch: '<S378>/Switch' */
        rtb_SigConvForSigProp_VariantSo = rtb_Switch1_hx;
    }
    else
    {
        /* Switch: '<S378>/Switch' */
        rtb_SigConvForSigProp_VariantSo = -10000.0F;
    }

    /* End of Switch: '<S378>/Switch' */
    /* End of Outputs for SubSystem: '<S353>/Limiter' */

    /* Update for UnitDelay: '<S353>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_m2 = rtb_SigConvForSigProp_VariantSo;

    /* End of Outputs for SubSystem: '<S300>/DigitalLowpassResetEnabled3' */

    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S303>/Calib'
     *  Switch: '<S295>/Switch1'
     */
    if (KeCTMR_b_FEDMHarnessShield)
    {
        /* Switch: '<S295>/Switch1' */
        rtb_Switch1_hr = rtb_Switch1_cy;
    }
    else
    {
        /* Switch: '<S295>/Switch' */
        rtb_Switch1_cf = rtb_Switch_c0;

        /* Switch: '<S295>/Switch1' */
        rtb_Switch1_hr = rtb_MtrBUHoodTmp;
    }

    /* End of Switch: '<S295>/Switch' */

    /* Update for UnitDelay: '<S297>/UnitDelay2' */
    CTMR_ac_DW.UnitDelay2_DSTATE = rtb_Switch_c0;

    /* Update for UnitDelay: '<S298>/UnitDelay1' incorporates:
     *  Sum: '<S298>/Sum8'
     */
    CTMR_ac_DW.UnitDelay1_DSTATE_l = VeCTMR_T_FEDMExhTempADJ +
        rtb_MtrBUHoodTmp_b;

    /* Update for UnitDelay: '<S299>/UnitDelay3' */
    CTMR_ac_DW.UnitDelay3_DSTATE = rtb_MtrBUHoodTmp;

    /* Update for UnitDelay: '<S300>/UnitDelay1' incorporates:
     *  Sum: '<S300>/Sum8'
     */
    CTMR_ac_DW.UnitDelay1_DSTATE_i = VeCTMR_T_HVBPFEDMExhTempADJ +
        rtb_SigConvForSigProp_VariantSo;

    /* SignalConversion generated from: '<S14>/VariantSource3' */
    CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[0] = CTMR_ac_B.Calib_p;
    CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[1] = CTMR_ac_B.Calib_mp;

    /* End of Outputs for SubSystem: '<S14>/EnabledSubsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S14>/EnabledSubsystem1' */
    CTMR_ac_B.Calib_n = KeCTMR_T_MtrBDefValTemp1Lim;
    CTMR_ac_B.Calib_au = KeCTMR_T_MtrBDefValTemp2Lim;

    /* End of Outputs for SubSystem: '<S14>/EnabledSubsystem1' */
#endif

    /* End of SignalConversion generated from: '<S14>/VariantSource3' */

    /* SignalConversion generated from: '<S14>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S14>/VariantSource3'
     */
#if Rte_SysCon_Variant_CTMR_5

    /* VariantMerge generated from: '<S14>/VariantSource4' */
    rtb_VariantMerge_For_Variant__b[0] = rtb_Switch1_cf;
    rtb_VariantMerge_For_Variant__b[1] = rtb_Switch1_hr;

#else

    /* SignalConversion generated from: '<S14>/VariantSource3' */
    CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[0] = CTMR_ac_B.Calib_n;
    CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[1] = CTMR_ac_B.Calib_au;

#endif

    /* End of SignalConversion generated from: '<S14>/VariantSource4' */

    /* UnitDelay: '<S15>/UnitDelay1' incorporates:
     *  Logic: '<S15>/LogicalOperator2'
     *  Lookup_n-D: '<S409>/Vector'
     *  Lookup_n-D: '<S411>/Vector'
     *  Lookup_n-D: '<S412>/Vector'
     *  Product: '<S15>/Product'
     *  SignalConversion generated from: '<S14>/VariantSource4'
     *  SignalConversion generated from: '<S6>/VariantSource1'
     *  Sum: '<S15>/Sum3'
     * */
#if Rte_SysCon_Variant_CTMR_5

    /* Outputs for Atomic SubSystem: '<S15>/DigitalLowpassResetEnabled1' */
    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S15>/DigitalLowpassResetEnabled3' */
    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S15>/DigitalLowpassResetEnabled4' */
    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S15>/DigitalLowpassResetEnabled2' */
    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising3' */
    /* Logic: '<S392>/AND' incorporates:
     *  Logic: '<S392>/OR1'
     *  UnitDelay: '<S392>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_be;

    /* Update for UnitDelay: '<S392>/Unit Delay' incorporates:
     *  Constant: '<S15>/TRUEConstant1'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_be = true;

    /* UnitDelay: '<S386>/UnitDelay' */
    rtb_UnitDelay_bg = CTMR_ac_DW.UnitDelay_DSTATE_c;

    /* Switch: '<S386>/Switch2' incorporates:
     *  Switch: '<S386>/Switch1'
     */
    if (!rtb_OR1_ex)
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S406>/Calib'
         *  MinMax: '<S15>/Max2'
         */
        rtb_UnitDelay_bg = fmaxf(VeCTMR_T_AmbTemp_AD,
            KeCTMR_T_PdcTmpThermRespCoefInit);
    }
    else
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S394>/Calib'
         *  Lookup_n-D: '<S410>/Vector'
         *  Product: '<S386>/Multiplication'
         *  Sum: '<S16>/Add'
         *  Sum: '<S386>/Subtraction'
         *  Sum: '<S386>/Summation'
         *  Switch: '<S386>/Switch2'
         */
        rtb_UnitDelay_bg += (look2_iflf_binlcapw
                             (((VeCTMR_I_HVC_Htr_HV_CrntAct_AD +
                                VeCTMR_I_HVC_Htr2_HV_CrntAct_AD) +
                               VeCTMR_I_ACCElecCurr_AD) +
                              VeCTMR_I_APM_HV_Current_AD,
                              CTMR_ac_DW.UnitDelay1_DSTATE, ((const float32 *)
                               &(KxCTMR_T_PdcIntTempSS[0])), ((const float32 *)
                               &(KyCTMR_T_PdcIntTempSS[0])), ((const float32 *)
                               &(KtCTMR_T_PdcIntTempSS[0])),
                              CTMR_ac_ConstP.pooled5, 3U) - rtb_UnitDelay_bg) *
            KeCTMR_K_PdcIntTmpThermRespCoef;
    }

    /* End of Switch: '<S386>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S386>/Limiter' */
    /* Switch: '<S414>/Switch1' incorporates:
     *  Constant: '<S407>/Calib'
     *  RelationalOperator: '<S414>/RelationalOperator'
     */
    if (KeCTMR_T_PdcTmpThermRespMax < rtb_UnitDelay_bg)
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = KeCTMR_T_PdcTmpThermRespMax;
    }
    else
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = rtb_UnitDelay_bg;
    }

    /* End of Switch: '<S414>/Switch1' */

    /* Switch: '<S414>/Switch' incorporates:
     *  Constant: '<S408>/Calib'
     *  RelationalOperator: '<S414>/RelationalOperator1'
     */
    if (rtb_Switch1_cy > KeCTMR_T_PdcTmpThermRespMin)
    {
        /* Switch: '<S414>/Switch' */
        VeCTMR_T_PdcIntTemp = rtb_Switch1_cy;
    }
    else
    {
        /* Switch: '<S414>/Switch' */
        VeCTMR_T_PdcIntTemp = KeCTMR_T_PdcTmpThermRespMin;
    }

    /* End of Switch: '<S414>/Switch' */
    /* End of Outputs for SubSystem: '<S386>/Limiter' */

    /* Update for UnitDelay: '<S386>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_c = VeCTMR_T_PdcIntTemp;

    /* Product: '<S15>/Product' incorporates:
     *  SignalConversion generated from: '<S17>/VariantSource6'
     *  Switch: '<S414>/Switch'
     *  Switch: '<S4>/Switch10'
     *  Switch: '<S4>/Switch8'
     */
    VeCTMR_K_PdcSurThmrRespSS = look2_iflf_binlcapw
        (VeCTMR_T_FedmUnderhoodAirTemp, VeCTMR_T_PdcIntTemp, ((const float32 *)
          &(KxCTMR_T_PdcSurTempSS[0])), ((const float32 *)
          &(KyCTMR_T_PdcSurTempSS[0])), ((const float32 *)
          &(KtCTMR_T_PdcSurTempSS[0])), CTMR_ac_ConstP.pooled5, 3U) *
        look2_iflf_binlcapw(VeCTMR_v_VehSpd_AD, VeCTMR_x_AadPos_AD, ((const
        float32 *)&(KxCTMR_T_PdcSurTempAadAdj[0])), ((const float32 *)
        &(KyCTMR_T_PdcSurTempAadAdj[0])), ((const float32 *)
        &(KtCTMR_T_PdcSurTempAadAdj[0])), CTMR_ac_ConstP.pooled5, 3U);

    /* Logic: '<S389>/AND' incorporates:
     *  Logic: '<S389>/OR1'
     *  UnitDelay: '<S389>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_aw;

    /* Update for UnitDelay: '<S389>/Unit Delay' incorporates:
     *  Constant: '<S15>/TRUEConstant4'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_aw = true;

    /* UnitDelay: '<S388>/UnitDelay' */
    rtb_UnitDelay_bg = CTMR_ac_DW.UnitDelay_DSTATE;

    /* Switch: '<S388>/Switch1' */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S388>/Switch1' incorporates:
         *  Constant: '<S403>/Calib'
         *  MinMax: '<S15>/Max'
         */
        rtb_UnitDelay_bg = fmaxf(VeCTMR_T_AmbTemp_AD,
            KeCTMR_T_PdcSurfTempUhoodInit);
    }
    else
    {
        /* Switch: '<S388>/Switch1' incorporates:
         *  Constant: '<S396>/Calib'
         *  Product: '<S388>/Multiplication'
         *  Sum: '<S388>/Subtraction'
         *  Sum: '<S388>/Summation'
         */
        rtb_UnitDelay_bg += (VeCTMR_K_PdcSurThmrRespSS - rtb_UnitDelay_bg) *
            KeCTMR_K_PdcSurThmrRespCoef;
    }

    /* End of Switch: '<S388>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S388>/Limiter' */
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S404>/Calib'
     *  RelationalOperator: '<S416>/RelationalOperator'
     */
    if (KeCTMR_T_PdcSurfTempUhoodMax < rtb_UnitDelay_bg)
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = KeCTMR_T_PdcSurfTempUhoodMax;
    }
    else
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = rtb_UnitDelay_bg;
    }

    /* End of Switch: '<S416>/Switch1' */

    /* Switch: '<S416>/Switch' incorporates:
     *  Constant: '<S405>/Calib'
     *  RelationalOperator: '<S416>/RelationalOperator1'
     */
    if (rtb_Switch1_cy > KeCTMR_T_PdcSurfTempUhoodMin)
    {
        /* Switch: '<S416>/Switch' */
        VeCTMR_T_PdcSurThmrResp = rtb_Switch1_cy;
    }
    else
    {
        /* Switch: '<S416>/Switch' */
        VeCTMR_T_PdcSurThmrResp = KeCTMR_T_PdcSurfTempUhoodMin;
    }

    /* End of Switch: '<S416>/Switch' */
    /* End of Outputs for SubSystem: '<S388>/Limiter' */

    /* Update for UnitDelay: '<S388>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE = VeCTMR_T_PdcSurThmrResp;

    /* Lookup_n-D: '<S409>/Vector' incorporates:
     *  Switch: '<S81>/Switch'
     */
    VeCTMR_T_PdcExhRadThmrSS = look2_iflf_binlcapw(VeCTMR_T_PDC_Exh_Surf_Temp,
        CTMR_ac_DW.UnitDelay1_DSTATE, ((const float32 *)&(KxCTMR_T_PdcExhRadSS[0])),
        ((const float32 *)&(KyCTMR_T_PdcExhRadSS[0])), ((const float32 *)
        &(KtCTMR_T_PdcExhRadSS[0])), CTMR_ac_ConstP.pooled7, 8U);

    /* Logic: '<S390>/AND' incorporates:
     *  Logic: '<S390>/OR1'
     *  UnitDelay: '<S390>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_bp;

    /* Update for UnitDelay: '<S390>/Unit Delay' incorporates:
     *  Constant: '<S15>/TRUEConstant5'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_bp = true;

    /* UnitDelay: '<S387>/UnitDelay' */
    rtb_UnitDelay_bg = CTMR_ac_DW.UnitDelay_DSTATE_m;

    /* Switch: '<S387>/Switch1' */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S397>/Calib'
         *  MinMax: '<S15>/Max1'
         */
        rtb_UnitDelay_bg = fmaxf(VeCTMR_T_AmbTemp_AD, KeCTMR_T_PdcExhRadThmrInit);
    }
    else
    {
        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S393>/Calib'
         *  Product: '<S387>/Multiplication'
         *  Sum: '<S387>/Subtraction'
         *  Sum: '<S387>/Summation'
         */
        rtb_UnitDelay_bg += (VeCTMR_T_PdcExhRadThmrSS - rtb_UnitDelay_bg) *
            KeCTMR_K_PdcExhRadThmr;
    }

    /* End of Switch: '<S387>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S387>/Limiter' */
    /* Switch: '<S415>/Switch1' incorporates:
     *  Constant: '<S398>/Calib'
     *  RelationalOperator: '<S415>/RelationalOperator'
     */
    if (KeCTMR_T_PdcExhRadThmrMax < rtb_UnitDelay_bg)
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = KeCTMR_T_PdcExhRadThmrMax;
    }
    else
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = rtb_UnitDelay_bg;
    }

    /* End of Switch: '<S415>/Switch1' */

    /* Switch: '<S415>/Switch' incorporates:
     *  Constant: '<S399>/Calib'
     *  RelationalOperator: '<S415>/RelationalOperator1'
     */
    if (rtb_Switch1_cy > KeCTMR_T_PdcExhRadThmrMin)
    {
        /* Switch: '<S415>/Switch' */
        VeCTMR_T_PdcExhRadThmr = rtb_Switch1_cy;
    }
    else
    {
        /* Switch: '<S415>/Switch' */
        VeCTMR_T_PdcExhRadThmr = KeCTMR_T_PdcExhRadThmrMin;
    }

    /* End of Switch: '<S415>/Switch' */
    /* End of Outputs for SubSystem: '<S387>/Limiter' */

    /* Update for UnitDelay: '<S387>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_m = VeCTMR_T_PdcExhRadThmr;

    /* Sum: '<S15>/Sum3' */
    VeCTMR_T_PDC_Surf_TempSS = VeCTMR_T_PdcSurThmrResp + VeCTMR_T_PdcExhRadThmr;

    /* Logic: '<S391>/AND' incorporates:
     *  Logic: '<S391>/OR1'
     *  UnitDelay: '<S391>/Unit Delay'
     */
    rtb_OR1_ex = !CTMR_ac_DW.UnitDelay_DSTATE_ea;

    /* Update for UnitDelay: '<S391>/Unit Delay' incorporates:
     *  Constant: '<S15>/TRUEConstant2'
     */
    CTMR_ac_DW.UnitDelay_DSTATE_ea = true;

    /* Switch: '<S385>/Switch1' */
    if (rtb_OR1_ex)
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S400>/Calib'
         *  MinMax: '<S15>/Max3'
         */
        rtb_UnitDelay_bg = fmaxf(VeCTMR_T_AmbTemp_AD, KeCTMR_T_PdcSurfTempInit);
    }
    else
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S395>/Calib'
         *  Product: '<S385>/Multiplication'
         *  Sum: '<S385>/Subtraction'
         *  Sum: '<S385>/Summation'
         *  UnitDelay: '<S385>/UnitDelay'
         */
        rtb_UnitDelay_bg = ((VeCTMR_T_PDC_Surf_TempSS -
                             CTMR_ac_DW.UnitDelay_DSTATE_o) *
                            KeCTMR_K_PdcSurTempRespCoef) +
            CTMR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S385>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S385>/Limiter' */
    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S401>/Calib'
     *  RelationalOperator: '<S413>/RelationalOperator'
     */
    if (KeCTMR_T_PdcSurfTempMax < rtb_UnitDelay_bg)
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = KeCTMR_T_PdcSurfTempMax;
    }
    else
    {
        /* Switch: '<S413>/Switch1' */
        rtb_Switch1_cy = rtb_UnitDelay_bg;
    }

    /* End of Switch: '<S413>/Switch1' */

    /* Switch: '<S413>/Switch' incorporates:
     *  Constant: '<S402>/Calib'
     *  RelationalOperator: '<S413>/RelationalOperator1'
     */
    if (rtb_Switch1_cy > KeCTMR_T_PdcSurfTempMin)
    {
        /* Switch: '<S413>/Switch' */
        rtb_UnitDelay_bg = rtb_Switch1_cy;
    }
    else
    {
        /* Switch: '<S413>/Switch' */
        rtb_UnitDelay_bg = KeCTMR_T_PdcSurfTempMin;
    }

    /* End of Switch: '<S413>/Switch' */
    /* End of Outputs for SubSystem: '<S385>/Limiter' */

    /* Update for UnitDelay: '<S385>/UnitDelay' */
    CTMR_ac_DW.UnitDelay_DSTATE_o = rtb_UnitDelay_bg;

    /* VariantMerge generated from: '<S6>/VariantSource1' */
    CTMR_ac_B.VariantMerge_For_Variant_Source = rtb_UnitDelay_bg;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S15>/DigitalLowpassResetEnabled2' */
    /* End of Outputs for SubSystem: '<S15>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S15>/DigitalLowpassResetEnabled4' */
    /* End of Outputs for SubSystem: '<S15>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S15>/DigitalLowpassResetEnabled3' */
    /* End of Outputs for SubSystem: '<S15>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S15>/DigitalLowpassResetEnabled1' */
#else

    /* VariantMerge generated from: '<S14>/VariantSource4' incorporates:
     *  Constant: '<S381>/Calib'
     *  Constant: '<S383>/Calib'
     *  SignalConversion generated from: '<S14>/VariantSource4'
     */
    rtb_VariantMerge_For_Variant__b[0] = KeCTMR_T_MtrBDefValTemp1;
    rtb_VariantMerge_For_Variant__b[1] = KeCTMR_T_MtrBDefValTemp2;

    /* VariantMerge generated from: '<S6>/VariantSource1' incorporates:
     *  Constant: '<S11>/Calib'
     *  SignalConversion generated from: '<S6>/VariantSource1'
     */
    CTMR_ac_B.VariantMerge_For_Variant_Source = KeCTMR_T_PDC_Default;

#endif

    /* End of UnitDelay: '<S15>/UnitDelay1' */

    /* Update for UnitDelay: '<S15>/UnitDelay1' */
#if Rte_SysCon_Variant_CTMR_5

    CTMR_ac_DW.UnitDelay1_DSTATE = rtb_UnitDelay_bg;

#endif

    /* End of Update for UnitDelay: '<S15>/UnitDelay1' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overrides_100ms'
     */
    /* SignalConversion generated from: '<S5>/PDCSurfTempLim' incorporates:
     *  Constant: '<S468>/Calib'
     */
    CTMR_ac_B.OutportBufferForPDCSurfTempLi_f = KeCTMR_T_PDCSurfTempLim;
    for (i = 0; i < 4; i++)
    {
        /* Gain: '<S475>/Gain' */
        rtb_VariantMerge_For_Variant_So[i] = VaCTMR_T_MtrAConTmpsFunc[(i)];

        /* Gain: '<S469>/Gain' */
        Gain_e[i] = VaCTMR_T_MtrAConTmpsLimFunc[(i)];
    }

    for (i = 0; i < 2; i++)
    {
        /* Gain: '<S470>/Gain' */
        Gain_em[i] = CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[i];

        /* Gain: '<S472>/Gain' */
        Gain_o[i] = CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[i];
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VaCTMR_T_MtrAConTmpsLim' incorporates:
     *  SignalConversion generated from: '<S1>/MtrAConTmpsLim'
     */
    (void)Rte_Write_VaCTMR_T_MtrAConTmpsLim_Value(Gain_e);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overrides_100ms'
     */
    /* Outport: '<Root>/VeCTMR_T_MtrAExhSurfaceTemp' incorporates:
     *  Gain: '<S474>/Gain'
     *  SignalConversion generated from: '<S1>/MtrAExhSurfTemp'
     */
    (void)Rte_Write_VeCTMR_T_MtrAExhSurfaceTemp_Value(VeCTMR_T_Gen_Exh_Surf_Temp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VaCTMR_T_MtrAConTmps' incorporates:
     *  SignalConversion generated from: '<S1>/MtrAtemps'
     */
    (void)Rte_Write_VaCTMR_T_MtrAConTmps_Value(rtb_VariantMerge_For_Variant_So);

    /* Outport: '<Root>/VaCTMR_T_MtrBConTmpsLim' incorporates:
     *  SignalConversion generated from: '<S1>/MtrBConTmpsLim'
     */
    (void)Rte_Write_VaCTMR_T_MtrBConTmpsLim_Value(Gain_em);

    /* Outport: '<Root>/VaCTMR_T_MtrBConTmps' incorporates:
     *  SignalConversion generated from: '<S1>/MtrBtemps'
     */
    (void)Rte_Write_VaCTMR_T_MtrBConTmps_Value(VaCTMR_T_MtrBConTmps);

    /* Outport: '<Root>/VaCTMR_T_MtrCConTmpsLim' incorporates:
     *  SignalConversion generated from: '<S1>/MtrCConTmpsLim'
     */
    (void)Rte_Write_VaCTMR_T_MtrCConTmpsLim_Value(Gain_o);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overrides_100ms'
     */
    /* Outport: '<Root>/VeCTMR_T_MtrCExhSurfaceTemp' incorporates:
     *  Gain: '<S477>/Gain'
     *  SignalConversion generated from: '<S1>/MtrCExhSurfTemp'
     */
    (void)Rte_Write_VeCTMR_T_MtrCExhSurfaceTemp_Value
        (VeCTMR_T_FEDM_Exh_Surf_Temp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VaCTMR_T_MtrCConTmps' incorporates:
     *  SignalConversion generated from: '<S1>/MtrCtemps'
     */
    (void)Rte_Write_VaCTMR_T_MtrCConTmps_Value(rtb_VariantMerge_For_Variant__b);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Overrides_100ms'
     */
    /* Outport: '<Root>/VeCTMR_T_PDCSurfTemp' incorporates:
     *  Gain: '<S476>/Gain'
     *  SignalConversion generated from: '<S1>/PDCSurfTemp'
     */
    (void)Rte_Write_VeCTMR_T_PDCSurfTemp_Value
        (CTMR_ac_B.VariantMerge_For_Variant_Source);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCTMR_T_PDCSurfTempLim' incorporates:
     *  SignalConversion generated from: '<S1>/PDCSurfTempLim'
     */
    (void)Rte_Write_VeCTMR_T_PDCSurfTempLim_Value
        (CTMR_ac_B.OutportBufferForPDCSurfTempLi_f);

    /* End of Outputs for SubSystem: '<Root>/CTMR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CTMR_2

FUNC(void, CTMR_CODE) CTMR_PwrOn(void)
{

#if Rte_SysCon_Variant_CTMR_2

    sint32 i;

#endif

#if Rte_SysCon_Variant_CTMR_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
    /* Outputs for Function Call SubSystem: '<Root>/CTMR_PwrOn' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CTRR_NF_DIAL'
     */
    /* SignalConversion generated from: '<S478>/PDCSurfTemp' incorporates:
     *  Constant: '<S488>/Calib'
     */
    CTMR_ac_B.OutportBufferForPDCSurfTemp = KeCTMR_T_PDCSurfTemp_NF;

    /* SignalConversion generated from: '<S478>/VeCTMR_T_MtrCExhSurfaceTemp' incorporates:
     *  Constant: '<S486>/Calib'
     */
    CTMR_ac_B.OutportBufferForVeCTMR_T_MtrCEx = KeCTMR_T_MtrCExhSurfaceTemp_NF;

    /* SignalConversion generated from: '<S478>/PDCSurfTempLim' incorporates:
     *  Constant: '<S487>/Calib'
     */
    CTMR_ac_B.OutportBufferForPDCSurfTempLim = KeCTMR_T_PDCSurfTempLim_NF;
    for (i = 0; i < 4; i++)
    {
        /* SignalConversion generated from: '<S478>/VaCTMR_T_MtrAConTmps' incorporates:
         *  Constant: '<S480>/Calib'
         */
        CTMR_ac_B.OutportBufferForVaCTMR_T_MtrACo[i] = KaCTMR_T_MtrAConTmps_NF
            [(i)];
    }

    for (i = 0; i < 2; i++)
    {
        /* SignalConversion generated from: '<S478>/VaCTMR_T_MtrBConTmps' incorporates:
         *  Constant: '<S482>/Calib'
         */
        CTMR_ac_B.OutportBufferForVaCTMR_T_MtrBCo[i] = KaCTMR_T_MtrBConTmps_NF
            [(i)];

        /* SignalConversion generated from: '<S478>/VaCTMR_T_MtrCConTmps' incorporates:
         *  Constant: '<S484>/Calib'
         */
        CTMR_ac_B.OutportBufferForVaCTMR_T_MtrCCo[i] = KaCTMR_T_MtrCConTmps_NF
            [(i)];
    }

    for (i = 0; i < 4; i++)
    {
        /* SignalConversion generated from: '<S478>/VaCTMR_T_MtrAConTmpsLim' incorporates:
         *  Constant: '<S479>/Calib'
         */
        CTMR_ac_B.OutportBufferForVaCTMR_T_MtrA_h[i] =
            KaCTMR_T_MtrAConTmpsLim_NF[(i)];
    }

    for (i = 0; i < 2; i++)
    {
        /* SignalConversion generated from: '<S478>/VaCTMR_T_MtrBConTmpsLim' incorporates:
         *  Constant: '<S481>/Calib'
         */
        CTMR_ac_B.OutportBufferForVaCTMR_T_MtrB_d[i] =
            KaCTMR_T_MtrBConTmpsLim_NF[(i)];

        /* SignalConversion generated from: '<S478>/VaCTMR_T_MtrCConTmpsLim' incorporates:
         *  Constant: '<S483>/Calib'
         */
        CTMR_ac_B.OutportBufferForVaCTMR_T_MtrC_l[i] =
            KaCTMR_T_MtrCConTmpsLim_NF[(i)];
    }

    /* SignalConversion generated from: '<S478>/VeCTMR_T_MtrAExhSurfaceTemp' incorporates:
     *  Constant: '<S485>/Calib'
     */
    CTMR_ac_B.OutportBufferForVeCTMR_T_MtrAEx = KeCTMR_T_MtrAExhSurfaceTemp_NF;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VaCTMR_T_MtrAConTmps' incorporates:
     *  SignalConversion generated from: '<S2>/MtrAConTmps'
     */
    (void)Rte_Write_VaCTMR_T_MtrAConTmps_Value
        (CTMR_ac_B.OutportBufferForVaCTMR_T_MtrACo);

    /* Outport: '<Root>/VaCTMR_T_MtrAConTmpsLim' incorporates:
     *  SignalConversion generated from: '<S2>/MtrAConTmpsLim'
     */
    (void)Rte_Write_VaCTMR_T_MtrAConTmpsLim_Value
        (CTMR_ac_B.OutportBufferForVaCTMR_T_MtrA_h);

    /* Outport: '<Root>/VeCTMR_T_MtrAExhSurfaceTemp' incorporates:
     *  SignalConversion generated from: '<S2>/MtrAExhSurfaceTemp'
     */
    (void)Rte_Write_VeCTMR_T_MtrAExhSurfaceTemp_Value
        (CTMR_ac_B.OutportBufferForVeCTMR_T_MtrAEx);

    /* Outport: '<Root>/VaCTMR_T_MtrBConTmps' incorporates:
     *  SignalConversion generated from: '<S2>/MtrBConTmps'
     */
    (void)Rte_Write_VaCTMR_T_MtrBConTmps_Value
        (CTMR_ac_B.OutportBufferForVaCTMR_T_MtrBCo);

    /* Outport: '<Root>/VaCTMR_T_MtrBConTmpsLim' incorporates:
     *  SignalConversion generated from: '<S2>/MtrBConTmpsLim'
     */
    (void)Rte_Write_VaCTMR_T_MtrBConTmpsLim_Value
        (CTMR_ac_B.OutportBufferForVaCTMR_T_MtrB_d);

    /* Outport: '<Root>/VaCTMR_T_MtrCConTmps' incorporates:
     *  SignalConversion generated from: '<S2>/MtrCConTmps'
     */
    (void)Rte_Write_VaCTMR_T_MtrCConTmps_Value
        (CTMR_ac_B.OutportBufferForVaCTMR_T_MtrCCo);

    /* Outport: '<Root>/VaCTMR_T_MtrCConTmpsLim' incorporates:
     *  SignalConversion generated from: '<S2>/MtrCConTmpsLim'
     */
    (void)Rte_Write_VaCTMR_T_MtrCConTmpsLim_Value
        (CTMR_ac_B.OutportBufferForVaCTMR_T_MtrC_l);

    /* Outport: '<Root>/VeCTMR_T_MtrCExhSurfaceTemp' incorporates:
     *  SignalConversion generated from: '<S2>/MtrCExhSurfaceTemp'
     */
    (void)Rte_Write_VeCTMR_T_MtrCExhSurfaceTemp_Value
        (CTMR_ac_B.OutportBufferForVeCTMR_T_MtrCEx);

    /* Outport: '<Root>/VeCTMR_T_PDCSurfTemp' incorporates:
     *  SignalConversion generated from: '<S2>/PDCSurfTemp'
     */
    (void)Rte_Write_VeCTMR_T_PDCSurfTemp_Value
        (CTMR_ac_B.OutportBufferForPDCSurfTemp);

    /* Outport: '<Root>/VeCTMR_T_PDCSurfTempLim' incorporates:
     *  SignalConversion generated from: '<S2>/PDCSurfTempLim'
     */
    (void)Rte_Write_VeCTMR_T_PDCSurfTempLim_Value
        (CTMR_ac_B.OutportBufferForPDCSurfTempLim);

    /* End of Outputs for SubSystem: '<Root>/CTMR_PwrOn' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, CTMR_CODE) CTMR_ac_Init(void)
{
    {

#if Rte_SysCon_Variant_CTMR_1 || Rte_SysCon_Variant_CTMR_2

        sint32 i;

#endif

#if Rte_SysCon_Variant_CTMR_1 || Rte_SysCon_Variant_CTMR_2

        float32 tmp[2];

#endif

#if Rte_SysCon_Variant_CTMR_1 || Rte_SysCon_Variant_CTMR_2

        float32 tmp_0[4];

#endif

#if Rte_SysCon_Variant_CTMR_1

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
        /* SystemInitialize for Function Call SubSystem: '<Root>/CTMR_MedTEH' */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/Control_100ms'
         */
        for (i = 0; i < 4; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S12>/VariantSource5' */
            VaCTMR_T_MtrAConTmpsLimFunc[(i)] =
                CTMR_ac_B.VariantMerge_For_Variant_So_ghj[i];
        }

        /* SystemInitialize for SignalConversion generated from: '<S12>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_5

        /* SystemInitialize for VariantMerge generated from: '<S12>/VariantSource5' incorporates:
         *  Constant: '<S258>/Calib'
         *  Constant: '<S259>/Calib'
         *  Constant: '<S260>/Calib'
         *  Constant: '<S261>/Calib'
         */
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[0] = KeCTMR_T_GenConCmpTempLim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[1] =
            KeCTMR_T_GpimAcConCmpTempLim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[2] =
            KeCTMR_T_GpimDcConCmpTempLim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[3] =
            KeCTMR_T_HVBPReevConCmpTempLim;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S12>/VariantSource5' */

        /* SystemInitialize for SignalConversion generated from: '<S12>/VariantSource5' */
#if Rte_SysCon_Variant_CTMR_4

        /* SystemInitialize for VariantMerge generated from: '<S12>/VariantSource5' incorporates:
         *  Constant: '<S102>/Calib'
         *  Constant: '<S103>/Calib'
         *  Constant: '<S104>/Calib'
         *  Constant: '<S107>/Calib'
         */
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[0] =
            KeCTMR_T_FedmConCmpTempLim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[1] =
            KeCTMR_T_HvbpFedmConCmpTempLim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[2] = KeCTMR_T_FedmMtraLim1;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[3] = KeCTMR_T_FedmMtraLim2;

#elif !Rte_SysCon_Variant_CTMR_4 && !Rte_SysCon_Variant_CTMR_5

        /* SystemInitialize for VariantMerge generated from: '<S12>/VariantSource5' incorporates:
         *  Constant: '<S263>/Calib'
         *  Constant: '<S265>/Calib'
         *  Constant: '<S267>/Calib'
         *  Constant: '<S269>/Calib'
         *  SignalConversion generated from: '<S12>/VariantSource5'
         */
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[0] =
            KeCTMR_T_MtraDefValTemp1Lim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[1] =
            KeCTMR_T_MtraDefValTemp2Lim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[2] =
            KeCTMR_T_MtraDefValTemp3Lim;
        CTMR_ac_B.VariantMerge_For_Variant_So_ghj[3] = KeCTMR_T_FedmMtraLim2;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S12>/VariantSource5' */

        /* SystemInitialize for SignalConversion generated from: '<S13>/VariantSource2' incorporates:
         *  Constant: '<S274>/Calib'
         *  Constant: '<S275>/Calib'
         *  Constant: '<S292>/Calib'
         *  Constant: '<S294>/Calib'
         *  Constant: '<S301>/Calib'
         *  Constant: '<S302>/Calib'
         *  Constant: '<S382>/Calib'
         *  Constant: '<S384>/Calib'
         */
#if Rte_SysCon_Variant_CTMR_3

        /* SystemInitialize for Atomic SubSystem: '<S13>/EnabledSubsystem' */
        CTMR_ac_B.Calib_au = KeCTMR_T_RedmConCmpTempLim;
        CTMR_ac_B.Calib_n = KeCTMR_T_HvbpRedmConCmpTempLim;

        /* SystemInitialize for SignalConversion generated from: '<S13>/VariantSource2' incorporates:
         *  Constant: '<S274>/Calib'
         *  Constant: '<S275>/Calib'
         *  Constant: '<S382>/Calib'
         *  Constant: '<S384>/Calib'
         */
        CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[0] = CTMR_ac_B.Calib_au;
        CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[1] = CTMR_ac_B.Calib_n;

        /* End of SystemInitialize for SubSystem: '<S13>/EnabledSubsystem' */
#else

        /* SystemInitialize for Atomic SubSystem: '<S13>/EnabledSubsystem1' */
        CTMR_ac_B.Calib_p = KeCTMR_T_MtrBDefValTemp1Lim;
        CTMR_ac_B.Calib_mp = KeCTMR_T_MtrBDefValTemp2Lim;

        /* SystemInitialize for SignalConversion generated from: '<S13>/VariantSource2' incorporates:
         *  Constant: '<S292>/Calib'
         *  Constant: '<S294>/Calib'
         *  Constant: '<S301>/Calib'
         *  Constant: '<S302>/Calib'
         */
        CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[0] = CTMR_ac_B.Calib_p;
        CTMR_ac_B.VaCTMR_T_MtrBConTmpsLim[1] = CTMR_ac_B.Calib_mp;

        /* End of SystemInitialize for SubSystem: '<S13>/EnabledSubsystem1' */
#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S13>/VariantSource2' */

        /* SystemInitialize for SignalConversion generated from: '<S14>/VariantSource3' incorporates:
         *  Constant: '<S301>/Calib'
         *  Constant: '<S302>/Calib'
         *  Constant: '<S382>/Calib'
         *  Constant: '<S384>/Calib'
         */
#if Rte_SysCon_Variant_CTMR_5

        /* SystemInitialize for Atomic SubSystem: '<S14>/EnabledSubsystem' */
        CTMR_ac_B.Calib_mp = KeCTMR_T_HvbpFedmConCmpTempLim;
        CTMR_ac_B.Calib_p = KeCTMR_T_FedmConCmpTempLim;

        /* SystemInitialize for SignalConversion generated from: '<S14>/VariantSource3' incorporates:
         *  Constant: '<S301>/Calib'
         *  Constant: '<S302>/Calib'
         */
        CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[0] = CTMR_ac_B.Calib_p;
        CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[1] = CTMR_ac_B.Calib_mp;

        /* End of SystemInitialize for SubSystem: '<S14>/EnabledSubsystem' */
#else

        /* SystemInitialize for Atomic SubSystem: '<S14>/EnabledSubsystem1' */
        CTMR_ac_B.Calib_n = KeCTMR_T_MtrBDefValTemp1Lim;
        CTMR_ac_B.Calib_au = KeCTMR_T_MtrBDefValTemp2Lim;

        /* SystemInitialize for SignalConversion generated from: '<S14>/VariantSource3' incorporates:
         *  Constant: '<S382>/Calib'
         *  Constant: '<S384>/Calib'
         */
        CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[0] = CTMR_ac_B.Calib_n;
        CTMR_ac_B.VaCTMR_T_MtrCConTmpsLim[1] = CTMR_ac_B.Calib_au;

        /* End of SystemInitialize for SubSystem: '<S14>/EnabledSubsystem1' */
#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S14>/VariantSource3' */

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/Overrides_100ms'
         */
        /* SystemInitialize for SignalConversion generated from: '<S5>/PDCSurfTempLim' incorporates:
         *  Constant: '<S468>/Calib'
         */
        CTMR_ac_B.OutportBufferForPDCSurfTempLi_f = KeCTMR_T_PDCSurfTempLim;

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for SubSystem: '<Root>/CTMR_MedTEH' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

#if Rte_SysCon_Variant_CTMR_2

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
        /* SystemInitialize for Function Call SubSystem: '<Root>/CTMR_PwrOn' */
        /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
         *  SubSystem: '<S2>/CTRR_NF_DIAL'
         */
        /* SystemInitialize for SignalConversion generated from: '<S478>/PDCSurfTemp' incorporates:
         *  Constant: '<S488>/Calib'
         */
        CTMR_ac_B.OutportBufferForPDCSurfTemp = KeCTMR_T_PDCSurfTemp_NF;

        /* SystemInitialize for SignalConversion generated from: '<S478>/VeCTMR_T_MtrCExhSurfaceTemp' incorporates:
         *  Constant: '<S486>/Calib'
         */
        CTMR_ac_B.OutportBufferForVeCTMR_T_MtrCEx =
            KeCTMR_T_MtrCExhSurfaceTemp_NF;

        /* SystemInitialize for SignalConversion generated from: '<S478>/PDCSurfTempLim' incorporates:
         *  Constant: '<S487>/Calib'
         */
        CTMR_ac_B.OutportBufferForPDCSurfTempLim = KeCTMR_T_PDCSurfTempLim_NF;
        for (i = 0; i < 4; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S478>/VaCTMR_T_MtrAConTmps' incorporates:
             *  Constant: '<S480>/Calib'
             */
            CTMR_ac_B.OutportBufferForVaCTMR_T_MtrACo[i] =
                KaCTMR_T_MtrAConTmps_NF[(i)];
        }

        for (i = 0; i < 2; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S478>/VaCTMR_T_MtrBConTmps' incorporates:
             *  Constant: '<S482>/Calib'
             */
            CTMR_ac_B.OutportBufferForVaCTMR_T_MtrBCo[i] =
                KaCTMR_T_MtrBConTmps_NF[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S478>/VaCTMR_T_MtrCConTmps' incorporates:
             *  Constant: '<S484>/Calib'
             */
            CTMR_ac_B.OutportBufferForVaCTMR_T_MtrCCo[i] =
                KaCTMR_T_MtrCConTmps_NF[(i)];
        }

        for (i = 0; i < 4; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S478>/VaCTMR_T_MtrAConTmpsLim' incorporates:
             *  Constant: '<S479>/Calib'
             */
            CTMR_ac_B.OutportBufferForVaCTMR_T_MtrA_h[i] =
                KaCTMR_T_MtrAConTmpsLim_NF[(i)];
        }

        for (i = 0; i < 2; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S478>/VaCTMR_T_MtrBConTmpsLim' incorporates:
             *  Constant: '<S481>/Calib'
             */
            CTMR_ac_B.OutportBufferForVaCTMR_T_MtrB_d[i] =
                KaCTMR_T_MtrBConTmpsLim_NF[(i)];

            /* SystemInitialize for SignalConversion generated from: '<S478>/VaCTMR_T_MtrCConTmpsLim' incorporates:
             *  Constant: '<S483>/Calib'
             */
            CTMR_ac_B.OutportBufferForVaCTMR_T_MtrC_l[i] =
                KaCTMR_T_MtrCConTmpsLim_NF[(i)];
        }

        /* SystemInitialize for SignalConversion generated from: '<S478>/VeCTMR_T_MtrAExhSurfaceTemp' incorporates:
         *  Constant: '<S485>/Calib'
         */
        CTMR_ac_B.OutportBufferForVeCTMR_T_MtrAEx =
            KeCTMR_T_MtrAExhSurfaceTemp_NF;

        /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
        /* End of SystemInitialize for SubSystem: '<Root>/CTMR_PwrOn' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

        /* SystemInitialize for Merge: '<Root>/Merge_19' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  Merge: '<Root>/Merge_12'
         *  Merge: '<Root>/Merge_2'
         *  Merge: '<Root>/Merge_3'
         *  Merge: '<Root>/Merge_4'
         *  Merge: '<Root>/Merge_5'
         *  Merge: '<Root>/Merge_6'
         *  Merge: '<Root>/Merge_7'
         *  Merge: '<Root>/Merge_8'
         */
#if Rte_SysCon_Variant_CTMR_1 || Rte_SysCon_Variant_CTMR_2

        for (i = 0; i < 2; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaCTMR_T_MtrCConTmpsLim' */
        (void)Rte_Write_VaCTMR_T_MtrCConTmpsLim_Value(tmp);
        for (i = 0; i < 2; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaCTMR_T_MtrBConTmpsLim' */
        (void)Rte_Write_VaCTMR_T_MtrBConTmpsLim_Value(tmp);
        for (i = 0; i < 4; i++)
        {
            tmp_0[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaCTMR_T_MtrAConTmps' */
        (void)Rte_Write_VaCTMR_T_MtrAConTmps_Value(tmp_0);
        for (i = 0; i < 2; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaCTMR_T_MtrBConTmps' */
        (void)Rte_Write_VaCTMR_T_MtrBConTmps_Value(tmp);
        for (i = 0; i < 2; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaCTMR_T_MtrCConTmps' */
        (void)Rte_Write_VaCTMR_T_MtrCConTmps_Value(tmp);
        for (i = 0; i < 4; i++)
        {
            tmp_0[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaCTMR_T_MtrAConTmpsLim' */
        (void)Rte_Write_VaCTMR_T_MtrAConTmpsLim_Value(tmp_0);

#endif

        /* End of SystemInitialize for Merge: '<Root>/Merge_19' */
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
