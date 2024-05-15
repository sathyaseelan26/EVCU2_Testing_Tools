/*
 * File: TRAR_ac.c
 *
 * Code generated for Simulink model 'TRAR_ac'.
 *
 * Model version                  : 9.179
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:48:31 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TRAR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S23>/TRAC_EngineState' */
#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_DFCO2Fuel_DOD       ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_DFCO2Fuel_Full      ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_DFCO_DOD            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_DFCO_Full           ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_Fuel2DFCO_DOD       ((uint8)5U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_Fuel2DFCO_Full      ((uint8)6U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_Fuel_DOD            ((uint8)7U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_Fuel_DOD2Full       ((uint8)8U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_Fuel_Full           ((uint8)9U)
#endif

#if Rte_SysCon_Variant_TRAR_2
#define TRAR_ac_IN_Fuel_Full2DOD       ((uint8)10U)
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
#define START_SEC_CALIB_UNSPECIFIED_TRAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT)
    HeTRAR_b_DistrbtdSEMCntrlStratFstPth = 0;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT)
    HeTRAR_b_DistrbtdSEMCntrlStratNrmlCase = 0;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) HeTRAR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S510>/Calib'
                                                                      * '<S525>/Calib'
                                                                      * '<S255>/Calib'
                                                                      * '<S410>/Calib'
                                                                      * '<S445>/Calib'
                                                                      * '<S493>/Calib'
                                                                      * '<S404>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KaTRAR_b_RespTypChk_StrtStpSt[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KaTRAR_r_TiFiltSclrRngSt[68] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static volatile CONST(uint16, TRAR_VAR_INIT)
    KeTRAR_Cnt_BCFastPathDeactvThreshCntDwn = 0U;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_AirFlwFastPathLSP = 0.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_AirFlwFastPathRSP = 2.0F;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_BCFastPathDeactvThrsh =
    0.0F;                              /* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_BCFastPathGradActvThrsh =
    0.0F;                              /* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_CL_AirFlwFastPathLSP =
    -2.0F;                             /* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_CL_AirFlwFastPathRSP =
    0.0F;                              /* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_CL_TactMaxFastPathLSP =
    -2.0F;                             /* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_CL_TactMaxFastPathRSP =
    0.0F;                              /* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_Delta = 1.0F;/* Referenced by: '<S502>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT)
    KeTRAR_M_DistrbtdSEMCntrlStratFstPthLSP = 0.0F;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT)
    KeTRAR_M_DistrbtdSEMCntrlStratFstPthRSP = 0.0F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT)
    KeTRAR_M_DistrbtdSEMCntrlStratNrmlCaseLSP = 0.0F;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT)
    KeTRAR_M_DistrbtdSEMCntrlStratNrmlCaseRSP = 0.0F;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_ESPTactCnstLSP = 2.0F;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_ESPTactCnstRSP = 5.0F;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_EngReserveTrqCmndOvrd =
    0.0F;                              /* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_FSOTorque = -200.0F;/* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_FastTrqType2Active_Offset
    = 0.0F;                            /* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_OvrdEngTorqCmndValue =
    0.0F;                              /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_OvrdEngTorqImmedCmndValue
    = 0.0F;                            /* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TactMaxFastPathLSP = 0.0F;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TactMaxFastPathRSP = 2.0F;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TiMinTact_MinOffDelta_LSP
    = -1.0F;                           /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TiMinTact_MinOffDelta_RSP
    = -0.0005F;                        /* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TipOutLSP = 5.0F;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TipOutRSP = 20.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_ToClipTactCnstLSP = 2.0F;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_ToClipTactCnstRSP = 5.0F;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TorqOffsetFastPathLSP =
    0.0F;                              /* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TorqOffsetFastPathRSP =
    3.0F;                              /* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TorqOffst4CL_FstPathReset
    = -2.0F;                           /* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_M_TorqOffst_FstPathReset =
    0.0F;                              /* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_P_LoadEngmntThreshLSP =
    -3.0F;                             /* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_P_LoadEngmntThreshRSP =
    0.0F;                              /* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_AllowFastTrqBypass = 1;/* Referenced by: '<S512>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT)
    KeTRAR_b_AllwFastTrqLatchedFiltering = 0;/* Referenced by: '<S516>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_DOD_DeacEnbl = 0;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_DOD_ReacEnbl = 1;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_DsblFastPathDuringDFCO =
    1;                                 /* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnableFastType4DFCO = 1;/* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnbRespTyp4ESPEvent = 0;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnbRespTyp4ESPEvent1 = 0;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnbRespTypOvrrd4NbLmt = 1;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnblEngRespTypHold = 1;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnblFstPath4DFCOTact = 1;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnblFstPath4NVHZone = 1;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnblFstPath4ThermalDerate
    = 1;                               /* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EnblThermalDerate = 0;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_EngRspnsTyp_NiDotMin_Enbl
    = 0;                               /* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_FuelDODPreferred = 0;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT)
    KeTRAR_b_MaxRng4DistrbtdSEMCtlStratNrmlCase = 0;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_MaxSprkAuthNomClip = 0;/* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_OvrdEngTorqCmnd = 0;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_OvrrdRespTypDurSpdCtl = 0;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_OvrrideEngCylDFCOReq_Val =
    0;                                 /* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_OvrrideEngCylDeacReq = 0;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_OvrrideEngCylDeacReq_Val =
    0;                                 /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_OvrrideEngDFCOReq = 0;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT)
    KeTRAR_b_ResetTiCLSprkAuthLmt4RedSprk = 0;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_RespTypeOff = 0;/* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseCLthreshFastPath = 0;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4Cnstrnts = 0;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4ESCevent = 0;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4ESPTactCnst = 0;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4EngTrqRsrv = 0;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4NVHZone = 0;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4RespTypeAndDFCO
    = 1;                               /* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT)
    KeTRAR_b_UseMaxRng4RespTypeTipOutOvrrd = 1;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4ThermalDerate =
    1;                                 /* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng4ToClipTactCnst =
    0;                                 /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRngRspTyp4DFCO = 1;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseMaxRng_TipOutInFstPath
    = 0;                               /* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseOptTe4ATRRToClipped =
    1;                                 /* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseOptTe4DialFastPath = 1;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseOptTe4ESPEvent = 1;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseOptTe4INCFstPth = 1;/* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseOptTe4INCNrmCse = 1;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseOptTe4TactFastPath = 1;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseRedSprk4ESC = 0;/* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseRedSprk4K0Clsng = 0;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(boolean, TRAR_VAR_INIT) KeTRAR_b_UseRedSprk4SEM = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dM_EntryThermDerateRamp =
    1.0F;                              /* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dM_ExitThermDerateRamp =
    16.0F;                             /* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dM_MaxChgDODTrans = 20.0F;/* Referenced by: '<S546>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dM_MinChangeNeg = -50.0F;/* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dM_MinChangePos = 50.0F;/* Referenced by: '<S518>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dM_TiDotMaxLim = 20000.0F;/* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dM_TiDotMinLim = -20000.0F;/* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dr_MxSprkAuthLD = 0.0F;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_dr_MxSprkAuthLU = 0.0F;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(TeTRAR_e_HybCmndEngTorqRespTyp, TRAR_VAR_INIT)
    KeTRAR_e_OvrdEngRespTypeValue = CeTRAR_e_Pleasability_Limited;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_n_NiForLoadEngmnt = 1400.0F;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_r_BCMtrTrqMrgnDFCO = 1.0F;/* Referenced by:
                                                                      * '<S344>/Calib'
                                                                      * '<S345>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_r_BCMtrTrqMrgnFastPath =
    1.0F;                              /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_r_StressFctrIntgrtrMaxLmt =
    99999.0F;                          /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_r_StressFctrThrshLSP = 5.0F;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_r_StressFctrThrshRSP = 4.0F;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_r_TiCLSprkLmtThresh = 1.0F;/* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_DODMaxDelay = 0.2F;/* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_Filter2OptTe = 0.0F;/* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_Filter2TactMaxSlw = 0.0F;/* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_Filter2TactMaxSlwSprkAuth
    = 0.0F;                            /* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_Filter2TactTeMax = 0.0F;/* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_HoldEngRespTypMaxRng =
    0.3F;                              /* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT)
    KeTRAR_t_NiDotMinCnstrntActiveDelay = 2.0F;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_SEMSlwTrqFiltINC_FastPath
    = 0.0F;                            /* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_kT_DT1 = 0.4F;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_kT_OutsideTeLimits = 0.4F;/* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_kT_StateChangeNeg = 0.3F;/* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_t_kT_StateChangePos = 0.3F;/* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_v_VehSpdThrsh4ThermLSP =
    15.0F;                             /* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KeTRAR_v_VehSpdThrsh4ThermRSP =
    50.0F;                             /* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_r_BattTemp_StressFctr[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S45>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_r_IAT_StressFctr[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_r_PIMTemp_StressFctr[9] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_r_TiCLSprkLmtFctr[8] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_t_TeImmedRamp[9] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S532>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_t_kT_AccPedFilt[4] =
{
    0.1F, 0.1F, 0.06F, 0.03F
} ;                                    /* Referenced by: '<S538>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_t_kT_DrvrAggFilt[11] =
{
    0.0125F, 0.02F, 0.06F, 0.15F, 0.6F, 1.2F, 0.6F, 0.15F, 0.06F, 0.02F, 0.0125F
} ;                                    /* Referenced by: '<S539>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KtTRAR_t_kT_OptTeErrFilt[9] =
{
    0.0125F, 0.1F, 0.3F, 0.6F, 1.2F, 0.6F, 0.3F, 0.1F, 0.0125F
} ;                                    /* Referenced by: '<S540>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_r_BattTemp_StressFctr[9] =
{
    24.0F, 36.0F, 47.0F, 59.0F, 66.0F, 79.0F, 98.0F, 107.0F, 120.0F
} ;                                    /* Referenced by: '<S45>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_r_IAT_StressFctr[9] =
{
    24.0F, 36.0F, 47.0F, 59.0F, 66.0F, 79.0F, 98.0F, 107.0F, 120.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_r_PIMTemp_StressFctr[9] =
{
    24.0F, 36.0F, 47.0F, 59.0F, 66.0F, 79.0F, 98.0F, 107.0F, 120.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_r_TiCLSprkLmtFctr[8] =
{
    -150.0F, -100.0F, -50.0F, -10.0F, 10.0F, 50.0F, 100.0F, 150.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_t_TeImmedRamp[9] =
{
    0.0F, 10.0F, 25.0F, 40.0F, 50.0F, 65.0F, 80.0F, 100.0F, 120.0F
} ;                                    /* Referenced by: '<S532>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_t_kT_AccPedFilt[4] =
{
    0.0F, 30.0F, 70.0F, 100.0F
} ;                                    /* Referenced by: '<S538>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_t_kT_DrvrAggFilt[11] =
{
    -500.0F, -499.0F, -250.0F, -5.0F, -2.0F, 0.0F, 2.0F, 5.0F, 250.0F, 499.0F,
    500.0F
} ;                                    /* Referenced by: '<S539>/Vector' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static volatile CONST(float32, TRAR_VAR_INIT) KxTRAR_t_kT_OptTeErrFilt[9] =
{
    -300.0F, -100.0F, -40.0F, -10.0F, 0.0F, 10.0F, 40.0F, 100.0F, 300.0F
} ;                                    /* Referenced by: '<S540>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TRAR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_BCFastPathOptTeMargin;/* '<S329>/Maximum' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_BCFastPathTactTeMaxMargin;/* '<S329>/Maximum1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_EngineLosses;/* '<S16>/Sum1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_OptTe;/* '<S509>/Switch7' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_OptTeArb;/* '<S18>/Gain' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_TactTeMaxPostSlwPthBlnd;/* '<S490>/Summation' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_TactTeMaxSlw_SprkAuth;/* '<S25>/MinMax6' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_TeImmedPostFstPthBlnd;/* '<S407>/Summation' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_TeImmedPreFstPthBlnd;/* '<S324>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_TePredMax;/* '<S25>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_M_Ti_ThermalDerate;/* '<S381>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_P_ExcessEnginePower;/* '<S8>/Summation2' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_BCDFCOEntryMarginActv;/* '<S329>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_BCDFCOExitMarginActv;/* '<S329>/Logical4' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_BCDeactvThreshNotMet;/* '<S329>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_BCFastPathActvThreshMet;/* '<S329>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_BCFastPathMarginsActv;/* '<S343>/OR1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_DFCOEnbl;/* '<S20>/Gain' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_DFCOReq;/* '<S289>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_DODReq;/* '<S288>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_ESCActv;/* '<S290>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_ESPTactCnstRespTyp;/* '<S70>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_EnblFstPath_NVH;/* '<S75>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_FastTrqLatched;/* '<S51>/Logical' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_FstPthBlndActv;/* '<S407>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_FstSEMBlndActv;/* '<S401>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_MDSEnbl;/* '<S19>/Gain' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_MxSprkAuthSprkLmtd;/* '<S16>/Logical13' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_RedSprk4ESC;/* '<S290>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_RedSprk4K0Clsng;/* '<S293>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_RedSprk4SEM;/* '<S300>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_SlwPthBlndActv_NormalCase;/* '<S490>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_TactMaxFstCndtn;/* '<S73>/Merge' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_ThermSysStressed;/* '<S30>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_ThermalDerateEnbld;/* '<S8>/OR2' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_UseOptTe4FstPth;/* '<S409>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAC_b_UseRedSprkAuth;/* '<S16>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(TeTRAR_e_EngState, TRAR_VAR_INIT) VeTRAC_e_DsrdEngState;/* '<S10>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(TeTRAR_e_EngArbState, TRAR_VAR_INIT) VeTRAC_e_EngArbState;/* '<S22>/Merge5' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(TeTRAR_e_EngCntrlMode, TRAR_VAR_INIT) VeTRAC_e_EngCntrlMode;/* '<S22>/Merge7' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_r_MaxSparkAuthorityNom;/* '<S302>/Gain' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_r_MaxSparkAuthorityRed;/* '<S301>/Gain' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_r_MxSprkAuthGrdLmtd;/* '<S292>/Sum3' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_r_MxSprkAuthRedArb;/* '<S16>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAC_r_MxSprkAuthSprkLmtd;/* '<S16>/MinMax10' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_M_OptTeAllCylFuel;/* '<S558>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_M_OptTeFltdAftBypass;/* '<S509>/Switch5' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_M_OptTeHalfCylFuel;/* '<S559>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_M_OptTeOld;/* '<S509>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_M_TiPredicted;/* '<S25>/Summation15' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_M_TiPredictedFull;/* '<S25>/Summation16' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAR_b_FastTorqueReqMet;/* '<S9>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAR_b_IsTipOut;/* '<S213>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAR_b_NiDotMinCnstrntActiveDelayed;/* '<S256>/AND' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAR_b_OvrrdRespTypDurSpdCtl;/* '<S9>/Logical4' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(boolean, TRAR_VAR_INIT) VeTRAR_b_TransitionDOD2NonDOD;/* '<S24>/Comparison13' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_dM_RateTe_DOD2NonDOD;/* '<S529>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_dM_RateTe_FF;/* '<S524>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_dM_RateTe_Transition;/* '<S550>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_dM_Te;/* '<S509>/Merge2' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_dM_TeDelta_DOD2NonDOD;/* '<S529>/Subtraction1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_dM_TeDelta_FF;/* '<S524>/Subtraction1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_dM_TeDelta_Transition;/* '<S530>/Subtraction1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(uint16, TRAR_VAR_INIT) VeTRAR_d_MaxRngRspType_DS;/* '<S4>/DataStoreMemory' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(uint16, TRAR_VAR_INIT) VeTRAR_d_PleasibltyLmtdRspType_DS;/* '<S4>/DataStoreMemory1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(sint16, TRAR_VAR_INIT) VeTRAR_e_EngTrRespTypebefHold;/* '<S324>/Merge1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_k_DerivativeTerm;/* '<S544>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_r_DrvrAggFactor_FF;/* '<S537>/Summation' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_r_ThermStresFctrIntgrtr;/* '<S48>/Switch' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_r_ThermStresFctrIntgrtrLmtd;/* '<S8>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_t_kT_BfrFltrSclrMult_FF;/* '<S524>/Multiplication1' */

#endif

#if Rte_SysCon_Variant_TRAR_2

static VAR(float32, TRAR_VAR_INIT) VeTRAR_t_kT_BfrFltr_FF;/* '<S524>/MinMax' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRAR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TRAR
#include "MemMap.h"

CONST(ConstB_TRAR_ac_T, TRAR_VAR_INIT) TRAR_ac_ConstB =
{

#if Rte_SysCon_Variant_TRAR_2

    3,                                 /* '<S324>/DTCBlk96' */

#define CONSTB_TRAR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_TRAR_2

    2                                  /* '<S324>/DTCBlk98' */
#define CONSTB_TRAR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_TRAR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_TRAR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_TRAR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRAR
#include "MemMap.h"

VAR(B_TRAR_ac_T, TRAR_VAR_INIT) TRAR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRAR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRAR
#include "MemMap.h"

VAR(DW_TRAR_ac_T, TRAR_VAR_INIT) TRAR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRAR
#include "MemMap.h"
#if Rte_SysCon_Variant_TRAR_2

static FUNC(void, TRAR_CODE_LOCAL) TRAR_ac_IfActionSubsystem1(VAR(sint16,
    AUTOMATIC) rtu_In1, P2VAR(sint16, AUTOMATIC, TRAR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_TRAR_2

static FUNC(void, TRAR_CODE_LOCAL) TRAR_ac_IfActionSubsystem1_g(VAR(sint16,
    AUTOMATIC) rtu_In1, VAR(float32, AUTOMATIC) rtu_TeImmed, P2VAR(sint16,
    AUTOMATIC, TRAR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, TRAR_VAR_INIT)
    rty_Te_Immed);

#endif

/*
 * Output and update for action system:
 *    '<S349>/IfActionSubsystem1'
 *    '<S349>/IfActionSubsystem'
 *    '<S380>/Pass1'
 */
#if Rte_SysCon_Variant_TRAR_2

static FUNC(void, TRAR_CODE_LOCAL) TRAR_ac_IfActionSubsystem1(VAR(sint16,
    AUTOMATIC) rtu_In1, P2VAR(sint16, AUTOMATIC, TRAR_VAR_INIT) rty_Out1)
{
    /* Gain: '<S362>/Gain' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for action system:
 *    '<S324>/IfActionSubsystem1'
 *    '<S324>/IfActionSubsystem4'
 *    '<S324>/IfActionSubsystem2'
 */
#if Rte_SysCon_Variant_TRAR_2

static FUNC(void, TRAR_CODE_LOCAL) TRAR_ac_IfActionSubsystem1_g(VAR(sint16,
    AUTOMATIC) rtu_In1, VAR(float32, AUTOMATIC) rtu_TeImmed, P2VAR(sint16,
    AUTOMATIC, TRAR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, TRAR_VAR_INIT)
    rty_Te_Immed)
{
    /* Gain: '<S459>/Gain' */
    *rty_Out1 = rtu_In1;

    /* Inport: '<S382>/TeImmed' */
    *rty_Te_Immed = rtu_TeImmed;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_TRAR_2

FUNC(void, TRAR_CODE) TRAR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Merge;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Summation5;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Vector;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_Equal4_p;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Summation18;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_Logical1_p2;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Sum_b;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_NotEqual_cp;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Sum2[2];

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Switch5;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Summation4;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Summation1;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Summation7;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch4_lj;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch3_cv;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch4_f;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch4_d;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch4_ig;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch2_md;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch2_lt;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch7;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch4_o;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_MinMax1_k;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch7_j;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint16 rtb_Switch4_k;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_Comparison3_a;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Maximum1_d;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_AND_e;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_AND_ah;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_UnitDelay_a;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_Logical2_l;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_Logical3_np;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 rtb_Summation11;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean rtb_AND_nu;

#endif

#if Rte_SysCon_Variant_TRAR_2

    TeTRAR_e_EngCntrlMode rtb_UnitDelay4;

#endif

#if Rte_SysCon_Variant_TRAR_2

    sint32 rtb_Switch_p_0;

#endif

#if Rte_SysCon_Variant_TRAR_2

    TeTINR_e_TCM_TrqCntrlModeReq VeTRAC_b_RedSprk4SEM_tmp;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean UnitDelay_DSTATE_pn_tmp;

#endif

#if Rte_SysCon_Variant_TRAR_2

    boolean UnitDelay_DSTATE_pg_tmp;

#endif

#if Rte_SysCon_Variant_TRAR_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTITR_M_PumpTorq'
     */
    (void)Rte_Read_VeTITR_M_PumpTorq_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTrqMaxHalfCyl'
     */
    (void)Rte_Read_VeOITR_M_InputTrqMaxHalfCyl_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTrqMaxAllCyl'
     */
    (void)Rte_Read_VeOITR_M_InputTrqMaxAllCyl_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTrqMinHalfCyl'
     */
    (void)Rte_Read_VeOITR_M_InputTrqMinHalfCyl_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTrqMinAllCyl'
     */
    (void)Rte_Read_VeOITR_M_InputTrqMinAllCyl_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeESSR_M_EngTrqReqImmed'
     */
    (void)Rte_Read_VeESSR_M_EngTrqReqImmed_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngTrqRespType'
     */
    (void)Rte_Read_VeESSR_e_EngTrqRespType_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ph);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeESSR_b_InputTorqOverride'
     */
    (void)Rte_Read_VeESSR_b_InputTorqOverride_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_e_EngDsrdSt'
     */
    (void)Rte_Read_VeOITR_e_EngDsrdSt_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeESSR_M_EngTrqReqPrdtd'
     */
    (void)Rte_Read_VeESSR_M_EngTrqReqPrdtd_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeDTRR_e_AxleTrqRespType'
     */
    (void)Rte_Read_VeDTRR_e_AxleTrqRespType_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ixl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeESSR_b_EngDFCOOffHoldReq'
     */
    (void)Rte_Read_VeESSR_b_EngDFCOOffHoldReq_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeENGR_e_CylinderDeacMode'
     */
    (void)Rte_Read_VeENGR_e_CylinderDeacMode_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_na);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeENGR_e_EngDFSO_St'
     */
    (void)Rte_Read_VeENGR_e_EngDFSO_St_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTorqMaxTact_Fst'
     */
    (void)Rte_Read_VeOITR_M_InputTorqMaxTact_Fst_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTorqMinTact_Fst'
     */
    (void)Rte_Read_VeOITR_M_InputTorqMinTact_Fst_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeENGR_b_CondOkForCylDeac'
     */
    (void)Rte_Read_VeENGR_b_CondOkForCylDeac_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_OptInputTorqAllCylFuel'
     */
    (void)Rte_Read_VeOITR_M_OptInputTorqAllCylFuel_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cs);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_OptInputTorqHalfCylFuel'
     */
    (void)Rte_Read_VeOITR_M_OptInputTorqHalfCylFuel_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_OptInputTorqAllCylDFCO'
     */
    (void)Rte_Read_VeOITR_M_OptInputTorqAllCylDFCO_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_OptInputTorqHalfCylDFCO'
     */
    (void)Rte_Read_VeOITR_M_OptInputTorqHalfCylDFCO_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ig);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_b_FFDOD_OK'
     */
    (void)Rte_Read_VeOITR_b_FFDOD_OK_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_b_ZFDOD_OK'
     */
    (void)Rte_Read_VeOITR_b_ZFDOD_OK_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_b_ZFNonDOD_OK'
     */
    (void)Rte_Read_VeOITR_b_ZFNonDOD_OK_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTrqActual'
     */
    (void)Rte_Read_VeETQR_M_EngTrqActual_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeWTAR_b_IsToRequestClipped'
     */
    (void)Rte_Read_VeWTAR_b_IsToRequestClipped_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmedOITR'
     */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedOITR_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aa);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeHSER_b_NiDotMinCnstrntActive'
     */
    (void)Rte_Read_VeHSER_b_NiDotMinCnstrntActive_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTrqAirflow'
     */
    (void)Rte_Read_VeETQR_M_EngTrqAirflow_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_OptInputTorq'
     */
    (void)Rte_Read_VeOITR_M_OptInputTorq_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ip);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_TiPredicted'
     */
    (void)Rte_Read_VeOITR_M_TiPredicted_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTrqReserveReq'
     */
    (void)Rte_Read_VeETQR_M_EngTrqReserveReq_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_en);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_TiElectrical'
     */
    (void)Rte_Read_VeOITR_M_TiElectrical_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeICSR_e_EngCntrlMode'
     */
    (void)Rte_Read_VeICSR_e_EngCntrlMode_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeENGR_b_EngDFSO_Allow'
     */
    (void)Rte_Read_VeENGR_b_EngDFSO_Allow_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeENGR_T_InductionAirTemp'
     */
    (void)Rte_Read_VeENGR_T_InductionAirTemp_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     */
    (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTITR_M_InputTrqCapacityMinOff'
     */
    (void)Rte_Read_VeTITR_M_InputTrqCapacityMinOff_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeSTRR_b_EngOnFuelOnReqd'
     */
    (void)Rte_Read_VeSTRR_b_EngOnFuelOnReqd_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lc);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeHTDR_e_ToNVHZone'
     */
    (void)Rte_Read_VeHTDR_e_ToNVHZone_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTrqMaxDragAllCyl'
     */
    (void)Rte_Read_VeOITR_M_InputTrqMaxDragAllCyl_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ix);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeENGR_e_ETRQ_Mode'
     */
    (void)Rte_Read_VeENGR_e_ETRQ_Mode_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_e4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_li);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMinLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMinLim_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lo);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTINR_e_TCMTrqCntrlMdFst_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeSCCR_b_FrntAxlMaxRq'
     */
    (void)Rte_Read_VeSCCR_b_FrntAxlMaxRq_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeICSR_b_Disable_Ni'
     */
    (void)Rte_Read_VeICSR_b_Disable_Ni_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_TorqAchieved'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_TorqAchieved_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeMTQR_b_AlternatorMd_MtrA'
     */
    (void)Rte_Read_VeMTQR_b_AlternatorMd_MtrA_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' */
#if Rte_SysCon_Variant_TRAR_2 && Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdFst_Value
        (&TRAR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

#elif !Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable && Rte_SysCon_Variant_TRAR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' */
    TRAR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = CeTINR_e_None;

#endif

    /* End of SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' */

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTTQR_M_TCMSumTrqReqFast'
     */
    (void)Rte_Read_VeTTQR_M_TCMSumTrqReqFast_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeATRR_b_RaceStrtActv'
     */
    (void)Rte_Read_VeATRR_b_RaceStrtActv_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ay);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_b_EngCapacityMinRunImmedRedAvail'
     */
    (void)Rte_Read_VeETQR_b_EngCapacityMinRunImmedRedAvail_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinRunImmedNom'
     */
    (void)Rte_Read_VeETQR_M_EngCapacityMinRunImmedNom_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinRunImmedRed'
     */
    (void)Rte_Read_VeETQR_M_EngCapacityMinRunImmedRed_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTorqACC4Capability'
     */
    (void)Rte_Read_VeETQR_M_EngTorqACC4Capability_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ih);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngCapacityMinOff'
     */
    (void)Rte_Read_VeETQR_M_EngCapacityMinOff_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeHSER_e_OITR_PredLeadState'
     */
    (void)Rte_Read_VeHSER_e_OITR_PredLeadState_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ag);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeHSER_e_OITR_LeadState'
     */
    (void)Rte_Read_VeHSER_e_OITR_LeadState_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fe);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeETQR_M_PnLimitMaxEngTrqCap'
     */
    (void)Rte_Read_VeETQR_M_PnLimitMaxEngTrqCap_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_io);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeENGR_b_PnLimitActvFlg'
     */
    (void)Rte_Read_VeENGR_b_PnLimitActvFlg_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTITR_M_Ti_CL_Slow'
     */
    (void)Rte_Read_VeTITR_M_Ti_CL_Slow_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTorqMaxTact_Slw'
     */
    (void)Rte_Read_VeOITR_M_InputTorqMaxTact_Slw_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ny);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTorqMinTact_Slw'
     */
    (void)Rte_Read_VeOITR_M_InputTorqMinTact_Slw_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_be);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdSlw'
     */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdSlw_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71' incorporates:
     *  Inport: '<Root>/VeOITR_M_InputTrqMinArb'
     */
    (void)Rte_Read_VeOITR_M_InputTrqMinArb_Value
        (&TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ei);

    /* Outputs for Function Call SubSystem: '<Root>/TRAR_MedTEB' */
    /* Outputs for Atomic SubSystem: '<S1>/TRAC_DtrmnEngCmnd' */
    /* Logic: '<S9>/Logical4' incorporates:
     *  Constant: '<S50>/Constant'
     *  Constant: '<S55>/Calib'
     *  Logic: '<S9>/Logical5'
     *  RelationalOperator: '<S9>/Comparison1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     */
    VeTRAR_b_OvrrdRespTypDurSpdCtl =
        (((TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg) || (((uint32)
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hp) ==
           CeTRAR_e_SpeedMode)) && (KeTRAR_b_OvrrdRespTypDurSpdCtl));

    /* If: '<S13>/If1' incorporates:
     *  DataTypeConversion: '<S13>/DataTypeConversion1'
     */
    if (((sint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) == 0)
    {
        /* Outputs for IfAction SubSystem: '<S13>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S285>/ActionPort'
         */
        /* Merge: '<S13>/Merge' incorporates:
         *  Constant: '<S285>/FALSEConstant'
         *  SignalConversion generated from: '<S285>/EngCylDeacReq'
         */
        TRAR_ac_B.Merge = false;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Constant: '<S285>/FALSEConstant1'
         *  SignalConversion generated from: '<S285>/EngDFCOReq'
         */
        TRAR_ac_B.Merge1_c = false;

        /* End of Outputs for SubSystem: '<S13>/IfActionSubsystem2' */
    }
    else if (((sint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) == 1)
    {
        /* Outputs for IfAction SubSystem: '<S13>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S284>/ActionPort'
         */
        /* Merge: '<S13>/Merge' incorporates:
         *  Constant: '<S284>/FALSEConstant'
         *  SignalConversion generated from: '<S284>/EngCylDeacReq'
         */
        TRAR_ac_B.Merge = false;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Constant: '<S284>/TRUEConstant'
         *  SignalConversion generated from: '<S284>/EngDFCOReq'
         */
        TRAR_ac_B.Merge1_c = true;

        /* End of Outputs for SubSystem: '<S13>/IfActionSubsystem1' */
    }
    else if (((sint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) == 2)
    {
        /* Outputs for IfAction SubSystem: '<S13>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S286>/ActionPort'
         */
        /* Merge: '<S13>/Merge' incorporates:
         *  Constant: '<S286>/TRUEConstant'
         *  SignalConversion generated from: '<S286>/EngCylDeacReq'
         */
        TRAR_ac_B.Merge = true;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Constant: '<S286>/FALSEConstant1'
         *  SignalConversion generated from: '<S286>/EngDFCOReq'
         */
        TRAR_ac_B.Merge1_c = false;

        /* End of Outputs for SubSystem: '<S13>/IfActionSubsystem3' */
    }
    else
    {
        if (((sint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) == 3)
        {
            /* Outputs for IfAction SubSystem: '<S13>/IfActionSubsystem4' incorporates:
             *  ActionPort: '<S287>/ActionPort'
             */
            /* Merge: '<S13>/Merge' incorporates:
             *  Constant: '<S287>/TRUEConstant'
             *  SignalConversion generated from: '<S287>/EngCylDeacReq'
             */
            TRAR_ac_B.Merge = true;

            /* Merge: '<S13>/Merge1' incorporates:
             *  Constant: '<S287>/TRUEConstant1'
             *  SignalConversion generated from: '<S287>/EngDFCOReq'
             */
            TRAR_ac_B.Merge1_c = true;

            /* End of Outputs for SubSystem: '<S13>/IfActionSubsystem4' */
        }
    }

    /* End of If: '<S13>/If1' */

    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S275>/Calib'
     */
    if (KeTRAR_b_OvrrideEngDFCOReq)
    {
        /* Switch: '<S289>/Switch1' incorporates:
         *  Constant: '<S276>/Calib'
         */
        VeTRAC_b_DFCOReq = KeTRAR_b_OvrrideEngCylDFCOReq_Val;
    }
    else
    {
        /* Switch: '<S289>/Switch1' */
        VeTRAC_b_DFCOReq = TRAR_ac_B.Merge1_c;
    }

    /* End of Switch: '<S289>/Switch1' */

    /* Sum: '<S25>/Summation5' */
    rtb_Summation5 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Sum: '<S16>/Sum1' incorporates:
     *  Abs: '<S16>/Abs1'
     *  Abs: '<S16>/Abs2'
     */
    VeTRAC_M_EngineLosses = fabsf
        (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ih) + fabsf
        (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fu);

    /* Lookup_n-D: '<S298>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     */
    rtb_Vector = look1_iflf_binlca_16a
        (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nr, ((const float32 *)
          &(KxTRAR_r_TiCLSprkLmtFctr[0])), ((const float32 *)
          &(KtTRAR_r_TiCLSprkLmtFctr[0])), 7U);

    /* Sum: '<S16>/Sum' */
    rtb_Sum_b = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h +
        VeTRAC_M_EngineLosses;

    /* Sum: '<S16>/Sum2' */
    rtb_Sum2[0] = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f +
        VeTRAC_M_EngineLosses;
    rtb_Sum2[1] = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pm +
        VeTRAC_M_EngineLosses;

    /* Outputs for Atomic SubSystem: '<S16>/ProtectedDivision' */
    /* RelationalOperator: '<S299>/NotEqual' incorporates:
     *  Constant: '<S299>/ConstantValue'
     */
    rtb_NotEqual_cp = (rtb_Sum_b != 0.0F);

    /* Switch: '<S299>/Switch2' incorporates:
     *  Constant: '<S299>/ConstantValue2'
     *  Constant: '<S299>/ConstantValue3'
     *  RelationalOperator: '<S299>/GreaterThanorEqual'
     *  RelationalOperator: '<S299>/GreaterThanorEqual1'
     *  Switch: '<S299>/Switch3'
     */
    if (rtb_Sum_b > 0.0F)
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S299>/MAXFLOAT'
         */
        rtb_Summation11 = 3.402823466E+38F;
    }
    else if (rtb_Sum_b < 0.0F)
    {
        /* Switch: '<S299>/Switch3' incorporates:
         *  Constant: '<S299>/MINFLOAT'
         *  Switch: '<S25>/Switch1'
         */
        rtb_Summation11 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S299>/ConstantValue4'
         *  Switch: '<S299>/Switch3'
         */
        rtb_Summation11 = 0.0F;
    }

    /* End of Switch: '<S299>/Switch2' */
    /* End of Outputs for SubSystem: '<S16>/ProtectedDivision' */
    for (rtb_Switch_p_0 = 0; rtb_Switch_p_0 < 2; rtb_Switch_p_0++)
    {
        /* Outputs for Atomic SubSystem: '<S16>/ProtectedDivision' */
        /* RelationalOperator: '<S299>/NotEqual1' */
        rtb_Summation18 = rtb_Sum2[rtb_Switch_p_0];

        /* MinMax: '<S16>/MinMax1' incorporates:
         *  Constant: '<S299>/ConstantValue1'
         *  Logic: '<S299>/AND'
         *  Product: '<S299>/Division'
         *  RelationalOperator: '<S299>/NotEqual1'
         *  Switch: '<S299>/Switch1'
         */
        if (rtb_NotEqual_cp && (rtb_Summation18 != 0.0F))
        {
            rtb_Summation18 = rtb_Sum_b / rtb_Summation18;
        }
        else
        {
            rtb_Summation18 = rtb_Summation11;
        }

        /* MinMax: '<S16>/MinMax1' incorporates:
         *  Constant: '<S16>/ConstantValue'
         *  RelationalOperator: '<S299>/NotEqual1'
         */
        rtb_Sum2[rtb_Switch_p_0] = fmaxf(rtb_Summation18, 1.0F);

        /* End of Outputs for SubSystem: '<S16>/ProtectedDivision' */
    }

    /* Gain: '<S301>/Gain' */
    VeTRAC_r_MaxSparkAuthorityRed = rtb_Sum2[0];

    /* Gain: '<S302>/Gain' */
    VeTRAC_r_MaxSparkAuthorityNom = rtb_Sum2[1];

    /* Switch: '<S16>/Switch' */
    if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eq)
    {
        /* Switch: '<S16>/Switch' */
        VeTRAC_r_MxSprkAuthRedArb = VeTRAC_r_MaxSparkAuthorityRed;
    }
    else
    {
        /* Switch: '<S16>/Switch' */
        VeTRAC_r_MxSprkAuthRedArb = VeTRAC_r_MaxSparkAuthorityNom;
    }

    /* End of Switch: '<S16>/Switch' */

    /* If: '<S4>/If' */
    if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i3)
    {
        /* Outputs for IfAction SubSystem: '<S4>/VoltCntrlActive' incorporates:
         *  ActionPort: '<S26>/ActionPort'
         */
        /* Merge: '<S4>/Merge' incorporates:
         *  Constant: '<S26>/ConstantValue2'
         *  Constant: '<S563>/Calib'
         *  MinMax: '<S26>/MinMax6'
         *  Product: '<S26>/Product2'
         *  Sum: '<S26>/Summation14'
         */
        rtb_Merge = (fminf(TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p,
                           0.0F) * ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()))
            + TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h;

        /* End of Outputs for SubSystem: '<S4>/VoltCntrlActive' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/VoltCntrlInactive' incorporates:
         *  ActionPort: '<S27>/ActionPort'
         */
        /* Merge: '<S4>/Merge' incorporates:
         *  Inport: '<S27>/Potential'
         */
        rtb_Merge = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h;

        /* End of Outputs for SubSystem: '<S4>/VoltCntrlInactive' */
    }

    /* End of If: '<S4>/If' */

    /* Sum: '<S290>/Sum3' */
    rtb_Sum_b = rtb_Merge - rtb_Summation5;

    /* Outputs for Atomic SubSystem: '<S290>/Hysteresis1' */
    /* Switch: '<S308>/Switch1' incorporates:
     *  Constant: '<S305>/Calib'
     *  Constant: '<S306>/Calib'
     *  Constant: '<S308>/ConstantValue'
     *  RelationalOperator: '<S308>/GreaterThan'
     *  RelationalOperator: '<S308>/GreaterThan1'
     *  Sum: '<S290>/Sum3'
     *  UnitDelay: '<S308>/UnitDelay'
     */
    if (rtb_Sum_b > KeTRAR_M_ESPTactCnstRSP)
    {
        TRAR_ac_DW.UnitDelay_DSTATE_f0 = true;
    }
    else
    {
        TRAR_ac_DW.UnitDelay_DSTATE_f0 = ((rtb_Sum_b >= KeTRAR_M_ESPTactCnstLSP)
            && (TRAR_ac_DW.UnitDelay_DSTATE_f0));
    }

    /* End of Switch: '<S308>/Switch1' */
    /* End of Outputs for SubSystem: '<S290>/Hysteresis1' */

    /* Logic: '<S290>/Logical5' incorporates:
     *  Constant: '<S307>/Constant'
     *  Logic: '<S290>/Logical4'
     *  RelationalOperator: '<S290>/Equal11'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     *  UnitDelay: '<S308>/UnitDelay'
     */
    VeTRAC_b_ESCActv = (((((uint32)
                           TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ixl)
                          != CePTAR_e_Inactive) ||
                         (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1)) &&
                        (TRAR_ac_DW.UnitDelay_DSTATE_f0));

    /* Logic: '<S290>/Logical1' incorporates:
     *  Constant: '<S304>/Calib'
     */
    VeTRAC_b_RedSprk4ESC = ((VeTRAC_b_ESCActv) && (KeTRAR_b_UseRedSprk4ESC));

    /* RelationalOperator: '<S300>/Equal3' incorporates:
     *  RelationalOperator: '<S25>/Comparison1'
     *  RelationalOperator: '<S300>/Equal1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     */
    VeTRAC_b_RedSprk4SEM_tmp =
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kt;

    /* Logic: '<S300>/Logical1' incorporates:
     *  Constant: '<S315>/Calib'
     *  Constant: '<S316>/Constant'
     *  Constant: '<S317>/Constant'
     *  Logic: '<S300>/Logical2'
     *  RelationalOperator: '<S300>/Equal1'
     *  RelationalOperator: '<S300>/Equal3'
     */
    VeTRAC_b_RedSprk4SEM = (((((uint32)VeTRAC_b_RedSprk4SEM_tmp) ==
        CeTINR_e_TrqInc) || (((uint32)VeTRAC_b_RedSprk4SEM_tmp) ==
        CeTINR_e_TrqDec)) && (KeTRAR_b_UseRedSprk4SEM));

    /* Logic: '<S293>/Logical1' incorporates:
     *  Constant: '<S310>/Calib'
     *  Constant: '<S311>/Constant'
     *  Constant: '<S312>/Constant'
     *  Constant: '<S313>/Constant'
     *  Constant: '<S314>/Constant'
     *  Logic: '<S293>/Logical3'
     *  Logic: '<S293>/Logical6'
     *  Logic: '<S293>/Logical7'
     *  RelationalOperator: '<S293>/Equal2'
     *  RelationalOperator: '<S293>/Equal4'
     *  RelationalOperator: '<S293>/Equal5'
     *  RelationalOperator: '<S293>/Equal6'
     */
    VeTRAC_b_RedSprk4K0Clsng = ((((((uint32)
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ag) == CeHSER_e_M2_State)
        || (((uint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ag) ==
            CeHSER_e_G2_State)) && ((((uint32)
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fe) != CeHSER_e_M2_State)
        && (((uint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fe) !=
            CeHSER_e_G2_State))) && (KeTRAR_b_UseRedSprk4K0Clsng));

    /* Logic: '<S16>/Logical1' */
    VeTRAC_b_UseRedSprkAuth = (((VeTRAC_b_RedSprk4ESC) || (VeTRAC_b_RedSprk4SEM))
        || (VeTRAC_b_RedSprk4K0Clsng));

    /* Outputs for Atomic SubSystem: '<S16>/SignalLatchOnWithReset2' */
    /* Logic: '<S303>/OR1' incorporates:
     *  Constant: '<S297>/Calib'
     *  Logic: '<S303>/OR'
     *  RelationalOperator: '<S16>/RelationalOperator2'
     *  UnitDelay: '<S16>/UnitDelay3'
     *  UnitDelay: '<S303>/UnitDelay'
     */
    TRAR_ac_DW.UnitDelay_DSTATE_ms = ((rtb_Vector < KeTRAR_r_TiCLSprkLmtThresh) ||
        ((TRAR_ac_DW.UnitDelay3_DSTATE_a4) && (TRAR_ac_DW.UnitDelay_DSTATE_ms)));

    /* End of Outputs for SubSystem: '<S16>/SignalLatchOnWithReset2' */

    /* Outputs for Atomic SubSystem: '<S16>/EdgeRising3' */
    /* Logic: '<S291>/OR1' incorporates:
     *  UnitDelay: '<S291>/UnitDelay'
     */
    rtb_NotEqual_cp = !TRAR_ac_DW.UnitDelay_DSTATE_i1;

    /* Update for UnitDelay: '<S291>/UnitDelay' */
    TRAR_ac_DW.UnitDelay_DSTATE_i1 = VeTRAC_b_UseRedSprkAuth;

    /* Logic: '<S16>/Logical13' incorporates:
     *  Constant: '<S294>/Calib'
     *  Logic: '<S16>/Logical11'
     *  Logic: '<S16>/Logical12'
     *  Logic: '<S291>/AND'
     *  UnitDelay: '<S16>/UnitDelay3'
     *  UnitDelay: '<S303>/UnitDelay'
     */
    VeTRAC_b_MxSprkAuthSprkLmtd = (((TRAR_ac_DW.UnitDelay_DSTATE_ms) &&
        (((!VeTRAC_b_UseRedSprkAuth) || (!rtb_NotEqual_cp)) ||
         (!KeTRAR_b_ResetTiCLSprkAuthLmt4RedSprk))) &&
        (TRAR_ac_DW.UnitDelay3_DSTATE_a4));

    /* End of Outputs for SubSystem: '<S16>/EdgeRising3' */

    /* Switch: '<S16>/Switch22' incorporates:
     *  Switch: '<S16>/Switch21'
     */
    if (VeTRAC_b_MxSprkAuthSprkLmtd)
    {
        /* Switch: '<S16>/Switch21' */
        if (VeTRAC_b_UseRedSprkAuth)
        {
            rtb_Summation4 = VeTRAC_r_MxSprkAuthRedArb;
        }
        else
        {
            rtb_Summation4 = VeTRAC_r_MaxSparkAuthorityNom;
        }

        /* Switch: '<S25>/Switch1' incorporates:
         *  MinMax: '<S16>/MinMax11'
         *  Product: '<S16>/Product3'
         *  UnitDelay: '<S16>/UnitDelay5'
         */
        rtb_Summation11 = fminf(VeTRAC_r_MxSprkAuthSprkLmtd, rtb_Vector *
                                rtb_Summation4);
    }
    else if (VeTRAC_b_UseRedSprkAuth)
    {
        /* Switch: '<S16>/Switch21' incorporates:
         *  Switch: '<S25>/Switch1'
         */
        rtb_Summation11 = VeTRAC_r_MxSprkAuthRedArb;
    }
    else
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Switch: '<S16>/Switch21'
         */
        rtb_Summation11 = VeTRAC_r_MaxSparkAuthorityNom;
    }

    /* End of Switch: '<S16>/Switch22' */

    /* MinMax: '<S16>/MinMax10' incorporates:
     *  Constant: '<S16>/ConstantValue4'
     */
    VeTRAC_r_MxSprkAuthSprkLmtd = fmaxf(rtb_Summation11, 1.0F);

    /* Outputs for Atomic SubSystem: '<S16>/GradientLimiter5' */
    /* Sum: '<S292>/Sum2' incorporates:
     *  UnitDelay: '<S292>/UnitDelay'
     */
    rtb_Vector = VeTRAC_r_MxSprkAuthSprkLmtd - VeTRAC_r_MxSprkAuthGrdLmtd;

    /* Outputs for Atomic SubSystem: '<S292>/Limiter' */
    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S296>/Calib'
     *  RelationalOperator: '<S309>/RelationalOperator'
     */
    if (KeTRAR_dr_MxSprkAuthLU < rtb_Vector)
    {
        /* Abs: '<S24>/Abs' */
        rtb_Vector = KeTRAR_dr_MxSprkAuthLU;
    }

    /* End of Switch: '<S309>/Switch1' */

    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S295>/Calib'
     *  RelationalOperator: '<S309>/RelationalOperator1'
     */
    if (rtb_Vector <= KeTRAR_dr_MxSprkAuthLD)
    {
        rtb_Vector = KeTRAR_dr_MxSprkAuthLD;
    }

    /* End of Switch: '<S309>/Switch' */
    /* End of Outputs for SubSystem: '<S292>/Limiter' */

    /* Sum: '<S292>/Sum3' incorporates:
     *  UnitDelay: '<S292>/UnitDelay'
     */
    VeTRAC_r_MxSprkAuthGrdLmtd = rtb_Vector + VeTRAC_r_MxSprkAuthGrdLmtd;

    /* End of Outputs for SubSystem: '<S16>/GradientLimiter5' */

    /* Logic: '<S13>/OR1' incorporates:
     *  Constant: '<S269>/Constant'
     *  Constant: '<S270>/Constant'
     *  Constant: '<S271>/Calib'
     *  Constant: '<S277>/Constant'
     *  Constant: '<S278>/Calib'
     *  Logic: '<S13>/Logical'
     *  Logic: '<S13>/Logical2'
     *  RelationalOperator: '<S13>/Equal1'
     *  RelationalOperator: '<S13>/Equal2'
     *  RelationalOperator: '<S13>/Equal3'
     */
    rtb_NotEqual_cp = (((((uint32)
                          TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_na) ==
                         CeENGR_e_HalfCylindersActive) || ((((uint32)
                           TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_na) ==
                          CeENGR_e_DeacInProgress) && (KeTRAR_b_DOD_DeacEnbl))) ||
                       ((((uint32)
                          TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_na) ==
                         CeENGR_e_ReacInProgress) && (KeTRAR_b_DOD_ReacEnbl)));

    /* Switch: '<S25>/Switch' */
    if (rtb_NotEqual_cp)
    {
        /* Switch: '<S25>/Switch' */
        rtb_Vector = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;
    }
    else
    {
        /* Switch: '<S25>/Switch' */
        rtb_Vector = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n;
    }

    /* End of Switch: '<S25>/Switch' */

    /* Switch: '<S25>/Switch4' incorporates:
     *  Constant: '<S25>/ConstantValue'
     *  Constant: '<S556>/Constant'
     *  Logic: '<S25>/Logical4'
     *  RelationalOperator: '<S25>/Comparison1'
     */
    if ((TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ay) && (((uint32)
            VeTRAC_b_RedSprk4SEM_tmp) == CeTINR_e_TrqDec))
    {
        rtb_Summation4 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn;
    }
    else
    {
        rtb_Summation4 = 999999.0F;
    }

    /* End of Switch: '<S25>/Switch4' */

    /* MinMax: '<S25>/MinMax1' incorporates:
     *  MinMax: '<S25>/MinMax3'
     *  Product: '<S25>/Product1'
     *  Sum: '<S25>/Summation13'
     *  Sum: '<S25>/Summation14'
     */
    VeTRAC_M_TePredMax = fminf(((fminf(fminf(rtb_Summation4,
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ip), rtb_Summation5) +
        VeTRAC_M_EngineLosses) * VeTRAC_r_MxSprkAuthGrdLmtd) -
        VeTRAC_M_EngineLosses, rtb_Vector);

    /* Sum: '<S25>/Summation18' */
    rtb_Summation18 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_be +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Switch: '<S25>/Switch5' */
    if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fv)
    {
        /* Switch: '<S25>/Switch5' incorporates:
         *  MinMax: '<S25>/MinMax5'
         *  MinMax: '<S25>/MinMax7'
         */
        rtb_Switch5 = fmaxf(fminf
                            (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l,
                             TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_io),
                            rtb_Summation18);
    }
    else
    {
        /* Switch: '<S25>/Switch5' */
        rtb_Switch5 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l;
    }

    /* End of Switch: '<S25>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S25>/Limiter3' */
    /* Switch: '<S561>/Switch1' incorporates:
     *  RelationalOperator: '<S561>/RelationalOperator'
     */
    if (VeTRAC_M_TePredMax < rtb_Switch5)
    {
        /* Switch: '<S25>/Switch1' */
        rtb_Summation11 = VeTRAC_M_TePredMax;
    }
    else
    {
        /* Switch: '<S25>/Switch1' */
        rtb_Summation11 = rtb_Switch5;
    }

    /* End of Switch: '<S561>/Switch1' */

    /* Switch: '<S561>/Switch' incorporates:
     *  RelationalOperator: '<S561>/RelationalOperator1'
     */
    if (rtb_Summation11 <= TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ix)
    {
        rtb_Summation11 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ix;
    }

    /* End of Switch: '<S561>/Switch' */
    /* End of Outputs for SubSystem: '<S25>/Limiter3' */

    /* Sum: '<S25>/Summation15' */
    VeTRAR_M_TiPredicted = rtb_Summation11 +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Switch: '<S288>/Switch1' incorporates:
     *  Constant: '<S273>/Calib'
     */
    if (KeTRAR_b_OvrrideEngCylDeacReq)
    {
        /* Switch: '<S288>/Switch1' incorporates:
         *  Constant: '<S274>/Calib'
         */
        VeTRAC_b_DODReq = KeTRAR_b_OvrrideEngCylDeacReq_Val;
    }
    else
    {
        /* Switch: '<S288>/Switch1' */
        VeTRAC_b_DODReq = TRAR_ac_B.Merge;
    }

    /* End of Switch: '<S288>/Switch1' */

    /* RelationalOperator: '<S13>/Equal4' incorporates:
     *  Constant: '<S272>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     */
    rtb_Equal4_p = (((uint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oz)
                    == CeENGR_e_DFSO_Enabled);

    /* Sum: '<S25>/Summation7' */
    rtb_Summation7 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Sum: '<S25>/Summation1' */
    rtb_Summation1 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Sum: '<S25>/Summation4' */
    rtb_Summation4 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Sum: '<S25>/Summation9' */
    rtb_Sum_b = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Sum: '<S25>/Summation10' */
    rtb_Summation11 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cs +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Outputs for Atomic SubSystem: '<S25>/Limiter' */
    /* Switch: '<S558>/Switch1' incorporates:
     *  RelationalOperator: '<S558>/RelationalOperator'
     */
    if (rtb_Summation4 < rtb_Summation11)
    {
        /* Switch: '<S25>/Switch1' */
        rtb_Summation11 = rtb_Summation4;
    }

    /* End of Switch: '<S558>/Switch1' */

    /* Switch: '<S558>/Switch' incorporates:
     *  RelationalOperator: '<S558>/RelationalOperator1'
     */
    if (rtb_Summation11 > rtb_Sum_b)
    {
        /* Switch: '<S558>/Switch' */
        VeTRAR_M_OptTeAllCylFuel = rtb_Summation11;
    }
    else
    {
        /* Switch: '<S558>/Switch' */
        VeTRAR_M_OptTeAllCylFuel = rtb_Sum_b;
    }

    /* End of Switch: '<S558>/Switch' */
    /* End of Outputs for SubSystem: '<S25>/Limiter' */

    /* Sum: '<S25>/Summation2' */
    rtb_Summation11 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kj +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Outputs for Atomic SubSystem: '<S25>/Limiter1' */
    /* Switch: '<S559>/Switch1' incorporates:
     *  RelationalOperator: '<S559>/RelationalOperator'
     */
    if (rtb_Summation1 < rtb_Summation11)
    {
        /* Switch: '<S25>/Switch1' */
        rtb_Summation11 = rtb_Summation1;
    }

    /* End of Switch: '<S559>/Switch1' */

    /* Switch: '<S559>/Switch' incorporates:
     *  RelationalOperator: '<S559>/RelationalOperator1'
     */
    if (rtb_Summation11 > rtb_Summation7)
    {
        /* Switch: '<S559>/Switch' */
        VeTRAR_M_OptTeHalfCylFuel = rtb_Summation11;
    }
    else
    {
        /* Switch: '<S559>/Switch' */
        VeTRAR_M_OptTeHalfCylFuel = rtb_Summation7;
    }

    /* End of Switch: '<S559>/Switch' */
    /* End of Outputs for SubSystem: '<S25>/Limiter1' */

    /* Sum: '<S25>/Summation11' */
    rtb_Summation11 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Sum: '<S25>/Summation12' */
    VeTRAC_M_OptTeArb = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ig +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Outputs for Atomic SubSystem: '<S4>/TRAC_EngineState' */

    /* Chart: '<S23>/TRAC_EngineState' incorporates:
     *  Constant: '<S14>/Calib'
     *  UnitDelay: '<S24>/UnitDelay1'
     */
    /* Gateway: TRAC_EngineState/TRAC_EngineState */
    /* During: TRAC_EngineState/TRAC_EngineState */
    if (((uint32)TRAR_ac_DW.is_active_c1_TRAC_EngineState) == 0U)
    {
        /* Entry: TRAC_EngineState/TRAC_EngineState */
        TRAR_ac_DW.is_active_c1_TRAC_EngineState = 1U;

        /* Entry Internal: TRAC_EngineState/TRAC_EngineState */
        /* Transition: '<S497>:23' */
        TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_Full;

        /* RelationalOperator: '<S51>/Comparison4' */
        /* Entry 'Fuel_Full': '<S497>:1' */
        VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_FF;
        TRAR_ac_B.DOD_enbl = false;
        TRAR_ac_B.DFCO_enbl = false;
        VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
    }
    else
    {
        switch (TRAR_ac_DW.is_c1_TRAC_EngineState)
        {
          case TRAR_ac_IN_DFCO2Fuel_DOD:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_ZF2FF;

            /* During 'DFCO2Fuel_DOD': '<S497>:10' */
            if (((((((!VeTRAC_b_DFCOReq) ||
                     (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (VeTRAC_b_DODReq)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk)) &&
                    (TRAR_ac_DW.UnitDelay1_DSTATE_c)) && (!rtb_Equal4_p))
            {
                /* Transition: '<S497>:21' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_DOD': '<S497>:3' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_FF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            else if ((((VeTRAC_b_DODReq) && (VeTRAC_b_DFCOReq)) &&
                      (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                     (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo))
            {
                /* Transition: '<S497>:35' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel2DFCO_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel2DFCO_DOD': '<S497>:6' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_FF2ZF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = false;
            }
            else if (((!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng) || (
                       !VeTRAC_b_DODReq)) ||
                     (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk))
            {
                /* Transition: '<S497>:41' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_DOD2Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_DOD2Full': '<S497>:2' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD2NonDOD_FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            else
            {
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            break;

          case TRAR_ac_IN_DFCO2Fuel_Full:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_ZF2FF;

            /* During 'DFCO2Fuel_Full': '<S497>:12' */
            if (((((VeTRAC_b_DODReq) || (!VeTRAC_b_DFCOReq)) ||
                    (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp)) &&
                    (TRAR_ac_DW.UnitDelay1_DSTATE_c)) && (!rtb_Equal4_p))
            {
                /* Transition: '<S497>:17' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_Full': '<S497>:1' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            else if ((VeTRAC_b_DFCOReq) &&
                     (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp))
            {
                /* Transition: '<S497>:38' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel2DFCO_Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel2DFCO_Full': '<S497>:7' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_FF2ZF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = rtb_Summation11;
            }
            else
            {
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            break;

          case TRAR_ac_IN_DFCO_DOD:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_ZF;

            /* During 'DFCO_DOD': '<S497>:5' */
            rtb_AND_nu = !VeTRAC_b_DFCOReq;
            if (((rtb_AND_nu &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (VeTRAC_b_DODReq)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk))
            {
                /* Transition: '<S497>:15' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO2Fuel_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'DFCO2Fuel_DOD': '<S497>:10' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_ZF2FF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            else
            {
                rtb_Comparison3_a =
                    ((!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng) ||
                     (!VeTRAC_b_DODReq));
                if ((rtb_Comparison3_a ||
                        (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk)) &&
                    rtb_AND_nu)
                {
                    /* Transition: '<S497>:28' */
                    TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_DOD2Full;

                    /* RelationalOperator: '<S51>/Comparison4' */
                    /* Entry 'Fuel_DOD2Full': '<S497>:2' */
                    VeTRAC_e_DsrdEngState = CeTRAR_e_DOD2NonDOD_FF;
                    TRAR_ac_B.DOD_enbl = false;
                    TRAR_ac_B.DFCO_enbl = false;
                    VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
                }
                else
                {
                    if (rtb_Comparison3_a ||
                            (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo))
                    {
                        /* Transition: '<S497>:40' */
                        TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO_Full;

                        /* RelationalOperator: '<S51>/Comparison4' */
                        /* Entry 'DFCO_Full': '<S497>:4' */
                        VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_ZF;
                        TRAR_ac_B.DOD_enbl = false;
                        TRAR_ac_B.DFCO_enbl = true;
                        VeTRAC_M_OptTeArb = rtb_Summation11;
                    }
                }
            }
            break;

          case TRAR_ac_IN_DFCO_Full:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_ZF;

            /* During 'DFCO_Full': '<S497>:4' */
            if ((((VeTRAC_b_DODReq) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (VeTRAC_b_DFCOReq)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo))
            {
                /* Transition: '<S497>:33' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'DFCO_DOD': '<S497>:5' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_ZF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = true;
            }
            else if ((!VeTRAC_b_DFCOReq) ||
                     (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp))
            {
                /* Transition: '<S497>:19' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO2Fuel_Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'DFCO2Fuel_Full': '<S497>:12' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_ZF2FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            else
            {
                VeTRAC_M_OptTeArb = rtb_Summation11;
            }
            break;

          case TRAR_ac_IN_Fuel2DFCO_DOD:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_FF2ZF;

            /* During 'Fuel2DFCO_DOD': '<S497>:6' */
            if ((((((VeTRAC_b_DODReq) && (VeTRAC_b_DFCOReq)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo)) &&
                    (TRAR_ac_DW.UnitDelay1_DSTATE_c)) && rtb_NotEqual_cp)
            {
                /* Transition: '<S497>:18' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'DFCO_DOD': '<S497>:5' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_ZF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = true;
            }
            else if (((((!VeTRAC_b_DFCOReq) ||
                        (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo)) &&
                       (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                      (VeTRAC_b_DODReq)) &&
                     (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk))
            {
                /* Transition: '<S497>:34' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO2Fuel_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'DFCO2Fuel_DOD': '<S497>:10' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_ZF2FF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            else
            {
                if ((((!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng) || (
                        !TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo)) ||
                     (!VeTRAC_b_DODReq)) || (!VeTRAC_b_DFCOReq))
                {
                    /* Transition: '<S497>:29' */
                    TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO_Full;

                    /* RelationalOperator: '<S51>/Comparison4' */
                    /* Entry 'DFCO_Full': '<S497>:4' */
                    VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_ZF;
                    TRAR_ac_B.DOD_enbl = false;
                    TRAR_ac_B.DFCO_enbl = true;
                    VeTRAC_M_OptTeArb = rtb_Summation11;
                }
            }
            break;

          case TRAR_ac_IN_Fuel2DFCO_Full:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_FF2ZF;

            /* During 'Fuel2DFCO_Full': '<S497>:7' */
            if (((VeTRAC_b_DFCOReq) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp)) &&
                    (TRAR_ac_DW.UnitDelay1_DSTATE_c))
            {
                /* Transition: '<S497>:25' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO_Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'DFCO_Full': '<S497>:4' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_ZF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = true;
                VeTRAC_M_OptTeArb = rtb_Summation11;
            }
            else if ((!VeTRAC_b_DFCOReq) ||
                     (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp))
            {
                /* Transition: '<S497>:39' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_DFCO2Fuel_Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'DFCO2Fuel_Full': '<S497>:12' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_ZF2FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            else
            {
                VeTRAC_M_OptTeArb = rtb_Summation11;
            }
            break;

          case TRAR_ac_IN_Fuel_DOD:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_FF;

            /* During 'Fuel_DOD': '<S497>:3' */
            if (((VeTRAC_b_DFCOReq) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oo))
            {
                /* Transition: '<S497>:22' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel2DFCO_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel2DFCO_DOD': '<S497>:6' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_FF2ZF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = false;
            }
            else if (((!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng) || (
                       !TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk)) ||
                     (!VeTRAC_b_DODReq))
            {
                /* Transition: '<S497>:20' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_DOD2Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_DOD2Full': '<S497>:2' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD2NonDOD_FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            else
            {
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            break;

          case TRAR_ac_IN_Fuel_DOD2Full:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_DOD2NonDOD_FF;

            /* During 'Fuel_DOD2Full': '<S497>:2' */
            if (((VeTRAC_b_DODReq) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk))
            {
                /* Transition: '<S497>:37' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_Full2DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_Full2DOD': '<S497>:11' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD2DOD_FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            else if (((((!VeTRAC_b_DODReq) ||
                        (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) ||
                       (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk)) &&
                      (TRAR_ac_DW.UnitDelay1_DSTATE_c)) && (!rtb_NotEqual_cp))
            {
                /* Transition: '<S497>:16' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_Full': '<S497>:1' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            else
            {
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            break;

          case TRAR_ac_IN_Fuel_Full:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_FF;

            /* During 'Fuel_Full': '<S497>:1' */
            if ((((VeTRAC_b_DODReq) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk)) &&
                    ((!VeTRAC_b_DFCOReq) || (KeTRAR_b_FuelDODPreferred)))
            {
                /* Transition: '<S497>:13' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_Full2DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_Full2DOD': '<S497>:11' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD2DOD_FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            else if ((VeTRAC_b_DFCOReq) &&
                     (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fp))
            {
                /* Transition: '<S497>:24' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel2DFCO_Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel2DFCO_Full': '<S497>:7' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD_FF2ZF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = rtb_Summation11;
            }
            else
            {
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            break;

          default:
            /* RelationalOperator: '<S51>/Comparison4' */
            VeTRAC_e_DsrdEngState = CeTRAR_e_NonDOD2DOD_FF;

            /* During 'Fuel_Full2DOD': '<S497>:11' */
            if ((((VeTRAC_b_DODReq) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) &&
                    (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk)) &&
                    (TRAR_ac_DW.UnitDelay1_DSTATE_c))
            {
                /* Transition: '<S497>:14' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_DOD;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_DOD': '<S497>:3' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD_FF;
                TRAR_ac_B.DOD_enbl = true;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            else if (((!VeTRAC_b_DODReq) ||
                      (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ng)) ||
                     (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nk))
            {
                /* Transition: '<S497>:36' */
                TRAR_ac_DW.is_c1_TRAC_EngineState = TRAR_ac_IN_Fuel_DOD2Full;

                /* RelationalOperator: '<S51>/Comparison4' */
                /* Entry 'Fuel_DOD2Full': '<S497>:2' */
                VeTRAC_e_DsrdEngState = CeTRAR_e_DOD2NonDOD_FF;
                TRAR_ac_B.DOD_enbl = false;
                TRAR_ac_B.DFCO_enbl = false;
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeAllCylFuel;
            }
            else
            {
                VeTRAC_M_OptTeArb = VeTRAR_M_OptTeHalfCylFuel;
            }
            break;
        }
    }

    /* End of Chart: '<S23>/TRAC_EngineState' */

    /* End of Outputs for SubSystem: '<S4>/TRAC_EngineState' */

    /* Gain: '<S20>/Gain' */
    VeTRAC_b_DFCOEnbl = TRAR_ac_B.DFCO_enbl;

    /* Sum: '<S8>/Summation' incorporates:
     *  Lookup_n-D: '<S45>/Vector'
     *  Lookup_n-D: '<S46>/Vector'
     *  Lookup_n-D: '<S47>/Vector'
     *  MinMax: '<S8>/MinMax1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     *  UnitDelay: '<S8>/UnitDelay'
     */
    rtb_Summation11 = fmaxf(fmaxf(look1_iflf_binlca_16a
        (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kc, ((const float32 *)
        &(KxTRAR_r_IAT_StressFctr[0])), ((const float32 *)
        &(KtTRAR_r_IAT_StressFctr[0])), 8U), look1_iflf_binlca_16a
        (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iw, ((const float32 *)
        &(KxTRAR_r_PIMTemp_StressFctr[0])), ((const float32 *)
        &(KtTRAR_r_PIMTemp_StressFctr[0])), 8U)), look1_iflf_binlca_16a
                            (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lt,
        ((const float32 *)&(KxTRAR_r_BattTemp_StressFctr[0])), ((const float32 *)
        &(KtTRAR_r_BattTemp_StressFctr[0])), 8U)) +
        VeTRAR_r_ThermStresFctrIntgrtrLmtd;

    /* Outputs for Atomic SubSystem: '<S8>/Limiter' */
    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S40>/Calib'
     *  RelationalOperator: '<S48>/RelationalOperator'
     */
    if (KeTRAR_r_StressFctrIntgrtrMaxLmt < rtb_Summation11)
    {
        /* Switch: '<S25>/Switch1' */
        rtb_Summation11 = KeTRAR_r_StressFctrIntgrtrMaxLmt;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Switch: '<S48>/Switch' incorporates:
     *  Constant: '<S8>/MinClip'
     *  RelationalOperator: '<S48>/RelationalOperator1'
     */
    if (rtb_Summation11 > 0.0F)
    {
        /* Switch: '<S48>/Switch' */
        VeTRAR_r_ThermStresFctrIntgrtr = rtb_Summation11;
    }
    else
    {
        /* Switch: '<S48>/Switch' */
        VeTRAR_r_ThermStresFctrIntgrtr = 0.0F;
    }

    /* End of Switch: '<S48>/Switch' */
    /* End of Outputs for SubSystem: '<S8>/Limiter' */

    /* Switch: '<S8>/Switch1' incorporates:
     *  UnitDelay: '<S8>/UnitDelay2'
     */
    if (TRAR_ac_DW.UnitDelay2_DSTATE_l)
    {
        /* Switch: '<S8>/Switch1' incorporates:
         *  MinMax: '<S8>/MinMax2'
         *  UnitDelay: '<S8>/UnitDelay'
         */
        VeTRAR_r_ThermStresFctrIntgrtrLmtd = fminf
            (VeTRAR_r_ThermStresFctrIntgrtrLmtd, VeTRAR_r_ThermStresFctrIntgrtr);
    }
    else
    {
        /* Switch: '<S8>/Switch1' */
        VeTRAR_r_ThermStresFctrIntgrtrLmtd = VeTRAR_r_ThermStresFctrIntgrtr;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis1' */
    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S42>/Calib'
     *  RelationalOperator: '<S30>/GreaterThan'
     */
    if (VeTRAR_r_ThermStresFctrIntgrtrLmtd > KeTRAR_r_StressFctrThrshRSP)
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Constant: '<S30>/ConstantValue'
         */
        VeTRAC_b_ThermSysStressed = true;
    }
    else
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Constant: '<S41>/Calib'
         *  RelationalOperator: '<S30>/GreaterThan1'
         *  UnitDelay: '<S30>/UnitDelay'
         */
        VeTRAC_b_ThermSysStressed = ((VeTRAR_r_ThermStresFctrIntgrtrLmtd >=
            KeTRAR_r_StressFctrThrshLSP) && (VeTRAC_b_ThermSysStressed));
    }

    /* End of Switch: '<S30>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis1' */

    /* Sum: '<S8>/Summation1' */
    rtb_Summation11 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j -
        rtb_Summation18;

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis3' */
    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S32>/ConstantValue'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/Calib'
     *  RelationalOperator: '<S32>/GreaterThan'
     *  RelationalOperator: '<S32>/GreaterThan1'
     *  UnitDelay: '<S32>/UnitDelay'
     */
    if (rtb_Summation11 > KeTRAR_M_TiMinTact_MinOffDelta_RSP)
    {
        TRAR_ac_DW.UnitDelay_DSTATE_fe = true;
    }
    else
    {
        TRAR_ac_DW.UnitDelay_DSTATE_fe = ((rtb_Summation11 >=
            KeTRAR_M_TiMinTact_MinOffDelta_LSP) &&
            (TRAR_ac_DW.UnitDelay_DSTATE_fe));
    }

    /* End of Switch: '<S32>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis3' */

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis2' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S31>/ConstantValue'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S44>/Calib'
     *  RelationalOperator: '<S31>/GreaterThan'
     *  RelationalOperator: '<S31>/GreaterThan1'
     *  UnitDelay: '<S31>/UnitDelay'
     */
    if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mp >
            KeTRAR_v_VehSpdThrsh4ThermRSP)
    {
        TRAR_ac_DW.UnitDelay_DSTATE_gc = true;
    }
    else
    {
        TRAR_ac_DW.UnitDelay_DSTATE_gc =
            ((TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mp >=
              KeTRAR_v_VehSpdThrsh4ThermLSP) && (TRAR_ac_DW.UnitDelay_DSTATE_gc));
    }

    /* End of Switch: '<S31>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis2' */

    /* Logic: '<S8>/OR2' incorporates:
     *  Constant: '<S38>/Calib'
     *  Logic: '<S8>/Logical1'
     *  Logic: '<S8>/Logical2'
     *  Logic: '<S8>/Logical3'
     *  UnitDelay: '<S31>/UnitDelay'
     *  UnitDelay: '<S32>/UnitDelay'
     */
    VeTRAC_b_ThermalDerateEnbld = ((((((KeTRAR_b_EnblThermalDerate) &&
        (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg)) &&
        (VeTRAC_b_ThermSysStressed)) && (TRAR_ac_DW.UnitDelay_DSTATE_fe)) &&
        (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lc)) &&
        (!TRAR_ac_DW.UnitDelay_DSTATE_gc));

    /* Logic: '<S9>/Logical3' incorporates:
     *  Constant: '<S49>/Constant'
     *  Logic: '<S51>/Logical1'
     *  RelationalOperator: '<S9>/Comparison2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     */
    rtb_Comparison3_a = (((uint32)
                          TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_e4) !=
                         CeENGR_e_Idle);

    /* Logic: '<S9>/Logical1' incorporates:
     *  Constant: '<S56>/Calib'
     *  Logic: '<S9>/Logical2'
     *  Logic: '<S9>/Logical3'
     */
    rtb_Logical1_p2 = (((!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k4) &&
                        rtb_Comparison3_a) && (KeTRAR_b_UseCLthreshFastPath));

    /* If: '<S9>/If' */
    rtPrevAction = TRAR_ac_DW.If_ActiveSubsystem;
    TRAR_ac_DW.If_ActiveSubsystem = (sint8)((!VeTRAR_b_OvrrdRespTypDurSpdCtl) ?
        1 : 0);
    if (TRAR_ac_DW.If_ActiveSubsystem == 0)
    {
        /* Outputs for IfAction SubSystem: '<S9>/FastPath_Resp_Type_Byp' incorporates:
         *  ActionPort: '<S54>/ActionPort'
         */
        /* Merge: '<S9>/Merge' incorporates:
         *  DataTypeConversion: '<S54>/DataTypeConversion'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        rtb_Switch4_ig = (sint16)
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ph;

        /* End of Outputs for SubSystem: '<S9>/FastPath_Resp_Type_Byp' */
    }
    else
    {
        if (1 != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S9>/Dtrmn_FastPath_Resp_Type' incorporates:
             *  ActionPort: '<S52>/ActionPort'
             */
            /* InitializeConditions for If: '<S9>/If' incorporates:
             *  RelationalOperator: '<S75>/Comparison2'
             *  UnitDelay: '<S194>/UnitDelay'
             *  UnitDelay: '<S75>/UnitDelay'
             */
            TRAR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
            TRAR_ac_DW.UnitDelay_DSTATE_nk = CeHTDR_e_AtToMinNVH;

            /* End of InitializeConditions for SubSystem: '<S9>/Dtrmn_FastPath_Resp_Type' */

            /* SystemReset for IfAction SubSystem: '<S9>/Dtrmn_FastPath_Resp_Type' incorporates:
             *  ActionPort: '<S52>/ActionPort'
             */
            /* SystemReset for Atomic SubSystem: '<S63>/Hysteresis1' */
            /* SystemReset for If: '<S9>/If' incorporates:
             *  UnitDelay: '<S135>/UnitDelay'
             *  UnitDelay: '<S149>/UnitDelay'
             *  UnitDelay: '<S186>/UnitDelay'
             *  UnitDelay: '<S213>/UnitDelay'
             *  UnitDelay: '<S256>/UnitDelay'
             *  UnitDelay: '<S257>/UnitDelay'
             *  UnitDelay: '<S92>/UnitDelay'
             */
            TRAR_ac_DW.UnitDelay_DSTATE_pnd = false;

            /* End of SystemReset for SubSystem: '<S63>/Hysteresis1' */

            /* SystemReset for Atomic SubSystem: '<S67>/Hysteresis1' */
            TRAR_ac_DW.UnitDelay_DSTATE_k5 = false;

            /* End of SystemReset for SubSystem: '<S67>/Hysteresis1' */

            /* SystemReset for Atomic SubSystem: '<S68>/Hysteresis1' */
            TRAR_ac_DW.UnitDelay_DSTATE_gg = false;

            /* End of SystemReset for SubSystem: '<S68>/Hysteresis1' */

            /* SystemReset for Atomic SubSystem: '<S72>/Hysteresis1' */
            TRAR_ac_DW.UnitDelay_DSTATE_h1 = false;

            /* End of SystemReset for SubSystem: '<S72>/Hysteresis1' */

            /* SystemReset for Atomic SubSystem: '<S194>/Hysteresis' */
            TRAR_ac_DW.UnitDelay_DSTATE_aj = false;

            /* End of SystemReset for SubSystem: '<S194>/Hysteresis' */

            /* SystemReset for Atomic SubSystem: '<S76>/TurnOffDelayTime' */
            TRAR_ac_DW.UnitDelay_DSTATE_j = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S256>/EdgeFalling1' */
            TRAR_ac_DW.UnitDelay_DSTATE_od = false;

            /* End of SystemReset for SubSystem: '<S256>/EdgeFalling1' */
            /* End of SystemReset for SubSystem: '<S76>/TurnOffDelayTime' */
            /* End of SystemReset for SubSystem: '<S9>/Dtrmn_FastPath_Resp_Type' */
        }

        /* Outputs for IfAction SubSystem: '<S9>/Dtrmn_FastPath_Resp_Type' incorporates:
         *  ActionPort: '<S52>/ActionPort'
         */
        /* Sum: '<S63>/Sum1' */
        rtb_Summation11 = rtb_Merge - rtb_Summation5;

        /* Outputs for Atomic SubSystem: '<S63>/Hysteresis1' */
        /* Switch: '<S92>/Switch1' incorporates:
         *  Constant: '<S84>/Calib'
         *  Constant: '<S86>/Calib'
         *  Constant: '<S92>/ConstantValue'
         *  RelationalOperator: '<S92>/GreaterThan'
         *  RelationalOperator: '<S92>/GreaterThan1'
         *  Sum: '<S63>/Sum1'
         *  UnitDelay: '<S92>/UnitDelay'
         */
        if (rtb_Summation11 > KeTRAR_M_ToClipTactCnstRSP)
        {
            TRAR_ac_DW.UnitDelay_DSTATE_pnd = true;
        }
        else
        {
            TRAR_ac_DW.UnitDelay_DSTATE_pnd = ((rtb_Summation11 >=
                KeTRAR_M_ToClipTactCnstLSP) && (TRAR_ac_DW.UnitDelay_DSTATE_pnd));
        }

        /* End of Switch: '<S92>/Switch1' */
        /* End of Outputs for SubSystem: '<S63>/Hysteresis1' */

        /* Switch: '<S63>/Switch4' incorporates:
         *  Constant: '<S83>/Calib'
         *  Logic: '<S63>/LogicalOperator'
         *  Switch: '<S63>/Switch'
         *  UnitDelay: '<S92>/UnitDelay'
         */
        if (((KeTRAR_b_EnbRespTypOvrrd4NbLmt) &&
                (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n2)) &&
                (TRAR_ac_DW.UnitDelay_DSTATE_pnd))
        {
            if (KeTRAR_b_UseMaxRng4ToClipTactCnst)
            {
                /* Switch: '<S63>/Switch1' incorporates:
                 *  Switch: '<S63>/Switch4'
                 */
                rtb_Switch4_lj = 2;

                /* Switch: '<S63>/Switch2' incorporates:
                 *  DataStoreRead: '<S63>/DataStoreRead4'
                 *  DataStoreWrite: '<S63>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)64))));
            }
            else
            {
                /* Switch: '<S63>/Switch4' incorporates:
                 *  Switch: '<S63>/Switch1'
                 */
                rtb_Switch4_lj = 1;

                /* Switch: '<S63>/Switch2' incorporates:
                 *  DataStoreRead: '<S63>/DataStoreRead1'
                 *  DataStoreWrite: '<S63>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S81>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)64));
            }
        }
        else
        {
            /* Switch: '<S63>/Switch4' */
            rtb_Switch4_lj = 0;

            /* Switch: '<S63>/Switch2' incorporates:
             *  DataStoreRead: '<S63>/DataStoreRead4'
             *  DataStoreWrite: '<S63>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)64))));
        }

        /* End of Switch: '<S63>/Switch4' */

        /* Switch: '<S63>/Switch3' incorporates:
         *  DataStoreRead: '<S63>/DataStoreRead5'
         *  DataStoreRead: '<S63>/DataStoreRead6'
         *  DataStoreWrite: '<S63>/DataStoreWrite1'
         *  RelationalOperator: '<S63>/Equal2'
         *  S-Function (sfix_bitop): '<S80>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S80>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S80>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_lj == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)64));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)64))));
        }

        /* End of Switch: '<S63>/Switch3' */

        /* Switch: '<S65>/Switch5' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S65>/FALSEConstant'
         *  Logic: '<S65>/Logical1'
         *  Logic: '<S65>/Logical2'
         */
        if (KeTRAR_b_EnblFstPath4DFCOTact)
        {
            rtb_AND_nu = ((VeTRAC_b_DFCOReq) &&
                          (!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bu));
        }
        else
        {
            rtb_AND_nu = false;
        }

        /* End of Switch: '<S65>/Switch5' */

        /* Switch: '<S65>/Switch3' */
        if (rtb_AND_nu)
        {
            if (KeTRAR_b_UseMaxRngRspTyp4DFCO)
            {
                /* Switch: '<S65>/Switch4' incorporates:
                 *  Switch: '<S65>/Switch3'
                 */
                rtb_Switch3_cv = 2;

                /* Switch: '<S65>/Switch1' incorporates:
                 *  DataStoreRead: '<S65>/DataStoreRead4'
                 *  DataStoreWrite: '<S65>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S105>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S105>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S105>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)256))));
            }
            else
            {
                /* Switch: '<S65>/Switch3' incorporates:
                 *  Switch: '<S65>/Switch4'
                 */
                rtb_Switch3_cv = 1;

                /* Switch: '<S65>/Switch1' incorporates:
                 *  DataStoreRead: '<S65>/DataStoreRead1'
                 *  DataStoreWrite: '<S65>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S107>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)256));
            }
        }
        else
        {
            /* Switch: '<S65>/Switch3' */
            rtb_Switch3_cv = 0;

            /* Switch: '<S65>/Switch1' incorporates:
             *  DataStoreRead: '<S65>/DataStoreRead4'
             *  DataStoreWrite: '<S65>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S105>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S105>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S105>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)256))));
        }

        /* End of Switch: '<S65>/Switch3' */

        /* Switch: '<S65>/Switch2' incorporates:
         *  DataStoreRead: '<S65>/DataStoreRead5'
         *  DataStoreRead: '<S65>/DataStoreRead6'
         *  DataStoreWrite: '<S65>/DataStoreWrite1'
         *  RelationalOperator: '<S65>/Equal2'
         *  S-Function (sfix_bitop): '<S106>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S106>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S106>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S108>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch3_cv == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)256));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)256))));
        }

        /* End of Switch: '<S65>/Switch2' */

        /* Switch: '<S66>/Switch4' incorporates:
         *  Constant: '<S120>/Calib'
         *  Logic: '<S66>/Logical'
         */
        rtb_Switch4_f = (sint16)(((KeTRAR_b_EnableFastType4DFCO) &&
            (VeTRAC_b_DFCOEnbl)) ? 1 : 0);

        /* Switch: '<S66>/Switch1' incorporates:
         *  DataStoreRead: '<S66>/DataStoreRead1'
         *  DataStoreRead: '<S66>/DataStoreRead4'
         *  DataStoreWrite: '<S66>/DataStoreWrite'
         *  RelationalOperator: '<S66>/Equal1'
         *  S-Function (sfix_bitop): '<S116>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S116>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S116>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S118>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_f == 1)
        {
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)128));
        }
        else
        {
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)128))));
        }

        /* End of Switch: '<S66>/Switch1' */

        /* Switch: '<S66>/Switch2' incorporates:
         *  DataStoreRead: '<S66>/DataStoreRead5'
         *  DataStoreWrite: '<S66>/DataStoreWrite1'
         *  S-Function (sfix_bitop): '<S117>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S117>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S117>/FixPt Bitwise Operator5'
         */
        VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
            (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)128))));

        /* Sum: '<S67>/Sum1' */
        rtb_Summation11 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pm -
            rtb_Summation5;

        /* Outputs for Atomic SubSystem: '<S67>/Hysteresis1' */
        /* Switch: '<S135>/Switch1' incorporates:
         *  Constant: '<S135>/ConstantValue'
         *  Constant: '<S136>/Calib'
         *  Constant: '<S137>/Calib'
         *  RelationalOperator: '<S135>/GreaterThan'
         *  RelationalOperator: '<S135>/GreaterThan1'
         *  UnitDelay: '<S135>/UnitDelay'
         */
        if (rtb_Summation11 > KeTRAR_M_DistrbtdSEMCntrlStratFstPthRSP)
        {
            TRAR_ac_DW.UnitDelay_DSTATE_k5 = true;
        }
        else
        {
            TRAR_ac_DW.UnitDelay_DSTATE_k5 = ((rtb_Summation11 >=
                KeTRAR_M_DistrbtdSEMCntrlStratFstPthLSP) &&
                (TRAR_ac_DW.UnitDelay_DSTATE_k5));
        }

        /* End of Switch: '<S135>/Switch1' */
        /* End of Outputs for SubSystem: '<S67>/Hysteresis1' */

        /* Switch: '<S67>/Switch3' incorporates:
         *  Constant: '<S129>/Constant'
         *  Constant: '<S134>/Calib'
         *  Constant: '<S67>/FALSEConstant'
         *  RelationalOperator: '<S67>/Equal3'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        if (HeTRAR_b_DistrbtdSEMCntrlStratFstPth)
        {
            rtb_AND_nu = (((uint32)
                           TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
                          CeTINR_e_TrqInc);
        }
        else
        {
            rtb_AND_nu = false;
        }

        /* End of Switch: '<S67>/Switch3' */

        /* Switch: '<S67>/Switch4' incorporates:
         *  Logic: '<S67>/Logical1'
         *  UnitDelay: '<S135>/UnitDelay'
         */
        if (rtb_AND_nu && (TRAR_ac_DW.UnitDelay_DSTATE_k5))
        {
            /* Switch: '<S67>/Switch4' */
            rtb_Switch4_d = 2;
        }
        else
        {
            /* Switch: '<S67>/Switch4' */
            rtb_Switch4_d = 0;
        }

        /* End of Switch: '<S67>/Switch4' */

        /* Switch: '<S67>/Switch1' incorporates:
         *  DataStoreRead: '<S67>/DataStoreRead4'
         *  DataStoreWrite: '<S67>/DataStoreWrite'
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator5'
         */
        VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
            (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)8192))));

        /* Switch: '<S67>/Switch2' incorporates:
         *  DataStoreRead: '<S67>/DataStoreRead2'
         *  DataStoreRead: '<S67>/DataStoreRead3'
         *  DataStoreWrite: '<S67>/DataStoreWrite1'
         *  RelationalOperator: '<S67>/Equal2'
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_d == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)8192));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)8192))));
        }

        /* End of Switch: '<S67>/Switch2' */

        /* Sum: '<S68>/Sum1' */
        rtb_Summation11 = rtb_Summation18 - rtb_Summation5;

        /* Outputs for Atomic SubSystem: '<S68>/Hysteresis1' */
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S149>/ConstantValue'
         *  Constant: '<S150>/Calib'
         *  Constant: '<S151>/Calib'
         *  RelationalOperator: '<S149>/GreaterThan'
         *  RelationalOperator: '<S149>/GreaterThan1'
         *  UnitDelay: '<S149>/UnitDelay'
         */
        if (rtb_Summation11 > KeTRAR_M_DistrbtdSEMCntrlStratNrmlCaseRSP)
        {
            TRAR_ac_DW.UnitDelay_DSTATE_gg = true;
        }
        else
        {
            TRAR_ac_DW.UnitDelay_DSTATE_gg = ((rtb_Summation11 >=
                KeTRAR_M_DistrbtdSEMCntrlStratNrmlCaseLSP) &&
                (TRAR_ac_DW.UnitDelay_DSTATE_gg));
        }

        /* End of Switch: '<S149>/Switch1' */
        /* End of Outputs for SubSystem: '<S68>/Hysteresis1' */

        /* Switch: '<S68>/Switch3' incorporates:
         *  Constant: '<S142>/Constant'
         *  Constant: '<S148>/Calib'
         *  Constant: '<S68>/FALSEConstant'
         *  RelationalOperator: '<S68>/Equal3'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        if (HeTRAR_b_DistrbtdSEMCntrlStratNrmlCase)
        {
            rtb_AND_nu = (((uint32)
                           TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
                          CeTINR_e_TrqInc);
        }
        else
        {
            rtb_AND_nu = false;
        }

        /* End of Switch: '<S68>/Switch3' */

        /* Switch: '<S68>/Switch4' incorporates:
         *  Logic: '<S68>/Logical1'
         *  UnitDelay: '<S149>/UnitDelay'
         */
        if (rtb_AND_nu && (TRAR_ac_DW.UnitDelay_DSTATE_gg))
        {
            if (KeTRAR_b_MaxRng4DistrbtdSEMCtlStratNrmlCase)
            {
                /* Switch: '<S68>/Switch5' incorporates:
                 *  Switch: '<S68>/Switch4'
                 */
                rtb_Switch4_ig = 2;

                /* Switch: '<S68>/Switch1' incorporates:
                 *  DataStoreRead: '<S68>/DataStoreRead4'
                 *  DataStoreWrite: '<S68>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)4096))));
            }
            else
            {
                /* Switch: '<S68>/Switch4' incorporates:
                 *  Switch: '<S68>/Switch5'
                 */
                rtb_Switch4_ig = 1;

                /* Switch: '<S68>/Switch1' incorporates:
                 *  DataStoreRead: '<S68>/DataStoreRead1'
                 *  DataStoreWrite: '<S68>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S140>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)4096));
            }
        }
        else
        {
            /* Switch: '<S68>/Switch4' */
            rtb_Switch4_ig = 0;

            /* Switch: '<S68>/Switch1' incorporates:
             *  DataStoreRead: '<S68>/DataStoreRead4'
             *  DataStoreWrite: '<S68>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)4096))));
        }

        /* End of Switch: '<S68>/Switch4' */

        /* Switch: '<S68>/Switch2' incorporates:
         *  DataStoreRead: '<S68>/DataStoreRead2'
         *  DataStoreRead: '<S68>/DataStoreRead3'
         *  DataStoreWrite: '<S68>/DataStoreWrite1'
         *  RelationalOperator: '<S68>/Equal2'
         *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S141>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_ig == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)4096));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)4096))));
        }

        /* End of Switch: '<S68>/Switch2' */

        /* Switch: '<S69>/Switch4' incorporates:
         *  Constant: '<S157>/Constant'
         *  Constant: '<S158>/Calib'
         *  Constant: '<S69>/FALSEConstant'
         *  Logic: '<S69>/Logical1'
         *  RelationalOperator: '<S69>/Equal1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        if (KeTRAR_b_EnbRespTyp4ESPEvent)
        {
            rtb_AND_nu = ((((uint32)
                            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ixl)
                           != CePTAR_e_Inactive) ||
                          (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1));
        }
        else
        {
            rtb_AND_nu = false;
        }

        /* End of Switch: '<S69>/Switch4' */

        /* Switch: '<S69>/Switch2' */
        if (rtb_AND_nu)
        {
            if (KeTRAR_b_UseMaxRng4ESCevent)
            {
                /* Switch: '<S69>/Switch' incorporates:
                 *  Switch: '<S69>/Switch2'
                 */
                rtb_Switch2_md = 2;

                /* Switch: '<S69>/Switch1' incorporates:
                 *  DataStoreRead: '<S69>/DataStoreRead5'
                 *  DataStoreWrite: '<S69>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)16))));
            }
            else
            {
                /* Switch: '<S69>/Switch2' incorporates:
                 *  Switch: '<S69>/Switch'
                 */
                rtb_Switch2_md = 1;

                /* Switch: '<S69>/Switch1' incorporates:
                 *  DataStoreRead: '<S69>/DataStoreRead4'
                 *  DataStoreWrite: '<S69>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S155>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)16));
            }
        }
        else
        {
            /* Switch: '<S69>/Switch2' */
            rtb_Switch2_md = 0;

            /* Switch: '<S69>/Switch1' incorporates:
             *  DataStoreRead: '<S69>/DataStoreRead5'
             *  DataStoreWrite: '<S69>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S153>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)16))));
        }

        /* End of Switch: '<S69>/Switch2' */

        /* Switch: '<S69>/Switch3' incorporates:
         *  DataStoreRead: '<S69>/DataStoreRead2'
         *  DataStoreRead: '<S69>/DataStoreRead3'
         *  DataStoreWrite: '<S69>/DataStoreWrite1'
         *  RelationalOperator: '<S69>/Equal3'
         *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S154>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S156>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch2_md == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)16));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)16))));
        }

        /* End of Switch: '<S69>/Switch3' */

        /* Switch: '<S70>/Switch' incorporates:
         *  Constant: '<S169>/Calib'
         */
        VeTRAC_b_ESPTactCnstRespTyp = ((KeTRAR_b_EnbRespTyp4ESPEvent1) &&
            (VeTRAC_b_ESCActv));

        /* Switch: '<S70>/Switch2' */
        if (VeTRAC_b_ESPTactCnstRespTyp)
        {
            if (KeTRAR_b_UseMaxRng4ESPTactCnst)
            {
                /* Switch: '<S70>/Switch4' incorporates:
                 *  Switch: '<S70>/Switch2'
                 */
                rtb_Switch2_lt = 2;

                /* Switch: '<S70>/Switch1' incorporates:
                 *  DataStoreRead: '<S70>/DataStoreRead5'
                 *  DataStoreWrite: '<S70>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)32))));
            }
            else
            {
                /* Switch: '<S70>/Switch2' incorporates:
                 *  Switch: '<S70>/Switch4'
                 */
                rtb_Switch2_lt = 1;

                /* Switch: '<S70>/Switch1' incorporates:
                 *  DataStoreRead: '<S70>/DataStoreRead4'
                 *  DataStoreWrite: '<S70>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S167>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)32));
            }
        }
        else
        {
            /* Switch: '<S70>/Switch2' */
            rtb_Switch2_lt = 0;

            /* Switch: '<S70>/Switch1' incorporates:
             *  DataStoreRead: '<S70>/DataStoreRead5'
             *  DataStoreWrite: '<S70>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S165>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)32))));
        }

        /* End of Switch: '<S70>/Switch2' */

        /* Switch: '<S70>/Switch3' incorporates:
         *  DataStoreRead: '<S70>/DataStoreRead2'
         *  DataStoreRead: '<S70>/DataStoreRead3'
         *  DataStoreWrite: '<S70>/DataStoreWrite1'
         *  RelationalOperator: '<S70>/Equal3'
         *  S-Function (sfix_bitop): '<S166>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S166>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S166>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S168>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch2_lt == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)32));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)32))));
        }

        /* End of Switch: '<S70>/Switch3' */

        /* Sum: '<S72>/Sum2' */
        rtb_Summation11 = VeTRAR_M_TiPredicted - VeTRAC_M_OptTeArb;

        /* Outputs for Atomic SubSystem: '<S72>/Hysteresis1' */
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S186>/ConstantValue'
         *  Constant: '<S187>/Calib'
         *  Constant: '<S188>/Calib'
         *  RelationalOperator: '<S186>/GreaterThan'
         *  RelationalOperator: '<S186>/GreaterThan1'
         *  UnitDelay: '<S186>/UnitDelay'
         */
        if (rtb_Summation11 > KeTRAR_M_TorqOffsetFastPathRSP)
        {
            TRAR_ac_DW.UnitDelay_DSTATE_h1 = true;
        }
        else
        {
            TRAR_ac_DW.UnitDelay_DSTATE_h1 = ((rtb_Summation11 >=
                KeTRAR_M_TorqOffsetFastPathLSP) &&
                (TRAR_ac_DW.UnitDelay_DSTATE_h1));
        }

        /* End of Switch: '<S186>/Switch1' */
        /* End of Outputs for SubSystem: '<S72>/Hysteresis1' */

        /* Switch: '<S72>/Switch7' incorporates:
         *  Logic: '<S72>/Logical2'
         *  Logic: '<S72>/Logical3'
         *  UnitDelay: '<S186>/UnitDelay'
         */
        if ((TRAR_ac_DW.UnitDelay_DSTATE_h1) && (!VeTRAC_b_DFCOReq))
        {
            if (KeTRAR_b_UseMaxRng4EngTrqRsrv)
            {
                /* Switch: '<S72>/Switch' incorporates:
                 *  Switch: '<S72>/Switch7'
                 */
                rtb_Switch7 = 2;

                /* Switch: '<S72>/Switch1' incorporates:
                 *  DataStoreRead: '<S72>/DataStoreRead4'
                 *  DataStoreWrite: '<S72>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)1))));
            }
            else
            {
                /* Switch: '<S72>/Switch7' incorporates:
                 *  Switch: '<S72>/Switch'
                 */
                rtb_Switch7 = 1;

                /* Switch: '<S72>/Switch1' incorporates:
                 *  DataStoreRead: '<S72>/DataStoreRead1'
                 *  DataStoreWrite: '<S72>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S178>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)1));
            }
        }
        else
        {
            /* Switch: '<S72>/Switch7' */
            rtb_Switch7 = 0;

            /* Switch: '<S72>/Switch1' incorporates:
             *  DataStoreRead: '<S72>/DataStoreRead4'
             *  DataStoreWrite: '<S72>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S176>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)1))));
        }

        /* End of Switch: '<S72>/Switch7' */

        /* Switch: '<S72>/Switch2' incorporates:
         *  DataStoreRead: '<S72>/DataStoreRead2'
         *  DataStoreRead: '<S72>/DataStoreRead3'
         *  DataStoreWrite: '<S72>/DataStoreWrite1'
         *  RelationalOperator: '<S72>/Equal2'
         *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S177>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S179>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch7 == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)1));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)1))));
        }

        /* End of Switch: '<S72>/Switch2' */

        /* Sum: '<S73>/Sum2' */
        rtb_Summation11 = VeTRAC_M_OptTeArb - rtb_Summation5;

        /* Sum: '<S73>/Sum1' */
        rtb_Merge -= rtb_Summation5;

        /* If: '<S73>/If' incorporates:
         *  Constant: '<S222>/Calib'
         *  RelationalOperator: '<S226>/GreaterThan'
         *  Switch: '<S226>/Switch1'
         */
        if (rtb_Logical1_p2)
        {
            /* Outputs for IfAction SubSystem: '<S73>/UseCLthreholds' incorporates:
             *  ActionPort: '<S200>/ActionPort'
             */
            /* Outputs for Atomic SubSystem: '<S200>/Hysteresis' */
            /* Switch: '<S220>/Switch1' incorporates:
             *  Constant: '<S216>/Calib'
             *  Constant: '<S217>/Calib'
             *  Constant: '<S220>/ConstantValue'
             *  RelationalOperator: '<S220>/GreaterThan'
             *  RelationalOperator: '<S220>/GreaterThan1'
             *  UnitDelay: '<S220>/UnitDelay'
             */
            if (rtb_Summation11 > KeTRAR_M_CL_TactMaxFastPathRSP)
            {
                TRAR_ac_DW.UnitDelay_DSTATE_d = true;
            }
            else
            {
                TRAR_ac_DW.UnitDelay_DSTATE_d = ((rtb_Summation11 >=
                    KeTRAR_M_CL_TactMaxFastPathLSP) &&
                    (TRAR_ac_DW.UnitDelay_DSTATE_d));
            }

            /* End of Switch: '<S220>/Switch1' */
            /* End of Outputs for SubSystem: '<S200>/Hysteresis' */

            /* Outputs for Atomic SubSystem: '<S200>/Hysteresis1' */
            /* Switch: '<S221>/Switch1' incorporates:
             *  Constant: '<S218>/Calib'
             *  Constant: '<S219>/Calib'
             *  Constant: '<S221>/ConstantValue'
             *  RelationalOperator: '<S221>/GreaterThan'
             *  RelationalOperator: '<S221>/GreaterThan1'
             *  Sum: '<S73>/Sum1'
             *  UnitDelay: '<S221>/UnitDelay'
             */
            if (rtb_Merge > KeTRAR_M_CL_AirFlwFastPathRSP)
            {
                TRAR_ac_DW.UnitDelay_DSTATE_g = true;
            }
            else
            {
                TRAR_ac_DW.UnitDelay_DSTATE_g = ((rtb_Merge >=
                    KeTRAR_M_CL_AirFlwFastPathLSP) &&
                    (TRAR_ac_DW.UnitDelay_DSTATE_g));
            }

            /* End of Switch: '<S221>/Switch1' */
            /* End of Outputs for SubSystem: '<S200>/Hysteresis1' */

            /* Merge: '<S73>/Merge' incorporates:
             *  Logic: '<S200>/Logical2'
             *  UnitDelay: '<S220>/UnitDelay'
             *  UnitDelay: '<S221>/UnitDelay'
             */
            VeTRAC_b_TactMaxFstCndtn = ((TRAR_ac_DW.UnitDelay_DSTATE_d) &&
                (TRAR_ac_DW.UnitDelay_DSTATE_g));

            /* End of Outputs for SubSystem: '<S73>/UseCLthreholds' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S73>/UseRegularThresholds' incorporates:
             *  ActionPort: '<S201>/ActionPort'
             */
            /* Outputs for Atomic SubSystem: '<S201>/Hysteresis' */
            if (rtb_Summation11 > KeTRAR_M_TactMaxFastPathRSP)
            {
                /* Switch: '<S226>/Switch1' incorporates:
                 *  Constant: '<S226>/ConstantValue'
                 *  UnitDelay: '<S226>/UnitDelay'
                 */
                TRAR_ac_DW.UnitDelay_DSTATE_kw = true;
            }
            else
            {
                /* Switch: '<S226>/Switch1' incorporates:
                 *  Constant: '<S223>/Calib'
                 *  RelationalOperator: '<S226>/GreaterThan1'
                 *  UnitDelay: '<S226>/UnitDelay'
                 */
                TRAR_ac_DW.UnitDelay_DSTATE_kw = ((rtb_Summation11 >=
                    KeTRAR_M_TactMaxFastPathLSP) &&
                    (TRAR_ac_DW.UnitDelay_DSTATE_kw));
            }

            /* End of Outputs for SubSystem: '<S201>/Hysteresis' */

            /* Outputs for Atomic SubSystem: '<S201>/Hysteresis1' */
            /* Switch: '<S227>/Switch1' incorporates:
             *  Constant: '<S224>/Calib'
             *  Constant: '<S225>/Calib'
             *  Constant: '<S227>/ConstantValue'
             *  RelationalOperator: '<S227>/GreaterThan'
             *  RelationalOperator: '<S227>/GreaterThan1'
             *  Sum: '<S73>/Sum1'
             *  UnitDelay: '<S227>/UnitDelay'
             */
            if (rtb_Merge > KeTRAR_M_AirFlwFastPathRSP)
            {
                TRAR_ac_DW.UnitDelay_DSTATE_mp = true;
            }
            else
            {
                TRAR_ac_DW.UnitDelay_DSTATE_mp = ((rtb_Merge >=
                    KeTRAR_M_AirFlwFastPathLSP) &&
                    (TRAR_ac_DW.UnitDelay_DSTATE_mp));
            }

            /* End of Switch: '<S227>/Switch1' */
            /* End of Outputs for SubSystem: '<S201>/Hysteresis1' */

            /* Merge: '<S73>/Merge' incorporates:
             *  Logic: '<S201>/Logical2'
             *  UnitDelay: '<S226>/UnitDelay'
             *  UnitDelay: '<S227>/UnitDelay'
             */
            VeTRAC_b_TactMaxFstCndtn = ((TRAR_ac_DW.UnitDelay_DSTATE_kw) &&
                (TRAR_ac_DW.UnitDelay_DSTATE_mp));

            /* End of Outputs for SubSystem: '<S73>/UseRegularThresholds' */
        }

        /* End of If: '<S73>/If' */

        /* Switch: '<S73>/Switch7' */
        if (VeTRAC_b_TactMaxFstCndtn)
        {
            if (KeTRAR_b_UseMaxRng4Cnstrnts)
            {
                /* Switch: '<S73>/Switch' incorporates:
                 *  Switch: '<S75>/Switch4'
                 */
                rtb_Switch4_o = 2;

                /* Switch: '<S73>/Switch1' incorporates:
                 *  DataStoreRead: '<S73>/DataStoreRead4'
                 *  DataStoreWrite: '<S73>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)2))));
            }
            else
            {
                /* Switch: '<S75>/Switch4' incorporates:
                 *  Switch: '<S73>/Switch'
                 */
                rtb_Switch4_o = 1;

                /* Switch: '<S73>/Switch1' incorporates:
                 *  DataStoreRead: '<S73>/DataStoreRead1'
                 *  DataStoreWrite: '<S73>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S191>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)2));
            }
        }
        else
        {
            /* Switch: '<S75>/Switch4' */
            rtb_Switch4_o = 0;

            /* Switch: '<S73>/Switch1' incorporates:
             *  DataStoreRead: '<S73>/DataStoreRead4'
             *  DataStoreWrite: '<S73>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)2))));
        }

        /* End of Switch: '<S73>/Switch7' */

        /* Switch: '<S73>/Switch2' incorporates:
         *  DataStoreRead: '<S73>/DataStoreRead2'
         *  DataStoreRead: '<S73>/DataStoreRead3'
         *  DataStoreWrite: '<S73>/DataStoreWrite1'
         *  RelationalOperator: '<S73>/Equal2'
         *  S-Function (sfix_bitop): '<S190>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S190>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S190>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S192>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_o == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)2));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)2))));
        }

        /* End of Switch: '<S73>/Switch2' */

        /* Sum: '<S194>/Sum1' incorporates:
         *  UnitDelay: '<S194>/UnitDelay'
         */
        rtb_Merge = TRAR_ac_DW.UnitDelay_DSTATE_c -
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aa;

        /* Outputs for Atomic SubSystem: '<S194>/Hysteresis' */
        /* Switch: '<S213>/Switch1' incorporates:
         *  Constant: '<S215>/Calib'
         *  RelationalOperator: '<S213>/GreaterThan'
         */
        if (rtb_Merge > KeTRAR_M_TipOutRSP)
        {
            /* Switch: '<S213>/Switch1' incorporates:
             *  Constant: '<S213>/ConstantValue'
             */
            VeTRAR_b_IsTipOut = true;
        }
        else
        {
            /* Switch: '<S213>/Switch1' incorporates:
             *  Constant: '<S214>/Calib'
             *  RelationalOperator: '<S213>/GreaterThan1'
             *  UnitDelay: '<S213>/UnitDelay'
             */
            VeTRAR_b_IsTipOut = ((rtb_Merge >= KeTRAR_M_TipOutLSP) &&
                                 (TRAR_ac_DW.UnitDelay_DSTATE_aj));
        }

        /* End of Switch: '<S213>/Switch1' */

        /* Update for UnitDelay: '<S213>/UnitDelay' */
        TRAR_ac_DW.UnitDelay_DSTATE_aj = VeTRAR_b_IsTipOut;

        /* End of Outputs for SubSystem: '<S194>/Hysteresis' */

        /* Switch: '<S194>/Switch4' incorporates:
         *  Logic: '<S194>/Logical1'
         *  RelationalOperator: '<S194>/Equal3'
         */
        if ((VeTRAR_b_IsTipOut) && (0 != rtb_Switch4_o))
        {
            if (KeTRAR_b_UseMaxRng_TipOutInFstPath)
            {
                /* Switch: '<S194>/Switch' incorporates:
                 *  MinMax: '<S194>/MinMax1'
                 */
                rtb_MinMax1_k = 2;

                /* Switch: '<S194>/Switch1' incorporates:
                 *  DataStoreRead: '<S194>/DataStoreRead7'
                 *  DataStoreWrite: '<S194>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S202>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S202>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S202>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)4))));
            }
            else
            {
                /* MinMax: '<S194>/MinMax1' incorporates:
                 *  Switch: '<S194>/Switch'
                 */
                rtb_MinMax1_k = 1;

                /* Switch: '<S194>/Switch1' incorporates:
                 *  DataStoreRead: '<S194>/DataStoreRead4'
                 *  DataStoreWrite: '<S194>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S204>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)4));
            }
        }
        else
        {
            /* MinMax: '<S194>/MinMax1' */
            rtb_MinMax1_k = 0;

            /* Switch: '<S194>/Switch1' incorporates:
             *  DataStoreRead: '<S194>/DataStoreRead7'
             *  DataStoreWrite: '<S194>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S202>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S202>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S202>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)4))));
        }

        /* End of Switch: '<S194>/Switch4' */

        /* Switch: '<S194>/Switch2' incorporates:
         *  DataStoreRead: '<S194>/DataStoreRead5'
         *  DataStoreRead: '<S194>/DataStoreRead6'
         *  DataStoreWrite: '<S194>/DataStoreWrite1'
         *  RelationalOperator: '<S194>/Equal2'
         *  S-Function (sfix_bitop): '<S203>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S203>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S203>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S205>/FixPt Bitwise Operator1'
         */
        if (rtb_MinMax1_k == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)4));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)4))));
        }

        /* End of Switch: '<S194>/Switch2' */

        /* MinMax: '<S194>/MinMax1' */
        if (rtb_MinMax1_k <= rtb_Switch4_o)
        {
            /* MinMax: '<S194>/MinMax1' */
            rtb_MinMax1_k = rtb_Switch4_o;
        }

        /* End of MinMax: '<S194>/MinMax1' */

        /* Logic: '<S75>/Logical1' incorporates:
         *  Constant: '<S232>/Constant'
         *  Constant: '<S233>/Constant'
         *  Constant: '<S234>/Constant'
         *  Constant: '<S235>/Constant'
         *  Logic: '<S75>/Logical2'
         *  Logic: '<S75>/Logical3'
         *  RelationalOperator: '<S75>/Comparison1'
         *  RelationalOperator: '<S75>/Comparison2'
         *  RelationalOperator: '<S75>/Comparison3'
         *  RelationalOperator: '<S75>/Comparison4'
         */
        VeTRAC_b_EnblFstPath_NVH = (((((uint32)
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fh) ==
            CeHTDR_e_AtToMaxNVH) || (((uint32)
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fh) ==
            CeHTDR_e_AboveToMaxNVH)) && ((((uint32)
            TRAR_ac_DW.UnitDelay_DSTATE_nk) == CeHTDR_e_AtToMinNVH) || (((uint32)
            TRAR_ac_DW.UnitDelay_DSTATE_nk) == CeHTDR_e_BelowToMinNVH)));

        /* Switch: '<S75>/Switch4' incorporates:
         *  Constant: '<S236>/Calib'
         *  Switch: '<S75>/Switch'
         */
        if ((KeTRAR_b_EnblFstPath4NVHZone) && (VeTRAC_b_EnblFstPath_NVH))
        {
            if (KeTRAR_b_UseMaxRng4NVHZone)
            {
                /* Switch: '<S75>/Switch1' incorporates:
                 *  Switch: '<S75>/Switch4'
                 */
                rtb_Switch4_o = 2;

                /* Switch: '<S75>/Switch2' incorporates:
                 *  DataStoreRead: '<S75>/DataStoreRead4'
                 *  DataStoreWrite: '<S75>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)2048))));
            }
            else
            {
                /* Switch: '<S75>/Switch4' incorporates:
                 *  Switch: '<S75>/Switch1'
                 */
                rtb_Switch4_o = 1;

                /* Switch: '<S75>/Switch2' incorporates:
                 *  DataStoreRead: '<S75>/DataStoreRead1'
                 *  DataStoreWrite: '<S75>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)2048));
            }
        }
        else
        {
            /* Switch: '<S75>/Switch4' */
            rtb_Switch4_o = 0;

            /* Switch: '<S75>/Switch2' incorporates:
             *  DataStoreRead: '<S75>/DataStoreRead4'
             *  DataStoreWrite: '<S75>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)2048))));
        }

        /* End of Switch: '<S75>/Switch4' */

        /* Switch: '<S75>/Switch3' incorporates:
         *  DataStoreRead: '<S75>/DataStoreRead2'
         *  DataStoreRead: '<S75>/DataStoreRead3'
         *  DataStoreWrite: '<S75>/DataStoreWrite1'
         *  RelationalOperator: '<S75>/Equal2'
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_o == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)2048));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)2048))));
        }

        /* End of Switch: '<S75>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S76>/TurnOffDelayTime' */
        /* Outputs for Atomic SubSystem: '<S256>/EdgeFalling1' */
        /* Logic: '<S257>/AND' incorporates:
         *  Logic: '<S257>/OR1'
         *  UnitDelay: '<S257>/UnitDelay'
         */
        rtb_AND_nu = ((!TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mr) &&
                      (TRAR_ac_DW.UnitDelay_DSTATE_od));

        /* Update for UnitDelay: '<S257>/UnitDelay' */
        TRAR_ac_DW.UnitDelay_DSTATE_od =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mr;

        /* End of Outputs for SubSystem: '<S256>/EdgeFalling1' */

        /* Switch: '<S256>/Switch' incorporates:
         *  Constant: '<S247>/Calib'
         *  Constant: '<S255>/Calib'
         *  Constant: '<S256>/ConstantValue1'
         *  MinMax: '<S256>/Minimum'
         *  Sum: '<S256>/Summation'
         *  UnitDelay: '<S256>/UnitDelay'
         */
        if (rtb_AND_nu)
        {
            TRAR_ac_DW.UnitDelay_DSTATE_j = KeTRAR_t_NiDotMinCnstrntActiveDelay;
        }
        else
        {
            TRAR_ac_DW.UnitDelay_DSTATE_j = fmaxf(TRAR_ac_DW.UnitDelay_DSTATE_j
                - HeTRAR_t_MedTEB_dT, 0.0F);
        }

        /* End of Switch: '<S256>/Switch' */

        /* Logic: '<S256>/AND' incorporates:
         *  Constant: '<S256>/ConstantValue2'
         *  RelationalOperator: '<S256>/GreaterThan'
         *  UnitDelay: '<S256>/UnitDelay'
         */
        VeTRAR_b_NiDotMinCnstrntActiveDelayed =
            ((TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mr) ||
             (TRAR_ac_DW.UnitDelay_DSTATE_j > 0.0F));

        /* End of Outputs for SubSystem: '<S76>/TurnOffDelayTime' */

        /* Switch: '<S76>/Switch7' incorporates:
         *  Constant: '<S248>/Calib'
         *  Logic: '<S76>/Logical3'
         */
        if ((KeTRAR_b_EngRspnsTyp_NiDotMin_Enbl) &&
                (VeTRAR_b_NiDotMinCnstrntActiveDelayed))
        {
            if (KeTRAR_b_UseMaxRng4RespTypeTipOutOvrrd)
            {
                /* Switch: '<S76>/Switch' incorporates:
                 *  Switch: '<S76>/Switch7'
                 */
                rtb_Switch7_j = 2;

                /* Switch: '<S76>/Switch1' incorporates:
                 *  DataStoreRead: '<S76>/DataStoreRead'
                 *  DataStoreWrite: '<S76>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)8))));
            }
            else
            {
                /* Switch: '<S76>/Switch7' incorporates:
                 *  Switch: '<S76>/Switch'
                 */
                rtb_Switch7_j = 1;

                /* Switch: '<S76>/Switch1' incorporates:
                 *  DataStoreRead: '<S76>/DataStoreRead1'
                 *  DataStoreWrite: '<S76>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S245>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)8));
            }
        }
        else
        {
            /* Switch: '<S76>/Switch7' */
            rtb_Switch7_j = 0;

            /* Switch: '<S76>/Switch1' incorporates:
             *  DataStoreRead: '<S76>/DataStoreRead'
             *  DataStoreWrite: '<S76>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)8))));
        }

        /* End of Switch: '<S76>/Switch7' */

        /* Switch: '<S76>/Switch2' incorporates:
         *  DataStoreRead: '<S76>/DataStoreRead2'
         *  DataStoreRead: '<S76>/DataStoreRead3'
         *  DataStoreWrite: '<S76>/DataStoreWrite1'
         *  RelationalOperator: '<S76>/Equal2'
         *  S-Function (sfix_bitop): '<S244>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S244>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S244>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S246>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch7_j == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)8));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)8))));
        }

        /* End of Switch: '<S76>/Switch2' */

        /* Switch: '<S78>/Switch4' incorporates:
         *  Constant: '<S262>/Calib'
         *  Switch: '<S78>/Switch'
         */
        if ((KeTRAR_b_EnblFstPath4ThermalDerate) && (VeTRAC_b_ThermalDerateEnbld))
        {
            if (KeTRAR_b_UseMaxRng4ThermalDerate)
            {
                /* Switch: '<S78>/Switch1' incorporates:
                 *  Switch: '<S78>/Switch4'
                 */
                rtb_Switch4_k = 2;

                /* Switch: '<S78>/Switch2' incorporates:
                 *  DataStoreRead: '<S78>/DataStoreRead4'
                 *  DataStoreWrite: '<S78>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator3'
                 *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator4'
                 *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator5'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                    (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)1024))));
            }
            else
            {
                /* Switch: '<S78>/Switch4' incorporates:
                 *  Switch: '<S78>/Switch1'
                 */
                rtb_Switch4_k = 1;

                /* Switch: '<S78>/Switch2' incorporates:
                 *  DataStoreRead: '<S78>/DataStoreRead1'
                 *  DataStoreWrite: '<S78>/DataStoreWrite'
                 *  S-Function (sfix_bitop): '<S260>/FixPt Bitwise Operator1'
                 */
                VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                    (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)1024));
            }
        }
        else
        {
            /* Switch: '<S78>/Switch4' */
            rtb_Switch4_k = 0;

            /* Switch: '<S78>/Switch2' incorporates:
             *  DataStoreRead: '<S78>/DataStoreRead4'
             *  DataStoreWrite: '<S78>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)1024))));
        }

        /* End of Switch: '<S78>/Switch4' */

        /* Switch: '<S78>/Switch3' incorporates:
         *  DataStoreRead: '<S78>/DataStoreRead2'
         *  DataStoreRead: '<S78>/DataStoreRead3'
         *  DataStoreWrite: '<S78>/DataStoreWrite1'
         *  RelationalOperator: '<S78>/Equal2'
         *  S-Function (sfix_bitop): '<S259>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S259>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S259>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S261>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_k == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)1024));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)1024))));
        }

        /* End of Switch: '<S78>/Switch3' */

        /* MinMax: '<S52>/MinMax1' */
        if (rtb_Switch7 > rtb_MinMax1_k)
        {
            rtb_MinMax1_k = rtb_Switch7;
        }

        if (rtb_MinMax1_k > rtb_Switch7_j)
        {
            rtb_Switch7_j = rtb_MinMax1_k;
        }

        if (rtb_Switch7_j > rtb_Switch2_md)
        {
            rtb_Switch2_md = rtb_Switch7_j;
        }

        if (rtb_Switch2_md > rtb_Switch4_lj)
        {
            rtb_Switch4_lj = rtb_Switch2_md;
        }

        if (rtb_Switch4_lj > rtb_Switch4_f)
        {
            rtb_Switch4_f = rtb_Switch4_lj;
        }

        if (rtb_Switch4_f > rtb_Switch3_cv)
        {
            rtb_Switch3_cv = rtb_Switch4_f;
        }

        if (rtb_Switch3_cv > rtb_Switch4_k)
        {
            rtb_Switch4_k = rtb_Switch3_cv;
        }

        if (rtb_Switch4_k > rtb_Switch4_o)
        {
            rtb_Switch4_o = rtb_Switch4_k;
        }

        /* DataTypeConversion: '<S52>/DataTypeConversion' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        rtb_Switch4_lj = (sint16)
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ph;

        /* MinMax: '<S52>/MinMax1' */
        if (rtb_Switch4_o > rtb_Switch4_lj)
        {
            rtb_Switch4_lj = rtb_Switch4_o;
        }

        if (rtb_Switch4_lj > rtb_Switch2_lt)
        {
            rtb_Switch2_lt = rtb_Switch4_lj;
        }

        if (rtb_Switch2_lt > rtb_Switch4_d)
        {
            rtb_Switch4_d = rtb_Switch2_lt;
        }

        if (rtb_Switch4_d > rtb_Switch4_ig)
        {
            /* MinMax: '<S52>/MinMax1' */
            rtb_Switch4_ig = rtb_Switch4_d;
        }

        /* Logic: '<S52>/Logical6' incorporates:
         *  RelationalOperator: '<S52>/Equal1'
         */
        rtb_AND_nu = ((rtb_Switch4_ig != 0) && (VeTRAC_b_DFCOEnbl));

        /* Outputs for Atomic SubSystem: '<S52>/ChseRespTypeInDFCO' */
        /* Switch: '<S64>/Switch3' incorporates:
         *  Constant: '<S99>/Calib'
         *  Logic: '<S64>/Logical1'
         *  Logic: '<S64>/Logical2'
         *  Logic: '<S64>/Logical3'
         */
        if (((KeTRAR_b_DsblFastPathDuringDFCO) &&
                (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bu)) ||
                (!rtb_AND_nu))
        {
            /* Switch: '<S64>/Switch3' */
            rtb_Switch4_d = 0;

            /* Switch: '<S64>/Switch1' incorporates:
             *  DataStoreRead: '<S64>/DataStoreRead4'
             *  DataStoreWrite: '<S64>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)512))));
        }
        else if (KeTRAR_b_UseMaxRng4RespTypeAndDFCO)
        {
            /* Switch: '<S64>/Switch' incorporates:
             *  Switch: '<S64>/Switch3'
             */
            rtb_Switch4_d = 2;

            /* Switch: '<S64>/Switch1' incorporates:
             *  DataStoreRead: '<S64>/DataStoreRead4'
             *  DataStoreWrite: '<S64>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator3'
             *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator4'
             *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator5'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_PleasibltyLmtdRspType_DS)) | ((uint16)512))));
        }
        else
        {
            /* Switch: '<S64>/Switch3' incorporates:
             *  Switch: '<S64>/Switch'
             */
            rtb_Switch4_d = 1;

            /* Switch: '<S64>/Switch1' incorporates:
             *  DataStoreRead: '<S64>/DataStoreRead1'
             *  DataStoreWrite: '<S64>/DataStoreWrite'
             *  S-Function (sfix_bitop): '<S96>/FixPt Bitwise Operator1'
             */
            VeTRAR_d_PleasibltyLmtdRspType_DS = (uint16)
                (VeTRAR_d_PleasibltyLmtdRspType_DS | ((uint16)512));
        }

        /* End of Switch: '<S64>/Switch3' */

        /* Switch: '<S64>/Switch2' incorporates:
         *  DataStoreRead: '<S64>/DataStoreRead2'
         *  DataStoreRead: '<S64>/DataStoreRead3'
         *  DataStoreWrite: '<S64>/DataStoreWrite1'
         *  RelationalOperator: '<S64>/Equal2'
         *  S-Function (sfix_bitop): '<S94>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S94>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S94>/FixPt Bitwise Operator5'
         *  S-Function (sfix_bitop): '<S97>/FixPt Bitwise Operator1'
         */
        if (rtb_Switch4_d == 2)
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(VeTRAR_d_MaxRngRspType_DS |
                ((uint16)512));
        }
        else
        {
            VeTRAR_d_MaxRngRspType_DS = (uint16)(~((uint16)(((uint16)
                (~VeTRAR_d_MaxRngRspType_DS)) | ((uint16)512))));
        }

        /* End of Switch: '<S64>/Switch2' */
        /* End of Outputs for SubSystem: '<S52>/ChseRespTypeInDFCO' */

        /* Switch: '<S52>/Switch1' */
        if (rtb_AND_nu)
        {
            /* Merge: '<S9>/Merge' */
            rtb_Switch4_ig = rtb_Switch4_d;
        }

        /* End of Switch: '<S52>/Switch1' */

        /* Update for UnitDelay: '<S194>/UnitDelay' */
        TRAR_ac_DW.UnitDelay_DSTATE_c =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aa;

        /* Update for RelationalOperator: '<S75>/Comparison2' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         *  UnitDelay: '<S75>/UnitDelay'
         */
        TRAR_ac_DW.UnitDelay_DSTATE_nk =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fh;

        /* End of Outputs for SubSystem: '<S9>/Dtrmn_FastPath_Resp_Type' */
    }

    /* End of If: '<S9>/If' */

    /* Switch: '<S9>/Switch' incorporates:
     *  RelationalOperator: '<S9>/Comparison9'
     */
    VeTRAR_b_FastTorqueReqMet = (rtb_Switch4_ig != 0);

    /* Switch: '<S51>/Switch2' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     */
    if (rtb_Logical1_p2)
    {
        rtb_Merge = KeTRAR_M_TorqOffst4CL_FstPathReset;
    }
    else
    {
        rtb_Merge = KeTRAR_M_TorqOffst_FstPathReset;
    }

    /* End of Switch: '<S51>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S51>/SignalLatchOnWithReset1' */
    /* Logic: '<S62>/OR1' incorporates:
     *  Constant: '<S58>/Constant'
     *  Constant: '<S59>/Constant'
     *  Logic: '<S51>/Logical1'
     *  Logic: '<S62>/NOT'
     *  Logic: '<S62>/OR'
     *  RelationalOperator: '<S51>/Comparison1'
     *  RelationalOperator: '<S51>/Comparison4'
     *  RelationalOperator: '<S51>/GreaterThan2'
     *  Sum: '<S51>/Sum2'
     *  UnitDelay: '<S16>/UnitDelay3'
     *  UnitDelay: '<S4>/UnitDelay5'
     *  UnitDelay: '<S62>/UnitDelay'
     */
    TRAR_ac_DW.UnitDelay3_DSTATE_a4 = ((VeTRAR_b_FastTorqueReqMet) ||
        (((((TRAR_ac_DW.UnitDelay5_DSTATE_n <
             (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h - rtb_Merge)) &&
            (CeTRAR_e_NonDOD_ZF != ((uint32)VeTRAC_e_DsrdEngState))) &&
           (((uint32)VeTRAC_e_DsrdEngState) != CeTRAR_e_DOD_ZF)) &&
          rtb_Comparison3_a) && (TRAR_ac_DW.UnitDelay_DSTATE_px)));

    /* Update for UnitDelay: '<S62>/UnitDelay' incorporates:
     *  UnitDelay: '<S16>/UnitDelay3'
     */
    TRAR_ac_DW.UnitDelay_DSTATE_px = TRAR_ac_DW.UnitDelay3_DSTATE_a4;

    /* End of Outputs for SubSystem: '<S51>/SignalLatchOnWithReset1' */

    /* Logic: '<S51>/Logical' incorporates:
     *  Logic: '<S51>/Logical2'
     *  UnitDelay: '<S16>/UnitDelay3'
     */
    VeTRAC_b_FastTrqLatched = ((!VeTRAR_b_FastTorqueReqMet) &&
        (TRAR_ac_DW.UnitDelay3_DSTATE_a4));

    /* RelationalOperator: '<S24>/Comparison13' incorporates:
     *  Constant: '<S504>/Constant'
     */
    VeTRAR_b_TransitionDOD2NonDOD = (((uint32)VeTRAC_e_DsrdEngState) ==
        CeTRAR_e_DOD2NonDOD_FF);

    /* Switch: '<S509>/Switch2' */
    if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg)
    {
        /* Switch: '<S509>/Switch2' */
        VeTRAR_M_OptTeOld = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e;
    }
    else
    {
        /* Switch: '<S509>/Switch2' incorporates:
         *  DataStoreRead: '<S509>/DataStoreRead'
         */
        VeTRAR_M_OptTeOld = TRAR_ac_DW.VeTRAC_M_OptTe_DS;
    }

    /* End of Switch: '<S509>/Switch2' */

    /* Sum: '<S25>/Summation6' */
    rtb_Merge = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c4 +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Outputs for Atomic SubSystem: '<S24>/TimerRetriggerResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S511>/EdgeRising' */
    /* Logic: '<S555>/OR1' incorporates:
     *  UnitDelay: '<S555>/UnitDelay'
     */
    rtb_AND_nu = !TRAR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S555>/UnitDelay' */
    TRAR_ac_DW.UnitDelay_DSTATE_f = VeTRAR_b_TransitionDOD2NonDOD;

    /* Switch: '<S511>/Switch1' incorporates:
     *  Constant: '<S500>/Calib'
     *  Constant: '<S510>/Calib'
     *  Constant: '<S511>/ConstantValue4'
     *  Logic: '<S555>/AND'
     *  MinMax: '<S511>/Maximum'
     *  Sum: '<S511>/Subtraction'
     *  UnitDelay: '<S511>/UnitDelay'
     */
    if ((VeTRAR_b_TransitionDOD2NonDOD) && rtb_AND_nu)
    {
        TRAR_ac_DW.UnitDelay_DSTATE_o = KeTRAR_t_DODMaxDelay;
    }
    else
    {
        TRAR_ac_DW.UnitDelay_DSTATE_o = fmaxf(TRAR_ac_DW.UnitDelay_DSTATE_o -
            HeTRAR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S511>/Switch1' */
    /* End of Outputs for SubSystem: '<S511>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S24>/TimerRetriggerResetTriggerEnabled' */

    /* If: '<S509>/If' incorporates:
     *  Constant: '<S498>/Constant'
     *  Constant: '<S499>/Constant'
     *  Constant: '<S501>/Constant'
     *  Constant: '<S503>/Constant'
     *  Constant: '<S505>/Constant'
     *  Constant: '<S506>/Constant'
     *  Constant: '<S507>/Constant'
     *  Constant: '<S508>/Constant'
     *  Constant: '<S516>/Calib'
     *  Logic: '<S24>/Logical'
     *  Logic: '<S24>/Logical1'
     *  Logic: '<S24>/Logical11'
     *  Logic: '<S24>/Logical2'
     *  Logic: '<S24>/Logical3'
     *  Logic: '<S24>/Logical4'
     *  Logic: '<S509>/Logical3'
     *  RelationalOperator: '<S24>/Comparison1'
     *  RelationalOperator: '<S24>/Comparison2'
     *  RelationalOperator: '<S24>/Comparison3'
     *  RelationalOperator: '<S24>/Comparison4'
     *  RelationalOperator: '<S24>/Comparison5'
     *  RelationalOperator: '<S24>/Comparison6'
     *  RelationalOperator: '<S24>/Comparison7'
     *  RelationalOperator: '<S24>/Comparison8'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     *  Switch: '<S529>/Switch2'
     */
    if ((VeTRAC_b_FastTrqLatched) && (KeTRAR_b_AllwFastTrqLatchedFiltering))
    {
        /* Outputs for IfAction SubSystem: '<S509>/ExitingFastPath' incorporates:
         *  ActionPort: '<S523>/ActionPort'
         */
        /* Switch: '<S523>/Switch' incorporates:
         *  MinMax: '<S523>/MinMax1'
         *  Sum: '<S523>/Subtraction2'
         *  UnitDelay: '<S4>/UnitDelay1'
         */
        rtb_Summation1 = fminf(TRAR_ac_DW.UnitDelay1_DSTATE,
                               TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h)
            - VeTRAR_M_OptTeOld;

        /* Abs: '<S523>/Abs' */
        rtb_Summation11 = fabsf(rtb_Summation1);

        /* MinMax: '<S523>/Maximum1' incorporates:
         *  Abs: '<S523>/Abs'
         *  Constant: '<S525>/Calib'
         *  Lookup_n-D: '<S532>/Vector'
         */
        rtb_Maximum1_d = fmaxf(look1_iflf_binlca_16a(rtb_Summation11, ((const
            float32 *)&(KxTRAR_t_TeImmedRamp[0])), ((const float32 *)
            &(KtTRAR_t_TeImmedRamp[0])), 8U), HeTRAR_t_MedTEB_dT);

        /* Outputs for Atomic SubSystem: '<S523>/ProtectedDivision' */
        /* Switch: '<S533>/Switch1' incorporates:
         *  Constant: '<S533>/ConstantValue'
         *  Constant: '<S533>/ConstantValue1'
         *  Constant: '<S533>/ConstantValue2'
         *  Logic: '<S533>/AND'
         *  RelationalOperator: '<S533>/GreaterThanorEqual'
         *  RelationalOperator: '<S533>/NotEqual'
         *  RelationalOperator: '<S533>/NotEqual1'
         *  Switch: '<S533>/Switch2'
         */
        if ((rtb_Summation11 != 0.0F) && (rtb_Maximum1_d != 0.0F))
        {
            /* Switch: '<S533>/Switch1' incorporates:
             *  Product: '<S533>/Division'
             */
            rtb_Summation11 /= rtb_Maximum1_d;
        }
        else if (rtb_Summation11 > 0.0F)
        {
            /* Switch: '<S533>/Switch2' incorporates:
             *  Constant: '<S533>/MAXFLOAT'
             *  Switch: '<S533>/Switch1'
             */
            rtb_Summation11 = 3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S533>/Switch1' incorporates:
             *  Constant: '<S533>/ConstantValue4'
             *  Switch: '<S533>/Switch2'
             *  Switch: '<S533>/Switch3'
             */
            rtb_Summation11 = 0.0F;
        }

        /* End of Switch: '<S533>/Switch1' */
        /* End of Outputs for SubSystem: '<S523>/ProtectedDivision' */

        /* Switch: '<S523>/Switch' incorporates:
         *  Constant: '<S523>/ConstantValue'
         *  Constant: '<S523>/ConstantValue1'
         *  Constant: '<S523>/ConstantValue2'
         *  RelationalOperator: '<S523>/Comparison'
         */
        if (rtb_Summation1 >= 0.0F)
        {
            rtb_Switch_p_0 = 1;
        }
        else
        {
            rtb_Switch_p_0 = -1;
        }

        /* End of Switch: '<S523>/Switch' */

        /* Merge: '<S509>/Merge2' incorporates:
         *  Constant: '<S525>/Calib'
         *  Product: '<S523>/Product'
         */
        VeTRAR_dM_Te = (rtb_Summation11 * HeTRAR_t_MedTEB_dT) * ((float32)
            rtb_Switch_p_0);

        /* Merge: '<S509>/Merge4' incorporates:
         *  Gain: '<S534>/Gain'
         */
        VeTRAC_M_OptTe = VeTRAC_M_OptTeArb;

        /* End of Outputs for SubSystem: '<S509>/ExitingFastPath' */
    }
    else if (((((uint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) ==
               CeOITR_e_NonDOD_FF) && (((uint32)VeTRAC_e_DsrdEngState) ==
               CeTRAR_e_NonDOD_FF)) || ((((uint32)
                TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) ==
               CeOITR_e_DOD_FF) && (((uint32)VeTRAC_e_DsrdEngState) ==
               CeTRAR_e_DOD_FF)))
    {
        /* Outputs for IfAction SubSystem: '<S509>/FF' incorporates:
         *  ActionPort: '<S524>/ActionPort'
         */
        /* Sum: '<S524>/Subtraction1' */
        VeTRAR_dM_TeDelta_FF = VeTRAC_M_OptTeArb - VeTRAR_M_OptTeOld;

        /* RelationalOperator: '<S524>/Comparison1' */
        rtb_AND_nu = (VeTRAR_M_OptTeOld >= rtb_Merge);

        /* RelationalOperator: '<S524>/Comparison3' */
        rtb_Comparison3_a = (VeTRAR_M_OptTeOld <= rtb_Summation5);

        /* Sum: '<S537>/Sub2' incorporates:
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_n =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k -
            TRAR_ac_DW.UnitDelay1_DSTATE_n;

        /* Abs: '<S537>/Abs' incorporates:
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_n = fabsf(TRAR_ac_DW.UnitDelay1_DSTATE_n);

        /* MinMax: '<S537>/Maximum' incorporates:
         *  Constant: '<S525>/Calib'
         *  Constant: '<S536>/Calib'
         */
        rtb_Summation1 = fmaxf(KeTRAR_t_kT_DT1, HeTRAR_t_MedTEB_dT);

        /* Product: '<S537>/Multiplication4' incorporates:
         *  Constant: '<S536>/Calib'
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        rtb_Summation11 = KeTRAR_t_kT_DT1 * TRAR_ac_DW.UnitDelay1_DSTATE_n;

        /* Outputs for Atomic SubSystem: '<S537>/ProtectedDivision' */
        /* Switch: '<S544>/Switch1' incorporates:
         *  Constant: '<S525>/Calib'
         *  Constant: '<S544>/ConstantValue'
         *  Constant: '<S544>/ConstantValue1'
         *  Constant: '<S544>/ConstantValue2'
         *  Constant: '<S544>/ConstantValue3'
         *  Logic: '<S544>/AND'
         *  RelationalOperator: '<S544>/GreaterThanorEqual'
         *  RelationalOperator: '<S544>/GreaterThanorEqual1'
         *  RelationalOperator: '<S544>/NotEqual'
         *  RelationalOperator: '<S544>/NotEqual1'
         *  Switch: '<S544>/Switch2'
         *  Switch: '<S544>/Switch3'
         */
        if ((rtb_Summation11 != 0.0F) && (HeTRAR_t_MedTEB_dT != 0.0F))
        {
            /* Switch: '<S544>/Switch1' incorporates:
             *  Product: '<S544>/Division'
             */
            VeTRAR_k_DerivativeTerm = rtb_Summation11 / HeTRAR_t_MedTEB_dT;
        }
        else if (rtb_Summation11 > 0.0F)
        {
            /* Switch: '<S544>/Switch2' incorporates:
             *  Constant: '<S544>/MAXFLOAT'
             *  Switch: '<S544>/Switch1'
             */
            VeTRAR_k_DerivativeTerm = 3.402823466E+38F;
        }
        else if (rtb_Summation11 < 0.0F)
        {
            /* Switch: '<S544>/Switch3' incorporates:
             *  Constant: '<S544>/MINFLOAT'
             *  Switch: '<S544>/Switch1'
             *  Switch: '<S544>/Switch2'
             */
            VeTRAR_k_DerivativeTerm = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S544>/Switch1' incorporates:
             *  Constant: '<S544>/ConstantValue4'
             *  Switch: '<S544>/Switch2'
             *  Switch: '<S544>/Switch3'
             */
            VeTRAR_k_DerivativeTerm = 0.0F;
        }

        /* End of Switch: '<S544>/Switch1' */
        /* End of Outputs for SubSystem: '<S537>/ProtectedDivision' */

        /* UnitDelay: '<S537>/UnitDelay' incorporates:
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_n = VeTRAR_r_DrvrAggFactor_FF;

        /* Product: '<S537>/Multiplication' incorporates:
         *  Constant: '<S525>/Calib'
         *  Sum: '<S537>/Subtraction'
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        rtb_Summation11 = (VeTRAR_k_DerivativeTerm -
                           TRAR_ac_DW.UnitDelay1_DSTATE_n) * HeTRAR_t_MedTEB_dT;

        /* Outputs for Atomic SubSystem: '<S537>/ProtectedDivision1' */
        /* Switch: '<S545>/Switch1' incorporates:
         *  Constant: '<S545>/ConstantValue'
         *  Constant: '<S545>/ConstantValue1'
         *  Constant: '<S545>/ConstantValue2'
         *  Constant: '<S545>/ConstantValue3'
         *  Logic: '<S545>/AND'
         *  RelationalOperator: '<S545>/GreaterThanorEqual'
         *  RelationalOperator: '<S545>/GreaterThanorEqual1'
         *  RelationalOperator: '<S545>/NotEqual'
         *  RelationalOperator: '<S545>/NotEqual1'
         *  Switch: '<S545>/Switch2'
         *  Switch: '<S545>/Switch3'
         */
        if ((rtb_Summation11 != 0.0F) && (rtb_Summation1 != 0.0F))
        {
            /* Switch: '<S545>/Switch1' incorporates:
             *  Product: '<S545>/Division'
             */
            rtb_Summation1 = rtb_Summation11 / rtb_Summation1;
        }
        else if (rtb_Summation11 > 0.0F)
        {
            /* Switch: '<S545>/Switch2' incorporates:
             *  Constant: '<S545>/MAXFLOAT'
             *  Switch: '<S545>/Switch1'
             */
            rtb_Summation1 = 3.402823466E+38F;
        }
        else if (rtb_Summation11 < 0.0F)
        {
            /* Switch: '<S545>/Switch3' incorporates:
             *  Constant: '<S545>/MINFLOAT'
             *  Switch: '<S545>/Switch1'
             *  Switch: '<S545>/Switch2'
             */
            rtb_Summation1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S545>/Switch1' incorporates:
             *  Constant: '<S545>/ConstantValue4'
             *  Switch: '<S545>/Switch2'
             *  Switch: '<S545>/Switch3'
             */
            rtb_Summation1 = 0.0F;
        }

        /* End of Switch: '<S545>/Switch1' */
        /* End of Outputs for SubSystem: '<S537>/ProtectedDivision1' */

        /* Sum: '<S537>/Summation' incorporates:
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        VeTRAR_r_DrvrAggFactor_FF = rtb_Summation1 +
            TRAR_ac_DW.UnitDelay1_DSTATE_n;

        /* Lookup_n-D: '<S538>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_n = look1_iflf_binlca_16a
            (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k, ((const float32
               *)&(KxTRAR_t_kT_AccPedFilt[0])), ((const float32 *)
              &(KtTRAR_t_kT_AccPedFilt[0])), 3U);

        /* MinMax: '<S524>/MinMax2' incorporates:
         *  Lookup_n-D: '<S540>/Vector'
         *  Sum: '<S524>/Subtraction1'
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_n = fmaxf(TRAR_ac_DW.UnitDelay1_DSTATE_n,
            look1_iflf_binlca_16a(VeTRAR_dM_TeDelta_FF, ((const float32 *)
            &(KxTRAR_t_kT_OptTeErrFilt[0])), ((const float32 *)
            &(KtTRAR_t_kT_OptTeErrFilt[0])), 8U));

        /* MinMax: '<S524>/MinMax' incorporates:
         *  Lookup_n-D: '<S539>/Vector'
         *  Sum: '<S537>/Summation'
         *  UnitDelay: '<S537>/UnitDelay1'
         */
        VeTRAR_t_kT_BfrFltr_FF = fminf(look1_iflf_binlca_16a
            (VeTRAR_r_DrvrAggFactor_FF, ((const float32 *)
            &(KxTRAR_t_kT_DrvrAggFilt[0])), ((const float32 *)
            &(KtTRAR_t_kT_DrvrAggFilt[0])), 10U), TRAR_ac_DW.UnitDelay1_DSTATE_n);

        /* Product: '<S524>/Multiplication1' incorporates:
         *  Constant: '<S535>/Calib'
         *  DataTypeConversion: '<S524>/DataTypeConversion'
         *  Selector: '<S524>/Selector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        VeTRAR_t_kT_BfrFltrSclrMult_FF = KaTRAR_r_TiFiltSclrRngSt
            [(TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bz)] *
            VeTRAR_t_kT_BfrFltr_FF;

        /* Switch: '<S524>/Switch' incorporates:
         *  Constant: '<S524>/ConstantValue'
         *  Constant: '<S524>/ConstantValue1'
         *  Logic: '<S524>/Logical'
         *  Logic: '<S524>/Logical1'
         *  Logic: '<S524>/Logical3'
         *  Logic: '<S524>/Logical5'
         *  Logic: '<S524>/Logical6'
         *  Logic: '<S524>/Logical7'
         *  RelationalOperator: '<S524>/Comparison'
         *  RelationalOperator: '<S524>/Comparison4'
         */
        if ((((VeTRAR_dM_TeDelta_FF > 0.0F) && (!rtb_Comparison3_a)) ||
                (rtb_Comparison3_a && rtb_AND_nu)) || ((!rtb_AND_nu) &&
                (VeTRAR_dM_TeDelta_FF < 0.0F)))
        {
            /* Switch: '<S524>/Switch' */
            VeTRAR_dM_RateTe_FF = VeTRAR_t_kT_BfrFltrSclrMult_FF;
        }
        else
        {
            /* Switch: '<S524>/Switch' incorporates:
             *  Constant: '<S517>/Calib'
             *  MinMax: '<S524>/MinMax3'
             */
            VeTRAR_dM_RateTe_FF = fminf(VeTRAR_t_kT_BfrFltr_FF,
                KeTRAR_t_kT_OutsideTeLimits);
        }

        /* End of Switch: '<S524>/Switch' */

        /* MinMax: '<S524>/Maximum1' incorporates:
         *  Constant: '<S525>/Calib'
         */
        rtb_Summation1 = fmaxf(HeTRAR_t_MedTEB_dT, VeTRAR_dM_RateTe_FF);

        /* Product: '<S524>/Multiplication2' incorporates:
         *  Constant: '<S525>/Calib'
         */
        rtb_Summation11 = VeTRAR_dM_TeDelta_FF * HeTRAR_t_MedTEB_dT;

        /* Outputs for Atomic SubSystem: '<S524>/ProtectedDivision' */
        /* Switch: '<S541>/Switch1' incorporates:
         *  Constant: '<S541>/ConstantValue'
         *  Constant: '<S541>/ConstantValue1'
         *  Constant: '<S541>/ConstantValue2'
         *  Constant: '<S541>/ConstantValue3'
         *  Logic: '<S541>/AND'
         *  RelationalOperator: '<S541>/GreaterThanorEqual'
         *  RelationalOperator: '<S541>/GreaterThanorEqual1'
         *  RelationalOperator: '<S541>/NotEqual'
         *  RelationalOperator: '<S541>/NotEqual1'
         *  Switch: '<S541>/Switch2'
         *  Switch: '<S541>/Switch3'
         */
        if ((rtb_Summation11 != 0.0F) && (rtb_Summation1 != 0.0F))
        {
            /* Merge: '<S509>/Merge2' incorporates:
             *  Product: '<S541>/Division'
             */
            VeTRAR_dM_Te = rtb_Summation11 / rtb_Summation1;
        }
        else if (rtb_Summation11 > 0.0F)
        {
            /* Switch: '<S541>/Switch2' incorporates:
             *  Constant: '<S541>/MAXFLOAT'
             *  Merge: '<S509>/Merge2'
             */
            VeTRAR_dM_Te = 3.402823466E+38F;
        }
        else if (rtb_Summation11 < 0.0F)
        {
            /* Switch: '<S541>/Switch3' incorporates:
             *  Constant: '<S541>/MINFLOAT'
             *  Merge: '<S509>/Merge2'
             *  Switch: '<S541>/Switch2'
             */
            VeTRAR_dM_Te = -3.402823466E+38F;
        }
        else
        {
            /* Merge: '<S509>/Merge2' incorporates:
             *  Constant: '<S541>/ConstantValue4'
             *  Switch: '<S541>/Switch2'
             *  Switch: '<S541>/Switch3'
             */
            VeTRAR_dM_Te = 0.0F;
        }

        /* End of Switch: '<S541>/Switch1' */
        /* End of Outputs for SubSystem: '<S524>/ProtectedDivision' */

        /* Merge: '<S509>/Merge4' incorporates:
         *  Gain: '<S542>/Gain'
         */
        VeTRAC_M_OptTe = VeTRAC_M_OptTeArb;

        /* Merge: '<S509>/Merge3' incorporates:
         *  Gain: '<S543>/Gain'
         */
        TRAR_ac_B.Merge3 = VeTRAR_dM_RateTe_FF;

        /* Update for UnitDelay: '<S537>/UnitDelay1' */
        TRAR_ac_DW.UnitDelay1_DSTATE_n =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k;

        /* End of Outputs for SubSystem: '<S509>/FF' */
    }
    else if (((((uint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) ==
               CeOITR_e_NonDOD_ZF) && (((uint32)VeTRAC_e_DsrdEngState) ==
               CeTRAR_e_NonDOD_ZF)) || ((((uint32)
                TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_iv) ==
               CeOITR_e_DOD_ZF) && (((uint32)VeTRAC_e_DsrdEngState) ==
               CeTRAR_e_DOD_ZF)))
    {
        /* Outputs for IfAction SubSystem: '<S509>/ZF' incorporates:
         *  ActionPort: '<S531>/ActionPort'
         */
        /* Merge: '<S509>/Merge4' incorporates:
         *  Gain: '<S553>/Gain'
         */
        VeTRAC_M_OptTe = VeTRAC_M_OptTeArb;

        /* Merge: '<S509>/Merge2' incorporates:
         *  Sum: '<S531>/Subtraction1'
         */
        VeTRAR_dM_Te = VeTRAC_M_OptTeArb - VeTRAR_M_OptTeOld;

        /* Merge: '<S509>/Merge3' incorporates:
         *  Constant: '<S531>/ConstantValue'
         *  Gain: '<S554>/Gain'
         */
        TRAR_ac_B.Merge3 = 0.0F;

        /* End of Outputs for SubSystem: '<S509>/ZF' */
    }
    else if (!VeTRAR_b_TransitionDOD2NonDOD)
    {
        /* Outputs for IfAction SubSystem: '<S509>/Transitions' incorporates:
         *  ActionPort: '<S530>/ActionPort'
         */
        /* Sum: '<S530>/Subtraction1' */
        VeTRAR_dM_TeDelta_Transition = VeTRAC_M_OptTeArb - VeTRAR_M_OptTeOld;

        /* RelationalOperator: '<S530>/Comparison1' */
        rtb_AND_nu = (VeTRAR_M_OptTeOld >= rtb_Merge);

        /* RelationalOperator: '<S530>/Comparison3' */
        rtb_Comparison3_a = (VeTRAR_M_OptTeOld <= rtb_Summation5);

        /* RelationalOperator: '<S530>/Comparison5' incorporates:
         *  Constant: '<S530>/ConstantValue3'
         */
        rtb_Logical1_p2 = (VeTRAR_dM_TeDelta_Transition >= 0.0F);

        /* Switch: '<S530>/Switch2' incorporates:
         *  Constant: '<S530>/ConstantValue'
         *  Constant: '<S530>/ConstantValue1'
         *  Logic: '<S530>/Logical'
         *  Logic: '<S530>/Logical1'
         *  Logic: '<S530>/Logical3'
         *  Logic: '<S530>/Logical5'
         *  Logic: '<S530>/Logical6'
         *  Logic: '<S530>/Logical7'
         *  RelationalOperator: '<S530>/Comparison'
         *  RelationalOperator: '<S530>/Comparison4'
         *  Switch: '<S530>/Switch8'
         */
        if ((((VeTRAR_dM_TeDelta_Transition > 0.0F) && (!rtb_Comparison3_a)) ||
                (rtb_Comparison3_a && rtb_AND_nu)) || ((!rtb_AND_nu) &&
                (VeTRAR_dM_TeDelta_Transition < 0.0F)))
        {
            /* Switch: '<S530>/Switch8' */
            if (rtb_Logical1_p2)
            {
                /* Switch: '<S530>/Switch2' incorporates:
                 *  Constant: '<S513>/Calib'
                 */
                TRAR_ac_B.Merge3 = KeTRAR_t_kT_StateChangePos;
            }
            else
            {
                /* Switch: '<S530>/Switch2' incorporates:
                 *  Constant: '<S515>/Calib'
                 */
                TRAR_ac_B.Merge3 = KeTRAR_t_kT_StateChangeNeg;
            }
        }
        else
        {
            if (rtb_Logical1_p2)
            {
                /* Switch: '<S530>/Switch8' incorporates:
                 *  Constant: '<S513>/Calib'
                 */
                rtb_Summation1 = KeTRAR_t_kT_StateChangePos;
            }
            else
            {
                /* Switch: '<S530>/Switch8' incorporates:
                 *  Constant: '<S515>/Calib'
                 */
                rtb_Summation1 = KeTRAR_t_kT_StateChangeNeg;
            }

            /* Switch: '<S530>/Switch2' incorporates:
             *  Constant: '<S517>/Calib'
             *  MinMax: '<S530>/MinMax4'
             */
            TRAR_ac_B.Merge3 = fminf(rtb_Summation1, KeTRAR_t_kT_OutsideTeLimits);
        }

        /* End of Switch: '<S530>/Switch2' */

        /* MinMax: '<S530>/Maximum1' incorporates:
         *  Constant: '<S525>/Calib'
         */
        rtb_Summation1 = fmaxf(HeTRAR_t_MedTEB_dT, TRAR_ac_B.Merge3);

        /* Product: '<S530>/Multiplication2' incorporates:
         *  Constant: '<S525>/Calib'
         */
        rtb_Summation11 = VeTRAR_dM_TeDelta_Transition * HeTRAR_t_MedTEB_dT;

        /* Outputs for Atomic SubSystem: '<S530>/ProtectedDivision' */
        /* Switch: '<S550>/Switch1' incorporates:
         *  Constant: '<S550>/ConstantValue'
         *  Constant: '<S550>/ConstantValue1'
         *  Constant: '<S550>/ConstantValue2'
         *  Constant: '<S550>/ConstantValue3'
         *  Logic: '<S550>/AND'
         *  RelationalOperator: '<S550>/GreaterThanorEqual'
         *  RelationalOperator: '<S550>/GreaterThanorEqual1'
         *  RelationalOperator: '<S550>/NotEqual'
         *  RelationalOperator: '<S550>/NotEqual1'
         *  Switch: '<S550>/Switch2'
         *  Switch: '<S550>/Switch3'
         */
        if ((rtb_Summation11 != 0.0F) && (rtb_Summation1 != 0.0F))
        {
            /* Switch: '<S550>/Switch1' incorporates:
             *  Product: '<S550>/Division'
             */
            VeTRAR_dM_RateTe_Transition = rtb_Summation11 / rtb_Summation1;
        }
        else if (rtb_Summation11 > 0.0F)
        {
            /* Switch: '<S550>/Switch2' incorporates:
             *  Constant: '<S550>/MAXFLOAT'
             *  Switch: '<S550>/Switch1'
             */
            VeTRAR_dM_RateTe_Transition = 3.402823466E+38F;
        }
        else if (rtb_Summation11 < 0.0F)
        {
            /* Switch: '<S550>/Switch3' incorporates:
             *  Constant: '<S550>/MINFLOAT'
             *  Switch: '<S550>/Switch1'
             *  Switch: '<S550>/Switch2'
             */
            VeTRAR_dM_RateTe_Transition = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S550>/Switch1' incorporates:
             *  Constant: '<S550>/ConstantValue4'
             *  Switch: '<S550>/Switch2'
             *  Switch: '<S550>/Switch3'
             */
            VeTRAR_dM_RateTe_Transition = 0.0F;
        }

        /* End of Switch: '<S550>/Switch1' */
        /* End of Outputs for SubSystem: '<S530>/ProtectedDivision' */

        /* Merge: '<S509>/Merge4' incorporates:
         *  Gain: '<S551>/Gain'
         */
        VeTRAC_M_OptTe = VeTRAC_M_OptTeArb;

        /* Switch: '<S530>/Switch1' */
        if (rtb_Logical1_p2)
        {
            /* Merge: '<S509>/Merge2' incorporates:
             *  Constant: '<S518>/Calib'
             *  Constant: '<S525>/Calib'
             *  MinMax: '<S530>/MinMax1'
             *  MinMax: '<S530>/MinMax5'
             *  Product: '<S530>/Multiplication4'
             */
            VeTRAR_dM_Te = fminf(fmaxf(HeTRAR_t_MedTEB_dT *
                                  KeTRAR_dM_MinChangePos,
                                  VeTRAR_dM_RateTe_Transition),
                                 VeTRAR_dM_TeDelta_Transition);
        }
        else
        {
            /* Merge: '<S509>/Merge2' incorporates:
             *  Constant: '<S514>/Calib'
             *  Constant: '<S525>/Calib'
             *  MinMax: '<S530>/MinMax3'
             *  MinMax: '<S530>/MinMax7'
             *  Product: '<S530>/Multiplication1'
             */
            VeTRAR_dM_Te = fmaxf(VeTRAR_dM_TeDelta_Transition, fminf
                                 (VeTRAR_dM_RateTe_Transition,
                                  HeTRAR_t_MedTEB_dT * KeTRAR_dM_MinChangeNeg));
        }

        /* End of Switch: '<S530>/Switch1' */
        /* End of Outputs for SubSystem: '<S509>/Transitions' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S509>/TransitionDOD2NonDOD' incorporates:
         *  ActionPort: '<S529>/ActionPort'
         */
        if (rtb_NotEqual_cp)
        {
            /* Switch: '<S529>/Switch2' incorporates:
             *  MinMax: '<S529>/MinMax'
             *  MinMax: '<S529>/MinMax2'
             *  MinMax: '<S529>/MinMax4'
             *  MinMax: '<S529>/MinMax6'
             */
            VeTRAC_M_OptTe = fminf(fmaxf(VeTRAR_M_OptTeOld, rtb_Summation1),
                                   fmaxf(fminf(VeTRAR_M_OptTeOld, rtb_Summation7),
                                    VeTRAC_M_OptTeArb));
        }
        else
        {
            /* Switch: '<S529>/Switch2' */
            VeTRAC_M_OptTe = VeTRAC_M_OptTeArb;
        }

        /* Sum: '<S529>/Subtraction1' */
        VeTRAR_dM_TeDelta_DOD2NonDOD = VeTRAC_M_OptTe - VeTRAR_M_OptTeOld;

        /* RelationalOperator: '<S529>/Comparison2' */
        rtb_AND_nu = (VeTRAR_M_OptTeOld >= rtb_Merge);

        /* RelationalOperator: '<S529>/Comparison3' */
        rtb_Comparison3_a = (VeTRAR_M_OptTeOld <= rtb_Summation5);

        /* RelationalOperator: '<S529>/Comparison5' incorporates:
         *  Constant: '<S529>/ConstantValue3'
         */
        rtb_Logical1_p2 = (VeTRAR_dM_TeDelta_DOD2NonDOD >= 0.0F);

        /* Switch: '<S529>/Switch3' incorporates:
         *  Constant: '<S529>/ConstantValue1'
         *  Constant: '<S529>/ConstantValue2'
         *  Logic: '<S529>/Logical1'
         *  Logic: '<S529>/Logical2'
         *  Logic: '<S529>/Logical3'
         *  Logic: '<S529>/Logical5'
         *  Logic: '<S529>/Logical6'
         *  Logic: '<S529>/Logical7'
         *  RelationalOperator: '<S529>/Comparison1'
         *  RelationalOperator: '<S529>/Comparison4'
         *  Switch: '<S529>/Switch8'
         */
        if ((((VeTRAR_dM_TeDelta_DOD2NonDOD > 0.0F) && (!rtb_Comparison3_a)) ||
                (rtb_Comparison3_a && rtb_AND_nu)) || ((!rtb_AND_nu) &&
                (VeTRAR_dM_TeDelta_DOD2NonDOD < 0.0F)))
        {
            /* Switch: '<S529>/Switch8' */
            if (rtb_Logical1_p2)
            {
                /* Switch: '<S529>/Switch3' incorporates:
                 *  Constant: '<S513>/Calib'
                 */
                TRAR_ac_B.Merge3 = KeTRAR_t_kT_StateChangePos;
            }
            else
            {
                /* Switch: '<S529>/Switch3' incorporates:
                 *  Constant: '<S515>/Calib'
                 */
                TRAR_ac_B.Merge3 = KeTRAR_t_kT_StateChangeNeg;
            }
        }
        else
        {
            if (rtb_Logical1_p2)
            {
                /* Switch: '<S529>/Switch8' incorporates:
                 *  Constant: '<S513>/Calib'
                 */
                rtb_Summation1 = KeTRAR_t_kT_StateChangePos;
            }
            else
            {
                /* Switch: '<S529>/Switch8' incorporates:
                 *  Constant: '<S515>/Calib'
                 */
                rtb_Summation1 = KeTRAR_t_kT_StateChangeNeg;
            }

            /* Switch: '<S529>/Switch3' incorporates:
             *  Constant: '<S517>/Calib'
             *  MinMax: '<S529>/MinMax9'
             */
            TRAR_ac_B.Merge3 = fminf(rtb_Summation1, KeTRAR_t_kT_OutsideTeLimits);
        }

        /* End of Switch: '<S529>/Switch3' */

        /* MinMax: '<S529>/Maximum1' incorporates:
         *  Constant: '<S525>/Calib'
         */
        rtb_Summation1 = fmaxf(HeTRAR_t_MedTEB_dT, TRAR_ac_B.Merge3);

        /* Product: '<S529>/Multiplication2' incorporates:
         *  Constant: '<S525>/Calib'
         */
        rtb_Summation11 = VeTRAR_dM_TeDelta_DOD2NonDOD * HeTRAR_t_MedTEB_dT;

        /* Outputs for Atomic SubSystem: '<S529>/ProtectedDivision' */
        /* Switch: '<S547>/Switch1' incorporates:
         *  Constant: '<S547>/ConstantValue'
         *  Constant: '<S547>/ConstantValue1'
         *  Constant: '<S547>/ConstantValue2'
         *  Constant: '<S547>/ConstantValue3'
         *  Logic: '<S547>/AND'
         *  RelationalOperator: '<S547>/GreaterThanorEqual'
         *  RelationalOperator: '<S547>/GreaterThanorEqual1'
         *  RelationalOperator: '<S547>/NotEqual'
         *  RelationalOperator: '<S547>/NotEqual1'
         *  Switch: '<S547>/Switch2'
         *  Switch: '<S547>/Switch3'
         */
        if ((rtb_Summation11 != 0.0F) && (rtb_Summation1 != 0.0F))
        {
            /* Switch: '<S547>/Switch1' incorporates:
             *  Product: '<S547>/Division'
             */
            rtb_Summation1 = rtb_Summation11 / rtb_Summation1;
        }
        else if (rtb_Summation11 > 0.0F)
        {
            /* Switch: '<S547>/Switch2' incorporates:
             *  Constant: '<S547>/MAXFLOAT'
             *  Switch: '<S547>/Switch1'
             */
            rtb_Summation1 = 3.402823466E+38F;
        }
        else if (rtb_Summation11 < 0.0F)
        {
            /* Switch: '<S547>/Switch3' incorporates:
             *  Constant: '<S547>/MINFLOAT'
             *  Switch: '<S547>/Switch1'
             *  Switch: '<S547>/Switch2'
             */
            rtb_Summation1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S547>/Switch1' incorporates:
             *  Constant: '<S547>/ConstantValue4'
             *  Switch: '<S547>/Switch2'
             *  Switch: '<S547>/Switch3'
             */
            rtb_Summation1 = 0.0F;
        }

        /* End of Switch: '<S547>/Switch1' */
        /* End of Outputs for SubSystem: '<S529>/ProtectedDivision' */

        /* Switch: '<S529>/Switch1' */
        if (rtb_Logical1_p2)
        {
            /* Switch: '<S529>/Switch1' incorporates:
             *  Constant: '<S518>/Calib'
             *  Constant: '<S525>/Calib'
             *  MinMax: '<S529>/MinMax1'
             *  MinMax: '<S529>/MinMax5'
             *  Product: '<S529>/Multiplication4'
             */
            VeTRAR_dM_RateTe_DOD2NonDOD = fminf(fmaxf(HeTRAR_t_MedTEB_dT *
                KeTRAR_dM_MinChangePos, rtb_Summation1),
                VeTRAR_dM_TeDelta_DOD2NonDOD);
        }
        else
        {
            /* Switch: '<S529>/Switch1' incorporates:
             *  Constant: '<S514>/Calib'
             *  Constant: '<S525>/Calib'
             *  MinMax: '<S529>/MinMax3'
             *  MinMax: '<S529>/MinMax7'
             *  Product: '<S529>/Multiplication1'
             */
            VeTRAR_dM_RateTe_DOD2NonDOD = fmaxf(VeTRAR_dM_TeDelta_DOD2NonDOD,
                fminf(rtb_Summation1, HeTRAR_t_MedTEB_dT *
                      KeTRAR_dM_MinChangeNeg));
        }

        /* End of Switch: '<S529>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S24>/TimerRetriggerResetTriggerEnabled' */
        /* Switch: '<S529>/Switch7' incorporates:
         *  Constant: '<S511>/ConstantValue2'
         *  Constant: '<S529>/ConstantValue'
         *  Logic: '<S24>/Logical10'
         *  Logic: '<S529>/Logical'
         *  RelationalOperator: '<S511>/GreaterThan1'
         *  RelationalOperator: '<S529>/Comparison'
         *  UnitDelay: '<S511>/UnitDelay'
         */
        if ((VeTRAR_dM_TeDelta_DOD2NonDOD > 0.0F) &&
                (((VeTRAR_b_TransitionDOD2NonDOD) &&
                  (TRAR_ac_DW.UnitDelay_DSTATE_o > 0.0F)) && rtb_NotEqual_cp))
        {
            /* Merge: '<S509>/Merge2' incorporates:
             *  Constant: '<S525>/Calib'
             *  Constant: '<S546>/Calib'
             *  MinMax: '<S529>/MinMax8'
             *  Product: '<S529>/Multiplication9'
             */
            VeTRAR_dM_Te = fminf(HeTRAR_t_MedTEB_dT * KeTRAR_dM_MaxChgDODTrans,
                                 VeTRAR_dM_RateTe_DOD2NonDOD);
        }
        else
        {
            /* Merge: '<S509>/Merge2' */
            VeTRAR_dM_Te = VeTRAR_dM_RateTe_DOD2NonDOD;
        }

        /* End of Switch: '<S529>/Switch7' */
        /* End of Outputs for SubSystem: '<S24>/TimerRetriggerResetTriggerEnabled' */
        /* End of Outputs for SubSystem: '<S509>/TransitionDOD2NonDOD' */
    }

    /* End of If: '<S509>/If' */

    /* DataStoreWrite: '<S509>/DataStoreWrite8' */
    TRAR_ac_DW.VeTRAR_t_kT_Te_DS = TRAR_ac_B.Merge3;

    /* Outputs for Atomic SubSystem: '<S4>/TRAC_EngArb' */
    /* Outputs for IfAction SubSystem: '<S22>/FastTorqueActive' incorporates:
     *  ActionPort: '<S324>/ActionPort'
     */
    /* Outputs for Atomic SubSystem: '<S509>/EdgeFalling' */
    /* If: '<S22>/If' incorporates:
     *  Logic: '<S379>/Logical3'
     *  Logic: '<S519>/OR1'
     */
    rtb_Comparison3_a = !VeTRAC_b_FastTrqLatched;

    /* End of Outputs for SubSystem: '<S22>/FastTorqueActive' */
    /* End of Outputs for SubSystem: '<S4>/TRAC_EngArb' */

    /* Logic: '<S519>/AND' incorporates:
     *  Logic: '<S519>/OR1'
     *  UnitDelay: '<S519>/UnitDelay'
     */
    rtb_AND_nu = (rtb_Comparison3_a && (TRAR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S519>/UnitDelay' */
    TRAR_ac_DW.UnitDelay_DSTATE_l = VeTRAC_b_FastTrqLatched;

    /* End of Outputs for SubSystem: '<S509>/EdgeFalling' */

    /* UnitDelay: '<S4>/UnitDelay4' */
    rtb_UnitDelay4 = TRAR_ac_DW.UnitDelay4_DSTATE;

    /* Outputs for Atomic SubSystem: '<S509>/EdgeRising' */
    /* Logic: '<S520>/OR1' incorporates:
     *  UnitDelay: '<S520>/UnitDelay'
     */
    rtb_Logical1_p2 = !TRAR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S520>/UnitDelay' */
    TRAR_ac_DW.UnitDelay_DSTATE_b = VeTRAC_b_FastTrqLatched;

    /* End of Outputs for SubSystem: '<S509>/EdgeRising' */

    /* Switch: '<S25>/Switch2' */
    if (rtb_NotEqual_cp)
    {
        /* Switch: '<S25>/Switch2' */
        rtb_Sum_b = rtb_Summation7;
    }

    /* End of Switch: '<S25>/Switch2' */

    /* Switch: '<S509>/Switch5' incorporates:
     *  Constant: '<S512>/Calib'
     *  Logic: '<S509>/Logical'
     */
    if ((KeTRAR_b_AllowFastTrqBypass) && (VeTRAR_b_FastTorqueReqMet))
    {
        /* Switch: '<S509>/Switch5' */
        VeTRAR_M_OptTeFltdAftBypass = VeTRAC_M_OptTe;
    }
    else
    {
        /* Product: '<S509>/Multiplication' incorporates:
         *  Constant: '<S525>/Calib'
         *  Constant: '<S526>/Calib'
         */
        rtb_Summation7 = KeTRAR_dM_TiDotMaxLim * HeTRAR_t_MedTEB_dT;

        /* Product: '<S509>/Multiplication5' incorporates:
         *  Constant: '<S525>/Calib'
         *  Constant: '<S527>/Calib'
         */
        rtb_Summation1 = HeTRAR_t_MedTEB_dT * KeTRAR_dM_TiDotMinLim;

        /* Outputs for Atomic SubSystem: '<S509>/Limiter' */
        /* Switch: '<S528>/Switch1' incorporates:
         *  RelationalOperator: '<S528>/RelationalOperator'
         */
        if (rtb_Summation7 >= VeTRAR_dM_Te)
        {
            /* Switch: '<S528>/Switch1' */
            rtb_Summation7 = VeTRAR_dM_Te;
        }

        /* End of Switch: '<S528>/Switch1' */

        /* Switch: '<S528>/Switch' incorporates:
         *  RelationalOperator: '<S528>/RelationalOperator1'
         */
        if (rtb_Summation7 > rtb_Summation1)
        {
            rtb_Summation1 = rtb_Summation7;
        }

        /* End of Switch: '<S528>/Switch' */
        /* End of Outputs for SubSystem: '<S509>/Limiter' */

        /* Switch: '<S509>/Switch5' incorporates:
         *  Sum: '<S509>/Summation1'
         */
        VeTRAR_M_OptTeFltdAftBypass = rtb_Summation1 + VeTRAR_M_OptTeOld;
    }

    /* End of Switch: '<S509>/Switch5' */

    /* Switch: '<S509>/Switch4' incorporates:
     *  UnitDelay: '<S509>/UnitDelay'
     */
    if (TRAR_ac_DW.UnitDelay_DSTATE_k)
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Logic: '<S509>/Logical2'
         *  Logic: '<S520>/AND'
         *  RelationalOperator: '<S509>/Comparison2'
         *  RelationalOperator: '<S509>/Comparison3'
         *  Switch: '<S509>/Switch'
         *  Switch: '<S509>/Switch6'
         *  Switch: '<S509>/Switch8'
         */
        if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg)
        {
            /* Switch: '<S509>/Switch4' incorporates:
             *  Switch: '<S509>/Switch1'
             */
            VeTRAC_M_OptTe = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e;
        }
        else if (rtb_AND_nu)
        {
            /* Switch: '<S509>/Switch6' incorporates:
             *  Switch: '<S509>/Switch4'
             *  UnitDelay: '<S4>/UnitDelay1'
             */
            VeTRAC_M_OptTe = TRAR_ac_DW.UnitDelay1_DSTATE;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S509>/EdgeRising' */
            if ((VeTRAC_b_FastTrqLatched) && rtb_Logical1_p2)
            {
                /* Switch: '<S509>/Switch3' incorporates:
                 *  Constant: '<S521>/Constant'
                 *  Constant: '<S522>/Constant'
                 *  Logic: '<S509>/Logical1'
                 *  RelationalOperator: '<S509>/Comparison1'
                 *  RelationalOperator: '<S509>/Comparison4'
                 *  Switch: '<S509>/Switch'
                 *  Switch: '<S509>/Switch6'
                 *  UnitDelay: '<S4>/UnitDelay4'
                 *  UnitDelay: '<S509>/UnitDelay1'
                 */
                if ((CeTRAR_e_TorqueMode == ((uint32)
                        TRAR_ac_DW.UnitDelay4_DSTATE)) && (((uint32)
                        TRAR_ac_DW.UnitDelay1_DSTATE_oy) == CeTRAR_e_SpeedMode))
                {
                    /* Switch: '<S509>/Switch4' incorporates:
                     *  Switch: '<S509>/Switch'
                     *  Switch: '<S509>/Switch6'
                     */
                    VeTRAC_M_OptTe =
                        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b;
                }
                else
                {
                    /* Switch: '<S509>/Switch4' incorporates:
                     *  Switch: '<S509>/Switch'
                     *  Switch: '<S509>/Switch6'
                     *  UnitDelay: '<S4>/UnitDelay3'
                     */
                    VeTRAC_M_OptTe = TRAR_ac_DW.UnitDelay3_DSTATE;
                }

                /* End of Switch: '<S509>/Switch3' */
            }
            else
            {
                if ((VeTRAC_M_OptTe >= rtb_Sum_b) || (rtb_Sum_b <=
                        VeTRAR_M_OptTeFltdAftBypass))
                {
                    /* Switch: '<S509>/Switch4' incorporates:
                     *  Switch: '<S509>/Switch'
                     *  Switch: '<S509>/Switch6'
                     *  Switch: '<S509>/Switch8'
                     */
                    VeTRAC_M_OptTe = VeTRAR_M_OptTeFltdAftBypass;
                }
            }

            /* End of Outputs for SubSystem: '<S509>/EdgeRising' */
        }

        /* End of Switch: '<S509>/Switch1' */
    }

    /* End of Switch: '<S509>/Switch4' */

    /* Switch: '<S509>/Switch7' */
    if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fv)
    {
        /* Switch: '<S509>/Switch7' incorporates:
         *  MinMax: '<S509>/MinMax1'
         */
        VeTRAC_M_OptTe = fminf(VeTRAC_M_OptTe,
                               TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_io);
    }

    /* End of Switch: '<S509>/Switch7' */

    /* DataStoreWrite: '<S509>/DataStoreWrite9' */
    TRAR_ac_DW.VeTRAC_M_OptTe_DS = VeTRAC_M_OptTe;

    /* Switch: '<S25>/Switch1' incorporates:
     *  Sum: '<S24>/Sum1'
     */
    rtb_Summation11 = VeTRAC_M_OptTeArb - VeTRAC_M_OptTe;

    /* Sum: '<S24>/Sum2' incorporates:
     *  UnitDelay: '<S24>/UnitDelay2'
     */
    rtb_Summation7 = TRAR_ac_DW.UnitDelay2_DSTATE - VeTRAR_M_OptTeOld;

    /* Signum: '<S24>/Signum' */
    if (rtb_Summation11 < 0.0F)
    {
        rtb_Summation1 = -1.0F;
    }
    else if (rtb_Summation11 > 0.0F)
    {
        rtb_Summation1 = 1.0F;
    }
    else
    {
        rtb_Summation1 = rtb_Summation11;
    }

    /* End of Signum: '<S24>/Signum' */

    /* Signum: '<S24>/Signum1' */
    if (rtb_Summation7 < 0.0F)
    {
        rtb_Summation7 = -1.0F;
    }
    else
    {
        if (rtb_Summation7 > 0.0F)
        {
            rtb_Summation7 = 1.0F;
        }
    }

    /* End of Signum: '<S24>/Signum1' */

    /* Logic: '<S24>/Logical7' incorporates:
     *  Abs: '<S24>/Abs'
     *  Constant: '<S502>/Calib'
     *  Logic: '<S24>/Logical6'
     *  RelationalOperator: '<S24>/Comparison16'
     *  RelationalOperator: '<S24>/Comparison17'
     *  RelationalOperator: '<S24>/Comparison18'
     *  UnitDelay: '<S24>/UnitDelay1'
     *  UnitDelay: '<S24>/UnitDelay3'
     */
    TRAR_ac_DW.UnitDelay1_DSTATE_c = ((VeTRAC_e_DsrdEngState ==
        TRAR_ac_DW.UnitDelay3_DSTATE_ew) && ((fabsf(rtb_Summation11) <=
        KeTRAR_M_Delta) || (rtb_Summation1 != rtb_Summation7)));

    /* Gain: '<S19>/Gain' */
    VeTRAC_b_MDSEnbl = TRAR_ac_B.DOD_enbl;

    /* Switch: '<S51>/Switch1' incorporates:
     *  UnitDelay: '<S51>/UnitDelay2'
     */
    if (!VeTRAC_b_FastTrqLatched)
    {
        TRAR_ac_DW.UnitDelay2_DSTATE_o = rtb_Switch4_ig;
    }

    /* End of Switch: '<S51>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S25>/Limiter2' */
    /* Switch: '<S560>/Switch1' incorporates:
     *  RelationalOperator: '<S560>/RelationalOperator'
     */
    if (rtb_Summation4 < rtb_Switch5)
    {
        /* Switch: '<S25>/Switch1' */
        rtb_Summation11 = rtb_Summation4;
    }
    else
    {
        /* Switch: '<S25>/Switch1' */
        rtb_Summation11 = rtb_Switch5;
    }

    /* End of Switch: '<S560>/Switch1' */

    /* Switch: '<S560>/Switch' incorporates:
     *  RelationalOperator: '<S560>/RelationalOperator1'
     */
    if (rtb_Summation11 <= TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ix)
    {
        rtb_Summation11 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ix;
    }

    /* End of Switch: '<S560>/Switch' */
    /* End of Outputs for SubSystem: '<S25>/Limiter2' */

    /* Sum: '<S25>/Summation16' */
    VeTRAR_M_TiPredictedFull = rtb_Summation11 +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Sum: '<S25>/Summation17' */
    rtb_Summation4 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ny +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* MinMax: '<S25>/MinMax6' incorporates:
     *  Product: '<S25>/Product2'
     *  Sum: '<S25>/Summation19'
     *  Sum: '<S25>/Summation20'
     */
    VeTRAC_M_TactTeMaxSlw_SprkAuth = fminf(rtb_Vector, ((rtb_Summation4 +
        VeTRAC_M_EngineLosses) * VeTRAC_r_MxSprkAuthGrdLmtd) -
        VeTRAC_M_EngineLosses);

    /* Sum: '<S25>/Summation21' */
    rtb_Switch5 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ei +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* Outputs for Atomic SubSystem: '<S4>/TRAC_EngArb' */
    /* Logic: '<S22>/Logical5' incorporates:
     *  RelationalOperator: '<S22>/Comparison6'
     */
#if Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S22>/EdgeFalling' */
    /* Logic: '<S22>/Logical5' incorporates:
     *  UnitDelay: '<S16>/UnitDelay3'
     */
    rtb_AND_nu = ((TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg) ||
                  (TRAR_ac_DW.UnitDelay3_DSTATE_a4));

    /* Logic: '<S320>/AND' incorporates:
     *  Logic: '<S320>/OR1'
     *  UnitDelay: '<S320>/UnitDelay'
     */
    rtb_AND_e = ((!rtb_AND_nu) && (TRAR_ac_DW.UnitDelay_DSTATE_jh));

    /* Update for UnitDelay: '<S320>/UnitDelay' */
    TRAR_ac_DW.UnitDelay_DSTATE_jh = rtb_AND_nu;

    /* RelationalOperator: '<S22>/Comparison6' incorporates:
     *  Constant: '<S323>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     */
    rtb_AND_nu = (((uint32)TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
                  CeTINR_e_TrqInc);

    /* Logic: '<S322>/AND' incorporates:
     *  Logic: '<S322>/OR1'
     *  UnitDelay: '<S322>/UnitDelay'
     */
    rtb_AND_ah = (rtb_AND_nu && (!TRAR_ac_DW.UnitDelay_DSTATE_je));

    /* Update for UnitDelay: '<S322>/UnitDelay' */
    TRAR_ac_DW.UnitDelay_DSTATE_je = rtb_AND_nu;

    /* End of Outputs for SubSystem: '<S22>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S22>/EdgeRising1' */
#endif

    /* End of Logic: '<S22>/Logical5' */

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising' */
    /* Logic: '<S321>/AND' incorporates:
     *  Logic: '<S321>/OR1'
     *  UnitDelay: '<S16>/UnitDelay3'
     *  UnitDelay: '<S321>/UnitDelay'
     */
    rtb_Logical1_p2 = ((TRAR_ac_DW.UnitDelay3_DSTATE_a4) &&
                       (!TRAR_ac_DW.UnitDelay_DSTATE_bn));

    /* Update for UnitDelay: '<S321>/UnitDelay' incorporates:
     *  UnitDelay: '<S16>/UnitDelay3'
     */
    TRAR_ac_DW.UnitDelay_DSTATE_bn = TRAR_ac_DW.UnitDelay3_DSTATE_a4;

    /* End of Outputs for SubSystem: '<S22>/EdgeRising' */

    /* If: '<S22>/If' incorporates:
     *  Constant: '<S325>/Calib'
     *  MinMax: '<S481>/Maximum4'
     *  MinMax: '<S481>/MinMax2'
     *  MinMax: '<S482>/Maximum4'
     *  MinMax: '<S482>/MinMax2'
     *  Product: '<S490>/Multiplication'
     *  Product: '<S490>/Multiplication3'
     *  RelationalOperator: '<S481>/Comparison5'
     *  Sum: '<S490>/Subtraction'
     *  Sum: '<S490>/Summation'
     *  Switch: '<S481>/Switch2'
     *  Switch: '<S481>/Switch3'
     *  Switch: '<S490>/Switch2'
     *  Switch: '<S490>/Switch3'
     *  UnitDelay: '<S16>/UnitDelay3'
     *  UnitDelay: '<S481>/UnitDelay3'
     *  UnitDelay: '<S490>/UnitDelay'
     *  UnitDelay: '<S490>/UnitDelay1'
     *  UnitDelay: '<S490>/UnitDelay3'
     */
    if (KeTRAR_b_OvrdEngTorqCmnd)
    {
        /* Outputs for IfAction SubSystem: '<S22>/ManualOverride' incorporates:
         *  ActionPort: '<S327>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S327>/Limiter' */
        /* Switch: '<S472>/Switch1' incorporates:
         *  Constant: '<S469>/Calib'
         *  RelationalOperator: '<S472>/RelationalOperator'
         */
        if (rtb_Summation5 < KeTRAR_M_OvrdEngTorqImmedCmndValue)
        {
            /* Switch: '<S473>/Switch1' */
            TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Summation5;
        }
        else
        {
            /* Switch: '<S473>/Switch1' */
            TRAR_ac_DW.UnitDelay1_DSTATE = KeTRAR_M_OvrdEngTorqImmedCmndValue;
        }

        /* End of Switch: '<S472>/Switch1' */

        /* Switch: '<S472>/Switch' incorporates:
         *  RelationalOperator: '<S472>/RelationalOperator1'
         *  UnitDelay: '<S4>/UnitDelay3'
         */
        if (TRAR_ac_DW.UnitDelay1_DSTATE > rtb_Merge)
        {
            TRAR_ac_DW.UnitDelay3_DSTATE = TRAR_ac_DW.UnitDelay1_DSTATE;
        }
        else
        {
            TRAR_ac_DW.UnitDelay3_DSTATE = rtb_Merge;
        }

        /* End of Switch: '<S472>/Switch' */
        /* End of Outputs for SubSystem: '<S327>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S327>/Limiter1' */
        /* Switch: '<S473>/Switch1' incorporates:
         *  Constant: '<S470>/Calib'
         *  RelationalOperator: '<S473>/RelationalOperator'
         */
        if (rtb_Summation5 < KeTRAR_M_OvrdEngTorqCmndValue)
        {
            /* Switch: '<S473>/Switch1' */
            TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Summation5;
        }
        else
        {
            /* Switch: '<S473>/Switch1' */
            TRAR_ac_DW.UnitDelay1_DSTATE = KeTRAR_M_OvrdEngTorqCmndValue;
        }

        /* End of Switch: '<S473>/Switch1' */

        /* Switch: '<S473>/Switch' incorporates:
         *  RelationalOperator: '<S473>/RelationalOperator1'
         *  UnitDelay: '<S4>/UnitDelay1'
         */
        if (TRAR_ac_DW.UnitDelay1_DSTATE <= rtb_Merge)
        {
            TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Merge;
        }

        /* End of Switch: '<S473>/Switch' */
        /* End of Outputs for SubSystem: '<S327>/Limiter1' */

        /* DataTypeConversion: '<S327>/DataTypeConversion' incorporates:
         *  Constant: '<S471>/Calib'
         *  UnitDelay: '<S4>/UnitDelay'
         */
        rtb_Switch4_ig = (sint16)KeTRAR_e_OvrdEngRespTypeValue;

        /* Outport: '<Root>/VeTRAR_b_EngCylDeacReq' incorporates:
         *  Constant: '<S327>/FALSEConstant'
         *  SignalConversion generated from: '<S327>/EngCylDeacReq'
         */
        (void)Rte_Write_VeTRAR_b_EngCylDeacReq_Value(false);

        /* SignalConversion generated from: '<S327>/EngDFCOReq' incorporates:
         *  Constant: '<S327>/FALSEConstant1'
         *  UnitDelay: '<S4>/UnitDelay2'
         */
        TRAR_ac_DW.UnitDelay2_DSTATE_l1 = false;

        /* Merge: '<S22>/Merge5' incorporates:
         *  Constant: '<S466>/Constant'
         *  SignalConversion generated from: '<S327>/EngArbState'
         */
        VeTRAC_e_EngArbState = CeTRAR_e_ManualOverride;

        /* Outport: '<Root>/VeTRAR_M_EngReserveTrqCmnd' incorporates:
         *  Constant: '<S468>/Calib'
         *  SignalConversion generated from: '<S327>/EngReserveTrqCmnd'
         */
        (void)Rte_Write_VeTRAR_M_EngReserveTrqCmnd_Value
            (KeTRAR_M_EngReserveTrqCmndOvrd);

        /* Merge: '<S22>/Merge7' incorporates:
         *  DataTypeConversion: '<S467>/DataTypeConversion'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        VeTRAC_e_EngCntrlMode =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hp;

        /* Merge: '<S22>/Merge8' incorporates:
         *  Constant: '<S327>/FALSE Constant2'
         *  Gain: '<S475>/Gain'
         */
        rtb_AND_ah = false;

        /* End of Outputs for SubSystem: '<S22>/ManualOverride' */
    }
    else if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg)
    {
        /* Outputs for IfAction SubSystem: '<S22>/ESSR' incorporates:
         *  ActionPort: '<S319>/ActionPort'
         */
        /* Gain: '<S355>/Gain' incorporates:
         *  UnitDelay: '<S4>/UnitDelay3'
         */
        TRAR_ac_DW.UnitDelay3_DSTATE =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e;

        /* Gain: '<S357>/Gain' incorporates:
         *  UnitDelay: '<S4>/UnitDelay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m;

        /* DataTypeConversion: '<S319>/DataTypeConversion1' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        rtb_Switch4_d = (sint16)
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ph;

        /* If: '<S319>/If1' incorporates:
         *  Constant: '<S352>/Calib'
         *  DataTypeConversion: '<S319>/DataTypeConversion2'
         *  Selector: '<S319>/Selector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        if (KaTRAR_b_RespTypChk_StrtStpSt
                [(TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_li)])
        {
            /* Outputs for IfAction SubSystem: '<S319>/IfActionSubsystem2' incorporates:
             *  ActionPort: '<S349>/ActionPort'
             */
            /* If: '<S349>/If' incorporates:
             *  UnitDelay: '<S4>/UnitDelay'
             *  UnitDelay: '<S51>/UnitDelay2'
             */
            if (TRAR_ac_DW.UnitDelay2_DSTATE_o > rtb_Switch4_d)
            {
                /* Outputs for IfAction SubSystem: '<S349>/IfActionSubsystem1' incorporates:
                 *  ActionPort: '<S360>/ActionPort'
                 */
                TRAR_ac_IfActionSubsystem1(TRAR_ac_DW.UnitDelay2_DSTATE_o,
                    &rtb_Switch4_ig);

                /* End of Outputs for SubSystem: '<S349>/IfActionSubsystem1' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S349>/IfActionSubsystem' incorporates:
                 *  ActionPort: '<S359>/ActionPort'
                 */
                TRAR_ac_IfActionSubsystem1(rtb_Switch4_d, &rtb_Switch4_ig);

                /* End of Outputs for SubSystem: '<S349>/IfActionSubsystem' */
            }

            /* End of If: '<S349>/If' */
            /* End of Outputs for SubSystem: '<S319>/IfActionSubsystem2' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S319>/IfActionSubsystem3' incorporates:
             *  ActionPort: '<S350>/ActionPort'
             */
            /* Gain: '<S363>/Gain' incorporates:
             *  UnitDelay: '<S4>/UnitDelay'
             */
            rtb_Switch4_ig = rtb_Switch4_d;

            /* End of Outputs for SubSystem: '<S319>/IfActionSubsystem3' */
        }

        /* End of If: '<S319>/If1' */

        /* Outport: '<Root>/VeTRAR_b_EngCylDeacReq' incorporates:
         *  Constant: '<S319>/FALSEConstant'
         *  Gain: '<S358>/Gain'
         */
        (void)Rte_Write_VeTRAR_b_EngCylDeacReq_Value(false);

        /* Switch: '<S351>/Switch1' incorporates:
         *  Logic: '<S319>/AND'
         *  UnitDelay: '<S4>/UnitDelay2'
         */
        TRAR_ac_DW.UnitDelay2_DSTATE_l1 = (((TRAR_ac_DW.UnitDelay2_DSTATE_l1) &&
            (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gy)) &&
            (TRAR_ac_DW.UnitDelay2_DSTATE_l1));

        /* Merge: '<S22>/Merge5' incorporates:
         *  Constant: '<S347>/Constant'
         *  SignalConversion generated from: '<S319>/EngArbState'
         */
        VeTRAC_e_EngArbState = CeTRAR_e_ESSR;

        /* Outport: '<Root>/VeTRAR_M_EngReserveTrqCmnd' incorporates:
         *  Gain: '<S356>/Gain'
         */
        (void)Rte_Write_VeTRAR_M_EngReserveTrqCmnd_Value
            (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_en);

        /* Merge: '<S22>/Merge7' incorporates:
         *  DataTypeConversion: '<S348>/DataTypeConversion'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        VeTRAC_e_EngCntrlMode =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hp;

        /* Merge: '<S22>/Merge8' incorporates:
         *  Constant: '<S319>/FALSE Constant2'
         *  Gain: '<S354>/Gain'
         */
        rtb_AND_ah = false;

        /* End of Outputs for SubSystem: '<S22>/ESSR' */
    }
    else if (TRAR_ac_DW.UnitDelay3_DSTATE_a4)
    {
        /* Outputs for IfAction SubSystem: '<S22>/FastTorqueActive' incorporates:
         *  ActionPort: '<S324>/ActionPort'
         */
        /* UnitDelay: '<S381>/UnitDelay3' incorporates:
         *  RelationalOperator: '<S324>/Comparison2'
         *  UnitDelay: '<S51>/UnitDelay2'
         */
        rtb_AND_e = (TRAR_ac_DW.UnitDelay2_DSTATE_o == 2);

        /* Outputs for Atomic SubSystem: '<S409>/BitSelector18' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector1' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector2' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector3' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector4' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector5' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector6' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector7' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector8' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector9' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector10' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector11' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector12' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector13' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector14' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector15' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector16' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector17' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector19' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector20' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector21' */
        /* Outputs for Atomic SubSystem: '<S409>/BitSelector22' */
        /* Logic: '<S409>/Logical2' incorporates:
         *  Constant: '<S414>/Constant Value'
         *  Constant: '<S415>/Constant Value'
         *  Constant: '<S416>/Constant Value'
         *  Constant: '<S417>/Constant Value'
         *  Constant: '<S418>/Constant Value'
         *  Constant: '<S419>/Constant Value'
         *  Constant: '<S420>/Constant Value'
         *  Constant: '<S421>/Constant Value'
         *  Constant: '<S422>/Constant Value'
         *  Constant: '<S423>/Constant Value'
         *  Constant: '<S424>/Constant Value'
         *  Constant: '<S425>/Constant Value'
         *  Constant: '<S426>/Constant Value'
         *  Constant: '<S427>/Constant Value'
         *  Constant: '<S428>/Constant Value'
         *  Constant: '<S429>/Constant Value'
         *  Constant: '<S430>/Constant Value'
         *  Constant: '<S431>/Constant Value'
         *  Constant: '<S432>/Constant Value'
         *  Constant: '<S433>/Constant Value'
         *  Constant: '<S434>/Constant Value'
         *  Constant: '<S435>/Constant Value'
         *  Constant: '<S436>/Calib'
         *  Constant: '<S437>/Calib'
         *  Constant: '<S438>/Calib'
         *  Constant: '<S439>/Calib'
         *  Constant: '<S440>/Calib'
         *  Constant: '<S441>/Calib'
         *  DataStoreRead: '<S409>/DataStoreRead1'
         *  DataStoreRead: '<S409>/DataStoreRead10'
         *  DataStoreRead: '<S409>/DataStoreRead11'
         *  DataStoreRead: '<S409>/DataStoreRead12'
         *  DataStoreRead: '<S409>/DataStoreRead13'
         *  DataStoreRead: '<S409>/DataStoreRead14'
         *  DataStoreRead: '<S409>/DataStoreRead15'
         *  DataStoreRead: '<S409>/DataStoreRead16'
         *  DataStoreRead: '<S409>/DataStoreRead17'
         *  DataStoreRead: '<S409>/DataStoreRead18'
         *  DataStoreRead: '<S409>/DataStoreRead19'
         *  DataStoreRead: '<S409>/DataStoreRead2'
         *  DataStoreRead: '<S409>/DataStoreRead20'
         *  DataStoreRead: '<S409>/DataStoreRead21'
         *  DataStoreRead: '<S409>/DataStoreRead22'
         *  DataStoreRead: '<S409>/DataStoreRead3'
         *  DataStoreRead: '<S409>/DataStoreRead4'
         *  DataStoreRead: '<S409>/DataStoreRead5'
         *  DataStoreRead: '<S409>/DataStoreRead6'
         *  DataStoreRead: '<S409>/DataStoreRead7'
         *  DataStoreRead: '<S409>/DataStoreRead8'
         *  DataStoreRead: '<S409>/DataStoreRead9'
         *  Logic: '<S409>/Logical1'
         *  Logic: '<S409>/Logical10'
         *  Logic: '<S409>/Logical11'
         *  Logic: '<S409>/Logical12'
         *  Logic: '<S409>/Logical13'
         *  Logic: '<S409>/Logical14'
         *  Logic: '<S409>/Logical15'
         *  Logic: '<S409>/Logical16'
         *  Logic: '<S409>/Logical17'
         *  Logic: '<S409>/Logical18'
         *  Logic: '<S409>/Logical19'
         *  Logic: '<S409>/Logical3'
         *  Logic: '<S409>/Logical4'
         *  Logic: '<S409>/Logical5'
         *  Logic: '<S409>/Logical6'
         *  Logic: '<S409>/Logical7'
         *  Logic: '<S409>/Logical8'
         *  Logic: '<S409>/Logical9'
         *  RelationalOperator: '<S414>/Greater  Than'
         *  RelationalOperator: '<S415>/Greater  Than'
         *  RelationalOperator: '<S416>/Greater  Than'
         *  RelationalOperator: '<S417>/Greater  Than'
         *  RelationalOperator: '<S418>/Greater  Than'
         *  RelationalOperator: '<S419>/Greater  Than'
         *  RelationalOperator: '<S420>/Greater  Than'
         *  RelationalOperator: '<S421>/Greater  Than'
         *  RelationalOperator: '<S422>/Greater  Than'
         *  RelationalOperator: '<S423>/Greater  Than'
         *  RelationalOperator: '<S424>/Greater  Than'
         *  RelationalOperator: '<S425>/Greater  Than'
         *  RelationalOperator: '<S426>/Greater  Than'
         *  RelationalOperator: '<S427>/Greater  Than'
         *  RelationalOperator: '<S428>/Greater  Than'
         *  RelationalOperator: '<S429>/Greater  Than'
         *  RelationalOperator: '<S430>/Greater  Than'
         *  RelationalOperator: '<S431>/Greater  Than'
         *  RelationalOperator: '<S432>/Greater  Than'
         *  RelationalOperator: '<S433>/Greater  Than'
         *  RelationalOperator: '<S434>/Greater  Than'
         *  RelationalOperator: '<S435>/Greater  Than'
         *  S-Function (sfix_bitop): '<S414>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S415>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S416>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S417>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S418>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S419>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S420>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S421>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S422>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S423>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S424>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S425>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S426>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S427>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S428>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S429>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S430>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S431>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S432>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S433>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S434>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S435>/Bitwise Logical Operator'
         */
        VeTRAC_b_UseOptTe4FstPth = ((((((((((((VeTRAC_b_FastTrqLatched) ||
            (((((sint32)VeTRAR_d_MaxRngRspType_DS) & 1) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 1) > 0))) || (((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 8) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 8) > 0))) || ((((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 16) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 16) > 0)) &&
            (KeTRAR_b_UseOptTe4ESPEvent))) || ((KeTRAR_b_UseOptTe4ESPEvent) &&
            (((((sint32)VeTRAR_d_MaxRngRspType_DS) & 32) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 32) > 0)))) || ((((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 64) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 64) > 0)) &&
            (KeTRAR_b_UseOptTe4ATRRToClipped))) || ((((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 128) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 128) > 0)) &&
            (KeTRAR_b_UseOptTe4DialFastPath))) || ((((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 256) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 256) > 0)) &&
            (KeTRAR_b_UseOptTe4TactFastPath))) || (((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 1024) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 1024) > 0))) || (((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 2048) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 2048) > 0))) || ((((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 8192) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 8192) > 0)) &&
            (KeTRAR_b_UseOptTe4INCFstPth))) || ((((((sint32)
            VeTRAR_d_MaxRngRspType_DS) & 4096) > 0) || ((((sint32)
            VeTRAR_d_PleasibltyLmtdRspType_DS) & 4096) > 0)) &&
            (KeTRAR_b_UseOptTe4INCNrmCse)));

        /* End of Outputs for SubSystem: '<S409>/BitSelector22' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector21' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector20' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector19' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector17' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector16' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector15' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector14' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector13' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector12' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector11' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector10' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector9' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector8' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector7' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector6' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector5' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector4' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector3' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector2' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector1' */
        /* End of Outputs for SubSystem: '<S409>/BitSelector18' */

        /* Outputs for Atomic SubSystem: '<S379>/EdgeBi' */
        /* UnitDelay: '<S457>/UnitDelay' incorporates:
         *  UnitDelay: '<S408>/Unit Delay'
         */
        rtb_UnitDelay_a = TRAR_ac_DW.UnitDelay_DSTATE_n;

        /* Update for UnitDelay: '<S408>/Unit Delay' */
        TRAR_ac_DW.UnitDelay_DSTATE_n = VeTRAC_b_UseOptTe4FstPth;

        /* End of Outputs for SubSystem: '<S379>/EdgeBi' */

        /* Outputs for IfAction SubSystem: '<S369>/DistrbtdSEMCntrlStrat_INC' incorporates:
         *  ActionPort: '<S397>/ActionPort'
         */
        /* If: '<S369>/If2' incorporates:
         *  Logic: '<S379>/Logical1'
         *  Logic: '<S397>/Logical5'
         *  Logic: '<S407>/Logical2'
         *  Switch: '<S407>/Switch3'
         */
        rtb_AND_nu = !rtb_Logical1_p2;

        /* End of Outputs for SubSystem: '<S369>/DistrbtdSEMCntrlStrat_INC' */

        /* Outputs for Atomic SubSystem: '<S379>/EdgeBi' */
        /* Switch: '<S407>/Switch2' incorporates:
         *  Logic: '<S379>/Logical1'
         *  Logic: '<S379>/Logical2'
         *  RelationalOperator: '<S408>/Not Equal'
         *  Switch: '<S379>/Switch10'
         *  Switch: '<S407>/Switch3'
         *  UnitDelay: '<S407>/UnitDelay'
         */
        if ((rtb_Comparison3_a && (VeTRAC_b_UseOptTe4FstPth != rtb_UnitDelay_a))
            && rtb_AND_nu)
        {
            TRAR_ac_DW.UnitDelay_DSTATE_p = VeTRAC_M_TeImmedPostFstPthBlnd;

            /* Switch: '<S407>/Switch1' incorporates:
             *  Constant: '<S407>/ConstantValue4'
             *  UnitDelay: '<S407>/UnitDelay'
             *  UnitDelay: '<S407>/UnitDelay3'
             */
            TRAR_ac_DW.UnitDelay3_DSTATE_du = 0.0F;
        }
        else
        {
            if (VeTRAC_b_UseOptTe4FstPth)
            {
                /* Switch: '<S379>/Switch10' incorporates:
                 *  Constant: '<S411>/Calib'
                 */
                rtb_Summation4 = KeTRAR_t_Filter2OptTe;
            }
            else
            {
                /* Switch: '<S379>/Switch10' incorporates:
                 *  Constant: '<S412>/Calib'
                 */
                rtb_Summation4 = KeTRAR_t_Filter2TactTeMax;
            }

            /* MinMax: '<S407>/Maximum' incorporates:
             *  Constant: '<S410>/Calib'
             */
            rtb_Summation4 = fmaxf(HeTRAR_t_MedTEB_dT, rtb_Summation4);

            /* Outputs for Atomic SubSystem: '<S407>/ProtectedDivision' */
            /* Switch: '<S413>/Switch1' incorporates:
             *  Constant: '<S410>/Calib'
             *  Constant: '<S413>/ConstantValue'
             *  Constant: '<S413>/ConstantValue1'
             *  Constant: '<S413>/ConstantValue2'
             *  Constant: '<S413>/ConstantValue3'
             *  Logic: '<S413>/AND'
             *  RelationalOperator: '<S413>/GreaterThanorEqual'
             *  RelationalOperator: '<S413>/GreaterThanorEqual1'
             *  RelationalOperator: '<S413>/NotEqual'
             *  RelationalOperator: '<S413>/NotEqual1'
             *  Switch: '<S413>/Switch2'
             *  Switch: '<S413>/Switch3'
             */
            if ((HeTRAR_t_MedTEB_dT != 0.0F) && (rtb_Summation4 != 0.0F))
            {
                /* Switch: '<S413>/Switch1' incorporates:
                 *  Product: '<S413>/Division'
                 */
                rtb_Summation4 = HeTRAR_t_MedTEB_dT / rtb_Summation4;
            }
            else if (HeTRAR_t_MedTEB_dT > 0.0F)
            {
                /* Switch: '<S413>/Switch2' incorporates:
                 *  Constant: '<S413>/MAXFLOAT'
                 *  Switch: '<S413>/Switch1'
                 */
                rtb_Summation4 = 3.402823466E+38F;
            }
            else if (HeTRAR_t_MedTEB_dT < 0.0F)
            {
                /* Switch: '<S413>/Switch3' incorporates:
                 *  Constant: '<S413>/MINFLOAT'
                 *  Switch: '<S413>/Switch1'
                 *  Switch: '<S413>/Switch2'
                 */
                rtb_Summation4 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S413>/Switch1' incorporates:
                 *  Constant: '<S413>/ConstantValue4'
                 *  Switch: '<S413>/Switch2'
                 *  Switch: '<S413>/Switch3'
                 */
                rtb_Summation4 = 0.0F;
            }

            /* End of Switch: '<S413>/Switch1' */
            /* End of Outputs for SubSystem: '<S407>/ProtectedDivision' */

            /* Switch: '<S407>/Switch1' incorporates:
             *  Constant: '<S407>/ConstantValue2'
             *  Constant: '<S407>/ConstantValue3'
             *  Logic: '<S407>/Logical'
             *  Logic: '<S407>/Logical2'
             *  MinMax: '<S407>/MinMax'
             *  Sum: '<S407>/Summation1'
             *  UnitDelay: '<S407>/UnitDelay1'
             *  UnitDelay: '<S407>/UnitDelay3'
             */
            if ((!TRAR_ac_DW.UnitDelay1_DSTATE_o) || (!rtb_AND_nu))
            {
                TRAR_ac_DW.UnitDelay3_DSTATE_du = 1.0F;
            }

            TRAR_ac_DW.UnitDelay3_DSTATE_du = fminf
                (TRAR_ac_DW.UnitDelay3_DSTATE_du + rtb_Summation4, 1.0F);
        }

        /* End of Switch: '<S407>/Switch2' */
        /* End of Outputs for SubSystem: '<S379>/EdgeBi' */

        /* MinMax: '<S324>/MinMax1' incorporates:
         *  MinMax: '<S324>/Maximum1'
         */
        VeTRAC_M_TeImmedPreFstPthBlnd = fminf(rtb_Summation5, fmaxf
            (VeTRAC_M_OptTe, rtb_Merge));

        /* Switch: '<S379>/Switch9' */
        if (VeTRAC_b_UseOptTe4FstPth)
        {
            rtb_Summation4 = VeTRAC_M_TeImmedPreFstPthBlnd;
        }
        else
        {
            rtb_Summation4 = rtb_Summation5;
        }

        /* End of Switch: '<S379>/Switch9' */

        /* Sum: '<S407>/Summation' incorporates:
         *  Constant: '<S407>/ConstantValue'
         *  Product: '<S407>/Multiplication'
         *  Product: '<S407>/Multiplication3'
         *  Sum: '<S407>/Subtraction'
         *  UnitDelay: '<S407>/UnitDelay'
         *  UnitDelay: '<S407>/UnitDelay3'
         */
        VeTRAC_M_TeImmedPostFstPthBlnd = ((1.0F -
            TRAR_ac_DW.UnitDelay3_DSTATE_du) * TRAR_ac_DW.UnitDelay_DSTATE_p) +
            (TRAR_ac_DW.UnitDelay3_DSTATE_du * rtb_Summation4);

        /* Switch: '<S324>/Switch' */
        if (rtb_AND_e)
        {
            /* Switch: '<S324>/Switch' incorporates:
             *  Constant: '<S387>/Calib'
             *  Sum: '<S324>/Sum1'
             */
            rtb_Summation4 = KeTRAR_M_FastTrqType2Active_Offset +
                VeTRAC_M_TeImmedPostFstPthBlnd;
        }
        else
        {
            /* Switch: '<S324>/Switch' */
            rtb_Summation4 = VeTRAC_M_TeImmedPostFstPthBlnd;
        }

        /* End of Switch: '<S324>/Switch' */

        /* If: '<S324>/If' incorporates:
         *  RelationalOperator: '<S324>/Comparison1'
         *  RelationalOperator: '<S324>/Comparison4'
         *  UnitDelay: '<S51>/UnitDelay2'
         */
        if (1 == TRAR_ac_DW.UnitDelay2_DSTATE_o)
        {
            /* Outputs for IfAction SubSystem: '<S324>/IfActionSubsystem3' incorporates:
             *  ActionPort: '<S384>/ActionPort'
             */
            /* Merge: '<S324>/Merge1' incorporates:
             *  Gain: '<S462>/Gain'
             */
            VeTRAR_e_EngTrRespTypebefHold = 1;

            /* If: '<S384>/If1' incorporates:
             *  Constant: '<S461>/Calib'
             *  Logic: '<S384>/Logical3'
             *  Logic: '<S384>/Logical4'
             */
            if ((!VeTRAC_b_UseRedSprkAuth) && (KeTRAR_b_MaxSprkAuthNomClip))
            {
                /* Outputs for IfAction SubSystem: '<S384>/if' incorporates:
                 *  ActionPort: '<S464>/ActionPort'
                 */
                /* Merge: '<S324>/Merge3' incorporates:
                 *  MinMax: '<S464>/Maximum1'
                 */
                TRAR_ac_B.Merge3_c = fmaxf(rtb_Summation4,
                    TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pm);

                /* End of Outputs for SubSystem: '<S384>/if' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S384>/else' incorporates:
                 *  ActionPort: '<S463>/ActionPort'
                 */
                /* Merge: '<S324>/Merge3' incorporates:
                 *  Inport: '<S463>/OptTeIn'
                 */
                TRAR_ac_B.Merge3_c = rtb_Summation4;

                /* End of Outputs for SubSystem: '<S384>/else' */
            }

            /* End of If: '<S384>/If1' */
            /* End of Outputs for SubSystem: '<S324>/IfActionSubsystem3' */
        }
        else if (TRAR_ac_DW.UnitDelay2_DSTATE_o == 3)
        {
            /* Outputs for IfAction SubSystem: '<S324>/IfActionSubsystem1' incorporates:
             *  ActionPort: '<S382>/ActionPort'
             */
            TRAR_ac_IfActionSubsystem1_g(TRAR_ac_ConstB.DTCBlk96, rtb_Summation4,
                (&(VeTRAR_e_EngTrRespTypebefHold)), &TRAR_ac_B.Merge3_c);

            /* End of Outputs for SubSystem: '<S324>/IfActionSubsystem1' */
        }
        else if (rtb_AND_e)
        {
            /* Outputs for IfAction SubSystem: '<S324>/IfActionSubsystem4' incorporates:
             *  ActionPort: '<S385>/ActionPort'
             */
            TRAR_ac_IfActionSubsystem1_g(TRAR_ac_ConstB.DTCBlk98, rtb_Summation4,
                (&(VeTRAR_e_EngTrRespTypebefHold)), &TRAR_ac_B.Merge3_c);

            /* End of Outputs for SubSystem: '<S324>/IfActionSubsystem4' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S324>/IfActionSubsystem2' incorporates:
             *  ActionPort: '<S383>/ActionPort'
             */
            TRAR_ac_IfActionSubsystem1_g(VeTRAR_e_EngTrRespTypebefHold,
                rtb_Summation4, (&(VeTRAR_e_EngTrRespTypebefHold)),
                &TRAR_ac_B.Merge3_c);

            /* End of Outputs for SubSystem: '<S324>/IfActionSubsystem2' */
        }

        /* End of If: '<S324>/If' */

        /* If: '<S324>/If1' */
        if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i3)
        {
            /* Outputs for IfAction SubSystem: '<S324>/AltMd' incorporates:
             *  ActionPort: '<S364>/ActionPort'
             */
            /* Sum: '<S364>/Summation2' incorporates:
             *  Constant: '<S364>/ConstantValue2'
             *  Constant: '<S395>/Calib'
             *  Gain: '<S364>/Ta2Ti'
             *  MinMax: '<S364>/MinMax6'
             *  Product: '<S364>/Product2'
             */
            rtb_Merge = fminf(TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p,
                              0.0F) * (-Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());

            /* Merge: '<S324>/Merge8' incorporates:
             *  MinMax: '<S364>/MinMax1'
             *  Sum: '<S364>/Summation16'
             */
            rtb_Summation4 = fminf(TRAR_ac_B.Merge3_c + rtb_Merge, rtb_Vector);

            /* Merge: '<S324>/Merge2' incorporates:
             *  MinMax: '<S364>/MinMax2'
             *  Sum: '<S364>/Summation1'
             */
            rtb_Summation7 = fminf(VeTRAR_M_TiPredictedFull + rtb_Merge,
                                   rtb_Vector);

            /* Sum: '<S364>/Summation2' */
            rtb_Merge += VeTRAR_M_TiPredicted;

            /* Merge: '<S324>/Merge4' incorporates:
             *  MinMax: '<S364>/MinMax3'
             */
            rtb_Merge = fminf(rtb_Merge, rtb_Vector);

            /* End of Outputs for SubSystem: '<S324>/AltMd' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S324>/AltMd1' incorporates:
             *  ActionPort: '<S365>/ActionPort'
             */
            /* Merge: '<S324>/Merge8' incorporates:
             *  Inport: '<S365>/OptTeClipped'
             */
            rtb_Summation4 = TRAR_ac_B.Merge3_c;

            /* Merge: '<S324>/Merge2' incorporates:
             *  Inport: '<S365>/TePrdt_FullSprk'
             */
            rtb_Summation7 = VeTRAR_M_TiPredictedFull;

            /* Merge: '<S324>/Merge4' incorporates:
             *  Inport: '<S365>/TePrdt_LmtdSprk'
             */
            rtb_Merge = VeTRAR_M_TiPredicted;

            /* End of Outputs for SubSystem: '<S324>/AltMd1' */
        }

        /* End of If: '<S324>/If1' */

        /* RelationalOperator: '<S380>/Comparison3' */
        rtb_AND_e = (VeTRAR_e_EngTrRespTypebefHold == 2);

        /* Outputs for Atomic SubSystem: '<S449>/EdgeRising' */
        /* Logic: '<S452>/AND' incorporates:
         *  Logic: '<S452>/OR1'
         *  UnitDelay: '<S452>/UnitDelay'
         */
        rtb_Comparison3_a = (rtb_AND_e && (!TRAR_ac_DW.UnitDelay_DSTATE_a));

        /* Update for UnitDelay: '<S452>/UnitDelay' */
        TRAR_ac_DW.UnitDelay_DSTATE_a = rtb_AND_e;

        /* End of Outputs for SubSystem: '<S449>/EdgeRising' */

        /* Switch: '<S449>/Switch1' incorporates:
         *  Constant: '<S442>/Calib'
         *  Constant: '<S449>/ConstantValue5'
         *  Logic: '<S380>/Logical'
         *  Logic: '<S380>/Logical2'
         *  Logic: '<S449>/AND1'
         *  RelationalOperator: '<S449>/GreaterThan2'
         *  Switch: '<S449>/Switch2'
         *  UnitDelay: '<S449>/UnitDelay'
         */
        if (rtb_Comparison3_a && (TRAR_ac_DW.UnitDelay_DSTATE_h <= 0.0F))
        {
            TRAR_ac_DW.UnitDelay_DSTATE_h = KeTRAR_t_HoldEngRespTypMaxRng;
        }
        else if (rtb_Logical1_p2 && (!rtb_AND_e))
        {
            /* Switch: '<S449>/Switch2' incorporates:
             *  Constant: '<S449>/ConstantValue3'
             */
            TRAR_ac_DW.UnitDelay_DSTATE_h = 0.0F;
        }
        else
        {
            /* Switch: '<S449>/Switch2' incorporates:
             *  Constant: '<S445>/Calib'
             *  Constant: '<S449>/ConstantValue4'
             *  MinMax: '<S449>/Maximum'
             *  Sum: '<S449>/Subtraction'
             */
            TRAR_ac_DW.UnitDelay_DSTATE_h = fmaxf(TRAR_ac_DW.UnitDelay_DSTATE_h
                - HeTRAR_t_MedTEB_dT, 0.0F);
        }

        /* End of Switch: '<S449>/Switch1' */

        /* If: '<S380>/If2' incorporates:
         *  Constant: '<S443>/Calib'
         *  Constant: '<S449>/ConstantValue2'
         *  RelationalOperator: '<S449>/GreaterThan1'
         *  UnitDelay: '<S449>/UnitDelay'
         */
        if ((TRAR_ac_DW.UnitDelay_DSTATE_h > 0.0F) &&
                (KeTRAR_b_EnblEngRespTypHold))
        {
            /* Outputs for IfAction SubSystem: '<S380>/Hold' incorporates:
             *  ActionPort: '<S446>/ActionPort'
             */
            /* Merge: '<S380>/Merge2' incorporates:
             *  Constant: '<S450>/Constant'
             *  DataTypeConversion: '<S446>/DTCBlk101'
             */
            rtb_Switch4_ig = CeTRAR_e_Maximum_Range;

            /* End of Outputs for SubSystem: '<S380>/Hold' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S380>/Pass1' incorporates:
             *  ActionPort: '<S448>/ActionPort'
             */
            TRAR_ac_IfActionSubsystem1(VeTRAR_e_EngTrRespTypebefHold,
                &rtb_Switch4_ig);

            /* End of Outputs for SubSystem: '<S380>/Pass1' */
        }

        /* End of If: '<S380>/If2' */

        /* RelationalOperator: '<S324>/Comparison3' */
        rtb_AND_e = (rtb_Switch4_ig == 2);

        /* If: '<S369>/If2' incorporates:
         *  Constant: '<S399>/Constant'
         *  Constant: '<S400>/Constant'
         *  RelationalOperator: '<S369>/Comparison5'
         *  RelationalOperator: '<S369>/Comparison6'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         *  Switch: '<S370>/Switch1'
         *  Switch: '<S398>/Switch1'
         */
#if Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

        VeTRAC_b_RedSprk4SEM_tmp =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg;
        if (((uint32)VeTRAC_b_RedSprk4SEM_tmp) == CeTINR_e_TrqDec)
        {
            /* Outputs for IfAction SubSystem: '<S369>/DistrbtdSEMCntrlStrat_DEC' incorporates:
             *  ActionPort: '<S396>/ActionPort'
             */
            /* Switch: '<S396>/Switch1' incorporates:
             *  MinMax: '<S396>/MinMax6'
             *  UnitDelay: '<S4>/UnitDelay1'
             */
            if (rtb_AND_e)
            {
                TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Summation7;
            }
            else
            {
                TRAR_ac_DW.UnitDelay1_DSTATE = fminf(rtb_Merge,
                    VeTRAC_M_TactTeMaxSlw_SprkAuth);
            }

            /* End of Switch: '<S396>/Switch1' */
            /* End of Outputs for SubSystem: '<S369>/DistrbtdSEMCntrlStrat_DEC' */
        }
        else if (((uint32)VeTRAC_b_RedSprk4SEM_tmp) == CeTINR_e_TrqInc)
        {
            /* Outputs for IfAction SubSystem: '<S369>/DistrbtdSEMCntrlStrat_INC' incorporates:
             *  ActionPort: '<S397>/ActionPort'
             */
            /* RelationalOperator: '<S397>/Comparison6' incorporates:
             *  Constant: '<S403>/Constant'
             */
            rtb_Comparison3_a = (((uint32)
                                  TRAR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy)
                                 == CeTINR_e_TrqInc);

            /* Outputs for Atomic SubSystem: '<S397>/EdgeBi' */
            /* RelationalOperator: '<S402>/NotEqual' incorporates:
             *  UnitDelay: '<S402>/UnitDelay'
             */
            rtb_Logical1_p2 = (rtb_Comparison3_a !=
                               TRAR_ac_DW.UnitDelay_DSTATE_ho);

            /* Update for UnitDelay: '<S402>/UnitDelay' */
            TRAR_ac_DW.UnitDelay_DSTATE_ho = rtb_Comparison3_a;

            /* End of Outputs for SubSystem: '<S397>/EdgeBi' */

            /* Logic: '<S397>/Logical1' incorporates:
             *  Logic: '<S401>/Logical2'
             *  Switch: '<S401>/Switch3'
             */
            rtb_AND_ah = !rtb_AND_ah;

            /* Logic: '<S397>/Logical4' incorporates:
             *  Logic: '<S397>/Logical1'
             */
            rtb_AND_nu = ((rtb_Logical1_p2 && rtb_AND_nu) && rtb_AND_ah);

            /* Switch: '<S401>/Switch3' incorporates:
             *  Switch: '<S401>/Switch2'
             *  UnitDelay: '<S397>/UnitDelay3'
             *  UnitDelay: '<S401>/UnitDelay'
             */
            if (rtb_AND_nu)
            {
                /* Switch: '<S401>/Switch1' incorporates:
                 *  Constant: '<S401>/ConstantValue4'
                 *  UnitDelay: '<S401>/UnitDelay3'
                 */
                TRAR_ac_DW.UnitDelay3_DSTATE_a = 0.0F;
                TRAR_ac_DW.UnitDelay_DSTATE_hw = TRAR_ac_DW.UnitDelay3_DSTATE_e;
            }
            else
            {
                /* MinMax: '<S401>/Maximum' incorporates:
                 *  Constant: '<S404>/Calib'
                 *  Constant: '<S405>/Calib'
                 */
                rtb_Summation1 = fmaxf(HeTRAR_t_MedTEB_dT,
                                       KeTRAR_t_SEMSlwTrqFiltINC_FastPath);

                /* Outputs for Atomic SubSystem: '<S401>/ProtectedDivision' */
                /* Switch: '<S406>/Switch1' incorporates:
                 *  Constant: '<S404>/Calib'
                 *  Constant: '<S406>/ConstantValue'
                 *  Constant: '<S406>/ConstantValue1'
                 *  Constant: '<S406>/ConstantValue2'
                 *  Constant: '<S406>/ConstantValue3'
                 *  Logic: '<S406>/AND'
                 *  RelationalOperator: '<S406>/GreaterThanorEqual'
                 *  RelationalOperator: '<S406>/GreaterThanorEqual1'
                 *  RelationalOperator: '<S406>/NotEqual'
                 *  RelationalOperator: '<S406>/NotEqual1'
                 *  Switch: '<S406>/Switch2'
                 *  Switch: '<S406>/Switch3'
                 */
                if ((HeTRAR_t_MedTEB_dT != 0.0F) && (rtb_Summation1 != 0.0F))
                {
                    /* Switch: '<S406>/Switch1' incorporates:
                     *  Product: '<S406>/Division'
                     */
                    rtb_Summation1 = HeTRAR_t_MedTEB_dT / rtb_Summation1;
                }
                else if (HeTRAR_t_MedTEB_dT > 0.0F)
                {
                    /* Switch: '<S406>/Switch2' incorporates:
                     *  Constant: '<S406>/MAXFLOAT'
                     *  Switch: '<S406>/Switch1'
                     */
                    rtb_Summation1 = 3.402823466E+38F;
                }
                else if (HeTRAR_t_MedTEB_dT < 0.0F)
                {
                    /* Switch: '<S406>/Switch3' incorporates:
                     *  Constant: '<S406>/MINFLOAT'
                     *  Switch: '<S406>/Switch1'
                     *  Switch: '<S406>/Switch2'
                     */
                    rtb_Summation1 = -3.402823466E+38F;
                }
                else
                {
                    /* Switch: '<S406>/Switch1' incorporates:
                     *  Constant: '<S406>/ConstantValue4'
                     *  Switch: '<S406>/Switch2'
                     *  Switch: '<S406>/Switch3'
                     */
                    rtb_Summation1 = 0.0F;
                }

                /* End of Switch: '<S406>/Switch1' */
                /* End of Outputs for SubSystem: '<S401>/ProtectedDivision' */

                /* Switch: '<S401>/Switch1' incorporates:
                 *  Constant: '<S401>/ConstantValue2'
                 *  Constant: '<S401>/ConstantValue3'
                 *  Logic: '<S401>/Logical'
                 *  Logic: '<S401>/Logical2'
                 *  MinMax: '<S401>/MinMax'
                 *  Sum: '<S401>/Summation1'
                 *  UnitDelay: '<S401>/UnitDelay1'
                 *  UnitDelay: '<S401>/UnitDelay3'
                 */
                if ((!TRAR_ac_DW.UnitDelay1_DSTATE_nm) || (!rtb_AND_ah))
                {
                    TRAR_ac_DW.UnitDelay3_DSTATE_a = 1.0F;
                }

                TRAR_ac_DW.UnitDelay3_DSTATE_a = fminf
                    (TRAR_ac_DW.UnitDelay3_DSTATE_a + rtb_Summation1, 1.0F);
            }

            /* RelationalOperator: '<S401>/Comparison2' incorporates:
             *  Constant: '<S401>/ConstantValue1'
             *  UnitDelay: '<S401>/UnitDelay3'
             */
            VeTRAC_b_FstSEMBlndActv = (TRAR_ac_DW.UnitDelay3_DSTATE_a < 1.0F);

            /* Switch: '<S397>/Switch2' incorporates:
             *  MinMax: '<S397>/Maximum1'
             *  MinMax: '<S397>/MinMax6'
             */
            if (rtb_Comparison3_a)
            {
                rtb_Summation1 = fmaxf(rtb_Merge, rtb_Summation18);
            }
            else
            {
                rtb_Summation1 = fminf(fmaxf(rtb_Merge, rtb_Summation18),
                                       VeTRAC_M_TePredMax);
            }

            /* End of Switch: '<S397>/Switch2' */

            /* Sum: '<S401>/Summation' incorporates:
             *  Constant: '<S401>/ConstantValue'
             *  Product: '<S401>/Multiplication'
             *  Product: '<S401>/Multiplication3'
             *  Sum: '<S401>/Subtraction'
             *  UnitDelay: '<S397>/UnitDelay3'
             *  UnitDelay: '<S401>/UnitDelay'
             *  UnitDelay: '<S401>/UnitDelay3'
             */
            TRAR_ac_DW.UnitDelay3_DSTATE_e = ((1.0F -
                TRAR_ac_DW.UnitDelay3_DSTATE_a) * TRAR_ac_DW.UnitDelay_DSTATE_hw)
                + (TRAR_ac_DW.UnitDelay3_DSTATE_a * rtb_Summation1);

            /* Switch: '<S397>/Switch1' incorporates:
             *  MinMax: '<S397>/Maximum2'
             *  UnitDelay: '<S397>/UnitDelay3'
             *  UnitDelay: '<S4>/UnitDelay1'
             */
            if (rtb_AND_e)
            {
                TRAR_ac_DW.UnitDelay1_DSTATE = fmaxf(rtb_Summation7,
                    rtb_Summation18);
            }
            else
            {
                TRAR_ac_DW.UnitDelay1_DSTATE = TRAR_ac_DW.UnitDelay3_DSTATE_e;
            }

            /* End of Switch: '<S397>/Switch1' */

            /* Update for UnitDelay: '<S401>/UnitDelay1' incorporates:
             *  Constant: '<S401>/TRUEConstant'
             */
            TRAR_ac_DW.UnitDelay1_DSTATE_nm = true;

            /* End of Outputs for SubSystem: '<S369>/DistrbtdSEMCntrlStrat_INC' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S369>/Else' incorporates:
             *  ActionPort: '<S398>/ActionPort'
             */
            if (rtb_AND_e)
            {
                /* Switch: '<S398>/Switch1' incorporates:
                 *  UnitDelay: '<S4>/UnitDelay1'
                 */
                TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Summation7;
            }
            else
            {
                /* Switch: '<S398>/Switch1' incorporates:
                 *  UnitDelay: '<S4>/UnitDelay1'
                 */
                TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Merge;
            }

            /* End of Outputs for SubSystem: '<S369>/Else' */
        }

#else

        /* Switch: '<S370>/Switch1' incorporates:
         *  UnitDelay: '<S4>/UnitDelay1'
         */
        if (rtb_AND_e)
        {
            TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Summation7;
        }
        else
        {
            TRAR_ac_DW.UnitDelay1_DSTATE = rtb_Merge;
        }

#endif

        /* RelationalOperator: '<S407>/Comparison2' incorporates:
         *  Constant: '<S407>/ConstantValue1'
         *  UnitDelay: '<S407>/UnitDelay3'
         */
        VeTRAC_b_FstPthBlndActv = (TRAR_ac_DW.UnitDelay3_DSTATE_du < 1.0F);

        /* Logic: '<S324>/Logical1' */
        rtb_AND_ah = !VeTRAC_b_ThermalDerateEnbld;

        /* Sum: '<S453>/Sum1' incorporates:
         *  Constant: '<S389>/Calib'
         *  UnitDelay: '<S381>/UnitDelay1'
         */
        rtb_Summation18 = VeTRAC_M_Ti_ThermalDerate -
            KeTRAR_dM_ExitThermDerateRamp;

        /* RelationalOperator: '<S453>/Comparison' */
        rtb_AND_e = (rtb_Summation18 > rtb_Summation4);

        /* Sum: '<S453>/Sum' incorporates:
         *  Constant: '<S388>/Calib'
         *  UnitDelay: '<S381>/UnitDelay1'
         */
        rtb_Summation7 = KeTRAR_dM_EntryThermDerateRamp +
            VeTRAC_M_Ti_ThermalDerate;

        /* RelationalOperator: '<S453>/Comparison2' incorporates:
         *  Constant: '<S386>/Calib'
         */
        rtb_AND_nu = (KeTRAR_M_FSOTorque < rtb_Summation7);

        /* Logic: '<S381>/Logical4' incorporates:
         *  Logic: '<S381>/Logical6'
         *  Logic: '<S453>/Logical1'
         *  RelationalOperator: '<S381>/Comparison1'
         *  Switch: '<S381>/Switch'
         */
        rtb_Comparison3_a = !rtb_AND_ah;

        /* Logic: '<S381>/Logical2' incorporates:
         *  Logic: '<S381>/Logical7'
         *  UnitDelay: '<S381>/UnitDelay3'
         */
        rtb_Logical2_l = (rtb_Comparison3_a && (!TRAR_ac_DW.UnitDelay3_DSTATE_dr));

        /* Logic: '<S381>/Logical3' incorporates:
         *  UnitDelay: '<S381>/UnitDelay2'
         */
        rtb_Logical3_np = (rtb_AND_ah && (TRAR_ac_DW.UnitDelay2_DSTATE_j));

        /* Logic: '<S453>/Logical3' incorporates:
         *  Logic: '<S454>/Logical5'
         */
        UnitDelay_DSTATE_pn_tmp = !rtb_Logical3_np;

        /* Outputs for Atomic SubSystem: '<S453>/SignalLatchOnWithReset' */
        /* Logic: '<S455>/OR1' incorporates:
         *  Logic: '<S453>/Logical3'
         *  Logic: '<S455>/NOT'
         *  Logic: '<S455>/OR'
         *  UnitDelay: '<S455>/UnitDelay'
         */
        TRAR_ac_DW.UnitDelay_DSTATE_pn = (rtb_Logical2_l || (((!rtb_AND_nu) &&
            UnitDelay_DSTATE_pn_tmp) && (TRAR_ac_DW.UnitDelay_DSTATE_pn)));

        /* End of Outputs for SubSystem: '<S453>/SignalLatchOnWithReset' */

        /* Logic: '<S453>/Logical5' incorporates:
         *  Logic: '<S454>/Logical3'
         */
        UnitDelay_DSTATE_pg_tmp = !rtb_Logical2_l;

        /* Outputs for Atomic SubSystem: '<S453>/SignalLatchOnWithReset1' */
        /* Logic: '<S456>/OR1' incorporates:
         *  Logic: '<S453>/Logical4'
         *  Logic: '<S453>/Logical5'
         *  Logic: '<S456>/NOT'
         *  Logic: '<S456>/OR'
         *  UnitDelay: '<S456>/UnitDelay'
         */
        TRAR_ac_DW.UnitDelay_DSTATE_pg = (rtb_Logical3_np || ((rtb_AND_e &&
            UnitDelay_DSTATE_pg_tmp) && (TRAR_ac_DW.UnitDelay_DSTATE_pg)));

        /* End of Outputs for SubSystem: '<S453>/SignalLatchOnWithReset1' */

        /* Sum: '<S454>/Sum1' incorporates:
         *  Constant: '<S388>/Calib'
         *  UnitDelay: '<S381>/UnitDelay1'
         */
        rtb_Merge = VeTRAC_M_Ti_ThermalDerate - KeTRAR_dM_EntryThermDerateRamp;

        /* RelationalOperator: '<S454>/Comparison' incorporates:
         *  Constant: '<S386>/Calib'
         */
        rtb_Logical1_p2 = (rtb_Merge > KeTRAR_M_FSOTorque);

        /* Sum: '<S454>/Sum' incorporates:
         *  Constant: '<S389>/Calib'
         *  UnitDelay: '<S381>/UnitDelay1'
         */
        VeTRAC_M_Ti_ThermalDerate = KeTRAR_dM_ExitThermDerateRamp +
            VeTRAC_M_Ti_ThermalDerate;

        /* RelationalOperator: '<S454>/Comparison2' */
        rtb_UnitDelay_a = (rtb_Summation4 < VeTRAC_M_Ti_ThermalDerate);

        /* Outputs for Atomic SubSystem: '<S454>/SignalLatchOnWithReset1' */
        /* Logic: '<S458>/OR1' incorporates:
         *  Logic: '<S454>/Logical4'
         *  Logic: '<S454>/Logical5'
         *  Logic: '<S458>/NOT'
         *  Logic: '<S458>/OR'
         *  UnitDelay: '<S458>/UnitDelay'
         */
        TRAR_ac_DW.UnitDelay_DSTATE_l5 = (rtb_Logical2_l || ((rtb_Logical1_p2 &&
            UnitDelay_DSTATE_pn_tmp) && (TRAR_ac_DW.UnitDelay_DSTATE_l5)));

        /* End of Outputs for SubSystem: '<S454>/SignalLatchOnWithReset1' */

        /* Outputs for Atomic SubSystem: '<S454>/SignalLatchOnWithReset' */
        /* Logic: '<S457>/OR1' incorporates:
         *  Logic: '<S454>/Logical3'
         *  Logic: '<S457>/NOT'
         *  Logic: '<S457>/OR'
         *  UnitDelay: '<S457>/UnitDelay'
         */
        TRAR_ac_DW.UnitDelay_DSTATE_kj = (rtb_Logical3_np || (((!rtb_UnitDelay_a)
            && UnitDelay_DSTATE_pg_tmp) && (TRAR_ac_DW.UnitDelay_DSTATE_kj)));

        /* End of Outputs for SubSystem: '<S454>/SignalLatchOnWithReset' */

        /* Logic: '<S381>/Logical4' incorporates:
         *  UnitDelay: '<S381>/UnitDelay2'
         */
        TRAR_ac_DW.UnitDelay2_DSTATE_j = rtb_Comparison3_a;

        /* Logic: '<S381>/Logical6' incorporates:
         *  UnitDelay: '<S381>/UnitDelay3'
         */
        TRAR_ac_DW.UnitDelay3_DSTATE_dr = rtb_Comparison3_a;

        /* Switch: '<S381>/Switch' incorporates:
         *  Constant: '<S386>/Calib'
         *  Logic: '<S454>/Logical2'
         *  Logic: '<S454>/Logical6'
         *  RelationalOperator: '<S381>/Comparison4'
         *  Switch: '<S454>/Switch4'
         *  Switch: '<S454>/Switch5'
         *  UnitDelay: '<S458>/UnitDelay'
         */
        if (rtb_Summation4 <= KeTRAR_M_FSOTorque)
        {
            /* Switch: '<S453>/Switch4' incorporates:
             *  Logic: '<S453>/Logical2'
             *  Switch: '<S453>/Switch5'
             *  UnitDelay: '<S455>/UnitDelay'
             *  UnitDelay: '<S456>/UnitDelay'
             */
            if (rtb_Comparison3_a || (TRAR_ac_DW.UnitDelay_DSTATE_pn))
            {
                /* Switch: '<S453>/Switch3' */
                if (TRAR_ac_DW.UnitDelay_DSTATE_pn)
                {
                    /* Switch: '<S453>/Switch2' */
                    if (rtb_AND_nu)
                    {
                        /* Switch: '<S381>/Switch' incorporates:
                         *  Switch: '<S453>/Switch3'
                         *  Switch: '<S453>/Switch4'
                         */
                        VeTRAC_M_Ti_ThermalDerate = KeTRAR_M_FSOTorque;
                    }
                    else
                    {
                        /* Switch: '<S381>/Switch' incorporates:
                         *  Switch: '<S453>/Switch3'
                         *  Switch: '<S453>/Switch4'
                         */
                        VeTRAC_M_Ti_ThermalDerate = rtb_Summation7;
                    }

                    /* End of Switch: '<S453>/Switch2' */
                }
                else
                {
                    /* Switch: '<S381>/Switch' incorporates:
                     *  Switch: '<S453>/Switch3'
                     *  Switch: '<S453>/Switch4'
                     */
                    VeTRAC_M_Ti_ThermalDerate = KeTRAR_M_FSOTorque;
                }

                /* End of Switch: '<S453>/Switch3' */
            }
            else if (TRAR_ac_DW.UnitDelay_DSTATE_pg)
            {
                /* Switch: '<S453>/Switch1' incorporates:
                 *  Switch: '<S453>/Switch5'
                 */
                if (rtb_AND_e)
                {
                    /* Switch: '<S381>/Switch' incorporates:
                     *  Switch: '<S453>/Switch4'
                     *  Switch: '<S453>/Switch5'
                     */
                    VeTRAC_M_Ti_ThermalDerate = rtb_Summation18;
                }
                else
                {
                    /* Switch: '<S381>/Switch' incorporates:
                     *  Switch: '<S453>/Switch4'
                     *  Switch: '<S453>/Switch5'
                     */
                    VeTRAC_M_Ti_ThermalDerate = rtb_Summation4;
                }

                /* End of Switch: '<S453>/Switch1' */
            }
            else
            {
                /* Switch: '<S381>/Switch' incorporates:
                 *  Switch: '<S453>/Switch4'
                 *  Switch: '<S453>/Switch5'
                 */
                VeTRAC_M_Ti_ThermalDerate = rtb_Summation4;
            }

            /* End of Switch: '<S453>/Switch4' */
        }
        else if (rtb_AND_ah && (!TRAR_ac_DW.UnitDelay_DSTATE_l5))
        {
            /* Switch: '<S454>/Switch3' incorporates:
             *  Switch: '<S454>/Switch4'
             */
            if (TRAR_ac_DW.UnitDelay_DSTATE_kj)
            {
                /* Switch: '<S454>/Switch2' */
                if (rtb_UnitDelay_a)
                {
                    /* Switch: '<S381>/Switch' incorporates:
                     *  Switch: '<S454>/Switch3'
                     *  Switch: '<S454>/Switch4'
                     */
                    VeTRAC_M_Ti_ThermalDerate = rtb_Summation4;
                }

                /* End of Switch: '<S454>/Switch2' */
            }
            else
            {
                /* Switch: '<S381>/Switch' incorporates:
                 *  Switch: '<S454>/Switch3'
                 *  Switch: '<S454>/Switch4'
                 */
                VeTRAC_M_Ti_ThermalDerate = rtb_Summation4;
            }

            /* End of Switch: '<S454>/Switch3' */
        }
        else if (TRAR_ac_DW.UnitDelay_DSTATE_l5)
        {
            /* Switch: '<S454>/Switch1' incorporates:
             *  Switch: '<S454>/Switch4'
             *  Switch: '<S454>/Switch5'
             */
            if (rtb_Logical1_p2)
            {
                /* Switch: '<S381>/Switch' incorporates:
                 *  Switch: '<S454>/Switch4'
                 *  Switch: '<S454>/Switch5'
                 */
                VeTRAC_M_Ti_ThermalDerate = rtb_Merge;
            }
            else
            {
                /* Switch: '<S381>/Switch' incorporates:
                 *  Switch: '<S454>/Switch4'
                 *  Switch: '<S454>/Switch5'
                 */
                VeTRAC_M_Ti_ThermalDerate = KeTRAR_M_FSOTorque;
            }

            /* End of Switch: '<S454>/Switch1' */
        }
        else
        {
            /* Switch: '<S381>/Switch' incorporates:
             *  Switch: '<S454>/Switch4'
             *  Switch: '<S454>/Switch5'
             */
            VeTRAC_M_Ti_ThermalDerate = KeTRAR_M_FSOTorque;
        }

        /* Gain: '<S391>/Gain' incorporates:
         *  UnitDelay: '<S4>/UnitDelay3'
         */
        TRAR_ac_DW.UnitDelay3_DSTATE = VeTRAC_M_Ti_ThermalDerate;

        /* Merge: '<S22>/Merge8' incorporates:
         *  Gain: '<S394>/Gain'
         */
        rtb_AND_ah = VeTRAC_b_UseOptTe4FstPth;

        /* Outport: '<Root>/VeTRAR_b_EngCylDeacReq' incorporates:
         *  Logic: '<S366>/AND'
         */
        (void)Rte_Write_VeTRAR_b_EngCylDeacReq_Value(VeTRAC_b_MDSEnbl);

        /* Logic: '<S367>/AND' incorporates:
         *  UnitDelay: '<S4>/UnitDelay2'
         */
        TRAR_ac_DW.UnitDelay2_DSTATE_l1 = VeTRAC_b_DFCOEnbl;

        /* Merge: '<S22>/Merge5' incorporates:
         *  Constant: '<S368>/Constant'
         *  SignalConversion generated from: '<S324>/EngArbState'
         */
        VeTRAC_e_EngArbState = CeTRAR_e_FastTorqueActive;

        /* Outport: '<Root>/VeTRAR_M_EngReserveTrqCmnd' incorporates:
         *  Sum: '<S324>/Summation16'
         */
        (void)Rte_Write_VeTRAR_M_EngReserveTrqCmnd_Value
            (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_en -
             TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k2);

        /* Merge: '<S22>/Merge7' incorporates:
         *  DataTypeConversion: '<S371>/DataTypeConversion'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        VeTRAC_e_EngCntrlMode =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hp;

        /* Update for UnitDelay: '<S407>/UnitDelay1' incorporates:
         *  Constant: '<S407>/TRUEConstant'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_o = true;

        /* End of Outputs for SubSystem: '<S22>/FastTorqueActive' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S22>/NormalCase' incorporates:
         *  ActionPort: '<S328>/ActionPort'
         */
#if Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

        /* Outputs for Atomic SubSystem: '<S481>/EdgeBi' */
        /* RelationalOperator: '<S481>/Comparison5' incorporates:
         *  Constant: '<S492>/Constant'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        rtb_AND_ah = (((uint32)
                       TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jg) ==
                      CeTINR_e_TrqDec);

        /* RelationalOperator: '<S491>/NotEqual' incorporates:
         *  UnitDelay: '<S491>/UnitDelay'
         */
        rtb_AND_nu = (rtb_AND_ah != TRAR_ac_DW.UnitDelay_DSTATE_hs);

        /* Update for UnitDelay: '<S491>/UnitDelay' */
        TRAR_ac_DW.UnitDelay_DSTATE_hs = rtb_AND_ah;

        /* Switch: '<S490>/Switch2' incorporates:
         *  Switch: '<S481>/Switch1'
         *  Switch: '<S490>/Switch3'
         *  UnitDelay: '<S481>/UnitDelay3'
         *  UnitDelay: '<S490>/UnitDelay'
         */
        if (rtb_AND_nu)
        {
            TRAR_ac_DW.UnitDelay_DSTATE_o5 = VeTRAC_M_TactTeMaxPostSlwPthBlnd;

            /* Switch: '<S490>/Switch1' incorporates:
             *  Constant: '<S490>/ConstantValue4'
             *  UnitDelay: '<S481>/UnitDelay3'
             *  UnitDelay: '<S490>/UnitDelay'
             *  UnitDelay: '<S490>/UnitDelay3'
             */
            TRAR_ac_DW.UnitDelay3_DSTATE_p = 0.0F;
        }
        else
        {
            if (rtb_AND_ah)
            {
                /* Switch: '<S481>/Switch1' incorporates:
                 *  Constant: '<S495>/Calib'
                 */
                rtb_Summation7 = KeTRAR_t_Filter2TactMaxSlwSprkAuth;
            }
            else
            {
                /* Switch: '<S481>/Switch1' incorporates:
                 *  Constant: '<S494>/Calib'
                 */
                rtb_Summation7 = KeTRAR_t_Filter2TactMaxSlw;
            }

            /* MinMax: '<S490>/Maximum' incorporates:
             *  Constant: '<S493>/Calib'
             */
            rtb_Summation7 = fmaxf(HeTRAR_t_MedTEB_dT, rtb_Summation7);

            /* Outputs for Atomic SubSystem: '<S490>/ProtectedDivision' */
            /* Switch: '<S496>/Switch1' incorporates:
             *  Constant: '<S493>/Calib'
             *  Constant: '<S496>/ConstantValue'
             *  Constant: '<S496>/ConstantValue1'
             *  Constant: '<S496>/ConstantValue2'
             *  Constant: '<S496>/ConstantValue3'
             *  Logic: '<S496>/AND'
             *  RelationalOperator: '<S496>/GreaterThanorEqual'
             *  RelationalOperator: '<S496>/GreaterThanorEqual1'
             *  RelationalOperator: '<S496>/NotEqual'
             *  RelationalOperator: '<S496>/NotEqual1'
             *  Switch: '<S496>/Switch2'
             *  Switch: '<S496>/Switch3'
             */
            if ((HeTRAR_t_MedTEB_dT != 0.0F) && (rtb_Summation7 != 0.0F))
            {
                /* Switch: '<S496>/Switch1' incorporates:
                 *  Product: '<S496>/Division'
                 */
                rtb_Summation7 = HeTRAR_t_MedTEB_dT / rtb_Summation7;
            }
            else if (HeTRAR_t_MedTEB_dT > 0.0F)
            {
                /* Switch: '<S496>/Switch2' incorporates:
                 *  Constant: '<S496>/MAXFLOAT'
                 *  Switch: '<S496>/Switch1'
                 */
                rtb_Summation7 = 3.402823466E+38F;
            }
            else if (HeTRAR_t_MedTEB_dT < 0.0F)
            {
                /* Switch: '<S496>/Switch3' incorporates:
                 *  Constant: '<S496>/MINFLOAT'
                 *  Switch: '<S496>/Switch1'
                 *  Switch: '<S496>/Switch2'
                 */
                rtb_Summation7 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S496>/Switch1' incorporates:
                 *  Constant: '<S496>/ConstantValue4'
                 *  Switch: '<S496>/Switch2'
                 *  Switch: '<S496>/Switch3'
                 */
                rtb_Summation7 = 0.0F;
            }

            /* End of Switch: '<S496>/Switch1' */
            /* End of Outputs for SubSystem: '<S490>/ProtectedDivision' */

            /* Switch: '<S490>/Switch1' incorporates:
             *  Constant: '<S490>/ConstantValue2'
             *  Constant: '<S490>/ConstantValue3'
             *  Logic: '<S490>/Logical'
             *  Logic: '<S490>/Logical2'
             *  MinMax: '<S490>/MinMax'
             *  Sum: '<S490>/Summation1'
             *  UnitDelay: '<S490>/UnitDelay1'
             *  UnitDelay: '<S490>/UnitDelay3'
             */
            if ((!TRAR_ac_DW.UnitDelay1_DSTATE_i) || rtb_AND_e)
            {
                TRAR_ac_DW.UnitDelay3_DSTATE_p = 1.0F;
            }

            TRAR_ac_DW.UnitDelay3_DSTATE_p = fminf
                (TRAR_ac_DW.UnitDelay3_DSTATE_p + rtb_Summation7, 1.0F);
        }

        /* Switch: '<S481>/Switch2' */
        if (rtb_AND_ah)
        {
            rtb_Summation7 = VeTRAC_M_TactTeMaxSlw_SprkAuth;
        }
        else
        {
            rtb_Summation7 = rtb_Summation4;
        }

        /* Sum: '<S490>/Summation' incorporates:
         *  Constant: '<S490>/ConstantValue'
         *  Product: '<S490>/Multiplication'
         *  Product: '<S490>/Multiplication3'
         *  Sum: '<S490>/Subtraction'
         *  UnitDelay: '<S490>/UnitDelay'
         *  UnitDelay: '<S490>/UnitDelay3'
         */
        VeTRAC_M_TactTeMaxPostSlwPthBlnd = ((1.0F -
            TRAR_ac_DW.UnitDelay3_DSTATE_p) * TRAR_ac_DW.UnitDelay_DSTATE_o5) +
            (TRAR_ac_DW.UnitDelay3_DSTATE_p * rtb_Summation7);

        /* Switch: '<S481>/Switch3' incorporates:
         *  MinMax: '<S481>/MinMax6'
         */
        if (rtb_AND_ah)
        {
            rtb_Summation7 = fminf(VeTRAC_M_TactTeMaxSlw_SprkAuth,
                                   VeTRAC_M_TactTeMaxPostSlwPthBlnd);
        }
        else
        {
            rtb_Summation7 = rtb_Summation4;
        }

        /* VariantMerge generated from: '<S328>/VariantSource' incorporates:
         *  MinMax: '<S481>/Maximum4'
         *  MinMax: '<S481>/MinMax2'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE = fminf(rtb_Summation7, fmaxf
            (VeTRAC_M_OptTe, rtb_Summation18));

        /* End of Outputs for SubSystem: '<S481>/EdgeBi' */
#else

        /* VariantMerge generated from: '<S328>/VariantSource' incorporates:
         *  MinMax: '<S482>/Maximum4'
         *  MinMax: '<S482>/MinMax2'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE = fminf(rtb_Summation4, fmaxf
            (VeTRAC_M_OptTe, rtb_Summation18));

#endif

        /* If: '<S328>/If1' incorporates:
         *  MinMax: '<S482>/Maximum4'
         *  MinMax: '<S482>/MinMax2'
         */
        if (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i3)
        {
            /* Outputs for IfAction SubSystem: '<S328>/AltMd' incorporates:
             *  ActionPort: '<S476>/ActionPort'
             */
            /* Merge: '<S328>/Merge8' incorporates:
             *  Constant: '<S476>/ConstantValue2'
             *  Constant: '<S489>/Calib'
             *  Gain: '<S476>/Ta2Ti'
             *  MinMax: '<S476>/MinMax1'
             *  MinMax: '<S476>/MinMax6'
             *  Product: '<S476>/Product2'
             *  Sum: '<S476>/Summation16'
             */
            TRAR_ac_DW.UnitDelay1_DSTATE = fminf((fminf
                (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p, 0.0F) *
                (-Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f())) +
                TRAR_ac_DW.UnitDelay1_DSTATE, rtb_Vector);

            /* End of Outputs for SubSystem: '<S328>/AltMd' */
        }

        /* End of If: '<S328>/If1' */

        /* RelationalOperator: '<S490>/Comparison2' */
#if Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

        /* RelationalOperator: '<S490>/Comparison2' incorporates:
         *  Constant: '<S490>/ConstantValue1'
         *  UnitDelay: '<S490>/UnitDelay3'
         */
        VeTRAC_b_SlwPthBlndActv_NormalCase = (TRAR_ac_DW.UnitDelay3_DSTATE_p <
            1.0F);

#endif

        /* End of RelationalOperator: '<S490>/Comparison2' */

        /* Gain: '<S488>/Gain' incorporates:
         *  UnitDelay: '<S4>/UnitDelay3'
         */
        TRAR_ac_DW.UnitDelay3_DSTATE = TRAR_ac_DW.UnitDelay1_DSTATE;

        /* Gain: '<S487>/Gain' incorporates:
         *  UnitDelay: '<S4>/UnitDelay'
         */
        rtb_Switch4_ig = 0;

        /* Outport: '<Root>/VeTRAR_b_EngCylDeacReq' incorporates:
         *  Logic: '<S478>/AND'
         */
        (void)Rte_Write_VeTRAR_b_EngCylDeacReq_Value(VeTRAC_b_MDSEnbl);

        /* Logic: '<S479>/AND' incorporates:
         *  UnitDelay: '<S4>/UnitDelay2'
         */
        TRAR_ac_DW.UnitDelay2_DSTATE_l1 = VeTRAC_b_DFCOEnbl;

        /* Merge: '<S22>/Merge5' incorporates:
         *  Constant: '<S480>/Constant'
         *  SignalConversion generated from: '<S328>/EngArbState'
         */
        VeTRAC_e_EngArbState = CeTRAR_e_NormalCase;

        /* Outport: '<Root>/VeTRAR_M_EngReserveTrqCmnd' incorporates:
         *  Sum: '<S328>/Summation16'
         */
        (void)Rte_Write_VeTRAR_M_EngReserveTrqCmnd_Value
            (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_en -
             TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k2);

        /* Merge: '<S22>/Merge7' incorporates:
         *  DataTypeConversion: '<S483>/DataTypeConversion'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
         */
        VeTRAC_e_EngCntrlMode =
            TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hp;

        /* Merge: '<S22>/Merge8' incorporates:
         *  Constant: '<S328>/FALSE Constant2'
         *  Gain: '<S485>/Gain'
         */
        rtb_AND_ah = false;

        /* Update for UnitDelay: '<S490>/UnitDelay1' incorporates:
         *  Constant: '<S490>/TRUEConstant'
         */
#if Rte_SysCon_Variant_TRAR_DistrbtdSEMCntrlStrat_Enable

        TRAR_ac_DW.UnitDelay1_DSTATE_i = true;

#endif

        /* End of Update for UnitDelay: '<S490>/UnitDelay1' */
        /* End of Outputs for SubSystem: '<S22>/NormalCase' */
    }

    /* Outputs for Atomic SubSystem: '<S22>/BstdCnvrtrTrqMrgns' */
#if Rte_SysCon_Variant_TRAR_BoostedConverter_Enable

    /* Outputs for Atomic SubSystem: '<S318>/BoostedConverterMarginsCalc' */
    /* Outputs for Atomic SubSystem: '<S329>/EdgeRising1' */
    /* Logic: '<S334>/AND' incorporates:
     *  Logic: '<S334>/OR1'
     *  UnitDelay: '<S16>/UnitDelay3'
     *  UnitDelay: '<S334>/Unit Delay'
     */
    rtb_AND_e = ((TRAR_ac_DW.UnitDelay3_DSTATE_a4) &&
                 (!TRAR_ac_DW.UnitDelay_DSTATE_ji));

    /* Update for UnitDelay: '<S334>/Unit Delay' incorporates:
     *  UnitDelay: '<S16>/UnitDelay3'
     */
    TRAR_ac_DW.UnitDelay_DSTATE_ji = TRAR_ac_DW.UnitDelay3_DSTATE_a4;

    /* End of Outputs for SubSystem: '<S329>/EdgeRising1' */

    /* Logic: '<S329>/Logical7' incorporates:
     *  Constant: '<S341>/Calib'
     *  RelationalOperator: '<S329>/Relational Operator1'
     *  Sum: '<S329>/Subtract3'
     *  UnitDelay: '<S329>/Unit Delay1'
     */
    VeTRAC_b_BCDeactvThreshNotMet = (rtb_AND_e ||
        ((TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f -
          TRAR_ac_DW.UnitDelay1_DSTATE_a) > KeTRAR_M_BCFastPathDeactvThrsh));

    /* Outputs for Atomic SubSystem: '<S329>/Count Down Reset Enabled' */
    /* Switch: '<S331>/Switch1' incorporates:
     *  Constant: '<S331>/Constant Value'
     *  Constant: '<S340>/Calib'
     *  RelationalOperator: '<S331>/Greater  Than'
     *  Switch: '<S331>/Switch2'
     *  UnitDelay: '<S331>/Unit Delay'
     */
    if (VeTRAC_b_BCDeactvThreshNotMet)
    {
        TRAR_ac_DW.UnitDelay_DSTATE_i = KeTRAR_Cnt_BCFastPathDeactvThreshCntDwn;
    }
    else
    {
        if (((sint32)TRAR_ac_DW.UnitDelay_DSTATE_i) > 0)
        {
            /* UnitDelay: '<S331>/Unit Delay' incorporates:
             *  Constant: '<S331>/Constant Value1'
             *  Sum: '<S331>/Subtraction'
             *  Switch: '<S331>/Switch2'
             */
            TRAR_ac_DW.UnitDelay_DSTATE_i = (uint16)((sint32)(((sint32)
                TRAR_ac_DW.UnitDelay_DSTATE_i) - 1));
        }
    }

    /* End of Switch: '<S331>/Switch1' */
    /* End of Outputs for SubSystem: '<S329>/Count Down Reset Enabled' */

    /* Logic: '<S329>/Logical2' incorporates:
     *  Logic: '<S329>/Logical5'
     */
    VeTRAC_b_BCDFCOEntryMarginActv = ((VeTRAC_b_DFCOReq) && (!rtb_Equal4_p));

    /* Logic: '<S329>/Logical4' incorporates:
     *  Logic: '<S329>/Logical6'
     */
    VeTRAC_b_BCDFCOExitMarginActv = ((!VeTRAC_b_DFCOReq) && rtb_Equal4_p);

    /* Outputs for Atomic SubSystem: '<S329>/EdgeRising3' */
    /* Logic: '<S336>/OR1' incorporates:
     *  UnitDelay: '<S336>/Unit Delay'
     */
    rtb_Equal4_p = !TRAR_ac_DW.UnitDelay_DSTATE_ne;

    /* Update for UnitDelay: '<S336>/Unit Delay' */
    TRAR_ac_DW.UnitDelay_DSTATE_ne = VeTRAC_b_BCDFCOExitMarginActv;

    /* End of Outputs for SubSystem: '<S329>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S329>/EdgeRising2' */
    /* Logic: '<S335>/OR1' incorporates:
     *  UnitDelay: '<S335>/Unit Delay'
     */
    rtb_AND_nu = !TRAR_ac_DW.UnitDelay_DSTATE_m;

    /* Update for UnitDelay: '<S335>/Unit Delay' */
    TRAR_ac_DW.UnitDelay_DSTATE_m = VeTRAC_b_BCDFCOEntryMarginActv;

    /* End of Outputs for SubSystem: '<S329>/EdgeRising2' */

    /* If: '<S329>/If2' */
    if (VeTRAC_b_BCDFCOEntryMarginActv)
    {
        /* Outputs for IfAction SubSystem: '<S329>/DFCOEntryMargin' incorporates:
         *  ActionPort: '<S332>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S329>/EdgeRising2' */
        /* Switch: '<S332>/Switch9' incorporates:
         *  Logic: '<S335>/AND'
         *  Sum: '<S332>/Subtract'
         *  UnitDelay: '<S332>/Unit Delay1'
         */
        if ((VeTRAC_b_BCDFCOEntryMarginActv) && rtb_AND_nu)
        {
            TRAR_ac_DW.UnitDelay1_DSTATE_g =
                TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b - rtb_Switch5;
        }

        /* End of Switch: '<S332>/Switch9' */
        /* End of Outputs for SubSystem: '<S329>/EdgeRising2' */

        /* Merge: '<S329>/Merge8' incorporates:
         *  Constant: '<S344>/Calib'
         *  Product: '<S332>/Product'
         *  UnitDelay: '<S332>/Unit Delay1'
         */
        rtb_Summation18 = TRAR_ac_DW.UnitDelay1_DSTATE_g *
            KeTRAR_r_BCMtrTrqMrgnDFCO;

        /* End of Outputs for SubSystem: '<S329>/DFCOEntryMargin' */
    }
    else if (VeTRAC_b_BCDFCOExitMarginActv)
    {
        /* Outputs for IfAction SubSystem: '<S329>/DFCOExitMargin' incorporates:
         *  ActionPort: '<S333>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S329>/EdgeRising3' */
        /* Switch: '<S333>/Switch9' incorporates:
         *  Logic: '<S336>/AND'
         *  Sum: '<S333>/Subtract'
         *  UnitDelay: '<S333>/Unit Delay1'
         */
        if ((VeTRAC_b_BCDFCOExitMarginActv) && rtb_Equal4_p)
        {
            TRAR_ac_DW.UnitDelay1_DSTATE_l = VeTRAC_M_OptTeArb - rtb_Switch5;
        }

        /* End of Switch: '<S333>/Switch9' */
        /* End of Outputs for SubSystem: '<S329>/EdgeRising3' */

        /* Merge: '<S329>/Merge8' incorporates:
         *  Constant: '<S345>/Calib'
         *  Product: '<S333>/Product'
         *  UnitDelay: '<S333>/Unit Delay1'
         */
        rtb_Summation18 = TRAR_ac_DW.UnitDelay1_DSTATE_l *
            KeTRAR_r_BCMtrTrqMrgnDFCO;

        /* End of Outputs for SubSystem: '<S329>/DFCOExitMargin' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S329>/ElseDFCO' incorporates:
         *  ActionPort: '<S337>/Action Port'
         */
        /* Merge: '<S329>/Merge8' incorporates:
         *  Constant: '<S337>/Constant'
         *  SignalConversion generated from: '<S337>/Te_TrqMargin_DFCO'
         */
        rtb_Summation18 = 0.0F;

        /* End of Outputs for SubSystem: '<S329>/ElseDFCO' */
    }

    /* End of If: '<S329>/If2' */

    /* UnitDelay: '<S343>/Unit Delay' incorporates:
     *  RelationalOperator: '<S329>/Equal5'
     *  UnitDelay: '<S51>/UnitDelay2'
     */
    rtb_Equal4_p = (TRAR_ac_DW.UnitDelay2_DSTATE_o == 2);

    /* Switch: '<S329>/Switch9' incorporates:
     *  MinMax: '<S329>/Maximum2'
     *  UnitDelay: '<S329>/Unit Delay1'
     *  UnitDelay: '<S4>/UnitDelay3'
     */
    if (rtb_Equal4_p)
    {
        TRAR_ac_DW.UnitDelay1_DSTATE_a = VeTRAC_M_OptTe;
    }
    else
    {
        TRAR_ac_DW.UnitDelay1_DSTATE_a = fmaxf(VeTRAC_M_OptTe,
            TRAR_ac_DW.UnitDelay3_DSTATE);
    }

    /* End of Switch: '<S329>/Switch9' */

    /* Sum: '<S329>/Subtract1' incorporates:
     *  UnitDelay: '<S329>/Unit Delay1'
     */
    TRAR_ac_DW.UnitDelay1_DSTATE_a =
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h -
        TRAR_ac_DW.UnitDelay1_DSTATE_a;

    /* MinMax: '<S329>/Maximum' incorporates:
     *  Constant: '<S329>/Constant Value4'
     *  UnitDelay: '<S329>/Unit Delay1'
     */
    VeTRAC_M_BCFastPathOptTeMargin = fmaxf(TRAR_ac_DW.UnitDelay1_DSTATE_a, 0.0F);

    /* Switch: '<S329>/Switch1' incorporates:
     *  MinMax: '<S329>/Maximum3'
     *  UnitDelay: '<S329>/Unit Delay1'
     *  UnitDelay: '<S4>/UnitDelay3'
     */
    if (rtb_Equal4_p)
    {
        TRAR_ac_DW.UnitDelay1_DSTATE_a = rtb_Summation5;
    }
    else
    {
        TRAR_ac_DW.UnitDelay1_DSTATE_a = fmaxf(rtb_Summation5,
            TRAR_ac_DW.UnitDelay3_DSTATE);
    }

    /* End of Switch: '<S329>/Switch1' */

    /* Sum: '<S329>/Subtract6' incorporates:
     *  UnitDelay: '<S329>/Unit Delay1'
     */
    TRAR_ac_DW.UnitDelay1_DSTATE_a =
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h -
        TRAR_ac_DW.UnitDelay1_DSTATE_a;

    /* MinMax: '<S329>/Maximum1' incorporates:
     *  Constant: '<S329>/Constant Value1'
     *  UnitDelay: '<S329>/Unit Delay1'
     */
    VeTRAC_M_BCFastPathTactTeMaxMargin = fmaxf(TRAR_ac_DW.UnitDelay1_DSTATE_a,
        0.0F);

    /* Switch: '<S329>/Switch2' incorporates:
     *  Constant: '<S342>/Calib'
     *  RelationalOperator: '<S329>/Relational Operator3'
     *  RelationalOperator: '<S329>/Relational Operator4'
     */
    if (rtb_AND_ah)
    {
        rtb_Equal4_p = (VeTRAC_M_BCFastPathOptTeMargin >
                        KeTRAR_M_BCFastPathGradActvThrsh);
    }
    else
    {
        rtb_Equal4_p = (VeTRAC_M_BCFastPathTactTeMaxMargin >
                        KeTRAR_M_BCFastPathGradActvThrsh);
    }

    /* End of Switch: '<S329>/Switch2' */

    /* Logic: '<S329>/Logical3' */
    VeTRAC_b_BCFastPathActvThreshMet = (rtb_Equal4_p && rtb_AND_e);

    /* Outputs for Atomic SubSystem: '<S329>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S329>/Count Down Reset Enabled' */
    /* Logic: '<S343>/OR1' incorporates:
     *  Constant: '<S331>/Constant Value2'
     *  Logic: '<S329>/Logical1'
     *  Logic: '<S343>/NOT'
     *  Logic: '<S343>/OR'
     *  RelationalOperator: '<S331>/Greater  Than1'
     *  UnitDelay: '<S331>/Unit Delay'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    VeTRAC_b_BCFastPathMarginsActv = ((VeTRAC_b_BCFastPathActvThreshMet) ||
        ((((sint32)TRAR_ac_DW.UnitDelay_DSTATE_i) > 0) &&
         (TRAR_ac_DW.UnitDelay_DSTATE_br)));

    /* End of Outputs for SubSystem: '<S329>/Count Down Reset Enabled' */

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    TRAR_ac_DW.UnitDelay_DSTATE_br = VeTRAC_b_BCFastPathMarginsActv;

    /* End of Outputs for SubSystem: '<S329>/Signal Latch On With Reset1' */

    /* If: '<S329>/If1' */
    if (VeTRAC_b_BCFastPathMarginsActv)
    {
        /* Outputs for IfAction SubSystem: '<S329>/FastPathMargin' incorporates:
         *  ActionPort: '<S339>/Action Port'
         */
        /* Switch: '<S339>/Switch9' */
        if (rtb_AND_ah)
        {
            rtb_Summation5 = VeTRAC_M_BCFastPathOptTeMargin;
        }
        else
        {
            rtb_Summation5 = VeTRAC_M_BCFastPathTactTeMaxMargin;
        }

        /* End of Switch: '<S339>/Switch9' */

        /* Product: '<S339>/Product' incorporates:
         *  Constant: '<S346>/Calib'
         *  UnitDelay: '<S329>/Unit Delay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_a = rtb_Summation5 *
            KeTRAR_r_BCMtrTrqMrgnFastPath;

        /* End of Outputs for SubSystem: '<S329>/FastPathMargin' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S329>/ElseFastPath' incorporates:
         *  ActionPort: '<S338>/Action Port'
         */
        /* SignalConversion generated from: '<S338>/Te_TrqMargin_FstPth' incorporates:
         *  Constant: '<S338>/Constant'
         *  UnitDelay: '<S329>/Unit Delay1'
         */
        TRAR_ac_DW.UnitDelay1_DSTATE_a = 0.0F;

        /* End of Outputs for SubSystem: '<S329>/ElseFastPath' */
    }

    /* End of If: '<S329>/If1' */

    /* Outport: '<Root>/VeTRAR_M_BCTiMargin' incorporates:
     *  MinMax: '<S329>/MinMax'
     *  UnitDelay: '<S329>/Unit Delay1'
     */
    (void)Rte_Write_VeTRAR_M_BCTiMargin_Value(fmaxf(rtb_Summation18,
        TRAR_ac_DW.UnitDelay1_DSTATE_a));

    /* Update for UnitDelay: '<S329>/Unit Delay1' */
    TRAR_ac_DW.UnitDelay1_DSTATE_a =
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;

    /* End of Outputs for SubSystem: '<S318>/BoostedConverterMarginsCalc' */
#else

    /* Outputs for Atomic SubSystem: '<S318>/Else' */
    /* Outport: '<Root>/VeTRAR_M_BCTiMargin' incorporates:
     *  Constant: '<S330>/Constant'
     */
    (void)Rte_Write_VeTRAR_M_BCTiMargin_Value(0.0F);

    /* End of Outputs for SubSystem: '<S318>/Else' */
#endif

    /* End of Outputs for SubSystem: '<S22>/BstdCnvrtrTrqMrgns' */
    /* End of Outputs for SubSystem: '<S4>/TRAC_EngArb' */

    /* Outport: '<Root>/VeTRAR_b_EngDFCOReq' incorporates:
     *  Logic: '<S5>/AND'
     *  UnitDelay: '<S4>/UnitDelay2'
     */
    (void)Rte_Write_VeTRAR_b_EngDFCOReq_Value(TRAR_ac_DW.UnitDelay2_DSTATE_l1);

    /* Outport: '<Root>/VeTRAR_b_ThermalDerateEnbld' incorporates:
     *  Logic: '<S6>/AND'
     */
    (void)Rte_Write_VeTRAR_b_ThermalDerateEnbld_Value
        (VeTRAC_b_ThermalDerateEnbld);

    /* Outport: '<Root>/VeTRAR_b_ThermSysStressed' incorporates:
     *  Logic: '<S28>/AND'
     */
    (void)Rte_Write_VeTRAR_b_ThermSysStressed_Value(VeTRAC_b_ThermSysStressed);

    /* Sum: '<S8>/Summation2' incorporates:
     *  Abs: '<S8>/Abs'
     *  Constant: '<S39>/Calib'
     *  Constant: '<S8>/ConstantValue'
     *  Product: '<S8>/Product'
     *  Product: '<S8>/Product1'
     */
    VeTRAC_P_ExcessEnginePower = ((rtb_Sum_b * KeTRAR_n_NiForLoadEngmnt) /
        9549.3F) - fabsf(TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lo);

    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis5' */
    /* Switch: '<S33>/Switch1' incorporates:
     *  Constant: '<S33>/ConstantValue'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S37>/Calib'
     *  RelationalOperator: '<S33>/GreaterThan'
     *  RelationalOperator: '<S33>/GreaterThan1'
     *  UnitDelay: '<S33>/UnitDelay'
     */
    if (VeTRAC_P_ExcessEnginePower > KeTRAR_P_LoadEngmntThreshRSP)
    {
        TRAR_ac_DW.UnitDelay_DSTATE_pz = true;
    }
    else
    {
        TRAR_ac_DW.UnitDelay_DSTATE_pz = ((VeTRAC_P_ExcessEnginePower >=
            KeTRAR_P_LoadEngmntThreshLSP) && (TRAR_ac_DW.UnitDelay_DSTATE_pz));
    }

    /* End of Switch: '<S33>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis5' */

    /* Outport: '<Root>/VeTRAR_b_EngageThermalLoad' incorporates:
     *  Constant: '<S29>/Constant'
     *  Logic: '<S8>/Logical'
     *  RelationalOperator: '<S8>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRAR_MedTEBInport71'
     *  UnitDelay: '<S33>/UnitDelay'
     */
    (void)Rte_Write_VeTRAR_b_EngageThermalLoad_Value
        ((TRAR_ac_DW.UnitDelay_DSTATE_pz) && (((uint32)
           TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_li) !=
          CeESSR_e_EngOff));

    /* Outport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp' incorporates:
     *  DataTypeConversion: '<S11>/DataTypeConversion'
     *  UnitDelay: '<S4>/UnitDelay'
     */
    (void)Rte_Write_VeTRAR_e_HybCmndEngTorqRespTyp_Value
        ((TeTRAR_e_HybCmndEngTorqRespTyp)rtb_Switch4_ig);

    /* Outport: '<Root>/VeTRAR_e_EngCntrlMode' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     *  Merge: '<S22>/Merge7'
     */
    (void)Rte_Write_VeTRAR_e_EngCntrlMode_Value(VeTRAC_e_EngCntrlMode);

    /* Outport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd' incorporates:
     *  Gain: '<S17>/Gain'
     *  UnitDelay: '<S4>/UnitDelay1'
     */
    (void)Rte_Write_VeTRAR_M_HybCmndEngTorqPrdtd_Value
        (TRAR_ac_DW.UnitDelay1_DSTATE);

    /* Outport: '<Root>/VeTRAR_M_EngTorqCmndImmed' incorporates:
     *  Gain: '<S21>/Gain'
     *  UnitDelay: '<S4>/UnitDelay3'
     */
    (void)Rte_Write_VeTRAR_M_EngTorqCmndImmed_Value(TRAR_ac_DW.UnitDelay3_DSTATE);

    /* Outport: '<Root>/VeTRAR_M_TeMax' incorporates:
     *  MinMax: '<S25>/MinMax'
     *  Sum: '<S25>/Summation3'
     */
    (void)Rte_Write_VeTRAR_M_TeMax_Value(fminf(rtb_Vector,
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ny) +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* Switch: '<S25>/Switch1' */
    if (rtb_NotEqual_cp)
    {
        rtb_Summation5 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o;
    }
    else
    {
        rtb_Summation5 = TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c;
    }

    /* End of Switch: '<S25>/Switch1' */

    /* Outport: '<Root>/VeTRAR_M_TeMin' incorporates:
     *  MinMax: '<S25>/MinMax2'
     *  Sum: '<S25>/Summation8'
     */
    (void)Rte_Write_VeTRAR_M_TeMin_Value(fmaxf
        (TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_be, rtb_Summation5) +
        TRAR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* Update for UnitDelay: '<S8>/UnitDelay2' */
    TRAR_ac_DW.UnitDelay2_DSTATE_l = VeTRAC_b_ThermSysStressed;

    /* Update for UnitDelay: '<S4>/UnitDelay5' incorporates:
     *  UnitDelay: '<S4>/UnitDelay3'
     */
    TRAR_ac_DW.UnitDelay5_DSTATE_n = TRAR_ac_DW.UnitDelay3_DSTATE;

    /* Update for UnitDelay: '<S4>/UnitDelay4' incorporates:
     *  Merge: '<S22>/Merge7'
     */
    TRAR_ac_DW.UnitDelay4_DSTATE = VeTRAC_e_EngCntrlMode;

    /* Update for UnitDelay: '<S509>/UnitDelay1' incorporates:
     *  UnitDelay: '<S4>/UnitDelay4'
     */
    TRAR_ac_DW.UnitDelay1_DSTATE_oy = rtb_UnitDelay4;

    /* Update for UnitDelay: '<S509>/UnitDelay' incorporates:
     *  Constant: '<S509>/TRUEConstant'
     */
    TRAR_ac_DW.UnitDelay_DSTATE_k = true;

    /* Update for UnitDelay: '<S24>/UnitDelay2' */
    TRAR_ac_DW.UnitDelay2_DSTATE = VeTRAC_M_OptTeArb;

    /* Update for UnitDelay: '<S24>/UnitDelay3' incorporates:
     *  DataTypeConversion: '<S10>/DataTypeConversion'
     */
    TRAR_ac_DW.UnitDelay3_DSTATE_ew = VeTRAC_e_DsrdEngState;

    /* End of Outputs for SubSystem: '<S1>/TRAC_DtrmnEngCmnd' */
    /* End of Outputs for SubSystem: '<Root>/TRAR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRAR_2

FUNC(void, TRAR_CODE) TRAR_PUP(void)
{

#if Rte_SysCon_Variant_TRAR_2

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_TRAR_2

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_TRAR_2

    /* RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
    /* Inport: '<Root>/VeOITR_M_OptInputTorqAllCylFuel' */
    (void)Rte_Read_VeOITR_M_OptInputTorqAllCylFuel_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTITR_M_PumpTorq' */
    (void)Rte_Read_VeTITR_M_PumpTorq_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/TRAR_PUP' */
    /* Outport: '<Root>/VeTRAR_M_EngTorqCmndImmed' incorporates:
     *  Constant: '<S565>/ConstantValue1'
     *  SignalConversion generated from: '<S2>/VeTRAR_M_EngTorqCmndImmed'
     */
    (void)Rte_Write_VeTRAR_M_EngTorqCmndImmed_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd' incorporates:
     *  Constant: '<S565>/ConstantValue2'
     *  SignalConversion generated from: '<S2>/VeTRAR_M_HybCmndEngTorqPrdtd'
     */
    (void)Rte_Write_VeTRAR_M_HybCmndEngTorqPrdtd_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_TeMax' incorporates:
     *  Constant: '<S565>/ConstantValue3'
     *  SignalConversion generated from: '<S2>/VeTRAR_M_TeMax'
     */
    (void)Rte_Write_VeTRAR_M_TeMax_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_TeMin' incorporates:
     *  Constant: '<S565>/ConstantValue4'
     *  SignalConversion generated from: '<S2>/VeTRAR_M_TeMin'
     */
    (void)Rte_Write_VeTRAR_M_TeMin_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_b_EngCylDeacReq' incorporates:
     *  Constant: '<S565>/FALSEConstant'
     *  SignalConversion generated from: '<S2>/VeTRAR_b_EngCylDeacReq'
     */
    (void)Rte_Write_VeTRAR_b_EngCylDeacReq_Value(false);

    /* Outport: '<Root>/VeTRAR_b_EngDFCOReq' incorporates:
     *  Constant: '<S565>/FALSEConstant1'
     *  SignalConversion generated from: '<S2>/VeTRAR_b_EngDFCOReq'
     */
    (void)Rte_Write_VeTRAR_b_EngDFCOReq_Value(false);

    /* Outport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp' incorporates:
     *  Constant: '<S567>/Constant'
     *  SignalConversion generated from: '<S2>/VeTRAR_e_HybCmndEngTorqRespTyp'
     */
    (void)Rte_Write_VeTRAR_e_HybCmndEngTorqRespTyp_Value(CeTRAR_e_Inactive);

    /* Outputs for Atomic SubSystem: '<S2>/TRAC_InitEngTorq' */
    /* Sum: '<S564>/Sum' incorporates:
     *  DataStoreWrite: '<S564>/DataStoreWrite9'
     */
    TRAR_ac_DW.VeTRAC_M_OptTe_DS = tmpRead_0 + tmpRead;

    /* End of Outputs for SubSystem: '<S2>/TRAC_InitEngTorq' */
    /* End of Outputs for SubSystem: '<Root>/TRAR_PUP' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_TRAR_1

FUNC(void, TRAR_CODE) TRAR_PwrOn(void)
{

#if Rte_SysCon_Variant_TRAR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
    /* Outputs for Function Call SubSystem: '<Root>/TRAR_PwrOn' */
    /* Outport: '<Root>/VeTRAR_M_BCTiMargin' incorporates:
     *  Constant: '<S569>/ConstantValue8'
     *  SignalConversion generated from: '<S3>/VeTRAR_M_BCTiMargin'
     */
    (void)Rte_Write_VeTRAR_M_BCTiMargin_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_EngReserveTrqCmnd' incorporates:
     *  Constant: '<S569>/ConstantValue6'
     *  SignalConversion generated from: '<S3>/VeTRAR_M_EngReserveTrqCmnd'
     */
    (void)Rte_Write_VeTRAR_M_EngReserveTrqCmnd_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_EngTorqCmndImmed' incorporates:
     *  Constant: '<S569>/ConstantValue1'
     *  SignalConversion generated from: '<S3>/VeTRAR_M_EngTorqCmndImmed'
     */
    (void)Rte_Write_VeTRAR_M_EngTorqCmndImmed_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_HybCmndEngTorqPrdtd' incorporates:
     *  Constant: '<S569>/ConstantValue2'
     *  SignalConversion generated from: '<S3>/VeTRAR_M_HybCmndEngTorqPrdtd'
     */
    (void)Rte_Write_VeTRAR_M_HybCmndEngTorqPrdtd_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_TeMax' incorporates:
     *  Constant: '<S569>/ConstantValue3'
     *  SignalConversion generated from: '<S3>/VeTRAR_M_TeMax'
     */
    (void)Rte_Write_VeTRAR_M_TeMax_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_M_TeMin' incorporates:
     *  Constant: '<S569>/ConstantValue4'
     *  SignalConversion generated from: '<S3>/VeTRAR_M_TeMin'
     */
    (void)Rte_Write_VeTRAR_M_TeMin_Value(0.0F);

    /* Outport: '<Root>/VeTRAR_b_EngCylDeacReq' incorporates:
     *  Constant: '<S569>/FALSEConstant'
     *  SignalConversion generated from: '<S3>/VeTRAR_b_EngCylDeacReq'
     */
    (void)Rte_Write_VeTRAR_b_EngCylDeacReq_Value(false);

    /* Outport: '<Root>/VeTRAR_b_EngDFCOReq' incorporates:
     *  Constant: '<S569>/FALSEConstant1'
     *  SignalConversion generated from: '<S3>/VeTRAR_b_EngDFCOReq'
     */
    (void)Rte_Write_VeTRAR_b_EngDFCOReq_Value(false);

    /* Outport: '<Root>/VeTRAR_b_EngageThermalLoad' incorporates:
     *  Constant: '<S569>/FALSEConstant2'
     *  SignalConversion generated from: '<S3>/VeTRAR_b_EngageThermalLoad'
     */
    (void)Rte_Write_VeTRAR_b_EngageThermalLoad_Value(false);

    /* Outport: '<Root>/VeTRAR_b_ThermSysStressed' incorporates:
     *  Constant: '<S569>/FALSEConstant4'
     *  SignalConversion generated from: '<S3>/VeTRAR_b_ThermSysStressed'
     */
    (void)Rte_Write_VeTRAR_b_ThermSysStressed_Value(false);

    /* Outport: '<Root>/VeTRAR_b_ThermalDerateEnbld' incorporates:
     *  Constant: '<S569>/FALSEConstant3'
     *  SignalConversion generated from: '<S3>/VeTRAR_b_ThermalDerateEnbld'
     */
    (void)Rte_Write_VeTRAR_b_ThermalDerateEnbld_Value(false);

    /* Outport: '<Root>/VeTRAR_e_EngCntrlMode' incorporates:
     *  Constant: '<S571>/Constant'
     *  SignalConversion generated from: '<S3>/VeTRAR_e_EngCntrlMode'
     */
    (void)Rte_Write_VeTRAR_e_EngCntrlMode_Value(CeTRAR_e_TorqueMode);

    /* Outport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp' incorporates:
     *  Constant: '<S570>/Constant'
     *  SignalConversion generated from: '<S3>/VeTRAR_e_HybCmndEngTorqRespTyp'
     */
    (void)Rte_Write_VeTRAR_e_HybCmndEngTorqRespTyp_Value(CeTRAR_e_Inactive);

    /* End of Outputs for SubSystem: '<Root>/TRAR_PwrOn' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, TRAR_CODE) TRAR_ac_Init(void)
{

#if Rte_SysCon_Variant_TRAR_2

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/TRAR_MedTEB' */
    /* SystemInitialize for Atomic SubSystem: '<S1>/TRAC_DtrmnEngCmnd' */
    /* Start for If: '<S9>/If' */
    TRAR_ac_DW.If_ActiveSubsystem = -1;

    /* End of SystemInitialize for SubSystem: '<S1>/TRAC_DtrmnEngCmnd' */
    /* End of SystemInitialize for SubSystem: '<Root>/TRAR_MedTEB' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

    /* SystemInitialize for Merge: '<Root>/Merge_1' incorporates:
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_11'
     *  Merge: '<Root>/Merge_12'
     *  Merge: '<Root>/Merge_13'
     *  Merge: '<Root>/Merge_2'
     *  Merge: '<Root>/Merge_3'
     *  Merge: '<Root>/Merge_4'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7'
     *  Merge: '<Root>/Merge_8'
     *  Merge: '<Root>/Merge_9'
     */
#if Rte_SysCon_Variant_TRAR_1 || Rte_SysCon_Variant_TRAR_2

    /* SystemInitialize for Outport: '<Root>/VeTRAR_e_HybCmndEngTorqRespTyp' */
    (void)Rte_Write_VeTRAR_e_HybCmndEngTorqRespTyp_Value(CeTRAR_e_Inactive);

    /* SystemInitialize for Outport: '<Root>/VeTRAR_e_EngCntrlMode' */
    (void)Rte_Write_VeTRAR_e_EngCntrlMode_Value(CeTRAR_e_TorqueMode);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
