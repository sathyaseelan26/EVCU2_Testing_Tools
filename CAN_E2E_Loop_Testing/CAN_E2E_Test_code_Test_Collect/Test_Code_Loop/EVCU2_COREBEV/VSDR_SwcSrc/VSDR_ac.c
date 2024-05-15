/*
 * File: VSDR_ac.c
 *
 * Code generated for Simulink model 'VSDR_ac'.
 *
 * Model version                  : 9.51
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:04:48 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VSDR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, VSDR_VAR_INIT) HeVSDR_t_FastTEF_dT = 0.005F;/* Referenced by:
                                                                      * '<S14>/Calib'
                                                                      * '<S236>/Calib'
                                                                      * '<S67>/Calib'
                                                                      * '<S224>/Calib'
                                                                      */
static volatile CONST(TeVSDR_e_NoDotForInertComp, VSDR_VAR_INIT)
    KaVSDR_e_NodotForInertCompSrcPriority[2] =
{
    CeVSDR_e_NoDotFromPrimNo, CeVSDR_e_NoSrcAvail
};                                     /* Referenced by: '<S237>/Calib' */

static volatile CONST(TeVSDR_e_PrimNoSource, VSDR_VAR_INIT)
    KaVSDR_e_PrimNoSrcPriority[4] =
{
    CeVSDR_e_PrimNoFromNturb, CeVSDR_e_PrimNoFromFrontAxl,
    CeVSDR_e_PrimNoFromRearAxl, CeVSDR_e_PrimNoFromRearAxl
};                                     /* Referenced by: '<S52>/Calib' */

static volatile CONST(TeVSDR_e_SourceForStrategicNo, VSDR_VAR_INIT)
    KaVSDR_e_StratNoSrcPriority[5] =
{
    CeVSDR_e_StratNoFromTOSSnsr, CeVSDR_e_NoValidStratNoSrcAvail,
    CeVSDR_e_NoValidStratNoSrcAvail, CeVSDR_e_NoValidStratNoSrcAvail,
    CeVSDR_e_NoValidStratNoSrcAvail
};                                     /* Referenced by: '<S22>/Calib' */

static volatile CONST(TeVSDR_e_WEDWheelSpdSrc, VSDR_VAR_INIT)
    KaVSDR_e_WEDWhlSpdSrcPriority[3] =
{
    CeVSDR_e_WEDWhlSpdFromFrontWhls, CeVSDR_e_WEDWhlSpdFromRearWhls,
    CeVSDR_e_WEDNoValidSpdSrc
};                                     /* Referenced by: '<S112>/Calib' */

static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_Cf_CnvrtMtrBSpdToStratNo =
    1.0F;                              /* Referenced by: '<S32>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_Cf_CnvrtNturbToPrimTSXRNo =
    1.0F;                              /* Referenced by: '<S88>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_Cf_CnvrtPrimWhlSpdToStratNo
    = 1.0F;                            /* Referenced by: '<S35>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT)
    KeVSDR_Cf_CnvrtRearAxlSpdToPrimTSXRNo = 1.0F;/* Referenced by: '<S91>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT)
    KeVSDR_Cf_CnvrtTOSSensorSpdToPrimNo = 1.0F;/* Referenced by: '<S98>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT)
    KeVSDR_Cf_CnvrtTOSSensorSpdToStratNo = 1.0F;/* Referenced by: '<S41>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_Cf_PrimNoToStratNo = 1.0F;/* Referenced by: '<S38>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_Cnt_NturbSignGrad_BlendIn =
    1.0F;                              /* Referenced by: '<S156>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_Cnt_NturbSignGrad_BlendOut =
    -1.0F;                             /* Referenced by: '<S157>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_K_PrimNoGain = 0.2F;/* Referenced by: '<S53>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_K_StratNoGain = 0.2F;/* Referenced by: '<S15>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_V_MinVehSpdThresh = 0.0F;/* Referenced by: '<S225>/Calib' */
static volatile CONST(boolean, VSDR_VAR_INIT) KeVSDR_b_BypassTurbShapng = 0;/* Referenced by: '<S149>/Calib' */
static volatile CONST(boolean, VSDR_VAR_INIT) KeVSDR_b_EnableTcaseFrStratNo = 0;/* Referenced by: '<S23>/Calib' */
static volatile CONST(boolean, VSDR_VAR_INIT) KeVSDR_b_UseAdditionalCase = 0;/* Referenced by: '<S226>/Calib' */
static volatile CONST(boolean, VSDR_VAR_INIT)
    KeVSDR_b_UseFDRForPrimWhlSpdToStratNo = 0;/* Referenced by: '<S36>/Calib' */
static volatile CONST(boolean, VSDR_VAR_INIT) KeVSDR_b_UseFDRForTossToPrimNo = 0;/* Referenced by: '<S99>/Calib' */
static volatile CONST(boolean, VSDR_VAR_INIT) KeVSDR_b_UseFDRForTossToStratNo =
    0;                                 /* Referenced by: '<S42>/Calib' */
static volatile CONST(boolean, VSDR_VAR_INIT) KeVSDR_b_UseSignedTurbineSpd = 0;/* Referenced by:
                                                                      * '<S150>/Calib'
                                                                      * '<S182>/Calib'
                                                                      */
static volatile CONST(boolean, VSDR_VAR_INIT) KeVSDR_b_UseStratNo_Raw = 1;/* Referenced by: '<S45>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_dn_NoDot_LD = -2.0F;/* Referenced by: '<S54>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_dn_NoDot_LU = 2.0F;/* Referenced by: '<S55>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_k_UseFiltThresh = 1.0F;/* Referenced by: '<S151>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_k_mCoeff_NturbFromNo =
    0.078125F;                         /* Referenced by:
                                        * '<S175>/Calib'
                                        * '<S183>/Calib'
                                        */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_k_mCoeff_UseNturb = 1.0F;/* Referenced by:
                                                                      * '<S178>/Calib'
                                                                      * '<S186>/Calib'
                                                                      */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_n_DefaultPrimNo = 0.0F;/* Referenced by: '<S64>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_n_DefaultStratNo = 1.0F;/* Referenced by: '<S30>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_n_MaxNturbThresh = 5.0F;/* Referenced by: '<S227>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_n_WhlSpd_Dflt = 0.0F;/* Referenced by:
                                                                      * '<S118>/Calib'
                                                                      * '<S120>/Calib'
                                                                      */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_t_ClkRst_MaxTime = 3.0F;/* Referenced by: '<S228>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_t_NoDotTimeout = 0.1F;/* Referenced by: '<S68>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_t_Nturb_setToZero_EngOff =
    -1.0F;                             /* Referenced by: '<S152>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_t_Nturb_setToZero_EngOn =
    -1.0F;                             /* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_t_PrimNoDefSampTime = 0.05F;/* Referenced by: '<S69>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_t_PrimNoTimePeriod =
    0.00625F;                          /* Referenced by: '<S70>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KeVSDR_t_StratNoTimePeriod = 1.0F;/* Referenced by: '<S16>/Calib' */
static volatile CONST(float32, VSDR_VAR_INIT) KtVSDR_dn_StratNodotLimit[7] =
{
    -3000.0F, -2000.0F, -1200.0F, 0.0F, -1000.0F, -2000.0F, -3000.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KtVSDR_k_FiltCoeff[64] =
{
    0.0055566649F, 0.0126691991F, 0.0328052416F, 0.0725168437F, 0.186803401F,
    0.374546111F, 0.729635298F, 1.0F, 0.0055566649F, 0.0126691991F,
    0.0328052416F, 0.0725168437F, 0.186803401F, 0.374546111F, 0.729635298F, 1.0F,
    0.0055566649F, 0.0126691991F, 0.0328052416F, 0.0725168437F, 0.186803401F,
    0.374546111F, 0.729635298F, 1.0F, 0.0055566649F, 0.0126691991F,
    0.0328052416F, 0.0725168437F, 0.186803401F, 0.374546111F, 0.729635298F, 1.0F,
    0.0055566649F, 0.0126691991F, 0.0328052416F, 0.0725168437F, 0.186803401F,
    0.374546111F, 0.729635298F, 1.0F, 0.0055566649F, 0.0126691991F,
    0.0328052416F, 0.0725168437F, 0.186803401F, 0.374546111F, 0.729635298F, 1.0F,
    0.0055566649F, 0.0126691991F, 0.0328052416F, 0.0725168437F, 0.186803401F,
    0.374546111F, 0.729635298F, 1.0F, 0.0055566649F, 0.0126691991F,
    0.0328052416F, 0.0725168437F, 0.186803401F, 0.374546111F, 0.729635298F, 1.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KtVSDR_k_FiltCoeff_NTurb0[64] =
{
    0.0001F, 0.0001F, 0.0058F, 0.015F, 0.045F, 0.105F, 0.15F, 0.99F, 0.0001F,
    0.0001F, 0.0058F, 0.015F, 0.045F, 0.105F, 0.15F, 0.99F, 0.0001F, 0.0001F,
    0.0058F, 0.015F, 0.045F, 0.105F, 0.15F, 0.99F, 0.0001F, 0.0001F, 0.0058F,
    0.015F, 0.045F, 0.105F, 0.15F, 0.99F, 0.0001F, 0.0001F, 0.0058F, 0.015F,
    0.045F, 0.105F, 0.15F, 0.99F, 0.0001F, 0.0001F, 0.0058F, 0.015F, 0.045F,
    0.105F, 0.15F, 0.99F, 0.0001F, 0.0001F, 0.0058F, 0.015F, 0.045F, 0.105F,
    0.15F, 0.99F, 0.0001F, 0.0001F, 0.0058F, 0.015F, 0.045F, 0.105F, 0.15F,
    0.99F
} ;                                    /* Referenced by: '<S167>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KtVSDR_n_RefSpd_NoOffset[6] =
{
    0.0F, 50.0F, 50.0F, 100.0F, 100.0F, 200.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KtVSDR_t_NoForInertCompTimePeriod
    [7] =
{
    0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F
} ;                                    /* Referenced by: '<S238>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KxVSDR_dn_StratNodotLimit[7] =
{
    -1800.0F, -1000.0F, -500.0F, 0.0F, 500.0F, 1500.0F, 3000.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KxVSDR_k_FiltCoeff[8] =
{
    1.0F, 1.05F, 1.15F, 1.3F, 1.5F, 1.7F, 1.9F, 2.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KxVSDR_k_FiltCoeff_NTurb0[8] =
{
    1.0F, 1.2F, 1.4F, 1.6F, 1.8F, 2.0F, 3.0F, 4.0F
} ;                                    /* Referenced by: '<S167>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KxVSDR_n_RefSpd_NoOffset[6] =
{
    0.0F, 500.0F, 1000.0F, 2500.0F, 5000.0F, 7000.0F
} ;                                    /* Referenced by: '<S46>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KxVSDR_t_NoForInertCompTimePeriod
    [7] =
{
    0.0F, 1.0F, 3.0F, 5.0F, 10.0F, 18.0F, 20.0F
} ;                                    /* Referenced by: '<S238>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KyVSDR_k_FiltCoeff[8] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 60.0F, 80.0F, 100.0F, 140.0F
} ;                                    /* Referenced by: '<S171>/Vector' */

static volatile CONST(float32, VSDR_VAR_INIT) KyVSDR_k_FiltCoeff_NTurb0[8] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 60.0F, 80.0F, 100.0F, 140.0F
} ;                                    /* Referenced by: '<S167>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_VSDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, VSDR_VAR_INIT) VaVSDR_b_LftWhlSpdFA[2];/* '<S7>/SignalConversion' */
static VAR(boolean, VSDR_VAR_INIT) VaVSDR_b_RgtWhlSpdFA[2];/* '<S7>/SignalConversion1' */
static VAR(float32, VSDR_VAR_INIT) VeVSDC_Cf_GradLmtdNturbSign;/* '<S155>/Sum3' */
static VAR(float32, VSDR_VAR_INIT) VeVSDC_Cf_NturbSign;/* '<S136>/Merge' */
static VAR(boolean, VSDR_VAR_INIT) VeVSDC_b_EnblClk;/* '<S9>/Logical3' */
static VAR(boolean, VSDR_VAR_INIT) VeVSDC_b_Enbl_NTurbZero_Tmr;/* '<S191>/Logical1' */
static VAR(boolean, VSDR_VAR_INIT) VeVSDC_b_NoDotTimeout;/* '<S56>/Comparison1' */
static VAR(boolean, VSDR_VAR_INIT) VeVSDC_b_NoDotTrig;/* '<S66>/AND' */
static VAR(boolean, VSDR_VAR_INIT) VeVSDC_b_NoFAForInertComp;/* '<S10>/Merge2' */
static VAR(float32, VSDR_VAR_INIT) VeVSDC_t_NoDotTimePeriod;/* '<S56>/MinMax1' */
static VAR(float32, VSDR_VAR_INIT) VeVSDC_t_NoDotdT;/* '<S56>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_VSDR
#include "MemMap.h"

CONST(ConstB_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_ConstB =
{
    CeVSDR_e_WEDWhlSpdFromFrontWhls,   /* '<S264>/Const15' */
    CeVSDR_e_WEDWhlSpdFromFrontWhls,   /* '<S264>/Const18' */
    CeVSDR_e_PrimNoSrcNotAvail,        /* '<S264>/Const2' */
    CeVSDR_e_NturbFromCSVR_CAN         /* '<S264>/Const10' */
};

#define STOP_SEC_CONST_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_VSDR
#include "MemMap.h"

CONST(ConstP_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S167>/Vector'
     *   '<S171>/Vector'
     */
    {
        7U, 7U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

VAR(B_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

VAR(DW_VSDR_ac_T, VSDR_VAR_INIT) VSDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VSDR
#include "MemMap.h"

static FUNC(void, VSDR_CODE_LOCAL) VSDR_ac_SpeedFromMtrB(P2VAR
    (TeVSDR_e_PrimNoSource, AUTOMATIC, VSDR_VAR_INIT) rty_Out1);

/*
 * Output and update for action system:
 *    '<S59>/SpeedFromMtrB'
 *    '<S61>/SpeedFromMtrB'
 */
static FUNC(void, VSDR_CODE_LOCAL) VSDR_ac_SpeedFromMtrB(P2VAR
    (TeVSDR_e_PrimNoSource, AUTOMATIC, VSDR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S80>/Out1' incorporates:
     *  Constant: '<S84>/Constant'
     */
    *rty_Out1 = CeVSDR_e_PrimNoFromMtrB;
}

/* Model step function for TID1 */
FUNC(void, VSDR_CODE) VSDR_FastTEF(void) /* Explicit Task: FastTEF */
{
    sint32 exitg1;
    sint32 rtb_TmpSignalConversionAtVeCS_g;
    sint32 rtb_TmpSignalConversionAtVeTR_b;
    float32 VeVSDC_n_PrimNoSgndRaw;
    float32 VeVSDC_n_WEDLeftWheel;
    float32 VeVSDC_n_WEDRightWheel;
    float32 rtb_Switch1_iw;
    float32 rtb_Switch1_k;
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 rtb_TmpSignalConversionAtVeCS_d;
    float32 rtb_TmpSignalConversionAtVeC_nt;
    float32 rtb_TmpSignalConversionAtVeFWDR;
    float32 rtb_TmpSignalConversionAtVeFW_l;
    float32 rtb_TmpSignalConversionAtVeHSER;
    float32 rtb_TmpSignalConversionAtVeTFTR;
    float32 rtb_VeVSDC_n_StratNoRaw;
    float32 rtb_Vector_h_tmp;
    float32 rtb_Vector_l;
    sint16 b_index;
    TeBRKR_e_BrkPdl_Stat tmpRead_2;
    TeCSVR_e_SourceForFrontAxlSpd rtb_TmpSignalConversionAtVeC_bc;
    TeCSVR_e_SourceForRearAxlSpd tmpRead_0;
    TeCSVR_e_SourceForTurbineSpeed tmpRead_7;
    TeCSVR_e_Wheel_Direction rtb_TmpSignalConversionAtVeCS_m;
    TeCSVR_e_Wheel_Direction tmpRead_c;
    TeCSVR_e_Wheel_Direction tmpRead_d;
    TeESSR_e_EngStartStopSt tmpRead_3;
    TeFWDR_e_TrnsfrCaseRange tmpRead_6;
    TeHSER_e_RngEqnSel tmpRead_4;
    TeMSPR_e_MotorSpeedSrc tmpRead_5;
    TeTRGR_e_TransRangeState rtb_Logical1_i_tmp;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTR_i;
    boolean rtb_TmpSignalConversionAtSFun_d[9];
    boolean rtb_TmpSignalConversionAtSFun_b[4];
    boolean rtb_TmpSignalConversionAtSFunct[2];
    boolean rtb_Comparison2_m;
    boolean rtb_Comparison3_d;
    boolean rtb_Logical16;
    boolean rtb_Logical1_a;
    boolean rtb_Logical1_j;
    boolean rtb_Logical2_dl;
    boolean rtb_Logical2_h;
    boolean rtb_Logical2_o;
    boolean rtb_Logical3;
    boolean rtb_Logical3_p;
    boolean rtb_Logical7;
    boolean rtb_TmpSignalConversionAtVeCS_f;
    boolean rtb_TmpSignalConversionAtVeCS_p;
    boolean rtb_TmpSignalConversionAtVeTINR;
    boolean tmpRead;
    boolean tmpRead_1;
    boolean tmpRead_8;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_b;

    /* Inport: '<Root>/VeCSVR_e_RearAxlDir' */
    (void)Rte_Read_VeCSVR_e_RearAxlDir_Value(&tmpRead_d);

    /* Inport: '<Root>/VeCSVR_e_FrontAxlDir' */
    (void)Rte_Read_VeCSVR_e_FrontAxlDir_Value(&tmpRead_c);

    /* Inport: '<Root>/VeFWDR_e_Tcase_Stat' */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value(&tmpRead_6);

    /* Inport: '<Root>/VeMSPR_e_MtrBSpd_Src' */
    (void)Rte_Read_VeMSPR_e_MtrBSpd_Src_Value(&tmpRead_5);

    /* SignalConversion generated from: '<S58>/SFunction' incorporates:
     *  Inport: '<Root>/VeCSVR_b_FrontAxlSpdFA'
     *  Inport: '<Root>/VeCSVR_b_RearAxlSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_RearAxlSpdFA_Value(&rtb_TmpSignalConversionAtSFun_d
        [6]);
    (void)Rte_Read_VeCSVR_b_FrontAxlSpdFA_Value
        (&rtb_TmpSignalConversionAtSFun_d[1]);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeCSVR_b_NTurbArbFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_NTurbArbFA'
     */
    (void)Rte_Read_VeCSVR_b_NTurbArbFA_Value(&rtb_TmpSignalConversionAtVeCS_f);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_NTurbArb' incorporates:
     *  Inport: '<Root>/VeCSVR_n_NTurbArb'
     */
    (void)Rte_Read_VeCSVR_n_NTurbArb_Value(&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&rtb_TmpSignalConversionAtVeTFTR);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S1>/VeTINR_b_PwrFlowStatus' incorporates:
     *  Inport: '<Root>/VeTINR_b_PwrFlowStatus'
     */
    (void)Rte_Read_VeTINR_b_PwrFlowStatus_Value(&rtb_TmpSignalConversionAtVeTINR);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&rtb_TmpSignalConversionAtVeTR_i);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_ReferenceNo' incorporates:
     *  Inport: '<Root>/VeCSVR_n_ReferenceNo'
     */
    (void)Rte_Read_VeCSVR_n_ReferenceNo_Value(&rtb_TmpSignalConversionAtVeCS_d);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndRaw' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndRaw'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndRaw_Value
        (&rtb_TmpSignalConversionAtVeC_nt);

    /* SignalConversion generated from: '<S1>/VeCSVR_e_TransOutSpdDir' incorporates:
     *  Inport: '<Root>/VeCSVR_e_TransOutSpdDir'
     */
    (void)Rte_Read_VeCSVR_e_TransOutSpdDir_Value
        (&rtb_TmpSignalConversionAtVeCS_m);

    /* SignalConversion generated from: '<S1>/VeCSVR_b_TransOutSpdFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_TransOutSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_TransOutSpdFA_Value(&rtb_TmpSignalConversionAtVeCS_p);

    /* SignalConversion generated from: '<S1>/VeFWDR_r_TCaseRatio' incorporates:
     *  Inport: '<Root>/VeFWDR_r_TCaseRatio'
     */
    (void)Rte_Read_VeFWDR_r_TCaseRatio_Value(&rtb_TmpSignalConversionAtVeFWDR);

    /* SignalConversion generated from: '<S1>/VeFWDR_r_Axle_Ratio' incorporates:
     *  Inport: '<Root>/VeFWDR_r_Axle_Ratio'
     */
    (void)Rte_Read_VeFWDR_r_Axle_Ratio_Value(&rtb_TmpSignalConversionAtVeFW_l);

    /* SignalConversion generated from: '<S1>/VeCSVR_e_FrontAxlSpdSrc' incorporates:
     *  Inport: '<Root>/VeCSVR_e_FrontAxlSpdSrc'
     */
    (void)Rte_Read_VeCSVR_e_FrontAxlSpdSrc_Value
        (&rtb_TmpSignalConversionAtVeC_bc);

    /* SignalConversion generated from: '<S1>/VeHSER_r_TgtTCaseRatio' incorporates:
     *  Inport: '<Root>/VeHSER_r_TgtTCaseRatio'
     */
    (void)Rte_Read_VeHSER_r_TgtTCaseRatio_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* SignalConversion generated from: '<S58>/SFunction' incorporates:
     *  Chart: '<S6>/SrcPrioritization'
     *  Constant: '<S6>/ConstantValue3'
     */
    rtb_TmpSignalConversionAtSFun_d[0] = rtb_TmpSignalConversionAtVeCS_f;
    rtb_TmpSignalConversionAtSFun_d[2] = rtb_TmpSignalConversionAtVeCS_p;
    rtb_TmpSignalConversionAtSFun_d[3] = false;
    rtb_TmpSignalConversionAtSFun_d[4] = false;
    rtb_TmpSignalConversionAtSFun_d[5] = false;
    rtb_TmpSignalConversionAtSFun_d[7] = false;
    rtb_TmpSignalConversionAtSFun_d[8] = false;

    /* Chart: '<S6>/SrcPrioritization' */
    /* Gateway: VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/SrcPrioritization */
    /* During: VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/SrcPrioritization */
    /* Entry Internal: VSDR_FastTEF/MngVSDR_CalcSpeeds/CalPrimNo/SrcPrioritization */
    /* Transition: '<S58>:12' */
    /* Transition: '<S58>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 4)
        {
            /* Transition: '<S58>:10' */
            /* Transition: '<S58>:32' */
            rtb_TmpSignalConversionAtVeCS_g = (sint32)
                KaVSDR_e_PrimNoSrcPriority[(b_index)];
            if (rtb_TmpSignalConversionAtVeCS_g != 255)
            {
                /* Transition: '<S58>:15' */
                /* Transition: '<S58>:17' */
                if (rtb_TmpSignalConversionAtSFun_d[rtb_TmpSignalConversionAtVeCS_g])
                {
                    /* Transition: '<S58>:19' */
                    /* Transition: '<S58>:34' */
                    b_index++;

                    /* Transition: '<S58>:37' */
                    /* Transition: '<S58>:40' */
                    /* Transition: '<S58>:41' */
                }
                else
                {
                    /* Transition: '<S58>:23' */
                    b_index = (sint16)KaVSDR_e_PrimNoSrcPriority[(b_index)];

                    /* Transition: '<S58>:45' */
                    /* Transition: '<S58>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S58>:44' */
                b_index = 255;

                /* Transition: '<S58>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S58>:8' */
            b_index = 255;
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCSVR_e_NTurbSrcArb' */
    (void)Rte_Read_VeCSVR_e_NTurbSrcArb_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* Logic: '<S190>/Logical16' incorporates:
     *  Constant: '<S196>/Constant'
     *  Constant: '<S197>/Constant'
     *  RelationalOperator: '<S190>/Comparison13'
     *  RelationalOperator: '<S190>/Comparison14'
     */
    rtb_Logical16 = ((((uint32)rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_Park)
                     || (((uint32)rtb_TmpSignalConversionAtVeTRNR) ==
                         CeTRNR_e_Neutral));

    /* Logic: '<S189>/Logical1' incorporates:
     *  Constant: '<S194>/Constant'
     *  Constant: '<S195>/Constant'
     *  RelationalOperator: '<S189>/Comparison1'
     *  RelationalOperator: '<S189>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_Logical1_j = ((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                       CeTRGR_e_TransRangePark) || (((uint32)
                        rtb_TmpSignalConversionAtVeTRGR) ==
                       CeTRGR_e_TransRangeNeutral));

    /* RelationalOperator: '<S189>/Comparison3' incorporates:
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S189>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_Comparison3_d = (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                         CeTRGR_e_TransRangeReverse);

    /* RelationalOperator: '<S189>/Comparison2' incorporates:
     *  Constant: '<S192>/Constant'
     *  RelationalOperator: '<S189>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_Comparison2_m = (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                         CeTRGR_e_TransRangeDrive);

    /* Logic: '<S189>/Logical3' incorporates:
     *  Logic: '<S189>/Logical2'
     *  Logic: '<S189>/Logical4'
     */
    rtb_Logical3 = ((!rtb_Logical1_j) && (rtb_Comparison3_d || rtb_Comparison2_m));

    /* Switch: '<S191>/Switch' incorporates:
     *  Constant: '<S226>/Calib'
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    if (KeVSDR_b_UseAdditionalCase)
    {
        (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&tmpRead_4);
        (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value(&tmpRead_2);
        (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_Switch1_k);

        /* Logic: '<S191>/Logical7' incorporates:
         *  Constant: '<S222>/Constant'
         *  Constant: '<S223>/Constant'
         *  Constant: '<S225>/Calib'
         *  Constant: '<S227>/Calib'
         *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
         *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
         *  Inport: '<Root>/VeHSER_e_RngEqnSel'
         *  Logic: '<S191>/Logical5'
         *  RelationalOperator: '<S191>/Comparison10'
         *  RelationalOperator: '<S191>/Comparison11'
         *  RelationalOperator: '<S191>/Comparison12'
         *  RelationalOperator: '<S191>/Comparison7'
         */
        rtb_Logical7 = (((((((uint32)tmpRead_4) == CeHSER_e_UseNeutralEqn) &&
                           (((uint32)tmpRead_2) == CeBRKR_e_BrkApplied)) &&
                          (rtb_TmpSignalConversionAtVeCSVR >=
                           KeVSDR_n_MaxNturbThresh)) && (rtb_Switch1_k <=
                          KeVSDR_V_MinVehSpdThresh)) && rtb_Logical3);
    }
    else
    {
        /* Logic: '<S191>/Logical7' incorporates:
         *  Constant: '<S191>/FALSEConstant'
         */
        rtb_Logical7 = false;
    }

    /* End of Switch: '<S191>/Switch' */

    /* Logic: '<S191>/Logical7' incorporates:
     *  Logic: '<S191>/Logical26'
     */
    rtb_Logical7 = ((rtb_Logical16 || rtb_Logical1_j) || rtb_Logical7);

    /* Logic: '<S190>/Logical1' incorporates:
     *  Constant: '<S198>/Constant'
     *  Constant: '<S199>/Constant'
     *  Constant: '<S200>/Constant'
     *  Constant: '<S201>/Constant'
     *  Constant: '<S202>/Constant'
     *  Constant: '<S203>/Constant'
     *  Constant: '<S204>/Constant'
     *  Constant: '<S205>/Constant'
     *  Constant: '<S206>/Constant'
     *  RelationalOperator: '<S190>/Comparison1'
     *  RelationalOperator: '<S190>/Comparison15'
     *  RelationalOperator: '<S190>/Comparison2'
     *  RelationalOperator: '<S190>/Comparison3'
     *  RelationalOperator: '<S190>/Comparison4'
     *  RelationalOperator: '<S190>/Comparison5'
     *  RelationalOperator: '<S190>/Comparison6'
     *  RelationalOperator: '<S190>/Comparison7'
     *  RelationalOperator: '<S190>/Comparison8'
     */
    rtb_Logical1_a = (((((((((((uint32)rtb_TmpSignalConversionAtVeTRNR) ==
        CeTRNR_e_D1) || (((uint32)rtb_TmpSignalConversionAtVeTRNR) ==
                         CeTRNR_e_D2)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D3)) || (((uint32)
        rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D4)) || (((uint32)
                            rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D5)) ||
                         (((uint32)rtb_TmpSignalConversionAtVeTRNR) ==
                          CeTRNR_e_D6)) || (((uint32)
                          rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D7)) ||
                       (((uint32)rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_D8))
                      || (((uint32)rtb_TmpSignalConversionAtVeTRNR) ==
                          CeTRNR_e_D9));

    /* Logic: '<S190>/Logical2' incorporates:
     *  Constant: '<S207>/Constant'
     *  Constant: '<S208>/Constant'
     *  RelationalOperator: '<S190>/Comparison10'
     *  RelationalOperator: '<S190>/Comparison9'
     */
    rtb_Logical2_dl = ((((uint32)rtb_TmpSignalConversionAtVeTRNR) ==
                        CeTRNR_e_Reverse) || (((uint32)
                         rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_Reverse2));

    /* Logic: '<S7>/Logical2' incorporates:
     *  Logic: '<S190>/Logical17'
     */
    rtb_Logical2_o = (rtb_Logical1_a || rtb_Logical2_dl);

    /* Logic: '<S7>/Logical3' incorporates:
     *  Abs: '<S134>/Abs'
     *  Constant: '<S151>/Calib'
     *  Logic: '<S134>/Logical2'
     *  Logic: '<S191>/Logical21'
     *  RelationalOperator: '<S134>/Comparison1'
     *  Sum: '<S134>/Sum'
     *  UnitDelay: '<S134>/UnitDelay'
     */
    rtb_Logical3_p = ((rtb_Logical2_o || rtb_Logical3) && (fabsf
                       (VSDR_ac_DW.UnitDelay_DSTATE -
                        rtb_TmpSignalConversionAtVeCSVR) >=
                       KeVSDR_k_UseFiltThresh));

    /* Logic: '<S9>/Logical3' incorporates:
     *  Logic: '<S9>/Logical1'
     */
    VeVSDC_b_EnblClk = ((!rtb_TmpSignalConversionAtVeTINR) && rtb_Logical3_p);

    /* RelationalOperator: '<S189>/Comparison9' incorporates:
     *  RelationalOperator: '<S189>/Comparison8'
     *  UnitDelay: '<S189>/UnitDelay1'
     */
    rtb_Logical1_i_tmp = VSDR_ac_DW.UnitDelay1_DSTATE_eb;

    /* Outputs for Atomic SubSystem: '<S191>/AccumulatorResetEnabledLimited' */
    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S192>/Constant'
     *  Constant: '<S193>/Constant'
     *  Constant: '<S209>/Constant'
     *  Constant: '<S210>/Constant'
     *  Constant: '<S211>/Constant'
     *  Constant: '<S212>/Constant'
     *  Constant: '<S213>/Constant'
     *  Constant: '<S214>/Constant'
     *  Constant: '<S215>/Constant'
     *  Constant: '<S216>/Constant'
     *  Constant: '<S217>/Constant'
     *  Constant: '<S218>/Constant'
     *  Constant: '<S219>/Constant'
     *  Logic: '<S189>/Logical10'
     *  Logic: '<S189>/Logical11'
     *  Logic: '<S189>/Logical12'
     *  Logic: '<S190>/Logical18'
     *  Logic: '<S190>/Logical20'
     *  Logic: '<S190>/Logical3'
     *  Logic: '<S190>/Logical4'
     *  Logic: '<S190>/Logical5'
     *  Logic: '<S191>/Logical13'
     *  Logic: '<S191>/Logical22'
     *  Logic: '<S191>/Logical23'
     *  Logic: '<S191>/Logical6'
     *  RelationalOperator: '<S189>/Comparison8'
     *  RelationalOperator: '<S189>/Comparison9'
     *  RelationalOperator: '<S190>/Comparison11'
     *  RelationalOperator: '<S190>/Comparison12'
     *  RelationalOperator: '<S190>/Comparison21'
     *  RelationalOperator: '<S190>/Comparison22'
     *  RelationalOperator: '<S190>/Comparison23'
     *  RelationalOperator: '<S190>/Comparison24'
     *  RelationalOperator: '<S190>/Comparison25'
     *  RelationalOperator: '<S190>/Comparison26'
     *  RelationalOperator: '<S190>/Comparison27'
     *  RelationalOperator: '<S190>/Comparison28'
     *  RelationalOperator: '<S190>/Comparison29'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
     *  Switch: '<S220>/Switch2'
     */
    if (((!rtb_Logical2_o) && (!rtb_Logical3)) || (((rtb_Logical1_a &&
            ((((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_Reverse) ||
             (((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_Reverse2))) ||
          (rtb_Logical2_dl && (((((((((((uint32)rtb_TmpSignalConversionAtVeTR_i)
                    == CeTRNR_e_D1) || (((uint32)rtb_TmpSignalConversionAtVeTR_i)
                    == CeTRNR_e_D2)) || (((uint32)
                    rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_D3)) ||
                 (((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_D4)) ||
                (((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_D5)) ||
               (((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_D6)) ||
              (((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_D7)) ||
                                (((uint32)rtb_TmpSignalConversionAtVeTR_i) ==
              CeTRNR_e_D8)) || (((uint32)rtb_TmpSignalConversionAtVeTR_i) ==
                                CeTRNR_e_D9)))) || ((rtb_Comparison2_m &&
            (((uint32)rtb_Logical1_i_tmp) == CeTRGR_e_TransRangeReverse)) ||
            (rtb_Comparison3_d && (((uint32)rtb_Logical1_i_tmp) ==
            CeTRGR_e_TransRangeDrive)))))
    {
        /* Switch: '<S220>/Switch1' incorporates:
         *  Constant: '<S191>/ConstantValue3'
         */
        rtb_Switch1_k = 0.0F;
    }
    else if (VeVSDC_b_EnblClk)
    {
        /* Sum: '<S220>/Summation' incorporates:
         *  Constant: '<S224>/Calib'
         *  Switch: '<S220>/Switch2'
         *  UnitDelay: '<S220>/UnitDelay'
         */
        rtb_Switch1_k = HeVSDR_t_FastTEF_dT + VSDR_ac_DW.UnitDelay_DSTATE_l;

        /* Outputs for Atomic SubSystem: '<S220>/Limiter' */
        /* Switch: '<S231>/Switch1' incorporates:
         *  Constant: '<S228>/Calib'
         *  RelationalOperator: '<S231>/RelationalOperator'
         *  Switch: '<S220>/Switch2'
         */
        if (KeVSDR_t_ClkRst_MaxTime < rtb_Switch1_k)
        {
            /* Switch: '<S231>/Switch1' */
            rtb_Switch1_k = KeVSDR_t_ClkRst_MaxTime;
        }

        /* End of Switch: '<S231>/Switch1' */

        /* Switch: '<S231>/Switch' incorporates:
         *  Constant: '<S191>/ConstantValue3'
         *  RelationalOperator: '<S231>/RelationalOperator1'
         *  Switch: '<S220>/Switch2'
         */
        if (rtb_Switch1_k <= 0.0F)
        {
            /* Switch: '<S220>/Switch1' incorporates:
             *  Switch: '<S220>/Switch2'
             */
            rtb_Switch1_k = 0.0F;
        }

        /* End of Switch: '<S231>/Switch' */
        /* End of Outputs for SubSystem: '<S220>/Limiter' */
    }
    else
    {
        /* Switch: '<S220>/Switch1' incorporates:
         *  Switch: '<S220>/Switch2'
         *  UnitDelay: '<S220>/UnitDelay'
         */
        rtb_Switch1_k = VSDR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* End of Switch: '<S220>/Switch1' */
    /* End of Outputs for SubSystem: '<S191>/AccumulatorResetEnabledLimited' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* Outputs for Atomic SubSystem: '<S191>/AccumulatorResetEnabledLimited' */
    /* Update for UnitDelay: '<S220>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_k;

    /* End of Outputs for SubSystem: '<S191>/AccumulatorResetEnabledLimited' */

    /* Switch: '<S134>/Switch' incorporates:
     *  Constant: '<S139>/Constant'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  RelationalOperator: '<S134>/Comparison4'
     */
    if (((uint32)tmpRead_3) == CeESSR_e_EngRunning)
    {
        /* Lookup_n-D: '<S238>/Vector' incorporates:
         *  Constant: '<S153>/Calib'
         */
        rtb_Vector_l = KeVSDR_t_Nturb_setToZero_EngOn;
    }
    else
    {
        /* Lookup_n-D: '<S238>/Vector' incorporates:
         *  Constant: '<S152>/Calib'
         */
        rtb_Vector_l = KeVSDR_t_Nturb_setToZero_EngOff;
    }

    /* End of Switch: '<S134>/Switch' */

    /* Logic: '<S191>/Logical1' */
    VeVSDC_b_Enbl_NTurbZero_Tmr = (rtb_Logical16 || rtb_Logical1_j);

    /* Outputs for Atomic SubSystem: '<S191>/AccumulatorResetEnabledLimited1' */
    /* Switch: '<S221>/Switch1' incorporates:
     *  Logic: '<S191>/Logical3'
     *  Switch: '<S221>/Switch2'
     */
    if (rtb_Logical2_o || rtb_Logical3)
    {
        /* Switch: '<S221>/Switch1' incorporates:
         *  Constant: '<S191>/ConstantValue4'
         */
        rtb_Switch1_iw = 0.0F;
    }
    else if (VeVSDC_b_Enbl_NTurbZero_Tmr)
    {
        /* Sum: '<S221>/Summation' incorporates:
         *  Constant: '<S224>/Calib'
         *  Switch: '<S221>/Switch2'
         *  UnitDelay: '<S221>/UnitDelay'
         */
        rtb_Switch1_iw = HeVSDR_t_FastTEF_dT + VSDR_ac_DW.UnitDelay_DSTATE_b;

        /* Outputs for Atomic SubSystem: '<S221>/Limiter' */
        /* Switch: '<S232>/Switch1' incorporates:
         *  Constant: '<S228>/Calib'
         *  RelationalOperator: '<S232>/RelationalOperator'
         *  Switch: '<S221>/Switch2'
         */
        if (KeVSDR_t_ClkRst_MaxTime < rtb_Switch1_iw)
        {
            /* Switch: '<S232>/Switch1' */
            rtb_Switch1_iw = KeVSDR_t_ClkRst_MaxTime;
        }

        /* End of Switch: '<S232>/Switch1' */

        /* Switch: '<S232>/Switch' incorporates:
         *  Constant: '<S191>/ConstantValue4'
         *  RelationalOperator: '<S232>/RelationalOperator1'
         *  Switch: '<S221>/Switch2'
         */
        if (rtb_Switch1_iw <= 0.0F)
        {
            /* Switch: '<S221>/Switch1' incorporates:
             *  Switch: '<S221>/Switch2'
             */
            rtb_Switch1_iw = 0.0F;
        }

        /* End of Switch: '<S232>/Switch' */
        /* End of Outputs for SubSystem: '<S221>/Limiter' */
    }
    else
    {
        /* Switch: '<S221>/Switch1' incorporates:
         *  Switch: '<S221>/Switch2'
         *  UnitDelay: '<S221>/UnitDelay'
         */
        rtb_Switch1_iw = VSDR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S221>/Switch1' */

    /* Update for UnitDelay: '<S221>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch1_iw;

    /* End of Outputs for SubSystem: '<S191>/AccumulatorResetEnabledLimited1' */

    /* If: '<S134>/If' incorporates:
     *  Constant: '<S140>/Constant'
     *  Constant: '<S149>/Calib'
     *  Inport: '<Root>/VeCSVR_e_NTurbSrcArb'
     *  Logic: '<S134>/Logical4'
     *  RelationalOperator: '<S134>/Comparison2'
     */
    if ((((uint32)tmpRead_7) == CeCSVR_e_NturbArbitrated) ||
            rtb_TmpSignalConversionAtVeCS_f)
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S143>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Constant: '<S175>/Calib'
         *  Gain: '<S176>/Gain'
         */
        rtb_Switch1_k = KeVSDR_k_mCoeff_NturbFromNo;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S252>/DataTypeConversion' incorporates:
         *  Constant: '<S174>/Constant'
         *  Merge: '<S134>/Merge2'
         *  Outport: '<Root>/VeVSDR_e_NTurbSrc'
         *  SignalConversion generated from: '<S143>/NturbSrc'
         *  SignalConversion generated from: '<S1>/VeVSDR_e_NTurbSrc'
         */
        (void)Rte_Write_VeVSDR_e_NTurbSrc_Value(CeVSDR_e_NturbFromCSVR_Arb);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem2' */
    }
    else if (KeVSDR_b_BypassTurbShapng)
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S144>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Constant: '<S178>/Calib'
         *  Gain: '<S179>/Gain'
         */
        rtb_Switch1_k = KeVSDR_k_mCoeff_UseNturb;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S252>/DataTypeConversion' incorporates:
         *  Constant: '<S177>/Constant'
         *  Merge: '<S134>/Merge2'
         *  Outport: '<Root>/VeVSDR_e_NTurbSrc'
         *  SignalConversion generated from: '<S144>/NturbSrc'
         *  SignalConversion generated from: '<S1>/VeVSDR_e_NTurbSrc'
         */
        (void)Rte_Write_VeVSDR_e_NTurbSrc_Value(CeVSDR_e_NturbFromCSVR_CAN);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem3' */
    }
    else if (rtb_Logical7)
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S141>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Gain: '<S169>/Gain'
         *  Lookup_n-D: '<S167>/Vector'
         *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
         *  Sum: '<S134>/Sum2'
         */
        rtb_Switch1_k = look2_iflf_binlcapw(rtb_Switch1_iw - rtb_Vector_l,
            rtb_TmpSignalConversionAtVeTFTR, ((const float32 *)
            &(KxVSDR_k_FiltCoeff_NTurb0[0])), ((const float32 *)
            &(KyVSDR_k_FiltCoeff_NTurb0[0])), ((const float32 *)
            &(KtVSDR_k_FiltCoeff_NTurb0[0])), VSDR_ac_ConstP.pooled7, 8U);

        /* Merge: '<S134>/Merge1' incorporates:
         *  Constant: '<S141>/ConstantValue1'
         *  Gain: '<S168>/Gain'
         */
        rtb_TmpSignalConversionAtVeCSVR = 0.0F;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S252>/DataTypeConversion' incorporates:
         *  Constant: '<S166>/Constant'
         *  Merge: '<S134>/Merge2'
         *  Outport: '<Root>/VeVSDR_e_NTurbSrc'
         *  SignalConversion generated from: '<S141>/NturbSrc'
         *  SignalConversion generated from: '<S1>/VeVSDR_e_NTurbSrc'
         */
        (void)Rte_Write_VeVSDR_e_NTurbSrc_Value(CeVSDR_e_NturbForcedToZero);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem' */
    }
    else if (rtb_TmpSignalConversionAtVeTINR)
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem4' incorporates:
         *  ActionPort: '<S145>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Constant: '<S183>/Calib'
         *  Gain: '<S184>/Gain'
         */
        rtb_Switch1_k = KeVSDR_k_mCoeff_NturbFromNo;

        /* Switch: '<S145>/Switch' incorporates:
         *  Constant: '<S182>/Calib'
         */
        if (KeVSDR_b_UseSignedTurbineSpd)
        {
            /* Merge: '<S134>/Merge1' incorporates:
             *  Abs: '<S145>/Abs'
             *  Constant: '<S181>/Calib'
             *  DataTypeConversion: '<S145>/DataTypeConversion'
             *  Product: '<S145>/Product'
             *  Selector: '<S145>/Selector'
             *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
             */
            rtb_TmpSignalConversionAtVeCSVR = fabsf
                (rtb_TmpSignalConversionAtVeC_nt * ((float32)
                  (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios())
                  [rtb_TmpSignalConversionAtVeTR_i]));
        }
        else
        {
            /* Merge: '<S134>/Merge1' incorporates:
             *  Constant: '<S181>/Calib'
             *  Product: '<S145>/Product'
             *  RelationalOperator: '<S190>/Comparison12'
             *  Selector: '<S145>/Selector'
             *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
             */
            rtb_TmpSignalConversionAtVeCSVR = rtb_TmpSignalConversionAtVeC_nt *
                ((float32)(Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios
                           ())[rtb_TmpSignalConversionAtVeTR_i]);
        }

        /* End of Switch: '<S145>/Switch' */

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S252>/DataTypeConversion' incorporates:
         *  Constant: '<S180>/Constant'
         *  Merge: '<S134>/Merge2'
         *  Outport: '<Root>/VeVSDR_e_NTurbSrc'
         *  SignalConversion generated from: '<S145>/NturbSrc'
         *  SignalConversion generated from: '<S1>/VeVSDR_e_NTurbSrc'
         */
        (void)Rte_Write_VeVSDR_e_NTurbSrc_Value(CeVSDR_e_NturbFromTransNo);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem4' */
    }
    else if (rtb_Logical3_p)
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S142>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Gain: '<S173>/Gain'
         *  Lookup_n-D: '<S171>/Vector'
         *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
         *  Sum: '<S134>/Sum1'
         */
        rtb_Switch1_k = look2_iflf_binlcapw(rtb_Switch1_k - rtb_Vector_l,
            rtb_TmpSignalConversionAtVeTFTR, ((const float32 *)
            &(KxVSDR_k_FiltCoeff[0])), ((const float32 *)&(KyVSDR_k_FiltCoeff[0])),
            ((const float32 *)&(KtVSDR_k_FiltCoeff[0])), VSDR_ac_ConstP.pooled7,
            8U);

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S252>/DataTypeConversion' incorporates:
         *  Constant: '<S170>/Constant'
         *  Merge: '<S134>/Merge2'
         *  Outport: '<Root>/VeVSDR_e_NTurbSrc'
         *  SignalConversion generated from: '<S142>/NturbSrc'
         *  SignalConversion generated from: '<S1>/VeVSDR_e_NTurbSrc'
         */
        (void)Rte_Write_VeVSDR_e_NTurbSrc_Value(CeVSDR_e_NturbFiltBsdOnOilTemp);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem5' incorporates:
         *  ActionPort: '<S146>/ActionPort'
         */
        /* Merge: '<S134>/Merge' incorporates:
         *  Constant: '<S186>/Calib'
         *  Gain: '<S187>/Gain'
         */
        rtb_Switch1_k = KeVSDR_k_mCoeff_UseNturb;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S252>/DataTypeConversion' incorporates:
         *  Constant: '<S185>/Constant'
         *  Merge: '<S134>/Merge2'
         *  Outport: '<Root>/VeVSDR_e_NTurbSrc'
         *  SignalConversion generated from: '<S146>/NturbSrc'
         *  SignalConversion generated from: '<S1>/VeVSDR_e_NTurbSrc'
         */
        (void)Rte_Write_VeVSDR_e_NTurbSrc_Value(CeVSDR_e_NturbFromCSVR_CAN);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem5' */
    }

    /* End of If: '<S134>/If' */

    /* If: '<S134>/If1' incorporates:
     *  Constant: '<S150>/Calib'
     *  Logic: '<S134>/LogicalOperator'
     */
    if (rtb_Logical7 && (KeVSDR_b_UseSignedTurbineSpd))
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem6' incorporates:
         *  ActionPort: '<S147>/ActionPort'
         */
        /* Merge: '<S134>/Merge3' incorporates:
         *  Inport: '<S147>/IV'
         *  UnitDelay: '<S134>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeTFTR = VSDR_ac_DW.UnitDelay1_DSTATE;

        /* Merge: '<S134>/Merge4' incorporates:
         *  Constant: '<S147>/TRUEConstant'
         *  SignalConversion generated from: '<S147>/Reset'
         */
        rtb_TmpSignalConversionAtVeCS_f = true;

        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem6' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S134>/IfActionSubsystem7' incorporates:
         *  ActionPort: '<S148>/ActionPort'
         */
        /* Merge: '<S134>/Merge3' incorporates:
         *  Constant: '<S148>/ConstantValue3'
         *  SignalConversion generated from: '<S148>/InitValue'
         */
        rtb_TmpSignalConversionAtVeTFTR = 1.0F;

        /* Merge: '<S134>/Merge4' incorporates:
         *  Constant: '<S148>/FALSEConstant'
         *  SignalConversion generated from: '<S148>/Reset'
         */
        rtb_TmpSignalConversionAtVeCS_f = false;

        /* End of Outputs for SubSystem: '<S134>/IfActionSubsystem7' */
    }

    /* End of If: '<S134>/If1' */

    /* Outputs for Atomic SubSystem: '<S134>/EdgeRising' */
    /* Logic: '<S138>/OR1' incorporates:
     *  UnitDelay: '<S138>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeTINR = !VSDR_ac_DW.UnitDelay_DSTATE_b4;

    /* Update for UnitDelay: '<S138>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_b4 = rtb_TmpSignalConversionAtVeCS_f;

    /* Outputs for Atomic SubSystem: '<S134>/DigitalLowpassResetEnabled' */
    /* Switch: '<S137>/Switch1' incorporates:
     *  Logic: '<S138>/AND'
     */
    if ((!rtb_TmpSignalConversionAtVeCS_f) || (!rtb_TmpSignalConversionAtVeTINR))
    {
        /* Switch: '<S137>/Switch1' incorporates:
         *  Product: '<S137>/Multiplication'
         *  Sum: '<S137>/Subtraction'
         *  Sum: '<S137>/Summation'
         *  UnitDelay: '<S137>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTFTR = ((rtb_TmpSignalConversionAtVeCSVR -
            VSDR_ac_DW.UnitDelay_DSTATE_lb) * rtb_Switch1_k) +
            VSDR_ac_DW.UnitDelay_DSTATE_lb;
    }

    /* End of Switch: '<S137>/Switch1' */
    /* End of Outputs for SubSystem: '<S134>/EdgeRising' */

    /* Update for UnitDelay: '<S137>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_lb = rtb_TmpSignalConversionAtVeTFTR;

    /* End of Outputs for SubSystem: '<S134>/DigitalLowpassResetEnabled' */

    /* If: '<S136>/If1' incorporates:
     *  Constant: '<S154>/Constant'
     *  Constant: '<S163>/Constant'
     *  RelationalOperator: '<S136>/Comparison3'
     *  RelationalOperator: '<S158>/Comparison4'
     *  Switch: '<S164>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeCS_m) ==
            CeCSVR_e_WheelDirectionUnknown)
    {
        /* Outputs for IfAction SubSystem: '<S136>/UnkownTosDirection' incorporates:
         *  ActionPort: '<S159>/ActionPort'
         */
        /* Merge: '<S136>/Merge' incorporates:
         *  Constant: '<S159>/ConstantValue1'
         *  SignalConversion generated from: '<S159>/NturbSign'
         */
        VeVSDC_Cf_NturbSign = 1.0F;

        /* End of Outputs for SubSystem: '<S136>/UnkownTosDirection' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S136>/KnownTosDirection' incorporates:
         *  ActionPort: '<S158>/ActionPort'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeCS_m) ==
                CeCSVR_e_WheelDirectionReverse)
        {
            /* Switch: '<S164>/Switch1' incorporates:
             *  Constant: '<S158>/ConstantValue'
             */
            rtb_TmpSignalConversionAtVeCS_g = -1;
        }
        else
        {
            /* Switch: '<S164>/Switch1' incorporates:
             *  Constant: '<S158>/ConstantValue1'
             */
            rtb_TmpSignalConversionAtVeCS_g = 1;
        }

        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S158>/ConstantValue2'
         *  Constant: '<S158>/ConstantValue3'
         *  Constant: '<S161>/Constant'
         *  Constant: '<S162>/Constant'
         *  Logic: '<S158>/LogicalOperator'
         *  RelationalOperator: '<S158>/Comparison1'
         *  RelationalOperator: '<S158>/Comparison2'
         *  RelationalOperator: '<S190>/Comparison12'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_Reverse) ||
                (((uint32)rtb_TmpSignalConversionAtVeTR_i) == CeTRNR_e_Reverse2))
        {
            rtb_TmpSignalConversionAtVeTR_b = -1;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTR_b = 1;
        }

        /* End of Switch: '<S165>/Switch1' */

        /* Merge: '<S136>/Merge' incorporates:
         *  Product: '<S158>/Product1'
         */
        VeVSDC_Cf_NturbSign = (float32)((sint32)(rtb_TmpSignalConversionAtVeCS_g
            * rtb_TmpSignalConversionAtVeTR_b));

        /* End of Outputs for SubSystem: '<S136>/KnownTosDirection' */
    }

    /* End of If: '<S136>/If1' */

    /* Outputs for Atomic SubSystem: '<S136>/GradientLimiter' */
    /* Product: '<S234>/Multiplication3' incorporates:
     *  UnitDelay: '<S155>/UnitDelay'
     */
    rtb_Switch1_iw = VSDR_ac_DW.UnitDelay_DSTATE_g;

    /* Sum: '<S155>/Sum2' */
    rtb_TmpSignalConversionAtVeCSVR = VeVSDC_Cf_NturbSign - rtb_Switch1_iw;

    /* Outputs for Atomic SubSystem: '<S155>/Limiter' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  Constant: '<S156>/Calib'
     *  RelationalOperator: '<S160>/RelationalOperator'
     */
    if (KeVSDR_Cnt_NturbSignGrad_BlendIn < rtb_TmpSignalConversionAtVeCSVR)
    {
        /* Lookup_n-D: '<S238>/Vector' */
        rtb_Vector_l = KeVSDR_Cnt_NturbSignGrad_BlendIn;
    }
    else
    {
        /* Lookup_n-D: '<S238>/Vector' */
        rtb_Vector_l = rtb_TmpSignalConversionAtVeCSVR;
    }

    /* End of Switch: '<S160>/Switch1' */

    /* Switch: '<S160>/Switch' incorporates:
     *  Constant: '<S157>/Calib'
     *  RelationalOperator: '<S160>/RelationalOperator1'
     */
    if (rtb_Vector_l <= KeVSDR_Cnt_NturbSignGrad_BlendOut)
    {
        rtb_Vector_l = KeVSDR_Cnt_NturbSignGrad_BlendOut;
    }

    /* End of Switch: '<S160>/Switch' */
    /* End of Outputs for SubSystem: '<S155>/Limiter' */

    /* Sum: '<S155>/Sum3' */
    VeVSDC_Cf_GradLmtdNturbSign = rtb_Vector_l + rtb_Switch1_iw;

    /* Update for UnitDelay: '<S155>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_g = VeVSDC_Cf_GradLmtdNturbSign;

    /* End of Outputs for SubSystem: '<S136>/GradientLimiter' */

    /* Switch: '<S134>/Switch6' incorporates:
     *  Constant: '<S150>/Calib'
     */
    if (KeVSDR_b_UseSignedTurbineSpd)
    {
        /* Switch: '<S134>/Switch6' incorporates:
         *  Product: '<S136>/Product'
         */
        rtb_TmpSignalConversionAtVeCSVR = rtb_TmpSignalConversionAtVeTFTR *
            VeVSDC_Cf_GradLmtdNturbSign;
    }
    else
    {
        /* Switch: '<S134>/Switch6' */
        rtb_TmpSignalConversionAtVeCSVR = rtb_TmpSignalConversionAtVeTFTR;
    }

    /* End of Switch: '<S134>/Switch6' */

    /* SwitchCase: '<S6>/Switch_Case1' incorporates:
     *  Inport: '<Root>/VeCSVR_e_RearAxlSpdSrc'
     *  Inport: '<Root>/VeCSVR_n_FrontAxlSpdSgndRaw'
     *  Inport: '<Root>/VeCSVR_n_RearAxlSpdSgndRaw'
     */
    switch (b_index)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S6>/UsingNturb' incorporates:
         *  ActionPort: '<S60>/ActionPort'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S88>/Calib'
         *  Product: '<S60>/Product'
         */
        VeVSDC_n_PrimNoSgndRaw = rtb_TmpSignalConversionAtVeCSVR *
            KeVSDR_Cf_CnvrtNturbToPrimTSXRNo;

        /* Merge: '<S6>/Merge1' incorporates:
         *  Constant: '<S87>/Constant'
         *  SignalConversion generated from: '<S60>/PrimNoSrc'
         */
        VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoFromNturb;

        /* Merge: '<S6>/Merge2' incorporates:
         *  Constant: '<S60>/FALSEConstant'
         *  SignalConversion generated from: '<S60>/PrimNoFA'
         */
        rtb_TmpSignalConversionAtVeCS_f = false;

        /* End of Outputs for SubSystem: '<S6>/UsingNturb' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S6>/UsingFrntAxlSpd' incorporates:
         *  ActionPort: '<S59>/ActionPort'
         */
        /* If: '<S59>/If' incorporates:
         *  DataTypeConversion: '<S59>/DataTypeConversion'
         */
        if (((sint32)rtb_TmpSignalConversionAtVeC_bc) == 0)
        {
            /* Outputs for IfAction SubSystem: '<S59>/SpeedFromTOSS' incorporates:
             *  ActionPort: '<S82>/ActionPort'
             */
            /* Merge: '<S6>/Merge1' incorporates:
             *  Constant: '<S86>/Constant'
             *  SignalConversion generated from: '<S82>/Out1'
             */
            VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoFromTOSS;

            /* End of Outputs for SubSystem: '<S59>/SpeedFromTOSS' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeC_bc) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S59>/SpeedFromPrimWhls' incorporates:
             *  ActionPort: '<S81>/ActionPort'
             */
            /* Merge: '<S6>/Merge1' incorporates:
             *  Constant: '<S85>/Constant'
             *  SignalConversion generated from: '<S81>/Out1'
             */
            VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoFromPrimWhls;

            /* End of Outputs for SubSystem: '<S59>/SpeedFromPrimWhls' */
        }
        else if (((sint32)rtb_TmpSignalConversionAtVeC_bc) == 2)
        {
            /* Outputs for IfAction SubSystem: '<S59>/SpeedFromMtrB' incorporates:
             *  ActionPort: '<S80>/ActionPort'
             */
            VSDR_ac_SpeedFromMtrB(&VSDR_ac_B.VeVSDC_e_PrimNoSrc);

            /* End of Outputs for SubSystem: '<S59>/SpeedFromMtrB' */
        }
        else
        {
            if (((sint32)rtb_TmpSignalConversionAtVeC_bc) == 3)
            {
                /* Outputs for IfAction SubSystem: '<S59>/SpeedFromMtrA' incorporates:
                 *  ActionPort: '<S79>/ActionPort'
                 */
                /* Merge: '<S6>/Merge1' incorporates:
                 *  Constant: '<S83>/Constant'
                 *  SignalConversion generated from: '<S79>/Out1'
                 */
                VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoFromMtrA;

                /* End of Outputs for SubSystem: '<S59>/SpeedFromMtrA' */
            }
        }

        /* End of If: '<S59>/If' */
        /* End of Outputs for SubSystem: '<S6>/UsingFrntAxlSpd' */
        (void)Rte_Read_VeCSVR_n_FrontAxlSpdSgndRaw_Value(&VeVSDC_n_PrimNoSgndRaw);

        /* Outputs for IfAction SubSystem: '<S6>/UsingFrntAxlSpd' incorporates:
         *  ActionPort: '<S59>/ActionPort'
         */
        /* Switch: '<S59>/Switch6' incorporates:
         *  Constant: '<S59>/ConstantValue'
         *  Constant: '<S78>/Constant'
         *  Inport: '<Root>/VeCSVR_n_FrontAxlSpdSgndRaw'
         *  RelationalOperator: '<S59>/Comparison4'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeC_bc) ==
                CeCSVR_e_FrontAxlSpdFromPrimWhls)
        {
            rtb_Switch1_k = rtb_TmpSignalConversionAtVeHSER;
        }
        else
        {
            rtb_Switch1_k = 1.0F;
        }

        /* End of Switch: '<S59>/Switch6' */

        /* Merge: '<S6>/Merge' incorporates:
         *  Product: '<S59>/Product'
         */
        VeVSDC_n_PrimNoSgndRaw *= rtb_Switch1_k;

        /* Merge: '<S6>/Merge2' incorporates:
         *  Constant: '<S59>/FALSEConstant'
         *  SignalConversion generated from: '<S59>/PrimNoFA'
         */
        rtb_TmpSignalConversionAtVeCS_f = false;

        /* End of Outputs for SubSystem: '<S6>/UsingFrntAxlSpd' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S6>/UsingTOSSnsr' incorporates:
         *  ActionPort: '<S62>/ActionPort'
         */
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S99>/Calib'
         */
        if (KeVSDR_b_UseFDRForTossToPrimNo)
        {
            /* Switch: '<S97>/Switch1' incorporates:
             *  Product: '<S62>/Product1'
             */
            VeVSDC_n_PrimNoSgndRaw = rtb_TmpSignalConversionAtVeFWDR *
                rtb_TmpSignalConversionAtVeFW_l;
        }
        else
        {
            /* Switch: '<S97>/Switch1' incorporates:
             *  Constant: '<S62>/ConstantValue'
             */
            VeVSDC_n_PrimNoSgndRaw = 1.0F;
        }

        /* End of Switch: '<S97>/Switch1' */

        /* Product: '<S62>/Product' incorporates:
         *  Constant: '<S98>/Calib'
         */
        rtb_Switch1_k = rtb_TmpSignalConversionAtVeC_nt *
            KeVSDR_Cf_CnvrtTOSSensorSpdToPrimNo;

        /* Outputs for Atomic SubSystem: '<S62>/ProtectedDivision' */
        /* Switch: '<S100>/Switch1' incorporates:
         *  Constant: '<S100>/ConstantValue'
         *  Constant: '<S100>/ConstantValue1'
         *  Constant: '<S100>/ConstantValue2'
         *  Constant: '<S100>/ConstantValue3'
         *  Logic: '<S100>/AND'
         *  RelationalOperator: '<S100>/GreaterThanorEqual'
         *  RelationalOperator: '<S100>/GreaterThanorEqual1'
         *  RelationalOperator: '<S100>/NotEqual'
         *  RelationalOperator: '<S100>/NotEqual1'
         *  Switch: '<S100>/Switch2'
         *  Switch: '<S100>/Switch3'
         */
        if ((rtb_Switch1_k != 0.0F) && (VeVSDC_n_PrimNoSgndRaw != 0.0F))
        {
            /* Merge: '<S6>/Merge' incorporates:
             *  Product: '<S100>/Division'
             */
            VeVSDC_n_PrimNoSgndRaw = rtb_Switch1_k / VeVSDC_n_PrimNoSgndRaw;
        }
        else if (rtb_Switch1_k > 0.0F)
        {
            /* Switch: '<S100>/Switch2' incorporates:
             *  Constant: '<S100>/MAXFLOAT'
             *  Merge: '<S6>/Merge'
             */
            VeVSDC_n_PrimNoSgndRaw = 3.402823466E+38F;
        }
        else if (rtb_Switch1_k < 0.0F)
        {
            /* Switch: '<S100>/Switch3' incorporates:
             *  Constant: '<S100>/MINFLOAT'
             *  Merge: '<S6>/Merge'
             *  Switch: '<S100>/Switch2'
             */
            VeVSDC_n_PrimNoSgndRaw = -3.402823466E+38F;
        }
        else
        {
            /* Merge: '<S6>/Merge' incorporates:
             *  Constant: '<S100>/ConstantValue4'
             *  Switch: '<S100>/Switch2'
             *  Switch: '<S100>/Switch3'
             */
            VeVSDC_n_PrimNoSgndRaw = 0.0F;
        }

        /* End of Switch: '<S100>/Switch1' */
        /* End of Outputs for SubSystem: '<S62>/ProtectedDivision' */

        /* Merge: '<S6>/Merge1' incorporates:
         *  Constant: '<S96>/Constant'
         *  SignalConversion generated from: '<S62>/PrimNoSrc'
         */
        VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoFromTOSS;

        /* Merge: '<S6>/Merge2' incorporates:
         *  Constant: '<S62>/FALSEConstant'
         *  SignalConversion generated from: '<S62>/PrimNoFA'
         */
        rtb_TmpSignalConversionAtVeCS_f = false;

        /* End of Outputs for SubSystem: '<S6>/UsingTOSSnsr' */
        break;

      case 6:
        (void)Rte_Read_VeCSVR_e_RearAxlSpdSrc_Value(&tmpRead_0);
        (void)Rte_Read_VeCSVR_n_RearAxlSpdSgndRaw_Value(&VeVSDC_n_PrimNoSgndRaw);

        /* Outputs for IfAction SubSystem: '<S6>/UsingRearAxlSpd' incorporates:
         *  ActionPort: '<S61>/ActionPort'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S91>/Calib'
         *  Inport: '<Root>/VeCSVR_e_RearAxlSpdSrc'
         *  Inport: '<Root>/VeCSVR_n_RearAxlSpdSgndRaw'
         *  Product: '<S61>/Product'
         */
        VeVSDC_n_PrimNoSgndRaw *= KeVSDR_Cf_CnvrtRearAxlSpdToPrimTSXRNo;

        /* If: '<S61>/If' incorporates:
         *  DataTypeConversion: '<S61>/DataTypeConversion'
         *  Inport: '<Root>/VeCSVR_e_RearAxlSpdSrc'
         */
        if (((sint32)tmpRead_0) == 1)
        {
            /* Outputs for IfAction SubSystem: '<S61>/SpeedFromSecWhls' incorporates:
             *  ActionPort: '<S93>/ActionPort'
             */
            /* Merge: '<S6>/Merge1' incorporates:
             *  Constant: '<S95>/Constant'
             *  SignalConversion generated from: '<S93>/Out1'
             */
            VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoFromSecWhls;

            /* End of Outputs for SubSystem: '<S61>/SpeedFromSecWhls' */
        }
        else
        {
            if (((sint32)tmpRead_0) == 2)
            {
                /* Outputs for IfAction SubSystem: '<S61>/SpeedFromMtrB' incorporates:
                 *  ActionPort: '<S92>/ActionPort'
                 */
                VSDR_ac_SpeedFromMtrB(&VSDR_ac_B.VeVSDC_e_PrimNoSrc);

                /* End of Outputs for SubSystem: '<S61>/SpeedFromMtrB' */
            }
        }

        /* End of If: '<S61>/If' */

        /* Merge: '<S6>/Merge2' incorporates:
         *  Constant: '<S61>/FALSEConstant'
         *  SignalConversion generated from: '<S61>/PrimNoFA'
         */
        rtb_TmpSignalConversionAtVeCS_f = false;

        /* End of Outputs for SubSystem: '<S6>/UsingRearAxlSpd' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S6>/Default' incorporates:
         *  ActionPort: '<S48>/ActionPort'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S64>/Calib'
         *  SignalConversion generated from: '<S48>/PrimNo'
         */
        VeVSDC_n_PrimNoSgndRaw = KeVSDR_n_DefaultPrimNo;

        /* Merge: '<S6>/Merge1' incorporates:
         *  Constant: '<S63>/Constant'
         *  SignalConversion generated from: '<S48>/PrimNoSrc'
         */
        VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoSrcNotAvail;

        /* Merge: '<S6>/Merge2' incorporates:
         *  Constant: '<S48>/TRUEConstant'
         *  SignalConversion generated from: '<S48>/PrimNoFA'
         */
        rtb_TmpSignalConversionAtVeCS_f = true;

        /* End of Outputs for SubSystem: '<S6>/Default' */
        break;
    }

    /* End of SwitchCase: '<S6>/Switch_Case1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&rtb_Logical2_h);

    /* Inport: '<Root>/VeCSVR_b_PrimWhlSpdSignedFA' */
    (void)Rte_Read_VeCSVR_b_PrimWhlSpdSignedFA_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* SignalConversion generated from: '<S24>/SFunction' incorporates:
     *  Chart: '<S11>/SrcPrioritization'
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Constant: '<S23>/Calib'
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     *  Inport: '<Root>/VeMSPR_e_MtrBSpd_Src'
     *  Logic: '<S11>/Logical1'
     *  Logic: '<S11>/Logical2'
     *  Logic: '<S11>/Logical3'
     *  RelationalOperator: '<S11>/Comparison1'
     *  RelationalOperator: '<S11>/Comparison4'
     */
    rtb_TmpSignalConversionAtSFun_b[0] = rtb_TmpSignalConversionAtVeCS_f;
    rtb_TmpSignalConversionAtSFun_b[1] = rtb_TmpSignalConversionAtVeCS_p;
    rtb_TmpSignalConversionAtSFun_b[2] = (tmpRead_1 || ((((uint32)tmpRead_6) ==
        CeFWDR_e_TfrCasNeutral) && (KeVSDR_b_EnableTcaseFrStratNo)));
    rtb_TmpSignalConversionAtSFun_b[3] = (rtb_Logical2_h || (((uint32)tmpRead_5)
        != CeMSPR_e_MtrSpSrc_MCP));

    /* Chart: '<S11>/SrcPrioritization' */
    /* Gateway: VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/SrcPrioritization */
    /* During: VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/SrcPrioritization */
    /* Entry Internal: VSDR_FastTEF/MngVSDR_CalcSpeeds/CalNoStrategic/CalcNoStrategic/SrcPrioritization */
    /* Transition: '<S24>:12' */
    /* Transition: '<S24>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 4)
        {
            /* Transition: '<S24>:10' */
            /* Transition: '<S24>:32' */
            rtb_TmpSignalConversionAtVeCS_g = (sint32)
                KaVSDR_e_StratNoSrcPriority[(b_index)];
            if (rtb_TmpSignalConversionAtVeCS_g != 255)
            {
                /* Transition: '<S24>:15' */
                /* Transition: '<S24>:17' */
                if (rtb_TmpSignalConversionAtSFun_b[rtb_TmpSignalConversionAtVeCS_g])
                {
                    /* Transition: '<S24>:19' */
                    /* Transition: '<S24>:34' */
                    b_index++;

                    /* Transition: '<S24>:37' */
                    /* Transition: '<S24>:40' */
                    /* Transition: '<S24>:41' */
                }
                else
                {
                    /* Transition: '<S24>:23' */
                    b_index = (sint16)KaVSDR_e_StratNoSrcPriority[(b_index)];

                    /* Transition: '<S24>:45' */
                    /* Transition: '<S24>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S24>:44' */
                b_index = 255;

                /* Transition: '<S24>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S24>:8' */
            b_index = 255;
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Outputs for Atomic SubSystem: '<S6>/DigitalLowpassResetEnabled' */
    /* Product: '<S234>/Multiplication3' incorporates:
     *  UnitDelay: '<S49>/UnitDelay'
     */
    rtb_Switch1_iw = VSDR_ac_DW.UnitDelay_DSTATE_hp;

    /* Sum: '<S49>/Summation' incorporates:
     *  Constant: '<S53>/Calib'
     *  Product: '<S49>/Multiplication'
     *  Sum: '<S49>/Subtraction'
     */
    rtb_Switch1_k = ((VeVSDC_n_PrimNoSgndRaw - rtb_Switch1_iw) *
                     KeVSDR_K_PrimNoGain) + rtb_Switch1_iw;

    /* Update for UnitDelay: '<S49>/UnitDelay' incorporates:
     *  Switch: '<S49>/Switch2'
     */
    VSDR_ac_DW.UnitDelay_DSTATE_hp = rtb_Switch1_k;

    /* End of Outputs for SubSystem: '<S6>/DigitalLowpassResetEnabled' */

    /* SwitchCase: '<S11>/Switch_Case' incorporates:
     *  Inport: '<Root>/VeCSVR_n_PrimWhlSpdSigned'
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    switch (b_index)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S11>/UsingPrimNo' incorporates:
         *  ActionPort: '<S27>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S6>/DigitalLowpassResetEnabled' */
        /* Merge: '<S11>/Merge' incorporates:
         *  Constant: '<S38>/Calib'
         *  Product: '<S27>/Product'
         *  Switch: '<S49>/Switch2'
         */
        rtb_VeVSDC_n_StratNoRaw = rtb_Switch1_k * KeVSDR_Cf_PrimNoToStratNo;

        /* End of Outputs for SubSystem: '<S6>/DigitalLowpassResetEnabled' */

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* Logic: '<S246>/AND' incorporates:
         *  Constant: '<S27>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S1>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S27>/StratNoFA'
         */
        (void)Rte_Write_VeVSDR_b_StratNoFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S11>/UsingPrimNo' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S11>/UsingTOSSnsr' incorporates:
         *  ActionPort: '<S28>/ActionPort'
         */
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S42>/Calib'
         */
        if (KeVSDR_b_UseFDRForTossToStratNo)
        {
            /* Switch: '<S40>/Switch1' incorporates:
             *  Product: '<S28>/Product1'
             */
            rtb_VeVSDC_n_StratNoRaw = rtb_TmpSignalConversionAtVeFWDR *
                rtb_TmpSignalConversionAtVeFW_l;
        }
        else
        {
            /* Switch: '<S40>/Switch1' incorporates:
             *  Constant: '<S28>/ConstantValue'
             */
            rtb_VeVSDC_n_StratNoRaw = 1.0F;
        }

        /* End of Switch: '<S40>/Switch1' */

        /* Product: '<S28>/Product' incorporates:
         *  Constant: '<S41>/Calib'
         */
        rtb_TmpSignalConversionAtVeFWDR = rtb_TmpSignalConversionAtVeC_nt *
            KeVSDR_Cf_CnvrtTOSSensorSpdToStratNo;

        /* Outputs for Atomic SubSystem: '<S28>/ProtectedDivision' */
        /* Switch: '<S43>/Switch1' incorporates:
         *  Constant: '<S43>/ConstantValue'
         *  Constant: '<S43>/ConstantValue1'
         *  Constant: '<S43>/ConstantValue2'
         *  Constant: '<S43>/ConstantValue3'
         *  Logic: '<S43>/AND'
         *  RelationalOperator: '<S43>/GreaterThanorEqual'
         *  RelationalOperator: '<S43>/GreaterThanorEqual1'
         *  RelationalOperator: '<S43>/NotEqual'
         *  RelationalOperator: '<S43>/NotEqual1'
         *  Switch: '<S43>/Switch2'
         *  Switch: '<S43>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeFWDR != 0.0F) &&
                (rtb_VeVSDC_n_StratNoRaw != 0.0F))
        {
            /* Merge: '<S11>/Merge' incorporates:
             *  Product: '<S43>/Division'
             */
            rtb_VeVSDC_n_StratNoRaw = rtb_TmpSignalConversionAtVeFWDR /
                rtb_VeVSDC_n_StratNoRaw;
        }
        else if (rtb_TmpSignalConversionAtVeFWDR > 0.0F)
        {
            /* Switch: '<S43>/Switch2' incorporates:
             *  Constant: '<S43>/MAXFLOAT'
             *  Merge: '<S11>/Merge'
             */
            rtb_VeVSDC_n_StratNoRaw = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeFWDR < 0.0F)
        {
            /* Switch: '<S43>/Switch3' incorporates:
             *  Constant: '<S43>/MINFLOAT'
             *  Merge: '<S11>/Merge'
             *  Switch: '<S43>/Switch2'
             */
            rtb_VeVSDC_n_StratNoRaw = -3.402823466E+38F;
        }
        else
        {
            /* Merge: '<S11>/Merge' incorporates:
             *  Constant: '<S43>/ConstantValue4'
             *  Switch: '<S43>/Switch2'
             *  Switch: '<S43>/Switch3'
             */
            rtb_VeVSDC_n_StratNoRaw = 0.0F;
        }

        /* End of Switch: '<S43>/Switch1' */
        /* End of Outputs for SubSystem: '<S28>/ProtectedDivision' */

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* Logic: '<S246>/AND' incorporates:
         *  Constant: '<S28>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S1>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S28>/StratNoFA'
         */
        (void)Rte_Write_VeVSDR_b_StratNoFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S11>/UsingTOSSnsr' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S11>/UsingPrimAxle' incorporates:
         *  ActionPort: '<S26>/ActionPort'
         */
        /* Switch: '<S34>/Switch1' incorporates:
         *  Constant: '<S36>/Calib'
         */
        if (KeVSDR_b_UseFDRForPrimWhlSpdToStratNo)
        {
            /* Switch: '<S34>/Switch1' incorporates:
             *  Product: '<S26>/Product1'
             */
            rtb_TmpSignalConversionAtVeFWDR *= rtb_TmpSignalConversionAtVeFW_l;
        }
        else
        {
            /* Switch: '<S34>/Switch1' incorporates:
             *  Constant: '<S26>/ConstantValue'
             */
            rtb_TmpSignalConversionAtVeFWDR = 1.0F;
        }

        /* End of Switch: '<S34>/Switch1' */
        /* End of Outputs for SubSystem: '<S11>/UsingPrimAxle' */
        (void)Rte_Read_VeCSVR_n_PrimWhlSpdSigned_Value(&rtb_VeVSDC_n_StratNoRaw);

        /* Outputs for IfAction SubSystem: '<S11>/UsingPrimAxle' incorporates:
         *  ActionPort: '<S26>/ActionPort'
         */
        /* Merge: '<S11>/Merge' incorporates:
         *  Constant: '<S35>/Calib'
         *  Inport: '<Root>/VeCSVR_n_PrimWhlSpdSigned'
         *  Product: '<S26>/Product'
         */
        rtb_VeVSDC_n_StratNoRaw = (rtb_VeVSDC_n_StratNoRaw *
            KeVSDR_Cf_CnvrtPrimWhlSpdToStratNo) *
            rtb_TmpSignalConversionAtVeFWDR;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* Logic: '<S246>/AND' incorporates:
         *  Constant: '<S26>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S1>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S26>/StratNoFA'
         */
        (void)Rte_Write_VeVSDR_b_StratNoFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S11>/UsingPrimAxle' */
        break;

      case 3:
        (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_VeVSDC_n_StratNoRaw);

        /* Outputs for IfAction SubSystem: '<S11>/UsingMtrB' incorporates:
         *  ActionPort: '<S25>/ActionPort'
         */
        /* Merge: '<S11>/Merge' incorporates:
         *  Constant: '<S32>/Calib'
         *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
         *  Product: '<S25>/Product'
         */
        rtb_VeVSDC_n_StratNoRaw *= KeVSDR_Cf_CnvrtMtrBSpdToStratNo;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* Logic: '<S246>/AND' incorporates:
         *  Constant: '<S25>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S1>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S25>/StratNoFA'
         */
        (void)Rte_Write_VeVSDR_b_StratNoFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S11>/UsingMtrB' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S11>/Default' incorporates:
         *  ActionPort: '<S19>/ActionPort'
         */
        /* Merge: '<S11>/Merge' incorporates:
         *  Constant: '<S30>/Calib'
         *  SignalConversion generated from: '<S19>/StratNo'
         */
        rtb_VeVSDC_n_StratNoRaw = KeVSDR_n_DefaultStratNo;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* Logic: '<S246>/AND' incorporates:
         *  Constant: '<S19>/TRUEConstant'
         *  Outport: '<Root>/VeVSDR_b_StratNoFA'
         *  SignalConversion generated from: '<S19>/StratNoFA'
         *  SignalConversion generated from: '<S1>/VeVSDR_b_StratNoFA'
         */
        (void)Rte_Write_VeVSDR_b_StratNoFA_Value(true);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S11>/Default' */
        break;
    }

    /* End of SwitchCase: '<S11>/Switch_Case' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCSVR_b_ReferenceNoFA' */
    (void)Rte_Read_VeCSVR_b_ReferenceNoFA_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S45>/Calib'
     *  Logic: '<S18>/Logical1'
     */
    if ((!KeVSDR_b_UseStratNo_Raw) && (!tmpRead))
    {
        /* Abs: '<S18>/Abs1' */
        rtb_TmpSignalConversionAtVeFWDR = fabsf(rtb_VeVSDC_n_StratNoRaw);

        /* Switch: '<S47>/Switch1' incorporates:
         *  Abs: '<S18>/Abs1'
         *  Lookup_n-D: '<S46>/Vector'
         */
        rtb_TmpSignalConversionAtVeFW_l = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeFWDR, ((const float32 *)
              &(KxVSDR_n_RefSpd_NoOffset[0])), ((const float32 *)
              &(KtVSDR_n_RefSpd_NoOffset[0])), 5U);

        /* Sum: '<S18>/Sum' */
        rtb_Vector_l = rtb_TmpSignalConversionAtVeCS_d +
            rtb_TmpSignalConversionAtVeFW_l;

        /* Sum: '<S18>/Sum1' */
        rtb_TmpSignalConversionAtVeCS_d -= rtb_TmpSignalConversionAtVeFW_l;

        /* Outputs for Atomic SubSystem: '<S18>/Limiter' */
        /* Switch: '<S47>/Switch1' incorporates:
         *  RelationalOperator: '<S47>/RelationalOperator'
         */
        if (rtb_Vector_l < rtb_TmpSignalConversionAtVeFWDR)
        {
            /* Switch: '<S47>/Switch1' */
            rtb_TmpSignalConversionAtVeFW_l = rtb_Vector_l;
        }
        else
        {
            /* Switch: '<S47>/Switch1' */
            rtb_TmpSignalConversionAtVeFW_l = rtb_TmpSignalConversionAtVeFWDR;
        }

        /* End of Switch: '<S47>/Switch1' */
        /* End of Outputs for SubSystem: '<S18>/Limiter' */

        /* Signum: '<S18>/Signum' */
        if (rtb_VeVSDC_n_StratNoRaw < 0.0F)
        {
            rtb_VeVSDC_n_StratNoRaw = -1.0F;
        }
        else
        {
            if (rtb_VeVSDC_n_StratNoRaw > 0.0F)
            {
                rtb_VeVSDC_n_StratNoRaw = 1.0F;
            }
        }

        /* End of Signum: '<S18>/Signum' */

        /* Outputs for Atomic SubSystem: '<S18>/Limiter' */
        /* Switch: '<S47>/Switch' incorporates:
         *  RelationalOperator: '<S47>/RelationalOperator1'
         */
        if (rtb_TmpSignalConversionAtVeFW_l > rtb_TmpSignalConversionAtVeCS_d)
        {
            rtb_TmpSignalConversionAtVeCS_d = rtb_TmpSignalConversionAtVeFW_l;
        }

        /* End of Switch: '<S47>/Switch' */
        /* End of Outputs for SubSystem: '<S18>/Limiter' */

        /* Switch: '<S18>/Switch' incorporates:
         *  Product: '<S18>/Product'
         */
        rtb_VeVSDC_n_StratNoRaw *= rtb_TmpSignalConversionAtVeCS_d;
    }

    /* End of Switch: '<S18>/Switch' */

    /* Lookup_n-D: '<S17>/Vector' incorporates:
     *  Switch: '<S18>/Switch'
     */
    rtb_TmpSignalConversionAtVeCS_d = look1_iflf_binlcapw
        (rtb_VeVSDC_n_StratNoRaw, ((const float32 *)&(KxVSDR_dn_StratNodotLimit
           [0])), ((const float32 *)&(KtVSDR_dn_StratNodotLimit[0])), 6U);

    /* UnitDelay: '<S12>/UnitDelay1' */
    rtb_TmpSignalConversionAtVeFW_l = VSDR_ac_DW.UnitDelay1_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S12>/Limiter' */
    /* Switch: '<S44>/Switch1' incorporates:
     *  Gain: '<S12>/Gain'
     *  RelationalOperator: '<S44>/RelationalOperator'
     */
    if ((-rtb_TmpSignalConversionAtVeCS_d) < rtb_TmpSignalConversionAtVeFW_l)
    {
        /* Product: '<S234>/Multiplication3' */
        rtb_Switch1_iw = -rtb_TmpSignalConversionAtVeCS_d;
    }
    else
    {
        /* Product: '<S234>/Multiplication3' */
        rtb_Switch1_iw = rtb_TmpSignalConversionAtVeFW_l;
    }

    /* End of Switch: '<S44>/Switch1' */
    /* End of Outputs for SubSystem: '<S12>/Limiter' */

    /* Product: '<S12>/Multiplication3' incorporates:
     *  Constant: '<S12>/ConstantValue1'
     *  Constant: '<S14>/Calib'
     *  Product: '<S234>/Multiplication3'
     */
    rtb_Vector_h_tmp = HeVSDR_t_FastTEF_dT / 2.0F;

    /* Outputs for Atomic SubSystem: '<S12>/Limiter' */
    /* Switch: '<S44>/Switch' incorporates:
     *  RelationalOperator: '<S44>/RelationalOperator1'
     */
    if (rtb_Switch1_iw > rtb_TmpSignalConversionAtVeCS_d)
    {
        rtb_TmpSignalConversionAtVeCS_d = rtb_Switch1_iw;
    }

    /* End of Switch: '<S44>/Switch' */
    /* End of Outputs for SubSystem: '<S12>/Limiter' */

    /* Product: '<S12>/Multiplication2' incorporates:
     *  Constant: '<S16>/Calib'
     *  Product: '<S12>/Multiplication3'
     *  Product: '<S12>/Multiplication4'
     *  Sum: '<S12>/Summation'
     *  Sum: '<S12>/Summation1'
     *  Sum: '<S12>/Summation2'
     *  UnitDelay: '<S12>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeCS_d = ((rtb_VeVSDC_n_StratNoRaw -
        ((rtb_Vector_h_tmp - KeVSDR_t_StratNoTimePeriod) *
         rtb_TmpSignalConversionAtVeCS_d)) - VSDR_ac_DW.UnitDelay_DSTATE_m) /
        (rtb_Vector_h_tmp + KeVSDR_t_StratNoTimePeriod);

    /* Outputs for Atomic SubSystem: '<S5>/DigitalLowpassResetEnabled' */
    /* Product: '<S234>/Multiplication3' incorporates:
     *  UnitDelay: '<S13>/UnitDelay'
     */
    rtb_Switch1_iw = VSDR_ac_DW.UnitDelay_DSTATE_a;

    /* Sum: '<S13>/Summation' incorporates:
     *  Constant: '<S15>/Calib'
     *  Product: '<S13>/Multiplication'
     *  Sum: '<S13>/Subtraction'
     */
    rtb_TmpSignalConversionAtVeFWDR = ((rtb_VeVSDC_n_StratNoRaw - rtb_Switch1_iw)
        * KeVSDR_K_StratNoGain) + rtb_Switch1_iw;

    /* Update for UnitDelay: '<S13>/UnitDelay' incorporates:
     *  Switch: '<S13>/Switch2'
     */
    VSDR_ac_DW.UnitDelay_DSTATE_a = rtb_TmpSignalConversionAtVeFWDR;

    /* End of Outputs for SubSystem: '<S5>/DigitalLowpassResetEnabled' */

    /* Logic: '<S56>/Logical2' incorporates:
     *  RelationalOperator: '<S56>/Comparison4'
     *  UnitDelay: '<S56>/UnitDelay1'
     */
    rtb_Logical2_h = (VeVSDC_n_PrimNoSgndRaw != VSDR_ac_DW.UnitDelay1_DSTATE_o);

    /* Outputs for Atomic SubSystem: '<S56>/StopWatchResetEnabled1' */
    /* Switch: '<S72>/Switch' */
    if (rtb_Logical2_h)
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S72>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeFW_l = 0.0F;
    }
    else
    {
        /* Switch: '<S72>/Switch' incorporates:
         *  Constant: '<S67>/Calib'
         *  Sum: '<S72>/Subtraction'
         *  UnitDelay: '<S72>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeFW_l = HeVSDR_t_FastTEF_dT +
            VSDR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S72>/Switch' */

    /* Update for UnitDelay: '<S72>/Unit Delay' */
    VSDR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeFW_l;

    /* End of Outputs for SubSystem: '<S56>/StopWatchResetEnabled1' */

    /* RelationalOperator: '<S56>/Comparison1' incorporates:
     *  Constant: '<S68>/Calib'
     */
    VeVSDC_b_NoDotTimeout = (rtb_TmpSignalConversionAtVeFW_l >=
        KeVSDR_t_NoDotTimeout);

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/ConstantValue2'
     *  UnitDelay: '<S6>/UnitDelay2'
     */
    if (VeVSDC_b_NoDotTimeout)
    {
        rtb_TmpSignalConversionAtVeFW_l = 0.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeFW_l = VSDR_ac_DW.UnitDelay2_DSTATE;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S6>/GradientLimiter' */
    /* Sum: '<S51>/Sum2' incorporates:
     *  UnitDelay: '<S51>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFW_l -= VSDR_ac_DW.UnitDelay_DSTATE_l0;

    /* Outputs for Atomic SubSystem: '<S51>/Limiter' */
    /* Switch: '<S65>/Switch1' incorporates:
     *  Constant: '<S55>/Calib'
     *  RelationalOperator: '<S65>/Relational Operator'
     */
    if (KeVSDR_dn_NoDot_LU < rtb_TmpSignalConversionAtVeFW_l)
    {
        /* Lookup_n-D: '<S238>/Vector' */
        rtb_Vector_l = KeVSDR_dn_NoDot_LU;
    }
    else
    {
        /* Lookup_n-D: '<S238>/Vector' */
        rtb_Vector_l = rtb_TmpSignalConversionAtVeFW_l;
    }

    /* End of Switch: '<S65>/Switch1' */

    /* Switch: '<S65>/Switch' incorporates:
     *  Constant: '<S54>/Calib'
     *  RelationalOperator: '<S65>/Relational Operator1'
     */
    if (rtb_Vector_l <= KeVSDR_dn_NoDot_LD)
    {
        rtb_Vector_l = KeVSDR_dn_NoDot_LD;
    }

    /* End of Switch: '<S65>/Switch' */
    /* End of Outputs for SubSystem: '<S51>/Limiter' */

    /* Sum: '<S51>/Sum3' incorporates:
     *  UnitDelay: '<S51>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFW_l = rtb_Vector_l +
        VSDR_ac_DW.UnitDelay_DSTATE_l0;

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    VSDR_ac_DW.UnitDelay_DSTATE_l0 = rtb_TmpSignalConversionAtVeFW_l;

    /* End of Outputs for SubSystem: '<S6>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S56>/EdgeRising' */
    /* Logic: '<S66>/AND' incorporates:
     *  Logic: '<S66>/OR1'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    VeVSDC_b_NoDotTrig = (rtb_Logical2_h && (!VSDR_ac_DW.UnitDelay_DSTATE_a3));

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    VSDR_ac_DW.UnitDelay_DSTATE_a3 = rtb_Logical2_h;

    /* End of Outputs for SubSystem: '<S56>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S56>/StopWatchResetEnabled' */
    /* Switch: '<S71>/Switch' incorporates:
     *  Logic: '<S56>/Logical1'
     *  UnitDelay: '<S56>/UnitDelay'
     */
    if ((VSDR_ac_DW.UnitDelay_DSTATE_f) || (VeVSDC_b_NoDotTimeout))
    {
        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S71>/Constant Value2'
         */
        rtb_Vector_l = 0.0F;
    }
    else
    {
        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S67>/Calib'
         *  Sum: '<S71>/Subtraction'
         *  UnitDelay: '<S71>/Unit Delay'
         */
        rtb_Vector_l = HeVSDR_t_FastTEF_dT + VSDR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S71>/Switch' */

    /* Update for UnitDelay: '<S71>/Unit Delay' */
    VSDR_ac_DW.UnitDelay_DSTATE_h = rtb_Vector_l;

    /* End of Outputs for SubSystem: '<S56>/StopWatchResetEnabled' */

    /* Switch: '<S56>/Switch1' */
    if (VeVSDC_b_NoDotTimeout)
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S69>/Calib'
         */
        VeVSDC_t_NoDotdT = KeVSDR_t_PrimNoDefSampTime;
    }
    else
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S67>/Calib'
         *  Sum: '<S56>/Sum'
         */
        VeVSDC_t_NoDotdT = rtb_Vector_l + HeVSDR_t_FastTEF_dT;
    }

    /* End of Switch: '<S56>/Switch1' */

    /* MinMax: '<S56>/MinMax1' incorporates:
     *  Constant: '<S70>/Calib'
     */
    VeVSDC_t_NoDotTimePeriod = fmaxf(VeVSDC_t_NoDotdT, KeVSDR_t_PrimNoTimePeriod);

    /* Product: '<S6>/Product1' */
    rtb_Vector_l = VeVSDC_n_PrimNoSgndRaw / rtb_TmpSignalConversionAtVeHSER;

    /* Outputs for Enabled SubSystem: '<S6>/NoDot_triggered_Arb' incorporates:
     *  EnablePort: '<S57>/Enable'
     */
    if (VeVSDC_b_NoDotTrig)
    {
        /* Product: '<S73>/Multiplication3' incorporates:
         *  Constant: '<S73>/Constant Value1'
         */
        rtb_Switch1_iw = VeVSDC_t_NoDotdT / 2.0F;

        /* Product: '<S73>/Multiplication2' incorporates:
         *  Product: '<S73>/Multiplication4'
         *  Sum: '<S73>/Summation'
         *  Sum: '<S73>/Summation1'
         *  Sum: '<S73>/Summation2'
         *  UnitDelay: '<S73>/Unit Delay'
         *  UnitDelay: '<S73>/Unit Delay1'
         */
        VSDR_ac_B.Multiplication2_m = ((rtb_Vector_l - ((rtb_Switch1_iw -
            VeVSDC_t_NoDotTimePeriod) * VSDR_ac_DW.UnitDelay1_DSTATE_ey)) -
            VSDR_ac_DW.UnitDelay_DSTATE_j) / (rtb_Switch1_iw +
            VeVSDC_t_NoDotTimePeriod);

        /* Update for UnitDelay: '<S73>/Unit Delay1' */
        VSDR_ac_DW.UnitDelay1_DSTATE_ey = VSDR_ac_B.Multiplication2_m;

        /* Update for UnitDelay: '<S73>/Unit Delay' */
        VSDR_ac_DW.UnitDelay_DSTATE_j = rtb_Vector_l;
    }

    /* End of Outputs for SubSystem: '<S6>/NoDot_triggered_Arb' */

    /* Switch: '<S6>/Switch' */
    if (!VeVSDC_b_NoDotTimeout)
    {
        /* Switch: '<S6>/Switch' incorporates:
         *  Product: '<S6>/Product'
         */
        rtb_TmpSignalConversionAtVeFW_l = VSDR_ac_B.Multiplication2_m *
            rtb_TmpSignalConversionAtVeHSER;
    }

    /* End of Switch: '<S6>/Switch' */

    /* SignalConversion generated from: '<S239>/SFunction' incorporates:
     *  Chart: '<S10>/SrcPrioritization'
     */
    rtb_TmpSignalConversionAtSFunct[0] = rtb_TmpSignalConversionAtVeCS_f;
    rtb_TmpSignalConversionAtSFunct[1] = rtb_TmpSignalConversionAtVeCS_p;

    /* Chart: '<S10>/SrcPrioritization' */
    /* Gateway: VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/SrcPrioritization */
    /* During: VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/SrcPrioritization */
    /* Entry Internal: VSDR_FastTEF/MngVSDR_CalcSpeeds/NoDotForInertComp/SrcPrioritization */
    /* Transition: '<S239>:12' */
    /* Transition: '<S239>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 2)
        {
            /* Transition: '<S239>:10' */
            /* Transition: '<S239>:32' */
            rtb_TmpSignalConversionAtVeCS_g = (sint32)
                KaVSDR_e_NodotForInertCompSrcPriority[(b_index)];
            if (rtb_TmpSignalConversionAtVeCS_g != 255)
            {
                /* Transition: '<S239>:15' */
                /* Transition: '<S239>:17' */
                if (rtb_TmpSignalConversionAtSFunct[rtb_TmpSignalConversionAtVeCS_g])
                {
                    /* Transition: '<S239>:19' */
                    /* Transition: '<S239>:34' */
                    b_index++;

                    /* Transition: '<S239>:37' */
                    /* Transition: '<S239>:40' */
                    /* Transition: '<S239>:41' */
                }
                else
                {
                    /* Transition: '<S239>:23' */
                    b_index = (sint16)KaVSDR_e_NodotForInertCompSrcPriority
                        [(b_index)];

                    /* Transition: '<S239>:45' */
                    /* Transition: '<S239>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S239>:44' */
                b_index = 255;

                /* Transition: '<S239>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S239>:8' */
            b_index = 255;
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S10>/Switch_Case' */
    switch (b_index)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S10>/UsingPrimNo' incorporates:
         *  ActionPort: '<S240>/ActionPort'
         */
        /* Merge: '<S10>/Merge' incorporates:
         *  Inport: '<S240>/PrimNo'
         */
        rtb_TmpSignalConversionAtVeC_nt = VeVSDC_n_PrimNoSgndRaw;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Constant: '<S240>/FALSEConstant'
         *  SignalConversion generated from: '<S240>/NForInertCompFA'
         */
        VeVSDC_b_NoFAForInertComp = false;

        /* End of Outputs for SubSystem: '<S10>/UsingPrimNo' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S10>/UsingTransNo' incorporates:
         *  ActionPort: '<S241>/ActionPort'
         */
        /* Merge: '<S10>/Merge2' incorporates:
         *  Constant: '<S241>/FALSEConstant'
         *  SignalConversion generated from: '<S241>/NoForInertCompFA'
         */
        VeVSDC_b_NoFAForInertComp = false;

        /* End of Outputs for SubSystem: '<S10>/UsingTransNo' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S10>/Default' incorporates:
         *  ActionPort: '<S233>/ActionPort'
         */
        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S233>/Constant'
         *  SignalConversion generated from: '<S233>/NoForInertComp'
         */
        rtb_TmpSignalConversionAtVeC_nt = 0.0F;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Constant: '<S233>/TRUEConstant'
         *  SignalConversion generated from: '<S233>/NoForInertCompFA'
         */
        VeVSDC_b_NoFAForInertComp = true;

        /* End of Outputs for SubSystem: '<S10>/Default' */
        break;
    }

    /* End of SwitchCase: '<S10>/Switch_Case' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCSVR_b_WhlSpdLHR_FA' */
    (void)Rte_Read_VeCSVR_b_WhlSpdLHR_FA_Value(&tmpRead_a);

    /* Inport: '<Root>/VeCSVR_b_WhlSpdLHF_FA' */
    (void)Rte_Read_VeCSVR_b_WhlSpdLHF_FA_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* Lookup_n-D: '<S238>/Vector' incorporates:
     *  Abs: '<S10>/Abs'
     */
    rtb_Vector_l = look1_iflf_binlcapw(fabsf(rtb_TmpSignalConversionAtVeC_nt),
        ((const float32 *)&(KxVSDR_t_NoForInertCompTimePeriod[0])), ((const
        float32 *)&(KtVSDR_t_NoForInertCompTimePeriod[0])), 6U);

    /* Product: '<S234>/Multiplication2' incorporates:
     *  Product: '<S234>/Multiplication4'
     *  Sum: '<S234>/Summation'
     *  Sum: '<S234>/Summation1'
     *  Sum: '<S234>/Summation2'
     *  UnitDelay: '<S234>/UnitDelay'
     *  UnitDelay: '<S234>/UnitDelay1'
     */
    rtb_TmpSignalConversionAtVeHSER = ((rtb_TmpSignalConversionAtVeC_nt -
        ((rtb_Vector_h_tmp - rtb_Vector_l) * VSDR_ac_DW.UnitDelay1_DSTATE_a)) -
        VSDR_ac_DW.UnitDelay_DSTATE_d) / (rtb_Vector_h_tmp + rtb_Vector_l);

    /* SignalConversion: '<S7>/SignalConversion' incorporates:
     *  Constant: '<S106>/Constant'
     *  Constant: '<S107>/Constant'
     *  Inport: '<Root>/VeCSVR_e_FrontAxlDir'
     *  Logic: '<S7>/Logical1'
     *  Logic: '<S7>/Logical9'
     *  RelationalOperator: '<S7>/Comparison1'
     *  RelationalOperator: '<S7>/Comparison2'
     */
    VaVSDR_b_LftWhlSpdFA[0] = (tmpRead_8 || (((uint32)tmpRead_c) ==
        CeCSVR_e_WheelDirectionInvalid));
    VaVSDR_b_LftWhlSpdFA[1] = (tmpRead_a || (((uint32)tmpRead_d) ==
        CeCSVR_e_WheelDirectionInvalid));

    /* Chart: '<S7>/SrcPrioritization' */
    /* Gateway: VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization */
    /* During: VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization */
    /* Entry Internal: VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization */
    /* Transition: '<S115>:12' */
    /* Transition: '<S115>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 2)
        {
            /* Transition: '<S115>:10' */
            /* Transition: '<S115>:32' */
            rtb_TmpSignalConversionAtVeCS_g = (sint32)
                KaVSDR_e_WEDWhlSpdSrcPriority[(b_index)];
            if (rtb_TmpSignalConversionAtVeCS_g != 255)
            {
                /* Transition: '<S115>:15' */
                /* Transition: '<S115>:17' */
                if (VaVSDR_b_LftWhlSpdFA[(rtb_TmpSignalConversionAtVeCS_g)])
                {
                    /* Transition: '<S115>:19' */
                    /* Transition: '<S115>:34' */
                    b_index++;

                    /* Transition: '<S115>:37' */
                    /* Transition: '<S115>:40' */
                    /* Transition: '<S115>:41' */
                }
                else
                {
                    /* Transition: '<S115>:23' */
                    b_index = (sint16)KaVSDR_e_WEDWhlSpdSrcPriority[(b_index)];

                    /* Transition: '<S115>:45' */
                    /* Transition: '<S115>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S115>:44' */
                b_index = 255;

                /* Transition: '<S115>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S115>:8' */
            b_index = 255;
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S7>/Switch_Case' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdLHF'
     *  Inport: '<Root>/VeCSVR_n_WhlSpdLHR'
     */
    switch (b_index)
    {
      case 0:
        (void)Rte_Read_VeCSVR_n_WhlSpdLHF_Value(&VeVSDC_n_WEDLeftWheel);

        /* Outputs for IfAction SubSystem: '<S7>/FrontWheelSpeed' incorporates:
         *  ActionPort: '<S110>/ActionPort'
         */
        /* Switch: '<S123>/Switch1' incorporates:
         *  Constant: '<S110>/ConstantValue'
         *  Constant: '<S110>/ConstantValue1'
         *  Constant: '<S122>/Constant'
         *  Inport: '<Root>/VeCSVR_e_FrontAxlDir'
         *  Inport: '<Root>/VeCSVR_n_WhlSpdLHF'
         *  RelationalOperator: '<S110>/Comparison4'
         *  RelationalOperator: '<S7>/Comparison1'
         */
        if (((uint32)tmpRead_c) == CeCSVR_e_WheelDirectionReverse)
        {
            rtb_TmpSignalConversionAtVeCS_g = -1;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCS_g = 1;
        }

        /* End of Switch: '<S123>/Switch1' */

        /* Merge: '<S7>/Merge' incorporates:
         *  Product: '<S110>/Product'
         */
        VeVSDC_n_WEDLeftWheel *= (float32)rtb_TmpSignalConversionAtVeCS_g;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S250>/DataTypeConversion' incorporates:
         *  Constant: '<S121>/Constant'
         *  Merge: '<S7>/Merge1'
         *  Outport: '<Root>/VeVSDR_e_WEDLeftSrc'
         *  SignalConversion generated from: '<S110>/LftWhlSpdSrc'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_e_WEDLeftSrc'
         */
        (void)Rte_Write_VeVSDR_e_WEDLeftSrc_Value
            (CeVSDR_e_WEDWhlSpdFromFrontWhls);

        /* Logic: '<S245>/AND' incorporates:
         *  Constant: '<S110>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_WEDLeftWheelFA'
         *  SignalConversion generated from: '<S110>/LftWhlSpdFA'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_b_WEDLeftWheelFA'
         */
        (void)Rte_Write_VeVSDR_b_WEDLeftWheelFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S7>/FrontWheelSpeed' */
        break;

      case 1:
        (void)Rte_Read_VeCSVR_n_WhlSpdLHR_Value(&VeVSDC_n_WEDLeftWheel);

        /* Outputs for IfAction SubSystem: '<S7>/RearWheelSpeed' incorporates:
         *  ActionPort: '<S113>/ActionPort'
         */
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S113>/ConstantValue'
         *  Constant: '<S113>/ConstantValue1'
         *  Constant: '<S128>/Constant'
         *  Inport: '<Root>/VeCSVR_n_WhlSpdLHR'
         *  RelationalOperator: '<S113>/Comparison4'
         */
        if (((uint32)tmpRead_d) == CeCSVR_e_WheelDirectionReverse)
        {
            rtb_TmpSignalConversionAtVeCS_g = -1;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCS_g = 1;
        }

        /* End of Switch: '<S129>/Switch1' */

        /* Merge: '<S7>/Merge' incorporates:
         *  Product: '<S113>/Product'
         */
        VeVSDC_n_WEDLeftWheel *= (float32)rtb_TmpSignalConversionAtVeCS_g;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S250>/DataTypeConversion' incorporates:
         *  Constant: '<S127>/Constant'
         *  Merge: '<S7>/Merge1'
         *  Outport: '<Root>/VeVSDR_e_WEDLeftSrc'
         *  SignalConversion generated from: '<S113>/LftWhlSpdSrc'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_e_WEDLeftSrc'
         */
        (void)Rte_Write_VeVSDR_e_WEDLeftSrc_Value(CeVSDR_e_WEDWhlSpdFromRearWhls);

        /* Logic: '<S245>/AND' incorporates:
         *  Constant: '<S113>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_WEDLeftWheelFA'
         *  SignalConversion generated from: '<S113>/LftWhlSpdFA'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_b_WEDLeftWheelFA'
         */
        (void)Rte_Write_VeVSDR_b_WEDLeftWheelFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S7>/RearWheelSpeed' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S7>/Default' incorporates:
         *  ActionPort: '<S101>/ActionPort'
         */
        /* Merge: '<S7>/Merge' incorporates:
         *  Constant: '<S118>/Calib'
         *  SignalConversion generated from: '<S101>/LftWhlSpd'
         */
        VeVSDC_n_WEDLeftWheel = KeVSDR_n_WhlSpd_Dflt;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S250>/DataTypeConversion' incorporates:
         *  Constant: '<S117>/Constant'
         *  Merge: '<S7>/Merge1'
         *  Outport: '<Root>/VeVSDR_e_WEDLeftSrc'
         *  SignalConversion generated from: '<S101>/LftWhlSpdSrc'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_e_WEDLeftSrc'
         */
        (void)Rte_Write_VeVSDR_e_WEDLeftSrc_Value(CeVSDR_e_WEDNoValidSpdSrc);

        /* Logic: '<S245>/AND' incorporates:
         *  Constant: '<S101>/TRUEConstant'
         *  Outport: '<Root>/VeVSDR_b_WEDLeftWheelFA'
         *  SignalConversion generated from: '<S101>/LftWhlSpdFA'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_b_WEDLeftWheelFA'
         */
        (void)Rte_Write_VeVSDR_b_WEDLeftWheelFA_Value(true);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S7>/Default' */
        break;
    }

    /* End of SwitchCase: '<S7>/Switch_Case' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCSVR_b_WhlSpdRHR_FA' */
    (void)Rte_Read_VeCSVR_b_WhlSpdRHR_FA_Value(&tmpRead_b);

    /* Inport: '<Root>/VeCSVR_b_WhlSpdRHF_FA' */
    (void)Rte_Read_VeCSVR_b_WhlSpdRHF_FA_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* SignalConversion: '<S7>/SignalConversion1' incorporates:
     *  Constant: '<S108>/Constant'
     *  Constant: '<S109>/Constant'
     *  Inport: '<Root>/VeCSVR_e_FrontAxlDir'
     *  Logic: '<S7>/Logical2'
     *  Logic: '<S7>/Logical3'
     *  RelationalOperator: '<S7>/Comparison1'
     *  RelationalOperator: '<S7>/Comparison3'
     *  RelationalOperator: '<S7>/Comparison4'
     */
    VaVSDR_b_RgtWhlSpdFA[0] = (tmpRead_9 || (((uint32)tmpRead_c) ==
        CeCSVR_e_WheelDirectionInvalid));
    VaVSDR_b_RgtWhlSpdFA[1] = (tmpRead_b || (((uint32)tmpRead_d) ==
        CeCSVR_e_WheelDirectionInvalid));

    /* Chart: '<S7>/SrcPrioritization1' */
    /* Gateway: VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization1 */
    /* During: VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization1 */
    /* Entry Internal: VSDR_FastTEF/MngVSDR_CalcSpeeds/Calc_WhlRPM/SrcPrioritization1 */
    /* Transition: '<S116>:12' */
    /* Transition: '<S116>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 2)
        {
            /* Transition: '<S116>:10' */
            /* Transition: '<S116>:32' */
            rtb_TmpSignalConversionAtVeCS_g = (sint32)
                KaVSDR_e_WEDWhlSpdSrcPriority[(b_index)];
            if (rtb_TmpSignalConversionAtVeCS_g != 255)
            {
                /* Transition: '<S116>:15' */
                /* Transition: '<S116>:17' */
                if (VaVSDR_b_RgtWhlSpdFA[(rtb_TmpSignalConversionAtVeCS_g)])
                {
                    /* Transition: '<S116>:19' */
                    /* Transition: '<S116>:34' */
                    b_index++;

                    /* Transition: '<S116>:37' */
                    /* Transition: '<S116>:40' */
                    /* Transition: '<S116>:41' */
                }
                else
                {
                    /* Transition: '<S116>:23' */
                    b_index = (sint16)KaVSDR_e_WEDWhlSpdSrcPriority[(b_index)];

                    /* Transition: '<S116>:45' */
                    /* Transition: '<S116>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S116>:44' */
                b_index = 255;

                /* Transition: '<S116>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S116>:8' */
            b_index = 255;
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S7>/Switch_Case1' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdRHF'
     *  Inport: '<Root>/VeCSVR_n_WhlSpdRHR'
     */
    switch (b_index)
    {
      case 0:
        (void)Rte_Read_VeCSVR_n_WhlSpdRHF_Value(&VeVSDC_n_WEDRightWheel);

        /* Outputs for IfAction SubSystem: '<S7>/FrontWheelSpeed1' incorporates:
         *  ActionPort: '<S111>/ActionPort'
         */
        /* Switch: '<S126>/Switch1' incorporates:
         *  Constant: '<S111>/ConstantValue'
         *  Constant: '<S111>/ConstantValue1'
         *  Constant: '<S125>/Constant'
         *  Inport: '<Root>/VeCSVR_e_FrontAxlDir'
         *  Inport: '<Root>/VeCSVR_n_WhlSpdRHF'
         *  RelationalOperator: '<S111>/Comparison4'
         *  RelationalOperator: '<S7>/Comparison1'
         */
        if (((uint32)tmpRead_c) == CeCSVR_e_WheelDirectionReverse)
        {
            rtb_TmpSignalConversionAtVeCS_g = -1;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCS_g = 1;
        }

        /* End of Switch: '<S126>/Switch1' */

        /* Merge: '<S7>/Merge3' incorporates:
         *  Product: '<S111>/Product'
         */
        VeVSDC_n_WEDRightWheel *= (float32)rtb_TmpSignalConversionAtVeCS_g;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S251>/DataTypeConversion' incorporates:
         *  Constant: '<S124>/Constant'
         *  Merge: '<S7>/Merge4'
         *  Outport: '<Root>/VeVSDR_e_WEDRightSrc'
         *  SignalConversion generated from: '<S111>/RgtWhlSpdSrc'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_e_WEDRightSrc'
         */
        (void)Rte_Write_VeVSDR_e_WEDRightSrc_Value
            (CeVSDR_e_WEDWhlSpdFromFrontWhls);

        /* Logic: '<S247>/AND' incorporates:
         *  Constant: '<S111>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_WEDRightWheelFA'
         *  SignalConversion generated from: '<S111>/RgtWhlSpdFA'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_b_WEDRightWheelFA'
         */
        (void)Rte_Write_VeVSDR_b_WEDRightWheelFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S7>/FrontWheelSpeed1' */
        break;

      case 1:
        (void)Rte_Read_VeCSVR_n_WhlSpdRHR_Value(&VeVSDC_n_WEDRightWheel);

        /* Outputs for IfAction SubSystem: '<S7>/RearWheelSpeed1' incorporates:
         *  ActionPort: '<S114>/ActionPort'
         */
        /* Switch: '<S132>/Switch1' incorporates:
         *  Constant: '<S114>/ConstantValue'
         *  Constant: '<S114>/ConstantValue1'
         *  Constant: '<S131>/Constant'
         *  Inport: '<Root>/VeCSVR_n_WhlSpdRHR'
         *  RelationalOperator: '<S114>/Comparison4'
         */
        if (((uint32)tmpRead_d) == CeCSVR_e_WheelDirectionReverse)
        {
            rtb_TmpSignalConversionAtVeCS_g = -1;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCS_g = 1;
        }

        /* End of Switch: '<S132>/Switch1' */

        /* Merge: '<S7>/Merge3' incorporates:
         *  Product: '<S114>/Product'
         */
        VeVSDC_n_WEDRightWheel *= (float32)rtb_TmpSignalConversionAtVeCS_g;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S251>/DataTypeConversion' incorporates:
         *  Constant: '<S130>/Constant'
         *  Merge: '<S7>/Merge4'
         *  Outport: '<Root>/VeVSDR_e_WEDRightSrc'
         *  SignalConversion generated from: '<S114>/RgtWhlSpdSrc'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_e_WEDRightSrc'
         */
        (void)Rte_Write_VeVSDR_e_WEDRightSrc_Value
            (CeVSDR_e_WEDWhlSpdFromRearWhls);

        /* Logic: '<S247>/AND' incorporates:
         *  Constant: '<S114>/FALSEConstant'
         *  Outport: '<Root>/VeVSDR_b_WEDRightWheelFA'
         *  SignalConversion generated from: '<S114>/RgtWhlSpdFA'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_b_WEDRightWheelFA'
         */
        (void)Rte_Write_VeVSDR_b_WEDRightWheelFA_Value(false);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S7>/RearWheelSpeed1' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S7>/Default1' incorporates:
         *  ActionPort: '<S102>/ActionPort'
         */
        /* Merge: '<S7>/Merge3' incorporates:
         *  Constant: '<S120>/Calib'
         *  SignalConversion generated from: '<S102>/RgtWhlSpd'
         */
        VeVSDC_n_WEDRightWheel = KeVSDR_n_WhlSpd_Dflt;

        /* Outputs for Function Call SubSystem: '<S1>/VSDO_Outputs' */
        /* DataTypeConversion: '<S251>/DataTypeConversion' incorporates:
         *  Constant: '<S119>/Constant'
         *  Merge: '<S7>/Merge4'
         *  Outport: '<Root>/VeVSDR_e_WEDRightSrc'
         *  SignalConversion generated from: '<S102>/RgtWhlSpdSrc'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_e_WEDRightSrc'
         */
        (void)Rte_Write_VeVSDR_e_WEDRightSrc_Value(CeVSDR_e_WEDNoValidSpdSrc);

        /* Logic: '<S247>/AND' incorporates:
         *  Constant: '<S102>/TRUEConstant'
         *  Outport: '<Root>/VeVSDR_b_WEDRightWheelFA'
         *  SignalConversion generated from: '<S102>/RgtWhlSpdFA'
         *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_b_WEDRightWheelFA'
         */
        (void)Rte_Write_VeVSDR_b_WEDRightWheelFA_Value(true);

        /* End of Outputs for SubSystem: '<S1>/VSDO_Outputs' */
        /* End of Outputs for SubSystem: '<S7>/Default1' */
        break;
    }

    /* End of SwitchCase: '<S7>/Switch_Case1' */

    /* Update for UnitDelay: '<S134>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeTFTR;

    /* Update for UnitDelay: '<S189>/UnitDelay1' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
    VSDR_ac_DW.UnitDelay1_DSTATE_eb = rtb_TmpSignalConversionAtVeTRGR;

    /* Update for UnitDelay: '<S134>/UnitDelay1' */
    VSDR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeCSVR;

    /* Update for UnitDelay: '<S12>/UnitDelay1' */
    VSDR_ac_DW.UnitDelay1_DSTATE_e = rtb_TmpSignalConversionAtVeCS_d;

    /* Update for UnitDelay: '<S12>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_m = rtb_VeVSDC_n_StratNoRaw;

    /* Update for UnitDelay: '<S56>/UnitDelay1' */
    VSDR_ac_DW.UnitDelay1_DSTATE_o = VeVSDC_n_PrimNoSgndRaw;

    /* Update for UnitDelay: '<S6>/UnitDelay2' */
    VSDR_ac_DW.UnitDelay2_DSTATE = rtb_TmpSignalConversionAtVeFW_l;

    /* Update for UnitDelay: '<S56>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_f = rtb_Logical2_h;

    /* Update for UnitDelay: '<S234>/UnitDelay1' */
    VSDR_ac_DW.UnitDelay1_DSTATE_a = rtb_TmpSignalConversionAtVeHSER;

    /* Update for UnitDelay: '<S234>/UnitDelay' */
    VSDR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeC_nt;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VSDO_Outputs'
     */
    /* Outport: '<Root>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  Gain: '<S260>/Gain'
     *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_n_WEDLeftWheel'
     */
    (void)Rte_Write_VeVSDR_n_WEDLeftWheel_Value(VeVSDC_n_WEDLeftWheel);

    /* Outport: '<Root>/VeVSDR_n_WEDRightWheel' incorporates:
     *  Gain: '<S263>/Gain'
     *  SignalConversion generated from: '<S1>/VSDO_Outputs_VeVSDR_n_WEDRightWheel'
     */
    (void)Rte_Write_VeVSDR_n_WEDRightWheel_Value(VeVSDC_n_WEDRightWheel);

    /* Outport: '<Root>/VeVSDR_b_PrimNoFA' incorporates:
     *  Logic: '<S248>/AND'
     *  SignalConversion generated from: '<S1>/VeVSDR_b_PrimNoFA'
     */
    (void)Rte_Write_VeVSDR_b_PrimNoFA_Value(rtb_TmpSignalConversionAtVeCS_f);

    /* Outport: '<Root>/VeVSDR_dn_NoDotForInertComp' incorporates:
     *  Gain: '<S253>/Gain'
     *  SignalConversion generated from: '<S1>/VeVSDR_dn_NoDotForInertComp'
     */
    (void)Rte_Write_VeVSDR_dn_NoDotForInertComp_Value
        (rtb_TmpSignalConversionAtVeHSER);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* Outport: '<Root>/VeVSDR_dn_NoDotForInertCompPred' incorporates:
     *  SignalConversion generated from: '<S1>/VeVSDR_dn_NoDotForInertCompPred'
     *  SignalConversion generated from: '<S3>/VeVSDC_dn_NoDotForInertCompPred'
     */
    (void)Rte_Write_VeVSDR_dn_NoDotForInertCompPred_Value
        (rtb_TmpSignalConversionAtVeHSER);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VSDO_Outputs'
     */
    /* Outport: '<Root>/VeVSDR_dn_PrimNodot' incorporates:
     *  Gain: '<S261>/Gain'
     *  SignalConversion generated from: '<S1>/VeVSDR_dn_PrimNodot'
     */
    (void)Rte_Write_VeVSDR_dn_PrimNodot_Value(rtb_TmpSignalConversionAtVeFW_l);

    /* Outport: '<Root>/VeVSDR_dn_StratNodot' incorporates:
     *  Gain: '<S259>/Gain'
     *  SignalConversion generated from: '<S1>/VeVSDR_dn_StratNodot'
     */
    (void)Rte_Write_VeVSDR_dn_StratNodot_Value(rtb_TmpSignalConversionAtVeCS_d);

    /* Outport: '<Root>/VeVSDR_e_PrimNoSrc' incorporates:
     *  DataTypeConversion: '<S249>/DataTypeConversion'
     *  Merge: '<S6>/Merge1'
     *  SignalConversion generated from: '<S1>/VeVSDR_e_PrimNoSrc'
     */
    (void)Rte_Write_VeVSDR_e_PrimNoSrc_Value(VSDR_ac_B.VeVSDC_e_PrimNoSrc);

    /* Outport: '<Root>/VeVSDR_n_NTurb' incorporates:
     *  Gain: '<S256>/Gain'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    (void)Rte_Write_VeVSDR_n_NTurb_Value(rtb_TmpSignalConversionAtVeCSVR);

    /* Outport: '<Root>/VeVSDR_n_NoForInertComp' incorporates:
     *  Gain: '<S258>/Gain'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NoForInertComp'
     */
    (void)Rte_Write_VeVSDR_n_NoForInertComp_Value
        (rtb_TmpSignalConversionAtVeC_nt);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* Outputs for Atomic SubSystem: '<S6>/DigitalLowpassResetEnabled' */
    /* Outport: '<Root>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd'
     *  Switch: '<S49>/Switch2'
     */
    (void)Rte_Write_VeVSDR_n_PrimNoSgndFltrd_Value(rtb_Switch1_k);

    /* End of Outputs for SubSystem: '<S6>/DigitalLowpassResetEnabled' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VSDO_Outputs'
     */
    /* Outport: '<Root>/VeVSDR_n_PrimNoSgndRaw' incorporates:
     *  Gain: '<S257>/Gain'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndRaw'
     */
    (void)Rte_Write_VeVSDR_n_PrimNoSgndRaw_Value(VeVSDC_n_PrimNoSgndRaw);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* Outputs for Atomic SubSystem: '<S5>/DigitalLowpassResetEnabled' */
    /* Outport: '<Root>/VeVSDR_n_StratNoFltrd' incorporates:
     *  SignalConversion generated from: '<S1>/VeVSDR_n_StratNoFltrd'
     *  Switch: '<S13>/Switch2'
     */
    (void)Rte_Write_VeVSDR_n_StratNoFltrd_Value(rtb_TmpSignalConversionAtVeFWDR);

    /* End of Outputs for SubSystem: '<S5>/DigitalLowpassResetEnabled' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, VSDR_CODE) VSDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VSDR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S264>/VeVSDR_n_PrimNoSgndFltrd_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_n_PrimNo = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_e_PrimNoSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const2'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_PrimNo = VSDR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S264>/VeVSDR_b_PrimNoFA_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_b_PrimNo = false;

    /* SignalConversion generated from: '<S264>/VeVSDR_n_StratNoFltrd_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_n_StratN = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_b_StratNoFA_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_b_StratN = false;

    /* SignalConversion generated from: '<S264>/VeVSDR_dn_PrimNodot_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_dn_PrimN = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_n_NTurb_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_n_NTurb_ = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_n_PrimNoSgndRaw_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_n_Prim_c = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_dn_StratNodot_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_dn_Strat = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_e_NTurbSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const10'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_NTurbS = VSDR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S264>/VeVSDR_dn_NoDotForInertComp_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_dn_NoDot = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_dn_NoDotForInertCompPred_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_dn_NoD_b = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_n_NoForInertComp_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_n_NoForI = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_n_WEDLeftWheel_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_n_WEDLef = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_e_WEDLeftSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const15'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_WEDLef = VSDR_ac_ConstB.Const15;

    /* SignalConversion generated from: '<S264>/VeVSDR_b_WEDLeftWheelFA_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_b_WEDLef = false;

    /* SignalConversion generated from: '<S264>/VeVSDR_n_WEDRightWheel_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_n_WEDRig = 0.0F;

    /* SignalConversion generated from: '<S264>/VeVSDR_e_WEDRightSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const18'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_WEDRig = VSDR_ac_ConstB.Const18;

    /* SignalConversion generated from: '<S264>/VeVSDR_b_WEDRightWheelFA_Out_Init' */
    VSDR_ac_B.OutportBufferForVeVSDR_b_WEDRig = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeVSDR_b_PrimNoFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_b_PrimNoFA_Out_Init'
     */
    (void)Rte_Write_VeVSDR_b_PrimNoFA_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_b_PrimNo);

    /* Outport: '<Root>/VeVSDR_b_StratNoFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_b_StratNoFA_Out_Init'
     */
    (void)Rte_Write_VeVSDR_b_StratNoFA_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_b_StratN);

    /* Outport: '<Root>/VeVSDR_b_WEDLeftWheelFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_b_WEDLeftWheelFA_Out_Init'
     */
    (void)Rte_Write_VeVSDR_b_WEDLeftWheelFA_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_b_WEDLef);

    /* Outport: '<Root>/VeVSDR_b_WEDRightWheelFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_b_WEDRightWheelFA_Out_Init'
     */
    (void)Rte_Write_VeVSDR_b_WEDRightWheelFA_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_b_WEDRig);

    /* Outport: '<Root>/VeVSDR_dn_NoDotForInertCompPred' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_dn_NoDotForInertCompPred_Out_Init'
     */
    (void)Rte_Write_VeVSDR_dn_NoDotForInertCompPred_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_dn_NoD_b);

    /* Outport: '<Root>/VeVSDR_dn_NoDotForInertComp' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_dn_NoDotForInertComp_Out_Init'
     */
    (void)Rte_Write_VeVSDR_dn_NoDotForInertComp_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_dn_NoDot);

    /* Outport: '<Root>/VeVSDR_dn_PrimNodot' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_dn_PrimNodot_Out_Init'
     */
    (void)Rte_Write_VeVSDR_dn_PrimNodot_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_dn_PrimN);

    /* Outport: '<Root>/VeVSDR_dn_StratNodot' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_dn_StratNodot_Out_Init'
     */
    (void)Rte_Write_VeVSDR_dn_StratNodot_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_dn_Strat);

    /* Outport: '<Root>/VeVSDR_e_NTurbSrc' incorporates:
     *  SignalConversion generated from: '<S264>/VeVSDR_e_NTurbSrc_Out_Init'
     *  SignalConversion generated from: '<S2>/VeVSDR_e_NTurbSrc_Out_Init'
     */
    (void)Rte_Write_VeVSDR_e_NTurbSrc_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_e_NTurbS);

    /* Outport: '<Root>/VeVSDR_e_PrimNoSrc' incorporates:
     *  SignalConversion generated from: '<S264>/VeVSDR_e_PrimNoSrc_Out_Init'
     *  SignalConversion generated from: '<S2>/VeVSDR_e_PrimNoSrc_Out_Init'
     */
    (void)Rte_Write_VeVSDR_e_PrimNoSrc_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_e_PrimNo);

    /* Outport: '<Root>/VeVSDR_e_WEDLeftSrc' incorporates:
     *  SignalConversion generated from: '<S264>/VeVSDR_e_WEDLeftSrc_Out_Init'
     *  SignalConversion generated from: '<S2>/VeVSDR_e_WEDLeftSrc_Out_Init'
     */
    (void)Rte_Write_VeVSDR_e_WEDLeftSrc_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_e_WEDLef);

    /* Outport: '<Root>/VeVSDR_e_WEDRightSrc' incorporates:
     *  SignalConversion generated from: '<S264>/VeVSDR_e_WEDRightSrc_Out_Init'
     *  SignalConversion generated from: '<S2>/VeVSDR_e_WEDRightSrc_Out_Init'
     */
    (void)Rte_Write_VeVSDR_e_WEDRightSrc_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_e_WEDRig);

    /* Outport: '<Root>/VeVSDR_n_NTurb' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_n_NTurb_Out_Init'
     */
    (void)Rte_Write_VeVSDR_n_NTurb_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_n_NTurb_);

    /* Outport: '<Root>/VeVSDR_n_NoForInertComp' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_n_NoForInertComp_Out_Init'
     */
    (void)Rte_Write_VeVSDR_n_NoForInertComp_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_n_NoForI);

    /* Outport: '<Root>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd_Out_Init'
     */
    (void)Rte_Write_VeVSDR_n_PrimNoSgndFltrd_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_n_PrimNo);

    /* Outport: '<Root>/VeVSDR_n_PrimNoSgndRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndRaw_Out_Init'
     */
    (void)Rte_Write_VeVSDR_n_PrimNoSgndRaw_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_n_Prim_c);

    /* Outport: '<Root>/VeVSDR_n_StratNoFltrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_n_StratNoFltrd_Out_Init'
     */
    (void)Rte_Write_VeVSDR_n_StratNoFltrd_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_n_StratN);

    /* Outport: '<Root>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_n_WEDLeftWheel_Out_Init'
     */
    (void)Rte_Write_VeVSDR_n_WEDLeftWheel_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_n_WEDLef);

    /* Outport: '<Root>/VeVSDR_n_WEDRightWheel' incorporates:
     *  SignalConversion generated from: '<S2>/VeVSDR_n_WEDRightWheel_Out_Init'
     */
    (void)Rte_Write_VeVSDR_n_WEDRightWheel_Value
        (VSDR_ac_B.OutportBufferForVeVSDR_n_WEDRig);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VSDR_CODE) VSDR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        VSDR_ac_B.OutportBufferForVeVSDR_e_PrimNo = CeVSDR_e_PrimNoSrcNotAvail;
        VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoSrcNotAvail;
        VSDR_ac_B.OutportBufferForVeVSDR_e_NTurbS = CeVSDR_e_NturbFromCSVR_CAN;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VSDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S264>/VeVSDR_e_PrimNoSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const2'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_PrimNo = VSDR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S264>/VeVSDR_e_NTurbSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const10'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_NTurbS = VSDR_ac_ConstB.Const10;

    /* SystemInitialize for SignalConversion generated from: '<S264>/VeVSDR_e_WEDLeftSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const15'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_WEDLef = VSDR_ac_ConstB.Const15;

    /* SystemInitialize for SignalConversion generated from: '<S264>/VeVSDR_e_WEDRightSrc_Out_Init' incorporates:
     *  Constant: '<S264>/Const18'
     */
    VSDR_ac_B.OutportBufferForVeVSDR_e_WEDRig = VSDR_ac_ConstB.Const18;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/VSDR_FastTEF'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MngVSDR_CalcSpeeds'
     */
    /* SystemInitialize for Merge: '<S6>/Merge1' */
    VSDR_ac_B.VeVSDC_e_PrimNoSrc = CeVSDR_e_PrimNoSrcNotAvail;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* SystemInitialize for Outport: '<Root>/VeVSDR_e_PrimNoSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeVSDR_e_PrimNoSrc_Value(CeVSDR_e_PrimNoSrcNotAvail);

    /* SystemInitialize for Outport: '<Root>/VeVSDR_e_NTurbSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeVSDR_e_NTurbSrc_Value(CeVSDR_e_NturbFromCSVR_CAN);

    /* SystemInitialize for Outport: '<Root>/VeVSDR_e_WEDLeftSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_15'
     */
    (void)Rte_Write_VeVSDR_e_WEDLeftSrc_Value(CeVSDR_e_WEDWhlSpdFromFrontWhls);

    /* SystemInitialize for Outport: '<Root>/VeVSDR_e_WEDRightSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_18'
     */
    (void)Rte_Write_VeVSDR_e_WEDRightSrc_Value(CeVSDR_e_WEDWhlSpdFromFrontWhls);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
