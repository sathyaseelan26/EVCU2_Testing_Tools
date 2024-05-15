/*
 * File: AXLR_ac.c
 *
 * Code generated for Simulink model 'AXLR_ac'.
 *
 * Model version                  : 9.203
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:07:43 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AXLR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_AXLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, AXLR_VAR_INIT) HeAXLR_b_PhyscBasedAxleTrqDirectn =
    0;                                 /* Referenced by:
                                        * '<S13>/Calib'
                                        * '<S83>/Calib'
                                        */

#if Rte_SysCon_Variant_AXLR_Dual_Axis

static volatile CONST(boolean, AXLR_VAR_INIT) HeAXLR_b_UseMtrC4Front = 0;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

static volatile CONST(float32, AXLR_VAR_INIT) HeAXLR_k_PRNDCoeff_Drv = 1.0F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

static volatile CONST(float32, AXLR_VAR_INIT) HeAXLR_k_PRNDCoeff_PN = 0.0F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

static volatile CONST(float32, AXLR_VAR_INIT) HeAXLR_k_PRNDCoeff_Rev = 1.0F;/* Referenced by: '<S120>/Calib' */

#endif

static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_ActAxleOutputTrq = 0.0F;/* Referenced by: '<S22>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_ActAxleTrq = 0.0F;/* Referenced by: '<S23>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_ActualAxleTrq = 0.0F;/* Referenced by: '<S24>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_ActualOutputTorque = 0.0F;/* Referenced by: '<S25>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_DrvrIntndedAxleTrq_Arb =
    0.0F;                              /* Referenced by: '<S26>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_FrntAxlTrqEstOutInit =
    0.0F;                              /* Referenced by: '<S186>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_FrntAxlTrqEstOvrdVal =
    0.0F;                              /* Referenced by: '<S27>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_MaxAxleTrqCruise = 0.0F;/* Referenced by: '<S28>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_MinAxleTorqCap = 0.0F;/* Referenced by: '<S29>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_MinAxleTorqCapOvrd =
    -100.0F;                           /* Referenced by: '<S84>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_MinAxleTrqCruise = 0.0F;/* Referenced by: '<S30>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_OutTorqMaxOffset = 0.0F;/* Referenced by: '<S86>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_OvrrdActualAxleTrq_phy =
    0.0F;                              /* Referenced by: '<S31>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_OvrrdClch1Torq_Axle =
    0.0F;                              /* Referenced by: '<S32>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_OvrrdClch3Torq_Axle =
    0.0F;                              /* Referenced by: '<S33>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_RrAxlTrqEstOutInit = 0.0F;/* Referenced by: '<S187>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_RrAxlTrqEstOvrdVal = 0.0F;/* Referenced by: '<S34>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_SplitFrntTrqReqOutInit =
    0.0F;                              /* Referenced by: '<S188>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_SplitFrntTrqReqOvrdVal =
    0.0F;                              /* Referenced by: '<S35>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_SplitRrAxlTrqReqOutInit =
    0.0F;                              /* Referenced by: '<S189>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_M_SplitRrAxlTrqReqOvrdVal =
    0.0F;                              /* Referenced by: '<S36>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT)
    KeAXLR_Pct_ActAxleTorqRrAxleTorqSplit = 100.0F;/* Referenced by: '<S87>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT)
    KeAXLR_Pct_ActAxleTorqRrAxleTorqSplitVal = 0.0F;/* Referenced by: '<S37>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_ActAxleTrqFA_OvrrdEnbl =
    0;                                 /* Referenced by: '<S38>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_ActAxleTrqFA_OvrrdVal = 0;/* Referenced by: '<S39>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_ActualAxleTrqFA_OvrrdEnbl
    = 0;                               /* Referenced by: '<S40>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_ActualAxleTrqFA_OvrrdVal =
    0;                                 /* Referenced by: '<S41>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_ActualTo_IncludeTiCL = 0;/* Referenced by: '<S69>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_DrvrAxleTrq_PhyscsBasd =
    0;                                 /* Referenced by: '<S88>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_FrntAxlTrqEstOvrdEnbl = 0;/* Referenced by: '<S42>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdActAxleOutputTrq = 0;/* Referenced by: '<S43>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT)
    KeAXLR_b_OvrdActAxleTorqRrAxleTorqSplit = 0;/* Referenced by: '<S44>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdActAxleTrq = 0;/* Referenced by: '<S45>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdActualAxleTrq = 0;/* Referenced by: '<S46>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdActualOutputTorque =
    0;                                 /* Referenced by: '<S47>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdElecAxleTorqCapSclr =
    0;                                 /* Referenced by: '<S48>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdMaxAxleTrqCruise = 0;/* Referenced by: '<S49>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdMinAxleTorqCap = 0;/* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrdMinAxleTrqCruise = 0;/* Referenced by: '<S51>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT)
    KeAXLR_b_OvrrdActualAxleTrq_phyEnbl = 0;/* Referenced by: '<S52>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrrdClch1Torq_AxleEnbl =
    0;                                 /* Referenced by: '<S53>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrrdClch3Torq_AxleEnbl =
    0;                                 /* Referenced by: '<S54>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_OvrrdDrvrIntndedAxleTrq =
    0;                                 /* Referenced by: '<S55>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_RrAxlTrqEstOvrdEnbl = 0;/* Referenced by: '<S56>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_SplitFrntTrqReqOvrdEnbl =
    0;                                 /* Referenced by: '<S57>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_SplitRrAxlTrqReqOvrdEnbl =
    0;                                 /* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseATRRDrvTrq = 1;/* Referenced by: '<S89>/Calib' */

#if Rte_SysCon_Variant_AXLR_Dual_Axis

static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseHTDR4RefAxlTrq = 1;/* Referenced by: '<S175>/Calib' */

#endif

static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseNidotProf = 0;/* Referenced by: '<S71>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseNidotProf_ToCmnd = 1;/* Referenced by: '<S74>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseOITR4MaxCruiseTrq = 0;/* Referenced by: '<S149>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseOITR4MinCruiseTrq = 0;/* Referenced by: '<S150>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UsePhyBasedToMinMax = 0;/* Referenced by:
                                                                      * '<S161>/Calib'
                                                                      * '<S151>/Calib'
                                                                      */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseSysLmts4MinCruiseTrq =
    0;                                 /* Referenced by: '<S90>/Calib' */

#if Rte_SysCon_Variant_AXLR_Dual_Axis

static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseTgtTrq4AxlTrqEst = 0;/* Referenced by: '<S176>/Calib' */

#endif

static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseToCLInActualTo = 0;/* Referenced by:
                                                                      * '<S63>/Calib'
                                                                      * '<S91>/Calib'
                                                                      */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseZeroNidot = 1;/* Referenced by: '<S72>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_UseZeroNidot_ToCmnd = 0;/* Referenced by: '<S75>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_VTVRTactToMaxOvrd = 0;/* Referenced by: '<S152>/Calib' */
static volatile CONST(boolean, AXLR_VAR_INIT) KeAXLR_b_VTVRTactToMinOvrd = 0;/* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_k_FiltCoeffFrntAxlTrqEst =
    1.0F;                              /* Referenced by: '<S14>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_k_FiltCoeffRrAxlTrqEst =
    1.0F;                              /* Referenced by: '<S15>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_k_FiltCoeffSplitFrntTrqReq =
    1.0F;                              /* Referenced by: '<S16>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_k_FiltCoeffSplitRrAxlTrqReq
    = 1.0F;                            /* Referenced by: '<S17>/Calib' */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_k_TorqMinMax_LD = -0.2F;/* Referenced by:
                                                                      * '<S162>/Calib'
                                                                      * '<S154>/Calib'
                                                                      */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_k_TorqMinMax_LU = 0.2F;/* Referenced by:
                                                                      * '<S163>/Calib'
                                                                      * '<S155>/Calib'
                                                                      */
static volatile CONST(float32, AXLR_VAR_INIT) KeAXLR_s_ElecAxleTorqCapSclr =
    0.0F;                              /* Referenced by: '<S59>/Calib' */

#if Rte_SysCon_Variant_AXLR_Dual_Axis

static volatile CONST(float32, AXLR_VAR_INIT) KtAXLR_n_FrntAxlQuadVec[5] =
{
    0.0F, 0.2F, 0.4F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S164>/Vector' */

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

static volatile CONST(float32, AXLR_VAR_INIT) KtAXLR_n_RrAxlQuadVec[5] =
{
    0.0F, 0.2F, 0.4F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S165>/Vector' */

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

static volatile CONST(float32, AXLR_VAR_INIT) KtAXLR_r_FrntAxlQuadFctr[5] =
{
    0.0F, 0.2F, 0.4F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S164>/Vector' */

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

static volatile CONST(float32, AXLR_VAR_INIT) KtAXLR_r_RrAxlQuadFctr[5] =
{
    0.0F, 0.2F, 0.4F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S165>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_AXLR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ActAxleOutputTrq;/* '<S95>/Gain' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ActAxleTrq;/* '<S96>/Gain' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ActualAxleTrq;/* '<S61>/Switch4' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ActualAxleTrq_phy;/* '<S61>/Multiplication4' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ActualOutputTorque;/* '<S64>/Gain' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_CmndTo_FrmToMisc;/* '<S66>/Gain' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_CommandedTo;/* '<S65>/Gain' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_DrvrIntndedAxleTrq_Arb;/* '<S61>/Switch' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_MaxAxleTrqCruise;/* '<S61>/Multiplication8' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_MinAxleTrqCruise;/* '<S61>/Multiplication10' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_TiActual;/* '<S62>/Switch' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ToFromTC1;/* '<S68>/Product3' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ToFromTC3;/* '<S68>/Product4' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_M_ToNonStatic;/* '<S67>/Product2' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_dn_InputAccel;/* '<S67>/1' */
static VAR(float32, AXLR_VAR_INIT) VeAXLC_k_PRNDL_Coeff;
                                      /* '<S61>/SigConvForSigProp_Variant4_0' */
static VAR(float32, AXLR_VAR_INIT) VeAXLR_K_PRNDL_MultFctr;/* '<S148>/Switch5' */
static VAR(float32, AXLR_VAR_INIT) VeAXLR_K_ToBlendFctr;/* '<S157>/Sum3' */
static VAR(float32, AXLR_VAR_INIT) VeAXLR_M_MaxTransTo_Axle;/* '<S104>/Gain' */
static VAR(float32, AXLR_VAR_INIT) VeAXLR_M_ToMaxArb;/* '<S107>/Merge2' */
static VAR(float32, AXLR_VAR_INIT) VeAXLR_M_ToMax_Selected;/* '<S107>/Switch2' */
static VAR(float32, AXLR_VAR_INIT) VeAXLR_M_ToMinArb;/* '<S107>/Merge3' */
static VAR(float32, AXLR_VAR_INIT) VeAXLR_M_ToMin_Selected;/* '<S107>/Switch3' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

VAR(B_AXLR_ac_T, AXLR_VAR_INIT) AXLR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

VAR(DW_AXLR_ac_T, AXLR_VAR_INIT) AXLR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AXLR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, AXLR_CODE) AXLR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_1;
    float32 tmpRead_2;
    float32 tmpRead_3;
    float32 tmpRead_4;
    float32 tmpRead_5;

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 tmpRead_7;

#endif

    float32 tmpRead_8;
    float32 tmpRead_9;
    float32 tmpRead_a;
    float32 tmpRead_b;
    float32 tmpRead_c;
    float32 tmpRead_d;

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 tmpRead_e;

#endif

#if Rte_SysCon_Variant_AXLR_RTC_On

    float32 tmpRead_f;

#endif

    float32 rtb_Switch_g[3];
    float32 rtb_Abs1_e;
    float32 rtb_Abs2_a;
    float32 tmpRead_g;

#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy || Rte_SysCon_Variant_AXLR_RTC_On

    boolean rtb_OR3;

#endif

    float32 rtb_Multiplication2[2];
    float32 rtb_Sum_kq;
    float32 rtb_TmpSignalConversionAtVeWTAR;

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtProduc[16];

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_Merge2[2];

#endif

    float32 rtb_TmpSignalConversionAtVaTS_o[19];
    float32 rtb_Sum_e1[11];
    float32 rtb_Vector_b[11];
    float32 rtb_TmpSignalConversionAtVeAT_i;
    float32 rtb_TmpSignalConversionAtVeHSER;
    float32 rtb_TmpSignalConversionAtVeHT_g;
    float32 rtb_TmpSignalConversionAtVeH_ep;
    float32 rtb_TmpSignalConversionAtVeOI_m;
    float32 rtb_TmpSignalConversionAtVeTT_k;

#if Rte_SysCon_Variant_AXLR_RTC_On

    float32 rtb_TmpSignalConversionAtVeVS_j;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_Switch1_b[2];

#endif

    float32 rtb_Sum2_j;
    float32 rtb_TmpSignalConversionAtVeTITR;

#if Rte_SysCon_Variant_AXLR_RTC_On

    float32 rtb_Sum3_e[11];

#endif

    float32 rtb_Sum2_m;
    float32 rtb_TmpSignalConversionAtVeHS_a;
    float32 rtb_TmpSignalConversionAtVeHS_b;
    float32 rtb_TmpSignalConversionAtVeHS_l;
    float32 rtb_TmpSignalConversionAtVeHS_p;
    float32 rtb_TmpSignalConversionAtVeH_fb;
    float32 rtb_TmpSignalConversionAtVeMTIR;
    float32 rtb_TmpSignalConversionAtVeMTQR;
    float32 rtb_TmpSignalConversionAtVeMT_i;
    float32 rtb_TmpSignalConversionAtVeOITR;
    float32 rtb_TmpSignalConversionAtVeTCCR;
    float32 rtb_TmpSignalConversionAtVeTISR;
    float32 rtb_TmpSignalConversionAtVeTI_a;
    float32 rtb_TmpSignalConversionAtVeVSDR;
    float32 rtb_TmpSignalConversionAtVeVS_c;
    float32 rtb_Vector_a;

#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;

#endif

#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR;

#endif

    float32 rtb_TmpSignalConversionAtVeATRR;
    float32 rtb_TmpSignalConversionAtVeAT_d;
    float32 rtb_TmpSignalConversionAtVeHT_h;
    float32 rtb_TmpSignalConversionAtVeHT_o;
    float32 rtb_TmpSignalConversionAtVeTTQR;
    float32 rtb_TmpSignalConversionAtVeTT_p;

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVeHTDR;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVeHT_k;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVeHT_b;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVeHT_n;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVeH_ek;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVeHT_i;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVaTSXR[19];

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_TmpSignalConversionAtVaTS_k[19];

#endif

    sint32 i;
    float32 tmp[16];
    float32 rtb_TmpSignalConversionAtVeMT_0[13];
    float32 rtb_TmpSignalConversionAtVeTI_0[6];
    float32 Gain_e2;
    float32 rtb_TmpSignalConversionAtVeTTIR;

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_Switch1_mc_idx_0;

#endif

#if Rte_SysCon_Variant_AXLR_Dual_Axis

    float32 rtb_Switch1_mc_idx_1;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AXLR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_TorqAchieved_AEMD' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_TorqAchieved_AEMD'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_TorqAchieved_AEMD_Value
        (&rtb_TmpSignalConversionAtVeMTQR);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrB_TorqAchieved_AEMD' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved_AEMD'
     */
    (void)Rte_Read_VeMTIR_M_MtrB_TorqAchieved_AEMD_Value
        (&rtb_TmpSignalConversionAtVeMTIR);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrC_TorqAchieved_AEMD' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_TorqAchieved_AEMD'
     */
    (void)Rte_Read_VeMTIR_M_MtrC_TorqAchieved_AEMD_Value
        (&rtb_TmpSignalConversionAtVeMT_i);

    /* SignalConversion generated from: '<S1>/VeTCCR_M_Timp' incorporates:
     *  Inport: '<Root>/VeTCCR_M_Timp'
     */
    (void)Rte_Read_VeTCCR_M_Timp_Value(&rtb_TmpSignalConversionAtVeTCCR);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch1_TorqEst_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch2_TorqEst_Value(&rtb_TmpSignalConversionAtVeHS_a);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch3_TorqEst_Value(&rtb_TmpSignalConversionAtVeH_ep);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch4_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch4_TorqEst_Value(&rtb_TmpSignalConversionAtVeHS_p);

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_TmpSignalConversionAtVeTISR);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR);

    /* SignalConversion generated from: '<S1>/VeVSDR_dn_PrimNodot' incorporates:
     *  Inport: '<Root>/VeVSDR_dn_PrimNodot'
     */
    (void)Rte_Read_VeVSDR_dn_PrimNodot_Value(&rtb_TmpSignalConversionAtVeVS_c);

    /* SignalConversion generated from: '<S1>/VeHSER_n_Nx' incorporates:
     *  Inport: '<Root>/VeHSER_n_Nx'
     */
    (void)Rte_Read_VeHSER_n_Nx_Value(&rtb_TmpSignalConversionAtVeHS_l);

    /* SignalConversion generated from: '<S1>/VeHSER_dn_NxDot' incorporates:
     *  Inport: '<Root>/VeHSER_dn_NxDot'
     */
    (void)Rte_Read_VeHSER_dn_NxDot_Value(&rtb_TmpSignalConversionAtVeH_fb);

    /* SignalConversion generated from: '<S1>/VaTSXR_r_AXLRCalcTofEqn' incorporates:
     *  SignalConversion generated from: '<S1>/VaTSXR_r_AXLRCalcTorEqn'
     */
#if Rte_SysCon_Variant_AXLR_Dual_Axis

    /* SignalConversion generated from: '<S1>/VaTSXR_r_AXLRCalcTofEqn' incorporates:
     *  Inport: '<Root>/VaTSXR_r_AXLRCalcTofEqn'
     */
    (void)Rte_Read_VaTSXR_r_AXLRCalcTofEqn_Value(rtb_TmpSignalConversionAtVaTSXR);

    /* SignalConversion generated from: '<S1>/VaTSXR_r_AXLRCalcTorEqn' incorporates:
     *  Inport: '<Root>/VaTSXR_r_AXLRCalcTorEqn'
     */
    (void)Rte_Read_VaTSXR_r_AXLRCalcTorEqn_Value(rtb_TmpSignalConversionAtVaTS_k);

#endif

    /* End of SignalConversion generated from: '<S1>/VaTSXR_r_AXLRCalcTofEqn' */

    /* SignalConversion generated from: '<S1>/VeWTAR_r_PRNDL_Coeff' incorporates:
     *  Inport: '<Root>/VeWTAR_r_PRNDL_Coeff'
     */
    (void)Rte_Read_VeWTAR_r_PRNDL_Coeff_Value(&rtb_TmpSignalConversionAtVeWTAR);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Ta_Max_Allowed' incorporates:
     *  SignalConversion generated from: '<S1>/VeHTDR_M_Ta_Min_Allowed'
     *  SignalConversion generated from: '<S1>/VeHTDR_M_Tb_Max_Allowed'
     *  SignalConversion generated from: '<S1>/VeHTDR_M_Tb_Min_Allowed'
     *  SignalConversion generated from: '<S1>/VeHTDR_M_Tc_Max_Allowed'
     *  SignalConversion generated from: '<S1>/VeHTDR_M_Tc_Min_Allowed'
     */
#if Rte_SysCon_Variant_AXLR_Dual_Axis

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Ta_Max_Allowed' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Ta_Max_Allowed'
     */
    (void)Rte_Read_VeHTDR_M_Ta_Max_Allowed_Value
        (&rtb_TmpSignalConversionAtVeHTDR);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Ta_Min_Allowed' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Ta_Min_Allowed'
     */
    (void)Rte_Read_VeHTDR_M_Ta_Min_Allowed_Value
        (&rtb_TmpSignalConversionAtVeHT_k);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Tb_Max_Allowed' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Tb_Max_Allowed'
     */
    (void)Rte_Read_VeHTDR_M_Tb_Max_Allowed_Value
        (&rtb_TmpSignalConversionAtVeHT_b);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Tb_Min_Allowed' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Tb_Min_Allowed'
     */
    (void)Rte_Read_VeHTDR_M_Tb_Min_Allowed_Value
        (&rtb_TmpSignalConversionAtVeHT_n);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Tc_Max_Allowed' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Tc_Max_Allowed'
     */
    (void)Rte_Read_VeHTDR_M_Tc_Max_Allowed_Value
        (&rtb_TmpSignalConversionAtVeH_ek);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Tc_Min_Allowed' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Tc_Min_Allowed'
     */
    (void)Rte_Read_VeHTDR_M_Tc_Min_Allowed_Value
        (&rtb_TmpSignalConversionAtVeHT_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_M_Ta_Max_Allowed' */

    /* SignalConversion generated from: '<S1>/VeHTDR_M_OutTorqReqModHH' incorporates:
     *  Inport: '<Root>/VeHTDR_M_OutTorqReqModHH'
     */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value
        (&rtb_TmpSignalConversionAtVeHT_o);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Ti_RL_TorqAct' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Ti_RL_TorqAct'
     */
    (void)Rte_Read_VeHTDR_M_Ti_RL_TorqAct_Value(&rtb_TmpSignalConversionAtVeHT_g);

    /* SignalConversion generated from: '<S1>/VeTITR_M_To_CL_Fast' incorporates:
     *  Inport: '<Root>/VeTITR_M_To_CL_Fast'
     */
    (void)Rte_Read_VeTITR_M_To_CL_Fast_Value(&rtb_TmpSignalConversionAtVeTITR);

    /* SignalConversion generated from: '<S1>/VeOITR_M_OutTorqReqModTactMax' incorporates:
     *  Inport: '<Root>/VeOITR_M_OutTorqReqModTactMax'
     */
    (void)Rte_Read_VeOITR_M_OutTorqReqModTactMax_Value
        (&rtb_TmpSignalConversionAtVeOITR);

    /* SignalConversion generated from: '<S1>/VeOITR_M_OutTorqReqModTactMin' incorporates:
     *  Inport: '<Root>/VeOITR_M_OutTorqReqModTactMin'
     */
    (void)Rte_Read_VeOITR_M_OutTorqReqModTactMin_Value
        (&rtb_TmpSignalConversionAtVeOI_m);

    /* SignalConversion generated from: '<S1>/VaTSXR_r_AXLRCalcToEqn' incorporates:
     *  Inport: '<Root>/VaTSXR_r_AXLRCalcToEqn'
     */
    (void)Rte_Read_VaTSXR_r_AXLRCalcToEqn_Value(rtb_TmpSignalConversionAtVaTS_o);

    /* SignalConversion generated from: '<S1>/VeTISR_dn_InputAcceltn' incorporates:
     *  Inport: '<Root>/VeTISR_dn_InputAcceltn'
     */
    (void)Rte_Read_VeTISR_dn_InputAcceltn_Value(&rtb_TmpSignalConversionAtVeTI_a);

    /* SignalConversion generated from: '<S1>/VeHSER_dn_InputAccelProfile' incorporates:
     *  Inport: '<Root>/VeHSER_dn_InputAccelProfile'
     */
    (void)Rte_Read_VeHSER_dn_InputAccelProfile_Value
        (&rtb_TmpSignalConversionAtVeHS_b);

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value(&rtb_TmpSignalConversionAtVeFWDR);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' */

    /* SignalConversion generated from: '<S1>/VeATRR_M_MinTransTo' incorporates:
     *  Inport: '<Root>/VeATRR_M_MinTransTo'
     */
    (void)Rte_Read_VeATRR_M_MinTransTo_Value(&rtb_TmpSignalConversionAtVeATRR);

    /* SignalConversion generated from: '<S1>/VeATRR_M_MaxTransTo' incorporates:
     *  Inport: '<Root>/VeATRR_M_MaxTransTo'
     */
    (void)Rte_Read_VeATRR_M_MaxTransTo_Value(&rtb_TmpSignalConversionAtVeAT_d);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_SumMaxTrqDsrd' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumMaxTrqDsrd'
     */
    (void)Rte_Read_VeTTQR_M_SumMaxTrqDsrd_Value(&rtb_TmpSignalConversionAtVeTTQR);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_OutTorqMaxArb_xSEM' incorporates:
     *  Inport: '<Root>/VeHTDR_M_OutTorqMaxArb_xSEM'
     */
    (void)Rte_Read_VeHTDR_M_OutTorqMaxArb_xSEM_Value
        (&rtb_TmpSignalConversionAtVeHT_h);

    /* SignalConversion generated from: '<S1>/VeATRR_r_Tact2Wheel' incorporates:
     *  Inport: '<Root>/VeATRR_r_Tact2Wheel'
     */
    (void)Rte_Read_VeATRR_r_Tact2Wheel_Value(&rtb_TmpSignalConversionAtVeAT_i);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_SumTrqAct_SEM' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqAct_SEM'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqAct_SEM_Value(&rtb_TmpSignalConversionAtVeTT_k);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_SumTrqMinPwrTrn' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqMinPwrTrn'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqMinPwrTrn_Value
        (&rtb_TmpSignalConversionAtVeTT_p);

    /* SignalConversion generated from: '<S1>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
     *  Inport: '<Root>/VeTTIR_M_PumpTrqOnImpShaft'
     */
    (void)Rte_Read_VeTTIR_M_PumpTrqOnImpShaft_Value
        (&rtb_TmpSignalConversionAtVeTTIR);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' */
#if Rte_SysCon_Variant_AXLR_RTC_On

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value(&rtb_TmpSignalConversionAtVeVS_j);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* Switch: '<S67>/1' incorporates:
     *  Constant: '<S71>/Calib'
     *  Constant: '<S72>/Calib'
     *  Switch: '<S67>/ '
     */
    if (KeAXLR_b_UseZeroNidot)
    {
        /* Switch: '<S67>/1' incorporates:
         *  Constant: '<S67>/ConstantValue12'
         */
        VeAXLC_dn_InputAccel = 0.0F;
    }
    else if (KeAXLR_b_UseNidotProf)
    {
        /* Switch: '<S67>/ ' incorporates:
         *  Switch: '<S67>/1'
         */
        VeAXLC_dn_InputAccel = rtb_TmpSignalConversionAtVeHS_b;
    }
    else
    {
        /* Switch: '<S67>/1' incorporates:
         *  Switch: '<S67>/ '
         */
        VeAXLC_dn_InputAccel = rtb_TmpSignalConversionAtVeTI_a;
    }

    /* End of Switch: '<S67>/1' */

    /* Switch: '<S62>/Switch' incorporates:
     *  Constant: '<S69>/Calib'
     *  Inport: '<Root>/VeTITR_M_Ti_CL_Fast'
     */
    if (KeAXLR_b_ActualTo_IncludeTiCL)
    {
        (void)Rte_Read_VeTITR_M_Ti_CL_Fast_Value(&tmpRead_2);

        /* Switch: '<S62>/Switch' incorporates:
         *  Inport: '<Root>/VeTITR_M_Ti_CL_Fast'
         *  Sum: '<S62>/Sum2'
         */
        VeAXLC_M_TiActual = tmpRead_2 + rtb_TmpSignalConversionAtVeHT_g;
    }
    else
    {
        /* Switch: '<S62>/Switch' */
        VeAXLC_M_TiActual = rtb_TmpSignalConversionAtVeHT_g;
    }

    /* End of Switch: '<S62>/Switch' */

    /* SignalConversion generated from: '<S67>/Product2' */
    rtb_TmpSignalConversionAtVeTI_0[0] = rtb_TmpSignalConversionAtVeTISR;
    rtb_TmpSignalConversionAtVeTI_0[1] = VeAXLC_dn_InputAccel;
    rtb_TmpSignalConversionAtVeTI_0[2] = rtb_TmpSignalConversionAtVeVSDR;
    rtb_TmpSignalConversionAtVeTI_0[3] = rtb_TmpSignalConversionAtVeVS_c;
    rtb_TmpSignalConversionAtVeTI_0[4] = rtb_TmpSignalConversionAtVeHS_l;
    rtb_TmpSignalConversionAtVeTI_0[5] = rtb_TmpSignalConversionAtVeH_fb;

    /* Product: '<S67>/Product2' */
    tmpRead_2 = 0.0F;
    for (i = 0; i < 6; i++)
    {
        tmpRead_2 += rtb_TmpSignalConversionAtVaTS_o[i + 13] *
            rtb_TmpSignalConversionAtVeTI_0[i];
    }

    /* Product: '<S67>/Product2' */
    VeAXLC_M_ToNonStatic = tmpRead_2;

    /* SignalConversion generated from: '<S68>/Product' incorporates:
     *  Inport: '<Root>/VeHSER_dn_NxDotProfile'
     */
    (void)Rte_Read_VeHSER_dn_NxDotProfile_Value(&tmp[15]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHTDR_M_MtrC_TorqCmnd' */
    (void)Rte_Read_VeHTDR_M_MtrC_TorqCmnd_Value(&rtb_Abs1_e);

    /* Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd' */
    (void)Rte_Read_VeHTDR_M_MtrB_TorqCmnd_Value(&rtb_Abs2_a);

    /* Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd_Eff' */
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Eff_Value(&Gain_e2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AXLR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* SignalConversion generated from: '<S68>/Product' incorporates:
     *  Constant: '<S68>/ConstantValue10'
     *  Constant: '<S68>/ConstantValue7'
     *  Constant: '<S68>/ConstantValue8'
     *  Constant: '<S68>/ConstantValue9'
     */
    tmp[0] = VeAXLC_M_TiActual;
    tmp[1] = 0.0F;
    tmp[2] = 0.0F;
    tmp[3] = 0.0F;
    tmp[4] = 0.0F;
    tmp[5] = rtb_TmpSignalConversionAtVeTCCR;
    tmp[6] = rtb_TmpSignalConversionAtVeHSER;
    tmp[7] = rtb_TmpSignalConversionAtVeHS_a;
    tmp[8] = rtb_TmpSignalConversionAtVeH_ep;
    tmp[9] = rtb_TmpSignalConversionAtVeHS_p;
    tmp[10] = rtb_TmpSignalConversionAtVeTISR;

    /* Switch: '<S68>/1' incorporates:
     *  Constant: '<S74>/Calib'
     *  Constant: '<S75>/Calib'
     *  Switch: '<S68>/ '
     */
    if (KeAXLR_b_UseZeroNidot_ToCmnd)
    {
        /* SignalConversion generated from: '<S68>/Product' incorporates:
         *  Constant: '<S68>/ConstantValue1'
         */
        tmp[11] = 0.0F;
    }
    else if (KeAXLR_b_UseNidotProf_ToCmnd)
    {
        /* Switch: '<S68>/ ' incorporates:
         *  SignalConversion generated from: '<S68>/Product'
         */
        tmp[11] = rtb_TmpSignalConversionAtVeHS_b;
    }
    else
    {
        /* SignalConversion generated from: '<S68>/Product' incorporates:
         *  Switch: '<S68>/ '
         */
        tmp[11] = rtb_TmpSignalConversionAtVeTI_a;
    }

    /* End of Switch: '<S68>/1' */

    /* SignalConversion generated from: '<S68>/Product' */
    tmp[12] = rtb_TmpSignalConversionAtVeVSDR;
    tmp[13] = rtb_TmpSignalConversionAtVeVS_c;
    tmp[14] = rtb_TmpSignalConversionAtVeHS_l;

    /* Product: '<S68>/Product' */
    tmpRead_2 = 0.0F;
    for (i = 0; i < 16; i++)
    {
        tmpRead_2 += rtb_TmpSignalConversionAtVaTS_o[i + 3] * tmp[i];
    }

    /* MinMax: '<S61>/MinMax' incorporates:
     *  Product: '<S68>/Product1'
     */
    rtb_TmpSignalConversionAtVeHT_g = rtb_TmpSignalConversionAtVaTS_o[0] *
        Gain_e2;

    /* Abs: '<S61>/Abs2' incorporates:
     *  Product: '<S68>/Product2'
     */
    rtb_Abs2_a *= rtb_TmpSignalConversionAtVaTS_o[1];

    /* Product: '<S68>/Product3' */
    VeAXLC_M_ToFromTC1 = rtb_TmpSignalConversionAtVaTS_o[9] *
        rtb_TmpSignalConversionAtVeHSER;

    /* Product: '<S68>/Product4' */
    VeAXLC_M_ToFromTC3 = rtb_TmpSignalConversionAtVaTS_o[11] *
        rtb_TmpSignalConversionAtVeH_ep;

    /* Abs: '<S61>/Abs1' incorporates:
     *  Product: '<S68>/Product5'
     */
    rtb_Abs1_e *= rtb_TmpSignalConversionAtVaTS_o[2];

    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S63>/Calib'
     */
    if (KeAXLR_b_UseToCLInActualTo)
    {
        /* SignalConversion generated from: '<S67>/Product1' incorporates:
         *  Constant: '<S67>/ConstantValue1'
         *  Constant: '<S67>/ConstantValue2'
         *  Constant: '<S67>/ConstantValue3'
         *  Constant: '<S67>/ConstantValue7'
         */
        rtb_TmpSignalConversionAtVeMT_0[0] = rtb_TmpSignalConversionAtVeMTQR;
        rtb_TmpSignalConversionAtVeMT_0[1] = rtb_TmpSignalConversionAtVeMTIR;
        rtb_TmpSignalConversionAtVeMT_0[2] = rtb_TmpSignalConversionAtVeMT_i;
        rtb_TmpSignalConversionAtVeMT_0[3] = VeAXLC_M_TiActual;
        rtb_TmpSignalConversionAtVeMT_0[4] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[5] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[6] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[7] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[8] = rtb_TmpSignalConversionAtVeTCCR;
        rtb_TmpSignalConversionAtVeMT_0[9] = rtb_TmpSignalConversionAtVeHSER;
        rtb_TmpSignalConversionAtVeMT_0[10] = rtb_TmpSignalConversionAtVeHS_a;
        rtb_TmpSignalConversionAtVeMT_0[11] = rtb_TmpSignalConversionAtVeH_ep;
        rtb_TmpSignalConversionAtVeMT_0[12] = rtb_TmpSignalConversionAtVeHS_p;

        /* Product: '<S67>/Product1' */
        rtb_TmpSignalConversionAtVeTI_a = 0.0F;
        for (i = 0; i < 13; i++)
        {
            rtb_TmpSignalConversionAtVeTI_a += rtb_TmpSignalConversionAtVaTS_o[i]
                * rtb_TmpSignalConversionAtVeMT_0[i];
        }

        /* Switch: '<S60>/Switch' incorporates:
         *  Product: '<S67>/Product1'
         *  Product: '<S68>/Product'
         *  Sum: '<S67>/Sum'
         *  Sum: '<S68>/Sum'
         */
        rtb_Switch_g[0] = rtb_TmpSignalConversionAtVeTI_a + VeAXLC_M_ToNonStatic;
        rtb_Switch_g[1] = ((tmpRead_2 + rtb_TmpSignalConversionAtVeHT_g) +
                           rtb_Abs2_a) + rtb_Abs1_e;
        rtb_Switch_g[2] = tmpRead_2;
    }
    else
    {
        /* SignalConversion generated from: '<S67>/Product1' incorporates:
         *  Constant: '<S67>/ConstantValue1'
         *  Constant: '<S67>/ConstantValue2'
         *  Constant: '<S67>/ConstantValue3'
         *  Constant: '<S67>/ConstantValue7'
         */
        rtb_TmpSignalConversionAtVeMT_0[0] = rtb_TmpSignalConversionAtVeMTQR;
        rtb_TmpSignalConversionAtVeMT_0[1] = rtb_TmpSignalConversionAtVeMTIR;
        rtb_TmpSignalConversionAtVeMT_0[2] = rtb_TmpSignalConversionAtVeMT_i;
        rtb_TmpSignalConversionAtVeMT_0[3] = VeAXLC_M_TiActual;
        rtb_TmpSignalConversionAtVeMT_0[4] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[5] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[6] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[7] = 0.0F;
        rtb_TmpSignalConversionAtVeMT_0[8] = rtb_TmpSignalConversionAtVeTCCR;
        rtb_TmpSignalConversionAtVeMT_0[9] = rtb_TmpSignalConversionAtVeHSER;
        rtb_TmpSignalConversionAtVeMT_0[10] = rtb_TmpSignalConversionAtVeHS_a;
        rtb_TmpSignalConversionAtVeMT_0[11] = rtb_TmpSignalConversionAtVeH_ep;
        rtb_TmpSignalConversionAtVeMT_0[12] = rtb_TmpSignalConversionAtVeHS_p;

        /* Product: '<S67>/Product1' */
        rtb_TmpSignalConversionAtVeTI_a = 0.0F;
        for (i = 0; i < 13; i++)
        {
            rtb_TmpSignalConversionAtVeTI_a += rtb_TmpSignalConversionAtVaTS_o[i]
                * rtb_TmpSignalConversionAtVeMT_0[i];
        }

        /* Switch: '<S60>/Switch' incorporates:
         *  Product: '<S67>/Product1'
         *  Product: '<S68>/Product'
         *  Sum: '<S60>/Sum'
         *  Sum: '<S67>/Sum'
         *  Sum: '<S68>/Sum'
         */
        rtb_Switch_g[0] = (rtb_TmpSignalConversionAtVeTI_a +
                           VeAXLC_M_ToNonStatic) -
            rtb_TmpSignalConversionAtVeTITR;
        rtb_Switch_g[1] = (((tmpRead_2 + rtb_TmpSignalConversionAtVeHT_g) +
                            rtb_Abs2_a) + rtb_Abs1_e) -
            rtb_TmpSignalConversionAtVeTITR;
        rtb_Switch_g[2] = tmpRead_2 - rtb_TmpSignalConversionAtVeTITR;
    }

    /* End of Switch: '<S60>/Switch' */

    /* Gain: '<S64>/Gain' */
    VeAXLC_M_ActualOutputTorque = rtb_Switch_g[0];

    /* Gain: '<S65>/Gain' */
    VeAXLC_M_CommandedTo = rtb_Switch_g[1];

    /* Gain: '<S66>/Gain' */
    VeAXLC_M_CmndTo_FrmToMisc = rtb_Switch_g[2];

    /* RelationalOperator: '<S80>/Equal' incorporates:
     *  Constant: '<S108>/Constant'
     *  Constant: '<S109>/Constant'
     *  Constant: '<S110>/Constant'
     *  Constant: '<S111>/Constant'
     *  Constant: '<S112>/Constant'
     *  Constant: '<S113>/Constant'
     *  Constant: '<S114>/Constant'
     *  Constant: '<S115>/Constant'
     *  Constant: '<S116>/Constant'
     *  Constant: '<S117>/Constant'
     *  Constant: '<S121>/Constant'
     *  Logic: '<S80>/OR'
     *  Logic: '<S80>/OR1'
     *  Logic: '<S80>/OR2'
     *  Logic: '<S80>/OR3'
     *  RelationalOperator: '<S80>/Equal1'
     *  RelationalOperator: '<S80>/Equal10'
     *  RelationalOperator: '<S80>/Equal11'
     *  RelationalOperator: '<S80>/Equal12'
     *  RelationalOperator: '<S80>/Equal2'
     *  RelationalOperator: '<S80>/Equal3'
     *  RelationalOperator: '<S80>/Equal4'
     *  RelationalOperator: '<S80>/Equal5'
     *  RelationalOperator: '<S80>/Equal6'
     *  RelationalOperator: '<S80>/Equal7'
     *  RelationalOperator: '<S80>/Equal8'
     *  RelationalOperator: '<S80>/Equal9'
     *  Switch: '<S80>/Switch1'
     *  Switch: '<S80>/Switch2'
     */
#if Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

    /* Logic: '<S80>/OR3' incorporates:
     *  Constant: '<S122>/Constant'
     *  Constant: '<S123>/Constant'
     */
    rtb_OR3 = ((((uint32)rtb_TmpSignalConversionAtVeFWDR) == CeFWDR_e_TfrCas4HI)
               || (((uint32)rtb_TmpSignalConversionAtVeFWDR) ==
                   CeFWDR_e_TfrCas4Low));
    if ((CeTRGR_e_TransRangeReverse == ((uint32)rtb_TmpSignalConversionAtVeTRGR))
        && rtb_OR3)
    {
        /* Sum: '<S61>/Sum' incorporates:
         *  Constant: '<S120>/Calib'
         */
        rtb_Sum_kq = HeAXLR_k_PRNDCoeff_Rev;
    }
    else if (((((((((((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                       CeTRGR_e_TransRangeDrive1) || (((uint32)
                        rtb_TmpSignalConversionAtVeTRGR) ==
                       CeTRGR_e_TransRangeDrive2)) || (((uint32)
                       rtb_TmpSignalConversionAtVeTRGR) ==
                      CeTRGR_e_TransRangeDrive3)) || (((uint32)
                      rtb_TmpSignalConversionAtVeTRGR) ==
                     CeTRGR_e_TransRangeDrive4)) || (((uint32)
                     rtb_TmpSignalConversionAtVeTRGR) ==
                    CeTRGR_e_TransRangeDrive5)) || (((uint32)
                    rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeDrive))
                 || (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                     CeTRGR_e_TransRangeDrive)) || (((uint32)
                  rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeDrive))
               || (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                   CeTRGR_e_TransRangeDrive)) || (((uint32)
                rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeDrive)) &&
             rtb_OR3)
    {
        /* Switch: '<S80>/Switch2' incorporates:
         *  Constant: '<S118>/Calib'
         *  Sum: '<S61>/Sum'
         */
        rtb_Sum_kq = HeAXLR_k_PRNDCoeff_Drv;
    }
    else
    {
        /* Sum: '<S61>/Sum' incorporates:
         *  Constant: '<S119>/Calib'
         *  Switch: '<S80>/Switch2'
         */
        rtb_Sum_kq = HeAXLR_k_PRNDCoeff_PN;
    }

#endif

    /* End of RelationalOperator: '<S80>/Equal' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTTQR_M_SumTrqStaticNoCL' */
    (void)Rte_Read_VeTTQR_M_SumTrqStaticNoCL_Value(&rtb_Sum2_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AXLR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* Switch: '<S81>/Switch17' incorporates:
     *  Constant: '<S124>/Constant'
     *  Constant: '<S125>/Calib'
     *  Constant: '<S126>/Calib'
     *  Constant: '<S127>/Calib'
     *  Constant: '<S91>/Calib'
     *  Inport: '<Root>/VeTCCR_r_TR'
     *  Logic: '<S81>/Logical'
     *  RelationalOperator: '<S81>/Comparison2'
     *  Switch: '<S61>/Switch1'
     *  Switch: '<S81>/Switch'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         != CeTSXR_e_SumDomain) ||
            Rte_Prm_HeATRR_b_BSGConvByps_HeATRR_b_BSGConvByps())
    {
        /* Product: '<S81>/Multiplication2' */
        for (i = 0; i < 2; i++)
        {
            rtb_Multiplication2[i] = VeAXLC_M_ActualOutputTorque;
        }
    }
    else if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
    {
        (void)Rte_Read_VeTCCR_r_TR_Value(&tmpRead_g);

        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S91>/Calib'
         *  Inport: '<Root>/VeTCCR_r_TR'
         *  Sum: '<S61>/Sum3'
         */
        if (KeAXLR_b_UseToCLInActualTo)
        {
            rtb_TmpSignalConversionAtVeTT_k += rtb_TmpSignalConversionAtVeTITR;
        }

        /* Product: '<S81>/Multiplication2' incorporates:
         *  Product: '<S81>/Product'
         *  Sum: '<S81>/Sum'
         *  Switch: '<S81>/Switch'
         */
        rtb_Multiplication2[0] = ((rtb_TmpSignalConversionAtVeTT_k +
            VeAXLC_M_ToNonStatic) - rtb_TmpSignalConversionAtVeTTIR) * tmpRead_g;
        rtb_Multiplication2[1] = ((rtb_Sum2_j + VeAXLC_M_ToNonStatic) -
            rtb_TmpSignalConversionAtVeTTIR) * tmpRead_g;
    }
    else
    {
        if (KeAXLR_b_UseToCLInActualTo)
        {
            /* Switch: '<S61>/Switch1' incorporates:
             *  Sum: '<S61>/Sum3'
             */
            rtb_TmpSignalConversionAtVeTT_k += rtb_TmpSignalConversionAtVeTITR;
        }

        /* Product: '<S81>/Multiplication2' incorporates:
         *  Sum: '<S81>/Sum'
         *  Switch: '<S81>/Switch'
         */
        rtb_Multiplication2[0] = (rtb_TmpSignalConversionAtVeTT_k +
            VeAXLC_M_ToNonStatic) - rtb_TmpSignalConversionAtVeTTIR;
        rtb_Multiplication2[1] = (rtb_Sum2_j + VeAXLC_M_ToNonStatic) -
            rtb_TmpSignalConversionAtVeTTIR;
    }

    /* End of Switch: '<S81>/Switch17' */
    for (i = 0; i < 2; i++)
    {
        /* Product: '<S81>/Multiplication2' */
        rtb_Multiplication2[i] *= rtb_TmpSignalConversionAtVeAT_i;
    }

    /* Switch: '<S107>/Switch2' incorporates:
     *  Constant: '<S152>/Calib'
     *  Inport: '<Root>/VeHTDR_M_OutTorqMaxHH'
     */
    if (KeAXLR_b_VTVRTactToMaxOvrd)
    {
        /* Switch: '<S107>/Switch2' incorporates:
         *  Inport: '<Root>/VeVTVR_M_OutTorqReqModTactMax'
         */
        (void)Rte_Read_VeVTVR_M_OutTorqReqModTactMax_Value
            ((&(VeAXLR_M_ToMax_Selected)));
    }
    else
    {
        (void)Rte_Read_VeHTDR_M_OutTorqMaxHH_Value(&tmpRead_1);

        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S149>/Calib'
         *  Inport: '<Root>/VeHTDR_M_OutTorqMaxHH'
         */
        if (KeAXLR_b_UseOITR4MaxCruiseTrq)
        {
            /* Switch: '<S107>/Switch2' */
            VeAXLR_M_ToMax_Selected = rtb_TmpSignalConversionAtVeOITR;
        }
        else
        {
            /* Switch: '<S107>/Switch2' */
            VeAXLR_M_ToMax_Selected = tmpRead_1;
        }

        /* End of Switch: '<S107>/Switch1' */
    }

    /* End of Switch: '<S107>/Switch2' */

    /* Switch: '<S107>/Switch3' incorporates:
     *  Constant: '<S153>/Calib'
     *  Inport: '<Root>/VeHTDR_M_OutTorqMinHH'
     *  Inport: '<Root>/VeVTVR_M_OutTorqReqModTactMin'
     */
    if (KeAXLR_b_VTVRTactToMinOvrd)
    {
        /* Switch: '<S107>/Switch3' */
        VeAXLR_M_ToMin_Selected = rtb_TmpSignalConversionAtVeOI_m;
    }
    else
    {
        (void)Rte_Read_VeHTDR_M_OutTorqMinHH_Value(&tmpRead_9);
        (void)Rte_Read_VeVTVR_M_OutTorqReqModTactMin_Value(&tmpRead_8);

        /* Switch: '<S107>/Switch4' incorporates:
         *  Constant: '<S150>/Calib'
         *  Inport: '<Root>/VeHTDR_M_OutTorqMinHH'
         *  Inport: '<Root>/VeVTVR_M_OutTorqReqModTactMin'
         */
        if (KeAXLR_b_UseOITR4MinCruiseTrq)
        {
            /* Switch: '<S107>/Switch3' */
            VeAXLR_M_ToMin_Selected = tmpRead_8;
        }
        else
        {
            /* Switch: '<S107>/Switch3' */
            VeAXLR_M_ToMin_Selected = tmpRead_9;
        }

        /* End of Switch: '<S107>/Switch4' */
    }

    /* End of Switch: '<S107>/Switch3' */

    /* If: '<S107>/If2' incorporates:
     *  Constant: '<S151>/Calib'
     */
    if (KeAXLR_b_UsePhyBasedToMinMax)
    {
        /* Outputs for IfAction SubSystem: '<S107>/ToMinMax_Physical' incorporates:
         *  ActionPort: '<S156>/ActionPort'
         */
        /* Merge: '<S107>/Merge2' incorporates:
         *  Inport: '<S156>/LeAXLR_M_ToMax'
         */
        VeAXLR_M_ToMaxArb = VeAXLR_M_ToMax_Selected;

        /* Merge: '<S107>/Merge3' incorporates:
         *  Inport: '<S156>/LeAXLR_M_ToMin'
         */
        VeAXLR_M_ToMinArb = VeAXLR_M_ToMin_Selected;

        /* End of Outputs for SubSystem: '<S107>/ToMinMax_Physical' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S107>/Blend_ToMinMax_DID' incorporates:
         *  ActionPort: '<S148>/ActionPort'
         */
        /* Switch: '<S148>/Switch5' incorporates:
         *  Constant: '<S148>/ConstantValue2'
         *  RelationalOperator: '<S148>/Comparison2'
         */
        VeAXLR_K_PRNDL_MultFctr = (float32)((rtb_TmpSignalConversionAtVeWTAR <
            -0.99F) ? 1 : 0);

        /* Outputs for Atomic SubSystem: '<S148>/GradientLimiter' */
        /* UnitDelay: '<S157>/UnitDelay' */
        rtb_TmpSignalConversionAtVeTT_k = AXLR_ac_DW.UnitDelay_DSTATE_j;

        /* Sum: '<S157>/Sum2' */
        rtb_Sum2_j = VeAXLR_K_PRNDL_MultFctr - rtb_TmpSignalConversionAtVeTT_k;

        /* Outputs for Atomic SubSystem: '<S157>/Limiter' */
        /* Switch: '<S158>/Switch1' incorporates:
         *  Constant: '<S155>/Calib'
         *  RelationalOperator: '<S158>/RelationalOperator'
         */
        if (KeAXLR_k_TorqMinMax_LU < rtb_Sum2_j)
        {
            /* Switch: '<S158>/Switch1' */
            rtb_Sum2_j = KeAXLR_k_TorqMinMax_LU;
        }

        /* End of Switch: '<S158>/Switch1' */

        /* Switch: '<S158>/Switch' incorporates:
         *  Constant: '<S154>/Calib'
         *  RelationalOperator: '<S158>/RelationalOperator1'
         */
        if (rtb_Sum2_j <= KeAXLR_k_TorqMinMax_LD)
        {
            rtb_Sum2_j = KeAXLR_k_TorqMinMax_LD;
        }

        /* End of Switch: '<S158>/Switch' */
        /* End of Outputs for SubSystem: '<S157>/Limiter' */

        /* Sum: '<S157>/Sum3' */
        VeAXLR_K_ToBlendFctr = rtb_Sum2_j + rtb_TmpSignalConversionAtVeTT_k;

        /* Update for UnitDelay: '<S157>/UnitDelay' */
        AXLR_ac_DW.UnitDelay_DSTATE_j = VeAXLR_K_ToBlendFctr;

        /* End of Outputs for SubSystem: '<S148>/GradientLimiter' */

        /* Merge: '<S107>/Merge2' incorporates:
         *  Constant: '<S148>/ConstantValue1'
         *  Product: '<S148>/Product1'
         *  Product: '<S148>/Product2'
         *  Product: '<S148>/Product7'
         *  Sum: '<S148>/Sum2'
         *  Sum: '<S148>/Sum3'
         */
        VeAXLR_M_ToMaxArb = ((1.0F - VeAXLR_K_ToBlendFctr) *
                             (-VeAXLR_M_ToMin_Selected)) +
            (VeAXLR_M_ToMax_Selected * VeAXLR_K_ToBlendFctr);

        /* Merge: '<S107>/Merge3' incorporates:
         *  Constant: '<S148>/ConstantValue3'
         *  Product: '<S148>/Product3'
         *  Product: '<S148>/Product4'
         *  Product: '<S148>/Product8'
         *  Sum: '<S148>/Sum4'
         *  Sum: '<S148>/Sum5'
         */
        VeAXLR_M_ToMinArb = ((1.0F - VeAXLR_K_ToBlendFctr) *
                             (-VeAXLR_M_ToMax_Selected)) +
            (VeAXLR_M_ToMin_Selected * VeAXLR_K_ToBlendFctr);

        /* End of Outputs for SubSystem: '<S107>/Blend_ToMinMax_DID' */
    }

    /* End of If: '<S107>/If2' */

    /* Sum: '<S106>/Sum' */
    rtb_Sum_e1[0] = rtb_TmpSignalConversionAtVeHT_o -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[1] = VeAXLR_M_ToMinArb - rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[2] = rtb_TmpSignalConversionAtVeATRR -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[3] = VeAXLR_M_ToMaxArb - rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[4] = rtb_TmpSignalConversionAtVeAT_d -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[5] = rtb_TmpSignalConversionAtVeHT_h -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[6] = rtb_TmpSignalConversionAtVeOI_m -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[7] = rtb_TmpSignalConversionAtVeOITR -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[8] = rtb_TmpSignalConversionAtVeTTQR -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[9] = rtb_TmpSignalConversionAtVeTT_p -
        rtb_TmpSignalConversionAtVeTTIR;
    rtb_Sum_e1[10] = rtb_TmpSignalConversionAtVeTITR -
        rtb_TmpSignalConversionAtVeTTIR;

    /* Outputs for Atomic SubSystem: '<S106>/RTC' */
#if Rte_SysCon_Variant_AXLR_RTC_On

    /* Outputs for Atomic SubSystem: '<S132>/RTC_on' */
    /* Gain: '<S141>/Gain' incorporates:
     *  Lookup_n-D: '<S143>/Vector'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Sum2_j = 0.5F * look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
         ()), 21U);

    /* Lookup_n-D: '<S142>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_TmpSignalConversionAtVeTT_k = look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeVS_j,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Outputs for Atomic SubSystem: '<S141>/Protected Division1' */
    /* Switch: '<S145>/Switch1' incorporates:
     *  Constant: '<S145>/Constant Value'
     *  Constant: '<S145>/Constant Value1'
     *  Constant: '<S145>/Constant Value2'
     *  Constant: '<S145>/Constant Value3'
     *  Logic: '<S145>/AND'
     *  RelationalOperator: '<S145>/Greater Than or Equal '
     *  RelationalOperator: '<S145>/Greater Than or Equal 1'
     *  RelationalOperator: '<S145>/Not Equal'
     *  RelationalOperator: '<S145>/Not Equal1'
     *  Switch: '<S145>/Switch2'
     *  Switch: '<S145>/Switch3'
     */
    if ((rtb_Sum2_j != 0.0F) && (rtb_TmpSignalConversionAtVeTT_k != 0.0F))
    {
        /* Switch: '<S145>/Switch1' incorporates:
         *  Product: '<S145>/Division'
         */
        rtb_TmpSignalConversionAtVeTTIR = rtb_Sum2_j /
            rtb_TmpSignalConversionAtVeTT_k;
    }
    else if (rtb_Sum2_j > 0.0F)
    {
        /* Switch: '<S145>/Switch2' incorporates:
         *  Constant: '<S145>/MAXFLOAT'
         *  Switch: '<S145>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTTIR = 3.402823466E+38F;
    }
    else if (rtb_Sum2_j < 0.0F)
    {
        /* Switch: '<S145>/Switch3' incorporates:
         *  Constant: '<S145>/MINFLOAT'
         *  Switch: '<S145>/Switch1'
         *  Switch: '<S145>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTTIR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S145>/Switch1' incorporates:
         *  Constant: '<S145>/Constant Value4'
         *  Switch: '<S145>/Switch2'
         *  Switch: '<S145>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTTIR = 0.0F;
    }

    /* End of Switch: '<S145>/Switch1' */
    /* End of Outputs for SubSystem: '<S141>/Protected Division1' */

    /* Gain: '<S141>/Gain1' */
    rtb_TmpSignalConversionAtVeTTIR = -rtb_TmpSignalConversionAtVeTTIR;

    /* Product: '<S141>/Product1' */
    rtb_Sum2_j *= rtb_Sum2_j;

    /* Outputs for Atomic SubSystem: '<S141>/Protected Division2' */
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S146>/Constant Value'
     *  Constant: '<S146>/Constant Value1'
     *  Constant: '<S146>/Constant Value2'
     *  Constant: '<S146>/Constant Value3'
     *  Logic: '<S146>/AND'
     *  RelationalOperator: '<S146>/Greater Than or Equal '
     *  RelationalOperator: '<S146>/Greater Than or Equal 1'
     *  RelationalOperator: '<S146>/Not Equal'
     *  RelationalOperator: '<S146>/Not Equal1'
     *  Switch: '<S146>/Switch2'
     *  Switch: '<S146>/Switch3'
     */
    if ((rtb_Sum2_j != 0.0F) && (rtb_TmpSignalConversionAtVeTT_k != 0.0F))
    {
        /* Switch: '<S146>/Switch1' incorporates:
         *  Product: '<S146>/Division'
         */
        rtb_Sum2_j /= rtb_TmpSignalConversionAtVeTT_k;
    }
    else if (rtb_Sum2_j > 0.0F)
    {
        /* Switch: '<S146>/Switch2' incorporates:
         *  Constant: '<S146>/MAXFLOAT'
         *  Switch: '<S146>/Switch1'
         */
        rtb_Sum2_j = 3.402823466E+38F;
    }
    else if (rtb_Sum2_j < 0.0F)
    {
        /* Switch: '<S146>/Switch3' incorporates:
         *  Constant: '<S146>/MINFLOAT'
         *  Switch: '<S146>/Switch1'
         *  Switch: '<S146>/Switch2'
         */
        rtb_Sum2_j = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S146>/Switch1' incorporates:
         *  Constant: '<S146>/Constant Value4'
         *  Switch: '<S146>/Switch2'
         *  Switch: '<S146>/Switch3'
         */
        rtb_Sum2_j = 0.0F;
    }

    /* End of Switch: '<S146>/Switch1' */
    /* End of Outputs for SubSystem: '<S141>/Protected Division2' */

    /* Sum: '<S141>/Sum1' incorporates:
     *  Lookup_n-D: '<S144>/Vector'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Sum2_j = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()), 3U) - rtb_Sum2_j;

    /* Outputs for Atomic SubSystem: '<S141>/Protected Division4' */
    /* Switch: '<S147>/Switch1' incorporates:
     *  Constant: '<S147>/Constant Value1'
     *  RelationalOperator: '<S147>/Not Equal1'
     */
    if (rtb_TmpSignalConversionAtVeTT_k != 0.0F)
    {
        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S141>/Constant Value2'
         *  Product: '<S147>/Division'
         */
        rtb_TmpSignalConversionAtVeTT_k = 1.0F / rtb_TmpSignalConversionAtVeTT_k;
    }
    else
    {
        /* Switch: '<S147>/Switch1' */
        rtb_TmpSignalConversionAtVeTT_k = 3.402823466E+38F;
    }

    /* End of Switch: '<S147>/Switch1' */
    /* End of Outputs for SubSystem: '<S141>/Protected Division4' */
    for (i = 0; i < 11; i++)
    {
        /* Lookup_n-D: '<S137>/Vector' incorporates:
         *  Constant: '<S140>/Constant Value'
         *  MinMax: '<S140>/MinMax1'
         *  Product: '<S140>/Product'
         *  Sqrt: '<S140>/Square Root'
         *  Sum: '<S140>/Sum2'
         */
        rtb_Vector_b[i] = sqrtf(fmaxf((rtb_Sum_e1[i] - rtb_Sum2_j) *
            rtb_TmpSignalConversionAtVeTT_k, 0.0F));
    }

    /* Signum: '<S140>/Signum' */
    if (rtb_TmpSignalConversionAtVeTT_k < 0.0F)
    {
        /* Signum: '<S140>/Signum' */
        rtb_TmpSignalConversionAtVeTT_k = -1.0F;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTT_k > 0.0F)
        {
            /* Signum: '<S140>/Signum' */
            rtb_TmpSignalConversionAtVeTT_k = 1.0F;
        }
    }

    /* End of Signum: '<S140>/Signum' */
    for (i = 0; i < 11; i++)
    {
        /* Sum: '<S140>/Sum3' incorporates:
         *  Product: '<S140>/Product1'
         */
        rtb_Sum3_e[i] = ((rtb_Vector_b[i] * rtb_TmpSignalConversionAtVeTT_k) +
                         rtb_TmpSignalConversionAtVeTTIR) +
            rtb_TmpSignalConversionAtVeVS_j;
    }

    /* Outputs for Atomic SubSystem: '<S136>/Protected Division1' */
    /* RelationalOperator: '<S138>/Not Equal' incorporates:
     *  Constant: '<S138>/Constant Value'
     */
    rtb_OR3 = (rtb_TmpSignalConversionAtVeVS_j != 0.0F);

    /* Switch: '<S138>/Switch2' incorporates:
     *  Constant: '<S138>/Constant Value2'
     *  Constant: '<S138>/Constant Value3'
     *  RelationalOperator: '<S138>/Greater Than or Equal '
     *  RelationalOperator: '<S138>/Greater Than or Equal 1'
     *  Switch: '<S138>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeVS_j > 0.0F)
    {
        /* Switch: '<S138>/Switch2' incorporates:
         *  Constant: '<S138>/MAXFLOAT'
         */
        rtb_TmpSignalConversionAtVeTTIR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVS_j < 0.0F)
    {
        /* Switch: '<S138>/Switch3' incorporates:
         *  Constant: '<S138>/MINFLOAT'
         *  Switch: '<S138>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTTIR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S138>/Switch2' incorporates:
         *  Constant: '<S138>/Constant Value4'
         *  Switch: '<S138>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTTIR = 0.0F;
    }

    /* End of Switch: '<S138>/Switch2' */
    for (i = 0; i < 11; i++)
    {
        /* RelationalOperator: '<S138>/Not Equal1' */
        rtb_TmpSignalConversionAtVeTT_k = rtb_Sum3_e[i];

        /* Switch: '<S138>/Switch1' incorporates:
         *  Constant: '<S138>/Constant Value1'
         *  Logic: '<S138>/AND'
         *  RelationalOperator: '<S138>/Not Equal1'
         */
        if (rtb_OR3 && (rtb_TmpSignalConversionAtVeTT_k != 0.0F))
        {
            /* Switch: '<S138>/Switch1' incorporates:
             *  Product: '<S138>/Division'
             */
            rtb_TmpSignalConversionAtVeTT_k = rtb_TmpSignalConversionAtVeVS_j /
                rtb_TmpSignalConversionAtVeTT_k;
        }
        else
        {
            /* Switch: '<S138>/Switch1' */
            rtb_TmpSignalConversionAtVeTT_k = rtb_TmpSignalConversionAtVeTTIR;
        }

        /* End of Switch: '<S138>/Switch1' */

        /* Lookup_n-D: '<S137>/Vector' */
        rtb_Vector_b[i] = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeTT_k,
            (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
            (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

        /* Switch: '<S138>/Switch1' incorporates:
         *  RelationalOperator: '<S138>/Not Equal1'
         */
        rtb_Sum3_e[i] = rtb_TmpSignalConversionAtVeTT_k;
    }

    /* End of Outputs for SubSystem: '<S136>/Protected Division1' */

    /* Inport: '<Root>/VeTCCR_r_RampFactor' */
    (void)Rte_Read_VeTCCR_r_RampFactor_Value(&tmpRead_f);
    for (i = 0; i < 11; i++)
    {
        /* Product: '<S136>/Product2' */
        rtb_TmpSignalConversionAtVeTTIR = rtb_Sum_e1[i];

        /* VariantMerge generated from: '<S132>/T_turb' incorporates:
         *  Product: '<S135>/Product'
         *  Product: '<S136>/Product2'
         *  Sum: '<S135>/Sum'
         *  Sum: '<S135>/Sum1'
         */
        rtb_Vector_b[i] = (((rtb_TmpSignalConversionAtVeTTIR * rtb_Vector_b[i])
                            - rtb_TmpSignalConversionAtVeTTIR) * tmpRead_f) +
            rtb_TmpSignalConversionAtVeTTIR;
    }

    /* End of Outputs for SubSystem: '<S132>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S132>/RTC_off' */
    for (i = 0; i < 11; i++)
    {
        /* VariantMerge generated from: '<S132>/T_turb' incorporates:
         *  Inport: '<S133>/T_imp'
         */
        rtb_Vector_b[i] = rtb_Sum_e1[i];
    }

    /* End of Outputs for SubSystem: '<S132>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S106>/RTC' */

    /* Switch: '<S106>/Switch' incorporates:
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Constant'
     *  Constant: '<S129>/Calib'
     *  Logic: '<S106>/OR'
     *  RelationalOperator: '<S106>/RelationalOperator'
     *  RelationalOperator: '<S81>/Comparison2'
     */
    if ((((uint32)Rte_Prm_HeTSXR_e_All_TactToDomain_HeTSXR_e_All_TactToDomain())
         != CeTSXR_e_SumDomain) ||
            Rte_Prm_HeATRR_b_BSGConvByps_HeATRR_b_BSGConvByps())
    {
        /* Product: '<S106>/Product' */
        rtb_Vector_b[0] = rtb_TmpSignalConversionAtVeHT_o;
        rtb_Vector_b[1] = VeAXLR_M_ToMinArb;
        rtb_Vector_b[2] = rtb_TmpSignalConversionAtVeATRR;
        rtb_Vector_b[3] = VeAXLR_M_ToMaxArb;
        rtb_Vector_b[4] = rtb_TmpSignalConversionAtVeAT_d;
        rtb_Vector_b[5] = rtb_TmpSignalConversionAtVeHT_h;
        rtb_Vector_b[6] = rtb_TmpSignalConversionAtVeOI_m;
        rtb_Vector_b[7] = rtb_TmpSignalConversionAtVeOITR;
        rtb_Vector_b[8] = rtb_TmpSignalConversionAtVeTTQR;
        rtb_Vector_b[9] = rtb_TmpSignalConversionAtVeTT_p;
        rtb_Vector_b[10] = rtb_TmpSignalConversionAtVeTITR;
    }
    else
    {
        /* Product: '<S106>/Product' incorporates:
         *  Switch: '<S106>/Switch1'
         */
        for (i = 0; i < 11; i++)
        {
            rtb_TmpSignalConversionAtVeOI_m = rtb_Vector_b[i];

            /* Switch: '<S106>/Switch1' incorporates:
             *  Constant: '<S130>/Calib'
             */
            if (!Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
            {
                rtb_TmpSignalConversionAtVeOI_m = rtb_Sum_e1[i];
            }

            rtb_Vector_b[i] = rtb_TmpSignalConversionAtVeOI_m;
        }
    }

    /* End of Switch: '<S106>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCTCR_M_MinCreepWheelTrq' */
    (void)Rte_Read_VeCTCR_M_MinCreepWheelTrq_Value(&tmpRead_5);

    /* Inport: '<Root>/VeDTRR_M_AxleTrqReqMax' */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqMax_Value(&tmpRead_0);

    /* Inport: '<Root>/VeDTRR_M_AxleTrqReqMin' */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqMin_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AXLR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    for (i = 0; i < 11; i++)
    {
        /* Product: '<S106>/Product' */
        rtb_Vector_b[i] *= rtb_TmpSignalConversionAtVeAT_i;
    }

    /* Gain: '<S104>/Gain' */
    VeAXLR_M_MaxTransTo_Axle = rtb_Vector_b[4];

    /* Gain: '<S95>/Gain' */
    VeAXLC_M_ActAxleOutputTrq = rtb_Multiplication2[0];

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Axle_Min_Max_Calculation'
     */
    /* Outputs for IfAction SubSystem: '<S6>/ToMinMax_Physical' incorporates:
     *  ActionPort: '<S170>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S6>/Blend_ToMinMax_DID' incorporates:
     *  ActionPort: '<S159>/ActionPort'
     */
    /* If: '<S6>/If2' incorporates:
     *  Abs: '<S159>/Abs1'
     *  Abs: '<S159>/Abs2'
     *  Abs: '<S170>/Abs1'
     *  Abs: '<S170>/Abs2'
     *  Abs: '<S61>/Abs1'
     *  Abs: '<S61>/Abs2'
     */
    rtb_TmpSignalConversionAtVeOI_m = fabsf(rtb_TmpSignalConversionAtVeWTAR);

    /* End of Outputs for SubSystem: '<S6>/Blend_ToMinMax_DID' */
    /* End of Outputs for SubSystem: '<S6>/ToMinMax_Physical' */

    /* Switch: '<S61>/Switch7' incorporates:
     *  Constant: '<S90>/Calib'
     *  Gain: '<S101>/Gain'
     */
    if (KeAXLR_b_UseSysLmts4MinCruiseTrq)
    {
        tmpRead_5 = rtb_Vector_b[1];
    }

    /* End of Switch: '<S61>/Switch7' */

    /* Product: '<S61>/Multiplication10' incorporates:
     *  Abs: '<S61>/Abs1'
     *  Gain: '<S102>/Gain'
     *  MinMax: '<S61>/MinMax2'
     */
    VeAXLC_M_MinAxleTrqCruise = rtb_TmpSignalConversionAtVeOI_m * fmaxf(fmaxf
        (tmpRead_5, tmpRead), rtb_Vector_b[2]);

    /* SignalConversion generated from: '<S61>/Variant4' */
#if !Rte_SysCon_Variant_AXLR_CstmCoeffActualAxleTrq_phy

    /* Sum: '<S61>/Sum' incorporates:
     *  Constant: '<S61>/ConstantValue1'
     */
    rtb_Sum_kq = 1.0F;

#endif

    /* End of SignalConversion generated from: '<S61>/Variant4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrqRaw' */
    (void)Rte_Read_VeDTRR_M_DrvrIntndedAxleTrqRaw_Value(&tmpRead_4);

    /* Inport: '<Root>/VeATRR_M_ToReqPrdctd_Tact' */
    (void)Rte_Read_VeATRR_M_ToReqPrdctd_Tact_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AXLR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* SignalConversion generated from: '<S61>/Variant4' */
    VeAXLC_k_PRNDL_Coeff = rtb_Sum_kq;

    /* Product: '<S61>/Multiplication4' */
    VeAXLC_M_ActualAxleTrq_phy = VeAXLC_M_ActAxleOutputTrq *
        VeAXLC_k_PRNDL_Coeff;

    /* Product: '<S61>/Multiplication8' incorporates:
     *  Constant: '<S86>/Calib'
     *  Gain: '<S103>/Gain'
     *  MinMax: '<S61>/MinMax'
     *  Sum: '<S61>/Sum1'
     */
    VeAXLC_M_MaxAxleTrqCruise = fminf(fminf(KeAXLR_M_OutTorqMaxOffset +
        rtb_Vector_b[3], tmpRead_0), VeAXLR_M_MaxTransTo_Axle) *
        rtb_TmpSignalConversionAtVeOI_m;

    /* Gain: '<S96>/Gain' */
    VeAXLC_M_ActAxleTrq = rtb_Vector_b[0];

    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S88>/Calib'
     *  Constant: '<S89>/Calib'
     *  Switch: '<S61>/Switch3'
     */
    if (KeAXLR_b_DrvrAxleTrq_PhyscsBasd)
    {
        /* Switch: '<S61>/Switch3' incorporates:
         *  Constant: '<S89>/Calib'
         */
        if (KeAXLR_b_UseATRRDrvTrq)
        {
            /* Switch: '<S61>/Switch' */
            VeAXLC_M_DrvrIntndedAxleTrq_Arb = tmpRead_3;
        }
        else
        {
            /* Switch: '<S61>/Switch' */
            VeAXLC_M_DrvrIntndedAxleTrq_Arb = tmpRead_4;
        }
    }
    else
    {
        if (KeAXLR_b_UseATRRDrvTrq)
        {
            /* Switch: '<S61>/Switch3' */
            tmpRead_4 = tmpRead_3;
        }

        /* Switch: '<S61>/Switch' incorporates:
         *  Product: '<S61>/Product'
         */
        VeAXLC_M_DrvrIntndedAxleTrq_Arb = tmpRead_4 *
            rtb_TmpSignalConversionAtVeWTAR;
    }

    /* End of Switch: '<S61>/Switch' */

    /* Switch: '<S61>/Switch4' incorporates:
     *  Constant: '<S83>/Calib'
     */
    if (HeAXLR_b_PhyscBasedAxleTrqDirectn)
    {
        /* Switch: '<S61>/Switch4' */
        VeAXLC_M_ActualAxleTrq = VeAXLC_M_ActAxleOutputTrq;
    }
    else
    {
        /* Switch: '<S61>/Switch4' incorporates:
         *  Product: '<S61>/Multiplication1'
         */
        VeAXLC_M_ActualAxleTrq = VeAXLC_M_ActAxleOutputTrq *
            rtb_TmpSignalConversionAtVeWTAR;
    }

    /* End of Switch: '<S61>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeATRR_M_OutTrqReqImmWithoutSEM' */
    (void)Rte_Read_VeATRR_M_OutTrqReqImmWithoutSEM_Value(&tmpRead_d);

    /* Inport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap_Lin' */
    (void)Rte_Read_VeRGNR_M_RegenBrkOutTorqCap_Lin_Value(&tmpRead_c);

    /* Inport: '<Root>/VeRGNR_M_DrvIntndTotBrkOutTrq' */
    (void)Rte_Read_VeRGNR_M_DrvIntndTotBrkOutTrq_Value(&tmpRead_b);

    /* Inport: '<Root>/VeATRR_M_OutputTorqReqImmedHTDR' */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedHTDR_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/AXLR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* SignalConversion generated from: '<S5>/VeAXLC_M_MinAxleTorqCap' incorporates:
     *  Constant: '<S84>/Calib'
     */
    AXLR_ac_B.OutportBufferForVeAXLC_M_MinAxl = KeAXLR_M_MinAxleTorqCapOvrd;

    /* SignalConversion generated from: '<S5>/VeAXLC_Pct_ActAxleTorqRrAxleTorqSplit' incorporates:
     *  Constant: '<S87>/Calib'
     */
    AXLR_ac_B.OutportBufferForVeAXLC_Pct_ActA =
        KeAXLR_Pct_ActAxleTorqRrAxleTorqSplit;

    /* SignalConversion generated from: '<S5>/VeAXLC_b_ActAxleTrqFA' */
    AXLR_ac_B.OutportBufferForVeAXLC_b_ActAxl = false;

    /* SignalConversion generated from: '<S5>/VeAXLC_b_ActualAxleTrqFA' */
    AXLR_ac_B.OutportBufferForVeAXLC_b_Actual = false;

    /* SignalConversion generated from: '<S5>/VeAXLC_s_ElecAxleTorqCapSclr' */
    AXLR_ac_B.OutportBufferForVeAXLC_s_ElecAx = 1.0F;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Axle_Torque_Calculation'
     */
    /* SignalConversion generated from: '<S173>/Product2' incorporates:
     *  Constant: '<S175>/Calib'
     *  Constant: '<S176>/Calib'
     *  Gain: '<S177>/Gain'
     *  Gain: '<S178>/Gain'
     *  Gain: '<S179>/Gain'
     *  Gain: '<S180>/Gain'
     *  Gain: '<S181>/Gain'
     *  Gain: '<S182>/Gain'
     *  Gain: '<S183>/Gain'
     *  Gain: '<S184>/Gain'
     *  Inport: '<Root>/VeHTDR_M_ToFTgt_postRegen'
     *  Inport: '<Root>/VeHTDR_M_ToRTgt_postRegen'
     *  Inport: '<Root>/VeVTVR_M_OptToFront'
     *  Inport: '<Root>/VeVTVR_M_OptToRear'
     *  Product: '<S173>/Product2'
     *  Product: '<S173>/Product4'
     *  Switch: '<S173>/Switch1'
     *  Switch: '<S173>/Switch3'
     */
#if Rte_SysCon_Variant_AXLR_Dual_Axis

    /* SignalConversion generated from: '<S173>/Product2' incorporates:
     *  Constant: '<S173>/ConstantValue1'
     *  Constant: '<S173>/ConstantValue2'
     *  Constant: '<S173>/ConstantValue3'
     *  Constant: '<S173>/ConstantValue5'
     */
    rtb_TmpSignalConversionAtProduc[0] = VeAXLC_M_TiActual;
    rtb_TmpSignalConversionAtProduc[1] = 0.0F;
    rtb_TmpSignalConversionAtProduc[2] = 0.0F;
    rtb_TmpSignalConversionAtProduc[3] = 0.0F;
    rtb_TmpSignalConversionAtProduc[4] = 0.0F;
    rtb_TmpSignalConversionAtProduc[5] = rtb_TmpSignalConversionAtVeTCCR;
    rtb_TmpSignalConversionAtProduc[6] = rtb_TmpSignalConversionAtVeHSER;
    rtb_TmpSignalConversionAtProduc[7] = rtb_TmpSignalConversionAtVeHS_a;
    rtb_TmpSignalConversionAtProduc[8] = rtb_TmpSignalConversionAtVeH_ep;
    rtb_TmpSignalConversionAtProduc[9] = rtb_TmpSignalConversionAtVeHS_p;
    rtb_TmpSignalConversionAtProduc[10] = rtb_TmpSignalConversionAtVeTISR;
    rtb_TmpSignalConversionAtProduc[11] = VeAXLC_dn_InputAccel;
    rtb_TmpSignalConversionAtProduc[12] = rtb_TmpSignalConversionAtVeVSDR;
    rtb_TmpSignalConversionAtProduc[13] = rtb_TmpSignalConversionAtVeVS_c;
    rtb_TmpSignalConversionAtProduc[14] = rtb_TmpSignalConversionAtVeHS_l;
    rtb_TmpSignalConversionAtProduc[15] = rtb_TmpSignalConversionAtVeH_fb;
    rtb_TmpSignalConversionAtVeTCCR = 0.0F;
    rtb_TmpSignalConversionAtVeHSER = 0.0F;
    for (i = 0; i < 16; i++)
    {
        rtb_TmpSignalConversionAtVeHS_a = rtb_TmpSignalConversionAtProduc[i];
        rtb_TmpSignalConversionAtVeTCCR += rtb_TmpSignalConversionAtVaTSXR[i + 3]
            * rtb_TmpSignalConversionAtVeHS_a;
        rtb_TmpSignalConversionAtVeHSER += rtb_TmpSignalConversionAtVaTS_k[i + 3]
            * rtb_TmpSignalConversionAtVeHS_a;
    }

    /* Product: '<S173>/Product2' */
    AXLR_ac_B.Product2 = rtb_TmpSignalConversionAtVeTCCR;

    /* Product: '<S173>/Product4' */
    AXLR_ac_B.Product4 = rtb_TmpSignalConversionAtVeHSER;
    if (KeAXLR_b_UseTgtTrq4AxlTrqEst)
    {
        /* VariantMerge generated from: '<S7>/Variant3' incorporates:
         *  Inport: '<Root>/VeHTDR_M_OptToRear_OptTaTb'
         *  Switch: '<S173>/Switch1'
         */
        (void)Rte_Read_VeHTDR_M_OptToRear_OptTaTb_Value
            (&AXLR_ac_B.VariantMerge_For_Variant_Sour_n);

        /* VariantMerge generated from: '<S7>/Variant1' incorporates:
         *  Inport: '<Root>/VeHTDR_M_OptToFront_OptTaTb'
         *  Switch: '<S173>/Switch1'
         */
        (void)Rte_Read_VeHTDR_M_OptToFront_OptTaTb_Value
            (&AXLR_ac_B.VariantMerge_For_Variant_Source);
    }
    else
    {
        /* SignalConversion generated from: '<S173>/Product1' */
        rtb_Switch_g[0] = rtb_TmpSignalConversionAtVeMTQR;
        rtb_Switch_g[1] = rtb_TmpSignalConversionAtVeMTIR;
        rtb_Switch_g[2] = rtb_TmpSignalConversionAtVeMT_i;

        /* Product: '<S173>/Product1' */
        rtb_TmpSignalConversionAtVeTCCR = 0.0F;

        /* Product: '<S173>/Product3' */
        rtb_TmpSignalConversionAtVeHSER = 0.0F;
        for (i = 0; i < 3; i++)
        {
            rtb_TmpSignalConversionAtVeMTQR = rtb_Switch_g[i];

            /* Product: '<S173>/Product1' */
            rtb_TmpSignalConversionAtVeTCCR += rtb_TmpSignalConversionAtVaTSXR[i]
                * rtb_TmpSignalConversionAtVeMTQR;

            /* Product: '<S173>/Product3' */
            rtb_TmpSignalConversionAtVeHSER += rtb_TmpSignalConversionAtVaTS_k[i]
                * rtb_TmpSignalConversionAtVeMTQR;
        }

        /* VariantMerge generated from: '<S7>/Variant1' incorporates:
         *  Product: '<S173>/Product1'
         *  Sum: '<S173>/Sum1'
         *  Switch: '<S173>/Switch1'
         */
        AXLR_ac_B.VariantMerge_For_Variant_Source =
            rtb_TmpSignalConversionAtVeTCCR + AXLR_ac_B.Product2;

        /* VariantMerge generated from: '<S7>/Variant3' incorporates:
         *  Product: '<S173>/Product3'
         *  Sum: '<S173>/Sum2'
         *  Switch: '<S173>/Switch1'
         */
        AXLR_ac_B.VariantMerge_For_Variant_Sour_n =
            rtb_TmpSignalConversionAtVeHSER + AXLR_ac_B.Product4;
    }

    (void)Rte_Read_VeHTDR_M_ToRTgt_postRegen_Value(&rtb_Switch1_mc_idx_0);
    (void)Rte_Read_VeHTDR_M_ToFTgt_postRegen_Value(&rtb_Switch1_mc_idx_1);
    (void)Rte_Read_VeVTVR_M_OptToRear_Value(&tmpRead_7);
    (void)Rte_Read_VeVTVR_M_OptToFront_Value(&tmpRead_6);
    if (KeAXLR_b_UseHTDR4RefAxlTrq)
    {
        /* VariantMerge generated from: '<S7>/Variant4' incorporates:
         *  Switch: '<S173>/Switch1'
         */
        AXLR_ac_B.VariantMerge_For_Variant_Sour_g = rtb_Switch1_mc_idx_1;

        /* VariantMerge generated from: '<S7>/Variant5' incorporates:
         *  Switch: '<S173>/Switch1'
         */
        AXLR_ac_B.VariantMerge_For_Variant_Sour_d = rtb_Switch1_mc_idx_0;
    }
    else
    {
        /* VariantMerge generated from: '<S7>/Variant4' incorporates:
         *  Switch: '<S173>/Switch1'
         */
        AXLR_ac_B.VariantMerge_For_Variant_Sour_g = tmpRead_6;

        /* VariantMerge generated from: '<S7>/Variant5' incorporates:
         *  Switch: '<S173>/Switch1'
         */
        AXLR_ac_B.VariantMerge_For_Variant_Sour_d = tmpRead_7;
    }

#else

    /* VariantMerge generated from: '<S7>/Variant1' incorporates:
     *  Gain: '<S181>/Gain'
     */
    AXLR_ac_B.VariantMerge_For_Variant_Source = VeAXLC_M_ActAxleOutputTrq;

    /* VariantMerge generated from: '<S7>/Variant3' incorporates:
     *  Constant: '<S174>/ConstantValue12'
     *  Gain: '<S182>/Gain'
     */
    AXLR_ac_B.VariantMerge_For_Variant_Sour_n = 0.0F;

    /* VariantMerge generated from: '<S7>/Variant4' incorporates:
     *  Gain: '<S183>/Gain'
     */
    AXLR_ac_B.VariantMerge_For_Variant_Sour_g = VeAXLC_M_DrvrIntndedAxleTrq_Arb;

    /* VariantMerge generated from: '<S7>/Variant5' incorporates:
     *  Constant: '<S174>/ConstantValue1'
     *  Gain: '<S184>/Gain'
     */
    AXLR_ac_B.VariantMerge_For_Variant_Sour_d = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S173>/Product2' */
#if Rte_SysCon_Variant_AXLR_Dual_Axis

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&rtb_Vector_a);

    /* Inport: '<Root>/VeMSPR_n_MtrC_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value(&rtb_Sum2_m);

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_e);

    /* Outputs for Function Call SubSystem: '<S1>/Axle_Min_Max_Calculation' */
    /* Sum: '<S6>/Sum1' incorporates:
     *  Product: '<S6>/Product3'
     *  Product: '<S6>/Product4'
     *  Product: '<S6>/Product5'
     */
    rtb_Switch1_mc_idx_0 = (((rtb_TmpSignalConversionAtVaTS_k[0] *
        rtb_TmpSignalConversionAtVeHTDR) + (rtb_TmpSignalConversionAtVaTS_k[1] *
        rtb_TmpSignalConversionAtVeHT_b)) + (rtb_TmpSignalConversionAtVaTS_k[2] *
        rtb_TmpSignalConversionAtVeH_ek)) + AXLR_ac_B.Product4;
    rtb_Switch1_mc_idx_1 = (((rtb_TmpSignalConversionAtVaTS_k[0] *
        rtb_TmpSignalConversionAtVeHT_k) + (rtb_TmpSignalConversionAtVaTS_k[1] *
        rtb_TmpSignalConversionAtVeHT_n)) + (rtb_TmpSignalConversionAtVaTS_k[2] *
        rtb_TmpSignalConversionAtVeHT_i)) + AXLR_ac_B.Product4;

    /* Sum: '<S6>/Sum' incorporates:
     *  Product: '<S6>/Product'
     *  Product: '<S6>/Product1'
     *  Product: '<S6>/Product2'
     */
    rtb_TmpSignalConversionAtVeHTDR = (((rtb_TmpSignalConversionAtVaTSXR[0] *
        rtb_TmpSignalConversionAtVeHTDR) + (rtb_TmpSignalConversionAtVaTSXR[1] *
        rtb_TmpSignalConversionAtVeHT_b)) + (rtb_TmpSignalConversionAtVaTSXR[2] *
        rtb_TmpSignalConversionAtVeH_ek)) + AXLR_ac_B.Product2;
    rtb_TmpSignalConversionAtVeHT_k = (((rtb_TmpSignalConversionAtVaTSXR[0] *
        rtb_TmpSignalConversionAtVeHT_k) + (rtb_TmpSignalConversionAtVaTSXR[1] *
        rtb_TmpSignalConversionAtVeHT_n)) + (rtb_TmpSignalConversionAtVaTSXR[2] *
        rtb_TmpSignalConversionAtVeHT_i)) + AXLR_ac_B.Product2;

    /* Lookup_n-D: '<S165>/Vector' incorporates:
     *  Abs: '<S6>/Abs1'
     */
    rtb_TmpSignalConversionAtVeMTQR = look1_iflf_binlcapw(fabsf(tmpRead_e), ((
        const float32 *)&(KtAXLR_r_RrAxlQuadFctr[0])), ((const float32 *)
        &(KtAXLR_n_RrAxlQuadVec[0])), 4U);

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S160>/Calib'
     */
    if (HeAXLR_b_UseMtrC4Front)
    {
        rtb_Vector_a = rtb_Sum2_m;
    }

    /* End of Switch: '<S6>/Switch' */

    /* Lookup_n-D: '<S164>/Vector' incorporates:
     *  Abs: '<S6>/Abs'
     */
    rtb_Vector_a = look1_iflf_binlcapw(fabsf(rtb_Vector_a), ((const float32 *)
        &(KtAXLR_r_FrntAxlQuadFctr[0])), ((const float32 *)
        &(KtAXLR_n_FrntAxlQuadVec[0])), 4U);

    /* If: '<S6>/If2' incorporates:
     *  Constant: '<S161>/Calib'
     *  Merge: '<S6>/Merge3'
     *  Product: '<S170>/Product4'
     */
    if (KeAXLR_b_UsePhyBasedToMinMax)
    {
        /* Outputs for IfAction SubSystem: '<S6>/ToMinMax_Physical' incorporates:
         *  ActionPort: '<S170>/ActionPort'
         */
        /* Switch: '<S170>/Switch' incorporates:
         *  Constant: '<S170>/ConstantValue2'
         *  RelationalOperator: '<S170>/Comparison2'
         */
        if (rtb_TmpSignalConversionAtVeWTAR < -0.5F)
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Product: '<S170>/Product1'
             */
            rtb_Switch1_b[0] = rtb_Vector_a * rtb_TmpSignalConversionAtVeHTDR;
            rtb_Switch1_b[1] = rtb_TmpSignalConversionAtVeMTQR *
                rtb_Switch1_mc_idx_0;
        }
        else
        {
            /* Switch: '<S170>/Switch1' */
            rtb_Switch1_b[0] = rtb_TmpSignalConversionAtVeHTDR;
            rtb_Switch1_b[1] = rtb_Switch1_mc_idx_0;
        }

        /* End of Switch: '<S170>/Switch' */
        for (i = 0; i < 2; i++)
        {
            /* Merge: '<S6>/Merge2' incorporates:
             *  Product: '<S170>/Product3'
             */
            rtb_Merge2[i] = rtb_Switch1_b[i] * rtb_TmpSignalConversionAtVeOI_m;
        }

        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S170>/ConstantValue1'
         *  RelationalOperator: '<S170>/Comparison1'
         */
        if (rtb_TmpSignalConversionAtVeWTAR < -0.5F)
        {
            /* Switch: '<S170>/Switch1' */
            rtb_Switch1_b[0] = rtb_TmpSignalConversionAtVeHT_k;
            rtb_Switch1_b[1] = rtb_Switch1_mc_idx_1;
        }
        else
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Product: '<S170>/Product2'
             */
            rtb_Switch1_b[0] = rtb_Vector_a * rtb_TmpSignalConversionAtVeHT_k;
            rtb_Switch1_b[1] = rtb_TmpSignalConversionAtVeMTQR *
                rtb_Switch1_mc_idx_1;
        }

        /* End of Switch: '<S170>/Switch1' */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch1_b[i] *= rtb_TmpSignalConversionAtVeOI_m;
        }

        /* End of Outputs for SubSystem: '<S6>/ToMinMax_Physical' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S6>/Blend_ToMinMax_DID' incorporates:
         *  ActionPort: '<S159>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S159>/GradientLimiter' */
        /* Sum: '<S171>/Sum2' incorporates:
         *  Constant: '<S159>/ConstantValue2'
         *  RelationalOperator: '<S159>/Comparison2'
         *  UnitDelay: '<S171>/Unit Delay'
         */
        rtb_Sum2_m = ((float32)((rtb_TmpSignalConversionAtVeWTAR > -0.5F) ? 1 :
                                0)) - AXLR_ac_DW.UnitDelay_DSTATE_a;

        /* Outputs for Atomic SubSystem: '<S171>/Limiter' */
        /* Switch: '<S172>/Switch1' incorporates:
         *  Constant: '<S163>/Calib'
         *  RelationalOperator: '<S172>/Relational Operator'
         */
        if (KeAXLR_k_TorqMinMax_LU < rtb_Sum2_m)
        {
            /* Switch: '<S172>/Switch1' */
            rtb_Sum2_m = KeAXLR_k_TorqMinMax_LU;
        }

        /* End of Switch: '<S172>/Switch1' */

        /* Switch: '<S172>/Switch' incorporates:
         *  Constant: '<S162>/Calib'
         *  RelationalOperator: '<S172>/Relational Operator1'
         */
        if (rtb_Sum2_m <= KeAXLR_k_TorqMinMax_LD)
        {
            rtb_Sum2_m = KeAXLR_k_TorqMinMax_LD;
        }

        /* End of Switch: '<S172>/Switch' */
        /* End of Outputs for SubSystem: '<S171>/Limiter' */

        /* Sum: '<S171>/Sum3' incorporates:
         *  UnitDelay: '<S171>/Unit Delay'
         */
        rtb_Sum2_m += AXLR_ac_DW.UnitDelay_DSTATE_a;

        /* Update for UnitDelay: '<S171>/Unit Delay' */
        AXLR_ac_DW.UnitDelay_DSTATE_a = rtb_Sum2_m;

        /* End of Outputs for SubSystem: '<S159>/GradientLimiter' */

        /* Merge: '<S6>/Merge3' incorporates:
         *  Constant: '<S159>/ConstantValue16'
         *  Product: '<S159>/Product3'
         *  Product: '<S159>/Product4'
         *  Product: '<S159>/Product5'
         *  Product: '<S159>/Product8'
         *  Sum: '<S159>/Sum4'
         *  Sum: '<S159>/Sum5'
         */
        rtb_Switch1_b[0] = ((((1.0F - rtb_Sum2_m) *
                              (-rtb_TmpSignalConversionAtVeHTDR)) +
                             (rtb_TmpSignalConversionAtVeHT_k * rtb_Sum2_m)) *
                            rtb_TmpSignalConversionAtVeOI_m) * rtb_Vector_a;
        rtb_Switch1_b[1] = ((((1.0F - rtb_Sum2_m) * (-rtb_Switch1_mc_idx_0)) +
                             (rtb_Switch1_mc_idx_1 * rtb_Sum2_m)) *
                            rtb_TmpSignalConversionAtVeOI_m) *
            rtb_TmpSignalConversionAtVeMTQR;

        /* Merge: '<S6>/Merge2' incorporates:
         *  Constant: '<S159>/ConstantValue13'
         *  Product: '<S159>/Product1'
         *  Product: '<S159>/Product2'
         *  Product: '<S159>/Product6'
         *  Product: '<S159>/Product7'
         *  Sum: '<S159>/Sum2'
         *  Sum: '<S159>/Sum3'
         */
        rtb_Merge2[0] = (((1.0F - rtb_Sum2_m) *
                          (-rtb_TmpSignalConversionAtVeHT_k)) +
                         (rtb_TmpSignalConversionAtVeHTDR * rtb_Sum2_m)) *
            rtb_TmpSignalConversionAtVeOI_m;
        rtb_Merge2[1] = (((1.0F - rtb_Sum2_m) * (-rtb_Switch1_mc_idx_1)) +
                         (rtb_Switch1_mc_idx_0 * rtb_Sum2_m)) *
            rtb_TmpSignalConversionAtVeOI_m;

        /* End of Outputs for SubSystem: '<S6>/Blend_ToMinMax_DID' */
    }

    /* Gain: '<S166>/Gain' */
    AXLR_ac_B.Gain_o = rtb_Merge2[0];

    /* Gain: '<S167>/Gain' */
    AXLR_ac_B.Gain_h = rtb_Merge2[1];

    /* Gain: '<S168>/Gain' */
    AXLR_ac_B.Gain_e = rtb_Switch1_b[0];

    /* Gain: '<S169>/Gain' */
    AXLR_ac_B.Gain_g0 = rtb_Switch1_b[1];

    /* End of Outputs for SubSystem: '<S1>/Axle_Min_Max_Calculation' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLC_PassThrough'
     */
    /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled' */
    /* Sum: '<S8>/Summation' incorporates:
     *  Constant: '<S14>/Calib'
     *  Product: '<S8>/Multiplication'
     *  Sum: '<S8>/Subtraction'
     *  UnitDelay: '<S8>/Unit Delay'
     */
    rtb_Vector_a = ((AXLR_ac_B.VariantMerge_For_Variant_Source -
                     AXLR_ac_DW.UnitDelay_DSTATE_d) *
                    KeAXLR_k_FiltCoeffFrntAxlTrqEst) +
        AXLR_ac_DW.UnitDelay_DSTATE_d;

    /* Update for UnitDelay: '<S8>/Unit Delay' incorporates:
     *  Switch: '<S8>/Switch2'
     */
    AXLR_ac_DW.UnitDelay_DSTATE_d = rtb_Vector_a;

    /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled1' */
    /* Sum: '<S9>/Summation' incorporates:
     *  Constant: '<S15>/Calib'
     *  Product: '<S9>/Multiplication'
     *  Sum: '<S9>/Subtraction'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    rtb_Sum2_m = ((AXLR_ac_B.VariantMerge_For_Variant_Sour_n -
                   AXLR_ac_DW.UnitDelay_DSTATE_f) *
                  KeAXLR_k_FiltCoeffRrAxlTrqEst) + AXLR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S9>/Unit Delay' incorporates:
     *  Switch: '<S9>/Switch2'
     */
    AXLR_ac_DW.UnitDelay_DSTATE_f = rtb_Sum2_m;

    /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled1' */

    /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled2' */
    /* Sum: '<S10>/Summation' incorporates:
     *  Constant: '<S16>/Calib'
     *  Product: '<S10>/Multiplication'
     *  Sum: '<S10>/Subtraction'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeMTQR =
        ((AXLR_ac_B.VariantMerge_For_Variant_Sour_g -
          AXLR_ac_DW.UnitDelay_DSTATE_c) * KeAXLR_k_FiltCoeffSplitFrntTrqReq) +
        AXLR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S10>/Unit Delay' incorporates:
     *  Switch: '<S10>/Switch2'
     */
    AXLR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeMTQR;

    /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled2' */

    /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled3' */
    /* Sum: '<S11>/Summation' incorporates:
     *  Constant: '<S17>/Calib'
     *  Product: '<S11>/Multiplication'
     *  Sum: '<S11>/Subtraction'
     *  UnitDelay: '<S11>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeMTIR =
        ((AXLR_ac_B.VariantMerge_For_Variant_Sour_d -
          AXLR_ac_DW.UnitDelay_DSTATE) * KeAXLR_k_FiltCoeffSplitRrAxlTrqReq) +
        AXLR_ac_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S11>/Unit Delay' incorporates:
     *  Switch: '<S11>/Switch2'
     */
    AXLR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeMTIR;

    /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled3' */

    /* Switch: '<S3>/Switch2' incorporates:
     *  Constant: '<S13>/Calib'
     */
    if (!HeAXLR_b_PhyscBasedAxleTrqDirectn)
    {
        /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled' */
        /* Switch: '<S3>/Switch2' incorporates:
         *  Product: '<S3>/Multiplication1'
         *  Switch: '<S10>/Switch2'
         *  Switch: '<S11>/Switch2'
         *  Switch: '<S8>/Switch2'
         *  Switch: '<S9>/Switch2'
         */
        rtb_Vector_a *= rtb_TmpSignalConversionAtVeWTAR;

        /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled1' */
        rtb_Sum2_m *= rtb_TmpSignalConversionAtVeWTAR;

        /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled1' */

        /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled2' */
        rtb_TmpSignalConversionAtVeMTQR *= rtb_TmpSignalConversionAtVeWTAR;

        /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled2' */

        /* Outputs for Atomic SubSystem: '<S3>/DigitalLowpassResetEnabled3' */
        rtb_TmpSignalConversionAtVeMTIR *= rtb_TmpSignalConversionAtVeWTAR;

        /* End of Outputs for SubSystem: '<S3>/DigitalLowpassResetEnabled3' */
    }

    /* End of Switch: '<S3>/Switch2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* Outport: '<Root>/VeAXLR_M_ActAxleOutputTrqNoCL' incorporates:
     *  Gain: '<S100>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLC_M_ActAxleOutputTrqNoCL'
     */
    (void)Rte_Write_VeAXLR_M_ActAxleOutputTrqNoCL_Value(rtb_Multiplication2[1]);

    /* Outport: '<Root>/VeAXLR_M_AxleTrqMinPwrTrn' incorporates:
     *  Gain: '<S98>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLC_M_AxleTrqMinPwrTrn'
     */
    (void)Rte_Write_VeAXLR_M_AxleTrqMinPwrTrn_Value(rtb_Vector_b[9]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLO_125ms_ProcessOutputs'
     */
    /* Switch: '<S4>/Switch19' incorporates:
     *  Constant: '<S42>/Calib'
     */
    if (KeAXLR_b_FrntAxlTrqEstOvrdEnbl)
    {
        /* Outport: '<Root>/VeAXLR_M_FrntAxlTrqEst' incorporates:
         *  Constant: '<S27>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_FrntAxlTrqEst'
         */
        (void)Rte_Write_VeAXLR_M_FrntAxlTrqEst_Value
            (KeAXLR_M_FrntAxlTrqEstOvrdVal);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/AXLC_PassThrough' */
        /* Outport: '<Root>/VeAXLR_M_FrntAxlTrqEst' incorporates:
         *  Gain: '<S18>/Gain'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_FrntAxlTrqEst'
         */
        (void)Rte_Write_VeAXLR_M_FrntAxlTrqEst_Value(rtb_Vector_a);

        /* End of Outputs for SubSystem: '<S1>/AXLC_PassThrough' */
    }

    /* End of Switch: '<S4>/Switch19' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeAXLC_M_FrntAxlTrqMax' */
#if Rte_SysCon_Variant_AXLR_Dual_Axis

    /* Outport: '<Root>/VeAXLR_M_FrntAxlTrqMax' */
    (void)Rte_Write_VeAXLR_M_FrntAxlTrqMax_Value(AXLR_ac_B.Gain_o);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAXLC_M_FrntAxlTrqMax' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLO_125ms_ProcessOutputs'
     */
    /* Switch: '<S4>/Switch5' incorporates:
     *  Constant: '<S56>/Calib'
     */
    if (KeAXLR_b_RrAxlTrqEstOvrdEnbl)
    {
        /* Outport: '<Root>/VeAXLR_M_RrAxlTrqEst' incorporates:
         *  Constant: '<S34>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_RrAxlTrqEst'
         */
        (void)Rte_Write_VeAXLR_M_RrAxlTrqEst_Value(KeAXLR_M_RrAxlTrqEstOvrdVal);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/AXLC_PassThrough' */
        /* Outport: '<Root>/VeAXLR_M_RrAxlTrqEst' incorporates:
         *  Gain: '<S19>/Gain'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_RrAxlTrqEst'
         */
        (void)Rte_Write_VeAXLR_M_RrAxlTrqEst_Value(rtb_Sum2_m);

        /* End of Outputs for SubSystem: '<S1>/AXLC_PassThrough' */
    }

    /* End of Switch: '<S4>/Switch5' */

    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S57>/Calib'
     */
    if (KeAXLR_b_SplitFrntTrqReqOvrdEnbl)
    {
        /* Outport: '<Root>/VeAXLR_M_SplitFrntTrqReq' incorporates:
         *  Constant: '<S35>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_SplitFrntTrqReq'
         */
        (void)Rte_Write_VeAXLR_M_SplitFrntTrqReq_Value
            (KeAXLR_M_SplitFrntTrqReqOvrdVal);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/AXLC_PassThrough' */
        /* Outport: '<Root>/VeAXLR_M_SplitFrntTrqReq' incorporates:
         *  Gain: '<S20>/Gain'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_SplitFrntTrqReq'
         */
        (void)Rte_Write_VeAXLR_M_SplitFrntTrqReq_Value
            (rtb_TmpSignalConversionAtVeMTQR);

        /* End of Outputs for SubSystem: '<S1>/AXLC_PassThrough' */
    }

    /* End of Switch: '<S4>/Switch4' */

    /* Switch: '<S4>/Switch14' incorporates:
     *  Constant: '<S58>/Calib'
     */
    if (KeAXLR_b_SplitRrAxlTrqReqOvrdEnbl)
    {
        /* Outport: '<Root>/VeAXLR_M_SplitRrAxlTrqReq' incorporates:
         *  Constant: '<S36>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_SplitRrAxlTrqReq'
         */
        (void)Rte_Write_VeAXLR_M_SplitRrAxlTrqReq_Value
            (KeAXLR_M_SplitRrAxlTrqReqOvrdVal);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/AXLC_PassThrough' */
        /* Outport: '<Root>/VeAXLR_M_SplitRrAxlTrqReq' incorporates:
         *  Gain: '<S21>/Gain'
         *  SignalConversion generated from: '<S1>/VeAXLC_M_SplitRrAxlTrqReq'
         */
        (void)Rte_Write_VeAXLR_M_SplitRrAxlTrqReq_Value
            (rtb_TmpSignalConversionAtVeMTIR);

        /* End of Outputs for SubSystem: '<S1>/AXLC_PassThrough' */
    }

    /* End of Switch: '<S4>/Switch14' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* Outport: '<Root>/VeAXLR_M_To_CL_Fast_Axle' incorporates:
     *  Gain: '<S99>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLC_M_To_CL_Fast_Axle'
     */
    (void)Rte_Write_VeAXLR_M_To_CL_Fast_Axle_Value(rtb_Vector_b[10]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLO_125ms_ProcessOutputs'
     */
    /* Switch: '<S4>/Switch7' incorporates:
     *  Constant: '<S43>/Calib'
     */
    if (KeAXLR_b_OvrdActAxleOutputTrq)
    {
        /* Outport: '<Root>/VeAXLR_M_ActAxleOutputTrq' incorporates:
         *  Constant: '<S22>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActAxleOutputTrq'
         */
        (void)Rte_Write_VeAXLR_M_ActAxleOutputTrq_Value
            (KeAXLR_M_ActAxleOutputTrq);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_ActAxleOutputTrq' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActAxleOutputTrq'
         */
        (void)Rte_Write_VeAXLR_M_ActAxleOutputTrq_Value
            (VeAXLC_M_ActAxleOutputTrq);
    }

    /* End of Switch: '<S4>/Switch7' */

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S45>/Calib'
     */
    if (KeAXLR_b_OvrdActAxleTrq)
    {
        /* Outport: '<Root>/VeAXLR_M_ActAxleTrq' incorporates:
         *  Constant: '<S23>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActAxleTrq'
         */
        (void)Rte_Write_VeAXLR_M_ActAxleTrq_Value(KeAXLR_M_ActAxleTrq);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_ActAxleTrq' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActAxleTrq'
         */
        (void)Rte_Write_VeAXLR_M_ActAxleTrq_Value(VeAXLC_M_ActAxleTrq);
    }

    /* End of Switch: '<S4>/Switch3' */

    /* Switch: '<S4>/Switch11' incorporates:
     *  Constant: '<S46>/Calib'
     */
    if (KeAXLR_b_OvrdActualAxleTrq)
    {
        /* Outport: '<Root>/VeAXLR_M_ActualAxleTrq' incorporates:
         *  Constant: '<S24>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActualAxleTrq'
         */
        (void)Rte_Write_VeAXLR_M_ActualAxleTrq_Value(KeAXLR_M_ActualAxleTrq);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_ActualAxleTrq' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActualAxleTrq'
         */
        (void)Rte_Write_VeAXLR_M_ActualAxleTrq_Value(VeAXLC_M_ActualAxleTrq);
    }

    /* End of Switch: '<S4>/Switch11' */

    /* Switch: '<S4>/Switch16' incorporates:
     *  Constant: '<S52>/Calib'
     */
    if (KeAXLR_b_OvrrdActualAxleTrq_phyEnbl)
    {
        /* Outport: '<Root>/VeAXLR_M_ActualAxleTrq_phy' incorporates:
         *  Constant: '<S31>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActualAxleTrq_phy'
         */
        (void)Rte_Write_VeAXLR_M_ActualAxleTrq_phy_Value
            (KeAXLR_M_OvrrdActualAxleTrq_phy);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_ActualAxleTrq_phy' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActualAxleTrq_phy'
         */
        (void)Rte_Write_VeAXLR_M_ActualAxleTrq_phy_Value
            (VeAXLC_M_ActualAxleTrq_phy);
    }

    /* End of Switch: '<S4>/Switch16' */

    /* Switch: '<S4>/Switch13' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeAXLR_b_OvrdActualOutputTorque)
    {
        /* Outport: '<Root>/VeAXLR_M_ActualOutputTorque' incorporates:
         *  Constant: '<S25>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActualOutputTorque'
         */
        (void)Rte_Write_VeAXLR_M_ActualOutputTorque_Value
            (KeAXLR_M_ActualOutputTorque);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_ActualOutputTorque' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_ActualOutputTorque'
         */
        (void)Rte_Write_VeAXLR_M_ActualOutputTorque_Value
            (VeAXLC_M_ActualOutputTorque);
    }

    /* End of Switch: '<S4>/Switch13' */

    /* Switch: '<S4>/Switch8' incorporates:
     *  Constant: '<S53>/Calib'
     */
    if (KeAXLR_b_OvrrdClch1Torq_AxleEnbl)
    {
        /* Outport: '<Root>/VeAXLR_M_Clch1Torq_Axle' incorporates:
         *  Constant: '<S32>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_Clch1Torq_Axle'
         */
        (void)Rte_Write_VeAXLR_M_Clch1Torq_Axle_Value
            (KeAXLR_M_OvrrdClch1Torq_Axle);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_Clch1Torq_Axle' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_Clch1Torq_Axle'
         */
        (void)Rte_Write_VeAXLR_M_Clch1Torq_Axle_Value(VeAXLC_M_ToFromTC1);
    }

    /* End of Switch: '<S4>/Switch8' */

    /* Switch: '<S4>/Switch17' incorporates:
     *  Constant: '<S54>/Calib'
     */
    if (KeAXLR_b_OvrrdClch3Torq_AxleEnbl)
    {
        /* Outport: '<Root>/VeAXLR_M_Clch3Torq_Axle' incorporates:
         *  Constant: '<S33>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_Clch3Torq_Axle'
         */
        (void)Rte_Write_VeAXLR_M_Clch3Torq_Axle_Value
            (KeAXLR_M_OvrrdClch3Torq_Axle);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_Clch3Torq_Axle' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_Clch3Torq_Axle'
         */
        (void)Rte_Write_VeAXLR_M_Clch3Torq_Axle_Value(VeAXLC_M_ToFromTC3);
    }

    /* End of Switch: '<S4>/Switch17' */

    /* Switch: '<S4>/Switch15' incorporates:
     *  Constant: '<S55>/Calib'
     */
    if (KeAXLR_b_OvrrdDrvrIntndedAxleTrq)
    {
        /* Outport: '<Root>/VeAXLR_M_DrvrIntndedAxleTrq_Arb' incorporates:
         *  Constant: '<S26>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_DrvrIntndedAxleTrq_Arb'
         */
        (void)Rte_Write_VeAXLR_M_DrvrIntndedAxleTrq_Arb_Value
            (KeAXLR_M_DrvrIntndedAxleTrq_Arb);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_DrvrIntndedAxleTrq_Arb' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_DrvrIntndedAxleTrq_Arb'
         */
        (void)Rte_Write_VeAXLR_M_DrvrIntndedAxleTrq_Arb_Value
            (VeAXLC_M_DrvrIntndedAxleTrq_Arb);
    }

    /* End of Switch: '<S4>/Switch15' */

    /* Switch: '<S4>/Switch10' incorporates:
     *  Constant: '<S49>/Calib'
     */
    if (KeAXLR_b_OvrdMaxAxleTrqCruise)
    {
        /* Outport: '<Root>/VeAXLR_M_MaxAxleTrqCruise' incorporates:
         *  Constant: '<S28>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_MaxAxleTrqCruise'
         */
        (void)Rte_Write_VeAXLR_M_MaxAxleTrqCruise_Value
            (KeAXLR_M_MaxAxleTrqCruise);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_MaxAxleTrqCruise' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_MaxAxleTrqCruise'
         */
        (void)Rte_Write_VeAXLR_M_MaxAxleTrqCruise_Value
            (VeAXLC_M_MaxAxleTrqCruise);
    }

    /* End of Switch: '<S4>/Switch10' */

    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KeAXLR_b_OvrdMinAxleTorqCap)
    {
        /* Outport: '<Root>/VeAXLR_M_MinAxleTorqCap' incorporates:
         *  Constant: '<S29>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_MinAxleTorqCap'
         */
        (void)Rte_Write_VeAXLR_M_MinAxleTorqCap_Value(KeAXLR_M_MinAxleTorqCap);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_MinAxleTorqCap' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_MinAxleTorqCap'
         */
        (void)Rte_Write_VeAXLR_M_MinAxleTorqCap_Value
            (AXLR_ac_B.OutportBufferForVeAXLC_M_MinAxl);
    }

    /* End of Switch: '<S4>/Switch' */

    /* Switch: '<S4>/Switch9' incorporates:
     *  Constant: '<S51>/Calib'
     */
    if (KeAXLR_b_OvrdMinAxleTrqCruise)
    {
        /* Outport: '<Root>/VeAXLR_M_MinAxleTrqCruise' incorporates:
         *  Constant: '<S30>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_M_MinAxleTrqCruise'
         */
        (void)Rte_Write_VeAXLR_M_MinAxleTrqCruise_Value
            (KeAXLR_M_MinAxleTrqCruise);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_M_MinAxleTrqCruise' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_M_MinAxleTrqCruise'
         */
        (void)Rte_Write_VeAXLR_M_MinAxleTrqCruise_Value
            (VeAXLC_M_MinAxleTrqCruise);
    }

    /* End of Switch: '<S4>/Switch9' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S44>/Calib'
     */
    if (KeAXLR_b_OvrdActAxleTorqRrAxleTorqSplit)
    {
        /* Outport: '<Root>/VeAXLR_Pct_ActAxleTorqRrAxleTorqSplit' incorporates:
         *  Constant: '<S37>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_Pct_ActAxleTorqRrAxleTorqSplit'
         */
        (void)Rte_Write_VeAXLR_Pct_ActAxleTorqRrAxleTorqSplit_Value
            (KeAXLR_Pct_ActAxleTorqRrAxleTorqSplitVal);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_Pct_ActAxleTorqRrAxleTorqSplit' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_Pct_ActAxleTorqRrAxleTorqSplit'
         */
        (void)Rte_Write_VeAXLR_Pct_ActAxleTorqRrAxleTorqSplit_Value
            (AXLR_ac_B.OutportBufferForVeAXLC_Pct_ActA);
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch6' incorporates:
     *  Constant: '<S38>/Calib'
     */
    if (KeAXLR_b_ActAxleTrqFA_OvrrdEnbl)
    {
        /* Outport: '<Root>/VeAXLR_b_ActAxleTrqFA' incorporates:
         *  Constant: '<S39>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_b_ActAxleTrqFA'
         */
        (void)Rte_Write_VeAXLR_b_ActAxleTrqFA_Value
            (KeAXLR_b_ActAxleTrqFA_OvrrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_b_ActAxleTrqFA' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_b_ActAxleTrqFA'
         */
        (void)Rte_Write_VeAXLR_b_ActAxleTrqFA_Value
            (AXLR_ac_B.OutportBufferForVeAXLC_b_ActAxl);
    }

    /* End of Switch: '<S4>/Switch6' */

    /* Switch: '<S4>/Switch12' incorporates:
     *  Constant: '<S40>/Calib'
     */
    if (KeAXLR_b_ActualAxleTrqFA_OvrrdEnbl)
    {
        /* Outport: '<Root>/VeAXLR_b_ActualAxleTrqFA' incorporates:
         *  Constant: '<S41>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_b_ActualAxleTrqFA'
         */
        (void)Rte_Write_VeAXLR_b_ActualAxleTrqFA_Value
            (KeAXLR_b_ActualAxleTrqFA_OvrrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_b_ActualAxleTrqFA' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_b_ActualAxleTrqFA'
         */
        (void)Rte_Write_VeAXLR_b_ActualAxleTrqFA_Value
            (AXLR_ac_B.OutportBufferForVeAXLC_b_Actual);
    }

    /* End of Switch: '<S4>/Switch12' */

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S48>/Calib'
     */
    if (KeAXLR_b_OvrdElecAxleTorqCapSclr)
    {
        /* Outport: '<Root>/VeAXLR_s_ElecAxleTorqCapSclr' incorporates:
         *  Constant: '<S59>/Calib'
         *  SignalConversion generated from: '<S1>/VeAXLO_s_ElecAxleTorqCapSclr'
         */
        (void)Rte_Write_VeAXLR_s_ElecAxleTorqCapSclr_Value
            (KeAXLR_s_ElecAxleTorqCapSclr);
    }
    else
    {
        /* Outport: '<Root>/VeAXLR_s_ElecAxleTorqCapSclr' incorporates:
         *  SignalConversion generated from: '<S1>/VeAXLO_s_ElecAxleTorqCapSclr'
         */
        (void)Rte_Write_VeAXLR_s_ElecAxleTorqCapSclr_Value
            (AXLR_ac_B.OutportBufferForVeAXLC_s_ElecAx);
    }

    /* End of Switch: '<S4>/Switch2' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* Outport: '<Root>/VeAXLR_M_ArbitratedOutTorqReq' incorporates:
     *  Constant: '<S61>/ConstantValue7'
     *  MinMax: '<S61>/MinMax3'
     *  MinMax: '<S61>/MinMax4'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_ArbitratedOutTorqReq'
     *  Sum: '<S61>/Sum'
     *  Sum: '<S61>/Sum2'
     */
    (void)Rte_Write_VeAXLR_M_ArbitratedOutTorqReq_Value(fmaxf(tmpRead_a +
        tmpRead_b, fminf(tmpRead_d, 0.0F) + tmpRead_c));

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmTa' incorporates:
     *  Gain: '<S77>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_CmndTo_FrmTa'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmTa_Value(rtb_TmpSignalConversionAtVeHT_g);

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmTb' incorporates:
     *  Gain: '<S78>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_CmndTo_FrmTb'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmTb_Value(rtb_Abs2_a);

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmTc' incorporates:
     *  Gain: '<S79>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_CmndTo_FrmTc'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmTc_Value(rtb_Abs1_e);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmToMisc' incorporates:
     *  SignalConversion generated from: '<S1>/VeAXLR_M_CmndTo_FrmToMisc'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmToMisc_Value(VeAXLC_M_CmndTo_FrmToMisc);

    /* SignalConversion generated from: '<S1>/VeAXLR_M_FrntAxlTrqMin' */
#if Rte_SysCon_Variant_AXLR_Dual_Axis

    /* Outport: '<Root>/VeAXLR_M_FrntAxlTrqMin' */
    (void)Rte_Write_VeAXLR_M_FrntAxlTrqMin_Value(AXLR_ac_B.Gain_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAXLR_M_FrntAxlTrqMin' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* Outport: '<Root>/VeAXLR_M_MinTransTo_Axle' incorporates:
     *  Gain: '<S102>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_MinTransTo_Axle'
     */
    (void)Rte_Write_VeAXLR_M_MinTransTo_Axle_Value(rtb_Vector_b[2]);

    /* Outport: '<Root>/VeAXLR_M_OutTorqMaxArb_xSEM_Axle' incorporates:
     *  Gain: '<S97>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_OutTorqMaxArb_xSEM_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqMaxArb_xSEM_Axle_Value(rtb_Vector_b[5]);

    /* Outport: '<Root>/VeAXLR_M_OutTorqReqModHH_Axle' incorporates:
     *  Gain: '<S105>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_OutTorqReqModHH_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqReqModHH_Axle_Value(rtb_Vector_b[0]);

    /* Outport: '<Root>/VeAXLR_M_OutTorqReqModTactMax_Axle' incorporates:
     *  Gain: '<S94>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_OutTorqReqModTactMax_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqReqModTactMax_Axle_Value(rtb_Vector_b[7]);

    /* Outport: '<Root>/VeAXLR_M_OutTorqReqModTactMin_Axle' incorporates:
     *  Gain: '<S93>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_OutTorqReqModTactMin_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqReqModTactMin_Axle_Value(rtb_Vector_b[6]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeAXLR_M_RrAxlTrqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeAXLR_M_RrAxlTrqMin'
     */
#if Rte_SysCon_Variant_AXLR_Dual_Axis

    /* Outport: '<Root>/VeAXLR_M_RrAxlTrqMax' */
    (void)Rte_Write_VeAXLR_M_RrAxlTrqMax_Value(AXLR_ac_B.Gain_h);

    /* Outport: '<Root>/VeAXLR_M_RrAxlTrqMin' */
    (void)Rte_Write_VeAXLR_M_RrAxlTrqMin_Value(AXLR_ac_B.Gain_g0);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAXLR_M_RrAxlTrqMax' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
     */
    /* Outport: '<Root>/VeAXLR_M_SumMaxTrqDsrd_Axle' incorporates:
     *  Gain: '<S92>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_SumMaxTrqDsrd_Axle'
     */
    (void)Rte_Write_VeAXLR_M_SumMaxTrqDsrd_Axle_Value(rtb_Vector_b[8]);

    /* Outport: '<Root>/VeAXLR_M_ToMaxArb_Axle' incorporates:
     *  Gain: '<S103>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_ToMaxArb_Axle'
     */
    (void)Rte_Write_VeAXLR_M_ToMaxArb_Axle_Value(rtb_Vector_b[3]);

    /* Outport: '<Root>/VeAXLR_M_ToMinArb_Axle' incorporates:
     *  Gain: '<S101>/Gain'
     *  SignalConversion generated from: '<S1>/VeAXLR_M_ToMinArb_Axle'
     */
    (void)Rte_Write_VeAXLR_M_ToMinArb_Axle_Value(rtb_Vector_b[1]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, AXLR_CODE) AXLR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AXLR_PUP'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/AXLR_ProcessOutputTorqInit'
     */

    /* SignalConversion generated from: '<S185>/LeAXLR_M_MinAxleTorqCap' */
    AXLR_ac_B.LeAXLR_M_MinAxleTorqCap = 0.0F;

    /* SignalConversion generated from: '<S185>/LeAXLR_Pct_ActAxleTorqRrAxleTorqSplit' */
    AXLR_ac_B.LeAXLR_Pct_ActAxleTorqRrAxleTor = 0.0F;

    /* SignalConversion generated from: '<S185>/LeAXLR_s_ElecAxleTorqCapSclr' */
    AXLR_ac_B.LeAXLR_s_ElecAxleTorqCapSclr = 0.0F;

    /* SignalConversion generated from: '<S185>/LeAXLR_M_ActAxleTorq' */
    AXLR_ac_B.LeAXLR_M_ActAxleTorq = 0.0F;

    /* SignalConversion generated from: '<S185>/LeAXLR_b_ActAxleTrqFA' */
    AXLR_ac_B.LeAXLR_b_ActAxleTrqFA = false;

    /* SignalConversion generated from: '<S185>/LeAXLR_M_ActAxleOutputTrq' */
    AXLR_ac_B.LeAXLR_M_ActAxleOutputTrq = 0.0F;

    /* SignalConversion generated from: '<S185>/MinAxleTrqCruise' */
    AXLR_ac_B.OutportBufferForMinAxleTrqCruis = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_MinTransTo_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_MinTra = 0.0F;

    /* SignalConversion generated from: '<S185>/MaxAxleTrqCruise' */
    AXLR_ac_B.OutportBufferForMaxAxleTrqCruis = 0.0F;

    /* SignalConversion generated from: '<S185>/ActualAxleTrq' */
    AXLR_ac_B.OutportBufferForActualAxleTrq = 0.0F;

    /* SignalConversion generated from: '<S185>/ActualAxleTrqFA' */
    AXLR_ac_B.OutportBufferForActualAxleTrqFA = false;

    /* SignalConversion generated from: '<S185>/ActualOutputTrq' */
    AXLR_ac_B.OutportBufferForActualOutputTrq = 0.0F;

    /* SignalConversion generated from: '<S185>/ToMisc' */
    AXLR_ac_B.OutportBufferForToMisc = 0.0F;

    /* SignalConversion generated from: '<S185>/ToFromTa' */
    AXLR_ac_B.OutportBufferForToFromTa = 0.0F;

    /* SignalConversion generated from: '<S185>/ToFromTb' */
    AXLR_ac_B.OutportBufferForToFromTb = 0.0F;

    /* SignalConversion generated from: '<S185>/ToFromTc' */
    AXLR_ac_B.OutportBufferForToFromTc = 0.0F;

    /* SignalConversion generated from: '<S185>/DrvrIntndedAxleTrq_Arb' */
    AXLR_ac_B.OutportBufferForDrvrIntndedAxle = 0.0F;

    /* SignalConversion generated from: '<S185>/FrontAxleTrqEst' */
    AXLR_ac_B.OutportBufferForFrontAxleTrqEst = 0.0F;

    /* SignalConversion generated from: '<S185>/ToFromTC1' */
    AXLR_ac_B.OutportBufferForToFromTC1 = 0.0F;

    /* SignalConversion generated from: '<S185>/T0FromTC3' */
    AXLR_ac_B.OutportBufferForT0FromTC3 = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_OutTorqMaxArb_xSEM_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_OutTor = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_OutTorqReqModHH_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_OutT_a = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_OutTorqReqModTactMin_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_OutT_f = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_OutTorqReqModTactMax_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_OutT_k = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLC_M_SumMaxTrqDsrd_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLC_M_SumMax = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLC_M_ArbitratedOutTorqReq' */
    AXLR_ac_B.OutportBufferForVeAXLC_M_Arbitr = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_FrntAxlTrqEst' incorporates:
     *  Constant: '<S186>/Calib'
     */
    AXLR_ac_B.OutportBufferForVeAXLR_M_FrntAx = KeAXLR_M_FrntAxlTrqEstOutInit;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_SplitFrntTrqReq' incorporates:
     *  Constant: '<S188>/Calib'
     */
    AXLR_ac_B.OutportBufferForVeAXLR_M_SplitF = KeAXLR_M_SplitFrntTrqReqOutInit;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_RrAxlTrqEst' incorporates:
     *  Constant: '<S187>/Calib'
     */
    AXLR_ac_B.OutportBufferForVeAXLR_M_RrAxlT = KeAXLR_M_RrAxlTrqEstOutInit;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_SplitRrAxlTrqReq' incorporates:
     *  Constant: '<S189>/Calib'
     */
    AXLR_ac_B.OutportBufferForVeAXLR_M_SplitR = KeAXLR_M_SplitRrAxlTrqReqOutInit;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_ToMinArb_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_ToMinA = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_ToMaxArb_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_ToMaxA = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_FrntAxlTrqMax' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_Frnt_n = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_FrntAxlTrqMin' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_Frnt_p = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_RrAxlTrqMax' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_RrAx_m = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLR_M_RrAxlTrqMin' */
    AXLR_ac_B.OutportBufferForVeAXLR_M_RrA_mp = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLC_M_AxleTrqMinPwrTrn' */
    AXLR_ac_B.OutportBufferForVeAXLC_M_AxleTr = -99999.0F;

    /* SignalConversion generated from: '<S185>/VeAXLC_M_ActAxleOutputTrqNoCL' */
    AXLR_ac_B.OutportBufferForVeAXLC_M_ActAxl = 0.0F;

    /* SignalConversion generated from: '<S185>/VeAXLC_M_To_CL_Fast_Axle' */
    AXLR_ac_B.OutportBufferForVeAXLC_M_To_CL_ = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeAXLR_M_ActualAxleTrq' incorporates:
     *  SignalConversion generated from: '<S2>/ActualAxleTrq'
     */
    (void)Rte_Write_VeAXLR_M_ActualAxleTrq_Value
        (AXLR_ac_B.OutportBufferForActualAxleTrq);

    /* Outport: '<Root>/VeAXLR_b_ActualAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S2>/ActualAxleTrqFA'
     */
    (void)Rte_Write_VeAXLR_b_ActualAxleTrqFA_Value
        (AXLR_ac_B.OutportBufferForActualAxleTrqFA);

    /* Outport: '<Root>/VeAXLR_M_ActualOutputTorque' incorporates:
     *  SignalConversion generated from: '<S2>/ActualOutputTrq'
     */
    (void)Rte_Write_VeAXLR_M_ActualOutputTorque_Value
        (AXLR_ac_B.OutportBufferForActualOutputTrq);

    /* Outport: '<Root>/VeAXLR_M_DrvrIntndedAxleTrq_Arb' incorporates:
     *  SignalConversion generated from: '<S2>/DrvrIntndedAxleTrq_Arb'
     */
    (void)Rte_Write_VeAXLR_M_DrvrIntndedAxleTrq_Arb_Value
        (AXLR_ac_B.OutportBufferForDrvrIntndedAxle);

    /* Outport: '<Root>/VeAXLR_M_ActualAxleTrq_phy' incorporates:
     *  SignalConversion generated from: '<S2>/FrontAxleTrqEst'
     */
    (void)Rte_Write_VeAXLR_M_ActualAxleTrq_phy_Value
        (AXLR_ac_B.OutportBufferForFrontAxleTrqEst);

    /* Outport: '<Root>/VeAXLR_M_ActAxleOutputTrq' incorporates:
     *  SignalConversion generated from: '<S2>/LeAXLR_M_ActAxleOutputTrq'
     */
    (void)Rte_Write_VeAXLR_M_ActAxleOutputTrq_Value
        (AXLR_ac_B.LeAXLR_M_ActAxleOutputTrq);

    /* Outport: '<Root>/VeAXLR_M_ActAxleTrq' incorporates:
     *  SignalConversion generated from: '<S2>/LeAXLR_M_ActAxleTorq'
     */
    (void)Rte_Write_VeAXLR_M_ActAxleTrq_Value(AXLR_ac_B.LeAXLR_M_ActAxleTorq);

    /* Outport: '<Root>/VeAXLR_M_MinAxleTorqCap' incorporates:
     *  SignalConversion generated from: '<S2>/LeAXLR_M_MinAxleTorqCap'
     */
    (void)Rte_Write_VeAXLR_M_MinAxleTorqCap_Value
        (AXLR_ac_B.LeAXLR_M_MinAxleTorqCap);

    /* Outport: '<Root>/VeAXLR_Pct_ActAxleTorqRrAxleTorqSplit' incorporates:
     *  SignalConversion generated from: '<S2>/LeAXLR_Pct_ActAxleTorqRrAxleTorqSplit'
     */
    (void)Rte_Write_VeAXLR_Pct_ActAxleTorqRrAxleTorqSplit_Value
        (AXLR_ac_B.LeAXLR_Pct_ActAxleTorqRrAxleTor);

    /* Outport: '<Root>/VeAXLR_b_ActAxleTrqFA' incorporates:
     *  SignalConversion generated from: '<S2>/LeAXLR_b_ActAxleTrqFA'
     */
    (void)Rte_Write_VeAXLR_b_ActAxleTrqFA_Value(AXLR_ac_B.LeAXLR_b_ActAxleTrqFA);

    /* Outport: '<Root>/VeAXLR_s_ElecAxleTorqCapSclr' incorporates:
     *  SignalConversion generated from: '<S2>/LeAXLR_s_ElecAxleTorqCapSclr'
     */
    (void)Rte_Write_VeAXLR_s_ElecAxleTorqCapSclr_Value
        (AXLR_ac_B.LeAXLR_s_ElecAxleTorqCapSclr);

    /* Outport: '<Root>/VeAXLR_M_MaxAxleTrqCruise' incorporates:
     *  SignalConversion generated from: '<S2>/MaxAxleTrqCruise'
     */
    (void)Rte_Write_VeAXLR_M_MaxAxleTrqCruise_Value
        (AXLR_ac_B.OutportBufferForMaxAxleTrqCruis);

    /* Outport: '<Root>/VeAXLR_M_MinAxleTrqCruise' incorporates:
     *  SignalConversion generated from: '<S2>/MinAxleTrqCruise'
     */
    (void)Rte_Write_VeAXLR_M_MinAxleTrqCruise_Value
        (AXLR_ac_B.OutportBufferForMinAxleTrqCruis);

    /* Outport: '<Root>/VeAXLR_M_Clch3Torq_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/T0FromTC3'
     */
    (void)Rte_Write_VeAXLR_M_Clch3Torq_Axle_Value
        (AXLR_ac_B.OutportBufferForT0FromTC3);

    /* Outport: '<Root>/VeAXLR_M_Clch1Torq_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/ToFromTC1'
     */
    (void)Rte_Write_VeAXLR_M_Clch1Torq_Axle_Value
        (AXLR_ac_B.OutportBufferForToFromTC1);

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmTa' incorporates:
     *  SignalConversion generated from: '<S2>/ToFromTa'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmTa_Value
        (AXLR_ac_B.OutportBufferForToFromTa);

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmTb' incorporates:
     *  SignalConversion generated from: '<S2>/ToFromTb'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmTb_Value
        (AXLR_ac_B.OutportBufferForToFromTb);

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmTc' incorporates:
     *  SignalConversion generated from: '<S2>/ToFromTc'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmTc_Value
        (AXLR_ac_B.OutportBufferForToFromTc);

    /* Outport: '<Root>/VeAXLR_M_CmndTo_FrmToMisc' incorporates:
     *  SignalConversion generated from: '<S2>/ToMisc'
     */
    (void)Rte_Write_VeAXLR_M_CmndTo_FrmToMisc_Value
        (AXLR_ac_B.OutportBufferForToMisc);

    /* Outport: '<Root>/VeAXLR_M_ActAxleOutputTrqNoCL' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLC_M_ActAxleOutputTrqNoCL'
     */
    (void)Rte_Write_VeAXLR_M_ActAxleOutputTrqNoCL_Value
        (AXLR_ac_B.OutportBufferForVeAXLC_M_ActAxl);

    /* Outport: '<Root>/VeAXLR_M_ArbitratedOutTorqReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLC_M_ArbitratedOutTorqReq'
     */
    (void)Rte_Write_VeAXLR_M_ArbitratedOutTorqReq_Value
        (AXLR_ac_B.OutportBufferForVeAXLC_M_Arbitr);

    /* Outport: '<Root>/VeAXLR_M_AxleTrqMinPwrTrn' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLC_M_AxleTrqMinPwrTrn'
     */
    (void)Rte_Write_VeAXLR_M_AxleTrqMinPwrTrn_Value
        (AXLR_ac_B.OutportBufferForVeAXLC_M_AxleTr);

    /* Outport: '<Root>/VeAXLR_M_SumMaxTrqDsrd_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLC_M_SumMaxTrqDsrd_Axle'
     */
    (void)Rte_Write_VeAXLR_M_SumMaxTrqDsrd_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLC_M_SumMax);

    /* Outport: '<Root>/VeAXLR_M_To_CL_Fast_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLC_M_To_CL_Fast_Axle'
     */
    (void)Rte_Write_VeAXLR_M_To_CL_Fast_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLC_M_To_CL_);

    /* Outport: '<Root>/VeAXLR_M_FrntAxlTrqEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_FrntAxlTrqEst'
     */
    (void)Rte_Write_VeAXLR_M_FrntAxlTrqEst_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_FrntAx);

    /* Outport: '<Root>/VeAXLR_M_FrntAxlTrqMax' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_FrntAxlTrqMax'
     */
    (void)Rte_Write_VeAXLR_M_FrntAxlTrqMax_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_Frnt_n);

    /* Outport: '<Root>/VeAXLR_M_FrntAxlTrqMin' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_FrntAxlTrqMin'
     */
    (void)Rte_Write_VeAXLR_M_FrntAxlTrqMin_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_Frnt_p);

    /* Outport: '<Root>/VeAXLR_M_MinTransTo_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_MinTransTo_Axle'
     */
    (void)Rte_Write_VeAXLR_M_MinTransTo_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_MinTra);

    /* Outport: '<Root>/VeAXLR_M_OutTorqMaxArb_xSEM_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_OutTorqMaxArb_xSEM_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqMaxArb_xSEM_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_OutTor);

    /* Outport: '<Root>/VeAXLR_M_OutTorqReqModHH_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_OutTorqReqModHH_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqReqModHH_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_OutT_a);

    /* Outport: '<Root>/VeAXLR_M_OutTorqReqModTactMax_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_OutTorqReqModTactMax_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqReqModTactMax_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_OutT_k);

    /* Outport: '<Root>/VeAXLR_M_OutTorqReqModTactMin_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_OutTorqReqModTactMin_Axle'
     */
    (void)Rte_Write_VeAXLR_M_OutTorqReqModTactMin_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_OutT_f);

    /* Outport: '<Root>/VeAXLR_M_RrAxlTrqEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_RrAxlTrqEst'
     */
    (void)Rte_Write_VeAXLR_M_RrAxlTrqEst_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_RrAxlT);

    /* Outport: '<Root>/VeAXLR_M_RrAxlTrqMax' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_RrAxlTrqMax'
     */
    (void)Rte_Write_VeAXLR_M_RrAxlTrqMax_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_RrAx_m);

    /* Outport: '<Root>/VeAXLR_M_RrAxlTrqMin' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_RrAxlTrqMin'
     */
    (void)Rte_Write_VeAXLR_M_RrAxlTrqMin_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_RrA_mp);

    /* Outport: '<Root>/VeAXLR_M_SplitFrntTrqReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_SplitFrntTrqReq'
     */
    (void)Rte_Write_VeAXLR_M_SplitFrntTrqReq_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_SplitF);

    /* Outport: '<Root>/VeAXLR_M_SplitRrAxlTrqReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_SplitRrAxlTrqReq'
     */
    (void)Rte_Write_VeAXLR_M_SplitRrAxlTrqReq_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_SplitR);

    /* Outport: '<Root>/VeAXLR_M_ToMaxArb_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_ToMaxArb_Axle'
     */
    (void)Rte_Write_VeAXLR_M_ToMaxArb_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_ToMaxA);

    /* Outport: '<Root>/VeAXLR_M_ToMinArb_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeAXLR_M_ToMinArb_Axle'
     */
    (void)Rte_Write_VeAXLR_M_ToMinArb_Axle_Value
        (AXLR_ac_B.OutportBufferForVeAXLR_M_ToMinA);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, AXLR_CODE) AXLR_ac_Init(void)
{
    {
        float32 Calib;
        float32 Calib_f;
        float32 Calib_m;
        float32 Calib_n;

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/AXLR_PUP'
         */
        /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
         *  SubSystem: '<S2>/AXLR_ProcessOutputTorqInit'
         */

        /* Start for Constant: '<S186>/Calib' */
        Calib = KeAXLR_M_FrntAxlTrqEstOutInit;

        /* Start for Constant: '<S188>/Calib' */
        Calib_m = KeAXLR_M_SplitFrntTrqReqOutInit;

        /* Start for Constant: '<S187>/Calib' */
        Calib_n = KeAXLR_M_RrAxlTrqEstOutInit;

        /* Start for Constant: '<S189>/Calib' */
        Calib_f = KeAXLR_M_SplitRrAxlTrqReqOutInit;

        /* SystemInitialize for SignalConversion generated from: '<S185>/VeAXLR_M_FrntAxlTrqEst' */
        AXLR_ac_B.OutportBufferForVeAXLR_M_FrntAx = Calib;

        /* SystemInitialize for SignalConversion generated from: '<S185>/VeAXLR_M_SplitFrntTrqReq' */
        AXLR_ac_B.OutportBufferForVeAXLR_M_SplitF = Calib_m;

        /* SystemInitialize for SignalConversion generated from: '<S185>/VeAXLR_M_RrAxlTrqEst' */
        AXLR_ac_B.OutportBufferForVeAXLR_M_RrAxlT = Calib_n;

        /* SystemInitialize for SignalConversion generated from: '<S185>/VeAXLR_M_SplitRrAxlTrqReq' */
        AXLR_ac_B.OutportBufferForVeAXLR_M_SplitR = Calib_f;

        /* SystemInitialize for SignalConversion generated from: '<S185>/VeAXLC_M_AxleTrqMinPwrTrn' */
        AXLR_ac_B.OutportBufferForVeAXLC_M_AxleTr = -99999.0F;

        /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
         *  SubSystem: '<Root>/AXLR_MedTEB'
         */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/AXLR_ProcessOutputTorques'
         */
        /* SystemInitialize for SignalConversion generated from: '<S5>/VeAXLC_M_MinAxleTorqCap' incorporates:
         *  Constant: '<S84>/Calib'
         */
        AXLR_ac_B.OutportBufferForVeAXLC_M_MinAxl = KeAXLR_M_MinAxleTorqCapOvrd;

        /* SystemInitialize for SignalConversion generated from: '<S5>/VeAXLC_Pct_ActAxleTorqRrAxleTorqSplit' incorporates:
         *  Constant: '<S87>/Calib'
         */
        AXLR_ac_B.OutportBufferForVeAXLC_Pct_ActA =
            KeAXLR_Pct_ActAxleTorqRrAxleTorqSplit;

        /* SystemInitialize for SignalConversion generated from: '<S5>/VeAXLC_s_ElecAxleTorqCapSclr' */
        AXLR_ac_B.OutportBufferForVeAXLC_s_ElecAx = 1.0F;

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
