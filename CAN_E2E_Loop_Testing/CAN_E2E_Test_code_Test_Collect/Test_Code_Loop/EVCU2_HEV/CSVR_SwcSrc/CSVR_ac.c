/*
 * File: CSVR_ac.c
 *
 * Code generated for Simulink model 'CSVR_ac'.
 *
 * Model version                  : 9.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:20:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CSVR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_CSVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeCSVR_e_SourceForFrontAxlSpd, CSVR_VAR_INIT)
    KaCSVR_e_FrontAxlSpdSrcPriority[6] =
{
    CeCSVR_e_FrontAxlSpdFromMtrB, CeCSVR_e_FrontAxlSpdFromMtrA,
    CeCSVR_e_FrontAxlSpdFromPrimWhls, CeCSVR_e_FrontAxlSpdFromTOSS,
    CeCSVR_e_NoValidFASSrcAvail, CeCSVR_e_NoValidFASSrcAvail
};                                     /* Referenced by: '<S223>/Calib' */

static volatile CONST(TeCSVR_e_AxleDirSource, CSVR_VAR_INIT)
    KaCSVR_e_FrontAxleDirSrcPriority[7] =
{
    CeCSVR_e_AxleDirFromWhls, CeCSVR_e_AxleDirFromMtrB, CeCSVR_e_AxleDirFromMtrC,
    CeCSVR_e_AxleDirFromMtrA, CeCSVR_e_AxleDirFromGearBasedDirection,
    CeCSVR_e_AxleDirFromTransOutputPol, CeCSVR_e_NoValidAxleDirSrcAvail
};                                     /* Referenced by: '<S364>/Calib' */

static volatile CONST(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT)
    KaCSVR_e_GrbsdDirctnSel_HiSpd[16] =
{
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionInvalid,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionInvalid,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionReverse,
    CeCSVR_e_WheelDirectionReverse, CeCSVR_e_WheelDirectionReverse,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionInvalid,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionInvalid,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionInvalid,
    CeCSVR_e_WheelDirectionForward, CeCSVR_e_WheelDirectionForward
};                                     /* Referenced by: '<S578>/Calib' */

static volatile CONST(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT)
    KaCSVR_e_GrbsdDirctnSel_LoSpd[16] =
{
    CeCSVR_e_WheelDirectionForward, CeCSVR_e_WheelDirectionForward,
    CeCSVR_e_WheelDirectionForward, CeCSVR_e_WheelDirectionForward,
    CeCSVR_e_WheelDirectionReverse, CeCSVR_e_WheelDirectionReverse,
    CeCSVR_e_WheelDirectionReverse, CeCSVR_e_WheelDirectionReverse,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionForward,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionReverse,
    CeCSVR_e_WheelDirectionInvalid, CeCSVR_e_WheelDirectionForward,
    CeCSVR_e_WheelDirectionForward, CeCSVR_e_WheelDirectionForward
};                                     /* Referenced by: '<S577>/Calib' */

static volatile CONST(TeCSVR_e_SourceForRearAxlSpd, CSVR_VAR_INIT)
    KaCSVR_e_RearAxlSpdSrcPriority[6] =
{
    CeCSVR_e_RearAxlSpdFromFrontAxlSpd, CeCSVR_e_RearAxlSpdFromSecWhls,
    CeCSVR_e_RearAxlSpdFromMtrB, CeCSVR_e_NoValidRASSrcAvail,
    CeCSVR_e_NoValidRASSrcAvail, CeCSVR_e_NoValidRASSrcAvail
};                                     /* Referenced by: '<S269>/Calib' */

static volatile CONST(TeCSVR_e_AxleDirSource, CSVR_VAR_INIT)
    KaCSVR_e_RearAxleDirSrcPriority[6] =
{
    CeCSVR_e_AxleDirFromWhls, CeCSVR_e_AxleDirFromMtrB, CeCSVR_e_AxleDirFromMtrC,
    CeCSVR_e_AxleDirFromMtrA, CeCSVR_e_AxleDirFromGearBasedDirection,
    CeCSVR_e_NoValidAxleDirSrcAvail
};                                     /* Referenced by: '<S365>/Calib' */

static volatile CONST(TeCSVR_e_RefSpdSrc, CSVR_VAR_INIT)
    KaCSVR_e_RefSpdSrcPriority[3] =
{
    CeCSVR_e_RefSpdFrmCAN, CeCSVR_e_RefSpdFrmSecNo, CeCSVR_e_RefSpdFrmSecAxle
};                                     /* Referenced by: '<S250>/Calib' */

static volatile CONST(TeCSVR_e_SourceForTOSSensor, CSVR_VAR_INIT)
    KaCSVR_e_TOSSensorSrcPriority[6] =
{
    CeCSVR_e_TOSSensorFromOutputSpeedPolarity, CeCSVR_e_TOSSensorFromMtrB,
    CeCSVR_e_TOSSensorFromMtrC, CeCSVR_e_TOSSensorFromWhls,
    CeCSVR_e_TOSSensorFromGearBasedDirection, CeCSVR_e_NoValidTOSSensorSrcAvail
};                                     /* Referenced by: '<S338>/Calib' */

static volatile CONST(TeCSVR_e_TransOutSpdSrc, CSVR_VAR_INIT)
    KaCSVR_e_TransOutSpdSrcPriority[4] =
{
    CeCSVR_e_TransOutFromTOSSnsr, CeCSVR_e_TransOutFromMtrB,
    CeCSVR_e_TransOutFromMtrA, CeCSVR_e_TransOutFromPrimWhls
};                                     /* Referenced by: '<S299>/Calib' */

static volatile CONST(TeCSVR_e_VehSpdSrc, CSVR_VAR_INIT)
    KaCSVR_e_VehSpdSrcPriority[8] =
{
    CeCSVR_e_VehSpdFrmCAN, CeCSVR_e_VehSpdFrmTOSSnsr, CeCSVR_e_VehSpdFrmMtrB,
    CeCSVR_e_VehSpdFrmMtrA, CeCSVR_e_VehSpdFrmPrimAxle,
    CeCSVR_e_NoValidVehSpdSrcAvail, CeCSVR_e_NoValidVehSpdSrcAvail,
    CeCSVR_e_NoValidVehSpdSrcAvail
};                                     /* Referenced by: '<S636>/Calib' */

static volatile CONST(sint16, CSVR_VAR_INIT) KeCSVD_Cnt_FrontAxleRatlFlt_FailCnt
    = 50;                              /* Referenced by: '<S70>/Calib' */
static volatile CONST(sint16, CSVR_VAR_INIT) KeCSVD_Cnt_FrontAxleRatlFlt_SmpCnt =
    100;                               /* Referenced by: '<S71>/Calib' */
static volatile CONST(sint16, CSVR_VAR_INIT) KeCSVD_Cnt_RearAxleRatlFlt_FailCnt =
    50;                                /* Referenced by: '<S94>/Calib' */
static volatile CONST(sint16, CSVR_VAR_INIT) KeCSVD_Cnt_RearAxleRatlFlt_SmpCnt =
    100;                               /* Referenced by: '<S95>/Calib' */
static volatile CONST(uint16, CSVR_VAR_INIT) KeCSVD_Cnt_WhlSpdDiff_FailDbnc = 0U;/* Referenced by: '<S62>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVD_b_FrontAxlSpdRatEnable = 0;/* Referenced by: '<S72>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVD_b_RearAxlSpdRatEnable = 0;/* Referenced by: '<S96>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVD_b_VehSpd_OSS_Corr_LtchEnbl =
    0;                                 /* Referenced by:
                                        * '<S73>/Calib'
                                        * '<S97>/Calib'
                                        */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVD_b_WhlSpdRatEnbl = 0;/* Referenced by: '<S63>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVD_b_WhlSpdRatOvrd = 0;/* Referenced by: '<S64>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVD_n_RearAxlSpdRatlThrshld =
    1000.0F;                           /* Referenced by: '<S98>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVD_v_FrontAxlSpdRatlThrshld =
    1000.0F;                           /* Referenced by: '<S74>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtCircumToRadius =
    0.0015F;                           /* Referenced by: '<S661>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtFrontAxlSpdToRearAxlSpd = 1.0F;/* Referenced by: '<S275>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtMtrASpdToFrontAxlSpd = 1.0F;/* Referenced by: '<S230>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtMtrASpdToTransOutSpd = 0.391F;/* Referenced by: '<S305>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtMtrASpdToVehSpd =
    0.391F;                            /* Referenced by: '<S645>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtMtrBSpdToFrontAxlSpd = 3.64F;/* Referenced by: '<S234>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtMtrBSpdToRearAxlSpd
    = 11.2F;                           /* Referenced by: '<S277>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtMtrBSpdToTransOutSpd = 0.391F;/* Referenced by: '<S307>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtMtrBSpdToVehSpd =
    0.391F;                            /* Referenced by: '<S649>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtMtrCSpdToVehSpd =
    1.0F;                              /* Referenced by: '<S652>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtMtrCToRearAxlSpd =
    1.0F;                              /* Referenced by: '<S279>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtPrimWhlSpdToFrontAxlSpd = 1.0F;/* Referenced by: '<S237>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtPrimWhlSpdToRearAxlSpd = 1.0F;/* Referenced by: '<S281>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtPrimWhlSpdToTransOutSpd = 1.0F;/* Referenced by: '<S310>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtRearAxlSpdToWhlDomain = 1.0F;/* Referenced by: '<S99>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtRefSpdToRefNo =
    1.0F;                              /* Referenced by: '<S253>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtRefSpdToSecNo =
    1.0F;                              /* Referenced by: '<S255>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtSecWhlSpdToFrontAxlSpd = 1.0F;/* Referenced by: '<S239>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtSecWhlSpdToRearAxlSpd = 1.0F;/* Referenced by: '<S283>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_CnvrtSecWhlSpdToRefNo =
    1.0F;                              /* Referenced by: '<S257>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtTOSSensorSpdToFrontAxlSpd = 1.0F;/* Referenced by: '<S242>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtTOSSensorSpdToVehSpd = 1.0F;/* Referenced by:
                                                * '<S75>/Calib'
                                                * '<S657>/Calib'
                                                */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_Cf_CnvrtTOSSnsrToTransOutSpd = 1.0F;/* Referenced by: '<S313>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_ConvertKphToMps = 0.277F;/* Referenced by: '<S637>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_SpdScalingFactorLHF =
    60.0F;                             /* Referenced by: '<S751>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_Cf_SpdScalingFactorRHF =
    60.0F;                             /* Referenced by: '<S755>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_K_FrontAxlSpdGain = 0.2F;/* Referenced by: '<S224>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_K_RearAxlSpdGain = 0.2F;/* Referenced by: '<S270>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_K_TransOutSpdGain1 = 0.2F;/* Referenced by: '<S300>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_K_VehSpdGain1 = 0.2F;/* Referenced by: '<S638>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_V_MinVehSpdThreshforGrgShft
    = 2.0F;                            /* Referenced by: '<S572>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_AxleForSpdDir = 1;/* Referenced by: '<S622>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_CanSigVehSpd_CANC2_FA_InitVal = 1;/* Referenced by: '<S667>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_CanSigVehSpd_FA_InitVal =
    1;                                 /* Referenced by: '<S668>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_DefaultWhlSpdFA = 1;/* Referenced by:
                                                                      * '<S397>/Calib'
                                                                      * '<S478>/Calib'
                                                                      */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_EnableWhlDirFAOnSNA = 1;/* Referenced by:
                                                                      * '<S339>/Calib'
                                                                      * '<S388>/Calib'
                                                                      * '<S469>/Calib'
                                                                      */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_FACANSpdOnInvalidDir = 1;/* Referenced by: '<S325>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_FACANSpdbsdOnLimit = 0;/* Referenced by: '<S326>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_LeftFrontWhlDir_FA_InitVal = 1;/* Referenced by: '<S669>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_LeftFrontWhlFA_InitVal =
    1;                                 /* Referenced by: '<S670>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_LeftRearWhlDir_FA_InitVal
    = 1;                               /* Referenced by: '<S671>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_LeftRearWhlFA_InitVal = 1;/* Referenced by: '<S672>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_MtrA_SpdFAOvrd = 0;/* Referenced by: '<S117>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_MtrA_SpdFAOvrdVal = 0;/* Referenced by: '<S118>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_MtrB_SpdFAOvrd = 0;/* Referenced by: '<S119>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_MtrB_SpdFAOvrdVal = 0;/* Referenced by: '<S120>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_MtrC_SpdFAOvrd = 0;/* Referenced by: '<S121>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_MtrC_SpdFAOvrdVal = 0;/* Referenced by: '<S122>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_NTurbFA_Init = 0;/* Referenced by: '<S673>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_NturbFA_OvrdEnbl = 0;/* Referenced by: '<S123>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_NturbFA_OvrdVal = 0;/* Referenced by: '<S124>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_Nturb_OvrdEnbl = 0;/* Referenced by: '<S125>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_OutSpdPolarityFA_initVal =
    1;                                 /* Referenced by: '<S674>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_RefVehSpd_FA_InitVal = 1;/* Referenced by: '<S675>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_RightFrontWhlDir_FA_InitVal = 1;/* Referenced by: '<S676>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_RightFrontWhlFA_InitVal =
    1;                                 /* Referenced by: '<S677>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_RightRearWhlDir_FA_InitVal = 1;/* Referenced by: '<S678>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_RightRearWhlFA_InitVal =
    1;                                 /* Referenced by: '<S679>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_TOSSnsrRawFA_Init = 0;/* Referenced by: '<S680>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_UseFDRForMtrAToFrontAxlSpd = 0;/* Referenced by: '<S231>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_UseFDRForMtrAToVehSpd = 1;/* Referenced by: '<S646>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_UseFDRForMtrBToFrontAxlSpd = 0;/* Referenced by: '<S235>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_UseFDRForMtrBToVehSpd = 1;/* Referenced by: '<S650>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_UseFDRForPrimWhlSpdToTransOutSpd = 1;/* Referenced by: '<S311>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_UseFDRForTossToFrontAxlSpd = 1;/* Referenced by: '<S243>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_UseFDRForTossToVehSpd = 1;/* Referenced by:
                                                                      * '<S76>/Calib'
                                                                      * '<S658>/Calib'
                                                                      */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_UseFrntAsPrimAxle = 1;/* Referenced by: '<S366>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_WheelDirectionInvalidFA =
    1;                                 /* Referenced by:
                                        * '<S396>/Calib'
                                        * '<S477>/Calib'
                                        */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_WheelSensorFailStsLHF_InitVal = 0;/* Referenced by: '<S681>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_WheelSensorFailStsLHR_InitVal = 0;/* Referenced by: '<S682>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_WheelSensorFailStsRHF_InitVal = 0;/* Referenced by: '<S683>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT)
    KeCSVR_b_WheelSensorFailStsRHR_InitVal = 0;/* Referenced by: '<S684>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_WhlDirUnknownFA = 0;/* Referenced by:
                                                                      * '<S422>/Calib'
                                                                      * '<S503>/Calib'
                                                                      */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_WhlRadius_OvrdEnbl = 0;/* Referenced by: '<S126>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_WhlSpdInKphFront = 1;/* Referenced by: '<S548>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_WhlSpdInKphRear = 1;/* Referenced by: '<S549>/Calib' */
static volatile CONST(boolean, CSVR_VAR_INIT) KeCSVR_b_isWEDArch = 1;/* Referenced by: '<S206>/Calib' */
static volatile CONST(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT)
    KeCSVR_e_LeftFrontWhlDir_InitVal = CeCSVR_e_WheelDirectionUnknown;/* Referenced by: '<S685>/Calib' */
static volatile CONST(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT)
    KeCSVR_e_LeftRearWhlDir_InitVal = CeCSVR_e_WheelDirectionUnknown;/* Referenced by: '<S686>/Calib' */
static volatile CONST(TeCSVR_e_OutSpdDirection, CSVR_VAR_INIT)
    KeCSVR_e_OutPutSpdReverse = CeCSVR_e_OutSpdDirectionReverse;/* Referenced by:
                                                                 * '<S359>/Calib'
                                                                 * '<S449>/Calib'
                                                                 * '<S530>/Calib'
                                                                 */
static volatile CONST(TeCSVR_e_OutSpdDirection, CSVR_VAR_INIT)
    KeCSVR_e_OutSpdPolarity_initVal = CeCSVR_e_OutSpdDirectionUnknown;/* Referenced by: '<S687>/Calib' */
static volatile CONST(sint16, CSVR_VAR_INIT) KeCSVR_e_ReverseGearVal = 9;/* Referenced by: '<S607>/Calib' */
static volatile CONST(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT)
    KeCSVR_e_RightFrontWhlDir_InitVal = CeCSVR_e_WheelDirectionUnknown;/* Referenced by: '<S688>/Calib' */
static volatile CONST(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT)
    KeCSVR_e_RightRearWhlDir_InitVal = CeCSVR_e_WheelDirectionUnknown;/* Referenced by: '<S689>/Calib' */
static volatile CONST(TeCSVR_e_THA_STAT, CSVR_VAR_INIT) KeCSVR_e_THA_STAT_Init =
    CeCSVR_e_THA_Initial;              /* Referenced by: '<S690>/Calib' */
static volatile CONST(TeCSVR_e_THA_SpdLim, CSVR_VAR_INIT)
    KeCSVR_e_THA_SpdLim_Init = CeCSVR_e_THAsl_NoRequest;/* Referenced by: '<S691>/Calib' */
static volatile CONST(TeCSVR_e_TRSC_STAT, CSVR_VAR_INIT) KeCSVR_e_TRSC_STAT_Init
    = CeCSVR_e_TRSC_Standby;           /* Referenced by: '<S692>/Calib' */
static volatile CONST(TeCSVR_e_TRSC_SpdLimReq, CSVR_VAR_INIT)
    KeCSVR_e_TRSC_SpdLimReq_Init = CeCSVR_e_TRSCslr_NotLimiting;/* Referenced by: '<S693>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_l_DistTravelMIL_On_default =
    0.0F;                              /* Referenced by: '<S714>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_l_WhlRadiusThrsh = 0.001F;/* Referenced by: '<S662>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_l_WhlRadius_OvrdVal =
    2200.0F;                           /* Referenced by: '<S127>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_DefaultFrontAxlSpd = 0.0F;/* Referenced by: '<S245>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_DefaultRearAxlSpd = 0.0F;/* Referenced by: '<S285>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_DefaultRefNo = 0.0F;/* Referenced by: '<S259>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_DefaultTransOutSpd = 1.0F;/* Referenced by: '<S320>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_DefaultWhlSpd = 1.0F;/* Referenced by:
                                                                      * '<S398>/Calib'
                                                                      * '<S479>/Calib'
                                                                      */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_LowerThrldforDirMtrA_ForWhl = -2.0F;/* Referenced by:
                                                  * '<S429>/Calib'
                                                  * '<S510>/Calib'
                                                  */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_LowerThrldforDirMtrB_ForTOS = -2.0F;/* Referenced by: '<S348>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_LowerThrldforDirMtrB_ForWhl = -2.0F;/* Referenced by:
                                                  * '<S436>/Calib'
                                                  * '<S517>/Calib'
                                                  */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_LowerThrldforDirMtrC_ForTOS = -2.0F;/* Referenced by: '<S354>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_LowerThrldforDirMtrC_ForWhl = -2.0F;/* Referenced by:
                                                  * '<S443>/Calib'
                                                  * '<S524>/Calib'
                                                  */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_Nturb_OvrdVal = 0.0F;/* Referenced by: '<S128>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_ST2InpSpd_init = 0.0F;/* Referenced by: '<S694>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_n_TOS_WhlSpdErrThrsh =
    200.0F;                            /* Referenced by: '<S318>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_UpperThrldforDirMtrA_ForWhl = 2.0F;/* Referenced by:
                                                 * '<S430>/Calib'
                                                 * '<S511>/Calib'
                                                 */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_UpperThrldforDirMtrB_ForTOS = 2.0F;/* Referenced by: '<S349>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_UpperThrldforDirMtrB_ForWhl = 2.0F;/* Referenced by:
                                                 * '<S437>/Calib'
                                                 * '<S518>/Calib'
                                                 */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_UpperThrldforDirMtrC_ForTOS = 2.0F;/* Referenced by: '<S355>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT)
    KeCSVR_n_UpperThrldforDirMtrC_ForWhl = 2.0F;/* Referenced by:
                                                 * '<S444>/Calib'
                                                 * '<S525>/Calib'
                                                 */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_t_1000dt = 0.1F;/* Referenced by:
                                                                      * '<S715>/Calib'
                                                                      * '<S710>/Calib'
                                                                      */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_t_6p25dt = 0.00625F;/* Referenced by:
                                                                      * '<S225>/Calib'
                                                                      * '<S271>/Calib'
                                                                      * '<S301>/Calib'
                                                                      * '<S639>/Calib'
                                                                      */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_t_FrontAxlSpdTimePeriod =
    0.00625F;                          /* Referenced by: '<S226>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_t_RearAxlSpdTimePeriod =
    0.00625F;                          /* Referenced by: '<S272>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_t_TransOutTimePeriod =
    0.00625F;                          /* Referenced by: '<S302>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_t_VehSpdTimePeriod =
    0.00625F;                          /* Referenced by: '<S640>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_v_DefaultVehSpd = 1.0F;/* Referenced by: '<S660>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_v_MaxVehSpdThershold =
    200.0F;                            /* Referenced by: '<S327>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KeCSVR_v_MinVehSpdThershold = 0.0F;/* Referenced by: '<S328>/Calib' */
static volatile CONST(float32, CSVR_VAR_INIT) KtCSVD_n_SpdRatLookUp[16] =
{
    8.0F, 9.0F, 9.0F, 9.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 12.0F, 12.0F,
    12.0F, 12.0F, 12.0F, 12.0F, 12.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

static volatile CONST(float32, CSVR_VAR_INIT) KxCSVD_n_SpdRatLookUp[16] =
{
    0.0F, 10.0F, 20.0F, 31.0F, 40.0F, 50.0F, 60.0F, 71.0F, 80.0F, 90.0F, 101.0F,
    110.0F, 120.0F, 131.0F, 140.0F, 150.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_CSVR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, CSVR_VAR_INIT) VeCSVC_a_VehAccel;/* '<S631>/Multiplication2' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVC_b_Grbsddir_Invalid;/* '<S205>/Logical8' */
static VAR(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT) VeCSVC_e_GrbsdDirctn;/* '<S550>/Merge3' */
static VAR(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT) VeCSVC_e_GrbsdDirctn_HiSpd;/* '<S571>/GrbsdDirctnSel_HiSpd' */
static VAR(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT) VeCSVC_e_GrbsdDirctn_LoSpd;/* '<S570>/GrbsdDirctnSel_LoSpd' */
static VAR(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT) VeCSVC_e_PrimAxleDirection;/* '<S203>/Merge2' */
static VAR(TeCSVR_e_TransOutSpdSrc, CSVR_VAR_INIT) VeCSVC_e_TransOutSpdSrc;/* '<S200>/Merge1' */
static VAR(sint16, CSVR_VAR_INIT) VeCSVC_i_GrbsdDirctn_ActualGear;/* '<S550>/Merge1' */
static VAR(sint16, CSVR_VAR_INIT) VeCSVC_i_GrbsdDirctn_TargetGear;/* '<S550>/Merge2' */
static VAR(float32, CSVR_VAR_INIT) VeCSVC_l_DistTravelMIL_On;/* '<S708>/Sum1' */
static VAR(float32, CSVR_VAR_INIT) VeCSVC_n_NTurbArb;/* '<S582>/Switch' */
static VAR(float32, CSVR_VAR_INIT) VeCSVC_n_NturbFromStratNoMax;/* '<S207>/MinMax1' */
static VAR(float32, CSVR_VAR_INIT) VeCSVC_n_NturbFromStratNoMin;/* '<S207>/MinMax' */
static VAR(float32, CSVR_VAR_INIT) VeCSVC_v_VehSpdFrmCAN;/* '<S201>/Product' */
static VAR(uint16, CSVR_VAR_INIT) VeCSVD_Cnt_FrontAxleRatlFlt_FailCnt;/* '<S85>/Switch1' */
static VAR(uint16, CSVR_VAR_INIT) VeCSVD_Cnt_FrontAxleRatlFlt_SmpCnt;/* '<S86>/Switch1' */
static VAR(uint16, CSVR_VAR_INIT) VeCSVD_Cnt_RearAxleRatlFlt_FailCnt;/* '<S108>/Switch1' */
static VAR(uint16, CSVR_VAR_INIT) VeCSVD_Cnt_RearAxleRatlFlt_SmpCnt;/* '<S109>/Switch1' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVD_b_DsblRearAxlSpdRatCheck;/* '<S59>/Logical1' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVD_b_FrontAxlSpdRatlEnbl;/* '<S58>/Logical3' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVD_b_FrontAxlSpdRatlFail;/* '<S58>/Relational Operator' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVD_b_RearAxlSpdRatlEnbl;/* '<S59>/Logical3' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVD_b_RearAxlSpdRatlFail;/* '<S59>/Relational Operator' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVD_b_RearAxleRatlFlt_FltDtct;/* '<S100>/Relational Operator' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVD_b_WhlSpdDiff_FailDbnc;/* '<S66>/AND' */
static VAR(float32, CSVR_VAR_INIT) VeCSVD_n_MaxWhlSpdDiff;/* '<S57>/Sum1' */
static VAR(float32, CSVR_VAR_INIT) VeCSVD_n_MaxWhlSpd_DiffAbs;/* '<S57>/Abs' */
static VAR(float32, CSVR_VAR_INIT) VeCSVD_n_MinWhSpd;/* '<S57>/MinMax3' */
static VAR(float32, CSVR_VAR_INIT) VeCSVD_n_RearAxlSpdDiff;/* '<S59>/Subtract' */
static VAR(float32, CSVR_VAR_INIT) VeCSVD_v_FrontAxlSpdDiff;/* '<S58>/Subtract' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVR_b_MilON;/* '<S702>/Logical3' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVR_b_MilOnOff;/* '<S702>/Logical2' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVR_b_MtrA_SpdFA;/* '<S54>/SigConvForSigProp_VS3_0' */
static VAR(boolean, CSVR_VAR_INIT) VeCSVR_b_MtrB_SpdFA;/* '<S54>/SigConvForSigProp_VS4_0' */
static VAR(TeDFIR_MIL_Request, CSVR_VAR_INIT) VeCSVR_e_MIL_Request;/* '<S702>/Data Store Read' */
static VAR(sint16, CSVR_VAR_INIT) VeCSVR_e_PrimAxleDirectionSrc;/* '<S203>/Merge8' */
static VAR(TeCSVR_e_RefSpdSrc, CSVR_VAR_INIT) VeCSVR_e_ReferenceNoSrc;/* '<S198>/Merge1' */
static VAR(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT) VeCSVR_e_SecAxleDirection;/* '<S203>/Merge7' */
static VAR(sint16, CSVR_VAR_INIT) VeCSVR_e_SecAxleDirectionSrc;/* '<S203>/Merge9' */
static VAR(TeCSVR_e_Wheel_Direction, CSVR_VAR_INIT) VeCSVR_e_VehSpdPolarity;/* '<S621>/Switch1' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_l_DistTravelMIL_On_Merge;/* '<S702>/Merge1' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_FrontAxlSpdFromMtrA;/* '<S211>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_FrontAxlSpdFromMtrB;/* '<S212>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_FrontAxlSpdFromPrimWhlSpd;/* '<S213>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_FrontAxlSpdFromSecWhlSpd;/* '<S214>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_FrontAxlSpdFromTOSSnsr;/* '<S215>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RearAxlSpdFromFrontAxlSpd;/* '<S260>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RearAxlSpdFromMtrBSpd;/* '<S261>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RearAxlSpdFromMtrC;/* '<S262>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RearAxlSpdFromPrimWhlSpd;/* '<S263>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RearAxlSpdFromSecWhlSpd;/* '<S264>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RefNoFromRefSpd;/* '<S246>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RefNoFromSecNo;/* '<S247>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_RefNoFromSecWhlSpd;/* '<S248>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_TransOutFromTOSSnsr;/* '<S289>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_TransOutSpdFromMtrA;/* '<S286>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_TransOutSpdFromMtrB;/* '<S287>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_n_TransOutSpdFromPrimWhlSpd;/* '<S288>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_v_VehSpdFromMtrA;/* '<S624>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_v_VehSpdFromMtrB;/* '<S625>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_v_VehSpdFromMtrC;/* '<S626>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_v_VehSpdFromPrimAxle;/* '<S627>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_v_VehSpdFromSecAxle;/* '<S628>/Product' */
static VAR(float32, CSVR_VAR_INIT) VeCSVR_v_VehSpdFromTOSSnsr;/* '<S629>/Product' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CSVR
#include "MemMap.h"

CONST(ConstB_CSVR_ac_T, CSVR_VAR_INIT) CSVR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S666>/Constant' */
    CeCSVR_e_WheelDirectionUnknown,    /* '<S664>/Const42' */
    CeCSVR_e_WheelDirectionUnknown,    /* '<S664>/Const56' */
    CeCSVR_e_WheelDirectionUnknown,    /* '<S664>/Const57' */
    CeCSVR_e_WheelDirectionUnknown,    /* '<S664>/Const60' */
    CeCSVR_e_WheelDirectionUnknown,    /* '<S664>/Const61' */
    CeCSVR_e_WheelDirectionUnknown,    /* '<S664>/Const62' */
    CeCSVR_e_WheelDirectionUnknown,    /* '<S664>/Const63' */
    CeCSVR_e_VehSpdFrmCAN,             /* '<S664>/Const10' */
    CeCSVR_e_TRSCslr_NotLimiting,      /* '<S664>/Const70' */
    CeCSVR_e_TRSCr_Off,                /* '<S664>/Const68' */
    CeCSVR_e_TOS_VS_WhlUnknown,        /* '<S664>/Const32' */
    CeCSVR_e_THAsl_NoRequest,          /* '<S664>/Const69' */
    CeCSVR_e_THAr_Off,                 /* '<S664>/Const67' */
    CeCSVR_e_NturbFromCAN,             /* '<S664>/Const36' */
    CeCSVR_e_NoValidRASSrcAvail,       /* '<S664>/Const5' */
    CeCSVR_e_NoValidFASSrcAvail        /* '<S664>/Const2' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CSVR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

VAR(B_CSVR_ac_T, CSVR_VAR_INIT) CSVR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

VAR(DW_CSVR_ac_T, CSVR_VAR_INIT) CSVR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

/* Previous zero-crossings (trigger) states */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

VAR(PrevZCX_CSVR_ac_T, CSVR_VAR_INIT) CSVR_ac_PrevZCX;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSVR
#include "MemMap.h"

static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_CalcAveragedWhlSpeeds(VAR(float32,
    AUTOMATIC) rtu_LftWhlSpd, VAR(float32, AUTOMATIC) rtu_RghtWhlSpd, P2VAR
    (float32, AUTOMATIC, CSVR_VAR_INIT) rty_AvrgWhlSpd, P2VAR(boolean, AUTOMATIC,
    CSVR_VAR_INIT) rty_AvrgWhlSpdFA);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_CalcWhlSpdUsingLftWhl(VAR(float32,
    AUTOMATIC) rtu_LftWhlSpd, P2VAR(float32, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlSpd, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlSpdFA);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_CalcWhlSpdUsingRghtWhl(VAR(float32,
    AUTOMATIC) rtu_RghtWhlSpd, P2VAR(float32, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlSpd, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlSpdFA);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DefaultWhlSpd(P2VAR(float32,
    AUTOMATIC, CSVR_VAR_INIT) rty_WhlSpd, P2VAR(boolean, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlSpdFA);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingDWSS(VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC) rtu_LftWhlDir, VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC) rtu_RghtWhlDir, VAR(float32, AUTOMATIC)
    rtu_LftWhlSpd, VAR(float32, AUTOMATIC) rtu_RightWhlSpd, P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR(DW_DirectionUsingDWSS_CSVR_ac_T,
    AUTOMATIC, CSVR_VAR_INIT) localDW);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingMtrB(VAR(float32,
    AUTOMATIC) rtu_MtrBSpd, P2VAR(TeCSVR_e_Wheel_Direction, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDir, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlDirFA, P2VAR(sint16, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR
    (DW_DirectionUsingMtrB_CSVR_ac_T, AUTOMATIC, CSVR_VAR_INIT) localDW);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingMtrC(VAR(float32,
    AUTOMATIC) rtu_MtrCSpd, P2VAR(TeCSVR_e_Wheel_Direction, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDir, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlDirFA, P2VAR(sint16, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR
    (DW_DirectionUsingMtrC_CSVR_ac_T, AUTOMATIC, CSVR_VAR_INIT) localDW);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingGearBasedDir(VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC) rtu_GearBasedDir, P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingOutSpdPolarity(VAR
    (TeCSVR_e_OutSpdDirection, AUTOMATIC) rtu_OutputSpdPolarity, P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingMtrA(VAR(float32,
    AUTOMATIC) rtu_MtrASpd, P2VAR(TeCSVR_e_Wheel_Direction, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDir, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlDirFA, P2VAR(sint16, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR
    (DW_DirectionUsingMtrA_CSVR_ac_T, AUTOMATIC, CSVR_VAR_INIT) localDW);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Default(P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Park(P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_Out1);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Reverse(P2VAR(sint16,
    AUTOMATIC, CSVR_VAR_INIT) rty_Out1);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Neutral(P2VAR(sint16,
    AUTOMATIC, CSVR_VAR_INIT) rty_Out1);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Drive(P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_Out1);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSVR_VAR_INIT)
    rty_FaultSts);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Init_g(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSVR_VAR_INIT)
    rty_FaultSts);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSVR_VAR_INIT)
    rty_FaultSts);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Dtrmn_DistTdMIL_On(void);
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Dtrmn_MalfOdometer(void);

/*
 * Output and update for action system:
 *    '<S360>/CalcAveragedWhlSpeeds'
 *    '<S361>/CalcAveragedWhlSpeeds'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_CalcAveragedWhlSpeeds(VAR(float32,
    AUTOMATIC) rtu_LftWhlSpd, VAR(float32, AUTOMATIC) rtu_RghtWhlSpd, P2VAR
    (float32, AUTOMATIC, CSVR_VAR_INIT) rty_AvrgWhlSpd, P2VAR(boolean, AUTOMATIC,
    CSVR_VAR_INIT) rty_AvrgWhlSpdFA)
{
    /* Product: '<S369>/Product1' incorporates:
     *  Constant: '<S369>/Constant Value'
     *  Sum: '<S369>/Sum'
     */
    *rty_AvrgWhlSpd = (rtu_LftWhlSpd + rtu_RghtWhlSpd) / 2.0F;

    /* SignalConversion generated from: '<S369>/AvrgWhlSpdFA' incorporates:
     *  Constant: '<S369>/FALSE Constant'
     */
    *rty_AvrgWhlSpdFA = false;
}

/*
 * Output and update for action system:
 *    '<S360>/CalcWhlSpdUsingLftWhl'
 *    '<S361>/CalcWhlSpdUsingLftWhl'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_CalcWhlSpdUsingLftWhl(VAR(float32,
    AUTOMATIC) rtu_LftWhlSpd, P2VAR(float32, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlSpd, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlSpdFA)
{
    /* Gain: '<S392>/Gain' */
    *rty_WhlSpd = rtu_LftWhlSpd;

    /* SignalConversion generated from: '<S371>/WhlSpdFA' incorporates:
     *  Constant: '<S371>/FALSE Constant'
     */
    *rty_WhlSpdFA = false;
}

/*
 * Output and update for action system:
 *    '<S360>/CalcWhlSpdUsingRghtWhl'
 *    '<S361>/CalcWhlSpdUsingRghtWhl'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_CalcWhlSpdUsingRghtWhl(VAR(float32,
    AUTOMATIC) rtu_RghtWhlSpd, P2VAR(float32, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlSpd, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlSpdFA)
{
    /* Gain: '<S393>/Gain' */
    *rty_WhlSpd = rtu_RghtWhlSpd;

    /* SignalConversion generated from: '<S372>/WhlSpdFA' incorporates:
     *  Constant: '<S372>/FALSE Constant'
     */
    *rty_WhlSpdFA = false;
}

/*
 * Output and update for action system:
 *    '<S360>/DefaultWhlSpd'
 *    '<S361>/DefaultWhlSpd'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DefaultWhlSpd(P2VAR(float32,
    AUTOMATIC, CSVR_VAR_INIT) rty_WhlSpd, P2VAR(boolean, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlSpdFA)
{
    /* SignalConversion generated from: '<S374>/WhlSpd' incorporates:
     *  Constant: '<S398>/Calib'
     */
    *rty_WhlSpd = KeCSVR_n_DefaultWhlSpd;

    /* SignalConversion generated from: '<S374>/WhlSpdFA' incorporates:
     *  Constant: '<S397>/Calib'
     */
    *rty_WhlSpdFA = KeCSVR_b_DefaultWhlSpdFA;
}

/*
 * Output and update for action system:
 *    '<S360>/DirectionUsingDWSS'
 *    '<S361>/DirectionUsingDWSS'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingDWSS(VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC) rtu_LftWhlDir, VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC) rtu_RghtWhlDir, VAR(float32, AUTOMATIC)
    rtu_LftWhlSpd, VAR(float32, AUTOMATIC) rtu_RightWhlSpd, P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR(DW_DirectionUsingDWSS_CSVR_ac_T,
    AUTOMATIC, CSVR_VAR_INIT) localDW)
{
    /* Switch: '<S412>/Switch1' incorporates:
     *  Constant: '<S399>/Invalid'
     *  Constant: '<S408>/Constant'
     *  Constant: '<S409>/Constant'
     *  RelationalOperator: '<S399>/Comparison1'
     *  RelationalOperator: '<S399>/Comparison2'
     *  Switch: '<S411>/Switch1'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    if (((uint32)rtu_LftWhlDir) == CeCSVR_e_WheelDirectionInvalid)
    {
        localDW->UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        if (((uint32)rtu_LftWhlDir) != CeCSVR_e_WheelDirectionUnknown)
        {
            /* Switch: '<S410>/Switch1' incorporates:
             *  Constant: '<S407>/Constant'
             *  RelationalOperator: '<S399>/Comparison4'
             *  Switch: '<S411>/Switch1'
             */
            if (((uint32)rtu_LftWhlDir) == CeCSVR_e_WheelDirectionReverse)
            {
                /* UnitDelay: '<S399>/Unit Delay' incorporates:
                 *  Constant: '<S399>/ConstantValue'
                 *  Switch: '<S411>/Switch1'
                 */
                localDW->UnitDelay_DSTATE = -1.0F;
            }
            else
            {
                /* UnitDelay: '<S399>/Unit Delay' incorporates:
                 *  Constant: '<S399>/ForwardDirection'
                 *  Switch: '<S411>/Switch1'
                 */
                localDW->UnitDelay_DSTATE = 1.0F;
            }

            /* End of Switch: '<S410>/Switch1' */
        }
    }

    /* End of Switch: '<S412>/Switch1' */

    /* Switch: '<S418>/Switch1' incorporates:
     *  Constant: '<S400>/Invalid'
     *  Constant: '<S414>/Constant'
     *  Constant: '<S415>/Constant'
     *  RelationalOperator: '<S400>/Comparison1'
     *  RelationalOperator: '<S400>/Comparison2'
     *  Switch: '<S417>/Switch1'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if (((uint32)rtu_RghtWhlDir) == CeCSVR_e_WheelDirectionInvalid)
    {
        localDW->UnitDelay_DSTATE_d = 0.0F;
    }
    else
    {
        if (((uint32)rtu_RghtWhlDir) != CeCSVR_e_WheelDirectionUnknown)
        {
            /* Switch: '<S416>/Switch1' incorporates:
             *  Constant: '<S413>/Constant'
             *  RelationalOperator: '<S400>/Comparison4'
             *  Switch: '<S417>/Switch1'
             */
            if (((uint32)rtu_RghtWhlDir) == CeCSVR_e_WheelDirectionReverse)
            {
                /* UnitDelay: '<S400>/Unit Delay' incorporates:
                 *  Constant: '<S400>/ConstantValue'
                 *  Switch: '<S417>/Switch1'
                 */
                localDW->UnitDelay_DSTATE_d = -1.0F;
            }
            else
            {
                /* UnitDelay: '<S400>/Unit Delay' incorporates:
                 *  Constant: '<S400>/ForwardDirection'
                 *  Switch: '<S417>/Switch1'
                 */
                localDW->UnitDelay_DSTATE_d = 1.0F;
            }

            /* End of Switch: '<S416>/Switch1' */
        }
    }

    /* End of Switch: '<S418>/Switch1' */

    /* If: '<S375>/If' incorporates:
     *  Constant: '<S375>/Constant Value'
     *  Constant: '<S375>/Constant Value1'
     *  Constant: '<S402>/Constant'
     *  Constant: '<S403>/Constant'
     *  Logic: '<S375>/Logical'
     *  Product: '<S375>/Product1'
     *  Product: '<S399>/Product'
     *  Product: '<S400>/Product'
     *  RelationalOperator: '<S375>/Comparison1'
     *  RelationalOperator: '<S375>/Comparison2'
     *  RelationalOperator: '<S375>/Comparison4'
     *  Sum: '<S375>/Sum'
     *  UnitDelay: '<S399>/Unit Delay'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if ((((uint32)rtu_LftWhlDir) == CeCSVR_e_WheelDirectionInvalid) && (((uint32)
            rtu_RghtWhlDir) == CeCSVR_e_WheelDirectionInvalid))
    {
        /* Outputs for IfAction SubSystem: '<S375>/WheelDirUnknown' incorporates:
         *  ActionPort: '<S406>/Action Port'
         */
        /* SignalConversion generated from: '<S406>/WheelDir' incorporates:
         *  Constant: '<S421>/Constant'
         */
        *rty_WhlDir = CeCSVR_e_WheelDirectionInvalid;

        /* SignalConversion generated from: '<S406>/WheelDirFA' incorporates:
         *  Constant: '<S422>/Calib'
         */
        *rty_WhlDirFA = KeCSVR_b_WhlDirUnknownFA;

        /* End of Outputs for SubSystem: '<S375>/WheelDirUnknown' */
    }
    else if ((((rtu_LftWhlSpd * localDW->UnitDelay_DSTATE) + (rtu_RightWhlSpd *
                localDW->UnitDelay_DSTATE_d)) / 2.0F) < 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S375>/WheelDirReverse' incorporates:
         *  ActionPort: '<S405>/Action Port'
         */
        /* SignalConversion generated from: '<S405>/WheelDir' incorporates:
         *  Constant: '<S420>/Constant'
         */
        *rty_WhlDir = CeCSVR_e_WheelDirectionReverse;

        /* SignalConversion generated from: '<S405>/WheelDirFA' incorporates:
         *  Constant: '<S405>/FALSE Constant'
         */
        *rty_WhlDirFA = false;

        /* End of Outputs for SubSystem: '<S375>/WheelDirReverse' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S375>/WheelDirForward' incorporates:
         *  ActionPort: '<S404>/Action Port'
         */
        /* SignalConversion generated from: '<S404>/WheelDir' incorporates:
         *  Constant: '<S419>/Constant'
         */
        *rty_WhlDir = CeCSVR_e_WheelDirectionForward;

        /* SignalConversion generated from: '<S404>/WheelDirFA' incorporates:
         *  Constant: '<S404>/FALSE Constant'
         */
        *rty_WhlDirFA = false;

        /* End of Outputs for SubSystem: '<S375>/WheelDirForward' */
    }

    /* End of If: '<S375>/If' */

    /* DataTypeConversion: '<S375>/DTCBlk57' incorporates:
     *  Constant: '<S401>/Constant'
     */
    *rty_WhlDirSrc = CeCSVR_e_AxleDirFromWhls;
}

/*
 * Output and update for action system:
 *    '<S360>/DirectionUsingMtrB'
 *    '<S361>/DirectionUsingMtrB'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingMtrB(VAR(float32,
    AUTOMATIC) rtu_MtrBSpd, P2VAR(TeCSVR_e_Wheel_Direction, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDir, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlDirFA, P2VAR(sint16, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR
    (DW_DirectionUsingMtrB_CSVR_ac_T, AUTOMATIC, CSVR_VAR_INIT) localDW)
{
    /* Outputs for Atomic SubSystem: '<S378>/Hysteresis' */
    /* Switch: '<S434>/Switch1' incorporates:
     *  Constant: '<S434>/Constant Value'
     *  Constant: '<S436>/Calib'
     *  Constant: '<S437>/Calib'
     *  RelationalOperator: '<S434>/Greater  Than'
     *  RelationalOperator: '<S434>/Greater  Than1'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    if (rtu_MtrBSpd > KeCSVR_n_UpperThrldforDirMtrB_ForWhl)
    {
        localDW->UnitDelay_DSTATE = true;
    }
    else
    {
        localDW->UnitDelay_DSTATE = ((rtu_MtrBSpd >=
            KeCSVR_n_LowerThrldforDirMtrB_ForWhl) && (localDW->UnitDelay_DSTATE));
    }

    /* End of Switch: '<S434>/Switch1' */
    /* End of Outputs for SubSystem: '<S378>/Hysteresis' */

    /* Switch: '<S435>/Switch1' incorporates:
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    if (localDW->UnitDelay_DSTATE)
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionForward;
    }
    else
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionReverse;
    }

    /* End of Switch: '<S435>/Switch1' */

    /* SignalConversion generated from: '<S378>/WhlDirFA' incorporates:
     *  Constant: '<S378>/FALSE Constant'
     */
    *rty_WhlDirFA = false;

    /* DataTypeConversion: '<S378>/DTCBlk67' incorporates:
     *  Constant: '<S431>/Constant'
     */
    *rty_WhlDirSrc = CeCSVR_e_AxleDirFromMtrB;
}

/*
 * Output and update for action system:
 *    '<S360>/DirectionUsingMtrC'
 *    '<S361>/DirectionUsingMtrC'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingMtrC(VAR(float32,
    AUTOMATIC) rtu_MtrCSpd, P2VAR(TeCSVR_e_Wheel_Direction, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDir, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlDirFA, P2VAR(sint16, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR
    (DW_DirectionUsingMtrC_CSVR_ac_T, AUTOMATIC, CSVR_VAR_INIT) localDW)
{
    /* Outputs for Atomic SubSystem: '<S379>/Hysteresis' */
    /* Switch: '<S441>/Switch1' incorporates:
     *  Constant: '<S441>/Constant Value'
     *  Constant: '<S443>/Calib'
     *  Constant: '<S444>/Calib'
     *  RelationalOperator: '<S441>/Greater  Than'
     *  RelationalOperator: '<S441>/Greater  Than1'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    if (rtu_MtrCSpd > KeCSVR_n_UpperThrldforDirMtrC_ForWhl)
    {
        localDW->UnitDelay_DSTATE = true;
    }
    else
    {
        localDW->UnitDelay_DSTATE = ((rtu_MtrCSpd >=
            KeCSVR_n_LowerThrldforDirMtrC_ForWhl) && (localDW->UnitDelay_DSTATE));
    }

    /* End of Switch: '<S441>/Switch1' */
    /* End of Outputs for SubSystem: '<S379>/Hysteresis' */

    /* Switch: '<S442>/Switch1' incorporates:
     *  Constant: '<S439>/Constant'
     *  Constant: '<S440>/Constant'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    if (localDW->UnitDelay_DSTATE)
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionForward;
    }
    else
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionReverse;
    }

    /* End of Switch: '<S442>/Switch1' */

    /* SignalConversion generated from: '<S379>/WhlDirFA' incorporates:
     *  Constant: '<S379>/FALSE Constant'
     */
    *rty_WhlDirFA = false;

    /* DataTypeConversion: '<S379>/DTCBlk70' incorporates:
     *  Constant: '<S438>/Constant'
     */
    *rty_WhlDirSrc = CeCSVR_e_AxleDirFromMtrC;
}

/*
 * Output and update for action system:
 *    '<S360>/DirectionUsingGearBasedDir'
 *    '<S361>/DirectionUsingGearBasedDir'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingGearBasedDir(VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC) rtu_GearBasedDir, P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc)
{
    /* SignalConversion: '<S376>/Signal Copy' */
    *rty_WhlDir = rtu_GearBasedDir;

    /* SignalConversion generated from: '<S376>/WhlDirFA' incorporates:
     *  Constant: '<S376>/FALSE Constant'
     */
    *rty_WhlDirFA = false;

    /* DataTypeConversion: '<S376>/DTCBlk61' incorporates:
     *  Constant: '<S423>/Constant'
     */
    *rty_WhlDirSrc = CeCSVR_e_AxleDirFromGearBasedDirection;
}

/*
 * Output and update for action system:
 *    '<S360>/DirectionUsingOutSpdPolarity'
 *    '<S361>/DirectionUsingOutSpdPolarity'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingOutSpdPolarity(VAR
    (TeCSVR_e_OutSpdDirection, AUTOMATIC) rtu_OutputSpdPolarity, P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc)
{
    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S446>/Constant'
     *  Constant: '<S447>/Constant'
     *  Constant: '<S449>/Calib'
     *  RelationalOperator: '<S380>/Comparison4'
     */
    if (rtu_OutputSpdPolarity == KeCSVR_e_OutPutSpdReverse)
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionReverse;
    }
    else
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionForward;
    }

    /* End of Switch: '<S448>/Switch1' */

    /* SignalConversion generated from: '<S380>/WhlDirFA' incorporates:
     *  Constant: '<S380>/FALSE Constant'
     */
    *rty_WhlDirFA = false;

    /* DataTypeConversion: '<S380>/DTCBlk73' incorporates:
     *  Constant: '<S445>/Constant'
     */
    *rty_WhlDirSrc = CeCSVR_e_AxleDirFromTransOutputPol;
}

/*
 * Output and update for action system:
 *    '<S360>/DirectionUsingMtrA'
 *    '<S361>/DirectionUsingMtrA'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_DirectionUsingMtrA(VAR(float32,
    AUTOMATIC) rtu_MtrASpd, P2VAR(TeCSVR_e_Wheel_Direction, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDir, P2VAR(boolean, AUTOMATIC, CSVR_VAR_INIT)
    rty_WhlDirFA, P2VAR(sint16, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirSrc, P2VAR
    (DW_DirectionUsingMtrA_CSVR_ac_T, AUTOMATIC, CSVR_VAR_INIT) localDW)
{
    /* Outputs for Atomic SubSystem: '<S377>/Hysteresis' */
    /* Switch: '<S427>/Switch1' incorporates:
     *  Constant: '<S427>/Constant Value'
     *  Constant: '<S429>/Calib'
     *  Constant: '<S430>/Calib'
     *  RelationalOperator: '<S427>/Greater  Than'
     *  RelationalOperator: '<S427>/Greater  Than1'
     *  UnitDelay: '<S427>/Unit Delay'
     */
    if (rtu_MtrASpd > KeCSVR_n_UpperThrldforDirMtrA_ForWhl)
    {
        localDW->UnitDelay_DSTATE = true;
    }
    else
    {
        localDW->UnitDelay_DSTATE = ((rtu_MtrASpd >=
            KeCSVR_n_LowerThrldforDirMtrA_ForWhl) && (localDW->UnitDelay_DSTATE));
    }

    /* End of Switch: '<S427>/Switch1' */
    /* End of Outputs for SubSystem: '<S377>/Hysteresis' */

    /* Switch: '<S428>/Switch1' incorporates:
     *  Constant: '<S425>/Constant'
     *  Constant: '<S426>/Constant'
     *  UnitDelay: '<S427>/Unit Delay'
     */
    if (localDW->UnitDelay_DSTATE)
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionForward;
    }
    else
    {
        *rty_WhlDir = CeCSVR_e_WheelDirectionReverse;
    }

    /* End of Switch: '<S428>/Switch1' */

    /* SignalConversion generated from: '<S377>/WhlDirFA' incorporates:
     *  Constant: '<S377>/FALSE Constant'
     */
    *rty_WhlDirFA = false;

    /* DataTypeConversion: '<S377>/DTCBlk64' incorporates:
     *  Constant: '<S424>/Constant'
     */
    *rty_WhlDirSrc = CeCSVR_e_AxleDirFromMtrA;
}

/*
 * Output and update for action system:
 *    '<S360>/Default'
 *    '<S361>/Default'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Default(P2VAR
    (TeCSVR_e_Wheel_Direction, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDir, P2VAR
    (boolean, AUTOMATIC, CSVR_VAR_INIT) rty_WhlDirFA, P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_WhlDirSrc)
{
    /* SignalConversion generated from: '<S373>/WhlDir' incorporates:
     *  Constant: '<S395>/Constant'
     */
    *rty_WhlDir = CeCSVR_e_WheelDirectionInvalid;

    /* SignalConversion generated from: '<S373>/WhlDirFA' incorporates:
     *  Constant: '<S396>/Calib'
     */
    *rty_WhlDirFA = KeCSVR_b_WheelDirectionInvalidFA;

    /* DataTypeConversion: '<S373>/DTCBlk47' incorporates:
     *  Constant: '<S394>/Constant'
     */
    *rty_WhlDirSrc = CeCSVR_e_NoValidAxleDirSrcAvail;
}

/*
 * Output and update for action system:
 *    '<S550>/Actual_Park'
 *    '<S550>/Target_Park'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Park(P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S555>/Out1' incorporates:
     *  Constant: '<S555>/Constant Value'
     */
    *rty_Out1 = 0;
}

/*
 * Output and update for action system:
 *    '<S550>/Actual_Reverse'
 *    '<S550>/Target_Reverse'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Reverse(P2VAR(sint16,
    AUTOMATIC, CSVR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S556>/Out1' incorporates:
     *  Constant: '<S556>/Constant Value'
     */
    *rty_Out1 = 1;
}

/*
 * Output and update for action system:
 *    '<S550>/Actual_Neutral'
 *    '<S550>/Target_Neutral'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Neutral(P2VAR(sint16,
    AUTOMATIC, CSVR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S554>/Out1' incorporates:
     *  Constant: '<S554>/Constant Value'
     */
    *rty_Out1 = 2;
}

/*
 * Output and update for action system:
 *    '<S550>/Actual_Drive'
 *    '<S550>/Target_Drive'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Actual_Drive(P2VAR(sint16, AUTOMATIC,
    CSVR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S553>/Out1' incorporates:
     *  Constant: '<S553>/Constant Value'
     */
    *rty_Out1 = 3;
}

/*
 * Output and update for enable system:
 *    '<S77>/Fail'
 *    '<S100>/Fail'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSVR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S77>/Fail' incorporates:
     *  EnablePort: '<S81>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S81>/FaultSts' incorporates:
         *  Constant: '<S87>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S77>/Fail' */
}

/*
 * Output and update for enable system:
 *    '<S77>/Init'
 *    '<S100>/Init'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Init_g(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSVR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S77>/Init' incorporates:
     *  EnablePort: '<S82>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S82>/FaultSts' incorporates:
         *  Constant: '<S88>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S77>/Init' */
}

/*
 * Output and update for enable system:
 *    '<S77>/Pass'
 *    '<S100>/Pass'
 */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSVR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S77>/Pass' incorporates:
     *  EnablePort: '<S83>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S83>/FaultSts' incorporates:
         *  Constant: '<S89>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S77>/Pass' */
}

/* Output and update for atomic system: '<S701>/Dtrmn_DistTdMIL_On' */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Dtrmn_DistTdMIL_On(void)
{
    float32 rtb_Switch1;
    uint16 tmpRead;

    /* RelationalOperator: '<S702>/Comparison4' incorporates:
     *  DataStoreRead: '<S702>/Data Store Read'
     */
    VeCSVR_e_MIL_Request = CSVR_ac_DW.NeCSVR_e_MIL_LightRequest;

    /* Logic: '<S702>/Logical2' incorporates:
     *  Constant: '<S704>/Constant'
     *  Constant: '<S705>/Constant'
     *  DataStoreRead: '<S702>/Data Store Read1'
     *  Logic: '<S702>/Logical1'
     *  Logic: '<S702>/Logical4'
     *  RelationalOperator: '<S702>/Comparison1'
     *  RelationalOperator: '<S702>/Comparison4'
     */
    VeCSVR_b_MilOnOff = ((!CSVR_ac_DW.NeCSVR_b_PriorMIL_StatusOn) && ((((uint32)
                            VeCSVR_e_MIL_Request) == CeDFIR_MIL_On) || (((uint32)
                            VeCSVR_e_MIL_Request) == CeDFIR_MIL_Flash)));

    /* Logic: '<S702>/Logical3' incorporates:
     *  Constant: '<S706>/Constant'
     *  Constant: '<S707>/Constant'
     *  RelationalOperator: '<S702>/Comparison3'
     *  RelationalOperator: '<S702>/Comparison5'
     */
    VeCSVR_b_MilON = ((((uint32)VeCSVR_e_MIL_Request) == CeDFIR_MIL_On) ||
                      (((uint32)VeCSVR_e_MIL_Request) == CeDFIR_MIL_Flash));

    /* If: '<S702>/If' incorporates:
     *  Inport: '<Root>/VeDFIR_cnt_NumEmissionDTC'
     */
    if (VeCSVR_b_MilOnOff)
    {
        (void)Rte_Read_VeDFIR_cnt_NumEmissionDTC_Value(&tmpRead);

        /* Outputs for IfAction SubSystem: '<S702>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S709>/Action Port'
         */
        /* If: '<S709>/If1' incorporates:
         *  Inport: '<Root>/VeDFIR_cnt_NumEmissionDTC'
         *  RelationalOperator: '<S709>/Comparison2'
         */
        if (((sint32)tmpRead) == 0)
        {
            /* Outputs for IfAction SubSystem: '<S709>/If Action Subsystem' incorporates:
             *  ActionPort: '<S712>/Action Port'
             */
            /* Merge: '<S702>/Merge1' incorporates:
             *  Constant: '<S712>/Constant Value1'
             *  SignalConversion generated from: '<S712>/VeCSVC_l_DistTravelMIL_On'
             */
            VeCSVR_l_DistTravelMIL_On_Merge = 0.0F;

            /* End of Outputs for SubSystem: '<S709>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S709>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S713>/Action Port'
             */
            /* Merge: '<S702>/Merge1' incorporates:
             *  Constant: '<S714>/Calib'
             *  SignalConversion generated from: '<S713>/VeCSVC_l_DistTravelMIL_On'
             */
            VeCSVR_l_DistTravelMIL_On_Merge = KeCSVR_l_DistTravelMIL_On_default;

            /* End of Outputs for SubSystem: '<S709>/If Action Subsystem1' */
        }

        /* End of If: '<S709>/If1' */
        /* End of Outputs for SubSystem: '<S702>/If Action Subsystem2' */
    }
    else
    {
        if (VeCSVR_b_MilON)
        {
            /* Outputs for IfAction SubSystem: '<S702>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S708>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S708>/Protected Division' */
            /* Switch: '<S711>/Switch1' incorporates:
             *  Constant: '<S711>/Constant Value'
             *  Constant: '<S711>/Constant Value2'
             *  Constant: '<S711>/Constant Value3'
             *  RelationalOperator: '<S711>/Greater Than or Equal '
             *  RelationalOperator: '<S711>/Greater Than or Equal 1'
             *  RelationalOperator: '<S711>/Not Equal'
             *  Switch: '<S711>/Switch2'
             *  Switch: '<S711>/Switch3'
             */
            if (CSVR_ac_B.TmpSignalConversionAtVeCSVC_v_VehSpd_Rea != 0.0F)
            {
                /* Switch: '<S711>/Switch1' incorporates:
                 *  Constant: '<S708>/Constant Value5'
                 *  Product: '<S711>/Division'
                 */
                rtb_Switch1 = CSVR_ac_B.TmpSignalConversionAtVeCSVC_v_VehSpd_Rea
                    / 3600.0F;
            }
            else if (CSVR_ac_B.TmpSignalConversionAtVeCSVC_v_VehSpd_Rea > 0.0F)
            {
                /* Switch: '<S711>/Switch2' incorporates:
                 *  Constant: '<S711>/MAXFLOAT'
                 *  Switch: '<S711>/Switch1'
                 */
                rtb_Switch1 = 3.402823466E+38F;
            }
            else if (CSVR_ac_B.TmpSignalConversionAtVeCSVC_v_VehSpd_Rea < 0.0F)
            {
                /* Switch: '<S711>/Switch3' incorporates:
                 *  Constant: '<S711>/MINFLOAT'
                 *  Switch: '<S711>/Switch1'
                 *  Switch: '<S711>/Switch2'
                 */
                rtb_Switch1 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S711>/Switch1' incorporates:
                 *  Constant: '<S711>/Constant Value4'
                 *  Switch: '<S711>/Switch2'
                 *  Switch: '<S711>/Switch3'
                 */
                rtb_Switch1 = 0.0F;
            }

            /* End of Switch: '<S711>/Switch1' */
            /* End of Outputs for SubSystem: '<S708>/Protected Division' */

            /* Sum: '<S708>/Sum1' incorporates:
             *  Constant: '<S710>/Calib'
             *  DataStoreRead: '<S708>/Data Store Read3'
             *  Product: '<S708>/Product4'
             */
            VeCSVC_l_DistTravelMIL_On = (rtb_Switch1 * KeCSVR_t_1000dt) +
                CSVR_ac_DW.NeCSVR_l_DistTravelMIL_On;

            /* Merge: '<S702>/Merge1' incorporates:
             *  SignalConversion: '<S708>/Signal Copy'
             */
            VeCSVR_l_DistTravelMIL_On_Merge = VeCSVC_l_DistTravelMIL_On;

            /* End of Outputs for SubSystem: '<S702>/If Action Subsystem1' */
        }
    }

    /* End of If: '<S702>/If' */

    /* DataStoreWrite: '<S702>/Data Store Write1' */
    CSVR_ac_DW.NeCSVR_l_DistTravelMIL_On = VeCSVR_l_DistTravelMIL_On_Merge;
}

/* Output and update for atomic system: '<S701>/Dtrmn_MalfOdometer' */
static FUNC(void, CSVR_CODE_LOCAL) CSVR_ac_Dtrmn_MalfOdometer(void)
{
    /* Sum: '<S703>/Sum' incorporates:
     *  Constant: '<S703>/Constant Value'
     *  Constant: '<S715>/Calib'
     *  DataStoreRead: '<S703>/Data Store Read'
     *  Product: '<S703>/Product1'
     *  Product: '<S703>/Product4'
     */
    CSVR_ac_B.Gain = ((CSVR_ac_B.TmpSignalConversionAtVeCSVC_v_VehSpd_Rea /
                       3600.0F) * KeCSVR_t_1000dt) +
        CSVR_ac_DW.NeCSVR_l_DistSinceCodeClr;

    /* DataStoreWrite: '<S703>/Data Store Write2' */
    CSVR_ac_DW.NeCSVR_l_DistSinceCodeClr = CSVR_ac_B.Gain;
}

/* Model step function for TID1 */
FUNC(void, CSVR_CODE) CSVR_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    TeCSVR_e_Wheel_Direction rtb_TmpSignalConversionAtVeCSVR_e_LeftRe;
    TeCSVR_e_Wheel_Direction rtb_TmpSignalConversionAtVeCSVR_e_RightR;
    TeCSVR_e_Wheel_Direction rtb_TmpSignalConversionAtVeCSVR_e_LeftFr;
    TeCSVR_e_Wheel_Direction rtb_TmpSignalConversionAtVeCSVR_e_RightF;
    TeCSVR_e_OutSpdDirection rtb_TmpSignalConversionAtVeCSVR_e_OutSpd;
    sint32 exitg1;
    sint32 i;
    float32 tmpRead[9];
    float32 Gain_d;
    float32 Gain_p2;
    float32 Product1;
    float32 Switch1_d;
    float32 VeCSVC_l_WhlRadius;
    float32 VeCSVC_n_FrontAxlSpdSgndRaw;
    float32 VeCSVC_n_PrimWhlSpdSigned;
    float32 VeCSVC_n_RearAxlSpdSgndRaw;
    float32 VeCSVC_n_TransOutSpdSgndRaw;
    float32 rtb_Product;
    float32 rtb_Product_dg;
    float32 rtb_Switch5;
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 rtb_TmpSignalConversionAtVeCSVR_0;
    float32 rtb_TmpSignalConversionAtVeCSVR_1;
    float32 rtb_TmpSignalConversionAtVeCSVR_2;
    float32 rtb_TmpSignalConversionAtVeCSVR_n_LeftFr;
    float32 rtb_TmpSignalConversionAtVeCSVR_n_LeftRe;
    float32 rtb_TmpSignalConversionAtVeCSVR_n_RightF;
    float32 rtb_TmpSignalConversionAtVeCSVR_n_RightR;
    float32 rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
    float32 rtb_TmpSignalConversionAtVeFWDR_r_TCaseR;
    float32 rtb_TmpSignalConversionAtVeTISR_n_InputS;
    uint32 rtb_Logical1_h_tmp;
    uint32 rtb_RelationalOperator3_tmp;
    sint16 b_index;
    sint16 rtb_VeCSVR_e_VehSpdSource;
    sint16 rtb_VeCSVR_e_WhlDirSource_p;
    TeADCR_e_WEDStatus rtb_TmpSignalConversionAtADCR_WEDAxleSta;
    TeCSVR_e_SourceForFrontAxlSpd DataTypeConversion_go;
    TeCSVR_e_SourceForRearAxlSpd VeCSVC_e_RearAxlSpdSrc;
    TeCSVR_e_SourceForTurbineSpeed DataTypeConversion_bs;
    TeCSVR_e_THA_Response DataTypeConversion_lj;
    TeCSVR_e_THA_STAT rtb_LogicalOperator6_tmp;
    TeCSVR_e_THA_SpdLim DataTypeConversion_g;
    TeCSVR_e_TOS_VS_WhlResult DataTypeConversion_h;
    TeCSVR_e_TRSC_Response DataTypeConversion_l;
    TeCSVR_e_TRSC_STAT rtb_LogicalOperator1_m_tmp;
    TeCSVR_e_TRSC_SpdLimReq DataTypeConversion_n;
    TeCSVR_e_VehSpdSrc DataTypeConversion_iw;
    TeCSVR_e_Wheel_Direction VeCSVC_e_TransOutSpdDir;
    TeCSVR_e_Wheel_Direction rtb_Switch_d;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_Tcase_;
    TeMSPR_e_MotorSpeedSrc tmpRead_2;
    TeMSPR_e_MotorSpeedSrc tmpRead_3;
    TeMSPR_e_MotorSpeedSrc tmpRead_4;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Actual;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Target;
    TeTRNR_e_TCMGearStat tmpRead_0;
    TeTRNR_e_TCMGearStat tmpRead_1;
    uint8 rtb_DataTypeConversion1[6];
    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;
    boolean rtb_TmpSignalConversionAtSFunctionInport[7];
    boolean rtb_TmpSignalConversionAtSFunctionInpo_a[6];
    boolean rtb_TmpSignalConversionAtSFunctionInpo_k[5];
    boolean rtb_TmpSignalConversionAtSFunctionInpo_d[4];
    boolean rtb_TmpSignalConversionAtSFunctionInp_ed[3];
    boolean Gain_be;
    boolean Gain_ez;
    boolean Gain_iy;
    boolean VeCSVC_b_RearAxlSpdFA;
    boolean VeCSVC_b_TransOutSpdFA;
    boolean rtb_AND_a;
    boolean rtb_Logical1_a0;
    boolean rtb_LogicalOperator1_c;
    boolean rtb_LogicalOperator2_m;
    boolean rtb_LogicalOperator6;
    boolean rtb_LogicalOperator_h;
    boolean rtb_NOT4;
    boolean rtb_RelationalOperator2_n;
    boolean rtb_Switch11;
    boolean rtb_Switch2_di;
    boolean rtb_Switch5_c;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_CanSig;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_LeftFr;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_LeftRe;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_Left_c;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_Left_h;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_OutSpd;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_Righ_h;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_Righ_j;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_RightF;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_RightR;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_TOSSns;
    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;
    boolean rtb_TmpSignalConversionAtVeTRNR_b_Actual;
    boolean rtb_TmpSignalConversionAtVeTRNR_b_Target;

    /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&rtb_Switch2_di);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* DataStoreWrite: '<S54>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeBSWR_e_MIL_Request'
     */
    (void)Rte_Read_VeBSWR_e_MIL_Request_Value
        (&CSVR_ac_DW.NeCSVR_e_MIL_LightRequest);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* SignalConversion generated from: '<S2>/VeCSVR_b_LeftFrontWhlFA_read' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_LeftFr =
        Rte_IrvRead_CSVR_FastTEF_LeftFrontWhlFA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_n_LeftFrontWhl_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtVeCSVR_n_LeftFr =
        Rte_IrvRead_CSVR_FastTEF_LeftFrontWhl_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_RightFrontWhlFA_read' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_RightF =
        Rte_IrvRead_CSVR_FastTEF_RightFrontWhlFA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_n_RightFrontWhl_read' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    rtb_TmpSignalConversionAtVeCSVR_n_RightF =
        Rte_IrvRead_CSVR_FastTEF_RightFrontWhl_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_LeftFrontWhlDirFA_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Left_c =
        Rte_IrvRead_CSVR_FastTEF_LeftFrontWhlDir_FA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_RightFrontWhlDirFA_read' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Righ_h =
        Rte_IrvRead_CSVR_FastTEF_RightFrontWhlDir_FA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_OutSpdPolarityFA_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_OutSpd =
        Rte_IrvRead_CSVR_FastTEF_OutSpdPolarityFA_initVal_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_e_OutSpdPolarity_read' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    rtb_TmpSignalConversionAtVeCSVR_e_OutSpd =
        Rte_IrvRead_CSVR_FastTEF_OutSpdPolarity_initVal_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_LeftRearWhlFA_read' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_LeftRe =
        Rte_IrvRead_CSVR_FastTEF_LeftRearWhlFA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_n_LeftRearWhl_read' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    rtb_TmpSignalConversionAtVeCSVR_n_LeftRe =
        Rte_IrvRead_CSVR_FastTEF_LeftRearWhl_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_RightRearWhlFA_read' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_RightR =
        Rte_IrvRead_CSVR_FastTEF_RightRearWhlFA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_n_RightRearWhl_read' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    rtb_TmpSignalConversionAtVeCSVR_n_RightR =
        Rte_IrvRead_CSVR_FastTEF_RightRearWhl_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_LeftRearWhlDirFA_read' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Left_h =
        Rte_IrvRead_CSVR_FastTEF_LeftRearWhlDir_FA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_RightRearWhlDirFA_read' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Righ_j =
        Rte_IrvRead_CSVR_FastTEF_RightRearWhlDir_FA_Init_write_IRV();

    /* RelationalOperator: '<S361>/Comparison4' incorporates:
     *  Merge: '<Root>/Merge_9'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_LeftRearWhlDir_read'
     */
    rtb_TmpSignalConversionAtVeCSVR_e_LeftRe =
        Rte_IrvRead_CSVR_FastTEF_LeftRearWhlDir_Init_write_IRV();

    /* RelationalOperator: '<S361>/Comparison1' incorporates:
     *  Merge: '<Root>/Merge_13'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_RightRearWhlDir_read'
     */
    rtb_TmpSignalConversionAtVeCSVR_e_RightR =
        Rte_IrvRead_CSVR_FastTEF_RightRearWhlDir_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeCSVR_b_TOSSnsrSpdRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_TOSSns =
        Rte_IrvRead_CSVR_FastTEF_TOSSnsrSpdRawFA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_Tcase_);

    /* SignalConversion generated from: '<S2>/VeFWDR_r_TCaseRatio' incorporates:
     *  Inport: '<Root>/VeFWDR_r_TCaseRatio'
     */
    (void)Rte_Read_VeFWDR_r_TCaseRatio_Value
        (&rtb_TmpSignalConversionAtVeFWDR_r_TCaseR);

    /* SignalConversion generated from: '<S2>/VeFWDR_r_Axle_Ratio' incorporates:
     *  Inport: '<Root>/VeFWDR_r_Axle_Ratio'
     */
    (void)Rte_Read_VeFWDR_r_Axle_Ratio_Value
        (&rtb_TmpSignalConversionAtVeFWDR_r_Axle_R);

    /* SignalConversion generated from: '<S2>/VeCSVR_e_LeftFrontWhlDir_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_TmpSignalConversionAtVeCSVR_e_LeftFr =
        Rte_IrvRead_CSVR_FastTEF_LeftFrontWhlDir_Init_write_IRV();

    /* RelationalOperator: '<S360>/Comparison1' incorporates:
     *  Merge: '<Root>/Merge_11'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_RightFrontWhlDir_read'
     */
    rtb_TmpSignalConversionAtVeCSVR_e_RightF =
        Rte_IrvRead_CSVR_FastTEF_RightFrontWhlDir_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeTRNR_b_ActualGearFA' incorporates:
     *  Inport: '<Root>/VeTRNR_b_ActualGearFA'
     */
    (void)Rte_Read_VeTRNR_b_ActualGearFA_Value
        (&rtb_TmpSignalConversionAtVeTRNR_b_Actual);

    /* SignalConversion generated from: '<S2>/VeTRNR_b_TargetGearFA' incorporates:
     *  Inport: '<Root>/VeTRNR_b_TargetGearFA'
     */
    (void)Rte_Read_VeTRNR_b_TargetGearFA_Value
        (&rtb_TmpSignalConversionAtVeTRNR_b_Target);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Actual);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Target);

    /* SignalConversion generated from: '<S2>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* SignalConversion generated from: '<S2>/ADCR_WEDAxleStat' incorporates:
     *  Inport: '<Root>/VeADCR_e_WEDAxleStat'
     */
    (void)Rte_Read_VeADCR_e_WEDAxleStat_Value
        (&rtb_TmpSignalConversionAtADCR_WEDAxleSta);

    /* SignalConversion generated from: '<S2>/VeCSVR_b_CanSigVehSpdFA_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_CanSig =
        Rte_IrvRead_CSVR_FastTEF_CanVehSpdFA_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_VehSpd_OSS_Corr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_VehSpd_OSS_Corr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_VehSpd_OSS_Corr_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* Switch: '<S54>/Switch2' incorporates:
     *  Constant: '<S117>/Calib'
     */
    if (KeCSVR_b_MtrA_SpdFAOvrd)
    {
        /* Switch: '<S54>/Switch2' incorporates:
         *  Constant: '<S118>/Calib'
         */
        rtb_Switch2_di = KeCSVR_b_MtrA_SpdFAOvrdVal;
    }

    /* End of Switch: '<S54>/Switch2' */

    /* SignalConversion generated from: '<S54>/VS3' */
#if !Rte_SysCon_Variant_CSVR_2

    /* Switch: '<S54>/Switch11' */
    rtb_Switch11 = rtb_Switch2_di;

#endif

    /* End of SignalConversion generated from: '<S54>/VS3' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_b_MtrC_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrC_SpdFA_Value(&rtb_Switch5_c);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* Switch: '<S54>/Switch5' incorporates:
     *  Constant: '<S121>/Calib'
     */
    if (KeCSVR_b_MtrC_SpdFAOvrd)
    {
        /* Switch: '<S54>/Switch5' incorporates:
         *  Constant: '<S122>/Calib'
         */
        rtb_Switch5_c = KeCSVR_b_MtrC_SpdFAOvrdVal;
    }

    /* End of Switch: '<S54>/Switch5' */

    /* SignalConversion generated from: '<S54>/VS3' */
#if Rte_SysCon_Variant_CSVR_2

    /* Switch: '<S54>/Switch11' */
    rtb_Switch11 = rtb_Switch5_c;

#endif

    /* End of SignalConversion generated from: '<S54>/VS3' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&VeCSVC_b_RearAxlSpdFA);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* SignalConversion generated from: '<S54>/VS3' */
    VeCSVR_b_MtrA_SpdFA = rtb_Switch11;

    /* Switch: '<S54>/Switch11' incorporates:
     *  Constant: '<S119>/Calib'
     */
    if (KeCSVR_b_MtrB_SpdFAOvrd)
    {
        /* Switch: '<S54>/Switch11' incorporates:
         *  Constant: '<S120>/Calib'
         */
        rtb_Switch11 = KeCSVR_b_MtrB_SpdFAOvrdVal;
    }
    else
    {
        /* Switch: '<S54>/Switch11' */
        rtb_Switch11 = VeCSVC_b_RearAxlSpdFA;
    }

    /* End of Switch: '<S54>/Switch11' */

    /* SignalConversion generated from: '<S54>/VS4' */
#if !Rte_SysCon_Variant_CSVR_2

    /* Switch: '<S54>/Switch6' */
    VeCSVR_b_MtrB_SpdFA = rtb_Switch11;

#else

    /* Switch: '<S54>/Switch6' incorporates:
     *  SignalConversion generated from: '<S54>/VS4'
     */
    VeCSVR_b_MtrB_SpdFA = rtb_Switch11;

#endif

    /* End of SignalConversion generated from: '<S54>/VS4' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&Switch1_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* SignalConversion generated from: '<S54>/VS1' */
#if !Rte_SysCon_Variant_CSVR_2

    /* VariantMerge generated from: '<S54>/VS1' incorporates:
     *  Inport: '<S54>/VeMSPR_n_MtrA_SpdRaw'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS1 = Switch1_d;

#endif

    /* End of SignalConversion generated from: '<S54>/VS1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_n_MtrC_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value(&rtb_Product);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* SignalConversion generated from: '<S54>/VS1' */
#if Rte_SysCon_Variant_CSVR_2

    /* VariantMerge generated from: '<S54>/VS1' incorporates:
     *  Inport: '<S54>/VeMSPR_n_MtrC_SpdRaw'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS1 = rtb_Product;

#endif

    /* End of SignalConversion generated from: '<S54>/VS1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&VeCSVC_n_PrimWhlSpdSigned);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* SignalConversion generated from: '<S54>/VS2' */
#if !Rte_SysCon_Variant_CSVR_2

    /* VariantMerge generated from: '<S54>/VS2' incorporates:
     *  Inport: '<S54>/VeMSPR_n_MtrB_SpdRaw'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS2 = VeCSVC_n_PrimWhlSpdSigned;

#else

    /* VariantMerge generated from: '<S54>/VS2' incorporates:
     *  Inport: '<S54>/VeMSPR_n_MtrB_SpdRaw'
     *  SignalConversion generated from: '<S54>/VS2'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS2 = VeCSVC_n_PrimWhlSpdSigned;

#endif

    /* End of SignalConversion generated from: '<S54>/VS2' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_e_MtrASpd_Src' */
    (void)Rte_Read_VeMSPR_e_MtrASpd_Src_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* SignalConversion generated from: '<S54>/VS5' */
#if !Rte_SysCon_Variant_CSVR_2

    /* RelationalOperator: '<S360>/Comparison3' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrASpd_Src'
     *  Inport: '<S54>/VeMSPR_e_MtrASpd_Src'
     *  VariantMerge generated from: '<S54>/VS5'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS5 = tmpRead_2;

#endif

    /* End of SignalConversion generated from: '<S54>/VS5' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_e_MtrCSpd_Src' */
    (void)Rte_Read_VeMSPR_e_MtrCSpd_Src_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* SignalConversion generated from: '<S54>/VS5' */
#if Rte_SysCon_Variant_CSVR_2

    /* RelationalOperator: '<S360>/Comparison3' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrCSpd_Src'
     *  Inport: '<S54>/VeMSPR_e_MtrCSpd_Src'
     *  VariantMerge generated from: '<S54>/VS5'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS5 = tmpRead_4;

#endif

    /* End of SignalConversion generated from: '<S54>/VS5' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_e_MtrBSpd_Src' */
    (void)Rte_Read_VeMSPR_e_MtrBSpd_Src_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* SignalConversion generated from: '<S54>/VS6' incorporates:
     *  SignalConversion generated from: '<S54>/VS7'
     */
#if !Rte_SysCon_Variant_CSVR_2

    /* RelationalOperator: '<S360>/Comparison2' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrBSpd_Src'
     *  Inport: '<S54>/VeMSPR_e_MtrBSpd_Src'
     *  VariantMerge generated from: '<S54>/VS6'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS6 = tmpRead_3;

    /* VariantMerge generated from: '<S54>/VS7' incorporates:
     *  Inport: '<S54>/VeMSPR_n_MtrC_SpdRaw'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS7 = rtb_Product;

#else

    /* RelationalOperator: '<S360>/Comparison2' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrBSpd_Src'
     *  Inport: '<S54>/VeMSPR_e_MtrBSpd_Src'
     *  SignalConversion generated from: '<S54>/VS6'
     *  VariantMerge generated from: '<S54>/VS6'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS6 = tmpRead_3;

#endif

    /* End of SignalConversion generated from: '<S54>/VS6' */

    /* SignalConversion generated from: '<S54>/VS8' incorporates:
     *  SignalConversion generated from: '<S54>/VS7'
     */
#if !Rte_SysCon_Variant_CSVR_2

    /* VariantMerge generated from: '<S54>/VS8' */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS8 = rtb_Switch5_c;

#else

    /* VariantMerge generated from: '<S54>/VS7' incorporates:
     *  Inport: '<S54>/VeMSPR_n_MtrA_SpdRaw'
     *  SignalConversion generated from: '<S54>/VS7'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS7 = Switch1_d;

    /* VariantMerge generated from: '<S54>/VS8' incorporates:
     *  SignalConversion generated from: '<S54>/VS8'
     */
    CSVR_ac_B.VariantMerge_For_Variant_Source_VS8 = rtb_Switch2_di;

#endif

    /* End of SignalConversion generated from: '<S54>/VS8' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VePRXR_l_WhlRadius' */
    (void)Rte_Read_VePRXR_l_WhlRadius_Value(&VeCSVC_l_WhlRadius);

    /* Inport: '<Root>/VaOSMR_n_NTurb_FromNo' */
    (void)Rte_Read_VaOSMR_n_NTurb_FromNo_Value(tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S123>/Calib'
     */
    if (KeCSVR_b_NturbFA_OvrdEnbl)
    {
        /* Switch: '<S54>/Switch' incorporates:
         *  Constant: '<S124>/Calib'
         */
        rtb_Switch2_di = KeCSVR_b_NturbFA_OvrdVal;
    }
    else
    {
        /* Switch: '<S54>/Switch' incorporates:
         *  Merge: '<Root>/Merge_21'
         *  SignalConversion generated from: '<S2>/VeCSVR_b_NturbFA_read'
         */
        rtb_Switch2_di = Rte_IrvRead_CSVR_FastTEF_NturbFA_Init_write_IRV();
    }

    /* End of Switch: '<S54>/Switch' */

    /* Switch: '<S54>/Switch4' incorporates:
     *  Merge: '<Root>/Merge_28'
     *  Merge: '<Root>/Merge_30'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_CanSigVehSpd_CANC2FA_read'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_CanSigVehSpd_CANC2Sgnl_Rcvd_read'
     */
    rtb_Switch11 =
        ((!Rte_IrvRead_CSVR_FastTEF_VeCSVI_b_CanSigVehSpdSR_CANC2_Init_write_IRV
          ()) || (Rte_IrvRead_CSVR_FastTEF_CanVehSpdFA_CANC2_Init_write_IRV()));

    /* Switch: '<S116>/Switch1' incorporates:
     *  Logic: '<S54>/Logical1'
     *  Logic: '<S54>/Logical2'
     *  Switch: '<S116>/Switch2'
     */
    if (!rtb_TmpSignalConversionAtVeCSVR_b_CanSig)
    {
        /* Switch: '<S116>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_5'
         *  SignalConversion generated from: '<S2>/VeCSVR_v_CanSigVehSpd_read'
         */
        Switch1_d = Rte_IrvRead_CSVR_FastTEF_CanVehSpd_Init_write_IRV();
    }
    else if (!rtb_Switch11)
    {
        /* Switch: '<S116>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_27'
         *  SignalConversion generated from: '<S2>/VeCSVR_v_CanSigVehSpd_CANC2_read'
         *  Switch: '<S116>/Switch1'
         */
        Switch1_d = Rte_IrvRead_CSVR_FastTEF_CanVehSpd_CANC2_Init_write_IRV();
    }
    else
    {
        /* Switch: '<S116>/Switch1' incorporates:
         *  Constant: '<S54>/Constant Value'
         *  Switch: '<S116>/Switch2'
         */
        Switch1_d = 0.0F;
    }

    /* End of Switch: '<S116>/Switch1' */

    /* Logic: '<S54>/Logical' */
    rtb_TmpSignalConversionAtVeCSVR_b_CanSig =
        (rtb_TmpSignalConversionAtVeCSVR_b_CanSig && rtb_Switch11);

    /* Switch: '<S54>/Switch3' incorporates:
     *  Constant: '<S126>/Calib'
     *  Constant: '<S127>/Calib'
     */
    if (KeCSVR_b_WhlRadius_OvrdEnbl)
    {
        VeCSVC_l_WhlRadius = KeCSVR_l_WhlRadius_OvrdVal;
    }

    /* End of Switch: '<S54>/Switch3' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MngCSVR_CalcSpeeds'
     */
    /* MinMax: '<S210>/MinMax1' incorporates:
     *  Constant: '<S661>/Calib'
     *  Constant: '<S662>/Calib'
     *  Product: '<S210>/Divide'
     */
    VeCSVC_l_WhlRadius = fmaxf(VeCSVC_l_WhlRadius *
        KeCSVR_Cf_CnvrtCircumToRadius, KeCSVR_l_WhlRadiusThrsh);

    /* Product: '<S210>/Product1' incorporates:
     *  Constant: '<S210>/Constant Value'
     *  Constant: '<S210>/Constant Value1'
     */
    Product1 = 0.376991123F * VeCSVC_l_WhlRadius;

    /* Switch: '<S368>/Switch' incorporates:
     *  Constant: '<S548>/Calib'
     */
    if (KeCSVR_b_WhlSpdInKphFront)
    {
        /* Switch: '<S207>/Switch5' */
        rtb_Switch5 = Product1;
    }
    else
    {
        /* Switch: '<S207>/Switch5' incorporates:
         *  Constant: '<S368>/Constant Value'
         */
        rtb_Switch5 = 1.0F;
    }

    /* End of Switch: '<S368>/Switch' */

    /* Product: '<S368>/Product2' */
    CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd =
        rtb_TmpSignalConversionAtVeCSVR_n_RightF / rtb_Switch5;

    /* Product: '<S368>/Product1' */
    CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd = rtb_TmpSignalConversionAtVeCSVR_n_LeftFr
        / rtb_Switch5;

    /* Logic: '<S360>/Logical' incorporates:
     *  Logic: '<S360>/Logical2'
     *  Logic: '<S360>/Logical5'
     */
    Gain_be = !rtb_TmpSignalConversionAtVeCSVR_b_LeftFr;
    rtb_Switch5_c = !rtb_TmpSignalConversionAtVeCSVR_b_RightF;

    /* If: '<S360>/If' incorporates:
     *  Logic: '<S360>/Logical'
     *  Logic: '<S360>/Logical1'
     *  Logic: '<S360>/Logical3'
     */
    if (rtb_Switch5_c && Gain_be)
    {
        /* Outputs for IfAction SubSystem: '<S360>/CalcAveragedWhlSpeeds' incorporates:
         *  ActionPort: '<S369>/Action Port'
         */
        CSVR_ac_CalcAveragedWhlSpeeds(CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd,
            CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd, (&(VeCSVC_n_NTurbArb)),
            &rtb_LogicalOperator2_m);

        /* End of Outputs for SubSystem: '<S360>/CalcAveragedWhlSpeeds' */
    }
    else if (rtb_TmpSignalConversionAtVeCSVR_b_RightF && Gain_be)
    {
        /* Outputs for IfAction SubSystem: '<S360>/CalcWhlSpdUsingLftWhl' incorporates:
         *  ActionPort: '<S371>/Action Port'
         */
        CSVR_ac_CalcWhlSpdUsingLftWhl(CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd,
            (&(VeCSVC_n_NTurbArb)), &rtb_LogicalOperator2_m);

        /* End of Outputs for SubSystem: '<S360>/CalcWhlSpdUsingLftWhl' */
    }
    else if (rtb_Switch5_c && rtb_TmpSignalConversionAtVeCSVR_b_LeftFr)
    {
        /* Outputs for IfAction SubSystem: '<S360>/CalcWhlSpdUsingRghtWhl' incorporates:
         *  ActionPort: '<S372>/Action Port'
         */
        CSVR_ac_CalcWhlSpdUsingRghtWhl(CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd,
            (&(VeCSVC_n_NTurbArb)), &rtb_LogicalOperator2_m);

        /* End of Outputs for SubSystem: '<S360>/CalcWhlSpdUsingRghtWhl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S360>/DefaultWhlSpd' incorporates:
         *  ActionPort: '<S374>/Action Port'
         */
        CSVR_ac_DefaultWhlSpd((&(VeCSVC_n_NTurbArb)), &rtb_LogicalOperator2_m);

        /* End of Outputs for SubSystem: '<S360>/DefaultWhlSpd' */
    }

    /* End of If: '<S360>/If' */

    /* If: '<S550>/If1' incorporates:
     *  Constant: '<S557>/Constant'
     *  Constant: '<S558>/Constant'
     *  Constant: '<S559>/Constant'
     *  Constant: '<S560>/Constant'
     *  Constant: '<S561>/Constant'
     *  Constant: '<S562>/Constant'
     *  Constant: '<S563>/Constant'
     *  Constant: '<S564>/Constant'
     *  Constant: '<S565>/Constant'
     *  Constant: '<S566>/Constant'
     *  Constant: '<S567>/Constant'
     *  Constant: '<S568>/Constant'
     *  Constant: '<S569>/Constant'
     *  Logic: '<S550>/Logical2'
     *  Logic: '<S550>/Logical3'
     *  RelationalOperator: '<S550>/Comparison10'
     *  RelationalOperator: '<S550>/Comparison11'
     *  RelationalOperator: '<S550>/Comparison13'
     *  RelationalOperator: '<S550>/Comparison2'
     *  RelationalOperator: '<S550>/Comparison21'
     *  RelationalOperator: '<S550>/Comparison22'
     *  RelationalOperator: '<S550>/Comparison23'
     *  RelationalOperator: '<S550>/Comparison24'
     *  RelationalOperator: '<S550>/Comparison25'
     *  RelationalOperator: '<S550>/Comparison26'
     *  RelationalOperator: '<S550>/Comparison27'
     *  RelationalOperator: '<S550>/Comparison28'
     *  RelationalOperator: '<S550>/Comparison9'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_Park)
    {
        /* Outputs for IfAction SubSystem: '<S550>/Target_Park' incorporates:
         *  ActionPort: '<S575>/Action Port'
         */
        CSVR_ac_Actual_Park((&(VeCSVC_i_GrbsdDirctn_TargetGear)));

        /* End of Outputs for SubSystem: '<S550>/Target_Park' */
    }
    else if ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
              CeTRNR_e_Reverse) || (((uint32)
               rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_Reverse2))
    {
        /* Outputs for IfAction SubSystem: '<S550>/Target_Reverse' incorporates:
         *  ActionPort: '<S576>/Action Port'
         */
        CSVR_ac_Actual_Reverse((&(VeCSVC_i_GrbsdDirctn_TargetGear)));

        /* End of Outputs for SubSystem: '<S550>/Target_Reverse' */
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
             CeTRNR_e_Neutral)
    {
        /* Outputs for IfAction SubSystem: '<S550>/Target_Neutral' incorporates:
         *  ActionPort: '<S574>/Action Port'
         */
        CSVR_ac_Actual_Neutral((&(VeCSVC_i_GrbsdDirctn_TargetGear)));

        /* End of Outputs for SubSystem: '<S550>/Target_Neutral' */
    }
    else
    {
        if (((((((((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
                    CeTRNR_e_D1) || (((uint32)
                     rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_D2)) ||
                  (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
                   CeTRNR_e_D3)) || (((uint32)
                   rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_D4)) ||
                (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
                 CeTRNR_e_D5)) || (((uint32)
                                    rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
                CeTRNR_e_D6)) || (((uint32)
                                   rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
                                  CeTRNR_e_D7)) || (((uint32)
                rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_D8)) ||
                (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
                 CeTRNR_e_D9))
        {
            /* Outputs for IfAction SubSystem: '<S550>/Target_Drive' incorporates:
             *  ActionPort: '<S573>/Action Port'
             */
            CSVR_ac_Actual_Drive((&(VeCSVC_i_GrbsdDirctn_TargetGear)));

            /* End of Outputs for SubSystem: '<S550>/Target_Drive' */
        }
    }

    /* End of If: '<S550>/If1' */

    /* If: '<S550>/If' incorporates:
     *  Constant: '<S557>/Constant'
     *  Constant: '<S558>/Constant'
     *  Constant: '<S559>/Constant'
     *  Constant: '<S560>/Constant'
     *  Constant: '<S561>/Constant'
     *  Constant: '<S562>/Constant'
     *  Constant: '<S563>/Constant'
     *  Constant: '<S564>/Constant'
     *  Constant: '<S565>/Constant'
     *  Constant: '<S566>/Constant'
     *  Constant: '<S567>/Constant'
     *  Constant: '<S568>/Constant'
     *  Constant: '<S569>/Constant'
     *  Logic: '<S550>/Logical2'
     *  Logic: '<S550>/Logical3'
     *  RelationalOperator: '<S550>/Comparison10'
     *  RelationalOperator: '<S550>/Comparison11'
     *  RelationalOperator: '<S550>/Comparison13'
     *  RelationalOperator: '<S550>/Comparison2'
     *  RelationalOperator: '<S550>/Comparison21'
     *  RelationalOperator: '<S550>/Comparison22'
     *  RelationalOperator: '<S550>/Comparison23'
     *  RelationalOperator: '<S550>/Comparison24'
     *  RelationalOperator: '<S550>/Comparison25'
     *  RelationalOperator: '<S550>/Comparison26'
     *  RelationalOperator: '<S550>/Comparison27'
     *  RelationalOperator: '<S550>/Comparison28'
     *  RelationalOperator: '<S550>/Comparison9'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) == CeTRNR_e_Park)
    {
        /* Outputs for IfAction SubSystem: '<S550>/Actual_Park' incorporates:
         *  ActionPort: '<S555>/Action Port'
         */
        CSVR_ac_Actual_Park((&(VeCSVC_i_GrbsdDirctn_ActualGear)));

        /* End of Outputs for SubSystem: '<S550>/Actual_Park' */
    }
    else if ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
              CeTRNR_e_Reverse) || (((uint32)
               rtb_TmpSignalConversionAtVeTRNR_e_Actual) == CeTRNR_e_Reverse2))
    {
        /* Outputs for IfAction SubSystem: '<S550>/Actual_Reverse' incorporates:
         *  ActionPort: '<S556>/Action Port'
         */
        CSVR_ac_Actual_Reverse((&(VeCSVC_i_GrbsdDirctn_ActualGear)));

        /* End of Outputs for SubSystem: '<S550>/Actual_Reverse' */
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
             CeTRNR_e_Neutral)
    {
        /* Outputs for IfAction SubSystem: '<S550>/Actual_Neutral' incorporates:
         *  ActionPort: '<S554>/Action Port'
         */
        CSVR_ac_Actual_Neutral((&(VeCSVC_i_GrbsdDirctn_ActualGear)));

        /* End of Outputs for SubSystem: '<S550>/Actual_Neutral' */
    }
    else
    {
        if (((((((((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                    CeTRNR_e_D1) || (((uint32)
                     rtb_TmpSignalConversionAtVeTRNR_e_Actual) == CeTRNR_e_D2)) ||
                  (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                   CeTRNR_e_D3)) || (((uint32)
                   rtb_TmpSignalConversionAtVeTRNR_e_Actual) == CeTRNR_e_D4)) ||
                (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                 CeTRNR_e_D5)) || (((uint32)
                                    rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                CeTRNR_e_D6)) || (((uint32)
                                   rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                                  CeTRNR_e_D7)) || (((uint32)
                rtb_TmpSignalConversionAtVeTRNR_e_Actual) == CeTRNR_e_D8)) ||
                (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                 CeTRNR_e_D9))
        {
            /* Outputs for IfAction SubSystem: '<S550>/Actual_Drive' incorporates:
             *  ActionPort: '<S553>/Action Port'
             */
            CSVR_ac_Actual_Drive((&(VeCSVC_i_GrbsdDirctn_ActualGear)));

            /* End of Outputs for SubSystem: '<S550>/Actual_Drive' */
        }
    }

    /* End of If: '<S550>/If' */

    /* If: '<S550>/If2' incorporates:
     *  Abs: '<S550>/Abs'
     *  Constant: '<S572>/Calib'
     *  RelationalOperator: '<S550>/Comparison16'
     */
    if (fabsf(Switch1_d) <= KeCSVR_V_MinVehSpdThreshforGrgShft)
    {
        /* Outputs for IfAction SubSystem: '<S550>/If Action Subsystem' incorporates:
         *  ActionPort: '<S570>/Action Port'
         */
        /* Selector: '<S570>/GrbsdDirctnSel_LoSpd' incorporates:
         *  Constant: '<S577>/Calib'
         */
        VeCSVC_e_GrbsdDirctn_LoSpd = KaCSVR_e_GrbsdDirctnSel_LoSpd
            [(VeCSVC_i_GrbsdDirctn_ActualGear * 4) +
            VeCSVC_i_GrbsdDirctn_TargetGear];

        /* Merge: '<S550>/Merge3' incorporates:
         *  Selector: '<S570>/GrbsdDirctnSel_LoSpd'
         *  SignalConversion: '<S570>/Signal Copy1'
         */
        VeCSVC_e_GrbsdDirctn = VeCSVC_e_GrbsdDirctn_LoSpd;

        /* End of Outputs for SubSystem: '<S550>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S550>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S571>/Action Port'
         */
        /* Selector: '<S571>/GrbsdDirctnSel_HiSpd' incorporates:
         *  Constant: '<S578>/Calib'
         */
        VeCSVC_e_GrbsdDirctn_HiSpd = KaCSVR_e_GrbsdDirctnSel_HiSpd
            [(VeCSVC_i_GrbsdDirctn_ActualGear * 4) +
            VeCSVC_i_GrbsdDirctn_TargetGear];

        /* Merge: '<S550>/Merge3' incorporates:
         *  Selector: '<S571>/GrbsdDirctnSel_HiSpd'
         *  SignalConversion: '<S571>/Signal Copy'
         */
        VeCSVC_e_GrbsdDirctn = VeCSVC_e_GrbsdDirctn_HiSpd;

        /* End of Outputs for SubSystem: '<S550>/If Action Subsystem1' */
    }

    /* End of If: '<S550>/If2' */

    /* Logic: '<S205>/Logical8' incorporates:
     *  Constant: '<S551>/Constant'
     *  Constant: '<S552>/Constant'
     *  Merge: '<S550>/Merge3'
     *  RelationalOperator: '<S205>/Comparison1'
     *  RelationalOperator: '<S205>/Comparison4'
     */
    VeCSVC_b_Grbsddir_Invalid = ((((((uint32)VeCSVC_e_GrbsdDirctn) ==
        CeCSVR_e_WheelDirectionUnknown) || (((uint32)VeCSVC_e_GrbsdDirctn) ==
        CeCSVR_e_WheelDirectionInvalid)) ||
        rtb_TmpSignalConversionAtVeTRNR_b_Actual) ||
        rtb_TmpSignalConversionAtVeTRNR_b_Target);

    /* SignalConversion generated from: '<S389>/ SFunction ' incorporates:
     *  Chart: '<S360>/SourcePrioritization'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S381>/Constant'
     *  Constant: '<S382>/Constant'
     *  Constant: '<S383>/Constant'
     *  Constant: '<S384>/Constant'
     *  Constant: '<S385>/Constant'
     *  Constant: '<S386>/Constant'
     *  Constant: '<S387>/Constant'
     *  Constant: '<S388>/Calib'
     *  Logic: '<S360>/Logical10'
     *  Logic: '<S360>/Logical11'
     *  Logic: '<S360>/Logical12'
     *  Logic: '<S360>/Logical13'
     *  Logic: '<S360>/Logical4'
     *  Logic: '<S360>/Logical6'
     *  Logic: '<S360>/Logical7'
     *  Logic: '<S360>/Logical9'
     *  RelationalOperator: '<S360>/Comparison1'
     *  RelationalOperator: '<S360>/Comparison2'
     *  RelationalOperator: '<S360>/Comparison3'
     *  RelationalOperator: '<S360>/Comparison4'
     *  RelationalOperator: '<S360>/Comparison5'
     *  RelationalOperator: '<S360>/Comparison6'
     *  RelationalOperator: '<S360>/Comparison7'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_LeftFrontWhlDir_read'
     */
    rtb_TmpSignalConversionAtSFunctionInpo_a[0] =
        (((rtb_TmpSignalConversionAtVeCSVR_b_Left_c ||
           rtb_TmpSignalConversionAtVeCSVR_b_Righ_h) || ((((uint32)
             rtb_TmpSignalConversionAtVeCSVR_e_LeftFr) ==
            CeCSVR_e_WheelDirectionInvalid) && (KeCSVR_b_EnableWhlDirFAOnSNA))) ||
         ((KeCSVR_b_EnableWhlDirFAOnSNA) && (CeCSVR_e_WheelDirectionInvalid ==
           ((uint32)rtb_TmpSignalConversionAtVeCSVR_e_RightF))));
    rtb_TmpSignalConversionAtSFunctionInpo_a[1] = ((VeCSVR_b_MtrB_SpdFA) ||
        (((((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
           CeMSPR_e_MtrSpSrc_MCP) && (((uint32)
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
        CeMSPR_e_MtrSpdSrc_BuffCrank)) && (((uint32)
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
        CeMSPR_e_MtrSpdSrc_CANEngSpd)));
    rtb_TmpSignalConversionAtSFunctionInpo_a[2] =
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS8;
    rtb_TmpSignalConversionAtSFunctionInpo_a[3] = VeCSVC_b_Grbsddir_Invalid;
    rtb_TmpSignalConversionAtSFunctionInpo_a[4] =
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd;
    rtb_TmpSignalConversionAtSFunctionInpo_a[5] = (((VeCSVR_b_MtrA_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS5) !=
         CeMSPR_e_MtrSpSrc_MCP)) || ((((uint32)
        rtb_TmpSignalConversionAtADCR_WEDAxleSta) != CeADCR_e_Closed) &&
        (KeCSVR_b_isWEDArch)));

    /* Chart: '<S360>/SourcePrioritization' */
    /* Gateway: CalcWheelAndVehSpdAndDir/SourcePrioritization */
    /* During: CalcWheelAndVehSpdAndDir/SourcePrioritization */
    /* Entry Internal: CalcWheelAndVehSpdAndDir/SourcePrioritization */
    /* Transition: '<S389>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S389>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 6)
        {
            /* Transition: '<S389>:10' */
            /* Transition: '<S389>:32' */
            i = (sint32)KaCSVR_e_FrontAxleDirSrcPriority[(b_index)];
            if (i != 255)
            {
                /* Transition: '<S389>:15' */
                /* Transition: '<S389>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInpo_a[i])
                {
                    /* Transition: '<S389>:19' */
                    /* Transition: '<S389>:34' */
                    b_index++;

                    /* Transition: '<S389>:37' */
                    /* Transition: '<S389>:40' */
                    /* Transition: '<S389>:41' */
                }
                else
                {
                    /* Transition: '<S389>:23' */
                    rtb_VeCSVR_e_WhlDirSource_p = (sint16)
                        KaCSVR_e_FrontAxleDirSrcPriority[(b_index)];

                    /* Transition: '<S389>:45' */
                    /* Transition: '<S389>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S389>:44' */
                rtb_VeCSVR_e_WhlDirSource_p = 255;

                /* Unknown Source */
                /* Transition: '<S389>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S389>:8' */
            rtb_VeCSVR_e_WhlDirSource_p = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S360>/Switch_Case' */
    switch (rtb_VeCSVR_e_WhlDirSource_p)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S360>/DirectionUsingDWSS' incorporates:
         *  ActionPort: '<S375>/Action Port'
         */
        CSVR_ac_DirectionUsingDWSS(rtb_TmpSignalConversionAtVeCSVR_e_LeftFr,
            rtb_TmpSignalConversionAtVeCSVR_e_RightF,
            CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd,
            CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd, &CSVR_ac_B.Merge2,
            &rtb_LogicalOperator_h, (&(VeCSVR_e_SecAxleDirectionSrc)),
            &CSVR_ac_DW.DirectionUsingDWSS_a);

        /* End of Outputs for SubSystem: '<S360>/DirectionUsingDWSS' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S360>/DirectionUsingMtrB' incorporates:
         *  ActionPort: '<S378>/Action Port'
         */
        CSVR_ac_DirectionUsingMtrB(CSVR_ac_B.VariantMerge_For_Variant_Source_VS2,
            &CSVR_ac_B.Merge2, &rtb_LogicalOperator_h,
            (&(VeCSVR_e_SecAxleDirectionSrc)), &CSVR_ac_DW.DirectionUsingMtrB_m);

        /* End of Outputs for SubSystem: '<S360>/DirectionUsingMtrB' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S360>/DirectionUsingMtrC' incorporates:
         *  ActionPort: '<S379>/Action Port'
         */
        CSVR_ac_DirectionUsingMtrC(CSVR_ac_B.VariantMerge_For_Variant_Source_VS7,
            &CSVR_ac_B.Merge2, &rtb_LogicalOperator_h,
            (&(VeCSVR_e_SecAxleDirectionSrc)), &CSVR_ac_DW.DirectionUsingMtrC_j);

        /* End of Outputs for SubSystem: '<S360>/DirectionUsingMtrC' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S360>/DirectionUsingGearBasedDir' incorporates:
         *  ActionPort: '<S376>/Action Port'
         */
        CSVR_ac_DirectionUsingGearBasedDir(VeCSVC_e_GrbsdDirctn,
            &CSVR_ac_B.Merge2, &rtb_LogicalOperator_h,
            (&(VeCSVR_e_SecAxleDirectionSrc)));

        /* End of Outputs for SubSystem: '<S360>/DirectionUsingGearBasedDir' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S360>/DirectionUsingOutSpdPolarity' incorporates:
         *  ActionPort: '<S380>/Action Port'
         */
        CSVR_ac_DirectionUsingOutSpdPolarity
            (rtb_TmpSignalConversionAtVeCSVR_e_OutSpd, &CSVR_ac_B.Merge2,
             &rtb_LogicalOperator_h, (&(VeCSVR_e_SecAxleDirectionSrc)));

        /* End of Outputs for SubSystem: '<S360>/DirectionUsingOutSpdPolarity' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S360>/DirectionUsingMtrA' incorporates:
         *  ActionPort: '<S377>/Action Port'
         */
        CSVR_ac_DirectionUsingMtrA(CSVR_ac_B.VariantMerge_For_Variant_Source_VS1,
            &CSVR_ac_B.Merge2, &rtb_LogicalOperator_h,
            (&(VeCSVR_e_SecAxleDirectionSrc)), &CSVR_ac_DW.DirectionUsingMtrA);

        /* End of Outputs for SubSystem: '<S360>/DirectionUsingMtrA' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S360>/Default' incorporates:
         *  ActionPort: '<S373>/Action Port'
         */
        CSVR_ac_Default(&CSVR_ac_B.Merge2, &rtb_LogicalOperator_h,
                        (&(VeCSVR_e_SecAxleDirectionSrc)));

        /* End of Outputs for SubSystem: '<S360>/Default' */
        break;
    }

    /* End of SwitchCase: '<S360>/Switch_Case' */

    /* Logic: '<S360>/Logical8' */
    rtb_Switch11 = (rtb_LogicalOperator2_m || rtb_LogicalOperator_h);

    /* Switch: '<S391>/Switch1' incorporates:
     *  Constant: '<S370>/Constant Value'
     *  Constant: '<S370>/Constant Value1'
     *  Constant: '<S390>/Constant'
     *  Merge: '<S360>/Merge2'
     *  RelationalOperator: '<S370>/Comparison4'
     */
    if (((uint32)CSVR_ac_B.Merge2) == CeCSVR_e_WheelDirectionReverse)
    {
        i = -1;
    }
    else
    {
        i = 1;
    }

    /* End of Switch: '<S391>/Switch1' */

    /* Product: '<S370>/Product' */
    rtb_Product = VeCSVC_n_NTurbArb * ((float32)i);

    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S549>/Calib'
     */
    if (KeCSVR_b_WhlSpdInKphRear)
    {
        /* Product: '<S631>/Multiplication3' */
        VeCSVC_n_NTurbArb = Product1;
    }
    else
    {
        /* Product: '<S631>/Multiplication3' incorporates:
         *  Constant: '<S368>/Constant Value1'
         */
        VeCSVC_n_NTurbArb = 1.0F;
    }

    /* End of Switch: '<S368>/Switch1' */

    /* Product: '<S368>/Product4' */
    CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd = rtb_TmpSignalConversionAtVeCSVR_n_RightR
        / VeCSVC_n_NTurbArb;

    /* Product: '<S368>/Product3' */
    CSVR_ac_B.VeCSVC_n_RearLftWhlSpd = rtb_TmpSignalConversionAtVeCSVR_n_LeftRe /
        VeCSVC_n_NTurbArb;

    /* Logic: '<S361>/Logical' incorporates:
     *  Logic: '<S361>/Logical2'
     *  Logic: '<S361>/Logical5'
     */
    Gain_be = !rtb_TmpSignalConversionAtVeCSVR_b_LeftRe;
    rtb_Switch5_c = !rtb_TmpSignalConversionAtVeCSVR_b_RightR;

    /* If: '<S361>/If' incorporates:
     *  Logic: '<S361>/Logical'
     *  Logic: '<S361>/Logical1'
     *  Logic: '<S361>/Logical3'
     */
    if (rtb_Switch5_c && Gain_be)
    {
        /* Outputs for IfAction SubSystem: '<S361>/CalcAveragedWhlSpeeds' incorporates:
         *  ActionPort: '<S450>/Action Port'
         */
        CSVR_ac_CalcAveragedWhlSpeeds(CSVR_ac_B.VeCSVC_n_RearLftWhlSpd,
            CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd, (&(VeCSVC_n_NTurbArb)),
            &rtb_LogicalOperator_h);

        /* End of Outputs for SubSystem: '<S361>/CalcAveragedWhlSpeeds' */
    }
    else if (rtb_TmpSignalConversionAtVeCSVR_b_RightR && Gain_be)
    {
        /* Outputs for IfAction SubSystem: '<S361>/CalcWhlSpdUsingLftWhl' incorporates:
         *  ActionPort: '<S452>/Action Port'
         */
        CSVR_ac_CalcWhlSpdUsingLftWhl(CSVR_ac_B.VeCSVC_n_RearLftWhlSpd,
            (&(VeCSVC_n_NTurbArb)), &rtb_LogicalOperator_h);

        /* End of Outputs for SubSystem: '<S361>/CalcWhlSpdUsingLftWhl' */
    }
    else if (rtb_Switch5_c && rtb_TmpSignalConversionAtVeCSVR_b_LeftRe)
    {
        /* Outputs for IfAction SubSystem: '<S361>/CalcWhlSpdUsingRghtWhl' incorporates:
         *  ActionPort: '<S453>/Action Port'
         */
        CSVR_ac_CalcWhlSpdUsingRghtWhl(CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd,
            (&(VeCSVC_n_NTurbArb)), &rtb_LogicalOperator_h);

        /* End of Outputs for SubSystem: '<S361>/CalcWhlSpdUsingRghtWhl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S361>/DefaultWhlSpd' incorporates:
         *  ActionPort: '<S455>/Action Port'
         */
        CSVR_ac_DefaultWhlSpd((&(VeCSVC_n_NTurbArb)), &rtb_LogicalOperator_h);

        /* End of Outputs for SubSystem: '<S361>/DefaultWhlSpd' */
    }

    /* End of If: '<S361>/If' */

    /* SignalConversion generated from: '<S470>/ SFunction ' incorporates:
     *  Chart: '<S361>/SourcePrioritization'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S462>/Constant'
     *  Constant: '<S463>/Constant'
     *  Constant: '<S464>/Constant'
     *  Constant: '<S465>/Constant'
     *  Constant: '<S466>/Constant'
     *  Constant: '<S467>/Constant'
     *  Constant: '<S468>/Constant'
     *  Constant: '<S469>/Calib'
     *  Logic: '<S361>/Logical10'
     *  Logic: '<S361>/Logical11'
     *  Logic: '<S361>/Logical12'
     *  Logic: '<S361>/Logical13'
     *  Logic: '<S361>/Logical4'
     *  Logic: '<S361>/Logical6'
     *  Logic: '<S361>/Logical7'
     *  Logic: '<S361>/Logical9'
     *  RelationalOperator: '<S361>/Comparison1'
     *  RelationalOperator: '<S361>/Comparison2'
     *  RelationalOperator: '<S361>/Comparison3'
     *  RelationalOperator: '<S361>/Comparison4'
     *  RelationalOperator: '<S361>/Comparison5'
     *  RelationalOperator: '<S361>/Comparison6'
     *  RelationalOperator: '<S361>/Comparison7'
     */
    rtb_TmpSignalConversionAtSFunctionInpo_a[0] =
        (((rtb_TmpSignalConversionAtVeCSVR_b_Left_h ||
           rtb_TmpSignalConversionAtVeCSVR_b_Righ_j) || ((((uint32)
             rtb_TmpSignalConversionAtVeCSVR_e_LeftRe) ==
            CeCSVR_e_WheelDirectionInvalid) && (KeCSVR_b_EnableWhlDirFAOnSNA))) ||
         ((KeCSVR_b_EnableWhlDirFAOnSNA) && (CeCSVR_e_WheelDirectionInvalid ==
           ((uint32)rtb_TmpSignalConversionAtVeCSVR_e_RightR))));
    rtb_TmpSignalConversionAtSFunctionInpo_a[1] = ((VeCSVR_b_MtrB_SpdFA) ||
        (((((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
           CeMSPR_e_MtrSpSrc_MCP) && (((uint32)
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
        CeMSPR_e_MtrSpdSrc_BuffCrank)) && (((uint32)
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
        CeMSPR_e_MtrSpdSrc_CANEngSpd)));
    rtb_TmpSignalConversionAtSFunctionInpo_a[2] =
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS8;
    rtb_TmpSignalConversionAtSFunctionInpo_a[3] = VeCSVC_b_Grbsddir_Invalid;
    rtb_TmpSignalConversionAtSFunctionInpo_a[4] =
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd;
    rtb_TmpSignalConversionAtSFunctionInpo_a[5] = (((VeCSVR_b_MtrA_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS5) !=
         CeMSPR_e_MtrSpSrc_MCP)) || ((((uint32)
        rtb_TmpSignalConversionAtADCR_WEDAxleSta) != CeADCR_e_Closed) &&
        (KeCSVR_b_isWEDArch)));

    /* Chart: '<S361>/SourcePrioritization' */
    /* Gateway: CalcWheelAndVehSpdAndDir/SourcePrioritization */
    /* During: CalcWheelAndVehSpdAndDir/SourcePrioritization */
    /* Entry Internal: CalcWheelAndVehSpdAndDir/SourcePrioritization */
    /* Transition: '<S470>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S470>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 6)
        {
            /* Transition: '<S470>:10' */
            /* Transition: '<S470>:32' */
            i = (sint32)KaCSVR_e_RearAxleDirSrcPriority[(b_index)];
            if (i != 255)
            {
                /* Transition: '<S470>:15' */
                /* Transition: '<S470>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInpo_a[i])
                {
                    /* Transition: '<S470>:19' */
                    /* Transition: '<S470>:34' */
                    b_index++;

                    /* Transition: '<S470>:37' */
                    /* Transition: '<S470>:40' */
                    /* Transition: '<S470>:41' */
                }
                else
                {
                    /* Transition: '<S470>:23' */
                    rtb_VeCSVR_e_WhlDirSource_p = (sint16)
                        KaCSVR_e_RearAxleDirSrcPriority[(b_index)];

                    /* Transition: '<S470>:45' */
                    /* Transition: '<S470>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S470>:44' */
                rtb_VeCSVR_e_WhlDirSource_p = 255;

                /* Unknown Source */
                /* Transition: '<S470>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S470>:8' */
            rtb_VeCSVR_e_WhlDirSource_p = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S361>/Switch_Case' */
    switch (rtb_VeCSVR_e_WhlDirSource_p)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S361>/DirectionUsingDWSS' incorporates:
         *  ActionPort: '<S456>/Action Port'
         */
        CSVR_ac_DirectionUsingDWSS(rtb_TmpSignalConversionAtVeCSVR_e_LeftRe,
            rtb_TmpSignalConversionAtVeCSVR_e_RightR,
            CSVR_ac_B.VeCSVC_n_RearLftWhlSpd, CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd,
            &CSVR_ac_B.Merge2_b, &rtb_LogicalOperator2_m,
            &rtb_VeCSVR_e_WhlDirSource_p, &CSVR_ac_DW.DirectionUsingDWSS_p);

        /* End of Outputs for SubSystem: '<S361>/DirectionUsingDWSS' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S361>/DirectionUsingMtrB' incorporates:
         *  ActionPort: '<S459>/Action Port'
         */
        CSVR_ac_DirectionUsingMtrB(CSVR_ac_B.VariantMerge_For_Variant_Source_VS2,
            &CSVR_ac_B.Merge2_b, &rtb_LogicalOperator2_m,
            &rtb_VeCSVR_e_WhlDirSource_p, &CSVR_ac_DW.DirectionUsingMtrB_l);

        /* End of Outputs for SubSystem: '<S361>/DirectionUsingMtrB' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S361>/DirectionUsingMtrC' incorporates:
         *  ActionPort: '<S460>/Action Port'
         */
        CSVR_ac_DirectionUsingMtrC(CSVR_ac_B.VariantMerge_For_Variant_Source_VS7,
            &CSVR_ac_B.Merge2_b, &rtb_LogicalOperator2_m,
            &rtb_VeCSVR_e_WhlDirSource_p, &CSVR_ac_DW.DirectionUsingMtrC_k);

        /* End of Outputs for SubSystem: '<S361>/DirectionUsingMtrC' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S361>/DirectionUsingGearBasedDir' incorporates:
         *  ActionPort: '<S457>/Action Port'
         */
        CSVR_ac_DirectionUsingGearBasedDir(VeCSVC_e_GrbsdDirctn,
            &CSVR_ac_B.Merge2_b, &rtb_LogicalOperator2_m,
            &rtb_VeCSVR_e_WhlDirSource_p);

        /* End of Outputs for SubSystem: '<S361>/DirectionUsingGearBasedDir' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S361>/DirectionUsingOutSpdPolarity' incorporates:
         *  ActionPort: '<S461>/Action Port'
         */
        CSVR_ac_DirectionUsingOutSpdPolarity
            (rtb_TmpSignalConversionAtVeCSVR_e_OutSpd, &CSVR_ac_B.Merge2_b,
             &rtb_LogicalOperator2_m, &rtb_VeCSVR_e_WhlDirSource_p);

        /* End of Outputs for SubSystem: '<S361>/DirectionUsingOutSpdPolarity' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S361>/DirectionUsingMtrA' incorporates:
         *  ActionPort: '<S458>/Action Port'
         */
        CSVR_ac_DirectionUsingMtrA(CSVR_ac_B.VariantMerge_For_Variant_Source_VS1,
            &CSVR_ac_B.Merge2_b, &rtb_LogicalOperator2_m,
            &rtb_VeCSVR_e_WhlDirSource_p, &CSVR_ac_DW.DirectionUsingMtrA_o);

        /* End of Outputs for SubSystem: '<S361>/DirectionUsingMtrA' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S361>/Default' incorporates:
         *  ActionPort: '<S454>/Action Port'
         */
        CSVR_ac_Default(&CSVR_ac_B.Merge2_b, &rtb_LogicalOperator2_m,
                        &rtb_VeCSVR_e_WhlDirSource_p);

        /* End of Outputs for SubSystem: '<S361>/Default' */
        break;
    }

    /* End of SwitchCase: '<S361>/Switch_Case' */

    /* If: '<S203>/If' incorporates:
     *  Constant: '<S366>/Calib'
     */
    if (KeCSVR_b_UseFrntAsPrimAxle)
    {
        /* Outputs for IfAction SubSystem: '<S203>/FrontAxleAsPrimary' incorporates:
         *  ActionPort: '<S363>/Action Port'
         */
        /* Merge: '<S203>/Merge' incorporates:
         *  Gain: '<S533>/Gain'
         */
        rtb_Switch5_c = rtb_Switch11;

        /* Merge: '<S203>/Merge1' incorporates:
         *  Gain: '<S534>/Gain'
         */
        VeCSVC_n_PrimWhlSpdSigned = rtb_Product;

        /* RelationalOperator: '<S202>/Comparison2' incorporates:
         *  DataTypeConversion: '<S531>/DataTypeConversion'
         *  Merge: '<S203>/Merge2'
         *  Merge: '<S360>/Merge2'
         */
        VeCSVC_e_PrimAxleDirection = CSVR_ac_B.Merge2;

        /* Merge: '<S203>/Merge5' incorporates:
         *  Gain: '<S535>/Gain'
         *  Logic: '<S361>/Logical8'
         */
        rtb_Switch11 = (rtb_LogicalOperator_h || rtb_LogicalOperator2_m);

        /* End of Outputs for SubSystem: '<S203>/FrontAxleAsPrimary' */

        /* Switch: '<S472>/Switch1' incorporates:
         *  Constant: '<S451>/Constant Value'
         *  Constant: '<S451>/Constant Value1'
         *  Constant: '<S471>/Constant'
         *  Merge: '<S361>/Merge2'
         *  RelationalOperator: '<S451>/Comparison4'
         */
        if (((uint32)CSVR_ac_B.Merge2_b) == CeCSVR_e_WheelDirectionReverse)
        {
            i = -1;
        }
        else
        {
            i = 1;
        }

        /* Outputs for IfAction SubSystem: '<S203>/FrontAxleAsPrimary' incorporates:
         *  ActionPort: '<S363>/Action Port'
         */
        /* Merge: '<S203>/Merge6' incorporates:
         *  Gain: '<S536>/Gain'
         *  Product: '<S451>/Product'
         */
        rtb_Product = VeCSVC_n_NTurbArb * ((float32)i);

        /* Merge: '<S203>/Merge7' incorporates:
         *  DataTypeConversion: '<S532>/DataTypeConversion'
         *  Merge: '<S361>/Merge2'
         */
        VeCSVR_e_SecAxleDirection = CSVR_ac_B.Merge2_b;

        /* Merge: '<S203>/Merge8' incorporates:
         *  Gain: '<S537>/Gain'
         */
        VeCSVR_e_PrimAxleDirectionSrc = VeCSVR_e_SecAxleDirectionSrc;

        /* Merge: '<S203>/Merge9' incorporates:
         *  Gain: '<S538>/Gain'
         */
        VeCSVR_e_SecAxleDirectionSrc = rtb_VeCSVR_e_WhlDirSource_p;

        /* End of Outputs for SubSystem: '<S203>/FrontAxleAsPrimary' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S203>/RearAxleAsPrimary' incorporates:
         *  ActionPort: '<S367>/Action Port'
         */
        /* Merge: '<S203>/Merge' incorporates:
         *  Gain: '<S541>/Gain'
         *  Logic: '<S361>/Logical8'
         */
        rtb_Switch5_c = (rtb_LogicalOperator_h || rtb_LogicalOperator2_m);

        /* End of Outputs for SubSystem: '<S203>/RearAxleAsPrimary' */

        /* Switch: '<S472>/Switch1' incorporates:
         *  Constant: '<S451>/Constant Value'
         *  Constant: '<S451>/Constant Value1'
         *  Constant: '<S471>/Constant'
         *  Merge: '<S361>/Merge2'
         *  RelationalOperator: '<S451>/Comparison4'
         */
        if (((uint32)CSVR_ac_B.Merge2_b) == CeCSVR_e_WheelDirectionReverse)
        {
            i = -1;
        }
        else
        {
            i = 1;
        }

        /* Outputs for IfAction SubSystem: '<S203>/RearAxleAsPrimary' incorporates:
         *  ActionPort: '<S367>/Action Port'
         */
        /* Merge: '<S203>/Merge1' incorporates:
         *  Gain: '<S542>/Gain'
         *  Product: '<S451>/Product'
         */
        VeCSVC_n_PrimWhlSpdSigned = VeCSVC_n_NTurbArb * ((float32)i);

        /* RelationalOperator: '<S202>/Comparison2' incorporates:
         *  DataTypeConversion: '<S540>/DataTypeConversion'
         *  Merge: '<S203>/Merge2'
         *  Merge: '<S361>/Merge2'
         */
        VeCSVC_e_PrimAxleDirection = CSVR_ac_B.Merge2_b;

        /* Merge: '<S203>/Merge7' incorporates:
         *  DataTypeConversion: '<S539>/DataTypeConversion'
         *  Merge: '<S360>/Merge2'
         */
        VeCSVR_e_SecAxleDirection = CSVR_ac_B.Merge2;

        /* Merge: '<S203>/Merge8' incorporates:
         *  Gain: '<S545>/Gain'
         */
        VeCSVR_e_PrimAxleDirectionSrc = rtb_VeCSVR_e_WhlDirSource_p;

        /* End of Outputs for SubSystem: '<S203>/RearAxleAsPrimary' */
    }

    /* End of If: '<S203>/If' */

    /* SignalConversion generated from: '<S227>/ SFunction ' incorporates:
     *  Chart: '<S197>/SourcePrioritization'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S219>/Constant'
     *  Constant: '<S220>/Constant'
     *  Constant: '<S221>/Constant'
     *  Constant: '<S222>/Constant'
     *  Logic: '<S197>/Logical1'
     *  Logic: '<S197>/Logical10'
     *  Logic: '<S197>/Logical2'
     *  Logic: '<S197>/Logical9'
     *  RelationalOperator: '<S197>/Comparison1'
     *  RelationalOperator: '<S197>/Comparison2'
     *  RelationalOperator: '<S197>/Comparison3'
     *  RelationalOperator: '<S197>/Comparison4'
     */
    rtb_TmpSignalConversionAtSFunctionInpo_k[0] =
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns;
    rtb_TmpSignalConversionAtSFunctionInpo_k[1] = (rtb_Switch5_c || (((uint32)
        rtb_TmpSignalConversionAtVeFWDR_e_Tcase_) == CeFWDR_e_TfrCasNeutral));
    rtb_TmpSignalConversionAtSFunctionInpo_k[2] = ((VeCSVR_b_MtrB_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
         CeMSPR_e_MtrSpSrc_MCP));
    rtb_TmpSignalConversionAtSFunctionInpo_k[3] = (((VeCSVR_b_MtrA_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS5) !=
         CeMSPR_e_MtrSpSrc_MCP)) || ((((uint32)
        rtb_TmpSignalConversionAtADCR_WEDAxleSta) != CeADCR_e_Closed) &&
        (KeCSVR_b_isWEDArch)));
    rtb_TmpSignalConversionAtSFunctionInpo_k[4] = rtb_Switch11;

    /* Chart: '<S197>/SourcePrioritization' */
    /* Gateway: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalFrontAxlSpd/SourcePrioritization */
    /* During: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalFrontAxlSpd/SourcePrioritization */
    /* Entry Internal: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalFrontAxlSpd/SourcePrioritization */
    /* Transition: '<S227>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S227>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 5)
        {
            /* Transition: '<S227>:10' */
            /* Transition: '<S227>:32' */
            i = (sint32)KaCSVR_e_FrontAxlSpdSrcPriority[(b_index)];
            if (i != 255)
            {
                /* Transition: '<S227>:15' */
                /* Transition: '<S227>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInpo_k[i])
                {
                    /* Transition: '<S227>:19' */
                    /* Transition: '<S227>:34' */
                    b_index++;

                    /* Transition: '<S227>:37' */
                    /* Transition: '<S227>:40' */
                    /* Transition: '<S227>:41' */
                }
                else
                {
                    /* Transition: '<S227>:23' */
                    rtb_VeCSVR_e_WhlDirSource_p = (sint16)
                        KaCSVR_e_FrontAxlSpdSrcPriority[(b_index)];

                    /* Transition: '<S227>:45' */
                    /* Transition: '<S227>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S227>:44' */
                rtb_VeCSVR_e_WhlDirSource_p = 255;

                /* Unknown Source */
                /* Transition: '<S227>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S227>:8' */
            rtb_VeCSVR_e_WhlDirSource_p = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    for (i = 0; i < 6; i++)
    {
        /* DataTypeConversion: '<S202>/Data Type Conversion1' incorporates:
         *  Constant: '<S338>/Calib'
         */
        rtb_DataTypeConversion1[i] = (uint8)KaCSVR_e_TOSSensorSrcPriority[(i)];
    }

    /* SignalConversion generated from: '<S340>/ SFunction ' incorporates:
     *  Chart: '<S202>/SourcePrioritization'
     *  Constant: '<S336>/Constant'
     *  Constant: '<S337>/Constant'
     *  Constant: '<S339>/Calib'
     *  Logic: '<S202>/Logical1'
     *  Logic: '<S202>/Logical4'
     *  Logic: '<S202>/Logical6'
     *  RelationalOperator: '<S202>/Comparison1'
     *  RelationalOperator: '<S202>/Comparison2'
     */
    rtb_TmpSignalConversionAtSFunctionInpo_k[0] =
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd;
    rtb_TmpSignalConversionAtSFunctionInpo_k[1] = ((VeCSVR_b_MtrB_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
         CeMSPR_e_MtrSpSrc_MCP));
    rtb_TmpSignalConversionAtSFunctionInpo_k[2] =
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS8;
    rtb_TmpSignalConversionAtSFunctionInpo_k[3] = (rtb_Switch5_c || ((((uint32)
        VeCSVC_e_PrimAxleDirection) == CeCSVR_e_WheelDirectionInvalid) &&
        (KeCSVR_b_EnableWhlDirFAOnSNA)));
    rtb_TmpSignalConversionAtSFunctionInpo_k[4] = VeCSVC_b_Grbsddir_Invalid;

    /* Chart: '<S202>/SourcePrioritization' */
    /* Gateway: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalcSignedTOSSensorSpeed/SourcePrioritization */
    /* During: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalcSignedTOSSensorSpeed/SourcePrioritization */
    /* Entry Internal: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalcSignedTOSSensorSpeed/SourcePrioritization */
    /* Transition: '<S340>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S340>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 5)
        {
            /* Transition: '<S340>:10' */
            /* Transition: '<S340>:32' */
            if (((sint32)rtb_DataTypeConversion1[b_index]) != 255)
            {
                /* Transition: '<S340>:15' */
                /* Transition: '<S340>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInpo_k[(sint16)
                        rtb_DataTypeConversion1[b_index]])
                {
                    /* Transition: '<S340>:19' */
                    /* Transition: '<S340>:34' */
                    b_index++;

                    /* Transition: '<S340>:37' */
                    /* Transition: '<S340>:40' */
                    /* Transition: '<S340>:41' */
                }
                else
                {
                    /* Transition: '<S340>:23' */
                    b_index = (sint16)rtb_DataTypeConversion1[b_index];

                    /* Transition: '<S340>:45' */
                    /* Transition: '<S340>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S340>:44' */
                b_index = 255;

                /* Unknown Source */
                /* Transition: '<S340>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S340>:8' */
            b_index = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S202>/Switch_Case' */
    switch (b_index)
    {
      case 3:
        /* Outputs for IfAction SubSystem: '<S202>/DirectionUsingDWSS' incorporates:
         *  ActionPort: '<S331>/Action Port'
         */
        /* Merge: '<S202>/Merge2' incorporates:
         *  Merge: '<S203>/Merge2'
         *  SignalConversion: '<S331>/Signal Copy'
         */
        VeCSVC_e_TransOutSpdDir = VeCSVC_e_PrimAxleDirection;

        /* End of Outputs for SubSystem: '<S202>/DirectionUsingDWSS' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S202>/DirectionUsingMtrB' incorporates:
         *  ActionPort: '<S333>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S333>/Hysteresis' */
        /* Switch: '<S346>/Switch1' incorporates:
         *  Constant: '<S346>/Constant Value'
         *  Constant: '<S348>/Calib'
         *  Constant: '<S349>/Calib'
         *  RelationalOperator: '<S346>/Greater  Than'
         *  RelationalOperator: '<S346>/Greater  Than1'
         *  UnitDelay: '<S346>/Unit Delay'
         */
        if (CSVR_ac_B.VariantMerge_For_Variant_Source_VS2 >
                KeCSVR_n_UpperThrldforDirMtrB_ForTOS)
        {
            CSVR_ac_DW.UnitDelay_DSTATE_f = true;
        }
        else
        {
            CSVR_ac_DW.UnitDelay_DSTATE_f =
                ((CSVR_ac_B.VariantMerge_For_Variant_Source_VS2 >=
                  KeCSVR_n_LowerThrldforDirMtrB_ForTOS) &&
                 (CSVR_ac_DW.UnitDelay_DSTATE_f));
        }

        /* End of Switch: '<S346>/Switch1' */
        /* End of Outputs for SubSystem: '<S333>/Hysteresis' */

        /* Switch: '<S347>/Switch1' incorporates:
         *  UnitDelay: '<S346>/Unit Delay'
         */
        if (CSVR_ac_DW.UnitDelay_DSTATE_f)
        {
            /* Merge: '<S202>/Merge2' incorporates:
             *  Constant: '<S344>/Constant'
             */
            VeCSVC_e_TransOutSpdDir = CeCSVR_e_WheelDirectionForward;
        }
        else
        {
            /* Merge: '<S202>/Merge2' incorporates:
             *  Constant: '<S345>/Constant'
             */
            VeCSVC_e_TransOutSpdDir = CeCSVR_e_WheelDirectionReverse;
        }

        /* End of Switch: '<S347>/Switch1' */
        /* End of Outputs for SubSystem: '<S202>/DirectionUsingMtrB' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S202>/DirectionUsingMtrC' incorporates:
         *  ActionPort: '<S334>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S334>/Hysteresis' */
        /* Switch: '<S352>/Switch1' incorporates:
         *  Constant: '<S352>/Constant Value'
         *  Constant: '<S354>/Calib'
         *  Constant: '<S355>/Calib'
         *  RelationalOperator: '<S352>/Greater  Than'
         *  RelationalOperator: '<S352>/Greater  Than1'
         *  UnitDelay: '<S352>/Unit Delay'
         */
        if (CSVR_ac_B.VariantMerge_For_Variant_Source_VS7 >
                KeCSVR_n_UpperThrldforDirMtrC_ForTOS)
        {
            CSVR_ac_DW.UnitDelay_DSTATE_ia = true;
        }
        else
        {
            CSVR_ac_DW.UnitDelay_DSTATE_ia =
                ((CSVR_ac_B.VariantMerge_For_Variant_Source_VS7 >=
                  KeCSVR_n_LowerThrldforDirMtrC_ForTOS) &&
                 (CSVR_ac_DW.UnitDelay_DSTATE_ia));
        }

        /* End of Switch: '<S352>/Switch1' */
        /* End of Outputs for SubSystem: '<S334>/Hysteresis' */

        /* Switch: '<S353>/Switch1' incorporates:
         *  UnitDelay: '<S352>/Unit Delay'
         */
        if (CSVR_ac_DW.UnitDelay_DSTATE_ia)
        {
            /* Merge: '<S202>/Merge2' incorporates:
             *  Constant: '<S350>/Constant'
             */
            VeCSVC_e_TransOutSpdDir = CeCSVR_e_WheelDirectionForward;
        }
        else
        {
            /* Merge: '<S202>/Merge2' incorporates:
             *  Constant: '<S351>/Constant'
             */
            VeCSVC_e_TransOutSpdDir = CeCSVR_e_WheelDirectionReverse;
        }

        /* End of Switch: '<S353>/Switch1' */
        /* End of Outputs for SubSystem: '<S202>/DirectionUsingMtrC' */
        break;

      case 0:
        /* Outputs for IfAction SubSystem: '<S202>/DirectionUsingOutSpdPolarity' incorporates:
         *  ActionPort: '<S335>/Action Port'
         */
        /* Switch: '<S358>/Switch1' incorporates:
         *  Constant: '<S359>/Calib'
         *  RelationalOperator: '<S335>/Comparison4'
         *  SignalConversion generated from: '<S2>/VeCSVR_e_OutSpdPolarity_read'
         */
        if (rtb_TmpSignalConversionAtVeCSVR_e_OutSpd ==
                KeCSVR_e_OutPutSpdReverse)
        {
            /* Merge: '<S202>/Merge2' incorporates:
             *  Constant: '<S357>/Constant'
             */
            VeCSVC_e_TransOutSpdDir = CeCSVR_e_WheelDirectionReverse;
        }
        else
        {
            /* Merge: '<S202>/Merge2' incorporates:
             *  Constant: '<S356>/Constant'
             */
            VeCSVC_e_TransOutSpdDir = CeCSVR_e_WheelDirectionForward;
        }

        /* End of Switch: '<S358>/Switch1' */
        /* End of Outputs for SubSystem: '<S202>/DirectionUsingOutSpdPolarity' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S202>/DirectionUsingGrBsdDir' incorporates:
         *  ActionPort: '<S332>/Action Port'
         */
        /* Merge: '<S202>/Merge2' incorporates:
         *  Merge: '<S550>/Merge3'
         *  SignalConversion: '<S332>/Signal Copy'
         */
        VeCSVC_e_TransOutSpdDir = VeCSVC_e_GrbsdDirctn;

        /* End of Outputs for SubSystem: '<S202>/DirectionUsingGrBsdDir' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S202>/Default' incorporates:
         *  ActionPort: '<S330>/Action Port'
         */
        /* Merge: '<S202>/Merge2' incorporates:
         *  Constant: '<S343>/Constant'
         *  SignalConversion generated from: '<S330>/WhlDir'
         */
        VeCSVC_e_TransOutSpdDir = CeCSVR_e_WheelDirectionInvalid;

        /* End of Outputs for SubSystem: '<S202>/Default' */
        break;
    }

    /* End of SwitchCase: '<S202>/Switch_Case' */

    /* Switch: '<S342>/Switch1' incorporates:
     *  Constant: '<S329>/Constant Value'
     *  Constant: '<S329>/Constant Value1'
     *  Constant: '<S341>/Constant'
     *  RelationalOperator: '<S329>/Comparison4'
     */
    if (((uint32)VeCSVC_e_TransOutSpdDir) == CeCSVR_e_WheelDirectionReverse)
    {
        i = -1;
    }
    else
    {
        i = 1;
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Product: '<S329>/Product' incorporates:
     *  Merge: '<Root>/Merge_18'
     *  SignalConversion generated from: '<S2>/VeCSVR_n_TOSSnsrSpdRaw_read'
     */
    rtb_Product_dg = Rte_IrvRead_CSVR_FastTEF_TOS_SnsrSpdRaw_Init_write_IRV() *
        ((float32)i);

    /* SwitchCase: '<S197>/Switch_Case' */
    switch (rtb_VeCSVR_e_WhlDirSource_p)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S197>/CalcFrontAxlSpdUsingTOSSensor' incorporates:
         *  ActionPort: '<S215>/Action Port'
         */
        /* Switch: '<S241>/Switch1' incorporates:
         *  Constant: '<S215>/Constant Value'
         *  Constant: '<S243>/Calib'
         *  Product: '<S215>/Product1'
         */
        if (KeCSVR_b_UseFDRForTossToFrontAxlSpd)
        {
            rtb_TmpSignalConversionAtVeCSVR =
                rtb_TmpSignalConversionAtVeFWDR_r_TCaseR *
                rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCSVR = 1.0F;
        }

        /* End of Switch: '<S241>/Switch1' */

        /* Product: '<S215>/Product' incorporates:
         *  Constant: '<S242>/Calib'
         */
        VeCSVR_n_FrontAxlSpdFromTOSSnsr = (rtb_Product_dg *
            KeCSVR_Cf_CnvrtTOSSensorSpdToFrontAxlSpd) /
            rtb_TmpSignalConversionAtVeCSVR;

        /* Merge: '<S197>/Merge' incorporates:
         *  SignalConversion: '<S215>/Signal Copy'
         */
        VeCSVC_n_FrontAxlSpdSgndRaw = VeCSVR_n_FrontAxlSpdFromTOSSnsr;

        /* DataTypeConversion: '<S131>/DataTypeConversion' incorporates:
         *  Constant: '<S240>/Constant'
         *  Merge: '<S197>/Merge1'
         *  SignalConversion generated from: '<S215>/FrontAxlSpdSrc'
         */
        DataTypeConversion_go = CeCSVR_e_FrontAxlSpdFromTOSS;

        /* Merge: '<S197>/Merge2' incorporates:
         *  Constant: '<S215>/FALSE Constant'
         *  SignalConversion generated from: '<S215>/FrontAxlSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd = false;

        /* End of Outputs for SubSystem: '<S197>/CalcFrontAxlSpdUsingTOSSensor' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S197>/CalcFrontAxlSpdUsingPrimWhlSpd' incorporates:
         *  ActionPort: '<S213>/Action Port'
         */
        /* Product: '<S213>/Product' incorporates:
         *  Constant: '<S237>/Calib'
         */
        VeCSVR_n_FrontAxlSpdFromPrimWhlSpd = VeCSVC_n_PrimWhlSpdSigned *
            KeCSVR_Cf_CnvrtPrimWhlSpdToFrontAxlSpd;

        /* Merge: '<S197>/Merge' incorporates:
         *  SignalConversion: '<S213>/Signal Copy'
         */
        VeCSVC_n_FrontAxlSpdSgndRaw = VeCSVR_n_FrontAxlSpdFromPrimWhlSpd;

        /* DataTypeConversion: '<S131>/DataTypeConversion' incorporates:
         *  Constant: '<S236>/Constant'
         *  Merge: '<S197>/Merge1'
         *  SignalConversion generated from: '<S213>/FrontAxlSpdSrc'
         */
        DataTypeConversion_go = CeCSVR_e_FrontAxlSpdFromPrimWhls;

        /* Merge: '<S197>/Merge2' incorporates:
         *  Constant: '<S213>/FALSE Constant'
         *  SignalConversion generated from: '<S213>/FrontAxlSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd = false;

        /* End of Outputs for SubSystem: '<S197>/CalcFrontAxlSpdUsingPrimWhlSpd' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S197>/CalcFrontAxlSpdUsingMtrB' incorporates:
         *  ActionPort: '<S212>/Action Port'
         */
        /* Switch: '<S233>/Switch1' incorporates:
         *  Constant: '<S212>/Constant Value'
         *  Constant: '<S235>/Calib'
         *  Product: '<S212>/Product1'
         */
        if (KeCSVR_b_UseFDRForMtrBToFrontAxlSpd)
        {
            rtb_TmpSignalConversionAtVeCSVR =
                rtb_TmpSignalConversionAtVeFWDR_r_TCaseR *
                rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCSVR = 1.0F;
        }

        /* End of Switch: '<S233>/Switch1' */

        /* Product: '<S212>/Product' incorporates:
         *  Constant: '<S234>/Calib'
         */
        VeCSVR_n_FrontAxlSpdFromMtrB =
            (CSVR_ac_B.VariantMerge_For_Variant_Source_VS2 *
             KeCSVR_Cf_CnvrtMtrBSpdToFrontAxlSpd) *
            rtb_TmpSignalConversionAtVeCSVR;

        /* Merge: '<S197>/Merge' incorporates:
         *  SignalConversion: '<S212>/Signal Copy'
         */
        VeCSVC_n_FrontAxlSpdSgndRaw = VeCSVR_n_FrontAxlSpdFromMtrB;

        /* DataTypeConversion: '<S131>/DataTypeConversion' incorporates:
         *  Constant: '<S232>/Constant'
         *  Merge: '<S197>/Merge1'
         *  SignalConversion generated from: '<S212>/FrontAxlSpdSrc'
         */
        DataTypeConversion_go = CeCSVR_e_FrontAxlSpdFromMtrB;

        /* Merge: '<S197>/Merge2' incorporates:
         *  Constant: '<S212>/FALSE Constant'
         *  SignalConversion generated from: '<S212>/FrontAxlSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd = false;

        /* End of Outputs for SubSystem: '<S197>/CalcFrontAxlSpdUsingMtrB' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S197>/CalcFrontAxlSpdUsingMtrA' incorporates:
         *  ActionPort: '<S211>/Action Port'
         */
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value'
         *  Constant: '<S231>/Calib'
         *  Product: '<S211>/Product1'
         */
        if (KeCSVR_b_UseFDRForMtrAToFrontAxlSpd)
        {
            rtb_TmpSignalConversionAtVeCSVR =
                rtb_TmpSignalConversionAtVeFWDR_r_TCaseR *
                rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCSVR = 1.0F;
        }

        /* End of Switch: '<S229>/Switch1' */

        /* Product: '<S211>/Product' incorporates:
         *  Constant: '<S230>/Calib'
         */
        VeCSVR_n_FrontAxlSpdFromMtrA =
            (CSVR_ac_B.VariantMerge_For_Variant_Source_VS1 *
             KeCSVR_Cf_CnvrtMtrASpdToFrontAxlSpd) *
            rtb_TmpSignalConversionAtVeCSVR;

        /* Merge: '<S197>/Merge' incorporates:
         *  SignalConversion: '<S211>/Signal Copy'
         */
        VeCSVC_n_FrontAxlSpdSgndRaw = VeCSVR_n_FrontAxlSpdFromMtrA;

        /* DataTypeConversion: '<S131>/DataTypeConversion' incorporates:
         *  Constant: '<S228>/Constant'
         *  Merge: '<S197>/Merge1'
         *  SignalConversion generated from: '<S211>/FrontAxlSpdSrc'
         */
        DataTypeConversion_go = CeCSVR_e_FrontAxlSpdFromMtrA;

        /* Merge: '<S197>/Merge2' incorporates:
         *  Constant: '<S211>/FALSE Constant'
         *  SignalConversion generated from: '<S211>/FrontAxlSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd = false;

        /* End of Outputs for SubSystem: '<S197>/CalcFrontAxlSpdUsingMtrA' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S197>/CalcFrontAxlSpdUsingSecWhlSpd' incorporates:
         *  ActionPort: '<S214>/Action Port'
         */
        /* Product: '<S214>/Product' incorporates:
         *  Constant: '<S239>/Calib'
         */
        VeCSVR_n_FrontAxlSpdFromSecWhlSpd = rtb_Product *
            KeCSVR_Cf_CnvrtSecWhlSpdToFrontAxlSpd;

        /* Merge: '<S197>/Merge' incorporates:
         *  SignalConversion: '<S214>/Signal Copy'
         */
        VeCSVC_n_FrontAxlSpdSgndRaw = VeCSVR_n_FrontAxlSpdFromSecWhlSpd;

        /* DataTypeConversion: '<S131>/DataTypeConversion' incorporates:
         *  Constant: '<S238>/Constant'
         *  Merge: '<S197>/Merge1'
         *  SignalConversion generated from: '<S214>/FrontAxlSpdSrc'
         */
        DataTypeConversion_go = CeCSVR_e_FrontAxlSpdFromSecWhls;

        /* Merge: '<S197>/Merge2' incorporates:
         *  Constant: '<S214>/FALSE Constant'
         *  SignalConversion generated from: '<S214>/FrontAxlSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd = false;

        /* End of Outputs for SubSystem: '<S197>/CalcFrontAxlSpdUsingSecWhlSpd' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S197>/Default' incorporates:
         *  ActionPort: '<S216>/Action Port'
         */
        /* Merge: '<S197>/Merge' incorporates:
         *  Constant: '<S245>/Calib'
         *  SignalConversion generated from: '<S216>/FrontAxlSpd'
         */
        VeCSVC_n_FrontAxlSpdSgndRaw = KeCSVR_n_DefaultFrontAxlSpd;

        /* DataTypeConversion: '<S131>/DataTypeConversion' incorporates:
         *  Constant: '<S244>/Constant'
         *  Merge: '<S197>/Merge1'
         *  SignalConversion generated from: '<S216>/FrontAxlSpdSrc'
         */
        DataTypeConversion_go = CeCSVR_e_NoValidFASSrcAvail;

        /* Merge: '<S197>/Merge2' incorporates:
         *  Constant: '<S216>/TRUE Constant'
         *  SignalConversion generated from: '<S216>/FrontAxlSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd = true;

        /* End of Outputs for SubSystem: '<S197>/Default' */
        break;
    }

    /* End of SwitchCase: '<S197>/Switch_Case' */

    /* Product: '<S217>/Multiplication3' incorporates:
     *  Constant: '<S217>/Constant Value1'
     *  Constant: '<S225>/Calib'
     *  Product: '<S266>/Multiplication3'
     *  Product: '<S292>/Multiplication3'
     *  Product: '<S631>/Multiplication3'
     */
    Gain_d = KeCSVR_t_6p25dt / 2.0F;

    /* Product: '<S217>/Multiplication2' incorporates:
     *  Constant: '<S226>/Calib'
     *  Product: '<S217>/Multiplication3'
     *  Product: '<S217>/Multiplication4'
     *  Sum: '<S217>/Summation'
     *  Sum: '<S217>/Summation1'
     *  Sum: '<S217>/Summation2'
     *  UnitDelay: '<S217>/Unit Delay'
     *  UnitDelay: '<S217>/Unit Delay1'
     */
    CSVR_ac_DW.UnitDelay1_DSTATE = ((VeCSVC_n_FrontAxlSpdSgndRaw - ((Gain_d -
        KeCSVR_t_FrontAxlSpdTimePeriod) * CSVR_ac_DW.UnitDelay1_DSTATE)) -
        CSVR_ac_DW.UnitDelay_DSTATE) / (Gain_d + KeCSVR_t_FrontAxlSpdTimePeriod);

    /* Outputs for Atomic SubSystem: '<S197>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S218>/Switch1' incorporates:
     *  Constant: '<S224>/Calib'
     *  Product: '<S218>/Multiplication'
     *  Sum: '<S218>/Subtraction'
     *  Sum: '<S218>/Summation'
     *  UnitDelay: '<S218>/Unit Delay'
     */
    CSVR_ac_DW.UnitDelay_DSTATE_o += (VeCSVC_n_FrontAxlSpdSgndRaw -
        CSVR_ac_DW.UnitDelay_DSTATE_o) * KeCSVR_K_FrontAxlSpdGain;

    /* End of Outputs for SubSystem: '<S197>/Digital Lowpass Reset Enabled' */

    /* SignalConversion generated from: '<S273>/ SFunction ' incorporates:
     *  Chart: '<S199>/SourcePrioritization'
     *  Constant: '<S268>/Constant'
     *  Logic: '<S199>/Logical1'
     *  Logic: '<S199>/Logical2'
     *  RelationalOperator: '<S199>/Comparison1'
     */
    rtb_TmpSignalConversionAtSFunctionInpo_k[0] =
        rtb_TmpSignalConversionAtVeCSVR_b_OutSpd;
    rtb_TmpSignalConversionAtSFunctionInpo_k[1] = rtb_Switch11;
    rtb_TmpSignalConversionAtSFunctionInpo_k[2] = ((VeCSVR_b_MtrB_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
         CeMSPR_e_MtrSpSrc_MCP));
    rtb_TmpSignalConversionAtSFunctionInpo_k[3] =
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS8;
    rtb_TmpSignalConversionAtSFunctionInpo_k[4] = rtb_Switch5_c;

    /* Chart: '<S199>/SourcePrioritization' */
    /* Gateway: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalRearAxlSpd/SourcePrioritization */
    /* During: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalRearAxlSpd/SourcePrioritization */
    /* Entry Internal: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalRearAxlSpd/SourcePrioritization */
    /* Transition: '<S273>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S273>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 5)
        {
            /* Transition: '<S273>:10' */
            /* Transition: '<S273>:32' */
            i = (sint32)KaCSVR_e_RearAxlSpdSrcPriority[(b_index)];
            if (i != 255)
            {
                /* Transition: '<S273>:15' */
                /* Transition: '<S273>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInpo_k[i])
                {
                    /* Transition: '<S273>:19' */
                    /* Transition: '<S273>:34' */
                    b_index++;

                    /* Transition: '<S273>:37' */
                    /* Transition: '<S273>:40' */
                    /* Transition: '<S273>:41' */
                }
                else
                {
                    /* Transition: '<S273>:23' */
                    rtb_VeCSVR_e_WhlDirSource_p = (sint16)
                        KaCSVR_e_RearAxlSpdSrcPriority[(b_index)];

                    /* Transition: '<S273>:45' */
                    /* Transition: '<S273>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S273>:44' */
                rtb_VeCSVR_e_WhlDirSource_p = 255;

                /* Unknown Source */
                /* Transition: '<S273>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S273>:8' */
            rtb_VeCSVR_e_WhlDirSource_p = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S199>/Switch_Case' */
    switch (rtb_VeCSVR_e_WhlDirSource_p)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S199>/CalcRearAxlSpdUsingFrontAxlSpd' incorporates:
         *  ActionPort: '<S260>/Action Port'
         */
        /* Product: '<S260>/Product' incorporates:
         *  Constant: '<S275>/Calib'
         *  UnitDelay: '<S218>/Unit Delay'
         */
        VeCSVR_n_RearAxlSpdFromFrontAxlSpd = CSVR_ac_DW.UnitDelay_DSTATE_o *
            KeCSVR_Cf_CnvrtFrontAxlSpdToRearAxlSpd;

        /* Merge: '<S199>/Merge' incorporates:
         *  SignalConversion: '<S260>/Signal Copy'
         */
        VeCSVC_n_RearAxlSpdSgndRaw = VeCSVR_n_RearAxlSpdFromFrontAxlSpd;

        /* Merge: '<S199>/Merge1' incorporates:
         *  Constant: '<S274>/Constant'
         *  SignalConversion generated from: '<S260>/RearAxlSpdSrc'
         */
        VeCSVC_e_RearAxlSpdSrc = CeCSVR_e_RearAxlSpdFromFrontAxlSpd;

        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S260>/FALSE Constant'
         *  SignalConversion generated from: '<S260>/RearAxlSpdFA'
         */
        VeCSVC_b_RearAxlSpdFA = false;

        /* End of Outputs for SubSystem: '<S199>/CalcRearAxlSpdUsingFrontAxlSpd' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S199>/CalcRearAxlSpdUsingSecWhls' incorporates:
         *  ActionPort: '<S264>/Action Port'
         */
        /* Product: '<S264>/Product' incorporates:
         *  Constant: '<S283>/Calib'
         */
        VeCSVR_n_RearAxlSpdFromSecWhlSpd = rtb_Product *
            KeCSVR_Cf_CnvrtSecWhlSpdToRearAxlSpd;

        /* Merge: '<S199>/Merge' incorporates:
         *  SignalConversion: '<S264>/Signal Copy'
         */
        VeCSVC_n_RearAxlSpdSgndRaw = VeCSVR_n_RearAxlSpdFromSecWhlSpd;

        /* Merge: '<S199>/Merge1' incorporates:
         *  Constant: '<S282>/Constant'
         *  SignalConversion generated from: '<S264>/RearAxlSpdSrc'
         */
        VeCSVC_e_RearAxlSpdSrc = CeCSVR_e_RearAxlSpdFromSecWhls;

        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S264>/FALSE Constant'
         *  SignalConversion generated from: '<S264>/RearAxlSpdFA'
         */
        VeCSVC_b_RearAxlSpdFA = false;

        /* End of Outputs for SubSystem: '<S199>/CalcRearAxlSpdUsingSecWhls' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S199>/CalcRearAxlSpdUsingMtrB' incorporates:
         *  ActionPort: '<S261>/Action Port'
         */
        /* Product: '<S261>/Product' incorporates:
         *  Constant: '<S277>/Calib'
         */
        VeCSVR_n_RearAxlSpdFromMtrBSpd =
            CSVR_ac_B.VariantMerge_For_Variant_Source_VS2 *
            KeCSVR_Cf_CnvrtMtrBSpdToRearAxlSpd;

        /* Merge: '<S199>/Merge' incorporates:
         *  SignalConversion: '<S261>/Signal Copy'
         */
        VeCSVC_n_RearAxlSpdSgndRaw = VeCSVR_n_RearAxlSpdFromMtrBSpd;

        /* Merge: '<S199>/Merge1' incorporates:
         *  Constant: '<S276>/Constant'
         *  SignalConversion generated from: '<S261>/RearAxlSpdSrc'
         */
        VeCSVC_e_RearAxlSpdSrc = CeCSVR_e_RearAxlSpdFromMtrB;

        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S261>/FALSE Constant'
         *  SignalConversion generated from: '<S261>/RearAxlSpdFA'
         */
        VeCSVC_b_RearAxlSpdFA = false;

        /* End of Outputs for SubSystem: '<S199>/CalcRearAxlSpdUsingMtrB' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S199>/CalcRearAxlSpdUsingMtrC' incorporates:
         *  ActionPort: '<S262>/Action Port'
         */
        /* Product: '<S262>/Product' incorporates:
         *  Constant: '<S279>/Calib'
         */
        VeCSVR_n_RearAxlSpdFromMtrC =
            CSVR_ac_B.VariantMerge_For_Variant_Source_VS7 *
            KeCSVR_Cf_CnvrtMtrCToRearAxlSpd;

        /* Merge: '<S199>/Merge' incorporates:
         *  SignalConversion: '<S262>/Signal Copy'
         */
        VeCSVC_n_RearAxlSpdSgndRaw = VeCSVR_n_RearAxlSpdFromMtrC;

        /* Merge: '<S199>/Merge1' incorporates:
         *  Constant: '<S278>/Constant'
         *  SignalConversion generated from: '<S262>/RearAxlSpdSrc'
         */
        VeCSVC_e_RearAxlSpdSrc = CeCSVR_e_RearAxlSpdFromMtrC;

        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S262>/FALSE Constant'
         *  SignalConversion generated from: '<S262>/RearAxlSpdFA'
         */
        VeCSVC_b_RearAxlSpdFA = false;

        /* End of Outputs for SubSystem: '<S199>/CalcRearAxlSpdUsingMtrC' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S199>/CalcRearAxlSpdUsingPrimWhls' incorporates:
         *  ActionPort: '<S263>/Action Port'
         */
        /* Product: '<S263>/Product' incorporates:
         *  Constant: '<S281>/Calib'
         */
        VeCSVR_n_RearAxlSpdFromPrimWhlSpd = VeCSVC_n_PrimWhlSpdSigned *
            KeCSVR_Cf_CnvrtPrimWhlSpdToRearAxlSpd;

        /* Merge: '<S199>/Merge' incorporates:
         *  SignalConversion: '<S263>/Signal Copy'
         */
        VeCSVC_n_RearAxlSpdSgndRaw = VeCSVR_n_RearAxlSpdFromPrimWhlSpd;

        /* Merge: '<S199>/Merge1' incorporates:
         *  Constant: '<S280>/Constant'
         *  SignalConversion generated from: '<S263>/RearAxlSpdSrc'
         */
        VeCSVC_e_RearAxlSpdSrc = CeCSVR_e_RearAxlSpdFromPrimWhls;

        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S263>/FALSE Constant'
         *  SignalConversion generated from: '<S263>/RearAxlSpdFA'
         */
        VeCSVC_b_RearAxlSpdFA = false;

        /* End of Outputs for SubSystem: '<S199>/CalcRearAxlSpdUsingPrimWhls' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S199>/Default' incorporates:
         *  ActionPort: '<S265>/Action Port'
         */
        /* Merge: '<S199>/Merge' incorporates:
         *  Constant: '<S285>/Calib'
         *  SignalConversion generated from: '<S265>/RearAxlSpd'
         */
        VeCSVC_n_RearAxlSpdSgndRaw = KeCSVR_n_DefaultRearAxlSpd;

        /* Merge: '<S199>/Merge1' incorporates:
         *  Constant: '<S284>/Constant'
         *  SignalConversion generated from: '<S265>/RearAxlSpdSrc'
         */
        VeCSVC_e_RearAxlSpdSrc = CeCSVR_e_NoValidRASSrcAvail;

        /* Merge: '<S199>/Merge2' incorporates:
         *  Constant: '<S265>/TRUE Constant'
         *  SignalConversion generated from: '<S265>/RearAxlSpdFA'
         */
        VeCSVC_b_RearAxlSpdFA = true;

        /* End of Outputs for SubSystem: '<S199>/Default' */
        break;
    }

    /* End of SwitchCase: '<S199>/Switch_Case' */

    /* SignalConversion generated from: '<S251>/ SFunction ' incorporates:
     *  Chart: '<S198>/SourcePrioritization'
     *  Merge: '<Root>/Merge_41'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_RefVehSpdFA_read'
     */
    rtb_TmpSignalConversionAtSFunctionInp_ed[0] = rtb_Switch11;
    rtb_TmpSignalConversionAtSFunctionInp_ed[1] =
        Rte_IrvRead_CSVR_FastTEF_RefVehSpdFA_Init_write_IRV();
    rtb_TmpSignalConversionAtSFunctionInp_ed[2] = VeCSVC_b_RearAxlSpdFA;

    /* Chart: '<S198>/SourcePrioritization' */
    /* Gateway: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalNoReference/SourcePrioritization */
    /* During: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalNoReference/SourcePrioritization */
    /* Entry Internal: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalNoReference/SourcePrioritization */
    /* Transition: '<S251>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S251>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 2)
        {
            /* Transition: '<S251>:10' */
            /* Transition: '<S251>:32' */
            i = (sint32)KaCSVR_e_RefSpdSrcPriority[(b_index)];
            if (i != 255)
            {
                /* Transition: '<S251>:15' */
                /* Transition: '<S251>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInp_ed[i])
                {
                    /* Transition: '<S251>:19' */
                    /* Transition: '<S251>:34' */
                    b_index++;

                    /* Transition: '<S251>:37' */
                    /* Transition: '<S251>:40' */
                    /* Transition: '<S251>:41' */
                }
                else
                {
                    /* Transition: '<S251>:23' */
                    rtb_VeCSVR_e_WhlDirSource_p = (sint16)
                        KaCSVR_e_RefSpdSrcPriority[(b_index)];

                    /* Transition: '<S251>:45' */
                    /* Transition: '<S251>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S251>:44' */
                rtb_VeCSVR_e_WhlDirSource_p = 255;

                /* Unknown Source */
                /* Transition: '<S251>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S251>:8' */
            rtb_VeCSVR_e_WhlDirSource_p = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Outputs for Atomic SubSystem: '<S199>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S267>/Switch1' incorporates:
     *  Constant: '<S270>/Calib'
     *  Product: '<S267>/Multiplication'
     *  Sum: '<S267>/Subtraction'
     *  Sum: '<S267>/Summation'
     *  UnitDelay: '<S267>/Unit Delay'
     */
    CSVR_ac_DW.UnitDelay_DSTATE_bm += (VeCSVC_n_RearAxlSpdSgndRaw -
        CSVR_ac_DW.UnitDelay_DSTATE_bm) * KeCSVR_K_RearAxlSpdGain;

    /* End of Outputs for SubSystem: '<S199>/Digital Lowpass Reset Enabled' */

    /* SwitchCase: '<S198>/Switch_Case' */
    switch (rtb_VeCSVR_e_WhlDirSource_p)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S198>/CalcRefNoUsingSecWhls' incorporates:
         *  ActionPort: '<S248>/Action Port'
         */
        /* Product: '<S248>/Product' incorporates:
         *  Constant: '<S257>/Calib'
         */
        VeCSVR_n_RefNoFromSecWhlSpd = rtb_Product *
            KeCSVR_Cf_CnvrtSecWhlSpdToRefNo;

        /* Gain: '<S159>/Gain' incorporates:
         *  Merge: '<S198>/Merge'
         *  SignalConversion: '<S248>/Signal Copy'
         */
        Gain_p2 = VeCSVR_n_RefNoFromSecWhlSpd;

        /* Merge: '<S198>/Merge1' incorporates:
         *  Constant: '<S256>/Constant'
         *  SignalConversion generated from: '<S248>/ReferenceNoSrc'
         */
        VeCSVR_e_ReferenceNoSrc = CeCSVR_e_RefSpdFrmSecAxle;

        /* Gain: '<S161>/Gain' incorporates:
         *  Constant: '<S248>/FALSE Constant'
         *  Merge: '<S198>/Merge2'
         *  SignalConversion generated from: '<S248>/ReferenceNoFA'
         */
        Gain_iy = false;

        /* End of Outputs for SubSystem: '<S198>/CalcRefNoUsingSecWhls' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S198>/CalcRefNoUsingCANSpd' incorporates:
         *  ActionPort: '<S246>/Action Port'
         */
        /* Product: '<S246>/Product' incorporates:
         *  Constant: '<S253>/Calib'
         *  Merge: '<Root>/Merge_40'
         *  SignalConversion generated from: '<S2>/VeCSVR_v_RefVehSpd_read'
         */
        VeCSVR_n_RefNoFromRefSpd =
            (Rte_IrvRead_CSVR_FastTEF_RefVehSpd_Init_write_IRV() *
             KeCSVR_Cf_CnvrtRefSpdToRefNo) / Product1;

        /* Gain: '<S159>/Gain' incorporates:
         *  Merge: '<S198>/Merge'
         *  SignalConversion: '<S246>/Signal Copy'
         */
        Gain_p2 = VeCSVR_n_RefNoFromRefSpd;

        /* Merge: '<S198>/Merge1' incorporates:
         *  Constant: '<S252>/Constant'
         *  SignalConversion generated from: '<S246>/ReferenceNoSrc'
         */
        VeCSVR_e_ReferenceNoSrc = CeCSVR_e_RefSpdFrmCAN;

        /* Gain: '<S161>/Gain' incorporates:
         *  Constant: '<S246>/FALSE Constant'
         *  Merge: '<S198>/Merge2'
         *  SignalConversion generated from: '<S246>/ReferenceNoFA'
         */
        Gain_iy = false;

        /* End of Outputs for SubSystem: '<S198>/CalcRefNoUsingCANSpd' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S198>/CalcRefNoUsingSecNo' incorporates:
         *  ActionPort: '<S247>/Action Port'
         */
        /* Product: '<S247>/Product' incorporates:
         *  Constant: '<S255>/Calib'
         *  UnitDelay: '<S267>/Unit Delay'
         */
        VeCSVR_n_RefNoFromSecNo = CSVR_ac_DW.UnitDelay_DSTATE_bm *
            KeCSVR_Cf_CnvrtRefSpdToSecNo;

        /* Gain: '<S159>/Gain' incorporates:
         *  Merge: '<S198>/Merge'
         *  SignalConversion: '<S247>/Signal Copy'
         */
        Gain_p2 = VeCSVR_n_RefNoFromSecNo;

        /* Merge: '<S198>/Merge1' incorporates:
         *  Constant: '<S254>/Constant'
         *  SignalConversion generated from: '<S247>/ReferenceNoSrc'
         */
        VeCSVR_e_ReferenceNoSrc = CeCSVR_e_RefSpdFrmSecNo;

        /* Gain: '<S161>/Gain' incorporates:
         *  Constant: '<S247>/FALSE Constant'
         *  Merge: '<S198>/Merge2'
         *  SignalConversion generated from: '<S247>/ReferenceNoFA'
         */
        Gain_iy = false;

        /* End of Outputs for SubSystem: '<S198>/CalcRefNoUsingSecNo' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S198>/Default' incorporates:
         *  ActionPort: '<S249>/Action Port'
         */
        /* Gain: '<S159>/Gain' incorporates:
         *  Constant: '<S259>/Calib'
         *  Merge: '<S198>/Merge'
         *  SignalConversion generated from: '<S249>/ReferenceNo'
         */
        Gain_p2 = KeCSVR_n_DefaultRefNo;

        /* Merge: '<S198>/Merge1' incorporates:
         *  Constant: '<S258>/Constant'
         *  SignalConversion generated from: '<S249>/ReferenceNoSrc'
         */
        VeCSVR_e_ReferenceNoSrc = CeCSVR_e_NoValidRefSpdSrcAvail;

        /* Gain: '<S161>/Gain' incorporates:
         *  Constant: '<S249>/TRUE Constant'
         *  Merge: '<S198>/Merge2'
         *  SignalConversion generated from: '<S249>/ReferenceNoFA'
         */
        Gain_iy = true;

        /* End of Outputs for SubSystem: '<S198>/Default' */
        break;
    }

    /* End of SwitchCase: '<S198>/Switch_Case' */

    /* Product: '<S266>/Multiplication2' incorporates:
     *  Constant: '<S272>/Calib'
     *  Product: '<S266>/Multiplication4'
     *  Sum: '<S266>/Summation'
     *  Sum: '<S266>/Summation1'
     *  Sum: '<S266>/Summation2'
     *  UnitDelay: '<S266>/Unit Delay'
     *  UnitDelay: '<S266>/Unit Delay1'
     */
    CSVR_ac_DW.UnitDelay1_DSTATE_i = ((VeCSVC_n_RearAxlSpdSgndRaw - ((Gain_d -
        KeCSVR_t_RearAxlSpdTimePeriod) * CSVR_ac_DW.UnitDelay1_DSTATE_i)) -
        CSVR_ac_DW.UnitDelay_DSTATE_i) / (Gain_d + KeCSVR_t_RearAxlSpdTimePeriod);

    /* SignalConversion generated from: '<S303>/ SFunction ' incorporates:
     *  Chart: '<S200>/SourcePrioritization'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S294>/Constant'
     *  Constant: '<S296>/Constant'
     *  Constant: '<S297>/Constant'
     *  Constant: '<S298>/Constant'
     *  Logic: '<S200>/Logical1'
     *  Logic: '<S200>/Logical10'
     *  Logic: '<S200>/Logical2'
     *  Logic: '<S200>/Logical9'
     *  RelationalOperator: '<S200>/Comparison2'
     *  RelationalOperator: '<S200>/Comparison3'
     *  RelationalOperator: '<S200>/Comparison4'
     *  RelationalOperator: '<S200>/Comparison5'
     */
    rtb_TmpSignalConversionAtSFunctionInpo_d[0] =
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns;
    rtb_TmpSignalConversionAtSFunctionInpo_d[1] = (rtb_Switch5_c || (((uint32)
        rtb_TmpSignalConversionAtVeFWDR_e_Tcase_) == CeFWDR_e_TfrCasNeutral));
    rtb_TmpSignalConversionAtSFunctionInpo_d[2] = ((VeCSVR_b_MtrB_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
         CeMSPR_e_MtrSpSrc_MCP));
    rtb_TmpSignalConversionAtSFunctionInpo_d[3] = (((VeCSVR_b_MtrA_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS5) !=
         CeMSPR_e_MtrSpSrc_MCP)) || ((((uint32)
        rtb_TmpSignalConversionAtADCR_WEDAxleSta) != CeADCR_e_Closed) &&
        (KeCSVR_b_isWEDArch)));

    /* Chart: '<S200>/SourcePrioritization' */
    /* Gateway: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalTransOutSpd/SourcePrioritization */
    /* During: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalTransOutSpd/SourcePrioritization */
    /* Entry Internal: CSVR_FastTEF/MngCSVR_CalcSpeeds/CalTransOutSpd/SourcePrioritization */
    /* Transition: '<S303>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S303>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 4)
        {
            /* Transition: '<S303>:10' */
            /* Transition: '<S303>:32' */
            i = (sint32)KaCSVR_e_TransOutSpdSrcPriority[(b_index)];
            if (i != 255)
            {
                /* Transition: '<S303>:15' */
                /* Transition: '<S303>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInpo_d[i])
                {
                    /* Transition: '<S303>:19' */
                    /* Transition: '<S303>:34' */
                    b_index++;

                    /* Transition: '<S303>:37' */
                    /* Transition: '<S303>:40' */
                    /* Transition: '<S303>:41' */
                }
                else
                {
                    /* Transition: '<S303>:23' */
                    rtb_VeCSVR_e_WhlDirSource_p = (sint16)
                        KaCSVR_e_TransOutSpdSrcPriority[(b_index)];

                    /* Transition: '<S303>:45' */
                    /* Transition: '<S303>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S303>:44' */
                rtb_VeCSVR_e_WhlDirSource_p = 255;

                /* Unknown Source */
                /* Transition: '<S303>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S303>:8' */
            rtb_VeCSVR_e_WhlDirSource_p = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S200>/Switch_Case' */
    switch (rtb_VeCSVR_e_WhlDirSource_p)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S200>/CalcTransOutSpdUsingTOSSensor' incorporates:
         *  ActionPort: '<S289>/Action Port'
         */
        /* Product: '<S289>/Product' incorporates:
         *  Constant: '<S313>/Calib'
         */
        VeCSVR_n_TransOutFromTOSSnsr = rtb_Product_dg *
            KeCSVR_Cf_CnvrtTOSSnsrToTransOutSpd;

        /* Merge: '<S200>/Merge' incorporates:
         *  SignalConversion: '<S289>/Signal Copy'
         */
        VeCSVC_n_TransOutSpdSgndRaw = VeCSVR_n_TransOutFromTOSSnsr;

        /* Merge: '<S200>/Merge1' incorporates:
         *  Constant: '<S312>/Constant'
         *  SignalConversion generated from: '<S289>/TransOutSpdSrc'
         */
        VeCSVC_e_TransOutSpdSrc = CeCSVR_e_TransOutFromTOSSnsr;

        /* Merge: '<S200>/Merge2' incorporates:
         *  Constant: '<S289>/FALSE Constant'
         *  SignalConversion generated from: '<S289>/TransOutSpdFA'
         */
        VeCSVC_b_TransOutSpdFA = false;

        /* End of Outputs for SubSystem: '<S200>/CalcTransOutSpdUsingTOSSensor' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S200>/CalcTransOutSpdUsingPrimWhlSpd' incorporates:
         *  ActionPort: '<S288>/Action Port'
         */
        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S288>/Constant Value'
         *  Constant: '<S311>/Calib'
         *  Product: '<S288>/Product1'
         */
        if (KeCSVR_b_UseFDRForPrimWhlSpdToTransOutSpd)
        {
            rtb_TmpSignalConversionAtVeCSVR =
                rtb_TmpSignalConversionAtVeFWDR_r_TCaseR *
                rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
        }
        else
        {
            rtb_TmpSignalConversionAtVeCSVR = 1.0F;
        }

        /* End of Switch: '<S309>/Switch1' */

        /* Product: '<S288>/Product' incorporates:
         *  Constant: '<S310>/Calib'
         */
        VeCSVR_n_TransOutSpdFromPrimWhlSpd = (VeCSVC_n_PrimWhlSpdSigned *
            KeCSVR_Cf_CnvrtPrimWhlSpdToTransOutSpd) *
            rtb_TmpSignalConversionAtVeCSVR;

        /* Merge: '<S200>/Merge' incorporates:
         *  SignalConversion: '<S288>/Signal Copy'
         */
        VeCSVC_n_TransOutSpdSgndRaw = VeCSVR_n_TransOutSpdFromPrimWhlSpd;

        /* Merge: '<S200>/Merge1' incorporates:
         *  Constant: '<S308>/Constant'
         *  SignalConversion generated from: '<S288>/TransOutSpdSrc'
         */
        VeCSVC_e_TransOutSpdSrc = CeCSVR_e_TransOutFromPrimWhls;

        /* Merge: '<S200>/Merge2' incorporates:
         *  Constant: '<S288>/FALSE Constant'
         *  SignalConversion generated from: '<S288>/TransOutSpdFA'
         */
        VeCSVC_b_TransOutSpdFA = false;

        /* End of Outputs for SubSystem: '<S200>/CalcTransOutSpdUsingPrimWhlSpd' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S200>/CalcTransOutSpdUsingMtrB' incorporates:
         *  ActionPort: '<S287>/Action Port'
         */
        /* Product: '<S287>/Product' incorporates:
         *  Constant: '<S307>/Calib'
         */
        VeCSVR_n_TransOutSpdFromMtrB =
            CSVR_ac_B.VariantMerge_For_Variant_Source_VS2 *
            KeCSVR_Cf_CnvrtMtrBSpdToTransOutSpd;

        /* Merge: '<S200>/Merge' incorporates:
         *  SignalConversion: '<S287>/Signal Copy'
         */
        VeCSVC_n_TransOutSpdSgndRaw = VeCSVR_n_TransOutSpdFromMtrB;

        /* Merge: '<S200>/Merge1' incorporates:
         *  Constant: '<S306>/Constant'
         *  SignalConversion generated from: '<S287>/TransOutSpdSrc'
         */
        VeCSVC_e_TransOutSpdSrc = CeCSVR_e_TransOutFromMtrB;

        /* Merge: '<S200>/Merge2' incorporates:
         *  Constant: '<S287>/FALSE Constant'
         *  SignalConversion generated from: '<S287>/TransOutSpdFA'
         */
        VeCSVC_b_TransOutSpdFA = false;

        /* End of Outputs for SubSystem: '<S200>/CalcTransOutSpdUsingMtrB' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S200>/CalcTransOutSpdUsingMtrA' incorporates:
         *  ActionPort: '<S286>/Action Port'
         */
        /* Product: '<S286>/Product' incorporates:
         *  Constant: '<S305>/Calib'
         */
        VeCSVR_n_TransOutSpdFromMtrA =
            CSVR_ac_B.VariantMerge_For_Variant_Source_VS1 *
            KeCSVR_Cf_CnvrtMtrASpdToTransOutSpd;

        /* Merge: '<S200>/Merge' incorporates:
         *  SignalConversion: '<S286>/Signal Copy'
         */
        VeCSVC_n_TransOutSpdSgndRaw = VeCSVR_n_TransOutSpdFromMtrA;

        /* Merge: '<S200>/Merge1' incorporates:
         *  Constant: '<S304>/Constant'
         *  SignalConversion generated from: '<S286>/TransOutSpdSrc'
         */
        VeCSVC_e_TransOutSpdSrc = CeCSVR_e_TransOutFromMtrA;

        /* Merge: '<S200>/Merge2' incorporates:
         *  Constant: '<S286>/FALSE Constant'
         *  SignalConversion generated from: '<S286>/TransOutSpdFA'
         */
        VeCSVC_b_TransOutSpdFA = false;

        /* End of Outputs for SubSystem: '<S200>/CalcTransOutSpdUsingMtrA' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S200>/Default' incorporates:
         *  ActionPort: '<S291>/Action Port'
         */
        /* Merge: '<S200>/Merge' incorporates:
         *  Constant: '<S320>/Calib'
         *  SignalConversion generated from: '<S291>/TransOutSpd'
         */
        VeCSVC_n_TransOutSpdSgndRaw = KeCSVR_n_DefaultTransOutSpd;

        /* Merge: '<S200>/Merge1' incorporates:
         *  Constant: '<S319>/Constant'
         *  SignalConversion generated from: '<S291>/TransOutSpdSrc'
         */
        VeCSVC_e_TransOutSpdSrc = CeCSVR_e_NoValidTransOutSrcAvail;

        /* Merge: '<S200>/Merge2' incorporates:
         *  Constant: '<S291>/TRUE Constant'
         *  SignalConversion generated from: '<S291>/TransOutSpdFA'
         */
        VeCSVC_b_TransOutSpdFA = true;

        /* End of Outputs for SubSystem: '<S200>/Default' */
        break;
    }

    /* End of SwitchCase: '<S200>/Switch_Case' */

    /* Switch: '<S317>/Switch1' incorporates:
     *  Logic: '<S290>/Logical'
     *  Logic: '<S290>/Logical1'
     *  Logic: '<S290>/Logical2'
     */
    if ((!rtb_TmpSignalConversionAtVeCSVR_b_TOSSns) && (!rtb_Switch5_c))
    {
        /* Switch: '<S290>/Switch' incorporates:
         *  Constant: '<S318>/Calib'
         *  RelationalOperator: '<S290>/Comparison'
         *  Sum: '<S290>/Subtract'
         */
        if ((VeCSVC_n_TransOutSpdSgndRaw - VeCSVC_n_PrimWhlSpdSigned) >=
                KeCSVR_n_TOS_WhlSpdErrThrsh)
        {
            /* DataTypeConversion: '<S140>/DataTypeConversion' incorporates:
             *  Constant: '<S315>/Constant'
             *  Switch: '<S317>/Switch1'
             */
            DataTypeConversion_h = CeCSVR_e_TOS_VS_WhlOutOfRange;
        }
        else
        {
            /* DataTypeConversion: '<S140>/DataTypeConversion' incorporates:
             *  Constant: '<S316>/Constant'
             *  Switch: '<S317>/Switch1'
             */
            DataTypeConversion_h = CeCSVR_e_TOS_VS_WhlInRange;
        }

        /* End of Switch: '<S290>/Switch' */
    }
    else
    {
        /* DataTypeConversion: '<S140>/DataTypeConversion' incorporates:
         *  Constant: '<S314>/Constant'
         *  Switch: '<S317>/Switch1'
         */
        DataTypeConversion_h = CeCSVR_e_TOS_VS_WhlUnknown;
    }

    /* End of Switch: '<S317>/Switch1' */

    /* Product: '<S292>/Multiplication2' incorporates:
     *  Constant: '<S302>/Calib'
     *  Product: '<S292>/Multiplication4'
     *  Sum: '<S292>/Summation'
     *  Sum: '<S292>/Summation1'
     *  Sum: '<S292>/Summation2'
     *  UnitDelay: '<S292>/Unit Delay'
     *  UnitDelay: '<S292>/Unit Delay1'
     */
    CSVR_ac_DW.UnitDelay1_DSTATE_n = ((VeCSVC_n_TransOutSpdSgndRaw - ((Gain_d -
        KeCSVR_t_TransOutTimePeriod) * CSVR_ac_DW.UnitDelay1_DSTATE_n)) -
        CSVR_ac_DW.UnitDelay_DSTATE_e) / (Gain_d + KeCSVR_t_TransOutTimePeriod);

    /* Outputs for Atomic SubSystem: '<S200>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S300>/Calib'
     *  Product: '<S293>/Multiplication'
     *  Sum: '<S293>/Subtraction'
     *  Sum: '<S293>/Summation'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    CSVR_ac_DW.UnitDelay_DSTATE_b += (VeCSVC_n_TransOutSpdSgndRaw -
        CSVR_ac_DW.UnitDelay_DSTATE_b) * KeCSVR_K_TransOutSpdGain1;

    /* End of Outputs for SubSystem: '<S200>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S324>/Switch1' incorporates:
     *  Constant: '<S201>/Constant Value'
     *  Constant: '<S201>/Constant Value1'
     *  Constant: '<S322>/Constant'
     *  RelationalOperator: '<S201>/Comparison4'
     */
    if (((uint32)VeCSVC_e_PrimAxleDirection) == CeCSVR_e_WheelDirectionReverse)
    {
        i = -1;
    }
    else
    {
        i = 1;
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Product: '<S201>/Product' */
    VeCSVC_v_VehSpdFrmCAN = Switch1_d * ((float32)i);

    /* Logic: '<S579>/Logical1' incorporates:
     *  Constant: '<S583>/Constant'
     *  Constant: '<S584>/Constant'
     *  RelationalOperator: '<S579>/Comparison13'
     *  RelationalOperator: '<S579>/Comparison2'
     */
    rtb_Logical1_a0 = ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                        CeTRNR_e_Park) || (((uint32)
                         rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                        CeTRNR_e_Neutral));

    /* Switch: '<S207>/Switch4' incorporates:
     *  Constant: '<S585>/Constant'
     *  Constant: '<S586>/Constant'
     *  Inport: '<Root>/VeOSMR_e_ActualGear'
     *  Logic: '<S579>/Logical2'
     *  RelationalOperator: '<S579>/Comparison10'
     *  RelationalOperator: '<S579>/Comparison9'
     *  Switch: '<S207>/Switch3'
     */
    if (rtb_Logical1_a0)
    {
        /* Product: '<S631>/Multiplication3' incorporates:
         *  Constant: '<S207>/Constant Value1'
         */
        VeCSVC_n_NTurbArb = 9999.0F;
    }
    else
    {
        if ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actual) ==
                CeTRNR_e_Reverse) || (((uint32)
                rtb_TmpSignalConversionAtVeTRNR_e_Actual) == CeTRNR_e_Reverse2))
        {
            /* Switch: '<S207>/Switch3' incorporates:
             *  Constant: '<S207>/Constant Value2'
             */
            rtb_VeCSVR_e_WhlDirSource_p = 0;
        }
        else
        {
            (void)Rte_Read_VeOSMR_e_ActualGear_Value(&tmpRead_1);

            /* Switch: '<S207>/Switch3' incorporates:
             *  DataTypeConversion: '<S207>/Data Type Conversion1'
             *  Inport: '<Root>/VeOSMR_e_ActualGear'
             */
            rtb_VeCSVR_e_WhlDirSource_p = (sint16)tmpRead_1;
        }

        /* Outputs for Function Call SubSystem: '<S2>/CSVI_ProcessInputs_6p25' */
        /* Product: '<S631>/Multiplication3' incorporates:
         *  Inport: '<Root>/VeOSMR_e_ActualGear'
         *  Selector: '<S207>/ActualGear'
         *  SignalConversion: '<S54>/Signal_Conversion'
         */
        VeCSVC_n_NTurbArb = tmpRead[rtb_VeCSVR_e_WhlDirSource_p];

        /* End of Outputs for SubSystem: '<S2>/CSVI_ProcessInputs_6p25' */
    }

    /* End of Switch: '<S207>/Switch4' */

    /* Switch: '<S207>/Switch5' incorporates:
     *  Constant: '<S583>/Constant'
     *  Constant: '<S584>/Constant'
     *  Constant: '<S585>/Constant'
     *  Constant: '<S586>/Constant'
     *  Inport: '<Root>/VeOSMR_e_TargetGear'
     *  Logic: '<S579>/Logical2'
     *  Logic: '<S579>/Logical3'
     *  RelationalOperator: '<S579>/Comparison10'
     *  RelationalOperator: '<S579>/Comparison13'
     *  RelationalOperator: '<S579>/Comparison2'
     *  RelationalOperator: '<S579>/Comparison9'
     *  Switch: '<S207>/Switch2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_Park) ||
        (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_Neutral))
    {
        /* Switch: '<S207>/Switch1' */
        if (rtb_Logical1_a0)
        {
            /* Switch: '<S207>/Switch5' incorporates:
             *  Constant: '<S207>/Constant Value5'
             */
            rtb_Switch5 = -9999.0F;
        }
        else
        {
            /* Switch: '<S207>/Switch5' incorporates:
             *  Constant: '<S207>/Constant Value7'
             */
            rtb_Switch5 = 9999.0F;
        }

        /* End of Switch: '<S207>/Switch1' */
    }
    else
    {
        if ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Target) ==
                CeTRNR_e_Reverse) || (((uint32)
                rtb_TmpSignalConversionAtVeTRNR_e_Target) == CeTRNR_e_Reverse2))
        {
            /* Switch: '<S207>/Switch2' incorporates:
             *  Constant: '<S207>/Constant Value'
             */
            rtb_VeCSVR_e_WhlDirSource_p = 0;
        }
        else
        {
            (void)Rte_Read_VeOSMR_e_TargetGear_Value(&tmpRead_0);

            /* Switch: '<S207>/Switch2' incorporates:
             *  DataTypeConversion: '<S207>/Data Type Conversion'
             *  Inport: '<Root>/VeOSMR_e_TargetGear'
             */
            rtb_VeCSVR_e_WhlDirSource_p = (sint16)tmpRead_0;
        }

        /* Outputs for Function Call SubSystem: '<S2>/CSVI_ProcessInputs_6p25' */
        /* Switch: '<S207>/Switch5' incorporates:
         *  Inport: '<Root>/VeOSMR_e_TargetGear'
         *  Selector: '<S207>/TargetGear'
         *  SignalConversion: '<S54>/Signal_Conversion'
         */
        rtb_Switch5 = tmpRead[rtb_VeCSVR_e_WhlDirSource_p];

        /* End of Outputs for SubSystem: '<S2>/CSVI_ProcessInputs_6p25' */
    }

    /* End of Switch: '<S207>/Switch5' */

    /* MinMax: '<S207>/MinMax1' */
    VeCSVC_n_NturbFromStratNoMax = fmaxf(VeCSVC_n_NTurbArb, rtb_Switch5);

    /* MinMax: '<S207>/MinMax' */
    VeCSVC_n_NturbFromStratNoMin = fminf(rtb_Switch5, VeCSVC_n_NTurbArb);

    /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
    /* Switch: '<S582>/Switch1' incorporates:
     *  RelationalOperator: '<S582>/Relational Operator'
     */
    if (VeCSVC_n_NturbFromStratNoMax < rtb_TmpSignalConversionAtVeTISR_n_InputS)
    {
        /* Product: '<S631>/Multiplication3' */
        VeCSVC_n_NTurbArb = VeCSVC_n_NturbFromStratNoMax;
    }
    else
    {
        /* Product: '<S631>/Multiplication3' */
        VeCSVC_n_NTurbArb = rtb_TmpSignalConversionAtVeTISR_n_InputS;
    }

    /* End of Switch: '<S582>/Switch1' */

    /* Switch: '<S582>/Switch' incorporates:
     *  RelationalOperator: '<S582>/Relational Operator1'
     */
    if (VeCSVC_n_NTurbArb <= VeCSVC_n_NturbFromStratNoMin)
    {
        /* Switch: '<S582>/Switch' */
        VeCSVC_n_NTurbArb = VeCSVC_n_NturbFromStratNoMin;
    }

    /* End of Switch: '<S582>/Switch' */
    /* End of Outputs for SubSystem: '<S207>/Limiter' */

    /* Logic: '<S587>/Logical Operator15' incorporates:
     *  Logic: '<S587>/Logical Operator7'
     *  Merge: '<Root>/Merge_44'
     *  SignalConversion generated from: '<S2>/THA_STATFA'
     */
    Gain_ez = !Rte_IrvRead_CSVR_FastTEF_THA_STATFA_Init_write_IRV();

    /* Logic: '<S587>/Logical Operator16' incorporates:
     *  Logic: '<S587>/Logical Operator15'
     *  Merge: '<Root>/Merge_42'
     *  SignalConversion generated from: '<S2>/THA_SpdLimFA'
     */
    rtb_Logical1_a0 = (Gain_ez &&
                       (!Rte_IrvRead_CSVR_FastTEF_THA_SpdLimFA_Init_write_IRV()));

    /* Logic: '<S588>/Logical Operator1' incorporates:
     *  Logic: '<S588>/Logical Operator9'
     *  Switch: '<S621>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Left_c =
        !rtb_TmpSignalConversionAtVeCSVR_b_Left_c;

    /* Logic: '<S588>/Logical Operator' incorporates:
     *  Constant: '<S614>/Constant'
     *  Logic: '<S588>/Logical Operator1'
     *  RelationalOperator: '<S360>/Comparison4'
     *  RelationalOperator: '<S588>/Relational Operator'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_LeftFrontWhlDir_read'
     */
    rtb_LogicalOperator_h = ((((uint32)rtb_TmpSignalConversionAtVeCSVR_e_LeftFr)
        == CeCSVR_e_WheelDirectionForward) &&
        rtb_TmpSignalConversionAtVeCSVR_b_Left_c);

    /* Logic: '<S588>/Logical Operator3' incorporates:
     *  Logic: '<S588>/Logical Operator11'
     *  Switch: '<S621>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Righ_h =
        !rtb_TmpSignalConversionAtVeCSVR_b_Righ_h;

    /* Logic: '<S588>/Logical Operator2' incorporates:
     *  Constant: '<S608>/Constant'
     *  Logic: '<S588>/Logical Operator3'
     *  RelationalOperator: '<S588>/Relational Operator1'
     */
    rtb_LogicalOperator2_m = ((((uint32)rtb_TmpSignalConversionAtVeCSVR_e_RightF)
        == CeCSVR_e_WheelDirectionForward) &&
        rtb_TmpSignalConversionAtVeCSVR_b_Righ_h);

    /* Logic: '<S588>/Logical Operator5' incorporates:
     *  Logic: '<S588>/Logical Operator15'
     *  Switch: '<S621>/Switch1'
     */
    rtb_LogicalOperator6 = !rtb_TmpSignalConversionAtVeCSVR_b_Left_h;

    /* Logic: '<S587>/Logical Operator8' incorporates:
     *  Constant: '<S613>/Constant'
     *  Logic: '<S588>/Logical Operator4'
     *  Logic: '<S588>/Logical Operator5'
     *  RelationalOperator: '<S588>/Relational Operator2'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Left_h = ((((uint32)
        rtb_TmpSignalConversionAtVeCSVR_e_LeftRe) ==
        CeCSVR_e_WheelDirectionForward) && rtb_LogicalOperator6);

    /* Logic: '<S588>/Logical Operator7' incorporates:
     *  Logic: '<S588>/Logical Operator13'
     *  Switch: '<S621>/Switch1'
     */
    rtb_RelationalOperator2_n = !rtb_TmpSignalConversionAtVeCSVR_b_Righ_j;

    /* RelationalOperator: '<S587>/Relational Operator4' incorporates:
     *  Constant: '<S615>/Constant'
     *  Logic: '<S588>/Logical Operator6'
     *  Logic: '<S588>/Logical Operator7'
     *  RelationalOperator: '<S588>/Relational Operator3'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Righ_j = ((((uint32)
        rtb_TmpSignalConversionAtVeCSVR_e_RightR) ==
        CeCSVR_e_WheelDirectionForward) && rtb_RelationalOperator2_n);

    /* Switch: '<S588>/Switch' incorporates:
     *  Constant: '<S622>/Calib'
     */
    if (KeCSVR_b_AxleForSpdDir)
    {
        /* Switch: '<S588>/Switch' */
        rtb_Switch_d = VeCSVC_e_PrimAxleDirection;
    }
    else
    {
        /* Switch: '<S588>/Switch' incorporates:
         *  Merge: '<S203>/Merge7'
         */
        rtb_Switch_d = VeCSVR_e_SecAxleDirection;
    }

    /* End of Switch: '<S588>/Switch' */

    /* Logic: '<S588>/Logical Operator16' incorporates:
     *  Logic: '<S588>/Logical Operator17'
     */
    Gain_be = (rtb_LogicalOperator_h && rtb_LogicalOperator2_m);

    /* Switch: '<S621>/Switch1' incorporates:
     *  Constant: '<S620>/Constant'
     *  Logic: '<S588>/Logical Operator16'
     *  Logic: '<S588>/Logical Operator17'
     *  Logic: '<S588>/Logical Operator18'
     *  Logic: '<S588>/Logical Operator19'
     *  Logic: '<S588>/Logical Operator29'
     *  Logic: '<S588>/Logical Operator30'
     *  RelationalOperator: '<S588>/Relational Operator8'
     */
    if (((((Gain_be && rtb_TmpSignalConversionAtVeCSVR_b_Left_h) || (Gain_be &&
            rtb_TmpSignalConversionAtVeCSVR_b_Righ_j)) ||
            ((rtb_LogicalOperator_h && rtb_TmpSignalConversionAtVeCSVR_b_Left_h)
             && rtb_TmpSignalConversionAtVeCSVR_b_Righ_j)) ||
            ((rtb_LogicalOperator2_m && rtb_TmpSignalConversionAtVeCSVR_b_Left_h)
             && rtb_TmpSignalConversionAtVeCSVR_b_Righ_j)) && (((uint32)
            rtb_Switch_d) == CeCSVR_e_WheelDirectionForward))
    {
        /* Switch: '<S621>/Switch1' incorporates:
         *  Constant: '<S610>/Constant'
         */
        VeCSVR_e_VehSpdPolarity = CeCSVR_e_WheelDirectionForward;
    }
    else
    {
        /* Logic: '<S588>/Logical Operator12' incorporates:
         *  Constant: '<S619>/Constant'
         *  RelationalOperator: '<S588>/Relational Operator7'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_Righ_j = ((((uint32)
            rtb_TmpSignalConversionAtVeCSVR_e_RightR) ==
            CeCSVR_e_WheelDirectionReverse) && rtb_RelationalOperator2_n);

        /* Logic: '<S588>/Logical Operator14' incorporates:
         *  Constant: '<S618>/Constant'
         *  RelationalOperator: '<S588>/Relational Operator6'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_Left_h = ((((uint32)
            rtb_TmpSignalConversionAtVeCSVR_e_LeftRe) ==
            CeCSVR_e_WheelDirectionReverse) && rtb_LogicalOperator6);

        /* Logic: '<S588>/Logical Operator10' incorporates:
         *  Constant: '<S617>/Constant'
         *  RelationalOperator: '<S588>/Relational Operator5'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_Righ_h = ((((uint32)
            rtb_TmpSignalConversionAtVeCSVR_e_RightF) ==
            CeCSVR_e_WheelDirectionReverse) &&
            rtb_TmpSignalConversionAtVeCSVR_b_Righ_h);

        /* Logic: '<S588>/Logical Operator8' incorporates:
         *  Constant: '<S616>/Constant'
         *  RelationalOperator: '<S360>/Comparison4'
         *  RelationalOperator: '<S588>/Relational Operator4'
         *  SignalConversion generated from: '<S2>/VeCSVR_e_LeftFrontWhlDir_read'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_Left_c = ((((uint32)
            rtb_TmpSignalConversionAtVeCSVR_e_LeftFr) ==
            CeCSVR_e_WheelDirectionReverse) &&
            rtb_TmpSignalConversionAtVeCSVR_b_Left_c);

        /* Logic: '<S588>/Logical Operator20' incorporates:
         *  Logic: '<S588>/Logical Operator21'
         */
        Gain_be = (rtb_TmpSignalConversionAtVeCSVR_b_Left_c &&
                   rtb_TmpSignalConversionAtVeCSVR_b_Righ_h);

        /* Switch: '<S621>/Switch2' incorporates:
         *  Constant: '<S609>/Constant'
         *  Logic: '<S588>/Logical Operator20'
         *  Logic: '<S588>/Logical Operator21'
         *  Logic: '<S588>/Logical Operator22'
         *  Logic: '<S588>/Logical Operator23'
         *  Logic: '<S588>/Logical Operator28'
         *  Logic: '<S588>/Logical Operator31'
         *  RelationalOperator: '<S588>/Relational Operator9'
         */
        if (((((Gain_be && rtb_TmpSignalConversionAtVeCSVR_b_Left_h) || (Gain_be
                && rtb_TmpSignalConversionAtVeCSVR_b_Righ_j)) ||
                ((rtb_TmpSignalConversionAtVeCSVR_b_Left_c &&
                  rtb_TmpSignalConversionAtVeCSVR_b_Left_h) &&
                 rtb_TmpSignalConversionAtVeCSVR_b_Righ_j)) ||
                ((rtb_TmpSignalConversionAtVeCSVR_b_Righ_h &&
                  rtb_TmpSignalConversionAtVeCSVR_b_Left_h) &&
                 rtb_TmpSignalConversionAtVeCSVR_b_Righ_j)) && (((uint32)
                rtb_Switch_d) == CeCSVR_e_WheelDirectionReverse))
        {
            /* Switch: '<S621>/Switch1' incorporates:
             *  Constant: '<S611>/Constant'
             */
            VeCSVR_e_VehSpdPolarity = CeCSVR_e_WheelDirectionReverse;
        }
        else
        {
            /* Switch: '<S621>/Switch1' incorporates:
             *  Constant: '<S612>/Constant'
             */
            VeCSVR_e_VehSpdPolarity = CeCSVR_e_WheelDirectionInvalid;
        }

        /* End of Switch: '<S621>/Switch2' */
    }

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTRGR_e_CurrentGear' */
    (void)Rte_Read_VeTRGR_e_CurrentGear_Value(&rtb_VeCSVR_e_VehSpdSource);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MngCSVR_CalcSpeeds'
     */
    /* RelationalOperator: '<S587>/Relational Operator4' incorporates:
     *  Constant: '<S601>/Constant'
     *  Switch: '<S621>/Switch1'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Righ_j = (((uint32)VeCSVR_e_VehSpdPolarity)
        == CeCSVR_e_WheelDirectionForward);

    /* RelationalOperator: '<S587>/Relational Operator9' incorporates:
     *  Constant: '<S607>/Calib'
     */
    rtb_LogicalOperator_h = (rtb_VeCSVR_e_VehSpdSource ==
        KeCSVR_e_ReverseGearVal);

    /* Logic: '<S587>/Logical Operator8' */
    rtb_TmpSignalConversionAtVeCSVR_b_Left_h = !rtb_LogicalOperator_h;

    /* RelationalOperator: '<S587>/Relational Operator3' incorporates:
     *  Merge: '<Root>/Merge_43'
     *  RelationalOperator: '<S587>/Relational Operator5'
     *  RelationalOperator: '<S587>/Relational Operator6'
     *  SignalConversion generated from: '<S2>/THA_STAT'
     */
    rtb_LogicalOperator6_tmp = Rte_IrvRead_CSVR_FastTEF_THA_STAT_Init_write_IRV();

    /* Logic: '<S587>/Logical Operator6' incorporates:
     *  Constant: '<S599>/Constant'
     *  RelationalOperator: '<S587>/Relational Operator3'
     */
    rtb_LogicalOperator6 = ((((uint32)rtb_LogicalOperator6_tmp) ==
        CeCSVR_e_THA_Engaged) && Gain_ez);

    /* RelationalOperator: '<S587>/Relational Operator2' incorporates:
     *  Constant: '<S600>/Constant'
     *  Switch: '<S621>/Switch1'
     */
    rtb_RelationalOperator2_n = (((uint32)VeCSVR_e_VehSpdPolarity) ==
        CeCSVR_e_WheelDirectionReverse);

    /* Switch: '<S605>/Switch1' incorporates:
     *  Constant: '<S593>/Constant'
     *  Constant: '<S594>/Constant'
     *  Logic: '<S587>/Logical Operator11'
     *  Logic: '<S587>/Logical Operator12'
     *  Logic: '<S587>/Logical Operator23'
     *  Logic: '<S587>/Logical Operator24'
     *  Logic: '<S587>/Logical Operator5'
     *  RelationalOperator: '<S587>/Relational Operator5'
     *  RelationalOperator: '<S587>/Relational Operator6'
     *  Switch: '<S605>/Switch2'
     */
    if (rtb_Logical1_a0 && ((((((uint32)rtb_LogicalOperator6_tmp) !=
                               CeCSVR_e_THA_Engaged) && (((uint32)
             rtb_LogicalOperator6_tmp) != CeCSVR_e_THA_SNA)) ||
                             rtb_TmpSignalConversionAtVeCSVR_b_Righ_j) ||
                            rtb_TmpSignalConversionAtVeCSVR_b_Left_h))
    {
        /* DataTypeConversion: '<S136>/DataTypeConversion' incorporates:
         *  Constant: '<S602>/Constant'
         *  Switch: '<S605>/Switch1'
         */
        DataTypeConversion_lj = CeCSVR_e_THAr_Off;
    }
    else if (((rtb_Logical1_a0 && rtb_LogicalOperator6) && rtb_LogicalOperator_h)
             && rtb_RelationalOperator2_n)
    {
        /* Switch: '<S605>/Switch2' incorporates:
         *  Constant: '<S603>/Constant'
         *  DataTypeConversion: '<S136>/DataTypeConversion'
         *  Switch: '<S605>/Switch1'
         */
        DataTypeConversion_lj = CeCSVR_e_THAr_Active;
    }
    else
    {
        /* DataTypeConversion: '<S136>/DataTypeConversion' incorporates:
         *  Constant: '<S604>/Constant'
         *  Switch: '<S605>/Switch1'
         *  Switch: '<S605>/Switch2'
         */
        DataTypeConversion_lj = CeCSVR_e_THAr_SNA;
    }

    /* End of Switch: '<S605>/Switch1' */

    /* Logic: '<S587>/Logical Operator19' incorporates:
     *  Logic: '<S587>/Logical Operator2'
     *  Merge: '<Root>/Merge_48'
     *  SignalConversion generated from: '<S2>/TRSC_STATFA'
     */
    Gain_be = !Rte_IrvRead_CSVR_FastTEF_TRSC_STATFA_Init_write_IRV();

    /* Logic: '<S587>/Logical Operator20' incorporates:
     *  Logic: '<S587>/Logical Operator19'
     *  Merge: '<Root>/Merge_46'
     *  SignalConversion generated from: '<S2>/TRSC_SpdLimReqFA'
     */
    rtb_Logical1_a0 = (Gain_be &&
                       (!Rte_IrvRead_CSVR_FastTEF_TRSC_SpdLimReqFA_Init_write_IRV
                        ()));

    /* RelationalOperator: '<S587>/Relational Operator1' incorporates:
     *  Merge: '<Root>/Merge_47'
     *  RelationalOperator: '<S587>/Relational Operator7'
     *  RelationalOperator: '<S587>/Relational Operator8'
     *  SignalConversion generated from: '<S2>/TRSC_STAT'
     */
    rtb_LogicalOperator1_m_tmp =
        Rte_IrvRead_CSVR_FastTEF_TRSC_STAT_Init_write_IRV();

    /* Logic: '<S587>/Logical Operator1' incorporates:
     *  Constant: '<S589>/Constant'
     *  RelationalOperator: '<S587>/Relational Operator1'
     */
    rtb_LogicalOperator1_c = ((((uint32)rtb_LogicalOperator1_m_tmp) ==
        CeCSVR_e_TRSC_Active) && Gain_be);

    /* Switch: '<S606>/Switch1' incorporates:
     *  Constant: '<S595>/Constant'
     *  Constant: '<S596>/Constant'
     *  Logic: '<S587>/Logical Operator13'
     *  Logic: '<S587>/Logical Operator14'
     *  Logic: '<S587>/Logical Operator17'
     *  Logic: '<S587>/Logical Operator18'
     *  Logic: '<S587>/Logical Operator9'
     *  RelationalOperator: '<S587>/Relational Operator7'
     *  RelationalOperator: '<S587>/Relational Operator8'
     *  Switch: '<S606>/Switch2'
     */
    if (rtb_Logical1_a0 && ((((((uint32)rtb_LogicalOperator1_m_tmp) !=
                               CeCSVR_e_TRSC_Active) && (((uint32)
             rtb_LogicalOperator1_m_tmp) != CeCSVR_e_TRSC_SNA)) ||
                             rtb_TmpSignalConversionAtVeCSVR_b_Righ_j) ||
                            rtb_TmpSignalConversionAtVeCSVR_b_Left_h))
    {
        /* DataTypeConversion: '<S137>/DataTypeConversion' incorporates:
         *  Constant: '<S590>/Constant'
         *  Switch: '<S606>/Switch1'
         */
        DataTypeConversion_l = CeCSVR_e_TRSCr_Off;
    }
    else if (((rtb_Logical1_a0 && rtb_LogicalOperator1_c) &&
              rtb_LogicalOperator_h) && rtb_RelationalOperator2_n)
    {
        /* Switch: '<S606>/Switch2' incorporates:
         *  Constant: '<S591>/Constant'
         *  DataTypeConversion: '<S137>/DataTypeConversion'
         *  Switch: '<S606>/Switch1'
         */
        DataTypeConversion_l = CeCSVR_e_TRSCr_Active;
    }
    else
    {
        /* DataTypeConversion: '<S137>/DataTypeConversion' incorporates:
         *  Constant: '<S592>/Constant'
         *  Switch: '<S606>/Switch1'
         *  Switch: '<S606>/Switch2'
         */
        DataTypeConversion_l = CeCSVR_e_TRSCr_SNA;
    }

    /* End of Switch: '<S606>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S201>/ClosedInterval' */
    /* SignalConversion generated from: '<S641>/ SFunction ' incorporates:
     *  Chart: '<S209>/SourcePrioritization'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S323>/Constant'
     *  Constant: '<S325>/Calib'
     *  Constant: '<S326>/Calib'
     *  Constant: '<S327>/Calib'
     *  Constant: '<S328>/Calib'
     *  Constant: '<S633>/Constant'
     *  Constant: '<S634>/Constant'
     *  Constant: '<S635>/Constant'
     *  Logic: '<S201>/Logical1'
     *  Logic: '<S201>/Logical2'
     *  Logic: '<S201>/Logical3'
     *  Logic: '<S201>/Logical4'
     *  Logic: '<S209>/Logical1'
     *  Logic: '<S209>/Logical10'
     *  Logic: '<S209>/Logical9'
     *  Logic: '<S321>/Logical Operator'
     *  RelationalOperator: '<S201>/Comparison1'
     *  RelationalOperator: '<S209>/Comparison1'
     *  RelationalOperator: '<S209>/Comparison2'
     *  RelationalOperator: '<S209>/Comparison3'
     *  RelationalOperator: '<S321>/Relatonal Operator'
     *  RelationalOperator: '<S321>/Relatonal Operator1'
     */
    rtb_TmpSignalConversionAtSFunctionInport[0] =
        ((rtb_TmpSignalConversionAtVeCSVR_b_CanSig || ((((uint32)
             VeCSVC_e_PrimAxleDirection) == CeCSVR_e_WheelDirectionInvalid) &&
           (KeCSVR_b_FACANSpdOnInvalidDir))) || (((Switch1_d <
            KeCSVR_v_MinVehSpdThershold) || (Switch1_d >
            KeCSVR_v_MaxVehSpdThershold)) && (KeCSVR_b_FACANSpdbsdOnLimit)));

    /* End of Outputs for SubSystem: '<S201>/ClosedInterval' */
    rtb_TmpSignalConversionAtSFunctionInport[1] = rtb_Switch5_c;
    rtb_TmpSignalConversionAtSFunctionInport[2] =
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns;
    rtb_TmpSignalConversionAtSFunctionInport[3] = ((VeCSVR_b_MtrB_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS6) !=
         CeMSPR_e_MtrSpSrc_MCP));
    rtb_TmpSignalConversionAtSFunctionInport[4] =
        CSVR_ac_B.VariantMerge_For_Variant_Source_VS8;
    rtb_TmpSignalConversionAtSFunctionInport[5] = (((VeCSVR_b_MtrA_SpdFA) ||
        (((uint32)CSVR_ac_B.VariantMerge_For_Variant_Source_VS5) !=
         CeMSPR_e_MtrSpSrc_MCP)) || ((((uint32)
        rtb_TmpSignalConversionAtADCR_WEDAxleSta) != CeADCR_e_Closed) &&
        (KeCSVR_b_isWEDArch)));
    rtb_TmpSignalConversionAtSFunctionInport[6] = rtb_Switch11;

    /* Chart: '<S209>/SourcePrioritization' */
    /* Gateway: CSVR_FastTEF/MngCSVR_CalcSpeeds/VehSpdArbitration/SourcePrioritization */
    /* During: CSVR_FastTEF/MngCSVR_CalcSpeeds/VehSpdArbitration/SourcePrioritization */
    /* Entry Internal: CSVR_FastTEF/MngCSVR_CalcSpeeds/VehSpdArbitration/SourcePrioritization */
    /* Transition: '<S641>:12' */
    /*  Priority Based Source selection  */
    /* Transition: '<S641>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 7)
        {
            /* Transition: '<S641>:10' */
            /* Transition: '<S641>:32' */
            i = (sint32)KaCSVR_e_VehSpdSrcPriority[(b_index)];
            if (i != 255)
            {
                /* Transition: '<S641>:15' */
                /* Transition: '<S641>:17' */
                if (rtb_TmpSignalConversionAtSFunctionInport[i])
                {
                    /* Transition: '<S641>:19' */
                    /* Transition: '<S641>:34' */
                    b_index++;

                    /* Transition: '<S641>:37' */
                    /* Transition: '<S641>:40' */
                    /* Transition: '<S641>:41' */
                }
                else
                {
                    /* Transition: '<S641>:23' */
                    rtb_VeCSVR_e_VehSpdSource = (sint16)
                        KaCSVR_e_VehSpdSrcPriority[(b_index)];

                    /* Transition: '<S641>:45' */
                    /* Transition: '<S641>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S641>:44' */
                rtb_VeCSVR_e_VehSpdSource = 255;

                /* Unknown Source */
                /* Transition: '<S641>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S641>:8' */
            rtb_VeCSVR_e_VehSpdSource = 255;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* SwitchCase: '<S209>/Switch_Case' */
    switch (rtb_VeCSVR_e_VehSpdSource)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S209>/CalcVehSpdUsingCANSpd' incorporates:
         *  ActionPort: '<S623>/Action Port'
         */
        /* Merge: '<S209>/Merge' incorporates:
         *  SignalConversion: '<S623>/Signal Copy'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeCSVC_v_VehSpdFrmCAN;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S642>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S623>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_VehSpdFrmCAN;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S623>/FALSE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S623>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = false;

        /* End of Outputs for SubSystem: '<S209>/CalcVehSpdUsingCANSpd' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S209>/CalcVehSpdUsingPrimAxle' incorporates:
         *  ActionPort: '<S627>/Action Port'
         */
        /* Product: '<S627>/Product' */
        VeCSVR_v_VehSpdFromPrimAxle = VeCSVC_n_PrimWhlSpdSigned * Product1;

        /* Merge: '<S209>/Merge' incorporates:
         *  SignalConversion: '<S627>/Signal Copy'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeCSVR_v_VehSpdFromPrimAxle;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S653>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S627>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_VehSpdFrmPrimAxle;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S627>/FALSE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S627>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = false;

        /* End of Outputs for SubSystem: '<S209>/CalcVehSpdUsingPrimAxle' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S209>/CalcVehSpdUsingTOSSnsr' incorporates:
         *  ActionPort: '<S629>/Action Port'
         */
        /* Switch: '<S656>/Switch1' incorporates:
         *  Constant: '<S658>/Calib'
         */
        if (KeCSVR_b_UseFDRForTossToVehSpd)
        {
            /* Switch: '<S656>/Switch1' incorporates:
             *  Product: '<S629>/Product1'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = (Product1 /
                rtb_TmpSignalConversionAtVeFWDR_r_TCaseR) /
                rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
        }
        else
        {
            /* Switch: '<S656>/Switch1' incorporates:
             *  Constant: '<S629>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;
        }

        /* End of Switch: '<S656>/Switch1' */

        /* Product: '<S629>/Product' incorporates:
         *  Constant: '<S657>/Calib'
         */
        VeCSVR_v_VehSpdFromTOSSnsr = (rtb_Product_dg *
            KeCSVR_Cf_CnvrtTOSSensorSpdToVehSpd) *
            rtb_TmpSignalConversionAtVeTISR_n_InputS;

        /* Merge: '<S209>/Merge' incorporates:
         *  SignalConversion: '<S629>/Signal Copy'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeCSVR_v_VehSpdFromTOSSnsr;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S655>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S629>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_VehSpdFrmTOSSnsr;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S629>/FALSE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S629>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = false;

        /* End of Outputs for SubSystem: '<S209>/CalcVehSpdUsingTOSSnsr' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S209>/CalcVehSpdUsingMtrB' incorporates:
         *  ActionPort: '<S625>/Action Port'
         */
        /* Switch: '<S648>/Switch1' incorporates:
         *  Constant: '<S650>/Calib'
         */
        if (KeCSVR_b_UseFDRForMtrBToVehSpd)
        {
            /* Switch: '<S648>/Switch1' incorporates:
             *  Product: '<S625>/Product1'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = (Product1 /
                rtb_TmpSignalConversionAtVeFWDR_r_TCaseR) /
                rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
        }
        else
        {
            /* Switch: '<S648>/Switch1' incorporates:
             *  Constant: '<S625>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;
        }

        /* End of Switch: '<S648>/Switch1' */

        /* Product: '<S625>/Product' incorporates:
         *  Constant: '<S649>/Calib'
         */
        VeCSVR_v_VehSpdFromMtrB = (CSVR_ac_B.VariantMerge_For_Variant_Source_VS2
            * KeCSVR_Cf_CnvrtMtrBSpdToVehSpd) *
            rtb_TmpSignalConversionAtVeTISR_n_InputS;

        /* Merge: '<S209>/Merge' incorporates:
         *  SignalConversion: '<S625>/Signal Copy'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeCSVR_v_VehSpdFromMtrB;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S647>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S625>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_VehSpdFrmMtrB;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S625>/FALSE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S625>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = false;

        /* End of Outputs for SubSystem: '<S209>/CalcVehSpdUsingMtrB' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S209>/CalcVehSpdUsingMtrC' incorporates:
         *  ActionPort: '<S626>/Action Port'
         */
        /* Product: '<S626>/Product' incorporates:
         *  Constant: '<S652>/Calib'
         */
        VeCSVR_v_VehSpdFromMtrC = CSVR_ac_B.VariantMerge_For_Variant_Source_VS7 *
            KeCSVR_Cf_CnvrtMtrCSpdToVehSpd;

        /* Merge: '<S209>/Merge' incorporates:
         *  SignalConversion: '<S626>/Signal Copy'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeCSVR_v_VehSpdFromMtrC;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S651>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S626>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_VehSpdFrmMtrC;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S626>/FALSE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S626>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = false;

        /* End of Outputs for SubSystem: '<S209>/CalcVehSpdUsingMtrC' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S209>/CalcVehSpdUsingMtrA' incorporates:
         *  ActionPort: '<S624>/Action Port'
         */
        /* Switch: '<S644>/Switch1' incorporates:
         *  Constant: '<S646>/Calib'
         */
        if (KeCSVR_b_UseFDRForMtrAToVehSpd)
        {
            /* Switch: '<S644>/Switch1' incorporates:
             *  Product: '<S624>/Product1'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = (Product1 /
                rtb_TmpSignalConversionAtVeFWDR_r_TCaseR) /
                rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
        }
        else
        {
            /* Switch: '<S644>/Switch1' incorporates:
             *  Constant: '<S624>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeTISR_n_InputS = 1.0F;
        }

        /* End of Switch: '<S644>/Switch1' */

        /* Product: '<S624>/Product' incorporates:
         *  Constant: '<S645>/Calib'
         */
        VeCSVR_v_VehSpdFromMtrA = (CSVR_ac_B.VariantMerge_For_Variant_Source_VS1
            * KeCSVR_Cf_CnvrtMtrASpdToVehSpd) *
            rtb_TmpSignalConversionAtVeTISR_n_InputS;

        /* Merge: '<S209>/Merge' incorporates:
         *  SignalConversion: '<S624>/Signal Copy'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeCSVR_v_VehSpdFromMtrA;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S643>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S624>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_VehSpdFrmMtrA;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S624>/FALSE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S624>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = false;

        /* End of Outputs for SubSystem: '<S209>/CalcVehSpdUsingMtrA' */
        break;

      case 6:
        /* Outputs for IfAction SubSystem: '<S209>/CalcVehSpdUsingSecAxle' incorporates:
         *  ActionPort: '<S628>/Action Port'
         */
        /* Product: '<S628>/Product' */
        VeCSVR_v_VehSpdFromSecAxle = rtb_Product * Product1;

        /* Merge: '<S209>/Merge' incorporates:
         *  SignalConversion: '<S628>/Signal Copy'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = VeCSVR_v_VehSpdFromSecAxle;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S654>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S628>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_VehSpdFrmSecAxle;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S628>/FALSE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S628>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = false;

        /* End of Outputs for SubSystem: '<S209>/CalcVehSpdUsingSecAxle' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S209>/Default' incorporates:
         *  ActionPort: '<S630>/Action Port'
         */
        /* Merge: '<S209>/Merge' incorporates:
         *  Constant: '<S660>/Calib'
         *  SignalConversion generated from: '<S630>/VehSpd'
         */
        rtb_TmpSignalConversionAtVeTISR_n_InputS = KeCSVR_v_DefaultVehSpd;

        /* DataTypeConversion: '<S139>/DataTypeConversion' incorporates:
         *  Constant: '<S659>/Constant'
         *  Merge: '<S209>/Merge1'
         *  SignalConversion generated from: '<S630>/VehSpdSrc'
         */
        DataTypeConversion_iw = CeCSVR_e_NoValidVehSpdSrcAvail;

        /* Gain: '<S157>/Gain' incorporates:
         *  Constant: '<S630>/TRUE Constant'
         *  Merge: '<S209>/Merge2'
         *  SignalConversion generated from: '<S630>/VehSpdFA'
         */
        rtb_TmpSignalConversionAtVeCSVR_b_TOSSns = true;

        /* End of Outputs for SubSystem: '<S209>/Default' */
        break;
    }

    /* End of SwitchCase: '<S209>/Switch_Case' */

    /* Outputs for Atomic SubSystem: '<S209>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S632>/Switch1' incorporates:
     *  Constant: '<S638>/Calib'
     *  Product: '<S632>/Multiplication'
     *  Sum: '<S632>/Subtraction'
     *  Sum: '<S632>/Summation'
     *  UnitDelay: '<S632>/Unit Delay'
     */
    CSVR_ac_DW.UnitDelay_DSTATE_k += (rtb_TmpSignalConversionAtVeTISR_n_InputS -
        CSVR_ac_DW.UnitDelay_DSTATE_k) * KeCSVR_K_VehSpdGain1;

    /* End of Outputs for SubSystem: '<S209>/Digital Lowpass Reset Enabled' */

    /* Abs: '<S209>/Abs' incorporates:
     *  UnitDelay: '<S632>/Unit Delay'
     */
    rtb_Product_dg = fabsf(CSVR_ac_DW.UnitDelay_DSTATE_k);

    /* UnitDelay: '<S631>/Unit Delay' */
    rtb_Switch5 = CSVR_ac_DW.UnitDelay_DSTATE_n;

    /* Product: '<S209>/Product' incorporates:
     *  Constant: '<S637>/Calib'
     *  UnitDelay: '<S631>/Unit Delay'
     */
    CSVR_ac_DW.UnitDelay_DSTATE_n = rtb_TmpSignalConversionAtVeTISR_n_InputS *
        KeCSVR_Cf_ConvertKphToMps;

    /* Product: '<S631>/Multiplication2' incorporates:
     *  Constant: '<S640>/Calib'
     *  Product: '<S631>/Multiplication4'
     *  Sum: '<S631>/Summation'
     *  Sum: '<S631>/Summation1'
     *  Sum: '<S631>/Summation2'
     *  UnitDelay: '<S631>/Unit Delay'
     *  UnitDelay: '<S631>/Unit Delay1'
     */
    VeCSVC_a_VehAccel = ((CSVR_ac_DW.UnitDelay_DSTATE_n - ((Gain_d -
                            KeCSVR_t_VehSpdTimePeriod) *
                           CSVR_ac_DW.UnitDelay1_DSTATE_l)) - rtb_Switch5) /
        (Gain_d + KeCSVR_t_VehSpdTimePeriod);

    /* Update for UnitDelay: '<S217>/Unit Delay' */
    CSVR_ac_DW.UnitDelay_DSTATE = VeCSVC_n_FrontAxlSpdSgndRaw;

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    CSVR_ac_DW.UnitDelay_DSTATE_i = VeCSVC_n_RearAxlSpdSgndRaw;

    /* Update for UnitDelay: '<S292>/Unit Delay' */
    CSVR_ac_DW.UnitDelay_DSTATE_e = VeCSVC_n_TransOutSpdSgndRaw;

    /* Update for UnitDelay: '<S631>/Unit Delay1' */
    CSVR_ac_DW.UnitDelay1_DSTATE_l = VeCSVC_a_VehAccel;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVO_ProcessOutputs'
     */
    /* Gain: '<S147>/Gain' */
    rtb_TmpSignalConversionAtVeCSVR_b_Righ_j =
        CSVR_ac_B.VeCSVD_b_DsblFrontAxlSpdRatCheck;

    /* Gain: '<S158>/Gain' */
    rtb_Logical1_a0 = CSVR_ac_B.RelationalOperator;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MngCSVR_CalcSpeeds'
     */
    /* Switch: '<S207>/Switch' incorporates:
     *  Constant: '<S125>/Calib'
     *  Switch: '<S207>/Switch6'
     *  Switch: '<S54>/Switch1'
     */
    if (rtb_Switch2_di)
    {
        /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
        /* Gain: '<S163>/Gain' */
        Gain_d = VeCSVC_n_NTurbArb;

        /* DataTypeConversion: '<S141>/DataTypeConversion' incorporates:
         *  Constant: '<S580>/Constant'
         */
        DataTypeConversion_bs = CeCSVR_e_NturbArbitrated;

        /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S2>/CSVI_ProcessInputs_6p25' */
        if (KeCSVR_b_Nturb_OvrdEnbl)
        {
            /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
            /* Switch: '<S54>/Switch1' incorporates:
             *  Constant: '<S128>/Calib'
             *  Gain: '<S163>/Gain'
             */
            Gain_d = KeCSVR_n_Nturb_OvrdVal;

            /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
            /* Gain: '<S163>/Gain' incorporates:
             *  Merge: '<Root>/Merge_20'
             *  SignalConversion generated from: '<S2>/VeCSVR_n_Nturb_read'
             */
            Gain_d = Rte_IrvRead_CSVR_FastTEF_Nturb_Init_write_IRV();

            /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
        }

        /* End of Outputs for SubSystem: '<S2>/CSVI_ProcessInputs_6p25' */

        /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
        /* DataTypeConversion: '<S141>/DataTypeConversion' incorporates:
         *  Constant: '<S581>/Constant'
         */
        DataTypeConversion_bs = CeCSVR_e_NturbFromCAN;

        /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
    }

    /* End of Switch: '<S207>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVO_ProcessOutputs'
     */
    /* Gain: '<S173>/Gain' incorporates:
     *  Constant: '<S295>/Constant'
     *  RelationalOperator: '<S200>/Comparison1'
     */
    Gain_be = (((uint32)VeCSVC_e_TransOutSpdDir) ==
               CeCSVR_e_WheelDirectionInvalid);

    /* Gain: '<S146>/Gain' incorporates:
     *  Logic: '<S207>/Logical'
     *  Logic: '<S207>/Logical4'
     */
    rtb_TmpSignalConversionAtVeTRNR_b_Actual = (rtb_Switch2_di &&
        (rtb_TmpSignalConversionAtVeTRNR_b_Actual ||
         rtb_TmpSignalConversionAtVeTRNR_b_Target));

    /* Gain: '<S150>/Gain' incorporates:
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<S2>/VeCSVR_n_ST2InpSpd_read'
     */
    rtb_Switch5 = Rte_IrvRead_CSVR_FastTEF_ST2InpSpd_Init_write_IRV();

    /* Gain: '<S153>/Gain' incorporates:
     *  Merge: '<Root>/Merge_24'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_ST2InpSpdFA_read'
     */
    rtb_TmpSignalConversionAtVeTRNR_b_Target =
        Rte_IrvRead_CSVR_FastTEF_ST2InpSpdFA_Init_write_IRV();

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVI_ProcessInputs_6p25'
     */
    /* Gain: '<S156>/Gain' incorporates:
     *  Logic: '<S54>/Logical3'
     *  Merge: '<Root>/Merge_26'
     *  Merge: '<Root>/Merge_29'
     *  Merge: '<Root>/Merge_31'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_VehSpdVSOSigFailSts_CANC2Sgnl_Rcvd_read'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_VehSpdVSOSigFailSts_CANC2_read'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_VehSpdVSOSigFailSts_read'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Left_h =
        ((Rte_IrvRead_CSVR_FastTEF_VehSpdVSOSigFailSts_Init_write_IRV()) &&
         ((!Rte_IrvRead_CSVR_FastTEF_VeCSVI_b_VehSpdVSOSigFailStsSR_CANC2_Init_write_IRV
           ()) ||
          (Rte_IrvRead_CSVR_FastTEF_VehSpdVSOSigFailSts_CANC2_Init_write_IRV())));

    /* Gain: '<S184>/Gain' incorporates:
     *  Merge: '<Root>/Merge_32'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsLHF_read'
     */
    Gain_ez = Rte_IrvRead_CSVR_FastTEF_WheelSensorFailStsLHF_Init_write_IRV();

    /* Gain: '<S185>/Gain' incorporates:
     *  Merge: '<Root>/Merge_33'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsLHR_read'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Righ_h =
        Rte_IrvRead_CSVR_FastTEF_WheelSensorFailStsLHR_Init_write_IRV();

    /* Gain: '<S186>/Gain' incorporates:
     *  Merge: '<Root>/Merge_34'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsRHF_read'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_Left_c =
        Rte_IrvRead_CSVR_FastTEF_WheelSensorFailStsRHF_Init_write_IRV();

    /* Gain: '<S187>/Gain' incorporates:
     *  Merge: '<Root>/Merge_35'
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsRHR_read'
     */
    rtb_LogicalOperator2_m =
        Rte_IrvRead_CSVR_FastTEF_WheelSensorFailStsRHR_Init_write_IRV();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/MngCSVR_CalcSpeeds'
     */
    /* Switch: '<S587>/Switch1' incorporates:
     *  Logic: '<S587>/Logical Operator3'
     */
    if ((rtb_RelationalOperator2_n && rtb_LogicalOperator1_c) &&
            rtb_LogicalOperator_h)
    {
        /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
        /* DataTypeConversion: '<S134>/DataTypeConversion' incorporates:
         *  Merge: '<Root>/Merge_45'
         *  SignalConversion generated from: '<S2>/TRSC_SpdLimReq'
         */
        DataTypeConversion_n =
            Rte_IrvRead_CSVR_FastTEF_TRSC_SpdLimReq_Init_write_IRV();

        /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
        /* DataTypeConversion: '<S134>/DataTypeConversion' incorporates:
         *  Constant: '<S598>/Constant'
         */
        DataTypeConversion_n = CeCSVR_e_TRSCslr_NotLimiting;

        /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
    }

    /* End of Switch: '<S587>/Switch1' */

    /* Switch: '<S587>/Switch' incorporates:
     *  Logic: '<S587>/Logical Operator4'
     */
    if ((rtb_RelationalOperator2_n && rtb_LogicalOperator6) &&
            rtb_LogicalOperator_h)
    {
        /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
        /* DataTypeConversion: '<S135>/DataTypeConversion' incorporates:
         *  Merge: '<Root>/Merge_22'
         *  SignalConversion generated from: '<S2>/THA_SpdLim'
         */
        DataTypeConversion_g =
            Rte_IrvRead_CSVR_FastTEF_THA_SpdLim_Init_write_IRV();

        /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S2>/CSVO_ProcessOutputs' */
        /* DataTypeConversion: '<S135>/DataTypeConversion' incorporates:
         *  Constant: '<S597>/Constant'
         */
        DataTypeConversion_g = CeCSVR_e_THAsl_NoRequest;

        /* End of Outputs for SubSystem: '<S2>/CSVO_ProcessOutputs' */
    }

    /* End of Switch: '<S587>/Switch' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVD'
     */

    /* Switch: '<S57>/Switch5' incorporates:
     *  Constant: '<S57>/Constant Value4'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_LeftFr)
    {
        rtb_TmpSignalConversionAtVeCSVR = 9.999999E+6F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR = CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd;
    }

    /* End of Switch: '<S57>/Switch5' */

    /* Switch: '<S57>/Switch6' incorporates:
     *  Constant: '<S57>/Constant Value5'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_RightF)
    {
        rtb_TmpSignalConversionAtVeCSVR_0 = 9.999999E+6F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR_0 = CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd;
    }

    /* End of Switch: '<S57>/Switch6' */

    /* Switch: '<S57>/Switch7' incorporates:
     *  Constant: '<S57>/Constant Value6'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_LeftRe)
    {
        rtb_TmpSignalConversionAtVeCSVR_1 = 9.999999E+6F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR_1 = CSVR_ac_B.VeCSVC_n_RearLftWhlSpd;
    }

    /* End of Switch: '<S57>/Switch7' */

    /* Switch: '<S57>/Switch8' incorporates:
     *  Constant: '<S57>/Constant Value7'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_RightR)
    {
        rtb_TmpSignalConversionAtVeCSVR_2 = 9.999999E+6F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR_2 = CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd;
    }

    /* End of Switch: '<S57>/Switch8' */

    /* MinMax: '<S57>/MinMax3' */
    VeCSVD_n_MinWhSpd = fminf(fminf(fminf(rtb_TmpSignalConversionAtVeCSVR,
        rtb_TmpSignalConversionAtVeCSVR_0), rtb_TmpSignalConversionAtVeCSVR_1),
        rtb_TmpSignalConversionAtVeCSVR_2);

    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S57>/Constant Value'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_LeftFr)
    {
        rtb_TmpSignalConversionAtVeCSVR = 0.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR = CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd;
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Switch: '<S57>/Switch2' incorporates:
     *  Constant: '<S57>/Constant Value1'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_RightF)
    {
        rtb_TmpSignalConversionAtVeCSVR_0 = 0.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR_0 = CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd;
    }

    /* End of Switch: '<S57>/Switch2' */

    /* Switch: '<S57>/Switch3' incorporates:
     *  Constant: '<S57>/Constant Value2'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_LeftRe)
    {
        rtb_TmpSignalConversionAtVeCSVR_1 = 0.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR_1 = CSVR_ac_B.VeCSVC_n_RearLftWhlSpd;
    }

    /* End of Switch: '<S57>/Switch3' */

    /* Switch: '<S57>/Switch4' incorporates:
     *  Constant: '<S57>/Constant Value3'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_RightR)
    {
        rtb_TmpSignalConversionAtVeCSVR_2 = 0.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR_2 = CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd;
    }

    /* End of Switch: '<S57>/Switch4' */

    /* Sum: '<S57>/Sum1' incorporates:
     *  MinMax: '<S57>/MinMax2'
     */
    VeCSVD_n_MaxWhlSpdDiff = fmaxf(fmaxf(fmaxf(rtb_TmpSignalConversionAtVeCSVR,
        rtb_TmpSignalConversionAtVeCSVR_0), rtb_TmpSignalConversionAtVeCSVR_1),
        rtb_TmpSignalConversionAtVeCSVR_2) - VeCSVD_n_MinWhSpd;

    /* Abs: '<S57>/Abs' */
    VeCSVD_n_MaxWhlSpd_DiffAbs = fabsf(VeCSVD_n_MaxWhlSpdDiff);

    /* Switch: '<S57>/Switch' incorporates:
     *  Constant: '<S64>/Calib'
     *  Gain: '<S57>/Gain'
     *  Sum: '<S57>/Sum'
     */
    if (KeCSVD_b_WhlSpdRatOvrd)
    {
        rtb_TmpSignalConversionAtVeCSVR = (((CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd +
            CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd) +
            CSVR_ac_B.VeCSVC_n_RearLftWhlSpd) +
            CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd) * 0.25F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCSVR = CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd;
    }

    /* End of Switch: '<S57>/Switch' */

    /* Logic: '<S57>/Logical4' incorporates:
     *  Constant: '<S63>/Calib'
     *  Lookup_n-D: '<S65>/Vector'
     *  RelationalOperator: '<S57>/Comparison2'
     */
    rtb_LogicalOperator_h = ((VeCSVD_n_MaxWhlSpd_DiffAbs >=
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
        &(KxCSVD_n_SpdRatLookUp[0])), ((const float32 *)&(KtCSVD_n_SpdRatLookUp
        [0])), 15U)) && (KeCSVD_b_WhlSpdRatEnbl));

    /* Outputs for Atomic SubSystem: '<S57>/Turn Off Delay Sample Modified' */
    /* Outputs for Atomic SubSystem: '<S66>/EdgeFalling1' */
    /* Logic: '<S67>/AND' incorporates:
     *  Logic: '<S67>/OR1'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_LogicalOperator6 = ((!rtb_LogicalOperator_h) &&
                            (CSVR_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S67>/Unit Delay' */
    CSVR_ac_DW.UnitDelay_DSTATE_g = rtb_LogicalOperator_h;

    /* End of Outputs for SubSystem: '<S66>/EdgeFalling1' */

    /* Switch: '<S66>/Switch' incorporates:
     *  MinMax: '<S66>/Minimum1'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    if (rtb_LogicalOperator6)
    {
        /* MinMax: '<S66>/Minimum1' incorporates:
         *  Constant: '<S62>/Calib'
         *  UnitDelay: '<S66>/Unit Delay'
         */
        CSVR_ac_DW.UnitDelay_DSTATE_no = KeCSVD_Cnt_WhlSpdDiff_FailDbnc;
    }
    else
    {
        if (((sint32)CSVR_ac_DW.UnitDelay_DSTATE_no) <= 1)
        {
            /* MinMax: '<S66>/Minimum1' */
            CSVR_ac_DW.UnitDelay_DSTATE_no = 1U;
        }

        /* MinMax: '<S66>/Minimum1' incorporates:
         *  Constant: '<S66>/Constant Value'
         *  Sum: '<S66>/Summation'
         *  UnitDelay: '<S66>/Unit Delay'
         */
        CSVR_ac_DW.UnitDelay_DSTATE_no = (uint16)((sint32)(((sint32)
            CSVR_ac_DW.UnitDelay_DSTATE_no) - 1));
    }

    /* End of Switch: '<S66>/Switch' */
    /* End of Outputs for SubSystem: '<S57>/Turn Off Delay Sample Modified' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_NOT4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_FastTEF'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSVD'
     */
    /* Outputs for Atomic SubSystem: '<S57>/Turn Off Delay Sample Modified' */
    /* Logic: '<S66>/AND' incorporates:
     *  Constant: '<S66>/Constant Value2'
     *  RelationalOperator: '<S66>/Greater  Than'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    VeCSVD_b_WhlSpdDiff_FailDbnc = (rtb_LogicalOperator_h || (((sint32)
        CSVR_ac_DW.UnitDelay_DSTATE_no) > 0));

    /* End of Outputs for SubSystem: '<S57>/Turn Off Delay Sample Modified' */

    /* Logic: '<S57>/Logical Operator' */
    rtb_LogicalOperator6 = ((((rtb_TmpSignalConversionAtVeCSVR_b_LeftFr ||
        rtb_TmpSignalConversionAtVeCSVR_b_RightF) ||
        rtb_TmpSignalConversionAtVeCSVR_b_LeftRe) ||
        rtb_TmpSignalConversionAtVeCSVR_b_RightR) ||
                            (VeCSVD_b_WhlSpdDiff_FailDbnc));

    /* Logic: '<S59>/Logical1' incorporates:
     *  Constant: '<S93>/Constant'
     *  Merge: '<S199>/Merge1'
     *  RelationalOperator: '<S59>/Comparison5'
     */
    VeCSVD_b_DsblRearAxlSpdRatCheck = (((rtb_LogicalOperator6 || rtb_Switch11) ||
        VeCSVC_b_RearAxlSpdFA) || (((uint32)VeCSVC_e_RearAxlSpdSrc) ==
        CeCSVR_e_RearAxlSpdFromSecWhls));

    /* Logic: '<S59>/Logical3' incorporates:
     *  Constant: '<S96>/Calib'
     *  Logic: '<S59>/Logical2'
     */
    VeCSVD_b_RearAxlSpdRatlEnbl = ((KeCSVD_b_RearAxlSpdRatEnable) &&
        (!VeCSVD_b_DsblRearAxlSpdRatCheck));

    /* S-Function (sfix_bitop): '<S100>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S77>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_tmp = ((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U;

    /* RelationalOperator: '<S100>/Relational Operator3' incorporates:
     *  Constant: '<S100>/Constant3'
     *  S-Function (sfix_bitop): '<S100>/Bitwise Operator2'
     */
    rtb_LogicalOperator1_c = (rtb_RelationalOperator3_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S100>/EdgeFalling1' */
    /* Logic: '<S100>/Logical Operator' incorporates:
     *  Logic: '<S102>/OR1'
     */
    rtb_AND_a = !rtb_LogicalOperator1_c;

    /* End of Outputs for SubSystem: '<S100>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S100>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S77>/Bitwise Operator3'
     */
    rtb_Logical1_h_tmp = ((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U;

    /* Logic: '<S100>/Logical10' incorporates:
     *  Constant: '<S97>/Calib'
     *  Logic: '<S77>/Logical10'
     */
    rtb_LogicalOperator_h = !KeCSVD_b_VehSpd_OSS_Corr_LtchEnbl;

    /* Logic: '<S100>/Logical1' incorporates:
     *  Constant: '<S100>/Constant1'
     *  Logic: '<S100>/Logical Operator'
     *  Logic: '<S100>/Logical10'
     *  Logic: '<S100>/Logical12'
     *  RelationalOperator: '<S100>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S100>/Bitwise Operator3'
     */
    rtb_RelationalOperator2_n = ((VeCSVD_b_RearAxlSpdRatlEnbl) &&
        (rtb_LogicalOperator_h || ((rtb_Logical1_h_tmp == 0U) || rtb_AND_a)));

    /* Logic: '<S60>/NOT4' */
    rtb_NOT4 = (rtb_NOT4 || rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S100>/EdgeFalling1' */
    /* Logic: '<S102>/AND' incorporates:
     *  UnitDelay: '<S102>/Unit Delay'
     */
    rtb_AND_a = (rtb_AND_a && (CSVR_ac_DW.UnitDelay_DSTATE_oz));

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    CSVR_ac_DW.UnitDelay_DSTATE_oz = rtb_LogicalOperator1_c;

    /* End of Outputs for SubSystem: '<S100>/EdgeFalling1' */

    /* Logic: '<S100>/Logical5' */
    rtb_LogicalOperator1_c = (rtb_NOT4 || rtb_AND_a);

    /* Logic: '<S101>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S101>/Unit Delay'
     *  UnitDelay: '<S101>/Unit Delay1'
     */
    rtb_AND_a = ((rtb_LogicalOperator1_c || (CSVR_ac_DW.UnitDelay_DSTATE_ir)) ||
                 (CSVR_ac_DW.UnitDelay1_DSTATE_nt));

    /* Sum: '<S59>/Subtract' incorporates:
     *  Abs: '<S59>/Abs1'
     *  Constant: '<S99>/Calib'
     *  Product: '<S59>/Product'
     *  UnitDelay: '<S267>/Unit Delay'
     */
    VeCSVD_n_RearAxlSpdDiff = rtb_Product - fabsf(CSVR_ac_DW.UnitDelay_DSTATE_bm
        * KeCSVR_Cf_CnvrtRearAxlSpdToWhlDomain);

    /* RelationalOperator: '<S59>/Relational Operator' incorporates:
     *  Abs: '<S59>/Abs2'
     *  Constant: '<S98>/Calib'
     */
    VeCSVD_b_RearAxlSpdRatlFail = (fabsf(VeCSVD_n_RearAxlSpdDiff) >=
        KeCSVD_n_RearAxlSpdRatlThrshld);

    /* Outputs for Atomic SubSystem: '<S101>/Counter Reset  Enabled ' */
    /* Outputs for Atomic SubSystem: '<S101>/Counter Reset  Enabled 1' */
    /* Switch: '<S109>/Switch1' incorporates:
     *  Switch: '<S108>/Switch1'
     *  Switch: '<S109>/Switch2'
     */
    if (rtb_AND_a)
    {
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S109>/Constant Value2'
         */
        VeCSVD_Cnt_RearAxleRatlFlt_SmpCnt = 0U;

        /* Switch: '<S108>/Switch1' incorporates:
         *  Constant: '<S108>/Constant Value2'
         */
        VeCSVD_Cnt_RearAxleRatlFlt_FailCnt = 0U;
    }
    else
    {
        if (rtb_RelationalOperator2_n)
        {
            /* Switch: '<S109>/Switch1' incorporates:
             *  Constant: '<S109>/Constant Value1'
             *  Sum: '<S109>/Subtraction'
             *  Switch: '<S109>/Switch2'
             *  UnitDelay: '<S109>/Unit Delay'
             */
            VeCSVD_Cnt_RearAxleRatlFlt_SmpCnt = (uint16)(((uint32)
                VeCSVD_Cnt_RearAxleRatlFlt_SmpCnt) + 1U);
        }

        /* Switch: '<S108>/Switch2' incorporates:
         *  Logic: '<S101>/NOT6'
         */
        if (rtb_RelationalOperator2_n && (VeCSVD_b_RearAxlSpdRatlFail))
        {
            /* Switch: '<S108>/Switch1' incorporates:
             *  Constant: '<S108>/Constant Value1'
             *  Sum: '<S108>/Subtraction'
             *  Switch: '<S108>/Switch2'
             *  UnitDelay: '<S108>/Unit Delay'
             */
            VeCSVD_Cnt_RearAxleRatlFlt_FailCnt = (uint16)(((uint32)
                VeCSVD_Cnt_RearAxleRatlFlt_FailCnt) + 1U);
        }

        /* End of Switch: '<S108>/Switch2' */
    }

    /* End of Switch: '<S109>/Switch1' */
    /* End of Outputs for SubSystem: '<S101>/Counter Reset  Enabled 1' */
    /* End of Outputs for SubSystem: '<S101>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S101>/Greater Than or Equal ' incorporates:
     *  Constant: '<S94>/Calib'
     */
    CSVR_ac_DW.UnitDelay1_DSTATE_nt = (((sint32)
        VeCSVD_Cnt_RearAxleRatlFlt_FailCnt) >= ((sint32)
        KeCSVD_Cnt_RearAxleRatlFlt_FailCnt));

    /* Logic: '<S101>/NOT5' incorporates:
     *  Constant: '<S95>/Calib'
     *  Logic: '<S101>/NOT3'
     *  RelationalOperator: '<S101>/Less Than  or Equal'
     */
    CSVR_ac_DW.UnitDelay_DSTATE_ir = ((((sint32)
        VeCSVD_Cnt_RearAxleRatlFlt_SmpCnt) >= ((sint32)
        KeCSVD_Cnt_RearAxleRatlFlt_SmpCnt)) && (!CSVR_ac_DW.UnitDelay1_DSTATE_nt));

    /* Outputs for Enabled SubSystem: '<S100>/Pass' */
    CSVR_ac_Pass(CSVR_ac_DW.UnitDelay_DSTATE_ir, &CSVR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S100>/Pass' */

    /* Outputs for Enabled SubSystem: '<S100>/Fail' */
    CSVR_ac_Fail(CSVR_ac_DW.UnitDelay1_DSTATE_nt, &CSVR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S100>/Fail' */

    /* Outputs for Enabled SubSystem: '<S100>/Init' */
    CSVR_ac_Init_g(rtb_LogicalOperator1_c, &CSVR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S100>/Init' */

    /* Switch: '<S114>/Switch1' incorporates:
     *  Constant: '<S107>/Constant Value'
     *  DataStoreWrite: '<S59>/Data Store Write3'
     *  Switch: '<S113>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        CSVR_ac_DW.NeCSVD_Cnt_RearAxleRatlFlt_MFOP = 0U;
    }
    else
    {
        if (CSVR_ac_DW.UnitDelay_DSTATE_ir)
        {
            /* MinMax: '<S107>/Minimum2' incorporates:
             *  DataStoreRead: '<S59>/Data Store Read1'
             *  Switch: '<S113>/Switch1'
             */
            if (VeCSVD_Cnt_RearAxleRatlFlt_FailCnt >
                    CSVR_ac_DW.NeCSVD_Cnt_RearAxleRatlFlt_MFOP)
            {
                /* DataStoreWrite: '<S59>/Data Store Write3' incorporates:
                 *  Switch: '<S113>/Switch1'
                 */
                CSVR_ac_DW.NeCSVD_Cnt_RearAxleRatlFlt_MFOP =
                    VeCSVD_Cnt_RearAxleRatlFlt_FailCnt;
            }

            /* End of MinMax: '<S107>/Minimum2' */
        }
    }

    /* End of Switch: '<S114>/Switch1' */

    /* RelationalOperator: '<S100>/Relational Operator' incorporates:
     *  Constant: '<S103>/Constant'
     *  Merge: '<S100>/Merge'
     */
    VeCSVD_b_RearAxleRatlFlt_FltDtct = (((uint32)CSVR_ac_B.Merge) ==
        CeDFIB_e_Fail);

    /* Logic: '<S58>/Logical1' */
    CSVR_ac_B.VeCSVD_b_DsblFrontAxlSpdRatCheck = ((rtb_LogicalOperator6 ||
        rtb_TmpSignalConversionAtVeCSVR_b_CanSig) || VeCSVC_b_TransOutSpdFA);

    /* Logic: '<S58>/Logical3' incorporates:
     *  Constant: '<S72>/Calib'
     *  Logic: '<S58>/Logical2'
     */
    VeCSVD_b_FrontAxlSpdRatlEnbl = ((KeCSVD_b_FrontAxlSpdRatEnable) &&
        (!CSVR_ac_B.VeCSVD_b_DsblFrontAxlSpdRatCheck));

    /* RelationalOperator: '<S77>/Relational Operator3' incorporates:
     *  Constant: '<S77>/Constant3'
     */
    rtb_LogicalOperator6 = (rtb_RelationalOperator3_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S77>/EdgeFalling1' */
    /* Logic: '<S77>/Logical Operator' incorporates:
     *  Logic: '<S79>/OR1'
     */
    rtb_RelationalOperator2_n = !rtb_LogicalOperator6;

    /* End of Outputs for SubSystem: '<S77>/EdgeFalling1' */

    /* Logic: '<S77>/Logical1' incorporates:
     *  Constant: '<S77>/Constant1'
     *  Logic: '<S77>/Logical Operator'
     *  Logic: '<S77>/Logical10'
     *  Logic: '<S77>/Logical12'
     *  RelationalOperator: '<S77>/Relational Operator1'
     */
    rtb_LogicalOperator_h = ((VeCSVD_b_FrontAxlSpdRatlEnbl) &&
        (rtb_LogicalOperator_h || ((rtb_Logical1_h_tmp == 0U) ||
        rtb_RelationalOperator2_n)));

    /* Outputs for Atomic SubSystem: '<S77>/EdgeFalling1' */
    /* Logic: '<S79>/AND' incorporates:
     *  UnitDelay: '<S79>/Unit Delay'
     */
    rtb_RelationalOperator2_n = (rtb_RelationalOperator2_n &&
        (CSVR_ac_DW.UnitDelay_DSTATE_a));

    /* Update for UnitDelay: '<S79>/Unit Delay' */
    CSVR_ac_DW.UnitDelay_DSTATE_a = rtb_LogicalOperator6;

    /* End of Outputs for SubSystem: '<S77>/EdgeFalling1' */

    /* Logic: '<S77>/Logical5' */
    rtb_NOT4 = (rtb_NOT4 || rtb_RelationalOperator2_n);

    /* Logic: '<S78>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S78>/Unit Delay'
     *  UnitDelay: '<S78>/Unit Delay1'
     */
    rtb_LogicalOperator6 = ((rtb_NOT4 || (CSVR_ac_DW.UnitDelay_DSTATE_m)) ||
                            (CSVR_ac_DW.UnitDelay1_DSTATE_k));

    /* Outputs for Atomic SubSystem: '<S78>/Counter Reset  Enabled 1' */
    /* Switch: '<S86>/Switch1' incorporates:
     *  Switch: '<S86>/Switch2'
     */
    if (rtb_LogicalOperator6)
    {
        /* Switch: '<S86>/Switch1' incorporates:
         *  Constant: '<S86>/Constant Value2'
         */
        VeCSVD_Cnt_FrontAxleRatlFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator_h)
        {
            /* Switch: '<S86>/Switch1' incorporates:
             *  Constant: '<S86>/Constant Value1'
             *  Sum: '<S86>/Subtraction'
             *  Switch: '<S86>/Switch2'
             *  UnitDelay: '<S86>/Unit Delay'
             */
            VeCSVD_Cnt_FrontAxleRatlFlt_SmpCnt = (uint16)(((uint32)
                VeCSVD_Cnt_FrontAxleRatlFlt_SmpCnt) + 1U);
        }
    }

    /* End of Switch: '<S86>/Switch1' */
    /* End of Outputs for SubSystem: '<S78>/Counter Reset  Enabled 1' */

    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S76>/Calib'
     */
    if (KeCSVR_b_UseFDRForTossToVehSpd)
    {
        /* Abs: '<S58>/Abs1' incorporates:
         *  Product: '<S58>/Product1'
         */
        rtb_TmpSignalConversionAtVeFWDR_r_TCaseR = (Product1 /
            rtb_TmpSignalConversionAtVeFWDR_r_TCaseR) /
            rtb_TmpSignalConversionAtVeFWDR_r_Axle_R;
    }
    else
    {
        /* Abs: '<S58>/Abs1' incorporates:
         *  Constant: '<S58>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeFWDR_r_TCaseR = 1.0F;
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Abs: '<S58>/Abs1' incorporates:
     *  Constant: '<S75>/Calib'
     *  Product: '<S58>/Product'
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeFWDR_r_TCaseR *= CSVR_ac_DW.UnitDelay_DSTATE_b *
        KeCSVR_Cf_CnvrtTOSSensorSpdToVehSpd;
    rtb_TmpSignalConversionAtVeFWDR_r_TCaseR = fabsf
        (rtb_TmpSignalConversionAtVeFWDR_r_TCaseR);

    /* Sum: '<S58>/Subtract' incorporates:
     *  Abs: '<S58>/Abs3'
     */
    VeCSVD_v_FrontAxlSpdDiff = fabsf(Switch1_d) -
        rtb_TmpSignalConversionAtVeFWDR_r_TCaseR;

    /* RelationalOperator: '<S58>/Relational Operator' incorporates:
     *  Abs: '<S58>/Abs2'
     *  Constant: '<S74>/Calib'
     */
    VeCSVD_b_FrontAxlSpdRatlFail = (fabsf(VeCSVD_v_FrontAxlSpdDiff) >=
        KeCSVD_v_FrontAxlSpdRatlThrshld);

    /* Outputs for Atomic SubSystem: '<S78>/Counter Reset  Enabled ' */
    /* Switch: '<S85>/Switch1' incorporates:
     *  Logic: '<S78>/NOT6'
     *  Switch: '<S85>/Switch2'
     */
    if (rtb_LogicalOperator6)
    {
        /* Switch: '<S85>/Switch1' incorporates:
         *  Constant: '<S85>/Constant Value2'
         */
        VeCSVD_Cnt_FrontAxleRatlFlt_FailCnt = 0U;
    }
    else
    {
        if (rtb_LogicalOperator_h && (VeCSVD_b_FrontAxlSpdRatlFail))
        {
            /* Switch: '<S85>/Switch1' incorporates:
             *  Constant: '<S85>/Constant Value1'
             *  Sum: '<S85>/Subtraction'
             *  Switch: '<S85>/Switch2'
             *  UnitDelay: '<S85>/Unit Delay'
             */
            VeCSVD_Cnt_FrontAxleRatlFlt_FailCnt = (uint16)(((uint32)
                VeCSVD_Cnt_FrontAxleRatlFlt_FailCnt) + 1U);
        }
    }

    /* End of Switch: '<S85>/Switch1' */
    /* End of Outputs for SubSystem: '<S78>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S78>/Greater Than or Equal ' incorporates:
     *  Constant: '<S70>/Calib'
     */
    CSVR_ac_DW.UnitDelay1_DSTATE_k = (((sint32)
        VeCSVD_Cnt_FrontAxleRatlFlt_FailCnt) >= ((sint32)
        KeCSVD_Cnt_FrontAxleRatlFlt_FailCnt));

    /* Logic: '<S78>/NOT5' incorporates:
     *  Constant: '<S71>/Calib'
     *  Logic: '<S78>/NOT3'
     *  RelationalOperator: '<S78>/Less Than  or Equal'
     */
    CSVR_ac_DW.UnitDelay_DSTATE_m = ((((sint32)
        VeCSVD_Cnt_FrontAxleRatlFlt_SmpCnt) >= ((sint32)
        KeCSVD_Cnt_FrontAxleRatlFlt_SmpCnt)) && (!CSVR_ac_DW.UnitDelay1_DSTATE_k));

    /* Outputs for Enabled SubSystem: '<S77>/Pass' */
    CSVR_ac_Pass(CSVR_ac_DW.UnitDelay_DSTATE_m, &CSVR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S77>/Pass' */

    /* Outputs for Enabled SubSystem: '<S77>/Fail' */
    CSVR_ac_Fail(CSVR_ac_DW.UnitDelay1_DSTATE_k, &CSVR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S77>/Fail' */

    /* Outputs for Enabled SubSystem: '<S77>/Init' */
    CSVR_ac_Init_g(rtb_NOT4, &CSVR_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S77>/Init' */

    /* DataStoreWrite: '<S58>/Data Store Write' incorporates:
     *  Merge: '<S77>/Merge'
     */
    CSVR_ac_DW.VeCSVR_e_FaultSts_VehSpd_OSS_Corr = CSVR_ac_B.Merge_n;

    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S84>/Constant Value'
     *  DataStoreWrite: '<S58>/Data Store Write3'
     *  Switch: '<S90>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        CSVR_ac_DW.NeCSVD_Cnt_FrontAxleRatlFlt_MFOP = 0U;
    }
    else
    {
        if (CSVR_ac_DW.UnitDelay_DSTATE_m)
        {
            /* MinMax: '<S84>/Minimum2' incorporates:
             *  DataStoreRead: '<S58>/Data Store Read1'
             *  Switch: '<S90>/Switch1'
             */
            if (VeCSVD_Cnt_FrontAxleRatlFlt_FailCnt >
                    CSVR_ac_DW.NeCSVD_Cnt_FrontAxleRatlFlt_MFOP)
            {
                /* DataStoreWrite: '<S58>/Data Store Write3' incorporates:
                 *  Switch: '<S90>/Switch1'
                 */
                CSVR_ac_DW.NeCSVD_Cnt_FrontAxleRatlFlt_MFOP =
                    VeCSVD_Cnt_FrontAxleRatlFlt_FailCnt;
            }

            /* End of MinMax: '<S84>/Minimum2' */
        }
    }

    /* End of Switch: '<S91>/Switch1' */

    /* RelationalOperator: '<S77>/Relational Operator' incorporates:
     *  Constant: '<S80>/Constant'
     *  Merge: '<S77>/Merge'
     */
    CSVR_ac_B.RelationalOperator = (((uint32)CSVR_ac_B.Merge_n) == CeDFIB_e_Fail);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCSVR_a_VehAccel' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_a_VehAccel'
     */
    (void)Rte_Write_VeCSVR_a_VehAccel_Value(VeCSVC_a_VehAccel);

    /* Outport: '<Root>/VeCSVR_b_CanSigVehSpd_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_CanSigVehSpd_FA'
     */
    (void)Rte_Write_VeCSVR_b_CanSigVehSpd_FA_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_CanSig);

    /* Outport: '<Root>/VeCSVR_b_DsblFrontAxlSpdRatCheck' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_DsblFrontAxlSpdRatCheck'
     */
    (void)Rte_Write_VeCSVR_b_DsblFrontAxlSpdRatCheck_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_Righ_j);

    /* Outport: '<Root>/VeCSVR_b_FrontAxlSpdFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_FrontAxlSpdFA'
     */
    (void)Rte_Write_VeCSVR_b_FrontAxlSpdFA_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_OutSpd);

    /* Outport: '<Root>/VeCSVR_b_FrontAxleRatlFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_FrontAxleRatlFlt_FltDtct'
     */
    (void)Rte_Write_VeCSVR_b_FrontAxleRatlFlt_FltDtct_Value(rtb_Logical1_a0);

    /* Outport: '<Root>/VeCSVR_b_NTurbArbFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_NTurbArbFA'
     */
    (void)Rte_Write_VeCSVR_b_NTurbArbFA_Value
        (rtb_TmpSignalConversionAtVeTRNR_b_Actual);

    /* Outport: '<Root>/VeCSVR_b_NTurbFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_NTurbFA'
     */
    (void)Rte_Write_VeCSVR_b_NTurbFA_Value(rtb_Switch2_di);

    /* Outport: '<Root>/VeCSVR_b_PrimWhlSpdSignedFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_PrimWhlSpdSignedFA'
     */
    (void)Rte_Write_VeCSVR_b_PrimWhlSpdSignedFA_Value(rtb_Switch5_c);

    /* Outport: '<Root>/VeCSVR_b_RearAxlSpdFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_RearAxlSpdFA'
     */
    (void)Rte_Write_VeCSVR_b_RearAxlSpdFA_Value(VeCSVC_b_RearAxlSpdFA);

    /* Outport: '<Root>/VeCSVR_b_ReferenceNoFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_ReferenceNoFA'
     */
    (void)Rte_Write_VeCSVR_b_ReferenceNoFA_Value(Gain_iy);

    /* Outport: '<Root>/VeCSVR_b_ST2InpSpdFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_ST2InpSpdFA'
     */
    (void)Rte_Write_VeCSVR_b_ST2InpSpdFA_Value
        (rtb_TmpSignalConversionAtVeTRNR_b_Target);

    /* Outport: '<Root>/VeCSVR_b_SecWhlSpdSignedFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_SecWhlSpdSignedFA'
     */
    (void)Rte_Write_VeCSVR_b_SecWhlSpdSignedFA_Value(rtb_Switch11);

    /* Outport: '<Root>/VeCSVR_b_TOS_DirectionError' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_TOS_DirectionError'
     */
    (void)Rte_Write_VeCSVR_b_TOS_DirectionError_Value(Gain_be);

    /* Outport: '<Root>/VeCSVR_b_TransOutSpdFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_TransOutSpdFA'
     */
    (void)Rte_Write_VeCSVR_b_TransOutSpdFA_Value(VeCSVC_b_TransOutSpdFA);

    /* Outport: '<Root>/VeCSVR_b_VehSpdFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_VehSpdFA'
     */
    (void)Rte_Write_VeCSVR_b_VehSpdFA_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_TOSSns);

    /* Outport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_VehSpdVSOSigFailSts'
     */
    (void)Rte_Write_VeCSVR_b_VehSpdVSOSigFailSts_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_Left_h);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsLHF' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsLHF'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsLHF_Value(Gain_ez);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsLHR' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsLHR'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsLHR_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_Righ_h);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsRHF' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsRHF'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsRHF_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_Left_c);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsRHR' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WheelSensorFailStsRHR'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsRHR_Value(rtb_LogicalOperator2_m);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdLHF_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WhlSpdLHF_FA'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdLHF_FA_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_LeftFr);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdLHR_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WhlSpdLHR_FA'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdLHR_FA_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_LeftRe);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdRHF_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WhlSpdRHF_FA'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdRHF_FA_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_RightF);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdRHR_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_b_WhlSpdRHR_FA'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdRHR_FA_Value
        (rtb_TmpSignalConversionAtVeCSVR_b_RightR);

    /* Outport: '<Root>/VeCSVR_dn_FrontAxlSpddot' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_dn_FrontAxlSpddot'
     */
    (void)Rte_Write_VeCSVR_dn_FrontAxlSpddot_Value(CSVR_ac_DW.UnitDelay1_DSTATE);

    /* Outport: '<Root>/VeCSVR_dn_RearAxlSpddot' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_dn_RearAxlSpddot'
     */
    (void)Rte_Write_VeCSVR_dn_RearAxlSpddot_Value(CSVR_ac_DW.UnitDelay1_DSTATE_i);

    /* Outport: '<Root>/VeCSVR_dn_TransOutSpddot' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_dn_TransOutSpddot'
     */
    (void)Rte_Write_VeCSVR_dn_TransOutSpddot_Value
        (CSVR_ac_DW.UnitDelay1_DSTATE_n);

    /* Outport: '<Root>/VeCSVR_e_FrontAxlDir' incorporates:
     *  DataTypeConversion: '<S138>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_FrontAxlDir'
     */
    (void)Rte_Write_VeCSVR_e_FrontAxlDir_Value(CSVR_ac_B.Merge2);

    /* Outport: '<Root>/VeCSVR_e_FrontAxlSpdSrc' incorporates:
     *  DataTypeConversion: '<S131>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_FrontAxlSpdSrc'
     */
    (void)Rte_Write_VeCSVR_e_FrontAxlSpdSrc_Value(DataTypeConversion_go);

    /* Outport: '<Root>/VeCSVR_e_FrontLeftWhlDir' incorporates:
     *  DataTypeConversion: '<S144>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_FrontLeftWhlDir'
     */
    (void)Rte_Write_VeCSVR_e_FrontLeftWhlDir_Value
        (rtb_TmpSignalConversionAtVeCSVR_e_LeftFr);

    /* Outport: '<Root>/VeCSVR_e_FrontRightWhlDir' incorporates:
     *  DataTypeConversion: '<S132>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_FrontRightWhlDir'
     */
    (void)Rte_Write_VeCSVR_e_FrontRightWhlDir_Value
        (rtb_TmpSignalConversionAtVeCSVR_e_RightF);

    /* Outport: '<Root>/VeCSVR_e_NTurbSrcArb' incorporates:
     *  DataTypeConversion: '<S141>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_NTurbSrcArb'
     */
    (void)Rte_Write_VeCSVR_e_NTurbSrcArb_Value(DataTypeConversion_bs);

    /* Outport: '<Root>/VeCSVR_e_RearAxlDir' incorporates:
     *  DataTypeConversion: '<S143>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_RearAxlDir'
     */
    (void)Rte_Write_VeCSVR_e_RearAxlDir_Value(CSVR_ac_B.Merge2_b);

    /* Outport: '<Root>/VeCSVR_e_RearAxlSpdSrc' incorporates:
     *  DataTypeConversion: '<S130>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_RearAxlSpdSrc'
     */
    (void)Rte_Write_VeCSVR_e_RearAxlSpdSrc_Value(VeCSVC_e_RearAxlSpdSrc);

    /* Outport: '<Root>/VeCSVR_e_RearLeftWhlDir' incorporates:
     *  DataTypeConversion: '<S145>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_RearLeftWhlDir'
     */
    (void)Rte_Write_VeCSVR_e_RearLeftWhlDir_Value
        (rtb_TmpSignalConversionAtVeCSVR_e_LeftRe);

    /* Outport: '<Root>/VeCSVR_e_RearRightWhlDir' incorporates:
     *  DataTypeConversion: '<S133>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_RearRightWhlDir'
     */
    (void)Rte_Write_VeCSVR_e_RearRightWhlDir_Value
        (rtb_TmpSignalConversionAtVeCSVR_e_RightR);

    /* Outport: '<Root>/VeCSVR_e_THA_RespEVCU2' incorporates:
     *  DataTypeConversion: '<S136>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_THA_RespEVCU2'
     */
    (void)Rte_Write_VeCSVR_e_THA_RespEVCU2_Value(DataTypeConversion_lj);

    /* Outport: '<Root>/VeCSVR_e_THA_SpdLimInt' incorporates:
     *  DataTypeConversion: '<S135>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_THA_SpdLimInt'
     */
    (void)Rte_Write_VeCSVR_e_THA_SpdLimInt_Value(DataTypeConversion_g);

    /* Outport: '<Root>/VeCSVR_e_TOS_VS_WhlError' incorporates:
     *  DataTypeConversion: '<S140>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_TOS_VS_WhlError'
     */
    (void)Rte_Write_VeCSVR_e_TOS_VS_WhlError_Value(DataTypeConversion_h);

    /* Outport: '<Root>/VeCSVR_e_TRSC_RespEVCU2' incorporates:
     *  DataTypeConversion: '<S137>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_TRSC_RespEVCU2'
     */
    (void)Rte_Write_VeCSVR_e_TRSC_RespEVCU2_Value(DataTypeConversion_l);

    /* Outport: '<Root>/VeCSVR_e_TRSC_SpdLimReqInt' incorporates:
     *  DataTypeConversion: '<S134>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_TRSC_SpdLimReqInt'
     */
    (void)Rte_Write_VeCSVR_e_TRSC_SpdLimReqInt_Value(DataTypeConversion_n);

    /* Outport: '<Root>/VeCSVR_e_TransOutSpdDir' incorporates:
     *  DataTypeConversion: '<S142>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_TransOutSpdDir'
     */
    (void)Rte_Write_VeCSVR_e_TransOutSpdDir_Value(VeCSVC_e_TransOutSpdDir);

    /* Outport: '<Root>/VeCSVR_e_VehSpdSrc' incorporates:
     *  DataTypeConversion: '<S139>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeCSVR_e_VehSpdSrc'
     */
    (void)Rte_Write_VeCSVR_e_VehSpdSrc_Value(DataTypeConversion_iw);

    /* Outport: '<Root>/VeCSVR_l_WhlRadius' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_l_WhlRadius'
     */
    (void)Rte_Write_VeCSVR_l_WhlRadius_Value(VeCSVC_l_WhlRadius);

    /* Outport: '<Root>/VeCSVR_n_FrontAxlSpdSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_FrontAxlSpdSgndFltrd'
     */
    (void)Rte_Write_VeCSVR_n_FrontAxlSpdSgndFltrd_Value
        (CSVR_ac_DW.UnitDelay_DSTATE_o);

    /* Outport: '<Root>/VeCSVR_n_FrontAxlSpdSgndRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_FrontAxlSpdSgndRaw'
     */
    (void)Rte_Write_VeCSVR_n_FrontAxlSpdSgndRaw_Value
        (VeCSVC_n_FrontAxlSpdSgndRaw);

    /* Outport: '<Root>/VeCSVR_n_NTurbArb' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_NTurbArb'
     */
    (void)Rte_Write_VeCSVR_n_NTurbArb_Value(Gain_d);

    /* Outport: '<Root>/VeCSVR_n_PrimWhlSpdSigned' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_PrimWhlSpdSigned'
     */
    (void)Rte_Write_VeCSVR_n_PrimWhlSpdSigned_Value(VeCSVC_n_PrimWhlSpdSigned);

    /* Outport: '<Root>/VeCSVR_n_RearAxlSpdSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_RearAxlSpdSgndFltrd'
     */
    (void)Rte_Write_VeCSVR_n_RearAxlSpdSgndFltrd_Value
        (CSVR_ac_DW.UnitDelay_DSTATE_bm);

    /* Outport: '<Root>/VeCSVR_n_RearAxlSpdSgndRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_RearAxlSpdSgndRaw'
     */
    (void)Rte_Write_VeCSVR_n_RearAxlSpdSgndRaw_Value(VeCSVC_n_RearAxlSpdSgndRaw);

    /* Outport: '<Root>/VeCSVR_n_ReferenceNo' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_ReferenceNo'
     */
    (void)Rte_Write_VeCSVR_n_ReferenceNo_Value(Gain_p2);

    /* Outport: '<Root>/VeCSVR_n_ST2InpSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_ST2InpSpd'
     */
    (void)Rte_Write_VeCSVR_n_ST2InpSpd_Value(rtb_Switch5);

    /* Outport: '<Root>/VeCSVR_n_SecWhlSpdSigned' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_SecWhlSpdSigned'
     */
    (void)Rte_Write_VeCSVR_n_SecWhlSpdSigned_Value(rtb_Product);

    /* Outport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Write_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (CSVR_ac_DW.UnitDelay_DSTATE_b);

    /* Outport: '<Root>/VeCSVR_n_TransOutSpdSgndRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_TransOutSpdSgndRaw'
     */
    (void)Rte_Write_VeCSVR_n_TransOutSpdSgndRaw_Value
        (VeCSVC_n_TransOutSpdSgndRaw);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdLHF' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdLHF'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdLHF_Value(CSVR_ac_B.VeCSVC_n_FrontLftWhlSpd);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdLHR' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdLHR'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdLHR_Value(CSVR_ac_B.VeCSVC_n_RearLftWhlSpd);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdRHF' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdRHF'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdRHF_Value(CSVR_ac_B.VeCSVC_n_FrontRghtWhlSpd);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdRHR' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_n_WhlSpdRHR'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdRHR_Value(CSVR_ac_B.VeCSVC_n_RearRghtWhlSpd);

    /* Outport: '<Root>/VeCSVR_v_CanSigVehSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_CanSigVehSpd'
     */
    (void)Rte_Write_VeCSVR_v_CanSigVehSpd_Value(Switch1_d);

    /* Outport: '<Root>/VeCSVR_v_LeftFrontWheel' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_LeftFrontWheel'
     */
    (void)Rte_Write_VeCSVR_v_LeftFrontWheel_Value
        (rtb_TmpSignalConversionAtVeCSVR_n_LeftFr);

    /* Outport: '<Root>/VeCSVR_v_LeftRearWheel' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_LeftRearWheel'
     */
    (void)Rte_Write_VeCSVR_v_LeftRearWheel_Value
        (rtb_TmpSignalConversionAtVeCSVR_n_LeftRe);

    /* Outport: '<Root>/VeCSVR_v_RightFrontWheel' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_RightFrontWheel'
     */
    (void)Rte_Write_VeCSVR_v_RightFrontWheel_Value
        (rtb_TmpSignalConversionAtVeCSVR_n_RightF);

    /* Outport: '<Root>/VeCSVR_v_RightRearWheel' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_RightRearWheel'
     */
    (void)Rte_Write_VeCSVR_v_RightRearWheel_Value
        (rtb_TmpSignalConversionAtVeCSVR_n_RightR);

    /* Outport: '<Root>/VeCSVR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Write_VeCSVR_v_VehSpd_Value(rtb_Product_dg);

    /* Outport: '<Root>/VeCSVR_v_VehSpdRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_VehSpdRaw'
     */
    (void)Rte_Write_VeCSVR_v_VehSpdRaw_Value
        (rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* Outport: '<Root>/VeCSVR_v_VehSpdSigned' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Write_VeCSVR_v_VehSpdSigned_Value(CSVR_ac_DW.UnitDelay_DSTATE_k);

    /* Merge: '<Root>/VeCSVC_v_VehSpd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeCSVC_v_VehSpd_write'
     * */
    Rte_IrvWrite_CSVR_FastTEF_VeCSVC_v_VehSpd_write_IRV(rtb_Product_dg);

    /* Outport: '<Root>/VeCSVR_e_FaultSts_VehSpd_OSS_Corr' incorporates:
     *  DataStoreRead: '<S2>/DSR_VeCSVR_e_FaultSts_VehSpd_OSS_Corr'
     */
    (void)Rte_Write_VeCSVR_e_FaultSts_VehSpd_OSS_Corr_Value
        (CSVR_ac_DW.VeCSVR_e_FaultSts_VehSpd_OSS_Corr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, CSVR_CODE) CSVR_SlowTEF(void) /* Explicit Task: SlowTEF */
{
    float32 DataStoreRead3;
    TeDFIR_MIL_Request NeCSVR_b_PriorMIL_StatusOn_tmp;
    boolean tmpRead;

    /* Inport: '<Root>/VePMDR_b_RunCrankActive' */
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' incorporates:
     *  SubSystem: '<Root>/CSVR_SlowTEF'
     */
    /* SignalConversion generated from: '<S5>/VeCSVC_v_VehSpd_Read' incorporates:
     *  Merge: '<Root>/VeCSVC_v_VehSpd_IRV_Merge'
     */
    CSVR_ac_B.TmpSignalConversionAtVeCSVC_v_VehSpd_Rea =
        Rte_IrvRead_CSVR_SlowTEF_VeCSVC_v_VehSpd_write_IRV();

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/MngCSVR_1000ms'
     */

    /* If: '<S697>/If' incorporates:
     *  RelationalOperator: '<S697>/Comparison4'
     */
    if (tmpRead)
    {
        /* Outputs for IfAction SubSystem: '<S697>/If_Action_Subsystem' incorporates:
         *  ActionPort: '<S701>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S701>/Dtrmn_DistTdMIL_On' */
        CSVR_ac_Dtrmn_DistTdMIL_On();

        /* End of Outputs for SubSystem: '<S701>/Dtrmn_DistTdMIL_On' */

        /* Outputs for Atomic SubSystem: '<S701>/Dtrmn_MalfOdometer' */
        CSVR_ac_Dtrmn_MalfOdometer();

        /* End of Outputs for SubSystem: '<S701>/Dtrmn_MalfOdometer' */
        /* End of Outputs for SubSystem: '<S697>/If_Action_Subsystem' */
    }

    /* End of If: '<S697>/If' */

    /* DataStoreRead: '<S697>/Data Store Read3' */
    DataStoreRead3 = CSVR_ac_DW.NeCSVR_l_DistTravelMIL_On;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/CSVO_1000ms'
     */
    /* RelationalOperator: '<S696>/Comparison5' incorporates:
     *  DataStoreRead: '<S696>/Data Store Read'
     *  RelationalOperator: '<S696>/Comparison3'
     */
    NeCSVR_b_PriorMIL_StatusOn_tmp = CSVR_ac_DW.NeCSVR_e_MIL_LightRequest;

    /* Logic: '<S696>/Logical3' incorporates:
     *  Constant: '<S698>/Constant'
     *  Constant: '<S699>/Constant'
     *  DataStoreWrite: '<S696>/Data Store Write'
     *  RelationalOperator: '<S696>/Comparison3'
     *  RelationalOperator: '<S696>/Comparison5'
     */
    CSVR_ac_DW.NeCSVR_b_PriorMIL_StatusOn = ((((uint32)
        NeCSVR_b_PriorMIL_StatusOn_tmp) == CeDFIR_MIL_On) || (((uint32)
        NeCSVR_b_PriorMIL_StatusOn_tmp) == CeDFIR_MIL_Flash));

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeCSVR_l_DistTravelMIL_On' incorporates:
     *  SignalConversion generated from: '<S5>/DistTravelMIL_On_Out'
     */
    (void)Rte_Write_VeCSVR_l_DistTravelMIL_On_Value(DataStoreRead3);

    /* Outport: '<Root>/VeCSVR_l_DistSinceCodeClr' incorporates:
     *  SignalConversion generated from: '<S5>/MalfOdometer'
     */
    (void)Rte_Write_VeCSVR_l_DistSinceCodeClr_Value(CSVR_ac_B.Gain);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SlowTEF' */
}

/* Output function */
FUNC(void, CSVR_CODE) ClearCodes_CSVR(void)
{
    boolean tmpRead;

    /* Inport: '<Root>/VeDIDR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDIDR_b_PostCodeClrDiagDsbl_VeDIDR_b_PostCodeClrDiagDsbl
        (&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/ClearCodes_CSVR' incorporates:
     *  SubSystem: '<Root>/CSVR_ClearCodes'
     */
    /* Outputs for Triggered SubSystem: '<S1>/CSVR_ClearCodes1000ms' incorporates:
     *  TriggerPort: '<S50>/Trigger'
     */
    if (tmpRead && (((uint32)CSVR_ac_PrevZCX.CSVR_ClearCodes1000ms_Trig_ZCE) !=
                    POS_ZCSIG))
    {
        /* DataStoreWrite: '<S50>/Data Store Write1' incorporates:
         *  Constant: '<S50>/Constant Value3'
         */
        CSVR_ac_DW.NeCSVR_l_DistTravelMIL_On = 0.0F;

        /* DataStoreWrite: '<S50>/Data Store Write2' incorporates:
         *  Constant: '<S50>/Constant Value1'
         */
        CSVR_ac_DW.NeCSVR_l_DistSinceCodeClr = 0.0F;

        /* DataStoreWrite: '<S50>/Data Store Write3' incorporates:
         *  Constant: '<S50>/FALSE Constant'
         */
        CSVR_ac_DW.NeCSVR_b_PriorMIL_StatusOn = false;

        /* SignalConversion generated from: '<S50>/MalfOdometer' */
        CSVR_ac_B.VeCSVC_l_DistSinceCodeClr_ClearCode = 0.0F;

        /* Gain: '<S52>/Gain' incorporates:
         *  Constant: '<S50>/Constant Value3'
         */
        CSVR_ac_B.Gain_gy = 0.0F;
    }

    CSVR_ac_PrevZCX.CSVR_ClearCodes1000ms_Trig_ZCE = tmpRead ? ((ZCSigState)1) :
        ((ZCSigState)0);

    /* End of Outputs for SubSystem: '<S1>/CSVR_ClearCodes1000ms' */

    /* Outport: '<Root>/VeCSVR_l_DistTravelMIL_On' incorporates:
     *  SignalConversion generated from: '<S1>/DistTravelMIL_On_CC'
     */
    (void)Rte_Write_VeCSVR_l_DistTravelMIL_On_Value(CSVR_ac_B.Gain_gy);

    /* Outport: '<Root>/VeCSVR_l_DistSinceCodeClr' incorporates:
     *  SignalConversion generated from: '<S1>/MalfOdometer'
     */
    (void)Rte_Write_VeCSVR_l_DistSinceCodeClr_Value
        (CSVR_ac_B.VeCSVC_l_DistSinceCodeClr_ClearCode);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/ClearCodes_CSVR' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_b_THA_STAT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_b_THA_STAT' */
    /* Merge: '<Root>/Merge_44' incorporates:
     *  Chart: '<S6>/FsftCSVR_b_THA_STATChrt'
     *  SignalConversion generated from: '<S6>/VeCSVR_b_THA_STATFA_write'
     */
    /* Gateway: FsftCSVR_b_THA_STAT/FsftCSVR_b_THA_STATChrt */
    /* During: FsftCSVR_b_THA_STAT/FsftCSVR_b_THA_STATChrt */
    /* Entry Internal: FsftCSVR_b_THA_STAT/FsftCSVR_b_THA_STATChrt */
    /* Transition: '<S717>:2' */
    Rte_IrvWrite_FsftCSVR_b_THA_STAT_THA_STATFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_b_THA_STAT' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_b_THA_SpdLim(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_b_THA_SpdLim' */
    /* Merge: '<Root>/Merge_42' incorporates:
     *  Chart: '<S7>/FsftCSVR_b_THA_SpdLimChrt'
     *  SignalConversion generated from: '<S7>/VeCSVR_b_THA_SpdLimFA_write'
     */
    /* Gateway: FsftCSVR_b_THA_SpdLim/FsftCSVR_b_THA_SpdLimChrt */
    /* During: FsftCSVR_b_THA_SpdLim/FsftCSVR_b_THA_SpdLimChrt */
    /* Entry Internal: FsftCSVR_b_THA_SpdLim/FsftCSVR_b_THA_SpdLimChrt */
    /* Transition: '<S718>:2' */
    Rte_IrvWrite_FsftCSVR_b_THA_SpdLim_THA_SpdLimFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_b_THA_SpdLim' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_b_TRSC_STAT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_b_TRSC_STAT' */
    /* Merge: '<Root>/Merge_48' incorporates:
     *  Chart: '<S8>/FsftCSVR_b_TRSC_STATChrt'
     *  SignalConversion generated from: '<S8>/VeCSVR_b_TRSC_STATFA_write'
     */
    /* Gateway: FsftCSVR_b_TRSC_STAT/FsftCSVR_b_TRSC_STATChrt */
    /* During: FsftCSVR_b_TRSC_STAT/FsftCSVR_b_TRSC_STATChrt */
    /* Entry Internal: FsftCSVR_b_TRSC_STAT/FsftCSVR_b_TRSC_STATChrt */
    /* Transition: '<S719>:2' */
    Rte_IrvWrite_FsftCSVR_b_TRSC_STAT_TRSC_STATFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_b_TRSC_STAT' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_b_TRSC_SpdLimReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_b_TRSC_SpdLimReq' */
    /* Merge: '<Root>/Merge_46' incorporates:
     *  Chart: '<S9>/FsftCSVR_b_TRSC_SpdLimReqChrt'
     *  SignalConversion generated from: '<S9>/VeCSVR_b_TRSC_SpdLimReqFA_write'
     */
    /* Gateway: FsftCSVR_b_TRSC_SpdLimReq/FsftCSVR_b_TRSC_SpdLimReqChrt */
    /* During: FsftCSVR_b_TRSC_SpdLimReq/FsftCSVR_b_TRSC_SpdLimReqChrt */
    /* Entry Internal: FsftCSVR_b_TRSC_SpdLimReq/FsftCSVR_b_TRSC_SpdLimReqChrt */
    /* Transition: '<S720>:2' */
    Rte_IrvWrite_FsftCSVR_b_TRSC_SpdLimReq_TRSC_SpdLimReqFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_b_TRSC_SpdLimReq' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_e_LeftFrontWhlDir(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_e_LeftFrontWhlDir' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S10>/FsftCSVR_e_LeftFrontWhlDirChrt'
     *  SignalConversion generated from: '<S10>/VeCSVR_b_LeftFrontWhlDirFA_write'
     */
    /* Gateway: FsftCSVR_e_LeftFrontWhlDir/FsftCSVR_e_LeftFrontWhlDirChrt */
    /* During: FsftCSVR_e_LeftFrontWhlDir/FsftCSVR_e_LeftFrontWhlDirChrt */
    /* Entry Internal: FsftCSVR_e_LeftFrontWhlDir/FsftCSVR_e_LeftFrontWhlDirChrt */
    /* Transition: '<S721>:2' */
    Rte_IrvWrite_FsftCSVR_e_LeftFrontWhlDir_LeftFrontWhlDir_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S10>/FsftCSVR_e_LeftFrontWhlDirChrt'
     *  SignalConversion generated from: '<S10>/VeCSVR_e_LeftFrontWhlDir_write'
     */
    Rte_IrvWrite_FsftCSVR_e_LeftFrontWhlDir_LeftFrontWhlDir_Init_write_IRV
        (CeCSVR_e_WheelDirectionInvalid);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_e_LeftFrontWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_e_LeftRearWhlDir(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_e_LeftRearWhlDir' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S11>/FsftCSVR_e_LeftRearWhlDirChrt'
     *  SignalConversion generated from: '<S11>/VeCSVR_b_LeftRearWhlDirFA_write'
     */
    /* Gateway: FsftCSVR_e_LeftRearWhlDir/FsftCSVR_e_LeftRearWhlDirChrt */
    /* During: FsftCSVR_e_LeftRearWhlDir/FsftCSVR_e_LeftRearWhlDirChrt */
    /* Entry Internal: FsftCSVR_e_LeftRearWhlDir/FsftCSVR_e_LeftRearWhlDirChrt */
    /* Transition: '<S722>:2' */
    Rte_IrvWrite_FsftCSVR_e_LeftRearWhlDir_LeftRearWhlDir_FA_Init_write_IRV(true);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S11>/FsftCSVR_e_LeftRearWhlDirChrt'
     *  SignalConversion generated from: '<S11>/VeCSVR_e_LeftRearWhlDir_write'
     */
    Rte_IrvWrite_FsftCSVR_e_LeftRearWhlDir_LeftRearWhlDir_Init_write_IRV
        (CeCSVR_e_WheelDirectionInvalid);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_e_LeftRearWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_e_OutSpdPolarity(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_e_OutSpdPolarity' */
    /* Merge: '<Root>/Merge_17' incorporates:
     *  Chart: '<S12>/FsftCSVR_e_OutSpdPolarityChrt'
     *  SignalConversion generated from: '<S12>/VeCSVR_b_OutSpdPolarityFA_write'
     */
    /* Gateway: FsftCSVR_e_OutSpdPolarity/FsftCSVR_e_OutSpdPolarityChrt */
    /* During: FsftCSVR_e_OutSpdPolarity/FsftCSVR_e_OutSpdPolarityChrt */
    /* Entry Internal: FsftCSVR_e_OutSpdPolarity/FsftCSVR_e_OutSpdPolarityChrt */
    /* Transition: '<S723>:2' */
    Rte_IrvWrite_FsftCSVR_e_OutSpdPolarity_OutSpdPolarityFA_initVal_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_e_OutSpdPolarity' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_e_RightFrontWhlDir(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_e_RightFrontWhlDir' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S13>/FsftCSVR_e_RightFrontWhlDirChrt'
     *  SignalConversion generated from: '<S13>/VeCSVR_b_RightFrontWhlDirFA_write'
     */
    /* Gateway: FsftCSVR_e_RightFrontWhlDir/FsftCSVR_e_RightFrontWhlDirChrt */
    /* During: FsftCSVR_e_RightFrontWhlDir/FsftCSVR_e_RightFrontWhlDirChrt */
    /* Entry Internal: FsftCSVR_e_RightFrontWhlDir/FsftCSVR_e_RightFrontWhlDirChrt */
    /* Transition: '<S724>:2' */
    Rte_IrvWrite_FsftCSVR_e_RightFrontWhlDir_RightFrontWhlDir_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S13>/FsftCSVR_e_RightFrontWhlDirChrt'
     *  SignalConversion generated from: '<S13>/VeCSVR_e_RightFrontWhlDir_write'
     */
    Rte_IrvWrite_FsftCSVR_e_RightFrontWhlDir_RightFrontWhlDir_Init_write_IRV
        (CeCSVR_e_WheelDirectionInvalid);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_e_RightFrontWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_e_RightRearWhlDir(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_e_RightRearWhlDir' */
    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S14>/FsftCSVR_e_RightRearWhlDirChrt'
     *  SignalConversion generated from: '<S14>/VeCSVR_b_RightRearWhlDirFA_write'
     */
    /* Gateway: FsftCSVR_e_RightRearWhlDir/FsftCSVR_e_RightRearWhlDirChrt */
    /* During: FsftCSVR_e_RightRearWhlDir/FsftCSVR_e_RightRearWhlDirChrt */
    /* Entry Internal: FsftCSVR_e_RightRearWhlDir/FsftCSVR_e_RightRearWhlDirChrt */
    /* Transition: '<S725>:2' */
    Rte_IrvWrite_FsftCSVR_e_RightRearWhlDir_RightRearWhlDir_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  Chart: '<S14>/FsftCSVR_e_RightRearWhlDirChrt'
     *  SignalConversion generated from: '<S14>/VeCSVR_e_RightRearWhlDir_write'
     */
    Rte_IrvWrite_FsftCSVR_e_RightRearWhlDir_RightRearWhlDir_Init_write_IRV
        (CeCSVR_e_WheelDirectionInvalid);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_e_RightRearWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_n_LeftFrontWhl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_n_LeftFrontWhl' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S15>/FsftCSVR_n_LeftFrontWhlChrt'
     *  SignalConversion generated from: '<S15>/VeCSVR_b_LeftFrontWhlFA_write'
     */
    /* Gateway: FsftCSVR_n_LeftFrontWhl/FsftCSVR_n_LeftFrontWhlChrt */
    /* During: FsftCSVR_n_LeftFrontWhl/FsftCSVR_n_LeftFrontWhlChrt */
    /* Entry Internal: FsftCSVR_n_LeftFrontWhl/FsftCSVR_n_LeftFrontWhlChrt */
    /* Transition: '<S726>:2' */
    Rte_IrvWrite_FsftCSVR_n_LeftFrontWhl_LeftFrontWhlFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_n_LeftFrontWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_n_LeftRearWhl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_n_LeftRearWhl' */
    /* Merge: '<Root>/Merge_15' incorporates:
     *  Chart: '<S16>/FsftCSVR_n_LeftRearWhlChrt'
     *  SignalConversion generated from: '<S16>/VeCSVR_b_LeftRearWhlFA_write'
     */
    /* Gateway: FsftCSVR_n_LeftRearWhl/FsftCSVR_n_LeftRearWhlChrt */
    /* During: FsftCSVR_n_LeftRearWhl/FsftCSVR_n_LeftRearWhlChrt */
    /* Entry Internal: FsftCSVR_n_LeftRearWhl/FsftCSVR_n_LeftRearWhlChrt */
    /* Transition: '<S727>:2' */
    Rte_IrvWrite_FsftCSVR_n_LeftRearWhl_LeftRearWhlFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_n_LeftRearWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_n_Nturb(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_n_Nturb' */
    /* Merge: '<Root>/Merge_21' incorporates:
     *  Chart: '<S17>/FsftCSVR_n_NturbChrt'
     *  SignalConversion generated from: '<S17>/VeCSVR_b_NturbFA_write'
     */
    /* Gateway: FsftCSVR_n_Nturb/FsftCSVR_n_NturbChrt */
    /* During: FsftCSVR_n_Nturb/FsftCSVR_n_NturbChrt */
    /* Entry Internal: FsftCSVR_n_Nturb/FsftCSVR_n_NturbChrt */
    /* Transition: '<S728>:2' */
    Rte_IrvWrite_FsftCSVR_n_Nturb_NturbFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_n_Nturb' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_n_RightFrontWhl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_n_RightFrontWhl' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S18>/FsftCSVR_n_RightFrontWhlChrt'
     *  SignalConversion generated from: '<S18>/VeCSVR_b_RightFrontWhlFA_write'
     */
    /* Gateway: FsftCSVR_n_RightFrontWhl/FsftCSVR_n_RightFrontWhlChrt */
    /* During: FsftCSVR_n_RightFrontWhl/FsftCSVR_n_RightFrontWhlChrt */
    /* Entry Internal: FsftCSVR_n_RightFrontWhl/FsftCSVR_n_RightFrontWhlChrt */
    /* Transition: '<S729>:2' */
    Rte_IrvWrite_FsftCSVR_n_RightFrontWhl_RightFrontWhlFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_n_RightFrontWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_n_RightRearWhl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_n_RightRearWhl' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S19>/FsftCSVR_n_RightRearWhlChrt'
     *  SignalConversion generated from: '<S19>/VeCSVR_b_RightRearWhlFA_write'
     */
    /* Gateway: FsftCSVR_n_RightRearWhl/FsftCSVR_n_RightRearWhlChrt */
    /* During: FsftCSVR_n_RightRearWhl/FsftCSVR_n_RightRearWhlChrt */
    /* Entry Internal: FsftCSVR_n_RightRearWhl/FsftCSVR_n_RightRearWhlChrt */
    /* Transition: '<S730>:2' */
    Rte_IrvWrite_FsftCSVR_n_RightRearWhl_RightRearWhlFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_n_RightRearWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_n_ST2InpSpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_n_ST2InpSpd' */
    /* Merge: '<Root>/Merge_24' incorporates:
     *  Chart: '<S20>/FsftCSVR_n_ST2InpSpdChrt'
     *  SignalConversion generated from: '<S20>/VeCSVR_b_ST2InpSpdFA_write'
     */
    /* Gateway: FsftCSVR_n_ST2InpSpd/FsftCSVR_n_ST2InpSpdChrt */
    /* During: FsftCSVR_n_ST2InpSpd/FsftCSVR_n_ST2InpSpdChrt */
    /* Entry Internal: FsftCSVR_n_ST2InpSpd/FsftCSVR_n_ST2InpSpdChrt */
    /* Transition: '<S731>:2' */
    Rte_IrvWrite_FsftCSVR_n_ST2InpSpd_ST2InpSpdFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_n_ST2InpSpd' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_n_TOSSnsrSpdRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_n_TOSSnsrSpdRaw' */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S21>/FsftCSVR_n_TOSSnsrSpdRawChrt'
     *  SignalConversion generated from: '<S21>/VeCSVR_b_TOSSnsrSpdRawFA_write'
     */
    /* Gateway: FsftCSVR_n_TOSSnsrSpdRaw/FsftCSVR_n_TOSSnsrSpdRawChrt */
    /* During: FsftCSVR_n_TOSSnsrSpdRaw/FsftCSVR_n_TOSSnsrSpdRawChrt */
    /* Entry Internal: FsftCSVR_n_TOSSnsrSpdRaw/FsftCSVR_n_TOSSnsrSpdRawChrt */
    /* Transition: '<S732>:2' */
    Rte_IrvWrite_FsftCSVR_n_TOSSnsrSpdRaw_TOSSnsrSpdRawFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_n_TOSSnsrSpdRaw' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_v_CanSigVehSpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_v_CanSigVehSpd' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S22>/FsftCSVR_v_CanSigVehSpdChrt'
     *  SignalConversion generated from: '<S22>/VeCSVR_b_CanSigVehSpdFA_write'
     */
    /* Gateway: FsftCSVR_v_CanSigVehSpd/FsftCSVR_v_CanSigVehSpdChrt */
    /* During: FsftCSVR_v_CanSigVehSpd/FsftCSVR_v_CanSigVehSpdChrt */
    /* Entry Internal: FsftCSVR_v_CanSigVehSpd/FsftCSVR_v_CanSigVehSpdChrt */
    /* Transition: '<S733>:2' */
    Rte_IrvWrite_FsftCSVR_v_CanSigVehSpd_CanVehSpdFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_v_CanSigVehSpd' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_v_CanSigVehSpd_CANC2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_v_CanSigVehSpd_CANC2' */
    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S23>/FsftCSVR_v_CanSigVehSpd_CANC2Chrt'
     *  SignalConversion generated from: '<S23>/VeCSVR_b_CanSigVehSpd_CANC2FA_write'
     */
    /* Gateway: FsftCSVR_v_CanSigVehSpd_CANC2/FsftCSVR_v_CanSigVehSpd_CANC2Chrt */
    /* During: FsftCSVR_v_CanSigVehSpd_CANC2/FsftCSVR_v_CanSigVehSpd_CANC2Chrt */
    /* Entry Internal: FsftCSVR_v_CanSigVehSpd_CANC2/FsftCSVR_v_CanSigVehSpd_CANC2Chrt */
    /* Transition: '<S734>:2' */
    Rte_IrvWrite_FsftCSVR_v_CanSigVehSpd_CANC2_CanVehSpdFA_CANC2_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_v_CanSigVehSpd_CANC2' */
}

/* Output function */
FUNC(void, CSVR_CODE) FsftCSVR_v_RefVehSpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftCSVR_v_RefVehSpd' */
    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S24>/FsftCSVR_v_RefVehSpdChrt'
     *  SignalConversion generated from: '<S24>/VeCSVR_b_RefVehSpdFA_write'
     */
    /* Gateway: FsftCSVR_v_RefVehSpd/FsftCSVR_v_RefVehSpdChrt */
    /* During: FsftCSVR_v_RefVehSpd/FsftCSVR_v_RefVehSpdChrt */
    /* Entry Internal: FsftCSVR_v_RefVehSpd/FsftCSVR_v_RefVehSpdChrt */
    /* Transition: '<S735>:2' */
    Rte_IrvWrite_FsftCSVR_v_RefVehSpd_RefVehSpdFA_Init_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftCSVR_v_RefVehSpd' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_b_VehSpdVSOSigFailSts(VAR(boolean, AUTOMATIC)
    LeCSVR_b_VehSpdVSOSigFailSts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_b_VehSpdVSOSigFailSts' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S25>/LeCSVR_b_VehSpdVSOSigFailSts'
     *  SignalConversion generated from: '<S25>/VeCSVR_b_VehSpdVSOSigFailSts_write'
     */
    /* Gateway: PokeCSVR_b_VehSpdVSOSigFailSts/PokeCSVR_b_VehSpdVSOSigFailStsChrt */
    /* During: PokeCSVR_b_VehSpdVSOSigFailSts/PokeCSVR_b_VehSpdVSOSigFailStsChrt */
    /* Entry Internal: PokeCSVR_b_VehSpdVSOSigFailSts/PokeCSVR_b_VehSpdVSOSigFailStsChrt */
    /* Transition: '<S736>:2' */
    Rte_IrvWrite_PokeCSVR_b_VehSpdVSOSigFailSts_VehSpdVSOSigFailSts_Init_write_IRV
        (LeCSVR_b_VehSpdVSOSigFailSts);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_b_VehSpdVSOSigFailSts' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_b_VehSpdVSOSigFailSts_CANC2(VAR(boolean,
    AUTOMATIC) LeCSVR_b_VehSpdVSOSigFailSts_CANC2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_b_VehSpdVSOSigFailSts_CANC2' */
    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S26>/PokeCSVR_b_VehSpdVSOSigFailSts_CANC2Chrt'
     *  SignalConversion generated from: '<S26>/VeCSVR_b_VehSpdVSOSigFailSts_CANC2Sgnl_Rcvd_write'
     */
    /* Gateway: PokeCSVR_b_VehSpdVSOSigFailSts_CANC2/PokeCSVR_b_VehSpdVSOSigFailSts_CANC2Chrt */
    /* During: PokeCSVR_b_VehSpdVSOSigFailSts_CANC2/PokeCSVR_b_VehSpdVSOSigFailSts_CANC2Chrt */
    /* Entry Internal: PokeCSVR_b_VehSpdVSOSigFailSts_CANC2/PokeCSVR_b_VehSpdVSOSigFailSts_CANC2Chrt */
    /* Transition: '<S737>:2' */
    Rte_IrvWrite_PokeCSVR_b_VehSpdVSOSigFailSts_CANC2_VeCSVI_b_VehSpdVSOSigFailStsSR_CANC2_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S26>/LeCSVR_b_VehSpdVSOSigFailSts_CANC2'
     *  SignalConversion generated from: '<S26>/VeCSVR_b_VehSpdVSOSigFailSts_CANC2_write'
     */
    Rte_IrvWrite_PokeCSVR_b_VehSpdVSOSigFailSts_CANC2_VehSpdVSOSigFailSts_CANC2_Init_write_IRV
        (LeCSVR_b_VehSpdVSOSigFailSts_CANC2);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_b_VehSpdVSOSigFailSts_CANC2' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_b_WheelSensorFailStsLHF(VAR(boolean, AUTOMATIC)
    LeCSVR_b_WheelSensorFailStsLHF)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsLHF' */
    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S27>/LeCSVR_b_WheelSensorFailStsLHF'
     *  SignalConversion generated from: '<S27>/VeCSVR_b_WheelSensorFailStsLHF_write'
     */
    /* Gateway: PokeCSVR_b_WheelSensorFailStsLHF/PokeCSVR_b_WheelSensorFailStsLHFChrt */
    /* During: PokeCSVR_b_WheelSensorFailStsLHF/PokeCSVR_b_WheelSensorFailStsLHFChrt */
    /* Entry Internal: PokeCSVR_b_WheelSensorFailStsLHF/PokeCSVR_b_WheelSensorFailStsLHFChrt */
    /* Transition: '<S738>:2' */
    Rte_IrvWrite_PokeCSVR_b_WheelSensorFailStsLHF_WheelSensorFailStsLHF_Init_write_IRV
        (LeCSVR_b_WheelSensorFailStsLHF);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsLHF' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_b_WheelSensorFailStsLHR(VAR(boolean, AUTOMATIC)
    LeCSVR_b_WheelSensorFailStsLHR)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsLHR' */
    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S28>/LeCSVR_b_WheelSensorFailStsLHR'
     *  SignalConversion generated from: '<S28>/VeCSVR_b_WheelSensorFailStsLHR_write'
     */
    /* Gateway: PokeCSVR_b_WheelSensorFailStsLHR/PokeCSVR_b_WheelSensorFailStsLHRChrt */
    /* During: PokeCSVR_b_WheelSensorFailStsLHR/PokeCSVR_b_WheelSensorFailStsLHRChrt */
    /* Entry Internal: PokeCSVR_b_WheelSensorFailStsLHR/PokeCSVR_b_WheelSensorFailStsLHRChrt */
    /* Transition: '<S739>:2' */
    Rte_IrvWrite_PokeCSVR_b_WheelSensorFailStsLHR_WheelSensorFailStsLHR_Init_write_IRV
        (LeCSVR_b_WheelSensorFailStsLHR);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsLHR' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_b_WheelSensorFailStsRHF(VAR(boolean, AUTOMATIC)
    LeCSVR_b_WheelSensorFailStsRHF)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsRHF' */
    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S29>/LeCSVR_b_WheelSensorFailStsRHF'
     *  SignalConversion generated from: '<S29>/VeCSVR_b_WheelSensorFailStsRHF_write'
     */
    /* Gateway: PokeCSVR_b_WheelSensorFailStsRHF/PokeCSVR_b_WheelSensorFailStsRHFChrt */
    /* During: PokeCSVR_b_WheelSensorFailStsRHF/PokeCSVR_b_WheelSensorFailStsRHFChrt */
    /* Entry Internal: PokeCSVR_b_WheelSensorFailStsRHF/PokeCSVR_b_WheelSensorFailStsRHFChrt */
    /* Transition: '<S740>:2' */
    Rte_IrvWrite_PokeCSVR_b_WheelSensorFailStsRHF_WheelSensorFailStsRHF_Init_write_IRV
        (LeCSVR_b_WheelSensorFailStsRHF);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsRHF' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_b_WheelSensorFailStsRHR(VAR(boolean, AUTOMATIC)
    LeCSVR_b_WheelSensorFailStsRHR)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsRHR' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S30>/LeCSVR_b_WheelSensorFailStsRHR'
     *  SignalConversion generated from: '<S30>/VeCSVR_b_WheelSensorFailStsRHR_write'
     */
    /* Gateway: PokeCSVR_b_WheelSensorFailStsRHR/PokeCSVR_b_WheelSensorFailStsRHRChrt */
    /* During: PokeCSVR_b_WheelSensorFailStsRHR/PokeCSVR_b_WheelSensorFailStsRHRChrt */
    /* Entry Internal: PokeCSVR_b_WheelSensorFailStsRHR/PokeCSVR_b_WheelSensorFailStsRHRChrt */
    /* Transition: '<S741>:2' */
    Rte_IrvWrite_PokeCSVR_b_WheelSensorFailStsRHR_WheelSensorFailStsRHR_Init_write_IRV
        (LeCSVR_b_WheelSensorFailStsRHR);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_b_WheelSensorFailStsRHR' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_LeftFrontWhlDir(VAR(TeCSVR_e_Wheel_Direction,
    AUTOMATIC) LeCSVR_e_LeftFrontWhlDir, VAR(boolean, AUTOMATIC)
    LeCSVR_b_LeftFrontWhlDirFA)
{
    boolean rtb_LeCSVR_b_LeftFrontWhlDirFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_LeftFrontWhlDir' */
    /* Chart: '<S31>/PokeCSVR_e_LeftFrontWhlDirChrt' incorporates:
     *  SignalConversion generated from: '<S31>/LeCSVR_b_LeftFrontWhlDirFA'
     *  SignalConversion generated from: '<S31>/LeCSVR_e_LeftFrontWhlDir'
     */
    /* Gateway: PokeCSVR_e_LeftFrontWhlDir/PokeCSVR_e_LeftFrontWhlDirChrt */
    /* During: PokeCSVR_e_LeftFrontWhlDir/PokeCSVR_e_LeftFrontWhlDirChrt */
    /* Entry Internal: PokeCSVR_e_LeftFrontWhlDir/PokeCSVR_e_LeftFrontWhlDirChrt */
    /* Transition: '<S742>:2' */
    if (!LeCSVR_b_LeftFrontWhlDirFA)
    {
        /* Transition: '<S742>:3' */
        /* Transition: '<S742>:15' */
        CSVR_ac_B.LeCSVR_e_LeftFrontWhlDir_out = LeCSVR_e_LeftFrontWhlDir;
        rtb_LeCSVR_b_LeftFrontWhlDirFA_out = false;

        /* Transition: '<S742>:18' */
    }
    else
    {
        /* Transition: '<S742>:4' */
        rtb_LeCSVR_b_LeftFrontWhlDirFA_out = true;
    }

    /* End of Chart: '<S31>/PokeCSVR_e_LeftFrontWhlDirChrt' */

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S31>/VeCSVR_b_LeftFrontWhlDirFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_LeftFrontWhlDir_LeftFrontWhlDir_FA_Init_write_IRV
        (rtb_LeCSVR_b_LeftFrontWhlDirFA_out);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S31>/VeCSVR_e_LeftFrontWhlDir_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_LeftFrontWhlDir_LeftFrontWhlDir_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_LeftFrontWhlDir_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_LeftFrontWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_LeftRearWhlDir(VAR(TeCSVR_e_Wheel_Direction,
    AUTOMATIC) LeCSVR_e_LeftRearWhlDir, VAR(boolean, AUTOMATIC)
    LeCSVR_b_LeftRearWhlDirFA)
{
    boolean rtb_LeCSVR_b_LeftRearWhlDirFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_LeftRearWhlDir' */
    /* Chart: '<S32>/PokeCSVR_e_LeftRearWhlDirChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeCSVR_b_LeftRearWhlDirFA'
     *  SignalConversion generated from: '<S32>/LeCSVR_e_LeftRearWhlDir'
     */
    /* Gateway: PokeCSVR_e_LeftRearWhlDir/PokeCSVR_e_LeftRearWhlDirChrt */
    /* During: PokeCSVR_e_LeftRearWhlDir/PokeCSVR_e_LeftRearWhlDirChrt */
    /* Entry Internal: PokeCSVR_e_LeftRearWhlDir/PokeCSVR_e_LeftRearWhlDirChrt */
    /* Transition: '<S743>:2' */
    if (!LeCSVR_b_LeftRearWhlDirFA)
    {
        /* Transition: '<S743>:3' */
        /* Transition: '<S743>:15' */
        CSVR_ac_B.LeCSVR_e_LeftRearWhlDir_out = LeCSVR_e_LeftRearWhlDir;
        rtb_LeCSVR_b_LeftRearWhlDirFA_out = false;

        /* Transition: '<S743>:18' */
    }
    else
    {
        /* Transition: '<S743>:4' */
        rtb_LeCSVR_b_LeftRearWhlDirFA_out = true;
    }

    /* End of Chart: '<S32>/PokeCSVR_e_LeftRearWhlDirChrt' */

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S32>/VeCSVR_b_LeftRearWhlDirFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_LeftRearWhlDir_LeftRearWhlDir_FA_Init_write_IRV
        (rtb_LeCSVR_b_LeftRearWhlDirFA_out);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S32>/VeCSVR_e_LeftRearWhlDir_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_LeftRearWhlDir_LeftRearWhlDir_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_LeftRearWhlDir_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_LeftRearWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_OutSpdPolarity(VAR(TeCSVR_e_OutSpdDirection,
    AUTOMATIC) LeCSVR_e_OutSpdPolarity, VAR(boolean, AUTOMATIC)
    LeCSVR_b_OutSpdPolarityFA)
{
    boolean rtb_LeCSVR_b_OutSpdPolarityFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_OutSpdPolarity' */
    /* Chart: '<S33>/PokeCSVR_e_OutSpdPolarityChrt' incorporates:
     *  SignalConversion generated from: '<S33>/LeCSVR_b_OutSpdPolarityFA'
     *  SignalConversion generated from: '<S33>/LeCSVR_e_OutSpdPolarity'
     */
    /* Gateway: PokeCSVR_e_OutSpdPolarity/PokeCSVR_e_OutSpdPolarityChrt */
    /* During: PokeCSVR_e_OutSpdPolarity/PokeCSVR_e_OutSpdPolarityChrt */
    /* Entry Internal: PokeCSVR_e_OutSpdPolarity/PokeCSVR_e_OutSpdPolarityChrt */
    /* Transition: '<S744>:2' */
    if (!LeCSVR_b_OutSpdPolarityFA)
    {
        /* Transition: '<S744>:3' */
        /* Transition: '<S744>:15' */
        CSVR_ac_B.LeCSVR_e_OutSpdPolarity_out = LeCSVR_e_OutSpdPolarity;
        rtb_LeCSVR_b_OutSpdPolarityFA_out = false;

        /* Transition: '<S744>:18' */
    }
    else
    {
        /* Transition: '<S744>:4' */
        rtb_LeCSVR_b_OutSpdPolarityFA_out = true;
    }

    /* End of Chart: '<S33>/PokeCSVR_e_OutSpdPolarityChrt' */

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S33>/VeCSVR_b_OutSpdPolarityFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_OutSpdPolarity_OutSpdPolarityFA_initVal_write_IRV
        (rtb_LeCSVR_b_OutSpdPolarityFA_out);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S33>/VeCSVR_e_OutSpdPolarity_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_OutSpdPolarity_OutSpdPolarity_initVal_write_IRV
        (CSVR_ac_B.LeCSVR_e_OutSpdPolarity_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_OutSpdPolarity' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_RightFrontWhlDir(VAR(TeCSVR_e_Wheel_Direction,
    AUTOMATIC) LeCSVR_e_RightFrontWhlDir, VAR(boolean, AUTOMATIC)
    LeCSVR_b_RightFrontWhlDirFA)
{
    boolean rtb_LeCSVR_b_RightFrontWhlDirFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_RightFrontWhlDir' */
    /* Chart: '<S34>/PokeCSVR_e_RightFrontWhlDirChrt' incorporates:
     *  SignalConversion generated from: '<S34>/LeCSVR_b_RightFrontWhlDirFA'
     *  SignalConversion generated from: '<S34>/LeCSVR_e_RightFrontWhlDir'
     */
    /* Gateway: PokeCSVR_e_RightFrontWhlDir/PokeCSVR_e_RightFrontWhlDirChrt */
    /* During: PokeCSVR_e_RightFrontWhlDir/PokeCSVR_e_RightFrontWhlDirChrt */
    /* Entry Internal: PokeCSVR_e_RightFrontWhlDir/PokeCSVR_e_RightFrontWhlDirChrt */
    /* Transition: '<S745>:2' */
    if (!LeCSVR_b_RightFrontWhlDirFA)
    {
        /* Transition: '<S745>:3' */
        /* Transition: '<S745>:15' */
        CSVR_ac_B.LeCSVR_e_RightFrontWhlDir_out = LeCSVR_e_RightFrontWhlDir;
        rtb_LeCSVR_b_RightFrontWhlDirFA_out = false;

        /* Transition: '<S745>:18' */
    }
    else
    {
        /* Transition: '<S745>:4' */
        rtb_LeCSVR_b_RightFrontWhlDirFA_out = true;
    }

    /* End of Chart: '<S34>/PokeCSVR_e_RightFrontWhlDirChrt' */

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S34>/VeCSVR_b_RightFrontWhlDirFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_RightFrontWhlDir_RightFrontWhlDir_FA_Init_write_IRV
        (rtb_LeCSVR_b_RightFrontWhlDirFA_out);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S34>/VeCSVR_e_RightFrontWhlDir_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_RightFrontWhlDir_RightFrontWhlDir_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_RightFrontWhlDir_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_RightFrontWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_RightRearWhlDir(VAR(TeCSVR_e_Wheel_Direction,
    AUTOMATIC) LeCSVR_e_RightRearWhlDir, VAR(boolean, AUTOMATIC)
    LeCSVR_b_RightRearWhlDirFA)
{
    boolean rtb_LeCSVR_b_RightRearWhlDirFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_RightRearWhlDir' */
    /* Chart: '<S35>/PokeCSVR_e_RightRearWhlDirChrt' incorporates:
     *  SignalConversion generated from: '<S35>/LeCSVR_b_RightRearWhlDirFA'
     *  SignalConversion generated from: '<S35>/LeCSVR_e_RightRearWhlDir'
     */
    /* Gateway: PokeCSVR_e_RightRearWhlDir/PokeCSVR_e_RightRearWhlDirChrt */
    /* During: PokeCSVR_e_RightRearWhlDir/PokeCSVR_e_RightRearWhlDirChrt */
    /* Entry Internal: PokeCSVR_e_RightRearWhlDir/PokeCSVR_e_RightRearWhlDirChrt */
    /* Transition: '<S746>:2' */
    if (!LeCSVR_b_RightRearWhlDirFA)
    {
        /* Transition: '<S746>:3' */
        /* Transition: '<S746>:15' */
        CSVR_ac_B.LeCSVR_e_RightRearWhlDir_out = LeCSVR_e_RightRearWhlDir;
        rtb_LeCSVR_b_RightRearWhlDirFA_out = false;

        /* Transition: '<S746>:18' */
    }
    else
    {
        /* Transition: '<S746>:4' */
        rtb_LeCSVR_b_RightRearWhlDirFA_out = true;
    }

    /* End of Chart: '<S35>/PokeCSVR_e_RightRearWhlDirChrt' */

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S35>/VeCSVR_b_RightRearWhlDirFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_RightRearWhlDir_RightRearWhlDir_FA_Init_write_IRV
        (rtb_LeCSVR_b_RightRearWhlDirFA_out);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S35>/VeCSVR_e_RightRearWhlDir_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_RightRearWhlDir_RightRearWhlDir_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_RightRearWhlDir_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_RightRearWhlDir' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_THA_STAT(VAR(TeCSVR_e_THA_STAT, AUTOMATIC)
    LeCSVR_e_THA_STAT, VAR(boolean, AUTOMATIC) LeCSVR_b_THA_STATFA)
{
    boolean rtb_LeCSVR_b_THA_STATFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_THA_STAT' */
    /* Chart: '<S36>/PokeCSVR_e_THA_STATChrt' incorporates:
     *  SignalConversion generated from: '<S36>/LeCSVR_b_THA_STATFA'
     *  SignalConversion generated from: '<S36>/LeCSVR_e_THA_STAT'
     */
    /* Gateway: PokeCSVR_e_THA_STAT/PokeCSVR_e_THA_STATChrt */
    /* During: PokeCSVR_e_THA_STAT/PokeCSVR_e_THA_STATChrt */
    /* Entry Internal: PokeCSVR_e_THA_STAT/PokeCSVR_e_THA_STATChrt */
    /* Transition: '<S747>:2' */
    if (!LeCSVR_b_THA_STATFA)
    {
        /* Transition: '<S747>:3' */
        /* Transition: '<S747>:15' */
        CSVR_ac_B.LeCSVR_e_THA_STAT_out = LeCSVR_e_THA_STAT;
        rtb_LeCSVR_b_THA_STATFA_out_d = false;

        /* Transition: '<S747>:18' */
    }
    else
    {
        /* Transition: '<S747>:4' */
        rtb_LeCSVR_b_THA_STATFA_out_d = true;
    }

    /* End of Chart: '<S36>/PokeCSVR_e_THA_STATChrt' */

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S36>/VeCSVR_b_THA_STATFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_THA_STAT_THA_STATFA_Init_write_IRV
        (rtb_LeCSVR_b_THA_STATFA_out_d);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S36>/VeCSVR_e_THA_STAT_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_THA_STAT_THA_STAT_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_THA_STAT_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_THA_STAT' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_THA_SpdLim(VAR(TeCSVR_e_THA_SpdLim, AUTOMATIC)
    LeCSVR_e_THA_SpdLim, VAR(boolean, AUTOMATIC) LeCSVR_b_THA_SpdLimFA)
{
    boolean rtb_LeCSVR_b_THA_SpdLimFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_THA_SpdLim' */
    /* Chart: '<S37>/PokeCSVR_e_THA_SpdLimChrt' incorporates:
     *  SignalConversion generated from: '<S37>/LeCSVR_b_THA_SpdLimFA'
     *  SignalConversion generated from: '<S37>/LeCSVR_e_THA_SpdLim'
     */
    /* Gateway: PokeCSVR_e_THA_SpdLim/PokeCSVR_e_THA_SpdLimChrt */
    /* During: PokeCSVR_e_THA_SpdLim/PokeCSVR_e_THA_SpdLimChrt */
    /* Entry Internal: PokeCSVR_e_THA_SpdLim/PokeCSVR_e_THA_SpdLimChrt */
    /* Transition: '<S748>:2' */
    if (!LeCSVR_b_THA_SpdLimFA)
    {
        /* Transition: '<S748>:3' */
        /* Transition: '<S748>:15' */
        CSVR_ac_B.LeCSVR_e_THA_SpdLim_out = LeCSVR_e_THA_SpdLim;
        rtb_LeCSVR_b_THA_SpdLimFA_out_d = false;

        /* Transition: '<S748>:18' */
    }
    else
    {
        /* Transition: '<S748>:4' */
        rtb_LeCSVR_b_THA_SpdLimFA_out_d = true;
    }

    /* End of Chart: '<S37>/PokeCSVR_e_THA_SpdLimChrt' */

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S37>/VeCSVR_b_THA_SpdLimFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_THA_SpdLim_THA_SpdLimFA_Init_write_IRV
        (rtb_LeCSVR_b_THA_SpdLimFA_out_d);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S37>/VeCSVR_e_THA_SpdLim_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_THA_SpdLim_THA_SpdLim_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_THA_SpdLim_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_THA_SpdLim' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_TRSC_STAT(VAR(TeCSVR_e_TRSC_STAT, AUTOMATIC)
    LeCSVR_e_TRSC_STAT, VAR(boolean, AUTOMATIC) LeCSVR_e_TRSC_STATFA)
{
    boolean rtb_LeCSVR_b_TRSC_STATFA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_TRSC_STAT' */
    /* Chart: '<S38>/PokeCSVR_e_TRSC_STATChrt' incorporates:
     *  SignalConversion generated from: '<S38>/LeCSVR_b_TRSC_STATFA'
     *  SignalConversion generated from: '<S38>/LeCSVR_e_TRSC_STAT'
     */
    /* Gateway: PokeCSVR_e_TRSC_STAT/PokeCSVR_e_TRSC_STATChrt */
    /* During: PokeCSVR_e_TRSC_STAT/PokeCSVR_e_TRSC_STATChrt */
    /* Entry Internal: PokeCSVR_e_TRSC_STAT/PokeCSVR_e_TRSC_STATChrt */
    /* Transition: '<S749>:2' */
    if (!LeCSVR_e_TRSC_STATFA)
    {
        /* Transition: '<S749>:3' */
        /* Transition: '<S749>:15' */
        CSVR_ac_B.LeCSVR_e_TRSC_STAT_out = LeCSVR_e_TRSC_STAT;
        rtb_LeCSVR_b_TRSC_STATFA_out_c = false;

        /* Transition: '<S749>:18' */
    }
    else
    {
        /* Transition: '<S749>:4' */
        rtb_LeCSVR_b_TRSC_STATFA_out_c = true;
    }

    /* End of Chart: '<S38>/PokeCSVR_e_TRSC_STATChrt' */

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S38>/VeCSVR_b_TRSC_STATFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_TRSC_STAT_TRSC_STATFA_Init_write_IRV
        (rtb_LeCSVR_b_TRSC_STATFA_out_c);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S38>/VeCSVR_e_TRSC_STAT_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_TRSC_STAT_TRSC_STAT_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_TRSC_STAT_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_TRSC_STAT' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_e_TRSC_SpdLimReq(VAR(TeCSVR_e_TRSC_SpdLimReq,
    AUTOMATIC) LeCSVR_e_TRSC_SpdLimReq, VAR(boolean, AUTOMATIC)
    LeCSVR_e_TRSC_SpdLimReqFA)
{
    boolean rtb_LeCSVR_b_TRSC_SpdLimReqFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_e_TRSC_SpdLimReq' */
    /* Chart: '<S39>/PokeCSVR_e_TRSC_SpdLimReqChrt' incorporates:
     *  SignalConversion generated from: '<S39>/LeCSVR_b_TRSC_SpdLimReqFA'
     *  SignalConversion generated from: '<S39>/LeCSVR_e_TRSC_SpdLimReq'
     */
    /* Gateway: PokeCSVR_e_TRSC_SpdLimReq/PokeCSVR_e_TRSC_SpdLimReqChrt */
    /* During: PokeCSVR_e_TRSC_SpdLimReq/PokeCSVR_e_TRSC_SpdLimReqChrt */
    /* Entry Internal: PokeCSVR_e_TRSC_SpdLimReq/PokeCSVR_e_TRSC_SpdLimReqChrt */
    /* Transition: '<S750>:2' */
    if (!LeCSVR_e_TRSC_SpdLimReqFA)
    {
        /* Transition: '<S750>:3' */
        /* Transition: '<S750>:15' */
        CSVR_ac_B.LeCSVR_e_TRSC_SpdLimReq_out = LeCSVR_e_TRSC_SpdLimReq;
        rtb_LeCSVR_b_TRSC_SpdLimReqFA_out_b = false;

        /* Transition: '<S750>:18' */
    }
    else
    {
        /* Transition: '<S750>:4' */
        rtb_LeCSVR_b_TRSC_SpdLimReqFA_out_b = true;
    }

    /* End of Chart: '<S39>/PokeCSVR_e_TRSC_SpdLimReqChrt' */

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S39>/VeCSVR_b_TRSC_SpdLimReqFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_TRSC_SpdLimReq_TRSC_SpdLimReqFA_Init_write_IRV
        (rtb_LeCSVR_b_TRSC_SpdLimReqFA_out_b);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S39>/VeCSVR_e_TRSC_SpdLimReq_write'
     * */
    Rte_IrvWrite_PokeCSVR_e_TRSC_SpdLimReq_TRSC_SpdLimReq_Init_write_IRV
        (CSVR_ac_B.LeCSVR_e_TRSC_SpdLimReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_e_TRSC_SpdLimReq' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_n_LeftFrontWhl(VAR(float32, AUTOMATIC)
    LeCSVR_n_LeftFrontWhl, VAR(boolean, AUTOMATIC) LeCSVR_b_LeftFrontWhlFA)
{
    boolean rtb_LeCSVR_b_LeftFrontWhlFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_n_LeftFrontWhl' */
    /* Chart: '<S40>/PokeCSVR_n_LeftFrontWhlChrt' incorporates:
     *  Constant: '<S751>/Calib'
     *  SignalConversion generated from: '<S40>/LeCSVR_b_LeftFrontWhlFA'
     *  SignalConversion generated from: '<S40>/LeCSVR_n_LeftFrontWhl'
     */
    /* Gateway: PokeCSVR_n_LeftFrontWhl/PokeCSVR_n_LeftFrontWhlChrt */
    /* During: PokeCSVR_n_LeftFrontWhl/PokeCSVR_n_LeftFrontWhlChrt */
    /* Entry Internal: PokeCSVR_n_LeftFrontWhl/PokeCSVR_n_LeftFrontWhlChrt */
    /* Transition: '<S752>:2' */
    if (!LeCSVR_b_LeftFrontWhlFA)
    {
        /* Transition: '<S752>:3' */
        /* Transition: '<S752>:15' */
        CSVR_ac_B.LeCSVR_n_LeftFrontWhl_out = KeCSVR_Cf_SpdScalingFactorLHF *
            LeCSVR_n_LeftFrontWhl;
        rtb_LeCSVR_b_LeftFrontWhlFA_out = false;

        /* Transition: '<S752>:18' */
    }
    else
    {
        /* Transition: '<S752>:4' */
        rtb_LeCSVR_b_LeftFrontWhlFA_out = true;
    }

    /* End of Chart: '<S40>/PokeCSVR_n_LeftFrontWhlChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S40>/VeCSVR_b_LeftFrontWhlFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_LeftFrontWhl_LeftFrontWhlFA_Init_write_IRV
        (rtb_LeCSVR_b_LeftFrontWhlFA_out);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S40>/VeCSVR_n_LeftFrontWhl_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_LeftFrontWhl_LeftFrontWhl_Init_write_IRV
        (CSVR_ac_B.LeCSVR_n_LeftFrontWhl_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_n_LeftFrontWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_n_LeftRearWhl(VAR(float32, AUTOMATIC)
    LeCSVR_n_LeftRearWhl, VAR(boolean, AUTOMATIC) LeCSVR_b_LeftRearWhlFA)
{
    boolean rtb_LeCSVR_b_LeftRearWhlFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_n_LeftRearWhl' */
    /* Chart: '<S41>/PokeCSVR_n_LeftRearWhlChrt' incorporates:
     *  SignalConversion generated from: '<S41>/LeCSVR_b_LeftRearWhlFA'
     *  SignalConversion generated from: '<S41>/LeCSVR_n_LeftRearWhl'
     */
    /* Gateway: PokeCSVR_n_LeftRearWhl/PokeCSVR_n_LeftRearWhlChrt */
    /* During: PokeCSVR_n_LeftRearWhl/PokeCSVR_n_LeftRearWhlChrt */
    /* Entry Internal: PokeCSVR_n_LeftRearWhl/PokeCSVR_n_LeftRearWhlChrt */
    /* Transition: '<S753>:2' */
    if (!LeCSVR_b_LeftRearWhlFA)
    {
        /* Transition: '<S753>:3' */
        /* Transition: '<S753>:15' */
        CSVR_ac_B.LeCSVR_n_LeftRearWhl_out = LeCSVR_n_LeftRearWhl;
        rtb_LeCSVR_b_LeftRearWhlFA_out_g = false;

        /* Transition: '<S753>:18' */
    }
    else
    {
        /* Transition: '<S753>:4' */
        rtb_LeCSVR_b_LeftRearWhlFA_out_g = true;
    }

    /* End of Chart: '<S41>/PokeCSVR_n_LeftRearWhlChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S41>/VeCSVR_b_LeftRearWhlFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_LeftRearWhl_LeftRearWhlFA_Init_write_IRV
        (rtb_LeCSVR_b_LeftRearWhlFA_out_g);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S41>/VeCSVR_n_LeftRearWhl_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_LeftRearWhl_LeftRearWhl_Init_write_IRV
        (CSVR_ac_B.LeCSVR_n_LeftRearWhl_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_n_LeftRearWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_n_Nturb(VAR(float32, AUTOMATIC) LeCSVR_n_Nturb,
    VAR(boolean, AUTOMATIC) LeCSVR_b_NturbFA)
{
    boolean rtb_LeCSVR_b_NturbFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_n_Nturb' */
    /* Chart: '<S42>/PokeCSVR_n_NturbChrt' incorporates:
     *  SignalConversion generated from: '<S42>/LeCSVR_b_NturbFA'
     *  SignalConversion generated from: '<S42>/LeCSVR_n_Nturb'
     */
    /* Gateway: PokeCSVR_n_Nturb/PokeCSVR_n_NturbChrt */
    /* During: PokeCSVR_n_Nturb/PokeCSVR_n_NturbChrt */
    /* Entry Internal: PokeCSVR_n_Nturb/PokeCSVR_n_NturbChrt */
    /* Transition: '<S754>:2' */
    if (!LeCSVR_b_NturbFA)
    {
        /* Transition: '<S754>:3' */
        /* Transition: '<S754>:15' */
        CSVR_ac_B.LeCSVR_n_Nturb_out = LeCSVR_n_Nturb;
        rtb_LeCSVR_b_NturbFA_out_h = false;

        /* Transition: '<S754>:18' */
    }
    else
    {
        /* Transition: '<S754>:4' */
        rtb_LeCSVR_b_NturbFA_out_h = true;
    }

    /* End of Chart: '<S42>/PokeCSVR_n_NturbChrt' */

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S42>/VeCSVR_b_NturbFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_Nturb_NturbFA_Init_write_IRV
        (rtb_LeCSVR_b_NturbFA_out_h);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S42>/VeCSVR_n_Nturb_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_Nturb_Nturb_Init_write_IRV
        (CSVR_ac_B.LeCSVR_n_Nturb_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_n_Nturb' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_n_RightFrontWhl(VAR(float32, AUTOMATIC)
    LeCSVR_n_RightFrontWhl, VAR(boolean, AUTOMATIC) LeCSVR_b_RightFrontWhlFA)
{
    boolean rtb_LeCSVR_b_RightFrontWhlFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_n_RightFrontWhl' */
    /* Chart: '<S43>/PokeCSVR_n_RightFrontWhlChrt' incorporates:
     *  Constant: '<S755>/Calib'
     *  SignalConversion generated from: '<S43>/LeCSVR_b_RightFrontWhlFA'
     *  SignalConversion generated from: '<S43>/LeCSVR_n_RightFrontWhl'
     */
    /* Gateway: PokeCSVR_n_RightFrontWhl/PokeCSVR_n_RightFrontWhlChrt */
    /* During: PokeCSVR_n_RightFrontWhl/PokeCSVR_n_RightFrontWhlChrt */
    /* Entry Internal: PokeCSVR_n_RightFrontWhl/PokeCSVR_n_RightFrontWhlChrt */
    /* Transition: '<S756>:2' */
    if (!LeCSVR_b_RightFrontWhlFA)
    {
        /* Transition: '<S756>:3' */
        /* Transition: '<S756>:15' */
        CSVR_ac_B.LeCSVR_n_RightFrontWhl_out = KeCSVR_Cf_SpdScalingFactorRHF *
            LeCSVR_n_RightFrontWhl;
        rtb_LeCSVR_b_RightFrontWhlFA_out_m = false;

        /* Transition: '<S756>:18' */
    }
    else
    {
        /* Transition: '<S756>:4' */
        rtb_LeCSVR_b_RightFrontWhlFA_out_m = true;
    }

    /* End of Chart: '<S43>/PokeCSVR_n_RightFrontWhlChrt' */

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S43>/VeCSVR_b_RightFrontWhlFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_RightFrontWhl_RightFrontWhlFA_Init_write_IRV
        (rtb_LeCSVR_b_RightFrontWhlFA_out_m);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S43>/VeCSVR_n_RightFrontWhl_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_RightFrontWhl_RightFrontWhl_Init_write_IRV
        (CSVR_ac_B.LeCSVR_n_RightFrontWhl_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_n_RightFrontWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_n_RightRearWhl(VAR(float32, AUTOMATIC)
    LeCSVR_n_RightRearWhl, VAR(boolean, AUTOMATIC) LeCSVR_b_RightRearWhlFA)
{
    boolean rtb_LeCSVR_b_RightRearWhlFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_n_RightRearWhl' */
    /* Chart: '<S44>/PokeCSVR_n_RightRearWhlChrt' incorporates:
     *  SignalConversion generated from: '<S44>/LeCSVR_b_RightRearWhlFA'
     *  SignalConversion generated from: '<S44>/LeCSVR_n_RightRearWhl'
     */
    /* Gateway: PokeCSVR_n_RightRearWhl/PokeCSVR_n_RightRearWhlChrt */
    /* During: PokeCSVR_n_RightRearWhl/PokeCSVR_n_RightRearWhlChrt */
    /* Entry Internal: PokeCSVR_n_RightRearWhl/PokeCSVR_n_RightRearWhlChrt */
    /* Transition: '<S757>:2' */
    if (!LeCSVR_b_RightRearWhlFA)
    {
        /* Transition: '<S757>:3' */
        /* Transition: '<S757>:15' */
        CSVR_ac_B.LeCSVR_n_RightRearWhl_out = LeCSVR_n_RightRearWhl;
        rtb_LeCSVR_b_RightRearWhlFA_out_k = false;

        /* Transition: '<S757>:18' */
    }
    else
    {
        /* Transition: '<S757>:4' */
        rtb_LeCSVR_b_RightRearWhlFA_out_k = true;
    }

    /* End of Chart: '<S44>/PokeCSVR_n_RightRearWhlChrt' */

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S44>/VeCSVR_b_RightRearWhlFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_RightRearWhl_RightRearWhlFA_Init_write_IRV
        (rtb_LeCSVR_b_RightRearWhlFA_out_k);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S44>/VeCSVR_n_RightRearWhl_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_RightRearWhl_RightRearWhl_Init_write_IRV
        (CSVR_ac_B.LeCSVR_n_RightRearWhl_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_n_RightRearWhl' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_n_ST2InpSpd(VAR(float32, AUTOMATIC)
    LeCSVR_n_ST2InpSpd, VAR(boolean, AUTOMATIC) LeCSVR_b_ST2InpSpdFA)
{
    boolean rtb_LeCSVR_b_ST2InpSpdFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_n_ST2InpSpd' */
    /* Chart: '<S45>/PokeCSVR_n_ST2InpSpdChrt' incorporates:
     *  SignalConversion generated from: '<S45>/LeCSVR_b_ST2InpSpdFA'
     *  SignalConversion generated from: '<S45>/LeCSVR_n_ST2InpSpd'
     */
    /* Gateway: PokeCSVR_n_ST2InpSpd/PokeCSVR_n_ST2InpSpdChrt */
    /* During: PokeCSVR_n_ST2InpSpd/PokeCSVR_n_ST2InpSpdChrt */
    /* Entry Internal: PokeCSVR_n_ST2InpSpd/PokeCSVR_n_ST2InpSpdChrt */
    /* Transition: '<S758>:2' */
    if (!LeCSVR_b_ST2InpSpdFA)
    {
        /* Transition: '<S758>:3' */
        /* Transition: '<S758>:15' */
        CSVR_ac_B.LeCSVR_n_ST2InpSpd_out = LeCSVR_n_ST2InpSpd;
        rtb_LeCSVR_b_ST2InpSpdFA_out_b = false;

        /* Transition: '<S758>:18' */
    }
    else
    {
        /* Transition: '<S758>:4' */
        rtb_LeCSVR_b_ST2InpSpdFA_out_b = true;
    }

    /* End of Chart: '<S45>/PokeCSVR_n_ST2InpSpdChrt' */

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S45>/VeCSVR_b_ST2InpSpdFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_ST2InpSpd_ST2InpSpdFA_Init_write_IRV
        (rtb_LeCSVR_b_ST2InpSpdFA_out_b);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S45>/VeCSVR_n_ST2InpSpd_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_ST2InpSpd_ST2InpSpd_Init_write_IRV
        (CSVR_ac_B.LeCSVR_n_ST2InpSpd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_n_ST2InpSpd' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_n_TOSSnsrSpdRaw(VAR(float32, AUTOMATIC)
    LeCSVR_n_TOSSnsrSpdRaw, VAR(boolean, AUTOMATIC) LeCSVR_b_TOSSnsrSpdRawFA)
{
    boolean rtb_LeCSVR_b_TOSSnsrSpdRawFA_out_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_n_TOSSnsrSpdRaw' */
    /* Chart: '<S46>/PokeCSVR_n_TOSSnsrSpdRawChrt' incorporates:
     *  SignalConversion generated from: '<S46>/LeCSVR_b_TOSSnsrSpdRawFA'
     *  SignalConversion generated from: '<S46>/LeCSVR_n_TOSSnsrSpdRaw'
     */
    /* Gateway: PokeCSVR_n_TOSSnsrSpdRaw/PokeCSVR_n_TOSSnsrSpdRawChrt */
    /* During: PokeCSVR_n_TOSSnsrSpdRaw/PokeCSVR_n_TOSSnsrSpdRawChrt */
    /* Entry Internal: PokeCSVR_n_TOSSnsrSpdRaw/PokeCSVR_n_TOSSnsrSpdRawChrt */
    /* Transition: '<S759>:2' */
    if (!LeCSVR_b_TOSSnsrSpdRawFA)
    {
        /* Transition: '<S759>:3' */
        /* Transition: '<S759>:15' */
        CSVR_ac_B.LeCSVR_n_TOSSnsrSpdRaw_out = LeCSVR_n_TOSSnsrSpdRaw;
        rtb_LeCSVR_b_TOSSnsrSpdRawFA_out_h = false;

        /* Transition: '<S759>:18' */
    }
    else
    {
        /* Transition: '<S759>:4' */
        rtb_LeCSVR_b_TOSSnsrSpdRawFA_out_h = true;
    }

    /* End of Chart: '<S46>/PokeCSVR_n_TOSSnsrSpdRawChrt' */

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S46>/VeCSVR_b_TOSSnsrSpdRawFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_TOSSnsrSpdRaw_TOSSnsrSpdRawFA_Init_write_IRV
        (rtb_LeCSVR_b_TOSSnsrSpdRawFA_out_h);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S46>/VeCSVR_n_TOSSnsrSpdRaw_write'
     * */
    Rte_IrvWrite_PokeCSVR_n_TOSSnsrSpdRaw_TOS_SnsrSpdRaw_Init_write_IRV
        (CSVR_ac_B.LeCSVR_n_TOSSnsrSpdRaw_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_n_TOSSnsrSpdRaw' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_v_CanSigVehSpd(VAR(float32, AUTOMATIC)
    LeCSVR_v_CanSigVehSpd, VAR(boolean, AUTOMATIC) LeCSVR_b_CanSigVehSpdFA)
{
    boolean rtb_LeCSVR_b_CanSigVehSpdFA_out_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_v_CanSigVehSpd' */
    /* Chart: '<S47>/PokeCSVR_v_CanSigVehSpdChrt' incorporates:
     *  SignalConversion generated from: '<S47>/LeCSVR_b_CanSigVehSpdFA'
     *  SignalConversion generated from: '<S47>/LeCSVR_v_CanSigVehSpd'
     */
    /* Gateway: PokeCSVR_v_CanSigVehSpd/PokeCSVR_v_CanSigVehSpdChrt */
    /* During: PokeCSVR_v_CanSigVehSpd/PokeCSVR_v_CanSigVehSpdChrt */
    /* Entry Internal: PokeCSVR_v_CanSigVehSpd/PokeCSVR_v_CanSigVehSpdChrt */
    /* Transition: '<S760>:2' */
    if (!LeCSVR_b_CanSigVehSpdFA)
    {
        /* Transition: '<S760>:3' */
        /* Transition: '<S760>:15' */
        CSVR_ac_B.LeCSVR_v_CanSigVehSpd_out = LeCSVR_v_CanSigVehSpd;
        rtb_LeCSVR_b_CanSigVehSpdFA_out_d = false;

        /* Transition: '<S760>:18' */
    }
    else
    {
        /* Transition: '<S760>:4' */
        rtb_LeCSVR_b_CanSigVehSpdFA_out_d = true;
    }

    /* End of Chart: '<S47>/PokeCSVR_v_CanSigVehSpdChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S47>/VeCSVR_b_CanSigVehSpdFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_v_CanSigVehSpd_CanVehSpdFA_Init_write_IRV
        (rtb_LeCSVR_b_CanSigVehSpdFA_out_d);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S47>/VeCSVR_v_CanSigVehSpd_write'
     * */
    Rte_IrvWrite_PokeCSVR_v_CanSigVehSpd_CanVehSpd_Init_write_IRV
        (CSVR_ac_B.LeCSVR_v_CanSigVehSpd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_v_CanSigVehSpd' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_v_CanSigVehSpd_CANC2(VAR(float32, AUTOMATIC)
    LeCSVR_v_CanSigVehSpd_CANC2, VAR(boolean, AUTOMATIC)
    LeCSVR_b_CanSigVehSpd_CANC2FA)
{
    boolean rtb_LeCSVR_b_CanSigVehSpd_CANC2FA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_v_CanSigVehSpd_CANC2' */
    /* Chart: '<S48>/PokeCSVR_v_CanSigVehSpd_CANC2Chrt' incorporates:
     *  SignalConversion generated from: '<S48>/LeCSVR_b_CanSigVehSpd_CANC2FA'
     *  SignalConversion generated from: '<S48>/LeCSVR_v_CanSigVehSpd_CANC2'
     */
    /* Gateway: PokeCSVR_v_CanSigVehSpd_CANC2/PokeCSVR_v_CanSigVehSpd_CANC2Chrt */
    /* During: PokeCSVR_v_CanSigVehSpd_CANC2/PokeCSVR_v_CanSigVehSpd_CANC2Chrt */
    /* Entry Internal: PokeCSVR_v_CanSigVehSpd_CANC2/PokeCSVR_v_CanSigVehSpd_CANC2Chrt */
    /* Transition: '<S761>:2' */
    if (!LeCSVR_b_CanSigVehSpd_CANC2FA)
    {
        /* Transition: '<S761>:3' */
        /* Transition: '<S761>:15' */
        CSVR_ac_B.LeCSVR_v_CanSigVehSpd_CANC2_out = LeCSVR_v_CanSigVehSpd_CANC2;
        rtb_LeCSVR_b_CanSigVehSpd_CANC2FA_out_e = false;
        CSVR_ac_B.LeCSVR_b_CanSigVehSpd_CANC2Sgnl_Rcvd = true;

        /* Transition: '<S761>:18' */
    }
    else
    {
        /* Transition: '<S761>:4' */
        rtb_LeCSVR_b_CanSigVehSpd_CANC2FA_out_e = true;
    }

    /* End of Chart: '<S48>/PokeCSVR_v_CanSigVehSpd_CANC2Chrt' */

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S48>/VeCSVR_b_CanSigVehSpd_CANC2FA_write'
     * */
    Rte_IrvWrite_PokeCSVR_v_CanSigVehSpd_CANC2_CanVehSpdFA_CANC2_Init_write_IRV
        (rtb_LeCSVR_b_CanSigVehSpd_CANC2FA_out_e);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S48>/VeCSVR_b_CanSigVehSpd_CANC2Sgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeCSVR_v_CanSigVehSpd_CANC2_VeCSVI_b_CanSigVehSpdSR_CANC2_Init_write_IRV
        (CSVR_ac_B.LeCSVR_b_CanSigVehSpd_CANC2Sgnl_Rcvd);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S48>/VeCSVR_v_CanSigVehSpd_CANC2_write'
     * */
    Rte_IrvWrite_PokeCSVR_v_CanSigVehSpd_CANC2_CanVehSpd_CANC2_Init_write_IRV
        (CSVR_ac_B.LeCSVR_v_CanSigVehSpd_CANC2_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_v_CanSigVehSpd_CANC2' */
}

/* Output function */
FUNC(void, CSVR_CODE) PokeCSVR_v_RefVehSpd(VAR(float32, AUTOMATIC)
    LeCSVR_v_RefVehSpd, VAR(boolean, AUTOMATIC) LeCSVR_b_RefVehSpdFA)
{
    boolean rtb_LeCSVR_b_RefVehSpdFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeCSVR_v_RefVehSpd' */
    /* Chart: '<S49>/PokeCSVR_v_RefVehSpdChrt' incorporates:
     *  SignalConversion generated from: '<S49>/LeCSVR_b_RefVehSpdFA'
     *  SignalConversion generated from: '<S49>/LeCSVR_v_RefVehSpd'
     */
    /* Gateway: PokeCSVR_v_RefVehSpd/PokeCSVR_v_RefVehSpdChrt */
    /* During: PokeCSVR_v_RefVehSpd/PokeCSVR_v_RefVehSpdChrt */
    /* Entry Internal: PokeCSVR_v_RefVehSpd/PokeCSVR_v_RefVehSpdChrt */
    /* Transition: '<S762>:2' */
    if (!LeCSVR_b_RefVehSpdFA)
    {
        /* Transition: '<S762>:3' */
        /* Transition: '<S762>:15' */
        CSVR_ac_B.LeCSVR_v_RefVehSpd_out = LeCSVR_v_RefVehSpd;
        rtb_LeCSVR_b_RefVehSpdFA_out_b = false;

        /* Transition: '<S762>:18' */
    }
    else
    {
        /* Transition: '<S762>:4' */
        rtb_LeCSVR_b_RefVehSpdFA_out_b = true;
    }

    /* End of Chart: '<S49>/PokeCSVR_v_RefVehSpdChrt' */

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S49>/VeCSVR_b_RefVehSpdFA_write'
     * */
    Rte_IrvWrite_PokeCSVR_v_RefVehSpd_RefVehSpdFA_Init_write_IRV
        (rtb_LeCSVR_b_RefVehSpdFA_out_b);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S49>/VeCSVR_v_RefVehSpd_write'
     * */
    Rte_IrvWrite_PokeCSVR_v_RefVehSpd_RefVehSpd_Init_write_IRV
        (CSVR_ac_B.LeCSVR_v_RefVehSpd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeCSVR_v_RefVehSpd' */
}

/* Output function */
FUNC(void, CSVR_CODE) CSVR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/CSVR_PwrOff'
     */
    /* Outport: '<Root>/NeCSVR_e_MIL_LightRequest_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSVR_e_MIL_LightRequest'
     */
    (void)Rte_Write_NeCSVR_e_MIL_LightRequest_NeCSVR_e_MIL_LightRequest
        (CSVR_ac_DW.NeCSVR_e_MIL_LightRequest);

    /* Outport: '<Root>/NeCSVR_l_DistSinceCodeClr_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSVR_l_DistSinceCodeClr'
     */
    (void)Rte_Write_NeCSVR_l_DistSinceCodeClr_NeCSVR_l_DistSinceCodeClr
        (CSVR_ac_DW.NeCSVR_l_DistSinceCodeClr);

    /* Outport: '<Root>/NeCSVR_b_PriorMIL_StatusOn_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSVR_b_PriorMIL_StatusOn'
     */
    (void)Rte_Write_NeCSVR_b_PriorMIL_StatusOn_NeCSVR_b_PriorMIL_StatusOn
        (CSVR_ac_DW.NeCSVR_b_PriorMIL_StatusOn);

    /* Outport: '<Root>/NeCSVR_l_DistTravelMIL_On_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSVR_l_DistTravelMIL_On'
     */
    (void)Rte_Write_NeCSVR_l_DistTravelMIL_On_NeCSVR_l_DistTravelMIL_On
        (CSVR_ac_DW.NeCSVR_l_DistTravelMIL_On);

    /* Outport: '<Root>/NeCSVD_Cnt_FrontAxleRatlFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSVD_Cnt_FrontAxleRatlFlt_MFOP'
     */
    (void)
        Rte_Write_NeCSVD_Cnt_FrontAxleRatlFlt_MFOP_NeCSVD_Cnt_FrontAxleRatlFlt_MFOP
        (CSVR_ac_DW.NeCSVD_Cnt_FrontAxleRatlFlt_MFOP);

    /* Outport: '<Root>/NeCSVD_Cnt_RearAxleRatlFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSVD_Cnt_RearAxleRatlFlt_MFOP'
     */
    (void)
        Rte_Write_NeCSVD_Cnt_RearAxleRatlFlt_MFOP_NeCSVD_Cnt_RearAxleRatlFlt_MFOP
        (CSVR_ac_DW.NeCSVD_Cnt_RearAxleRatlFlt_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, CSVR_CODE) CSVR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CSVR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S663>/NeCSVD_Cnt_RearAxleRatlFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeCSVD_Cnt_RearAxleRatlFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCSVD_Cnt_RearAxleRatlFlt_MFOP_Rx_NeCSVD_Cnt_RearAxleRatlFlt_MFOP
        (&CSVR_ac_DW.NeCSVD_Cnt_RearAxleRatlFlt_MFOP);

    /* DataStoreWrite: '<S663>/NeCSVD_Cnt_FrontAxleRatlFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeCSVD_Cnt_FrontAxleRatlFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeCSVD_Cnt_FrontAxleRatlFlt_MFOP_Rx_NeCSVD_Cnt_FrontAxleRatlFlt_MFOP
        (&CSVR_ac_DW.NeCSVD_Cnt_FrontAxleRatlFlt_MFOP);

    /* DataStoreWrite: '<S663>/NeCSVR_l_DistTravelMIL_On' incorporates:
     *  Inport: '<Root>/NeCSVR_l_DistTravelMIL_On_PM_In'
     */
    (void)Rte_Read_NeCSVR_l_DistTravelMIL_On_Rx_NeCSVR_l_DistTravelMIL_On
        (&CSVR_ac_DW.NeCSVR_l_DistTravelMIL_On);

    /* DataStoreWrite: '<S663>/NeCSVR_b_PriorMIL_StatusOn' incorporates:
     *  Inport: '<Root>/NeCSVR_b_PriorMIL_StatusOn_PM_In'
     */
    (void)Rte_Read_NeCSVR_b_PriorMIL_StatusOn_Rx_NeCSVR_b_PriorMIL_StatusOn
        (&CSVR_ac_DW.NeCSVR_b_PriorMIL_StatusOn);

    /* DataStoreWrite: '<S663>/NeCSVR_l_DistSinceCodeClr' incorporates:
     *  Inport: '<Root>/NeCSVR_l_DistSinceCodeClr_PM_In'
     */
    (void)Rte_Read_NeCSVR_l_DistSinceCodeClr_Rx_NeCSVR_l_DistSinceCodeClr
        (&CSVR_ac_DW.NeCSVR_l_DistSinceCodeClr);

    /* DataStoreWrite: '<S663>/NeCSVR_e_MIL_LightRequest' incorporates:
     *  Inport: '<Root>/NeCSVR_e_MIL_LightRequest_PM_In'
     */
    (void)Rte_Read_NeCSVR_e_MIL_LightRequest_Rx_NeCSVR_e_MIL_LightRequest
        (&CSVR_ac_DW.NeCSVR_e_MIL_LightRequest);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/VSPI_Init_Inputs'
     */

    /* SignalConversion generated from: '<S665>/LeftFrontWhl_Init' */
    CSVR_ac_B.OutportBufferForLeftFrontWhl_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/LeftRearWhl_Init' */
    CSVR_ac_B.OutportBufferForLeftRearWhl_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/RightFrontWhl_Init' */
    CSVR_ac_B.OutportBufferForRightFrontWhl_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/RightRearWhl_Init' */
    CSVR_ac_B.OutportBufferForRightRearWhl_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/LeftFrontWhlFA_Init' incorporates:
     *  Constant: '<S670>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftFrontWhlFA_Init =
        KeCSVR_b_LeftFrontWhlFA_InitVal;

    /* SignalConversion generated from: '<S665>/LeftRearWhlFA_Init' incorporates:
     *  Constant: '<S672>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftRearWhlFA_Init =
        KeCSVR_b_LeftRearWhlFA_InitVal;

    /* SignalConversion generated from: '<S665>/RightFrontWhlFA_Init' incorporates:
     *  Constant: '<S677>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightFrontWhlFA_Init =
        KeCSVR_b_RightFrontWhlFA_InitVal;

    /* SignalConversion generated from: '<S665>/RightRearWhlFA_Init' incorporates:
     *  Constant: '<S679>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightRearWhlFA_Init =
        KeCSVR_b_RightRearWhlFA_InitVal;

    /* SignalConversion generated from: '<S665>/CanVehSpd_Init' */
    CSVR_ac_B.OutportBufferForCanVehSpd_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/CanVehSpdFA_Init' incorporates:
     *  Constant: '<S668>/Calib'
     */
    CSVR_ac_B.OutportBufferForCanVehSpdFA_Init =
        KeCSVR_b_CanSigVehSpd_FA_InitVal;

    /* SignalConversion generated from: '<S665>/RefVehSpd_Init' */
    CSVR_ac_B.OutportBufferForRefVehSpd_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/RefVehSpdFA_Init' incorporates:
     *  Constant: '<S675>/Calib'
     */
    CSVR_ac_B.OutportBufferForRefVehSpdFA_Init = KeCSVR_b_RefVehSpd_FA_InitVal;

    /* SignalConversion generated from: '<S665>/LeftFrontWhlDir_Init' incorporates:
     *  Constant: '<S685>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftFrontWhlDir_Init =
        KeCSVR_e_LeftFrontWhlDir_InitVal;

    /* SignalConversion generated from: '<S665>/RightFrontWhlDir_Init' incorporates:
     *  Constant: '<S688>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightFrontWhlDir_Init =
        KeCSVR_e_RightFrontWhlDir_InitVal;

    /* SignalConversion generated from: '<S665>/LeftRearWhlDir_Init' incorporates:
     *  Constant: '<S686>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftRearWhlDir_Init =
        KeCSVR_e_LeftRearWhlDir_InitVal;

    /* SignalConversion generated from: '<S665>/RightRearWhlDir_Init' incorporates:
     *  Constant: '<S689>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightRearWhlDir_Init =
        KeCSVR_e_RightRearWhlDir_InitVal;

    /* SignalConversion generated from: '<S665>/LeftFrontWhlDir_FA_Init' incorporates:
     *  Constant: '<S669>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftFrontWhlDir_FA_Init =
        KeCSVR_b_LeftFrontWhlDir_FA_InitVal;

    /* SignalConversion generated from: '<S665>/LeftRearWhlDir_FA_Init' incorporates:
     *  Constant: '<S671>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftRearWhlDir_FA_Init =
        KeCSVR_b_LeftRearWhlDir_FA_InitVal;

    /* SignalConversion generated from: '<S665>/RightFrontWhlDir_FA_Init' incorporates:
     *  Constant: '<S676>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightFrontWhlDir_FA_Init =
        KeCSVR_b_RightFrontWhlDir_FA_InitVal;

    /* SignalConversion generated from: '<S665>/RightRearWhlDir_FA_Init' incorporates:
     *  Constant: '<S678>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightRearWhlDir_FA_Init =
        KeCSVR_b_RightRearWhlDir_FA_InitVal;

    /* SignalConversion generated from: '<S665>/OutSpdPolarity_initVal' incorporates:
     *  Constant: '<S687>/Calib'
     */
    CSVR_ac_B.OutportBufferForOutSpdPolarity_initVal =
        KeCSVR_e_OutSpdPolarity_initVal;

    /* SignalConversion generated from: '<S665>/OutSpdPolarityFA_initVal' incorporates:
     *  Constant: '<S674>/Calib'
     */
    CSVR_ac_B.OutportBufferForOutSpdPolarityFA_initVal =
        KeCSVR_b_OutSpdPolarityFA_initVal;

    /* SignalConversion generated from: '<S665>/TOS_SnsrSpdRaw_Init' */
    CSVR_ac_B.OutportBufferForTOS_SnsrSpdRaw_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/TOSSnsrSpdRawFA_Init' incorporates:
     *  Constant: '<S680>/Calib'
     */
    CSVR_ac_B.OutportBufferForTOSSnsrSpdRawFA_Init = KeCSVR_b_TOSSnsrRawFA_Init;

    /* SignalConversion generated from: '<S665>/Nturb_Init' */
    CSVR_ac_B.OutportBufferForNturb_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/NturbFA_Init' incorporates:
     *  Constant: '<S673>/Calib'
     */
    CSVR_ac_B.OutportBufferForNturbFA_Init = KeCSVR_b_NTurbFA_Init;

    /* SignalConversion generated from: '<S665>/ST2InpSpd_Init' incorporates:
     *  Constant: '<S694>/Calib'
     */
    CSVR_ac_B.OutportBufferForST2InpSpd_Init = KeCSVR_n_ST2InpSpd_init;

    /* SignalConversion generated from: '<S665>/ST2InpSpdFA_Init' */
    CSVR_ac_B.OutportBufferForST2InpSpdFA_Init = false;

    /* SignalConversion generated from: '<S665>/VehSpdVSOSigFailSts_Init' */
    CSVR_ac_B.OutportBufferForVehSpdVSOSigFailSts_Init = false;

    /* SignalConversion generated from: '<S665>/CanVehSpd_CANC2_Init' */
    CSVR_ac_B.OutportBufferForCanVehSpd_CANC2_Init = 0.0F;

    /* SignalConversion generated from: '<S665>/CanVehSpdFA_CANC2_Init' incorporates:
     *  Constant: '<S667>/Calib'
     */
    CSVR_ac_B.OutportBufferForCanVehSpdFA_CANC2_Init =
        KeCSVR_b_CanSigVehSpd_CANC2_FA_InitVal;

    /* SignalConversion generated from: '<S665>/VehSpdVSOSigFailSts_CANC2_Init' */
    CSVR_ac_B.OutportBufferForVehSpdVSOSigFailSts_CANC = false;

    /* SignalConversion generated from: '<S665>/VeCSVI_b_CanSigVehSpdSR_CANC2_Init' */
    CSVR_ac_B.OutportBufferForVeCSVI_b_CanSigVehSpdSR_ = false;

    /* SignalConversion generated from: '<S665>/VeCSVI_b_VehSpdVSOSigFailStsSR_CANC2_Init' */
    CSVR_ac_B.OutportBufferForVeCSVI_b_VehSpdVSOSigFai = false;

    /* SignalConversion generated from: '<S665>/WheelSensorFailStsLHF_Init' incorporates:
     *  Constant: '<S681>/Calib'
     */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsLHF_In =
        KeCSVR_b_WheelSensorFailStsLHF_InitVal;

    /* SignalConversion generated from: '<S665>/WheelSensorFailStsLHR_Init' incorporates:
     *  Constant: '<S682>/Calib'
     */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsLHR_In =
        KeCSVR_b_WheelSensorFailStsLHR_InitVal;

    /* SignalConversion generated from: '<S665>/WheelSensorFailStsRHF_Init' incorporates:
     *  Constant: '<S683>/Calib'
     */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsRHF_In =
        KeCSVR_b_WheelSensorFailStsRHF_InitVal;

    /* SignalConversion generated from: '<S665>/WheelSensorFailStsRHR_Init' incorporates:
     *  Constant: '<S684>/Calib'
     */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsRHR_In =
        KeCSVR_b_WheelSensorFailStsRHR_InitVal;

    /* SignalConversion generated from: '<S665>/THA_STAT_InitVal' incorporates:
     *  Constant: '<S690>/Calib'
     */
    CSVR_ac_B.OutportBufferForTHA_STAT_InitVal = KeCSVR_e_THA_STAT_Init;

    /* SignalConversion generated from: '<S665>/THA_SpdLim_InitVal' incorporates:
     *  Constant: '<S691>/Calib'
     */
    CSVR_ac_B.OutportBufferForTHA_SpdLim_InitVal = KeCSVR_e_THA_SpdLim_Init;

    /* SignalConversion generated from: '<S665>/TRSC_STAT_InitVal' incorporates:
     *  Constant: '<S692>/Calib'
     */
    CSVR_ac_B.OutportBufferForTRSC_STAT_InitVal = KeCSVR_e_TRSC_STAT_Init;

    /* SignalConversion generated from: '<S665>/TRSC_SpdLimReq_InitVal' incorporates:
     *  Constant: '<S693>/Calib'
     */
    CSVR_ac_B.OutportBufferForTRSC_SpdLimReq_InitVal =
        KeCSVR_e_TRSC_SpdLimReq_Init;

    /* SignalConversion generated from: '<S665>/THA_STATFA_InitVal' */
    CSVR_ac_B.OutportBufferForTHA_STATFA_InitVal = false;

    /* SignalConversion generated from: '<S665>/THA_SpdLimFA_InitVal' */
    CSVR_ac_B.OutportBufferForTHA_SpdLimFA_InitVal = false;

    /* SignalConversion generated from: '<S665>/TRSC_STATFA_InitVal' */
    CSVR_ac_B.OutportBufferForTRSC_STATFA_InitVal = false;

    /* SignalConversion generated from: '<S665>/TRSC_SpdLimReqFA_InitVal' */
    CSVR_ac_B.OutportBufferForTRSC_SpdLimReqFA_InitVal = false;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S664>/VeCSVR_n_FrontAxlSpdSgndFltrd_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_FrontAxlSpdSgnd = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_FrontAxlSpdSrc_Out_Init' incorporates:
     *  Constant: '<S664>/Const2'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontAxlSpdSrc_ = CSVR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_FrontAxlSpdFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_FrontAxlSpdFA_O = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_RearAxlSpdSgndFltrd_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_RearAxlSpdSgndF = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_RearAxlSpdSrc_Out_Init' incorporates:
     *  Constant: '<S664>/Const5'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearAxlSpdSrc_O = CSVR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_RearAxlSpdFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_RearAxlSpdFA_Ou = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_TransOutSpdSgndFltrd_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_TransOutSpdSgnd = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_TransOutSpdFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_TransOutSpdFA_O = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_VehSpdSigned_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_VehSpdSigned_Ou = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_VehSpdSrc_Out_Init' incorporates:
     *  Constant: '<S664>/Const10'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_VehSpdSrc_Out_I = CSVR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_VehSpdFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_VehSpdFA_Out_In = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_ReferenceNo_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_ReferenceNo_Out = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_ReferenceNoFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_ReferenceNoFA_O = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_DsblFrontAxlSpdRatCheck_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_DsblFrontAxlSpd = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_FrontAxleRatlFlt_FltDtct_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_FrontAxleRatlFl = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_l_DistSinceCodeClr_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_l_DistSinceCodeCl = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_l_DistTravelMIL_On_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_l_DistTravelMIL_O = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_PrimWhlSpdSignedFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_PrimWhlSpdSigne = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_PrimWhlSpdSigned_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_PrimWhlSpdSigne = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_dn_FrontAxlSpddot_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_dn_FrontAxlSpddot = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_dn_TransOutSpddot_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_dn_TransOutSpddot = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_dn_RearAxlSpddot_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_dn_RearAxlSpddot_ = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_a_VehAccel_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_a_VehAccel_Out_In = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_NTurbArb_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_NTurbArb_Out_In = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_NTurbFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_NTurbFA_Out_Ini = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_FrontAxlSpdSgndRaw_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_FrontAxlSpdSg_c = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_RearAxlSpdSgndRaw_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_RearAxlSpdSgndR = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_TransOutSpdSgndRaw_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_TransOutSpdSg_c = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_VehSpd_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_VehSpd_Out_Init = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_LeftFrontWheel_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_LeftFrontWheel_ = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_RightFrontWheel_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_RightFrontWheel = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_TOS_VS_WhlError_Out_Init' incorporates:
     *  Constant: '<S664>/Const32'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TOS_VS_WhlError = CSVR_ac_ConstB.Const32;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_TOS_DirectionError_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_TOS_DirectionEr = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_CanSigVehSpd_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_CanSigVehSpd_Ou = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_l_WhlRadius_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_l_WhlRadius_Out_I = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_NTurbSrcArb_Out_Init' incorporates:
     *  Constant: '<S664>/Const36'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_NTurbSrcArb_Out = CSVR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_NTurbArbFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_NTurbArbFA_Out_ = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_ST2InpSpd_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_ST2InpSpd_Out_I = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_ST2InpSpdFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_ST2InpSpdFA_Out = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_VehSpdVSOSigFailSts_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_VehSpdVSOSigFai = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_CanSigVehSpd_FA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_CanSigVehSpd_FA = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_TransOutSpdDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const42'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TransOutSpdDir_ = CSVR_ac_ConstB.Const42;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_VehSpdRaw_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_VehSpdRaw_Out_I = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_WhlSpdLHF_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdLHF_Out_I = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_WhlSpdLHR_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdLHR_Out_I = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_WhlSpdRHF_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdRHF_Out_I = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_WhlSpdRHR_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdRHR_Out_I = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WhlSpdLHF_FA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdLHF_FA_Ou = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WhlSpdLHR_FA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdLHR_FA_Ou = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WhlSpdRHF_FA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdRHF_FA_Ou = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WhlSpdRHR_FA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdRHR_FA_Ou = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WheelSensorFailStsLHF_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFail = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WheelSensorFailStsLHR_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFa_a = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WheelSensorFailStsRHF_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFa_i = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_WheelSensorFailStsRHR_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFa_k = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_FrontAxlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const56'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontAxlDir_Out = CSVR_ac_ConstB.Const56;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_RearAxlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const57'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearAxlDir_Out_ = CSVR_ac_ConstB.Const57;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_LeftRearWheel_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_LeftRearWheel_O = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_v_RightRearWheel_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_v_RightRearWheel_ = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_FrontLeftWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const60'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontLeftWhlDir = CSVR_ac_ConstB.Const60;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_RearLeftWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const61'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearLeftWhlDir_ = CSVR_ac_ConstB.Const61;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_FrontRightWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const62'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontRightWhlDi = CSVR_ac_ConstB.Const62;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_RearRightWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const63'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearRightWhlDir = CSVR_ac_ConstB.Const63;

    /* SignalConversion generated from: '<S664>/VeCSVR_b_SecWhlSpdSignedFA_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_b_SecWhlSpdSigned = false;

    /* SignalConversion generated from: '<S664>/VeCSVR_n_SecWhlSpdSigned_Out_Init' */
    CSVR_ac_B.OutportBufferForVeCSVR_n_SecWhlSpdSigned = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVC_v_VehSpd_write' */
    CSVR_ac_B.OutportBufferForVeCSVC_v_VehSpd_write = 0.0F;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_FaultSts_VehSpd_OSS_Corr' incorporates:
     *  Constant: '<S666>/Constant'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FaultSts_VehSpd = CSVR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_THA_Response_Out_Init' incorporates:
     *  Constant: '<S664>/Const67'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_THA_Response_Ou = CSVR_ac_ConstB.Const67;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_TRSC_Response_Out_Init' incorporates:
     *  Constant: '<S664>/Const68'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TRSC_Response_O = CSVR_ac_ConstB.Const68;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_THA_SpdLimInt_Out_Init' incorporates:
     *  Constant: '<S664>/Const69'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_THA_SpdLimInt_O = CSVR_ac_ConstB.Const69;

    /* SignalConversion generated from: '<S664>/VeCSVR_e_TRSC_SpdLimReqInt_Out_Init' incorporates:
     *  Constant: '<S664>/Const70'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TRSC_SpdLimReqI = CSVR_ac_ConstB.Const70;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeCSVR_e_FaultSts_VehSpd_OSS_Corr' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeCSVR_e_FaultSts_VehSpd_OSS_Corr'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_FaultSts_VehSpd_OSS_Corr'
     */
    (void)Rte_Write_VeCSVR_e_FaultSts_VehSpd_OSS_Corr_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_FaultSts_VehSpd);

    /* Outport: '<Root>/VeCSVR_a_VehAccel' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_a_VehAccel_Out_Init'
     */
    (void)Rte_Write_VeCSVR_a_VehAccel_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_a_VehAccel_Out_In);

    /* Outport: '<Root>/VeCSVR_b_CanSigVehSpd_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_CanSigVehSpd_FA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_CanSigVehSpd_FA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_CanSigVehSpd_FA);

    /* Outport: '<Root>/VeCSVR_b_DsblFrontAxlSpdRatCheck' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_DsblFrontAxlSpdRatCheck_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_DsblFrontAxlSpdRatCheck_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_DsblFrontAxlSpd);

    /* Outport: '<Root>/VeCSVR_b_FrontAxlSpdFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_FrontAxlSpdFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_FrontAxlSpdFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_FrontAxlSpdFA_O);

    /* Outport: '<Root>/VeCSVR_b_FrontAxleRatlFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_FrontAxleRatlFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_FrontAxleRatlFlt_FltDtct_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_FrontAxleRatlFl);

    /* Outport: '<Root>/VeCSVR_b_NTurbArbFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_NTurbArbFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_NTurbArbFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_NTurbArbFA_Out_);

    /* Outport: '<Root>/VeCSVR_b_NTurbFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_NTurbFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_NTurbFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_NTurbFA_Out_Ini);

    /* Outport: '<Root>/VeCSVR_b_PrimWhlSpdSignedFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_PrimWhlSpdSignedFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_PrimWhlSpdSignedFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_PrimWhlSpdSigne);

    /* Outport: '<Root>/VeCSVR_b_RearAxlSpdFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_RearAxlSpdFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_RearAxlSpdFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_RearAxlSpdFA_Ou);

    /* Outport: '<Root>/VeCSVR_b_ReferenceNoFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_ReferenceNoFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_ReferenceNoFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_ReferenceNoFA_O);

    /* Outport: '<Root>/VeCSVR_b_ST2InpSpdFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_ST2InpSpdFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_ST2InpSpdFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_ST2InpSpdFA_Out);

    /* Outport: '<Root>/VeCSVR_b_SecWhlSpdSignedFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_SecWhlSpdSignedFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_SecWhlSpdSignedFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_SecWhlSpdSigned);

    /* Outport: '<Root>/VeCSVR_b_TOS_DirectionError' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_TOS_DirectionError_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_TOS_DirectionError_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_TOS_DirectionEr);

    /* Outport: '<Root>/VeCSVR_b_TransOutSpdFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_TransOutSpdFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_TransOutSpdFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_TransOutSpdFA_O);

    /* Outport: '<Root>/VeCSVR_b_VehSpdFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_VehSpdFA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_VehSpdFA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_VehSpdFA_Out_In);

    /* Outport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_VehSpdVSOSigFailSts_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_VehSpdVSOSigFailSts_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_VehSpdVSOSigFai);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsLHF' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WheelSensorFailStsLHF_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsLHF_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFail);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsLHR' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WheelSensorFailStsLHR_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsLHR_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFa_a);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsRHF' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WheelSensorFailStsRHF_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsRHF_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFa_i);

    /* Outport: '<Root>/VeCSVR_b_WheelSensorFailStsRHR' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WheelSensorFailStsRHR_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WheelSensorFailStsRHR_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WheelSensorFa_k);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdLHF_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WhlSpdLHF_FA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdLHF_FA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdLHF_FA_Ou);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdLHR_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WhlSpdLHR_FA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdLHR_FA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdLHR_FA_Ou);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdRHF_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WhlSpdRHF_FA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdRHF_FA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdRHF_FA_Ou);

    /* Outport: '<Root>/VeCSVR_b_WhlSpdRHR_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_b_WhlSpdRHR_FA_Out_Init'
     */
    (void)Rte_Write_VeCSVR_b_WhlSpdRHR_FA_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_b_WhlSpdRHR_FA_Ou);

    /* Outport: '<Root>/VeCSVR_dn_FrontAxlSpddot' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_dn_FrontAxlSpddot_Out_Init'
     */
    (void)Rte_Write_VeCSVR_dn_FrontAxlSpddot_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_dn_FrontAxlSpddot);

    /* Outport: '<Root>/VeCSVR_dn_RearAxlSpddot' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_dn_RearAxlSpddot_Out_Init'
     */
    (void)Rte_Write_VeCSVR_dn_RearAxlSpddot_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_dn_RearAxlSpddot_);

    /* Outport: '<Root>/VeCSVR_dn_TransOutSpddot' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_dn_TransOutSpddot_Out_Init'
     */
    (void)Rte_Write_VeCSVR_dn_TransOutSpddot_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_dn_TransOutSpddot);

    /* Outport: '<Root>/VeCSVR_e_FrontAxlDir' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_FrontAxlDir_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_FrontAxlDir_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_FrontAxlDir_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_FrontAxlDir_Out);

    /* Outport: '<Root>/VeCSVR_e_FrontAxlSpdSrc' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_FrontAxlSpdSrc_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_FrontAxlSpdSrc_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_FrontAxlSpdSrc_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_FrontAxlSpdSrc_);

    /* Outport: '<Root>/VeCSVR_e_FrontLeftWhlDir' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_FrontLeftWhlDir_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_FrontLeftWhlDir_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_FrontLeftWhlDir_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_FrontLeftWhlDir);

    /* Outport: '<Root>/VeCSVR_e_FrontRightWhlDir' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_FrontRightWhlDir_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_FrontRightWhlDir_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_FrontRightWhlDir_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_FrontRightWhlDi);

    /* Outport: '<Root>/VeCSVR_e_NTurbSrcArb' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_NTurbSrcArb_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_NTurbSrcArb_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_NTurbSrcArb_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_NTurbSrcArb_Out);

    /* Outport: '<Root>/VeCSVR_e_RearAxlDir' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_RearAxlDir_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_RearAxlDir_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_RearAxlDir_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_RearAxlDir_Out_);

    /* Outport: '<Root>/VeCSVR_e_RearAxlSpdSrc' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_RearAxlSpdSrc_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_RearAxlSpdSrc_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_RearAxlSpdSrc_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_RearAxlSpdSrc_O);

    /* Outport: '<Root>/VeCSVR_e_RearLeftWhlDir' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_RearLeftWhlDir_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_RearLeftWhlDir_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_RearLeftWhlDir_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_RearLeftWhlDir_);

    /* Outport: '<Root>/VeCSVR_e_RearRightWhlDir' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_RearRightWhlDir_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_RearRightWhlDir_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_RearRightWhlDir_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_RearRightWhlDir);

    /* Outport: '<Root>/VeCSVR_e_THA_RespEVCU2' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_THA_Response_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_THA_Response_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_THA_RespEVCU2_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_THA_Response_Ou);

    /* Outport: '<Root>/VeCSVR_e_THA_SpdLimInt' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_THA_SpdLimInt_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_THA_SpdLimInt_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_THA_SpdLimInt_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_THA_SpdLimInt_O);

    /* Outport: '<Root>/VeCSVR_e_TOS_VS_WhlError' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_TOS_VS_WhlError_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_TOS_VS_WhlError_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_TOS_VS_WhlError_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_TOS_VS_WhlError);

    /* Outport: '<Root>/VeCSVR_e_TRSC_RespEVCU2' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_TRSC_Response_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_TRSC_Response_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_TRSC_RespEVCU2_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_TRSC_Response_O);

    /* Outport: '<Root>/VeCSVR_e_TRSC_SpdLimReqInt' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_TRSC_SpdLimReqInt_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_TRSC_SpdLimReqInt_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_TRSC_SpdLimReqInt_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_TRSC_SpdLimReqI);

    /* Outport: '<Root>/VeCSVR_e_TransOutSpdDir' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_TransOutSpdDir_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_TransOutSpdDir_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_TransOutSpdDir_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_TransOutSpdDir_);

    /* Outport: '<Root>/VeCSVR_e_VehSpdSrc' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_e_VehSpdSrc_Out_Init'
     *  SignalConversion generated from: '<S664>/VeCSVR_e_VehSpdSrc_Out_Init'
     */
    (void)Rte_Write_VeCSVR_e_VehSpdSrc_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_e_VehSpdSrc_Out_I);

    /* Outport: '<Root>/VeCSVR_l_DistSinceCodeClr' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_l_DistSinceCodeClr_Out_Init'
     */
    (void)Rte_Write_VeCSVR_l_DistSinceCodeClr_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_l_DistSinceCodeCl);

    /* Outport: '<Root>/VeCSVR_l_DistTravelMIL_On' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_l_DistTravelMIL_On_Out_Init'
     */
    (void)Rte_Write_VeCSVR_l_DistTravelMIL_On_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_l_DistTravelMIL_O);

    /* Outport: '<Root>/VeCSVR_l_WhlRadius' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_l_WhlRadius_Out_Init'
     */
    (void)Rte_Write_VeCSVR_l_WhlRadius_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_l_WhlRadius_Out_I);

    /* Outport: '<Root>/VeCSVR_n_FrontAxlSpdSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_FrontAxlSpdSgndFltrd_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_FrontAxlSpdSgndFltrd_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_FrontAxlSpdSgnd);

    /* Outport: '<Root>/VeCSVR_n_FrontAxlSpdSgndRaw' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_FrontAxlSpdSgndRaw_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_FrontAxlSpdSgndRaw_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_FrontAxlSpdSg_c);

    /* Outport: '<Root>/VeCSVR_n_NTurbArb' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_NTurbArb_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_NTurbArb_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_NTurbArb_Out_In);

    /* Outport: '<Root>/VeCSVR_n_PrimWhlSpdSigned' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_PrimWhlSpdSigned_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_PrimWhlSpdSigned_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_PrimWhlSpdSigne);

    /* Outport: '<Root>/VeCSVR_n_RearAxlSpdSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_RearAxlSpdSgndFltrd_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_RearAxlSpdSgndFltrd_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_RearAxlSpdSgndF);

    /* Outport: '<Root>/VeCSVR_n_RearAxlSpdSgndRaw' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_RearAxlSpdSgndRaw_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_RearAxlSpdSgndRaw_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_RearAxlSpdSgndR);

    /* Outport: '<Root>/VeCSVR_n_ReferenceNo' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_ReferenceNo_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_ReferenceNo_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_ReferenceNo_Out);

    /* Outport: '<Root>/VeCSVR_n_ST2InpSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_ST2InpSpd_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_ST2InpSpd_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_ST2InpSpd_Out_I);

    /* Outport: '<Root>/VeCSVR_n_SecWhlSpdSigned' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_SecWhlSpdSigned_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_SecWhlSpdSigned_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_SecWhlSpdSigned);

    /* Outport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_TransOutSpdSgndFltrd_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_TransOutSpdSgnd);

    /* Outport: '<Root>/VeCSVR_n_TransOutSpdSgndRaw' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_TransOutSpdSgndRaw_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_TransOutSpdSgndRaw_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_TransOutSpdSg_c);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdLHF' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_WhlSpdLHF_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdLHF_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdLHF_Out_I);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdLHR' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_WhlSpdLHR_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdLHR_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdLHR_Out_I);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdRHF' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_WhlSpdRHF_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdRHF_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdRHF_Out_I);

    /* Outport: '<Root>/VeCSVR_n_WhlSpdRHR' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_n_WhlSpdRHR_Out_Init'
     */
    (void)Rte_Write_VeCSVR_n_WhlSpdRHR_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_n_WhlSpdRHR_Out_I);

    /* Outport: '<Root>/VeCSVR_v_CanSigVehSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_CanSigVehSpd_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_CanSigVehSpd_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_CanSigVehSpd_Ou);

    /* Outport: '<Root>/VeCSVR_v_LeftFrontWheel' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_LeftFrontWheel_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_LeftFrontWheel_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_LeftFrontWheel_);

    /* Outport: '<Root>/VeCSVR_v_LeftRearWheel' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_LeftRearWheel_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_LeftRearWheel_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_LeftRearWheel_O);

    /* Outport: '<Root>/VeCSVR_v_RightFrontWheel' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_RightFrontWheel_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_RightFrontWheel_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_RightFrontWheel);

    /* Outport: '<Root>/VeCSVR_v_RightRearWheel' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_RightRearWheel_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_RightRearWheel_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_RightRearWheel_);

    /* Outport: '<Root>/VeCSVR_v_VehSpdRaw' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_VehSpdRaw_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_VehSpdRaw_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_VehSpdRaw_Out_I);

    /* Outport: '<Root>/VeCSVR_v_VehSpdSigned' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_VehSpdSigned_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_VehSpdSigned_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_VehSpdSigned_Ou);

    /* Outport: '<Root>/VeCSVR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVR_v_VehSpd_Out_Init'
     */
    (void)Rte_Write_VeCSVR_v_VehSpd_Value
        (CSVR_ac_B.OutportBufferForVeCSVR_v_VehSpd_Out_Init);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  SignalConversion generated from: '<S4>/CanVehSpdFA_CANC2_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_CanVehSpdFA_CANC2_Init_write_IRV
        (CSVR_ac_B.OutportBufferForCanVehSpdFA_CANC2_Init);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S4>/CanVehSpdFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_CanVehSpdFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForCanVehSpdFA_Init);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S4>/CanVehSpd_CANC2_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_CanVehSpd_CANC2_Init_write_IRV
        (CSVR_ac_B.OutportBufferForCanVehSpd_CANC2_Init);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S4>/CanVehSpd_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_CanVehSpd_Init_write_IRV
        (CSVR_ac_B.OutportBufferForCanVehSpd_Init);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S4>/LeftFrontWhlDir_FA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftFrontWhlDir_FA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftFrontWhlDir_FA_Init);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S4>/LeftFrontWhlDir_Init_write'
     *  SignalConversion generated from: '<S665>/LeftFrontWhlDir_Init'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftFrontWhlDir_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftFrontWhlDir_Init);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S4>/LeftFrontWhlFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftFrontWhlFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftFrontWhlFA_Init);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S4>/LeftFrontWhl_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftFrontWhl_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftFrontWhl_Init);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S4>/LeftRearWhlDir_FA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftRearWhlDir_FA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftRearWhlDir_FA_Init);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S4>/LeftRearWhlDir_Init_write'
     *  SignalConversion generated from: '<S665>/LeftRearWhlDir_Init'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftRearWhlDir_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftRearWhlDir_Init);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S4>/LeftRearWhlFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftRearWhlFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftRearWhlFA_Init);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S4>/LeftRearWhl_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_LeftRearWhl_Init_write_IRV
        (CSVR_ac_B.OutportBufferForLeftRearWhl_Init);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S4>/NturbFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_NturbFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForNturbFA_Init);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S4>/Nturb_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_Nturb_Init_write_IRV
        (CSVR_ac_B.OutportBufferForNturb_Init);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S4>/OutSpdPolarityFA_initVal_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_OutSpdPolarityFA_initVal_write_IRV
        (CSVR_ac_B.OutportBufferForOutSpdPolarityFA_initVal);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S4>/OutSpdPolarity_initVal_write'
     *  SignalConversion generated from: '<S665>/OutSpdPolarity_initVal'
     * */
    Rte_IrvWrite_CSVR_PwrOn_OutSpdPolarity_initVal_write_IRV
        (CSVR_ac_B.OutportBufferForOutSpdPolarity_initVal);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  SignalConversion generated from: '<S4>/RefVehSpdFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RefVehSpdFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRefVehSpdFA_Init);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S4>/RefVehSpd_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RefVehSpd_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRefVehSpd_Init);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S4>/RightFrontWhlDir_FA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightFrontWhlDir_FA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightFrontWhlDir_FA_Init);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S4>/RightFrontWhlDir_Init_write'
     *  SignalConversion generated from: '<S665>/RightFrontWhlDir_Init'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightFrontWhlDir_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightFrontWhlDir_Init);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S4>/RightFrontWhlFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightFrontWhlFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightFrontWhlFA_Init);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S4>/RightFrontWhl_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightFrontWhl_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightFrontWhl_Init);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S4>/RightRearWhlDir_FA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightRearWhlDir_FA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightRearWhlDir_FA_Init);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S4>/RightRearWhlDir_Init_write'
     *  SignalConversion generated from: '<S665>/RightRearWhlDir_Init'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightRearWhlDir_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightRearWhlDir_Init);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S4>/RightRearWhlFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightRearWhlFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightRearWhlFA_Init);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S4>/RightRearWhl_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_RightRearWhl_Init_write_IRV
        (CSVR_ac_B.OutportBufferForRightRearWhl_Init);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S4>/ST2InpSpdFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_ST2InpSpdFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForST2InpSpdFA_Init);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S4>/ST2InpSpd_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_ST2InpSpd_Init_write_IRV
        (CSVR_ac_B.OutportBufferForST2InpSpd_Init);

    /* Merge: '<Root>/Merge_44' incorporates:
     *  SignalConversion generated from: '<S4>/THA_STATFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_THA_STATFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTHA_STATFA_InitVal);

    /* Merge: '<Root>/Merge_43' incorporates:
     *  SignalConversion generated from: '<S4>/THA_STAT_Init_write'
     *  SignalConversion generated from: '<S665>/THA_STAT_InitVal'
     * */
    Rte_IrvWrite_CSVR_PwrOn_THA_STAT_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTHA_STAT_InitVal);

    /* Merge: '<Root>/Merge_42' incorporates:
     *  SignalConversion generated from: '<S4>/THA_SpdLimFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_THA_SpdLimFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTHA_SpdLimFA_InitVal);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S4>/THA_SpdLim_Init_write'
     *  SignalConversion generated from: '<S665>/THA_SpdLim_InitVal'
     * */
    Rte_IrvWrite_CSVR_PwrOn_THA_SpdLim_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTHA_SpdLim_InitVal);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S4>/TOSSnsrSpdRawFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_TOSSnsrSpdRawFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTOSSnsrSpdRawFA_Init);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S4>/TOS_SnsrSpdRaw_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_TOS_SnsrSpdRaw_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTOS_SnsrSpdRaw_Init);

    /* Merge: '<Root>/Merge_48' incorporates:
     *  SignalConversion generated from: '<S4>/TRSC_STATFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_TRSC_STATFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTRSC_STATFA_InitVal);

    /* Merge: '<Root>/Merge_47' incorporates:
     *  SignalConversion generated from: '<S4>/TRSC_STAT_Init_write'
     *  SignalConversion generated from: '<S665>/TRSC_STAT_InitVal'
     * */
    Rte_IrvWrite_CSVR_PwrOn_TRSC_STAT_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTRSC_STAT_InitVal);

    /* Merge: '<Root>/Merge_46' incorporates:
     *  SignalConversion generated from: '<S4>/TRSC_SpdLimReqFA_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_TRSC_SpdLimReqFA_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTRSC_SpdLimReqFA_InitVal);

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S4>/TRSC_SpdLimReq_Init_write'
     *  SignalConversion generated from: '<S665>/TRSC_SpdLimReq_InitVal'
     * */
    Rte_IrvWrite_CSVR_PwrOn_TRSC_SpdLimReq_Init_write_IRV
        (CSVR_ac_B.OutportBufferForTRSC_SpdLimReq_InitVal);

    /* Merge: '<Root>/VeCSVC_v_VehSpd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVC_v_VehSpd_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_VeCSVC_v_VehSpd_write_IRV
        (CSVR_ac_B.OutportBufferForVeCSVC_v_VehSpd_write);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVI_b_CanSigVehSpdSR_CANC2_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_VeCSVI_b_CanSigVehSpdSR_CANC2_Init_write_IRV
        (CSVR_ac_B.OutportBufferForVeCSVI_b_CanSigVehSpdSR_);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSVI_b_VehSpdVSOSigFailStsSR_CANC2_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_VeCSVI_b_VehSpdVSOSigFailStsSR_CANC2_Init_write_IRV
        (CSVR_ac_B.OutportBufferForVeCSVI_b_VehSpdVSOSigFai);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S4>/VehSpdVSOSigFailSts_CANC2_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_VehSpdVSOSigFailSts_CANC2_Init_write_IRV
        (CSVR_ac_B.OutportBufferForVehSpdVSOSigFailSts_CANC);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S4>/VehSpdVSOSigFailSts_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_VehSpdVSOSigFailSts_Init_write_IRV
        (CSVR_ac_B.OutportBufferForVehSpdVSOSigFailSts_Init);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S4>/WheelSensorFailStsLHF_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_WheelSensorFailStsLHF_Init_write_IRV
        (CSVR_ac_B.OutportBufferForWheelSensorFailStsLHF_In);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S4>/WheelSensorFailStsLHR_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_WheelSensorFailStsLHR_Init_write_IRV
        (CSVR_ac_B.OutportBufferForWheelSensorFailStsLHR_In);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S4>/WheelSensorFailStsRHF_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_WheelSensorFailStsRHF_Init_write_IRV
        (CSVR_ac_B.OutportBufferForWheelSensorFailStsRHF_In);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S4>/WheelSensorFailStsRHR_Init_write'
     * */
    Rte_IrvWrite_CSVR_PwrOn_WheelSensorFailStsRHR_Init_write_IRV
        (CSVR_ac_B.OutportBufferForWheelSensorFailStsRHR_In);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CSVR_CODE) CSVR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        CSVR_ac_B.OutportBufferForVeCSVR_e_NTurbSrcArb_Out =
            CeCSVR_e_NturbFromCAN;
        CSVR_ac_B.OutportBufferForVeCSVR_e_RearAxlSpdSrc_O =
            CeCSVR_e_NoValidRASSrcAvail;
        CSVR_ac_B.OutportBufferForVeCSVR_e_FrontAxlSpdSrc_ =
            CeCSVR_e_NoValidFASSrcAvail;
    }

    CSVR_ac_PrevZCX.CSVR_ClearCodes1000ms_Trig_ZCE = POS_ZCSIG;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CSVR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/VSPI_Init_Inputs'
     */

    /* SystemInitialize for SignalConversion generated from: '<S665>/LeftFrontWhlFA_Init' */
    CSVR_ac_B.OutportBufferForLeftFrontWhlFA_Init =
        KeCSVR_b_LeftFrontWhlFA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/LeftRearWhlFA_Init' */
    CSVR_ac_B.OutportBufferForLeftRearWhlFA_Init =
        KeCSVR_b_LeftRearWhlFA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/RightFrontWhlFA_Init' */
    CSVR_ac_B.OutportBufferForRightFrontWhlFA_Init =
        KeCSVR_b_RightFrontWhlFA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/RightRearWhlFA_Init' */
    CSVR_ac_B.OutportBufferForRightRearWhlFA_Init =
        KeCSVR_b_RightRearWhlFA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/CanVehSpdFA_Init' */
    CSVR_ac_B.OutportBufferForCanVehSpdFA_Init =
        KeCSVR_b_CanSigVehSpd_FA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/RefVehSpdFA_Init' */
    CSVR_ac_B.OutportBufferForRefVehSpdFA_Init = KeCSVR_b_RefVehSpd_FA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/LeftFrontWhlDir_Init' incorporates:
     *  Constant: '<S685>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftFrontWhlDir_Init =
        KeCSVR_e_LeftFrontWhlDir_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/RightFrontWhlDir_Init' incorporates:
     *  Constant: '<S688>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightFrontWhlDir_Init =
        KeCSVR_e_RightFrontWhlDir_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/LeftRearWhlDir_Init' incorporates:
     *  Constant: '<S686>/Calib'
     */
    CSVR_ac_B.OutportBufferForLeftRearWhlDir_Init =
        KeCSVR_e_LeftRearWhlDir_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/RightRearWhlDir_Init' incorporates:
     *  Constant: '<S689>/Calib'
     */
    CSVR_ac_B.OutportBufferForRightRearWhlDir_Init =
        KeCSVR_e_RightRearWhlDir_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/LeftFrontWhlDir_FA_Init' */
    CSVR_ac_B.OutportBufferForLeftFrontWhlDir_FA_Init =
        KeCSVR_b_LeftFrontWhlDir_FA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/LeftRearWhlDir_FA_Init' */
    CSVR_ac_B.OutportBufferForLeftRearWhlDir_FA_Init =
        KeCSVR_b_LeftRearWhlDir_FA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/RightFrontWhlDir_FA_Init' */
    CSVR_ac_B.OutportBufferForRightFrontWhlDir_FA_Init =
        KeCSVR_b_RightFrontWhlDir_FA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/RightRearWhlDir_FA_Init' */
    CSVR_ac_B.OutportBufferForRightRearWhlDir_FA_Init =
        KeCSVR_b_RightRearWhlDir_FA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/OutSpdPolarity_initVal' incorporates:
     *  Constant: '<S687>/Calib'
     */
    CSVR_ac_B.OutportBufferForOutSpdPolarity_initVal =
        KeCSVR_e_OutSpdPolarity_initVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/OutSpdPolarityFA_initVal' */
    CSVR_ac_B.OutportBufferForOutSpdPolarityFA_initVal =
        KeCSVR_b_OutSpdPolarityFA_initVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/TOSSnsrSpdRawFA_Init' */
    CSVR_ac_B.OutportBufferForTOSSnsrSpdRawFA_Init = KeCSVR_b_TOSSnsrRawFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S665>/NturbFA_Init' */
    CSVR_ac_B.OutportBufferForNturbFA_Init = KeCSVR_b_NTurbFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S665>/ST2InpSpd_Init' */
    CSVR_ac_B.OutportBufferForST2InpSpd_Init = KeCSVR_n_ST2InpSpd_init;

    /* SystemInitialize for SignalConversion generated from: '<S665>/CanVehSpdFA_CANC2_Init' */
    CSVR_ac_B.OutportBufferForCanVehSpdFA_CANC2_Init =
        KeCSVR_b_CanSigVehSpd_CANC2_FA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/WheelSensorFailStsLHF_Init' */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsLHF_In =
        KeCSVR_b_WheelSensorFailStsLHF_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/WheelSensorFailStsLHR_Init' */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsLHR_In =
        KeCSVR_b_WheelSensorFailStsLHR_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/WheelSensorFailStsRHF_Init' */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsRHF_In =
        KeCSVR_b_WheelSensorFailStsRHF_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/WheelSensorFailStsRHR_Init' */
    CSVR_ac_B.OutportBufferForWheelSensorFailStsRHR_In =
        KeCSVR_b_WheelSensorFailStsRHR_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S665>/THA_STAT_InitVal' incorporates:
     *  Constant: '<S690>/Calib'
     */
    CSVR_ac_B.OutportBufferForTHA_STAT_InitVal = KeCSVR_e_THA_STAT_Init;

    /* SystemInitialize for SignalConversion generated from: '<S665>/THA_SpdLim_InitVal' incorporates:
     *  Constant: '<S691>/Calib'
     */
    CSVR_ac_B.OutportBufferForTHA_SpdLim_InitVal = KeCSVR_e_THA_SpdLim_Init;

    /* SystemInitialize for SignalConversion generated from: '<S665>/TRSC_STAT_InitVal' incorporates:
     *  Constant: '<S692>/Calib'
     */
    CSVR_ac_B.OutportBufferForTRSC_STAT_InitVal = KeCSVR_e_TRSC_STAT_Init;

    /* SystemInitialize for SignalConversion generated from: '<S665>/TRSC_SpdLimReq_InitVal' incorporates:
     *  Constant: '<S693>/Calib'
     */
    CSVR_ac_B.OutportBufferForTRSC_SpdLimReq_InitVal =
        KeCSVR_e_TRSC_SpdLimReq_Init;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_FrontAxlSpdSrc_Out_Init' incorporates:
     *  Constant: '<S664>/Const2'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontAxlSpdSrc_ = CSVR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_RearAxlSpdSrc_Out_Init' incorporates:
     *  Constant: '<S664>/Const5'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearAxlSpdSrc_O = CSVR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_VehSpdSrc_Out_Init' incorporates:
     *  Constant: '<S664>/Const10'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_VehSpdSrc_Out_I = CSVR_ac_ConstB.Const10;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_TOS_VS_WhlError_Out_Init' incorporates:
     *  Constant: '<S664>/Const32'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TOS_VS_WhlError = CSVR_ac_ConstB.Const32;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_NTurbSrcArb_Out_Init' incorporates:
     *  Constant: '<S664>/Const36'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_NTurbSrcArb_Out = CSVR_ac_ConstB.Const36;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_TransOutSpdDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const42'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TransOutSpdDir_ = CSVR_ac_ConstB.Const42;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_FrontAxlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const56'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontAxlDir_Out = CSVR_ac_ConstB.Const56;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_RearAxlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const57'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearAxlDir_Out_ = CSVR_ac_ConstB.Const57;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_FrontLeftWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const60'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontLeftWhlDir = CSVR_ac_ConstB.Const60;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_RearLeftWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const61'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearLeftWhlDir_ = CSVR_ac_ConstB.Const61;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_FrontRightWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const62'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FrontRightWhlDi = CSVR_ac_ConstB.Const62;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_RearRightWhlDir_Out_Init' incorporates:
     *  Constant: '<S664>/Const63'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_RearRightWhlDir = CSVR_ac_ConstB.Const63;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_FaultSts_VehSpd_OSS_Corr' incorporates:
     *  Constant: '<S666>/Constant'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_FaultSts_VehSpd = CSVR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_THA_Response_Out_Init' incorporates:
     *  Constant: '<S664>/Const67'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_THA_Response_Ou = CSVR_ac_ConstB.Const67;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_TRSC_Response_Out_Init' incorporates:
     *  Constant: '<S664>/Const68'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TRSC_Response_O = CSVR_ac_ConstB.Const68;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_THA_SpdLimInt_Out_Init' incorporates:
     *  Constant: '<S664>/Const69'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_THA_SpdLimInt_O = CSVR_ac_ConstB.Const69;

    /* SystemInitialize for SignalConversion generated from: '<S664>/VeCSVR_e_TRSC_SpdLimReqInt_Out_Init' incorporates:
     *  Constant: '<S664>/Const70'
     */
    CSVR_ac_B.OutportBufferForVeCSVR_e_TRSC_SpdLimReqI = CSVR_ac_ConstB.Const70;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_FrontAxlSpdSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeCSVR_e_FrontAxlSpdSrc_Value(CeCSVR_e_NoValidFASSrcAvail);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_RearAxlSpdSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeCSVR_e_RearAxlSpdSrc_Value(CeCSVR_e_NoValidRASSrcAvail);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_VehSpdSrc' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeCSVR_e_VehSpdSrc_Value(CeCSVR_e_VehSpdFrmCAN);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_TOS_VS_WhlError' incorporates:
     *  Merge: '<Root>/Merge_Outport_32'
     */
    (void)Rte_Write_VeCSVR_e_TOS_VS_WhlError_Value(CeCSVR_e_TOS_VS_WhlUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_NTurbSrcArb' incorporates:
     *  Merge: '<Root>/Merge_Outport_36'
     */
    (void)Rte_Write_VeCSVR_e_NTurbSrcArb_Value(CeCSVR_e_NturbFromCAN);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_TransOutSpdDir' incorporates:
     *  Merge: '<Root>/Merge_Outport_42'
     */
    (void)Rte_Write_VeCSVR_e_TransOutSpdDir_Value(CeCSVR_e_WheelDirectionUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_FrontAxlDir' incorporates:
     *  Merge: '<Root>/Merge_Outport_56'
     */
    (void)Rte_Write_VeCSVR_e_FrontAxlDir_Value(CeCSVR_e_WheelDirectionUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_RearAxlDir' incorporates:
     *  Merge: '<Root>/Merge_Outport_57'
     */
    (void)Rte_Write_VeCSVR_e_RearAxlDir_Value(CeCSVR_e_WheelDirectionUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_FrontLeftWhlDir' incorporates:
     *  Merge: '<Root>/Merge_Outport_60'
     */
    (void)Rte_Write_VeCSVR_e_FrontLeftWhlDir_Value
        (CeCSVR_e_WheelDirectionUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_RearLeftWhlDir' incorporates:
     *  Merge: '<Root>/Merge_Outport_61'
     */
    (void)Rte_Write_VeCSVR_e_RearLeftWhlDir_Value(CeCSVR_e_WheelDirectionUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_FrontRightWhlDir' incorporates:
     *  Merge: '<Root>/Merge_Outport_62'
     */
    (void)Rte_Write_VeCSVR_e_FrontRightWhlDir_Value
        (CeCSVR_e_WheelDirectionUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_RearRightWhlDir' incorporates:
     *  Merge: '<Root>/Merge_Outport_63'
     */
    (void)Rte_Write_VeCSVR_e_RearRightWhlDir_Value
        (CeCSVR_e_WheelDirectionUnknown);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_FaultSts_VehSpd_OSS_Corr' incorporates:
     *  Merge: '<Root>/M_VeCSVR_e_FaultSts_VehSpd_OSS_Corr'
     */
    (void)Rte_Write_VeCSVR_e_FaultSts_VehSpd_OSS_Corr_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_THA_RespEVCU2' incorporates:
     *  Merge: '<Root>/Merge_Outport_16'
     */
    (void)Rte_Write_VeCSVR_e_THA_RespEVCU2_Value(CeCSVR_e_THAr_Off);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_TRSC_RespEVCU2' incorporates:
     *  Merge: '<Root>/Merge_Outport_17'
     */
    (void)Rte_Write_VeCSVR_e_TRSC_RespEVCU2_Value(CeCSVR_e_TRSCr_Off);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_THA_SpdLimInt' incorporates:
     *  Merge: '<Root>/Merge_Outport_66'
     */
    (void)Rte_Write_VeCSVR_e_THA_SpdLimInt_Value(CeCSVR_e_THAsl_NoRequest);

    /* SystemInitialize for Outport: '<Root>/VeCSVR_e_TRSC_SpdLimReqInt' incorporates:
     *  Merge: '<Root>/Merge_Outport_67'
     */
    (void)Rte_Write_VeCSVR_e_TRSC_SpdLimReqInt_Value
        (CeCSVR_e_TRSCslr_NotLimiting);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
