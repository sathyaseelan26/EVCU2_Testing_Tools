/*
 * File: MSPR_ac.c
 *
 * Code generated for Simulink model 'MSPR_ac'.
 *
 * Model version                  : 9.83
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:29:43 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MSPR_ac.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_MSPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeMSPR_e_VehSpeedPrioritySrc, MSPR_VAR_INIT)
    KaMSPR_e_BEVMtrASpdSrcPriority[2] =
{
    CeMSPR_e_VehSpeedPrioritySrc_PrimWhlSpd, CeMSPR_e_VehSpeedPrioritySrc_VehSpd
};                                     /* Referenced by: '<S168>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(TeMSPR_e_VehSpeedPrioritySrc, MSPR_VAR_INIT)
    KaMSPR_e_BEVMtrCSpdSrcPriority[2] =
{
    CeMSPR_e_VehSpeedPrioritySrc_PrimWhlSpd, CeMSPR_e_VehSpeedPrioritySrc_VehSpd
};                                     /* Referenced by: '<S323>/Calib' */

#endif

static volatile CONST(TeMSPR_e_EngSpeedPrioritySrc, MSPR_VAR_INIT)
    KaMSPR_e_MtrASpdSrcPriority[2] =
{
    CeMSPR_e_EngSpeedPrioritySrc_CANEngSpd, CeMSPR_e_EngSpeedPrioritySrc_BuffCrk
};                                     /* Referenced by: '<S157>/Calib' */

static volatile CONST(TeMSPR_e_EngSpeedPrioritySrc, MSPR_VAR_INIT)
    KaMSPR_e_MtrBSpdSrcPriority[2] =
{
    CeMSPR_e_EngSpeedPrioritySrc_CANEngSpd, CeMSPR_e_EngSpeedPrioritySrc_BuffCrk
};                                     /* Referenced by:
                                        * '<S244>/Calib'
                                        * '<S267>/Calib'
                                        */

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_CnvrtToMtrASpd =
    78.4757F;                          /* Referenced by: '<S177>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_CnvrtToMtrCSpd =
    78.4757F;                          /* Referenced by: '<S334>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_CnvrtWhlSpdToMtrASpd =
    78.4757F;                          /* Referenced by: '<S179>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_CnvrtWhlSpdToMtrCSpd =
    78.4757F;                          /* Referenced by: '<S339>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_MaxP1SpeedLimOff =
    78.4757F;                          /* Referenced by: '<S96>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_MaxP2SpeedLimOff =
    78.4757F;                          /* Referenced by: '<S111>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_P1BEMF2Rpm = 78.4757F;/* Referenced by: '<S97>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cf_P2BEMF2Rpm = 78.4757F;/* Referenced by: '<S112>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrAAccelMinWaitTime =
    615U;                              /* Referenced by: '<S119>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrASpdMinWaitTime =
    615U;                              /* Referenced by: '<S141>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrBAccelMinWaitTime =
    615U;                              /* Referenced by: '<S195>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cnt_MtrBCntPerRev = 2048.0F;/* Referenced by: '<S183>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrBPosCntMinWaitTime =
    615U;                              /* Referenced by: '<S184>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cnt_MtrBPosCnt_init =
    2048.0F;                           /* Referenced by: '<S400>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrBSpdMinWaitTime =
    615U;                              /* Referenced by: '<S222>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrCAccelMinWaitTime =
    615U;                              /* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrCSpdLmtMinWaitTime =
    615U;                              /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_MtrCSpdMinWaitTime =
    615U;                              /* Referenced by: '<S311>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_Cnt_OvrrdMtrBPosCntVal =
    2048.0F;                           /* Referenced by: '<S185>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_P1SpdLmtMinWaitTime =
    615U;                              /* Referenced by: '<S91>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT)
    KeMSPR_Cnt_P1SpdLmtMinWaitTime_AltSrc = 615U;/* Referenced by: '<S92>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT) KeMSPR_Cnt_P2SpdLmtMinWaitTime =
    615U;                              /* Referenced by: '<S106>/Calib' */
static volatile CONST(uint16, MSPR_VAR_INIT)
    KeMSPR_Cnt_P2SpdLmtMinWaitTime_AltSrc = 615U;/* Referenced by: '<S107>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_EnblSIEVTReplSpd = 1;/* Referenced by:
                                                                      * '<S158>/Calib'
                                                                      * '<S268>/Calib'
                                                                      */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxMtrCSpdLmtFAOvrd = 0;/* Referenced by: '<S361>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxMtrCSpdLmtFAOvrdVal =
    0;                                 /* Referenced by: '<S362>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxMtrCSpdLmtOvrd = 0;/* Referenced by: '<S363>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP1SpdLmtFAOvrd = 0;/* Referenced by: '<S364>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP1SpdLmtFAOvrdVal = 0;/* Referenced by: '<S365>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP1SpdLmtOvrd = 0;/* Referenced by: '<S366>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP1SpdLmt_DsblArb = 0;/* Referenced by: '<S93>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP2SpdLmtFAOvrd = 0;/* Referenced by: '<S367>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP2SpdLmtFAOvrdVal = 0;/* Referenced by: '<S368>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP2SpdLmtOvrd = 0;/* Referenced by: '<S384>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MaxP2SpdLmt_DsblArb = 0;/* Referenced by: '<S108>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MtrASpdFAOvrd = 0;/* Referenced by: '<S369>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MtrASpdFAOvrdVal = 0;/* Referenced by: '<S370>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MtrBPosCntOvrdEnbl = 0;/* Referenced by: '<S186>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MtrBSpdFAOvrd = 0;/* Referenced by: '<S371>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MtrBSpdFAOvrdVal = 0;/* Referenced by: '<S372>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MtrCSpdFAOvrd = 0;/* Referenced by: '<S373>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_MtrCSpdFAOvrdVal = 0;/* Referenced by: '<S374>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_P2SpdControl_TgtSpdFAOvrd
    = 0;                               /* Referenced by: '<S375>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT)
    KeMSPR_b_P2SpdControl_TgtSpdFAOvrdVal = 0;/* Referenced by: '<S376>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_P2SpdControl_TgtSpdOvrd =
    0;                                 /* Referenced by: '<S377>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_P2Spd_Prfl_EnblOvrd = 0;/* Referenced by: '<S378>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_ReplaceMtrASpdForBEV = 1;/* Referenced by: '<S134>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_ReplaceMtrASpdIfFltd = 1;/* Referenced by: '<S135>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_ReplaceMtrBSpdForP1P2 = 0;/* Referenced by: '<S212>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_ReplaceMtrBSpdForP1P2p5 =
    0;                                 /* Referenced by: '<S213>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_ReplaceMtrBSpdForP1P4 = 0;/* Referenced by: '<S214>/Calib' */
static volatile CONST(boolean, MSPR_VAR_INIT) KeMSPR_b_ReplaceMtrBSpdForSIEVT =
    1;                                 /* Referenced by: '<S215>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrAAccelRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S120>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrAAccelRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S121>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrASpdRate_MaxLmt =
    35.0F;                             /* Referenced by: '<S142>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrASpdRate_MinLmt =
    -35.0F;                            /* Referenced by: '<S143>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrA_Accel_Init = 0.0F;/* Referenced by:
                                                                      * '<S1>/FsftMSPR_cnt_MtrBPosCntChrt'
                                                                      * '<S2>/FsftMSPR_dn_MtrA_AccelRawChrt'
                                                                      * '<S3>/FsftMSPR_dn_MtrB_AccelRawChrt'
                                                                      * '<S401>/Calib'
                                                                      */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrBAccelRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S196>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrBAccelRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S197>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrBSpdRate_MaxLmt =
    35.0F;                             /* Referenced by: '<S223>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrBSpdRate_MinLmt =
    -35.0F;                            /* Referenced by: '<S224>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrB_Accel_Init = 0.0F;/* Referenced by: '<S402>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrCAccelRate_MaxLmt =
    200.0F;                            /* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrCAccelRate_MinLmt =
    -200.0F;                           /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrCSpdRate_MaxLmt =
    35.0F;                             /* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrCSpdRate_MinLmt =
    -35.0F;                            /* Referenced by: '<S313>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_dn_MtrC_Accel_Init = 0.0F;/* Referenced by:
                                                                      * '<S4>/FsftMSPR_dn_MtrC_AccelRawChrt'
                                                                      * '<S403>/Calib'
                                                                      */
static volatile CONST(TeMSPR_e_P2Spd_Prfl_Enbl, MSPR_VAR_INIT)
    KeMSPR_e_P2Spd_Prfl_EnblOvrdVal = CeMSPR_e_P2Spd_Prfl_Not_Enbl;/* Referenced by: '<S379>/Calib' */
static volatile CONST(TeMSPR_e_P2Spd_Prfl_Enbl, MSPR_VAR_INIT)
    KeMSPR_e_P2Spd_Prfl_Enbl_Def = CeMSPR_e_P2Spd_Prfl_Enbl_SNA;/* Referenced by:
                                                                 * '<S5>/FsftMSPR_e_P2Spd_Prfl_EnblChrt'
                                                                 * '<S26>/PokeMSPR_e_P2Spd_Prfl_EnblChrt'
                                                                 */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_k_MtrAAccelFilterConst =
    0.2F;                              /* Referenced by: '<S122>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_k_MtrASpdFilterConst = 0.2F;/* Referenced by: '<S144>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_k_MtrBAccelFilterConst =
    0.2F;                              /* Referenced by: '<S198>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_k_MtrBSpdFilterConst = 0.2F;/* Referenced by: '<S225>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_k_MtrCAccelFilterConst =
    0.2F;                              /* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_k_MtrCSpdFilterConst = 0.2F;/* Referenced by: '<S314>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxMtrCSpdLmtOvrdVal =
    15000.0F;                          /* Referenced by: '<S380>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxMtrCSpdLmt_AltSrc =
    16000.0F;                          /* Referenced by: '<S288>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxMtrCSpdLmt_Init = 1.0F;/* Referenced by:
                                                                      * '<S6>/FsftMSPR_n_MaxMtrCSpdLmtChrt'
                                                                      * '<S404>/Calib'
                                                                      */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxP1SpdLmtOvrdVal =
    15000.0F;                          /* Referenced by: '<S381>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxP1SpdLmt_AltSrc_Init =
    1.0F;                              /* Referenced by: '<S405>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxP1SpdLmt_Init = 1.0F;/* Referenced by:
                                                                      * '<S7>/FsftMSPR_n_MaxP1SpdLmtChrt'
                                                                      * '<S8>/FsftMSPR_n_MaxP1SpdLmt_AltSrcChrt'
                                                                      * '<S406>/Calib'
                                                                      */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxP2SpdLmtOvrdVal =
    15000.0F;                          /* Referenced by: '<S382>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxP2SpdLmt_AltSrc_Init =
    1.0F;                              /* Referenced by: '<S407>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MaxP2SpdLmt_Init = 1.0F;/* Referenced by:
                                                                      * '<S9>/FsftMSPR_n_MaxP2SpdLmtChrt'
                                                                      * '<S10>/FsftMSPR_n_MaxP2SpdLmt_AltSrcChrt'
                                                                      * '<S408>/Calib'
                                                                      */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrAAccel_MaxLmt =
    15000.0F;                          /* Referenced by: '<S123>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrAAccel_MinLmt =
    -15000.0F;                         /* Referenced by: '<S124>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrASpd_Init = 0.0F;/* Referenced by:
                                                                      * '<S11>/FsftMSPR_n_MtrA_SpdRawChrt'
                                                                      * '<S409>/Calib'
                                                                      */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrASpd_MaxLmt = 15000.0F;/* Referenced by: '<S145>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrASpd_MinLmt =
    -15000.0F;                         /* Referenced by: '<S146>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrBAccel_MaxLmt =
    15000.0F;                          /* Referenced by: '<S199>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrBAccel_MinLmt =
    -15000.0F;                         /* Referenced by: '<S200>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrBSpd_Init = 0.0F;/* Referenced by:
                                                                      * '<S12>/FsftMSPR_n_MtrB_SpdRawChrt'
                                                                      * '<S410>/Calib'
                                                                      */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrBSpd_MaxLmt = 15000.0F;/* Referenced by: '<S226>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrBSpd_MinLmt =
    -15000.0F;                         /* Referenced by: '<S227>/Calib' */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrCAccel_MaxLmt =
    15000.0F;                          /* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrCAccel_MinLmt =
    -15000.0F;                         /* Referenced by: '<S290>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrCSpd_Init = 0.0F;/* Referenced by:
                                                                      * '<S13>/FsftMSPR_n_MtrC_SpdRawChrt'
                                                                      * '<S411>/Calib'
                                                                      */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrCSpd_MaxLmt = 15000.0F;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_MtrCSpd_MinLmt =
    -15000.0F;                         /* Referenced by: '<S316>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT)
    KeMSPR_n_P2SpdControl_TgtSpdOvrdVal = 0.0F;/* Referenced by: '<S383>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_P2SpdControl_TgtSpd_Init =
    0.0F;                              /* Referenced by: '<S412>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_n_P2TgtSpd_Init = 0.0F;/* Referenced by: '<S413>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_phi_MtrBAnglePerRev =
    360.0F;                            /* Referenced by: '<S187>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_r_EvenShaftToMotBSpd = 2.5F;/* Referenced by: '<S260>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_r_MtrA2MtrEngRat = 0.24074F;/* Referenced by: '<S269>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_r_MtrB2MtrARat = 0.2971F;/* Referenced by: '<S159>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_r_PlanetaryGrRat = 0.24074F;/* Referenced by: '<S160>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_r_Rat2MtrB = 0.2971F;/* Referenced by: '<S270>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_t_6p25dt = 0.00625F;/* Referenced by:
                                                                      * '<S70>/Calib'
                                                                      * '<S94>/Calib'
                                                                      * '<S109>/Calib'
                                                                      * '<S301>/Calib'
                                                                      */

#if Rte_SysCon_Variant_MSPR_1

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_t_MaxMtrCSpdRamp = 1.0F;/* Referenced by: '<S302>/Calib' */

#endif

static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_t_MaxP1SpdRamp = 1.0F;/* Referenced by: '<S95>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_t_MaxP2SpdRamp = 1.0F;/* Referenced by: '<S110>/Calib' */
static volatile CONST(float32, MSPR_VAR_INIT) KeMSPR_t_MtrSpdTimePeriod =
    0.00625F;                          /* Referenced by: '<S71>/Calib' */

#define STOP_SEC_CALIB_UNSPECIFIED_MSPR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MSPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, MSPR_VAR_INIT) VeMSPC_b_MaxP1SpdLmt_FA;/* '<S73>/Logical' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPC_b_MaxP2SpdLmt_FA;/* '<S74>/Logical' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPC_b_MtrA_Spd_FA;/* '<S76>/Merge3' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPC_b_MtrB_SpdFA;/* '<S79>/Merge3' */

#if Rte_SysCon_Variant_MSPR_1

static VAR(boolean, MSPR_VAR_INIT) VeMSPC_b_MtrCSpd_FA;/* '<S292>/Merge3' */

#endif

static VAR(float32, MSPR_VAR_INIT) VeMSPC_dn_MtrA_AccelRaw;/* '<S117>/Switch1' */
static VAR(float32, MSPR_VAR_INIT) VeMSPC_dn_MtrB_AccelRaw;/* '<S193>/Switch1' */
static VAR(TeMSPR_e_MotorSpeedSrc, MSPR_VAR_INIT) VeMSPC_e_MtrA_Spd_Src;/* '<S76>/Merge1' */
static VAR(TeMSPR_e_MotorSpeedSrc, MSPR_VAR_INIT) VeMSPC_e_MtrBSrc;/* '<S79>/Merge1' */

#if Rte_SysCon_Variant_MSPR_1

static VAR(TeMSPR_e_MotorSpeedSrc, MSPR_VAR_INIT) VeMSPC_e_MtrCSpdSrc;/* '<S292>/Merge1' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static VAR(float32, MSPR_VAR_INIT) VeMSPC_n_MaxMtrCSpdLmt;/* '<S295>/Summation' */

#endif

static VAR(float32, MSPR_VAR_INIT) VeMSPC_n_MaxP1SpdLmt;/* '<S83>/Summation' */
static VAR(float32, MSPR_VAR_INIT) VeMSPC_n_MaxP2SpdLmt;/* '<S98>/Summation' */
static VAR(float32, MSPR_VAR_INIT) VeMSPC_n_MaxP2SpdLmt_AltSrc;/* '<S74>/Switch9' */
static VAR(float32, MSPR_VAR_INIT) VeMSPC_n_MtrA_Spd_Raw;/* '<S76>/Merge2' */
static VAR(float32, MSPR_VAR_INIT) VeMSPC_n_MtrBSpdRaw;/* '<S79>/Merge2' */
static VAR(float32, MSPR_VAR_INIT) VeMSPC_phi_MtrBPosAngle;/* '<S77>/Product' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPR_b_MtrAAccel_Sgnl_Rcvd;/* '<S113>/Greater  Than1' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPR_b_MtrASpd_Sgnl_Rcvd;/* '<S136>/Greater  Than1' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPR_b_MtrBAccel_Sgnl_Rcvd;/* '<S189>/Greater  Than1' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPR_b_MtrBPosCnt_Rcvd;/* '<S181>/Greater  Than1' */
static VAR(boolean, MSPR_VAR_INIT) VeMSPR_b_MtrBSpd_Sgnl_Rcvd;/* '<S217>/Greater  Than1' */

#if Rte_SysCon_Variant_MSPR_1

static VAR(boolean, MSPR_VAR_INIT) VeMSPR_b_MtrCAccel_Sgnl_Rcvd;/* '<S278>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_MSPR_1

static VAR(boolean, MSPR_VAR_INIT) VeMSPR_b_MtrCSpd_Sgnl_Rcvd;/* '<S306>/Greater  Than1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MSPR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_MSPR
#include "MemMap.h"

CONST(ConstB_MSPR_ac_T, MSPR_VAR_INIT) MSPR_ac_ConstB =
{
    CeMSPR_e_P2Spd_Prfl_Not_Enbl,      /* '<S415>/Const13' */
    CeMSPR_e_P2Spd_Prfl_Not_Enbl,      /* '<S399>/Constant' */
    CeMSPR_e_MtrSpSrc_MCP,             /* '<S415>/Const16' */
    CeMSPR_e_MtrSpSrc_MCP,             /* '<S415>/Const17' */
    CeMSPR_e_MtrSpSrc_MCP              /* '<S415>/Const22' */
};

#define STOP_SEC_CONST_UNSPECIFIED_MSPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MSPR
#include "MemMap.h"

VAR(B_MSPR_ac_T, MSPR_VAR_INIT) MSPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MSPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_MSPR
#include "MemMap.h"

VAR(DW_MSPR_ac_T, MSPR_VAR_INIT) MSPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_MSPR
#include "MemMap.h"

static FUNC(void, MSPR_CODE_LOCAL) MSPR_ac_SourcePrioritization(CONST(sint16,
    AUTOMATIC) rtu_LaMSPR_e_MtrBSpdSrcPriority[2], VAR(boolean, AUTOMATIC)
    rtu_VaMSPR_b_MtrBSpdFAMatrix, VAR(boolean, AUTOMATIC)
    rtu_VaMSPR_b_MtrBSpdFAMatrix_d, P2VAR(B_SourcePrioritization_MSPR_a_T,
    AUTOMATIC, MSPR_VAR_INIT) localB);

#if Rte_SysCon_Variant_MSPR_1

static FUNC(void, MSPR_CODE_LOCAL) MSPR_ac_IfActionSubsystem1(P2VAR(float32,
    AUTOMATIC, MSPR_VAR_INIT) rty_MtrCSpd_Out, P2VAR(TeMSPR_e_MotorSpeedSrc,
    AUTOMATIC, MSPR_VAR_INIT) rty_MtrCSpd_Src, P2VAR(boolean, AUTOMATIC,
    MSPR_VAR_INIT) rty_MtrCSpdFA_Out);

#endif

/*
 * Output and update for atomic system:
 *    '<S207>/SourcePrioritization'
 *    '<S211>/SourcePrioritization'
 */
static FUNC(void, MSPR_CODE_LOCAL) MSPR_ac_SourcePrioritization(CONST(sint16,
    AUTOMATIC) rtu_LaMSPR_e_MtrBSpdSrcPriority[2], VAR(boolean, AUTOMATIC)
    rtu_VaMSPR_b_MtrBSpdFAMatrix, VAR(boolean, AUTOMATIC)
    rtu_VaMSPR_b_MtrBSpdFAMatrix_d, P2VAR(B_SourcePrioritization_MSPR_a_T,
    AUTOMATIC, MSPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint16 b_index;
    boolean rtb_TmpSignalConversionAtSFun_l[2];

    /* SignalConversion generated from: '<S247>/ SFunction ' */
    rtb_TmpSignalConversionAtSFun_l[0] = rtu_VaMSPR_b_MtrBSpdFAMatrix;
    rtb_TmpSignalConversionAtSFun_l[1] = rtu_VaMSPR_b_MtrBSpdFAMatrix_d;

    /* Chart: '<S207>/SourcePrioritization' */
    /* Gateway: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrB_Processing/If Action
       Subsystem1/SourcePrioritization */
    /* During: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrB_Processing/If Action
       Subsystem1/SourcePrioritization */
    /* Entry Internal: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrB_Processing/If Action
       Subsystem1/SourcePrioritization */
    /* Transition: '<S247>:12' */
    /* Transition: '<S247>:13' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 2)
        {
            /* Transition: '<S247>:10' */
            /* Transition: '<S247>:32' */
            if (rtu_LaMSPR_e_MtrBSpdSrcPriority[b_index] != 255)
            {
                /* Transition: '<S247>:15' */
                /* Transition: '<S247>:17' */
                if (rtb_TmpSignalConversionAtSFun_l[rtu_LaMSPR_e_MtrBSpdSrcPriority
                        [b_index]])
                {
                    /* Transition: '<S247>:19' */
                    /* Transition: '<S247>:34' */
                    b_index++;

                    /* Transition: '<S247>:37' */
                    /* Transition: '<S247>:40' */
                    /* Transition: '<S247>:41' */
                }
                else
                {
                    /* Transition: '<S247>:23' */
                    localB->VeMSPR_e_MtrBSpdSource =
                        rtu_LaMSPR_e_MtrBSpdSrcPriority[b_index];

                    /* Transition: '<S247>:45' */
                    /* Transition: '<S247>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S247>:44' */
                localB->VeMSPR_e_MtrBSpdSource = 255;

                /* Transition: '<S247>:46' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S247>:8' */
            localB->VeMSPR_e_MtrBSpdSource = 255;
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);
}

/*
 * Output and update for action system:
 *    '<S329>/If Action Subsystem1'
 *    '<S328>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_MSPR_1

static FUNC(void, MSPR_CODE_LOCAL) MSPR_ac_IfActionSubsystem1(P2VAR(float32,
    AUTOMATIC, MSPR_VAR_INIT) rty_MtrCSpd_Out, P2VAR(TeMSPR_e_MotorSpeedSrc,
    AUTOMATIC, MSPR_VAR_INIT) rty_MtrCSpd_Src, P2VAR(boolean, AUTOMATIC,
    MSPR_VAR_INIT) rty_MtrCSpdFA_Out)
{
    /* SignalConversion generated from: '<S337>/MtrCSpd_Out' incorporates:
     *  Constant: '<S337>/Constant'
     */
    *rty_MtrCSpd_Out = 0.0F;

    /* SignalConversion generated from: '<S337>/MtrCSpd_Src' incorporates:
     *  Constant: '<S340>/Constant'
     */
    *rty_MtrCSpd_Src = CeMSPR_e_MtrSpdSrc_NoSrc;

    /* SignalConversion generated from: '<S337>/MtrCSpdFA_Out' incorporates:
     *  Constant: '<S337>/TRUE Constant'
     */
    *rty_MtrCSpdFA_Out = true;
}

#endif

/* Model step function for TID1 */
FUNC(void, MSPR_CODE) MSPR_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    boolean rtb_TmpSignalConversionAtVeES_m;
    sint16 b_index;
    boolean tmpRead;

#if Rte_SysCon_Variant_MSPR_1

    TeADCR_e_WEDStatus tmpRead_0;

#endif

#if Rte_SysCon_Variant_MSPR_1

    TeADCR_e_WEDStatus tmpRead_1;

#endif

    float32 rtb_TmpSignalConversionAtLeMS_k;
    float32 rtb_TmpSignalConversionAtLeM_d3;
    float32 rtb_TmpSignalConversionAtLeM_eb;
    float32 rtb_TmpSignalConversionAtLeM_hg;
    float32 rtb_TmpSignalConversionAtLeM_hx;
    float32 rtb_TmpSignalConversionAtLeM_it;
    float32 rtb_TmpSignalConversionAtLeM_lm;
    float32 rtb_TmpSignalConversionAtLeM_p1;
    float32 rtb_TmpSignalConversionAtLeM_ps;
    float32 rtb_TmpSignalConversionAtLe_ln3;
    float32 rtb_TmpSignalConversionAtLe_o40;
    boolean rtb_TmpSignalConversionAtLeMS_e;
    boolean rtb_TmpSignalConversionAtLeM_di;
    boolean rtb_TmpSignalConversionAtLeM_e0;
    boolean rtb_TmpSignalConversionAtLeM_gc;
    boolean rtb_TmpSignalConversionAtLeM_k2;
    boolean rtb_TmpSignalConversionAtLeM_kb;
    boolean rtb_TmpSignalConversionAtLeM_kl;
    boolean rtb_TmpSignalConversionAtLeM_ko;
    boolean rtb_TmpSignalConversionAtLeM_kr;
    boolean rtb_TmpSignalConversionAtLeM_ld;
    boolean rtb_TmpSignalConversionAtLeM_ll;
    boolean rtb_TmpSignalConversionAtLeM_mc;
    boolean rtb_TmpSignalConversionAtLeM_om;
    boolean rtb_TmpSignalConversionAtLeM_oy;
    boolean rtb_TmpSignalConversionAtLeM_p0;
    boolean rtb_TmpSignalConversionAtLeM_pg;
    boolean rtb_TmpSignalConversionAtLeM_ph;
    boolean rtb_TmpSignalConversionAtLe_jqn;
    boolean rtb_TmpSignalConversionAtLe_m4f;
    boolean rtb_TmpSignalConversionAtLe_oak;
    boolean rtb_TmpSignalConversionAtLe_pbp;

#if Rte_SysCon_Variant_MSPR_1

    boolean rtb_TmpSignalConversionAtLeM_ds;

#endif

    float32 rtb_TmpSignalConversionAtLeM_ox;

#if Rte_SysCon_Variant_MSPR_1

    boolean rtb_TmpSignalConversionAtLeM_i0;

#endif

#if Rte_SysCon_Variant_MSPR_1

    float32 rtb_TmpSignalConversionAtLeM_k0;

#endif

#if Rte_SysCon_Variant_MSPR_1

    boolean rtb_TmpSignalConversionAtLeM_ft;

#endif

#if Rte_SysCon_Variant_MSPR_1

    boolean rtb_TmpSignalConversionAtLeM_j0;

#endif

    float32 rtb_Merge1;
    float32 rtb_Product4;
    float32 rtb_Sum2_l;
    float32 rtb_Switch1;
    float32 rtb_Switch1_e1;
    float32 rtb_Switch2;
    float32 rtb_Switch3_o;
    float32 rtb_Switch9;
    float32 rtb_TmpSignalConversionAtLeM_be;
    float32 rtb_TmpSignalConversionAtVeBPCR;
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 rtb_TmpSignalConversionAtVeESPR;
    float32 rtb_TmpSignalConversionAtVeES_e;
    sint16 rtb_DataTypeConversion[2];
    uint16 rtb_Switch1_na;
    boolean rtb_TmpSignalConversionAtSFun_n[2];
    boolean rtb_OR1_kb;
    boolean rtb_Switch10;
    boolean rtb_TmpSignalConversionAtLeM_nl;

#if Rte_SysCon_Variant_MSPR_1

    float32 rtb_Summation_m;

#endif

    sint32 exitg1;
    sint32 i;
    float32 rtb_Merge1_tmp;
    TeESPR_e_EngSpdStatus rtb_TmpSignalConversionAtVeES_f;
    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER;
    TeMSPR_e_MotorSpeedSrc rtb_VeMSPC_e_MtrCSpdSrc;
    TeMSPR_e_P2Spd_Prfl_Enbl rtb_TmpSignalConversionAtLeM_ow;
    boolean rtb_TmpSignalConversionAtVeCS_o;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MSPR_FastTEF'
     */
    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrBPosCnt_init_read' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    rtb_TmpSignalConversionAtLeM_kr =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrBPosCntFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_P2Spd_Prfl_Enbl_Init_read' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    rtb_TmpSignalConversionAtLeM_ow =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_e_P2Spd_Prfl_Enbl_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_P2SpdControl_TgtSpd_Init_read' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    rtb_TmpSignalConversionAtLeM_d3 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_P2SpdControl_TgtSpd_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_P2SpdControl_TgtSpdFA_Init_read' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    rtb_TmpSignalConversionAtLeMS_e =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_P2SpdControl_TgtSpdFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrA_SpdRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TmpSignalConversionAtLeM_ld =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrA_SpdRawFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrB_SpdRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    rtb_TmpSignalConversionAtLeM_p0 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrB_SpdRawFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_P2TgtSpd_Init_read' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    rtb_TmpSignalConversionAtLeM_it =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_P2TgtSpd_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_P2TgtSpdFA_Init_read' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    rtb_TmpSignalConversionAtLeM_k2 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_P2TgtSpdFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxMtrCSpdLmtFA_read' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    rtb_TmpSignalConversionAtLeM_oy =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MaxMtrCSpdLmtFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrA_SpdRawSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_40'
     */
    rtb_TmpSignalConversionAtLe_m4f =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrA_AccelRawSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    rtb_TmpSignalConversionAtLeM_di =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrA_AccelRaw_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_dn_MtrA_AccelRaw_read' incorporates:
     *  Merge: '<Root>/Merge_31'
     */
    rtb_TmpSignalConversionAtLe_ln3 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_dn_MtrA_AccelRaw_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrA_AccelRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    rtb_TmpSignalConversionAtLeM_ll =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrA_AccelRawFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MtrB_SpdRaw_read' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    rtb_TmpSignalConversionAtLeM_p1 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MtrB_SpdRaw_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrB_AccelRawSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    rtb_TmpSignalConversionAtLeM_om =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrB_AccelRaw_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_dn_MtrB_AccelRaw_read' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    rtb_TmpSignalConversionAtLeM_eb =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_dn_MtrB_AccelRaw_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrB_AccelRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    rtb_TmpSignalConversionAtLeM_kl =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrB_AccelRawFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_cnt_MtrBPosCntSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    rtb_TmpSignalConversionAtLeM_ph =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_cnt_MtrBPosCntSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_cnt_MtrBPosCnt_init_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    rtb_TmpSignalConversionAtLeMS_k =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_cnt_MtrBPosCnt_init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP1SpdLmt_Rcvd_AltSrc_Init_read' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    rtb_TmpSignalConversionAtLe_oak =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MaxP1SpdLmt_AltSrc_Init_read' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    rtb_TmpSignalConversionAtLeM_ps =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP1SpdLmt_AltSrc_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP2SpdLmt_Rcvd_AltSrc_Init_read' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    rtb_TmpSignalConversionAtLeM_mc =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MaxP2SpdLmt_AltSrc_Init_read' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    rtb_TmpSignalConversionAtLeM_lm =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP2SpdLmt_AltSrc_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP1SpdLmtFA_read' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    rtb_TmpSignalConversionAtLeM_kb =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MaxP1SpdLmtFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP1SpdLmt_AltSrcFA_read' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    rtb_TmpSignalConversionAtLe_jqn =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MaxP1SpdLmt_AltSrcFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP2SpdLmtFA_read' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    rtb_TmpSignalConversionAtLe_pbp =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MaxP2SpdLmtFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP2SpdLmt_AltSrcFA_read' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    rtb_TmpSignalConversionAtLeM_gc =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MaxP2SpdLmt_AltSrcFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP2SpdLmt_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    rtb_TmpSignalConversionAtLeM_ko =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP2SpdLmtSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MaxP2SpdLmt_Init_read' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    rtb_TmpSignalConversionAtLe_o40 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP2SpdLmt_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MaxP1SpdLmt_Init_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtLeM_hx =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP1SpdLmt_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MaxP1SpdLmt_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    rtb_TmpSignalConversionAtLeM_e0 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxP1SpdLmtSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MtrA_SpdRaw_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_TmpSignalConversionAtLeM_hg =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MtrA_SpdRaw_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrB_SpdRawSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_TmpSignalConversionAtLeM_pg =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S17>/VeESPR_n_EngineSpeed_MCP' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngineSpeed_MCP'
     */
    (void)Rte_Read_VeESPR_n_EngineSpeed_MCP_Value
        (&rtb_TmpSignalConversionAtVeESPR);

    /* SignalConversion generated from: '<S17>/VeESPR_b_EngineSpeed_MCPFA' incorporates:
     *  Inport: '<Root>/VeESPR_b_EngineSpeed_MCPFA'
     */
    (void)Rte_Read_VeESPR_b_EngineSpeed_MCPFA_Value
        (&rtb_TmpSignalConversionAtVeES_m);

    /* SignalConversion generated from: '<S17>/VeESPR_n_EngineSpeed' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value(&rtb_TmpSignalConversionAtVeES_e);

    /* SignalConversion generated from: '<S17>/VeESPR_e_EngineSpeedStatus' incorporates:
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     */
    (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value
        (&rtb_TmpSignalConversionAtVeES_f);

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_AccelRawSgnl_Rcvd_read' incorporates:
     *  SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_AccelRawFA_read'
     *  SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_SpdRawFA_read'
     *  SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_SpdRawSgnl_Rcvd_read'
     *  SignalConversion generated from: '<S17>/LeMSPR_dn_MtrC_AccelRaw_read'
     *  SignalConversion generated from: '<S17>/LeMSPR_n_MtrC_SpdRaw_read'
     */
#if Rte_SysCon_Variant_MSPR_1

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_AccelRawSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    rtb_TmpSignalConversionAtLeM_ds =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrC_AccelRaw_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_dn_MtrC_AccelRaw_read' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    rtb_TmpSignalConversionAtLeM_ox =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_dn_MtrC_AccelRaw_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_SpdRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtLeM_i0 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrC_SpdRawFA_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MtrC_SpdRaw_read' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    rtb_TmpSignalConversionAtLeM_k0 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MtrC_SpdRaw_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_SpdRawSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    rtb_TmpSignalConversionAtLeM_ft =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_AccelRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    rtb_TmpSignalConversionAtLeM_j0 =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MtrC_AccelRawFA_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S17>/LeMSPR_b_MtrC_AccelRawSgnl_Rcvd_read' */

    /* SignalConversion generated from: '<S17>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S17>/VeCSVR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_VehSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&rtb_TmpSignalConversionAtVeCS_o);

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MaxMtrCSpdLmt_Init_read' incorporates:
     *  SignalConversion generated from: '<S17>/LeMSPR_n_MaxMtrCSpdLmtSgnl_Rcvd_read'
     */
#if Rte_SysCon_Variant_MSPR_1

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MaxMtrCSpdLmt_Init_read' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    rtb_TmpSignalConversionAtLeM_be =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_n_MaxMtrCSpdLmt_Init_write_IRV();

    /* SignalConversion generated from: '<S17>/LeMSPR_n_MaxMtrCSpdLmtSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    rtb_TmpSignalConversionAtLeM_nl =
        Rte_IrvRead_MSPR_FastTEF_VeMSPR_b_MaxMtrCSpdLmtSgnl_Rcvd_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S17>/LeMSPR_n_MaxMtrCSpdLmt_Init_read' */

    /* SignalConversion generated from: '<S17>/VeBPCR_U_HV_BatVolt' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
     */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&rtb_TmpSignalConversionAtVeBPCR);

    /* S-Function (fcgen): '<S17>/FcnCallGen' incorporates:
     *  SubSystem: '<S17>/MSPC_FilterMtrSpd'
     */

    /* Outputs for Atomic SubSystem: '<S75>/EdgeRising2' */
    /* Logic: '<S116>/OR1' incorporates:
     *  UnitDelay: '<S116>/Unit Delay'
     */
    rtb_OR1_kb = !MSPR_ac_DW.UnitDelay_DSTATE_jb;

    /* Update for UnitDelay: '<S116>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_jb = rtb_TmpSignalConversionAtLeM_di;

    /* Outputs for Atomic SubSystem: '<S75>/Count Down  Reset Enabled2' */
    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S113>/Constant Value'
     *  Logic: '<S116>/AND'
     *  RelationalOperator: '<S113>/Greater  Than'
     *  Switch: '<S113>/Switch2'
     *  UnitDelay: '<S113>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_di && rtb_OR1_kb)
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S119>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_MtrAAccelMinWaitTime;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_k3) > 0)
    {
        /* Switch: '<S113>/Switch2' incorporates:
         *  Constant: '<S113>/Constant Value1'
         *  Sum: '<S113>/Subtraction'
         *  Switch: '<S113>/Switch1'
         *  UnitDelay: '<S113>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_k3) - 1));
    }
    else
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Switch: '<S113>/Switch2'
         *  UnitDelay: '<S113>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_k3;
    }

    /* End of Switch: '<S113>/Switch1' */
    /* End of Outputs for SubSystem: '<S75>/Count Down  Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S75>/EdgeRising2' */
    /* End of Outputs for S-Function (fcgen): '<S17>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCSVR_l_WhlRadius' */
    (void)Rte_Read_VeCSVR_l_WhlRadius_Value(&rtb_Switch1_e1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MSPR_FastTEF'
     */
    /* S-Function (fcgen): '<S17>/FcnCallGen' incorporates:
     *  SubSystem: '<S17>/MSPC_FilterMtrSpd'
     */
    /* Outputs for Atomic SubSystem: '<S75>/Count Down  Reset Enabled2' */
    /* RelationalOperator: '<S113>/Greater  Than1' incorporates:
     *  Constant: '<S113>/Constant Value2'
     */
    VeMSPR_b_MtrAAccel_Sgnl_Rcvd = (((sint32)rtb_Switch1_na) > 0);

    /* Update for UnitDelay: '<S113>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_k3 = rtb_Switch1_na;

    /* End of Outputs for SubSystem: '<S75>/Count Down  Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S68>/MtrC_Management' */
    /* Outputs for Atomic SubSystem: '<S80>/MtrC_Management' */
    /* Product: '<S114>/Multiplication3' incorporates:
     *  Constant: '<S114>/Constant Value1'
     *  Constant: '<S70>/Calib'
     *  Product: '<S190>/Multiplication3'
     *  Product: '<S279>/Multiplication3'
     */
    rtb_Merge1_tmp = KeMSPR_t_6p25dt / 2.0F;

    /* End of Outputs for SubSystem: '<S80>/MtrC_Management' */
    /* End of Outputs for SubSystem: '<S68>/MtrC_Management' */

    /* Product: '<S82>/Product4' incorporates:
     *  Constant: '<S82>/Constant Value2'
     *  Constant: '<S82>/Constant Value3'
     */
    rtb_Product4 = 2.65258217F / rtb_Switch1_e1;

    /* If: '<S79>/If' incorporates:
     *  Constant: '<S212>/Calib'
     *  Constant: '<S213>/Calib'
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Inport: '<Root>/VeCSVR_b_RearAxlSpdFA'
     *  Inport: '<Root>/VeCSVR_n_ST2InpSpd'
     *  Logic: '<S79>/Logical2'
     */
    if (!rtb_TmpSignalConversionAtLeM_p0)
    {
        /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem' incorporates:
         *  ActionPort: '<S206>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S206>/EdgeRising' */
        /* Logic: '<S219>/OR1' incorporates:
         *  UnitDelay: '<S219>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_di = !MSPR_ac_DW.UnitDelay_DSTATE_g;

        /* Update for UnitDelay: '<S219>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_g = rtb_TmpSignalConversionAtLeM_pg;

        /* Outputs for Atomic SubSystem: '<S206>/Count Down  Reset Enabled' */
        /* Switch: '<S217>/Switch1' incorporates:
         *  Constant: '<S217>/Constant Value'
         *  Logic: '<S219>/AND'
         *  RelationalOperator: '<S217>/Greater  Than'
         *  Switch: '<S217>/Switch2'
         *  UnitDelay: '<S217>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtLeM_pg && rtb_TmpSignalConversionAtLeM_di)
        {
            /* Switch: '<S217>/Switch1' incorporates:
             *  Constant: '<S222>/Calib'
             */
            rtb_Switch1_na = KeMSPR_Cnt_MtrBSpdMinWaitTime;
        }
        else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_pz) > 0)
        {
            /* Switch: '<S217>/Switch2' incorporates:
             *  Constant: '<S217>/Constant Value1'
             *  Sum: '<S217>/Subtraction'
             *  Switch: '<S217>/Switch1'
             *  UnitDelay: '<S217>/Unit Delay'
             */
            rtb_Switch1_na = (uint16)((sint32)(((sint32)
                MSPR_ac_DW.UnitDelay_DSTATE_pz) - 1));
        }
        else
        {
            /* Switch: '<S217>/Switch1' incorporates:
             *  Switch: '<S217>/Switch2'
             *  UnitDelay: '<S217>/Unit Delay'
             */
            rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_pz;
        }

        /* End of Switch: '<S217>/Switch1' */
        /* End of Outputs for SubSystem: '<S206>/EdgeRising' */

        /* RelationalOperator: '<S217>/Greater  Than1' incorporates:
         *  Constant: '<S217>/Constant Value2'
         */
        VeMSPR_b_MtrBSpd_Sgnl_Rcvd = (((sint32)rtb_Switch1_na) > 0);

        /* Update for UnitDelay: '<S217>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_pz = rtb_Switch1_na;

        /* End of Outputs for SubSystem: '<S206>/Count Down  Reset Enabled' */

        /* Outputs for Atomic SubSystem: '<S228>/ClosedInterval' */
        /* Switch: '<S228>/Switch' incorporates:
         *  Constant: '<S226>/Calib'
         *  Constant: '<S227>/Calib'
         *  Logic: '<S231>/Logical Operator'
         *  RelationalOperator: '<S231>/Relatonal Operator'
         *  RelationalOperator: '<S231>/Relatonal Operator1'
         */
        if ((rtb_TmpSignalConversionAtLeM_p1 < KeMSPR_n_MtrBSpd_MinLmt) ||
                (rtb_TmpSignalConversionAtLeM_p1 > KeMSPR_n_MtrBSpd_MaxLmt))
        {
            /* Switch: '<S228>/Switch' incorporates:
             *  UnitDelay: '<S228>/Unit Delay'
             */
            rtb_TmpSignalConversionAtLeM_p1 = MSPR_ac_DW.UnitDelay_DSTATE_ej;
        }

        /* End of Switch: '<S228>/Switch' */
        /* End of Outputs for SubSystem: '<S228>/ClosedInterval' */

        /* Outputs for Atomic SubSystem: '<S228>/GradientLimiter' */
        /* Sum: '<S232>/Sum2' incorporates:
         *  UnitDelay: '<S232>/Unit Delay'
         */
        rtb_Sum2_l = rtb_TmpSignalConversionAtLeM_p1 -
            MSPR_ac_DW.UnitDelay_DSTATE_i;

        /* Outputs for Atomic SubSystem: '<S232>/Limiter' */
        /* Switch: '<S233>/Switch1' incorporates:
         *  Constant: '<S223>/Calib'
         *  RelationalOperator: '<S233>/Relational Operator'
         */
        if (KeMSPR_dn_MtrBSpdRate_MaxLmt < rtb_Sum2_l)
        {
            /* Switch: '<S233>/Switch1' */
            rtb_Sum2_l = KeMSPR_dn_MtrBSpdRate_MaxLmt;
        }

        /* End of Switch: '<S233>/Switch1' */

        /* Switch: '<S233>/Switch' incorporates:
         *  Constant: '<S224>/Calib'
         *  RelationalOperator: '<S233>/Relational Operator1'
         */
        if (rtb_Sum2_l <= KeMSPR_dn_MtrBSpdRate_MinLmt)
        {
            rtb_Sum2_l = KeMSPR_dn_MtrBSpdRate_MinLmt;
        }

        /* End of Switch: '<S233>/Switch' */
        /* End of Outputs for SubSystem: '<S232>/Limiter' */

        /* Sum: '<S232>/Sum3' incorporates:
         *  UnitDelay: '<S232>/Unit Delay'
         */
        rtb_Sum2_l += MSPR_ac_DW.UnitDelay_DSTATE_i;

        /* Update for UnitDelay: '<S232>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_i = rtb_Sum2_l;

        /* End of Outputs for SubSystem: '<S228>/GradientLimiter' */

        /* Logic: '<S206>/Logical5' */
        rtb_TmpSignalConversionAtLeM_pg = !VeMSPR_b_MtrBSpd_Sgnl_Rcvd;

        /* Outputs for Atomic SubSystem: '<S206>/EdgeRising4' */
        /* Logic: '<S220>/OR1' incorporates:
         *  UnitDelay: '<S220>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_di = !MSPR_ac_DW.UnitDelay_DSTATE_kr;

        /* Update for UnitDelay: '<S220>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_kr = rtb_TmpSignalConversionAtLeM_pg;

        /* Outputs for Atomic SubSystem: '<S206>/Digital Lowpass Reset Enabled1' */
        /* Switch: '<S218>/Switch1' incorporates:
         *  Logic: '<S220>/AND'
         *  Switch: '<S218>/Switch2'
         */
        if (rtb_TmpSignalConversionAtLeM_pg && rtb_TmpSignalConversionAtLeM_di)
        {
            /* Switch: '<S218>/Switch1' */
            rtb_Switch1_e1 = rtb_Sum2_l;
        }
        else if (rtb_TmpSignalConversionAtLeM_pg)
        {
            /* Switch: '<S218>/Switch2' incorporates:
             *  Constant: '<S225>/Calib'
             *  Product: '<S218>/Multiplication'
             *  Sum: '<S218>/Subtraction'
             *  Sum: '<S218>/Summation'
             *  Switch: '<S218>/Switch1'
             *  UnitDelay: '<S218>/Unit Delay'
             */
            rtb_Switch1_e1 = ((rtb_Sum2_l - MSPR_ac_DW.UnitDelay_DSTATE_o) *
                              KeMSPR_k_MtrBSpdFilterConst) +
                MSPR_ac_DW.UnitDelay_DSTATE_o;
        }
        else
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Switch: '<S218>/Switch2'
             *  UnitDelay: '<S218>/Unit Delay'
             */
            rtb_Switch1_e1 = MSPR_ac_DW.UnitDelay_DSTATE_o;
        }

        /* End of Switch: '<S218>/Switch1' */
        /* End of Outputs for SubSystem: '<S206>/EdgeRising4' */

        /* Update for UnitDelay: '<S218>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch1_e1;

        /* End of Outputs for SubSystem: '<S206>/Digital Lowpass Reset Enabled1' */

        /* Switch: '<S98>/Switch3' incorporates:
         *  Gain: '<S229>/Gain'
         */
        rtb_Switch3_o = rtb_Switch1_e1;

        /* Merge: '<S79>/Merge2' incorporates:
         *  Gain: '<S230>/Gain'
         */
        VeMSPC_n_MtrBSpdRaw = rtb_Sum2_l;

        /* Merge: '<S79>/Merge1' incorporates:
         *  Constant: '<S221>/Constant'
         *  SignalConversion generated from: '<S206>/MtrBSpd_Src'
         */
        VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpSrc_MCP;

        /* Merge: '<S79>/Merge3' incorporates:
         *  Constant: '<S206>/FALSE Constant'
         *  SignalConversion generated from: '<S206>/MtrBSpdFA_Out'
         */
        VeMSPC_b_MtrB_SpdFA = false;

        /* Update for UnitDelay: '<S228>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_ej = rtb_TmpSignalConversionAtLeM_p1;

        /* End of Outputs for SubSystem: '<S79>/If Action Subsystem' */
    }
    else if (KeMSPR_b_ReplaceMtrBSpdForP1P2)
    {
        /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S207>/Action Port'
         */
        for (i = 0; i < 2; i++)
        {
            /* DataTypeConversion: '<S207>/Data Type Conversion' incorporates:
             *  Constant: '<S244>/Calib'
             */
            rtb_DataTypeConversion[i] = (sint16)KaMSPR_e_MtrBSpdSrcPriority[(i)];
        }

        /* Chart: '<S207>/SourcePrioritization' incorporates:
         *  Constant: '<S238>/Constant'
         *  RelationalOperator: '<S207>/Comparison5'
         *  SignalConversion generated from: '<S17>/VeESPR_e_EngineSpeedStatus'
         */
        MSPR_ac_SourcePrioritization(rtb_DataTypeConversion,
            rtb_TmpSignalConversionAtVeES_m, ((uint32)
            rtb_TmpSignalConversionAtVeES_f) != CeESPR_e_EngSpdNormal,
            &MSPR_ac_B.sf_SourcePrioritization_ct);

        /* SwitchCase: '<S207>/Switch_Case' */
        switch (MSPR_ac_B.sf_SourcePrioritization_ct.VeMSPR_e_MtrBSpdSource)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S207>/If Action Subsystem' incorporates:
             *  ActionPort: '<S239>/Action Port'
             */
            /* Merge: '<S207>/Merge' incorporates:
             *  Inport: '<S239>/EngSpd_BuffCrk'
             */
            rtb_TmpSignalConversionAtLeM_p1 = rtb_TmpSignalConversionAtVeESPR;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S248>/Constant'
             *  SignalConversion generated from: '<S239>/MtrBSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_BuffCrank;

            /* End of Outputs for SubSystem: '<S207>/If Action Subsystem' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S207>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S240>/Action Port'
             */
            /* Merge: '<S207>/Merge' incorporates:
             *  Inport: '<S240>/EngSpdCAN'
             */
            rtb_TmpSignalConversionAtLeM_p1 = rtb_TmpSignalConversionAtVeES_e;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S249>/Constant'
             *  SignalConversion generated from: '<S240>/MtrBSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_CANEngSpd;

            /* End of Outputs for SubSystem: '<S207>/If Action Subsystem1' */
            break;

          default:
            /* Outputs for IfAction SubSystem: '<S207>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S241>/Action Port'
             */
            /* Merge: '<S207>/Merge' incorporates:
             *  Constant: '<S241>/Constant'
             *  SignalConversion generated from: '<S241>/EngSpd_Out'
             */
            rtb_TmpSignalConversionAtLeM_p1 = 0.0F;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S250>/Constant'
             *  SignalConversion generated from: '<S241>/EngSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_NoSrc;

            /* End of Outputs for SubSystem: '<S207>/If Action Subsystem2' */
            break;
        }

        /* End of SwitchCase: '<S207>/Switch_Case' */

        /* Switch: '<S98>/Switch3' incorporates:
         *  Gain: '<S245>/Gain'
         */
        rtb_Switch3_o = rtb_TmpSignalConversionAtLeM_p1;

        /* Merge: '<S79>/Merge2' incorporates:
         *  Gain: '<S246>/Gain'
         */
        VeMSPC_n_MtrBSpdRaw = rtb_TmpSignalConversionAtLeM_p1;

        /* If: '<S207>/If1' incorporates:
         *  Constant: '<S236>/Constant'
         *  Constant: '<S237>/Constant'
         *  Logic: '<S207>/Logical3'
         *  RelationalOperator: '<S207>/Comparison1'
         *  RelationalOperator: '<S207>/Comparison4'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_M2) ||
                (((uint32)rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_G2))
        {
            /* Outputs for IfAction SubSystem: '<S207>/If Action Subsystem3' incorporates:
             *  ActionPort: '<S242>/Action Port'
             */
            /* Merge: '<S79>/Merge3' incorporates:
             *  Constant: '<S242>/FALSE Constant'
             *  SignalConversion generated from: '<S242>/MtrBSpdFA_Out'
             */
            VeMSPC_b_MtrB_SpdFA = false;

            /* End of Outputs for SubSystem: '<S207>/If Action Subsystem3' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S207>/If Action Subsystem4' incorporates:
             *  ActionPort: '<S243>/Action Port'
             */
            /* Merge: '<S79>/Merge3' incorporates:
             *  Constant: '<S234>/Constant'
             *  Constant: '<S235>/Constant'
             *  Logic: '<S207>/Logical4'
             *  RelationalOperator: '<S207>/Comparison2'
             *  RelationalOperator: '<S207>/Comparison3'
             *  SignalConversion generated from: '<S243>/MtrBSpdFA_Out'
             */
            VeMSPC_b_MtrB_SpdFA = (((((uint32)rtb_TmpSignalConversionAtVeHSER) ==
                CeHSER_e_M1) || (((uint32)rtb_TmpSignalConversionAtVeHSER) ==
                                 CeHSER_e_Neutral)) || (VeMSPC_b_MtrB_SpdFA));

            /* End of Outputs for SubSystem: '<S207>/If Action Subsystem4' */
        }

        /* End of If: '<S207>/If1' */
        /* End of Outputs for SubSystem: '<S79>/If Action Subsystem1' */
    }
    else if (KeMSPR_b_ReplaceMtrBSpdForP1P4)
    {
        (void)Rte_Read_VeCSVR_b_RearAxlSpdFA_Value(&tmpRead);

        /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S208>/Action Port'
         */
        /* If: '<S208>/If' incorporates:
         *  Inport: '<Root>/VeCSVR_b_RearAxlSpdFA'
         *  Inport: '<Root>/VeCSVR_n_RearAxlSpdSgndFltrd'
         */
        if (tmpRead)
        {
            /* Outputs for IfAction SubSystem: '<S208>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S252>/Action Port'
             */
            /* Switch: '<S98>/Switch3' incorporates:
             *  Constant: '<S252>/Constant'
             *  SignalConversion generated from: '<S252>/MtrBSpd_Out'
             */
            rtb_Switch3_o = 0.0F;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S257>/Constant'
             *  SignalConversion generated from: '<S252>/MtrBSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_NoSrc;

            /* Merge: '<S79>/Merge2' incorporates:
             *  Constant: '<S252>/Constant1'
             *  SignalConversion generated from: '<S252>/MtrBSpd_Raw'
             */
            VeMSPC_n_MtrBSpdRaw = 0.0F;

            /* Merge: '<S79>/Merge3' incorporates:
             *  Constant: '<S252>/TRUE Constant'
             *  SignalConversion generated from: '<S252>/MtrBSpdFA_Out'
             */
            VeMSPC_b_MtrB_SpdFA = true;

            /* End of Outputs for SubSystem: '<S208>/If Action Subsystem1' */
        }
        else
        {
            (void)Rte_Read_VeCSVR_n_RearAxlSpdSgndFltrd_Value(&rtb_Sum2_l);

            /* Outputs for IfAction SubSystem: '<S208>/If Action Subsystem' incorporates:
             *  ActionPort: '<S251>/Action Port'
             */
            /* Product: '<S251>/Product' incorporates:
             *  Constant: '<S254>/Calib'
             *  Inport: '<Root>/VeCSVR_n_RearAxlSpdSgndFltrd'
             */
            rtb_TmpSignalConversionAtLeM_p1 = rtb_Sum2_l * ((float32)
                Rte_Prm_KeTSXR_r_FDRr_KeTSXR_r_FDRr());

            /* Switch: '<S98>/Switch3' incorporates:
             *  Gain: '<S255>/Gain'
             */
            rtb_Switch3_o = rtb_TmpSignalConversionAtLeM_p1;

            /* Merge: '<S79>/Merge2' incorporates:
             *  Gain: '<S256>/Gain'
             */
            VeMSPC_n_MtrBSpdRaw = rtb_TmpSignalConversionAtLeM_p1;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S253>/Constant'
             *  SignalConversion generated from: '<S251>/MtrBSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_ReAxleSpd;

            /* Merge: '<S79>/Merge3' incorporates:
             *  Constant: '<S251>/FALSE Constant'
             *  SignalConversion generated from: '<S251>/MtrBSpdFA_Out'
             */
            VeMSPC_b_MtrB_SpdFA = false;

            /* End of Outputs for SubSystem: '<S208>/If Action Subsystem' */
        }

        /* End of If: '<S208>/If' */
        /* End of Outputs for SubSystem: '<S79>/If Action Subsystem2' */
    }
    else if (KeMSPR_b_ReplaceMtrBSpdForP1P2p5)
    {
        /* Merge: '<S79>/Merge3' incorporates:
         *  Inport: '<Root>/VeCSVR_b_ST2InpSpdFA'
         */
        (void)Rte_Read_VeCSVR_b_ST2InpSpdFA_Value((&(VeMSPC_b_MtrB_SpdFA)));
        (void)Rte_Read_VeCSVR_n_ST2InpSpd_Value(&rtb_Sum2_l);

        /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S210>/Action Port'
         */
        /* Product: '<S210>/Product' incorporates:
         *  Constant: '<S260>/Calib'
         *  Inport: '<Root>/VeCSVR_n_ST2InpSpd'
         */
        rtb_TmpSignalConversionAtLeM_p1 = rtb_Sum2_l *
            KeMSPR_r_EvenShaftToMotBSpd;

        /* Switch: '<S98>/Switch3' incorporates:
         *  Gain: '<S261>/Gain'
         */
        rtb_Switch3_o = rtb_TmpSignalConversionAtLeM_p1;

        /* Merge: '<S79>/Merge2' incorporates:
         *  Gain: '<S262>/Gain'
         */
        VeMSPC_n_MtrBSpdRaw = rtb_TmpSignalConversionAtLeM_p1;

        /* Merge: '<S79>/Merge1' incorporates:
         *  Constant: '<S259>/Constant'
         *  SignalConversion generated from: '<S210>/MtrBSpd_Src'
         */
        VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpSrc_ST2Spd;

        /* End of Outputs for SubSystem: '<S79>/If Action Subsystem4' */
    }
    else if (KeMSPR_b_ReplaceMtrBSpdForSIEVT)
    {
        /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S211>/Action Port'
         */
        for (i = 0; i < 2; i++)
        {
            /* DataTypeConversion: '<S211>/Data Type Conversion' incorporates:
             *  Constant: '<S267>/Calib'
             */
            rtb_DataTypeConversion[i] = (sint16)KaMSPR_e_MtrBSpdSrcPriority[(i)];
        }

        /* Chart: '<S211>/SourcePrioritization' incorporates:
         *  Constant: '<S263>/Constant'
         *  RelationalOperator: '<S211>/Comparison5'
         *  SignalConversion generated from: '<S17>/VeESPR_e_EngineSpeedStatus'
         */
        MSPR_ac_SourcePrioritization(rtb_DataTypeConversion,
            rtb_TmpSignalConversionAtVeES_m, ((uint32)
            rtb_TmpSignalConversionAtVeES_f) != CeESPR_e_EngSpdNormal,
            &MSPR_ac_B.sf_SourcePrioritization_g);

        /* SwitchCase: '<S211>/Switch_Case' */
        switch (MSPR_ac_B.sf_SourcePrioritization_g.VeMSPR_e_MtrBSpdSource)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S211>/If Action Subsystem' incorporates:
             *  ActionPort: '<S264>/Action Port'
             */
            /* Merge: '<S211>/Merge' incorporates:
             *  Inport: '<S264>/EngSpd_BuffCrk'
             */
            rtb_TmpSignalConversionAtLeM_p1 = rtb_TmpSignalConversionAtVeESPR;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S274>/Constant'
             *  SignalConversion generated from: '<S264>/MtrBSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_BuffCrank;

            /* Merge: '<S79>/Merge3' incorporates:
             *  Constant: '<S264>/FALSE Constant'
             *  SignalConversion generated from: '<S264>/MtrBSpdFA_Out'
             */
            VeMSPC_b_MtrB_SpdFA = false;

            /* End of Outputs for SubSystem: '<S211>/If Action Subsystem' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S211>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S265>/Action Port'
             */
            /* Merge: '<S211>/Merge' incorporates:
             *  Inport: '<S265>/EngSpdCAN'
             */
            rtb_TmpSignalConversionAtLeM_p1 = rtb_TmpSignalConversionAtVeES_e;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S275>/Constant'
             *  SignalConversion generated from: '<S265>/MtrBSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_CANEngSpd;

            /* Merge: '<S79>/Merge3' incorporates:
             *  Constant: '<S265>/FALSE Constant'
             *  SignalConversion generated from: '<S265>/MtrBSpdFA_Out'
             */
            VeMSPC_b_MtrB_SpdFA = false;

            /* End of Outputs for SubSystem: '<S211>/If Action Subsystem1' */
            break;

          default:
            /* Outputs for IfAction SubSystem: '<S211>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S266>/Action Port'
             */
            /* Merge: '<S211>/Merge' incorporates:
             *  Constant: '<S266>/Constant'
             *  SignalConversion generated from: '<S266>/EngSpd_Out'
             */
            rtb_TmpSignalConversionAtLeM_p1 = 0.0F;

            /* Merge: '<S79>/Merge1' incorporates:
             *  Constant: '<S276>/Constant'
             *  SignalConversion generated from: '<S266>/EngSpd_Src'
             */
            VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_NoSrc;

            /* Merge: '<S79>/Merge3' incorporates:
             *  Constant: '<S266>/TRUE Constant'
             *  SignalConversion generated from: '<S266>/MtrBSpdFA_Out'
             */
            VeMSPC_b_MtrB_SpdFA = true;

            /* End of Outputs for SubSystem: '<S211>/If Action Subsystem2' */
            break;
        }

        /* End of SwitchCase: '<S211>/Switch_Case' */

        /* Switch: '<S211>/Switch' incorporates:
         *  Constant: '<S268>/Calib'
         */
        if (KeMSPR_b_EnblSIEVTReplSpd)
        {
            /* Switch: '<S211>/Switch' incorporates:
             *  Constant: '<S269>/Calib'
             *  Constant: '<S270>/Calib'
             *  Product: '<S211>/Divide'
             *  Product: '<S211>/Product1'
             *  Sum: '<S211>/Subtract'
             *  UnitDelay: '<S68>/Unit Delay'
             */
            rtb_TmpSignalConversionAtLeM_p1 = (rtb_TmpSignalConversionAtLeM_p1 -
                (KeMSPR_r_MtrA2MtrEngRat * MSPR_ac_DW.UnitDelay_DSTATE_e)) /
                KeMSPR_r_Rat2MtrB;
        }

        /* End of Switch: '<S211>/Switch' */

        /* Switch: '<S98>/Switch3' incorporates:
         *  Gain: '<S271>/Gain'
         */
        rtb_Switch3_o = rtb_TmpSignalConversionAtLeM_p1;

        /* Merge: '<S79>/Merge2' incorporates:
         *  Gain: '<S272>/Gain'
         */
        VeMSPC_n_MtrBSpdRaw = rtb_TmpSignalConversionAtLeM_p1;

        /* End of Outputs for SubSystem: '<S79>/If Action Subsystem5' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S79>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S209>/Action Port'
         */
        /* Switch: '<S98>/Switch3' incorporates:
         *  Constant: '<S209>/Constant'
         *  SignalConversion generated from: '<S209>/MtrBSpd_Out'
         */
        rtb_Switch3_o = 0.0F;

        /* Merge: '<S79>/Merge1' incorporates:
         *  Constant: '<S258>/Constant'
         *  SignalConversion generated from: '<S209>/MtrBSpd_Src'
         */
        VeMSPC_e_MtrBSrc = CeMSPR_e_MtrSpdSrc_NoSrc;

        /* Merge: '<S79>/Merge2' incorporates:
         *  Constant: '<S209>/Constant1'
         *  SignalConversion generated from: '<S209>/MtrBSpd_Raw'
         */
        VeMSPC_n_MtrBSpdRaw = 0.0F;

        /* Merge: '<S79>/Merge3' incorporates:
         *  Constant: '<S209>/TRUE Constant'
         *  SignalConversion generated from: '<S209>/MtrBSpdFA_Out'
         */
        VeMSPC_b_MtrB_SpdFA = true;

        /* End of Outputs for SubSystem: '<S79>/If Action Subsystem3' */
    }

    /* End of If: '<S79>/If' */

    /* If: '<S76>/If' incorporates:
     *  Constant: '<S134>/Calib'
     *  Constant: '<S135>/Calib'
     *  Logic: '<S76>/Logical2'
     */
    if (!rtb_TmpSignalConversionAtLeM_ld)
    {
        /* Outputs for IfAction SubSystem: '<S76>/If Action Subsystem' incorporates:
         *  ActionPort: '<S130>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S130>/EdgeRising1' */
        /* Logic: '<S138>/OR1' incorporates:
         *  UnitDelay: '<S138>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_di = !MSPR_ac_DW.UnitDelay_DSTATE_cx;

        /* Update for UnitDelay: '<S138>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_cx = rtb_TmpSignalConversionAtLe_m4f;

        /* Outputs for Atomic SubSystem: '<S130>/Count Down  Reset Enabled1' */
        /* Switch: '<S136>/Switch1' incorporates:
         *  Constant: '<S136>/Constant Value'
         *  Logic: '<S138>/AND'
         *  RelationalOperator: '<S136>/Greater  Than'
         *  Switch: '<S136>/Switch2'
         *  UnitDelay: '<S136>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtLe_m4f && rtb_TmpSignalConversionAtLeM_di)
        {
            /* Switch: '<S136>/Switch1' incorporates:
             *  Constant: '<S141>/Calib'
             */
            rtb_Switch1_na = KeMSPR_Cnt_MtrASpdMinWaitTime;
        }
        else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_o0) > 0)
        {
            /* Switch: '<S136>/Switch2' incorporates:
             *  Constant: '<S136>/Constant Value1'
             *  Sum: '<S136>/Subtraction'
             *  Switch: '<S136>/Switch1'
             *  UnitDelay: '<S136>/Unit Delay'
             */
            rtb_Switch1_na = (uint16)((sint32)(((sint32)
                MSPR_ac_DW.UnitDelay_DSTATE_o0) - 1));
        }
        else
        {
            /* Switch: '<S136>/Switch1' incorporates:
             *  Switch: '<S136>/Switch2'
             *  UnitDelay: '<S136>/Unit Delay'
             */
            rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_o0;
        }

        /* End of Switch: '<S136>/Switch1' */
        /* End of Outputs for SubSystem: '<S130>/EdgeRising1' */

        /* RelationalOperator: '<S136>/Greater  Than1' incorporates:
         *  Constant: '<S136>/Constant Value2'
         */
        VeMSPR_b_MtrASpd_Sgnl_Rcvd = (((sint32)rtb_Switch1_na) > 0);

        /* Update for UnitDelay: '<S136>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_o0 = rtb_Switch1_na;

        /* End of Outputs for SubSystem: '<S130>/Count Down  Reset Enabled1' */

        /* Outputs for Atomic SubSystem: '<S147>/ClosedInterval' */
        /* Switch: '<S147>/Switch' incorporates:
         *  Constant: '<S145>/Calib'
         *  Constant: '<S146>/Calib'
         *  Logic: '<S150>/Logical Operator'
         *  RelationalOperator: '<S150>/Relatonal Operator'
         *  RelationalOperator: '<S150>/Relatonal Operator1'
         */
        if ((rtb_TmpSignalConversionAtLeM_hg >= KeMSPR_n_MtrASpd_MinLmt) &&
                (rtb_TmpSignalConversionAtLeM_hg <= KeMSPR_n_MtrASpd_MaxLmt))
        {
            /* Switch: '<S147>/Switch' */
            rtb_TmpSignalConversionAtVeESPR = rtb_TmpSignalConversionAtLeM_hg;
        }
        else
        {
            /* Switch: '<S147>/Switch' incorporates:
             *  UnitDelay: '<S147>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeESPR = MSPR_ac_DW.UnitDelay_DSTATE_ee;
        }

        /* End of Switch: '<S147>/Switch' */
        /* End of Outputs for SubSystem: '<S147>/ClosedInterval' */

        /* Outputs for Atomic SubSystem: '<S147>/GradientLimiter' */
        /* Sum: '<S151>/Sum2' incorporates:
         *  UnitDelay: '<S151>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_hg = rtb_TmpSignalConversionAtVeESPR -
            MSPR_ac_DW.UnitDelay_DSTATE_do;

        /* Outputs for Atomic SubSystem: '<S151>/Limiter' */
        /* Switch: '<S152>/Switch1' incorporates:
         *  Constant: '<S142>/Calib'
         *  RelationalOperator: '<S152>/Relational Operator'
         */
        if (KeMSPR_dn_MtrASpdRate_MaxLmt < rtb_TmpSignalConversionAtLeM_hg)
        {
            /* Switch: '<S152>/Switch1' */
            rtb_TmpSignalConversionAtLeM_hg = KeMSPR_dn_MtrASpdRate_MaxLmt;
        }

        /* End of Switch: '<S152>/Switch1' */

        /* Switch: '<S152>/Switch' incorporates:
         *  Constant: '<S143>/Calib'
         *  RelationalOperator: '<S152>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtLeM_hg <= KeMSPR_dn_MtrASpdRate_MinLmt)
        {
            rtb_TmpSignalConversionAtLeM_hg = KeMSPR_dn_MtrASpdRate_MinLmt;
        }

        /* End of Switch: '<S152>/Switch' */
        /* End of Outputs for SubSystem: '<S151>/Limiter' */

        /* Sum: '<S151>/Sum3' incorporates:
         *  UnitDelay: '<S151>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeES_e = rtb_TmpSignalConversionAtLeM_hg +
            MSPR_ac_DW.UnitDelay_DSTATE_do;

        /* Update for UnitDelay: '<S151>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_do = rtb_TmpSignalConversionAtVeES_e;

        /* End of Outputs for SubSystem: '<S147>/GradientLimiter' */

        /* Logic: '<S130>/Logical4' */
        rtb_TmpSignalConversionAtLe_m4f = !VeMSPR_b_MtrASpd_Sgnl_Rcvd;

        /* Outputs for Atomic SubSystem: '<S130>/EdgeRising3' */
        /* Logic: '<S139>/OR1' incorporates:
         *  UnitDelay: '<S139>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_di = !MSPR_ac_DW.UnitDelay_DSTATE_kn;

        /* Update for UnitDelay: '<S139>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_kn = rtb_TmpSignalConversionAtLe_m4f;

        /* Outputs for Atomic SubSystem: '<S130>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S137>/Switch1' incorporates:
         *  Logic: '<S139>/AND'
         *  Switch: '<S137>/Switch2'
         */
        if (rtb_TmpSignalConversionAtLe_m4f && rtb_TmpSignalConversionAtLeM_di)
        {
            /* Switch: '<S137>/Switch1' */
            rtb_TmpSignalConversionAtLeM_hg = rtb_TmpSignalConversionAtVeES_e;
        }
        else if (rtb_TmpSignalConversionAtLe_m4f)
        {
            /* Switch: '<S137>/Switch2' incorporates:
             *  Constant: '<S144>/Calib'
             *  Product: '<S137>/Multiplication'
             *  Sum: '<S137>/Subtraction'
             *  Sum: '<S137>/Summation'
             *  Switch: '<S137>/Switch1'
             *  UnitDelay: '<S137>/Unit Delay'
             */
            rtb_TmpSignalConversionAtLeM_hg = ((rtb_TmpSignalConversionAtVeES_e
                - MSPR_ac_DW.UnitDelay_DSTATE_oq) * KeMSPR_k_MtrASpdFilterConst)
                + MSPR_ac_DW.UnitDelay_DSTATE_oq;
        }
        else
        {
            /* Switch: '<S137>/Switch1' incorporates:
             *  Switch: '<S137>/Switch2'
             *  UnitDelay: '<S137>/Unit Delay'
             */
            rtb_TmpSignalConversionAtLeM_hg = MSPR_ac_DW.UnitDelay_DSTATE_oq;
        }

        /* End of Switch: '<S137>/Switch1' */
        /* End of Outputs for SubSystem: '<S130>/EdgeRising3' */

        /* Update for UnitDelay: '<S137>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_oq = rtb_TmpSignalConversionAtLeM_hg;

        /* End of Outputs for SubSystem: '<S130>/Digital Lowpass Reset Enabled' */

        /* Merge: '<S76>/Merge2' incorporates:
         *  Gain: '<S149>/Gain'
         */
        VeMSPC_n_MtrA_Spd_Raw = rtb_TmpSignalConversionAtVeES_e;

        /* Merge: '<S76>/Merge1' incorporates:
         *  Constant: '<S140>/Constant'
         *  SignalConversion generated from: '<S130>/MtrASpd_Src'
         */
        VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpSrc_MCP;

        /* Merge: '<S76>/Merge3' incorporates:
         *  Constant: '<S130>/FALSE Constant'
         *  SignalConversion generated from: '<S130>/MtrASpdFA_Out'
         */
        VeMSPC_b_MtrA_Spd_FA = false;

        /* Update for UnitDelay: '<S147>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_ee = rtb_TmpSignalConversionAtVeESPR;

        /* End of Outputs for SubSystem: '<S76>/If Action Subsystem' */
    }
    else if (KeMSPR_b_ReplaceMtrASpdIfFltd)
    {
        /* Outputs for IfAction SubSystem: '<S76>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        for (i = 0; i < 2; i++)
        {
            /* DataTypeConversion: '<S131>/Data Type Conversion' incorporates:
             *  Constant: '<S157>/Calib'
             */
            rtb_DataTypeConversion[i] = (sint16)KaMSPR_e_MtrASpdSrcPriority[(i)];
        }

        /* SignalConversion generated from: '<S164>/ SFunction ' incorporates:
         *  Chart: '<S131>/SourcePrioritization'
         *  Constant: '<S153>/Constant'
         *  RelationalOperator: '<S131>/Comparison5'
         *  SignalConversion generated from: '<S17>/VeESPR_e_EngineSpeedStatus'
         */
        rtb_TmpSignalConversionAtSFun_n[0] = rtb_TmpSignalConversionAtVeES_m;
        rtb_TmpSignalConversionAtSFun_n[1] = (((uint32)
            rtb_TmpSignalConversionAtVeES_f) != CeESPR_e_EngSpdNormal);

        /* Chart: '<S131>/SourcePrioritization' */
        /* Gateway: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrA_Processing/If Action
           Subsystem1/SourcePrioritization */
        /* During: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrA_Processing/If Action
           Subsystem1/SourcePrioritization */
        /* Entry Internal: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrA_Processing/If Action
           Subsystem1/SourcePrioritization */
        /* Transition: '<S164>:12' */
        /* Transition: '<S164>:13' */
        b_index = 0;
        do
        {
            exitg1 = 0;
            if (b_index < 2)
            {
                /* Transition: '<S164>:10' */
                /* Transition: '<S164>:32' */
                if (rtb_DataTypeConversion[b_index] != 255)
                {
                    /* Transition: '<S164>:15' */
                    /* Transition: '<S164>:17' */
                    if (rtb_TmpSignalConversionAtSFun_n[rtb_DataTypeConversion[b_index]])
                    {
                        /* Transition: '<S164>:19' */
                        /* Transition: '<S164>:34' */
                        b_index++;

                        /* Transition: '<S164>:37' */
                        /* Transition: '<S164>:40' */
                        /* Transition: '<S164>:41' */
                    }
                    else
                    {
                        /* Transition: '<S164>:23' */
                        b_index = rtb_DataTypeConversion[b_index];

                        /* Transition: '<S164>:45' */
                        /* Transition: '<S164>:46' */
                        exitg1 = 1;
                    }
                }
                else
                {
                    /* Transition: '<S164>:44' */
                    b_index = 255;

                    /* Transition: '<S164>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S164>:8' */
                b_index = 255;
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* SwitchCase: '<S131>/Switch_Case' */
        switch (b_index)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S131>/If Action Subsystem' incorporates:
             *  ActionPort: '<S154>/Action Port'
             */
            /* Merge: '<S76>/Merge1' incorporates:
             *  Constant: '<S165>/Constant'
             *  SignalConversion generated from: '<S154>/MtrASpd_Src'
             */
            VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpdSrc_BuffCrank;

            /* Merge: '<S76>/Merge3' incorporates:
             *  Constant: '<S154>/FALSE Constant'
             *  SignalConversion generated from: '<S154>/MtrASpdFA_Out'
             */
            VeMSPC_b_MtrA_Spd_FA = false;

            /* End of Outputs for SubSystem: '<S131>/If Action Subsystem' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S131>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S155>/Action Port'
             */
            /* Merge: '<S131>/Merge' incorporates:
             *  Inport: '<S155>/EngSpdCAN'
             */
            rtb_TmpSignalConversionAtVeESPR = rtb_TmpSignalConversionAtVeES_e;

            /* Merge: '<S76>/Merge1' incorporates:
             *  Constant: '<S166>/Constant'
             *  SignalConversion generated from: '<S155>/MtrASpd_Src'
             */
            VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpdSrc_CANEngSpd;

            /* Merge: '<S76>/Merge3' incorporates:
             *  Constant: '<S155>/FALSE Constant'
             *  SignalConversion generated from: '<S155>/MtrASpdFA_Out'
             */
            VeMSPC_b_MtrA_Spd_FA = false;

            /* End of Outputs for SubSystem: '<S131>/If Action Subsystem1' */
            break;

          default:
            /* Outputs for IfAction SubSystem: '<S131>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S156>/Action Port'
             */
            /* Merge: '<S131>/Merge' incorporates:
             *  Constant: '<S156>/Constant'
             *  SignalConversion generated from: '<S156>/MtrASpd_Out'
             */
            rtb_TmpSignalConversionAtVeESPR = 0.0F;

            /* Merge: '<S76>/Merge1' incorporates:
             *  Constant: '<S167>/Constant'
             *  SignalConversion generated from: '<S156>/MtrASpd_Src'
             */
            VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpdSrc_NoSrc;

            /* Merge: '<S76>/Merge3' incorporates:
             *  Constant: '<S156>/TRUE Constant'
             *  SignalConversion generated from: '<S156>/MtrASpdFA_Out'
             */
            VeMSPC_b_MtrA_Spd_FA = true;

            /* End of Outputs for SubSystem: '<S131>/If Action Subsystem2' */
            break;
        }

        /* End of SwitchCase: '<S131>/Switch_Case' */

        /* Switch: '<S131>/Switch1' incorporates:
         *  Constant: '<S158>/Calib'
         */
        if (KeMSPR_b_EnblSIEVTReplSpd)
        {
            /* Switch: '<S131>/Switch1' incorporates:
             *  Constant: '<S159>/Calib'
             *  Constant: '<S160>/Calib'
             *  Product: '<S131>/Divide'
             *  Product: '<S131>/Product1'
             *  Sum: '<S131>/Subtract'
             */
            rtb_TmpSignalConversionAtVeESPR = (rtb_TmpSignalConversionAtVeESPR -
                (KeMSPR_r_MtrB2MtrARat * VeMSPC_n_MtrBSpdRaw)) /
                KeMSPR_r_PlanetaryGrRat;
        }
        else
        {
            /* Switch: '<S131>/Switch1' incorporates:
             *  Constant: '<S161>/Calib'
             *  Product: '<S131>/Product'
             */
            rtb_TmpSignalConversionAtVeESPR *= (float32)
                Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
        }

        /* End of Switch: '<S131>/Switch1' */

        /* Merge: '<S76>/Merge' incorporates:
         *  Gain: '<S162>/Gain'
         */
        rtb_TmpSignalConversionAtLeM_hg = rtb_TmpSignalConversionAtVeESPR;

        /* Merge: '<S76>/Merge2' incorporates:
         *  Gain: '<S163>/Gain'
         */
        VeMSPC_n_MtrA_Spd_Raw = rtb_TmpSignalConversionAtVeESPR;

        /* End of Outputs for SubSystem: '<S76>/If Action Subsystem1' */
    }
    else if (KeMSPR_b_ReplaceMtrASpdForBEV)
    {
        /* SignalConversion generated from: '<S171>/ SFunction ' incorporates:
         *  Inport: '<Root>/VeCSVR_b_PrimWhlSpdSignedFA'
         */
        (void)Rte_Read_VeCSVR_b_PrimWhlSpdSignedFA_Value
            (&rtb_TmpSignalConversionAtSFun_n[0]);

        /* Outputs for IfAction SubSystem: '<S76>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        for (i = 0; i < 2; i++)
        {
            /* DataTypeConversion: '<S132>/Data Type Conversion1' incorporates:
             *  Constant: '<S168>/Calib'
             */
            rtb_DataTypeConversion[i] = (sint16)KaMSPR_e_BEVMtrASpdSrcPriority
                [(i)];
        }

        /* SignalConversion generated from: '<S171>/ SFunction ' incorporates:
         *  Chart: '<S132>/SourcePrioritization'
         */
        rtb_TmpSignalConversionAtSFun_n[1] = rtb_TmpSignalConversionAtVeCS_o;

        /* Chart: '<S132>/SourcePrioritization' */
        /* Gateway: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrA_Processing/If Action
           Subsystem2/SourcePrioritization */
        /* During: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrA_Processing/If Action
           Subsystem2/SourcePrioritization */
        /* Entry Internal: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrA_Processing/If Action
           Subsystem2/SourcePrioritization */
        /* Transition: '<S171>:12' */
        /*  Priority Based Source selection  */
        /* Transition: '<S171>:13' */
        b_index = 0;
        do
        {
            exitg1 = 0;
            if (b_index < 2)
            {
                /* Transition: '<S171>:10' */
                /* Transition: '<S171>:32' */
                if (rtb_DataTypeConversion[b_index] != 255)
                {
                    /* Transition: '<S171>:15' */
                    /* Transition: '<S171>:17' */
                    if (rtb_TmpSignalConversionAtSFun_n[rtb_DataTypeConversion[b_index]])
                    {
                        /* Transition: '<S171>:19' */
                        /* Transition: '<S171>:34' */
                        b_index++;

                        /* Transition: '<S171>:37' */
                        /* Transition: '<S171>:40' */
                        /* Transition: '<S171>:41' */
                    }
                    else
                    {
                        /* Transition: '<S171>:23' */
                        b_index = rtb_DataTypeConversion[b_index];

                        /* Transition: '<S171>:45' */
                        /* Transition: '<S171>:46' */
                        exitg1 = 1;
                    }
                }
                else
                {
                    /* Transition: '<S171>:44' */
                    b_index = 255;

                    /* Unknown Source */
                    /* Transition: '<S171>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S171>:8' */
                b_index = 255;

                /* Unknown Source */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* SwitchCase: '<S132>/Switch_Case' incorporates:
         *  Inport: '<Root>/VeCSVR_n_PrimWhlSpdSigned'
         */
        switch (b_index)
        {
          case 0:
            (void)Rte_Read_VeCSVR_n_PrimWhlSpdSigned_Value(&rtb_Switch1);

            /* Outputs for IfAction SubSystem: '<S132>/Switch Case Action Subsystem2' incorporates:
             *  ActionPort: '<S174>/Action Port'
             */
            /* Merge: '<S132>/Merge' incorporates:
             *  Constant: '<S179>/Calib'
             *  Inport: '<Root>/VeCSVR_n_PrimWhlSpdSigned'
             *  Product: '<S174>/Product'
             */
            rtb_TmpSignalConversionAtLeM_hg = rtb_Switch1 *
                KeMSPR_Cf_CnvrtWhlSpdToMtrASpd;

            /* Merge: '<S76>/Merge1' incorporates:
             *  Constant: '<S178>/Constant'
             *  SignalConversion generated from: '<S174>/MtrASpd_Src'
             */
            VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpdSrc_PrimWhlSpd;

            /* Merge: '<S76>/Merge3' incorporates:
             *  Constant: '<S174>/FALSE Constant'
             *  SignalConversion generated from: '<S174>/MtrASpdFA_Out'
             */
            VeMSPC_b_MtrA_Spd_FA = false;

            /* End of Outputs for SubSystem: '<S132>/Switch Case Action Subsystem2' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S132>/Switch Case Action Subsystem1' incorporates:
             *  ActionPort: '<S173>/Action Port'
             */
            /* Merge: '<S132>/Merge' incorporates:
             *  Constant: '<S177>/Calib'
             *  Product: '<S173>/Product'
             */
            rtb_TmpSignalConversionAtLeM_hg = (rtb_TmpSignalConversionAtVeCSVR *
                KeMSPR_Cf_CnvrtToMtrASpd) * rtb_Product4;

            /* Merge: '<S76>/Merge1' incorporates:
             *  Constant: '<S176>/Constant'
             *  SignalConversion generated from: '<S173>/MtrASpd_Src'
             */
            VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpdSrc_VehSpd;

            /* Merge: '<S76>/Merge3' incorporates:
             *  Constant: '<S173>/FALSE Constant'
             *  SignalConversion generated from: '<S173>/MtrASpdFA_Out'
             */
            VeMSPC_b_MtrA_Spd_FA = false;

            /* End of Outputs for SubSystem: '<S132>/Switch Case Action Subsystem1' */
            break;

          default:
            /* Outputs for IfAction SubSystem: '<S132>/Switch Case Action Subsystem' incorporates:
             *  ActionPort: '<S172>/Action Port'
             */
            /* Merge: '<S132>/Merge' incorporates:
             *  Constant: '<S172>/Constant Value'
             *  SignalConversion generated from: '<S172>/MtrASpd_Out'
             */
            rtb_TmpSignalConversionAtLeM_hg = 0.0F;

            /* Merge: '<S76>/Merge1' incorporates:
             *  Constant: '<S175>/Constant'
             *  SignalConversion generated from: '<S172>/MtrASpd_Src'
             */
            VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpdSrc_NoSrc;

            /* Merge: '<S76>/Merge3' incorporates:
             *  Constant: '<S172>/TRUE Constant'
             *  SignalConversion generated from: '<S172>/MtrASpdFA_Out'
             */
            VeMSPC_b_MtrA_Spd_FA = true;

            /* End of Outputs for SubSystem: '<S132>/Switch Case Action Subsystem' */
            break;
        }

        /* End of SwitchCase: '<S132>/Switch_Case' */

        /* Merge: '<S76>/Merge2' incorporates:
         *  Gain: '<S169>/Gain'
         */
        VeMSPC_n_MtrA_Spd_Raw = rtb_TmpSignalConversionAtLeM_hg;

        /* End of Outputs for SubSystem: '<S76>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S76>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        /* Merge: '<S76>/Merge' incorporates:
         *  Constant: '<S133>/Constant'
         *  SignalConversion generated from: '<S133>/MtrASpd_Out'
         */
        rtb_TmpSignalConversionAtLeM_hg = 0.0F;

        /* Merge: '<S76>/Merge1' incorporates:
         *  Constant: '<S180>/Constant'
         *  SignalConversion generated from: '<S133>/MtrASpd_Src'
         */
        VeMSPC_e_MtrA_Spd_Src = CeMSPR_e_MtrSpdSrc_NoSrc;

        /* Merge: '<S76>/Merge2' incorporates:
         *  Constant: '<S133>/Constant1'
         *  SignalConversion generated from: '<S133>/MtrASpd_Raw'
         */
        VeMSPC_n_MtrA_Spd_Raw = 0.0F;

        /* Merge: '<S76>/Merge3' incorporates:
         *  Constant: '<S133>/TRUE Constant'
         *  SignalConversion generated from: '<S133>/MtrASpdFA_Out'
         */
        VeMSPC_b_MtrA_Spd_FA = true;

        /* End of Outputs for SubSystem: '<S76>/If Action Subsystem3' */
    }

    /* End of If: '<S76>/If' */

    /* Product: '<S114>/Multiplication2' incorporates:
     *  Constant: '<S71>/Calib'
     *  Product: '<S114>/Multiplication3'
     *  Product: '<S114>/Multiplication4'
     *  Sum: '<S114>/Summation'
     *  Sum: '<S114>/Summation1'
     *  Sum: '<S114>/Summation2'
     *  UnitDelay: '<S114>/Unit Delay'
     *  UnitDelay: '<S114>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeESPR = ((VeMSPC_n_MtrA_Spd_Raw - ((rtb_Merge1_tmp
        - KeMSPR_t_MtrSpdTimePeriod) * MSPR_ac_DW.UnitDelay1_DSTATE)) -
        MSPR_ac_DW.UnitDelay_DSTATE) / (rtb_Merge1_tmp +
        KeMSPR_t_MtrSpdTimePeriod);

    /* Outputs for Atomic SubSystem: '<S125>/ClosedInterval' */
    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S123>/Calib'
     *  Constant: '<S124>/Calib'
     *  Logic: '<S127>/Logical Operator'
     *  RelationalOperator: '<S127>/Relatonal Operator'
     *  RelationalOperator: '<S127>/Relatonal Operator1'
     */
    if ((rtb_TmpSignalConversionAtLe_ln3 < KeMSPR_n_MtrAAccel_MinLmt) ||
            (rtb_TmpSignalConversionAtLe_ln3 > KeMSPR_n_MtrAAccel_MaxLmt))
    {
        /* Switch: '<S125>/Switch' incorporates:
         *  UnitDelay: '<S125>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLe_ln3 = MSPR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S125>/Switch' */
    /* End of Outputs for SubSystem: '<S125>/ClosedInterval' */

    /* Outputs for Atomic SubSystem: '<S125>/GradientLimiter' */
    /* Sum: '<S128>/Sum2' incorporates:
     *  UnitDelay: '<S128>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_e = rtb_TmpSignalConversionAtLe_ln3 -
        MSPR_ac_DW.UnitDelay_DSTATE_kz;

    /* Outputs for Atomic SubSystem: '<S128>/Limiter' */
    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S120>/Calib'
     *  RelationalOperator: '<S129>/Relational Operator'
     */
    if (KeMSPR_dn_MtrAAccelRate_MaxLmt < rtb_TmpSignalConversionAtVeES_e)
    {
        /* Merge: '<S74>/Merge1' */
        rtb_Merge1 = KeMSPR_dn_MtrAAccelRate_MaxLmt;
    }
    else
    {
        /* Merge: '<S74>/Merge1' */
        rtb_Merge1 = rtb_TmpSignalConversionAtVeES_e;
    }

    /* End of Switch: '<S129>/Switch1' */

    /* Switch: '<S129>/Switch' incorporates:
     *  Constant: '<S121>/Calib'
     *  RelationalOperator: '<S129>/Relational Operator1'
     */
    if (rtb_Merge1 <= KeMSPR_dn_MtrAAccelRate_MinLmt)
    {
        rtb_Merge1 = KeMSPR_dn_MtrAAccelRate_MinLmt;
    }

    /* End of Switch: '<S129>/Switch' */
    /* End of Outputs for SubSystem: '<S128>/Limiter' */

    /* Sum: '<S128>/Sum3' incorporates:
     *  UnitDelay: '<S128>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_e = rtb_Merge1 +
        MSPR_ac_DW.UnitDelay_DSTATE_kz;

    /* Update for UnitDelay: '<S128>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_kz = rtb_TmpSignalConversionAtVeES_e;

    /* End of Outputs for SubSystem: '<S125>/GradientLimiter' */

    /* Switch: '<S75>/Switch1' */
    if (VeMSPR_b_MtrAAccel_Sgnl_Rcvd)
    {
        /* Switch: '<S75>/Switch1' incorporates:
         *  UnitDelay: '<S75>/Unit Delay1'
         */
        rtb_Switch1 = MSPR_ac_DW.UnitDelay1_DSTATE_i;
    }
    else
    {
        /* Switch: '<S75>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeES_e;
    }

    /* End of Switch: '<S75>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S75>/Digital Lowpass Reset Enabled2' */
    /* Sum: '<S115>/Summation' incorporates:
     *  Constant: '<S122>/Calib'
     *  Product: '<S115>/Multiplication'
     *  Sum: '<S115>/Subtraction'
     *  UnitDelay: '<S115>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeES_e = ((rtb_Switch1 -
        MSPR_ac_DW.UnitDelay_DSTATE_ps) * KeMSPR_k_MtrAAccelFilterConst) +
        MSPR_ac_DW.UnitDelay_DSTATE_ps;

    /* Update for UnitDelay: '<S115>/Unit Delay' incorporates:
     *  Switch: '<S115>/Switch2'
     */
    MSPR_ac_DW.UnitDelay_DSTATE_ps = rtb_TmpSignalConversionAtVeES_e;

    /* End of Outputs for SubSystem: '<S75>/Digital Lowpass Reset Enabled2' */

    /* RelationalOperator: '<S74>/Comparison1' incorporates:
     *  Logic: '<S75>/Logical'
     *  Logic: '<S75>/Logical2'
     */
    rtb_TmpSignalConversionAtLeM_ll = (rtb_TmpSignalConversionAtLeM_ll &&
        (!rtb_TmpSignalConversionAtLeM_ld));

    /* Switch: '<S117>/Switch1' incorporates:
     *  Switch: '<S118>/Switch1'
     */
    if (rtb_TmpSignalConversionAtLeM_ll)
    {
        /* Switch: '<S117>/Switch1' */
        VeMSPC_dn_MtrA_AccelRaw = rtb_TmpSignalConversionAtVeESPR;

        /* Switch: '<S118>/Switch1' */
        rtb_TmpSignalConversionAtVeES_e = rtb_TmpSignalConversionAtVeESPR;
    }
    else
    {
        /* Switch: '<S117>/Switch1' */
        VeMSPC_dn_MtrA_AccelRaw = rtb_Switch1;
    }

    /* End of Switch: '<S117>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S78>/EdgeRising5' */
    /* Logic: '<S192>/OR1' incorporates:
     *  UnitDelay: '<S192>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ll = !MSPR_ac_DW.UnitDelay_DSTATE_pcy;

    /* Update for UnitDelay: '<S192>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_pcy = rtb_TmpSignalConversionAtLeM_om;

    /* Outputs for Atomic SubSystem: '<S78>/Count Down  Reset Enabled3' */
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S189>/Constant Value'
     *  Logic: '<S192>/AND'
     *  RelationalOperator: '<S189>/Greater  Than'
     *  Switch: '<S189>/Switch2'
     *  UnitDelay: '<S189>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_om && rtb_TmpSignalConversionAtLeM_ll)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S195>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_MtrBAccelMinWaitTime;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_f) > 0)
    {
        /* Switch: '<S189>/Switch2' incorporates:
         *  Constant: '<S189>/Constant Value1'
         *  Sum: '<S189>/Subtraction'
         *  Switch: '<S189>/Switch1'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_f) - 1));
    }
    else
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Switch: '<S189>/Switch2'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S189>/Switch1' */
    /* End of Outputs for SubSystem: '<S78>/EdgeRising5' */

    /* RelationalOperator: '<S189>/Greater  Than1' incorporates:
     *  Constant: '<S189>/Constant Value2'
     */
    VeMSPR_b_MtrBAccel_Sgnl_Rcvd = (((sint32)rtb_Switch1_na) > 0);

    /* Update for UnitDelay: '<S189>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_na;

    /* End of Outputs for SubSystem: '<S78>/Count Down  Reset Enabled3' */

    /* Product: '<S190>/Multiplication2' incorporates:
     *  Constant: '<S71>/Calib'
     *  Product: '<S190>/Multiplication4'
     *  Sum: '<S190>/Summation'
     *  Sum: '<S190>/Summation1'
     *  Sum: '<S190>/Summation2'
     *  UnitDelay: '<S190>/Unit Delay'
     *  UnitDelay: '<S190>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtLeM_p1 = ((VeMSPC_n_MtrBSpdRaw - ((rtb_Merge1_tmp -
        KeMSPR_t_MtrSpdTimePeriod) * MSPR_ac_DW.UnitDelay1_DSTATE_ie)) -
        MSPR_ac_DW.UnitDelay_DSTATE_pu) / (rtb_Merge1_tmp +
        KeMSPR_t_MtrSpdTimePeriod);

    /* Outputs for Atomic SubSystem: '<S201>/ClosedInterval' */
    /* Switch: '<S201>/Switch' incorporates:
     *  Constant: '<S199>/Calib'
     *  Constant: '<S200>/Calib'
     *  Logic: '<S203>/Logical Operator'
     *  RelationalOperator: '<S203>/Relatonal Operator'
     *  RelationalOperator: '<S203>/Relatonal Operator1'
     */
    if ((rtb_TmpSignalConversionAtLeM_eb < KeMSPR_n_MtrBAccel_MinLmt) ||
            (rtb_TmpSignalConversionAtLeM_eb > KeMSPR_n_MtrBAccel_MaxLmt))
    {
        /* Switch: '<S201>/Switch' incorporates:
         *  UnitDelay: '<S201>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_eb = MSPR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* End of Switch: '<S201>/Switch' */
    /* End of Outputs for SubSystem: '<S201>/ClosedInterval' */

    /* Outputs for Atomic SubSystem: '<S201>/GradientLimiter' */
    /* Sum: '<S204>/Sum2' incorporates:
     *  UnitDelay: '<S204>/Unit Delay'
     */
    rtb_Merge1 = rtb_TmpSignalConversionAtLeM_eb -
        MSPR_ac_DW.UnitDelay_DSTATE_er;

    /* Outputs for Atomic SubSystem: '<S204>/Limiter' */
    /* Switch: '<S205>/Switch1' incorporates:
     *  Constant: '<S196>/Calib'
     *  RelationalOperator: '<S205>/Relational Operator'
     */
    if (KeMSPR_dn_MtrBAccelRate_MaxLmt < rtb_Merge1)
    {
        /* Switch: '<S191>/Switch2' */
        rtb_Merge1 = KeMSPR_dn_MtrBAccelRate_MaxLmt;
    }

    /* End of Switch: '<S205>/Switch1' */

    /* Switch: '<S205>/Switch' incorporates:
     *  Constant: '<S197>/Calib'
     *  RelationalOperator: '<S205>/Relational Operator1'
     */
    if (rtb_Merge1 <= KeMSPR_dn_MtrBAccelRate_MinLmt)
    {
        rtb_Merge1 = KeMSPR_dn_MtrBAccelRate_MinLmt;
    }

    /* End of Switch: '<S205>/Switch' */
    /* End of Outputs for SubSystem: '<S204>/Limiter' */

    /* Sum: '<S204>/Sum3' incorporates:
     *  UnitDelay: '<S204>/Unit Delay'
     */
    rtb_Merge1 += MSPR_ac_DW.UnitDelay_DSTATE_er;

    /* Update for UnitDelay: '<S204>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_er = rtb_Merge1;

    /* End of Outputs for SubSystem: '<S201>/GradientLimiter' */

    /* Switch: '<S78>/Switch2' */
    if (VeMSPR_b_MtrBAccel_Sgnl_Rcvd)
    {
        /* Switch: '<S78>/Switch2' incorporates:
         *  UnitDelay: '<S78>/Unit Delay2'
         */
        rtb_Switch2 = MSPR_ac_DW.UnitDelay2_DSTATE;
    }
    else
    {
        /* Switch: '<S78>/Switch2' */
        rtb_Switch2 = rtb_Merge1;
    }

    /* End of Switch: '<S78>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S78>/Digital Lowpass Reset Enabled3' */
    /* Sum: '<S191>/Summation' incorporates:
     *  Constant: '<S198>/Calib'
     *  Product: '<S191>/Multiplication'
     *  Sum: '<S191>/Subtraction'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    rtb_Merge1 = ((rtb_Switch2 - MSPR_ac_DW.UnitDelay_DSTATE_n3) *
                  KeMSPR_k_MtrBAccelFilterConst) +
        MSPR_ac_DW.UnitDelay_DSTATE_n3;

    /* Update for UnitDelay: '<S191>/Unit Delay' incorporates:
     *  Switch: '<S191>/Switch2'
     */
    MSPR_ac_DW.UnitDelay_DSTATE_n3 = rtb_Merge1;

    /* End of Outputs for SubSystem: '<S78>/Digital Lowpass Reset Enabled3' */

    /* Switch: '<S193>/Switch1' incorporates:
     *  Logic: '<S78>/Logical1'
     *  Logic: '<S78>/Logical3'
     *  Switch: '<S194>/Switch1'
     */
    if (rtb_TmpSignalConversionAtLeM_kl && (!rtb_TmpSignalConversionAtLeM_p0))
    {
        /* Switch: '<S193>/Switch1' */
        VeMSPC_dn_MtrB_AccelRaw = rtb_TmpSignalConversionAtLeM_p1;

        /* Switch: '<S194>/Switch1' */
        rtb_Sum2_l = rtb_TmpSignalConversionAtLeM_p1;
    }
    else
    {
        /* Switch: '<S193>/Switch1' */
        VeMSPC_dn_MtrB_AccelRaw = rtb_Switch2;

        /* Outputs for Atomic SubSystem: '<S78>/Digital Lowpass Reset Enabled3' */
        /* Switch: '<S194>/Switch1' incorporates:
         *  Switch: '<S191>/Switch2'
         */
        rtb_Sum2_l = rtb_Merge1;

        /* End of Outputs for SubSystem: '<S78>/Digital Lowpass Reset Enabled3' */
    }

    /* End of Switch: '<S193>/Switch1' */

    /* Gain: '<S216>/Gain' */
    rtb_Switch1_e1 = rtb_Switch3_o;

    /* RelationalOperator: '<S81>/Comparison4' incorporates:
     *  Inport: '<Root>/VeADCR_e_WEDLeftStat'
     *  Inport: '<Root>/VeADCR_e_WEDRightStat'
     *  Logic: '<S81>/Logical4'
     *  RelationalOperator: '<S81>/Comparison1'
     */
#if Rte_SysCon_Variant_MSPR_1

    /* Outputs for Atomic SubSystem: '<S68>/MtrC_Management' */
    (void)Rte_Read_VeADCR_e_WEDLeftStat_Value(&tmpRead_0);
    (void)Rte_Read_VeADCR_e_WEDRightStat_Value(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S80>/MtrC_Management' */
    /* Outputs for Atomic SubSystem: '<S277>/EdgeRising1' */
    /* Logic: '<S281>/OR1' incorporates:
     *  Inport: '<Root>/VeADCR_e_WEDLeftStat'
     *  Inport: '<Root>/VeADCR_e_WEDRightStat'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_om = !MSPR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S281>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtLeM_ds;

    /* Outputs for Atomic SubSystem: '<S277>/Count Down  Reset Enabled1' */
    /* Switch: '<S278>/Switch1' incorporates:
     *  Constant: '<S278>/Constant Value'
     *  Logic: '<S281>/AND'
     *  RelationalOperator: '<S278>/Greater  Than'
     *  Switch: '<S278>/Switch2'
     *  UnitDelay: '<S278>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_ds && rtb_TmpSignalConversionAtLeM_om)
    {
        /* Switch: '<S278>/Switch1' incorporates:
         *  Constant: '<S284>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_MtrCAccelMinWaitTime;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_cb) > 0)
    {
        /* Switch: '<S278>/Switch2' incorporates:
         *  Constant: '<S278>/Constant Value1'
         *  Sum: '<S278>/Subtraction'
         *  Switch: '<S278>/Switch1'
         *  UnitDelay: '<S278>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_cb) - 1));
    }
    else
    {
        /* Switch: '<S278>/Switch1' incorporates:
         *  Switch: '<S278>/Switch2'
         *  UnitDelay: '<S278>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_cb;
    }

    /* End of Switch: '<S278>/Switch1' */
    /* End of Outputs for SubSystem: '<S277>/EdgeRising1' */

    /* RelationalOperator: '<S278>/Greater  Than1' incorporates:
     *  Constant: '<S278>/Constant Value2'
     */
    VeMSPR_b_MtrCAccel_Sgnl_Rcvd = (((sint32)rtb_Switch1_na) > 0);

    /* Update for UnitDelay: '<S278>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_cb = rtb_Switch1_na;

    /* End of Outputs for SubSystem: '<S277>/Count Down  Reset Enabled1' */

    /* If: '<S292>/If' incorporates:
     *  Logic: '<S292>/Logical2'
     */
    if (!rtb_TmpSignalConversionAtLeM_i0)
    {
        /* Outputs for IfAction SubSystem: '<S292>/If Action Subsystem' incorporates:
         *  ActionPort: '<S303>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S303>/EdgeRising1' */
        /* Logic: '<S308>/OR1' incorporates:
         *  UnitDelay: '<S308>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_ds = !MSPR_ac_DW.UnitDelay_DSTATE_fr;

        /* Update for UnitDelay: '<S308>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_fr = rtb_TmpSignalConversionAtLeM_ft;

        /* Outputs for Atomic SubSystem: '<S303>/Count Down  Reset Enabled1' */
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S306>/Constant Value'
         *  Logic: '<S308>/AND'
         *  RelationalOperator: '<S306>/Greater  Than'
         *  Switch: '<S306>/Switch2'
         *  UnitDelay: '<S306>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtLeM_ft && rtb_TmpSignalConversionAtLeM_ds)
        {
            /* Switch: '<S306>/Switch1' incorporates:
             *  Constant: '<S311>/Calib'
             */
            rtb_Switch1_na = KeMSPR_Cnt_MtrCSpdMinWaitTime;
        }
        else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_ew) > 0)
        {
            /* Switch: '<S306>/Switch2' incorporates:
             *  Constant: '<S306>/Constant Value1'
             *  Sum: '<S306>/Subtraction'
             *  Switch: '<S306>/Switch1'
             *  UnitDelay: '<S306>/Unit Delay'
             */
            rtb_Switch1_na = (uint16)((sint32)(((sint32)
                MSPR_ac_DW.UnitDelay_DSTATE_ew) - 1));
        }
        else
        {
            /* Switch: '<S306>/Switch1' incorporates:
             *  Switch: '<S306>/Switch2'
             *  UnitDelay: '<S306>/Unit Delay'
             */
            rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_ew;
        }

        /* End of Switch: '<S306>/Switch1' */
        /* End of Outputs for SubSystem: '<S303>/EdgeRising1' */

        /* RelationalOperator: '<S306>/Greater  Than1' incorporates:
         *  Constant: '<S306>/Constant Value2'
         */
        VeMSPR_b_MtrCSpd_Sgnl_Rcvd = (((sint32)rtb_Switch1_na) > 0);

        /* Update for UnitDelay: '<S306>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_ew = rtb_Switch1_na;

        /* End of Outputs for SubSystem: '<S303>/Count Down  Reset Enabled1' */

        /* Outputs for Atomic SubSystem: '<S317>/ClosedInterval' */
        /* Switch: '<S317>/Switch' incorporates:
         *  Constant: '<S315>/Calib'
         *  Constant: '<S316>/Calib'
         *  Logic: '<S320>/Logical Operator'
         *  RelationalOperator: '<S320>/Relatonal Operator'
         *  RelationalOperator: '<S320>/Relatonal Operator1'
         */
        if ((rtb_TmpSignalConversionAtLeM_k0 < KeMSPR_n_MtrCSpd_MinLmt) ||
                (rtb_TmpSignalConversionAtLeM_k0 > KeMSPR_n_MtrCSpd_MaxLmt))
        {
            /* Switch: '<S317>/Switch' incorporates:
             *  UnitDelay: '<S317>/Unit Delay'
             */
            rtb_TmpSignalConversionAtLeM_k0 = MSPR_ac_DW.UnitDelay_DSTATE_nu;
        }

        /* End of Switch: '<S317>/Switch' */
        /* End of Outputs for SubSystem: '<S317>/ClosedInterval' */

        /* Outputs for Atomic SubSystem: '<S317>/GradientLimiter' */
        /* Sum: '<S321>/Sum2' incorporates:
         *  UnitDelay: '<S321>/Unit Delay'
         */
        rtb_Merge1 = rtb_TmpSignalConversionAtLeM_k0 -
            MSPR_ac_DW.UnitDelay_DSTATE_c;

        /* Outputs for Atomic SubSystem: '<S321>/Limiter' */
        /* Switch: '<S322>/Switch1' incorporates:
         *  Constant: '<S312>/Calib'
         *  RelationalOperator: '<S322>/Relational Operator'
         */
        if (KeMSPR_dn_MtrCSpdRate_MaxLmt < rtb_Merge1)
        {
            /* Switch: '<S322>/Switch1' */
            rtb_Merge1 = KeMSPR_dn_MtrCSpdRate_MaxLmt;
        }

        /* End of Switch: '<S322>/Switch1' */

        /* Switch: '<S322>/Switch' incorporates:
         *  Constant: '<S313>/Calib'
         *  RelationalOperator: '<S322>/Relational Operator1'
         */
        if (rtb_Merge1 <= KeMSPR_dn_MtrCSpdRate_MinLmt)
        {
            rtb_Merge1 = KeMSPR_dn_MtrCSpdRate_MinLmt;
        }

        /* End of Switch: '<S322>/Switch' */
        /* End of Outputs for SubSystem: '<S321>/Limiter' */

        /* Sum: '<S321>/Sum3' incorporates:
         *  UnitDelay: '<S321>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCSVR = rtb_Merge1 +
            MSPR_ac_DW.UnitDelay_DSTATE_c;

        /* Update for UnitDelay: '<S321>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeCSVR;

        /* End of Outputs for SubSystem: '<S317>/GradientLimiter' */

        /* Logic: '<S303>/Logical4' */
        rtb_TmpSignalConversionAtLeM_ft = !VeMSPR_b_MtrCSpd_Sgnl_Rcvd;

        /* Outputs for Atomic SubSystem: '<S303>/EdgeRising3' */
        /* Logic: '<S309>/OR1' incorporates:
         *  UnitDelay: '<S309>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_ds = !MSPR_ac_DW.UnitDelay_DSTATE_m;

        /* Update for UnitDelay: '<S309>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtLeM_ft;

        /* Outputs for Atomic SubSystem: '<S303>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S307>/Switch1' incorporates:
         *  Logic: '<S309>/AND'
         *  Switch: '<S307>/Switch2'
         */
        if (rtb_TmpSignalConversionAtLeM_ft && rtb_TmpSignalConversionAtLeM_ds)
        {
            /* Switch: '<S307>/Switch1' */
            rtb_Merge1 = rtb_TmpSignalConversionAtVeCSVR;
        }
        else if (rtb_TmpSignalConversionAtLeM_ft)
        {
            /* Switch: '<S307>/Switch2' incorporates:
             *  Constant: '<S314>/Calib'
             *  Product: '<S307>/Multiplication'
             *  Sum: '<S307>/Subtraction'
             *  Sum: '<S307>/Summation'
             *  Switch: '<S307>/Switch1'
             *  UnitDelay: '<S307>/Unit Delay'
             */
            rtb_Merge1 = ((rtb_TmpSignalConversionAtVeCSVR -
                           MSPR_ac_DW.UnitDelay_DSTATE_pc) *
                          KeMSPR_k_MtrCSpdFilterConst) +
                MSPR_ac_DW.UnitDelay_DSTATE_pc;
        }
        else
        {
            /* Switch: '<S307>/Switch1' incorporates:
             *  Switch: '<S307>/Switch2'
             *  UnitDelay: '<S307>/Unit Delay'
             */
            rtb_Merge1 = MSPR_ac_DW.UnitDelay_DSTATE_pc;
        }

        /* End of Switch: '<S307>/Switch1' */
        /* End of Outputs for SubSystem: '<S303>/EdgeRising3' */

        /* Update for UnitDelay: '<S307>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_pc = rtb_Merge1;

        /* End of Outputs for SubSystem: '<S303>/Digital Lowpass Reset Enabled' */

        /* Merge: '<S292>/Merge2' incorporates:
         *  Gain: '<S319>/Gain'
         */
        MSPR_ac_B.VeMSPC_n_MtrC_SpdRaw = rtb_TmpSignalConversionAtVeCSVR;

        /* Merge: '<S292>/Merge1' incorporates:
         *  Constant: '<S310>/Constant'
         *  SignalConversion generated from: '<S303>/MtrCSpd_Src'
         */
        VeMSPC_e_MtrCSpdSrc = CeMSPR_e_MtrSpSrc_MCP;

        /* Merge: '<S292>/Merge3' incorporates:
         *  Constant: '<S303>/FALSE Constant'
         *  SignalConversion generated from: '<S303>/MtrCSpdFA_Out'
         */
        VeMSPC_b_MtrCSpd_FA = false;

        /* Update for UnitDelay: '<S317>/Unit Delay' */
        MSPR_ac_DW.UnitDelay_DSTATE_nu = rtb_TmpSignalConversionAtLeM_k0;

        /* End of Outputs for SubSystem: '<S292>/If Action Subsystem' */
    }
    else
    {
        /* SignalConversion generated from: '<S326>/ SFunction ' incorporates:
         *  Inport: '<Root>/VeCSVR_b_SecWhlSpdSignedFA'
         */
        (void)Rte_Read_VeCSVR_b_SecWhlSpdSignedFA_Value
            (&rtb_TmpSignalConversionAtSFun_n[0]);

        /* Outputs for IfAction SubSystem: '<S292>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S304>/Action Port'
         */
        for (i = 0; i < 2; i++)
        {
            /* DataTypeConversion: '<S304>/Data Type Conversion1' incorporates:
             *  Constant: '<S323>/Calib'
             */
            rtb_DataTypeConversion[i] = (sint16)KaMSPR_e_BEVMtrCSpdSrcPriority
                [(i)];
        }

        /* SignalConversion generated from: '<S326>/ SFunction ' incorporates:
         *  Chart: '<S304>/SourcePrioritization'
         */
        rtb_TmpSignalConversionAtSFun_n[1] = rtb_TmpSignalConversionAtVeCS_o;

        /* Chart: '<S304>/SourcePrioritization' */
        /* Gateway: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrC_Management/MtrC_Management/MtrC_Processing/If Action
           Subsystem2/SourcePrioritization */
        /* During: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrC_Management/MtrC_Management/MtrC_Processing/If Action
           Subsystem2/SourcePrioritization */
        /* Entry Internal: MSPR_FastTEF/MSPC_FilterMtrSpd/MtrC_Management/MtrC_Management/MtrC_Processing/If Action
           Subsystem2/SourcePrioritization */
        /* Transition: '<S326>:12' */
        /*  Priority Based Source selection  */
        /* Transition: '<S326>:13' */
        b_index = 0;
        do
        {
            exitg1 = 0;
            if (b_index < 2)
            {
                /* Transition: '<S326>:10' */
                /* Transition: '<S326>:32' */
                if (rtb_DataTypeConversion[b_index] != 255)
                {
                    /* Transition: '<S326>:15' */
                    /* Transition: '<S326>:17' */
                    if (rtb_TmpSignalConversionAtSFun_n[rtb_DataTypeConversion[b_index]])
                    {
                        /* Transition: '<S326>:19' */
                        /* Transition: '<S326>:34' */
                        b_index++;

                        /* Transition: '<S326>:37' */
                        /* Transition: '<S326>:40' */
                        /* Transition: '<S326>:41' */
                    }
                    else
                    {
                        /* Transition: '<S326>:23' */
                        b_index = rtb_DataTypeConversion[b_index];

                        /* Transition: '<S326>:45' */
                        /* Transition: '<S326>:46' */
                        exitg1 = 1;
                    }
                }
                else
                {
                    /* Transition: '<S326>:44' */
                    b_index = 255;

                    /* Unknown Source */
                    /* Transition: '<S326>:46' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S326>:8' */
                b_index = 255;

                /* Unknown Source */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* SwitchCase: '<S304>/Switch_Case' */
        switch (b_index)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S304>/Switch Case Action Subsystem2' incorporates:
             *  ActionPort: '<S329>/Action Port'
             */
            /* If: '<S329>/If' incorporates:
             *  Constant: '<S344>/Constant'
             *  Constant: '<S345>/Constant'
             *  Inport: '<Root>/VeADCR_e_WEDLeftStat'
             *  Inport: '<Root>/VeADCR_e_WEDRightStat'
             *  Inport: '<Root>/VeCSVR_n_SecWhlSpdSigned'
             */
            if ((((uint32)tmpRead_0) == CeADCR_e_Closed) && (((uint32)tmpRead_1)
                 == CeADCR_e_Closed))
            {
                (void)Rte_Read_VeCSVR_n_SecWhlSpdSigned_Value(&rtb_Summation_m);

                /* Outputs for IfAction SubSystem: '<S329>/If Action Subsystem' incorporates:
                 *  ActionPort: '<S336>/Action Port'
                 */
                /* Merge: '<S304>/Merge' incorporates:
                 *  Constant: '<S339>/Calib'
                 *  Inport: '<Root>/VeCSVR_n_SecWhlSpdSigned'
                 *  Product: '<S336>/Product'
                 */
                rtb_Merge1 = rtb_Summation_m * KeMSPR_Cf_CnvrtWhlSpdToMtrCSpd;

                /* Merge: '<S292>/Merge1' incorporates:
                 *  Constant: '<S338>/Constant'
                 *  SignalConversion generated from: '<S336>/MtrCSpd_Src'
                 */
                VeMSPC_e_MtrCSpdSrc = CeMSPR_e_MtrSpdSrc_SecWhlSpd;

                /* Merge: '<S292>/Merge3' incorporates:
                 *  Constant: '<S336>/FALSE Constant'
                 *  SignalConversion generated from: '<S336>/MtrCSpdFA_Out'
                 */
                VeMSPC_b_MtrCSpd_FA = false;

                /* End of Outputs for SubSystem: '<S329>/If Action Subsystem' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S329>/If Action Subsystem1' incorporates:
                 *  ActionPort: '<S337>/Action Port'
                 */
                MSPR_ac_IfActionSubsystem1(&rtb_Merge1, (&(VeMSPC_e_MtrCSpdSrc)),
                    (&(VeMSPC_b_MtrCSpd_FA)));

                /* End of Outputs for SubSystem: '<S329>/If Action Subsystem1' */
            }

            /* End of If: '<S329>/If' */
            /* End of Outputs for SubSystem: '<S304>/Switch Case Action Subsystem2' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S304>/Switch Case Action Subsystem1' incorporates:
             *  ActionPort: '<S328>/Action Port'
             */
            /* If: '<S328>/If' incorporates:
             *  Constant: '<S344>/Constant'
             *  Constant: '<S345>/Constant'
             *  Inport: '<Root>/VeADCR_e_WEDLeftStat'
             *  Inport: '<Root>/VeADCR_e_WEDRightStat'
             */
            if ((((uint32)tmpRead_0) == CeADCR_e_Closed) && (((uint32)tmpRead_1)
                 == CeADCR_e_Closed))
            {
                /* Outputs for IfAction SubSystem: '<S328>/If Action Subsystem' incorporates:
                 *  ActionPort: '<S331>/Action Port'
                 */
                /* Merge: '<S304>/Merge' incorporates:
                 *  Constant: '<S334>/Calib'
                 *  Product: '<S331>/Product2'
                 */
                rtb_Merge1 = (rtb_TmpSignalConversionAtVeCSVR *
                              KeMSPR_Cf_CnvrtToMtrCSpd) * rtb_Product4;

                /* Merge: '<S292>/Merge1' incorporates:
                 *  Constant: '<S333>/Constant'
                 *  SignalConversion generated from: '<S331>/MtrCSpd_Src'
                 */
                VeMSPC_e_MtrCSpdSrc = CeMSPR_e_MtrSpdSrc_VehSpd;

                /* Merge: '<S292>/Merge3' incorporates:
                 *  Constant: '<S331>/FALSE Constant'
                 *  SignalConversion generated from: '<S331>/MtrCSpdFA_Out'
                 */
                VeMSPC_b_MtrCSpd_FA = false;

                /* End of Outputs for SubSystem: '<S328>/If Action Subsystem' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S328>/If Action Subsystem1' incorporates:
                 *  ActionPort: '<S332>/Action Port'
                 */
                MSPR_ac_IfActionSubsystem1(&rtb_Merge1, (&(VeMSPC_e_MtrCSpdSrc)),
                    (&(VeMSPC_b_MtrCSpd_FA)));

                /* End of Outputs for SubSystem: '<S328>/If Action Subsystem1' */
            }

            /* End of If: '<S328>/If' */
            /* End of Outputs for SubSystem: '<S304>/Switch Case Action Subsystem1' */
            break;

          default:
            /* Outputs for IfAction SubSystem: '<S304>/Switch Case Action Subsystem' incorporates:
             *  ActionPort: '<S327>/Action Port'
             */
            /* Merge: '<S304>/Merge' incorporates:
             *  Constant: '<S327>/Constant Value'
             *  SignalConversion generated from: '<S327>/MtrCSpd_Out'
             */
            rtb_Merge1 = 0.0F;

            /* Merge: '<S292>/Merge1' incorporates:
             *  Constant: '<S330>/Constant'
             *  SignalConversion generated from: '<S327>/MtrCSpd_Src'
             */
            VeMSPC_e_MtrCSpdSrc = CeMSPR_e_MtrSpdSrc_NoSrc;

            /* Merge: '<S292>/Merge3' incorporates:
             *  Constant: '<S327>/TRUE Constant'
             *  SignalConversion generated from: '<S327>/MtrCSpdFA_Out'
             */
            VeMSPC_b_MtrCSpd_FA = true;

            /* End of Outputs for SubSystem: '<S304>/Switch Case Action Subsystem' */
            break;
        }

        /* End of SwitchCase: '<S304>/Switch_Case' */

        /* Merge: '<S292>/Merge2' incorporates:
         *  Gain: '<S324>/Gain'
         */
        MSPR_ac_B.VeMSPC_n_MtrC_SpdRaw = rtb_Merge1;

        /* End of Outputs for SubSystem: '<S292>/If Action Subsystem2' */
    }

    /* End of If: '<S292>/If' */

    /* Product: '<S279>/Multiplication2' incorporates:
     *  Constant: '<S71>/Calib'
     *  Product: '<S279>/Multiplication4'
     *  Sum: '<S279>/Summation'
     *  Sum: '<S279>/Summation1'
     *  Sum: '<S279>/Summation2'
     *  UnitDelay: '<S279>/Unit Delay'
     *  UnitDelay: '<S279>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtLeM_k0 = ((MSPR_ac_B.VeMSPC_n_MtrC_SpdRaw -
        ((rtb_Merge1_tmp - KeMSPR_t_MtrSpdTimePeriod) *
         MSPR_ac_DW.UnitDelay1_DSTATE_l)) - MSPR_ac_DW.UnitDelay_DSTATE_ey) /
        (rtb_Merge1_tmp + KeMSPR_t_MtrSpdTimePeriod);

    /* Outputs for Atomic SubSystem: '<S293>/ClosedInterval' */
    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S289>/Calib'
     *  Constant: '<S290>/Calib'
     *  Logic: '<S341>/Logical Operator'
     *  RelationalOperator: '<S341>/Relatonal Operator'
     *  RelationalOperator: '<S341>/Relatonal Operator1'
     */
    if ((rtb_TmpSignalConversionAtLeM_ox < KeMSPR_n_MtrCAccel_MinLmt) ||
            (rtb_TmpSignalConversionAtLeM_ox > KeMSPR_n_MtrCAccel_MaxLmt))
    {
        /* Switch: '<S293>/Switch' incorporates:
         *  UnitDelay: '<S293>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_ox = MSPR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* End of Switch: '<S293>/Switch' */
    /* End of Outputs for SubSystem: '<S293>/ClosedInterval' */

    /* Outputs for Atomic SubSystem: '<S293>/GradientLimiter' */
    /* Sum: '<S342>/Sum2' incorporates:
     *  UnitDelay: '<S342>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCSVR = rtb_TmpSignalConversionAtLeM_ox -
        MSPR_ac_DW.UnitDelay_DSTATE_k;

    /* Outputs for Atomic SubSystem: '<S342>/Limiter' */
    /* Switch: '<S343>/Switch1' incorporates:
     *  Constant: '<S285>/Calib'
     *  RelationalOperator: '<S343>/Relational Operator'
     */
    if (KeMSPR_dn_MtrCAccelRate_MaxLmt < rtb_TmpSignalConversionAtVeCSVR)
    {
        /* Switch: '<S280>/Switch2' */
        rtb_TmpSignalConversionAtVeCSVR = KeMSPR_dn_MtrCAccelRate_MaxLmt;
    }

    /* End of Switch: '<S343>/Switch1' */

    /* Switch: '<S343>/Switch' incorporates:
     *  Constant: '<S286>/Calib'
     *  RelationalOperator: '<S343>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeCSVR <= KeMSPR_dn_MtrCAccelRate_MinLmt)
    {
        rtb_TmpSignalConversionAtVeCSVR = KeMSPR_dn_MtrCAccelRate_MinLmt;
    }

    /* End of Switch: '<S343>/Switch' */
    /* End of Outputs for SubSystem: '<S342>/Limiter' */

    /* Sum: '<S342>/Sum3' incorporates:
     *  UnitDelay: '<S342>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCSVR += MSPR_ac_DW.UnitDelay_DSTATE_k;

    /* Update for UnitDelay: '<S342>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeCSVR;

    /* End of Outputs for SubSystem: '<S293>/GradientLimiter' */

    /* Switch: '<S277>/Switch3' */
    if (VeMSPR_b_MtrCAccel_Sgnl_Rcvd)
    {
        /* Switch: '<S277>/Switch3' incorporates:
         *  UnitDelay: '<S277>/Unit Delay3'
         */
        rtb_TmpSignalConversionAtVeCSVR = MSPR_ac_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S277>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S277>/Digital Lowpass Reset Enabled1' */
    /* Sum: '<S280>/Summation' incorporates:
     *  Constant: '<S287>/Calib'
     *  Product: '<S280>/Multiplication'
     *  Sum: '<S280>/Subtraction'
     *  UnitDelay: '<S280>/Unit Delay'
     */
    rtb_Summation_m = ((rtb_TmpSignalConversionAtVeCSVR -
                        MSPR_ac_DW.UnitDelay_DSTATE_b) *
                       KeMSPR_k_MtrCAccelFilterConst) +
        MSPR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S280>/Unit Delay' incorporates:
     *  Switch: '<S280>/Switch2'
     */
    MSPR_ac_DW.UnitDelay_DSTATE_b = rtb_Summation_m;

    /* End of Outputs for SubSystem: '<S277>/Digital Lowpass Reset Enabled1' */

    /* RelationalOperator: '<S291>/Comparison5' incorporates:
     *  Logic: '<S277>/Logical4'
     *  Logic: '<S277>/Logical5'
     */
    rtb_TmpSignalConversionAtLeM_i0 = (rtb_TmpSignalConversionAtLeM_j0 &&
        (!rtb_TmpSignalConversionAtLeM_i0));

    /* Switch: '<S282>/Switch1' incorporates:
     *  Switch: '<S283>/Switch1'
     */
    if (rtb_TmpSignalConversionAtLeM_i0)
    {
        /* Switch: '<S282>/Switch1' */
        MSPR_ac_B.Switch1_o = rtb_TmpSignalConversionAtLeM_k0;

        /* Switch: '<S283>/Switch1' */
        MSPR_ac_B.Switch1_b = rtb_TmpSignalConversionAtLeM_k0;
    }
    else
    {
        /* Switch: '<S282>/Switch1' */
        MSPR_ac_B.Switch1_o = rtb_TmpSignalConversionAtVeCSVR;

        /* Outputs for Atomic SubSystem: '<S277>/Digital Lowpass Reset Enabled1' */
        /* Switch: '<S283>/Switch1' incorporates:
         *  Switch: '<S280>/Switch2'
         */
        MSPR_ac_B.Switch1_b = rtb_Summation_m;

        /* End of Outputs for SubSystem: '<S277>/Digital Lowpass Reset Enabled1' */
    }

    /* End of Switch: '<S282>/Switch1' */

    /* Gain: '<S305>/Gain' */
    MSPR_ac_B.Gain_dz = rtb_Merge1;

    /* Outputs for Atomic SubSystem: '<S291>/EdgeRising1' */
    /* Logic: '<S297>/OR1' incorporates:
     *  UnitDelay: '<S297>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_i0 = !MSPR_ac_DW.UnitDelay_DSTATE_ot;

    /* Update for UnitDelay: '<S297>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_ot = rtb_TmpSignalConversionAtLeM_nl;

    /* Outputs for Atomic SubSystem: '<S291>/Count Down  Reset Enabled1' */
    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S296>/Constant Value'
     *  Logic: '<S297>/AND'
     *  RelationalOperator: '<S296>/Greater  Than'
     *  Switch: '<S296>/Switch2'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_nl && rtb_TmpSignalConversionAtLeM_i0)
    {
        /* Switch: '<S296>/Switch1' incorporates:
         *  Constant: '<S300>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_MtrCSpdLmtMinWaitTime;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_oo) > 0)
    {
        /* Switch: '<S296>/Switch2' incorporates:
         *  Constant: '<S296>/Constant Value1'
         *  Sum: '<S296>/Subtraction'
         *  Switch: '<S296>/Switch1'
         *  UnitDelay: '<S296>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_oo) - 1));
    }
    else
    {
        /* Switch: '<S296>/Switch1' incorporates:
         *  Switch: '<S296>/Switch2'
         *  UnitDelay: '<S296>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_oo;
    }

    /* End of Switch: '<S296>/Switch1' */
    /* End of Outputs for SubSystem: '<S291>/EdgeRising1' */

    /* Update for UnitDelay: '<S296>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_oo = rtb_Switch1_na;

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S296>/Constant Value2'
     *  RelationalOperator: '<S296>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_na) > 0)
    {
        /* Switch: '<S291>/Switch1' incorporates:
         *  UnitDelay: '<S291>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtLeM_be = MSPR_ac_DW.UnitDelay1_DSTATE_c;
    }

    /* End of Switch: '<S291>/Switch1' */
    /* End of Outputs for SubSystem: '<S291>/Count Down  Reset Enabled1' */

    /* If: '<S291>/If' */
    if (!rtb_TmpSignalConversionAtLeM_oy)
    {
        /* Outputs for IfAction SubSystem: '<S291>/If Action Subsystem' incorporates:
         *  ActionPort: '<S298>/Action Port'
         */
        /* Merge: '<S291>/Merge' incorporates:
         *  Inport: '<S298>/MtrCMaxSpd'
         */
        rtb_Summation_m = rtb_TmpSignalConversionAtLeM_be;

        /* Merge: '<S291>/Merge2' incorporates:
         *  Constant: '<S298>/Constant'
         *  SignalConversion generated from: '<S298>/SPI_Src'
         */
        rtb_TmpSignalConversionAtLeM_nl = true;

        /* End of Outputs for SubSystem: '<S291>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S291>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S299>/Action Port'
         */
        /* Merge: '<S291>/Merge' incorporates:
         *  Constant: '<S288>/Calib'
         *  Inport: '<S299>/MtrCMaxSpd'
         */
        rtb_Summation_m = KeMSPR_n_MaxMtrCSpdLmt_AltSrc;

        /* Merge: '<S291>/Merge2' incorporates:
         *  Constant: '<S299>/Constant'
         *  SignalConversion generated from: '<S299>/CAN_Src'
         */
        rtb_TmpSignalConversionAtLeM_nl = false;

        /* End of Outputs for SubSystem: '<S291>/If Action Subsystem1' */
    }

    /* End of If: '<S291>/If' */

    /* RelationalOperator: '<S291>/Comparison5' incorporates:
     *  UnitDelay: '<S291>/Unit Delay11'
     */
    rtb_TmpSignalConversionAtLeM_i0 = (MSPR_ac_DW.UnitDelay11_DSTATE_l !=
        rtb_TmpSignalConversionAtLeM_nl);

    /* Switch: '<S295>/Switch3' incorporates:
     *  Switch: '<S295>/Switch2'
     */
    if (rtb_TmpSignalConversionAtLeM_i0)
    {
        /* UnitDelay: '<S291>/Unit Delay10' incorporates:
         *  Constant: '<S295>/Constant Value4'
         */
        rtb_Merge1 = 0.0F;

        /* Switch: '<S295>/Switch2' incorporates:
         *  UnitDelay: '<S291>/Unit Delay10'
         */
        rtb_Product4 = MSPR_ac_DW.UnitDelay10_DSTATE_n;
    }
    else
    {
        /* UnitDelay: '<S291>/Unit Delay10' incorporates:
         *  Constant: '<S301>/Calib'
         *  Constant: '<S302>/Calib'
         *  MinMax: '<S295>/Maximum'
         *  Product: '<S295>/Multiplication1'
         *  Sum: '<S295>/Summation1'
         *  UnitDelay: '<S295>/Unit Delay1'
         */
        rtb_Merge1 = ((1.0F / fmaxf(KeMSPR_t_MaxMtrCSpdRamp, KeMSPR_t_6p25dt)) *
                      KeMSPR_t_6p25dt) + MSPR_ac_DW.UnitDelay1_DSTATE_k;

        /* Switch: '<S295>/Switch2' incorporates:
         *  UnitDelay: '<S295>/Unit Delay'
         */
        rtb_Product4 = MSPR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S295>/Switch3' */

    /* MinMax: '<S295>/MinMax' incorporates:
     *  Constant: '<S295>/Constant Value2'
     */
    rtb_Merge1 = fminf(rtb_Merge1, 1.0F);

    /* Sum: '<S295>/Summation' incorporates:
     *  Constant: '<S295>/Constant Value'
     *  Product: '<S295>/Multiplication'
     *  Product: '<S295>/Multiplication3'
     *  Sum: '<S295>/Subtraction'
     */
    VeMSPC_n_MaxMtrCSpdLmt = ((1.0F - rtb_Merge1) * rtb_Product4) + (rtb_Merge1 *
        rtb_Summation_m);

    /* Update for UnitDelay: '<S279>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_l = rtb_TmpSignalConversionAtLeM_k0;

    /* Update for UnitDelay: '<S279>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_ey = MSPR_ac_B.VeMSPC_n_MtrC_SpdRaw;

    /* Update for UnitDelay: '<S277>/Unit Delay3' */
    MSPR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeCSVR;

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_l = rtb_TmpSignalConversionAtLeM_ox;

    /* Update for UnitDelay: '<S291>/Unit Delay11' */
    MSPR_ac_DW.UnitDelay11_DSTATE_l = rtb_TmpSignalConversionAtLeM_nl;

    /* Update for UnitDelay: '<S291>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_c = rtb_TmpSignalConversionAtLeM_be;

    /* Update for UnitDelay: '<S295>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_k = rtb_Merge1;

    /* Update for UnitDelay: '<S291>/Unit Delay10' */
    MSPR_ac_DW.UnitDelay10_DSTATE_n = VeMSPC_n_MaxMtrCSpdLmt;

    /* Update for UnitDelay: '<S295>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_h = rtb_Product4;

    /* End of Outputs for SubSystem: '<S80>/MtrC_Management' */
    /* End of Outputs for SubSystem: '<S68>/MtrC_Management' */
#endif

    /* End of RelationalOperator: '<S81>/Comparison4' */

    /* Outputs for Atomic SubSystem: '<S77>/EdgeRising10' */
    /* Logic: '<S182>/OR1' incorporates:
     *  UnitDelay: '<S182>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_nl = !MSPR_ac_DW.UnitDelay_DSTATE_ik;

    /* Update for UnitDelay: '<S182>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_ik = rtb_TmpSignalConversionAtLeM_ph;

    /* Outputs for Atomic SubSystem: '<S77>/Count Down  Reset Enabled8' */
    /* Switch: '<S181>/Switch1' incorporates:
     *  Constant: '<S181>/Constant Value'
     *  Logic: '<S182>/AND'
     *  RelationalOperator: '<S181>/Greater  Than'
     *  Switch: '<S181>/Switch2'
     *  UnitDelay: '<S181>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_ph && rtb_TmpSignalConversionAtLeM_nl)
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Constant: '<S184>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_MtrBPosCntMinWaitTime;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_nk) > 0)
    {
        /* Switch: '<S181>/Switch2' incorporates:
         *  Constant: '<S181>/Constant Value1'
         *  Sum: '<S181>/Subtraction'
         *  Switch: '<S181>/Switch1'
         *  UnitDelay: '<S181>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_nk) - 1));
    }
    else
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Switch: '<S181>/Switch2'
         *  UnitDelay: '<S181>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_nk;
    }

    /* End of Switch: '<S181>/Switch1' */
    /* End of Outputs for SubSystem: '<S77>/EdgeRising10' */

    /* RelationalOperator: '<S181>/Greater  Than1' incorporates:
     *  Constant: '<S181>/Constant Value2'
     */
    VeMSPR_b_MtrBPosCnt_Rcvd = (((sint32)rtb_Switch1_na) > 0);

    /* Update for UnitDelay: '<S181>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_nk = rtb_Switch1_na;

    /* End of Outputs for SubSystem: '<S77>/Count Down  Reset Enabled8' */

    /* Switch: '<S77>/Switch7' */
    if (VeMSPR_b_MtrBPosCnt_Rcvd)
    {
        /* Switch: '<S77>/Switch7' incorporates:
         *  UnitDelay: '<S77>/Unit Delay7'
         */
        rtb_TmpSignalConversionAtLeMS_k = MSPR_ac_DW.UnitDelay7_DSTATE;
    }

    /* End of Switch: '<S77>/Switch7' */

    /* Switch: '<S77>/Switch' incorporates:
     *  Constant: '<S186>/Calib'
     */
    if (KeMSPR_b_MtrBPosCntOvrdEnbl)
    {
        /* Switch: '<S77>/Switch' incorporates:
         *  Constant: '<S185>/Calib'
         */
        rtb_TmpSignalConversionAtLeM_be = KeMSPR_Cnt_OvrrdMtrBPosCntVal;
    }
    else
    {
        /* Switch: '<S77>/Switch' */
        rtb_TmpSignalConversionAtLeM_be = rtb_TmpSignalConversionAtLeMS_k;
    }

    /* End of Switch: '<S77>/Switch' */

    /* Outputs for Atomic SubSystem: '<S77>/Protected Division' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  Constant: '<S183>/Calib'
     *  Constant: '<S188>/Constant Value'
     *  Constant: '<S188>/Constant Value1'
     *  Constant: '<S188>/Constant Value2'
     *  Constant: '<S188>/Constant Value3'
     *  Logic: '<S188>/AND'
     *  RelationalOperator: '<S188>/Greater Than or Equal '
     *  RelationalOperator: '<S188>/Greater Than or Equal 1'
     *  RelationalOperator: '<S188>/Not Equal'
     *  RelationalOperator: '<S188>/Not Equal1'
     *  Switch: '<S188>/Switch2'
     *  Switch: '<S188>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtLeM_be != 0.0F) && (KeMSPR_Cnt_MtrBCntPerRev
            != 0.0F))
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  Product: '<S188>/Division'
         */
        rtb_TmpSignalConversionAtLeM_be /= KeMSPR_Cnt_MtrBCntPerRev;
    }
    else if (rtb_TmpSignalConversionAtLeM_be > 0.0F)
    {
        /* Switch: '<S188>/Switch2' incorporates:
         *  Constant: '<S188>/MAXFLOAT'
         *  Switch: '<S188>/Switch1'
         */
        rtb_TmpSignalConversionAtLeM_be = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtLeM_be < 0.0F)
    {
        /* Switch: '<S188>/Switch3' incorporates:
         *  Constant: '<S188>/MINFLOAT'
         *  Switch: '<S188>/Switch1'
         *  Switch: '<S188>/Switch2'
         */
        rtb_TmpSignalConversionAtLeM_be = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S188>/Constant Value4'
         *  Switch: '<S188>/Switch2'
         *  Switch: '<S188>/Switch3'
         */
        rtb_TmpSignalConversionAtLeM_be = 0.0F;
    }

    /* End of Switch: '<S188>/Switch1' */
    /* End of Outputs for SubSystem: '<S77>/Protected Division' */

    /* Product: '<S77>/Product' incorporates:
     *  Constant: '<S187>/Calib'
     *  Rounding: '<S77>/Rounding'
     *  Sum: '<S77>/Sum1'
     */
    VeMSPC_phi_MtrBPosAngle = (rtb_TmpSignalConversionAtLeM_be - floorf
        (rtb_TmpSignalConversionAtLeM_be)) * KeMSPR_phi_MtrBAnglePerRev;

    /* Outputs for Atomic SubSystem: '<S73>/EdgeRising1' */
    /* Logic: '<S86>/OR1' incorporates:
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ph = !MSPR_ac_DW.UnitDelay_DSTATE_mu;

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_mu = rtb_TmpSignalConversionAtLeM_e0;

    /* Outputs for Atomic SubSystem: '<S73>/Count Down  Reset Enabled1' */
    /* Switch: '<S84>/Switch1' incorporates:
     *  Constant: '<S84>/Constant Value'
     *  Logic: '<S86>/AND'
     *  RelationalOperator: '<S84>/Greater  Than'
     *  Switch: '<S84>/Switch2'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_e0 && rtb_TmpSignalConversionAtLeM_ph)
    {
        /* Switch: '<S84>/Switch1' incorporates:
         *  Constant: '<S91>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_P1SpdLmtMinWaitTime;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_oh) > 0)
    {
        /* Switch: '<S84>/Switch2' incorporates:
         *  Constant: '<S84>/Constant Value1'
         *  Sum: '<S84>/Subtraction'
         *  Switch: '<S84>/Switch1'
         *  UnitDelay: '<S84>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_oh) - 1));
    }
    else
    {
        /* Switch: '<S84>/Switch1' incorporates:
         *  Switch: '<S84>/Switch2'
         *  UnitDelay: '<S84>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_oh;
    }

    /* End of Switch: '<S84>/Switch1' */
    /* End of Outputs for SubSystem: '<S73>/EdgeRising1' */

    /* Update for UnitDelay: '<S84>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_oh = rtb_Switch1_na;

    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S84>/Constant Value2'
     *  RelationalOperator: '<S84>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_na) > 0)
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  UnitDelay: '<S73>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtLeM_hx = MSPR_ac_DW.UnitDelay1_DSTATE_h;
    }

    /* End of Switch: '<S73>/Switch1' */
    /* End of Outputs for SubSystem: '<S73>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S73>/EdgeRising11' */
    /* Logic: '<S87>/OR1' incorporates:
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_e0 = !MSPR_ac_DW.UnitDelay_DSTATE_fc;

    /* Update for UnitDelay: '<S87>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_fc = rtb_TmpSignalConversionAtLe_oak;

    /* Outputs for Atomic SubSystem: '<S73>/Count Down  Reset Enabled9' */
    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S85>/Constant Value'
     *  Logic: '<S87>/AND'
     *  RelationalOperator: '<S85>/Greater  Than'
     *  Switch: '<S85>/Switch2'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLe_oak && rtb_TmpSignalConversionAtLeM_e0)
    {
        /* Switch: '<S85>/Switch1' incorporates:
         *  Constant: '<S92>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_P1SpdLmtMinWaitTime_AltSrc;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_iw) > 0)
    {
        /* Switch: '<S85>/Switch2' incorporates:
         *  Constant: '<S85>/Constant Value1'
         *  Sum: '<S85>/Subtraction'
         *  Switch: '<S85>/Switch1'
         *  UnitDelay: '<S85>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_iw) - 1));
    }
    else
    {
        /* Switch: '<S85>/Switch1' incorporates:
         *  Switch: '<S85>/Switch2'
         *  UnitDelay: '<S85>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_iw;
    }

    /* End of Switch: '<S85>/Switch1' */
    /* End of Outputs for SubSystem: '<S73>/EdgeRising11' */

    /* Update for UnitDelay: '<S85>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_iw = rtb_Switch1_na;

    /* Switch: '<S73>/Switch8' incorporates:
     *  Constant: '<S85>/Constant Value2'
     *  RelationalOperator: '<S85>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_na) > 0)
    {
        /* Switch: '<S73>/Switch8' incorporates:
         *  UnitDelay: '<S73>/Unit Delay8'
         */
        rtb_TmpSignalConversionAtLeM_ps = MSPR_ac_DW.UnitDelay8_DSTATE;
    }

    /* End of Switch: '<S73>/Switch8' */
    /* End of Outputs for SubSystem: '<S73>/Count Down  Reset Enabled9' */

    /* If: '<S73>/If' incorporates:
     *  Constant: '<S93>/Calib'
     *  Logic: '<S73>/Logical1'
     */
    if (!rtb_TmpSignalConversionAtLeM_kb)
    {
        /* Outputs for IfAction SubSystem: '<S73>/If Action Subsystem' incorporates:
         *  ActionPort: '<S88>/Action Port'
         */
        /* Merge: '<S74>/Merge1' incorporates:
         *  Inport: '<S88>/P1MaxSpd'
         */
        rtb_Merge1 = rtb_TmpSignalConversionAtLeM_hx;

        /* Merge: '<S73>/Merge2' incorporates:
         *  Constant: '<S88>/Constant'
         *  SignalConversion generated from: '<S88>/SPI_Src'
         */
        rtb_TmpSignalConversionAtLe_oak = true;

        /* End of Outputs for SubSystem: '<S73>/If Action Subsystem' */
    }
    else if ((!rtb_TmpSignalConversionAtLe_jqn) &&
             (!KeMSPR_b_MaxP1SpdLmt_DsblArb))
    {
        /* Outputs for IfAction SubSystem: '<S73>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S89>/Action Port'
         */
        /* Merge: '<S74>/Merge1' incorporates:
         *  Inport: '<S89>/P1MaxSpd'
         */
        rtb_Merge1 = rtb_TmpSignalConversionAtLeM_ps;

        /* Merge: '<S73>/Merge2' incorporates:
         *  Constant: '<S89>/Constant'
         *  SignalConversion generated from: '<S89>/CAN_Src'
         */
        rtb_TmpSignalConversionAtLe_oak = false;

        /* End of Outputs for SubSystem: '<S73>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S73>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        /* Merge: '<S74>/Merge1' incorporates:
         *  Constant: '<S96>/Calib'
         *  Constant: '<S97>/Calib'
         *  MinMax: '<S90>/MinMax'
         *  Product: '<S90>/Divide'
         *  Sum: '<S90>/Subtraction'
         *  UnitDelay: '<S90>/Unit Delay'
         */
        rtb_Merge1 = fminf(MSPR_ac_DW.UnitDelay_DSTATE_nuj,
                           rtb_TmpSignalConversionAtVeBPCR /
                           KeMSPR_Cf_P1BEMF2Rpm) - KeMSPR_Cf_MaxP1SpeedLimOff;

        /* Merge: '<S73>/Merge2' incorporates:
         *  Constant: '<S90>/Constant'
         *  SignalConversion generated from: '<S90>/CAN_Src'
         */
        rtb_TmpSignalConversionAtLe_oak = false;

        /* End of Outputs for SubSystem: '<S73>/If Action Subsystem2' */
    }

    /* End of If: '<S73>/If' */

    /* RelationalOperator: '<S74>/Comparison1' incorporates:
     *  RelationalOperator: '<S73>/Comparison5'
     *  UnitDelay: '<S73>/Unit Delay11'
     */
    rtb_TmpSignalConversionAtLeM_ll = (MSPR_ac_DW.UnitDelay11_DSTATE !=
        rtb_TmpSignalConversionAtLe_oak);

    /* Switch: '<S83>/Switch3' incorporates:
     *  Switch: '<S83>/Switch2'
     */
    if (rtb_TmpSignalConversionAtLeM_ll)
    {
        /* Switch: '<S98>/Switch3' incorporates:
         *  Constant: '<S83>/Constant Value4'
         */
        rtb_Switch3_o = 0.0F;

        /* Switch: '<S83>/Switch2' incorporates:
         *  UnitDelay: '<S73>/Unit Delay10'
         */
        rtb_TmpSignalConversionAtLeM_ox = MSPR_ac_DW.UnitDelay10_DSTATE;
    }
    else
    {
        /* Switch: '<S98>/Switch3' incorporates:
         *  Constant: '<S94>/Calib'
         *  Constant: '<S95>/Calib'
         *  MinMax: '<S83>/Maximum'
         *  Product: '<S83>/Multiplication1'
         *  Sum: '<S83>/Summation1'
         *  UnitDelay: '<S83>/Unit Delay1'
         */
        rtb_Switch3_o = ((1.0F / fmaxf(KeMSPR_t_MaxP1SpdRamp, KeMSPR_t_6p25dt)) *
                         KeMSPR_t_6p25dt) + MSPR_ac_DW.UnitDelay1_DSTATE_b;

        /* Switch: '<S83>/Switch2' incorporates:
         *  UnitDelay: '<S83>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_ox = MSPR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S83>/Switch3' */

    /* MinMax: '<S83>/MinMax' incorporates:
     *  Constant: '<S83>/Constant Value2'
     */
    rtb_TmpSignalConversionAtLeM_be = fminf(rtb_Switch3_o, 1.0F);

    /* Sum: '<S83>/Summation' incorporates:
     *  Constant: '<S83>/Constant Value'
     *  Product: '<S83>/Multiplication'
     *  Product: '<S83>/Multiplication3'
     *  Sum: '<S83>/Subtraction'
     */
    VeMSPC_n_MaxP1SpdLmt = ((1.0F - rtb_TmpSignalConversionAtLeM_be) *
                            rtb_TmpSignalConversionAtLeM_ox) +
        (rtb_TmpSignalConversionAtLeM_be * rtb_Merge1);

    /* Logic: '<S73>/Logical' */
    VeMSPC_b_MaxP1SpdLmt_FA = (rtb_TmpSignalConversionAtLeM_kb &&
        rtb_TmpSignalConversionAtLe_jqn);

    /* Outputs for Atomic SubSystem: '<S74>/EdgeRising7' */
    /* Logic: '<S102>/OR1' incorporates:
     *  UnitDelay: '<S102>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_kb = !MSPR_ac_DW.UnitDelay_DSTATE_ew1;

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_ew1 = rtb_TmpSignalConversionAtLeM_ko;

    /* Outputs for Atomic SubSystem: '<S74>/Count Down  Reset Enabled5' */
    /* Switch: '<S100>/Switch1' incorporates:
     *  Constant: '<S100>/Constant Value'
     *  Logic: '<S102>/AND'
     *  RelationalOperator: '<S100>/Greater  Than'
     *  Switch: '<S100>/Switch2'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_ko && rtb_TmpSignalConversionAtLeM_kb)
    {
        /* Switch: '<S100>/Switch1' incorporates:
         *  Constant: '<S106>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_P2SpdLmtMinWaitTime;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_bw) > 0)
    {
        /* Switch: '<S100>/Switch2' incorporates:
         *  Constant: '<S100>/Constant Value1'
         *  Sum: '<S100>/Subtraction'
         *  Switch: '<S100>/Switch1'
         *  UnitDelay: '<S100>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_bw) - 1));
    }
    else
    {
        /* Switch: '<S100>/Switch1' incorporates:
         *  Switch: '<S100>/Switch2'
         *  UnitDelay: '<S100>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_bw;
    }

    /* End of Switch: '<S100>/Switch1' */
    /* End of Outputs for SubSystem: '<S74>/EdgeRising7' */

    /* Update for UnitDelay: '<S100>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_bw = rtb_Switch1_na;

    /* Switch: '<S74>/Switch4' incorporates:
     *  Constant: '<S100>/Constant Value2'
     *  RelationalOperator: '<S100>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_na) > 0)
    {
        /* Switch: '<S74>/Switch4' incorporates:
         *  UnitDelay: '<S74>/Unit Delay4'
         */
        rtb_TmpSignalConversionAtLe_o40 = MSPR_ac_DW.UnitDelay4_DSTATE;
    }

    /* End of Switch: '<S74>/Switch4' */
    /* End of Outputs for SubSystem: '<S74>/Count Down  Reset Enabled5' */

    /* Outputs for Atomic SubSystem: '<S74>/EdgeRising12' */
    /* Logic: '<S101>/OR1' incorporates:
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_TmpSignalConversionAtLeM_ko = !MSPR_ac_DW.UnitDelay_DSTATE_ht;

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_ht = rtb_TmpSignalConversionAtLeM_mc;

    /* Outputs for Atomic SubSystem: '<S74>/Count Down  Reset Enabled10' */
    /* Switch: '<S99>/Switch1' incorporates:
     *  Constant: '<S99>/Constant Value'
     *  Logic: '<S101>/AND'
     *  RelationalOperator: '<S99>/Greater  Than'
     *  Switch: '<S99>/Switch2'
     *  UnitDelay: '<S99>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtLeM_mc && rtb_TmpSignalConversionAtLeM_ko)
    {
        /* Switch: '<S99>/Switch1' incorporates:
         *  Constant: '<S107>/Calib'
         */
        rtb_Switch1_na = KeMSPR_Cnt_P2SpdLmtMinWaitTime_AltSrc;
    }
    else if (((sint32)MSPR_ac_DW.UnitDelay_DSTATE_af) > 0)
    {
        /* Switch: '<S99>/Switch2' incorporates:
         *  Constant: '<S99>/Constant Value1'
         *  Sum: '<S99>/Subtraction'
         *  Switch: '<S99>/Switch1'
         *  UnitDelay: '<S99>/Unit Delay'
         */
        rtb_Switch1_na = (uint16)((sint32)(((sint32)
            MSPR_ac_DW.UnitDelay_DSTATE_af) - 1));
    }
    else
    {
        /* Switch: '<S99>/Switch1' incorporates:
         *  Switch: '<S99>/Switch2'
         *  UnitDelay: '<S99>/Unit Delay'
         */
        rtb_Switch1_na = MSPR_ac_DW.UnitDelay_DSTATE_af;
    }

    /* End of Switch: '<S99>/Switch1' */
    /* End of Outputs for SubSystem: '<S74>/EdgeRising12' */

    /* Update for UnitDelay: '<S99>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_af = rtb_Switch1_na;

    /* Switch: '<S74>/Switch9' incorporates:
     *  Constant: '<S99>/Constant Value2'
     *  RelationalOperator: '<S99>/Greater  Than1'
     */
    if (((sint32)rtb_Switch1_na) > 0)
    {
        /* Switch: '<S74>/Switch9' incorporates:
         *  UnitDelay: '<S74>/Unit Delay9'
         */
        VeMSPC_n_MaxP2SpdLmt_AltSrc = MSPR_ac_DW.UnitDelay9_DSTATE;
    }
    else
    {
        /* Switch: '<S74>/Switch9' */
        VeMSPC_n_MaxP2SpdLmt_AltSrc = rtb_TmpSignalConversionAtLeM_lm;
    }

    /* End of Switch: '<S74>/Switch9' */
    /* End of Outputs for SubSystem: '<S74>/Count Down  Reset Enabled10' */

    /* If: '<S74>/If1' incorporates:
     *  Constant: '<S108>/Calib'
     *  Logic: '<S74>/Logical1'
     */
    if (!rtb_TmpSignalConversionAtLe_pbp)
    {
        /* Outputs for IfAction SubSystem: '<S74>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S103>/Action Port'
         */
        /* Merge: '<S74>/Merge1' incorporates:
         *  Inport: '<S103>/P2MaxSpd'
         */
        rtb_Merge1 = rtb_TmpSignalConversionAtLe_o40;

        /* Merge: '<S74>/Merge3' incorporates:
         *  Constant: '<S103>/Constant'
         *  SignalConversion generated from: '<S103>/SPI_Src'
         */
        rtb_TmpSignalConversionAtLeM_mc = true;

        /* End of Outputs for SubSystem: '<S74>/If Action Subsystem2' */
    }
    else if ((!rtb_TmpSignalConversionAtLeM_gc) &&
             (!KeMSPR_b_MaxP2SpdLmt_DsblArb))
    {
        /* Outputs for IfAction SubSystem: '<S74>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S104>/Action Port'
         */
        /* Merge: '<S74>/Merge1' incorporates:
         *  Inport: '<S104>/P2MaxSpd'
         */
        rtb_Merge1 = VeMSPC_n_MaxP2SpdLmt_AltSrc;

        /* Merge: '<S74>/Merge3' incorporates:
         *  Constant: '<S104>/Constant'
         *  SignalConversion generated from: '<S104>/CAN_Src'
         */
        rtb_TmpSignalConversionAtLeM_mc = false;

        /* End of Outputs for SubSystem: '<S74>/If Action Subsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S74>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        /* Merge: '<S74>/Merge1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S112>/Calib'
         *  MinMax: '<S105>/MinMax'
         *  Product: '<S105>/Divide'
         *  Sum: '<S105>/Subtraction'
         *  UnitDelay: '<S105>/Unit Delay'
         */
        rtb_Merge1 = fminf(MSPR_ac_DW.UnitDelay_DSTATE_pb,
                           rtb_TmpSignalConversionAtVeBPCR /
                           KeMSPR_Cf_P2BEMF2Rpm) - KeMSPR_Cf_MaxP2SpeedLimOff;

        /* Merge: '<S74>/Merge3' incorporates:
         *  Constant: '<S105>/Constant'
         *  SignalConversion generated from: '<S105>/CAN_Src'
         */
        rtb_TmpSignalConversionAtLeM_mc = false;

        /* End of Outputs for SubSystem: '<S74>/If Action Subsystem1' */
    }

    /* End of If: '<S74>/If1' */

    /* RelationalOperator: '<S74>/Comparison1' incorporates:
     *  UnitDelay: '<S74>/Unit Delay13'
     */
    rtb_TmpSignalConversionAtLeM_ll = (MSPR_ac_DW.UnitDelay13_DSTATE !=
        rtb_TmpSignalConversionAtLeM_mc);

    /* Switch: '<S98>/Switch3' incorporates:
     *  Switch: '<S98>/Switch2'
     */
    if (rtb_TmpSignalConversionAtLeM_ll)
    {
        /* Switch: '<S98>/Switch3' incorporates:
         *  Constant: '<S98>/Constant Value4'
         */
        rtb_Switch3_o = 0.0F;

        /* Switch: '<S98>/Switch2' incorporates:
         *  UnitDelay: '<S74>/Unit Delay12'
         */
        rtb_TmpSignalConversionAtLeM_lm = MSPR_ac_DW.UnitDelay12_DSTATE;
    }
    else
    {
        /* Switch: '<S98>/Switch3' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S110>/Calib'
         *  MinMax: '<S98>/Maximum'
         *  Product: '<S98>/Multiplication1'
         *  Sum: '<S98>/Summation1'
         *  UnitDelay: '<S98>/Unit Delay1'
         */
        rtb_Switch3_o = ((1.0F / fmaxf(KeMSPR_t_MaxP2SpdRamp, KeMSPR_t_6p25dt)) *
                         KeMSPR_t_6p25dt) + MSPR_ac_DW.UnitDelay1_DSTATE_g;

        /* Switch: '<S98>/Switch2' incorporates:
         *  UnitDelay: '<S98>/Unit Delay'
         */
        rtb_TmpSignalConversionAtLeM_lm = MSPR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* End of Switch: '<S98>/Switch3' */

    /* MinMax: '<S98>/MinMax' incorporates:
     *  Constant: '<S98>/Constant Value2'
     */
    rtb_TmpSignalConversionAtVeBPCR = fminf(rtb_Switch3_o, 1.0F);

    /* Sum: '<S98>/Summation' incorporates:
     *  Constant: '<S98>/Constant Value'
     *  Product: '<S98>/Multiplication'
     *  Product: '<S98>/Multiplication3'
     *  Sum: '<S98>/Subtraction'
     */
    VeMSPC_n_MaxP2SpdLmt = ((1.0F - rtb_TmpSignalConversionAtVeBPCR) *
                            rtb_TmpSignalConversionAtLeM_lm) +
        (rtb_TmpSignalConversionAtVeBPCR * rtb_Merge1);

    /* Logic: '<S74>/Logical' */
    VeMSPC_b_MaxP2SpdLmt_FA = (rtb_TmpSignalConversionAtLe_pbp &&
        rtb_TmpSignalConversionAtLeM_gc);

    /* Update for UnitDelay: '<S114>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeESPR;

    /* Update for UnitDelay: '<S114>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE = VeMSPC_n_MtrA_Spd_Raw;

    /* Update for UnitDelay: '<S68>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_e = VeMSPC_n_MtrA_Spd_Raw;

    /* Update for UnitDelay: '<S75>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_i = rtb_Switch1;

    /* Update for UnitDelay: '<S125>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtLe_ln3;

    /* Update for UnitDelay: '<S190>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_ie = rtb_TmpSignalConversionAtLeM_p1;

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_pu = VeMSPC_n_MtrBSpdRaw;

    /* Update for UnitDelay: '<S78>/Unit Delay2' */
    MSPR_ac_DW.UnitDelay2_DSTATE = rtb_Switch2;

    /* Update for UnitDelay: '<S201>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_n = rtb_TmpSignalConversionAtLeM_eb;

    /* Update for UnitDelay: '<S77>/Unit Delay7' */
    MSPR_ac_DW.UnitDelay7_DSTATE = rtb_TmpSignalConversionAtLeMS_k;

    /* Update for UnitDelay: '<S73>/Unit Delay11' */
    MSPR_ac_DW.UnitDelay11_DSTATE = rtb_TmpSignalConversionAtLe_oak;

    /* Update for UnitDelay: '<S73>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_h = rtb_TmpSignalConversionAtLeM_hx;

    /* Update for UnitDelay: '<S73>/Unit Delay8' */
    MSPR_ac_DW.UnitDelay8_DSTATE = rtb_TmpSignalConversionAtLeM_ps;

    /* Update for UnitDelay: '<S83>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_b = rtb_TmpSignalConversionAtLeM_be;

    /* Update for UnitDelay: '<S73>/Unit Delay10' */
    MSPR_ac_DW.UnitDelay10_DSTATE = VeMSPC_n_MaxP1SpdLmt;

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtLeM_ox;

    /* Update for UnitDelay: '<S74>/Unit Delay13' */
    MSPR_ac_DW.UnitDelay13_DSTATE = rtb_TmpSignalConversionAtLeM_mc;

    /* Update for UnitDelay: '<S74>/Unit Delay4' */
    MSPR_ac_DW.UnitDelay4_DSTATE = rtb_TmpSignalConversionAtLe_o40;

    /* Update for UnitDelay: '<S74>/Unit Delay9' */
    MSPR_ac_DW.UnitDelay9_DSTATE = VeMSPC_n_MaxP2SpdLmt_AltSrc;

    /* Update for UnitDelay: '<S98>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_g = rtb_TmpSignalConversionAtVeBPCR;

    /* Update for UnitDelay: '<S74>/Unit Delay12' */
    MSPR_ac_DW.UnitDelay12_DSTATE = VeMSPC_n_MaxP2SpdLmt;

    /* Update for UnitDelay: '<S98>/Unit Delay' */
    MSPR_ac_DW.UnitDelay_DSTATE_a = rtb_TmpSignalConversionAtLeM_lm;

    /* S-Function (fcgen): '<S17>/FcnCallGen' incorporates:
     *  SubSystem: '<S17>/MSPO_Processing'
     */
    /* SignalConversion generated from: '<S69>/VeMSPC_e_MtrCSpd_Src' incorporates:
     *  SignalConversion generated from: '<S69>/VeMSPC_n_MtrC_SpdRaw'
     * */
#if Rte_SysCon_Variant_MSPR_1

    /* VariantMerge generated from: '<S69>/VeMSPC_e_MtrCSpd_Src' incorporates:
     *  Merge: '<S292>/Merge1'
     */
    rtb_VeMSPC_e_MtrCSpdSrc = VeMSPC_e_MtrCSpdSrc;

    /* Switch: '<S69>/Switch9' */
    rtb_Switch9 = MSPR_ac_B.VeMSPC_n_MtrC_SpdRaw;

#else

    /* VariantMerge generated from: '<S69>/VeMSPC_e_MtrCSpd_Src' incorporates:
     *  SignalConversion generated from: '<S69>/VeMSPC_e_MtrCSpd_Src'
     */
    rtb_VeMSPC_e_MtrCSpdSrc = CeMSPR_e_MtrSpSrc_MCP;

    /* Switch: '<S69>/Switch9' incorporates:
     *  SignalConversion generated from: '<S69>/VeMSPC_n_MtrC_SpdRaw'
     */
    rtb_Switch9 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S69>/VeMSPC_e_MtrCSpd_Src' */

    /* SignalConversion generated from: '<S17>/VeMSPR_n_MtrC_SpdRaw' incorporates:
     *  Gain: '<S389>/Gain'
     *  Outport: '<Root>/VeMSPR_n_MtrC_SpdRaw'
     */
    (void)Rte_Write_VeMSPR_n_MtrC_SpdRaw_Value(rtb_Switch9);

    /* SignalConversion generated from: '<S69>/VeMSPC_b_MtrCSpd_FA' */
#if Rte_SysCon_Variant_MSPR_1

    /* Switch: '<S69>/Switch10' */
    rtb_Switch10 = VeMSPC_b_MtrCSpd_FA;

#else

    /* Switch: '<S69>/Switch10' incorporates:
     *  SignalConversion generated from: '<S69>/VeMSPC_b_MtrCSpd_FA'
     */
    rtb_Switch10 = false;

#endif

    /* End of SignalConversion generated from: '<S69>/VeMSPC_b_MtrCSpd_FA' */

    /* Switch: '<S69>/Switch11' incorporates:
     *  Constant: '<S373>/Calib'
     */
    if (KeMSPR_b_MtrCSpdFAOvrd)
    {
        /* Switch: '<S69>/Switch10' incorporates:
         *  Constant: '<S374>/Calib'
         */
        rtb_Switch10 = KeMSPR_b_MtrCSpdFAOvrdVal;
    }

    /* End of Switch: '<S69>/Switch11' */

    /* SignalConversion generated from: '<S69>/MtrC_AccelRaw' */
#if Rte_SysCon_Variant_MSPR_1

    /* Switch: '<S69>/Switch9' */
    rtb_Switch9 = MSPR_ac_B.Switch1_o;

#else

    /* Switch: '<S69>/Switch9' incorporates:
     *  SignalConversion generated from: '<S69>/MtrC_AccelRaw'
     */
    rtb_Switch9 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S69>/MtrC_AccelRaw' */

    /* SignalConversion generated from: '<S17>/VeMSPR_dn_MtrC_AccelRaw' incorporates:
     *  Gain: '<S396>/Gain'
     *  Outport: '<Root>/VeMSPR_dn_MtrC_AccelRaw'
     */
    (void)Rte_Write_VeMSPR_dn_MtrC_AccelRaw_Value(rtb_Switch9);

    /* SignalConversion generated from: '<S69>/VeMSPC_n_MaxMtrCSpdLmt' */
#if Rte_SysCon_Variant_MSPR_1

    /* Switch: '<S69>/Switch9' */
    rtb_Switch9 = VeMSPC_n_MaxMtrCSpdLmt;

#else

    /* Switch: '<S69>/Switch9' incorporates:
     *  SignalConversion generated from: '<S69>/VeMSPC_n_MaxMtrCSpdLmt'
     */
    rtb_Switch9 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S69>/VeMSPC_n_MaxMtrCSpdLmt' */

    /* Switch: '<S69>/Switch9' incorporates:
     *  Constant: '<S363>/Calib'
     */
    if (KeMSPR_b_MaxMtrCSpdLmtOvrd)
    {
        /* Switch: '<S69>/Switch9' incorporates:
         *  Constant: '<S380>/Calib'
         */
        rtb_Switch9 = KeMSPR_n_MaxMtrCSpdLmtOvrdVal;
    }

    /* End of Switch: '<S69>/Switch9' */
    /* End of Outputs for S-Function (fcgen): '<S17>/FcnCallGen' */

    /* Outport: '<Root>/VeMSPR_dn_MtrA_Accel' incorporates:
     *  SignalConversion generated from: '<S17>/VeMSPC_dn_MtrA_Accel'
     */
    (void)Rte_Write_VeMSPR_dn_MtrA_Accel_Value(rtb_TmpSignalConversionAtVeES_e);

    /* Outport: '<Root>/VeMSPR_dn_MtrB_Accel' incorporates:
     *  SignalConversion generated from: '<S17>/VeMSPC_dn_MtrB_Accel'
     */
    (void)Rte_Write_VeMSPR_dn_MtrB_Accel_Value(rtb_Sum2_l);

    /* SignalConversion generated from: '<S17>/VeMSPC_dn_MtrC_Accel' */
#if Rte_SysCon_Variant_MSPR_1

    /* Outport: '<Root>/VeMSPR_dn_MtrC_Accel' */
    (void)Rte_Write_VeMSPR_dn_MtrC_Accel_Value(MSPR_ac_B.Switch1_b);

#endif

    /* End of SignalConversion generated from: '<S17>/VeMSPC_dn_MtrC_Accel' */

    /* Outport: '<Root>/VeMSPR_n_MtrA_Spd' incorporates:
     *  SignalConversion generated from: '<S17>/VeMSPC_n_MtrA_Spd'
     */
    (void)Rte_Write_VeMSPR_n_MtrA_Spd_Value(rtb_TmpSignalConversionAtLeM_hg);

    /* Outport: '<Root>/VeMSPR_n_MtrB_Spd' incorporates:
     *  SignalConversion generated from: '<S17>/VeMSPC_n_MtrB_Spd'
     */
    (void)Rte_Write_VeMSPR_n_MtrB_Spd_Value(rtb_Switch1_e1);

    /* SignalConversion generated from: '<S17>/VeMSPC_n_MtrC_Spd' */
#if Rte_SysCon_Variant_MSPR_1

    /* Outport: '<Root>/VeMSPR_n_MtrC_Spd' */
    (void)Rte_Write_VeMSPR_n_MtrC_Spd_Value(MSPR_ac_B.Gain_dz);

#endif

    /* End of SignalConversion generated from: '<S17>/VeMSPC_n_MtrC_Spd' */

    /* S-Function (fcgen): '<S17>/FcnCallGen' incorporates:
     *  SubSystem: '<S17>/MSPO_Processing'
     */
    /* Switch: '<S69>/Switch10' incorporates:
     *  Constant: '<S361>/Calib'
     */
    if (KeMSPR_b_MaxMtrCSpdLmtFAOvrd)
    {
        /* Outport: '<Root>/VeMSPR_b_MaxMtrCSpdLmt_FA' incorporates:
         *  Constant: '<S362>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MaxMtrCSpdLmt_FA'
         */
        (void)Rte_Write_VeMSPR_b_MaxMtrCSpdLmt_FA_Value
            (KeMSPR_b_MaxMtrCSpdLmtFAOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_b_MaxMtrCSpdLmt_FA' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MaxMtrCSpdLmt_FA'
         */
        (void)Rte_Write_VeMSPR_b_MaxMtrCSpdLmt_FA_Value
            (rtb_TmpSignalConversionAtLeM_oy);
    }

    /* End of Switch: '<S69>/Switch10' */

    /* Switch: '<S69>/Switch2' incorporates:
     *  Constant: '<S364>/Calib'
     */
    if (KeMSPR_b_MaxP1SpdLmtFAOvrd)
    {
        /* Outport: '<Root>/VeMSPR_b_MaxP1SpdLmtFA' incorporates:
         *  Constant: '<S365>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MaxP1SpdLmtFA'
         */
        (void)Rte_Write_VeMSPR_b_MaxP1SpdLmtFA_Value
            (KeMSPR_b_MaxP1SpdLmtFAOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_b_MaxP1SpdLmtFA' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MaxP1SpdLmtFA'
         */
        (void)Rte_Write_VeMSPR_b_MaxP1SpdLmtFA_Value(VeMSPC_b_MaxP1SpdLmt_FA);
    }

    /* End of Switch: '<S69>/Switch2' */

    /* Switch: '<S69>/Switch3' incorporates:
     *  Constant: '<S367>/Calib'
     */
    if (KeMSPR_b_MaxP2SpdLmtFAOvrd)
    {
        /* Outport: '<Root>/VeMSPR_b_MaxP2SpdLmtFA' incorporates:
         *  Constant: '<S368>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MaxP2SpdLmtFA'
         */
        (void)Rte_Write_VeMSPR_b_MaxP2SpdLmtFA_Value
            (KeMSPR_b_MaxP2SpdLmtFAOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_b_MaxP2SpdLmtFA' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MaxP2SpdLmtFA'
         */
        (void)Rte_Write_VeMSPR_b_MaxP2SpdLmtFA_Value(VeMSPC_b_MaxP2SpdLmt_FA);
    }

    /* End of Switch: '<S69>/Switch3' */

    /* Switch: '<S69>/Switch7' incorporates:
     *  Constant: '<S369>/Calib'
     */
    if (KeMSPR_b_MtrASpdFAOvrd)
    {
        /* Outport: '<Root>/VeMSPR_b_MtrA_SpdFA' incorporates:
         *  Constant: '<S370>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrA_SpdFA'
         */
        (void)Rte_Write_VeMSPR_b_MtrA_SpdFA_Value(KeMSPR_b_MtrASpdFAOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_b_MtrA_SpdFA' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrA_SpdFA'
         */
        (void)Rte_Write_VeMSPR_b_MtrA_SpdFA_Value(VeMSPC_b_MtrA_Spd_FA);
    }

    /* End of Switch: '<S69>/Switch7' */

    /* Outport: '<Root>/VeMSPR_b_MtrA_SpdFARaw' incorporates:
     *  Logic: '<S354>/AND'
     *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrA_SpdFARaw'
     */
    (void)Rte_Write_VeMSPR_b_MtrA_SpdFARaw_Value(rtb_TmpSignalConversionAtLeM_ld);

    /* Outport: '<Root>/VeMSPR_b_MtrBPosAngleFA' incorporates:
     *  Logic: '<S348>/AND'
     *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrBPosAngleFA'
     */
    (void)Rte_Write_VeMSPR_b_MtrBPosAngleFA_Value
        (rtb_TmpSignalConversionAtLeM_kr);

    /* Switch: '<S69>/Switch8' incorporates:
     *  Constant: '<S371>/Calib'
     */
    if (KeMSPR_b_MtrBSpdFAOvrd)
    {
        /* Outport: '<Root>/VeMSPR_b_MtrB_SpdFA' incorporates:
         *  Constant: '<S372>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrB_SpdFA'
         */
        (void)Rte_Write_VeMSPR_b_MtrB_SpdFA_Value(KeMSPR_b_MtrBSpdFAOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_b_MtrB_SpdFA' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrB_SpdFA'
         */
        (void)Rte_Write_VeMSPR_b_MtrB_SpdFA_Value(VeMSPC_b_MtrB_SpdFA);
    }

    /* End of Switch: '<S69>/Switch8' */

    /* Outport: '<Root>/VeMSPR_b_MtrB_SpdFARaw' incorporates:
     *  Logic: '<S355>/AND'
     *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrB_SpdFARaw'
     */
    (void)Rte_Write_VeMSPR_b_MtrB_SpdFARaw_Value(rtb_TmpSignalConversionAtLeM_p0);

    /* Outport: '<Root>/VeMSPR_b_MtrC_SpdFA' incorporates:
     *  Logic: '<S350>/AND'
     *  SignalConversion generated from: '<S17>/VeMSPR_b_MtrC_SpdFA'
     */
    (void)Rte_Write_VeMSPR_b_MtrC_SpdFA_Value(rtb_Switch10);

    /* Switch: '<S69>/Switch6' incorporates:
     *  Constant: '<S375>/Calib'
     */
    if (KeMSPR_b_P2SpdControl_TgtSpdFAOvrd)
    {
        /* Outport: '<Root>/VeMSPR_b_P2SpdControl_TgtSpdFA' incorporates:
         *  Constant: '<S376>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_b_P2SpdControl_TgtSpdFA'
         */
        (void)Rte_Write_VeMSPR_b_P2SpdControl_TgtSpdFA_Value
            (KeMSPR_b_P2SpdControl_TgtSpdFAOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_b_P2SpdControl_TgtSpdFA' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_b_P2SpdControl_TgtSpdFA'
         */
        (void)Rte_Write_VeMSPR_b_P2SpdControl_TgtSpdFA_Value
            (rtb_TmpSignalConversionAtLeMS_e);
    }

    /* End of Switch: '<S69>/Switch6' */

    /* Outport: '<Root>/VeMSPR_b_P2TgtSpdFA' incorporates:
     *  Logic: '<S356>/AND'
     *  SignalConversion generated from: '<S17>/VeMSPR_b_P2TgtSpdFA'
     */
    (void)Rte_Write_VeMSPR_b_P2TgtSpdFA_Value(rtb_TmpSignalConversionAtLeM_k2);

    /* Outport: '<Root>/VeMSPR_dn_MtrA_AccelRaw' incorporates:
     *  Gain: '<S386>/Gain'
     *  SignalConversion generated from: '<S17>/VeMSPR_dn_MtrA_AccelRaw'
     */
    (void)Rte_Write_VeMSPR_dn_MtrA_AccelRaw_Value(VeMSPC_dn_MtrA_AccelRaw);

    /* Outport: '<Root>/VeMSPR_dn_MtrB_AccelRaw' incorporates:
     *  Gain: '<S391>/Gain'
     *  SignalConversion generated from: '<S17>/VeMSPR_dn_MtrB_AccelRaw'
     */
    (void)Rte_Write_VeMSPR_dn_MtrB_AccelRaw_Value(VeMSPC_dn_MtrB_AccelRaw);

    /* Outport: '<Root>/VeMSPR_e_MtrASpd_Src' incorporates:
     *  DataTypeConversion: '<S360>/DataTypeConversion'
     *  Merge: '<S76>/Merge1'
     *  SignalConversion generated from: '<S17>/VeMSPR_e_MtrASpd_Src'
     */
    (void)Rte_Write_VeMSPR_e_MtrASpd_Src_Value(VeMSPC_e_MtrA_Spd_Src);

    /* Outport: '<Root>/VeMSPR_e_MtrBSpd_Src' incorporates:
     *  DataTypeConversion: '<S357>/DataTypeConversion'
     *  Merge: '<S79>/Merge1'
     *  SignalConversion generated from: '<S17>/VeMSPR_e_MtrBSpd_Src'
     */
    (void)Rte_Write_VeMSPR_e_MtrBSpd_Src_Value(VeMSPC_e_MtrBSrc);

    /* Outport: '<Root>/VeMSPR_e_MtrCSpd_Src' incorporates:
     *  DataTypeConversion: '<S358>/DataTypeConversion'
     *  SignalConversion generated from: '<S17>/VeMSPR_e_MtrCSpd_Src'
     *  VariantMerge generated from: '<S69>/VeMSPC_e_MtrCSpd_Src'
     */
    (void)Rte_Write_VeMSPR_e_MtrCSpd_Src_Value(rtb_VeMSPC_e_MtrCSpdSrc);

    /* Switch: '<S69>/Switch4' incorporates:
     *  Constant: '<S378>/Calib'
     *  Constant: '<S379>/Calib'
     */
    if (KeMSPR_b_P2Spd_Prfl_EnblOvrd)
    {
        rtb_TmpSignalConversionAtLeM_ow = KeMSPR_e_P2Spd_Prfl_EnblOvrdVal;
    }

    /* Outport: '<Root>/VeMSPR_e_P2Spd_Prfl_Enbl' incorporates:
     *  SignalConversion generated from: '<S17>/VeMSPR_e_P2Spd_Prfl_Enbl'
     *  Switch: '<S69>/Switch4'
     */
    (void)Rte_Write_VeMSPR_e_P2Spd_Prfl_Enbl_Value
        (rtb_TmpSignalConversionAtLeM_ow);

    /* Outport: '<Root>/VeMSPR_n_MaxMtrCSpdLmt' incorporates:
     *  Gain: '<S394>/Gain'
     *  SignalConversion generated from: '<S17>/VeMSPR_n_MaxMtrCSpdLmt'
     */
    (void)Rte_Write_VeMSPR_n_MaxMtrCSpdLmt_Value(rtb_Switch9);

    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S366>/Calib'
     */
    if (KeMSPR_b_MaxP1SpdLmtOvrd)
    {
        /* Outport: '<Root>/VeMSPR_n_MaxP1SpdLmt' incorporates:
         *  Constant: '<S381>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_n_MaxP1SpdLmt'
         */
        (void)Rte_Write_VeMSPR_n_MaxP1SpdLmt_Value(KeMSPR_n_MaxP1SpdLmtOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_n_MaxP1SpdLmt' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_n_MaxP1SpdLmt'
         */
        (void)Rte_Write_VeMSPR_n_MaxP1SpdLmt_Value(VeMSPC_n_MaxP1SpdLmt);
    }

    /* End of Switch: '<S69>/Switch' */

    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S384>/Calib'
     */
    if (KeMSPR_b_MaxP2SpdLmtOvrd)
    {
        /* Outport: '<Root>/VeMSPR_n_MaxP2SpdLmt' incorporates:
         *  Constant: '<S382>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_n_MaxP2SpdLmt'
         */
        (void)Rte_Write_VeMSPR_n_MaxP2SpdLmt_Value(KeMSPR_n_MaxP2SpdLmtOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_n_MaxP2SpdLmt' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_n_MaxP2SpdLmt'
         */
        (void)Rte_Write_VeMSPR_n_MaxP2SpdLmt_Value(VeMSPC_n_MaxP2SpdLmt);
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Outport: '<Root>/VeMSPR_n_MtrA_SpdRaw' incorporates:
     *  Gain: '<S385>/Gain'
     *  SignalConversion generated from: '<S17>/VeMSPR_n_MtrA_SpdRaw'
     */
    (void)Rte_Write_VeMSPR_n_MtrA_SpdRaw_Value(VeMSPC_n_MtrA_Spd_Raw);

    /* Outport: '<Root>/VeMSPR_n_MtrB_SpdRaw' incorporates:
     *  Gain: '<S393>/Gain'
     *  SignalConversion generated from: '<S17>/VeMSPR_n_MtrB_SpdRaw'
     */
    (void)Rte_Write_VeMSPR_n_MtrB_SpdRaw_Value(VeMSPC_n_MtrBSpdRaw);

    /* Switch: '<S69>/Switch5' incorporates:
     *  Constant: '<S377>/Calib'
     */
    if (KeMSPR_b_P2SpdControl_TgtSpdOvrd)
    {
        /* Outport: '<Root>/VeMSPR_n_P2SpdControl_TgtSpd' incorporates:
         *  Constant: '<S383>/Calib'
         *  SignalConversion generated from: '<S17>/VeMSPR_n_P2SpdControl_TgtSpd'
         */
        (void)Rte_Write_VeMSPR_n_P2SpdControl_TgtSpd_Value
            (KeMSPR_n_P2SpdControl_TgtSpdOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeMSPR_n_P2SpdControl_TgtSpd' incorporates:
         *  SignalConversion generated from: '<S17>/VeMSPR_n_P2SpdControl_TgtSpd'
         */
        (void)Rte_Write_VeMSPR_n_P2SpdControl_TgtSpd_Value
            (rtb_TmpSignalConversionAtLeM_d3);
    }

    /* End of Switch: '<S69>/Switch5' */

    /* Outport: '<Root>/VeMSPR_n_P2TgtSpd' incorporates:
     *  Gain: '<S390>/Gain'
     *  SignalConversion generated from: '<S17>/VeMSPR_n_P2TgtSpd'
     */
    (void)Rte_Write_VeMSPR_n_P2TgtSpd_Value(rtb_TmpSignalConversionAtLeM_it);

    /* Outport: '<Root>/VeMSPR_phi_MtrBPosAngle' incorporates:
     *  Gain: '<S395>/Gain'
     *  SignalConversion generated from: '<S17>/VeMSPR_phi_MtrBPosAngle'
     */
    (void)Rte_Write_VeMSPR_phi_MtrBPosAngle_Value(VeMSPC_phi_MtrBPosAngle);

    /* End of Outputs for S-Function (fcgen): '<S17>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_cnt_MtrBPosCnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_cnt_MtrBPosCnt' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S1>/FsftMSPR_cnt_MtrBPosCntChrt'
     *  SignalConversion generated from: '<S1>/VeMSPR_b_MtrBPosCntFA_write'
     */
    /* Gateway: FsftMSPR_cnt_MtrBPosCnt/FsftMSPR_cnt_MtrBPosCntChrt */
    /* During: FsftMSPR_cnt_MtrBPosCnt/FsftMSPR_cnt_MtrBPosCntChrt */
    /* Entry Internal: FsftMSPR_cnt_MtrBPosCnt/FsftMSPR_cnt_MtrBPosCntChrt */
    /* Transition: '<S52>:2' */
    Rte_IrvWrite_FsftMSPR_cnt_MtrBPosCnt_VeMSPR_b_MtrBPosCntFA_write_IRV(true);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S1>/FsftMSPR_cnt_MtrBPosCntChrt'
     *  SignalConversion generated from: '<S1>/VeMSPR_cnt_MtrBPosCntSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_cnt_MtrBPosCnt_VeMSPR_cnt_MtrBPosCntSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_cnt_MtrBPosCnt' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_dn_MtrA_AccelRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_dn_MtrA_AccelRaw' */
    /* Merge: '<Root>/Merge_37' incorporates:
     *  Chart: '<S2>/FsftMSPR_dn_MtrA_AccelRawChrt'
     *  SignalConversion generated from: '<S2>/VeMSPR_b_MtrA_AccelRawFA_write'
     */
    /* Gateway: FsftMSPR_dn_MtrA_AccelRaw/FsftMSPR_dn_MtrA_AccelRawChrt */
    /* During: FsftMSPR_dn_MtrA_AccelRaw/FsftMSPR_dn_MtrA_AccelRawChrt */
    /* Entry Internal: FsftMSPR_dn_MtrA_AccelRaw/FsftMSPR_dn_MtrA_AccelRawChrt */
    /* Transition: '<S53>:2' */
    Rte_IrvWrite_FsftMSPR_dn_MtrA_AccelRaw_VeMSPR_b_MtrA_AccelRawFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S2>/FsftMSPR_dn_MtrA_AccelRawChrt'
     *  SignalConversion generated from: '<S2>/VeMSPR_b_MtrA_AccelRaw_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_dn_MtrA_AccelRaw_VeMSPR_b_MtrA_AccelRaw_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  Chart: '<S2>/FsftMSPR_dn_MtrA_AccelRawChrt'
     *  SignalConversion generated from: '<S2>/VeMSPR_dn_MtrA_AccelRaw_write'
     */
    Rte_IrvWrite_FsftMSPR_dn_MtrA_AccelRaw_VeMSPR_dn_MtrA_AccelRaw_write_IRV
        (KeMSPR_dn_MtrA_Accel_Init);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_dn_MtrA_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_dn_MtrB_AccelRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_dn_MtrB_AccelRaw' */
    /* Merge: '<Root>/Merge_39' incorporates:
     *  Chart: '<S3>/FsftMSPR_dn_MtrB_AccelRawChrt'
     *  SignalConversion generated from: '<S3>/VeMSPR_b_MtrB_AccelRawFA_write'
     */
    /* Gateway: FsftMSPR_dn_MtrB_AccelRaw/FsftMSPR_dn_MtrB_AccelRawChrt */
    /* During: FsftMSPR_dn_MtrB_AccelRaw/FsftMSPR_dn_MtrB_AccelRawChrt */
    /* Entry Internal: FsftMSPR_dn_MtrB_AccelRaw/FsftMSPR_dn_MtrB_AccelRawChrt */
    /* Transition: '<S54>:2' */
    Rte_IrvWrite_FsftMSPR_dn_MtrB_AccelRaw_VeMSPR_b_MtrB_AccelRawFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  Chart: '<S3>/FsftMSPR_dn_MtrB_AccelRawChrt'
     *  SignalConversion generated from: '<S3>/VeMSPR_b_MtrB_AccelRaw_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_dn_MtrB_AccelRaw_VeMSPR_b_MtrB_AccelRaw_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  Chart: '<S3>/FsftMSPR_dn_MtrB_AccelRawChrt'
     *  SignalConversion generated from: '<S3>/VeMSPR_dn_MtrB_AccelRaw_write'
     */
    Rte_IrvWrite_FsftMSPR_dn_MtrB_AccelRaw_VeMSPR_dn_MtrB_AccelRaw_write_IRV
        (KeMSPR_dn_MtrA_Accel_Init);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_dn_MtrB_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_dn_MtrC_AccelRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_dn_MtrC_AccelRaw' */
    /* SignalConversion generated from: '<S4>/FsftMSPR_dn_MtrC_AccelRawChrt' incorporates:
     *  SignalConversion generated from: '<S4>/VeMSPR_b_MtrC_AccelRawFA_write'
     *  SignalConversion generated from: '<S4>/VeMSPR_b_MtrC_AccelRaw_Rcvd_write'
     *  SignalConversion generated from: '<S4>/VeMSPR_dn_MtrC_AccelRaw_write'
     */
    /* Gateway: FsftMSPR_dn_MtrC_AccelRaw/FsftMSPR_dn_MtrC_AccelRawChrt */
    /* During: FsftMSPR_dn_MtrC_AccelRaw/FsftMSPR_dn_MtrC_AccelRawChrt */
    /* Entry Internal: FsftMSPR_dn_MtrC_AccelRaw/FsftMSPR_dn_MtrC_AccelRawChrt */
    /* Transition: '<S55>:2' */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_32' incorporates:
     *  Chart: '<S4>/FsftMSPR_dn_MtrC_AccelRawChrt'
     */
    Rte_IrvWrite_FsftMSPR_dn_MtrC_AccelRaw_VeMSPR_b_MtrC_AccelRawFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S4>/FsftMSPR_dn_MtrC_AccelRawChrt'
     */
    Rte_IrvWrite_FsftMSPR_dn_MtrC_AccelRaw_VeMSPR_b_MtrC_AccelRaw_Rcvd_write_IRV
        (false);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  Chart: '<S4>/FsftMSPR_dn_MtrC_AccelRawChrt'
     */
    Rte_IrvWrite_FsftMSPR_dn_MtrC_AccelRaw_VeMSPR_dn_MtrC_AccelRaw_write_IRV
        (KeMSPR_dn_MtrC_Accel_Init);

#endif

    /* End of SignalConversion generated from: '<S4>/FsftMSPR_dn_MtrC_AccelRawChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_dn_MtrC_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_e_P2Spd_Prfl_Enbl(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_e_P2Spd_Prfl_Enbl' */
    /* Merge: '<Root>/Merge_24' incorporates:
     *  Chart: '<S5>/FsftMSPR_e_P2Spd_Prfl_EnblChrt'
     *  SignalConversion generated from: '<S5>/VeMSPR_e_P2Spd_Prfl_Enbl_write'
     */
    /* Gateway: FsftMSPR_e_P2Spd_Prfl_Enbl/FsftMSPR_e_P2Spd_Prfl_EnblChrt */
    /* During: FsftMSPR_e_P2Spd_Prfl_Enbl/FsftMSPR_e_P2Spd_Prfl_EnblChrt */
    /* Entry Internal: FsftMSPR_e_P2Spd_Prfl_Enbl/FsftMSPR_e_P2Spd_Prfl_EnblChrt */
    /* Transition: '<S56>:2' */
    Rte_IrvWrite_FsftMSPR_e_P2Spd_Prfl_Enbl_VeMSPR_e_P2Spd_Prfl_Enbl_write_IRV
        (KeMSPR_e_P2Spd_Prfl_Enbl_Def);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_e_P2Spd_Prfl_Enbl' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MaxMtrCSpdLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MaxMtrCSpdLmt' */
    /* Merge: '<Root>/Merge_35' incorporates:
     *  Chart: '<S6>/FsftMSPR_n_MaxMtrCSpdLmtChrt'
     *  SignalConversion generated from: '<S6>/VeMSPR_b_MaxMtrCSpdLmtFA_write'
     */
    /* Gateway: FsftMSPR_n_MaxMtrCSpdLmt/FsftMSPR_n_MaxMtrCSpdLmtChrt */
    /* During: FsftMSPR_n_MaxMtrCSpdLmt/FsftMSPR_n_MaxMtrCSpdLmtChrt */
    /* Entry Internal: FsftMSPR_n_MaxMtrCSpdLmt/FsftMSPR_n_MaxMtrCSpdLmtChrt */
    /* Transition: '<S57>:2' */
    Rte_IrvWrite_FsftMSPR_n_MaxMtrCSpdLmt_VeMSPR_b_MaxMtrCSpdLmtFA_write_IRV
        (true);

    /* SignalConversion generated from: '<S6>/VeMSPR_b_MaxMtrCSpdLmtSgnl_Rcvd_write' */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_36' */
    Rte_IrvWrite_FsftMSPR_n_MaxMtrCSpdLmt_VeMSPR_b_MaxMtrCSpdLmtSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S6>/VeMSPR_b_MaxMtrCSpdLmtSgnl_Rcvd_write' */
    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MaxMtrCSpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MaxP1SpdLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MaxP1SpdLmt' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S7>/FsftMSPR_n_MaxP1SpdLmtChrt'
     *  SignalConversion generated from: '<S7>/VeMSPR_b_MaxP1SpdLmtFA_write'
     */
    /* Gateway: FsftMSPR_n_MaxP1SpdLmt/FsftMSPR_n_MaxP1SpdLmtChrt */
    /* During: FsftMSPR_n_MaxP1SpdLmt/FsftMSPR_n_MaxP1SpdLmtChrt */
    /* Entry Internal: FsftMSPR_n_MaxP1SpdLmt/FsftMSPR_n_MaxP1SpdLmtChrt */
    /* Transition: '<S58>:2' */
    Rte_IrvWrite_FsftMSPR_n_MaxP1SpdLmt_VeMSPR_b_MaxP1SpdLmtFA_write_IRV(true);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S7>/FsftMSPR_n_MaxP1SpdLmtChrt'
     *  SignalConversion generated from: '<S7>/VeMSPR_n_MaxP1SpdLmtSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_n_MaxP1SpdLmt_VeMSPR_n_MaxP1SpdLmtSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MaxP1SpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MaxP1SpdLmt_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MaxP1SpdLmt_AltSrc' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  Chart: '<S8>/FsftMSPR_n_MaxP1SpdLmt_AltSrcChrt'
     *  SignalConversion generated from: '<S8>/VeMSPR_b_MaxP1SpdLmt_AltSrcFA_write'
     */
    /* Gateway: FsftMSPR_n_MaxP1SpdLmt_AltSrc/FsftMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* During: FsftMSPR_n_MaxP1SpdLmt_AltSrc/FsftMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* Entry Internal: FsftMSPR_n_MaxP1SpdLmt_AltSrc/FsftMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* Transition: '<S59>:2' */
    Rte_IrvWrite_FsftMSPR_n_MaxP1SpdLmt_AltSrc_VeMSPR_b_MaxP1SpdLmt_AltSrcFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S8>/FsftMSPR_n_MaxP1SpdLmt_AltSrcChrt'
     *  SignalConversion generated from: '<S8>/VeMSPR_n_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_n_MaxP1SpdLmt_AltSrc_VeMSPR_n_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MaxP1SpdLmt_AltSrc' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MaxP2SpdLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MaxP2SpdLmt' */
    /* Merge: '<Root>/Merge_13' incorporates:
     *  Chart: '<S9>/FsftMSPR_n_MaxP2SpdLmtChrt'
     *  SignalConversion generated from: '<S9>/VeMSPR_b_MaxP2SpdLmtFA_write'
     */
    /* Gateway: FsftMSPR_n_MaxP2SpdLmt/FsftMSPR_n_MaxP2SpdLmtChrt */
    /* During: FsftMSPR_n_MaxP2SpdLmt/FsftMSPR_n_MaxP2SpdLmtChrt */
    /* Entry Internal: FsftMSPR_n_MaxP2SpdLmt/FsftMSPR_n_MaxP2SpdLmtChrt */
    /* Transition: '<S60>:2' */
    Rte_IrvWrite_FsftMSPR_n_MaxP2SpdLmt_VeMSPR_b_MaxP2SpdLmtFA_write_IRV(true);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S9>/FsftMSPR_n_MaxP2SpdLmtChrt'
     *  SignalConversion generated from: '<S9>/VeMSPR_n_MaxP2SpdLmtSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_n_MaxP2SpdLmt_VeMSPR_n_MaxP2SpdLmtSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MaxP2SpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MaxP2SpdLmt_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MaxP2SpdLmt_AltSrc' */
    /* Merge: '<Root>/Merge_22' incorporates:
     *  Chart: '<S10>/FsftMSPR_n_MaxP2SpdLmt_AltSrcChrt'
     *  SignalConversion generated from: '<S10>/VeMSPR_b_MaxP2SpdLmt_AltSrcFA_write'
     */
    /* Gateway: FsftMSPR_n_MaxP2SpdLmt_AltSrc/FsftMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* During: FsftMSPR_n_MaxP2SpdLmt_AltSrc/FsftMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* Entry Internal: FsftMSPR_n_MaxP2SpdLmt_AltSrc/FsftMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* Transition: '<S61>:2' */
    Rte_IrvWrite_FsftMSPR_n_MaxP2SpdLmt_AltSrc_VeMSPR_b_MaxP2SpdLmt_AltSrcFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S10>/FsftMSPR_n_MaxP2SpdLmt_AltSrcChrt'
     *  SignalConversion generated from: '<S10>/VeMSPR_n_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_n_MaxP2SpdLmt_AltSrc_VeMSPR_n_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MaxP2SpdLmt_AltSrc' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MtrA_SpdRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MtrA_SpdRaw' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S11>/FsftMSPR_n_MtrA_SpdRawChrt'
     *  SignalConversion generated from: '<S11>/VeMSPR_b_MtrA_SpdRawFA_write'
     */
    /* Gateway: FsftMSPR_n_MtrA_SpdRaw/FsftMSPR_n_MtrA_SpdRawChrt */
    /* During: FsftMSPR_n_MtrA_SpdRaw/FsftMSPR_n_MtrA_SpdRawChrt */
    /* Entry Internal: FsftMSPR_n_MtrA_SpdRaw/FsftMSPR_n_MtrA_SpdRawChrt */
    /* Transition: '<S62>:2' */
    Rte_IrvWrite_FsftMSPR_n_MtrA_SpdRaw_VeMSPR_b_MtrA_SpdRawFA_write_IRV(true);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S11>/FsftMSPR_n_MtrA_SpdRawChrt'
     *  SignalConversion generated from: '<S11>/VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_n_MtrA_SpdRaw_VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MtrA_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MtrB_SpdRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MtrB_SpdRaw' */
    /* Merge: '<Root>/Merge_20' incorporates:
     *  Chart: '<S12>/FsftMSPR_n_MtrB_SpdRawChrt'
     *  SignalConversion generated from: '<S12>/VeMSPR_b_MtrB_SpdRawFA_write'
     */
    /* Gateway: FsftMSPR_n_MtrB_SpdRaw/FsftMSPR_n_MtrB_SpdRawChrt */
    /* During: FsftMSPR_n_MtrB_SpdRaw/FsftMSPR_n_MtrB_SpdRawChrt */
    /* Entry Internal: FsftMSPR_n_MtrB_SpdRaw/FsftMSPR_n_MtrB_SpdRawChrt */
    /* Transition: '<S63>:2' */
    Rte_IrvWrite_FsftMSPR_n_MtrB_SpdRaw_VeMSPR_b_MtrB_SpdRawFA_write_IRV(true);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S12>/FsftMSPR_n_MtrB_SpdRawChrt'
     *  SignalConversion generated from: '<S12>/VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftMSPR_n_MtrB_SpdRaw_VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MtrB_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_MtrC_SpdRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_MtrC_SpdRaw' */
    /* SignalConversion generated from: '<S13>/FsftMSPR_n_MtrC_SpdRawChrt' incorporates:
     *  SignalConversion generated from: '<S13>/VeMSPR_b_MtrC_SpdRawFA_write'
     *  SignalConversion generated from: '<S13>/VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write'
     */
    /* Gateway: FsftMSPR_n_MtrC_SpdRaw/FsftMSPR_n_MtrC_SpdRawChrt */
    /* During: FsftMSPR_n_MtrC_SpdRaw/FsftMSPR_n_MtrC_SpdRawChrt */
    /* Entry Internal: FsftMSPR_n_MtrC_SpdRaw/FsftMSPR_n_MtrC_SpdRawChrt */
    /* Transition: '<S64>:2' */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S13>/FsftMSPR_n_MtrC_SpdRawChrt'
     */
    Rte_IrvWrite_FsftMSPR_n_MtrC_SpdRaw_VeMSPR_b_MtrC_SpdRawFA_write_IRV(true);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S13>/FsftMSPR_n_MtrC_SpdRawChrt'
     */
    Rte_IrvWrite_FsftMSPR_n_MtrC_SpdRaw_VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S13>/FsftMSPR_n_MtrC_SpdRawChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_MtrC_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_P2SpdControl_TgtSpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_P2SpdControl_TgtSpd' */
    /* Merge: '<Root>/Merge_26' incorporates:
     *  Chart: '<S14>/FsftMSPR_n_P2SpdControl_TgtSpdChrt'
     *  SignalConversion generated from: '<S14>/VeMSPR_b_P2SpdControl_TgtSpdFA_write'
     */
    /* Gateway: FsftMSPR_n_P2SpdControl_TgtSpd/FsftMSPR_n_P2SpdControl_TgtSpdChrt */
    /* During: FsftMSPR_n_P2SpdControl_TgtSpd/FsftMSPR_n_P2SpdControl_TgtSpdChrt */
    /* Entry Internal: FsftMSPR_n_P2SpdControl_TgtSpd/FsftMSPR_n_P2SpdControl_TgtSpdChrt */
    /* Transition: '<S65>:2' */
    Rte_IrvWrite_FsftMSPR_n_P2SpdControl_TgtSpd_VeMSPR_b_P2SpdControl_TgtSpdFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_P2SpdControl_TgtSpd' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_n_P2TgtSpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftMSPR_n_P2TgtSpd' */
    /* Merge: '<Root>/Merge_30' incorporates:
     *  Chart: '<S15>/FsftMSPR_n_P2TgtSpdChrt'
     *  SignalConversion generated from: '<S15>/VeMSPR_b_P2TgtSpdFA_write'
     */
    /* Gateway: FsftMSPR_n_P2TgtSpd/FsftMSPR_n_P2TgtSpdChrt */
    /* During: FsftMSPR_n_P2TgtSpd/FsftMSPR_n_P2TgtSpdChrt */
    /* Entry Internal: FsftMSPR_n_P2TgtSpd/FsftMSPR_n_P2TgtSpdChrt */
    /* Transition: '<S66>:2' */
    Rte_IrvWrite_FsftMSPR_n_P2TgtSpd_VeMSPR_b_P2TgtSpdFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftMSPR_n_P2TgtSpd' */
}

/* Output function */
FUNC(void, MSPR_CODE) FsftMSPR_t_MtrBTimeStamp(void)
{
    /* Gateway: FsftMSPR_t_MtrBTimeStamp/FsftMSPR_t_MtrBTimeStampChrt */
    /* During: FsftMSPR_t_MtrBTimeStamp/FsftMSPR_t_MtrBTimeStampChrt */
    /* Entry Internal: FsftMSPR_t_MtrBTimeStamp/FsftMSPR_t_MtrBTimeStampChrt */
    /* Transition: '<S67>:2' */
}

/* Output function */
FUNC(void, MSPR_CODE) MSPR_PUP(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/MSPR_PUP'
     */
    /* S-Function (fcgen): '<S18>/FcnCallGen' incorporates:
     *  SubSystem: '<S18>/MSPO_InitMtrSpd'
     */

    /* SignalConversion generated from: '<S398>/LeMSPC_n_MtrASpdInit' */
    MSPR_ac_B.LeMSPC_n_MtrASpdInit = 0.0F;

    /* SignalConversion generated from: '<S398>/LeMSPC_n_MtrBSpdInit' */
    MSPR_ac_B.LeMSPC_n_MtrBSpdInit = 0.0F;

    /* SignalConversion generated from: '<S398>/LeMSPC_n_MtrCSpdInit' */
    MSPR_ac_B.OutportBufferForLeMSPC_n_MtrCSp = 0.0F;

    /* SignalConversion generated from: '<S398>/LeMSPC_dn_MtrAAccelInit' */
    MSPR_ac_B.LeMSPC_dn_MtrAAccelInit = 0.0F;

    /* SignalConversion generated from: '<S398>/LeMSPC_dn_MtrBAccelInit' */
    MSPR_ac_B.LeMSPC_dn_MtrBAccelInit = 0.0F;

    /* SignalConversion generated from: '<S398>/LeMSPC_dn_MtrCAccelInit' */
    MSPR_ac_B.LeMSPC_dn_MtrCAccelInit = 0.0F;

    /* S-Function (fcgen): '<S18>/FcnCallGen' incorporates:
     *  SubSystem: '<S18>/MSPI_Init_Processing'
     */
    /* SignalConversion generated from: '<S397>/VeMSPR_n_MtrA_SpdRaw_Init' incorporates:
     *  Constant: '<S409>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrA_o = KeMSPR_n_MtrASpd_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrA_SpdFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_m = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_i = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_MtrB_SpdRaw_Init' incorporates:
     *  Constant: '<S410>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrB_h = KeMSPR_n_MtrBSpd_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrB_SpdFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_Mtr_cw = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_o = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_dn_MtrA_AccelRaw_Init' incorporates:
     *  Constant: '<S401>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_Mtr_c = KeMSPR_dn_MtrA_Accel_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrA_AccelFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_A = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_dn_MtrB_AccelRaw_Init' incorporates:
     *  Constant: '<S402>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_Mtr_o = KeMSPR_dn_MtrB_Accel_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrB_AccelFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_A = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_cnt_MtrBPosCnt_init' incorporates:
     *  Constant: '<S400>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_cnt_MtrB = KeMSPR_Cnt_MtrBPosCnt_init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrBPosCnt_init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_j = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_MaxP1SpdLmt_Init' incorporates:
     *  Constant: '<S406>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_i = KeMSPR_n_MaxP1SpdLmt_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_MaxP2SpdLmt_Init' incorporates:
     *  Constant: '<S408>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_l = KeMSPR_n_MaxP2SpdLmt_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP1SpdLmtFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_b = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP2SpdLmtFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_a = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP1SpdLmt_Rcvd_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_g = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP2SpdLmt_Rcvd_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_m = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_MaxP1SpdLmt_AltSrc_Init' incorporates:
     *  Constant: '<S405>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_d = KeMSPR_n_MaxP1SpdLmt_AltSrc_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_MaxP2SpdLmt_AltSrc_Init' incorporates:
     *  Constant: '<S407>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_o = KeMSPR_n_MaxP2SpdLmt_AltSrc_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP1SpdLmtFA_AltSrc_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_j = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP2SpdLmtFA_AltSrc_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_p = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP1SpdLmt_Rcvd_AltSrc_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_Max_aj = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxP2SpdLmt_Rcvd_AltSrc_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_n = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_P2Spd_Prfl_Enbl_Init' incorporates:
     *  Constant: '<S399>/Constant'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_b_P2Spd_ = MSPR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_P2SpdControl_TgtSpd_Init' incorporates:
     *  Constant: '<S412>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_P2Sp_e =
        KeMSPR_n_P2SpdControl_TgtSpd_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_P2SpdControl_TgtSpdFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_P2Sp_f = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_P2TgtSpd_Init' incorporates:
     *  Constant: '<S413>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_P2Tg_p = KeMSPR_n_P2TgtSpd_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_P2TgtSpdFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_P2Tg_p = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_MtrC_SpdRaw_Init' incorporates:
     *  Constant: '<S411>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrC_f = KeMSPR_n_MtrCSpd_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrC_SpdFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_i = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_l = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_dn_MtrC_AccelRaw_Init' incorporates:
     *  Constant: '<S403>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_Mt_os = KeMSPR_dn_MtrC_Accel_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MtrC_AccelFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_A = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_n_MaxMtrCSpdLmt_Init' incorporates:
     *  Constant: '<S404>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxM_i = KeMSPR_n_MaxMtrCSpdLmt_Init;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxMtrCSpdLmtFA_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxM_g = false;

    /* SignalConversion generated from: '<S397>/VeMSPR_b_MaxMtrCSpdLmtFA_Rcvd_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxM_a = false;

    /* End of Outputs for S-Function (fcgen): '<S18>/FcnCallGen' */

    /* Outport: '<Root>/VeMSPR_dn_MtrA_Accel' incorporates:
     *  SignalConversion generated from: '<S18>/LeMSPC_dn_MtrAAccelInit'
     */
    (void)Rte_Write_VeMSPR_dn_MtrA_Accel_Value(MSPR_ac_B.LeMSPC_dn_MtrAAccelInit);

    /* Outport: '<Root>/VeMSPR_dn_MtrB_Accel' incorporates:
     *  SignalConversion generated from: '<S18>/LeMSPC_dn_MtrBAccelInit'
     */
    (void)Rte_Write_VeMSPR_dn_MtrB_Accel_Value(MSPR_ac_B.LeMSPC_dn_MtrBAccelInit);

    /* Outport: '<Root>/VeMSPR_dn_MtrC_Accel' incorporates:
     *  SignalConversion generated from: '<S18>/LeMSPC_dn_MtrCAccelInit'
     */
    (void)Rte_Write_VeMSPR_dn_MtrC_Accel_Value(MSPR_ac_B.LeMSPC_dn_MtrCAccelInit);

    /* Outport: '<Root>/VeMSPR_n_MtrA_Spd' incorporates:
     *  SignalConversion generated from: '<S18>/LeMSPC_n_MtrASpdInit'
     */
    (void)Rte_Write_VeMSPR_n_MtrA_Spd_Value(MSPR_ac_B.LeMSPC_n_MtrASpdInit);

    /* Outport: '<Root>/VeMSPR_n_MtrB_Spd' incorporates:
     *  SignalConversion generated from: '<S18>/LeMSPC_n_MtrBSpdInit'
     */
    (void)Rte_Write_VeMSPR_n_MtrB_Spd_Value(MSPR_ac_B.LeMSPC_n_MtrBSpdInit);

    /* Outport: '<Root>/VeMSPR_n_MtrC_Spd' incorporates:
     *  SignalConversion generated from: '<S18>/LeMSPC_n_MtrCSpdInit'
     */
    (void)Rte_Write_VeMSPR_n_MtrC_Spd_Value
        (MSPR_ac_B.OutportBufferForLeMSPC_n_MtrCSp);

    /* Outport: '<Root>/VeMSPR_n_MaxMtrCSpdLmtRaw' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxMtrCSpdLmtRaw_Init'
     */
    (void)Rte_Write_VeMSPR_n_MaxMtrCSpdLmtRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxM_i);

    /* Outport: '<Root>/VeMSPR_n_MaxP1SpdLmtRaw' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxP1SpdLmtRaw_Init'
     */
    (void)Rte_Write_VeMSPR_n_MaxP1SpdLmtRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_i);

    /* Outport: '<Root>/VeMSPR_n_MaxP2SpdLmtRaw' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxP2SpdLmtRaw_Init'
     */
    (void)Rte_Write_VeMSPR_n_MaxP2SpdLmtRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_l);

    /* Merge: '<Root>/Merge_35' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxMtrCSpdLmtFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MaxMtrCSpdLmtFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxM_g);

    /* Merge: '<Root>/Merge_36' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxMtrCSpdLmtFA_Rcvd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MaxMtrCSpdLmtSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxM_a);

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP1SpdLmtFA_AltSrc_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MaxP1SpdLmt_AltSrcFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_j);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP1SpdLmtFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MaxP1SpdLmtFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_b);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP1SpdLmt_Rcvd_AltSrc_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_Max_aj);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP1SpdLmt_Rcvd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP1SpdLmtSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_g);

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP2SpdLmtFA_AltSrc_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MaxP2SpdLmt_AltSrcFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_p);

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP2SpdLmtFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MaxP2SpdLmtFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_a);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP2SpdLmt_Rcvd_AltSrc_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_n);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MaxP2SpdLmt_Rcvd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP2SpdLmtSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP_m);

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrA_AccelFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrA_AccelRawFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_A);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrA_SpdFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrA_SpdRawFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_m);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_i);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrBPosCnt_init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrBPosCntFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_j);

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrB_AccelFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrB_AccelRawFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_A);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrB_SpdFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrB_SpdRawFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_Mtr_cw);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_o);

    /* Merge: '<Root>/Merge_32' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrC_AccelFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrC_AccelRawFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_A);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrC_SpdFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrC_SpdRawFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_i);

    /* Merge: '<Root>/Merge_27' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_l);

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_P2SpdControl_TgtSpdFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_P2SpdControl_TgtSpdFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_P2Sp_f);

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_P2Spd_Prfl_Enbl_Init_write'
     *  SignalConversion generated from: '<S397>/VeMSPR_b_P2Spd_Prfl_Enbl_Init'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_e_P2Spd_Prfl_Enbl_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_P2Spd_);

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_b_P2TgtSpdFA_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_b_P2TgtSpdFA_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_b_P2Tg_p);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_cnt_MtrBPosCnt_init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_cnt_MtrBPosCnt_init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_cnt_MtrB);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_dn_MtrA_AccelRaw_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_dn_MtrA_AccelRaw_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_dn_Mtr_c);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_dn_MtrB_AccelRaw_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_dn_MtrB_AccelRaw_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_dn_Mtr_o);

    /* Merge: '<Root>/Merge_33' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_dn_MtrC_AccelRaw_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_dn_MtrC_AccelRaw_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_dn_Mt_os);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxMtrCSpdLmt_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxMtrCSpdLmt_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxM_i);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxP1SpdLmt_AltSrc_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP1SpdLmt_AltSrc_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_d);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxP1SpdLmt_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP1SpdLmt_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_i);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxP2SpdLmt_AltSrc_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP2SpdLmt_AltSrc_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_o);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MaxP2SpdLmt_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MaxP2SpdLmt_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_l);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MtrA_SpdRaw_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MtrA_SpdRaw_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MtrA_o);

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MtrB_SpdRaw_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MtrB_SpdRaw_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MtrB_h);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_MtrC_SpdRaw_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_MtrC_SpdRaw_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MtrC_f);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_P2SpdControl_TgtSpd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_P2SpdControl_TgtSpd_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_P2Sp_e);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S18>/VeMSPR_n_P2TgtSpd_Init_write'
     * */
    Rte_IrvWrite_MSPR_PUP_VeMSPR_n_P2TgtSpd_Init_write_IRV
        (MSPR_ac_B.OutportBufferForVeMSPR_n_P2Tg_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_b_MCPA_TrqMntrWarn(VAR(boolean, AUTOMATIC)
    LeMSPR_b_MCPA_TrqMntrWarn)
{
    UNUSED_PARAMETER(LeMSPR_b_MCPA_TrqMntrWarn);

    /* Gateway: PokeMSPR_b_MCPA_TrqMntrWarn/PokeMSPR_b_MCPA_TrqMntrWarnChrt */
    /* During: PokeMSPR_b_MCPA_TrqMntrWarn/PokeMSPR_b_MCPA_TrqMntrWarnChrt */
    /* Entry Internal: PokeMSPR_b_MCPA_TrqMntrWarn/PokeMSPR_b_MCPA_TrqMntrWarnChrt */
    /* Transition: '<S416>:2' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_b_MCPB_TrqMntrWarn(VAR(boolean, AUTOMATIC)
    LeMSPR_b_MCPB_TrqMntrWarn)
{
    UNUSED_PARAMETER(LeMSPR_b_MCPB_TrqMntrWarn);

    /* Gateway: PokeMSPR_b_MCPB_TrqMntrWarn/PokeMSPR_b_MCPB_TrqMntrWarnChrt */
    /* During: PokeMSPR_b_MCPB_TrqMntrWarn/PokeMSPR_b_MCPB_TrqMntrWarnChrt */
    /* Entry Internal: PokeMSPR_b_MCPB_TrqMntrWarn/PokeMSPR_b_MCPB_TrqMntrWarnChrt */
    /* Transition: '<S417>:2' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_cnt_MtrBPosCnt(VAR(float32, AUTOMATIC)
    LeMSPR_cnt_MtrBPosCnt, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrBPosCntFA)
{
    boolean rtb_LeMSPR_b_MtrBPosCntFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_cnt_MtrBPosCnt' */
    /* Chart: '<S22>/PokeMSPR_cnt_MtrBPosCntChrt' incorporates:
     *  SignalConversion generated from: '<S22>/LeMSPR_b_MtrBPosCntFA'
     *  SignalConversion generated from: '<S22>/LeMSPR_cnt_MtrBPosCnt'
     */
    /* Gateway: PokeMSPR_cnt_MtrBPosCnt/PokeMSPR_cnt_MtrBPosCntChrt */
    /* During: PokeMSPR_cnt_MtrBPosCnt/PokeMSPR_cnt_MtrBPosCntChrt */
    /* Entry Internal: PokeMSPR_cnt_MtrBPosCnt/PokeMSPR_cnt_MtrBPosCntChrt */
    /* Transition: '<S418>:2' */
    if (!LeMSPR_b_MtrBPosCntFA)
    {
        /* Transition: '<S418>:3' */
        /* Transition: '<S418>:15' */
        MSPR_ac_B.LeMSPR_cnt_MtrBPosCnt_out = LeMSPR_cnt_MtrBPosCnt;
        rtb_LeMSPR_b_MtrBPosCntFA_out_n = false;
        MSPR_ac_B.LeMSPR_b_MtrBPosCntSgnl_Rcvd = true;

        /* Transition: '<S418>:18' */
    }
    else
    {
        /* Transition: '<S418>:4' */
        rtb_LeMSPR_b_MtrBPosCntFA_out_n = true;
    }

    /* End of Chart: '<S22>/PokeMSPR_cnt_MtrBPosCntChrt' */

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S22>/VeMSPR_b_MtrBPosCntFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_cnt_MtrBPosCnt_VeMSPR_b_MtrBPosCntFA_write_IRV
        (rtb_LeMSPR_b_MtrBPosCntFA_out_n);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S22>/VeMSPR_b_MtrBPosCntSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMSPR_cnt_MtrBPosCnt_VeMSPR_cnt_MtrBPosCntSgnl_Rcvd_write_IRV
        (MSPR_ac_B.LeMSPR_b_MtrBPosCntSgnl_Rcvd);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S22>/VeMSPR_cnt_MtrBPosCnt_write'
     * */
    Rte_IrvWrite_PokeMSPR_cnt_MtrBPosCnt_VeMSPR_cnt_MtrBPosCnt_init_write_IRV
        (MSPR_ac_B.LeMSPR_cnt_MtrBPosCnt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_cnt_MtrBPosCnt' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_dn_MtrA_AccelRaw(VAR(float32, AUTOMATIC)
    LeMSPR_dn_MtrA_AccelRaw, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrA_AccelRawFA)
{
    boolean rtb_LeMSPR_b_MtrA_AccelRawFA__p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_dn_MtrA_AccelRaw' */
    /* Chart: '<S23>/PokeMSPR_dn_MtrA_AccelRawChrt' incorporates:
     *  SignalConversion generated from: '<S23>/LeMSPR_b_MtrA_AccelRawFA'
     *  SignalConversion generated from: '<S23>/LeMSPR_dn_MtrA_AccelRaw'
     */
    /* Gateway: PokeMSPR_dn_MtrA_AccelRaw/PokeMSPR_dn_MtrA_AccelRawChrt */
    /* During: PokeMSPR_dn_MtrA_AccelRaw/PokeMSPR_dn_MtrA_AccelRawChrt */
    /* Entry Internal: PokeMSPR_dn_MtrA_AccelRaw/PokeMSPR_dn_MtrA_AccelRawChrt */
    /* Transition: '<S419>:2' */
    if (!LeMSPR_b_MtrA_AccelRawFA)
    {
        /* Transition: '<S419>:3' */
        /* Transition: '<S419>:15' */
        MSPR_ac_B.LeMSPR_dn_MtrA_AccelRaw_out = LeMSPR_dn_MtrA_AccelRaw;
        rtb_LeMSPR_b_MtrA_AccelRawFA__p = false;

        /* Transition: '<S419>:18' */
    }
    else
    {
        /* Transition: '<S419>:4' */
        rtb_LeMSPR_b_MtrA_AccelRawFA__p = true;
    }

    /* Merge: '<Root>/Merge_37' incorporates:
     *  SignalConversion generated from: '<S23>/VeMSPR_b_MtrA_AccelRawFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_dn_MtrA_AccelRaw_VeMSPR_b_MtrA_AccelRawFA_write_IRV
        (rtb_LeMSPR_b_MtrA_AccelRawFA__p);

    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S23>/PokeMSPR_dn_MtrA_AccelRawChrt'
     *  SignalConversion generated from: '<S23>/VeMSPR_b_MtrA_AccelRaw_Rcvd_write'
     */
    Rte_IrvWrite_PokeMSPR_dn_MtrA_AccelRaw_VeMSPR_b_MtrA_AccelRaw_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_31' incorporates:
     *  SignalConversion generated from: '<S23>/VeMSPR_dn_MtrA_AccelRaw_write'
     * */
    Rte_IrvWrite_PokeMSPR_dn_MtrA_AccelRaw_VeMSPR_dn_MtrA_AccelRaw_write_IRV
        (MSPR_ac_B.LeMSPR_dn_MtrA_AccelRaw_out);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_dn_MtrA_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_dn_MtrB_AccelRaw(VAR(float32, AUTOMATIC)
    LeMSPR_dn_MtrB_AccelRaw, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrB_AccelRawFA)
{
    boolean rtb_LeMSPR_b_MtrB_AccelRawFA__j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_dn_MtrB_AccelRaw' */
    /* Chart: '<S24>/PokeMSPR_dn_MtrB_AccelRawChrt' incorporates:
     *  SignalConversion generated from: '<S24>/LeMSPR_b_MtrB_AccelRawFA'
     *  SignalConversion generated from: '<S24>/LeMSPR_dn_MtrB_AccelRaw'
     */
    /* Gateway: PokeMSPR_dn_MtrB_AccelRaw/PokeMSPR_dn_MtrB_AccelRawChrt */
    /* During: PokeMSPR_dn_MtrB_AccelRaw/PokeMSPR_dn_MtrB_AccelRawChrt */
    /* Entry Internal: PokeMSPR_dn_MtrB_AccelRaw/PokeMSPR_dn_MtrB_AccelRawChrt */
    /* Transition: '<S420>:2' */
    if (!LeMSPR_b_MtrB_AccelRawFA)
    {
        /* Transition: '<S420>:3' */
        /* Transition: '<S420>:15' */
        MSPR_ac_B.LeMSPR_dn_MtrB_AccelRaw_out = LeMSPR_dn_MtrB_AccelRaw;
        rtb_LeMSPR_b_MtrB_AccelRawFA__j = false;

        /* Transition: '<S420>:18' */
    }
    else
    {
        /* Transition: '<S420>:4' */
        rtb_LeMSPR_b_MtrB_AccelRawFA__j = true;
    }

    /* Merge: '<Root>/Merge_39' incorporates:
     *  SignalConversion generated from: '<S24>/VeMSPR_b_MtrB_AccelRawFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_dn_MtrB_AccelRaw_VeMSPR_b_MtrB_AccelRawFA_write_IRV
        (rtb_LeMSPR_b_MtrB_AccelRawFA__j);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  Chart: '<S24>/PokeMSPR_dn_MtrB_AccelRawChrt'
     *  SignalConversion generated from: '<S24>/VeMSPR_b_MtrB_AccelRaw_Rcvd_write'
     */
    Rte_IrvWrite_PokeMSPR_dn_MtrB_AccelRaw_VeMSPR_b_MtrB_AccelRaw_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_38' incorporates:
     *  SignalConversion generated from: '<S24>/VeMSPR_dn_MtrB_AccelRaw_write'
     * */
    Rte_IrvWrite_PokeMSPR_dn_MtrB_AccelRaw_VeMSPR_dn_MtrB_AccelRaw_write_IRV
        (MSPR_ac_B.LeMSPR_dn_MtrB_AccelRaw_out);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_dn_MtrB_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_dn_MtrC_AccelRaw(VAR(float32, AUTOMATIC)
    LeMSPR_dn_MtrC_AccelRaw, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrC_AccelRawFA)
{
    boolean rtb_LeMSPR_b_MtrC_AccelRawFA_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_dn_MtrC_AccelRaw' */
    /* Chart: '<S25>/PokeMSPR_dn_MtrC_AccelRawChrt' incorporates:
     *  SignalConversion generated from: '<S25>/LeMSPR_b_MtrC_AccelRawFA'
     *  SignalConversion generated from: '<S25>/LeMSPR_dn_MtrC_AccelRaw'
     */
    /* Gateway: PokeMSPR_dn_MtrC_AccelRaw/PokeMSPR_dn_MtrC_AccelRawChrt */
    /* During: PokeMSPR_dn_MtrC_AccelRaw/PokeMSPR_dn_MtrC_AccelRawChrt */
    /* Entry Internal: PokeMSPR_dn_MtrC_AccelRaw/PokeMSPR_dn_MtrC_AccelRawChrt */
    /* Transition: '<S421>:2' */
    if (!LeMSPR_b_MtrC_AccelRawFA)
    {
        /* Transition: '<S421>:3' */
        /* Transition: '<S421>:15' */
        MSPR_ac_B.LeMSPR_dn_MtrC_AccelRaw_out = LeMSPR_dn_MtrC_AccelRaw;
        rtb_LeMSPR_b_MtrC_AccelRawFA_ou = false;

        /* Transition: '<S421>:18' */
    }
    else
    {
        /* Transition: '<S421>:4' */
        rtb_LeMSPR_b_MtrC_AccelRawFA_ou = true;
    }

    /* End of Chart: '<S25>/PokeMSPR_dn_MtrC_AccelRawChrt' */

    /* SignalConversion generated from: '<S25>/PokeMSPR_dn_MtrC_AccelRawChrt' incorporates:
     *  SignalConversion generated from: '<S25>/VeMSPR_b_MtrC_AccelRawFA_write'
     *  SignalConversion generated from: '<S25>/VeMSPR_b_MtrC_AccelRawSgnl_Rcvd_write'
     *  SignalConversion generated from: '<S25>/VeMSPR_dn_MtrC_AccelRaw_write'
     */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_32' */
    Rte_IrvWrite_PokeMSPR_dn_MtrC_AccelRaw_VeMSPR_b_MtrC_AccelRawFA_write_IRV
        (rtb_LeMSPR_b_MtrC_AccelRawFA_ou);

    /* Merge: '<Root>/Merge_28' */
    Rte_IrvWrite_PokeMSPR_dn_MtrC_AccelRaw_VeMSPR_b_MtrC_AccelRaw_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_33' */
    Rte_IrvWrite_PokeMSPR_dn_MtrC_AccelRaw_VeMSPR_dn_MtrC_AccelRaw_write_IRV
        (MSPR_ac_B.LeMSPR_dn_MtrC_AccelRaw_out);

#endif

    /* End of SignalConversion generated from: '<S25>/PokeMSPR_dn_MtrC_AccelRawChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_dn_MtrC_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_e_P2Spd_Prfl_Enbl(VAR(TeMSPR_e_P2Spd_Prfl_Enbl,
    AUTOMATIC) LeMSPR_e_P2Spd_Prfl_Enbl, VAR(boolean, AUTOMATIC)
    LeMSPR_b_P2Spd_Prfl_EnblFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_e_P2Spd_Prfl_Enbl' */
    /* Chart: '<S26>/PokeMSPR_e_P2Spd_Prfl_EnblChrt' incorporates:
     *  SignalConversion generated from: '<S26>/LeMSPR_b_P2Spd_Prfl_EnblFA'
     */
    /* Gateway: PokeMSPR_e_P2Spd_Prfl_Enbl/PokeMSPR_e_P2Spd_Prfl_EnblChrt */
    /* During: PokeMSPR_e_P2Spd_Prfl_Enbl/PokeMSPR_e_P2Spd_Prfl_EnblChrt */
    /* Entry Internal: PokeMSPR_e_P2Spd_Prfl_Enbl/PokeMSPR_e_P2Spd_Prfl_EnblChrt */
    /* Transition: '<S422>:2' */
    if (!LeMSPR_b_P2Spd_Prfl_EnblFA)
    {
        /* SignalConversion generated from: '<S26>/VeMSPR_e_P2Spd_Prfl_Enbl_write' incorporates:
         *  Merge: '<Root>/Merge_24'
         *  SignalConversion generated from: '<S26>/LeMSPR_e_P2Spd_Prfl_Enbl'
         */
        /* Transition: '<S422>:3' */
        /* Transition: '<S422>:15' */
        Rte_IrvWrite_PokeMSPR_e_P2Spd_Prfl_Enbl_VeMSPR_e_P2Spd_Prfl_Enbl_write_IRV
            (LeMSPR_e_P2Spd_Prfl_Enbl);

        /* Transition: '<S422>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S26>/VeMSPR_e_P2Spd_Prfl_Enbl_write' incorporates:
         *  Merge: '<Root>/Merge_24'
         */
        /* Transition: '<S422>:4' */
        Rte_IrvWrite_PokeMSPR_e_P2Spd_Prfl_Enbl_VeMSPR_e_P2Spd_Prfl_Enbl_write_IRV
            (KeMSPR_e_P2Spd_Prfl_Enbl_Def);
    }

    /* End of Chart: '<S26>/PokeMSPR_e_P2Spd_Prfl_EnblChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_e_P2Spd_Prfl_Enbl' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MaxMtrCSpdLmt(VAR(float32, AUTOMATIC)
    LeMSPR_n_MaxMtrCSpdLmt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MaxMtrCSpdLmt' */
    /* Outport: '<Root>/VeMSPR_n_MaxMtrCSpdLmtRaw' incorporates:
     *  SignalConversion generated from: '<S27>/VeMSPR_n_MaxMtrCSpdLmtRaw_write'
     *  SignalConversion generated from: '<S27>/LeMSPR_n_MaxMtrCSpdLmt'
     */
    /* Gateway: PokeMSPR_n_MaxMtrCSpdLmt/PokeMSPR_n_MaxMtrCSpdLmtChrt */
    /* During: PokeMSPR_n_MaxMtrCSpdLmt/PokeMSPR_n_MaxMtrCSpdLmtChrt */
    /* Entry Internal: PokeMSPR_n_MaxMtrCSpdLmt/PokeMSPR_n_MaxMtrCSpdLmtChrt */
    /* Transition: '<S423>:2' */
    (void)Rte_Write_VeMSPR_n_MaxMtrCSpdLmtRaw_Value(LeMSPR_n_MaxMtrCSpdLmt);

    /* SignalConversion generated from: '<S27>/PokeMSPR_n_MaxMtrCSpdLmtChrt' incorporates:
     *  SignalConversion generated from: '<S27>/VeMSPR_b_MaxMtrCSpdLmt_Rcvd_write'
     *  SignalConversion generated from: '<S27>/VeMSPR_n_MaxMtrCSpdLmt_write'
     */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S27>/PokeMSPR_n_MaxMtrCSpdLmtChrt'
     */
    Rte_IrvWrite_PokeMSPR_n_MaxMtrCSpdLmt_VeMSPR_b_MaxMtrCSpdLmtSgnl_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S27>/LeMSPR_n_MaxMtrCSpdLmt'
     */
    Rte_IrvWrite_PokeMSPR_n_MaxMtrCSpdLmt_VeMSPR_n_MaxMtrCSpdLmt_Init_write_IRV
        (LeMSPR_n_MaxMtrCSpdLmt);

#endif

    /* End of SignalConversion generated from: '<S27>/PokeMSPR_n_MaxMtrCSpdLmtChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MaxMtrCSpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MaxP1SpdLmt(VAR(float32, AUTOMATIC)
    LeMSPR_n_MaxP1SpdLmt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MaxP1SpdLmt' */
    /* Outport: '<Root>/VeMSPR_n_MaxP1SpdLmtRaw' incorporates:
     *  SignalConversion generated from: '<S28>/VeMSPR_n_MaxP1SpdLmt'
     *  SignalConversion generated from: '<S28>/LeMSPR_n_MaxP1SpdLmt'
     */
    /* Gateway: PokeMSPR_n_MaxP1SpdLmt/PokeMSPR_n_MaxP1SpdLmtChrt */
    /* During: PokeMSPR_n_MaxP1SpdLmt/PokeMSPR_n_MaxP1SpdLmtChrt */
    /* Entry Internal: PokeMSPR_n_MaxP1SpdLmt/PokeMSPR_n_MaxP1SpdLmtChrt */
    /* Transition: '<S424>:2' */
    (void)Rte_Write_VeMSPR_n_MaxP1SpdLmtRaw_Value(LeMSPR_n_MaxP1SpdLmt);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S28>/PokeMSPR_n_MaxP1SpdLmtChrt'
     *  SignalConversion generated from: '<S28>/VeMSPR_b_MaxP1SpdLmt_Rcvd_write'
     */
    Rte_IrvWrite_PokeMSPR_n_MaxP1SpdLmt_VeMSPR_n_MaxP1SpdLmtSgnl_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S28>/LeMSPR_n_MaxP1SpdLmt'
     *  SignalConversion generated from: '<S28>/VeMSPR_n_MaxP1SpdLmt_write'
     */
    Rte_IrvWrite_PokeMSPR_n_MaxP1SpdLmt_VeMSPR_n_MaxP1SpdLmt_Init_write_IRV
        (LeMSPR_n_MaxP1SpdLmt);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MaxP1SpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MaxP1SpdLmt_AltSrc(VAR(float32, AUTOMATIC)
    LeMSPR_n_MaxP1SpdLmt_AltSrc, VAR(boolean, AUTOMATIC)
    LeMSPR_b_MaxP1SpdLmt_AltSrcFA)
{
    boolean rtb_LeMSPR_b_MaxP1SpdLmt_AltS_i;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MaxP1SpdLmt_AltSrc' */
    /* Chart: '<S29>/PokeMSPR_n_MaxP1SpdLmt_AltSrcChrt' incorporates:
     *  SignalConversion generated from: '<S29>/LeMSPR_b_MaxP1SpdLmt_AltSrcFA'
     *  SignalConversion generated from: '<S29>/LeMSPR_n_MaxP1SpdLmt_AltSrc'
     */
    /* Gateway: PokeMSPR_n_MaxP1SpdLmt_AltSrc/PokeMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* During: PokeMSPR_n_MaxP1SpdLmt_AltSrc/PokeMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* Entry Internal: PokeMSPR_n_MaxP1SpdLmt_AltSrc/PokeMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* Transition: '<S425>:2' */
    if (!LeMSPR_b_MaxP1SpdLmt_AltSrcFA)
    {
        /* Transition: '<S425>:3' */
        /* Transition: '<S425>:15' */
        MSPR_ac_B.LeMSPR_n_MaxP1SpdLmt_AltSrc_out = LeMSPR_n_MaxP1SpdLmt_AltSrc;
        rtb_LeMSPR_b_MaxP1SpdLmt_AltS_i = false;
        MSPR_ac_B.LeMSPR_b_MaxP1SpdLmt_AltSrcSgnl = true;

        /* Transition: '<S425>:18' */
    }
    else
    {
        /* Transition: '<S425>:4' */
        rtb_LeMSPR_b_MaxP1SpdLmt_AltS_i = true;
    }

    /* End of Chart: '<S29>/PokeMSPR_n_MaxP1SpdLmt_AltSrcChrt' */

    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S29>/VeMSPR_b_MaxP1SpdLmt_AltSrcFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MaxP1SpdLmt_AltSrc_VeMSPR_b_MaxP1SpdLmt_AltSrcFA_write_IRV
        (rtb_LeMSPR_b_MaxP1SpdLmt_AltS_i);

    /* Merge: '<Root>/Merge_19' incorporates:
     *  SignalConversion generated from: '<S29>/VeMSPR_b_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MaxP1SpdLmt_AltSrc_VeMSPR_n_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (MSPR_ac_B.LeMSPR_b_MaxP1SpdLmt_AltSrcSgnl);

    /* Merge: '<Root>/Merge_17' incorporates:
     *  SignalConversion generated from: '<S29>/VeMSPR_n_MaxP1SpdLmt_AltSrc_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MaxP1SpdLmt_AltSrc_VeMSPR_n_MaxP1SpdLmt_AltSrc_Init_write_IRV
        (MSPR_ac_B.LeMSPR_n_MaxP1SpdLmt_AltSrc_out);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MaxP1SpdLmt_AltSrc' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MaxP2SpdLmt(VAR(float32, AUTOMATIC)
    LeMSPR_n_MaxP2SpdLmt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MaxP2SpdLmt' */
    /* Outport: '<Root>/VeMSPR_n_MaxP2SpdLmtRaw' incorporates:
     *  SignalConversion generated from: '<S30>/LeMSPR_n_MaxP2SpdLmt_out'
     *  SignalConversion generated from: '<S30>/LeMSPR_n_MaxP2SpdLmt'
     */
    /* Gateway: PokeMSPR_n_MaxP2SpdLmt/PokeMSPR_n_MaxP2SpdLmtChrt */
    /* During: PokeMSPR_n_MaxP2SpdLmt/PokeMSPR_n_MaxP2SpdLmtChrt */
    /* Entry Internal: PokeMSPR_n_MaxP2SpdLmt/PokeMSPR_n_MaxP2SpdLmtChrt */
    /* Transition: '<S426>:2' */
    (void)Rte_Write_VeMSPR_n_MaxP2SpdLmtRaw_Value(LeMSPR_n_MaxP2SpdLmt);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S30>/PokeMSPR_n_MaxP2SpdLmtChrt'
     *  SignalConversion generated from: '<S30>/VeMSPR_b_MaxP2SpdLmt_Rcvd_write'
     */
    Rte_IrvWrite_PokeMSPR_n_MaxP2SpdLmt_VeMSPR_n_MaxP2SpdLmtSgnl_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S30>/LeMSPR_n_MaxP2SpdLmt'
     *  SignalConversion generated from: '<S30>/VeMSPR_n_MaxP2SpdLmt_write'
     */
    Rte_IrvWrite_PokeMSPR_n_MaxP2SpdLmt_VeMSPR_n_MaxP2SpdLmt_Init_write_IRV
        (LeMSPR_n_MaxP2SpdLmt);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MaxP2SpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MaxP2SpdLmt_AltSrc(VAR(float32, AUTOMATIC)
    LeMSPR_n_MaxP2SpdLmt_AltSrc, VAR(boolean, AUTOMATIC)
    LeMSPR_b_MaxP2SpdLmt_AltSrcFA)
{
    boolean rtb_LeMSPR_b_MaxP2SpdLmt_AltS_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MaxP2SpdLmt_AltSrc' */
    /* Chart: '<S31>/PokeMSPR_n_MaxP2SpdLmt_AltSrcChrt' incorporates:
     *  SignalConversion generated from: '<S31>/LeMSPR_b_MaxP2SpdLmt_AltSrcFA'
     *  SignalConversion generated from: '<S31>/LeMSPR_n_MaxP2SpdLmt_AltSrc'
     */
    /* Gateway: PokeMSPR_n_MaxP2SpdLmt_AltSrc/PokeMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* During: PokeMSPR_n_MaxP2SpdLmt_AltSrc/PokeMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* Entry Internal: PokeMSPR_n_MaxP2SpdLmt_AltSrc/PokeMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* Transition: '<S427>:2' */
    if (!LeMSPR_b_MaxP2SpdLmt_AltSrcFA)
    {
        /* Transition: '<S427>:3' */
        /* Transition: '<S427>:15' */
        MSPR_ac_B.LeMSPR_n_MaxP2SpdLmt_AltSrc_out = LeMSPR_n_MaxP2SpdLmt_AltSrc;
        rtb_LeMSPR_b_MaxP2SpdLmt_AltS_m = false;
        MSPR_ac_B.LeMSPR_b_MaxP2SpdLmt_AltSrcSgnl = true;

        /* Transition: '<S427>:18' */
    }
    else
    {
        /* Transition: '<S427>:4' */
        rtb_LeMSPR_b_MaxP2SpdLmt_AltS_m = true;
    }

    /* End of Chart: '<S31>/PokeMSPR_n_MaxP2SpdLmt_AltSrcChrt' */

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S31>/VeMSPR_b_MaxP2SpdLmt_AltSrcFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MaxP2SpdLmt_AltSrc_VeMSPR_b_MaxP2SpdLmt_AltSrcFA_write_IRV
        (rtb_LeMSPR_b_MaxP2SpdLmt_AltS_m);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S31>/VeMSPR_b_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MaxP2SpdLmt_AltSrc_VeMSPR_n_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (MSPR_ac_B.LeMSPR_b_MaxP2SpdLmt_AltSrcSgnl);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S31>/VeMSPR_n_MaxP2SpdLmt_AltSrc_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MaxP2SpdLmt_AltSrc_VeMSPR_n_MaxP2SpdLmt_AltSrc_Init_write_IRV
        (MSPR_ac_B.LeMSPR_n_MaxP2SpdLmt_AltSrc_out);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MaxP2SpdLmt_AltSrc' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MtrA_SpdRaw(VAR(float32, AUTOMATIC)
    LeMSPR_n_MtrA_SpdRaw, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrA_SpdRawFA)
{
    boolean rtb_LeMSPR_b_MtrA_SpdRawFA_ou_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MtrA_SpdRaw' */
    /* Chart: '<S32>/PokeMSPR_n_MtrA_SpdRawChrt' incorporates:
     *  SignalConversion generated from: '<S32>/LeMSPR_b_MtrA_SpdRawFA'
     */
    /* Gateway: PokeMSPR_n_MtrA_SpdRaw/PokeMSPR_n_MtrA_SpdRawChrt */
    /* During: PokeMSPR_n_MtrA_SpdRaw/PokeMSPR_n_MtrA_SpdRawChrt */
    /* Entry Internal: PokeMSPR_n_MtrA_SpdRaw/PokeMSPR_n_MtrA_SpdRawChrt */
    /* Transition: '<S428>:2' */
    if (!LeMSPR_b_MtrA_SpdRawFA)
    {
        /* SignalConversion generated from: '<S32>/VeMSPR_n_MtrA_SpdRaw_write' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S32>/LeMSPR_n_MtrA_SpdRaw'
         */
        /* Transition: '<S428>:3' */
        /* Transition: '<S428>:15' */
        Rte_IrvWrite_PokeMSPR_n_MtrA_SpdRaw_VeMSPR_n_MtrA_SpdRaw_Init_write_IRV
            (LeMSPR_n_MtrA_SpdRaw);
        rtb_LeMSPR_b_MtrA_SpdRawFA_ou_h = false;
        MSPR_ac_B.LeMSPR_b_MtrA_SpdRawSgnl_Rcvd = true;

        /* Transition: '<S428>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S32>/VeMSPR_n_MtrA_SpdRaw_write' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S32>/LeMSPR_n_MtrA_SpdRaw'
         */
        /* Transition: '<S428>:4' */
        Rte_IrvWrite_PokeMSPR_n_MtrA_SpdRaw_VeMSPR_n_MtrA_SpdRaw_Init_write_IRV
            (LeMSPR_n_MtrA_SpdRaw);
        rtb_LeMSPR_b_MtrA_SpdRawFA_ou_h = true;
    }

    /* End of Chart: '<S32>/PokeMSPR_n_MtrA_SpdRawChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S32>/VeMSPR_b_MtrA_SpdRawFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MtrA_SpdRaw_VeMSPR_b_MtrA_SpdRawFA_write_IRV
        (rtb_LeMSPR_b_MtrA_SpdRawFA_ou_h);

    /* Merge: '<Root>/Merge_40' incorporates:
     *  SignalConversion generated from: '<S32>/VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MtrA_SpdRaw_VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write_IRV
        (MSPR_ac_B.LeMSPR_b_MtrA_SpdRawSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MtrA_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MtrB_SpdRaw(VAR(float32, AUTOMATIC)
    LeMSPR_n_MtrB_SpdRaw, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrB_SpdRawFA)
{
    boolean rtb_LeMSPR_b_MtrB_SpdRawFA_ou_d;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MtrB_SpdRaw' */
    /* Chart: '<S33>/PokeMSPR_n_MtrB_SpdRawChrt' incorporates:
     *  SignalConversion generated from: '<S33>/LeMSPR_b_MtrB_SpdRawFA'
     */
    /* Gateway: PokeMSPR_n_MtrB_SpdRaw/PokeMSPR_n_MtrB_SpdRawChrt */
    /* During: PokeMSPR_n_MtrB_SpdRaw/PokeMSPR_n_MtrB_SpdRawChrt */
    /* Entry Internal: PokeMSPR_n_MtrB_SpdRaw/PokeMSPR_n_MtrB_SpdRawChrt */
    /* Transition: '<S429>:2' */
    if (!LeMSPR_b_MtrB_SpdRawFA)
    {
        /* SignalConversion generated from: '<S33>/VeMSPR_n_MtrB_SpdRaw_write' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S33>/LeMSPR_n_MtrB_SpdRaw'
         */
        /* Transition: '<S429>:3' */
        /* Transition: '<S429>:15' */
        Rte_IrvWrite_PokeMSPR_n_MtrB_SpdRaw_VeMSPR_n_MtrB_SpdRaw_Init_write_IRV
            (LeMSPR_n_MtrB_SpdRaw);
        rtb_LeMSPR_b_MtrB_SpdRawFA_ou_d = false;
        MSPR_ac_B.LeMSPR_b_MtrB_SpdRawSgnl_Rcvd = true;

        /* Transition: '<S429>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S33>/VeMSPR_n_MtrB_SpdRaw_write' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S33>/LeMSPR_n_MtrB_SpdRaw'
         */
        /* Transition: '<S429>:4' */
        Rte_IrvWrite_PokeMSPR_n_MtrB_SpdRaw_VeMSPR_n_MtrB_SpdRaw_Init_write_IRV
            (LeMSPR_n_MtrB_SpdRaw);
        rtb_LeMSPR_b_MtrB_SpdRawFA_ou_d = true;
    }

    /* End of Chart: '<S33>/PokeMSPR_n_MtrB_SpdRawChrt' */

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S33>/VeMSPR_b_MtrB_SpdRawFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MtrB_SpdRaw_VeMSPR_b_MtrB_SpdRawFA_write_IRV
        (rtb_LeMSPR_b_MtrB_SpdRawFA_ou_d);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S33>/VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_MtrB_SpdRaw_VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write_IRV
        (MSPR_ac_B.LeMSPR_b_MtrB_SpdRawSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MtrB_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_MtrC_SpdRaw(VAR(float32, AUTOMATIC)
    LeMSPR_n_MtrC_SpdRaw, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrC_SpdRawFA)
{
    boolean rtb_LeMSPR_b_MtrC_SpdRawFA_ou_o;

#if !Rte_SysCon_Variant_MSPR_1

    UNUSED_PARAMETER(LeMSPR_n_MtrC_SpdRaw);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_MtrC_SpdRaw' */
    /* Chart: '<S34>/PokeMSPR_n_MtrC_SpdRawChrt' incorporates:
     *  SignalConversion generated from: '<S34>/LeMSPR_b_MtrC_SpdRawFA'
     */
    /* Gateway: PokeMSPR_n_MtrC_SpdRaw/PokeMSPR_n_MtrC_SpdRawChrt */
    /* During: PokeMSPR_n_MtrC_SpdRaw/PokeMSPR_n_MtrC_SpdRawChrt */
    /* Entry Internal: PokeMSPR_n_MtrC_SpdRaw/PokeMSPR_n_MtrC_SpdRawChrt */
    /* Transition: '<S430>:2' */
    if (!LeMSPR_b_MtrC_SpdRawFA)
    {
        /* Transition: '<S430>:3' */
        /* Transition: '<S430>:15' */
        rtb_LeMSPR_b_MtrC_SpdRawFA_ou_o = false;
        MSPR_ac_B.LeMSPR_b_MtrC_SpdRawSgnl_Rcvd = true;

        /* Transition: '<S430>:18' */
    }
    else
    {
        /* Transition: '<S430>:4' */
        rtb_LeMSPR_b_MtrC_SpdRawFA_ou_o = true;
    }

    /* End of Chart: '<S34>/PokeMSPR_n_MtrC_SpdRawChrt' */

    /* SignalConversion generated from: '<S34>/PokeMSPR_n_MtrC_SpdRawChrt' incorporates:
     *  SignalConversion generated from: '<S34>/VeMSPR_b_MtrC_SpdRawFA_write'
     *  SignalConversion generated from: '<S34>/VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write'
     *  SignalConversion generated from: '<S34>/VeMSPR_n_MtrC_SpdRaw_write'
     */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_6' */
    Rte_IrvWrite_PokeMSPR_n_MtrC_SpdRaw_VeMSPR_b_MtrC_SpdRawFA_write_IRV
        (rtb_LeMSPR_b_MtrC_SpdRawFA_ou_o);

    /* Merge: '<Root>/Merge_27' */
    Rte_IrvWrite_PokeMSPR_n_MtrC_SpdRaw_VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write_IRV
        (MSPR_ac_B.LeMSPR_b_MtrC_SpdRawSgnl_Rcvd);

    /* Merge: '<Root>/Merge_5' */
    Rte_IrvWrite_PokeMSPR_n_MtrC_SpdRaw_VeMSPR_n_MtrC_SpdRaw_Init_write_IRV
        (LeMSPR_n_MtrC_SpdRaw);

#endif

    /* End of SignalConversion generated from: '<S34>/PokeMSPR_n_MtrC_SpdRawChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_MtrC_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_P2SpdControl_TgtSpd(VAR(float32, AUTOMATIC)
    LeMSPR_n_P2SpdControl_TgtSpd, VAR(boolean, AUTOMATIC)
    LeMSPR_b_P2SpdControl_TgtSpdFA)
{
    boolean rtb_LeMSPR_b_P2SpdControl_Tgt_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_P2SpdControl_TgtSpd' */
    /* Chart: '<S35>/PokeMSPR_n_P2SpdControl_TgtSpdChrt' incorporates:
     *  SignalConversion generated from: '<S35>/LeMSPR_b_P2SpdControl_TgtSpdFA'
     *  SignalConversion generated from: '<S35>/LeMSPR_n_P2SpdControl_TgtSpd'
     */
    /* Gateway: PokeMSPR_n_P2SpdControl_TgtSpd/PokeMSPR_n_P2SpdControl_TgtSpdChrt */
    /* During: PokeMSPR_n_P2SpdControl_TgtSpd/PokeMSPR_n_P2SpdControl_TgtSpdChrt */
    /* Entry Internal: PokeMSPR_n_P2SpdControl_TgtSpd/PokeMSPR_n_P2SpdControl_TgtSpdChrt */
    /* Transition: '<S431>:2' */
    if (!LeMSPR_b_P2SpdControl_TgtSpdFA)
    {
        /* Transition: '<S431>:3' */
        /* Transition: '<S431>:15' */
        MSPR_ac_B.LeMSPR_n_P2SpdControl_TgtSpd_ou = LeMSPR_n_P2SpdControl_TgtSpd;
        rtb_LeMSPR_b_P2SpdControl_Tgt_j = false;

        /* Transition: '<S431>:18' */
    }
    else
    {
        /* Transition: '<S431>:4' */
        rtb_LeMSPR_b_P2SpdControl_Tgt_j = true;
    }

    /* End of Chart: '<S35>/PokeMSPR_n_P2SpdControl_TgtSpdChrt' */

    /* Merge: '<Root>/Merge_26' incorporates:
     *  SignalConversion generated from: '<S35>/VeMSPR_b_P2SpdControl_TgtSpdFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_P2SpdControl_TgtSpd_VeMSPR_b_P2SpdControl_TgtSpdFA_write_IRV
        (rtb_LeMSPR_b_P2SpdControl_Tgt_j);

    /* Merge: '<Root>/Merge_25' incorporates:
     *  SignalConversion generated from: '<S35>/VeMSPR_n_P2SpdControl_TgtSpd_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_P2SpdControl_TgtSpd_VeMSPR_n_P2SpdControl_TgtSpd_Init_write_IRV
        (MSPR_ac_B.LeMSPR_n_P2SpdControl_TgtSpd_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_P2SpdControl_TgtSpd' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_n_P2TgtSpd(VAR(float32, AUTOMATIC)
    LeMSPR_n_P2TgtSpd, VAR(boolean, AUTOMATIC) LeMSPR_b_P2TgtSpdFA)
{
    boolean rtb_LeMSPR_b_P2TgtSpdFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeMSPR_n_P2TgtSpd' */
    /* Chart: '<S36>/PokeMSPR_n_P2TgtSpdChrt' incorporates:
     *  SignalConversion generated from: '<S36>/LeMSPR_b_P2TgtSpdFA'
     *  SignalConversion generated from: '<S36>/LeMSPR_n_P2TgtSpd'
     */
    /* Gateway: PokeMSPR_n_P2TgtSpd/PokeMSPR_n_P2TgtSpdChrt */
    /* During: PokeMSPR_n_P2TgtSpd/PokeMSPR_n_P2TgtSpdChrt */
    /* Entry Internal: PokeMSPR_n_P2TgtSpd/PokeMSPR_n_P2TgtSpdChrt */
    /* Transition: '<S432>:2' */
    if (!LeMSPR_b_P2TgtSpdFA)
    {
        /* Transition: '<S432>:3' */
        /* Transition: '<S432>:15' */
        MSPR_ac_B.LeMSPR_n_P2TgtSpd_out = LeMSPR_n_P2TgtSpd;
        rtb_LeMSPR_b_P2TgtSpdFA_out_o = false;

        /* Transition: '<S432>:18' */
    }
    else
    {
        /* Transition: '<S432>:4' */
        rtb_LeMSPR_b_P2TgtSpdFA_out_o = true;
    }

    /* End of Chart: '<S36>/PokeMSPR_n_P2TgtSpdChrt' */

    /* Merge: '<Root>/Merge_30' incorporates:
     *  SignalConversion generated from: '<S36>/VeMSPR_b_P2TgtSpdFA_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_P2TgtSpd_VeMSPR_b_P2TgtSpdFA_write_IRV
        (rtb_LeMSPR_b_P2TgtSpdFA_out_o);

    /* Merge: '<Root>/Merge_29' incorporates:
     *  SignalConversion generated from: '<S36>/VeMSPR_n_P2TgtSpd_write'
     * */
    Rte_IrvWrite_PokeMSPR_n_P2TgtSpd_VeMSPR_n_P2TgtSpd_Init_write_IRV
        (MSPR_ac_B.LeMSPR_n_P2TgtSpd_out);

    /* End of Outputs for SubSystem: '<Root>/PokeMSPR_n_P2TgtSpd' */
}

/* Output function */
FUNC(void, MSPR_CODE) PokeMSPR_t_MtrBTimeStamp(VAR(float32, AUTOMATIC)
    LeMSPR_t_MtrBTimeStamp, VAR(boolean, AUTOMATIC) LeMSPR_b_MtrBTimeStampFA)
{
    UNUSED_PARAMETER(LeMSPR_t_MtrBTimeStamp);
    UNUSED_PARAMETER(LeMSPR_b_MtrBTimeStampFA);

    /* Gateway: PokeMSPR_t_MtrBTimeStamp/PokeMSPR_t_MtrBTimeStampChrt */
    /* During: PokeMSPR_t_MtrBTimeStamp/PokeMSPR_t_MtrBTimeStampChrt */
    /* Entry Internal: PokeMSPR_t_MtrBTimeStamp/PokeMSPR_t_MtrBTimeStampChrt */
    /* Transition: '<S433>:2' */
}

/* Output function */
FUNC(void, MSPR_CODE) MSPR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/MSPR_PwrOn'
     */
    /* S-Function (fcgen): '<S19>/FcnCallGen' incorporates:
     *  SubSystem: '<S19>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S415>/VeMSPR_n_MtrA_SpdRaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrA_S = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MtrA_SpdFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_S = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_n_MtrB_SpdRaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrB_S = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MtrB_SpdFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_S = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_dn_MtrA_AccelRaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_MtrA_ = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_dn_MtrB_AccelRaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_MtrB_ = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_phi_MtrBPosAngle_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_phi_MtrB = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MtrBPosAngleFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrBPo = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_n_MaxP1SpdLmt_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP1S = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_n_MaxP2SpdLmt_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP2S = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MaxP1SpdLmtFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP1S = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MaxP2SpdLmtFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP2S = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_e_P2Spd_Prfl_Enbl_Out_Init' incorporates:
     *  Constant: '<S415>/Const13'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_P2Spd_ = MSPR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S415>/VeMSPR_n_P2SpdControl_TgtSpd_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_P2SpdC = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_P2SpdControl_TgtSpdFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_P2SpdC = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_e_MtrASpd_Src_Out_Init' incorporates:
     *  Constant: '<S415>/Const16'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_MtrASp = MSPR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S415>/VeMSPR_e_MtrBSpd_Src_Out_Init' incorporates:
     *  Constant: '<S415>/Const17'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_MtrBSp = MSPR_ac_ConstB.Const17;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MtrA_SpdFARaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_j = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MtrB_SpdFARaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_c = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_n_P2TgtSpd_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_P2TgtS = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_P2TgtSpdFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_P2TgtS = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_e_MtrCSpd_Src_Out_Init' incorporates:
     *  Constant: '<S415>/Const22'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_MtrCSp = MSPR_ac_ConstB.Const22;

    /* SignalConversion generated from: '<S415>/VeMSPR_n_MtrC_SpdRaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrC_S = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MtrC_SpdFA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_S = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_dn_MtrC_AccelRaw_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_MtrC_ = 0.0F;

    /* SignalConversion generated from: '<S415>/VeMSPR_b_MaxMtrCSpdLmt_FA_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_b_MaxMtr = false;

    /* SignalConversion generated from: '<S415>/VeMSPR_n_MaxMtrCSpdLmt_Out_Init' */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxMtr = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S19>/FcnCallGen' */

    /* Outport: '<Root>/VeMSPR_b_MaxMtrCSpdLmt_FA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MaxMtrCSpdLmt_FA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MaxMtrCSpdLmt_FA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxMtr);

    /* Outport: '<Root>/VeMSPR_b_MaxP1SpdLmtFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MaxP1SpdLmtFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MaxP1SpdLmtFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP1S);

    /* Outport: '<Root>/VeMSPR_b_MaxP2SpdLmtFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MaxP2SpdLmtFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MaxP2SpdLmtFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MaxP2S);

    /* Outport: '<Root>/VeMSPR_b_MtrA_SpdFARaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MtrA_SpdFARaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MtrA_SpdFARaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_j);

    /* Outport: '<Root>/VeMSPR_b_MtrA_SpdFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MtrA_SpdFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MtrA_SpdFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrA_S);

    /* Outport: '<Root>/VeMSPR_b_MtrBPosAngleFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MtrBPosAngleFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MtrBPosAngleFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrBPo);

    /* Outport: '<Root>/VeMSPR_b_MtrB_SpdFARaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MtrB_SpdFARaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MtrB_SpdFARaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_c);

    /* Outport: '<Root>/VeMSPR_b_MtrB_SpdFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MtrB_SpdFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MtrB_SpdFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrB_S);

    /* Outport: '<Root>/VeMSPR_b_MtrC_SpdFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_MtrC_SpdFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_MtrC_SpdFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_MtrC_S);

    /* Outport: '<Root>/VeMSPR_b_P2SpdControl_TgtSpdFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_P2SpdControl_TgtSpdFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_P2SpdControl_TgtSpdFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_P2SpdC);

    /* Outport: '<Root>/VeMSPR_b_P2TgtSpdFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_b_P2TgtSpdFA_Out_Init'
     */
    (void)Rte_Write_VeMSPR_b_P2TgtSpdFA_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_b_P2TgtS);

    /* Outport: '<Root>/VeMSPR_dn_MtrA_AccelRaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_dn_MtrA_AccelRaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_dn_MtrA_AccelRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_dn_MtrA_);

    /* Outport: '<Root>/VeMSPR_dn_MtrB_AccelRaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_dn_MtrB_AccelRaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_dn_MtrB_AccelRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_dn_MtrB_);

    /* Outport: '<Root>/VeMSPR_dn_MtrC_AccelRaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_dn_MtrC_AccelRaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_dn_MtrC_AccelRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_dn_MtrC_);

    /* Outport: '<Root>/VeMSPR_e_MtrASpd_Src' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_e_MtrASpd_Src_Out_Init'
     *  SignalConversion generated from: '<S415>/VeMSPR_e_MtrASpd_Src_Out_Init'
     */
    (void)Rte_Write_VeMSPR_e_MtrASpd_Src_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_e_MtrASp);

    /* Outport: '<Root>/VeMSPR_e_MtrBSpd_Src' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_e_MtrBSpd_Src_Out_Init'
     *  SignalConversion generated from: '<S415>/VeMSPR_e_MtrBSpd_Src_Out_Init'
     */
    (void)Rte_Write_VeMSPR_e_MtrBSpd_Src_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_e_MtrBSp);

    /* Outport: '<Root>/VeMSPR_e_MtrCSpd_Src' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_e_MtrCSpd_Src_Out_Init'
     *  SignalConversion generated from: '<S415>/VeMSPR_e_MtrCSpd_Src_Out_Init'
     */
    (void)Rte_Write_VeMSPR_e_MtrCSpd_Src_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_e_MtrCSp);

    /* Outport: '<Root>/VeMSPR_e_P2Spd_Prfl_Enbl' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_e_P2Spd_Prfl_Enbl_Out_Init'
     *  SignalConversion generated from: '<S415>/VeMSPR_e_P2Spd_Prfl_Enbl_Out_Init'
     */
    (void)Rte_Write_VeMSPR_e_P2Spd_Prfl_Enbl_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_e_P2Spd_);

    /* Outport: '<Root>/VeMSPR_n_MaxMtrCSpdLmt' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_MaxMtrCSpdLmt_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_MaxMtrCSpdLmt_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxMtr);

    /* Outport: '<Root>/VeMSPR_n_MaxP1SpdLmt' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_MaxP1SpdLmt_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_MaxP1SpdLmt_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP1S);

    /* Outport: '<Root>/VeMSPR_n_MaxP2SpdLmt' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_MaxP2SpdLmt_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_MaxP2SpdLmt_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP2S);

    /* Outport: '<Root>/VeMSPR_n_MtrA_SpdRaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_MtrA_SpdRaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_MtrA_SpdRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MtrA_S);

    /* Outport: '<Root>/VeMSPR_n_MtrB_SpdRaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_MtrB_SpdRaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_MtrB_SpdRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MtrB_S);

    /* Outport: '<Root>/VeMSPR_n_MtrC_SpdRaw' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_MtrC_SpdRaw_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_MtrC_SpdRaw_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_MtrC_S);

    /* Outport: '<Root>/VeMSPR_n_P2SpdControl_TgtSpd' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_P2SpdControl_TgtSpd_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_P2SpdControl_TgtSpd_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_P2SpdC);

    /* Outport: '<Root>/VeMSPR_n_P2TgtSpd' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_n_P2TgtSpd_Out_Init'
     */
    (void)Rte_Write_VeMSPR_n_P2TgtSpd_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_n_P2TgtS);

    /* Outport: '<Root>/VeMSPR_phi_MtrBPosAngle' incorporates:
     *  SignalConversion generated from: '<S19>/VeMSPR_phi_MtrBPosAngle_Out_Init'
     */
    (void)Rte_Write_VeMSPR_phi_MtrBPosAngle_Value
        (MSPR_ac_B.OutportBufferForVeMSPR_phi_MtrB);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MCPA_TrqMntrWarn(void)
{
    /* Gateway: TmotMSPR_b_MCPA_TrqMntrWarn/TmotMSPR_b_MCPA_TrqMntrWarnChrt */
    /* During: TmotMSPR_b_MCPA_TrqMntrWarn/TmotMSPR_b_MCPA_TrqMntrWarnChrt */
    /* Entry Internal: TmotMSPR_b_MCPA_TrqMntrWarn/TmotMSPR_b_MCPA_TrqMntrWarnChrt */
    /* Transition: '<S434>:2' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MCPB_TrqMntrWarn(void)
{
    /* Gateway: TmotMSPR_b_MCPB_TrqMntrWarn/TmotMSPR_b_MCPB_TrqMntrWarnChrt */
    /* During: TmotMSPR_b_MCPB_TrqMntrWarn/TmotMSPR_b_MCPB_TrqMntrWarnChrt */
    /* Entry Internal: TmotMSPR_b_MCPB_TrqMntrWarn/TmotMSPR_b_MCPB_TrqMntrWarnChrt */
    /* Transition: '<S435>:2' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MtrA_AccelRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_b_MtrA_AccelRaw' */
    /* Merge: '<Root>/Merge_41' incorporates:
     *  Chart: '<S40>/TmotMSPR_b_MtrA_AccelRawChrt'
     *  SignalConversion generated from: '<S40>/VeMSPR_b_MtrA_AccelRawSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_b_MtrA_AccelRaw/TmotMSPR_b_MtrA_AccelRawChrt */
    /* During: TmotMSPR_b_MtrA_AccelRaw/TmotMSPR_b_MtrA_AccelRawChrt */
    /* Entry Internal: TmotMSPR_b_MtrA_AccelRaw/TmotMSPR_b_MtrA_AccelRawChrt */
    /* Transition: '<S436>:2' */
    Rte_IrvWrite_TmotMSPR_b_MtrA_AccelRaw_VeMSPR_b_MtrA_AccelRaw_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_b_MtrA_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MtrA_SpdRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_b_MtrA_SpdRaw' */
    /* Merge: '<Root>/Merge_40' incorporates:
     *  Chart: '<S41>/TmotMSPR_b_MtrA_SpdRawChrt'
     *  SignalConversion generated from: '<S41>/VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_b_MtrA_SpdRaw/TmotMSPR_b_MtrA_SpdRawChrt */
    /* During: TmotMSPR_b_MtrA_SpdRaw/TmotMSPR_b_MtrA_SpdRawChrt */
    /* Entry Internal: TmotMSPR_b_MtrA_SpdRaw/TmotMSPR_b_MtrA_SpdRawChrt */
    /* Transition: '<S437>:2' */
    Rte_IrvWrite_TmotMSPR_b_MtrA_SpdRaw_VeMSPR_b_MtrA_SpdRawSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_b_MtrA_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MtrB_AccelRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_b_MtrB_AccelRaw' */
    /* Merge: '<Root>/Merge_15' incorporates:
     *  Chart: '<S42>/TmotMSPR_b_MtrB_AccelRawChrt'
     *  SignalConversion generated from: '<S42>/VeMSPR_b_MtrB_AccelRawSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_b_MtrB_AccelRaw/TmotMSPR_b_MtrB_AccelRawChrt */
    /* During: TmotMSPR_b_MtrB_AccelRaw/TmotMSPR_b_MtrB_AccelRawChrt */
    /* Entry Internal: TmotMSPR_b_MtrB_AccelRaw/TmotMSPR_b_MtrB_AccelRawChrt */
    /* Transition: '<S438>:2' */
    Rte_IrvWrite_TmotMSPR_b_MtrB_AccelRaw_VeMSPR_b_MtrB_AccelRaw_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_b_MtrB_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MtrB_SpdRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_b_MtrB_SpdRaw' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S43>/TmotMSPR_b_MtrB_SpdRawChrt'
     *  SignalConversion generated from: '<S43>/VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_b_MtrB_SpdRaw/TmotMSPR_b_MtrB_SpdRawChrt */
    /* During: TmotMSPR_b_MtrB_SpdRaw/TmotMSPR_b_MtrB_SpdRawChrt */
    /* Entry Internal: TmotMSPR_b_MtrB_SpdRaw/TmotMSPR_b_MtrB_SpdRawChrt */
    /* Transition: '<S439>:2' */
    Rte_IrvWrite_TmotMSPR_b_MtrB_SpdRaw_VeMSPR_b_MtrB_SpdRawSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_b_MtrB_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MtrC_AccelRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_b_MtrC_AccelRaw' */
    /* SignalConversion generated from: '<S44>/TmotMSPR_b_MtrC_AccelRawChrt' incorporates:
     *  SignalConversion generated from: '<S44>/VeMSPR_b_MtrC_AccelRawSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_b_MtrC_AccelRaw/TmotMSPR_b_MtrC_AccelRawChrt */
    /* During: TmotMSPR_b_MtrC_AccelRaw/TmotMSPR_b_MtrC_AccelRawChrt */
    /* Entry Internal: TmotMSPR_b_MtrC_AccelRaw/TmotMSPR_b_MtrC_AccelRawChrt */
    /* Transition: '<S440>:2' */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_28' incorporates:
     *  Chart: '<S44>/TmotMSPR_b_MtrC_AccelRawChrt'
     */
    Rte_IrvWrite_TmotMSPR_b_MtrC_AccelRaw_VeMSPR_b_MtrC_AccelRaw_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S44>/TmotMSPR_b_MtrC_AccelRawChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_b_MtrC_AccelRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_b_MtrC_SpdRaw(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_b_MtrC_SpdRaw' */
    /* SignalConversion generated from: '<S45>/TmotMSPR_b_MtrC_SpdRawChrt' incorporates:
     *  SignalConversion generated from: '<S45>/VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_b_MtrC_SpdRaw/TmotMSPR_b_MtrC_SpdRawChrt */
    /* During: TmotMSPR_b_MtrC_SpdRaw/TmotMSPR_b_MtrC_SpdRawChrt */
    /* Entry Internal: TmotMSPR_b_MtrC_SpdRaw/TmotMSPR_b_MtrC_SpdRawChrt */
    /* Transition: '<S441>:2' */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_27' incorporates:
     *  Chart: '<S45>/TmotMSPR_b_MtrC_SpdRawChrt'
     */
    Rte_IrvWrite_TmotMSPR_b_MtrC_SpdRaw_VeMSPR_b_MtrC_SpdRawSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S45>/TmotMSPR_b_MtrC_SpdRawChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_b_MtrC_SpdRaw' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_cnt_MtrBPosCnt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_cnt_MtrBPosCnt' */
    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S46>/TmotMSPR_cnt_MtrBPosCntChrt'
     *  SignalConversion generated from: '<S46>/VeMSPR_cnt_MtrBPosCntSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_cnt_MtrBPosCnt/TmotMSPR_cnt_MtrBPosCntChrt */
    /* During: TmotMSPR_cnt_MtrBPosCnt/TmotMSPR_cnt_MtrBPosCntChrt */
    /* Entry Internal: TmotMSPR_cnt_MtrBPosCnt/TmotMSPR_cnt_MtrBPosCntChrt */
    /* Transition: '<S442>:2' */
    Rte_IrvWrite_TmotMSPR_cnt_MtrBPosCnt_VeMSPR_cnt_MtrBPosCntSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_cnt_MtrBPosCnt' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_n_MaxMtrCSpdLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_n_MaxMtrCSpdLmt' */
    /* SignalConversion generated from: '<S47>/TmotMSPR_n_MaxMtrCSpdLmtChrt' incorporates:
     *  SignalConversion generated from: '<S47>/VeMSPR_n_MaxMtrCSpdLmtSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_n_MaxMtrCSpdLmt/TmotMSPR_n_MaxMtrCSpdLmtChrt */
    /* During: TmotMSPR_n_MaxMtrCSpdLmt/TmotMSPR_n_MaxMtrCSpdLmtChrt */
    /* Entry Internal: TmotMSPR_n_MaxMtrCSpdLmt/TmotMSPR_n_MaxMtrCSpdLmtChrt */
    /* Transition: '<S443>:2' */
#if Rte_SysCon_Variant_MSPR_1

    /* Merge: '<Root>/Merge_36' incorporates:
     *  Chart: '<S47>/TmotMSPR_n_MaxMtrCSpdLmtChrt'
     */
    Rte_IrvWrite_TmotMSPR_n_MaxMtrCSpdLmt_VeMSPR_b_MaxMtrCSpdLmtSgnl_Rcvd_write_IRV
        (false);

#endif

    /* End of SignalConversion generated from: '<S47>/TmotMSPR_n_MaxMtrCSpdLmtChrt' */
    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_n_MaxMtrCSpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_n_MaxP1SpdLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_n_MaxP1SpdLmt' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S48>/TmotMSPR_n_MaxP1SpdLmtChrt'
     *  SignalConversion generated from: '<S48>/VeMSPR_n_MaxP1SpdLmtSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_n_MaxP1SpdLmt/TmotMSPR_n_MaxP1SpdLmtChrt */
    /* During: TmotMSPR_n_MaxP1SpdLmt/TmotMSPR_n_MaxP1SpdLmtChrt */
    /* Entry Internal: TmotMSPR_n_MaxP1SpdLmt/TmotMSPR_n_MaxP1SpdLmtChrt */
    /* Transition: '<S444>:2' */
    Rte_IrvWrite_TmotMSPR_n_MaxP1SpdLmt_VeMSPR_n_MaxP1SpdLmtSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_n_MaxP1SpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_n_MaxP1SpdLmt_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_n_MaxP1SpdLmt_AltSrc' */
    /* Merge: '<Root>/Merge_19' incorporates:
     *  Chart: '<S49>/TmotMSPR_n_MaxP1SpdLmt_AltSrcChrt'
     *  SignalConversion generated from: '<S49>/VeMSPR_n_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_n_MaxP1SpdLmt_AltSrc/TmotMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* During: TmotMSPR_n_MaxP1SpdLmt_AltSrc/TmotMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* Entry Internal: TmotMSPR_n_MaxP1SpdLmt_AltSrc/TmotMSPR_n_MaxP1SpdLmt_AltSrcChrt */
    /* Transition: '<S445>:2' */
    Rte_IrvWrite_TmotMSPR_n_MaxP1SpdLmt_AltSrc_VeMSPR_n_MaxP1SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_n_MaxP1SpdLmt_AltSrc' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_n_MaxP2SpdLmt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_n_MaxP2SpdLmt' */
    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S50>/TmotMSPR_n_MaxP2SpdLmtChrt'
     *  SignalConversion generated from: '<S50>/VeMSPR_n_MaxP2SpdLmtSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_n_MaxP2SpdLmt/TmotMSPR_n_MaxP2SpdLmtChrt */
    /* During: TmotMSPR_n_MaxP2SpdLmt/TmotMSPR_n_MaxP2SpdLmtChrt */
    /* Entry Internal: TmotMSPR_n_MaxP2SpdLmt/TmotMSPR_n_MaxP2SpdLmtChrt */
    /* Transition: '<S446>:2' */
    Rte_IrvWrite_TmotMSPR_n_MaxP2SpdLmt_VeMSPR_n_MaxP2SpdLmtSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_n_MaxP2SpdLmt' */
}

/* Output function */
FUNC(void, MSPR_CODE) TmotMSPR_n_MaxP2SpdLmt_AltSrc(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotMSPR_n_MaxP2SpdLmt_AltSrc' */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Chart: '<S51>/TmotMSPR_n_MaxP2SpdLmt_AltSrcChrt'
     *  SignalConversion generated from: '<S51>/VeMSPR_n_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write'
     */
    /* Gateway: TmotMSPR_n_MaxP2SpdLmt_AltSrc/TmotMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* During: TmotMSPR_n_MaxP2SpdLmt_AltSrc/TmotMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* Entry Internal: TmotMSPR_n_MaxP2SpdLmt_AltSrc/TmotMSPR_n_MaxP2SpdLmt_AltSrcChrt */
    /* Transition: '<S447>:2' */
    Rte_IrvWrite_TmotMSPR_n_MaxP2SpdLmt_AltSrc_VeMSPR_n_MaxP2SpdLmt_AltSrcSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotMSPR_n_MaxP2SpdLmt_AltSrc' */
}

/* Model initialize function */
FUNC(void, MSPR_CODE) MSPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/MSPR_PUP'
     */
    /* SystemInitialize for S-Function (fcgen): '<S18>/FcnCallGen' incorporates:
     *  SubSystem: '<S18>/MSPO_InitMtrSpd'
     */

    /* SystemInitialize for S-Function (fcgen): '<S18>/FcnCallGen' incorporates:
     *  SubSystem: '<S18>/MSPI_Init_Processing'
     */
    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MtrA_SpdRaw_Init' incorporates:
     *  Constant: '<S409>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrA_o = KeMSPR_n_MtrASpd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MtrB_SpdRaw_Init' incorporates:
     *  Constant: '<S410>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrB_h = KeMSPR_n_MtrBSpd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_dn_MtrA_AccelRaw_Init' incorporates:
     *  Constant: '<S401>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_Mtr_c = KeMSPR_dn_MtrA_Accel_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_dn_MtrB_AccelRaw_Init' incorporates:
     *  Constant: '<S402>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_Mtr_o = KeMSPR_dn_MtrB_Accel_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_cnt_MtrBPosCnt_init' incorporates:
     *  Constant: '<S400>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_cnt_MtrB = KeMSPR_Cnt_MtrBPosCnt_init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MaxP1SpdLmt_Init' incorporates:
     *  Constant: '<S406>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_i = KeMSPR_n_MaxP1SpdLmt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MaxP2SpdLmt_Init' incorporates:
     *  Constant: '<S408>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_l = KeMSPR_n_MaxP2SpdLmt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MaxP1SpdLmt_AltSrc_Init' incorporates:
     *  Constant: '<S405>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_d = KeMSPR_n_MaxP1SpdLmt_AltSrc_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MaxP2SpdLmt_AltSrc_Init' incorporates:
     *  Constant: '<S407>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxP_o = KeMSPR_n_MaxP2SpdLmt_AltSrc_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_b_P2Spd_Prfl_Enbl_Init' incorporates:
     *  Constant: '<S399>/Constant'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_b_P2Spd_ = MSPR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_P2SpdControl_TgtSpd_Init' incorporates:
     *  Constant: '<S412>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_P2Sp_e =
        KeMSPR_n_P2SpdControl_TgtSpd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_P2TgtSpd_Init' incorporates:
     *  Constant: '<S413>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_P2Tg_p = KeMSPR_n_P2TgtSpd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MtrC_SpdRaw_Init' incorporates:
     *  Constant: '<S411>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MtrC_f = KeMSPR_n_MtrCSpd_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_dn_MtrC_AccelRaw_Init' incorporates:
     *  Constant: '<S403>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_dn_Mt_os = KeMSPR_dn_MtrC_Accel_Init;

    /* SystemInitialize for SignalConversion generated from: '<S397>/VeMSPR_n_MaxMtrCSpdLmt_Init' incorporates:
     *  Constant: '<S404>/Calib'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_n_MaxM_i = KeMSPR_n_MaxMtrCSpdLmt_Init;

    /* End of SystemInitialize for S-Function (fcgen): '<S18>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/MSPR_FastTEF'
     */
    /* SystemInitialize for S-Function (fcgen): '<S17>/FcnCallGen' incorporates:
     *  SubSystem: '<S17>/MSPC_FilterMtrSpd'
     */

    /* InitializeConditions for UnitDelay: '<S83>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_b = 1.0F;

    /* InitializeConditions for UnitDelay: '<S98>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_g = 1.0F;

#if Rte_SysCon_Variant_MSPR_1

    /* SystemInitialize for Atomic SubSystem: '<S68>/MtrC_Management' */
    /* SystemInitialize for Atomic SubSystem: '<S80>/MtrC_Management' */
    /* InitializeConditions for UnitDelay: '<S295>/Unit Delay1' */
    MSPR_ac_DW.UnitDelay1_DSTATE_k = 1.0F;

    /* End of SystemInitialize for SubSystem: '<S80>/MtrC_Management' */
    /* End of SystemInitialize for SubSystem: '<S68>/MtrC_Management' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S17>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/MSPR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S19>/FcnCallGen' incorporates:
     *  SubSystem: '<S19>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S415>/VeMSPR_e_P2Spd_Prfl_Enbl_Out_Init' incorporates:
     *  Constant: '<S415>/Const13'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_P2Spd_ = MSPR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S415>/VeMSPR_e_MtrASpd_Src_Out_Init' incorporates:
     *  Constant: '<S415>/Const16'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_MtrASp = MSPR_ac_ConstB.Const16;

    /* SystemInitialize for SignalConversion generated from: '<S415>/VeMSPR_e_MtrBSpd_Src_Out_Init' incorporates:
     *  Constant: '<S415>/Const17'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_MtrBSp = MSPR_ac_ConstB.Const17;

    /* SystemInitialize for SignalConversion generated from: '<S415>/VeMSPR_e_MtrCSpd_Src_Out_Init' incorporates:
     *  Constant: '<S415>/Const22'
     */
    MSPR_ac_B.OutportBufferForVeMSPR_e_MtrCSp = MSPR_ac_ConstB.Const22;

    /* End of SystemInitialize for S-Function (fcgen): '<S19>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeMSPR_e_P2Spd_Prfl_Enbl' incorporates:
     *  Merge: '<Root>/Merge_Outport_17'
     */
    (void)Rte_Write_VeMSPR_e_P2Spd_Prfl_Enbl_Value(CeMSPR_e_P2Spd_Prfl_Not_Enbl);

    /* SystemInitialize for Outport: '<Root>/VeMSPR_e_MtrASpd_Src' incorporates:
     *  Merge: '<Root>/Merge_Outport_20'
     */
    (void)Rte_Write_VeMSPR_e_MtrASpd_Src_Value(CeMSPR_e_MtrSpSrc_MCP);

    /* SystemInitialize for Outport: '<Root>/VeMSPR_e_MtrBSpd_Src' incorporates:
     *  Merge: '<Root>/Merge_Outport_21'
     */
    (void)Rte_Write_VeMSPR_e_MtrBSpd_Src_Value(CeMSPR_e_MtrSpSrc_MCP);

    /* SystemInitialize for Outport: '<Root>/VeMSPR_e_MtrCSpd_Src' incorporates:
     *  Merge: '<Root>/Merge_Outport_26'
     */
    (void)Rte_Write_VeMSPR_e_MtrCSpd_Src_Value(CeMSPR_e_MtrSpSrc_MCP);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
