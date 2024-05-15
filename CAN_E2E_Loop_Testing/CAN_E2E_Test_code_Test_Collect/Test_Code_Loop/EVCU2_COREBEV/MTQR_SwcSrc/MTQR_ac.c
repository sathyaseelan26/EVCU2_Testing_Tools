/*
 * File: MTQR_ac.c
 *
 * Code generated for Simulink model 'MTQR_ac'.
 *
 * Model version                  : 9.240
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:31:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MTQR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_MTQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, MTQR_VAR_INIT) HeMTQR_K_MtrAMaxCpblty = 1.0F;/* Referenced by: '<S95>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) HeMTQR_M_12VBSG_MtrA_MaxTrq = 0.0F;/* Referenced by: '<S186>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) HeMTQR_M_12VBSG_MtrA_MinTrq = 0.0F;/* Referenced by: '<S208>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_AllowConventional = 1;/* Referenced by: '<S67>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_AltMd_CollapseMtrA = 1;/* Referenced by: '<S77>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_AltMd_CollapseMtrAOnly =
    0;                                 /* Referenced by: '<S80>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_AltMd_CollapseMtrB = 1;/* Referenced by: '<S78>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_AltMd_CollapseMtrBOnly =
    0;                                 /* Referenced by: '<S81>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_AltMd_CollpsBothMtrs = 1;/* Referenced by: '<S72>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_MtrA_12VBSGTorqPathEnbl =
    0;                                 /* Referenced by:
                                        * '<S187>/Calib'
                                        * '<S209>/Calib'
                                        */
static volatile CONST(boolean, MTQR_VAR_INIT) HeMTQR_b_MtrA_MinLimits = 0;/* Referenced by: '<S68>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_K_Derate_LD = -0.1F;/* Referenced by: '<S86>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_K_Derate_LD_TempStop =
    -100.0F;                           /* Referenced by: '<S87>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_K_Derate_LU = 0.1F;/* Referenced by: '<S88>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_K_Derate_LU_TempStop =
    100.0F;                            /* Referenced by: '<S89>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_Conv_MtrA_MaxTorq = 93.0F;/* Referenced by: '<S177>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_Conv_MtrA_MinTorq =
    -93.0F;                            /* Referenced by: '<S198>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_Conv_MtrB_MaxTorq =
    270.0F;                            /* Referenced by: '<S222>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_Conv_MtrB_MinTorq =
    -270.0F;                           /* Referenced by: '<S243>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ESSNotActive_MtrA_MaxTorq
    = 93.0F;                           /* Referenced by: '<S178>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ESSNotActive_MtrA_MinTorq
    = 0.0F;                            /* Referenced by: '<S199>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_LimNotActive_MtrA_MinTorq
    = -93.0F;                          /* Referenced by: '<S200>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrBMax_HighTmp_LD =
    -5.0F;                             /* Referenced by: '<S230>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrBMax_HighTmp_LU = 5.0F;/* Referenced by: '<S231>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMaxTrq_FailMode_LD =
    -250.0F;                           /* Referenced by: '<S160>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMaxTrq_FailMode_LU =
    100.0F;                            /* Referenced by: '<S161>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMaxTrq_LD = -0.3F;/* Referenced by:
                                                                      * '<S201>/Calib'
                                                                      * '<S244>/Calib'
                                                                      * '<S164>/Calib'
                                                                      * '<S168>/Calib'
                                                                      */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMaxTrq_LU = 100.0F;/* Referenced by:
                                                                      * '<S202>/Calib'
                                                                      * '<S245>/Calib'
                                                                      * '<S165>/Calib'
                                                                      * '<S169>/Calib'
                                                                      */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMaxTrq_TempStop_LD =
    -250.0F;                           /* Referenced by: '<S172>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMaxTrq_TempStop_LU =
    100.0F;                            /* Referenced by: '<S173>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMinTrq_FailMode_LD =
    -100.0F;                           /* Referenced by: '<S162>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMinTrq_FailMode_LU =
    250.0F;                            /* Referenced by: '<S163>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMinTrq_LD = -100.0F;/* Referenced by:
                                                                      * '<S179>/Calib'
                                                                      * '<S223>/Calib'
                                                                      * '<S166>/Calib'
                                                                      */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMinTrq_LU = 0.3F;/* Referenced by:
                                                                      * '<S180>/Calib'
                                                                      * '<S224>/Calib'
                                                                      * '<S167>/Calib'
                                                                      */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMinTrq_TempStop_LD =
    -100.0F;                           /* Referenced by: '<S174>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrMinTrq_TempStop_LU =
    250.0F;                            /* Referenced by: '<S175>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrTrqMaxWindow = 5.0F;/* Referenced by: '<S147>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrTrqMinWindow = -5.0F;/* Referenced by: '<S148>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrTrq_eBoost_LD = -10.0F;/* Referenced by: '<S170>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_MtrTrq_eBoost_LU = 10.0F;/* Referenced by: '<S171>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_TaMaxReserve = 0.0F;/* Referenced by: '<S149>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_TaMinReserve = 0.0F;/* Referenced by: '<S150>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_TbMaxReserve = 0.0F;/* Referenced by: '<S151>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_TbMinReserve = 0.0F;/* Referenced by: '<S152>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_TcMaxReserve = 0.0F;/* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_TcMinReserve = 0.0F;/* Referenced by: '<S154>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ThrdMtrAMax = 10.0F;/* Referenced by: '<S189>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ThrdMtrAMin = 10.0F;/* Referenced by: '<S211>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ThrdMtrBMax = 1.0F;/* Referenced by: '<S232>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ThrdMtrBMin = 1.0F;/* Referenced by: '<S250>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ThrdMtrCMax = 0.0F;/* Referenced by: '<S258>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_ThrdMtrCMin = 0.0F;/* Referenced by: '<S266>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_VoltCtrl_MtrA_MaxTorq =
    0.0F;                              /* Referenced by: '<S181>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_VoltCtrl_MtrA_MinTorq =
    0.0F;                              /* Referenced by: '<S203>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_VoltCtrl_MtrB_MaxTorq =
    0.0F;                              /* Referenced by: '<S225>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_M_VoltCtrl_MtrB_MinTorq =
    0.0F;                              /* Referenced by: '<S246>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_P_xEboostMtrBPwrLimit =
    70.0F;                             /* Referenced by:
                                        * '<S219>/Calib'
                                        * '<S233>/Calib'
                                        */
static volatile CONST(float32, MTQR_VAR_INIT) KeMTQR_T_InvBTemp_Rcvr = 115.0F;/* Referenced by: '<S234>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_Astrt_MtrAEnbl = 0;/* Referenced by: '<S274>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_Astrt_MtrBEnbl = 0;/* Referenced by: '<S275>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_ESCFrnt_MtrAEnbl = 0;/* Referenced by: '<S276>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_ESCFrnt_MtrBEnbl = 0;/* Referenced by: '<S277>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_ESCRear_MtrAEnbl = 0;/* Referenced by: '<S278>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_ESCRear_MtrCEnbl = 0;/* Referenced by: '<S279>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_InvtrtrASwitchCmd_Ovrrd =
    0;                                 /* Referenced by: '<S73>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_InvtrtrBSwitchCmd_Ovrrd =
    0;                                 /* Referenced by: '<S74>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_NiCL_MtrAEnbl = 0;/* Referenced by: '<S280>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_NiCL_MtrBEnbl = 0;/* Referenced by: '<S281>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_NxCL_MtrAEnbl = 0;/* Referenced by: '<S282>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_NxCL_MtrBEnbl = 0;/* Referenced by: '<S283>/Calib' */
static volatile CONST(boolean, MTQR_VAR_INIT) KeMTQR_b_NxCL_MtrCEnbl = 0;/* Referenced by: '<S284>/Calib' */
static volatile CONST(TeHPMR_e_InvrtrSwitchCmd, MTQR_VAR_INIT)
    KeMTQR_e_InvtrtrASwitchCmd_OvrrdVal = CeHPMR_e_Enable_VoltCntrl;/* Referenced by: '<S75>/Calib' */
static volatile CONST(TeHPMR_e_InvrtrSwitchCmd, MTQR_VAR_INIT)
    KeMTQR_e_InvtrtrBSwitchCmd_OvrrdVal = CeHPMR_e_Enable_VoltCntrl;/* Referenced by: '<S76>/Calib' */
static volatile CONST(float32, MTQR_VAR_INIT) KtMTQR_K_MtrAInvrtTmp_Derate[4] =
{
    1.0F, 0.9F, 0.7F, 0.0F
} ;                    /* Referenced by: '<S96>/KtMTQR_K_MtrAInvrtTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KtMTQR_K_MtrATmp_Derate[4] =
{
    1.0F, 0.9F, 0.7F, 0.0F
} ;                         /* Referenced by: '<S97>/KtMTQR_K_MtrATmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KtMTQR_K_MtrBInvrtTmp_Derate[4] =
{
    1.0F, 0.9F, 0.7F, 0.0F
} ;                   /* Referenced by: '<S107>/KtMTQR_K_MtrBInvrtTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KtMTQR_K_MtrBTmp_Derate[4] =
{
    1.0F, 0.9F, 0.7F, 0.0F
} ;                        /* Referenced by: '<S108>/KtMTQR_K_MtrBTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KtMTQR_K_MtrCInvrtTmp_Derate[4] =
{
    1.0F, 0.9F, 0.7F, 0.0F
} ;                   /* Referenced by: '<S116>/KtMTQR_K_MtrCInvrtTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KtMTQR_K_MtrCTmp_Derate[4] =
{
    1.0F, 0.9F, 0.7F, 0.0F
} ;                        /* Referenced by: '<S117>/KtMTQR_K_MtrCTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KtMTQR_M_MtrBMax_InvTmp[2] =
{
    265.0F, 245.0F
} ;                        /* Referenced by: '<S235>/KtMTQR_M_MtrBMax_InvTmp' */

static volatile CONST(float32, MTQR_VAR_INIT) KxMTQR_K_MtrAInvrtTmp_Derate[4] =
{
    0.0F, 50.0F, 75.0F, 100.0F
} ;                    /* Referenced by: '<S96>/KtMTQR_K_MtrAInvrtTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KxMTQR_K_MtrATmp_Derate[4] =
{
    0.0F, 50.0F, 75.0F, 100.0F
} ;                         /* Referenced by: '<S97>/KtMTQR_K_MtrATmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KxMTQR_K_MtrBInvrtTmp_Derate[4] =
{
    0.0F, 50.0F, 75.0F, 100.0F
} ;                   /* Referenced by: '<S107>/KtMTQR_K_MtrBInvrtTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KxMTQR_K_MtrBTmp_Derate[4] =
{
    0.0F, 50.0F, 75.0F, 100.0F
} ;                        /* Referenced by: '<S108>/KtMTQR_K_MtrBTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KxMTQR_K_MtrCInvrtTmp_Derate[4] =
{
    0.0F, 50.0F, 75.0F, 100.0F
} ;                   /* Referenced by: '<S116>/KtMTQR_K_MtrCInvrtTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KxMTQR_K_MtrCTmp_Derate[4] =
{
    0.0F, 50.0F, 75.0F, 100.0F
} ;                        /* Referenced by: '<S117>/KtMTQR_K_MtrCTmp_Derate' */

static volatile CONST(float32, MTQR_VAR_INIT) KxMTQR_M_MtrBMax_InvTmp[2] =
{
    115.0F, 120.0F
} ;                        /* Referenced by: '<S235>/KtMTQR_M_MtrBMax_InvTmp' */

#define STOP_SEC_CALIB_UNSPECIFIED_MTQR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_HSCL_FEAD1

static VAR(float32, MTQR_VAR_INIT) VaMTQR_r_ElmA_FEADCpblty[16];/* '<S132>/Summation7' */

#endif

#if Rte_SysCon_Variant_HSCL_FEAD1

static VAR(float32, MTQR_VAR_INIT) VaMTQR_r_ElmB_FEADCpblty[16];/* '<S132>/Summation9' */

#endif

#if Rte_SysCon_Variant_HSCL_FEAD1

static VAR(float32, MTQR_VAR_INIT) VaMTQR_r_ElmC_FEADCpblty[16];/* '<S132>/Summation11' */

#endif

static VAR(float32, MTQR_VAR_INIT) VeMTQC_M_TaMax_Arb;/* '<S176>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQC_M_TaMin_Arb;/* '<S197>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQC_M_TbMax_Arb;/* '<S221>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQC_M_TbMin_Arb;/* '<S242>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQC_M_TcMax_Arb;/* '<S20>/ConstantValue' */
static VAR(float32, MTQR_VAR_INIT) VeMTQC_M_TcMin_Arb;/* '<S22>/ConstantValue' */
static VAR(boolean, MTQR_VAR_INIT) VeMTQC_b_MtrALim_BstEnbl;/* '<S286>/Gain' */
static VAR(boolean, MTQR_VAR_INIT) VeMTQC_b_MtrBLim_BstEnbl;/* '<S285>/Gain' */
static VAR(boolean, MTQR_VAR_INIT) VeMTQC_b_MtrCLim_BstEnbl;/* '<S287>/Gain' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrA_DerateFct;/* '<S90>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrA_MaxCpbltyDerateFct;/* '<S91>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrA_MaxCpbltyST_Fct;/* '<S92>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrA_MinCpbltyDerateFct;/* '<S93>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrA_MinCpbltyST_Fct;/* '<S94>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrB_DerateCpblty;/* '<S106>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrB_DerateFct;/* '<S104>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrB_STCpblty;/* '<S105>/Sum3' */
static VAR(float32, MTQR_VAR_INIT) VeMTQR_K_MtrC_DerateFct;/* '<S113>/Sum3' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

VAR(B_MTQR_ac_T, MTQR_VAR_INIT) MTQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"

VAR(DW_MTQR_ac_T, MTQR_VAR_INIT) MTQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MTQR
#include "MemMap.h"
#if Rte_SysCon_Variant_HSCL_FEAD1

static FUNC(void, MTQR_CODE_LOCAL) MTQR_ac_X_Data_and_Fractions1(CONST(float32,
    AUTOMATIC) rtu_xdata[34], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_X_Data_and_Fractions1_MTQR_ac_T, AUTOMATIC, MTQR_VAR_INIT) localB);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_HSCL_FEAD1

static float32 MTQR_ac_frac(float32 Upper, float32 Lower, float32 Input);

#endif

/* Function for Chart: '<S139>/X_Data_and_Fractions1' */
#if Rte_SysCon_Variant_HSCL_FEAD1

static float32 MTQR_ac_frac(float32 Upper, float32 Lower, float32 Input)
{
    /* Graphical Function 'frac': '<S145>:1' */
    /* Transition: '<S145>:122' */
    /* Transition: '<S145>:121' */
    return (Input - Lower) / (Upper - Lower);
}

#endif

/*
 * Output and update for atomic system:
 *    '<S139>/X_Data_and_Fractions1'
 *    '<S288>/X_Data_and_Fractions'
 */
#if Rte_SysCon_Variant_HSCL_FEAD1

static FUNC(void, MTQR_CODE_LOCAL) MTQR_ac_X_Data_and_Fractions1(CONST(float32,
    AUTOMATIC) rtu_xdata[34], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_X_Data_and_Fractions1_MTQR_ac_T, AUTOMATIC, MTQR_VAR_INIT) localB)
{
    /* Chart: '<S139>/X_Data_and_Fractions1' */
    /* Gateway: MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/Interpolate/X_Data_and_Fractions1 */
    /* During: MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/Interpolate/X_Data_and_Fractions1 */
    /* Entry Internal: MTQR_FastTEF/MTQC_6p25/FEAD_LossArb/FEADadj/NewCoeff/Interpolate/X_Data_and_Fractions1 */
    /* Transition: '<S145>:2' */
    if (rtu_value >= rtu_xdata[17])
    {
        /* Transition: '<S145>:3' */
        if (rtu_value >= rtu_xdata[25])
        {
            /* Transition: '<S145>:5' */
            if (rtu_value >= rtu_xdata[29])
            {
                /* Transition: '<S145>:7' */
                if (rtu_value >= rtu_xdata[31])
                {
                    /* Transition: '<S145>:9' */
                    if (rtu_value >= rtu_xdata[32])
                    {
                        /* Transition: '<S145>:11' */
                        if (rtu_value >= rtu_xdata[33])
                        {
                            /* Transition: '<S145>:250' */
                            localB->UpperIndex = 33.0F;
                            localB->LowerIndex = 32.0F;
                            localB->fra = MTQR_ac_frac(rtu_xdata[33], rtu_xdata
                                [32], rtu_xdata[33]);

                            /* Transition: '<S145>:272' */
                        }
                        else
                        {
                            /* Transition: '<S145>:13' */
                            localB->UpperIndex = 33.0F;
                            localB->LowerIndex = 32.0F;
                            localB->fra = MTQR_ac_frac(rtu_xdata[33], rtu_xdata
                                [32], rtu_value);
                        }
                    }
                    else
                    {
                        /* Transition: '<S145>:26' */
                        localB->UpperIndex = 32.0F;
                        localB->LowerIndex = 31.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[32], rtu_xdata[31],
                            rtu_value);

                        /* Transition: '<S145>:39' */
                        /* Transition: '<S145>:230' */
                    }
                }
                else
                {
                    /* Transition: '<S145>:24' */
                    if (rtu_value >= rtu_xdata[30])
                    {
                        /* Transition: '<S145>:12' */
                        localB->UpperIndex = 31.0F;
                        localB->LowerIndex = 30.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[31], rtu_xdata[30],
                            rtu_value);

                        /* Transition: '<S145>:29' */
                        /* Transition: '<S145>:14' */
                        /* Transition: '<S145>:39' */
                        /* Transition: '<S145>:230' */
                    }
                    else
                    {
                        /* Transition: '<S145>:15' */
                        /* Transition: '<S145>:27' */
                        localB->UpperIndex = 30.0F;
                        localB->LowerIndex = 29.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[30], rtu_xdata[29],
                            rtu_value);

                        /* Transition: '<S145>:14' */
                        /* Transition: '<S145>:39' */
                        /* Transition: '<S145>:230' */
                    }
                }
            }
            else
            {
                /* Transition: '<S145>:23' */
                if (rtu_value >= rtu_xdata[27])
                {
                    /* Transition: '<S145>:10' */
                    if (rtu_value >= rtu_xdata[28])
                    {
                        /* Transition: '<S145>:16' */
                        localB->UpperIndex = 29.0F;
                        localB->LowerIndex = 28.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[29], rtu_xdata[28],
                            rtu_value);

                        /* Transition: '<S145>:33' */
                    }
                    else
                    {
                        /* Transition: '<S145>:32' */
                        localB->UpperIndex = 28.0F;
                        localB->LowerIndex = 27.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[28], rtu_xdata[27],
                            rtu_value);

                        /* Transition: '<S145>:34' */
                    }
                }
                else
                {
                    /* Transition: '<S145>:30' */
                    if (rtu_value >= rtu_xdata[26])
                    {
                        /* Transition: '<S145>:31' */
                        localB->UpperIndex = 27.0F;
                        localB->LowerIndex = 26.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[27], rtu_xdata[26],
                            rtu_value);

                        /* Transition: '<S145>:37' */
                    }
                    else
                    {
                        /* Transition: '<S145>:36' */
                        localB->UpperIndex = 26.0F;
                        localB->LowerIndex = 25.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[26], rtu_xdata[25],
                            rtu_value);

                        /* Transition: '<S145>:17' */
                    }

                    /* Transition: '<S145>:35' */
                    /* Transition: '<S145>:34' */
                }

                /* Transition: '<S145>:28' */
                /* Transition: '<S145>:29' */
                /* Transition: '<S145>:14' */
                /* Transition: '<S145>:39' */
                /* Transition: '<S145>:230' */
            }

            /* Transition: '<S145>:53' */
            /* Transition: '<S145>:67' */
        }
        else
        {
            /* Transition: '<S145>:22' */
            if (rtu_value >= rtu_xdata[21])
            {
                /* Transition: '<S145>:8' */
                if (rtu_value >= rtu_xdata[23])
                {
                    /* Transition: '<S145>:42' */
                    if (rtu_value >= rtu_xdata[24])
                    {
                        /* Transition: '<S145>:45' */
                        localB->UpperIndex = 25.0F;
                        localB->LowerIndex = 24.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[25], rtu_xdata[24],
                            rtu_value);

                        /* Transition: '<S145>:47' */
                    }
                    else
                    {
                        /* Transition: '<S145>:46' */
                        localB->UpperIndex = 24.0F;
                        localB->LowerIndex = 23.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[24], rtu_xdata[23],
                            rtu_value);

                        /* Transition: '<S145>:48' */
                    }
                }
                else
                {
                    /* Transition: '<S145>:43' */
                    if (rtu_value >= rtu_xdata[22])
                    {
                        /* Transition: '<S145>:44' */
                        localB->UpperIndex = 23.0F;
                        localB->LowerIndex = 22.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[23], rtu_xdata[22],
                            rtu_value);

                        /* Transition: '<S145>:40' */
                    }
                    else
                    {
                        /* Transition: '<S145>:49' */
                        localB->UpperIndex = 22.0F;
                        localB->LowerIndex = 21.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[22], rtu_xdata[21],
                            rtu_value);

                        /* Transition: '<S145>:50' */
                    }

                    /* Transition: '<S145>:51' */
                    /* Transition: '<S145>:48' */
                }

                /* Transition: '<S145>:52' */
                /* Transition: '<S145>:67' */
            }
            else
            {
                /* Transition: '<S145>:54' */
                if (rtu_value >= rtu_xdata[19])
                {
                    /* Transition: '<S145>:55' */
                    if (rtu_value >= rtu_xdata[20])
                    {
                        /* Transition: '<S145>:58' */
                        localB->UpperIndex = 21.0F;
                        localB->LowerIndex = 20.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[21], rtu_xdata[20],
                            rtu_value);

                        /* Transition: '<S145>:57' */
                    }
                    else
                    {
                        /* Transition: '<S145>:59' */
                        localB->UpperIndex = 20.0F;
                        localB->LowerIndex = 19.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[20], rtu_xdata[19],
                            rtu_value);

                        /* Transition: '<S145>:60' */
                    }

                    /* Transition: '<S145>:65' */
                }
                else
                {
                    /* Transition: '<S145>:56' */
                    if (rtu_value >= rtu_xdata[18])
                    {
                        /* Transition: '<S145>:61' */
                        localB->UpperIndex = 19.0F;
                        localB->LowerIndex = 18.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[19], rtu_xdata[18],
                            rtu_value);

                        /* Transition: '<S145>:63' */
                    }
                    else
                    {
                        /* Transition: '<S145>:62' */
                        localB->UpperIndex = 18.0F;
                        localB->LowerIndex = 17.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[18], rtu_xdata[17],
                            rtu_value);

                        /* Transition: '<S145>:18' */
                    }

                    /* Transition: '<S145>:64' */
                }

                /* Transition: '<S145>:66' */
            }
        }

        /* Transition: '<S145>:68' */
        /* Transition: '<S145>:113' */
        /* Transition: '<S145>:19' */
    }
    else
    {
        /* Transition: '<S145>:4' */
        if (rtu_value >= rtu_xdata[9])
        {
            /* Transition: '<S145>:21' */
            if (rtu_value >= rtu_xdata[13])
            {
                /* Transition: '<S145>:70' */
                if (rtu_value >= rtu_xdata[15])
                {
                    /* Transition: '<S145>:75' */
                    if (rtu_value >= rtu_xdata[16])
                    {
                        /* Transition: '<S145>:77' */
                        localB->UpperIndex = 17.0F;
                        localB->LowerIndex = 16.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[17], rtu_xdata[16],
                            rtu_value);

                        /* Transition: '<S145>:78' */
                    }
                    else
                    {
                        /* Transition: '<S145>:76' */
                        localB->UpperIndex = 16.0F;
                        localB->LowerIndex = 15.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[16], rtu_xdata[15],
                            rtu_value);

                        /* Transition: '<S145>:79' */
                    }

                    /* Transition: '<S145>:85' */
                }
                else
                {
                    /* Transition: '<S145>:71' */
                    /* Transition: '<S145>:80' */
                    if (rtu_value >= rtu_xdata[14])
                    {
                        /* Transition: '<S145>:81' */
                        localB->UpperIndex = 15.0F;
                        localB->LowerIndex = 14.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[15], rtu_xdata[14],
                            rtu_value);

                        /* Transition: '<S145>:82' */
                    }
                    else
                    {
                        /* Transition: '<S145>:20' */
                        localB->UpperIndex = 14.0F;
                        localB->LowerIndex = 13.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[14], rtu_xdata[13],
                            rtu_value);

                        /* Transition: '<S145>:83' */
                    }

                    /* Transition: '<S145>:84' */
                }

                /* Transition: '<S145>:6' */
            }
            else
            {
                /* Transition: '<S145>:86' */
                if (rtu_value >= rtu_xdata[11])
                {
                    /* Transition: '<S145>:87' */
                    if (rtu_value >= rtu_xdata[12])
                    {
                        /* Transition: '<S145>:90' */
                        localB->UpperIndex = 13.0F;
                        localB->LowerIndex = 12.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[13], rtu_xdata[12],
                            rtu_value);

                        /* Transition: '<S145>:91' */
                        /* Transition: '<S145>:72' */
                    }
                    else
                    {
                        /* Transition: '<S145>:88' */
                        localB->UpperIndex = 12.0F;
                        localB->LowerIndex = 11.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[12], rtu_xdata[11],
                            rtu_value);

                        /* Transition: '<S145>:89' */
                        /* Transition: '<S145>:72' */
                    }
                }
                else
                {
                    /* Transition: '<S145>:92' */
                    if (rtu_value >= rtu_xdata[10])
                    {
                        /* Transition: '<S145>:93' */
                        localB->UpperIndex = 11.0F;
                        localB->LowerIndex = 10.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[11], rtu_xdata[10],
                            rtu_value);

                        /* Transition: '<S145>:89' */
                        /* Transition: '<S145>:72' */
                    }
                    else
                    {
                        /* Transition: '<S145>:94' */
                        localB->UpperIndex = 10.0F;
                        localB->LowerIndex = 9.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[10], rtu_xdata[9],
                            rtu_value);

                        /* Transition: '<S145>:95' */
                    }
                }

                /* Transition: '<S145>:74' */
            }

            /* Transition: '<S145>:69' */
        }
        else
        {
            /* Transition: '<S145>:73' */
            if (rtu_value >= rtu_xdata[5])
            {
                /* Transition: '<S145>:96' */
                if (rtu_value >= rtu_xdata[7])
                {
                    /* Transition: '<S145>:99' */
                    if (rtu_value >= rtu_xdata[8])
                    {
                        /* Transition: '<S145>:103' */
                        localB->UpperIndex = 9.0F;
                        localB->LowerIndex = 8.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[9], rtu_xdata[8],
                            rtu_value);

                        /* Transition: '<S145>:100' */
                    }
                    else
                    {
                        /* Transition: '<S145>:102' */
                        localB->UpperIndex = 8.0F;
                        localB->LowerIndex = 7.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[8], rtu_xdata[7],
                            rtu_value);

                        /* Transition: '<S145>:101' */
                    }

                    /* Transition: '<S145>:109' */
                    /* Transition: '<S145>:119' */
                    /* Transition: '<S145>:97' */
                }
                else
                {
                    /* Transition: '<S145>:104' */
                    if (rtu_value >= rtu_xdata[6])
                    {
                        /* Transition: '<S145>:105' */
                        localB->UpperIndex = 7.0F;
                        localB->LowerIndex = 6.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[7], rtu_xdata[6],
                            rtu_value);

                        /* Transition: '<S145>:107' */
                        /* Transition: '<S145>:97' */
                    }
                    else
                    {
                        /* Transition: '<S145>:106' */
                        localB->UpperIndex = 6.0F;
                        localB->LowerIndex = 5.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[6], rtu_xdata[5],
                            rtu_value);
                    }
                }

                /* Transition: '<S145>:120' */
                /* Transition: '<S145>:259' */
                /* Transition: '<S145>:261' */
            }
            else
            {
                /* Transition: '<S145>:110' */
                if (rtu_value >= rtu_xdata[3])
                {
                    /* Transition: '<S145>:111' */
                    if (rtu_value >= rtu_xdata[4])
                    {
                        /* Transition: '<S145>:115' */
                        localB->UpperIndex = 5.0F;
                        localB->LowerIndex = 4.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[5], rtu_xdata[4],
                            rtu_value);

                        /* Transition: '<S145>:41' */
                    }
                    else
                    {
                        /* Transition: '<S145>:114' */
                        localB->UpperIndex = 4.0F;
                        localB->LowerIndex = 3.0F;
                        localB->fra = MTQR_ac_frac(rtu_xdata[4], rtu_xdata[3],
                            rtu_value);
                    }

                    /* Transition: '<S145>:270' */
                    /* Transition: '<S145>:269' */
                }
                else
                {
                    /* Transition: '<S145>:112' */
                    if (rtu_value >= rtu_xdata[1])
                    {
                        /* Transition: '<S145>:116' */
                        if (rtu_value >= rtu_xdata[2])
                        {
                            /* Transition: '<S145>:38' */
                            localB->UpperIndex = 3.0F;
                            localB->LowerIndex = 2.0F;
                            localB->fra = MTQR_ac_frac(rtu_xdata[3], rtu_xdata[2],
                                rtu_value);

                            /* Transition: '<S145>:270' */
                            /* Transition: '<S145>:269' */
                        }
                        else
                        {
                            /* Transition: '<S145>:265' */
                            localB->UpperIndex = 2.0F;
                            localB->LowerIndex = 1.0F;
                            localB->fra = MTQR_ac_frac(rtu_xdata[2], rtu_xdata[1],
                                rtu_value);

                            /* Transition: '<S145>:268' */
                            /* Transition: '<S145>:269' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S145>:108' */
                        if (rtu_value >= rtu_xdata[0])
                        {
                            /* Transition: '<S145>:118' */
                            localB->UpperIndex = 1.0F;
                            localB->LowerIndex = 0.0F;
                            localB->fra = MTQR_ac_frac(rtu_xdata[1], rtu_xdata[0],
                                rtu_value);

                            /* Transition: '<S145>:262' */
                            /* Transition: '<S145>:261' */
                        }
                        else
                        {
                            /* Transition: '<S145>:255' */
                            localB->UpperIndex = 1.0F;
                            localB->LowerIndex = 0.0F;
                            localB->fra = MTQR_ac_frac(rtu_xdata[1], rtu_xdata[0],
                                rtu_xdata[0]);

                            /* Transition: '<S145>:259' */
                            /* Transition: '<S145>:261' */
                        }
                    }
                }
            }

            /* Transition: '<S145>:98' */
            /* Transition: '<S145>:19' */
        }
    }

    /* End of Chart: '<S139>/X_Data_and_Fractions1' */
}

#endif

/* Model step function for TID1 */
FUNC(void, MTQR_CODE) MTQR_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 rtb_VariantMerge_For_Variant_Source_Vari[64];
    float32 rtb_Product2[16];
    float32 rtb_Product2_l[16];
    float32 rtb_Product3[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_M_MtrBMi[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_M_MtrCMa[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_M_MtrCMi[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_n_MtrACp[16];
    float32 rtb_TmpSignalConversionAtVaMTIR_n_MtrBCp[16];
    float32 rtb_Switch[2];
    float32 rtb_Switch15[2];
    float32 rtb_Maximum9;
    float32 rtb_MinMax4_i;
    float32 rtb_MinMax4_p;
    float32 rtb_Product_m4;
    float32 rtb_TmpSignalConversionAtVeINVR_T_MtrB_I;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrB_M;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrC_M;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrC_d;
    float32 tmpRead_7;
    float32 tmpRead_8;
    float32 tmpRead_9;
    float32 tmpRead_a;
    float32 tmpRead_b;
    float32 tmpRead_c;
    float32 tmpRead_d;
    float32 tmpRead_e;
    float32 tmpRead_f;
    float32 tmpRead_g;
    float32 tmpRead_h;
    float32 tmpRead_i;
    TeEBMR_e_eBoostStatus tmpRead_6;
    TeESSR_e_EngStartStopSt tmpRead_3;
    TeHPMR_e_InvrtrSwitchCmd tmpRead_4;
    TeHPMR_e_InvrtrSwitchCmd tmpRead_5;
    TeHPMR_e_PropSysMode tmpRead;
    TeINVR_e_MtrInvrtrSt tmpRead_0;
    TeINVR_e_MtrInvrtrSt tmpRead_1;
    TeINVR_e_MtrInvrtrSt tmpRead_2;
    TePTAR_e_ImmediateTorqRespType tmpRead_k;
    boolean rtb_Comparison2_pp[2];
    boolean rtb_AND_by;
    boolean rtb_AND_ds;
    boolean rtb_AND_et;
    boolean rtb_AND_ha;
    boolean rtb_AND_it;
    boolean rtb_AND_l;
    boolean rtb_AND_m;
    boolean rtb_AND_p;
    boolean rtb_Comparison1;
    boolean rtb_Comparison1_p;
    boolean rtb_Comparison2_p;
    boolean rtb_Comparison4;
    boolean rtb_Logical1;
    boolean rtb_Logical10;
    boolean rtb_Logical11;
    boolean rtb_Logical1_o;
    boolean rtb_Logical3_l;
    boolean rtb_Logical4;
    boolean rtb_Logical5;
    boolean rtb_Logical8;
    boolean rtb_TmpSignalConversionAtVeESSR_b_Disabl;
    boolean rtb_TmpSignalConversionAtVeINVR_b_DMPI_T;
    boolean tmpRead_j;

#if Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_ArrayAssignment1[16];

#endif

#if Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_ArrayAssignment2[16];

#endif

#if Rte_SysCon_Variant_HSCL_FEAD1

    sint16 s139_iter;

#endif

    float32 rtb_MinMax1_e[2];
    float32 rtb_Switch13[2];
    float32 rtb_Switch2_fv[2];
    float32 rtb_Sum_a4;
    float32 rtb_VeMTQC_M_MtrMaxTrq_LD;
    float32 rtb_VeMTQC_M_MtrMaxTrq_LU;
    float32 rtb_VeMTQC_M_MtrMinTrq_LD;
    float32 rtb_VeMTQC_M_MtrMinTrq_LU;
    boolean rtb_OR_l[2];
    boolean rtb_NotEqual1_d;
    boolean rtb_TmpSignalConversionAtVeRTMR_b_DsblMt;

#if Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_Switch1_b[16];

#endif

#if Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_ArrayAssignment3[16];

#endif

    float32 rtb_Sum_aj[32];

#if Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_Sum2_l[32];

#endif

    sint32 i;
    float32 Gain_hk[16];
    float32 Product2[16];
    float32 Product3[16];
    float32 Product7[16];
    float32 rtb_TmpSignalConversionAtMedTED_FEAD_Ele[3];
    float32 rtb_Sum2[2];
    float32 VeMTQR_M_TbMax;
    float32 VeMTQR_M_TbMin;
    float32 rtb_Sum2_i3;
    float32 rtb_Sum2_j;
    float32 rtb_Switch1_m;
    float32 rtb_Switch2_bp;
    float32 rtb_Switch_kx_idx_1;
    float32 rtb_Switch_kx_idx_2;
    float32 rtb_Switch_kx_idx_3;
    float32 rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T;
    float32 rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T;
    float32 rtb_TmpSignalConversionAtVeHTDR_M_MtrC_T;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
    float32 rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h;
    boolean rtb_AND_dd_tmp;
    boolean rtb_AND_g5_tmp;
    boolean rtb_AND_p_tmp;
    boolean rtb_Logical5_l_idx_1;
    boolean rtb_Logical5_l_idx_2;
    boolean rtb_TmpSignalConversionAtVeESSR_b_AStrtP;

    /* Inport: '<Root>/VeRTMR_b_DsblMtrA' */
    (void)Rte_Read_VeRTMR_b_DsblMtrA_Value(&rtb_Comparison1);

    /* Inport: '<Root>/VeHPMR_e_InvrtrBSwitchCmd' */
    (void)Rte_Read_VeHPMR_e_InvrtrBSwitchCmd_Value(&tmpRead_5);

    /* Inport: '<Root>/VeHPMR_e_InvrtrASwitchCmd' */
    (void)Rte_Read_VeHPMR_e_InvrtrASwitchCmd_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSRAR_b_MtrAZeroTrqActv' */
    (void)Rte_Read_VeSRAR_b_MtrAZeroTrqActv_Value(&rtb_Comparison2_p);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_1);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHPMR_e_PropSysMode' */
    (void)Rte_Read_VeHPMR_e_PropSysMode_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MTQR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeHTDR_M_MtrA_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_MtrB_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_TorqCmnd_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T);

    /* SignalConversion generated from: '<S1>/VeHTDR_M_MtrC_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrC_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrC_TorqCmnd_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_MtrC_T);

    /* SignalConversion generated from: '<S1>/VaMTIR_n_MtrACpbltySpd' incorporates:
     *  Inport: '<Root>/VaMTIR_n_MtrACpbltySpd'
     */
    (void)Rte_Read_VaMTIR_n_MtrACpbltySpd_Value
        (rtb_TmpSignalConversionAtVaMTIR_n_MtrACp);

    /* SignalConversion generated from: '<S1>/VaMTIR_n_MtrBCpbltySpd' incorporates:
     *  Inport: '<Root>/VaMTIR_n_MtrBCpbltySpd'
     */
    (void)Rte_Read_VaMTIR_n_MtrBCpbltySpd_Value
        (rtb_TmpSignalConversionAtVaMTIR_n_MtrBCp);

    /* SignalConversion generated from: '<S1>/MedTED_FEAD_Elements' */
    Rte_IrvRead_MTQR_FastTEF_FEAD_Elements_write_IRV
        (rtb_TmpSignalConversionAtMedTED_FEAD_Ele);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrA_TorqAchieved_AEMD' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved_AEMD'
     */
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_AEMD_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrA_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrC_MinTorqRaw' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_MinTorqRaw'
     */
    (void)Rte_Read_VeMTIR_M_MtrC_MinTorqRaw_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrC_M);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrC_MaxTorqRaw' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_MaxTorqRaw'
     */
    (void)Rte_Read_VeMTIR_M_MtrC_MaxTorqRaw_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrC_d);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrB_MinTorqRaw' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrB_MinTorqRaw'
     */
    (void)Rte_Read_VeMTIR_M_MtrB_MinTorqRaw_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrB_M);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrB_MaxTorqRaw' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrB_MaxTorqRaw'
     */
    (void)Rte_Read_VeMTIR_M_MtrB_MaxTorqRaw_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrA_MinTorqRaw' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrA_MinTorqRaw'
     */
    (void)Rte_Read_VeMTIR_M_MtrA_MinTorqRaw_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M);

    /* SignalConversion generated from: '<S1>/VeMTIR_M_MtrA_MaxTorqRaw' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrA_MaxTorqRaw'
     */
    (void)Rte_Read_VeMTIR_M_MtrA_MaxTorqRaw_Value
        (&rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f);

    /* SignalConversion generated from: '<S1>/VaMTIR_M_MtrCMinCpblty' incorporates:
     *  Inport: '<Root>/VaMTIR_M_MtrCMinCpblty'
     */
    (void)Rte_Read_VaMTIR_M_MtrCMinCpblty_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrCMi);

    /* SignalConversion generated from: '<S1>/VaMTIR_M_MtrCMaxCpblty' incorporates:
     *  Inport: '<Root>/VaMTIR_M_MtrCMaxCpblty'
     */
    (void)Rte_Read_VaMTIR_M_MtrCMaxCpblty_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrCMa);

    /* SignalConversion generated from: '<S1>/VaMTIR_M_MtrBMinCpblty' incorporates:
     *  Inport: '<Root>/VaMTIR_M_MtrBMinCpblty'
     */
    (void)Rte_Read_VaMTIR_M_MtrBMinCpblty_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrBMi);

    /* SignalConversion generated from: '<S1>/VaMTIR_M_MtrBMaxCpblty' incorporates:
     *  Inport: '<Root>/VaMTIR_M_MtrBMaxCpblty'
     */
    (void)Rte_Read_VaMTIR_M_MtrBMaxCpblty_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa);

    /* SignalConversion generated from: '<S1>/VaMTIR_M_MtrAMinCpblty' incorporates:
     *  Inport: '<Root>/VaMTIR_M_MtrAMinCpblty'
     */
    (void)Rte_Read_VaMTIR_M_MtrAMinCpblty_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi);

    /* SignalConversion generated from: '<S1>/VaMTIR_M_MtrAMaxCpblty' incorporates:
     *  Inport: '<Root>/VaMTIR_M_MtrAMaxCpblty'
     */
    (void)Rte_Read_VaMTIR_M_MtrAMaxCpblty_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa);

    /* SignalConversion generated from: '<S1>/VeINVR_T_MtrB_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value
        (&rtb_TmpSignalConversionAtVeINVR_T_MtrB_I);

    /* SignalConversion generated from: '<S1>/VeESSR_b_AStrtPBatBoostReq' incorporates:
     *  Inport: '<Root>/VeESSR_b_AStrtPBatBoostReq'
     */
    (void)Rte_Read_VeESSR_b_AStrtPBatBoostReq_Value
        (&rtb_TmpSignalConversionAtVeESSR_b_AStrtP);

    /* SignalConversion generated from: '<S1>/VeINVR_b_DMPI_TempStopFlag' incorporates:
     *  Inport: '<Root>/VeINVR_b_DMPI_TempStopFlag'
     */
    (void)Rte_Read_VeINVR_b_DMPI_TempStopFlag_Value
        (&rtb_TmpSignalConversionAtVeINVR_b_DMPI_T);

    /* SignalConversion generated from: '<S1>/VeRTMR_b_DsblMtr_OITR' incorporates:
     *  Inport: '<Root>/VeRTMR_b_DsblMtr_OITR'
     */
    (void)Rte_Read_VeRTMR_b_DsblMtr_OITR_Value
        (&rtb_TmpSignalConversionAtVeRTMR_b_DsblMt);

    /* SignalConversion generated from: '<S1>/VeESSR_b_DisableMtrA' incorporates:
     *  Inport: '<Root>/VeESSR_b_DisableMtrA'
     */
    (void)Rte_Read_VeESSR_b_DisableMtrA_Value
        (&rtb_TmpSignalConversionAtVeESSR_b_Disabl);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* RelationalOperator: '<S5>/Comparison1' incorporates:
     *  Constant: '<S58>/Constant'
     *  Inport: '<Root>/VeHPMR_e_PropSysMode'
     */
    rtb_Comparison1_p = (((uint32)tmpRead) == CeHPMR_e_Conventional);

    /* Logic: '<S5>/Logical8' incorporates:
     *  Constant: '<S54>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  RelationalOperator: '<S5>/Comparison2'
     */
    rtb_Logical8 = (((((uint32)tmpRead_0) == CeINVR_e_InverterFaulted) ||
                     rtb_Comparison2_p) || rtb_Comparison1);

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S73>/Calib'
     *  Constant: '<S75>/Calib'
     */
    if (KeMTQR_b_InvtrtrASwitchCmd_Ovrrd)
    {
        tmpRead_4 = KeMTQR_e_InvtrtrASwitchCmd_OvrrdVal;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* RelationalOperator: '<S6>/Comparison1' incorporates:
     *  Constant: '<S71>/Constant'
     */
    rtb_Comparison1 = (((uint32)tmpRead_4) == CeHPMR_e_Enable_VoltCntrl);

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S74>/Calib'
     *  Constant: '<S76>/Calib'
     *  Inport: '<Root>/VeHPMR_e_InvrtrBSwitchCmd'
     */
    if (KeMTQR_b_InvtrtrBSwitchCmd_Ovrrd)
    {
        tmpRead_4 = KeMTQR_e_InvtrtrBSwitchCmd_OvrrdVal;
    }
    else
    {
        tmpRead_4 = tmpRead_5;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* RelationalOperator: '<S6>/Comparison2' incorporates:
     *  Constant: '<S71>/Constant'
     */
    rtb_Comparison2_p = (CeHPMR_e_Enable_VoltCntrl == ((uint32)tmpRead_4));

    /* If: '<S6>/If' incorporates:
     *  Constant: '<S72>/Calib'
     *  Logic: '<S6>/Logical2'
     *  Logic: '<S6>/Logical3'
     */
    if ((rtb_Comparison1 || rtb_Comparison2_p) && (HeMTQR_b_AltMd_CollpsBothMtrs))
    {
        /* Outputs for IfAction SubSystem: '<S6>/CollapseBothMotors' incorporates:
         *  ActionPort: '<S69>/ActionPort'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S77>/Calib'
         *  SignalConversion generated from: '<S69>/MtrAVolt_CollapseTrue'
         */
        rtb_Comparison1 = HeMTQR_b_AltMd_CollapseMtrA;

        /* Merge: '<S6>/Merge1' incorporates:
         *  Constant: '<S78>/Calib'
         *  SignalConversion generated from: '<S69>/MtrBVolt_CollapseTrue'
         */
        rtb_Comparison2_p = HeMTQR_b_AltMd_CollapseMtrB;

        /* End of Outputs for SubSystem: '<S6>/CollapseBothMotors' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S6>/CollapseMotorsSelectively' incorporates:
         *  ActionPort: '<S70>/ActionPort'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S80>/Calib'
         *  Switch: '<S70>/Switch4'
         */
        rtb_Comparison1 = (rtb_Comparison1 && (HeMTQR_b_AltMd_CollapseMtrAOnly));

        /* Merge: '<S6>/Merge1' incorporates:
         *  Constant: '<S81>/Calib'
         *  Switch: '<S70>/Switch1'
         */
        rtb_Comparison2_p = (rtb_Comparison2_p &&
                             (HeMTQR_b_AltMd_CollapseMtrBOnly));

        /* End of Outputs for SubSystem: '<S6>/CollapseMotorsSelectively' */
    }

    /* End of If: '<S6>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTHMR_r_HvHrnMtrCPowerLimit' */
    (void)Rte_Read_VeTHMR_r_HvHrnMtrCPowerLimit_Value(&rtb_MinMax4_p);

    /* Inport: '<Root>/VeTHMR_r_HvHrnMtrBPowerLimit' */
    (void)Rte_Read_VeTHMR_r_HvHrnMtrBPowerLimit_Value(&rtb_Product_m4);

    /* Inport: '<Root>/VeTHMR_r_HvHrnMtrAPowerLimit' */
    (void)Rte_Read_VeTHMR_r_HvHrnMtrAPowerLimit_Value(&rtb_Sum2_i3);

    /* Inport: '<Root>/VeINVR_T_MtrC_Temp' */
    (void)Rte_Read_VeINVR_T_MtrC_Temp_Value(&rtb_Sum2_j);

    /* Inport: '<Root>/VeINVR_T_MtrB_Temp' */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value(&rtb_VeMTQC_M_MtrMaxTrq_LD);

    /* Inport: '<Root>/VeINVR_T_MtrA_Temp' */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value(&rtb_VeMTQC_M_MtrMinTrq_LU);

    /* Inport: '<Root>/VeINVR_T_MtrC_InvrtrTemp' */
    (void)Rte_Read_VeINVR_T_MtrC_InvrtrTemp_Value(&rtb_VeMTQC_M_MtrMaxTrq_LU);

    /* Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp' */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value(&rtb_VeMTQC_M_MtrMinTrq_LD);

    /* Inport: '<Root>/VeEBMR_e_eBoostStatus' */
    (void)Rte_Read_VeEBMR_e_eBoostStatus_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSRAR_b_MtrCZeroTrqActv' */
    (void)Rte_Read_VeSRAR_b_MtrCZeroTrqActv_Value(&rtb_AND_it);

    /* Inport: '<Root>/VeSRAR_b_MtrBZeroTrqActv' */
    (void)Rte_Read_VeSRAR_b_MtrBZeroTrqActv_Value(&rtb_AND_et);

    /* Inport: '<Root>/VeRTMR_b_DsblMtrB' */
    (void)Rte_Read_VeRTMR_b_DsblMtrB_Value(&rtb_AND_p);

    /* Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrC_InvrtrSt_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MTQR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* Logic: '<S24>/Logical10' incorporates:
     *  Constant: '<S67>/Calib'
     *  Logic: '<S5>/Logical7'
     */
    rtb_Logical10 = (rtb_Comparison1_p && (HeMTQR_b_AllowConventional));

    /* Logic: '<S24>/Logical11' incorporates:
     *  Logic: '<S5>/Logical2'
     */
    rtb_Logical11 = ((rtb_Logical8 || rtb_Comparison1) || rtb_Logical10);

    /* Logic: '<S5>/Logical5' */
    rtb_Logical5 = ((rtb_TmpSignalConversionAtVeINVR_b_DMPI_T || rtb_Logical11) ||
                    rtb_TmpSignalConversionAtVeESSR_b_Disabl);

    /* Outputs for Atomic SubSystem: '<S5>/EdgeFalling1' */
    /* Logic: '<S59>/OR1' */
    rtb_NotEqual1_d = !rtb_Logical5;

    /* Logic: '<S59>/AND' incorporates:
     *  Logic: '<S59>/OR1'
     *  UnitDelay: '<S59>/UnitDelay'
     */
    rtb_AND_ds = (rtb_NotEqual1_d && (MTQR_ac_DW.UnitDelay_DSTATE_jf));

    /* Update for UnitDelay: '<S59>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_jf = rtb_Logical5;

    /* End of Outputs for SubSystem: '<S5>/EdgeFalling1' */

    /* Logic: '<S5>/Logical4' incorporates:
     *  Constant: '<S55>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  RelationalOperator: '<S5>/Comparison3'
     */
    rtb_Logical4 = (((((uint32)tmpRead_1) == CeINVR_e_InverterFaulted) ||
                     rtb_AND_p) || rtb_AND_et);

    /* Logic: '<S5>/Logical3' */
    rtb_Logical3_l = (((rtb_Logical4 || rtb_Comparison2_p) || rtb_Comparison1_p)
                      || rtb_TmpSignalConversionAtVeINVR_b_DMPI_T);

    /* Outputs for Atomic SubSystem: '<S5>/EdgeFalling2' */
    /* Logic: '<S60>/OR1' */
    rtb_AND_dd_tmp = !rtb_Logical3_l;

    /* Logic: '<S60>/AND' incorporates:
     *  Logic: '<S60>/OR1'
     *  UnitDelay: '<S60>/UnitDelay'
     */
    rtb_AND_ha = (rtb_AND_dd_tmp && (MTQR_ac_DW.UnitDelay_DSTATE_dl));

    /* Update for UnitDelay: '<S60>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_dl = rtb_Logical3_l;

    /* End of Outputs for SubSystem: '<S5>/EdgeFalling2' */

    /* Logic: '<S5>/Logical6' incorporates:
     *  Constant: '<S68>/Calib'
     */
    rtb_Logical11 = (((rtb_TmpSignalConversionAtVeESSR_b_Disabl ||
                       (HeMTQR_b_MtrA_MinLimits)) ||
                      rtb_TmpSignalConversionAtVeINVR_b_DMPI_T) || rtb_Logical11);

    /* Outputs for Atomic SubSystem: '<S5>/EdgeFalling3' */
    /* Logic: '<S61>/OR1' */
    rtb_AND_p_tmp = !rtb_Logical11;

    /* Logic: '<S61>/AND' incorporates:
     *  Logic: '<S61>/OR1'
     *  UnitDelay: '<S61>/UnitDelay'
     */
    rtb_AND_by = (rtb_AND_p_tmp && (MTQR_ac_DW.UnitDelay_DSTATE_jy));

    /* Update for UnitDelay: '<S61>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_jy = rtb_Logical11;

    /* End of Outputs for SubSystem: '<S5>/EdgeFalling3' */

    /* Outputs for Atomic SubSystem: '<S5>/EdgeRising1' */
    /* Logic: '<S63>/AND' incorporates:
     *  Logic: '<S63>/OR1'
     *  UnitDelay: '<S63>/UnitDelay'
     */
    rtb_AND_p = (rtb_Logical5 && (!MTQR_ac_DW.UnitDelay_DSTATE_mc));

    /* Update for UnitDelay: '<S63>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_mc = rtb_Logical5;

    /* End of Outputs for SubSystem: '<S5>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S5>/EdgeRising2' */
    /* Logic: '<S64>/AND' incorporates:
     *  Logic: '<S64>/OR1'
     *  UnitDelay: '<S64>/UnitDelay'
     */
    rtb_AND_et = (rtb_Logical3_l && (!MTQR_ac_DW.UnitDelay_DSTATE_f5));

    /* Update for UnitDelay: '<S64>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_f5 = rtb_Logical3_l;

    /* End of Outputs for SubSystem: '<S5>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S5>/EdgeRising3' */
    /* Logic: '<S65>/AND' incorporates:
     *  Logic: '<S65>/OR1'
     *  UnitDelay: '<S65>/UnitDelay'
     */
    rtb_AND_l = (rtb_Logical11 && (!MTQR_ac_DW.UnitDelay_DSTATE_a4));

    /* Update for UnitDelay: '<S65>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_a4 = rtb_Logical11;

    /* End of Outputs for SubSystem: '<S5>/EdgeRising3' */

    /* RelationalOperator: '<S5>/Comparison4' incorporates:
     *  Constant: '<S56>/Constant'
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     */
    rtb_Comparison4 = (((uint32)tmpRead_6) == CeEBMR_e_eBoostEngaged);

    /* Logic: '<S5>/Logical1' incorporates:
     *  Constant: '<S57>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrC_InvrtrSt'
     *  RelationalOperator: '<S5>/Comparison5'
     */
    rtb_Logical1 = ((((uint32)tmpRead_2) == CeINVR_e_InverterFaulted) ||
                    rtb_AND_it);

    /* Outputs for Atomic SubSystem: '<S5>/EdgeFalling4' */
    /* Logic: '<S62>/OR1' */
    rtb_AND_g5_tmp = !rtb_Logical1;

    /* Logic: '<S62>/AND' incorporates:
     *  Logic: '<S62>/OR1'
     *  UnitDelay: '<S62>/UnitDelay'
     */
    rtb_AND_m = (rtb_AND_g5_tmp && (MTQR_ac_DW.UnitDelay_DSTATE_lk));

    /* Update for UnitDelay: '<S62>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_lk = rtb_Logical1;

    /* End of Outputs for SubSystem: '<S5>/EdgeFalling4' */

    /* Outputs for Atomic SubSystem: '<S5>/EdgeRising4' */
    /* Logic: '<S66>/AND' incorporates:
     *  Logic: '<S66>/OR1'
     *  UnitDelay: '<S66>/UnitDelay'
     */
    rtb_AND_it = (rtb_Logical1 && (!MTQR_ac_DW.UnitDelay_DSTATE_ff));

    /* Update for UnitDelay: '<S66>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_ff = rtb_Logical1;

    /* End of Outputs for SubSystem: '<S5>/EdgeRising4' */

    /* MinMax: '<S83>/MinMax' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     *  Lookup_n-D: '<S96>/KtMTQR_K_MtrAInvrtTmp_Derate'
     *  Lookup_n-D: '<S97>/KtMTQR_K_MtrATmp_Derate'
     */
    rtb_Sum_a4 = fminf(fminf(look1_iflf_binlca_16a(rtb_VeMTQC_M_MtrMinTrq_LU, ((
                           const float32 *)&(KxMTQR_K_MtrATmp_Derate[0])), ((
                           const float32 *)&(KtMTQR_K_MtrATmp_Derate[0])), 3U),
                        look1_iflf_binlca_16a(rtb_VeMTQC_M_MtrMinTrq_LD, ((const
                           float32 *)&(KxMTQR_K_MtrAInvrtTmp_Derate[0])), ((
                           const float32 *)&(KtMTQR_K_MtrAInvrtTmp_Derate[0])),
                         3U)), rtb_Sum2_i3);

    /* Outputs for Atomic SubSystem: '<S83>/Limiter' */
    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S83>/ConstantValue1'
     *  RelationalOperator: '<S98>/RelationalOperator'
     */
    if (1.0F < rtb_Sum_a4)
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = 1.0F;
    }

    /* End of Switch: '<S98>/Switch1' */

    /* Switch: '<S98>/Switch' incorporates:
     *  Constant: '<S83>/ConstantValue'
     *  RelationalOperator: '<S98>/RelationalOperator1'
     */
    if (rtb_Sum_a4 <= 0.0F)
    {
        /* Switch: '<S98>/Switch' */
        rtb_Sum_a4 = 0.0F;
    }

    /* End of Switch: '<S98>/Switch' */
    /* End of Outputs for SubSystem: '<S83>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S83>/GradientLimiter' */
    /* Sum: '<S90>/Sum2' incorporates:
     *  UnitDelay: '<S90>/UnitDelay'
     */
    rtb_Sum2_i3 = rtb_Sum_a4 - VeMTQR_K_MtrA_DerateFct;

    /* Outputs for Atomic SubSystem: '<S90>/Limiter' */
    /* Switch: '<S99>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S99>/RelationalOperator'
     */
    if (KeMTQR_K_Derate_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_K_Derate_LU;
    }

    /* End of Switch: '<S99>/Switch1' */

    /* Switch: '<S99>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S99>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_K_Derate_LD)
    {
        rtb_Sum2_i3 = KeMTQR_K_Derate_LD;
    }

    /* End of Switch: '<S99>/Switch' */
    /* End of Outputs for SubSystem: '<S90>/Limiter' */

    /* Sum: '<S90>/Sum3' incorporates:
     *  UnitDelay: '<S90>/UnitDelay'
     */
    VeMTQR_K_MtrA_DerateFct = rtb_Sum2_i3 + VeMTQR_K_MtrA_DerateFct;

    /* End of Outputs for SubSystem: '<S83>/GradientLimiter' */

    /* Switch: '<S7>/Switch' */
    if (rtb_TmpSignalConversionAtVeINVR_b_DMPI_T)
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S87>/Calib'
         *  Constant: '<S89>/Calib'
         */
        rtb_Switch[0] = KeMTQR_K_Derate_LU_TempStop;
        rtb_Switch[1] = KeMTQR_K_Derate_LD_TempStop;
    }
    else
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S86>/Calib'
         *  Constant: '<S88>/Calib'
         */
        rtb_Switch[0] = KeMTQR_K_Derate_LU;
        rtb_Switch[1] = KeMTQR_K_Derate_LD;
    }

    /* End of Switch: '<S7>/Switch' */

    /* Outputs for Atomic SubSystem: '<S83>/GradientLimiter1' */
    /* Sum: '<S91>/Sum2' incorporates:
     *  Constant: '<S95>/Calib'
     *  MinMax: '<S83>/MinMax1'
     *  UnitDelay: '<S91>/UnitDelay'
     */
    rtb_Sum2_i3 = fminf(fminf(HeMTQR_K_MtrAMaxCpblty, rtb_Sum_a4), (float32)
                        rtb_NotEqual1_d) - VeMTQR_K_MtrA_MaxCpbltyDerateFct;

    /* Outputs for Atomic SubSystem: '<S91>/Limiter' */
    /* Switch: '<S100>/Switch1' incorporates:
     *  RelationalOperator: '<S100>/RelationalOperator'
     */
    if (rtb_Switch[0] < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = rtb_Switch[0];
    }

    /* End of Switch: '<S100>/Switch1' */

    /* Switch: '<S100>/Switch' incorporates:
     *  RelationalOperator: '<S100>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= rtb_Switch[1])
    {
        rtb_Sum2_i3 = rtb_Switch[1];
    }

    /* End of Switch: '<S100>/Switch' */
    /* End of Outputs for SubSystem: '<S91>/Limiter' */

    /* Sum: '<S91>/Sum3' incorporates:
     *  UnitDelay: '<S91>/UnitDelay'
     */
    VeMTQR_K_MtrA_MaxCpbltyDerateFct = rtb_Sum2_i3 +
        VeMTQR_K_MtrA_MaxCpbltyDerateFct;

    /* End of Outputs for SubSystem: '<S83>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S83>/GradientLimiter2' */
    /* Sum: '<S92>/Sum2' incorporates:
     *  UnitDelay: '<S92>/UnitDelay'
     */
    rtb_Sum2_i3 = ((float32)(rtb_NotEqual1_d ? 1.0F : 0.0F)) -
        VeMTQR_K_MtrA_MaxCpbltyST_Fct;

    /* Outputs for Atomic SubSystem: '<S92>/Limiter' */
    /* Switch: '<S101>/Switch1' incorporates:
     *  RelationalOperator: '<S101>/RelationalOperator'
     */
    if (rtb_Switch[0] < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = rtb_Switch[0];
    }

    /* End of Switch: '<S101>/Switch1' */

    /* Switch: '<S101>/Switch' incorporates:
     *  RelationalOperator: '<S101>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= rtb_Switch[1])
    {
        rtb_Sum2_i3 = rtb_Switch[1];
    }

    /* End of Switch: '<S101>/Switch' */
    /* End of Outputs for SubSystem: '<S92>/Limiter' */

    /* Sum: '<S92>/Sum3' incorporates:
     *  UnitDelay: '<S92>/UnitDelay'
     */
    VeMTQR_K_MtrA_MaxCpbltyST_Fct = rtb_Sum2_i3 + VeMTQR_K_MtrA_MaxCpbltyST_Fct;

    /* End of Outputs for SubSystem: '<S83>/GradientLimiter2' */

    /* Outputs for Atomic SubSystem: '<S83>/GradientLimiter3' */
    /* Sum: '<S93>/Sum2' incorporates:
     *  MinMax: '<S83>/MinMax2'
     *  UnitDelay: '<S93>/UnitDelay'
     */
    rtb_Sum2_i3 = fminf(rtb_Sum_a4, (float32)rtb_AND_p_tmp) -
        VeMTQR_K_MtrA_MinCpbltyDerateFct;

    /* Outputs for Atomic SubSystem: '<S93>/Limiter' */
    /* Switch: '<S102>/Switch1' incorporates:
     *  RelationalOperator: '<S102>/RelationalOperator'
     */
    if (rtb_Switch[0] < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = rtb_Switch[0];
    }

    /* End of Switch: '<S102>/Switch1' */

    /* Switch: '<S102>/Switch' incorporates:
     *  RelationalOperator: '<S102>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= rtb_Switch[1])
    {
        rtb_Sum2_i3 = rtb_Switch[1];
    }

    /* End of Switch: '<S102>/Switch' */
    /* End of Outputs for SubSystem: '<S93>/Limiter' */

    /* Sum: '<S93>/Sum3' incorporates:
     *  UnitDelay: '<S93>/UnitDelay'
     */
    VeMTQR_K_MtrA_MinCpbltyDerateFct = rtb_Sum2_i3 +
        VeMTQR_K_MtrA_MinCpbltyDerateFct;

    /* End of Outputs for SubSystem: '<S83>/GradientLimiter3' */

    /* Outputs for Atomic SubSystem: '<S83>/GradientLimiter4' */
    /* Sum: '<S94>/Sum2' incorporates:
     *  UnitDelay: '<S94>/UnitDelay'
     */
    rtb_Sum2_i3 = ((float32)(rtb_AND_p_tmp ? 1.0F : 0.0F)) -
        VeMTQR_K_MtrA_MinCpbltyST_Fct;

    /* Outputs for Atomic SubSystem: '<S94>/Limiter' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  RelationalOperator: '<S103>/RelationalOperator'
     */
    if (rtb_Switch[0] < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = rtb_Switch[0];
    }

    /* End of Switch: '<S103>/Switch1' */

    /* Switch: '<S103>/Switch' incorporates:
     *  RelationalOperator: '<S103>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= rtb_Switch[1])
    {
        rtb_Sum2_i3 = rtb_Switch[1];
    }

    /* End of Switch: '<S103>/Switch' */
    /* End of Outputs for SubSystem: '<S94>/Limiter' */

    /* Sum: '<S94>/Sum3' incorporates:
     *  UnitDelay: '<S94>/UnitDelay'
     */
    VeMTQR_K_MtrA_MinCpbltyST_Fct = rtb_Sum2_i3 + VeMTQR_K_MtrA_MinCpbltyST_Fct;

    /* End of Outputs for SubSystem: '<S83>/GradientLimiter4' */

    /* MinMax: '<S84>/MinMax' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
     *  Lookup_n-D: '<S107>/KtMTQR_K_MtrBInvrtTmp_Derate'
     *  Lookup_n-D: '<S108>/KtMTQR_K_MtrBTmp_Derate'
     *  SignalConversion generated from: '<S1>/VeINVR_T_MtrB_InvrtrTemp'
     */
    rtb_Sum_a4 = fminf(fminf(look1_iflf_binlca_16a(rtb_VeMTQC_M_MtrMaxTrq_LD, ((
                           const float32 *)&(KxMTQR_K_MtrBTmp_Derate[0])), ((
                           const float32 *)&(KtMTQR_K_MtrBTmp_Derate[0])), 3U),
                        look1_iflf_binlca_16a
                        (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I, ((const
                           float32 *)&(KxMTQR_K_MtrBInvrtTmp_Derate[0])), ((
                           const float32 *)&(KtMTQR_K_MtrBInvrtTmp_Derate[0])),
                         3U)), rtb_Product_m4);

    /* Outputs for Atomic SubSystem: '<S84>/Limiter' */
    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S84>/ConstantValue1'
     *  RelationalOperator: '<S109>/RelationalOperator'
     */
    if (1.0F < rtb_Sum_a4)
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = 1.0F;
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Switch: '<S109>/Switch' incorporates:
     *  Constant: '<S84>/ConstantValue'
     *  RelationalOperator: '<S109>/RelationalOperator1'
     */
    if (rtb_Sum_a4 <= 0.0F)
    {
        /* Switch: '<S109>/Switch' */
        rtb_Sum_a4 = 0.0F;
    }

    /* End of Switch: '<S109>/Switch' */
    /* End of Outputs for SubSystem: '<S84>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S84>/GradientLimiter' */
    /* Sum: '<S104>/Sum2' incorporates:
     *  UnitDelay: '<S104>/UnitDelay'
     */
    rtb_Sum2_i3 = rtb_Sum_a4 - VeMTQR_K_MtrB_DerateFct;

    /* Outputs for Atomic SubSystem: '<S104>/Limiter' */
    /* Switch: '<S110>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S110>/RelationalOperator'
     */
    if (KeMTQR_K_Derate_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_K_Derate_LU;
    }

    /* End of Switch: '<S110>/Switch1' */

    /* Switch: '<S110>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S110>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_K_Derate_LD)
    {
        rtb_Sum2_i3 = KeMTQR_K_Derate_LD;
    }

    /* End of Switch: '<S110>/Switch' */
    /* End of Outputs for SubSystem: '<S104>/Limiter' */

    /* Sum: '<S104>/Sum3' incorporates:
     *  UnitDelay: '<S104>/UnitDelay'
     */
    VeMTQR_K_MtrB_DerateFct = rtb_Sum2_i3 + VeMTQR_K_MtrB_DerateFct;

    /* End of Outputs for SubSystem: '<S84>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S84>/GradientLimiter1' */
    /* Sum: '<S105>/Sum2' incorporates:
     *  UnitDelay: '<S105>/UnitDelay'
     */
    rtb_Sum2_i3 = ((float32)(rtb_AND_dd_tmp ? 1.0F : 0.0F)) -
        VeMTQR_K_MtrB_STCpblty;

    /* Outputs for Atomic SubSystem: '<S105>/Limiter' */
    /* Switch: '<S111>/Switch1' incorporates:
     *  RelationalOperator: '<S111>/RelationalOperator'
     */
    if (rtb_Switch[0] < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = rtb_Switch[0];
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Switch: '<S111>/Switch' incorporates:
     *  RelationalOperator: '<S111>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= rtb_Switch[1])
    {
        rtb_Sum2_i3 = rtb_Switch[1];
    }

    /* End of Switch: '<S111>/Switch' */
    /* End of Outputs for SubSystem: '<S105>/Limiter' */

    /* Sum: '<S105>/Sum3' incorporates:
     *  UnitDelay: '<S105>/UnitDelay'
     */
    VeMTQR_K_MtrB_STCpblty = rtb_Sum2_i3 + VeMTQR_K_MtrB_STCpblty;

    /* End of Outputs for SubSystem: '<S84>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S84>/GradientLimiter2' */
    /* Sum: '<S106>/Sum2' incorporates:
     *  MinMax: '<S84>/MinMax1'
     *  UnitDelay: '<S106>/UnitDelay'
     */
    rtb_Sum2_i3 = fminf(rtb_Sum_a4, (float32)rtb_AND_dd_tmp) -
        VeMTQR_K_MtrB_DerateCpblty;

    /* Outputs for Atomic SubSystem: '<S106>/Limiter' */
    /* Switch: '<S112>/Switch1' incorporates:
     *  RelationalOperator: '<S112>/RelationalOperator'
     */
    if (rtb_Switch[0] < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = rtb_Switch[0];
    }

    /* End of Switch: '<S112>/Switch1' */

    /* Switch: '<S112>/Switch' incorporates:
     *  RelationalOperator: '<S112>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= rtb_Switch[1])
    {
        rtb_Sum2_i3 = rtb_Switch[1];
    }

    /* End of Switch: '<S112>/Switch' */
    /* End of Outputs for SubSystem: '<S106>/Limiter' */

    /* Sum: '<S106>/Sum3' incorporates:
     *  UnitDelay: '<S106>/UnitDelay'
     */
    VeMTQR_K_MtrB_DerateCpblty = rtb_Sum2_i3 + VeMTQR_K_MtrB_DerateCpblty;

    /* End of Outputs for SubSystem: '<S84>/GradientLimiter2' */

    /* Product: '<S84>/Product' */
    rtb_Product_m4 = VeMTQR_K_MtrB_DerateFct *
        rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g;

    /* MinMax: '<S85>/MinMax' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrC_InvrtrTemp'
     *  Inport: '<Root>/VeINVR_T_MtrC_Temp'
     *  Lookup_n-D: '<S116>/KtMTQR_K_MtrCInvrtTmp_Derate'
     *  Lookup_n-D: '<S117>/KtMTQR_K_MtrCTmp_Derate'
     */
    rtb_Sum_a4 = fminf(fminf(look1_iflf_binlca_16a(rtb_Sum2_j, ((const float32 *)
                          &(KxMTQR_K_MtrCTmp_Derate[0])), ((const float32 *)
                          &(KtMTQR_K_MtrCTmp_Derate[0])), 3U),
                        look1_iflf_binlca_16a(rtb_VeMTQC_M_MtrMaxTrq_LU, ((const
                           float32 *)&(KxMTQR_K_MtrCInvrtTmp_Derate[0])), ((
                           const float32 *)&(KtMTQR_K_MtrCInvrtTmp_Derate[0])),
                         3U)), rtb_MinMax4_p);

    /* Outputs for Atomic SubSystem: '<S85>/Limiter' */
    /* Switch: '<S118>/Switch1' incorporates:
     *  Constant: '<S85>/ConstantValue1'
     *  RelationalOperator: '<S118>/RelationalOperator'
     */
    if (1.0F < rtb_Sum_a4)
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = 1.0F;
    }

    /* End of Switch: '<S118>/Switch1' */

    /* Switch: '<S118>/Switch' incorporates:
     *  Constant: '<S85>/ConstantValue'
     *  RelationalOperator: '<S118>/RelationalOperator1'
     */
    if (rtb_Sum_a4 <= 0.0F)
    {
        /* Switch: '<S118>/Switch' */
        rtb_Sum_a4 = 0.0F;
    }

    /* End of Switch: '<S118>/Switch' */
    /* End of Outputs for SubSystem: '<S85>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S85>/GradientLimiter' */
    /* Sum: '<S113>/Sum2' incorporates:
     *  UnitDelay: '<S113>/UnitDelay'
     */
    rtb_Sum2_i3 = rtb_Sum_a4 - VeMTQR_K_MtrC_DerateFct;

    /* Outputs for Atomic SubSystem: '<S113>/Limiter' */
    /* Switch: '<S119>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S119>/RelationalOperator'
     */
    if (KeMTQR_K_Derate_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_K_Derate_LU;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* Switch: '<S119>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S119>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_K_Derate_LD)
    {
        rtb_Sum2_i3 = KeMTQR_K_Derate_LD;
    }

    /* End of Switch: '<S119>/Switch' */
    /* End of Outputs for SubSystem: '<S113>/Limiter' */

    /* Sum: '<S113>/Sum3' incorporates:
     *  UnitDelay: '<S113>/UnitDelay'
     */
    VeMTQR_K_MtrC_DerateFct = rtb_Sum2_i3 + VeMTQR_K_MtrC_DerateFct;

    /* End of Outputs for SubSystem: '<S85>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S85>/GradientLimiter1' */
    /* Sum: '<S114>/Sum2' incorporates:
     *  UnitDelay: '<S114>/UnitDelay'
     */
    rtb_Sum2_i3 = ((float32)(rtb_AND_g5_tmp ? 1.0F : 0.0F)) -
        MTQR_ac_DW.UnitDelay_DSTATE_a;

    /* Outputs for Atomic SubSystem: '<S114>/Limiter' */
    /* Switch: '<S120>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S120>/RelationalOperator'
     */
    if (KeMTQR_K_Derate_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_K_Derate_LU;
    }

    /* End of Switch: '<S120>/Switch1' */

    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S120>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_K_Derate_LD)
    {
        rtb_Sum2_i3 = KeMTQR_K_Derate_LD;
    }

    /* End of Switch: '<S120>/Switch' */
    /* End of Outputs for SubSystem: '<S114>/Limiter' */

    /* Sum: '<S114>/Sum3' incorporates:
     *  UnitDelay: '<S114>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_a += rtb_Sum2_i3;

    /* End of Outputs for SubSystem: '<S85>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S85>/GradientLimiter2' */
    /* Sum: '<S115>/Sum2' incorporates:
     *  MinMax: '<S85>/MinMax1'
     *  UnitDelay: '<S115>/UnitDelay'
     */
    rtb_Sum2_i3 = fminf(rtb_Sum_a4, (float32)rtb_AND_g5_tmp) -
        MTQR_ac_DW.UnitDelay_DSTATE_iw;

    /* Outputs for Atomic SubSystem: '<S115>/Limiter' */
    /* Switch: '<S121>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S121>/RelationalOperator'
     */
    if (KeMTQR_K_Derate_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_K_Derate_LU;
    }

    /* End of Switch: '<S121>/Switch1' */

    /* Switch: '<S121>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     *  RelationalOperator: '<S121>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_K_Derate_LD)
    {
        rtb_Sum2_i3 = KeMTQR_K_Derate_LD;
    }

    /* End of Switch: '<S121>/Switch' */
    /* End of Outputs for SubSystem: '<S115>/Limiter' */

    /* Sum: '<S115>/Sum3' incorporates:
     *  UnitDelay: '<S115>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_iw += rtb_Sum2_i3;

    /* End of Outputs for SubSystem: '<S85>/GradientLimiter2' */
    for (i = 0; i < 16; i++)
    {
        /* Product: '<S83>/Product2' */
        rtb_Sum2_i3 = rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i];

        /* Product: '<S83>/Product3' */
        rtb_MinMax4_p = rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i];

        /* Product: '<S84>/Product2' */
        rtb_Sum2_j = rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa[i];

        /* Product: '<S85>/Product2' */
        rtb_VeMTQC_M_MtrMaxTrq_LU = rtb_TmpSignalConversionAtVaMTIR_M_MtrCMa[i];

        /* Product: '<S85>/Product3' */
        rtb_VeMTQC_M_MtrMaxTrq_LD = rtb_TmpSignalConversionAtVaMTIR_M_MtrCMi[i];

        /* Product: '<S83>/Product2' */
        rtb_Product2[i] = VeMTQR_K_MtrA_MaxCpbltyDerateFct * rtb_Sum2_i3;

        /* Product: '<S83>/Product3' */
        rtb_Product3[i] = VeMTQR_K_MtrA_MinCpbltyDerateFct * rtb_MinMax4_p;

        /* Product: '<S83>/Product6' */
        rtb_Sum2_i3 *= VeMTQR_K_MtrA_MaxCpbltyST_Fct;

        /* Product: '<S83>/Product7' */
        rtb_MinMax4_p *= VeMTQR_K_MtrA_MinCpbltyST_Fct;

        /* Product: '<S84>/Product2' */
        rtb_Product2_l[i] = VeMTQR_K_MtrB_DerateCpblty * rtb_Sum2_j;

        /* Product: '<S84>/Product6' */
        rtb_Sum2_j *= VeMTQR_K_MtrB_STCpblty;

        /* Product: '<S84>/Product7' */
        Product7[i] = VeMTQR_K_MtrB_STCpblty *
            rtb_TmpSignalConversionAtVaMTIR_M_MtrBMi[i];

        /* Product: '<S85>/Product2' incorporates:
         *  UnitDelay: '<S115>/UnitDelay'
         */
        Product2[i] = MTQR_ac_DW.UnitDelay_DSTATE_iw * rtb_VeMTQC_M_MtrMaxTrq_LU;

        /* Product: '<S85>/Product3' incorporates:
         *  UnitDelay: '<S115>/UnitDelay'
         */
        Product3[i] = MTQR_ac_DW.UnitDelay_DSTATE_iw * rtb_VeMTQC_M_MtrMaxTrq_LD;

        /* Product: '<S85>/Product6' incorporates:
         *  UnitDelay: '<S114>/UnitDelay'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LU *= MTQR_ac_DW.UnitDelay_DSTATE_a;

        /* Product: '<S85>/Product7' incorporates:
         *  UnitDelay: '<S114>/UnitDelay'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LD *= MTQR_ac_DW.UnitDelay_DSTATE_a;
        rtb_TmpSignalConversionAtVaMTIR_M_MtrCMi[i] = rtb_VeMTQC_M_MtrMaxTrq_LD;

        /* Product: '<S85>/Product6' */
        rtb_TmpSignalConversionAtVaMTIR_M_MtrCMa[i] = rtb_VeMTQC_M_MtrMaxTrq_LU;

        /* Product: '<S84>/Product6' */
        rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa[i] = rtb_Sum2_j;

        /* Product: '<S83>/Product7' */
        rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i] = rtb_MinMax4_p;

        /* Product: '<S83>/Product6' */
        rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i] = rtb_Sum2_i3;
    }

    /* If: '<S8>/If2' incorporates:
     *  Constant: '<S124>/Calib'
     *  Product: '<S130>/Product'
     *  Product: '<S132>/Multiplication3'
     *  RelationalOperator: '<S133>/NotEqual'
     *  Selector: '<S132>/Selector10'
     *  Selector: '<S132>/Selector9'
     *  SignalConversion generated from: '<S8>/VariantSource3'
     *  Switch: '<S8>/Switch2'
     */
#if Rte_SysCon_Variant_HSCL_FEAD1

    if (Rte_Prm_KeHSCR_b_FEADadj_KeHSCR_b_FEADadj())
    {
        /* Outputs for IfAction SubSystem: '<S8>/FEADadj' incorporates:
         *  ActionPort: '<S123>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S123>/ProtectedDivision' */
        /* RelationalOperator: '<S133>/NotEqual1' incorporates:
         *  Constant: '<S131>/Calib'
         *  Constant: '<S133>/ConstantValue1'
         */
        rtb_NotEqual1_d = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) !=
                           0.0F);
        for (i = 0; i < 16; i++)
        {
            rtb_Sum2_i3 = rtb_TmpSignalConversionAtVaMTIR_n_MtrACp[i];

            /* Switch: '<S133>/Switch1' incorporates:
             *  Constant: '<S133>/ConstantValue'
             *  Constant: '<S133>/ConstantValue2'
             *  Constant: '<S133>/ConstantValue3'
             *  Logic: '<S133>/AND'
             *  RelationalOperator: '<S133>/GreaterThanorEqual'
             *  RelationalOperator: '<S133>/GreaterThanorEqual1'
             *  RelationalOperator: '<S133>/NotEqual'
             *  Switch: '<S133>/Switch2'
             *  Switch: '<S133>/Switch3'
             */
            if ((rtb_Sum2_i3 != 0.0F) && rtb_NotEqual1_d)
            {
                /* Switch: '<S133>/Switch1' incorporates:
                 *  Constant: '<S131>/Calib'
                 *  Product: '<S133>/Division'
                 */
                rtb_Switch1_b[i] = rtb_Sum2_i3 / ((float32)
                    Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());
            }
            else if (rtb_Sum2_i3 > 0.0F)
            {
                /* Switch: '<S133>/Switch2' incorporates:
                 *  Constant: '<S133>/MAXFLOAT'
                 *  Switch: '<S133>/Switch1'
                 */
                rtb_Switch1_b[i] = 3.402823466E+38F;
            }
            else if (rtb_Sum2_i3 < 0.0F)
            {
                /* Switch: '<S133>/Switch3' incorporates:
                 *  Constant: '<S133>/MINFLOAT'
                 *  Switch: '<S133>/Switch1'
                 *  Switch: '<S133>/Switch2'
                 */
                rtb_Switch1_b[i] = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S133>/Switch1' incorporates:
                 *  Constant: '<S133>/ConstantValue4'
                 *  Switch: '<S133>/Switch2'
                 *  Switch: '<S133>/Switch3'
                 */
                rtb_Switch1_b[i] = 0.0F;
            }

            /* End of Switch: '<S133>/Switch1' */
        }

        /* End of Outputs for SubSystem: '<S123>/ProtectedDivision' */

        /* Outputs for Iterator SubSystem: '<S132>/Interpolate' incorporates:
         *  ForIterator: '<S139>/ForIterator'
         */
        for (s139_iter = 0; s139_iter < 16; s139_iter++)
        {
            /* Chart: '<S139>/X_Data_and_Fractions1' incorporates:
             *  Constant: '<S144>/Calib'
             *  Selector: '<S139>/Selector'
             */
            MTQR_ac_X_Data_and_Fractions1
                ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed()),
                 rtb_Switch1_b[s139_iter], &MTQR_ac_B.sf_X_Data_and_Fractions1);

            /* Assignment: '<S143>/ArrayAssignment1' */
            rtb_ArrayAssignment1[s139_iter] =
                MTQR_ac_B.sf_X_Data_and_Fractions1.UpperIndex;

            /* Assignment: '<S143>/ArrayAssignment2' */
            rtb_ArrayAssignment2[s139_iter] =
                MTQR_ac_B.sf_X_Data_and_Fractions1.LowerIndex;

            /* Assignment: '<S143>/ArrayAssignment3' */
            rtb_ArrayAssignment3[s139_iter] =
                MTQR_ac_B.sf_X_Data_and_Fractions1.fra;
        }

        /* End of Outputs for SubSystem: '<S132>/Interpolate' */
        for (i = 0; i < 16; i++)
        {
            rtb_MinMax4_p = rtb_Product2[i];
            rtb_Sum2_i3 = rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i];
            rtb_Sum2_j = rtb_ArrayAssignment1[i];
            rtb_VeMTQC_M_MtrMaxTrq_LU = rtb_ArrayAssignment3[i];
            rtb_VeMTQC_M_MtrMaxTrq_LD = rtb_ArrayAssignment2[i];

            /* Selector: '<S132>/Selector12' incorporates:
             *  Constant: '<S140>/Calib'
             *  Product: '<S130>/Product'
             *  Product: '<S132>/Multiplication3'
             *  Selector: '<S132>/Selector10'
             *  Selector: '<S132>/Selector9'
             */
            rtb_VeMTQC_M_MtrMinTrq_LU =
                (Rte_Prm_KaHSCR_n_FEADLoss_CoeffA_KaHSCR_n_FEADLoss_CoeffA())
                [(sint32)rtb_VeMTQC_M_MtrMaxTrq_LD];

            /* Sum: '<S132>/Summation7' incorporates:
             *  Constant: '<S140>/Calib'
             *  Product: '<S132>/Multiplication3'
             *  Selector: '<S132>/Selector9'
             *  Sum: '<S132>/Summation6'
             */
            VaMTQR_r_ElmA_FEADCpblty[(i)] = ((((float32)
                (Rte_Prm_KaHSCR_n_FEADLoss_CoeffA_KaHSCR_n_FEADLoss_CoeffA())
                [(sint32)rtb_Sum2_j]) - rtb_VeMTQC_M_MtrMinTrq_LU) *
                rtb_VeMTQC_M_MtrMaxTrq_LU) + rtb_VeMTQC_M_MtrMinTrq_LU;

            /* Selector: '<S132>/Selector12' incorporates:
             *  Constant: '<S141>/Calib'
             *  Selector: '<S132>/Selector10'
             *  Selector: '<S132>/Selector8'
             */
            rtb_VeMTQC_M_MtrMinTrq_LU =
                (Rte_Prm_KaHSCR_n_FEADLoss_CoeffB_KaHSCR_n_FEADLoss_CoeffB())
                [(sint32)rtb_VeMTQC_M_MtrMaxTrq_LD];

            /* Sum: '<S132>/Summation9' incorporates:
             *  Constant: '<S141>/Calib'
             *  Product: '<S132>/Multiplication4'
             *  Selector: '<S132>/Selector7'
             *  Selector: '<S132>/Selector9'
             *  Sum: '<S132>/Summation8'
             */
            VaMTQR_r_ElmB_FEADCpblty[(i)] = ((((float32)
                (Rte_Prm_KaHSCR_n_FEADLoss_CoeffB_KaHSCR_n_FEADLoss_CoeffB())
                [(sint32)rtb_Sum2_j]) - rtb_VeMTQC_M_MtrMinTrq_LU) *
                rtb_VeMTQC_M_MtrMaxTrq_LU) + rtb_VeMTQC_M_MtrMinTrq_LU;

            /* Selector: '<S132>/Selector12' incorporates:
             *  Constant: '<S142>/Calib'
             *  Selector: '<S132>/Selector10'
             */
            rtb_VeMTQC_M_MtrMinTrq_LU =
                (Rte_Prm_KaHSCR_n_FEADLoss_CoeffC_KaHSCR_n_FEADLoss_CoeffC())
                [(sint32)rtb_VeMTQC_M_MtrMaxTrq_LD];

            /* Sum: '<S132>/Summation11' incorporates:
             *  Constant: '<S142>/Calib'
             *  Product: '<S132>/Multiplication5'
             *  Selector: '<S132>/Selector11'
             *  Selector: '<S132>/Selector9'
             *  Sum: '<S132>/Summation10'
             */
            VaMTQR_r_ElmC_FEADCpblty[(i)] = ((((float32)
                (Rte_Prm_KaHSCR_n_FEADLoss_CoeffC_KaHSCR_n_FEADLoss_CoeffC())
                [(sint32)rtb_Sum2_j]) - rtb_VeMTQC_M_MtrMinTrq_LU) *
                rtb_VeMTQC_M_MtrMaxTrq_LU) + rtb_VeMTQC_M_MtrMinTrq_LU;

            /* Sum: '<S130>/Sum' incorporates:
             *  Product: '<S130>/Product'
             *  Product: '<S130>/Product1'
             */
            rtb_Sum_aj[i] = (((rtb_Sum2_i3 * rtb_Sum2_i3) *
                              VaMTQR_r_ElmA_FEADCpblty[(i)]) + (rtb_Sum2_i3 *
                              VaMTQR_r_ElmB_FEADCpblty[(i)])) +
                VaMTQR_r_ElmC_FEADCpblty[(i)];
            rtb_Sum_aj[i + 16] = (((rtb_MinMax4_p * rtb_MinMax4_p) *
                                   VaMTQR_r_ElmA_FEADCpblty[(i)]) +
                                  (rtb_MinMax4_p * VaMTQR_r_ElmB_FEADCpblty[(i)]))
                + VaMTQR_r_ElmC_FEADCpblty[(i)];
        }

        /* Outputs for Atomic SubSystem: '<S130>/ProtectedDivision' */
        /* RelationalOperator: '<S135>/NotEqual1' incorporates:
         *  Constant: '<S134>/Calib'
         *  Constant: '<S135>/ConstantValue1'
         *  Product: '<S130>/Product'
         *  Product: '<S132>/Multiplication3'
         *  RelationalOperator: '<S133>/NotEqual'
         *  Selector: '<S132>/Selector10'
         *  Selector: '<S132>/Selector9'
         */
        rtb_NotEqual1_d = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) !=
                           0.0F);
        for (i = 0; i < 32; i++)
        {
            rtb_Sum2_i3 = rtb_Sum_aj[i];

            /* Switch: '<S135>/Switch1' incorporates:
             *  Constant: '<S135>/ConstantValue'
             *  Constant: '<S135>/ConstantValue2'
             *  Constant: '<S135>/ConstantValue3'
             *  Logic: '<S135>/AND'
             *  RelationalOperator: '<S135>/GreaterThanorEqual'
             *  RelationalOperator: '<S135>/GreaterThanorEqual1'
             *  RelationalOperator: '<S135>/NotEqual'
             *  Switch: '<S135>/Switch2'
             *  Switch: '<S135>/Switch3'
             */
            if ((rtb_Sum2_i3 != 0.0F) && rtb_NotEqual1_d)
            {
                /* Switch: '<S135>/Switch1' incorporates:
                 *  Constant: '<S134>/Calib'
                 *  Product: '<S135>/Division'
                 */
                rtb_Sum2_i3 /= (float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
            }
            else if (rtb_Sum2_i3 > 0.0F)
            {
                /* Switch: '<S135>/Switch1' incorporates:
                 *  Constant: '<S135>/MAXFLOAT'
                 *  Switch: '<S135>/Switch2'
                 */
                rtb_Sum2_i3 = 3.402823466E+38F;
            }
            else if (rtb_Sum2_i3 < 0.0F)
            {
                /* Switch: '<S135>/Switch1' incorporates:
                 *  Constant: '<S135>/MINFLOAT'
                 *  Switch: '<S135>/Switch3'
                 */
                rtb_Sum2_i3 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S135>/Switch1' incorporates:
                 *  Constant: '<S135>/ConstantValue4'
                 *  Switch: '<S135>/Switch3'
                 */
                rtb_Sum2_i3 = 0.0F;
            }

            /* End of Switch: '<S135>/Switch1' */
            rtb_Sum_aj[i] = rtb_Sum2_i3;
        }

        /* End of Outputs for SubSystem: '<S130>/ProtectedDivision' */
        for (i = 0; i < 16; i++)
        {
            rtb_Sum2_i3 = rtb_Product3[i];
            rtb_MinMax4_p = rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i];

            /* Sum: '<S130>/Sum2' incorporates:
             *  Product: '<S130>/Product2'
             *  Product: '<S130>/Product3'
             */
            rtb_Sum2_l[i] = (((rtb_MinMax4_p * rtb_MinMax4_p) *
                              VaMTQR_r_ElmA_FEADCpblty[(i)]) + (rtb_MinMax4_p *
                              VaMTQR_r_ElmB_FEADCpblty[(i)])) +
                VaMTQR_r_ElmC_FEADCpblty[(i)];
            rtb_Sum2_l[i + 16] = (((rtb_Sum2_i3 * rtb_Sum2_i3) *
                                   VaMTQR_r_ElmA_FEADCpblty[(i)]) + (rtb_Sum2_i3
                                   * VaMTQR_r_ElmB_FEADCpblty[(i)])) +
                VaMTQR_r_ElmC_FEADCpblty[(i)];
        }

        /* Outputs for Atomic SubSystem: '<S130>/ProtectedDivision1' */
        /* RelationalOperator: '<S136>/NotEqual1' incorporates:
         *  Constant: '<S134>/Calib'
         *  Constant: '<S136>/ConstantValue1'
         *  Product: '<S130>/Product2'
         *  RelationalOperator: '<S135>/NotEqual'
         *  Switch: '<S135>/Switch1'
         */
        rtb_NotEqual1_d = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) !=
                           0.0F);
        for (i = 0; i < 32; i++)
        {
            rtb_MinMax4_p = rtb_Sum2_l[i];
            rtb_Sum2_i3 = rtb_Sum_aj[i];

            /* Switch: '<S136>/Switch1' incorporates:
             *  Constant: '<S136>/ConstantValue'
             *  Constant: '<S136>/ConstantValue2'
             *  Constant: '<S136>/ConstantValue3'
             *  Logic: '<S136>/AND'
             *  RelationalOperator: '<S136>/GreaterThanorEqual'
             *  RelationalOperator: '<S136>/GreaterThanorEqual1'
             *  RelationalOperator: '<S136>/NotEqual'
             *  RelationalOperator: '<S137>/Comparison1'
             *  Switch: '<S136>/Switch2'
             *  Switch: '<S136>/Switch3'
             */
            if ((rtb_MinMax4_p != 0.0F) && rtb_NotEqual1_d)
            {
                /* Switch: '<S136>/Switch1' incorporates:
                 *  Constant: '<S134>/Calib'
                 *  Product: '<S136>/Division'
                 */
                rtb_MinMax4_p /= (float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
            }
            else if (rtb_MinMax4_p > 0.0F)
            {
                /* Switch: '<S136>/Switch2' incorporates:
                 *  Constant: '<S136>/MAXFLOAT'
                 *  Switch: '<S136>/Switch1'
                 */
                rtb_MinMax4_p = 3.402823466E+38F;
            }
            else if (rtb_MinMax4_p < 0.0F)
            {
                /* Switch: '<S136>/Switch3' incorporates:
                 *  Constant: '<S136>/MINFLOAT'
                 *  Switch: '<S136>/Switch1'
                 */
                rtb_MinMax4_p = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S136>/Switch1' incorporates:
                 *  Constant: '<S136>/ConstantValue4'
                 *  Switch: '<S136>/Switch3'
                 */
                rtb_MinMax4_p = 0.0F;
            }

            /* End of Switch: '<S136>/Switch1' */

            /* Switch: '<S137>/Switch' incorporates:
             *  Constant: '<S137>/ConstantValue'
             *  RelationalOperator: '<S137>/Comparison1'
             */
            if (rtb_Sum2_i3 < 0.0F)
            {
                /* Switch: '<S137>/Switch' */
                rtb_Sum2_i3 = 0.0F;
            }

            /* End of Switch: '<S137>/Switch' */

            /* Switch: '<S138>/Switch' incorporates:
             *  Constant: '<S138>/ConstantValue'
             *  RelationalOperator: '<S138>/Comparison1'
             */
            if (rtb_MinMax4_p < 0.0F)
            {
                /* Switch: '<S138>/Switch' */
                rtb_MinMax4_p = 0.0F;
            }

            /* End of Switch: '<S138>/Switch' */
            rtb_Sum_aj[i] = rtb_Sum2_i3;
            rtb_Sum2_l[i] = rtb_MinMax4_p;
        }

        /* End of Outputs for SubSystem: '<S130>/ProtectedDivision1' */
        for (i = 0; i < 16; i++)
        {
            /* Sum: '<S130>/Sum1' */
            rtb_VariantMerge_For_Variant_Source_Vari[i] =
                rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i] - rtb_Sum_aj[i];
            rtb_VariantMerge_For_Variant_Source_Vari[i + 16] = rtb_Product2[i] -
                rtb_Sum_aj[i + 16];

            /* Sum: '<S130>/Sum3' */
            rtb_VariantMerge_For_Variant_Source_Vari[i + 32] =
                rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i] - rtb_Sum2_l[i];
            rtb_VariantMerge_For_Variant_Source_Vari[i + 48] = rtb_Product3[i] -
                rtb_Sum2_l[i + 16];
        }

        /* End of Outputs for SubSystem: '<S8>/FEADadj' */

        /* Sum: '<S122>/Sum' incorporates:
         *  Product: '<S122>/Product'
         *  Product: '<S122>/Product1'
         *  RelationalOperator: '<S136>/NotEqual'
         *  RelationalOperator: '<S137>/Comparison1'
         *  Switch: '<S136>/Switch1'
         *  Switch: '<S137>/Switch'
         */
        rtb_Switch[0] = (((rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T
                           * rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T)
                          * rtb_TmpSignalConversionAtMedTED_FEAD_Ele[0]) +
                         (rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T
                          * rtb_TmpSignalConversionAtMedTED_FEAD_Ele[1])) +
            rtb_TmpSignalConversionAtMedTED_FEAD_Ele[2];
        rtb_Switch[1] = (((rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h *
                           rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h) *
                          rtb_TmpSignalConversionAtMedTED_FEAD_Ele[0]) +
                         (rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h *
                          rtb_TmpSignalConversionAtMedTED_FEAD_Ele[1])) +
            rtb_TmpSignalConversionAtMedTED_FEAD_Ele[2];

        /* Outputs for Atomic SubSystem: '<S122>/ProtectedDivision' */
        /* RelationalOperator: '<S128>/NotEqual1' incorporates:
         *  Constant: '<S122>/KeTSXR_r_P1f'
         *  Constant: '<S128>/ConstantValue1'
         */
        rtb_NotEqual1_d = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) !=
                           0.0F);
        for (i = 0; i < 2; i++)
        {
            rtb_Sum_a4 = rtb_Switch[i];

            /* Switch: '<S128>/Switch1' incorporates:
             *  Constant: '<S128>/ConstantValue'
             *  Constant: '<S128>/ConstantValue2'
             *  Constant: '<S128>/ConstantValue3'
             *  Logic: '<S128>/AND'
             *  RelationalOperator: '<S128>/GreaterThanorEqual'
             *  RelationalOperator: '<S128>/GreaterThanorEqual1'
             *  RelationalOperator: '<S128>/NotEqual'
             *  Switch: '<S128>/Switch2'
             *  Switch: '<S128>/Switch3'
             */
            if ((rtb_Sum_a4 != 0.0F) && rtb_NotEqual1_d)
            {
                /* Switch: '<S128>/Switch1' incorporates:
                 *  Constant: '<S122>/KeTSXR_r_P1f'
                 *  Product: '<S128>/Division'
                 */
                rtb_Sum_a4 /= (float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
            }
            else if (rtb_Sum_a4 > 0.0F)
            {
                /* Switch: '<S128>/Switch2' incorporates:
                 *  Constant: '<S128>/MAXFLOAT'
                 *  Switch: '<S128>/Switch1'
                 */
                rtb_Sum_a4 = 3.402823466E+38F;
            }
            else if (rtb_Sum_a4 < 0.0F)
            {
                /* Switch: '<S128>/Switch3' incorporates:
                 *  Constant: '<S128>/MINFLOAT'
                 *  Switch: '<S128>/Switch1'
                 */
                rtb_Sum_a4 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S128>/Switch1' incorporates:
                 *  Constant: '<S128>/ConstantValue4'
                 *  Switch: '<S128>/Switch3'
                 */
                rtb_Sum_a4 = 0.0F;
            }

            /* End of Switch: '<S128>/Switch1' */

            /* Switch: '<S129>/Switch' incorporates:
             *  Constant: '<S129>/ConstantValue'
             *  RelationalOperator: '<S129>/Comparison1'
             */
            if (rtb_Sum_a4 < 0.0F)
            {
                /* Switch: '<S129>/Switch' */
                rtb_Sum_a4 = 0.0F;
            }

            /* End of Switch: '<S129>/Switch' */
            rtb_Switch[i] = rtb_Sum_a4;
        }

        /* End of Outputs for SubSystem: '<S122>/ProtectedDivision' */

        /* Switch: '<S14>/Switch1' incorporates:
         *  RelationalOperator: '<S128>/NotEqual'
         *  Sum: '<S122>/Sum1'
         *  Switch: '<S128>/Switch1'
         */
        rtb_Switch13[0] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T - rtb_Switch
            [0];
        rtb_Switch13[1] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h - rtb_Switch
            [1];
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S8>/NoFEADadj' incorporates:
         *  ActionPort: '<S125>/ActionPort'
         */
        for (i = 0; i < 16; i++)
        {
            rtb_VariantMerge_For_Variant_Source_Vari[i] =
                rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i];
            rtb_VariantMerge_For_Variant_Source_Vari[i + 16] = rtb_Product2[i];
            rtb_VariantMerge_For_Variant_Source_Vari[i + 32] =
                rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i];
            rtb_VariantMerge_For_Variant_Source_Vari[i + 48] = rtb_Product3[i];
        }

        /* End of Outputs for SubSystem: '<S8>/NoFEADadj' */

        /* Switch: '<S14>/Switch1' incorporates:
         *  Inport: '<S125>/MTIR_M_MtrAMaxCpblty'
         *  Inport: '<S125>/MTIR_M_MtrAMinCpblty'
         */
        rtb_Switch13[0] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
        rtb_Switch13[1] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h;
    }

#else

    /* Switch: '<S14>/Switch1' incorporates:
     *  SignalConversion generated from: '<S8>/VariantSource3'
     */
    rtb_Switch13[0] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
    rtb_Switch13[1] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h;

#endif

    /* End of If: '<S8>/If2' */

    /* SignalConversion generated from: '<S1>/MTQR_M_MtrA_TorqAchieved_AEMD' incorporates:
     *  Gain: '<S126>/Gain'
     *  Outport: '<Root>/VeMTQR_M_MtrA_TorqAchieved_AEMD'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_TorqAchieved_AEMD_Value(rtb_Switch13[0]);

    /* SignalConversion generated from: '<S1>/MTQR_M_MtrA_TorqAchieved' incorporates:
     *  Gain: '<S127>/Gain'
     *  Outport: '<Root>/VeMTQR_M_MtrA_TorqAchieved'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_TorqAchieved_Value(rtb_Switch13[1]);

    /* SignalConversion generated from: '<S8>/VariantSource1' */
#if !Rte_SysCon_Variant_HSCL_FEAD1

    /* VariantMerge generated from: '<S8>/VariantSource1' */
    for (i = 0; i < 16; i++)
    {
        rtb_VariantMerge_For_Variant_Source_Vari[i] =
            rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i];
        rtb_VariantMerge_For_Variant_Source_Vari[i + 16] = rtb_Product2[i];
        rtb_VariantMerge_For_Variant_Source_Vari[i + 32] =
            rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i];
        rtb_VariantMerge_For_Variant_Source_Vari[i + 48] = rtb_Product3[i];
    }

    /* End of VariantMerge generated from: '<S8>/VariantSource1' */
#endif

    /* End of SignalConversion generated from: '<S8>/VariantSource1' */

    /* Outputs for Atomic SubSystem: '<S10>/SignalLatchOnWithReset1' */
    /* Logic: '<S159>/OR1' incorporates:
     *  Logic: '<S159>/NOT'
     *  Logic: '<S159>/OR'
     *  UnitDelay: '<S159>/UnitDelay'
     *  UnitDelay: '<S4>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_ha = (rtb_Comparison4 ||
        ((!MTQR_ac_DW.UnitDelay_DSTATE_l) && (MTQR_ac_DW.UnitDelay_DSTATE_ha)));

    /* End of Outputs for SubSystem: '<S10>/SignalLatchOnWithReset1' */

    /* If: '<S10>/If' incorporates:
     *  Logic: '<S10>/Logical1'
     *  UnitDelay: '<S159>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeINVR_b_DMPI_T)
    {
        /* Outputs for IfAction SubSystem: '<S10>/IfActionSubsystem3' incorporates:
         *  ActionPort: '<S158>/ActionPort'
         */
        /* Merge: '<S10>/Merge3' incorporates:
         *  Constant: '<S173>/Calib'
         *  SignalConversion generated from: '<S158>/MtrMaxTrq_LU'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LU = KeMTQR_M_MtrMaxTrq_TempStop_LU;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Constant: '<S172>/Calib'
         *  SignalConversion generated from: '<S158>/MtrMaxTrq_LD'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LD = KeMTQR_M_MtrMaxTrq_TempStop_LD;

        /* Merge: '<S10>/Merge1' incorporates:
         *  Constant: '<S175>/Calib'
         *  SignalConversion generated from: '<S158>/MtrMinTrq_LU'
         */
        rtb_VeMTQC_M_MtrMinTrq_LU = KeMTQR_M_MtrMinTrq_TempStop_LU;

        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S174>/Calib'
         *  SignalConversion generated from: '<S158>/MtrMinTrq_LD'
         */
        rtb_VeMTQC_M_MtrMinTrq_LD = KeMTQR_M_MtrMinTrq_TempStop_LD;

        /* End of Outputs for SubSystem: '<S10>/IfActionSubsystem3' */
    }
    else if ((((((rtb_Logical10 || rtb_Comparison1_p) || rtb_Logical4) ||
                rtb_Logical8) || rtb_Logical1) || rtb_Comparison1) ||
             rtb_Comparison2_p)
    {
        /* Outputs for IfAction SubSystem: '<S10>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S155>/ActionPort'
         */
        /* Merge: '<S10>/Merge3' incorporates:
         *  Constant: '<S161>/Calib'
         *  SignalConversion generated from: '<S155>/MtrMaxTrq_LU'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LU = KeMTQR_M_MtrMaxTrq_FailMode_LU;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Constant: '<S160>/Calib'
         *  SignalConversion generated from: '<S155>/MtrMaxTrq_LD'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LD = KeMTQR_M_MtrMaxTrq_FailMode_LD;

        /* Merge: '<S10>/Merge1' incorporates:
         *  Constant: '<S163>/Calib'
         *  SignalConversion generated from: '<S155>/MtrMinTrq_LU'
         */
        rtb_VeMTQC_M_MtrMinTrq_LU = KeMTQR_M_MtrMinTrq_FailMode_LU;

        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S162>/Calib'
         *  SignalConversion generated from: '<S155>/MtrMinTrq_LD'
         */
        rtb_VeMTQC_M_MtrMinTrq_LD = KeMTQR_M_MtrMinTrq_FailMode_LD;

        /* End of Outputs for SubSystem: '<S10>/IfActionSubsystem' */
    }
    else if (MTQR_ac_DW.UnitDelay_DSTATE_ha)
    {
        /* Outputs for IfAction SubSystem: '<S10>/IfActionSubsystem2' incorporates:
         *  ActionPort: '<S157>/ActionPort'
         */
        /* Merge: '<S10>/Merge3' incorporates:
         *  Constant: '<S169>/Calib'
         *  SignalConversion generated from: '<S157>/MtrMaxTrq_LU'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LU = KeMTQR_M_MtrMaxTrq_LU;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Constant: '<S168>/Calib'
         *  SignalConversion generated from: '<S157>/MtrMaxTrq_LD'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LD = KeMTQR_M_MtrMaxTrq_LD;

        /* Merge: '<S10>/Merge1' incorporates:
         *  Constant: '<S171>/Calib'
         *  SignalConversion generated from: '<S157>/MtrMinTrq_LU'
         */
        rtb_VeMTQC_M_MtrMinTrq_LU = KeMTQR_M_MtrTrq_eBoost_LU;

        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S170>/Calib'
         *  SignalConversion generated from: '<S157>/MtrMinTrq_LD'
         */
        rtb_VeMTQC_M_MtrMinTrq_LD = KeMTQR_M_MtrTrq_eBoost_LD;

        /* End of Outputs for SubSystem: '<S10>/IfActionSubsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S10>/IfActionSubsystem1' incorporates:
         *  ActionPort: '<S156>/ActionPort'
         */
        /* Merge: '<S10>/Merge3' incorporates:
         *  Constant: '<S165>/Calib'
         *  SignalConversion generated from: '<S156>/MtrMaxTrq_LU'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LU = KeMTQR_M_MtrMaxTrq_LU;

        /* Merge: '<S10>/Merge2' incorporates:
         *  Constant: '<S164>/Calib'
         *  SignalConversion generated from: '<S156>/MtrMaxTrq_LD'
         */
        rtb_VeMTQC_M_MtrMaxTrq_LD = KeMTQR_M_MtrMaxTrq_LD;

        /* Merge: '<S10>/Merge1' incorporates:
         *  Constant: '<S167>/Calib'
         *  SignalConversion generated from: '<S156>/MtrMinTrq_LU'
         */
        rtb_VeMTQC_M_MtrMinTrq_LU = KeMTQR_M_MtrMinTrq_LU;

        /* Merge: '<S10>/Merge' incorporates:
         *  Constant: '<S166>/Calib'
         *  SignalConversion generated from: '<S156>/MtrMinTrq_LD'
         */
        rtb_VeMTQC_M_MtrMinTrq_LD = KeMTQR_M_MtrMinTrq_LD;

        /* End of Outputs for SubSystem: '<S10>/IfActionSubsystem1' */
    }

    /* End of If: '<S10>/If' */

    /* Outputs for Atomic SubSystem: '<S14>/SignalLatchOnWithReset2' */
    /* Outputs for Atomic SubSystem: '<S14>/GradientLimiter5' */
    /* Outputs for Atomic SubSystem: '<S206>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S206>/Sum2' incorporates:
         *  UnitDelay: '<S14>/UnitDelay1'
         *  UnitDelay: '<S206>/UnitDelay'
         */
        rtb_MinMax4_i = MTQR_ac_DW.UnitDelay1_DSTATE[i] -
            MTQR_ac_DW.UnitDelay_DSTATE_h[i];

        /* Switch: '<S216>/Switch1' incorporates:
         *  RelationalOperator: '<S216>/RelationalOperator'
         */
        if (rtb_VeMTQC_M_MtrMaxTrq_LU < rtb_MinMax4_i)
        {
            /* Switch: '<S24>/Switch8' */
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMaxTrq_LU;
        }

        /* End of Switch: '<S216>/Switch1' */

        /* Switch: '<S216>/Switch' incorporates:
         *  RelationalOperator: '<S216>/RelationalOperator1'
         */
        if (rtb_MinMax4_i <= rtb_VeMTQC_M_MtrMaxTrq_LD)
        {
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMaxTrq_LD;
        }

        /* End of Switch: '<S216>/Switch' */

        /* Sum: '<S206>/Sum3' incorporates:
         *  RelationalOperator: '<S216>/RelationalOperator1'
         *  UnitDelay: '<S206>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_h[i] += rtb_MinMax4_i;

        /* Logic: '<S259>/OR' incorporates:
         *  Abs: '<S14>/Abs'
         *  Constant: '<S211>/Calib'
         *  Logic: '<S212>/NOT'
         *  Logic: '<S212>/OR'
         *  RelationalOperator: '<S14>/Comparison2'
         *  Sum: '<S14>/Subtract'
         *  UnitDelay: '<S14>/UnitDelay1'
         *  UnitDelay: '<S206>/UnitDelay'
         *  UnitDelay: '<S212>/UnitDelay'
         */
        rtb_OR_l[i] = ((fabsf(MTQR_ac_DW.UnitDelay_DSTATE_h[i] -
                              MTQR_ac_DW.UnitDelay1_DSTATE[i]) >
                        KeMTQR_M_ThrdMtrAMin) &&
                       (MTQR_ac_DW.UnitDelay_DSTATE_ei[i]));
    }

    /* End of Outputs for SubSystem: '<S206>/Limiter' */
    /* End of Outputs for SubSystem: '<S14>/GradientLimiter5' */

    /* Logic: '<S212>/OR1' incorporates:
     *  UnitDelay: '<S212>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_ei[0] = (rtb_AND_by || (rtb_OR_l[0]));
    MTQR_ac_DW.UnitDelay_DSTATE_ei[1] = (rtb_AND_by || (rtb_OR_l[1]));

    /* End of Outputs for SubSystem: '<S14>/SignalLatchOnWithReset2' */

    /* MinMax: '<S21>/MinMax4' incorporates:
     *  Constant: '<S13>/ConstantValue'
     *  Constant: '<S198>/Calib'
     *  Constant: '<S200>/Calib'
     *  MinMax: '<S13>/MinMax1'
     */
    rtb_MinMax4_i = fminf(fminf(KeMTQR_M_Conv_MtrA_MinTorq, 0.0F),
                          KeMTQR_M_LimNotActive_MtrA_MinTorq);

    /* Switch: '<S13>/Switch1' */
    if (rtb_Logical10)
    {
        /* MinMax: '<S9>/Maximum9' incorporates:
         *  Constant: '<S198>/Calib'
         */
        rtb_Maximum9 = KeMTQR_M_Conv_MtrA_MinTorq;
    }
    else
    {
        /* MinMax: '<S9>/Maximum9' */
        rtb_Maximum9 = rtb_MinMax4_i;
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Switch: '<S13>/Switch2' */
    if (rtb_Logical8)
    {
        /* MinMax: '<S23>/MinMax4' incorporates:
         *  Constant: '<S13>/ConstantValue'
         */
        rtb_Sum2_j = 0.0F;
    }
    else
    {
        /* MinMax: '<S23>/MinMax4' */
        rtb_Sum2_j = rtb_MinMax4_i;
    }

    /* End of Switch: '<S13>/Switch2' */

    /* Switch: '<S13>/Switch3' incorporates:
     *  Constant: '<S68>/Calib'
     *  Logic: '<S5>/Logical9'
     */
    if (rtb_TmpSignalConversionAtVeESSR_b_Disabl || (HeMTQR_b_MtrA_MinLimits))
    {
        /* MinMax: '<S19>/MinMax4' incorporates:
         *  Constant: '<S200>/Calib'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T =
            KeMTQR_M_LimNotActive_MtrA_MinTorq;
    }
    else
    {
        /* MinMax: '<S19>/MinMax4' */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = rtb_MinMax4_i;
    }

    /* End of Switch: '<S13>/Switch3' */

    /* Switch: '<S13>/Switch5' */
    if (rtb_Comparison1)
    {
        /* MinMax: '<S12>/MinMax4' incorporates:
         *  Constant: '<S203>/Calib'
         */
        rtb_MinMax4_p = KeMTQR_M_VoltCtrl_MtrA_MinTorq;
    }
    else
    {
        /* MinMax: '<S12>/MinMax4' */
        rtb_MinMax4_p = rtb_MinMax4_i;
    }

    /* End of Switch: '<S13>/Switch5' */

    /* Switch: '<S13>/Switch4' */
    if (rtb_TmpSignalConversionAtVeINVR_b_DMPI_T)
    {
        /* MinMax: '<S14>/MinMax4' incorporates:
         *  Constant: '<S13>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h = 0.0F;
    }
    else
    {
        /* MinMax: '<S14>/MinMax4' */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h = rtb_MinMax4_i;
    }

    /* End of Switch: '<S13>/Switch4' */

    /* Switch: '<S13>/Switch6' */
    if (rtb_TmpSignalConversionAtVeESSR_b_Disabl)
    {
        /* MinMax: '<S21>/MinMax4' incorporates:
         *  Constant: '<S199>/Calib'
         */
        rtb_MinMax4_i = KeMTQR_M_ESSNotActive_MtrA_MinTorq;
    }

    /* End of Switch: '<S13>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S13>/GradientLimiter1' */
    /* Sum: '<S197>/Sum2' incorporates:
     *  MinMax: '<S13>/MinMax3'
     *  UnitDelay: '<S197>/UnitDelay'
     */
    rtb_Sum2_i3 = fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(rtb_Maximum9, rtb_Sum2_j),
                           rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T),
                          rtb_MinMax4_p),
                         rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h),
                        rtb_MinMax4_i) - VeMTQC_M_TaMin_Arb;

    /* Outputs for Atomic SubSystem: '<S197>/Limiter' */
    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S202>/Calib'
     *  RelationalOperator: '<S204>/RelationalOperator'
     */
    if (KeMTQR_M_MtrMaxTrq_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_M_MtrMaxTrq_LU;
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S201>/Calib'
     *  RelationalOperator: '<S204>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_M_MtrMaxTrq_LD)
    {
        rtb_Sum2_i3 = KeMTQR_M_MtrMaxTrq_LD;
    }

    /* End of Switch: '<S204>/Switch' */
    /* End of Outputs for SubSystem: '<S197>/Limiter' */

    /* Sum: '<S197>/Sum3' incorporates:
     *  UnitDelay: '<S197>/UnitDelay'
     */
    VeMTQC_M_TaMin_Arb = rtb_Sum2_i3 + VeMTQC_M_TaMin_Arb;

    /* End of Outputs for SubSystem: '<S13>/GradientLimiter1' */

    /* MinMax: '<S14>/MinMax4' incorporates:
     *  Constant: '<S14>/ConstantValue3'
     */
    rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h = fminf
        (rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T, 0.0F);

    /* Switch: '<S218>/Switch1' */
    if (rtb_AND_l)
    {
        /* MinMax: '<S12>/MinMax4' */
        rtb_MinMax4_p = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h;
    }
    else
    {
        /* MinMax: '<S12>/MinMax4' incorporates:
         *  UnitDelay: '<S218>/UnitDelay'
         */
        rtb_MinMax4_p = MTQR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S218>/Switch1' */

    /* Sum: '<S207>/Sum' */
    rtb_Sum_a4 = VeMTQC_M_TaMin_Arb - rtb_MinMax4_p;

    /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
    /* Switch: '<S217>/Switch1' incorporates:
     *  RelationalOperator: '<S217>/RelationalOperator'
     */
    if (rtb_VeMTQC_M_MtrMinTrq_LU < rtb_Sum_a4)
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMinTrq_LU;
    }

    /* End of Switch: '<S217>/Switch1' */

    /* Switch: '<S217>/Switch' incorporates:
     *  RelationalOperator: '<S217>/RelationalOperator1'
     */
    if (rtb_Sum_a4 <= rtb_VeMTQC_M_MtrMinTrq_LD)
    {
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMinTrq_LD;
    }

    /* End of Switch: '<S217>/Switch' */
    /* End of Outputs for SubSystem: '<S207>/Limiter' */

    /* Sum: '<S207>/Sum1' */
    MTQR_ac_DW.UnitDelay_DSTATE = rtb_Sum_a4 + rtb_MinMax4_p;

    /* Switch: '<S14>/Switch2' incorporates:
     *  MinMax: '<S14>/MinMax'
     *  Product: '<S83>/Product1'
     *  UnitDelay: '<S14>/UnitDelay1'
     */
    if (rtb_Logical11)
    {
        MTQR_ac_DW.UnitDelay1_DSTATE[0] = fmaxf(MTQR_ac_DW.UnitDelay_DSTATE,
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M);
        MTQR_ac_DW.UnitDelay1_DSTATE[1] = fmaxf(MTQR_ac_DW.UnitDelay_DSTATE,
            VeMTQR_K_MtrA_DerateFct * rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M);
    }
    else
    {
        MTQR_ac_DW.UnitDelay1_DSTATE[0] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M;
        MTQR_ac_DW.UnitDelay1_DSTATE[1] = VeMTQR_K_MtrA_DerateFct *
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M;
    }

    /* End of Switch: '<S14>/Switch2' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S14>/Switch13' incorporates:
         *  UnitDelay: '<S212>/UnitDelay'
         */
        if (MTQR_ac_DW.UnitDelay_DSTATE_ei[i])
        {
            /* Switch: '<S14>/Switch13' incorporates:
             *  UnitDelay: '<S206>/UnitDelay'
             */
            rtb_Switch13[i] = MTQR_ac_DW.UnitDelay_DSTATE_h[i];
        }
        else
        {
            /* Switch: '<S14>/Switch13' incorporates:
             *  UnitDelay: '<S14>/UnitDelay1'
             */
            rtb_Switch13[i] = MTQR_ac_DW.UnitDelay1_DSTATE[i];
        }

        /* End of Switch: '<S14>/Switch13' */
    }

    /* Switch: '<S14>/Switch3' incorporates:
     *  Constant: '<S210>/Calib'
     *  Product: '<S205>/Product'
     *  Sum: '<S205>/Sum1'
     *  Switch: '<S14>/Switch1'
     */
    if (Rte_Prm_KeHSCR_b_FEADadj_KeHSCR_b_FEADadj())
    {
        /* Outputs for Atomic SubSystem: '<S205>/ProtectedDivision' */
        /* RelationalOperator: '<S214>/NotEqual1' incorporates:
         *  Constant: '<S213>/Calib'
         *  Constant: '<S214>/ConstantValue1'
         */
        rtb_Logical11 = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) != 0.0F);
        for (i = 0; i < 2; i++)
        {
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M = rtb_Switch13[i];

            /* Sum: '<S205>/Sum' incorporates:
             *  Product: '<S205>/Product'
             *  Product: '<S205>/Product1'
             */
            rtb_Sum_a4 = (((rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M *
                            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M) *
                           rtb_TmpSignalConversionAtMedTED_FEAD_Ele[0]) +
                          (rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M *
                           rtb_TmpSignalConversionAtMedTED_FEAD_Ele[1])) +
                rtb_TmpSignalConversionAtMedTED_FEAD_Ele[2];

            /* Switch: '<S214>/Switch1' incorporates:
             *  Constant: '<S214>/ConstantValue'
             *  Constant: '<S214>/ConstantValue2'
             *  Constant: '<S214>/ConstantValue3'
             *  Logic: '<S214>/AND'
             *  RelationalOperator: '<S214>/GreaterThanorEqual'
             *  RelationalOperator: '<S214>/GreaterThanorEqual1'
             *  RelationalOperator: '<S214>/NotEqual'
             *  Switch: '<S214>/Switch2'
             *  Switch: '<S214>/Switch3'
             */
            if ((rtb_Sum_a4 != 0.0F) && rtb_Logical11)
            {
                /* Switch: '<S214>/Switch1' incorporates:
                 *  Constant: '<S213>/Calib'
                 *  Product: '<S214>/Division'
                 */
                rtb_Sum_a4 /= (float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
            }
            else if (rtb_Sum_a4 > 0.0F)
            {
                /* Switch: '<S214>/Switch2' incorporates:
                 *  Constant: '<S214>/MAXFLOAT'
                 *  Switch: '<S214>/Switch1'
                 */
                rtb_Sum_a4 = 3.402823466E+38F;
            }
            else if (rtb_Sum_a4 < 0.0F)
            {
                /* Switch: '<S214>/Switch3' incorporates:
                 *  Constant: '<S214>/MINFLOAT'
                 *  Switch: '<S214>/Switch1'
                 */
                rtb_Sum_a4 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S214>/Switch1' incorporates:
                 *  Constant: '<S214>/ConstantValue4'
                 *  Switch: '<S214>/Switch3'
                 */
                rtb_Sum_a4 = 0.0F;
            }

            /* End of Switch: '<S214>/Switch1' */

            /* Switch: '<S215>/Switch' incorporates:
             *  Constant: '<S215>/ConstantValue'
             *  RelationalOperator: '<S215>/Comparison1'
             */
            if (rtb_Sum_a4 < 0.0F)
            {
                rtb_Sum_a4 = 0.0F;
            }

            /* End of Switch: '<S215>/Switch' */

            /* Switch: '<S14>/Switch1' incorporates:
             *  Sum: '<S205>/Sum1'
             */
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M -= rtb_Sum_a4;
            rtb_Switch13[i] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M;
        }

        /* End of Outputs for SubSystem: '<S205>/ProtectedDivision' */
    }

    /* End of Switch: '<S14>/Switch3' */

    /* SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MinTorq_HTDR_ST' incorporates:
     *  Gain: '<S29>/Gain'
     *  Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_HTDR_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_HTDR_ST_Value(rtb_Switch13[0]);

    /* Outputs for Atomic SubSystem: '<S12>/SignalLatchOnWithReset1' */
    /* Outputs for Atomic SubSystem: '<S12>/GradientLimiter4' */
    /* Outputs for Atomic SubSystem: '<S184>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S184>/Sum2' incorporates:
         *  UnitDelay: '<S12>/UnitDelay'
         *  UnitDelay: '<S184>/UnitDelay'
         */
        rtb_MinMax4_i = MTQR_ac_DW.UnitDelay_DSTATE_e[i] -
            MTQR_ac_DW.UnitDelay_DSTATE_bk[i];

        /* Switch: '<S194>/Switch1' incorporates:
         *  RelationalOperator: '<S194>/RelationalOperator'
         */
        if (rtb_VeMTQC_M_MtrMinTrq_LU < rtb_MinMax4_i)
        {
            /* Switch: '<S24>/Switch8' */
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMinTrq_LU;
        }

        /* End of Switch: '<S194>/Switch1' */

        /* Switch: '<S194>/Switch' incorporates:
         *  RelationalOperator: '<S194>/RelationalOperator1'
         */
        if (rtb_MinMax4_i <= rtb_VeMTQC_M_MtrMinTrq_LD)
        {
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMinTrq_LD;
        }

        /* End of Switch: '<S194>/Switch' */

        /* Sum: '<S184>/Sum3' incorporates:
         *  RelationalOperator: '<S194>/RelationalOperator1'
         *  UnitDelay: '<S184>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_bk[i] += rtb_MinMax4_i;

        /* Logic: '<S259>/OR' incorporates:
         *  Abs: '<S12>/Abs'
         *  Constant: '<S189>/Calib'
         *  Logic: '<S190>/NOT'
         *  Logic: '<S190>/OR'
         *  RelationalOperator: '<S12>/Comparison2'
         *  Sum: '<S12>/Subtract'
         *  UnitDelay: '<S12>/UnitDelay'
         *  UnitDelay: '<S184>/UnitDelay'
         *  UnitDelay: '<S190>/UnitDelay'
         */
        rtb_OR_l[i] = ((fabsf(MTQR_ac_DW.UnitDelay_DSTATE_bk[i] -
                              MTQR_ac_DW.UnitDelay_DSTATE_e[i]) >
                        KeMTQR_M_ThrdMtrAMax) &&
                       (MTQR_ac_DW.UnitDelay_DSTATE_eq[i]));
    }

    /* End of Outputs for SubSystem: '<S184>/Limiter' */
    /* End of Outputs for SubSystem: '<S12>/GradientLimiter4' */

    /* Logic: '<S190>/OR1' incorporates:
     *  UnitDelay: '<S190>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_eq[0] = (rtb_AND_ds || (rtb_OR_l[0]));
    MTQR_ac_DW.UnitDelay_DSTATE_eq[1] = (rtb_AND_ds || (rtb_OR_l[1]));

    /* End of Outputs for SubSystem: '<S12>/SignalLatchOnWithReset1' */

    /* MinMax: '<S12>/MinMax4' incorporates:
     *  Constant: '<S11>/ConstantValue'
     *  Constant: '<S177>/Calib'
     *  Constant: '<S178>/Calib'
     *  MinMax: '<S11>/MinMax1'
     */
    rtb_MinMax4_p = fmaxf(fmaxf(KeMTQR_M_Conv_MtrA_MaxTorq, 0.0F),
                          KeMTQR_M_ESSNotActive_MtrA_MaxTorq);

    /* Switch: '<S11>/Switch1' */
    if (rtb_Logical10)
    {
        /* MinMax: '<S19>/MinMax4' incorporates:
         *  Constant: '<S177>/Calib'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = KeMTQR_M_Conv_MtrA_MaxTorq;
    }
    else
    {
        /* MinMax: '<S19>/MinMax4' */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = rtb_MinMax4_p;
    }

    /* End of Switch: '<S11>/Switch1' */

    /* Switch: '<S11>/Switch2' */
    if (rtb_Logical8)
    {
        /* MinMax: '<S23>/MinMax4' incorporates:
         *  Constant: '<S11>/ConstantValue'
         */
        rtb_Sum2_j = 0.0F;
    }
    else
    {
        /* MinMax: '<S23>/MinMax4' */
        rtb_Sum2_j = rtb_MinMax4_p;
    }

    /* End of Switch: '<S11>/Switch2' */

    /* Switch: '<S11>/Switch3' */
    if (rtb_TmpSignalConversionAtVeESSR_b_Disabl)
    {
        /* MinMax: '<S21>/MinMax4' incorporates:
         *  Constant: '<S178>/Calib'
         */
        rtb_MinMax4_i = KeMTQR_M_ESSNotActive_MtrA_MaxTorq;
    }
    else
    {
        /* MinMax: '<S21>/MinMax4' */
        rtb_MinMax4_i = rtb_MinMax4_p;
    }

    /* End of Switch: '<S11>/Switch3' */

    /* Switch: '<S11>/Switch5' */
    if (rtb_Comparison1)
    {
        /* MinMax: '<S9>/Maximum9' incorporates:
         *  Constant: '<S181>/Calib'
         */
        rtb_Maximum9 = KeMTQR_M_VoltCtrl_MtrA_MaxTorq;
    }
    else
    {
        /* MinMax: '<S9>/Maximum9' */
        rtb_Maximum9 = rtb_MinMax4_p;
    }

    /* End of Switch: '<S11>/Switch5' */

    /* Switch: '<S11>/Switch4' */
    if (rtb_TmpSignalConversionAtVeINVR_b_DMPI_T)
    {
        /* MinMax: '<S12>/MinMax4' incorporates:
         *  Constant: '<S11>/ConstantValue1'
         */
        rtb_MinMax4_p = 0.0F;
    }

    /* End of Switch: '<S11>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S11>/GradientLimiter1' */
    /* Sum: '<S176>/Sum2' incorporates:
     *  MinMax: '<S11>/MinMax2'
     *  UnitDelay: '<S176>/UnitDelay'
     */
    rtb_Sum2_i3 = fminf(fminf(fminf(fminf
                          (rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T, rtb_Sum2_j),
                          rtb_MinMax4_i), rtb_Maximum9), rtb_MinMax4_p) -
        VeMTQC_M_TaMax_Arb;

    /* Outputs for Atomic SubSystem: '<S176>/Limiter' */
    /* Switch: '<S182>/Switch1' incorporates:
     *  Constant: '<S180>/Calib'
     *  RelationalOperator: '<S182>/RelationalOperator'
     */
    if (KeMTQR_M_MtrMinTrq_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_M_MtrMinTrq_LU;
    }

    /* End of Switch: '<S182>/Switch1' */

    /* Switch: '<S182>/Switch' incorporates:
     *  Constant: '<S179>/Calib'
     *  RelationalOperator: '<S182>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_M_MtrMinTrq_LD)
    {
        rtb_Sum2_i3 = KeMTQR_M_MtrMinTrq_LD;
    }

    /* End of Switch: '<S182>/Switch' */
    /* End of Outputs for SubSystem: '<S176>/Limiter' */

    /* Sum: '<S176>/Sum3' incorporates:
     *  UnitDelay: '<S176>/UnitDelay'
     */
    VeMTQC_M_TaMax_Arb = rtb_Sum2_i3 + VeMTQC_M_TaMax_Arb;

    /* End of Outputs for SubSystem: '<S11>/GradientLimiter1' */

    /* MinMax: '<S12>/MinMax4' incorporates:
     *  Constant: '<S12>/ConstantValue3'
     */
    rtb_MinMax4_p = fmaxf(rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T, 0.0F);

    /* Switch: '<S196>/Switch1' */
    if (rtb_AND_p)
    {
        /* MinMax: '<S19>/MinMax4' */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = rtb_MinMax4_p;
    }
    else
    {
        /* MinMax: '<S19>/MinMax4' incorporates:
         *  UnitDelay: '<S196>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = MTQR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S196>/Switch1' */

    /* Sum: '<S185>/Sum' */
    rtb_Sum_a4 = VeMTQC_M_TaMax_Arb - rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;

    /* Outputs for Atomic SubSystem: '<S185>/Limiter' */
    /* Switch: '<S195>/Switch1' incorporates:
     *  RelationalOperator: '<S195>/RelationalOperator'
     */
    if (rtb_VeMTQC_M_MtrMaxTrq_LU < rtb_Sum_a4)
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMaxTrq_LU;
    }

    /* End of Switch: '<S195>/Switch1' */

    /* Switch: '<S195>/Switch' incorporates:
     *  RelationalOperator: '<S195>/RelationalOperator1'
     */
    if (rtb_Sum_a4 <= rtb_VeMTQC_M_MtrMaxTrq_LD)
    {
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMaxTrq_LD;
    }

    /* End of Switch: '<S195>/Switch' */
    /* End of Outputs for SubSystem: '<S185>/Limiter' */

    /* Sum: '<S185>/Sum1' */
    MTQR_ac_DW.UnitDelay_DSTATE_f = rtb_Sum_a4 +
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;

    /* Switch: '<S12>/Switch' incorporates:
     *  MinMax: '<S12>/MinMax'
     *  Product: '<S83>/Product'
     *  UnitDelay: '<S12>/UnitDelay'
     */
    if (rtb_Logical5)
    {
        MTQR_ac_DW.UnitDelay_DSTATE_e[0] = fminf(MTQR_ac_DW.UnitDelay_DSTATE_f,
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f);
        MTQR_ac_DW.UnitDelay_DSTATE_e[1] = fminf(MTQR_ac_DW.UnitDelay_DSTATE_f,
            VeMTQR_K_MtrA_DerateFct * rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f);
    }
    else
    {
        MTQR_ac_DW.UnitDelay_DSTATE_e[0] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f;
        MTQR_ac_DW.UnitDelay_DSTATE_e[1] = VeMTQR_K_MtrA_DerateFct *
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f;
    }

    /* End of Switch: '<S12>/Switch' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S12>/Switch12' incorporates:
         *  UnitDelay: '<S190>/UnitDelay'
         */
        if (MTQR_ac_DW.UnitDelay_DSTATE_eq[i])
        {
            /* Switch: '<S12>/Switch12' incorporates:
             *  UnitDelay: '<S184>/UnitDelay'
             */
            rtb_Switch[i] = MTQR_ac_DW.UnitDelay_DSTATE_bk[i];
        }
        else
        {
            /* Switch: '<S12>/Switch12' incorporates:
             *  UnitDelay: '<S12>/UnitDelay'
             */
            rtb_Switch[i] = MTQR_ac_DW.UnitDelay_DSTATE_e[i];
        }

        /* End of Switch: '<S12>/Switch12' */
    }

    /* Switch: '<S12>/Switch2' incorporates:
     *  Constant: '<S188>/Calib'
     *  Product: '<S183>/Product'
     *  Sum: '<S183>/Sum1'
     *  Switch: '<S12>/Switch1'
     */
    if (Rte_Prm_KeHSCR_b_FEADadj_KeHSCR_b_FEADadj())
    {
        /* Outputs for Atomic SubSystem: '<S183>/ProtectedDivision' */
        /* RelationalOperator: '<S192>/NotEqual1' incorporates:
         *  Constant: '<S191>/Calib'
         *  Constant: '<S192>/ConstantValue1'
         */
        rtb_Logical10 = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) != 0.0F);
        for (i = 0; i < 2; i++)
        {
            rtb_Sum_a4 = rtb_Switch[i];

            /* Sum: '<S183>/Sum' incorporates:
             *  Product: '<S183>/Product'
             *  Product: '<S183>/Product1'
             */
            rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = (((rtb_Sum_a4 *
                rtb_Sum_a4) * rtb_TmpSignalConversionAtMedTED_FEAD_Ele[0]) +
                (rtb_Sum_a4 * rtb_TmpSignalConversionAtMedTED_FEAD_Ele[1])) +
                rtb_TmpSignalConversionAtMedTED_FEAD_Ele[2];

            /* Switch: '<S192>/Switch1' incorporates:
             *  Constant: '<S192>/ConstantValue'
             *  Constant: '<S192>/ConstantValue2'
             *  Constant: '<S192>/ConstantValue3'
             *  Logic: '<S192>/AND'
             *  RelationalOperator: '<S192>/GreaterThanorEqual'
             *  RelationalOperator: '<S192>/GreaterThanorEqual1'
             *  RelationalOperator: '<S192>/NotEqual'
             *  Switch: '<S192>/Switch2'
             *  Switch: '<S192>/Switch3'
             */
            if ((rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T != 0.0F) &&
                    rtb_Logical10)
            {
                /* Switch: '<S192>/Switch1' incorporates:
                 *  Constant: '<S191>/Calib'
                 *  Product: '<S192>/Division'
                 */
                rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T /= (float32)
                    Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
            }
            else if (rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T > 0.0F)
            {
                /* Switch: '<S192>/Switch2' incorporates:
                 *  Constant: '<S192>/MAXFLOAT'
                 *  Switch: '<S192>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = 3.402823466E+38F;
            }
            else if (rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T < 0.0F)
            {
                /* Switch: '<S192>/Switch3' incorporates:
                 *  Constant: '<S192>/MINFLOAT'
                 *  Switch: '<S192>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S192>/Switch1' incorporates:
                 *  Constant: '<S192>/ConstantValue4'
                 *  Switch: '<S192>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = 0.0F;
            }

            /* End of Switch: '<S192>/Switch1' */

            /* Switch: '<S193>/Switch' incorporates:
             *  Constant: '<S193>/ConstantValue'
             *  RelationalOperator: '<S193>/Comparison1'
             */
            if (rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T < 0.0F)
            {
                rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = 0.0F;
            }

            /* End of Switch: '<S193>/Switch' */

            /* Switch: '<S12>/Switch1' incorporates:
             *  Sum: '<S183>/Sum1'
             */
            rtb_Sum_a4 -= rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T;
            rtb_Switch[i] = rtb_Sum_a4;
        }

        /* End of Outputs for SubSystem: '<S183>/ProtectedDivision' */
    }

    /* End of Switch: '<S12>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeDTRR_e_AxleTrqRespType' */
    (void)Rte_Read_VeDTRR_e_AxleTrqRespType_Value(&tmpRead_k);

    /* Inport: '<Root>/VeSCCR_b_RrAxlRq' */
    (void)Rte_Read_VeSCCR_b_RrAxlRq_Value(&rtb_Logical1_o);

    /* Inport: '<Root>/VeSCCR_b_FrntAxlRq' */
    (void)Rte_Read_VeSCCR_b_FrntAxlRq_Value(&tmpRead_j);

    /* Inport: '<Root>/VeICSR_b_Disable_Ni_Global' */
    (void)Rte_Read_VeICSR_b_Disable_Ni_Global_Value(&rtb_Logical5_l_idx_1);

    /* Inport: '<Root>/VeHSER_b_DisablNxClsdLoopCntrl' */
    (void)Rte_Read_VeHSER_b_DisablNxClsdLoopCntrl_Value(&rtb_Logical5_l_idx_2);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MTQR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST' incorporates:
     *  Gain: '<S45>/Gain'
     *  Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_HTDR_ST_Value(rtb_Switch[0]);

    /* Logic: '<S24>/Logical11' incorporates:
     *  Constant: '<S273>/Constant'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Logic: '<S24>/Logical1'
     *  Logic: '<S24>/Logical9'
     *  RelationalOperator: '<S24>/RelationalOperator2'
     */
    rtb_Logical11 = ((!rtb_Logical5_l_idx_1) && (((uint32)tmpRead_3) ==
                      CeESSR_e_EngRunning));

    /* Logic: '<S24>/Logical4' incorporates:
     *  Constant: '<S280>/Calib'
     *  Constant: '<S281>/Calib'
     */
    rtb_Logical8 = (rtb_Logical11 && (KeMTQR_b_NiCL_MtrAEnbl));
    rtb_TmpSignalConversionAtVeESSR_b_Disabl = (rtb_Logical11 &&
        (KeMTQR_b_NiCL_MtrBEnbl));

    /* Logic: '<S24>/Logical11' incorporates:
     *  Logic: '<S24>/Logical3'
     */
    rtb_Logical11 = !rtb_Logical5_l_idx_2;

    /* Logic: '<S24>/Logical5' incorporates:
     *  Constant: '<S282>/Calib'
     *  Constant: '<S283>/Calib'
     *  Constant: '<S284>/Calib'
     */
    rtb_Logical5 = (rtb_Logical11 && (KeMTQR_b_NxCL_MtrAEnbl));
    rtb_Logical5_l_idx_1 = (rtb_Logical11 && (KeMTQR_b_NxCL_MtrBEnbl));
    rtb_Logical5_l_idx_2 = (rtb_Logical11 && (KeMTQR_b_NxCL_MtrCEnbl));

    /* Logic: '<S24>/Logical11' incorporates:
     *  Constant: '<S272>/Constant'
     *  Inport: '<Root>/VeDTRR_e_AxleTrqRespType'
     *  RelationalOperator: '<S24>/RelationalOperator1'
     */
    rtb_Logical11 = (((uint32)tmpRead_k) != CePTAR_e_Inactive);

    /* Logic: '<S24>/Logical10' */
    rtb_Logical10 = (tmpRead_j || rtb_Logical11);

    /* Logic: '<S24>/Logical11' */
    rtb_Logical11 = (rtb_Logical11 || rtb_Logical1_o);

    /* Gain: '<S286>/Gain' incorporates:
     *  Constant: '<S274>/Calib'
     *  Constant: '<S276>/Calib'
     *  Constant: '<S278>/Calib'
     *  Logic: '<S24>/Logical2'
     *  Logic: '<S24>/Logical6'
     *  Logic: '<S24>/Logical7'
     *  Logic: '<S24>/Logical8'
     */
    VeMTQC_b_MtrALim_BstEnbl = (((((rtb_TmpSignalConversionAtVeESSR_b_AStrtP &&
        (KeMTQR_b_Astrt_MtrAEnbl)) || rtb_Logical8) || rtb_Logical5) ||
        (rtb_Logical10 && (KeMTQR_b_ESCFrnt_MtrAEnbl))) || (rtb_Logical11 &&
        (KeMTQR_b_ESCRear_MtrAEnbl)));

    /* SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MinTorq_HTDR_LT' incorporates:
     *  Gain: '<S28>/Gain'
     *  Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_HTDR_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_HTDR_LT_Value(rtb_Switch13[1]);

    /* SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MaxTorq_HTDR_LT' incorporates:
     *  Gain: '<S48>/Gain'
     *  Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_HTDR_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_HTDR_LT_Value(rtb_Switch[1]);

    /* Switch: '<S24>/Switch6' */
    if (VeMTQC_b_MtrALim_BstEnbl)
    {
        /* Switch: '<S24>/Switch6' incorporates:
         *  Gain: '<S29>/Gain'
         *  Gain: '<S45>/Gain'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = rtb_Switch13[0];
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f = rtb_Switch[0];
    }
    else
    {
        /* Switch: '<S24>/Switch6' incorporates:
         *  Gain: '<S28>/Gain'
         *  Gain: '<S48>/Gain'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = rtb_Switch13[1];
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f = rtb_Switch[1];
    }

    /* End of Switch: '<S24>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S19>/SignalLatchOnWithReset4' */
    /* Outputs for Atomic SubSystem: '<S19>/GradientLimiter7' */
    /* Outputs for Atomic SubSystem: '<S248>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S248>/Sum2' incorporates:
         *  UnitDelay: '<S19>/UnitDelay4'
         *  UnitDelay: '<S248>/UnitDelay'
         */
        rtb_MinMax4_i = MTQR_ac_DW.UnitDelay4_DSTATE[i] -
            MTQR_ac_DW.UnitDelay_DSTATE_jm[i];

        /* Switch: '<S252>/Switch1' incorporates:
         *  RelationalOperator: '<S252>/RelationalOperator'
         */
        if (rtb_VeMTQC_M_MtrMaxTrq_LU < rtb_MinMax4_i)
        {
            /* Switch: '<S24>/Switch8' */
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMaxTrq_LU;
        }

        /* End of Switch: '<S252>/Switch1' */

        /* Switch: '<S252>/Switch' incorporates:
         *  RelationalOperator: '<S252>/RelationalOperator1'
         */
        if (rtb_MinMax4_i <= rtb_VeMTQC_M_MtrMaxTrq_LD)
        {
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMaxTrq_LD;
        }

        /* End of Switch: '<S252>/Switch' */

        /* Sum: '<S248>/Sum3' incorporates:
         *  RelationalOperator: '<S252>/RelationalOperator1'
         *  UnitDelay: '<S248>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_jm[i] += rtb_MinMax4_i;

        /* Logic: '<S259>/OR' incorporates:
         *  Abs: '<S19>/Abs'
         *  Constant: '<S250>/Calib'
         *  Logic: '<S251>/NOT'
         *  Logic: '<S251>/OR'
         *  RelationalOperator: '<S19>/Comparison2'
         *  Sum: '<S19>/Subtract'
         *  UnitDelay: '<S19>/UnitDelay4'
         *  UnitDelay: '<S248>/UnitDelay'
         *  UnitDelay: '<S251>/UnitDelay'
         */
        rtb_OR_l[i] = ((fabsf(MTQR_ac_DW.UnitDelay_DSTATE_jm[i] -
                              MTQR_ac_DW.UnitDelay4_DSTATE[i]) >
                        KeMTQR_M_ThrdMtrBMin) &&
                       (MTQR_ac_DW.UnitDelay_DSTATE_hi[i]));
    }

    /* End of Outputs for SubSystem: '<S248>/Limiter' */
    /* End of Outputs for SubSystem: '<S19>/GradientLimiter7' */

    /* Logic: '<S251>/OR1' incorporates:
     *  UnitDelay: '<S251>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_hi[0] = (rtb_AND_ha || (rtb_OR_l[0]));
    MTQR_ac_DW.UnitDelay_DSTATE_hi[1] = (rtb_AND_ha || (rtb_OR_l[1]));

    /* End of Outputs for SubSystem: '<S19>/SignalLatchOnWithReset4' */

    /* MinMax: '<S19>/MinMax4' incorporates:
     *  Constant: '<S18>/ConstantValue'
     *  Constant: '<S243>/Calib'
     *  MinMax: '<S18>/MinMax1'
     */
    rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = fminf(KeMTQR_M_Conv_MtrB_MinTorq,
        0.0F);

    /* Switch: '<S18>/Switch1' */
    if (rtb_Comparison1_p)
    {
        /* MinMax: '<S23>/MinMax4' incorporates:
         *  Constant: '<S243>/Calib'
         */
        rtb_Sum2_j = KeMTQR_M_Conv_MtrB_MinTorq;
    }
    else
    {
        /* MinMax: '<S23>/MinMax4' */
        rtb_Sum2_j = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Switch: '<S18>/Switch2' */
    if (rtb_Logical4)
    {
        /* MinMax: '<S21>/MinMax4' incorporates:
         *  Constant: '<S18>/ConstantValue'
         */
        rtb_MinMax4_i = 0.0F;
    }
    else
    {
        /* MinMax: '<S21>/MinMax4' */
        rtb_MinMax4_i = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
    }

    /* End of Switch: '<S18>/Switch2' */

    /* Switch: '<S18>/Switch3' */
    if (rtb_Comparison2_p)
    {
        /* MinMax: '<S9>/Maximum9' incorporates:
         *  Constant: '<S246>/Calib'
         */
        rtb_Maximum9 = KeMTQR_M_VoltCtrl_MtrB_MinTorq;
    }
    else
    {
        /* MinMax: '<S9>/Maximum9' */
        rtb_Maximum9 = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
    }

    /* End of Switch: '<S18>/Switch3' */

    /* Switch: '<S18>/Switch4' */
    if (rtb_TmpSignalConversionAtVeINVR_b_DMPI_T)
    {
        /* MinMax: '<S19>/MinMax4' incorporates:
         *  Constant: '<S18>/ConstantValue1'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = 0.0F;
    }

    /* End of Switch: '<S18>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S18>/GradientLimiter1' */
    /* Sum: '<S242>/Sum2' incorporates:
     *  MinMax: '<S18>/MinMax2'
     *  UnitDelay: '<S242>/UnitDelay'
     */
    rtb_Sum2_i3 = fmaxf(fmaxf(fmaxf(rtb_Sum2_j, rtb_MinMax4_i), rtb_Maximum9),
                        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T)
        - VeMTQC_M_TbMin_Arb;

    /* Outputs for Atomic SubSystem: '<S242>/Limiter' */
    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S245>/Calib'
     *  RelationalOperator: '<S247>/RelationalOperator'
     */
    if (KeMTQR_M_MtrMaxTrq_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_M_MtrMaxTrq_LU;
    }

    /* End of Switch: '<S247>/Switch1' */

    /* Switch: '<S247>/Switch' incorporates:
     *  Constant: '<S244>/Calib'
     *  RelationalOperator: '<S247>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_M_MtrMaxTrq_LD)
    {
        rtb_Sum2_i3 = KeMTQR_M_MtrMaxTrq_LD;
    }

    /* End of Switch: '<S247>/Switch' */
    /* End of Outputs for SubSystem: '<S242>/Limiter' */

    /* Sum: '<S242>/Sum3' incorporates:
     *  UnitDelay: '<S242>/UnitDelay'
     */
    VeMTQC_M_TbMin_Arb = rtb_Sum2_i3 + VeMTQC_M_TbMin_Arb;

    /* End of Outputs for SubSystem: '<S18>/GradientLimiter1' */

    /* MinMax: '<S19>/MinMax4' incorporates:
     *  Constant: '<S19>/ConstantValue3'
     */
    rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T = fminf
        (rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T, 0.0F);

    /* Switch: '<S254>/Switch1' */
    if (rtb_AND_et)
    {
        /* MinMax: '<S23>/MinMax4' */
        rtb_Sum2_j = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
    }
    else
    {
        /* MinMax: '<S23>/MinMax4' incorporates:
         *  UnitDelay: '<S254>/UnitDelay'
         */
        rtb_Sum2_j = MTQR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S254>/Switch1' */

    /* Sum: '<S249>/Sum' */
    rtb_Sum_a4 = VeMTQC_M_TbMin_Arb - rtb_Sum2_j;

    /* Outputs for Atomic SubSystem: '<S249>/Limiter' */
    /* Switch: '<S253>/Switch1' incorporates:
     *  RelationalOperator: '<S253>/RelationalOperator'
     */
    if (rtb_VeMTQC_M_MtrMinTrq_LU < rtb_Sum_a4)
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMinTrq_LU;
    }

    /* End of Switch: '<S253>/Switch1' */

    /* Switch: '<S253>/Switch' incorporates:
     *  RelationalOperator: '<S253>/RelationalOperator1'
     */
    if (rtb_Sum_a4 <= rtb_VeMTQC_M_MtrMinTrq_LD)
    {
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMinTrq_LD;
    }

    /* End of Switch: '<S253>/Switch' */
    /* End of Outputs for SubSystem: '<S249>/Limiter' */

    /* Sum: '<S249>/Sum1' */
    MTQR_ac_DW.UnitDelay_DSTATE_d = rtb_Sum_a4 + rtb_Sum2_j;

    /* Switch: '<S19>/Switch3' incorporates:
     *  MinMax: '<S19>/MinMax'
     *  Product: '<S84>/Product1'
     *  UnitDelay: '<S19>/UnitDelay4'
     */
    if (rtb_Logical3_l)
    {
        MTQR_ac_DW.UnitDelay4_DSTATE[0] = fmaxf(MTQR_ac_DW.UnitDelay_DSTATE_d,
            rtb_TmpSignalConversionAtVeMTIR_M_MtrB_M);
        MTQR_ac_DW.UnitDelay4_DSTATE[1] = fmaxf(MTQR_ac_DW.UnitDelay_DSTATE_d,
            VeMTQR_K_MtrB_DerateFct * rtb_TmpSignalConversionAtVeMTIR_M_MtrB_M);
    }
    else
    {
        MTQR_ac_DW.UnitDelay4_DSTATE[0] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrB_M;
        MTQR_ac_DW.UnitDelay4_DSTATE[1] = VeMTQR_K_MtrB_DerateFct *
            rtb_TmpSignalConversionAtVeMTIR_M_MtrB_M;
    }

    /* End of Switch: '<S19>/Switch3' */

    /* Logic: '<S17>/Logical1' */
    rtb_Logical1_o = (rtb_AND_ha || rtb_Comparison4);

    /* Outputs for Atomic SubSystem: '<S17>/SignalLatchOnWithReset3' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S19>/Switch15' incorporates:
         *  UnitDelay: '<S251>/UnitDelay'
         */
        if (MTQR_ac_DW.UnitDelay_DSTATE_hi[i])
        {
            /* Switch: '<S19>/Switch15' incorporates:
             *  UnitDelay: '<S248>/UnitDelay'
             */
            rtb_Switch15[i] = MTQR_ac_DW.UnitDelay_DSTATE_jm[i];
        }
        else
        {
            /* Switch: '<S19>/Switch15' incorporates:
             *  UnitDelay: '<S19>/UnitDelay4'
             */
            rtb_Switch15[i] = MTQR_ac_DW.UnitDelay4_DSTATE[i];
        }

        /* End of Switch: '<S19>/Switch15' */

        /* RelationalOperator: '<S17>/Comparison2' incorporates:
         *  Abs: '<S17>/Abs'
         *  Constant: '<S232>/Calib'
         *  Sum: '<S17>/Subtract'
         *  UnitDelay: '<S17>/UnitDelay'
         *  UnitDelay: '<S17>/UnitDelay1'
         */
        tmpRead_j = (fabsf(MTQR_ac_DW.UnitDelay1_DSTATE_m[i] -
                           MTQR_ac_DW.UnitDelay_DSTATE_k[i]) <=
                     KeMTQR_M_ThrdMtrBMax);

        /* Logic: '<S259>/OR' incorporates:
         *  Logic: '<S237>/NOT'
         *  Logic: '<S237>/OR'
         *  UnitDelay: '<S237>/UnitDelay'
         */
        rtb_OR_l[i] = ((!tmpRead_j) && (MTQR_ac_DW.UnitDelay_DSTATE_p[i]));

        /* RelationalOperator: '<S17>/Comparison2' */
        rtb_Comparison2_pp[i] = tmpRead_j;
    }

    /* Logic: '<S237>/OR1' incorporates:
     *  UnitDelay: '<S237>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_p[0] = (rtb_Logical1_o || (rtb_OR_l[0]));
    MTQR_ac_DW.UnitDelay_DSTATE_p[1] = (rtb_Logical1_o || (rtb_OR_l[1]));

    /* End of Outputs for SubSystem: '<S17>/SignalLatchOnWithReset3' */

    /* Outputs for Atomic SubSystem: '<S17>/GradientLimiter6' */
    /* Outputs for Atomic SubSystem: '<S228>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S17>/Switch2' incorporates:
         *  UnitDelay: '<S237>/UnitDelay'
         */
        if (MTQR_ac_DW.UnitDelay_DSTATE_p[i])
        {
            /* Switch: '<S17>/Switch2' */
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMinTrq_LU;
        }
        else
        {
            /* Switch: '<S17>/Switch2' */
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMaxTrq_LU;
        }

        /* End of Switch: '<S17>/Switch2' */

        /* Sum: '<S228>/Sum2' incorporates:
         *  UnitDelay: '<S17>/UnitDelay'
         *  UnitDelay: '<S228>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_k[i] -= MTQR_ac_DW.UnitDelay_DSTATE_cg[i];

        /* Switch: '<S239>/Switch1' incorporates:
         *  RelationalOperator: '<S239>/RelationalOperator'
         */
        if (rtb_MinMax4_i >= MTQR_ac_DW.UnitDelay_DSTATE_k[i])
        {
            /* Switch: '<S24>/Switch8' */
            rtb_MinMax4_i = MTQR_ac_DW.UnitDelay_DSTATE_k[i];
        }

        /* End of Switch: '<S239>/Switch1' */

        /* Switch: '<S239>/Switch' incorporates:
         *  RelationalOperator: '<S239>/RelationalOperator1'
         */
        if (rtb_MinMax4_i <= rtb_VeMTQC_M_MtrMinTrq_LD)
        {
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMinTrq_LD;
        }

        /* End of Switch: '<S239>/Switch' */

        /* Sum: '<S228>/Sum3' incorporates:
         *  UnitDelay: '<S17>/UnitDelay1'
         *  UnitDelay: '<S228>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay1_DSTATE_m[i] = rtb_MinMax4_i +
            MTQR_ac_DW.UnitDelay_DSTATE_cg[i];

        /* Update for UnitDelay: '<S228>/UnitDelay' incorporates:
         *  UnitDelay: '<S17>/UnitDelay1'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_cg[i] = MTQR_ac_DW.UnitDelay1_DSTATE_m[i];
    }

    /* End of Outputs for SubSystem: '<S228>/Limiter' */
    /* End of Outputs for SubSystem: '<S17>/GradientLimiter6' */

    /* MinMax: '<S23>/MinMax4' incorporates:
     *  Constant: '<S16>/ConstantValue'
     *  Constant: '<S222>/Calib'
     *  MinMax: '<S16>/MinMax1'
     */
    rtb_Sum2_j = fmaxf(KeMTQR_M_Conv_MtrB_MaxTorq, 0.0F);

    /* Switch: '<S16>/Switch1' */
    if (rtb_Comparison1_p)
    {
        /* MinMax: '<S21>/MinMax4' incorporates:
         *  Constant: '<S222>/Calib'
         */
        rtb_MinMax4_i = KeMTQR_M_Conv_MtrB_MaxTorq;
    }
    else
    {
        /* MinMax: '<S21>/MinMax4' */
        rtb_MinMax4_i = rtb_Sum2_j;
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Switch: '<S16>/Switch2' */
    if (rtb_Logical4)
    {
        /* MinMax: '<S9>/Maximum9' incorporates:
         *  Constant: '<S16>/ConstantValue'
         */
        rtb_Maximum9 = 0.0F;
    }
    else
    {
        /* MinMax: '<S9>/Maximum9' */
        rtb_Maximum9 = rtb_Sum2_j;
    }

    /* End of Switch: '<S16>/Switch2' */

    /* Switch: '<S16>/Switch3' */
    if (rtb_Comparison2_p)
    {
        /* MinMax: '<S17>/MinMax4' incorporates:
         *  Constant: '<S225>/Calib'
         */
        rtb_Sum2_i3 = KeMTQR_M_VoltCtrl_MtrB_MaxTorq;
    }
    else
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = rtb_Sum2_j;
    }

    /* End of Switch: '<S16>/Switch3' */

    /* Switch: '<S16>/Switch4' */
    if (rtb_TmpSignalConversionAtVeINVR_b_DMPI_T)
    {
        /* MinMax: '<S23>/MinMax4' incorporates:
         *  Constant: '<S16>/ConstantValue1'
         */
        rtb_Sum2_j = 0.0F;
    }

    /* End of Switch: '<S16>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S16>/GradientLimiter1' */
    /* Sum: '<S221>/Sum2' incorporates:
     *  MinMax: '<S16>/MinMax2'
     *  UnitDelay: '<S221>/UnitDelay'
     */
    rtb_Sum2_i3 = fminf(fminf(fminf(rtb_MinMax4_i, rtb_Maximum9), rtb_Sum2_i3),
                        rtb_Sum2_j) - VeMTQC_M_TbMax_Arb;

    /* Outputs for Atomic SubSystem: '<S221>/Limiter' */
    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S224>/Calib'
     *  RelationalOperator: '<S226>/RelationalOperator'
     */
    if (KeMTQR_M_MtrMinTrq_LU < rtb_Sum2_i3)
    {
        /* MinMax: '<S17>/MinMax4' */
        rtb_Sum2_i3 = KeMTQR_M_MtrMinTrq_LU;
    }

    /* End of Switch: '<S226>/Switch1' */

    /* Switch: '<S226>/Switch' incorporates:
     *  Constant: '<S223>/Calib'
     *  RelationalOperator: '<S226>/RelationalOperator1'
     */
    if (rtb_Sum2_i3 <= KeMTQR_M_MtrMinTrq_LD)
    {
        rtb_Sum2_i3 = KeMTQR_M_MtrMinTrq_LD;
    }

    /* End of Switch: '<S226>/Switch' */
    /* End of Outputs for SubSystem: '<S221>/Limiter' */

    /* Sum: '<S221>/Sum3' incorporates:
     *  UnitDelay: '<S221>/UnitDelay'
     */
    VeMTQC_M_TbMax_Arb = rtb_Sum2_i3 + VeMTQC_M_TbMax_Arb;

    /* End of Outputs for SubSystem: '<S16>/GradientLimiter1' */

    /* MinMax: '<S17>/MinMax4' incorporates:
     *  Constant: '<S17>/ConstantValue3'
     */
    rtb_Sum2_i3 = fmaxf(rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T, 0.0F);

    /* Switch: '<S241>/Switch1' */
    if (rtb_AND_et)
    {
        /* MinMax: '<S23>/MinMax4' */
        rtb_Sum2_j = rtb_Sum2_i3;
    }
    else
    {
        /* MinMax: '<S23>/MinMax4' incorporates:
         *  UnitDelay: '<S241>/UnitDelay'
         */
        rtb_Sum2_j = MTQR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S241>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_Switch1_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MTQR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* Sum: '<S229>/Sum' */
    rtb_Sum_a4 = VeMTQC_M_TbMax_Arb - rtb_Sum2_j;

    /* Outputs for Atomic SubSystem: '<S229>/Limiter' */
    /* Switch: '<S240>/Switch1' incorporates:
     *  RelationalOperator: '<S240>/RelationalOperator'
     */
    if (rtb_VeMTQC_M_MtrMaxTrq_LU < rtb_Sum_a4)
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMaxTrq_LU;
    }

    /* End of Switch: '<S240>/Switch1' */

    /* Switch: '<S240>/Switch' incorporates:
     *  RelationalOperator: '<S240>/RelationalOperator1'
     */
    if (rtb_Sum_a4 <= rtb_VeMTQC_M_MtrMaxTrq_LD)
    {
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMaxTrq_LD;
    }

    /* End of Switch: '<S240>/Switch' */
    /* End of Outputs for SubSystem: '<S229>/Limiter' */

    /* Sum: '<S229>/Sum1' */
    MTQR_ac_DW.UnitDelay_DSTATE_g = rtb_Sum_a4 + rtb_Sum2_j;

    /* Product: '<S17>/Product' incorporates:
     *  Constant: '<S17>/ConstantValue1'
     *  Constant: '<S233>/Calib'
     *  Product: '<S15>/Product'
     *  Switch: '<S15>/Switch'
     */
    rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T = KeMTQR_P_xEboostMtrBPwrLimit *
        9548.8F;

    /* Outputs for Atomic SubSystem: '<S17>/ProtectedDivision' */
    /* Switch: '<S236>/Switch1' incorporates:
     *  Constant: '<S236>/ConstantValue'
     *  Constant: '<S236>/ConstantValue2'
     *  Constant: '<S236>/ConstantValue3'
     *  Product: '<S17>/Product'
     *  RelationalOperator: '<S236>/GreaterThanorEqual'
     *  RelationalOperator: '<S236>/GreaterThanorEqual1'
     *  RelationalOperator: '<S236>/NotEqual'
     *  Switch: '<S236>/Switch2'
     *  Switch: '<S236>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T != 0.0F)
    {
        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S17>/ConstantValue'
         *  MinMax: '<S17>/MinMax2'
         *  Product: '<S236>/Division'
         */
        rtb_Switch1_m = rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T / fmaxf
            (rtb_Switch1_m, 1.0F);
    }
    else if (rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T > 0.0F)
    {
        /* Switch: '<S236>/Switch2' incorporates:
         *  Constant: '<S236>/MAXFLOAT'
         *  Switch: '<S236>/Switch1'
         */
        rtb_Switch1_m = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T < 0.0F)
    {
        /* Switch: '<S236>/Switch3' incorporates:
         *  Constant: '<S236>/MINFLOAT'
         *  Switch: '<S236>/Switch1'
         *  Switch: '<S236>/Switch2'
         */
        rtb_Switch1_m = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S236>/ConstantValue4'
         *  Switch: '<S236>/Switch2'
         *  Switch: '<S236>/Switch3'
         */
        rtb_Switch1_m = 0.0F;
    }

    /* End of Switch: '<S236>/Switch1' */
    /* End of Outputs for SubSystem: '<S17>/ProtectedDivision' */

    /* MinMax: '<S17>/MinMax1' */
    rtb_MinMax1_e[0] = fminf(rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g,
        rtb_Switch1_m);
    rtb_MinMax1_e[1] = fminf(rtb_Product_m4, rtb_Switch1_m);

    /* Switch: '<S17>/Switch1' incorporates:
     *  MinMax: '<S17>/MinMax'
     *  Switch: '<S17>/Switch'
     *  UnitDelay: '<S17>/UnitDelay'
     */
    if (rtb_Logical3_l)
    {
        MTQR_ac_DW.UnitDelay_DSTATE_k[0] = fminf(MTQR_ac_DW.UnitDelay_DSTATE_g,
            rtb_MinMax1_e[0]);
        MTQR_ac_DW.UnitDelay_DSTATE_k[1] = fminf(MTQR_ac_DW.UnitDelay_DSTATE_g,
            rtb_MinMax1_e[1]);
    }
    else if (rtb_Comparison4)
    {
        /* Switch: '<S17>/Switch' incorporates:
         *  UnitDelay: '<S17>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_k[0] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g;
        MTQR_ac_DW.UnitDelay_DSTATE_k[1] = rtb_Product_m4;
    }
    else
    {
        MTQR_ac_DW.UnitDelay_DSTATE_k[0] = rtb_MinMax1_e[0];
        MTQR_ac_DW.UnitDelay_DSTATE_k[1] = rtb_MinMax1_e[1];
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S17>/Switch3' incorporates:
     *  Constant: '<S234>/Calib'
     *  RelationalOperator: '<S17>/Comparison1'
     */
    if (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I <= KeMTQR_T_InvBTemp_Rcvr)
    {
        /* Switch: '<S17>/Switch3' incorporates:
         *  Constant: '<S231>/Calib'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g = KeMTQR_M_MtrBMax_HighTmp_LU;
    }
    else
    {
        /* Switch: '<S17>/Switch3' incorporates:
         *  Constant: '<S17>/Constant'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g = 0.0F;
    }

    /* End of Switch: '<S17>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S17>/GradientLimiter1' */
    /* Sum: '<S227>/Sum2' incorporates:
     *  Lookup_n-D: '<S235>/KtMTQR_M_MtrBMax_InvTmp'
     *  SignalConversion generated from: '<S1>/VeINVR_T_MtrB_InvrtrTemp'
     *  UnitDelay: '<S227>/UnitDelay'
     */
    rtb_Sum2_j = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeINVR_T_MtrB_I,
        ((const float32 *)&(KxMTQR_M_MtrBMax_InvTmp[0])), ((const float32 *)
        &(KtMTQR_M_MtrBMax_InvTmp[0])), 1U) - MTQR_ac_DW.UnitDelay_DSTATE_my;

    /* Outputs for Atomic SubSystem: '<S227>/Limiter' */
    /* Switch: '<S238>/Switch1' incorporates:
     *  RelationalOperator: '<S238>/RelationalOperator'
     */
    if (rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g < rtb_Sum2_j)
    {
        /* MinMax: '<S23>/MinMax4' */
        rtb_Sum2_j = rtb_TmpSignalConversionAtVeMTIR_M_MtrB_g;
    }

    /* End of Switch: '<S238>/Switch1' */

    /* Switch: '<S238>/Switch' incorporates:
     *  Constant: '<S230>/Calib'
     *  RelationalOperator: '<S238>/RelationalOperator1'
     */
    if (rtb_Sum2_j <= KeMTQR_M_MtrBMax_HighTmp_LD)
    {
        rtb_Sum2_j = KeMTQR_M_MtrBMax_HighTmp_LD;
    }

    /* End of Switch: '<S238>/Switch' */
    /* End of Outputs for SubSystem: '<S227>/Limiter' */

    /* Sum: '<S227>/Sum3' incorporates:
     *  UnitDelay: '<S227>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_my += rtb_Sum2_j;

    /* End of Outputs for SubSystem: '<S17>/GradientLimiter1' */

    /* Gain: '<S285>/Gain' incorporates:
     *  Constant: '<S275>/Calib'
     *  Constant: '<S277>/Calib'
     *  Logic: '<S24>/Logical2'
     *  Logic: '<S24>/Logical6'
     *  Logic: '<S24>/Logical8'
     */
    VeMTQC_b_MtrBLim_BstEnbl = ((((rtb_TmpSignalConversionAtVeESSR_b_AStrtP &&
        (KeMTQR_b_Astrt_MtrBEnbl)) || rtb_TmpSignalConversionAtVeESSR_b_Disabl) ||
        rtb_Logical5_l_idx_1) || (rtb_Logical10 && (KeMTQR_b_ESCFrnt_MtrBEnbl)));

    /* Outputs for Atomic SubSystem: '<S23>/SignalLatchOnWithReset4' */
    /* Outputs for Atomic SubSystem: '<S23>/GradientLimiter7' */
    /* Outputs for Atomic SubSystem: '<S264>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S17>/Switch14' incorporates:
         *  UnitDelay: '<S17>/UnitDelay'
         *  UnitDelay: '<S17>/UnitDelay1'
         *  UnitDelay: '<S237>/UnitDelay'
         */
        if (MTQR_ac_DW.UnitDelay_DSTATE_p[i])
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I =
                MTQR_ac_DW.UnitDelay1_DSTATE_m[i];
        }
        else
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I =
                MTQR_ac_DW.UnitDelay_DSTATE_k[i];
        }

        /* End of Switch: '<S17>/Switch14' */

        /* MinMax: '<S17>/Min' incorporates:
         *  UnitDelay: '<S227>/UnitDelay'
         */
        rtb_MinMax1_e[i] = fminf(rtb_TmpSignalConversionAtVeINVR_T_MtrB_I,
            MTQR_ac_DW.UnitDelay_DSTATE_my);

        /* Sum: '<S264>/Sum2' incorporates:
         *  UnitDelay: '<S23>/UnitDelay4'
         *  UnitDelay: '<S264>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeINVR_T_MtrB_I =
            MTQR_ac_DW.UnitDelay4_DSTATE_a[i] - MTQR_ac_DW.UnitDelay_DSTATE_i2[i];

        /* Switch: '<S268>/Switch1' incorporates:
         *  RelationalOperator: '<S268>/RelationalOperator'
         */
        if (rtb_VeMTQC_M_MtrMaxTrq_LU < rtb_TmpSignalConversionAtVeINVR_T_MtrB_I)
        {
            /* Switch: '<S23>/Switch15' */
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I = rtb_VeMTQC_M_MtrMaxTrq_LU;
        }

        /* End of Switch: '<S268>/Switch1' */

        /* Switch: '<S268>/Switch' incorporates:
         *  RelationalOperator: '<S268>/RelationalOperator1'
         */
        if (rtb_TmpSignalConversionAtVeINVR_T_MtrB_I <=
                rtb_VeMTQC_M_MtrMaxTrq_LD)
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I = rtb_VeMTQC_M_MtrMaxTrq_LD;
        }

        /* End of Switch: '<S268>/Switch' */

        /* Sum: '<S264>/Sum3' incorporates:
         *  RelationalOperator: '<S268>/RelationalOperator1'
         *  UnitDelay: '<S264>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_i2[i] +=
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I;

        /* Logic: '<S259>/OR' incorporates:
         *  Abs: '<S23>/Abs'
         *  Constant: '<S266>/Calib'
         *  Logic: '<S267>/NOT'
         *  Logic: '<S267>/OR'
         *  RelationalOperator: '<S23>/Comparison2'
         *  Sum: '<S23>/Subtract'
         *  UnitDelay: '<S23>/UnitDelay4'
         *  UnitDelay: '<S264>/UnitDelay'
         *  UnitDelay: '<S267>/UnitDelay'
         */
        rtb_OR_l[i] = ((fabsf(MTQR_ac_DW.UnitDelay_DSTATE_i2[i] -
                              MTQR_ac_DW.UnitDelay4_DSTATE_a[i]) >
                        KeMTQR_M_ThrdMtrCMin) &&
                       (MTQR_ac_DW.UnitDelay_DSTATE_co[i]));
    }

    /* End of Outputs for SubSystem: '<S264>/Limiter' */
    /* End of Outputs for SubSystem: '<S23>/GradientLimiter7' */

    /* Logic: '<S267>/OR1' incorporates:
     *  UnitDelay: '<S267>/UnitDelay'
     */
    MTQR_ac_DW.UnitDelay_DSTATE_co[0] = (rtb_AND_m || (rtb_OR_l[0]));
    MTQR_ac_DW.UnitDelay_DSTATE_co[1] = (rtb_AND_m || (rtb_OR_l[1]));

    /* End of Outputs for SubSystem: '<S23>/SignalLatchOnWithReset4' */

    /* MinMax: '<S23>/MinMax4' incorporates:
     *  Constant: '<S23>/ConstantValue3'
     */
    rtb_Sum2_j = fminf(rtb_TmpSignalConversionAtVeHTDR_M_MtrC_T, 0.0F);

    /* Switch: '<S270>/Switch1' */
    if (rtb_AND_it)
    {
        /* MinMax: '<S21>/MinMax4' */
        rtb_MinMax4_i = rtb_Sum2_j;
    }
    else
    {
        /* MinMax: '<S21>/MinMax4' incorporates:
         *  UnitDelay: '<S270>/UnitDelay'
         */
        rtb_MinMax4_i = MTQR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S265>/Limiter' */
    /* Switch: '<S269>/Switch1' incorporates:
     *  RelationalOperator: '<S269>/RelationalOperator'
     *  Sum: '<S265>/Sum'
     */
    if (rtb_VeMTQC_M_MtrMinTrq_LU < (0.0F - rtb_MinMax4_i))
    {
        /* MinMax: '<S9>/Maximum9' */
        rtb_Maximum9 = rtb_VeMTQC_M_MtrMinTrq_LU;
    }
    else
    {
        /* MinMax: '<S9>/Maximum9' */
        rtb_Maximum9 = 0.0F - rtb_MinMax4_i;
    }

    /* End of Switch: '<S269>/Switch1' */

    /* Switch: '<S269>/Switch' incorporates:
     *  RelationalOperator: '<S269>/RelationalOperator1'
     */
    if (rtb_Maximum9 <= rtb_VeMTQC_M_MtrMinTrq_LD)
    {
        rtb_Maximum9 = rtb_VeMTQC_M_MtrMinTrq_LD;
    }

    /* End of Switch: '<S269>/Switch' */
    /* End of Outputs for SubSystem: '<S265>/Limiter' */

    /* Sum: '<S265>/Sum1' */
    MTQR_ac_DW.UnitDelay_DSTATE_j = rtb_Maximum9 + rtb_MinMax4_i;

    /* Switch: '<S23>/Switch3' incorporates:
     *  MinMax: '<S23>/MinMax'
     *  Product: '<S85>/Product1'
     *  UnitDelay: '<S23>/UnitDelay4'
     */
    if (rtb_Logical1)
    {
        MTQR_ac_DW.UnitDelay4_DSTATE_a[0] = fmaxf(MTQR_ac_DW.UnitDelay_DSTATE_j,
            rtb_TmpSignalConversionAtVeMTIR_M_MtrC_M);
        MTQR_ac_DW.UnitDelay4_DSTATE_a[1] = fmaxf(MTQR_ac_DW.UnitDelay_DSTATE_j,
            VeMTQR_K_MtrC_DerateFct * rtb_TmpSignalConversionAtVeMTIR_M_MtrC_M);
    }
    else
    {
        MTQR_ac_DW.UnitDelay4_DSTATE_a[0] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrC_M;
        MTQR_ac_DW.UnitDelay4_DSTATE_a[1] = VeMTQR_K_MtrC_DerateFct *
            rtb_TmpSignalConversionAtVeMTIR_M_MtrC_M;
    }

    /* End of Switch: '<S23>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S21>/SignalLatchOnWithReset3' */
    /* Outputs for Atomic SubSystem: '<S21>/GradientLimiter6' */
    /* Outputs for Atomic SubSystem: '<S256>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S23>/Switch15' incorporates:
         *  UnitDelay: '<S267>/UnitDelay'
         */
        if (MTQR_ac_DW.UnitDelay_DSTATE_co[i])
        {
            /* Switch: '<S23>/Switch15' incorporates:
             *  UnitDelay: '<S264>/UnitDelay'
             */
            rtb_Sum2[i] = MTQR_ac_DW.UnitDelay_DSTATE_i2[i];
        }
        else
        {
            /* Switch: '<S23>/Switch15' incorporates:
             *  UnitDelay: '<S23>/UnitDelay4'
             */
            rtb_Sum2[i] = MTQR_ac_DW.UnitDelay4_DSTATE_a[i];
        }

        /* End of Switch: '<S23>/Switch15' */

        /* Sum: '<S256>/Sum2' incorporates:
         *  UnitDelay: '<S21>/UnitDelay'
         *  UnitDelay: '<S256>/UnitDelay'
         */
        rtb_MinMax4_i = MTQR_ac_DW.UnitDelay_DSTATE_i[i] -
            MTQR_ac_DW.UnitDelay_DSTATE_c[i];

        /* Switch: '<S260>/Switch1' incorporates:
         *  RelationalOperator: '<S260>/RelationalOperator'
         */
        if (rtb_VeMTQC_M_MtrMinTrq_LU < rtb_MinMax4_i)
        {
            /* Switch: '<S260>/Switch1' */
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMinTrq_LU;
        }

        /* End of Switch: '<S260>/Switch1' */

        /* Switch: '<S260>/Switch' incorporates:
         *  RelationalOperator: '<S260>/RelationalOperator1'
         */
        if (rtb_MinMax4_i <= rtb_VeMTQC_M_MtrMinTrq_LD)
        {
            rtb_MinMax4_i = rtb_VeMTQC_M_MtrMinTrq_LD;
        }

        /* End of Switch: '<S260>/Switch' */

        /* Sum: '<S256>/Sum3' incorporates:
         *  RelationalOperator: '<S260>/RelationalOperator1'
         *  UnitDelay: '<S256>/UnitDelay'
         */
        MTQR_ac_DW.UnitDelay_DSTATE_c[i] += rtb_MinMax4_i;

        /* Logic: '<S259>/OR' incorporates:
         *  Abs: '<S21>/Abs'
         *  Constant: '<S258>/Calib'
         *  Logic: '<S259>/NOT'
         *  RelationalOperator: '<S21>/Comparison2'
         *  Sum: '<S21>/Subtract'
         *  UnitDelay: '<S21>/UnitDelay'
         *  UnitDelay: '<S256>/UnitDelay'
         *  UnitDelay: '<S259>/UnitDelay'
         */
        rtb_OR_l[i] = ((fabsf(MTQR_ac_DW.UnitDelay_DSTATE_c[i] -
                              MTQR_ac_DW.UnitDelay_DSTATE_i[i]) >
                        KeMTQR_M_ThrdMtrCMax) &&
                       (MTQR_ac_DW.UnitDelay_DSTATE_ij[i]));
    }

    /* End of Outputs for SubSystem: '<S256>/Limiter' */
    /* End of Outputs for SubSystem: '<S21>/GradientLimiter6' */

    /* Logic: '<S259>/OR1' */
    MTQR_ac_DW.UnitDelay_DSTATE_ij[0] = (rtb_AND_m || (rtb_OR_l[0]));
    MTQR_ac_DW.UnitDelay_DSTATE_ij[1] = (rtb_AND_m || (rtb_OR_l[1]));

    /* End of Outputs for SubSystem: '<S21>/SignalLatchOnWithReset3' */

    /* MinMax: '<S21>/MinMax4' incorporates:
     *  Constant: '<S21>/ConstantValue3'
     */
    rtb_MinMax4_i = fmaxf(rtb_TmpSignalConversionAtVeHTDR_M_MtrC_T, 0.0F);

    /* Switch: '<S262>/Switch1' */
    if (rtb_AND_it)
    {
        /* MinMax: '<S9>/Maximum9' */
        rtb_Maximum9 = rtb_MinMax4_i;
    }
    else
    {
        /* MinMax: '<S9>/Maximum9' incorporates:
         *  UnitDelay: '<S262>/UnitDelay'
         */
        rtb_Maximum9 = MTQR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S262>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S257>/Limiter' */
    /* Switch: '<S261>/Switch1' incorporates:
     *  RelationalOperator: '<S261>/RelationalOperator'
     *  Sum: '<S257>/Sum'
     */
    if (rtb_VeMTQC_M_MtrMaxTrq_LU < (0.0F - rtb_Maximum9))
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = rtb_VeMTQC_M_MtrMaxTrq_LU;
    }
    else
    {
        /* Switch: '<S261>/Switch1' */
        rtb_Sum_a4 = 0.0F - rtb_Maximum9;
    }

    /* End of Switch: '<S261>/Switch1' */

    /* Switch: '<S261>/Switch' incorporates:
     *  RelationalOperator: '<S261>/RelationalOperator1'
     */
    if (rtb_Sum_a4 > rtb_VeMTQC_M_MtrMaxTrq_LD)
    {
        rtb_VeMTQC_M_MtrMaxTrq_LD = rtb_Sum_a4;
    }

    /* End of Switch: '<S261>/Switch' */
    /* End of Outputs for SubSystem: '<S257>/Limiter' */

    /* Sum: '<S257>/Sum1' */
    MTQR_ac_DW.UnitDelay_DSTATE_m = rtb_VeMTQC_M_MtrMaxTrq_LD + rtb_Maximum9;

    /* Switch: '<S21>/Switch1' incorporates:
     *  MinMax: '<S21>/MinMax'
     *  Product: '<S85>/Product'
     *  UnitDelay: '<S21>/UnitDelay'
     */
    if (rtb_Logical1)
    {
        MTQR_ac_DW.UnitDelay_DSTATE_i[0] = fminf(MTQR_ac_DW.UnitDelay_DSTATE_m,
            rtb_TmpSignalConversionAtVeMTIR_M_MtrC_d);
        MTQR_ac_DW.UnitDelay_DSTATE_i[1] = fminf(MTQR_ac_DW.UnitDelay_DSTATE_m,
            VeMTQR_K_MtrC_DerateFct * rtb_TmpSignalConversionAtVeMTIR_M_MtrC_d);
    }
    else
    {
        MTQR_ac_DW.UnitDelay_DSTATE_i[0] =
            rtb_TmpSignalConversionAtVeMTIR_M_MtrC_d;
        MTQR_ac_DW.UnitDelay_DSTATE_i[1] = VeMTQR_K_MtrC_DerateFct *
            rtb_TmpSignalConversionAtVeMTIR_M_MtrC_d;
    }

    /* End of Switch: '<S21>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeESSR_M_MtrC_MaxTorq' */
    (void)Rte_Read_VeESSR_M_MtrC_MaxTorq_Value(&tmpRead_i);

    /* Inport: '<Root>/VeESSR_M_MtrC_MinTorq' */
    (void)Rte_Read_VeESSR_M_MtrC_MinTorq_Value(&tmpRead_h);

    /* Inport: '<Root>/VeHADR_M_MtrC_ReserveTorqPos' */
    (void)Rte_Read_VeHADR_M_MtrC_ReserveTorqPos_Value(&tmpRead_g);

    /* Inport: '<Root>/VeHADR_M_MtrC_ReserveTorqNeg' */
    (void)Rte_Read_VeHADR_M_MtrC_ReserveTorqNeg_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MTQR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S21>/Switch14' */
        if (MTQR_ac_DW.UnitDelay_DSTATE_ij[i])
        {
            /* Switch: '<S24>/Switch8' incorporates:
             *  UnitDelay: '<S256>/UnitDelay'
             */
            rtb_Switch2_fv[i] = MTQR_ac_DW.UnitDelay_DSTATE_c[i];
        }
        else
        {
            /* Switch: '<S24>/Switch8' incorporates:
             *  UnitDelay: '<S21>/UnitDelay'
             */
            rtb_Switch2_fv[i] = MTQR_ac_DW.UnitDelay_DSTATE_i[i];
        }

        /* End of Switch: '<S21>/Switch14' */
    }

    /* Gain: '<S51>/Gain' */
    rtb_TmpSignalConversionAtVeHTDR_M_MtrC_T = rtb_Switch2_fv[0];

    /* Gain: '<S287>/Gain' incorporates:
     *  Constant: '<S279>/Calib'
     *  Logic: '<S24>/Logical7'
     *  Logic: '<S24>/Logical8'
     */
    VeMTQC_b_MtrCLim_BstEnbl = (rtb_Logical5_l_idx_2 || (rtb_Logical11 &&
        (KeMTQR_b_ESCRear_MtrCEnbl)));

    /* SignalConversion generated from: '<S1>/VeMTQR_M_MtrC_MaxTorq_LT' incorporates:
     *  Gain: '<S52>/Gain'
     *  Outport: '<Root>/VeMTQR_M_MtrC_MaxTorq_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MaxTorq_LT_Value(rtb_Switch2_fv[1]);

    /* Switch: '<S24>/Switch8' */
    if (VeMTQC_b_MtrCLim_BstEnbl)
    {
        /* Switch: '<S24>/Switch8' incorporates:
         *  Gain: '<S33>/Gain'
         */
        rtb_Switch2_fv[0] = rtb_Sum2[0];
        rtb_Switch2_fv[1] = rtb_TmpSignalConversionAtVeHTDR_M_MtrC_T;
    }
    else
    {
        /* Switch: '<S24>/Switch8' incorporates:
         *  Gain: '<S32>/Gain'
         */
        rtb_Switch2_fv[0] = rtb_Sum2[1];
    }

    /* End of Switch: '<S24>/Switch8' */

    /* Switch: '<S9>/Switch1' incorporates:
     *  Inport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR'
     *  Inport: '<Root>/VeESSR_M_MtrA_MaxTorq'
     *  Inport: '<Root>/VeHADR_M_MtrA_ReserveTorqPos'
     *  Inport: '<Root>/VeICSR_M_TaMaxReserve_CLR'
     */
    if (!rtb_Comparison1)
    {
        (void)Rte_Read_VeBCPR_M_BeltTrqMaxHTDR_Value(&VeMTQR_M_TbMin);
        (void)Rte_Read_VeESSR_M_MtrA_MaxTorq_Value(&tmpRead_d);
        (void)Rte_Read_VeHADR_M_MtrA_ReserveTorqPos_Value(&tmpRead_a);
        (void)Rte_Read_VeICSR_M_TaMaxReserve_CLR_Value(&tmpRead_7);

        /* Switch: '<S9>/Switch1' incorporates:
         *  Constant: '<S147>/Calib'
         *  Constant: '<S149>/Calib'
         *  Inport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR'
         *  Inport: '<Root>/VeESSR_M_MtrA_MaxTorq'
         *  Inport: '<Root>/VeHADR_M_MtrA_ReserveTorqPos'
         *  Inport: '<Root>/VeICSR_M_TaMaxReserve_CLR'
         *  MinMax: '<S9>/Maximum1'
         *  MinMax: '<S9>/Maximum3'
         *  Sum: '<S9>/Subtraction'
         */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f = fmaxf
            (KeMTQR_M_MtrTrqMaxWindow, fminf(fminf
              (((rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f -
                 KeMTQR_M_TaMaxReserve) - tmpRead_7) - tmpRead_a, tmpRead_d),
              VeMTQR_M_TbMin));
    }

    /* End of Switch: '<S9>/Switch1' */

    /* Switch: '<S9>/Switch2' incorporates:
     *  Inport: '<Root>/VeESSR_M_MtrB_MinTorq'
     *  Inport: '<Root>/VeHADR_M_MtrB_ReserveTorqNeg'
     *  Inport: '<Root>/VeICSR_M_TbMinReserve_CLR'
     */
    if (rtb_Comparison2_p)
    {
        /* Switch: '<S24>/Switch7' */
        if (VeMTQC_b_MtrBLim_BstEnbl)
        {
            /* Switch: '<S9>/Switch2' incorporates:
             *  Gain: '<S31>/Gain'
             */
            VeMTQR_M_TbMin = rtb_Switch15[0];
        }
        else
        {
            /* Switch: '<S9>/Switch2' */
            VeMTQR_M_TbMin = rtb_Switch15[1];
        }
    }
    else
    {
        (void)Rte_Read_VeESSR_M_MtrB_MinTorq_Value(&tmpRead_e);
        (void)Rte_Read_VeHADR_M_MtrB_ReserveTorqNeg_Value(&tmpRead_b);
        (void)Rte_Read_VeICSR_M_TbMinReserve_CLR_Value(&tmpRead_8);

        /* Switch: '<S24>/Switch7' incorporates:
         *  Gain: '<S31>/Gain'
         *  Inport: '<Root>/VeESSR_M_MtrB_MinTorq'
         *  Inport: '<Root>/VeHADR_M_MtrB_ReserveTorqNeg'
         *  Inport: '<Root>/VeICSR_M_TbMinReserve_CLR'
         */
        if (VeMTQC_b_MtrBLim_BstEnbl)
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I = rtb_Switch15[0];
        }
        else
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I = rtb_Switch15[1];
        }

        /* Switch: '<S9>/Switch2' incorporates:
         *  Constant: '<S148>/Calib'
         *  Constant: '<S152>/Calib'
         *  MinMax: '<S9>/Maximum6'
         *  MinMax: '<S9>/Minimum2'
         *  Sum: '<S9>/Summation1'
         */
        VeMTQR_M_TbMin = fminf(KeMTQR_M_MtrTrqMinWindow, fmaxf
                               (((rtb_TmpSignalConversionAtVeINVR_T_MtrB_I +
            KeMTQR_M_TbMinReserve) + tmpRead_8) + tmpRead_b, tmpRead_e));
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Switch: '<S9>/Switch3' incorporates:
     *  Inport: '<Root>/VeBCPR_M_BeltTrqMinHTDR'
     *  Inport: '<Root>/VeESSR_M_MtrA_MinTorq'
     *  Inport: '<Root>/VeHADR_M_MtrA_ReserveTorqNeg'
     *  Inport: '<Root>/VeICSR_M_TaMinReserve_CLR'
     */
    if (!rtb_Comparison1)
    {
        (void)Rte_Read_VeBCPR_M_BeltTrqMinHTDR_Value(&VeMTQR_M_TbMax);
        (void)Rte_Read_VeESSR_M_MtrA_MinTorq_Value(&rtb_Switch2_bp);
        (void)Rte_Read_VeHADR_M_MtrA_ReserveTorqNeg_Value(&rtb_Switch_kx_idx_1);
        (void)Rte_Read_VeICSR_M_TaMinReserve_CLR_Value(&rtb_Switch_kx_idx_2);

        /* Switch: '<S9>/Switch3' incorporates:
         *  Constant: '<S148>/Calib'
         *  Constant: '<S150>/Calib'
         *  Inport: '<Root>/VeBCPR_M_BeltTrqMinHTDR'
         *  Inport: '<Root>/VeESSR_M_MtrA_MinTorq'
         *  Inport: '<Root>/VeHADR_M_MtrA_ReserveTorqNeg'
         *  Inport: '<Root>/VeICSR_M_TaMinReserve_CLR'
         *  MinMax: '<S9>/Maximum2'
         *  MinMax: '<S9>/Minimum1'
         *  Sum: '<S9>/Summation'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T = fminf
            (KeMTQR_M_MtrTrqMinWindow, fmaxf(fmaxf
              (((rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T
                 + KeMTQR_M_TaMinReserve) + rtb_Switch_kx_idx_2) +
               rtb_Switch_kx_idx_1, rtb_Switch2_bp), VeMTQR_M_TbMax));
    }

    /* End of Switch: '<S9>/Switch3' */

    /* Switch: '<S9>/Switch4' incorporates:
     *  Inport: '<Root>/VeESSR_M_MtrB_MaxTorq'
     *  Inport: '<Root>/VeHADR_M_MtrB_ReserveTorqPos'
     *  Inport: '<Root>/VeICSR_M_TbMaxReserve_CLR'
     */
    if (rtb_Comparison2_p)
    {
        /* Switch: '<S24>/Switch7' */
        if (VeMTQC_b_MtrBLim_BstEnbl)
        {
            /* Switch: '<S9>/Switch4' incorporates:
             *  Gain: '<S49>/Gain'
             */
            VeMTQR_M_TbMax = rtb_MinMax1_e[0];
        }
        else
        {
            /* Switch: '<S9>/Switch4' */
            VeMTQR_M_TbMax = rtb_MinMax1_e[1];
        }
    }
    else
    {
        (void)Rte_Read_VeESSR_M_MtrB_MaxTorq_Value(&rtb_Switch_kx_idx_3);
        (void)Rte_Read_VeHADR_M_MtrB_ReserveTorqPos_Value(&tmpRead_c);
        (void)Rte_Read_VeICSR_M_TbMaxReserve_CLR_Value(&tmpRead_9);

        /* Switch: '<S24>/Switch7' incorporates:
         *  Gain: '<S49>/Gain'
         *  Inport: '<Root>/VeESSR_M_MtrB_MaxTorq'
         *  Inport: '<Root>/VeHADR_M_MtrB_ReserveTorqPos'
         *  Inport: '<Root>/VeICSR_M_TbMaxReserve_CLR'
         */
        if (VeMTQC_b_MtrBLim_BstEnbl)
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I = rtb_MinMax1_e[0];
        }
        else
        {
            rtb_TmpSignalConversionAtVeINVR_T_MtrB_I = rtb_MinMax1_e[1];
        }

        /* Switch: '<S9>/Switch4' incorporates:
         *  Constant: '<S147>/Calib'
         *  Constant: '<S151>/Calib'
         *  MinMax: '<S9>/Maximum4'
         *  MinMax: '<S9>/Maximum5'
         *  Sum: '<S9>/Subtraction1'
         */
        VeMTQR_M_TbMax = fmaxf(KeMTQR_M_MtrTrqMaxWindow, fminf
                               (((rtb_TmpSignalConversionAtVeINVR_T_MtrB_I -
            KeMTQR_M_TbMaxReserve) - tmpRead_9) - tmpRead_c, rtb_Switch_kx_idx_3));
    }

    /* End of Switch: '<S9>/Switch4' */

    /* Switch: '<S196>/Switch3' incorporates:
     *  UnitDelay: '<S196>/UnitDelay'
     */
    if (rtb_AND_p)
    {
        MTQR_ac_DW.UnitDelay_DSTATE_f = rtb_MinMax4_p;
    }

    /* End of Switch: '<S196>/Switch3' */

    /* Switch: '<S218>/Switch3' incorporates:
     *  UnitDelay: '<S218>/UnitDelay'
     */
    if (rtb_AND_l)
    {
        MTQR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_h;
    }

    /* End of Switch: '<S218>/Switch3' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S12>/Switch1' */
        rtb_Sum_a4 = rtb_Switch[i];

        /* Switch: '<S14>/Switch1' */
        rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M = rtb_Switch13[i];

        /* Switch: '<S12>/Switch1' incorporates:
         *  Constant: '<S187>/Calib'
         *  Switch: '<S14>/Switch1'
         */
        if (HeMTQR_b_MtrA_12VBSGTorqPathEnbl)
        {
            /* Switch: '<S12>/Switch1' incorporates:
             *  Constant: '<S186>/Calib'
             */
            rtb_Sum_a4 = HeMTQR_M_12VBSG_MtrA_MaxTrq;

            /* Switch: '<S14>/Switch1' incorporates:
             *  Constant: '<S208>/Calib'
             */
            rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M =
                HeMTQR_M_12VBSG_MtrA_MinTrq;
        }

        /* Switch: '<S14>/Switch1' */
        rtb_Switch13[i] = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_M;

        /* Switch: '<S12>/Switch1' */
        rtb_Switch[i] = rtb_Sum_a4;
    }

    /* Switch: '<S15>/Switch' incorporates:
     *  RelationalOperator: '<S220>/NotEqual1'
     *  Switch: '<S220>/Switch1'
     */
    if (rtb_Comparison4)
    {
        /* Switch: '<S15>/Switch' */
        for (i = 0; i < 16; i++)
        {
            rtb_Sum_aj[i] = rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa[i];
            rtb_Sum_aj[i + 16] = rtb_Product2_l[i];
        }
    }
    else
    {
        for (i = 0; i < 16; i++)
        {
            /* MinMax: '<S15>/MinMax1' incorporates:
             *  Constant: '<S15>/ConstantValue'
             */
            rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i] = fmaxf
                (rtb_TmpSignalConversionAtVaMTIR_n_MtrBCp[i], 1.0F);
        }

        /* Outputs for Atomic SubSystem: '<S15>/ProtectedDivision' */
        /* RelationalOperator: '<S220>/NotEqual' incorporates:
         *  Constant: '<S220>/ConstantValue'
         */
        rtb_TmpSignalConversionAtVeESSR_b_AStrtP =
            (rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T != 0.0F);

        /* Switch: '<S220>/Switch2' incorporates:
         *  Constant: '<S220>/ConstantValue2'
         *  Constant: '<S220>/ConstantValue3'
         *  RelationalOperator: '<S220>/GreaterThanorEqual'
         *  RelationalOperator: '<S220>/GreaterThanorEqual1'
         *  Switch: '<S220>/Switch3'
         */
        if (rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T > 0.0F)
        {
            /* Switch: '<S220>/Switch2' incorporates:
             *  Constant: '<S220>/MAXFLOAT'
             */
            rtb_Switch2_bp = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T < 0.0F)
        {
            /* Switch: '<S220>/Switch3' incorporates:
             *  Constant: '<S220>/MINFLOAT'
             *  Switch: '<S220>/Switch2'
             */
            rtb_Switch2_bp = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S220>/Switch2' incorporates:
             *  Constant: '<S220>/ConstantValue4'
             *  Switch: '<S220>/Switch3'
             */
            rtb_Switch2_bp = 0.0F;
        }

        /* End of Switch: '<S220>/Switch2' */
        for (i = 0; i < 16; i++)
        {
            rtb_MinMax4_p = rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i];

            /* Switch: '<S220>/Switch1' incorporates:
             *  Constant: '<S220>/ConstantValue1'
             *  Logic: '<S220>/AND'
             *  RelationalOperator: '<S220>/NotEqual1'
             */
            if (rtb_TmpSignalConversionAtVeESSR_b_AStrtP && (rtb_MinMax4_p !=
                    0.0F))
            {
                /* Switch: '<S220>/Switch1' incorporates:
                 *  Product: '<S220>/Division'
                 */
                rtb_MinMax4_p = rtb_TmpSignalConversionAtVeHTDR_M_MtrB_T /
                    rtb_MinMax4_p;
            }
            else
            {
                /* Switch: '<S220>/Switch1' */
                rtb_MinMax4_p = rtb_Switch2_bp;
            }

            /* End of Switch: '<S220>/Switch1' */

            /* Switch: '<S15>/Switch' incorporates:
             *  MinMax: '<S15>/MinMax'
             */
            rtb_Sum_aj[i] = fminf(rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa[i],
                                  rtb_MinMax4_p);
            rtb_Sum_aj[i + 16] = fminf(rtb_Product2_l[i], rtb_MinMax4_p);
            rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i] = rtb_MinMax4_p;
        }

        /* End of Outputs for SubSystem: '<S15>/ProtectedDivision' */
    }

    /* Switch: '<S241>/Switch3' incorporates:
     *  Switch: '<S254>/Switch3'
     *  UnitDelay: '<S241>/UnitDelay'
     *  UnitDelay: '<S254>/UnitDelay'
     */
    if (rtb_AND_et)
    {
        MTQR_ac_DW.UnitDelay_DSTATE_g = rtb_Sum2_i3;
        MTQR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeMTIR_M_MtrA_T;
    }

    /* End of Switch: '<S241>/Switch3' */

    /* Switch: '<S262>/Switch3' incorporates:
     *  Switch: '<S270>/Switch3'
     *  UnitDelay: '<S262>/UnitDelay'
     *  UnitDelay: '<S270>/UnitDelay'
     */
    if (rtb_AND_it)
    {
        MTQR_ac_DW.UnitDelay_DSTATE_m = rtb_MinMax4_i;
        MTQR_ac_DW.UnitDelay_DSTATE_j = rtb_Sum2_j;
    }

    /* End of Switch: '<S262>/Switch3' */

    /* Switch: '<S4>/Switch' */
    if (rtb_TmpSignalConversionAtVeRTMR_b_DsblMt)
    {
        /* Switch: '<S4>/Switch' */
        rtb_Switch2_bp = 0.0F;
        rtb_Switch_kx_idx_1 = 0.0F;
        rtb_Switch_kx_idx_2 = 0.0F;
        rtb_Switch_kx_idx_3 = 0.0F;
    }
    else
    {
        /* Switch: '<S4>/Switch' */
        rtb_Switch2_bp = rtb_Switch[1];
        rtb_Switch_kx_idx_1 = rtb_Switch13[1];
        rtb_Switch_kx_idx_2 = rtb_MinMax1_e[1];
        rtb_Switch_kx_idx_3 = rtb_Switch15[1];
    }

    /* End of Switch: '<S4>/Switch' */
    for (i = 0; i < 16; i++)
    {
        /* Gain: '<S34>/Gain' */
        rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa[i] = rtb_Sum_aj[i];

        /* Gain: '<S36>/Gain' */
        rtb_Product2_l[i] = rtb_VariantMerge_For_Variant_Source_Vari[i];

        /* Gain: '<S39>/Gain' */
        rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi[i] =
            rtb_VariantMerge_For_Variant_Source_Vari[i + 32];

        /* Switch: '<S4>/Switch1' */
        if (rtb_TmpSignalConversionAtVeRTMR_b_DsblMt)
        {
            /* Switch: '<S4>/Switch1' */
            rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i] = 0.0F;

            /* Switch: '<S4>/Switch2' */
            rtb_Product2[i] = 0.0F;

            /* Switch: '<S4>/Switch3' */
            rtb_Product3[i] = 0.0F;

            /* Switch: '<S4>/Switch4' */
            tmpRead_c = 0.0F;
        }
        else
        {
            /* Switch: '<S4>/Switch1' */
            rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa[i] =
                rtb_VariantMerge_For_Variant_Source_Vari[i + 16];

            /* Switch: '<S4>/Switch2' */
            rtb_Product2[i] = rtb_VariantMerge_For_Variant_Source_Vari[i + 48];

            /* Switch: '<S4>/Switch3' */
            rtb_Product3[i] = rtb_Sum_aj[i + 16];

            /* Switch: '<S4>/Switch4' incorporates:
             *  Product: '<S84>/Product3'
             */
            tmpRead_c = VeMTQR_K_MtrB_DerateCpblty *
                rtb_TmpSignalConversionAtVaMTIR_M_MtrBMi[i];
        }

        /* End of Switch: '<S4>/Switch1' */

        /* Switch: '<S4>/Switch4' incorporates:
         *  Product: '<S84>/Product3'
         */
        rtb_TmpSignalConversionAtVaMTIR_M_MtrBMi[i] = tmpRead_c;
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VaMTIR_n_MtrCCpbltySpd' */
    (void)Rte_Read_VaMTIR_n_MtrCCpbltySpd_Value(Gain_hk);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MTQR_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* Update for UnitDelay: '<S4>/UnitDelay' */
    MTQR_ac_DW.UnitDelay_DSTATE_l = rtb_Comparison2_pp[1];

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeMTQR_b_AlternatorMd_MtrA' incorporates:
     *  SignalConversion generated from: '<S1>/AlternatorMd_MtrA'
     */
    (void)Rte_Write_VeMTQR_b_AlternatorMd_MtrA_Value(rtb_Comparison1);

    /* Outport: '<Root>/VeMTQR_b_AlternatorMd_MtrB' incorporates:
     *  SignalConversion generated from: '<S1>/AlternatorMd_MtrB'
     */
    (void)Rte_Write_VeMTQR_b_AlternatorMd_MtrB_Value(rtb_Comparison2_p);

    /* Outport: '<Root>/VaMTQR_M_MtrAMaxCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrAMaxCpblty_LT'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMaxCpblty_LT_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrAMa);

    /* Outport: '<Root>/VaMTQR_M_MtrAMaxCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrAMaxCpblty_ST'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMaxCpblty_ST_Value(rtb_Product2_l);

    /* Outport: '<Root>/VaMTQR_M_MtrAMinCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrAMinCpblty_LT'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMinCpblty_LT_Value(rtb_Product2);

    /* Outport: '<Root>/VaMTQR_M_MtrAMinCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrAMinCpblty_ST'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMinCpblty_ST_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrAMi);

    /* Outport: '<Root>/VaMTQR_M_MtrBMaxCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrBMaxCpblty_LT'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMaxCpblty_LT_Value(rtb_Product3);

    /* Outport: '<Root>/VaMTQR_M_MtrBMaxCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrBMaxCpblty_ST'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMaxCpblty_ST_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrBMa);

    /* Outport: '<Root>/VaMTQR_M_MtrBMinCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrBMinCpblty_LT'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMinCpblty_LT_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrBMi);

    /* Outport: '<Root>/VaMTQR_M_MtrBMinCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrBMinCpblty_ST'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMinCpblty_ST_Value(Product7);

    /* Outport: '<Root>/VaMTQR_M_MtrCMaxCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrCMaxCpblty_LT'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMaxCpblty_LT_Value(Product2);

    /* Outport: '<Root>/VaMTQR_M_MtrCMaxCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrCMaxCpblty_ST'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMaxCpblty_ST_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrCMa);

    /* Outport: '<Root>/VaMTQR_M_MtrCMinCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrCMinCpblty_LT'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMinCpblty_LT_Value(Product3);

    /* Outport: '<Root>/VaMTQR_M_MtrCMinCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_M_MtrCMinCpblty_ST'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMinCpblty_ST_Value
        (rtb_TmpSignalConversionAtVaMTIR_M_MtrCMi);

    /* Outport: '<Root>/VaMTQR_n_MtrACpbltyspd' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_n_MtrACpbltyspd'
     */
    (void)Rte_Write_VaMTQR_n_MtrACpbltyspd_Value
        (rtb_TmpSignalConversionAtVaMTIR_n_MtrACp);

    /* Outport: '<Root>/VaMTQR_n_MtrBCpbltyspd' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_n_MtrBCpbltyspd'
     */
    (void)Rte_Write_VaMTQR_n_MtrBCpbltyspd_Value
        (rtb_TmpSignalConversionAtVaMTIR_n_MtrBCp);

    /* Outport: '<Root>/VaMTQR_n_MtrCCpbltyspd' incorporates:
     *  SignalConversion generated from: '<S1>/VaMTQR_n_MtrCCpbltyspd'
     */
    (void)Rte_Write_VaMTQR_n_MtrCCpbltyspd_Value(Gain_hk);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_LT' incorporates:
     *  Gain: '<S41>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MaxTorq_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_LT_Value(rtb_Switch2_bp);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_ST' incorporates:
     *  Gain: '<S37>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MaxTorq_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_ST_Value(rtb_Switch[0]);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_LT' incorporates:
     *  Gain: '<S42>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MinTorq_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_LT_Value(rtb_Switch_kx_idx_1);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_ST' incorporates:
     *  Gain: '<S53>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrA_MinTorq_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_ST_Value(rtb_Switch13[0]);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT' incorporates:
     *  Gain: '<S43>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrB_MaxTorq_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MaxTorq_LT_Value(rtb_Switch_kx_idx_2);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MaxTorq_ST' incorporates:
     *  Gain: '<S49>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrB_MaxTorq_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MaxTorq_ST_Value(rtb_MinMax1_e[0]);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT' incorporates:
     *  Gain: '<S44>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrB_MinTorq_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MinTorq_LT_Value(rtb_Switch_kx_idx_3);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MinTorq_ST' incorporates:
     *  Gain: '<S31>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrB_MinTorq_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MinTorq_ST_Value(rtb_Switch15[0]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeMTQR_M_MtrC_MaxTorq_ST' incorporates:
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrC_MaxTorq_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MaxTorq_ST_Value
        (rtb_TmpSignalConversionAtVeHTDR_M_MtrC_T);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* Outport: '<Root>/VeMTQR_M_MtrC_MinTorq_LT' incorporates:
     *  Gain: '<S32>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrC_MinTorq_LT'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MinTorq_LT_Value(rtb_Sum2[1]);

    /* Outport: '<Root>/VeMTQR_M_MtrC_MinTorq_ST' incorporates:
     *  Gain: '<S33>/Gain'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_MtrC_MinTorq_ST'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MinTorq_ST_Value(rtb_Sum2[0]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeMTQR_M_TaMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeMTQR_M_TaMax'
     */
    (void)Rte_Write_VeMTQR_M_TaMax_Value
        (rtb_TmpSignalConversionAtVeMTIR_M_MtrA_f);

    /* Outport: '<Root>/VeMTQR_M_TaMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeMTQR_M_TaMin'
     */
    (void)Rte_Write_VeMTQR_M_TaMin_Value
        (rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T);

    /* Outport: '<Root>/VeMTQR_M_TbMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeMTQR_M_TbMax'
     */
    (void)Rte_Write_VeMTQR_M_TbMax_Value(VeMTQR_M_TbMax);

    /* Outport: '<Root>/VeMTQR_M_TbMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeMTQR_M_TbMin'
     */
    (void)Rte_Write_VeMTQR_M_TbMin_Value(VeMTQR_M_TbMin);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/MTQC_6p25'
     */
    /* Outport: '<Root>/VeMTQR_M_TcMax' incorporates:
     *  Constant: '<S147>/Calib'
     *  Constant: '<S153>/Calib'
     *  MinMax: '<S9>/Maximum7'
     *  MinMax: '<S9>/Maximum8'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_TcMax'
     *  Sum: '<S9>/Subtraction2'
     */
    (void)Rte_Write_VeMTQR_M_TcMax_Value(fmaxf(KeMTQR_M_MtrTrqMaxWindow, fminf
        ((rtb_Switch2_fv[1] - KeMTQR_M_TcMaxReserve) - tmpRead_g, tmpRead_i)));

    /* Outport: '<Root>/VeMTQR_M_TcMin' incorporates:
     *  Constant: '<S148>/Calib'
     *  Constant: '<S154>/Calib'
     *  MinMax: '<S9>/Maximum9'
     *  MinMax: '<S9>/Minimum3'
     *  SignalConversion generated from: '<S1>/VeMTQR_M_TcMin'
     *  Sum: '<S9>/Summation2'
     */
    (void)Rte_Write_VeMTQR_M_TcMin_Value(fminf(KeMTQR_M_MtrTrqMinWindow, fmaxf
        ((rtb_Switch2_fv[0] + KeMTQR_M_TcMinReserve) + tmpRead_f, tmpRead_h)));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, MTQR_CODE) MTQR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_HSCL_FEAD1

    float32 tmpRead;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/MTQR_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Eff_Domain'
     */
    /* Chart: '<S288>/X_Data_and_Fractions' incorporates:
     *  Constant: '<S289>/Calib'
     *  Constant: '<S293>/Calib'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  SignalConversion generated from: '<S288>/VariantSource1'
     *  Switch: '<S288>/Switch2'
     */
#if Rte_SysCon_Variant_HSCL_FEAD1

    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&tmpRead);
    MTQR_ac_X_Data_and_Fractions1((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
        ()), tmpRead, &MTQR_ac_B.sf_X_Data_and_Fractions);
    if (Rte_Prm_KeHSCR_b_FEADadj_KeHSCR_b_FEADadj())
    {
        /* Selector: '<S288>/Selector4' incorporates:
         *  Constant: '<S290>/Calib'
         */
        tmpRead = (Rte_Prm_KaHSCR_n_FEADLoss_CoeffA_KaHSCR_n_FEADLoss_CoeffA())
            [(sint32)MTQR_ac_B.sf_X_Data_and_Fractions.LowerIndex];

        /* VariantMerge generated from: '<S288>/VariantSource1' incorporates:
         *  Constant: '<S290>/Calib'
         *  Product: '<S288>/Multiplication'
         *  Selector: '<S288>/Selector3'
         *  Selector: '<S288>/Selector4'
         *  Sum: '<S288>/Summation'
         *  Sum: '<S288>/Summation1'
         */
        MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[0] = ((((float32)
            (Rte_Prm_KaHSCR_n_FEADLoss_CoeffA_KaHSCR_n_FEADLoss_CoeffA())
            [(sint32)MTQR_ac_B.sf_X_Data_and_Fractions.UpperIndex]) - tmpRead) *
            MTQR_ac_B.sf_X_Data_and_Fractions.fra) + tmpRead;

        /* Selector: '<S288>/Selector2' incorporates:
         *  Constant: '<S291>/Calib'
         *  Selector: '<S288>/Selector4'
         */
        tmpRead = (Rte_Prm_KaHSCR_n_FEADLoss_CoeffB_KaHSCR_n_FEADLoss_CoeffB())
            [(sint32)MTQR_ac_B.sf_X_Data_and_Fractions.LowerIndex];

        /* VariantMerge generated from: '<S288>/VariantSource1' incorporates:
         *  Constant: '<S291>/Calib'
         *  Product: '<S288>/Multiplication1'
         *  Selector: '<S288>/Selector1'
         *  Selector: '<S288>/Selector2'
         *  Selector: '<S288>/Selector3'
         *  Sum: '<S288>/Summation2'
         *  Sum: '<S288>/Summation3'
         */
        MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[1] = ((((float32)
            (Rte_Prm_KaHSCR_n_FEADLoss_CoeffB_KaHSCR_n_FEADLoss_CoeffB())
            [(sint32)MTQR_ac_B.sf_X_Data_and_Fractions.UpperIndex]) - tmpRead) *
            MTQR_ac_B.sf_X_Data_and_Fractions.fra) + tmpRead;

        /* Selector: '<S288>/Selector6' incorporates:
         *  Constant: '<S292>/Calib'
         *  Selector: '<S288>/Selector4'
         */
        tmpRead = (Rte_Prm_KaHSCR_n_FEADLoss_CoeffC_KaHSCR_n_FEADLoss_CoeffC())
            [(sint32)MTQR_ac_B.sf_X_Data_and_Fractions.LowerIndex];

        /* VariantMerge generated from: '<S288>/VariantSource1' incorporates:
         *  Constant: '<S292>/Calib'
         *  Product: '<S288>/Multiplication2'
         *  Selector: '<S288>/Selector3'
         *  Selector: '<S288>/Selector5'
         *  Selector: '<S288>/Selector6'
         *  Sum: '<S288>/Summation4'
         *  Sum: '<S288>/Summation5'
         */
        MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[2] = ((((float32)
            (Rte_Prm_KaHSCR_n_FEADLoss_CoeffC_KaHSCR_n_FEADLoss_CoeffC())
            [(sint32)MTQR_ac_B.sf_X_Data_and_Fractions.UpperIndex]) - tmpRead) *
            MTQR_ac_B.sf_X_Data_and_Fractions.fra) + tmpRead;
    }
    else
    {
        /* VariantMerge generated from: '<S288>/VariantSource1' incorporates:
         *  Constant: '<S288>/ConstantValue1'
         *  Constant: '<S288>/ConstantValue2'
         *  Constant: '<S288>/ConstantValue3'
         */
        MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[0] = 0.0F;
        MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[1] = 0.0F;
        MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[2] = 0.0F;
    }

#else

    /* VariantMerge generated from: '<S288>/VariantSource1' incorporates:
     *  Constant: '<S288>/ConstantValue4'
     *  Constant: '<S288>/ConstantValue5'
     *  Constant: '<S288>/ConstantValue6'
     *  SignalConversion generated from: '<S288>/VariantSource1'
     */
    MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[0] = 0.0F;
    MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[1] = 0.0F;
    MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS[2] = 0.0F;

#endif

    /* End of Chart: '<S288>/X_Data_and_Fractions' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VaMTQR_r_MtrA_FEADCoeff' incorporates:
     *  SignalConversion generated from: '<S2>/FEAD_Elements'
     */
    (void)Rte_Write_VaMTQR_r_MtrA_FEADCoeff_Value
        (MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* SignalConversion generated from: '<S2>/FEAD_Elements_write' */
    Rte_IrvWrite_MTQR_MedTED_FEAD_Elements_write_IRV
        (MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, MTQR_CODE) MTQR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/MTQR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S295>/VeMTQR_b_AlternatorMd_MtrA_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_b_AlternatorMd_Mt = false;

    /* SignalConversion generated from: '<S295>/VeMTQR_b_AlternatorMd_MtrB_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_b_AlternatorMd__k = false;

    /* SignalConversion generated from: '<S295>/VaMTQR_n_MtrBCpbltyspd_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_n_MtrBCpbltyspd_O[0], 0, (sizeof
            (float32)) << 4U);
    for (i = 0; i < 3; i++)
    {
        /* SignalConversion generated from: '<S295>/VaMTQR_r_MtrA_FEADCoeff_Out_Init' */
        MTQR_ac_B.OutportBufferForVaMTQR_r_MtrA_FEADCoeff_[i] = 0.0F;
    }

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_TorqAchieved_AEMD_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_TorqAchiev = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_TorqAchieved_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_TorqAchi_f = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MaxTorq_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq_ST = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq_HT = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrB_MaxTorq_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MaxTorq_ST = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrC_MaxTorq_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MaxTorq_ST = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MinTorq_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq_ST = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MinTorq_HTDR_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq_HT = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrB_MinTorq_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MinTorq_ST = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrC_MinTorq_ST_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MinTorq_ST = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MaxTorq_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq_LT = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MaxTorq_HTDR_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq__a = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrB_MaxTorq_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MaxTorq_LT = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrC_MaxTorq_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MaxTorq_LT = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MinTorq_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq_LT = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrA_MinTorq_HTDR_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq__m = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrB_MinTorq_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MinTorq_LT = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_MtrC_MinTorq_LT_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MinTorq_LT = 0.0F;

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrBMaxCpblty_ST_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMaxCpblty_S[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrAMaxCpblty_ST_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMaxCpblty_S[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrAMinCpblty_ST_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMinCpblty_S[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrBMinCpblty_ST_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMinCpblty_S[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrCMaxCpblty_ST_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMaxCpblty_S[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrCMinCpblty_ST_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMinCpblty_S[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrBMinCpblty_LT_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMinCpblty_L[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrCMaxCpblty_LT_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMaxCpblty_L[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrCMinCpblty_LT_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMinCpblty_L[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrBMaxCpblty_LT_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMaxCpblty_L[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrAMaxCpblty_LT_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMaxCpblty_L[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_M_MtrAMinCpblty_LT_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMinCpblty_L[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_n_MtrACpbltyspd_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_n_MtrACpbltyspd_O[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VaMTQR_n_MtrCCpbltyspd_Out_Init' */
    memset(&MTQR_ac_B.OutportBufferForVaMTQR_n_MtrCCpbltyspd_O[0], 0, (sizeof
            (float32)) << 4U);

    /* SignalConversion generated from: '<S295>/VeMTQR_M_TaMin_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_TaMin_Out_Init = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_TaMax_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_TaMax_Out_Init = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_TbMin_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_TbMin_Out_Init = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_TbMax_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_TbMax_Out_Init = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_TcMin_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_TcMin_Out_Init = 0.0F;

    /* SignalConversion generated from: '<S295>/VeMTQR_M_TcMax_Out_Init' */
    MTQR_ac_B.OutportBufferForVeMTQR_M_TcMax_Out_Init = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VaMTQR_M_MtrAMaxCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrAMaxCpblty_LT_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMaxCpblty_LT_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMaxCpblty_L);

    /* Outport: '<Root>/VaMTQR_M_MtrAMaxCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrAMaxCpblty_ST_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMaxCpblty_ST_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMaxCpblty_S);

    /* Outport: '<Root>/VaMTQR_M_MtrAMinCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrAMinCpblty_LT_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMinCpblty_LT_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMinCpblty_L);

    /* Outport: '<Root>/VaMTQR_M_MtrAMinCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrAMinCpblty_ST_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrAMinCpblty_ST_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrAMinCpblty_S);

    /* Outport: '<Root>/VaMTQR_M_MtrBMaxCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrBMaxCpblty_LT_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMaxCpblty_LT_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMaxCpblty_L);

    /* Outport: '<Root>/VaMTQR_M_MtrBMaxCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrBMaxCpblty_ST_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMaxCpblty_ST_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMaxCpblty_S);

    /* Outport: '<Root>/VaMTQR_M_MtrBMinCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrBMinCpblty_LT_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMinCpblty_LT_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMinCpblty_L);

    /* Outport: '<Root>/VaMTQR_M_MtrBMinCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrBMinCpblty_ST_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrBMinCpblty_ST_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrBMinCpblty_S);

    /* Outport: '<Root>/VaMTQR_M_MtrCMaxCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrCMaxCpblty_LT_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMaxCpblty_LT_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMaxCpblty_L);

    /* Outport: '<Root>/VaMTQR_M_MtrCMaxCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrCMaxCpblty_ST_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMaxCpblty_ST_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMaxCpblty_S);

    /* Outport: '<Root>/VaMTQR_M_MtrCMinCpblty_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrCMinCpblty_LT_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMinCpblty_LT_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMinCpblty_L);

    /* Outport: '<Root>/VaMTQR_M_MtrCMinCpblty_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_M_MtrCMinCpblty_ST_Out_Init'
     */
    (void)Rte_Write_VaMTQR_M_MtrCMinCpblty_ST_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_M_MtrCMinCpblty_S);

    /* Outport: '<Root>/VaMTQR_n_MtrACpbltyspd' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_n_MtrACpbltyspd_Out_Init'
     */
    (void)Rte_Write_VaMTQR_n_MtrACpbltyspd_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_n_MtrACpbltyspd_O);

    /* Outport: '<Root>/VaMTQR_n_MtrBCpbltyspd' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_n_MtrBCpbltyspd_Out_Init'
     */
    (void)Rte_Write_VaMTQR_n_MtrBCpbltyspd_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_n_MtrBCpbltyspd_O);

    /* Outport: '<Root>/VaMTQR_n_MtrCCpbltyspd' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_n_MtrCCpbltyspd_Out_Init'
     */
    (void)Rte_Write_VaMTQR_n_MtrCCpbltyspd_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_n_MtrCCpbltyspd_O);

    /* Outport: '<Root>/VaMTQR_r_MtrA_FEADCoeff' incorporates:
     *  SignalConversion generated from: '<S3>/VaMTQR_r_MtrA_FEADCoeff_Out_Init'
     */
    (void)Rte_Write_VaMTQR_r_MtrA_FEADCoeff_Value
        (MTQR_ac_B.OutportBufferForVaMTQR_r_MtrA_FEADCoeff_);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_HTDR_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MaxTorq_HTDR_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_HTDR_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq__a);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MaxTorq_HTDR_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_HTDR_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq_HT);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MaxTorq_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq_LT);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MaxTorq_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MaxTorq_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MaxTorq_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MaxTorq_ST);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_HTDR_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MinTorq_HTDR_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_HTDR_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq__m);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_HTDR_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MinTorq_HTDR_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_HTDR_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq_HT);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MinTorq_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq_LT);

    /* Outport: '<Root>/VeMTQR_M_MtrA_MinTorq_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_MinTorq_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_MinTorq_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_MinTorq_ST);

    /* Outport: '<Root>/VeMTQR_M_MtrA_TorqAchieved_AEMD' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_TorqAchieved_AEMD_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_TorqAchieved_AEMD_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_TorqAchiev);

    /* Outport: '<Root>/VeMTQR_M_MtrA_TorqAchieved' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrA_TorqAchieved_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrA_TorqAchieved_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrA_TorqAchi_f);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MaxTorq_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrB_MaxTorq_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MaxTorq_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MaxTorq_LT);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MaxTorq_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrB_MaxTorq_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MaxTorq_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MaxTorq_ST);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MinTorq_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrB_MinTorq_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MinTorq_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MinTorq_LT);

    /* Outport: '<Root>/VeMTQR_M_MtrB_MinTorq_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrB_MinTorq_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrB_MinTorq_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrB_MinTorq_ST);

    /* Outport: '<Root>/VeMTQR_M_MtrC_MaxTorq_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrC_MaxTorq_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MaxTorq_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MaxTorq_LT);

    /* Outport: '<Root>/VeMTQR_M_MtrC_MaxTorq_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrC_MaxTorq_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MaxTorq_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MaxTorq_ST);

    /* Outport: '<Root>/VeMTQR_M_MtrC_MinTorq_LT' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrC_MinTorq_LT_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MinTorq_LT_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MinTorq_LT);

    /* Outport: '<Root>/VeMTQR_M_MtrC_MinTorq_ST' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_MtrC_MinTorq_ST_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_MtrC_MinTorq_ST_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_MtrC_MinTorq_ST);

    /* Outport: '<Root>/VeMTQR_M_TaMax' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_TaMax_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_TaMax_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_TaMax_Out_Init);

    /* Outport: '<Root>/VeMTQR_M_TaMin' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_TaMin_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_TaMin_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_TaMin_Out_Init);

    /* Outport: '<Root>/VeMTQR_M_TbMax' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_TbMax_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_TbMax_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_TbMax_Out_Init);

    /* Outport: '<Root>/VeMTQR_M_TbMin' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_TbMin_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_TbMin_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_TbMin_Out_Init);

    /* Outport: '<Root>/VeMTQR_M_TcMax' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_TcMax_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_TcMax_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_TcMax_Out_Init);

    /* Outport: '<Root>/VeMTQR_M_TcMin' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_M_TcMin_Out_Init'
     */
    (void)Rte_Write_VeMTQR_M_TcMin_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_M_TcMin_Out_Init);

    /* Outport: '<Root>/VeMTQR_b_AlternatorMd_MtrA' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_b_AlternatorMd_MtrA_Out_Init'
     */
    (void)Rte_Write_VeMTQR_b_AlternatorMd_MtrA_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_b_AlternatorMd_Mt);

    /* Outport: '<Root>/VeMTQR_b_AlternatorMd_MtrB' incorporates:
     *  SignalConversion generated from: '<S3>/VeMTQR_b_AlternatorMd_MtrB_Out_Init'
     */
    (void)Rte_Write_VeMTQR_b_AlternatorMd_MtrB_Value
        (MTQR_ac_B.OutportBufferForVeMTQR_b_AlternatorMd__k);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, MTQR_CODE) MTQR_ac_Init(void)
{
    {
        sint32 i;
        float32 tmp[16];
        float32 tmp_0[3];

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_3' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_n_MtrBCpbltyspd' incorporates:
         *  Merge: '<Root>/Merge_Outport_3'
         */
        (void)Rte_Write_VaMTQR_n_MtrBCpbltyspd_Value(tmp);

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
         *  SubSystem: '<Root>/MTQR_MedTED'
         */
        /* SystemInitialize for SignalConversion generated from: '<S2>/FEAD_Elements_write' */
        Rte_IrvWrite_MTQR_ac_Init_FEAD_Elements_write_IRV
            (MTQR_ac_B.VariantMerge_For_Variant_Source_VariantS);

        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_4' */
        for (i = 0; i < 3; i++)
        {
            tmp_0[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaMTQR_r_MtrA_FEADCoeff' incorporates:
         *  Merge: '<Root>/Merge_Outport_4'
         */
        (void)Rte_Write_VaMTQR_r_MtrA_FEADCoeff_Value(tmp_0);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_15' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrBMaxCpblty_ST' incorporates:
         *  Merge: '<Root>/Merge_Outport_15'
         */
        (void)Rte_Write_VaMTQR_M_MtrBMaxCpblty_ST_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_16' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrAMaxCpblty_ST' incorporates:
         *  Merge: '<Root>/Merge_Outport_16'
         */
        (void)Rte_Write_VaMTQR_M_MtrAMaxCpblty_ST_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_17' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrAMinCpblty_ST' incorporates:
         *  Merge: '<Root>/Merge_Outport_17'
         */
        (void)Rte_Write_VaMTQR_M_MtrAMinCpblty_ST_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_18' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrBMinCpblty_ST' incorporates:
         *  Merge: '<Root>/Merge_Outport_18'
         */
        (void)Rte_Write_VaMTQR_M_MtrBMinCpblty_ST_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_19' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrCMaxCpblty_ST' incorporates:
         *  Merge: '<Root>/Merge_Outport_19'
         */
        (void)Rte_Write_VaMTQR_M_MtrCMaxCpblty_ST_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_20' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrCMinCpblty_ST' incorporates:
         *  Merge: '<Root>/Merge_Outport_20'
         */
        (void)Rte_Write_VaMTQR_M_MtrCMinCpblty_ST_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_21' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrBMinCpblty_LT' incorporates:
         *  Merge: '<Root>/Merge_Outport_21'
         */
        (void)Rte_Write_VaMTQR_M_MtrBMinCpblty_LT_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_22' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrCMaxCpblty_LT' incorporates:
         *  Merge: '<Root>/Merge_Outport_22'
         */
        (void)Rte_Write_VaMTQR_M_MtrCMaxCpblty_LT_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_23' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrCMinCpblty_LT' incorporates:
         *  Merge: '<Root>/Merge_Outport_23'
         */
        (void)Rte_Write_VaMTQR_M_MtrCMinCpblty_LT_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_32' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrBMaxCpblty_LT' incorporates:
         *  Merge: '<Root>/Merge_Outport_32'
         */
        (void)Rte_Write_VaMTQR_M_MtrBMaxCpblty_LT_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_33' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrAMaxCpblty_LT' incorporates:
         *  Merge: '<Root>/Merge_Outport_33'
         */
        (void)Rte_Write_VaMTQR_M_MtrAMaxCpblty_LT_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_34' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_M_MtrAMinCpblty_LT' incorporates:
         *  Merge: '<Root>/Merge_Outport_34'
         */
        (void)Rte_Write_VaMTQR_M_MtrAMinCpblty_LT_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_35' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_n_MtrACpbltyspd' incorporates:
         *  Merge: '<Root>/Merge_Outport_35'
         */
        (void)Rte_Write_VaMTQR_n_MtrACpbltyspd_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_36' */
        memset(&tmp[0], 0, (sizeof(float32)) << 4U);

        /* SystemInitialize for Outport: '<Root>/VaMTQR_n_MtrCCpbltyspd' incorporates:
         *  Merge: '<Root>/Merge_Outport_36'
         */
        (void)Rte_Write_VaMTQR_n_MtrCCpbltyspd_Value(tmp);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
